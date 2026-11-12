#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1083e90(_QWORD, _QWORD, long double);
__int64 CharacterModel_1070c00(_QWORD, _QWORD);
__int64 Config_bc7060(_QWORD, _QWORD);
__int64 Config_bc7660(_QWORD);
__int64 GameRoutine_10685c0(__int64 result);
__int64 GameRoutine_10a9ec0(_QWORD, long double);
__int64 GameRoutine_10d43c0(_QWORD, long double);
__int64 GameRoutine_110c220(void);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14a4d00(_QWORD);
__int64 GameRoutine_809ba0(float);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_10a6700(__int64, char, __int64*, __n128 result);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2006310[])();
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern __int64 (*game_combat_CombatUniverse_vtable[])();
extern __int64 GameData_21d1e38;
extern __int64 GameData_22197d8;
extern __int64 GameData_224b668;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64* GameData_212d448[9];
extern int GameData_2235610;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 CombatUniverse_106bd20(__int64 a1, unsigned int a2);
void CombatUniverse_Destructor(_QWORD* a1, long double a2);
void game_combat_CombatUniverse_Setup_lambda0_Invoke(__int64 a1, __int64 a2);
__n128 game_combat_CombatUniverse_MakeLastSituationOnSkip_lambda0_Invoke_alt1(
    __int64 a1, int* a2,
    __int64* a3) __asm__("game_combat_CombatUniverse_MakeLastSituationOnSkip_"
                         "lambda0_Invoke");
__int64 CombatLegionManager_e2fc00(_QWORD*, __int64*, __int64, int);
__int64 GameRoutine_1068360(__int64 result);
__int64 game_combat_d360c0(long double);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int64 (*GameData_2006340[])();
extern __int64 GameData_220f8c8;
extern __int64 GameData_2235760;
extern __int64 GameData_2235768;
extern int GameData_21d92e0;
float GameRoutine_1068a00(__int64, float result);
float GameRoutine_110daa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
float32x4_t GameRoutine_1102cc0(__int64);
void CharacterAnimator_107a920(__int64, float);
void GameRoutine_1068b40(__int64, char);
void GameRoutine_1069600(_QWORD*, float);
void __attribute__((noreturn)) GameRoutine_d38e30(void);
__int64 game_combat_CombatUniverse_Setup(__int64 a1, __int64* a2);
__n128 CombatUniverse_106bbf0(_QWORD* a1);
void CombatUniverse_10ddb30(_QWORD* a1);
__int64 CombatLegionManager_e2ce80(__int64 result);
__int64 Config_bc5620(__int64, __int64);
__int64 GameRoutine_1090be0(__int64 result);
__int64 GameRoutine_10f15b0();
__int64 GameRoutine_10f1e60();
__int64 GameRoutine_18c8060(__int64);
__int64 game_10f20b0();
__int64 game_10f21c0(_BYTE*, unsigned int);
__int64 game_80e8e0(__int64 result);
__n128 Config_bc7840(__int64, __int64);
__n128 GameRoutine_106ca40(_QWORD*, __int64);
extern __int64 (*GameData_200bd20[])();
extern __int64* GameData_21320e8;
extern __int64 GameData_2235e30;
float32x4_t
GameRoutine_1102cc0_alt1(__int64,
                         float32x4_t result) __asm__("GameRoutine_1102cc0");
void GameRoutine_106dcd0(_QWORD*, char, char);
void GameRoutine_14a4d00_alt1(__int64**) __asm__("GameRoutine_14a4d00");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_10d43c0(__int64);
void game_combat_106e570(_QWORD*);
__int64 game_combat_CombatUniverse_MakeLastSituationOnSkip(_QWORD* a1);
__int64* CharacterModel_1070c00_alt1(__int64,
                                     __int64) __asm__("CharacterModel_1070c00");
__int64 game_character_CharacterSelfie_Start(__int64 result, char, __int64*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_10685c0_alt1(_QWORD*) __asm__("GameRoutine_10685c0");
void game_combat_CombatUniverse_MakeLastSituationOnSkip_lambda0_Invoke(
    __int64 a1, int* a2, __int64 a3);
__int64
CombatLegionManager_e2fc00_alt1(__int64*, __int64*, __int64,
                                int) __asm__("CombatLegionManager_e2fc00");
__int64 game_combat_d360c0_alt1(__int64, int,
                                __int64*) __asm__("game_combat_d360c0");
float GameRoutine_110daa0_alt1(__int64, int8x16_t*, __int64, float32x4_t*,
                               __int64, double) __asm__("GameRoutine_110daa0");
float game_combat_1068a00(__int64);
void __attribute__((noreturn))
GameRoutine_d38e30_alt1() __asm__("GameRoutine_d38e30");
void game_combat_1069600(__int64, float);

__int64 game_combat_CombatUniverse_Setup(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v3;
  *(_QWORD*)(a1 + 16) = v2;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v4),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a1 = v5;
  }
  v6 = *(__int64**)(a1 + 8);
  v12_.v12[0] = GameData_2006340;
  v12_.v12[1] = a1;
  v12_.v13 = v12_.v12;
  v7 = GameData_2235760;
  v8 = GameData_2235768;
  if (GameData_2235768 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(GameData_2235768 + 16),
                              1u, memory_order_relaxed);
    v14_.v14 = v7;
    v14_.v15 = v8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v14_.v14 = GameData_2235760;
    v14_.v15 = 0;
  }
  CombatLegionManager_e2fc00_alt1(v6, &v14_.v14, (__int64)v12_.v12, 1),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v14_.v15 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v14_.v15),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v8),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = (__int64)v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v11 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64))(*v12_.v13 + v11))(v12_.v13, v9);
}

__n128 CombatUniverse_106bbf0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  bool v4;
  __int64 v5;
  bool v6;
  __n128 result;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  bool v12;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = a1[7];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v3 = (_QWORD*)a1[8];
    v4 = *(_QWORD*)(v2 + 8) == -1 || v3 == nullptr;
    if (v4 || (v5 = v3[10]) == 0 ||
        (*(_QWORD*)(v5 + 8) != -1 ? (v6 = v3[11] == 0) : (v6 = true),
         v6 || *(_QWORD*)(v2 + 8) == -1)) {
      result = std___1___shared_weak_count___release_weak(v2);
    }
    else {
      std___1___shared_weak_count___release_weak(v2),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_1068360((__int64)v3),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_BYTE*)(*(_QWORD*)(v3[11] + 8LL) + 289LL) = 0;
      CharacterAnimator_107a920(v3[46], 0x0.0p+0f),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v8 = a1[4];
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v9 = a1[5];
    if (*(_QWORD*)(v8 + 8) == -1 || v9 == 0) {
      return std___1___shared_weak_count___release_weak(v8);
    }
    v11 = *(_QWORD*)(v9 + 80);
    if (v11 == 0) {
      return std___1___shared_weak_count___release_weak(v8);
    }
    v12 = *(_QWORD*)(v11 + 8) == -1 || *(_QWORD*)(v9 + 88) == 0;
    if (v12 || *(_QWORD*)(v8 + 8) == -1) {
      return std___1___shared_weak_count___release_weak(v8);
    }
    else {
      std___1___shared_weak_count___release_weak(v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      GameRoutine_1068360(v9),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return GameRoutine_1102cc0(v9 + 496);
    }
  }
  return result;
}

__int64 CombatUniverse_106bd20(__int64 a1, unsigned int a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  __int64 v8;

  if (a2 > 3) {
    return 0;
  }
  v3 = a1 + 24LL * a2;
  result = *(_QWORD*)(v3 + 32);
  if (result != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                              memory_order_relaxed);
    v4 = *(_QWORD*)(v3 + 40);
    v5 = *(_QWORD*)(result + 8) == -1 || v4 == 0;
    if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
        (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0)
                                  : (v7 = true),
         v7)) {
      v8 = 0;
    }
    else if (*(_QWORD*)(result + 8) == -1) {
      v8 = 0;
    }
    else {
      v8 = v4;
    }
    std___1___shared_weak_count___release_weak(result);
    return v8;
  }
  return result;
}

void CombatUniverse_Destructor(_QWORD* a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  _QWORD* v19;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  long double v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  _QWORD* v30;
  __int64 v32;
  __int64 v33;
  __int64 v35;
  long double v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v42;
  __int64 v43;
  bool v44;
  __int64 v45;
  long double v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __n128 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  char v57;
  unsigned int* v58;
  unsigned int* v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __n128 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 (**v84)();
  int v85;
  __int64 (***v86)();

  v2 = a1[25];
  a1[25] = 0;
  *a1 = game_combat_CombatUniverse_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = a1[15];
  a1[15] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  if (a1[24] != 0) {
    GameRoutine_110c220();
  }
  v7 = a1[13];
  if (v7 != 0) {
    v8 = (_QWORD*)a1[14];
    if (*(_QWORD*)(v7 + 8) != -1 && v8 != nullptr) {
      v10 = v8[10];
      if (v10 == 0 ||
          ((v11 = v8[11], *(_QWORD*)(v10 + 8) != -1) ? (v12 = v11 == 0)
                                                     : (v12 = true),
           v12)) {
      LABEL_32:
        if (*(_QWORD*)(v7 + 8) != -1 && v8 != nullptr) {
          (*(void (**)(_QWORD*))(*v8 + 8LL))(v8);
        }
        goto LABEL_37;
      }
      LODWORD(a2) = *(_DWORD*)(v11 + 348);
      if (*(float*)&a2 == 1.0) {
        goto LABEL_30;
      }
      v13 = v8[11];
      *(_DWORD*)(v11 + 348) = 1065353216;
      v84 = GameData_20076d8;
      v85 = 1065353216;
      v86 = &v84;
      CharacterBuilder_1083e90(v13, &v84, a2);
      if (v86 == &v84) {
        v15 = 4;
      }
      else {
        if (v86 == nullptr) {
        LABEL_25:
          v84 = GameData_2007758;
          v86 = &v84;
          v85 = 1065353216;
          CharacterBuilder_1083e90(v11, &v84, v14);
          if (v86 == &v84) {
            v16 = 4;
            goto LABEL_29;
          }
          if (v86 != nullptr) {
            v16 = 5;
          LABEL_29:
            (*v86)[v16]();
          }
        LABEL_30:
          *(_DWORD*)(*(_QWORD*)(v11 + 304) + 12LL) = 1065353216;
          v7 = a1[13];
          if (v7 == 0) {
            goto LABEL_37;
          }
          v8 = (_QWORD*)a1[14];
          goto LABEL_32;
        }
        v15 = 5;
      }
      v14 = ((long double (*)(void*))(*v86)[v15])(v86);
      goto LABEL_25;
    }
  }
LABEL_37:
  v18 = a1[10];
  if (v18 == 0) {
    goto LABEL_65;
  }
  v19 = (_QWORD*)a1[11];
  if (*(_QWORD*)(v18 + 8) == -1 || v19 == nullptr) {
    goto LABEL_65;
  }
  v21 = v19[10];
  if (v21 != 0) {
    v22 = v19[11];
    if (*(_QWORD*)(v21 + 8) != -1 && v22 != 0) {
      LODWORD(a2) = *(_DWORD*)(v22 + 348);
      if (*(float*)&a2 == 1.0) {
        goto LABEL_58;
      }
      v24 = v19[11];
      *(_DWORD*)(v22 + 348) = 1065353216;
      v84 = GameData_20076d8;
      v85 = 1065353216;
      v86 = &v84;
      CharacterBuilder_1083e90(v24, &v84, a2);
      if (v86 == &v84) {
        v26 = 4;
      }
      else {
        if (v86 == nullptr) {
        LABEL_53:
          v84 = GameData_2007758;
          v86 = &v84;
          v85 = 1065353216;
          CharacterBuilder_1083e90(v22, &v84, v25);
          if (v86 == &v84) {
            v27 = 4;
            goto LABEL_57;
          }
          if (v86 != nullptr) {
            v27 = 5;
          LABEL_57:
            (*v86)[v27]();
          }
        LABEL_58:
          *(_DWORD*)(*(_QWORD*)(v22 + 304) + 12LL) = 1065353216;
          v18 = a1[10];
          if (v18 == 0) {
            goto LABEL_65;
          }
          v19 = (_QWORD*)a1[11];
          goto LABEL_60;
        }
        v26 = 5;
      }
      v25 = ((long double (*)(void*))(*v86)[v26])(v86);
      goto LABEL_53;
    }
  }
LABEL_60:
  if (*(_QWORD*)(v18 + 8) != -1 && v19 != nullptr) {
    (*(void (**)(_QWORD*))(*v19 + 8LL))(v19);
  }
LABEL_65:
  v29 = a1[7];
  if (v29 == 0) {
    goto LABEL_91;
  }
  v30 = (_QWORD*)a1[8];
  if (*(_QWORD*)(v29 + 8) == -1 || v30 == nullptr) {
    goto LABEL_91;
  }
  v32 = v30[10];
  if (v32 != 0) {
    v33 = v30[11];
    if (*(_QWORD*)(v32 + 8) != -1 && v33 != 0) {
      LODWORD(a2) = *(_DWORD*)(v33 + 348);
      if (*(float*)&a2 == 1.0) {
        goto LABEL_86;
      }
      v35 = v30[11];
      *(_DWORD*)(v33 + 348) = 1065353216;
      v84 = GameData_20076d8;
      v85 = 1065353216;
      v86 = &v84;
      CharacterBuilder_1083e90(v35, &v84, a2);
      if (v86 == &v84) {
        v37 = 4;
      }
      else {
        if (v86 == nullptr) {
        LABEL_81:
          v84 = GameData_2007758;
          v86 = &v84;
          v85 = 1065353216;
          CharacterBuilder_1083e90(v33, &v84, v36);
          if (v86 == &v84) {
            v38 = 4;
            goto LABEL_85;
          }
          if (v86 != nullptr) {
            v38 = 5;
          LABEL_85:
            (*v86)[v38]();
          }
        LABEL_86:
          *(_DWORD*)(*(_QWORD*)(v33 + 304) + 12LL) = 1065353216;
          v29 = a1[7];
          if (v29 == 0) {
            goto LABEL_91;
          }
          v30 = (_QWORD*)a1[8];
          goto LABEL_88;
        }
        v37 = 5;
      }
      v36 = ((long double (*)(void*))(*v86)[v37])(v86);
      goto LABEL_81;
    }
  }
LABEL_88:
  if (*(_QWORD*)(v29 + 8) != -1 && v30 != nullptr) {
    (*(void (**)(_QWORD*))(*v30 + 8LL))(v30);
  }
LABEL_91:
  v39 = a1[4];
  if (v39 == 0) {
    goto LABEL_117;
  }
  v40 = (_QWORD*)a1[5];
  if (*(_QWORD*)(v39 + 8) == -1 || v40 == nullptr) {
    goto LABEL_117;
  }
  v42 = v40[10];
  if (v42 == 0 || ((v43 = v40[11], *(_QWORD*)(v42 + 8) != -1) ? (v44 = v43 == 0)
                                                              : (v44 = true),
                   v44)) {
  LABEL_114:
    if (*(_QWORD*)(v39 + 8) != -1 && v40 != nullptr) {
      (*(void (**)(_QWORD*))(*v40 + 8LL))(v40);
    }
    goto LABEL_117;
  }
  LODWORD(a2) = *(_DWORD*)(v43 + 348);
  if (*(float*)&a2 == 1.0) {
    goto LABEL_112;
  }
  v45 = v40[11];
  *(_DWORD*)(v43 + 348) = 1065353216;
  v84 = GameData_20076d8;
  v85 = 1065353216;
  v86 = &v84;
  CharacterBuilder_1083e90(v45, &v84, a2);
  if (v86 == &v84) {
    v47 = 4;
    goto LABEL_106;
  }
  if (v86 != nullptr) {
    v47 = 5;
  LABEL_106:
    v46 = ((long double (*)(void*))(*v86)[v47])(v86);
  }
  v84 = GameData_2007758;
  v86 = &v84;
  v85 = 1065353216;
  CharacterBuilder_1083e90(v43, &v84, v46);
  if (v86 == &v84) {
    v48 = 4;
  }
  else {
    if (v86 == nullptr) {
      goto LABEL_112;
    }
    v48 = 5;
  }
  (*v86)[v48]();
LABEL_112:
  *(_DWORD*)(*(_QWORD*)(v43 + 304) + 12LL) = 1065353216;
  v39 = a1[4];
  if (v39 != 0) {
    v40 = (_QWORD*)a1[5];
    goto LABEL_114;
  }
LABEL_117:
  GameRoutine_14a1520(a1 + 27, 1);
  v49 = *(_QWORD*)(eft_g_effectSystem + 296);
  v50 = *(__int64**)(v49 - 24);
  v51 = *(__int64**)(v49 - 16);
  while (v50 != v51) {
    v52 = *v50;
    if (*v50 != 0 && *(_DWORD*)(v52 + 4) == 7) {
      while (*(_QWORD*)(v52 + 56) != v52 + 48) {
        Config_bc7660(eft_g_effectSystem);
      }
    }
    ++v50;
  }
  GameRoutine_14a4d00(&GameData_224b668);
  v54 = a1[1];
  v55 = GameData_212d448[0];
  if (v54 == 0 || (*(_BYTE*)(v54 + 112) & 0x40) == 0) {
    if ((*GameData_212d448[0] == 0 ||
         (v56 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
         (*(_WORD*)(v56 + 112) & 0x1020) == 0) &&
        game_ProcFadeView_instance_ != 0) {
      GameRoutine_809ba0(0.13333);
      v54 = a1[1];
    }
    if ((v54 == 0 || (*(_BYTE*)(v54 + 112) & 0x40) == 0) &&
        game_ProcFadeView_instance_ != 0) {
      v57 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
      *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 2;
      if (game_ProcFadeView_instance_ != 0) {
        GameRoutine_809ba0(0.13333);
        if (game_ProcFadeView_instance_ != 0) {
          *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v57;
        }
      }
    }
  }
  v58 = (unsigned int*)a1[29];
  v59 = (unsigned int*)a1[30];
  if (v58 != v59) {
    do {
      v60 = *v58++;
      Config_bc7060(eft_g_effectSystem, v60);
    } while (v58 != v59);
    v58 = (unsigned int*)a1[29];
  }
  a1[30] = v58;
  if (v58 != nullptr) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v61);
  }
  v62 = a1[28];
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
    v53 = std___1___shared_weak_count___release_weak(v62);
  }
  v63 = a1[26];
  a1[26] = 0;
  if (v63 == 0) {
    goto LABEL_166;
  }
  v64 = *(_QWORD*)(v63 + 24);
  if (v64 == 0) {
    goto LABEL_163;
  }
  v65 = *(_QWORD*)(v63 + 32);
  if (v64 == v65) {
  LABEL_160:
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v70);
    goto LABEL_163;
  }
  do {
    v66 = *(_QWORD**)(v65 - 16);
    if ((_QWORD*)(v65 - 48) == v66) {
      v67 = 32;
    }
    else {
      if (v66 == nullptr) {
        goto LABEL_157;
      }
      v67 = 40;
    }
    (*(void (**)(void*))(*v66 + v67))(v66);
  LABEL_157:
    v68 = *(_QWORD*)(v65 - 64);
    if (v68 != 0) {
      v53 = std___1___shared_weak_count___release_weak(v68);
    }
    v65 -= 80;
  } while (v65 != v64);
  v69 = *(_QWORD*)(v63 + 24);
  *(_QWORD*)(v63 + 32) = v64;
  if (v69 != 0) {
    goto LABEL_160;
  }
LABEL_163:
  GameRoutine_10a9ec0(v63, *(long double*)&v53);
  v71 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v71 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v71);
LABEL_166:
  v72 = a1[25];
  a1[25] = 0;
  if (v72 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v73);
  }
  v74 = a1[24];
  a1[24] = 0;
  if (v74 != 0) {
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v75);
  }
  GameRoutine_10d43c0(a1 + 17, *(long double*)&v53);
  v77 = a1[16];
  a1[16] = 0;
  if (v77 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 8LL))(v77);
  }
  v78 = a1[15];
  a1[15] = 0;
  if (v78 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v78 + 8LL))(v78);
  }
  v79 = a1[13];
  if (v79 != 0) {
    v76 = std___1___shared_weak_count___release_weak(v79);
  }
  v80 = a1[10];
  if (v80 != 0) {
    v76 = std___1___shared_weak_count___release_weak(v80);
  }
  v81 = a1[7];
  if (v81 != 0) {
    v76 = std___1___shared_weak_count___release_weak(v81);
  }
  v82 = a1[4];
  if (v82 != 0) {
    v76 = std___1___shared_weak_count___release_weak(v82);
  }
  v83 = a1[2];
  if (v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v83 + 16LL))(
        v83, *(long double*)&v76);
    std___1___shared_weak_count___release_weak(v83);
  }
  *a1 = GameData_2006310;
  if ((_QWORD*)*v55 == a1) {
    *v55 = 0;
    GameData_2235610 = 0;
  }
}

void game_combat_CombatUniverse_Setup_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int16 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 8);
  v4 = *(_QWORD*)(v2 + 16);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_DWORD*)(v3 + 112);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      a2 = v6;
    }
  }
  else {
    v5 = *(_DWORD*)(v3 + 112);
  }
  v7 = *(_QWORD*)(v2 + 8);
  v8 = -1;
  v14 = -1;
  v9 = *(_QWORD*)(v7 + 32);
  v10 = *(_QWORD*)(v7 + 40);
  if (v9 != v10) {
    do {
      if (*(_DWORD*)(v9 + 16) == 0) {
        v11 = (_DWORD*)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFFBLL |
                        (4LL * (*(_DWORD*)(v9 + 8) & 1)));
        ++*v11;
      }
      if (v9 == a2) {
        break;
      }
      v9 += 144;
    } while (v9 != v10);
    v8 = v14;
  }
  if ((*(_DWORD*)(a2 + 8) & 0xFFFFFFFD) != 0) {
    v8 >>= 32;
    if ((v5 & 0x40) != 0) {
      v12 = GameData_22197d8;
      if (GameData_22197d8 == 0) {
        return;
      }
    }
    else {
      v12 = GameData_21d1e38;
      if (GameData_21d1e38 == 0) {
        return;
      }
    }
    v13 = 256;
  LABEL_22:
    *(_WORD*)(v12 + 214) = v13;
    *(_DWORD*)(v12 + 220) = v8;
    return;
  }
  if ((v5 & 0x40) != 0) {
    v12 = GameData_22197d8;
    if (GameData_22197d8 == 0) {
      return;
    }
    goto LABEL_21;
  }
  v12 = GameData_21d1e38;
  if (GameData_21d1e38 != 0) {
  LABEL_21:
    v13 = 257;
    goto LABEL_22;
  }
}

__int64 game_combat_CombatUniverse_MakeLastSituationOnSkip(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  long double v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __n128 v41;
  __int64 v42;
  __int64 v43;
  __int64 result;
  struct {
    _QWORD v45[4];
    _QWORD* v46;
  } v45_;

  v1 = a1[1];
  v4 = *(_QWORD*)(v1 + 32);
  v3 = *(_QWORD*)(v1 + 40);
  v5 = *(_QWORD*)v1;
  v6 = *(_QWORD*)(v1 + 8);
  *(_QWORD*)(v1 + 64) = 0;
  v18 = v3 == v4;
  v7 = 954437177 * ((unsigned __int64)(v3 - v4) >> 4) - 1;
  LODWORD(v3) = *(_DWORD*)(v1 + 112) | 0x10000;
  *(_DWORD*)(v1 + 56) = v7;
  *(_DWORD*)(v1 + 112) = v3;
  if (v18) {
    v8 = &GameData_2235e30;
  }
  else {
    v8 = (__int64*)(v4 + 144LL * (v7 & (unsigned int)~(v7 >> 31)));
  }
  *(_BYTE*)(v1 + 24) = 1;
  while (v5 != v6) {
    if (*(_DWORD*)v5 != 0) {
      v9 = *(_QWORD*)(v5 + 16);
      if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
        goto LABEL_5;
      }
      v10 = *(_QWORD*)(v5 + 64);
      if (v10 == 0) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(v10, v8);
      if ((*(_DWORD*)v5 & 0x80000000) != 0) {
      LABEL_5:
        *(_DWORD*)v5 = 0;
      }
    }
    v5 += 80;
  }
  *(_BYTE*)(v1 + 24) = 0;
  GameRoutine_1090be0(v1);
  v11 = *(_QWORD*)(v1 + 40);
  if (*(_QWORD*)(v1 + 32) == v11) {
    v12 = &GameData_2235e30;
  }
  else {
    v12 = (__int64*)(v11 - 144);
  }
  v13 = GameData_212d448[0];
  if ((*((_BYTE*)v12 + 5) & 4) == 0) {
    if (*GameData_212d448[0] != 0 && (v14 = *((_DWORD*)v12 + 3)) <= 3) {
      v16 = *GameData_212d448[0] + 24LL * v14;
      v15 = *(_QWORD*)(v16 + 32);
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                  memory_order_relaxed);
        v17 = *(_QWORD*)(v16 + 40);
        v18 = *(_QWORD*)(v15 + 8) == -1 || v17 == 0;
        if (v18 || (v19 = *(_QWORD*)(v17 + 80)) == 0 ||
            (*(_QWORD*)(v19 + 8) != -1 ? (v20 = *(_QWORD*)(v17 + 88) == 0)
                                       : (v20 = true),
             v20)) {
          v21 = 0;
        }
        else if (*(_QWORD*)(v15 + 8) == -1) {
          v21 = 0;
        }
        else {
          v21 = v17;
        }
        std___1___shared_weak_count___release_weak(v15);
        v15 = v21;
      }
    }
    else {
      v15 = 0;
    }
    game_80e8e0(v15);
  }
  game_10d43c0((__int64)(a1 + 17));
  GameRoutine_106dcd0(a1, 0, 0);
  v22 = *(_QWORD*)(eft_g_effectSystem + 296);
  v23 = *(__int64**)(v22 - 24);
  v24 = *(__int64**)(v22 - 16);
  while (v23 != v24) {
    v25 = *v23;
    if (*v23 != 0 && *(_DWORD*)(v25 + 4) == 7) {
      while (1) {
        v26 = *(_QWORD*)(v25 + 56);
        if (v26 == v25 + 48) {
          break;
        }
        Config_bc7840(eft_g_effectSystem, v26);
      }
      while (1) {
        v27 = *(_QWORD*)(v25 + 72);
        if (v27 == v25 + 64) {
          break;
        }
        Config_bc5620(eft_g_effectSystem, v27 - 136);
      }
    }
    ++v23;
  }
  GameRoutine_14a4d00_alt1((__int64**)&GameData_224b668);
  v45_.v46 = v45_.v45;
  v45_.v45[0] = GameData_21320e8 + 2;
  GameRoutine_18c8060((__int64)v45_.v45);
  if (v45_.v46 == v45_.v45) {
    v29 = 32;
    goto LABEL_48;
  }
  if (v45_.v46 != nullptr) {
    v29 = 40;
  LABEL_48:
    (*(void (**)(__int64))(*v45_.v46 + v29))((__int64)v45_.v46);
  }
  if (*v13 != 0) {
    v30 = *(_QWORD*)(*v13 + 128);
    if (v30 != 0) {
      *(_QWORD*)(v30 + 472) = 0;
      *(_DWORD*)(v30 + 464) = 0;
    }
  }
  game_combat_106e570(a1);
  v45_.v45[0] = GameData_200bd20;
  v45_.v46 = v45_.v45;
  *(__n128*)&v32 = GameRoutine_106ca40(a1, (__int64)v45_.v45);
  if (v45_.v46 == v45_.v45) {
    v33 = 32;
  }
  else {
    if (v45_.v46 == nullptr) {
      goto LABEL_57;
    }
    v33 = 40;
  }
  (*(void (**)(void*))(*v45_.v46 + v33))(v45_.v46);
LABEL_57:
  if ((*v13 == 0 || ((v34 = *(_QWORD*)(*v13 + 8)) == 0 ||
                     (*(_WORD*)(v34 + 112) & 0x8040) == 0 &&
                         (*(_BYTE*)(v34 + 115) & 0x10) == 0) &&
                        (*(_BYTE*)(v34 + 116) & 1) == 0) &&
      (GameRoutine_10f1e60() & 1) != 0) {
    v35 = a1[7];
    if (v35 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                memory_order_relaxed);
      v36 = (_QWORD*)a1[8];
      if (*(_QWORD*)(v35 + 8) == -1 || v36 == nullptr || (v37 = v36[10]) == 0 ||
          *(_QWORD*)(v37 + 8) == -1 || v36[11] == 0 ||
          *(_QWORD*)(v35 + 8) == -1) {
        std___1___shared_weak_count___release_weak(v35);
      }
      else {
        std___1___shared_weak_count___release_weak(v35);
        *(_BYTE*)(*(_QWORD*)(v36[11] + 8LL) + 289LL) = 0;
        CharacterAnimator_107a920(v36[46], 0x0.0p+0f);
      }
    }
    CombatUniverse_10ddb30(a1);
  }
  v38 = a1[4];
  if (v38 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 16), 1u,
                              memory_order_relaxed);
    v39 = a1[5];
    if (*(_QWORD*)(v38 + 8) == -1 || v39 == 0 ||
        (v40 = *(_QWORD*)(v39 + 80)) == 0 || *(_QWORD*)(v40 + 8) == -1 ||
        *(_QWORD*)(v39 + 88) == 0 || *(_QWORD*)(v38 + 8) == -1) {
      std___1___shared_weak_count___release_weak(v38);
    }
    else {
      v41 = std___1___shared_weak_count___release_weak(v38);
      GameRoutine_1102cc0_alt1(v39 + 496, v41);
    }
  }
  v42 = *v13;
  *(_WORD*)(*(_QWORD*)(*v13 + 128) + 192LL) = 257;
  v43 = *(_QWORD*)(v42 + 8);
  if ((v43 == 0 || (*(_BYTE*)(v43 + 113) & 0x80) == 0) &&
      (game_10f20b0() & 1) == 0 &&
      ((GameRoutine_10f1e60() & 1) == 0 || (game_10f21c0("Win", 0) & 1) == 0)) {
    GameRoutine_10f15b0();
  }
  result = a1[15];
  if (result != 0) {
    return CombatLegionManager_e2ce80(result);
  }
  return result;
}

void CombatUniverse_10ddb30(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  bool v7;
  _QWORD* v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  double v34;
  unsigned int v38;
  __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  float v44;
  float v45;
  float32x4_t v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  float32x4_t v51;
  float v52;
  bool v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  int8x16_t v63;
  float32x4_t* v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  float32x4_t v69;
  __int64 v70;
  __int64 v71;
  _QWORD* v72;
  _DWORD* v73;
  __int128 v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float32x4_t v78;
  int8x16_t v79;

  v2 = a1[4];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v3 = a1[5];
    if (*(_QWORD*)(v2 + 8) == -1 || v3 == 0) {
      goto LABEL_32;
    }
    v5 = *(_QWORD*)(v3 + 80);
    if (v5 == 0) {
      goto LABEL_32;
    }
    v6 = *(_QWORD*)(v3 + 88);
    v7 = *(_QWORD*)(v5 + 8) == -1 || v6 == 0;
    if (v7 || *(_QWORD*)(v2 + 8) == -1) {
      goto LABEL_32;
    }
    v8 = a1;
    std___1___shared_weak_count___release_weak_alt1(v2);
    v2 = v8[7];
    if (v2 == 0) {
      return;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v9 = v8[8];
    v10 = *(_QWORD*)(v2 + 8) == -1 || v9 == 0;
    if (v10 || (v11 = *(_QWORD*)(v9 + 80)) == 0 ||
        ((v12 = *(_QWORD*)(v9 + 88), *(_QWORD*)(v11 + 8) != -1)
             ? (v13 = v12 == 0)
             : (v13 = true),
         v13 || *(_QWORD*)(v2 + 8) == -1)) {
    LABEL_32:
      std___1___shared_weak_count___release_weak_alt1(v2);
      return;
    }
    std___1___shared_weak_count___release_weak_alt1(v2);
    v14 = v8[4];
    v15 = v8;
    if (v14 != 0) {
      v16 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                memory_order_relaxed);
      v17 = v8[5];
      if (*(_QWORD*)(v14 + 8) != -1 && v17 != 0) {
        v18 = *(_QWORD*)(v17 + 80);
        if (v18 != 0) {
          v16 = 0;
          if (*(_QWORD*)(v18 + 8) != -1 && *(_QWORD*)(v17 + 88) != 0) {
            if (*(_QWORD*)(v14 + 8) == -1) {
              v16 = 0;
            }
            else {
              v16 = v8[5];
            }
          }
        }
        else {
          v16 = 0;
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v14);
      v15 = v8;
    }
    else {
      v16 = 0;
    }
    v19 = v15[7];
    if (v19 != 0) {
      v20 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                memory_order_relaxed);
      v21 = v15[8];
      if (*(_QWORD*)(v19 + 8) != -1 && v21 != 0) {
        v22 = *(_QWORD*)(v21 + 80);
        if (v22 != 0) {
          v20 = 0;
          if (*(_QWORD*)(v22 + 8) != -1 && *(_QWORD*)(v21 + 88) != 0) {
            if (*(_QWORD*)(v19 + 8) == -1) {
              v20 = 0;
            }
            else {
              v20 = v21;
            }
          }
        }
        else {
          v20 = 0;
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v19);
    }
    else {
      v20 = 0;
    }
    v23 = *(_QWORD*)(v16 + 80);
    v24 = GameData_220f8c8;
    if (v23 != 0 && *(_QWORD*)(v23 + 8) != -1 &&
        (v25 = *(_QWORD*)(v16 + 88)) != 0) {
      v26 = *(_QWORD*)(v25 + 400);
      LANES128(v79).n128_u64[0] = *(_QWORD*)(v25 + 392);
      LANES128(v79).n128_u64[1] = v26;
      if (v26 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    else {
      v26 = 0;
      v79 = (__typeof__(v79)){0};
    }
    v27 = *(_QWORD*)(v24 + 8);
    v28 = *(_QWORD*)(v24 + 16) - v27;
    if (v28 != 0) {
      v29 = (int*)(v27 + 24);
      v30 = 0;
      v31 = 0x4EC4EC4EC4EC4EC5LL * (v28 >> 3);
      while (1) {
        v32 = *v29;
        v29 += 26;
        if (v32 == 86972) {
          break;
        }
        if (v31 == ++v30) {
          goto LABEL_58;
        }
      }
    }
    else {
    LABEL_58:
      LODWORD(v30) = -1;
    }
    v33 = game_combat_d360c0_alt1(v24, v30, (__int64*)&v79);
    if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v38 = v33;
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak_alt1(v26);
      v33 = v38;
    }
    if ((v33 & 0x80000000) == 0) {
      v39 = *(_QWORD*)(GameData_220f8c8 + 8);
      if (0x4EC4EC4EC4EC4EC5LL *
              ((*(_QWORD*)(GameData_220f8c8 + 16) - v39) >> 3) <=
          (unsigned __int64)v33) {
        GameRoutine_d38e30_alt1();
      }
      if (v39 != 0) {
        v40 = (_QWORD*)v8[16];
        v41 = v40[27];
        LANES128(v79).n128_u64[0] = v40[26];
        LANES128(v79).n128_u64[1] = v41;
        v42 = v40[29];
        LODWORD(v34) = LANES128(v79).n128_u32[1];
        v43 = v40[30] & 0xFFFFFFFFFFLL;
        LANES128(v78).n128_u32[0] = v40[28];
        LANES128(v78).n128_u64[1] = v42;
        LANES128(v78).n128_u32[1] = LANES128(v79).n128_u32[1];
        v44 = GameRoutine_110daa0_alt1(v39 + 104LL * v33, &v79, v43, &v78, v43,
                                       v34);
        if (v44 != 0x0.0p+0f) {
          v45 = v44;
          game_combat_1069600(v16, v44);
          v47 = *(_QWORD*)(v16 + 88);
          if (*(_DWORD*)(v47 + 384) != 0) {
            goto LABEL_78;
          }
          if (GameData_21d92e0 != 2) {
            goto LABEL_77;
          }
          v48 = *(_QWORD*)(v47 + 392);
          v49 = *(_QWORD*)(v47 + 400);
          if (v49 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                      memory_order_relaxed);
            v50 = *(_DWORD*)(v48 + 11784);
            if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
              std___1___shared_weak_count___release_weak_alt1(v49);
            }
          }
          else {
            v50 = *(_DWORD*)(v48 + 11784);
          }
          if (v50 > 0x1A) {
            goto LABEL_77;
          }
          if (((1 << v50) & 0x410C) != 0) {
            *(_DWORD*)(*(_QWORD*)(v47 + 104) + 212LL) = 0;
            goto LABEL_78;
          }
          if (((1 << v50) & 0x5000080) != 0) {
            *(_DWORD*)(*(_QWORD*)(v47 + 104) + 212LL) = 0;
          }
          else {
          LABEL_77:
            *(_DWORD*)(v47 + 384) = 1;
          }
        LABEL_78:
          v51 = vsubq_f32(v78, v79);
          v52 = vmuls_lane_f32(LANES128(v51).n128_f32[2], v51, 2) +
                (float)(LANES128(v51).n128_f32[0] * LANES128(v51).n128_f32[0]);
          LANES128(v46).n128_u32[0] = 0x1.0000000000000p+0f;
          v53 = v52 < 0x1.0000000000000p-23f;
          v54 = 0x1.0000000000000p+0f / sqrtf(v52);
          v55 = LANES128(v51).n128_f32[0] * v54;
          v56 = LANES128(v51).n128_f32[2] * v54;
          if (v53) {
            v55 = 0x0.0p+0f;
            v56 = 0x1.0000000000000p+0f;
          }
          v57 = v45 + (float)(roundf(v45 * 0x1.45f3060000000p-3f) *
                              -0x1.921fb60000000p+2f);
          if (v57 <= 0x1.921fb60000000p+0f) {
            if (v57 >= -0x1.921fb60000000p+0f) {
            LABEL_85:
              v59 = v57 * v57;
              v60 =
                  v57 *
                  (float)((float)((float)-(
                                      float)(*(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c190) -
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
                                                                                                        (float)(v57 *
                                                                                                                v57))) *
                                                                                        (float)(v57 *
                                                                                                v57))) *
                                                                     (float)(v57 *
                                                                             v57))) *
                                                     (float)(v57 * v57))) *
                                  (float)(v57 * v57)) +
                          0x1.0000000000000p+0f);
              LANES128(v46).n128_f32[0] =
                  LANES128(v46).n128_f32[0] *
                  (float)((float)((float)-(
                                      float)(*(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c188) -
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
                                                                                                        v59)) *
                                                                                        v59)) *
                                                                     v59)) *
                                                     v59)) *
                                  v59) +
                          0x1.0000000000000p+0f);
              v61 = (float)(PSEUDO_UNFUSED(v56 * v60)) +
                    (float)(v55 * LANES128(v46).n128_f32[0]);
              v62 = (float)(PSEUDO_UNFUSED(v56 * LANES128(v46).n128_f32[0])) -
                    (float)(v55 * v60);
              LANES128(v46).n128_f32[0] = v61 * 0x1.4000000000000p+3f;
              LANES128(v46).n128_f32[2] = v62 * 0x1.4000000000000p+3f;
              v63 = vaddq_f32(v79, v46);
              *(int32x2_t*)(v20 + 40) = vzip1_s32(
                  COERCE_AS(int32x2_t, LANES128(v63).n128_u64[0]),
                  COERCE_AS(int32x2_t,
                            LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]));
              GameRoutine_1068b40(v20, 1);
              game_combat_1068a00(v20);
              v65 = *(float32x4_t**)(*(_QWORD*)(v20 + 88) + 408LL);
              v66 = *(float32x4_t*)(v20 + 112);
              v67 = vsubq_f32(v65[19], v66);
              v68 = vmulq_f32(v67, v67);
              LANES128(v68).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v68, v68, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
                      .n64_f32[0] != 0x0.0p+0f) {
                LANES128(v65[19]).n128_u32[0] = LANES128(v66).n128_u32[0];
                LANES128(v65[19]).n128_u32[1] = *(_DWORD*)(v20 + 116);
                v69 = v65[19];
                LANES128(v69).n128_u32[2] = *(_DWORD*)(v20 + 120);
                LANES128(v65[18]).n128_u32[2] |= 1u;
                LANES128(v69).n128_u64[1] = LANES128(v69).n128_u32[2];
                v65[19] = v69;
              }
              v70 = *(_QWORD*)(v20 + 392);
              v71 = *(_QWORD*)(v70 + 80);
              if (v71 != 0 && *(_QWORD*)(v71 + 8) != -1) {
                v72 = *(_QWORD**)(v70 + 88);
                if (v72 != nullptr) {
                  v73 = (_DWORD*)v72[1];
                  *(_DWORD*)(v20 + 432) = v73[76];
                  *(_DWORD*)(v20 + 436) = v73[77];
                  v74 = *(_OWORD*)(v20 + 432);
                  *((_QWORD*)&v74 + 1) = (unsigned int)v73[78];
                  *(_OWORD*)(v20 + 432) = v74;
                  v76 = v72[49];
                  v75 = v72[50];
                  if (v75 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v75 + 8), 1u,
                        memory_order_relaxed);
                    if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
                      std___1___shared_weak_count___release_weak_alt1(v75);
                    }
                  }
                  v77 = (float)(PSEUDO_UNFUSED(
                            *(float*)(*(_QWORD*)(v76 + 11792) + 36LL) *
                            *(float*)(v76 + 32))) +
                        *(float*)(v20 + 436);
                  *(float*)(v20 + 436) = v77;
                  *(float*)(v20 + 448) = v77;
                }
              }
              return;
            }
            v58 = -0x1.921fb60000000p+1f;
          }
          else {
            v58 = 0x1.921fb60000000p+1f;
          }
          v57 = v58 - v57;
          LANES128(v46).n128_u32[0] = -0x1.0000000000000p+0f;
          goto LABEL_85;
        }
      }
    }
  }
}

void game_combat_CombatUniverse_MakeLastSituationOnSkip_lambda0_Invoke(
    __int64 a1, int* a2, __int64 a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  v3 = *(_QWORD**)a3;
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a3 + 88LL) + 120LL);
  v6 = *(_QWORD*)(v5 + 248);
  v7 = *(_QWORD*)(v5 + 256);
  *(_BYTE*)(v5 + 272) = 1;
  while (v6 != v7) {
    if (*(_DWORD*)v6 != 0) {
      v8 = *(_QWORD*)(v6 + 16);
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_2;
      }
      v20_.v20 = 0;
      v9 = *(_QWORD*)(v6 + 64);
      if (v9 == 0) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v20_.v20);
      if ((*(_DWORD*)v6 & 0x80000000) != 0) {
      LABEL_2:
        *(_DWORD*)v6 = 0;
      }
    }
    v6 += 80;
  }
  *(_BYTE*)(v5 + 272) = 0;
  GameRoutine_10685c0_alt1(v3);
  v10 = (_QWORD*)v3[11];
  v11 = *(_DWORD*)(v10[9] + 120LL);
  if (v11 > -972548317) {
    if (v11 == -972548316) {
      v12 = 4217340898LL;
    }
    else {
      if (v11 != -93581017) {
        return;
      }
      v12 = 1400556095;
    }
  }
  else if (v11 == -1072101930) {
    v12 = 1131178864;
  }
  else {
    if (v11 != -1070254888) {
      return;
    }
    v12 = 1188437166;
  }
  v13 = v10[49];
  v14 = v10[50];
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
    v15 = *(_QWORD*)(v13 + 11608);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v16 = v15;
      v17 = v12;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt1(v14);
      v15 = v16;
      v12 = v17;
    }
  }
  else {
    v15 = *(_QWORD*)(v13 + 11608);
  }
  if ((CharacterModel_1070c00_alt1(v15, v12)[12] & 1) != 0) {
    v18 = *(_QWORD*)(v3[11] + 128LL);
    v20_.v20 = 0;
    v20_.v21 = 0;
    game_character_CharacterSelfie_Start(v18, v4 == 1, &v20_.v20);
    v19 = v20_.v21;
    if (v20_.v21 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt1(v19);
    }
  }
}

#pragma GCC visibility pop
