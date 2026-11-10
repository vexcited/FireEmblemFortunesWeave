#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_89b900(_QWORD, _QWORD);
extern __int64 GameData_212d750;
extern __int64 GameData_21c99b8;
extern __int64 GameData_22416c0;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_empty_item;
__int64 game_gmap_anonymous_MakeFarmMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                  __int64 a2);

__int64 game_gmap_anonymous_MakeFarmMenuItem_ACall_closure_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(v2 + 40);
  v4 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
  if ((v3 & 0x80000000) != 0) {
    v5 = &game_g_empty_item;
  }
  else {
    v5 = (__int64*)(*(_QWORD*)(*(_QWORD*)(v4 + 8) + 8LL) + 12LL * v3 + 4);
  }
  v6 = GameData_21c99b8;
  *(_QWORD*)(GameData_22416c0 + 32) =
      *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                 8LL * *(unsigned __int16*)v5);
  v7 = *(_DWORD*)(v2 + 40);
  if ((v7 & 0x80000000) == 0) {
    v8 = *(_QWORD*)(v4 + 8);
    v9 = *(_QWORD*)(v8 + 8) + 12LL * v7;
    if (*(_WORD*)(v9 + 4) != 0) {
      v10 = *(unsigned __int16*)(v9 + 2);
      v11 =
          *(_QWORD*)(*(_QWORD*)(v6 + 64) + 8LL * *(unsigned __int16*)(v9 + 4));
      if ((((0x10000000000LL << *(_BYTE*)(v11 + 72)) |
            (1LL << *(_BYTE*)(v11 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        v12 = 1;
      }
      else {
        v12 = 999;
      }
      if (v12 >= v10 - 1) {
        LOWORD(v12) = v10 - 1;
      }
      if (*(_WORD*)(v9 + 2) == 0) {
        LOWORD(v12) = 0;
      }
      *(_WORD*)(v9 + 2) = v12;
      if ((_WORD)v12 == 0) {
        v13 = *(_QWORD*)(v8 + 8) + 12LL * v7;
        v14 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                         8LL * *(unsigned __int16*)(v13 + 4));
        if ((((0x10000000000LL << *(_BYTE*)(v14 + 72)) |
              (1LL << *(_BYTE*)(v14 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          *(_QWORD*)(v13 + 4) = 0;
        }
        *(_WORD*)(v13 + 2) = 0;
        GameRoutine_89b900(v8, a2);
      }
    }
  }
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 14;
  }
  else {
    v15 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 14;
      v16 = 5;
    }
    else {
      v15 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 14;
      v16 = 12;
    }
    *(_DWORD*)(v15 + 152) = v16;
  }
  return 4;
}

#pragma GCC visibility pop
