#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21c96e8;
extern __int64* GameData_2130e70;
__int64 game_gmap_GmapTroopInfo_Setup_lambda0_Invoke(__int64 result,
                                                     __int64* a2);

__int64 game_gmap_GmapTroopInfo_Setup_lambda0_Invoke(__int64 result,
                                                     __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;

  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  if (*(_BYTE*)(v2 + 60) != 1) {
    goto LABEL_18;
  }
  v3 = *a2;
  v4 = *(_QWORD*)(*a2 + 96);
  v5 = *(_QWORD*)(*a2 + 552);
  if (*(_BYTE*)(*GameData_2130e70 + 54) == 1) {
    if ((v4 | v5) == 0 && *(_DWORD*)(v3 + 84) == *(_DWORD*)(v2 + 56) &&
        *(_QWORD*)(v3 + 32) != *(_QWORD*)(v3 + 24)) {
      return result;
    }
  LABEL_18:
    ++**(_DWORD**)(result + 8);
    return result;
  }
  if ((v4 | v5) == 0 || *(_QWORD*)(v3 + 32) == *(_QWORD*)(v3 + 24)) {
    goto LABEL_18;
  }
  if (v4 != 0 || (v5 != 0 ? (v6 = *(_QWORD*)(v3 + 104) == 0) : (v6 = false),
                  !v6 ||
                      *(__int16*)(v3 + 642) * *(__int16*)(v3 + 640) *
                              *(__int16*)(v3 + 644) !=
                          0 ||
                      *(_QWORD*)(v5 + 352) != 0)) {
    if ((*(_WORD*)(v3 + 544) & 3) == 2) {
      goto LABEL_18;
    }
  }
  return result;
}

#pragma GCC visibility pop
