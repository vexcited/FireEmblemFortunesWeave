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
__int64 GameRoutine_130f910(__int64, __int64, ...);
__int64 GameRoutine_715440();
__int64 GameSideStoryData_12b56c0(_QWORD*, unsigned __int64**);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameReliance_Impl_EachPlayer(__int64, __int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(__int64 result);
__int64 game_UnitPool_GetFirst(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1aa2245;
extern _UNKNOWN GameData_1aa5c86;
extern _UNKNOWN GameData_2240f38;
extern _UNKNOWN GameData_2240f50;
extern __int64 (*GameData_2025b98[])();
extern __int64* GameData_212ccd0[45];
extern __int64* GameData_212cdc8[14];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 GameData_2240f28;
extern __int64 GameData_2240f30;
extern __int64 GameData_2240f40;
extern __int64 GameData_2240f48;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern int GameData_21f8110;
extern int GameData_21f8130;
__int64 Manager_130dee0();
__int64 Manager_130f220(__int64 a1);
_BYTE* game_playreport_Manager_ReportReliance(__int64 a1);
__int64 GameRoutine_130de40(__int64);
__int64 GameRoutine_9adea0(__int64);
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 nn_prepo_Array_Add_1a0af00(_QWORD, _QWORD);
__int64 nn_prepo_Array_Add_1a0af10(_QWORD, _QWORD);
__int64
    nn_prepo_PlayReport_Clear_alt1(_QWORD) __asm__("nn_prepo_PlayReport_Clear");
__int64 nn_prepo_Struct_Add_1a0ae80(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_Struct_Add_1a0aeb0(_QWORD, _QWORD, _QWORD);
__int64 nn_prepo_Struct_Add_1a0aec0(_QWORD, _QWORD, _QWORD);
__int64 strncpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a865a3;
extern _UNKNOWN GameData_1a90da4;
extern _UNKNOWN GameData_1a90dca;
extern _UNKNOWN GameData_1a90de1;
extern _UNKNOWN GameData_1a96422;
extern _UNKNOWN GameData_1a9cb6f;
extern _UNKNOWN GameData_1a9e126;
extern _UNKNOWN GameData_1aa0a93;
extern _UNKNOWN GameData_1aa225a;
extern _UNKNOWN GameData_1aaffc1;
extern _UNKNOWN GameData_1ab95e2;
extern _UNKNOWN GameData_1ac3209;
extern _UNKNOWN GameData_1acace2;
extern _UNKNOWN GameData_1ad0433;
extern _UNKNOWN GameData_1ad2aab;
extern _UNKNOWN GameData_1ad41a8;
extern _UNKNOWN GameData_1ad7c7a;
extern _UNKNOWN GameData_1adf75d;
extern _UNKNOWN GameData_1ae2029;
extern _UNKNOWN GameData_1ae354e;
extern _UNKNOWN GameData_1ae356b;
extern _UNKNOWN GameData_1ae3590;
extern _UNKNOWN GameData_1ae7328;
extern _UNKNOWN GameData_1ae7340;
extern _UNKNOWN GameData_1ae7357;
extern _UNKNOWN GameData_1aed87a;
extern _UNKNOWN GameData_1aeebf6;
extern _UNKNOWN GameData_1afa7c7;
extern _UNKNOWN GameData_2241118;
extern _UNKNOWN GameData_2241130;
extern _UNKNOWN GameData_2241148;
extern _UNKNOWN GameData_2241160;
extern _UNKNOWN GameData_2241178;
extern _UNKNOWN GameData_2241190;
extern _UNKNOWN GameData_22411a8;
extern _UNKNOWN GameData_22411c0;
extern _UNKNOWN GameData_22411d8;
extern _UNKNOWN GameData_22411f0;
extern _UNKNOWN GameData_2241208;
extern _UNKNOWN GameData_2241220;
extern _UNKNOWN GameData_2241238;
extern _UNKNOWN GameData_2241250;
extern _UNKNOWN GameData_2241268;
extern _UNKNOWN GameData_22412f8;
extern _UNKNOWN GameData_2241310;
extern _UNKNOWN GameData_2241328;
extern _UNKNOWN GameData_2241340;
extern _UNKNOWN GameData_2241358;
extern _UNKNOWN GameData_2241370;
extern _UNKNOWN GameData_2241388;
extern _UNKNOWN GameData_22413a0;
extern _UNKNOWN GameData_22413b8;
extern _UNKNOWN GameData_22413d0;
extern _UNKNOWN GameData_22413e8;
extern _UNKNOWN GameData_2241400;
extern _UNKNOWN GameData_2241418;
extern __int64 (*GameData_2025ca8[])();
extern __int64 (*GameData_203f730[])();
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9718;
extern __int64 GameData_21ca068;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_2241108;
extern __int64 GameData_2241110;
extern __int64 GameData_2241120;
extern __int64 GameData_2241128;
extern __int64 GameData_2241138;
extern __int64 GameData_2241140;
extern __int64 GameData_2241150;
extern __int64 GameData_2241158;
extern __int64 GameData_2241168;
extern __int64 GameData_2241170;
extern __int64 GameData_2241180;
extern __int64 GameData_2241188;
extern __int64 GameData_2241198;
extern __int64 GameData_22411a0;
extern __int64 GameData_22411b0;
extern __int64 GameData_22411b8;
extern __int64 GameData_22411c8;
extern __int64 GameData_22411d0;
extern __int64 GameData_22411e0;
extern __int64 GameData_22411e8;
extern __int64 GameData_22411f8;
extern __int64 GameData_2241200;
extern __int64 GameData_2241210;
extern __int64 GameData_2241218;
extern __int64 GameData_2241228;
extern __int64 GameData_2241230;
extern __int64 GameData_2241240;
extern __int64 GameData_2241248;
extern __int64 GameData_2241258;
extern __int64 GameData_2241260;
extern __int64 GameData_22412e8;
extern __int64 GameData_22412f0;
extern __int64 GameData_2241300;
extern __int64 GameData_2241308;
extern __int64 GameData_2241318;
extern __int64 GameData_2241320;
extern __int64 GameData_2241330;
extern __int64 GameData_2241338;
extern __int64 GameData_2241348;
extern __int64 GameData_2241350;
extern __int64 GameData_2241360;
extern __int64 GameData_2241368;
extern __int64 GameData_2241378;
extern __int64 GameData_2241380;
extern __int64 GameData_2241390;
extern __int64 GameData_2241398;
extern __int64 GameData_22413a8;
extern __int64 GameData_22413b0;
extern __int64 GameData_22413c0;
extern __int64 GameData_22413c8;
extern __int64 GameData_22413d8;
extern __int64 GameData_22413e0;
extern __int64 GameData_22413f0;
extern __int64 GameData_22413f8;
extern __int64 GameData_2241408;
extern __int64 GameData_2241410;
extern char GameData_1a9f09e;
extern int GameData_1bc43d4[];
unsigned __int64 LegionPool_9386f0();
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 Manager_130fdc0(__int64 a1);
__int64 Manager_13122a0(__int64 result);
_QWORD* Manager_1312e60(__int64 a1, __int64 a2);

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

__int64 Manager_130dee0()
{
  __int64 v0;
  __int64 v1;
  _QWORD* v2;
  unsigned int v3;
  unsigned int v4;
  _DWORD* v5;
  _QWORD* v6;
  __int64 v7;
  char v8;
  __int64* v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v20;
  int v21;
  int v22;
  int v23;

  v21 = 241;
  v0 = game_UnitPool_GetFirst(&v21);
  if (v0 != 0) {
    v1 = *(_QWORD*)(v0 + 432);
    v2 = (_QWORD*)v0;
    if (v1 == 0) {
      v1 = *(_QWORD*)(v0 + 440);
      if (v1 != 0) {
        v3 = *(unsigned __int8*)(v1 + 16);
        if (v3 < 9) {
          while (1) {
            v20 = v3 + 1;
            if (((2 << v3) & 0xF0) != 0) {
              v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v3 + 1) + 556000);
              if (v1 != 0) {
                break;
              }
            }
            v3 = v20;
            if (v20 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v1 = 0;
        }
      }
    }
    v4 = 0;
    v5 = (_DWORD*)game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_8:
      v6 = (_QWORD*)v1;
      v22 = *v5 & 0xFFF;
      if ((game_HasSkill(v2 + 218, &v22) & 1) == 0 ||
          ((v7 = v2[55]) == 0 ? (v8 = 9) : (v8 = *(_BYTE*)(v7 + 16)),
           ((1 << v8) & 0xF1) == 0)) {
        v23 = *(_DWORD*)((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) & 0xFFF;
        if ((game_HasSkill(v2 + 218, &v23) & 1) == 0) {
          v9 = (__int64*)GameData_21c9868;
          if (GameData_21c9868 != GameData_21c9870) {
            v10 = 0;
            while (1) {
              v12 = *v9;
              if (*v9 != 0) {
                if (v2[51] != 0) {
                  if (v12 == 0) {
                    goto LABEL_27;
                  }
                }
                else if (*(_QWORD*)(*(_QWORD*)(v2[50] + 24LL) + 1104LL) ==
                         v12) {
                  goto LABEL_27;
                }
                if (*(char*)(v12 + 504) < 0 ||
                    (v13 = *(_QWORD*)(*(_QWORD*)(v12 + 24) + 1104LL)) != 0 &&
                        (v14 = v2[70],
                         (v15 = *(unsigned __int16*)(v13 + 16)) <
                             (unsigned __int64)((v2[71] - v14) >> 1)) &&
                        (*(_WORD*)(v14 + 2 * v15) & 0x400) != 0) {
                LABEL_27:
                  v11 = 1;
                  goto LABEL_17;
                }
              }
              v11 = 0;
            LABEL_17:
              v10 += v11;
              if (++v9 == (__int64*)GameData_21c9870) {
                goto LABEL_29;
              }
            }
          }
          v10 = 0;
        LABEL_29:
          if (v10 > (int)v4) {
            v4 = v10;
          }
        }
      }
      if (v6 == nullptr) {
        return v4;
      }
      v1 = v6[54];
      v2 = v6;
      if (v1 == 0) {
        v16 = v6[55];
        v2 = v6;
        if (v16 != 0) {
          v17 = *(unsigned __int8*)(v16 + 16);
          v1 = 0;
          v2 = v6;
          if (v17 <= 8) {
            while (1) {
              v18 = v17 + 1;
              if (((2 << v17) & 0xF0) != 0) {
                v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v17 + 1) + 556000);
                if (v1 != 0) {
                  break;
                }
              }
              ++v17;
              if (v18 == 9) {
                v1 = 0;
                v2 = v6;
                goto LABEL_8;
              }
            }
            v2 = v6;
          }
        }
      }
    }
  }
  return 0;
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

__int64 Manager_130f220(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64** v9;
  unsigned __int64** v10;
  _QWORD** v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 result;
  __int64 v36;
  int v37;
  int* v38;
  int v39;
  bool v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  int* v44;
  unsigned __int64 v45;
  int v46;
  int v47;
  int v48;
  int* v49;
  __int64 v50;
  int* v51;
  unsigned __int64 v52;
  __int64 v53;
  int v54;
  int v55;
  unsigned int v56;
  __int64 v57;
  unsigned __int64* v58;
  struct {
    _BYTE v59[256];
    _BYTE* v60;
  } v59_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v59_.v59[0] = 0;
  v59_.v60 = v59_.v59;
  nn_prepo_Array_Clear(a1 + 176),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = 1;
  v3 = 687;
  v4 = game_GameModeData_instance_;
  do {
    v5 = *(_QWORD*)(v4 + 176);
    if (((3600 * *(unsigned __int16*)(v5 + v3 - 7) +
          60 * *(unsigned __int8*)(v5 + v3 - 5)) |
         *(unsigned __int8*)(v5 + v3 - 4)) != 0) {
      nn_prepo_Struct_Clear(a1 + 96),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned __int8)(v2 - 1) < 9u) {
        v6 = (unsigned __int8)(v2 - 1) + 1LL;
      }
      else {
        v6 = 0;
      }
      nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Route", v6),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Part", 1),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Time",
                                  3600LL * *(unsigned __int16*)(v5 + v3 - 7) +
                                      60LL * *(unsigned __int8*)(v5 + v3 - 5) +
                                      *(unsigned __int8*)(v5 + v3 - 4)),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      nn_prepo_Array_Add_1a0af20(a1 + 176, a1 + 96),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v4 = game_GameModeData_instance_;
      v5 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    }
    if (((3600 * *(unsigned __int16*)(v5 + v3 - 3) +
          60 * *(unsigned __int8*)(v5 + v3 - 1)) |
         *(unsigned __int8*)(v5 + v3)) != 0) {
      nn_prepo_Struct_Clear(a1 + 96),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned __int8)(v2 - 1) < 9u) {
        v7 = (unsigned __int8)(v2 - 1) + 1LL;
      }
      else {
        v7 = 0;
      }
      nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Route", v7),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Part", 2),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Time",
                                  3600LL * *(unsigned __int16*)(v5 + v3 - 3) +
                                      60LL * *(unsigned __int8*)(v5 + v3 - 1) +
                                      *(unsigned __int8*)(v5 + v3)),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      nn_prepo_Array_Add_1a0af20(a1 + 176, a1 + 96),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v4 = game_GameModeData_instance_;
    }
    ++v2;
    v3 += 216;
  } while (v2 != 9);
  v8 = *(_QWORD*)(v4 + 176);
  if (((3600 * *(unsigned __int16*)(v8 + 2408) +
        60 * *(unsigned __int8*)(v8 + 2410)) |
       *(unsigned __int8*)(v8 + 2411)) != 0) {
    nn_prepo_Struct_Clear(a1 + 96),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Route", 9),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Part", 3),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Time",
                                3600LL * *(unsigned __int16*)(v8 + 2408) +
                                    60LL * *(unsigned __int8*)(v8 + 2410) +
                                    *(unsigned __int8*)(v8 + 2411)),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    nn_prepo_Array_Add_1a0af20(a1 + 176, a1 + 96),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae20(a1, "ClearTime", a1 + 176),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = *(unsigned __int64***)(*GameData_212ccd0[0] + 64);
  v10 = *(unsigned __int64***)(*GameData_212ccd0[0] + 72);
  if (v9 != v10) {
    v11 = (_QWORD**)GameData_212c7b8[0];
    do {
      v12 = *v11;
      v58 = *v9;
      v13 = GameSideStoryData_12b56c0(v12, &v58),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v13 != 0) {
        v15 = v13;
        v16 = *(_QWORD*)(*(_QWORD*)v13 + 40LL);
        if (v16 == 0 || (v17 = *(const char**)(v16 + 40)) == nullptr ||
            *v17 == 0) {
          v17 = "undefined";
        }
        GameRoutine_130f910((__int64)v59_.v59, v14, v17),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (*(_BYTE*)(a1 + 88) == 1) {
          nn_prepo_PlayReport_Add_1a0ade0(a1, v59_.v60,
                                          *(unsigned __int8*)(v15 + 8) == 4),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      ++v9;
    } while (v9 != v10);
  }
  v18 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0 ||
      (v19 = *(_QWORD*)(*GameData_212cdc8[0] + 64),
       v20 = *(_QWORD*)(*GameData_212cdc8[0] + 72), v19 == v20)) {
    v29 = 0;
  }
  else {
    v21 = 0;
    do {
      v22 = *(_QWORD*)(*(_QWORD*)v19 + 24LL);
      v23 = *(__int64**)(v22 + 32);
      if (*(__int64**)(v22 + 40) != v23) {
        v24 = *v23;
        if (v24 != 0) {
          v25 = *(_QWORD*)(v24 + 96);
          v26 = *(_QWORD*)(v24 + 104);
          while (v25 != v26) {
            v28 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(v18 + 48),
                (unsigned __int64*)(*(_QWORD*)v25 + 16LL)),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v27 = v28 != 0 && *(_DWORD*)(v28 + 32) != 0;
            v21 += v27;
            v25 += 8;
          }
        }
      }
      v19 += 8;
    } while (v19 != v20);
    v29 = v21;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "CondTalkCount", v29),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0) {
    v30 = *(int*)(game_GameModeData_instance_ + 72);
  }
  else {
    v30 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "Gold", v30),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(_BYTE*)(a1 + 88) == 1) {
      nn_prepo_PlayReport_Add_1a0ae00(
          a1, "HandsCount",
          *(int*)(*(_QWORD*)(*(_QWORD*)
                                 game_TransporterConst_List_instance__ptr[0] +
                             8LL) +
                  84LL)),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240f38,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2240f38) != 0) {
    GameData_2240f30 = (__int64)&GameData_1aa2245;
    GameData_2240f28 = game_HashString((__int64)&GameData_1aa2245),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_2240f38),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v31 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2240f28)) != 0) {
    v32 = *(int*)(v31 + 32);
  }
  else {
    v32 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "RefineCount", v32),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240f50,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2240f50) != 0) {
    GameData_2240f48 = (__int64)&GameData_1aa5c86;
    GameData_2240f40 = game_HashString((__int64)&GameData_1aa5c86),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_2240f50),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v33 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2240f40)) != 0) {
    v34 = *(int*)(v33 + 32);
  }
  else {
    v34 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "RepairCount", v34),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = GameRoutine_715440(),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(a1, "HonorLevel", (int)result),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v36 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v37 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v38 = &GameData_21f8110;
    if (v37 == 2) {
      v41 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
    }
    else if (v37 == 3) {
      v39 = *(_DWORD*)(game_GameModeData_instance_ + 64);
      v40 = v39 <= 1;
      if (v39 <= 1) {
        LODWORD(v41) = 1;
      }
      else {
        LODWORD(v41) =
            (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
      }
      if (!v40) {
        v38 = &GameData_21f8130;
      }
    }
    else {
      LODWORD(v41) = 1;
    }
    v44 = v38 + 2;
    v43 = *((_QWORD*)v38 + 1);
    v45 = (unsigned __int64)(*((_QWORD*)v44 + 1) - v43) >> 2;
    if ((int)v41 < (int)v45) {
      LODWORD(v45) = v41;
    }
    v46 = v45 - 1;
    if ((int)v41 <= 0) {
      v47 = 0;
    }
    else {
      v47 = v46;
    }
    v48 = *(_DWORD*)(v43 + 4LL * v47);
    v49 = &GameData_21f8110;
    if (v37 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
      v49 = &GameData_21f8130;
    }
    v51 = v49 + 2;
    v50 = *((_QWORD*)v49 + 1);
    v52 = (unsigned __int64)(*((_QWORD*)v51 + 1) - v50) >> 2;
    if ((int)v52 <= 1) {
      LODWORD(v52) = 1;
    }
    v53 = v50 + 4LL * (unsigned int)v52;
    v54 = *(_DWORD*)(game_GameModeData_instance_ + 76);
    v55 = *(_DWORD*)(v53 - 4);
    if (v55 >= v54) {
      v55 = *(_DWORD*)(game_GameModeData_instance_ + 76);
    }
    if (v54 < v48) {
      v55 = v48;
    }
    v42 = v55;
  }
  else {
    v42 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(a1, "HonorExp", v42),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v36 = game_GameModeData_instance_;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    v56 = *(unsigned __int8*)(*(_QWORD*)(v36 + 176) + 168LL) - 1;
    if (v56 < 9) {
      v57 = (unsigned __int8)v56 + 1LL;
    }
    else {
      v57 = 0;
    }
    return nn_prepo_PlayReport_Add_1a0ae00(a1, "FirstRoute", v57);
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

__int64 Manager_130fdc0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  __int64 v9;
  const char* v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  __int64* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  int v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned int v37;
  __int64 v38;
  _BOOL8 v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  int v49;
  const char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  char v65;
  char v66;
  char v67;
  char v68;
  char v69;
  struct {
    char gap64_[5];
    _BYTE v70[250];
    char v71;
    const char* v72;
  } v70_;

  v62 = Manager_130dee0();
  v65 = 0;
  v70_.v72 = &v65;
  v64 = 241;
  result = game_UnitPool_GetFirst_alt1(&v64);
  if (result == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 432);
  v4 = result;
  if (v3 == 0) {
    v3 = *(_QWORD*)(result + 440);
    if (v3 != 0) {
      v5 = *(unsigned __int8*)(v3 + 16);
      if (v5 <= 8) {
        while (1) {
          v61 = v5 + 1;
          if (((2 << v5) & 0xF0) != 0) {
            v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                            24LL * (unsigned __int8)(v5 + 1) + 556000);
            if (v3 != 0) {
              break;
            }
          }
          v5 = v61;
          if (v61 == 9) {
            goto LABEL_5;
          }
        }
      }
      else {
      LABEL_5:
        v3 = 0;
      }
    }
  }
  v6 = 0;
  while (1) {
  LABEL_8:
    v7 = v3;
    result = GameRoutine_130de40(v4);
    if ((result & 1) == 0) {
      goto LABEL_107;
    }
    if (v6 < 40) {
      if (v6 != 0) {
        goto LABEL_22;
      }
    }
    else if (*(_BYTE*)(a1 + 88) == 1) {
      nn_prepo_PlayReport_Add_1a0ae20(a1, "Unit", a1 + 176);
      if (*(_BYTE*)(a1 + 88) == 1) {
        if ((int)nn_prepo_PlayReport_GetCount(a1) < 2 ||
            *(_OWORD*)(a1 + 72) == 0) {
          nn_prepo_PlayReport_Clear_alt1(a1);
        }
        else {
          nn_prepo_PlayReport_Save(a1, a1 + 72);
        }
        *(_BYTE*)(a1 + 88) = 0;
      }
    }
    if ((unsigned int)nn_prepo_PlayReport_SetEventId(a1, "unit") == 0) {
      *(_BYTE*)(a1 + 88) = 1;
    }
    Manager_13114c0(a1);
    nn_prepo_Array_Clear(a1 + 176);
    v6 = 0;
  LABEL_22:
    nn_prepo_Struct_Clear(a1 + 96);
    v9 = *(_QWORD*)(v4 + 392);
    if (v9 == 0 || (v10 = *(const char**)(v9 + 40)) == nullptr || *v10 == 0) {
      v10 = "undefined";
    }
    nn_prepo_Struct_Add_1a0ae90(a1 + 96, "Name", v10);
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "Level",
                                *(unsigned __int8*)(v4 + 498));
    nn_prepo_Array_Clear(a1 + 216);
    LOBYTE(v64) = 0;
    v11 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v11);
    LOBYTE(v64) = 1;
    v12 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v12);
    LOBYTE(v64) = 2;
    v13 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v13);
    LOBYTE(v64) = 3;
    v14 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v14);
    LOBYTE(v64) = 4;
    v15 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v15);
    LOBYTE(v64) = 5;
    v16 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v16);
    LOBYTE(v64) = 6;
    v17 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v17);
    LOBYTE(v64) = 7;
    v18 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v18);
    LOBYTE(v64) = 8;
    v19 = game_Unit_GetParam(v4);
    nn_prepo_Array_Add_1a0af10(a1 + 216, v19);
    nn_prepo_Struct_Add_1a0aeb0(a1 + 96, "Parameter", a1 + 216);
    nn_prepo_Array_Clear(a1 + 216);
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 514));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 516));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 518));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 520));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 522));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 524));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 526));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 528));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 530));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 532));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 534));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 536));
    nn_prepo_Array_Add_1a0af10(a1 + 216, *(unsigned __int16*)(v4 + 538));
    nn_prepo_Struct_Add_1a0aeb0(a1 + 96, "MasteryExp", a1 + 216);
    v20 = game_Unit_GetJob(v4);
    if (v20 != 0) {
      strncpy(&v65, *(_QWORD*)(v20 + 32), 256);
      v21 = &v65;
      v70_.v71 = 0;
      v70_.v72 = &v65;
      if (v65 != 0) {
        v70_.v72 = &v66;
        v21 = &v66;
        if (v66 != 0) {
          v21 = &v67;
          v70_.v72 = &v67;
          if (v67 != 0) {
            v21 = &v68;
            v70_.v72 = &v68;
            if (v68 != 0) {
              if (v69 != 0) {
                v21 = v70_.v70;
              }
              else {
                v21 = &v69;
              }
              v70_.v72 = v21;
            }
          }
        }
      }
    }
    else {
      v21 = "undefined";
    }
    v63 = v6;
    nn_prepo_Struct_Add_1a0ae90(a1 + 96, "Job", v21);
    nn_prepo_Array_Clear(a1 + 216);
    v23 = (__int64*)GameData_21c9868;
    v22 = GameData_21c9870;
    if (GameData_21c9868 != GameData_21c9870) {
      v24 = 0;
      while (1) {
        v25 = *v23;
        if (*v23 != 0) {
          if (*(_QWORD*)(v4 + 408) != 0) {
            if (v25 == 0) {
              goto LABEL_49;
            }
          }
          else if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 400) + 24LL) +
                              1104LL) == v25) {
            goto LABEL_49;
          }
          if (*(char*)(v25 + 504) < 0 ||
              (v26 = *(_QWORD*)(*(_QWORD*)(v25 + 24) + 1104LL)) != 0 &&
                  (v27 = *(_QWORD*)(v4 + 560),
                   (v28 = *(unsigned __int16*)(v26 + 16)) <
                       (unsigned __int64)((*(_QWORD*)(v4 + 568) - v27) >> 1)) &&
                  (*(_WORD*)(v27 + 2 * v28) & 0x400) != 0) {
          LABEL_49:
            v29 = &v65;
            strncpy(&v65, *(_QWORD*)(v25 + 32), 256);
            v70_.v71 = 0;
            v70_.v72 = &v65;
            if (v65 != 0) {
              v70_.v72 = &v66;
              v29 = &v66;
              if (v66 != 0) {
                v29 = &v67;
                v70_.v72 = &v67;
                if (v67 != 0) {
                  v29 = &v68;
                  v70_.v72 = &v68;
                  if (v68 != 0) {
                    if (v69 != 0) {
                      v29 = v70_.v70;
                    }
                    else {
                      v29 = &v69;
                    }
                    v70_.v72 = v29;
                  }
                }
              }
            }
            nn_prepo_Array_Add_1a0af00(a1 + 216, v29);
            ++v24;
          }
        }
        if (++v23 == (__int64*)v22) {
          goto LABEL_58;
        }
      }
    }
    v24 = 0;
  LABEL_58:
    v30 = v62 - v24;
    if (v62 > v24) {
      do {
        nn_prepo_Array_Add_1a0af00(a1 + 216, &GameData_1a9f09e);
        --v30;
      } while (v30 != 0);
    }
    nn_prepo_Struct_Add_1a0aeb0(a1 + 96, "QualifiedJobs", a1 + 216);
    v31 = (__int64*)GameData_21c9868;
    if (GameData_21c9868 == GameData_21c9870) {
      v32 = 0;
    }
    else {
      LODWORD(v32) = 0;
      do {
        v33 = *v31;
        if (*v31 != 0) {
          v33 = *(_QWORD*)(*(_QWORD*)(v33 + 24) + 1104LL);
          if (v33 != 0) {
            v34 = *(_QWORD*)(*(_QWORD*)(v33 + 24) + 1104LL);
            if (v34 != 0) {
              LODWORD(v33) = *(unsigned __int16*)(v34 + 412);
              if (*(_WORD*)(v34 + 412) != 0) {
                v35 = *(_QWORD*)(v4 + 560);
                v36 = *(unsigned __int16*)(v34 + 16);
                if (v36 >= (*(_QWORD*)(v4 + 568) - v35) >> 1) {
                  v37 = 0;
                }
                else {
                  v37 = *(_WORD*)(v35 + 2 * v36) & 0x3FF;
                }
                LODWORD(v33) = v37 >= (unsigned int)v33;
              }
            }
            else {
              LODWORD(v33) = 0;
            }
          }
        }
        v32 = (unsigned int)(v33 + v32);
        ++v31;
      } while (v31 != (__int64*)GameData_21c9870);
    }
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "JobMasterCount", v32);
    v38 = *(_QWORD*)(v4 + 440);
    v39 = v38 != 0 && (unsigned __int64)(*(_BYTE*)(v38 + 16) == 0);
    nn_prepo_Struct_Add_1a0ae80(a1 + 96, "IsSortie", v39);
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "SortieCount", *(int*)(v4 + 2164));
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "BattleCount", *(int*)(v4 + 2156));
    v40 = GameRoutine_9adea0(v4 + 2144);
    if (v40 != 0) {
      v41 = *(char*)(v4 + 2194);
      v42 = *(char*)(v4 + 2193);
      v43 = *(unsigned __int8*)(v4 + 2192);
      v44 = v40;
      nn_prepo_Struct_Clear(a1 + 136);
    }
    else {
      if (GameData_21ca2f8 == 0 || (*(_BYTE*)(v4 + 416) & 0x20) == 0 ||
          game_GameModeData_instance_ == 0) {
        nn_prepo_Struct_Clear(a1 + 136);
      LABEL_88:
        nn_prepo_Struct_Add_1a0aea0(a1 + 136, "Route", -1);
        nn_prepo_Struct_Add_1a0aea0(a1 + 136, "Part", -1);
        nn_prepo_Struct_Add_1a0aea0(a1 + 136, "Chapter", -1);
        v46 = &GameData_1a9f09e;
        goto LABEL_89;
      }
      v44 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      v43 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      v42 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v41 = *(_DWORD*)(game_GameModeData_instance_ + 64);
      nn_prepo_Struct_Clear(a1 + 136);
      if (v44 == 0) {
        goto LABEL_88;
      }
    }
    v45 = (unsigned int)(v43 - 1) < 9 ? (unsigned __int8)(v43 - 1) + 1LL : 0LL;
    nn_prepo_Struct_Add_1a0aea0(a1 + 136, "Route", v45);
    nn_prepo_Struct_Add_1a0aea0(a1 + 136, "Part", v42);
    nn_prepo_Struct_Add_1a0aea0(a1 + 136, "Chapter", v41);
    v46 = *(char**)(v44 + 8);
  LABEL_89:
    nn_prepo_Struct_Add_1a0ae90(a1 + 136, "Place", v46);
    nn_prepo_Struct_Add_1a0aec0(a1 + 96, "DeadMap", a1 + 136);
    nn_prepo_Struct_Add_1a0ae80(a1 + 96, "IsDead",
                                (*(_DWORD*)(v4 + 416) & 8) != 0);
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "DeadCount", *(int*)(v4 + 2168));
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "BlazeArtsCount", *(int*)(v4 + 2172));
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "BurstCount", *(int*)(v4 + 2176));
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "GambitCount", *(int*)(v4 + 2180));
    v47 = *(_QWORD*)(*(_QWORD*)(v4 + 392) + 24LL);
    if (*(_QWORD*)(v47 + 1392) == 0) {
      goto LABEL_94;
    }
    if (game_GameModeData_instance_ != 0) {
      v48 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)(v47 + 1392));
      if (v48 != 0) {
        v49 = *(_DWORD*)(v48 + 32);
        if ((unsigned __int8)v49 <= 2u) {
          v50 = (char*)GameData_1bc43d4 + GameData_1bc43d4[v49 & 3];
          goto LABEL_96;
        }
      LABEL_94:
        v50 = "undefined";
        goto LABEL_96;
      }
    }
    v50 = "DEFAULT";
  LABEL_96:
    nn_prepo_Struct_Add_1a0ae90(a1 + 96, "CostumeType", v50);
    v51 = *(_QWORD*)(v4 + 392);
    if (v51 != 0 && game_GameModeData_instance_ != 0 &&
        (v52 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)(*(_QWORD*)(v51 + 24) + 1552LL))) != 0) {
      v53 = *(int*)(v52 + 32);
    }
    else {
      v53 = 0;
    }
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "UsedPerchCount", v53);
    v54 = *(_QWORD*)(v4 + 392);
    if (v54 != 0 && game_GameModeData_instance_ != 0 &&
        (v55 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)(*(_QWORD*)(v54 + 24) + 1592LL))) != 0) {
      v56 = *(int*)(v55 + 32);
    }
    else {
      v56 = 0;
    }
    nn_prepo_Struct_Add_1a0aea0(a1 + 96, "PresentCount", v56);
    result = nn_prepo_Array_Add_1a0af20(a1 + 176, a1 + 96);
    v6 = v63 + 1;
  LABEL_107:
    if (v7 == 0) {
      break;
    }
    v3 = *(_QWORD*)(v7 + 432);
    v4 = v7;
    if (v3 == 0) {
      v57 = *(_QWORD*)(v7 + 440);
      v4 = v7;
      if (v57 != 0) {
        v58 = *(unsigned __int8*)(v57 + 16);
        v3 = 0;
        v4 = v7;
        if (v58 <= 8) {
          while (1) {
            v59 = v58 + 1;
            if (((2 << v58) & 0xF0) != 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v58 + 1) + 556000);
              if (v3 != 0) {
                break;
              }
            }
            ++v58;
            if (v59 == 9) {
              v3 = 0;
              v4 = v7;
              goto LABEL_8;
            }
          }
          v4 = v7;
        }
      }
    }
  }
  if (v6 >= 1 && (*(_BYTE*)(a1 + 88) & 1) != 0) {
    result = nn_prepo_PlayReport_Add_1a0ae20(a1, "Unit", a1 + 176);
    if (*(_BYTE*)(a1 + 88) == 1) {
      if ((int)nn_prepo_PlayReport_GetCount(a1) < 2 ||
          *(_OWORD*)(a1 + 72) == 0) {
        result = nn_prepo_PlayReport_Clear_alt1(a1);
      }
      else {
        result = nn_prepo_PlayReport_Save(a1, a1 + 72);
      }
      *(_BYTE*)(a1 + 88) = 0;
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

_BYTE* game_playreport_Manager_ReportReliance(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _BYTE* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _BYTE v10[32];
    _BYTE* v11;
  } v10_;
  struct {
    __int64 v12;
    __int64 v13;
    int* v14;
    _BYTE* v15;
  } v12_;
  _BYTE v16[4];
  int v17;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = a1 + 176;
  v17 = 0;
  v16[0] = 0;
  v12_.v12 = a1 + 176;
  v12_.v13 = a1;
  v12_.v14 = &v17;
  v12_.v15 = v16;
  v3 = game_GameModeData_instance_;
  v4 = a1 + 96;
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5[4] = a1;
  v5[5] = a1;
  v5[6] = v1;
  v5[7] = v4;
  v10_.v11 = v5;
  *v5 = GameData_2025b98;
  v5[1] = &v17;
  v5[2] = &v12_.v12;
  v5[3] = v16;
  game_GameReliance_Impl_EachPlayer(*(_QWORD*)(v3 + 128), (__int64)v10_.v10),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v10_.v11;
  if (v10_.v11 == v10_.v10) {
    v7 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_6;
    }
    v7 = 40;
  }
  result = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v10_.v11 + v7))(
      (__int64)v10_.v11),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_6:
  if (v16[0] == 1) {
    result = (_BYTE*)v12_.v13;
    if (*(_BYTE*)(v12_.v13 + 88) == 1) {
      result = (_BYTE*)nn_prepo_PlayReport_Add_1a0ae20(v12_.v13, "Reliance",
                                                       v12_.v12),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = v12_.v13;
      if (*(_BYTE*)(v12_.v13 + 88) == 1) {
        if ((int)nn_prepo_PlayReport_GetCount(v12_.v13) < 2 ||
            (v9 = v8 + 72, *(_OWORD*)(v8 + 72) == 0)) {
          result = (_BYTE*)nn_prepo_PlayReport_Clear(v8, v9),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          result = (_BYTE*)nn_prepo_PlayReport_Save(v8, v9),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        *(_BYTE*)(v8 + 88) = 0;
      }
    }
    *v12_.v14 = 0;
    *v12_.v15 = 0;
  }
  return result;
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

__int64 Manager_13122a0(__int64 result)
{
  __int64 v1;
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

  v1 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241118,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241118);
    if ((_DWORD)result != 0) {
      GameData_2241110 = (__int64)&GameData_1aed87a;
      GameData_2241108 = game_HashString((__int64)&GameData_1aed87a);
      result = __cxa_guard_release(&GameData_2241118);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241108)) != 0) {
    v2 = *(int*)(result + 32);
  }
  else {
    v2 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "TrainingCount", v2);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241130,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241130);
    if ((_DWORD)result != 0) {
      GameData_2241128 = (__int64)&GameData_1afa7c7;
      GameData_2241120 = game_HashString((__int64)&GameData_1afa7c7);
      result = __cxa_guard_release(&GameData_2241130);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241120)) != 0) {
    v3 = *(int*)(result + 32);
  }
  else {
    v3 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "ArenaWatchCount", v3);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241148,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241148);
    if ((_DWORD)result != 0) {
      GameData_2241140 = (__int64)&GameData_1ac3209;
      GameData_2241138 = game_HashString((__int64)&GameData_1ac3209);
      result = __cxa_guard_release(&GameData_2241148);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241138)) != 0) {
    v4 = *(int*)(result + 32);
  }
  else {
    v4 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "DiningCount", v4);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241160,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241160);
    if ((_DWORD)result != 0) {
      GameData_2241158 = (__int64)&GameData_1aa0a93;
      GameData_2241150 = game_HashString((__int64)&GameData_1aa0a93);
      result = __cxa_guard_release(&GameData_2241160);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241150)) != 0) {
    v5 = *(int*)(result + 32);
  }
  else {
    v5 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "HotelStayCount", v5);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241178,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241178);
    if ((_DWORD)result != 0) {
      GameData_2241170 = (__int64)&GameData_1ae2029;
      GameData_2241168 = game_HashString((__int64)&GameData_1ae2029);
      result = __cxa_guard_release(&GameData_2241178);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241168)) != 0) {
    v6 = *(int*)(result + 32);
  }
  else {
    v6 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "IndividualTurn", v6);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241190,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241190);
    if ((_DWORD)result != 0) {
      GameData_2241188 = (__int64)&GameData_1acace2;
      GameData_2241180 = game_HashString((__int64)&GameData_1acace2);
      result = __cxa_guard_release(&GameData_2241190);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241180)) != 0) {
    v7 = *(int*)(result + 32);
  }
  else {
    v7 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "ServeCount", v7);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22411a8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22411a8);
    if ((_DWORD)result != 0) {
      GameData_22411a0 = (__int64)&GameData_1a865a3;
      GameData_2241198 = game_HashString((__int64)&GameData_1a865a3);
      result = __cxa_guard_release(&GameData_22411a8);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241198)) != 0) {
    v8 = *(int*)(result + 32);
  }
  else {
    v8 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "TempleAudienceCount", v8);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22411c0,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22411c0);
    if ((_DWORD)result != 0) {
      GameData_22411b8 = (__int64)&GameData_1a90de1;
      GameData_22411b0 = game_HashString((__int64)&GameData_1a90de1);
      result = __cxa_guard_release(&GameData_22411c0);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22411b0)) != 0) {
    v9 = *(int*)(result + 32);
  }
  else {
    v9 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "StageWatchCount", v9);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22411d8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22411d8);
    if ((_DWORD)result != 0) {
      GameData_22411d0 = (__int64)&GameData_1ad2aab;
      GameData_22411c8 = game_HashString((__int64)&GameData_1ad2aab);
      result = __cxa_guard_release(&GameData_22411d8);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22411c8)) != 0) {
    v10 = *(int*)(result + 32);
  }
  else {
    v10 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "StageActCount", v10);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22411f0,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_22411f0);
    if ((_DWORD)result != 0) {
      GameData_22411e8 = (__int64)&GameData_1aaffc1;
      GameData_22411e0 = game_HashString((__int64)&GameData_1aaffc1);
      result = __cxa_guard_release(&GameData_22411f0);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22411e0)) != 0) {
    v11 = *(int*)(result + 32);
  }
  else {
    v11 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "ThermaeCount", v11);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241208,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241208);
    if ((_DWORD)result != 0) {
      GameData_2241200 = (__int64)&GameData_1aa225a;
      GameData_22411f8 = game_HashString((__int64)&GameData_1aa225a);
      result = __cxa_guard_release(&GameData_2241208);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22411f8)) != 0) {
    v12 = *(int*)(result + 32);
  }
  else {
    v12 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "ClassTrialTakingCount", v12);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241220,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241220);
    if ((_DWORD)result != 0) {
      GameData_2241218 = (__int64)&GameData_1a9cb6f;
      GameData_2241210 = game_HashString((__int64)&GameData_1a9cb6f);
      result = __cxa_guard_release(&GameData_2241220);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241210)) != 0) {
    v13 = *(int*)(result + 32);
  }
  else {
    v13 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "ClassTrialPassingCount", v13);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241238,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241238);
    if ((_DWORD)result != 0) {
      GameData_2241230 = (__int64)&GameData_1ae7328;
      GameData_2241228 = game_HashString((__int64)&GameData_1ae7328);
      result = __cxa_guard_release(&GameData_2241238);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241228)) != 0) {
    v14 = *(int*)(result + 32);
  }
  else {
    v14 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "DivineCustomerCount", v14);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241250,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241250);
    if ((_DWORD)result != 0) {
      GameData_2241248 = (__int64)&GameData_1adf75d;
      GameData_2241240 = game_HashString((__int64)&GameData_1adf75d);
      result = __cxa_guard_release(&GameData_2241250);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241240)) != 0) {
    v15 = *(int*)(result + 32);
  }
  else {
    v15 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    result = nn_prepo_PlayReport_Add_1a0ae00(v1, "DivinerCount", v15);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241268,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_2241268);
    if ((_DWORD)result != 0) {
      GameData_2241260 = (__int64)&GameData_1a90da4;
      GameData_2241258 = game_HashString((__int64)&GameData_1a90da4);
      result = __cxa_guard_release(&GameData_2241268);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241258)) != 0) {
    v16 = *(int*)(result + 32);
  }
  else {
    v16 = 0;
  }
  if (*(_BYTE*)(v1 + 88) == 1) {
    return nn_prepo_PlayReport_Add_1a0ae00(v1, "VandalTradeCount", v16);
  }
  return result;
}

_QWORD* Manager_1312e60(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* result;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  __int64** v51;
  __int64** v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  bool v57;
  __int64 v58;
  __int64 v59;
  __int64** v60;
  __int64** v61;
  int v62;
  __int64 v63;
  int v64;
  int v65;
  bool v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  int v77;
  struct {
    _QWORD v78[4];
    _QWORD* v79;
  } v78_;
  int v80;
  __int64 v81;

  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22412f8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22412f8) != 0) {
    GameData_22412f0 = (__int64)&GameData_1ae354e;
    GameData_22412e8 = game_HashString((__int64)&GameData_1ae354e),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_22412f8),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22412e8)) != 0) {
    v4 = *(int*)(v3 + 32);
  }
  else {
    v4 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "CallAnimalCount", v4),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241310,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2241310) != 0) {
    GameData_2241308 = (__int64)&GameData_1ae7340;
    GameData_2241300 = game_HashString((__int64)&GameData_1ae7340),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_2241310),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v5 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241300)) != 0) {
    v6 = *(int*)(v5 + 32);
  }
  else {
    v6 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "MakeFarmCount", v6),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v7 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v8 = GameData_21c9718 + 136LL * v7;
  v9 = *(_QWORD*)(v8 + 72);
  v10 = *(_QWORD*)(v8 + 80);
  if (v9 == v10) {
    v12 = 0;
  }
  else {
    v11 = 0;
    do {
      if (*(_BYTE*)(**(_QWORD**)v9 + 113LL) == 1 &&
          *(_BYTE*)(*(_QWORD*)v9 + 9LL) == 4) {
        ++v11;
      }
      v9 += 8;
    } while (v9 != v10);
    v12 = v11;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "SqCompletedKindnessCount", v12),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v13 = v78_.v78;
  v80 = 0;
  v78_.v78[0] = GameData_203f730;
  v78_.v78[1] = &v80;
  v78_.v79 = v78_.v78;
  v14 = *(__int64**)(GameData_21ca068 + 64);
  v15 = *(__int64**)(GameData_21ca068 + 72);
  if (v14 == v15) {
    goto LABEL_38;
  }
  do {
    if (*(_QWORD*)(*v14 + 64) != 0) {
      v81 = *v14;
      if (v78_.v79 == nullptr) {
      LABEL_34:
        GameRoutine_60a310(),
            v46 = COERCE_AS(__typeof__(v46),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v78_.v79 + 48LL))(v78_.v79, &v81),
          v46 = COERCE_AS(__typeof__(v46),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    ++v14;
  } while (v14 != v15);
  v13 = v78_.v79;
  if (v78_.v79 == v78_.v78) {
  LABEL_38:
    v16 = 32;
  }
  else {
    if (v78_.v79 == nullptr) {
      goto LABEL_40;
    }
    v16 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v13 + v16))(v13, a2),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_40:
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "LessonCount", v80),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241328,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2241328) != 0) {
    GameData_2241320 = (__int64)&GameData_1ad0433;
    GameData_2241318 = game_HashString((__int64)&GameData_1ad0433),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_2241328),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v17 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241318)) != 0) {
    v18 = *(int*)(v17 + 32);
  }
  else {
    v18 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "BladeResonanceCount", v18),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v19 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v19 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v20 = GameData_21c9718 + 136LL * v19;
  v21 = *(_QWORD*)(v20 + 72);
  v22 = *(_QWORD*)(v20 + 80);
  if (v21 == v22) {
    v24 = 0;
  }
  else {
    v23 = 0;
    do {
      if (*(_BYTE*)(**(_QWORD**)v21 + 112LL) == 5 &&
          *(_BYTE*)(*(_QWORD*)v21 + 9LL) == 4) {
        ++v23;
      }
      v21 += 8;
    } while (v21 != v22);
    v24 = v23;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "SqCompletedChallengeCount", v24),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241340,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2241340) != 0) {
    GameData_2241338 = (__int64)&GameData_1ad41a8;
    GameData_2241330 = game_HashString((__int64)&GameData_1ad41a8),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_2241340),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v25 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241330)) != 0) {
    v26 = *(int*)(v25 + 32);
  }
  else {
    v26 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "ArtsEducateCount", v26),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241358,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2241358) != 0) {
    GameData_2241350 = (__int64)&GameData_1a96422;
    GameData_2241348 = game_HashString((__int64)&GameData_1a96422),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_2241358),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v27 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241348)) != 0) {
    v28 = *(int*)(v27 + 32);
  }
  else {
    v28 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "ArtsReinforceCount", v28),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v29 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v29 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v30 = GameData_21c9718 + 136LL * v29;
  v31 = *(_QWORD*)(v30 + 72);
  v32 = *(_QWORD*)(v30 + 80);
  if (v31 == v32) {
    v34 = 0;
  }
  else {
    v33 = 0;
    do {
      if (*(_BYTE*)(**(_QWORD**)v31 + 112LL) == 6 &&
          *(_BYTE*)(*(_QWORD*)v31 + 9LL) == 4) {
        ++v33;
      }
      v31 += 8;
    } while (v31 != v32);
    v34 = v33;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "SqCompletedProcurementCount", v34),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241370,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2241370) != 0) {
    GameData_2241368 = (__int64)&GameData_1ae356b;
    GameData_2241360 = game_HashString((__int64)&GameData_1ae356b),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_2241370),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v35 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241360)) != 0) {
    v36 = *(int*)(v35 + 32);
  }
  else {
    v36 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "RecruitSoldiersCount", v36),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241388,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2241388) != 0) {
    GameData_2241380 = (__int64)&GameData_1aeebf6;
    GameData_2241378 = game_HashString((__int64)&GameData_1aeebf6),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_2241388),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v37 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241378)) != 0) {
    v38 = *(int*)(v37 + 32);
  }
  else {
    v38 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "BigRecruitSoldiersCount", v38),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22413a0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22413a0) != 0) {
    GameData_2241398 = (__int64)&GameData_1ab95e2;
    GameData_2241390 = game_HashString((__int64)&GameData_1ab95e2),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_22413a0),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v39 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_2241390)) != 0) {
    v40 = *(int*)(v39 + 32);
  }
  else {
    v40 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "SpeechCount", v40),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22413b8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22413b8) != 0) {
    GameData_22413b0 = (__int64)&GameData_1ae7357;
    GameData_22413a8 = game_HashString((__int64)&GameData_1ae7357),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_22413b8),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v41 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22413a8)) != 0) {
    v42 = *(int*)(v41 + 32);
  }
  else {
    v42 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "DispatchCount", v42),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22413d0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22413d0) != 0) {
    GameData_22413c8 = (__int64)&GameData_1ae3590;
    GameData_22413c0 = game_HashString((__int64)&GameData_1ae3590),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    __cxa_guard_release(&GameData_22413d0),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ != 0 &&
      (v43 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22413c0)) != 0) {
    v44 = *(int*)(v43 + 32);
  }
  else {
    v44 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    nn_prepo_PlayReport_Add_1a0ae00(a1, "SellLegionCount", v44),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = (_QWORD*)LegionPool_9386f0(),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 88) == 1) {
    result = (_QWORD*)nn_prepo_PlayReport_Add_1a0ae00(a1, "LegionVarietyCount",
                                                      (int)result),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v47 = GameData_21c9718;
  v48 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v49 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  else {
    v49 = 0;
  }
  v50 = GameData_21c9718 + 136LL * v49;
  v51 = *(__int64***)(v50 + 72);
  v52 = *(__int64***)(v50 + 80);
  if (v51 == v52) {
    v58 = 0;
  }
  else {
    v53 = 0;
    do {
      v54 = **v51;
      v55 = *(unsigned __int8*)(v54 + 112);
      v56 = *(_BYTE*)(v54 + 113) & 0xFE;
      v57 = v55 == 7 && v56 == 2;
      if (v57 && *((_BYTE*)*v51 + 9) == 4) {
        ++v53;
      }
      ++v51;
    } while (v51 != v52);
    v58 = v53;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    result = (_QWORD*)nn_prepo_PlayReport_Add_1a0ae00(
        a1, "SqCompletedShowProvinceAndBarCount", v58),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v47 = GameData_21c9718;
    v48 = game_GameModeData_instance_;
  }
  if (v48 != 0) {
    LODWORD(v48) = *(unsigned __int8*)(v48 + 15);
  }
  v59 = v47 + 136LL * (unsigned int)v48;
  v60 = *(__int64***)(v59 + 72);
  v61 = *(__int64***)(v59 + 80);
  if (v60 == v61) {
    v67 = 0;
  }
  else {
    v62 = 0;
    do {
      v63 = **v60;
      v64 = *(unsigned __int8*)(v63 + 112);
      v65 = *(unsigned __int8*)(v63 + 113);
      v66 = v64 == 7 && v65 == 4;
      if (v66 && *((_BYTE*)*v60 + 9) == 4) {
        ++v62;
      }
      ++v60;
    } while (v60 != v61);
    v67 = v62;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    result = (_QWORD*)nn_prepo_PlayReport_Add_1a0ae00(
        a1, "SqCompletedShowReconstructionCount", v67),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22413e8,
                            memory_order_acquire) &
       1) == 0) {
    result = (_QWORD*)__cxa_guard_acquire(&GameData_22413e8),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((_DWORD)result != 0) {
      GameData_22413e0 = (__int64)&GameData_1a90dca;
      GameData_22413d8 = game_HashString((__int64)&GameData_1a90dca),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = (_QWORD*)__cxa_guard_release(&GameData_22413e8),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = (_QWORD*)game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22413d8)) != nullptr) {
    v68 = *((int*)result + 8);
  }
  else {
    v68 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    result =
        (_QWORD*)nn_prepo_PlayReport_Add_1a0ae00(a1, "DrinkSellerCount", v68),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241400,
                            memory_order_acquire) &
       1) == 0) {
    result = (_QWORD*)__cxa_guard_acquire(&GameData_2241400),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((_DWORD)result != 0) {
      GameData_22413f8 = (__int64)&GameData_1ad7c7a;
      GameData_22413f0 = game_HashString((__int64)&GameData_1ad7c7a),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = (_QWORD*)__cxa_guard_release(&GameData_2241400),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (result = (_QWORD*)game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22413f0)) != nullptr) {
    v69 = *((int*)result + 8);
  }
  else {
    v69 = 0;
  }
  if (*(_BYTE*)(a1 + 88) == 1) {
    result =
        (_QWORD*)nn_prepo_PlayReport_Add_1a0ae00(a1, "DestroyMiasmaCount", v69),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    goto LABEL_190;
  }
  result = v78_.v78;
  v80 = 0;
  v78_.v78[0] = GameData_2025ca8;
  v78_.v78[1] = &v80;
  v78_.v79 = v78_.v78;
  v70 = *(_QWORD*)(GameData_21c9700 + 8);
  v71 = *(__int64**)(v70 + 48);
  v72 = *(__int64**)(v70 + 56);
  if (v71 == v72) {
    goto LABEL_183;
  }
  do {
    v73 = *v71++;
    v81 = v73;
    if (v78_.v79 == nullptr) {
      goto LABEL_34;
    }
    (*(void (**)(_QWORD*, __int64*))(*v78_.v79 + 48LL))(v78_.v79, &v81),
        v46 = COERCE_AS(__typeof__(v46),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  } while (v71 != v72);
  result = v78_.v79;
  if (v78_.v79 == v78_.v78) {
  LABEL_183:
    v74 = 32;
  }
  else {
    if (v78_.v79 == nullptr) {
      goto LABEL_185;
    }
    v74 = 40;
  }
  result =
      (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v74))(result, v46),
  v46 = COERCE_AS(__typeof__(v46),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_185:
  if (v80 < 1) {
  LABEL_190:
    v76 = 0;
    goto LABEL_191;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241418,
                            memory_order_acquire) &
       1) == 0) {
    result = (_QWORD*)__cxa_guard_acquire(&GameData_2241418),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((_DWORD)result != 0) {
      GameData_2241410 = (__int64)&GameData_1a9e126;
      GameData_2241408 = game_HashString((__int64)&GameData_1a9e126),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = (_QWORD*)__cxa_guard_release(&GameData_2241418),
      v46 = COERCE_AS(__typeof__(v46),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v75 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = (_QWORD*)game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_2241408),
    v46 = COERCE_AS(__typeof__(v46),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != nullptr) {
      v75 = 100 * *((_DWORD*)result + 8);
    }
    else {
      v75 = 0;
    }
  }
  v77 = v75 / v80;
  if (v77 >= 100) {
    v77 = 100;
  }
  v76 = v77;
LABEL_191:
  if (*(_BYTE*)(a1 + 88) == 1) {
    return (_QWORD*)nn_prepo_PlayReport_Add_1a0ae00(a1, "ReconstructionRate",
                                                    v76);
  }
  return result;
}

#pragma GCC visibility pop
