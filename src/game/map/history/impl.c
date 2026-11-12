#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7c41f0(void);
extern __int64* GameData_212ce80[5];
__int64 game_map_history_Impl_UpdateMap_lambda0_Invoke(__int64 a1, int* a2,
                                                       int* a3);
bool game_map_history_Impl_PreviewDeserializer_Run_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2);
bool game_map_history_Impl_PreviewDeserializer_Run_lambda1_Invoke(__int64 a1,
                                                                  __int64 a2);
__int64 GameManager_a34c30(_QWORD, _QWORD);
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_122f660(_QWORD);
__int64 GameRoutine_123ff80(_QWORD);
__int64 GameRoutine_1272ce0(_QWORD, _QWORD);
__int64 GameRoutine_1285640(void);
__int64 GameRoutine_2b0();
__int64 GameRoutine_65d6c0(_QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e0f00(_QWORD, _QWORD);
__int64 GameRoutine_762b00(_QWORD, _QWORD);
__int64 GameRoutine_9609c0(_QWORD);
__int64 Image_72b080(_QWORD);
__int64 Impl_Destructor_1243e00(_QWORD);
__int64 Impl_Destructor_12a72c0(_QWORD);
__int64 ProcMapSeq_1225b60(_QWORD, _QWORD);
__int64 Stream_DeletingDestructor(_QWORD, _QWORD);
__int64 Stream_Destructor(_QWORD, _QWORD);
__int64 Trick_7d5160(_QWORD, _QWORD);
__int64 UnitActor_8194d0(_QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_RandomSeed_Serialize(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 game_map_8129a0(_QWORD, _QWORD);
__int64 game_map_812b00(_QWORD);
__int64 game_map_BonusExpList_Serialize(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Finalize(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_map_anonymous_NullObject_vtable_ptr[])();
extern __int64 (*GameData_201a6f8[])();
extern __int64 (*GameData_201a7d8[])();
extern __int64 (*GameData_201a968[])();
extern __int64 (*GameData_21309a8)();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_2130668[3];
extern __int64* GameData_2130670[2];
extern __int64* GameData_21309b0;
extern __int64* GameData_21309d0[4];
extern __int64* GameData_2130ad8[7];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_map_history_g_record_allocators_ptr[2];
extern __int64* game_map_history_g_record_region_ptr[3];
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 GameData_22400f8;
extern __int64 GameData_2240138;
extern __int64 GameData_2240150;
extern __int64 GameData_2240178;
extern __int64 GameData_22407a8;
extern __int64 GameData_22408e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_map_history_g_legion_pool;
extern __int64 game_map_history_g_record_alloc_failed;
extern __int64 game_map_history_g_ride_pool;
extern __int64 game_map_history_g_transporter;
extern __int64 game_script_map_obj_g_object_records;
extern __int64 game_sound_g_game_sound;
extern int* game_map_history_g_record_alloc_retries_ptr[39];
__int64 Impl_1226760_alt1(__int64 result) __asm__("Impl_1226760");
__int64
Impl_Destructor_12268e0_alt1(_QWORD* a1) __asm__("Impl_Destructor_12268e0");
__int64 Impl_1229960(__int64 a1);
__int64 game_map_history_Impl_UpdateMap(char a1);
_QWORD* Impl_122ffe0(_QWORD* a1);
__int64 Impl_1230010();
__int64*
GameRoutine_122f660_alt1(__int64* result) __asm__("GameRoutine_122f660");
__int64 nn_mem_StandardAllocator_Finalize_alt1(__int64) __asm__(
    "nn_mem_StandardAllocator_Finalize");
void GameHr_1285640();
void GameRoutine_65d6c0_alt1(_QWORD*) __asm__("GameRoutine_65d6c0");
void Impl_Destructor_1243e00_alt1(_QWORD*) __asm__("Impl_Destructor_1243e00");
void Impl_Destructor_12a72c0_alt1(_QWORD*) __asm__("Impl_Destructor_12a72c0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Impl_1226760(__int64 a1);
void Impl_Destructor_12268e0(_QWORD* a1);

void Impl_1226760(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  int v3;
  unsigned int v4;
  __int64 i;
  __int64 v6;
  int v7;
  bool v8;
  int v9;
  bool v10;
  __int64 v11;
  int v12;
  bool v13;
  __int64 v14;
  int v15;
  bool v16;
  __int64 v17;
  int v18;
  bool v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64* v22;
  unsigned __int64 v23;
  void (**v24)(unsigned __int64);
  __int64 v25;

  v1 = a1 + 24;
  v2 = (_QWORD*)(a1 + 32);
  v3 = 0x7FFFFFFF;
  v4 = -1;
  for (i = -100; i != 0; i += 5) {
    v6 = *(v2 - 1);
    if (v6 != 0) {
      v7 = *(unsigned __int16*)(v6 + 16);
      v8 = v3 <= v7;
      if (v3 >= v7) {
        v3 = v7;
      }
      if (!v8) {
        v4 = i + 100;
      }
    }
    if (*v2 != 0) {
      v9 = *(unsigned __int16*)(*v2 + 16LL);
      v10 = v3 <= v9;
      if (v3 >= v9) {
        v3 = *(unsigned __int16*)(*v2 + 16LL);
      }
      if (!v10) {
        v4 = i + 101;
      }
    }
    v11 = v2[1];
    if (v11 != 0) {
      v12 = *(unsigned __int16*)(v11 + 16);
      v13 = v3 <= v12;
      if (v3 >= v12) {
        v3 = v12;
      }
      if (!v13) {
        v4 = i + 102;
      }
    }
    v14 = v2[2];
    if (v14 != 0) {
      v15 = *(unsigned __int16*)(v14 + 16);
      v16 = v3 <= v15;
      if (v3 >= v15) {
        v3 = v15;
      }
      if (!v16) {
        v4 = i + 103;
      }
    }
    v17 = v2[3];
    if (v17 != 0) {
      v18 = *(unsigned __int16*)(v17 + 16);
      v19 = v3 <= v18;
      if (v3 >= v18) {
        v3 = v18;
      }
      if (!v19) {
        v4 = i + 104;
      }
    }
    v2 += 5;
  }
  if ((v4 & 0x80000000) == 0) {
    v20 = *(_QWORD*)(v1 + 8LL * v4);
    if (v20 != 0) {
      v21 = game_map_history_g_record_region_ptr[0];
      v22 = game_map_history_g_record_allocators_ptr[0];
      while (1) {
        v23 = v20;
        v24 = *(void (***)(unsigned __int64))v20;
        v20 = *(_QWORD*)(v20 + 8);
        (*v24)(v23);
        if ((_UNKNOWN*)v23 <
            *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21)) {
          break;
        }
        v25 = v22[1];
        if (v25 != 0) {
          goto LABEL_38;
        }
      LABEL_32:
        if (v20 == 0) {
          goto LABEL_39;
        }
      }
      if (v23 < *v21) {
        goto LABEL_32;
      }
      v25 = *v22;
      if (*v22 == 0) {
        goto LABEL_32;
      }
    LABEL_38:
      nn_mem_StandardAllocator_Free_alt1(v25, v23);
      goto LABEL_32;
    }
  LABEL_39:
    *(_QWORD*)(v1 + 8LL * v4) = 0;
  }
}

void Impl_Destructor_12268e0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  void (**v8)(unsigned __int64);
  __int64 v9;
  __int64 (*v10)();
  __int64 v11;
  int* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  void (**v23)(unsigned __int64);
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  _BYTE* v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    __int64 v43[4];
    __int64* v44;
  } v43_;

  v1 = a1 + 3;
  v3 = 0;
  v4 = game_map_history_g_record_region_ptr[0];
  v5 = game_map_history_g_record_allocators_ptr[0];
  do {
    v6 = v1[v3];
    if (v6 != 0) {
      while (1) {
        v7 = v6;
        v8 = *(void (***)(unsigned __int64))v6;
        v6 = *(_QWORD*)(v6 + 8);
        (*v8)(v7);
        if ((_UNKNOWN*)v7 <
            *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4)) {
          break;
        }
        v9 = v5[1];
        if (v9 != 0) {
          goto LABEL_11;
        }
      LABEL_5:
        if (v6 == 0) {
          goto LABEL_2;
        }
      }
      if (v7 < *v4) {
        goto LABEL_5;
      }
      v9 = *v5;
      if (*v5 == 0) {
        goto LABEL_5;
      }
    LABEL_11:
      nn_mem_StandardAllocator_Free_alt1(v9, v7);
      goto LABEL_5;
    }
  LABEL_2:
    v1[v3++] = 0;
  } while (v3 != 100);
  v10 = GameData_21309a8;
  v43_.v44 = v43_.v43;
  v43_.v43[0] = (__int64)GameData_201a968;
  v43_.v43[1] = (__int64)GameData_21309a8;
  GameRoutine_122f660_alt1(v43_.v43);
  if (v43_.v44 == v43_.v43) {
    v11 = 32;
    goto LABEL_16;
  }
  if (v43_.v44 != nullptr) {
    v11 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v43_.v44 + v11))((__int64)v43_.v44);
  }
  v12 = game_map_history_g_record_alloc_retries_ptr[0];
  v13 = (_QWORD*)GameData_2240178;
  *game_map_history_g_record_alloc_retries_ptr[0] = 10;
  v14 = fw_memory_g_heap_manager_ptr;
  if (v13 != nullptr) {
    Impl_Destructor_1243e00_alt1(v13);
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v15, (__int64)v13);
  }
  GameData_2240178 = 0;
  v16 = game_map_UnitFlags_instance_;
  if (game_map_UnitFlags_instance_ != 0) {
    v17 = *(_QWORD*)v14;
    game_map_UnitFlags_instance_ = 0;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v17 + v18, v16);
  }
  game_map_UnitFlags_instance_ = 0;
  GameHr_1285640();
  v19 = GameData_22408e8;
  if (GameData_22408e8 == 0) {
    goto LABEL_40;
  }
  v20 = v14;
  v21 = *(_QWORD*)(GameData_22408e8 + 8);
  if (v21 == 0) {
  LABEL_36:
    GameData_22408e8 = 0;
    goto LABEL_37;
  }
  do {
    v22 = v21;
    v23 = *(void (***)(unsigned __int64))v21;
    v21 = *(_QWORD*)(v21 + 8);
    (*v23)(v22);
    if ((_UNKNOWN*)v22 >=
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4)) {
      v24 = v5[1];
      if (v24 == 0) {
        continue;
      }
    LABEL_34:
      nn_mem_StandardAllocator_Free_alt1(v24, v22);
      continue;
    }
    if (v22 >= *v4) {
      v24 = *v5;
      if (*v5 != 0) {
        goto LABEL_34;
      }
    }
  } while (v21 != 0);
  if (GameData_22408e8 == v19) {
    goto LABEL_36;
  }
LABEL_37:
  v14 = v20;
  v25 = 128;
  if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
    v25 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v20 + v25, v19);
LABEL_40:
  GameData_22408e8 = 0;
  v43_.v43[0] = (__int64)GameData_201a968;
  v43_.v43[1] = (__int64)v10;
  v43_.v44 = v43_.v43;
  GameRoutine_122f660_alt1(v43_.v43);
  if (v43_.v44 == v43_.v43) {
    v26 = 32;
  LABEL_44:
    (*(void (**)(__int64))(*v43_.v44 + v26))((__int64)v43_.v44);
  }
  else if (v43_.v44 != nullptr) {
    v26 = 40;
    goto LABEL_44;
  }
  *v12 = 10;
  v27 = GameData_21309d0[0];
  if (*GameData_21309d0[0] != 0) {
    v28 = (_BYTE*)*v5;
    if (*v5 != 0) {
      if (*v28 == 1) {
        nn_mem_StandardAllocator_Finalize_alt1(*v5);
      }
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v29, (__int64)v28);
    }
    v30 = *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
    *v5 = 0;
    *v4 = 0;
    if (v30 != nullptr) {
      if (*v30 == 1) {
        nn_mem_StandardAllocator_Finalize_alt1((__int64)v30);
      }
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v31, (__int64)v30);
    }
    v32 = *v27;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = nullptr;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = nullptr;
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v33, v32);
    }
    *v27 = 0;
  }
  v34 = game_script_map_obj_g_object_records;
  if (game_script_map_obj_g_object_records != 0) {
    Impl_Destructor_12a72c0_alt1((_QWORD*)game_script_map_obj_g_object_records);
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v35, v34);
  }
  game_script_map_obj_g_object_records = 0;
  v36 = GameData_2130ad8[0];
  if (*GameData_2130ad8[0] != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_2130ad8[0] + 8LL))(
        *GameData_2130ad8[0]);
  }
  *v36 = 0;
  GameRoutine_65d6c0_alt1(a1 + 118);
  v37 = a1[105];
  if (v37 != 0) {
    v38 = (_QWORD*)a1[106];
    if ((_QWORD*)v37 == v38) {
      goto LABEL_76;
    }
    do {
      v40 = *--v38;
      v39 = v40;
      *v38 = 0;
      if (v40 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v39 + 8LL))(v39);
      }
    } while (v38 != (_QWORD*)v37);
    v41 = a1[105];
    a1[106] = v37;
    v37 = v41;
    if (v41 != 0) {
    LABEL_76:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v42, v37);
    }
  }
  *a1 = GameData_201a6f8;
  if ((_QWORD*)GameData_22400f8 == a1) {
    GameData_22400f8 = 0;
  }
}

__int64 Impl_1229960(__int64 a1)
{
  __int64 v1;
  unsigned int i;
  unsigned int v4;
  __int64 v5;
  int*** v6;
  __int64 v7;
  int** v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int** v13;
  int** v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int j;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  char v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  char v68;
  __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  bool v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 (**v83)(__int64, _QWORD*);
  __int64 v84;
  char* v85;
  __int64 v86;
  __int64 v87;
  char v88;
  __int64 v89;
  char v90;
  __int64 v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  char v96;
  __int64 v97;
  char v98;
  __int64 v99;
  char v100;
  __int64 v101;
  char v102;
  __int64 v103;
  __int64 v104;
  int v105;
  __int64 (**v106)(__int64, _QWORD*);
  char v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  __int64 (**v112)(__int64, _QWORD*);
  char v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 (***v120)();
  __int64 v121;
  __int64 v122;
  int v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned int v137;
  __int64 v138;
  __int16 v139;
  __int64 v140;
  __int64 v141;
  __int16 v142;
  __int64 v143;
  char v144;
  __int64 v145;
  int v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  int v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 (***v159)();
  char v160;
  __int64 v161;
  char v162;
  __int64 v163;
  unsigned __int8* v164;
  unsigned __int64 v165;
  bool v166;
  unsigned __int64 v167;
  unsigned __int8* v168;
  __int64 v169;
  char v170;
  __int64 v171;
  char v172;
  __int64 v173;
  __int64 v175;
  __int64 v176;
  _QWORD v177[3];
  _QWORD v178[3];

  v1 = a1 + 944;
  *(_DWORD*)(a1 + 964) = 0;
  LODWORD(v178[0]) = 0;
  Stream_Destructor(a1 + 944, v178);
  for (i = 0; i != 12; ++i) {
    v4 = (unsigned __int8)i;
    v5 = *(int*)(a1 + 964);
    if (i >= 0xC) {
      v4 = 1;
    }
    v6 = (int***)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 24LL * v4 +
                  3932168);
    v8 = *v6;
    v7 = *(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 24LL * v4 +
                    3932176);
    *(_DWORD*)(a1 + 964) = v5 + 1;
    v9 = v7 - (_QWORD)v8;
    *(_BYTE*)(*(_QWORD*)(a1 + 952) + v5) = v9 >> 3;
    v10 = *(int*)(a1 + 964);
    *(_DWORD*)(a1 + 964) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 952) + v10) = v9 >> 11;
    v11 = *(int*)(a1 + 964);
    *(_DWORD*)(a1 + 964) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 952) + v11) = v9 >> 19;
    v12 = *(int*)(a1 + 964);
    *(_DWORD*)(a1 + 964) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 952) + v12) = v9 >> 27;
    v13 = *v6;
    v14 = v6[1];
    while (v13 != v14) {
      v16 = *(int*)(a1 + 964);
      v17 = *v13;
      v18 = **v13;
      *(_DWORD*)(a1 + 964) = v16 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v16) = v18;
      v19 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v19 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v19) = BYTE1(v18);
      v20 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v20 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v20) = BYTE2(v18);
      v21 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v21 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v21) = HIBYTE(v18);
      v22 = *(int*)(a1 + 964);
      v23 = v17[1];
      *(_DWORD*)(a1 + 964) = v22 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v22) = v23;
      v24 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v24 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v24) = BYTE1(v23);
      v25 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v25 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v25) = BYTE2(v23);
      v26 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v26 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v26) = HIBYTE(v23);
      v27 = v17[8];
      if (v27 >= 0x10) {
        v28 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v28 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v28) = -1;
        v29 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v29 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v29) = v27;
        v30 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v30 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v30) = BYTE1(v27);
        LODWORD(v29) = HIWORD(v27);
        v27 >>= 24;
        v31 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v31 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v31) = v29;
      }
      v15 = *(int*)(a1 + 964);
      ++v13;
      *(_DWORD*)(a1 + 964) = v15 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v15) = v27;
    }
  }
  GameRoutine_123ff80(v1);
  v32 = *(int*)(a1 + 964);
  v33 = *GameData_212ce90[0];
  v34 = *(_WORD*)(*GameData_212ce90[0] + 26);
  *(_DWORD*)(a1 + 964) = v32 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v32) = v34;
  v35 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v35 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v35) = HIBYTE(v34);
  v36 = *(int*)(a1 + 964);
  LOBYTE(v34) = *(_BYTE*)(v33 + 24);
  *(_DWORD*)(a1 + 964) = v36 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v36) = v34;
  v37 = *(_DWORD*)(v33 + 20) & 0x181E;
  v38 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v38 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v38) = v37;
  v39 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v39 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v39) = BYTE1(v37);
  v40 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v40 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v40) = 0;
  v41 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v41 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v41) = 0;
  v42 = *(int*)(a1 + 964);
  LOBYTE(v41) = *(_BYTE*)(v33 + 38);
  *(_DWORD*)(a1 + 964) = v42 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v42) = v41;
  v43 = *(int*)(a1 + 964);
  LOBYTE(v41) = *(_BYTE*)(v33 + 39);
  *(_DWORD*)(a1 + 964) = v43 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v43) = v41;
  GameRoutine_762b00(v33 + 40, v1);
  GameRoutine_762b00(v33 + 168, v1);
  game_map_BonusExpList_Serialize(v33 + 296, v1);
  v44 = *(int*)(a1 + 964);
  v45 = *(_BYTE*)(v33 + 28);
  *(_DWORD*)(a1 + 964) = v44 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v44) = v45;
  v46 = *(int*)(a1 + 964);
  v47 = *(_DWORD*)(v33 + 320);
  *(_DWORD*)(a1 + 964) = v46 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v46) = v47;
  v48 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v48 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v48) = BYTE1(v47);
  v49 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v49 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v49) = BYTE2(v47);
  v50 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v50 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v50) = HIBYTE(v47);
  LODWORD(v178[0]) = 511;
  v51 = game_UnitPool_GetFirst(v178);
  if (v51 != 0) {
    v52 = *(_QWORD*)(v51 + 432);
    if (v52 != 0) {
      goto LABEL_12;
    }
    v59 = *(_QWORD*)(v51 + 440);
    if (v59 != 0) {
      v60 = *(unsigned __int8*)(v59 + 16);
      if (v60 <= 8) {
        v175 = 24LL * (unsigned int)v60 + 556024;
        while (1) {
          if (v60 <= 7) {
            v52 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v175);
            if (v52 != 0) {
              break;
            }
          }
          ++v60;
          v175 += 24;
          if (v60 == 9) {
            goto LABEL_26;
          }
        }
      LABEL_12:
        for (j = 1;; ++j) {
          v54 = *(_QWORD*)(v52 + 432);
          if (v54 == 0) {
            v55 = *(_QWORD*)(v52 + 440);
            if (v55 == 0 || (v56 = *(unsigned __int8*)(v55 + 16)) > 8) {
            LABEL_22:
              v58 = j + 1;
              goto LABEL_27;
            }
            v57 = 24LL * (unsigned int)v56 + 556024;
            while (1) {
              if (v56 <= 7) {
                v54 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v57);
                if (v54 != 0) {
                  break;
                }
              }
              ++v56;
              v57 += 24;
              if (v56 == 9) {
                goto LABEL_22;
              }
            }
          }
          v52 = v54;
        }
      }
    }
  LABEL_26:
    v58 = 1;
  }
  else {
    v58 = 0;
  }
LABEL_27:
  v61 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v61 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v61) = v58;
  LODWORD(v178[0]) = 511;
  v62 = game_UnitPool_GetFirst(v178);
  if (v62 != 0) {
    v63 = *(_QWORD*)(v62 + 432);
    v64 = v62;
    if (v63 == 0) {
      v63 = *(_QWORD*)(v62 + 440);
      if (v63 != 0) {
        v65 = *(unsigned __int8*)(v63 + 16);
        if (v65 < 9) {
          v176 = 24LL * *(unsigned __int8*)(v63 + 16) + 556024;
          while (1) {
            if (v65 <= 7) {
              v63 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v176);
              if (v63 != 0) {
                break;
              }
            }
            ++v65;
            v176 += 24;
            if (v65 == 9) {
              goto LABEL_31;
            }
          }
        }
        else {
        LABEL_31:
          v63 = 0;
        }
      }
    }
    while (1) {
    LABEL_34:
      v66 = v63;
      v67 = *(_QWORD*)(v64 + 440);
      if (v67 != 0) {
        v68 = *(_BYTE*)(v67 + 16);
      }
      else {
        v68 = 9;
      }
      v69 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v69 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v69) = v68;
      v70 = *(int*)(a1 + 964);
      v71 = *(_BYTE*)(v64 + 2088);
      *(_DWORD*)(a1 + 964) = v70 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v70) = v71;
      v72 = *(_QWORD*)(v64 + 424);
      if (v72 != 0) {
        LOBYTE(v72) = *(_BYTE*)(v72 + 2088);
      }
      v73 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v73 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v73) = v72;
      LODWORD(v178[0]) = 0;
      (**(void (***)(__int64, _QWORD*))(a1 + 944))(v1, v178);
      v74 = *(_QWORD*)(v64 + 440);
      v75 = v74 != 0 && *(unsigned __int8*)(v74 + 16) < 4u;
      v76 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v76 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v76) = 36;
      v77 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v77 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v77) = v75;
      GameRoutine_6e0f00(v64, v1);
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 944) + 8LL))(v1, 0);
      if (v66 == 0) {
        break;
      }
      v63 = *(_QWORD*)(v66 + 432);
      v64 = v66;
      if (v63 == 0) {
        v78 = *(_QWORD*)(v66 + 440);
        v64 = v66;
        if (v78 != 0) {
          v79 = *(unsigned __int8*)(v78 + 16);
          v63 = 0;
          v64 = v66;
          if (v79 <= 8) {
            v80 = 24LL * (unsigned int)v79 + 556024;
            while (1) {
              if (v79 <= 7) {
                v63 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v80);
                if (v63 != 0) {
                  break;
                }
              }
              ++v79;
              v80 += 24;
              if (v79 == 9) {
                v63 = 0;
                v64 = v66;
                goto LABEL_34;
              }
            }
            v64 = v66;
          }
        }
      }
    }
  }
  v81 = game_map_UnitFlags_instance_;
  if (game_map_UnitFlags_instance_ != 0) {
    v82 = game_HashString32("MapHistoryUnitMgr");
    v83 = *(__int64 (***)(__int64, _QWORD*))v1;
    LODWORD(v178[0]) = v82;
    if (((*v83)(v1, v178) & 1) != 0) {
      v84 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v84 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v84) = 0;
      v85 = (char*)(v81 + 15);
      v86 = 256;
      do {
        v87 = *(int*)(a1 + 964);
        v88 = *(v85 - 7);
        v86 -= 8;
        *(_DWORD*)(a1 + 964) = v87 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v87) = v88;
        v89 = *(int*)(a1 + 964);
        v90 = *(v85 - 6);
        *(_DWORD*)(a1 + 964) = v89 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v89) = v90;
        v91 = *(int*)(a1 + 964);
        v92 = *(v85 - 5);
        *(_DWORD*)(a1 + 964) = v91 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v91) = v92;
        v93 = *(int*)(a1 + 964);
        v94 = *(v85 - 4);
        *(_DWORD*)(a1 + 964) = v93 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v93) = v94;
        v95 = *(int*)(a1 + 964);
        v96 = *(v85 - 3);
        *(_DWORD*)(a1 + 964) = v95 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v95) = v96;
        v97 = *(int*)(a1 + 964);
        v98 = *(v85 - 2);
        *(_DWORD*)(a1 + 964) = v97 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v97) = v98;
        v99 = *(int*)(a1 + 964);
        v100 = *(v85 - 1);
        *(_DWORD*)(a1 + 964) = v99 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v99) = v100;
        v101 = *(int*)(a1 + 964);
        v102 = *v85;
        v85 += 8;
        *(_DWORD*)(a1 + 964) = v101 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v101) = v102;
      } while (v86 != 0);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 8LL))(v1, 0);
  }
  if (GameData_21ca300 != 0) {
    v103 = GameData_21ca300 + 8;
    v104 = (**(__int64 (***)(__int64))(GameData_21ca300 + 8))(GameData_21ca300 +
                                                              8);
    v105 = game_HashString32(v104);
    v106 = *(__int64 (***)(__int64, _QWORD*))v1;
    LODWORD(v178[0]) = v105;
    if (((*v106)(v1, v178) & 1) != 0) {
      v107 = (*(__int64 (**)(__int64))(*(_QWORD*)v103 + 8LL))(v103);
      v108 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v108 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v108) = v107;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v103 + 16LL))(v103, v1);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 8LL))(v1, 0);
  }
  if (GameData_21cd158 != 0) {
    v109 = GameData_21cd158 + 8;
    v110 = (**(__int64 (***)(__int64))(GameData_21cd158 + 8))(GameData_21cd158 +
                                                              8);
    v111 = game_HashString32(v110);
    v112 = *(__int64 (***)(__int64, _QWORD*))v1;
    LODWORD(v178[0]) = v111;
    if (((*v112)(v1, v178) & 1) != 0) {
      v113 = (*(__int64 (**)(__int64))(*(_QWORD*)v109 + 8LL))(v109);
      v114 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v114 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v114) = v113;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v109 + 16LL))(v109, v1);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v1 + 8LL))(v1, 0);
  }
  game_RandomSeed_Serialize(game_map_MapRandom_instance__ptr[0] + 2, v1);
  v115 = GameData_22407a8;
  if (GameData_22407a8 != 0) {
    v115 = -1431655765 * ((*(_QWORD*)(GameData_22407a8 + 16) -
                           *(_QWORD*)(GameData_22407a8 + 8)) >>
                          3);
  }
  v116 = *(int*)(a1 + 964);
  v117 = game_GameModeData_instance_;
  *(_DWORD*)(a1 + 964) = v116 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v116) = v115;
  v118 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v118 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v118) = BYTE1(v115);
  if (v115 >= 1) {
    v119 = 0;
    v120 = GameData_212dae8;
    v121 = 24LL * (unsigned int)v115;
    do {
      if (GameData_22407a8 == 0) {
        goto LABEL_79;
      }
      v131 = (__int64*)(*(_QWORD*)(GameData_22407a8 + 8) + v119);
      v133 = *v131;
      v132 = v131[1];
      v178[0] = 0;
      v178[1] = v133;
      if (v133 != 0) {
        v133 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v133 + 24) + 1784LL) + 272LL);
      }
      v178[2] = v133;
      v177[0] = 0;
      v177[1] = v132;
      if (v132 != 0) {
        v134 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v132 + 24) + 1784LL) + 272LL);
        v135 = (__int64)v120;
        v177[2] = v134;
        if (v133 != 0 && v134 != 0) {
          v136 = *(_QWORD*)(v117 + 128);
          v137 = GameReliance_8e17a0(v136, v178, v177);
          if ((v137 & 0x80000000) == 0) {
            v135 = *(_QWORD*)(v136 + 8) + 56LL * v137;
            if (*(_BYTE*)(v135 + 10) != 0) {
              goto LABEL_83;
            }
            goto LABEL_68;
          }
        LABEL_79:
          v135 = (__int64)v120;
          if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v120 + 2) != 0) {
            goto LABEL_83;
          }
          goto LABEL_68;
        }
      }
      else {
        v135 = (__int64)v120;
      }
      if (*((_BYTE*)((_UNKNOWN**)0x8LL) + v135 + 2) != 0) {
      LABEL_83:
        v138 = *(int*)(a1 + 964);
        v139 = *(_WORD*)(v135 + 12);
        *(_DWORD*)(a1 + 964) = v138 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v138) = v139;
        v140 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v140 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v140) = HIBYTE(v139);
        v141 = *(int*)(a1 + 964);
        v142 = *(_WORD*)(v135 + 14);
        *(_DWORD*)(a1 + 964) = v141 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v141) = v142;
        v143 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v143 + 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 952) + v143) = HIBYTE(v142);
        v123 = *(_DWORD*)(v135 + 16);
        goto LABEL_69;
      }
    LABEL_68:
      v122 = *(int*)(a1 + 964);
      v123 = 0;
      *(_DWORD*)(a1 + 964) = v122 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v122) = 0;
      v124 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v124 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v124) = 0;
      v125 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v125 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v125) = 0;
      v126 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v126 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v126) = 0;
    LABEL_69:
      v127 = *(int*)(a1 + 964);
      v119 += 24;
      *(_DWORD*)(a1 + 964) = v127 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v127) = v123;
      v128 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v128 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v128) = BYTE1(v123);
      v129 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v129 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v129) = BYTE2(v123);
      v130 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v130 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v130) = HIBYTE(v123);
    } while (v121 != v119);
  }
  v144 = (*(__int64 (**)(__int64))(*(_QWORD*)game_map_history_g_transporter +
                                   32LL))(game_map_history_g_transporter);
  v145 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v145 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v145) = v144;
  (*(void (**)(__int64, __int64))(*(_QWORD*)game_map_history_g_transporter +
                                  56LL))(game_map_history_g_transporter, v1);
  v146 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v146 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  v147 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v147 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v147) = v146;
  v148 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v148 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v148) = BYTE1(v146);
  v149 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v149 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v149) = BYTE2(v146);
  v150 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v150 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v150) = HIBYTE(v146);
  v151 = *(int*)(a1 + 964);
  v152 = *(_DWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 160) + 104LL);
  *(_DWORD*)(a1 + 964) = v151 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v151) = v152;
  v153 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v153 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v153) = BYTE1(v152);
  LODWORD(v154) = game_script_map_obj_g_object_records;
  if (game_script_map_obj_g_object_records != 0) {
    v154 = (*(_QWORD*)(game_script_map_obj_g_object_records + 16) -
            *(_QWORD*)(game_script_map_obj_g_object_records + 8)) >>
           5;
  }
  v155 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v155 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v155) = v154;
  v156 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v156 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v156) = BYTE1(v154);
  if ((int)v154 >= 1) {
    v157 = 32LL * (unsigned int)v154;
    v158 = 0;
    do {
      if (game_script_map_obj_g_object_records != 0) {
        v164 =
            (unsigned __int8*)(*(_QWORD*)(game_script_map_obj_g_object_records +
                                          8) +
                               v158);
        v165 = *v164;
        v166 = (v165 & 1) == 0;
        if ((v165 & 1) != 0) {
          v167 = *((_QWORD*)v164 + 1);
        }
        else {
          v167 = v165 >> 1;
        }
        if (v167 != 0) {
          if (v166) {
            v168 = v164 + 1;
          }
          else {
            v168 = *((unsigned __int8**)v164 + 2);
          }
          v169 = game_map_812b00(v168);
        }
        else {
          v169 = game_map_8129a0((unsigned int)(char)v164[24],
                                 (unsigned int)(char)v164[25]);
        }
        v159 = (__int64 (***)())v169;
      }
      else {
        v159 = game_map_anonymous_NullObject_vtable_ptr;
      }
      v160 = ((__int64 (*)(__int64 (***)()))(*v159)[8])(v159);
      v161 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v161 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v161) = v160 & 1;
      v162 = ((__int64 (*)(__int64 (***)()))(*v159)[9])(v159);
      v163 = *(int*)(a1 + 964);
      v158 += 32;
      *(_DWORD*)(a1 + 964) = v163 + 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 952) + v163) = v162;
    } while (v157 != v158);
  }
  GameRoutine_9609c0(v1);
  if (game_sound_g_game_sound != 0) {
    GameManager_a34c30(game_sound_g_game_sound, v1);
  }
  ProcMapSeq_1225b60(*GameData_2130668[0], v1);
  GameRoutine_1272ce0(*GameData_2130670[0], v1);
  v170 = (*(__int64 (**)(__int64))(*(_QWORD*)game_map_history_g_ride_pool +
                                   32LL))(game_map_history_g_ride_pool);
  v171 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v171 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v171) = v170;
  (*(void (**)(__int64, __int64))(*(_QWORD*)game_map_history_g_ride_pool +
                                  56LL))(game_map_history_g_ride_pool, v1);
  v172 = (*(__int64 (**)(__int64))(*(_QWORD*)game_map_history_g_legion_pool +
                                   32LL))(game_map_history_g_legion_pool);
  v173 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v173 + 1;
  *(_BYTE*)(*(_QWORD*)(a1 + 952) + v173) = v172;
  (*(void (**)(__int64, __int64))(*(_QWORD*)game_map_history_g_legion_pool +
                                  56LL))(game_map_history_g_legion_pool, v1);
  return Stream_DeletingDestructor(v1, 0);
}

__int64 game_map_history_Impl_UpdateMap(char a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _BOOL8 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64* v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* j;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (***v29)();
  char v30;
  unsigned __int8* v31;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  unsigned __int8* v35;
  __int64 v36;
  __int64 v38;
  _QWORD v40[4];
  _QWORD* v41;
  unsigned __int8 v42[4];

  LODWORD(v40[0]) = 511;
  v1 = game_UnitPool_GetFirst(v40);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 432);
    v3 = v1;
    if (v2 == 0) {
      v4 = *(_QWORD*)(v1 + 440);
      if (v4 != 0 && (v5 = *(unsigned __int8*)(v4 + 16)) <= 8) {
        v38 = 24LL * (unsigned int)v5 + 556024;
        while (1) {
          if (v5 <= 7) {
            v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v38);
            if (v2 != 0) {
              break;
            }
          }
          ++v5;
          v38 += 24;
          if (v5 == 9) {
            goto LABEL_5;
          }
        }
      }
      else {
      LABEL_5:
        v2 = 0;
      }
    }
    v6 = game_map_UnitFlags_instance_;
    v7 = game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_8:
      v8 = v2;
      if (v6 == 0 ||
          (*(_BYTE*)(v6 + *(unsigned __int8*)(v3 + 2088) + 8) & 1) == 0) {
        v9 = game_GameModeData_instance_;
        v42[0] = 9;
        if (game_GameModeData_instance_ != 0) {
          v9 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        v10 = *(unsigned __int16*)(v3 + 494);
        v11 = true;
        if (*(_QWORD*)(v3 + 392) != v9 && (*(_BYTE*)(v3 + 418) & 8) == 0) {
          LODWORD(v40[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v7) & 0xFFF;
          if ((game_HasSkill(v3 + 1744, v40) & 1) != 0 && v42[0] != 9) {
            v11 = false;
          }
        }
        GameRoutine_6c47b0(v3, v42, v11, 1);
        v6 = game_map_UnitFlags_instance_;
        if (v42[0] <= 8u && v10 != *(unsigned __int16*)(v3 + 494)) {
          *(_WORD*)(v3 + 494) = v10;
        }
      }
      if (v8 == 0) {
        break;
      }
      v2 = *(_QWORD*)(v8 + 432);
      v3 = v8;
      if (v2 == 0) {
        v12 = *(_QWORD*)(v8 + 440);
        v3 = v8;
        if (v12 != 0) {
          v13 = *(unsigned __int8*)(v12 + 16);
          v2 = 0;
          v3 = v8;
          if (v13 <= 8) {
            v14 = 24LL * (unsigned int)v13 + 556024;
            while (1) {
              if (v13 <= 7) {
                v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v14);
                if (v2 != 0) {
                  break;
                }
              }
              ++v13;
              v14 += 24;
              if (v13 == 9) {
                v2 = 0;
                v3 = v8;
                goto LABEL_8;
              }
            }
            v3 = v8;
          }
        }
      }
    }
  }
  v15 = *(_QWORD**)(GameData_21ca310 + 56);
  v16 = v15[69500];
  if (v16 != 0) {
    do {
      game_Unit_Unknown6c4610(v16);
      UnitActor_8194d0(v16);
      *(_WORD*)(v16 + 20) |= 0x10Fu;
      v16 = *(_QWORD*)(v16 + 432);
    } while (v16 != 0);
    v15 = *(_QWORD**)(GameData_21ca310 + 56);
  }
  v17 = v15[69503];
  if (v17 != 0) {
    do {
      game_Unit_Unknown6c4610(v17);
      UnitActor_8194d0(v17);
      *(_WORD*)(v17 + 20) |= 0x10Fu;
      v17 = *(_QWORD*)(v17 + 432);
    } while (v17 != 0);
    v15 = *(_QWORD**)(GameData_21ca310 + 56);
  }
  v18 = v15[69506];
  if (v18 != 0) {
    do {
      game_Unit_Unknown6c4610(v18);
      UnitActor_8194d0(v18);
      *(_WORD*)(v18 + 20) |= 0x10Fu;
      v18 = *(_QWORD*)(v18 + 432);
    } while (v18 != 0);
    v15 = *(_QWORD**)(GameData_21ca310 + 56);
  }
  for (i = v15[69509]; i != 0; i = *(_QWORD*)(i + 432)) {
    game_Unit_Unknown6c4610(i);
    UnitActor_8194d0(i);
    *(_WORD*)(i + 20) |= 0x10Fu;
  }
  v20 = GameData_212cfb8[0];
  Trick_7d5160(*(_QWORD*)(*GameData_212cfb8[0] + 16), 1);
  if ((a1 & 1) != 0) {
    v21 = *(_QWORD*)(*v20 + 16);
    v22 = *(_QWORD**)(v21 + 32);
    for (j = *(_QWORD**)(v21 + 40); v22 != j; ++v22) {
      v25 = *v22;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v22 + 464LL))(*v22) & 1) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25) & 1) == 0) {
        v40[0] = GameData_201a7d8;
        v41 = v40;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v25 + 744LL))(v25, v40);
        if (v41 == v40) {
          v24 = 32;
        }
        else {
          if (v41 == nullptr) {
            continue;
          }
          v24 = 40;
        }
        (*(void (**)(__int64))(*v41 + v24))((__int64)v41);
      }
    }
  }
  if (game_script_map_obj_g_object_records != 0) {
    v26 = *(_QWORD*)(game_script_map_obj_g_object_records + 16) -
          *(_QWORD*)(game_script_map_obj_g_object_records + 8);
    if ((int)(v26 >> 5) >= 1) {
      v27 = (v26 >> 5) & 0x7FFFFFFF;
      v28 = 0;
      do {
        if (game_script_map_obj_g_object_records != 0) {
          v31 =
              (unsigned __int8*)(*(_QWORD*)(game_script_map_obj_g_object_records +
                                            8) +
                                 v28);
          v32 = *v31;
          v33 = (v32 & 1) == 0;
          if ((v32 & 1) != 0) {
            v34 = *((_QWORD*)v31 + 1);
          }
          else {
            v34 = v32 >> 1;
          }
          if (v34 != 0) {
            if (v33) {
              v35 = v31 + 1;
            }
            else {
              v35 = *((unsigned __int8**)v31 + 2);
            }
            v36 = game_map_812b00(v35);
          }
          else {
            v36 = game_map_8129a0((unsigned int)(char)v31[24],
                                  (unsigned int)(char)v31[25]);
          }
          v29 = (__int64 (***)())v36;
        }
        else {
          v29 = game_map_anonymous_NullObject_vtable_ptr;
        }
        v30 = ((__int64 (*)(__int64 (***)()))(*v29)[8])(v29);
        ((void (*)(__int64 (***)()))(*v29)[26])(v29);
        ((void (*)(__int64 (***)(), _QWORD))(*v29)[21])(v29, v30 & 1);
        v28 += 32;
        --v27;
      } while (v27 != 0);
    }
  }
  return Image_72b080(*GameData_212ce98[0]);
}

__int64 game_map_history_Impl_UpdateMap_lambda0_Invoke(__int64 a1, int* a2,
                                                       int* a3)
{
  int v3;
  int v4;
  __int64 result;
  _DWORD* v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;

  v3 = *a2;
  v4 = *a3;
  result = *GameData_212ce80[0];
  v6 = (_DWORD*)(*GameData_212ce80[0] + 61440);
  if (*(int*)(*GameData_212ce80[0] + 61624) < 1) {
    return GameRoutine_7c41f0();
  }
  v7 = *(_DWORD*)(*GameData_212ce80[0] + 61472);
  v8 = *(_DWORD*)(*GameData_212ce80[0] + 61476);
  if (v3 < v7) {
    v7 = v3;
  }
  if (v4 < v8) {
    v8 = v4;
  }
  *(_DWORD*)(*GameData_212ce80[0] + 61472) = v7;
  v6[9] = v8;
  v9 = v6[10];
  v10 = v6[11];
  if (v9 <= v3) {
    v9 = v3;
  }
  if (v10 <= v4) {
    v10 = v4;
  }
  v6[10] = v9;
  v6[11] = v10;
  v11 = result + 4LL * ((v3 + 32 * v4) >> 5);
  *(_DWORD*)(v11 + 61488) |= 1 << v3;
  return result;
}

bool game_map_history_Impl_PreviewDeserializer_Run_lambda0_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  return *(_BYTE*)(a2 + 8) == 3;
}

bool game_map_history_Impl_PreviewDeserializer_Run_lambda1_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  return *(_BYTE*)(a2 + 8) != 3;
}

_QWORD* Impl_122ffe0(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;

  result = (_QWORD*)a1[4];
  if (result == a1) {
    v3 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v3))((__int64)result);
}

__int64 Impl_1230010()
{
  GameData_2240150 = (__int64)&game_map_history_g_record_alloc_failed;
  game_map_history_g_record_alloc_failed = (__int64)(GameData_21309b0 + 2);
  GameData_2240138 = (__int64)GameData_21309a8;
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
