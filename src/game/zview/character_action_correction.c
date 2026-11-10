#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_220b6f0;
bool game_zview_CharacterActionCorrection_SerchHitbox_Target_lambda0_Invoke(
    __int64 a1, __int64* a2);

bool game_zview_CharacterActionCorrection_SerchHitbox_Target_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  int v8;
  int v9;
  __int64* v11;
  __int64* v12;
  int v13;
  __int64 v14;
  __int64 v15;

  v2 = *a2;
  if (*a2 == 0) {
    goto LABEL_22;
  }
  v3 = *(unsigned __int8**)(v2 + 184);
  v4 = *(unsigned __int8**)(v2 + 192);
  if (v3 != v4) {
    while (1) {
      v5 = *v3;
      v6 = *((_QWORD*)v3 + 1);
      if ((v5 & 1) == 0) {
        v6 = v5 >> 1;
      }
      if (v6 == 6) {
        v7 = (v5 & 1) != 0 ? *((unsigned __int8**)v3 + 2) : v3 + 1;
        v8 = *(_DWORD*)v7;
        v9 = *((unsigned __int16*)v7 + 2);
        if (*(_DWORD*)"MakeId" == v8 && *(unsigned __int16*)"Id" == v9) {
          break;
        }
      }
      v3 += 160;
      if (v3 == v4) {
        goto LABEL_22;
      }
    }
  }
  if (v3 == v4 || *((_DWORD*)v3 + 36) != 3 ||
      (v11 = *(__int64**)(GameData_220b6f0 + 8),
       v12 = *(__int64**)(GameData_220b6f0 + 16), v11 == v12)) {
  LABEL_22:
    v14 = 0;
  }
  else {
    v13 = *((_DWORD*)v3 + 12);
    while (1) {
      v15 = *v11;
      v11 += 2;
      v14 = v15;
      if (*(_DWORD*)(v15 + 184) == v13) {
        break;
      }
      if (v11 == v12) {
        goto LABEL_22;
      }
    }
  }
  return v14 == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
