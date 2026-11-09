#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15748c0(__int64, unsigned __int16*, char);
__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
__int64 EquipMenuItem_UnitItem_Unknown58(_QWORD* a1);
bool EquipMenuItem_UnitItem_Unknown60(__int64 a1);
__int64* EquipMenuItem_UnitItem_Unknown70(__int64 a1);

__int64 EquipMenuItem_UnitItem_Unknown58(_QWORD* a1)
{
  unsigned __int16* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int16* v5;
  unsigned __int16* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16* v12;

  if (*(_WORD*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1) == 0) {
    return 0;
  }
  v2 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v3 = GameData_212c878[0];
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *v2) +
                            72LL) -
          5 <=
      1) {
    v4 = a1[11];
    v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    return (GameRoutine_15748c0(v4, v5, 1) & 0x100000000LL) != 0;
  }
  v7 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  if (((*((_BYTE*)v7 + 3) & 0x10) != 0 ||
       (*(_BYTE*)((v8 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * *v7)) + 336) &
        4) != 0 ||
       ((1LL << *(_BYTE*)(v8 + 72)) & 0xE01F) == 0) &&
      (unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                       8LL *
                                           *(unsigned __int16*)(*(__int64 (**)(
                                               _QWORD*))(*a1 + 560LL))(a1)) +
                            72LL) -
              5 >=
          2) {
    v9 = a1[11];
    v10 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    if ((GameRoutine_6e8bc0(v10, v9) & 1) == 0) {
      return 0;
    }
  }
  v11 = a1[11];
  v12 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  return GameRoutine_157b5c0(v11, v12);
}

bool EquipMenuItem_UnitItem_Unknown60(__int64 a1)
{
  return *(_WORD*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) == 0;
}

__int64* EquipMenuItem_UnitItem_Unknown70(__int64 a1)
{
  __int64 v1;

  v1 = *(int*)(a1 + 40);
  if ((_DWORD)v1 == -1) {
    return &game_g_empty_item;
  }
  else {
    return (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v1 + 828);
  }
}

#pragma GCC visibility pop
