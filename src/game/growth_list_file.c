#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a94a43;
extern __int64 GameData_21c99c0;
bool game_GrowthListFile_GetJob_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 GrowthListFile_12814c0(const char* a1);
bool game_GrowthListFile_GetJobChanges_lambda0_Invoke(__int64 a1, __int64 a2);

bool game_GrowthListFile_GetJob_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_QWORD*)a2 == 0 || *(unsigned __int8*)(*(_QWORD*)a2 + 49LL) <=
                                  (unsigned int)*(unsigned __int8*)(a1 + 8);
}

__int64 GrowthListFile_12814c0(const char* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE v13[80];

  if ((unsigned int)strcmp(a1, &GameData_1a94a43) != 0) {
    nn_util_SNPrintf(v13, 80, "%s%s", "JID_", a1);
    v2 = game_HashString(v13);
    if (v2 != 0) {
      v3 = *(_QWORD*)(GameData_21c99c0 + 96);
      if (v3 != 0 && *(_QWORD*)(GameData_21c99c0 + 112) != 0) {
        v5 = v3 - 1;
        if ((v3 & (v3 - 1)) != 0) {
          v6 = v2;
          if (v2 >= v3) {
            v6 = v2 % v3;
          }
        }
        else {
          v6 = v5 & v2;
        }
        v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c0 + 88) + 8 * v6);
        if (v7 != nullptr) {
          v8 = (_QWORD*)*v7;
          if (v8 != nullptr) {
            if ((v3 & v5) == 0) {
              while (1) {
                v11 = v8[1];
                if (v11 == v2) {
                  if (v8[2] == v2) {
                    return v8[3];
                  }
                }
                else if ((v11 & v5) != v6) {
                  return 0;
                }
                v8 = (_QWORD*)*v8;
                v10 = 0;
                if (v8 == nullptr) {
                  return v10;
                }
              }
            }
            do {
              v9 = v8[1];
              if (v9 == v2) {
                if (v8[2] == v2) {
                  return v8[3];
                }
              }
              else {
                if (v9 >= v3) {
                  v9 %= v3;
                }
                if (v9 != v6) {
                  return 0;
                }
              }
              v8 = (_QWORD*)*v8;
            } while (v8 != nullptr);
          }
        }
      }
    }
  }
  return 0;
}

bool game_GrowthListFile_GetJobChanges_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_QWORD*)a2 == 0 || *(unsigned __int8*)(*(_QWORD*)a2 + 49LL) <=
                                  (unsigned int)*(unsigned __int8*)(a1 + 8);
}

#pragma GCC visibility pop
