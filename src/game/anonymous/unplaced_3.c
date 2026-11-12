#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_19bb9c0(__int64);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_16050d0(PSEUDO_X8, unsigned int);
__attribute__((swiftcall)) void game_16051a0(PSEUDO_X8, unsigned int);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameConverge_8e7ca0(__int64, unsigned __int64*);
__int64 GameHr_12f4020(__int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_717c70(__int64 result, __int64*);
__int64 GameRoutine_19bccb0(__int64 result, unsigned int, __int64*);
__int64 GameRoutine_64be60();
__int64 GameRoutine_99cee0(__int64);
__int64 Registration_a4da40(__int64, __int64);
__int64 Stream_Unknown2(__int64, unsigned int*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_anonymous_ProcAfterEpisodeSeq_Face_SetGrayScale(__int64 result,
                                                             unsigned int,
                                                             __int64*);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
bool GameRoutine_19bc360(__int64);
bool ProcAfterEpisodeSeq_19bcbf0(__int64);
bool game_877f00(const char**, __int64, __int64);
char* GameRoutine_60a020(char*, const char*);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* Registration_a4db40(__int64, _BYTE*);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_1a87af2;
extern _UNKNOWN GameData_1ad1093;
extern __int64 (*GameData_20249d8[])();
extern __int64 (*GameData_2024a58[])();
extern __int64 (*GameData_2024ad8[])();
extern __int64* GameData_212ce00[7];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21c9d40;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f4280;
extern __int64 GameData_21f42d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
int strcmp(const char*, const char*);
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
unsigned __int64 strlen(const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void Stream_Unknown3(__int64, int);
void __attribute__((noreturn)) String_60a1d0();
void game_112d480(__int64, char, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
void game_anonymous_87d740(__int64 a1);
__int64 game_anonymous_17b3f50();
__int64 game_anonymous_17b40c0();
__int64 game_anonymous_17b4900();
void game_anonymous_19b8620(__int64 a1);
__int64 game_anonymous_19b8a70(__int64 a1);
void game_anonymous_19b8ca0(__int64 a1);
__int64 game_anonymous_19b9520(__int64 a1);

void game_anonymous_87d740(__int64 a1)
{
  unsigned __int64 v1;
  const char* v2;
  bool v4;
  const char* v5;
  __int64 v6;
  const char* v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  const char* v11[2];

  v1 = *(unsigned __int8*)(a1 + 152);
  v2 = (const char*)(a1 + 153);
  v4 = (v1 & 1) == 0;
  v5 = (const char*)(v1 >> 1);
  if (!v4) {
    v2 = *(const char**)(a1 + 168);
    v5 = *(const char**)(a1 + 160);
  }
  v11[0] = v2;
  v11[1] = v5;
  if (game_877f00(v11, a1 + 224, a1 + 352)) {
    LODWORD(v11[0]) = 0;
    if ((Stream_Unknown2(a1 + 352, (unsigned int*)v11) & 1) != 0) {
      v6 = GameData_21ca310;
      v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)GameData_21ca310 +
                                                  24LL))(GameData_21ca310);
      v8 = (unsigned int)game_HashString32(v7);
      v9 = *(_QWORD*)(a1 + 352);
      LODWORD(v11[0]) = v8;
      if (((*(__int64 (**)(__int64, const char**))(v9 + 16))(a1 + 352, v11) &
           1) != 0) {
        v10 = *(int*)(a1 + 372);
        *(_DWORD*)(a1 + 372) = v10 + 1;
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)v6 + 64LL))(
            v6, a1 + 352, *(unsigned __int8*)(*(_QWORD*)(a1 + 360) + v10));
      }
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 352) + 24LL))(a1 + 352, 0);
      GameHr_717c70(a1 + 224, (__int64*)(a1 + 352));
    }
    Stream_Unknown3(a1 + 352, 0);
  }
}

__int64 game_anonymous_17b3f50()
{
  __int64 v0;
  struct {
    _QWORD v2[4];
    _QWORD* v3;
  } v2_;

  v2_.v2[0] = GameData_20249d8;
  v2_.v3 = v2_.v2;
  GameHr_12f4020((__int64)v2_.v2);
  if (v2_.v3 == v2_.v2) {
    v0 = 32;
    goto LABEL_5;
  }
  if (v2_.v3 != nullptr) {
    v0 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v2_.v3 + v0))((__int64)v2_.v3);
  }
  return 13;
}

__int64 game_anonymous_17b40c0()
{
  __int64 v0;
  struct {
    _QWORD v2[4];
    _QWORD* v3;
  } v2_;

  v2_.v2[0] = GameData_2024a58;
  v2_.v3 = v2_.v2;
  GameHr_12f4020((__int64)v2_.v2);
  if (v2_.v3 == v2_.v2) {
    v0 = 32;
    goto LABEL_5;
  }
  if (v2_.v3 != nullptr) {
    v0 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v2_.v3 + v0))((__int64)v2_.v3);
  }
  return 13;
}

__int64 game_anonymous_17b4900()
{
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  if (*(int*)(*(_QWORD*)(GameData_21f42d0 + 8) + 144LL) > 0 ||
      *(int*)(*(_QWORD*)(GameData_21f4280 + 8) + 72LL) >= 1) {
    v4_.v4[0] = GameData_2024ad8;
    v4_.v5 = v4_.v4;
    GameHr_12f4020((__int64)v4_.v4);
    if (v4_.v5 == v4_.v4) {
      v2 = 32;
      goto LABEL_7;
    }
    if (v4_.v5 != nullptr) {
      v2 = 40;
    LABEL_7:
      (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
    }
  }
  return 13;
}

void game_anonymous_19b8620(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  float v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  int v17;
  __int64 v18;
  unsigned __int64* v19;

  v2 = game_HashString((__int64)&GameData_1a87af2);
  v3 = *(_QWORD*)(GameData_21c9d40 + 96);
  if ((v3 & (v3 - 1)) != 0) {
    v4 = v2;
    if (v2 >= v3) {
      v4 = v2 % v3;
    }
    v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d40 + 88) + 8 * v4);
    do {
      do {
        v5 = (_QWORD*)*v5;
      } while (v5[1] != v2);
    } while (v5[2] != v2);
  }
  else {
    v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d40 + 88) + 8 * ((v3 - 1) & v2));
    do {
      do {
        v5 = (_QWORD*)*v5;
      } while (v5[1] != v2);
    } while (v5[2] != v2);
  }
  v6 = *(_DWORD*)(v5[3] + 32LL);
  *(_DWORD*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 228) = v6;
  v7 = game_HashString((__int64)&GameData_1ad1093);
  v8 = *(_QWORD*)(GameData_21c9d40 + 96);
  if ((v8 & (v8 - 1)) != 0) {
    v9 = v7;
    if (v7 >= v8) {
      v9 = v7 % v8;
    }
    v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d40 + 88) + 8 * v9);
    do {
      do {
        v10 = (_QWORD*)*v10;
      } while (v10[1] != v7);
    } while (v10[2] != v7);
  }
  else {
    v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d40 + 88) + 8 * ((v8 - 1) & v7));
    do {
      do {
        v10 = (_QWORD*)*v10;
      } while (v10[1] != v7);
    } while (v10[2] != v7);
  }
  v11 = *(float*)(v10[3] + 32LL);
  v12 = *(_QWORD*)(a1 + 184);
  *(float*)(a1 + 236) = v11 / 0x1.0aaaaa0000000p+4f;
  v13 = *(__int64**)(v12 + 16);
  if (ProcAfterEpisodeSeq_19bcbf0((__int64)v13) && *v13 != 0) {
    v14 = v13[2];
    if (v14 != 0) {
      if ((*(_BYTE*)(v14 + 416) & 8) == 0) {
        goto LABEL_29;
      }
    LABEL_28:
      v16 = "Death";
      v17 = 2;
      goto LABEL_33;
    }
    v15 = game_GameModeData_instance_;
    GameRoutine_682bc0(&v19, *(_QWORD*)(*v13 + 32));
    if ((GameConverge_8e7ca0(*(_QWORD*)(v15 + 176), v19) & 1) == 0 &&
        v13[1] != 0) {
      goto LABEL_28;
    }
  }
LABEL_29:
  if (ProcAfterEpisodeSeq_19bcbf0((__int64)v13)) {
    v17 = 0;
    v16 = "Solo";
  }
  else {
    if (!GameRoutine_19bc360((__int64)v13)) {
      goto LABEL_34;
    }
    v16 = "Pair";
    v17 = 1;
  }
LABEL_33:
  *(_DWORD*)(a1 + 192) = v17;
  GameHr_1562680(a1 + 256, v16, 0x1.0000000000000p+0f);
LABEL_34:
  GameRoutine_19bccb0(a1, 0, v13);
  GameRoutine_19bccb0(a1, 1u, v13 + 11);
  v18 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 256),
                                      (__int64)"T_Epilogue");
  if (v18 != 0) {
    GameRoutine_156c5d0(v18, (__int64)&GameData_1a9f09e, 0);
  }
}

__int64 game_anonymous_19b8a70(__int64 a1)
{
  __int64* v2;

  v2 = *(__int64**)(*(_QWORD*)(a1 + 184) + 16LL);
  game_anonymous_ProcAfterEpisodeSeq_Face_SetGrayScale(a1, 0, v2);
  return game_anonymous_ProcAfterEpisodeSeq_Face_SetGrayScale(a1, 1u, v2 + 11);
}

void game_anonymous_19b8ca0(__int64 a1)
{
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23[2];
    __int64 v24;
  } v23_;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v25_;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 184) + 16LL);
  v3 = *(_BYTE*)(v2 + 176);
  v4 = *(_QWORD*)(v2 + 192);
  v5 = v2 + 177;
  if ((v3 & 1) != 0) {
    v6 = v4;
  }
  else {
    v6 = v5;
  }
  if (v6 != 0) {
    v7 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 256),
                                       (__int64)"T_Epilogue");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  v8 = *(_QWORD*)(a1 + 184);
  *(_DWORD*)(a1 + 220) = 0;
  v25_.v26 = 0;
  v25_.v27 = 0;
  v9 = *(_QWORD**)(v8 + 16);
  v25_.v25 = 0;
  v10 = v9 + 22;
  if ((v9[22] & 1) != 0) {
    fw_text_String_CopyTerminated(v23_.v23, v9[24], v9[23]);
  }
  else {
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v23_.v23[0] = v11;
    v23_.v23[1] = v12;
    v23_.v24 = v13;
  }
  game_112d480((__int64)v23_.v23, 10, (__int64)&v25_.v25);
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v23_.v24);
  }
  v16 = v25_.v25;
  v15 = v25_.v26;
  *(_DWORD*)(a1 + 224) =
      -1431655765 * ((unsigned __int64)(v25_.v26 - v25_.v25) >> 3);
  if (v16 != 0) {
    if (v16 == v15) {
      goto LABEL_26;
    }
    v17 = v15;
    v18 = fw_memory_g_heap_manager_ptr;
    do {
      v19 = *(_BYTE*)(v17 - 24);
      v17 -= 24;
      if ((v19 & 1) != 0) {
        v20 = *(_QWORD*)(v15 - 8);
        if (v20 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v21, v20);
        }
      }
      v15 = v17;
    } while (v17 != v16);
    v25_.v26 = v16;
    v16 = v25_.v25;
    if (v25_.v25 != 0) {
    LABEL_26:
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v16);
    }
  }
}

__int64 game_anonymous_19b9520(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  const char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  const char* v28;
  _BOOL4 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  const char** v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64* v39;
  const char** v40;
  __int64 result;
  char v42;
  __int64 v43;
  const char** v44;
  __int64 v45;
  __int64 v46;
  _BYTE* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  char* v70;
  __int64 v71;
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  const char** v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  int v81;
  unsigned __int64 v82;
  __int64* v83;
  char* v84;
  char v85;
  __int64 v86;
  char v87;
  __int64 v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  const char* v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  const char** v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  __int64* v100;
  char* v101;
  __int64 v102;
  const char** v103;
  const char* v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  char* v107;
  __int64* v108;
  const char** v109;
  __int64 v110;
  unsigned __int64 v111;
  char* v112;
  char v113;
  __int64 v114;
  char v115;
  __int64 v116;
  __int64* v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  bool v121;
  unsigned __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64* v126;
  char* v127;
  char v128;
  __int64 v129;
  char* v130;
  char v131;
  __int64 v132;
  const char** v133;
  unsigned __int64 v134;
  __int64 v135;
  _BYTE* v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  char* v143;
  char v144;
  char* v145;
  char* v146;
  _BYTE* v147;
  char v148;
  __int64 v149;
  __int64 v150;
  __int64* v151;
  __int64 v152;
  char* v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  char* v156;
  __int64 v157;
  const char** v158;
  const char* v159;
  const char* v160;
  __int64 v161;
  __int64 v162;
  const char* v163;
  const char* v164;
  __int64 v165;
  __int64 v166;
  const char* v167;
  const char* v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  _BYTE* v172;
  char* v173;
  const char* v174;
  __int64 v175;
  char* v176;
  _BYTE* v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  struct {
    _QWORD v183[2];
    char* v184;
  } v183_;
  struct {
    _QWORD v185[2];
    char* v186;
  } v185_;
  struct {
    _QWORD v187[2];
    char* v188;
  } v187_;
  struct {
    __int64 v189;
    char* v190;
    char* v191;
  } v189_;
  struct {
    const char* v192;
    char* v193;
    _BYTE* v194;
    __int64 v195;
    __int64 v196;
  } v192_;
  struct {
    unsigned __int64* v197;
    unsigned __int64 v198;
    unsigned __int64 v199;
    __int64 (*v200)();
    unsigned __int64 v201;
  } v197_;
  struct {
    _QWORD v202[2];
    __int64 v203;
    __int64 v204;
    __int64 v205;
    __int64 v206;
    __int64 v207;
    __int64 v208;
    __int64 v209;
    __int64 v210;
    __int64 v211;
    __int64 v212;
    __int64 v213;
    char gap288_[152];
    _QWORD* v214;
  } v202_;
  struct {
    _QWORD v215[2];
    __int64 v216;
    __int64 v217;
    __int64 v218;
  } v215_;
  struct {
    unsigned __int64** v219;
    __int64 v220;
    const char** v221;
    __int64 v222;
  } v219_;
  struct {
    _BYTE v223[8];
    char v224;
  } v223_;

  if (*(_QWORD*)a1 != 0 &&
      ((v2 = game_GameModeData_instance_,
        GameRoutine_682bc0(&v197_.v197, *(_QWORD*)(*(_QWORD*)a1 + 32LL)),
        (GameConverge_8e7ca0(*(_QWORD*)(v2 + 176), v197_.v197) & 1) == 0) ||
       *(_QWORD*)(a1 + 16) != 0) &&
      *(_OWORD*)(a1 + 8) != 0) {
    v3 = GameRoutine_19bb9c0(*(_QWORD*)a1);
    v4 = *(_QWORD*)(a1 + 88);
    if (v4 == 0) {
      goto LABEL_18;
    }
  }
  else {
    v3 = nullptr;
    v4 = *(_QWORD*)(a1 + 88);
    if (v4 == 0) {
      goto LABEL_18;
    }
  }
  v5 = game_GameModeData_instance_;
  GameRoutine_682bc0(&v197_.v197, *(_QWORD*)(v4 + 32));
  if ((GameConverge_8e7ca0(*(_QWORD*)(v5 + 176), v197_.v197) & 1) != 0 &&
          *(_QWORD*)(a1 + 104) == 0 ||
      *(_OWORD*)(a1 + 96) == 0 ||
      (v6 = GameRoutine_19bb9c0(*(_QWORD*)(a1 + 88)), v3 == nullptr) ||
      (v7 = v6, v6 == nullptr)) {
  LABEL_18:
    if (v3 == nullptr) {
      return (__int64)*msg_MessageManager_empty_text__ptr;
    }
    if (*(_QWORD*)a1 != 0) {
      v13 = *(_QWORD*)(a1 + 16);
      if (v13 != 0) {
        if ((*(_BYTE*)(v13 + 416) & 8) != 0) {
          v14 = *(_QWORD*)(a1 + 8);
          if (v14 == 0) {
            return (__int64)*msg_MessageManager_empty_text__ptr;
          }
        LABEL_26:
          v16 = v3[5];
          v197_.v201 = 0;
          LODWORD(v192_.v194) = 0;
          v223_.v223[0] = 0;
          v223_.v224 = 0;
          v197_.v199 = 0;
          v197_.v200 = GameRoutine_64be60;
          v215_.v216 = 12;
          v197_.v197 = v202_.v202;
          v197_.v198 = 256;
          v202_.v214 = v202_.v202;
          v192_.v192 = "MID_END_Solo_1Dead_{}_001";
          v192_.v193 = "";
          v215_.v215[0] = v16;
          v192_.v195 = 0;
          v192_.v196 = 1;
          v219_.v221 = (const char**)v215_.v215;
          v219_.v222 = 12;
          v219_.v219 = &v197_.v197;
          v219_.v220 = 1;
          GameRoutine_6380e0((__int64)&v192_.v192, (__int64**)&v219_.v219);
          if (v223_.v224 == 1) {
            std___1_locale_Destroy_locale((__int64)v223_.v223);
          }
          v17 = v197_.v199;
          if (v197_.v199 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_382;
          }
          v18 = (__int64)v202_.v214;
          if (v197_.v199 >= 0x17) {
            if ((v197_.v199 | 7) == 0x17) {
              v50 = 26;
            }
            else {
              v50 = (v197_.v199 | 7) + 1;
            }
            v19 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v50, 16, 0);
            v189_.v190 = (char*)v17;
            v189_.v191 = v19;
            v189_.v189 = v50 | 1;
          }
          else {
            LOBYTE(v189_.v189) = 2 * v197_.v199;
            v19 = (char*)&v189_.v189 + 1;
            if (v197_.v199 == 0) {
              goto LABEL_88;
            }
          }
          memmove((__int64)v19, v18, v17);
        LABEL_88:
          v51 = v202_.v214;
          v19[v17] = 0;
          if (v51 != v202_.v202 && v51 != nullptr) {
            v52 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, (__int64)v51);
          }
          v53 = v3[5];
          v197_.v199 = 0;
          v197_.v200 = GameRoutine_64be60;
          v197_.v201 = 0;
          LODWORD(v192_.v194) = 0;
          v223_.v223[0] = 0;
          v215_.v216 = 12;
          v223_.v224 = 0;
          v197_.v197 = v202_.v202;
          v197_.v198 = 256;
          v202_.v214 = v202_.v202;
          v192_.v192 = "MID_END_Solo_1Lost_{}_001";
          v192_.v193 = "";
          v215_.v215[0] = v53;
          v219_.v221 = (const char**)v215_.v215;
          v219_.v222 = 12;
          v192_.v195 = 0;
          v192_.v196 = 1;
          v219_.v219 = &v197_.v197;
          v219_.v220 = 1;
          GameRoutine_6380e0((__int64)&v192_.v192, (__int64**)&v219_.v219);
          if (v223_.v224 == 1) {
            std___1_locale_Destroy_locale((__int64)v223_.v223);
          }
          v54 = v197_.v199;
          if (v197_.v199 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_382;
          }
          v55 = (__int64)v202_.v214;
          if (v197_.v199 >= 0x17) {
            if ((v197_.v199 | 7) == 0x17) {
              v57 = 26;
            }
            else {
              v57 = (v197_.v199 | 7) + 1;
            }
            v56 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v57, 16, 0);
            v187_.v187[1] = v54;
            v187_.v188 = v56;
            v187_.v187[0] = v57 | 1;
          }
          else {
            LOBYTE(v187_.v187[0]) = 2 * v197_.v199;
            v56 = (char*)v187_.v187 + 1;
            if (v197_.v199 == 0) {
              goto LABEL_104;
            }
          }
          memmove((__int64)v56, v55, v54);
        LABEL_104:
          v58 = v202_.v214;
          v56[v54] = 0;
          if (v58 != v202_.v202 && v58 != nullptr) {
            v59 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v59 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, (__int64)v58);
          }
          v60 = v3[5];
          v197_.v199 = 0;
          v197_.v200 = GameRoutine_64be60;
          v197_.v201 = 0;
          LODWORD(v192_.v194) = 0;
          v223_.v223[0] = 0;
          v215_.v216 = 12;
          v223_.v224 = 0;
          v197_.v197 = v202_.v202;
          v197_.v198 = 256;
          v202_.v214 = v202_.v202;
          v192_.v192 = "MID_END_Solo_2Dead_{}_001";
          v192_.v193 = "";
          v215_.v215[0] = v60;
          v219_.v221 = (const char**)v215_.v215;
          v219_.v222 = 12;
          v192_.v195 = 0;
          v192_.v196 = 1;
          v219_.v219 = &v197_.v197;
          v219_.v220 = 1;
          GameRoutine_6380e0((__int64)&v192_.v192, (__int64**)&v219_.v219);
          if (v223_.v224 == 1) {
            std___1_locale_Destroy_locale((__int64)v223_.v223);
          }
          v61 = v197_.v199;
          if (v197_.v199 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_382;
          }
          v62 = (__int64)v202_.v214;
          if (v197_.v199 >= 0x17) {
            if ((v197_.v199 | 7) == 0x17) {
              v64 = 26;
            }
            else {
              v64 = (v197_.v199 | 7) + 1;
            }
            v63 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v64, 16, 0);
            v185_.v185[1] = v61;
            v185_.v186 = v63;
            v185_.v185[0] = v64 | 1;
          }
          else {
            LOBYTE(v185_.v185[0]) = 2 * v197_.v199;
            v63 = (char*)v185_.v185 + 1;
            if (v197_.v199 == 0) {
              goto LABEL_120;
            }
          }
          memmove((__int64)v63, v62, v61);
        LABEL_120:
          v65 = v202_.v214;
          v63[v61] = 0;
          if (v65 != v202_.v202 && v65 != nullptr) {
            v66 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, (__int64)v65);
          }
          v67 = v3[5];
          v197_.v199 = 0;
          v197_.v200 = GameRoutine_64be60;
          v197_.v201 = 0;
          LODWORD(v192_.v194) = 0;
          v223_.v223[0] = 0;
          v215_.v216 = 12;
          v223_.v224 = 0;
          v197_.v197 = v202_.v202;
          v197_.v198 = 256;
          v202_.v214 = v202_.v202;
          v192_.v192 = "MID_END_Solo_2Lost_{}_001";
          v192_.v193 = "";
          v215_.v215[0] = v67;
          v219_.v221 = (const char**)v215_.v215;
          v219_.v222 = 12;
          v192_.v195 = 0;
          v192_.v196 = 1;
          v219_.v219 = &v197_.v197;
          v219_.v220 = 1;
          GameRoutine_6380e0((__int64)&v192_.v192, (__int64**)&v219_.v219);
          if (v223_.v224 == 1) {
            std___1_locale_Destroy_locale((__int64)v223_.v223);
          }
          v68 = v197_.v199;
          if (v197_.v199 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_382;
          }
          v69 = (__int64)v202_.v214;
          if (v197_.v199 >= 0x17) {
            if ((v197_.v199 | 7) == 0x17) {
              v71 = 26;
            }
            else {
              v71 = (v197_.v199 | 7) + 1;
            }
            v70 = (char*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v71, 16, 0);
            v183_.v183[1] = v68;
            v183_.v184 = v70;
            v183_.v183[0] = v71 | 1;
          }
          else {
            LOBYTE(v183_.v183[0]) = 2 * v197_.v199;
            v70 = (char*)v183_.v183 + 1;
            if (v197_.v199 == 0) {
              goto LABEL_136;
            }
          }
          memmove((__int64)v70, v69, v68);
        LABEL_136:
          v72 = v202_.v214;
          v70[v68] = 0;
          if (v72 != v202_.v202 && v72 != nullptr) {
            v73 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v73 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, (__int64)v72);
          }
          v74 = v3[5];
          v197_.v199 = 0;
          v197_.v200 = GameRoutine_64be60;
          v197_.v201 = 0;
          LODWORD(v192_.v194) = 0;
          v223_.v223[0] = 0;
          v215_.v216 = 12;
          v223_.v224 = 0;
          v197_.v197 = v202_.v202;
          v197_.v198 = 256;
          v202_.v214 = v202_.v202;
          v192_.v192 = "MID_END_Solo_3Dead_{}_001";
          v192_.v193 = "";
          v215_.v215[0] = v74;
          v219_.v221 = (const char**)v215_.v215;
          v219_.v222 = 12;
          v192_.v195 = 0;
          v192_.v196 = 1;
          v219_.v219 = &v197_.v197;
          v219_.v220 = 1;
          GameRoutine_6380e0((__int64)&v192_.v192, (__int64**)&v219_.v219);
          if (v223_.v224 == 1) {
            std___1_locale_Destroy_locale((__int64)v223_.v223);
          }
          v75 = v197_.v199;
          if (v197_.v199 < 0xFFFFFFFFFFFFFFF7LL) {
            v76 = (__int64)v202_.v214;
            if (v197_.v199 >= 0x17) {
              if ((v197_.v199 | 7) == 0x17) {
                v78 = 26;
              }
              else {
                v78 = (v197_.v199 | 7) + 1;
              }
              v77 = (const char**)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v78, 16, 0);
              v219_.v220 = v75;
              v219_.v221 = v77;
              v219_.v219 = (unsigned __int64**)(v78 | 1);
            }
            else {
              LOBYTE(v219_.v219) = 2 * v197_.v199;
              v77 = (const char**)((char*)&v219_.v219 + 1);
              if (v197_.v199 == 0) {
                goto LABEL_152;
              }
            }
            memmove((__int64)v77, v76, v75);
          LABEL_152:
            v79 = v202_.v214;
            *((_BYTE*)v77 + v75) = 0;
            if (v79 != v202_.v202 && v79 != nullptr) {
              v80 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v80 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, (__int64)v79);
            }
            v81 = *(unsigned __int8*)(v14 + 1);
            if (v81 == 3) {
              v82 = (unsigned __int64)&v219_.v219;
              v108 = msg_MessageManager_instance__ptr[0];
              if (((unsigned __int8)v219_.v219 & 1) != 0) {
                v109 = v219_.v221;
              }
              else {
                v109 = (const char**)((char*)&v219_.v219 + 1);
              }
              if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0],
                                       (__int64)v109) &
                   1) != 0) {
                v86 = *v108;
                v87 = (char)v219_.v219;
                v88 = (__int64)v219_.v221;
                goto LABEL_353;
              }
              goto LABEL_298;
            }
            if (v81 != 2) {
              if (v81 == 1) {
                v82 = (unsigned __int64)v187_.v187;
                v83 = msg_MessageManager_instance__ptr[0];
                if ((v187_.v187[0] & 1) != 0) {
                  v84 = v187_.v188;
                }
                else {
                  v84 = (char*)v187_.v187 + 1;
                }
                v85 = Registration_a4da40(*msg_MessageManager_instance__ptr[0],
                                          (__int64)v84);
                v86 = *v83;
                if ((v85 & 1) != 0) {
                  v87 = v187_.v187[0];
                  v88 = (__int64)v187_.v188;
                LABEL_353:
                  if ((v87 & 1) != 0) {
                    v177 = (_BYTE*)v88;
                  }
                  else {
                    v177 = (_BYTE*)(v82 | 1);
                  }
                  result = (__int64)Registration_a4db40(v86, v177);
                  goto LABEL_357;
                }
                v82 = (unsigned __int64)&v189_.v189;
                if ((v189_.v189 & 1) != 0) {
                  v112 = v189_.v191;
                }
                else {
                  v112 = (char*)&v189_.v189 + 1;
                }
                v113 = Registration_a4da40(v86, (__int64)v112);
                v86 = *v83;
                if ((v113 & 1) != 0) {
                  v87 = v189_.v189;
                  v88 = (__int64)v189_.v191;
                  goto LABEL_353;
                }
                v82 = (unsigned __int64)v183_.v183;
                if ((v183_.v183[0] & 1) != 0) {
                  v143 = v183_.v184;
                }
                else {
                  v143 = (char*)v183_.v183 + 1;
                }
                v144 = Registration_a4da40(v86, (__int64)v143);
                v86 = *v83;
                if ((v144 & 1) != 0) {
                  v87 = v183_.v183[0];
                  v88 = (__int64)v183_.v184;
                  goto LABEL_353;
                }
                v82 = (unsigned __int64)v185_.v185;
                if ((v185_.v185[0] & 1) != 0) {
                  v176 = v185_.v186;
                }
                else {
                  v176 = (char*)v185_.v185 + 1;
                }
                if ((Registration_a4da40(v86, (__int64)v176) & 1) != 0) {
                  v86 = *v83;
                  v87 = v185_.v185[0];
                  v88 = (__int64)v185_.v186;
                  goto LABEL_353;
                }
              }
              goto LABEL_298;
            }
            v104 = *(const char**)(*(_QWORD*)(v14 + 16) + 8LL);
            v105 = strlen(v104);
            if (v105 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_382;
            }
            v106 = v105;
            if (v105 >= 0x17) {
              if ((v105 | 7) == 0x17) {
                v114 = 26;
              }
              else {
                v114 = (v105 | 7) + 1;
              }
              v107 = (char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v114, 16, 0);
              v197_.v198 = v106;
              v197_.v199 = (unsigned __int64)v107;
              v197_.v197 = (unsigned __int64*)(v114 | 1);
            }
            else {
              LOBYTE(v197_.v197) = 2 * v105;
              v107 = (char*)&v197_.v197 + 1;
              if (v105 == 0) {
              LABEL_226:
                v107[v106] = 0;
                v115 = (char)v197_.v197;
                v116 = v197_.v198;
                if (((unsigned __int8)v197_.v197 & 1) == 0) {
                  v116 = (unsigned __int8)v197_.v197 >> 1;
                }
                if (v116 == 16) {
                  v123 = (__int64*)v197_.v199;
                  if (((unsigned __int8)v197_.v197 & 1) == 0) {
                    v123 = (__int64*)((char*)&v197_.v197 + 1);
                  }
                  v124 = *v123;
                  v120 = v123[1];
                  v121 = v124 == 0xE38883E35F444950LL;
                  v122 = 0xB982E3A483E39383LL;
                }
                else {
                  if (v116 != 19) {
                    goto LABEL_243;
                  }
                  v117 = (__int64*)v197_.v199;
                  if (((unsigned __int8)v197_.v197 & 1) == 0) {
                    v117 = (__int64*)((char*)&v197_.v197 + 1);
                  }
                  v118 = *v117;
                  v119 = v117[1];
                  v120 = *(__int64*)((char*)v117 + 11);
                  v121 = v118 == 0xE39C83E35F444950LL &&
                         v119 == 0xAB83E39183E38A83LL;
                  v122 = 0x8683E3AB83E39183LL;
                }
                if (v121 && v120 == v122) {
                  v126 = msg_MessageManager_instance__ptr[0];
                  v129 = *msg_MessageManager_instance__ptr[0];
                  if (*(unsigned __int8*)(v14 + 2) <= 2u) {
                    if ((v183_.v183[0] & 1) != 0) {
                      v145 = v183_.v184;
                    }
                    else {
                      v145 = (char*)v183_.v183 + 1;
                    }
                    result = Registration_a4da40(v129, (__int64)v145);
                    if ((result & 1) != 0) {
                      v129 = *v126;
                    LABEL_247:
                      v130 = (char*)v183_.v183 + 1;
                      v131 = v183_.v183[0];
                      v132 = (__int64)v183_.v184;
                    LABEL_287:
                      if ((v131 & 1) != 0) {
                        v147 = (_BYTE*)v132;
                      }
                      else {
                        v147 = v130;
                      }
                      result = (__int64)Registration_a4db40(v129, v147);
                      v148 = 0;
                    LABEL_292:
                      if ((v115 & 1) != 0 && v197_.v199 != 0) {
                        v149 = result;
                        v150 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v150 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v150,
                            v197_.v199);
                        result = v149;
                      }
                      if ((v148 & 1) == 0) {
                      LABEL_357:
                        v142 = result;
                        if (((unsigned __int8)v219_.v219 & 1) != 0 &&
                            v219_.v221 != nullptr) {
                          v178 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v178 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v178,
                              (__int64)v219_.v221);
                          result = v142;
                        }
                        if ((v183_.v183[0] & 1) != 0 && v183_.v184 != nullptr) {
                          v179 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v179 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v179,
                              (__int64)v183_.v184);
                          result = v142;
                        }
                        if ((v185_.v185[0] & 1) != 0 && v185_.v186 != nullptr) {
                          v180 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v180 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v180,
                              (__int64)v185_.v186);
                          result = v142;
                        }
                        if ((v187_.v187[0] & 1) != 0 && v187_.v188 != nullptr) {
                          v181 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v181 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v181,
                              (__int64)v187_.v188);
                          result = v142;
                        }
                        if ((v189_.v189 & 1) != 0) {
                          v141 = (__int64)v189_.v191;
                          if (v189_.v191 != nullptr) {
                            goto LABEL_379;
                          }
                        }
                        return result;
                      }
                    LABEL_298:
                      v151 = msg_MessageManager_instance__ptr[0];
                      v152 = *msg_MessageManager_instance__ptr[0];
                      v153 =
                          game_util_Format("%d", *(unsigned __int16*)(v14 + 4));
                      v154 = strlen(v153);
                      if (v154 >= 0xFFFFFFFFFFFFFFF7LL) {
                        goto LABEL_382;
                      }
                      v155 = v154;
                      if (v154 >= 0x17) {
                        if ((v154 | 7) == 0x17) {
                          v157 = 26;
                        }
                        else {
                          v157 = (v154 | 7) + 1;
                        }
                        v156 = (char*)fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, v157, 16,
                            0);
                        v197_.v198 = v155;
                        v197_.v199 = (unsigned __int64)v156;
                        v197_.v197 = (unsigned __int64*)(v157 | 1);
                      }
                      else {
                        LOBYTE(v197_.v197) = 2 * v154;
                        v156 = (char*)&v197_.v197 + 1;
                        if (v154 == 0) {
                          goto LABEL_307;
                        }
                      }
                      memmove((__int64)v156, (__int64)v153, v155);
                    LABEL_307:
                      v156[v155] = 0;
                      v158 = (const char**)msg_MessageManager_empty_text__ptr;
                      if (((unsigned __int8)v197_.v197 & 1) != 0) {
                        v159 = (const char*)v197_.v199;
                      }
                      else {
                        v159 = (char*)&v197_.v197 + 1;
                      }
                      if (v159 != nullptr) {
                        v160 = v159;
                      }
                      else {
                        v160 = *msg_MessageManager_empty_text__ptr;
                      }
                      GameRoutine_60a020((char*)(v152 + 14704), v160);
                      if (((unsigned __int8)v197_.v197 & 1) != 0 &&
                          v197_.v199 != 0) {
                        v161 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v161 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v161,
                            v197_.v199);
                      }
                      v162 = *v151;
                      game_16050d0((void*)((__int64*)&v197_.v197),
                                   *(unsigned __int8*)(v14 + 6));
                      if (((unsigned __int8)v197_.v197 & 1) != 0) {
                        v163 = (const char*)v197_.v199;
                      }
                      else {
                        v163 = (char*)&v197_.v197 + 1;
                      }
                      if (v163 != nullptr) {
                        v164 = v163;
                      }
                      else {
                        v164 = *v158;
                      }
                      GameRoutine_60a020((char*)(v162 + 14728), v164);
                      if (((unsigned __int8)v197_.v197 & 1) != 0 &&
                          v197_.v199 != 0) {
                        v165 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v165 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v165,
                            v197_.v199);
                      }
                      v166 = *v151;
                      game_16051a0((void*)((__int64*)&v197_.v197),
                                   *(unsigned __int8*)(v14 + 7));
                      if (((unsigned __int8)v197_.v197 & 1) != 0) {
                        v167 = (const char*)v197_.v199;
                      }
                      else {
                        v167 = (char*)&v197_.v197 + 1;
                      }
                      if (v167 != nullptr) {
                        v168 = v167;
                      }
                      else {
                        v168 = *v158;
                      }
                      GameRoutine_60a020((char*)(v166 + 14752), v168);
                      if (((unsigned __int8)v197_.v197 & 1) != 0 &&
                          v197_.v199 != 0) {
                        v169 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v169 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v169,
                            v197_.v199);
                      }
                      v170 = *v151;
                      if (GameRoutine_99cee0(v14) != 0) {
                        v171 = *v151;
                        v172 = (_BYTE*)GameRoutine_99cee0(v14);
                        v202_.v202[0] = -1;
                        v202_.v202[1] = -1;
                        v202_.v203 = -1;
                        v202_.v204 = -1;
                        v202_.v205 = -1;
                        v202_.v206 = -1;
                        v202_.v207 = -1;
                        v202_.v208 = -1;
                        v202_.v209 = -1;
                        v202_.v210 = -1;
                        v202_.v211 = -1;
                        v202_.v212 = -1;
                        v197_.v197 = (unsigned __int64*)(GameData_212e348 + 2);
                        v197_.v198 = 0xFFFF0001FFFF0000LL;
                        v197_.v199 = 0xFFFF0004FFFF0002LL;
                        v197_.v200 = (__int64 (*)())0xFFFF0006FFFF0005LL;
                        v202_.v213 = 8;
                        v197_.v201 = 0xFFFF0008FFFF0007LL;
                        v173 = GameRoutine_a4dbe0(v171, v172, 0);
                      }
                      else {
                        v173 = (char*)*v158;
                      }
                      if (v173 != nullptr) {
                        v174 = v173;
                      }
                      else {
                        v174 = *v158;
                      }
                      GameRoutine_60a020((char*)(v170 + 14776), v174);
                      v175 = *v151;
                      v202_.v202[0] = -1;
                      v202_.v202[1] = -1;
                      v202_.v203 = -1;
                      v202_.v204 = -1;
                      v202_.v205 = -1;
                      v202_.v206 = -1;
                      v202_.v207 = -1;
                      v202_.v208 = -1;
                      v202_.v209 = -1;
                      v202_.v210 = -1;
                      v202_.v211 = -1;
                      v202_.v212 = -1;
                      v197_.v197 = (unsigned __int64*)(GameData_212e348 + 2);
                      v197_.v198 = 0xFFFF0001FFFF0000LL;
                      v197_.v199 = 0xFFFF0004FFFF0002LL;
                      v197_.v200 = (__int64 (*)())0xFFFF0006FFFF0005LL;
                      v202_.v213 = 8;
                      v197_.v201 = 0xFFFF0008FFFF0007LL;
                      result = (__int64)GameRoutine_a4dbe0(
                          v175, "MID_END_Solo_XDead_Cmn_001", 0);
                      goto LABEL_357;
                    }
                  LABEL_291:
                    v148 = 1;
                    goto LABEL_292;
                  }
                LABEL_282:
                  if ((v185_.v185[0] & 1) != 0) {
                    v146 = v185_.v186;
                  }
                  else {
                    v146 = (char*)v185_.v185 + 1;
                  }
                  result = Registration_a4da40(v129, (__int64)v146);
                  if ((result & 1) != 0) {
                    v129 = *v126;
                    v131 = v185_.v185[0];
                    v132 = (__int64)v185_.v186;
                    v130 = (char*)v185_.v185 + 1;
                    goto LABEL_287;
                  }
                  goto LABEL_291;
                }
              LABEL_243:
                v126 = msg_MessageManager_instance__ptr[0];
                if ((v183_.v183[0] & 1) != 0) {
                  v127 = v183_.v184;
                }
                else {
                  v127 = (char*)v183_.v183 + 1;
                }
                v128 = Registration_a4da40(*msg_MessageManager_instance__ptr[0],
                                           (__int64)v127);
                v129 = *v126;
                if ((v128 & 1) != 0) {
                  goto LABEL_247;
                }
                goto LABEL_282;
              }
            }
            memmove((__int64)v107, (__int64)v104, v106);
            goto LABEL_226;
          }
        LABEL_382:
          String_60a1d0();
        }
      }
      else {
        v15 = game_GameModeData_instance_;
        GameRoutine_682bc0(&v197_.v197, *(_QWORD*)(*(_QWORD*)a1 + 32LL));
        if ((GameConverge_8e7ca0(*(_QWORD*)(v15 + 176), v197_.v197) & 1) == 0) {
          v14 = *(_QWORD*)(a1 + 8);
          if (v14 != 0) {
            goto LABEL_26;
          }
        }
      }
    }
    v20 = *(__int64**)(*GameData_212ce00[0] + 64);
    v21 = *(_QWORD*)(*GameData_212ce00[0] + 72) - (_QWORD)v20;
    if ((int)((unsigned __int64)v21 >> 3) >= 1) {
      v22 = (const char*)v3[1];
      v23 = (int)(v21 >> 3);
      v24 = 0;
      v25 = v23 <= 1 ? 1LL : v23;
      do {
        v27 = *v20++;
        v26 = v27;
        v28 = *(const char**)(v27 + 32);
        v29 = ((unsigned __int64)v22 | (unsigned __int64)v28) == 0;
        if (v22 != nullptr && v28 != nullptr) {
          v29 = strcmp(v28, v22) == 0;
        }
        if (v29) {
          v24 = v26;
        }
        --v25;
      } while (v25 != 0);
      if (v24 != 0) {
        v197_.v198 = *(_QWORD*)(v24 + 40);
        v197_.v197 = (unsigned __int64*)game_HashString(v197_.v198);
        if (game_GameModeData_instance_ != 0 &&
            (v30 = game_GameVariableTable_Find(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)&v197_.v197)) != 0 &&
            *(_DWORD*)(v30 + 32) != 0) {
          v31 = 48;
        }
        else {
          v31 = 56;
        }
        v47 = *(_BYTE**)(v24 + v31);
        v48 = msg_MessageManager_instance__ptr[0];
        if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0],
                                 (__int64)v47) &
             1) != 0) {
          v49 = *v48;
          v202_.v202[0] = -1;
          v202_.v202[1] = -1;
          v202_.v203 = -1;
          v202_.v204 = -1;
          v202_.v205 = -1;
          v202_.v206 = -1;
          v202_.v207 = -1;
          v202_.v208 = -1;
          v202_.v209 = -1;
          v202_.v210 = -1;
          v202_.v211 = -1;
          v202_.v212 = -1;
          v197_.v197 = (unsigned __int64*)(GameData_212e348 + 2);
          v197_.v198 = 0xFFFF0001FFFF0000LL;
          v197_.v199 = 0xFFFF0004FFFF0002LL;
          v197_.v200 = (__int64 (*)())0xFFFF0006FFFF0005LL;
          v202_.v213 = 8;
          v197_.v201 = 0xFFFF0008FFFF0007LL;
          return (__int64)GameRoutine_a4dbe0(v49, v47, 0);
        }
        return (__int64)*msg_MessageManager_empty_text__ptr;
      }
    }
    v32 = v3[5];
    v197_.v201 = 0;
    LODWORD(v192_.v194) = 0;
    v223_.v223[0] = 0;
    v223_.v224 = 0;
    v197_.v199 = 0;
    v197_.v200 = GameRoutine_64be60;
    v215_.v216 = 12;
    v197_.v197 = v202_.v202;
    v197_.v198 = 256;
    v202_.v214 = v202_.v202;
    v192_.v192 = "MID_END_Solo_Living_{}_001";
    v192_.v193 = "";
    v215_.v215[0] = v32;
    v192_.v195 = 0;
    v192_.v196 = 1;
    v219_.v221 = (const char**)v215_.v215;
    v219_.v222 = 12;
    v219_.v219 = &v197_.v197;
    v219_.v220 = 1;
    GameRoutine_6380e0((__int64)&v192_.v192, (__int64**)&v219_.v219);
    if (v223_.v224 == 1) {
      std___1_locale_Destroy_locale((__int64)v223_.v223);
    }
    v33 = v197_.v199;
    if (v197_.v199 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_382;
    }
    v34 = (__int64)v202_.v214;
    if (v197_.v199 >= 0x17) {
      if ((v197_.v199 | 7) == 0x17) {
        v36 = 26;
      }
      else {
        v36 = (v197_.v199 | 7) + 1;
      }
      v35 = (const char**)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v36, 16, 0);
      v219_.v220 = v33;
      v219_.v221 = v35;
      v219_.v219 = (unsigned __int64**)(v36 | 1);
    }
    else {
      LOBYTE(v219_.v219) = 2 * v197_.v199;
      v35 = (const char**)((char*)&v219_.v219 + 1);
      if (v197_.v199 == 0) {
        goto LABEL_58;
      }
    }
    memmove((__int64)v35, v34, v33);
  LABEL_58:
    v37 = v202_.v214;
    *((_BYTE*)v35 + v33) = 0;
    if (v37 != v202_.v202 && v37 != nullptr) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, (__int64)v37);
    }
    v39 = msg_MessageManager_instance__ptr[0];
    if (((unsigned __int8)v219_.v219 & 1) != 0) {
      v40 = v219_.v221;
    }
    else {
      v40 = (const char**)((char*)&v219_.v219 + 1);
    }
    result =
        Registration_a4da40(*msg_MessageManager_instance__ptr[0], (__int64)v40);
    v42 = result;
    if ((result & 1) != 0) {
      v43 = *v39;
      v202_.v202[0] = -1;
      v202_.v202[1] = -1;
      v202_.v203 = -1;
      v202_.v204 = -1;
      v202_.v205 = -1;
      v202_.v206 = -1;
      if (((unsigned __int8)v219_.v219 & 1) != 0) {
        v44 = v219_.v221;
      }
      else {
        v44 = (const char**)((char*)&v219_.v219 + 1);
      }
      v202_.v207 = -1;
      v202_.v208 = -1;
      v202_.v209 = -1;
      v202_.v210 = -1;
      v202_.v211 = -1;
      v202_.v212 = -1;
      v197_.v197 = (unsigned __int64*)(GameData_212e348 + 2);
      v197_.v198 = 0xFFFF0001FFFF0000LL;
      v197_.v199 = 0xFFFF0004FFFF0002LL;
      v197_.v200 = (__int64 (*)())0xFFFF0006FFFF0005LL;
      v202_.v213 = 8;
      v197_.v201 = 0xFFFF0008FFFF0007LL;
      result = (__int64)GameRoutine_a4dbe0(v43, v44, 0);
    }
    if (((unsigned __int8)v219_.v219 & 1) != 0 && v219_.v221 != nullptr) {
      v45 = result;
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, (__int64)v219_.v221);
      result = v45;
    }
    if ((v42 & 1) != 0) {
      return result;
    }
    return (__int64)*msg_MessageManager_empty_text__ptr;
  }
  v8 = (const char*)v3[5];
  v197_.v201 = 0;
  LODWORD(v215_.v216) = 0;
  v223_.v223[0] = 0;
  v192_.v196 = 396;
  v197_.v199 = 0;
  v197_.v200 = GameRoutine_64be60;
  v197_.v197 = v202_.v202;
  v197_.v198 = 256;
  v9 = v6[5];
  v202_.v214 = v202_.v202;
  v215_.v215[0] = "MID_END_Pair_{}_{}_001";
  v215_.v215[1] = "";
  v223_.v224 = 0;
  v192_.v192 = v8;
  v215_.v217 = 0;
  v215_.v218 = 2;
  v219_.v219 = &v197_.v197;
  v219_.v220 = 2;
  v192_.v194 = (_BYTE*)v9;
  v219_.v221 = &v192_.v192;
  v219_.v222 = 396;
  GameRoutine_6380e0((__int64)v215_.v215, (__int64**)&v219_.v219);
  if (v223_.v224 == 1) {
    std___1_locale_Destroy_locale((__int64)v223_.v223);
  }
  v10 = v197_.v199;
  if (v197_.v199 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_382;
  }
  v11 = (__int64)v202_.v214;
  if (v197_.v199 >= 0x17) {
    if ((v197_.v199 | 7) == 0x17) {
      v89 = 26;
    }
    else {
      v89 = (v197_.v199 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v89, 16, 0);
    v189_.v190 = (char*)v10;
    v189_.v191 = v12;
    v189_.v189 = v89 | 1;
  }
  else {
    LOBYTE(v189_.v189) = 2 * v197_.v199;
    v12 = (char*)&v189_.v189 + 1;
    if (v197_.v199 == 0) {
      goto LABEL_170;
    }
  }
  memmove((__int64)v12, v11, v10);
LABEL_170:
  v90 = v202_.v214;
  v12[v10] = 0;
  if (v90 != v202_.v202 && v90 != nullptr) {
    v91 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v91 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v91,
                                  (__int64)v90);
  }
  v92 = (const char*)v7[5];
  v93 = v3[5];
  v197_.v199 = 0;
  v197_.v200 = GameRoutine_64be60;
  v197_.v201 = 0;
  LODWORD(v215_.v216) = 0;
  v192_.v196 = 396;
  v223_.v223[0] = 0;
  v223_.v224 = 0;
  v197_.v197 = v202_.v202;
  v197_.v198 = 256;
  v202_.v214 = v202_.v202;
  v215_.v215[0] = "MID_END_Pair_{}_{}_001";
  v215_.v215[1] = "";
  v192_.v192 = v92;
  v192_.v194 = (_BYTE*)v93;
  v215_.v217 = 0;
  v215_.v218 = 2;
  v219_.v221 = &v192_.v192;
  v219_.v222 = 396;
  v219_.v219 = &v197_.v197;
  v219_.v220 = 2;
  GameRoutine_6380e0((__int64)v215_.v215, (__int64**)&v219_.v219);
  if (v223_.v224 == 1) {
    std___1_locale_Destroy_locale((__int64)v223_.v223);
  }
  v94 = v197_.v199;
  if (v197_.v199 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_382;
  }
  v95 = (__int64)v202_.v214;
  if (v197_.v199 >= 0x17) {
    if ((v197_.v199 | 7) == 0x17) {
      v97 = 26;
    }
    else {
      v97 = (v197_.v199 | 7) + 1;
    }
    v96 = (const char**)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v97, 16, 0);
    v219_.v220 = v94;
    v219_.v221 = v96;
    v219_.v219 = (unsigned __int64**)(v97 | 1);
  }
  else {
    LOBYTE(v219_.v219) = 2 * v197_.v199;
    v96 = (const char**)((char*)&v219_.v219 + 1);
    if (v197_.v199 == 0) {
      goto LABEL_186;
    }
  }
  memmove((__int64)v96, v95, v94);
LABEL_186:
  v98 = v202_.v214;
  *((_BYTE*)v96 + v94) = 0;
  if (v98 != v202_.v202 && v98 != nullptr) {
    v99 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v99 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v99,
                                  (__int64)v98);
  }
  LOWORD(v192_.v192) = 0;
  v100 = msg_MessageManager_instance__ptr[0];
  if ((v189_.v189 & 1) != 0) {
    v101 = v189_.v191;
  }
  else {
    v101 = (char*)&v189_.v189 + 1;
  }
  if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0],
                           (__int64)v101) &
       1) != 0) {
    if ((v189_.v189 & 1) == 0) {
      v192_.v192 = (const char*)v189_.v189;
      v192_.v193 = v189_.v190;
      v102 = (__int64)v189_.v191;
    LABEL_197:
      v192_.v194 = (_BYTE*)v102;
      goto LABEL_255;
    }
    v111 = (unsigned __int64)v189_.v190;
    v110 = (__int64)v189_.v191;
  LABEL_215:
    GameRoutine_64df20(&v192_.v192, v110, v111);
    goto LABEL_255;
  }
  if (((unsigned __int8)v219_.v219 & 1) != 0) {
    v103 = v219_.v221;
  }
  else {
    v103 = (const char**)((char*)&v219_.v219 + 1);
  }
  if ((Registration_a4da40(*v100, (__int64)v103) & 1) != 0) {
    if (((unsigned __int8)v192_.v192 & 1) == 0) {
      if (((unsigned __int8)v219_.v219 & 1) == 0) {
        v192_.v192 = (const char*)v219_.v219;
        v192_.v193 = (char*)v219_.v220;
        v102 = (__int64)v219_.v221;
        goto LABEL_197;
      }
      v111 = v219_.v220;
      v110 = (__int64)v219_.v221;
      goto LABEL_215;
    }
    if (((unsigned __int8)v219_.v219 & 1) != 0) {
      v133 = v219_.v221;
    }
    else {
      v133 = (const char**)((char*)&v219_.v219 + 1);
    }
    if (((unsigned __int8)v219_.v219 & 1) != 0) {
      v134 = v219_.v220;
    }
    else {
      v134 = (unsigned __int64)(unsigned __int8)v219_.v219 >> 1;
    }
    SpineModel_64dde0((__int64*)&v192_.v192, (__int64)v133, v134);
  }
LABEL_255:
  v135 = *v100;
  v202_.v202[0] = -1;
  v202_.v202[1] = -1;
  v202_.v203 = -1;
  v202_.v204 = -1;
  v202_.v205 = -1;
  v202_.v206 = -1;
  if (((unsigned __int8)v192_.v192 & 1) != 0) {
    v136 = v192_.v194;
  }
  else {
    v136 = (char*)&v192_.v192 + 1;
  }
  v202_.v207 = -1;
  v202_.v208 = -1;
  v202_.v209 = -1;
  v202_.v210 = -1;
  v202_.v211 = -1;
  v202_.v212 = -1;
  v197_.v197 = (unsigned __int64*)(GameData_212e348 + 2);
  v197_.v198 = 0xFFFF0001FFFF0000LL;
  v197_.v199 = 0xFFFF0004FFFF0002LL;
  v197_.v200 = (__int64 (*)())0xFFFF0006FFFF0005LL;
  v202_.v213 = 8;
  v197_.v201 = 0xFFFF0008FFFF0007LL;
  result = (__int64)GameRoutine_a4dbe0(v135, v136, 0);
  if (((unsigned __int8)v192_.v192 & 1) != 0 && v192_.v194 != nullptr) {
    v137 = result;
    v138 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v138 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v138,
                                  (__int64)v192_.v194);
    result = v137;
  }
  if (((unsigned __int8)v219_.v219 & 1) != 0 && v219_.v221 != nullptr) {
    v139 = result;
    v140 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v140 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v140,
                                  (__int64)v219_.v221);
    result = v139;
  }
  if ((v189_.v189 & 1) != 0) {
    v141 = (__int64)v189_.v191;
    if (v189_.v191 != nullptr) {
      v142 = result;
    LABEL_379:
      v182 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v182 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v182, v141);
      return v142;
    }
  }
  return result;
}

#pragma GCC visibility pop
