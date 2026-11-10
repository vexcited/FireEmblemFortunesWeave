#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_112ad00(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212d448[9];
__int64 game_combat_CombatCharacter_CombatCharacter_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2);
void game_combat_CombatCharacter_CombatCharacter_lambda1_Invoke(__int64 a1,
                                                                _DWORD* a2);

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
