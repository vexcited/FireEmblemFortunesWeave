#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a9e2d1;
extern __int64 GameData_21f4010;
__int64 ProcThermaeScene_Unknown18();

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

#pragma GCC visibility pop
