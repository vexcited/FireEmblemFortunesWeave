#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* game_map_anonymous_ProcMapSeqBattle_CommitBarrier(_QWORD* result,
                                                          unsigned int);
__int64* BattleTarget_900490(__int64* result, __int16);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64* game_map_BonusExpList_Add(__int64* result, __int64*);
__int64 BattleArea_8b9d00(_QWORD);
__int64 BattleInfo_7905d0(_QWORD, _QWORD, _QWORD);
__int64 BattleInfo_790a40(_QWORD, _QWORD, _QWORD);
__int64 BattleInfo_796b00(__int64 result);
__int64 BattleInfo_79c940(__int64, unsigned int*);
__int64 BattleSide_7a2480(__int64);
__int64 BattleTarget_9001a0(_QWORD);
__int64 BonusExpList_7ff8f0(__int64, __int64);
__int64 Camera_7bf8f0(_QWORD);
__int64 CharacterBuilder_1084780(void);
__int64 Cursor_730ff0(_QWORD, _QWORD);
__int64 Cursor_734a80(__int64, __int64*);
__int64 Cursor_734a80_alt1(_QWORD, _QWORD) __asm__("Cursor_734a80");
__int64 EffectConst_961520(__int64*, __int64, __int64*, int, char, int32x2_t,
                           float);
__int64 GameRoutine_120c280(__int64 result, char);
__int64 GameRoutine_120f3d0(_QWORD);
__int64 GameRoutine_1226ec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12272a0(_QWORD, _QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14a3920(_QWORD, _QWORD);
__int64 GameRoutine_17cece0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658d60(__int64*);
__int64 GameRoutine_658d60_alt1(_QWORD) __asm__("GameRoutine_658d60");
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6d5fc0(__int64, int*);
__int64 GameRoutine_73a560(_QWORD);
__int64 GameRoutine_73a7a0(_QWORD);
__int64 GameRoutine_73f640(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_73f960(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_747a00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74cd60(_QWORD);
__int64 GameRoutine_74f280(_QWORD, _QWORD);
__int64 GameRoutine_76a120(_QWORD, _QWORD);
__int64 GameRoutine_76b550(__int64, __int64, __int64, char, long double,
                           long double);
__int64 GameRoutine_76bfe0(__int64, __int64);
__int64 GameRoutine_7992e0(_QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 GameRoutine_80eb10(char);
__int64 GameRoutine_8c49a0(__int64 result, __int64);
__int64 GameRoutine_9a48c0(__int64 result, __int64**);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, __int64);
__int64 GameRoutine_9b1850(__int64 result);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_c8b5a0(__int64, unsigned int, __int64, unsigned int,
                           unsigned int, unsigned int, unsigned int);
__int64 GameVariable_828dc0(__int64, unsigned __int64*, int);
__int64 IDeploy_7480e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 IRoute_750a00(_QWORD, _QWORD, _QWORD);
__int64 Image_72a260(_QWORD);
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b6c0(_QWORD);
__int64 MapUtil_7545a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapUtil_756d50(_QWORD, _QWORD, _QWORD);
__int64 ProcMapSeqBattle_7b6760(_QWORD);
__int64 Situation_7646c0(void);
__int64 Situation_7677a0(__int64*, float, float, float);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 UnitActor_81ab40(_QWORD, long double, double);
__int64 UnitActor_81ba20(_QWORD);
__int64 UnitNatives_753e40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Unit_6c7fa0_alt1(_QWORD, _QWORD) __asm__("Unit_6c7fa0");
__int64 Unit_6cd120(__int64, char, _DWORD*);
__int64 Unit_6dfe00(__int64 result, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_120f710(__int64*);
__int64 game_67ec40(__int64 result);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_8007e0(__int64*, __int64, char);
__int64 game_8c4fc0(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_HashString(__int64 result);
__int64 game_ItemSeq_GainBind_8afdf0(__int64, __int64, __int64);
__int64 game_UnitPool_Count(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_SetPollution(__int64, int);
__int64 game_map_76a520(__int64, __int64);
__int64 game_map_76a840(__int64, __int64);
__int64 game_map_790ba0(_QWORD);
__int64 game_map_799aa0(_QWORD, _QWORD);
__int64
    game_map_BonusExpList_Add_alt1(_QWORD,
                                   _QWORD) __asm__("game_map_BonusExpList_Add");
__int64
    game_map_anonymous_73fba0_alt1(_QWORD,
                                   _QWORD) __asm__("game_map_anonymous_73fba0");
__int64 game_map_anonymous_TrickEntity_TryBroken(__int64, __int64, _WORD*);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strstr(_QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN* GameData_212cf50;
extern _UNKNOWN GameData_1a853f5;
extern _UNKNOWN GameData_1a8d4eb;
extern _UNKNOWN GameData_1a90e42;
extern _UNKNOWN GameData_1aa0ada;
extern _UNKNOWN GameData_1aa85d1;
extern _UNKNOWN GameData_1aafd05;
extern _UNKNOWN GameData_1abf7e9;
extern _UNKNOWN GameData_1ada1ef;
extern _UNKNOWN GameData_1af4f8a;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21f4950;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83090;
extern __int128 GameData_21a6120;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f94210[])();
extern __int64 (*GameData_1f94928[])();
extern __int64 (*GameData_1f98c80[])();
extern __int64 (*GameData_1f98d10[])();
extern __int64 (*game_map_TRoute_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cec0;
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212d578[6];
extern __int64* GameData_21309c8[5];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_2131678;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd140;
extern __int64 GameData_21cd148;
extern __int64 GameData_21d1f50;
extern __int64 GameData_21ec7c8;
extern __int64 GameData_21f4908;
extern __int64 GameData_21f4910;
extern __int64 GameData_21f4920;
extern __int64 GameData_21f4928;
extern __int64 GameData_21f4938;
extern __int64 GameData_21f4940;
extern __int64 GameData_21f61c0;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_empty_item;
extern __int64 game_script_map_effect_g_effect_manager;
extern char GameData_21f4918;
extern char GameData_21f4930;
extern char GameData_21f4948;
float Unit_6c7fa0(__int64, __int64);
float math_Vec3_Angle(_QWORD, _QWORD);
void Cursor_730e40(__int64, __int64);
void GameRoutine_6c7cb0(__int64, __int64, __int64);
void ProcMapSeqBattle_7b79c0(__int64, int, int);
void __attribute__((noreturn)) GameRoutine_60a1f0(const char*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 game_map_anonymous_73e2a0(__int64 result, _QWORD* a2,
                                  unsigned __int16 a3, int a4, int a5,
                                  __int64 a6);
__int64 game_map_anonymous_73fba0(int* a1, char a2);
__int64 game_map_anonymous_76e470(__int64 result);
void game_map_anonymous_76ea20(__int64 a1);
__int64 game_map_anonymous_76fa20(__int64 a1);
__int64 game_map_anonymous_770a30(__int64 a1);
__int64 game_map_anonymous_7b1e60(__int64 result);
__int64 game_map_anonymous_7b1f40(__int64 result);
void game_map_anonymous_7b2f00(__int64 a1);
__int64 game_map_anonymous_7b3130(__int64 a1);
__int64 game_map_anonymous_7b3f80(__int64 a1);
__int64 game_map_anonymous_7b4560(__int64 a1);
__int64 game_map_anonymous_7b4800(__int64 result);
__int64 (**game_map_anonymous_7b4b00(__int64 a1))();
__int64 game_map_anonymous_7b5500(__int64 result);
__int64 game_map_anonymous_7b5740(__int64 result);
__int64 game_map_anonymous_814160(__int64 a1);
void __attribute__((noreturn)) game_map_anonymous_8184d0();
__int64 game_map_anonymous_9674c0(__int64 a1, __n128 a2);
void game_map_anonymous_9679c0(__int64 a1);

__int64 game_map_anonymous_73e2a0(__int64 result, _QWORD* a2,
                                  unsigned __int16 a3, int a4, int a5,
                                  __int64 a6)
{
  unsigned __int16 v6;
  unsigned int v8;
  int v9;
  _QWORD* v10;
  _QWORD* v11;
  bool v12;
  int v13;
  __int64 v14;
  int v15;
  __int16 v16;
  unsigned __int16 v17;
  char v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  bool v26;
  _BYTE* v27;
  int v28;
  _BYTE* v30;
  __int64 v31;
  unsigned int v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned int v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned int v68;
  unsigned int v69;
  __int64 v70;
  unsigned int v71;
  char* v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  char v90;
  int v91;
  int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned int v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned int v106;
  char v107;
  char v108;
  __int64 v109;
  __int64 v110;
  unsigned int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  long double v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned int v121;
  int v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  unsigned int v126;
  char v127;
  char v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  int v132;
  unsigned int v133;
  int v134;
  int v135;
  unsigned int v136;
  unsigned int v137;
  int v138;
  int v139;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64* v148;
  int v149;
  unsigned int v150;
  unsigned int v151;
  int v152;
  __int64 v153;
  int v154;
  int v155;
  int v156;
  unsigned int v157;
  float v158;
  float v159;
  float v160;
  __int128 v161;
  __int128 v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  char* v169;
  char* v170;
  __int64 v171;
  __int128* v172;
  int v173;
  __int64 v174;
  unsigned __int16 v175;
  __int64 v176;
  int v177;
  __int64 v178;
  _QWORD* v180;
  unsigned int v182;
  _QWORD* v183;
  unsigned int v184;
  __int64 v185;
  __int64 v186;
  float v187;
  _QWORD v188[2];
  int v189;
  __int64 v190;
  __int128 v191;
  _QWORD v192[17];
  int v193;
  char v194;
  int v195;
  __int128 v196;
  __int64 v197;
  int v198;
  char v199;
  __int64 v200;
  unsigned __int16 v201;
  __int128 v202;
  __int64 v203;
  __int128* v204;
  __int128* v205;
  __int64 v206;
  int v207;
  int v208;
  unsigned __int8 v209[20];
  int v210;
  int v211;

  if (a2 != (_QWORD*)result) {
    v6 = a3;
    v8 = a5;
    v9 = a4;
    v10 = a2;
    v11 = (_QWORD*)result;
    v12 = a4 <= 0 || a5 <= 0;
    v211 = a3;
    v13 = !v12;
    v210 = v13;
    while (1) {
      v14 = *v11;
      v189 = 0;
      v200 = 0;
      v201 = v6;
      v198 = 0;
      v199 = 0;
      v193 = 0;
      v192[0] = game_map_TRoute_vtable;
      v190 = 0;
      v191 = (__typeof__(v191)){0};
      v195 = 1;
      v188[0] = v14;
      v188[1] = 0;
      v194 = 9;
      if (v14 == 0) {
        v17 = v6;
        goto LABEL_20;
      }
      v15 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v15 = *(unsigned __int8*)(game_GameModeData_instance_ + 13);
      }
      v16 = *(_WORD*)(v14 + 50);
      if ((v16 & 7) == 0) {
        goto LABEL_9;
      }
      if (v15 == 2) {
        if ((v16 & 4) == 0) {
          goto LABEL_9;
        }
      }
      else if (v15 == 1) {
        if ((v16 & 2) == 0) {
          goto LABEL_9;
        }
      }
      else if (v15 != 0 || (v16 & 1) == 0) {
        goto LABEL_9;
      }
      result = (unsigned int)*(char*)(v14 + 52);
      v24 = *(unsigned __int8*)(v14 + 53);
      v25 = (unsigned int)(char)v24;
      v26 = *(_BYTE*)(v14 + 52) == 0 || v24 == 0;
      if (!v26) {
        v27 = (_BYTE*)*GameData_212ce98[0];
        if (*GameData_212ce98[0] != 0 &&
            ((unsigned __int8)v27[18] <=
                 (unsigned int)(unsigned __int8)(*(_BYTE*)(v14 + 52) -
                                                 v27[16]) ||
             (unsigned __int8)v27[19] <=
                 (unsigned int)(unsigned __int8)(v25 - v27[17]))) {
          goto LABEL_9;
        }
      }
      v28 = *(unsigned __int8*)(v14 + 55);
      if (*(_BYTE*)(v14 + 54) != 0 && v28 != 0) {
        v30 = (_BYTE*)*GameData_212ce98[0];
        if (*GameData_212ce98[0] != 0 &&
            ((unsigned __int8)v30[26] <=
                 (unsigned int)(unsigned __int8)(*(_BYTE*)(v14 + 54) -
                                                 v30[24]) ||
             (unsigned __int8)v30[27] <=
                 (unsigned int)(unsigned __int8)(v28 - v30[25]))) {
          goto LABEL_9;
        }
      }
      v17 = v211;
      if ((v211 & 8) != 0) {
        break;
      }
    LABEL_20:
      v18 = *(_BYTE*)(v14 + 48);
      v198 = 0;
      v199 = 0;
      v193 = 0;
      v195 = 1;
      v194 = v18;
      if (v210 != 0) {
        *(_QWORD*)&v191 = __PAIR64__(v8, v9);
        v19 = v9;
        v20 = v8;
      }
      else {
        v21 = *(char*)(v14 + 53);
        LODWORD(v191) = *(char*)(v14 + 52);
        DWORD1(v191) = v21;
        v19 = *(char*)(v14 + 54);
        v20 = *(char*)(v14 + 55);
      }
      *((_QWORD*)&v191 + 1) = __PAIR64__(v20, v19);
      result = GameRoutine_73a560(v188);
      if (result == 0) {
        if ((v17 & 0x8000) != 0) {
          goto LABEL_9;
        }
        goto LABEL_131;
      }
      v22 = *(unsigned __int8*)(v14 + 48);
      if ((unsigned int)(v22 - 1) >= 2) {
        if (v22 == 9) {
          v23 = *(_QWORD*)(result + 24);
        }
        else {
          v23 = *(_QWORD*)(result + 24) + 96LL;
        }
      }
      else {
        v23 = *(_QWORD*)(result + 24) + 192LL;
      }
      v32 = *(unsigned __int8*)(result + 417);
      v186 = result;
      if ((v17 & 0x8000) != 0) {
        result = GameRoutine_73f960(&v202, (unsigned int)v191, DWORD1(v191),
                                    *(unsigned __int8*)(result + 417));
        if ((_DWORD)v202 != 0) {
          if ((v202 & 1) != 0 && v22 != 3 && v22 != 0) {
            goto LABEL_9;
          }
          if ((v202 & 2) != 0) {
            if (v22 != 1) {
              goto LABEL_9;
            }
          }
          else if (v22 == 2) {
            goto LABEL_107;
          }
          if ((v202 & 4) != 0) {
            goto LABEL_9;
          }
        LABEL_107:
          if ((v202 & 8) != 0 && v22 != 3 && v22 != 0) {
            goto LABEL_9;
          }
        }
        v75 = *(unsigned __int8*)(v14 + 48);
        result = GameRoutine_73f960(&v202, DWORD2(v191), HIDWORD(v191), v32);
        if ((_DWORD)v202 != 0) {
          if ((v202 & 1) != 0 && v75 != 3 && v75 != 0) {
            goto LABEL_9;
          }
          if ((v202 & 2) != 0) {
            if (v75 != 1) {
              goto LABEL_9;
            }
          }
          else if (v75 == 2) {
            goto LABEL_166;
          }
          if ((v202 & 4) != 0) {
            goto LABEL_9;
          }
        LABEL_166:
          if ((v202 & 8) != 0 && v75 != 3 && v75 != 0) {
            goto LABEL_9;
          }
        }
        result = GameRoutine_73f640(v186, DWORD2(v191), HIDWORD(v191), v32, 0);
        if ((result & 1) == 0) {
          goto LABEL_9;
        }
        LODWORD(v202) = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                                   game_g_shared_system_skills_ptr + 8) &
                        0xFFF;
        if ((game_HasSkill(v23, &v202) & 1) == 0) {
          v110 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
          v111 = DWORD2(v191) + 32 * HIDWORD(v191);
          if (v111 >= 0x400) {
            v111 = 0;
          }
          v112 = *(__int16*)(v110 + 2LL * v111 + 12392);
          if (v112 < 0 || (v113 = *(_QWORD*)(v110 + 8)) == 0 ||
              (v114 = v113 + 144LL * (unsigned int)v112,
               ((*(__int64 (**)(__int64))(*(_QWORD*)v114 + 16LL))(v114) & 1) ==
                   0) ||
              (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v114 + 168LL))(
                  v114) == 9 ||
              (result = (*(__int64 (**)(__int64))(*(_QWORD*)v114 + 224LL))(
                   v114)) == 0) {
            result = **(_QWORD**)(*GameData_212c930 + 64);
          }
          if (*(_BYTE*)(result + 57) == 14) {
            goto LABEL_9;
          }
        }
      }
      result = GameRoutine_73f640(v186, (unsigned int)v191, DWORD1(v191), v32,
                                  v32 > 1);
      if ((result & 1) != 0) {
        if ((_QWORD)v191 == *((_QWORD*)&v191 + 1)) {
          result =
              GameRoutine_73f960(&v202, (unsigned int)v191, DWORD1(v191), v32);
          if ((_DWORD)v202 == 0) {
            goto LABEL_131;
          }
        }
        v33 = (_QWORD*)*GameData_212ce88[0];
        if (*GameData_212ce88[0] != 0) {
          v34 = v33[1344];
          v35 = v33[1343];
          v36 = (_QWORD*)*GameData_212ce88[0];
          v180 = v11;
          v37 = ((v34 - v35) << 6) - 1;
          if (v34 == v35) {
            v37 = 0;
          }
          v38 = v33[1347] + v33[1346];
          if (v37 == v38) {
            GameRoutine_74cd60(v33 + 1342);
            v35 = v36[1343];
            v38 = v36[1347] + v36[1346];
          }
          v39 = v36 + 337;
          v183 = v36;
          *(_QWORD*)(*(_QWORD*)(v35 + 8 * (v38 >> 9)) + 8 * (v38 & 0x1FF)) =
              v36[1];
          v36[1] = v36 + 337;
          v207 = 0;
          LODWORD(v202) = 0;
          HIDWORD(v202) = v32;
          LODWORD(v203) = 0;
          v204 = nullptr;
          v205 = nullptr;
          v206 = 0;
          v41 = v191;
          v40 = DWORD1(v191);
          ++v36[1347];
          if ((__int16)v17 > -1) {
            v42 = 1;
          }
          else {
            v42 = 3;
          }
          BYTE4(v202) = *(_BYTE*)(v14 + 48);
          BYTE5(v202) = *(_BYTE*)(v186 + 48);
          DWORD2(v202) = 100;
          if (&v204 != (__int128**)v23) {
            GameRoutine_7fb7c0(&v204);
          }
          v43 = *(_DWORD*)(v23 + 24);
          LODWORD(v202) = v42;
          v207 = v43;
          IDeploy_7480e0(v183, v41, v40, &v202);
          if (v204 != nullptr) {
            v205 = v204;
            v44 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v204);
          }
          v10 = a2;
          if ((GameRoutine_747a00(v183[1], DWORD2(v191), HIDWORD(v191), 0, 0) &
               1) == 0) {
            v45 = v183[1344];
            v46 = v183[1343];
            v47 = ((v45 - v46) << 6) - 1;
            if (v45 == v46) {
              v47 = 0;
            }
            v48 = v183[1347] + v183[1346];
            if (v47 == v48) {
              GameRoutine_74cd60(v183 + 1342);
              v46 = v183[1343];
              v48 = v183[1347] + v183[1346];
            }
            v175 = v17;
            *(_QWORD*)(*(_QWORD*)(v46 + 8 * (v48 >> 9)) + 8 * (v48 & 0x1FF)) =
                v183[1];
            v183[1] = v183 + 672;
            v207 = 0;
            LODWORD(v202) = 0;
            HIDWORD(v202) = v32;
            LODWORD(v203) = 0;
            v204 = nullptr;
            v205 = nullptr;
            v206 = 0;
            v49 = DWORD2(v191);
            v50 = HIDWORD(v191);
            ++v183[1347];
            BYTE4(v202) = *(_BYTE*)(v14 + 48);
            BYTE5(v202) = *(_BYTE*)(v186 + 48);
            DWORD2(v202) = 100;
            if (&v204 != (__int128**)v23) {
              GameRoutine_7fb7c0(&v204);
            }
            v176 = v14;
            v177 = v9;
            v178 = a6;
            v207 = *(_DWORD*)(v23 + 24);
            IDeploy_7480e0(v183, v49, v50, &v202);
            if (v204 != nullptr) {
              v205 = v204;
              v51 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v51 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v204);
            }
            v52 = *GameData_212ce98[0];
            v53 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
            v184 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
            if (v53 <= v184) {
              v54 = *(unsigned __int8*)(v52 + 28);
              v55 = *(unsigned __int8*)(v52 + 30);
              v182 = v54;
              if (v54 <= v55) {
                v132 = 32 * v53;
                v133 = v55 + 1;
                v134 = 100;
                v135 = 100;
                do {
                  v136 = v182;
                  do {
                    if ((GameRoutine_747a00(v183 + 672, v136, v53, 0, 0) & 1) !=
                            0 &&
                        (GameRoutine_747a00(v39, v136, v53, 0, 0) & 1) != 0) {
                      v137 = v132 + v136 >= 0x400 ? 0 : v132 + v136;
                      v138 = *((unsigned __int8*)v183 + v137 + 5440);
                      if (v135 >= v138) {
                        v139 = *((unsigned __int8*)v183 + v137 + 2760);
                        if (v135 != v138 || v134 >= v139) {
                          *((_QWORD*)&v191 + 1) = __PAIR64__(v53, v136);
                          v135 = v138;
                          v134 = v139;
                        }
                      }
                    }
                    ++v136;
                  } while (v133 != v136);
                  v132 += 32;
                  v26 = v53++ == v184;
                } while (!v26);
              }
            }
            a6 = v178;
            v9 = v177;
            v10 = a2;
            v14 = v176;
            v17 = v175;
            v56 = v183[1347];
            v57 = v183[1346];
            v58 = v183[1343];
            v59 = v183[1344];
            v26 = v59 == v58;
            v60 = v56 - 1 + v57;
            v61 = v60 >> 9;
            v62 = v60 & 0x1FF;
            v63 = ((v59 - v58) << 6) - 1;
            v64 = *(_QWORD*)(v58 + 8 * v61);
            if (v26) {
              v63 = 0;
            }
            v65 = *(_QWORD*)(v64 + 8 * v62);
            v183[1347] = v56 - 1;
            v183[1] = v65;
            if ((unsigned __int64)(v63 - (v56 + v57) + 1) >= 0x400) {
              v66 = *(_QWORD*)(v59 - 8);
              if (v66 != 0) {
                v67 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v67 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v66);
                v59 = v183[1344];
              }
              v183[1344] = v59 - 8;
            }
          }
          v199 = 0;
          v193 = 0;
          v198 = 0;
          *(_QWORD*)&v196 = v191;
          v197 = v191;
          *((_QWORD*)&v196 + 1) = v191;
          IRoute_750a00(v192, DWORD2(v191), HIDWORD(v191));
          if (v193 < 1) {
            v71 = 0;
          }
          else {
            v68 = DWORD1(v196);
            v69 = v196;
            v70 = 0;
            v71 = 0;
            do {
              v73 = *((unsigned __int8*)&v192[1] + v70);
              v74 = v200;
              if (v200 == 0) {
                v74 = *GameData_212ce88[0];
                v200 = *GameData_212ce88[0];
              }
              v72 = (char*)GameData_212cf50 + v73;
              v69 += *v72;
              v68 += v72[256];
              ++v70;
              if ((GameRoutine_747a00(*(_QWORD*)(v74 + 8), v69, v68, 0, 0) &
                   1) != 0) {
                v71 = v70;
              }
            } while (v70 < v193);
          }
          result = GameRoutine_74f280(v192, v71);
          v8 = a5;
          v11 = v180;
          v76 = v183[1347];
          v77 = v183[1346];
          v78 = v183[1343];
          v79 = v183[1344];
          v26 = v79 == v78;
          v80 = v76 - 1 + v77;
          v81 = v80 >> 9;
          v82 = v80 & 0x1FF;
          v83 = ((v79 - v78) << 6) - 1;
          v84 = *(_QWORD*)(v78 + 8 * v81);
          if (v26) {
            v83 = 0;
          }
          v85 = *(_QWORD*)(v84 + 8 * v82);
          v183[1347] = v76 - 1;
          v183[1] = v85;
          if ((unsigned __int64)(v83 - (v76 + v77) + 1) >= 0x400) {
            v86 = *(_QWORD*)(v79 - 8);
            if (v86 != 0) {
              v87 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v87 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v87, v86);
              v79 = v183[1344];
            }
            v183[1344] = v79 - 8;
          }
        }
        if (v193 >= 1) {
          v191 = v196;
          goto LABEL_131;
        }
      }
      if ((v17 & 0x8000) != 0) {
        goto LABEL_9;
      }
      result = MapUtil_7545a0((char*)&v191 + 8, (char*)&v191 + 12,
                              *(unsigned __int8*)(v14 + 48), v186, DWORD2(v191),
                              HIDWORD(v191), 0);
      if ((result & 1) == 0) {
        goto LABEL_9;
      }
      *(_QWORD*)&v191 = *((_QWORD*)&v191 + 1);
    LABEL_131:
      v88 = v188[0];
      v89 = v11;
      v90 = v201;
      if (*(_BYTE*)(v188[0] + 48LL) != 0) {
        result = game_map_anonymous_73fba0_alt1(v188, v201 & 1);
        v190 = result;
        v11 = v89;
        if (result != 0) {
          goto LABEL_290;
        }
        goto LABEL_9;
      }
      v91 = *(unsigned __int8*)(v188[0] + 58LL);
      if (v91 == 2) {
        v92 = 640;
      }
      else {
        v92 = 0;
      }
      v93 = *(_QWORD*)(v188[0] + 40LL);
      if (v93 == 0 && v91 == 2) {
        v93 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v93 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
      }
      if ((*(_WORD*)(v188[0] + 50LL) & 0x10) == 0) {
        if (v91 != 2) {
          v11 = v89;
          if (*(_BYTE*)(v188[0] + 58LL) != 0) {
            result = GameRoutine_73a7a0(v188[0]);
            v190 = result;
            if (result == 0) {
              goto LABEL_9;
            }
            v94 = result;
            v95 = *(unsigned __int8*)(v188[0] + 48LL);
            v96 = *GameData_21309c8[0];
            if (*GameData_21309c8[0] != 0) {
              v97 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v97 = *(_QWORD*)(game_GameModeData_instance_ + 96);
              }
              if (*(_QWORD*)(v94 + 392) == v97 ||
                  (*(_BYTE*)(v94 + 418) & 8) != 0) {
                LOBYTE(v100) = 0;
              }
              else {
                v98 = *GameData_21309c8[0];
                v99 = *(unsigned __int8*)(v188[0] + 48LL);
                LODWORD(v202) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                           game_g_shared_system_skills_ptr) &
                                0xFFF;
                v100 = game_HasSkill(v94 + 1744, &v202) ^ 1;
                v95 = v99;
                v11 = v89;
                v96 = v98;
              }
              GameRoutine_1226ec0(v96, v94, v95, v100 & 1);
              LODWORD(v95) = *(unsigned __int8*)(v188[0] + 48LL);
            }
            v141 = *(_QWORD*)(v94 + 392);
            v209[0] = v95;
            v142 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v142 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            if (v141 != v142 && (*(_BYTE*)(v94 + 418) & 8) == 0) {
            LABEL_246:
              LODWORD(v202) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                         game_g_shared_system_skills_ptr) &
                              0xFFF;
              if ((game_HasSkill(v94 + 1744, &v202) & 1) != 0 && v209[0] != 9) {
              LABEL_248:
                v145 = 0;
                goto LABEL_251;
              }
            LABEL_250:
              v145 = 1;
            LABEL_251:
              GameRoutine_6c47b0(v94, v209, v145, 0);
              v92 = 0;
            LABEL_252:
              v146 = v188[0];
              *(_WORD*)(v94 + 584) = *(_WORD*)(v188[0] + 54LL);
              *(_BYTE*)(v94 + 1981) = *(_BYTE*)(v146 + 292);
              if (*GameData_212ce90[0] != 0) {
                v147 = *(_QWORD*)(v94 + 440);
                if (v147 != 0 && *(_BYTE*)(v147 + 16) == 0) {
                  nn_os_LockMutex(&game_g_random_mutex);
                  v148 = game_map_MapRandom_instance__ptr[0];
                  v149 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                    (unsigned __int64)((__int128*)0x10LL) + 8);
                  v150 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
                  v151 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL)) ^
                      (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((__int128*)0x10LL))
                       << 11);
                  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((__int128*)0x10LL)) =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 4);
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v148 + 4) =
                      v149;
                  v152 = (v151 >> 8) ^ (v150 >> 19) ^ v151 ^ v150;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v148 + 8) =
                      v150;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v148 + 12) =
                      v152;
                  nn_os_UnlockMutex(&game_g_random_mutex);
                  *(_BYTE*)(v94 + 1980) = v152;
                  v11 = v89;
                }
              }
              v153 = *(_QWORD*)(v94 + 8);
              if (v153 != 0) {
                v154 = *(char*)(v153 + 584);
                if ((v154 & 0x80000000) == 0) {
                  v155 = *(char*)(v153 + 585);
                  if ((v155 & 0x80000000) == 0) {
                    v156 = *(_DWORD*)(v153 + 592);
                    v157 = v155 | 0x100;
                    v158 = (float)(unsigned int)(v156 - 1) * 2.5;
                    v159 =
                        (float)((float)((float)(v154 | 0x100u) * 5.0) + 2.5) +
                        -0x1.4000000000000p+10;
                    if (v156 <= 0) {
                      v158 = 0.0;
                    }
                    v160 = v159 + v158;
                    *(_QWORD*)&v161 = COERCE_UNSIGNED_INT(v159 + v158);
                    v185 = COERCE_UNSIGNED_INT(
                        (float)((float)((float)((float)v157 * 5.0) + 2.5) +
                                -0x1.4000000000000p+10) +
                        v158);
                    v187 = v160;
                    *((_QWORD*)&v161 + 1) = v185;
                    v202 = v161;
                    *(_QWORD*)&v162 = __PAIR64__(
                        COERCE_UNSIGNED_INT(Unit_6c7fa0(v153, (__int64)&v202)),
                        LODWORD(v187));
                    *((_QWORD*)&v162 + 1) = v185;
                    v202 = v162;
                    Cursor_734a80(v94 + 48, (__int64*)&v202);
                    UnitActor_81ba20(v94);
                  }
                }
                if (*(_QWORD*)(v94 + 264) != 0) {
                  CharacterBuilder_1084780();
                }
              }
              v163 = *(_DWORD*)(v94 + 416);
              if ((v163 & 0x10000000) == 0) {
                *(_DWORD*)(v94 + 416) = v163 | 0x10000000;
                game_6c51e0(v94);
                GameRoutine_6c6da0(v94);
                game_6c6ec0(v94);
                *(_DWORD*)(v94 + 416) &= ~0x10000000u;
              }
              result = v190;
              if (v190 == 0) {
                goto LABEL_9;
              }
              goto LABEL_267;
            }
          }
          else {
            *(_QWORD*)&v202 = v93;
            *(_DWORD*)v209 = 80;
            result = game_UnitPool_Find_6ead60(&v202, v209);
            v190 = result;
            if (result == 0) {
              goto LABEL_9;
            }
            v94 = result;
            v95 = *(unsigned __int8*)(v188[0] + 48LL);
            v118 = *GameData_21309c8[0];
            if (*GameData_21309c8[0] != 0) {
              v119 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v119 = *(_QWORD*)(game_GameModeData_instance_ + 96);
              }
              if (*(_QWORD*)(v94 + 392) == v119 ||
                  (*(_BYTE*)(v94 + 418) & 8) != 0) {
                LOBYTE(v122) = 0;
              }
              else {
                v120 = *GameData_21309c8[0];
                v121 = *(unsigned __int8*)(v188[0] + 48LL);
                LODWORD(v202) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                           game_g_shared_system_skills_ptr) &
                                0xFFF;
                v122 = game_HasSkill(v94 + 1744, &v202) ^ 1;
                v95 = v121;
                v11 = v89;
                v118 = v120;
              }
              GameRoutine_1226ec0(v118, v94, v95, v122 & 1);
              LODWORD(v95) = *(unsigned __int8*)(v188[0] + 48LL);
            }
            v143 = *(_QWORD*)(v94 + 392);
            v209[0] = v95;
            v144 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v144 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            if (v143 != v144 && (*(_BYTE*)(v94 + 418) & 8) == 0) {
              goto LABEL_246;
            }
          }
          if ((_DWORD)v95 != 9) {
            goto LABEL_248;
          }
          goto LABEL_250;
        }
        *(_QWORD*)&v202 = v93;
        *(_DWORD*)v209 = 80;
        v109 = game_UnitPool_Find_6ead60(&v202, v209);
        v190 = v109;
        v11 = v89;
        if (v109 != 0) {
          v94 = v109;
          v92 = 640;
        }
        else {
          LODWORD(v202) = 16;
          result = game_UnitPool_GetFirst(&v202);
          v190 = result;
          if (result == 0) {
            goto LABEL_9;
          }
          v94 = result;
          v92 = 0;
        }
        v102 = *(unsigned __int8*)(v188[0] + 48LL);
        v123 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          v124 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v124 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          if (*(_QWORD*)(v94 + 392) == v124 ||
              (*(_BYTE*)(v94 + 418) & 8) != 0) {
            v128 = 0;
          }
          else {
            v125 = *GameData_21309c8[0];
            v126 = *(unsigned __int8*)(v188[0] + 48LL);
            LODWORD(v202) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
            v127 = game_HasSkill(v94 + 1744, &v202);
            v102 = v126;
            v10 = a2;
            v128 = v127 ^ 1;
            v123 = v125;
            v11 = v89;
          }
          GameRoutine_1226ec0(v123, v94, v102, v128 & 1);
          LODWORD(v102) = *(unsigned __int8*)(v188[0] + 48LL);
        }
        v129 = *(_QWORD*)(v94 + 392);
        v209[0] = v102;
        v130 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v130 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (v129 != v130 && (*(_BYTE*)(v94 + 418) & 8) == 0) {
        LABEL_212:
          LODWORD(v202) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                     game_g_shared_system_skills_ptr) &
                          0xFFF;
          if ((game_HasSkill(v94 + 1744, &v202) & 1) != 0 && v209[0] != 9) {
          LABEL_214:
            v131 = 0;
          LABEL_217:
            GameRoutine_6c47b0(v94, v209, v131, 0);
            goto LABEL_252;
          }
        LABEL_216:
          v131 = 1;
          goto LABEL_217;
        }
      LABEL_215:
        if ((_DWORD)v102 != 9) {
          goto LABEL_214;
        }
        goto LABEL_216;
      }
      *(_QWORD*)&v202 = v93;
      *(_DWORD*)v209 = 80;
      v101 = game_UnitPool_Find_6ead60(&v202, v209);
      v190 = v101;
      if (v101 != 0) {
        v94 = v101;
        v102 = *(unsigned __int8*)(v188[0] + 48LL);
        v103 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          v11 = v89;
          v104 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v104 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          if (*(_QWORD*)(v94 + 392) == v104 ||
              (*(_BYTE*)(v94 + 418) & 8) != 0) {
            v108 = 0;
          }
          else {
            v105 = *GameData_21309c8[0];
            v106 = *(unsigned __int8*)(v188[0] + 48LL);
            LODWORD(v202) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
            v107 = game_HasSkill(v94 + 1744, &v202);
            v102 = v106;
            v10 = a2;
            v108 = v107 ^ 1;
            v103 = v105;
            v11 = v89;
          }
          GameRoutine_1226ec0(v103, v94, v102, v108 & 1);
          LODWORD(v102) = *(unsigned __int8*)(v188[0] + 48LL);
        }
        else {
          v11 = v89;
        }
        v116 = *(_QWORD*)(v94 + 392);
        v209[0] = v102;
        v117 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v117 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (v116 != v117 && (*(_BYTE*)(v94 + 418) & 8) == 0) {
          goto LABEL_212;
        }
        goto LABEL_215;
      }
      result = game_map_anonymous_73fba0_alt1(v188, v90 & 1);
      v190 = result;
      v11 = v89;
      if (result == 0) {
        goto LABEL_9;
      }
    LABEL_267:
      *(_DWORD*)(result + 416) |= v92;
      v164 = *(unsigned __int8*)(v88 + 57);
      if (*(_BYTE*)(v88 + 48) != 0) {
        v165 = 4;
      }
      else {
        v165 = 1;
      }
      if (*(_BYTE*)(v88 + 57) == 0) {
        v164 = v165;
      }
      if (v164 > 5) {
        if (v164 > 8) {
          if (v164 == 9) {
            LODWORD(v115) = 1124532224;
            goto LABEL_289;
          }
          if (v164 == 12) {
            LODWORD(v115) = 1110704128;
            goto LABEL_289;
          }
        }
        else {
          if (v164 == 6) {
            LODWORD(v115) = 1134395392;
            goto LABEL_289;
          }
          if (v164 == 8) {
            LODWORD(v115) = 1119092736;
            goto LABEL_289;
          }
        }
      }
      else {
        if (v164 <= 1) {
          LODWORD(v115) = 1127481344;
          goto LABEL_289;
        }
        if (v164 == 2) {
          LODWORD(v115) = 1132920832;
          goto LABEL_289;
        }
        if (v164 == 3) {
          LODWORD(v115) = 1130430464;
          goto LABEL_289;
        }
      }
      *(_QWORD*)&v115 = 0;
    LABEL_289:
      UnitActor_81ab40(result, v115, 0.0);
      result = v190;
      if (v190 != 0) {
      LABEL_290:
        v166 = DWORD2(v191);
        if ((DWORD2(v191) & 0x80000000) != 0) {
          v166 = *(char*)(result + 584);
          v167 = HIDWORD(v191);
          if ((HIDWORD(v191) & 0x80000000) != 0) {
            goto LABEL_300;
          }
        }
        else {
          v167 = HIDWORD(v191);
          if ((HIDWORD(v191) & 0x80000000) == 0) {
            goto LABEL_292;
          }
        LABEL_300:
          v167 = *(char*)(result + 585);
        }
      LABEL_292:
        if ((*(_WORD*)(result + 417) & 0x4004) == 0) {
          v168 = v9;
          v169 = *(char**)(result + 600);
          v170 = *(char**)(result + 608);
          v203 = result;
          v171 = *(_QWORD*)(*GameData_212ce98[0] + 96);
          *(_QWORD*)&v202 = GameData_1f94210;
          *((_QWORD*)&v202 + 1) = v171;
          v172 = &v202;
          v205 = &v202;
          if (v169 == v170) {
            goto LABEL_301;
          }
          do {
            v173 = v166 + *v169;
            v208 = v167 + v169[1];
            *(_DWORD*)v209 = v173;
            if (v205 == nullptr) {
              GameRoutine_60a310(0);
            }
            (*(void (**)(__int128*, unsigned __int8*, int*))(
                *(_QWORD*)v205 + 48LL))(v205, v209, &v208);
            v169 += 4;
          } while (v169 != v170);
          v172 = v205;
          if (v205 == &v202) {
          LABEL_301:
            v10 = a2;
            v174 = 32;
            v9 = v168;
          LABEL_302:
            (*(void (**)(__int128*))(*(_QWORD*)v172 + v174))(v172);
          }
          else {
            v10 = a2;
            v9 = v168;
            if (v205 != nullptr) {
              v174 = 40;
              goto LABEL_302;
            }
          }
        }
        result = *(_QWORD*)(a6 + 32);
        v11 = v89;
        if (result != 0) {
          result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 48LL))(
              result, v188);
        }
      }
    LABEL_9:
      v6 = v211;
      if (++v11 == v10) {
        return result;
      }
    }
    v209[0] = 0;
    *(_QWORD*)&v202 = GameData_1f94928;
    *((_QWORD*)&v202 + 1) = v209;
    v205 = &v202;
    MapUtil_756d50(result, v25, &v202);
    result = (__int64)v205;
    if (v205 == &v202) {
      v31 = 32;
    }
    else {
      if (v205 == nullptr) {
      LABEL_162:
        if (v209[0] == 0) {
          goto LABEL_9;
        }
        v14 = v188[0];
        v17 = v201;
        goto LABEL_20;
      }
      v31 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v205 + v31))((__int64)v205);
    goto LABEL_162;
  }
  return result;
}

__int64 game_map_anonymous_73fba0(int* a1, char a2)
{
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _BOOL8 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  float v24;
  __int128 v25;
  __int128 v26;
  int v27;
  __int64 v29;
  unsigned int v30;
  __int128 v31;
  _BYTE v32[4];

  LODWORD(v31) = 15;
  v4 = game_UnitPool_Count(&v31);
  if ((a2 & 1) != 0) {
    v5 = 160;
  }
  else {
    v5 = 128;
  }
  if (v4 >= v5) {
    return 0;
  }
  v6 = *(_QWORD*)(GameData_21ca310 + 56);
  v7 = *(_QWORD*)(v6 + 556216);
  if (v7 != 0) {
    GameRoutine_6d5fc0(*(_QWORD*)(v6 + 556216), a1);
    v8 = game_GameModeData_instance_;
    v9 = *(unsigned __int8*)(*(_QWORD*)a1 + 48LL);
    v10 = *(_QWORD*)(v7 + 392);
    v32[0] = *(_BYTE*)(*(_QWORD*)a1 + 48LL);
    if (game_GameModeData_instance_ != 0) {
      v8 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v11 = v10 != v8 && (*(_BYTE*)(v7 + 418) & 8) == 0 &&
              (LODWORD(v31) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                         game_g_shared_system_skills_ptr) &
                              0xFFF,
               (game_HasSkill(v7 + 1744, &v31) & 1) == 0) ||
          v9 == 9;
    GameRoutine_6c47b0(v7, v32, v11, 0);
    *(_WORD*)(v7 + 584) = *(_WORD*)(*(_QWORD*)a1 + 54LL);
    *(_BYTE*)(v7 + 1981) = *(_BYTE*)(*(_QWORD*)a1 + 292LL);
    if (GameData_21ca2f8 != 0) {
      v12 = *(_QWORD*)(v7 + 440);
      if (v12 != 0 && *(_BYTE*)(v12 + 16) == 0) {
        nn_os_LockMutex(&game_g_random_mutex);
        v13 = game_map_MapRandom_instance__ptr[0];
        v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8);
        v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
        v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL)) ^
              (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((__int128*)0x10LL))
               << 11);
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) =
            *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 4) = v14;
        v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8) = v15;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 12) = v17;
        nn_os_UnlockMutex(&game_g_random_mutex);
        *(_BYTE*)(v7 + 1980) = v17;
      }
    }
    v18 = *(_QWORD*)(v7 + 8);
    if (v18 != 0) {
      v19 = *(char*)(v18 + 584);
      if ((v19 & 0x80000000) == 0) {
        v20 = *(char*)(v18 + 585);
        if ((v20 & 0x80000000) == 0) {
          v21 = *(_DWORD*)(v18 + 592);
          v22 = v19 | 0x100;
          v23 = v20 | 0x100;
          v24 = (float)(unsigned int)(v21 - 1) * 2.5f;
          if (v21 <= 0) {
            v24 = 0.0f;
          }
          *(_QWORD*)&v25 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v22 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v24);
          v29 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v23 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v24);
          *(float*)&v30 = (float)((float)((float)((float)v22 * 5.0f) + 2.5f) +
                                  -0x1.4000000000000p+10f) +
                          v24;
          *((_QWORD*)&v25 + 1) = v29;
          v31 = v25;
          *(_QWORD*)&v26 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v18, (__int64)&v31)), v30);
          *((_QWORD*)&v26 + 1) = v29;
          v31 = v26;
          Cursor_734a80(v7 + 48, (__int64*)&v31);
          UnitActor_81ba20(v7);
        }
      }
      if (*(_QWORD*)(v7 + 264) != 0) {
        CharacterBuilder_1084780();
      }
    }
    v27 = *(_DWORD*)(v7 + 416);
    if ((v27 & 0x10000000) == 0) {
      *(_DWORD*)(v7 + 416) = v27 | 0x10000000;
      game_6c51e0(v7);
      GameRoutine_6c6da0(v7);
      game_6c6ec0(v7);
      *(_DWORD*)(v7 + 416) &= ~0x10000000u;
    }
    GameRoutine_120f3d0(v7);
    if (GameData_22400f8 != 0) {
      GameRoutine_12272a0(GameData_22400f8, v7);
    }
  }
  return v7;
}

__int64 game_map_anonymous_76e470(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  float v11;
  __int128 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int128 v18;

  v1 = *(_QWORD*)(result + 152);
  if (v1 != 0) {
    v3 = *(_DWORD*)(result + 160);
    v2 = *(_DWORD*)(result + 164);
    v4 = *(_QWORD*)(result + 152);
    *(_BYTE*)(v1 + 584) = v3;
    *(_BYTE*)(v1 + 585) = v2;
    GameRoutine_6c7cb0(v4, (unsigned int)(char)v3, (unsigned int)(char)v2);
    v5 = *(_QWORD*)(v1 + 8);
    if (v5 != 0) {
      v6 = *(char*)(v5 + 584);
      if ((v6 & 0x80000000) == 0) {
        v7 = *(char*)(v5 + 585);
        if ((v7 & 0x80000000) == 0) {
          v8 = *(_DWORD*)(v5 + 592);
          v9 = v6 | 0x100;
          v10 = v7 | 0x100;
          v11 = (float)(unsigned int)(v8 - 1) * 2.5f;
          if (v8 <= 0) {
            v11 = 0.0f;
          }
          *(_QWORD*)&v12 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v9 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v11);
          v16 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v10 * 5.0f) + 2.5f) +
                      -0x1.4000000000000p+10f) +
              v11);
          *(float*)&v17 = (float)((float)((float)((float)v9 * 5.0f) + 2.5f) +
                                  -0x1.4000000000000p+10f) +
                          v11;
          *((_QWORD*)&v12 + 1) = v16;
          v18 = v12;
          *(_QWORD*)&v13 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v5, (__int64)&v18)), v17);
          *((_QWORD*)&v13 + 1) = v16;
          v18 = v13;
          Cursor_734a80(v1 + 48, (__int64*)&v18);
          UnitActor_81ba20(v1);
        }
      }
      if (*(_QWORD*)(v1 + 264) != 0) {
        CharacterBuilder_1084780();
      }
    }
    v14 = GameData_21ca300;
    v15 = *(_QWORD*)(GameData_21ca300 + 96);
    Image_72b4a0(v15);
    Image_72b6c0(v15);
    return Image_72a260(*(_QWORD*)(v14 + 152));
  }
  return result;
}

void game_map_anonymous_76ea20(__int64 a1)
{

#pragma clang fp contract(off)
  long double v2;
  long double v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  long double v10;
  long double v11;
  int v12;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v1", "=w"));
  Cursor_730e40(*(_QWORD*)(*GameData_212cfc0[0] + 48), *(_QWORD*)(a1 + 152)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v4 = *(_QWORD*)(a1 + 152);
  if (v4 != 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v6 = 2)
             : (v6 = 3),
         (v6 & v5) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_16;
      }
      v7 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      LODWORD(v3) = *(_DWORD*)(v7 + 168);
      if (*(float*)(v7 + 172) == *(float*)&v3) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      else {
        v2 = *(long double*)(v7 + 208);
      }
      LODWORD(v2) = HIDWORD(v2);
      if (*((float*)&v2 + 3) != 0x1.0000000000000p+0f ||
          (*(__n128*)& v2 = ((__n128 (*)(unsigned __int64, float)) *
                             (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
               v7 + 160, *((float*)&v2 + 3)),
           LODWORD(v2) = HIDWORD(v2),
           *((float*)&v2 + 3) != 0x1.0000000000000p+0f)) {
      LABEL_16:
        GameRoutine_76b550(a1, v4, *(_QWORD*)(*(_QWORD*)(v4 + 392) + 672LL), 1,
                           v2, v3),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v1", "=w"));
        return;
      }
    }
    v8 = *(unsigned __int8*)(v4 + 176);
    v12 = 0;
    if (v8 == 1) {
      v9 = *(_QWORD*)(v4 + 152);
      *(_QWORD*)&v2 = 0;
    LABEL_19:
      *(_QWORD*)&v3 = 0;
      (*(void (**)(__int64, long double, long double))(v9 + 24))(v4 + 152, v2,
                                                                 v3),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v1", "=w"));
    LABEL_20:
      *(_QWORD*)(v4 + 160) = 0;
      *(_WORD*)(v4 + 176) = 256;
      *(_WORD*)(v4 + 20) |= 8u;
      return;
    }
    if (*(float*)(v4 + 160) > 0x0.0p+0f) {
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 152) + 16LL))(v4 + 152),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v9 = *(_QWORD*)(v4 + 152);
      goto LABEL_19;
    }
    if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(v4 + 152) + 8LL))(
             v4 + 152, &v12, v4 + 184) &
         1) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 152) + 16LL))(v4 + 152),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v1", "=w"));
      LODWORD(v10) = v12;
      (*(void (**)(__int64, long double, long double))(
          *(_QWORD*)(v4 + 152) + 24LL))(v4 + 152, v11, v10),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v2 = COERCE_AS(__typeof__(v2), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v1", "=w"));
      goto LABEL_20;
    }
  }
}

__int64 game_map_anonymous_76fa20(__int64 a1)
{
  __int64 v1;
  char v4;
  __int64 result;
  struct {
    unsigned __int64 v6;
    int v7;
    char v8;
  } v6_;

  v1 = *(_QWORD*)(a1 + 152);
  if (*(_BYTE*)(a1 + 164) != 3 && *(_WORD*)(v1 + 492) == 0 &&
      *(_BYTE*)(v1 + 496) == 0) {
    LODWORD(v6_.v6) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
    v4 = game_HasSkill_alt1((_QWORD*)(v1 + 1744), (unsigned int*)&v6_.v6);
    v1 = *(_QWORD*)(a1 + 152);
    if ((v4 & 1) == 0) {
      return game_map_76a520(a1, *(_QWORD*)(a1 + 152));
    }
  }
  v6_.v8 = 0;
  v6_.v6 = 0xBF800000BF800000LL;
  v6_.v7 = 1065353216;
  result = UnitActor_819f40(*(_QWORD*)(v1 + 8));
  if ((_DWORD)result != *(_DWORD*)(v1 + 16)) {
    return UnitActor_81a540(v1, result, (__int64)&v6_.v6);
  }
  return result;
}

__int64 game_map_anonymous_770a30(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  char v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  float v12;
  __int128 v13;
  __int128 v14;
  __int64 v16;
  unsigned int v17;
  int v18;
  __int128 v19;

  v2 = *(_QWORD*)(a1 + 152);
  v1 = *(_QWORD*)(a1 + 160);
  if (v1 != 0) {
    v4 = *(_BYTE*)(a1 + 168) == 1 ? *(_QWORD*)(v1 + 592) : 0LL;
    Unit_6dfe00(*(_QWORD*)(a1 + 152), v4);
    if ((UnitNatives_753e40(&v19, &v18, v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL) & 1) !=
        0) {
      v5 = v18;
      *(_BYTE*)(v2 + 584) = v19;
      *(_BYTE*)(v2 + 585) = v5;
    }
  }
  v6 = *(_QWORD*)(v2 + 8);
  if (v6 != 0) {
    v7 = *(char*)(v6 + 584);
    if ((v7 & 0x80000000) == 0) {
      v8 = *(char*)(v6 + 585);
      if ((v8 & 0x80000000) == 0) {
        v9 = *(_DWORD*)(v6 + 592);
        v10 = v7 | 0x100;
        v11 = v8 | 0x100;
        v12 = (float)(unsigned int)(v9 - 1) * 2.5f;
        if (v9 <= 0) {
          v12 = 0.0f;
        }
        *(_QWORD*)&v13 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v10 * 5.0f) + 2.5f) +
                    -0x1.4000000000000p+10f) +
            v12);
        v16 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v11 * 5.0f) + 2.5f) +
                    -0x1.4000000000000p+10f) +
            v12);
        *(float*)&v17 = (float)((float)((float)((float)v10 * 5.0f) + 2.5f) +
                                -0x1.4000000000000p+10f) +
                        v12;
        *((_QWORD*)&v13 + 1) = v16;
        v19 = v13;
        *(_QWORD*)&v14 = __PAIR64__(
            COERCE_UNSIGNED_INT(Unit_6c7fa0(v6, (__int64)&v19)), v17);
        *((_QWORD*)&v14 + 1) = v16;
        v19 = v14;
        Cursor_734a80(v2 + 48, (__int64*)&v19);
        UnitActor_81ba20(v2);
      }
    }
    if (*(_QWORD*)(v2 + 264) != 0) {
      CharacterBuilder_1084780();
    }
  }
  GameRoutine_76a120(a1, *(_QWORD*)(a1 + 152));
  Cursor_730e40(*(_QWORD*)(GameData_21cd130 + 48), *(_QWORD*)(a1 + 152));
  return Camera_7bf8f0(*(_QWORD*)(GameData_21cd140 + 432));
}

__int64 game_map_anonymous_7b1e60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21cd148 == 0) {
    return result;
  }
  v1 = *(_QWORD*)(result + 216);
  v2 = *(_QWORD*)(result + 976);
  if (v1 == 0) {
    v3 = -1;
    v5 = -1;
    if (v2 != 0) {
      goto LABEL_7;
    }
    goto LABEL_10;
  }
  v3 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
  v4 = *(_QWORD*)(v1 + 440);
  if (v4 == 0) {
    v5 = 9;
    if (v2 != 0) {
      goto LABEL_7;
    }
  LABEL_10:
    v8 = -1;
    v9 = -1;
    goto LABEL_12;
  }
  v5 = *(unsigned __int8*)(v4 + 16);
  if (v2 == 0) {
    goto LABEL_10;
  }
LABEL_7:
  v6 = *(_QWORD*)(v2 + 392);
  v7 = *(_QWORD*)(v2 + 440);
  v8 = *(unsigned __int16*)(v6 + 16);
  if (v7 != 0) {
    v9 = *(unsigned __int8*)(v7 + 16);
  }
  else {
    v9 = 9;
  }
LABEL_12:
  result = GameRoutine_c8b5a0(result, 0x17u, v1, v3, v5, v8, v9);
  if ((result & 1) != 0) {
    v10 = GameData_21cd108;
    v11 = *(_QWORD*)(GameData_21cd108 + 12680);
    if (*(_QWORD*)(GameData_21cd108 + 12688) != v11) {
      *(_QWORD*)(GameData_21cd108 + 12688) = v11;
    }
    v12 = *(_QWORD*)(v10 + 12672);
    if ((v12 & 0x100000) != 0) {
      *(_QWORD*)(v10 + 12672) = v12 & 0xFFFFFFFFFFEFFFFFLL;
    }
  }
  return result;
}

__int64 game_map_anonymous_7b1f40(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  bool v9;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  float v18;
  __int128 v19;
  unsigned int v20;
  __int128 v21;
  __int64 v22;
  unsigned int v23;
  __int128 v24;

  v1 = *(_QWORD*)(result + 168);
  if (*(_BYTE*)(v1 + 24) == 4) {
    v2 = (unsigned __int16)game_g_empty_item;
    if (*(_WORD*)(v1 + 32) != 0) {
      v2 = *(unsigned __int16*)(v1 + 32);
    }
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v2) +
                   73LL) &
         0xFE) == 8) {
      v4 = *(unsigned __int8*)(v1 + 57);
      v3 = v1 + 57;
      if (v4 != 0) {
        v5 = result;
        result = game_UnitPool_Get(v3);
        v6 = *(_QWORD*)(v5 + 168);
        v7 = *(char*)(v6 + 53);
        v8 = *(char*)(v6 + 54);
        v9 = result == 0 || v7 < 1;
        if (!v9 && v8 >= 1) {
          *(_BYTE*)(result + 584) = v7;
          v11 = *(_QWORD*)(result + 8);
          *(_BYTE*)(result + 585) = v8;
          if (v11 != 0) {
            v12 = *(char*)(v11 + 584);
            if ((v12 & 0x80000000) == 0) {
              v13 = *(char*)(v11 + 585);
              if ((v13 & 0x80000000) == 0) {
                v14 = *(_DWORD*)(v11 + 592);
                v15 = v12 | 0x100;
                v16 = v13 | 0x100;
                v17 = result;
                v18 = (float)(unsigned int)(v14 - 1) * 2.5f;
                if (v14 <= 0) {
                  v18 = 0.0f;
                }
                *(_QWORD*)&v19 = COERCE_UNSIGNED_INT(
                    (float)((float)((float)((float)v15 * 5.0f) + 2.5f) +
                            -0x1.4000000000000p+10f) +
                    v18);
                v22 = COERCE_UNSIGNED_INT(
                    (float)((float)((float)((float)v16 * 5.0f) + 2.5f) +
                            -0x1.4000000000000p+10f) +
                    v18);
                *(float*)&v23 =
                    (float)((float)((float)((float)v15 * 5.0f) + 2.5f) +
                            -0x1.4000000000000p+10f) +
                    v18;
                *((_QWORD*)&v19 + 1) = v22;
                v24 = v19;
                Unit_6c7fa0_alt1(v11, &v24);
                *(_QWORD*)&v21 = __PAIR64__(v20, v23);
                *((_QWORD*)&v21 + 1) = v22;
                v24 = v21;
                Cursor_734a80_alt1(v17 + 48, &v24);
                UnitActor_81ba20(v17);
                result = v17;
              }
            }
            result = *(_QWORD*)(result + 264);
            if (result != 0) {
              return CharacterBuilder_1084780();
            }
          }
        }
      }
    }
  }
  return result;
}

void game_map_anonymous_7b2f00(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int8* v8;
  unsigned int v9;
  bool v10;
  int v11;
  __int16 v13;

  v2 = *(_DWORD*)(a1 + 22920);
  if (*(_DWORD*)(*(_QWORD*)(a1 + 168) + 12356LL) <= v2) {
    v8 = *(unsigned __int8**)(a1 + 16);
    *(_DWORD*)(a1 + 22920) = 0;
    if (v8 != nullptr) {
      v9 = *v8;
      v10 = v9 > 0x10;
      v11 = (1 << v9) & 0x1CE00;
      if (!v10 && v11 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    v13 = *(_WORD*)(a1 + 136) | 8;
  LABEL_21:
    *(_WORD*)(a1 + 136) = v13;
  }
  else {
    ProcMapSeqBattle_7b79c0(a1, v2, 1);
    v3 = *(_QWORD*)(a1 + 96);
    v4 = *(_QWORD*)(a1 + 104);
    v5 = ((v4 - v3) << 6) - 1;
    if (v4 == v3) {
      v5 = 0;
    }
    ++*(_DWORD*)(a1 + 22920);
    *(_WORD*)(a1 + 136) |= 8u;
    v6 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v5 == v6) {
      GameRoutine_658d60((__int64*)(a1 + 88));
      v3 = *(_QWORD*)(a1 + 96);
      v6 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v3 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      while (1) {
        if (*(_BYTE*)v7 == 2) {
          if (*(_DWORD*)(v7 + 32) == 14) {
            *(_QWORD*)(a1 + 16) = v7;
            v13 = *(_WORD*)(a1 + 136) & 0xFF7F;
            goto LABEL_21;
          }
        }
        else if (*(_BYTE*)v7 == 0) {
          return;
        }
        v7 += 64;
      }
    }
  }
}

__int64 game_map_anonymous_7b3130(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  __int64* v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  float v23;
  unsigned int v24;
  __int128 v25;
  unsigned int v26;
  __int128 v27;
  __int64 v28;
  __int64 result;
  int v30;
  __int64 v31;
  __int64 v32;
  __int16 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v41;
  bool v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  bool v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  unsigned int v75;
  __int128 v76;

  v2 = a1 + 11448;
  v3 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v3 + 8) != 0) {
    v4 = game_UnitPool_Get(v3 + 8);
    v3 = *(_QWORD*)(a1 + 168);
    v5 = v4;
  }
  else {
    v5 = 0;
  }
  BattleInfo_7905d0(a1 + 176, v5, *(unsigned int*)(v3 + 28));
  BattleInfo_790a40(a1 + 176,
                    (unsigned int)*(char*)(*(_QWORD*)(a1 + 168) + 53LL),
                    (unsigned int)*(char*)(*(_QWORD*)(a1 + 168) + 54LL));
  v6 = *(_QWORD*)(a1 + 168);
  if ((*(_DWORD*)(v6 + 40) & 0xFFF) != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(v6 + 40) & 0xFFF));
    if (*(_BYTE*)(v2 + 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v12 = *(unsigned __int16*)(v6 + 32);
  if (*(_WORD*)(v6 + 32) == 0) {
    v12 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v13 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v12);
  v14 = *(_QWORD*)(v13 + 192);
  v15 = *(unsigned __int8*)(v13 + 72);
  v16 = v14 == 0 || v15 > 7;
  if (v16 || *(_BYTE*)(v14 + 105) == 0) {
    v7 = 0;
    if (*(_BYTE*)(v2 + 1) == 0) {
      goto LABEL_7;
    }
  LABEL_6:
    GameRoutine_7992e0(a1 + 192);
    GameRoutine_7992e0(a1 + 952);
    GameRoutine_7992e0(a1 + 1712);
    GameRoutine_7992e0(a1 + 2472);
    *(_DWORD*)(a1 + 11432) = 0;
    *(_WORD*)v2 = 0;
    *(_QWORD*)(a1 + 11452) = 0;
    *(_QWORD*)(a1 + 11458) = 0;
    BattleArea_8b9d00(a1 + 11472);
    goto LABEL_7;
  }
  if (*(_BYTE*)(v14 + 104) == 2) {
    v7 = 0;
  }
  else {
    v7 = v14;
  }
  if (*(_BYTE*)(v2 + 1) != 0) {
    goto LABEL_6;
  }
LABEL_7:
  game_map_799aa0(a1 + 192, v7);
  v8 = GameData_212cfd0[0];
  if ((*(_QWORD*)(*GameData_212cfd0[0] + 12672) & 0x200000LL) != 0) {
    v9 = 67248193;
  }
  else {
    v9 = 67117121;
  }
  *(_DWORD*)(a1 + 11452) |=
      v9 | (32 * *(_DWORD*)(*GameData_212ce90[0] + 20)) & 0x40000;
  game_map_790ba0(a1 + 176);
  *(_BYTE*)(v2 + 1) |= 1u;
  GameRoutine_7992e0(a1 + 11504);
  GameRoutine_7992e0(a1 + 12264);
  GameRoutine_7992e0(a1 + 13024);
  GameRoutine_7992e0(a1 + 13784);
  *(_DWORD*)(a1 + 22744) = 0;
  *(_WORD*)(a1 + 22760) = 0;
  *(_QWORD*)(a1 + 22764) = 0;
  *(_QWORD*)(a1 + 22770) = 0;
  BattleArea_8b9d00(a1 + 22784);
  v10 = (__int64*)(a1 + 236);
  if (*(_WORD*)(a1 + 236) == 0) {
    v11 = *(unsigned int*)(a1 + 232);
    if ((v11 & 0x80000000) != 0) {
      v10 = game_g_empty_item_ptr;
    }
    else {
      v10 = (__int64*)(*(_QWORD*)(a1 + 216) + 8 * v11 + 828);
    }
  }
  v17 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 22988) = *v10;
  v19 = *(unsigned __int8*)(v17 + 8);
  v18 = v17 + 8;
  if (v19 != 0) {
    v20 = game_UnitPool_Get(v18);
    if (v20 != 0) {
      v21 = *(_DWORD*)(v20 + 592);
      v22 = *GameData_212cfc0[0];
      v23 = (float)(unsigned int)(v21 - 1) * 2.5f;
      v24 = *(char*)(v20 + 584) + 256;
      if (v21 <= 0) {
        v23 = 0.0f;
      }
      *(_QWORD*)&v25 = COERCE_UNSIGNED_INT(
          (float)((float)((float)((float)v24 * 5.0f) + 2.5f) +
                  -0x1.4000000000000p+10f) +
          v23);
      v74 = COERCE_UNSIGNED_INT(
          (float)((float)((float)((float)(unsigned int)(*(char*)(v20 + 585) +
                                                        256) *
                                  5.0f) +
                          2.5f) +
                  -0x1.4000000000000p+10f) +
          v23);
      *(float*)&v75 = (float)((float)((float)((float)v24 * 5.0f) + 2.5f) +
                              -0x1.4000000000000p+10f) +
                      v23;
      *((_QWORD*)&v25 + 1) = v74;
      v76 = v25;
      Unit_6c7fa0_alt1(v20, &v76);
      *(_QWORD*)&v27 = __PAIR64__(v26, v75);
      *((_QWORD*)&v27 + 1) = v74;
      v76 = v27;
      Cursor_730ff0(v22, &v76);
    }
  }
  if (*(unsigned __int8*)(a1 + 23032) < 2u || *(_BYTE*)v2 == 3) {
    goto LABEL_35;
  }
  v34 = *(_QWORD*)(a1 + 168);
  v35 = *(_DWORD*)(v34 + 40);
  v36 = v35 & 0xFFF;
  if ((v35 & 0xFFF) != 0) {
    v37 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v36);
    if (v37 == 0) {
      goto LABEL_35;
    }
    LOBYTE(v38) = *(_BYTE*)(v37 + 104);
  }
  else {
    v43 = *(unsigned __int16*)(v34 + 32);
    v44 = *(unsigned __int16*)game_g_empty_item_ptr;
    if (*(_WORD*)(v34 + 32) != 0) {
      v45 = *(unsigned __int16*)(v34 + 32);
    }
    else {
      v45 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v46 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v47 = *(_QWORD*)(v46 + 8LL * v45);
    v37 = *(_QWORD*)(v47 + 192);
    v48 = *(unsigned __int8*)(v47 + 72);
    v49 = v37 == 0 || v48 > 7;
    if (v49 || *(_BYTE*)(v37 + 105) == 0 ||
        (v38 = *(unsigned __int8*)(v37 + 104)) == 2) {
      if ((ProcMapSeqBattle_7b6760(a1) & 1) == 0) {
        goto LABEL_35;
      }
      goto LABEL_74;
    }
  }
  if ((((unsigned __int16)*GameData_212cf08[0] >> v38) & 1) != 0 &&
          (*(_WORD*)(v37 + 754) & 4) == 0 ||
      (ProcMapSeqBattle_7b6760(a1) & 1) == 0) {
    goto LABEL_35;
  }
  if ((_DWORD)v36 == 0) {
    v43 = *(unsigned __int16*)(v34 + 32);
    v44 = *(unsigned __int16*)game_g_empty_item_ptr;
    v46 = *(_QWORD*)(*GameData_212c878[0] + 64);
  LABEL_74:
    if (v43 != 0) {
      v50 = v43;
    }
    else {
      v50 = v44;
    }
    v51 = *(_QWORD*)(v46 + 8LL * v50);
    v52 = *(_QWORD*)(v51 + 192);
    v53 = *(unsigned __int8*)(v51 + 72);
    v54 = v52 == 0 || v53 > 7;
    if (v54 || *(_BYTE*)(v52 + 105) == 0 || *(_BYTE*)(v52 + 104) == 2) {
      goto LABEL_35;
    }
  LABEL_83:
    if (*(_BYTE*)(*v8 + 8) != 0) {
      v55 = game_UnitPool_Get(*v8 + 8);
      v34 = *(_QWORD*)(a1 + 168);
      v56 = v55;
    }
    else {
      v56 = 0;
    }
    v58 = *(unsigned __int8*)(v34 + 8);
    v57 = v34 + 8;
    if (v58 != 0) {
      v59 = game_UnitPool_Get(v57);
    }
    else {
      v59 = 0;
    }
    if (v56 == v59 && (*(_BYTE*)(*v8 + 12678) & 1) != 0) {
      goto LABEL_35;
    }
    v60 = *(_QWORD*)(a1 + 168);
    if ((*(_DWORD*)(v60 + 40) & 0xFFF) != 0) {
      v61 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(v60 + 40) & 0xFFF));
      if (v61 == 0) {
        goto LABEL_102;
      }
    }
    else {
      v63 = *(unsigned __int16*)(v60 + 32);
      if (v63 == 0) {
        v63 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v64 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v63);
      v61 = *(_QWORD*)(v64 + 192);
      if (v61 == 0 || *(unsigned __int8*)(v64 + 72) > 7u ||
          *(_BYTE*)(v61 + 105) == 0 || *(_BYTE*)(v61 + 104) == 2) {
        goto LABEL_102;
      }
    }
    if (v61 == Situation_7646c0()) {
      v62 = game_UnitPool_Get(*(_QWORD*)(a1 + 168) + 8LL);
      LODWORD(v76) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x230LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF;
      if ((game_HasSkill(v62 + 1744, &v76) & 1) == 0) {
        goto LABEL_35;
      }
    }
  LABEL_102:
    v65 = *(_QWORD*)(a1 + 96);
    v66 = *(_QWORD*)(a1 + 104);
    v67 = ((v66 - v65) << 6) - 1;
    if (v66 == v65) {
      v67 = 0;
    }
    v68 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v67 == v68) {
      GameRoutine_658d60_alt1(a1 + 88);
      v65 = *(_QWORD*)(a1 + 96);
      v68 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v65 + 8 * (v68 >> 9)) + 8 * (v68 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v69 = *(_QWORD*)(a1 + 8);
    if (v69 != 0) {
      while (1) {
        if (*(_BYTE*)v69 == 2) {
          if (*(_DWORD*)(v69 + 32) == 3) {
            *(_QWORD*)(a1 + 16) = v69;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v69 == 0) {
          break;
        }
        v69 += 64;
      }
    }
    if (*(_BYTE*)(*v8 + 8) != 0) {
      v70 = game_UnitPool_Get(*v8 + 8);
    }
    else {
      v70 = 0;
    }
    v71 = *(_QWORD*)(a1 + 168);
    v73 = *(unsigned __int8*)(v71 + 8);
    v72 = v71 + 8;
    if (v73 != 0) {
      result = game_UnitPool_Get(v72);
    }
    else {
      result = 0;
    }
    if (v70 == result) {
      *(_QWORD*)(*v8 + 12672) |= 0x1000000000000uLL;
    }
    return result;
  }
  if (*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                 8LL * (unsigned int)v36) != 0) {
    goto LABEL_83;
  }
LABEL_35:
  v28 = *(_QWORD*)(a1 + 168);
  v30 = *(unsigned __int8*)(v28 + 8);
  result = v28 + 8;
  if (v30 == 0) {
    return result;
  }
  result = game_UnitPool_Get(result);
  if (result == 0) {
    return result;
  }
  v31 = *(_QWORD*)(a1 + 168);
  if ((*(_DWORD*)(v31 + 40) & 0xFFF) != 0) {
    v32 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v31 + 40) & 0xFFF));
    if (v32 == 0) {
      return result;
    }
    goto LABEL_39;
  }
  v39 = *(unsigned __int16*)(v31 + 32);
  if (v39 == 0) {
    v39 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v40 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v39);
  v32 = *(_QWORD*)(v40 + 192);
  v41 = *(unsigned __int8*)(v40 + 72);
  v42 = v32 == 0 || v41 > 7;
  if (!v42 && *(_BYTE*)(v32 + 105) != 0 && *(_BYTE*)(v32 + 104) != 2) {
  LABEL_39:
    v33 = *(_WORD*)(v32 + 754);
    if ((v33 & 1) != 0 &&
        (v33 & 0x200 | *(unsigned __int8*)(a1 + 23032)) != 0 &&
        (v33 & 2) != 0 && *GameData_212d578[0] != 0) {
      return GameRoutine_17cece0(*(_QWORD*)(*GameData_212d578[0] + 144), v32, 0,
                                 1, result);
    }
  }
  return result;
}

__int64 game_map_anonymous_7b3f80(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  char v10;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  char v19;
  __int64 v20[12];

  v2 = a1 + 22920;
  ProcMapSeqBattle_7b79c0(a1, *(_DWORD*)(a1 + 22920), 0);
  v3 = (__int64*)(a1 + 236);
  if (*(_WORD*)(a1 + 236) == 0) {
    v4 = *(unsigned int*)(a1 + 232);
    if ((v4 & 0x80000000) != 0) {
      v3 = &game_g_empty_item;
    }
    else {
      v3 = (__int64*)(*(_QWORD*)(a1 + 216) + 8 * v4 + 828);
    }
  }
  v5 = *(_QWORD*)(a1 + 216);
  *(_QWORD*)(v2 + 68) = *v3;
  if (v5 != 0) {
    v6 = (_DWORD*)game_g_shared_system_skills_ptr;
    LODWORD(v20[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(v5 + 1744), (unsigned int*)v20) & 1) ==
        0) {
      v7 = *(_QWORD*)(v5 + 440);
      if (v7 != 0) {
        v8 = *(unsigned __int8*)(v7 + 16);
        if (((1 << v8) & 0xF1) != 0) {
          LODWORD(v20[0]) = *v6 & 0xFFF;
          if ((game_HasSkill_alt1((_QWORD*)(v5 + 1744), (unsigned int*)v20) &
               1) != 0) {
            v9 = *(_QWORD*)(v5 + 440);
            v10 = v9 != 0 ? *(_BYTE*)(v9 + 16) : 9;
            if (((1 << v10) & 0xF1) != 0) {
            LABEL_20:
              BonusExpList_7ff8f0((__int64)v20, a1 + 192);
              if (((LOBYTE(v20[0]) >> 1) | (LODWORD(v20[0]) >> 8) & 0x7F) !=
                      0 &&
                  0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(a1 + 22904) -
                                                    *(_QWORD*)(a1 + 22896)) >>
                                          2) <=
                      0x63) {
                game_map_BonusExpList_Add((__int64*)(a1 + 22896), v20);
              }
              goto LABEL_25;
            }
          }
          memset(v20, 0, 91);
          if ((game_8007e0(v20, a1 + 192, 0) & 1) != 0) {
            GameRoutine_8c49a0(a1 + 22800, (__int64)v20);
          }
        }
        else if (v8 == 3 && *GameData_212ce90[0] != 0) {
          goto LABEL_20;
        }
      }
    }
  }
LABEL_25:
  result = (__int64)BattleTarget_900490((__int64*)(a1 + 22928),
                                        *(_WORD*)(a1 + 11464));
  v13 = *(_QWORD*)(a1 + 216);
  if (v13 == 0) {
    goto LABEL_39;
  }
  v14 = *(_QWORD*)(a1 + 976);
  if (v14 == 0) {
    goto LABEL_39;
  }
  v15 = *(_QWORD*)(v13 + 440);
  if (v15 != 0) {
    v16 = *(unsigned __int8*)(v15 + 16);
    v17 = *(_QWORD*)(v14 + 440);
    if (v17 != 0) {
      goto LABEL_29;
    }
  LABEL_32:
    v18 = 9;
    if (v16 == 9) {
      goto LABEL_39;
    }
    goto LABEL_33;
  }
  v16 = 9;
  v17 = *(_QWORD*)(v14 + 440);
  if (v17 == 0) {
    goto LABEL_32;
  }
LABEL_29:
  v18 = *(unsigned __int8*)(v17 + 16);
  if (v16 != v18) {
  LABEL_33:
    if (v16 != 0) {
      if (v16 == 3 && v18 == 0) {
        goto LABEL_39;
      }
    }
    else if (v18 == 3) {
      goto LABEL_39;
    }
    v20[0] = *(_QWORD*)(a1 + 976);
    result = game_120f710(v20);
    if ((result & 0x400) != 0) {
      v19 = 1;
      goto LABEL_40;
    }
  }
LABEL_39:
  v19 = 0;
LABEL_40:
  *(_BYTE*)(v2 + 65) |= v19;
  return result;
}

__int64 game_map_anonymous_7b4560(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  int v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  char v11;
  __int64 v12;
  _DWORD* v14;
  _DWORD* v15;
  char v16;
  char v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  int v21;
  int v22;

  v2 = GameData_212ce90[0];
  if (*GameData_212ce90[0] != 0 && game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f50);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      return result;
    }
  }
  v4 = *(_QWORD*)(a1 + 168);
  v5 = *(unsigned __int8*)(v4 + 8);
  result = v4 + 8;
  if (v5 == 0) {
    return result;
  }
  result = game_UnitPool_Get(result);
  if (result == 0) {
    return result;
  }
  v6 = result;
  v7 = (_DWORD*)game_g_shared_system_skills_ptr;
  v21 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  result = game_HasSkill(result + 1744, &v21);
  if ((result & 1) != 0) {
    return result;
  }
  v8 = *(_QWORD*)(v6 + 440);
  if (v8 == 0) {
    return result;
  }
  v9 = *(unsigned __int8*)(v8 + 16);
  if (((1 << v9) & 0xF1) == 0) {
    v12 = *v2;
    if (v9 != 3 || v12 == 0) {
      return result;
    }
    goto LABEL_22;
  }
  v22 = *v7 & 0xFFF;
  result = game_HasSkill(v6 + 1744, &v22);
  if ((result & 1) != 0) {
    v10 = *(_QWORD*)(v6 + 440);
    v11 = v10 != 0 ? *(_BYTE*)(v10 + 16) : 9;
    if (((1 << v11) & 0xF1) != 0) {
      v12 = *v2;
      if (v12 == 0) {
        return result;
      }
    LABEL_22:
      v14 = *(_DWORD**)(a1 + 22896);
      v15 = *(_DWORD**)(a1 + 22904);
      if (v14 != v15) {
        v16 = 0;
        do {
          if ((((*v14 >> 1) | (*v14 >> 8)) & 0x7F) != 0 &&
              0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(v12 + 304) -
                                                *(_QWORD*)(v12 + 296)) >>
                                      2) <=
                  0x63) {
            result = game_map_BonusExpList_Add_alt1(v12 + 296, v14);
            v17 = 1;
          }
          else {
            v17 = 0;
          }
          v14 += 3;
          v16 |= v17;
        } while (v14 != v15);
        if ((v16 & 1) != 0 && GameData_22400f8 != 0 &&
            *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
          *(_DWORD*)(GameData_22400f8 + 12) |= 0x80u;
        }
      }
      return result;
    }
  }
  v18 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 22800) = v6;
  v19 = BattleTarget_9001a0(v18);
  v20 = GameRoutine_9db9e0(1, v19);
  *(_DWORD*)(a1 + 22808) += v20 & ~(v20 >> 31);
  if (*(_BYTE*)(a1 + 23032) == 0) {
    *(_BYTE*)(a1 + 22890) = 1;
  }
  *(_BYTE*)(a1 + 22889) = *(_BYTE*)(a1 + 22985);
  return game_8c4fc0(a1 + 22800, a1);
}

__int64 game_map_anonymous_7b4800(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;

  if ((*(_BYTE*)(*(_QWORD*)(result + 200) + 11276LL) & 1) != 0 ||
      (*(_BYTE*)(result + 316) & 1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(result + 960) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(result + 1076) & 1) == 0) {
      return result;
    }
    v1 = 776;
  }
  else {
    v1 = 16;
  }
  v2 = *(_QWORD*)(result + 176 + v1 + 24);
  if (v2 == 0) {
    return result;
  }
  if (*(_BYTE*)(v2 + 496) != 0) {
    return result;
  }
  v3 = result;
  v4 = game_g_shared_system_skills_ptr;
  v15 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                   game_g_shared_system_skills_ptr + 4) &
        0xFFF;
  result = game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)&v15);
  if ((result & 1) == 0) {
    return result;
  }
  v5 = *(_QWORD*)(v2 + 264);
  if (v5 == 0) {
    goto LABEL_31;
  }
  v6 = *(_DWORD*)(*(_QWORD*)(v5 + 72) + 120LL);
  if (v6 <= -93581018) {
    if (v6 == -972548316 || v6 == -900681796 || v6 == -860551158) {
      goto LABEL_34;
    }
    goto LABEL_31;
  }
  if (v6 > 1400556094) {
    if (v6 == 1400556095 || v6 == 1715476756) {
      goto LABEL_34;
    }
  LABEL_31:
    if (*(_DWORD*)(v2 + 16) != -900681796 &&
        (UnitActor_81a540(v2, 0xCA50AFBC, (__int64)GameData_212ceb8) & 1) !=
            0) {
      GameRoutine_76bfe0(v3, v2);
    }
    goto LABEL_34;
  }
  if (v6 != -93581017 && v6 != -77626398) {
    goto LABEL_31;
  }
LABEL_34:
  if (*(_WORD*)(v2 + 1964) != 0) {
    v11 = *GameData_212cec0;
    if (*(_QWORD*)(v2 + 1960) != *GameData_212cec0) {
      *(_QWORD*)(v2 + 1960) = v11;
      v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) + v4) & 0xFFF;
      Unit_6cd120(v2, (v11 & 0xFFFF00000000LL) != 0, &v16);
    }
  }
  if ((*(_WORD*)(v2 + 1872) & 0xFFF) != 0) {
    v12 = *(_QWORD*)(v2 + 600);
    if ((int)((unsigned __int64)(*(_QWORD*)(v2 + 608) - v12) >> 2) >= 1) {
      v13 = 2;
      v14 = 0;
      do {
        *(_BYTE*)(v12 + v13) = 0;
        ++v14;
        v13 += 4;
        v12 = *(_QWORD*)(v2 + 600);
      } while (v14 <
               (int)((unsigned __int64)(*(_QWORD*)(v2 + 608) - v12) >> 2));
    }
  }
  return GameRoutine_80eb10(1);
}

__int64 (**game_map_anonymous_7b4b00(__int64 a1))()
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v11;
  __int64 (**result)();
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  void* v28;
  __int64 v29;
  __int64 (***v30)();
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  void* v35;
  __int64 (***v36)();
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  void* v41;
  __int64 v42;
  __int64 (***v43)();
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  int v53;
  _BYTE* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  char v58;
  char v59;
  char* v60;
  char v61;
  unsigned int v62;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _WORD* v83;
  __int64 v84;
  struct {
    __int64 v85;
    void* v86;
  } v85_;
  struct {
    __int64 (**v87)();
    void* v88;
    unsigned int* v89;
    char gap40_[8];
    unsigned __int64* v90;
  } v87_;
  unsigned int v91;

  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v2 = a1 + 22984;
  BattleInfo_796b00(a1 + 176),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v3 = *(_QWORD*)(a1 + 976);
  v4 = GameData_212cfd0[0];
  if (v3 != 0 && (*(_QWORD*)(*GameData_212cfd0[0] + 12672) & 0x200000) == 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 216) + 440LL);
    v6 = v5 != 0 ? *(unsigned __int8*)(v5 + 16) : 9;
    v7 = *(unsigned __int8*)(*(_QWORD*)(v3 + 440) + 16LL);
    if ((_DWORD)v7 != v6) {
      if (*(_BYTE*)(*(_QWORD*)(v3 + 440) + 16LL) != 0) {
        if (v6 == 0 && (_DWORD)v7 == 3) {
          goto LABEL_18;
        }
      }
      else if (v6 == 3) {
        goto LABEL_18;
      }
      v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                      8LL * *(unsigned __int16*)(v2 + 4));
      if (((unsigned int)*(unsigned __int8*)(v8 + 72) - 5 > 1 ||
           *(_BYTE*)(v8 + 73) == 1) &&
          *(_BYTE*)(GameData_21ca2f8 + v7 + 16) == 2) {
        LODWORD(v87_.v87) = *(_DWORD*)((_BYTE*)((char*)0x1B0LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
        if ((BattleInfo_79c940(a1 + 192, (unsigned int*)&v87_.v87) & 1) == 0 &&
            (*(_BYTE*)(v3 + 1976) & 1) != 0) {
          GameRoutine_120c280(v3, 1),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        }
      }
    }
  }
LABEL_18:
  if (*(int*)(*(_QWORD*)(a1 + 168) + 12356LL) <= 0) {
    game_map_anonymous_ProcMapSeqBattle_CommitBarrier((_QWORD*)a1, 0),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  }
  game_map_anonymous_ProcMapSeqBattle_CommitBarrier((_QWORD*)a1, 1u),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  if (*(int*)(*(_QWORD*)(a1 + 168) + 12356LL) < 1) {
    v16 = *(_QWORD*)(a1 + 216);
    v17 = BattleSide_7a2480(a1 + 192),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if (v16 != 0 && v17 != 0 && (*(_QWORD*)(*v4 + 12672) & 0x200000) == 0) {
      *(_DWORD*)(v16 + 416) |= 0x8000u;
      game_Unit_SetPollution(v16, v17 + *(unsigned __int8*)(v16 + 499)),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    }
  }
  v11 = *(_QWORD*)(a1 + 976);
  result = (__int64 (**)(void))BattleSide_7a2480(a1 + 952),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v26 = COERCE_AS(__typeof__(v26),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v27 = COERCE_AS(__typeof__(v27),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  if (v11 != 0 && (_DWORD)result != 0 &&
      (*(_QWORD*)(*v4 + 12672) & 0x200000) == 0) {
    *(_DWORD*)(v11 + 416) |= 0x8000u;
    result = (__int64 (**)(void))game_Unit_SetPollution(
        v11, (unsigned int)result + *(unsigned __int8*)(v11 + 499)),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  }
  if ((*(_BYTE*)(*v4 + 12674) & 0x20) == 0) {
    v13 = *(_QWORD*)(a1 + 216);
    if (v13 != 0 &&
        ((v14 = *(_QWORD*)(v13 + 440)) == 0 ? (v15 = 9)
                                            : (v15 = *(_BYTE*)(v14 + 16)),
         ((1 << v15) & 0xF1) != 0)) {
      v18 = 192;
    }
    else {
      v19 = *(_QWORD*)(a1 + 976);
      if (v19 == 0 ||
          ((v20 = *(_QWORD*)(v19 + 440)) == 0 ? (v21 = 9)
                                              : (v21 = *(_BYTE*)(v20 + 16)),
           ((1 << v21) & 0xF1) == 0)) {
      LABEL_79:
        if ((*(_BYTE*)(*(_QWORD*)(a1 + 200) + 11276LL) & 1) != 0 ||
            (*(_BYTE*)(a1 + 316) & 1) == 0) {
          if ((*(_BYTE*)(*(_QWORD*)(a1 + 960) + 11276LL) & 1) != 0) {
            goto LABEL_96;
          }
          if ((*(_BYTE*)(a1 + 1076) & 1) == 0) {
            goto LABEL_96;
          }
          v45 = a1 + 952;
          v46 = *(_QWORD*)(a1 + 976);
          if (v46 == 0) {
            goto LABEL_96;
          }
        }
        else {
          v45 = a1 + 192;
          v46 = *(_QWORD*)(a1 + 216);
          if (v46 == 0) {
            goto LABEL_96;
          }
        }
        if (*(_BYTE*)(v46 + 496) == 0) {
          v47 = *(_QWORD*)(*(_QWORD*)(v45 + 8) +
                           760LL * *(unsigned __int8*)(v45 + 17) + 40);
          if (v47 != 0 && (v48 = *(_QWORD*)(v47 + 440)) != 0) {
            v49 = *(_BYTE*)(v48 + 16);
          }
          else {
            v49 = 9;
          }
          if (((1 << v49) & 0xF1) != 0) {
            GameRoutine_9b1850(v46),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v27 =
                    COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
          }
          result = (__int64 (**)(void))game_67ec40(v46),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
          if ((unsigned __int8)result == 6) {
            v87_.v88 = &GameData_1ada1ef;
            result =
                (__int64 (**)(void))game_HashString((__int64)&GameData_1ada1ef),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
            v87_.v87 = result;
            if (game_GameModeData_instance_ != 0) {
              result = (__int64 (**)(void))GameVariable_828dc0(
                  *(_QWORD*)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)&v87_.v87, 1),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
            }
          }
        }
      LABEL_96:
        v50 = *(_DWORD*)(a1 + 11432);
        if (v50 == 0) {
          goto LABEL_108;
        }
        v51 = v50 & 7;
        if (v50 >= 8) {
          v54 = (_BYTE*)(a1 + 3244);
          v55 = 0;
          v53 = 0;
          v56 = -(__int64)(v50 & 0xFFFFFFF8);
          do {
            v55 -= 8;
            v57 = (1 << v54[320]) | (1 << v54[256]) | (1 << v54[192]) |
                  (1 << v54[128]) | (1 << v54[64]) | (1 << *v54) | v53;
            v58 = v54[384];
            v59 = v54[448];
            v54 += 512;
            v53 = (1 << v59) | (1 << v58) | v57;
          } while (v56 != v55);
          v52 = -v55;
          if (v51 == 0) {
          LABEL_105:
            if ((v53 & 0x1000) != 0) {
              v87_.v88 = &GameData_1abf7e9;
              result = (__int64 (**)(void))game_HashString(
                  (__int64)&GameData_1abf7e9),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
              v87_.v87 = result;
              if (game_GameModeData_instance_ != 0) {
                result = (__int64 (**)(void))GameVariable_828dc0(
                    *(_QWORD*)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)&v87_.v87, 1),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v27 =
                    COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
              }
            }
            goto LABEL_108;
          }
        }
        else {
          v52 = 0;
          v53 = 0;
          if ((v50 & 7) == 0) {
            goto LABEL_105;
          }
        }
        v60 = (char*)(a1 + (v52 << 6) + 3244);
        do {
          v61 = *v60;
          v60 += 64;
          --v51;
          v53 |= 1 << v61;
        } while (v51 != 0);
        goto LABEL_105;
      }
      v18 = 952;
    }
    v22 = a1 + v18;
    v85_.v86 = &GameData_1aafd05;
    v23 = game_HashString((__int64)&GameData_1aafd05),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    v28 = (void*)*(unsigned __int8*)(v22 + 16);
    v29 = *(unsigned int*)(a1 + 11432);
    v85_.v85 = v23;
    v30 = &v87_.v87;
    v31 = a1 + 3240;
    v91 = 0;
    v87_.v90 = (unsigned __int64*)&v87_.v87;
    v87_.v87 = GameData_1f98d10;
    v87_.v88 = v28;
    v87_.v89 = &v91;
    if ((_DWORD)v29 == 0) {
      goto LABEL_52;
    }
    v32 = a1 + 3240;
    do {
      if ((unsigned int)*(unsigned __int8*)(v32 + 4) - 3 <= 1 &&
          (*(_BYTE*)(v32 + 12) & 1) != 0) {
        if (v87_.v90 == nullptr) {
        LABEL_184:
          GameRoutine_60a310_alt1(),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        }
        (*(void (**)(unsigned __int64*, __int64))(*v87_.v90 + 48))(v87_.v90,
                                                                   v32),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      }
      --v29;
      v32 += 64;
    } while (v29 != 0);
    v30 = (__int64 (***)(void))v87_.v90,
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if (v87_.v90 == (unsigned __int64*)&v87_.v87) {
    LABEL_52:
      v33 = 4;
    }
    else {
      if (v87_.v90 == nullptr) {
      LABEL_54:
        GameRoutine_9b11a0(&GameData_21f61c0, (unsigned __int64*)&v85_.v85,
                           v91),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        v85_.v86 = &GameData_1a853f5;
        v34 = game_HashString((__int64)&GameData_1a853f5),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        v35 = (void*)*(unsigned __int8*)(v22 + 16);
        v85_.v85 = v34;
        v36 = &v87_.v87;
        v91 = 0;
        v87_.v90 = (unsigned __int64*)&v87_.v87;
        v87_.v87 = GameData_1f98d10;
        v87_.v88 = v35;
        v37 = *(unsigned int*)(a1 + 11432);
        v87_.v89 = &v91;
        if ((_DWORD)v37 == 0) {
          goto LABEL_64;
        }
        v38 = a1 + 3240;
        do {
          if ((unsigned int)*(unsigned __int8*)(v38 + 4) - 3 <= 1 &&
              (*(_BYTE*)(v38 + 13) & 0x80) != 0) {
            if (v87_.v90 == nullptr) {
              goto LABEL_184;
            }
            (*(void (**)(unsigned __int64*, __int64))(*v87_.v90 + 48))(v87_.v90,
                                                                       v38),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v27 =
                    COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
          }
          --v37;
          v38 += 64;
        } while (v37 != 0);
        v36 = (__int64 (***)(void))v87_.v90,
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        if (v87_.v90 == (unsigned __int64*)&v87_.v87) {
        LABEL_64:
          v39 = 4;
        }
        else {
          if (v87_.v90 == nullptr) {
          LABEL_66:
            GameRoutine_9b11a0(&GameData_21f61c0, (unsigned __int64*)&v85_.v85,
                               v91),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v27 =
                    COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
            v85_.v86 = &GameData_1af4f8a;
            v40 = game_HashString((__int64)&GameData_1af4f8a),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
            v41 = (void*)*(unsigned __int8*)(v22 + 16);
            v42 = *(unsigned int*)(a1 + 11432);
            v85_.v85 = v40;
            v43 = &v87_.v87;
            v91 = 0;
            v87_.v90 = (unsigned __int64*)&v87_.v87;
            v87_.v87 = GameData_1f98c80;
            v87_.v88 = v41;
            v87_.v89 = &v91;
            if ((_DWORD)v42 == 0) {
              goto LABEL_76;
            }
            do {
              if ((unsigned int)*(unsigned __int8*)(v31 + 4) - 3 <= 1 &&
                  (~*(_DWORD*)(v31 + 12) & 6) == 0) {
                if (v87_.v90 == nullptr) {
                  goto LABEL_184;
                }
                (*(void (**)(unsigned __int64*, __int64))(*v87_.v90 + 48))(
                    v87_.v90, v31),
                    v24 = COERCE_AS(
                        __typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v25 = COERCE_AS(
                        __typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                    v26 = COERCE_AS(
                        __typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                    v27 = COERCE_AS(
                        __typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
              }
              --v42;
              v31 += 64;
            } while (v42 != 0);
            v43 = (__int64 (***)(void))v87_.v90,
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
            if (v87_.v90 == (unsigned __int64*)&v87_.v87) {
            LABEL_76:
              v44 = 4;
            }
            else {
              if (v87_.v90 == nullptr) {
              LABEL_78:
                result = (__int64 (**)(void))GameRoutine_9b11a0(
                    &GameData_21f61c0, (unsigned __int64*)&v85_.v85, v91),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v27 =
                    COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
                goto LABEL_79;
              }
              v44 = 5;
            }
            ((void (*)(__int64 (***)(void)))(*v43)[v44])(v43),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v25 =
                    COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
                v26 =
                    COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
                v27 =
                    COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
            goto LABEL_78;
          }
          v39 = 5;
        }
        ((void (*)(__int64 (***)(void)))(*v36)[v39])(v36),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v25 = COERCE_AS(__typeof__(v25),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v26 = COERCE_AS(__typeof__(v26),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
            v27 = COERCE_AS(__typeof__(v27),
                            PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
        goto LABEL_66;
      }
      v33 = 5;
    }
    ((void (*)(__int64 (***)(void), __int64, __int64, __int64, __int64))(
        *v30)[v33])(v30, v24, v25, v26, v27),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    goto LABEL_54;
  }
LABEL_108:
  if ((*(_BYTE*)(*v4 + 12674) & 0x20) == 0) {
    v62 = *(unsigned __int8*)(a1 + 11448);
    if (v62 <= 5 && ((1 << v62) & 0x32) != 0) {
      if (GameData_21ca2f8 != 0) {
        v64 = *(_QWORD*)(a1 + 216);
        if (v64 != 0) {
          v65 = *(_QWORD*)(v64 + 440);
          if (v65 != 0) {
            v66 = *(unsigned __int8*)(v65 + 16);
            if (v66 <= 3 && *(_BYTE*)(GameData_21ca2f8 + v66 + 16) == 1 &&
                ((v67 = *(_QWORD*)(a1 + 976)) != 0 &&
                     *(_QWORD*)(v67 + 392) != 0 ||
                 (*(_BYTE*)(*(_QWORD*)(a1 + 960) + 11277LL) & 0x80) == 0 &&
                     (result = *(__int64 (***)(void))(a1 + 984)) != nullptr &&
                     ((unsigned __int8)(result = (__int64 (**)(void))(
                                            *(__int64 (**)(__int64 (**)(
                                                void)))*result)(result)) &
                      1) != 0 &&
                     (v64 = *(_QWORD*)(a1 + 216)) != 0)) {
              v68 = *(_DWORD*)(v64 + 2156);
              if (v68 <= -1) {
                v68 = -1;
              }
              if ((unsigned int)(v68 + 1) < 0x1869F) {
                v69 = v68 + 1;
              }
              else {
                v69 = 99999;
              }
              *(_DWORD*)(v64 + 2156) = v69;
              if ((*(_BYTE*)(*(_QWORD*)(a1 + 960) + 11276LL) & 1) == 0 &&
                  (*(_BYTE*)(a1 + 1076) & 1) != 0) {
                v70 = *(_DWORD*)(v64 + 2160);
                if (v70 <= -1) {
                  v70 = -1;
                }
                if ((unsigned int)(v70 + 1) < 0x1869F) {
                  v71 = v70 + 1;
                }
                else {
                  v71 = 99999;
                }
                *(_DWORD*)(v64 + 2160) = v71;
              }
            }
          }
        }
      }
      v62 = *(unsigned __int8*)(a1 + 11448);
    }
    if (v62 <= 5 && ((1 << v62) & 0x32) != 0 && GameData_21ca2f8 != 0) {
      v72 = *(_QWORD*)(a1 + 976);
      if (v72 != 0) {
        v73 = *(_QWORD*)(v72 + 440);
        if (v73 != 0) {
          v74 = *(unsigned __int8*)(v73 + 16);
          if (v74 <= 3 && *(_BYTE*)(GameData_21ca2f8 + v74 + 16) == 1 &&
              ((v75 = *(_QWORD*)(a1 + 216)) != 0 &&
                   *(_QWORD*)(v75 + 392) != 0 ||
               (*(_BYTE*)(*(_QWORD*)(a1 + 200) + 11277LL) & 0x80) == 0 &&
                   (result = *(__int64 (***)(void))(a1 + 224)) != nullptr &&
                   ((unsigned __int8)(result = (__int64 (**)(void))(
                                          *(__int64 (**)(__int64 (**)(
                                              void)))*result)(result)) &
                    1) != 0 &&
                   (v72 = *(_QWORD*)(a1 + 976)) != 0)) {
            v76 = *(_DWORD*)(v72 + 2156);
            if (v76 <= -1) {
              v76 = -1;
            }
            if ((unsigned int)(v76 + 1) < 0x1869F) {
              v77 = v76 + 1;
            }
            else {
              v77 = 99999;
            }
            *(_DWORD*)(v72 + 2156) = v77;
            if ((*(_BYTE*)(*(_QWORD*)(a1 + 200) + 11276LL) & 1) == 0 &&
                (*(_BYTE*)(a1 + 316) & 1) != 0) {
              v78 = *(_DWORD*)(v72 + 2160);
              if (v78 <= -1) {
                v78 = -1;
              }
              if ((unsigned int)(v78 + 1) < 0x1869F) {
                v79 = v78 + 1;
              }
              else {
                v79 = 99999;
              }
              *(_DWORD*)(v72 + 2160) = v79;
            }
          }
        }
      }
    }
  }
  if (*(int*)(*(_QWORD*)(a1 + 168) + 12356LL) < 1) {
    v84 = *(_QWORD*)(a1 + 216);
    if (v84 != 0) {
      BYTE4(v87_.v88) = 0;
      v87_.v87 = (__int64 (**)(void))0xBF800000BF800000LL,
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      LODWORD(v87_.v88) = 1065353216;
      result = (__int64 (**)(void))UnitActor_819f40(*(_QWORD*)(v84 + 8)),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if ((_DWORD)result != *(_DWORD*)(v84 + 16)) {
        result = (__int64 (**)(void))UnitActor_81a540(v84, (unsigned int)result,
                                                      (__int64)&v87_.v87),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v26 = COERCE_AS(__typeof__(v26),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v27 = COERCE_AS(__typeof__(v27),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      }
    }
  }
  v80 = *(_QWORD*)(a1 + 976);
  if (v80 != 0) {
    BYTE4(v87_.v88) = 0;
    v87_.v87 = (__int64 (**)(void))0xBF800000BF800000LL,
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    LODWORD(v87_.v88) = 1065353216;
    result = (__int64 (**)(void))UnitActor_819f40(*(_QWORD*)(v80 + 8)),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v26 = COERCE_AS(__typeof__(v26),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v27 = COERCE_AS(__typeof__(v27),
                    PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    if ((_DWORD)result != *(_DWORD*)(v80 + 16)) {
      result = (__int64 (**)(void))UnitActor_81a540(v80, (unsigned int)result,
                                                    (__int64)&v87_.v87),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
    }
  }
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 200) + 11276LL) & 1) != 0 ||
      (*(_BYTE*)(a1 + 316) & 1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 960) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(a1 + 1076) & 1) == 0) {
      return result;
    }
    v81 = a1 + 952;
    v82 = *(_QWORD*)(a1 + 976);
    if (v82 != 0) {
      goto LABEL_171;
    }
  }
  else {
    v81 = a1 + 192;
    v82 = *(_QWORD*)(a1 + 216);
    if (v82 != 0) {
    LABEL_171:
      game_map_76a840(a1, v82),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v26 = COERCE_AS(__typeof__(v26),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
          v27 = COERCE_AS(__typeof__(v27),
                          PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      result = (__int64 (**)(void))(*v4 + 8),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v26 = COERCE_AS(__typeof__(v26),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v27 = COERCE_AS(__typeof__(v27),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
      if (*(_BYTE*)result == 0 ||
          (result = (__int64 (**)(void))game_UnitPool_Get_alt1(result),
           (__int64 (**)(void))v82 != result)) {
        *(_BYTE*)v2 = 1;
      }
      return result;
    }
  }
  if ((*(_BYTE*)(*(_QWORD*)(v81 + 8) + 11277LL) & 0x80) == 0) {
    v83 = *(_WORD**)(v81 + 32);
    if (v83 != nullptr) {
      return (__int64 (**)(void))game_map_anonymous_TrickEntity_TryBroken(
          *(_QWORD*)(*GameData_212cfb8[0] + 16), a1, v83);
    }
  }
  return result;
}

__int64 game_map_anonymous_7b5500(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  int v7;
  int v8;

  if ((*(_BYTE*)(*(_QWORD*)(result + 200) + 11276LL) & 1) != 0 ||
      (*(_BYTE*)(result + 316) & 1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(result + 960) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(result + 1076) & 1) == 0) {
      return result;
    }
    v1 = 952;
  }
  else {
    v1 = 192;
  }
  v2 = result + v1;
  v3 = *(_QWORD*)(result + v1 + 24);
  if (v3 != 0 && *(_BYTE*)(v3 + 496) == 0) {
    if ((*(_BYTE*)(v3 + 416) & 8) != 0 ||
        *(_WORD*)(v3 + 492) == 0 &&
            (v8 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF,
             ((result = game_HasSkill_alt1((_QWORD*)(v3 + 1744),
                                           (unsigned int*)&v8)) &
              1) != 0) &&
            (v3 = *(_QWORD*)(v2 + 24)) != 0) {
      v4 = *(_QWORD*)(v3 + 440);
      if (v4 != 0) {
        v5 = *(_BYTE*)(v4 + 16);
      }
      else {
        v5 = 9;
      }
      if (((1 << v5) & 6) != 0) {
        v6 = *(_QWORD*)(v3 + 392);
        if (v6 != 0) {
          v7 = *(unsigned __int8*)(v6 + 449);
          if (v7 != 0) {
            *(_DWORD*)(GameData_21ca2f8 + 320) += v7;
            if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
                (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
              *(_DWORD*)(GameData_22400f8 + 12) |= 0x100000u;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 game_map_anonymous_7b5740(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  int v7;

  if ((*(_BYTE*)(*(_QWORD*)(result + 200) + 11276LL) & 1) != 0 ||
      (*(_BYTE*)(result + 316) & 1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(result + 960) + 11276LL) & 1) != 0) {
      return result;
    }
    if ((*(_BYTE*)(result + 1076) & 1) == 0) {
      return result;
    }
    v1 = result + 952;
    v2 = *(_QWORD*)(result + 976);
    if (v2 == 0) {
      return result;
    }
  }
  else {
    v1 = result + 192;
    v2 = *(_QWORD*)(result + 216);
    if (v2 == 0) {
      return result;
    }
  }
  if (*(_BYTE*)(v2 + 496) == 0) {
    if ((*(_BYTE*)(v2 + 416) & 8) != 0 ||
        *(_WORD*)(v2 + 492) == 0 &&
            (v3 = result,
             v7 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF,
             v4 = game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)&v7),
             result = v3, (v4 & 1) != 0)) {
      if (*(_BYTE*)(v1 + 16) == 4) {
        v5 = 0;
      }
      else {
        v5 = *(_QWORD*)(result + 760LL * *(unsigned __int8*)(v1 + 16) + 216);
      }
      if (*(_BYTE*)(*(_QWORD*)(v1 + 8) + 760LL * *(unsigned __int8*)(v1 + 17) +
                    32) != 4 &&
          v5 != 0) {
        v6 =
            *(_QWORD*)(result +
                       760LL *
                           *(unsigned __int8*)(*(_QWORD*)(v1 + 8) +
                                               760LL * *(unsigned __int8*)(v1 +
                                                                           17) +
                                               32) +
                       216);
        if (v6 != 0) {
          result = game_ItemSeq_GainBind_8afdf0(result, v5, v6);
          if (result != 0) {
            *(_QWORD*)(GameData_21cd108 + 12672) |= 0x20000uLL;
          }
        }
      }
    }
  }
  return result;
}

__int64 game_map_anonymous_814160(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  __int64* v29;
  int i;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  int v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  bool v39;
  unsigned __int64 v40;
  __int64** v41;
  __int64* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  _BOOL8 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 primeEm;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  _QWORD* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  _QWORD* v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  _QWORD* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  unsigned __int64 v79;
  __int64* v80;
  int j;
  __int64 v82;
  __int64 v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64** v92;
  __int64* v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  float v98;
  float v99;
  float v100;
  _BOOL8 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  _QWORD* v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  _QWORD* v119;
  unsigned __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  _QWORD* v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64* v129;
  unsigned __int64 v130;
  int v132;
  int v133;

  v3 = GameData_21ec7c8;
  if (*(_QWORD*)(GameData_21ec7c8 + 128) != 0) {
    v4 = *(_QWORD**)(GameData_21ec7c8 + 120);
    if (v4 != nullptr) {
      v1 = 128;
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v4);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = *(_QWORD*)(v3 + 112);
    *(_QWORD*)(v3 + 120) = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v10) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v10 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v10 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v10 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v10 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v10 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v10 + 48) = 0;
          v12 = *(_QWORD*)(v3 + 104) + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    *(_QWORD*)(v3 + 128) = 0;
  }
  if (*(_QWORD*)(v3 + 168) != 0) {
    v14 = *(_QWORD**)(v3 + 160);
    if (v14 != nullptr) {
      v1 = 128;
      v15 = fw_memory_g_heap_manager_ptr;
      do {
        v16 = (_QWORD*)*v14;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v17, v14);
        v14 = v16;
      } while (v16 != nullptr);
    }
    v18 = *(_QWORD*)(v3 + 152);
    *(_QWORD*)(v3 + 160) = 0;
    if (v18 != 0) {
      v19 = v18 & 7;
      if (v18 >= 8) {
        v21 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        v20 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v20) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v20 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v20 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v20 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v20 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v20 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v20 + 48) = 0;
          v22 = *(_QWORD*)(v3 + 144) + 8 * v20;
          v20 += 8;
          *(_QWORD*)(v22 + 56) = 0;
        } while (v21 != v20);
      }
      else {
        v20 = 0;
      }
      if (v19 != 0) {
        v23 = 8 * v20;
        do {
          --v19;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + v23) = 0;
          v23 += 8;
        } while (v19 != 0);
      }
    }
    *(_QWORD*)(v3 + 168) = 0;
  }
  v133 = 1322144625;
  if (((*(__int64 (**)(__int64, int*))(*(_QWORD*)a1 + 16LL))(a1, &v133) & 1) ==
      0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 24LL))(a1, 0);
  }
  v24 = *(int*)(a1 + 20);
  v25 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 20) = v24 + 1;
  v26 = *(unsigned __int8*)(v25 + v24);
  *(_DWORD*)(a1 + 20) = v24 + 2;
  v27 = *(unsigned __int8*)(v25 + v24 + 1);
  *(_DWORD*)(a1 + 20) = v24 + 3;
  v28 = v27 | (*(unsigned __int8*)(v25 + v24 + 2) << 8);
  if (v28 == 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 24LL))(a1, 0);
  }
  v29 = (__int64*)(v3 + 160);
  v132 = v26;
  for (i = 0; i != v28; ++i) {
    v31 = *(int*)(a1 + 20);
    v32 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)(a1 + 20) = v31 + 1;
    v33 = *(unsigned __int8*)(v32 + v31);
    *(_DWORD*)(a1 + 20) = v31 + 2;
    v34 = v33 | (*(unsigned __int8*)(v32 + v31 + 1) << 8);
    *(_DWORD*)(a1 + 20) = v31 + 3;
    v35 = v34 | (*(unsigned __int8*)(v32 + v31 + 2) << 16);
    *(_DWORD*)(a1 + 20) = v31 + 4;
    v36 = *(unsigned __int8*)(v32 + v31 + 3);
    *(_DWORD*)(a1 + 20) = v31 + 5;
    v37 = *(_QWORD*)(v3 + 152);
    v38 = v35 | (unsigned int)(v36 << 24);
    v39 = *(_BYTE*)(v32 + v31 + 4) != 0;
    if (v37 != 0) {
      v40 = v37 - 1;
      if ((v37 & (v37 - 1)) != 0) {
        v1 = v38;
        if (v37 <= v38) {
          v1 = (unsigned int)v38 % (unsigned int)v37;
        }
      }
      else {
        v1 = ((_DWORD)v37 - 1) & (unsigned int)v38;
      }
      v41 = *(__int64***)(*(_QWORD*)(v3 + 144) + 8 * v1);
      if (v41 != nullptr) {
        v42 = *v41;
        if (v42 != nullptr) {
          if ((v37 & v40) == 0) {
            while (1) {
              v44 = v42[1];
              if (v44 == v38) {
                if (*((_DWORD*)v42 + 4) == (_DWORD)v38) {
                  goto LABEL_131;
                }
              }
              else if ((v44 & v40) != v1) {
                goto LABEL_56;
              }
              v42 = (__int64*)*v42;
              if (v42 == nullptr) {
                goto LABEL_56;
              }
            }
          }
          do {
            v43 = v42[1];
            if (v43 == v38) {
              if (*((_DWORD*)v42 + 4) == (_DWORD)v38) {
                goto LABEL_131;
              }
            }
            else {
              if (v43 >= v37) {
                v43 %= v37;
              }
              if (v43 != v1) {
                break;
              }
            }
            v42 = (__int64*)*v42;
          } while (v42 != nullptr);
        }
      }
    }
  LABEL_56:
    v45 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24, 16, 0);
    *(_QWORD*)v45 = 0;
    *(_QWORD*)(v45 + 8) = v38;
    *(_DWORD*)(v45 + 16) = v38;
    v46 = v45;
    *(_BYTE*)(v45 + 20) = v39;
    v47 = *(float*)(v3 + 176);
    v48 = (float)(unsigned __int64)(*(_QWORD*)(v3 + 168) + 1LL);
    if (v37 == 0 || (float)(v47 * (float)v37) < v48) {
      v49 = v48 / v47;
      v50 = (v37 & (v37 - 1)) != 0;
      if (v37 < 3) {
        v50 = true;
      }
      v51 = v50 | (2 * v37);
      v52 = vcvtps_u64_f32(v49);
      if (v51 <= v52) {
        v53 = v52;
      }
      else {
        v53 = v51;
      }
      if (v53 == 1) {
        v53 = 2;
      }
      else if ((v53 & (v53 - 1)) != 0) {
        primeEm = std___1___next_prime(v53);
        v37 = *(_QWORD*)(v3 + 152);
        v53 = primeEm;
      }
      if (v53 <= v37) {
        if (v53 >= v37) {
          goto LABEL_117;
        }
        v60 = vcvtps_u64_f32((float)*(unsigned __int64*)(v3 + 168) /
                             *(float*)(v3 + 176));
        if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
          v60 = std___1___next_prime(v60);
        }
        else {
          v61 = 1LL << -(char)__clz(v60 - 1);
          if (v60 >= 2) {
            v60 = v61;
          }
        }
        if (v53 <= v60) {
          v53 = v60;
        }
        if (v53 >= v37) {
          goto LABEL_117;
        }
        if (v53 == 0) {
          v75 = *(_QWORD*)(v3 + 144);
          *(_QWORD*)(v3 + 144) = 0;
          if (v75 != 0) {
            v76 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v76 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v76, v75);
          }
          *(_QWORD*)(v3 + 152) = 0;
          goto LABEL_117;
        }
      }
      v55 = fw_memory_g_heap_manager_ptr;
      if (v53 >> 61 != 0) {
      LABEL_231:
        GameRoutine_60a210();
      }
      v56 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v53, 16, 0);
      v57 = *(_QWORD*)(v3 + 144);
      *(_QWORD*)(v3 + 144) = v56;
      if (v57 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) == 0) {
          v58 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v58, v57);
      }
      *(_QWORD*)(v3 + 152) = v53;
      if (v53 >= 8) {
        v59 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v59) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v59 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v59 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v59 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v59 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v59 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v59 + 48) = 0;
          v62 = *(_QWORD*)(v3 + 144) + 8 * v59;
          v59 += 8;
          *(_QWORD*)(v62 + 56) = 0;
        } while ((v53 & 0x1FFFFFFFFFFFFFF8LL) != v59);
      }
      else {
        v59 = 0;
      }
      v63 = v53 & 7;
      if ((v53 & 7) != 0) {
        v64 = 8 * v59;
        do {
          --v63;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + v64) = 0;
          v64 += 8;
        } while (v63 != 0);
      }
      v65 = (_QWORD*)*v29;
      if (*v29 == 0) {
        goto LABEL_117;
      }
      v66 = v65[1];
      v67 = v53 - 1;
      if ((v53 & (v53 - 1)) == 0) {
        v71 = v66 & v67;
        *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v71) = v29;
        while (1) {
          v72 = (_QWORD*)*v65;
          if (*v65 == 0) {
            break;
          }
          v73 = v72[1] & v67;
          if (v73 == v71) {
            v65 = (_QWORD*)*v65;
          }
          else {
            v74 = *(_QWORD*)(v3 + 144);
            if (*(_QWORD*)(v74 + 8 * v73) != 0) {
              *v65 = *v72;
              *v72 = **(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v73);
              **(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v73) = v72;
            }
            else {
              *(_QWORD*)(v74 + 8 * v73) = v65;
              v65 = v72;
              v71 = v73;
            }
          }
        }
      LABEL_117:
        v37 = *(_QWORD*)(v3 + 152);
        if ((v37 & (v37 - 1)) != 0) {
          if (v37 <= v38) {
            v1 = v38 % v37;
          }
          else {
            v1 = v38;
          }
        }
        else {
          v1 = ((_DWORD)v37 - 1) & (unsigned int)v38;
        }
        goto LABEL_122;
      }
      if (v66 >= v53) {
        v66 %= v53;
      }
      *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v66) = v29;
      v68 = (_QWORD*)*v65;
      if (*v65 == 0) {
        goto LABEL_117;
      }
      while (1) {
        v69 = v68[1];
        if (v69 >= v53) {
          v69 %= v53;
        }
        if (v69 != v66) {
          v70 = *(_QWORD*)(v3 + 144);
          if (*(_QWORD*)(v70 + 8 * v69) == 0) {
            *(_QWORD*)(v70 + 8 * v69) = v65;
            goto LABEL_94;
          }
          *v65 = *v68;
          *v68 = **(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v69);
          **(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v69) = v68;
          v68 = v65;
        }
        v69 = v66;
      LABEL_94:
        v65 = v68;
        v68 = (_QWORD*)*v68;
        v66 = v69;
        if (v68 == nullptr) {
          goto LABEL_117;
        }
      }
    }
  LABEL_122:
    v77 = *(_QWORD*)(v3 + 144);
    v78 = *(__int64**)(v77 + 8 * v1);
    if (v78 != nullptr) {
      *(_QWORD*)v46 = *v78;
      *v78 = v46;
    }
    else {
      *(_QWORD*)v46 = *v29;
      *v29 = v46;
      *(_QWORD*)(v77 + 8 * v1) = v29;
      if (*(_QWORD*)v46 != 0) {
        v79 = *(_QWORD*)(*(_QWORD*)v46 + 8LL);
        if ((v37 & (v37 - 1)) != 0) {
          if (v79 >= v37) {
            v79 %= v37;
          }
        }
        else {
          v79 &= v37 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v79) = v46;
      }
    }
    ++*(_QWORD*)(v3 + 168);
  LABEL_131:;
  }
  if (v132 == 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 24LL))(a1, 0);
  }
  v80 = (__int64*)(v3 + 120);
  for (j = 0; j != v28; ++j) {
    v82 = *(int*)(a1 + 20);
    v83 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)(a1 + 20) = v82 + 1;
    v84 = *(unsigned __int8*)(v83 + v82);
    *(_DWORD*)(a1 + 20) = v82 + 2;
    v85 = v84 | (*(unsigned __int8*)(v83 + v82 + 1) << 8);
    *(_DWORD*)(a1 + 20) = v82 + 3;
    v86 = v85 | (*(unsigned __int8*)(v83 + v82 + 2) << 16);
    *(_DWORD*)(a1 + 20) = v82 + 4;
    v87 = *(unsigned __int8*)(v83 + v82 + 3);
    *(_DWORD*)(a1 + 20) = v82 + 5;
    v88 = *(unsigned __int8*)(v83 + v82 + 4);
    v89 = *(_QWORD*)(v3 + 112);
    v90 = v86 | (unsigned int)(v87 << 24);
    if (v89 != 0) {
      v91 = v89 - 1;
      if ((v89 & (v89 - 1)) != 0) {
        v1 = v90;
        if (v89 <= v90) {
          v1 = (unsigned int)v90 % (unsigned int)v89;
        }
      }
      else {
        v1 = ((_DWORD)v89 - 1) & (unsigned int)v90;
      }
      v92 = *(__int64***)(*(_QWORD*)(v3 + 104) + 8 * v1);
      if (v92 != nullptr) {
        v93 = *v92;
        if (v93 != nullptr) {
          if ((v89 & v91) == 0) {
            while (1) {
              v95 = v93[1];
              if (v95 == v90) {
                if (*((_DWORD*)v93 + 4) == (_DWORD)v90) {
                  goto LABEL_229;
                }
              }
              else if ((v95 & v91) != v1) {
                goto LABEL_154;
              }
              v93 = (__int64*)*v93;
              if (v93 == nullptr) {
                goto LABEL_154;
              }
            }
          }
          do {
            v94 = v93[1];
            if (v94 == v90) {
              if (*((_DWORD*)v93 + 4) == (_DWORD)v90) {
                goto LABEL_229;
              }
            }
            else {
              if (v94 >= v89) {
                v94 %= v89;
              }
              if (v94 != v1) {
                break;
              }
            }
            v93 = (__int64*)*v93;
          } while (v93 != nullptr);
        }
      }
    }
  LABEL_154:
    v96 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24, 16, 0);
    *(_QWORD*)v96 = 0;
    *(_QWORD*)(v96 + 8) = v90;
    *(_DWORD*)(v96 + 16) = v90;
    *(_DWORD*)(v96 + 20) = v88;
    v97 = v96;
    v98 = *(float*)(v3 + 136);
    v99 = (float)(unsigned __int64)(*(_QWORD*)(v3 + 128) + 1LL);
    if (v89 == 0 || (float)(v98 * (float)v89) < v99) {
      v100 = v99 / v98;
      v101 = (v89 & (v89 - 1)) != 0;
      if (v89 < 3) {
        v101 = true;
      }
      v102 = v101 | (2 * v89);
      v103 = vcvtps_u64_f32(v100);
      if (v102 <= v103) {
        v104 = v103;
      }
      else {
        v104 = v102;
      }
      if (v104 == 1) {
        v104 = 2;
      }
      else if ((v104 & (v104 - 1)) != 0) {
        v105 = std___1___next_prime(v104);
        v89 = *(_QWORD*)(v3 + 112);
        v104 = v105;
      }
      if (v104 <= v89) {
        if (v104 >= v89) {
          goto LABEL_215;
        }
        v111 = vcvtps_u64_f32((float)*(unsigned __int64*)(v3 + 128) /
                              *(float*)(v3 + 136));
        if (v89 < 3 || (v89 & (v89 - 1)) != 0) {
          v111 = std___1___next_prime(v111);
        }
        else {
          v112 = 1LL << -(char)__clz(v111 - 1);
          if (v111 >= 2) {
            v111 = v112;
          }
        }
        if (v104 <= v111) {
          v104 = v111;
        }
        if (v104 >= v89) {
          goto LABEL_215;
        }
        if (v104 == 0) {
          v126 = *(_QWORD*)(v3 + 104);
          *(_QWORD*)(v3 + 104) = 0;
          if (v126 != 0) {
            v127 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v127 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, v126);
          }
          *(_QWORD*)(v3 + 112) = 0;
          goto LABEL_215;
        }
      }
      if (v104 >> 61 != 0) {
        goto LABEL_231;
      }
      v106 = fw_memory_g_heap_manager_ptr;
      v107 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v104, 16, 0);
      v108 = *(_QWORD*)(v3 + 104);
      *(_QWORD*)(v3 + 104) = v107;
      if (v108 != 0) {
        v109 = 128;
        if (*(_QWORD*)(*(_QWORD*)v106 + 200LL) == 0) {
          v109 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v106 + v109, v108);
      }
      *(_QWORD*)(v3 + 112) = v104;
      if (v104 >= 8) {
        v110 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v110) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v110 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v110 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v110 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v110 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v110 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v110 + 48) = 0;
          v113 = *(_QWORD*)(v3 + 104) + 8 * v110;
          v110 += 8;
          *(_QWORD*)(v113 + 56) = 0;
        } while ((v104 & 0x1FFFFFFFFFFFFFF8LL) != v110);
      }
      else {
        v110 = 0;
      }
      v114 = v104 & 7;
      if ((v104 & 7) != 0) {
        v115 = 8 * v110;
        do {
          --v114;
          *(_QWORD*)(*(_QWORD*)(v3 + 104) + v115) = 0;
          v115 += 8;
        } while (v114 != 0);
      }
      v116 = (_QWORD*)*v80;
      if (*v80 == 0) {
        goto LABEL_215;
      }
      v117 = v116[1];
      v118 = v104 - 1;
      if ((v104 & (v104 - 1)) == 0) {
        v122 = v117 & v118;
        *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v122) = v80;
        while (1) {
          v123 = (_QWORD*)*v116;
          if (*v116 == 0) {
            break;
          }
          v124 = v123[1] & v118;
          if (v124 == v122) {
            v116 = (_QWORD*)*v116;
          }
          else {
            v125 = *(_QWORD*)(v3 + 104);
            if (*(_QWORD*)(v125 + 8 * v124) != 0) {
              *v116 = *v123;
              *v123 = **(_QWORD**)(*(_QWORD*)(v3 + 104) + 8 * v124);
              **(_QWORD**)(*(_QWORD*)(v3 + 104) + 8 * v124) = v123;
            }
            else {
              *(_QWORD*)(v125 + 8 * v124) = v116;
              v116 = v123;
              v122 = v124;
            }
          }
        }
      LABEL_215:
        v89 = *(_QWORD*)(v3 + 112);
        if ((v89 & (v89 - 1)) != 0) {
          if (v89 <= v90) {
            v1 = v90 % v89;
          }
          else {
            v1 = v90;
          }
        }
        else {
          v1 = ((_DWORD)v89 - 1) & (unsigned int)v90;
        }
        goto LABEL_220;
      }
      if (v117 >= v104) {
        v117 %= v104;
      }
      *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v117) = v80;
      v119 = (_QWORD*)*v116;
      if (*v116 == 0) {
        goto LABEL_215;
      }
      while (1) {
        v120 = v119[1];
        if (v120 >= v104) {
          v120 %= v104;
        }
        if (v120 != v117) {
          v121 = *(_QWORD*)(v3 + 104);
          if (*(_QWORD*)(v121 + 8 * v120) == 0) {
            *(_QWORD*)(v121 + 8 * v120) = v116;
            goto LABEL_192;
          }
          *v116 = *v119;
          *v119 = **(_QWORD**)(*(_QWORD*)(v3 + 104) + 8 * v120);
          **(_QWORD**)(*(_QWORD*)(v3 + 104) + 8 * v120) = v119;
          v119 = v116;
        }
        v120 = v117;
      LABEL_192:
        v116 = v119;
        v119 = (_QWORD*)*v119;
        v117 = v120;
        if (v119 == nullptr) {
          goto LABEL_215;
        }
      }
    }
  LABEL_220:
    v128 = *(_QWORD*)(v3 + 104);
    v129 = *(__int64**)(v128 + 8 * v1);
    if (v129 != nullptr) {
      *(_QWORD*)v97 = *v129;
      *v129 = v97;
    }
    else {
      *(_QWORD*)v97 = *v80;
      *v80 = v97;
      *(_QWORD*)(v128 + 8 * v1) = v80;
      if (*(_QWORD*)v97 != 0) {
        v130 = *(_QWORD*)(*(_QWORD*)v97 + 8LL);
        if ((v89 & (v89 - 1)) != 0) {
          if (v130 >= v89) {
            v130 %= v89;
          }
        }
        else {
          v130 &= v89 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(v3 + 104) + 8 * v130) = v97;
      }
    }
    ++*(_QWORD*)(v3 + 128);
  LABEL_229:;
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 24LL))(a1, 0);
}

void __attribute__((noreturn)) game_map_anonymous_8184d0()
{
  GameRoutine_60a1f0("vector");
}

__int64 game_map_anonymous_9674c0(__int64 a1, __n128 a2)
{
  int v3;
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 result;
  __int64* v12;
  __int64** v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  char v22;
  _DWORD* v23;
  __int64 v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  int v33;
  struct {
    __int64* v34;
    __int64 v35;
  } v34_;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_22;
    }
    v5 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v5 + 172) == *(float*)(v5 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160);
    }
    else {
      a2 = *(__n128*)(v5 + 208);
    }
    if (LANES128(a2).n128_f32[3] != 0x1.0000000000000p+0f ||
        (a2 = ((__n128 (*)(unsigned __int64, float)) *
               (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
             v5 + 160, LANES128(a2).n128_f32[3]),
         LANES128(a2).n128_f32[3] != 0x1.0000000000000p+0f)) {
    LABEL_22:
      v6 = *GameData_21309c8[0];
      if (*GameData_21309c8[0] != 0) {
        LOBYTE(v6) = *(_BYTE*)(v6 + 8) == 2;
      }
      if ((v6 & 1) == 0 && *GameData_212ce98[0] != 0 &&
          game_script_map_effect_g_effect_manager != 0) {
        v8 = *(unsigned __int8*)(a1 + 224);
        v9 = *(_QWORD*)(a1 + 232);
        if ((v8 & 1) == 0) {
          v9 = v8 >> 1;
        }
        if (v9 != 0) {
          LANES128(a2).n128_u32[0] = 0x1.0000000000000p+0f;
          if ((v8 & 1) != 0) {
            v10 = *(_QWORD*)(a1 + 240);
          }
          else {
            v10 = a1 + 225;
          }
          EffectConst_961520((__int64*)&v34_.v34, v10, (__int64*)(a1 + 160), 5,
                             0, COERCE_AS(int32x2_t, LANES128(a2).n128_u64[0]),
                             0x0.0p+0f);
          GameRoutine_9a48c0(a1, &v34_.v34);
          v12 = v34_.v34;
          result = v34_.v35;
          v13 = (__int64**)(a1 + 288);
          if (v34_.v35 != 0) {
            goto LABEL_29;
          }
        LABEL_30:
          v15 = *(_QWORD*)(a1 + 296);
          *(_QWORD*)(a1 + 288) = v12;
          *(_QWORD*)(a1 + 296) = result;
          if (v15 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
              std___1___shared_weak_count___release_weak(v15);
            }
            result = *(_QWORD*)(a1 + 296);
          }
          if (result != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v16 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak(v16);
            }
          }
          v17 = v34_.v35;
          if (v34_.v35 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v34_.v35 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            result = std___1___shared_weak_count___release_weak(v17);
          }
          v18 = **v13;
          if (v18 != 0 && *(_DWORD*)(v18 + 16) == *((_DWORD*)*v13 + 2)) {
            v19 = *(_QWORD*)(*(_QWORD*)(v18 + 24) + 112LL);
            if (v19 == 0) {
              goto LABEL_66;
            }
            v20 = &GameData_21f4908;
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4950,
                                      memory_order_acquire) &
                 1) == 0) {
              v32 = v19;
              v33 = __cxa_guard_acquire(&GameData_21f4950);
              v19 = v32;
              if (v33 != 0) {
                GameData_21f4910 = (__int64)&GameData_1a90e42;
                GameData_21f4908 = game_HashString((__int64)&GameData_1a90e42);
                GameData_21f4918 = 1;
                GameData_21f4928 = (__int64)&GameData_1aa0ada;
                GameData_21f4920 = game_HashString((__int64)&GameData_1aa0ada);
                GameData_21f4930 = 2;
                GameData_21f4940 = (__int64)&GameData_1a8d4eb;
                GameData_21f4938 = game_HashString((__int64)&GameData_1a8d4eb);
                GameData_21f4948 = 3;
                __cxa_guard_release(&GameData_21f4950);
                v19 = v32;
              }
            }
            v21 = game_HashString(v19);
            if (v21 == GameData_21f4908 ||
                (v20 = &GameData_21f4920, v21 == GameData_21f4920) ||
                (v20 = &GameData_21f4938, v21 == GameData_21f4938)) {
              v22 = *((_BYTE*)v20 + 16);
            }
            else {
            LABEL_66:
              v22 = 3;
            }
            v25 = *(float32x4_t*)(a1 + 160);
            v26 = *(float32x4_t*)(a1 + 176);
            *(_BYTE*)(a1 + 360) = v22;
            v27 = vsubq_f32(v26, v25);
            v28 = 0x1.99999a0000000p-3f * LANES128(v27).n128_f32[0];
            PSEUDO_LOW_LANE128(v27, n128_f32,
                               vmuls_lane_f32(0x1.99999a0000000p-3f, v27, 2));
            PSEUDO_LOW_LANE128(
                v27, n128_f32,
                (float)(PSEUDO_UNFUSED(LANES128(v27).n128_f32[0] *
                                       LANES128(v27).n128_f32[0])) +
                    (float)(v28 * v28));
            v29 = 0x1.0000000000000p-2f;
            v30 = sqrtf(LANES128(v27).n128_f32[0]) * 0x1.0000000000000p-3f;
            v31 = 0x1.0000000000000p+0f;
            if (v30 <= 0x1.0000000000000p+0f) {
              v31 = v30;
            }
            if (v30 >= 0x1.0000000000000p-2f) {
              v29 = v31;
            }
            return Situation_7677a0((__int64*)(a1 + 320), 0x0.0p+0f,
                                    0x1.0000000000000p+0f, v29);
          }
          else {
            v23 = *(_DWORD**)(a1 + 272);
            if (*(_QWORD*)v23 != 0 &&
                *(_DWORD*)(*(_QWORD*)v23 + 16LL) == v23[2]) {
              v24 = *(_QWORD*)(a1 + 8);
              if (v24 != 0) {
                while (1) {
                  if (*(_BYTE*)v24 == 2) {
                    if (*(_DWORD*)(v24 + 32) == 2) {
                      goto LABEL_64;
                    }
                  }
                  else if (*(_BYTE*)v24 == 0) {
                    break;
                  }
                  v24 += 64;
                }
              }
            }
            else {
              v24 = *(_QWORD*)(a1 + 8);
              if (v24 != 0) {
                while (1) {
                  if (*(_BYTE*)v24 == 2) {
                    if (*(_DWORD*)(v24 + 32) == 3) {
                    LABEL_64:
                      *(_QWORD*)(a1 + 16) = v24;
                      *(_WORD*)(a1 + 136) &= ~0x80u;
                      break;
                    }
                  }
                  else if (*(_BYTE*)v24 == 0) {
                    break;
                  }
                  v24 += 64;
                }
              }
            }
            *(_WORD*)(a1 + 136) |= 8u;
          }
          return result;
        }
      }
    }
  }
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
  v13 = (__int64**)(a1 + 288);
  *(_DWORD*)(result + 48) = 0x2000;
  v14 = GameData_2131678;
  *(_WORD*)(result + 108) = 256;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_DWORD*)(result + 104) = 0;
  *(_DWORD*)(result + 112) = -1082130432;
  *(_QWORD*)(result + 24) = 0;
  v12 = (__int64*)(result + 24);
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 0;
  *(_WORD*)(result + 116) = 0;
  *(_WORD*)(result + 136) = 0;
  *(_BYTE*)(result + 160) = 0;
  *(_BYTE*)(result + 288) = 0;
  *(_QWORD*)(result + 272) = 0;
  *(_QWORD*)(result + 280) = 0;
  *(_QWORD*)(result + 256) = 0;
  *(_QWORD*)(result + 264) = 0;
  *(_QWORD*)(result + 240) = 0;
  *(_QWORD*)(result + 248) = 0;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)(result + 216) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_DWORD*)(result + 127) = 0;
  v34_.v34 = (__int64*)(result + 24);
  v34_.v35 = result;
  *(_QWORD*)result = v14 + 16;
  *(_DWORD*)(result + 292) = 2;
LABEL_29:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                            memory_order_relaxed);
  goto LABEL_30;
}

void game_map_anonymous_9679c0(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  __int64 v6;
  bool v7;
  float v8;
  float v9;
  int v10;
  float v11;
  float v12;
  int v13;
  float v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float32x4_t v24;
  float v25;
  unsigned __int64 v26;
  __int64 v27;
  float v28;
  float32x4_t v29;
  int v30;
  float v31;
  float32x4_t v32;
  float v33;
  float32x4_t v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  bool v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64* v46;
  float32x4_t v47;
  __int64 v48;
  unsigned int v49;
  unsigned int i;
  float32x4_t* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  int16x4_t v55;
  float32x4_t v56;
  float v57;
  __int128 v58;
  float32x4_t v59;
  float32x2_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float v64;
  float v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  unsigned __int32 v71;
  float32x4_t v72;
  float32x2_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float v77;
  float v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x2_t v83;
  float32x2_t v84;
  float32x4_t v85;
  float32x2_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float v90;
  float v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  __int64* v96;
  __int64 v97;
  unsigned int v98;
  unsigned int j;
  __int64 v100;
  _DWORD* v101;
  unsigned __int8* v102;
  unsigned int v103;
  bool v104;
  int v105;
  int v107;
  __int64 v108;
  int v109;
  __int64 v110;
  unsigned __int32 v111;
  float32x4_t v112;
  float32x4_t v113;
  unsigned __int32 v114;
  float32x4_t v115;
  float32x4_t v116;
  __int128 v117;
  __int128 v118;
  __int128 v119;
  unsigned __int32 v120;
  float32x4_t v121;
  int8x16_t v122;
  int8x16_t v123;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_24;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      goto LABEL_24;
    }
  }
  v6 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    LOBYTE(v6) = *(_BYTE*)(v6 + 8) == 2;
  }
  if ((v6 & 1) != 0 ||
      (*GameData_212ce98[0] != 0
           ? (v7 = game_script_map_effect_g_effect_manager == 0)
           : (v7 = true),
       v7)) {
  LABEL_24:
    GameRoutine_14a1390(a1 + 288, 1);
    goto LABEL_92;
  }
  v8 = *(float*)(a1 + 332);
  v9 = *(float*)(a1 + 328);
  v10 = *(unsigned __int8*)(a1 + 345);
  *(_BYTE*)(a1 + 345) = 0;
  if (v8 < v9) {
    v11 = v8 + (**(float (***)(__int64))(a1 + 320))(a1 + 320);
    if (*(float*)(a1 + 328) < v11) {
      v11 = *(float*)(a1 + 328);
    }
    *(float*)(a1 + 332) = v11;
    goto LABEL_26;
  }
  if (v10 != 0) {
  LABEL_26:
    v12 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 320) + 16LL))(a1 + 320);
    v13 = *(unsigned __int8*)(a1 + 360);
    v14 = v12 + 0.0f;
    if (v13 == 3) {
      v18 = *(float32x4_t*)(a1 + 160);
      v17 = *(float32x4_t*)(a1 + 176);
      v19 = vsubq_f32(v17, v18);
      v121 = v17;
      v20 = vmuls_lane_f32(0x1.99999a0000000p-3f, v19, 2);
      v21 = (float)(sqrtf((float)(v20 * v20) +
                          (float)((float)(0x1.99999a0000000p-3f *
                                          LANES128(v19).n128_f32[0]) *
                                  (float)(0x1.99999a0000000p-3f *
                                          LANES128(v19).n128_f32[0]))) *
                    0x1.279a740000000p-1f) *
            0.5f;
      v22 = 0x1.0000000000000p+1f;
      if (v21 <= 0x1.0000000000000p+1f) {
        v22 = v21;
      }
      v23 = v22 * 5.0f;
      if (v21 < 0x1.0000000000000p+0f) {
        v23 = 5.0f;
      }
      LANES128(v17).n128_f32[0] =
          v23 + (float)((float)(LANES128(v18).n128_f32[1] +
                                LANES128(v17).n128_f32[1]) *
                        0.5f);
      LANES128(v121).n128_f32[0] =
          LANES128(v18).n128_f32[0] + (float)(v14 * LANES128(v19).n128_f32[0]);
      LANES128(v18).n128_f32[0] = vmuls_lane_f32(v14, v19, 2);
      LANES128(v24).n128_u64[0] = LANES128(v121).n128_u64[0];
      LANES128(v24).n128_u64[1] = COERCE_UNSIGNED_INT(
          LANES128(v18).n128_f32[2] + LANES128(v18).n128_f32[0]);
      v121 = v24;
      if (v12 >= 0.5f) {
        v25 = LANES128(v17).n128_f32[0] +
              (float)((float)((float)((float)(v14 + -0.5f) +
                                      (float)(v14 + -0.5f)) *
                              (float)((float)(v14 + -0.5f) +
                                      (float)(v14 + -0.5f))) *
                      (float)(LANES128(v17).n128_f32[1] -
                              LANES128(v17).n128_f32[0]));
      }
      else {
        v25 = LANES128(v17).n128_f32[0] -
              (float)((float)((float)(0x1.0000000000000p+0f -
                                      (float)(v14 + v14)) *
                              (float)(0x1.0000000000000p+0f -
                                      (float)(v14 + v14))) *
                      (float)(LANES128(v17).n128_f32[0] -
                              LANES128(v18).n128_f32[1]));
      }
      LANES128(v121).n128_f32[1] = v25;
    }
    else if (v13 == 2) {
      v15 = *(float32x4_t*)(a1 + 160);
      v16 = vmulq_n_f32(vsubq_f32(*(float32x4_t*)(a1 + 176), v15), v14);
      LANES128(v16).n128_u32[3] = 0;
      v121 = vaddq_f32(v15, v16);
    }
    else {
      v26 = *(_QWORD*)(a1 + 168);
      LANES128(v121).n128_u64[0] = *(_QWORD*)(a1 + 160);
      LANES128(v121).n128_u64[1] = v26;
    }
    v28 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 320) + 16LL))(a1 + 320);
    v29 = *(float32x4_t*)(a1 + 160);
    v30 = *(unsigned __int8*)(a1 + 360);
    v31 = v28 + 0x1.99999a0000000p-4f;
    if (v30 == 3) {
      v33 = 0x1.0000000000000p+1f;
      v34 = vsubq_f32(*(float32x4_t*)(a1 + 176), v29);
      LODWORD(v35) = HIDWORD(*(_QWORD*)(a1 + 176));
      v36 = vmuls_lane_f32(0x1.99999a0000000p-3f, v34, 2);
      v37 = (float)(sqrtf((float)(v36 * v36) +
                          (float)((float)(0x1.99999a0000000p-3f *
                                          LANES128(v34).n128_f32[0]) *
                                  (float)(0x1.99999a0000000p-3f *
                                          LANES128(v34).n128_f32[0]))) *
                    0x1.279a740000000p-1f) *
            0.5f;
      if (v37 <= 0x1.0000000000000p+1f) {
        v33 = v37;
      }
      v38 = v33 * 5.0f;
      if (v37 >= 0x1.0000000000000p+0f) {
        v39 = v38;
      }
      else {
        v39 = 5.0f;
      }
      v40 = v31 < 0.5f;
      v41 = v39 + (float)((float)(LANES128(v29).n128_f32[1] + v35) * 0.5f);
      v42 = v31 * LANES128(v34).n128_f32[0];
      LANES128(v29).n128_u32[3] = 0;
      v43 = LANES128(v29).n128_f32[2] + vmuls_lane_f32(v31, v34, 2);
      LANES128(v29).n128_f32[0] = LANES128(v29).n128_f32[0] + v42;
      v44 =
          v41 +
          (float)((float)((float)((float)(v31 + -0.5f) + (float)(v31 + -0.5f)) *
                          (float)((float)(v31 + -0.5f) +
                                  (float)(v31 + -0.5f))) *
                  (float)(v35 - v41));
      v45 =
          v41 -
          (float)((float)((float)(0x1.0000000000000p+0f - (float)(v31 + v31)) *
                          (float)(0x1.0000000000000p+0f - (float)(v31 + v31))) *
                  (float)(v41 - LANES128(v29).n128_f32[1]));
      if (!v40) {
        v45 = v44;
      }
      LANES128(v29).n128_f32[1] = v45;
      LANES128(v29).n128_f32[2] = v43;
    }
    else if (v30 == 2) {
      v32 = vmulq_n_f32(vsubq_f32(*(float32x4_t*)(a1 + 176), v29), v31);
      LANES128(v32).n128_u32[3] = 0;
      v29 = vaddq_f32(v29, v32);
    }
    v46 = *(__int64**)(a1 + 288);
    v47 = v121;
    v116 = v29;
    v48 = *v46;
    if (*v46 != 0 && *(_DWORD*)(v48 + 16) == *((_DWORD*)v46 + 2)) {
      v49 = *(_DWORD*)(v48 + 36);
      if (v49 != 0) {
        for (i = 0; i < v49; ++i) {
          if ((int)v49 > (int)i) {
            v51 = *(float32x4_t**)(v48 + 40 + 8LL * (int)i);
            if (v51 != nullptr) {
              v51[1] = v47;
              LANES128(v51[8]).n128_u8[0] = 1;
              v49 = *(_DWORD*)(v48 + 36);
            }
          }
        }
      }
    }
    v112 = v47;
    GameRoutine_14a3920(v46, v27);
    v52 = *(__int64**)(a1 + 288);
    v53 = *v52;
    if (*v52 == 0 || *(_DWORD*)(v53 + 16) != *((_DWORD*)v52 + 2) ||
        (v54 = *(_QWORD*)(*(_QWORD*)(v53 + 24) + 112LL)) == 0 ||
        strstr(v54, &GameData_1aa85d1) == 0) {
      LANES64(v55).n64_u64[0] =
          LANES64_OF(vmovn_s32(vceqq_f32(v112, v116))).n64_u64[0];
      if ((LANES64(v55).n64_u8[0] & 1) != 0 &&
          (LANES64(v55).n64_u8[2] & 1) != 0 &&
          (LANES64(v55).n64_u8[4] & 1) != 0) {
        v56 = vsubq_f32(*(float32x4_t*)(a1 + 176), *(float32x4_t*)(a1 + 160));
        v57 = LANES128(v56).n128_f32[2];
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v114 = LANES128(v56).n128_u32[0];
          v120 = LANES128(v56).n128_u32[2];
          v107 = __cxa_guard_acquire(&GameData_21a6130);
          LANES128(v56).n128_u32[0] = v114;
          v57 = *(float*)&v120;
          if (v107 != 0) {
            v108 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v108;
            __cxa_guard_release(&GameData_21a6130);
            LANES128(v56).n128_u32[0] = v114;
            v57 = *(float*)&v120;
          }
        }
        v58 = GameData_21a6120;
        v123 = COERCE_AS(int8x16_t, GameData_1a83090);
        if ((float)((float)(v57 * v57) + (float)(LANES128(v56).n128_f32[0] *
                                                 LANES128(v56).n128_f32[0])) >
            0.0f) {
          LANES128(v59).n128_u64[0] = LANES128(v56).n128_u32[0];
          LANES128(v59).n128_u64[1] = LODWORD(v57);
          LANES64(v60).n64_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      vmul_f32(COERCE_AS(float32x2_t, LODWORD(v57)),
                               COERCE_AS(float32x2_t, LODWORD(v57))),
                      vmul_f32(
                          COERCE_AS(float32x2_t, LANES128(v56).n128_u32[0]),
                          COERCE_AS(float32x2_t, LANES128(v56).n128_u32[0]))))
                  .n64_u64[0];
          LANES128(v61).n128_u64[0] =
              LANES64_OF(vpadd_f32(v60, v60)).n64_u64[0];
          LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
          v62 = vrsqrteq_f32(v61);
          v63 = vmulq_f32(v62, vrsqrtsq_f32(v62, vmulq_f32(v61, v62)));
          v122 = vbicq_s8(
              vmulq_f32(v59,
                        vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v61, v63)))),
              vceqzq_f32(v61));
          if (LANES128(v61).n128_f32[0] != 0.0f) {
            v117 = GameData_21a6120;
            v64 = math_Vec3_Angle(&v123, &v122);
            v58 = v117;
            v65 = v64 * 0x1.ca5dc00000000p+5f;
            *((float*)&v58 + 1) = v65;
            LANES128(v66).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v67).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v66).n128_i8[8] =
                vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v68).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v67).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            *(int8x8_t*)&LANES128(v68).n128_i8[8] =
                vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v69).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v69).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            if (LANES128_OF(vmlsq_f32(vmulq_f32(v66, v67), v69, v68))
                    .n128_f32[1] < 0.0f) {
              *((float*)&v58 + 1) = -v65;
            }
          }
        }
      }
      else {
        v70 = vsubq_f32(v116, v112);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v115 = v70;
          v109 = __cxa_guard_acquire(&GameData_21a6130);
          v70 = v115;
          if (v109 != 0) {
            v110 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v110;
            __cxa_guard_release(&GameData_21a6130);
            v70 = v115;
          }
        }
        v71 = LANES128(v70).n128_u32[2];
        v58 = GameData_21a6120;
        v123 = COERCE_AS(int8x16_t, GameData_1a83090);
        if ((float)(vmuls_lane_f32(LANES128(v70).n128_f32[2], v70, 2) +
                    (float)(LANES128(v70).n128_f32[0] *
                            LANES128(v70).n128_f32[0])) > 0.0f) {
          LANES128(v72).n128_u64[0] = LANES128(v70).n128_u32[0];
          LANES128(v72).n128_u64[1] = LANES128(v70).n128_u32[2];
          LANES64(v73).n64_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      vmul_f32(
                          COERCE_AS(float32x2_t, LANES128(v70).n128_u32[2]),
                          COERCE_AS(float32x2_t, LANES128(v70).n128_u32[2])),
                      vmul_f32(
                          COERCE_AS(float32x2_t, LANES128(v70).n128_u32[0]),
                          COERCE_AS(float32x2_t, LANES128(v70).n128_u32[0]))))
                  .n64_u64[0];
          LANES128(v74).n128_u64[0] =
              LANES64_OF(vpadd_f32(v73, v73)).n64_u64[0];
          LANES128(v74).n128_u64[1] = LANES128(v74).n128_u64[0];
          v75 = vrsqrteq_f32(v74);
          v76 = vmulq_f32(v75, vrsqrtsq_f32(v75, vmulq_f32(v74, v75)));
          v122 = vbicq_s8(
              vmulq_f32(v72,
                        vmulq_f32(v76, vrsqrtsq_f32(v76, vmulq_f32(v74, v76)))),
              vceqzq_f32(v74));
          if (LANES128(v74).n128_f32[0] != 0.0f) {
            v111 = LANES128(v70).n128_u32[2];
            v113 = v70;
            v118 = GameData_21a6120;
            v77 = math_Vec3_Angle(&v123, &v122);
            v58 = v118;
            v78 = v77 * 0x1.ca5dc00000000p+5f;
            *((float*)&v58 + 1) = v78;
            LANES128(v79).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v80).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v79).n128_i8[8] =
                vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v81).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v80).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            *(int8x8_t*)&LANES128(v81).n128_i8[8] =
                vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v82).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v82).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            if (LANES128_OF(vmlsq_f32(vmulq_f32(v79, v80), v82, v81))
                    .n128_f32[1] < 0.0f) {
              *((float*)&v58 + 1) = -v78;
            }
            v71 = v111;
            v70 = v113;
          }
        }
        if (LANES128_OF(vmulq_f32(v70, v70)).n128_f32[1] > 0.0f) {
          LANES64(v83).n64_u64[0] = LANES128(v70).n128_u32[0];
          LANES128(v70).n128_u32[0] = 0;
          LANES64(v84).n64_u64[0] =
              LANES64_OF(vadd_f32(vmul_f32(COERCE_AS(float32x2_t, v71),
                                           COERCE_AS(float32x2_t, v71)),
                                  vmul_f32(v83, v83)))
                  .n64_u64[0];
          LANES128(v85).n128_u64[0] = LANES128(v70).n128_u64[0];
          LANES128(v85).n128_u64[1] =
              LANES64_OF(vsqrt_f32(vpadd_f32(v84, v84))).n64_u32[0];
          LANES64(v86).n64_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      vmul_f32(*(float32x2_t*)&LANES128(v85).n128_i8[8],
                               *(float32x2_t*)&LANES128(v85).n128_i8[8]),
                      vmul_f32(
                          COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]))))
                  .n64_u64[0];
          LANES128(v87).n128_u64[0] =
              LANES64_OF(vpadd_f32(v86, v86)).n64_u64[0];
          LANES128(v87).n128_u64[1] = LANES128(v87).n128_u64[0];
          v88 = vrsqrteq_f32(v87);
          v89 = vmulq_f32(v88, vrsqrtsq_f32(v88, vmulq_f32(v87, v88)));
          v122 = vbicq_s8(
              vmulq_f32(v85,
                        vmulq_f32(v89, vrsqrtsq_f32(v89, vmulq_f32(v87, v89)))),
              vceqzq_f32(v87));
          if (LANES128(v87).n128_f32[0] != 0.0f) {
            v119 = v58;
            v90 = math_Vec3_Angle(&v123, &v122);
            v58 = v119;
            v91 = v90 * 0x1.ca5dc00000000p+5f;
            *(float*)&v58 = v91;
            LANES128(v92).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v93).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v92).n128_i8[8] =
                vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v94).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v93).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            *(int8x8_t*)&LANES128(v94).n128_i8[8] =
                vqtbl1_s8(v123, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v95).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v95).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            if (LANES128_OF(vmlsq_f32(vmulq_f32(v92, v93), v95, v94))
                    .n128_f32[0] < 0.0f) {
              *(float*)&v58 = -v91;
            }
          }
        }
      }
      v96 = *(__int64**)(a1 + 288);
      v97 = *v96;
      if (*v96 != 0 && *(_DWORD*)(v97 + 16) == *((_DWORD*)v96 + 2)) {
        v98 = *(_DWORD*)(v97 + 36);
        if (v98 != 0) {
          for (j = 0; j < v98; ++j) {
            if ((int)v98 > (int)j) {
              v100 = *(_QWORD*)(v97 + 40 + 8LL * (int)j);
              if (v100 != 0) {
                *(_OWORD*)(v100 + 48) = v58;
                *(_BYTE*)(v100 + 128) = 1;
                v98 = *(_DWORD*)(v97 + 36);
              }
            }
          }
        }
      }
    }
    if (*(_BYTE*)(a1 + 192) == 1) {
      Cursor_730ff0(*GameData_212cfc0[0], &v121);
    }
    v8 = *(float*)(a1 + 332);
    v9 = *(float*)(a1 + 328);
  }
  if (v8 == v9) {
    GameRoutine_14a1520(a1 + 288, 1);
  }
LABEL_92:
  v101 = *(_DWORD**)(a1 + 288);
  if (*(_QWORD*)v101 == 0 || *(_DWORD*)(*(_QWORD*)v101 + 16LL) != v101[2]) {
    v102 = *(unsigned __int8**)(a1 + 16);
    if (v102 != nullptr) {
      v103 = *v102;
      v104 = v103 > 0x10;
      v105 = (1 << v103) & 0x1CE00;
      if (!v104 && v105 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

#pragma GCC visibility pop
