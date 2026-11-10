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
void game_combat_1064730(__int64 a1, int* a2, char a3, char a4, _QWORD* a5);
float game_combat_1068a00(__int64 a1, float result);
__attribute__((swiftcall)) void game_combat_1068f80(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void game_combat_10691b0(PSEUDO_X8 x8_,
                                                    _QWORD* result, __n128 a3);
__attribute__((swiftcall)) void game_combat_10692c0(PSEUDO_X8 x8_,
                                                    int32x2_t* a1);
void game_combat_1069600(__int64 a1, float a2);
__int64 game_combat_1099520(__int64 a1, __int64 a2);
__int64 game_combat_109af50(__int64 a1);

void game_combat_1064730(__int64 a1, int* a2, char a3, char a4, _QWORD* a5)
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
  __int64 v42;
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

  *(_QWORD*)a1 = a2;
  *(_BYTE*)(a1 + 8) = a3;
  *(_QWORD*)(a1 + 24) = a5[1];
  *(_QWORD*)(a1 + 16) = *a5;
  v9 = GameData_212d448[0];
  v10 = *GameData_212d448[0];
  if (*GameData_212d448[0] == 0 || (v11 = *(_QWORD*)(v10 + 8)) == 0 ||
      (*(_BYTE*)(v11 + 113) & 2) == 0) {
    GameRoutine_1064dc0((_QWORD*)a1);
    if ((a4 & 1) == 0) {
      GameRoutine_1064fc0((int**)a1);
      GameRoutine_10650e0((int**)a1);
      GameRoutine_1065370((int**)a1);
    }
    GameRoutine_10657e0(a1);
    game_combat_1065a00((_BYTE*)a1);
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
            std___1___shared_weak_count___release_weak(v45);
            v56 = CombatCharacterSound_1091900(v52 + 109);
            if (v56 != 0) {
              CharacterSound_1095750((void*)((__int64)v57), v56,
                                     (__int64)"SE_ACT_LD_Miss", 0,
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
            std___1___shared_weak_count___release_weak(v45);
            CombatCharacterSound_1091a50((void*)(v57), v46 + 872,
                                         "SE_ACT_LD_Guard_Normal",
                                         0x1.0000000000000p+0f);
            goto LABEL_19;
          }
        }
      }
    }
    std___1___shared_weak_count___release_weak(v45);
  }
LABEL_19:
  GameRoutine_1064b20((int**)a1);
  if (*v9 != 0) {
    v23 = *(_DWORD*)(*(_QWORD*)a1 + 12LL);
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
        std___1___shared_weak_count___release_weak(v25);
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
  v35 = *v9 + 24LL * *(unsigned int*)(*(_QWORD*)a1 + 12LL);
  v36 = *(_QWORD*)(v35 + 32);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                            memory_order_relaxed);
  v37 = *(_QWORD**)(v35 + 40);
  v38 = *(_QWORD*)(v36 + 8) == -1 || v37 == nullptr;
  if (v38 || (v39 = v37[10]) == 0 ||
      (*(_QWORD*)(v39 + 8) != -1 ? (v40 = v37[11] == 0) : (v40 = true), v40)) {
    v37 = nullptr;
  }
  *(__n128*)&v41 = std___1___shared_weak_count___release_weak(v36);
  LODWORD(v41) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
  CharacterAnimator_1079580(v37[46], *(_DWORD*)(*(_QWORD*)a1 + 68LL), v41,
                            -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
LABEL_7:
  if ((a3 & 1) == 0) {
    if ((*(_BYTE*)a2 & 0x40) != 0) {
      game_combat_ActionDamageCore_DoDie((__int64*)a1);
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
        v42 = *(_QWORD*)a1;
        MagicInst_10a4d70(*(unsigned int**)a1);
        MagicInst_10a4fe0(v42, ((*(_DWORD*)(v42 + 12) - 1) & 0xFFFFFFFD) != 0);
      }
    }
    if ((*(_BYTE*)(a1 + 8) & 1) == 0) {
      GameRoutine_10decc0((unsigned int**)(*(_QWORD*)a1 + 72LL));
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
          if (!v29 || COERCE_FLOAT(HIDWORD(*(_OWORD*)(v9 + 336))) != v25) {
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
          COERCE_FLOAT(HIDWORD(*(_OWORD*)&v7[21])) != v47) {
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
  long double v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  bool v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  __int64 v44;
  int v46;
  __int64 v47;
  int* v48;
  int v49;
  bool v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  int v53;
  int v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  int v58;
  bool v59;
  __int64 v60;
  unsigned __int64 v61;
  char v62;
  __int64 v63;
  unsigned int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
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
  __int64 v90;
  float32x2_t* v91;
  long double v92;
  long double v93;
  bool v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  float32x2_t* v98;
  __int64 v99;
  float v100;
  float32x4_t* v101;
  float32x4_t v102;
  int8x16_t v103;
  __int64 v104;
  __int64 v105;
  float v106;
  float32x2_t* v108;
  __int64 v109;
  __int64 v110;
  float v111;
  float32x4_t* v112;
  float32x4_t v113;
  int8x16_t v114;
  __int64 v115;
  __int64 v116;
  __int128 v117;
  float32x2_t* v118;
  __int64 v119;
  __int64 v120;
  float v121;
  float32x4_t* v122;
  float32x4_t v123;
  int8x16_t v124;
  int v125;
  float32x2_t* v126;
  long double v127;
  long double v128;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  float32x2_t* v133;
  __int64 v134;
  float v135;
  float32x4_t* v136;
  float32x4_t v137;
  int8x16_t v138;
  __int64 v139;
  __int64 v140;
  float v141;
  float32x2_t* v143;
  __int64 v144;
  __int64 v145;
  float v146;
  float32x4_t* v147;
  float32x4_t v148;
  int8x16_t v149;
  __int64 v150;
  __int64 v151;
  __int128 v152;
  float32x2_t* v153;
  __int64 v154;
  __int64 v155;
  float v156;
  float32x4_t* v157;
  float32x4_t v158;
  int8x16_t v159;
  int v160;
  int v161;
  float32x2_t* v162;
  long double v163;
  long double v164;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  float32x2_t* v169;
  __int64 v170;
  float v171;
  float32x4_t* v172;
  float32x4_t v173;
  int8x16_t v174;
  __int64 v175;
  __int64 v176;
  float v177;
  float32x2_t* v179;
  __int64 v180;
  __int64 v181;
  float v182;
  float32x4_t* v183;
  float32x4_t v184;
  int8x16_t v185;
  __int64 v186;
  __int64 v187;
  __int128 v188;
  float32x2_t* v189;
  __int64 v190;
  __int64 v191;
  float v192;
  float32x4_t* v193;
  float32x4_t v194;
  int8x16_t v195;
  int v196;
  bool v197;
  int v198;
  int v199;
  float32x2_t* v200;
  long double v201;
  long double v202;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  float32x2_t* v207;
  __int64 v208;
  float v209;
  float32x4_t* v210;
  float32x4_t v211;
  int8x16_t v212;
  __int64 v213;
  __int64 v214;
  __int128 v215;
  float32x2_t* v216;
  __int64 v217;
  __int64 v218;
  float v219;
  float32x4_t* v220;
  float32x4_t v221;
  int8x16_t v222;
  __int64 v223;
  __int64 v224;
  __int128 v225;
  float32x2_t* v226;
  __int64 v227;
  __int64 v228;
  float v229;
  float32x4_t* v230;
  float32x4_t v231;
  int8x16_t v232;
  float32x2_t* v233;
  long double v234;
  long double v235;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  float32x2_t* v240;
  __int64 v241;
  float v242;
  float32x4_t* v243;
  float32x4_t v244;
  int8x16_t v245;
  __int64 v246;
  __int64 v247;
  float v248;
  float32x2_t* v250;
  __int64 v251;
  __int64 v252;
  float v253;
  float32x4_t* v254;
  float32x4_t v255;
  int8x16_t v256;
  __int64 v257;
  __int64 v258;
  __int128 v259;
  float32x2_t* v260;
  __int64 v261;
  __int64 v262;
  float v263;
  float32x4_t* v264;
  float32x4_t v265;
  int8x16_t v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  int8x16_t v270;
  float32x4_t v271;
  _DWORD v272[20];
  unsigned __int8 v273;

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
        v25 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      else if ((v17 & 4) != 0 ||
               *(_DWORD*)((v44 = a2 + 12LL * *(int*)(a2 + 12)) + 104) >=
                   *(int*)(v44 + 96) >> 1) {
        v10 = 1400556095;
        v25 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      else {
        v10 = -77626398;
        v25 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      goto LABEL_142;
    }
    if ((v17 & 0x80) != 0) {
      v46 = *(_DWORD*)(a2 + 8);
      if ((v46 & 0xFFFFFFFE) == 2 &&
              (*(_DWORD*)((v47 = a2 + 12LL * (v46 & 1)) + 104) & 0x80000000) !=
                  0 &&
              *(int*)(v47 + 96) > 0 ||
          (v48 = (int*)(a2 + 96 + 12LL * v46))[2] < 0 && *v48 > 0 ||
          *(_QWORD*)(a2 + 96 + 12LL * (((v46 - 1) & 0xFFFFFFFD) != 0)) == 0) {
        v10 = 0;
        v25 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
      }
      else {
        v10 = -1791073559;
        v25 = *GameData_212d448[0];
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
        v25 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
        goto LABEL_142;
      }
      if ((v17 & 4) != 0) {
        v10 = -1193575788;
        v25 = *GameData_212d448[0];
        if (*GameData_212d448[0] == 0) {
          goto LABEL_144;
        }
        goto LABEL_142;
      }
      v26 = a2 + 12LL * *(int*)(a2 + 12);
      if (*(_DWORD*)(v26 + 104) >= *(int*)(v26 + 96) >> 1) {
        v10 = -1193575788;
      }
      else {
        v27 = *(_QWORD*)(a2 + 56);
        if (v27 == 0 || (*(_BYTE*)(v27 + 7) & 0x40) == 0) {
          v28 = GameRoutine_108f9b0(a2);
          if (v28 != 0 && (v29 = v28, GameRoutine_10681e0(v28) != 0) ||
              (v30 = GameRoutine_108fc30(a2), v31 = 0.0, v30 != 0) &&
                  (v29 = v30, GameRoutine_10681e0(v30) != 0)) {
            v32 = *(unsigned int*)(v29 + 96);
            v31 = 0.0;
            if ((unsigned int)v32 <= 3) {
              v31 = *((float*)&GameData_1a83520 + v32);
            }
          }
          if (*(_DWORD*)(a2 + 64) != 0) {
            v33 = *((unsigned __int8*)GameRoutine_108fa60(a2) + 80);
            if (v33 == 2) {
              if (v31 >= 0.0) {
                v10 = -1193575773;
              }
              else {
                v10 = -1193575789;
              }
              v25 = *v8;
              if (*v8 == 0) {
                goto LABEL_144;
              }
              goto LABEL_142;
            }
            if (v33 == 3) {
              if (v31 <= 0.0) {
                v10 = -1193575779;
              }
              else {
                v10 = -1193575789;
              }
              v25 = *v8;
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
      v34 = *(_DWORD*)(a2 + 12);
      if (v34 <= 3) {
        v35 = *v8 + 24LL * v34;
        v36 = *(_QWORD*)(v35 + 32);
        if (v36 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                    memory_order_relaxed);
          v37 = *(_QWORD*)(v35 + 40);
          v38 = *(_QWORD*)(v36 + 8) == -1 || v37 == 0;
          if (v38 || (v39 = *(_QWORD*)(v37 + 80)) == 0 ||
              (*(_QWORD*)(v39 + 8) != -1 ? (v40 = *(_QWORD*)(v37 + 88) == 0)
                                         : (v40 = true),
               v40 || *(_QWORD*)(v36 + 8) == -1)) {
            *(__n128*)&v19 = std___1___shared_weak_count___release_weak(v36);
          }
          else {
            std___1___shared_weak_count___release_weak(v36);
            if (GameRoutine_10681e0(v37) != 0) {
              v41 = *(_DWORD*)(v37 + 96);
              if (v41 <= 3) {
                v42 = 9u >> v41;
                v43 = 6u >> v41;
                goto LABEL_102;
              }
            }
          }
        }
      }
    }
    v42 = 0;
    LOBYTE(v43) = 0;
  LABEL_102:
    switch (v18) {
    case 1:
      v56 = 2;
      if ((v42 & 1) == 0) {
        v56 = 3;
      }
      v57 = (int)game_109d0f0(v19) % (v56 - (unsigned __int64)(v43 & 1));
      if (v57 == 0) {
        goto LABEL_141;
      }
      if (((v57 == 1) & ~v42) == 0) {
        if ((v42 & 1) != 0) {
          v58 = 1;
        }
        else {
          v58 = 2;
        }
        v59 = v58 == (_DWORD)v57;
      LABEL_128:
        v62 = !v59;
        if ((((unsigned __int8)v43 | (unsigned __int8)v62) & 1) != 0) {
          v10 = 0;
        }
        else {
          v10 = 232551565;
        }
        v25 = *v8;
        if (*v8 == 0) {
          goto LABEL_144;
        }
        goto LABEL_142;
      }
      break;
    case 2:
      v54 = game_109d0f0(v19);
      v50 = (v42 & 1) == 0;
      v51 = 3;
      v52 = v54;
      v53 = 232551559;
    LABEL_107:
      if (!v50) {
        v51 = 1;
      }
      v55 = v52 % v51;
      if (!v50) {
        v53 = 0;
      }
      if (v55 != 0) {
        v10 = v53;
      }
      else {
        v10 = 232551549;
      }
      v25 = *v8;
      if (*v8 == 0) {
        goto LABEL_144;
      }
      goto LABEL_142;
    case 3:
      v49 = game_109d0f0(v19);
      v50 = (v43 & 1) == 0;
      v51 = 3;
      v52 = v49;
      v53 = 232551565;
      goto LABEL_107;
    default:
      v60 = 1;
      if ((v42 & 1) == 0) {
        v60 = 2;
      }
      v61 = (int)game_109d0f0(v19) % (v60 - (unsigned __int64)(v43 & 1));
      if ((v42 & 1 | (v61 != 0)) != 0) {
        v59 = v61 == ((v42 & 1) == 0);
        goto LABEL_128;
      }
      break;
    }
    v10 = 232551559;
    v25 = *v8;
    if (*v8 == 0) {
      goto LABEL_144;
    }
    goto LABEL_142;
  }
  v10 = -1911544124;
  if (v18 == 3) {
    v10 = -1911544118;
    v25 = *v8;
    if (*v8 == 0) {
      goto LABEL_144;
    }
    goto LABEL_142;
  }
  if (v18 != 2) {
    v272[0] = -1911544124;
    v272[1] = -1911544118;
    nn_os_LockMutex(&game_g_random_mutex);
    v20 = game_map_MapRandom_instance__ptr[0];
    v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v23 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v20 + 1) = v21;
    v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20) = v22;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20 + 4) = v24;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v10 = v272[v24 & 1];
    v25 = *v8;
    if (*v8 == 0) {
      goto LABEL_144;
    }
    goto LABEL_142;
  }
LABEL_141:
  v25 = *v8;
  if (*v8 == 0) {
    goto LABEL_144;
  }
LABEL_142:
  v63 = *(_QWORD*)(v25 + 8);
  if (v63 != 0 && (*(_BYTE*)(v63 + 113) & 0x80) != 0) {
    v64 = -1193575789;
    if (v10 > -270062628) {
      if (v10 <= -77626399) {
        if (v10 == -270062627) {
          goto LABEL_272;
        }
        v75 = -93581017;
      }
      else {
        if (v10 == -77626398 || v10 == 1400556095) {
          goto LABEL_272;
        }
        v75 = 1715476756;
      }
    }
    else {
      if ((unsigned int)(v10 + 1193575789) <= 0x10 &&
          ((1 << (v10 + 109)) & 0x10403) != 0) {
        goto LABEL_272;
      }
      v75 = -972548316;
    }
    if (v10 != v75) {
      v64 = v10;
    }
    goto LABEL_272;
  }
LABEL_144:
  if (v10 <= 232551548) {
    if (v10 == -1193575779) {
      v86 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v87 = *(_QWORD*)(v86 + 392);
      v88 = *(_QWORD*)(v86 + 400);
      if (v88 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v88 + 8), 1u,
                                  memory_order_relaxed);
        v89 = *(_QWORD*)(v87 + 11608);
        if (atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v90 = v89;
          (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
          std___1___shared_weak_count___release_weak(v88);
          v89 = v90;
        }
      }
      else {
        v89 = *(_QWORD*)(v87 + 11608);
      }
      v125 = -1193575789;
      v64 = -1193575779;
      v162 = (float32x2_t*)CharacterModel_1070c00(v89, 3101391517LL);
      v163 = *(long double*)LANES64(v162[8]).n64_u64;
      v94 = fabsf(*(float*)&v163) < 0x1.0000000000000p-23;
      *(_QWORD*)&v163 = 0x3400000034000000LL;
      *(float*)&v164 = fabsf(COERCE_FLOAT(LANES64(v162[9]).n64_u64[0]));
      if (v94 && *(float*)&v164 < 0x1.0000000000000p-23) {
        goto LABEL_272;
      }
      v166 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v168 = *(_QWORD*)(v166 + 392);
      v167 = *(_QWORD*)(v166 + 400);
      if (v167 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v167 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v167 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v169 = v162;
          (*(void (**)(__int64, long double, long double))(
              *(_QWORD*)v167 + 16LL))(v167, v163, v164);
          std___1___shared_weak_count___release_weak(v167);
          v162 = v169;
        }
      }
      v170 = *(_QWORD*)(a1 + 8);
      v171 = *(float*)(*(_QWORD*)(v168 + 11792) + 44LL) * *(float*)(v168 + 32);
      v172 = *(float32x4_t**)(*(_QWORD*)(v170 + 88) + 8LL);
      v173 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v172[27],
                          COERCE_FLOAT(*(_OWORD*)LANES64(v162[8]).n64_u64)),
              v172[28], v162[8], 1),
          v172[29], *(float32x4_t*)LANES64(v162[8]).n64_u64, 2);
      v174 = vaddq_f32(v173, v172[30]);
      LANES128(v173).n128_u32[0] = *(_DWORD*)(v170 + 40);
      LANES128(v173).n128_u32[2] = *(_DWORD*)(v170 + 44);
      v271 = v173;
      LANES128(v173).n128_u32[0] =
          LANES128_OF(vextq_s8(v174, v174, 8u)).n128_u32[0];
      LANES128(v174).n128_u32[1] = 0;
      LANES128(v174).n128_u64[1] = LANES128(v173).n128_u32[0];
      v270 = v174;
      collision_6725f0(&v271, &v270, 8, v171);
      if ((v273 & 1) == 0) {
        goto LABEL_227;
      }
      v175 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
      v176 = CharacterModel_1070c00(v175, 3101391507LL);
      v177 = fabsf(COERCE_FLOAT(*(_QWORD*)(v176 + 72)));
      if (fabsf(COERCE_FLOAT(*(_OWORD*)(v176 + 64))) >= 0x1.0000000000000p-23 ||
          v177 >= 0x1.0000000000000p-23) {
        v179 = (float32x2_t*)v176;
        v180 = GameRoutine_10966f0(a1);
        v181 = *(_QWORD*)(a1 + 8);
        v182 =
            *(float*)(*(_QWORD*)(v180 + 11792) + 44LL) * *(float*)(v180 + 32);
        v183 = *(float32x4_t**)(*(_QWORD*)(v181 + 88) + 8LL);
        v184 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v183[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v179[8]).n64_u64)),
                v183[28], v179[8], 1),
            v183[29], *(float32x4_t*)LANES64(v179[8]).n64_u64, 2);
        v185 = vaddq_f32(v184, v183[30]);
        LANES128(v184).n128_u32[0] = *(_DWORD*)(v181 + 40);
        LANES128(v184).n128_u32[2] = *(_DWORD*)(v181 + 44);
        v271 = v184;
        LANES128(v184).n128_u32[0] =
            LANES128_OF(vextq_s8(v185, v185, 8u)).n128_u32[0];
        LANES128(v185).n128_u32[1] = 0;
        LANES128(v185).n128_u64[1] = LANES128(v184).n128_u32[0];
        v270 = v185;
        collision_6725f0(&v271, &v270, 8, v182);
        v64 = -1193575789;
        if (v273 != 1) {
          goto LABEL_272;
        }
        v186 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
        v64 = -1193575773;
        v187 = CharacterModel_1070c00(v186, 3101391523LL);
        v188 = *(_OWORD*)(v187 + 64);
        v189 = (float32x2_t*)v187;
        if (fabsf(*(float*)&v188) < 0x1.0000000000000p-23 &&
            fabsf(*((float*)&v188 + 2)) < 0x1.0000000000000p-23) {
          goto LABEL_272;
        }
        v190 = GameRoutine_10966f0(a1);
        v191 = *(_QWORD*)(a1 + 8);
        v192 =
            *(float*)(*(_QWORD*)(v190 + 11792) + 44LL) * *(float*)(v190 + 32);
        v193 = *(float32x4_t**)(*(_QWORD*)(v191 + 88) + 8LL);
        v194 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v193[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v189[8]).n64_u64)),
                v193[28], v189[8], 1),
            v193[29], *(float32x4_t*)LANES64(v189[8]).n64_u64, 2);
        v195 = vaddq_f32(v194, v193[30]);
        LANES128(v194).n128_u32[0] = *(_DWORD*)(v191 + 40);
        LANES128(v194).n128_u32[2] = *(_DWORD*)(v191 + 44);
        v271 = v194;
        LANES128(v194).n128_u32[0] =
            LANES128_OF(vextq_s8(v195, v195, 8u)).n128_u32[0];
        LANES128(v195).n128_u32[1] = 0;
        LANES128(v195).n128_u64[1] = LANES128(v194).n128_u32[0];
        v270 = v195;
        collision_6725f0(&v271, &v270, 8, v192);
        v196 = 10;
        v197 = v273 == 0;
        v198 = 16;
        goto LABEL_263;
      }
    }
    else {
      v64 = v10;
      if (v10 != -1193575773) {
        goto LABEL_272;
      }
      v70 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v71 = *(_QWORD*)(v70 + 392);
      v72 = *(_QWORD*)(v70 + 400);
      if (v72 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 8), 1u,
                                  memory_order_relaxed);
        v73 = *(_QWORD*)(v71 + 11608);
        if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v74 = v73;
          (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
          std___1___shared_weak_count___release_weak(v72);
          v73 = v74;
        }
      }
      else {
        v73 = *(_QWORD*)(v71 + 11608);
      }
      v199 = -1193575789;
      v64 = -1193575773;
      v233 = (float32x2_t*)CharacterModel_1070c00(v73, 3101391523LL);
      v234 = *(long double*)LANES64(v233[8]).n64_u64;
      v94 = fabsf(*(float*)&v234) < 0x1.0000000000000p-23;
      *(_QWORD*)&v234 = 0x3400000034000000LL;
      *(float*)&v235 = fabsf(COERCE_FLOAT(LANES64(v233[9]).n64_u64[0]));
      if (v94 && *(float*)&v235 < 0x1.0000000000000p-23) {
        goto LABEL_272;
      }
      v237 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v239 = *(_QWORD*)(v237 + 392);
      v238 = *(_QWORD*)(v237 + 400);
      if (v238 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v238 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v238 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v240 = v233;
          (*(void (**)(__int64, long double, long double))(
              *(_QWORD*)v238 + 16LL))(v238, v234, v235);
          std___1___shared_weak_count___release_weak(v238);
          v233 = v240;
        }
      }
      v241 = *(_QWORD*)(a1 + 8);
      v242 = *(float*)(*(_QWORD*)(v239 + 11792) + 44LL) * *(float*)(v239 + 32);
      v243 = *(float32x4_t**)(*(_QWORD*)(v241 + 88) + 8LL);
      v244 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v243[27],
                          COERCE_FLOAT(*(_OWORD*)LANES64(v233[8]).n64_u64)),
              v243[28], v233[8], 1),
          v243[29], *(float32x4_t*)LANES64(v233[8]).n64_u64, 2);
      v245 = vaddq_f32(v244, v243[30]);
      LANES128(v244).n128_u32[0] = *(_DWORD*)(v241 + 40);
      LANES128(v244).n128_u32[2] = *(_DWORD*)(v241 + 44);
      v271 = v244;
      LANES128(v244).n128_u32[0] =
          LANES128_OF(vextq_s8(v245, v245, 8u)).n128_u32[0];
      LANES128(v245).n128_u32[1] = 0;
      LANES128(v245).n128_u64[1] = LANES128(v244).n128_u32[0];
      v270 = v245;
      collision_6725f0(&v271, &v270, 8, v242);
      if ((v273 & 1) == 0) {
        goto LABEL_266;
      }
      v246 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
      v247 = CharacterModel_1070c00(v246, 3101391507LL);
      v248 = fabsf(COERCE_FLOAT(*(_QWORD*)(v247 + 72)));
      if (fabsf(COERCE_FLOAT(*(_OWORD*)(v247 + 64))) >= 0x1.0000000000000p-23 ||
          v248 >= 0x1.0000000000000p-23) {
        v250 = (float32x2_t*)v247;
        v251 = GameRoutine_10966f0(a1);
        v252 = *(_QWORD*)(a1 + 8);
        v253 =
            *(float*)(*(_QWORD*)(v251 + 11792) + 44LL) * *(float*)(v251 + 32);
        v254 = *(float32x4_t**)(*(_QWORD*)(v252 + 88) + 8LL);
        v255 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v254[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v250[8]).n64_u64)),
                v254[28], v250[8], 1),
            v254[29], *(float32x4_t*)LANES64(v250[8]).n64_u64, 2);
        v256 = vaddq_f32(v255, v254[30]);
        LANES128(v255).n128_u32[0] = *(_DWORD*)(v252 + 40);
        LANES128(v255).n128_u32[2] = *(_DWORD*)(v252 + 44);
        v271 = v255;
        LANES128(v255).n128_u32[0] =
            LANES128_OF(vextq_s8(v256, v256, 8u)).n128_u32[0];
        LANES128(v256).n128_u32[1] = 0;
        LANES128(v256).n128_u64[1] = LANES128(v255).n128_u32[0];
        v270 = v256;
        collision_6725f0(&v271, &v270, 8, v253);
        v64 = -1193575789;
        if (v273 != 1) {
          goto LABEL_272;
        }
        v257 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
        v64 = -1193575779;
        v258 = CharacterModel_1070c00(v257, 3101391517LL);
        v259 = *(_OWORD*)(v258 + 64);
        v260 = (float32x2_t*)v258;
        if (fabsf(*(float*)&v259) < 0x1.0000000000000p-23 &&
            fabsf(*((float*)&v259 + 2)) < 0x1.0000000000000p-23) {
          goto LABEL_272;
        }
        v261 = GameRoutine_10966f0(a1);
        v262 = *(_QWORD*)(a1 + 8);
        v263 =
            *(float*)(*(_QWORD*)(v261 + 11792) + 44LL) * *(float*)(v261 + 32);
        v264 = *(float32x4_t**)(*(_QWORD*)(v262 + 88) + 8LL);
        v265 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v264[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v260[8]).n64_u64)),
                v264[28], v260[8], 1),
            v264[29], *(float32x4_t*)LANES64(v260[8]).n64_u64, 2);
        v266 = vaddq_f32(v265, v264[30]);
        LANES128(v265).n128_u32[0] = *(_DWORD*)(v262 + 40);
        LANES128(v265).n128_u32[2] = *(_DWORD*)(v262 + 44);
        v271 = v265;
        LANES128(v265).n128_u32[0] =
            LANES128_OF(vextq_s8(v266, v266, 8u)).n128_u32[0];
        LANES128(v266).n128_u32[1] = 0;
        LANES128(v266).n128_u64[1] = LANES128(v265).n128_u32[0];
        v270 = v266;
        collision_6725f0(&v271, &v270, 8, v263);
        v196 = 16;
        v197 = v273 == 0;
        v198 = 10;
      LABEL_263:
        if (!v197) {
          v198 = v196;
        }
        v64 = v198 - 1193575789;
        goto LABEL_272;
      }
    }
    v64 = -1193575789;
    goto LABEL_272;
  }
  if (v10 == 232551549) {
    v76 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
    v77 = *(_QWORD*)(v76 + 392);
    v78 = *(_QWORD*)(v76 + 400);
    if (v78 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v78 + 8), 1u,
                                memory_order_relaxed);
      v79 = *(_QWORD*)(v77 + 11608);
      if (atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v80 = v79;
        (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
        std___1___shared_weak_count___release_weak(v78);
        v79 = v80;
      }
    }
    else {
      v79 = *(_QWORD*)(v77 + 11608);
    }
    v91 = (float32x2_t*)CharacterModel_1070c00(v79, 232551549);
    v92 = *(long double*)LANES64(v91[8]).n64_u64;
    v94 = fabsf(*(float*)&v92) < 0x1.0000000000000p-23;
    *(_QWORD*)&v92 = 0x3400000034000000LL;
    *(float*)&v93 = fabsf(COERCE_FLOAT(LANES64(v91[9]).n64_u64[0]));
    v94 = v94 && *(float*)&v93 < 0x1.0000000000000p-23;
    if (v94) {
      v64 = 232551549;
    }
    else {
      v95 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
      v97 = *(_QWORD*)(v95 + 392);
      v96 = *(_QWORD*)(v95 + 400);
      if (v96 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v96 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v96 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v98 = v91;
          (*(void (**)(__int64, long double, long double))(
              *(_QWORD*)v96 + 16LL))(v96, v92, v93);
          std___1___shared_weak_count___release_weak(v96);
          v91 = v98;
        }
      }
      v99 = *(_QWORD*)(a1 + 8);
      v100 = *(float*)(*(_QWORD*)(v97 + 11792) + 44LL) * *(float*)(v97 + 32);
      v101 = *(float32x4_t**)(*(_QWORD*)(v99 + 88) + 8LL);
      v102 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v101[27],
                          COERCE_FLOAT(*(_OWORD*)LANES64(v91[8]).n64_u64)),
              v101[28], v91[8], 1),
          v101[29], *(float32x4_t*)LANES64(v91[8]).n64_u64, 2);
      v103 = vaddq_f32(v102, v101[30]);
      LANES128(v102).n128_u32[0] = *(_DWORD*)(v99 + 40);
      LANES128(v102).n128_u32[2] = *(_DWORD*)(v99 + 44);
      v271 = v102;
      LANES128(v102).n128_u32[0] =
          LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u32[0];
      LANES128(v103).n128_u32[1] = 0;
      LANES128(v103).n128_u64[1] = LANES128(v102).n128_u32[0];
      v270 = v103;
      collision_6725f0(&v271, &v270, 8, v100);
      v64 = 232551549;
      if ((v273 & 1) != 0) {
        v104 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
        v64 = 232551559;
        v105 = CharacterModel_1070c00(v104, 232551559);
        v106 = fabsf(COERCE_FLOAT(*(_QWORD*)(v105 + 72)));
        if (fabsf(COERCE_FLOAT(*(_OWORD*)(v105 + 64))) >=
                0x1.0000000000000p-23 ||
            v106 >= 0x1.0000000000000p-23) {
          v108 = (float32x2_t*)v105;
          v109 = GameRoutine_10966f0(a1);
          v110 = *(_QWORD*)(a1 + 8);
          v111 =
              *(float*)(*(_QWORD*)(v109 + 11792) + 44LL) * *(float*)(v109 + 32);
          v112 = *(float32x4_t**)(*(_QWORD*)(v110 + 88) + 8LL);
          v113 = vmlaq_laneq_f32(
              vmlaq_lane_f32(
                  vmulq_n_f32(v112[27],
                              COERCE_FLOAT(*(_OWORD*)LANES64(v108[8]).n64_u64)),
                  v112[28], v108[8], 1),
              v112[29], *(float32x4_t*)LANES64(v108[8]).n64_u64, 2);
          v114 = vaddq_f32(v113, v112[30]);
          LANES128(v113).n128_u32[0] = *(_DWORD*)(v110 + 40);
          LANES128(v113).n128_u32[2] = *(_DWORD*)(v110 + 44);
          v271 = v113;
          LANES128(v113).n128_u32[0] =
              LANES128_OF(vextq_s8(v114, v114, 8u)).n128_u32[0];
          LANES128(v114).n128_u32[1] = 0;
          LANES128(v114).n128_u64[1] = LANES128(v113).n128_u32[0];
          v270 = v114;
          collision_6725f0(&v271, &v270, 8, v111);
          if (v273 == 1) {
            v115 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
            v64 = 232551565;
            v116 = CharacterModel_1070c00(v115, 232551565);
            v117 = *(_OWORD*)(v116 + 64);
            v118 = (float32x2_t*)v116;
            if (fabsf(*(float*)&v117) >= 0x1.0000000000000p-23 ||
                fabsf(*((float*)&v117 + 2)) >= 0x1.0000000000000p-23) {
              v119 = GameRoutine_10966f0(a1);
              v120 = *(_QWORD*)(a1 + 8);
              v121 = *(float*)(*(_QWORD*)(v119 + 11792) + 44LL) *
                     *(float*)(v119 + 32);
              v122 = *(float32x4_t**)(*(_QWORD*)(v120 + 88) + 8LL);
              v123 = vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(
                          v122[27],
                          COERCE_FLOAT(*(_OWORD*)LANES64(v118[8]).n64_u64)),
                      v122[28], v118[8], 1),
                  v122[29], *(float32x4_t*)LANES64(v118[8]).n64_u64, 2);
              v124 = vaddq_f32(v123, v122[30]);
              LANES128(v123).n128_u32[0] = *(_DWORD*)(v120 + 40);
              LANES128(v123).n128_u32[2] = *(_DWORD*)(v120 + 44);
              v271 = v123;
              LANES128(v123).n128_u32[0] =
                  LANES128_OF(vextq_s8(v124, v124, 8u)).n128_u32[0];
              LANES128(v124).n128_u32[1] = 0;
              LANES128(v124).n128_u64[1] = LANES128(v123).n128_u32[0];
              v270 = v124;
              collision_6725f0(&v271, &v270, 8, v121);
              if (v273 != 0) {
                v64 = 232551549;
              }
              else {
                v64 = 232551565;
              }
            }
          }
        }
      }
    }
    goto LABEL_272;
  }
  if (v10 != 232551559) {
    v64 = v10;
    if (v10 != 232551565) {
      goto LABEL_272;
    }
    v65 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
    v66 = *(_QWORD*)(v65 + 392);
    v67 = *(_QWORD*)(v65 + 400);
    if (v67 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 8), 1u,
                                memory_order_relaxed);
      v68 = *(_QWORD*)(v66 + 11608);
      if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v69 = v68;
        (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
        std___1___shared_weak_count___release_weak(v67);
        v68 = v69;
      }
    }
    else {
      v68 = *(_QWORD*)(v66 + 11608);
    }
    v199 = 232551549;
    v64 = 232551565;
    v200 = (float32x2_t*)CharacterModel_1070c00(v68, 232551565);
    v201 = *(long double*)LANES64(v200[8]).n64_u64;
    v94 = fabsf(*(float*)&v201) < 0x1.0000000000000p-23;
    *(_QWORD*)&v201 = 0x3400000034000000LL;
    *(float*)&v202 = fabsf(COERCE_FLOAT(LANES64(v200[9]).n64_u64[0]));
    if (v94 && *(float*)&v202 < 0x1.0000000000000p-23) {
      goto LABEL_272;
    }
    v204 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
    v206 = *(_QWORD*)(v204 + 392);
    v205 = *(_QWORD*)(v204 + 400);
    if (v205 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v205 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v205 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v207 = v200;
        (*(void (**)(__int64, long double, long double))(
            *(_QWORD*)v205 + 16LL))(v205, v201, v202);
        std___1___shared_weak_count___release_weak(v205);
        v200 = v207;
      }
    }
    v208 = *(_QWORD*)(a1 + 8);
    v209 = *(float*)(*(_QWORD*)(v206 + 11792) + 44LL) * *(float*)(v206 + 32);
    v210 = *(float32x4_t**)(*(_QWORD*)(v208 + 88) + 8LL);
    v211 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v210[27],
                        COERCE_FLOAT(*(_OWORD*)LANES64(v200[8]).n64_u64)),
            v210[28], v200[8], 1),
        v210[29], *(float32x4_t*)LANES64(v200[8]).n64_u64, 2);
    v212 = vaddq_f32(v211, v210[30]);
    LANES128(v211).n128_u32[0] = *(_DWORD*)(v208 + 40);
    LANES128(v211).n128_u32[2] = *(_DWORD*)(v208 + 44);
    v271 = v211;
    LANES128(v211).n128_u32[0] =
        LANES128_OF(vextq_s8(v212, v212, 8u)).n128_u32[0];
    LANES128(v212).n128_u32[1] = 0;
    LANES128(v212).n128_u64[1] = LANES128(v211).n128_u32[0];
    v270 = v212;
    collision_6725f0(&v271, &v270, 8, v209);
    if ((v273 & 1) != 0) {
      v213 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
      v64 = 232551559;
      v214 = CharacterModel_1070c00(v213, 232551559);
      v215 = *(_OWORD*)(v214 + 64);
      v216 = (float32x2_t*)v214;
      if (fabsf(*(float*)&v215) >= 0x1.0000000000000p-23 ||
          fabsf(*((float*)&v215 + 2)) >= 0x1.0000000000000p-23) {
        v217 = GameRoutine_10966f0(a1);
        v218 = *(_QWORD*)(a1 + 8);
        v219 =
            *(float*)(*(_QWORD*)(v217 + 11792) + 44LL) * *(float*)(v217 + 32);
        v220 = *(float32x4_t**)(*(_QWORD*)(v218 + 88) + 8LL);
        v221 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v220[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v216[8]).n64_u64)),
                v220[28], v216[8], 1),
            v220[29], *(float32x4_t*)LANES64(v216[8]).n64_u64, 2);
        v222 = vaddq_f32(v221, v220[30]);
        LANES128(v221).n128_u32[0] = *(_DWORD*)(v218 + 40);
        LANES128(v221).n128_u32[2] = *(_DWORD*)(v218 + 44);
        v271 = v221;
        LANES128(v221).n128_u32[0] =
            LANES128_OF(vextq_s8(v222, v222, 8u)).n128_u32[0];
        LANES128(v222).n128_u32[1] = 0;
        LANES128(v222).n128_u64[1] = LANES128(v221).n128_u32[0];
        v270 = v222;
        collision_6725f0(&v271, &v270, 8, v219);
        if (v273 == 1) {
          v223 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
          v224 = CharacterModel_1070c00(v223, 232551549);
          v225 = *(_OWORD*)(v224 + 64);
          v226 = (float32x2_t*)v224;
          if (fabsf(*(float*)&v225) >= 0x1.0000000000000p-23 ||
              (v64 = 232551549,
               fabsf(*((float*)&v225 + 2)) >= 0x1.0000000000000p-23)) {
            v227 = GameRoutine_10966f0(a1);
            v228 = *(_QWORD*)(a1 + 8);
            v229 = *(float*)(*(_QWORD*)(v227 + 11792) + 44LL) *
                   *(float*)(v227 + 32);
            v230 = *(float32x4_t**)(*(_QWORD*)(v228 + 88) + 8LL);
            v231 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(
                        v230[27],
                        COERCE_FLOAT(*(_OWORD*)LANES64(v226[8]).n64_u64)),
                    v230[28], v226[8], 1),
                v230[29], *(float32x4_t*)LANES64(v226[8]).n64_u64, 2);
            v232 = vaddq_f32(v231, v230[30]);
            LANES128(v231).n128_u32[0] = *(_DWORD*)(v228 + 40);
            LANES128(v231).n128_u32[2] = *(_DWORD*)(v228 + 44);
            v271 = v231;
            LANES128(v231).n128_u32[0] =
                LANES128_OF(vextq_s8(v232, v232, 8u)).n128_u32[0];
            LANES128(v232).n128_u32[1] = 0;
            LANES128(v232).n128_u64[1] = LANES128(v231).n128_u32[0];
            v270 = v232;
            collision_6725f0(&v271, &v270, 8, v229);
            v160 = v273;
            v161 = 232551565;
          LABEL_243:
            if (v160 != 0) {
              v64 = v161;
            }
            else {
              v64 = 232551549;
            }
            goto LABEL_272;
          }
        }
      }
      goto LABEL_272;
    }
  LABEL_266:
    v64 = v199 + 16;
    goto LABEL_272;
  }
  v81 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  v82 = *(_QWORD*)(v81 + 392);
  v83 = *(_QWORD*)(v81 + 400);
  if (v83 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v83 + 8), 1u,
                              memory_order_relaxed);
    v84 = *(_QWORD*)(v82 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v85 = v84;
      (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
      std___1___shared_weak_count___release_weak(v83);
      v84 = v85;
    }
  }
  else {
    v84 = *(_QWORD*)(v82 + 11608);
  }
  v125 = 232551549;
  v64 = 232551559;
  v126 = (float32x2_t*)CharacterModel_1070c00(v84, 232551559);
  v127 = *(long double*)LANES64(v126[8]).n64_u64;
  v94 = fabsf(*(float*)&v127) < 0x1.0000000000000p-23;
  *(_QWORD*)&v127 = 0x3400000034000000LL;
  *(float*)&v128 = fabsf(COERCE_FLOAT(LANES64(v126[9]).n64_u64[0]));
  if (v94 && *(float*)&v128 < 0x1.0000000000000p-23) {
    goto LABEL_272;
  }
  v130 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  v132 = *(_QWORD*)(v130 + 392);
  v131 = *(_QWORD*)(v130 + 400);
  if (v131 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v131 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v131 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v133 = v126;
      (*(void (**)(__int64, long double, long double))(*(_QWORD*)v131 + 16LL))(
          v131, v127, v128);
      std___1___shared_weak_count___release_weak(v131);
      v126 = v133;
    }
  }
  v134 = *(_QWORD*)(a1 + 8);
  v135 = *(float*)(*(_QWORD*)(v132 + 11792) + 44LL) * *(float*)(v132 + 32);
  v136 = *(float32x4_t**)(*(_QWORD*)(v134 + 88) + 8LL);
  v137 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(v136[27],
                      COERCE_FLOAT(*(_OWORD*)LANES64(v126[8]).n64_u64)),
          v136[28], v126[8], 1),
      v136[29], *(float32x4_t*)LANES64(v126[8]).n64_u64, 2);
  v138 = vaddq_f32(v137, v136[30]);
  LANES128(v137).n128_u32[0] = *(_DWORD*)(v134 + 40);
  LANES128(v137).n128_u32[2] = *(_DWORD*)(v134 + 44);
  v271 = v137;
  LANES128(v137).n128_u32[0] =
      LANES128_OF(vextq_s8(v138, v138, 8u)).n128_u32[0];
  LANES128(v138).n128_u32[1] = 0;
  LANES128(v138).n128_u64[1] = LANES128(v137).n128_u32[0];
  v270 = v138;
  collision_6725f0(&v271, &v270, 8, v135);
  if ((v273 & 1) == 0) {
  LABEL_227:
    v64 = v125 + 10;
    goto LABEL_272;
  }
  v139 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
  v64 = 232551565;
  v140 = CharacterModel_1070c00(v139, 232551565);
  v141 = fabsf(COERCE_FLOAT(*(_QWORD*)(v140 + 72)));
  if (fabsf(COERCE_FLOAT(*(_OWORD*)(v140 + 64))) >= 0x1.0000000000000p-23 ||
      v141 >= 0x1.0000000000000p-23) {
    v143 = (float32x2_t*)v140;
    v144 = GameRoutine_10966f0(a1);
    v145 = *(_QWORD*)(a1 + 8);
    v146 = *(float*)(*(_QWORD*)(v144 + 11792) + 44LL) * *(float*)(v144 + 32);
    v147 = *(float32x4_t**)(*(_QWORD*)(v145 + 88) + 8LL);
    v148 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(v147[27],
                        COERCE_FLOAT(*(_OWORD*)LANES64(v143[8]).n64_u64)),
            v147[28], v143[8], 1),
        v147[29], *(float32x4_t*)LANES64(v143[8]).n64_u64, 2);
    v149 = vaddq_f32(v148, v147[30]);
    LANES128(v148).n128_u32[0] = *(_DWORD*)(v145 + 40);
    LANES128(v148).n128_u32[2] = *(_DWORD*)(v145 + 44);
    v271 = v148;
    LANES128(v148).n128_u32[0] =
        LANES128_OF(vextq_s8(v149, v149, 8u)).n128_u32[0];
    LANES128(v149).n128_u32[1] = 0;
    LANES128(v149).n128_u64[1] = LANES128(v148).n128_u32[0];
    v270 = v149;
    collision_6725f0(&v271, &v270, 8, v146);
    if (v273 == 1) {
      v150 = GameRoutine_1068020(*(_QWORD*)(a1 + 8));
      v151 = CharacterModel_1070c00(v150, 232551549);
      v152 = *(_OWORD*)(v151 + 64);
      v153 = (float32x2_t*)v151;
      if (fabsf(*(float*)&v152) >= 0x1.0000000000000p-23 ||
          (v64 = 232551549,
           fabsf(*((float*)&v152 + 2)) >= 0x1.0000000000000p-23)) {
        v154 = GameRoutine_10966f0(a1);
        v155 = *(_QWORD*)(a1 + 8);
        v156 =
            *(float*)(*(_QWORD*)(v154 + 11792) + 44LL) * *(float*)(v154 + 32);
        v157 = *(float32x4_t**)(*(_QWORD*)(v155 + 88) + 8LL);
        v158 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v157[27],
                            COERCE_FLOAT(*(_OWORD*)LANES64(v153[8]).n64_u64)),
                v157[28], v153[8], 1),
            v157[29], *(float32x4_t*)LANES64(v153[8]).n64_u64, 2);
        v159 = vaddq_f32(v158, v157[30]);
        LANES128(v158).n128_u32[0] = *(_DWORD*)(v155 + 40);
        LANES128(v158).n128_u32[2] = *(_DWORD*)(v155 + 44);
        v271 = v158;
        LANES128(v158).n128_u32[0] =
            LANES128_OF(vextq_s8(v159, v159, 8u)).n128_u32[0];
        LANES128(v159).n128_u32[1] = 0;
        LANES128(v159).n128_u64[1] = LANES128(v158).n128_u32[0];
        v270 = v159;
        collision_6725f0(&v271, &v270, 8, v156);
        v160 = v273;
        v161 = 232551559;
        goto LABEL_243;
      }
    }
  }
LABEL_272:
  v267 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
  v269 = *(_QWORD*)(v267 + 392);
  v268 = *(_QWORD*)(v267 + 400);
  if (v268 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v268 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v268 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v268 + 16LL))(v268);
      std___1___shared_weak_count___release_weak(v268);
    }
  }
  return CharacterModel_1071880(*(_QWORD*)(v269 + 11608), v64);
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
