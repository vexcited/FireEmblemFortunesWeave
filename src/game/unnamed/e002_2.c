#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1ab7e33;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1ae1fcc;
extern _UNKNOWN GameData_1ae9731;
extern _UNKNOWN GameData_1aed8b3;
extern __int64 (*GameData_1f8f7e8[])();
extern __int64 (*GameData_1f9c6d8[])();
extern __int64 (*GameData_1fa8af0[])();
extern __int64 (*GameData_1fa8b70[])();
extern __int64 (*GameData_1fa8bf0[])();
extern __int64 (*GameData_1fa8c70[])();
extern __int64 (*GameData_1fb0810[])();
extern __int64 (*GameData_1fb0890[])();
extern __int64 (*GameData_1fb0a10[])();
extern __int64 GameData_1fb5cb0;
extern __int64 (*GameData_1fbb360[])();
extern __int64 (*GameData_1fbb7b8[])();
extern __int64 (*GameData_1fbc178[])();
extern __int64 (*GameData_1fbc5d0[])();
extern __int64 (*GameData_1fbceb0[])();
extern __int64 (*GameData_1fbcf60[])();
extern __int64 (*GameData_2119728[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212c028;
extern __int64* GameData_212c650[5];
extern __int64* GameData_212c770[3];
extern __int64 GameData_212c7b8[10];
extern __int64* GameData_212c868;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d7d8[8];
extern __int64* GameData_212e008[9];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ca088;
extern __int64 GameData_21ca310;
extern __int64 GameData_21caab0;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d9ba8;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f1618;
extern __int64 GameData_21f17e0;
extern __int64 GameData_21f4000;
extern __int64 GameData_21f42d0;
extern __int64 GameData_21fa488;
extern int GameData_2241730;
extern __int64 GameData_2265ee0;
__n128 GameRoutine_10c830(_QWORD, double);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_12b3d60(_QWORD);
__int64 GameRoutine_130b980(_QWORD, _QWORD);
__int64 GameRoutine_132ffa0(_QWORD);
__int64 GameRoutine_133ed80(_QWORD, _QWORD);
__int64 GameRoutine_134ae50(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1366ac0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1418c20(void);
__int64 GameRoutine_155dda0(_QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_16dd440(_QWORD);
__int64 GameRoutine_1872af0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ca0(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d00(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_60a270(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_60eb40(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_65a940(_QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_66df80(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
__int64 GameRoutine_6c4610(_QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_6ea9d0(_QWORD);
__int64 GameRoutine_6ead60(_QWORD, _QWORD);
__int64 GameRoutine_6f2440(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_705570(_QWORD);
__int64 GameRoutine_7a8520(_QWORD);
__int64 GameRoutine_7a86e0(_QWORD, _QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_7eb740(_QWORD);
__int64 GameRoutine_7ebae0(__int64 result, __int64);
__int64 GameRoutine_7ec520(_QWORD);
__int64 GameRoutine_7f2ec0(_QWORD);
void __attribute__((noreturn)) GameRoutine_7fb7a0(void);
__int64 GameRoutine_7fc5c0(_QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_7fe910(_QWORD* result, unsigned __int64, __int64, __int64,
                           __int64, __int64);
__int64 GameRoutine_818500(float*, unsigned int*, __int64, _DWORD**);
__int64 GameRoutine_828dc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82f300(_QWORD, _QWORD);
__int64 GameRoutine_85a3c0(_QWORD, _QWORD);
__int64 GameRoutine_876620(_QWORD);
__int64 GameRoutine_89bb10(_QWORD, _QWORD);
__int64 GameRoutine_89c760(__int64, __int64);
__int64 GameRoutine_8ab360(_QWORD);
__int64 GameRoutine_8ad520(_QWORD, _QWORD);
__int64 GameRoutine_8e17a0(_QWORD);
__int64 GameRoutine_8eab40(void);
__int64 GameRoutine_8eeb00(_QWORD);
__int64 GameRoutine_8ef040(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8f3920(_QWORD);
__int64 GameRoutine_8f4200(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8f57c0(_QWORD);
struct PseudoSret GameRoutine_8f5900(_QWORD);
__int64 GameRoutine_90dea0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_90e4a0(void);
void __attribute__((noreturn)) GameRoutine_919f30(void);
__int64 GameRoutine_938160(_QWORD, _QWORD);
__int64 GameRoutine_93a150(unsigned __int8*, unsigned __int8*, unsigned __int8*,
                           unsigned __int8*);
__int64 GameRoutine_93cc20(_QWORD, _QWORD);
__int64 GameRoutine_93d4a0(_QWORD, _QWORD);
__int64 GameRoutine_96a680(__int64, __int64, __int64*);
__int64 GameRoutine_96bae0(void);
__int64 GameRoutine_97b9e0(_QWORD, _QWORD);
__int64 GameRoutine_9c12a0(_QWORD);
void __attribute__((noreturn)) GameRoutine_9c2e00(void);
__attribute__((swiftcall)) void GameRoutine_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD,
                                                  _QWORD, double, float);
__int64 GameRoutine_ffc40(_QWORD, _QWORD);
__int64 GameRoutine_7fc5c0_alt1(__int64 result, __int64,
                                char) __asm__("GameRoutine_7fc5c0");
__int64 GameVariable_828dc0(__int64, unsigned __int64*, int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_8ab360(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_Unknown6c4610(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
bool RidePool_93cc20(_QWORD*, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void GameRoutine_7fe910_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_7fe910");
void GameRoutine_8ad520_alt1(__int64*, __int64) __asm__("GameRoutine_8ad520");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_705570_alt1() __asm__("GameRoutine_705570");
void __attribute__((noreturn))
GameRoutine_7fb7a0_alt1() __asm__("GameRoutine_7fb7a0");
void __attribute__((noreturn))
GameRoutine_90e4a0_alt1() __asm__("GameRoutine_90e4a0");
void nn_mem_StandardAllocator_Free(__int64, __int64);
bool GameHr_8ab6e0(int a1, char a2);
void GameHr_90cd80(__int64 a1);
_QWORD* ConditionMap_7f2ec0(__int64*, __int64);
__int64 BanquetManager_96a680(__int64, __int64, __int64*);
__int64 GameHr_12b3d60(__int64 result);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_85a3c0_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_85a3c0");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_anonymous_ConditionMap_Add_7ebae0(__int64 result);
__int64 std___1___hash_memory(__int64, unsigned __int64);
bool BanquetManager_96bae0(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void AssetTableFile_7eb740(char);
void ConditionMap_7ec520(unsigned __int16*);
void GameRoutine_7d6200_alt1(__int64*, _DWORD*) __asm__("GameRoutine_7d6200");
__int64 GameHr_7ec640(__int64 a1, _BYTE* a2, char a3);
void GameHr_96bec0(__int64 a1, __int64 a2);
extern __int64 GameData_212c998_alt1[148] __asm__("GameData_212c998");
unsigned __int8* LegionPool_93a150(unsigned __int8*, unsigned __int8*,
                                   unsigned __int8*, unsigned __int8*);
unsigned __int8* GameHr_93a310(unsigned __int8* a1, unsigned __int8* a2,
                               unsigned __int8* a3, unsigned __int8* a4,
                               unsigned __int8* a5);

__int64 GameHr_7ec640(__int64 a1, _BYTE* a2, char a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  if (*a2 == 0) {
    return a1;
  }
  v6 = GameData_212c998[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                  8LL * (unsigned __int8)*a2);
  v8 = *(_QWORD*)v7;
  if (*(_QWORD*)v7 != 0) {
    v9 = *(_QWORD*)(GameData_21d9d00 + 8 * (*(_QWORD*)v7 & 0xFFFLL));
    if (v9 != 0) {
      v10 = *(_QWORD**)(GameData_21d9d00 + 8 * (*(_QWORD*)v7 & 0xFFFLL));
      while (*v10 != v8) {
        v10 = (_QWORD*)v10[1];
        if (v10 == nullptr) {
          v11 = *(_QWORD**)(GameData_21d9d00 + 8 * (*(_QWORD*)v7 & 0xFFFLL));
          while (*v11 != v8) {
            v11 = (_QWORD*)v11[1];
            if (v11 == nullptr) {
              do {
                v12 = v9;
                v9 = *(_QWORD*)(v9 + 8);
              } while (v9 != 0);
              *(_QWORD*)(v12 + 8) = ConditionMap_7f2ec0(&GameData_21d9ce8, v8);
              goto LABEL_13;
            }
          }
          break;
        }
      }
    }
    else {
      LODWORD(v21_.v21[0]) = v8 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * (v8 & 0xFFF)) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, v8);
      GameRoutine_7d6200_alt1(&GameData_21d9d18, v21_.v21);
    LABEL_13:
      v7 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (unsigned __int8)*a2);
    }
  }
  ConditionMap_7ec520((unsigned __int16*)(v7 + 160));
  v13 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (unsigned __int8)*a2) +
                 184LL);
  if (v13 != 0) {
    v21_.v21[0] = GameData_1f9c6d8;
    v21_.v21[1] = &GameData_21d9ce8;
    v21_.v22 = v21_.v21;
    GameRoutine_85a3c0_alt1(v13, (__int64)v21_.v21);
    if (v21_.v22 == v21_.v21) {
      v14 = 32;
    }
    else {
      if (v21_.v22 == nullptr) {
        goto LABEL_20;
      }
      v14 = 40;
    }
    (*(void (**)(__int64))(*v21_.v22 + v14))((__int64)v21_.v22);
  }
LABEL_20:
  AssetTableFile_7eb740(a3);
  game_anonymous_ConditionMap_Add_7ebae0(*GameData_212c770[0]);
  if (GameData_21d9ba8 != 0) {
    v16 = *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9ba8 & 0xFFF));
    if (v16 != 0) {
      v17 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9ba8 & 0xFFF));
      while (*v17 != GameData_21d9ba8) {
        v17 = (_QWORD*)v17[1];
        if (v17 == nullptr) {
          v18 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9ba8 & 0xFFF));
          while (*v18 != GameData_21d9ba8) {
            v18 = (_QWORD*)v18[1];
            if (v18 == nullptr) {
              do {
                v19 = v16;
                v16 = *(_QWORD*)(v16 + 8);
              } while (v16 != 0);
              *(_QWORD*)(v19 + 8) =
                  ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9ba8);
              return a1;
            }
          }
          return a1;
        }
      }
    }
    else {
      LODWORD(v21_.v21[0]) = GameData_21d9ba8 & 0xFFF;
      v15 = GameData_21d9ba8 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 + 8 * v15) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9ba8);
      GameRoutine_7d6200_alt1(&GameData_21d9d18, v21_.v21);
    }
  }
  return a1;
}

bool GameHr_8ab6e0(int a1, char a2)
{

#pragma clang fp contract(off)
  int v2;
  char v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 (**v19)();
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  float v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  float v52;
  _BOOL8 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 primeEm;
  __int64* v57;
  __int64* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned int v82;
  unsigned int v83;
  unsigned __int64 v84;
  __int64* v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned int v113;
  __int64 v114;
  bool v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64** v119;
  __int64* v120;
  unsigned __int64 v121;
  __int64 v122;
  int v123;
  int v124;
  int v125;
  int* v126;
  unsigned __int64 v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  unsigned int v133;
  int v134;
  __int64* v135;
  __int64* v136;
  __int64 (***v137)();
  __int64 v138;
  unsigned int v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  __int64* v143;
  __int64 (***v144)();
  __int64 v145;
  unsigned int v146;
  __int64 v147;
  __int64 v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  __int64 v155;
  unsigned int v156;
  unsigned int v157;
  __int64 v158;
  __int64* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64* v165;
  __int64 v166;
  __int64* v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  unsigned int v179;
  unsigned int v180;
  int v183;
  __int64 v184;
  unsigned __int64 v185;
  struct {
    __int64* v186;
    unsigned __int64 v187;
    float v188;
  } v186_;
  struct {
    __int64 v189;
    unsigned __int64 v190;
    __int64 v191;
    __int64 v192;
    int v193;
  } v189_;
  struct {
    __int64 (**v194)();
    __int64* v195;
    __int128 v196;
  } v194_;
  _QWORD v197[6];
  struct {
    __int64 v198;
    __int64 v199;
    __int64 v200;
  } v198_;
  struct {
    __int64 v201;
    __int64 v202;
    __int64 v203;
  } v201_;
  struct {
    __int64 v204;
    __int64 v205;
    __int64 v206;
  } v204_;
  int v207;
  _QWORD v208[2];

  v2 = *(_DWORD*)(game_GameRestartData_unknown_ + 368LL * a1 + 284);
  if (v2 == 0) {
    return v2 != 0;
  }
  v186_.v186 = nullptr;
  v186_.v187 = 0;
  v184 = 0;
  v185 = 0;
  v3 = a2;
  v4 = a1;
  v186_.v188 = 0x1.0000000000000p+0f;
  v189_.v189 = 0;
  v189_.v190 = 0;
  v189_.v191 = 0;
  v189_.v192 = 0;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v189_.v193 = 1065353216;
  v183 = v2;
  if ((a2 & 1) == 0) {
    goto LABEL_183;
  }
  LODWORD(v194_.v194) = 241;
  v6 = game_UnitPool_GetFirst((int*)&v194_.v194);
  if (v6 == 0) {
    goto LABEL_163;
  }
  v7 = *(_QWORD*)(v6 + 432);
  v8 = v6;
  if (v7 == 0) {
    v7 = *(_QWORD*)(v6 + 440);
    if (v7 != 0) {
      v9 = *(unsigned __int8*)(v7 + 16);
      if (v9 <= 8) {
        do {
          v179 = v9 + 1;
          if (((2 << v9) & 0xF0) != 0) {
            v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                            24LL * (unsigned __int8)(v9 + 1) + 556000);
            if (v7 != 0) {
              goto LABEL_10;
            }
          }
          v9 = v179;
        } while (v179 != 9);
      }
      v7 = 0;
    }
  }
LABEL_10:
  while (2) {
    v10 = v7;
    v204_.v205 = 0;
    v204_.v206 = 0;
    v201_.v203 = 0;
    v204_.v204 = 0;
    v11 = *(__int64**)(v8 + 392);
    v201_.v201 = 0;
    v201_.v202 = 0;
    v198_.v199 = 0;
    v198_.v200 = 0;
    v198_.v198 = 0;
    __builtin_memset(v197, 0, sizeof(v197));
    v194_.v196 = (__typeof__(v194_.v196)){0};
    v12 = *GameData_212c868;
    v194_.v194 = nullptr;
    v194_.v195 = nullptr;
    if (v12 != 0) {
      v13 = *(_QWORD*)(v12 + 72) - *(_QWORD*)(v12 + 64);
      if ((unsigned int)((unsigned __int64)v13 >> 3) != 0) {
        GameRoutine_7fe910_alt1(&v198_.v198, (int)(v13 >> 3));
        if (v198_.v198 != v198_.v199) {
          memset(v198_.v198, 0, v198_.v199 - v198_.v198);
        }
      }
    }
    v14 = *(_DWORD*)(v8 + 504);
    v15 = *(_DWORD*)(v8 + 448);
    v204_.v205 = 0;
    v204_.v206 = 0;
    v201_.v203 = 0;
    v204_.v204 = 0;
    v201_.v201 = 0;
    v201_.v202 = 0;
    v194_.v194 = (__int64 (**)(void))__PAIR64__(v15, v14);
    v16 = *(_DWORD*)(v8 + 472);
    LODWORD(v194_.v195) = *(_DWORD*)(v8 + 468);
    HIDWORD(v194_.v195) = v16;
    LODWORD(v194_.v196) = *(_DWORD*)(v8 + 476);
    WORD2(v194_.v196) = *(_WORD*)(v8 + 480);
    *(_QWORD*)((char*)&v194_.v196 + 6) = *(_QWORD*)(v8 + 482);
    GameRoutine_7fc5c0_alt1((__int64)v197, v8 + 512, 0);
    GameRoutine_8ad520_alt1(&v201_.v201, v8 + 1168);
    GameRoutine_8ad520_alt1(&v204_.v204, v8 + 1264);
    v17 = fw_memory_HeapManager_Allocate(*v5, 176, 16, 0);
    v18 = *(_QWORD*)((char*)&v194_.v196 + 6);
    *(_QWORD*)v17 = 0;
    *(_QWORD*)(v17 + 8) = 0;
    v19 = v194_.v194;
    v20 = (__int64*)v17;
    v21 = *v11;
    *(_QWORD*)(v17 + 104) = 0;
    v22 = (__int64*)(v17 + 104);
    *(_QWORD*)(v17 + 112) = 0;
    *(_QWORD*)(v17 + 120) = 0;
    *(_QWORD*)(v17 + 46) = v18;
    v23 = v194_.v195;
    v24 = v194_.v196;
    *(_QWORD*)(v17 + 16) = v21;
    *(_QWORD*)(v17 + 24) = v19;
    *(_QWORD*)(v17 + 32) = v23;
    *(_QWORD*)(v17 + 40) = v24;
    *(_QWORD*)(v17 + 58) = *(_QWORD*)((char*)v197 + 2);
    *(_QWORD*)(v17 + 89) = *(_QWORD*)((char*)&v197[4] + 1);
    *(_OWORD*)(v17 + 74) = *(_OWORD*)((char*)&v197[2] + 2);
    *(_QWORD*)(v17 + 66) = *(_QWORD*)((char*)&v197[1] + 2);
    v25 = v198_.v198;
    v26 = v198_.v199 - v198_.v198;
    if (v198_.v199 != v198_.v198) {
      if ((v26 & 0x8000000000000000LL) != 0) {
        GameRoutine_7fb7a0_alt1();
      }
      v27 = fw_memory_HeapManager_Allocate(*v5, v198_.v199 - v198_.v198, 16, 0);
      v28 = v27 + v26;
      v20[13] = v27;
      v20[15] = v27 + v26;
      memcpy(v27, v25, v26);
      v20[14] = v28;
    }
    v30 = v201_.v201;
    v29 = v201_.v202;
    v20[16] = 0;
    v31 = v20 + 16;
    v32 = v29 - v30;
    v20[17] = 0;
    v20[18] = 0;
    if (v29 != v30) {
      if ((v32 & 0x8000000000000000LL) != 0) {
        goto LABEL_358;
      }
      v33 = fw_memory_HeapManager_Allocate(*v5, v29 - v30, 16, 0);
      v34 = v33 + v32;
      v20[16] = v33;
      v20[17] = v33;
      v20[18] = v33 + v32;
      memcpy(v33, v30, v32);
      v20[17] = v34;
    }
    v36 = v204_.v204;
    v35 = v204_.v205;
    v20[20] = 0;
    v20[21] = 0;
    v37 = v35 - v36;
    v20[19] = 0;
    if (v35 == v36) {
      v40 = 0;
      goto LABEL_24;
    }
    if ((v37 & 0x8000000000000000LL) != 0) {
    LABEL_358:
      GameRoutine_705570_alt1();
    }
    v38 = fw_memory_HeapManager_Allocate(*v5, v35 - v36, 16, 0);
    v39 = v38 + v37;
    v40 = v38;
    v20[19] = v38;
    v20[20] = v38;
    v20[21] = v38 + v37;
    memcpy(v38, v36, v37);
    v20[20] = v39;
  LABEL_24:
    v41 = v20[2];
    v42 = v185;
    v20[1] = v41;
    if (v185 == 0) {
      goto LABEL_44;
    }
    v43 = v185 - 1;
    if ((v185 & (v185 - 1)) != 0) {
      v44 = v41;
      if (v41 >= v185) {
        v44 = v41 % v185;
      }
    }
    else {
      v44 = v43 & v41;
    }
    v45 = *(_QWORD**)(v184 + 8 * v44);
    if (v45 == nullptr || (v46 = (_QWORD*)*v45) == nullptr) {
    LABEL_44:
      v49 = (float)(v186_.v187 + 1);
      if (v185 != 0 && (float)(v186_.v188 * (float)v185) >= v49) {
        goto LABEL_46;
      }
      v52 = v49 / v186_.v188;
      v53 = (v185 & (v185 - 1)) != 0;
      if (v185 < 3) {
        v53 = true;
      }
      v54 = v53 | (2 * v185);
      v55 = vcvtps_u64_f32(v52);
      if (v54 <= v55) {
        primeEm = v55;
      }
      else {
        primeEm = v54;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        v42 = v185;
        primeEm = std___1___next_prime(primeEm);
      }
      if (primeEm <= v42) {
        if (primeEm >= v42) {
          goto LABEL_46;
        }
        v64 = vcvtps_u64_f32((float)v186_.v187 / v186_.v188);
        if (v42 < 3 || (v42 & (v42 - 1)) != 0) {
          v64 = std___1___next_prime(v64);
        }
        else {
          v65 = 1LL << -(char)__clz(v64 - 1);
          if (v64 >= 2) {
            v64 = v65;
          }
        }
        if (primeEm <= v64) {
          primeEm = v64;
        }
        if (primeEm >= v42) {
          goto LABEL_46;
        }
        if (primeEm == 0) {
          v96 = v184;
          v184 = 0;
          if (v96 != 0) {
            if (*(_QWORD*)(*v5 + 200) != 0) {
              v97 = 128;
            }
            else {
              v97 = 56;
            }
            nn_mem_StandardAllocator_Free(*v5 + v97, v96);
          }
          v185 = 0;
          goto LABEL_46;
        }
      }
      if (primeEm >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v60 = fw_memory_HeapManager_Allocate(*v5, 8 * primeEm, 16, 0);
      v61 = v184;
      v184 = v60;
      if (v61 != 0) {
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v62 = 128;
        }
        else {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free(*v5 + v62, v61);
      }
      v185 = primeEm;
      if (primeEm >= 8) {
        v63 = 0;
        do {
          *(_QWORD*)(v184 + 8 * v63) = 0;
          *(_QWORD*)(v184 + 8 * v63 + 8) = 0;
          *(_QWORD*)(v184 + 8 * v63 + 16) = 0;
          *(_QWORD*)(v184 + 8 * v63 + 24) = 0;
          *(_QWORD*)(v184 + 8 * v63 + 32) = 0;
          *(_QWORD*)(v184 + 8 * v63 + 40) = 0;
          *(_QWORD*)(v184 + 8 * v63 + 48) = 0;
          v66 = v184 + 8 * v63;
          v63 += 8;
          *(_QWORD*)(v66 + 56) = 0;
        } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v63);
      }
      else {
        v63 = 0;
      }
      v67 = primeEm & 7;
      if ((primeEm & 7) != 0) {
        v68 = 8 * v63;
        do {
          --v67;
          *(_QWORD*)(v184 + v68) = 0;
          v68 += 8;
        } while (v67 != 0);
      }
      v69 = v186_.v186;
      if (v186_.v186 == nullptr) {
        goto LABEL_46;
      }
      v70 = v186_.v186[1];
      v71 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) == 0) {
        v84 = v70 & v71;
        *(_QWORD*)(v184 + 8 * v84) = &v186_.v186;
        while (1) {
          v85 = (__int64*)*v69;
          if (*v69 == 0) {
            break;
          }
          v86 = v85[1] & v71;
          if (v86 == v84) {
            v69 = (__int64*)*v69;
          }
          else if (*(_QWORD*)(v184 + 8 * v86) != 0) {
            *v69 = *v85;
            *v85 = **(_QWORD**)(v184 + 8 * v86);
            **(_QWORD**)(v184 + 8 * v86) = v85;
          }
          else {
            *(_QWORD*)(v184 + 8 * v86) = v69;
            v69 = v85;
            v84 = v86;
          }
        }
        goto LABEL_46;
      }
      if (v70 >= primeEm) {
        v70 %= primeEm;
      }
      *(_QWORD*)(v184 + 8 * v70) = &v186_.v186;
      v72 = (__int64*)*v69;
      if (*v69 == 0) {
      LABEL_46:
        v50 = v20[1];
        v51 = v185 - 1;
        if ((v185 & (v185 - 1)) != 0) {
          if (v50 >= v185) {
            v50 %= v185;
          }
        }
        else {
          v50 &= v51;
        }
        v57 = *(__int64**)(v184 + 8 * v50);
        if (v57 != nullptr) {
          *v20 = *v57;
          *v57 = (__int64)v20;
        }
        else {
          v58 = v186_.v186;
          v186_.v186 = v20;
          *v20 = (__int64)v58;
          *(_QWORD*)(v184 + 8 * v50) = &v186_.v186;
          if (*v20 != 0) {
            v59 = *(_QWORD*)(*v20 + 8);
            if ((v185 & v51) != 0) {
              if (v59 >= v185) {
                v59 %= v185;
              }
            }
            else {
              v59 &= v51;
            }
            *(_QWORD*)(v184 + 8 * v59) = v20;
          }
        }
        ++v186_.v187;
        v74 = v204_.v204;
        if (v204_.v204 == 0) {
          goto LABEL_106;
        }
        goto LABEL_102;
      }
      while (1) {
        v73 = v72[1];
        if (v73 >= primeEm) {
          v73 %= primeEm;
        }
        if (v73 != v70) {
          if (*(_QWORD*)(v184 + 8 * v73) == 0) {
            *(_QWORD*)(v184 + 8 * v73) = v69;
            goto LABEL_93;
          }
          *v69 = *v72;
          *v72 = **(_QWORD**)(v184 + 8 * v73);
          **(_QWORD**)(v184 + 8 * v73) = v72;
          v72 = v69;
        }
        v73 = v70;
      LABEL_93:
        v69 = v72;
        v72 = (__int64*)*v72;
        v70 = v73;
        if (v72 == nullptr) {
          goto LABEL_46;
        }
      }
    }
    if ((v185 & v43) == 0) {
      while (1) {
        v48 = v46[1];
        if (v48 == v41) {
          if (v46[2] == v41) {
            goto LABEL_132;
          }
        }
        else if ((v48 & v43) != v44) {
          goto LABEL_44;
        }
        v46 = (_QWORD*)*v46;
        if (v46 == nullptr) {
          goto LABEL_44;
        }
      }
    }
    while (1) {
      v47 = v46[1];
      if (v47 == v41) {
        break;
      }
      if (v47 >= v185) {
        v47 %= v185;
      }
      if (v47 != v44) {
        goto LABEL_44;
      }
    LABEL_34:
      v46 = (_QWORD*)*v46;
      if (v46 == nullptr) {
        goto LABEL_44;
      }
    }
    if (v46[2] != v41) {
      goto LABEL_34;
    }
  LABEL_132:
    if (v40 != 0) {
      v87 = *v5;
      v20[20] = v40;
      if (*(_QWORD*)(v87 + 200) != 0) {
        v88 = 128;
      }
      else {
        v88 = 56;
      }
      nn_mem_StandardAllocator_Free(v87 + v88, v40);
    }
    v89 = *v31;
    if (*v31 != 0) {
      v90 = *v5;
      v20[17] = v89;
      if (*(_QWORD*)(v90 + 200) != 0) {
        v91 = 128;
      }
      else {
        v91 = 56;
      }
      nn_mem_StandardAllocator_Free(v90 + v91, v89);
    }
    v92 = *v22;
    if (*v22 != 0) {
      v93 = *v5;
      v20[14] = v92;
      if (*(_QWORD*)(v93 + 200) != 0) {
        v94 = 128;
      }
      else {
        v94 = 56;
      }
      nn_mem_StandardAllocator_Free(v93 + v94, v92);
    }
    if (*(_QWORD*)(*v5 + 200) != 0) {
      v95 = 128;
    }
    else {
      v95 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v95, (__int64)v20);
    v74 = v204_.v204;
    if (v204_.v204 != 0) {
    LABEL_102:
      v75 = *v5;
      v204_.v205 = v74;
      if (*(_QWORD*)(v75 + 200) != 0) {
        v76 = 128;
      }
      else {
        v76 = 56;
      }
      nn_mem_StandardAllocator_Free(v75 + v76, v74);
    }
  LABEL_106:
    if (v201_.v201 != 0) {
      v77 = *v5;
      v201_.v202 = v201_.v201;
      if (*(_QWORD*)(v77 + 200) != 0) {
        v78 = 128;
      }
      else {
        v78 = 56;
      }
      nn_mem_StandardAllocator_Free(v77 + v78, v201_.v201);
    }
    if (v198_.v198 != 0) {
      v79 = *v5;
      v198_.v199 = v198_.v198;
      if (*(_QWORD*)(v79 + 200) != 0) {
        v80 = 128;
      }
      else {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free(v79 + v80, v198_.v198);
    }
    if (v10 != 0) {
      v7 = *(_QWORD*)(v10 + 432);
      v8 = v10;
      if (v7 == 0) {
        v81 = *(_QWORD*)(v10 + 440);
        v8 = v10;
        if (v81 != 0) {
          v82 = *(unsigned __int8*)(v81 + 16);
          v7 = 0;
          v8 = v10;
          if (v82 <= 8) {
            while (1) {
              v83 = v82 + 1;
              if (((2 << v82) & 0xF0) != 0) {
                v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v82 + 1) + 556000);
                if (v7 != 0) {
                  break;
                }
              }
              ++v82;
              if (v83 == 9) {
                v7 = 0;
                v8 = v10;
                goto LABEL_10;
              }
            }
            v8 = v10;
          }
        }
      }
      continue;
    }
    break;
  }
LABEL_163:
  if (v189_.v192 != 0) {
    v98 = v189_.v191;
    if (v189_.v191 != 0) {
      do {
        v99 = *(_QWORD*)v98;
        GameRoutine_6e3b50_alt1(v98 + 32, *(_QWORD**)(v98 + 40));
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v100 = 128;
        }
        else {
          v100 = 56;
        }
        nn_mem_StandardAllocator_Free(*v5 + v100, v98);
        v98 = v99;
      } while (v99 != 0);
    }
    v189_.v191 = 0;
    if (v189_.v190 != 0) {
      v101 = v189_.v190 & 7;
      if (v189_.v190 >= 8) {
        v103 = v189_.v190 & 0xFFFFFFFFFFFFFFF8LL;
        v102 = 0;
        do {
          *(_QWORD*)(v189_.v189 + 8 * v102) = 0;
          *(_QWORD*)(v189_.v189 + 8 * v102 + 8) = 0;
          *(_QWORD*)(v189_.v189 + 8 * v102 + 16) = 0;
          *(_QWORD*)(v189_.v189 + 8 * v102 + 24) = 0;
          *(_QWORD*)(v189_.v189 + 8 * v102 + 32) = 0;
          *(_QWORD*)(v189_.v189 + 8 * v102 + 40) = 0;
          *(_QWORD*)(v189_.v189 + 8 * v102 + 48) = 0;
          v104 = v189_.v189 + 8 * v102;
          v102 += 8;
          *(_QWORD*)(v104 + 56) = 0;
        } while (v103 != v102);
      }
      else {
        v102 = 0;
      }
      if (v101 != 0) {
        v105 = 8 * v102;
        do {
          --v101;
          *(_QWORD*)(v189_.v189 + v105) = 0;
          v105 += 8;
        } while (v101 != 0);
      }
    }
    v189_.v192 = 0;
  }
  v194_.v194 = GameData_1fa8af0;
  v194_.v195 = &v189_.v189;
  v197[0] = &v194_.v194;
  RidePool_93cc20(*(_QWORD**)(GameData_21f42d0 + 8), (__int64)&v194_.v194);
  if ((__int64 (***)(void))v197[0] == &v194_.v194) {
    v2 = v183;
    v4 = a1;
    v3 = a2;
    v106 = 32;
  LABEL_182:
    (*(void (**)(__int64))(*(_QWORD*)v197[0] + v106))((__int64)v197[0]);
  }
  else {
    v2 = v183;
    v4 = a1;
    v3 = a2;
    if (v197[0] != 0) {
      v106 = 40;
      goto LABEL_182;
    }
  }
LABEL_183:
  game_8ab360((unsigned int)v4);
  if (v4 <= 8) {
    v107 = v4 + 1LL;
    v108 = 368LL * v4;
    do {
      v109 = game_GameRestartData_unknown_ + v108;
      v108 += 368;
      *(_WORD*)(v109 + 24) = 0;
      *(_QWORD*)(v109 + 28) = 0x10000000000LL;
      *(_BYTE*)(v109 + 36) = 0;
      *(_QWORD*)(v109 + 38) = 0;
      *(_QWORD*)(v109 + 46) = 0;
      *(_QWORD*)(v109 + 54) = 0;
      *(_DWORD*)(v109 + 61) = 0;
      *(_QWORD*)(v109 + 66) = 0;
      *(_DWORD*)(v109 + 74) = 0;
      *(_DWORD*)(v109 + 96) = 0;
      *(_BYTE*)(v109 + 100) = 0;
      *(_DWORD*)(v109 + 102) = 0;
      *(_DWORD*)(v109 + 108) = 0;
      *(_WORD*)(v109 + 112) = 0;
      *(_QWORD*)(v109 + 120) = 0;
      *(_BYTE*)(v109 + 128) = 0;
      *(_QWORD*)(v109 + 80) = 0;
      *(_QWORD*)(v109 + 87) = 0;
      *(_DWORD*)(v109 + 156) = 0;
      *(_DWORD*)(v109 + 284) = 0;
      v115 = (_DWORD)v107++ == 9;
    } while (!v115);
  }
  if ((v3 & 1) == 0) {
    goto LABEL_305;
  }
  LODWORD(v194_.v194) = 17;
  v110 = game_UnitPool_GetFirst((int*)&v194_.v194);
  if (v110 == 0) {
    goto LABEL_298;
  }
  v111 = *(_QWORD*)(v110 + 432);
  v112 = v110;
  if (v111 == 0) {
    v111 = *(_QWORD*)(v110 + 440);
    if (v111 != 0) {
      v113 = *(unsigned __int8*)(v111 + 16);
      if (v113 <= 8) {
        v180 = v113 - 3;
        while (1) {
          if (v180 == 0) {
            v111 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v111 != 0) {
              break;
            }
          }
          if (++v180 == 6) {
            goto LABEL_192;
          }
        }
      }
      else {
      LABEL_192:
        v111 = 0;
      }
    }
  }
LABEL_195:
  while (2) {
    v114 = v111;
    v115 = v185 == 0 || v186_.v187 == 0;
    if (v115) {
      goto LABEL_289;
    }
    v116 = v185 - 1;
    v117 = **(_QWORD**)(v112 + 392);
    if ((v185 & (v185 - 1)) != 0) {
      v118 = **(_QWORD**)(v112 + 392);
      if (v117 >= v185) {
        v118 = v117 % v185;
      }
    }
    else {
      v118 = v116 & v117;
    }
    v119 = *(__int64***)(v184 + 8 * v118);
    if (v119 == nullptr) {
      goto LABEL_289;
    }
    v120 = *v119;
    if (*v119 == nullptr) {
      goto LABEL_289;
    }
    if ((v185 & v116) == 0) {
      while (1) {
        v122 = v120[1];
        if (v117 == v122) {
          if (v120[2] == v117) {
            goto LABEL_219;
          }
        }
        else if ((v122 & v116) != v118) {
          goto LABEL_289;
        }
        v120 = (__int64*)*v120;
        if (v120 == nullptr) {
          goto LABEL_289;
        }
      }
    }
  LABEL_209:
    v121 = v120[1];
    if (v117 != v121) {
      if (v121 >= v185) {
        v121 %= v185;
      }
      if (v121 != v118) {
        goto LABEL_289;
      }
    }
    else if (v120[2] == v117) {
    LABEL_219:
      LOBYTE(v194_.v194) = 0;
      v123 = game_Unit_GetParam(v112);
      v124 = *((_DWORD*)v120 + 6);
      v125 = v123;
      v126 = (int*)GameData_21d9968;
      v127 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      if ((int)v127 >= 99) {
        v128 = 99;
      }
      else {
        v128 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      }
      v129 = *(_DWORD*)(GameData_21d9968 + 4LL * v128 - 4);
      if (v129 >= v124) {
        v129 = *((_DWORD*)v120 + 6);
      }
      if (v124 < 0) {
        v129 = 0;
      }
      if (*(_DWORD*)(v112 + 504) != v129) {
        *(_DWORD*)(v112 + 504) = v129;
        if ((int)v127 < 1) {
          LOBYTE(v130) = 0;
        }
        else {
          v130 = 0;
          v131 = v126[(unsigned int)(v127 - 1)];
          if (v131 >= v129) {
            v131 = v129;
          }
          if (v129 >= *v126) {
            v132 = v131;
          }
          else {
            v132 = *v126;
          }
          while (1) {
            v133 = (unsigned int)(v130 + v127) >> 1;
            v134 = v126[v133];
            if (v132 == v134) {
              break;
            }
            if (v132 < v134) {
              LODWORD(v127) = (unsigned int)(v130 + v127) >> 1;
            }
            else {
              v130 = v133 + 1;
            }
            if (v130 >= (int)v127) {
              goto LABEL_241;
            }
          }
          LOBYTE(v130) = v133 + 1;
        }
      LABEL_241:
        *(_BYTE*)(v112 + 498) = v130;
      }
      *(_DWORD*)(v112 + 448) = *((_DWORD*)v120 + 7);
      *(_WORD*)(v112 + 468) = *((_WORD*)v120 + 16);
      *(_WORD*)(v112 + 470) = *((_WORD*)v120 + 17);
      *(_WORD*)(v112 + 472) = *((_WORD*)v120 + 18);
      *(_WORD*)(v112 + 474) = *((_WORD*)v120 + 19);
      *(_WORD*)(v112 + 476) = *((_WORD*)v120 + 20);
      *(_WORD*)(v112 + 478) = *((_WORD*)v120 + 21);
      *(_WORD*)(v112 + 480) = *((_WORD*)v120 + 22);
      *(_WORD*)(v112 + 482) = *((_WORD*)v120 + 23);
      *(_WORD*)(v112 + 484) = *((_WORD*)v120 + 24);
      *(_WORD*)(v112 + 486) = *((_WORD*)v120 + 25);
      *(_WORD*)(v112 + 488) = *((_WORD*)v120 + 26);
      GameRoutine_7fc5c0_alt1(v112 + 512, (__int64)(v120 + 7), 1);
      game_Unit_Unknown6c4610(v112);
      v135 = (__int64*)v120[16];
      v136 = (__int64*)v120[17];
      v137 = &v194_.v194;
      v194_.v194 = GameData_1fa8b70;
      v197[0] = &v194_.v194;
      if (v135 == v136) {
        goto LABEL_257;
      }
      do {
        v138 = *v135;
        if (*v135 != 0) {
          v139 = *(_WORD*)(v138 + 16) & 0xFFF;
        }
        else {
          v139 = 0;
        }
        v140 = *(_QWORD*)(v112 + 1072);
        if ((v139 >> 5) + 1 <=
                (unsigned __int64)((*(_QWORD*)(v112 + 1080) - v140) >> 2) &&
            ((*(_DWORD*)(v140 + 4LL * (v139 >> 5)) >> v139) & 1) != 0) {
          if (v138 != 0) {
            LODWORD(v138) = *(_WORD*)(v138 + 16) & 0xFFF;
          }
          v207 = v138;
          v208[0] = v112;
          if (v197[0] == 0) {
          LABEL_360:
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(_QWORD, _QWORD*, int*))(*(_QWORD*)v197[0] + 48LL))(
              v197[0], v208, &v207);
        }
        ++v135;
      } while (v135 != v136);
      v137 = (__int64 (***)(void))v197[0];
      if ((__int64 (***)(void))v197[0] == &v194_.v194) {
      LABEL_257:
        v141 = 4;
      LABEL_258:
        ((__int64 (*)(__int64))(*v137)[v141])((__int64)v137);
      }
      else if (v197[0] != 0) {
        v141 = 5;
        goto LABEL_258;
      }
      v142 = (__int64*)v120[19];
      v143 = (__int64*)v120[20];
      v144 = &v194_.v194;
      v194_.v194 = GameData_1fa8bf0;
      v197[0] = &v194_.v194;
      if (v142 == v143) {
        goto LABEL_274;
      }
      do {
        v145 = *v142;
        if (*v142 != 0) {
          v146 = *(_WORD*)(v145 + 16) & 0xFFF;
        }
        else {
          v146 = 0;
        }
        v147 = *(_QWORD*)(v112 + 1072);
        if ((v146 >> 5) + 1 <=
                (unsigned __int64)((*(_QWORD*)(v112 + 1080) - v147) >> 2) &&
            ((*(_DWORD*)(v147 + 4LL * (v146 >> 5)) >> v146) & 1) != 0) {
          if (v145 != 0) {
            LODWORD(v145) = *(_WORD*)(v145 + 16) & 0xFFF;
          }
          v207 = v145;
          v208[0] = v112;
          if (v197[0] == 0) {
            goto LABEL_360;
          }
          (*(void (**)(_QWORD, _QWORD*, int*))(*(_QWORD*)v197[0] + 48LL))(
              v197[0], v208, &v207);
        }
        ++v142;
      } while (v142 != v143);
      v144 = (__int64 (***)(void))v197[0];
      if ((__int64 (***)(void))v197[0] == &v194_.v194) {
      LABEL_274:
        v148 = 4;
      LABEL_275:
        ((__int64 (*)(__int64))(*v144)[v148])((__int64)v144);
      }
      else if (v197[0] != 0) {
        v148 = 5;
        goto LABEL_275;
      }
      LOBYTE(v194_.v194) = 0;
      v149 = game_Unit_GetParam(v112);
      v150 = v149 - v125;
      if (v149 != v125) {
        v151 = *(__int16*)(v112 + 492);
        if (v149 <= v125) {
          v150 = 0;
        }
        LOBYTE(v194_.v194) = 0;
        v152 = v150 + v151;
        v153 = game_Unit_GetParam(v112);
        if (*(_WORD*)(v112 + 494) != 0 && v152 != *(__int16*)(v112 + 494)) {
          *(_WORD*)(v112 + 494) = 0;
        }
        if (v153 >= v152) {
          v154 = v152;
        }
        else {
          v154 = v153;
        }
        if (v152 < 0) {
          v154 = 0;
        }
        if (v154 != *(__int16*)(v112 + 492)) {
          *(_WORD*)(v112 + 492) = v154;
        }
      }
    LABEL_289:
      if (v114 != 0) {
        v111 = *(_QWORD*)(v114 + 432);
        v112 = v114;
        if (v111 == 0) {
          v155 = *(_QWORD*)(v114 + 440);
          v112 = v114;
          if (v155 != 0) {
            v156 = *(unsigned __int8*)(v155 + 16);
            v111 = 0;
            v112 = v114;
            if (v156 <= 8) {
              v157 = v156 - 3;
              while (1) {
                if (v157 == 0) {
                  v111 =
                      *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                  if (v111 != 0) {
                    break;
                  }
                }
                if (++v157 == 6) {
                  v111 = 0;
                  v112 = v114;
                  goto LABEL_195;
                }
              }
              v112 = v114;
            }
          }
        }
        continue;
      }
    LABEL_298:
      v197[0] = &v194_.v194;
      v194_.v194 = GameData_1fa8c70;
      v194_.v195 = &v189_.v189;
      RidePool_93cc20(*(_QWORD**)(GameData_21f42d0 + 8), (__int64)&v194_.v194);
      if ((__int64 (***)(void))v197[0] == &v194_.v194) {
        v2 = v183;
        v4 = a1;
        v158 = 32;
      LABEL_302:
        (*(void (**)(__int64))(*(_QWORD*)v197[0] + v158))((__int64)v197[0]);
      }
      else {
        v2 = v183;
        v4 = a1;
        if (v197[0] != 0) {
          v158 = 40;
          goto LABEL_302;
        }
      }
      if (game_GameModeData_instance_ != 0) {
        *(_DWORD*)(game_GameModeData_instance_ + 92) |= 0x400u;
      }
    LABEL_305:
      if (GameData_21eea58 != 0) {
        *(_BYTE*)(GameData_21eea58 + 32) = 1;
      }
      if (v4 == 6) {
        v159 = (__int64*)&GameData_1ae9731;
        goto LABEL_311;
      }
      if (v4 == 1) {
        v159 = (__int64*)&GameData_1ab7e33;
      LABEL_311:
        v194_.v195 = v159;
        v194_.v194 = (__int64 (**)(void))game_HashString((__int64)v159);
        if (game_GameModeData_instance_ != 0) {
          GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                              (unsigned __int64*)&v194_.v194, 1);
        }
      }
      v160 = v189_.v191;
      if (v189_.v191 != 0) {
        do {
          v161 = *(_QWORD*)v160;
          GameRoutine_6e3b50_alt1(v160 + 32, *(_QWORD**)(v160 + 40));
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v162 = 128;
          }
          else {
            v162 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v162, v160);
          v160 = v161;
        } while (v161 != 0);
      }
      v163 = v189_.v189;
      v189_.v189 = 0;
      if (v163 != 0) {
        v164 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v164 = 56;
        }
        nn_mem_StandardAllocator_Free(*v5 + v164, v163);
      }
      v165 = v186_.v186;
      if (v186_.v186 != nullptr) {
        do {
          v167 = (__int64*)*v165;
          v168 = v165[19];
          if (v168 != 0) {
            v169 = *v5;
            v165[20] = v168;
            if (*(_QWORD*)(v169 + 200) != 0) {
              v170 = 128;
            }
            else {
              v170 = 56;
            }
            nn_mem_StandardAllocator_Free(v169 + v170, v168);
          }
          v171 = v165[16];
          if (v171 != 0) {
            v172 = *v5;
            v165[17] = v171;
            if (*(_QWORD*)(v172 + 200) != 0) {
              v173 = 128;
            }
            else {
              v173 = 56;
            }
            nn_mem_StandardAllocator_Free(v172 + v173, v171);
          }
          v174 = v165[13];
          if (v174 != 0) {
            v175 = *v5;
            v165[14] = v174;
            if (*(_QWORD*)(v175 + 200) != 0) {
              v176 = 128;
            }
            else {
              v176 = 56;
            }
            nn_mem_StandardAllocator_Free(v175 + v176, v174);
          }
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v166 = 128;
          }
          else {
            v166 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v166, (__int64)v165);
          v165 = v167;
        } while (v167 != nullptr);
      }
      if (v184 != 0) {
        v177 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v177 = 56;
        }
        nn_mem_StandardAllocator_Free(*v5 + v177, v184);
      }
      return v2 != 0;
    }
    break;
  }
  v120 = (__int64*)*v120;
  if (v120 == nullptr) {
    goto LABEL_289;
  }
  goto LABEL_209;
}

__int64 GameHr_8eb7a0(__int64 a1, __int64 a2)
{
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  unsigned __int64 v65;
  int v66;
  int v67;
  int v68;
  int v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64** v72;
  __int64* v73;
  unsigned __int64 v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  float v79;
  __int64 v80;
  float v81;
  float v82;
  _BOOL8 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  __int64 primeEm;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  int v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  int v102;
  int v103;
  int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  int v108;
  int v109;
  int v110;
  unsigned __int64 v111;
  __int16 v112;
  __int16 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64* v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  float v122;
  float v123;
  float v124;
  _BOOL8 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64* v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64* v146;
  char* v147;
  char* v148;
  unsigned __int64 v149;
  __int64* v150;
  unsigned __int64 v151;
  unsigned __int64 v152;
  unsigned __int64 v154;
  __int64 v155;
  __int64** v156;
  __int64* v157;
  unsigned __int64 v158;
  __int64 v159;
  char* v160;
  __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  char* v165;
  __int64 v166;
  __int64 v167;
  char* v168;
  unsigned __int64 v169;
  unsigned __int64 v171;
  unsigned __int64 v172;
  __int64 v173;
  __int64** v174;
  __int64* v175;
  unsigned __int64 v176;
  __int64 v177;
  _DWORD* v178;
  __int64 v179;
  __int64 v180;
  _QWORD* v181;
  __int64 v182;
  _QWORD* v183;
  __int64 v184;
  unsigned __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  void* v194;
  int v195;
  __int64 v196;
  __int64 v197;
  int v198;
  __int64 v199;
  __int64 v200;
  __int64* v202;
  __int64* v203;
  unsigned int v204;
  int v205;
  _DWORD* v206[3];

  GameRoutine_8eab40();
  v4 = GameRoutine_7a8520("GameConverge");
  v5 = *(_QWORD*)a2;
  LODWORD(v206[0]) = v4;
  if (((*(__int64 (**)(__int64, _DWORD**))(v5 + 16))(a2, v206) & 1) != 0) {
    v6 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v6 + 1;
    v7 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v6);
    if (v7 >= 3) {
      v8 = GameRoutine_7a8520("RouteInfo");
      v9 = *(_QWORD*)a2;
      LODWORD(v206[0]) = v8;
      if (((*(__int64 (**)(__int64, _DWORD**))(v9 + 16))(a2, v206) & 1) != 0) {
        GameRoutine_8f4200(a1 + 472, a2, 1);
        GameRoutine_8f4200(a1 + 688, a2, 2);
        GameRoutine_8f4200(a1 + 904, a2, 3);
        GameRoutine_8f4200(a1 + 1120, a2, 4);
        GameRoutine_8f4200(a1 + 1336, a2, 5);
        GameRoutine_8f4200(a1 + 1552, a2, 6);
        GameRoutine_8f4200(a1 + 1768, a2, 7);
        GameRoutine_8f4200(a1 + 1984, a2, 8);
        GameRoutine_8f4200(a1 + 2200, a2, 9);
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
      if (v7 != 3) {
        v10 = GameRoutine_7a8520("CommonInfo");
        v11 = *(_QWORD*)a2;
        LODWORD(v206[0]) = v10;
        if (((*(__int64 (**)(__int64, _DWORD**))(v11 + 16))(a2, v206) & 1) ==
            0) {
        LABEL_283:
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
          if (v7 >= 5) {
            v195 = GameRoutine_7a8520("Depository");
            v196 = *(_QWORD*)a2;
            LODWORD(v206[0]) = v195;
            if (((*(__int64 (**)(__int64, _DWORD**))(v196 + 16))(a2, v206) &
                 1) != 0) {
              v197 = *(_QWORD*)a2;
              LODWORD(v206[0]) = 0;
              if (((*(__int64 (**)(__int64, _DWORD**))(v197 + 16))(a2, v206) &
                   1) != 0) {
                ++*(_DWORD*)(a2 + 20);
                GameRoutine_89c760(*(_QWORD*)(a1 + 2472), a2);
                GameRoutine_93d4a0(*(_QWORD*)(a1 + 2488), a2);
                GameRoutine_938160(*(_QWORD*)(a1 + 2504), a2);
              }
              (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
            }
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
            if (v7 != 5) {
              v198 = GameRoutine_7a8520("Temporary");
              v199 = *(_QWORD*)a2;
              LODWORD(v206[0]) = v198;
              if (((*(__int64 (**)(__int64, _DWORD**))(v199 + 16))(a2, v206) &
                   1) != 0) {
                v200 = *(_QWORD*)a2;
                LODWORD(v206[0]) = 0;
                if (((*(__int64 (**)(__int64, _DWORD**))(v200 + 16))(a2, v206) &
                     1) != 0) {
                  ++*(_DWORD*)(a2 + 20);
                  GameRoutine_89c760(*(_QWORD*)(a1 + 2520), a2);
                  GameRoutine_93d4a0(*(_QWORD*)(a1 + 2536), a2);
                  GameRoutine_938160(*(_QWORD*)(a1 + 2552), a2);
                }
                (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
              }
              (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
            }
          }
          return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
        }
        GameRoutine_8f3920(a1 + 8);
        v12 = *(_QWORD*)a2;
        LODWORD(v206[0]) = 0;
        v204 = v7;
        if (((*(__int64 (**)(__int64, _DWORD**))(v12 + 16))(a2, v206) & 1) !=
            0) {
          v13 = *(int*)(a2 + 20);
          v14 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v13 + 1;
          v15 = *(unsigned __int8*)(v14 + v13);
          if (*(_BYTE*)(v14 + v13) != 0) {
            *(_DWORD*)(a2 + 20) = v13 + 2;
            v16 = *(unsigned __int8*)(v14 + v13 + 1);
            *(_DWORD*)(a2 + 20) = v13 + 3;
            v17 = v16 | (*(unsigned __int8*)(v14 + v13 + 2) << 8);
            if ((_DWORD)v17 != 0) {
              if (v15 > 0xB) {
                do {
                  v18 = GameRoutine_8eeb00(a1 + 8);
                  v19 = *(int*)(a2 + 20);
                  v20 = *(_QWORD*)(a2 + 8);
                  v17 = (unsigned int)(v17 - 1);
                  *(_DWORD*)(a2 + 20) = v19 + 1;
                  v21 = *(unsigned __int8*)(v20 + v19);
                  *(_DWORD*)(a2 + 20) = v19 + 2;
                  v22 = v21 | (*(unsigned __int8*)(v20 + v19 + 1) << 8);
                  *(_DWORD*)(a2 + 20) = v19 + 3;
                  v23 = *(unsigned __int8*)(v20 + v19 + 2);
                  *(_DWORD*)(a2 + 20) = v19 + 4;
                  *(_DWORD*)v18 = v22 | (v23 << 16) |
                                  (*(unsigned __int8*)(v20 + v19 + 3) << 24);
                  v24 = *(int*)(a2 + 20);
                  *(_DWORD*)(a2 + 20) = v24 + 1;
                  *(_BYTE*)(v18 + 4) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24);
                  v25 = *(int*)(a2 + 20);
                  *(_DWORD*)(a2 + 20) = v25 + 1;
                  *(_BYTE*)(v18 + 5) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25);
                } while ((_DWORD)v17 != 0);
                v26 = *(int*)(a2 + 20);
                v27 = *(_QWORD*)(a2 + 8);
                *(_DWORD*)(a2 + 20) = v26 + 1;
                v28 = *(unsigned __int8*)(v27 + v26);
                *(_DWORD*)(a2 + 20) = v26 + 2;
                v29 = v28 | (*(unsigned __int8*)(v27 + v26 + 1) << 8);
                goto LABEL_21;
              }
              while (1) {
                v33 = GameRoutine_8eeb00(a1 + 8);
                if (v15 >= 6) {
                  break;
                }
                v30 = (_DWORD*)GameRoutine_876620(a2);
                if (v30 != nullptr) {
                  goto LABEL_14;
                }
              LABEL_15:
                v31 = *(int*)(a2 + 20);
                v17 = (unsigned int)(v17 - 1);
                *(_DWORD*)(a2 + 20) = v31 + 1;
                *(_BYTE*)(v33 + 4) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31);
                v32 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v32 + 1;
                *(_BYTE*)(v33 + 5) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32);
                if ((_DWORD)v17 == 0) {
                  goto LABEL_19;
                }
              }
              v30 = (_DWORD*)GameRoutine_8f57c0(a2);
              if (v30 == nullptr) {
                goto LABEL_15;
              }
            LABEL_14:
              *(_DWORD*)v33 = *v30;
              goto LABEL_15;
            }
          LABEL_19:
            if (v15 != 1) {
              v34 = *(int*)(a2 + 20);
              v35 = *(_QWORD*)(a2 + 8);
              *(_DWORD*)(a2 + 20) = v34 + 1;
              v36 = *(unsigned __int8*)(v35 + v34);
              *(_DWORD*)(a2 + 20) = v34 + 2;
              v29 = v36 | (*(unsigned __int8*)(v35 + v34 + 1) << 8);
              if (v15 <= 4) {
                if (v29 != 0) {
                  v59 = 0;
                  v202 = (__int64*)(a1 + 88);
                  do {
                    v60 = *(int*)(a2 + 20);
                    v61 = *(_QWORD*)(a2 + 8);
                    *(_DWORD*)(a2 + 20) = v60 + 1;
                    v62 = *(unsigned __int8*)(v61 + v60);
                    *(_DWORD*)(a2 + 20) = v60 + 2;
                    v63 = v62 | (*(unsigned __int8*)(v61 + v60 + 1) << 8);
                    *(_DWORD*)(a2 + 20) = v60 + 3;
                    v64 = v63 | (*(unsigned __int8*)(v61 + v60 + 2) << 16);
                    *(_DWORD*)(a2 + 20) = v60 + 4;
                    v65 = v64 | (*(unsigned __int8*)(v61 + v60 + 3) << 24);
                    *(_DWORD*)(a2 + 20) = v60 + 9;
                    v66 = *(unsigned __int8*)(v61 + v60 + 8);
                    *(_DWORD*)(a2 + 20) = v60 + 10;
                    v67 = *(unsigned __int8*)(v61 + v60 + 9);
                    *(_DWORD*)(a2 + 20) = v60 + 11;
                    v68 = *(unsigned __int8*)(v61 + v60 + 10);
                    *(_DWORD*)(a2 + 20) = v60 + 12;
                    v69 = *(unsigned __int8*)(v61 + v60 + 11);
                    v70 = *(_QWORD*)(a1 + 80);
                    if (v70 != 0) {
                      v71 = v70 - 1;
                      if ((v70 & (v70 - 1)) != 0) {
                        v17 = v65;
                        if (v70 <= v65) {
                          v17 = (unsigned int)v65 % (unsigned int)v70;
                        }
                      }
                      else {
                        v17 = ((_DWORD)v70 - 1) & (unsigned int)v65;
                      }
                      v72 = *(__int64***)(*(_QWORD*)(a1 + 72) + 8 * v17);
                      if (v72 != nullptr) {
                        v73 = *v72;
                        if (v73 != nullptr) {
                          if ((v70 & v71) == 0) {
                            while (1) {
                              v75 = v73[1];
                              if (v75 == v65) {
                                if (*((_DWORD*)v73 + 4) == (_DWORD)v65) {
                                  goto LABEL_98;
                                }
                              }
                              else if ((v75 & v71) != v17) {
                                goto LABEL_61;
                              }
                              v73 = (__int64*)*v73;
                              if (v73 == nullptr) {
                                goto LABEL_61;
                              }
                            }
                          }
                          do {
                            v74 = v73[1];
                            if (v74 == v65) {
                              if (*((_DWORD*)v73 + 4) == (_DWORD)v65) {
                                goto LABEL_98;
                              }
                            }
                            else {
                              if (v74 >= v70) {
                                v74 %= v70;
                              }
                              if (v74 != v17) {
                                break;
                              }
                            }
                            v73 = (__int64*)*v73;
                          } while (v73 != nullptr);
                        }
                      }
                    }
                  LABEL_61:
                    v76 = v66 | (v67 << 8) | (v68 << 16) | (v69 << 24);
                    v77 = GameRoutine_651b90(GameData_2265ee0, 24, 16, 0);
                    v78 = *(_QWORD*)(a1 + 96);
                    v79 = *(float*)(a1 + 104);
                    v80 = v77;
                    *(_QWORD*)v77 = 0;
                    *(_QWORD*)(v77 + 8) = v65;
                    *(_DWORD*)(v77 + 16) = v65;
                    *(_DWORD*)(v77 + 20) = v76;
                    v81 = (float)(unsigned __int64)(v78 + 1);
                    if (v70 == 0 || (float)(v79 * (float)v70) < v81) {
                      v82 = v81 / v79;
                      v83 = (v70 & (v70 - 1)) != 0;
                      if (v70 < 3) {
                        v83 = true;
                      }
                      v84 = v83 | (2 * v70);
                      v85 = vcvtps_u64_f32(v82);
                      if (v84 <= v85) {
                        v86 = v85;
                      }
                      else {
                        v86 = v84;
                      }
                      if (v86 == 1) {
                        v86 = 2;
                      }
                      else if ((v86 & (v86 - 1)) != 0) {
                        primeEm = GameRoutine_1a09d00(v86);
                        v70 = *(_QWORD*)(a1 + 80);
                        v86 = primeEm;
                      }
                      if (v86 > v70) {
                        goto LABEL_73;
                      }
                      if (v86 < v70) {
                        v88 = vcvtps_u64_f32(
                            (float)*(unsigned __int64*)(a1 + 96) /
                            *(float*)(a1 + 104));
                        if (v70 < 3 || (v70 & (v70 - 1)) != 0) {
                          v88 = GameRoutine_1a09d00(v88);
                        }
                        else {
                          v89 = 1LL << -(char)__clz(v88 - 1);
                          if (v88 >= 2) {
                            v88 = v89;
                          }
                        }
                        if (v86 <= v88) {
                          v86 = v88;
                        }
                        if (v86 < v70) {
                        LABEL_73:
                          GameRoutine_60eb40(a1 + 72, v86);
                        }
                      }
                      v70 = *(_QWORD*)(a1 + 80);
                      if ((v70 & (v70 - 1)) != 0) {
                        if (v70 <= v65) {
                          v17 = v65 % v70;
                        }
                        else {
                          v17 = v65;
                        }
                      }
                      else {
                        v17 = ((_DWORD)v70 - 1) & (unsigned int)v65;
                      }
                    }
                    v90 = *(_QWORD*)(a1 + 72);
                    v91 = *(__int64**)(v90 + 8 * v17);
                    if (v91 != nullptr) {
                      *(_QWORD*)v80 = *v91;
                      *v91 = v80;
                    }
                    else {
                      v92 = *v202;
                      *v202 = v80;
                      *(_QWORD*)v80 = v92;
                      *(_QWORD*)(v90 + 8 * v17) = v202;
                      if (*(_QWORD*)v80 != 0) {
                        v93 = *(_QWORD*)(*(_QWORD*)v80 + 8LL);
                        if ((v70 & (v70 - 1)) != 0) {
                          if (v93 >= v70) {
                            v93 %= v70;
                          }
                        }
                        else {
                          v93 &= v70 - 1;
                        }
                        *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8 * v93) = v80;
                      }
                    }
                    ++*(_QWORD*)(a1 + 96);
                  LABEL_98:
                    ++v59;
                  } while (v59 != v29);
                }
                if (v15 < 3) {
                  goto LABEL_173;
                }
                GameRoutine_97b9e0(a1 + 112, a2);
                if (v15 == 3) {
                  goto LABEL_173;
                }
                goto LABEL_23;
              }
            LABEL_21:
              while (v29 != 0) {
                v50 = *(int*)(a2 + 20);
                v51 = *(_QWORD*)(a2 + 8);
                *(_DWORD*)(a2 + 20) = v50 + 1;
                v52 = *(unsigned __int8*)(v51 + v50);
                *(_DWORD*)(a2 + 20) = v50 + 2;
                v53 = v52 | (*(unsigned __int8*)(v51 + v50 + 1) << 8);
                *(_DWORD*)(a2 + 20) = v50 + 3;
                v54 = v53 | (*(unsigned __int8*)(v51 + v50 + 2) << 16);
                *(_DWORD*)(a2 + 20) = v50 + 4;
                LODWORD(v206[0]) =
                    v54 | (*(unsigned __int8*)(v51 + v50 + 3) << 24);
                *(_DWORD*)(a2 + 20) = v50 + 5;
                v55 = *(unsigned __int8*)(v51 + v50 + 4);
                if (v55 == 255) {
                  *(_DWORD*)(a2 + 20) = v50 + 6;
                  v56 = *(unsigned __int8*)(v51 + v50 + 5);
                  *(_DWORD*)(a2 + 20) = v50 + 7;
                  v57 = v56 | (*(unsigned __int8*)(v51 + v50 + 6) << 8);
                  *(_DWORD*)(a2 + 20) = v50 + 8;
                  v58 = *(unsigned __int8*)(v51 + v50 + 7);
                  *(_DWORD*)(a2 + 20) = v50 + 9;
                  v55 = v57 | (v58 << 16) |
                        (*(unsigned __int8*)(v51 + v50 + 8) << 24);
                }
                v205 = v55;
                GameRoutine_8ef040(a1 + 72, v206, v206, &v205);
                --v29;
              }
              GameRoutine_97b9e0(a1 + 112, a2);
            LABEL_23:
              v37 = *(int*)(a2 + 20);
              *(_DWORD*)(a2 + 20) = v37 + 1;
              *(_BYTE*)(a1 + 152) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37);
              v38 = *(int*)(a2 + 20);
              *(_DWORD*)(a2 + 20) = v38 + 1;
              *(_DWORD*)(a1 + 156) =
                  *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v38);
              if (v15 >= 7) {
                v39 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v39 + 1;
                *(_BYTE*)(a1 + 160) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39);
                v40 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v40 + 1;
                *(_DWORD*)(a1 + 164) =
                    *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v40);
                if (v15 <= 9) {
                  if (v15 != 7) {
                    GameRoutine_130b980(*(_QWORD*)(a1 + 200), a2);
                    if (v15 == 9) {
                      GameRoutine_90dea0(*(_QWORD*)(a1 + 184), a2);
                    }
                  }
                }
                else {
                  v41 = *(int*)(a2 + 20);
                  *(_DWORD*)(a2 + 20) = v41 + 1;
                  v42 = *(_QWORD*)(a1 + 200);
                  *(_BYTE*)(a1 + 168) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41);
                  GameRoutine_130b980(v42, a2);
                  GameRoutine_90dea0(*(_QWORD*)(a1 + 184), a2);
                  if (v15 != 10) {
                    if (*(_QWORD*)(a1 + 240) != 0) {
                      v43 = *(_QWORD**)(a1 + 232);
                      if (v43 != nullptr) {
                        v17 = 128;
                        v44 = GameData_212bf68;
                        do {
                          v45 = (_QWORD*)*v43;
                          if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) != 0) {
                            v46 = 128;
                          }
                          else {
                            v46 = 56;
                          }
                          GameRoutine_1a0a4e0(*(_QWORD*)v44 + v46, v43);
                          v43 = v45;
                        } while (v45 != nullptr);
                      }
                      v47 = *(_QWORD*)(a1 + 224);
                      *(_QWORD*)(a1 + 232) = 0;
                      if (v47 != 0) {
                        v48 = v47 & 7;
                        if (v47 >= 8) {
                          v94 = v47 & 0xFFFFFFFFFFFFFFF8LL;
                          v49 = 0;
                          do {
                            *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8 * v49) = 0;
                            *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8 * v49 + 8) = 0;
                            *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8 * v49 + 16) = 0;
                            *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8 * v49 + 24) = 0;
                            *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8 * v49 + 32) = 0;
                            *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8 * v49 + 40) = 0;
                            *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8 * v49 + 48) = 0;
                            v95 = *(_QWORD*)(a1 + 216) + 8 * v49;
                            v49 += 8;
                            *(_QWORD*)(v95 + 56) = 0;
                          } while (v94 != v49);
                        }
                        else {
                          v49 = 0;
                        }
                        if (v48 != 0) {
                          v96 = 8 * v49;
                          do {
                            --v48;
                            *(_QWORD*)(*(_QWORD*)(a1 + 216) + v96) = 0;
                            v96 += 8;
                          } while (v48 != 0);
                        }
                      }
                      *(_QWORD*)(a1 + 240) = 0;
                    }
                    v97 = (**(__int64 (***)(__int64))(a1 + 208))(a1 + 208);
                    v98 = GameRoutine_7a8520(v97);
                    v99 = *(_QWORD*)a2;
                    LODWORD(v206[0]) = v98;
                    if (((*(__int64 (**)(__int64, _DWORD**))(v99 + 16))(a2,
                                                                        v206) &
                         1) != 0) {
                      v100 = *(int*)(a2 + 20);
                      v101 = *(_QWORD*)(a2 + 8);
                      *(_DWORD*)(a2 + 20) = v100 + 1;
                      v102 = *(unsigned __int8*)(v101 + v100);
                      *(_DWORD*)(a2 + 20) = v100 + 2;
                      v103 = v102 | (*(unsigned __int8*)(v101 + v100 + 1) << 8);
                      if (v103 != 0) {
                        v104 = v103;
                        v105 = 0;
                        v203 = (__int64*)(a1 + 232);
                        do {
                          v106 = *(int*)(a2 + 20);
                          v107 = *(_QWORD*)(a2 + 8);
                          *(_DWORD*)(a2 + 20) = v106 + 1;
                          v108 = *(unsigned __int8*)(v107 + v106);
                          *(_DWORD*)(a2 + 20) = v106 + 2;
                          v109 = v108 |
                                 (*(unsigned __int8*)(v107 + v106 + 1) << 8);
                          *(_DWORD*)(a2 + 20) = v106 + 3;
                          v110 = v109 |
                                 (*(unsigned __int8*)(v107 + v106 + 2) << 16);
                          *(_DWORD*)(a2 + 20) = v106 + 4;
                          v111 = v110 |
                                 (*(unsigned __int8*)(v107 + v106 + 3) << 24);
                          *(_DWORD*)(a2 + 20) = v106 + 5;
                          v112 = *(unsigned __int8*)(v107 + v106 + 4);
                          *(_DWORD*)(a2 + 20) = v106 + 6;
                          v113 = *(unsigned __int8*)(v107 + v106 + 5);
                          v114 = *(_QWORD*)(a1 + 224);
                          if (v114 != 0) {
                            v115 = v114 - 1;
                            if ((v114 & (v114 - 1)) != 0) {
                              v17 = v111;
                              if (v114 <= v111) {
                                v17 = (unsigned int)v111 % (unsigned int)v114;
                              }
                            }
                            else {
                              v17 = ((_DWORD)v114 - 1) & (unsigned int)v111;
                            }
                            v116 = *(__int64**)(*(_QWORD*)(a1 + 216) + 8 * v17);
                            if (v116 != nullptr) {
                              v117 = *v116;
                              if (*v116 != 0) {
                                if ((v114 & v115) == 0) {
                                  while (1) {
                                    v119 = *(_QWORD*)(v117 + 8);
                                    if (v119 == v111) {
                                      if (*(_DWORD*)(v117 + 16) ==
                                          (_DWORD)v111) {
                                        goto LABEL_171;
                                      }
                                    }
                                    else if ((v119 & v115) != v17) {
                                      goto LABEL_134;
                                    }
                                    v117 = *(_QWORD*)v117;
                                    if (v117 == 0) {
                                      goto LABEL_134;
                                    }
                                  }
                                }
                                do {
                                  v118 = *(_QWORD*)(v117 + 8);
                                  if (v118 == v111) {
                                    if (*(_DWORD*)(v117 + 16) == (_DWORD)v111) {
                                      goto LABEL_171;
                                    }
                                  }
                                  else {
                                    if (v118 >= v114) {
                                      v118 %= v114;
                                    }
                                    if (v118 != v17) {
                                      break;
                                    }
                                  }
                                  v117 = *(_QWORD*)v117;
                                } while (v117 != 0);
                              }
                            }
                          }
                        LABEL_134:
                          v120 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                                    24, 16, 0);
                          v121 = *(_QWORD*)(a1 + 240);
                          v122 = *(float*)(a1 + 248);
                          v117 = v120;
                          *(_QWORD*)v120 = 0;
                          *(_QWORD*)(v120 + 8) = v111;
                          *(_DWORD*)(v120 + 16) = v111;
                          *(_WORD*)(v120 + 20) = 0;
                          v123 = (float)(unsigned __int64)(v121 + 1);
                          if (v114 == 0 || (float)(v122 * (float)v114) < v123) {
                            v124 = v123 / v122;
                            v125 = (v114 & (v114 - 1)) != 0;
                            if (v114 < 3) {
                              v125 = true;
                            }
                            v126 = v125 | (2 * v114);
                            v127 = vcvtps_u64_f32(v124);
                            if (v126 <= v127) {
                              v128 = v127;
                            }
                            else {
                              v128 = v126;
                            }
                            if (v128 == 1) {
                              v128 = 2;
                            }
                            else if ((v128 & (v128 - 1)) != 0) {
                              v129 = GameRoutine_1a09d00(v128);
                              v114 = *(_QWORD*)(a1 + 224);
                              v128 = v129;
                            }
                            if (v128 > v114) {
                              goto LABEL_146;
                            }
                            if (v128 < v114) {
                              v130 = vcvtps_u64_f32(
                                  (float)*(unsigned __int64*)(a1 + 240) /
                                  *(float*)(a1 + 248));
                              if (v114 < 3 || (v114 & (v114 - 1)) != 0) {
                                v130 = GameRoutine_1a09d00(v130);
                              }
                              else {
                                v131 = 1LL << -(char)__clz(v130 - 1);
                                if (v130 >= 2) {
                                  v130 = v131;
                                }
                              }
                              if (v128 <= v130) {
                                v128 = v130;
                              }
                              if (v128 < v114) {
                              LABEL_146:
                                GameRoutine_6f2440(a1 + 216, v128);
                              }
                            }
                            v114 = *(_QWORD*)(a1 + 224);
                            if ((v114 & (v114 - 1)) != 0) {
                              if (v114 <= v111) {
                                v17 = v111 % v114;
                              }
                              else {
                                v17 = v111;
                              }
                            }
                            else {
                              v17 = ((_DWORD)v114 - 1) & (unsigned int)v111;
                            }
                          }
                          v132 = *(_QWORD*)(a1 + 216);
                          v133 = *(__int64**)(v132 + 8 * v17);
                          if (v133 != nullptr) {
                            *(_QWORD*)v117 = *v133;
                            *v133 = v117;
                          }
                          else {
                            v134 = *v203;
                            *v203 = v117;
                            *(_QWORD*)v117 = v134;
                            *(_QWORD*)(v132 + 8 * v17) = v203;
                            if (*(_QWORD*)v117 != 0) {
                              v135 = *(_QWORD*)(*(_QWORD*)v117 + 8LL);
                              if ((v114 & (v114 - 1)) != 0) {
                                if (v135 >= v114) {
                                  v135 %= v114;
                                }
                              }
                              else {
                                v135 &= v114 - 1;
                              }
                              *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8 * v135) =
                                  v117;
                            }
                          }
                          ++*(_QWORD*)(a1 + 240);
                        LABEL_171:
                          ++v105;
                          *(_WORD*)(v117 + 20) = v112 | (v113 << 8);
                        } while (v105 != v104);
                      }
                    }
                    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
                  }
                }
              }
            }
          }
        }
      LABEL_173:
        v136 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
        v138 = *(_QWORD*)(a1 + 8);
        v137 = *(_QWORD*)(a1 + 16);
        if (v137 != v138) {
          v139 = 0;
          v140 = 0;
          do {
            v141 = v138 + 8 * v139;
            v206[0] = nullptr;
            v206[1] = &GameData_1a9f09e;
            LODWORD(v206[0]) = *(_DWORD*)v141;
            v136 = GameRoutine_132ffa0(v206);
            if (v136 != 0) {
              ++v140;
            }
            else {
              *(_DWORD*)v141 = 0;
              *(_WORD*)(v141 + 4) = 0;
              v138 = *(_QWORD*)(a1 + 8);
              v142 = *(_QWORD*)(a1 + 16);
              v143 = v138 + 8 * v139;
              v144 = v142 - (v143 + 8);
              if (v142 != v143 + 8) {
                v136 = GameRoutine_1a0b940(v143, v143 + 8, v144 - 2);
                v138 = *(_QWORD*)(a1 + 8);
              }
              v137 = v143 + v144;
              *(_QWORD*)(a1 + 16) = v137;
            }
            v139 = v140;
          } while (v140 < (unsigned __int64)((v137 - v138) >> 3));
        }
        v145 = GameData_21caab0;
        if (GameData_21caab0 != 0) {
          v146 = *(__int64**)(a1 + 88);
          if (v146 != nullptr) {
            v147 = nullptr;
            v148 = nullptr;
            v149 = 0;
            v150 = GameData_212c650[0];
            do {
              v151 = *((unsigned int*)v146 + 4);
              v152 = *(_QWORD*)(*(_QWORD*)(v145 + 48) + 3932784LL);
              if (v152 != 0 &&
                  *(_QWORD*)(*(_QWORD*)(v145 + 48) + 3932800LL) != 0) {
                v154 = v152 - 1;
                if ((v152 & (v152 - 1)) != 0) {
                  v155 = *((unsigned int*)v146 + 4);
                  if (v152 <= v151) {
                    v155 = (unsigned int)v151 % (unsigned int)v152;
                  }
                }
                else {
                  v155 = ((_DWORD)v152 - 1) & (unsigned int)v151;
                }
                v156 = *(
                    __int64***)(*(_QWORD*)(*(_QWORD*)(v145 + 48) + 3932776LL) +
                                8 * v155);
                if (v156 != nullptr) {
                  v157 = *v156;
                  if (v157 != nullptr) {
                    if ((v152 & v154) == 0) {
                      while (1) {
                        v159 = v157[1];
                        if (v159 == v151) {
                          if (*((_DWORD*)v157 + 4) == (_DWORD)v151) {
                            goto LABEL_210;
                          }
                        }
                        else if ((v159 & v154) != v155) {
                          goto LABEL_184;
                        }
                        v157 = (__int64*)*v157;
                        if (v157 == nullptr) {
                          goto LABEL_184;
                        }
                      }
                    }
                    do {
                      v158 = v157[1];
                      if (v158 == v151) {
                        if (*((_DWORD*)v157 + 4) == (_DWORD)v151) {
                        LABEL_210:
                          if (v157[3] == 0) {
                            goto LABEL_211;
                          }
                          goto LABEL_185;
                        }
                      }
                      else {
                        if (v158 >= v152) {
                          v158 %= v152;
                        }
                        if (v158 != v155) {
                          break;
                        }
                      }
                      v157 = (__int64*)*v157;
                    } while (v157 != nullptr);
                  }
                }
              }
            LABEL_184:
              if (*v150 == 0) {
              LABEL_211:
                if ((unsigned __int64)v148 >= v149) {
                  v160 = (char*)(v148 - v147);
                  v161 = (v148 - v147) >> 2;
                  v162 = v161 + 1;
                  if ((unsigned __int64)(v161 + 1) >> 62 != 0) {
                    GameRoutine_66df80(v136);
                  }
                  if ((__int64)(v149 - (_QWORD)v147) >> 1 > v162) {
                    v162 = (__int64)(v149 - (_QWORD)v147) >> 1;
                  }
                  if (v149 - (unsigned __int64)v147 >= 0x7FFFFFFFFFFFFFFCLL) {
                    v163 = 0x3FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v163 = v162;
                  }
                  if (v163 != 0) {
                    if (v163 >> 62 != 0) {
                      GameRoutine_60a210(v136);
                    }
                    v164 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                              4 * v163, 16, 0);
                    LODWORD(v151) = *((_DWORD*)v146 + 4);
                  }
                  else {
                    v164 = 0;
                  }
                  v149 = v164 + 4 * v163;
                  v165 = (char*)(v148 - v147);
                  v166 = (__int64)&v160[v164 + -4 * v161];
                  *(_DWORD*)&v160[v164] = v151;
                  v148 = &v160[v164 + 4];
                  v136 = GameRoutine_1a0b950(v166, v147, v165);
                  if (v147 != nullptr) {
                    v167 = 128;
                    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                      v167 = 56;
                    }
                    v136 = GameRoutine_1a0a4e0(
                        *(_QWORD*)GameData_212bf68 + v167, v147);
                  }
                  v147 = (char*)v166;
                }
                else {
                  *(_DWORD*)v148 = v151;
                  v148 += 4;
                }
              }
            LABEL_185:
              v146 = (__int64*)*v146;
            } while (v146 != nullptr);
            if (v148 != v147) {
              v168 = v147;
              do {
                v169 = *(_QWORD*)(a1 + 80);
                if (v169 != 0 && *(_QWORD*)(a1 + 96) != 0) {
                  v171 = *(unsigned int*)v168;
                  v172 = v169 - 1;
                  if ((v169 & (v169 - 1)) != 0) {
                    v173 = *(unsigned int*)v168;
                    if (v169 <= v171) {
                      v173 = (unsigned int)v171 % (unsigned int)v169;
                    }
                  }
                  else {
                    v173 = ((_DWORD)v169 - 1) & (unsigned int)v171;
                  }
                  v174 = *(__int64***)(*(_QWORD*)(a1 + 72) + 8 * v173);
                  if (v174 != nullptr) {
                    v175 = *v174;
                    if (*v174 != nullptr) {
                      if ((v169 & v172) == 0) {
                        while (1) {
                          v177 = v175[1];
                          if (v177 == v171) {
                            if (*((_DWORD*)v175 + 4) == (_DWORD)v171) {
                              goto LABEL_255;
                            }
                          }
                          else if ((v177 & v172) != v173) {
                            goto LABEL_230;
                          }
                          v175 = (__int64*)*v175;
                          if (v175 == nullptr) {
                            goto LABEL_230;
                          }
                        }
                      }
                      do {
                        v176 = v175[1];
                        if (v176 == v171) {
                          if (*((_DWORD*)v175 + 4) == (_DWORD)v171) {
                          LABEL_255:
                            *(struct PseudoSret*)(v206) =
                                GameRoutine_8f5900(a1 + 72);
                            v178 = v206[0];
                            v206[0] = nullptr;
                            if (v178 != nullptr) {
                              if (*(_QWORD*)(GameData_2265ee0 + 200) != 0) {
                                v179 = 128;
                              }
                              else {
                                v179 = 56;
                              }
                              GameRoutine_1a0a4e0(GameData_2265ee0 + v179,
                                                  v178);
                            }
                            break;
                          }
                        }
                        else {
                          if (v176 >= v169) {
                            v176 %= v169;
                          }
                          if (v176 != v173) {
                            break;
                          }
                        }
                        v175 = (__int64*)*v175;
                      } while (v175 != nullptr);
                    }
                  }
                }
              LABEL_230:
                v168 += 4;
              } while (v168 != v148);
            }
            if (v147 != nullptr) {
              v180 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v180 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v180, v147);
            }
          }
        }
        v7 = v204;
        if (*(_QWORD*)(a1 + 56) != 0) {
          v181 = *(_QWORD**)(a1 + 48);
          if (v181 != nullptr) {
            v182 = GameData_212bf68;
            do {
              v183 = (_QWORD*)*v181;
              if (*(_QWORD*)(*(_QWORD*)v182 + 200LL) != 0) {
                v184 = 128;
              }
              else {
                v184 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)v182 + v184, v181);
              v181 = v183;
            } while (v183 != nullptr);
          }
          v185 = *(_QWORD*)(a1 + 40);
          *(_QWORD*)(a1 + 48) = 0;
          if (v185 != 0) {
            v186 = v185 & 7;
            if (v185 >= 8) {
              v188 = v185 & 0xFFFFFFFFFFFFFFF8LL;
              v187 = 0;
              do {
                *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v187) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v187 + 8) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v187 + 16) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v187 + 24) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v187 + 32) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v187 + 40) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v187 + 48) = 0;
                v189 = *(_QWORD*)(a1 + 32) + 8 * v187;
                v187 += 8;
                *(_QWORD*)(v189 + 56) = 0;
              } while (v188 != v187);
            }
            else {
              v187 = 0;
            }
            if (v186 != 0) {
              v190 = 8 * v187;
              do {
                --v186;
                *(_QWORD*)(*(_QWORD*)(a1 + 32) + v190) = 0;
                v190 += 8;
              } while (v186 != 0);
            }
          }
          *(_QWORD*)(a1 + 56) = 0;
        }
        v191 = *(_QWORD*)(a1 + 8);
        if (*(_QWORD*)(a1 + 16) != v191) {
          v192 = 0;
          v193 = 0;
          v194 = GameData_212c028;
          do {
            v206[0] = (_DWORD*)(v191 + v192);
            *(_DWORD*)(GameRoutine_818500((float*)(a1 + 32),
                                          (unsigned int*)(v191 + v192),
                                          (__int64)v194, v206) +
                       20) = v193++;
            v192 += 8;
            v191 = *(_QWORD*)(a1 + 8);
          } while (v193 < (*(_QWORD*)(a1 + 16) - v191) >> 3);
        }
        goto LABEL_283;
      }
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
}

void GameHr_90cd80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v3;
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
  int v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD** v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  float v51;
  float v52;
  float v53;
  _BOOL8 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 primeEm;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  _QWORD* v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  _QWORD* v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  _QWORD* v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  _QWORD* v82;
  unsigned __int64 v83;
  __int64* v84;
  unsigned __int64 v85[2];

  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 8);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 88) != 0) {
    v4 = *(_QWORD**)(a1 + 80);
    v5 = fw_memory_g_heap_manager_ptr;
    if (v4 != nullptr) {
      v1 = 56;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, (__int64)v4);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = *(_QWORD*)(a1 + 72);
    *(_QWORD*)(a1 + 80) = 0;
    v3 = (__int64*)v5;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v10) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v10 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v10 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v10 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v10 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v10 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v10 + 48) = 0;
          v12 = *(_QWORD*)(a1 + 64) + 8 * v10;
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
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    *(_QWORD*)(a1 + 88) = 0;
  }
  v85[1] = (unsigned __int64)&GameData_1ae1fcc;
  v85[0] = game_HashString((__int64)&GameData_1ae1fcc);
  v14 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v15 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v85);
    if (v15 != 0) {
      v14 = *(_DWORD*)(v15 + 32);
    }
    else {
      v14 = 0;
    }
  }
  *(_DWORD*)(a1 + 104) = v14;
  *(_DWORD*)(a1 + 108) = 0;
  v17 = *(__int64**)(GameData_21ca088 + 64);
  v16 = *(__int64**)(GameData_21ca088 + 72);
  if (v17 != v16) {
    v84 = *(__int64**)(GameData_21ca088 + 72);
    do {
      v18 = *v17;
      if (((*(unsigned __int16*)(*v17 + 90) + *(unsigned __int16*)(*v17 + 88)) |
           *(unsigned __int16*)(*v17 + 92)) != 0) {
        v19 = *(_QWORD*)(a1 + 8);
        v20 = *(_QWORD*)(a1 + 16);
        v21 = *(_QWORD*)(a1 + 24);
        v22 = v20 - v19;
        v23 = (v20 - v19) >> 5;
        if (v20 < v21) {
          *(_QWORD*)v20 = (unsigned int)v23;
          *(_BYTE*)(v20 + 8) = 0;
          v1 = v20 + 32;
          *(_QWORD*)(v20 + 16) = v18;
          *(_QWORD*)(v20 + 24) = a1;
        }
        else {
          v24 = (v22 >> 5) + 1;
          if (v24 >> 59 != 0) {
            GameRoutine_90e4a0_alt1();
          }
          v25 = v21 - v19;
          if (v25 >> 4 > v24) {
            v24 = v25 >> 4;
          }
          v26 = (unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFE0LL;
          v27 = 0x7FFFFFFFFFFFFFFLL;
          if (!v26) {
            v27 = v24;
          }
          if (v27 >> 59 != 0) {
          LABEL_141:
            GameRoutine_60a210_alt1();
          }
          v28 = 32 * v27;
          v29 = fw_memory_HeapManager_Allocate(*v3, 32 * v27, 16, 0);
          v30 = v29 + v22;
          *(_QWORD*)v30 = (unsigned int)v23;
          *(_BYTE*)(v30 + 8) = 0;
          *(_QWORD*)(v30 + 16) = v18;
          *(_QWORD*)(v30 + 24) = a1;
          if (v19 != v20) {
            v31 = (__int64*)v19;
            v32 = (_QWORD*)(v29 + v22 - 32 * (v22 >> 5));
            do {
              v33 = *v31;
              v34 = v31[1];
              v35 = v31[2];
              v36 = v31[3];
              v31 += 4;
              v32[2] = v35;
              v32[3] = v36;
              *v32 = v33;
              v32[1] = v34;
              v32 += 4;
            } while (v31 != (__int64*)v20);
          }
          v37 = v29 + v28;
          v1 = v30 + 32;
          *(_QWORD*)(a1 + 8) = v29 + v22 - 32 * (v22 >> 5);
          *(_QWORD*)(a1 + 16) = v30 + 32;
          *(_QWORD*)(a1 + 24) = v37;
          if (v19 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v3 + 200) == 0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v38, v19);
          }
          v16 = v84;
        }
        *(_QWORD*)(a1 + 16) = v1;
      }
      ++v17;
    } while (v17 != v16);
  }
  v39 = *(_QWORD*)(a1 + 8);
  v40 = *(_QWORD*)(a1 + 16);
  if (v39 != v40) {
    v41 = (_QWORD*)(a1 + 80);
    while (1) {
      v42 = *(_QWORD*)(a1 + 72);
      v43 = **(_QWORD**)(v39 + 16);
      if (v42 != 0) {
        v44 = v42 - 1;
        if ((v42 & (v42 - 1)) != 0) {
          v1 = **(_QWORD**)(v39 + 16);
          if (v43 >= v42) {
            v1 = v43 % v42;
          }
        }
        else {
          v1 = v44 & v43;
        }
        v45 = *(_QWORD***)(*(_QWORD*)(a1 + 64) + 8 * v1);
        if (v45 != nullptr) {
          v46 = *v45;
          if (*v45 != nullptr) {
            if ((v42 & v44) == 0) {
              while (1) {
                v48 = v46[1];
                if (v48 == v43) {
                  if (v46[2] == v43) {
                    goto LABEL_139;
                  }
                }
                else if ((v48 & v44) != v1) {
                  goto LABEL_64;
                }
                v46 = (_QWORD*)*v46;
                if (v46 == nullptr) {
                  goto LABEL_64;
                }
              }
            }
            do {
              v47 = v46[1];
              if (v47 == v43) {
                if (v46[2] == v43) {
                  goto LABEL_139;
                }
              }
              else {
                if (v47 >= v42) {
                  v47 %= v42;
                }
                if (v47 != v1) {
                  break;
                }
              }
              v46 = (_QWORD*)*v46;
            } while (v46 != nullptr);
          }
        }
      }
    LABEL_64:
      v49 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 32, 16, 0);
      v50 = *(_QWORD*)(a1 + 88);
      v51 = *(float*)(a1 + 96);
      v46 = v49;
      *v49 = 0;
      v49[1] = v43;
      v49[2] = v43;
      v49[3] = 0;
      v52 = (float)(unsigned __int64)(v50 + 1);
      if (v42 != 0 && (float)(v51 * (float)v42) >= v52) {
        goto LABEL_130;
      }
      v53 = v52 / v51;
      v54 = (v42 & (v42 - 1)) != 0;
      if (v42 < 3) {
        v54 = true;
      }
      v55 = v54 | (2 * v42);
      v56 = vcvtps_u64_f32(v53);
      if (v55 <= v56) {
        v57 = v56;
      }
      else {
        v57 = v55;
      }
      if (v57 == 1) {
        v57 = 2;
      }
      else if ((v57 & (v57 - 1)) != 0) {
        primeEm = std___1___next_prime(v57);
        v42 = *(_QWORD*)(a1 + 72);
        v57 = primeEm;
      }
      if (v57 <= v42) {
        if (v57 >= v42) {
          goto LABEL_125;
        }
        v63 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 88) /
                             *(float*)(a1 + 96));
        if (v42 < 3 || (v42 & (v42 - 1)) != 0) {
          v63 = std___1___next_prime(v63);
        }
        else {
          v64 = 1LL << -(char)__clz(v63 - 1);
          if (v63 >= 2) {
            v63 = v64;
          }
        }
        if (v57 <= v63) {
          v57 = v63;
        }
        if (v57 >= v42) {
          goto LABEL_125;
        }
        if (v57 == 0) {
          v78 = *(_QWORD*)(a1 + 64);
          *(_QWORD*)(a1 + 64) = 0;
          if (v78 != 0) {
            v79 = 128;
            if (*(_QWORD*)(*v3 + 200) == 0) {
              v79 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v79, v78);
          }
          *(_QWORD*)(a1 + 72) = 0;
          goto LABEL_125;
        }
      }
      if (v57 >> 61 != 0) {
        goto LABEL_141;
      }
      v59 = fw_memory_HeapManager_Allocate(*v3, 8 * v57, 16, 0);
      v60 = *(_QWORD*)(a1 + 64);
      *(_QWORD*)(a1 + 64) = v59;
      if (v60 != 0) {
        v61 = 128;
        if (*(_QWORD*)(*v3 + 200) == 0) {
          v61 = 56;
        }
        nn_mem_StandardAllocator_Free(*v3 + v61, v60);
      }
      *(_QWORD*)(a1 + 72) = v57;
      if (v57 >= 8) {
        v62 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v62) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v62 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v62 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v62 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v62 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v62 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v62 + 48) = 0;
          v65 = *(_QWORD*)(a1 + 64) + 8 * v62;
          v62 += 8;
          *(_QWORD*)(v65 + 56) = 0;
        } while ((v57 & 0x1FFFFFFFFFFFFFF8LL) != v62);
      }
      else {
        v62 = 0;
      }
      v66 = v57 & 7;
      if ((v57 & 7) != 0) {
        v67 = 8 * v62;
        do {
          --v66;
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + v67) = 0;
          v67 += 8;
        } while (v66 != 0);
      }
      v68 = (_QWORD*)*v41;
      if (*v41 == 0) {
        goto LABEL_125;
      }
      v69 = v68[1];
      v70 = v57 - 1;
      if ((v57 & (v57 - 1)) != 0) {
        break;
      }
      v74 = v69 & v70;
      *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v74) = v41;
      while (1) {
        v75 = (_QWORD*)*v68;
        if (*v68 == 0) {
          break;
        }
        v76 = v75[1] & v70;
        if (v76 == v74) {
          v68 = (_QWORD*)*v68;
        }
        else {
          v77 = *(_QWORD*)(a1 + 64);
          if (*(_QWORD*)(v77 + 8 * v76) != 0) {
            *v68 = *v75;
            *v75 = **(_QWORD**)(*(_QWORD*)(a1 + 64) + 8 * v76);
            **(_QWORD**)(*(_QWORD*)(a1 + 64) + 8 * v76) = v75;
          }
          else {
            *(_QWORD*)(v77 + 8 * v76) = v68;
            v68 = v75;
            v74 = v76;
          }
        }
      }
    LABEL_125:
      v42 = *(_QWORD*)(a1 + 72);
      if ((v42 & (v42 - 1)) != 0) {
        if (v43 >= v42) {
          v1 = v43 % v42;
        }
        else {
          v1 = v43;
        }
      }
      else {
        v1 = (v42 - 1) & v43;
      }
    LABEL_130:
      v80 = *(_QWORD*)(a1 + 64);
      v81 = *(_QWORD**)(v80 + 8 * v1);
      if (v81 != nullptr) {
        *v46 = *v81;
        *v81 = v46;
      }
      else {
        v82 = (_QWORD*)*v41;
        *v41 = v46;
        *v46 = v82;
        *(_QWORD*)(v80 + 8 * v1) = v41;
        if (*v46 != 0) {
          v83 = *(_QWORD*)(*v46 + 8LL);
          if ((v42 & (v42 - 1)) != 0) {
            if (v83 >= v42) {
              v83 %= v42;
            }
          }
          else {
            v83 &= v42 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v83) = v46;
        }
      }
      ++*(_QWORD*)(a1 + 88);
    LABEL_139:
      v46[3] = v39;
      v39 += 32;
      if (v39 == v40) {
        return;
      }
    }
    if (v69 >= v57) {
      v69 %= v57;
    }
    *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8 * v69) = v41;
    v71 = (_QWORD*)*v68;
    if (*v68 == 0) {
      goto LABEL_125;
    }
    while (1) {
      v72 = v71[1];
      if (v72 >= v57) {
        v72 %= v57;
      }
      if (v72 != v69) {
        v73 = *(_QWORD*)(a1 + 64);
        if (*(_QWORD*)(v73 + 8 * v72) == 0) {
          *(_QWORD*)(v73 + 8 * v72) = v68;
          goto LABEL_102;
        }
        *v68 = *v71;
        *v71 = **(_QWORD**)(*(_QWORD*)(a1 + 64) + 8 * v72);
        **(_QWORD**)(*(_QWORD*)(a1 + 64) + 8 * v72) = v71;
        v71 = v68;
      }
      v72 = v69;
    LABEL_102:
      v68 = v71;
      v71 = (_QWORD*)*v71;
      v69 = v72;
      if (v71 == nullptr) {
        goto LABEL_125;
      }
    }
  }
}

__int64 GameHr_913f40(__int64 result, __int64* a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _BYTE* v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  _BYTE* v26;
  unsigned __int64 v27;
  char* v28;
  char* v29;
  char* v30;
  char* v31;
  char* v32;
  char* v33;
  __int64 v34;
  char* v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _BYTE v46[32];
  _BYTE* v47;

  v3 = *(unsigned __int8**)(result + 56);
  v2 = *(unsigned __int8**)(result + 64);
  v5 = (_QWORD*)result;
  if (v3 != v2) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v6 = a2[1];
    }
    else {
      v6 = *(_BYTE*)a2 >> 1;
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      while (1) {
        v10 = *v3;
        v11 = *((_QWORD*)v3 + 1);
        if ((v10 & 1) == 0) {
          v11 = v10 >> 1;
        }
        if (v11 == v6) {
          v12 = (v10 & 1) != 0 ? *((unsigned __int8**)v3 + 2) : v3 + 1;
          result = GameRoutine_1a09cf0(v12, a2[2], v6);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v3 += 80;
        if (v3 == v2) {
          goto LABEL_25;
        }
      }
    }
    else {
      while (1) {
        v7 = *v3;
        v8 = *((_QWORD*)v3 + 1);
        if ((v7 & 1) == 0) {
          v8 = v7 >> 1;
        }
        if (v8 == v6) {
          v9 = (v7 & 1) != 0 ? *((unsigned __int8**)v3 + 2) : v3 + 1;
          result = GameRoutine_1a09cf0(v9, (char*)a2 + 1, v6);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v3 += 80;
        if (v3 == v2) {
          goto LABEL_25;
        }
      }
    }
  }
  if (v3 == v2) {
  LABEL_25:
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v47 = nullptr;
    if (&v43 != a2) {
      if ((*(_BYTE*)a2 & 1) != 0) {
        result = GameRoutine_64df20(&v43, a2[2], a2[1]);
        v2 = (unsigned __int8*)v5[8];
      }
      else {
        v13 = a2[1];
        v43 = *a2;
        v44 = v13;
        v45 = a2[2];
      }
    }
    v14 = v5[9];
    if ((unsigned __int64)v2 < v14) {
      if ((v43 & 1) != 0) {
        GameRoutine_60a270(v2);
        v16 = v47;
        if (v47 != nullptr) {
          goto LABEL_32;
        }
      }
      else {
        *((_QWORD*)v2 + 1) = v44;
        v15 = v43;
        *((_QWORD*)v2 + 2) = v45;
        *(_QWORD*)v2 = v15;
        v16 = v47;
        if (v47 != nullptr) {
        LABEL_32:
          if (v16 == v46) {
            *((_QWORD*)v2 + 8) = v2 + 32;
            (*(void (**)(_BYTE*))(*(_QWORD*)v47 + 24LL))(v47);
          }
          else {
            *((_QWORD*)v2 + 8) =
                (*(__int64 (**)(_BYTE*))(*(_QWORD*)v16 + 16LL))(v16);
          }
          v17 = v2 + 80;
          goto LABEL_81;
        }
      }
      *((_QWORD*)v2 + 8) = 0;
      v17 = v2 + 80;
      goto LABEL_81;
    }
    v18 = v5[7];
    v19 = 1 - 0x3333333333333333LL * ((__int64)&v2[-v18] >> 4);
    if (v19 > 0x333333333333333LL) {
      GameRoutine_919f30();
    }
    v20 = GameData_212bf68;
    v21 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v14 - v18) >> 4);
    if (2 * v21 > v19) {
      v19 = 2 * v21;
    }
    if (v21 >= 0x199999999999999LL) {
      v22 = 0x333333333333333LL;
    }
    else {
      v22 = v19;
    }
    if (v22 != 0) {
      if (v22 > 0x333333333333333LL) {
        GameRoutine_60a210(result);
      }
      v23 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80 * v22, 16, 0);
    }
    else {
      v23 = 0;
    }
    v24 = &v2[v23 - v18];
    if ((v43 & 1) != 0) {
      GameRoutine_60a270(&v2[v23 - v18]);
      v26 = v47;
      if (v47 != nullptr) {
      LABEL_49:
        if (v26 == v46) {
          *((_QWORD*)v24 + 8) = v24 + 32;
          (*(void (**)(_BYTE*))(*(_QWORD*)v26 + 24LL))(v26);
        }
        else {
          *((_QWORD*)v24 + 8) =
              (*(__int64 (**)(_BYTE*))(*(_QWORD*)v26 + 16LL))(v26);
        }
        goto LABEL_55;
      }
    }
    else {
      v25 = v44;
      *(_QWORD*)v24 = v43;
      *((_QWORD*)v24 + 1) = v25;
      *((_QWORD*)v24 + 2) = v45;
      v26 = v47;
      if (v47 != nullptr) {
        goto LABEL_49;
      }
    }
    *((_QWORD*)v24 + 8) = 0;
  LABEL_55:
    v27 = v23 + 80 * v22;
    v28 = (char*)v5[7];
    v29 = (char*)v5[8];
    v30 = (char*)&v24[-(v29 - v28)];
    v17 = v24 + 80;
    if (v29 == v28) {
    LABEL_77:
      v5[7] = v30;
      v5[8] = v17;
      v5[9] = v27;
      if (v28 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
          v40 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v20 + v40, v28);
      }
    LABEL_81:
      result = (__int64)v47;
      v5[8] = v17;
      if ((_BYTE*)result == v46) {
        v41 = 32;
      }
      else {
        if (result == 0) {
        LABEL_86:
          if ((v43 & 1) != 0 && v45 != 0) {
            v42 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v42 = 56;
            }
            return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v42, v45);
          }
          return result;
        }
        v41 = 40;
      }
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)result + v41))((__int64)result);
      goto LABEL_86;
    }
    v31 = (char*)&v2[v23 - v18 + -16 * ((v29 - v28) >> 4)];
    v32 = (char*)v5[7];
    v33 = v31 + 32;
    do {
      *((_QWORD*)v33 - 3) = *((_QWORD*)v32 + 1);
      v34 = *(_QWORD*)v32;
      *((_QWORD*)v33 - 2) = *((_QWORD*)v32 + 2);
      *((_QWORD*)v33 - 4) = v34;
      *(_QWORD*)v32 = 0;
      *((_QWORD*)v32 + 1) = 0;
      *((_QWORD*)v32 + 2) = 0;
      v35 = *((char**)v32 + 8);
      if (v35 != nullptr) {
        if (v32 + 32 == v35) {
          *((_QWORD*)v33 + 4) = v33;
          (*(void (**)(_QWORD, char*))(**((_QWORD**)v32 + 8) + 24LL))(
              *((_QWORD*)v32 + 8), v33);
        }
        else {
          *((_QWORD*)v33 + 4) = v35;
          *((_QWORD*)v32 + 8) = 0;
        }
      }
      else {
        *((_QWORD*)v33 + 4) = 0;
      }
      v32 += 80;
      v33 += 80;
    } while (v32 != v29);
    while (1) {
      v36 = *((char**)v28 + 8);
      if (v28 + 32 == v36) {
        v37 = 32;
      }
      else {
        if (v36 == nullptr) {
          goto LABEL_70;
        }
        v37 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v36 + v37))((__int64)v36);
    LABEL_70:
      if ((*v28 & 1) != 0) {
        v38 = *((_QWORD*)v28 + 2);
        if (v38 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v20 + v39, v38);
        }
      }
      v28 += 80;
      if (v28 == v29) {
        v28 = (char*)v5[7];
        goto LABEL_77;
      }
    }
  }
  return result;
}

unsigned __int8* GameHr_93a310(unsigned __int8* a1, unsigned __int8* a2,
                               unsigned __int8* a3, unsigned __int8* a4,
                               unsigned __int8* a5)
{
  unsigned __int8* result;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int8 v13;
  unsigned __int64 v14;
  unsigned __int8 v15;
  unsigned __int64 v16;
  unsigned __int8 v17;
  unsigned __int64 v18;
  int v19;

  result = LegionPool_93a150(a1, a2, a3, a4);
  v11 = GameData_212c998_alt1[0];
  if ((signed __int32)*(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        GameData_212c998_alt1
                                                            [0] +
                                                    64LL) +
                                         8LL * *a5) +
                              24LL) +
                   88LL) <
      (signed __int32)*(
          _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                        GameData_212c998_alt1
                                                            [0] +
                                                    64LL) +
                                         8LL * *a4) +
                              24LL) +
                   88LL)) {
    v12 = *a4 != 0 ? *(_QWORD*)a4 : 0LL;
    *(_WORD*)a4 = *(_WORD*)a5;
    a4[2] = a5[2];
    v13 = a5[7];
    *(_DWORD*)(a4 + 3) = *(_DWORD*)(a5 + 3);
    a4[7] = v13;
    *(_WORD*)a5 = v12;
    a5[2] = BYTE2(v12);
    *(_DWORD*)(a5 + 3) = v12 >> 24;
    a5[7] = HIBYTE(v12);
    if ((signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v11 + 64LL) +
                                           8LL * *a4) +
                                24LL) +
                     88LL) <
        (signed __int32)*(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v11 + 64LL) +
                                           8LL * *a3) +
                                24LL) +
                     88LL)) {
      v14 = *a3 != 0 ? *(_QWORD*)a3 : 0LL;
      *(_WORD*)a3 = *(_WORD*)a4;
      a3[2] = a4[2];
      v15 = a4[7];
      *(_DWORD*)(a3 + 3) = *(_DWORD*)(a4 + 3);
      a3[7] = v15;
      *(_WORD*)a4 = v14;
      a4[2] = BYTE2(v14);
      *(_DWORD*)(a4 + 3) = v14 >> 24;
      a4[7] = HIBYTE(v14);
      if ((signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v11 + 64LL) +
                                             8LL * *a3) +
                                  24LL) +
                       88LL) <
          (signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v11 + 64LL) +
                                             8LL * *a2) +
                                  24LL) +
                       88LL)) {
        v16 = *a2 != 0 ? *(_QWORD*)a2 : 0LL;
        *(_WORD*)a2 = *(_WORD*)a3;
        a2[2] = a3[2];
        v17 = a3[7];
        *(_DWORD*)(a2 + 3) = *(_DWORD*)(a3 + 3);
        a2[7] = v17;
        *(_WORD*)a3 = v16;
        a3[2] = BYTE2(v16);
        *(_DWORD*)(a3 + 3) = v16 >> 24;
        a3[7] = HIBYTE(v16);
        if ((signed __int32)*(
                _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v11 +
                                                          64LL) +
                                               8LL * *a2) +
                                    24LL) +
                         88LL) <
            (signed __int32)*(
                _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v11 +
                                                          64LL) +
                                               8LL * *a1) +
                                    24LL) +
                         88LL)) {
          if (*a1 != 0) {
            v18 = *(_QWORD*)a1;
          }
          else {
            v18 = 0;
          }
          *(_WORD*)a1 = *(_WORD*)a2;
          a1[2] = a2[2];
          v19 = *(_DWORD*)(a2 + 3);
          a1[7] = a2[7];
          *(_DWORD*)(a1 + 3) = v19;
          *(_WORD*)a2 = v18;
          a2[2] = BYTE2(v18);
          a2[7] = HIBYTE(v18);
          *(_DWORD*)(a2 + 3) = v18 >> 24;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_96a680(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  __int64 v29;
  _QWORD v30[4];
  _QWORD* v31;
  int v32;

  if (GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3) {
    v30[0] = *(_QWORD*)(GameData_21caab0 + 96);
    v32 = 241;
    v5 = GameRoutine_6ead60(v30, &v32);
    v7 = (__int64*)a3[1];
    v6 = a3[2];
    if ((unsigned __int64)v7 >= v6) {
      v9 = *a3;
      v10 = (__int64)v7 - *a3;
      v11 = (v10 >> 3) + 1;
      if (v11 >> 61 != 0) {
        GameRoutine_6c1f60(v5);
      }
      v12 = v6 - v9;
      v13 = GameData_212bf68;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v11;
      }
      if (v14 != 0) {
        if (v14 >> 61 != 0) {
          GameRoutine_60a210(v5);
        }
        v15 = v5;
        v16 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v14, 16, 0);
        v5 = v15;
      }
      else {
        v16 = 0;
      }
      v17 = v16 + 8 * v14;
      v18 = v16 + v10 - 8 * (v10 >> 3);
      *(_QWORD*)(v16 + v10) = v5;
      v8 = v16 + v10 + 8;
      GameRoutine_1a0b950(v18, v9, v10);
      *a3 = v18;
      a3[1] = v8;
      a3[2] = v17;
      if (v9 != 0) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v19 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v13 + v19, v9);
      }
    }
    else {
      *v7 = v5;
      v8 = (__int64)(v7 + 1);
    }
    a3[1] = v8;
  }
  v20 = *(_QWORD*)(GameData_21c96e8 + 8);
  v21 = *(_DWORD*)(v20 + 56);
  v22 = *(__int64**)(v20 + 8);
  if (v21 < 0) {
    while (1) {
      v23 = *v22;
      if (*(_QWORD*)(*v22 + 96) == 0 && *(_QWORD*)(v23 + 552) == 0) {
        break;
      }
      ++v22;
    }
  }
  else {
    v25 = *v22;
    v24 = v22 + 1;
    v23 = v25;
    if (*(_DWORD*)(v25 + 84) != v21) {
      do {
        v26 = *v24++;
        v23 = v26;
      } while (*(_DWORD*)(v26 + 84) != v21);
    }
  }
  v30[0] = GameData_1fb0810;
  v30[1] = a3;
  v31 = v30;
  GameRoutine_133ed80(v23, v30);
  result = (__int64)v31;
  if (v31 == v30) {
    v28 = 32;
  }
  else {
    if (v31 == nullptr) {
      goto LABEL_32;
    }
    v28 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v31 + v28))((__int64)v31);
LABEL_32:
  if (GameData_21f1618 == 0) {
    return result;
  }
  v30[0] = GameData_1fb0890;
  v30[1] = a3;
  v31 = v30;
  GameRoutine_134ae50(a2, v30);
  result = (__int64)v31;
  if (v31 == v30) {
    v29 = 32;
  }
  else {
    if (v31 == nullptr) {
      return result;
    }
    v29 = 40;
  }
  return (*(__int64 (**)(__int64))(*v31 + v29))((__int64)v31);
}

void GameHr_96bec0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _BOOL8 v3;
  __int64 v4;
  __int64* v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 (***v8)();
  __int64 (***v9)();
  __int64 (**v10)();
  __int64 v11;
  __int64 (*v12)();
  int v13;
  __int64 (*v14)();
  __int64 (*v15)();
  bool v16;
  __int64 (**v17)();
  unsigned __int64 v18;
  const char* v19;
  unsigned __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  unsigned __int64 v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64** v33;
  __int64* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  _QWORD* i;
  _QWORD* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  void* v56;
  float v57;
  float v58;
  _BOOL8 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 primeEm;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  _QWORD** v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  _QWORD* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  _QWORD* v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 (**v88)();
  int v89;
  __int64 v90;
  _QWORD* v91;
  __int64 (***v92)();
  __int64 v93;
  __int64 v94;
  __int64* v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  _QWORD* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 (***v111)();
  __int64 (**v112)();
  unsigned __int64 v113;
  __int64 (**v114)();
  unsigned __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  struct {
    __int64 (**v118)();
    void* v119;
    char* v120;
    char gap120_[8];
    unsigned __int64* v121;
  } v118_;
  struct {
    __int64 (**v122)();
    __int64 (*v123)();
    __int64 (*v124)();
  } v122_;
  struct {
    __int64 (***v125)();
    __int64 v126;
    __int64 v127;
    __int64 v128;
    unsigned __int64 v129;
  } v125_;
  struct {
    _QWORD* v130;
    unsigned __int64 v131;
    float v132;
  } v130_;
  __int64 v133;

  v3 = BanquetManager_96bae0(a1);
  if (!v3) {
    return;
  }
  v130_.v130 = nullptr;
  v130_.v131 = 0;
  v125_.v128 = 0;
  v125_.v129 = 0;
  v125_.v126 = 0;
  v125_.v127 = 0;
  v125_.v125 = nullptr;
  v130_.v132 = 0x1.0000000000000p+0f;
  BanquetManager_96a680(v3, a2, (__int64*)&v125_.v125);
  v4 = (__int64)v125_.v125;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v108 = v125_.v126;
  if ((__int64 (***)(void))v125_.v126 == v125_.v125) {
    goto LABEL_198;
  }
  do {
    v6 = *(__int64 (***)(void))v4;
    v110 = v4;
    v7 = *(_QWORD*)(*(_QWORD*)v4 + 392LL);
    if (v7 != 0 && *(_QWORD*)(v7 + 272) != 0) {
      v8 = v125_.v125;
      v9 = (__int64 (***)(void))v125_.v126;
      if (v125_.v125 != (__int64 (***)(void))v125_.v126) {
        v111 = (__int64 (***)(void))v125_.v126;
        v112 = *(__int64 (***)(void))v4;
        while (1) {
          v10 = *v8;
          if (v6 != *v8) {
            v11 = (__int64)v6[49];
            v118_.v120 = nullptr;
            v118_.v118 = v6;
            v118_.v119 = (void*)v11;
            if (v11 != 0) {
              v11 =
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL) + 272LL);
            }
            v118_.v120 = (char*)v11;
            v122_.v122 = v10;
            v122_.v123 = nullptr;
            v122_.v124 = nullptr;
            if (v10 != nullptr) {
              v12 = v10[49];
              v122_.v123 = v12;
              if (v12 != nullptr) {
                v12 = *(__int64 (**)(void))(
                    *(_QWORD*)(*((_QWORD*)v12 + 3) + 1784LL) + 272LL);
              }
              v122_.v124 = v12;
            }
            v13 = GameReliance_8e17a0(
                *(_QWORD**)(game_GameModeData_instance_ + 128),
                (__int64)&v118_.v118, (__int64)&v122_.v122);
            if (v10 != nullptr && (v13 & 0x80000000) == 0) {
              break;
            }
          }
        LABEL_10:
          if (++v8 == v9) {
            goto LABEL_4;
          }
        }
        v14 = v6[49];
        v15 = v10[49];
        v118_.v118 = nullptr;
        LODWORD(v14) = *((unsigned __int16*)v14 + 8);
        LODWORD(v15) = *((unsigned __int16*)v15 + 8);
        v118_.v119 = nullptr;
        v118_.v120 = nullptr;
        v16 = (unsigned int)v14 > (unsigned int)v15;
        if ((unsigned int)v14 <= (unsigned int)v15) {
          v17 = v6;
        }
        else {
          v17 = v10;
        }
        if (v16) {
          v18 = (unsigned __int64)v6;
        }
        else {
          v18 = (unsigned __int64)v10;
        }
        v114 = v17;
        v19 = *((const char**)v17[49] + 1);
        v20 = strlen(v19);
        GameRoutine_1a09ce0_alt1((__int64)&v118_.v118, v19, v20);
        GameRoutine_1a09ce0_alt1((__int64)&v118_.v118, "_", 1u);
        v115 = v18;
        v21 = *(const char**)(*(_QWORD*)(v18 + 392) + 8LL);
        v22 = strlen(v21);
        GameRoutine_1a09ce0_alt1((__int64)&v118_.v118, v21, v22);
        v23 = v125_.v129;
        v113 = v130_.v131;
        if (v125_.v129 != 0 && v130_.v131 != 0) {
          v24 = (__int64)v118_.v120;
          v25 = (unsigned __int8)v118_.v118 & 1;
          v26 = (unsigned __int64)(unsigned __int8)v118_.v118 >> 1;
          if (v25 != 0) {
            v27 = v118_.v120;
          }
          else {
            v27 = (char*)&v118_.v118 + 1;
          }
          if (((unsigned __int8)v118_.v118 & 1) != 0) {
            v18 = (unsigned __int64)v118_.v119;
          }
          else {
            v18 = (unsigned __int64)(unsigned __int8)v118_.v118 >> 1;
          }
          v116 = (unsigned __int64)v118_.v119;
          v28 = std___1___hash_memory((__int64)v27, v18);
          v29 = v23 - 1;
          v30 = v28;
          if ((v23 & (v23 - 1)) != 0) {
            v31 = v28;
            if (v28 >= v23) {
              v31 = v28 % v23;
            }
          }
          else {
            v31 = v28 & v29;
          }
          v33 = *(__int64***)(v125_.v128 + 8 * v31);
          if (v33 != nullptr) {
            v109 = v24;
            v34 = *v33;
            if (*v33 != nullptr) {
              if ((v23 & v29) != 0) {
                v5 = (__int64*)fw_memory_g_heap_manager_ptr;
                while (1) {
                  v35 = v34[1];
                  if (v35 == v30) {
                    v36 = *((unsigned __int8*)v34 + 16);
                    v37 = v34[3];
                    if ((v36 & 1) == 0) {
                      v37 = v36 >> 1;
                    }
                    if (v37 == v18) {
                      v38 = (v36 & 1) != 0 ? v34[4] : (__int64)v34 + 17;
                      if (memcmp(v38, (__int64)v27, v18) == 0) {
                        goto LABEL_67;
                      }
                    }
                  }
                  else {
                    if (v35 >= v23) {
                      v35 %= v23;
                    }
                    if (v35 != v31) {
                      goto LABEL_71;
                    }
                  }
                  v34 = (__int64*)*v34;
                  if (v34 == nullptr) {
                    goto LABEL_71;
                  }
                }
              }
              do {
                v39 = v34[1];
                if (v39 == v30) {
                  v40 = *((unsigned __int8*)v34 + 16);
                  v41 = v34[3];
                  if ((v40 & 1) == 0) {
                    v41 = v40 >> 1;
                  }
                  if (v41 == v18) {
                    v42 = (v40 & 1) != 0 ? v34[4] : (__int64)v34 + 17;
                    if (memcmp(v42, (__int64)v27, v18) == 0) {
                      v5 = (__int64*)fw_memory_g_heap_manager_ptr;
                    LABEL_67:
                      v6 = v112;
                      if (v25 == 0) {
                      LABEL_9:
                        v9 = v111;
                        goto LABEL_10;
                      }
                    LABEL_179:
                      if (v118_.v120 != nullptr) {
                        v87 = 56;
                        if (*(_QWORD*)(*v5 + 200) != 0) {
                          v87 = 128;
                        }
                        nn_mem_StandardAllocator_Free(*v5 + v87,
                                                      (__int64)v118_.v120);
                      }
                      goto LABEL_9;
                    }
                  }
                }
                else if ((v39 & v29) != v31) {
                  break;
                }
                v34 = (__int64*)*v34;
              } while (v34 != nullptr);
            }
            v5 = (__int64*)fw_memory_g_heap_manager_ptr;
          LABEL_71:
            v24 = v109;
          }
          else {
            v5 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          v32 = v116;
        }
        else {
          v32 = (unsigned __int64)v118_.v119;
          v24 = (__int64)v118_.v120;
          v25 = (unsigned __int8)v118_.v118 & 1;
          v26 = (unsigned __int64)(unsigned __int8)v118_.v118 >> 1;
        }
        v117 = v32;
        if (v25 != 0) {
          v26 = v32;
          v43 = (char*)v24;
        }
        else {
          v43 = (char*)&v118_.v118 + 1;
        }
        v44 = std___1___hash_memory((__int64)v43, v26);
        v45 = v44;
        if (v23 != 0) {
          v46 = v24;
          v47 = v23 - 1;
          if ((v23 & (v23 - 1)) != 0) {
            v18 = v44;
            if (v44 >= v23) {
              v18 = v44 % v23;
            }
          }
          else {
            v18 = v44 & v47;
          }
          v48 = *(_QWORD**)(v125_.v128 + 8 * v18);
          if (v48 != nullptr) {
            for (i = (_QWORD*)*v48; i != nullptr; i = (_QWORD*)*i) {
              v52 = i[1];
              if (v52 == v45) {
                v53 = *((unsigned __int8*)i + 16);
                v54 = i[3];
                if ((v53 & 1) == 0) {
                  v54 = v53 >> 1;
                }
                if (v54 == v26) {
                  v55 = (v53 & 1) != 0 ? i[4] : (__int64)i + 17;
                  if (memcmp(v55, (__int64)v43, v26) == 0) {
                    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
                    goto LABEL_178;
                  }
                }
              }
              else {
                if ((v23 & v47) != 0) {
                  if (v52 >= v23) {
                    v52 %= v23;
                  }
                }
                else {
                  v52 &= v47;
                }
                if (v52 != v18) {
                  break;
                }
              }
            }
          }
          v24 = v46;
          v5 = (__int64*)fw_memory_g_heap_manager_ptr;
        }
        v50 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 56, 16, 0);
        i = v50;
        *v50 = 0;
        v50[1] = v45;
        if (v25 != 0) {
          fw_text_String_CopyTerminated(v50 + 2, v24, v117);
          v51 = v130_.v131;
        }
        else {
          v56 = v118_.v119;
          v50[2] = v118_.v118;
          v50[3] = v56;
          v50[4] = v118_.v120;
          v51 = v113;
        }
        v57 = v130_.v132;
        i[5] = 0;
        i[6] = 0;
        v58 = (float)(v51 + 1);
        if (v23 != 0 && (float)(v57 * (float)v23) >= v58) {
        LABEL_169:
          v83 = v125_.v128;
          v84 = *(_QWORD**)(v125_.v128 + 8 * v18);
          if (v84 != nullptr) {
            *i = *v84;
            *v84 = i;
          }
          else {
            v85 = v130_.v130;
            v130_.v130 = i;
            *i = v85;
            *(_QWORD*)(v83 + 8 * v18) = &v130_.v130;
            if (*i != 0) {
              v86 = *(_QWORD*)(*i + 8LL);
              if ((v23 & (v23 - 1)) != 0) {
                if (v86 >= v23) {
                  v86 %= v23;
                }
              }
              else {
                v86 &= v23 - 1;
              }
              *(_QWORD*)(v125_.v128 + 8 * v86) = i;
            }
          }
          ++v130_.v131;
          v25 = (unsigned __int8)v118_.v118 & 1;
        LABEL_178:
          i[5] = v114;
          i[6] = v115;
          v6 = v112;
          if (v25 == 0) {
            goto LABEL_9;
          }
          goto LABEL_179;
        }
        v59 = v23 < 3 || (v23 & (v23 - 1)) != 0;
        v60 = v59 | (2 * v23);
        v61 = vcvtps_u64_f32(v58 / v57);
        if (v60 <= v61) {
          primeEm = v61;
        }
        else {
          primeEm = v60;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = std___1___next_prime(primeEm);
        }
        v63 = v125_.v129;
        if (primeEm <= v125_.v129) {
          if (primeEm >= v125_.v129) {
            goto LABEL_164;
          }
          v68 = vcvtps_u64_f32((float)v130_.v131 / v130_.v132);
          if (v125_.v129 < 3 || (v125_.v129 & (v125_.v129 - 1)) != 0) {
            v68 = std___1___next_prime(v68);
          }
          else {
            v69 = 1LL << -(char)__clz(v68 - 1);
            if (v68 >= 2) {
              v68 = v69;
            }
          }
          if (primeEm <= v68) {
            primeEm = v68;
          }
          if (primeEm >= v63) {
            goto LABEL_164;
          }
          if (primeEm == 0) {
            v81 = v125_.v128;
            v125_.v128 = 0;
            if (v81 != 0) {
              v82 = 56;
              if (*(_QWORD*)(*v5 + 200) != 0) {
                v82 = 128;
              }
              nn_mem_StandardAllocator_Free(*v5 + v82, v81);
            }
            v125_.v129 = 0;
            goto LABEL_164;
          }
        }
        if (primeEm >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v64 = fw_memory_HeapManager_Allocate(*v5, 8 * primeEm, 16, 0);
        v65 = v125_.v128;
        v125_.v128 = v64;
        if (v65 != 0) {
          v66 = 56;
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v66 = 128;
          }
          nn_mem_StandardAllocator_Free(*v5 + v66, v65);
        }
        v125_.v129 = primeEm;
        if (primeEm >= 8) {
          v67 = 0;
          do {
            *(_QWORD*)(v125_.v128 + 8 * v67) = 0;
            *(_QWORD*)(v125_.v128 + 8 * v67 + 8) = 0;
            *(_QWORD*)(v125_.v128 + 8 * v67 + 16) = 0;
            *(_QWORD*)(v125_.v128 + 8 * v67 + 24) = 0;
            *(_QWORD*)(v125_.v128 + 8 * v67 + 32) = 0;
            *(_QWORD*)(v125_.v128 + 8 * v67 + 40) = 0;
            *(_QWORD*)(v125_.v128 + 8 * v67 + 48) = 0;
            v70 = v125_.v128 + 8 * v67;
            v67 += 8;
            *(_QWORD*)(v70 + 56) = 0;
          } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v67);
        }
        else {
          v67 = 0;
        }
        v71 = primeEm & 7;
        if ((primeEm & 7) != 0) {
          v72 = 8 * v67;
          do {
            --v71;
            *(_QWORD*)(v125_.v128 + v72) = 0;
            v72 += 8;
          } while (v71 != 0);
        }
        v73 = (_QWORD**)v130_.v130;
        if (v130_.v130 != nullptr) {
          v74 = v130_.v130[1];
          v75 = primeEm - 1;
          if ((primeEm & (primeEm - 1)) != 0) {
            if (v74 >= primeEm) {
              v74 %= primeEm;
            }
            *(_QWORD*)(v125_.v128 + 8 * v74) = &v130_.v130;
            v76 = *v73;
            if (*v73 == nullptr) {
              goto LABEL_164;
            }
            while (1) {
              v77 = v76[1];
              if (v77 >= primeEm) {
                v77 %= primeEm;
              }
              if (v77 != v74) {
                if (*(_QWORD*)(v125_.v128 + 8 * v77) == 0) {
                  *(_QWORD*)(v125_.v128 + 8 * v77) = v73;
                  goto LABEL_141;
                }
                *v73 = (_QWORD*)*v76;
                *v76 = **(_QWORD**)(v125_.v128 + 8 * v77);
                **(_QWORD**)(v125_.v128 + 8 * v77) = v76;
                v76 = v73;
              }
              v77 = v74;
            LABEL_141:
              v73 = (_QWORD**)v76;
              v76 = (_QWORD*)*v76;
              v74 = v77;
              if (v76 == nullptr) {
                goto LABEL_164;
              }
            }
          }
          v78 = v74 & v75;
          *(_QWORD*)(v125_.v128 + 8 * v78) = &v130_.v130;
          while (1) {
            v79 = *v73;
            if (*v73 == nullptr) {
              break;
            }
            v80 = v79[1] & v75;
            if (v80 == v78) {
              v73 = (_QWORD**)*v73;
            }
            else if (*(_QWORD*)(v125_.v128 + 8 * v80) != 0) {
              *v73 = (_QWORD*)*v79;
              *v79 = **(_QWORD**)(v125_.v128 + 8 * v80);
              **(_QWORD**)(v125_.v128 + 8 * v80) = v79;
            }
            else {
              *(_QWORD*)(v125_.v128 + 8 * v80) = v73;
              v73 = (_QWORD**)v79;
              v78 = v80;
            }
          }
        }
      LABEL_164:
        v23 = v125_.v129;
        if ((v23 & (v23 - 1)) != 0) {
          if (v45 >= v125_.v129) {
            v18 = v45 % v125_.v129;
          }
          else {
            v18 = v45;
          }
        }
        else {
          v18 = (v125_.v129 - 1) & v45;
        }
        goto LABEL_169;
      }
    }
  LABEL_4:
    v4 = v110 + 8;
  } while (v110 + 8 != v108);
  v118_.v119 = &GameData_1aed8b3;
  v88 = (__int64 (**)(void))game_HashString((__int64)&GameData_1aed8b3);
  v89 = game_GameModeData_instance_;
  v118_.v118 = v88;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_186;
  }
  v90 =
      game_GameVariableTable_Find(*(_QWORD**)(game_GameModeData_instance_ + 48),
                                  (unsigned __int64*)&v118_.v118);
  if (v90 != 0) {
    v89 = *(_DWORD*)(v90 + 32);
  LABEL_186:
    if (v130_.v131 != 0) {
    LABEL_187:
      v91 = v130_.v130;
      v92 = &v118_.v118;
      LODWORD(v118_.v119) = v89;
      v118_.v118 = GameData_1fb0a10;
      v118_.v121 = (unsigned __int64*)&v118_.v118;
      if (v130_.v130 == nullptr) {
        goto LABEL_193;
      }
      do {
        v93 = v91[6];
        v122_.v122 = (__int64 (**)(void))v91[5];
        v133 = v93;
        if (v118_.v121 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        (*(void (**)(unsigned __int64*, __int64 (***)(void), __int64*))(
            *v118_.v121 + 48))(v118_.v121, &v122_.v122, &v133);
        v91 = (_QWORD*)*v91;
      } while (v91 != nullptr);
      v92 = (__int64 (***)(void))v118_.v121;
      if (v118_.v121 == (unsigned __int64*)&v118_.v118) {
      LABEL_193:
        v94 = 4;
      LABEL_194:
        ((__int64 (*)(__int64))(*v92)[v94])((__int64)v92);
      }
      else if (v118_.v121 != nullptr) {
        v94 = 5;
        goto LABEL_194;
      }
      v95 = *(__int64**)(*(_QWORD*)GameData_212c7b8[0] + 16LL);
      v96 = *(__int64**)(*(_QWORD*)GameData_212c7b8[0] + 24LL);
      while (v95 != v96) {
        v97 = *v95++;
        GameHr_12b3d60(v97);
      }
    }
  }
  else {
    v89 = 0;
    if (v130_.v131 != 0) {
      goto LABEL_187;
    }
  }
  v4 = (__int64)v125_.v125;
LABEL_198:
  if (v4 != 0) {
    v98 = *v5;
    v125_.v126 = v4;
    v99 = 128;
    if (*(_QWORD*)(v98 + 200) == 0) {
      v99 = 56;
    }
    nn_mem_StandardAllocator_Free(v98 + v99, v4);
  }
  v100 = v130_.v130;
  while (v100 != nullptr) {
    v102 = (__int64)v100;
    v100 = (_QWORD*)*v100;
    if ((*(_BYTE*)(v102 + 16) & 1) != 0 && *(_QWORD*)(v102 + 32) != 0) {
      v103 = v102;
      v104 = *(_QWORD*)(v102 + 32);
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v105 = 128;
      }
      else {
        v105 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v105, v104);
      v102 = v103;
    }
    if (*(_QWORD*)(*v5 + 200) != 0) {
      v101 = 128;
    }
    else {
      v101 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v101, v102);
  }
  v106 = v125_.v128;
  v125_.v128 = 0;
  if (v106 != 0) {
    v107 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v107 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v107, v106);
  }
}

__int64 GameHr_9c0680(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  int v18;
  __int64* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  signed __int64 v37;
  const char* v38;
  __int64 v39;
  _BYTE v40[200];

  v2 = *(_QWORD*)(*a1 + 336LL);
  if (v2 == 0) {
    return 1;
  }
  v3 = GameRoutine_1a0a6c0(v2, GameData_212e008[0], &GameData_1fb5cb0, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) == 0) {
    v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)(*(__int64 (**)(__int64))(
                               *(_QWORD*)v4 + 560LL))(v4));
    if ((((0x10000000000LL << *(_BYTE*)(v11 + 72)) |
          (1LL << *(_BYTE*)(v11 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      return 3;
    }
    if (*(_WORD*)(*(_QWORD*)(v4 + 104) + 2LL) == 0) {
      return 3;
    }
    if ((GameRoutine_9c12a0(v4) & 1) != 0) {
      return 3;
    }
    v12 = *GameData_212d7d8[0];
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
    if ((GameRoutine_89bb10(v12 + 8, v13) & 1) != 0) {
      return 3;
    }
    return 2;
  }
  if (*(_BYTE*)(v4 + 88) != 1) {
    if (a1[2] - a1[1] > 0x1F30u) {
      return 3;
    }
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
    v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                     8LL * *(unsigned __int16*)v14);
    if ((((0x10000000000LL << *(_BYTE*)(v15 + 72)) |
          (1LL << *(_BYTE*)(v15 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      v16 = (__int64*)a1[1];
      v17 = (__int64*)a1[2];
      if (v16 == v17) {
        v20 = 1;
      }
      else {
        v18 = 0;
        v19 = GameData_212e008[0];
        do {
          v14 = *v16;
          if (*v16 != 0) {
            v14 = GameRoutine_1a0a6c0(v14, v19, &GameData_1fb5cb0, 0);
            if (v14 != 0) {
              v18 += *(_DWORD*)(v14 + 84);
            }
          }
          ++v16;
        } while (v16 != v17);
        v20 = v18 + 1;
      }
      if (*(_DWORD*)(*(_QWORD*)(*GameData_212d7d8[0] + 16) + 84LL) + v20 >
          *(_DWORD*)(*(_QWORD*)(*GameData_212d7d8[0] + 16) + 72LL)) {
        return 2;
      }
    LABEL_39:
      v23 = a1[3];
      if ((unsigned __int64)v17 >= v23) {
        v25 = a1[1];
        v26 = (char*)v17 - v25;
        v27 = ((__int64)v17 - v25) >> 3;
        v28 = v27 + 1;
        if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
          GameRoutine_9c2e00();
        }
        v29 = v23 - v25;
        v30 = GameData_212bf68;
        if (v29 >> 2 > v28) {
          v28 = v29 >> 2;
        }
        if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
          v31 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v28;
        }
        if (v31 != 0) {
          if (v31 >> 61 != 0) {
            GameRoutine_60a210(v14);
          }
          v32 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v31, 16, 0);
        }
        else {
          v32 = 0;
        }
        v33 = v32 + 8 * v31;
        v34 = (char*)v17 - v25;
        v35 = (__int64)&v26[v32 + -8 * v27];
        *(_QWORD*)&v26[v32] = v4;
        v24 = (__int64)&v26[v32 + 8];
        GameRoutine_1a0b950(v35, v25, v34);
        a1[1] = v35;
        a1[2] = v24;
        a1[3] = v33;
        if (v25 != 0) {
          v36 = 128;
          if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
            v36 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v30 + v36, v25);
        }
      }
      else {
        *v17 = v4;
        v24 = (__int64)(v17 + 1);
      }
      a1[2] = v24;
      goto LABEL_62;
    }
    v21 = *GameData_212d7d8[0];
    v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
    v14 = GameRoutine_89bb10(v21 + 8, v22);
    if ((v14 & 1) != 0) {
      v17 = (__int64*)a1[2];
      goto LABEL_39;
    }
    return 2;
  }
  v6 = (char*)a1[1];
  v5 = (char*)a1[2];
  if (v6 != v5) {
    v7 = v5 - v6 - 8;
    if ((~(_BYTE)v7 & 0x18) != 0) {
      v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
      while (v4 != *(_QWORD*)v6) {
        v6 += 8;
        if (--v8 == 0) {
          goto LABEL_10;
        }
      }
      goto LABEL_59;
    }
  LABEL_10:
    if (v7 >= 0x18) {
      v6 += 16;
      while (1) {
        if (v4 == *((_QWORD*)v6 - 2)) {
          v6 -= 16;
          goto LABEL_59;
        }
        if (v4 == *((_QWORD*)v6 - 1)) {
          v6 -= 8;
          goto LABEL_59;
        }
        if (v4 == *(_QWORD*)v6) {
          goto LABEL_59;
        }
        if (v4 == *((_QWORD*)v6 + 1)) {
          break;
        }
        v9 = v6 + 16;
        v6 += 32;
        if (v9 == v5) {
          goto LABEL_62;
        }
      }
      v6 += 8;
    LABEL_59:
      v37 = v5 - (v6 + 8);
      if (v5 != v6 + 8) {
        GameRoutine_1a0b940(v6, v6 + 8, v5 - (v6 + 8));
      }
      a1[2] = &v6[v37];
    }
  }
LABEL_62:
  if (*(_BYTE*)(v4 + 88) != 0) {
    v38 = "SE_SYS_Multiple_Cancel";
  }
  else {
    v38 = "SE_SYS_Multiple_Select";
  }
  GameRoutine_10c830(v40, 0.0f);
  GameRoutine_ff2d0((void*)(&v39), v38, v38, v40, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v40);
  GameRoutine_1872af0(v4, (*(_BYTE*)(v4 + 88) & 1) == 0);
  return 0;
}

_QWORD* GameHr_a09090(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = X8CALL_X0(__typeof__(result),
                     GameRoutine_1366ac0((void*)(&v7), "Layout/Title.arc",
                                         "Title_ModeSelectBg"));
  v3 = v7;
  v4 = v8;
  v5 = *(_QWORD*)(a1 + 168);
  v7 = 0;
  v8 = 0;
  *(_QWORD*)(a1 + 160) = v3;
  *(_QWORD*)(a1 + 168) = v4;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = (_QWORD*)GameRoutine_1a09c50(v5);
  }
  v6 = v8;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return (_QWORD*)GameRoutine_1a09c50(v6);
  }
  return result;
}

__int64 GameHr_a09140(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  _QWORD v9[2];
  _QWORD v10[2];
  _BYTE v11[200];

  v1 = *(_QWORD*)(result + 160);
  v2 = result;
  if (v1 != 0) {
    if (*(_BYTE*)(v1 + 24) != 1) {
      return result;
    }
    v3 = *(_QWORD*)(result + 168);
    v10[0] = *(_QWORD*)(result + 160);
    v10[1] = v3;
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_155dda0(result + 176, v10);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        GameRoutine_1a09c50(v3);
      }
    }
    else {
      GameRoutine_155dda0(result + 176, v10);
    }
    GameRoutine_155e830(v2 + 176, 1);
    GameRoutine_1562680(v2 + 176, "Loop", 1.0f);
  }
  GameRoutine_10c830(v11, 0.0f);
  GameRoutine_ff2d0((void*)(v9), "AMB_UnderWater_Near_4ch",
                    "AMB_UnderWater_Near_4ch", v11, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v11);
  result = GameRoutine_112180(v2 + 280, v9);
  v4 = *(unsigned __int8**)(v2 + 16);
  if (v4 != nullptr) {
    v5 = *v4;
    v6 = v5 > 0x10;
    v7 = (1 << v5) & 0x1CE00;
    if (!v6 && v7 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

__int64 GameHr_a09b60(__int64 a1)
{
  __int64 result;
  __int64 v3;
  char v4;
  _BYTE v5[200];

  GameRoutine_10c830(v5, 0.0f);
  GameRoutine_ffc40(a1 + 280, v5);
  result = GameRoutine_10cff0(v5);
  v3 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    *(_BYTE*)(GameData_21caab0 + 12) = *(_BYTE*)(a1 + 152);
    v4 = *(_BYTE*)(a1 + 153);
    *(_BYTE*)(v3 + 13) = v4;
    *(_BYTE*)(v3 + 14) = v4;
  }
  return result;
}

__int64 GameHr_a09bd0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  *a1 = GameData_1fbb360;
  a1[22] = GameData_1fbb7b8;
  v2 = a1 + 138;
  v3 = (_QWORD*)a1[142];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[136];
  if (v5 == a1 + 132) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  return GameRoutine_16dd440(a1);
}

__int64 GameHr_a09c70(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  *a1 = GameData_1fbb360;
  a1[22] = GameData_1fbb7b8;
  v2 = a1 + 138;
  v3 = (_QWORD*)a1[142];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[136];
  if (v5 == a1 + 132) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  GameRoutine_16dd440(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v7 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, a1);
}

__int64 GameHr_a0a1e0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  *a1 = GameData_1fbb360;
  a1[22] = GameData_1fbb7b8;
  v2 = a1 + 138;
  v3 = (_QWORD*)a1[142];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[136];
  if (v5 == a1 + 132) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  GameRoutine_16dd440(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v7 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, a1);
}

__int64 GameHr_a0a7f0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  *a1 = GameData_1fbc178;
  a1[22] = GameData_1fbc5d0;
  v2 = a1 + 138;
  v3 = (_QWORD*)a1[142];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[136];
  if (v5 == a1 + 132) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  return GameRoutine_16dd440(a1);
}

__int64 GameHr_a0a890(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  *a1 = GameData_1fbc178;
  a1[22] = GameData_1fbc5d0;
  v2 = a1 + 138;
  v3 = (_QWORD*)a1[142];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[136];
  if (v5 == a1 + 132) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  GameRoutine_16dd440(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v7 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, a1);
}

__int64 GameHr_a0adf0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  *a1 = GameData_1fbc178;
  a1[22] = GameData_1fbc5d0;
  v2 = a1 + 138;
  v3 = (_QWORD*)a1[142];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = (_QWORD*)a1[136];
  if (v5 == a1 + 132) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  GameRoutine_16dd440(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v7 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, a1);
}

_QWORD* GameHr_a0d9a0(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
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

  v2 = (_QWORD*)(a1 + 192);
  result = *(_QWORD**)(a1 + 224);
  if (result == v2) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
LABEL_6:
  if (*(_BYTE*)(a1 + 160) == 1) {
    if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
      v5 = *(_QWORD*)(a1 + 152);
      if (v5 != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v6 = 56;
        }
        result =
            (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6, v5);
      }
    }
    if ((*(_BYTE*)(a1 + 112) & 1) != 0) {
      v7 = *(_QWORD*)(a1 + 128);
      if (v7 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v8 = 56;
        }
        result =
            (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8, v7);
      }
    }
    if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
      v9 = *(_QWORD*)(a1 + 104);
      if (v9 != 0) {
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v10 = 56;
        }
        result =
            (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10, v9);
      }
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 32);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v12 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12, v11);
    }
  }
  v13 = *(_QWORD*)(a1 + 8);
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return (_QWORD*)GameRoutine_1a09c50(v13);
  }
  return result;
}

__int64 GameHr_a0f3d0(__int64 a1)
{
  _QWORD* v2;

  *(_QWORD*)a1 = GameData_1fbceb0;
  *(_QWORD*)(a1 + 152) = GameData_1fbcf60;
  v2 = (_QWORD*)(a1 + 152);
  GameRoutine_1958ed0(a1 + 152, a1);
  *v2 = GameData_2119728;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  GameRoutine_1418c20();
  GameData_21fa488 = 0;
  *(_QWORD*)a1 = GameData_1f8f7e8;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  GameRoutine_65a940(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 GameHr_a0f4b0(__int64 a1)
{
  _QWORD* v2;
  __int64 v4;

  *(_QWORD*)a1 = GameData_1fbceb0;
  *(_QWORD*)(a1 + 152) = GameData_1fbcf60;
  v2 = (_QWORD*)(a1 + 152);
  GameRoutine_1958ed0(a1 + 152, a1);
  *v2 = GameData_2119728;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  GameRoutine_1418c20();
  GameData_21fa488 = 0;
  *(_QWORD*)a1 = GameData_1f8f7e8;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  GameRoutine_65a940(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v4 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, a1);
}

unsigned __int64 GameHr_a166a0(unsigned __int64 result, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  unsigned __int64* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64*** v15;
  __int64** v16;
  unsigned __int64 v17;
  __int64* v18;
  float v19;
  unsigned __int64 v20;
  float v21;
  float v22;
  _BOOL8 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;

  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  v4 = result;
  *(_DWORD*)(result + 32) = *(_DWORD*)(a2 + 32);
  v5 = *(_QWORD*)(a2 + 8);
  if (v5 == 1) {
    v5 = 2;
  LABEL_17:
    result = GameRoutine_82f300(v4, v5);
    goto LABEL_18;
  }
  if ((v5 & (v5 - 1)) != 0) {
    result = GameRoutine_1a09d00(v5);
    v2 = *(_QWORD*)(v4 + 8);
    v5 = result;
    v6 = result >= v2;
    if (result > v2) {
      goto LABEL_17;
    }
  }
  else {
    v2 = 0;
    v6 = true;
    if (v5 != 0) {
      goto LABEL_17;
    }
  }
  if (!v6) {
    result = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) /
                            *(float*)(v4 + 32));
    if (v2 < 3 || (v2 & (v2 - 1)) != 0) {
      v8 = v5;
      result = GameRoutine_1a09d00(result);
      v5 = v8;
    }
    else {
      v7 = 1LL << -(char)__clz(result - 1);
      if (result >= 2) {
        result = v7;
      }
    }
    if (v5 <= result) {
      v5 = result;
    }
    if (v5 < v2) {
      goto LABEL_17;
    }
  }
LABEL_18:
  v9 = *(__int64**)(a2 + 16);
  if (v9 != nullptr) {
    v10 = (unsigned __int64*)(v4 + 16);
    v11 = (_QWORD*)GameData_212bf68;
    do {
      v12 = *((unsigned __int16*)v9 + 8);
      v13 = *(_QWORD*)(v4 + 8);
      if (v13 != 0) {
        v14 = v13 - 1;
        if ((v13 & (v13 - 1)) != 0) {
          v2 = *((unsigned __int16*)v9 + 8);
          if (v13 <= v12) {
            v2 = (unsigned int)v12 % (unsigned int)v13;
          }
        }
        else {
          v2 = ((_DWORD)v13 - 1) & (unsigned int)v12;
        }
        v15 = *(__int64****)(*(_QWORD*)v4 + 8 * v2);
        if (v15 != nullptr) {
          v16 = *v15;
          if (v16 != nullptr) {
            if ((v13 & v14) == 0) {
              while (1) {
                v18 = v16[1];
                if (v18 == (__int64*)v12) {
                  if (*((unsigned __int16*)v16 + 8) == (_DWORD)v12) {
                    goto LABEL_77;
                  }
                }
                else if (((unsigned __int64)v18 & v14) != v2) {
                  goto LABEL_40;
                }
                v16 = (__int64**)*v16;
                if (v16 == nullptr) {
                  goto LABEL_40;
                }
              }
            }
            do {
              v17 = (unsigned __int64)v16[1];
              if (v17 == v12) {
                if (*((unsigned __int16*)v16 + 8) == (_DWORD)v12) {
                  goto LABEL_77;
                }
              }
              else {
                if (v17 >= v13) {
                  v17 %= v13;
                }
                if (v17 != v2) {
                  break;
                }
              }
              v16 = (__int64**)*v16;
            } while (v16 != nullptr);
          }
        }
      }
    LABEL_40:
      result = GameRoutine_651b90(*v11, 24, 16, 0);
      *(_QWORD*)result = 0;
      *(_QWORD*)(result + 8) = v12;
      v19 = *(float*)(v4 + 32);
      v20 = result;
      *(_DWORD*)(result + 16) = *((_DWORD*)v9 + 4);
      v21 = (float)(unsigned __int64)(*(_QWORD*)(v4 + 24) + 1LL);
      if (v13 == 0 || (float)(v19 * (float)v13) < v21) {
        v22 = v21 / v19;
        v23 = (v13 & (v13 - 1)) != 0;
        if (v13 < 3) {
          v23 = true;
        }
        v24 = v23 | (2 * v13);
        v25 = vcvtps_u64_f32(v22);
        if (v24 <= v25) {
          v26 = v25;
        }
        else {
          v26 = v24;
        }
        if (v26 == 1) {
          v26 = 2;
        }
        else if ((v26 & (v26 - 1)) != 0) {
          result = GameRoutine_1a09d00(v26);
          v13 = *(_QWORD*)(v4 + 8);
          v26 = result;
        }
        if (v26 > v13) {
          goto LABEL_52;
        }
        if (v26 < v13) {
          result = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 24) /
                                  *(float*)(v4 + 32));
          if (v13 < 3 || (v13 & (v13 - 1)) != 0) {
            result = GameRoutine_1a09d00(result);
          }
          else {
            v27 = 1LL << -(char)__clz(result - 1);
            if (result >= 2) {
              result = v27;
            }
          }
          if (v26 <= result) {
            v26 = result;
          }
          if (v26 < v13) {
          LABEL_52:
            result = GameRoutine_82f300(v4, v26);
          }
        }
        v13 = *(_QWORD*)(v4 + 8);
        if ((v13 & (v13 - 1)) != 0) {
          if (v13 <= v12) {
            v2 = v12 % v13;
          }
          else {
            v2 = v12;
          }
        }
        else {
          v2 = ((_DWORD)v13 - 1) & (unsigned int)v12;
        }
      }
      v28 = *(_QWORD*)v4;
      v29 = *(unsigned __int64**)(*(_QWORD*)v4 + 8 * v2);
      if (v29 != nullptr) {
        *(_QWORD*)v20 = *v29;
        *v29 = v20;
      }
      else {
        v30 = *v10;
        *v10 = v20;
        *(_QWORD*)v20 = v30;
        *(_QWORD*)(v28 + 8 * v2) = v10;
        if (*(_QWORD*)v20 != 0) {
          v31 = *(_QWORD*)(*(_QWORD*)v20 + 8LL);
          if ((v13 & (v13 - 1)) != 0) {
            if (v31 >= v13) {
              v31 %= v13;
            }
          }
          else {
            v31 &= v13 - 1;
          }
          *(_QWORD*)(*(_QWORD*)v4 + 8 * v31) = v20;
        }
      }
      ++*(_QWORD*)(v4 + 24);
    LABEL_77:
      v9 = (__int64*)*v9;
    } while (v9 != nullptr);
  }
  return result;
}

#pragma GCC visibility pop
