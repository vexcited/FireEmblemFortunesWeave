#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084780(__int64 result);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameManager_a35190(_QWORD, _QWORD);
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1226ec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_122c900(_QWORD);
__int64 GameRoutine_122cae0(_QWORD, _QWORD);
__int64 GameRoutine_122e840(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1232280(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1235540(_QWORD, _QWORD);
__int64 GameRoutine_123f0a0(void);
__int64 GameRoutine_1241020(_QWORD);
__int64 GameRoutine_126ba80(_QWORD, _QWORD);
__int64 GameRoutine_1272e40(_QWORD, _QWORD);
__int64 GameRoutine_1285d20(_QWORD);
__int64 GameRoutine_12a6020(_QWORD, _QWORD);
__int64 GameRoutine_12a64a0(_QWORD);
__int64 GameRoutine_12a6820(_QWORD);
__int64 GameRoutine_65d6c0(_QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_6c3050(void);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6eaec0(_QWORD);
__int64 GameRoutine_74df60(_QWORD, _QWORD);
__int64 GameRoutine_762f30(_QWORD, _QWORD);
__int64 GameRoutine_960b80(_QWORD);
__int64 GameRoutine_963d60(_QWORD);
__int64 GameRoutine_a35760(_QWORD, _QWORD);
__int64 GameRoutine_f09600(void);
__int64 GameSituation_906b70(_QWORD, _QWORD);
__int64 GameSubquestData_125bbc0(_QWORD);
__int64 HistoryLogInfo_1239980(_QWORD, _QWORD);
__int64 MapScoreInfo_19aad80(_QWORD, _QWORD);
__int64 ProcMapSeq_1225d20(_QWORD, _QWORD);
__int64 RecordSerializer_123d0b0(_QWORD, _QWORD);
__int64 RecordSerializer_123d170(_QWORD);
__int64 RecordSerializer_123d420(_QWORD);
__int64 RecordSerializer_123d650(_QWORD, _QWORD);
__int64 Situation_763690(_QWORD);
__int64 Stream_Destructor(_QWORD, _QWORD);
__int64 Stream_Unknown2(_QWORD, _QWORD);
__int64 Stream_Unknown3(_QWORD, _QWORD);
__int64 Trick_7d5160(_QWORD, _QWORD);
__int64 Unit_6e1e20(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_1286480(_QWORD);
__int64 game_12adf00(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_RandomSeed_Deserialize(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_map_8129a0(_QWORD, _QWORD);
__int64 game_map_812b00(_QWORD);
__int64 game_map_BonusExpList_Deserialize(_QWORD, _QWORD);
__int64 game_map_history_122c500_alt1(void) __asm__("game_map_history_122c500");
__int64
    game_map_history_123d310_alt1(_QWORD) __asm__("game_map_history_123d310");
__int64 game_map_history_Impl_UpdateMap(char);
__int64 game_map_history_anonymous_Impl_Deserialize(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Allocate_1a0ad50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212dba8;
extern _UNKNOWN GameData_1abbc28;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_map_anonymous_NullObject_vtable_ptr[])();
extern __int64 (*GameData_1f9a470[])();
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d580[5];
extern __int64* GameData_212dba0;
extern __int64* GameData_2130668[3];
extern __int64* GameData_2130670[2];
extern __int64* GameData_21309f8[35];
extern __int64* GameData_2130a00[34];
extern __int64* GameData_2130a08[33];
extern __int64* GameData_2130a10[32];
extern __int64* GameData_2130a18[31];
extern __int64* GameData_2130a20[30];
extern __int64* GameData_2130a28[29];
extern __int64* GameData_2130a30[28];
extern __int64* GameData_2130a38[27];
extern __int64* GameData_2130a40[26];
extern __int64* GameData_2130a48[25];
extern __int64* GameData_2130a50[24];
extern __int64* GameData_2130a58[23];
extern __int64* GameData_2130a60[22];
extern __int64* GameData_2130a68[21];
extern __int64* GameData_2130a70[20];
extern __int64* GameData_2130a78[19];
extern __int64* GameData_2130a80[18];
extern __int64* GameData_2130a88[17];
extern __int64* GameData_2130a90[16];
extern __int64* GameData_2130a98[15];
extern __int64* GameData_2130aa0[14];
extern __int64* GameData_2130aa8[13];
extern __int64* GameData_2130ab0[12];
extern __int64* GameData_2130ab8[11];
extern __int64* GameData_2130ac0[10];
extern __int64* GameData_2130ac8[9];
extern __int64* GameData_2130ad0[8];
extern __int64* GameData_2130ad8[7];
extern __int64* GameData_2130ae0[6];
extern __int64* GameData_2130ae8[5];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_map_history_g_legion_pool_ptr[7];
extern __int64* game_map_history_g_record_alloc_failed_ptr;
extern __int64* game_map_history_g_record_allocators_ptr[2];
extern __int64* game_map_history_g_record_region_ptr[3];
extern __int64* game_map_history_g_ride_pool_ptr[3];
extern __int64* game_map_history_g_transporter_ptr[8];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d290;
extern __int64 GameData_2130688;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 GameData_22400f8;
extern __int64 GameData_2240178;
extern __int64 GameData_22407a8;
extern __int64 GameData_22408e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_map_kVariableSituation1000;
extern __int64 game_map_kVariableSituation200;
extern __int64 game_map_kVariableSituation800;
extern __int64 game_script_map_obj_g_object_records;
extern char GameData_1a9f09e;
extern int* game_map_history_g_record_alloc_retries_ptr[39];
float Unit_6c7fa0(__int64, __int64);
long double UnitActor_81ba20(__int64);
unsigned int** GameRoutine_1234e60(unsigned int** result, unsigned int**,
                                   unsigned int**, unsigned int**,
                                   unsigned int**);
void __attribute__((noreturn)) GameRoutine_122f7a0(_QWORD);
void __attribute__((noreturn)) GameRoutine_122fad0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_map_history_1227820(__int64 result);
__int64 game_map_history_12297e0(__int64 a1, int a2);
__int64 game_map_history_122b460(__int64 result, __int64 a2);
__int64 game_map_history_122b760(__int64 a1);
void game_map_history_122c500();
__int64 game_map_history_122d3c0(_QWORD* a1, __int64* a2);
__int64 game_map_history_122dd20(__int64 result, __int64 a2);
__int64 game_map_history_122f3c0(__int64 result);
bool game_map_history_1234fe0(unsigned int** a1, unsigned int** a2);
__int64 game_map_history_123d310(__int64 result);

__int64 game_map_history_1227820(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 Em;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int16 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int i;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  unsigned __int64 v57;
  void (**v58)(unsigned __int64);
  int v59;
  _QWORD* v60;
  _QWORD* v61;
  __int64 v62;
  unsigned int v63;
  int v64;
  unsigned __int8 v65;
  bool v66;
  unsigned int v67;
  char v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64* v85;
  __int64 v86;
  int v87;
  _BYTE* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64* v93;
  int* v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  _BOOL4 v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  __int64* v102;
  __int64 v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  int v116;
  __int64* v117;
  __int64* v118;
  __int64* v119;
  int v120;
  __int64 v121;
  __int64 j;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  int v126;
  __int64 v127;
  int v128;
  __int64* v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  int v133;
  __int64 v134;
  __int64 v135;
  __int64* v136;
  __int64* v137;
  __int64* v138;
  __int64* v139;
  _QWORD* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  int v152;
  unsigned __int8* v153;
  __int64 v154;
  int v155;
  __int64* v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64* v162;
  __int64* v163;
  __int64 v164;
  unsigned int v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int16 v169;
  unsigned __int64 v170;
  int* v171;
  __int64 v172;
  __int64 v173;
  int v174;
  __int64* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64* v179;
  __int64 v180;
  __int64* v181;
  __int64* v182;
  __int64 v183;
  __int64* v184;
  __int64 v185;
  __int64 v186;
  _QWORD* v187;
  __int64* v188;
  __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  _BOOL4 v193;
  unsigned int v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64* v198;
  __int64* v199;
  __int64 v200;
  __int64 v201;
  __int64* v202;
  __int64* v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  int v211;
  _QWORD* k;
  char v213;
  _BYTE* v214;
  __int64 v215;
  _BYTE* v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  unsigned int v223;
  __int64* v224;
  __int64 v225;
  __int64* v226;
  __int64* v227;
  __int16 v228;
  unsigned int v229;
  __int64 v230;
  __int64 v231;
  __int64* v232;
  unsigned __int64 v233;
  __int64* v234;
  __int64* v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int16 v240;
  __int64* v241;
  unsigned __int64 v242;
  __int64 v243;
  __int64* v244;
  __int64 v245;
  _QWORD* v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  int v261;
  __int64 v262;
  unsigned int v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64* v267;
  __int64* v268;
  __int64* v269;

  if (*(_BYTE*)(result + 8) != 1) {
    return result;
  }
  v1 = result + 24;
  v2 = result;
  v3 = *(unsigned __int16*)(*GameData_212ce90[0] + 26);
  v4 = *(_QWORD*)(result + 24 + 8LL * (v3 % 0x64));
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = GameData_2130ad0[0];
  v230 = result + 24;
  v231 = result;
  v229 = v3 % 0x64;
  if (v4 == 0) {
  LABEL_67:
    GameRoutine_123f0a0();
    v225 = 0;
    v240 = 0;
    v7 = 0;
    v59 = 1;
    goto LABEL_70;
  }
  if (v3 != *(unsigned __int16*)(v4 + 16)) {
    v54 = game_map_history_g_record_region_ptr[0];
    v55 = game_map_history_g_record_allocators_ptr[0];
    while (1) {
      v57 = v4;
      v58 = *(void (***)(unsigned __int64))v4;
      v4 = *(_QWORD*)(v4 + 8);
      (*v58)(v57);
      if ((_UNKNOWN*)v57 <
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v54)) {
        break;
      }
      v56 = v55[1];
      if (v56 != 0) {
        goto LABEL_60;
      }
    LABEL_61:
      if (v4 == 0) {
        *(_QWORD*)(v1 + 8LL * (v3 % 0x64)) = 0;
        goto LABEL_67;
      }
    }
    if (v57 < *v54) {
      goto LABEL_61;
    }
    v56 = *v55;
    if (*v55 == 0) {
      goto LABEL_61;
    }
  LABEL_60:
    nn_mem_StandardAllocator_Free(v56);
    goto LABEL_61;
  }
  do {
    v7 = v4;
    v4 = *(_QWORD*)(v4 + 8);
  } while (v4 != 0);
  v8 = *(unsigned __int8*)(v7 + 18);
  v240 = *(_WORD*)(v7 + 20) + 1;
  GameRoutine_123f0a0();
  v9 = *(__int64**)(v2 + 840);
  LODWORD(v225) = v8;
  BYTE4(v225) = 1;
  v241 = *(__int64**)(v2 + 848);
  if (v9 != v241) {
    v234 = v6 + 2;
    v10 = game_map_history_g_record_alloc_failed_ptr;
    v226 = GameData_2130aa8[0] + 2;
    v227 = GameData_2130a90[0] + 2;
    v224 = GameData_2130ae0[0] + 2;
    v223 = v3;
    v232 = GameData_2130ab0[0] + 2;
    while (1) {
      v11 = *v9;
      if (*(_BYTE*)(*v9 + 8) != 0) {
        if (*(_BYTE*)(*v9 + 8) != 1) {
          goto LABEL_10;
        }
        v12 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
        while (1) {
          Em = nn_mem_StandardAllocator_Allocate_1a0ad50(v12, 24);
          if (Em != 0) {
            break;
          }
          v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10);
          v245 = 24;
          if (v15 == 0) {
            goto LABEL_351;
          }
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v15 + 48LL))(v15, &v245);
        }
        *(_QWORD*)Em = GameData_2130a90[0] + 2;
        *(_QWORD*)(Em + 8) = 0;
        *(_BYTE*)(Em + 19) = 3;
        *(_WORD*)(Em + 20) = v240;
        v26 = *GameData_212ce90[0];
        if (*GameData_212ce90[0] != 0) {
          *(_WORD*)(Em + 16) = *(_WORD*)(v26 + 26);
          LOBYTE(v26) = *(_BYTE*)(v26 + 24);
        }
        else {
          *(_WORD*)(Em + 16) = 1;
        }
        *(_BYTE*)(Em + 18) = v26;
        *(_QWORD*)Em = v232;
        *(_BYTE*)(Em + 22) = *(_BYTE*)(v11 + 9);
        *(_BYTE*)(Em + 23) = *(_BYTE*)(v11 + 10);
      }
      else {
        v16 = *v5;
        v259 = 0;
        v260 = 0;
        v257 = 0;
        v258 = 0;
        v255 = 0;
        v256 = 0;
        v253 = 0;
        v254 = 0;
        v251 = 0;
        v252 = 0;
        v249 = 0;
        v250 = 0;
        v248 = 0;
        v17 = (_QWORD*)fw_memory_HeapManager_Allocate(v16, 491520, 16, 0);
        memset(v17 + 4, 0, 491488, v18, v19, v20);
        *v17 = 0;
        v17[1] = 0;
        v17[2] = 0;
        v17[3] = 0;
        v261 = 0;
        v262 = 0;
        v263 = 0;
        v264 = 0;
        v265 = 0;
        v266 = 0;
        v238 = v7;
        v246 = v17;
        v247 = 491520;
        v21 = *(_BYTE*)(v11 + 10);
        v245 = (__int64)v234;
        if ((v21 & 1) != 0) {
          v22 = 0;
          v23 = 0;
          v24 = 0;
          v25 = *(unsigned __int8*)(v11 + 9) << 8;
        }
        else {
          v27 = GameRoutine_6eaec0(v11 + 9);
          HIDWORD(v247) = 0;
          LODWORD(v267) = 0;
          Stream_Destructor(&v245, &v267);
          v28 = HIDWORD(v247);
          if (SHIDWORD(v247) <= 128) {
            v28 = 128;
            if (HIDWORD(v247) != 128) {
              v29 = 128 - HIDWORD(v247);
              if ((unsigned int)(HIDWORD(v247) - 121) >= 7) {
                v30 = v29 & 0xFFFFFFF8;
                do {
                  v31 = SHIDWORD(v247);
                  v30 -= 8;
                  ++HIDWORD(v247);
                  *((_BYTE*)v246 + v31) = 0;
                  v32 = SHIDWORD(v247);
                  ++HIDWORD(v247);
                  *((_BYTE*)v246 + v32) = 0;
                  v33 = SHIDWORD(v247);
                  ++HIDWORD(v247);
                  *((_BYTE*)v246 + v33) = 0;
                  v34 = SHIDWORD(v247);
                  ++HIDWORD(v247);
                  *((_BYTE*)v246 + v34) = 0;
                  v35 = SHIDWORD(v247);
                  ++HIDWORD(v247);
                  *((_BYTE*)v246 + v35) = 0;
                  v36 = SHIDWORD(v247);
                  ++HIDWORD(v247);
                  *((_BYTE*)v246 + v36) = 0;
                  v37 = SHIDWORD(v247);
                  ++HIDWORD(v247);
                  *((_BYTE*)v246 + v37) = 0;
                  v38 = SHIDWORD(v247);
                  ++HIDWORD(v247);
                  *((_BYTE*)v246 + v38) = 0;
                } while (v30 != 0);
              }
              for (i = v29 & 7; i != 0; *((_BYTE*)v246 + v40) = 0) {
                v40 = SHIDWORD(v247);
                --i;
                ++HIDWORD(v247);
              }
              v28 = HIDWORD(v247);
            }
          }
          v261 = v28;
          v267 = v224;
          v268 = (__int64*)v27;
          RecordSerializer_123d650(&v245, &v267);
          v41 = *(_QWORD*)v264;
          v25 = *(_WORD*)(v264 + 8);
          v42 = (__int64*)HIDWORD(*(_QWORD*)v264);
          v23 = (unsigned int)*(_QWORD*)v264;
          if (v42 != nullptr) {
            if (*game_map_history_g_record_alloc_retries_ptr[0] != 0) {
              v43 = 0;
              v44 = game_map_history_g_record_allocators_ptr
                  [0][(unsigned __int64)v41 < 0x100100000000LL];
              while (1) {
                v45 = nn_mem_StandardAllocator_Allocate_1a0ad50(v44, v42);
                if (v45 != 0) {
                  break;
                }
                v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10);
                v267 = v42;
                if (v15 == 0) {
                  goto LABEL_351;
                }
                (*(void (**)(__int64, __int64**))(*(_QWORD*)v15 + 48LL))(v15,
                                                                         &v267);
                if ((unsigned int)++v43 >=
                    *game_map_history_g_record_alloc_retries_ptr[0]) {
                  v24 = 0;
                  goto LABEL_39;
                }
              }
              v24 = v45;
            LABEL_39:
              v3 = v223;
            }
            else {
              v24 = 0;
            }
            memcpy(v24, (char*)v246 + v261, v41 >> 32);
            v22 = v41 & 0xFFFFFFFF00000000LL;
          }
          else {
            v22 = 0;
            v24 = 0;
          }
          v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        }
        v46 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
        while (1) {
          v47 = nn_mem_StandardAllocator_Allocate_1a0ad50(v46, 48);
          if (v47 != 0) {
            break;
          }
          v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10);
          v267 = (*(__int64 (*)[2])0x28LL) + 8;
          if (v15 == 0) {
            goto LABEL_351;
          }
          (*(void (**)(__int64, __int64**))(*(_QWORD*)v15 + 48LL))(v15, &v267);
        }
        *(_QWORD*)v47 = v227;
        *(_QWORD*)(v47 + 8) = 0;
        *(_BYTE*)(v47 + 19) = 2;
        *(_WORD*)(v47 + 20) = v240;
        v48 = *GameData_212ce90[0];
        if (*GameData_212ce90[0] != 0) {
          *(_WORD*)(v47 + 16) = *(_WORD*)(v48 + 26);
          LOBYTE(v48) = *(_BYTE*)(v48 + 24);
        }
        else {
          *(_WORD*)(v47 + 16) = 1;
        }
        *(_BYTE*)(v47 + 18) = v48;
        *(_WORD*)(v47 + 32) = v25;
        v49 = v47;
        *(_QWORD*)(v47 + 40) = v24;
        *(_QWORD*)v47 = v226;
        *(_QWORD*)(v47 + 24) = v23 | v22;
        if (v264 != 0) {
          v50 = *v5;
          v265 = v264;
          v51 = 128;
          if (*(_QWORD*)(v50 + 200) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free(v50 + v51);
        }
        v52 = v262;
        v7 = v238;
        v262 = 0;
        if (v52 != 0) {
          v53 = 128;
          if (*(_QWORD*)(*v5 + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v53);
        }
        GameRoutine_65d6c0(&v245);
        Em = v49;
      }
      *(_QWORD*)(v7 + 8) = Em;
      v7 = Em;
    LABEL_10:
      if (++v9 == v241) {
        v2 = v231;
        v59 = 0;
        BYTE4(v225) = 1;
        v6 = GameData_2130ad0[0];
        goto LABEL_70;
      }
    }
  }
  v59 = 0;
LABEL_70:
  v60 = *(_QWORD**)(v2 + 848);
  v61 = *(_QWORD**)(v2 + 840);
  while (v60 != v61) {
    v80 = *--v60;
    v79 = v80;
    *v60 = 0;
    if (v80 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v79 + 8LL))(v79);
    }
  }
  v239 = v7;
  *(_QWORD*)(v2 + 848) = v61;
  v62 = *GameData_212ce90[0];
  v63 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v64 = v59 | BYTE4(v225) & ((_DWORD)v225 != v63);
  if (v64 == 1) {
    v65 = *(_BYTE*)(v2 + 10);
    *(_QWORD*)(v2 + 880) = 0;
    *(_QWORD*)(v2 + 888) = &GameData_1a9f09e;
    v66 = v3 == 1 && v63 == 0;
    *(_BYTE*)(v2 + 868) = -1;
    v67 = v63 | 0x80000000;
    *(_QWORD*)(v2 + 896) = 0;
    v68 = !v66;
    *(_QWORD*)(v2 + 904) = &GameData_1a9f09e;
    *(_QWORD*)(v2 + 912) = 0;
    *(_QWORD*)(v2 + 920) = &GameData_1a9f09e;
    *(_QWORD*)(v2 + 928) = 0;
    *(_QWORD*)(v2 + 936) = &GameData_1a9f09e;
    if ((((unsigned __int8)v68 | v65) & 1) == 0) {
      v67 = 0;
    }
    *(_DWORD*)(v2 + 864) = -16777215;
    *(_DWORD*)(v2 + 872) = v67;
    v63 = *(unsigned __int8*)(v62 + 24);
  }
  v69 = GameData_212d290;
  if (*(_BYTE*)(v62 + v63 + 16) == 1 && *(_QWORD*)GameData_212d290 != 0 &&
      *(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) == 1) {
    *(_BYTE*)(v2 + 865) |= 1u;
  }
  v70 = *v5;
  v259 = 0;
  v260 = 0;
  v257 = 0;
  v258 = 0;
  v255 = 0;
  v256 = 0;
  v253 = 0;
  v254 = 0;
  v251 = 0;
  v252 = 0;
  v249 = 0;
  v250 = 0;
  v247 = 0;
  v248 = 0;
  v246 = nullptr;
  v71 = (_QWORD*)fw_memory_HeapManager_Allocate(v70, 491520, 16, 0);
  memset(v71 + 4, 0, 491488, v72, v73, v74);
  v246 = v71;
  v247 = 491520;
  *v71 = 0;
  v71[1] = 0;
  v71[2] = 0;
  v71[3] = 0;
  v261 = 0;
  v262 = 0;
  v263 = 0;
  v264 = 0;
  v265 = 0;
  v266 = 0;
  v245 = (__int64)(v6 + 2);
  RecordSerializer_123d420(&v245);
  LODWORD(v267) = 511;
  v75 = game_UnitPool_GetFirst(&v267);
  if (v75 != 0) {
    v76 = *(_QWORD*)(v75 + 432);
    if (v76 == 0) {
      v76 = *(_QWORD*)(v75 + 440);
      if (v76 != 0) {
        v77 = *(unsigned __int8*)(v76 + 16);
        if (v77 <= 8) {
          v222 = 24LL * *(unsigned __int8*)(v76 + 16) + 556024;
          while (1) {
            if (v77 <= 7) {
              v76 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v222);
              if (v76 != 0) {
                break;
              }
            }
            ++v77;
            v222 += 24;
            if (v77 == 9) {
              goto LABEL_89;
            }
          }
        }
        else {
        LABEL_89:
          v76 = 0;
        }
      }
    }
    v78 = GameData_2130ae0[0] + 2;
    while (1) {
    LABEL_95:
      v81 = v76;
      if ((v59 & 1) != 0 ||
          game_map_UnitFlags_instance_ != 0 &&
              (~*(unsigned __int8*)(game_map_UnitFlags_instance_ +
                                    *(unsigned __int8*)(v75 + 2088) + 8) &
               3) == 0) {
        v267 = v78;
        v268 = (__int64*)v75;
        RecordSerializer_123d650(&v245, &v267);
      }
      if (v81 == 0) {
        break;
      }
      v76 = *(_QWORD*)(v81 + 432);
      v75 = v81;
      if (v76 == 0) {
        v82 = *(_QWORD*)(v81 + 440);
        v75 = v81;
        if (v82 != 0) {
          v83 = *(unsigned __int8*)(v82 + 16);
          v76 = 0;
          v75 = v81;
          if (v83 <= 8) {
            v84 = 24LL * (unsigned int)v83 + 556024;
            while (1) {
              if (v83 <= 7) {
                v76 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v84);
                if (v76 != 0) {
                  break;
                }
              }
              ++v83;
              v84 += 24;
              if (v83 == 9) {
                v76 = 0;
                v75 = v81;
                goto LABEL_95;
              }
            }
            v75 = v81;
          }
        }
      }
    }
  }
  if ((v59 & 1) != 0) {
    v267 = GameData_21309f8[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a00[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a08[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    LOBYTE(v268) = 0;
    v85 = GameData_2130ae8[0] + 2;
    v267 = GameData_2130ae8[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 1;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 3;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 4;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 5;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 6;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 7;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 8;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 9;
    RecordSerializer_123d650(&v245, &v267);
    v267 = v85;
    LOBYTE(v268) = 10;
    RecordSerializer_123d650(&v245, &v267);
    v86 = v231;
  LABEL_110:
    v267 = GameData_2130ae8[0] + 2;
    LOBYTE(v268) = 11;
    RecordSerializer_123d650(&v245, &v267);
    goto LABEL_142;
  }
  v86 = v231;
  v87 = *(_DWORD*)(v231 + 12);
  if ((v87 & 1) != 0) {
    v267 = GameData_21309f8[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v87 = *(_DWORD*)(v231 + 12);
    if ((v87 & 0x400) == 0) {
    LABEL_113:
      if ((v87 & 2) == 0) {
        goto LABEL_114;
      }
      goto LABEL_118;
    }
  }
  else if ((v87 & 0x400) == 0) {
    goto LABEL_113;
  }
  v267 = GameData_2130a00[0] + 2;
  RecordSerializer_123d650(&v245, &v267);
  if ((*(_DWORD*)(v231 + 12) & 2) == 0) {
  LABEL_114:
    v88 = (_BYTE*)GameData_2240178;
    if (GameData_2240178 == 0) {
      goto LABEL_142;
    }
    goto LABEL_119;
  }
LABEL_118:
  v267 = GameData_2130a08[0] + 2;
  RecordSerializer_123d650(&v245, &v267);
  v88 = (_BYTE*)GameData_2240178;
  if (GameData_2240178 == 0) {
    goto LABEL_142;
  }
LABEL_119:
  if ((v88[9] & 1) == 0 ||
      (LOBYTE(v268) = 0, v267 = GameData_2130ae8[0] + 2,
       RecordSerializer_123d650(&v245, &v267), v88 = (_BYTE*)GameData_2240178,
       GameData_2240178 != 0)) {
    if ((v88[41] & 1) == 0 ||
        (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 1,
         RecordSerializer_123d650(&v245, &v267), v88 = (_BYTE*)GameData_2240178,
         GameData_2240178 != 0)) {
      if ((v88[73] & 1) == 0 ||
          (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 2,
           RecordSerializer_123d650(&v245, &v267),
           v88 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
        if ((v88[105] & 1) == 0 ||
            (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 3,
             RecordSerializer_123d650(&v245, &v267),
             v88 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
          if ((v88[137] & 1) == 0 ||
              (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 4,
               RecordSerializer_123d650(&v245, &v267),
               v88 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
            if ((v88[169] & 1) == 0 ||
                (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 5,
                 RecordSerializer_123d650(&v245, &v267),
                 v88 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
              if ((v88[201] & 1) == 0 ||
                  (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 6,
                   RecordSerializer_123d650(&v245, &v267),
                   v88 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
                if ((v88[233] & 1) == 0 ||
                    (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 7,
                     RecordSerializer_123d650(&v245, &v267),
                     v88 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
                  if ((v88[265] & 1) == 0 ||
                      (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 8,
                       RecordSerializer_123d650(&v245, &v267),
                       v88 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
                    if ((v88[297] & 1) == 0 ||
                        (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 9,
                         RecordSerializer_123d650(&v245, &v267),
                         v88 = (_BYTE*)GameData_2240178,
                         GameData_2240178 != 0)) {
                      if ((v88[329] & 1) == 0 ||
                          (v267 = GameData_2130ae8[0] + 2, LOBYTE(v268) = 10,
                           RecordSerializer_123d650(&v245, &v267),
                           v88 = (_BYTE*)GameData_2240178,
                           GameData_2240178 != 0)) {
                        if ((v88[361] & 1) != 0) {
                          goto LABEL_110;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_142:
  if ((v64 & 1) != 0 ||
      *(_QWORD*)v69 != 0 &&
          (*(_BYTE*)(*GameData_212ce90[0] +
                     *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) !=
               1 ||
           *(_BYTE*)(*(_QWORD*)v69 + 30LL) == 1)) {
    v267 = GameData_2130a10[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
  }
  v267 = GameData_2130a18[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  if ((v59 & 1) != 0) {
    v267 = GameData_2130a20[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a28[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a30[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a38[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a40[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a48[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a50[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a58[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a60[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a68[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a70[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a78[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a80[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v267 = GameData_2130a88[0] + 2;
    RecordSerializer_123d650(&v245, &v267);
    v90 = v264;
    v91 = v262;
    v92 = (__int64*)v263;
    v93 = game_map_history_g_record_allocators_ptr[0];
    v94 = game_map_history_g_record_alloc_retries_ptr[0];
    v95 = 0xAAAAAAAAAAAAAAABLL * ((v265 - v264) >> 2);
    v96 = (unsigned __int16)(-21845 * ((v265 - v264) >> 2));
    v97 = v96 + 2LL * (unsigned __int16)v95;
    v98 = v96 < 0x156;
    v99 = 4 * v97;
    if (*game_map_history_g_record_alloc_retries_ptr[0] != 0) {
      v100 = game_map_history_g_record_allocators_ptr[0][v98];
      v101 = 0;
      v102 = game_map_history_g_record_alloc_failed_ptr;
      do {
        v103 = nn_mem_StandardAllocator_Allocate_1a0ad50(v100, v99);
        if (v103 != 0) {
          break;
        }
        v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v102);
        v267 = (__int64*)v99;
        if (v15 == 0) {
          goto LABEL_351;
        }
        (*(void (**)(__int64, __int64**))(*(_QWORD*)v15 + 48LL))(v15, &v267);
        ++v101;
      } while (v101 < *v94);
      v90 = v264;
      v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    }
    else {
      v103 = 0;
    }
    memcpy(v103, v90, v99);
    if (*v94 != 0) {
      v154 = v93[(unsigned int)v92 <= 0x1000];
      v155 = 0;
      v156 = game_map_history_g_record_alloc_failed_ptr;
      while (1) {
        v157 = nn_mem_StandardAllocator_Allocate_1a0ad50(v154, v92);
        if (v157 != 0) {
          break;
        }
        v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v156);
        v267 = v92;
        if (v15 == 0) {
          goto LABEL_351;
        }
        (*(void (**)(__int64, __int64**))(*(_QWORD*)v15 + 48LL))(v15, &v267);
        if (++v155 >= (unsigned int)*v94) {
          goto LABEL_262;
        }
      }
    }
    else {
    LABEL_262:
      v157 = 0;
    }
    v158 = v157;
    memcpy(v157, v91, v92);
    v159 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v93);
    v160 = nn_mem_StandardAllocator_Allocate_1a0ad50(v159, 128);
    v161 = v231;
    if (v160 == 0) {
      v162 = game_map_history_g_record_alloc_failed_ptr;
      while (1) {
        v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v162);
        v267 = (_QWORD*)(((_UNKNOWN*)0x7CLL) + 4);
        if (v15 == 0) {
          break;
        }
        (*(void (**)(__int64, __int64**))(*(_QWORD*)v15 + 48LL))(v15, &v267);
        v160 = nn_mem_StandardAllocator_Allocate_1a0ad50(v159, 128);
        if (v160 != 0) {
          goto LABEL_267;
        }
      }
    LABEL_351:
      GameRoutine_60a310(v15, v14);
    }
  LABEL_267:
    v163 = GameData_2130a90[0];
    *(_BYTE*)(v160 + 19) = 0;
    *(_QWORD*)v160 = v163 + 2;
    *(_QWORD*)(v160 + 8) = 0;
    *(_WORD*)(v160 + 20) = v240;
    v164 = v230;
    v165 = v229;
    v166 = v239;
    v167 = *GameData_212ce90[0];
    if (*GameData_212ce90[0] != 0) {
      *(_WORD*)(v160 + 16) = *(_WORD*)(v167 + 26);
      LOBYTE(v167) = *(_BYTE*)(v167 + 24);
    }
    else {
      *(_WORD*)(v160 + 16) = 1;
    }
    v179 = GameData_2130a98[0];
    *(_BYTE*)(v160 + 18) = v167;
    *(_WORD*)(v160 + 22) = v95;
    *(_DWORD*)(v160 + 24) = (_DWORD)v92;
    *(_QWORD*)(v160 + 32) = v103;
    *(_QWORD*)(v160 + 40) = v158;
    v180 = v160;
    *(_QWORD*)v160 = v179 + 2;
    *(_BYTE*)(v160 + 48) = *(_BYTE*)(v231 + 864);
    *(_BYTE*)(v160 + 49) = *(_BYTE*)(v231 + 865);
    *(_BYTE*)(v160 + 50) = *(_BYTE*)(v231 + 866);
    *(_BYTE*)(v160 + 51) = *(_BYTE*)(v231 + 867);
    *(_BYTE*)(v160 + 52) = *(_BYTE*)(v231 + 868);
    *(_DWORD*)(v160 + 56) = *(_DWORD*)(v231 + 872);
    *(_QWORD*)(v160 + 64) = *(_QWORD*)(v231 + 880);
    *(_QWORD*)(v160 + 72) = *(_QWORD*)(v231 + 888);
    *(_QWORD*)(v160 + 80) = *(_QWORD*)(v231 + 896);
    *(_QWORD*)(v160 + 88) = *(_QWORD*)(v231 + 904);
    *(_QWORD*)(v160 + 96) = *(_QWORD*)(v231 + 912);
    *(_QWORD*)(v160 + 104) = *(_QWORD*)(v231 + 920);
    *(_QWORD*)(v160 + 112) = *(_QWORD*)(v231 + 928);
    *(_QWORD*)(v160 + 120) = *(_QWORD*)(v231 + 936);
    v181 = (__int64*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
    *v181 = v180;
    v182 = v181 + 1;
    goto LABEL_317;
  }
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x20) != 0) {
    v267 = GameData_2130a20[0] + 2;
    v89 = RecordSerializer_123d650(&v245, &v267);
    v104 = *(_DWORD*)(v86 + 12);
    if ((v104 & 0x40) == 0) {
    LABEL_156:
      if ((v104 & 0x80) == 0) {
        goto LABEL_157;
      }
      goto LABEL_244;
    }
  }
  else if ((v104 & 0x40) == 0) {
    goto LABEL_156;
  }
  v267 = GameData_2130a28[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x80) == 0) {
  LABEL_157:
    if ((v104 & 0x100) == 0) {
      goto LABEL_158;
    }
    goto LABEL_245;
  }
LABEL_244:
  v267 = GameData_2130a30[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x100) == 0) {
  LABEL_158:
    if ((v104 & 0x200) == 0) {
      goto LABEL_159;
    }
    goto LABEL_246;
  }
LABEL_245:
  v267 = GameData_2130a38[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x200) == 0) {
  LABEL_159:
    if ((v104 & 0x800) == 0) {
      goto LABEL_160;
    }
    goto LABEL_247;
  }
LABEL_246:
  v267 = GameData_2130a40[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x800) == 0) {
  LABEL_160:
    if ((v104 & 0x2000) == 0) {
      goto LABEL_161;
    }
    goto LABEL_248;
  }
LABEL_247:
  v267 = GameData_2130a48[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x2000) == 0) {
  LABEL_161:
    if ((v104 & 0x4000) == 0) {
      goto LABEL_162;
    }
    goto LABEL_249;
  }
LABEL_248:
  v267 = GameData_2130a50[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x4000) == 0) {
  LABEL_162:
    if ((v104 & 0x8000) == 0) {
      goto LABEL_163;
    }
    goto LABEL_250;
  }
LABEL_249:
  v267 = GameData_2130a58[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x8000) == 0) {
  LABEL_163:
    if ((v104 & 0x10000) == 0) {
      goto LABEL_164;
    }
    goto LABEL_251;
  }
LABEL_250:
  v267 = GameData_2130a60[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x10000) == 0) {
  LABEL_164:
    if ((v104 & 0x20000) == 0) {
      goto LABEL_165;
    }
    goto LABEL_252;
  }
LABEL_251:
  v267 = GameData_2130a68[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x20000) == 0) {
  LABEL_165:
    if ((v104 & 0x40000) == 0) {
      goto LABEL_166;
    }
    goto LABEL_253;
  }
LABEL_252:
  v267 = GameData_2130a70[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x40000) == 0) {
  LABEL_166:
    if ((v104 & 0x80000) == 0) {
      goto LABEL_167;
    }
    goto LABEL_254;
  }
LABEL_253:
  v267 = GameData_2130a78[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  v104 = *(_DWORD*)(v86 + 12);
  if ((v104 & 0x80000) == 0) {
  LABEL_167:
    if ((v104 & 0x100000) == 0) {
      goto LABEL_169;
    }
    goto LABEL_168;
  }
LABEL_254:
  v267 = GameData_2130a80[0] + 2;
  v89 = RecordSerializer_123d650(&v245, &v267);
  if ((*(_DWORD*)(v86 + 12) & 0x100000) != 0) {
  LABEL_168:
    v267 = GameData_2130a88[0] + 2;
    v89 = RecordSerializer_123d650(&v245, &v267);
  }
LABEL_169:
  v105 = v264;
  v106 = v265;
  if (v265 != v264) {
    if (0xAAAAAAAAAAAAAAABLL * ((v265 - v264) >> 2) > 0x555555555555555LL) {
    LABEL_352:
      GameRoutine_122fad0(v89);
    }
    v107 = (v265 - v264) >> 2;
    v108 = v262;
    v109 = *(_QWORD*)(v230 + 8LL * v229);
    v110 = fw_memory_HeapManager_Allocate(*v5, 16 * v107, 16, 0);
    v111 = v110 + 16 * v107;
    v112 = (__int64*)v110;
    v113 = v108;
    v114 = v110;
    v242 = v111;
    v235 = (__int64*)(v109 + 40);
    while (1) {
      if (v109 == 0) {
        goto LABEL_187;
      }
      v120 = *(unsigned __int8*)(v105 + 8);
      v121 = 0;
      for (j = v109; j != 0; j = *(_QWORD*)(j + 8)) {
        if (*(_BYTE*)(j + 19) == 2 && *(unsigned __int8*)(j + 32) == v120 &&
            (v120 != 3 && *(_BYTE*)(v105 + 8) != 0 ||
             *(unsigned __int8*)(j + 33) == *(unsigned __int8*)(v105 + 9))) {
          v121 = j;
        }
      }
      if (v121 != 0) {
        v123 = (__int64*)(v121 + 24);
        v124 = *(_QWORD*)(v121 + 40);
        if (v124 == 0) {
          goto LABEL_173;
        }
      }
      else {
      LABEL_187:
        v125 = *(unsigned __int16*)(v109 + 22);
        if (*(_WORD*)(v109 + 22) != 0) {
          v123 = *(__int64**)(v109 + 32);
          v126 = *(unsigned __int8*)(v105 + 8);
          while (*((unsigned __int8*)v123 + 8) != v126 ||
                 (v126 == 3 || *(_BYTE*)(v105 + 8) == 0) &&
                     *((unsigned __int8*)v123 + 9) !=
                         *(unsigned __int8*)(v105 + 9)) {
            --v125;
            v123 = (__int64*)((char*)v123 + 12);
            if (v125 == 0) {
              goto LABEL_196;
            }
          }
          v124 = *v235;
          if (*v235 == 0) {
            goto LABEL_173;
          }
        }
        else {
        LABEL_196:
          if (GameData_22408e8 == 0) {
            goto LABEL_173;
          }
          v127 = *(_QWORD*)(GameData_22408e8 + 8);
          if (v127 == 0) {
            goto LABEL_173;
          }
          v128 = *(unsigned __int8*)(v105 + 8);
          while (*(unsigned __int8*)(v127 + 32) != v128 ||
                 (v128 == 3 || *(_BYTE*)(v105 + 8) == 0) &&
                     *(unsigned __int8*)(v127 + 33) !=
                         *(unsigned __int8*)(v105 + 9)) {
            v127 = *(_QWORD*)(v127 + 8);
            if (v127 == 0) {
              goto LABEL_173;
            }
          }
          v123 = (__int64*)(v127 + 24);
          v124 = *(_QWORD*)(v127 + 40);
          if (v124 == 0) {
            goto LABEL_173;
          }
        }
      }
      v267 = (__int64*)fw_memory_HeapManager_Allocate(*v5, 1536, 16, 0);
      v268 = v267;
      v269 = v267 + 192;
      v89 = GameRoutine_1232280(&v267, v124, v123, v113, v105);
      v129 = v267;
      if (v268 == v267) {
        v150 = *(_QWORD*)(v109 + 8);
        if (v150 == 0) {
        LABEL_230:
          v135 = (__int64)v112;
          if (v267 == nullptr) {
          LABEL_228:
            v112 = (__int64*)v135;
            goto LABEL_173;
          }
        LABEL_225:
          v148 = *v5;
          v268 = v129;
          v149 = 56;
          if (*(_QWORD*)(v148 + 200) != 0) {
            v149 = 128;
          }
          nn_mem_StandardAllocator_Free(v148 + v149);
          goto LABEL_228;
        }
        while (1) {
          if (*(_BYTE*)(v150 + 19) == 1) {
            v151 = *(unsigned __int16*)(v150 + 22);
            if (*(_WORD*)(v150 + 22) != 0) {
              break;
            }
          }
        LABEL_232:
          v150 = *(_QWORD*)(v150 + 8);
          if (v150 == 0) {
            goto LABEL_230;
          }
        }
        v152 = *(unsigned __int8*)(v105 + 8);
        v153 = (unsigned __int8*)(*(_QWORD*)(v150 + 24) + 9LL);
        while (*(v153 - 1) != v152 ||
               (v152 == 3 || *(_BYTE*)(v105 + 8) == 0) &&
                   *v153 != *(unsigned __int8*)(v105 + 9)) {
          v153 += 24;
          if (--v151 == 0) {
            goto LABEL_232;
          }
        }
      }
      if (v114 >= v242) {
        v130 = 1 - 0x5555555555555555LL * ((__int64)(v114 - (_QWORD)v112) >> 4);
        if (v130 > 0x555555555555555LL) {
          goto LABEL_352;
        }
        if (0x5555555555555556LL * ((__int64)(v242 - (_QWORD)v112) >> 4) >
            v130) {
          v130 = 0x5555555555555556LL * ((__int64)(v242 - (_QWORD)v112) >> 4);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v242 - (_QWORD)v112) >> 4) >=
            0x2AAAAAAAAAAAAAALL) {
          v130 = 0x555555555555555LL;
        }
        if (v130 > 0x555555555555555LL) {
          GameRoutine_60a210(v89);
        }
        v243 = 3 * v130;
        v131 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v130, 16, 0);
        v132 = *v123;
        v133 = *((_DWORD*)v123 + 2);
        v134 = v131 + v114 - (_QWORD)v112;
        v135 = v131;
        *(_WORD*)(v134 + 12) = 0;
        *(_DWORD*)(v134 + 8) = v133;
        *(_QWORD*)v134 = v132;
        v136 = v267;
        v137 = v268;
        v267 = nullptr;
        v268 = nullptr;
        *(_QWORD*)(v134 + 16) = 0;
        *(_QWORD*)(v134 + 24) = v136;
        v138 = v269;
        v269 = nullptr;
        *(_QWORD*)(v134 + 32) = v137;
        *(_QWORD*)(v134 + 40) = v138;
        if (v112 != (__int64*)v114) {
          v139 = v112;
          v140 = (_QWORD*)v131;
          do {
            v141 = *v139;
            v142 = v139[1];
            v143 = v139[2];
            v140[4] = 0;
            v140[5] = 0;
            *v140 = v141;
            v140[1] = v142;
            v140[2] = v143;
            v140[3] = 0;
            v140[3] = v139[3];
            v140[4] = v139[4];
            v140[5] = v139[5];
            v139[4] = 0;
            v139[5] = 0;
            v139[3] = 0;
            v139 += 6;
            v140 += 6;
          } while (v139 != (__int64*)v114);
          v144 = v112;
          do {
            v145 = v144[3];
            if (v145 != 0) {
              v144[4] = v145;
              v146 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v146 = 128;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v146);
            }
            v144 += 6;
          } while (v144 != (__int64*)v114);
        }
        v114 = v134 + 48;
        v242 = v135 + 16 * v243;
        v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        v147 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v147 = 128;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v147);
        v129 = v267;
        if (v267 == nullptr) {
          goto LABEL_228;
        }
        goto LABEL_225;
      }
      v115 = *v123;
      v116 = *((_DWORD*)v123 + 2);
      *(_WORD*)(v114 + 12) = 0;
      *(_DWORD*)(v114 + 8) = v116;
      *(_QWORD*)v114 = v115;
      v117 = v267;
      v118 = v268;
      *(_QWORD*)(v114 + 16) = 0;
      *(_QWORD*)(v114 + 24) = v117;
      v119 = v269;
      *(_QWORD*)(v114 + 32) = v118;
      *(_QWORD*)(v114 + 40) = v119;
      v114 += 48LL;
    LABEL_173:
      v105 += 12;
      if (v105 == v106) {
        goto LABEL_270;
      }
    }
  }
  v114 = 0;
  v112 = nullptr;
LABEL_270:
  v168 = (__int64)(v114 - (_QWORD)v112) >> 4;
  v169 = -21845 * v168;
  v170 = (unsigned __int16)(-21845 * v168);
  if (-21845 * (_WORD)v168 != 0) {
    v228 = -21845 * v168;
    v171 = game_map_history_g_record_alloc_retries_ptr[0];
    v233 = (unsigned __int16)(-21845 * v168);
    v244 = v112;
    if (*game_map_history_g_record_alloc_retries_ptr[0] != 0) {
      v172 = game_map_history_g_record_allocators_ptr[0][v170 < 0xAB];
      v173 = 3 * v170;
      v174 = 0;
      v175 = game_map_history_g_record_alloc_failed_ptr;
      v176 = 8 * v173;
      while (1) {
        v177 = nn_mem_StandardAllocator_Allocate_1a0ad50(v172, v176);
        if (v177 != 0) {
          break;
        }
        v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v175);
        v267 = (__int64*)v176;
        if (v15 == 0) {
          goto LABEL_351;
        }
        (*(void (**)(__int64, __int64**))(*(_QWORD*)v15 + 48LL))(v15, &v267);
        if (++v174 >= (unsigned int)*v171) {
          v178 = 0;
          goto LABEL_282;
        }
      }
      v178 = v177;
    LABEL_282:
      v170 = v233;
    }
    else {
      v178 = 0;
    }
    v183 = 0;
    v184 = game_map_history_g_record_alloc_failed_ptr;
    v236 = v178;
    do {
      v188 = &v244[6 * v183];
      v189 = v188[3];
      v190 = 0xAAAAAAAAAAAAAAABLL * ((v188[4] - v189) >> 3);
      v191 = (unsigned __int16)(-21845 * ((v188[4] - v189) >> 3));
      if (-21845 * (unsigned __int16)((v188[4] - v189) >> 3) != 0) {
        v192 = 24 * v191;
        v193 = v191 < 0xAB;
        if (*v171 != 0) {
          v194 = 0;
          v195 = game_map_history_g_record_allocators_ptr[0][v193];
          do {
            v185 = nn_mem_StandardAllocator_Allocate_1a0ad50(v195, v192);
            if (v185 != 0) {
              break;
            }
            v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v184);
            v267 = (__int64*)v192;
            if (v15 == 0) {
              goto LABEL_351;
            }
            (*(void (**)(__int64, __int64**))(*(_QWORD*)v15 + 48LL))(v15,
                                                                     &v267);
            ++v194;
          } while (v194 < *v171);
          v189 = v188[3];
          v170 = v233;
          v178 = v236;
        }
        else {
          v185 = 0;
        }
        memcpy(v185, v189, v192);
      }
      else {
        v185 = 0;
      }
      *((_WORD*)v188 + 6) = v190;
      v188[2] = v185;
      v186 = *v188;
      v187 = (_QWORD*)(v178 + 24 * v183++);
      v187[1] = v188[1];
      v187[2] = v185;
      *v187 = v186;
    } while (v183 != v170);
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v164 = v230;
    v165 = v229;
    v112 = v244;
    v169 = v228;
  }
  else {
    v164 = v230;
    v165 = v229;
    v178 = 0;
  }
  v196 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
  v197 = nn_mem_StandardAllocator_Allocate_1a0ad50(v196, 112);
  v161 = v231;
  if (v197 == 0) {
    v237 = v178;
    v198 = game_map_history_g_record_alloc_failed_ptr;
    do {
      v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v198);
      v267 = (_QWORD*)((_UNKNOWN*)0x70LL);
      if (v15 == 0) {
        goto LABEL_351;
      }
      (*(void (**)(__int64, __int64**))(*(_QWORD*)v15 + 48LL))(v15, &v267);
      v197 = nn_mem_StandardAllocator_Allocate_1a0ad50(v196, 112);
    } while (v197 == 0);
    v178 = v237;
  }
  v199 = GameData_2130a90[0];
  *(_BYTE*)(v197 + 19) = 1;
  *(_QWORD*)v197 = v199 + 2;
  *(_QWORD*)(v197 + 8) = 0;
  *(_WORD*)(v197 + 20) = v240;
  v200 = *GameData_212ce90[0];
  if (*GameData_212ce90[0] != 0) {
    *(_WORD*)(v197 + 16) = *(_WORD*)(v200 + 26);
    LOBYTE(v200) = *(_BYTE*)(v200 + 24);
  }
  else {
    *(_WORD*)(v197 + 16) = 1;
  }
  *(_BYTE*)(v197 + 18) = v200;
  v201 = v197;
  v202 = GameData_2130aa0[0];
  *(_WORD*)(v197 + 22) = v169;
  *(_QWORD*)(v197 + 24) = v178;
  *(_QWORD*)v197 = v202 + 2;
  *(_BYTE*)(v197 + 32) = *(_BYTE*)(v231 + 864);
  *(_BYTE*)(v197 + 33) = *(_BYTE*)(v231 + 865);
  *(_BYTE*)(v197 + 34) = *(_BYTE*)(v231 + 866);
  *(_BYTE*)(v197 + 35) = *(_BYTE*)(v231 + 867);
  *(_BYTE*)(v197 + 36) = *(_BYTE*)(v231 + 868);
  *(_DWORD*)(v197 + 40) = *(_DWORD*)(v231 + 872);
  *(_QWORD*)(v197 + 48) = *(_QWORD*)(v231 + 880);
  *(_QWORD*)(v197 + 56) = *(_QWORD*)(v231 + 888);
  *(_QWORD*)(v197 + 64) = *(_QWORD*)(v231 + 896);
  *(_QWORD*)(v197 + 72) = *(_QWORD*)(v231 + 904);
  *(_QWORD*)(v197 + 80) = *(_QWORD*)(v231 + 912);
  *(_QWORD*)(v197 + 88) = *(_QWORD*)(v231 + 920);
  *(_QWORD*)(v197 + 96) = *(_QWORD*)(v231 + 928);
  *(_QWORD*)(v197 + 104) = *(_QWORD*)(v231 + 936);
  v203 = (__int64*)fw_memory_HeapManager_Allocate(*v5, 8, 16, 0);
  *v203 = v201;
  v182 = v203 + 1;
  v181 = v203;
  if (v112 != nullptr) {
    for (; (__int64*)v114 != v112; v114 -= 48LL) {
      v204 = *(_QWORD*)(v114 - 24);
      if (v204 != 0) {
        *(_QWORD*)(v114 - 16) = v204;
        if (*(_QWORD*)(*v5 + 200LL) != 0) {
          v205 = 128;
        }
        else {
          v205 = 56;
        }
        nn_mem_StandardAllocator_Free(*v5 + v205);
      }
    }
    v206 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v206 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v206);
  }
  v166 = v239;
LABEL_317:
  v207 = v181;
  do {
    v208 = *v207;
    if (v166 != 0) {
      *(_QWORD*)(v166 + 8) = v208;
    }
    else {
      *(_QWORD*)(v164 + 8LL * v165) = v208;
    }
    ++v207;
    v166 = v208;
  } while (v207 != v182);
  v209 = *(v182 - 1);
  v210 = 0;
  v211 = 0;
  *(_WORD*)(v161 + 828) = *(_WORD*)(v209 + 16);
  *(_WORD*)(v161 + 830) = *(_WORD*)(v209 + 20);
  do {
    for (k = *(_QWORD**)(v164 + 8 * v210); k != nullptr; v211 += v213 & 1) {
      v213 = (*(__int64 (**)(_QWORD*))(*k + 48LL))(k);
      k = (_QWORD*)k[1];
    }
    ++v210;
  } while (v210 != 100);
  *(_DWORD*)(v161 + 824) = v211;
  if (game_map_UnitFlags_instance_ != 0) {
    v214 = (_BYTE*)(game_map_UnitFlags_instance_ + 15);
    v215 = 256;
    do {
      v215 -= 8;
      *(v214 - 7) &= ~2u;
      *(v214 - 6) &= ~2u;
      *(v214 - 5) &= ~2u;
      *(v214 - 4) &= ~2u;
      *(v214 - 3) &= ~2u;
      *(v214 - 2) &= ~2u;
      *(v214 - 1) &= ~2u;
      *v214 &= ~2u;
      v214 += 8;
    } while (v215 != 0);
  }
  v216 = (_BYTE*)GameData_2240178;
  if (GameData_2240178 != 0) {
    *(_BYTE*)(GameData_2240178 + 9) &= ~1u;
    v216[41] &= ~1u;
    v216[73] &= ~1u;
    v216[105] &= ~1u;
    v216[137] &= ~1u;
    v216[169] &= ~1u;
    v216[201] &= ~1u;
    v216[233] &= ~1u;
    v216[265] &= ~1u;
    v216[297] &= ~1u;
    v216[329] &= ~1u;
    v216[361] &= ~1u;
  }
  *(_DWORD*)(v161 + 12) = 0;
  *(_WORD*)(v161 + 16) = 0;
  if (*GameData_2130ad8[0] != 0) {
    GameRoutine_6c3050();
  }
  *(_DWORD*)(v161 + 872) = 0;
  *(_QWORD*)(v161 + 880) = 0;
  *(_QWORD*)(v161 + 896) = 0;
  *(_QWORD*)(v161 + 912) = 0;
  *(_QWORD*)(v161 + 928) = 0;
  *(_DWORD*)(v161 + 864) = -16777216;
  *(_BYTE*)(v161 + 868) = -1;
  *(_QWORD*)(v161 + 888) = &GameData_1a9f09e;
  *(_QWORD*)(v161 + 904) = &GameData_1a9f09e;
  *(_QWORD*)(v161 + 920) = &GameData_1a9f09e;
  *(_QWORD*)(v161 + 936) = &GameData_1a9f09e;
  v217 = 128;
  if (*(_QWORD*)(*v5 + 200LL) == 0) {
    v217 = 56;
  }
  nn_mem_StandardAllocator_Free(*v5 + v217);
  if (v264 != 0) {
    v218 = *v5;
    v265 = v264;
    v219 = 128;
    if (*(_QWORD*)(v218 + 200) == 0) {
      v219 = 56;
    }
    nn_mem_StandardAllocator_Free(v218 + v219);
  }
  v220 = v262;
  v262 = 0;
  if (v220 != 0) {
    v221 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v221 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v221);
  }
  return GameRoutine_65d6c0(&v245);
}

__int64 game_map_history_12297e0(__int64 a1, int a2)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  bool v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;

  if (a2 >= *(_DWORD*)(a1 + 824)) {
    return 0;
  }
  v2 = *(unsigned __int16*)(a1 + 828);
  v3 = a1 + 24;
  v4 = *(unsigned __int16*)(a1 + 830) - a2;
  while (1) {
    v5 = *(_QWORD*)(v3 + 8LL * (v2 % 0x64));
    if (v5 == 0 || v2 != *(unsigned __int16*)(v5 + 16)) {
      return 0;
    }
    do {
      v6 = v5;
      v5 = *(_QWORD*)(v5 + 8);
    } while (v5 != 0);
    if ((v4 & 0x80000000) == 0) {
      break;
    }
    if (v2 == 0) {
      return 0;
    }
    v10 = *(_QWORD*)(v3 + 8LL * ((unsigned __int16)--v2 % 0x64u));
    if (v10 != 0 && v2 == *(unsigned __int16*)(v10 + 16)) {
      do {
        v11 = v10;
        v10 = *(_QWORD*)(v10 + 8);
      } while (v10 != 0);
      v4 += *(unsigned __int16*)(v11 + 20) + 1;
    }
  LABEL_3:
    if ((v2 & 0x80000000) != 0) {
      return 0;
    }
  }
  v7 = *(unsigned __int16*)(v6 + 20);
  v8 = v4 >= v7;
  v9 = v4 - v7;
  if (v9 != 0 && v8) {
    ++v2;
    v4 = v9;
    goto LABEL_3;
  }
  if ((_WORD)v2 == 0) {
    return 0;
  }
  v13 = *(_QWORD*)(v3 + 8LL * ((unsigned __int16)v2 % 0x64u));
  if (v13 == 0 || *(unsigned __int16*)(v13 + 16) != (unsigned __int16)v2) {
    return 0;
  }
  while (*(unsigned __int16*)(v13 + 20) != v4) {
    v13 = *(_QWORD*)(v13 + 8);
    result = 0;
    if (v13 == 0) {
      return result;
    }
  }
  while (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 48LL))(v13) & 1) == 0) {
    v13 = *(_QWORD*)(v13 + 8);
    result = 0;
    if (v13 == 0) {
      return result;
    }
  }
  return v13;
}

__int64 game_map_history_122b460(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 (**v16)(unsigned __int64);
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 (**v23)(unsigned __int64);
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  _QWORD* i;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (*(_BYTE*)(result + 8) != 2) {
    return result;
  }
  v2 = *(unsigned __int16*)(result + 832);
  v3 = result;
  if (*(_WORD*)(result + 832) == 0) {
    return result;
  }
  v4 = *(unsigned __int16*)(result + 834);
  if (v2 == *(unsigned __int16*)(result + 828) &&
      v4 == *(unsigned __int16*)(result + 830)) {
    return result;
  }
  v6 = result + 24;
  v7 = *(_QWORD*)(result + 24 +
                  8LL * (*(unsigned __int16*)(result + 832) % 0x64u));
  if (v7 == 0 || *(unsigned __int16*)(v7 + 16) != v2) {
    return result;
  }
  v8 = false;
  v9 = 0;
  while (1) {
    while (1) {
      v10 = *(unsigned __int16*)(v7 + 20);
      v11 = v7;
      if (v8) {
        break;
      }
      v7 = *(_QWORD*)(v7 + 8);
      v8 = v10 == v4;
      v9 = v11;
      if (v7 == 0) {
        if (v10 == v4) {
        LABEL_26:
          *(_QWORD*)(v11 + 8) = 0;
          goto LABEL_27;
        }
        return result;
      }
    }
    if (v10 != v4) {
      break;
    }
    v7 = *(_QWORD*)(v7 + 8);
    v8 = true;
    v9 = v11;
    if (v7 == 0) {
      goto LABEL_26;
    }
  }
  if (v9 == 0) {
    return result;
  }
  v12 = *(_QWORD*)(v9 + 8);
  *(_QWORD*)(v9 + 8) = 0;
  if (v12 != 0) {
    v13 = game_map_history_g_record_region_ptr[0];
    v14 = game_map_history_g_record_allocators_ptr[0];
    while (1) {
      v15 = v12;
      v16 = *(__int64 (***)(unsigned __int64))v12;
      v12 = *(_QWORD*)(v12 + 8);
      result = (*v16)(v15);
      if ((_UNKNOWN*)v15 >=
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13)) {
        break;
      }
      if (v15 >= *v13) {
        v17 = 0;
        goto LABEL_23;
      }
    LABEL_18:
      if (v12 == 0) {
        goto LABEL_27;
      }
    }
    v17 = 1;
  LABEL_23:
    result = v14[v17];
    if (result != 0) {
      result = nn_mem_StandardAllocator_Free(result);
    }
    goto LABEL_18;
  }
LABEL_27:
  v18 = 0;
  v19 = game_map_history_g_record_region_ptr[0];
  v20 = game_map_history_g_record_allocators_ptr[0];
  while (2) {
    v21 = *(_QWORD*)(v6 + 8 * v18);
    if (v21 != 0 && *(unsigned __int16*)(v21 + 16) >
                        (unsigned int)*(unsigned __int16*)(v3 + 832)) {
      while (1) {
        v22 = v21;
        v23 = *(__int64 (***)(unsigned __int64))v21;
        v21 = *(_QWORD*)(v21 + 8);
        result = (*v23)(v22);
        if ((_UNKNOWN*)v22 <
            *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19)) {
          break;
        }
        result = v20[1];
        if (result != 0) {
          goto LABEL_39;
        }
      LABEL_33:
        if (v21 == 0) {
          *(_QWORD*)(v6 + 8 * v18) = 0;
          goto LABEL_29;
        }
      }
      if (v22 < *v19) {
        goto LABEL_33;
      }
      result = *v20;
      if (*v20 == 0) {
        goto LABEL_33;
      }
    LABEL_39:
      result = nn_mem_StandardAllocator_Free(result);
      goto LABEL_33;
    }
  LABEL_29:
    if (++v18 != 100) {
      continue;
    }
    break;
  }
  v24 = *(_QWORD**)(v3 + 848);
  v25 = *(_QWORD**)(v3 + 840);
  *(_DWORD*)(v3 + 828) = *(_DWORD*)(v3 + 832);
  while (v24 != v25) {
    v29 = *--v24;
    result = v29;
    *v24 = 0;
    if (v29 != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  v26 = 0;
  v27 = 0;
  *(_QWORD*)(v3 + 848) = v25;
  do {
    for (i = *(_QWORD**)(v6 + 8 * v26); i != nullptr; v27 += result & 1) {
      result = (*(__int64 (**)(_QWORD*))(*i + 48LL))(i);
      i = (_QWORD*)i[1];
    }
    ++v26;
  } while (v26 != 100);
  *(_DWORD*)(v3 + 824) = v27;
  GameRoutine_12a6020(result, a2);
  *(_DWORD*)(v3 + 832) = 0;
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    GameRoutine_a35760(*game_sound_g_game_sound_ptr[0], v30);
  }
  GameSubquestData_125bbc0(*(_QWORD*)GameData_212c7b0[0]);
  result = *GameData_212d580[0];
  if (*GameData_212d580[0] != 0) {
    result = MapScoreInfo_19aad80(result, v31);
  }
  *(_BYTE*)(v3 + 8) = 1;
  return result;
}

__int64 game_map_history_122b760(__int64 a1)
{
  __int64* v2;
  int v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  __int16 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _BOOL8 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  __int64 (**v61)(_QWORD*);
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 (**v69)(__int64);
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 (***v82)();
  int v83;
  unsigned int v84;
  int v85;
  _QWORD* v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned int v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  unsigned __int64 v105;
  int v106;
  int v107;
  unsigned int v108;
  int v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  int v115;
  int v116;
  __int64 v117;
  int v118;
  int v119;
  int v120;
  int v121;
  __int64 v122;
  int v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  int v128;
  unsigned int v129;
  __int64 v130;
  __int64 v131;
  __int64 (***v132)();
  __int64 v133;
  __int64 v134;
  unsigned __int8* v135;
  unsigned __int64 v136;
  bool v137;
  unsigned __int64 v138;
  unsigned __int8* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64* v144;
  __int64 v145;
  int v146;
  __int64 v147;
  int v148;
  __int64 v149;
  __int64 result;
  __int64 v151;
  __int64* v152;
  int v153;
  __int64 v154;
  _QWORD v155[3];
  char v156[4];
  char v157[4];
  _QWORD v158[3];
  _QWORD v159[2];
  _QWORD* v160;
  _QWORD* v161;

  v155[0] = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 2048, 16, 0);
  v155[1] = v155[0];
  v155[2] = v155[0] + 2048LL;
  v2 = GameData_212ce90[0];
  v3 = *(_DWORD*)(*GameData_212ce90[0] + 20);
  v4 = *GameData_212ce80[0] + 61440;
  v5 = *(_DWORD*)(*GameData_212ce80[0] + 61624);
  *(_DWORD*)(*GameData_212ce80[0] + 61624) = v5 + 1;
  if (v5 == 0) {
    (**(void (***)(__int64))(v4 + 176))(v4 + 176);
  }
  v6 = (__int64*)(a1 + 944);
  *(_DWORD*)(a1 + 964) = 0;
  LODWORD(v159[0]) = 0;
  Stream_Unknown2(a1 + 944, v159);
  GameRoutine_122cae0(a1 + 944, 0);
  GameRoutine_122cae0(a1 + 944, 1);
  GameRoutine_122cae0(a1 + 944, 2);
  GameRoutine_122cae0(a1 + 944, 3);
  GameRoutine_122cae0(a1 + 944, 4);
  GameRoutine_122cae0(a1 + 944, 5);
  GameRoutine_122cae0(a1 + 944, 6);
  GameRoutine_122cae0(a1 + 944, 7);
  GameRoutine_122cae0(a1 + 944, 8);
  GameRoutine_122cae0(a1 + 944, 9);
  GameRoutine_122cae0(a1 + 944, 10);
  GameRoutine_122cae0(a1 + 944, 11);
  GameRoutine_1241020(a1 + 944);
  v7 = *(int*)(a1 + 964);
  v8 = *(_QWORD*)(a1 + 952);
  v9 = *v2;
  v10 = v7 + 1;
  *(_DWORD*)(a1 + 964) = v7 + 1;
  v11 = *(unsigned __int8*)(v8 + v7);
  v12 = v7 + 2;
  *(_DWORD*)(a1 + 964) = v12;
  v13 = v11 | (*(unsigned __int8*)(v8 + v10) << 8);
  if (v13 != *(unsigned __int16*)(v9 + 26)) {
    if (v13 >= 0x3E7) {
      v14 = 999;
    }
    else {
      v14 = v13;
    }
    if (v13 == 0) {
      v14 = 1;
    }
    *(_WORD*)(v9 + 26) = v14;
    v12 = *(_DWORD*)(a1 + 964);
    v8 = *(_QWORD*)(a1 + 952);
  }
  *(_DWORD*)(a1 + 964) = v12 + 1;
  *(_BYTE*)(v9 + 24) = *(_BYTE*)(v8 + v12);
  *(_DWORD*)(v9 + 20) &= 0xFFFFE7E1;
  v15 = *(int*)(a1 + 964);
  v16 = *(_QWORD*)(a1 + 952);
  *(_DWORD*)(a1 + 964) = v15 + 1;
  v17 = *(unsigned __int8*)(v16 + v15);
  *(_DWORD*)(a1 + 964) = v15 + 2;
  v18 = v17 | (*(unsigned __int8*)(v16 + v15 + 1) << 8);
  *(_DWORD*)(a1 + 964) = v15 + 3;
  v19 = *(unsigned __int8*)(v16 + v15 + 2);
  *(_DWORD*)(a1 + 964) = v15 + 4;
  *(_DWORD*)(v9 + 20) |=
      v18 | (v19 << 16) | (*(unsigned __int8*)(v16 + v15 + 3) << 24);
  v20 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v20 + 1;
  *(_BYTE*)(v9 + 38) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v20);
  v21 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v21 + 1;
  *(_BYTE*)(v9 + 39) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v21);
  GameRoutine_762f30(v9 + 40, a1 + 944);
  GameRoutine_762f30(v9 + 168, a1 + 944);
  game_map_BonusExpList_Deserialize(v9 + 296, a1 + 944);
  v22 = *(int*)(a1 + 964);
  v153 = v3;
  *(_DWORD*)(a1 + 964) = v22 + 1;
  *(_BYTE*)(v9 + 28) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v22);
  v23 = *(int*)(a1 + 964);
  v24 = *(_QWORD*)(a1 + 952);
  v25 = v23 + 2;
  *(_DWORD*)(a1 + 964) = v23 + 1;
  v26 = *(unsigned __int8*)(v24 + v23);
  *(_DWORD*)(a1 + 964) = v23 + 2;
  v27 = v26 | (*(unsigned __int8*)(v24 + v23 + 1) << 8);
  v28 = v23 + 3;
  v29 = v23 + 4;
  *(_DWORD*)(a1 + 964) = v28;
  LODWORD(v25) = *(unsigned __int8*)(v24 + v25);
  *(_DWORD*)(a1 + 964) = v29;
  v30 = v27 | ((_DWORD)v25 << 16) | (*(unsigned __int8*)(v24 + v28) << 24);
  if (*(_DWORD*)(v9 + 320) != v30) {
    *(_DWORD*)(v9 + 320) = v30;
    v29 = *(_DWORD*)(a1 + 964);
    v24 = *(_QWORD*)(a1 + 952);
  }
  *(_DWORD*)(a1 + 964) = v29 + 1;
  v31 = *(unsigned __int8*)(v24 + v29);
  if (*(_BYTE*)(v24 + v29) != 0) {
    v32 = game_g_shared_system_skills_ptr;
    do {
      v33 = *(int*)(a1 + 964);
      v34 = *(_QWORD*)(a1 + 952);
      *(_DWORD*)(a1 + 964) = v33 + 1;
      v35 = *(unsigned __int8*)(v34 + v33);
      *(_DWORD*)(a1 + 964) = v33 + 2;
      v36 = *(_BYTE*)(v34 + v33 + 1);
      *(_DWORD*)(a1 + 964) = v33 + 3;
      LOBYTE(v158[0]) = v36;
      v157[0] = *(_BYTE*)(v34 + v33 + 2);
      v37 = GameRoutine_6eaec0(v158);
      if (v37 == 0) {
        v37 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
      }
      v38 = *(_QWORD*)(a1 + 944);
      LODWORD(v159[0]) = 0;
      (*(void (**)(__int64, _QWORD*))(v38 + 16))(a1 + 944, v159);
      v39 = *(int*)(a1 + 964);
      v40 = *(_QWORD*)(a1 + 952);
      *(_DWORD*)(a1 + 964) = v39 + 1;
      if (*(unsigned __int8*)(v40 + v39) >= 0x19u) {
        *(_DWORD*)(a1 + 964) = v39 + 2;
        v41 = *(unsigned __int8*)(v40 + v39 + 1) != 0;
      }
      else {
        v41 = true;
      }
      Unit_6e1e20(v37, a1 + 944, v41);
      (*(void (**)(__int64, _QWORD))(*v6 + 24))(a1 + 944, 0);
      v42 = *(unsigned __int16*)(v37 + 494);
      v43 = *(_QWORD*)(v37 + 392);
      v44 = game_GameModeData_instance_;
      v156[0] = v35;
      if (game_GameModeData_instance_ != 0) {
        v44 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      if (v43 == v44 || (*(_BYTE*)(v37 + 418) & 8) != 0) {
        if (v35 != 9) {
          goto LABEL_26;
        }
      }
      else {
        LODWORD(v159[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v32) & 0xFFF;
        if ((game_HasSkill(v37 + 1744, v159) & 1) != 0 && v156[0] != 9) {
        LABEL_26:
          v45 = 0;
          goto LABEL_29;
        }
      }
      v45 = 1;
    LABEL_29:
      GameRoutine_6c47b0(v37, v156, v45, 1);
      if ((unsigned __int8)v156[0] <= 8u &&
          v42 != *(unsigned __int16*)(v37 + 494)) {
        *(_WORD*)(v37 + 494) = v42;
      }
      GameRoutine_122e840(v155, v37, v158, v157);
      --v31;
    } while (v31 != 0);
  }
  v46 = game_map_UnitFlags_instance_;
  if (game_map_UnitFlags_instance_ != 0) {
    v47 = game_HashString32("MapHistoryUnitMgr");
    v48 = *v6;
    LODWORD(v159[0]) = v47;
    if (((*(__int64 (**)(__int64, _QWORD*))(v48 + 16))(a1 + 944, v159) & 1) !=
        0) {
      v49 = 256;
      ++*(_DWORD*)(a1 + 964);
      v50 = (_BYTE*)(v46 + 15);
      do {
        v51 = *(int*)(a1 + 964);
        v49 -= 8;
        *(_DWORD*)(a1 + 964) = v51 + 1;
        *(v50 - 7) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v51);
        v52 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v52 + 1;
        *(v50 - 6) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v52);
        v53 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v53 + 1;
        *(v50 - 5) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v53);
        v54 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v54 + 1;
        *(v50 - 4) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v54);
        v55 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v55 + 1;
        *(v50 - 3) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v55);
        v56 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v56 + 1;
        *(v50 - 2) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v56);
        v57 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v57 + 1;
        *(v50 - 1) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v57);
        v58 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v58 + 1;
        *v50 = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v58);
        v50 += 8;
      } while (v49 != 0);
    }
    (*(void (**)(__int64, _QWORD))(*v6 + 24))(a1 + 944, 0);
  }
  v59 = (_QWORD*)*GameData_212ce98[0];
  memcpy(*(_QWORD*)(*GameData_212ce98[0] + 32) + 8LL,
         *(_QWORD*)(*GameData_212ce98[0] + 56) + 8LL, 2048);
  memcpy(v59[5] + 8LL, v59[8] + 8LL, 2048);
  v61 = (__int64 (**)(_QWORD*))v59[1];
  v60 = v59 + 1;
  v62 = (*v61)(v60);
  v63 = game_HashString32(v62);
  v64 = *v6;
  LODWORD(v159[0]) = v63;
  if (((*(__int64 (**)(__int64, _QWORD*))(v64 + 16))(a1 + 944, v159) & 1) !=
      0) {
    v65 = *(int*)(a1 + 964);
    *(_DWORD*)(a1 + 964) = v65 + 1;
    (*(void (**)(_QWORD*, __int64, _QWORD))(*v60 + 24LL))(
        v60, a1 + 944, *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v65));
  }
  (*(void (**)(__int64, _QWORD))(*v6 + 24))(a1 + 944, 0);
  v66 = GameData_212cfb8[0];
  v67 = *GameData_212cfb8[0];
  if (*GameData_212cfb8[0] != 0) {
    v69 = *(__int64 (***)(__int64))(v67 + 8);
    v68 = v67 + 8;
    v70 = (*v69)(v68);
    v71 = game_HashString32(v70);
    v72 = *v6;
    LODWORD(v159[0]) = v71;
    if (((*(__int64 (**)(__int64, _QWORD*))(v72 + 16))(a1 + 944, v159) & 1) !=
        0) {
      v73 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v73 + 1;
      (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v68 + 24LL))(
          v68, a1 + 944, *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v73));
    }
    (*(void (**)(__int64, _QWORD))(*v6 + 24))(a1 + 944, 0);
  }
  game_RandomSeed_Deserialize(game_map_MapRandom_instance__ptr[0] + 2,
                              a1 + 944);
  v74 = *(int*)(a1 + 964);
  v75 = v74 + 1;
  v154 = game_GameModeData_instance_;
  v76 = *(_QWORD*)(a1 + 952);
  *(_DWORD*)(a1 + 964) = v74 + 1;
  v77 = *(unsigned __int8*)(v76 + v74);
  v78 = v74 + 2;
  *(_DWORD*)(a1 + 964) = v78;
  v79 = v77 | (*(unsigned __int8*)(v76 + v75) << 8);
  if ((_DWORD)v79 != 0) {
    v80 = 0;
    v81 = GameData_22407a8;
    v82 = GameData_212dae8;
    while (1) {
      if (v81 == 0) {
        goto LABEL_62;
      }
      v86 = (_QWORD*)(*(_QWORD*)(v81 + 8) + 24 * v80);
      v88 = (_QWORD*)*v86;
      v87 = v86[1];
      v159[0] = 0;
      v159[1] = v88;
      if (v88 != nullptr) {
        v88 = *(_QWORD**)(*(_QWORD*)(v88[3] + 1784LL) + 272LL);
      }
      v160 = v88;
      v158[0] = 0;
      v158[1] = v87;
      if (v87 == 0) {
        goto LABEL_62;
      }
      v89 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v87 + 24) + 1784LL) + 272LL);
      v90 = (__int64)v82;
      v158[2] = v89;
      if (v88 != nullptr && v89 != 0) {
        v91 = *(_QWORD*)(v154 + 128);
        v92 = GameReliance_8e17a0(v91, v159, v158);
        v81 = GameData_22407a8;
        if ((v92 & 0x80000000) == 0) {
          v90 = *(_QWORD*)(v91 + 8) + 56LL * v92;
        }
        else {
        LABEL_62:
          v90 = (__int64)v82;
        }
      }
      v93 = *(int*)(a1 + 964);
      v94 = *(_QWORD*)(a1 + 952);
      v95 = v93 + 7;
      *(_DWORD*)(a1 + 964) = v93 + 1;
      v96 = *(unsigned __int8*)(v94 + v93);
      *(_DWORD*)(a1 + 964) = v93 + 2;
      v97 = *(unsigned __int8*)(v94 + v93 + 1);
      *(_DWORD*)(a1 + 964) = v93 + 3;
      v98 = *(unsigned __int8*)(v94 + v93 + 2);
      *(_DWORD*)(a1 + 964) = v93 + 4;
      v99 = *(unsigned __int8*)(v94 + v93 + 3);
      *(_DWORD*)(a1 + 964) = v93 + 5;
      v100 = *(unsigned __int8*)(v94 + v93 + 4);
      *(_DWORD*)(a1 + 964) = v93 + 6;
      v101 = *(unsigned __int8*)(v94 + v93 + 5);
      *(_DWORD*)(a1 + 964) = v93 + 7;
      v102 = *(unsigned __int8*)(v94 + v93 + 6);
      *(_DWORD*)(a1 + 964) = v93 + 8;
      if (*(_BYTE*)(v90 + 10) != 0) {
        v103 = v96 | (v97 << 8);
        v104 = *(unsigned __int8*)(v94 + v95);
        if (v103 != *(unsigned __int16*)(v90 + 12)) {
          *(_WORD*)(v90 + 12) = v103;
          v105 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
          if ((int)v105 < 1) {
            LOBYTE(v83) = 0;
          }
          else {
            v83 = 0;
            v106 =
                *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v105 - 1));
            if (v106 >= v103) {
              v106 = v103;
            }
            if (*(_DWORD*)GameData_21d99c8 <= v103) {
              v107 = v106;
            }
            else {
              v107 = *(_DWORD*)GameData_21d99c8;
            }
            while (1) {
              v108 = (unsigned int)(v83 + v105) >> 1;
              v109 = *(_DWORD*)(GameData_21d99c8 + 4LL * v108);
              if (v107 == v109) {
                break;
              }
              if (v107 < v109) {
                LODWORD(v105) = (unsigned int)(v83 + v105) >> 1;
              }
              else {
                v83 = v108 + 1;
              }
              if (v83 >= (int)v105) {
                goto LABEL_46;
              }
            }
            LOBYTE(v83) = v108 + 1;
          }
        LABEL_46:
          *(_BYTE*)(v90 + 11) = v83;
        }
        v84 = v98 | (v99 << 8);
        if (v84 >= 0x2710) {
          LOWORD(v84) = 10000;
        }
        *(_WORD*)(v90 + 14) = v84;
        if ((v100 | (v101 << 8) | (v102 << 16) | (unsigned int)(v104 << 24)) >=
            0xF4240) {
          v85 = 1000000;
        }
        else {
          v85 = v100 | (v101 << 8) | (v102 << 16) | (v104 << 24);
        }
        *(_DWORD*)(v90 + 16) = v85;
      }
      if (++v80 == v79) {
        v78 = *(_DWORD*)(a1 + 964);
        v76 = *(_QWORD*)(a1 + 952);
        v66 = GameData_212cfb8[0];
        break;
      }
    }
  }
  *(_DWORD*)(a1 + 964) = v78 + 1;
  (*(void (**)(_QWORD, __int64, _QWORD))(
      **(_QWORD**)game_map_history_g_transporter_ptr[0] + 64LL))(
      *game_map_history_g_transporter_ptr[0], a1 + 944,
      *(unsigned __int8*)(v76 + v78));
  v110 = *(int*)(a1 + 964);
  v111 = *(_QWORD*)(a1 + 952);
  v112 = v110 + 2;
  v113 = v110 + 3;
  *(_DWORD*)(a1 + 964) = v110 + 1;
  v114 = *(unsigned __int8*)(v111 + v110);
  *(_DWORD*)(a1 + 964) = v110 + 2;
  v115 = *(unsigned __int8*)(v111 + v110 + 1);
  *(_DWORD*)(a1 + 964) = v110 + 3;
  v116 = v110 + 4;
  v117 = game_GameModeData_instance_;
  v118 = *(unsigned __int8*)(v111 + v112);
  *(_DWORD*)(a1 + 964) = v116;
  if (v117 != 0) {
    v119 = ((v114 | (v115 << 8) | (v118 << 16)) & 0xFFFFFF |
            (*(unsigned __int8*)(v111 + v113) << 24)) &
           ~(*(char*)(v111 + v113) >> 7);
    if (v119 >= 9999999) {
      v119 = 9999999;
    }
    *(_DWORD*)(v117 + 72) = v119;
    v116 = *(_DWORD*)(a1 + 964);
    v111 = *(_QWORD*)(a1 + 952);
  }
  *(_DWORD*)(a1 + 964) = v116 + 1;
  v120 = *(unsigned __int8*)(v111 + v116);
  *(_DWORD*)(a1 + 964) = v116 + 2;
  v121 = *(unsigned __int8*)(v111 + v116 + 1LL);
  v122 = *(_QWORD*)(v117 + 160);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dba8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212dba8) != 0) {
    v152 = GameData_212dba0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212dba0) =
        &GameData_1abbc28;
    *v152 = game_HashString(&GameData_1abbc28);
    __cxa_guard_release(GameData_212dba8);
  }
  v123 = game_GameModeData_instance_;
  v124 = v120 | (v121 << 8);
  if (game_GameModeData_instance_ != 0) {
    v125 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), GameData_212dba0);
    if (v125 != 0) {
      v123 = *(_DWORD*)(v125 + 32);
    }
    else {
      v123 = 0;
    }
  }
  if (v123 >= v124) {
    v123 = v124;
  }
  *(_DWORD*)(v122 + 104) = v123;
  v126 = *(int*)(a1 + 964);
  v127 = *(_QWORD*)(a1 + 952);
  *(_DWORD*)(a1 + 964) = v126 + 1;
  v128 = *(unsigned __int8*)(v127 + v126);
  *(_DWORD*)(a1 + 964) = v126 + 2;
  v129 = v128 | (*(unsigned __int8*)(v127 + v126 + 1) << 8);
  if (v129 != 0) {
    v130 = 32LL * v129;
    v131 = 0;
    do {
      if (game_script_map_obj_g_object_records != 0) {
        v135 =
            (unsigned __int8*)(*(_QWORD*)(game_script_map_obj_g_object_records +
                                          8) +
                               v131);
        v136 = *v135;
        v137 = (v136 & 1) == 0;
        if ((v136 & 1) != 0) {
          v138 = *((_QWORD*)v135 + 1);
        }
        else {
          v138 = v136 >> 1;
        }
        if (v138 != 0) {
          if (v137) {
            v139 = v135 + 1;
          }
          else {
            v139 = *((unsigned __int8**)v135 + 2);
          }
          v140 = game_map_812b00(v139);
        }
        else {
          v140 = game_map_8129a0((unsigned int)(char)v135[24],
                                 (unsigned int)(char)v135[25]);
        }
        v132 = (__int64 (***)())v140;
      }
      else {
        v132 = game_map_anonymous_NullObject_vtable_ptr;
      }
      v133 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v133 + 1;
      ((void (*)(__int64 (***)(), bool))(*v132)[21])(
          v132, *(_BYTE*)(*(_QWORD*)(a1 + 952) + v133) != 0);
      v134 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v134 + 1;
      ((void (*)(__int64 (***)(), _QWORD))(*v132)[23])(
          v132, *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v134));
      v131 += 32;
    } while (v130 != v131);
  }
  GameRoutine_960b80(a1 + 944);
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    GameManager_a35190(*game_sound_g_game_sound_ptr[0], a1 + 944);
  }
  ProcMapSeq_1225d20(*GameData_2130668[0], a1 + 944);
  GameRoutine_1272e40(*GameData_2130670[0], a1 + 944);
  v141 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v141 + 1;
  (*(void (**)(_QWORD, __int64, _QWORD))(
      **(_QWORD**)game_map_history_g_ride_pool_ptr[0] + 64LL))(
      *game_map_history_g_ride_pool_ptr[0], a1 + 944,
      *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v141));
  v142 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v142 + 1;
  (*(void (**)(_QWORD, __int64, _QWORD))(
      **(_QWORD**)game_map_history_g_legion_pool_ptr[0] + 64LL))(
      *game_map_history_g_legion_pool_ptr[0], a1 + 944,
      *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v142));
  Stream_Unknown3(a1 + 944, 0);
  GameRoutine_122c900(v155);
  game_map_history_Impl_UpdateMap(1);
  v143 = *GameData_212ce90[0];
  v144 = GameData_212ce80[0];
  if (((*(_DWORD*)(*GameData_212ce90[0] + 20) ^ v153) & 0x800) != 0) {
    game_VariableManager_SetFlag(
        &game_map_kVariableSituation1000,
        (*(_DWORD*)(*GameData_212ce90[0] + 20) & 0x1000) != 0);
    game_VariableManager_SetFlag(&game_map_kVariableSituation800,
                                 (*(_DWORD*)(v143 + 20) & 0x800) != 0);
    game_VariableManager_SetFlag(&game_map_kVariableSituation200,
                                 (*(_DWORD*)(v143 + 20) & 0x200) != 0);
    Situation_763690(v143);
  }
  v145 = *v144;
  v146 = *(_DWORD*)(v145 + 61624) - 1;
  *(_DWORD*)(v145 + 61624) = v146;
  if (v146 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v145 + 61616) + 8LL))(v145 + 61616);
    LOBYTE(v158[0]) = 0;
    v159[0] = GameData_1f9a470;
    v159[1] = v145;
    v161 = v159;
    v160 = v158;
    GameRoutine_74df60(v145 + 61472, v159);
    if (v161 == v159) {
      v147 = 32;
    }
    else {
      if (v161 == nullptr) {
      LABEL_115:
        *(_QWORD*)(v145 + 61472) = 0x3E8000003E8LL;
        *(_QWORD*)(v145 + 61480) = -1;
        v148 = LOBYTE(v158[0]);
        *(_QWORD*)(v145 + 61488) = 0;
        *(_QWORD*)(v145 + 61496) = 0;
        *(_QWORD*)(v145 + 61504) = 0;
        *(_QWORD*)(v145 + 61512) = 0;
        *(_QWORD*)(v145 + 61520) = 0;
        *(_QWORD*)(v145 + 61528) = 0;
        *(_QWORD*)(v145 + 61536) = 0;
        *(_QWORD*)(v145 + 61544) = 0;
        *(_QWORD*)(v145 + 61552) = 0;
        *(_QWORD*)(v145 + 61560) = 0;
        *(_QWORD*)(v145 + 61568) = 0;
        *(_QWORD*)(v145 + 61576) = 0;
        *(_QWORD*)(v145 + 61584) = 0;
        *(_QWORD*)(v145 + 61592) = 0;
        *(_QWORD*)(v145 + 61600) = 0;
        *(_QWORD*)(v145 + 61608) = 0;
        if (v148 == 1 && *(_QWORD*)GameData_212d020[0] != 0) {
          GameRoutine_f09600();
        }
        goto LABEL_118;
      }
      v147 = 40;
    }
    (*(void (**)(__int64))(*v161 + v147))((__int64)v161);
    goto LABEL_115;
  }
LABEL_118:
  game_map_history_122c500_alt1();
  v149 = Trick_7d5160(*(_QWORD*)(*v66 + 16),
                      *(unsigned __int8*)(*(_QWORD*)(*v66 + 16) + 92848LL));
  result = GameRoutine_963d60(v149);
  if (v155[0] != 0) {
    v151 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v151 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v151);
  }
  return result;
}

void game_map_history_122c500()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  float v7;
  __int128 v8;
  __int128 v9;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  float v18;
  __int128 v19;
  __int128 v20;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  float v29;
  __int128 v30;
  __int128 v31;
  __int64 v33;
  _QWORD* i;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  float v40;
  __int128 v41;
  __int128 v42;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  __int128 v53;

  v0 = *(_QWORD**)(GameData_21ca310 + 56);
  v1 = (_QWORD*)v0[69500];
  if (v1 != nullptr) {
    do {
      v2 = v1[1];
      if (v2 != 0) {
        v3 = *(char*)(v2 + 584);
        if ((v3 & 0x80000000) == 0) {
          v4 = *(char*)(v2 + 585);
          if ((v4 & 0x80000000) == 0) {
            v5 = *(_DWORD*)(v2 + 592);
            v6 = v4 | 0x100;
            v7 = (float)(unsigned int)(v5 - 1) * 0x1.4000000000000p+1f;
            if (v5 <= 0) {
              v7 = 0x0.0p+0f;
            }
            *(_QWORD*)&v8 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)(v3 | 0x100u) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v7);
            v45 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v6 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v7);
            *(float*)&v49 = (float)((float)((float)((float)(v3 | 0x100u) *
                                                    0x1.4000000000000p+2f) +
                                            0x1.4000000000000p+1f) +
                                    -0x1.4000000000000p+10f) +
                            v7;
            *((_QWORD*)&v8 + 1) = v45;
            v53 = v8;
            *(_QWORD*)&v9 = __PAIR64__(
                COERCE_UNSIGNED_INT(Unit_6c7fa0(v2, (__int64)&v53)), v49);
            *((_QWORD*)&v9 + 1) = v45;
            v53 = v9;
            Cursor_734a80((__int64)(v1 + 6), (__int64*)&v53);
            UnitActor_81ba20((__int64)v1);
          }
        }
        v11 = v1[33];
        if (v11 != 0) {
          CharacterBuilder_1084780(v11);
        }
      }
      v1 = (_QWORD*)v1[54];
    } while (v1 != nullptr);
    v0 = *(_QWORD**)(GameData_21ca310 + 56);
  }
  v12 = (_QWORD*)v0[69503];
  if (v12 != nullptr) {
    do {
      v13 = v12[1];
      if (v13 != 0) {
        v14 = *(char*)(v13 + 584);
        if ((v14 & 0x80000000) == 0) {
          v15 = *(char*)(v13 + 585);
          if ((v15 & 0x80000000) == 0) {
            v16 = *(_DWORD*)(v13 + 592);
            v17 = v15 | 0x100;
            v18 = (float)(unsigned int)(v16 - 1) * 0x1.4000000000000p+1f;
            if (v16 <= 0) {
              v18 = 0x0.0p+0f;
            }
            *(_QWORD*)&v19 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)(v14 | 0x100u) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v18);
            v46 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v17 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v18);
            *(float*)&v50 = (float)((float)((float)((float)(v14 | 0x100u) *
                                                    0x1.4000000000000p+2f) +
                                            0x1.4000000000000p+1f) +
                                    -0x1.4000000000000p+10f) +
                            v18;
            *((_QWORD*)&v19 + 1) = v46;
            v53 = v19;
            *(_QWORD*)&v20 = __PAIR64__(
                COERCE_UNSIGNED_INT(Unit_6c7fa0(v13, (__int64)&v53)), v50);
            *((_QWORD*)&v20 + 1) = v46;
            v53 = v20;
            Cursor_734a80((__int64)(v12 + 6), (__int64*)&v53);
            UnitActor_81ba20((__int64)v12);
          }
        }
        v22 = v12[33];
        if (v22 != 0) {
          CharacterBuilder_1084780(v22);
        }
      }
      v12 = (_QWORD*)v12[54];
    } while (v12 != nullptr);
    v0 = *(_QWORD**)(GameData_21ca310 + 56);
  }
  v23 = (_QWORD*)v0[69506];
  if (v23 != nullptr) {
    do {
      v24 = v23[1];
      if (v24 != 0) {
        v25 = *(char*)(v24 + 584);
        if ((v25 & 0x80000000) == 0) {
          v26 = *(char*)(v24 + 585);
          if ((v26 & 0x80000000) == 0) {
            v27 = *(_DWORD*)(v24 + 592);
            v28 = v26 | 0x100;
            v29 = (float)(unsigned int)(v27 - 1) * 0x1.4000000000000p+1f;
            if (v27 <= 0) {
              v29 = 0x0.0p+0f;
            }
            *(_QWORD*)&v30 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)(v25 | 0x100u) *
                                        0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v29);
            v47 = COERCE_UNSIGNED_INT(
                (float)((float)((float)((float)v28 * 0x1.4000000000000p+2f) +
                                0x1.4000000000000p+1f) +
                        -0x1.4000000000000p+10f) +
                v29);
            *(float*)&v51 = (float)((float)((float)((float)(v25 | 0x100u) *
                                                    0x1.4000000000000p+2f) +
                                            0x1.4000000000000p+1f) +
                                    -0x1.4000000000000p+10f) +
                            v29;
            *((_QWORD*)&v30 + 1) = v47;
            v53 = v30;
            *(_QWORD*)&v31 = __PAIR64__(
                COERCE_UNSIGNED_INT(Unit_6c7fa0(v24, (__int64)&v53)), v51);
            *((_QWORD*)&v31 + 1) = v47;
            v53 = v31;
            Cursor_734a80((__int64)(v23 + 6), (__int64*)&v53);
            UnitActor_81ba20((__int64)v23);
          }
        }
        v33 = v23[33];
        if (v33 != 0) {
          CharacterBuilder_1084780(v33);
        }
      }
      v23 = (_QWORD*)v23[54];
    } while (v23 != nullptr);
    v0 = *(_QWORD**)(GameData_21ca310 + 56);
  }
  for (i = (_QWORD*)v0[69509]; i != nullptr; i = (_QWORD*)i[54]) {
    v35 = i[1];
    if (v35 != 0) {
      v36 = *(char*)(v35 + 584);
      if ((v36 & 0x80000000) == 0) {
        v37 = *(char*)(v35 + 585);
        if ((v37 & 0x80000000) == 0) {
          v38 = *(_DWORD*)(v35 + 592);
          v39 = v37 | 0x100;
          v40 = (float)(unsigned int)(v38 - 1) * 0x1.4000000000000p+1f;
          if (v38 <= 0) {
            v40 = 0x0.0p+0f;
          }
          *(_QWORD*)&v41 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)(v36 | 0x100u) *
                                      0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f) +
              v40);
          v48 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v39 * 0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f) +
              v40);
          *(float*)&v52 = (float)((float)((float)((float)(v36 | 0x100u) *
                                                  0x1.4000000000000p+2f) +
                                          0x1.4000000000000p+1f) +
                                  -0x1.4000000000000p+10f) +
                          v40;
          *((_QWORD*)&v41 + 1) = v48;
          v53 = v41;
          *(_QWORD*)&v42 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v35, (__int64)&v53)), v52);
          *((_QWORD*)&v42 + 1) = v48;
          v53 = v42;
          Cursor_734a80((__int64)(i + 6), (__int64*)&v53);
          UnitActor_81ba20((__int64)i);
        }
      }
      v44 = i[33];
      if (v44 != 0) {
        CharacterBuilder_1084780(v44);
      }
    }
  }
}

__int64 game_map_history_122d3c0(_QWORD* a1, __int64* a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 Em;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int16 v49;
  __int16 v50;
  _QWORD* v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64* v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 (*v65)(__int64, __int64*);
  __int64 v66;
  __int64* v67;
  unsigned __int64 v68;
  __int64 v69;
  char* v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  _BYTE* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64 result;
  unsigned int v95;
  _QWORD* v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;

  v4 = game_HashString32("MapHistory");
  v5 = *a2;
  LODWORD(v99) = v4;
  if (((*(__int64 (**)(__int64*, __int64*))(v5 + 16))(a2, &v99) & 1) == 0) {
    goto LABEL_94;
  }
  v6 = *((int*)a2 + 5);
  v7 = a2[1];
  *((_DWORD*)a2 + 5) = v6 + 1;
  v8 = *(unsigned __int8*)(v7 + v6);
  *((_DWORD*)a2 + 5) = v6 + 2;
  v95 = v8;
  *((_BYTE*)a1 + 8) = *(_BYTE*)(v7 + v6 + 1);
  if (v8 != 0) {
    v9 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v9 + 1;
    *((_BYTE*)a1 + 10) = *(_BYTE*)(a2[1] + v9) != 0;
  }
  v10 = *((int*)a2 + 5);
  v11 = a2[1];
  v12 = 0;
  *((_DWORD*)a2 + 5) = v10 + 1;
  v13 = *(unsigned __int8*)(v11 + v10);
  *((_DWORD*)a2 + 5) = v10 + 2;
  v14 = *(unsigned __int8*)(v11 + v10 + 1);
  *((_DWORD*)a2 + 5) = v10 + 3;
  v15 = *(unsigned __int8*)(v11 + v10 + 2);
  *((_DWORD*)a2 + 5) = v10 + 4;
  v97 = a1 + 3;
  v16 = game_map_history_g_record_alloc_failed_ptr;
  v96 = a1;
  *((_DWORD*)a1 + 3) = v13 | (v14 << 8) | (v15 << 16) |
                       (*(unsigned __int8*)(v11 + v10 + 3) << 24);
  do {
    v17 = *((int*)a2 + 5);
    v18 = a2[1];
    v98 = v12;
    *((_DWORD*)a2 + 5) = v17 + 1;
    v19 = *(unsigned __int8*)(v18 + v17);
    *((_DWORD*)a2 + 5) = v17 + 2;
    v20 = v19 | (*(unsigned __int8*)(v18 + v17 + 1) << 8);
    v97[v12] = 0;
    if (v20 != 0) {
      v21 = 0;
      v22 = 0;
      do {
        v23 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v23 + 1;
        v24 = *(unsigned __int8*)(a2[1] + v23);
        v25 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
        if (v24 <= 1) {
          v31 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          if (v24 != 0) {
            while (1) {
              Em = nn_mem_StandardAllocator_Allocate_1a0ad50(v31, 112);
              if (Em != 0) {
                break;
              }
              v29 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
              v99 = 112;
              if (v29 == 0) {
              LABEL_95:
                GameRoutine_60a310(v29, v28);
              }
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v29 + 48LL))(v29,
                                                                      &v99);
              v31 = v25;
            }
            *(_WORD*)(Em + 20) = 0;
            *(_DWORD*)(Em + 16) = 0x1000000;
            v34 = GameData_2130aa0[0];
            *(_WORD*)(Em + 35) = -1;
            *(_QWORD*)(Em + 22) = 0;
            *(_QWORD*)(Em + 27) = 0;
            *(_DWORD*)(Em + 40) = 0;
            v32 = v34 + 2;
            *(_QWORD*)(Em + 48) = 0;
            *(_QWORD*)(Em + 56) = &GameData_1a9f09e;
            *(_QWORD*)(Em + 64) = 0;
            *(_QWORD*)(Em + 72) = &GameData_1a9f09e;
            *(_QWORD*)(Em + 80) = 0;
            *(_QWORD*)(Em + 88) = &GameData_1a9f09e;
            *(_QWORD*)(Em + 96) = 0;
            *(_QWORD*)(Em + 104) = &GameData_1a9f09e;
          }
          else {
            while (1) {
              Em = nn_mem_StandardAllocator_Allocate_1a0ad50(v31, 128);
              if (Em != 0) {
                break;
              }
              v29 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
              v99 = 128;
              if (v29 == 0) {
                goto LABEL_95;
              }
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v29 + 48LL))(v29,
                                                                      &v99);
              v31 = v25;
            }
            *(_QWORD*)(Em + 14) = 0;
            v33 = GameData_2130a98[0];
            *(_WORD*)(Em + 51) = -1;
            *(_WORD*)(Em + 22) = 0;
            *(_DWORD*)(Em + 24) = 0;
            v32 = v33 + 2;
            *(_QWORD*)(Em + 32) = 0;
            *(_QWORD*)(Em + 40) = 0;
            *(_DWORD*)(Em + 47) = 0;
            *(_DWORD*)(Em + 56) = 0;
            *(_QWORD*)(Em + 64) = 0;
            *(_QWORD*)(Em + 72) = &GameData_1a9f09e;
            *(_QWORD*)(Em + 80) = 0;
            *(_QWORD*)(Em + 88) = &GameData_1a9f09e;
            *(_QWORD*)(Em + 96) = 0;
            *(_QWORD*)(Em + 104) = &GameData_1a9f09e;
            *(_QWORD*)(Em + 112) = 0;
            *(_QWORD*)(Em + 120) = &GameData_1a9f09e;
          }
          goto LABEL_35;
        }
        if (v24 == 2) {
          while (1) {
            Em = nn_mem_StandardAllocator_Allocate_1a0ad50(v25, 48);
            if (Em != 0) {
              break;
            }
            v29 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
            v99 = 48;
            if (v29 == 0) {
              goto LABEL_95;
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v29 + 48LL))(v29, &v99);
          }
          *(_WORD*)(Em + 20) = 0;
          *(_DWORD*)(Em + 16) = 0x2000000;
          v30 = GameData_2130aa8[0];
        }
        else {
          v26 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          if (v24 == 3) {
            while (1) {
              Em = nn_mem_StandardAllocator_Allocate_1a0ad50(v26, 24);
              if (Em != 0) {
                break;
              }
              v29 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
              v99 = 24;
              if (v29 == 0) {
                goto LABEL_95;
              }
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v29 + 48LL))(v29,
                                                                      &v99);
              v26 = v25;
            }
            *(_QWORD*)(Em + 16) = 50331648;
            v32 = GameData_2130ab0[0] + 2;
            goto LABEL_35;
          }
          while (1) {
            Em = nn_mem_StandardAllocator_Allocate_1a0ad50(v26, 48);
            if (Em != 0) {
              break;
            }
            v29 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
            v99 = 48;
            if (v29 == 0) {
              goto LABEL_95;
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v29 + 48LL))(v29, &v99);
            v26 = v25;
          }
          *(_WORD*)(Em + 20) = 0;
          *(_DWORD*)(Em + 16) = 0x4000000;
          v30 = GameData_2130ab8[0];
        }
        v32 = v30 + 2;
        *(_QWORD*)(Em + 24) = 0;
        *(_WORD*)(Em + 32) = 0;
        *(_QWORD*)(Em + 40) = 0;
      LABEL_35:
        *(_QWORD*)Em = v32;
        *(_QWORD*)(Em + 8) = 0;
        v35 = Em;
        ((void (*)(void))v32[9])();
        if (v22 != 0) {
          *(_QWORD*)(v22 + 8) = v35;
        }
        else {
          v97[v98] = v35;
        }
        ++v21;
        v22 = v35;
      } while (v21 != v20);
    }
    v12 = v98 + 1;
  } while (v98 != 99);
  v36 = *((_DWORD*)a2 + 5);
  if (v95 == 0) {
    *((_DWORD*)a2 + 5) = v36 + 1;
    *((_BYTE*)a1 + 10) = *(_BYTE*)(a2[1] + v36) != 0;
    v36 = *((_DWORD*)a2 + 5) + 1;
  }
  v37 = a2[1];
  *((_DWORD*)a2 + 5) = v36 + 1;
  v38 = *(unsigned __int8*)(v37 + v36);
  *((_DWORD*)a2 + 5) = v36 + 2;
  v39 = v36 + 3LL;
  v40 = *(unsigned __int8*)(v37 + v36 + 1LL);
  *((_DWORD*)a2 + 5) = v39;
  v41 = v38 | (v40 << 8);
  v42 = *(unsigned __int8*)(v37 + v36 + 2LL);
  *((_DWORD*)a2 + 5) = v36 + 4;
  *((_DWORD*)a1 + 206) =
      v41 | (v42 << 16) | (*(unsigned __int8*)(v37 + v39) << 24);
  v43 = *((int*)a2 + 5);
  v44 = a2[1];
  *((_DWORD*)a2 + 5) = v43 + 1;
  LOWORD(v37) = *(unsigned __int8*)(v44 + v43);
  *((_DWORD*)a2 + 5) = v43 + 2;
  *((_WORD*)a1 + 414) = v37 | (*(unsigned __int8*)(v44 + v43 + 1) << 8);
  v45 = *((int*)a2 + 5);
  v46 = a2[1];
  *((_DWORD*)a2 + 5) = v45 + 1;
  LOWORD(v37) = *(unsigned __int8*)(v46 + v45);
  *((_DWORD*)a2 + 5) = v45 + 2;
  *((_WORD*)a1 + 415) = v37 | (*(unsigned __int8*)(v46 + v45 + 1) << 8);
  v47 = *((int*)a2 + 5);
  v48 = a2[1];
  *((_DWORD*)a2 + 5) = v47 + 1;
  v49 = *(unsigned __int8*)(v48 + v47);
  *((_DWORD*)a2 + 5) = v47 + 2;
  v50 = *(unsigned __int8*)(v48 + v47 + 1);
  v51 = (_QWORD*)a1[106];
  v52 = (_QWORD*)a1[105];
  while (v51 != v52) {
    v57 = *--v51;
    v56 = v57;
    *v51 = 0;
    if (v57 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v56 + 8LL))(v56);
    }
  }
  v96[106] = v52;
  a1 = v96;
  if (((unsigned __int8)v49 | (unsigned __int16)(v50 << 8)) != 0) {
    v53 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v54 = GameData_2130ac8[0];
    v55 = (unsigned __int16)((v50 << 8) + v49);
    do {
      v59 = *((int*)a2 + 5);
      v60 = *v53;
      *((_DWORD*)a2 + 5) = v59 + 1;
      v61 = *(unsigned __int8*)(a2[1] + v59);
      v62 = fw_memory_HeapManager_Allocate(v60, 16, 16, 0);
      v63 = v62;
      if (v61 != 0) {
        *(_WORD*)(v62 + 8) = 1;
        v64 = v54 + 2;
      }
      else {
        *(_WORD*)(v62 + 8) = 0;
        v64 = GameData_2130ac0[0] + 2;
      }
      *(_QWORD*)v62 = v64;
      v65 = (__int64 (*)(__int64, __int64*))v64[3];
      *(_BYTE*)(v62 + 10) = 0;
      v66 = v65(v62, a2);
      v67 = (__int64*)a1[106];
      v68 = a1[107];
      if ((unsigned __int64)v67 < v68) {
        *v67 = v63;
        v58 = (__int64)(v67 + 1);
      }
      else {
        v69 = a1[105];
        v70 = (char*)v67 - v69;
        v71 = ((__int64)v67 - v69) >> 3;
        v72 = v71 + 1;
        if ((unsigned __int64)(v71 + 1) >> 61 != 0) {
          GameRoutine_122f7a0(v66);
        }
        v73 = v68 - v69;
        if (v73 >> 2 > v72) {
          v72 = v73 >> 2;
        }
        if ((unsigned __int64)v73 >= 0x7FFFFFFFFFFFFFF8LL) {
          v74 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v74 = v72;
        }
        if (v74 != 0) {
          if (v74 >> 61 != 0) {
            GameRoutine_60a210(v66);
          }
          v75 = fw_memory_HeapManager_Allocate(*v53, 8 * v74, 16, 0);
        }
        else {
          v75 = 0;
        }
        v76 = v75 + 8 * v74;
        v77 = (char*)v67 - v69;
        v78 = (__int64)&v70[v75 + -8 * v71];
        *(_QWORD*)&v70[v75] = v63;
        v58 = (__int64)&v70[v75 + 8];
        memcpy(v78, v69, v77);
        a1 = v96;
        v96[105] = v78;
        v96[106] = v58;
        v96[107] = v76;
        if (v69 != 0) {
          v79 = 128;
          if (*(_QWORD*)(*v53 + 200LL) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free(*v53 + v79);
        }
      }
      --v55;
      a1[106] = v58;
    } while (v55 != 0);
  }
  HistoryLogInfo_1239980(a1 + 108, a2);
  GameRoutine_12a64a0(a2);
  GameRoutine_1285d20(a2);
  v80 = game_map_UnitFlags_instance_;
  if (game_map_UnitFlags_instance_ != 0) {
    v81 = game_HashString32("MapHistoryUnitMgr");
    v82 = *a2;
    LODWORD(v99) = v81;
    if (((*(__int64 (**)(__int64*, __int64*))(v82 + 16))(a2, &v99) & 1) != 0) {
      v83 = 256;
      ++*((_DWORD*)a2 + 5);
      v84 = (_BYTE*)(v80 + 15);
      do {
        v85 = *((int*)a2 + 5);
        v83 -= 8;
        *((_DWORD*)a2 + 5) = v85 + 1;
        *(v84 - 7) = *(_BYTE*)(a2[1] + v85);
        v86 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v86 + 1;
        *(v84 - 6) = *(_BYTE*)(a2[1] + v86);
        v87 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v87 + 1;
        *(v84 - 5) = *(_BYTE*)(a2[1] + v87);
        v88 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v88 + 1;
        *(v84 - 4) = *(_BYTE*)(a2[1] + v88);
        v89 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v89 + 1;
        *(v84 - 3) = *(_BYTE*)(a2[1] + v89);
        v90 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v90 + 1;
        *(v84 - 2) = *(_BYTE*)(a2[1] + v90);
        v91 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v91 + 1;
        *(v84 - 1) = *(_BYTE*)(a2[1] + v91);
        v92 = *((int*)a2 + 5);
        *((_DWORD*)a2 + 5) = v92 + 1;
        *v84 = *(_BYTE*)(a2[1] + v92);
        v84 += 8;
      } while (v83 != 0);
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  game_map_history_anonymous_Impl_Deserialize(a2);
  if (v95 > 2) {
    game_12adf00(a2);
    goto LABEL_94;
  }
  if (v95 == 2) {
    goto LABEL_94;
  }
  v93 = *((_DWORD*)a1 + 3);
  if ((v93 & 8) != 0) {
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 41) |= 1u;
      v93 = *((_DWORD*)a1 + 3);
    }
    v93 &= ~8u;
    *((_DWORD*)a1 + 3) = v93;
    if ((v93 & 0x10) != 0) {
      goto LABEL_82;
    }
  LABEL_75:
    if ((v93 & 0x1000) == 0) {
      goto LABEL_76;
    }
  LABEL_85:
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 265) |= 1u;
      v93 = *((_DWORD*)a1 + 3);
    }
    v93 &= ~0x1000u;
    *((_DWORD*)a1 + 3) = v93;
    if ((v93 & 0x40000) != 0) {
      goto LABEL_88;
    }
  LABEL_77:
    if ((v93 & 0x200000) == 0) {
      goto LABEL_94;
    }
  LABEL_91:
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 329) |= 1u;
      v93 = *((_DWORD*)a1 + 3);
    }
    *((_DWORD*)a1 + 3) = v93 & 0xFFDFFFFF;
  }
  else {
    if ((v93 & 0x10) == 0) {
      goto LABEL_75;
    }
  LABEL_82:
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 73) |= 1u;
      v93 = *((_DWORD*)a1 + 3);
    }
    v93 &= ~0x10u;
    *((_DWORD*)a1 + 3) = v93;
    if ((v93 & 0x1000) != 0) {
      goto LABEL_85;
    }
  LABEL_76:
    if ((v93 & 0x40000) == 0) {
      goto LABEL_77;
    }
  LABEL_88:
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 105) |= 1u;
      v93 = *((_DWORD*)a1 + 3);
    }
    v93 &= ~0x40000u;
    *((_DWORD*)a1 + 3) = v93;
    if ((v93 & 0x200000) != 0) {
      goto LABEL_91;
    }
  }
LABEL_94:
  result = (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  *((_BYTE*)a1 + 9) = 1;
  return result;
}

__int64 game_map_history_122dd20(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  bool v8;
  int v9;
  bool v10;
  unsigned int* v11;
  unsigned int* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  void (*v30)(__int64, int*);
  char v31;
  __int64 v32;
  __int64 v33;
  _BOOL8 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 (**v41)(_QWORD*);
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 (**v56)(__int64);
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _BYTE* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
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
  __int64* v82;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  int v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  int v112;
  _BOOL8 v113;
  char v114[4];
  __int64 v115;
  char v116[8];
  _BYTE v117[4];
  int v118;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD**)v2;
  v4 = *(_QWORD**)(v2 + 8);
  if (*(_QWORD**)v2 != v4) {
    v5 = a2;
    v6 = result;
    while (1) {
      v7 = *(unsigned __int8*)(*v3 + 19LL);
      v8 = v7 > 4;
      v9 = (1 << v7) & 0x15;
      v10 = v8 || v9 == 0;
      if (!v10) {
        break;
      }
    LABEL_3:
      v3 += 9;
      if (v3 == v4) {
        return result;
      }
    }
    v12 = (unsigned int*)v3[1];
    v11 = (unsigned int*)v3[2];
    while (1) {
      if (v12 == v11) {
        goto LABEL_3;
      }
      v13 = *(_QWORD*)(v5 + 32);
      if (v13 == 0) {
        GameRoutine_60a310(0, a2);
      }
      result = (*(__int64 (**)(__int64, unsigned int*))(*(_QWORD*)v13 + 48LL))(
          v13, v12);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_10:
      v12 += 3;
    }
    v14 = *(_DWORD*)(v6 + 144);
    v15 = (int)v12[1];
    if ((int)v15 <= *(_DWORD*)(v6 + 32) - v14) {
      result = memcpy(*(_QWORD*)(v6 + 24) + v14, v3[4] + *v12, v15);
      v14 = *(_DWORD*)(v6 + 144);
    }
    v16 = *(_QWORD*)(v6 + 48);
    v17 = *(_QWORD*)(v6 + 56);
    v18 = ((v17 - v16) << 7) - 1;
    if (v17 == v16) {
      v18 = 0;
    }
    v19 = *(_QWORD*)(v6 + 80) + *(_QWORD*)(v6 + 72);
    if (v18 == v19) {
      result = GameRoutine_660f80(v6 + 40);
      v16 = *(_QWORD*)(v6 + 48);
      v19 = *(_QWORD*)(v6 + 80) + *(_QWORD*)(v6 + 72);
    }
    *(_DWORD*)(*(_QWORD*)(v16 + 8 * (v19 >> 10)) + 4 * (v19 & 0x3FF)) =
        *(_DWORD*)(v6 + 36);
    *(_DWORD*)(v6 + 36) = v14;
    ++*(_QWORD*)(v6 + 80);
    switch (*((_BYTE*)v12 + 8)) {
    case 0:
      v117[0] = *((_BYTE*)v12 + 9);
      v20 = GameRoutine_6eaec0(v117);
      v21 = (unsigned __int8*)v3[6];
      v22 = (unsigned __int8*)v3[7];
      v23 = v20;
      if (v21 != v22) {
        while (*v21 != v117[0]) {
          v21 += 2;
          if (v21 == v22) {
            goto LABEL_24;
          }
        }
        result = GameRoutine_122e840(v6 + 168, 0, v117, v21 + 1);
        if (v23 != 0) {
          LOBYTE(v118) = 9;
          v111 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v111 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          v112 = *(unsigned __int16*)(v23 + 494);
          v113 = true;
          if (*(_QWORD*)(v23 + 392) != v111 &&
              (*(_BYTE*)(v23 + 418) & 8) == 0) {
            LODWORD(v115) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
            if ((game_HasSkill(v23 + 1744, &v115) & 1) != 0 &&
                (unsigned __int8)v118 != 9) {
              v113 = false;
            }
          }
          result = GameRoutine_6c47b0(v23, &v118, v113, 1);
          if ((unsigned __int8)v118 <= 8u &&
              v112 != *(unsigned __int16*)(v23 + 494)) {
            *(_WORD*)(v23 + 494) = v112;
          }
        }
        goto LABEL_91;
      }
    LABEL_24:
      v24 = v4;
      if (v20 == 0) {
        v23 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
      }
      v25 = *(int*)(v6 + 36);
      v27 = *(_QWORD*)(v6 + 16);
      v26 = *(_QWORD*)(v6 + 24);
      v28 = v25 + 2;
      *(_DWORD*)(v6 + 36) = v25 + 2;
      v29 = *(unsigned __int8*)(v26 + v25 + 1);
      *(_DWORD*)(v6 + 36) = v25 + 3;
      v30 = *(void (**)(__int64, int*))(v27 + 16);
      v31 = *(_BYTE*)(v26 + v28);
      v118 = 0;
      v30(v6 + 16, &v118);
      v32 = *(int*)(v6 + 36);
      v33 = *(_QWORD*)(v6 + 24);
      *(_DWORD*)(v6 + 36) = v32 + 1;
      if (*(unsigned __int8*)(v33 + v32) >= 0x19u) {
        *(_DWORD*)(v6 + 36) = v32 + 2;
        v34 = *(unsigned __int8*)(v33 + v32 + 1) != 0;
      }
      else {
        v34 = true;
      }
      Unit_6e1e20(v23, v6 + 16, v34);
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)(v6 + 16) + 24LL))(v6 + 16, 0);
      v92 = *(_QWORD*)(GameData_21ca310 + 56);
      v116[0] = v31;
      v93 = v92 + 24LL * v29 + 556000;
      if (v29 <= 9) {
        v94 = v93;
      }
      else {
        v94 = 0;
      }
      v115 = v94;
      if (v29 > 9) {
        v95 = 9;
      }
      else {
        v95 = *(unsigned __int8*)(v93 + 16);
      }
      v96 = *(unsigned __int16*)(v23 + 494);
      v97 = *(_QWORD*)(v23 + 392);
      v4 = v24;
      v114[0] = v95;
      v98 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v98 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      if (v97 == v98 || (*(_BYTE*)(v23 + 418) & 8) != 0) {
        if (v95 != 9) {
        LABEL_84:
          v99 = 0;
          goto LABEL_87;
        }
      }
      else {
        v118 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                          game_g_shared_system_skills_ptr) &
               0xFFF;
        if ((game_HasSkill(v23 + 1744, &v118) & 1) != 0 && v114[0] != 9) {
          goto LABEL_84;
        }
      }
      v99 = 1;
    LABEL_87:
      GameRoutine_6c47b0(v23, v114, v99, 1);
      if ((unsigned __int8)v114[0] <= 8u &&
          v96 != *(unsigned __int16*)(v23 + 494)) {
        *(_WORD*)(v23 + 494) = v96;
      }
      result = GameRoutine_122e840(v6 + 168, v23, v117, v116);
    LABEL_91:
      v101 = *(_QWORD*)(v6 + 72);
      v100 = *(_QWORD*)(v6 + 80);
      v103 = *(_QWORD*)(v6 + 48);
      v102 = *(_QWORD*)(v6 + 56);
      v10 = v102 == v103;
      v104 = v100 - 1 + v101;
      v105 = v104 >> 10;
      v106 = v104 & 0x3FF;
      v107 = ((v102 - v103) << 7) - 1;
      v108 = *(_QWORD*)(v103 + 8 * v105);
      if (v10) {
        v107 = 0;
      }
      v109 = *(_DWORD*)(v108 + 4 * v106);
      *(_QWORD*)(v6 + 80) = v100 - 1;
      *(_DWORD*)(v6 + 36) = v109;
      if ((unsigned __int64)(v107 - (v100 + v101) + 1) >= 0x800) {
        a2 = *(_QWORD*)(v102 - 8);
        if (a2 != 0) {
          v110 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v110 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v110);
          v102 = *(_QWORD*)(v6 + 56);
        }
        *(_QWORD*)(v6 + 56) = v102 - 8;
      }
      goto LABEL_10;
    case 1:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      if (game_map_UnitFlags_instance_ != 0) {
        v62 = (_BYTE*)(game_map_UnitFlags_instance_ + 11);
        *(_DWORD*)(v6 + 36) = v14 + 2;
        v63 = 256;
        do {
          v64 = *(int*)(v6 + 36);
          v63 -= 16;
          *(_DWORD*)(v6 + 36) = v64 + 1;
          *(v62 - 3) = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v64);
          v65 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v65 + 1;
          *(v62 - 2) = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v65);
          v66 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v66 + 1;
          *(v62 - 1) = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v66);
          v67 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v67 + 1;
          *v62 = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v67);
          v68 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v68 + 1;
          v62[1] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v68);
          v69 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v69 + 1;
          v62[2] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v69);
          v70 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v70 + 1;
          v62[3] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v70);
          v71 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v71 + 1;
          v62[4] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v71);
          v72 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v72 + 1;
          v62[5] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v72);
          v73 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v73 + 1;
          v62[6] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v73);
          v74 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v74 + 1;
          v62[7] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v74);
          v75 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v75 + 1;
          v62[8] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v75);
          v76 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v76 + 1;
          v62[9] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v76);
          v77 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v77 + 1;
          v62[10] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v77);
          v78 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v78 + 1;
          v62[11] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v78);
          v79 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v79 + 1;
          v62[12] = *(_BYTE*)(*(_QWORD*)(v6 + 24) + v79);
          v62 += 16;
        } while (v63 != 0);
      }
      goto LABEL_91;
    case 2:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      v54 = *GameData_212cfb8[0];
      if (*GameData_212cfb8[0] != 0) {
        v56 = *(__int64 (***)(__int64))(v54 + 8);
        v55 = v54 + 8;
        v57 = (*v56)(v55);
        v58 = game_HashString32(v57);
        v59 = *(_QWORD*)(v6 + 16);
        LODWORD(v115) = v58;
        if (((*(__int64 (**)(__int64, __int64*))(v59 + 16))(v6 + 16, &v115) &
             1) != 0) {
          v60 = *(int*)(v6 + 36);
          *(_DWORD*)(v6 + 36) = v60 + 1;
          (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v55 + 24LL))(
              v55, v6 + 16, *(unsigned __int8*)(*(_QWORD*)(v6 + 24) + v60));
        }
        result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)(v6 + 16) + 24LL))(
            v6 + 16, 0);
      }
      *(_BYTE*)(v6 + 192) = 1;
      goto LABEL_91;
    case 3:
      result = RecordSerializer_123d0b0(v6 + 16, *((unsigned __int8*)v12 + 9));
      goto LABEL_91;
    case 4:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      result = GameRoutine_126ba80(*(_QWORD*)GameData_2130688, v6 + 16);
      goto LABEL_91;
    case 5:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      result = game_RandomSeed_Deserialize(
          game_map_MapRandom_instance__ptr[0] + 2, v6 + 16);
      goto LABEL_91;
    case 6:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      result = game_1286480(v6 + 16);
      goto LABEL_91;
    case 7:
      v61 = *(_QWORD*)(v6 + 24);
      *(_DWORD*)(v6 + 36) = v14 + 2;
      result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
          **(_QWORD**)game_map_history_g_transporter_ptr[0] + 64LL))(
          *game_map_history_g_transporter_ptr[0], v6 + 16,
          *(unsigned __int8*)(v61 + v14 + 1));
      goto LABEL_91;
    case 8:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      if (*(_BYTE*)(*(_QWORD*)(v6 + 24) + v14) != 0) {
        result = game_map_BonusExpList_Deserialize(*GameData_212ce90[0] + 296,
                                                   v6 + 16);
      }
      else {
        *(_DWORD*)(v6 + 36) = v14 + 3;
      }
      goto LABEL_91;
    case 9:
      v46 = *(_QWORD*)(v6 + 24);
      v47 = v14 + 2LL;
      v48 = v14 + 3LL;
      *(_DWORD*)(v6 + 36) = v47;
      v49 = *(unsigned __int8*)(v46 + v14 + 1);
      *(_DWORD*)(v6 + 36) = v48;
      v50 = *(unsigned __int8*)(v46 + v47);
      v51 = v14 + 4LL;
      *(_DWORD*)(v6 + 36) = v51;
      v52 = *(unsigned __int8*)(v46 + v48);
      *(_DWORD*)(v6 + 36) = v14 + 5;
      if (game_GameModeData_instance_ != 0) {
        v53 = ((v49 | (v50 << 8) | (v52 << 16)) & 0xFFFFFF |
               (*(unsigned __int8*)(v46 + v51) << 24)) &
              ~(*(char*)(v46 + v51) >> 7);
        if (v53 >= 9999999) {
          v53 = 9999999;
        }
        *(_DWORD*)(game_GameModeData_instance_ + 72) = v53;
      }
      goto LABEL_91;
    case 0xA:
      result = RecordSerializer_123d170(v6 + 16);
      goto LABEL_91;
    case 0xB:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      v39 = (_QWORD*)*GameData_212ce98[0];
      memcpy(*(_QWORD*)(*GameData_212ce98[0] + 32) + 8LL,
             *(_QWORD*)(*GameData_212ce98[0] + 56) + 8LL, 2048);
      memcpy(v39[5] + 8LL, v39[8] + 8LL, 2048);
      v41 = (__int64 (**)(_QWORD*))v39[1];
      v40 = v39 + 1;
      v42 = (*v41)(v40);
      v43 = game_HashString32(v42);
      v44 = *(_QWORD*)(v6 + 16);
      LODWORD(v115) = v43;
      if (((*(__int64 (**)(__int64, __int64*))(v44 + 16))(v6 + 16, &v115) &
           1) != 0) {
        v45 = *(int*)(v6 + 36);
        *(_DWORD*)(v6 + 36) = v45 + 1;
        (*(void (**)(_QWORD*, __int64, _QWORD))(*v40 + 24LL))(
            v40, v6 + 16, *(unsigned __int8*)(*(_QWORD*)(v6 + 24) + v45));
      }
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)(v6 + 16) + 24LL))(
          v6 + 16, 0);
      goto LABEL_91;
    case 0xC:
      result = game_map_history_123d310_alt1(v6 + 16);
      goto LABEL_91;
    case 0xD:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      result = GameRoutine_12a6820(v6 + 16);
      goto LABEL_91;
    case 0xE:
      v35 = *(_QWORD*)(v6 + 24) + v14;
      v36 = *GameData_212ce90[0];
      *(_DWORD*)(v6 + 36) = v14 + 2;
      v37 = *(_DWORD*)(v36 + 20);
      if (*(_BYTE*)(v35 + 1) != 0) {
        v38 = 2048;
      }
      else {
        v38 = 0;
      }
      *(_DWORD*)(v36 + 20) = v37 & 0xFFFFF7FF | v38;
      game_VariableManager_SetFlag(&game_map_kVariableSituation1000,
                                   (v37 & 0x1000) != 0);
      game_VariableManager_SetFlag(&game_map_kVariableSituation800,
                                   (*(_DWORD*)(v36 + 20) & 0x800) != 0);
      game_VariableManager_SetFlag(&game_map_kVariableSituation200,
                                   (*(_DWORD*)(v36 + 20) & 0x200) != 0);
      result = Situation_763690(v36);
      goto LABEL_91;
    case 0xF:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      result = GameRoutine_960b80(v6 + 16);
      goto LABEL_91;
    case 0x10:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      result = *game_sound_g_game_sound_ptr[0];
      if (*game_sound_g_game_sound_ptr[0] != 0) {
        result = GameManager_a35190(result, v6 + 16);
      }
      goto LABEL_91;
    case 0x11:
      *(_DWORD*)(v6 + 36) = v14 + 1;
      ProcMapSeq_1225d20(*GameData_2130668[0], v6 + 16);
      result = GameRoutine_1272e40(*GameData_2130670[0], v6 + 16);
      goto LABEL_91;
    case 0x12:
      v88 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
      result = GameRoutine_1235540(v88, v6 + 16);
      v89 = *(_QWORD*)(v6 + 152);
      *(_QWORD*)(v6 + 152) = v88;
      if (v89 != 0) {
        goto LABEL_67;
      }
      goto LABEL_91;
    case 0x13:
      v90 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
      result = GameRoutine_1235540(v90, v6 + 16);
      v89 = *(_QWORD*)(v6 + 160);
      *(_QWORD*)(v6 + 160) = v90;
      if (v89 != 0) {
      LABEL_67:
        GameRoutine_65d6c0(v89);
        v91 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v91 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v91);
      }
      goto LABEL_91;
    case 0x14:
      v80 = *(_QWORD*)(v6 + 24);
      v81 = v14 + 2LL;
      v82 = GameData_212ce90[0];
      v83 = v14 + 3LL;
      *(_DWORD*)(v6 + 36) = v81;
      v84 = v14 + 4LL;
      v85 = *(unsigned __int8*)(v80 + v14 + 1);
      *(_DWORD*)(v6 + 36) = v83;
      v86 = *v82;
      LODWORD(v81) = *(unsigned __int8*)(v80 + v81);
      *(_DWORD*)(v6 + 36) = v84;
      LODWORD(v81) =
          v85 | ((_DWORD)v81 << 8) | (*(unsigned __int8*)(v80 + v83) << 16);
      *(_DWORD*)(v6 + 36) = v14 + 5;
      v87 = v81 | (*(unsigned __int8*)(v80 + v84) << 24);
      if (*(_DWORD*)(v86 + 320) != v87) {
        *(_DWORD*)(v86 + 320) = v87;
      }
      goto LABEL_91;
    default:
      goto LABEL_91;
    }
  }
  return result;
}

__int64 game_map_history_122f3c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int16 v9;
  unsigned int v10;
  int v11;
  _QWORD v12[2];

  v1 = GameData_22400f8;
  if (GameData_22400f8 != 0) {
    v2 = result;
    v3 = game_g_shared_system_skills_ptr;
    LODWORD(v12[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN**)0x8LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
    if ((game_HasSkill(result + 1744, v12) & 1) != 0 ||
        ((v4 = *(_QWORD*)(v2 + 440)) == 0 ? (v5 = 9)
                                          : (v5 = *(_BYTE*)(v4 + 16)),
         ((1 << v5) & 0xF1) == 0)) {
      v7 = 9;
    }
    else {
      v6 = *(_QWORD*)(v2 + 392);
      v12[0] = v2;
      v12[1] = v6;
      if ((unsigned __int8)GameSituation_906b70(
              game_GameModeData_instance_ + 136, v12) == 2) {
        v7 = 4;
      }
      else {
        v7 = 5;
      }
    }
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v8 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    if (*(_QWORD*)(v2 + 392) == v8 || (*(_BYTE*)(v2 + 418) & 8) != 0) {
      LOBYTE(v11) = 0;
    }
    else {
      v9 = *(_DWORD*)((char*)((_UNKNOWN*)0x4LL) + v3);
      v10 = v7;
      LODWORD(v12[0]) = v9 & 0xFFF;
      v11 = game_HasSkill(v2 + 1744, v12) ^ 1;
      v7 = v10;
    }
    return GameRoutine_1226ec0(v1, v2, v7, v11 & 1);
  }
  return result;
}

bool game_map_history_1234fe0(unsigned int** a1, unsigned int** a2)
{
  __int64 v2;
  unsigned int* v3;
  unsigned int* v4;
  unsigned int* v5;
  unsigned int* v6;
  unsigned int* v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int* v10;
  unsigned int** v11;
  unsigned int* v12;
  unsigned int* v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int* v16;
  unsigned int* v17;
  unsigned int* v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int* v21;
  unsigned int* v22;
  unsigned int** v23;
  __int64 v24;
  int v25;
  unsigned int** v26;
  unsigned int* v27;
  unsigned int* v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  unsigned int* v32;
  unsigned int* v33;
  unsigned int* v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *v6;
      v9 = *v7;
      if (*v6 < **a1) {
        if (v9 >= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if (*v22 < *v5) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if (*v21 < **a1) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      GameRoutine_1234e60(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *v16;
    v20 = *v18;
    if (*v16 >= **a1) {
      if (v20 < v19) {
        a1[1] = v18;
        a1[2] = v16;
        if (*v18 < *v17) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if (*v18 < *v17) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if (*v32 >= *v16) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if (*v21 >= *v33) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if (*v3 < **a1) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v10 = a1[2];
  v12 = *a1;
  v13 = a1[1];
  v14 = *v13;
  v15 = *v10;
  if (*v13 >= **a1) {
    if (v15 < v14) {
      a1[1] = v10;
      a1[2] = v13;
      if (*v10 < *v12) {
        *a1 = v10;
        a1[1] = v12;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v13;
      a1[1] = v12;
      if (*v10 >= *v12) {
        goto LABEL_32;
      }
      a1[1] = v10;
    }
    else {
      *a1 = v10;
    }
    a1[2] = v12;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v11;
    if (**v23 < *v28) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(unsigned int**)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((unsigned int**)v31 - 2);
      } while (*v27 < *v28);
      v26 = (unsigned int**)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v11 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 game_map_history_123d310(__int64 result)
{
  __int64 v1;
  __int64* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64* v12;

  v1 = *(int*)(result + 20);
  v2 = GameData_212ce90[0];
  v3 = v1 + 2;
  v4 = *(_QWORD*)(result + 8) + v1;
  *(_DWORD*)(result + 20) = v3;
  *(_BYTE*)(*v2 + 28) = *(_BYTE*)(v4 + 1);
  v5 = *(int*)(result + 20);
  v6 = *(_QWORD*)(result + 8);
  v7 = game_GameModeData_instance_;
  *(_DWORD*)(result + 20) = v5 + 1;
  v8 = *(unsigned __int8*)(v6 + v5);
  *(_DWORD*)(result + 20) = v5 + 2;
  v9 = *(_QWORD*)(v7 + 160);
  v10 = *(unsigned __int8*)(v6 + v5 + 1);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dba8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(GameData_212dba8);
    if ((_DWORD)result != 0) {
      v12 = GameData_212dba0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212dba0) =
          &GameData_1abbc28;
      *v12 = game_HashString(&GameData_1abbc28);
      result = __cxa_guard_release(GameData_212dba8);
    }
  }
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), GameData_212dba0);
    if (result != 0) {
      v11 = *(_DWORD*)(result + 32);
    }
    else {
      v11 = 0;
    }
  }
  if (v11 >= (v8 | (v10 << 8))) {
    v11 = v8 | (v10 << 8);
  }
  *(_DWORD*)(v9 + 104) = v11;
  return result;
}

#pragma GCC visibility pop
