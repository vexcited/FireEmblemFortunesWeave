#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a9e2d1;
extern __int64 GameData_21f4010;
__int64 ProcThermaeScene_Unknown18();
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl_closure_Invoke(
    __int64 a1, __int64* a2);

__int64 ProcThermaeScene_Unknown18()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1a9e2d1);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  goto LABEL_27;
                }
              }
              else if ((v9 & v3) != v4) {
                goto LABEL_25;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
              LABEL_27:
                v8 = v6[3];
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                break;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v8 = 0;
  return GameRoutine_14877f0(v8, 0x13F000000LL);
}

__int64 game_facility_anonymous_ProcThermaeScene_InitialLoadImpl_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;

  v2 = *a2;
  v19 = 0;
  v20 = &v19;
  result = GameRoutine_1462640(&v20, &v20, *(_QWORD*)(v2 + 8));
  v4 = v19;
  if (v19 != 0) {
    v6 = *(_QWORD*)(v19 + 48);
    v5 = *(_QWORD*)(v19 + 56);
    *(_DWORD*)(v19 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v11 = 0;
        v8 = 0;
        do {
          v14 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v14;
          v15 = *(_QWORD*)(v14 + 192);
          if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
              (*(_BYTE*)(v15 + 21) & 1) == 0) {
            *(_QWORD*)v15 = 0;
            *(_DWORD*)(v15 + 8) = 1;
          }
          *(_DWORD*)(v15 + 12) = 0;
          *(_BYTE*)(v15 + 20) = 1;
          v16 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v16 + v11) = 0;
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v8 += 2;
          v12 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v13 = v12 + v11;
          v11 += 6;
          *(_BYTE*)(v13 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
