#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1875d20(__int64, __int64, int, _QWORD*);
__int64 GameRoutine_187ca80(_QWORD);
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 BlacksmithMenuItem_Item_Unknown25(__int64 a1);
__int64 BlacksmithMenuItem_Item_Unknown58(__int64 a1);
__int64 BlacksmithMenuItem_Item_Unknown70(__int64 a1);

__int64 BlacksmithMenuItem_Item_Unknown25(__int64 a1)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  GameRoutine_1875d20(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 112),
                      *(_DWORD*)(a1 + 40), (_QWORD*)(a1 + 96));
  return 9;
}

__int64 BlacksmithMenuItem_Item_Unknown58(__int64 a1)
{
  __int64 v1;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  return GameRoutine_187ca80(v1);
}

__int64 BlacksmithMenuItem_Item_Unknown70(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 112);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    return v1 + 8 * v2 + 828;
  }
  else {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL) +
                      8LL) +
           12LL * (int)v2 + 4;
  }
}

#pragma GCC visibility pop
