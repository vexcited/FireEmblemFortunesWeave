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
__int64
game_map_anonymous_73e2a0_alt1(__int64 result, _QWORD* a2, unsigned __int16 a3,
                               int a4, int a5,
                               __int64 a6) __asm__("game_map_anonymous_73e2a0");
__int64 game_map_anonymous_73fba0(int* a1, char a2);
__int64 game_map_anonymous_76e470(__int64 result);
void game_map_anonymous_76ea20(__int64 a1);
__int64 game_map_anonymous_76fa20(__int64 a1);
__int64 game_map_anonymous_770a30(__int64 a1);
__int64 game_map_anonymous_7b1e60(__int64 result);
__int64 game_map_anonymous_7b1f40_alt1(__int64 result) __asm__(
    "game_map_anonymous_7b1f40");
void game_map_anonymous_7b2f00(__int64 a1);
__int64
game_map_anonymous_7b3130_alt1(__int64 a1) __asm__("game_map_anonymous_7b3130");
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
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               _DWORD*) __asm__("game_UnitPool_Find_6ead60");
__int64*
GameRoutine_7fb7c0_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_7fb7c0");
__int64 BattleInfo_7905d0_alt1(__int64, __int64,
                               int) __asm__("BattleInfo_7905d0");
__int64 BattleInfo_790a40_alt1(__int64, char,
                               char) __asm__("BattleInfo_790a40");
__int64 Cursor_730ff0_alt2(__int64, float*) __asm__("Cursor_730ff0");
__int64 GameHr_73f640(__int64, unsigned int, unsigned int, unsigned int, char);
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_14a1520_alt1(__int64*, char) __asm__("GameRoutine_14a1520");
__int64 GameRoutine_17cece0_alt1(__int64, __int64, char, char,
                                 __int64) __asm__("GameRoutine_17cece0");
__int64 GameRoutine_6c47b0_alt1(__int64, _BYTE*, char,
                                char) __asm__("GameRoutine_6c47b0");
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_73a560_alt1(__int64*) __asm__("GameRoutine_73a560");
__int64 GameRoutine_73a7a0_alt1(__int64 result) __asm__("GameRoutine_73a7a0");
__int64 GameRoutine_747a00_alt1(__int64, __int64, __int64, __int64,
                                char) __asm__("GameRoutine_747a00");
__int64 GameRoutine_74f280_alt1(__int64 result,
                                int) __asm__("GameRoutine_74f280");
__int64 GameRoutine_7992e0_alt1(__int64) __asm__("GameRoutine_7992e0");
__int64 IDeploy_7480e0_alt1(__int64, int, int, int*) __asm__("IDeploy_7480e0");
__int64 IRoute_750a00_alt1(__int64, unsigned int,
                           unsigned int) __asm__("IRoute_750a00");
__int64 MapUtil_756d50_alt1(int, int, __int64) __asm__("MapUtil_756d50");
__int64 Situation_7646c0_alt1() __asm__("Situation_7646c0");
__int64 UnitActor_81ab40_alt1(__int64, float,
                              float) __asm__("UnitActor_81ab40");
__int64 game_14a3920(__int64 result);
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_map_799aa0_alt1(__int64 result,
                             __int64) __asm__("game_map_799aa0");
__int64
game_map_anonymous_73fba0_alt2(__int64,
                               char) __asm__("game_map_anonymous_73fba0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 strstr_alt1(const char*, const char*) __asm__("strstr");
__n128 BattleArea_8b9d00_alt1(__int64) __asm__("BattleArea_8b9d00");
bool MapUtil_7545a0_alt1(unsigned int*, unsigned int*, unsigned int, __int64,
                         unsigned int, unsigned int,
                         __int64) __asm__("MapUtil_7545a0");
bool ProcMapSeqBattle_7b6760_alt1(__int64) __asm__("ProcMapSeqBattle_7b6760");
bool game_HasSkill_alt2(_QWORD*, _DWORD*) __asm__("game_HasSkill");
extern char GameData_1aa85d1_alt1[] __asm__("GameData_1aa85d1");
float Unit_6c7fa0_alt2(__int64, _OWORD*) __asm__("Unit_6c7fa0");
float math_Vec3_Angle_alt1(float32x4_t*,
                           float32x4_t*) __asm__("math_Vec3_Angle");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
long double UnitActor_81ba20_alt1(__int64) __asm__("UnitActor_81ba20");
void CharacterBuilder_1084780_alt1(__int64) __asm__("CharacterBuilder_1084780");
void Cursor_730ff0_alt1(__int64, __int128*) __asm__("Cursor_730ff0");
void GameHr_1226ec0(__int64, __int64, unsigned __int8, char);
void GameHr_73f960(_DWORD*, unsigned int, unsigned int, unsigned int);
void GameRoutine_658d60_alt2(__int64*) __asm__("GameRoutine_658d60");
void GameRoutine_74cd60_alt1(__int64*) __asm__("GameRoutine_74cd60");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_map_790ba0_alt1(__int64) __asm__("game_map_790ba0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_anonymous_73e2a0(__int64* a1, __int64* a2, unsigned __int16 a3,
                               int a4, int a5, __int64 a6);
void game_map_anonymous_7b1f40(__int64 a1);
__int64* game_map_anonymous_7b3130(__int64 a1);

void game_map_anonymous_73e2a0(__int64* a1, __int64* a2, unsigned __int16 a3,
                               int a4, int a5, __int64 a6)
{
  unsigned __int16 v6;
  unsigned int v8;
  int v9;
  __int64* v10;
  __int64* v11;
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
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  bool v28;
  _BYTE* v29;
  int v30;
  _BYTE* v32;
  __int64 v33;
  unsigned int v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  unsigned int v71;
  __int64 v72;
  int v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  char v92;
  __int64 v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  char v103;
  bool v104;
  _QWORD* v105;
  int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  char v110;
  bool v111;
  bool v112;
  _QWORD* v113;
  __int64 v114;
  unsigned int v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  _QWORD* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  char v127;
  bool v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  char v133;
  bool v134;
  bool v135;
  __int64 v136;
  __int64 v137;
  char v138;
  int v139;
  unsigned int v140;
  int v141;
  int v142;
  unsigned int v143;
  unsigned int v144;
  int v145;
  int v146;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  char v152;
  __int64 v153;
  __int64 v154;
  __int64* v155;
  int v156;
  unsigned int v157;
  unsigned int v158;
  int v159;
  __int64 v160;
  int v161;
  int v162;
  int v163;
  unsigned int v164;
  float v165;
  float v166;
  float v167;
  __int128 v168;
  __int128 v169;
  __int64 v171;
  int v172;
  int v173;
  int v174;
  float v175;
  int v176;
  int v177;
  int v178;
  char* v179;
  char* v180;
  __int64 v181;
  __int128* v182;
  int v183;
  __int64 v184;
  __int64 v185;
  unsigned __int16 v186;
  __int64 v187;
  int v188;
  __int64 v189;
  __int64* v191;
  unsigned int v193;
  __int64* v194;
  unsigned int v195;
  __int64 v196;
  __int64 v197;
  float v198;
  struct {
    __int64 v199[2];
    int v200;
    char gap140_[4];
    _QWORD* v201;
  } v199_;
  __int128 v202;
  _QWORD v203[17];
  int v204;
  char v205;
  int v206;
  __int128 v207;
  __int64 v208;
  int v209;
  char v210;
  __int64 v211;
  unsigned __int16 v212;
  struct {
    __int128 v213;
    __int64 v214;
  } v213_;
  struct {
    __int128* v215;
    __int128* v216;
    __int64 v217;
    int v218;
  } v215_;
  int v219;
  struct {
    unsigned __int8 v220[20];
    char gap448_[8];
    int v221;
    int v222;
  } v220_;

  if (a2 != a1) {
    v6 = a3;
    v8 = a5;
    v9 = a4;
    v10 = a2;
    v11 = a1;
    v12 = a4 <= 0 || a5 <= 0;
    v220_.v222 = a3;
    v13 = !v12;
    v220_.v221 = v13;
    while (1) {
      v14 = *v11;
      v199_.v200 = 0;
      v211 = 0;
      v212 = v6;
      v209 = 0;
      v210 = 0;
      v204 = 0;
      v203[0] = game_map_TRoute_vtable;
      v199_.v201 = nullptr;
      v202 = (__typeof__(v202)){0};
      v206 = 1;
      v199_.v199[0] = v14;
      v199_.v199[1] = 0;
      v205 = 9;
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
      v25 = *(char*)(v14 + 52);
      v26 = *(unsigned __int8*)(v14 + 53);
      v27 = (char)v26;
      v28 = *(_BYTE*)(v14 + 52) == 0 || v26 == 0;
      if (!v28) {
        v29 = (_BYTE*)*GameData_212ce98[0];
        if (*GameData_212ce98[0] != 0 &&
            ((unsigned __int8)v29[18] <=
                 (unsigned int)(unsigned __int8)(v25 - v29[16]) ||
             (unsigned __int8)v29[19] <=
                 (unsigned int)(unsigned __int8)(v27 - v29[17]))) {
          goto LABEL_9;
        }
      }
      v30 = *(unsigned __int8*)(v14 + 55);
      if (*(_BYTE*)(v14 + 54) != 0 && v30 != 0) {
        v32 = (_BYTE*)*GameData_212ce98[0];
        if (*GameData_212ce98[0] != 0 &&
            ((unsigned __int8)v32[26] <=
                 (unsigned int)(unsigned __int8)(*(_BYTE*)(v14 + 54) -
                                                 v32[24]) ||
             (unsigned __int8)v32[27] <=
                 (unsigned int)(unsigned __int8)(v30 - v32[25]))) {
          goto LABEL_9;
        }
      }
      v17 = v220_.v222;
      if ((v220_.v222 & 8) != 0) {
        break;
      }
    LABEL_20:
      v18 = *(_BYTE*)(v14 + 48);
      v209 = 0;
      v210 = 0;
      v204 = 0;
      v206 = 1;
      v205 = v18;
      if (v220_.v221 != 0) {
        *(_QWORD*)&v202 = __PAIR64__(v8, v9);
        v19 = v9;
        v20 = v8;
      }
      else {
        v21 = *(char*)(v14 + 53);
        LODWORD(v202) = *(char*)(v14 + 52);
        DWORD1(v202) = v21;
        v19 = *(char*)(v14 + 54);
        v20 = *(char*)(v14 + 55);
      }
      *((_QWORD*)&v202 + 1) = __PAIR64__(v20, v19);
      v22 = GameRoutine_73a560_alt1(v199_.v199);
      if (v22 == 0) {
        if ((v17 & 0x8000) != 0) {
          goto LABEL_9;
        }
        goto LABEL_131;
      }
      v23 = *(unsigned __int8*)(v14 + 48);
      if ((unsigned int)(v23 - 1) >= 2) {
        if (v23 == 9) {
          v24 = *(_QWORD*)(v22 + 24);
        }
        else {
          v24 = *(_QWORD*)(v22 + 24) + 96LL;
        }
      }
      else {
        v24 = *(_QWORD*)(v22 + 24) + 192LL;
      }
      v34 = *(unsigned __int8*)(v22 + 417);
      v197 = v22;
      if ((v17 & 0x8000) != 0) {
        GameHr_73f960(&v213_.v213, v202, DWORD1(v202), v34);
        if ((_DWORD)v213_.v213 != 0) {
          if ((v213_.v213 & 1) != 0 && v23 != 3 && v23 != 0) {
            goto LABEL_9;
          }
          if ((v213_.v213 & 2) != 0) {
            if (v23 != 1) {
              goto LABEL_9;
            }
          }
          else if (v23 == 2) {
            goto LABEL_107;
          }
          if ((v213_.v213 & 4) != 0) {
            goto LABEL_9;
          }
        LABEL_107:
          if ((v213_.v213 & 8) != 0 && v23 != 3 && v23 != 0) {
            goto LABEL_9;
          }
        }
        v77 = *(unsigned __int8*)(v14 + 48);
        GameHr_73f960(&v213_.v213, DWORD2(v202), DWORD3(v202), v34);
        if ((_DWORD)v213_.v213 != 0) {
          if ((v213_.v213 & 1) != 0 && v77 != 3 && v77 != 0) {
            goto LABEL_9;
          }
          if ((v213_.v213 & 2) != 0) {
            if (v77 != 1) {
              goto LABEL_9;
            }
          }
          else if (v77 == 2) {
            goto LABEL_166;
          }
          if ((v213_.v213 & 4) != 0) {
            goto LABEL_9;
          }
        LABEL_166:
          if ((v213_.v213 & 8) != 0 && v77 != 3 && v77 != 0) {
            goto LABEL_9;
          }
        }
        if ((GameHr_73f640(v197, DWORD2(v202), DWORD3(v202), v34, 0) & 1) ==
            0) {
          goto LABEL_9;
        }
        LODWORD(v213_.v213) = *(_DWORD*)((_BYTE*)((__int128*)0x10LL) +
                                         game_g_shared_system_skills_ptr + 8) &
                              0xFFF;
        if (!game_HasSkill_alt2((_QWORD*)v24, &v213_.v213)) {
          v114 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
          v115 = DWORD2(v202) + 32 * DWORD3(v202);
          if (v115 >= 0x400) {
            v115 = 0;
          }
          v116 = *(__int16*)(v114 + 2LL * v115 + 12392);
          if (v116 < 0 || (v117 = *(_QWORD*)(v114 + 8)) == 0 ||
              (v118 = v117 + 144LL * (unsigned int)v116,
               ((*(__int64 (**)(__int64))(*(_QWORD*)v118 + 16LL))(v118) & 1) ==
                   0) ||
              (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v118 + 168LL))(
                  v118) == 9 ||
              (v119 = (*(__int64 (**)(__int64))(*(_QWORD*)v118 + 224LL))(
                   v118)) == 0) {
            v119 = **(_QWORD**)(*GameData_212c930 + 64);
          }
          if (*(_BYTE*)(v119 + 57) == 14) {
            goto LABEL_9;
          }
        }
      }
      if ((GameHr_73f640(v197, v202, DWORD1(v202), v34, v34 > 1) & 1) != 0) {
        if ((_QWORD)v202 == *((_QWORD*)&v202 + 1)) {
          GameHr_73f960(&v213_.v213, v202, DWORD1(v202), v34);
          if ((_DWORD)v213_.v213 == 0) {
            goto LABEL_131;
          }
        }
        v35 = (__int64*)*GameData_212ce88[0];
        if (*GameData_212ce88[0] != 0) {
          v36 = v35[1344];
          v37 = v35[1343];
          v38 = (__int64*)*GameData_212ce88[0];
          v191 = v11;
          v39 = ((v36 - v37) << 6) - 1;
          if (v36 == v37) {
            v39 = 0;
          }
          v40 = v35[1347] + v35[1346];
          if (v39 == v40) {
            GameRoutine_74cd60_alt1(v35 + 1342);
            v37 = v38[1343];
            v40 = v38[1347] + v38[1346];
          }
          v41 = (__int64)(v38 + 337);
          v194 = v38;
          *(_QWORD*)(*(_QWORD*)(v37 + 8 * (v40 >> 9)) + 8 * (v40 & 0x1FF)) =
              v38[1];
          v38[1] = (__int64)(v38 + 337);
          v215_.v218 = 0;
          LODWORD(v213_.v213) = 0;
          DWORD3(v213_.v213) = v34;
          LODWORD(v213_.v214) = 0;
          v215_.v215 = nullptr;
          v215_.v216 = nullptr;
          v215_.v217 = 0;
          v43 = v202;
          v42 = DWORD1(v202);
          ++v38[1347];
          if ((__int16)v17 > -1) {
            v44 = 1;
          }
          else {
            v44 = 3;
          }
          BYTE4(v213_.v213) = *(_BYTE*)(v14 + 48);
          BYTE5(v213_.v213) = *(_BYTE*)(v197 + 48);
          DWORD2(v213_.v213) = 100;
          if (&v215_.v215 != (__int128**)v24) {
            GameRoutine_7fb7c0_alt1(
                (__int64*)&v215_.v215, *(_QWORD*)v24, *(_QWORD*)(v24 + 8),
                (__int64)(*(_QWORD*)(v24 + 8) - *(_QWORD*)v24) >> 2);
          }
          v45 = *(_DWORD*)(v24 + 24);
          LODWORD(v213_.v213) = v44;
          v215_.v218 = v45;
          IDeploy_7480e0_alt1((__int64)v194, v43, v42, (int*)&v213_.v213);
          if (v215_.v215 != nullptr) {
            v215_.v216 = v215_.v215;
            v46 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v46 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v46,
                (__int64)v215_.v215);
          }
          v10 = a2;
          if ((GameRoutine_747a00_alt1(v194[1], DWORD2(v202), DWORD3(v202), 0,
                                       0) &
               1) == 0) {
            v47 = v194[1344];
            v48 = v194[1343];
            v49 = ((v47 - v48) << 6) - 1;
            if (v47 == v48) {
              v49 = 0;
            }
            v50 = v194[1347] + v194[1346];
            if (v49 == v50) {
              GameRoutine_74cd60_alt1(v194 + 1342);
              v48 = v194[1343];
              v50 = v194[1347] + v194[1346];
            }
            v186 = v17;
            *(_QWORD*)(*(_QWORD*)(v48 + 8 * (v50 >> 9)) + 8 * (v50 & 0x1FF)) =
                v194[1];
            v194[1] = (__int64)(v194 + 672);
            v215_.v218 = 0;
            LODWORD(v213_.v213) = 0;
            DWORD3(v213_.v213) = v34;
            LODWORD(v213_.v214) = 0;
            v215_.v215 = nullptr;
            v215_.v216 = nullptr;
            v215_.v217 = 0;
            v51 = DWORD2(v202);
            v52 = DWORD3(v202);
            ++v194[1347];
            BYTE4(v213_.v213) = *(_BYTE*)(v14 + 48);
            BYTE5(v213_.v213) = *(_BYTE*)(v197 + 48);
            DWORD2(v213_.v213) = 100;
            if (&v215_.v215 != (__int128**)v24) {
              GameRoutine_7fb7c0_alt1(
                  (__int64*)&v215_.v215, *(_QWORD*)v24, *(_QWORD*)(v24 + 8),
                  (__int64)(*(_QWORD*)(v24 + 8) - *(_QWORD*)v24) >> 2);
            }
            v187 = v14;
            v188 = v9;
            v189 = a6;
            v215_.v218 = *(_DWORD*)(v24 + 24);
            IDeploy_7480e0_alt1((__int64)v194, v51, v52, (int*)&v213_.v213);
            if (v215_.v215 != nullptr) {
              v215_.v216 = v215_.v215;
              v53 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v53 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                  (__int64)v215_.v215);
            }
            v54 = *GameData_212ce98[0];
            v55 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
            v195 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
            if (v55 <= v195) {
              v56 = *(unsigned __int8*)(v54 + 28);
              v57 = *(unsigned __int8*)(v54 + 30);
              v193 = v56;
              if (v56 <= v57) {
                v139 = 32 * v55;
                v140 = v57 + 1;
                v141 = 100;
                v142 = 100;
                do {
                  v143 = v193;
                  do {
                    if ((GameRoutine_747a00_alt1((__int64)(v194 + 672), v143,
                                                 v55, 0, 0) &
                         1) != 0 &&
                        (GameRoutine_747a00_alt1(v41, v143, v55, 0, 0) & 1) !=
                            0) {
                      v144 = v139 + v143 >= 0x400 ? 0 : v139 + v143;
                      v145 = *((unsigned __int8*)v194 + v144 + 5440);
                      if (v142 >= v145) {
                        v146 = *((unsigned __int8*)v194 + v144 + 2760);
                        if (v142 != v145 || v141 >= v146) {
                          *((_QWORD*)&v202 + 1) = __PAIR64__(v55, v143);
                          v142 = v145;
                          v141 = v146;
                        }
                      }
                    }
                    ++v143;
                  } while (v140 != v143);
                  v139 += 32;
                  v28 = v55++ == v195;
                } while (!v28);
              }
            }
            a6 = v189;
            v9 = v188;
            v10 = a2;
            v14 = v187;
            v17 = v186;
            v58 = v194[1347];
            v59 = v194[1346];
            v60 = v194[1343];
            v61 = v194[1344];
            v28 = v61 == v60;
            v62 = v58 - 1 + v59;
            v63 = v62 >> 9;
            v64 = v62 & 0x1FF;
            v65 = ((v61 - v60) << 6) - 1;
            v66 = *(_QWORD*)(v60 + 8 * v63);
            if (v28) {
              v65 = 0;
            }
            v67 = *(_QWORD*)(v66 + 8 * v64);
            v194[1347] = v58 - 1;
            v194[1] = v67;
            if ((unsigned __int64)(v65 - (v58 + v59) + 1) >= 0x400) {
              v68 = *(_QWORD*)(v61 - 8);
              if (v68 != 0) {
                v69 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v69 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v68);
                v61 = v194[1344];
              }
              v194[1344] = v61 - 8;
            }
          }
          v210 = 0;
          v204 = 0;
          v209 = 0;
          *(_QWORD*)&v207 = v202;
          v208 = v202;
          *((_QWORD*)&v207 + 1) = v202;
          IRoute_750a00_alt1((__int64)v203, DWORD2(v202), DWORD3(v202));
          if (v204 < 1) {
            v73 = 0;
          }
          else {
            v70 = DWORD1(v207);
            v71 = v207;
            v72 = 0;
            v73 = 0;
            do {
              v75 = *((unsigned __int8*)&v203[1] + v72);
              v76 = v211;
              if (v211 == 0) {
                v76 = *GameData_212ce88[0];
                v211 = *GameData_212ce88[0];
              }
              v74 = (char*)GameData_212cf50 + v75;
              v71 += *v74;
              v70 += v74[256];
              ++v72;
              if ((GameRoutine_747a00_alt1(*(_QWORD*)(v76 + 8), v71, v70, 0,
                                           0) &
                   1) != 0) {
                v73 = v72;
              }
            } while (v72 < v204);
          }
          GameRoutine_74f280_alt1((__int64)v203, v73);
          v8 = a5;
          v11 = v191;
          v78 = v194[1347];
          v79 = v194[1346];
          v80 = v194[1343];
          v81 = v194[1344];
          v28 = v81 == v80;
          v82 = v78 - 1 + v79;
          v83 = v82 >> 9;
          v84 = v82 & 0x1FF;
          v85 = ((v81 - v80) << 6) - 1;
          v86 = *(_QWORD*)(v80 + 8 * v83);
          if (v28) {
            v85 = 0;
          }
          v87 = *(_QWORD*)(v86 + 8 * v84);
          v194[1347] = v78 - 1;
          v194[1] = v87;
          if ((unsigned __int64)(v85 - (v78 + v79) + 1) >= 0x400) {
            v88 = *(_QWORD*)(v81 - 8);
            if (v88 != 0) {
              v89 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v89 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v89, v88);
              v81 = v194[1344];
            }
            v194[1344] = v81 - 8;
          }
        }
        if (v204 >= 1) {
          v202 = v207;
          goto LABEL_131;
        }
      }
      if ((v17 & 0x8000) != 0 ||
          !MapUtil_7545a0_alt1((unsigned int*)&v202 + 2,
                               (unsigned int*)&v202 + 3,
                               *(unsigned __int8*)(v14 + 48), v197,
                               DWORD2(v202), DWORD3(v202), 0)) {
        goto LABEL_9;
      }
      *(_QWORD*)&v202 = *((_QWORD*)&v202 + 1);
    LABEL_131:
      v90 = v199_.v199[0];
      v91 = v11;
      v92 = v212;
      if (*(_BYTE*)(v199_.v199[0] + 48) != 0) {
        v93 = game_map_anonymous_73fba0_alt2((__int64)v199_.v199, v212 & 1);
        v199_.v201 = (_QWORD*)v93;
        v11 = v91;
        if (v93 != 0) {
          goto LABEL_290;
        }
        goto LABEL_9;
      }
      v94 = *(unsigned __int8*)(v199_.v199[0] + 58);
      if (v94 == 2) {
        v95 = 640;
      }
      else {
        v95 = 0;
      }
      v96 = *(_QWORD*)(v199_.v199[0] + 40);
      if (v96 == 0 && v94 == 2) {
        v96 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v96 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
      }
      if ((*(_WORD*)(v199_.v199[0] + 50) & 0x10) == 0) {
        if (v94 != 2) {
          v11 = v91;
          if (*(_BYTE*)(v199_.v199[0] + 58) != 0) {
            v97 = GameRoutine_73a7a0_alt1(v199_.v199[0]);
            v199_.v201 = (_QWORD*)v97;
            if (v97 == 0) {
              goto LABEL_9;
            }
            v98 = v97;
            v99 = *(unsigned __int8*)(v199_.v199[0] + 48);
            v100 = *GameData_21309c8[0];
            if (*GameData_21309c8[0] != 0) {
              v101 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v101 = *(_QWORD*)(game_GameModeData_instance_ + 96);
              }
              if (*(_QWORD*)(v98 + 392) == v101 ||
                  (*(_BYTE*)(v98 + 418) & 8) != 0) {
                v104 = false;
              }
              else {
                v102 = *GameData_21309c8[0];
                v103 = *(_BYTE*)(v199_.v199[0] + 48);
                LODWORD(v213_.v213) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
                v104 = !game_HasSkill_alt2((_QWORD*)(v98 + 1744), &v213_.v213);
                LOBYTE(v99) = v103;
                v11 = v91;
                v100 = v102;
              }
              GameHr_1226ec0(v100, v98, v99, v104);
              v99 = *(unsigned __int8*)(v199_.v199[0] + 48);
            }
            v148 = *(_QWORD*)(v98 + 392);
            v220_.v220[0] = v99;
            v149 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v149 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            if (v148 != v149 && (*(_BYTE*)(v98 + 418) & 8) == 0) {
            LABEL_246:
              LODWORD(v213_.v213) =
                  *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF;
              if (game_HasSkill_alt2((_QWORD*)(v98 + 1744), &v213_.v213) &&
                  v220_.v220[0] != 9) {
              LABEL_248:
                v152 = 0;
                goto LABEL_251;
              }
            LABEL_250:
              v152 = 1;
            LABEL_251:
              GameRoutine_6c47b0_alt1(v98, v220_.v220, v152, 0);
              v95 = 0;
            LABEL_252:
              v153 = v199_.v199[0];
              *(_WORD*)(v98 + 584) = *(_WORD*)(v199_.v199[0] + 54);
              *(_BYTE*)(v98 + 1981) = *(_BYTE*)(v153 + 292);
              if (*GameData_212ce90[0] != 0) {
                v154 = *(_QWORD*)(v98 + 440);
                if (v154 != 0 && *(_BYTE*)(v154 + 16) == 0) {
                  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                  v155 = game_map_MapRandom_instance__ptr[0];
                  v156 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                    (unsigned __int64)((__int128*)0x10LL) + 8);
                  v157 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
                  v158 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL)) ^
                      (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((__int128*)0x10LL))
                       << 11);
                  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((__int128*)0x10LL)) =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 4);
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v155 + 4) =
                      v156;
                  v159 = (v158 >> 8) ^ (v157 >> 19) ^ v158 ^ v157;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v155 + 8) =
                      v157;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v155 + 12) =
                      v159;
                  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
                  *(_BYTE*)(v98 + 1980) = v159;
                  v11 = v91;
                }
              }
              v160 = *(_QWORD*)(v98 + 8);
              if (v160 != 0) {
                v161 = *(char*)(v160 + 584);
                if ((v161 & 0x80000000) == 0) {
                  v162 = *(char*)(v160 + 585);
                  if ((v162 & 0x80000000) == 0) {
                    v163 = *(_DWORD*)(v160 + 592);
                    v164 = v162 | 0x100;
                    v165 =
                        (float)(unsigned int)(v163 - 1) * 0x1.4000000000000p+1f;
                    v166 = (float)((float)((float)(v161 | 0x100u) *
                                           0x1.4000000000000p+2f) +
                                   0x1.4000000000000p+1f) +
                           -0x1.4000000000000p+10f;
                    if (v163 <= 0) {
                      v165 = 0x0.0p+0f;
                    }
                    v167 = v166 + v165;
                    *(_QWORD*)&v168 = COERCE_UNSIGNED_INT(v166 + v165);
                    v196 = COERCE_UNSIGNED_INT(
                        (float)((float)((float)((float)v164 *
                                                0x1.4000000000000p+2f) +
                                        0x1.4000000000000p+1f) +
                                -0x1.4000000000000p+10f) +
                        v165);
                    v198 = v167;
                    *((_QWORD*)&v168 + 1) = v196;
                    v213_.v213 = v168;
                    *(_QWORD*)&v169 =
                        __PAIR64__(COERCE_UNSIGNED_INT(
                                       Unit_6c7fa0_alt2(v160, &v213_.v213)),
                                   LODWORD(v198));
                    *((_QWORD*)&v169 + 1) = v196;
                    v213_.v213 = v169;
                    Cursor_734a80(v98 + 48, (__int64*)&v213_.v213);
                    UnitActor_81ba20_alt1(v98);
                  }
                }
                v171 = *(_QWORD*)(v98 + 264);
                if (v171 != 0) {
                  CharacterBuilder_1084780_alt1(v171);
                }
              }
              v172 = *(_DWORD*)(v98 + 416);
              if ((v172 & 0x10000000) == 0) {
                *(_DWORD*)(v98 + 416) = v172 | 0x10000000;
                game_6c51e0(v98);
                GameRoutine_6c6da0_alt1(v98);
                game_6c6ec0(v98);
                *(_DWORD*)(v98 + 416) &= ~0x10000000u;
              }
              v120 = (__int64)v199_.v201;
              if (v199_.v201 == nullptr) {
                goto LABEL_9;
              }
              goto LABEL_267;
            }
          }
          else {
            *(_QWORD*)&v213_.v213 = v96;
            *(_DWORD*)v220_.v220 = 80;
            v123 = game_UnitPool_Find_6ead60_alt1((__int64*)&v213_.v213,
                                                  v220_.v220);
            v199_.v201 = v123;
            if (v123 == nullptr) {
              goto LABEL_9;
            }
            v98 = (__int64)v123;
            v99 = *(unsigned __int8*)(v199_.v199[0] + 48);
            v124 = *GameData_21309c8[0];
            if (*GameData_21309c8[0] != 0) {
              v125 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v125 = *(_QWORD*)(game_GameModeData_instance_ + 96);
              }
              if (*(_QWORD*)(v98 + 392) == v125 ||
                  (*(_BYTE*)(v98 + 418) & 8) != 0) {
                v128 = false;
              }
              else {
                v126 = *GameData_21309c8[0];
                v127 = *(_BYTE*)(v199_.v199[0] + 48);
                LODWORD(v213_.v213) =
                    *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
                v128 = !game_HasSkill_alt2((_QWORD*)(v98 + 1744), &v213_.v213);
                LOBYTE(v99) = v127;
                v11 = v91;
                v124 = v126;
              }
              GameHr_1226ec0(v124, v98, v99, v128);
              v99 = *(unsigned __int8*)(v199_.v199[0] + 48);
            }
            v150 = *(_QWORD*)(v98 + 392);
            v220_.v220[0] = v99;
            v151 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v151 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            if (v150 != v151 && (*(_BYTE*)(v98 + 418) & 8) == 0) {
              goto LABEL_246;
            }
          }
          if (v99 != 9) {
            goto LABEL_248;
          }
          goto LABEL_250;
        }
        *(_QWORD*)&v213_.v213 = v96;
        *(_DWORD*)v220_.v220 = 80;
        v113 =
            game_UnitPool_Find_6ead60_alt1((__int64*)&v213_.v213, v220_.v220);
        v199_.v201 = v113;
        v11 = v91;
        if (v113 != nullptr) {
          v98 = (__int64)v113;
          v95 = 640;
        }
        else {
          LODWORD(v213_.v213) = 16;
          v129 = game_UnitPool_GetFirst_alt1((int*)&v213_.v213);
          v199_.v201 = (_QWORD*)v129;
          if (v129 == 0) {
            goto LABEL_9;
          }
          v98 = v129;
          v95 = 0;
        }
        v106 = *(unsigned __int8*)(v199_.v199[0] + 48);
        v130 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          v131 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v131 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          if (*(_QWORD*)(v98 + 392) == v131 ||
              (*(_BYTE*)(v98 + 418) & 8) != 0) {
            v135 = false;
          }
          else {
            v132 = *GameData_21309c8[0];
            v133 = *(_BYTE*)(v199_.v199[0] + 48);
            LODWORD(v213_.v213) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                             game_g_shared_system_skills_ptr) &
                                  0xFFF;
            v134 = game_HasSkill_alt2((_QWORD*)(v98 + 1744), &v213_.v213);
            LOBYTE(v106) = v133;
            v10 = a2;
            v135 = !v134;
            v130 = v132;
            v11 = v91;
          }
          GameHr_1226ec0(v130, v98, v106, v135);
          v106 = *(unsigned __int8*)(v199_.v199[0] + 48);
        }
        v136 = *(_QWORD*)(v98 + 392);
        v220_.v220[0] = v106;
        v137 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v137 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (v136 != v137 && (*(_BYTE*)(v98 + 418) & 8) == 0) {
        LABEL_212:
          LODWORD(v213_.v213) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                           game_g_shared_system_skills_ptr) &
                                0xFFF;
          if (game_HasSkill_alt2((_QWORD*)(v98 + 1744), &v213_.v213) &&
              v220_.v220[0] != 9) {
          LABEL_214:
            v138 = 0;
          LABEL_217:
            GameRoutine_6c47b0_alt1(v98, v220_.v220, v138, 0);
            goto LABEL_252;
          }
        LABEL_216:
          v138 = 1;
          goto LABEL_217;
        }
      LABEL_215:
        if (v106 != 9) {
          goto LABEL_214;
        }
        goto LABEL_216;
      }
      *(_QWORD*)&v213_.v213 = v96;
      *(_DWORD*)v220_.v220 = 80;
      v105 = game_UnitPool_Find_6ead60_alt1((__int64*)&v213_.v213, v220_.v220);
      v199_.v201 = v105;
      if (v105 != nullptr) {
        v98 = (__int64)v105;
        v106 = *(unsigned __int8*)(v199_.v199[0] + 48);
        v107 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          v11 = v91;
          v108 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v108 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          if (*(_QWORD*)(v98 + 392) == v108 ||
              (*(_BYTE*)(v98 + 418) & 8) != 0) {
            v112 = false;
          }
          else {
            v109 = *GameData_21309c8[0];
            v110 = *(_BYTE*)(v199_.v199[0] + 48);
            LODWORD(v213_.v213) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                             game_g_shared_system_skills_ptr) &
                                  0xFFF;
            v111 = game_HasSkill_alt2((_QWORD*)(v98 + 1744), &v213_.v213);
            LOBYTE(v106) = v110;
            v10 = a2;
            v112 = !v111;
            v107 = v109;
            v11 = v91;
          }
          GameHr_1226ec0(v107, v98, v106, v112);
          v106 = *(unsigned __int8*)(v199_.v199[0] + 48);
        }
        else {
          v11 = v91;
        }
        v121 = *(_QWORD*)(v98 + 392);
        v220_.v220[0] = v106;
        v122 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v122 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (v121 != v122 && (*(_BYTE*)(v98 + 418) & 8) == 0) {
          goto LABEL_212;
        }
        goto LABEL_215;
      }
      v120 = game_map_anonymous_73fba0_alt2((__int64)v199_.v199, v92 & 1);
      v199_.v201 = (_QWORD*)v120;
      v11 = v91;
      if (v120 == 0) {
        goto LABEL_9;
      }
    LABEL_267:
      *(_DWORD*)(v120 + 416) |= v95;
      v173 = *(unsigned __int8*)(v90 + 57);
      if (*(_BYTE*)(v90 + 48) != 0) {
        v174 = 4;
      }
      else {
        v174 = 1;
      }
      if (*(_BYTE*)(v90 + 57) == 0) {
        v173 = v174;
      }
      if (v173 > 5) {
        if (v173 > 8) {
          if (v173 == 9) {
            v175 = 0x1.0e00000000000p+7f;
            goto LABEL_289;
          }
          if (v173 == 12) {
            v175 = 0x1.6800000000000p+5f;
            goto LABEL_289;
          }
        }
        else {
          if (v173 == 6) {
            v175 = 0x1.3b00000000000p+8f;
            goto LABEL_289;
          }
          if (v173 == 8) {
            v175 = 0x1.6800000000000p+6f;
            goto LABEL_289;
          }
        }
      }
      else {
        if (v173 <= 1) {
          v175 = 0x1.6800000000000p+7f;
          goto LABEL_289;
        }
        if (v173 == 2) {
          v175 = 0x1.0e00000000000p+8f;
          goto LABEL_289;
        }
        if (v173 == 3) {
          v175 = 0x1.c200000000000p+7f;
          goto LABEL_289;
        }
      }
      v175 = 0x0.0p+0f;
    LABEL_289:
      UnitActor_81ab40_alt1(v120, v175, 0x0.0p+0f);
      v93 = (__int64)v199_.v201;
      if (v199_.v201 != nullptr) {
      LABEL_290:
        v176 = DWORD2(v202);
        if ((DWORD2(v202) & 0x80000000) != 0) {
          v176 = *(char*)(v93 + 584);
          v177 = DWORD3(v202);
          if ((DWORD3(v202) & 0x80000000) != 0) {
            goto LABEL_300;
          }
        }
        else {
          v177 = DWORD3(v202);
          if ((DWORD3(v202) & 0x80000000) == 0) {
            goto LABEL_292;
          }
        LABEL_300:
          v177 = *(char*)(v93 + 585);
        }
      LABEL_292:
        if ((*(_WORD*)(v93 + 417) & 0x4004) == 0) {
          v178 = v9;
          v179 = *(char**)(v93 + 600);
          v180 = *(char**)(v93 + 608);
          v213_.v214 = v93;
          v181 = *(_QWORD*)(*GameData_212ce98[0] + 96);
          *(_QWORD*)&v213_.v213 = GameData_1f94210;
          *((_QWORD*)&v213_.v213 + 1) = v181;
          v182 = &v213_.v213;
          v215_.v216 = &v213_.v213;
          if (v179 == v180) {
            goto LABEL_301;
          }
          do {
            v183 = v176 + *v179;
            v219 = v177 + v179[1];
            *(_DWORD*)v220_.v220 = v183;
            if (v215_.v216 == nullptr) {
              GameRoutine_60a310_alt1();
            }
            (*(void (**)(__int128*, unsigned __int8*, int*))(
                *(_QWORD*)v215_.v216 + 48LL))(v215_.v216, v220_.v220, &v219);
            v179 += 4;
          } while (v179 != v180);
          v182 = v215_.v216;
          if (v215_.v216 == &v213_.v213) {
          LABEL_301:
            v10 = a2;
            v184 = 32;
            v9 = v178;
          LABEL_302:
            (*(void (**)(__int128*))(*(_QWORD*)v182 + v184))(v182);
          }
          else {
            v10 = a2;
            v9 = v178;
            if (v215_.v216 != nullptr) {
              v184 = 40;
              goto LABEL_302;
            }
          }
        }
        v185 = *(_QWORD*)(a6 + 32);
        v11 = v91;
        if (v185 != 0) {
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v185 + 48LL))(v185,
                                                                   v199_.v199);
        }
      }
    LABEL_9:
      v6 = v220_.v222;
      if (++v11 == v10) {
        return;
      }
    }
    v220_.v220[0] = 0;
    *(_QWORD*)&v213_.v213 = GameData_1f94928;
    *((_QWORD*)&v213_.v213 + 1) = v220_.v220;
    v215_.v216 = &v213_.v213;
    MapUtil_756d50_alt1(v25, v27, (__int64)&v213_.v213);
    if (v215_.v216 == &v213_.v213) {
      v33 = 32;
    }
    else {
      if (v215_.v216 == nullptr) {
      LABEL_162:
        if (v220_.v220[0] == 0) {
          goto LABEL_9;
        }
        v14 = v199_.v199[0];
        v17 = v212;
        goto LABEL_20;
      }
      v33 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v215_.v216 + v33))((__int64)v215_.v216);
    goto LABEL_162;
  }
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
        CharacterBuilder_1084780_alt1(*(_QWORD*)(v7 + 264));
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
        CharacterBuilder_1084780_alt1(*(_QWORD*)(v1 + 264));
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
      LODWORD(v2) = DWORD3(v2);
      if (*((float*)&v2 + 3) != 0x1.0000000000000p+0f ||
          (*(__n128*)& v2 = ((__n128 (*)(unsigned __int64, float)) *
                             (_QWORD*)(*(_QWORD*)(v7 + 160) + 16LL))(
               v7 + 160, *((float*)&v2 + 3)),
           LODWORD(v2) = DWORD3(v2),
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
      CharacterBuilder_1084780_alt1(*(_QWORD*)(v2 + 264));
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

void game_map_anonymous_7b1f40(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  _BYTE* v3;
  int v4;
  __int64* v6;
  __int64 v7;
  int v8;
  int v9;
  bool v10;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  float v19;
  __int128 v20;
  __int128 v21;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int128 v26;

  v1 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v1 + 24) == 4) {
    v2 = (unsigned __int16)game_g_empty_item;
    if (*(_WORD*)(v1 + 32) != 0) {
      v2 = *(unsigned __int16*)(v1 + 32);
    }
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v2) +
                   73LL) &
         0xFE) == 8) {
      v4 = *(unsigned __int8*)(v1 + 57);
      v3 = (_BYTE*)(v1 + 57);
      if (v4 != 0) {
        v6 = game_UnitPool_Get_alt1(v3);
        v7 = *(_QWORD*)(a1 + 168);
        v8 = *(char*)(v7 + 53);
        v9 = *(char*)(v7 + 54);
        v10 = v6 == nullptr || v8 < 1;
        if (!v10 && v9 >= 1) {
          *((_BYTE*)v6 + 584) = v8;
          v12 = v6[1];
          *((_BYTE*)v6 + 585) = v9;
          if (v12 != 0) {
            v13 = *(char*)(v12 + 584);
            if ((v13 & 0x80000000) == 0) {
              v14 = *(char*)(v12 + 585);
              if ((v14 & 0x80000000) == 0) {
                v15 = *(_DWORD*)(v12 + 592);
                v16 = v13 | 0x100;
                v17 = v14 | 0x100;
                v18 = (__int64)v6;
                v19 = (float)(unsigned int)(v15 - 1) * 0x1.4000000000000p+1f;
                if (v15 <= 0) {
                  v19 = 0x0.0p+0f;
                }
                *(_QWORD*)&v20 = COERCE_UNSIGNED_INT(
                    (float)((float)((float)((float)v16 *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f) +
                    v19);
                v24 = COERCE_UNSIGNED_INT(
                    (float)((float)((float)((float)v17 *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f) +
                    v19);
                *(float*)&v25 = (float)((float)((float)((float)v16 *
                                                        0x1.4000000000000p+2f) +
                                                0x1.4000000000000p+1f) +
                                        -0x1.4000000000000p+10f) +
                                v19;
                *((_QWORD*)&v20 + 1) = v24;
                v26 = v20;
                *(_QWORD*)&v21 = __PAIR64__(
                    COERCE_UNSIGNED_INT(Unit_6c7fa0(v12, (__int64)&v26)), v25);
                *((_QWORD*)&v21 + 1) = v24;
                v26 = v21;
                Cursor_734a80(v18 + 48, (__int64*)&v26);
                UnitActor_81ba20_alt1(v18);
                v6 = (__int64*)v18;
              }
            }
            v23 = v6[33];
            if (v23 != 0) {
              CharacterBuilder_1084780_alt1(v23);
            }
          }
        }
      }
    }
  }
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

__int64* game_map_anonymous_7b3130(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
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
  _BYTE* v18;
  int v19;
  __int64* v20;
  int v21;
  __int64 v22;
  float v23;
  unsigned int v24;
  __int128 v25;
  __int128 v26;
  __int64 v27;
  __int64* result;
  int v29;
  __int64 v30;
  __int64 v31;
  __int16 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  __int64 v39;
  unsigned int v40;
  bool v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  unsigned int v47;
  bool v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  bool v53;
  __int64* v54;
  __int64* v55;
  _BYTE* v56;
  int v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  _BYTE* v71;
  int v72;
  __int64 v73;
  unsigned int v74;
  __int128 v75;

  v2 = a1 + 11448;
  v3 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v3 + 8) != 0) {
    v4 = game_UnitPool_Get_alt1((_BYTE*)(v3 + 8));
    v3 = *(_QWORD*)(a1 + 168);
    v5 = (__int64)v4;
  }
  else {
    v5 = 0;
  }
  BattleInfo_7905d0_alt1(a1 + 176, v5, *(_DWORD*)(v3 + 28));
  BattleInfo_790a40_alt1(a1 + 176, *(_BYTE*)(*(_QWORD*)(a1 + 168) + 53LL),
                         *(_BYTE*)(*(_QWORD*)(a1 + 168) + 54LL));
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
    GameRoutine_7992e0_alt1(a1 + 192);
    GameRoutine_7992e0_alt1(a1 + 952);
    GameRoutine_7992e0_alt1(a1 + 1712);
    GameRoutine_7992e0_alt1(a1 + 2472);
    *(_DWORD*)(a1 + 11432) = 0;
    *(_WORD*)v2 = 0;
    *(_QWORD*)(a1 + 11452) = 0;
    *(_QWORD*)(a1 + 11458) = 0;
    BattleArea_8b9d00_alt1(a1 + 11472);
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
  game_map_799aa0_alt1(a1 + 192, v7);
  v8 = GameData_212cfd0[0];
  if ((*(_QWORD*)(*GameData_212cfd0[0] + 12672) & 0x200000LL) != 0) {
    v9 = 67248193;
  }
  else {
    v9 = 67117121;
  }
  *(_DWORD*)(a1 + 11452) |=
      v9 | (32 * *(_DWORD*)(*GameData_212ce90[0] + 20)) & 0x40000;
  game_map_790ba0_alt1(a1 + 176);
  *(_BYTE*)(v2 + 1) |= 1u;
  GameRoutine_7992e0_alt1(a1 + 11504);
  GameRoutine_7992e0_alt1(a1 + 12264);
  GameRoutine_7992e0_alt1(a1 + 13024);
  GameRoutine_7992e0_alt1(a1 + 13784);
  *(_DWORD*)(a1 + 22744) = 0;
  *(_WORD*)(a1 + 22760) = 0;
  *(_QWORD*)(a1 + 22764) = 0;
  *(_QWORD*)(a1 + 22770) = 0;
  BattleArea_8b9d00_alt1(a1 + 22784);
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
  v18 = (_BYTE*)(v17 + 8);
  if (v19 != 0) {
    v20 = game_UnitPool_Get_alt1(v18);
    if (v20 != nullptr) {
      v21 = *((_DWORD*)v20 + 148);
      v22 = *GameData_212cfc0[0];
      v23 = (float)(unsigned int)(v21 - 1) * 0x1.4000000000000p+1f;
      v24 = *((char*)v20 + 584) + 256;
      if (v21 <= 0) {
        v23 = 0x0.0p+0f;
      }
      *(_QWORD*)&v25 = COERCE_UNSIGNED_INT(
          (float)((float)((float)((float)v24 * 0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v23);
      v73 = COERCE_UNSIGNED_INT(
          (float)((float)((float)((float)(unsigned int)(*((char*)v20 + 585) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v23);
      *(float*)&v74 =
          (float)((float)((float)((float)v24 * 0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v23;
      *((_QWORD*)&v25 + 1) = v73;
      v75 = v25;
      *(_QWORD*)&v26 = __PAIR64__(
          COERCE_UNSIGNED_INT(Unit_6c7fa0_alt2((__int64)v20, &v75)), v74);
      *((_QWORD*)&v26 + 1) = v73;
      v75 = v26;
      Cursor_730ff0_alt1(v22, &v75);
    }
  }
  if (*(unsigned __int8*)(a1 + 23032) < 2u || *(_BYTE*)v2 == 3) {
    goto LABEL_35;
  }
  v33 = *(_QWORD*)(a1 + 168);
  v34 = *(_DWORD*)(v33 + 40);
  v35 = v34 & 0xFFF;
  if ((v34 & 0xFFF) != 0) {
    v36 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v35);
    if (v36 == 0) {
      goto LABEL_35;
    }
    LOBYTE(v37) = *(_BYTE*)(v36 + 104);
  }
  else {
    v42 = *(unsigned __int16*)(v33 + 32);
    v43 = *(unsigned __int16*)game_g_empty_item_ptr;
    if (*(_WORD*)(v33 + 32) != 0) {
      v44 = *(unsigned __int16*)(v33 + 32);
    }
    else {
      v44 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v45 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v46 = *(_QWORD*)(v45 + 8LL * v44);
    v36 = *(_QWORD*)(v46 + 192);
    v47 = *(unsigned __int8*)(v46 + 72);
    v48 = v36 == 0 || v47 > 7;
    if (v48 || *(_BYTE*)(v36 + 105) == 0 ||
        (v37 = *(unsigned __int8*)(v36 + 104)) == 2) {
      if (!ProcMapSeqBattle_7b6760_alt1(a1)) {
        goto LABEL_35;
      }
      goto LABEL_74;
    }
  }
  if ((((unsigned __int16)*GameData_212cf08[0] >> v37) & 1) != 0 &&
          (*(_WORD*)(v36 + 754) & 4) == 0 ||
      !ProcMapSeqBattle_7b6760_alt1(a1)) {
    goto LABEL_35;
  }
  if ((_DWORD)v35 == 0) {
    v42 = *(unsigned __int16*)(v33 + 32);
    v43 = *(unsigned __int16*)game_g_empty_item_ptr;
    v45 = *(_QWORD*)(*GameData_212c878[0] + 64);
  LABEL_74:
    if (v42 != 0) {
      v49 = v42;
    }
    else {
      v49 = v43;
    }
    v50 = *(_QWORD*)(v45 + 8LL * v49);
    v51 = *(_QWORD*)(v50 + 192);
    v52 = *(unsigned __int8*)(v50 + 72);
    v53 = v51 == 0 || v52 > 7;
    if (v53 || *(_BYTE*)(v51 + 105) == 0 || *(_BYTE*)(v51 + 104) == 2) {
      goto LABEL_35;
    }
  LABEL_83:
    if (*(_BYTE*)(*v8 + 8) != 0) {
      v54 = game_UnitPool_Get_alt1((_BYTE*)(*v8 + 8));
      v33 = *(_QWORD*)(a1 + 168);
      v55 = v54;
    }
    else {
      v55 = nullptr;
    }
    v57 = *(unsigned __int8*)(v33 + 8);
    v56 = (_BYTE*)(v33 + 8);
    if (v57 != 0) {
      v58 = game_UnitPool_Get_alt1(v56);
    }
    else {
      v58 = nullptr;
    }
    if (v55 == v58 && (*(_BYTE*)(*v8 + 12678) & 1) != 0) {
      goto LABEL_35;
    }
    v59 = *(_QWORD*)(a1 + 168);
    if ((*(_DWORD*)(v59 + 40) & 0xFFF) != 0) {
      v60 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(v59 + 40) & 0xFFF));
      if (v60 == 0) {
        goto LABEL_102;
      }
    }
    else {
      v62 = *(unsigned __int16*)(v59 + 32);
      if (v62 == 0) {
        v62 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v63 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v62);
      v60 = *(_QWORD*)(v63 + 192);
      if (v60 == 0 || *(unsigned __int8*)(v63 + 72) > 7u ||
          *(_BYTE*)(v60 + 105) == 0 || *(_BYTE*)(v60 + 104) == 2) {
        goto LABEL_102;
      }
    }
    if (v60 == Situation_7646c0_alt1()) {
      v61 = game_UnitPool_Get_alt1((_BYTE*)(*(_QWORD*)(a1 + 168) + 8LL));
      LODWORD(v75) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x230LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF;
      if (!game_HasSkill_alt2(v61 + 218, &v75)) {
        goto LABEL_35;
      }
    }
  LABEL_102:
    v64 = *(_QWORD*)(a1 + 96);
    v65 = *(_QWORD*)(a1 + 104);
    v66 = ((v65 - v64) << 6) - 1;
    if (v65 == v64) {
      v66 = 0;
    }
    v67 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v66 == v67) {
      GameRoutine_658d60_alt2((__int64*)(a1 + 88));
      v64 = *(_QWORD*)(a1 + 96);
      v67 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v64 + 8 * (v67 >> 9)) + 8 * (v67 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v68 = *(_QWORD*)(a1 + 8);
    if (v68 != 0) {
      while (1) {
        if (*(_BYTE*)v68 == 2) {
          if (*(_DWORD*)(v68 + 32) == 3) {
            *(_QWORD*)(a1 + 16) = v68;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v68 == 0) {
          break;
        }
        v68 += 64;
      }
    }
    if (*(_BYTE*)(*v8 + 8) != 0) {
      v69 = game_UnitPool_Get_alt1((_BYTE*)(*v8 + 8));
    }
    else {
      v69 = nullptr;
    }
    v70 = *(_QWORD*)(a1 + 168);
    v72 = *(unsigned __int8*)(v70 + 8);
    v71 = (_BYTE*)(v70 + 8);
    if (v72 != 0) {
      result = game_UnitPool_Get_alt1(v71);
    }
    else {
      result = nullptr;
    }
    if (v69 == result) {
      *(_QWORD*)(*v8 + 12672) |= 0x1000000000000uLL;
    }
    return result;
  }
  if (*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                 8LL * (unsigned int)v35) != 0) {
    goto LABEL_83;
  }
LABEL_35:
  v27 = *(_QWORD*)(a1 + 168);
  v29 = *(unsigned __int8*)(v27 + 8);
  result = (__int64*)(v27 + 8);
  if (v29 == 0) {
    return result;
  }
  result = game_UnitPool_Get_alt1(result);
  if (result == nullptr) {
    return result;
  }
  v30 = *(_QWORD*)(a1 + 168);
  if ((*(_DWORD*)(v30 + 40) & 0xFFF) != 0) {
    v31 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v30 + 40) & 0xFFF));
    if (v31 == 0) {
      return result;
    }
    goto LABEL_39;
  }
  v38 = *(unsigned __int16*)(v30 + 32);
  if (v38 == 0) {
    v38 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v39 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v38);
  v31 = *(_QWORD*)(v39 + 192);
  v40 = *(unsigned __int8*)(v39 + 72);
  v41 = v31 == 0 || v40 > 7;
  if (!v41 && *(_BYTE*)(v31 + 105) != 0 && *(_BYTE*)(v31 + 104) != 2) {
  LABEL_39:
    v32 = *(_WORD*)(v31 + 754);
    if ((v32 & 1) != 0 &&
        (v32 & 0x200 | *(unsigned __int8*)(a1 + 23032)) != 0 &&
        (v32 & 2) != 0 && *GameData_212d578[0] != 0) {
      return (__int64*)GameRoutine_17cece0_alt1(
          *(_QWORD*)(*GameData_212d578[0] + 144), v31, 0, 1, (__int64)result);
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
          v61 = 1LL << (-(char)__clz(v60 - 1) & 63);
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
          v112 = 1LL << (-(char)__clz(v111 - 1) & 63);
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
  float v27;
  float32x4_t v28;
  int v29;
  float v30;
  float32x4_t v31;
  float v32;
  float32x4_t v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  bool v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  __int64 v45;
  float32x4_t v46;
  __int64 v47;
  unsigned int v48;
  unsigned int i;
  float32x4_t* v50;
  __int64* v51;
  __int64 v52;
  const char* v53;
  int16x4_t v54;
  float32x4_t v55;
  float v56;
  __int128 v57;
  float32x4_t v58;
  float32x2_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float v63;
  float v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  unsigned __int32 v70;
  float32x4_t v71;
  float32x2_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float v76;
  float v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x2_t v82;
  float32x2_t v83;
  float32x4_t v84;
  float32x2_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float v89;
  float v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  __int64* v95;
  __int64 v96;
  unsigned int v97;
  unsigned int j;
  __int64 v99;
  _DWORD* v100;
  unsigned __int8* v101;
  unsigned int v102;
  bool v103;
  int v104;
  int v106;
  __int64 v107;
  int v108;
  __int64 v109;
  unsigned __int32 v110;
  float32x4_t v111;
  float32x4_t v112;
  unsigned __int32 v113;
  float32x4_t v114;
  float32x4_t v115;
  __int128 v116;
  __int128 v117;
  __int128 v118;
  unsigned __int32 v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;

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
    GameRoutine_14a1390_alt1((__int64*)(a1 + 288), 1);
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
    v14 = v12 + 0x0.0p+0f;
    if (v13 == 3) {
      v18 = *(float32x4_t*)(a1 + 160);
      v17 = *(float32x4_t*)(a1 + 176);
      v19 = vsubq_f32(v17, v18);
      v120 = v17;
      v20 = vmuls_lane_f32(0x1.99999a0000000p-3f, v19, 2);
      v21 = (float)(sqrtf((float)(PSEUDO_UNFUSED(v20 * v20)) +
                          (float)((float)(0x1.99999a0000000p-3f *
                                          LANES128(v19).n128_f32[0]) *
                                  (float)(0x1.99999a0000000p-3f *
                                          LANES128(v19).n128_f32[0]))) *
                    0x1.279a740000000p-1f) *
            0x1.0000000000000p-1f;
      v22 = 0x1.0000000000000p+1f;
      if (v21 <= 0x1.0000000000000p+1f) {
        v22 = v21;
      }
      v23 = v22 * 0x1.4000000000000p+2f;
      if (v21 < 0x1.0000000000000p+0f) {
        v23 = 0x1.4000000000000p+2f;
      }
      LANES128(v17).n128_f32[0] =
          v23 + (float)((float)(LANES128(v18).n128_f32[1] +
                                LANES128(v17).n128_f32[1]) *
                        0x1.0000000000000p-1f);
      LANES128(v120).n128_f32[0] =
          LANES128(v18).n128_f32[0] +
          (float)(PSEUDO_UNFUSED(v14 * LANES128(v19).n128_f32[0]));
      LANES128(v18).n128_f32[0] = vmuls_lane_f32(v14, v19, 2);
      LANES128(v24).n128_u64[0] = LANES128(v120).n128_u64[0];
      LANES128(v24).n128_u64[1] = COERCE_UNSIGNED_INT(
          LANES128(v18).n128_f32[2] + LANES128(v18).n128_f32[0]);
      v120 = v24;
      if (v12 >= 0x1.0000000000000p-1f) {
        v25 = LANES128(v17).n128_f32[0] +
              (float)(PSEUDO_UNFUSED(
                  (float)((float)((float)(v14 + -0x1.0000000000000p-1f) +
                                  (float)(v14 + -0x1.0000000000000p-1f)) *
                          (float)((float)(v14 + -0x1.0000000000000p-1f) +
                                  (float)(v14 + -0x1.0000000000000p-1f))) *
                  (float)(LANES128(v17).n128_f32[1] -
                          LANES128(v17).n128_f32[0])));
      }
      else {
        v25 = LANES128(v17).n128_f32[0] -
              (float)(PSEUDO_UNFUSED(
                  (float)((float)(0x1.0000000000000p+0f - (float)(v14 + v14)) *
                          (float)(0x1.0000000000000p+0f - (float)(v14 + v14))) *
                  (float)(LANES128(v17).n128_f32[0] -
                          LANES128(v18).n128_f32[1])));
      }
      LANES128(v120).n128_f32[1] = v25;
    }
    else if (v13 == 2) {
      v15 = *(float32x4_t*)(a1 + 160);
      v16 = vmulq_n_f32(vsubq_f32(*(float32x4_t*)(a1 + 176), v15), v14);
      LANES128(v16).n128_u32[3] = 0;
      v120 = vaddq_f32(v15, v16);
    }
    else {
      v26 = *(_QWORD*)(a1 + 168);
      LANES128(v120).n128_u64[0] = *(_QWORD*)(a1 + 160);
      LANES128(v120).n128_u64[1] = v26;
    }
    v27 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 320) + 16LL))(a1 + 320);
    v28 = *(float32x4_t*)(a1 + 160);
    v29 = *(unsigned __int8*)(a1 + 360);
    v30 = v27 + 0x1.99999a0000000p-4f;
    if (v29 == 3) {
      v32 = 0x1.0000000000000p+1f;
      v33 = vsubq_f32(*(float32x4_t*)(a1 + 176), v28);
      LODWORD(v34) = HIDWORD(*(_QWORD*)(a1 + 176));
      v35 = vmuls_lane_f32(0x1.99999a0000000p-3f, v33, 2);
      v36 = (float)(sqrtf((float)(PSEUDO_UNFUSED(v35 * v35)) +
                          (float)((float)(0x1.99999a0000000p-3f *
                                          LANES128(v33).n128_f32[0]) *
                                  (float)(0x1.99999a0000000p-3f *
                                          LANES128(v33).n128_f32[0]))) *
                    0x1.279a740000000p-1f) *
            0x1.0000000000000p-1f;
      if (v36 <= 0x1.0000000000000p+1f) {
        v32 = v36;
      }
      v37 = v32 * 0x1.4000000000000p+2f;
      if (v36 >= 0x1.0000000000000p+0f) {
        v38 = v37;
      }
      else {
        v38 = 0x1.4000000000000p+2f;
      }
      v39 = v30 < 0x1.0000000000000p-1f;
      v40 = v38 + (float)((float)(LANES128(v28).n128_f32[1] + v34) *
                          0x1.0000000000000p-1f);
      v41 = v30 * LANES128(v33).n128_f32[0];
      LANES128(v28).n128_u32[3] = 0;
      v42 = LANES128(v28).n128_f32[2] + vmuls_lane_f32(v30, v33, 2);
      LANES128(v28).n128_f32[0] = LANES128(v28).n128_f32[0] + v41;
      v43 = v40 + (float)(PSEUDO_UNFUSED(
                      (float)((float)((float)(v30 + -0x1.0000000000000p-1f) +
                                      (float)(v30 + -0x1.0000000000000p-1f)) *
                              (float)((float)(v30 + -0x1.0000000000000p-1f) +
                                      (float)(v30 + -0x1.0000000000000p-1f))) *
                      (float)(v34 - v40)));
      v44 = v40 -
            (float)(PSEUDO_UNFUSED(
                (float)((float)(0x1.0000000000000p+0f - (float)(v30 + v30)) *
                        (float)(0x1.0000000000000p+0f - (float)(v30 + v30))) *
                (float)(v40 - LANES128(v28).n128_f32[1])));
      if (!v39) {
        v44 = v43;
      }
      LANES128(v28).n128_f32[1] = v44;
      LANES128(v28).n128_f32[2] = v42;
    }
    else if (v29 == 2) {
      v31 = vmulq_n_f32(vsubq_f32(*(float32x4_t*)(a1 + 176), v28), v30);
      LANES128(v31).n128_u32[3] = 0;
      v28 = vaddq_f32(v28, v31);
    }
    v45 = *(_QWORD*)(a1 + 288);
    v46 = v120;
    v115 = v28;
    v47 = *(_QWORD*)v45;
    if (*(_QWORD*)v45 != 0 && *(_DWORD*)(v47 + 16) == *(_DWORD*)(v45 + 8)) {
      v48 = *(_DWORD*)(v47 + 36);
      if (v48 != 0) {
        for (i = 0; i < v48; ++i) {
          if ((int)v48 > (int)i) {
            v50 = *(float32x4_t**)(v47 + 40 + 8LL * (int)i);
            if (v50 != nullptr) {
              v50[1] = v46;
              LANES128(v50[8]).n128_u8[0] = 1;
              v48 = *(_DWORD*)(v47 + 36);
            }
          }
        }
      }
    }
    v111 = v46;
    game_14a3920(v45);
    v51 = *(__int64**)(a1 + 288);
    v52 = *v51;
    if (*v51 == 0 || *(_DWORD*)(v52 + 16) != *((_DWORD*)v51 + 2) ||
        (v53 = *(const char**)(*(_QWORD*)(v52 + 24) + 112LL)) == nullptr ||
        strstr_alt1(v53, GameData_1aa85d1_alt1) == 0) {
      LANES64(v54).n64_u64[0] =
          LANES64_OF(vmovn_s32(vceqq_f32(v111, v115))).n64_u64[0];
      if ((LANES64(v54).n64_u8[0] & 1) != 0 &&
          (LANES64(v54).n64_u8[2] & 1) != 0 &&
          (LANES64(v54).n64_u8[4] & 1) != 0) {
        v55 = vsubq_f32(*(float32x4_t*)(a1 + 176), *(float32x4_t*)(a1 + 160));
        v56 = LANES128(v55).n128_f32[2];
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v113 = LANES128(v55).n128_u32[0];
          v119 = LANES128(v55).n128_u32[2];
          v106 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
          LANES128(v55).n128_u32[0] = v113;
          v56 = *(float*)&v119;
          if (v106 != 0) {
            v107 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v107;
            __cxa_guard_release_alt1((__int64)&GameData_21a6130);
            LANES128(v55).n128_u32[0] = v113;
            v56 = *(float*)&v119;
          }
        }
        v57 = GameData_21a6120;
        v122 = COERCE_AS(float32x4_t, GameData_1a83090);
        if ((float)((float)(PSEUDO_UNFUSED(v56 * v56)) +
                    (float)(LANES128(v55).n128_f32[0] *
                            LANES128(v55).n128_f32[0])) > 0x0.0p+0f) {
          LANES128(v58).n128_u64[0] = LANES128(v55).n128_u32[0];
          LANES128(v58).n128_u64[1] = LODWORD(v56);
          LANES64(v59).n64_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      vmul_f32(COERCE_AS(float32x2_t, LODWORD(v56)),
                               COERCE_AS(float32x2_t, LODWORD(v56))),
                      vmul_f32(
                          COERCE_AS(float32x2_t, LANES128(v55).n128_u32[0]),
                          COERCE_AS(float32x2_t, LANES128(v55).n128_u32[0]))))
                  .n64_u64[0];
          LANES128(v60).n128_u64[0] =
              LANES64_OF(vpadd_f32(v59, v59)).n64_u64[0];
          LANES128(v60).n128_u64[1] = LANES128(v60).n128_u64[0];
          v61 = vrsqrteq_f32(v60);
          v62 = vmulq_f32(v61, vrsqrtsq_f32(v61, vmulq_f32(v60, v61)));
          v121 = vbicq_s8(
              vmulq_f32(v58,
                        vmulq_f32(v62, vrsqrtsq_f32(v62, vmulq_f32(v60, v62)))),
              vceqzq_f32(v60));
          if (LANES128(v60).n128_f32[0] != 0x0.0p+0f) {
            v116 = GameData_21a6120;
            v63 = math_Vec3_Angle_alt1(&v122, &v121);
            v57 = v116;
            v64 = v63 * 0x1.ca5dc00000000p+5f;
            *((float*)&v57 + 1) = v64;
            LANES128(v65).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v66).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v65).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v67).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v66).n128_i8[8] =
                vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            *(int8x8_t*)&LANES128(v67).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v68).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v68).n128_i8[8] =
                vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            if (LANES128_OF(vmlsq_f32(vmulq_f32(v65, v66), v68, v67))
                    .n128_f32[1] < 0x0.0p+0f) {
              *((float*)&v57 + 1) = -v64;
            }
          }
        }
      }
      else {
        v69 = vsubq_f32(v115, v111);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0) {
          v114 = v69;
          v108 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
          v69 = v114;
          if (v108 != 0) {
            v109 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v109;
            __cxa_guard_release_alt1((__int64)&GameData_21a6130);
            v69 = v114;
          }
        }
        v70 = LANES128(v69).n128_u32[2];
        v57 = GameData_21a6120;
        v122 = COERCE_AS(float32x4_t, GameData_1a83090);
        if ((float)(vmuls_lane_f32(LANES128(v69).n128_f32[2], v69, 2) +
                    (float)(LANES128(v69).n128_f32[0] *
                            LANES128(v69).n128_f32[0])) > 0x0.0p+0f) {
          LANES128(v71).n128_u64[0] = LANES128(v69).n128_u32[0];
          LANES128(v71).n128_u64[1] = LANES128(v69).n128_u32[2];
          LANES64(v72).n64_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      vmul_f32(
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u32[2]),
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u32[2])),
                      vmul_f32(
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u32[0]),
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u32[0]))))
                  .n64_u64[0];
          LANES128(v73).n128_u64[0] =
              LANES64_OF(vpadd_f32(v72, v72)).n64_u64[0];
          LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
          v74 = vrsqrteq_f32(v73);
          v75 = vmulq_f32(v74, vrsqrtsq_f32(v74, vmulq_f32(v73, v74)));
          v121 = vbicq_s8(
              vmulq_f32(v71,
                        vmulq_f32(v75, vrsqrtsq_f32(v75, vmulq_f32(v73, v75)))),
              vceqzq_f32(v73));
          if (LANES128(v73).n128_f32[0] != 0x0.0p+0f) {
            v110 = LANES128(v69).n128_u32[2];
            v112 = v69;
            v117 = GameData_21a6120;
            v76 = math_Vec3_Angle_alt1(&v122, &v121);
            v57 = v117;
            v77 = v76 * 0x1.ca5dc00000000p+5f;
            *((float*)&v57 + 1) = v77;
            LANES128(v78).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v79).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v78).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v80).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v79).n128_i8[8] =
                vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            *(int8x8_t*)&LANES128(v80).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v81).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v81).n128_i8[8] =
                vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            if (LANES128_OF(vmlsq_f32(vmulq_f32(v78, v79), v81, v80))
                    .n128_f32[1] < 0x0.0p+0f) {
              *((float*)&v57 + 1) = -v77;
            }
            v70 = v110;
            v69 = v112;
          }
        }
        if (LANES128_OF(vmulq_f32(v69, v69)).n128_f32[1] > 0x0.0p+0f) {
          LANES64(v82).n64_u64[0] = LANES128(v69).n128_u32[0];
          LANES128(v69).n128_u32[0] = 0;
          LANES64(v83).n64_u64[0] =
              LANES64_OF(vadd_f32(vmul_f32(COERCE_AS(float32x2_t, v70),
                                           COERCE_AS(float32x2_t, v70)),
                                  vmul_f32(v82, v82)))
                  .n64_u64[0];
          LANES128(v84).n128_u64[0] = LANES128(v69).n128_u64[0];
          LANES128(v84).n128_u64[1] =
              LANES64_OF(vsqrt_f32(vpadd_f32(v83, v83))).n64_u32[0];
          LANES64(v85).n64_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      vmul_f32(*(float32x2_t*)&LANES128(v84).n128_i8[8],
                               *(float32x2_t*)&LANES128(v84).n128_i8[8]),
                      vmul_f32(
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]))))
                  .n64_u64[0];
          LANES128(v86).n128_u64[0] =
              LANES64_OF(vpadd_f32(v85, v85)).n64_u64[0];
          LANES128(v86).n128_u64[1] = LANES128(v86).n128_u64[0];
          v87 = vrsqrteq_f32(v86);
          v88 = vmulq_f32(v87, vrsqrtsq_f32(v87, vmulq_f32(v86, v87)));
          v121 = vbicq_s8(
              vmulq_f32(v84,
                        vmulq_f32(v88, vrsqrtsq_f32(v88, vmulq_f32(v86, v88)))),
              vceqzq_f32(v86));
          if (LANES128(v86).n128_f32[0] != 0x0.0p+0f) {
            v118 = v57;
            v89 = math_Vec3_Angle_alt1(&v122, &v121);
            v57 = v118;
            v90 = v89 * 0x1.ca5dc00000000p+5f;
            *(float*)&v57 = v90;
            LANES128(v91).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v92).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v91).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v93).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v92).n128_i8[8] =
                vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            *(int8x8_t*)&LANES128(v93).n128_i8[8] =
                vqtbl1_s8(v122, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            LANES128(v94).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v94).n128_i8[8] =
                vqtbl1_s8(v121, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            if (LANES128_OF(vmlsq_f32(vmulq_f32(v91, v92), v94, v93))
                    .n128_f32[0] < 0x0.0p+0f) {
              *(float*)&v57 = -v90;
            }
          }
        }
      }
      v95 = *(__int64**)(a1 + 288);
      v96 = *v95;
      if (*v95 != 0 && *(_DWORD*)(v96 + 16) == *((_DWORD*)v95 + 2)) {
        v97 = *(_DWORD*)(v96 + 36);
        if (v97 != 0) {
          for (j = 0; j < v97; ++j) {
            if ((int)v97 > (int)j) {
              v99 = *(_QWORD*)(v96 + 40 + 8LL * (int)j);
              if (v99 != 0) {
                *(_OWORD*)(v99 + 48) = v57;
                *(_BYTE*)(v99 + 128) = 1;
                v97 = *(_DWORD*)(v96 + 36);
              }
            }
          }
        }
      }
    }
    if (*(_BYTE*)(a1 + 192) == 1) {
      Cursor_730ff0_alt2(*GameData_212cfc0[0], (float*)&v120);
    }
    v8 = *(float*)(a1 + 332);
    v9 = *(float*)(a1 + 328);
  }
  if (v8 == v9) {
    GameRoutine_14a1520_alt1((__int64*)(a1 + 288), 1);
  }
LABEL_92:
  v100 = *(_DWORD**)(a1 + 288);
  if (*(_QWORD*)v100 == 0 || *(_DWORD*)(*(_QWORD*)v100 + 16LL) != v100[2]) {
    v101 = *(unsigned __int8**)(a1 + 16);
    if (v101 != nullptr) {
      v102 = *v101;
      v103 = v102 > 0x10;
      v104 = (1 << v102) & 0x1CE00;
      if (!v103 && v104 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

#pragma GCC visibility pop
