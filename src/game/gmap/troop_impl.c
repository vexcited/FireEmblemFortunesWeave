#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_CorpsManager_EachUnit(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern __int64 GameData_21ca310;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 Troop_133ed80(__int64 result, __int64 a2);

__int64 Troop_133ed80(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __int64 v15;

  v2 = *(_QWORD*)(result + 96);
  if (v2 != 0) {
    if (*(_BYTE*)(v2 + 32) == 1) {
      v4 = *(_QWORD*)(result + 568);
      v5 = *(_QWORD*)(result + 576);
      if (v4 != v5) {
        while (1) {
          v6 = *(_QWORD*)(a2 + 32);
          v15 = v4;
          if (v6 == 0) {
            break;
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(
              v6, &v15);
          v4 += 2224;
          if (v4 == v5) {
            return result;
          }
        }
        goto LABEL_34;
      }
    }
  }
  else if (*(_QWORD*)(result + 552) == 0) {
    v7 = *(unsigned int*)(result + 84);
    if ((v7 & 0x80000000) != 0) {
      LODWORD(v15) = 17;
      result = game_UnitPool_GetFirst(&v15);
      if (result != 0) {
        v8 = *(_QWORD*)(result + 432);
        if (v8 == 0) {
          v9 = *(_QWORD*)(result + 440);
          if (v9 != 0 &&
              (unsigned int)(v10 = *(unsigned __int8*)(v9 + 16)) <= 8) {
            v14 = v10 - 3;
            while (1) {
              if (v14 == 0) {
                v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v8 != 0) {
                  break;
                }
              }
              if (++v14 == 6) {
                goto LABEL_15;
              }
            }
          }
          else {
          LABEL_15:
            v8 = 0;
          }
        }
        v15 = result;
        v6 = *(_QWORD*)(a2 + 32);
        if (v6 == 0) {
        LABEL_34:
          GameRoutine_60a310(v6, a2);
        }
        while (1) {
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v6 + 48LL))(
              v6, &v15);
          if (v8 == 0) {
            break;
          }
          v11 = *(_QWORD*)(v8 + 432);
          if (v11 == 0) {
            v11 = *(_QWORD*)(v8 + 440);
            if (v11 != 0) {
              v12 = *(unsigned __int8*)(v11 + 16);
              if (v12 > 8) {
              LABEL_18:
                v11 = 0;
              }
              else {
                v13 = v12 - 3;
                while (1) {
                  if (v13 == 0) {
                    v11 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                     556096LL);
                    if (v11 != 0) {
                      break;
                    }
                  }
                  if (++v13 == 6) {
                    goto LABEL_18;
                  }
                }
              }
            }
          }
          v6 = *(_QWORD*)(a2 + 32);
          v15 = v8;
          v8 = v11;
          if (v6 == 0) {
            goto LABEL_34;
          }
        }
      }
    }
    else {
      return game_CorpsManager_EachUnit(v7, a2);
    }
  }
  return result;
}

#pragma GCC visibility pop
