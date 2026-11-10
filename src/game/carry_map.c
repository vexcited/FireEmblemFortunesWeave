#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e36c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 RidePool_93c4f0(_QWORD, _QWORD, _QWORD);
__int64 UnitVariables_930e20(_QWORD);
extern __int64 GameData_21f42d0;
__int64 game_CarryMap_RideMap_Restore_closure_Invoke(__int64 result, int* a2);

__int64 game_CarryMap_RideMap_Restore_closure_Invoke(__int64 result, int* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  _QWORD* v13;
  unsigned __int8* v14;
  _QWORD* v15;
  unsigned __int8* v17;
  unsigned __int8* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD v21[3];
  _QWORD v22[5];
  _BYTE v23[2];
  __int16 v24;
  int v25;
  _QWORD* v26;
  _QWORD v27[5];

  v2 = *(_QWORD**)(result + 8);
  v3 = v2[1];
  v4 = v3 == 0 || v2[3] == 0;
  if (v4) {
    return result;
  }
  v5 = *a2;
  v6 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v7 = *a2;
    if (v3 <= v5) {
      v7 = v5 % v3;
    }
  }
  else {
    v7 = v6 & v5;
  }
  v8 = *(__int64***)(*v2 + 8 * v7);
  if (v8 == nullptr) {
    return result;
  }
  v9 = *v8;
  if (*v8 == nullptr) {
    return result;
  }
  if ((v3 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == v5) {
        if (*((_DWORD*)v9 + 4) == (_DWORD)v5) {
          goto LABEL_25;
        }
      }
      else if ((v11 & v6) != v7) {
        return result;
      }
      v9 = (__int64*)*v9;
      if (v9 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v5) {
      break;
    }
    if (v10 >= v3) {
      v10 %= v3;
    }
    if (v10 != v7) {
      return result;
    }
  LABEL_14:
    v9 = (__int64*)*v9;
    if (v9 == nullptr) {
      return result;
    }
  }
  if (*((_DWORD*)v9 + 4) != (_DWORD)v5) {
    goto LABEL_14;
  }
LABEL_25:
  v12 =
      (unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21f42d0 + 8) + 120LL) +
                         (v5 << 6));
  if (*v12 != 0 && *v12 == *((unsigned __int8*)v9 + 24) &&
      v12[1] == *((unsigned __int8*)v9 + 25)) {
    v13 = v9 + 4;
    if (*((_QWORD*)v12 + 4) != v9[6]) {
      goto LABEL_48;
    }
    v14 = *((unsigned __int8**)v12 + 2);
    if (v14 != v12 + 24) {
      v15 = (_QWORD*)*v13;
      while (v14[26] == *((unsigned __int8*)v15 + 26) &&
             *((unsigned __int16*)v14 + 14) == *((unsigned __int16*)v15 + 14)) {
        v17 = *((unsigned __int8**)v14 + 1);
        v18 = v14;
        if (v17 != nullptr) {
          do {
            v14 = v17;
            v17 = *(unsigned __int8**)v17;
          } while (v17 != nullptr);
        }
        else {
          do {
            v14 = *((unsigned __int8**)v18 + 2);
            v4 = v18 == *(unsigned __int8**)v14;
            v18 = v14;
          } while (!v4);
        }
        v19 = (_QWORD*)v15[1];
        if (v19 != nullptr) {
          do {
            v20 = v19;
            v19 = (_QWORD*)*v19;
          } while (v19 != nullptr);
        }
        else {
          do {
            v20 = (_QWORD*)v15[2];
            v4 = v15 == (_QWORD*)*v20;
            v15 = v20;
          } while (!v4);
        }
        v15 = v20;
        if (v14 == v12 + 24) {
          return result;
        }
      }
    LABEL_48:
      v24 = 0;
      v25 = 0;
      v26 = v27;
      memset(v27, 0, sizeof(v27));
      GameRoutine_930b90(v23, v12);
      if (&v26 != v13) {
        GameRoutine_6e36c0(&v26, v9[4], v9 + 5);
      }
      WORD1(v21[0]) = 0;
      HIDWORD(v21[0]) = 0;
      v21[2] = v22;
      memset(v22, 0, sizeof(v22));
      GameRoutine_930b90(v21, v12);
      UnitVariables_930e20(v23);
      RidePool_93c4f0(*(_QWORD*)(GameData_21f42d0 + 8), (unsigned int)v5, v21);
      return UnitVariables_930e20(v21);
    }
  }
  return result;
}

#pragma GCC visibility pop
