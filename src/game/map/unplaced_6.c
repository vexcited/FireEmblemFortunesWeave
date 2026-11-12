#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void GameHr_1366ac0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void MapBattleHUD_18c6be0(PSEUDO_X8, __int64);
__int64 BattleSide_79e8e0(_QWORD*);
__int64 GameHr_17c3f40(__int64, __int64);
__int64 GameHr_18c6e70(__int64, __int64, __int64*, char, char);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_10140c0(__int64*, __int64, int, __int64, unsigned __int8*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
extern _UNKNOWN* GameData_212fcd8;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c99b8;
extern __int64 game_g_empty_item;
void BattleSide_Destructor(_QWORD*);
__int64 game_map_1828910(_QWORD* a1);
__int64 game_map_1832f00(__int64* a1, unsigned __int8 a2);
__int64 game_map_18357c0(__int64 a1, char a2, char a3);
__int64 game_map_18c6800(__int64 a1, __int64 a2);

__int64 game_map_1828910(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[2];
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  GameHr_1366ac0((void*)(&v9_.v9), (__int64)"Layout/Battle.arc",
                 (__int64)"Battle_UnitInfoSimple");
  v2 = v9_.v9;
  v3 = v9_.v10;
  v4 = a1[5];
  v9_.v9 = 0;
  v9_.v10 = 0;
  a1[4] = v2;
  a1[5] = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v9_.v10;
  if (v9_.v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[5];
  v8[0] = a1[4];
  v8[1] = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(a1 + 6, v8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(a1 + 6, v8);
  }
  LayoutAccessor_155e830((__int64)(a1 + 6), 0);
  return ui_LayoutAccessor_SetPriority((__int64)(a1 + 6), -1);
}

__int64 game_map_1832f00(__int64* a1, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v4;
  char v5;
  __int64 v6;
  char v7;
  const char* v8;
  __int64 result;
  __int64 v10;
  const char* v11;
  __int64* v12;
  const char* v13;
  struct {
    __int64 v14;
    int v15;
  } v14_;
  _QWORD v16[4];

  v2 = a1[19];
  LOBYTE(v16[0]) = a2;
  v4 = v2 + 760 * (unsigned int)a2;
  v5 = (*(__int64 (**)(__int64*, _QWORD*))(*a1 + 40))(a1, v16);
  v6 = *(_QWORD*)(v4 + 40);
  v7 = v5;
  if ((v5 & 1) != 0) {
    v8 = "Player_Face";
  }
  else {
    v8 = "Target_Face";
  }
  result = ui_LayoutAccessor_FindPane(a1 + 3, (__int64)v8);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v10 = result;
      v11 = (v7 & 1) != 0 ? "PlayerFace_On" : "TargetFace_On";
      LayoutAccessor_1562cf0((__int64)(a1 + 3), v11);
      *(_BYTE*)(v10 + 88) &= ~1u;
      if (v6 == 0 || (v14_.v14 = v6, memset(v16, 0, 24), v14_.v15 = 1,
                      v12 = (__int64*)a1[(v7 & 1) + 17],
                      v16[3] = *(_QWORD*)GameData_212fcd8,
                      ((result = game_10140c0(v12, v10, 0, (__int64)&v14_.v14,
                                              (unsigned __int8*)v16)) &
                       1) == 0)) {
        if ((v7 & 1) != 0) {
          v13 = "PlayerFace_Off";
        }
        else {
          v13 = "TargetFace_Off";
        }
        return LayoutAccessor_1562cf0((__int64)(a1 + 3), v13);
      }
    }
  }
  return result;
}

__int64 game_map_18357c0(__int64 a1, char a2, char a3)
{
  __int64 v5;
  _WORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  const char* v22;
  __int64 v24;
  unsigned __int8* v25;
  int v26;
  struct {
    __int64 v28;
    __int64 v29;
    char gap24_[8];
    __int64 v30;
    __int64 (***v31)(_QWORD);
  } v28_;

  switch (a2) {
  case 2:
    v13 = "Info_Action_TargetUnit";
    goto LABEL_57;
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 27:
    v5 = *(_QWORD*)(a1 + 152);
    if (*(_QWORD*)(v5 + 800) != 0) {
      v6 = (_WORD*)(v5 + 60);
      if (*(_WORD*)(v5 + 60) == 0) {
        v7 = *(unsigned int*)(v5 + 56);
        if ((v7 & 0x80000000) != 0) {
          v8 = (unsigned __int16)game_g_empty_item;
          if ((_WORD)game_g_empty_item != 0) {
          LABEL_7:
            if (a2 == 4 && (a3 & 1) == 0) {
              v9 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v8);
              v10 = *(unsigned __int8*)(v9 + 72);
              v11 = *(unsigned __int8*)(v9 + 73);
              if (v10 <= 7 && v11 == 7) {
                v13 = "Info_Battle_TargetUnit_HPOff";
                goto LABEL_57;
              }
            }
          }
        LABEL_40:
          v21 = "Info_Battle_TargetUnit";
          v22 = "Info_Combat_TargetUnit";
          goto LABEL_41;
        }
        v6 = (_WORD*)(*(_QWORD*)(v5 + 40) + 8 * v7 + 828);
      }
      v8 = (unsigned __int16)*v6;
      if (*v6 != 0) {
        goto LABEL_7;
      }
      goto LABEL_40;
    }
    if ((*(_BYTE*)(*(_QWORD*)(v5 + 784) + 11277LL) & 0x80) != 0 ||
        (v14 = *(_QWORD*)(v5 + 808)) == 0) {
      v18 = *(_QWORD*)(v5 + 40);
      if (v18 != 0) {
        v19 = *(_QWORD*)(v18 + 440);
        if (v19 != 0 && (unsigned int)*(unsigned __int8*)(v19 + 16) - 1 <= 1) {
          v13 = "Info_Combat_TargetOnly";
          goto LABEL_57;
        }
      }
      if ((a3 & 1) != 0) {
        v13 = "Info_Combat_PlayerOnly";
        goto LABEL_57;
      }
      GameHr_17c3f40((__int64)&v28_.v28, v5 + 16);
      if ((BattleSide_79e8e0(&v28_.v28) & 1) != 0) {
        v24 = *(unsigned int*)(v28_.v29 + 11256);
        if ((_DWORD)v24 != 0) {
          v25 = (unsigned __int8*)(v28_.v29 + 3068);
          while (1) {
            v26 = *v25;
            v25 += 64;
            if (v26 == 21) {
              break;
            }
            if (--v24 == 0) {
              goto LABEL_55;
            }
          }
          if (a2 == 6) {
            v17 = "Info_Battle_PlayerOnly_HPOn";
          }
          else {
            v17 = "Info_Battle_PlayerOnly";
          }
          goto LABEL_63;
        }
      }
    LABEL_55:
      BattleSide_Destructor(&v28_.v28);
    LABEL_56:
      v13 = "Info_Battle_PlayerOnly";
      goto LABEL_57;
    }
    if ((a3 & 1) == 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 272LL))(v14) & 1) != 0) {
        v5 = *(_QWORD*)(a1 + 152);
        goto LABEL_20;
      }
      v13 = "Info_Battle_TargetObj_HPOff";
    LABEL_57:
      LayoutAccessor_1562cf0(a1 + 24, v13);
      return ui_LayoutAccessor_SetPaneVisible(a1 + 24, (__int64)"N_KeyA",
                                              (a3 & 1) == 0);
    }
  LABEL_20:
    GameHr_17c3f40((__int64)&v28_.v28, v5 + 16);
    v15 = v28_.v30;
    if (v28_.v30 != 0 && *(_QWORD*)(v28_.v30 + 392) != 0) {
      goto LABEL_24;
    }
    if ((*(_BYTE*)(v28_.v29 + 11277) & 0x80) == 0 && v28_.v31 != nullptr &&
        ((**v28_.v31)(v28_.v31) & 1) != 0) {
      v15 = v28_.v30;
      if (v28_.v30 != 0) {
      LABEL_24:
        v16 = *(_QWORD*)(v15 + 440);
        if (v16 != 0 &&
            (*(_BYTE*)(v16 + 16) == 0 || *(_BYTE*)(v16 + 16) == 3)) {
          if ((a3 & 1) != 0) {
            v17 = "Info_Combat_TargetObj";
          }
          else {
            v17 = "Info_Battle_TargetObj";
          }
          goto LABEL_63;
        }
      }
      if ((a3 & 1) != 0) {
        v17 = "Info_Combat_TargetObj_Enemy";
      LABEL_63:
        LayoutAccessor_1562cf0(a1 + 24, v17);
      }
    }
    BattleSide_Destructor(&v28_.v28);
    return ui_LayoutAccessor_SetPaneVisible(a1 + 24, (__int64)"N_KeyA",
                                            (a3 & 1) == 0);
  case 16:
    goto LABEL_56;
  case 18:
  case 22:
  case 24:
  case 26:
  case 28:
    goto LABEL_38;
  default:
    v20 = *(_QWORD*)(a1 + 152);
    if (v20 != 0 && *(_BYTE*)(v20 + 11272) == 8) {
      v21 = "Info_Battle_PlayerOnly";
      v22 = "Info_Combat_PlayerOnly";
    LABEL_41:
      if ((a3 & 1) != 0) {
        v13 = v22;
      }
      else {
        v13 = v21;
      }
    }
    else {
    LABEL_38:
      v13 = "Info_Action_PlayerOnly";
    }
    goto LABEL_57;
  }
}

__int64 game_map_18c6800(__int64 a1, __int64 a2)
{
  float32x4_t* v2;
  __int64 result;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  _DWORD* v10;
  __int64* v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  float v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  float v22;
  int v23;
  float v24;
  float v25;
  float v26;
  int v27;
  __int64 v28;
  __int64 v29;
  float32x4_t* v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t* v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  __int64 v40;
  _BYTE v41[16];
  struct {
    unsigned __int64 v42;
    char v43;
  } v42_;
  struct {
    __int64 v44;
    __int64 v45;
  } v44_;
  struct {
    __int64 v46;
    __int64 v47;
  } v46_;

  v2 = *(float32x4_t**)a1;
  MapBattleHUD_18c6be0((void*)(&v46_.v46), *(_QWORD*)a1);
  result = v46_.v46;
  if (v46_.v46 != 0) {
    v6 = *(_DWORD*)(v46_.v46 + 232);
    v7 = **(_DWORD**)(a1 + 8);
    *(_DWORD*)(v46_.v46 + 232) = v7;
    if (v6 != v7) {
      (*(void (**)(__int64))(*(_QWORD*)result + 184LL))(result);
    }
    if ((LANES128(v2[19]).n128_i32[0] >= 1 &&
             ((v8 = **(_DWORD**)(a1 + 16)) & 0x8000) != 0 ||
         LANES128(v2[16]).n128_i32[3] >= 1 &&
             ((v8 = **(_DWORD**)(a1 + 16)) & 0x4000) != 0) &&
        (v8 & 0x10000) != 0) {
      v12 = game_map_MapRandom_instance__ptr[0];
      do {
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12);
        v14 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4);
        v15 = *(_DWORD*)v12 ^ (*(_DWORD*)v12 << 11);
        *(_DWORD*)v12 = *((_DWORD*)v12 + 1);
        *((_DWORD*)v12 + 1) = v13;
        v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v14;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v16;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v17 = (float)((float)(unsigned __int16)v16 / 0x1.fffe000000000p+15f) *
              0x1.e000000000000p+4f;
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v18 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12);
        v19 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4);
        v20 = *(_DWORD*)v12 ^ (*(_DWORD*)v12 << 11);
        *(_DWORD*)v12 = *((_DWORD*)v12 + 1);
        *((_DWORD*)v12 + 1) = v18;
        v21 = (v20 >> 8) ^ (v19 >> 19) ^ v20 ^ v19;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v19;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v21;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v22 = -v17;
        v23 = LANES128(v2[16]).n128_i32[2];
        if (v23 != 0) {
          v24 = v17;
        }
        else {
          v24 = -v17;
        }
        if (v23 != 2) {
          v22 = v24;
        }
        v25 = (float)((float)(unsigned __int16)v21 / 0x1.fffe000000000p+15f) *
              0x1.e000000000000p+4f;
        v26 = -v25;
        if (v23 == 2) {
          v25 = -v25;
        }
        if (v23 == 3) {
          v22 = v17;
          v25 = v26;
        }
      } while (
          (float)((float)(PSEUDO_UNFUSED(
                      (float)(v25 - COERCE_FLOAT(HIDWORD(
                                        LANES128(v2[16]).n128_u64[0]))) *
                      (float)(v25 - COERCE_FLOAT(HIDWORD(
                                        LANES128(v2[16]).n128_u64[0]))))) +
                  (float)((float)(v22 -
                                  COERCE_FLOAT(LANES128(v2[16]).n128_u64[0])) *
                          (float)(v22 - COERCE_FLOAT(
                                            LANES128(v2[16]).n128_u64[0])))) <
          0x1.2000000000000p+7f);
      LANES128(v2[16]).n128_f32[0] = v22;
      if (v23 <= 2) {
        v27 = v23 + 1;
      }
      else {
        v27 = 0;
      }
      LANES128(v2[16]).n128_u32[2] = v27;
      v29 = v46_.v46;
      v28 = v46_.v47;
      LANES128(v2[16]).n128_f32[1] = v25 + 0x1.4000000000000p+3f;
      v44_.v44 = v29;
      v44_.v45 = v28;
      if (v28 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                  memory_order_relaxed);
      }
      v11 = (__int64*)&v42_.v42;
      v42_.v42 = LANES128(v2[16]).n128_u64[0];
      v42_.v43 = 1;
      v9 = *(_QWORD*)(a1 + 24);
      v10 = *(_DWORD**)(a1 + 32);
    }
    else {
      v44_.v44 = v46_.v46;
      v44_.v45 = v46_.v47;
      if (v46_.v47 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v46_.v47 + 16), 1u,
                                  memory_order_relaxed);
      }
      v9 = *(_QWORD*)(a1 + 24);
      v10 = *(_DWORD**)(a1 + 32);
      v41[0] = 0;
      v11 = (__int64*)v41;
      v41[8] = 0;
    }
    GameHr_18c6e70((__int64)&v44_.v44, v9, v11, *v10 != 0, 0);
    if (v44_.v45 != 0) {
      std___1___shared_weak_count___release_weak(v44_.v45);
    }
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 1LL) & 0x80) != 0) {
      v30 = *(float32x4_t**)(a1 + 24);
      if (LANES128(v2[21]).n128_u8[0] == 1) {
        v31 = *v30;
        v32 = vsubq_f32(*v30, v2[20]);
        v33 = vmulq_f32(v32, v32);
        LANES128(v33).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                .n64_f32[0] < 0x1.0000000000000p+0f) {
          ++LANES128(v2[19]).n128_u32[0];
          v30 = *(float32x4_t**)(a1 + 24);
          v31 = *v30;
        }
        LANES128(v2[20]).n128_u32[0] = LANES128(v31).n128_u32[0];
        LANES128(v2[20]).n128_u32[1] = LANES128(*(v30)).n128_u32[1];
        v34 = v2[20];
        LANES128(v34).n128_u64[1] = LANES128(*(v30)).n128_u32[2];
        v2[20] = v34;
      }
      else {
        LANES128(v2[20]).n128_u64[1] = LANES128(*(v30)).n128_u64[1];
        LANES128(v2[20]).n128_u64[0] = LANES128(*(v30)).n128_u64[0];
        LANES128(v2[21]).n128_u8[0] = 1;
      }
    }
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 1LL) & 0x40) == 0) {
    LABEL_42:
      result = *(_QWORD*)(a2 + 32);
      if (result == 0) {
        goto LABEL_44;
      }
      goto LABEL_43;
    }
    v35 = *(float32x4_t**)(a1 + 24);
    if (LANES128(v2[18]).n128_u8[0] == 1) {
      v36 = *v35;
      v37 = vsubq_f32(*v35, v2[17]);
      v38 = vmulq_f32(v37, v37);
      LANES128(v38).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
              .n64_f32[0] < 0x1.0000000000000p+0f) {
        ++LANES128(v2[16]).n128_u32[3];
        v35 = *(float32x4_t**)(a1 + 24);
        v36 = *v35;
      }
      LANES128(v2[17]).n128_u32[0] = LANES128(v36).n128_u32[0];
      LANES128(v2[17]).n128_u32[1] = LANES128(*(v35)).n128_u32[1];
      v39 = v2[17];
      LANES128(v39).n128_u64[1] = LANES128(*(v35)).n128_u32[2];
      v2[17] = v39;
      goto LABEL_42;
    }
    LANES128(v2[17]).n128_u64[1] = LANES128(*(v35)).n128_u64[1];
    LANES128(v2[17]).n128_u64[0] = LANES128(*(v35)).n128_u64[0];
    LANES128(v2[18]).n128_u8[0] = 1;
    result = *(_QWORD*)(a2 + 32);
    if (result != 0) {
    LABEL_43:
      result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(
          result, &v46_.v46);
    }
  }
LABEL_44:
  v40 = v46_.v47;
  if (v46_.v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46_.v47 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    return std___1___shared_weak_count___release_weak(v40);
  }
  return result;
}

#pragma GCC visibility pop
