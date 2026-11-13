#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ec7b0;
__int64 ActionDamageWait_Unknown5(__int64 result);
__int64 CharacterAnimator_1079e10(__int64);
__int64 CharacterSelfie_10a6b90();
__int64 ActionDamageWait_Unknown6(__int64 a1);
__attribute__((swiftcall)) void game_combat_10690a0(PSEUDO_X8, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
void ActionDamageWait_Unknown7(__int64 a1);

__int64 ActionDamageWait_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;
  int v4;
  int v5;

  if ((GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
       (*(_BYTE*)(v1 + 113) & 0x80) == 0) &&
      (*(_DWORD*)(*(_QWORD*)(result + 24) + 4LL) & 0x40000100) == 0) {
    v5 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 368LL) + 120LL);
    if (v5 <= -77626399) {
      if (v5 != -972548316 && v5 != -93581017) {
        return result;
      }
    }
    else if (v5 != -77626398 && v5 != 1715476756 && v5 != 1400556095) {
      return result;
    }
    *(_DWORD*)(result + 32) = 1077936128;
    return result;
  }
  v2 = *(_DWORD*)(result + 16);
  if (v2 != 1 && v2 != 3) {
    if (v2 == 2) {
      v4 = 3;
    }
    else {
      v4 = 1;
    }
    *(_DWORD*)(result + 16) = v4;
  }
  return result;
}

__int64 ActionDamageWait_Unknown6(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 result;
  int v8;
  int v10;
  float v11;
  int v12;

  v1 = *(float*)(a1 + 32);
  v2 = *(_QWORD**)(a1 + 8);
  if (v1 <= 0x0.0p+0f) {
    result = CharacterAnimator_1079e10(v2[46]);
    if ((result & 1) != 0) {
      v8 = *(_DWORD*)(a1 + 16);
      if (v8 != 1 && v8 != 3) {
        if (v8 == 2) {
          v10 = 3;
        }
        else {
          v10 = 1;
        }
        goto LABEL_17;
      }
    }
  }
  else {
    v4 = v2[10];
    if (v4 == 0 ||
        ((v5 = v2[11], *(_QWORD*)(v4 + 8) != -1) ? (v6 = v5 == 0) : (v6 = true),
         v6)) {
      v11 = 0x1.11570c0000000p-5f;
    }
    else {
      v11 = (float)(*(float*)(*(_QWORD*)(v5 + 304) + 16LL) *
                    0x1.0aef000000000p+4f) *
            0x1.0624de0000000p-10f;
    }
    *(float*)(a1 + 32) = v1 - v11;
    result = CharacterSelfie_10a6b90();
    if ((result & 1) != 0) {
      *(_DWORD*)(a1 + 32) = 953267991;
      return result;
    }
    if (*(float*)(a1 + 32) <= 0x0.0p+0f) {
      v12 = *(_DWORD*)(a1 + 16);
      if (v12 != 1 && v12 != 3) {
        if (v12 == 2) {
          v10 = 3;
        }
        else {
          v10 = 1;
        }
      LABEL_17:
        *(_DWORD*)(a1 + 16) = v10;
      }
    }
  }
  return result;
}

void ActionDamageWait_Unknown7(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  bool v11;
  unsigned int v12;
  char v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  char v30;
  char v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned int v35;

  v1 = **(_DWORD**)(a1 + 24);
  if ((v1 & 0x40) == 0) {
    v2 = *(_QWORD*)(a1 + 8);
    v35 = *(_DWORD*)(v2 + 96);
    __asm__ volatile("" ::"r"(v35));
    if ((v1 & 0x180) == 0 && (v35 & 0xFFFFFFFE) != 2) {
      *(float*)&v5 =
          X8CALL_S0(float, game_combat_10690a0((void*)((__int64)&v34),
                                               *(_QWORD*)(v2 + 808)));
      if (GameData_21ec7b0 == 0 ||
          (v6 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
          (~*(_DWORD*)(v6 + 112) & 0x28000) != 0) {
        v7 = *(_QWORD*)(*(_QWORD*)(v2 + 808) + 88LL);
        v8 = *(_QWORD*)(v7 + 392);
        v9 = *(_QWORD*)(v7 + 400);
        if (v9 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                    memory_order_relaxed);
        }
        v10 = *(_DWORD*)(v8 + 11784);
        v11 = v10 > 0x12;
        v12 = 0x1FF7Fu >> (v10 & 31);
        v13 = v11;
        v14 = v13 | v12;
        if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(v9, v5);
          std___1___shared_weak_count___release_weak(v9);
        }
        if ((v14 & 1) != 0) {
          v15 = *(_QWORD*)(v2 + 808);
          *(_DWORD*)(v2 + 844) = *(_DWORD*)(v15 + 48);
          v16 = *(_DWORD*)(v15 + 52);
          *(_QWORD*)(v2 + 860) = 0x3F33333300000000LL;
          *(_DWORD*)(v2 + 848) = v16;
          *(_QWORD*)(v2 + 852) = v34;
        }
      }
      if (GameData_21ec7b0 != 0) {
        v17 = GameData_21ec7b0 +
              24LL * (((*(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) - 1) &
                       0xFFFFFFFD) != 0);
        v18 = *(_QWORD*)(v17 + 32);
        if (v18 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                    memory_order_relaxed);
          v19 = *(_QWORD*)(v17 + 40);
          v20 = *(_QWORD*)(v18 + 8) == -1 || v19 == 0;
          if (v20 || (v21 = *(_QWORD*)(v19 + 80)) == 0 ||
              (*(_QWORD*)(v21 + 8) != -1 ? (v22 = *(_QWORD*)(v19 + 88) == 0)
                                         : (v22 = true),
               v22 || *(_QWORD*)(v18 + 8) == -1)) {
            std___1___shared_weak_count___release_weak(v18);
          }
          else {
            std___1___shared_weak_count___release_weak(v18);
            v23 = *(_QWORD*)(a1 + 8);
            if (GameData_21ec7b0 == 0 ||
                (v24 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
                (~*(_DWORD*)(v24 + 112) & 0x28000) != 0) {
              v25 = *(_QWORD*)(*(_QWORD*)(v23 + 808) + 88LL);
              v26 = *(_QWORD*)(v25 + 392);
              v27 = *(_QWORD*)(v25 + 400);
              if (v27 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8),
                                          1u, memory_order_relaxed);
              }
              v28 = *(_DWORD*)(v26 + 11784);
              v11 = v28 > 0x12;
              v29 = 0x1FF7Fu >> (v28 & 31);
              v30 = v11;
              v31 = v30 | v29;
              if (v27 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
                std___1___shared_weak_count___release_weak(v27);
              }
              if ((v31 & 1) != 0) {
                v32 = *(_QWORD*)(v23 + 808);
                *(_DWORD*)(v23 + 844) = *(_DWORD*)(v32 + 48);
                *(_DWORD*)(v23 + 848) = *(_DWORD*)(v32 + 52);
                *(_DWORD*)(v23 + 852) = *(_DWORD*)(v19 + 40);
                v33 = *(_DWORD*)(v19 + 44);
                *(_QWORD*)(v23 + 860) = 0x3F33333300000000LL;
                *(_DWORD*)(v23 + 856) = v33;
              }
            }
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
