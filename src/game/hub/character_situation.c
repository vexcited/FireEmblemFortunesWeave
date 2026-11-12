#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f99780(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff8b28[])();
extern __int64 (*game_hub_CharacterSituation_vtable[])();
extern __int64 GameData_21f3ce0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2228b18;
_QWORD* CharacterSituation_Destructor(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_112eec0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_f96ec0(__int64, _QWORD*, __int64, __int64, bool*);
__int64 GameRoutine_f991e0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_21ed530;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern int GameData_21ed528;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_f99760(void);
void __attribute__((noreturn)) GameRoutine_f9a220(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a230(void);
bool CharacterSituation_f94550();
__int64 CharacterSituation_f982e0(__int64 a1, __int64 a2);
__int64
CharacterSituation_f98e60_alt1(_QWORD* a1,
                               __int64 a2) __asm__("CharacterSituation_f98e60");
__int64 CharacterSituation_f994e0(__int64* a1, __int64 a2);
__int64 game_hub_CharacterSituation_Rebuild_lambda0_Invoke(__int64 a1,
                                                           _QWORD** a2);
__int64 CharacterSituation_f9a100(__int64 a1, __int64 a2);
__int64 game_hub_CharacterSituation_GetCorpsTroop_lambda0_Invoke(__int64 result,
                                                                 _QWORD* a2);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 CharacterSituation_f99780(__int64 a1);
__attribute__((swiftcall)) void LocatorDispos_db43e0(PSEUDO_X8, _QWORD, _QWORD,
                                                     _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_hub_f96800(PSEUDO_X8, _QWORD, _QWORD);
__int64 CharacterSituation_f94550_alt1(long double) __asm__(
    "CharacterSituation_f94550");
__int64
    CharacterSituation_f98540_alt1(_QWORD,
                                   _QWORD) __asm__("CharacterSituation_f98540");
__int64
    CharacterSituation_f99780_alt1(_QWORD) __asm__("CharacterSituation_f99780");
__int64 GameRoutine_60a020(__int64, __int64);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 game_CorpsManager_EachUnit(__int64 result, __int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_hub_f960c0(_QWORD, _QWORD);
__int64 memcmp_alt1(_QWORD, _QWORD, _QWORD) __asm__("memcmp");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN** GameData_212f0f0;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN GameData_1b9df30;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1ff8b58[])();
extern __int64 (*GameData_1ff8bd8[])();
extern __int64* GameData_212d458[7];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dc58[3];
extern __int64 GameData_212ec00;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f2540;
extern __int64 GameData_21f2548;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
float fmodf(float, float);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_db5cb0(_QWORD);
void __attribute__((noreturn)) GameRoutine_f998d0(_QWORD);
void game_hub_CharacterSituation_Rebuild(__int64 a1, _DWORD* a2);
__int64 game_hub_CharacterSituation_GetCorpsTroop(__int64 a1, __int64 a2);
__int64 CharacterSituation_f98540(__int64 a1, __int64 a2);
__int64 CharacterSituation_f991e0(__int64 a1, __int64* a2);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 CharacterSituation_f98e60(_QWORD* a1, __int64* a2);

_QWORD* CharacterSituation_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
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

  v1 = result[7];
  v2 = result;
  *result = game_hub_CharacterSituation_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[8] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[4];
  if (v6 != 0) {
    v7 = v2[5];
    if (v6 == v7) {
      goto LABEL_22;
    }
    do {
      v8 = v7;
      if ((*(_BYTE*)(v7 - 40) & 1) != 0 && *(_QWORD*)(v7 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
      }
      v7 -= 96;
      if ((*(_BYTE*)(v8 - 96) & 1) != 0 && *(_QWORD*)(v8 - 80) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
      }
    } while (v7 != v6);
    v11 = v2[4];
    v2[5] = v6;
    if (v11 != 0) {
    LABEL_22:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
    }
  }
  v13 = v2[1];
  if (v13 != 0) {
    v14 = v2[2];
    if (v13 == v14) {
      goto LABEL_29;
    }
    do {
      v14 -= 80;
      result = (_QWORD*)GameRoutine_f99780(v14);
    } while (v14 != v13);
    v15 = v2[1];
    v2[2] = v13;
    if (v15 != 0) {
    LABEL_29:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
    }
  }
  *v2 = GameData_1ff8b28;
  if ((_QWORD*)GameData_21f3ce0 == v2) {
    GameData_21f3ce0 = 0;
    GameData_2228b18 = 0;
  }
  return result;
}

bool CharacterSituation_f94550()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  int* v3;
  int v5;
  int v6;
  bool v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  struct {
    __int64 v15;
    __int64 v16;
    __int64* v17;
  } v15_;

  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    return false;
  }
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v15_.v15,
                                       *(_QWORD*)(GameData_21f3d10 + 56),
                                       *(_QWORD*)(GameData_21f3d10 + 48));
  }
  else {
    v0 = *(_QWORD*)(GameData_21f3d10 + 48);
    v1 = *(_QWORD*)(GameData_21f3d10 + 56);
    v15_.v15 = *(_QWORD*)(GameData_21f3d10 + 40);
    v15_.v16 = v0;
    v15_.v17 = (__int64*)v1;
  }
  v2 = v15_.v16;
  if ((v15_.v15 & 1) == 0) {
    v2 = (unsigned __int8)v15_.v15 >> 1;
  }
  if (v2 == 11) {
    v8 = v15_.v17;
    if ((v15_.v15 & 1) == 0) {
      v8 = (__int64*)((char*)&v15_.v15 + 1);
    }
    if (*v8 != 0x5F6C74425F627548LL ||
        *(__int64*)((char*)v8 + 3) != 0x3930345F6C74425FLL) {
      v10 = *v8;
      v11 = *(__int64*)((char*)v8 + 3);
      v7 = v10 == 0x5F6C74425F627548LL && v11 == 0x3231305F6C74425FLL;
      goto LABEL_28;
    }
  }
  else {
    if (v2 != 7) {
      v12 = 1;
      if ((v15_.v15 & 1) == 0) {
        return v12 == 0;
      }
      goto LABEL_36;
    }
    v3 = (int*)v15_.v17;
    if ((v15_.v15 & 1) == 0) {
      v3 = (int*)((char*)&v15_.v15 + 1);
    }
    if (*v3 != *(_DWORD*)"Hub_000" ||
        *(int*)((char*)v3 + 3) != *(_DWORD*)"_000") {
      v5 = *v3;
      v6 = *(int*)((char*)v3 + 3);
      v7 = v5 == 1600288072 && v6 == 808464991;
    LABEL_28:
      v12 = !v7;
      if ((v15_.v15 & 1) == 0) {
        return v12 == 0;
      }
      goto LABEL_36;
    }
  }
  v12 = 0;
  if ((v15_.v15 & 1) != 0) {
  LABEL_36:
    if (v15_.v17 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v15_.v17);
    }
  }
  return v12 == 0;
}

void game_hub_CharacterSituation_Rebuild(__int64 a1, _DWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned int v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  void* v17;
  unsigned __int64 v18;
  __n128 v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  char v27;
  _QWORD* v28;
  __int64 v29;
  bool v30;
  char* v31;
  char* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 j;
  __int64 v44;
  __int64 v45;
  _QWORD* k;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int8* v55;
  __int64* v56;
  __int64 v57;
  unsigned __int64 v58;
  bool v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  char* v63;
  bool v64;
  unsigned __int64 v65;
  unsigned __int8* v66;
  unsigned __int64 v67;
  __n128 v68;
  char* v69;
  char* v70;
  char v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  bool v76;
  unsigned __int64 v77;
  char* v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  _QWORD* v85;
  char* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  __int64 v99;
  unsigned __int8 v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  int v104;
  bool v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  char* v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  _QWORD* v118;
  _QWORD* v119;
  signed __int64 v120;
  _QWORD* v121;
  __int64 v122;
  char* v123;
  char* v124;
  unsigned __int64 v125;
  __int64 v126;
  char* v127;
  char* v128;
  signed __int64 v129;
  _QWORD* v130;
  __int64 v131;
  __int64* v132;
  __int64 v133;
  char* v134;
  __int64* v135;
  char* v136;
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
  _QWORD* v147;
  __int64 v148;
  _QWORD* v149;
  _QWORD* v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  char* v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  _QWORD* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64* v164;
  char v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64* v170;
  char** v171;
  __int64 v172;
  char* v173;
  __int64 v174;
  unsigned __int16* v175;
  unsigned int v176;
  unsigned int v177;
  unsigned int v178;
  unsigned int v179;
  unsigned int v180;
  unsigned int v181;
  float32x2_t v182;
  __int64* v183;
  int v184;
  unsigned int v185;
  unsigned int v186;
  __int64 v187;
  __int64 v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  _QWORD* v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  __int64* v197;
  __int64* v198;
  _QWORD* v199;
  __int64 v200;
  float32x4_t* v201;
  float32x4_t* v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  unsigned __int64* v208;
  float32x4_t v209;
  float32x4_t v210;
  int8x16_t v211;
  float v212;
  float v213;
  __int64 v214;
  __int64 v215;
  _QWORD* v216;
  __int64 v217;
  _QWORD* v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  char v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  char v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  unsigned __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  char v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  char* v254;
  _QWORD* v255;
  unsigned __int64 v256;
  __int64* v257;
  __int64 v258;
  _QWORD* v259;
  __int64* v260;
  __int64* v261;
  __int64 v262;
  unsigned __int64 v263;
  char* v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  _QWORD* v268;
  _QWORD* v269;
  char* v270;
  bool v271;
  char* v272;
  char* v273;
  _QWORD* v274;

  if (*a2 == 1 && (*(_BYTE*)(a1 + 80) & 1) == 0 && *(_BYTE*)(a1 + 81) == 0) {
    return;
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)(a1 + 80) != 0) {
    v4 = *(_QWORD*)(a1 + 32);
    for (i = *(_QWORD*)(a1 + 40); i != v4; i -= 96) {
      v6 = i;
      if ((*(_BYTE*)(i - 40) & 1) != 0 && *(_QWORD*)(i - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7);
      }
      if ((*(_BYTE*)(v6 - 96) & 1) != 0 && *(_QWORD*)(v6 - 80) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8);
      }
    }
    *(_QWORD*)(a1 + 40) = v4;
  }
  v9 = *(_QWORD*)v3;
  v274 = (_QWORD*)a1;
  *(_WORD*)(a1 + 80) = 0;
  v10 = fw_memory_HeapManager_Allocate(v9, 24, 16, 0);
  v11 = (__int64*)(v10 + 24);
  *(_BYTE*)v10 = 18;
  *(_WORD*)(v10 + 9) = 169;
  v12 = v10 + 24;
  v13 = 1;
  v14 = (__int64*)&GameData_1b9df30;
  *(_QWORD*)(v10 + 1) = 0x83E3A383E3AD82E3LL;
  do {
    v15 = v11;
    if (v13 > 9) {
      v16 = 0;
    }
    else {
      v16 = *v14;
    }
    v17 = GameData_212f0f0[2 * v16];
    v18 = strlen(v17);
    if (v18 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_473:
      String_60a1d0(v18);
    }
    v20 = v18;
    v21 = v10;
    if (v18 >= 0x17) {
      if ((v18 | 7) == 0x17) {
        v23 = 26;
      }
      else {
        v23 = (v18 | 7) + 1;
      }
      v22 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0);
      v263 = v20;
      v264 = v22;
      v262 = v23 | 1;
    LABEL_34:
      v18 = memmove(v22, v17, v20);
      goto LABEL_35;
    }
    v22 = (char*)&v262 + 1;
    LOBYTE(v262) = 2 * v18;
    if (v18 != 0) {
      goto LABEL_34;
    }
  LABEL_35:
    v22[v20] = 0;
    if ((v262 & 1) != 0) {
      v24 = v263;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v262 >> 1;
    }
    if ((v262 & 1) != 0) {
      v25 = v264;
    }
    else {
      v25 = (char*)&v262 + 1;
    }
    v26 = v24 + 9;
    if (v24 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_473;
    }
    if (v26 > 0x16) {
      if ((v26 | 7) == 0x17) {
        v29 = 26;
      }
      else {
        v29 = (v26 | 7) + 1;
      }
      v28 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v29, 16, 0);
      v259 = (_QWORD*)(v24 + 9);
      v260 = v28;
      v258 = v29 | 1;
      v27 = v29 | 1;
    }
    else {
      v27 = 2 * v26;
      v28 = nullptr;
      v259 = nullptr;
      v260 = nullptr;
      v258 = (unsigned __int8)(2 * v26);
    }
    v30 = (v27 & 1) == 0;
    v31 = (char*)&v258 + 1;
    if (!v30) {
      v31 = (char*)v28;
    }
    *(_QWORD*)v31 = 0x83E3A383E3AD82E3LL;
    v31[8] = -87;
    if (v30) {
      v32 = (char*)&v259 + 2;
    }
    else {
      v32 = (char*)v28 + 9;
    }
    if (v24 != 0) {
      v28 = (_QWORD*)memmove(v32, v25, v24);
    }
    v32[v24] = 0;
    if ((unsigned __int64)v15 < v12) {
      v33 = v259;
      v10 = v21;
      *v15 = v258;
      v15[1] = (__int64)v33;
      v15[2] = (__int64)v260;
      if ((v262 & 1) == 0) {
        goto LABEL_22;
      }
    LABEL_73:
      if (v264 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v40 = 56;
        }
        v19 = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
      }
      goto LABEL_22;
    }
    v34 = 1 - 0x5555555555555555LL * (((__int64)v15 - v21) >> 3);
    if (v34 > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_475;
    }
    if (0x5555555555555556LL * ((__int64)(v12 - v21) >> 3) > v34) {
      v34 = 0x5555555555555556LL * ((__int64)(v12 - v21) >> 3);
    }
    if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v12 - v21) >> 3) >=
        0x555555555555555LL) {
      v35 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v35 = v34;
    }
    if (v35 != 0) {
      if (v35 > 0xAAAAAAAAAAAAAAALL) {
      LABEL_472:
        GameRoutine_60a210(v28);
      }
      v36 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v35, 16, 0);
    }
    else {
      v36 = 0;
    }
    v37 = (char*)v15 - v21;
    v12 = v36 + 24 * v35;
    v38 = v259;
    v15 = (__int64*)((char*)v15 + v36 - v21);
    *v15 = v258;
    v15[1] = (__int64)v38;
    v15[2] = (__int64)v260;
    v28 = (_QWORD*)memcpy(v36, v21, v37);
    if (v21 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v39 = 56;
      }
      v19 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v39);
    }
    v10 = v36;
    if ((v262 & 1) != 0) {
      goto LABEL_73;
    }
  LABEL_22:
    v11 = v15 + 3;
    ++v13;
    ++v14;
  } while (v13 != 10);
  v41 = v274;
  v257 = v15;
  v42 = v274[1];
  for (j = v274[2]; j != v42;
       v28 = (_QWORD*)CharacterSituation_f99780_alt1(j)) {
    j -= 80;
  }
  v41[2] = v42;
  v44 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 112LL);
  v45 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 120LL);
  k = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v47 = v45 - v44;
  if (v45 != v44) {
    if (0xAAAAAAAAAAAAAAABLL * (v47 >> 3) > 0xAAAAAAAAAAAAAAALL) {
    LABEL_475:
      GameRoutine_64aa00(v28);
    }
    v48 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v47, 16, 0);
    v49 = 0;
    do {
      v50 = (__int64*)(v44 + v49);
      v51 = (_QWORD*)(v48 + v49);
      if ((*(_BYTE*)(v44 + v49) & 1) != 0) {
        fw_text_String_CopyTerminated(v51, v50[2], v50[1]);
      }
      else {
        v52 = *v50;
        v53 = v50[1];
        v54 = v50[2];
        v51[1] = v53;
        v51[2] = v54;
        *v51 = v52;
      }
      v49 += 24;
    } while (v44 + v49 != v45);
    if ((__int64*)v10 != v11) {
      v250 = v49;
      v251 = v48;
      v55 = (unsigned __int8*)v48;
      v252 = v48 + v49 - 24;
      while (1) {
        v253 = v10;
        v56 = (__int64*)v10;
        do {
          v58 = *(unsigned __int8*)v56;
          v59 = (v58 & 1) == 0;
          v60 = v58 >> 1;
          if (v59) {
            v61 = v60;
          }
          else {
            v61 = v56[1];
          }
          v62 = *v55;
          if (v59) {
            v63 = (char*)v56 + 1;
          }
          else {
            v63 = (char*)v56[2];
          }
          v64 = (v62 & 1) == 0;
          v65 = v62 >> 1;
          if (v64) {
            v66 = v55 + 1;
          }
          else {
            v66 = *((unsigned __int8**)v55 + 2);
          }
          if (v64) {
            v67 = v65;
          }
          else {
            v67 = *((_QWORD*)v55 + 1);
          }
          LocatorDispos_db43e0((void*)(&v258), *(_QWORD*)GameData_212ec00, v63,
                               v61, v66, v67);
          v28 = (game_hub_f96800((void*)(&v272), v41, &v258), (void*)(&v272));
          v69 = v272;
          v70 = v273;
          if (v273 == v272) {
            k = (_QWORD*)fw_memory_g_heap_manager_ptr;
            if (v272 == nullptr) {
              goto LABEL_287;
            }
          LABEL_277:
            v155 = v273;
            if (v69 == v273) {
              goto LABEL_284;
            }
            do {
              v156 = *((_QWORD*)v155 - 1);
              if (v156 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v156 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v156 + 16LL))(v156);
                v68 = std___1___shared_weak_count___release_weak(v156);
              }
              v155 -= 16;
            } while (v155 != v69);
            v273 = v69;
            if (v272 != nullptr) {
            LABEL_284:
              v157 = 128;
              if (*(_QWORD*)(*k + 200LL) == 0) {
                v157 = 56;
              }
              v68 = nn_mem_StandardAllocator_Free_alt1(*k + v157);
            }
            goto LABEL_287;
          }
          v71 = *v55;
          v271 = false;
          v269 = nullptr;
          v270 = nullptr;
          v267 = 0;
          v268 = nullptr;
          v265 = 0;
          v266 = 0;
          v263 = 0;
          v264 = nullptr;
          v262 = 0;
          if ((v71 & 1) != 0) {
            v28 = (_QWORD*)GameRoutine_64df20(&v262, *((_QWORD*)v55 + 2),
                                              *((_QWORD*)v55 + 1));
          }
          else {
            v72 = *((_QWORD*)v55 + 1);
            v262 = *(_QWORD*)v55;
            v263 = v72;
            v264 = *((char**)v55 + 2);
          }
          if (&v265 != v56) {
            v73 = *(unsigned __int8*)v56;
            if ((v265 & 1) != 0) {
              v76 = (v73 & 1) == 0;
              v77 = v73 >> 1;
              if (v76) {
                v78 = (char*)v56 + 1;
              }
              else {
                v78 = (char*)v56[2];
              }
              if (v76) {
                v79 = v77;
              }
              else {
                v79 = v56[1];
              }
              v28 = (_QWORD*)SpineModel_64dde0(&v265, v78, v79);
              v69 = v272;
              v70 = v273;
            }
            else if ((v73 & 1) != 0) {
              v28 = (_QWORD*)GameRoutine_64df20(&v265, v56[2], v56[1]);
            }
            else {
              v74 = *v56;
              v75 = v56[2];
              v266 = v56[1];
              v267 = v75;
              v265 = v74;
            }
          }
          v80 = (__int64)v270;
          v81 = v268;
          v82 = v70 - v69;
          if (v70 - v69 > (unsigned __int64)(v270 - (char*)v268)) {
            if (v268 != nullptr) {
              v83 = v269;
              if (v268 == v269) {
                goto LABEL_151;
              }
              do {
                v84 = *(v83 - 1);
                if (v84 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
                  std___1___shared_weak_count___release_weak(v84);
                }
                v83 -= 2;
              } while (v83 != v81);
              v41 = v274;
              v269 = v81;
              if (v268 != nullptr) {
              LABEL_151:
                v93 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v93 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v93);
              }
              v80 = 0;
              v269 = nullptr;
              v270 = nullptr;
              v268 = nullptr;
            }
            v94 = v82 >> 4;
            if ((unsigned __int64)(v82 >> 4) >> 60 != 0) {
              goto LABEL_470;
            }
            if (v80 >> 3 > v94) {
              v94 = v80 >> 3;
            }
            v95 = (unsigned __int64)v80 >= 0x7FFFFFFFFFFFFFF0LL
                      ? 0xFFFFFFFFFFFFFFFLL
                      : v94;
            if (v95 >> 60 != 0) {
            LABEL_470:
              GameRoutine_db5cb0(v28);
            }
            v28 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v95, 16, 0);
            v81 = v28;
            v268 = v28;
            v269 = v28;
            v270 = (char*)&v28[2 * v95];
            while (v69 != v70) {
              *v81 = *(_QWORD*)v69;
              v96 = *((_QWORD*)v69 + 1);
              v81[1] = v96;
              if (v96 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v96 + 8),
                                          1u, memory_order_relaxed);
              }
              v69 += 16;
              v81 += 2;
            }
            goto LABEL_174;
          }
          v85 = v269;
          if (v82 > (unsigned __int64)((char*)v269 - (char*)v268)) {
            v86 = &v69[(char*)v269 - (char*)v268];
            if (v269 != v268) {
              do {
                v88 = *(_QWORD*)v69;
                v87 = *((_QWORD*)v69 + 1);
                if (v87 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v87 + 8),
                                            1u, memory_order_relaxed);
                }
                v89 = v81[1];
                *v81 = v88;
                v81[1] = v87;
                if (v89 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v89 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
                  v68 = std___1___shared_weak_count___release_weak(v89);
                }
                v69 += 16;
                v81 += 2;
              } while (v69 != v86);
              v85 = v269;
              v41 = v274;
            }
            v97 = v85;
            if (v86 != v70) {
              v97 = v85;
              v98 = v85;
              do {
                *v98 = *(_QWORD*)v86;
                v99 = *((_QWORD*)v86 + 1);
                v98[1] = v99;
                if (v99 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 8),
                                            1u, memory_order_relaxed);
                }
                v86 += 16;
                v98 += 2;
                v97 += 2;
              } while (v86 != v70);
            }
            v81 = v97;
          LABEL_174:
            k = (_QWORD*)fw_memory_g_heap_manager_ptr;
            goto LABEL_175;
          }
          if (v69 != v70) {
            do {
              v91 = *(_QWORD*)v69;
              v90 = *((_QWORD*)v69 + 1);
              if (v90 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 8),
                                          1u, memory_order_relaxed);
              }
              v92 = v81[1];
              *v81 = v91;
              v81[1] = v90;
              if (v92 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
                v68 = std___1___shared_weak_count___release_weak(v92);
              }
              v69 += 16;
              v81 += 2;
            } while (v69 != v70);
            v85 = v269;
            v41 = v274;
          }
          for (k = (_QWORD*)fw_memory_g_heap_manager_ptr; v85 != v81;
               v85 -= 2) {
            v161 = *(v85 - 1);
            if (v161 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v161 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v161 + 16LL))(v161);
              v68 = std___1___shared_weak_count___release_weak(v161);
            }
          }
        LABEL_175:
          v269 = v81;
          v100 = *(_BYTE*)v56;
          v101 = v56[1];
          if ((*(_BYTE*)v56 & 1) == 0) {
            v101 = v100 >> 1;
          }
          if (v101 == 9) {
            v30 = (v100 & 1) == 0;
            v102 = (char*)v56 + 1;
            if (!v30) {
              v102 = (char*)v56[2];
            }
            v103 = *(_QWORD*)v102;
            v104 = (unsigned __int8)v102[8];
            v106 = v103 == 0x83E3A383E3AD82E3LL && v104 == 169;
          }
          else {
            v106 = false;
          }
          v271 = v106;
          v108 = v41[2];
          v107 = v41[3];
          if (v108 < v107) {
            if ((v262 & 1) != 0) {
              v28 = (_QWORD*)fw_text_String_CopyTerminated(v41[2], v264, v263);
              if ((v265 & 1) == 0) {
                goto LABEL_201;
              }
            LABEL_190:
              v28 =
                  (_QWORD*)fw_text_String_CopyTerminated(v108 + 24, v267, v266);
            }
            else {
              v109 = v262;
              v110 = v264;
              *(_QWORD*)(v108 + 8) = v263;
              *(_QWORD*)(v108 + 16) = v110;
              *(_QWORD*)v108 = v109;
              if ((v265 & 1) != 0) {
                goto LABEL_190;
              }
            LABEL_201:
              v116 = v265;
              v117 = v267;
              *(_QWORD*)(v108 + 32) = v266;
              *(_QWORD*)(v108 + 40) = v117;
              *(_QWORD*)(v108 + 24) = v116;
            }
            *(_QWORD*)(v108 + 56) = 0;
            *(_QWORD*)(v108 + 64) = 0;
            *(_QWORD*)(v108 + 48) = 0;
            v118 = v268;
            v119 = v269;
            v120 = (char*)v269 - (char*)v268;
            if (v269 != v268) {
              if (v120 < 0) {
                goto LABEL_470;
              }
              v121 = (_QWORD*)fw_memory_HeapManager_Allocate(
                  *k, (char*)v269 - (char*)v268, 16, 0);
              *(_QWORD*)(v108 + 48) = v121;
              *(_QWORD*)(v108 + 56) = v121;
              *(_QWORD*)(v108 + 64) = (char*)v121 + v120;
              do {
                *v121 = *v118;
                v122 = v118[1];
                v121[1] = v122;
                if (v122 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v122 + 8),
                                            1u, memory_order_relaxed);
                }
                v118 += 2;
                v121 += 2;
              } while (v118 != v119);
              *(_QWORD*)(v108 + 56) = v121;
            }
            v123 = (char*)(v108 + 80);
            *(_BYTE*)(v108 + 72) = v271;
            goto LABEL_255;
          }
          v111 = v41[1];
          v112 = v108 - v111;
          v113 = 1 - 0x3333333333333333LL * ((__int64)(v108 - v111) >> 4);
          if (v113 > 0x333333333333333LL) {
            GameRoutine_f998d0(v28);
          }
          v114 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v107 - v111) >> 4);
          if (2 * v114 > v113) {
            v113 = 2 * v114;
          }
          if (v114 >= 0x199999999999999LL) {
            v115 = 0x333333333333333LL;
          }
          else {
            v115 = v113;
          }
          v256 = v115;
          if (v115 != 0) {
            if (v115 > 0x333333333333333LL) {
              goto LABEL_472;
            }
            v28 = (_QWORD*)fw_memory_HeapManager_Allocate(*k, 80 * v115, 16, 0);
          }
          else {
            v28 = nullptr;
          }
          v124 = (char*)v28 + v112;
          v255 = v28;
          if ((v262 & 1) != 0) {
            v28 = (_QWORD*)fw_text_String_CopyTerminated((char*)v28 + v112,
                                                         v264, v263);
            if ((v265 & 1) == 0) {
            LABEL_215:
              v126 = v266;
              *((_QWORD*)v124 + 3) = v265;
              *((_QWORD*)v124 + 4) = v126;
              *((_QWORD*)v124 + 5) = v267;
              goto LABEL_216;
            }
          }
          else {
            v125 = v263;
            *(_QWORD*)v124 = v262;
            *((_QWORD*)v124 + 1) = v125;
            *((_QWORD*)v124 + 2) = v264;
            if ((v265 & 1) == 0) {
              goto LABEL_215;
            }
          }
          v28 = (_QWORD*)fw_text_String_CopyTerminated(v124 + 24, v267, v266);
        LABEL_216:
          v127 = (char*)v268;
          v128 = (char*)v269;
          *((_QWORD*)v124 + 7) = 0;
          *((_QWORD*)v124 + 8) = 0;
          v129 = v128 - v127;
          *((_QWORD*)v124 + 6) = 0;
          if (v128 != v127) {
            if (v129 < 0) {
              goto LABEL_470;
            }
            v130 =
                (_QWORD*)fw_memory_HeapManager_Allocate(*k, v128 - v127, 16, 0);
            *((_QWORD*)v124 + 6) = v130;
            *((_QWORD*)v124 + 7) = v130;
            *((_QWORD*)v124 + 8) = (char*)v130 + v129;
            do {
              *v130 = *(_QWORD*)v127;
              v131 = *((_QWORD*)v127 + 1);
              v130[1] = v131;
              if (v131 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v131 + 8),
                                          1u, memory_order_relaxed);
              }
              v127 += 16;
              v130 += 2;
            } while (v127 != v128);
            *((_QWORD*)v124 + 7) = v130;
          }
          v124[72] = v271;
          v133 = v274[1];
          v132 = (__int64*)v274[2];
          v134 = &v124[v133 - (_QWORD)v132];
          if ((__int64*)v133 == v132) {
            v147 = v274;
          }
          else {
            v135 = (__int64*)v274[1];
            v254 = &v124[v133 - (_QWORD)v132];
            v136 = v254;
            do {
              v137 = *v135;
              v138 = v135[2];
              *((_QWORD*)v136 + 1) = v135[1];
              *((_QWORD*)v136 + 2) = v138;
              *(_QWORD*)v136 = v137;
              v135[1] = 0;
              v135[2] = 0;
              *v135 = 0;
              v139 = v135[3];
              v140 = v135[5];
              *((_QWORD*)v136 + 4) = v135[4];
              *((_QWORD*)v136 + 5) = v140;
              *((_QWORD*)v136 + 3) = v139;
              v135[4] = 0;
              v135[5] = 0;
              v135[3] = 0;
              *((_QWORD*)v136 + 7) = 0;
              *((_QWORD*)v136 + 8) = 0;
              *((_QWORD*)v136 + 6) = 0;
              *((_QWORD*)v136 + 6) = v135[6];
              *((_QWORD*)v136 + 7) = v135[7];
              *((_QWORD*)v136 + 8) = v135[8];
              v135[7] = 0;
              v135[8] = 0;
              v135[6] = 0;
              LOBYTE(v139) = *((_BYTE*)v135 + 72);
              v135 += 10;
              v136[72] = v139;
              v136 += 80;
            } while (v135 != v132);
            do {
              v141 = *(_QWORD*)(v133 + 48);
              if (v141 != 0) {
                v142 = *(_QWORD*)(v133 + 56);
                if (v141 == v142) {
                  goto LABEL_236;
                }
                do {
                  v143 = *(_QWORD*)(v142 - 8);
                  if (v143 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143);
                    v68 = std___1___shared_weak_count___release_weak(v143);
                  }
                  v142 -= 16;
                } while (v142 != v141);
                *(_QWORD*)(v133 + 56) = v141;
                k = (_QWORD*)fw_memory_g_heap_manager_ptr;
                if (*(_QWORD*)(v133 + 48) != 0) {
                LABEL_236:
                  v144 = 128;
                  if (*(_QWORD*)(*k + 200LL) == 0) {
                    v144 = 56;
                  }
                  v68 = nn_mem_StandardAllocator_Free_alt1(*k + v144);
                }
              }
              if ((*(_BYTE*)(v133 + 24) & 1) != 0 &&
                  *(_QWORD*)(v133 + 40) != 0) {
                v145 = 128;
                if (*(_QWORD*)(*k + 200LL) == 0) {
                  v145 = 56;
                }
                v68 = nn_mem_StandardAllocator_Free_alt1(*k + v145);
              }
              if ((*(_BYTE*)v133 & 1) != 0 && *(_QWORD*)(v133 + 16) != 0) {
                v146 = 128;
                if (*(_QWORD*)(*k + 200LL) == 0) {
                  v146 = 56;
                }
                v68 = nn_mem_StandardAllocator_Free_alt1(*k + v146);
              }
              v133 += 80;
            } while ((__int64*)v133 != v132);
            v147 = v274;
            v134 = v254;
            v133 = v274[1];
          }
          v123 = v124 + 80;
          v147[1] = v134;
          v147[2] = v124 + 80;
          v147[3] = &v255[10 * v256];
          if (v133 != 0) {
            v148 = 128;
            if (*(_QWORD*)(*k + 200LL) == 0) {
              v148 = 56;
            }
            v68 = nn_mem_StandardAllocator_Free_alt1(*k + v148);
          }
        LABEL_255:
          v41 = v274;
          v149 = v268;
          v274[2] = v123;
          if (v149 != nullptr) {
            v150 = v269;
            if (v149 == v269) {
              goto LABEL_263;
            }
            do {
              v151 = *(v150 - 1);
              if (v151 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v151 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64, long double))(*(_QWORD*)v151 + 16LL))(
                    v151, *(long double*)&v68);
                v68 = std___1___shared_weak_count___release_weak(v151);
              }
              v150 -= 2;
            } while (v150 != v149);
            v269 = v149;
            if (v268 != nullptr) {
            LABEL_263:
              v152 = 128;
              if (*(_QWORD*)(*k + 200LL) == 0) {
                v152 = 56;
              }
              v68 = nn_mem_StandardAllocator_Free_alt1(*k + v152);
            }
          }
          if ((v265 & 1) != 0 && v267 != 0) {
            v153 = 128;
            if (*(_QWORD*)(*k + 200LL) == 0) {
              v153 = 56;
            }
            v68 = nn_mem_StandardAllocator_Free_alt1(*k + v153);
          }
          if ((v262 & 1) != 0 && v264 != nullptr) {
            v154 = 128;
            if (*(_QWORD*)(*k + 200LL) == 0) {
              v154 = 56;
            }
            v68 = nn_mem_StandardAllocator_Free_alt1(*k + v154);
          }
          v69 = v272;
          if (v272 != nullptr) {
            goto LABEL_277;
          }
        LABEL_287:
          v158 = v258;
          if (v258 != 0) {
            v159 = v259;
            if ((_QWORD*)v258 == v259) {
              goto LABEL_91;
            }
            do {
              v160 = *(v159 - 1);
              if (v160 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v160 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64, long double))(*(_QWORD*)v160 + 16LL))(
                    v160, *(long double*)&v68);
                v68 = std___1___shared_weak_count___release_weak(v160);
              }
              v159 -= 2;
            } while (v159 != (_QWORD*)v158);
            v259 = (_QWORD*)v158;
            if (v258 != 0) {
            LABEL_91:
              v57 = 128;
              if (*(_QWORD*)(*k + 200LL) == 0) {
                v57 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*k + v57);
            }
          }
          v30 = v56 == v257;
          v56 += 3;
        } while (!v30);
        v10 = v253;
        v30 = v252 == (_QWORD)v55;
        v55 += 24;
        if (v30) {
          v48 = v251;
          v49 = v250;
          goto LABEL_303;
        }
      }
    }
    do {
    LABEL_303:
      if ((*(_BYTE*)(v48 + v49 - 24) & 1) != 0 &&
          *(_QWORD*)(v48 + v49 - 8) != 0) {
        v162 = 128;
        if (*(_QWORD*)(*k + 200LL) == 0) {
          v162 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*k + v162);
      }
      v49 -= 24;
    } while (v49 != 0);
    v163 = 128;
    if (*(_QWORD*)(*k + 200LL) == 0) {
      v163 = 56;
    }
    v19 = nn_mem_StandardAllocator_Free_alt1(*k + v163);
  }
  if (v10 != 0) {
    if ((__int64*)v10 != v11) {
      v164 = v11;
      do {
        v165 = *((_BYTE*)v164 - 24);
        v164 -= 3;
        if ((v165 & 1) != 0 && *(v11 - 1) != 0) {
          if (*(_QWORD*)(*k + 200LL) != 0) {
            v166 = 128;
          }
          else {
            v166 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*k + v166);
        }
        v11 = v164;
      } while (v164 != (__int64*)v10);
    }
    v167 = 128;
    if (*(_QWORD*)(*k + 200LL) == 0) {
      v167 = 56;
    }
    v19 = nn_mem_StandardAllocator_Free_alt1(*k + v167);
  }
  if ((CharacterSituation_f94550_alt1(*(long double*)&v19) & 1) != 0) {
    v170 = &v258;
    v269 = nullptr;
    v270 = nullptr;
    v267 = 0;
    v268 = nullptr;
    v265 = 0;
    v266 = 0;
    v263 = 0;
    v264 = nullptr;
    v262 = 0;
    v258 = (__int64)GameData_1ff8b58;
    v259 = v41;
    v261 = &v258;
    v260 = &v262;
    v171 = (char**)GameData_21f2540;
    v172 = GameData_21f2548;
    if (GameData_21f2540 == GameData_21f2548) {
      goto LABEL_331;
    }
    do {
      v173 = *v171++;
      v272 = v173;
      if (v261 == nullptr) {
        GameRoutine_60a310(0, v168, v169);
      }
      (*(void (**)(__int64*, char**))(*v261 + 48))(v261, &v272);
    } while (v171 != (char**)v172);
    v170 = v261;
    if (v261 == &v258) {
    LABEL_331:
      v174 = 32;
    LABEL_332:
      (*(void (**)(__int64))(*v170 + v174))((__int64)v170);
    }
    else if (v261 != nullptr) {
      v174 = 40;
      goto LABEL_332;
    }
    if (game_gmap_GmapClock_instance_ != 0) {
      v175 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v175 = (unsigned __int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v176 = ((__int16)v175[1] << 14) + (*v175 << 20) + ((__int16)v175[2] << 8);
    nn_os_LockMutex(&game_g_random_mutex);
    v177 = v176 & 0xFFFFFFFC | (v176 >> 30);
    v178 = 1812433253 * v177;
    v179 = 1812433253 * ((1812433253 * (v178 ^ (v178 >> 30)) + 1) ^
                         ((1812433253 * (v178 ^ (v178 >> 30)) + 1) >> 30)) +
           2;
    v180 = 1812433253 * (v179 ^ (v179 >> 30)) + 3;
    nn_os_UnlockMutex(&game_g_random_mutex);
    nn_os_LockMutex(&game_g_random_mutex);
    v181 = (((1011558400 * v177) ^ v178) >> 8) ^ (v180 >> 19) ^
           (1011558400 * v177) ^ v178 ^ v180;
    nn_os_UnlockMutex(&game_g_random_mutex);
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      nn_os_LockMutex(&game_g_random_mutex);
      v183 = game_map_MapRandom_instance__ptr[0];
      v184 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((_UNKNOWN**)0x8LL));
      v185 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                        (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v186 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
             (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v183 + 1) = v184;
      v181 = (v186 >> 8) ^ (v185 >> 19) ^ v186 ^ v185;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v183) = v185;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v183 + 4) = v181;
      nn_os_UnlockMutex(&game_g_random_mutex);
    }
    v187 = v262;
    v188 = v181 & 0x7F;
    if (v263 != v262) {
      v189 = (__int64)(v263 - v262) >> 6;
      v190 = 0;
      do {
        if ((game_hub_f960c0(v41, v187 + (((v188 + v190) % v189) << 6)) & 1) !=
            0) {
          ++v41[11];
        }
        v187 = v262;
        ++v190;
        v189 = (__int64)(v263 - v262) >> 6;
      } while (v189 > v190);
    }
    v191 = v265;
    if (v266 != v265) {
      v192 = (v266 - v265) >> 6;
      v193 = 0;
      do {
        if ((game_hub_f960c0(v41, v191 + (((v188 + v193) % v192) << 6)) & 1) !=
            0) {
          ++v41[11];
        }
        v191 = v265;
        ++v193;
        v192 = (v266 - v265) >> 6;
      } while (v192 > v193);
    }
    v194 = v268;
    if (v269 != v268) {
      v195 = ((char*)v269 - (char*)v268) >> 6;
      v196 = 0;
      do {
        if ((game_hub_f960c0(v41, &v194[8 * ((v188 + v196) % v195)]) & 1) !=
            0) {
          ++v41[11];
        }
        v194 = v268;
        ++v196;
        v195 = ((char*)v269 - (char*)v268) >> 6;
      } while (v195 > v196);
    }
    v197 = *(__int64**)(*GameData_212d458[0] + 24);
    v198 = *(__int64**)(*GameData_212d458[0] + 32);
    if (v197 != v198) {
      while (2) {
        v200 = *v197;
        if (*(_BYTE*)(*v197 + 1024) == 1) {
          v202 = (float32x4_t*)v274[4];
          v201 = (float32x4_t*)v274[5];
          if (v202 != v201) {
            v203 = *(_QWORD*)(v200 + 16);
            while (1) {
              if (v203 != 0) {
                v204 = *(_QWORD*)(v203 + 8);
                v205 = strlen(v204);
                v206 = LANES128(*(v202)).n128_u8[0] >> 1;
                if ((LANES128(*(v202)).n128_u8[0] & 1) != 0) {
                  v206 = LANES128(*(v202)).n128_u64[1];
                }
                if (v205 == v206) {
                  v207 = v205;
                  if (v205 == -1) {
                    String_60a230();
                  }
                  v208 = (LANES128(*(v202)).n128_u8[0] & 1) != 0
                             ? (unsigned __int64*)LANES128(v202[1]).n128_u64[0]
                             : (unsigned __int64*)((char*)LANES128(*(v202))
                                                       .n128_u64 +
                                                   1);
                  if ((unsigned int)memcmp_alt1(v208, v204, v207) == 0) {
                    break;
                  }
                }
              }
              v202 += 6;
              if (v202 == v201) {
                goto LABEL_356;
              }
            }
          }
          if (v202 == v201 ||
              (LANES128(v209).n128_u64[0] = *(_QWORD*)(v200 + 392),
               LANES64(v182).n64_u32[0] = *(_DWORD*)(v200 + 400),
               *(float32x2_t*)&LANES128(v209).n128_i8[8] = v182,
               v210 = vsubq_f32(v209, v202[2]), v211 = vmulq_f32(v210, v210),
               LANES64(v182).n64_u64[0] =
                   LANES128_OF(vextq_s8(v211, v211, 8u)).n128_u64[0],
               LANES128(v211).n128_u64[0] =
                   LANES64_OF(
                       vadd_f32(v182, COERCE_AS(float32x2_t,
                                                LANES128(v211).n128_u64[0])))
                       .n64_u64[0],
               LANES64_OF(
                   vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v211).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v211).n128_u64[0])))
                       .n64_f32[0] > 0x1.47ae160000000p-7)) {
          LABEL_356:
            v199 = v274;
            *(_BYTE*)(v200 + 1192) = 1;
            ++v199[11];
          }
          else {
            v212 = fmodf(*(float*)(v200 + 404) - LANES128(v202[3]).n128_f32[0],
                         0x1.6800000000000p+8);
            if (v212 >= 0.0) {
              v213 = v212 + 0.0;
            }
            else {
              v213 = (float)(v212 + 0.0) + 0x1.6800000000000p+8;
            }
            if (v213 > 0x1.6800000000000p+7) {
              v213 = v213 + -0x1.6800000000000p+8;
            }
            if (v213 > 30.0) {
              v200 = *v197;
              goto LABEL_356;
            }
          }
        }
        v197 += 2;
        if (v197 == v198) {
          break;
        }
        continue;
      }
    }
    LODWORD(v258) = 0;
    v214 = *(_QWORD*)GameData_212c6a0[0];
    if (((**(__int64 (***)(__int64, __int64*))(*(_QWORD*)GameData_212c6a0[0] +
                                               464LL))(
             *(_QWORD*)GameData_212c6a0[0] + 464LL, &v258) &
         1) != 0) {
      v215 = *(int*)(v214 + 484);
      *(_DWORD*)(v214 + 484) = v215 + 1;
      *(_BYTE*)(*(_QWORD*)(v214 + 472) + v215) = 0;
      CharacterSituation_f98540_alt1(*(_QWORD*)GameData_212dc58[0], v214 + 464);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)(v214 + 464) + 8LL))(v214 + 464,
                                                                  0);
    v216 = v268;
    v217 = fw_memory_g_heap_manager_ptr;
    if (v268 != nullptr) {
      v218 = v269;
      if (v268 == v269) {
        goto LABEL_408;
      }
      do {
        v219 = *(v218 - 4);
        if (v219 != 0) {
          v220 = *(v218 - 3);
          if (v219 == v220) {
            goto LABEL_397;
          }
          v221 = *(v218 - 3);
          do {
            v222 = *(_BYTE*)(v221 - 24);
            v221 -= 24;
            if ((v222 & 1) != 0 && *(_QWORD*)(v220 - 8) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
                v223 = 128;
              }
              else {
                v223 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v223);
            }
            v220 = v221;
          } while (v221 != v219);
          v224 = *(v218 - 4);
          *(v218 - 3) = v219;
          if (v224 != 0) {
          LABEL_397:
            if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
              v225 = 128;
            }
            else {
              v225 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v225);
          }
        }
        if ((*(_BYTE*)(v218 - 7) & 1) != 0 && *(v218 - 5) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
            v226 = 128;
          }
          else {
            v226 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v226);
        }
        v218 -= 8;
      } while (v216 != v218);
      v269 = v216;
      if (v268 != nullptr) {
      LABEL_408:
        v227 = 128;
        if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) == 0) {
          v227 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v227);
      }
    }
    v228 = v265;
    if (v265 != 0) {
      v229 = v266;
      if (v265 == v266) {
        goto LABEL_437;
      }
      do {
        v230 = *(_QWORD*)(v229 - 32);
        if (v230 != 0) {
          v231 = *(_QWORD*)(v229 - 24);
          if (v230 == v231) {
            goto LABEL_426;
          }
          v232 = *(_QWORD*)(v229 - 24);
          do {
            v233 = *(_BYTE*)(v232 - 24);
            v232 -= 24;
            if ((v233 & 1) != 0 && *(_QWORD*)(v231 - 8) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
                v234 = 128;
              }
              else {
                v234 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v234);
            }
            v231 = v232;
          } while (v232 != v230);
          v235 = *(_QWORD*)(v229 - 32);
          *(_QWORD*)(v229 - 24) = v230;
          if (v235 != 0) {
          LABEL_426:
            if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
              v236 = 128;
            }
            else {
              v236 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v236);
          }
        }
        if ((*(_BYTE*)(v229 - 56) & 1) != 0 && *(_QWORD*)(v229 - 40) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
            v237 = 128;
          }
          else {
            v237 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v237);
        }
        v229 -= 64;
      } while (v228 != v229);
      v266 = v228;
      if (v265 != 0) {
      LABEL_437:
        v238 = 128;
        if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) == 0) {
          v238 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v238);
      }
    }
    v239 = v262;
    if (v262 != 0) {
      v240 = v263;
      if (v262 == v263) {
        goto LABEL_466;
      }
      do {
        v241 = *(_QWORD*)(v240 - 32);
        if (v241 != 0) {
          v242 = *(_QWORD*)(v240 - 24);
          if (v241 == v242) {
            goto LABEL_455;
          }
          v243 = *(_QWORD*)(v240 - 24);
          do {
            v244 = *(_BYTE*)(v243 - 24);
            v243 -= 24;
            if ((v244 & 1) != 0 && *(_QWORD*)(v242 - 8) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
                v245 = 128;
              }
              else {
                v245 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v245);
            }
            v242 = v243;
          } while (v243 != v241);
          v246 = *(_QWORD*)(v240 - 32);
          *(_QWORD*)(v240 - 24) = v241;
          if (v246 != 0) {
          LABEL_455:
            if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
              v247 = 128;
            }
            else {
              v247 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v247);
          }
        }
        if ((*(_BYTE*)(v240 - 56) & 1) != 0 && *(_QWORD*)(v240 - 40) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) != 0) {
            v248 = 128;
          }
          else {
            v248 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v248);
        }
        v240 -= 64LL;
      } while (v239 != v240);
      v263 = v239;
      if (v262 != 0) {
      LABEL_466:
        v249 = 128;
        if (*(_QWORD*)(*(_QWORD*)v217 + 200LL) == 0) {
          v249 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v217 + v249);
      }
    }
  }
}

__int64 game_hub_CharacterSituation_GetCorpsTroop(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  int v11;
  __int64 v12;
  __int64 (**v13)();
  int v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  struct {
    __int64 (**v20)();
    _QWORD* v21;
    int* v22;
    unsigned int* v23;
    unsigned __int64* v24;
  } v20_;
  unsigned int v25;
  struct {
    int v26;
    char v27;
  } v26_;
  _QWORD* v28;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_QWORD**)(GameData_21ca310 + 56);
  if (v2 == nullptr) {
    return 0;
  }
  v3 = 250;
  while (1) {
    v4 = v2[55];
    if (v4 != 0 && *(_BYTE*)(v4 + 16) != 9 && v2[49] == a2) {
      break;
    }
    v5 = v2[333];
    if (v5 != 0 && *(_BYTE*)(v5 + 16) != 9 && v2[327] == a2) {
      v2 += 278;
      break;
    }
    v6 = v2[611];
    if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v2[605] == a2) {
      v9 = 4448;
      goto LABEL_25;
    }
    v7 = v2[889];
    if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v2[883] == a2) {
      v9 = 6672;
      goto LABEL_25;
    }
    v8 = v2[1167];
    if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v2[1161] == a2) {
      v9 = 8896;
    LABEL_25:
      v2 = (_QWORD*)((char*)v2 + v9);
      break;
    }
    v2 += 1390;
    v3 -= 5;
    if (v3 == 0) {
      return 0;
    }
  }
  v11 = 0;
  v28 = v2;
  LOBYTE(v26_.v26) = 0;
  v26_.v27 = 0;
  while (1) {
    v25 = v11;
    v20_.v21 = &GameData_1ade186;
    v13 = (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186);
    v14 = game_GameModeData_instance_;
    v20_.v20 = v13;
    if (game_GameModeData_instance_ != 0) {
      v15 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v20_.v20);
      if (v15 == 0) {
        break;
      }
      v14 = *(_DWORD*)(v15 + 32);
    }
    if (v11 >= v14) {
      goto LABEL_38;
    }
  LABEL_34:
    v20_.v20 = GameData_1ff8bd8;
    v20_.v21 = &v28;
    v20_.v22 = &v26_.v26;
    v20_.v23 = &v25;
    v20_.v24 = (unsigned __int64*)&v20_.v20;
    game_CorpsManager_EachUnit(v25, (__int64)&v20_.v20);
    if (v20_.v24 == (unsigned __int64*)&v20_.v20) {
      v12 = 32;
    LABEL_28:
      (*(void (**)(__int64))(*v20_.v24 + v12))((__int64)v20_.v24);
      goto LABEL_29;
    }
    if (v20_.v24 != nullptr) {
      v12 = 40;
      goto LABEL_28;
    }
  LABEL_29:
    v11 = v25 + 1;
  }
  if (v11 < 0) {
    goto LABEL_34;
  }
LABEL_38:
  if ((v26_.v27 & 1) == 0) {
    return 0;
  }
  if (v26_.v26 < 0) {
    return 0;
  }
  v16 = *(_QWORD*)(GameData_21c96e8 + 8);
  v17 = *(__int64**)(v16 + 8);
  v18 = *(__int64**)(v16 + 16);
  if (v17 == v18) {
    return 0;
  }
  while (1) {
    v19 = *v17++;
    result = v19;
    if (*(_DWORD*)(v19 + 84) == v26_.v26) {
      break;
    }
    if (v17 == v18) {
      return 0;
    }
  }
  return result;
}

__int64 CharacterSituation_f982e0(__int64 a1, __int64 a2)
{
  _BYTE* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  int v10;
  unsigned __int64 v11;
  char* v12;
  signed __int64 v13;
  char* v14;
  signed __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  signed __int64 v30;
  char* v31;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_BYTE**)(a2 + 88);
  if (v2 == nullptr || *v2 == 0) {
    return 0;
  }
  v3 = strlen(*(_QWORD*)(a2 + 88));
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v3);
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v30 = v4;
    v31 = v5;
    v29 = v7 | 1;
    goto LABEL_14;
  }
  LOBYTE(v29) = 2 * v3;
  v5 = (char*)&v29 + 1;
  if (v3 != 0) {
  LABEL_14:
    memmove(v5, v2, v4);
  }
  v5[v4] = 0;
  v8 = v30;
  v9 = v31;
  v10 = v29 & 1;
  v11 = (unsigned __int64)(unsigned __int8)v29 >> 1;
  if (v10 != 0) {
    v12 = v31;
  }
  else {
    v12 = (char*)&v29 + 1;
  }
  if ((v29 & 1) != 0) {
    v13 = v30;
  }
  else {
    v13 = (unsigned __int64)(unsigned __int8)v29 >> 1;
  }
  if (v13 >= 2) {
    v14 = &v12[v13];
    v15 = v13;
    v16 = v12;
    do {
      v17 = (char*)memchr(v16, 95, v15 - 1);
      if (v17 == nullptr) {
        break;
      }
      if (*(_WORD*)v17 == 16735) {
        if (v17 != v14) {
          v18 = v17 - v12;
          if (v17 - v12 != -1) {
            if (v18 > v13) {
              String_60a230();
            }
            if (v10 != 0) {
              v30 = v17 - v12;
            }
            else {
              v9 = (char*)&v29 + 1;
              LOBYTE(v29) = 2 * v18;
            }
            v9[v18] = 0;
            v8 = v30;
            v10 = v29 & 1;
            v11 = (unsigned __int64)(unsigned __int8)v29 >> 1;
          }
        }
        break;
      }
      v16 = v17 + 1;
      v15 = v14 - v16;
    } while (v14 - v16 >= 2);
  }
  if (v10 != 0) {
    v19 = v8;
  }
  else {
    v19 = v11;
  }
  v20 = *(_QWORD*)GameData_212dbb8[0];
  v21 = *(unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL);
  v22 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 48LL);
  if ((v21 & 1) == 0) {
    v22 = v21 >> 1;
  }
  if (v19 == v22) {
    if (v10 != 0) {
      v23 = v31;
    }
    else {
      v23 = (char*)&v29 + 1;
    }
    v24 = *(_QWORD*)(v20 + 56);
    v25 = v20 + 41;
    if ((v21 & 1) != 0) {
      v26 = v24;
    }
    else {
      v26 = v25;
    }
    result = (unsigned int)memcmp(v23, v26) == 0;
    if (v10 == 0) {
      return result;
    }
  }
  else {
    result = 0;
    if (v10 == 0) {
      return result;
    }
  }
  if (v31 != nullptr) {
    v27 = result;
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
    return v27;
  }
  return result;
}

__int64 CharacterSituation_f98540(__int64 a1, __int64 a2)
{
  void (**v2)(__int64, int*);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  void (**v15)(__int64, _QWORD*);
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int128 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
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
  unsigned __int64 v44;
  bool v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  int v64;
  void (**v66)(__int64, int*);
  void (*v67)(__int64, int*);
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
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char v88;
  char* v89;
  unsigned __int64 v90;
  char* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  _QWORD v109[2];
  __int64 v110;
  __int64 v111;
  __int64 v112;
  int v113;
  __int64 v114;
  __int64 v115;
  char* v116;
  unsigned __int64 v117;
  int v118;

  v2 = *(void (***)(__int64, int*))a2;
  LODWORD(v109[0]) = 0;
  (*v2)(a2, (int*)v109);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = 0;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = -60;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = 0;
  v8 = *(int*)(a2 + 20);
  v9 = 0xAAAAAAAAAAAAAAABLL *
       ((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 5);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v9;
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v9);
  v11 = *(_QWORD*)(a1 + 32);
  if (*(_QWORD*)(a1 + 40) == v11) {
    LODWORD(v13) = 0;
  LABEL_26:
    v64 = v13 - 196;
    do {
      v66 = *(void (***)(__int64, int*))a2;
      v109[1] = 0;
      v110 = 0;
      v109[0] = 0;
      v111 = 0;
      v112 = 0;
      v113 = 0;
      v114 = 0;
      v115 = 0;
      v116 = nullptr;
      v117 = 0;
      v67 = *v66;
      v118 = 0;
      v67(a2, &v118);
      v68 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v68 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v68) = 1;
      v69 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v69 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v69) = 0;
      v70 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v70 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v70) = 0;
      v71 = *(int*)(a2 + 20);
      v72 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v71 + 1;
      *(_BYTE*)(v72 + v71) = 0;
      v73 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v73 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v73) = 0;
      v74 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v74 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v74) = 0;
      v75 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v75 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v75) = 0;
      v76 = *(int*)(a2 + 20);
      LODWORD(v75) = HIDWORD(v111);
      *(_DWORD*)(a2 + 20) = v76 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v76) = v75;
      v77 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v77 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v77) = BYTE1(v75);
      v78 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v78 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = BYTE2(v75);
      v79 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v79 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v79) = BYTE3(v75);
      v80 = *(int*)(a2 + 20);
      LODWORD(v75) = v112;
      *(_DWORD*)(a2 + 20) = v80 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v80) = v75;
      v81 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v81 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v81) = BYTE1(v75);
      v82 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v82 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = BYTE2(v75);
      v83 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v83 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v83) = BYTE3(v75);
      v84 = *(int*)(a2 + 20);
      LODWORD(v75) = v113;
      *(_DWORD*)(a2 + 20) = v84 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v84) = v75;
      v85 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v85 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v85) = BYTE1(v75);
      v86 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v86 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v86) = BYTE2(v75);
      v87 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v87 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v87) = BYTE3(v75);
      v88 = v114;
      v89 = v116;
      v90 = (unsigned __int64)(unsigned __int8)v114 >> 1;
      if ((v114 & 1) != 0) {
        v91 = v116;
      }
      else {
        v91 = (char*)&v114 + 1;
      }
      if ((v114 & 1) != 0) {
        LODWORD(v90) = v115;
      }
      if ((_DWORD)v90 != 0) {
        v92 = *(int*)(a2 + 20);
        v93 = (unsigned int)(v90 + 1);
        *(_DWORD*)(a2 + 20) = v92 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92) = v90 + 1;
        v94 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v94 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v94) = BYTE1(v93);
        v95 = *(_DWORD*)(a2 + 20);
        if ((v90 & 0x80000000) == 0) {
          memmove(*(_QWORD*)(a2 + 8) + v95, v91, v93);
          v95 = *(_DWORD*)(a2 + 20) + v93;
        }
      }
      else {
        v96 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v96 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v96) = 0;
        v97 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v97 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v97) = 0;
        v95 = *(_DWORD*)(a2 + 20);
      }
      v98 = v117;
      *(_DWORD*)(a2 + 20) = v95 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v95) = v98;
      v99 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v99 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v99) = BYTE1(v98);
      v100 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v100 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v100) = BYTE2(v98);
      v101 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v101 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v101) = BYTE3(v98);
      v102 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v102 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v102) = BYTE4(v98);
      v103 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v103 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v103) = BYTE5(v98);
      v104 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v104 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v104) = BYTE6(v98);
      v105 = HIBYTE(v98);
      v106 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v106 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v106) = v105;
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
      if ((v88 & 1) != 0 && v89 != nullptr) {
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v107 = 128;
        }
        else {
          v107 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v107);
      }
      if ((v109[0] & 1) != 0 && v110 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v108 = 128;
        }
        else {
          v108 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v108);
      }
    } while (!__CFADD__(v64++, 1));
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  v12 = 0;
  v13 = 0;
  do {
    v14 = v13;
    v15 = *(void (***)(__int64, _QWORD*))a2;
    LODWORD(v109[0]) = 0;
    v16 = v11 + v12;
    (*v15)(a2, v109);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = 1;
    v18 = *(unsigned __int8*)(v11 + v12);
    v19 = (v18 & 1) == 0;
    v20 = v18 >> 1;
    if (v19) {
      v21 = v16 + 1;
    }
    else {
      v21 = *(_QWORD*)(v16 + 16);
    }
    if (!v19) {
      LODWORD(v20) = *(_DWORD*)(v16 + 8);
    }
    if ((_DWORD)v20 != 0) {
      v22 = *(int*)(a2 + 20);
      v23 = (unsigned int)(v20 + 1);
      *(_DWORD*)(a2 + 20) = v22 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v20 + 1;
      v24 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v24 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = BYTE1(v23);
      v25 = *(_DWORD*)(a2 + 20);
      if ((v20 & 0x80000000) == 0) {
        memmove(*(_QWORD*)(a2 + 8) + v25, v21, v23);
        v25 = *(_DWORD*)(a2 + 20) + v23;
        *(_DWORD*)(a2 + 20) = v25;
      }
    }
    else {
      v26 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v26 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = 0;
      v27 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v27 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = 0;
      v25 = *(_DWORD*)(a2 + 20);
    }
    v28 = *(_OWORD*)(v11 + v12 + 32);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v28;
    v29 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = BYTE1(v28);
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE2(v28);
    v31 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE3(v28);
    v32 = *(int*)(a2 + 20);
    LODWORD(v31) = *(_DWORD*)(v11 + v12 + 36);
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = v31;
    v33 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = BYTE1(v31);
    v34 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v34 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = BYTE2(v31);
    v35 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = BYTE3(v31);
    v36 = *(int*)(a2 + 20);
    LODWORD(v31) = *(_DWORD*)(v11 + v12 + 40);
    *(_DWORD*)(a2 + 20) = v36 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = v31;
    v37 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = BYTE1(v31);
    v38 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = BYTE2(v31);
    v39 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = BYTE3(v31);
    v40 = *(int*)(a2 + 20);
    LODWORD(v31) = *(_DWORD*)(v11 + v12 + 48);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = v31;
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = BYTE1(v31);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = BYTE2(v31);
    v43 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v43 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43) = BYTE3(v31);
    v44 = *(unsigned __int8*)(v11 + v12 + 56);
    v45 = (v44 & 1) == 0;
    v46 = v44 >> 1;
    if (v45) {
      v47 = v11 + v12 + 57;
    }
    else {
      v47 = *(_QWORD*)(v11 + v12 + 72);
    }
    if (!v45) {
      LODWORD(v46) = *(_DWORD*)(v11 + v12 + 64);
    }
    if ((_DWORD)v46 != 0) {
      v48 = *(int*)(a2 + 20);
      v49 = (unsigned int)(v46 + 1);
      *(_DWORD*)(a2 + 20) = v48 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v48) = v46 + 1;
      v50 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v50 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v50) = BYTE1(v49);
      v51 = *(_DWORD*)(a2 + 20);
      if ((v46 & 0x80000000) == 0) {
        memmove(*(_QWORD*)(a2 + 8) + v51, v47, v49);
        v51 = *(_DWORD*)(a2 + 20) + v49;
        *(_DWORD*)(a2 + 20) = v51;
      }
    }
    else {
      v52 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v52 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = 0;
      v53 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v53 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v53) = 0;
      v51 = *(_DWORD*)(a2 + 20);
    }
    v54 = *(_QWORD*)(v11 + v12 + 80);
    *(_DWORD*)(a2 + 20) = v51 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v51) = v54;
    v55 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v55 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v55) = BYTE1(v54);
    v56 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v56 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v56) = BYTE2(v54);
    v57 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v57 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = BYTE3(v54);
    v58 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v58 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v58) = BYTE4(v54);
    v59 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v59 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v59) = BYTE5(v54);
    v60 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v60 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v60) = BYTE6(v54);
    v61 = HIBYTE(v54);
    v62 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v62 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62) = v61;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    v11 = *(_QWORD*)(a1 + 32);
    v13 = v14 + 1;
    if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(a1 + 40) - v11) >> 5) <= v14 + 1) {
      break;
    }
    v12 += 96;
  } while (v14 < 0xC3);
  if (v14 <= 0xC2) {
    goto LABEL_26;
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 CharacterSituation_f98e60(_QWORD* a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int i;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int16 v31;
  unsigned int v32;
  struct {
    __int64 v33;
    unsigned __int64 v34;
    __int64 v35;
    char gap40_[8];
    __int64 v36;
    __int64 v37;
    int v38;
    char gap68_[4];
    __int64 v39;
    unsigned __int64 v40;
    __int64 v41;
    __int64 v42;
  } v33_;

  v3 = a1[4];
  v4 = a1[5];
  v2 = a1 + 4;
  v7 = fw_memory_g_heap_manager_ptr;
  while (v4 != v3) {
    v8 = v4;
    if ((*(_BYTE*)(v4 - 40) & 1) != 0) {
      v9 = *(_QWORD*)(v4 - 24);
      if (v9 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v10, v9);
      }
    }
    v4 -= 96;
    if ((*(_BYTE*)(v8 - 96) & 1) != 0) {
      v11 = *(_QWORD*)(v8 - 80);
      if (v11 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v12, v11);
      }
    }
  }
  a1[5] = v3;
  LODWORD(v33_.v33) = 0;
  (*(void (**)(__int64*, __int64*))(*a2 + 16))(a2, &v33_.v33);
  v13 = *((int*)a2 + 5);
  v14 = a2[1];
  *((_DWORD*)a2 + 5) = v13 + 2;
  v15 = *(unsigned __int8*)(v14 + v13 + 1);
  *((_DWORD*)a2 + 5) = v13 + 3;
  v16 = v15 | (*(unsigned __int8*)(v14 + v13 + 2) << 8);
  *((_DWORD*)a2 + 5) = v13 + 4;
  LOWORD(v15) = *(unsigned __int8*)(v14 + v13 + 3);
  *((_DWORD*)a2 + 5) = v13 + 5;
  v31 = v15 | (*(unsigned __int8*)(v14 + v13 + 4) << 8);
  v17 = v31;
  if (v31 >= v16) {
    v17 = v16;
  }
  v32 = v17;
  if (v17 != 0) {
    for (i = v17; i != 0; --i) {
      v33_.v34 = 0;
      v33_.v35 = 0;
      v33_.v33 = 0;
      v33_.v36 = 0;
      v33_.v37 = 0;
      v33_.v38 = 0;
      v33_.v39 = 0;
      v33_.v40 = 0;
      v33_.v41 = 0;
      v33_.v42 = 0;
      CharacterSituation_f991e0((__int64)&v33_.v33, a2);
      v19 = a1[5];
      if (v19 >= a1[6]) {
        v21 = CharacterSituation_f994e0(v2, (__int64)&v33_.v33);
      }
      else {
        if ((v33_.v33 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1((__int64*)a1[5], v33_.v35,
                                             v33_.v34);
        }
        else {
          *(_QWORD*)(v19 + 8) = v33_.v34;
          v20 = v33_.v33;
          *(_QWORD*)(v19 + 16) = v33_.v35;
          *(_QWORD*)v19 = v20;
        }
        *(_QWORD*)(v19 + 40) = v33_.v37;
        *(_QWORD*)(v19 + 32) = v33_.v36;
        *(_DWORD*)(v19 + 48) = v33_.v38;
        if ((v33_.v39 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1((__int64*)(v19 + 56), v33_.v41,
                                             v33_.v40);
        }
        else {
          v22 = v33_.v39;
          v23 = v33_.v41;
          *(_QWORD*)(v19 + 64) = v33_.v40;
          *(_QWORD*)(v19 + 72) = v23;
          *(_QWORD*)(v19 + 56) = v22;
        }
        v21 = v19 + 96;
        *(_QWORD*)(v19 + 80) = v33_.v42;
      }
      v24 = v33_.v39;
      a1[5] = v21;
      if ((v24 & 1) != 0 && v33_.v41 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v25, v33_.v41);
      }
      if ((v33_.v33 & 1) != 0 && v33_.v35 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v26, v33_.v35);
      }
    }
  }
  if (v16 > v31) {
    v27 = v16 - v32;
    do {
      v33_.v34 = 0;
      v33_.v35 = 0;
      v33_.v33 = 0;
      v33_.v36 = 0;
      v33_.v37 = 0;
      v33_.v38 = 0;
      v33_.v39 = 0;
      v33_.v40 = 0;
      v33_.v41 = 0;
      v33_.v42 = 0;
      CharacterSituation_f991e0((__int64)&v33_.v33, a2);
      if ((v33_.v39 & 1) != 0 && v33_.v41 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v28, v33_.v41);
      }
      if ((v33_.v33 & 1) != 0 && v33_.v35 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v29, v33_.v35);
      }
      --v27;
    } while (v27 != 0);
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

__int64 CharacterSituation_f991e0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int128 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  int v49;

  v2 = *a2;
  v49 = 0;
  (*(void (**)(__int64*, int*))(v2 + 16))(a2, &v49);
  v5 = *((int*)a2 + 5);
  v6 = a2[1];
  v7 = v5 + 1;
  v8 = v5 + 2;
  *((_DWORD*)a2 + 5) = v5 + 1;
  v9 = *(unsigned __int8*)(v6 + v5);
  *((_DWORD*)a2 + 5) = v5 + 2;
  v10 = v5 + 3;
  LODWORD(v7) = *(unsigned __int8*)(v6 + v7);
  *((_DWORD*)a2 + 5) = v10;
  v11 = v7 | (*(unsigned __int8*)(v6 + v8) << 8);
  if (v11 != 0) {
    *((_DWORD*)a2 + 5) = v10 + v11;
    GameRoutine_60a020(a1, v6 + v10);
  }
  else if ((*(_BYTE*)a1 & 1) != 0) {
    **(_BYTE**)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 8) = 0;
  }
  else {
    *(_WORD*)a1 = 0;
  }
  v12 = *((int*)a2 + 5);
  v13 = a2[1];
  *((_DWORD*)a2 + 5) = v12 + 1;
  v14 = *(unsigned __int8*)(v13 + v12);
  *((_DWORD*)a2 + 5) = v12 + 2;
  v15 = v14 | (*(unsigned __int8*)(v13 + v12 + 1) << 8);
  *((_DWORD*)a2 + 5) = v12 + 3;
  v16 = *(unsigned __int8*)(v13 + v12 + 2);
  *((_DWORD*)a2 + 5) = v12 + 4;
  *(_DWORD*)(a1 + 32) =
      v15 | (v16 << 16) | (*(unsigned __int8*)(v13 + v12 + 3) << 24);
  v17 = *((int*)a2 + 5);
  v18 = a2[1];
  *((_DWORD*)a2 + 5) = v17 + 1;
  v19 = *(unsigned __int8*)(v18 + v17);
  *((_DWORD*)a2 + 5) = v17 + 2;
  v20 = v19 | (*(unsigned __int8*)(v18 + v17 + 1) << 8);
  *((_DWORD*)a2 + 5) = v17 + 3;
  v21 = *(unsigned __int8*)(v18 + v17 + 2);
  *((_DWORD*)a2 + 5) = v17 + 4;
  *(_DWORD*)(a1 + 36) =
      v20 | (v21 << 16) | (*(unsigned __int8*)(v18 + v17 + 3) << 24);
  v22 = *((int*)a2 + 5);
  v23 = a2[1];
  *((_DWORD*)a2 + 5) = v22 + 1;
  v24 = *(unsigned __int8*)(v23 + v22);
  *((_DWORD*)a2 + 5) = v22 + 2;
  v25 = v24 | (*(unsigned __int8*)(v23 + v22 + 1) << 8);
  *((_DWORD*)a2 + 5) = v22 + 3;
  v26 = *(unsigned __int8*)(v23 + v22 + 2);
  *((_DWORD*)a2 + 5) = v22 + 4;
  v27 = *(_OWORD*)(a1 + 32);
  *((_QWORD*)&v27 + 1) =
      v25 | (unsigned int)(v26 << 16) |
      (unsigned __int64)(*(unsigned __int8*)(v23 + v22 + 3) << 24);
  *(_OWORD*)(a1 + 32) = v27;
  v28 = *((int*)a2 + 5);
  v29 = a2[1];
  *((_DWORD*)a2 + 5) = v28 + 1;
  v30 = *(unsigned __int8*)(v29 + v28);
  *((_DWORD*)a2 + 5) = v28 + 2;
  v31 = v30 | (*(unsigned __int8*)(v29 + v28 + 1) << 8);
  *((_DWORD*)a2 + 5) = v28 + 3;
  v32 = *(unsigned __int8*)(v29 + v28 + 2);
  *((_DWORD*)a2 + 5) = v28 + 4;
  *(_DWORD*)(a1 + 48) =
      v31 | (v32 << 16) | (*(unsigned __int8*)(v29 + v28 + 3) << 24);
  v33 = *((int*)a2 + 5);
  v34 = a2[1];
  v35 = v33 + 1;
  *((_DWORD*)a2 + 5) = v33 + 1;
  v36 = *(unsigned __int8*)(v34 + v33);
  v37 = v33 + 2;
  *((_DWORD*)a2 + 5) = v37;
  v38 = v36 | (*(unsigned __int8*)(v34 + v35) << 8);
  if (v38 != 0) {
    *((_DWORD*)a2 + 5) = v37 + v38;
    GameRoutine_60a020(a1 + 56, v34 + v37);
    if (v9 == 0) {
      return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
    }
    goto LABEL_13;
  }
  if ((*(_BYTE*)(a1 + 56) & 1) == 0) {
    *(_WORD*)(a1 + 56) = 0;
    if (v9 == 0) {
      return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
    }
    goto LABEL_13;
  }
  **(_BYTE**)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  if (v9 != 0) {
  LABEL_13:
    v39 = *((int*)a2 + 5);
    v40 = a2[1];
    *((_DWORD*)a2 + 5) = v39 + 1;
    v41 = *(unsigned __int8*)(v40 + v39);
    *((_DWORD*)a2 + 5) = v39 + 2;
    v42 = v41 | ((unsigned __int64)*(unsigned __int8*)(v40 + v39 + 1) << 8);
    *((_DWORD*)a2 + 5) = v39 + 3;
    v43 = v42 | ((unsigned __int64)*(unsigned __int8*)(v40 + v39 + 2) << 16);
    *((_DWORD*)a2 + 5) = v39 + 4;
    v44 = v43 | ((unsigned __int64)*(unsigned __int8*)(v40 + v39 + 3) << 24);
    *((_DWORD*)a2 + 5) = v39 + 5;
    v45 = v44 | ((unsigned __int64)*(unsigned __int8*)(v40 + v39 + 4) << 32);
    *((_DWORD*)a2 + 5) = v39 + 6;
    v46 = v45 | ((unsigned __int64)*(unsigned __int8*)(v40 + v39 + 5) << 40);
    *((_DWORD*)a2 + 5) = v39 + 7;
    v47 = *(unsigned __int8*)(v40 + v39 + 6);
    *((_DWORD*)a2 + 5) = v39 + 8;
    *(_QWORD*)(a1 + 80) =
        v46 | (v47 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v40 + v39 + 7) << 56);
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

__int64 CharacterSituation_f994e0(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 5);
  if (v3 > 0x2AAAAAAAAAAAAAALL) {
    GameRoutine_f99760();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 5) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 5);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 5) >= 0x155555555555555LL) {
    v7 = 0x2AAAAAAAAAAAAAALL;
  }
  else {
    v7 = v3;
  }
  if (v7 != 0) {
    if (v7 > 0x2AAAAAAAAAAAAAALL) {
      GameRoutine_60a210(a1);
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        96 * v7, 16, 0);
  }
  else {
    v8 = 0;
  }
  v9 = v8 + v2;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9, *(_QWORD*)(a2 + 16), *(_QWORD*)(a2 + 8));
  }
  else {
    v10 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)v9 = *(_QWORD*)a2;
    *(_QWORD*)(v9 + 8) = v10;
    *(_QWORD*)(v9 + 16) = *(_QWORD*)(a2 + 16);
  }
  v11 = *(_BYTE*)(a2 + 56);
  v12 = *(_DWORD*)(a2 + 48);
  v13 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(v9 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v9 + 40) = v13;
  *(_DWORD*)(v9 + 48) = v12;
  if ((v11 & 1) != 0) {
    fw_text_String_CopyTerminated(v9 + 56, *(_QWORD*)(a2 + 72),
                                  *(_QWORD*)(a2 + 64));
  }
  else {
    v14 = *(_QWORD*)(a2 + 64);
    v15 = *(_QWORD*)(a2 + 72);
    *(_QWORD*)(v9 + 56) = *(_QWORD*)(a2 + 56);
    *(_QWORD*)(v9 + 64) = v14;
    *(_QWORD*)(v9 + 72) = v15;
  }
  v16 = v8 + 96 * v7;
  v17 = *(_QWORD*)(a2 + 80);
  v18 = (__int64*)*a1;
  v19 = (__int64*)a1[1];
  v20 = v9 + 96;
  *(_QWORD*)(v9 + 80) = v17;
  v21 = v9 + (char*)v18 - (char*)v19;
  if (v18 != v19) {
    v22 = v18;
    v23 = v21;
    do {
      v24 = *v22;
      v25 = v22[2];
      *(_QWORD*)(v23 + 8) = v22[1];
      *(_QWORD*)(v23 + 16) = v25;
      *(_QWORD*)v23 = v24;
      v22[1] = 0;
      v22[2] = 0;
      *v22 = 0;
      v26 = v22[5];
      *(_QWORD*)(v23 + 32) = v22[4];
      *(_QWORD*)(v23 + 40) = v26;
      *(_DWORD*)(v23 + 48) = *((_DWORD*)v22 + 12);
      v27 = v22[7];
      v28 = v22[9];
      *(_QWORD*)(v23 + 64) = v22[8];
      *(_QWORD*)(v23 + 72) = v28;
      *(_QWORD*)(v23 + 56) = v27;
      v22[8] = 0;
      v22[9] = 0;
      v22[7] = 0;
      v29 = v22[10];
      v22 += 12;
      *(_QWORD*)(v23 + 80) = v29;
      v23 += 96;
    } while (v22 != v19);
    do {
      if ((v18[7] & 1) != 0 && v18[9] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v30);
      }
      if ((*(_BYTE*)v18 & 1) != 0 && v18[2] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v31);
      }
      v18 += 12;
    } while (v18 != v19);
    v18 = (__int64*)*a1;
  }
  *a1 = v21;
  a1[1] = v20;
  a1[2] = v16;
  if (v18 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v32);
  }
  return v20;
}

__n128 CharacterSituation_f99780(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __n128 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 48);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v1 == v3) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = std___1___shared_weak_count___release_weak(v4);
      }
      v3 -= 16;
    } while (v3 != v1);
    v6 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 56) = v1;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  return result;
}

__int64 game_hub_CharacterSituation_Rebuild_lambda0_Invoke(__int64 a1,
                                                           _QWORD** a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  char* v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  _DWORD* v60;
  _QWORD v61[2];
  char* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  char v70;
  bool v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v76 = 0;
  v77 = 0;
  v74 = 0;
  v75 = 0;
  v72 = 0;
  v73 = 0;
  v71 = false;
  result = GameRoutine_f96ec0(v4, v3, (__int64)&v75, (__int64)&v72, &v71);
  if ((result & 1) != 0) {
    v70 = 0;
    v68 = 0;
    v69 = 0;
    v66 = 0;
    v67 = 0;
    v64 = 0;
    v65 = 0;
    v63 = v3;
    if ((v75 & 1) != 0) {
      GameRoutine_64df20(&v64, v77, v76);
    }
    else {
      v64 = v75;
      v65 = v76;
      v66 = v77;
    }
    GameRoutine_6b7aa0(&v67);
    if (v71) {
      GameRoutine_112eec0((void*)v61, v3);
      if ((v61[0] & 1) != 0) {
        v7 = v62;
      }
      else {
        v7 = (char*)v61 + 1;
      }
      v60 = v7;
      v8 = game_HashString(v7);
      v10 = game_GameModeData_instance_;
      v59 = v8;
      if (game_GameModeData_instance_ != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21ed530) != 0) {
          GameData_21ed528 = 1598310733;
          __cxa_guard_release(&GameData_21ed530);
        }
        v9 = v60 != nullptr && *v60 == GameData_21ed528 &&
             (v11 = game_GameVariableTable_Find(*(_QWORD*)(v10 + 48), &v59)) !=
                 0 &&
             *(_DWORD*)(v11 + 32) != 0;
      }
      if (v10 != 0 && v9) {
        v6 = 2;
      }
      else {
        v6 = 1;
      }
      if ((v61[0] & 1) != 0 && v62 != nullptr) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v12);
      }
    }
    else {
      v6 = 0;
    }
    v13 = (__int64*)(*(_QWORD*)(a1 + 16) + 24 * v6);
    v14 = v13[1];
    v15 = v13[2];
    if (v14 >= v15) {
      v17 = v14 - *v13;
      v18 = (v17 >> 6) + 1;
      if (v18 >> 58 != 0) {
        GameRoutine_f9a220();
      }
      v19 = v15 - *v13;
      v20 = v19 >> 5;
      if (v19 >> 5 <= v18) {
        v20 = (v17 >> 6) + 1;
      }
      if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFC0LL) {
        v21 = 0x3FFFFFFFFFFFFFFLL;
      }
      else {
        v21 = v20;
      }
      if (v21 != 0) {
        if (v21 >> 58 != 0) {
          GameRoutine_60a210(v14);
        }
        v22 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v21 << 6, 16, 0);
      }
      else {
        v22 = 0;
      }
      v23 = v22 + v17;
      v24 = v22 + (v21 << 6);
      result = CharacterSituation_f9a100(v22 + v17, &v63);
      v25 = *v13;
      v26 = v13[1];
      v16 = v23 + 64;
      v27 = v23 + *v13 - v26;
      if (v26 != *v13) {
        v58 = v24;
        v28 = *v13;
        v29 = v23 + *v13 - v26;
        do {
          *(_QWORD*)v29 = *(_QWORD*)v28;
          v30 = *(_QWORD*)(v28 + 8);
          v31 = *(_QWORD*)(v28 + 24);
          *(_QWORD*)(v29 + 16) = *(_QWORD*)(v28 + 16);
          *(_QWORD*)(v29 + 24) = v31;
          *(_QWORD*)(v29 + 8) = v30;
          *(_QWORD*)(v28 + 16) = 0;
          *(_QWORD*)(v28 + 24) = 0;
          *(_QWORD*)(v28 + 8) = 0;
          *(_QWORD*)(v29 + 40) = 0;
          *(_QWORD*)(v29 + 48) = 0;
          *(_QWORD*)(v29 + 32) = 0;
          *(_QWORD*)(v29 + 32) = *(_QWORD*)(v28 + 32);
          *(_QWORD*)(v29 + 40) = *(_QWORD*)(v28 + 40);
          *(_QWORD*)(v29 + 48) = *(_QWORD*)(v28 + 48);
          *(_QWORD*)(v28 + 40) = 0;
          *(_QWORD*)(v28 + 48) = 0;
          *(_QWORD*)(v28 + 32) = 0;
          LOBYTE(v30) = *(_BYTE*)(v28 + 56);
          v28 += 64;
          *(_BYTE*)(v29 + 56) = v30;
          v29 += 64;
        } while (v28 != v26);
        v32 = fw_memory_g_heap_manager_ptr;
        do {
          v33 = *(_QWORD*)(v25 + 32);
          if (v33 != 0) {
            v34 = *(_QWORD*)(v25 + 40);
            if (v33 == v34) {
              goto LABEL_53;
            }
            v35 = *(_QWORD*)(v25 + 40);
            do {
              v36 = *(_BYTE*)(v35 - 24);
              v35 -= 24;
              if ((v36 & 1) != 0 && *(_QWORD*)(v34 - 8) != 0) {
                if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
                  v37 = 128;
                }
                else {
                  v37 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v37);
              }
              v34 = v35;
            } while (v35 != v33);
            v38 = *(_QWORD*)(v25 + 32);
            *(_QWORD*)(v25 + 40) = v33;
            if (v38 != 0) {
            LABEL_53:
              if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
                v39 = 128;
              }
              else {
                v39 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v39);
            }
          }
          if ((*(_BYTE*)(v25 + 8) & 1) != 0 && *(_QWORD*)(v25 + 24) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
              v40 = 128;
            }
            else {
              v40 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v40);
          }
          v25 += 64;
        } while (v25 != v26);
        v25 = *v13;
        v24 = v58;
      }
      *v13 = v27;
      v13[1] = v16;
      v13[2] = v24;
      if (v25 != 0) {
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v41 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
      }
    }
    else {
      result = CharacterSituation_f9a100(v14, &v63);
      v16 = result + 64;
    }
    v13[1] = v16;
    v42 = v67;
    if (v67 != 0) {
      v43 = v68;
      if (v67 == v68) {
        goto LABEL_79;
      }
      v44 = v68;
      v45 = fw_memory_g_heap_manager_ptr;
      do {
        v46 = *(_BYTE*)(v44 - 24);
        v44 -= 24;
        if ((v46 & 1) != 0 && *(_QWORD*)(v43 - 8) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) != 0) {
            v47 = 128;
          }
          else {
            v47 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v45 + v47);
        }
        v43 = v44;
      } while (v44 != v42);
      v68 = v42;
      if (v67 != 0) {
      LABEL_79:
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v48 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v48);
      }
    }
    if ((v64 & 1) != 0 && v66 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v49 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49);
    }
  }
  v50 = v72;
  if (v72 != 0) {
    v51 = v73;
    v52 = fw_memory_g_heap_manager_ptr;
    if (v72 == v73) {
      goto LABEL_98;
    }
    v53 = v73;
    do {
      v54 = *(_BYTE*)(v53 - 24);
      v53 -= 24;
      if ((v54 & 1) != 0 && *(_QWORD*)(v51 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v52 + 200LL) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v52 + v55);
      }
      v51 = v53;
    } while (v53 != v50);
    v73 = v50;
    if (v72 != 0) {
    LABEL_98:
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)v52 + 200LL) == 0) {
        v56 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v52 + v56);
    }
  }
  if ((v75 & 1) != 0 && v77 != 0) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v57);
  }
  return result;
}

__int64 CharacterSituation_f9a100(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  *(_QWORD*)a1 = *(_QWORD*)a2;
  v4 = (_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    v4 = (_QWORD*)fw_text_String_CopyTerminated(v4, *(_QWORD*)(a2 + 24),
                                                *(_QWORD*)(a2 + 16));
  }
  else {
    v5 = *(_QWORD*)(a2 + 8);
    v6 = *(_QWORD*)(a2 + 24);
    v4[1] = *(_QWORD*)(a2 + 16);
    v4[2] = v6;
    *v4 = v5;
  }
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  v7 = *(char**)(a2 + 32);
  v8 = *(char**)(a2 + 40);
  v9 = v8 - v7;
  if (v8 != v7) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(v4);
    }
    v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8 - v7, 16, 0);
    *(_QWORD*)(a1 + 32) = v10;
    *(_QWORD*)(a1 + 40) = v10;
    *(_QWORD*)(a1 + 48) = (char*)v10 + v9;
    do {
      if ((*v7 & 1) != 0) {
        fw_text_String_CopyTerminated(v10, *((_QWORD*)v7 + 2),
                                      *((_QWORD*)v7 + 1));
      }
      else {
        v11 = *(_QWORD*)v7;
        v12 = *((_QWORD*)v7 + 2);
        v10[1] = *((_QWORD*)v7 + 1);
        v10[2] = v12;
        *v10 = v11;
      }
      v7 += 24;
      v10 += 3;
    } while (v7 != v8);
    *(_QWORD*)(a1 + 40) = v10;
  }
  *(_BYTE*)(a1 + 56) = *(_BYTE*)(a2 + 56);
  return a1;
}

__int64 game_hub_CharacterSituation_GetCorpsTroop_lambda0_Invoke(__int64 result,
                                                                 _QWORD* a2)
{
  __int64 v2;

  if (*a2 == **(_QWORD**)(result + 8)) {
    v2 = *(_QWORD*)(result + 16);
    *(_DWORD*)v2 = **(_DWORD**)(result + 24);
    *(_BYTE*)(v2 + 4) = 1;
  }
  return result;
}

#pragma GCC visibility pop
