#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079e10(__int64);
void GameRoutine_10a6ac0(__int64);
void ActionRazeBlaze_Unknown6(__int64 a1);
__attribute__((swiftcall)) void
CombatCharacterSound_1091ac0(PSEUDO_X8, __int64 result, __int64, float);
__int64 CharacterModel_1071880(__int64, int, long double);
__n128 game_character_CharacterSelfie_Start(__int64, char, __int64*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212d448[9];
extern __int64 GameData_212d270;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
void GameRoutine_10de8e0(unsigned int*);
void ActionRazeBlaze_Unknown5(__int64 a1, __n128 a2);

void ActionRazeBlaze_Unknown5(__int64 a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  long double v16;
  __int64 v17;
  long double v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int* v24;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 80);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v2 + 88);
    if (*(_QWORD*)(v3 + 8) != -1 && v4 != 0) {
      *(_DWORD*)(v2 + 648) = 0;
      *(_DWORD*)(v2 + 672) = 0;
      v7 = *(_DWORD*)(a1 + 24);
      v8 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL);
      v9 = *(_QWORD*)(v8 + 40);
      v10 = *(_QWORD*)(v9 + 392);
      v11 = *(_QWORD*)(v9 + 400);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        v12 = *(_QWORD*)(v10 + 11608);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v13 = v12;
          v14 = v7;
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          a2 = std___1___shared_weak_count___release_weak(v11);
          v12 = v13;
          v7 = v14;
        }
      }
      else {
        v12 = *(_QWORD*)(v10 + 11608);
      }
      v15 = CharacterModel_1071880(v12, v7, *(long double*)&a2);
      *(_QWORD*)&v16 = 0;
      CharacterAnimator_1079580(v8, v15, v16, -0x1.0000000000000p+0f,
                                0x1.0000000000000p+0f);
      v17 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 504LL) + 88LL) +
                     112LL);
      *(_DWORD*)(v17 + 148) = 0;
      v25_.v25 = 0;
      v25_.v26 = 0;
      *(_DWORD*)(v17 + 152) = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 508LL);
      *(__n128*)&v18 = game_character_CharacterSelfie_Start(
          *(_QWORD*)(v4 + 128),
          (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) & 0xFFFFFFFD) != 0, &v25_.v25);
      v19 = v25_.v26;
      if (v25_.v26 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v19 + 16LL))(v19, v18);
        std___1___shared_weak_count___release_weak(v19);
      }
      *(_BYTE*)(*(_QWORD*)(v4 + 104) + 76LL) = 1;
      v20 = GameData_212d448[0];
      v21 = *GameData_212d448[0];
      if ((unsigned int)(*(_DWORD*)(a1 + 24) + 906281409) <= 2) {
        v22 = *(_QWORD*)(*(_QWORD*)(v21 + 8) + 728LL);
        if (v22 != 0) {
          v23 = *(_QWORD*)(*(_QWORD*)(v22 + 8) + 848LL);
          if (v23 != 0) {
            CombatCharacterSound_1091ac0((void*)((__int64)&v25_.v25),
                                         *(_QWORD*)(a1 + 8) + 872LL, v23,
                                         0x1.0000000000000p+0f);
            v21 = *v20;
          }
        }
      }
      v24 = *(unsigned int**)(*(_QWORD*)(v21 + 8) + 728LL);
      if (v24 != nullptr) {
        GameRoutine_10de8e0(v24);
      }
      if (*(_DWORD*)(a1 + 24) == -1152263229) {
        CombatCharacterSound_1091ac0(
            (void*)((__int64)&v25_.v25), *(_QWORD*)(a1 + 8) + 872LL,
            (__int64)"OverBlaze", 0x1.0000000000000p+0f);
      }
    }
  }
}

void ActionRazeBlaze_Unknown6(__int64 a1)
{
  int v2;
  int v4;

  if ((GameRoutine_1079e10(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL)) & 1) != 0) {
    v2 = *(_DWORD*)(a1 + 16);
    if (v2 != 1 && v2 != 3) {
      if (v2 == 2) {
        v4 = 3;
      }
      else {
        v4 = 1;
      }
      *(_DWORD*)(a1 + 16) = v4;
    }
    GameRoutine_10a6ac0(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL) + 128LL));
  }
}

#pragma GCC visibility pop
