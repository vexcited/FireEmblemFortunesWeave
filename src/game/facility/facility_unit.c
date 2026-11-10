#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
extern _UNKNOWN* game_g_hero_ids;
extern __int64 GameData_21c99c8;
unsigned __int64
game_facility_FacilityUnit_CalcCause_lambda0_Invoke(__int64 a1,
                                                    unsigned __int8* a2);
unsigned __int64

game_facility_FacilityUnit_CalcCause_lambda0_Invoke(__int64 a1,
                                                    unsigned __int8* a2)
{
  _WORD* v2;
  __int64 v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *(_WORD**)(a1 + 8);
  if (*(_QWORD*)v2 != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)v2 + 392LL);
  }
  else {
    v3 = 0;
  }
  result = game_HashString(*(&game_g_hero_ids + *a2));
  if (result != 0) {
    v5 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v5 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v7 = v5 - 1;
      if ((v5 & (v5 - 1)) != 0) {
        v8 = result;
        if (result >= v5) {
          v8 = result % v5;
        }
      }
      else {
        v8 = v7 & result;
      }
      v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v8);
      if (v9 != nullptr) {
        v10 = (_QWORD*)*v9;
        if (v10 != nullptr) {
          if ((v5 & v7) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == result) {
                if (v10[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v12 & v7) != v8) {
                return result;
              }
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                return result;
              }
            }
          }
          do {
            v11 = v10[1];
            if (v11 == result) {
              if (v10[2] == result) {
              LABEL_29:
                v13 = v10[3];
                if (v13 != 0 && *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL) ==
                                    *(_QWORD*)(*(_QWORD*)(v13 + 24) + 1672LL)) {
                  v2[24] |= 0x80u;
                }
                return result;
              }
            }
            else {
              if (v11 >= v5) {
                v11 %= v5;
              }
              if (v11 != v8) {
                return result;
              }
            }
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
