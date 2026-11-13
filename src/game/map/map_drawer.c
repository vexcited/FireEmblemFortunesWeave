#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1600a80(void);
__int64 GameRoutine_18c4dd0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c63a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c6550(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1993840(_QWORD);
__int64 GameRoutine_1994460(_QWORD);
__int64 GameRoutine_6fb960(_QWORD, _QWORD);
__int64 GameRoutine_965080(_QWORD);
__int64 GameRoutine_965ec0(_QWORD);
__int64 GameRoutine_9acba0(_QWORD);
__int64 GameRoutine_9acc80(_QWORD);
__int64 MapDrawer_8084c0_alt1(_QWORD) __asm__("MapDrawer_8084c0");
__int64 MapOnMapInfo_16012a0(void);
__int64 PrimitiveDrawManager_19935e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 PrimitiveDrawManager_1994180(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _UNKNOWN* GameData_212c958;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83540;
extern __int128 GameData_1a83610;
extern __int64 (*GameData_1f9d508[])();
extern __int64 (*GameData_1f9d598[])();
extern __int64 (*GameData_1f9d618[])();
extern __int64 GameData_21c6978;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd140;
extern __int64 GameData_21da4a0;
extern __int64 GameData_21ed080;
extern __int64 GameData_21ed098;
extern __int64 GameData_21f6068;
extern __int64 GameData_21f6070;
extern __int64 GameData_21f6078;
extern __int64 GameData_21f6088;
extern __int64 GameData_21f6090;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d570[7];
extern int GameData_21d92e0;
__attribute__((swiftcall)) void GameRoutine_81d430(PSEUDO_X8);
struct PseudoSret snd_playAt_ff5f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD, _QWORD, double, float);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 game_map_MapDrawer_DrawMap();
void MapDrawer_8084c0(__int64 a1);
__int64 MapDrawer_808650(__int64 a1, __int64 a2, int a3);
__int64 MapDrawer_808760(__int64 a1, __int64 a2, _DWORD* a3);
__int64 MapDrawer_8089c0(__int64 a1, __int64 a2, unsigned int a3);
__int64 GameRoutine_965220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 MapUtil_7536a0(_QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _QWORD GameData_1fb0250[9];
extern _QWORD GameData_1fb0298[3];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_21d21b8;
void game_map_MapDrawer_DrawMap_lambda1_Invoke_alt1(
    __int64 a1,
    _QWORD* a2) __asm__("game_map_MapDrawer_DrawMap_lambda1_Invoke");
_DWORD* GameRoutine_18c63a0_alt1(__int64, int*, __int64, __int64,
                                 char) __asm__("GameRoutine_18c63a0");
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_playAt_ff5f0_alt1(PSEUDO_X8, __int64, __int64, __int64, __int64,
                      unsigned int, unsigned int, int, float,
                      float) __asm__("snd_playAt_ff5f0");
bool MapUtil_7536a0_alt1(_BOOL8 result) __asm__("MapUtil_7536a0");
bool game_HasSkill_alt1(_QWORD*, _DWORD*) __asm__("game_HasSkill");
char* GameHr_6fb960(__int64, __int64);
void GameRoutine_965220_alt1(__int64, unsigned int, unsigned int, unsigned int,
                             _QWORD*, float) __asm__("GameRoutine_965220");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void game_map_MapDrawer_DrawMap_lambda1_Invoke(__int64 a1, _BOOL8* a2);

__int64 game_map_MapDrawer_DrawMap()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64****** v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64********** v8;
  __int64********* v9;
  __int64******** v10;
  __int64******* v11;
  __int64****** v12;
  __int64***** v13;
  __int64**** v14;
  __int64*** v15;
  __int64** v16;
  __int64* v17;
  __int64 v18;
  __int64** v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64**** v23;
  __int64*** v24;
  __int64** v25;
  __int64* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 result;
  _QWORD v33[4];
  _QWORD* v34;
  _QWORD v35[5];

  if (GameData_21cd140 != 0) {
    v0 = GameData_21cd140 + 16;
  }
  else if (GameData_21c6978 != 0 &&
           (v1 = *(_QWORD*)(GameData_21c6978 + 32),
            *(_QWORD*)(GameData_21c6978 + 24) != v1) &&
           (v2 = *(_QWORD*)(v1 - 8)) != 0) {
    v0 = *(_QWORD*)(v2 + 24);
    v3 = *(_QWORD*)(v2 + 32);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  else {
    v0 = 0;
  }
  v4 = GameData_21f6070;
  v5 = (__int64******)game_map_MapColorPalette_g_texture_archives;
  if (GameData_21f6078 == GameData_21f6070) {
    v6 = 0;
  }
  else {
    v6 = ((GameData_21f6078 - GameData_21f6070) << 6) - 1;
  }
  v7 = GameData_21f6090 + GameData_21f6088;
  if (v6 == GameData_21f6090 + GameData_21f6088) {
    GameRoutine_9acc80(&GameData_21f6068);
    v4 = GameData_21f6070;
    v7 = GameData_21f6090 + GameData_21f6088;
  }
  *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v7 >> 9)) + 8 * (v7 & 0x1FF)) = v5;
  ++GameData_21f6090;
  GameRoutine_1993840(**v5);
  v8 = (__int64**********)**v5;
  *((_DWORD*)v8 + 4351) = 1;
  v9 = *v8;
  *((_DWORD*)v9 + 4332) = 0;
  v10 = *v9;
  *((_DWORD*)v10 + 4328) = 0;
  v11 = *v10;
  *((_DWORD*)v11 + 4327) = 1;
  v12 = *v11;
  *((_BYTE*)v12 + 17395) = 1;
  v13 = *v12;
  *((_DWORD*)v13 + 4324) = 0;
  v14 = *v13;
  *((_BYTE*)v14 + 17394) = 0;
  v15 = *v14;
  *((_BYTE*)v15 + 17393) = 1;
  v16 = *v15;
  *((_OWORD*)v16 + 1090) = GameData_1a82dd0;
  v17 = *v16;
  v18 = *v17;
  *((_OWORD*)v17 + 1084) = *(_OWORD*)GameData_212c958;
  v19 = *(__int64***)PrimitiveDrawManager_19935e0(v18, "DebugTexture", 12, 0);
  *((_DWORD*)v19 + 4330) = 1;
  v20 = *v19;
  *((_OWORD*)v20 + 1162) = GameData_1a82dd0;
  v21 = *v20;
  *((_OWORD*)v20 + 1163) = GameData_1a83610;
  *((_OWORD*)v20 + 1164) = GameData_1a83090;
  *((_OWORD*)v20 + 1165) = GameData_1a83540;
  v22 = GameRoutine_1994460(v21);
  if (GameData_21d92e0 == 1) {
    v35[0] = 0xBE800000BE800000LL;
    v35[1] = 0xBE8000003FA00000LL;
    v35[2] = 0x3FA000003FA00000LL;
    v35[3] = 0x3FA00000BE800000LL;
    v35[4] = 0x3F0000003F000000LL;
    GameRoutine_1993840(**v5);
    v23 = **v5;
    *((_DWORD*)v23 + 4327) = 1;
    v24 = *v23;
    *((_DWORD*)v24 + 4324) = 0;
    v25 = *v24;
    *((_DWORD*)v25 + 4330) = 0;
    v26 = *v25;
    v27 = *v26;
    *((_DWORD*)v26 + 4329) = 1;
    v28 = (_QWORD*)PrimitiveDrawManager_19935e0(v27, "Bmap_UnitShadow", 15, 0);
    GameRoutine_1994460(*v28);
    v33[0] = GameData_1f9d508;
    v33[1] = v5;
    v34 = v33;
    v33[2] = v35;
    MapDrawer_8084c0_alt1(v33);
    if (v34 == v33) {
      v29 = 32;
    }
    else {
      if (v34 == nullptr) {
        goto LABEL_21;
      }
      v29 = 40;
    }
    (*(void (**)(void*))(*v34 + v29))(v34);
  LABEL_21:
    PrimitiveDrawManager_1994180(**v5);
    GameRoutine_965080(&GameData_21da4a0);
    v33[0] = GameData_1f9d598;
    v34 = v33;
    MapDrawer_8084c0_alt1(v33);
    if (v34 == v33) {
      v30 = 32;
    }
    else {
      if (v34 == nullptr) {
      LABEL_26:
        v22 = GameRoutine_965ec0(&GameData_21da4a0);
        goto LABEL_27;
      }
      v30 = 40;
    }
    (*(void (**)(void*))(*v34 + v30))(v34);
    goto LABEL_26;
  }
LABEL_27:
  GameRoutine_9acba0(v22);
  if (GameData_21ed080 != 0) {
    GameRoutine_1600a80();
  }
  if (GameData_21d92e0 == 1) {
    v33[0] = GameData_1f9d618;
    v33[1] = v0;
    v34 = v33;
    MapDrawer_8084c0_alt1(v33);
    if (v34 == v33) {
      v31 = 32;
    }
    else {
      if (v34 == nullptr) {
        goto LABEL_35;
      }
      v31 = 40;
    }
    (*(void (**)(void*))(*v34 + v31))(v34);
  }
LABEL_35:
  result = GameData_21ed080;
  if (GameData_21ed080 != 0) {
    return MapOnMapInfo_16012a0();
  }
  return result;
}

void MapDrawer_8084c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  float v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;

  LODWORD(v14) = 15;
  v2 = game_UnitPool_GetFirst_alt1((int*)&v14);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 432);
    v4 = v2;
    if (v3 == 0) {
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v12 = 24LL * *(unsigned __int8*)(v3 + 16) + 556024;
          while (1) {
            if (v5 <= 2) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v12);
              if (v3 != 0) {
                break;
              }
            }
            ++v5;
            v12 += 24;
            if (v5 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    while (1) {
    LABEL_8:
      v6 = v3;
      if ((*(_BYTE*)(v4 + 417) & 0x1C) == 0) {
        v7 = (*(float (**)(__int64))(*(_QWORD*)(v4 + 152) + 16LL))(v4 + 152);
        if (v7 > 0x0.0p+0f) {
          v8 = *(_QWORD*)(a1 + 32);
          v14 = v4;
          v13 = v7;
          if (v8 == 0) {
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(__int64, __int64*, float*))(*(_QWORD*)v8 + 48LL))(
              v8, &v14, &v13);
        }
      }
      if (v6 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v6 + 432);
      v4 = v6;
      if (v3 == 0) {
        v9 = *(_QWORD*)(v6 + 440);
        v4 = v6;
        if (v9 != 0) {
          v10 = *(unsigned __int8*)(v9 + 16);
          v3 = 0;
          v4 = v6;
          if (v10 <= 8) {
            v11 = 24LL * (unsigned int)v10 + 556024;
            while (1) {
              if (v10 <= 2) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v11);
                if (v3 != 0) {
                  break;
                }
              }
              ++v10;
              v11 += 24;
              if (v10 == 9) {
                v3 = 0;
                v4 = v6;
                goto LABEL_8;
              }
            }
            v4 = v6;
          }
        }
      }
    }
  }
}

__int64 MapDrawer_808650(__int64 a1, __int64 a2, int a3)
{
  char v5;
  int v6;
  int v7;
  __int64 result;
  int v9;
  int v10;
  float v11;
  _QWORD v12[2];

  v5 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
    goto LABEL_7;
  }
  if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v6 & 8) != 0) {
      v7 = 2;
    }
    else {
      v7 = 3;
    }
    v5 = (v7 & v6) == 0;
  LABEL_7:
    result = 0;
    if (a2 == 0) {
      return result;
    }
    goto LABEL_10;
  }
  v5 = 0;
  result = 0;
  if (a2 == 0) {
    return result;
  }
LABEL_10:
  if ((v5 & 1) == 0) {
    GameRoutine_81d430((void*)(v12));
    if (GameData_21ed098 != 0) {
      GameRoutine_18c4dd0(GameData_21ed098, v12, (unsigned int)-a3, 0);
    }
    if (a1 != 0) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v10 = 2)
               : (v10 = 3),
           (v10 & v9) != 0)) {
        v11 = *(float*)(a1 + 144);
        *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
        if (v11 < 30.0f) {
          v11 = 30.0f;
        }
        *(float*)(a1 + 144) = v11;
      }
      return a1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 MapDrawer_808760(__int64 a1, __int64 a2, _DWORD* a3)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  char v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v14;
  char* v15;
  const char* v16;
  int v17;
  int v18;
  float v19;
  float32x4_t v21;
  struct {
    __int64* v22;
    unsigned __int64 v23;
    unsigned __int32 v24;
  } v22_;
  float32x4_t v25[13];

  v3 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
      v3 = 0;
      v6 = 0;
      if (a2 == 0) {
        return v6;
      }
      goto LABEL_10;
    }
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v4 & 8) != 0) {
      v5 = 2;
    }
    else {
      v5 = 3;
    }
    v3 = (v5 & v4) == 0;
  }
  v6 = 0;
  if (a2 == 0) {
    return v6;
  }
LABEL_10:
  if ((v3 & 1) == 0) {
    v7 = *a3 & 0xFFF;
    if ((*a3 & 0xFFF) == 0) {
      return 0;
    }
    v8 = *(_QWORD*)(GameData_21c99b0 + 64);
    v9 = *(_QWORD*)(v8 + 8 * v7);
    if ((*(_WORD*)(v9 + 754) & 1) == 0) {
      return 0;
    }
    v11 = *GameData_212d570[0];
    if (*GameData_212d570[0] != 0) {
      UnitActor_81d430((void*)(v25), a2);
      v14 = a2;
      v15 = GameHr_6fb960(v9, a2);
      GameRoutine_18c63a0_alt1(v11, (int*)v25, v9, (__int64)v15, 0);
      v8 = *(_QWORD*)(GameData_21c99b0 + 64);
      v7 = *a3 & 0xFFF;
    }
    else {
      v14 = a2;
    }
    if (*(_BYTE*)(*(_QWORD*)(v8 + 8 * v7) + 104LL) == 7) {
      UnitActor_81d430((void*)(&v21), v14);
      v22_.v23 = LANES128(v21).n128_u64[0];
      v22_.v24 = LANES128(v21).n128_u32[2];
      v22_.v22 = GameData_212d1e0[0] + 2;
      snd_Fade_Fade_10c830_alt1((__int64)v25, 0x0.0p+0f);
      v16 = "SE_SYS_Telop_SkillActive_BadStatus";
    }
    else {
      UnitActor_81d430((void*)(&v21), v14);
      v22_.v23 = LANES128(v21).n128_u64[0];
      v22_.v24 = LANES128(v21).n128_u32[2];
      v22_.v22 = GameData_212d1e0[0] + 2;
      snd_Fade_Fade_10c830_alt1((__int64)v25, 0x0.0p+0f);
      v16 = "SE_SYS_Telop_SkillActive_Popup";
    }
    snd_playAt_ff5f0_alt1((void*)(handle), (__int64)v16, (__int64)v16,
                          (__int64)&v22_.v22, (__int64)v25, 0, 0x10001u, 0,
                          0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v25);
    if (a1 != 0) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v18 = 2)
               : (v18 = 3),
           (v18 & v17) != 0)) {
        v19 = *(float*)(a1 + 144);
        if (v19 < 0x1.6800000000000p+5f) {
          v19 = 0x1.6800000000000p+5f;
        }
        *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
        *(float*)(a1 + 144) = v19;
      }
      return a1;
    }
    else {
      return 0;
    }
  }
  return v6;
}

__int64 MapDrawer_8089c0(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4;
  int v5;
  int v6;
  __int64 result;
  int v9;
  int v10;
  float v11;
  _QWORD v12[2];

  v4 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
    goto LABEL_7;
  }
  if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v5 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v4 = (v6 & v5) == 0;
  LABEL_7:
    result = 0;
    if (a2 == 0) {
      return result;
    }
    goto LABEL_10;
  }
  v4 = 0;
  result = 0;
  if (a2 == 0) {
    return result;
  }
LABEL_10:
  if ((v4 & 1) == 0) {
    GameRoutine_81d430((void*)(v12));
    if (GameData_21ed098 != 0) {
      GameRoutine_18c6550(GameData_21ed098, v12, a3);
    }
    if (a1 != 0) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v10 = 2)
               : (v10 = 3),
           (v10 & v9) != 0)) {
        v11 = *(float*)(a1 + 144);
        if (v11 < 45.0f) {
          v11 = 45.0f;
        }
        *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
        *(float*)(a1 + 144) = v11;
      }
      return a1;
    }
    else {
      return 0;
    }
  }
  return result;
}

void game_map_MapDrawer_DrawMap_lambda1_Invoke(__int64 a1, _BOOL8* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int8* v3;
  unsigned int v4;
  _UNKNOWN** v5;
  unsigned int v6;
  bool v7;
  __int64 v8;
  float v9;
  bool v10;
  int v11;
  int v12;
  const char* v13;
  char* v14;
  char* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v23;
  const char* v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  struct {
    __int64 v30;
    const char* v31;
  } v30_;

  v2 = *a2;
  if ((*(_WORD*)(*a2 + 1872) & 0xFFF) == 0) {
    return;
  }
  v3 = (unsigned __int8*)GameData_21d21b8;
  if (GameData_21d21b8 != nullptr) {
    v4 = *(unsigned __int8*)(v2 + 2088);
    v5 = &GameData_21d21b8;
    do {
      v6 = v3[25];
      v7 = v6 >= v4;
      if (v6 >= v4) {
        v8 = 0;
      }
      else {
        v8 = 8;
      }
      if (v7) {
        v5 = (_UNKNOWN**)v3;
      }
      v3 = *(unsigned __int8**)&v3[v8];
    } while (v3 != nullptr);
    if (v5 != &GameData_21d21b8 && v4 >= *((unsigned __int8*)v5 + 25)) {
      return;
    }
  }
  if (!MapUtil_7536a0_alt1(*a2)) {
    return;
  }
  v9 = (*(float (**)(__int64))(*(_QWORD*)(v2 + 152) + 16LL))(v2 + 152);
  v10 = (*(_DWORD*)(v2 + 1872) & 0xFFF) == 0 ||
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                             8LL * (*(_DWORD*)(v2 + 1872) & 0xFFF)) +
                  273LL) == 0;
  LODWORD(v30_.v30) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1A4LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
  if (!game_HasSkill_alt1((_QWORD*)(v2 + 1744), &v30_.v30)) {
    v14 = *(char**)(v2 + 600);
    v15 = *(char**)(v2 + 608);
    if (v14 == v15) {
      return;
    }
    while (1) {
      v18 = *v14;
      v19 = v14[1];
      v20 = 0;
      if ((v19 | v18) < 0 || (*(_DWORD*)(v2 + 1872) & 0xFFF) == 0) {
        goto LABEL_37;
      }
      v21 = *(_DWORD*)(v2 + 592);
      if (v21 > v18 && v21 > v19) {
        v23 = v18 + v21 * v19;
        if ((v23 & 0x80000000) == 0) {
          break;
        }
      }
      v20 = 0;
      v24 = "UI_Bmap_Wall_Monster_NoDamage_Loop";
      if (!v10) {
      LABEL_40:
        v25 = v20 & ~(v20 >> 31);
        if (v25 >= 2) {
          v25 = 2;
        }
        if (v20 < 1) {
          goto LABEL_28;
        }
        v24 = (const char*)GameData_1fb0298[v25];
      }
    LABEL_27:
      v16 = *(char*)(v2 + 584);
      v17 = *(char*)(v2 + 585);
      v30_.v31 = v24;
      v30_.v30 = game_HashString_alt1((__int64)v24);
      GameRoutine_965220_alt1((__int64)&GameData_21da4a0, 0, v16 + v18,
                              v17 + v19, &v30_.v30, v9);
    LABEL_28:
      v14 += 4;
      if (v14 == v15) {
        return;
      }
    }
    v20 = *(char*)(*(_QWORD*)(v2 + 600) + 4LL * v23 + 2);
  LABEL_37:
    v24 = "UI_Bmap_Wall_Monster_NoDamage_Loop";
    if (v10) {
      goto LABEL_27;
    }
    goto LABEL_40;
  }
  if ((*(_WORD*)(v2 + 1872) & 0xFFF) != 0 && *(int*)(v2 + 592) >= 1) {
    v11 = *(char*)(*(_QWORD*)(v2 + 600) + 2LL);
    if (!v10) {
      goto LABEL_21;
    }
  LABEL_45:
    v13 = "UI_Bmap_Wall_Monster_NoDamage_Loop";
    goto LABEL_46;
  }
  v11 = 0;
  if (v10) {
    goto LABEL_45;
  }
LABEL_21:
  v12 = v11 & ~(v11 >> 31);
  if (v12 >= 8) {
    v12 = 8;
  }
  if (v11 >= 1) {
    v13 = (const char*)GameData_1fb0250[v12];
  LABEL_46:
    v26 = *(_DWORD*)(v2 + 592);
    v27 = *(char*)(v2 + 584);
    v28 = *(char*)(v2 + 585);
    v29 = v26 >> 1;
    v30_.v31 = v13;
    v30_.v30 = game_HashString_alt1((__int64)v13);
    GameRoutine_965220_alt1((__int64)&GameData_21da4a0, 0, v29 + v27, v29 + v28,
                            &v30_.v30, v9);
  }
}

#pragma GCC visibility pop
