#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_27dfe0(_QWORD, _QWORD);
__int64 GameRoutine_286270(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288010(_QWORD, _QWORD);
__int64 GameRoutine_288260(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a5660(__int64, unsigned int, __int64, __int64);
__int64 PlayerHeapDataManager_2915a0(_QWORD, _QWORD);
__int64 DataLoadTask_Unknown2_2ae190(__int64 a1);

__int64 DataLoadTask_Unknown2_2ae190(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned int v4;
  int v5;
  unsigned int v6;

  PlayerHeapDataManager_2915a0(*(_QWORD*)(a1 + 144), *(_QWORD*)(a1 + 72));
  v2 = *(_QWORD*)(a1 + 104);
  if (v2 == 0) {
    v4 = *(_DWORD*)(a1 + 96);
    if (v4 == -1) {
      v2 = 0;
    }
    else {
      if ((GameRoutine_286270(*(_QWORD*)(a1 + 144) + 24LL, v4,
                              *(_QWORD*)(a1 + 136), 2, 0) &
           1) == 0) {
        v6 = v4;
        result = GameRoutine_27dfe0(1001, &v6);
        *(_BYTE*)(*(_QWORD*)(a1 + 136) + 40LL) = 2;
        *(_BYTE*)(a1 + 152) = 0;
        return result;
      }
      v2 = GameRoutine_288010(*(_QWORD*)(a1 + 144) + 24LL, v4);
      *(_QWORD*)(a1 + 104) = v2;
    }
  }
  result = GameRoutine_2a5660(v2, *(_DWORD*)(a1 + 112), *(_QWORD*)(a1 + 72),
                              *(_QWORD*)(a1 + 80) + 24LL);
  if (result != 0) {
  LABEL_5:
    *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 104);
    *(_QWORD*)(a1 + 128) = result;
    *(_BYTE*)(*(_QWORD*)(a1 + 136) + 40LL) = 2;
    *(_BYTE*)(a1 + 152) = 1;
    return result;
  }
  if ((GameRoutine_288260(*(_QWORD*)(a1 + 144) + 24LL, *(_QWORD*)(a1 + 104),
                          *(unsigned int*)(a1 + 112), *(_QWORD*)(a1 + 136)) &
       1) != 0) {
    result =
        GameRoutine_2a5660(*(_QWORD*)(a1 + 104), *(_DWORD*)(a1 + 112),
                           *(_QWORD*)(a1 + 72), *(_QWORD*)(a1 + 144) + 24LL);
    goto LABEL_5;
  }
  v5 = *(_DWORD*)(a1 + 96);
  result = GameRoutine_27dfe0(1002, &v5);
  *(_BYTE*)(*(_QWORD*)(a1 + 136) + 40LL) = 2;
  *(_BYTE*)(a1 + 152) = 0;
  return result;
}

#pragma GCC visibility pop
