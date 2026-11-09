#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 GameRoutine_e165f0(_QWORD);
__int64 CharacterControllerAutonomy_Unknown2(__int64 a1);
__int64 GameRoutine_e18130(_QWORD);
__int64 CharacterControllerAutonomy_e165f0(__int64 a1);

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

#pragma GCC visibility pop
