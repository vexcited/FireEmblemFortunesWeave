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
__int64 game_map_history_1227820_alt1(__int64 result) __asm__(
    "game_map_history_1227820");
__int64 game_map_history_12297e0(__int64 a1, int a2);
__int64
game_map_history_122b460_alt1(__int64 result,
                              __int64 a2) __asm__("game_map_history_122b460");
__int64
game_map_history_122b760_alt1(__int64 a1) __asm__("game_map_history_122b760");
void game_map_history_122c500();
__int64
game_map_history_122d3c0_alt1(_QWORD* a1,
                              __int64* a2) __asm__("game_map_history_122d3c0");
__int64
game_map_history_122dd20_alt1(__int64 result,
                              __int64 a2) __asm__("game_map_history_122dd20");
__int64 game_map_history_122f3c0(__int64 result);
bool game_map_history_1234fe0(unsigned int** a1, unsigned int** a2);
__int64 game_map_history_123d310(__int64 result);
_DWORD* GameManager_a35190_alt1(_DWORD* result,
                                __int64) __asm__("GameManager_a35190");
__int64 (***game_map_8129a0_alt1(int, int))() __asm__("game_map_8129a0");
__int64 (***game_map_812b00_alt1(const char*))() __asm__("game_map_812b00");
__int64**
GameRoutine_122c900_alt1(__int64** result) __asm__("GameRoutine_122c900");
__int64* GameRoutine_6eaec0_alt1(_BYTE*) __asm__("GameRoutine_6eaec0");
__int64 GameHr_1225d20(_QWORD*, __int64*);
__int64 GameHr_122cae0(__int64 result, unsigned int);
__int64 GameHr_1232280(__int64 result, __int64, unsigned int*, __int64,
                       unsigned int*);
__int64 GameHr_1235540(__int64, __int64);
__int64 GameHr_1272e40(_QWORD*, __int64*);
__int64 GameHr_1285d20(__int64 result);
__int64 GameHr_6c3050(__int64);
__int64 GameHr_6c47b0(__int64, _BYTE*, char, char);
__int64 GameReliance_8e17a0_alt1(_QWORD*, __int64,
                                 __int64) __asm__("GameReliance_8e17a0");
__int64 GameRoutine_126ba80_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_126ba80");
__int64 GameRoutine_12a64a0_alt1(__int64 result) __asm__("GameRoutine_12a64a0");
__int64 GameRoutine_12a6820_alt1(__int64 result) __asm__("GameRoutine_12a6820");
__int64 GameRoutine_960b80_alt1(__int64*) __asm__("GameRoutine_960b80");
__int64 GameRoutine_f09600_alt1(__int64) __asm__("GameRoutine_f09600");
__int64 GameSubquestData_125bbc0_alt1(__int64 result) __asm__(
    "GameSubquestData_125bbc0");
__int64 HistoryLogInfo_1239980_alt1(__int64 result,
                                    __int64) __asm__("HistoryLogInfo_1239980");
__int64
MapScoreInfo_19aad80_alt1(__int64 result) __asm__("MapScoreInfo_19aad80");
__int64
RecordSerializer_123d0b0_alt1(__int64 result,
                              __int64) __asm__("RecordSerializer_123d0b0");
__int64
RecordSerializer_123d420_alt1(__int64) __asm__("RecordSerializer_123d420");
__int64 Stream_Destructor_alt1(__int64,
                               unsigned int*) __asm__("Stream_Destructor");
__int64 Stream_Unknown2_alt1(__int64, unsigned int*) __asm__("Stream_Unknown2");
__int64 Trick_7d5160_alt1(__int64, char) __asm__("Trick_7d5160");
__int64 Unit_6e1e20_alt1(__int64, __int64*, char,
                         unsigned int) __asm__("Unit_6e1e20");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_1286480_alt1(__int64 result) __asm__("game_1286480");
__int64 game_12adf00_alt1(__int64 result) __asm__("game_12adf00");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_RandomSeed_Deserialize_alt1(int*, __int64*) __asm__(
    "game_RandomSeed_Deserialize");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_map_BonusExpList_Deserialize_alt1(__int64*, __int64) __asm__(
    "game_map_BonusExpList_Deserialize");
__int64 game_map_history_anonymous_Impl_Deserialize_alt1(
    __int64 result) __asm__("game_map_history_anonymous_Impl_Deserialize");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(
    __int64,
    unsigned __int64) __asm__("nn_mem_StandardAllocator_Allocate_1a0ad50");
char* GameRoutine_762f30_alt1(char* result,
                              __int64) __asm__("GameRoutine_762f30");
char* RecordSerializer_123d170_alt1(__int64) __asm__(
    "RecordSerializer_123d170");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
int* GameRoutine_74df60_alt1(int* result,
                             __int64) __asm__("GameRoutine_74df60");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameHr_122e840(__int64*, __int64, char*, char*);
void GameHr_1241020(__int64);
void GameHr_12a6020();
void GameHr_963d60();
void GameRoutine_123f0a0_alt1() __asm__("GameRoutine_123f0a0");
void GameRoutine_65d6c0_alt1(_QWORD*) __asm__("GameRoutine_65d6c0");
void GameRoutine_660f80_alt1(__int64*) __asm__("GameRoutine_660f80");
void GameRoutine_a35760_alt1(__int64) __asm__("GameRoutine_a35760");
void RecordSerializer_123d650_alt1(__int64,
                                   __int64) __asm__("RecordSerializer_123d650");
void Situation_763690_alt1(__int64) __asm__("Situation_763690");
void Stream_Unknown3_alt1(__int64, int) __asm__("Stream_Unknown3");
void __attribute__((noreturn))
GameRoutine_122f7a0_alt1() __asm__("GameRoutine_122f7a0");
void __attribute__((noreturn))
GameRoutine_122fad0_alt1() __asm__("GameRoutine_122fad0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_map_history_123d310_alt2(__int64) __asm__("game_map_history_123d310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_history_1227820(__int64 a1);
__int64 game_map_history_122b460(__int64 result);
void game_map_history_122b760(__int64 a1);
__int64 game_map_history_122d3c0(_QWORD* a1, __int64 a2);
void game_map_history_122dd20(__int64 a1, __int64 a2);

void game_map_history_1227820(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v4;
  __int64* v5;
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
  _QWORD* v16;
  char v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  __int64 v22;
  __int64* v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int i;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  unsigned __int64 v55;
  void (**v56)(unsigned __int64);
  int v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  unsigned int v61;
  int v62;
  unsigned __int8 v63;
  bool v64;
  unsigned int v65;
  char v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  int v82;
  _BYTE* v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64* v87;
  int* v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  _BOOL4 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned int v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  int v111;
  __int64* v112;
  __int64* v113;
  __int64* v114;
  int v115;
  __int64 v116;
  __int64 j;
  __int64* v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  int v123;
  __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  __int64 v127;
  int v128;
  __int64 v129;
  __int64 v130;
  __int64* v131;
  __int64* v132;
  __int64* v133;
  __int64* v134;
  _QWORD* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  unsigned __int8* v148;
  __int64 v149;
  int v150;
  __int64* v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64* v158;
  __int64 v159;
  __int64* v160;
  __int64 v161;
  unsigned int v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int16 v166;
  unsigned __int64 v167;
  int* v168;
  __int64 v169;
  __int64 v170;
  int v171;
  __int64* v172;
  unsigned __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64* v177;
  __int64 v178;
  __int64* v179;
  __int64* v180;
  __int64 v181;
  __int64* v182;
  __int64 v183;
  __int64 v184;
  _QWORD* v185;
  __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  _BOOL4 v191;
  unsigned int v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64* v197;
  __int64 v198;
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
  __int64 v244;
  struct {
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
    char gap244_[4];
    __int64 v262;
    unsigned int v263;
    char gap260_[4];
    __int64 v264;
    __int64 v265;
    __int64 v266;
  } v245_;
  struct {
    __int64* v267;
    __int64* v268;
    __int64* v269;
  } v267_;

  if (*(_BYTE*)(a1 + 8) != 1) {
    return;
  }
  v1 = a1 + 24;
  v2 = a1;
  v3 = *(unsigned __int16*)(*GameData_212ce90[0] + 26);
  v4 = *(_QWORD*)(a1 + 24 + 8LL * (v3 % 0x64));
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = GameData_2130ad0[0];
  v230 = a1 + 24;
  v229 = v3 % 0x64;
  if (v4 == 0) {
  LABEL_67:
    GameRoutine_123f0a0_alt1();
    v225 = 0;
    v240 = 0;
    v7 = 0;
    v57 = 1;
    goto LABEL_70;
  }
  if (v3 != *(unsigned __int16*)(v4 + 16)) {
    v52 = game_map_history_g_record_region_ptr[0];
    v53 = game_map_history_g_record_allocators_ptr[0];
    while (1) {
      v55 = v4;
      v56 = *(void (***)(unsigned __int64))v4;
      v4 = *(_QWORD*)(v4 + 8);
      (*v56)(v55);
      if ((_UNKNOWN*)v55 <
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v52)) {
        break;
      }
      v54 = v53[1];
      if (v54 != 0) {
        goto LABEL_60;
      }
    LABEL_61:
      if (v4 == 0) {
        *(_QWORD*)(v1 + 8LL * (v3 % 0x64)) = 0;
        goto LABEL_67;
      }
    }
    if (v55 < *v52) {
      goto LABEL_61;
    }
    v54 = *v53;
    if (*v53 == 0) {
      goto LABEL_61;
    }
  LABEL_60:
    nn_mem_StandardAllocator_Free_alt1(v54, v55);
    goto LABEL_61;
  }
  do {
    v7 = v4;
    v4 = *(_QWORD*)(v4 + 8);
  } while (v4 != 0);
  v8 = *(unsigned __int8*)(v7 + 18);
  v240 = *(_WORD*)(v7 + 20) + 1;
  GameRoutine_123f0a0_alt1();
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
          Em = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v12, 0x18u);
          if (Em != 0) {
            break;
          }
          v14 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10);
          v245_.v245 = 24;
          if (v14 == 0) {
            goto LABEL_351;
          }
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v14 + 48LL))(v14,
                                                                  &v245_.v245);
        }
        *(_QWORD*)Em = GameData_2130a90[0] + 2;
        *(_QWORD*)(Em + 8) = 0;
        *(_BYTE*)(Em + 19) = 3;
        *(_WORD*)(Em + 20) = v240;
        v22 = *GameData_212ce90[0];
        if (*GameData_212ce90[0] != 0) {
          *(_WORD*)(Em + 16) = *(_WORD*)(v22 + 26);
          LOBYTE(v22) = *(_BYTE*)(v22 + 24);
        }
        else {
          *(_WORD*)(Em + 16) = 1;
        }
        *(_BYTE*)(Em + 18) = v22;
        *(_QWORD*)Em = v232;
        *(_BYTE*)(Em + 22) = *(_BYTE*)(v11 + 9);
        *(_BYTE*)(Em + 23) = *(_BYTE*)(v11 + 10);
      }
      else {
        v15 = *v5;
        v245_.v259 = 0;
        v245_.v260 = 0;
        v245_.v257 = 0;
        v245_.v258 = 0;
        v245_.v255 = 0;
        v245_.v256 = 0;
        v245_.v253 = 0;
        v245_.v254 = 0;
        v245_.v251 = 0;
        v245_.v252 = 0;
        v245_.v249 = 0;
        v245_.v250 = 0;
        v245_.v248 = 0;
        v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v15, 491520, 16, 0);
        memset_alt1((__int64)(v16 + 4), 0, 0x77FE0u);
        *v16 = 0;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = 0;
        v245_.v261 = 0;
        v245_.v262 = 0;
        v245_.v263 = 0;
        v245_.v264 = 0;
        v245_.v265 = 0;
        v245_.v266 = 0;
        v238 = v7;
        v245_.v246 = v16;
        v245_.v247 = 491520;
        v17 = *(_BYTE*)(v11 + 10);
        v245_.v245 = (__int64)v234;
        if ((v17 & 1) != 0) {
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = *(unsigned __int8*)(v11 + 9) << 8;
        }
        else {
          v23 = GameRoutine_6eaec0_alt1((_BYTE*)(v11 + 9));
          HIDWORD(v245_.v247) = 0;
          LODWORD(v267_.v267) = 0;
          Stream_Destructor_alt1((__int64)&v245_.v245,
                                 (unsigned int*)&v267_.v267);
          v24 = HIDWORD(v245_.v247);
          if (SHIDWORD(v245_.v247) <= 128) {
            v24 = 128;
            if (HIDWORD(v245_.v247) != 128) {
              v25 = 128 - HIDWORD(v245_.v247);
              if ((unsigned int)(HIDWORD(v245_.v247) - 121) >= 7) {
                v26 = v25 & 0xFFFFFFF8;
                do {
                  v27 = SHIDWORD(v245_.v247);
                  v26 -= 8;
                  ++HIDWORD(v245_.v247);
                  *((_BYTE*)v245_.v246 + v27) = 0;
                  v28 = SHIDWORD(v245_.v247);
                  ++HIDWORD(v245_.v247);
                  *((_BYTE*)v245_.v246 + v28) = 0;
                  v29 = SHIDWORD(v245_.v247);
                  ++HIDWORD(v245_.v247);
                  *((_BYTE*)v245_.v246 + v29) = 0;
                  v30 = SHIDWORD(v245_.v247);
                  ++HIDWORD(v245_.v247);
                  *((_BYTE*)v245_.v246 + v30) = 0;
                  v31 = SHIDWORD(v245_.v247);
                  ++HIDWORD(v245_.v247);
                  *((_BYTE*)v245_.v246 + v31) = 0;
                  v32 = SHIDWORD(v245_.v247);
                  ++HIDWORD(v245_.v247);
                  *((_BYTE*)v245_.v246 + v32) = 0;
                  v33 = SHIDWORD(v245_.v247);
                  ++HIDWORD(v245_.v247);
                  *((_BYTE*)v245_.v246 + v33) = 0;
                  v34 = SHIDWORD(v245_.v247);
                  ++HIDWORD(v245_.v247);
                  *((_BYTE*)v245_.v246 + v34) = 0;
                } while (v26 != 0);
              }
              for (i = v25 & 7; i != 0; *((_BYTE*)v245_.v246 + v36) = 0) {
                v36 = SHIDWORD(v245_.v247);
                --i;
                ++HIDWORD(v245_.v247);
              }
              v24 = HIDWORD(v245_.v247);
            }
          }
          v245_.v261 = v24;
          v267_.v267 = v224;
          v267_.v268 = v23;
          RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                        (__int64)&v267_.v267);
          v37 = *(_QWORD*)v245_.v264;
          v21 = *(_WORD*)(v245_.v264 + 8);
          v38 = HIDWORD(*(_QWORD*)v245_.v264);
          v19 = (unsigned int)*(_QWORD*)v245_.v264;
          if (v38 != 0) {
            if (*game_map_history_g_record_alloc_retries_ptr[0] != 0) {
              v39 = 0;
              v40 = game_map_history_g_record_allocators_ptr
                  [0][(unsigned __int64)v37 < 0x100100000000LL];
              while (1) {
                v41 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v40, v38);
                if (v41 != 0) {
                  break;
                }
                v42 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10);
                v267_.v267 = (__int64*)v38;
                if (v42 == 0) {
                  goto LABEL_351;
                }
                (*(void (**)(__int64, __int64**))(*(_QWORD*)v42 + 48LL))(
                    v42, &v267_.v267);
                if ((unsigned int)++v39 >=
                    *game_map_history_g_record_alloc_retries_ptr[0]) {
                  v20 = 0;
                  goto LABEL_39;
                }
              }
              v20 = v41;
            LABEL_39:
              v3 = v223;
            }
            else {
              v20 = 0;
            }
            memcpy_alt1(v20, (__int64)v245_.v246 + v245_.v261, v37 >> 32);
            v18 = v37 & 0xFFFFFFFF00000000LL;
          }
          else {
            v18 = 0;
            v20 = 0;
          }
          v5 = (__int64*)fw_memory_g_heap_manager_ptr;
        }
        v43 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
        while (1) {
          v44 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v43, 0x30u);
          if (v44 != 0) {
            break;
          }
          v45 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10);
          v267_.v267 = (*(__int64 (*)[2])0x28LL) + 8;
          if (v45 == 0) {
            goto LABEL_351;
          }
          (*(void (**)(__int64, __int64**))(*(_QWORD*)v45 + 48LL))(v45,
                                                                   &v267_.v267);
        }
        *(_QWORD*)v44 = v227;
        *(_QWORD*)(v44 + 8) = 0;
        *(_BYTE*)(v44 + 19) = 2;
        *(_WORD*)(v44 + 20) = v240;
        v46 = *GameData_212ce90[0];
        if (*GameData_212ce90[0] != 0) {
          *(_WORD*)(v44 + 16) = *(_WORD*)(v46 + 26);
          LOBYTE(v46) = *(_BYTE*)(v46 + 24);
        }
        else {
          *(_WORD*)(v44 + 16) = 1;
        }
        *(_BYTE*)(v44 + 18) = v46;
        *(_WORD*)(v44 + 32) = v21;
        v47 = v44;
        *(_QWORD*)(v44 + 40) = v20;
        *(_QWORD*)v44 = v226;
        *(_QWORD*)(v44 + 24) = v19 | v18;
        if (v245_.v264 != 0) {
          v48 = *v5;
          v245_.v265 = v245_.v264;
          v49 = 128;
          if (*(_QWORD*)(v48 + 200) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v48 + v49, v245_.v264);
        }
        v50 = v245_.v262;
        v7 = v238;
        v245_.v262 = 0;
        if (v50 != 0) {
          v51 = 128;
          if (*(_QWORD*)(*v5 + 200) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v51, v50);
        }
        GameRoutine_65d6c0_alt1(&v245_.v245);
        Em = v47;
      }
      *(_QWORD*)(v7 + 8) = Em;
      v7 = Em;
    LABEL_10:
      if (++v9 == v241) {
        v2 = a1;
        v57 = 0;
        BYTE4(v225) = 1;
        v6 = GameData_2130ad0[0];
        goto LABEL_70;
      }
    }
  }
  v57 = 0;
LABEL_70:
  v58 = *(_QWORD**)(v2 + 848);
  v59 = *(_QWORD**)(v2 + 840);
  while (v58 != v59) {
    v75 = *--v58;
    v74 = v75;
    *v58 = 0;
    if (v75 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v74 + 8LL))(v74);
    }
  }
  v239 = v7;
  *(_QWORD*)(v2 + 848) = v59;
  v60 = *GameData_212ce90[0];
  v61 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v62 = v57 | BYTE4(v225) & ((_DWORD)v225 != v61);
  if (v62 == 1) {
    v63 = *(_BYTE*)(v2 + 10);
    *(_QWORD*)(v2 + 880) = 0;
    *(_QWORD*)(v2 + 888) = &GameData_1a9f09e;
    v64 = v3 == 1 && v61 == 0;
    *(_BYTE*)(v2 + 868) = -1;
    v65 = v61 | 0x80000000;
    *(_QWORD*)(v2 + 896) = 0;
    v66 = !v64;
    *(_QWORD*)(v2 + 904) = &GameData_1a9f09e;
    *(_QWORD*)(v2 + 912) = 0;
    *(_QWORD*)(v2 + 920) = &GameData_1a9f09e;
    *(_QWORD*)(v2 + 928) = 0;
    *(_QWORD*)(v2 + 936) = &GameData_1a9f09e;
    if ((((unsigned __int8)v66 | v63) & 1) == 0) {
      v65 = 0;
    }
    *(_DWORD*)(v2 + 864) = -16777215;
    *(_DWORD*)(v2 + 872) = v65;
    v61 = *(unsigned __int8*)(v60 + 24);
  }
  v67 = GameData_212d290;
  if (*(_BYTE*)(v60 + v61 + 16) == 1 && *(_QWORD*)GameData_212d290 != 0 &&
      *(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) == 1) {
    *(_BYTE*)(v2 + 865) |= 1u;
  }
  v68 = *v5;
  v245_.v259 = 0;
  v245_.v260 = 0;
  v245_.v257 = 0;
  v245_.v258 = 0;
  v245_.v255 = 0;
  v245_.v256 = 0;
  v245_.v253 = 0;
  v245_.v254 = 0;
  v245_.v251 = 0;
  v245_.v252 = 0;
  v245_.v249 = 0;
  v245_.v250 = 0;
  v245_.v247 = 0;
  v245_.v248 = 0;
  v245_.v246 = nullptr;
  v69 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v68, 491520, 16, 0);
  memset_alt1((__int64)(v69 + 4), 0, 0x77FE0u);
  v245_.v246 = v69;
  v245_.v247 = 491520;
  *v69 = 0;
  v69[1] = 0;
  v69[2] = 0;
  v69[3] = 0;
  v245_.v261 = 0;
  v245_.v262 = 0;
  v245_.v263 = 0;
  v245_.v264 = 0;
  v245_.v265 = 0;
  v245_.v266 = 0;
  v245_.v245 = (__int64)(v6 + 2);
  RecordSerializer_123d420_alt1((__int64)&v245_.v245);
  LODWORD(v267_.v267) = 511;
  v70 = game_UnitPool_GetFirst_alt1((int*)&v267_.v267);
  if (v70 != 0) {
    v71 = *(_QWORD*)(v70 + 432);
    if (v71 == 0) {
      v71 = *(_QWORD*)(v70 + 440);
      if (v71 != 0) {
        v72 = *(unsigned __int8*)(v71 + 16);
        if (v72 <= 8) {
          v222 = 24LL * *(unsigned __int8*)(v71 + 16) + 556024;
          while (1) {
            if (v72 <= 7) {
              v71 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v222);
              if (v71 != 0) {
                break;
              }
            }
            ++v72;
            v222 += 24;
            if (v72 == 9) {
              goto LABEL_89;
            }
          }
        }
        else {
        LABEL_89:
          v71 = 0;
        }
      }
    }
    v73 = GameData_2130ae0[0] + 2;
    while (1) {
    LABEL_95:
      v76 = v71;
      if ((v57 & 1) != 0 ||
          game_map_UnitFlags_instance_ != 0 &&
              (~*(unsigned __int8*)(game_map_UnitFlags_instance_ +
                                    *(unsigned __int8*)(v70 + 2088) + 8) &
               3) == 0) {
        v267_.v267 = v73;
        v267_.v268 = (__int64*)v70;
        RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                      (__int64)&v267_.v267);
      }
      if (v76 == 0) {
        break;
      }
      v71 = *(_QWORD*)(v76 + 432);
      v70 = v76;
      if (v71 == 0) {
        v77 = *(_QWORD*)(v76 + 440);
        v70 = v76;
        if (v77 != 0) {
          v78 = *(unsigned __int8*)(v77 + 16);
          v71 = 0;
          v70 = v76;
          if (v78 <= 8) {
            v79 = 24LL * (unsigned int)v78 + 556024;
            while (1) {
              if (v78 <= 7) {
                v71 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v79);
                if (v71 != 0) {
                  break;
                }
              }
              ++v78;
              v79 += 24;
              if (v78 == 9) {
                v71 = 0;
                v70 = v76;
                goto LABEL_95;
              }
            }
            v70 = v76;
          }
        }
      }
    }
  }
  if ((v57 & 1) != 0) {
    v267_.v267 = GameData_21309f8[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a00[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a08[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    LOBYTE(v267_.v268) = 0;
    v80 = GameData_2130ae8[0] + 2;
    v267_.v267 = GameData_2130ae8[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 1;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 3;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 4;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 5;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 6;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 7;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 8;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 9;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = v80;
    LOBYTE(v267_.v268) = 10;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v81 = a1;
  LABEL_110:
    v267_.v267 = GameData_2130ae8[0] + 2;
    LOBYTE(v267_.v268) = 11;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    goto LABEL_142;
  }
  v81 = a1;
  v82 = *(_DWORD*)(a1 + 12);
  if ((v82 & 1) != 0) {
    v267_.v267 = GameData_21309f8[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v82 = *(_DWORD*)(a1 + 12);
    if ((v82 & 0x400) == 0) {
    LABEL_113:
      if ((v82 & 2) == 0) {
        goto LABEL_114;
      }
      goto LABEL_118;
    }
  }
  else if ((v82 & 0x400) == 0) {
    goto LABEL_113;
  }
  v267_.v267 = GameData_2130a00[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  if ((*(_DWORD*)(a1 + 12) & 2) == 0) {
  LABEL_114:
    v83 = (_BYTE*)GameData_2240178;
    if (GameData_2240178 == 0) {
      goto LABEL_142;
    }
    goto LABEL_119;
  }
LABEL_118:
  v267_.v267 = GameData_2130a08[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v83 = (_BYTE*)GameData_2240178;
  if (GameData_2240178 == 0) {
    goto LABEL_142;
  }
LABEL_119:
  if ((v83[9] & 1) == 0 ||
      (LOBYTE(v267_.v268) = 0, v267_.v267 = GameData_2130ae8[0] + 2,
       RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                     (__int64)&v267_.v267),
       v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
    if ((v83[41] & 1) == 0 ||
        (v267_.v267 = GameData_2130ae8[0] + 2, LOBYTE(v267_.v268) = 1,
         RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                       (__int64)&v267_.v267),
         v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
      if ((v83[73] & 1) == 0 ||
          (v267_.v267 = GameData_2130ae8[0] + 2, LOBYTE(v267_.v268) = 2,
           RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                         (__int64)&v267_.v267),
           v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
        if ((v83[105] & 1) == 0 ||
            (v267_.v267 = GameData_2130ae8[0] + 2, LOBYTE(v267_.v268) = 3,
             RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                           (__int64)&v267_.v267),
             v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
          if ((v83[137] & 1) == 0 ||
              (v267_.v267 = GameData_2130ae8[0] + 2, LOBYTE(v267_.v268) = 4,
               RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                             (__int64)&v267_.v267),
               v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
            if ((v83[169] & 1) == 0 ||
                (v267_.v267 = GameData_2130ae8[0] + 2, LOBYTE(v267_.v268) = 5,
                 RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                               (__int64)&v267_.v267),
                 v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
              if ((v83[201] & 1) == 0 ||
                  (v267_.v267 = GameData_2130ae8[0] + 2, LOBYTE(v267_.v268) = 6,
                   RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                                 (__int64)&v267_.v267),
                   v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
                if ((v83[233] & 1) == 0 ||
                    (v267_.v267 = GameData_2130ae8[0] + 2,
                     LOBYTE(v267_.v268) = 7,
                     RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                                   (__int64)&v267_.v267),
                     v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
                  if ((v83[265] & 1) == 0 ||
                      (v267_.v267 = GameData_2130ae8[0] + 2,
                       LOBYTE(v267_.v268) = 8,
                       RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                                     (__int64)&v267_.v267),
                       v83 = (_BYTE*)GameData_2240178, GameData_2240178 != 0)) {
                    if ((v83[297] & 1) == 0 ||
                        (v267_.v267 = GameData_2130ae8[0] + 2,
                         LOBYTE(v267_.v268) = 9,
                         RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                                       (__int64)&v267_.v267),
                         v83 = (_BYTE*)GameData_2240178,
                         GameData_2240178 != 0)) {
                      if ((v83[329] & 1) == 0 ||
                          (v267_.v267 = GameData_2130ae8[0] + 2,
                           LOBYTE(v267_.v268) = 10,
                           RecordSerializer_123d650_alt1((__int64)&v245_.v245,
                                                         (__int64)&v267_.v267),
                           v83 = (_BYTE*)GameData_2240178,
                           GameData_2240178 != 0)) {
                        if ((v83[361] & 1) != 0) {
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
  if ((v62 & 1) != 0 ||
      *(_QWORD*)v67 != 0 &&
          (*(_BYTE*)(*GameData_212ce90[0] +
                     *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) !=
               1 ||
           *(_BYTE*)(*(_QWORD*)v67 + 30LL) == 1)) {
    v267_.v267 = GameData_2130a10[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  }
  v267_.v267 = GameData_2130a18[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  if ((v57 & 1) != 0) {
    v267_.v267 = GameData_2130a20[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a28[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a30[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a38[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a40[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a48[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a50[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a58[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a60[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a68[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a70[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a78[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a80[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v267_.v267 = GameData_2130a88[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v84 = v245_.v264;
    v85 = v245_.v262;
    v86 = v245_.v263;
    v87 = game_map_history_g_record_allocators_ptr[0];
    v88 = game_map_history_g_record_alloc_retries_ptr[0];
    v89 = 0xAAAAAAAAAAAAAAABLL * ((v245_.v265 - v245_.v264) >> 2);
    v90 = (unsigned __int16)(-21845 * ((v245_.v265 - v245_.v264) >> 2));
    v91 = v90 + 2LL * (unsigned __int16)v89;
    v92 = v90 < 0x156;
    v93 = 4 * v91;
    if (*game_map_history_g_record_alloc_retries_ptr[0] != 0) {
      v94 = game_map_history_g_record_allocators_ptr[0][v92];
      v95 = 0;
      v96 = game_map_history_g_record_alloc_failed_ptr;
      do {
        v97 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v94, v93);
        if (v97 != 0) {
          break;
        }
        v98 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v96);
        v267_.v267 = (__int64*)v93;
        if (v98 == 0) {
          goto LABEL_351;
        }
        (*(void (**)(__int64, __int64**))(*(_QWORD*)v98 + 48LL))(v98,
                                                                 &v267_.v267);
        ++v95;
      } while (v95 < *v88);
      v84 = v245_.v264;
      v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    }
    else {
      v97 = 0;
    }
    memcpy_alt1(v97, v84, v93);
    if (*v88 != 0) {
      v149 = v87[(unsigned int)v86 <= 0x1000];
      v150 = 0;
      v151 = game_map_history_g_record_alloc_failed_ptr;
      while (1) {
        v152 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v149, v86);
        if (v152 != 0) {
          break;
        }
        v153 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v151);
        v267_.v267 = (__int64*)v86;
        if (v153 == 0) {
          goto LABEL_351;
        }
        (*(void (**)(__int64, __int64**))(*(_QWORD*)v153 + 48LL))(v153,
                                                                  &v267_.v267);
        if (++v150 >= (unsigned int)*v88) {
          goto LABEL_262;
        }
      }
    }
    else {
    LABEL_262:
      v152 = 0;
    }
    v154 = v152;
    memcpy_alt1(v152, v85, v86);
    v155 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v87);
    v156 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v155, 0x80u);
    v157 = a1;
    if (v156 == 0) {
      v158 = game_map_history_g_record_alloc_failed_ptr;
      while (1) {
        v159 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v158);
        v267_.v267 = (_QWORD*)(((_UNKNOWN*)0x7CLL) + 4);
        if (v159 == 0) {
          break;
        }
        (*(void (**)(__int64, __int64**))(*(_QWORD*)v159 + 48LL))(v159,
                                                                  &v267_.v267);
        v156 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v155, 0x80u);
        if (v156 != 0) {
          goto LABEL_267;
        }
      }
    LABEL_351:
      GameRoutine_60a310_alt1();
    }
  LABEL_267:
    v160 = GameData_2130a90[0];
    *(_BYTE*)(v156 + 19) = 0;
    *(_QWORD*)v156 = v160 + 2;
    *(_QWORD*)(v156 + 8) = 0;
    *(_WORD*)(v156 + 20) = v240;
    v161 = v230;
    v162 = v229;
    v163 = v239;
    v164 = *GameData_212ce90[0];
    if (*GameData_212ce90[0] != 0) {
      *(_WORD*)(v156 + 16) = *(_WORD*)(v164 + 26);
      LOBYTE(v164) = *(_BYTE*)(v164 + 24);
    }
    else {
      *(_WORD*)(v156 + 16) = 1;
    }
    v177 = GameData_2130a98[0];
    *(_BYTE*)(v156 + 18) = v164;
    *(_WORD*)(v156 + 22) = v89;
    *(_DWORD*)(v156 + 24) = v86;
    *(_QWORD*)(v156 + 32) = v97;
    *(_QWORD*)(v156 + 40) = v154;
    v178 = v156;
    *(_QWORD*)v156 = v177 + 2;
    *(_BYTE*)(v156 + 48) = *(_BYTE*)(a1 + 864);
    *(_BYTE*)(v156 + 49) = *(_BYTE*)(a1 + 865);
    *(_BYTE*)(v156 + 50) = *(_BYTE*)(a1 + 866);
    *(_BYTE*)(v156 + 51) = *(_BYTE*)(a1 + 867);
    *(_BYTE*)(v156 + 52) = *(_BYTE*)(a1 + 868);
    *(_DWORD*)(v156 + 56) = *(_DWORD*)(a1 + 872);
    *(_QWORD*)(v156 + 64) = *(_QWORD*)(a1 + 880);
    *(_QWORD*)(v156 + 72) = *(_QWORD*)(a1 + 888);
    *(_QWORD*)(v156 + 80) = *(_QWORD*)(a1 + 896);
    *(_QWORD*)(v156 + 88) = *(_QWORD*)(a1 + 904);
    *(_QWORD*)(v156 + 96) = *(_QWORD*)(a1 + 912);
    *(_QWORD*)(v156 + 104) = *(_QWORD*)(a1 + 920);
    *(_QWORD*)(v156 + 112) = *(_QWORD*)(a1 + 928);
    *(_QWORD*)(v156 + 120) = *(_QWORD*)(a1 + 936);
    v179 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v5, 8, 16, 0);
    *v179 = v178;
    v180 = v179 + 1;
    goto LABEL_317;
  }
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x20) != 0) {
    v267_.v267 = GameData_2130a20[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
    v99 = *(_DWORD*)(v81 + 12);
    if ((v99 & 0x40) == 0) {
    LABEL_156:
      if ((v99 & 0x80) == 0) {
        goto LABEL_157;
      }
      goto LABEL_244;
    }
  }
  else if ((v99 & 0x40) == 0) {
    goto LABEL_156;
  }
  v267_.v267 = GameData_2130a28[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x80) == 0) {
  LABEL_157:
    if ((v99 & 0x100) == 0) {
      goto LABEL_158;
    }
    goto LABEL_245;
  }
LABEL_244:
  v267_.v267 = GameData_2130a30[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x100) == 0) {
  LABEL_158:
    if ((v99 & 0x200) == 0) {
      goto LABEL_159;
    }
    goto LABEL_246;
  }
LABEL_245:
  v267_.v267 = GameData_2130a38[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x200) == 0) {
  LABEL_159:
    if ((v99 & 0x800) == 0) {
      goto LABEL_160;
    }
    goto LABEL_247;
  }
LABEL_246:
  v267_.v267 = GameData_2130a40[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x800) == 0) {
  LABEL_160:
    if ((v99 & 0x2000) == 0) {
      goto LABEL_161;
    }
    goto LABEL_248;
  }
LABEL_247:
  v267_.v267 = GameData_2130a48[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x2000) == 0) {
  LABEL_161:
    if ((v99 & 0x4000) == 0) {
      goto LABEL_162;
    }
    goto LABEL_249;
  }
LABEL_248:
  v267_.v267 = GameData_2130a50[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x4000) == 0) {
  LABEL_162:
    if ((v99 & 0x8000) == 0) {
      goto LABEL_163;
    }
    goto LABEL_250;
  }
LABEL_249:
  v267_.v267 = GameData_2130a58[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x8000) == 0) {
  LABEL_163:
    if ((v99 & 0x10000) == 0) {
      goto LABEL_164;
    }
    goto LABEL_251;
  }
LABEL_250:
  v267_.v267 = GameData_2130a60[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x10000) == 0) {
  LABEL_164:
    if ((v99 & 0x20000) == 0) {
      goto LABEL_165;
    }
    goto LABEL_252;
  }
LABEL_251:
  v267_.v267 = GameData_2130a68[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x20000) == 0) {
  LABEL_165:
    if ((v99 & 0x40000) == 0) {
      goto LABEL_166;
    }
    goto LABEL_253;
  }
LABEL_252:
  v267_.v267 = GameData_2130a70[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x40000) == 0) {
  LABEL_166:
    if ((v99 & 0x80000) == 0) {
      goto LABEL_167;
    }
    goto LABEL_254;
  }
LABEL_253:
  v267_.v267 = GameData_2130a78[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  v99 = *(_DWORD*)(v81 + 12);
  if ((v99 & 0x80000) == 0) {
  LABEL_167:
    if ((v99 & 0x100000) == 0) {
      goto LABEL_169;
    }
    goto LABEL_168;
  }
LABEL_254:
  v267_.v267 = GameData_2130a80[0] + 2;
  RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  if ((*(_DWORD*)(v81 + 12) & 0x100000) != 0) {
  LABEL_168:
    v267_.v267 = GameData_2130a88[0] + 2;
    RecordSerializer_123d650_alt1((__int64)&v245_.v245, (__int64)&v267_.v267);
  }
LABEL_169:
  v100 = v245_.v264;
  v101 = v245_.v265;
  if (v245_.v265 != v245_.v264) {
    if (0xAAAAAAAAAAAAAAABLL * ((v245_.v265 - v245_.v264) >> 2) >
        0x555555555555555LL) {
    LABEL_352:
      GameRoutine_122fad0_alt1();
    }
    v102 = (v245_.v265 - v245_.v264) >> 2;
    v103 = v245_.v262;
    v104 = *(_QWORD*)(v230 + 8LL * v229);
    v105 = fw_memory_HeapManager_Allocate_alt1(*v5, 16 * v102, 16, 0);
    v106 = v105 + 16 * v102;
    v107 = v105;
    v108 = v103;
    v109 = v105;
    v242 = v106;
    v235 = (__int64*)(v104 + 40);
    while (1) {
      if (v104 == 0) {
        goto LABEL_187;
      }
      v115 = *(unsigned __int8*)(v100 + 8);
      v116 = 0;
      for (j = v104; j != 0; j = *(_QWORD*)(j + 8)) {
        if (*(_BYTE*)(j + 19) == 2 && *(unsigned __int8*)(j + 32) == v115 &&
            (v115 != 3 && *(_BYTE*)(v100 + 8) != 0 ||
             *(unsigned __int8*)(j + 33) == *(unsigned __int8*)(v100 + 9))) {
          v116 = j;
        }
      }
      if (v116 != 0) {
        v118 = (__int64*)(v116 + 24);
        v119 = *(_QWORD*)(v116 + 40);
        if (v119 == 0) {
          goto LABEL_173;
        }
      }
      else {
      LABEL_187:
        v120 = *(unsigned __int16*)(v104 + 22);
        if (*(_WORD*)(v104 + 22) != 0) {
          v118 = *(__int64**)(v104 + 32);
          v121 = *(unsigned __int8*)(v100 + 8);
          while (*((unsigned __int8*)v118 + 8) != v121 ||
                 (v121 == 3 || *(_BYTE*)(v100 + 8) == 0) &&
                     *((unsigned __int8*)v118 + 9) !=
                         *(unsigned __int8*)(v100 + 9)) {
            --v120;
            v118 = (__int64*)((char*)v118 + 12);
            if (v120 == 0) {
              goto LABEL_196;
            }
          }
          v119 = *v235;
          if (*v235 == 0) {
            goto LABEL_173;
          }
        }
        else {
        LABEL_196:
          if (GameData_22408e8 == 0) {
            goto LABEL_173;
          }
          v122 = *(_QWORD*)(GameData_22408e8 + 8);
          if (v122 == 0) {
            goto LABEL_173;
          }
          v123 = *(unsigned __int8*)(v100 + 8);
          while (*(unsigned __int8*)(v122 + 32) != v123 ||
                 (v123 == 3 || *(_BYTE*)(v100 + 8) == 0) &&
                     *(unsigned __int8*)(v122 + 33) !=
                         *(unsigned __int8*)(v100 + 9)) {
            v122 = *(_QWORD*)(v122 + 8);
            if (v122 == 0) {
              goto LABEL_173;
            }
          }
          v118 = (__int64*)(v122 + 24);
          v119 = *(_QWORD*)(v122 + 40);
          if (v119 == 0) {
            goto LABEL_173;
          }
        }
      }
      v267_.v267 =
          (__int64*)fw_memory_HeapManager_Allocate_alt1(*v5, 1536, 16, 0);
      v267_.v268 = v267_.v267;
      v267_.v269 = v267_.v267 + 192;
      GameHr_1232280((__int64)&v267_.v267, v119, (unsigned int*)v118, v108,
                     (unsigned int*)v100);
      v124 = (__int64)v267_.v267;
      if (v267_.v268 == v267_.v267) {
        v145 = *(_QWORD*)(v104 + 8);
        if (v145 == 0) {
        LABEL_230:
          v130 = v107;
          if (v267_.v267 == nullptr) {
          LABEL_228:
            v107 = v130;
            goto LABEL_173;
          }
        LABEL_225:
          v143 = *v5;
          v267_.v268 = (__int64*)v124;
          v144 = 56;
          if (*(_QWORD*)(v143 + 200) != 0) {
            v144 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(v143 + v144, v124);
          goto LABEL_228;
        }
        while (1) {
          if (*(_BYTE*)(v145 + 19) == 1) {
            v146 = *(unsigned __int16*)(v145 + 22);
            if (*(_WORD*)(v145 + 22) != 0) {
              break;
            }
          }
        LABEL_232:
          v145 = *(_QWORD*)(v145 + 8);
          if (v145 == 0) {
            goto LABEL_230;
          }
        }
        v147 = *(unsigned __int8*)(v100 + 8);
        v148 = (unsigned __int8*)(*(_QWORD*)(v145 + 24) + 9LL);
        while (*(v148 - 1) != v147 ||
               (v147 == 3 || *(_BYTE*)(v100 + 8) == 0) &&
                   *v148 != *(unsigned __int8*)(v100 + 9)) {
          v148 += 24;
          if (--v146 == 0) {
            goto LABEL_232;
          }
        }
      }
      if (v109 >= v242) {
        v125 = 1 - 0x5555555555555555LL * ((__int64)(v109 - v107) >> 4);
        if (v125 > 0x555555555555555LL) {
          goto LABEL_352;
        }
        if (0x5555555555555556LL * ((__int64)(v242 - v107) >> 4) > v125) {
          v125 = 0x5555555555555556LL * ((__int64)(v242 - v107) >> 4);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v242 - v107) >> 4) >=
            0x2AAAAAAAAAAAAAALL) {
          v125 = 0x555555555555555LL;
        }
        if (v125 > 0x555555555555555LL) {
          GameRoutine_60a210_alt1();
        }
        v243 = 3 * v125;
        v126 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v125, 16, 0);
        v127 = *v118;
        v128 = *((_DWORD*)v118 + 2);
        v129 = v126 + v109 - v107;
        v130 = v126;
        *(_WORD*)(v129 + 12) = 0;
        *(_DWORD*)(v129 + 8) = v128;
        *(_QWORD*)v129 = v127;
        v131 = v267_.v267;
        v132 = v267_.v268;
        v267_.v267 = nullptr;
        v267_.v268 = nullptr;
        *(_QWORD*)(v129 + 16) = 0;
        *(_QWORD*)(v129 + 24) = v131;
        v133 = v267_.v269;
        v267_.v269 = nullptr;
        *(_QWORD*)(v129 + 32) = v132;
        *(_QWORD*)(v129 + 40) = v133;
        if (v107 != v109) {
          v134 = (__int64*)v107;
          v135 = (_QWORD*)v126;
          do {
            v136 = *v134;
            v137 = v134[1];
            v138 = v134[2];
            v135[4] = 0;
            v135[5] = 0;
            *v135 = v136;
            v135[1] = v137;
            v135[2] = v138;
            v135[3] = 0;
            v135[3] = v134[3];
            v135[4] = v134[4];
            v135[5] = v134[5];
            v134[4] = 0;
            v134[5] = 0;
            v134[3] = 0;
            v134 += 6;
            v135 += 6;
          } while (v134 != (__int64*)v109);
          v139 = v107;
          do {
            v140 = *(_QWORD*)(v139 + 24);
            if (v140 != 0) {
              *(_QWORD*)(v139 + 32) = v140;
              v141 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v141 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v141, v140);
            }
            v139 += 48;
          } while (v139 != v109);
        }
        v109 = v129 + 48;
        v242 = v130 + 16 * v243;
        v5 = (__int64*)fw_memory_g_heap_manager_ptr;
        v142 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v142 = 128;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v142, v107);
        v124 = (__int64)v267_.v267;
        if (v267_.v267 == nullptr) {
          goto LABEL_228;
        }
        goto LABEL_225;
      }
      v110 = *v118;
      v111 = *((_DWORD*)v118 + 2);
      *(_WORD*)(v109 + 12) = 0;
      *(_DWORD*)(v109 + 8) = v111;
      *(_QWORD*)v109 = v110;
      v112 = v267_.v267;
      v113 = v267_.v268;
      *(_QWORD*)(v109 + 16) = 0;
      *(_QWORD*)(v109 + 24) = v112;
      v114 = v267_.v269;
      *(_QWORD*)(v109 + 32) = v113;
      *(_QWORD*)(v109 + 40) = v114;
      v109 += 48LL;
    LABEL_173:
      v100 += 12;
      if (v100 == v101) {
        goto LABEL_270;
      }
    }
  }
  v109 = 0;
  v107 = 0;
LABEL_270:
  v165 = (__int64)(v109 - v107) >> 4;
  v166 = -21845 * v165;
  v167 = (unsigned __int16)(-21845 * v165);
  if (-21845 * (_WORD)v165 != 0) {
    v228 = -21845 * v165;
    v168 = game_map_history_g_record_alloc_retries_ptr[0];
    v233 = (unsigned __int16)(-21845 * v165);
    v244 = v107;
    if (*game_map_history_g_record_alloc_retries_ptr[0] != 0) {
      v169 = game_map_history_g_record_allocators_ptr[0][v167 < 0xAB];
      v170 = 3 * v167;
      v171 = 0;
      v172 = game_map_history_g_record_alloc_failed_ptr;
      v173 = 8 * v170;
      while (1) {
        v174 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v169, v173);
        if (v174 != 0) {
          break;
        }
        v175 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v172);
        v267_.v267 = (__int64*)v173;
        if (v175 == 0) {
          goto LABEL_351;
        }
        (*(void (**)(__int64, __int64**))(*(_QWORD*)v175 + 48LL))(v175,
                                                                  &v267_.v267);
        if (++v171 >= (unsigned int)*v168) {
          v176 = 0;
          goto LABEL_282;
        }
      }
      v176 = v174;
    LABEL_282:
      v167 = v233;
    }
    else {
      v176 = 0;
    }
    v181 = 0;
    v182 = game_map_history_g_record_alloc_failed_ptr;
    v236 = v176;
    do {
      v186 = v244 + 48 * v181;
      v187 = *(_QWORD*)(v186 + 24);
      v188 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v186 + 32) - v187) >> 3);
      v189 = (unsigned __int16)(-21845 * ((*(_QWORD*)(v186 + 32) - v187) >> 3));
      if (-21845 * (unsigned __int16)((*(_QWORD*)(v186 + 32) - v187) >> 3) !=
          0) {
        v190 = 24 * v189;
        v191 = v189 < 0xAB;
        if (*v168 != 0) {
          v192 = 0;
          v193 = game_map_history_g_record_allocators_ptr[0][v191];
          do {
            v183 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v193, v190);
            if (v183 != 0) {
              break;
            }
            v194 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v182);
            v267_.v267 = (__int64*)v190;
            if (v194 == 0) {
              goto LABEL_351;
            }
            (*(void (**)(__int64, __int64**))(*(_QWORD*)v194 + 48LL))(
                v194, &v267_.v267);
            ++v192;
          } while (v192 < *v168);
          v187 = *(_QWORD*)(v186 + 24);
          v167 = v233;
          v176 = v236;
        }
        else {
          v183 = 0;
        }
        memcpy_alt1(v183, v187, v190);
      }
      else {
        v183 = 0;
      }
      *(_WORD*)(v186 + 12) = v188;
      *(_QWORD*)(v186 + 16) = v183;
      v184 = *(_QWORD*)v186;
      v185 = (_QWORD*)(v176 + 24 * v181++);
      v185[1] = *(_QWORD*)(v186 + 8);
      v185[2] = v183;
      *v185 = v184;
    } while (v181 != v167);
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v161 = v230;
    v162 = v229;
    v107 = v244;
    v166 = v228;
  }
  else {
    v161 = v230;
    v162 = v229;
    v176 = 0;
  }
  v195 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
  v196 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v195, 0x70u);
  v157 = a1;
  if (v196 == 0) {
    v237 = v176;
    v197 = game_map_history_g_record_alloc_failed_ptr;
    do {
      v198 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v197);
      v267_.v267 = (_QWORD*)((_UNKNOWN*)0x70LL);
      if (v198 == 0) {
        goto LABEL_351;
      }
      (*(void (**)(__int64, __int64**))(*(_QWORD*)v198 + 48LL))(v198,
                                                                &v267_.v267);
      v196 = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v195, 0x70u);
    } while (v196 == 0);
    v176 = v237;
  }
  v199 = GameData_2130a90[0];
  *(_BYTE*)(v196 + 19) = 1;
  *(_QWORD*)v196 = v199 + 2;
  *(_QWORD*)(v196 + 8) = 0;
  *(_WORD*)(v196 + 20) = v240;
  v200 = *GameData_212ce90[0];
  if (*GameData_212ce90[0] != 0) {
    *(_WORD*)(v196 + 16) = *(_WORD*)(v200 + 26);
    LOBYTE(v200) = *(_BYTE*)(v200 + 24);
  }
  else {
    *(_WORD*)(v196 + 16) = 1;
  }
  *(_BYTE*)(v196 + 18) = v200;
  v201 = v196;
  v202 = GameData_2130aa0[0];
  *(_WORD*)(v196 + 22) = v166;
  *(_QWORD*)(v196 + 24) = v176;
  *(_QWORD*)v196 = v202 + 2;
  *(_BYTE*)(v196 + 32) = *(_BYTE*)(a1 + 864);
  *(_BYTE*)(v196 + 33) = *(_BYTE*)(a1 + 865);
  *(_BYTE*)(v196 + 34) = *(_BYTE*)(a1 + 866);
  *(_BYTE*)(v196 + 35) = *(_BYTE*)(a1 + 867);
  *(_BYTE*)(v196 + 36) = *(_BYTE*)(a1 + 868);
  *(_DWORD*)(v196 + 40) = *(_DWORD*)(a1 + 872);
  *(_QWORD*)(v196 + 48) = *(_QWORD*)(a1 + 880);
  *(_QWORD*)(v196 + 56) = *(_QWORD*)(a1 + 888);
  *(_QWORD*)(v196 + 64) = *(_QWORD*)(a1 + 896);
  *(_QWORD*)(v196 + 72) = *(_QWORD*)(a1 + 904);
  *(_QWORD*)(v196 + 80) = *(_QWORD*)(a1 + 912);
  *(_QWORD*)(v196 + 88) = *(_QWORD*)(a1 + 920);
  *(_QWORD*)(v196 + 96) = *(_QWORD*)(a1 + 928);
  *(_QWORD*)(v196 + 104) = *(_QWORD*)(a1 + 936);
  v203 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v5, 8, 16, 0);
  *v203 = v201;
  v180 = v203 + 1;
  v179 = v203;
  if (v107 != 0) {
    for (; v109 != v107; v109 -= 48LL) {
      v204 = *(_QWORD*)(v109 - 24);
      if (v204 != 0) {
        *(_QWORD*)(v109 - 16) = v204;
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v205 = 128;
        }
        else {
          v205 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v5 + v205, v204);
      }
    }
    v206 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v206 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v206, v107);
  }
  v163 = v239;
LABEL_317:
  v207 = v179;
  do {
    v208 = *v207;
    if (v163 != 0) {
      *(_QWORD*)(v163 + 8) = v208;
    }
    else {
      *(_QWORD*)(v161 + 8LL * v162) = v208;
    }
    ++v207;
    v163 = v208;
  } while (v207 != v180);
  v209 = *(v180 - 1);
  v210 = 0;
  v211 = 0;
  *(_WORD*)(v157 + 828) = *(_WORD*)(v209 + 16);
  *(_WORD*)(v157 + 830) = *(_WORD*)(v209 + 20);
  do {
    for (k = *(_QWORD**)(v161 + 8 * v210); k != nullptr; v211 += v213 & 1) {
      v213 = (*(__int64 (**)(_QWORD*))(*k + 48LL))(k);
      k = (_QWORD*)k[1];
    }
    ++v210;
  } while (v210 != 100);
  *(_DWORD*)(v157 + 824) = v211;
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
  *(_DWORD*)(v157 + 12) = 0;
  *(_WORD*)(v157 + 16) = 0;
  if (*GameData_2130ad8[0] != 0) {
    GameHr_6c3050(*GameData_2130ad8[0]);
  }
  *(_DWORD*)(v157 + 872) = 0;
  *(_QWORD*)(v157 + 880) = 0;
  *(_QWORD*)(v157 + 896) = 0;
  *(_QWORD*)(v157 + 912) = 0;
  *(_QWORD*)(v157 + 928) = 0;
  *(_DWORD*)(v157 + 864) = -16777216;
  *(_BYTE*)(v157 + 868) = -1;
  *(_QWORD*)(v157 + 888) = &GameData_1a9f09e;
  *(_QWORD*)(v157 + 904) = &GameData_1a9f09e;
  *(_QWORD*)(v157 + 920) = &GameData_1a9f09e;
  *(_QWORD*)(v157 + 936) = &GameData_1a9f09e;
  v217 = 128;
  if (*(_QWORD*)(*v5 + 200) == 0) {
    v217 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v5 + v217, (__int64)v179);
  if (v245_.v264 != 0) {
    v218 = *v5;
    v245_.v265 = v245_.v264;
    v219 = 128;
    if (*(_QWORD*)(v218 + 200) == 0) {
      v219 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v218 + v219, v245_.v264);
  }
  v220 = v245_.v262;
  v245_.v262 = 0;
  if (v220 != 0) {
    v221 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v221 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v221, v220);
  }
  GameRoutine_65d6c0_alt1(&v245_.v245);
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

  if (a2 >= *(int*)(a1 + 824)) {
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

__int64 game_map_history_122b460(__int64 result)
{
  int v1;
  __int64 v2;
  int v3;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64* v13;
  unsigned __int64 v14;
  void (**v15)(unsigned __int64);
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  void (**v23)(unsigned __int64);
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  int v28;
  _QWORD* i;
  char v30;
  __int64 v31;
  __int64 v32;

  if (*(_BYTE*)(result + 8) != 2) {
    return result;
  }
  v1 = *(unsigned __int16*)(result + 832);
  v2 = result;
  if (*(_WORD*)(result + 832) == 0) {
    return result;
  }
  v3 = *(unsigned __int16*)(result + 834);
  if (v1 == *(unsigned __int16*)(result + 828) &&
      v3 == *(unsigned __int16*)(result + 830)) {
    return result;
  }
  v5 = result + 24;
  v6 = *(_QWORD*)(result + 24 +
                  8LL * (*(unsigned __int16*)(result + 832) % 0x64u));
  if (v6 == 0 || *(unsigned __int16*)(v6 + 16) != v1) {
    return result;
  }
  v7 = false;
  v8 = 0;
  while (1) {
    while (1) {
      v9 = *(unsigned __int16*)(v6 + 20);
      v10 = v6;
      if (v7) {
        break;
      }
      v6 = *(_QWORD*)(v6 + 8);
      v7 = v9 == v3;
      v8 = v10;
      if (v6 == 0) {
        if (v9 == v3) {
        LABEL_26:
          *(_QWORD*)(v10 + 8) = 0;
          goto LABEL_27;
        }
        return result;
      }
    }
    if (v9 != v3) {
      break;
    }
    v6 = *(_QWORD*)(v6 + 8);
    v7 = true;
    v8 = v10;
    if (v6 == 0) {
      goto LABEL_26;
    }
  }
  if (v8 == 0) {
    return result;
  }
  v11 = *(_QWORD*)(v8 + 8);
  *(_QWORD*)(v8 + 8) = 0;
  if (v11 != 0) {
    v12 = game_map_history_g_record_region_ptr[0];
    v13 = game_map_history_g_record_allocators_ptr[0];
    while (1) {
      v14 = v11;
      v15 = *(void (***)(unsigned __int64))v11;
      v11 = *(_QWORD*)(v11 + 8);
      (*v15)(v14);
      if ((_UNKNOWN*)v14 >=
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12)) {
        break;
      }
      if (v14 >= *v12) {
        v16 = 0;
        goto LABEL_23;
      }
    LABEL_18:
      if (v11 == 0) {
        goto LABEL_27;
      }
    }
    v16 = 1;
  LABEL_23:
    v17 = v13[v16];
    if (v17 != 0) {
      nn_mem_StandardAllocator_Free_alt1(v17, v14);
    }
    goto LABEL_18;
  }
LABEL_27:
  v18 = 0;
  v19 = game_map_history_g_record_region_ptr[0];
  v20 = game_map_history_g_record_allocators_ptr[0];
  while (2) {
    v21 = *(_QWORD*)(v5 + 8 * v18);
    if (v21 != 0 && *(unsigned __int16*)(v21 + 16) >
                        (unsigned int)*(unsigned __int16*)(v2 + 832)) {
      while (1) {
        v22 = v21;
        v23 = *(void (***)(unsigned __int64))v21;
        v21 = *(_QWORD*)(v21 + 8);
        (*v23)(v22);
        if ((_UNKNOWN*)v22 <
            *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19)) {
          break;
        }
        v24 = v20[1];
        if (v24 != 0) {
          goto LABEL_39;
        }
      LABEL_33:
        if (v21 == 0) {
          *(_QWORD*)(v5 + 8 * v18) = 0;
          goto LABEL_29;
        }
      }
      if (v22 < *v19) {
        goto LABEL_33;
      }
      v24 = *v20;
      if (*v20 == 0) {
        goto LABEL_33;
      }
    LABEL_39:
      nn_mem_StandardAllocator_Free_alt1(v24, v22);
      goto LABEL_33;
    }
  LABEL_29:
    if (++v18 != 100) {
      continue;
    }
    break;
  }
  v25 = *(_QWORD**)(v2 + 848);
  v26 = *(_QWORD**)(v2 + 840);
  *(_DWORD*)(v2 + 828) = *(_DWORD*)(v2 + 832);
  while (v25 != v26) {
    v32 = *--v25;
    v31 = v32;
    *v25 = 0;
    if (v32 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
    }
  }
  v27 = 0;
  v28 = 0;
  *(_QWORD*)(v2 + 848) = v26;
  do {
    for (i = *(_QWORD**)(v5 + 8 * v27); i != nullptr; v28 += v30 & 1) {
      v30 = (*(__int64 (**)(_QWORD*))(*i + 48LL))(i);
      i = (_QWORD*)i[1];
    }
    ++v27;
  } while (v27 != 100);
  *(_DWORD*)(v2 + 824) = v28;
  GameHr_12a6020();
  *(_DWORD*)(v2 + 832) = 0;
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    GameRoutine_a35760_alt1(*game_sound_g_game_sound_ptr[0]);
  }
  GameSubquestData_125bbc0_alt1(*(_QWORD*)GameData_212c7b0[0]);
  result = *GameData_212d580[0];
  if (*GameData_212d580[0] != 0) {
    result = MapScoreInfo_19aad80_alt1(result);
  }
  *(_BYTE*)(v2 + 8) = 1;
  return result;
}

void game_map_history_122b760(__int64 a1)
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
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  char v42;
  int v43;
  __int64 v44;
  __int64 v45;
  char v46;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  __int64 v50;
  _BYTE* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  _QWORD* v61;
  __int64 (**v62)(_QWORD*);
  const char* v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  __int64 (**v70)(__int64);
  const char* v71;
  unsigned int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 (***v83)();
  int v84;
  unsigned int v85;
  int v86;
  _QWORD* v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  unsigned int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  unsigned __int64 v106;
  int v107;
  int v108;
  unsigned int v109;
  int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  int v116;
  int v117;
  __int64 v118;
  int v119;
  int v120;
  int v121;
  int v122;
  __int64 v123;
  int v124;
  int v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  unsigned int v130;
  __int64 v131;
  __int64 v132;
  __int64 (***v133)();
  __int64 v134;
  __int64 v135;
  unsigned __int8* v136;
  unsigned __int64 v137;
  bool v138;
  unsigned __int64 v139;
  const char* v140;
  __int64 (***v141)();
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64* v145;
  __int64 v146;
  int v147;
  __int64 v148;
  int v149;
  __int64 v150;
  __int64* v151;
  int v152;
  __int64 v153;
  __int64* v154[3];
  char v155[4];
  char v156[4];
  _QWORD v157[3];
  struct {
    _QWORD v158[2];
    _QWORD* v159;
    char gap104_[8];
    _QWORD* v160;
  } v158_;

  v154[0] = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 2048, 16, 0);
  v154[1] = v154[0];
  v154[2] = v154[0] + 256;
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
  LODWORD(v158_.v158[0]) = 0;
  Stream_Unknown2_alt1(a1 + 944, (unsigned int*)v158_.v158);
  GameHr_122cae0(a1 + 944, 0);
  GameHr_122cae0(a1 + 944, 1u);
  GameHr_122cae0(a1 + 944, 2u);
  GameHr_122cae0(a1 + 944, 3u);
  GameHr_122cae0(a1 + 944, 4u);
  GameHr_122cae0(a1 + 944, 5u);
  GameHr_122cae0(a1 + 944, 6u);
  GameHr_122cae0(a1 + 944, 7u);
  GameHr_122cae0(a1 + 944, 8u);
  GameHr_122cae0(a1 + 944, 9u);
  GameHr_122cae0(a1 + 944, 0xAu);
  GameHr_122cae0(a1 + 944, 0xBu);
  GameHr_1241020(a1 + 944);
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
  GameRoutine_762f30_alt1((char*)(v9 + 40), a1 + 944);
  GameRoutine_762f30_alt1((char*)(v9 + 168), a1 + 944);
  game_map_BonusExpList_Deserialize_alt1((__int64*)(v9 + 296), a1 + 944);
  v22 = *(int*)(a1 + 964);
  v152 = v3;
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
      LOBYTE(v157[0]) = v36;
      v156[0] = *(_BYTE*)(v34 + v33 + 2);
      v37 = GameRoutine_6eaec0_alt1(v157);
      if (v37 == nullptr) {
        v37 = *(__int64**)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
      }
      v38 = *(_QWORD*)(a1 + 944);
      LODWORD(v158_.v158[0]) = 0;
      (*(void (**)(__int64, _QWORD*))(v38 + 16))(a1 + 944, v158_.v158);
      v39 = *(int*)(a1 + 964);
      v40 = *(_QWORD*)(a1 + 952);
      *(_DWORD*)(a1 + 964) = v39 + 1;
      v41 = *(unsigned __int8*)(v40 + v39);
      if (v41 >= 0x19) {
        *(_DWORD*)(a1 + 964) = v39 + 2;
        v42 = *(_BYTE*)(v40 + v39 + 1) != 0;
      }
      else {
        v42 = 1;
      }
      Unit_6e1e20_alt1((__int64)v37, (__int64*)(a1 + 944), v42, v41);
      (*(void (**)(__int64, _QWORD))(*v6 + 24))(a1 + 944, 0);
      v43 = *((unsigned __int16*)v37 + 247);
      v44 = v37[49];
      v45 = game_GameModeData_instance_;
      v155[0] = v35;
      if (game_GameModeData_instance_ != 0) {
        v45 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      if (v44 == v45 || (*((_BYTE*)v37 + 418) & 8) != 0) {
        if (v35 != 9) {
          goto LABEL_26;
        }
      }
      else {
        LODWORD(v158_.v158[0]) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v32) & 0xFFF;
        if ((game_HasSkill_alt1(v37 + 218, (unsigned int*)v158_.v158) & 1) !=
                0 &&
            v155[0] != 9) {
        LABEL_26:
          v46 = 0;
          goto LABEL_29;
        }
      }
      v46 = 1;
    LABEL_29:
      GameHr_6c47b0((__int64)v37, v155, v46, 1);
      if ((unsigned __int8)v155[0] <= 8u &&
          v43 != *((unsigned __int16*)v37 + 247)) {
        *((_WORD*)v37 + 247) = v43;
      }
      GameHr_122e840((__int64*)v154, (__int64)v37, (char*)v157, v156);
      --v31;
    } while (v31 != 0);
  }
  v47 = game_map_UnitFlags_instance_;
  if (game_map_UnitFlags_instance_ != 0) {
    v48 = (unsigned int)game_HashString32_alt1("MapHistoryUnitMgr");
    v49 = *v6;
    LODWORD(v158_.v158[0]) = v48;
    if (((*(__int64 (**)(__int64, _QWORD*))(v49 + 16))(a1 + 944, v158_.v158) &
         1) != 0) {
      v50 = 256;
      ++*(_DWORD*)(a1 + 964);
      v51 = (_BYTE*)(v47 + 15);
      do {
        v52 = *(int*)(a1 + 964);
        v50 -= 8;
        *(_DWORD*)(a1 + 964) = v52 + 1;
        *(v51 - 7) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v52);
        v53 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v53 + 1;
        *(v51 - 6) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v53);
        v54 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v54 + 1;
        *(v51 - 5) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v54);
        v55 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v55 + 1;
        *(v51 - 4) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v55);
        v56 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v56 + 1;
        *(v51 - 3) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v56);
        v57 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v57 + 1;
        *(v51 - 2) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v57);
        v58 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v58 + 1;
        *(v51 - 1) = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v58);
        v59 = *(int*)(a1 + 964);
        *(_DWORD*)(a1 + 964) = v59 + 1;
        *v51 = *(_BYTE*)(*(_QWORD*)(a1 + 952) + v59);
        v51 += 8;
      } while (v50 != 0);
    }
    (*(void (**)(__int64, _QWORD))(*v6 + 24))(a1 + 944, 0);
  }
  v60 = (_QWORD*)*GameData_212ce98[0];
  memcpy_alt1(*(_QWORD*)(*GameData_212ce98[0] + 32) + 8LL,
              *(_QWORD*)(*GameData_212ce98[0] + 56) + 8LL, 0x800u);
  memcpy_alt1(v60[5] + 8LL, v60[8] + 8LL, 0x800u);
  v62 = (__int64 (**)(_QWORD*))v60[1];
  v61 = v60 + 1;
  v63 = (const char*)(*v62)(v61);
  v64 = (unsigned int)game_HashString32_alt1(v63);
  v65 = *v6;
  LODWORD(v158_.v158[0]) = v64;
  if (((*(__int64 (**)(__int64, _QWORD*))(v65 + 16))(a1 + 944, v158_.v158) &
       1) != 0) {
    v66 = *(int*)(a1 + 964);
    *(_DWORD*)(a1 + 964) = v66 + 1;
    (*(void (**)(_QWORD*, __int64, _QWORD))(*v61 + 24LL))(
        v61, a1 + 944, *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v66));
  }
  (*(void (**)(__int64, _QWORD))(*v6 + 24))(a1 + 944, 0);
  v67 = GameData_212cfb8[0];
  v68 = *GameData_212cfb8[0];
  if (*GameData_212cfb8[0] != 0) {
    v70 = *(__int64 (***)(__int64))(v68 + 8);
    v69 = v68 + 8;
    v71 = (const char*)(*v70)(v69);
    v72 = (unsigned int)game_HashString32_alt1(v71);
    v73 = *v6;
    LODWORD(v158_.v158[0]) = v72;
    if (((*(__int64 (**)(__int64, _QWORD*))(v73 + 16))(a1 + 944, v158_.v158) &
         1) != 0) {
      v74 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v74 + 1;
      (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v69 + 24LL))(
          v69, a1 + 944, *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v74));
    }
    (*(void (**)(__int64, _QWORD))(*v6 + 24))(a1 + 944, 0);
  }
  game_RandomSeed_Deserialize_alt1(
      (int*)game_map_MapRandom_instance__ptr[0] + 4, (__int64*)(a1 + 944));
  v75 = *(int*)(a1 + 964);
  v76 = v75 + 1;
  v153 = game_GameModeData_instance_;
  v77 = *(_QWORD*)(a1 + 952);
  *(_DWORD*)(a1 + 964) = v75 + 1;
  v78 = *(unsigned __int8*)(v77 + v75);
  v79 = v75 + 2;
  *(_DWORD*)(a1 + 964) = v79;
  v80 = v78 | (*(unsigned __int8*)(v77 + v76) << 8);
  if ((_DWORD)v80 != 0) {
    v81 = 0;
    v82 = GameData_22407a8;
    v83 = GameData_212dae8;
    while (1) {
      if (v82 == 0) {
        goto LABEL_62;
      }
      v87 = (_QWORD*)(*(_QWORD*)(v82 + 8) + 24 * v81);
      v89 = (_QWORD*)*v87;
      v88 = v87[1];
      v158_.v158[0] = 0;
      v158_.v158[1] = v89;
      if (v89 != nullptr) {
        v89 = *(_QWORD**)(*(_QWORD*)(v89[3] + 1784LL) + 272LL);
      }
      v158_.v159 = v89;
      v157[0] = 0;
      v157[1] = v88;
      if (v88 == 0) {
        goto LABEL_62;
      }
      v90 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v88 + 24) + 1784LL) + 272LL);
      v91 = (__int64)v83;
      v157[2] = v90;
      if (v89 != nullptr && v90 != 0) {
        v92 = *(_QWORD**)(v153 + 128);
        v93 = GameReliance_8e17a0_alt1(v92, (__int64)v158_.v158, (__int64)v157);
        v82 = GameData_22407a8;
        if ((v93 & 0x80000000) == 0) {
          v91 = v92[1] + 56LL * v93;
        }
        else {
        LABEL_62:
          v91 = (__int64)v83;
        }
      }
      v94 = *(int*)(a1 + 964);
      v95 = *(_QWORD*)(a1 + 952);
      v96 = v94 + 7;
      *(_DWORD*)(a1 + 964) = v94 + 1;
      v97 = *(unsigned __int8*)(v95 + v94);
      *(_DWORD*)(a1 + 964) = v94 + 2;
      v98 = *(unsigned __int8*)(v95 + v94 + 1);
      *(_DWORD*)(a1 + 964) = v94 + 3;
      v99 = *(unsigned __int8*)(v95 + v94 + 2);
      *(_DWORD*)(a1 + 964) = v94 + 4;
      v100 = *(unsigned __int8*)(v95 + v94 + 3);
      *(_DWORD*)(a1 + 964) = v94 + 5;
      v101 = *(unsigned __int8*)(v95 + v94 + 4);
      *(_DWORD*)(a1 + 964) = v94 + 6;
      v102 = *(unsigned __int8*)(v95 + v94 + 5);
      *(_DWORD*)(a1 + 964) = v94 + 7;
      v103 = *(unsigned __int8*)(v95 + v94 + 6);
      *(_DWORD*)(a1 + 964) = v94 + 8;
      if (*(_BYTE*)(v91 + 10) != 0) {
        v104 = v97 | (v98 << 8);
        v105 = *(unsigned __int8*)(v95 + v96);
        if (v104 != *(unsigned __int16*)(v91 + 12)) {
          *(_WORD*)(v91 + 12) = v104;
          v106 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
          if ((int)v106 < 1) {
            LOBYTE(v84) = 0;
          }
          else {
            v84 = 0;
            v107 =
                *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v106 - 1));
            if (v107 >= v104) {
              v107 = v104;
            }
            if ((signed __int32)*(_DWORD*)GameData_21d99c8 <= v104) {
              v108 = v107;
            }
            else {
              v108 = *(_DWORD*)GameData_21d99c8;
            }
            while (1) {
              v109 = (unsigned int)(v84 + v106) >> 1;
              v110 = *(_DWORD*)(GameData_21d99c8 + 4LL * v109);
              if (v108 == v110) {
                break;
              }
              if (v108 < v110) {
                LODWORD(v106) = (unsigned int)(v84 + v106) >> 1;
              }
              else {
                v84 = v109 + 1;
              }
              if (v84 >= (int)v106) {
                goto LABEL_46;
              }
            }
            LOBYTE(v84) = v109 + 1;
          }
        LABEL_46:
          *(_BYTE*)(v91 + 11) = v84;
        }
        v85 = v99 | (v100 << 8);
        if (v85 >= 0x2710) {
          LOWORD(v85) = 10000;
        }
        *(_WORD*)(v91 + 14) = v85;
        if ((v101 | (v102 << 8) | (v103 << 16) | (unsigned int)(v105 << 24)) >=
            0xF4240) {
          v86 = 1000000;
        }
        else {
          v86 = v101 | (v102 << 8) | (v103 << 16) | (v105 << 24);
        }
        *(_DWORD*)(v91 + 16) = v86;
      }
      if (++v81 == v80) {
        v79 = *(_DWORD*)(a1 + 964);
        v77 = *(_QWORD*)(a1 + 952);
        v67 = GameData_212cfb8[0];
        break;
      }
    }
  }
  *(_DWORD*)(a1 + 964) = v79 + 1;
  (*(void (**)(_QWORD, __int64, _QWORD))(
      **(_QWORD**)game_map_history_g_transporter_ptr[0] + 64LL))(
      *game_map_history_g_transporter_ptr[0], a1 + 944,
      *(unsigned __int8*)(v77 + v79));
  v111 = *(int*)(a1 + 964);
  v112 = *(_QWORD*)(a1 + 952);
  v113 = v111 + 2;
  v114 = v111 + 3;
  *(_DWORD*)(a1 + 964) = v111 + 1;
  v115 = *(unsigned __int8*)(v112 + v111);
  *(_DWORD*)(a1 + 964) = v111 + 2;
  v116 = *(unsigned __int8*)(v112 + v111 + 1);
  *(_DWORD*)(a1 + 964) = v111 + 3;
  v117 = v111 + 4;
  v118 = game_GameModeData_instance_;
  v119 = *(unsigned __int8*)(v112 + v113);
  *(_DWORD*)(a1 + 964) = v117;
  if (v118 != 0) {
    v120 = ((v115 | (v116 << 8) | (v119 << 16)) & 0xFFFFFF |
            (*(unsigned __int8*)(v112 + v114) << 24)) &
           ~(*(char*)(v112 + v114) >> 7);
    if (v120 >= 9999999) {
      v120 = 9999999;
    }
    *(_DWORD*)(v118 + 72) = v120;
    v117 = *(_DWORD*)(a1 + 964);
    v112 = *(_QWORD*)(a1 + 952);
  }
  *(_DWORD*)(a1 + 964) = v117 + 1;
  v121 = *(unsigned __int8*)(v112 + v117);
  *(_DWORD*)(a1 + 964) = v117 + 2;
  v122 = *(unsigned __int8*)(v112 + v117 + 1LL);
  v123 = *(_QWORD*)(v118 + 160);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dba8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212dba8) != 0) {
    v151 = GameData_212dba0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212dba0) =
        &GameData_1abbc28;
    *v151 = game_HashString_alt1((__int64)&GameData_1abbc28);
    __cxa_guard_release_alt1((__int64)GameData_212dba8);
  }
  v124 = game_GameModeData_instance_;
  v125 = v121 | (v122 << 8);
  if (game_GameModeData_instance_ != 0) {
    v126 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)GameData_212dba0);
    if (v126 != 0) {
      v124 = *(_DWORD*)(v126 + 32);
    }
    else {
      v124 = 0;
    }
  }
  if (v124 >= v125) {
    v124 = v125;
  }
  *(_DWORD*)(v123 + 104) = v124;
  v127 = *(int*)(a1 + 964);
  v128 = *(_QWORD*)(a1 + 952);
  *(_DWORD*)(a1 + 964) = v127 + 1;
  v129 = *(unsigned __int8*)(v128 + v127);
  *(_DWORD*)(a1 + 964) = v127 + 2;
  v130 = v129 | (*(unsigned __int8*)(v128 + v127 + 1) << 8);
  if (v130 != 0) {
    v131 = 32LL * v130;
    v132 = 0;
    do {
      if (game_script_map_obj_g_object_records != 0) {
        v136 =
            (unsigned __int8*)(*(_QWORD*)(game_script_map_obj_g_object_records +
                                          8) +
                               v132);
        v137 = *v136;
        v138 = (v137 & 1) == 0;
        if ((v137 & 1) != 0) {
          v139 = *((_QWORD*)v136 + 1);
        }
        else {
          v139 = v137 >> 1;
        }
        if (v139 != 0) {
          if (v138) {
            v140 = (const char*)(v136 + 1);
          }
          else {
            v140 = *((const char**)v136 + 2);
          }
          v141 = game_map_812b00_alt1(v140);
        }
        else {
          v141 = game_map_8129a0_alt1((char)v136[24], (char)v136[25]);
        }
        v133 = v141;
      }
      else {
        v133 = game_map_anonymous_NullObject_vtable_ptr;
      }
      v134 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v134 + 1;
      ((void (*)(__int64 (***)(void), bool))(*v133)[21])(
          v133, *(_BYTE*)(*(_QWORD*)(a1 + 952) + v134) != 0);
      v135 = *(int*)(a1 + 964);
      *(_DWORD*)(a1 + 964) = v135 + 1;
      ((void (*)(__int64 (***)(void), _QWORD))(*v133)[23])(
          v133, *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v135));
      v132 += 32;
    } while (v131 != v132);
  }
  GameRoutine_960b80_alt1((__int64*)(a1 + 944));
  if (*game_sound_g_game_sound_ptr[0] != 0) {
    GameManager_a35190_alt1(*(_DWORD**)game_sound_g_game_sound_ptr[0],
                            a1 + 944);
  }
  GameHr_1225d20(*(_QWORD**)GameData_2130668[0], (__int64*)(a1 + 944));
  GameHr_1272e40(*(_QWORD**)GameData_2130670[0], (__int64*)(a1 + 944));
  v142 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v142 + 1;
  (*(void (**)(_QWORD, __int64, _QWORD))(
      **(_QWORD**)game_map_history_g_ride_pool_ptr[0] + 64LL))(
      *game_map_history_g_ride_pool_ptr[0], a1 + 944,
      *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v142));
  v143 = *(int*)(a1 + 964);
  *(_DWORD*)(a1 + 964) = v143 + 1;
  (*(void (**)(_QWORD, __int64, _QWORD))(
      **(_QWORD**)game_map_history_g_legion_pool_ptr[0] + 64LL))(
      *game_map_history_g_legion_pool_ptr[0], a1 + 944,
      *(unsigned __int8*)(*(_QWORD*)(a1 + 952) + v143));
  Stream_Unknown3_alt1(a1 + 944, 0);
  GameRoutine_122c900_alt1(v154);
  game_map_history_Impl_UpdateMap(1);
  v144 = *GameData_212ce90[0];
  v145 = GameData_212ce80[0];
  if (((*(_DWORD*)(*GameData_212ce90[0] + 20) ^ v152) & 0x800) != 0) {
    game_VariableManager_SetFlag_alt1(
        (__int64)&game_map_kVariableSituation1000,
        (*(_DWORD*)(*GameData_212ce90[0] + 20) & 0x1000) != 0);
    game_VariableManager_SetFlag_alt1((__int64)&game_map_kVariableSituation800,
                                      (*(_DWORD*)(v144 + 20) & 0x800) != 0);
    game_VariableManager_SetFlag_alt1((__int64)&game_map_kVariableSituation200,
                                      (*(_DWORD*)(v144 + 20) & 0x200) != 0);
    Situation_763690_alt1(v144);
  }
  v146 = *v145;
  v147 = *(_DWORD*)(v146 + 61624) - 1;
  *(_DWORD*)(v146 + 61624) = v147;
  if (v147 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v146 + 61616) + 8LL))(v146 + 61616);
    LOBYTE(v157[0]) = 0;
    v158_.v158[0] = GameData_1f9a470;
    v158_.v158[1] = v146;
    v158_.v160 = v158_.v158;
    v158_.v159 = v157;
    GameRoutine_74df60_alt1((int*)(v146 + 61472), (__int64)v158_.v158);
    if (v158_.v160 == v158_.v158) {
      v148 = 32;
    }
    else {
      if (v158_.v160 == nullptr) {
      LABEL_115:
        *(_QWORD*)(v146 + 61472) = 0x3E8000003E8LL;
        *(_QWORD*)(v146 + 61480) = -1;
        v149 = LOBYTE(v157[0]);
        *(_QWORD*)(v146 + 61488) = 0;
        *(_QWORD*)(v146 + 61496) = 0;
        *(_QWORD*)(v146 + 61504) = 0;
        *(_QWORD*)(v146 + 61512) = 0;
        *(_QWORD*)(v146 + 61520) = 0;
        *(_QWORD*)(v146 + 61528) = 0;
        *(_QWORD*)(v146 + 61536) = 0;
        *(_QWORD*)(v146 + 61544) = 0;
        *(_QWORD*)(v146 + 61552) = 0;
        *(_QWORD*)(v146 + 61560) = 0;
        *(_QWORD*)(v146 + 61568) = 0;
        *(_QWORD*)(v146 + 61576) = 0;
        *(_QWORD*)(v146 + 61584) = 0;
        *(_QWORD*)(v146 + 61592) = 0;
        *(_QWORD*)(v146 + 61600) = 0;
        *(_QWORD*)(v146 + 61608) = 0;
        if (v149 == 1 && *(_QWORD*)GameData_212d020[0] != 0) {
          GameRoutine_f09600_alt1(*(_QWORD*)GameData_212d020[0]);
        }
        goto LABEL_118;
      }
      v148 = 40;
    }
    (*(void (**)(__int64))(*v158_.v160 + v148))((__int64)v158_.v160);
    goto LABEL_115;
  }
LABEL_118:
  game_map_history_122c500();
  Trick_7d5160_alt1(*(_QWORD*)(*v67 + 16),
                    *(_BYTE*)(*(_QWORD*)(*v67 + 16) + 92848LL));
  GameHr_963d60();
  if (v154[0] != nullptr) {
    v150 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v150 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v150, (__int64)v154[0]);
  }
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

__int64 game_map_history_122d3c0(_QWORD* a1, __int64 a2)
{
  unsigned int v4;
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
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int16 v52;
  __int16 v53;
  _QWORD* v54;
  _QWORD* v55;
  __int64* v56;
  __int64* v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  void (*v68)(__int64, __int64);
  __int64* v69;
  unsigned __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  _BYTE* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 result;
  unsigned int v97;
  _QWORD* v98;
  _QWORD* v99;
  __int64 v100;
  __int64 v101;

  v4 = (unsigned int)game_HashString32_alt1("MapHistory");
  v5 = *(_QWORD*)a2;
  LODWORD(v101) = v4;
  if (((*(__int64 (**)(__int64, __int64*))(v5 + 16))(a2, &v101) & 1) == 0) {
    goto LABEL_94;
  }
  v6 = *(int*)(a2 + 20);
  v7 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  v8 = *(unsigned __int8*)(v7 + v6);
  *(_DWORD*)(a2 + 20) = v6 + 2;
  v97 = v8;
  *((_BYTE*)a1 + 8) = *(_BYTE*)(v7 + v6 + 1);
  if (v8 != 0) {
    v9 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *((_BYTE*)a1 + 10) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) != 0;
  }
  v10 = *(int*)(a2 + 20);
  v11 = *(_QWORD*)(a2 + 8);
  v12 = 0;
  *(_DWORD*)(a2 + 20) = v10 + 1;
  v13 = *(unsigned __int8*)(v11 + v10);
  *(_DWORD*)(a2 + 20) = v10 + 2;
  v14 = *(unsigned __int8*)(v11 + v10 + 1);
  *(_DWORD*)(a2 + 20) = v10 + 3;
  v15 = *(unsigned __int8*)(v11 + v10 + 2);
  *(_DWORD*)(a2 + 20) = v10 + 4;
  v99 = a1 + 3;
  v16 = game_map_history_g_record_alloc_failed_ptr;
  v98 = a1;
  *((_DWORD*)a1 + 3) = v13 | (v14 << 8) | (v15 << 16) |
                       (*(unsigned __int8*)(v11 + v10 + 3) << 24);
  do {
    v17 = *(int*)(a2 + 20);
    v18 = *(_QWORD*)(a2 + 8);
    v100 = v12;
    *(_DWORD*)(a2 + 20) = v17 + 1;
    v19 = *(unsigned __int8*)(v18 + v17);
    *(_DWORD*)(a2 + 20) = v17 + 2;
    v20 = v19 | (*(unsigned __int8*)(v18 + v17 + 1) << 8);
    v99[v12] = 0;
    if (v20 != 0) {
      v21 = 0;
      v22 = 0;
      do {
        v23 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v23 + 1;
        v24 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v23);
        v25 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
        if (v24 <= 1) {
          v32 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          if (v24 != 0) {
            while (1) {
              Em = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v32, 0x70u);
              if (Em != 0) {
                break;
              }
              v34 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
              v101 = 112;
              if (v34 == 0) {
              LABEL_95:
                GameRoutine_60a310_alt1();
              }
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v34 + 48LL))(v34,
                                                                      &v101);
              v32 = v25;
            }
            *(_WORD*)(Em + 20) = 0;
            *(_DWORD*)(Em + 16) = 0x1000000;
            v37 = GameData_2130aa0[0];
            *(_WORD*)(Em + 35) = -1;
            *(_QWORD*)(Em + 22) = 0;
            *(_QWORD*)(Em + 27) = 0;
            *(_DWORD*)(Em + 40) = 0;
            v35 = v37 + 2;
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
              Em = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v32, 0x80u);
              if (Em != 0) {
                break;
              }
              v33 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
              v101 = 128;
              if (v33 == 0) {
                goto LABEL_95;
              }
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v33 + 48LL))(v33,
                                                                      &v101);
              v32 = v25;
            }
            *(_QWORD*)(Em + 14) = 0;
            v36 = GameData_2130a98[0];
            *(_WORD*)(Em + 51) = -1;
            *(_WORD*)(Em + 22) = 0;
            *(_DWORD*)(Em + 24) = 0;
            v35 = v36 + 2;
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
            Em = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v25, 0x30u);
            if (Em != 0) {
              break;
            }
            v30 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
            v101 = 48;
            if (v30 == 0) {
              goto LABEL_95;
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v30 + 48LL))(v30, &v101);
          }
          *(_WORD*)(Em + 20) = 0;
          *(_DWORD*)(Em + 16) = 0x2000000;
          v31 = GameData_2130aa8[0];
        }
        else {
          v26 = *(__int64*)((char*)game_map_history_g_record_allocators_ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          if (v24 == 3) {
            while (1) {
              Em = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v26, 0x18u);
              if (Em != 0) {
                break;
              }
              v28 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
              v101 = 24;
              if (v28 == 0) {
                goto LABEL_95;
              }
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v28 + 48LL))(v28,
                                                                      &v101);
              v26 = v25;
            }
            *(_QWORD*)(Em + 16) = 50331648;
            v35 = GameData_2130ab0[0] + 2;
            goto LABEL_35;
          }
          while (1) {
            Em = nn_mem_StandardAllocator_Allocate_1a0ad50_alt1(v26, 0x30u);
            if (Em != 0) {
              break;
            }
            v29 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
            v101 = 48;
            if (v29 == 0) {
              goto LABEL_95;
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v29 + 48LL))(v29, &v101);
            v26 = v25;
          }
          *(_WORD*)(Em + 20) = 0;
          *(_DWORD*)(Em + 16) = 0x4000000;
          v31 = GameData_2130ab8[0];
        }
        v35 = v31 + 2;
        *(_QWORD*)(Em + 24) = 0;
        *(_WORD*)(Em + 32) = 0;
        *(_QWORD*)(Em + 40) = 0;
      LABEL_35:
        *(_QWORD*)Em = v35;
        *(_QWORD*)(Em + 8) = 0;
        v38 = Em;
        ((void (*)(__int64, __int64))v35[9])(Em, a2);
        if (v22 != 0) {
          *(_QWORD*)(v22 + 8) = v38;
        }
        else {
          v99[v100] = v38;
        }
        ++v21;
        v22 = v38;
      } while (v21 != v20);
    }
    v12 = v100 + 1;
  } while (v100 != 99);
  v39 = *(_DWORD*)(a2 + 20);
  if (v97 == 0) {
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *((_BYTE*)a1 + 10) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) != 0;
    v39 = *(_DWORD*)(a2 + 20) + 1;
  }
  v40 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v39 + 1;
  v41 = *(unsigned __int8*)(v40 + v39);
  *(_DWORD*)(a2 + 20) = v39 + 2;
  v42 = v39 + 3LL;
  v43 = *(unsigned __int8*)(v40 + v39 + 1LL);
  *(_DWORD*)(a2 + 20) = v42;
  v44 = v41 | (v43 << 8);
  v45 = *(unsigned __int8*)(v40 + v39 + 2LL);
  *(_DWORD*)(a2 + 20) = v39 + 4;
  *((_DWORD*)a1 + 206) =
      v44 | (v45 << 16) | (*(unsigned __int8*)(v40 + v42) << 24);
  v46 = *(int*)(a2 + 20);
  v47 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v46 + 1;
  LOWORD(v40) = *(unsigned __int8*)(v47 + v46);
  *(_DWORD*)(a2 + 20) = v46 + 2;
  *((_WORD*)a1 + 414) = v40 | (*(unsigned __int8*)(v47 + v46 + 1) << 8);
  v48 = *(int*)(a2 + 20);
  v49 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v48 + 1;
  LOWORD(v40) = *(unsigned __int8*)(v49 + v48);
  *(_DWORD*)(a2 + 20) = v48 + 2;
  *((_WORD*)a1 + 415) = v40 | (*(unsigned __int8*)(v49 + v48 + 1) << 8);
  v50 = *(int*)(a2 + 20);
  v51 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v50 + 1;
  v52 = *(unsigned __int8*)(v51 + v50);
  *(_DWORD*)(a2 + 20) = v50 + 2;
  v53 = *(unsigned __int8*)(v51 + v50 + 1);
  v54 = (_QWORD*)a1[106];
  v55 = (_QWORD*)a1[105];
  while (v54 != v55) {
    v60 = *--v54;
    v59 = v60;
    *v54 = 0;
    if (v60 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
    }
  }
  v98[106] = v55;
  a1 = v98;
  if (((unsigned __int8)v52 | (unsigned __int16)(v53 << 8)) != 0) {
    v56 = (__int64*)fw_memory_g_heap_manager_ptr;
    v57 = GameData_2130ac8[0];
    v58 = (unsigned __int16)((v53 << 8) + v52);
    do {
      v62 = *(int*)(a2 + 20);
      v63 = *v56;
      *(_DWORD*)(a2 + 20) = v62 + 1;
      v64 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v62);
      v65 = fw_memory_HeapManager_Allocate_alt1(v63, 16, 16, 0);
      v66 = v65;
      if (v64 != 0) {
        *(_WORD*)(v65 + 8) = 1;
        v67 = v57 + 2;
      }
      else {
        *(_WORD*)(v65 + 8) = 0;
        v67 = GameData_2130ac0[0] + 2;
      }
      *(_QWORD*)v65 = v67;
      v68 = (void (*)(__int64, __int64))v67[3];
      *(_BYTE*)(v65 + 10) = 0;
      v68(v65, a2);
      v69 = (__int64*)a1[106];
      v70 = a1[107];
      if ((unsigned __int64)v69 < v70) {
        *v69 = v66;
        v61 = (__int64)(v69 + 1);
      }
      else {
        v71 = a1[105];
        v72 = (char*)v69 - v71;
        v73 = ((__int64)v69 - v71) >> 3;
        v74 = v73 + 1;
        if ((unsigned __int64)(v73 + 1) >> 61 != 0) {
          GameRoutine_122f7a0_alt1();
        }
        v75 = v70 - v71;
        if (v75 >> 2 > v74) {
          v74 = v75 >> 2;
        }
        if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFF8LL) {
          v76 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v76 = v74;
        }
        if (v76 != 0) {
          if (v76 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v77 = fw_memory_HeapManager_Allocate_alt1(*v56, 8 * v76, 16, 0);
        }
        else {
          v77 = 0;
        }
        v78 = v77 + 8 * v76;
        v79 = (unsigned __int64)v69 - v71;
        v80 = (__int64)&v72[v77 + -8 * v73];
        *(_QWORD*)&v72[v77] = v66;
        v61 = (__int64)&v72[v77 + 8];
        memcpy_alt1(v80, v71, v79);
        a1 = v98;
        v98[105] = v80;
        v98[106] = v61;
        v98[107] = v78;
        if (v71 != 0) {
          v81 = 128;
          if (*(_QWORD*)(*v56 + 200) == 0) {
            v81 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v56 + v81, v71);
        }
      }
      --v58;
      a1[106] = v61;
    } while (v58 != 0);
  }
  HistoryLogInfo_1239980_alt1((__int64)(a1 + 108), a2);
  GameRoutine_12a64a0_alt1(a2);
  GameHr_1285d20(a2);
  v82 = game_map_UnitFlags_instance_;
  if (game_map_UnitFlags_instance_ != 0) {
    v83 = (unsigned int)game_HashString32_alt1("MapHistoryUnitMgr");
    v84 = *(_QWORD*)a2;
    LODWORD(v101) = v83;
    if (((*(__int64 (**)(__int64, __int64*))(v84 + 16))(a2, &v101) & 1) != 0) {
      v85 = 256;
      ++*(_DWORD*)(a2 + 20);
      v86 = (_BYTE*)(v82 + 15);
      do {
        v87 = *(int*)(a2 + 20);
        v85 -= 8;
        *(_DWORD*)(a2 + 20) = v87 + 1;
        *(v86 - 7) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v87);
        v88 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v88 + 1;
        *(v86 - 6) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v88);
        v89 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v89 + 1;
        *(v86 - 5) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v89);
        v90 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v90 + 1;
        *(v86 - 4) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v90);
        v91 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v91 + 1;
        *(v86 - 3) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91);
        v92 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v92 + 1;
        *(v86 - 2) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92);
        v93 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v93 + 1;
        *(v86 - 1) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v93);
        v94 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v94 + 1;
        *v86 = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v94);
        v86 += 8;
      } while (v85 != 0);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  }
  game_map_history_anonymous_Impl_Deserialize_alt1(a2);
  if (v97 > 2) {
    game_12adf00_alt1(a2);
    goto LABEL_94;
  }
  if (v97 == 2) {
    goto LABEL_94;
  }
  v95 = *((_DWORD*)a1 + 3);
  if ((v95 & 8) != 0) {
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 41) |= 1u;
      v95 = *((_DWORD*)a1 + 3);
    }
    v95 &= ~8u;
    *((_DWORD*)a1 + 3) = v95;
    if ((v95 & 0x10) != 0) {
      goto LABEL_82;
    }
  LABEL_75:
    if ((v95 & 0x1000) == 0) {
      goto LABEL_76;
    }
  LABEL_85:
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 265) |= 1u;
      v95 = *((_DWORD*)a1 + 3);
    }
    v95 &= ~0x1000u;
    *((_DWORD*)a1 + 3) = v95;
    if ((v95 & 0x40000) != 0) {
      goto LABEL_88;
    }
  LABEL_77:
    if ((v95 & 0x200000) == 0) {
      goto LABEL_94;
    }
  LABEL_91:
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 329) |= 1u;
      v95 = *((_DWORD*)a1 + 3);
    }
    *((_DWORD*)a1 + 3) = v95 & 0xFFDFFFFF;
  }
  else {
    if ((v95 & 0x10) == 0) {
      goto LABEL_75;
    }
  LABEL_82:
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 73) |= 1u;
      v95 = *((_DWORD*)a1 + 3);
    }
    v95 &= ~0x10u;
    *((_DWORD*)a1 + 3) = v95;
    if ((v95 & 0x1000) != 0) {
      goto LABEL_85;
    }
  LABEL_76:
    if ((v95 & 0x40000) == 0) {
      goto LABEL_77;
    }
  LABEL_88:
    if (GameData_2240178 != 0) {
      *(_BYTE*)(GameData_2240178 + 105) |= 1u;
      v95 = *((_DWORD*)a1 + 3);
    }
    v95 &= ~0x40000u;
    *((_DWORD*)a1 + 3) = v95;
    if ((v95 & 0x200000) != 0) {
      goto LABEL_91;
    }
  }
LABEL_94:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  *((_BYTE*)a1 + 9) = 1;
  return result;
}

void game_map_history_122dd20(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned int v7;
  bool v8;
  int v9;
  bool v10;
  unsigned int* v11;
  unsigned int* v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  char* v21;
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
  unsigned int v34;
  char v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  _QWORD* v40;
  _QWORD* v41;
  __int64 (**v42)(_QWORD*);
  const char* v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 (**v57)(__int64);
  const char* v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _BYTE* v63;
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
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  int v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  int v97;
  __int64 v98;
  __int64 v99;
  char v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  char v115;
  char v116[4];
  __int64 v117;
  char v118[8];
  char v119[4];
  int v120;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD**)v2;
  v4 = *(_QWORD**)(v2 + 8);
  if (*(_QWORD**)v2 != v4) {
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
        return;
      }
    }
    v12 = (unsigned int*)v3[1];
    v11 = (unsigned int*)v3[2];
    while (1) {
      if (v12 == v11) {
        goto LABEL_3;
      }
      v13 = *(_QWORD*)(a2 + 32);
      if (v13 == 0) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(__int64, unsigned int*))(*(_QWORD*)v13 + 48LL))(
               v13, v12) &
           1) != 0) {
        break;
      }
    LABEL_10:
      v12 += 3;
    }
    v14 = *(_DWORD*)(a1 + 144);
    v15 = (int)v12[1];
    if ((int)v15 <= *(_DWORD*)(a1 + 32) - v14) {
      memcpy_alt1(*(_QWORD*)(a1 + 24) + v14, v3[4] + *v12, v15);
      v14 = *(_DWORD*)(a1 + 144);
    }
    v16 = *(_QWORD*)(a1 + 48);
    v17 = *(_QWORD*)(a1 + 56);
    v18 = ((v17 - v16) << 7) - 1;
    if (v17 == v16) {
      v18 = 0;
    }
    v19 = *(_QWORD*)(a1 + 80) + *(_QWORD*)(a1 + 72);
    if (v18 == v19) {
      GameRoutine_660f80_alt1((__int64*)(a1 + 40));
      v16 = *(_QWORD*)(a1 + 48);
      v19 = *(_QWORD*)(a1 + 80) + *(_QWORD*)(a1 + 72);
    }
    *(_DWORD*)(*(_QWORD*)(v16 + 8 * (v19 >> 10)) + 4 * (v19 & 0x3FF)) =
        *(_DWORD*)(a1 + 36);
    *(_DWORD*)(a1 + 36) = v14;
    ++*(_QWORD*)(a1 + 80);
    switch (*((_BYTE*)v12 + 8)) {
    case 0:
      v119[0] = *((_BYTE*)v12 + 9);
      v20 = GameRoutine_6eaec0_alt1(v119);
      v21 = (char*)v3[6];
      v22 = (unsigned __int8*)v3[7];
      v23 = (__int64)v20;
      if (v21 != (char*)v22) {
        while (*v21 != v119[0]) {
          v21 += 2;
          if (v21 == (char*)v22) {
            goto LABEL_24;
          }
        }
        GameHr_122e840((__int64*)(a1 + 168), 0, v119, v21 + 1);
        if (v23 != 0) {
          LOBYTE(v120) = 9;
          v113 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v113 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          v114 = *(unsigned __int16*)(v23 + 494);
          v115 = true;
          if (*(_QWORD*)(v23 + 392) != v113 &&
              (*(_BYTE*)(v23 + 418) & 8) == 0) {
            LODWORD(v117) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
            if ((game_HasSkill_alt1((_QWORD*)(v23 + 1744),
                                    (unsigned int*)&v117) &
                 1) != 0 &&
                (unsigned __int8)v120 != 9) {
              v115 = false;
            }
          }
          GameHr_6c47b0(v23, &v120, v115, 1);
          if ((unsigned __int8)v120 <= 8u &&
              v114 != *(unsigned __int16*)(v23 + 494)) {
            *(_WORD*)(v23 + 494) = v114;
          }
        }
        goto LABEL_91;
      }
    LABEL_24:
      v24 = v4;
      if (v20 == nullptr) {
        v23 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556216LL);
      }
      v25 = *(int*)(a1 + 36);
      v27 = *(_QWORD*)(a1 + 16);
      v26 = *(_QWORD*)(a1 + 24);
      v28 = v25 + 2;
      *(_DWORD*)(a1 + 36) = v25 + 2;
      v29 = *(unsigned __int8*)(v26 + v25 + 1);
      *(_DWORD*)(a1 + 36) = v25 + 3;
      v30 = *(void (**)(__int64, int*))(v27 + 16);
      v31 = *(_BYTE*)(v26 + v28);
      v120 = 0;
      v30(a1 + 16, &v120);
      v32 = *(int*)(a1 + 36);
      v33 = *(_QWORD*)(a1 + 24);
      *(_DWORD*)(a1 + 36) = v32 + 1;
      v34 = *(unsigned __int8*)(v33 + v32);
      if (v34 >= 0x19) {
        *(_DWORD*)(a1 + 36) = v32 + 2;
        v35 = *(_BYTE*)(v33 + v32 + 1) != 0;
      }
      else {
        v35 = 1;
      }
      Unit_6e1e20_alt1(v23, (__int64*)(a1 + 16), v35, v34);
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 16) + 24LL))(a1 + 16, 0);
      v93 = *(_QWORD*)(GameData_21ca310 + 56);
      v118[0] = v31;
      v94 = v93 + 24LL * v29 + 556000;
      if (v29 <= 9) {
        v95 = v94;
      }
      else {
        v95 = 0;
      }
      v117 = v95;
      if (v29 > 9) {
        v96 = 9;
      }
      else {
        v96 = *(unsigned __int8*)(v94 + 16);
      }
      v97 = *(unsigned __int16*)(v23 + 494);
      v98 = *(_QWORD*)(v23 + 392);
      v4 = v24;
      v116[0] = v96;
      v99 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v99 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      if (v98 == v99 || (*(_BYTE*)(v23 + 418) & 8) != 0) {
        if (v96 != 9) {
        LABEL_84:
          v100 = 0;
          goto LABEL_87;
        }
      }
      else {
        v120 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                          game_g_shared_system_skills_ptr) &
               0xFFF;
        if ((game_HasSkill_alt1((_QWORD*)(v23 + 1744), (unsigned int*)&v120) &
             1) != 0 &&
            v116[0] != 9) {
          goto LABEL_84;
        }
      }
      v100 = 1;
    LABEL_87:
      GameHr_6c47b0(v23, v116, v100, 1);
      if ((unsigned __int8)v116[0] <= 8u &&
          v97 != *(unsigned __int16*)(v23 + 494)) {
        *(_WORD*)(v23 + 494) = v97;
      }
      GameHr_122e840((__int64*)(a1 + 168), v23, v119, v118);
    LABEL_91:
      v102 = *(_QWORD*)(a1 + 72);
      v101 = *(_QWORD*)(a1 + 80);
      v104 = *(_QWORD*)(a1 + 48);
      v103 = *(_QWORD*)(a1 + 56);
      v10 = v103 == v104;
      v105 = v101 - 1 + v102;
      v106 = v105 >> 10;
      v107 = v105 & 0x3FF;
      v108 = ((v103 - v104) << 7) - 1;
      v109 = *(_QWORD*)(v104 + 8 * v106);
      if (v10) {
        v108 = 0;
      }
      v110 = *(_DWORD*)(v109 + 4 * v107);
      *(_QWORD*)(a1 + 80) = v101 - 1;
      *(_DWORD*)(a1 + 36) = v110;
      if ((unsigned __int64)(v108 - (v101 + v102) + 1) >= 0x800) {
        v111 = *(_QWORD*)(v103 - 8);
        if (v111 != 0) {
          v112 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v112 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, v111);
          v103 = *(_QWORD*)(a1 + 56);
        }
        *(_QWORD*)(a1 + 56) = v103 - 8;
      }
      goto LABEL_10;
    case 1:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      if (game_map_UnitFlags_instance_ != 0) {
        v63 = (_BYTE*)(game_map_UnitFlags_instance_ + 11);
        *(_DWORD*)(a1 + 36) = v14 + 2;
        v64 = 256;
        do {
          v65 = *(int*)(a1 + 36);
          v64 -= 16;
          *(_DWORD*)(a1 + 36) = v65 + 1;
          *(v63 - 3) = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v65);
          v66 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v66 + 1;
          *(v63 - 2) = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v66);
          v67 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v67 + 1;
          *(v63 - 1) = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v67);
          v68 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v68 + 1;
          *v63 = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v68);
          v69 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v69 + 1;
          v63[1] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v69);
          v70 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v70 + 1;
          v63[2] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v70);
          v71 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v71 + 1;
          v63[3] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v71);
          v72 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v72 + 1;
          v63[4] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v72);
          v73 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v73 + 1;
          v63[5] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v73);
          v74 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v74 + 1;
          v63[6] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v74);
          v75 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v75 + 1;
          v63[7] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v75);
          v76 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v76 + 1;
          v63[8] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v76);
          v77 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v77 + 1;
          v63[9] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v77);
          v78 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v78 + 1;
          v63[10] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v78);
          v79 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v79 + 1;
          v63[11] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v79);
          v80 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v80 + 1;
          v63[12] = *(_BYTE*)(*(_QWORD*)(a1 + 24) + v80);
          v63 += 16;
        } while (v64 != 0);
      }
      goto LABEL_91;
    case 2:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      v55 = *GameData_212cfb8[0];
      if (*GameData_212cfb8[0] != 0) {
        v57 = *(__int64 (***)(__int64))(v55 + 8);
        v56 = v55 + 8;
        v58 = (const char*)(*v57)(v56);
        v59 = (unsigned int)game_HashString32_alt1(v58);
        v60 = *(_QWORD*)(a1 + 16);
        LODWORD(v117) = v59;
        if (((*(__int64 (**)(__int64, __int64*))(v60 + 16))(a1 + 16, &v117) &
             1) != 0) {
          v61 = *(int*)(a1 + 36);
          *(_DWORD*)(a1 + 36) = v61 + 1;
          (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v56 + 24LL))(
              v56, a1 + 16, *(unsigned __int8*)(*(_QWORD*)(a1 + 24) + v61));
        }
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 16) + 24LL))(a1 + 16, 0);
      }
      *(_BYTE*)(a1 + 192) = 1;
      goto LABEL_91;
    case 3:
      RecordSerializer_123d0b0_alt1(a1 + 16, *((unsigned __int8*)v12 + 9));
      goto LABEL_91;
    case 4:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      GameRoutine_126ba80_alt1(*(_QWORD*)GameData_2130688, a1 + 16);
      goto LABEL_91;
    case 5:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      game_RandomSeed_Deserialize_alt1(
          (int*)game_map_MapRandom_instance__ptr[0] + 4, (__int64*)(a1 + 16));
      goto LABEL_91;
    case 6:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      game_1286480_alt1(a1 + 16);
      goto LABEL_91;
    case 7:
      v62 = *(_QWORD*)(a1 + 24);
      *(_DWORD*)(a1 + 36) = v14 + 2;
      (*(void (**)(_QWORD, __int64, _QWORD))(
          **(_QWORD**)game_map_history_g_transporter_ptr[0] + 64LL))(
          *game_map_history_g_transporter_ptr[0], a1 + 16,
          *(unsigned __int8*)(v62 + v14 + 1));
      goto LABEL_91;
    case 8:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      if (*(_BYTE*)(*(_QWORD*)(a1 + 24) + v14) != 0) {
        game_map_BonusExpList_Deserialize_alt1(
            (__int64*)(*GameData_212ce90[0] + 296), a1 + 16);
      }
      else {
        *(_DWORD*)(a1 + 36) = v14 + 3;
      }
      goto LABEL_91;
    case 9:
      v47 = *(_QWORD*)(a1 + 24);
      v48 = v14 + 2LL;
      v49 = v14 + 3LL;
      *(_DWORD*)(a1 + 36) = v48;
      v50 = *(unsigned __int8*)(v47 + v14 + 1);
      *(_DWORD*)(a1 + 36) = v49;
      v51 = *(unsigned __int8*)(v47 + v48);
      v52 = v14 + 4LL;
      *(_DWORD*)(a1 + 36) = v52;
      v53 = *(unsigned __int8*)(v47 + v49);
      *(_DWORD*)(a1 + 36) = v14 + 5;
      if (game_GameModeData_instance_ != 0) {
        v54 = ((v50 | (v51 << 8) | (v53 << 16)) & 0xFFFFFF |
               (*(unsigned __int8*)(v47 + v52) << 24)) &
              ~(*(char*)(v47 + v52) >> 7);
        if (v54 >= 9999999) {
          v54 = 9999999;
        }
        *(_DWORD*)(game_GameModeData_instance_ + 72) = v54;
      }
      goto LABEL_91;
    case 0xA:
      RecordSerializer_123d170_alt1(a1 + 16);
      goto LABEL_91;
    case 0xB:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      v40 = (_QWORD*)*GameData_212ce98[0];
      memcpy_alt1(*(_QWORD*)(*GameData_212ce98[0] + 32) + 8LL,
                  *(_QWORD*)(*GameData_212ce98[0] + 56) + 8LL, 0x800u);
      memcpy_alt1(v40[5] + 8LL, v40[8] + 8LL, 0x800u);
      v42 = (__int64 (**)(_QWORD*))v40[1];
      v41 = v40 + 1;
      v43 = (const char*)(*v42)(v41);
      v44 = (unsigned int)game_HashString32_alt1(v43);
      v45 = *(_QWORD*)(a1 + 16);
      LODWORD(v117) = v44;
      if (((*(__int64 (**)(__int64, __int64*))(v45 + 16))(a1 + 16, &v117) &
           1) != 0) {
        v46 = *(int*)(a1 + 36);
        *(_DWORD*)(a1 + 36) = v46 + 1;
        (*(void (**)(_QWORD*, __int64, _QWORD))(*v41 + 24LL))(
            v41, a1 + 16, *(unsigned __int8*)(*(_QWORD*)(a1 + 24) + v46));
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 16) + 24LL))(a1 + 16, 0);
      goto LABEL_91;
    case 0xC:
      game_map_history_123d310_alt2(a1 + 16);
      goto LABEL_91;
    case 0xD:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      GameRoutine_12a6820_alt1(a1 + 16);
      goto LABEL_91;
    case 0xE:
      v36 = *(_QWORD*)(a1 + 24) + v14;
      v37 = *GameData_212ce90[0];
      *(_DWORD*)(a1 + 36) = v14 + 2;
      v38 = *(_DWORD*)(v37 + 20);
      if (*(_BYTE*)(v36 + 1) != 0) {
        v39 = 2048;
      }
      else {
        v39 = 0;
      }
      *(_DWORD*)(v37 + 20) = v38 & 0xFFFFF7FF | v39;
      game_VariableManager_SetFlag_alt1(
          (__int64)&game_map_kVariableSituation1000, (v38 & 0x1000) != 0);
      game_VariableManager_SetFlag_alt1(
          (__int64)&game_map_kVariableSituation800,
          (*(_DWORD*)(v37 + 20) & 0x800) != 0);
      game_VariableManager_SetFlag_alt1(
          (__int64)&game_map_kVariableSituation200,
          (*(_DWORD*)(v37 + 20) & 0x200) != 0);
      Situation_763690_alt1(v37);
      goto LABEL_91;
    case 0xF:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      GameRoutine_960b80_alt1((__int64*)(a1 + 16));
      goto LABEL_91;
    case 0x10:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      if (*game_sound_g_game_sound_ptr[0] != 0) {
        GameManager_a35190_alt1(*(_DWORD**)game_sound_g_game_sound_ptr[0],
                                a1 + 16);
      }
      goto LABEL_91;
    case 0x11:
      *(_DWORD*)(a1 + 36) = v14 + 1;
      GameHr_1225d20(*(_QWORD**)GameData_2130668[0], (__int64*)(a1 + 16));
      GameHr_1272e40(*(_QWORD**)GameData_2130670[0], (__int64*)(a1 + 16));
      goto LABEL_91;
    case 0x12:
      v89 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
      GameHr_1235540(v89, a1 + 16);
      v90 = *(_QWORD**)(a1 + 152);
      *(_QWORD*)(a1 + 152) = v89;
      if (v90 != nullptr) {
        goto LABEL_67;
      }
      goto LABEL_91;
    case 0x13:
      v91 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
      GameHr_1235540(v91, a1 + 16);
      v90 = *(_QWORD**)(a1 + 160);
      *(_QWORD*)(a1 + 160) = v91;
      if (v90 != nullptr) {
      LABEL_67:
        GameRoutine_65d6c0_alt1(v90);
        v92 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v92 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, (__int64)v90);
      }
      goto LABEL_91;
    case 0x14:
      v81 = *(_QWORD*)(a1 + 24);
      v82 = v14 + 2LL;
      v83 = GameData_212ce90[0];
      v84 = v14 + 3LL;
      *(_DWORD*)(a1 + 36) = v82;
      v85 = v14 + 4LL;
      v86 = *(unsigned __int8*)(v81 + v14 + 1);
      *(_DWORD*)(a1 + 36) = v84;
      v87 = *v83;
      LODWORD(v82) = *(unsigned __int8*)(v81 + v82);
      *(_DWORD*)(a1 + 36) = v85;
      LODWORD(v82) =
          v86 | ((_DWORD)v82 << 8) | (*(unsigned __int8*)(v81 + v84) << 16);
      *(_DWORD*)(a1 + 36) = v14 + 5;
      v88 = v82 | (*(unsigned __int8*)(v81 + v85) << 24);
      if (*(_DWORD*)(v87 + 320) != v88) {
        *(_DWORD*)(v87 + 320) = v88;
      }
      goto LABEL_91;
    default:
      goto LABEL_91;
    }
  }
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
