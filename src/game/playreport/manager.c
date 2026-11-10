#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_prepo_PlayReport_Destroy_PlayReport(_QWORD);
extern __int64 (*GameData_2025948[])();
extern __int64 (*game_playreport_Manager_vtable[])();
extern __int64 GameData_2240f10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2240f20;
__int64 Manager_Destructor_130d940(_QWORD* a1);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_8c7640(_QWORD);
__int64 GameRoutine_8c9820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_9e60d0(_QWORD);
__int64 Manager_13114c0_alt1(_QWORD) __asm__("Manager_13114c0");
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 nn_oe_GetDesiredLanguage(void);
__int64 nn_prepo_Array_Add_1a0af20(_QWORD, _QWORD);
__int64 nn_prepo_Array_Clear(_QWORD);
__int64 nn_prepo_PlayReport_Add_1a0ade0(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_PlayReport_Add_1a0adf0(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_PlayReport_Add_1a0ae00(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_PlayReport_Add_1a0ae10(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_PlayReport_Add_1a0ae20(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_PlayReport_Clear(_QWORD, _QWORD);
__int64 nn_prepo_PlayReport_GetCount(_QWORD);
__int64 nn_prepo_PlayReport_Save(_QWORD, _QWORD);
__int64 nn_prepo_PlayReport_SetEventId(_QWORD, _QWORD);
__int64 nn_prepo_Struct_Add_1a0ae90(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_Struct_Add_1a0aea0(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_Struct_Clear(_QWORD);
extern __int64 game_GameGlobalData_unknown_;
extern __int64 game_GameModeData_instance_;
extern char GameData_21f3fe0;
extern char GameData_21f3fe4;
extern char* GameData_2025968[50];
extern char* GameData_2025990[45];
extern char* GameData_2025a38[24];
extern char* GameData_2025a80[15];
extern char* GameData_2025ae0[3];
extern int GameData_1bc4270[];
extern int GameData_1bc4288[];
extern int GameData_1bc4294[];
extern int GameData_21d87f8;
__int64 Manager_130e260(__int64 a1);
__int64 Manager_130f9a0(__int64 a1);
__int64 game_playreport_Manager_ReportUnitCommon_lambda0_Invoke(__int64 a1,
                                                                __int64* a2,
                                                                __int64* a3);
__int64 game_playreport_Manager_ReportReliance_lambda0_Invoke(__int64 result,
                                                              __int64 a2);
__int64 Manager_13114c0(__int64 result);
__int64 game_playreport_Manager_ReportBmap_lambda0_Invoke(__int64 result,
                                                          __int64* a2,
                                                          unsigned int* a3);

__int64 Manager_Destructor_130d940(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v1 = a1[35];
  a1[35] = 0;
  *a1 = game_playreport_Manager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = a1[30];
  a1[30] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
  }
  v7 = a1[25];
  a1[25] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }
  v9 = a1[20];
  a1[20] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
  }
  v11 = a1[12];
  a1[12] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
  }
  result = nn_prepo_PlayReport_Destroy_PlayReport(a1 + 4);
  *a1 = GameData_2025948;
  if ((_QWORD*)GameData_2240f10 == a1) {
    GameData_2240f10 = 0;
    GameData_2240f20 = 0;
  }
  return result;
}

__int64 Manager_130e260(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
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
  const char* v22;
  int v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  int v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  int v33;
  const char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  const char* v40;
  int v41;
  const char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  const char* v48;
  int v49;
  const char* v50;
  char v51;
  __int64 v52;
  __int64 v53;
  const char* v54;
  int v55;
  const char* v56;
  __int64 v57;
  __int64 v58;
  const char* v59;
  int v60;
  const char* v61;
  __int64 v62;
  __int64 v63;
  int v64;
  const char* v65;
  __int64 v66;
  __int64 v67;
  int v68;
  const char* v69;
  __int64 v70;
  __int64 v71;
  const char* v72;
  int v73;
  const char* v74;
  __int64 v75;
  __int64 v76;
  const char* v77;
  int v78;
  const char* v79;
  __int64 v80;
  __int64 v81;
  const char* v82;
  int v83;
  const char* v84;
  __int64 v85;
  __int64 v86;
  const char* v87;
  int v88;
  const char* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  const char* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  const char* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  const char* v107;
  __int64 v108;
  __int64 v109;
  const char* v110;
  const char* v111;
  __int64 v112;
  __int64 v113;
  const char* v114;
  const char* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int v121;
  const char* v122;
  __int64 v123;
  __int64 v124;
  int v125;
  const char* v126;
  __int64 v127;
  __int64 v128;
  const char* v129;
  int v130;
  const char* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  const char* v137;
  int v138;
  const char* v139;
  __int64 v140;
  __int64 v141;
  const char* v142;
  int v143;
  const char* v144;
  __int64 v145;
  __int64 v146;
  const char* v147;
  const char* v148;
  __int64 v149;
  __int64 v150;
  const char* v151;
  const char* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 result;
  __int64 v160;

  v2 = GameRoutine_8224a0(28);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) != 0) {
    v4 = *(int*)(v3 + 32);
  }
  else {
    v4 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "Brightness", v4);
  }
  v5 = GameRoutine_8224a0(29);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v5)) != 0) {
    v7 = *(int*)(v6 + 32);
  }
  else {
    v7 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "UIBrightness", v7);
  }
  v8 = GameRoutine_8224a0(33);
  if (game_GameModeData_instance_ != 0 &&
      (v9 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v8)) != 0) {
    v10 = *(int*)(v9 + 32);
  }
  else {
    v10 = 10;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "BGMVolume", v10);
  }
  v11 = GameRoutine_8224a0(34);
  if (game_GameModeData_instance_ != 0 &&
      (v12 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v11)) != 0) {
    v13 = *(int*)(v12 + 32);
  }
  else {
    v13 = 10;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "SEVolume", v13);
  }
  v14 = GameRoutine_8224a0(35);
  if (game_GameModeData_instance_ != 0 &&
      (v15 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v14)) != 0) {
    v16 = *(int*)(v15 + 32);
  }
  else {
    v16 = 10;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "SystemSEVolume", v16);
  }
  v17 = GameRoutine_8224a0(36);
  if (game_GameModeData_instance_ != 0 &&
      (v18 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v17)) != 0) {
    v19 = *(int*)(v18 + 32);
  }
  else {
    v19 = 10;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "VoiceVolume", v19);
  }
  v20 = GameRoutine_8224a0(19);
  if (game_GameModeData_instance_ != 0) {
    v21 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v20);
    v22 = "OFF";
    if (v21 != 0) {
      v23 = *(_DWORD*)(v21 + 32);
      v24 = "undefined";
      if (v23 == 1) {
        v24 = "ON";
      }
      if (v23 != 0) {
        v22 = v24;
      }
    }
  }
  else {
    v22 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "TalkAutoPlayMode", v22);
  }
  v25 = GameRoutine_8224a0(20);
  if (game_GameModeData_instance_ != 0) {
    v26 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v25);
    v27 = "OFF";
    if (v26 != 0) {
      v28 = *(_DWORD*)(v26 + 32);
      v29 = "undefined";
      if (v28 == 1) {
        v29 = "ON";
      }
      if (v28 != 0) {
        v27 = v29;
      }
    }
  }
  else {
    v27 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "MovieCaption", v27);
  }
  v30 = GameRoutine_8224a0(25);
  if (game_GameModeData_instance_ != 0) {
    v31 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v30);
    v32 = "OFF";
    if (v31 != 0) {
      v33 = *(_DWORD*)(v31 + 32);
      v34 = "undefined";
      if (v33 == 1) {
        v34 = "ON";
      }
      if (v33 != 0) {
        v32 = v34;
      }
    }
  }
  else {
    v32 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "SkipHold", v32);
  }
  v35 = GameRoutine_8224a0(37);
  if (game_GameModeData_instance_ != 0 &&
      (v36 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v35)) != 0) {
    v37 = *(int*)(v36 + 32);
  }
  else {
    v37 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "VibrationVolume", v37);
  }
  v38 = GameRoutine_8224a0(38);
  if (game_GameModeData_instance_ != 0) {
    v39 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v38);
    v40 = "AUTO";
    if (v39 != 0) {
      v41 = *(_DWORD*)(v39 + 32);
      v42 = "undefined";
      if (v41 == 1) {
        v42 = "MANUAL";
      }
      if (v41 != 0) {
        v40 = v42;
      }
    }
  }
  else {
    v40 = "AUTO";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "MouseMode", v40);
  }
  v43 = GameRoutine_8224a0(41);
  if (game_GameModeData_instance_ != 0 &&
      (v44 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v43)) != 0) {
    v45 = *(int*)(v44 + 32);
  }
  else {
    v45 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "MouseSenseMenu", v45);
  }
  v46 = GameRoutine_8224a0(32);
  if (game_GameModeData_instance_ != 0) {
    v47 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v46);
    v48 = "OFF";
    if (v47 != 0) {
      v49 = *(_DWORD*)(v47 + 32);
      v50 = "undefined";
      if (v49 == 1) {
        v50 = "ON";
      }
      if (v49 != 0) {
        v48 = v50;
      }
    }
  }
  else {
    v48 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "DisableTutorial", v48);
  }
  v51 = game_GameGlobalData_unknown_;
  if (game_GameGlobalData_unknown_ != 0) {
    v51 = *(_BYTE*)game_GameGlobalData_unknown_;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ade0(a1, "InsectPhobia", v51 & 1);
  }
  v52 = GameRoutine_8224a0(26);
  if (game_GameModeData_instance_ != 0) {
    v53 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v52);
    v54 = "NORMAL";
    if (v53 != 0) {
      v55 = *(_DWORD*)(v53 + 32);
      v56 = "undefined";
      if (v55 == 1) {
        v56 = "FAST";
      }
      if (v55 != 0) {
        v54 = v56;
      }
    }
  }
  else {
    v54 = "NORMAL";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "GameSpeed", v54);
  }
  v57 = GameRoutine_8224a0(27);
  if (game_GameModeData_instance_ != 0) {
    v58 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v57);
    v59 = "OFF";
    if (v58 != 0) {
      v60 = *(_DWORD*)(v58 + 32);
      v61 = "undefined";
      if (v60 == 1) {
        v61 = "ON";
      }
      if (v60 != 0) {
        v59 = v61;
      }
    }
  }
  else {
    v59 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "GmapTurnEndConfirm", v59);
  }
  v62 = GameRoutine_8224a0(0);
  if (game_GameModeData_instance_ != 0 &&
      (v63 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v62)) != 0) {
    v64 = *(_DWORD*)(v63 + 32);
    if ((unsigned __int8)v64 > 4u) {
      v65 = "undefined";
    }
    else {
      v65 = GameData_2025968[v64 & 7];
    }
  }
  else {
    v65 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "BattleAnime", v65);
  }
  v66 = GameRoutine_8224a0(1);
  if (game_GameModeData_instance_ != 0 &&
      (v67 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v66)) != 0) {
    v68 = *(_DWORD*)(v67 + 32);
    if ((unsigned __int8)v68 > 4u) {
      v69 = "undefined";
    }
    else {
      v69 = GameData_2025968[v68 & 7];
    }
  }
  else {
    v69 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "AssistAnime", v69);
  }
  v70 = GameRoutine_8224a0(2);
  if (game_GameModeData_instance_ != 0) {
    v71 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v70);
    v72 = "OFF";
    if (v71 != 0) {
      v73 = *(_DWORD*)(v71 + 32);
      v74 = "undefined";
      if (v73 == 1) {
        v74 = "ON";
      }
      if (v73 != 0) {
        v72 = v74;
      }
    }
  }
  else {
    v72 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "ChangeAnime", v72);
  }
  v75 = GameRoutine_8224a0(11);
  if (game_GameModeData_instance_ != 0) {
    v76 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v75);
    v77 = "SIMPLE";
    if (v76 != 0) {
      v78 = *(_DWORD*)(v76 + 32);
      v79 = "undefined";
      if (v78 == 1) {
        v79 = "DETAIL";
      }
      if (v78 != 0) {
        v77 = v79;
      }
    }
  }
  else {
    v77 = "SIMPLE";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "StatusWindowType", v77);
  }
  v80 = GameRoutine_8224a0(12);
  if (game_GameModeData_instance_ != 0) {
    v81 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v80);
    v82 = "OFF";
    if (v81 != 0) {
      v83 = *(_DWORD*)(v81 + 32);
      v84 = "undefined";
      if (v83 == 1) {
        v84 = "ON";
      }
      if (v83 != 0) {
        v82 = v84;
      }
    }
  }
  else {
    v82 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "HpGaugeType", v82);
  }
  v85 = GameRoutine_8224a0(15);
  if (game_GameModeData_instance_ != 0) {
    v86 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v85);
    v87 = "OFF";
    if (v86 != 0) {
      v88 = *(_DWORD*)(v86 + 32);
      v89 = "undefined";
      if (v88 == 1) {
        v89 = "ON";
      }
      if (v88 != 0) {
        v87 = v89;
      }
    }
  }
  else {
    v87 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "OnMapFace", v87);
  }
  v90 = GameRoutine_8224a0(16);
  if (game_GameModeData_instance_ != 0 &&
      (v91 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v90)) != 0) {
    v92 = *(int*)(v91 + 32);
  }
  else {
    v92 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "GridAlpha", v92);
  }
  v93 = GameRoutine_8224a0(17);
  if (game_GameModeData_instance_ != 0 &&
      (v94 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v93)) != 0) {
    v95 = *(int*)(v94 + 32);
  }
  else {
    v95 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "RangeAlpha", v95);
  }
  v96 = GameRoutine_8224a0(18);
  if (game_GameModeData_instance_ != 0 &&
      (v97 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v96)) != 0) {
    v98 = *(unsigned int*)(v97 + 32);
    if ((unsigned int)v98 > 5) {
      v99 = "undefined";
    }
    else {
      v99 = (char*)GameData_1bc4270 + GameData_1bc4270[v98];
    }
  }
  else {
    v99 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "SubInfoType", v99);
  }
  v100 = GameRoutine_8224a0(13);
  if (game_GameModeData_instance_ != 0 &&
      (v101 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v100)) != 0) {
    v102 = *(unsigned int*)(v101 + 32);
    if ((unsigned int)v102 > 2) {
      v103 = "undefined";
    }
    else {
      v103 = (char*)GameData_1bc4288 + GameData_1bc4288[v102];
    }
  }
  else {
    v103 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "MiniMapType", v103);
  }
  v104 = GameRoutine_8224a0(14);
  if (game_GameModeData_instance_ != 0 &&
      (v105 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v104)) != 0) {
    v106 = *(unsigned int*)(v105 + 32);
    if ((unsigned int)v106 > 2) {
      v107 = "undefined";
    }
    else {
      v107 = (char*)GameData_1bc4294 + GameData_1bc4294[v106];
    }
  }
  else {
    v107 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "MiniMapRotType", v107);
  }
  v108 = GameRoutine_8224a0(9);
  if (game_GameModeData_instance_ != 0) {
    v109 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v108);
    v110 = "DEFAULT";
    if (v109 != 0) {
      v111 = "undefined";
      if (*(_BYTE*)(v109 + 32) == 1) {
        v111 = "REVERSE";
      }
      if (*(_BYTE*)(v109 + 32) != 0) {
        v110 = v111;
      }
    }
  }
  else {
    v110 = "DEFAULT";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "BmapCameraReverseX", v110);
  }
  v112 = GameRoutine_8224a0(10);
  if (game_GameModeData_instance_ != 0) {
    v113 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v112);
    v114 = "DEFAULT";
    if (v113 != 0) {
      v115 = "undefined";
      if (*(_BYTE*)(v113 + 32) == 1) {
        v115 = "REVERSE";
      }
      if (*(_BYTE*)(v113 + 32) != 0) {
        v114 = v115;
      }
    }
  }
  else {
    v114 = "DEFAULT";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "BmapCameraReverseY", v114);
  }
  v116 = GameRoutine_8224a0(40);
  if (game_GameModeData_instance_ != 0 &&
      (v117 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v116)) != 0) {
    v118 = *(int*)(v117 + 32);
  }
  else {
    v118 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "MouseSenseMapCamera", v118);
  }
  v119 = GameRoutine_8224a0(21);
  if (game_GameModeData_instance_ != 0 &&
      (v120 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v119)) != 0 &&
      (unsigned int)(v121 = *(_DWORD*)(v120 + 32) - 1) <= 0x14) {
    v122 = GameData_2025990[v121];
  }
  else {
    v122 = "undefined";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "EncountBGM", v122);
  }
  v123 = GameRoutine_8224a0(22);
  if (game_GameModeData_instance_ != 0) {
    v124 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v123);
    if (v124 != 0 && (unsigned int)(v125 = *(_DWORD*)(v124 + 32) - 1) <= 8) {
      v126 = GameData_2025a38[v125];
    }
    else {
      v126 = "undefined";
    }
  }
  else {
    v126 = "undefined";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "CommandBattleBGM", v126);
  }
  v127 = GameRoutine_8224a0(24);
  if (game_GameModeData_instance_ != 0) {
    v128 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v127);
    v129 = "OFF";
    if (v128 != 0) {
      v130 = *(_DWORD*)(v128 + 32);
      v131 = "ON";
      if (v130 != 1) {
        v131 = "undefined";
      }
      if (v130 != 0) {
        v129 = v131;
      }
    }
  }
  else {
    v129 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "SkipAI", v129);
  }
  v132 = GameRoutine_8224a0(39);
  if (game_GameModeData_instance_ != 0 &&
      (v133 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v132)) != 0) {
    v134 = *(int*)(v133 + 32);
  }
  else {
    v134 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "MouseSenseMapCursor", v134);
  }
  v135 = GameRoutine_8224a0(30);
  if (game_GameModeData_instance_ != 0) {
    v136 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v135);
    v137 = "OFF";
    if (v136 != 0) {
      v138 = *(_DWORD*)(v136 + 32);
      v139 = "ON";
      if (v138 != 1) {
        v139 = "undefined";
      }
      if (v138 != 0) {
        v137 = v139;
      }
    }
  }
  else {
    v137 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "HubMiniMapType", v137);
  }
  v140 = GameRoutine_8224a0(31);
  if (game_GameModeData_instance_ != 0) {
    v141 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v140);
    v142 = "OFF";
    if (v141 != 0) {
      v143 = *(_DWORD*)(v141 + 32);
      v144 = "ON";
      if (v143 != 1) {
        v144 = "undefined";
      }
      if (v143 != 0) {
        v142 = v144;
      }
    }
  }
  else {
    v142 = "OFF";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "HubMiniMapRotType", v142);
  }
  v145 = GameRoutine_8224a0(7);
  if (game_GameModeData_instance_ != 0) {
    v146 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v145);
    v147 = "DEFAULT";
    if (v146 != 0) {
      v148 = "REVERSE";
      if (*(_BYTE*)(v146 + 32) != 1) {
        v148 = "undefined";
      }
      if (*(_BYTE*)(v146 + 32) != 0) {
        v147 = v148;
      }
    }
  }
  else {
    v147 = "DEFAULT";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "CameraReverseX", v147);
  }
  v149 = GameRoutine_8224a0(8);
  if (game_GameModeData_instance_ != 0) {
    v150 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v149);
    v151 = "DEFAULT";
    if (v150 != 0) {
      v152 = "REVERSE";
      if (*(_BYTE*)(v150 + 32) != 1) {
        v152 = "undefined";
      }
      if (*(_BYTE*)(v150 + 32) != 0) {
        v151 = v152;
      }
    }
  }
  else {
    v151 = "DEFAULT";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0adf0(a1, "CameraReverseY", v151);
  }
  v153 = GameRoutine_8224a0(4);
  if (game_GameModeData_instance_ != 0 &&
      (v154 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v153)) != 0) {
    v155 = *(int*)(v154 + 32);
  }
  else {
    v155 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "CameraRotateSpeedPad", v155);
  }
  v156 = GameRoutine_8224a0(5);
  if (game_GameModeData_instance_ != 0 &&
      (v157 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v156)) != 0) {
    v158 = *(int*)(v157 + 32);
  }
  else {
    v158 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "CameraRotateSpeedMouse", v158);
  }
  result = GameRoutine_8224a0(6);
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), result)) != 0) {
    v160 = *(int*)(result + 32);
  }
  else {
    v160 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    return nn_prepo_PlayReport_Add_1a0ae00(a1, "CameraAutoRotateSpeed", v160);
  }
  return result;
}

__int64 Manager_130f9a0(__int64 a1)
{
  __int64 result;
  int v3;
  const char* v4;
  const char* v5;
  const char* v6;
  const char* v7;
  __int64 v8;
  const char* v9;
  unsigned __int64 v10;
  const char* v11;
  __int64 v12;

  result = nn_oe_GetDesiredLanguage();
  v3 = *(unsigned __int8*)(a1 + 88);
  v12 = result;
  if (v3 == 1) {
    result = nn_prepo_PlayReport_Add_1a0adf0(a1, "Region", &v12);
  }
  v4 = "undefined";
  if ((unsigned __int8)GameData_21f3fe0 <= 0xBuLL) {
    v4 = GameData_2025a80[(unsigned __int8)GameData_21f3fe0];
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0adf0(a1, "Language", v4);
    if (*(_BYTE*)(a1 + 88) == 1) {
      v5 = "ENGLISH";
      if (GameData_21f3fe4 != 1) {
        v5 = "undefined";
      }
      if (GameData_21f3fe4 != 0) {
        v6 = v5;
      }
      else {
        v6 = "JAPANESE";
      }
      result = nn_prepo_PlayReport_Add_1a0adf0(a1, "Voice", v6);
    }
  }
  v7 = "CASUAL";
  v8 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v9 = "CLASSIC";
    if (*(_BYTE*)(game_GameModeData_instance_ + 12) != 1) {
      v9 = "undefined";
    }
    if (*(_BYTE*)(game_GameModeData_instance_ + 12) != 0) {
      v7 = v9;
    }
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0adf0(a1, "GameMode", v7);
    v8 = game_GameModeData_instance_;
  }
  if (v8 != 0) {
    v10 = *(unsigned __int8*)(v8 + 13);
    if (v10 > 2) {
      v11 = "undefined";
    }
    else {
      v11 = GameData_2025ae0[v10];
    }
  }
  else {
    v11 = "NORMAL";
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0adf0(a1, "Difficulty", v11);
    if (*(_BYTE*)(a1 + 88) == 1) {
      return nn_prepo_PlayReport_Add_1a0ae00(
          a1, "PlayTime",
          3600 * (unsigned __int16)GameData_21d87f8 + HIBYTE(GameData_21d87f8) +
              60 * BYTE2(GameData_21d87f8));
    }
  }
  return result;
}

__int64 game_playreport_Manager_ReportUnitCommon_lambda0_Invoke(__int64 a1,
                                                                __int64* a2,
                                                                __int64* a3)
{
  __int64 v4;
  __int64 v5;
  const char* v6;
  const char* v7;

  v4 = *a2;
  v5 = *a3;
  nn_prepo_Struct_Clear(*(_QWORD*)(a1 + 8));
  if (v4 == 0 || (v6 = *(const char**)(v4 + 40)) == nullptr || *v6 == 0) {
    v6 = "undefined";
  }
  nn_prepo_Struct_Add_1a0ae90(*(_QWORD*)(a1 + 8), "NameA", v6);
  if (v5 == 0 || (v7 = *(const char**)(v5 + 40)) == nullptr || *v7 == 0) {
    v7 = "undefined";
  }
  nn_prepo_Struct_Add_1a0ae90(*(_QWORD*)(a1 + 8), "NameB", v7);
  return nn_prepo_Array_Add_1a0af20(*(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 8));
}

__int64 game_playreport_Manager_ReportReliance_lambda0_Invoke(__int64 result,
                                                              __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  const char* v26;
  __int64 v27;
  const char* v28;

  if (*(_BYTE*)(a2 + 11) != 0) {
    v3 = result;
    if (**(int**)(result + 8) >= 1000) {
      v4 = *(_QWORD*)(result + 16);
      v5 = *(_QWORD*)(v4 + 8);
      if (*(_BYTE*)(v5 + 88) == 1) {
        nn_prepo_PlayReport_Add_1a0ae20(v5, "Reliance", *(_QWORD*)v4);
        v6 = *(_QWORD*)(v4 + 8);
        if (*(_BYTE*)(v6 + 88) == 1) {
          if ((int)nn_prepo_PlayReport_GetCount(*(_QWORD*)(v4 + 8)) < 2 ||
              (v7 = v6 + 72, *(_OWORD*)(v6 + 72) == 0)) {
            nn_prepo_PlayReport_Clear(v6, v7);
          }
          else {
            nn_prepo_PlayReport_Save(v6, v7);
          }
          *(_BYTE*)(v6 + 88) = 0;
        }
      }
      **(_DWORD**)(v4 + 16) = 0;
      **(_BYTE**)(v4 + 24) = 0;
    }
    if ((**(_BYTE**)(v3 + 24) & 1) == 0) {
      v8 = *(_QWORD*)(v3 + 32);
      if ((unsigned int)nn_prepo_PlayReport_SetEventId(v8, "reliance") == 0) {
        *(_BYTE*)(v8 + 88) = 1;
      }
      **(_BYTE**)(v3 + 24) = 1;
      Manager_13114c0_alt1(*(_QWORD*)(v3 + 40));
      nn_prepo_Array_Clear(*(_QWORD*)(v3 + 48));
    }
    v9 = *(_QWORD*)(v3 + 40);
    nn_prepo_Struct_Clear(v9 + 96);
    v10 = GameRoutine_8c7640(*(_QWORD*)(a2 + 24));
    v11 = GameRoutine_8c7640(*(_QWORD*)(a2 + 32));
    v12 = GameRoutine_8c9820(v10, v11, 0);
    if (v12 != 0) {
      GameRoutine_9e60d0(*(_QWORD*)(v12 + 24));
    }
    v13 = GameRoutine_8c7640(*(_QWORD*)(a2 + 24));
    v14 = GameRoutine_8c7640(*(_QWORD*)(a2 + 32));
    v15 = GameRoutine_8c9820(v13, v14, 1);
    if (v15 != 0) {
      v16 = GameRoutine_9e60d0(*(_QWORD*)(v15 + 24)) & 1;
    }
    else {
      v16 = 0;
    }
    v17 = GameRoutine_8c7640(*(_QWORD*)(a2 + 24));
    v18 = GameRoutine_8c7640(*(_QWORD*)(a2 + 32));
    v19 = GameRoutine_8c9820(v17, v18, 2);
    if (v19 != 0 && (GameRoutine_9e60d0(*(_QWORD*)(v19 + 24)) & 1) != 0) {
      v16 = 2;
    }
    v20 = GameRoutine_8c7640(*(_QWORD*)(a2 + 24));
    v21 = GameRoutine_8c7640(*(_QWORD*)(a2 + 32));
    v22 = GameRoutine_8c9820(v20, v21, 3);
    if (v22 != 0 && (GameRoutine_9e60d0(*(_QWORD*)(v22 + 24)) & 1) != 0) {
      v16 = 3;
    }
    v23 = GameRoutine_8c7640(*(_QWORD*)(a2 + 24));
    v24 = GameRoutine_8c7640(*(_QWORD*)(a2 + 32));
    result = GameRoutine_8c9820(v23, v24, 4);
    if (result != 0) {
      result = GameRoutine_9e60d0(*(_QWORD*)(result + 24));
      if ((result & 1) != 0) {
        v16 = 4;
      }
    }
    if (*(_WORD*)(a2 + 12) != 0 || v16 != 0) {
      v25 = GameRoutine_8c7640(*(_QWORD*)(a2 + 24));
      if (v25 == 0 || (v26 = *(const char**)(v25 + 40)) == nullptr ||
          *v26 == 0) {
        v26 = "undefined";
      }
      nn_prepo_Struct_Add_1a0ae90(v9 + 96, "NameA", v26);
      v27 = GameRoutine_8c7640(*(_QWORD*)(a2 + 32));
      if (v27 == 0 || (v28 = *(const char**)(v27 + 40)) == nullptr ||
          *v28 == 0) {
        v28 = "undefined";
      }
      nn_prepo_Struct_Add_1a0ae90(v9 + 96, "NameB", v28);
      nn_prepo_Struct_Add_1a0aea0(v9 + 96, "Level",
                                  *(unsigned __int8*)(a2 + 11));
      nn_prepo_Struct_Add_1a0aea0(v9 + 96, "MaxTalkRank", v16);
      result =
          nn_prepo_Array_Add_1a0af20(*(_QWORD*)(v3 + 48), *(_QWORD*)(v3 + 56));
      ++**(_DWORD**)(v3 + 8);
    }
  }
  return result;
}

__int64 Manager_13114c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL8 v6;
  __int64 v7;

  v1 = result;
  if (*(_BYTE*)(result + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(result, "ReportVersion", 1);
    if (*(_BYTE*)(v1 + 88) == 1) {
      result = nn_prepo_PlayReport_Add_1a0ae10(v1, "ReportId", v1 + 256);
      if (*(_BYTE*)(v1 + 88) == 1) {
        result =
            nn_prepo_PlayReport_Add_1a0ae00(v1, "SendType", *(int*)(v1 + 264));
      }
    }
  }
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if ((unsigned int)*(unsigned __int8*)(game_GameModeData_instance_ + 15) -
            1 >=
        9) {
      v3 = 0;
    }
    else {
      v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
  }
  else {
    v3 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "Route", v3);
    v2 = game_GameModeData_instance_;
  }
  if (v2 != 0) {
    v4 = *(int*)(v2 + 60);
  }
  else {
    v4 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "Part", v4);
    v2 = game_GameModeData_instance_;
  }
  if (v2 != 0) {
    v5 = *(int*)(v2 + 64);
  }
  else {
    v5 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "Chapter", v5);
    v2 = game_GameModeData_instance_;
  }
  if (v2 != 0) {
    if (*(_DWORD*)(v2 + 60) == 2) {
      result = GameRoutine_9a28e0(44);
      v6 = game_GameModeData_instance_ != 0 &&
           (result = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), result)) != 0 &&
           *(_DWORD*)(result + 32) != 0;
      if (*(_BYTE*)(v1 + 88) == 1) {
        result = nn_prepo_PlayReport_Add_1a0ade0(v1, "SkipPart2", v6);
      }
    }
    if (game_GameModeData_instance_ != 0) {
      v7 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v7 != 0 && (*(_BYTE*)(v1 + 88) & 1) != 0) {
        return nn_prepo_PlayReport_Add_1a0adf0(v1, "BattleField",
                                               *(_QWORD*)(v7 + 8));
      }
    }
  }
  return result;
}

__int64 game_playreport_Manager_ReportBmap_lambda0_Invoke(__int64 result,
                                                          __int64* a2,
                                                          unsigned int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  const char* v6;

  v3 = *a3;
  if ((int)v3 >= 1) {
    v4 = result;
    v5 = *a2;
    nn_prepo_Struct_Clear(*(_QWORD*)(result + 8));
    if (v5 != 0) {
      v6 = *(const char**)(v5 + 8);
    }
    else {
      v6 = "undefined";
    }
    nn_prepo_Struct_Add_1a0ae90(*(_QWORD*)(v4 + 8), "Name", v6);
    nn_prepo_Struct_Add_1a0aea0(*(_QWORD*)(v4 + 8), "Count", v3);
    return nn_prepo_Array_Add_1a0af20(*(_QWORD*)(v4 + 16), *(_QWORD*)(v4 + 8));
  }
  return result;
}

#pragma GCC visibility pop
