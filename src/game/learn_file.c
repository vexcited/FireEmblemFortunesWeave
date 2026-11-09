#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1acabdf;
extern __int64 GameData_21c9b38;
unsigned __int64 LearnFile_Unknown4(__int64 a1, __int64 a2);

unsigned __int64 LearnFile_Unknown4(__int64 a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64** v12;
  __int64* v13;
  __int64* i;
  __int64 v15;

  result = game_HashString(&GameData_1acabdf, a2);
  if (result != 0) {
    v3 = *(_QWORD*)(GameData_21c9b38 + 96);
    if (v3 != 0 && *(_QWORD*)(GameData_21c9b38 + 112) != 0) {
      v5 = v3 - 1;
      if ((v3 & (v3 - 1)) != 0) {
        v6 = result;
        if (result >= v3) {
          v6 = result % v3;
        }
      }
      else {
        v6 = v5 & result;
      }
      v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c9b38 + 88) + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v3 & v5) == 0) {
            while (1) {
              v10 = v8[1];
              if (v10 == result) {
                if (v8[2] == result) {
                  goto LABEL_26;
                }
              }
              else if ((v10 & v5) != v6) {
                return result;
              }
              v8 = (_QWORD*)*v8;
              if (v8 == nullptr) {
                return result;
              }
            }
          }
          do {
            v9 = v8[1];
            if (v9 == result) {
              if (v8[2] == result) {
              LABEL_26:
                v11 = v8[3];
                if (v11 != 0) {
                  v12 = *(__int64***)(v11 + 40);
                  v13 = *v12;
                  for (i = v12[1]; v13 != i;
                       *(_BYTE*)(*(_QWORD*)(v15 + 24) + 48LL) = 1) {
                    v15 = *v13++;
                  }
                }
                return result;
              }
            }
            else {
              if (v9 >= v3) {
                v9 %= v3;
              }
              if (v9 != v6) {
                return result;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
