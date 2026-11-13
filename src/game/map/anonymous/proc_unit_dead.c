#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Image_72b6c0(_QWORD*);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_757430(__int64 result);
__int64 GameRoutine_7c9660(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_81a990(_QWORD);
__int64 GameRoutine_97ec90(_QWORD, _QWORD);
__int64 GameRoutine_c8b5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 Image_72a260(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 Image_72b4a0(__int64, __int64, __int64, __int64, __int64, __int64);
extern __int64 GameData_21ca300;
extern __int64 GameData_22400f8;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d000[2];
__int64 ProcUnitDead_76ecf0(__int64 result);
__int64 ProcUnitDead_76ed60(__int64 result);
__int64 game_map_anonymous_ProcUnitDead_DeadDrop(__int64 result);
__int64 ProcUnitDead_76f480(__int64 a1);
__int64 ProcUnitDead_76f4e0(__int64 result);
__int64 ProcUnitDead_76f540(__int64 result);
__int64 ProcUnitDead_76f5d0_alt1(__int64 result) __asm__("ProcUnitDead_76f5d0");
__int64
game_map_anonymous_ProcUnitDead_DeadDrop_closure_Invoke(__int64 result,
                                                        unsigned __int16* a2);
__int64 GameRoutine_c8b5a0_alt1(__int64, unsigned int, __int64, unsigned int,
                                unsigned int, unsigned int,
                                unsigned int) __asm__("GameRoutine_c8b5a0");
__int64 Image_72b4a0_alt1(__int64) __asm__("Image_72b4a0");
__int64 MapUtil_757430(__int64 result);
__int64 game_97ec90(__int64);
void Image_72a260_alt1(__int64) __asm__("Image_72a260");
void ProcUnitDead_76f5d0(__int64 a1);
__int64 GameHr_961420(__int64, const char**, __int64);
__int64 GameRoutine_11f2730(__int64 result, __int64, int);
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_76b550(__int64, __int64, const char*, char, long double,
                           long double);
__int64 UnitActor_81b040(__int64, float);
__int64 game_15ff1c0(__int64, __int64, int);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_Unit_GetParam(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 GameData_21d9188;
extern __int64 GameData_21ed080;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
void snd_Fade_Fade_10c830(__int64, float);
void ProcUnitDead_76ef60(__int64 a1, __int64 a2);

__int64 ProcUnitDead_76ecf0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (*(_BYTE*)(result + 160) != 0 && GameData_22400f8 != 0) {
    v1 = *(_QWORD*)(result + 152);
    if (v1 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v2 = *(_QWORD*)(v1 + 440);
      if (v2 != 0 && *(unsigned __int8*)(v2 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v3 = *(unsigned __int8*)(v1 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v3) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v3) |= 2u;
        }
      }
    }
  }
  return result;
}

__int64 ProcUnitDead_76ed60(__int64 result)
{
  unsigned int v1;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;

  v1 = *(unsigned __int8*)(result + 160);
  if (v1 <= 3 && v1 != 1) {
    v3 = *(_QWORD*)(result + 152);
    if (v3 == 0) {
      return game_97ec90(result);
    }
    v4 = *(_QWORD*)(v3 + 440);
    if (v4 != 0) {
      v5 = *(unsigned __int8*)(v4 + 16);
    }
    else {
      v5 = 9;
    }
    v6 = result;
    result = GameRoutine_c8b5a0_alt1(
        result, 0x10u, v3, *(unsigned __int16*)(*(_QWORD*)(v3 + 392) + 16LL),
        v5, 0xFFFFFFFF, 0xFFFFFFFF);
    if ((result & 1) == 0) {
      result = v6;
      return game_97ec90(result);
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcUnitDead_DeadDrop(__int64 result)
{
  __int64 v1;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(result + 152);
  v3 = v1 == 0 || *GameData_212d000[0] == 0;
  if (*(_BYTE*)(result + 160) == 1) {
    if (!v3) {
      v4 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
      v5 = *(_QWORD*)(v1 + 440);
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 16);
      }
      else {
        v6 = 9;
      }
      v8 = 17;
      return GameRoutine_c8b5a0(result, v8, v1, v4, v6, 0xFFFFFFFFLL,
                                0xFFFFFFFFLL);
    }
  }
  else if (!v3) {
    v4 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
    v7 = *(_QWORD*)(v1 + 440);
    if (v7 != 0) {
      v6 = *(unsigned __int8*)(v7 + 16);
    }
    else {
      v6 = 9;
    }
    v8 = 14;
    return GameRoutine_c8b5a0(result, v8, v1, v4, v6, 0xFFFFFFFFLL,
                              0xFFFFFFFFLL);
  }
  return result;
}

void ProcUnitDead_76ef60(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  int v2;
  __int64 v4;
  int v5;
  _BYTE* v6;
  __int64 i;
  _QWORD* v9;
  char v10;
  __int64 v11;
  __n128 v12;
  long double v13;
  __int64 v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v29;
  __int64 v30;
  const char* v31;
  int v32;
  __int64 v33;
  long double v34;
  long double v35;
  const char* v36[25];

  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(unsigned __int8*)(a1 + 160);
  switch (v2) {
  case 1:
    v4 = *(_QWORD*)(a1 + 152);
    v5 = *(unsigned __int8*)(v4 + 496);
    if (*(_BYTE*)(v4 + 496) == 0) {
    LABEL_50:
      LOBYTE(v36[0]) = 0;
      v26 = game_Unit_GetParam(v4),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LOBYTE(v36[0]) = 0;
      v27 = game_Unit_GetParam(v4),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (*(_WORD*)(v4 + 494) != 0 && v26 != *(__int16*)(v4 + 494)) {
        *(_WORD*)(v4 + 494) = 0;
      }
      if (v27 >= v26) {
        v29 = v26;
      }
      else {
        v29 = v27;
      }
      if (v26 < 0) {
        v29 = 0;
      }
      if (v29 != *(__int16*)(v4 + 492)) {
        *(_WORD*)(v4 + 492) = v29;
      }
      v30 = *(_QWORD*)(a1 + 152);
      if (v30 != 0 && GameData_21d9188 != 0) {
        GameRoutine_11f2730(*(_QWORD*)(GameData_21d9188 + 16), v30, 0),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      return;
    }
    if (GameData_21ed080 != 0) {
      v6 = (_BYTE*)(GameData_21ed080 + 2532);
      for (i = 391680; i != 0; i -= 2448) {
        if (*v6 != 0 && *v6 == *(_BYTE*)(v4 + 2088)) {
          game_15ff1c0((__int64)(v6 - 2372), a2, v5),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v6 += 2448;
      }
      v4 = *(_QWORD*)(a1 + 152);
      v22 = *(unsigned __int8*)(v4 + 496) - 1;
      if (v22 >= *(unsigned __int8*)(v4 + 497)) {
        v22 = *(unsigned __int8*)(v4 + 497);
      }
      if (*(_BYTE*)(v4 + 496) != 0) {
        v23 = v22;
      }
      else {
        v23 = 0;
      }
      if (v23 == *(unsigned __int8*)(v4 + 496)) {
        goto LABEL_49;
      }
    }
    else {
      v23 = v5 - 1;
      if (v5 - 1 >= (unsigned int)*(unsigned __int8*)(v4 + 497)) {
        v23 = *(unsigned __int8*)(v4 + 497);
      }
      if (v23 == v5) {
        goto LABEL_49;
      }
    }
    *(_BYTE*)(v4 + 496) = v23;
    v24 = *(_DWORD*)(v4 + 416);
    if ((v24 & 0x10000000) == 0) {
      *(_DWORD*)(v4 + 416) = v24 | 0x10000000;
      game_6c51e0(v4),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_6c6da0_alt1(v4),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      game_6c6ec0(v4),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_DWORD*)(v4 + 416) &= ~0x10000000u;
    }
  LABEL_49:
    v25 = *(_QWORD*)(a1 + 152);
    v36[0] = "Bmap_HPStock_Heal_Hit";
    GameHr_961420(a1, v36, v25),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = *(_QWORD*)(a1 + 152);
    goto LABEL_50;
  case 3:
    return;
  case 2:
    *(_DWORD*)(*(_QWORD*)(a1 + 152) + 416LL) |= 0x28u;
    Image_72a260_alt1(*(_QWORD*)(GameData_21ca300 + 152)),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return;
  default:
    break;
  }
  v9 = (_QWORD*)(*(_QWORD*)(a1 + 152) + 1744LL);
  LODWORD(v36[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x130LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
  v10 = game_HasSkill(v9, (unsigned int*)v36),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v11 = *(_QWORD*)(a1 + 152);
  if ((v10 & 1) != 0) {
    *(_DWORD*)(v11 + 416) |= 0x28u;
    Image_72a260_alt1(*(_QWORD*)(GameData_21ca300 + 152)),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v14 = *(_QWORD*)(a1 + 152);
    if (v14 == 0) {
      return;
    }
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v15 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v16 = 2)
             : (v16 = 3),
         (v16 & v15) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_69;
      }
      v17 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      LODWORD(v13) = *(_DWORD*)(v17 + 168);
      if (*(float*)(v17 + 172) == *(float*)&v13) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v17 + 160) + 16LL))(v17 +
                                                                       160),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v12 = *(__n128*)(v17 + 208);
      }
      LANES128(v12).n128_u32[0] = LANES128(v12).n128_u32[3];
      if (LANES128(v12).n128_f32[3] != 0x1.0000000000000p+0f ||
          (v12 = ((__n128 (*)(unsigned __int64, float)) *
                  (_QWORD*)(*(_QWORD*)(v17 + 160) + 16LL))(
               v17 + 160, LANES128(v12).n128_f32[3]),
           LANES128(v12).n128_u32[0] = LANES128(v12).n128_u32[3],
           LANES128(v12).n128_f32[3] != 0x1.0000000000000p+0f)) {
      LABEL_69:
        v31 = "Bmap_Warp_Start";
      LABEL_76:
        GameRoutine_76b550(a1, v14, v31, 1, *(long double*)&v12, v13),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
        return;
      }
    }
  }
  else {
    v18 = *(unsigned __int8*)(v11 + 2089);
    *(_DWORD*)(v11 + 416) |= 0x28u;
    Image_72a260_alt1(*(_QWORD*)(GameData_21ca300 + 152)),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v14 = *(_QWORD*)(a1 + 152);
    if (v18 == 0) {
      UnitActor_81b040(*(_QWORD*)(a1 + 152), 0x0.0p+0f),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      snd_Fade_Fade_10c830((__int64)v36, 0x0.0p+0f),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Dead_Unit",
                     (__int64)"SE_SYS_Dead_Unit", (__int64)v36, 0, 0x10001u, 0,
                     0x0.0p+0f, 0x1.0000000000000p+0f),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      snd_Fade_Destroy_Fade(v36),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      return;
    }
    if (v14 == 0) {
      return;
    }
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v20 = 2)
             : (v20 = 3),
         (v20 & v19) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_75;
      }
      v21 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      LODWORD(v13) = *(_DWORD*)(v21 + 168);
      if (*(float*)(v21 + 172) == *(float*)&v13) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v21 + 160) + 16LL))(v21 +
                                                                       160),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v12 = *(__n128*)(v21 + 208);
      }
      LANES128(v12).n128_u32[0] = LANES128(v12).n128_u32[3];
      if (LANES128(v12).n128_f32[3] != 0x1.0000000000000p+0f ||
          (v12 = ((__n128 (*)(unsigned __int64, float)) *
                  (_QWORD*)(*(_QWORD*)(v21 + 160) + 16LL))(
               v21 + 160, LANES128(v12).n128_f32[3]),
           LANES128(v12).n128_u32[0] = LANES128(v12).n128_u32[3],
           LANES128(v12).n128_f32[3] != 0x1.0000000000000p+0f)) {
      LABEL_75:
        v31 = *(const char**)(*(_QWORD*)(v14 + 392) + 672LL);
        goto LABEL_76;
      }
    }
  }
  v32 = *(unsigned __int8*)(v14 + 176);
  LODWORD(v36[0]) = 0;
  if (v32 == 1) {
    v33 = *(_QWORD*)(v14 + 152);
    LANES128(v12).n128_u64[0] = 0;
  LABEL_79:
    *(_QWORD*)&v13 = 0;
    (*(void (**)(__int64, long double, long double))(v33 + 24))(
        v14 + 152, *(long double*)&v12, v13),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_80:
    *(_QWORD*)(v14 + 160) = 0;
    *(_WORD*)(v14 + 176) = 256;
    *(_WORD*)(v14 + 20) |= 8u;
    return;
  }
  if (*(float*)(v14 + 160) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)(v14 + 152) + 16LL))(v14 + 152),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v33 = *(_QWORD*)(v14 + 152);
    goto LABEL_79;
  }
  if (((*(__int64 (**)(__int64, const char**, __int64))(
           *(_QWORD*)(v14 + 152) + 8LL))(v14 + 152, v36, v14 + 184) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v14 + 152) + 16LL))(v14 + 152),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LODWORD(v34) = v36[0];
    (*(void (**)(__int64, long double, long double))(
        *(_QWORD*)(v14 + 152) + 24LL))(v14 + 152, v35, v34),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_80;
  }
}

__int64 ProcUnitDead_76f480(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 152);
  v3 = *(_DWORD*)(v2 + 416);
  if ((v3 & 0x10000000) == 0) {
    v4 = v2;
    *(_DWORD*)(v2 + 416) = v3 | 0x10000000;
    GameRoutine_6c51e0(v2);
    GameRoutine_6c6da0(v4);
    GameRoutine_6c6ec0(v4);
    *(_DWORD*)(v4 + 416) &= ~0x10000000u;
    v2 = *(_QWORD*)(a1 + 152);
  }
  return GameRoutine_81a990(v2);
}

__int64 ProcUnitDead_76f4e0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(float*)(*(_QWORD*)(result + 152) + 164LL) ==
      *(float*)(*(_QWORD*)(result + 152) + 160LL)) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 ProcUnitDead_76f540(__int64 result)
{
  __int64 v1;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(result + 152);
  v3 = v1 == 0 || *GameData_212d000[0] == 0;
  if (*(_BYTE*)(result + 160) == 1) {
    if (!v3) {
      v4 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
      v5 = *(_QWORD*)(v1 + 440);
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 16);
      }
      else {
        v6 = 9;
      }
      v8 = 18;
      return GameRoutine_c8b5a0(result, v8, v1, v4, v6, 0xFFFFFFFFLL,
                                0xFFFFFFFFLL);
    }
  }
  else if (!v3) {
    v4 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
    v7 = *(_QWORD*)(v1 + 440);
    if (v7 != 0) {
      v6 = *(unsigned __int8*)(v7 + 16);
    }
    else {
      v6 = 9;
    }
    v8 = 15;
    return GameRoutine_c8b5a0(result, v8, v1, v4, v6, 0xFFFFFFFFLL,
                              0xFFFFFFFFLL);
  }
  return result;
}

void ProcUnitDead_76f5d0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;

  if (*(_BYTE*)(a1 + 160) == 0) {
    MapUtil_757430(*(_QWORD*)(a1 + 152));
    v1 = GameData_21ca300;
    v2 = *(_QWORD**)(GameData_21ca300 + 96);
    Image_72b4a0_alt1((__int64)v2);
    Image_72b6c0(v2);
    Image_72a260_alt1(*(_QWORD*)(v1 + 152));
  }
}

__int64

game_map_anonymous_ProcUnitDead_DeadDrop_closure_Invoke(__int64 result,
                                                        unsigned __int16* a2)
{
  if ((~*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                              8LL * *a2) +
                   336LL) &
       0x300) == 0) {
    return GameRoutine_7c9660(
        *(_QWORD*)(*GameData_212cfb8[0] + 16),
        (unsigned int)*(char*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 152LL) +
                               584LL),
        (unsigned int)*(char*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 152LL) +
                               585LL));
  }
  return result;
}

#pragma GCC visibility pop
