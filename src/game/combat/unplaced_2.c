#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void CharacterSound_1095750(PSEUDO_X8, __int64,
                                                       __int64, __int64, float);
__attribute__((swiftcall)) void CombatCharacterSound_1091a50(PSEUDO_X8, _QWORD,
                                                             _QWORD, float);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void game_character_1085300(PSEUDO_X8, _QWORD,
                                                       _QWORD, long double);
__int64* GameRoutine_108fa60(__int64);
__int64 CharacterModel_1070c00(_QWORD, _QWORD);
__int64 CharacterModel_1071880(_QWORD, _QWORD);
__int64 CombatCharacterSound_1091900(_QWORD*);
__int64 GameRoutine_10657e0(__int64 result);
__int64 GameRoutine_1068020(__int64);
__int64 GameRoutine_10681e0(__int64);
__int64 GameRoutine_108f9b0(__int64);
__int64 GameRoutine_108fc30(__int64);
__int64 GameRoutine_108fce0(__int64);
__int64 GameRoutine_1090be0(__int64 result);
__int64 GameRoutine_10966f0(__int64);
__int64 collision_6725f0(_QWORD, _QWORD, _QWORD, float);
__int64 game_106ffe0(__int64, unsigned int, unsigned int*, unsigned __int64);
__int64 game_109d0f0(long double);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 MagicInst_10a4fe0(__int64, unsigned int);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
double cos(double);
double sin(double);
extern _DWORD* GameData_212d168;
extern _QWORD GameData_1ba7880[3];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83520;
extern __int128 GameData_1a83800;
extern __int64* GameData_212d448[9];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ec7b0;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 GameData_2235e30;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
float game_combat_e401e0(float*, float*);
int** GameRoutine_1064fc0(int** result);
void GameRoutine_1064b20(int**);
void GameRoutine_1064dc0(_QWORD*);
void GameRoutine_10650e0(int**);
void GameRoutine_1065370(int**);
void GameRoutine_10decc0(unsigned int**);
void MagicInst_10a4d70(unsigned int*);
void game_combat_1065a00(_BYTE*);
void game_combat_ActionDamageCore_DoDie(__int64*);
void game_combat_1064730_alt1(__int64 a1, int* a2, char a3, char a4,
                              _QWORD* a5) __asm__("game_combat_1064730");
float game_combat_1068a00(__int64 a1, float result);
__attribute__((swiftcall)) void game_combat_1068f80(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void game_combat_10691b0(PSEUDO_X8 x8_,
                                                    _QWORD* result, __n128 a3);
__attribute__((swiftcall)) void game_combat_10692c0(PSEUDO_X8 x8_,
                                                    int32x2_t* a1);
void game_combat_1069600(__int64 a1, float a2);
__int64 game_combat_1099520(__int64 a1, __int64 a2);
__int64 game_combat_109af50(__int64 a1);
_DWORD* GameRoutine_10650e0_alt1(_DWORD* result) __asm__("GameRoutine_10650e0");
_QWORD* MagicInst_10a4d70_alt1(_QWORD* result) __asm__("MagicInst_10a4d70");
__attribute__((swiftcall)) void
CharacterSound_1095750_alt1(PSEUDO_X8, __int64, const char*, __int64,
                            float) __asm__("CharacterSound_1095750");
__attribute__((swiftcall)) void
collision_6725f0_alt1(PSEUDO_X8, float32x4_t* result, float32x4_t*, __int64,
                      float) __asm__("collision_6725f0");
__int64* CharacterModel_1070c00_alt1(__int64,
                                     __int64) __asm__("CharacterModel_1070c00");
__int64 CharacterModel_1071880_alt1(__int64,
                                    int) __asm__("CharacterModel_1071880");
__int64 GameRoutine_1064b20_alt1(__int64 result) __asm__("GameRoutine_1064b20");
__int64 GameRoutine_1064dc0_alt1(__int64 result) __asm__("GameRoutine_1064dc0");
__int64 GameRoutine_10decc0_alt1(__int64 result) __asm__("GameRoutine_10decc0");
__int64 MagicInst_10a4fe0_alt1(__int64 result,
                               unsigned int) __asm__("MagicInst_10a4fe0");
__int64 game_109d0f0_alt1() __asm__("game_109d0f0");
__int64 game_combat_ActionDamageCore_DoDie_alt1(__int64*) __asm__(
    "game_combat_ActionDamageCore_DoDie");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void game_combat_1064730(_QWORD** a1, _DWORD* a2, char a3, char a4, _QWORD* a5);

void game_combat_1064730(_QWORD** a1, _DWORD* a2, char a3, char a4, _QWORD* a5)
{

#pragma clang fp contract(off)
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64* v21;
  int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  bool v38;
  __int64 v39;
  bool v40;
  long double v41;
  int* v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v48;
  bool v49;
  unsigned int v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v54;
  bool v55;
  __int64 v56;
  _QWORD v57[2];

  *a1 = a2;
  *((_BYTE*)a1 + 8) = a3;
  a1[3] = (_QWORD*)a5[1];
  a1[2] = (_QWORD*)*a5;
  v9 = GameData_212d448[0];
  v10 = *GameData_212d448[0];
  if (*GameData_212d448[0] == 0 || (v11 = *(_QWORD*)(v10 + 8)) == 0 ||
      (*(_BYTE*)(v11 + 113) & 2) == 0) {
    GameRoutine_1064dc0_alt1((__int64)a1);
    if ((a4 & 1) == 0) {
      GameRoutine_1064fc0((int**)a1);
      GameRoutine_10650e0_alt1(a1);
      GameRoutine_1065370((int**)a1);
    }
    GameRoutine_10657e0((__int64)a1);
    game_combat_1065a00(a1);
    goto LABEL_7;
  }
  v22 = *a2;
  if ((*a2 & 0x180) == 0) {
    if ((v22 & 1) != 0) {
      v50 = a2[3];
      if (v50 > 3) {
        goto LABEL_19;
      }
      v51 = v10 + 24LL * v50;
      v45 = *(_QWORD*)(v51 + 32);
      if (v45 == 0) {
        goto LABEL_19;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                memory_order_relaxed);
      v52 = *(_QWORD**)(v51 + 40);
      if (*(_QWORD*)(v45 + 8) != -1 && v52 != nullptr) {
        v54 = v52[10];
        if (v54 != 0) {
          v55 = *(_QWORD*)(v54 + 8) == -1 || v52[11] == 0;
          if (!v55 && *(_QWORD*)(v45 + 8) != -1) {
            std___1___shared_weak_count___release_weak_alt1(v45);
            v56 = CombatCharacterSound_1091900(v52 + 109);
            if (v56 != 0) {
              CharacterSound_1095750_alt1((void*)((__int64)v57), v56,
                                          "SE_ACT_LD_Miss", 0,
                                          0x1.0000000000000p+0f);
            }
            goto LABEL_19;
          }
        }
      }
    }
    else {
      if ((v22 & 8) == 0) {
        goto LABEL_19;
      }
      v43 = a2[3];
      if (v43 > 3) {
        goto LABEL_19;
      }
      v44 = v10 + 24LL * v43;
      v45 = *(_QWORD*)(v44 + 32);
      if (v45 == 0) {
        goto LABEL_19;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                memory_order_relaxed);
      v46 = *(_QWORD*)(v44 + 40);
      if (*(_QWORD*)(v45 + 8) != -1 && v46 != 0) {
        v48 = *(_QWORD*)(v46 + 80);
        if (v48 != 0) {
          v49 = *(_QWORD*)(v48 + 8) == -1 || *(_QWORD*)(v46 + 88) == 0;
          if (!v49 && *(_QWORD*)(v45 + 8) != -1) {
            std___1___shared_weak_count___release_weak_alt1(v45);
            CombatCharacterSound_1091a50((void*)(v57), v46 + 872,
                                         "SE_ACT_LD_Guard_Normal",
                                         0x1.0000000000000p+0f);
            goto LABEL_19;
          }
        }
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v45);
  }
LABEL_19:
  GameRoutine_1064b20_alt1((__int64)a1);
  if (*v9 != 0) {
    v23 = *((_DWORD*)*a1 + 3);
    if (v23 <= 3) {
      v24 = *v9 + 24LL * v23;
      v25 = *(_QWORD*)(v24 + 32);
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                  memory_order_relaxed);
        v26 = *(_QWORD*)(v24 + 40);
        v27 = *(_QWORD*)(v25 + 8) == -1 || v26 == 0;
        if (v27 || (v28 = *(_QWORD*)(v26 + 80)) == 0 ||
            (*(_QWORD*)(v28 + 8) != -1 ? (v29 = *(_QWORD*)(v26 + 88) == 0)
                                       : (v29 = true),
             v29)) {
          v30 = 0;
        }
        else if (*(_QWORD*)(v25 + 8) == -1) {
          v30 = 0;
        }
        else {
          v30 = v26;
        }
        std___1___shared_weak_count___release_weak_alt1(v25);
        v31 = *(_QWORD*)(v30 + 80);
        if (v31 == 0) {
          goto LABEL_41;
        }
      LABEL_36:
        v32 = *(_QWORD*)(v31 + 8);
        v33 = *(_QWORD*)(v30 + 88);
        v34 = v32 == -1 || v33 == 0;
        if (!v34 && (*(_BYTE*)(v33 + 341) & 2) != 0) {
          goto LABEL_7;
        }
        goto LABEL_41;
      }
    }
  }
  v30 = 0;
  v31 = (*(_QWORD*)0x50LL);
  if ((*(_QWORD*)0x50LL) != 0) {
    goto LABEL_36;
  }
LABEL_41:
  v35 = *v9 + 24LL * *((unsigned int*)*a1 + 3);
  v36 = *(_QWORD*)(v35 + 32);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                            memory_order_relaxed);
  v37 = *(_QWORD**)(v35 + 40);
  v38 = *(_QWORD*)(v36 + 8) == -1 || v37 == nullptr;
  if (v38 || (v39 = v37[10]) == 0 ||
      (*(_QWORD*)(v39 + 8) != -1 ? (v40 = v37[11] == 0) : (v40 = true), v40)) {
    v37 = nullptr;
  }
  std___1___shared_weak_count___release_weak_alt1(v36);
  LODWORD(v41) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
  CharacterAnimator_1079580(v37[46], *((_DWORD*)*a1 + 17), v41,
                            -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
LABEL_7:
  if ((a3 & 1) == 0) {
    if ((*(_BYTE*)a2 & 0x40) != 0) {
      game_combat_ActionDamageCore_DoDie_alt1((__int64*)a1);
    }
    v15 = *v9;
    if (*v9 != 0) {
      v16 = *(_QWORD*)(v15 + 8);
      if (v16 == 0) {
        goto LABEL_55;
      }
      GameRoutine_1090be0(*(_QWORD*)(v15 + 8));
      v17 = *(_QWORD*)(v16 + 32);
      v18 = *(_QWORD*)(v16 + 40);
      if (v17 == v18) {
        v21 = &GameData_2235e30;
      }
      else {
        v19 = 954437177 * ((unsigned __int64)(v18 - v17) >> 4) - 1;
        v20 = *(_DWORD*)(v16 + 56);
        if (v20 < v19) {
          v19 = *(_DWORD*)(v16 + 56);
        }
        if (v20 < 0) {
          v19 = 0;
        }
        v21 = (__int64*)(v17 + 144LL * v19);
      }
      *(_QWORD*)(v16 + 64) = v21[7];
      if (*v9 != 0) {
      LABEL_55:
        v42 = (int*)*a1;
        MagicInst_10a4d70_alt1(*a1);
        MagicInst_10a4fe0_alt1((__int64)v42, ((v42[3] - 1) & 0xFFFFFFFD) != 0);
      }
    }
    if (((_BYTE)a1[1] & 1) == 0) {
      GameRoutine_10decc0_alt1((__int64)(*a1 + 9));
    }
  }
}

float game_combat_1068a00(__int64 a1, float result)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  __int128 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v2 = *(_QWORD*)(a1 + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(_QWORD*)(a1 + 88);
    if (v3 != -1 && v4 != 0) {
      v6 = *(_QWORD*)(v4 + 8);
      *(_DWORD*)(a1 + 112) = *(_DWORD*)(v6 + 304);
      *(_DWORD*)(a1 + 116) = *(_DWORD*)(v6 + 308);
      v7 = *(_DWORD*)(v6 + 312);
      *(_QWORD*)&v8 = *(_QWORD*)(a1 + 112);
      *(_DWORD*)(a1 + 40) = v8;
      *(_DWORD*)(a1 + 44) = v7;
      *((_QWORD*)&v8 + 1) = v7;
      *(_OWORD*)(a1 + 112) = v8;
      v9 = *(float*)(v6 + 324) +
           (float)(roundf(*(float*)(v6 + 324) * 0x1.45f3060000000p-3f) *
                   -0x1.921fb60000000p+2f);
      if (v9 <= 0x1.921fb60000000p+0f) {
        v11 = 1.0f;
        if (v9 >= -0x1.921fb60000000p+0f) {
        LABEL_11:
          v12 = v9 * v9;
          v13 =
              v9 *
              (float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c190) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c190 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c190) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c190 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c190 *
                                                                                                    (float)(v9 *
                                                                                                            v9))) *
                                                                                    (float)(v9 *
                                                                                            v9))) *
                                                                 (float)(v9 *
                                                                         v9))) *
                                                 (float)(v9 * v9))) *
                              (float)(v9 * v9)) +
                      1.0f);
          v14 =
              v11 *
              (float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c188) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c188 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c188) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c188 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    v12)) *
                                                                                    v12)) *
                                                                 v12)) *
                                                 v12)) *
                              v12) +
                      1.0f);
          v15 = v13 + (float)(v14 * 0.0f);
          result = v14 + (float)(v13 * -0.0f);
          *(float*)(a1 + 48) = v15;
          *(float*)(a1 + 52) = result;
          return result;
        }
        v10 = -0x1.921fb60000000p+1f;
      }
      else {
        v10 = 0x1.921fb60000000p+1f;
      }
      v9 = v10 - v9;
      v11 = -1.0f;
      goto LABEL_11;
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_combat_1068f80(PSEUDO_X8 x8_, __int64 a1)
{
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  bool v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  if (*GameData_212d448[0] == 0) {
    goto LABEL_16;
  }
  v4 = *GameData_212d448[0] +
       24LL * (((*(_DWORD*)(a1 + 96) - 1) & 0xFFFFFFFD) != 0);
  v5 = *(_QWORD*)(v4 + 32);
  if (v5 == 0) {
    goto LABEL_16;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(v4 + 40);
  v7 = *(_QWORD*)(v5 + 8) == -1 || v6 == 0;
  if (v7 || (v8 = *(_QWORD*)(v6 + 80)) == 0 ||
      (*(_QWORD*)(v8 + 8) != -1 ? (v9 = *(_QWORD*)(v6 + 88) == 0) : (v9 = true),
       v9 || *(_QWORD*)(v5 + 8) == -1)) {
    std___1___shared_weak_count___release_weak(v5);
  LABEL_16:
    v14 = (float)(*(float*)(a1 + 48) * 3.0f) + *(float*)(a1 + 40);
    v13 = (float)(*(float*)(a1 + 52) * 3.0f) + *(float*)(a1 + 44);
    goto LABEL_17;
  }
  std___1___shared_weak_count___release_weak(v5);
  v10 = *(float*)(v6 + 44) - *(float*)(a1 + 44);
  v11 = *(float*)(v6 + 40) - *(float*)(a1 + 40);
  v12 = (float)(v10 * v10) + (float)(v11 * v11);
  if (v12 >= 0x1.0000000000000p-23f) {
    v15 = 1.0f / sqrtf(v12);
    v14 = v11 * v15;
    v13 = v10 * v15;
  }
  else {
    v13 = 1.0f;
    v14 = 0.0f;
  }
LABEL_17:
  *a2 = v14;
  a2[1] = v13;
}

__attribute__((swiftcall)) void game_combat_10691b0(PSEUDO_X8 x8_,
                                                    _QWORD* result, __n128 a3)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  bool v13;
  _BOOL8 v14;

  v3 = result[10];
  if (v3 == 0 || ((v4 = result[11], *(_QWORD*)(v3 + 8) != -1) ? (v5 = v4 == 0)
                                                              : (v5 = true),
                  v5)) {
    v6 = result[15];
    *a2 = result[14];
    a2[1] = v6;
  }
  else {
    if (GameData_21ec7b0 != 0 &&
        (v7 = GameData_21ec7b0 +
              24LL * (((*((_DWORD*)result + 24) - 1) & 0xFFFFFFFD) != 0),
         (v8 = *(_QWORD*)(v7 + 32)) != 0)) {
      v9 = a2;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      v10 = *(_QWORD*)(v7 + 40);
      v11 = *(_QWORD*)(v8 + 8) == -1 || v10 == 0;
      if (v11 || (v12 = *(_QWORD*)(v10 + 80)) == 0 ||
          (*(_QWORD*)(v12 + 8) != -1 ? (v13 = *(_QWORD*)(v10 + 88) == 0)
                                     : (v13 = true),
           v13 || *(_QWORD*)(v8 + 8) == -1)) {
        a3 = std___1___shared_weak_count___release_weak(v8);
        v14 = false;
      }
      else {
        a3 = std___1___shared_weak_count___release_weak(v8);
        v14 = (unsigned int)(*(_DWORD*)(v10 + 56) - 3) < 2;
      }
      a2 = v9;
    }
    else {
      v14 = false;
    }
    {
      (game_character_1085300((void*)(a2), v4, v14, *(long double*)&a3),
       (void*)(a2));
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_combat_10692c0(PSEUDO_X8 x8_,
                                                    int32x2_t* a1)
{

#pragma clang fp contract(off)
  int32x2_t* a2 = (int32x2_t*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  bool v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  bool v18;
  float v19;
  float v20;
  __int64 v21;
  float32x4_t v22;
  float v23;
  __int64 v24;
  __int64 v25;
  float32x4_t v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64** v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  float v35;
  float32x4_t v36;

  v3 = GameData_212d448[0];
  v4 = LANES64(a1[12]).n64_u32[0] - 1;
  if (v4 > 2) {
    v5 = 2;
  }
  else {
    v5 = GameData_1ba7880[v4];
  }
  v6 = *GameData_212d448[0] + 24 * v5;
  v7 = *(_QWORD*)(v6 + 32);
  if (v7 == 0) {
    goto LABEL_36;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                            memory_order_relaxed);
  v8 = *(_QWORD*)(v6 + 40);
  v9 = *(_QWORD*)(v7 + 8) == -1 || v8 == 0;
  if (v9 || (v10 = *(_QWORD*)(v8 + 80)) == 0 ||
      (*(_QWORD*)(v10 + 8) != -1 ? (v11 = *(_QWORD*)(v8 + 88) == 0)
                                 : (v11 = true),
       v11 || *(_QWORD*)(v7 + 8) == -1)) {
    v14 = v7;
    goto LABEL_35;
  }
  std___1___shared_weak_count___release_weak(v7);
  if ((*(_BYTE*)(*(_QWORD*)(v8 + 88) + 341LL) & 8) != 0) {
    LANES64(*(a2)).n64_u64[0] =
        LANES64_OF(
            vzip1_s32(
                a1[14],
                COERCE_AS(
                    int32x2_t,
                    LANES128_OF(vextq_s8(*(int8x16_t*)LANES64(a1[14]).n64_u64,
                                         *(int8x16_t*)LANES64(a1[14]).n64_u64,
                                         8u))
                        .n128_u64[0])))
            .n64_u64[0];
    return;
  }
  if (*v3 == 0 || (v13 = *v3 + 24LL * (((LANES64(a1[12]).n64_u32[0] - 1) &
                                        0xFFFFFFFD) != 0),
                   (v14 = *(_QWORD*)(v13 + 32)) == 0)) {
  LABEL_36:
    LANES64(*(a2)).n64_u64[0] = 0;
    return;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                            memory_order_relaxed);
  v15 = *(_QWORD*)(v13 + 40);
  v16 = *(_QWORD*)(v14 + 8) == -1 || v15 == 0;
  if (v16 || (v17 = *(_QWORD*)(v15 + 80)) == 0 ||
      (*(_QWORD*)(v17 + 8) != -1 ? (v18 = *(_QWORD*)(v15 + 88) == 0)
                                 : (v18 = true),
       v18 || *(_QWORD*)(v14 + 8) == -1)) {
  LABEL_35:
    std___1___shared_weak_count___release_weak(v14);
    goto LABEL_36;
  }
  v22 = std___1___shared_weak_count___release_weak(v14);
  v19 = *(float*)(v15 + 48);
  v20 = *(float*)(v15 + 52);
  v21 = *(_QWORD*)(v8 + 88);
  LANES128(v22).n128_f32[0] = -(float)(v20 * -0x1.8000000000000p+0f);
  if ((LANES64(a1[12]).n64_u32[0] & 0xFFFFFFFD) != 0) {
    v23 = -(float)(v19 * 0x1.8000000000000p+0f);
  }
  else {
    LANES128(v22).n128_f32[0] = v20 * -0x1.8000000000000p+0f;
    v23 = v19 * 0x1.8000000000000p+0f;
  }
  LANES128(v22).n128_f32[2] = v23;
  v24 = *(_QWORD*)(v21 + 392);
  v25 = *(_QWORD*)(v21 + 400);
  v26 = vaddq_f32(*(float32x4_t*)LANES64(a1[14]).n64_u64, v22);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    v27 = *(_QWORD*)(v24 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v36 = v26;
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
      v26 = v36;
    }
  }
  else {
    v27 = *(_QWORD*)(v24 + 11608);
  }
  v28 = 639;
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v29 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      if ((unsigned __int64)GameData_22356f8 <= 0x3AF772C9) {
        v30 = 0x3AF772C9 % (unsigned int)GameData_22356f8;
      }
      else {
        v30 = 989295305;
      }
    }
    else {
      v30 = ((_DWORD)GameData_22356f8 - 1) & 0x3AF772C9;
    }
    v31 = *(__int64***)(GameData_22356f0 + 8 * v30);
    if (v31 == nullptr || (v32 = *v31, *v31 == nullptr)) {
      v28 = 639;
      goto LABEL_63;
    }
    v28 = 639;
    if ((GameData_22356f8 & v29) == 0) {
      while (1) {
        v34 = v32[1];
        if (v34 == 989295305) {
          if (*((_DWORD*)v32 + 4) == 989295305) {
            goto LABEL_66;
          }
        }
        else if ((v34 & v29) != v30) {
          goto LABEL_63;
        }
        v32 = (__int64*)*v32;
        if (v32 == nullptr) {
          goto LABEL_63;
        }
      }
    }
    do {
      v33 = v32[1];
      if (v33 == 989295305) {
        if (*((_DWORD*)v32 + 4) == 989295305) {
        LABEL_66:
          v28 = *((int*)v32 + 5);
          break;
        }
      }
      else {
        if (v33 >= GameData_22356f8) {
          v33 %= (unsigned __int64)GameData_22356f8;
        }
        if (v33 != v30) {
          break;
        }
      }
      v32 = (__int64*)*v32;
    } while (v32 != nullptr);
  }
LABEL_63:
  v35 = -0x1.6666660000000p-1f;
  if (*(_QWORD*)(v27 + 8 * v28) == 0) {
    v35 = 0x1.3333340000000p-2f;
  }
  LANES64(*(a2)).n64_f32[0] = LANES128(v26).n128_f32[0] + (float)(v19 * v35);
  LANES64(*(a2)).n64_f32[1] = LANES128(v26).n128_f32[2] + (float)(v20 * v35);
}

void game_combat_1069600(__int64 a1, float a2)
{
  __int64 v3;
  __int64 v5;
  float32x4_t* v7;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  unsigned int v12;
  __int64 v13;
  float32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  __int128 v17;
  float v18;
  unsigned __int64 v19;
  float32x4_t v20;
  int8x16_t v21;
  double v22;
  double v23;
  double v24;
  float v25;
  float v26;
  float v27;
  bool v28;
  bool v29;
  int v31;
  float32x4_t v32;
  float v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  double v38;
  double v39;
  double v40;
  double v41;
  double v42;
  double v43;
  double v44;
  float v45;
  float v46;
  float v47;
  float v48;
  unsigned __int32 v52;
  float32x4_t* v53;
  double v54;
  double v55;
  double v56;
  float32x4_t v57;
  unsigned int v58;
  unsigned __int64 v59;
  unsigned int v60;
  float32x4_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  int8x16_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float v78;
  float v79;
  int8x16_t v80;
  float v81[8];
  __int128 v82;
  __int128 v83;

  if (a2 >= 0x1.6571840000000p-4f) {
    v3 = *(_QWORD*)(a1 + 80);
    if (v3 != 0) {
      v5 = *(_QWORD*)(a1 + 88);
      if (*(_QWORD*)(v3 + 8) == -1 || v5 == 0) {
        v7 = nullptr;
      }
      else {
        v7 = *(float32x4_t**)(v5 + 8);
      }
      if (*(_QWORD*)(v3 + 8) != -1 && v5 != 0) {
        v9 = *(_QWORD*)(v5 + 8);
        if (*GameData_212d168 == 3) {
          *(_QWORD*)&v10 = *(_QWORD*)(a1 + 40);
          *(_QWORD*)&v11 = (unsigned int)v10 | 0x4348000000000000LL;
          DWORD1(v10) = -1027080192;
          *((_QWORD*)&v11 + 1) = (unsigned int)HIDWORD(*(_QWORD*)(a1 + 40));
          *((_QWORD*)&v10 + 1) = *((_QWORD*)&v11 + 1);
          v83 = v11;
          v82 = v10;
          GameRoutine_1085a10((void*)(v81), v5 + 160, &v83, &v82, 0);
          v12 = LODWORD(v81[1]);
        }
        else {
          v12 = *(_DWORD*)(v9 + 308);
        }
        v13 = *(_QWORD*)(a1 + 40);
        LANES128(v14).n128_u64[0] = __PAIR64__(v12, v13);
        LANES128(v14).n128_u64[1] = HIDWORD(v13);
        v15 = vsubq_f32(*(float32x4_t*)(v9 + 304), v14);
        v16 = vmulq_f32(v15, v15);
        LANES128(v16).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          *(_DWORD*)(v9 + 304) = v13;
          *(_DWORD*)(v9 + 308) = v12;
          v17 = *(_OWORD*)(v9 + 304);
          *(_DWORD*)(v9 + 296) |= 1u;
          *((_QWORD*)&v17 + 1) = HIDWORD(v13);
          *(_OWORD*)(v9 + 304) = v17;
        }
        *(_QWORD*)v81 = 0x3F80000000000000LL;
        v18 = game_combat_e401e0(v81, (float*)(a1 + 48));
        LODWORD(v19) = 0;
        *((float*)&v19 + 1) = v18;
        v20 = vsubq_f32(*(float32x4_t*)(v9 + 320), COERCE_AS(float32x4_t, v19));
        v21 = vmulq_f32(v20, v20);
        LANES128(v21).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          *(_DWORD*)(v9 + 320) = 0;
          *(float*)(v9 + 324) = v18;
          *(_OWORD*)(v9 + 320) = *(unsigned __int64*)(v9 + 320);
          v22 = v18 * 0x1.0000000000000p-1;
          v23 = cos(v22);
          v24 = sin(v22);
          v25 = v23 + PSEUDO_UNFUSED(v24 * 0x0.0p+0);
          v26 = PSEUDO_UNFUSED(v24 * -0x0.0p+0) + v23 * 0x0.0p+0;
          v27 = v24 + PSEUDO_UNFUSED(v23 * 0x0.0p+0);
          v28 = COERCE_FLOAT(*(_OWORD*)(v9 + 336)) == v26 &&
                COERCE_FLOAT(HIDWORD(*(_QWORD*)(v9 + 336))) == v27;
          v29 = v28 && COERCE_FLOAT(*(_QWORD*)(v9 + 344)) == v26;
          if (!v29 || COERCE_FLOAT(DWORD3(*(_OWORD*)(v9 + 336))) != v25) {
            v31 = *(_DWORD*)(v9 + 296);
            *(float*)(v9 + 336) = v26;
            *(float*)(v9 + 340) = v27;
            *(float*)(v9 + 344) = v26;
            *(float*)(v9 + 348) = v25;
            *(_DWORD*)(v9 + 296) = v31 | 1;
          }
        }
      }
    }
    else {
      v7 = nullptr;
    }
    v32 = v7[20];
    v33 = a2 + COERCE_FLOAT(HIDWORD(LANES128(v7[20]).n128_u64[0]));
    v34 = v32;
    LANES128(v34).n128_f32[1] = v33;
    v35 = vsubq_f32(v32, v34);
    v36 = vmulq_f32(v35, v35);
    LANES128(v36).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v7[20]).n128_u32[0] = LANES128(v32).n128_u32[0];
      LANES128(v7[20]).n128_f32[1] = v33;
      v78 = LANES128(v32).n128_f32[0];
      v79 = v33;
      v37 = v7[20];
      LANES128(v37).n128_u64[1] = LANES128(v32).n128_u32[2];
      v38 = LANES128(v32).n128_f32[2] * 0x1.0000000000000p-1;
      v7[20] = v37;
      v39 = cos(v38);
      v40 = sin(v38);
      v41 = cos(v78 * 0x1.0000000000000p-1);
      v42 = sin(v78 * 0x1.0000000000000p-1);
      v43 = cos(v79 * 0x1.0000000000000p-1);
      v44 = sin(v79 * 0x1.0000000000000p-1);
      v45 = v39 * v42 * v43 - PSEUDO_UNFUSED(v44 * (v40 * v41));
      v46 = PSEUDO_UNFUSED(v40 * v42 * v43) + PSEUDO_UNFUSED(v39 * v41) * v44;
      v47 = PSEUDO_UNFUSED(v40 * v42 * v44) + PSEUDO_UNFUSED(v39 * v41) * v43;
      v48 = v40 * v41 * v43 - PSEUDO_UNFUSED(v44 * (v39 * v42));
      if (COERCE_FLOAT(*(_OWORD*)&v7[21]) != v45 ||
          COERCE_FLOAT(HIDWORD(LANES128(v7[21]).n128_u64[0])) != v46 ||
          COERCE_FLOAT(LANES128(v7[21]).n128_u64[1]) != v48 ||
          COERCE_FLOAT(DWORD3(*(_OWORD*)&v7[21])) != v47) {
        v52 = LANES128(v7[18]).n128_u32[2];
        LANES128(v7[21]).n128_f32[0] = v45;
        LANES128(v7[21]).n128_f32[1] = v46;
        LANES128(v7[21]).n128_f32[2] = v48;
        LANES128(v7[21]).n128_f32[3] = v47;
        LANES128(v7[18]).n128_u32[2] = v52 | 1;
      }
    }
    v53 = *(float32x4_t**)(*(_QWORD*)(a1 + 88) + 112LL);
    v80 = vsubq_f32(v53[8], v7[19]);
    v54 = a2 * 0x1.0000000000000p-1;
    v55 = cos(v54);
    v56 = sin(v54);
    LANES128(v57).n128_u64[0] = LANES128(v80).n128_u64[0];
    *(float*)&v58 = v55 + PSEUDO_UNFUSED(v56 * 0x0.0p+0);
    *(float*)&v59 = PSEUDO_UNFUSED(v56 * -0x0.0p+0) + v55 * 0x0.0p+0;
    *(float*)&v60 = v56 + PSEUDO_UNFUSED(v55 * 0x0.0p+0);
    LANES128(v61).n128_u64[0] = __PAIR64__(v60, v59);
    LANES128(v61).n128_u64[1] = __PAIR64__(v58, v59);
    v62 = vmulq_f32(v61, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[1] = LANES128(v64).n128_u64[0];
    *(int8x8_t*)&LANES128(v63).n128_i8[8] =
        vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v65 =
        vmlaq_f32(vmulq_f32(v61, v62), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v57, v63));
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v66).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v66).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v62).n128_u64[0]), 1);
    LANES128(v64).n128_u64[1] = LANES128(v57).n128_u64[0];
    LANES128(v57).n128_u64[1] = LANES128(v80).n128_u64[0];
    v67 = vmlaq_f32(v65, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v57, v66));
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v62).n128_u64[0] = __PAIR64__(v60, v59);
    HIDWORD(v59) = v58;
    v68 = vmlsq_f32(v67, v57, v64);
    LANES128(v69).n128_u64[0] = __PAIR64__(v60, v59);
    LANES128(v70).n128_u64[0] = __PAIR64__(v60, v59);
    LANES128(v69).n128_u64[1] = v59;
    LANES128(v71).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v69).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v74).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v71).n128_u64[1] = LANES128(v71).n128_u64[0];
    LANES128(v70).n128_u64[1] = LANES128(v72).n128_u64[0];
    *(int8x8_t*)&LANES128(v73).n128_i8[8] =
        vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v72).n128_u64[1] = LANES128(v69).n128_u64[0];
    LANES128(v69).n128_u64[1] = LANES128(v62).n128_u64[0];
    *(int32x2_t*)&LANES128(v74).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v68).n128_u64[0]), 1);
    v75 = vmlaq_f32(
        vmlaq_f32(vmulq_f32(v71, v68), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v70, v73)),
        COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v69, v74));
    LANES128(v69).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v69).n128_i8[8] =
        vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v76 = vaddq_f32(v7[19], vmlsq_f32(v75, v69, v72));
    LANES128(v53[8]).n128_u64[0] = LANES128(v76).n128_u64[0];
    v77 = v53[8];
    LANES128(v77).n128_u64[1] = LANES128(v76).n128_u32[2];
    v53[8] = v77;
    game_combat_1068a00(a1, LANES128(v76).n128_f32[0]);
  }
}

__int64 game_combat_1099520(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64* v8;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64** v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64* v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  __int64 v38;
  bool v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  int v45;
  __int64 v46;
  int* v47;
  int v48;
  bool v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  int v52;
  int v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  int v57;
  bool v58;
  __int64 v59;
  unsigned __int64 v60;
  char v61;
  __int64 v62;
  int v63;
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
  int v74;
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
  __int64 v88;
  __int64 v89;
  float32x2_t* v90;
  long double v91;
  long double v92;
  bool v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  float32x2_t* v97;
  __int64 v98;
  float v99;
  float32x4_t* v100;
  float32x4_t v101;
  int8x16_t v102;
  __int64 v103;
  __int64* v104;
  float v105;
  float32x2_t* v107;
  __int64 v108;
  __int64 v109;
  float v110;
  float32x4_t* v111;
  float32x4_t v112;
  int8x16_t v113;
  __int64 v114;
  __int64* v115;
  __int128 v116;
  float32x2_t* v117;
  __int64 v118;
  __int64 v119;
  float v120;
  float32x4_t* v121;
  float32x4_t v122;
  int8x16_t v123;
  int v124;
  float32x2_t* v125;
  long double v126;
  long double v127;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  float32x2_t* v132;
  __int64 v133;
  float v134;
  float32x4_t* v135;
  float32x4_t v136;
  int8x16_t v137;
  __int64 v138;
  __int64* v139;
  float v140;
  float32x2_t* v142;
  __int64 v143;
  __int64 v144;
  float v145;
  float32x4_t* v146;
  float32x4_t v147;
  int8x16_t v148;
  __int64 v149;
  __int64* v150;
  __int128 v151;
  float32x2_t* v152;
  __int64 v153;
  __int64 v154;
  float v155;
  float32x4_t* v156;
  float32x4_t v157;
  int8x16_t v158;
  int v159;
  int v160;
  float32x2_t* v161;
  long double v162;
  long double v163;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  float32x2_t* v168;
  __int64 v169;
  float v170;
  float32x4_t* v171;
  float32x4_t v172;
  int8x16_t v173;
  __int64 v174;
  __int64* v175;
  float v176;
  float32x2_t* v178;
  __int64 v179;
  __int64 v180;
  float v181;
  float32x4_t* v182;
  float32x4_t v183;
  int8x16_t v184;
  __int64 v185;
  __int64* v186;
  __int128 v187;
  float32x2_t* v188;
  __int64 v189;
  __int64 v190;
  float v191;
  float32x4_t* v192;
  float32x4_t v193;
  int8x16_t v194;
  int v195;
  bool v196;
  int v197;
  int v198;
  float32x2_t* v199;
  long double v200;
  long double v201;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  float32x2_t* v206;
  __int64 v207;
  float v208;
  float32x4_t* v209;
  float32x4_t v210;
  int8x16_t v211;
  __int64 v212;
  __int64* v213;
  __int128 v214;
  float32x2_t* v215;
  __int64 v216;
  __int64 v217;
  float v218;
  float32x4_t* v219;
  float32x4_t v220;
  int8x16_t v221;
  __int64 v222;
  __int64* v223;
  __int128 v224;
  float32x2_t* v225;
  __int64 v226;
  __int64 v227;
  float v228;
  float32x4_t* v229;
  float32x4_t v230;
  int8x16_t v231;
  float32x2_t* v232;
  long double v233;
  long double v234;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  float32x2_t* v239;
  __int64 v240;
  float v241;
  float32x4_t* v242;
  float32x4_t v243;
  int8x16_t v244;
  __int64 v245;
  __int64* v246;
  float v247;
  float32x2_t* v249;
  __int64 v250;
  __int64 v251;
  float v252;
  float32x4_t* v253;
  float32x4_t v254;
  int8x16_t v255;
  __int64 v256;
  __int64* v257;
  __int128 v258;
  float32x2_t* v259;
  __int64 v260;
  __int64 v261;
  float v262;
  float32x4_t* v263;
  float32x4_t v264;
  int8x16_t v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  float32x4_t v269;
  float32x4_t v270;
  struct {
    _DWORD v271[20];
    unsigned __int8 v272;
  } v271_;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v2 + 80);
  if (v5 != 0) {
    v6 = *(_QWORD*)(v2 + 88);
    v7 = *(_QWORD*)(v5 + 8) == -1 || v6 == 0;
    if (!v7 && (*(_BYTE*)(v6 + 341) & 2) != 0) {
      return 0;
    }
  }
  v8 = GameData_212d448[0];
  if (GameData_22356f8 != 0 && GameData_2235708 != 0) {
    v10 = *(_DWORD*)(a2 + 68);
    v11 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v12 = v10;
      if (GameData_22356f8 <= (unsigned __int64)v10) {
        v12 = v10 % (unsigned __int64)GameData_22356f8;
      }
    }
    else {
      v12 = v11 & v10;
    }
    v13 = *(__int64***)(GameData_22356f0 + 8 * v12);
    if (v13 != nullptr) {
      v14 = *v13;
      if (v14 != nullptr) {
        if ((GameData_22356f8 & v11) == 0) {
          while (1) {
            v16 = v14[1];
            if (v16 == v10) {
              if (*((_DWORD*)v14 + 4) == v10) {
                goto LABEL_141;
              }
            }
            else if ((v16 & v11) != v12) {
              goto LABEL_30;
            }
            v14 = (__int64*)*v14;
            if (v14 == nullptr) {
              goto LABEL_30;
            }
          }
        }
        do {
          v15 = v14[1];
          if (v15 == v10) {
            if (*((_DWORD*)v14 + 4) == v10) {
              goto LABEL_141;
            }
          }
          else {
            if (v15 >= GameData_22356f8) {
              v15 %= (unsigned __int64)GameData_22356f8;
            }
            if (v15 != v12) {
              break;
            }
          }
          v14 = (__int64*)*v14;
        } while (v14 != nullptr);
      }
    }
  }
LABEL_30:
  v17 = *(_DWORD*)a2;
  if ((*(_DWORD*)a2 & 2) != 0) {
    if ((v17 & 0x40) != 0) {
      if (*GameData_212d448[0] != 0 &&
          (*(_BYTE*)(*(_QWORD*)(*GameData_212d448[0] + 8) + 116LL) & 0x80) !=
              0) {
        v10 = 1715476756;
        v24 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      else if ((v17 & 4) != 0 ||
               (signed __int32)*(_DWORD*)((v43 = a2 + 12LL * *(int*)(a2 + 12)) +
                                          104) >= *(int*)(v43 + 96) >>
                   1) {
        v10 = 1400556095;
        v24 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      else {
        v10 = -77626398;
        v24 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      goto LABEL_142;
    }
    if ((v17 & 0x80) != 0) {
      v45 = *(_DWORD*)(a2 + 8);
      if ((v45 & 0xFFFFFFFE) == 2 &&
              (*(_DWORD*)((v46 = a2 + 12LL * (v45 & 1)) + 104) & 0x80000000) !=
                  0 &&
              *(int*)(v46 + 96) > 0 ||
          (v47 = (int*)(a2 + 96 + 12LL * v45))[2] < 0 && *v47 > 0 ||
          *(_QWORD*)(a2 + 96 + 12LL * (((v45 - 1) & 0xFFFFFFFD) != 0)) == 0) {
        v10 = 0;
        v24 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      else {
        v10 = -1791073559;
        v24 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      goto LABEL_142;
    }
    v10 = -1193575789;
    if ((v17 & 0x100) == 0) {
      if ((v17 & 8) != 0) {
        v10 = -1193575777;
        v24 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
        goto LABEL_142;
      }
      if ((v17 & 4) != 0) {
        v10 = -1193575788;
        v24 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
        goto LABEL_142;
      }
      v25 = a2 + 12LL * *(int*)(a2 + 12);
      if ((signed __int32)*(_DWORD*)(v25 + 104) >= *(int*)(v25 + 96) >> 1) {
        v10 = -1193575788;
      }
      else {
        v26 = *(_QWORD*)(a2 + 56);
        if (v26 == 0 || (*(_BYTE*)(v26 + 7) & 0x40) == 0) {
          v27 = GameRoutine_108f9b0(a2);
          if (v27 != 0 && (v28 = v27, GameRoutine_10681e0(v27) != 0) ||
              (v29 = GameRoutine_108fc30(a2), v30 = 0x0.0p+0f, v29 != 0) &&
                  (v28 = v29, GameRoutine_10681e0(v29) != 0)) {
            v31 = *(unsigned int*)(v28 + 96);
            v30 = 0x0.0p+0f;
            if ((unsigned int)v31 <= 3) {
              v30 = *((float*)&GameData_1a83520 + v31);
            }
          }
          if (*(_DWORD*)(a2 + 64) != 0) {
            v32 = *((unsigned __int8*)GameRoutine_108fa60(a2) + 80);
            if (v32 == 2) {
              if (v30 >= 0x0.0p+0f) {
                v10 = -1193575773;
              }
              else {
                v10 = -1193575789;
              }
              v24 = *v8;
              if (*v8 == 0) {
                goto LABEL_144;
              }
              goto LABEL_142;
            }
            if (v32 == 3) {
              if (v30 <= 0x0.0p+0f) {
                v10 = -1193575779;
              }
              else {
                v10 = -1193575789;
              }
              v24 = *v8;
              if (*v8 == 0) {
                goto LABEL_144;
              }
              goto LABEL_142;
            }
          }
        }
      }
    }
    goto LABEL_141;
  }
  v18 = *((unsigned __int8*)GameRoutine_108fa60(a2) + 80);
  if ((GameRoutine_108fce0(a2) & 1) == 0) {
    v10 = 232551549;
    if ((*(_BYTE*)(a2 + 1) & 1) != 0) {
      goto LABEL_141;
    }
    if (*v8 != 0) {
      v33 = *(_DWORD*)(a2 + 12);
      if (v33 <= 3) {
        v34 = *v8 + 24LL * v33;
        v35 = *(_QWORD*)(v34 + 32);
        if (v35 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                    memory_order_relaxed);
          v36 = *(_QWORD*)(v34 + 40);
          v37 = *(_QWORD*)(v35 + 8) == -1 || v36 == 0;
          if (v37 || (v38 = *(_QWORD*)(v36 + 80)) == 0 ||
              (*(_QWORD*)(v38 + 8) != -1 ? (v39 = *(_QWORD*)(v36 + 88) == 0)
                                         : (v39 = true),
               v39 || *(_QWORD*)(v35 + 8) == -1)) {
            std___1___shared_weak_count___release_weak_alt1(v35);
          }
          else {
            std___1___shared_weak_count___release_weak_alt1(v35);
            if (GameRoutine_10681e0(v36) != 0) {
              v40 = *(_DWORD*)(v36 + 96);
              if (v40 <= 3) {
                v41 = 9u >> v40;
                v42 = 6u >> v40;
                goto LABEL_102;
              }
            }
          }
        }
      }
    }
    v41 = 0;
    LOBYTE(v42) = 0;
  LABEL_102:
    switch (v18) {
    case 1:
      v55 = 2;
      if ((v41 & 1) == 0) {
        v55 = 3;
      }
      v56 = (int)game_109d0f0_alt1() % (v55 - (unsigned __int64)(v42 & 1));
      if (v56 == 0) {
        goto LABEL_141;
      }
      if (((v56 == 1) & ~v41) == 0) {
        if ((v41 & 1) != 0) {
          v57 = 1;
        }
        else {
          v57 = 2;
        }
        v58 = v57 == (_DWORD)v56;
      LABEL_128:
        v61 = !v58;
        if ((((unsigned __int8)v42 | (unsigned __int8)v61) & 1) != 0) {
          v10 = 0;
        }
        else {
          v10 = 232551565;
        }
        v24 = *v8;
        if (*v8 == 0) {
          goto LABEL_144;
        }
        goto LABEL_142;
      }
      break;
    case 2:
      v53 = game_109d0f0_alt1();
      v49 = (v41 & 1) == 0;
      v50 = 3;
      v51 = v53;
      v52 = 232551559;
    LABEL_107:
      if (!v49) {
        v50 = 1;
      }
      v54 = v51 % v50;
      if (!v49) {
        v52 = 0;
      }
      if (v54 != 0) {
        v10 = v52;
      }
      else {
        v10 = 232551549;
      }
      v24 = *v8;
      if (*v8 == 0) {
        goto LABEL_144;
      }
      goto LABEL_142;
    case 3:
      v48 = game_109d0f0_alt1();
      v49 = (v42 & 1) == 0;
      v50 = 3;
      v51 = v48;
      v52 = 232551565;
      goto LABEL_107;
    default:
      v59 = 1;
      if ((v41 & 1) == 0) {
        v59 = 2;
      }
      v60 = (int)game_109d0f0_alt1() % (v59 - (unsigned __int64)(v42 & 1));
      if ((v41 & 1 | (v60 != 0)) != 0) {
        v58 = v60 == ((v41 & 1) == 0);
        goto LABEL_128;
      }
      break;
    }
    v10 = 232551559;
    v24 = *v8;
    if (*v8 == 0) {
      goto LABEL_144;
    }
    goto LABEL_142;
  }
  v10 = -1911544124;
  if (v18 == 3) {
    v10 = -1911544118;
    v24 = *v8;
    if (*v8 == 0) {
      goto LABEL_144;
    }
    goto LABEL_142;
  }
  if (v18 != 2) {
    v271_.v271[0] = -1911544124;
    v271_.v271[1] = -1911544118;
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v19 = game_map_MapRandom_instance__ptr[0];
    v20 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v22 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v19 + 1) = v20;
    v23 = (v22 >> 8) ^ (v21 >> 19) ^ v22 ^ v21;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19) = v21;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19 + 4) = v23;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v10 = v271_.v271[v23 & 1];
    v24 = *v8;
    if (*v8 == 0) {
      goto LABEL_144;
    }
    goto LABEL_142;
  }
LABEL_141:
  v24 = *v8;
  if (*v8 == 0) {
    goto LABEL_144;
  }
LABEL_142:
  v62 = *(_QWORD*)(v24 + 8);
  if (v62 != 0 && (*(_BYTE*)(v62 + 113) & 0x80) != 0) {
    v63 = -1193575789;
    if (v10 > -270062628) {
      if (v10 <= -77626399) {
        if (v10 == -270062627) {
          goto LABEL_272;
        }
        v74 = -93581017;
      }
      else {
        if (v10 == -77626398 || v10 == 1400556095) {
          goto LABEL_272;
        }
        v74 = 1715476756;
      }
    }
    else {
      if ((unsigned int)(v10 + 1193575789) <= 0x10 &&
          ((1 << ((v10 + 109) & 31)) & 0x10403) != 0) {
        goto LABEL_272;
      }
      v74 = -972548316;
    }
    if (v10 != v74) {
      v63 = v10;
    }
    goto LABEL_272;
  }
LABEL_144:
  if (v10 <= 232551548) {
    if (v10 == -1193575779) {
      v85 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v86 = *(_QWORD*)(v85 + 392);
      v87 = *(_QWORD*)(v85 + 400);
      if (v87 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v87 + 8), 1u,
                                  memory_order_relaxed);
        v88 = *(_QWORD*)(v86 + 11608);
        if (atomic_fetch_add((atomic_ullong* volatile)(v87 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v89 = v88;
          (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87);
          std___1___shared_weak_count___release_weak_alt1(v87);
          v88 = v89;
        }
      }
      else {
        v88 = *(_QWORD*)(v86 + 11608);
      }
      v124 = -1193575789;
      v63 = -1193575779;
      v161 = (float32x2_t*)CharacterModel_1070c00_alt1(v88, 3101391517LL);
      v162 = *(long double*)LANES64(v161[8]).n64_u64;
      v93 = fabsf(*(float*)&v162) < 0x1.0000000000000p-23f;
      *(_QWORD*)&v162 = 0x3400000034000000LL;
      *(float*)&v163 = fabsf(COERCE_FLOAT(LANES64(v161[9]).n64_u64[0]));
      if (v93 && *(float*)&v163 < 0x1.0000000000000p-23f) {
        goto LABEL_272;
      }
      v165 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v167 = *(_QWORD*)(v165 + 392);
      v166 = *(_QWORD*)(v165 + 400);
      if (v166 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v166 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v168 = v161;
          (*(void (**)(__int64, long double, long double))(
              *(_QWORD*)v166 + 16LL))(v166, v162, v163);
          std___1___shared_weak_count___release_weak_alt1(v166);
          v161 = v168;
        }
      }
      v169 = *(_QWORD*)(a1 + 8);
      v170 = *(float*)(*(_QWORD*)(v167 + 11792) + 44LL) * *(float*)(v167 + 32);
      v171 = *(float32x4_t**)(*(_QWORD*)(v169 + 88) + 8LL);
      v172 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v171[27],
                          COERCE_FLOAT(*(_OWORD*)LANES64(v161[8]).n64_u64)),
              v171[28], v161[8], 1),
          v171[29], *(float32x4_t*)LANES64(v161[8]).n64_u64, 2);
      v173 = vaddq_f32(v172, v171[30]);
      LANES128(v172).n128_u32[0] = *(_DWORD*)(v169 + 40);
      LANES128(v172).n128_u32[2] = *(_DWORD*)(v169 + 44);
      v270 = v172;
      LANES128(v172).n128_u32[0] =
          LANES128_OF(vextq_s8(v173, v173, 8u)).n128_u32[0];
      LANES128(v173).n128_u32[1] = 0;
      LANES128(v173).n128_u64[1] = LANES128(v172).n128_u32[0];
      v269 = v173;
      collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                            v170);
      if ((v271_.v272 & 1) == 0) {
        goto LABEL_227;
      }
      v174 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
      v175 = CharacterModel_1070c00_alt1(v174, 3101391507LL);
      v176 = fabsf(COERCE_FLOAT(v175[9]));
      if (fabsf(COERCE_FLOAT(*((_OWORD*)v175 + 4))) >= 0x1.0000000000000p-23f ||
          v176 >= 0x1.0000000000000p-23f) {
        v178 = (float32x2_t*)v175;
        v179 = GameRoutine_10966f0(a1);
        v180 = *(_QWORD*)(a1 + 8);
        v181 =
            *(float*)(*(_QWORD*)(v179 + 11792) + 44LL) * *(float*)(v179 + 32);
        v182 = *(float32x4_t**)(*(_QWORD*)(v180 + 88) + 8LL);
        v183 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v182[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v178[8]).n64_u64)),
                v182[28], v178[8], 1),
            v182[29], *(float32x4_t*)LANES64(v178[8]).n64_u64, 2);
        v184 = vaddq_f32(v183, v182[30]);
        LANES128(v183).n128_u32[0] = *(_DWORD*)(v180 + 40);
        LANES128(v183).n128_u32[2] = *(_DWORD*)(v180 + 44);
        v270 = v183;
        LANES128(v183).n128_u32[0] =
            LANES128_OF(vextq_s8(v184, v184, 8u)).n128_u32[0];
        LANES128(v184).n128_u32[1] = 0;
        LANES128(v184).n128_u64[1] = LANES128(v183).n128_u32[0];
        v269 = v184;
        collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                              v181);
        v63 = -1193575789;
        if (v271_.v272 != 1) {
          goto LABEL_272;
        }
        v185 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
        v63 = -1193575773;
        v186 = CharacterModel_1070c00_alt1(v185, 3101391523LL);
        v187 = *((_OWORD*)v186 + 4);
        v188 = (float32x2_t*)v186;
        if (fabsf(*(float*)&v187) < 0x1.0000000000000p-23f &&
            fabsf(*((float*)&v187 + 2)) < 0x1.0000000000000p-23f) {
          goto LABEL_272;
        }
        v189 = GameRoutine_10966f0(a1);
        v190 = *(_QWORD*)(a1 + 8);
        v191 =
            *(float*)(*(_QWORD*)(v189 + 11792) + 44LL) * *(float*)(v189 + 32);
        v192 = *(float32x4_t**)(*(_QWORD*)(v190 + 88) + 8LL);
        v193 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v192[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v188[8]).n64_u64)),
                v192[28], v188[8], 1),
            v192[29], *(float32x4_t*)LANES64(v188[8]).n64_u64, 2);
        v194 = vaddq_f32(v193, v192[30]);
        LANES128(v193).n128_u32[0] = *(_DWORD*)(v190 + 40);
        LANES128(v193).n128_u32[2] = *(_DWORD*)(v190 + 44);
        v270 = v193;
        LANES128(v193).n128_u32[0] =
            LANES128_OF(vextq_s8(v194, v194, 8u)).n128_u32[0];
        LANES128(v194).n128_u32[1] = 0;
        LANES128(v194).n128_u64[1] = LANES128(v193).n128_u32[0];
        v269 = v194;
        collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                              v191);
        v195 = 10;
        v196 = v271_.v272 == 0;
        v197 = 16;
        goto LABEL_263;
      }
    }
    else {
      v63 = v10;
      if (v10 != -1193575773) {
        goto LABEL_272;
      }
      v69 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v70 = *(_QWORD*)(v69 + 392);
      v71 = *(_QWORD*)(v69 + 400);
      if (v71 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 8), 1u,
                                  memory_order_relaxed);
        v72 = *(_QWORD*)(v70 + 11608);
        if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v73 = v72;
          (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
          std___1___shared_weak_count___release_weak_alt1(v71);
          v72 = v73;
        }
      }
      else {
        v72 = *(_QWORD*)(v70 + 11608);
      }
      v198 = -1193575789;
      v63 = -1193575773;
      v232 = (float32x2_t*)CharacterModel_1070c00_alt1(v72, 3101391523LL);
      v233 = *(long double*)LANES64(v232[8]).n64_u64;
      v93 = fabsf(*(float*)&v233) < 0x1.0000000000000p-23f;
      *(_QWORD*)&v233 = 0x3400000034000000LL;
      *(float*)&v234 = fabsf(COERCE_FLOAT(LANES64(v232[9]).n64_u64[0]));
      if (v93 && *(float*)&v234 < 0x1.0000000000000p-23f) {
        goto LABEL_272;
      }
      v236 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v238 = *(_QWORD*)(v236 + 392);
      v237 = *(_QWORD*)(v236 + 400);
      if (v237 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v237 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v237 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v239 = v232;
          (*(void (**)(__int64, long double, long double))(
              *(_QWORD*)v237 + 16LL))(v237, v233, v234);
          std___1___shared_weak_count___release_weak_alt1(v237);
          v232 = v239;
        }
      }
      v240 = *(_QWORD*)(a1 + 8);
      v241 = *(float*)(*(_QWORD*)(v238 + 11792) + 44LL) * *(float*)(v238 + 32);
      v242 = *(float32x4_t**)(*(_QWORD*)(v240 + 88) + 8LL);
      v243 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v242[27],
                          COERCE_FLOAT(*(_OWORD*)LANES64(v232[8]).n64_u64)),
              v242[28], v232[8], 1),
          v242[29], *(float32x4_t*)LANES64(v232[8]).n64_u64, 2);
      v244 = vaddq_f32(v243, v242[30]);
      LANES128(v243).n128_u32[0] = *(_DWORD*)(v240 + 40);
      LANES128(v243).n128_u32[2] = *(_DWORD*)(v240 + 44);
      v270 = v243;
      LANES128(v243).n128_u32[0] =
          LANES128_OF(vextq_s8(v244, v244, 8u)).n128_u32[0];
      LANES128(v244).n128_u32[1] = 0;
      LANES128(v244).n128_u64[1] = LANES128(v243).n128_u32[0];
      v269 = v244;
      collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                            v241);
      if ((v271_.v272 & 1) == 0) {
        goto LABEL_266;
      }
      v245 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
      v246 = CharacterModel_1070c00_alt1(v245, 3101391507LL);
      v247 = fabsf(COERCE_FLOAT(v246[9]));
      if (fabsf(COERCE_FLOAT(*((_OWORD*)v246 + 4))) >= 0x1.0000000000000p-23f ||
          v247 >= 0x1.0000000000000p-23f) {
        v249 = (float32x2_t*)v246;
        v250 = GameRoutine_10966f0(a1);
        v251 = *(_QWORD*)(a1 + 8);
        v252 =
            *(float*)(*(_QWORD*)(v250 + 11792) + 44LL) * *(float*)(v250 + 32);
        v253 = *(float32x4_t**)(*(_QWORD*)(v251 + 88) + 8LL);
        v254 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v253[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v249[8]).n64_u64)),
                v253[28], v249[8], 1),
            v253[29], *(float32x4_t*)LANES64(v249[8]).n64_u64, 2);
        v255 = vaddq_f32(v254, v253[30]);
        LANES128(v254).n128_u32[0] = *(_DWORD*)(v251 + 40);
        LANES128(v254).n128_u32[2] = *(_DWORD*)(v251 + 44);
        v270 = v254;
        LANES128(v254).n128_u32[0] =
            LANES128_OF(vextq_s8(v255, v255, 8u)).n128_u32[0];
        LANES128(v255).n128_u32[1] = 0;
        LANES128(v255).n128_u64[1] = LANES128(v254).n128_u32[0];
        v269 = v255;
        collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                              v252);
        v63 = -1193575789;
        if (v271_.v272 != 1) {
          goto LABEL_272;
        }
        v256 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
        v63 = -1193575779;
        v257 = CharacterModel_1070c00_alt1(v256, 3101391517LL);
        v258 = *((_OWORD*)v257 + 4);
        v259 = (float32x2_t*)v257;
        if (fabsf(*(float*)&v258) < 0x1.0000000000000p-23f &&
            fabsf(*((float*)&v258 + 2)) < 0x1.0000000000000p-23f) {
          goto LABEL_272;
        }
        v260 = GameRoutine_10966f0(a1);
        v261 = *(_QWORD*)(a1 + 8);
        v262 =
            *(float*)(*(_QWORD*)(v260 + 11792) + 44LL) * *(float*)(v260 + 32);
        v263 = *(float32x4_t**)(*(_QWORD*)(v261 + 88) + 8LL);
        v264 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v263[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v259[8]).n64_u64)),
                v263[28], v259[8], 1),
            v263[29], *(float32x4_t*)LANES64(v259[8]).n64_u64, 2);
        v265 = vaddq_f32(v264, v263[30]);
        LANES128(v264).n128_u32[0] = *(_DWORD*)(v261 + 40);
        LANES128(v264).n128_u32[2] = *(_DWORD*)(v261 + 44);
        v270 = v264;
        LANES128(v264).n128_u32[0] =
            LANES128_OF(vextq_s8(v265, v265, 8u)).n128_u32[0];
        LANES128(v265).n128_u32[1] = 0;
        LANES128(v265).n128_u64[1] = LANES128(v264).n128_u32[0];
        v269 = v265;
        collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                              v262);
        v195 = 16;
        v196 = v271_.v272 == 0;
        v197 = 10;
      LABEL_263:
        if (!v196) {
          v197 = v195;
        }
        v63 = v197 - 1193575789;
        goto LABEL_272;
      }
    }
    v63 = -1193575789;
    goto LABEL_272;
  }
  if (v10 == 232551549) {
    v75 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
    v76 = *(_QWORD*)(v75 + 392);
    v77 = *(_QWORD*)(v75 + 400);
    if (v77 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 8), 1u,
                                memory_order_relaxed);
      v78 = *(_QWORD*)(v76 + 11608);
      if (atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v79 = v78;
        (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
        std___1___shared_weak_count___release_weak_alt1(v77);
        v78 = v79;
      }
    }
    else {
      v78 = *(_QWORD*)(v76 + 11608);
    }
    v90 = (float32x2_t*)CharacterModel_1070c00_alt1(v78, 232551549);
    v91 = *(long double*)LANES64(v90[8]).n64_u64;
    v93 = fabsf(*(float*)&v91) < 0x1.0000000000000p-23f;
    *(_QWORD*)&v91 = 0x3400000034000000LL;
    *(float*)&v92 = fabsf(COERCE_FLOAT(LANES64(v90[9]).n64_u64[0]));
    v93 = v93 && *(float*)&v92 < 0x1.0000000000000p-23f;
    if (v93) {
      v63 = 232551549;
    }
    else {
      v94 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v96 = *(_QWORD*)(v94 + 392);
      v95 = *(_QWORD*)(v94 + 400);
      if (v95 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v95 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v95 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v97 = v90;
          (*(void (**)(__int64, long double, long double))(
              *(_QWORD*)v95 + 16LL))(v95, v91, v92);
          std___1___shared_weak_count___release_weak_alt1(v95);
          v90 = v97;
        }
      }
      v98 = *(_QWORD*)(a1 + 8);
      v99 = *(float*)(*(_QWORD*)(v96 + 11792) + 44LL) * *(float*)(v96 + 32);
      v100 = *(float32x4_t**)(*(_QWORD*)(v98 + 88) + 8LL);
      v101 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v100[27],
                          COERCE_FLOAT(*(_OWORD*)LANES64(v90[8]).n64_u64)),
              v100[28], v90[8], 1),
          v100[29], *(float32x4_t*)LANES64(v90[8]).n64_u64, 2);
      v102 = vaddq_f32(v101, v100[30]);
      LANES128(v101).n128_u32[0] = *(_DWORD*)(v98 + 40);
      LANES128(v101).n128_u32[2] = *(_DWORD*)(v98 + 44);
      v270 = v101;
      LANES128(v101).n128_u32[0] =
          LANES128_OF(vextq_s8(v102, v102, 8u)).n128_u32[0];
      LANES128(v102).n128_u32[1] = 0;
      LANES128(v102).n128_u64[1] = LANES128(v101).n128_u32[0];
      v269 = v102;
      collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8, v99);
      v63 = 232551549;
      if ((v271_.v272 & 1) != 0) {
        v103 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
        v63 = 232551559;
        v104 = CharacterModel_1070c00_alt1(v103, 232551559);
        v105 = fabsf(COERCE_FLOAT(v104[9]));
        if (fabsf(COERCE_FLOAT(*((_OWORD*)v104 + 4))) >=
                0x1.0000000000000p-23f ||
            v105 >= 0x1.0000000000000p-23f) {
          v107 = (float32x2_t*)v104;
          v108 = GameRoutine_10966f0(a1);
          v109 = *(_QWORD*)(a1 + 8);
          v110 =
              *(float*)(*(_QWORD*)(v108 + 11792) + 44LL) * *(float*)(v108 + 32);
          v111 = *(float32x4_t**)(*(_QWORD*)(v109 + 88) + 8LL);
          v112 = vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v111[27],
                              COERCE_FLOAT(*(_OWORD*)LANES64(v107[8]).n64_u64)),
                  v111[28], v107[8], 1),
              v111[29], *(float32x4_t*)LANES64(v107[8]).n64_u64, 2);
          v113 = vaddq_f32(v112, v111[30]);
          LANES128(v112).n128_u32[0] = *(_DWORD*)(v109 + 40);
          LANES128(v112).n128_u32[2] = *(_DWORD*)(v109 + 44);
          v270 = v112;
          LANES128(v112).n128_u32[0] =
              LANES128_OF(vextq_s8(v113, v113, 8u)).n128_u32[0];
          LANES128(v113).n128_u32[1] = 0;
          LANES128(v113).n128_u64[1] = LANES128(v112).n128_u32[0];
          v269 = v113;
          collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                                v110);
          if (v271_.v272 == 1) {
            v114 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
            v63 = 232551565;
            v115 = CharacterModel_1070c00_alt1(v114, 232551565);
            v116 = *((_OWORD*)v115 + 4);
            v117 = (float32x2_t*)v115;
            if (fabsf(*(float*)&v116) >= 0x1.0000000000000p-23f ||
                fabsf(*((float*)&v116 + 2)) >= 0x1.0000000000000p-23f) {
              v118 = GameRoutine_10966f0(a1);
              v119 = *(_QWORD*)(a1 + 8);
              v120 = *(float*)(*(_QWORD*)(v118 + 11792) + 44LL) *
                     *(float*)(v118 + 32);
              v121 = *(float32x4_t**)(*(_QWORD*)(v119 + 88) + 8LL);
              v122 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(
                          v121[27],
                          COERCE_FLOAT(*(_OWORD*)LANES64(v117[8]).n64_u64)),
                      v121[28], v117[8], 1),
                  v121[29], *(float32x4_t*)LANES64(v117[8]).n64_u64, 2);
              v123 = vaddq_f32(v122, v121[30]);
              LANES128(v122).n128_u32[0] = *(_DWORD*)(v119 + 40);
              LANES128(v122).n128_u32[2] = *(_DWORD*)(v119 + 44);
              v270 = v122;
              LANES128(v122).n128_u32[0] =
                  LANES128_OF(vextq_s8(v123, v123, 8u)).n128_u32[0];
              LANES128(v123).n128_u32[1] = 0;
              LANES128(v123).n128_u64[1] = LANES128(v122).n128_u32[0];
              v269 = v123;
              collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269,
                                    8, v120);
              if (v271_.v272 != 0) {
                v63 = 232551549;
              }
              else {
                v63 = 232551565;
              }
            }
          }
        }
      }
    }
    goto LABEL_272;
  }
  if (v10 != 232551559) {
    v63 = v10;
    if (v10 != 232551565) {
      goto LABEL_272;
    }
    v64 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
    v65 = *(_QWORD*)(v64 + 392);
    v66 = *(_QWORD*)(v64 + 400);
    if (v66 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v66 + 8), 1u,
                                memory_order_relaxed);
      v67 = *(_QWORD*)(v65 + 11608);
      if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v68 = v67;
        (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
        std___1___shared_weak_count___release_weak_alt1(v66);
        v67 = v68;
      }
    }
    else {
      v67 = *(_QWORD*)(v65 + 11608);
    }
    v198 = 232551549;
    v63 = 232551565;
    v199 = (float32x2_t*)CharacterModel_1070c00_alt1(v67, 232551565);
    v200 = *(long double*)LANES64(v199[8]).n64_u64;
    v93 = fabsf(*(float*)&v200) < 0x1.0000000000000p-23f;
    *(_QWORD*)&v200 = 0x3400000034000000LL;
    *(float*)&v201 = fabsf(COERCE_FLOAT(LANES64(v199[9]).n64_u64[0]));
    if (v93 && *(float*)&v201 < 0x1.0000000000000p-23f) {
      goto LABEL_272;
    }
    v203 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
    v205 = *(_QWORD*)(v203 + 392);
    v204 = *(_QWORD*)(v203 + 400);
    if (v204 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v204 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v204 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v206 = v199;
        (*(void (**)(__int64, long double, long double))(
            *(_QWORD*)v204 + 16LL))(v204, v200, v201);
        std___1___shared_weak_count___release_weak_alt1(v204);
        v199 = v206;
      }
    }
    v207 = *(_QWORD*)(a1 + 8);
    v208 = *(float*)(*(_QWORD*)(v205 + 11792) + 44LL) * *(float*)(v205 + 32);
    v209 = *(float32x4_t**)(*(_QWORD*)(v207 + 88) + 8LL);
    v210 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v209[27],
                        COERCE_FLOAT(*(_OWORD*)LANES64(v199[8]).n64_u64)),
            v209[28], v199[8], 1),
        v209[29], *(float32x4_t*)LANES64(v199[8]).n64_u64, 2);
    v211 = vaddq_f32(v210, v209[30]);
    LANES128(v210).n128_u32[0] = *(_DWORD*)(v207 + 40);
    LANES128(v210).n128_u32[2] = *(_DWORD*)(v207 + 44);
    v270 = v210;
    LANES128(v210).n128_u32[0] =
        LANES128_OF(vextq_s8(v211, v211, 8u)).n128_u32[0];
    LANES128(v211).n128_u32[1] = 0;
    LANES128(v211).n128_u64[1] = LANES128(v210).n128_u32[0];
    v269 = v211;
    collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8, v208);
    if ((v271_.v272 & 1) != 0) {
      v212 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
      v63 = 232551559;
      v213 = CharacterModel_1070c00_alt1(v212, 232551559);
      v214 = *((_OWORD*)v213 + 4);
      v215 = (float32x2_t*)v213;
      if (fabsf(*(float*)&v214) >= 0x1.0000000000000p-23f ||
          fabsf(*((float*)&v214 + 2)) >= 0x1.0000000000000p-23f) {
        v216 = GameRoutine_10966f0(a1);
        v217 = *(_QWORD*)(a1 + 8);
        v218 =
            *(float*)(*(_QWORD*)(v216 + 11792) + 44LL) * *(float*)(v216 + 32);
        v219 = *(float32x4_t**)(*(_QWORD*)(v217 + 88) + 8LL);
        v220 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v219[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v215[8]).n64_u64)),
                v219[28], v215[8], 1),
            v219[29], *(float32x4_t*)LANES64(v215[8]).n64_u64, 2);
        v221 = vaddq_f32(v220, v219[30]);
        LANES128(v220).n128_u32[0] = *(_DWORD*)(v217 + 40);
        LANES128(v220).n128_u32[2] = *(_DWORD*)(v217 + 44);
        v270 = v220;
        LANES128(v220).n128_u32[0] =
            LANES128_OF(vextq_s8(v221, v221, 8u)).n128_u32[0];
        LANES128(v221).n128_u32[1] = 0;
        LANES128(v221).n128_u64[1] = LANES128(v220).n128_u32[0];
        v269 = v221;
        collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                              v218);
        if (v271_.v272 == 1) {
          v222 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
          v223 = CharacterModel_1070c00_alt1(v222, 232551549);
          v224 = *((_OWORD*)v223 + 4);
          v225 = (float32x2_t*)v223;
          if (fabsf(*(float*)&v224) >= 0x1.0000000000000p-23f ||
              (v63 = 232551549,
               fabsf(*((float*)&v224 + 2)) >= 0x1.0000000000000p-23f)) {
            v226 = GameRoutine_10966f0(a1);
            v227 = *(_QWORD*)(a1 + 8);
            v228 = *(float*)(*(_QWORD*)(v226 + 11792) + 44LL) *
                   *(float*)(v226 + 32);
            v229 = *(float32x4_t**)(*(_QWORD*)(v227 + 88) + 8LL);
            v230 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(
                        v229[27],
                        COERCE_FLOAT(*(_OWORD*)LANES64(v225[8]).n64_u64)),
                    v229[28], v225[8], 1),
                v229[29], *(float32x4_t*)LANES64(v225[8]).n64_u64, 2);
            v231 = vaddq_f32(v230, v229[30]);
            LANES128(v230).n128_u32[0] = *(_DWORD*)(v227 + 40);
            LANES128(v230).n128_u32[2] = *(_DWORD*)(v227 + 44);
            v270 = v230;
            LANES128(v230).n128_u32[0] =
                LANES128_OF(vextq_s8(v231, v231, 8u)).n128_u32[0];
            LANES128(v231).n128_u32[1] = 0;
            LANES128(v231).n128_u64[1] = LANES128(v230).n128_u32[0];
            v269 = v231;
            collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                                  v228);
            v159 = v271_.v272;
            v160 = 232551565;
          LABEL_243:
            if (v159 != 0) {
              v63 = v160;
            }
            else {
              v63 = 232551549;
            }
            goto LABEL_272;
          }
        }
      }
      goto LABEL_272;
    }
  LABEL_266:
    v63 = v198 + 16;
    goto LABEL_272;
  }
  v80 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  v81 = *(_QWORD*)(v80 + 392);
  v82 = *(_QWORD*)(v80 + 400);
  if (v82 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v82 + 8), 1u,
                              memory_order_relaxed);
    v83 = *(_QWORD*)(v81 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v84 = v83;
      (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82);
      std___1___shared_weak_count___release_weak_alt1(v82);
      v83 = v84;
    }
  }
  else {
    v83 = *(_QWORD*)(v81 + 11608);
  }
  v124 = 232551549;
  v63 = 232551559;
  v125 = (float32x2_t*)CharacterModel_1070c00_alt1(v83, 232551559);
  v126 = *(long double*)LANES64(v125[8]).n64_u64;
  v93 = fabsf(*(float*)&v126) < 0x1.0000000000000p-23f;
  *(_QWORD*)&v126 = 0x3400000034000000LL;
  *(float*)&v127 = fabsf(COERCE_FLOAT(LANES64(v125[9]).n64_u64[0]));
  if (v93 && *(float*)&v127 < 0x1.0000000000000p-23f) {
    goto LABEL_272;
  }
  v129 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  v131 = *(_QWORD*)(v129 + 392);
  v130 = *(_QWORD*)(v129 + 400);
  if (v130 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v130 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v130 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v132 = v125;
      (*(void (**)(__int64, long double, long double))(*(_QWORD*)v130 + 16LL))(
          v130, v126, v127);
      std___1___shared_weak_count___release_weak_alt1(v130);
      v125 = v132;
    }
  }
  v133 = *(_QWORD*)(a1 + 8);
  v134 = *(float*)(*(_QWORD*)(v131 + 11792) + 44LL) * *(float*)(v131 + 32);
  v135 = *(float32x4_t**)(*(_QWORD*)(v133 + 88) + 8LL);
  v136 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v135[27],
                      COERCE_FLOAT(*(_OWORD*)LANES64(v125[8]).n64_u64)),
          v135[28], v125[8], 1),
      v135[29], *(float32x4_t*)LANES64(v125[8]).n64_u64, 2);
  v137 = vaddq_f32(v136, v135[30]);
  LANES128(v136).n128_u32[0] = *(_DWORD*)(v133 + 40);
  LANES128(v136).n128_u32[2] = *(_DWORD*)(v133 + 44);
  v270 = v136;
  LANES128(v136).n128_u32[0] =
      LANES128_OF(vextq_s8(v137, v137, 8u)).n128_u32[0];
  LANES128(v137).n128_u32[1] = 0;
  LANES128(v137).n128_u64[1] = LANES128(v136).n128_u32[0];
  v269 = v137;
  collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8, v134);
  if ((v271_.v272 & 1) == 0) {
  LABEL_227:
    v63 = v124 + 10;
    goto LABEL_272;
  }
  v138 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
  v63 = 232551565;
  v139 = CharacterModel_1070c00_alt1(v138, 232551565);
  v140 = fabsf(COERCE_FLOAT(v139[9]));
  if (fabsf(COERCE_FLOAT(*((_OWORD*)v139 + 4))) >= 0x1.0000000000000p-23f ||
      v140 >= 0x1.0000000000000p-23f) {
    v142 = (float32x2_t*)v139;
    v143 = GameRoutine_10966f0(a1);
    v144 = *(_QWORD*)(a1 + 8);
    v145 = *(float*)(*(_QWORD*)(v143 + 11792) + 44LL) * *(float*)(v143 + 32);
    v146 = *(float32x4_t**)(*(_QWORD*)(v144 + 88) + 8LL);
    v147 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v146[27],
                        COERCE_FLOAT(*(_OWORD*)LANES64(v142[8]).n64_u64)),
            v146[28], v142[8], 1),
        v146[29], *(float32x4_t*)LANES64(v142[8]).n64_u64, 2);
    v148 = vaddq_f32(v147, v146[30]);
    LANES128(v147).n128_u32[0] = *(_DWORD*)(v144 + 40);
    LANES128(v147).n128_u32[2] = *(_DWORD*)(v144 + 44);
    v270 = v147;
    LANES128(v147).n128_u32[0] =
        LANES128_OF(vextq_s8(v148, v148, 8u)).n128_u32[0];
    LANES128(v148).n128_u32[1] = 0;
    LANES128(v148).n128_u64[1] = LANES128(v147).n128_u32[0];
    v269 = v148;
    collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8, v145);
    if (v271_.v272 == 1) {
      v149 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
      v150 = CharacterModel_1070c00_alt1(v149, 232551549);
      v151 = *((_OWORD*)v150 + 4);
      v152 = (float32x2_t*)v150;
      if (fabsf(*(float*)&v151) >= 0x1.0000000000000p-23f ||
          (v63 = 232551549,
           fabsf(*((float*)&v151 + 2)) >= 0x1.0000000000000p-23f)) {
        v153 = GameRoutine_10966f0(a1);
        v154 = *(_QWORD*)(a1 + 8);
        v155 =
            *(float*)(*(_QWORD*)(v153 + 11792) + 44LL) * *(float*)(v153 + 32);
        v156 = *(float32x4_t**)(*(_QWORD*)(v154 + 88) + 8LL);
        v157 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v156[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v152[8]).n64_u64)),
                v156[28], v152[8], 1),
            v156[29], *(float32x4_t*)LANES64(v152[8]).n64_u64, 2);
        v158 = vaddq_f32(v157, v156[30]);
        LANES128(v157).n128_u32[0] = *(_DWORD*)(v154 + 40);
        LANES128(v157).n128_u32[2] = *(_DWORD*)(v154 + 44);
        v270 = v157;
        LANES128(v157).n128_u32[0] =
            LANES128_OF(vextq_s8(v158, v158, 8u)).n128_u32[0];
        LANES128(v158).n128_u32[1] = 0;
        LANES128(v158).n128_u64[1] = LANES128(v157).n128_u32[0];
        v269 = v158;
        collision_6725f0_alt1((void*)((__int64)v271_.v271), &v270, &v269, 8,
                              v155);
        v159 = v271_.v272;
        v160 = 232551559;
        goto LABEL_243;
      }
    }
  }
LABEL_272:
  v266 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  v268 = *(_QWORD*)(v266 + 392);
  v267 = *(_QWORD*)(v266 + 400);
  if (v267 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v267 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v267 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v267 + 16LL))(v267);
      std___1___shared_weak_count___release_weak_alt1(v267);
    }
  }
  return CharacterModel_1071880_alt1(*(_QWORD*)(v268 + 11608), v63);
}

__int64 game_combat_109af50(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int64 v8;
  __int64 result;
  unsigned int v10[4];

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  v3 = *(_QWORD*)(v2 + 392);
  v4 = *(_QWORD*)(v2 + 400);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      v5 = v6;
    }
  }
  else {
    v5 = *(_QWORD*)(v3 + 11608);
  }
  v7 = *(_DWORD*)(a1 + 44);
  if (v7 == 1131178864) {
    v10[0] = 1131178864;
    v10[1] = 1188437166;
    v10[2] = 1188437166;
  }
  else {
    if (v7 != 1188437166) {
      v10[0] = 1131178864;
      v10[1] = 1188437166;
      v8 = 2;
      goto LABEL_11;
    }
    qmemcpy(v10, "pklCpklCpklC", 12);
  }
  v8 = 4;
  v10[3] = 1188437166;
LABEL_11:
  result = game_106ffe0(v5, 0, v10, v8);
  *(_DWORD*)(a1 + 44) = result;
  return result;
}

#pragma GCC visibility pop
