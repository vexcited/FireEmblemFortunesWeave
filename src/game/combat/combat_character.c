#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112ad00(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212d448[9];
__int64 game_combat_CombatCharacter_CombatCharacter_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2);
void game_combat_CombatCharacter_CombatCharacter_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2);
_QWORD* GameRoutine_1105d80(_QWORD* result, char, float*);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 GameRoutine_112ad00_alt1(_QWORD*) __asm__("GameRoutine_112ad00");
__n128 ActionStateMachine_Destructor(_QWORD*);
extern __int64 (*GameData_2007458[])();
extern __int64 (*GameData_20074d8[])();
extern __int64 (*game_combat_CombatCharacterLookAt_vtable[])();
extern __int64 (*game_combat_CombatCharacterMove_vtable[])();
extern __int64 (*game_combat_CombatCharacterSubsystem_vtable[])();
extern __int64 (*game_combat_CombatCharacter_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
void CharacterIllusion_11036e0(__int64);
__n128 CombatCharacter_Destructor(_QWORD* a1);

__n128 CombatCharacter_Destructor(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  __n128 result;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 (**v33)();
    char v34;
    char gap9_[23];
    __int64 (***v35)();
  } v33_;

  *a1 = game_combat_CombatCharacter_vtable;
  v2 = a1[10];
  v3 = GameData_212d448[0];
  if (v2 == 0) {
    goto LABEL_23;
  }
  v4 = (_QWORD*)a1[11];
  if (*(_QWORD*)(v2 + 8) == -1 || v4 == nullptr) {
    goto LABEL_23;
  }
  if (*GameData_212d448[0] == 0 ||
      (v6 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
      (*(_BYTE*)(v6 + 112) & 0x40) == 0) {
    *(_DWORD*)(v4[14] + 160LL) = 0;
  }
  GameRoutine_1105d80(v4, 0, nullptr);
  v33_.v33 = GameData_2007458;
  v33_.v35 = &v33_.v33;
  v33_.v34 = 1;
  CharacterBuilder_1083e90(v4, (__int64)&v33_.v33);
  if (v33_.v35 == &v33_.v33) {
    v7 = 4;
  }
  else {
    if (v33_.v35 == nullptr) {
      goto LABEL_15;
    }
    v7 = 5;
  }
  ((__int64 (*)(__int64))(*v33_.v35)[v7])((__int64)v33_.v35);
LABEL_15:
  v33_.v33 = GameData_20074d8;
  v33_.v35 = &v33_.v33;
  v33_.v34 = 1;
  CharacterBuilder_1083e90(v4, (__int64)&v33_.v33);
  if (v33_.v35 == &v33_.v33) {
    v8 = 4;
    goto LABEL_19;
  }
  if (v33_.v35 != nullptr) {
    v8 = 5;
  LABEL_19:
    ((__int64 (*)(__int64))(*v33_.v35)[v8])((__int64)v33_.v35);
  }
  CharacterIllusion_11036e0(a1[11]);
  v9 = GameRoutine_112ad00_alt1(v4);
  if (v9 != 0 && *(_BYTE*)(v9 + 16) != 0) {
    v10 = *(_BYTE*)(v9 + 17);
    *(_BYTE*)(v9 + 16) = 0;
    *(_BYTE*)(v9 + 17) = v10 | 2;
    *(_BYTE*)(v9 + 18) |= 2u;
    *(_BYTE*)(v9 + 19) |= 2u;
    *(_BYTE*)(v9 + 20) |= 2u;
    v11 = *(_BYTE**)(v9 + 8);
    v11[632] = 0;
    v11[664] = 0;
    v11[696] = 0;
    v11[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 72LL))(v9);
  }
LABEL_23:
  v12 = a1[112];
  a1[109] = game_combat_CombatCharacterSubsystem_vtable;
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = a1[103];
  a1[100] = game_combat_CombatCharacterSubsystem_vtable;
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = a1[97];
  a1[94] = game_combat_CombatCharacterSubsystem_vtable;
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = (_QWORD*)a1[90];
  a1[76] = game_combat_CombatCharacterMove_vtable;
  if (v15 == a1 + 86) {
    v16 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_34;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
LABEL_34:
  v17 = a1[79];
  a1[76] = game_combat_CombatCharacterSubsystem_vtable;
  if (v17 != 0) {
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = a1[73];
  a1[70] = game_combat_CombatCharacterSubsystem_vtable;
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak(v18);
  }
  a1[62] = game_combat_CombatCharacterLookAt_vtable;
  if (*v3 == 0 || (v19 = *(_QWORD*)(*v3 + 8)) == 0 ||
      (*(_BYTE*)(v19 + 112) & 0x40) == 0) {
    v20 = a1[63];
    v21 = *(_QWORD*)(v20 + 80);
    if (v21 != 0) {
      v22 = *(_QWORD*)(v20 + 88);
      if (*(_QWORD*)(v21 + 8) != -1 && v22 != 0) {
        *(_DWORD*)(*(_QWORD*)(v22 + 112) + 160LL) = 0;
      }
    }
  }
  v24 = a1[65];
  a1[62] = game_combat_CombatCharacterSubsystem_vtable;
  if (v24 != 0) {
    std___1___shared_weak_count___release_weak(v24);
  }
  v25 = a1[51];
  a1[48] = game_combat_CombatCharacterSubsystem_vtable;
  if (v25 != 0) {
    std___1___shared_weak_count___release_weak(v25);
  }
  ActionStateMachine_Destructor(a1 + 35);
  result = ActionStateMachine_Destructor(a1 + 24);
  v27 = a1[22];
  if (v27 != 0) {
    result = std___1___shared_weak_count___release_weak(v27);
  }
  v28 = a1[20];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v28 + 16LL))(
        v28, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak(v28);
  }
  v29 = a1[17];
  if (v29 != 0) {
    result = std___1___shared_weak_count___release_weak(v29);
  }
  v30 = a1[10];
  if (v30 != 0) {
    result = std___1___shared_weak_count___release_weak(v30);
  }
  v31 = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (v31 != 0) {
    result = std___1___shared_weak_count___release_weak(v31);
  }
  v32 = a1[2];
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v32 + 16LL))(
        v32, *(long double*)&result);
    return std___1___shared_weak_count___release_weak(v32);
  }
  return result;
}

__int64 game_combat_CombatCharacter_CombatCharacter_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 result;
  _QWORD* v10;
  _BYTE* v11;
  _BYTE* v12;
  bool v13;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *GameData_212d448[0];
  if (*GameData_212d448[0] == 0 || (v5 = *(_QWORD*)(v4 + 8)) == 0 ||
      (*(_BYTE*)(v5 + 112) & 8) == 0) {
    *(_DWORD*)(v2 + 536) = 1;
    v5 = *(_QWORD*)(v4 + 8);
  }
  if ((*(_WORD*)(v5 + 112) & 0x8040) == 0) {
    v6 = *(_QWORD*)(v3 + 72);
    v7 = v5 + 96LL * *(int*)(v2 + 96);
    *(_BYTE*)(v6 + 88) = (3 * *(_DWORD*)(v7 + 280) < *(_DWORD*)(v7 + 276)) |
                         *(_BYTE*)(v7 + 249) & 1;
    v8 = *(_DWORD*)(v6 + 112);
    switch (v8) {
    case 105782307:
      goto LABEL_9;
    case 0:
      goto LABEL_11;
    case -589947500:
    LABEL_9:
      *(_BYTE*)(v6 + 88) = 1;
      break;
    default:
      break;
    }
    *(_DWORD*)(v6 + 112) = 0;
  }
LABEL_11:
  if (*(_BYTE*)(*(_QWORD*)(v4 + 8) + 96LL * *(int*)(v2 + 96) + 250) == 1) {
    *(_DWORD*)(v3 + 340) |= 0x800000u;
  }
  result = GameRoutine_112ad00(v3);
  if (result != 0 && (*(_BYTE*)(result + 16) & 1) == 0) {
    v10 = (_QWORD*)result;
    *(_BYTE*)(result + 16) = 1;
    *(_BYTE*)(result + 17) &= ~2u;
    *(_BYTE*)(result + 18) &= ~2u;
    *(_BYTE*)(result + 19) &= ~2u;
    *(_BYTE*)(result + 20) &= ~2u;
    v11 = *(_BYTE**)(result + 8);
    v11[632] = 0;
    v11[664] = 0;
    v11[696] = 0;
    v11[728] = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 64LL))(result);
    v12 = (_BYTE*)v10[1];
    v13 = v12[300] == 3 && v12[301] == 3;
    if (v13 || v12[302] == 1) {
      return (*(__int64 (**)(_QWORD*))(*v10 + 72LL))(v10);
    }
  }
  return result;
}

void game_combat_CombatCharacter_CombatCharacter_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  bool v12;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(*GameData_212d448[0] + 8);
  v4 = v3 + 96LL * *(int*)(v2 + 96);
  v5 = (3 * *(_DWORD*)(v4 + 280) < *(_DWORD*)(v4 + 276)) | *(_BYTE*)(v4 + 249);
  if ((*(_WORD*)(v3 + 112) & 0x8040) == 0) {
    v6 = a2[3];
    if (v6 <= 3) {
      v7 = *GameData_212d448[0] + 24LL * v6;
      v8 = *(_QWORD*)(v7 + 32);
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v9 = *(_QWORD*)(v7 + 40);
        v10 = *(_QWORD*)(v8 + 8) == -1 || v9 == 0;
        if (v10 || (v11 = *(_QWORD*)(v9 + 80)) == 0 ||
            (*(_QWORD*)(v11 + 8) != -1 ? (v12 = *(_QWORD*)(v9 + 88) == 0)
                                       : (v12 = true),
             v12 || *(_QWORD*)(v8 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v8);
        }
        else {
          std___1___shared_weak_count___release_weak(v8);
          if (*(_DWORD*)(v2 + 96) == *(_DWORD*)(v9 + 96)) {
            if ((~*a2 & 0x82) != 0) {
              v5 |= (~*a2 & 0x102) == 0;
            }
            else {
              v5 = 0;
            }
          }
        }
      }
    }
  }
  *(_BYTE*)(*(_QWORD*)(v2 + 368) + 88LL) = v5 & 1;
}

#pragma GCC visibility pop
