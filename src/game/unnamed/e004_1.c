#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern char GameData_1a9f09e;
extern __int64 (*GameData_1fece38[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c5c0[3];
extern __int64* GameData_212c890[3];
extern __int64* GameData_212d458[7];
extern __int64 GameData_212dbc0[8];
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_212ebc0[5];
extern __int64 GameData_212ebf8[2];
extern __int64* GameData_212ec10[3];
extern __int64* GameData_212ec50[3];
extern __int64 GameData_212f510[6];
extern __int64 GameData_21c9608;
extern __int64 GameData_21c9d20;
extern __int64 GameData_21ca3e0;
extern __int64 GameData_21caab0;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4cc0;
extern _UNKNOWN GameData_2216780;
extern __int64 GameData_2216820;
extern char GameData_2216850;
extern char GameData_2216858;
extern __int64 GameData_2219068;
extern __int64 GameData_22190b8;
extern __int64 GameData_22190c0;
extern __int64 GameData_2265ee0;
extern __int64 GameData_2265ef8;
__int64 GameRoutine_1007270(_QWORD);
__int64 GameRoutine_17c8500(void);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_667c80(_QWORD);
__int64 GameRoutine_66cc20(_QWORD, _QWORD);
__int64 GameRoutine_6fa5d0(_QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
__int64 GameRoutine_d783a0(_QWORD, float);
float GameRoutine_d78a40(_QWORD);
__int64 GameRoutine_d799f0(__int64);
__int64 GameRoutine_d9850(_QWORD);
__int64 GameRoutine_da5c00(_QWORD);
__int64 GameRoutine_dab80(_QWORD);
__int64 GameRoutine_e61c90(_QWORD, _QWORD);
__int64 GameRoutine_e9a800(_QWORD, _QWORD, long double);
struct PseudoSret GameRoutine_eb5940(_QWORD);
struct PseudoSret GameRoutine_eb68e0(_QWORD);
__int64 GameRoutine_eb8a90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_eb8c40(_QWORD);
__int64 GameRoutine_eb8d80(_QWORD);
__int64 GameRoutine_eba740(_QWORD, _QWORD);
__int64 GameRoutine_eba910(_QWORD, _QWORD);
__int64 GameRoutine_ec0820(_QWORD);
__int64 GameRoutine_ec17d0(void);
__int64 GameRoutine_f5ec20(void);
_QWORD* CmdbtlPartyNatives_eba910(_QWORD*, __int64*);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* Manager_66cc20(__int64*, _QWORD*);
__attribute__((swiftcall)) void game_eb5940(PSEUDO_X8);
__attribute__((swiftcall)) void game_eb68e0(PSEUDO_X8, int);
__int64* GameHr_da5c00(__int64* result);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CmdbtlPartyNatives_eb8c40(__int64);
__int64 DungeonController_f5ec20();
__int64 GameHr_667c80(__int64 result);
__int64 GameHr_eb8a90(__int64, __int64, int);
__int64 GameHr_eb8d80(__int64);
__int64 GameHr_eba740(__int64*, __int64*);
__int64 ProcCmdBtlSeq_e61c90(__int64, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 game_RandomSeed_Get(_DWORD*, int);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_BGM_getFirstName(__int64);
__int64 snd_BGM_isFirstActive(__int64);
char* GameRoutine_60a020_alt1(char*, __int64) __asm__("GameRoutine_60a020");
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_random;
extern __int64 game_sound_g_game_sound;
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
__int64 GameHr_da51e0();

void GameHr_da3f00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  __int64 v8;
  int v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v2 = *(_QWORD*)(*GameData_212d458[0] + 24);
  v3 = *(_QWORD*)(*GameData_212d458[0] + 32);
  v4 = GameData_212c5c0[0];
  if (v2 != v3) {
    v5 = *(_QWORD*)GameData_212c5c0[0];
    do {
      v8 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
      *(_DWORD*)(v8 + 428) = 1065353216;
      v6 = *(float*)(v8 + 424);
      v9 = *(unsigned __int8*)(v8 + 448);
      v10 = *(_QWORD*)(v8 + 8);
      v11 = v9 == 0;
      v12 = *(_QWORD*)(v10 + 232);
      if (!v11) {
        v6 = 0.0f;
      }
      *(float*)(v10 + 148) = v6;
      if (v12 != 0) {
        *(float*)(*(_QWORD*)(v12 + 304) + 12LL) = v6;
        v13 = *(_QWORD*)(v10 + 232);
        if (v13 != 0) {
          v6 = *(float*)(*(_QWORD*)(v13 + 304) + 16LL) * 16.683f;
          v7 = 0.001f;
          goto LABEL_5;
        }
        v6 = *(float*)(v10 + 148);
      }
      v7 = (float)(*(float*)(v5 + 160) * 16.683f) / 1000.0f;
    LABEL_5:
      v2 += 16;
      *(float*)(v10 + 228) = v6 * v7;
    } while (v2 != v3);
  }
  if (*(_BYTE*)(a1 + 216) == 1) {
    v14 = *GameData_212ebc0[0];
    v15 = *(_DWORD*)(*GameData_212ebc0[0] + 176) - 1;
    *(_DWORD*)(*GameData_212ebc0[0] + 176) = v15;
    if (v15 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v14 + 168) + 8LL))(v14 + 168);
    }
    GameRoutine_d799f0(v14);
    v16 = *(_DWORD*)(v14 + 192) - 1;
    *(_DWORD*)(v14 + 192) = v16;
    if (v16 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v14 + 184) + 8LL))(v14 + 184);
    }
    GameRoutine_d799f0(v14);
    **(_DWORD**)(*(_QWORD*)GameData_212ebf8[0] + 16LL) = 1065353216;
    v17 = *GameData_212ec50[0];
    GameRoutine_d783a0(*(_QWORD*)(*GameData_212ec50[0] + 8), 0.0f);
    v18 = GameRoutine_d78a40(*(_QWORD*)(v17 + 8));
    if (v18 == 1.0f) {
      if (*(_BYTE*)(v17 + 16) != 1) {
      LABEL_20:
        *(_BYTE*)(a1 + 216) = 0;
        goto LABEL_21;
      }
    }
    else {
      *(_BYTE*)(v17 + 16) = 1;
    }
    *(float*)(*(_QWORD*)v4 + 156LL) = v18;
    goto LABEL_20;
  }
LABEL_21:
  v19 = *GameData_212ec10[0];
  if (*(_BYTE*)(*GameData_212ec10[0] + 64) == 1) {
    v20 = *(_QWORD*)(v19 + 24);
    if (v20 != 0) {
      *(_QWORD*)(v19 + 32) = v20;
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v21, v20);
    }
    *(_BYTE*)(v19 + 64) = 0;
  }
}

__int64 GameHr_da51e0()
{
  __int64* v0;
  __int64 v1;
  __int64* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  _QWORD* v71;
  unsigned __int64 v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v87;
  struct {
    __int64 v88;
    unsigned __int64 v89;
    __int64 v90;
  } v88_;
  _QWORD v91[3];
  int v92;
  char v93;
  char v94;
  __int64 v95;
  struct {
    __int64 v96;
    _QWORD* v97;
    unsigned __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
  } v96_;
  struct {
    __int64 v102;
    __int64* v103;
    unsigned __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    char gap192_[24];
    char v110;
  } v102_;
  struct {
    __int64 v111;
    __int64* v112;
    char* v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    char v118;
    char gap281_[3];
    char v119;
    char gap285_[3];
    __int64 v120;
    __int64 v121;
    int v122;
  } v111_;
  struct {
    __int64 v123;
    unsigned __int64 v124;
    char* v125;
  } v123_;
  struct {
    __int64 v126;
    __int64 v127;
    __int64 v128;
  } v126_;
  struct {
    __int64 v129;
    unsigned __int64 v130;
    char* v131;
  } v129_;

  v93 = 0;
  v94 = 0;
  v88_.v88 = 0;
  v88_.v89 = 0;
  v88_.v90 = 0;
  memset(v91, 0, sizeof(v91));
  v102_.v110 = 0;
  v96_.v96 = 0;
  v96_.v97 = nullptr;
  v96_.v98 = 0;
  v96_.v99 = 0;
  v96_.v100 = 0;
  v96_.v101 = 0;
  v102_.v102 = 0;
  v102_.v103 = nullptr;
  v102_.v104 = 0;
  v102_.v105 = 0;
  v95 = 0x500000005LL;
  v0 = GameData_212ec10[0];
  v1 = *GameData_212ec10[0];
  v102_.v106 = 0;
  v102_.v107 = 0;
  LOBYTE(v102_.v108) = 0;
  LOBYTE(v92) = 0;
  if ((*(_BYTE*)(v1 + 64) & 1) == 0) {
    GameRoutine_8123d0_alt1();
  }
  if (*(_QWORD*)(v1 + 32) == *(_QWORD*)(v1 + 24)) {
    goto LABEL_198;
  }
  LOWORD(v129_.v129) = 0;
  v87 = v1;
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(&v111_.v111,
                                  *(_QWORD*)(GameData_21f3d10 + 56),
                                  *(_QWORD*)(GameData_21f3d10 + 48));
  }
  else {
    v2 = *(__int64**)(GameData_21f3d10 + 48);
    v3 = *(char**)(GameData_21f3d10 + 56);
    v111_.v111 = *(_QWORD*)(GameData_21f3d10 + 40);
    v111_.v112 = v2;
    v111_.v113 = v3;
  }
  if ((v111_.v111 & 1) != 0) {
    v4 = v111_.v113;
  }
  else {
    v4 = (char*)&v111_.v111 + 1;
  }
  v5 = game_HashString((__int64)v4);
  if (v5 != 0) {
    v6 = *(_QWORD*)(GameData_21c9d20 + 96);
    if (v6 != 0 && *(_QWORD*)(GameData_21c9d20 + 112) != 0) {
      v7 = v6 - 1;
      if ((v6 & (v6 - 1)) != 0) {
        v8 = v5;
        if (v5 >= v6) {
          v8 = v5 % v6;
        }
      }
      else {
        v8 = v7 & v5;
      }
      v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d20 + 88) + 8 * v8);
      if (v9 != nullptr) {
        v10 = (_QWORD*)*v9;
        if (v10 != nullptr) {
          if ((v6 & v7) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == v5) {
                if (v10[2] == v5) {
                  goto LABEL_32;
                }
              }
              else if ((v12 & v7) != v8) {
                goto LABEL_35;
              }
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                goto LABEL_35;
              }
            }
          }
          do {
            v11 = v10[1];
            if (v11 == v5) {
              if (v10[2] == v5) {
              LABEL_32:
                v13 = v10[3];
                if (v13 != 0 && *(_WORD*)(v13 + 32) != 0) {
                  v14 = game_RandomSeed_Get(&game_g_game_random,
                                            *(unsigned __int16*)(v13 + 32));
                  GameRoutine_60a020_alt1(
                      (char*)&v129_.v129,
                      *(_QWORD*)(*(_QWORD*)(v13 + 40) + 8LL * v14));
                }
                break;
              }
            }
            else {
              if (v11 >= v6) {
                v11 %= v6;
              }
              if (v11 != v8) {
                break;
              }
            }
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  }
LABEL_35:
  v15 = *v0;
  v16 = (__int64*)(*v0 + 80);
  v17 = *(unsigned __int8*)v16;
  v18 = v17 >> 1;
  if ((v17 & 1) != 0) {
    v18 = *(_QWORD*)(*v0 + 88);
  }
  if (&v129_.v129 != v16 && v18 != 0) {
    if ((v129_.v129 & 1) != 0) {
      v21 = *(_QWORD*)(v15 + 96);
      v22 = v15 + 81;
      if ((v17 & 1) != 0) {
        v23 = v21;
      }
      else {
        v23 = v22;
      }
      SpineModel_64dde0(&v129_.v129, v23, v18);
    }
    else if ((v17 & 1) != 0) {
      GameRoutine_64df20_alt1(&v129_.v129, *(_QWORD*)(v15 + 96),
                              *(_QWORD*)(*v0 + 88));
    }
    else {
      v20 = *(_QWORD*)(*v0 + 88);
      v129_.v129 = *v16;
      v129_.v130 = v20;
      v129_.v131 = (char*)v16[2];
    }
  }
  v126_.v126 = 0x5F646C6569460CLL;
  if ((v129_.v129 & 1) != 0) {
    v24 = v129_.v131;
  }
  else {
    v24 = (char*)&v129_.v129 + 1;
  }
  if ((v129_.v129 & 1) != 0) {
    v25 = v129_.v130;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)v129_.v129 >> 1;
  }
  v26 = (__int64*)GameRoutine_1a09ce0(&v126_.v126, v24, v25);
  v28 = v26[1];
  v27 = v26[2];
  v123_.v123 = *v26;
  v123_.v124 = v28;
  v123_.v125 = (char*)v27;
  v26[1] = 0;
  v26[2] = 0;
  *v26 = 0;
  if ((v88_.v88 & 1) != 0) {
    if ((v123_.v123 & 1) != 0) {
      v29 = v123_.v125;
    }
    else {
      v29 = (char*)&v123_.v123 + 1;
    }
    if ((v123_.v123 & 1) != 0) {
      v30 = v123_.v124;
    }
    else {
      v30 = (unsigned __int64)(unsigned __int8)v123_.v123 >> 1;
    }
    SpineModel_64dde0(&v88_.v88, (__int64)v29, v30);
    if ((v123_.v123 & 1) == 0) {
      goto LABEL_71;
    }
    goto LABEL_67;
  }
  if ((v123_.v123 & 1) == 0) {
    v88_.v88 = v123_.v123;
    v88_.v89 = v123_.v124;
    v88_.v90 = (__int64)v123_.v125;
    goto LABEL_71;
  }
  GameRoutine_64df20_alt1(&v88_.v88, (__int64)v123_.v125, v123_.v124);
  if ((v123_.v123 & 1) != 0) {
  LABEL_67:
    if (v123_.v125 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v123_.v125);
    }
  }
LABEL_71:
  if ((v126_.v126 & 1) != 0 && v126_.v128 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32,
                                  v126_.v128);
  }
  if ((v111_.v111 & 1) != 0 && v111_.v113 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v111_.v113);
  }
  if (*(_QWORD*)(GameData_21f3d10 + 200) != 0) {
    v34 = DungeonController_f5ec20();
    v92 = v34;
    v93 = BYTE4(v34);
  }
  if ((*(_QWORD*)(GameData_21c9608 + 328) & 4LL) != 0) {
    v35 = 1;
  }
  else {
    v35 = *(_DWORD*)(GameData_21c9608 + 308);
  }
  game_eb68e0((void*)((__int64)&v123_.v123), v35);
  v36 = v123_.v123;
  if ((int)v123_.v123 <= 1) {
    v36 = 1;
  }
  if (v36 >= (int)v95) {
    v36 = v95;
  }
  if (v36 >= 5) {
    v36 = 5;
  }
  HIDWORD(v95) = v36;
  game_eb5940((void*)(&v111_.v111));
  v37 = v111_.v111;
  v38 = v111_.v112;
  if ((__int64*)v111_.v111 != v111_.v112) {
    v39 = (__int64*)v111_.v111;
    do {
      v40 = *v39++;
      GameHr_eb8a90((__int64)&v88_.v88, v40, 0);
    } while (v39 != v38);
  }
  if (v37 != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41,
                                  v37);
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    GameHr_eb8d80((__int64)&v88_.v88);
  }
  if ((*(_BYTE*)(GameData_21c9608 + 328) & 1) != 0) {
    v42 = *(_QWORD*)(game_sound_g_game_sound + 8);
    if (v42 != 0 &&
        (snd_BGM_isFirstActive(*(_QWORD*)(game_sound_g_game_sound + 8)) & 1) !=
            0) {
      v43 = snd_BGM_getFirstName(v42);
    }
    else {
      v43 = 0;
    }
    if (v43 != 0) {
      v44 = (char*)v43;
    }
    else {
      v44 = &GameData_1a9f09e;
    }
    GameRoutine_60a020_alt1((char*)v91, (__int64)v44);
    v102_.v107 |= 0x20uLL;
  }
  if (*(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 160LL) == 1) {
    v45 = v102_.v107 | 0x200;
  }
  else {
    v45 = v102_.v107;
  }
  v102_.v107 = v45 | 0x809800;
  v46 = *(_QWORD*)(GameData_21ec7c0 + 24);
  v47 = *(_QWORD*)(GameData_21ec7c0 + 32);
  if (v46 != v47) {
    v48 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)(*(_QWORD*)v46 + 184LL) & 4) != 0) {
        v49 = *(_QWORD*)(*(_QWORD*)v46 + 16LL);
        v111_.v119 = 0;
        v111_.v112 = nullptr;
        v111_.v113 = nullptr;
        v111_.v114 = 0;
        v111_.v115 = 0;
        v111_.v116 = 0;
        v111_.v117 = 0;
        v111_.v118 = 0;
        v111_.v121 = 0x8A00000000LL;
        v111_.v122 = 0;
        v111_.v120 = 0;
        v111_.v111 = v49;
        v50 = v96_.v97;
        if ((unsigned __int64)v96_.v97 >= v96_.v98) {
          v51 = (_QWORD*)GameHr_eba740(&v96_.v96, &v111_.v111);
        }
        else {
          CmdbtlPartyNatives_eba910(v96_.v97, &v111_.v111);
          v51 = v50 + 11;
        }
        v96_.v97 = v51;
        CmdbtlPartyNatives_eb8c40((__int64)&v88_.v88);
        if (v111_.v115 != 0) {
          v52 = *v48;
          v111_.v116 = v111_.v115;
          if (*(_QWORD*)(v52 + 200) != 0) {
            v53 = 128;
          }
          else {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free(v52 + v53, v111_.v115);
        }
        if (v111_.v112 != nullptr) {
          v54 = *v48;
          v111_.v113 = (char*)v111_.v112;
          if (*(_QWORD*)(v54 + 200) != 0) {
            v55 = 128;
          }
          else {
            v55 = 56;
          }
          nn_mem_StandardAllocator_Free(v54 + v55, v111_.v112);
        }
      }
      v46 += 16;
    } while (v46 != v47);
  }
  GameHr_da5c00(&v126_.v126);
  v56 = v126_.v126;
  if (v126_.v127 != v126_.v126) {
    v57 = (v126_.v127 - v126_.v126) >> 3;
    v58 = 0;
    v59 = GameData_212c890[0];
    do {
      v61 = *(_QWORD**)(v56 + 8 * v58);
      v62 = v61[90];
      v63 = v61[91];
      if (v62 != v63) {
        do {
          if ((*(_BYTE*)v62 & 1) != 0) {
            v64 = *(_QWORD*)(v62 + 16);
          }
          else {
            v64 = v62 + 1;
          }
          v65 = game_HashString(v64);
          if (v65 != 0) {
            v66 = *(_QWORD*)(*v59 + 96);
            if (v66 != 0 && *(_QWORD*)(*v59 + 112) != 0) {
              v68 = v66 - 1;
              if ((v66 & (v66 - 1)) != 0) {
                v69 = v65;
                if (v65 >= v66) {
                  v69 = v65 % v66;
                }
              }
              else {
                v69 = v68 & v65;
              }
              v70 = *(_QWORD**)(*(_QWORD*)(*v59 + 88) + 8 * v69);
              if (v70 != nullptr) {
                v71 = (_QWORD*)*v70;
                if (v71 != nullptr) {
                  if ((v66 & v68) == 0) {
                    while (1) {
                      v73 = v71[1];
                      if (v73 == v65) {
                        if (v71[2] == v65) {
                          goto LABEL_166;
                        }
                      }
                      else if ((v73 & v68) != v69) {
                        goto LABEL_137;
                      }
                      v71 = (_QWORD*)*v71;
                      if (v71 == nullptr) {
                        goto LABEL_137;
                      }
                    }
                  }
                  do {
                    v72 = v71[1];
                    if (v72 == v65) {
                      if (v71[2] == v65) {
                      LABEL_166:
                        if (v71[3] != 0) {
                          v111_.v111 = v71[3];
                          v74 = v96_.v97;
                          v111_.v119 = 0;
                          v111_.v112 = nullptr;
                          v111_.v113 = nullptr;
                          v111_.v114 = 0;
                          v111_.v115 = 0;
                          v111_.v116 = 0;
                          v111_.v117 = 0;
                          v111_.v118 = 0;
                          v111_.v121 = 0;
                          v111_.v122 = 0;
                          LODWORD(v111_.v120) = 1;
                          HIDWORD(v111_.v120) = v58;
                          if ((unsigned __int64)v96_.v97 >= v96_.v98) {
                            v75 =
                                (_QWORD*)GameHr_eba740(&v96_.v96, &v111_.v111);
                          }
                          else {
                            CmdbtlPartyNatives_eba910(v96_.v97, &v111_.v111);
                            v75 = v74 + 11;
                          }
                          v96_.v97 = v75;
                          CmdbtlPartyNatives_eb8c40((__int64)&v88_.v88);
                          if (v111_.v115 != 0) {
                            v111_.v116 = v111_.v115;
                            v76 = 128;
                            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) ==
                                0) {
                              v76 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                fw_memory_g_heap_manager + v76, v111_.v115);
                          }
                          if (v111_.v112 != nullptr) {
                            v111_.v113 = (char*)v111_.v112;
                            v77 = 128;
                            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) ==
                                0) {
                              v77 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                fw_memory_g_heap_manager + v77, v111_.v112);
                          }
                        }
                        break;
                      }
                    }
                    else {
                      if (v72 >= v66) {
                        v72 %= v66;
                      }
                      if (v72 != v69) {
                        break;
                      }
                    }
                    v71 = (_QWORD*)*v71;
                  } while (v71 != nullptr);
                }
              }
            }
          }
        LABEL_137:
          v62 += 24;
        } while (v62 != v63);
        v61 = *(_QWORD**)(v56 + 8 * v58);
      }
      v78 = v102_.v103;
      v79 = v61 + 87;
      if ((unsigned __int64)v102_.v103 >= v102_.v104) {
        v60 = Manager_66cc20(&v102_.v102, v79);
      }
      else if ((*(_BYTE*)v79 & 1) != 0) {
        fw_text_String_CopyTerminated(v102_.v103, v61[89], v61[88]);
        v60 = v78 + 3;
      }
      else {
        v80 = *v79;
        v81 = v79[2];
        v60 = v102_.v103 + 3;
        v102_.v103[1] = v79[1];
        v78[2] = v81;
        *v78 = v80;
      }
      ++v58;
      v102_.v103 = v60;
    } while (v58 != v57);
  }
  if (*(_DWORD*)(v87 + 16) == 1) {
    v102_.v107 |= 2uLL;
  }
  if (v56 != 0) {
    v82 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v82,
                                  v56);
  }
  if (v123_.v124 != 0) {
    v83 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v83,
                                  v123_.v124);
  }
  if ((v129_.v129 & 1) != 0 && v129_.v131 != nullptr) {
    v84 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v84,
                                  v129_.v131);
  }
LABEL_198:
  ProcCmdBtlSeq_e61c90((__int64)&GameData_2216780, (__int64)&v88_.v88);
  if (v102_.v110 == 1 && v102_.v108 != 0) {
    v102_.v109 = v102_.v108;
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v85,
                                  v102_.v108);
  }
  return GameHr_667c80((__int64)&v88_.v88);
}

__int64 GameHr_e618a0(long double a1)
{
  __int64* v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;

  v1 = GameData_212dec0[0];
  result = *GameData_212dec0[0];
  if ((*(_BYTE*)(*GameData_212dec0[0] + 9) & 1) == 0 &&
      (*(_BYTE*)(*GameData_212dec0[0] + 10) & 1) == 0 &&
      *(_BYTE*)(*GameData_212dec0[0] + 11) == 0) {
    goto LABEL_4;
  }
  if (*(_BYTE*)(*GameData_212dec0[0] + 10) != 0) {
    v5 = 3;
  }
  else {
    v5 = 2;
  }
  if (*(_BYTE*)(result + 12) != 0) {
    v5 = 4;
  }
  if ((((unsigned __int8)(*(_BYTE*)(result + 12) |
                          *(_BYTE*)(*GameData_212dec0[0] + 9)) |
        *(_BYTE*)(*GameData_212dec0[0] + 10)) &
       1) == 0) {
    v5 = 5;
    if ((*(_BYTE*)(*GameData_212dec0[0] + 11) & 1) == 0) {
      v5 = *(unsigned __int8*)(result + 8);
    }
  }
  if ((unsigned int)(v5 - 2) >= 2) {
    if (v5 != 5) {
    LABEL_4:
      if ((*(_BYTE*)(result + 13) & 1) != 0) {
        goto LABEL_7;
      }
      if ((GameData_2216858 & 1) != 0) {
        if ((GameData_2216820 & 8) == 0) {
        LABEL_7:
          *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
          v3 = GameData_2219068;
          if (GameData_2219068 == 0) {
            return result;
          }
          result = *(_QWORD*)(GameData_2219068 + 192);
          *(_QWORD*)(GameData_2219068 + 152) = 0;
          *(_QWORD*)(v3 + 192) = 0;
          if (result == v3 + 160) {
            v4 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_31;
            }
            v4 = 40;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v4))(
              (__int64)result);
        LABEL_31:
          v8 = *(_QWORD*)(v3 + 8);
          if (v8 != 0) {
            while (1) {
              if (*(_BYTE*)v8 == 2) {
                if (*(_DWORD*)(v8 + 32) == 12) {
                  goto LABEL_98;
                }
              }
              else if (*(_BYTE*)v8 == 0) {
                return result;
              }
              v8 += 64;
            }
          }
          return result;
        }
        result = GameRoutine_ec17d0();
        if ((result & 1) != 0) {
          result = GameRoutine_ec0820(*v1);
          *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
          v3 = GameData_2219068;
          if (GameData_2219068 == 0) {
            return result;
          }
          result = *(_QWORD*)(GameData_2219068 + 192);
          *(_QWORD*)(GameData_2219068 + 152) = 0;
          *(_QWORD*)(v3 + 192) = 0;
          if (result == v3 + 160) {
            v9 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_73;
            }
            v9 = 40;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v9))(
              (__int64)result);
        LABEL_73:
          v8 = *(_QWORD*)(v3 + 8);
          if (v8 != 0) {
            while (1) {
              if (*(_BYTE*)v8 == 2) {
                if (*(_DWORD*)(v8 + 32) == 17) {
                  goto LABEL_98;
                }
              }
              else if (*(_BYTE*)v8 == 0) {
                return result;
              }
              v8 += 64;
            }
          }
          return result;
        }
        if ((GameData_2216858 & 1) != 0) {
          v10 = (unsigned __int8)GameData_2216850;
          *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
          v3 = GameData_2219068;
          if (v10 == 1) {
            if (GameData_2219068 == 0) {
              return result;
            }
            result = *(_QWORD*)(GameData_2219068 + 192);
            *(_QWORD*)(GameData_2219068 + 152) = 0;
            *(_QWORD*)(v3 + 192) = 0;
            if (result == v3 + 160) {
              v11 = 32;
            }
            else {
              if (result == 0) {
                goto LABEL_82;
              }
              v11 = 40;
            }
            result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v11))(
                (__int64)result);
          LABEL_82:
            v8 = *(_QWORD*)(v3 + 8);
            if (v8 != 0) {
              while (1) {
                if (*(_BYTE*)v8 == 2) {
                  if (*(_DWORD*)(v8 + 32) == 16) {
                    goto LABEL_98;
                  }
                }
                else if (*(_BYTE*)v8 == 0) {
                  return result;
                }
                v8 += 64;
              }
            }
            return result;
          }
          if (GameData_2219068 == 0) {
            return result;
          }
          result = *(_QWORD*)(GameData_2219068 + 192);
          *(_QWORD*)(GameData_2219068 + 152) = 0;
          *(_QWORD*)(v3 + 192) = 0;
          if (result == v3 + 160) {
            v12 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_91;
            }
            v12 = 40;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v12))(
              (__int64)result);
        LABEL_91:
          v8 = *(_QWORD*)(v3 + 8);
          if (v8 != 0) {
            while (1) {
              if (*(_BYTE*)v8 == 2) {
                if (*(_DWORD*)(v8 + 32) == 15) {
                  goto LABEL_98;
                }
              }
              else if (*(_BYTE*)v8 == 0) {
                return result;
              }
              v8 += 64;
            }
          }
          return result;
        }
      }
      GameRoutine_8123d0(result, a1);
    }
    *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
    v3 = GameData_2219068;
    if (GameData_2219068 == 0) {
      return result;
    }
    result = *(_QWORD*)(GameData_2219068 + 192);
    *(_QWORD*)(GameData_2219068 + 152) = 0;
    *(_QWORD*)(v3 + 192) = 0;
    if (result == v3 + 160) {
      v7 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_60;
      }
      v7 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v7))((__int64)result);
  LABEL_60:
    v8 = *(_QWORD*)(v3 + 8);
    if (v8 == 0) {
      return result;
    }
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*(_DWORD*)(v8 + 32) == 14) {
        LABEL_98:
          *(_QWORD*)(v3 + 16) = v8;
          *(_WORD*)(v3 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        return result;
      }
      v8 += 64;
    }
  }
  *(_BYTE*)(*(_QWORD*)GameData_212f510[0] + 11LL) = 1;
  v3 = GameData_2219068;
  if (GameData_2219068 == 0) {
    return result;
  }
  result = *(_QWORD*)(GameData_2219068 + 192);
  *(_QWORD*)(GameData_2219068 + 152) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  if (result == v3 + 160) {
    v6 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_45;
    }
    v6 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v6))((__int64)result);
LABEL_45:
  v8 = *(_QWORD*)(v3 + 8);
  if (v8 != 0) {
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*(_DWORD*)(v8 + 32) == 13) {
          goto LABEL_98;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        return result;
      }
      v8 += 64;
    }
  }
  return result;
}

__int64 GameHr_e697e0(long double a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD v4[4];
  _QWORD* v5;

  v5 = v4;
  v1 = *GameData_212ea58;
  v4[0] = GameData_1fece38;
  GameRoutine_e9a800(v1, v4, a1);
  if (v5 == v4) {
    v2 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v5 + v2))((__int64)v5);
LABEL_6:
  result = GameRoutine_1007270(GameData_22190c0);
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    result = GameData_22190b8;
    if (GameData_22190b8 != 0) {
      return GameRoutine_17c8500();
    }
  }
  return result;
}

#pragma GCC visibility pop
