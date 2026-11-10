#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_89b900(void);
__int64 Impl_13261c0(_QWORD);
extern __int64* GameData_212c790;
extern __int64 GameData_212d750;
extern __int64 GameData_21c99b8;
extern __int64 GameData_22506e0;
extern __int64 GameData_22549a8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_empty_item;
__int64 game_gmap_anonymous_CallAnimalMenuItem_ACall_closure_Invoke(__int64 a1);

__int64 game_gmap_anonymous_CallAnimalMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  int v5;
  __int64* v6;
  __int64* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  v5 = *(_DWORD*)(v2 + 56);
  if ((v5 & 0x80000000) == 0) {
    while (v3 != v4) {
      v7 = (__int64*)*v3++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v5) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = nullptr;
    goto LABEL_8;
  }
  if (v3 == v4) {
    goto LABEL_7;
  }
  while (1) {
    v6 = (__int64*)*v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && v6[69] == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v8 = *((_DWORD*)v6 + 135);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = v6[3];
    v12 = v6[4] - v11;
    v13 = (__int64*)(v11 + 8LL * (unsigned int)v10);
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = *v6;
  Impl_13261c0(*v6);
  v15 = *(_DWORD*)(v1 + 40);
  v16 = game_TransporterConst_List_instance__ptr[0];
  if ((v15 & 0x80000000) != 0) {
    v17 = &game_g_empty_item;
  }
  else {
    v17 =
        (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                             game_TransporterConst_List_instance__ptr
                                                 [0] +
                                         8LL) +
                              8LL) +
                   12LL * v15 + 4);
  }
  v18 = GameData_21c99b8;
  v19 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                   8LL * *(unsigned __int16*)v17);
  if (v19 != 0) {
    *(_QWORD*)(*(_QWORD*)(v14 + 152) + 80LL) = v19;
    v15 = *(_DWORD*)(v1 + 40);
  }
  if ((v15 & 0x80000000) == 0) {
    v20 = *(_QWORD*)(*(_QWORD*)v16 + 8LL);
    v21 = *(_QWORD*)(v20 + 8) + 12LL * v15;
    if (*(_WORD*)(v21 + 4) != 0) {
      v22 = *(unsigned __int16*)(v21 + 2);
      v23 = *(_QWORD*)(*(_QWORD*)(v18 + 64) +
                       8LL * *(unsigned __int16*)(v21 + 4));
      if ((((0x10000000000LL << *(_BYTE*)(v23 + 72)) |
            (1LL << *(_BYTE*)(v23 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        v24 = 1;
      }
      else {
        v24 = 999;
      }
      if (v24 >= v22 - 1) {
        LOWORD(v24) = v22 - 1;
      }
      if (*(_WORD*)(v21 + 2) == 0) {
        LOWORD(v24) = 0;
      }
      *(_WORD*)(v21 + 2) = v24;
      if ((_WORD)v24 == 0) {
        v25 = *(_QWORD*)(v20 + 8) + 12LL * v15;
        v26 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                         8LL * *(unsigned __int16*)(v25 + 4));
        if ((((0x10000000000LL << *(_BYTE*)(v26 + 72)) |
              (1LL << *(_BYTE*)(v26 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          *(_QWORD*)(v25 + 4) = 0;
        }
        *(_WORD*)(v25 + 2) = 0;
        GameRoutine_89b900();
      }
    }
  }
  if (GameData_22549a8 != 0) {
    *(_DWORD*)(GameData_22549a8 + 272) = 12;
  }
  else {
    v27 = GameData_22506e0;
    if (GameData_22506e0 != 0) {
      *(_DWORD*)(GameData_22506e0 + 208) = 12;
      v28 = 5;
    }
    else {
      v28 = 12;
      v27 = *(_QWORD*)GameData_212d750;
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 276LL) = 12;
    }
    *(_DWORD*)(v27 + 152) = v28;
  }
  return 4;
}

#pragma GCC visibility pop
