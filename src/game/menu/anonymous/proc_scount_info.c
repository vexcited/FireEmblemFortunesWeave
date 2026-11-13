#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_16f5ea0(_QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcScountInfo_Unknown131();
__int64 ProcScountInfo_Unknown139(__int64 a1, __int64* a2);
__int64 ProcScountInfo_Unknown140(__int64 a1, __int64 a2, char a3);
__int64 ProcScountInfo_Unknown12(__int64 a1, __int64 a2, char a3);
__int64* FloatingHelp_18af120(_QWORD*, __int64*);
__int64 GameRoutine_18af980(__int64, __int64*);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212d890[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c610;
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_2131c18[55];
extern __int64 fw_memory_g_heap_manager;
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcScountInfo_Unknown92(__int64 a1);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcScountInfo_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         _DWORD* a1);
__int64 FloatingHelp_18aee60(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157ef40(_QWORD, _QWORD);
__int64 GameRoutine_158d1a0(_QWORD, _QWORD);
__int64 GameRoutine_1597cc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18929e0(_QWORD, _QWORD);
__int64 GameRoutine_1892c90(_QWORD, long double);
__int64 GameRoutine_1896a00(_QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6d36d0(_QWORD, long double);
__int64 GameRoutine_930ee0(_QWORD, _QWORD);
__int64 GameRoutine_930fd0(_QWORD, _QWORD);
__int64 GameRoutine_975940(long double);
__int64 GameSituation_906560(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1572ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MenuItemLegionName_1896cc0(_QWORD, long double);
__int64 Util_1575c70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Util_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                     _QWORD);
__int64 game_gameui_Util_SetBasicStatusForUnitInfo(_QWORD, _QWORD);
__int64 game_menu_PageTab_SetupLabel(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20a1518[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e348;
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_21f4018[];
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_15d4240(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__n128 game_menu_anonymous_ProcScountInfo_OnInit(__int64* a1);

__n128 game_menu_anonymous_ProcScountInfo_OnInit(__int64* a1)
{
  _QWORD* v1;
  __int64 v3;
  long double v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  __n128 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  __int64 v23;
  long double v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  long double v28;
  __int64 v29;
  char v30;
  char v31;
  unsigned int v32;
  __int64 v33;
  unsigned int v34;
  long double v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  long double v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _BYTE* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  long double v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __n128 result;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  long double v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  long double v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  char* v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64* v95;
  unsigned __int64 v96;
  __int64 v97;
  char* v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  unsigned __int8* v102;
  __int64* v103;
  unsigned __int8* v104;
  char v105;
  __int64 v106;
  const char* v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  const char* v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  char* v113;
  const char* v114;
  char* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  const char* v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  const char* v132;
  __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  __int64* v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  char* v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  _QWORD v151[2];
  const char* v152;
  __int64 v153;
  const char* v154;
  __int64 v155;
  const char* v156;
  __int64 v157;
  __int64* v158;
  unsigned __int64 v159;
  unsigned __int64 v160;
  unsigned __int64 v161;
  __int64** v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;

  v1 = a1 + 106;
  *((_BYTE*)a1 + 361) = 1;
  LayoutAccessor_1560070((void*)(&v158), a1 + 106,
                         "L_UnitInfo/L_UnitInfoDetail");
  if (v159 != 0) {
    v3 = std___1___shared_weak_count_lock(v159);
    v5 = v158;
    if (v159 != 0) {
      *(__n128*)&v4 = std___1___shared_weak_count___release_weak(v159);
    }
    if (v3 == 0 || v5 == nullptr) {
      if (v3 == 0) {
        goto LABEL_20;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v7 = a1[133];
      v8 = std___1___shared_weak_count_lock(v3);
      if (v8 != 0) {
        v9 = v8;
        LayoutAccessor_1572ac0(v5, v7, 0, 1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      std___1___shared_weak_count___release_weak(v3);
      v10 = "TypeOff";
      v11 = *(_QWORD*)(a1[133] + 440);
      if (v11 != 0 && *(_BYTE*)(v11 + 16) == 4) {
        v10 = "TypePlayer";
      }
      LayoutAccessor_1562cf0(v5, v10);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(v3, v4);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
LABEL_20:
  LayoutAccessor_1560070((void*)(&v149), v1, "L_UnitInfo/L_BattleStatus");
  if (v150 != 0) {
    v13 = a1[133];
    v14 = std___1___shared_weak_count_lock(v150);
    if (v14 != 0) {
      v15 = v14;
      if (v149 != 0) {
        GameRoutine_158d1a0(v149, v13);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        v12 = std___1___shared_weak_count___release_weak(v15);
      }
    }
    if (v150 != 0) {
      v12 = std___1___shared_weak_count___release_weak(v150);
    }
  }
  v16 = *(_QWORD*)(a1[133] + 392);
  v158 = nullptr;
  v159 = v16;
  if ((GameSituation_906560(game_GameModeData_instance_ + 136, &v158,
                            *(long double*)&v12) &
       1) != 0 ||
      ((v17 = *(_QWORD*)(a1[133] + 440)) == 0 ? (v18 = 9)
                                              : (v18 = *(_BYTE*)(v17 + 16)),
       ((1 << v18) & 0xF1) != 0)) {
    LayoutAccessor_1560070((void*)(&v147), v1, "L_UnitInfo/L_BasicStatus");
    if (v148 != 0) {
      v19 = a1[133];
      v20 = std___1___shared_weak_count_lock(v148);
      if (v20 != 0) {
        v21 = v20;
        if (v147 != 0) {
          game_gameui_Util_SetBasicStatusForUnitInfo(v147, v19);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak(v21);
        }
      }
      if (v148 != 0) {
        std___1___shared_weak_count___release_weak(v148);
      }
    }
    v22 = "Default";
  }
  else {
    v22 = "CannotScout";
  }
  LayoutAccessor_1560070((void*)(&v158), v1, "L_UnitInfo");
  if (v159 != 0) {
    v23 = std___1___shared_weak_count_lock(v159);
    v25 = v158;
    if (v159 != 0) {
      *(__n128*)&v24 = std___1___shared_weak_count___release_weak(v159);
    }
    if (v23 != 0 && v25 != nullptr) {
      LODWORD(v24) = COERCE_UNSIGNED_INT((float)(1.0));
      LayoutAccessor_1562680(v25, v22, v24);
    }
    else if (v23 == 0) {
      goto LABEL_51;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v23);
    }
  }
LABEL_51:
  v26 = LayoutAccessor_155fbe0(v1, "L_UnitInfo/L_SkillInfo");
  GameRoutine_157ef40(v26, a1[133]);
  v27 = *(_QWORD*)(a1[133] + 392);
  v158 = nullptr;
  v159 = v27;
  if ((GameSituation_906560(game_GameModeData_instance_ + 136, &v158, v28) &
       1) != 0) {
    v29 = *(_QWORD*)(a1[133] + 440);
    if (v29 != 0) {
      v30 = *(_BYTE*)(v29 + 16);
    }
    else {
      v30 = 9;
    }
    if (((1 << v30) & 0xF1) == 0) {
      v50 = LayoutAccessor_155fbe0(v1, "L_List");
      v32 = 1;
      GameRoutine_1597cc0(v50, *(_QWORD*)(a1[133] + 392), 1, 1);
      goto LABEL_62;
    }
  }
  else {
    v29 = *(_QWORD*)(a1[133] + 440);
  }
  if (v29 != 0) {
    v31 = *(_BYTE*)(v29 + 16);
  }
  else {
    v31 = 9;
  }
  v32 = (0xF1u >> v31) & 1;
LABEL_62:
  *((_DWORD*)a1 + 268) = v32;
  *(__int64*)((char*)a1 + 1076) = 0;
  LayoutAccessor_1560070((void*)(&v145), v1, "L_List/L_PageTab");
  v158 = (__int64*)GameData_20a1518;
  v33 = *a1;
  v162 = &v158;
  v34 = (*(__int64 (**)(__int64*))(v33 + 192))(a1);
  game_menu_PageTab_SetupLabel(a1 + 134, &v145, &v158, v34, 14, 15);
  if (v162 == &v158) {
    v36 = 4;
  }
  else {
    if (v162 == nullptr) {
      goto LABEL_67;
    }
    v36 = 5;
  }
  ((void (*)(void*))(*v162)[v36])(v162);
LABEL_67:
  if (v146 != 0) {
    *(__n128*)&v35 = std___1___shared_weak_count___release_weak(v146);
  }
  v37 = *(_QWORD*)(a1[133] + 392);
  if (v37 == 0) {
    v41 = &GameData_1a9f09e;
  LABEL_77:
    v43 = ui_LayoutAccessor_FindTextBox(v1, "L_List/T_Help");
    if (v43 != 0) {
      GameRoutine_156c5d0(v43, v41, 0);
    }
    goto LABEL_79;
  }
  if (*(_QWORD*)(v37 + 288) == 0 || (v38 = GameRoutine_975940(v35)) == 0 ||
      (v39 = *(_QWORD*)(v38 + 88)) == 0) {
    v41 = &GameData_1a9f09e;
    goto LABEL_77;
  }
  v163 = -1;
  v164 = -1;
  v165 = -1;
  v166 = -1;
  v40 = *msg_MessageManager_instance__ptr[0];
  v167 = -1;
  v168 = -1;
  v169 = -1;
  v170 = -1;
  v171 = -1;
  v172 = -1;
  v173 = -1;
  v174 = -1;
  v158 = GameData_212e348 + 2;
  v159 = 0xFFFF0001FFFF0000LL;
  v160 = 0xFFFF0004FFFF0002LL;
  v161 = 0xFFFF0006FFFF0005LL;
  v175 = 8;
  v162 = (__int64**)0xFFFF0008FFFF0007LL;
  v41 = (char*)GameRoutine_a4dbe0(v40, v39, 0, &v158);
  if (v41 != nullptr) {
    goto LABEL_77;
  }
LABEL_79:
  v44 = *(_QWORD*)(a1[133] + 392);
  if (v44 != 0 && *(_QWORD*)(v44 + 288) != 0) {
    v45 = GameRoutine_975940(v42);
    if (v45 != 0) {
      LayoutAccessor_1562060(v1, "L_List/T_Like", *(_QWORD*)(v45 + 144));
    }
  }
  v46 = 2;
  v47 = (_BYTE*)(a1[133] + 847);
  v48 = *GameData_212c878[0];
  while (1) {
    if (*(_WORD*)(v47 - 19) != 0 && (*(v47 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v48 + 64) +
                                       8LL * *(unsigned __int16*)(v47 - 19)) +
                            72LL) < 8u) {
      LODWORD(v46) = v46 - 2;
      goto LABEL_99;
    }
    if (*(_WORD*)(v47 - 11) != 0 && (*(v47 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v48 + 64) +
                                       8LL * *(unsigned __int16*)(v47 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v47 - 3) != 0 && (*v47 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v48 + 64) +
                                       8LL * *(unsigned __int16*)(v47 - 3)) +
                            72LL) < 8u) {
      goto LABEL_99;
    }
    v46 += 3;
    v47 += 24;
    if (v46 == 32) {
      v49 = LayoutAccessor_155fbe0(v1, "L_List/L_Item");
      Util_15792c0(v49, game_g_empty_item_ptr, 1, 1, 0, "L_Icon", "T_Txt", 1);
      goto LABEL_115;
    }
  }
  LODWORD(v46) = v46 - 1;
LABEL_99:
  v156 = "L_List/L_Item";
  v157 = 13;
  GameRoutine_15d4240((void*)(&v158), v1, &v156);
  if (v159 != 0) {
    v51 = std___1___shared_weak_count_lock(v159);
    v53 = v158;
    if (v159 != 0) {
      *(__n128*)&v52 = std___1___shared_weak_count___release_weak(v159);
    }
    if (v51 != 0 && v53 != nullptr) {
      v54 = a1[133];
      v55 = v54 + 8LL * (int)v46;
      v53[134] = v54;
      LOWORD(v54) = *(_WORD*)(v55 + 828);
      *((_BYTE*)v53 + 1082) = *(_BYTE*)(v55 + 830);
      *((_WORD*)v53 + 540) = v54;
      *((_BYTE*)v53 + 1083) = *(_BYTE*)(v55 + 831);
      *((_DWORD*)v53 + 271) = *(_DWORD*)(v55 + 832);
      LayoutAccessor_1562cf0(v53 + 11, "Info");
      *((_WORD*)v53 + 544) = 257;
      (*(void (**)(__int64*, __int64))(*v53 + 152))(v53, 1);
      v56 = *((unsigned __int8*)v53 + 880);
      v57 = v53[111];
      *((_BYTE*)v53 + 1091) = 1;
      if ((v56 & 1) == 0) {
        v57 = v56 >> 1;
      }
      if (v57 != 0) {
        if ((v56 & 1) != 0) {
          *(_BYTE*)v53[112] = 0;
          v53[111] = 0;
        }
        else {
          *((_WORD*)v53 + 440) = 0;
        }
      }
      GameRoutine_60a060(v53 + 110, "L_UnitInfo/L_UnitInfoDetail", 27);
      v160 = 0;
      v158 = GameData_212d890[0] + 2;
      LODWORD(v159) = 20;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64*, __int64**))(
          v53[9] + 16))((void*)&v156, v53 + 9, &v158);
    }
    else if (v51 == 0) {
      goto LABEL_115;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v51 + 16LL))(v51, v52);
      std___1___shared_weak_count___release_weak(v51);
    }
  }
LABEL_115:
  LayoutAccessor_1560070((void*)(&v143), v1, "L_List/L_Mastery");
  if (v144 != 0) {
    v59 = a1[133];
    v60 = std___1___shared_weak_count_lock(v144);
    if (v60 != 0) {
      v61 = v60;
      if (v143 != 0) {
        Util_1575c70(v143, v59, 0, 0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
        result = std___1___shared_weak_count___release_weak(v61);
      }
    }
    if (v144 != 0) {
      result = std___1___shared_weak_count___release_weak(v144);
    }
  }
  v62 = a1[133];
  if (*(_BYTE*)(v62 + 1944) == 0 ||
      *(_BYTE*)(*(_QWORD*)(v62 + 400) + 96LL) != 1 ||
      ui_LayoutAccessor_FindPane(v1, "L_List/L_Legion") == 0 ||
      (v156 = "L_List/L_Legion", v157 = 15,
       (GameRoutine_15d4100((void*)(&v158), v1, &v156),
        (void*)(&v158)),
       v159 == 0)) {
  LABEL_138:
    v69 = a1[133];
    v70 = *(_QWORD*)(v69 + 400);
    if (*(_BYTE*)(v70 + 96) != 2) {
      goto LABEL_185;
    }
    if (*(_BYTE*)(v69 + 1880) == 0) {
      v76 = *(_QWORD*)(v70 + 112);
      if (v76 != 0) {
        if (LOBYTE(GameData_21f4018[8 * (unsigned __int64)*(
                                            unsigned __int8*)(v76 + 32)]) ==
            0) {
          goto LABEL_185;
        }
      }
      else if (*(_BYTE*)GameData_212c8b0[0] == 0) {
        goto LABEL_185;
      }
    }
    if (ui_LayoutAccessor_FindPane(v1, "L_List/L_Animal") == 0) {
      goto LABEL_185;
    }
    v156 = "L_List/L_Animal";
    v157 = 15;
    GameRoutine_15d4100((void*)(&v158), v1, &v156);
    if (v159 == 0) {
      goto LABEL_185;
    }
    v63 = std___1___shared_weak_count_lock(v159);
    v71 = v158;
    if (v63 != 0) {
      v72 = v158;
    }
    else {
      v72 = nullptr;
    }
    if (v159 != 0) {
      result = std___1___shared_weak_count___release_weak(v159);
    }
    if (v72 == nullptr) {
      goto LABEL_168;
    }
    v73 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         40, 16, 0);
    v74 = v73;
    v158 = v72;
    v159 = v63;
    if (v63 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_18929e0(v73, &v158);
      *(__n128*)&v75 = std___1___shared_weak_count___release_weak(v63);
    }
    else {
      GameRoutine_18929e0(v73, &v158);
    }
    v77 = a1[151];
    a1[151] = v74;
    if (v77 != 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v77 + 8LL))(v77, v75);
      v74 = a1[151];
    }
    *(_QWORD*)(v74 + 24) = a1[133];
    *(_DWORD*)(a1[151] + 32) = 3;
    GameRoutine_1892c90(a1[151], v75);
    v78 = *((unsigned __int8*)v71 + 880);
    v79 = v71[111];
    if ((v78 & 1) == 0) {
      v79 = v78 >> 1;
    }
    if (v79 != 0) {
      if ((v78 & 1) == 0) {
        *((_BYTE*)v71 + 881) = 0;
        goto LABEL_165;
      }
      *(_BYTE*)v71[112] = 0;
      v71[111] = 0;
      LOBYTE(v78) = *((_BYTE*)v71 + 880);
    }
    if ((v78 & 1) != 0) {
      v71[111] = 22;
      v80 = (char*)v71[112];
      goto LABEL_167;
    }
  LABEL_165:
    *((_BYTE*)v71 + 880) = 44;
    v80 = (char*)v71 + 881;
  LABEL_167:
    strcpy(v80, "L_UnitInfo/L_SkillInfo");
  LABEL_168:
    if (v63 != 0) {
      goto LABEL_183;
    }
    goto LABEL_185;
  }
  v63 = std___1___shared_weak_count_lock(v159);
  v64 = v158;
  if (v63 != 0) {
    v65 = v158;
  }
  else {
    v65 = nullptr;
  }
  if (v159 != 0) {
    result = std___1___shared_weak_count___release_weak(v159);
  }
  if (v65 == nullptr) {
    if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v63 + 16LL))(
          v63, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak(v63);
    }
    goto LABEL_138;
  }
  v66 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       40, 16, 0);
  v67 = v66;
  v158 = v65;
  v159 = v63;
  if (v63 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1896a00(v66, &v158);
    *(__n128*)&v68 = std___1___shared_weak_count___release_weak(v63);
  }
  else {
    GameRoutine_1896a00(v66, &v158);
  }
  v81 = a1[150];
  a1[150] = v67;
  if (v81 != 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v81 + 8LL))(v81, v68);
    v67 = a1[150];
  }
  *(_QWORD*)(v67 + 24) = a1[133];
  *(_DWORD*)(a1[150] + 32) = 0;
  MenuItemLegionName_1896cc0(a1[150], v68);
  v82 = *((unsigned __int8*)v64 + 880);
  v83 = v64[111];
  if ((v82 & 1) == 0) {
    v83 = v82 >> 1;
  }
  if (v83 != 0) {
    if ((v82 & 1) == 0) {
      *((_BYTE*)v64 + 881) = 0;
    LABEL_180:
      *((_BYTE*)v64 + 880) = 44;
      v84 = (char*)v64 + 881;
      goto LABEL_182;
    }
    *(_BYTE*)v64[112] = 0;
    v64[111] = 0;
    LOBYTE(v82) = *((_BYTE*)v64 + 880);
  }
  if ((v82 & 1) == 0) {
    goto LABEL_180;
  }
  v64[111] = 22;
  v84 = (char*)v64[112];
LABEL_182:
  strcpy(v84, "L_UnitInfo/L_SkillInfo");
  if (v63 != 0) {
  LABEL_183:
    if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v63 + 16LL))(
          v63, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak(v63);
    }
  }
LABEL_185:
  v85 = a1[107];
  v156 = "L_UnitInfo/L_UnitInfoDetail";
  v157 = 27;
  if (v85 == 0) {
    goto LABEL_191;
  }
  v86 = std___1___shared_weak_count_lock(v85);
  if (v86 == 0) {
    goto LABEL_191;
  }
  v87 = *v1;
  v88 = v86;
  if (*v1 != 0) {
    GameRoutine_15b71b0((void*)(&v158), *v1, &v156);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
    result = std___1___shared_weak_count___release_weak(v88);
    if (v87 != 0) {
      goto LABEL_192;
    }
    goto LABEL_191;
  }
  if (v87 == 0) {
  LABEL_191:
    v158 = nullptr;
    v159 = 0;
  }
LABEL_192:
  v89 = a1[107];
  v154 = "L_UnitInfo/L_SkillInfo";
  v155 = 22;
  if (v89 != 0) {
    v90 = std___1___shared_weak_count_lock(v89);
    if (v90 != 0) {
      v91 = *v1;
      v92 = v90;
      if (*v1 != 0) {
        GameRoutine_15b71b0((void*)(&v156), *v1, &v154);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v91 != 0) {
          goto LABEL_198;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
        result = std___1___shared_weak_count___release_weak(v92);
        if (v91 != 0) {
        LABEL_198:
          v93 = v159;
          if (v159 == 0) {
            goto LABEL_216;
          }
          goto LABEL_204;
        }
      }
    }
  }
  v156 = nullptr;
  v157 = 0;
  v93 = v159;
  if (v159 == 0) {
    goto LABEL_216;
  }
LABEL_204:
  if (*(_QWORD*)(v93 + 8) == -1) {
    goto LABEL_216;
  }
  v94 = std___1___shared_weak_count_lock(v93);
  v95 = v158;
  v96 = *((unsigned __int8*)v158 + 904);
  v97 = v158[114];
  if ((v96 & 1) == 0) {
    v97 = v96 >> 1;
  }
  if (v97 != 0) {
    if ((v96 & 1) == 0) {
      *((_BYTE*)v158 + 905) = 0;
    LABEL_212:
      *((_BYTE*)v95 + 904) = 26;
      v98 = (char*)v95 + 905;
      goto LABEL_214;
    }
    *(_BYTE*)v158[115] = 0;
    v95[114] = 0;
    LOBYTE(v96) = *((_BYTE*)v95 + 904);
  }
  if ((v96 & 1) == 0) {
    goto LABEL_212;
  }
  v95[114] = 13;
  v98 = (char*)v95[115];
LABEL_214:
  strcpy(v98, "L_List/L_Item");
  if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v99 = v94;
    (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94);
    result = std___1___shared_weak_count___release_weak(v99);
  }
LABEL_216:
  if (v157 == 0 || *(_QWORD*)(v157 + 8) == -1) {
    goto LABEL_270;
  }
  v100 = a1[133];
  if (*(_BYTE*)(v100 + 1944) != 0) {
    if (*(_BYTE*)(*(_QWORD*)(v100 + 400) + 96LL) == 1) {
      v101 = GameData_212ceb0;
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                         8LL *
                                             *(unsigned __int8*)(v100 + 1944)) +
                              50LL) <=
              (unsigned int)*(unsigned __int8*)(v100 + 552) &&
          (game_GameModeData_instance_ == 0 ||
           (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) != 6) &&
          *(_QWORD*)(v100 + 408) == 0) {
        v101 = (__int64*)(v100 + 1944);
      }
    }
    else {
      v101 = GameData_212ceb0;
    }
  }
  else {
    v101 = GameData_212ceb0;
  }
  if (*v101 == *GameData_212ceb0) {
    v102 =
        (unsigned __int8*)GameRoutine_6d36d0(a1[133], *(long double*)&result);
    v103 = GameData_212c8b0[0];
    if (*v102 == *(unsigned __int8*)GameData_212c8b0[0] &&
        v102[1] == *((unsigned __int8*)GameData_212c8b0[0] + 1) &&
        v102[2] == *((unsigned __int8*)GameData_212c8b0[0] + 2) &&
        v102[3] == *((unsigned __int8*)GameData_212c8b0[0] + 3) &&
        *((_DWORD*)v102 + 1) == *((_DWORD*)GameData_212c8b0[0] + 1) &&
        *((_DWORD*)v102 + 2) ==
            *(_DWORD*)((char*)GameData_212c8b0[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL)) &&
        (v104 = v102,
         (GameRoutine_930ee0(v102 + 16, GameData_212c8b0[0] + 2) & 1) != 0)) {
      v105 = GameRoutine_930fd0(v104 + 40, v103 + 5);
    }
    else {
      v105 = 0;
    }
    v106 = std___1___shared_weak_count_lock(v157);
    v110 = v156;
    v111 = *((unsigned __int8*)v156 + 904);
    v112 = *((_QWORD*)v156 + 114);
    if ((v111 & 1) == 0) {
      v112 = v111 >> 1;
    }
    if ((v105 & 1) != 0) {
      if (v112 != 0) {
        if ((v111 & 1) == 0) {
          *((_BYTE*)v156 + 905) = 0;
          goto LABEL_259;
        }
        **((_BYTE**)v156 + 115) = 0;
        *((_QWORD*)v110 + 114) = 0;
        LOBYTE(v111) = v110[904];
      }
      if ((v111 & 1) != 0) {
        *((_QWORD*)v110 + 114) = 16;
        v115 = *((char**)v110 + 115);
        goto LABEL_261;
      }
    LABEL_259:
      *((_BYTE*)v110 + 904) = 32;
      v115 = (char*)(v110 + 905);
    LABEL_261:
      strcpy(v115, "L_List/L_Mastery");
      goto LABEL_268;
    }
    if (v112 != 0) {
      if ((v111 & 1) == 0) {
        *((_BYTE*)v156 + 905) = 0;
        goto LABEL_264;
      }
      **((_BYTE**)v156 + 115) = 0;
      *((_QWORD*)v110 + 114) = 0;
      LOBYTE(v111) = v110[904];
    }
    if ((v111 & 1) != 0) {
      *((_QWORD*)v110 + 114) = 15;
      v113 = *((char**)v110 + 115);
      goto LABEL_266;
    }
  LABEL_264:
    *((_BYTE*)v110 + 904) = 30;
    v113 = (char*)(v110 + 905);
  LABEL_266:
    v114 = "L_List/L_Animal";
    goto LABEL_267;
  }
  v106 = std___1___shared_weak_count_lock(v157);
  v107 = v156;
  v108 = *((unsigned __int8*)v156 + 904);
  v109 = *((_QWORD*)v156 + 114);
  if ((v108 & 1) == 0) {
    v109 = v108 >> 1;
  }
  if (v109 != 0) {
    if ((v108 & 1) == 0) {
      *((_BYTE*)v156 + 905) = 0;
      goto LABEL_254;
    }
    **((_BYTE**)v156 + 115) = 0;
    *((_QWORD*)v107 + 114) = 0;
    LOBYTE(v108) = v107[904];
  }
  if ((v108 & 1) != 0) {
    *((_QWORD*)v107 + 114) = 15;
    v113 = *((char**)v107 + 115);
    goto LABEL_256;
  }
LABEL_254:
  *((_BYTE*)v107 + 904) = 30;
  v113 = (char*)(v107 + 905);
LABEL_256:
  v114 = "L_List/L_Legion";
LABEL_267:
  v116 = *(_QWORD*)v114;
  v117 = *(_QWORD*)(v114 + 7);
  v113[15] = 0;
  *(_QWORD*)v113 = v116;
  *(_QWORD*)(v113 + 7) = v117;
LABEL_268:
  if (atomic_fetch_add((atomic_ullong* volatile)(v106 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v118 = v106;
    (*(void (**)(__int64))(*(_QWORD*)v106 + 16LL))(v106);
    result = std___1___shared_weak_count___release_weak(v118);
  }
LABEL_270:
  v119 = a1[107];
  v152 = "L_UnitInfo/L_UnitInfoDetail/L_OverBlaze";
  v153 = 39;
  if (v119 == 0) {
    goto LABEL_284;
  }
  v120 = std___1___shared_weak_count_lock(v119);
  if (v120 == 0) {
    goto LABEL_284;
  }
  v121 = *v1;
  v122 = v120;
  if (*v1 != 0) {
    GameRoutine_15b71b0((void*)(&v154), *v1, &v152);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v122 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v122 + 16LL))(v122);
    result = std___1___shared_weak_count___release_weak(v122);
    if (v121 != 0) {
      goto LABEL_276;
    }
  LABEL_284:
    v154 = nullptr;
    v155 = 0;
    goto LABEL_285;
  }
  if (v121 == 0) {
    goto LABEL_284;
  }
LABEL_276:
  if (v155 == 0 || *(_QWORD*)(v155 + 8) == -1) {
    goto LABEL_285;
  }
  v123 = std___1___shared_weak_count_lock(v155);
  v124 = v154;
  v125 = *((unsigned __int8*)v154 + 904);
  v126 = *((_QWORD*)v154 + 114);
  if ((v125 & 1) == 0) {
    v126 = v125 >> 1;
  }
  if (v126 != 0) {
    if ((v125 & 1) == 0) {
      *((_BYTE*)v154 + 905) = 0;
    LABEL_317:
      *((_BYTE*)v124 + 904) = 32;
      v141 = (char*)(v124 + 905);
      goto LABEL_319;
    }
    **((_BYTE**)v154 + 115) = 0;
    *((_QWORD*)v124 + 114) = 0;
    LOBYTE(v125) = v124[904];
  }
  if ((v125 & 1) == 0) {
    goto LABEL_317;
  }
  *((_QWORD*)v124 + 114) = 16;
  v141 = *((char**)v124 + 115);
LABEL_319:
  strcpy(v141, "L_List/L_Mastery");
  if (atomic_fetch_add((atomic_ullong* volatile)(v123 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v142 = v123;
    (*(void (**)(__int64))(*(_QWORD*)v123 + 16LL))(v123);
    result = std___1___shared_weak_count___release_weak(v142);
  }
LABEL_285:
  v127 = a1[107];
  v151[0] = "L_List/L_Mastery/L_MasteryInfoItem00";
  v151[1] = 36;
  if (v127 == 0) {
    goto LABEL_299;
  }
  v128 = std___1___shared_weak_count_lock(v127);
  if (v128 == 0) {
    goto LABEL_299;
  }
  v129 = *v1;
  v130 = v128;
  if (*v1 != 0) {
    GameRoutine_15b71b0((void*)(&v152), *v1, v151);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v130 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v130 + 16LL))(v130);
    result = std___1___shared_weak_count___release_weak(v130);
    if (v129 != 0) {
      goto LABEL_291;
    }
  LABEL_299:
    v152 = nullptr;
    v153 = 0;
    goto LABEL_300;
  }
  if (v129 == 0) {
    goto LABEL_299;
  }
LABEL_291:
  if (v153 != 0 && *(_QWORD*)(v153 + 8) != -1) {
    v131 = std___1___shared_weak_count_lock(v153);
    v132 = v152;
    v133 = v131;
    v134 = *((unsigned __int8*)v152 + 880);
    v135 = *((_QWORD*)v152 + 111);
    if ((v134 & 1) == 0) {
      v135 = v134 >> 1;
    }
    if (v135 != 0) {
      if ((v134 & 1) != 0) {
        **((_BYTE**)v152 + 112) = 0;
        *((_QWORD*)v132 + 111) = 0;
      }
      else {
        *((_WORD*)v152 + 440) = 0;
      }
    }
    GameRoutine_60a060(v132 + 880, "L_UnitInfo/L_UnitInfoDetail", 27);
    if (atomic_fetch_add((atomic_ullong* volatile)(v133 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v133 + 16LL))(v133);
      result = std___1___shared_weak_count___release_weak(v133);
    }
  }
LABEL_300:
  v136 = (__int64*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    GameRoutine_18ae960(*(_QWORD*)GameData_212d8b0[0], 0);
    v137 = *v136;
    if (*v136 != 0) {
      v138 = *v136;
      *(_BYTE*)(v137 + 256) = 1;
      FloatingHelp_18aee60(v138, v1);
      GameRoutine_18ae960(v137, 1);
      v139 = *(_QWORD*)(v137 + 240);
      *(_QWORD*)(v137 + 232) = 0;
      *(_QWORD*)(v137 + 240) = 0;
      if (v139 != 0) {
        result = std___1___shared_weak_count___release_weak(v139);
      }
      *(_QWORD*)(v137 + 160) = a1;
      *(_BYTE*)(v137 + 257) = 0;
      *(_DWORD*)(v137 + 248) = -1;
      v140 = *v136;
      if (*v136 != 0) {
        *(_QWORD*)(v140 + 268) = 0x44048000C46D8000LL;
        *(_QWORD*)(v140 + 276) = 0xC4048000446D8000LL;
      }
    }
  }
  if (v153 != 0) {
    result = std___1___shared_weak_count___release_weak(v153);
  }
  if (v155 != 0) {
    result = std___1___shared_weak_count___release_weak(v155);
  }
  if (v157 != 0) {
    result = std___1___shared_weak_count___release_weak(v157);
  }
  if (v159 != 0) {
    return std___1___shared_weak_count___release_weak(v159);
  }
  return result;
}

__int64 ProcScountInfo_Unknown92(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  struct {
    __int64* v8;
    int v9;
    char gap20_[4];
    __int64 v10;
  } v8_;
  __int64 var4;

  v2 = *(_QWORD**)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    if (v2[19] != 0) {
      v8_.v10 = 0;
      v8_.v8 = GameData_212d890[0] + 2;
      v8_.v9 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64**))(
          v2[1] + 16LL))((void*)(&var4), v2 + 1, &v8_.v8);
    }
    v2[20] = 0;
    FloatingHelp_18af120(v2, (__int64*)(a1 + 848));
    GameRoutine_18af980((__int64)v2, (__int64*)(a1 + 848));
  }
  v3 = a1;
  v4 = a1;
  v5 = GameData_212c610;
  v6 = GameData_2131c18[0];
  do {
    result = __dynamic_cast(v4, v5, v6, 0);
    v4 = *(_QWORD*)(v4 + 32);
    if (result != 0) {
      v3 = result;
    }
  } while (v4 != 0);
  if (v3 == a1) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  return result;
}

__int64 ProcScountInfo_Unknown131()
{
  __int64 result;

  result = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    return LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return result;
}

__int64 ProcScountInfo_Unknown139(__int64 a1, __int64* a2)
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
    *(_QWORD*)v15 = "XHelp";
    *(_QWORD*)(v15 + 8) = 0;
    v16 = v14 + 40 * v12;
    *(_BYTE*)(v15 + 16) = 0;
    *(_BYTE*)(v15 + 28) = 0;
    v6 = v14 + v8 + 40;
    *(_QWORD*)(v15 + 32) = 0;
    *(_DWORD*)(v15 + 20) = 2;
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
    *(_BYTE*)(v4 + 16) = 0;
    *(_BYTE*)(v4 + 28) = 0;
    v6 = v4 + 40;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "XHelp";
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 ProcScountInfo_Unknown140(__int64 a1, __int64 a2, char a3)
{
  if (*(int*)(a1 + 1072) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1072, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  GameRoutine_16f5ea0(a1);
  return 13;
}

__int64 ProcScountInfo_Unknown12(__int64 a1, __int64 a2, char a3)
{
  if (*(int*)(a1 + 896) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 896, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  GameRoutine_16f5ea0(a1 - 176);
  return 13;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcScountInfo_OnInit_closure_Invoke(PSEUDO_X8 x8_,
                                                         __int64 unused_int0,
                                                         _DWORD* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v3;
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

  if (*a1 == 1) {
    v3 = "MID_ScoutInfo_Status";
  }
  else {
    v3 = "MID_ScoutInfo_Introduction";
  }
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
      goto LABEL_16;
    }
  }
  result = memmove(v8, v5, v7);
LABEL_16:
  v8[v7] = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
