#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_8229c0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_2026810;
extern __int64 GameData_22416c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212d728[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_2130e70;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
void GmapSpotMenu_Unknown95();
__int64 GmapSpotMenu_Unknown96(_QWORD* a1);
__int64 GmapSpotMenu_Unknown133(__int64 a1);
__int64 GmapSpotMenu_Unknown143(__int64 a1, __int64* a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_TraderMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64 game_gmap_GmapSpotMenu_CreateBind_lambda0_Invoke(__int64 result,
                                                         __int64* a2);
__int64 game_gmap_GmapSpotMenu_CreateBind_lambda1_Invoke(__int64 a1,
                                                         __int64** a2,
                                                         __int64* a3);
__int64 BasicMenu_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CorpsManager_9726e0(_QWORD);
__int64 GameRoutine_133f0c0(_QWORD);
__int64 GameRoutine_14da280(void);
__int64 GameRoutine_16e3a80(_QWORD);
__int64 GameRoutine_714b20(_QWORD);
__int64 GameRoutine_889be0(_QWORD);
__int64 GameRoutine_ae4100(_QWORD, _QWORD, _QWORD);
__int64 GmapSituation_14d7700(void);
__int64 GmapSituation_14d7ae0(void);
__int64 GmapSituation_14d7f60(_QWORD);
__int64 GmapSituation_14d80a0(void);
__int64 GmapSituation_14d8840(void);
__int64 GmapSituation_14d8ae0(void);
__int64 GmapSituation_14d91e0(void);
__int64 GmapSituation_14d9a80(void);
__int64 GmapSituation_14d9ce0(void);
__int64 GmapSituation_14d9ea0(void);
__int64 GmapSituation_14da880(void);
__int64 GmapSituation_14db600(_QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_gmap_GmapSituation_CalcBanquet(void);
__int64 game_gmap_GmapSituation_CalcBoostFarm(void);
__int64 game_gmap_GmapSituation_CalcCallAnimal(void);
__int64 game_gmap_GmapSituation_CalcDestroyMiasma(void);
__int64 game_gmap_GmapSituation_CalcDivideCorps(void);
__int64 game_gmap_GmapSituation_CalcExchangeCorps(void);
__int64 game_gmap_GmapSituation_CalcExplore(void);
__int64 game_gmap_GmapSituation_CalcMakeFarm(void);
__int64 game_gmap_GmapSituation_CalcTalk(void);
__int64 game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_1a86d37;
extern _UNKNOWN GameData_1ad8027;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_1fb0cb0[])();
extern __int64 (*GameData_20264e8[])();
extern __int64 (*GameData_202b508[])();
extern __int64 (*GameData_202b810[])();
extern __int64 (*game_gmap_BladeResonanceItem_vtable[])();
extern __int64 (*game_gmap_GmapSpotMenu_vtable[])();
extern __int64 (*game_gmap_WarpItem_vtable[])();
extern __int64 (*game_gmap_anonymous_BanquetMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_BoostFarmItem_vtable[])();
extern __int64 (*game_gmap_anonymous_BoostRecruitItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CallAnimalMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CaptureAnimalMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CarriageMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ContinueMoveMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsCreateItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsDeleteItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsDivideMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_CorpsExchangeMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_DestroyHellGateItem_vtable[])();
extern __int64 (*game_gmap_anonymous_DestroyMiasmaMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_DispatchItem_vtable[])();
extern __int64 (*game_gmap_anonymous_EnterMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ExploreMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_FacilityMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_FixMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_MakeFarmItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ReDispatchItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ReconstructionMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_RecruitItem_vtable[])();
extern __int64 (*game_gmap_anonymous_ShowItem_vtable[])();
extern __int64 (*game_gmap_anonymous_SideStoryMenuItem_vtable[])();
extern __int64 (*game_gmap_anonymous_TalkMenuItem_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d6a8;
extern __int64 GameData_21316c8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gmap_GmapClock_instance_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GmapSpotMenu_131b660(__int64 result);

__int64 GmapSpotMenu_131b660(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 (***v18)();
  __int64* v19;
  _QWORD** v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64** v30;
  __int64** v31;
  int v32;
  __int64** v33;
  __int64* v34;
  __int64* v35;
  _QWORD* v36;
  int v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  bool v43;
  __int64* v44;
  __int64* v45;
  __int64* v46;
  char v47;
  __int64 v48;
  int v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int16 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int16 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  _QWORD* v85;
  __int64 v86;
  _QWORD* v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  _QWORD* v93;
  __int64 v94;
  _QWORD* v95;
  __int64 v96;
  _QWORD* v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  int v104;
  __int64 v105;
  __int64 v106;
  int v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  _QWORD* v112;
  __int64 v113;
  _QWORD* v114;
  __int64 v115;
  _QWORD* v116;
  __int64 v117;
  _QWORD* v118;
  __int64 v119;
  _QWORD* v120;
  __int64 v121;
  _QWORD* v122;
  __int64 v123;
  _QWORD* v124;
  __int64 v125;
  __int16 v126;
  _QWORD* v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  __int64* v131;
  int v132;
  __int64* v133;
  __int64* v134;
  int v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 (***v144)();
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  char v149;
  __int64 v150;
  _QWORD* v151;
  __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  _QWORD* v161;
  _QWORD* v162;
  _QWORD* v163;
  __int64 v164;
  _QWORD* v165;
  _QWORD* v166;
  _QWORD* v167;
  _QWORD* v168;
  int v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  _QWORD v175[4];
  _QWORD* v176;
  __int64 (**v177)();
  _QWORD** v178;
  __int64 (***v179)();
  _QWORD* v180;

  v1 = result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = (__int64*)*v5++;
      v7 = v8;
      if (*((_DWORD*)v8 + 21) == v4) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v7 = nullptr;
    goto LABEL_8;
  }
  if (v5 == v6) {
    goto LABEL_7;
  }
  while (1) {
    v7 = (__int64*)*v5;
    if (*(_QWORD*)(*v5 + 96) == 0 && v7[69] == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v9 = *((_DWORD*)v7 + 135);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = v7[3];
    v13 = v7[4] - v12;
    v14 = (__int64*)(v12 + 8LL * (unsigned int)v11);
    if (v11 < v13 >> 3) {
      v7 = v14;
    }
  }
  v15 = *v7;
  if (*v7 == 0) {
    return result;
  }
  v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  v177 = nullptr;
  v178 = nullptr;
  v18 = &v177;
  BasicMenu_16dcd30(v17, "GmapUnitCommand", &v177, 0);
  v19 = GameData_212d6a8;
  v20 = v178;
  *v17 = GameData_212d6a8 + 2;
  v17[22] = v19 + 143;
  v17[132] = v19 + 169;
  if (v20 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v20 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    ((void (*)(_QWORD**))(*v20)[2])(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  *v17 = game_gmap_GmapSpotMenu_vtable;
  v17[22] = game_menu_MenuInput_InputUnknown00_ptr;
  v17[132] = GameData_20264e8;
  ProcInst_657850(v17, GameData_212c730, "GmapSpotMenu", 1, v1);
  v179 = &v177;
  v180 = v17;
  v177 = GameData_202b508;
  v178 = &v180;
  v22 = *(_QWORD*)(*v2 + 8);
  v23 = *(_QWORD**)(v22 + 8);
  v24 = *(_QWORD**)(v22 + 16);
  if (v23 == v24) {
    goto LABEL_28;
  }
  do {
    if (*(_QWORD*)*v23 == v15) {
      v175[0] = *v23;
      if (v179 == nullptr) {
        GameRoutine_60a310(0, v21);
      }
      ((void (*)(__int64 (***)(), _QWORD*))(*v179)[6])(v179, v175);
    }
    ++v23;
  } while (v23 != v24);
  v18 = v179;
  if (v179 == &v177) {
  LABEL_28:
    v25 = 4;
  }
  else {
    if (v179 == nullptr) {
      goto LABEL_30;
    }
    v25 = 5;
  }
  ((void (*)(__int64 (***)()))(*v18)[v25])(v18);
LABEL_30:
  v26 = v180;
  v27 = fw_memory_HeapManager_Allocate(*v16, 96, 16, 0);
  *(_WORD*)(v27 + 16) = 0;
  *(_DWORD*)(v27 + 40) = 0;
  v28 = v27;
  *(_QWORD*)(v27 + 48) = 0;
  *(_QWORD*)(v27 + 56) = 0;
  *(_QWORD*)(v27 + 64) = 0;
  *(_QWORD*)(v27 + 72) = 0;
  *(_WORD*)(v27 + 84) = 0;
  *(_BYTE*)(v27 + 86) = 0;
  *(_QWORD*)(v27 + 88) = 0;
  *(_WORD*)(v27 + 80) = 257;
  *(_BYTE*)(v27 + 82) = 1;
  *(_QWORD*)v27 = game_gmap_anonymous_EnterMenuItem_vtable;
  *(_QWORD*)(v27 + 8) = 0;
  v29 = *(_QWORD*)(*v2 + 8);
  v30 = *(__int64***)(v29 + 8);
  v31 = *(__int64***)(v29 + 16);
  v32 = *(_DWORD*)(v29 + 56);
  if ((v32 & 0x80000000) == 0) {
    if (v30 != v31) {
      v33 = *(__int64***)(v29 + 8);
      do {
        v35 = *v33++;
        v34 = v35;
        if (*((_DWORD*)v35 + 21) == v32) {
          goto LABEL_43;
        }
      } while (v33 != v31);
    }
  LABEL_42:
    v34 = nullptr;
    goto LABEL_43;
  }
  if (v30 == v31) {
    goto LABEL_42;
  }
  v36 = *(_QWORD**)(v29 + 8);
  while (1) {
    v34 = (__int64*)*v36;
    if (*(_QWORD*)(*v36 + 96LL) == 0 && v34[69] == 0) {
      break;
    }
    if (++v36 == v31) {
      goto LABEL_42;
    }
  }
LABEL_43:
  v37 = *((_DWORD*)v34 + 135);
  v10 = __OFSUB__(v37, 1);
  v38 = (unsigned int)(v37 - 1);
  if (((v38 & 0x80000000) != 0LL) == v10) {
    v39 = v34[3];
    v40 = v34[4] - v39;
    v41 = (__int64*)(v39 + 8LL * (unsigned int)v38);
    if (v38 < v40 >> 3) {
      v34 = v41;
    }
  }
  v42 = *v34;
  if (*(_QWORD*)(*v34 + 120) == 0) {
    goto LABEL_67;
  }
  if (v30 == v31) {
    v43 = true;
    if ((v32 & 0x80000000) == 0) {
      goto LABEL_49;
    }
  }
  else {
    do {
      v46 = *v30;
      if ((GameRoutine_133f0c0(*v30) & 1) != 0 && v42 == *v46) {
        v47 = 6;
        goto LABEL_66;
      }
      ++v30;
    } while (v30 != v31);
    v48 = *(_QWORD*)(*v2 + 8);
    v32 = *(_DWORD*)(v48 + 56);
    v30 = *(__int64***)(v48 + 8);
    v31 = *(__int64***)(v48 + 16);
    v43 = v30 == v31;
    if ((v32 & 0x80000000) == 0) {
    LABEL_49:
      if (!v43) {
        do {
          v45 = *v30++;
          v44 = v45;
          if (*((_DWORD*)v45 + 21) == v32) {
            goto LABEL_61;
          }
        } while (v30 != v31);
      }
    LABEL_60:
      v44 = nullptr;
      goto LABEL_61;
    }
  }
  if (v43) {
    goto LABEL_60;
  }
  while (1) {
    v44 = *v30;
    if ((*v30)[12] == 0 && v44[69] == 0) {
      break;
    }
    if (++v30 == v31) {
      goto LABEL_60;
    }
  }
LABEL_61:
  v49 = *((_DWORD*)v44 + 135);
  v10 = __OFSUB__(v49, 1);
  v50 = (unsigned int)(v49 - 1);
  if (((v50 & 0x80000000) != 0LL) == v10) {
    v51 = v44[3];
    v52 = v44[4] - v51;
    v53 = (__int64*)(v51 + 8LL * (unsigned int)v50);
    if (v50 < v52 >> 3) {
      v44 = v53;
    }
  }
  v54 = *v44;
  v55 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 24LL))(v28);
  v56 = GameRoutine_ae4100(0, v54, v55);
  if (v56 != 0) {
  LABEL_65:
    v47 = 2;
  LABEL_66:
    *(_BYTE*)(v28 + 86) = v47;
    goto LABEL_67;
  }
  if (game_GameModeData_instance_ != 0) {
    v146 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v146 != 0 && *(_BYTE*)(v146 + 152) == 6 &&
        *(_QWORD*)(v146 + 168) == *(_QWORD*)(v42 + 120)) {
      v178 = (_QWORD**)&GameData_1a86d37;
      v177 = (__int64 (**)())game_HashString(&GameData_1a86d37);
      if (game_GameModeData_instance_ == 0 ||
          (v56 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v177)) == 0 ||
          *(_DWORD*)(v56 + 32) == 0) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_222;
        }
        v172 = GameRoutine_714b20(game_GameModeData_instance_);
        if (v172 == 0) {
          goto LABEL_222;
        }
        v173 = v172;
        while (*(_BYTE*)(v173 + 33) != 18) {
          if ((GameRoutine_889be0(v173) & 1) != 0 ||
              *(_BYTE*)(v173 + 32) != 0) {
            v173 = *(_QWORD*)(*(_QWORD*)(v173 + 24) + 16LL);
            if (v173 != 0) {
              continue;
            }
          }
          goto LABEL_222;
        }
        if (game_GameModeData_instance_ == 0 ||
            (v174 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
            *(_BYTE*)(v174 + 152) != 6 ||
            *(_QWORD*)(v174 + 168) != *(_QWORD*)(v42 + 120)) {
        LABEL_222:
          v47 = 1;
          goto LABEL_66;
        }
        goto LABEL_65;
      }
    }
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v147 = *(_QWORD*)(v42 + 120);
  }
  else {
    v178 = (_QWORD**)&GameData_1a86d37;
    v177 = (__int64 (**)())game_HashString(&GameData_1a86d37);
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_67;
    }
    v56 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v177);
    if (v56 == 0) {
      goto LABEL_67;
    }
    if (*(_DWORD*)(v56 + 32) == 0) {
      goto LABEL_67;
    }
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_67;
    }
    v170 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v170 == 0) {
      goto LABEL_67;
    }
    if (*(_BYTE*)(v170 + 152) != 6) {
      goto LABEL_67;
    }
    v171 = *(_QWORD*)(v170 + 168);
    v147 = *(_QWORD*)(v42 + 120);
    if (v171 != v147) {
      goto LABEL_67;
    }
  }
  if (v147 == 0) {
    *(_QWORD*)(v28 + 88) = 0;
    goto LABEL_216;
  }
  v148 = *(_QWORD*)(v147 + 88);
  *(_QWORD*)(v28 + 88) = v148;
  if (v148 != 0) {
    v56 = Impl_13261c0(v42);
    if ((_BYTE)v56 == 0 &&
        ((*(_BYTE*)(v42 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
      v149 = 3;
      goto LABEL_215;
    }
    v56 = Impl_13261c0(v42);
    if ((unsigned __int8)v56 == 9 &&
        ((*(_BYTE*)(v42 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
      v149 = 4;
      goto LABEL_215;
    }
    v56 = Impl_13261c0(v42);
    if ((unsigned __int8)v56 == 2 &&
        ((*(_BYTE*)(v42 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
      v149 = 5;
    LABEL_215:
      *(_BYTE*)(v28 + 86) = v149;
    }
  }
LABEL_216:
  if ((GmapSituation_14db600(v56) & 1) != 0) {
    v47 = 7;
    goto LABEL_66;
  }
LABEL_67:
  BasicMenuCursor_16e0c00(v26, v28);
  v57 = v180;
  v58 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_QWORD*)(v58 + 72) = 0;
  *(_QWORD*)(v58 + 80) = 0;
  *(_QWORD*)(v58 + 16) = 0;
  *(_QWORD*)(v58 + 24) = 0;
  *(_QWORD*)(v58 + 32) = 0;
  *(_QWORD*)(v58 + 40) = 0;
  *(_QWORD*)(v58 + 48) = 0;
  *(_QWORD*)(v58 + 56) = 0;
  *(_QWORD*)(v58 + 64) = 0;
  *(_WORD*)(v58 + 80) = 257;
  *(_BYTE*)(v58 + 82) = 1;
  *(_QWORD*)v58 = game_gmap_anonymous_SideStoryMenuItem_vtable;
  *(_QWORD*)(v58 + 8) = 0;
  BasicMenuCursor_16e0c00(v57, v58);
  v59 = v180;
  v60 = fw_memory_HeapManager_Allocate(*v16, 96, 16, 0);
  *(_WORD*)(v60 + 16) = 0;
  *(_DWORD*)(v60 + 40) = 0;
  *(_QWORD*)(v60 + 48) = 0;
  *(_QWORD*)(v60 + 56) = 0;
  *(_QWORD*)(v60 + 64) = 0;
  *(_QWORD*)(v60 + 72) = 0;
  *(_WORD*)(v60 + 80) = 257;
  *(_BYTE*)(v60 + 82) = 1;
  *(_WORD*)(v60 + 84) = 0;
  *(_QWORD*)v60 = game_gmap_anonymous_CorpsCreateItem_vtable;
  *(_QWORD*)(v60 + 8) = 0;
  v61 = GmapSituation_14d7f60(v60);
  LODWORD(v175[0]) = 0;
  *(_WORD*)(v60 + 84) = v61;
  v179 = &v177;
  v177 = GameData_1fb0cb0;
  v178 = (_QWORD**)v175;
  CorpsManager_9726e0(&v177);
  if (v179 == &v177) {
    v62 = 4;
  }
  else {
    if (v179 == nullptr) {
      goto LABEL_76;
    }
    v62 = 5;
  }
  (*v179)[v62]();
LABEL_76:
  v178 = (_QWORD**)&GameData_1ade186;
  *(_DWORD*)(v60 + 88) = ((v175[0] & 2) != 0) + (v175[0] & 1) +
                         ((v175[0] & 4) != 0) + ((v175[0] & 8) != 0) +
                         ((v175[0] & 0x10) != 0) + ((v175[0] & 0x20) != 0) +
                         ((v175[0] & 0x40) != 0) + ((v175[0] & 0x80) != 0) +
                         ((v175[0] & 0x100) != 0);
  v63 = game_HashString(&GameData_1ade186);
  v64 = game_GameModeData_instance_;
  v177 = (__int64 (**)())v63;
  if (game_GameModeData_instance_ != 0) {
    v65 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v177);
    if (v65 != 0) {
      v64 = *(_DWORD*)(v65 + 32);
    }
    else {
      v64 = 0;
    }
  }
  *(_DWORD*)(v60 + 92) = v64;
  BasicMenuCursor_16e0c00(v59, v60);
  v66 = v180;
  v67 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v67 + 16) = 0;
  *(_DWORD*)(v67 + 40) = 0;
  *(_QWORD*)(v67 + 48) = 0;
  *(_QWORD*)(v67 + 56) = 0;
  *(_QWORD*)(v67 + 64) = 0;
  *(_QWORD*)(v67 + 72) = 0;
  *(_WORD*)(v67 + 84) = 0;
  *(_WORD*)(v67 + 80) = 257;
  *(_BYTE*)(v67 + 82) = 1;
  *(_QWORD*)v67 = game_gmap_anonymous_CorpsDeleteItem_vtable;
  *(_QWORD*)(v67 + 8) = 0;
  *(_WORD*)(v67 + 84) = GmapSituation_14d80a0();
  BasicMenuCursor_16e0c00(v66, v67);
  v68 = v180;
  v69 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v69 + 16) = 0;
  *(_DWORD*)(v69 + 40) = 0;
  *(_QWORD*)(v69 + 48) = 0;
  *(_QWORD*)(v69 + 56) = 0;
  *(_QWORD*)(v69 + 64) = 0;
  *(_QWORD*)(v69 + 72) = 0;
  *(_WORD*)(v69 + 80) = 257;
  *(_BYTE*)(v69 + 82) = 1;
  *(_WORD*)(v69 + 84) = 0;
  *(_QWORD*)v69 = game_gmap_anonymous_CorpsExchangeMenuItem_vtable;
  *(_QWORD*)(v69 + 8) = 0;
  *(_WORD*)(v69 + 84) = game_gmap_GmapSituation_CalcExchangeCorps();
  BasicMenuCursor_16e0c00(v68, v69);
  v70 = v180;
  v71 = fw_memory_HeapManager_Allocate(*v16, 96, 16, 0);
  *(_WORD*)(v71 + 16) = 0;
  *(_DWORD*)(v71 + 40) = 0;
  *(_QWORD*)(v71 + 48) = 0;
  *(_QWORD*)(v71 + 56) = 0;
  *(_QWORD*)(v71 + 64) = 0;
  *(_QWORD*)(v71 + 72) = 0;
  *(_WORD*)(v71 + 80) = 257;
  *(_BYTE*)(v71 + 82) = 1;
  *(_WORD*)(v71 + 84) = 0;
  *(_QWORD*)v71 = game_gmap_anonymous_CorpsDivideMenuItem_vtable;
  *(_QWORD*)(v71 + 8) = 0;
  v72 = game_gmap_GmapSituation_CalcDivideCorps();
  LODWORD(v175[0]) = 0;
  *(_WORD*)(v71 + 84) = v72;
  v177 = GameData_1fb0cb0;
  v178 = (_QWORD**)v175;
  v179 = &v177;
  CorpsManager_9726e0(&v177);
  if (v179 == &v177) {
    v73 = 4;
  }
  else {
    if (v179 == nullptr) {
      goto LABEL_85;
    }
    v73 = 5;
  }
  (*v179)[v73]();
LABEL_85:
  v178 = (_QWORD**)&GameData_1ade186;
  *(_DWORD*)(v71 + 88) = ((v175[0] & 2) != 0) + (v175[0] & 1) +
                         ((v175[0] & 4) != 0) + ((v175[0] & 8) != 0) +
                         ((v175[0] & 0x10) != 0) + ((v175[0] & 0x20) != 0) +
                         ((v175[0] & 0x40) != 0) + ((v175[0] & 0x80) != 0) +
                         ((v175[0] & 0x100) != 0);
  v74 = game_HashString(&GameData_1ade186);
  v75 = game_GameModeData_instance_;
  v177 = (__int64 (**)())v74;
  if (game_GameModeData_instance_ != 0) {
    v76 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v177);
    if (v76 != 0) {
      v75 = *(_DWORD*)(v76 + 32);
    }
    else {
      v75 = 0;
    }
  }
  *(_DWORD*)(v71 + 92) = v75;
  BasicMenuCursor_16e0c00(v70, v71);
  v77 = v180;
  v78 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v78 + 16) = 0;
  *(_DWORD*)(v78 + 40) = 0;
  *(_QWORD*)(v78 + 48) = 0;
  *(_QWORD*)(v78 + 56) = 0;
  *(_QWORD*)(v78 + 64) = 0;
  *(_QWORD*)(v78 + 72) = 0;
  *(_WORD*)(v78 + 84) = 0;
  *(_WORD*)(v78 + 80) = 257;
  *(_BYTE*)(v78 + 82) = 1;
  *(_QWORD*)v78 = game_gmap_anonymous_DestroyMiasmaMenuItem_vtable;
  *(_QWORD*)(v78 + 8) = 0;
  *(_WORD*)(v78 + 84) = game_gmap_GmapSituation_CalcDestroyMiasma();
  BasicMenuCursor_16e0c00(v77, v78);
  v79 = v180;
  v80 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v80 + 16) = 0;
  *(_DWORD*)(v80 + 40) = 0;
  *(_QWORD*)(v80 + 48) = 0;
  *(_QWORD*)(v80 + 56) = 0;
  *(_QWORD*)(v80 + 64) = 0;
  *(_QWORD*)(v80 + 72) = 0;
  *(_WORD*)(v80 + 80) = 257;
  *(_BYTE*)(v80 + 82) = 1;
  *(_WORD*)(v80 + 84) = 0;
  *(_QWORD*)v80 = game_gmap_anonymous_ReconstructionMenuItem_vtable;
  *(_QWORD*)(v80 + 8) = 0;
  *(_WORD*)(v80 + 84) = GmapSituation_14d7ae0();
  BasicMenuCursor_16e0c00(v79, v80);
  v81 = v180;
  v82 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v82 + 16) = 0;
  *(_DWORD*)(v82 + 40) = 0;
  *(_QWORD*)(v82 + 48) = 0;
  *(_QWORD*)(v82 + 56) = 0;
  *(_QWORD*)(v82 + 64) = 0;
  *(_QWORD*)(v82 + 72) = 0;
  *(_WORD*)(v82 + 80) = 257;
  *(_BYTE*)(v82 + 82) = 1;
  *(_WORD*)(v82 + 84) = 0;
  *(_QWORD*)v82 = game_gmap_anonymous_FacilityMenuItem_vtable;
  *(_QWORD*)(v82 + 8) = 0;
  *(_WORD*)(v82 + 84) = GmapSituation_14d8840();
  BasicMenuCursor_16e0c00(v81, v82);
  v83 = v180;
  v84 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v84 + 16) = 0;
  *(_DWORD*)(v84 + 40) = 0;
  *(_QWORD*)(v84 + 48) = 0;
  *(_QWORD*)(v84 + 56) = 0;
  *(_QWORD*)(v84 + 64) = 0;
  *(_QWORD*)(v84 + 72) = 0;
  *(_WORD*)(v84 + 80) = 257;
  *(_BYTE*)(v84 + 82) = 1;
  *(_WORD*)(v84 + 84) = 0;
  *(_QWORD*)v84 = game_gmap_anonymous_ExploreMenuItem_vtable;
  *(_QWORD*)(v84 + 8) = 0;
  *(_WORD*)(v84 + 84) = game_gmap_GmapSituation_CalcExplore();
  BasicMenuCursor_16e0c00(v83, v84);
  v85 = v180;
  v86 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v86 + 16) = 0;
  *(_DWORD*)(v86 + 40) = 0;
  *(_QWORD*)(v86 + 48) = 0;
  *(_QWORD*)(v86 + 56) = 0;
  *(_QWORD*)(v86 + 64) = 0;
  *(_QWORD*)(v86 + 72) = 0;
  *(_WORD*)(v86 + 80) = 257;
  *(_BYTE*)(v86 + 82) = 1;
  *(_WORD*)(v86 + 84) = 0;
  *(_QWORD*)v86 = game_gmap_anonymous_BanquetMenuItem_vtable;
  *(_QWORD*)(v86 + 8) = 0;
  *(_WORD*)(v86 + 84) = game_gmap_GmapSituation_CalcBanquet();
  BasicMenuCursor_16e0c00(v85, v86);
  v87 = v180;
  v88 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v88 + 16) = 0;
  *(_DWORD*)(v88 + 40) = 0;
  *(_QWORD*)(v88 + 48) = 0;
  *(_QWORD*)(v88 + 56) = 0;
  *(_QWORD*)(v88 + 64) = 0;
  *(_QWORD*)(v88 + 72) = 0;
  *(_WORD*)(v88 + 80) = 257;
  *(_BYTE*)(v88 + 82) = 1;
  *(_WORD*)(v88 + 84) = 0;
  *(_QWORD*)v88 = game_gmap_anonymous_CarriageMenuItem_vtable;
  *(_QWORD*)(v88 + 8) = 0;
  *(_WORD*)(v88 + 84) = GmapSituation_14d7700();
  BasicMenuCursor_16e0c00(v87, v88);
  v89 = v180;
  v90 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v90 + 16) = 0;
  *(_DWORD*)(v90 + 40) = 0;
  *(_QWORD*)(v90 + 48) = 0;
  *(_QWORD*)(v90 + 56) = 0;
  *(_QWORD*)(v90 + 64) = 0;
  *(_QWORD*)(v90 + 72) = 0;
  *(_WORD*)(v90 + 80) = 257;
  *(_BYTE*)(v90 + 82) = 1;
  *(_WORD*)(v90 + 84) = 0;
  *(_QWORD*)v90 = game_gmap_anonymous_TalkMenuItem_vtable;
  *(_QWORD*)(v90 + 8) = 0;
  *(_WORD*)(v90 + 84) = game_gmap_GmapSituation_CalcTalk();
  BasicMenuCursor_16e0c00(v89, v90);
  v91 = v180;
  v92 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v92 + 16) = 0;
  *(_DWORD*)(v92 + 40) = 0;
  *(_QWORD*)(v92 + 48) = 0;
  *(_QWORD*)(v92 + 56) = 0;
  *(_QWORD*)(v92 + 64) = 0;
  *(_QWORD*)(v92 + 72) = 0;
  *(_WORD*)(v92 + 80) = 257;
  *(_BYTE*)(v92 + 82) = 1;
  *(_WORD*)(v92 + 84) = 0;
  *(_QWORD*)v92 = game_gmap_anonymous_CallAnimalMenuItem_vtable;
  *(_QWORD*)(v92 + 8) = 0;
  *(_WORD*)(v92 + 84) = game_gmap_GmapSituation_CalcCallAnimal();
  BasicMenuCursor_16e0c00(v91, v92);
  v93 = v180;
  v94 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v94 + 16) = 0;
  *(_DWORD*)(v94 + 40) = 0;
  *(_QWORD*)(v94 + 48) = 0;
  *(_QWORD*)(v94 + 56) = 0;
  *(_QWORD*)(v94 + 64) = 0;
  *(_QWORD*)(v94 + 72) = 0;
  *(_WORD*)(v94 + 80) = 257;
  *(_BYTE*)(v94 + 82) = 1;
  *(_WORD*)(v94 + 84) = 0;
  *(_QWORD*)v94 = game_gmap_anonymous_CaptureAnimalMenuItem_vtable;
  *(_QWORD*)(v94 + 8) = 0;
  *(_WORD*)(v94 + 84) = GmapSituation_14d91e0();
  BasicMenuCursor_16e0c00(v93, v94);
  v95 = v180;
  v96 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v96 + 16) = 0;
  *(_DWORD*)(v96 + 40) = 0;
  *(_QWORD*)(v96 + 48) = 0;
  *(_QWORD*)(v96 + 56) = 0;
  *(_QWORD*)(v96 + 64) = 0;
  *(_QWORD*)(v96 + 72) = 0;
  *(_WORD*)(v96 + 80) = 257;
  *(_BYTE*)(v96 + 82) = 1;
  *(_WORD*)(v96 + 84) = 0;
  *(_QWORD*)v96 = game_gmap_anonymous_MakeFarmItem_vtable;
  *(_QWORD*)(v96 + 8) = 0;
  *(_WORD*)(v96 + 84) = game_gmap_GmapSituation_CalcMakeFarm();
  BasicMenuCursor_16e0c00(v95, v96);
  v97 = v180;
  v98 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v98 + 16) = 0;
  *(_DWORD*)(v98 + 40) = 0;
  *(_QWORD*)(v98 + 48) = 0;
  *(_QWORD*)(v98 + 56) = 0;
  *(_QWORD*)(v98 + 64) = 0;
  *(_QWORD*)(v98 + 72) = 0;
  *(_WORD*)(v98 + 80) = 257;
  *(_BYTE*)(v98 + 82) = 1;
  *(_WORD*)(v98 + 84) = 0;
  *(_QWORD*)v98 = game_gmap_anonymous_ShowItem_vtable;
  *(_QWORD*)(v98 + 8) = 0;
  *(_WORD*)(v98 + 84) = GameRoutine_14da280();
  BasicMenuCursor_16e0c00(v97, v98);
  v99 = v180;
  v100 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v100 + 16) = 0;
  *(_DWORD*)(v100 + 40) = 0;
  *(_QWORD*)(v100 + 48) = 0;
  *(_QWORD*)(v100 + 56) = 0;
  *(_QWORD*)(v100 + 64) = 0;
  *(_QWORD*)(v100 + 72) = 0;
  *(_WORD*)(v100 + 80) = 257;
  *(_BYTE*)(v100 + 82) = 1;
  *(_WORD*)(v100 + 84) = 0;
  *(_BYTE*)(v100 + 86) = 0;
  *(_QWORD*)v100 = game_gmap_anonymous_RecruitItem_vtable;
  *(_QWORD*)(v100 + 8) = 0;
  *(_WORD*)(v100 + 84) = GmapSituation_14d9a80();
  v101 = *(_QWORD*)(*v2 + 8);
  v102 = *(__int64**)(v101 + 8);
  v103 = *(__int64**)(v101 + 16);
  v104 = *(_DWORD*)(v101 + 56);
  if ((v104 & 0x80000000) == 0) {
    while (v102 != v103) {
      v106 = *v102++;
      v105 = v106;
      if (*(_DWORD*)(v106 + 84) == v104) {
        goto LABEL_96;
      }
    }
  LABEL_95:
    v105 = 0;
    goto LABEL_96;
  }
  if (v102 == v103) {
    goto LABEL_95;
  }
  while (1) {
    v105 = *v102;
    if (*(_QWORD*)(*v102 + 96) == 0 && *(_QWORD*)(v105 + 552) == 0) {
      break;
    }
    if (++v102 == v103) {
      goto LABEL_95;
    }
  }
LABEL_96:
  v107 = *(_DWORD*)(v105 + 540);
  v10 = __OFSUB__(v107, 1);
  v108 = (unsigned int)(v107 - 1);
  if (((v108 & 0x80000000) != 0LL) == v10) {
    v109 = *(_QWORD*)(v105 + 24);
    v110 = *(_QWORD*)(v105 + 32) - v109;
    v111 = v109 + 8LL * (unsigned int)v108;
    if (v108 < v110 >> 3) {
      v105 = v111;
    }
  }
  *(_BYTE*)(v100 + 86) = *(_BYTE*)(*(_QWORD*)v105 + 116LL);
  BasicMenuCursor_16e0c00(v99, v100);
  v112 = v180;
  v113 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v113 + 16) = 0;
  *(_DWORD*)(v113 + 40) = 0;
  *(_QWORD*)(v113 + 48) = 0;
  *(_QWORD*)(v113 + 56) = 0;
  *(_QWORD*)(v113 + 64) = 0;
  *(_QWORD*)(v113 + 72) = 0;
  *(_WORD*)(v113 + 84) = 0;
  *(_WORD*)(v113 + 80) = 257;
  *(_BYTE*)(v113 + 82) = 1;
  *(_QWORD*)v113 = game_gmap_anonymous_DispatchItem_vtable;
  *(_QWORD*)(v113 + 8) = 0;
  *(_WORD*)(v113 + 84) = GmapSituation_14d9ea0();
  BasicMenuCursor_16e0c00(v112, v113);
  v114 = v180;
  v115 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v115 + 16) = 0;
  *(_DWORD*)(v115 + 40) = 0;
  *(_QWORD*)(v115 + 48) = 0;
  *(_QWORD*)(v115 + 56) = 0;
  *(_QWORD*)(v115 + 64) = 0;
  *(_QWORD*)(v115 + 72) = 0;
  *(_WORD*)(v115 + 80) = 257;
  *(_BYTE*)(v115 + 82) = 1;
  *(_WORD*)(v115 + 84) = 0;
  *(_QWORD*)v115 = game_gmap_anonymous_ReDispatchItem_vtable;
  *(_QWORD*)(v115 + 8) = 0;
  *(_WORD*)(v115 + 84) = GmapSituation_14d9ea0();
  BasicMenuCursor_16e0c00(v114, v115);
  v116 = v180;
  v117 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v117 + 16) = 0;
  *(_DWORD*)(v117 + 40) = 0;
  *(_QWORD*)(v117 + 48) = 0;
  *(_QWORD*)(v117 + 56) = 0;
  *(_QWORD*)(v117 + 64) = 0;
  *(_QWORD*)(v117 + 72) = 0;
  *(_WORD*)(v117 + 80) = 257;
  *(_BYTE*)(v117 + 82) = 1;
  *(_WORD*)(v117 + 84) = 0;
  *(_QWORD*)v117 = game_gmap_BladeResonanceItem_vtable;
  *(_QWORD*)(v117 + 8) = 0;
  *(_WORD*)(v117 + 84) = GmapSituation_14da880();
  BasicMenuCursor_16e0c00(v116, v117);
  v118 = v180;
  v119 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v119 + 16) = 0;
  *(_DWORD*)(v119 + 40) = 0;
  *(_QWORD*)(v119 + 48) = 0;
  *(_QWORD*)(v119 + 56) = 0;
  *(_QWORD*)(v119 + 64) = 0;
  *(_QWORD*)(v119 + 72) = 0;
  *(_WORD*)(v119 + 80) = 257;
  *(_BYTE*)(v119 + 82) = 1;
  *(_WORD*)(v119 + 84) = 0;
  *(_QWORD*)v119 = game_gmap_anonymous_BoostFarmItem_vtable;
  *(_QWORD*)(v119 + 8) = 0;
  *(_WORD*)(v119 + 84) = game_gmap_GmapSituation_CalcBoostFarm();
  BasicMenuCursor_16e0c00(v118, v119);
  v120 = v180;
  v121 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v121 + 16) = 0;
  *(_DWORD*)(v121 + 40) = 0;
  *(_QWORD*)(v121 + 48) = 0;
  *(_QWORD*)(v121 + 56) = 0;
  *(_QWORD*)(v121 + 64) = 0;
  *(_QWORD*)(v121 + 72) = 0;
  *(_WORD*)(v121 + 80) = 257;
  *(_BYTE*)(v121 + 82) = 1;
  *(_WORD*)(v121 + 84) = 0;
  *(_QWORD*)v121 = game_gmap_anonymous_BoostRecruitItem_vtable;
  *(_QWORD*)(v121 + 8) = 0;
  *(_WORD*)(v121 + 84) = GmapSituation_14d9ce0();
  BasicMenuCursor_16e0c00(v120, v121);
  v122 = v180;
  v123 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_QWORD*)(v123 + 72) = 0;
  *(_QWORD*)(v123 + 80) = 0;
  *(_QWORD*)(v123 + 16) = 0;
  *(_QWORD*)(v123 + 24) = 0;
  *(_QWORD*)(v123 + 32) = 0;
  *(_QWORD*)(v123 + 40) = 0;
  *(_QWORD*)(v123 + 48) = 0;
  *(_QWORD*)(v123 + 56) = 0;
  *(_QWORD*)(v123 + 64) = 0;
  *(_WORD*)(v123 + 80) = 257;
  *(_BYTE*)(v123 + 82) = 1;
  *(_QWORD*)v123 = game_gmap_anonymous_DestroyHellGateItem_vtable;
  *(_QWORD*)(v123 + 8) = 0;
  BasicMenuCursor_16e0c00(v122, v123);
  v124 = v180;
  v125 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v125 + 16) = 0;
  *(_DWORD*)(v125 + 40) = 0;
  *(_QWORD*)(v125 + 48) = 0;
  *(_QWORD*)(v125 + 56) = 0;
  *(_QWORD*)(v125 + 64) = 0;
  *(_QWORD*)(v125 + 72) = 0;
  *(_WORD*)(v125 + 80) = 257;
  *(_BYTE*)(v125 + 82) = 1;
  *(_WORD*)(v125 + 84) = 0;
  *(_QWORD*)v125 = game_gmap_anonymous_ContinueMoveMenuItem_vtable;
  *(_QWORD*)(v125 + 8) = 0;
  game_HashString(&GameData_1ad8027);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v126 = 0x4000;
    if (*(_BYTE*)(*GameData_2130e70 + 58) == 1) {
      if (*(_BYTE*)(*GameData_2130e70 + 52) != 0) {
        v126 = 0x4000;
      }
      else {
        v126 = 0;
      }
    }
  }
  else {
    v126 = 0x4000;
  }
  *(_WORD*)(v125 + 84) = v126;
  BasicMenuCursor_16e0c00(v124, v125);
  v127 = v180;
  v128 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_WORD*)(v128 + 16) = 0;
  *(_DWORD*)(v128 + 40) = 0;
  *(_QWORD*)(v128 + 48) = 0;
  *(_QWORD*)(v128 + 56) = 0;
  *(_QWORD*)(v128 + 64) = 0;
  *(_QWORD*)(v128 + 72) = 0;
  *(_WORD*)(v128 + 80) = 257;
  *(_BYTE*)(v128 + 82) = 1;
  *(_QWORD*)v128 = game_gmap_WarpItem_vtable;
  *(_QWORD*)(v128 + 8) = 0;
  *(_WORD*)(v128 + 84) = GmapSituation_14d8ae0();
  v129 = *(_QWORD*)(*v2 + 8);
  v130 = *(__int64**)(v129 + 8);
  v131 = *(__int64**)(v129 + 16);
  v132 = *(_DWORD*)(v129 + 56);
  if ((v132 & 0x80000000) == 0) {
    while (v130 != v131) {
      v134 = (__int64*)*v130++;
      v133 = v134;
      if (*((_DWORD*)v134 + 21) == v132) {
        goto LABEL_117;
      }
    }
  LABEL_116:
    v133 = nullptr;
    goto LABEL_117;
  }
  if (v130 == v131) {
    goto LABEL_116;
  }
  while (1) {
    v133 = (__int64*)*v130;
    if (*(_QWORD*)(*v130 + 96) == 0 && v133[69] == 0) {
      break;
    }
    if (++v130 == v131) {
      goto LABEL_116;
    }
  }
LABEL_117:
  v135 = *((_DWORD*)v133 + 135);
  v10 = __OFSUB__(v135, 1);
  v136 = (unsigned int)(v135 - 1);
  if (((v136 & 0x80000000) != 0LL) == v10) {
    v137 = v133[3];
    v138 = v133[4] - v137;
    v139 = (__int64*)(v137 + 8LL * (unsigned int)v136);
    if (v136 < v138 >> 3) {
      v133 = v139;
    }
  }
  v140 = *v133;
  v141 = (*(__int64 (**)(__int64))(*(_QWORD*)v128 + 24LL))(v128);
  if (GameRoutine_ae4100(0, v140, v141) != 0) {
    *(_WORD*)(v128 + 84) = 0;
  }
  BasicMenuCursor_16e0c00(v127, v128);
  v175[0] = GameData_202b810;
  v176 = v175;
  v142 = v180[29];
  v143 = v180[30];
  if ((unsigned __int64)((v143 - v142) >> 3) >= 2) {
    v177 = GameData_202b810;
    v179 = &v177;
    if (v142 == v143) {
      v145 = 4;
      v144 = &v177;
    }
    else {
      GameRoutine_16e3a80(v142);
      v144 = v179;
      if (v179 == &v177) {
        v145 = 4;
      }
      else {
        if (v179 == nullptr) {
          goto LABEL_153;
        }
        v145 = 5;
      }
    }
    ((void (*)(__int64 (***)()))(*v144)[v145])(v144);
  }
LABEL_153:
  if (v176 == v175) {
    v150 = 32;
    goto LABEL_157;
  }
  if (v176 != nullptr) {
    v150 = 40;
  LABEL_157:
    (*(void (**)(_QWORD*))(*v176 + v150))(v176);
  }
  v151 = v180;
  v152 = fw_memory_HeapManager_Allocate(*v16, 88, 16, 0);
  *(_QWORD*)(v152 + 72) = 0;
  *(_QWORD*)(v152 + 80) = 0;
  *(_QWORD*)(v152 + 16) = 0;
  *(_QWORD*)(v152 + 24) = 0;
  *(_QWORD*)(v152 + 32) = 0;
  *(_QWORD*)(v152 + 40) = 0;
  *(_QWORD*)(v152 + 48) = 0;
  *(_QWORD*)(v152 + 56) = 0;
  *(_QWORD*)(v152 + 64) = 0;
  *(_WORD*)(v152 + 80) = 257;
  *(_BYTE*)(v152 + 82) = 1;
  *(_QWORD*)v152 = game_gmap_anonymous_FixMenuItem_vtable;
  *(_QWORD*)(v152 + 8) = 0;
  BasicMenuCursor_16e0c00(v151, v152);
  v153 = *(_QWORD*)GameData_21316c8;
  if (*(_QWORD*)GameData_21316c8 != 0) {
    v154 = *(unsigned __int8*)(v153 + 240);
    result = (__int64)v180;
    v155 = v154 >> 1;
    v43 = (v154 & 1) == 0;
    v156 = *(_QWORD*)(v153 + 248);
    v157 = *(_QWORD*)(v153 + 256);
    v158 = v153 + 241;
    if (v43) {
      v156 = v155;
      v159 = v158;
    }
    else {
      v159 = v157;
    }
    if (v156 != 0 && v159 != 0) {
      v161 = (_QWORD*)v180[29];
      v162 = (_QWORD*)v180[30];
      if (v161 != v162) {
        v163 = nullptr;
        do {
          v165 = (_QWORD*)*v161;
          if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*v161 + 24LL))(*v161) != 0 &&
              (((*(__int64 (**)(_QWORD*))(*v165 + 48LL))(v165) & 1) == 0 ||
               ((*(__int64 (**)(_QWORD*))(*v165 + 464LL))(v165) & 1) != 0)) {
            v164 = (*(__int64 (**)(_QWORD*))(*v165 + 24LL))(v165);
            if ((unsigned int)strcmp(v164, v159) == 0) {
              v163 = v165;
            }
          }
          ++v161;
        } while (v161 != v162);
        result = (__int64)v180;
        if (v163 != nullptr) {
          v166 = (_QWORD*)v180[42];
          v167 = v180;
          if (v166 != v163) {
            if (v166 != nullptr) {
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                  *v166 + 168LL))((void*)v166, v180[42]);
              result = (__int64)v167;
            }
            *(_QWORD*)(result + 336) = v163;
            _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v167, 0, 1, 0);
            v168 = (_QWORD*)v167[42];
            if (v168 == nullptr) {
              result = (__int64)v167;
              v169 = 4;
            LABEL_197:
              *(_DWORD*)(result + 356) =
                  *(_DWORD*)(result + 356) & 0xFFFFFFFB | v169;
              return result;
            }
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                *v168 + 160LL))((void*)v168, v167[42]);
            game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
            v166 = (_QWORD*)v167[42];
            result = (__int64)v167;
          }
          v169 = 4;
          if (v166 != nullptr) {
            v43 = ((unsigned __int8)X8CALL_X0(
                       _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                    PSEUDO_X8, _QWORD*))(*v166 + 120LL))(
                                    (void*)v166, v166)) &
                   1) == 0;
            result = (__int64)v167;
            if (v43) {
              v169 = 0;
            }
            else {
              v169 = 4;
            }
          }
          goto LABEL_197;
        }
      }
    }
  }
  else {
    result = (__int64)v180;
  }
  return game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(result, 1);
}

void GmapSpotMenu_Unknown95()
{
  int v0;

  v0 = *(unsigned __int8*)(GameData_22416c0 + 59);
  *(_BYTE*)(GameData_22416c0 + 59) = 0;
  if (v0 != 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5836LL) = 1;
  }
}

__int64 GmapSpotMenu_Unknown96(_QWORD* a1)
{
  char v2;
  __int64* v3;
  __int64 v4;
  __int64 result;

  v2 = *(_BYTE*)(*GameData_2130e70 + 59);
  *(_BYTE*)(*GameData_2130e70 + 59) = 1;
  v3 = GameData_212d728[0];
  if ((v2 & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5836LL) = 1;
  }
  (*(void (**)(_QWORD*))(*a1 + 680LL))(a1);
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  v4 = *(_QWORD*)(*v3 + 8);
  GameRoutine_155e830(*(_QWORD*)(v4 + 16), 1);
  result = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    result = GameRoutine_17b8e80(result, 1);
  }
  *(_DWORD*)(v4 + 5856) |= 0x10000u;
  *(_DWORD*)(*(_QWORD*)(*v3 + 8) + 5856LL) |= 0x40u;
  return result;
}

__int64 GmapSpotMenu_Unknown133(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  unsigned int v4;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_2026810, 0);
    if (result != 0) {
      v2 = result;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 576LL))(result) & 1) !=
          0) {
        v3 = *(_QWORD*)(*GameData_212d728[0] + 8);
        GameRoutine_155e830(*(_QWORD*)(v3 + 16), 0);
        if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
          GameRoutine_17b8f40(
              *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0], 1);
        }
        result = game_gameui_Footer_instance_;
        v4 = *(_DWORD*)(v3 + 5856) & 0xFFFEFFFF;
        *(_DWORD*)(v3 + 5856) = v4;
        if (result != 0) {
          result = GameRoutine_1567000(result, 0);
          v4 = *(_DWORD*)(v3 + 5856);
        }
        *(_DWORD*)(v3 + 5856) = v4 & 0xFFFDFFFF;
      }
      else {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 584LL))(v2);
        if ((result & 1) != 0) {
          *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) &= ~0x40u;
        }
      }
    }
  }
  return result;
}

__int64 GmapSpotMenu_Unknown143(__int64 a1, __int64* a2)
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

  result = GameRoutine_8229c0();
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
    v5 = a2[1];
    v6 = a2[2];
    if (v5 >= v6) {
      v8 = *a2;
      v9 = v5 - *a2;
      v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
      if (v10 > 0x666666666666666LL) {
        GameRoutine_874520(result);
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
          GameRoutine_60a210(result);
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
      *(_QWORD*)(v16 + 8) = &GameData_1a9f09e;
      v17 = v15 + 40 * v13;
      v7 = v15 + v9 + 40;
      *(_QWORD*)(v16 + 32) = 0;
      *(_BYTE*)(v16 + 16) = 1;
      *(_DWORD*)(v16 + 20) = 2;
      *(_DWORD*)(v16 + 24) = result;
      *(_BYTE*)(v16 + 28) = 4;
      result = memcpy(v15, v8, v9);
      *a2 = v15;
      a2[1] = v7;
      a2[2] = v17;
      if (v8 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18);
      }
    }
    else {
      v7 = v5 + 40;
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)v5 = &GameData_1a9f09e;
      *(_QWORD*)(v5 + 8) = &GameData_1a9f09e;
      *(_BYTE*)(v5 + 16) = 1;
      *(_DWORD*)(v5 + 20) = 2;
      *(_DWORD*)(v5 + 24) = result;
      *(_BYTE*)(v5 + 28) = 4;
    }
    a2[1] = v7;
  }
  return result;
}

__int64 game_gmap_GmapSpotMenu_CreateBind_lambda0_Invoke(__int64 result,
                                                         __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0 && *(_BYTE*)(v3 + 32) == 2) {
    v4 = **(_QWORD**)(result + 8);
    v5 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 96, 16, 0);
    v6 = *(_QWORD*)(v2 + 96);
    *(_WORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_WORD*)(v5 + 84) = 0;
    *(_WORD*)(v5 + 80) = 257;
    *(_BYTE*)(v5 + 82) = 1;
    *(_QWORD*)v5 = game_gmap_anonymous_TraderMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    *(_QWORD*)(v5 + 88) = v6;
    return BasicMenuCursor_16e0c00(v4, v5);
  }
  return result;
}

__int64 game_gmap_GmapSpotMenu_CreateBind_lambda1_Invoke(__int64 a1,
                                                         __int64** a2,
                                                         __int64* a3)
{
  __int64* v3;
  __int64 v4;
  int v5;
  char v6;
  __int64 v7;
  int v9;

  v3 = *a2;
  v4 = *a3;
  v5 = (*(__int64 (**)(__int64*))(**a2 + 464))(*a2) & 1;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4);
  v7 = *v3;
  if (v5 != (v6 & 1)) {
    return (*(__int64 (**)(__int64*))(v7 + 464))(v3);
  }
  v9 = (*(__int64 (**)(__int64*))(v7 + 568))(v3);
  return v9 < (*(int (**)(__int64))(*(_QWORD*)v4 + 568LL))(v4);
}

#pragma GCC visibility pop
