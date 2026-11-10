#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_EquipMenuItem_AnimalPool_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AnimalPoolMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, int a5, int a6);
__int64 FloatingHelp_18aee60(_QWORD, _QWORD);
__int64 GameRoutine_1862240(_QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_822320(_QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_1fae980[6];
extern __int64 (*anonymous_EquipMenuItem_PoolEmpty_vtable[])();
extern __int64 GameData_21c99a8;
extern __int64 GameData_21f1e08;
extern __int64 game_GameModeData_instance_;
extern int game_g_shared_system_skills;
void __attribute__((noreturn)) GameRoutine_1793290(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 AnimalPoolMenu_18620f0(__int64 result);
__int64 AnimalPoolMenu_18621a0(__int64 a1);
bool AnimalPoolMenu_1862950(__int64 a1, _QWORD* a2);
__int64 AnimalPoolMenu_18629b0(__int64* a1);
__int64 game_menu_AnimalPoolMenu_UpdateEquipList_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2);
bool game_menu_AnimalPoolMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2);
__int64 game_menu_AnimalPoolMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                              _QWORD* a2,
                                                              _QWORD* a3);
__int64 game_menu_AnimalPoolMenu_GetSumReliance_lambda0_Invoke(__int64 result,
                                                               __int64* a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_1864080(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682660(_QWORD);
__int64 GameRoutine_930ee0(_QWORD, _QWORD);
__int64 GameRoutine_930fd0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_20f0760[])();
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212e008[9];
extern __int64 GameData_20efdc8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 AnimalPoolMenu_18626c0(__int64 a1, int a2);
__int64 AnimalPoolMenu_1862830(__int64 a1);
__int64 game_menu_AnimalPoolMenu_GetSumReliance(__int64 a1, unsigned __int8* a2,
                                                __int64 a3);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1612830(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_1595490(_QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_menu_PageTab_SetupImage(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_20f0560[])();
extern __int64 GameData_21f4018[];
extern __int64 GameData_21f4228;
__int64 game_menu_AnimalPoolMenu_OnInit(__int64* a1);

__int64 game_menu_AnimalPoolMenu_OnInit(__int64* a1)
{
  __int64 v1;
  _QWORD* v3;
  _QWORD* v4;
  const char* v5;
  const char* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
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
  const char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  const char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  long double v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  const char* v44;
  unsigned __int64 v45;
  int v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  int v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  const char* v66;
  unsigned __int64 v67;
  int v68;
  unsigned __int64 v69;
  char* v70;
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
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64* v88;
  __int64 v89;
  long double v90;
  const char* v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  long double v96;
  const char* v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  long double v102;
  const char* v103;
  __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  const char* v107;
  const char* v108;
  __int64 v109;
  __int64 v110;
  long double v111;
  const char* v112;
  __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  const char* v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  const char* v122;
  __int64 result;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  const char* v128;
  __int64 v129;
  const char** v130;
  __int64 v131;
  __int64 v132;
  _QWORD v133[2];
  const char* v134;
  __int64 v135;
  const char* v136;
  __int64 v137;
  const char* v138;
  __int64 v139;
  const char* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;

  v1 = a1[133];
  v3 = a1 + 106;
  v4 = a1 + 106;
  if (v1 != 0) {
    v5 = "Menu_Default";
  }
  else {
    v5 = "Menu_Naming";
  }
  LayoutAccessor_1562cf0(v4, v5);
  if (a1[133] != 0) {
    v6 = "Menu_Default";
  }
  else {
    v6 = "Menu_Naming";
  }
  LayoutAccessor_1562cf0(a1 + 119, v6);
  LayoutAccessor_1560070((void*)(&v131), a1 + 119, "L_PageTab");
  v128 = (const char*)GameData_20f0560;
  v7 = *a1;
  v130 = &v128;
  v8 = (*(__int64 (**)(__int64*))(v7 + 192))(a1);
  game_menu_PageTab_SetupImage(a1 + 82, &v131, &v128, v8, 14, 15);
  if (v130 == &v128) {
    v9 = 32;
  }
  else {
    if (v130 == nullptr) {
      goto LABEL_12;
    }
    v9 = 40;
  }
  (*(void (**)(void)) & (*v130)[v9])();
LABEL_12:
  if (v132 != 0) {
    std___1___shared_weak_count___release_weak(v132);
  }
  v10 = a1[107];
  v128 = "L_Help/L_Skill00";
  v129 = 16;
  if (v10 == 0) {
    goto LABEL_26;
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
    goto LABEL_26;
  }
  v12 = *v3;
  v13 = v11;
  if (*v3 != 0) {
    GameRoutine_1612830((void*)(&v126), *v3, &v128);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    if (v12 != 0) {
      goto LABEL_20;
    }
  LABEL_26:
    v126 = 0;
    v127 = 0;
    goto LABEL_27;
  }
  if (v12 == 0) {
    goto LABEL_26;
  }
LABEL_20:
  if (v127 != 0 && *(_QWORD*)(v127 + 8) != -1) {
    v14 = std___1___shared_weak_count_lock(v127);
    if (v14 != 0) {
      *(_BYTE*)(v126 + 1109) = 1;
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v15 = v14;
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v15);
      }
    }
    else {
      *(((_BYTE*)0x454LL) + 1) = 1;
    }
  }
LABEL_27:
  v16 = a1[107];
  v128 = "L_Help/L_Skill01";
  v129 = 16;
  if (v16 == 0) {
    goto LABEL_40;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 == 0) {
    goto LABEL_40;
  }
  v18 = *v3;
  v19 = v17;
  if (*v3 != 0) {
    GameRoutine_1612830((void*)(&v124), *v3, &v128);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
    if (v18 != 0) {
      goto LABEL_33;
    }
  LABEL_40:
    v124 = 0;
    v125 = 0;
    goto LABEL_41;
  }
  if (v18 == 0) {
    goto LABEL_40;
  }
LABEL_33:
  if (v125 == 0 || *(_QWORD*)(v125 + 8) == -1) {
    goto LABEL_41;
  }
  v20 = std___1___shared_weak_count_lock(v125);
  if (v20 != 0) {
    *(_BYTE*)(v124 + 1109) = 1;
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v21 = v20;
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v21);
      if (a1[133] == 0) {
        goto LABEL_221;
      }
      goto LABEL_42;
    }
  LABEL_41:
    if (a1[133] == 0) {
      goto LABEL_221;
    }
    goto LABEL_42;
  }
  *(((_BYTE*)0x454LL) + 1) = 1;
  if (a1[133] == 0) {
    goto LABEL_221;
  }
LABEL_42:
  LayoutAccessor_1560070((void*)(&v128), v3, "L_UnitEquipInfo");
  v22 = v129;
  if (v129 == 0) {
    goto LABEL_221;
  }
  if (*(_QWORD*)(v129 + 8) == -1) {
    goto LABEL_220;
  }
  v23 = std___1___shared_weak_count_lock(v129);
  v24 = v128;
  v25 = v23;
  v140 = "L_UnitInfo";
  v141 = 10;
  v26 = *((_QWORD*)v128 + 1);
  if (v26 == 0) {
    goto LABEL_51;
  }
  v27 = std___1___shared_weak_count_lock(v26);
  if (v27 == 0) {
    goto LABEL_51;
  }
  v28 = *(_QWORD*)v24;
  v29 = v27;
  if (v28 != 0) {
    GameRoutine_15b71b0((void*)(&v142), v28, &v140);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
  }
  if (v28 == 0) {
  LABEL_51:
    v142 = 0;
    v143 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v30 = std___1___shared_weak_count_lock(v129);
  v31 = v128;
  v32 = v30;
  v138 = "L_AnimalInfo/L_MenuItem_Name";
  v139 = 28;
  v33 = *((_QWORD*)v128 + 1);
  if (v33 == 0) {
    goto LABEL_61;
  }
  v34 = std___1___shared_weak_count_lock(v33);
  if (v34 == 0) {
    goto LABEL_61;
  }
  v35 = *(_QWORD*)v31;
  v36 = v34;
  if (v35 != 0) {
    GameRoutine_15b71b0((void*)(&v140), v35, &v138);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    std___1___shared_weak_count___release_weak(v36);
  }
  if (v35 == 0) {
  LABEL_61:
    v140 = nullptr;
    v141 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak(v32);
  }
  if (v143 != 0 && *(_QWORD*)(v143 + 8) != -1 && v141 != 0 &&
      *(_QWORD*)(v141 + 8) != -1) {
    v37 = std___1___shared_weak_count_lock(v143);
    v39 = v142;
    v40 = v37;
    v41 = *(unsigned __int8*)(v142 + 856);
    v42 = *(_QWORD*)(v142 + 864);
    if ((v41 & 1) == 0) {
      v42 = v41 >> 1;
    }
    if (v42 != 0) {
      if ((v41 & 1) != 0) {
        **(_BYTE**)(v142 + 872) = 0;
        *(_QWORD*)(v39 + 864) = 0;
      }
      else {
        *(_WORD*)(v142 + 856) = 0;
      }
    }
    GameRoutine_60a060(v39 + 856, "L_AnimalInfo/L_MenuItem_Name", 28, v38);
    if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak(v40);
    }
    v43 = std___1___shared_weak_count_lock(v141);
    v44 = v140;
    v45 = *((unsigned __int8*)v140 + 832);
    v46 = v45 & 1;
    v47 = v45 >> 1;
    if (v46 != 0) {
      v47 = *((_QWORD*)v140 + 105);
    }
    if (v47 != 0) {
      if (v46 == 0) {
        *((_BYTE*)v140 + 833) = 0;
        goto LABEL_87;
      }
      **((_BYTE**)v140 + 106) = 0;
      *((_QWORD*)v44 + 105) = 0;
      v46 = v44[832] & 1;
    }
    if (v46 != 0) {
      *((_QWORD*)v44 + 105) = 10;
      v48 = *((char**)v44 + 106);
      goto LABEL_88;
    }
  LABEL_87:
    *((_BYTE*)v44 + 832) = 20;
    v48 = (char*)(v44 + 833);
  LABEL_88:
    strcpy(v48, "L_UnitInfo");
    if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v49 = v43;
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak(v49);
    }
  }
  if (v141 != 0) {
    std___1___shared_weak_count___release_weak(v141);
  }
  if (v143 != 0) {
    std___1___shared_weak_count___release_weak(v143);
  }
  v50 = a1[107];
  v140 = "L_UnitEquipInfo/L_UnitInfo";
  v141 = 26;
  if (v50 == 0) {
    goto LABEL_101;
  }
  v51 = std___1___shared_weak_count_lock(v50);
  if (v51 == 0) {
    goto LABEL_101;
  }
  v52 = *v3;
  v53 = v51;
  if (*v3 != 0) {
    GameRoutine_15b71b0((void*)(&v142), *v3, &v140);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak(v53);
  }
  if (v52 == 0) {
  LABEL_101:
    v142 = 0;
    v143 = 0;
  }
  v54 = a1[107];
  v138 = "L_UnitEquipInfo/L_AnimalInfo";
  v139 = 28;
  if (v54 == 0) {
    goto LABEL_109;
  }
  v55 = std___1___shared_weak_count_lock(v54);
  if (v55 == 0) {
    goto LABEL_109;
  }
  v56 = *v3;
  v57 = v55;
  if (*v3 != 0) {
    GameRoutine_15b71b0((void*)(&v140), *v3, &v138);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak(v57);
  }
  if (v56 == 0) {
  LABEL_109:
    v140 = nullptr;
    v141 = 0;
  }
  v58 = std___1___shared_weak_count_lock(v143);
  v59 = v142;
  v60 = *(unsigned __int8*)(v142 + 904);
  v61 = v60 & 1;
  v62 = v60 >> 1;
  if (v61 != 0) {
    v62 = *(_QWORD*)(v142 + 912);
  }
  if (v62 != 0) {
    if (v61 == 0) {
      *(_BYTE*)(v142 + 905) = 0;
      goto LABEL_118;
    }
    **(_BYTE**)(v142 + 920) = 0;
    *(_QWORD*)(v59 + 912) = 0;
    v61 = *(_BYTE*)(v59 + 904) & 1;
  }
  if (v61 != 0) {
    *(_QWORD*)(v59 + 912) = 16;
    v63 = *(char**)(v59 + 920);
    goto LABEL_119;
  }
LABEL_118:
  *(_BYTE*)(v59 + 904) = 32;
  v63 = (char*)(v59 + 905);
LABEL_119:
  strcpy(v63, "L_Help/L_Skill00");
  if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v64 = v58;
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    std___1___shared_weak_count___release_weak(v64);
  }
  v65 = std___1___shared_weak_count_lock(v141);
  v66 = v140;
  v67 = *((unsigned __int8*)v140 + 904);
  v68 = v67 & 1;
  v69 = v67 >> 1;
  if (v68 != 0) {
    v69 = *((_QWORD*)v140 + 114);
  }
  if (v69 != 0) {
    if (v68 == 0) {
      *((_BYTE*)v140 + 905) = 0;
      goto LABEL_129;
    }
    **((_BYTE**)v140 + 115) = 0;
    *((_QWORD*)v66 + 114) = 0;
    v68 = v66[904] & 1;
  }
  if (v68 != 0) {
    *((_QWORD*)v66 + 114) = 16;
    v70 = *((char**)v66 + 115);
    goto LABEL_130;
  }
LABEL_129:
  *((_BYTE*)v66 + 904) = 32;
  v70 = (char*)(v66 + 905);
LABEL_130:
  strcpy(v70, "L_Help/L_Skill00");
  if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v71 = v65;
    (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
    std___1___shared_weak_count___release_weak(v71);
  }
  v72 = a1[107];
  v136 = "L_Help/L_Skill00";
  v137 = 16;
  if (v72 == 0) {
    goto LABEL_139;
  }
  v73 = std___1___shared_weak_count_lock(v72);
  if (v73 == 0) {
    goto LABEL_139;
  }
  v74 = *v3;
  v75 = v73;
  if (*v3 != 0) {
    GameRoutine_15b71b0((void*)(&v138), *v3, &v136);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
    std___1___shared_weak_count___release_weak(v75);
  }
  if (v74 == 0) {
  LABEL_139:
    v138 = nullptr;
    v139 = 0;
  }
  v76 = a1[107];
  v134 = "L_Help/L_Skill01";
  v135 = 16;
  if (v76 == 0) {
    goto LABEL_147;
  }
  v77 = std___1___shared_weak_count_lock(v76);
  if (v77 == 0) {
    goto LABEL_147;
  }
  v78 = *v3;
  v79 = v77;
  if (*v3 != 0) {
    GameRoutine_15b71b0((void*)(&v136), *v3, &v134);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
    std___1___shared_weak_count___release_weak(v79);
  }
  if (v78 == 0) {
  LABEL_147:
    v136 = nullptr;
    v137 = 0;
  }
  v80 = a1[107];
  v133[0] = "L_Help/L_FavoriteItem";
  v133[1] = 21;
  if (v80 == 0) {
    goto LABEL_155;
  }
  v81 = std___1___shared_weak_count_lock(v80);
  if (v81 == 0) {
    goto LABEL_155;
  }
  v82 = *v3;
  v83 = v81;
  if (*v3 != 0) {
    GameRoutine_15b71b0((void*)(&v134), *v3, v133);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
    std___1___shared_weak_count___release_weak(v83);
  }
  if (v82 == 0) {
  LABEL_155:
    v134 = nullptr;
    v135 = 0;
  }
  v84 = a1[133];
  v85 = *(_QWORD*)(v84 + 400);
  v86 = *(unsigned __int8*)(v84 + 1880);
  if (*(_BYTE*)(v85 + 96) == 2 && *(_BYTE*)(v84 + 1880) == 0) {
    v87 = *(_QWORD*)(v85 + 112);
    if (v87 != 0) {
      v88 = &GameData_21f4018[8 *
                              (unsigned __int64)*(unsigned __int8*)(v87 + 32)];
    }
    else {
      v88 = &GameData_21f4228;
    }
    v86 = *(unsigned __int8*)v88;
  }
  v89 = std___1___shared_weak_count_lock(v139);
  v91 = v138;
  v92 = v89;
  v93 = *((unsigned __int8*)v138 + 880);
  v94 = *((_QWORD*)v138 + 111);
  if ((v93 & 1) == 0) {
    v94 = v93 >> 1;
  }
  if (v86 != 0) {
    if (v94 != 0) {
      if ((v93 & 1) != 0) {
        **((_BYTE**)v138 + 112) = 0;
        *((_QWORD*)v91 + 111) = 0;
      }
      else {
        *((_WORD*)v138 + 440) = 0;
      }
    }
    GameRoutine_60a060(
        v91 + 880, "L_UnitEquipInfo/L_AnimalInfo/L_MenuItem_Morph", 45, v90);
    if (atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
      std___1___shared_weak_count___release_weak(v92);
    }
    v95 = std___1___shared_weak_count_lock(v137);
    v97 = v136;
    v98 = v95;
    v99 = *((unsigned __int8*)v136 + 880);
    v100 = *((_QWORD*)v136 + 111);
    if ((v99 & 1) == 0) {
      v100 = v99 >> 1;
    }
    if (v100 != 0) {
      if ((v99 & 1) != 0) {
        **((_BYTE**)v136 + 112) = 0;
        *((_QWORD*)v97 + 111) = 0;
      }
      else {
        *((_WORD*)v136 + 440) = 0;
      }
    }
    GameRoutine_60a060(
        v97 + 880, "L_UnitEquipInfo/L_AnimalInfo/L_MenuItem_Morph", 45, v96);
    if (atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
      std___1___shared_weak_count___release_weak(v98);
    }
    v101 = std___1___shared_weak_count_lock(v135);
    v103 = v134;
    v104 = v101;
    v105 = *((unsigned __int8*)v134 + 880);
    v106 = *((_QWORD*)v134 + 111);
    if ((v105 & 1) == 0) {
      v106 = v105 >> 1;
    }
    if (v106 != 0) {
      if ((v105 & 1) != 0) {
        **((_BYTE**)v134 + 112) = 0;
        *((_QWORD*)v103 + 111) = 0;
      }
      else {
        *((_WORD*)v134 + 440) = 0;
      }
    }
    v107 = "L_UnitEquipInfo/L_AnimalInfo/L_MenuItem_Morph";
    v108 = v103 + 880;
    v109 = 45;
  }
  else {
    if (v94 != 0) {
      if ((v93 & 1) != 0) {
        **((_BYTE**)v138 + 112) = 0;
        *((_QWORD*)v91 + 111) = 0;
      }
      else {
        *((_WORD*)v138 + 440) = 0;
      }
    }
    GameRoutine_60a060(v91 + 880, "L_UnitEquipInfo/L_UnitInfo", 26, v90);
    if (atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
      std___1___shared_weak_count___release_weak(v92);
    }
    v110 = std___1___shared_weak_count_lock(v137);
    v112 = v136;
    v113 = v110;
    v114 = *((unsigned __int8*)v136 + 880);
    v115 = *((_QWORD*)v136 + 111);
    if ((v114 & 1) == 0) {
      v115 = v114 >> 1;
    }
    if (v115 != 0) {
      if ((v114 & 1) != 0) {
        **((_BYTE**)v136 + 112) = 0;
        *((_QWORD*)v112 + 111) = 0;
      }
      else {
        *((_WORD*)v136 + 440) = 0;
      }
    }
    GameRoutine_60a060(v112 + 880, "L_UnitEquipInfo/L_UnitInfo", 26, v111);
    if (atomic_fetch_add((atomic_ullong* volatile)(v113 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v113 + 16LL))(v113);
      std___1___shared_weak_count___release_weak(v113);
    }
    v116 = std___1___shared_weak_count_lock(v135);
    v117 = v134;
    v104 = v116;
    v118 = *((unsigned __int8*)v134 + 880);
    v119 = *((_QWORD*)v134 + 111);
    if ((v118 & 1) == 0) {
      v119 = v118 >> 1;
    }
    if (v119 != 0) {
      if ((v118 & 1) != 0) {
        **((_BYTE**)v134 + 112) = 0;
        *((_QWORD*)v117 + 111) = 0;
      }
      else {
        *((_WORD*)v134 + 440) = 0;
      }
    }
    v107 = "L_UnitEquipInfo/L_UnitInfo";
    v108 = v117 + 880;
    v109 = 26;
  }
  GameRoutine_60a060(v108, v107, v109, v102);
  if (atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
    std___1___shared_weak_count___release_weak(v104);
  }
  if (v135 != 0) {
    std___1___shared_weak_count___release_weak(v135);
  }
  if (v137 != 0) {
    std___1___shared_weak_count___release_weak(v137);
  }
  if (v139 != 0) {
    std___1___shared_weak_count___release_weak(v139);
  }
  if (v141 != 0) {
    std___1___shared_weak_count___release_weak(v141);
  }
  if (v143 != 0) {
    std___1___shared_weak_count___release_weak(v143);
  }
  v22 = v129;
  if (v129 != 0) {
  LABEL_220:
    std___1___shared_weak_count___release_weak(v22);
  }
LABEL_221:
  v120 = game_util_Format("%s/L_Num", "L_EquipPool");
  LayoutAccessor_1560070((void*)(&v128), v3, v120);
  if (v129 != 0) {
    v121 = std___1___shared_weak_count_lock(v129);
    v122 = v128;
    if (v129 != 0) {
      std___1___shared_weak_count___release_weak(v129);
    }
    if (v121 != 0 && v122 != nullptr) {
      GameRoutine_1595490(v122);
    }
    else if (v121 == 0) {
      goto LABEL_230;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v121 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v121 + 16LL))(v121);
      std___1___shared_weak_count___release_weak(v121);
    }
  }
LABEL_230:
  if (v125 != 0) {
    std___1___shared_weak_count___release_weak(v125);
  }
  result = v127;
  if (v127 != 0) {
    return std___1___shared_weak_count___release_weak(v127);
  }
  return result;
}

__int64 AnimalPoolMenu_18620f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v2 = result + 848;
    v3 = result;
    v4 = GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    FloatingHelp_18aee60(v4, v2);
    GameRoutine_18ae960(v1, 1);
    result = *(_QWORD*)(v1 + 240);
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    *(_QWORD*)(v1 + 160) = v3;
    *(_BYTE*)(v1 + 257) = 0;
    *(_DWORD*)(v1 + 248) = -1;
    v5 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

__int64 AnimalPoolMenu_18621a0(__int64 a1)
{
  int v1;
  __int64 v2;
  const char* v4;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    LOBYTE(v1) = *(_BYTE*)(v2 + 4LL * v1);
  }
  if ((unsigned int)(unsigned __int8)v1 - 1 > 4) {
    v4 = "MID_Menu_All";
  }
  else {
    v4 = (const char*)GameData_1fae980[(unsigned __int8)v1];
  }
  LayoutAccessor_1562060(a1 + 952, "T_Type", v4);
  GameRoutine_1862240(a1, *(_QWORD*)(a1 + 1064));
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1216LL))(a1);
}

__int64 AnimalPoolMenu_18626c0(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _BYTE v6[200];
  __int64 v7;
  __int64 v8;

  if (a2 == 14) {
    v7 = v2;
    v8 = v3;
    snd_Fade_Fade_10c830(v6, 0.0f);
    snd_play_ff2d0((void*)(&v5), "SE_SYS_NG", "SE_SYS_NG", v6, 0, 65537, 0,
                   0.0f, 1.0f);
    return snd_Fade_Destroy_Fade(v6);
  }
  return result;
}

__int64 AnimalPoolMenu_1862830(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  __int64* v4;
  unsigned __int8* v5;
  unsigned __int8 v6;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20efdc8, 0);
    if (result != 0) {
      v3 = (unsigned __int8*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                       560LL))(result);
      v4 = GameData_212c8b0[0];
      if (*v3 == *(unsigned __int8*)GameData_212c8b0[0] &&
          v3[1] == *((unsigned __int8*)GameData_212c8b0[0] + 1) &&
          v3[2] == *((unsigned __int8*)GameData_212c8b0[0] + 2) &&
          v3[3] == *((unsigned __int8*)GameData_212c8b0[0] + 3) &&
          *((_DWORD*)v3 + 1) == *((_DWORD*)GameData_212c8b0[0] + 1) &&
          *((_DWORD*)v3 + 2) ==
              *(_DWORD*)((char*)GameData_212c8b0[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL)) &&
          (v5 = v3,
           (GameRoutine_930ee0(v3 + 16, GameData_212c8b0[0] + 2) & 1) != 0)) {
        v6 = GameRoutine_930fd0(v5 + 40, v4 + 5);
      }
      else {
        v6 = 0;
      }
      return GameRoutine_1567590("XHelp", v6 & (*(_QWORD*)(a1 + 1064) == 0));
    }
  }
  return result;
}

bool AnimalPoolMenu_1862950(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  unsigned int v11;
  bool v12;
  int v13;
  int v16;

  if (a2 == nullptr) {
    return false;
  }
  v3 = GameRoutine_820d50(6);
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
      return false;
    }
  }
  if ((GameRoutine_822320(1) & 1) == 0) {
    return false;
  }
  v5 = a2[218];
  v6 = a2[219] - v5;
  v16 = game_g_shared_system_skills & 0xFFF;
  v7 =
      ((unsigned __int64)(unsigned int)game_g_shared_system_skills >> 5) & 0x7F;
  if (v7 + 1 <= v6 >> 2 &&
      ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >>
        game_g_shared_system_skills) &
       1) != 0 &&
      (game_HasActiveSkill_843420(&v16, a2 + 218) & 1) != 0) {
    v8 = a2[55];
    v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
    if (((1 << v9) & 0xF1) != 0) {
      return false;
    }
  }
  v10 = a2[55];
  if (v10 == 0) {
    return false;
  }
  v11 = *(unsigned __int8*)(v10 + 16);
  v12 = v11 > 7;
  v13 = (1 << v11) & 0x91;
  return !v12 && v13 != 0 && *(_BYTE*)(a2[50] + 96LL) == 2;
}

__int64 AnimalPoolMenu_18629b0(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  v3 = a1[133];
  v4 = (_QWORD*)v2;
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 40) = -1;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = v3;
  v5 = a1[43];
  *v4 = anonymous_EquipMenuItem_PoolEmpty_vtable;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = *a1;
  v4[1] = a1;
  a1[43] = (__int64)v4;
  return (*(__int64 (**)(__int64*))(v6 + 1208))(a1);
}

__int64 AnimalPoolMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, int a5, int a6)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_DWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 96) = a3;
  *(_DWORD*)(result + 104) = a6;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_menu_EquipMenuItem_AnimalPool_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 game_menu_AnimalPoolMenu_GetSumReliance(__int64 a1, unsigned __int8* a2,
                                                __int64 a3)
{
  unsigned __int8* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  unsigned int v7;
  unsigned __int8* v8;
  unsigned int v9;
  bool v10;
  __int64 v11;
  unsigned int v12;
  unsigned __int8* v13;
  _QWORD* v14;
  unsigned __int8* v15;
  __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  bool v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  _QWORD* v25;
  unsigned int v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  _QWORD* v32;
  unsigned int v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  _QWORD v38[4];
  _QWORD* v39;
  char* v40;
  char* v41;
  __int64 v42;
  __int64 v43;

  if (*a2 == 0 ||
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) + 8LL * *a2) +
                109LL) == 0) {
    return 0;
  }
  if (a2[3] != 0) {
    v3 = a2;
    v4 = game_UnitPool_Get(a2 + 3);
    if (v4 == 0) {
      v12 = 0;
      a2 = v3;
      goto LABEL_20;
    }
    v5 = *(_QWORD*)(v4 + 392);
    a2 = v3;
    if (v5 != 0) {
      v6 = *((unsigned __int8**)v3 + 3);
      if (v6 != nullptr) {
        v7 = *(unsigned __int8*)(v5 + 48);
        v8 = v3 + 24;
        do {
          v9 = v6[26];
          v10 = v9 >= v7;
          if (v9 >= v7) {
            v11 = 0;
          }
          else {
            v11 = 8;
          }
          if (v10) {
            v8 = v6;
          }
          v6 = *(unsigned __int8**)&v6[v11];
        } while (v6 != nullptr);
        if (v8 != v3 + 24 && v7 >= v8[26]) {
          v12 = *((_WORD*)v8 + 14) & 0xFFF;
          goto LABEL_20;
        }
      }
    }
  }
  v12 = 0;
LABEL_20:
  v13 = *((unsigned __int8**)a2 + 2);
  v14 = v38;
  v15 = a2 + 24;
  v41 = nullptr;
  v42 = 0;
  v40 = nullptr;
  v38[0] = GameData_20f0760;
  v38[1] = a2;
  v39 = v38;
  v38[2] = &v40;
  if (v13 == a2 + 24) {
    goto LABEL_35;
  }
  do {
    v16 = GameRoutine_682660(v13[26]);
    if (v16 != 0) {
      v43 = v16;
      if (v39 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64*))(*v39 + 48LL))(v39, &v43);
    }
    v17 = *((unsigned __int8**)v13 + 1);
    if (v17 != nullptr) {
      do {
        v18 = v17;
        v17 = *(unsigned __int8**)v17;
      } while (v17 != nullptr);
    }
    else {
      do {
        v18 = *((unsigned __int8**)v13 + 2);
        v19 = v13 == *(unsigned __int8**)v18;
        v13 = v18;
      } while (!v19);
    }
    v13 = v18;
  } while (v18 != v15);
  v14 = v39;
  if (v39 == v38) {
  LABEL_35:
    v20 = 32;
  }
  else {
    if (v39 == nullptr) {
      goto LABEL_37;
    }
    v20 = 40;
  }
  (*(void (**)(_QWORD*, unsigned __int8*, __int64))(*v14 + v20))(v14, a2, a3);
LABEL_37:
  v21 = v40;
  if (v40 == v41 ||
      (GameRoutine_1864080(v40, v41, (2 * __clz((v41 - v40) >> 4)) ^ 0x7E, 1),
       v21 = v40, v41 == v40)) {
    if (v21 == nullptr) {
      return v12;
    }
  }
  else {
    v22 = *(_QWORD*)v40;
    if (*(_QWORD*)v40 != 0) {
      v23 = *(_QWORD*)v15;
      if (*(_QWORD*)v15 == 0) {
        goto LABEL_51;
      }
      v24 = *(unsigned __int8*)(v22 + 48);
      v25 = v15;
      do {
        v26 = *(unsigned __int8*)(v23 + 26);
        v27 = v26 >= v24;
        if (v26 >= v24) {
          v28 = 0;
        }
        else {
          v28 = 8;
        }
        if (v27) {
          v25 = (_QWORD*)v23;
        }
        v23 = *(_QWORD*)(v23 + v28);
      } while (v23 != 0);
      if (v25 != (_QWORD*)v15 && v24 >= *((unsigned __int8*)v25 + 26)) {
        LODWORD(v22) = *((_WORD*)v25 + 14) & 0xFFF;
      }
      else {
      LABEL_51:
        LODWORD(v22) = 0;
      }
    }
    v12 += v22;
    if ((unsigned __int64)(v41 - v40) >= 0x11) {
      v29 = *((_QWORD*)v40 + 2);
      if (v29 != 0) {
        v30 = *(_QWORD*)v15;
        if (*(_QWORD*)v15 == 0) {
          goto LABEL_65;
        }
        v31 = *(unsigned __int8*)(v29 + 48);
        v32 = v15;
        do {
          v33 = *(unsigned __int8*)(v30 + 26);
          v34 = v33 >= v31;
          if (v33 >= v31) {
            v35 = 0;
          }
          else {
            v35 = 8;
          }
          if (v34) {
            v32 = (_QWORD*)v30;
          }
          v30 = *(_QWORD*)(v30 + v35);
        } while (v30 != 0);
        if (v32 != (_QWORD*)v15 && v31 >= *((unsigned __int8*)v32 + 26)) {
          LODWORD(v29) = *((_WORD*)v32 + 14) & 0xFFF;
        }
        else {
        LABEL_65:
          LODWORD(v29) = 0;
        }
      }
      v12 += v29;
    }
  }
  v41 = v21;
  v36 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v36 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
  return v12;
}

__int64 game_menu_AnimalPoolMenu_UpdateEquipList_lambda0_Invoke(__int64 a1,
                                                                _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1152LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

bool game_menu_AnimalPoolMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  int v2;
  __int64 v3;

  v2 = **(unsigned __int8**)(a1 + 8);
  v3 = *(unsigned __int8*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v2 == 6) {
    return (_DWORD)v3 != 0;
  }
  else {
    return v2 ==
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                                          8 * v3) +
                               32LL);
  }
}

__int64 game_menu_AnimalPoolMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                              _QWORD* a2,
                                                              _QWORD* a3)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      **(_QWORD**)(a1 + 8) + 1200LL))(*(_QWORD*)(a1 + 8), *a2, *a3);
}

__int64 game_menu_AnimalPoolMenu_GetSumReliance_lambda0_Invoke(__int64 result,
                                                               __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  bool v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v2 = *(__int64**)(result + 16);
  v3 = *a2;
  if (*a2 == 0) {
    goto LABEL_13;
  }
  v4 = *(_QWORD*)(result + 8);
  v7 = *(_QWORD*)(v4 + 24);
  v5 = v4 + 24;
  v6 = v7;
  if (v7 == 0) {
    goto LABEL_13;
  }
  v8 = *(unsigned __int8*)(v3 + 48);
  v9 = v5;
  do {
    v10 = *(unsigned __int8*)(v6 + 26);
    v11 = v10 >= v8;
    if (v10 >= v8) {
      v12 = 0;
    }
    else {
      v12 = 8;
    }
    if (v11) {
      v9 = v6;
    }
    v6 = *(_QWORD*)(v6 + v12);
  } while (v6 != 0);
  if (v9 != v5 && v8 >= *(unsigned __int8*)(v9 + 26)) {
    v13 = *(_WORD*)(v9 + 28) & 0xFFF;
  }
  else {
  LABEL_13:
    v13 = 0;
  }
  v15 = v2[1];
  v14 = v2[2];
  if (v15 >= v14) {
    v17 = *v2;
    v18 = v15 - *v2;
    v19 = (v18 >> 4) + 1;
    if (v19 >> 60 != 0) {
      GameRoutine_1793290();
    }
    v20 = v14 - v17;
    v21 = fw_memory_g_heap_manager_ptr;
    if (v20 >> 3 > v19) {
      v19 = v20 >> 3;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF0LL) {
      v22 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v22 = v19;
    }
    if (v22 != 0) {
      if (v22 >> 60 != 0) {
        GameRoutine_60a210(result);
      }
      v23 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v22, 16, 0);
    }
    else {
      v23 = 0;
    }
    v24 = v23 + v18;
    v25 = v23 + 16 * v22;
    *(_QWORD*)v24 = v3;
    v26 = v23 + v18 - 16 * (v18 >> 4);
    *(_DWORD*)(v24 + 8) = v13;
    v16 = v23 + v18 + 16;
    result = memcpy(v26, v17, v18);
    *v2 = v26;
    v2[1] = v16;
    v2[2] = v25;
    if (v17 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27);
    }
  }
  else {
    *(_QWORD*)v15 = v3;
    *(_DWORD*)(v15 + 8) = v13;
    v16 = v15 + 16;
  }
  v2[1] = v16;
  return result;
}

#pragma GCC visibility pop
