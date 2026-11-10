#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 GameRoutine_e165f0(_QWORD);
__int64 CharacterControllerAutonomy_Unknown2(__int64 a1);
__int64 GameRoutine_e18130(_QWORD);
__int64 CharacterControllerAutonomy_e165f0(__int64 a1);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21ec7c0;
__int64 CharacterControllerAutonomy_StateFollow_Unknown2(__int64 result);
__int64
game_hub_CharacterControllerAutonomy_CharacterControllerAutonomy_lambda0_Invoke(
    __int64 a1, __int64* a2);

__int64 CharacterControllerAutonomy_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD v5[2];
  char v6;
  char v7;
  char v8;
  char v9;

  v1 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v3 = *(_QWORD*)(v1 + 24);
  v5[0] = 0;
  v5[1] = 0;
  v6 = 0;
  GameRoutine_da9a80(*(_QWORD*)(v3 + 32), v5);
  return GameRoutine_e165f0(a1 + 32);
}

__int64 CharacterControllerAutonomy_e165f0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  *(_BYTE*)(a1 + 96) = 1;
  result = GameRoutine_e18130(a1);
  if (*(_BYTE*)(a1 + 12) == 1) {
    v3 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  }
  if (*(_BYTE*)(a1 + 20) == 1) {
    result = GameRoutine_e18130(a1);
    if (*(_BYTE*)(a1 + 12) == 1) {
      v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    }
    if (*(_BYTE*)(a1 + 20) == 1) {
      result = GameRoutine_e18130(a1);
      if (*(_BYTE*)(a1 + 12) == 1) {
        v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      }
      if (*(_BYTE*)(a1 + 20) == 1) {
        result = GameRoutine_e18130(a1);
        if (*(_BYTE*)(a1 + 12) == 1) {
          v6 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
        }
        if (*(_BYTE*)(a1 + 20) == 1) {
          result = GameRoutine_e18130(a1);
          if (*(_BYTE*)(a1 + 12) == 1) {
            v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
          }
          if (*(_BYTE*)(a1 + 20) == 1) {
            result = GameRoutine_e18130(a1);
            if (*(_BYTE*)(a1 + 12) == 1) {
              v8 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
            }
            if (*(_BYTE*)(a1 + 20) == 1) {
              result = GameRoutine_e18130(a1);
              if (*(_BYTE*)(a1 + 12) == 1) {
                v9 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
              }
              if (*(_BYTE*)(a1 + 20) == 1) {
                result = GameRoutine_e18130(a1);
                if (*(_BYTE*)(a1 + 12) == 1) {
                  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
                }
                if (*(_BYTE*)(a1 + 20) == 1) {
                  result = GameRoutine_e18130(a1);
                  if (*(_BYTE*)(a1 + 12) == 1) {
                    v11 =
                        *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL * *(int*)(a1 + 8));
                    result =
                        (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
                  }
                  if (*(_BYTE*)(a1 + 20) == 1) {
                    result = GameRoutine_e18130(a1);
                    if (*(_BYTE*)(a1 + 12) == 1) {
                      v12 = *(_QWORD*)(*(_QWORD*)(a1 + 24) +
                                       8LL * *(int*)(a1 + 8));
                      result =
                          (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(_WORD*)(a1 + 96) = 256;
  return result;
}

__int64 CharacterControllerAutonomy_StateFollow_Unknown2(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 24) = 0;
  return result;
}

__int64

game_hub_CharacterControllerAutonomy_CharacterControllerAutonomy_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  unsigned int v14;
  unsigned int v15;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD**)(GameData_21ec7c0 + 24);
  v5 = *(_QWORD**)(GameData_21ec7c0 + 32);
  if (v4 == v5) {
    goto LABEL_14;
  }
  v6 = *(_QWORD*)(v2 + 40);
  while (1) {
    v7 = *v4;
    if (*(_QWORD*)(*v4 + 24LL) == v6) {
      break;
    }
    v4 += 2;
    if (v4 == v5) {
      goto LABEL_14;
    }
  }
  v8 = v4[1];
  if (v8 != 0 && (v9 = v4[1],
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16),
                                            1u, memory_order_relaxed),
                  v10 = std___1___shared_weak_count_lock(v9),
                  std___1___shared_weak_count___release_weak(v8), v10 != 0)) {
    v11 = *(_QWORD*)(v7 + 56);
    if (*(_DWORD*)(v7 + 1112) != 1 || v11 == 0) {
      result = 2;
    }
    else if (*(_BYTE*)(v11 + 180) != 0) {
      result = 0;
    }
    else {
      result = 3;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = result;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      result = v15;
    }
  }
  else {
  LABEL_14:
    result = 0;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    return v14;
  }
  return result;
}

#pragma GCC visibility pop
