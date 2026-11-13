#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b01648[4];

extern __int64 (*GameData_1f9c648[])();

extern __int64 (*GameData_1fa2638[])();

extern __int64 (*GameData_1fa2ad0[])();

extern __int64 (*GameData_1fa2ba0[])();

extern __int64 (*GameData_1fa2c50[])();

extern __int64 (*GameData_1fa2eb0[])();

extern __int64 (*GameData_1fa3370[])();

extern __int64 GameData_1fa3820;

extern __int64 (*GameData_1fa3a90[])();

extern __int64 (*GameData_1fa3cf8[])();

extern __int64 GameData_212bf68;

extern __int64 GameData_212c470;

extern _UNKNOWN* GameData_212c730;

extern __int64* GameData_212c880[5];

extern __int64* GameData_212cfc0[10];

extern __int64* GameData_212cfd0[8];

extern __int64* GameData_212d000[2];

extern __int64* GameData_212d660[5];

extern __int64* GameData_212d668[4];

extern __int64* GameData_212d6a8;

extern _UNKNOWN* GameData_212d6b0;

extern __int64* GameData_2132010[2];

extern int GameData_21668d0;

extern __int64 GameData_21c9988;

extern __int64 GameData_21c99b8;

extern __int64 GameData_21caab0;

extern __int64 GameData_21cd120;

extern __int64 GameData_21cd128;

extern __int64 GameData_21cd130;

extern __int64 GameData_21cd138;

extern __int64 GameData_21cd140;

extern int GameData_21d87f8;

extern __int64 GameData_21d8800;

extern __int64 GameData_21d8808;

extern int GameData_21d8828;

extern __int64 GameData_21d8830;

extern __int64 GameData_21d8838;

extern __int64 GameData_21d9c88;

extern __int64 GameData_21d9cb8;

extern __int64 GameData_21d9cc8;

extern __int64 GameData_21d9ce8;

extern __int64 GameData_21d9d00;

extern __int64 GameData_21d9d18;

extern __int64 GameData_21d9d60;

extern int GameData_21d9d7c;

extern __int64 GameData_21eea58;

extern __int64 GameData_21f1648;

extern __int64 GameData_21f2288;

extern __int64 GameData_21f2290;

extern __int64 GameData_21f49b8;

extern __int64 GameData_2258ba8;

extern __int64 GameData_2265ef8;

__int64 GameRoutine_15317a0(_QWORD);

__int64 GameRoutine_1567000(_QWORD, _QWORD);

__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_16dea40(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);

__int64 GameRoutine_1990fb0(_QWORD);

__int64 GameRoutine_1a070b0(void);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_6ea8c0(_QWORD);

__int64 GameRoutine_6fc510(_QWORD);

__int64 GameRoutine_6fcdd0(_QWORD, _QWORD);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_80e330(_QWORD, _QWORD);

__int64 GameRoutine_825040(_QWORD, _QWORD);

__int64 GameRoutine_834ea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_8350c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);

__int64 GameRoutine_84ebe0(_QWORD, _QWORD);

__int64 GameRoutine_8c77c0(_QWORD);

__int64 GameRoutine_9a28e0(_QWORD);

__int64 GameRoutine_a2d080(_QWORD);

__int64 GameRoutine_a2f660(_QWORD);

__int64 GameRoutine_c8b5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);

__int64 GameRoutine_d2f6f0(_QWORD);

_QWORD* AssetTableFile_7e73c0(__int64);

_QWORD* ConditionMap_7f2ec0(__int64*, __int64);

_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);

__int64* AssetTableFile_7ea4e0(__int64* result);

__int64* AssetTableFile_7ea680(__int64* result);

__int64* AssetTableFile_7f2a20(__int64* result, unsigned __int64*);

__int64* GameRoutine_7d6200_alt1(__int64* result,
                                 _DWORD*) __asm__("GameRoutine_7d6200");

__int64* game_9a28e0(int);

__int64 ConditionMap_7ea0c0(__int64 result);

__int64 ConditionMap_7ea800(__int64 result);

__int64 GameRoutine_85a540_alt1(__int64 result, unsigned int,
                                __int64) __asm__("GameRoutine_85a540");

__int64 GameRoutine_96de20_alt1(__int64) __asm__("GameRoutine_96de20");

__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);

__int64 game_HashString(__int64 result);

extern __int64 game_GameModeData_instance_;

__int64* GameHr_7eae80(__int64* result, unsigned int a2);

__int64 GameManager_a2d1c0(__int64 result, __int64, char);

__int64 snd_Fade_Destroy_Fade(_QWORD*);

__int64 snd_Fade_Fade_10cb00(__int64, unsigned __int8*);

extern __int64 game_sound_g_game_sound;

__int64 GameHr_86fc30();

_QWORD* GameRoutine_8768e0_alt1(_QWORD* result) __asm__("GameRoutine_8768e0");

__int64 GameRoutine_66aae0_alt1() __asm__("GameRoutine_66aae0");

__int64 GameRoutine_877680_alt1(__int64*) __asm__("GameRoutine_877680");

__int64 VariableManager_7150e0();

__int64 game_GetHero(unsigned __int8);

__int64 game_GrowthListFile_GetJob(__int64*, __int64, char);

__int64 nn_oe_GetProgramTotalActiveTime();

__int64 nn_os_ConvertToTick(_QWORD);

bool GameRoutine_876070_alt1(unsigned __int8*,
                             __int64) __asm__("GameRoutine_876070");

bool game_877f00(const char**, __int64, __int64);

int* GameRoutine_8767a0_alt1(int* result) __asm__("GameRoutine_8767a0");

bool GameHr_8789c0(const char** a1);

__int64 GameHr_7bd090(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(
          a1, 27, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          0, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_7bd110(__int64 a1)
{
  __int64 result;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    if (result != 0 && *GameData_212d000[0] != 0) {
      return GameRoutine_c8b5a0(
          a1, 28, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          0, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_7bd4f0(__int64 a1)
{
  __int64 result;
  bool v3;
  __int64 v4;
  __int64 v5;

  result = *GameData_212cfd0[0] + 8;
  if (*(_BYTE*)result != 0) {
    result = GameRoutine_6ea8c0(result);
    v3 = result == 0 || *GameData_212d000[0] == 0;
    if (!v3 && (*(_BYTE*)(result + 416) & 1) != 0) {
      v4 = *(_QWORD*)(result + 440);
      if (v4 != 0) {
        v5 = *(unsigned __int8*)(v4 + 16);
      }
      else {
        v5 = 9;
      }
      return GameRoutine_c8b5a0(
          a1, 31, result, *(unsigned __int16*)(*(_QWORD*)(result + 392) + 16LL),
          v5, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    }
  }
  return result;
}

__int64 GameHr_7c6310()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return GameRoutine_825040(GameData_21cd128, 16);
  }
  return result;
}

__int64 GameHr_7c68c0()
{
  __int64 v0;
  int v1;
  __int64 result;
  int v3;

  GameRoutine_d2f6f0(GameData_21cd138);
  v0 = GameData_21cd140;
  v1 = *(_DWORD*)(GameData_21cd140 + 424) - 1;
  *(_DWORD*)(GameData_21cd140 + 424) = v1;
  if (v1 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v0 + 416) + 8LL))(v0 + 416);
  }
  result = GameData_21cd130;
  v3 = *(_DWORD*)(GameData_21cd130 + 40) - 1;
  *(_DWORD*)(GameData_21cd130 + 40) = v3;
  if (v3 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(result + 32) + 8LL))(result +
                                                                     32);
  }
  return result;
}

__int64* GameHr_7eae80(__int64* result, unsigned int a2)
{
  __int64 v3;
  __int64* i;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD** v44;
  _QWORD** v45;
  _QWORD* v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  unsigned __int64* v52;
  unsigned __int64* v53;
  __int64* v54;
  struct {
    __int64 v55[4];
    __int64* v56;
  } v55_;
  int v57;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (result == nullptr) {
    return result;
  }
  v3 = (__int64)result;
  if ((GameData_21d9d7c & 0x80) == 0) {
    for (i = result; i != nullptr; i = (__int64*)i[78]) {
      v5 = i;
    }
    if (*((_BYTE*)v5 + 441) != 3) {
      goto LABEL_12;
    }
    v6 = result[78];
    if (v6 == 0) {
      v6 = (__int64)result;
    }
    v55_.v55[0] = v6;
    v57 = 241;
    v7 = game_UnitPool_Find_6ead60(v55_.v55, &v57),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v7 != nullptr) {
      result = v7 + 263;
      goto LABEL_13;
    }
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v8 + 144) != 0) {
      result = (__int64*)(v8 + 112);
    }
    else {
    LABEL_12:
      result = &GameData_21f49b8;
    }
  LABEL_13:
    if (*((_BYTE*)result + 32) != 0) {
      result = (__int64*)ConditionMap_7ea0c0((__int64)result),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  if ((GameData_21d9d7c & 1) != 0) {
    return result;
  }
  GameData_21d9d7c |= 1u;
  v9 = *(_QWORD*)v3;
  if (*(_QWORD*)v3 != 0) {
    v10 = *(_QWORD*)(GameData_21d9d00 + 8 * (*(_QWORD*)v3 & 0xFFFLL));
    if (v10 != 0) {
      v11 = *(_QWORD**)(GameData_21d9d00 + 8 * (*(_QWORD*)v3 & 0xFFFLL));
      while (*v11 != v9) {
        v11 = (_QWORD*)v11[1];
        if (v11 == nullptr) {
          v12 = *(_QWORD**)(GameData_21d9d00 + 8 * (*(_QWORD*)v3 & 0xFFFLL));
          while (*v12 != v9) {
            v12 = (_QWORD*)v12[1];
            if (v12 == nullptr) {
              do {
                v13 = v10;
                v10 = *(_QWORD*)(v10 + 8);
              } while (v10 != 0);
              *(_QWORD*)(v13 + 8) = ConditionMap_7f2ec0(&GameData_21d9ce8, v9),
                               v5 =
                                   COERCE_AS(__typeof__(v5),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x8", "=r"));
              goto LABEL_27;
            }
          }
          break;
        }
      }
    }
    else {
      LODWORD(v55_.v55[0]) = v9 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 +
                 8 * (v9 & 0xFFF)) = ConditionMap_7f2ec0(&GameData_21d9ce8, v9),
                           v5 = COERCE_AS(
                               __typeof__(v5),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      GameRoutine_7d6200_alt1(&GameData_21d9d18, v55_.v55),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
LABEL_27:
  AssetTableFile_7ea4e0((__int64*)*(unsigned __int8*)(v3 + 441)),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v14 = *(__int64**)(v3 + 336);
  if (v14 != nullptr) {
    v14 = (__int64*)GameRoutine_96de20_alt1((__int64)v14),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  AssetTableFile_7ea680(v14),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v15 = game_HashString(*(_QWORD*)(v3 + 632)),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v15 != 0) {
    v16 = *(_QWORD*)(GameData_21d9d00 + 8 * (v15 & 0xFFF));
    if (v16 != 0) {
      v17 = *(_QWORD**)(GameData_21d9d00 + 8 * (v15 & 0xFFF));
      while (*v17 != v15) {
        v17 = (_QWORD*)v17[1];
        if (v17 == nullptr) {
          v18 = *(_QWORD**)(GameData_21d9d00 + 8 * (v15 & 0xFFF));
          while (*v18 != v15) {
            v18 = (_QWORD*)v18[1];
            if (v18 == nullptr) {
              do {
                v19 = v16;
                v16 = *(_QWORD*)(v16 + 8);
              } while (v16 != 0);
              *(_QWORD*)(v19 + 8) = ConditionMap_7f2ec0(&GameData_21d9ce8, v15),
                               v5 =
                                   COERCE_AS(__typeof__(v5),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x8", "=r"));
              goto LABEL_40;
            }
          }
          break;
        }
      }
    }
    else {
      LODWORD(v55_.v55[0]) = v15 & 0xFFF;
      *(_QWORD*)(GameData_21d9d00 +
                 8 * (v15 & 0xFFF)) =
          ConditionMap_7f2ec0(&GameData_21d9ce8, v15),
                            v5 = COERCE_AS(__typeof__(v5),
                                           PSEUDO_REGISTER(unsigned long long,
                                                           "x8", "=r"));
      GameRoutine_7d6200_alt1(&GameData_21d9d18, v55_.v55),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
LABEL_40:
  result = *(__int64**)(v3 + 648);
  if (result != nullptr) {
    v55_.v55[0] = (__int64)GameData_1f9c648;
    v55_.v55[1] = (__int64)&GameData_21d9ce8;
    v55_.v56 = v55_.v55;
    GameRoutine_85a540_alt1((__int64)result, a2, (__int64)v55_.v55),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    result = v55_.v56;
    if (v55_.v56 == v55_.v55) {
      v20 = 32;
    }
    else {
      if (v55_.v56 == nullptr) {
        goto LABEL_46;
      }
      v20 = 40;
    }
    result = (__int64*)(*(__int64 (**)(__int64))(*v55_.v56 + v20))(
        (__int64)v55_.v56),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
LABEL_46:
  v21 = *(_QWORD*)(v3 + 64);
  if (v21 != 0) {
    if (*(_QWORD*)(v21 + 88) != 0) {
      v22 = *(_QWORD*)(v21 + 88);
    }
    else {
      v22 = *(_QWORD*)(v3 + 64);
    }
    result = (__int64*)ConditionMap_7ea800(v22),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  if (*(_QWORD*)(v3 + 664) != 0) {
    GameData_21d9d60 = *(_QWORD*)(v3 + 664);
  }
  v23 = *(_QWORD*)(v3 + 24);
  if (*(_QWORD*)(v23 + 1392) == 0) {
    goto LABEL_93;
  }
  result = game_9a28e0(40),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_93;
  }
  v24 = *(_QWORD**)(game_GameModeData_instance_ + 48);
  result =
      (__int64*)game_GameVariableTable_Find(v24, (unsigned __int64*)result),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (result != nullptr && *((_DWORD*)result + 8) != 0) {
    goto LABEL_93;
  }
  result = (__int64*)game_GameVariableTable_Find(
      v24, (unsigned __int64*)(v23 + 1392)),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (result == nullptr) {
    goto LABEL_93;
  }
  v25 = *((unsigned __int8*)result + 32);
  if (v25 == 2) {
    if (GameData_21d9cc8 != 0) {
      v33 = *(_QWORD*)(GameData_21d9d00 + 8 * (GameData_21d9cc8 & 0xFFF));
      if (v33 != 0) {
        v34 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9cc8 & 0xFFF));
        while (*v34 != GameData_21d9cc8) {
          v34 = (_QWORD*)v34[1];
          if (v34 == nullptr) {
            v35 =
                *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9cc8 & 0xFFF));
            while (*v35 != GameData_21d9cc8) {
              v35 = (_QWORD*)v35[1];
              if (v35 == nullptr) {
                do {
                  v36 = v33;
                  v33 = *(_QWORD*)(v33 + 8);
                } while (v33 != 0);
                result =
                    ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9cc8),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                *(_QWORD*)(v36 + 8) = result;
                goto LABEL_81;
              }
            }
            break;
          }
        }
      }
      else {
        LODWORD(v55_.v55[0]) = GameData_21d9cc8 & 0xFFF;
        v32 = GameData_21d9cc8 & 0xFFF;
        *(_QWORD*)(GameData_21d9d00 +
                   8 * v32) =
            ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9cc8),
                       v5 = COERCE_AS(
                           __typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        result = GameRoutine_7d6200_alt1(&GameData_21d9d18, v55_.v55),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
  LABEL_81:
    v26 = GameData_21d9c88;
    if (GameData_21d9c88 == 0) {
      goto LABEL_92;
    }
    v27 = GameData_21d9c88 & 0xFFF;
    v37 = *(_QWORD*)(GameData_21d9d00 + 8 * v27);
    if (v37 != 0) {
      v38 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c88 & 0xFFF));
      while (*v38 != GameData_21d9c88) {
        v38 = (_QWORD*)v38[1];
        if (v38 == nullptr) {
          v39 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c88 & 0xFFF));
          while (*v39 != GameData_21d9c88) {
            v39 = (_QWORD*)v39[1];
            if (v39 == nullptr) {
              do {
                v31 = v37;
                v37 = *(_QWORD*)(v37 + 8);
              } while (v37 != 0);
            LABEL_90:
              result = ConditionMap_7f2ec0(&GameData_21d9ce8, v26),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
              *(_QWORD*)(v31 + 8) = result;
              goto LABEL_92;
            }
          }
          goto LABEL_92;
        }
      }
      goto LABEL_92;
    }
  LABEL_91:
    LODWORD(v55_.v55[0]) = v26 & 0xFFF;
    *(_QWORD*)(GameData_21d9d00 +
               8 * v27) = ConditionMap_7f2ec0(&GameData_21d9ce8, v26),
                   v5 = COERCE_AS(
                       __typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    result = GameRoutine_7d6200_alt1(&GameData_21d9d18, v55_.v55),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    goto LABEL_92;
  }
  if (v25 != 1) {
    goto LABEL_93;
  }
  v26 = GameData_21d9cb8;
  if (GameData_21d9cb8 != 0) {
    v27 = GameData_21d9cb8 & 0xFFF;
    v28 = *(_QWORD*)(GameData_21d9d00 + 8 * v27);
    if (v28 != 0) {
      v29 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9cb8 & 0xFFF));
      while (*v29 != GameData_21d9cb8) {
        v29 = (_QWORD*)v29[1];
        if (v29 == nullptr) {
          v30 = *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9cb8 & 0xFFF));
          while (*v30 != GameData_21d9cb8) {
            v30 = (_QWORD*)v30[1];
            if (v30 == nullptr) {
              do {
                v31 = v28;
                v28 = *(_QWORD*)(v28 + 8);
              } while (v28 != 0);
              goto LABEL_90;
            }
          }
          goto LABEL_92;
        }
      }
      goto LABEL_92;
    }
    goto LABEL_91;
  }
LABEL_92:
  GameData_21d9d7c |= 0x100u;
LABEL_93:
  v40 = GameData_21d9d7c;
  if ((GameData_21d9d7c & 0x100) == 0) {
    v40 = GameData_21d9d7c | 0x100;
    GameData_21d9d7c |= 0x100u;
    if (game_GameModeData_instance_ != 0) {
      v41 = *(unsigned int*)(game_GameModeData_instance_ + 60);
      v42 = (unsigned int)v41 > 3 ? 1712LL : GameData_1b01648[v41];
    }
    else {
      v42 = 1760;
    }
    v43 = *(_QWORD*)(v3 + 24) + v42;
    v44 = *(_QWORD***)v43;
    v45 = *(_QWORD***)(v43 + 8);
    if (*(_QWORD***)v43 != v45) {
      do {
        v46 = *(_QWORD**)(GameData_21d9d00 + 8 * (**v44 & 0xFFFLL));
        if (v46 != nullptr) {
          while (*v46 != **v44) {
            v46 = (_QWORD*)v46[1];
            if (v46 == nullptr) {
              goto LABEL_102;
            }
          }
          if (GameData_21d9c88 != 0) {
            v48 =
                *(_QWORD**)(GameData_21d9d00 + 8 * (GameData_21d9c88 & 0xFFF));
            v49 = v48;
            if (v48 != nullptr) {
              while (*v49 != GameData_21d9c88) {
                v49 = (_QWORD*)v49[1];
                if (v49 == nullptr) {
                  v50 = *(_QWORD**)(GameData_21d9d00 +
                                    8 * (GameData_21d9c88 & 0xFFF));
                  while (*v50 != GameData_21d9c88) {
                    v50 = (_QWORD*)v50[1];
                    if (v50 == nullptr) {
                      do {
                        v51 = v48;
                        v48 = (_QWORD*)v48[1];
                      } while (v48 != nullptr);
                      result = ConditionMap_7f2ec0(&GameData_21d9ce8,
                                                   GameData_21d9c88),
                      v5 = COERCE_AS(
                          __typeof__(v5),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                      v51[1] = result;
                      goto LABEL_102;
                    }
                  }
                  break;
                }
              }
            }
            else {
              LODWORD(v55_.v55[0]) = GameData_21d9c88 & 0xFFF;
              v47 = GameData_21d9c88 & 0xFFF;
              *(_QWORD*)(GameData_21d9d00 +
                         8 * v47) =
                  ConditionMap_7f2ec0(&GameData_21d9ce8, GameData_21d9c88),
                             v5 = COERCE_AS(__typeof__(v5),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x8", "=r"));
              result = GameRoutine_7d6200_alt1(&GameData_21d9d18, v55_.v55),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            }
          }
        }
      LABEL_102:
        ++v44;
      } while (v44 != v45);
      v40 = GameData_21d9d7c;
    }
  }
  if ((v40 & 0x40) == 0) {
    GameData_21d9d7c = v40 | 0x40;
    result = AssetTableFile_7e73c0(v3),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v52 = (unsigned __int64*)*result;
    v53 = (unsigned __int64*)result[1];
    if ((unsigned __int64*)*result != v53) {
      do {
        if (game_GameModeData_instance_ != 0) {
          v54 = (__int64*)(game_GameModeData_instance_ + 40);
        }
        else {
          v54 = nullptr;
        }
        result = AssetTableFile_7f2a20(v54, v52),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v52 += 2;
      } while (v52 != v53);
    }
  }
  return result;
}

__int64 GameHr_834c40(__int64 result, __int64* a2,
                      __int64 (**a3)(__int64, __int64), unsigned __int64 a4,
                      __int64* a5, signed __int64 a6)
{
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (a4 >= 2) {
    v8 = (_QWORD*)result;
    if (a4 == 2) {
      result = (*a3)(*(a2 - 1), *(_QWORD*)result);
      if ((result & 1) != 0) {
        v9 = *v8;
        *v8 = *(a2 - 1);
        *(a2 - 1) = v9;
      }
    }
    else if ((__int64)a4 > 128) {
      v18 = a4 >> 1;
      v19 = a5;
      v20 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        GameRoutine_834ea0(result, result + 8 * v18, a3, a4 >> 1, a5);
        v23 = &v19[v18];
        result = GameRoutine_834ea0(&v8[v18], a2, a3, v20, v23);
        v24 = &v19[a4];
        v25 = v23;
        while (v25 != v24) {
          result = (*a3)(*v25, *v19);
          if ((result & 1) != 0) {
            v26 = v25;
          }
          else {
            v26 = v19;
          }
          if ((result & 1) != 0) {
            v27 = 0;
          }
          else {
            v27 = 8;
          }
          v28 = *v26;
          v19 = (__int64*)((char*)v19 + v27);
          if ((result & 1) != 0) {
            v29 = 8;
          }
          else {
            v29 = 0;
          }
          v25 = (__int64*)((char*)v25 + v29);
          *v8++ = v28;
          if (v19 == v23) {
            while (v25 != v24) {
              v31 = *v25++;
              *v8++ = v31;
            }
            return result;
          }
        }
        while (v19 != v23) {
          v30 = *v19++;
          *v8++ = v30;
        }
      }
      else {
        GameHr_834c40(result, result + 8 * v18, a3, a4 >> 1, a5, a6);
        GameHr_834c40(&v8[v18], a2, a3, v20, v19, a6);
        return GameRoutine_8350c0(v8, &v8[v18], a2, a3, v18, v20, v19, a6);
      }
    }
    else if ((__int64*)result != a2) {
      v10 = (__int64*)(result + 8);
      if ((__int64*)(result + 8) != a2) {
        v11 = 0;
        v12 = (__int64*)result;
        do {
          v15 = *v12;
          v14 = v12[1];
          v12 = v10;
          result = (*a3)(v14, v15);
          if ((result & 1) != 0) {
            v16 = *v12;
            v17 = v11;
            do {
              *(_QWORD*)((char*)v8 + v17 + 8) = *(_QWORD*)((char*)v8 + v17);
              if (v17 == 0) {
                v13 = v8;
                goto LABEL_11;
              }
              result = (*a3)(v16, *(_QWORD*)((char*)v8 + v17 - 8));
              v17 -= 8;
            } while ((result & 1) != 0);
            v13 = (_QWORD*)((char*)v8 + v17 + 8);
          LABEL_11:
            *v13 = v16;
          }
          v10 = v12 + 1;
          v11 += 8;
        } while (v12 + 1 != a2);
      }
    }
  }
  return result;
}

__int64 GameHr_843780(_DWORD* a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  unsigned int v6;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BOOL4 v20;
  int v21;
  int v22;
  unsigned int v23;

  if (a2 == 0) {
    return 0;
  }
  if ((*a1 & 0xFFF) == 0) {
    return 0;
  }
  v4 = GameData_212c880[0];
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a1 & 0xFFF));
  if ((GameRoutine_6fc510(v5) & 1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(v5 + 273) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8 * (*a1 & 0xFFFLL));
    v9 = *(unsigned __int8*)(v8 + 104);
    v10 = *(unsigned __int8*)(v8 + 273);
    v11 = (unsigned int)(v9 - 5) >= 2 ? 0 : (*a1 >> 19) & 0x1F;
    if ((int)(v11 - ((*a1 >> 12) & 0x7F) + v10) < 1) {
      return 0;
    }
  }
  v12 = *(_QWORD*)(v5 + 24);
  if (*(_BYTE*)(v12 + 1122) == 1) {
    v13 = *(_QWORD*)(v12 + 800);
    v14 = *(_QWORD*)(v12 + 808);
    if (v14 != v13) {
      while (
          (unsigned int)GameRoutine_84ebe0(v13, a2 + 1744) !=
          (unsigned int)((*(_QWORD*)(v13 + 40) - *(_QWORD*)(v13 + 32)) >> 2)) {
        v13 += 96;
        v6 = 0;
        if (v13 == v14) {
          return v6;
        }
      }
    }
    v15 = *(_QWORD*)(v12 + 824);
    v16 = *(_QWORD*)(v12 + 832);
    if (v16 != v15) {
      while (
          (unsigned int)GameRoutine_84ebe0(v15, a2 + 1744) !=
          (unsigned int)((*(_QWORD*)(v15 + 40) - *(_QWORD*)(v15 + 32)) >> 2)) {
        v15 += 96;
        if (v15 == v16) {
          goto LABEL_19;
        }
      }
      return 0;
    }
  }
LABEL_19:
  v6 = 1;
  v17 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*a1 & 0xFFF)) + 24LL);
  v18 = *(_QWORD*)(v17 + 1040);
  v19 = *(_QWORD*)(v17 + 1048);
  while (v18 != v19) {
    if (*(_BYTE*)(v18 + 4) != 0) {
      v21 = GameRoutine_6fcdd0(a2, *(unsigned __int16*)(v18 + 2));
      v22 = GameRoutine_6fcdd0(a2, *(unsigned __int16*)(v18 + 6));
      v23 = *(unsigned __int8*)(v18 + 4);
      v20 = false;
      if (v23 > 3) {
        switch (v23) {
        case 4u:
          v20 = v21 >= v22;
          break;
        case 5u:
          v20 = v21 < v22;
          break;
        case 6u:
          v20 = v21 > v22;
          break;
        default:
          break;
        }
      }
      else {
        switch (v23) {
        case 1u:
          v20 = v21 == v22;
          break;
        case 2u:
          v20 = v21 != v22;
          break;
        case 3u:
          v20 = v21 <= v22;
          break;
        default:
          break;
        }
      }
    }
    else {
      v20 = true;
    }
    v6 &= v20;
    v18 += 8;
  }
  return v6;
}

__int64 GameHr_86c160(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v26;
  __int64 v27;

  v2 = (_QWORD*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1312, 16, 0);
  v26 = 0;
  v27 = 0;
  GameRoutine_16dcd30(v3, "MapSystemMenu", &v26, 0);
  v4 = GameData_212d6a8;
  v5 = v27;
  *(_QWORD*)v3 = GameData_212d6a8 + 2;
  *(_QWORD*)(v3 + 176) = v4 + 143;
  *(_QWORD*)(v3 + 1056) = v4 + 169;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  *(_BYTE*)(v3 + 1064) = 0;
  *(_DWORD*)(v3 + 1280) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 1088) = 0;
  *(_DWORD*)(v3 + 1068) = 4;
  *(_QWORD*)(v3 + 1096) = 0;
  *(_QWORD*)(v3 + 1104) = 0;
  *(_QWORD*)(v3 + 1112) = 0;
  *(_QWORD*)(v3 + 1120) = 0;
  *(_QWORD*)(v3 + 1128) = 0;
  *(_QWORD*)(v3 + 1136) = 0;
  *(_QWORD*)(v3 + 1144) = 0;
  *(_QWORD*)(v3 + 1152) = 0;
  *(_QWORD*)(v3 + 1160) = 0;
  *(_QWORD*)(v3 + 1168) = 0;
  *(_QWORD*)(v3 + 1176) = 0;
  *(_QWORD*)(v3 + 1184) = 0;
  *(_QWORD*)(v3 + 1192) = 0;
  *(_QWORD*)(v3 + 1200) = 0;
  *(_QWORD*)(v3 + 1208) = 0;
  *(_QWORD*)(v3 + 1216) = 0;
  *(_QWORD*)(v3 + 1224) = 0;
  *(_QWORD*)(v3 + 1232) = 0;
  *(_QWORD*)(v3 + 1240) = 0;
  *(_QWORD*)(v3 + 1248) = 0;
  *(_QWORD*)(v3 + 1256) = 0;
  *(_QWORD*)(v3 + 1264) = 0;
  *(_QWORD*)(v3 + 1284) = 0x4100000041C00000LL;
  v6 = (char*)GameData_212d6b0 + 16;
  *(_DWORD*)(v3 + 1272) = 0;
  *(_WORD*)(v3 + 1296) = 0;
  *(_DWORD*)(v3 + 1300) = 0;
  *(_QWORD*)(v3 + 1072) = v6;
  *(_QWORD*)v3 = GameData_1fa2638;
  *(_QWORD*)(v3 + 176) = GameData_1fa2ad0;
  *(_QWORD*)(v3 + 1056) = GameData_1fa2ba0;
  GameRoutine_657850(v3, GameData_212c730, "MapSystemMenu", 1, a1);
  v7 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_BYTE*)(v7 + 17) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_BYTE*)(v7 + 82) = 1;
  *(_WORD*)(v7 + 80) = 257;
  *(_QWORD*)v7 = GameData_1fa2c50;
  *(_QWORD*)(v7 + 8) = 0;
  GameRoutine_16e0c00(v3, v7);
  v8 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v8 + 72) = 0;
  *(_QWORD*)(v8 + 80) = 0;
  *(_QWORD*)(v8 + 16) = 0;
  *(_QWORD*)(v8 + 24) = 0;
  *(_QWORD*)(v8 + 32) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_BYTE*)(v8 + 17) = 0;
  *(_QWORD*)(v8 + 48) = 0;
  *(_QWORD*)(v8 + 56) = 0;
  *(_QWORD*)(v8 + 64) = 0;
  *(_WORD*)(v8 + 80) = 257;
  *(_BYTE*)(v8 + 82) = 1;
  *(_QWORD*)v8 = GameData_1fa2eb0;
  *(_QWORD*)(v8 + 8) = 0;
  GameRoutine_16e0c00(v3, v8);
  v9 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_BYTE*)(v9 + 17) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_WORD*)(v9 + 80) = 257;
  *(_BYTE*)(v9 + 82) = 1;
  *(_QWORD*)v9 = GameData_1fa3370;
  *(_QWORD*)(v9 + 8) = 0;
  GameRoutine_16e0c00(v3, v9);
  v10 =
      GameData_21caab0 != 0 && *(unsigned __int8*)(GameData_21caab0 + 13) == 2;
  v11 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v11 + 72) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_BYTE*)(v11 + 17) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_WORD*)(v11 + 80) = 257;
  *(_BYTE*)(v11 + 82) = 1;
  v12 = GameData_212d660[0];
  if (v10) {
    v12 = &GameData_1fa3820;
  }
  *(_QWORD*)v11 = v12 + 2;
  *(_QWORD*)(v11 + 8) = 0;
  GameRoutine_16e0c00(v3, v11);
  v13 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)(v13 + 80) = 0;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_BYTE*)(v13 + 17) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_WORD*)(v13 + 80) = 257;
  *(_BYTE*)(v13 + 82) = 1;
  *(_QWORD*)v13 = GameData_212d668[0] + 2;
  *(_QWORD*)(v13 + 8) = 0;
  GameRoutine_16e0c00(v3, v13);
  v14 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_WORD*)(v14 + 16) = 0;
  *(_DWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_DWORD*)(v14 + 80) = 65793;
  *(_QWORD*)v14 = GameData_2132010[0] + 2;
  *(_QWORD*)(v14 + 8) = 0;
  GameRoutine_16e0c00(v3, v14);
  v15 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_BYTE*)(v15 + 17) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_WORD*)(v15 + 80) = 257;
  *(_BYTE*)(v15 + 82) = 1;
  *(_QWORD*)v15 = GameData_1fa3a90;
  *(_QWORD*)(v15 + 8) = 0;
  GameRoutine_16e0c00(v3, v15);
  v16 = GameRoutine_651b90(*v2, 88, 16, 0);
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_BYTE*)(v16 + 17) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_WORD*)(v16 + 80) = 257;
  *(_BYTE*)(v16 + 82) = 1;
  *(_QWORD*)v16 = GameData_1fa3cf8;
  *(_QWORD*)(v16 + 8) = 0;
  GameRoutine_16e0c00(v3, v16);
  v17 = GameData_21668d0;
  if ((GameData_21668d0 & 0x80000000) == 0) {
    v18 = *(_QWORD**)(v3 + 232);
    v19 = *(_QWORD**)(v3 + 240);
    if (v18 != v19) {
      v20 = 0;
      do {
        v21 = *v18;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v18 + 48LL))(*v18) & 1) != 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21) & 1) != 0) {
          if (v17 == v20) {
            goto LABEL_18;
          }
          ++v20;
        }
        ++v18;
      } while (v18 != v19);
    }
    v21 = 0;
  LABEL_18:
    v22 = *(_QWORD*)(v3 + 336);
    if (v22 != v21) {
      if (v22 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 168LL))(v22);
      }
      *(_QWORD*)(v3 + 336) = v21;
      GameRoutine_16dea40(v3, 0, 1, 0);
      v23 = *(_QWORD*)(v3 + 336);
      if (v23 == 0) {
        v24 = 4;
      LABEL_28:
        *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v24;
        return v3;
      }
      (*(void (**)(__int64))(*(_QWORD*)v23 + 160LL))(v23);
      GameRoutine_1990fb0(*(_QWORD*)GameData_212c470 + 712LL);
      v22 = *(_QWORD*)(v3 + 336);
    }
    v24 = 4;
    if (v22 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 120LL))(v22) & 1) != 0) {
        v24 = 4;
      }
      else {
        v24 = 0;
      }
    }
    goto LABEL_28;
  }
  return v3;
}

__int64 GameHr_86f2b0()
{
  __int64 result;

  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    result = GameRoutine_825040(GameData_21cd128, 2);
  }
  *(_BYTE*)(*GameData_212cfc0[0] + 24) = 1;
  *(_BYTE*)(GameData_21cd120 + 5554) = 1;
  return result;
}

__int64 GameHr_86fbf0()
{
  __int64 result;

  result = GameData_2258ba8;
  if (GameData_2258ba8 != 0) {
    return GameRoutine_1567000(GameData_2258ba8, 0);
  }
  return result;
}

__int64 GameHr_86fc30()
{
  __int64 v0;
  __int64 result;
  _QWORD v2[25];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    snd_Fade_Fade_10cb00((__int64)v2, "FadeTime_BGM_Prepare_Out"),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameManager_a2d1c0(v0, (__int64)v2,
                       (*(_BYTE*)(game_sound_g_game_sound + 2848) & 1) == 0),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return snd_Fade_Destroy_Fade(v2);
  }
  return result;
}

bool GameHr_8789c0(const char** a1)
{
  bool v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 ProgramTotalActiveTimeEv;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;

  v1 = game_877f00(a1, GameData_21eea58 + 208, GameData_21eea58 + 336);
  if (!v1) {
    return v1;
  }
  if (game_GameModeData_instance_ != 0) {
    LOBYTE(v21) = *(_BYTE*)(game_GameModeData_instance_ + 14);
    BYTE4(v21) = *(_BYTE*)(game_GameModeData_instance_ + 15) == 9;
  }
  else {
    v21 = 0;
  }
  v2 = GameData_21d87f8;
  v3 = GameData_21d8828;
  GameRoutine_8767a0_alt1((int*)(GameData_21eea58 + 592));
  GameRoutine_66aae0_alt1();
  v4 = GameData_21eea58;
  *(_WORD*)(GameData_21eea58 + 96) = 0;
  v4 += 96;
  *(_QWORD*)(v4 + 4) = 0x10000000000LL;
  *(_BYTE*)(v4 + 12) = 0;
  *(_QWORD*)(v4 + 14) = 0;
  *(_QWORD*)(v4 + 22) = 0;
  *(_QWORD*)(v4 + 30) = 0;
  *(_DWORD*)(v4 + 37) = 0;
  *(_QWORD*)(v4 + 42) = 0;
  *(_DWORD*)(v4 + 50) = 0;
  *(_DWORD*)(v4 + 72) = 0;
  *(_BYTE*)(v4 + 76) = 0;
  *(_DWORD*)(v4 + 78) = 0;
  *(_DWORD*)(v4 + 84) = 0;
  *(_WORD*)(v4 + 88) = 0;
  *(_QWORD*)(v4 + 96) = 0;
  *(_BYTE*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 63) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  GameRoutine_876070_alt1((unsigned __int8*)v4, v4 + 112);
  GameRoutine_877680_alt1((__int64*)(v4 + 240));
  v5 = *(unsigned __int16*)(v4 + 60);
  v6 = *(unsigned __int8*)(v4 + 62);
  LODWORD(v4) = *(unsigned __int8*)(v4 + 63);
  ProgramTotalActiveTimeEv = nn_oe_GetProgramTotalActiveTime();
  GameData_21d8800 = nn_os_ConvertToTick(ProgramTotalActiveTimeEv);
  GameData_21d8808 = 0;
  LOWORD(GameData_21d87f8) = v5;
  BYTE2(GameData_21d87f8) = v6;
  HIBYTE(GameData_21d87f8) = v4;
  GameData_21d8808 = nn_os_ConvertToTick(
      1000000000LL * (unsigned int)(3600 * v5 + 60 * v6 + v4));
  GameRoutine_8768e0_alt1((_QWORD*)(GameData_21eea58 + 592));
  if (*(_BYTE*)(GameData_21eea58 + 96) != 0) {
    v8 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v8 = *(unsigned __int16*)(game_GameModeData_instance_ + 2720);
    }
    if (v8 != *(unsigned __int16*)(GameData_21eea58 + 184)) {
      v9 = *(_QWORD*)(GameData_21eea58 + 192);
      v10 = game_GetHero(9u);
      if (v10 == 0) {
      LABEL_28:
        if (v9 != v10) {
          VariableManager_7150e0();
        }
        goto LABEL_30;
      }
      v11 = v10;
      if (game_GameModeData_instance_ != 0) {
        v12 = *(_DWORD*)(game_GameModeData_instance_ + 68);
        v13 = *(_QWORD*)(game_GameModeData_instance_ + 16);
        if (v13 != 0) {
          v12 += *(char*)(v13 + 128);
        }
        v14 = *(unsigned __int8*)(v10 + 442);
        if (*(_BYTE*)(v10 + 442) != 0) {
          goto LABEL_23;
        }
      }
      else {
        v12 = 0;
        v14 = *(unsigned __int8*)(v10 + 442);
        if (*(_BYTE*)(v10 + 442) != 0) {
        LABEL_23:
          if (*(_QWORD*)(v10 + 304) == 0 ||
              (v22 = *(_QWORD*)(v10 + 304),
               (v10 = game_GrowthListFile_GetJob(&v22, v14, 6)) == 0)) {
            if (*(_QWORD*)(v11 + 64) != 0) {
              v10 = *(_QWORD*)(v11 + 64);
            }
            else {
              v10 = GameData_21c9988;
            }
          }
          goto LABEL_28;
        }
      }
      if (*(_BYTE*)(v10 + 443) != 0) {
        v15 = v12 + *(char*)(v10 + 443);
        if (v15 <= 1) {
          v15 = 1;
        }
        if (v15 >= 99) {
          v14 = 99;
        }
        else {
          v14 = (unsigned int)v15;
        }
      }
      else {
        v14 = v12;
      }
      goto LABEL_23;
    }
  }
LABEL_30:
  if (game_GameModeData_instance_ != 0) {
    v16 = BYTE4(v21) ^ 1;
    if (*(_BYTE*)(game_GameModeData_instance_ + 15) != 9) {
      v16 = 1;
    }
    if ((v16 & 1) == 0) {
      *(_BYTE*)(game_GameModeData_instance_ + 14) = v21;
    }
  }
  v17 = nn_oe_GetProgramTotalActiveTime();
  v18 = nn_os_ConvertToTick(v17);
  GameData_21d87f8 = v2;
  GameData_21d8800 = v18;
  GameData_21d8808 = 0;
  GameData_21d8808 = nn_os_ConvertToTick(
      1000000000LL *
      (HIBYTE(v2) + 3600 * (unsigned __int16)v2 + 60 * BYTE2(v2)));
  v19 = nn_oe_GetProgramTotalActiveTime();
  GameData_21d8830 = nn_os_ConvertToTick(v19);
  GameData_21d8838 = 0;
  GameData_21d8828 = v3;
  GameData_21d8838 = nn_os_ConvertToTick(
      1000000000LL *
      (HIBYTE(v3) + 3600 * (unsigned __int16)v3 + 60 * BYTE2(v3)));
  return v1;
}

__int64 GameHr_887e60()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1648 + 8);
  result = GameRoutine_a2f660(GameData_2265ef8);
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 0;
  *(_BYTE*)(v0 + 56) = 1;
  return result;
}

__int64 GameHr_888030()
{
  __int64 v0;
  __int64 v1;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1648 + 8);
  GameRoutine_a2d080(GameData_2265ef8);
  v1 = GameData_21f1648;
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 1;
  result = GameRoutine_15317a0(*(_QWORD*)(v1 + 8) + 40LL);
  *(_BYTE*)(v0 + 56) = 0;
  return result;
}

int* GameHr_89ef30(int* result, int* a2, int* a3, int* a4, __int64 a5)
{
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  v5 = *a2;
  v6 = *result;
  v7 = *(_QWORD*)(*(_QWORD*)a5 + 8LL);
  v8 = *(_QWORD*)(GameData_21c99b8 + 64);
  v9 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v8 +
                                        8LL * *(unsigned __int16*)(v7 +
                                                                   12LL * *a2 +
                                                                   4)) +
                             24LL) +
                  608LL);
  v10 = *a3;
  v11 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v8 +
                                         8LL * *(unsigned __int16*)(v7 +
                                                                    12LL * *a3 +
                                                                    4)) +
                              24LL) +
                   608LL);
  if (v9 >=
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v8 +
                                       8LL *
                                           *(unsigned __int16*)(v7 +
                                                                12LL * *result +
                                                                4)) +
                            24LL) +
                 608LL)) {
    if (v11 >= v9) {
      v12 = *a3;
      goto LABEL_13;
    }
    *a2 = v10;
    *a3 = v5;
    v13 = *result;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * *a2 +
                                                                  4)) +
                              24LL) +
                   608LL) >=
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL *
                                                                      *result +
                                                                  4)) +
                              24LL) +
                   608LL)) {
      v12 = v5;
      v10 = v5;
      goto LABEL_13;
    }
    *result = *a2;
    *a2 = v13;
    v10 = *a3;
    goto LABEL_11;
  }
  v12 = *result;
  if (v11 >= v9) {
    *result = v5;
    *a2 = v6;
    v10 = *a3;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * *a3 +
                                                                  4)) +
                              24LL) +
                   608LL) <
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * v6 +
                                                                  4)) +
                              24LL) +
                   608LL)) {
      *a2 = v10;
      goto LABEL_9;
    }
  LABEL_11:
    v12 = v10;
    goto LABEL_13;
  }
  *result = v10;
LABEL_9:
  *a3 = v6;
  v10 = v6;
LABEL_13:
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL *
                                           *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                               a5 +
                                                                           8LL) +
                                                                12LL * *a4 +
                                                                4)) +
                            24LL) +
                 608LL) <
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL *
                                           *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                               a5 +
                                                                           8LL) +
                                                                12LL * v12 +
                                                                4)) +
                            24LL) +
                 608LL)) {
    *a3 = *a4;
    *a4 = v10;
    v14 = *a2;
    if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * *a3 +
                                                                  4)) +
                              24LL) +
                   608LL) <
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL *
                                             *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                 a5 +
                                                                             8LL) +
                                                                  12LL * *a2 +
                                                                  4)) +
                              24LL) +
                   608LL)) {
      *a2 = *a3;
      *a3 = v14;
      v15 = *result;
      if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                   a5 +
                                                                               8LL) +
                                                                    12LL * *a2 +
                                                                    4)) +
                                24LL) +
                     608LL) <
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)
                                                                                   a5 +
                                                                               8LL) +
                                                                    12LL *
                                                                        *result +
                                                                    4)) +
                                24LL) +
                     608LL)) {
        *result = *a2;
        *a2 = v15;
      }
    }
  }
  return result;
}

__int64 GameHr_8b0370(__int64 result, int a2)
{
  int v2;
  __int64 v3;

  if (a2 == 0) {
    return 0;
  }
  if (GameData_21caab0 != 0) {
    v2 = (*(_DWORD*)(GameData_21caab0 + 72) + a2) &
         ~((*(_DWORD*)(GameData_21caab0 + 72) + a2) >> 31);
    if (v2 >= 9999999) {
      v2 = 9999999;
    }
    *(_DWORD*)(GameData_21caab0 + 72) = v2;
  }
  if (result != 0) {
    v3 = GameRoutine_1a070b0();
    GameRoutine_80e330(v3, "FF_Positive1");
    return v3;
  }
  return result;
}

__int64 GameHr_8c9b80()
{
  __int64* v0;
  __int64 v1;
  int v2;
  char v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;

  if (GameData_21caab0 == 0) {
    goto LABEL_20;
  }
  v0 = (__int64*)GameData_21f2288;
  v1 = GameData_21f2290;
  if (GameData_21f2288 == GameData_21f2290) {
    v3 = 0;
    v2 = 0;
  }
  else {
    v2 = 0;
    v3 = 0;
    do {
      v4 = *v0;
      v6 = GameData_21caab0 != 0 &&
           (v5 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                    *(_QWORD*)(v4 + 24) + 40LL)) != 0 &&
           *(_DWORD*)(v5 + 32) != 0;
      v7 = (unsigned __int16)GameRoutine_8c77c0(v4);
      if (v6 || v7 == 0) {
        v3 |= v7 == 0;
        v2 += 1 << (10 * *(_BYTE*)(v4 + 64) - 10);
      }
      ++v0;
    } while (v0 != (__int64*)v1);
  }
  v8 = GameRoutine_9a28e0(14);
  v9 = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v10 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v8);
    if (v10 == 0) {
      if (v2 > 0) {
        goto LABEL_18;
      }
    LABEL_20:
      v3 = 0;
      return v3 & 1;
    }
    v9 = *(_DWORD*)(v10 + 32);
  }
  if (v9 >= v2) {
    goto LABEL_20;
  }
LABEL_18:
  v11 = GameRoutine_9a28e0(14);
  GameRoutine_716d80(v11, (unsigned int)v2);
  return v3 & 1;
}

#pragma GCC visibility pop
