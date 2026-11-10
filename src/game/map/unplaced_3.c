#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* Image_72b6c0(_QWORD*);
_QWORD* game_map_Mind_SetTargetList(__int64, _QWORD*);
__attribute__((swiftcall)) void game_map_74d5a0(PSEUDO_X8, char*);
__int64* GameRoutine_78d280(__int64, _BYTE*);
__int64* ProcMapSeqTargetSelect_78e5d0(__int64);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 BattleInfo_790b00(__int64, __int64);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 GameRoutine_1832df0(__int64, char, char);
__int64 GameRoutine_18aff60(__int64 result, __int64);
__int64 GameRoutine_19f3620(__int64, char);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_76f770();
__int64 GameRoutine_7992e0(__int64);
__int64 GameRoutine_79e560(__int64 result);
__int64 GameRoutine_845840(_QWORD*, __int16, __int16);
__int64 GameRoutine_8517e0(__int64 result, int*, __int64, char);
__int64 GameRoutine_a15720(__int64*, __int16, __int16);
__int64 GameRoutine_a15c60(_QWORD*, int, int);
__int64 GameRoutine_a15d40(__int64 result);
__int64 ITarget_7730f0(__int64);
__int64 Image_72a260(__int64);
__int64 Image_72b4a0(__int64);
__int64 MapUtil_753570(int, int);
__int64 MapUtil_756480(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcMapSeqTargetSelect_78ece0(__int64);
__int64 ProcMapSeqTargetSelect_78ee60(__int64, char, char);
__int64 UnitSkillList_84cc00(__int64*, _DWORD*, __int64);
__int64 UnitSkillList_84cf20(__int64, __int64, char);
__int64 UnitSkillList_84e640(__int64 result);
__int64 UnitSkillList_84e760(__int64 result);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitItemList_Sort(__int64, unsigned int, int);
__int64 game_Unit_EquipItem_6d8f40(__int64, unsigned int);
__int64 game_Unit_GetParam(__int64);
__int64 game_map_768a20(__int64, __int64, __int64, _BYTE*, unsigned __int8,
                        char*, __int64);
__int64 game_map_790ba0(__int64);
__int64 game_map_799aa0(__int64 result, __int64);
__int64 game_map_799b90(__int64, __int64);
__int64 game_map_anonymous_76fa20();
__int64 game_map_f54910(__int64);
__int64 game_sound_PlayCursorTargetSe();
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__n128 BattleArea_8b9d00(__int64);
bool Cursor_7339d0(__int64);
bool GameRoutine_844b40(__int64);
bool ProcMapSeqTargetSelect_78f220(__int64, __int64, unsigned __int16*,
                                   __int64);
bool game_map_Cursor_Impl_Tick(_QWORD*, __int64);
char** GameRoutine_f155c0(char** result, char*, char*, unsigned __int64);
char* VTarget_779520(_QWORD*, __int16, __int16);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212d208;
extern _UNKNOWN* GameData_21d21d0;
extern _UNKNOWN GameData_1acec0c;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21d2c90;
extern __int128 GameData_21a6120;
extern __int64 (*game_map_RouteMeshData_vtable[])();
extern __int64 (*game_map_TRoute_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitDamage_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfe8[5];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212cff8[3];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d220[5];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21cf830;
extern __int64 GameData_21d2bd8;
extern __int64 GameData_21d2be0;
extern __int64 GameData_21d2be8;
extern __int64 GameData_21d2bf8;
extern __int64 GameData_21d2c08;
extern __int64 GameData_21d2c18;
extern __int64 GameData_21d2c20;
extern __int64 GameData_21d2c28;
extern __int64 GameData_21d2c38;
extern __int64 GameData_21d2c48;
extern __int64 GameData_21d2c58;
extern __int64 GameData_21d2c60;
extern __int64 GameData_21d2c68;
extern __int64 GameData_21d2c78;
extern __int64 GameData_21d2c88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_empty_item;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_map_Action_targets_;
extern __int64 game_script_unit_g_damage_sequence;
extern char GameData_21d2bd0;
extern char GameData_21d2c10;
extern char GameData_21d2c50;
extern int GameData_1ac696c;
extern int GameData_21d2bf0;
extern int GameData_21d2c00;
extern int GameData_21d2c30;
extern int GameData_21d2c40;
extern int GameData_21d2c70;
extern int GameData_21d2c80;
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
void BattleInfoWindow_183fa50();
void Cursor_730ff0(__int64, __int128*);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(const char*);
void snd_Fade_Fade_10c830(__int64, float);
__int64* game_map_75fb50(__int64 a1);
__int64 game_map_76ad80(__int64 a1, __int64 a2, int a3, char a4, const char* a5,
                        char a6);
void game_map_78a0a0(__int64 a1);
__int64 game_map_79d560(__int64 a1);
__int64 game_map_f1c4a0(__int64** a1, __int64 a2);

__int64* game_map_75fb50(__int64 a1)
{
  __int64* result;
  __int64 v3;
  char v4;
  int v6;
  __int64 v7;
  int v8;
  char v9;
  int v10;
  char v11[4];
  struct {
    __int64 (**v12)();
    char v13;
    char gap25_[127];
    int v14;
    char v15;
    char gap157_[3];
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    char v24;
    char gap193_[7];
    __int64 v25;
  } v12_;
  _QWORD v26[6];

  result = (__int64*)(*GameData_212cfd0[0] + 8);
  if (*(_BYTE*)result != 0) {
    result = game_UnitPool_Get(result);
    if (result != nullptr) {
      v3 = (__int64)result;
      if (result[49] != 0) {
        *((_DWORD*)result + 104) |= 0x10u;
        v4 = MapUtil_756480((__int64)result);
        v12_.v25 = 0;
        v6 = *(char*)(v3 + 585);
        v7 = *(_QWORD*)(v3 + 440);
        v12_.v12 = game_map_TRoute_vtable;
        v8 = *(char*)(v3 + 584);
        if (v7 != 0) {
          v9 = *(_BYTE*)(v7 + 16);
        }
        else {
          v9 = 9;
        }
        v10 = *(_DWORD*)(v3 + 592);
        v12_.v20 = v6;
        v12_.v21 = v8;
        v12_.v18 = v6;
        v12_.v19 = v8;
        v12_.v24 = 0;
        v12_.v22 = v6;
        v12_.v23 = 0;
        v12_.v15 = v9;
        v12_.v13 = v4;
        v26[4] = 0;
        v12_.v16 = v10;
        v12_.v17 = v8;
        v12_.v14 = 1;
        v11[0] = 2;
        return (__int64*)game_map_768a20(a1, v3, (__int64)&v12_.v12, v11, 0,
                                         nullptr, (__int64)v26);
      }
    }
  }
  return result;
}

__int64 game_map_76ad80(__int64 a1, __int64 a2, int a3, char a4, const char* a5,
                        char a6)
{
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  unsigned int v29;
  __int64 v30;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d2c90,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d2c90) != 0) {
    GameData_21d2bd0 = 13;
    GameData_21d2c10 = 13;
    GameData_21d2bd8 = 0;
    GameData_21d2be0 = (__int64)GameRoutine_76f770;
    GameData_21d2be8 = 0;
    GameData_21d2bf0 = 0;
    GameData_21d2bf8 = 0;
    GameData_21d2c00 = 0;
    GameData_21d2c08 = 0;
    GameData_21d2c28 = 0;
    GameData_21d2c30 = 0;
    GameData_21d2c38 = 0;
    GameData_21d2c40 = 0;
    GameData_21d2c48 = 0;
    GameData_21d2c50 = 0;
    GameData_21d2c78 = 0;
    GameData_21d2c18 = 0;
    GameData_21d2c20 = (__int64)game_map_anonymous_76fa20;
    GameData_21d2c80 = 0;
    GameData_21d2c88 = 0;
    GameData_21d2c70 = 0;
    GameData_21d2c60 = 0;
    GameData_21d2c68 = 0;
    GameData_21d2c58 = 0;
    __cxa_guard_release(&GameData_21d2c90);
  }
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       200, 16, 0);
  v14 = GameData_212c608[0];
  *(_QWORD*)(v13 + 96) = 0;
  *(_QWORD*)(v13 + 104) = 0;
  *(_QWORD*)(v13 + 112) = 0;
  *(_QWORD*)(v13 + 120) = 0;
  *(_QWORD*)(v13 + 128) = 0;
  *(_WORD*)(v13 + 136) = 0;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = "NULL";
  *(_QWORD*)(v13 + 138) = 0;
  *(_QWORD*)(v13 + 144) = 0;
  *(_QWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)(v13 + 80) = 0;
  *(_QWORD*)(v13 + 88) = 0;
  *(_QWORD*)v13 = v14 + 16;
  *(_QWORD*)(v13 + 8) = 0;
  game_ProcInst_Register(v13);
  *(_QWORD*)(v13 + 152) = a2;
  *(_QWORD*)v13 = game_map_anonymous_ProcUnitAction_vtable;
  v15 = *GameData_212cfe8[0];
  v16 = *(_DWORD*)(*GameData_212cfe8[0] + 16);
  *(_DWORD*)(*GameData_212cfe8[0] + 16) = v16 + 1;
  if (v16 == 0) {
    (**(void (***)(__int64))(v15 + 8))(v15 + 8);
  }
  *(_DWORD*)(v13 + 160) = a3;
  *(_BYTE*)(v13 + 164) = a4;
  *(_QWORD*)v13 = game_map_anonymous_ProcUnitDamage_vtable;
  if (a5 == nullptr) {
    if (a3 <= 0) {
      if (*(_WORD*)(a2 + 492) != 0) {
        a5 = "Rod_Heal_Hit";
      }
      else {
        a5 = "Rod_Rest_Hit";
      }
    }
    else {
      a5 = "Btl_Hit_Damage";
    }
  }
  v17 = strlen(a5);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = fw_memory_HeapManager_Allocate(*v12, v20, 16, 0);
    *(_QWORD*)(v13 + 176) = v18;
    *(_QWORD*)(v13 + 184) = v19;
    *(_QWORD*)(v13 + 168) = v20 | 1;
    goto LABEL_18;
  }
  v19 = v13 + 169;
  *(_BYTE*)(v13 + 168) = 2 * v17;
  if (v17 != 0) {
  LABEL_18:
    memcpy(v19, a5, v18);
  }
  *(_BYTE*)(v19 + v18) = 0;
  v21 = *v12;
  *(_BYTE*)(v13 + 192) = a6;
  v22 = *(_QWORD*)(v13 + 152);
  v23 = fw_memory_HeapManager_Allocate(v21, 32, 16, 0);
  v24 = *(unsigned __int8*)(v22 + 2088);
  v25 = (__int64*)v23;
  v26 = (__int64*)GameData_21d21d0;
  *(_BYTE*)(v23 + 25) = v24;
  if (v26 != nullptr) {
    while (1) {
      while (1) {
        v29 = *((unsigned __int8*)v26 + 25);
        v28 = v26;
        if (v24 >= v29) {
          break;
        }
        v26 = (__int64*)*v26;
        v27 = v28;
        if (*v28 == 0) {
          goto LABEL_26;
        }
      }
      if (v29 >= v24) {
        break;
      }
      v26 = (__int64*)v26[1];
      if (v26 == nullptr) {
        v27 = v28 + 1;
        goto LABEL_26;
      }
    }
    v30 = 128;
    if (*(_QWORD*)(*v12 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v12 + v30, v23);
  }
  else {
    v27 = (__int64*)&GameData_21d21d0;
    v28 = (__int64*)&GameData_21d21d0;
  LABEL_26:
    *(_QWORD*)v23 = 0;
    *(_QWORD*)(v23 + 8) = 0;
    *(_QWORD*)(v23 + 16) = v28;
    *v27 = v23;
    if (*(_QWORD*)game_map_Action_targets_ != 0) {
      game_map_Action_targets_ = *(_QWORD*)game_map_Action_targets_;
      v25 = (__int64*)*v27;
    }
    fw_containers_BalanceAfterInsert((__int64*)GameData_21d21d0, v25);
    ++game_script_unit_g_damage_sequence;
  }
  return ProcInst_657850(v13, (__int64)&GameData_21d2bd0,
                         (__int64)"ProcUnitDamage", 1, a1);
}

void game_map_78a0a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  int* v6;
  int v7;
  __int64* v8;
  __int64 v9;
  _BYTE* v10;
  int v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned int* v16;
  unsigned int v17;
  const char* v18;
  float v19;
  const char* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  _BYTE* v27;
  __int64 v28;
  unsigned int v29;
  __int128 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  bool v35;
  unsigned __int8* v36;
  unsigned int v37;
  int v38;
  unsigned int v40;
  __int64 v41;
  unsigned int v42;
  bool v43;
  unsigned int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  unsigned int v51;
  int v52;
  __int64 v54;
  char v55;
  char v56;
  int v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v69;
  int v70;
  __int64 v71;
  unsigned int v72;
  __int64 v73;
  __int64 v74;
  unsigned int v75;
  __int64 v77;
  __int64 v78;
  __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  float v91;
  float v92;
  float v93;
  float v94;
  __int64* v95;
  __int64 v96;
  int v97;
  __int64 v106;
  _DWORD* v107;
  float32x4_t v108;
  float v109;
  int8x16_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float v113;
  __int64 v114;
  __int64* v115;
  __int64 v116;
  int v117;
  int v118;
  int v119;
  unsigned int v120;
  __int64 v121;
  __int64 v122;
  unsigned int v123;
  unsigned __int8* v125;
  unsigned int v126;
  int v127;
  int v128;
  int v129;
  unsigned int v130;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  void* v134;
  __int64 v135;
  unsigned int v136;
  __int64 v137;
  __int64 v138;
  unsigned int v139;
  bool v140;
  unsigned int v141;
  __int64 v142;
  _BYTE* v143;
  __int64 v144;
  __int64 v145;
  unsigned __int8* v146;
  unsigned __int8* v147;
  int v148;
  __int64 v149;
  int v150;
  int v151;
  int v152;
  unsigned __int64 v154;
  int v155;
  int v156;
  unsigned __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  __int64** v161;
  __int64* v162;
  unsigned __int64 v163;
  __int64 v164;
  int v165;
  float32x4_t v166;
  float v167;
  int8x16_t v168;
  float v169;
  __int64 v170;
  char* v171;
  __int64 v172;
  int v173;
  __int64* v174;
  __int64 v175;
  __int64 v176;
  int v177;
  int v178;
  int v179;
  float32x4_t v180;
  float v181;
  int8x16_t v182;
  float v183;
  unsigned int v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  int v188;
  int v189;
  __int64 v190;
  char* v191;
  int v192;
  __int64* v193;
  __int16 v194;
  __int64 v195;
  _QWORD* v196;
  __int64 v202;
  __int64 v203;
  int v204;
  unsigned int v205;
  int v206;
  int v207;
  int v208;
  __int64 v209;
  int v210;
  __int64* v211;
  __int64 v212;
  _QWORD* v213;
  unsigned int v219;
  int v220;
  __int64 v222;
  int v223;
  __int64 v224;
  unsigned __int8* v225;
  unsigned int v226;
  unsigned __int8* v227;
  unsigned int v228;
  __int64 v229;
  unsigned int v230;
  __int128 v231;
  unsigned int v232;
  const char* v233;
  __int64 v234;
  float v235;
  float v236;
  __int64 v237;
  int v238;
  __int64 v239;
  char* v240;
  float v241;
  float v242;
  float v243;
  float v244;
  float v245;
  float v246;
  float v247;
  int v248;
  unsigned int v249;
  float v250;
  float v251;
  float v252;
  float v253;
  float v254;
  float v255;
  __int64 v256;
  int v257;
  unsigned int v258;
  float v259;
  float v260;
  float v261;
  float v262;
  float v263;
  float v264;
  float v265;
  float v266;
  float v267;
  float32x4_t v268;
  unsigned int v269;
  int v270;
  unsigned int v271;
  int v272;
  unsigned int v273;
  __int64* v274;
  __int64 v275;
  __int64 v276;
  int v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  unsigned int v281;
  unsigned int v282;
  bool v283;
  __int64 v284;
  float32x4_t v285;
  float v286;
  float v287;
  float v288;
  float v289;
  __int64 v290;
  int v291;
  char v292;
  int v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64* v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  unsigned __int16* v301;
  int v302;
  void* v303;
  int v304;
  __int64 v305;
  __int64 v306;
  unsigned __int64 v307;
  __int64 v308;
  __int64* v309;
  unsigned __int64 v310;
  __int64 v311;
  __int64 v312;
  unsigned __int16* v313;
  int v314;
  void* v315;
  int v316;
  unsigned __int16* v317;
  __int64 v318;
  __int64 v319;
  int v320;
  void* v321;
  unsigned __int16* v322;
  __int64 v323;
  __int64 v324;
  int v325;
  void* v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  unsigned __int64 v330;
  int v331;
  _DWORD* v332;
  int v333;
  _DWORD* v334;
  int8x16_t v335;
  __int64 v336;
  _WORD* v337;
  int v338;
  int v339;
  int v340;
  int v341;
  float32x4_t v342;
  float32x4_t v343;
  float32x4_t v344;
  struct {
    __int128 v345;
    float* v346;
    float v347;
    char gap188_[4];
    float32x4_t v348;
  } v345_;
  float32x4_t v349[10];

  v318 = COERCE_AS(__typeof__(v318),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v323 = COERCE_AS(__typeof__(v323),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = game_g_game_setting_ptr;
  v3 = *(_QWORD*)game_g_game_setting_ptr;
  v4 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v4 & 1) != 0) {
    v7 = *(_DWORD*)(a1 + 272);
    v8 = GameData_212cff0[0];
    v9 = *GameData_212cff0[0];
    if (v7 <= -1) {
      v10 = GameData_212d208;
    }
    else {
      v10 = (_BYTE*)(*GameData_212cff0[0] + 12LL * (unsigned int)v7 + 68);
    }
    v11 = (char)v10[1];
    if (v11 < 0 || (v12 = (char)v10[2]) < 0) {
      snd_Fade_Fade_10c830((__int64)&v345_.v345, 0x0.0p+0f),
          v318 = COERCE_AS(__typeof__(v318),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v323 = COERCE_AS(__typeof__(v323),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v18 = "SE_SYS_NG";
      v19 = 0x1.0000000000000p+0f;
      v20 = "SE_SYS_NG";
    LABEL_351:
      snd_play_ff2d0((__int64)v18, (__int64)v20, (__int64)&v345_.v345, 0,
                     0x10001u, 0, 0x0.0p+0f, v19),
          v318 = COERCE_AS(__typeof__(v318),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v323 = COERCE_AS(__typeof__(v323),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_Fade_Destroy_Fade(&v345_.v345),
          v318 = COERCE_AS(__typeof__(v318),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v323 = COERCE_AS(__typeof__(v323),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return;
    }
    v13 = GameData_212cfd0[0];
    v14 = *GameData_212cfd0[0];
    *(_BYTE*)(v14 + 20) = *(_BYTE*)(v9 + 32);
    *(_DWORD*)(v14 + 12) = *(_DWORD*)(v9 + 20);
    *(_DWORD*)(v14 + 16) = *(_DWORD*)(v9 + 24);
    if ((*(_DWORD*)(v9 + 48) & 0xFFF) != 0) {
      v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(v9 + 48) & 0xFFF));
      v16 = (unsigned int*)(v14 + 56);
      if (v15 != 0) {
      LABEL_20:
        v17 = *v16 & 0xFFFFF000 | *(_WORD*)(v15 + 16) & 0xFFF;
      LABEL_57:
        *v16 = v17;
        v44 = *(_DWORD*)(v9 + 52);
        if ((v44 & 0x80000000) != 0 ||
            (v45 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL)) ==
                0) {
          v46 = -1;
        }
        else {
          v46 = (*(__int64 (**)(__int64))(*(_QWORD*)(v45 + 144LL * v44) +
                                          32LL))(v45 + 144LL * v44),
          v318 = COERCE_AS(__typeof__(v318),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v323 = COERCE_AS(__typeof__(v323),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v47 = *v8;
        *(_DWORD*)(v14 + 60) = v46;
        v48 = *v13;
        LODWORD(v49) = *(_DWORD*)(v47 + 36);
        if ((v49 & 0x80000000) != 0) {
        LABEL_212:
          *(_DWORD*)(v48 + 40) = v49;
          *(_QWORD*)(v48 + 44) = 0;
          goto LABEL_305;
        }
        if (*(_BYTE*)(v48 + 8) == 0) {
          goto LABEL_302;
        }
        v50 = game_UnitPool_Get((_BYTE*)(v48 + 8)),
        v318 = COERCE_AS(__typeof__(v318),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v323 = COERCE_AS(__typeof__(v323),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v50 == nullptr) {
          goto LABEL_302;
        }
        v51 = *(unsigned __int8*)(*v8 + 32);
        v35 = v51 > 6;
        v52 = (1 << v51) & 0x68;
        if (v35 || v52 == 0) {
          goto LABEL_302;
        }
        v54 = (__int64)v50;
        v337 = (_WORD*)(a1 + 11560);
        game_Unit_EquipItem_6d8f40((__int64)v50, v49),
            v318 = COERCE_AS(__typeof__(v318),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v323 = COERCE_AS(__typeof__(v323),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v55 = game_UnitItemList_Sort(v54 + 828, 0, 6),
        v318 = COERCE_AS(__typeof__(v318),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v323 = COERCE_AS(__typeof__(v323),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v56 = game_UnitItemList_Sort(v54 + 828, 6u, 24),
        v318 = COERCE_AS(__typeof__(v318),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v323 = COERCE_AS(__typeof__(v323),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v55 & 1) != 0 || (v56 & 1) != 0) {
          v57 = *(_DWORD*)(v54 + 416);
          if ((v57 & 0x10000000) == 0) {
            *(_DWORD*)(v54 + 416) = v57 | 0x10000000;
            game_6c51e0(v54),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            GameRoutine_6c6da0(v54),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            game_6c6ec0(v54),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_DWORD*)(v54 + 416) &= ~0x10000000u;
          }
        }
        if (*(_WORD*)(v54 + 1952) != 0) {
          v58 = *(_QWORD*)(v54 + 1952);
        }
        else {
          v58 = 0;
        }
        if (*(_BYTE*)(a1 + 11561) != 0) {
          GameRoutine_7992e0(a1 + 304),
              v318 = COERCE_AS(__typeof__(v318),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v323 = COERCE_AS(__typeof__(v323),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_7992e0(a1 + 1064),
              v318 = COERCE_AS(__typeof__(v318),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v323 = COERCE_AS(__typeof__(v323),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_7992e0(a1 + 1824),
              v318 = COERCE_AS(__typeof__(v318),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v323 = COERCE_AS(__typeof__(v323),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          GameRoutine_7992e0(a1 + 2584),
              v318 = COERCE_AS(__typeof__(v318),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v323 = COERCE_AS(__typeof__(v323),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_DWORD*)(a1 + 11544) = 0;
          *v337 = 0;
          *(_QWORD*)(a1 + 11564) = 0;
          *(_QWORD*)(a1 + 11570) = 0;
          BattleArea_8b9d00(a1 + 11584),
              v318 = COERCE_AS(__typeof__(v318),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v323 = COERCE_AS(__typeof__(v323),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v127 = *(char*)(v54 + 584);
        v128 = *(char*)(v54 + 585);
        *(_QWORD*)(a1 + 328) = v54;
        *(_DWORD*)(a1 + 376) = v127;
        *(_DWORD*)(a1 + 380) = v128;
        *(_DWORD*)(a1 + 384) = v127;
        *(_DWORD*)(a1 + 388) = v128;
        v129 = *(_DWORD*)(v54 + 592);
        *(_QWORD*)(a1 + 348) = v58;
        *(_DWORD*)(a1 + 392) = v129;
        *(_DWORD*)(a1 + 344) = -1;
        v130 = *(_DWORD*)(a1 + 276);
        v131 = GameData_212cff0[0];
        if ((v130 & 0x80000000) != 0 ||
            (v132 = *GameData_212cff0[0],
             *(char*)(*GameData_212cff0[0] + 12LL * v130 + 12413) < 0) ||
            *(char*)(*GameData_212cff0[0] + 12LL * v130 + 12414) < 0) {
          v130 = *(_DWORD*)(a1 + 272);
          v13 = GameData_212cfd0[0];
          if ((v130 & 0x80000000) != 0) {
            v134 = GameData_212d208;
          LABEL_179:
            BattleInfo_790b00(a1 + 288, (__int64)v134),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((*(_DWORD*)(*v131 + 48) & 0xFFF) != 0) {
              v135 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(*v131 + 48) & 0xFFF));
            }
            else {
              v136 = *(unsigned __int16*)(*v131 + 40);
              if (*(_WORD*)(*v131 + 40) == 0) {
                v136 = *(unsigned __int16*)game_g_empty_item_ptr;
              }
              v137 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * v136);
              v138 = *(_QWORD*)(v137 + 192);
              v139 = *(unsigned __int8*)(v137 + 72);
              v140 = v138 == 0 || v139 > 7;
              if (v140 || *(_BYTE*)(v138 + 105) == 0) {
                v135 = 0;
              }
              else if (*(_BYTE*)(v138 + 104) == 2) {
                v135 = 0;
              }
              else {
                v135 = v138;
              }
            }
            if (*(_BYTE*)(a1 + 11561) != 0) {
              GameRoutine_7992e0(a1 + 304),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameRoutine_7992e0(a1 + 1064),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameRoutine_7992e0(a1 + 1824),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameRoutine_7992e0(a1 + 2584),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(_DWORD*)(a1 + 11544) = 0;
              *v337 = 0;
              *(_QWORD*)(a1 + 11564) = 0;
              *(_QWORD*)(a1 + 11570) = 0;
              BattleArea_8b9d00(a1 + 11584),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            game_map_799aa0(a1 + 304, v135),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v141 = *(_DWORD*)(*GameData_212cff0[0] + 52);
            if ((v141 & 0x80000000) != 0) {
              v142 = 0;
            }
            else {
              v142 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) +
                     144LL * v141;
            }
            if (*(_BYTE*)(a1 + 11561) != 0) {
              GameRoutine_7992e0(a1 + 304),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameRoutine_7992e0(a1 + 1064),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameRoutine_7992e0(a1 + 1824),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              GameRoutine_7992e0(a1 + 2584),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(_DWORD*)(a1 + 11544) = 0;
              *v337 = 0;
              *(_QWORD*)(a1 + 11564) = 0;
              *(_QWORD*)(a1 + 11570) = 0;
              BattleArea_8b9d00(a1 + 11584),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            game_map_799b90(a1 + 304, v142),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_DWORD*)(a1 + 11564) |= 1u;
            game_map_790ba0(a1 + 288),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v143 = (_BYTE*)(v54 + 847);
            v49 = 2;
            *(_BYTE*)(a1 + 11561) |= 1u;
            v144 = *GameData_212c878[0];
            v8 = GameData_212cff0[0];
            while (1) {
              if (*(_WORD*)(v143 - 19) != 0 && (*(v143 - 16) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v144 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v143 -
                                                                          19)) +
                                      72LL) < 8u) {
                LODWORD(v49) = v49 - 2;
                goto LABEL_302;
              }
              if (*(_WORD*)(v143 - 11) != 0 && (*(v143 - 8) & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v144 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v143 -
                                                                          11)) +
                                      72LL) < 8u) {
                break;
              }
              if (*(_WORD*)(v143 - 3) != 0 && (*v143 & 1) != 0 &&
                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v144 + 64) +
                                                 8LL *
                                                     *(unsigned __int16*)(v143 -
                                                                          3)) +
                                      72LL) < 8u) {
                goto LABEL_302;
              }
              v49 += 3;
              v143 += 24;
              if (v49 == 32) {
                LODWORD(v49) = -1;
                goto LABEL_212;
              }
            }
            LODWORD(v49) = v49 - 1;
          LABEL_302:
            v192 = *(unsigned __int8*)(v48 + 8);
            *(_DWORD*)(v48 + 40) = v49;
            if (v192 != 0 && game_UnitPool_Get((_BYTE*)(v48 + 8)) != nullptr) {
              v193 = &game_UnitPool_Get((_BYTE*)(v48 + 8))[(unsigned int)v49],
              v318 = COERCE_AS(__typeof__(v318),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v323 = COERCE_AS(__typeof__(v323),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v194 = *((_WORD*)v193 + 414);
              *(_BYTE*)(v48 + 46) = *((_BYTE*)v193 + 830);
              *(_WORD*)(v48 + 44) = v194;
              *(_BYTE*)(v48 + 47) = *((_BYTE*)v193 + 831);
              *(_DWORD*)(v48 + 48) = *((_DWORD*)v193 + 208);
            }
          LABEL_305:
            v195 = *v13;
            v196 = (_QWORD*)(*v8 + 12408);
            *(_BYTE*)(v195 + 313) = v11;
            *(_BYTE*)(v195 + 314) = v12;
            game_map_Mind_SetTargetList(v195, v196),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v202 = *v13;
            *(_BYTE*)(v202 + 313) = v10[1];
            *(_BYTE*)(v202 + 314) = v10[2];
            *(_DWORD*)(v202 + 320) = *((_DWORD*)v10 + 2);
            *(_BYTE*)(v202 + 317) = v10[5];
            *(_WORD*)(v202 + 318) = *((_WORD*)v10 + 3);
            *(_BYTE*)(v202 + 315) = v10[3];
            *(_BYTE*)(v202 + 316) = v10[4];
            v203 = *v8;
            v204 = *(unsigned __int8*)(*v8 + 32);
            if (v204 == 10) {
              v208 = 18;
            }
            else {
              if (v204 == 4) {
                v205 = *(unsigned __int16*)(v203 + 40);
                if (*(_WORD*)(v203 + 40) == 0) {
                  v205 = *(unsigned __int16*)game_g_empty_item_ptr;
                }
                v206 =
                    *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                  [0] +
                                                              64) +
                                                   8LL * v205) +
                                        73LL);
                if (v206 == 9) {
                  v207 = 6;
                LABEL_335:
                  *(_DWORD*)(a1 + 152) = v207;
                  v227 = *(unsigned __int8**)(a1 + 16);
                  if (v227 != nullptr) {
                    v228 = *v227;
                    if (v228 <= 0x10 && ((1 << v228) & 0x1CE00) != 0) {
                      *(_WORD*)(a1 + 136) |= 0x80u;
                    }
                  }
                  v229 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
                  if ((atomic_load_explicit(
                           (atomic_uchar* volatile)&GameData_21a6130,
                           memory_order_acquire) &
                       1) == 0 &&
                      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) !=
                          0) {
                    v327 = *((_QWORD*)GameData_212c540 + 1);
                    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                    *((_QWORD*)&GameData_21a6120 + 1) = v327;
                    __cxa_guard_release(&GameData_21a6130),
                        v318 = COERCE_AS(
                            __typeof__(v318),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v323 = COERCE_AS(
                            __typeof__(v323),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  *(_DWORD*)(v229 + 168) = 0;
                  v230 = DWORD2(GameData_21a6120);
                  *(_QWORD*)(v229 + 144) = GameData_21a6120;
                  v231 = *(_OWORD*)(v229 + 144);
                  *((_QWORD*)&v231 + 1) = v230;
                  *(_OWORD*)(v229 + 144) = v231;
                  goto LABEL_341;
                }
                if (v206 == 8) {
                  v207 = 5;
                  goto LABEL_335;
                }
              }
              v208 = 26;
            }
            if (GameData_21cf830 != 0) {
              *(_DWORD*)(GameData_21cf830 + 152) = v208;
            }
            v209 = *(_QWORD*)(a1 + 216);
            if (v209 != 0) {
              v210 = *(_DWORD*)(a1 + 256);
              v211 = GameData_212ce98[0];
              *(_BYTE*)(v209 + 584) = *(_DWORD*)(a1 + 252);
              *(_BYTE*)(v209 + 585) = v210;
              v212 = *v211;
              v213 = *(_QWORD**)(*v211 + 96);
              Image_72b4a0((__int64)v213),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              Image_72b6c0(v213),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              Image_72a260(*(_QWORD*)(v212 + 152)),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v203 = *v8;
            }
            v219 = *(unsigned __int8*)(v203 + 32);
            v35 = v219 > 0x1C;
            v220 = (1 << v219) & 0x12000378;
            if (!v35 && v220 != 0) {
              v222 = *(_QWORD*)GameData_212d8b0[0];
              if (*(_QWORD*)GameData_212d8b0[0] != 0) {
                v223 = *(_DWORD*)(v222 + 252);
                if (v223 <= -1) {
                  v223 = -1;
                }
                *(_DWORD*)(v222 + 252) = v223 + 1;
              }
            }
            v224 = *(_QWORD*)(a1 + 22912);
            if (v224 != 0) {
              if ((*(_WORD*)(v224 + 136) & 1) == 0) {
                ProcInst_657a50(v224, 1),
                    v318 = COERCE_AS(
                        __typeof__(v318),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v323 = COERCE_AS(
                        __typeof__(v323),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              *(_QWORD*)(a1 + 22912) = 0;
            }
            *(_BYTE*)(*GameData_212cfc0[0] + 24) = 0;
            *(_DWORD*)(a1 + 152) = 8;
            v225 = *(unsigned __int8**)(a1 + 16);
            if (v225 != nullptr) {
              v226 = *v225;
              if (v226 <= 0x10 && ((1 << v226) & 0x1CE00) != 0) {
                *(_WORD*)(a1 + 136) |= 0x80u;
              }
            }
          LABEL_341:
            if (*(_DWORD*)(a1 + 152) == 8) {
              v232 = *(unsigned __int8*)(*v8 + 32) - 3;
              if (v232 <= 6 && ((0x6Fu >> v232) & 1) != 0) {
                v233 = "SE_SYS_Decide_Battle";
              LABEL_350:
                snd_Fade_Fade_10c830((__int64)&v345_.v345, 0x0.0p+0f),
                    v318 = COERCE_AS(
                        __typeof__(v318),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v323 = COERCE_AS(
                        __typeof__(v323),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v19 = 0x1.0000000000000p+0f;
                v18 = v233;
                v20 = v233;
                goto LABEL_351;
              }
              if ((*(_DWORD*)(*v13 + 56) & 0xFFF) != 0) {
                v234 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(*v13 + 56) & 0xFFF));
                if (v234 != 0 && *(_BYTE*)(v234 + 104) == 9) {
                  v233 = "SE_SYS_Decide_H";
                  goto LABEL_350;
                }
              }
            }
            v233 = "SE_SYS_Decide_M";
            goto LABEL_350;
          }
          v132 = *GameData_212cff0[0];
          v133 = 64;
        }
        else {
          v133 = 12408;
          v13 = GameData_212cfd0[0];
        }
        v134 = (void*)(v132 + v133 + 12LL * v130 + 4);
        goto LABEL_179;
      }
    }
    else {
      v40 = *(unsigned __int16*)(v9 + 40);
      if (*(_WORD*)(v9 + 40) == 0) {
        v40 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v41 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v40);
      v15 = *(_QWORD*)(v41 + 192);
      v42 = *(unsigned __int8*)(v41 + 72);
      v43 = v15 == 0 || v42 > 7;
      if (!v43 && *(_BYTE*)(v15 + 105) != 0 && *(_BYTE*)(v15 + 104) != 2) {
        v16 = (unsigned int*)(v14 + 56);
        goto LABEL_20;
      }
      v16 = (unsigned int*)(v14 + 56);
    }
    v17 = *v16 & 0xFFFFF000;
    goto LABEL_57;
  }
  if ((v4 & 2) != 0) {
    v21 = GameData_212cff0[0];
    v22 = *GameData_212cff0[0];
    if ((*(_DWORD*)(*GameData_212cff0[0] + 48) & 0xFFF) != 0) {
      v23 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(*GameData_212cff0[0] + 48) & 0xFFF));
      if (v23 == 0) {
        goto LABEL_40;
      }
      v24 = *(unsigned __int8*)(v23 + 105);
    }
    else {
      v31 = *(unsigned __int16*)(v22 + 40);
      if (*(_WORD*)(v22 + 40) == 0) {
        v31 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v32 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v31);
      v33 = *(_QWORD*)(v32 + 192);
      v34 = *(unsigned __int8*)(v32 + 72);
      v35 = v33 == 0 || v34 > 7;
      if (v35) {
        goto LABEL_40;
      }
      v24 = *(unsigned __int8*)(v33 + 105);
      if (*(_BYTE*)(v33 + 105) == 0 || *(_BYTE*)(v33 + 104) == 2) {
        goto LABEL_40;
      }
    }
    if (v24 == 3) {
      goto LABEL_130;
    }
    if (v24 == 2) {
      v25 = *(_DWORD*)(a1 + 272);
      v26 = v22 + 12LL * (unsigned int)v25 + 68;
      if (v25 <= -1) {
        v27 = GameData_212d208;
      }
      else {
        v27 = (_BYTE*)v26;
      }
      GameRoutine_78d280(a1, v27),
          v318 = COERCE_AS(__typeof__(v318),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v323 = COERCE_AS(__typeof__(v323),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v28 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v328 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v328;
        __cxa_guard_release(&GameData_21a6130),
            v318 = COERCE_AS(__typeof__(v318),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v323 = COERCE_AS(__typeof__(v323),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      *(_DWORD*)(v28 + 168) = 0;
      v29 = DWORD2(GameData_21a6120);
      *(_QWORD*)(v28 + 144) = GameData_21a6120;
      v30 = *(_OWORD*)(v28 + 144);
      *((_QWORD*)&v30 + 1) = v29;
      *(_OWORD*)(v28 + 144) = v30;
    LABEL_130:
      *(_QWORD*)(a1 + 272) = -1;
      snd_Fade_Fade_10c830((__int64)&v345_.v345, 0x0.0p+0f),
          v318 = COERCE_AS(__typeof__(v318),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v323 = COERCE_AS(__typeof__(v323),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_play_ff2d0((__int64)"SE_SYS_Cancel_M", (__int64)"SE_SYS_Cancel_M",
                     (__int64)&v345_.v345, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f),
          v318 = COERCE_AS(__typeof__(v318),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v323 = COERCE_AS(__typeof__(v323),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      snd_Fade_Destroy_Fade(&v345_.v345),
          v318 = COERCE_AS(__typeof__(v318),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v323 = COERCE_AS(__typeof__(v323),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((*(_DWORD*)(*v21 + 48) & 0xFFF) != 0) {
        v116 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                          8LL * (*(_DWORD*)(*v21 + 48) & 0xFFF));
        if (v116 == 0) {
          goto LABEL_158;
        }
        v117 = *(unsigned __int8*)(v116 + 105);
      }
      else {
        v120 = *(unsigned __int16*)(*v21 + 40);
        if (*(_WORD*)(*v21 + 40) == 0) {
          v120 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v121 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v120);
        v122 = *(_QWORD*)(v121 + 192);
        v123 = *(unsigned __int8*)(v121 + 72);
        if (v122 == 0 || v123 > 7) {
          goto LABEL_158;
        }
        v117 = *(unsigned __int8*)(v122 + 105);
        if (*(_BYTE*)(v122 + 105) == 0 || *(_BYTE*)(v122 + 104) == 2) {
          goto LABEL_158;
        }
      }
      if ((unsigned int)(v117 - 2) <= 2) {
        v118 = (unsigned __int8)(v117 - 1);
      LABEL_159:
        *(_DWORD*)(a1 + 152) = v118;
        v125 = *(unsigned __int8**)(a1 + 16);
        if (v125 == nullptr) {
          return;
        }
        v126 = *v125;
        if (v126 > 0x10 || ((1 << v126) & 0x1CE00) == 0) {
          return;
        }
        goto LABEL_162;
      }
    LABEL_158:
      v118 = 4;
      goto LABEL_159;
    }
  LABEL_40:
    *(_DWORD*)(a1 + 152) = 7;
    v36 = *(unsigned __int8**)(a1 + 16);
    if (v36 == nullptr) {
      return;
    }
    v37 = *v36;
    v35 = v37 > 0x10;
    v38 = (1 << v37) & 0x1CE00;
    if (v35 || v38 == 0) {
      return;
    }
  LABEL_162:
    *(_WORD*)(a1 + 136) |= 0x80u;
    return;
  }
  if ((v4 & 4) != 0 &&
      (*(_QWORD*)GameData_212d8b0[0] == 0 ||
       (*(_BYTE*)(*(_QWORD*)GameData_212d8b0[0] + 256LL) & 1) == 0) &&
      (*GameData_212cff8[0] == 0 ||
       *(_QWORD*)(*GameData_212cff8[0] + 96) ==
           *(_QWORD*)(*GameData_212cff8[0] + 88))) {
    v345_.v345 = (__typeof__(v345_.v345)){0};
    if ((GameRoutine_18aff60(a1, (__int64)&v345_.v345) & 1) != 0) {
      return;
    }
    v3 = *(_QWORD*)v2;
  }
  if (*(_BYTE*)(v3 + 807) == 1) {
    if (*(_BYTE*)(v3 + 804) == 1) {
      v5 = *(_DWORD*)(a1 + 272);
      v6 = (int*)(a1 + 272);
      goto LABEL_87;
    }
    if (*(_BYTE*)(v3 + 940) == 1 && (*(_BYTE*)(v3 + 805) & 1) != 0 &&
        (*(_BYTE*)(v3 + 806) & 1) != 0) {
      v5 = *(_DWORD*)(a1 + 272);
      v6 = (int*)(a1 + 272);
      goto LABEL_82;
    }
  }
  if (*(_BYTE*)(v3 + 903) == 1 &&
      ((*(_BYTE*)(v3 + 900) & 1) != 0 || *(_BYTE*)(v3 + 940) == 1 &&
                                             (*(_BYTE*)(v3 + 901) & 1) != 0 &&
                                             (*(_BYTE*)(v3 + 902) & 1) != 0)) {
    v5 = *(_DWORD*)(a1 + 272);
    v6 = (int*)(a1 + 272);
    if (*(_BYTE*)(v3 + 807) == 0) {
      goto LABEL_86;
    }
    if ((*(_BYTE*)(v3 + 804) & 1) == 0) {
    LABEL_82:
      if (*(_BYTE*)(v3 + 940) == 1 && (*(_BYTE*)(v3 + 805) & 1) != 0 &&
          (*(_BYTE*)(v3 + 806) & 1) != 0) {
        goto LABEL_87;
      }
      if (*(_BYTE*)(v3 + 903) != 1) {
        goto LABEL_440;
      }
    LABEL_86:
      if ((*(_BYTE*)(v3 + 900) & 1) == 0 &&
          (*(_BYTE*)(v3 + 940) != 1 || (*(_BYTE*)(v3 + 901) & 1) == 0 ||
           *(_BYTE*)(v3 + 902) != 1)) {
        goto LABEL_440;
      }
    }
  LABEL_87:
    v59 = GameData_212cff0[0];
    v60 = *GameData_212cff0[0];
    if ((*(_DWORD*)(*GameData_212cff0[0] + 48) & 0xFFF) != 0) {
      v61 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(*GameData_212cff0[0] + 48) & 0xFFF));
      if (v61 == 0) {
        goto LABEL_100;
      }
      v62 = *(unsigned __int8*)(v61 + 105);
    }
    else {
      v64 = *(unsigned __int16*)(v60 + 40);
      if (*(_WORD*)(v60 + 40) == 0) {
        v64 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v65 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v64);
      v66 = *(_QWORD*)(v65 + 192);
      v67 = *(unsigned __int8*)(v65 + 72);
      if (v66 == 0 || v67 > 7) {
        goto LABEL_100;
      }
      v62 = *(unsigned __int8*)(v66 + 105);
      if (*(_BYTE*)(v66 + 105) == 0 || *(_BYTE*)(v66 + 104) == 2) {
        goto LABEL_100;
      }
    }
    if ((unsigned int)(v62 - 2) < 3) {
      v63 = 0;
      goto LABEL_101;
    }
  LABEL_100:
    v63 = 1;
  LABEL_101:
    if ((*(_DWORD*)(*GameData_212cff0[0] + 48) & 0xFFF) != 0) {
      v69 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (*(_DWORD*)(*GameData_212cff0[0] + 48) & 0xFFF));
      if (v69 != 0) {
        v70 = *(unsigned __int8*)(v69 + 105);
      LABEL_104:
        if ((unsigned int)(v70 - 2) >= 3) {
          v71 = 64;
        }
        else {
          v71 = 12408;
        }
        goto LABEL_116;
      }
    }
    else {
      v72 = *(unsigned __int16*)(v60 + 40);
      if (*(_WORD*)(v60 + 40) == 0) {
        v72 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v73 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v72);
      v74 = *(_QWORD*)(v73 + 192);
      v75 = *(unsigned __int8*)(v73 + 72);
      if (v74 != 0 && v75 <= 7) {
        v70 = *(unsigned __int8*)(v74 + 105);
        if (*(_BYTE*)(v74 + 105) != 0 && *(_BYTE*)(v74 + 104) != 2) {
          goto LABEL_104;
        }
      }
    }
    v71 = 64;
  LABEL_116:
    v77 = v60 + v71;
    if (*(_DWORD*)(v60 + v71 + 12292) == 0) {
      goto LABEL_440;
    }
    v338 = v5;
    *((_QWORD*)&v345_.v345 + 1) = &GameData_1acec0c;
    *(_QWORD*)&v345_.v345 = game_HashString((__int64)&GameData_1acec0c),
    v318 = COERCE_AS(__typeof__(v318),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v323 = COERCE_AS(__typeof__(v323),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (game_GameModeData_instance_ != 0) {
      v78 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v345_.v345),
      v318 = COERCE_AS(__typeof__(v318),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v323 = COERCE_AS(__typeof__(v323),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v78 != 0 && *(_DWORD*)(v78 + 32) != 0) {
        v87 = *v59;
        v88 = *GameData_212cfc0[0];
        Cursor_7339d0(*GameData_212cfc0[0]),
            v318 = COERCE_AS(__typeof__(v318),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v323 = COERCE_AS(__typeof__(v323),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v89 = *(_DWORD*)(v77 + 12292);
        if (v89 != 0) {
          if (v89 == 1) {
            v90 = 0;
            v91 = -0x1.fffffe0000000p+127f;
            v92 = 0x1.fffffe0000000p+127f;
            v93 = -0x1.fffffe0000000p+127f;
            v94 = 0x1.fffffe0000000p+127f;
          }
          else {
            v239 = 0;
            v91 = -0x1.fffffe0000000p+127f;
            v240 = (char*)(v71 + v60 + 18);
            v92 = 0x1.fffffe0000000p+127f;
            v93 = -0x1.fffffe0000000p+127f;
            v94 = 0x1.fffffe0000000p+127f;
            do {
              v239 -= 2;
              v241 = (float)((float)((float)(unsigned int)(*(v240 - 13) + 256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v242 = v241 + -0x1.4000000000000p+1f;
              v243 = v241 + 0x1.4000000000000p+1f;
              if (v242 >= v92) {
                v242 = v92;
              }
              if (v91 < v243) {
                v91 = v243;
              }
              v244 = (float)((float)((float)(unsigned int)(*(v240 - 12) + 256) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v245 = v244 + -0x1.4000000000000p+1f;
              v246 = v244 + 0x1.4000000000000p+1f;
              if (v245 >= v94) {
                v245 = v94;
              }
              if (v93 < v246) {
                v93 = v246;
              }
              v247 = (float)(unsigned int)(*(v240 - 1) + 256);
              v248 = *v240;
              v240 += 24;
              v249 = v248 + 256;
              v250 = (float)((float)(v247 * 0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v251 = v250 + -0x1.4000000000000p+1f;
              v252 = v250 + 0x1.4000000000000p+1f;
              if (v251 >= v242) {
                v92 = v242;
              }
              else {
                v92 = v251;
              }
              if (v91 < v252) {
                v91 = v252;
              }
              v253 = (float)((float)((float)v249 * 0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v254 = v253 + -0x1.4000000000000p+1f;
              v255 = v253 + 0x1.4000000000000p+1f;
              if (v254 >= v245) {
                v94 = v245;
              }
              else {
                v94 = v254;
              }
              if (v93 < v255) {
                v93 = v255;
              }
            } while (-(__int64)(v89 & 0xFFFFFFFE) != v239);
            v90 = -v239;
          }
          if ((v89 & 1) != 0) {
            v256 = v77 + 4 + 12 * v90;
            v257 = *(char*)(v256 + 1);
            v258 = *(char*)(v256 + 2) + 256;
            v259 = (float)((float)((float)(unsigned int)(v257 + 256) *
                                   0x1.4000000000000p+2f) +
                           0x1.4000000000000p+1f) +
                   -0x1.4000000000000p+10f;
            v260 = v259 + -0x1.4000000000000p+1f;
            v261 = v259 + 0x1.4000000000000p+1f;
            if (v260 < v92) {
              v92 = v260;
            }
            if (v91 < v261) {
              v91 = v261;
            }
            v262 = (float)((float)((float)v258 * 0x1.4000000000000p+2f) +
                           0x1.4000000000000p+1f) +
                   -0x1.4000000000000p+10f;
            v263 = v262 + -0x1.4000000000000p+1f;
            v264 = v262 + 0x1.4000000000000p+1f;
            if (v263 < v94) {
              v94 = v263;
            }
            if (v93 < v264) {
              v93 = v264;
            }
          }
          v236 = v91 + -0x1.0624de0000000p-10f;
          v235 = v93 + -0x1.0624de0000000p-10f;
        }
        else {
          v94 = 0x1.fffffe0000000p+127f;
          v235 = -0x1.fffffe0000000p+127f;
          v92 = 0x1.fffffe0000000p+127f;
          v236 = -0x1.fffffe0000000p+127f;
        }
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(*(_QWORD*)(v88 + 48) + 16LL) + 16LL))(
            (void*)(&v345_.v345), *(_QWORD*)(v88 + 48) + 16LL),
            v318 = COERCE_AS(__typeof__(v318),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v323 = COERCE_AS(__typeof__(v323),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v236 >= *(float*)&v345_.v345) {
          v265 = *(float*)&v345_.v345;
        }
        else {
          v265 = v236;
        }
        if (*(float*)&v345_.v345 < v92) {
          v265 = v92;
        }
        if (v235 >= *((float*)&v345_.v345 + 2)) {
          v266 = *((float*)&v345_.v345 + 2);
        }
        else {
          v266 = v235;
        }
        if (*((float*)&v345_.v345 + 2) >= v94) {
          v267 = v266;
        }
        else {
          v267 = v94;
        }
        LANES128(v268).n128_u64[0] = LODWORD(v265);
        LANES128(v268).n128_u64[1] = LODWORD(v267);
        v344 = v268;
        Cursor_730ff0(v88, (__int128*)&v344),
            v318 = COERCE_AS(__typeof__(v318),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v323 = COERCE_AS(__typeof__(v323),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v269 = GameRoutine_845840((_QWORD*)(v60 + v71),
                                  *(_DWORD*)(*(_QWORD*)(v88 + 48) + 8LL),
                                  *(_DWORD*)(*(_QWORD*)(v88 + 48) + 12LL)),
        v318 = COERCE_AS(__typeof__(v318),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v323 = COERCE_AS(__typeof__(v323),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v269 & 0x80000000) != 0) {
          goto LABEL_440;
        }
        if (v63 != 0) {
          if (v269 == *v6) {
            goto LABEL_440;
          }
          if (*v6 < 0) {
            goto LABEL_440;
          }
          if ((signed int)v269 >= *(_DWORD*)(v87 + 12356)) {
            goto LABEL_440;
          }
          v270 = *(_DWORD*)(v87 + 36);
          if ((v270 & 0x80000000) == 0 &&
              ((*(_DWORD*)(v87 + 12LL * v269 + 76) >> v270) & 1) == 0) {
            goto LABEL_440;
          }
          v271 = v269;
          game_sound_PlayCursorTargetSe(),
              v318 = COERCE_AS(__typeof__(v318),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v323 = COERCE_AS(__typeof__(v323),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_DWORD*)(a1 + 272) = v271;
          goto LABEL_410;
        }
        v272 = *(_DWORD*)(a1 + 276);
        if (v269 == v272) {
          goto LABEL_440;
        }
        if (v272 < 0) {
          goto LABEL_440;
        }
        if ((signed int)v269 >= *(_DWORD*)(v77 + 12292)) {
          goto LABEL_440;
        }
        v273 = v269;
        if (!GameRoutine_844b40(v87 + 12LL * v269 + 12412)) {
          goto LABEL_440;
        }
        game_sound_PlayCursorTargetSe(),
            v318 = COERCE_AS(__typeof__(v318),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v323 = COERCE_AS(__typeof__(v323),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_DWORD*)(a1 + 276) = v273;
        goto LABEL_416;
      }
    }
    v95 = GameData_212cfc0[0];
    WORD1(v345_.v345) = 0;
    v96 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v97 = *(_DWORD*)(v96 + 8);
    BYTE1(v345_.v345) = *(_DWORD*)(v96 + 12);
    LOBYTE(v345_.v345) = v97;
    game_map_74d5a0((void*)(&v343), (char*)&v345_.v345),
        v318 = COERCE_AS(__typeof__(v318),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v323 = COERCE_AS(__typeof__(v323),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (!game_map_Cursor_Impl_Tick(*(_QWORD**)(*v95 + 48), 0)) {
      goto LABEL_440;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(*(_QWORD*)(*v95 + 48) + 16LL) + 16LL))(
        (void*)(&v342), *(_QWORD*)(*v95 + 48) + 16LL),
        v318 = COERCE_AS(__typeof__(v318),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v323 = COERCE_AS(__typeof__(v323),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v106 = 276;
    HIWORD(v340) = 0;
    v332 = (_DWORD*)(a1 + 276);
    if (v63 != 0) {
      v106 = 272;
      v107 = v6;
    }
    else {
      v107 = (_DWORD*)(a1 + 276);
    }
    *((_QWORD*)&v345_.v345 + 1) = &GameData_1ac696c;
    v334 = v107;
    v108 = vsubq_f32(v342, v343);
    v109 = LANES128(v343).n128_f32[2];
    v330 = LANES128(v343).n128_u64[0];
    v341 = *(_DWORD*)(a1 + v106);
    LANES128(v108).n128_u32[1] = 0;
    v110 = vmulq_f32(v108, v108);
    LANES128(v110).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
            .n64_u64[0];
    LANES128(v110).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
            .n64_u64[0];
    LANES128(v110).n128_u64[1] = LANES128(v110).n128_u64[0];
    v111 = vrsqrteq_f32(v110);
    v112 = vmulq_f32(v111, vrsqrtsq_f32(v111, vmulq_f32(v110, v111)));
    v335 = vbicq_s8(
        vmulq_f32(v108,
                  vmulq_f32(v112, vrsqrtsq_f32(v112, vmulq_f32(v110, v112)))),
        vceqzq_f32(v110));
    v333 = (int)(float)((float)(LANES128(v343).n128_f32[0] +
                                0x1.4000000000000p+10f) *
                        0x1.99999a0000000p-3f);
    LOBYTE(v340) = v333;
    v331 = (int)(float)((float)(LANES128(v343).n128_f32[2] +
                                0x1.4000000000000p+10f) *
                        0x1.99999a0000000p-3f);
    BYTE1(v340) = v331;
    v113 = 0x0.0p+0f;
    *(_QWORD*)&v345_.v345 = game_HashString((__int64)&GameData_1ac696c),
    v318 = COERCE_AS(__typeof__(v318),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v323 = COERCE_AS(__typeof__(v323),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (game_GameModeData_instance_ != 0) {
      v114 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v345_.v345),
      v318 = COERCE_AS(__typeof__(v318),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v323 = COERCE_AS(__typeof__(v323),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v115 = GameData_212cff0[0];
      if (v114 != 0) {
        v113 = (float)*(int*)(v114 + 32) * 0x1.1df46a0000000p-6f;
      }
    }
    else {
      v115 = GameData_212cff0[0];
    }
    v329 = v77 + 4;
    v345_.v347 = v113;
    v339 = 2139095039;
    *(_QWORD*)&v345_.v345 = &v341;
    *((_QWORD*)&v345_.v345 + 1) = &v340;
    v345_.v346 = (float*)&v339;
    v349[0] = v335;
    v345_.v348 = v343;
    if (*v115 != 0) {
      v145 = *v115 + 8;
    }
    else {
      v145 = 0;
    }
    v336 = v60 + v71;
    if ((GameRoutine_a15d40(v145) & 1) != 0) {
      v146 = *(unsigned __int8**)(a1 + 23120);
      v147 = *(unsigned __int8**)(a1 + 23128);
      if (v146 == v147) {
        goto LABEL_278;
      }
    LABEL_221:
      v148 = v146[1];
      v149 = *v115 + 12LL * *v6;
      v150 = *(unsigned __int8*)(v149 + 69);
      v151 = *(unsigned __int8*)(v149 + 70);
      v152 = *v146;
      if (v152 == v150 && v148 == v151) {
        goto LABEL_220;
      }
      v154 = *(_QWORD*)(a1 + 23240);
      v155 = (char)v152;
      v156 = (char)v148;
      if (v154 == 0 || *(_QWORD*)(a1 + 23256) == 0) {
        goto LABEL_248;
      }
      v158 = v155 | (unsigned int)(32 * (char)v148);
      v159 = v154 - 1;
      if ((v154 & (v154 - 1)) != 0) {
        v160 = v155 | (unsigned int)(32 * v156);
        if (v154 <= v158) {
          v160 = (unsigned int)v158 % (unsigned int)v154;
        }
      }
      else {
        v160 = ((_DWORD)v154 - 1) & (unsigned int)v158;
      }
      v161 = *(__int64***)(*(_QWORD*)(a1 + 23232) + 8 * v160);
      if (v161 == nullptr || (v162 = *v161) == nullptr) {
      LABEL_248:
        v165 = -1;
        goto LABEL_249;
      }
      if ((v154 & v159) == 0) {
        while (1) {
          v164 = v162[1];
          if (v164 == v158) {
            if (*((_DWORD*)v162 + 4) == (_DWORD)v158) {
              goto LABEL_254;
            }
          }
          else if ((v164 & v159) != v160) {
            goto LABEL_248;
          }
          v162 = (__int64*)*v162;
          if (v162 == nullptr) {
            goto LABEL_248;
          }
        }
      }
      while (1) {
        v163 = v162[1];
        if (v163 == v158) {
          if (*((_DWORD*)v162 + 4) == (_DWORD)v158) {
          LABEL_254:
            v165 = *((_DWORD*)v162 + 5);
          LABEL_249:
            LANES128(v166).n128_u32[1] = 0;
            LANES128(v166).n128_f32[0] =
                (float)((float)((float)(unsigned int)(v155 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
            LANES128(v166).n128_u64[1] = COERCE_UNSIGNED_INT(
                (float)((float)((float)(unsigned int)(v156 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f);
            v344 = vsubq_f32(v166, v345_.v348);
            LANES128(v344).n128_u32[1] = 0;
            v167 = math_Vec3_Angle(&v344, v349),
            v318 = COERCE_AS(__typeof__(v318),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v323 = COERCE_AS(__typeof__(v323),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v167 > 0x0.0p+0f && v167 < 0x1.921fb60000000p+0f &&
                v167 < v345_.v347) {
              v168 = vmulq_f32(v344, v344);
              LANES128(v168).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v168, v168, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0])))
                      .n64_u64[0];
              v169 =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v168).n128_u64[0])))
                      .n64_f32[0];
              if (v169 <= *v345_.v346) {
                *(_DWORD*)v345_.v345 = v165;
                **((_DWORD**)&v345_.v345 + 1) = *(_DWORD*)v146;
                *v345_.v346 = v169;
              }
            }
          LABEL_220:
            v146 += 4;
            if (v146 != v147) {
              goto LABEL_221;
            }
          LABEL_278:
            v184 = v341;
            if (v341 == *v334 &&
                (unsigned __int8)v340 == (unsigned __int8)v333 &&
                BYTE1(v340) == (unsigned __int8)v331) {
              if (*v115 != 0) {
                v185 = *v115 + 8;
              }
              else {
                v185 = 0;
              }
              if ((GameRoutine_a15d40(v185) & 1) != 0) {
                v186 = *GameData_212cfc0[0];
                v187 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
                v188 = *(_DWORD*)(v187 + 8);
                v189 = *(_DWORD*)(v187 + 12);
                v184 = GameRoutine_a15c60((_QWORD*)(a1 + 23096), v188, v189),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if ((v184 & 0x80000000) == 0) {
                  goto LABEL_286;
                }
              LABEL_430:
                LANES128(v285).n128_u32[1] = HIDWORD(v330);
                v286 = *(float*)&v330 + -0x1.4000000000000p+1f;
                v287 = (float)(*(float*)&v330 + 0x1.4000000000000p+1f) +
                       -0x1.0624de0000000p-10f;
                v288 = (float)(v109 + 0x1.4000000000000p+1f) +
                       -0x1.0624de0000000p-10f;
                if (v287 >= LANES128(v342).n128_f32[0]) {
                  v287 = LANES128(v342).n128_f32[0];
                }
                if (LANES128(v342).n128_f32[0] >= v286) {
                  v286 = v287;
                }
                LANES128(v285).n128_f32[0] = v286;
                if (v288 >= LANES128(v342).n128_f32[2]) {
                  v288 = LANES128(v342).n128_f32[2];
                }
                if (LANES128(v342).n128_f32[2] >=
                    (float)(v109 + -0x1.4000000000000p+1f)) {
                  v289 = v288;
                }
                else {
                  v289 = v109 + -0x1.4000000000000p+1f;
                }
                LANES128(v285).n128_u64[1] = LODWORD(v289);
                v344 = v285;
                Cursor_730ff0(v186, (__int128*)&v344),
                    v318 = COERCE_AS(
                        __typeof__(v318),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v323 = COERCE_AS(
                        __typeof__(v323),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              LABEL_440:
                v290 = *(_QWORD*)v2;
                v291 = *(unsigned __int8*)(*(_QWORD*)v2 + 807LL);
                if ((v291 == 1 && ((*(_BYTE*)(v290 + 804) & 1) != 0 ||
                                   *(_BYTE*)(v290 + 940) == 1 &&
                                       (*(_BYTE*)(v290 + 805) & 1) != 0 &&
                                       (*(_BYTE*)(v290 + 806) & 1) != 0) ||
                     *(_BYTE*)(v290 + 903) == 1 &&
                         ((*(_BYTE*)(v290 + 900) & 1) != 0 ||
                          *(_BYTE*)(v290 + 940) == 1 &&
                              (*(_BYTE*)(v290 + 901) & 1) != 0 &&
                              *(_BYTE*)(v290 + 902) == 1)) &&
                    (*(_WORD*)(v290 + 954) & 0x180) != 0) {
                  if (*(_BYTE*)(a1 + 23272) != 1) {
                    if (*(_QWORD*)(a1 + 22984) - *(_QWORD*)(a1 + 22976) < 9u) {
                      goto LABEL_458;
                    }
                    v292 = 1;
                  LABEL_453:
                    *(_BYTE*)(a1 + 23272) = v292;
                    if ((*(_BYTE*)(v290 + 807) & 1) != 0) {
                      goto LABEL_459;
                    }
                    v291 = 0;
                    goto LABEL_464;
                  }
                  if (*(_QWORD*)(a1 + 22936) - *(_QWORD*)(a1 + 22928) > 0x10u) {
                    v292 = 0;
                    goto LABEL_453;
                  }
                }
              LABEL_458:
                if (*(_BYTE*)(*(_QWORD*)v2 + 807LL) == 0) {
                  goto LABEL_464;
                }
              LABEL_459:
                if ((*(_BYTE*)(v290 + 804) & 1) != 0) {
                  v291 = 1;
                  goto LABEL_466;
                }
                v291 = 1;
                if (*(_BYTE*)(v290 + 940) != 1 ||
                    (*(_BYTE*)(v290 + 805) & 1) == 0 ||
                    (*(_BYTE*)(v290 + 806) & 1) == 0) {
                LABEL_464:
                  if (*(_BYTE*)(v290 + 903) != 1 ||
                      (*(_BYTE*)(v290 + 900) & 1) == 0 &&
                          (*(_BYTE*)(v290 + 940) != 1 ||
                           (*(_BYTE*)(v290 + 901) & 1) == 0 ||
                           *(_BYTE*)(v290 + 902) != 1)) {
                    if ((*(_BYTE*)(v290 + 953) & 8) != 0) {
                      goto LABEL_473;
                    }
                  LABEL_479:
                    if (v291 != 0) {
                    LABEL_480:
                      if ((*(_BYTE*)(v290 + 804) & 1) == 0 &&
                          (*(_BYTE*)(v290 + 940) != 1 ||
                           (*(_BYTE*)(v290 + 805) & 1) == 0 ||
                           (*(_BYTE*)(v290 + 806) & 1) == 0)) {
                        goto LABEL_491;
                      }
                    LABEL_493:
                      v304 = *(_DWORD*)(v290 + 952);
                      if ((*(_BYTE*)(a1 + 23272) & ((v304 & 0x1000) != 0)) !=
                              0 ||
                          (v304 & 0x20000) != 0) {
                        goto LABEL_500;
                      }
                    LABEL_512:
                      v316 = *(_DWORD*)(v290 + 952);
                      if ((v316 & 0x2000) != 0 &&
                          *(_QWORD*)(a1 + 22936) - *(_QWORD*)(a1 + 22928) >=
                              0x11u) {
                        v317 = (unsigned __int16*)GameRoutine_19f3620(
                            a1 + 22920, 0),
                        v318 = COERCE_AS(
                            __typeof__(v318),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v323 = COERCE_AS(
                            __typeof__(v323),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                        v319 = v318;
                        GameRoutine_1832df0(*(_QWORD*)GameData_212d220[0], 0,
                                            0),
                            v318 = COERCE_AS(__typeof__(v318),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                            v323 = COERCE_AS(__typeof__(v323),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                        v320 = *(_DWORD*)(a1 + 272);
                        if (v320 <= -1) {
                          v321 = GameData_212d208;
                        }
                        else {
                          v321 = (void*)(*GameData_212cff0[0] +
                                         12LL * (unsigned int)v320 + 68);
                        }
                        if (!ProcMapSeqTargetSelect_78f220(a1, (__int64)v321,
                                                           v317, v319)) {
                          v316 = *(_DWORD*)(*(_QWORD*)v2 + 952LL);
                          goto LABEL_519;
                        }
                      }
                      else {
                      LABEL_519:
                        if ((v316 & 0x1000) != 0 &&
                            *(_QWORD*)(a1 + 22936) - *(_QWORD*)(a1 + 22928) >=
                                0x11u) {
                          v322 = (unsigned __int16*)GameRoutine_19f3620(
                              a1 + 22920, 1),
                          v318 = COERCE_AS(
                              __typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v323 = COERCE_AS(
                              __typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                          v324 = v323;
                          GameRoutine_1832df0(*(_QWORD*)GameData_212d220[0], 0,
                                              1),
                              v318 =
                                  COERCE_AS(__typeof__(v318),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v323 =
                                  COERCE_AS(__typeof__(v323),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v325 = *(_DWORD*)(a1 + 272);
                          if (v325 <= -1) {
                            v326 = GameData_212d208;
                          }
                          else {
                            v326 = (void*)(*GameData_212cff0[0] +
                                           12LL * (unsigned int)v325 + 68);
                          }
                          ProcMapSeqTargetSelect_78f220(a1, (__int64)v326, v322,
                                                        v324),
                              v318 =
                                  COERCE_AS(__typeof__(v318),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v323 =
                                  COERCE_AS(__typeof__(v323),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                        }
                      }
                      return;
                    }
                  LABEL_491:
                    if (*(_BYTE*)(v290 + 903) == 1 &&
                        ((*(_BYTE*)(v290 + 900) & 1) != 0 ||
                         *(_BYTE*)(v290 + 940) == 1 &&
                             (*(_BYTE*)(v290 + 901) & 1) != 0 &&
                             *(_BYTE*)(v290 + 902) == 1)) {
                      goto LABEL_493;
                    }
                    if ((*(_BYTE*)(v290 + 953) & 4) == 0) {
                      goto LABEL_512;
                    }
                  LABEL_500:
                    v305 = *(_QWORD*)(a1 + 22984);
                    v306 = *(_QWORD*)(a1 + 22976);
                    if ((unsigned __int64)(v305 - v306) < 9) {
                      goto LABEL_512;
                    }
                    if (v305 == v306) {
                    LABEL_505:
                      v312 = 0;
                      v313 = nullptr;
                    }
                    else {
                      v307 = (v305 - v306) >> 3;
                      v308 = 0xFFFFFFFF00000000LL;
                      v309 = *(__int64**)(a1 + 22976);
                      v310 = v307;
                      while (1) {
                        v311 = *v309++;
                        if (*(_QWORD*)(a1 + 23008) == v311) {
                          break;
                        }
                        v308 += 0x100000000LL;
                        if (--v310 == 0) {
                          goto LABEL_505;
                        }
                      }
                      *(_QWORD*)(a1 + 23008) =
                          *(_QWORD*)(v306 +
                                     8LL * (int)((v307 + (v308 >> 32)) % v307));
                      (*(void (**)(__int64))(*(_QWORD*)(a1 + 22920) + 32LL))(
                          a1 + 22920),
                          v318 = COERCE_AS(
                              __typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v323 = COERCE_AS(
                              __typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v313 = *(unsigned __int16**)(a1 + 23000);
                      v312 = *(_QWORD*)(a1 + 23008);
                    }
                    GameRoutine_1832df0(*(_QWORD*)GameData_212d220[0], 1, 1),
                        v318 = COERCE_AS(
                            __typeof__(v318),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v323 = COERCE_AS(
                            __typeof__(v323),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v314 = *(_DWORD*)(a1 + 272);
                    if (v314 <= -1) {
                      v315 = GameData_212d208;
                    }
                    else {
                      v315 = (void*)(*GameData_212cff0[0] +
                                     12LL * (unsigned int)v314 + 68);
                    }
                    if (!ProcMapSeqTargetSelect_78f220(a1, (__int64)v315, v313,
                                                       v312)) {
                      v290 = *(_QWORD*)v2;
                      goto LABEL_512;
                    }
                    return;
                  }
                }
              LABEL_466:
                v293 = *(_DWORD*)(v290 + 952);
                if ((*(_BYTE*)(a1 + 23272) & ((v293 & 0x2000) != 0)) == 0 &&
                    (v293 & 0x40000) == 0) {
                  goto LABEL_479;
                }
              LABEL_473:
                v294 = *(_QWORD*)(a1 + 22984);
                v295 = *(_QWORD*)(a1 + 22976);
                if ((unsigned __int64)(v294 - v295) < 9) {
                  goto LABEL_479;
                }
                if (v294 == v295) {
                LABEL_478:
                  v300 = 0;
                  v301 = nullptr;
                }
                else {
                  v296 = 0x100000000LL;
                  v297 = *(__int64**)(a1 + 22976);
                  v298 = (v294 - v295) >> 3;
                  while (1) {
                    v299 = *v297++;
                    if (*(_QWORD*)(a1 + 23008) == v299) {
                      break;
                    }
                    v296 += 0x100000000LL;
                    if (--v298 == 0) {
                      goto LABEL_478;
                    }
                  }
                  *(_QWORD*)(a1 + 23008) = *(
                      _QWORD*)(v295 +
                               8LL *
                                   (int)((((v294 - v295) >> 3) + (v296 >> 32)) %
                                         (unsigned __int64)((v294 - v295) >>
                                                            3)));
                  (*(void (**)(__int64))(*(_QWORD*)(a1 + 22920) + 32LL))(a1 +
                                                                         22920),
                      v318 = COERCE_AS(
                          __typeof__(v318),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v323 = COERCE_AS(
                          __typeof__(v323),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v301 = *(unsigned __int16**)(a1 + 23000);
                  v300 = *(_QWORD*)(a1 + 23008);
                }
                GameRoutine_1832df0(*(_QWORD*)GameData_212d220[0], 1, 0),
                    v318 = COERCE_AS(
                        __typeof__(v318),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v323 = COERCE_AS(
                        __typeof__(v323),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v302 = *(_DWORD*)(a1 + 272);
                if (v302 <= -1) {
                  v303 = GameData_212d208;
                }
                else {
                  v303 = (void*)(*GameData_212cff0[0] +
                                 12LL * (unsigned int)v302 + 68);
                }
                if (ProcMapSeqTargetSelect_78f220(a1, (__int64)v303, v301,
                                                  v300)) {
                  return;
                }
                v290 = *(_QWORD*)v2;
                if ((*(_BYTE*)(*(_QWORD*)v2 + 807LL) & 1) != 0) {
                  goto LABEL_480;
                }
                goto LABEL_491;
              }
              v274 = GameData_212cfc0[0];
              v186 = *GameData_212cfc0[0];
              v275 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
              v188 = *(_DWORD*)(v275 + 8);
              v189 = *(_DWORD*)(v275 + 12);
              v184 = GameRoutine_845840((_QWORD*)v77, v188, v189),
              v318 = COERCE_AS(__typeof__(v318),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v323 = COERCE_AS(__typeof__(v323),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((v184 & 0x80000000) != 0) {
                goto LABEL_430;
              }
              if (v63 != 0) {
                v276 = *v115;
                if (*(_DWORD*)(*v115 + 12356) <=
                    (int)*(unsigned __int8*)(v329 + 12LL * v184)) {
                  goto LABEL_430;
                }
                v277 = *(_DWORD*)(v276 + 36);
                if ((v277 & 0x80000000) == 0 &&
                    ((*(_DWORD*)(v276 +
                                 12LL *
                                     *(unsigned __int8*)(v329 + 12LL * v184) +
                                 76) >>
                      v277) &
                     1) == 0) {
                  goto LABEL_430;
                }
              }
              else {
                v282 = v184;
                v283 = GameRoutine_844b40(v329 + 12LL * v184),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v186 = *v274;
                if (!v283) {
                  goto LABEL_430;
                }
                v284 = *(_QWORD*)(v186 + 48);
                v184 = v282;
                v77 = v336;
                LOBYTE(v188) = *(_BYTE*)(v284 + 8);
                v189 = *(_DWORD*)(v284 + 12);
              }
            LABEL_286:
              v340 = (unsigned __int8)v188 | ((unsigned __int8)v189 << 8);
              v341 = v184;
            }
            if (v63 != 0) {
              if (*v115 != 0) {
                v190 = *v115 + 8;
              }
              else {
                v190 = 0;
              }
              if ((GameRoutine_a15d40(v190) & 1) != 0) {
                v191 = VTarget_779520((_QWORD*)(*v115 + 8), (char)v340,
                                      SBYTE1(v340)),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (v191[1] < 0 || v191[2] < 0) {
                  v278 = GameRoutine_a15720((__int64*)(a1 + 23096), (char)v340,
                                            SBYTE1(v340)),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v278 == 0) {
                    goto LABEL_440;
                  }
                  v279 = *v115;
                  *(_BYTE*)(*v115 + 32) = *(_BYTE*)(v278 + 24);
                  v280 = ITarget_7730f0(v278),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v281 = v280 != 0 ? *(_DWORD*)(v279 + 48) & 0xFFFFF000 |
                                         *(_WORD*)(v280 + 16) & 0xFFF
                                   : *(_DWORD*)(v279 + 48) & 0xFFFFF000;
                  *(_DWORD*)(v279 + 48) = v281;
                  if (((*(__int64 (**)(__int64))(*(_QWORD*)(v279 + 8) + 24LL))(
                           v279 + 8) &
                       1) == 0) {
                    goto LABEL_440;
                  }
                  v191 = VTarget_779520((_QWORD*)(*v115 + 8), (char)v340,
                                        SBYTE1(v340)),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v191[1] < 0 || v191[2] < 0) {
                    goto LABEL_440;
                  }
                }
                *(_DWORD*)(a1 + 272) = (unsigned __int8)*v191;
                ProcMapSeqTargetSelect_78e5d0(a1),
                    v318 = COERCE_AS(
                        __typeof__(v318),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v323 = COERCE_AS(
                        __typeof__(v323),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                BattleInfoWindow_183fa50(),
                    v318 = COERCE_AS(
                        __typeof__(v318),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v323 = COERCE_AS(
                        __typeof__(v323),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                game_sound_PlayCursorTargetSe(),
                    v318 = COERCE_AS(
                        __typeof__(v318),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v323 = COERCE_AS(
                        __typeof__(v323),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              LABEL_417:
                if ((ProcMapSeqTargetSelect_78ece0(a1) & 1) == 0) {
                  *(_DWORD*)(a1 + 272) = v338;
                  ProcMapSeqTargetSelect_78e5d0(a1),
                      v318 = COERCE_AS(
                          __typeof__(v318),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v323 = COERCE_AS(
                          __typeof__(v323),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  BattleInfoWindow_183fa50(),
                      v318 = COERCE_AS(
                          __typeof__(v318),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v323 = COERCE_AS(
                          __typeof__(v323),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  goto LABEL_440;
                }
                return;
              }
              if (v341 == *v6) {
                goto LABEL_440;
              }
              if (*v6 < 0) {
                goto LABEL_440;
              }
              v237 = *v115;
              if (v341 >= *(_DWORD*)(*v115 + 12356)) {
                goto LABEL_440;
              }
              v238 = *(_DWORD*)(v237 + 36);
              if ((v238 & 0x80000000) == 0 &&
                  ((*(_DWORD*)(v237 + 12LL * v341 + 76) >> v238) & 1) == 0) {
                goto LABEL_440;
              }
              game_sound_PlayCursorTargetSe(),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(_DWORD*)(a1 + 272) = v341;
            LABEL_410:
              ProcMapSeqTargetSelect_78e5d0(a1),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              BattleInfoWindow_183fa50(),
                  v318 = COERCE_AS(
                      __typeof__(v318),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v323 = COERCE_AS(
                      __typeof__(v323),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_417;
            }
            if (v184 == *v332 || (*v332 & 0x80000000) != 0 ||
                (signed int)v184 >= *(_DWORD*)(v77 + 12292) ||
                !GameRoutine_844b40(*v115 + 12LL * (int)v184 + 12412)) {
              goto LABEL_440;
            }
            game_sound_PlayCursorTargetSe(),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_DWORD*)(a1 + 276) = v341;
          LABEL_416:
            ProcMapSeqTargetSelect_78e5d0(a1),
                v318 =
                    COERCE_AS(__typeof__(v318),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v323 =
                    COERCE_AS(__typeof__(v323),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            goto LABEL_417;
          }
        }
        else {
          if (v163 >= v154) {
            v163 %= v154;
          }
          if (v163 != v160) {
            goto LABEL_248;
          }
        }
        v162 = (__int64*)*v162;
        if (v162 == nullptr) {
          goto LABEL_248;
        }
      }
    }
    v170 = *(unsigned int*)(v77 + 12292);
    if ((_DWORD)v170 == 0) {
      goto LABEL_278;
    }
    v171 = (char*)(v71 + v60 + 5);
    while (1) {
      if (v63 != 0) {
        v172 = *v115;
        if (*(_DWORD*)(*v115 + 12356) > (int)(unsigned __int8)*(v171 - 1)) {
          v173 = *(_DWORD*)(v172 + 36);
          if (v173 < 0 ||
              ((*(_DWORD*)(v172 + 12LL * (unsigned __int8)*(v171 - 1) + 76) >>
                v173) &
               1) != 0) {
            goto LABEL_272;
          }
        }
      }
      else if ((MapUtil_753570(*v171, v171[1]) & 1) != 0) {
        if (v171[4] != 0 && (v174 = game_UnitPool_Get(v171 + 4)) != nullptr &&
                v174[49] != 0 ||
            (*(__int16*)(v171 + 5) & 0x8000000000000000LL) == 0 &&
                (v175 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) +
                                   8LL)) != 0 &&
                ((v176 = v175 + 144LL * *(__int16*)(v171 + 5),
                  ((*(__int64 (**)(__int64))(*(_QWORD*)v176 + 272LL))(v176) &
                   1) != 0) ||
                 ((*(__int64 (**)(__int64))(*(_QWORD*)v176 + 288LL))(v176) &
                  1) != 0)) {
        LABEL_272:
          v177 = (unsigned __int8)*(v171 - 1);
          if (*v6 != v177) {
            v178 = *v171;
            v179 = v171[1];
            LANES128(v180).n128_u32[1] = 0;
            LANES128(v180).n128_u32[3] = 0;
            LANES128(v180).n128_f32[0] =
                (float)((float)((float)(unsigned int)(v178 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
            LANES128(v180).n128_f32[2] =
                (float)((float)((float)(unsigned int)(v179 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
            v344 = vsubq_f32(v180, v345_.v348);
            LANES128(v344).n128_u32[1] = 0;
            v181 = math_Vec3_Angle(&v344, v349),
            v318 = COERCE_AS(__typeof__(v318),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v323 = COERCE_AS(__typeof__(v323),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v181 > 0x0.0p+0f && v181 < 0x1.921fb60000000p+0f &&
                v181 < v345_.v347) {
              v182 = vmulq_f32(v344, v344);
              LANES128(v182).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v182, v182, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0])))
                      .n64_u64[0];
              v183 =
                  LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0])))
                      .n64_f32[0];
              if (v183 <= *v345_.v346) {
                *(_DWORD*)v345_.v345 = v177;
                **((_DWORD**)&v345_.v345 + 1) =
                    (unsigned __int8)v178 | ((unsigned __int8)v179 << 8);
                *v345_.v346 = v183;
              }
            }
            v77 = v336;
          }
        }
      }
      --v170;
      v171 += 12;
      if (v170 == 0) {
        goto LABEL_278;
      }
    }
  }
  v119 = *(_DWORD*)(v3 + 948);
  if ((v119 & 0x220000) != 0) {
    if ((ProcMapSeqTargetSelect_78ee60(a1, 1, 1) & 1) != 0) {
      return;
    }
    v119 = *(_DWORD*)(*(_QWORD*)v2 + 948LL);
  }
  if ((v119 & 0x88000) != 0) {
    if ((ProcMapSeqTargetSelect_78ee60(a1, 1, 0) & 1) != 0) {
      return;
    }
    v119 = *(_DWORD*)(*(_QWORD*)v2 + 948LL);
  }
  if ((v119 & 0x440000) != 0) {
    if ((ProcMapSeqTargetSelect_78ee60(a1, 0, 1) & 1) != 0) {
      return;
    }
    v119 = *(_DWORD*)(*(_QWORD*)v2 + 948LL);
  }
  if ((v119 & 0x110000) == 0 ||
      (ProcMapSeqTargetSelect_78ee60(a1, 0, 0) & 1) == 0) {
    goto LABEL_440;
  }
}

__int64 game_map_79d560(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64* v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  int* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  __int64 v62;
  int* v63;
  __int64 v64;
  int v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  int v81;
  __int64 v82;
  int* v83;
  __int64 v84;
  int v85;
  __int64 v86;
  int v87;
  int v88;
  int v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  int v96;
  int v97;
  bool v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  int v106;
  int v107;
  __int64 v108;
  int v109;
  __int64 v110;
  int* v111;
  __int64 v112;
  int v113;
  __int64 v114;
  int v115;
  int v116;
  int v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  __int64 v128;
  int v129;
  __int64 v130;
  int* v131;
  __int64 v132;
  int v133;
  __int64 v134;
  int v135;
  int v136;
  int v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  _QWORD* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  int v149;
  int v150;
  __int64 v151;
  int v152;
  __int64 v153;
  int* v154;
  __int64 v155;
  int v156;
  __int64 v157;
  int v158;
  int v159;
  int v160;
  __int64 v161;
  __int64 v162;
  int* v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  int v169;
  int v170;
  __int64 v171;
  int v172;
  __int64 v173;
  int* v174;
  __int64 v175;
  int v176;
  __int64 v177;
  int v178;
  int v179;
  int v180;
  __int64 v181;
  __int64 v182;
  int* v184;
  __int64 v185;
  int v186;
  __int64 v187;
  int v188;
  int v189;
  int v190;
  __int64 v191;
  __int64 v192;
  int v193;

  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v1 + 11278) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 24);
    if (v9 != 0) {
      v10 = (__int64*)(a1 + 44);
      v11 = *(unsigned __int16*)(a1 + 44);
      *(_DWORD*)(a1 + 108) = *(unsigned __int8*)(v9 + 499);
      if (v11 == 0) {
        v12 = *(unsigned int*)(a1 + 40);
        if ((int)v12 >= 0) {
          v10 = (__int64*)(v9 + 8 * v12 + 828);
        }
        else {
          v10 = &game_g_empty_item;
        }
      }
      v13 =
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *(unsigned __int16*)v10) +
                              87LL);
      v14 = *((_DWORD*)v10 + 1) & 0xF;
      v15 = -*((unsigned __int8*)v10 + 2);
      *(_DWORD*)(a1 + 448) = 0;
      *(_QWORD*)(a1 + 504) = 0;
      *(_QWORD*)(a1 + 512) = 0;
      *(_DWORD*)(a1 + 104) = (v15 + v14 * v13) & ~((v15 + v14 * v13) >> 31);
      *(_QWORD*)(a1 + 432) = *(_QWORD*)(a1 + 424);
      *(_QWORD*)(a1 + 464) = *(_QWORD*)(a1 + 456);
      UnitSkillList_84cf20(a1 + 424, v9 + 1744, 1);
      if (*(_BYTE*)(a1 + 18) != 0) {
        v16 = game_g_shared_system_skills_ptr;
        v17 = (_QWORD*)(a1 + 504);
        v193 = *(_DWORD*)((_BYTE*)&(*(__int64 (*)[2])0x28LL)[1] +
                          game_g_shared_system_skills_ptr + 4) &
               0xFFF;
        if ((UnitSkillList_84cc00((__int64*)(a1 + 424), &v193, 1) & 1) != 0) {
          v18 = *(_QWORD*)(a1 + 456);
          v19 = *(_QWORD*)(a1 + 464);
          *v17 = 0;
          *(_QWORD*)(a1 + 512) = 0;
          v20 = v19 - v18;
          if ((int)((unsigned __int64)(v19 - v18) >> 2) >= 1) {
            v21 = (int)(v20 >> 2);
            v22 = v21 <= 1 ? 1LL : (int)(v20 >> 2);
            v23 = *GameData_212c880[0];
            if (v21 >= 2) {
              v43 = (int*)(v18 + 4);
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              v28 = 0;
              do {
                v28 += 2;
                v44 = *(_QWORD*)(*(_QWORD*)(v23 + 64) +
                                 8LL * (*(v43 - 1) & 0xFFF));
                v45 = v27 | (1 << *(_BYTE*)(v44 + 104));
                *(_WORD*)(a1 + 504) = v45;
                v46 = (1LL << *(_BYTE*)(v44 + 250)) | v26;
                *(_QWORD*)(a1 + 512) = v46;
                v47 = (1 << *(_BYTE*)(v44 + 115)) | v25;
                *(_DWORD*)(a1 + 508) = v47;
                v48 = *(unsigned __int16*)(*(_QWORD*)(v44 + 24) + 1064LL) | v24;
                *(_WORD*)(a1 + 506) = v48;
                v49 = *v43;
                v43 += 2;
                v50 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (v49 & 0xFFF));
                v27 = v45 | (1 << *(_BYTE*)(v50 + 104));
                *(_WORD*)(a1 + 504) = v27;
                v26 = (1LL << *(_BYTE*)(v50 + 250)) | v46;
                *(_QWORD*)(a1 + 512) = v26;
                v25 = (1 << *(_BYTE*)(v50 + 115)) | v47;
                *(_DWORD*)(a1 + 508) = v25;
                v24 = *(unsigned __int16*)(*(_QWORD*)(v50 + 24) + 1064LL) | v48;
                *(_WORD*)(a1 + 506) = v24;
              } while ((v22 & 0x7FFFFFFFFFFFFFFELL) != v28);
            }
            else {
              LOWORD(v24) = 0;
              v25 = 0;
              v26 = 0;
              LOWORD(v27) = 0;
              v28 = 0;
            }
            if ((v22 & 1) != 0) {
              v51 = *(_QWORD*)(*(_QWORD*)(v23 + 64) +
                               8LL * (*(_DWORD*)(v18 + 4 * v28) & 0xFFF));
              *(_WORD*)(a1 + 504) = v27 | (1 << *(_BYTE*)(v51 + 104));
              *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v51 + 250)) | v26;
              *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v51 + 115)) | v25;
              *(_WORD*)(a1 + 506) =
                  *(_WORD*)(*(_QWORD*)(v51 + 24) + 1064LL) | v24;
            }
          }
        }
        v193 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x50LL) + v16) & 0xFFF;
        if ((UnitSkillList_84cc00((__int64*)(a1 + 424), &v193, 1) & 1) != 0) {
          v52 = *(_QWORD*)(a1 + 456);
          v53 = *(_QWORD*)(a1 + 464);
          *v17 = 0;
          *(_QWORD*)(a1 + 512) = 0;
          v54 = v53 - v52;
          if ((int)((unsigned __int64)(v53 - v52) >> 2) >= 1) {
            v55 = (int)(v54 >> 2);
            v56 = v55 <= 1 ? 1LL : (int)(v54 >> 2);
            v57 = *GameData_212c880[0];
            if (v55 >= 2) {
              v63 = (int*)(v52 + 4);
              v58 = 0;
              v59 = 0;
              v60 = 0;
              v61 = 0;
              v62 = 0;
              do {
                v62 += 2;
                v64 = *(_QWORD*)(*(_QWORD*)(v57 + 64) +
                                 8LL * (*(v63 - 1) & 0xFFF));
                v65 = v61 | (1 << *(_BYTE*)(v64 + 104));
                *(_WORD*)(a1 + 504) = v65;
                v66 = (1LL << *(_BYTE*)(v64 + 250)) | v60;
                *(_QWORD*)(a1 + 512) = v66;
                v67 = (1 << *(_BYTE*)(v64 + 115)) | v59;
                *(_DWORD*)(a1 + 508) = v67;
                v68 = *(unsigned __int16*)(*(_QWORD*)(v64 + 24) + 1064LL) | v58;
                *(_WORD*)(a1 + 506) = v68;
                v69 = *v63;
                v63 += 2;
                v70 = *(_QWORD*)(*(_QWORD*)(v57 + 64) + 8LL * (v69 & 0xFFF));
                v61 = v65 | (1 << *(_BYTE*)(v70 + 104));
                *(_WORD*)(a1 + 504) = v61;
                v60 = (1LL << *(_BYTE*)(v70 + 250)) | v66;
                *(_QWORD*)(a1 + 512) = v60;
                v59 = (1 << *(_BYTE*)(v70 + 115)) | v67;
                *(_DWORD*)(a1 + 508) = v59;
                v58 = *(unsigned __int16*)(*(_QWORD*)(v70 + 24) + 1064LL) | v68;
                *(_WORD*)(a1 + 506) = v58;
              } while ((v56 & 0x7FFFFFFFFFFFFFFELL) != v62);
            }
            else {
              LOWORD(v58) = 0;
              v59 = 0;
              v60 = 0;
              LOWORD(v61) = 0;
              v62 = 0;
            }
            if ((v56 & 1) != 0) {
              v71 = *(_QWORD*)(*(_QWORD*)(v57 + 64) +
                               8LL * (*(_DWORD*)(v52 + 4 * v62) & 0xFFF));
              *(_WORD*)(a1 + 504) = v61 | (1 << *(_BYTE*)(v71 + 104));
              *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v71 + 250)) | v60;
              *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v71 + 115)) | v59;
              *(_WORD*)(a1 + 506) =
                  *(_WORD*)(*(_QWORD*)(v71 + 24) + 1064LL) | v58;
            }
          }
        }
        v193 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x128LL) + v16) & 0xFFF;
        if ((UnitSkillList_84cc00((__int64*)(a1 + 424), &v193, 1) & 1) != 0) {
          v72 = *(_QWORD*)(a1 + 456);
          v73 = *(_QWORD*)(a1 + 464);
          *v17 = 0;
          *(_QWORD*)(a1 + 512) = 0;
          v74 = v73 - v72;
          if ((int)((unsigned __int64)(v73 - v72) >> 2) >= 1) {
            v75 = (int)(v74 >> 2);
            v76 = v75 <= 1 ? 1LL : (int)(v74 >> 2);
            v77 = *GameData_212c880[0];
            if (v75 >= 2) {
              v83 = (int*)(v72 + 4);
              v78 = 0;
              v79 = 0;
              v80 = 0;
              v81 = 0;
              v82 = 0;
              do {
                v82 += 2;
                v84 = *(_QWORD*)(*(_QWORD*)(v77 + 64) +
                                 8LL * (*(v83 - 1) & 0xFFF));
                v85 = v81 | (1 << *(_BYTE*)(v84 + 104));
                *(_WORD*)(a1 + 504) = v85;
                v86 = (1LL << *(_BYTE*)(v84 + 250)) | v80;
                *(_QWORD*)(a1 + 512) = v86;
                v87 = (1 << *(_BYTE*)(v84 + 115)) | v79;
                *(_DWORD*)(a1 + 508) = v87;
                v88 = *(unsigned __int16*)(*(_QWORD*)(v84 + 24) + 1064LL) | v78;
                *(_WORD*)(a1 + 506) = v88;
                v89 = *v83;
                v83 += 2;
                v90 = *(_QWORD*)(*(_QWORD*)(v77 + 64) + 8LL * (v89 & 0xFFF));
                v81 = v85 | (1 << *(_BYTE*)(v90 + 104));
                *(_WORD*)(a1 + 504) = v81;
                v80 = (1LL << *(_BYTE*)(v90 + 250)) | v86;
                *(_QWORD*)(a1 + 512) = v80;
                v79 = (1 << *(_BYTE*)(v90 + 115)) | v87;
                *(_DWORD*)(a1 + 508) = v79;
                v78 = *(unsigned __int16*)(*(_QWORD*)(v90 + 24) + 1064LL) | v88;
                *(_WORD*)(a1 + 506) = v78;
              } while ((v76 & 0x7FFFFFFFFFFFFFFELL) != v82);
            }
            else {
              LOWORD(v78) = 0;
              v79 = 0;
              v80 = 0;
              LOWORD(v81) = 0;
              v82 = 0;
            }
            if ((v76 & 1) != 0) {
              v91 = *(_QWORD*)(*(_QWORD*)(v77 + 64) +
                               8LL * (*(_DWORD*)(v72 + 4 * v82) & 0xFFF));
              *(_WORD*)(a1 + 504) = v81 | (1 << *(_BYTE*)(v91 + 104));
              *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v91 + 250)) | v80;
              *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v91 + 115)) | v79;
              *(_WORD*)(a1 + 506) =
                  *(_WORD*)(*(_QWORD*)(v91 + 24) + 1064LL) | v78;
            }
          }
        }
      }
      goto LABEL_59;
    }
  }
  else {
    v3 = *(_QWORD*)(a1 + 424);
    v4 = *(_QWORD*)(a1 + 24);
    v5 = (_QWORD*)(a1 + 504);
    *(_QWORD*)(a1 + 96) = 0;
    *(_QWORD*)(a1 + 104) = 0;
    *(_DWORD*)(a1 + 448) = 0;
    *(_QWORD*)(a1 + 504) = 0;
    *(_QWORD*)(a1 + 512) = 0;
    *(_QWORD*)(a1 + 432) = v3;
    *(_QWORD*)(a1 + 464) = *(_QWORD*)(a1 + 456);
    *(_QWORD*)(a1 + 720) = *(_QWORD*)(a1 + 712);
    if (v4 != 0) {
      v6 = *(__int16*)(v4 + 492);
      LOBYTE(v193) = 0;
      *(_DWORD*)(a1 + 96) = v6;
      *(_DWORD*)(a1 + 100) = game_Unit_GetParam(v4);
      v7 = *(_QWORD*)(a1 + 64);
      *(_DWORD*)(a1 + 108) = *(unsigned __int8*)(v4 + 499);
      if (v7 != 0) {
        v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 544LL))(v7);
      }
      else {
        v41 = (__int64*)(a1 + 44);
        if (*(_WORD*)(a1 + 44) == 0) {
          v42 = *(unsigned int*)(a1 + 40);
          if ((v42 & 0x80000000) != 0) {
            v41 = &game_g_empty_item;
          }
          else {
            v41 = (__int64*)(*(_QWORD*)(a1 + 24) + 8 * v42 + 828);
          }
        }
        v92 =
            (*((_DWORD*)v41 + 1) & 0xF) *
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * *(unsigned __int16*)v41) +
                                    87LL) -
            *((unsigned __int8*)v41 + 2);
        v8 = v92 & ~(v92 >> 31);
      }
      v93 = *(_QWORD*)(a1 + 424);
      *(_DWORD*)(a1 + 104) = v8;
      *(_DWORD*)(a1 + 448) = 0;
      *v5 = 0;
      *(_QWORD*)(a1 + 512) = 0;
      *(_QWORD*)(a1 + 432) = v93;
      *(_QWORD*)(a1 + 464) = *(_QWORD*)(a1 + 456);
      UnitSkillList_84cf20(a1 + 424, v4 + 1744, 1);
    LABEL_59:
      GameRoutine_79e560(a1);
      goto LABEL_60;
    }
    if ((*(_BYTE*)(v1 + 11277) & 0x80) == 0) {
      v29 = *(_QWORD*)(a1 + 32);
      if (v29 != 0) {
        *(_DWORD*)(a1 + 96) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 152LL))(v29);
        *(_DWORD*)(a1 + 100) = (*(__int64 (**)(_QWORD))(
            **(_QWORD**)(a1 + 32) + 160LL))(*(_QWORD*)(a1 + 32));
        v193 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x90LL) +
                          game_g_shared_system_skills_ptr) &
               0xFFF;
        if ((UnitSkillList_84cc00((__int64*)(a1 + 424), &v193, 1) & 1) != 0) {
          v30 = *(_QWORD*)(a1 + 456);
          v31 = *(_QWORD*)(a1 + 464);
          *v5 = 0;
          *(_QWORD*)(a1 + 512) = 0;
          v32 = v31 - v30;
          if ((int)((unsigned __int64)(v31 - v30) >> 2) >= 1) {
            v33 = (int)(v32 >> 2);
            v34 = v33 <= 1 ? 1LL : (int)(v32 >> 2);
            v35 = *GameData_212c880[0];
            if (v33 >= 2) {
              v184 = (int*)(v30 + 4);
              v36 = 0;
              v37 = 0;
              v38 = 0;
              v39 = 0;
              v40 = 0;
              do {
                v40 += 2;
                v185 = *(_QWORD*)(*(_QWORD*)(v35 + 64) +
                                  8LL * (*(v184 - 1) & 0xFFF));
                v186 = v39 | (1 << *(_BYTE*)(v185 + 104));
                *(_WORD*)(a1 + 504) = v186;
                v187 = (1LL << *(_BYTE*)(v185 + 250)) | v38;
                *(_QWORD*)(a1 + 512) = v187;
                v188 = (1 << *(_BYTE*)(v185 + 115)) | v37;
                *(_DWORD*)(a1 + 508) = v188;
                v189 =
                    *(unsigned __int16*)(*(_QWORD*)(v185 + 24) + 1064LL) | v36;
                *(_WORD*)(a1 + 506) = v189;
                v190 = *v184;
                v184 += 2;
                v191 = *(_QWORD*)(*(_QWORD*)(v35 + 64) + 8LL * (v190 & 0xFFF));
                v39 = v186 | (1 << *(_BYTE*)(v191 + 104));
                *(_WORD*)(a1 + 504) = v39;
                v38 = (1LL << *(_BYTE*)(v191 + 250)) | v187;
                *(_QWORD*)(a1 + 512) = v38;
                v37 = (1 << *(_BYTE*)(v191 + 115)) | v188;
                *(_DWORD*)(a1 + 508) = v37;
                v36 =
                    *(unsigned __int16*)(*(_QWORD*)(v191 + 24) + 1064LL) | v189;
                *(_WORD*)(a1 + 506) = v36;
              } while ((v34 & 0x7FFFFFFFFFFFFFFELL) != v40);
            }
            else {
              LOWORD(v36) = 0;
              v37 = 0;
              v38 = 0;
              LOWORD(v39) = 0;
              v40 = 0;
            }
            if ((v34 & 1) != 0) {
              v192 = *(_QWORD*)(*(_QWORD*)(v35 + 64) +
                                8LL * (*(_DWORD*)(v30 + 4 * v40) & 0xFFF));
              *(_WORD*)(a1 + 504) = v39 | (1 << *(_BYTE*)(v192 + 104));
              *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v192 + 250)) | v38;
              *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v192 + 115)) | v37;
              *(_WORD*)(a1 + 506) =
                  *(_WORD*)(*(_QWORD*)(v192 + 24) + 1064LL) | v36;
            }
          }
        }
      }
    }
  }
LABEL_60:
  v94 = *(_QWORD*)(a1 + 24);
  if (v94 == 0 || (*(_DWORD*)(v94 + 1872) & 0xFFF) == 0) {
    goto LABEL_84;
  }
  v95 = *(_DWORD*)(a1 + 80) - *(_DWORD*)(a1 + 72);
  v96 = *(_DWORD*)(a1 + 84) - *(_DWORD*)(a1 + 76);
  if ((v96 | v95) < 0 ||
      ((v97 = *(_DWORD*)(v94 + 592), v95 < v97) ? (v98 = v96 < v97)
                                                : (v98 = false),
       !v98 || ((v99 = v95 + v97 * v96) & 0x80000000) != 0 ||
           *(char*)(*(_QWORD*)(v94 + 600) + 4LL * v99 + 2) <= 0)) {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                             8LL * (*(_DWORD*)(v94 + 1872) & 0xFFF)) +
                  273LL) != 0) {
      goto LABEL_84;
    }
  }
  else if (*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(v94 + 1872) & 0xFFF)) == 0) {
    goto LABEL_84;
  }
  v193 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A0LL) +
                    game_g_shared_system_skills_ptr) &
         0xFFF;
  if ((UnitSkillList_84cc00((__int64*)(a1 + 424), &v193, 1) & 1) != 0) {
    v100 = *(_QWORD*)(a1 + 456);
    v101 = *(_QWORD*)(a1 + 464);
    *(_QWORD*)(a1 + 504) = 0;
    *(_QWORD*)(a1 + 512) = 0;
    v102 = v101 - v100;
    if ((int)((unsigned __int64)(v101 - v100) >> 2) >= 1) {
      v103 = (int)(v102 >> 2);
      v104 = v103 <= 1 ? 1LL : (int)(v102 >> 2);
      v105 = *GameData_212c880[0];
      if (v103 >= 2) {
        v111 = (int*)(v100 + 4);
        v106 = 0;
        v107 = 0;
        v108 = 0;
        v109 = 0;
        v110 = 0;
        do {
          v110 += 2;
          v112 =
              *(_QWORD*)(*(_QWORD*)(v105 + 64) + 8LL * (*(v111 - 1) & 0xFFF));
          v113 = v109 | (1 << *(_BYTE*)(v112 + 104));
          *(_WORD*)(a1 + 504) = v113;
          v114 = (1LL << *(_BYTE*)(v112 + 250)) | v108;
          *(_QWORD*)(a1 + 512) = v114;
          v115 = (1 << *(_BYTE*)(v112 + 115)) | v107;
          *(_DWORD*)(a1 + 508) = v115;
          v116 = *(unsigned __int16*)(*(_QWORD*)(v112 + 24) + 1064LL) | v106;
          *(_WORD*)(a1 + 506) = v116;
          v117 = *v111;
          v111 += 2;
          v118 = *(_QWORD*)(*(_QWORD*)(v105 + 64) + 8LL * (v117 & 0xFFF));
          v109 = v113 | (1 << *(_BYTE*)(v118 + 104));
          *(_WORD*)(a1 + 504) = v109;
          v108 = (1LL << *(_BYTE*)(v118 + 250)) | v114;
          *(_QWORD*)(a1 + 512) = v108;
          v107 = (1 << *(_BYTE*)(v118 + 115)) | v115;
          *(_DWORD*)(a1 + 508) = v107;
          v106 = *(unsigned __int16*)(*(_QWORD*)(v118 + 24) + 1064LL) | v116;
          *(_WORD*)(a1 + 506) = v106;
        } while ((v104 & 0x7FFFFFFFFFFFFFFELL) != v110);
      }
      else {
        LOWORD(v106) = 0;
        v107 = 0;
        v108 = 0;
        LOWORD(v109) = 0;
        v110 = 0;
      }
      if ((v104 & 1) != 0) {
        v119 = *(_QWORD*)(*(_QWORD*)(v105 + 64) +
                          8LL * (*(_DWORD*)(v100 + 4 * v110) & 0xFFF));
        *(_WORD*)(a1 + 504) = v109 | (1 << *(_BYTE*)(v119 + 104));
        *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v119 + 250)) | v108;
        *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v119 + 115)) | v107;
        *(_WORD*)(a1 + 506) = *(_WORD*)(*(_QWORD*)(v119 + 24) + 1064LL) | v106;
      }
    }
  }
LABEL_84:
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 11278LL) & 2) != 0) {
    v193 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) +
                      game_g_shared_system_skills_ptr + 4) &
           0xFFF;
    if ((UnitSkillList_84cc00((__int64*)(a1 + 424), &v193, 1) & 1) != 0) {
      v120 = *(_QWORD*)(a1 + 456);
      v121 = *(_QWORD*)(a1 + 464);
      *(_QWORD*)(a1 + 504) = 0;
      *(_QWORD*)(a1 + 512) = 0;
      v122 = v121 - v120;
      if ((int)((unsigned __int64)(v121 - v120) >> 2) >= 1) {
        v123 = (int)(v122 >> 2);
        v124 = v123 <= 1 ? 1LL : (int)(v122 >> 2);
        v125 = *GameData_212c880[0];
        if (v123 >= 2) {
          v131 = (int*)(v120 + 4);
          v126 = 0;
          v127 = 0;
          v128 = 0;
          v129 = 0;
          v130 = 0;
          do {
            v130 += 2;
            v132 =
                *(_QWORD*)(*(_QWORD*)(v125 + 64) + 8LL * (*(v131 - 1) & 0xFFF));
            v133 = v129 | (1 << *(_BYTE*)(v132 + 104));
            *(_WORD*)(a1 + 504) = v133;
            v134 = (1LL << *(_BYTE*)(v132 + 250)) | v128;
            *(_QWORD*)(a1 + 512) = v134;
            v135 = (1 << *(_BYTE*)(v132 + 115)) | v127;
            *(_DWORD*)(a1 + 508) = v135;
            v136 = *(unsigned __int16*)(*(_QWORD*)(v132 + 24) + 1064LL) | v126;
            *(_WORD*)(a1 + 506) = v136;
            v137 = *v131;
            v131 += 2;
            v138 = *(_QWORD*)(*(_QWORD*)(v125 + 64) + 8LL * (v137 & 0xFFF));
            v129 = v133 | (1 << *(_BYTE*)(v138 + 104));
            *(_WORD*)(a1 + 504) = v129;
            v128 = (1LL << *(_BYTE*)(v138 + 250)) | v134;
            *(_QWORD*)(a1 + 512) = v128;
            v127 = (1 << *(_BYTE*)(v138 + 115)) | v135;
            *(_DWORD*)(a1 + 508) = v127;
            v126 = *(unsigned __int16*)(*(_QWORD*)(v138 + 24) + 1064LL) | v136;
            *(_WORD*)(a1 + 506) = v126;
          } while ((v124 & 0x7FFFFFFFFFFFFFFELL) != v130);
        }
        else {
          LOWORD(v126) = 0;
          v127 = 0;
          v128 = 0;
          LOWORD(v129) = 0;
          v130 = 0;
        }
        if ((v124 & 1) != 0) {
          v139 = *(_QWORD*)(*(_QWORD*)(v125 + 64) +
                            8LL * (*(_DWORD*)(v120 + 4 * v130) & 0xFFF));
          *(_WORD*)(a1 + 504) = v129 | (1 << *(_BYTE*)(v139 + 104));
          *(_QWORD*)(a1 + 512) = (1LL << *(_BYTE*)(v139 + 250)) | v128;
          *(_DWORD*)(a1 + 508) = (1 << *(_BYTE*)(v139 + 115)) | v127;
          *(_WORD*)(a1 + 506) =
              *(_WORD*)(*(_QWORD*)(v139 + 24) + 1064LL) | v126;
        }
      }
    }
  }
  v140 = *(_QWORD*)(a1 + 520);
  *(_DWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 528) = v140;
  *(_QWORD*)(a1 + 560) = *(_QWORD*)(a1 + 552);
  UnitSkillList_84cf20(a1 + 520, a1 + 424, 1);
  v141 = *(_QWORD*)(a1 + 56);
  if (v141 != 0) {
    LODWORD(v141) = *(_WORD*)(v141 + 16) & 0xFFF;
  }
  v142 = (_QWORD*)(a1 + 600);
  v193 = v141;
  if ((UnitSkillList_84cc00((__int64*)(a1 + 520), &v193, 1) & 1) != 0) {
    v143 = *(_QWORD*)(a1 + 560);
    v144 = *(_QWORD*)(a1 + 552);
    *v142 = 0;
    *(_QWORD*)(a1 + 608) = 0;
    v145 = v143 - v144;
    if ((int)((unsigned __int64)(v143 - v144) >> 2) >= 1) {
      v146 = (int)(v145 >> 2);
      v147 = v146 <= 1 ? 1LL : (int)(v145 >> 2);
      v148 = *GameData_212c880[0];
      if (v146 >= 2) {
        v154 = (int*)(v144 + 4);
        v149 = 0;
        v150 = 0;
        v151 = 0;
        v152 = 0;
        v153 = 0;
        do {
          v153 += 2;
          v155 =
              *(_QWORD*)(*(_QWORD*)(v148 + 64) + 8LL * (*(v154 - 1) & 0xFFF));
          v156 = v152 | (1 << *(_BYTE*)(v155 + 104));
          *(_WORD*)(a1 + 600) = v156;
          v157 = (1LL << *(_BYTE*)(v155 + 250)) | v151;
          *(_QWORD*)(a1 + 608) = v157;
          v158 = (1 << *(_BYTE*)(v155 + 115)) | v150;
          *(_DWORD*)(a1 + 604) = v158;
          v159 = *(unsigned __int16*)(*(_QWORD*)(v155 + 24) + 1064LL) | v149;
          *(_WORD*)(a1 + 602) = v159;
          v160 = *v154;
          v154 += 2;
          v161 = *(_QWORD*)(*(_QWORD*)(v148 + 64) + 8LL * (v160 & 0xFFF));
          v152 = v156 | (1 << *(_BYTE*)(v161 + 104));
          *(_WORD*)(a1 + 600) = v152;
          v151 = (1LL << *(_BYTE*)(v161 + 250)) | v157;
          *(_QWORD*)(a1 + 608) = v151;
          v150 = (1 << *(_BYTE*)(v161 + 115)) | v158;
          *(_DWORD*)(a1 + 604) = v150;
          v149 = *(unsigned __int16*)(*(_QWORD*)(v161 + 24) + 1064LL) | v159;
          *(_WORD*)(a1 + 602) = v149;
        } while ((v147 & 0x7FFFFFFFFFFFFFFELL) != v153);
      }
      else {
        LOWORD(v149) = 0;
        v150 = 0;
        v151 = 0;
        LOWORD(v152) = 0;
        v153 = 0;
      }
      if ((v147 & 1) != 0) {
        v162 = *(_QWORD*)(*(_QWORD*)(v148 + 64) +
                          8LL * (*(_DWORD*)(v144 + 4 * v153) & 0xFFF));
        *(_WORD*)(a1 + 600) = v152 | (1 << *(_BYTE*)(v162 + 104));
        *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v162 + 250)) | v151;
        *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v162 + 115)) | v150;
        *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v162 + 24) + 1064LL) | v149;
      }
    }
  }
  UnitSkillList_84e640(a1 + 520);
  UnitSkillList_84e760(a1 + 520);
  v163 = *(int**)(a1 + 560);
  v164 = *(_QWORD*)(a1 + 552);
  *v142 = 0;
  *(_QWORD*)(a1 + 608) = 0;
  v165 = (__int64)v163 - v164;
  if ((int)(((unsigned __int64)v163 - v164) >> 2) >= 1) {
    v166 = (int)(v165 >> 2);
    v167 = v166 <= 1 ? 1LL : (int)(v165 >> 2);
    v168 = *GameData_212c880[0];
    if (v166 >= 2) {
      v174 = (int*)(v164 + 4);
      v169 = 0;
      v170 = 0;
      v171 = 0;
      v172 = 0;
      v173 = 0;
      do {
        v173 += 2;
        v175 = *(_QWORD*)(*(_QWORD*)(v168 + 64) + 8LL * (*(v174 - 1) & 0xFFF));
        v176 = v172 | (1 << *(_BYTE*)(v175 + 104));
        *(_WORD*)(a1 + 600) = v176;
        v177 = (1LL << *(_BYTE*)(v175 + 250)) | v171;
        *(_QWORD*)(a1 + 608) = v177;
        v178 = (1 << *(_BYTE*)(v175 + 115)) | v170;
        *(_DWORD*)(a1 + 604) = v178;
        v179 = *(unsigned __int16*)(*(_QWORD*)(v175 + 24) + 1064LL) | v169;
        *(_WORD*)(a1 + 602) = v179;
        v180 = *v174;
        v174 += 2;
        v181 = *(_QWORD*)(*(_QWORD*)(v168 + 64) + 8LL * (v180 & 0xFFF));
        v172 = v176 | (1 << *(_BYTE*)(v181 + 104));
        *(_WORD*)(a1 + 600) = v172;
        v171 = (1LL << *(_BYTE*)(v181 + 250)) | v177;
        *(_QWORD*)(a1 + 608) = v171;
        v170 = (1 << *(_BYTE*)(v181 + 115)) | v178;
        *(_DWORD*)(a1 + 604) = v170;
        v169 = *(unsigned __int16*)(*(_QWORD*)(v181 + 24) + 1064LL) | v179;
        *(_WORD*)(a1 + 602) = v169;
      } while ((v167 & 0x7FFFFFFFFFFFFFFELL) != v173);
    }
    else {
      LOWORD(v169) = 0;
      v170 = 0;
      v171 = 0;
      LOWORD(v172) = 0;
      v173 = 0;
    }
    if ((v167 & 1) != 0) {
      v182 = *(_QWORD*)(*(_QWORD*)(v168 + 64) +
                        8LL * (*(_DWORD*)(v164 + 4 * v173) & 0xFFF));
      *(_WORD*)(a1 + 600) = v172 | (1 << *(_BYTE*)(v182 + 104));
      *(_QWORD*)(a1 + 608) = (1LL << *(_BYTE*)(v182 + 250)) | v171;
      *(_DWORD*)(a1 + 604) = (1 << *(_BYTE*)(v182 + 115)) | v170;
      *(_WORD*)(a1 + 602) = *(_WORD*)(*(_QWORD*)(v182 + 24) + 1064LL) | v169;
    }
  }
  if ((int*)v164 != v163) {
    GameRoutine_8517e0(v164, v163, (2 * __clz(v165 >> 2)) ^ 0x7E, 1);
  }
  return a1;
}

__int64 game_map_f1c4a0(__int64** a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64** v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int128 v18;
  __int128 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 result;
  int v34;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  v6 = a1 + 1;
  v5 = (__int64)a1[1];
  v7 = v4;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = a1 + 1;
  v10 = (__int64)(a1 + 1);
  if (v5 != 0) {
    v11 = a1[1];
    while (1) {
      v12 = v11[4];
      if (v4 >= v12) {
        if (v12 >= v4) {
          while (1) {
            while (1) {
              v13 = *(_QWORD*)(v5 + 32);
              if (v4 >= v13) {
                break;
              }
              v5 = *(_QWORD*)v5;
              if (v5 == 0) {
                goto LABEL_11;
              }
            }
            if (v13 >= v4) {
              goto LABEL_36;
            }
            v5 = *(_QWORD*)(v5 + 8);
            if (v5 == 0) {
            LABEL_11:
              String_60a250("map::at:  key not found");
            }
          }
        }
        ++v11;
      }
      v11 = (__int64*)*v11;
      if (v11 == nullptr) {
        while (1) {
          while (1) {
            v14 = *(_QWORD*)(v5 + 32);
            v10 = v5;
            if (v4 >= v14) {
              break;
            }
            v5 = *(_QWORD*)v5;
            v9 = (__int64**)v10;
            if (*(_QWORD*)v10 == 0) {
              goto LABEL_17;
            }
          }
          if (v14 >= v4) {
            goto LABEL_20;
          }
          v5 = *(_QWORD*)(v5 + 8);
          if (v5 == 0) {
            v9 = (__int64**)(v10 + 8);
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_17:
  v15 = v10;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       320, 16, 0);
  *(_QWORD*)(v10 + 32) = v7;
  game_map_f54910(v10 + 48);
  *(_QWORD*)(v10 + 48) = game_map_RouteMeshData_vtable;
  *(_QWORD*)(v10 + 296) = 0;
  *(_QWORD*)(v10 + 304) = 0;
  v16 = (__int64*)v10;
  *(_QWORD*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = v15;
  *v9 = (__int64*)v10;
  v17 = (__int64*)**a1;
  if (v17 != nullptr) {
    *a1 = v17;
    v16 = *v9;
  }
  fw_containers_BalanceAfterInsert(a1[1], v16);
  a1[2] = (__int64*)((char*)a1[2] + 1);
LABEL_20:
  *(_DWORD*)(v10 + 56) = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(v10 + 60) = *(_DWORD*)(a2 + 12);
  *(_OWORD*)(v10 + 64) = *(_OWORD*)(a2 + 16);
  *(_OWORD*)(v10 + 80) = *(_OWORD*)(a2 + 32);
  *(_OWORD*)(v10 + 96) = *(_OWORD*)(a2 + 48);
  *(_OWORD*)(v10 + 112) = *(_OWORD*)(a2 + 64);
  *(_QWORD*)(v10 + 136) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(v10 + 128) = *(_QWORD*)(a2 + 80);
  if (v10 + 48 != a2) {
    GameRoutine_f155c0(
        (char**)(v10 + 144), *(char**)(a2 + 96), *(char**)(a2 + 104),
        (__int64)(*(_QWORD*)(a2 + 104) - *(_QWORD*)(a2 + 96)) >> 6);
    CharacterController_d42d20(
        v10 + 168, *(char**)(a2 + 120), *(char**)(a2 + 128),
        (__int64)(*(_QWORD*)(a2 + 128) - *(_QWORD*)(a2 + 120)) >> 4);
  }
  *(_DWORD*)(v10 + 192) = *(_DWORD*)(a2 + 144);
  *(_DWORD*)(v10 + 196) = *(_DWORD*)(a2 + 148);
  v18 = *(_OWORD*)(v10 + 192);
  *((_QWORD*)&v18 + 1) = *(unsigned int*)(a2 + 152);
  *(_OWORD*)(v10 + 192) = v18;
  *(_QWORD*)(v10 + 216) = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 160);
  *(_DWORD*)(v10 + 224) = *(_DWORD*)(a2 + 176);
  *(_DWORD*)(v10 + 228) = *(_DWORD*)(a2 + 180);
  v19 = *(_OWORD*)(v10 + 224);
  *((_QWORD*)&v19 + 1) = *(unsigned int*)(a2 + 184);
  *(_OWORD*)(v10 + 224) = v19;
  v20 = *(_QWORD*)(a2 + 232);
  v21 = *(_DWORD*)(a2 + 240);
  *(_QWORD*)(v10 + 264) = *(_QWORD*)(a2 + 216);
  *(_QWORD*)(v10 + 280) = v20;
  *(_QWORD*)(v10 + 248) = *(_QWORD*)(a2 + 200);
  v22 = *(_QWORD*)(a2 + 192);
  *(_QWORD*)(v10 + 256) = *(_QWORD*)(a2 + 208);
  *(_QWORD*)(v10 + 240) = v22;
  v23 = *(_QWORD*)(a2 + 224);
  *(_DWORD*)(v10 + 288) = v21;
  *(_QWORD*)(v10 + 272) = v23;
  v25 = *(_QWORD*)(a2 + 248);
  v24 = *(_QWORD*)(a2 + 256);
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                              memory_order_relaxed);
  }
  v26 = *(_QWORD*)(v10 + 304);
  *(_QWORD*)(v10 + 296) = v25;
  *(_QWORD*)(v10 + 304) = v24;
  if (v26 != 0) {
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = *v6;
  v5 = (__int64)(a1 + 1);
  if (*v6 != nullptr) {
    while (1) {
      while (1) {
        v5 = (__int64)v27;
        v28 = v27[4];
        if (v7 >= v28) {
          break;
        }
        v27 = *(__int64**)v5;
        v6 = (__int64**)v5;
        if (*(_QWORD*)v5 == 0) {
          goto LABEL_33;
        }
      }
      if (v28 >= v7) {
        break;
      }
      v27 = *(__int64**)(v5 + 8);
      if (v27 == nullptr) {
        v6 = (__int64**)(v5 + 8);
        goto LABEL_33;
      }
    }
  }
  else {
  LABEL_33:
    v29 = v5;
    v5 = fw_memory_HeapManager_Allocate(*v8, 320, 16, 0);
    *(_QWORD*)(v5 + 32) = v7;
    game_map_f54910(v5 + 48);
    *(_QWORD*)(v5 + 48) = game_map_RouteMeshData_vtable;
    *(_QWORD*)(v5 + 296) = 0;
    *(_QWORD*)(v5 + 304) = 0;
    v30 = (__int64*)v5;
    *(_QWORD*)v5 = 0;
    *(_QWORD*)(v5 + 8) = 0;
    *(_QWORD*)(v5 + 16) = v29;
    *v6 = (__int64*)v5;
    v31 = (__int64*)**a1;
    if (v31 != nullptr) {
      *a1 = v31;
      v30 = *v6;
    }
    fw_containers_BalanceAfterInsert(a1[1], v30);
    a1[2] = (__int64*)((char*)a1[2] + 1);
  }
LABEL_36:
  v32 = *(_QWORD*)(v5 + 48);
  *(_BYTE*)(v5 + 272) = 1;
  result = (*(__int64 (**)(__int64))(v32 + 48))((__int64)(v5 + 48));
  if ((result & 1) != 0) {
    v34 = 1036831949;
  }
  else {
    v34 = 0;
    *(_DWORD*)(v5 + 276) = 1065353216;
  }
  *(_DWORD*)(v5 + 280) = v34;
  return result;
}

#pragma GCC visibility pop
