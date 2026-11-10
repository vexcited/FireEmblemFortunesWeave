#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 GameRoutine_65f570(_QWORD, _QWORD);
__int64 GameRoutine_713120(_WORD*, __int64, __int64, char);
__int64 game_HasActiveSkill_843420(_QWORD);
__int64 game_UnitItem_Deserialize(_QWORD, _QWORD);
extern _UNKNOWN GameData_1b47d74;
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 UnitItemList_713600(unsigned __int16* a1, __int64 a2);
__int64 UnitItemList_713a00(_QWORD* a1, __int64* a2);
__int64 game_UnitItemList_GetBloodSkill_lambda0_Invoke(__int64 result,
                                                       unsigned __int16* a2);
__int64 game_UnitItemList_EachItem_lambda0_Invoke_713e30(__int64 result,
                                                         unsigned __int16* a2,
                                                         __int64 a3,
                                                         __int64 a4);
__int64 game_UnitItemList_EachItem_lambda0_Invoke_713f80(__int64 result,
                                                         unsigned __int16* a2,
                                                         __int64 a3,
                                                         __int64 a4);
__int64 game_UnitItemList_EachAccouted_lambda0_Invoke(__int64 result,
                                                      __int64 a2, __int64 a3,
                                                      __int64 a4);
__int64 game_UnitItemList_UpdateMagic_lambda0_Invoke(__int64 a1, _DWORD* a2);

__int64 UnitItemList_713600(unsigned __int16* a1, __int64 a2)
{
  void (**v2)(__int64, int*);
  __int64 v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v32;

  v2 = *(void (***)(__int64, int*))a2;
  v32 = 0;
  (*v2)(a2, &v32);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = 0;
  if (a1[28] != 0) {
    v6 = 2;
  }
  else {
    v6 = a1[24] != 0;
  }
  if (a1[32] != 0) {
    v7 = 3;
  }
  else {
    v7 = v6;
  }
  if (a1[36] != 0) {
    v8 = 4;
  }
  else {
    v8 = v7;
  }
  if (a1[40] != 0) {
    v9 = 5;
  }
  else {
    v9 = v8;
  }
  if (a1[44] != 0) {
    v9 = 6;
  }
  if (a1[48] != 0) {
    v9 = 7;
  }
  if (a1[52] != 0) {
    v9 = 8;
  }
  if (a1[56] != 0) {
    v9 = 9;
  }
  if (a1[60] != 0) {
    v9 = 10;
  }
  if (a1[64] != 0) {
    v9 = 11;
  }
  if (a1[68] != 0) {
    v9 = 12;
  }
  if (a1[72] != 0) {
    v9 = 13;
  }
  if (a1[76] != 0) {
    v9 = 14;
  }
  if (a1[80] != 0) {
    v9 = 15;
  }
  if (a1[84] != 0) {
    v9 = 16;
  }
  if (a1[88] != 0) {
    v9 = 17;
  }
  if (a1[92] != 0) {
    v9 = 18;
  }
  if (a1[96] != 0) {
    v9 = 19;
  }
  if (a1[100] != 0) {
    v9 = 20;
  }
  if (a1[104] != 0) {
    v9 = 21;
  }
  if (a1[108] != 0) {
    v9 = 22;
  }
  if (a1[112] != 0) {
    v9 = 23;
  }
  if (a1[116] != 0) {
    v10 = 24;
  }
  else {
    v10 = v9;
  }
  if (a1[4] != 0) {
    v11 = 2;
  }
  else {
    v11 = *a1 != 0;
  }
  if (a1[8] != 0) {
    v12 = 3;
  }
  else {
    v12 = v11;
  }
  if (a1[12] != 0) {
    v13 = 4;
  }
  else {
    v13 = v12;
  }
  if (a1[16] != 0) {
    v14 = 5;
  }
  else {
    v14 = v13;
  }
  v15 = *(int*)(a2 + 20);
  if (a1[20] != 0) {
    v16 = 6;
  }
  else {
    v16 = v14;
  }
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v16;
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v10;
  v18 = GameData_212c878[0];
  if ((_DWORD)v16 != 0) {
    v19 = a1;
    do {
      if (*(_WORD*)v19 != 0) {
        v21 = *(int*)(a2 + 20);
        v22 = *v19;
        v23 = (unsigned __int16)*v19 | 0x100000000LL;
        *(_DWORD*)(a2 + 20) = v21 + 1;
        v24 = *(_QWORD*)(a2 + 8);
        if (v22 == v23) {
          *(_BYTE*)(v24 + v21) = 65;
          GameRoutine_65f570(a2, *(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                            8LL * *(unsigned __int16*)v19));
        }
        else {
          *(_BYTE*)(v24 + v21) = 97;
          GameRoutine_65f570(a2, *(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                            8LL * *(unsigned __int16*)v19));
          GameRoutine_65f240(a2, *v19);
        }
      }
      else {
        v20 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v20 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = 33;
      }
      --v16;
      ++v19;
    } while (v16 != 0);
  }
  if ((_DWORD)v10 != 0) {
    v25 = a1 + 24;
    do {
      if (*(_WORD*)v25 != 0) {
        v27 = *(int*)(a2 + 20);
        v28 = *v25;
        v29 = (unsigned __int16)*v25 | 0x100000000LL;
        *(_DWORD*)(a2 + 20) = v27 + 1;
        v30 = *(_QWORD*)(a2 + 8);
        if (v28 == v29) {
          *(_BYTE*)(v30 + v27) = 65;
          GameRoutine_65f570(a2, *(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                            8LL * *(unsigned __int16*)v25));
        }
        else {
          *(_BYTE*)(v30 + v27) = 97;
          GameRoutine_65f570(a2, *(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                            8LL * *(unsigned __int16*)v25));
          GameRoutine_65f240(a2, *v25);
        }
      }
      else {
        v26 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v26 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = 33;
      }
      --v10;
      ++v25;
    } while (v10 != 0);
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 UnitItemList_713a00(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int* v10;
  unsigned __int64 i;
  int* v12;
  int v14;

  v2 = *a2;
  v14 = 0;
  (*(void (**)(__int64*, int*))(v2 + 16))(a2, &v14);
  v5 = *((int*)a2 + 5);
  v6 = a2[1];
  *((_DWORD*)a2 + 5) = v5 + 2;
  v7 = *(unsigned __int8*)(v6 + v5 + 1);
  *((_DWORD*)a2 + 5) = v5 + 3;
  v8 = *(unsigned __int8*)(v6 + v5 + 2);
  a1[26] = 0;
  a1[27] = 0;
  a1[24] = 0;
  a1[25] = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[20] = 0;
  a1[21] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[14] = 0;
  a1[15] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[28] = 0;
  a1[29] = 0;
  if ((_DWORD)v7 != 0) {
    game_UnitItem_Deserialize(a1, a2);
    if ((_DWORD)v7 != 1) {
      game_UnitItem_Deserialize(a1 + 1, a2);
      if ((_DWORD)v7 != 2) {
        game_UnitItem_Deserialize(a1 + 2, a2);
        if ((_DWORD)v7 != 3) {
          game_UnitItem_Deserialize(a1 + 3, a2);
          if ((_DWORD)v7 != 4) {
            game_UnitItem_Deserialize(a1 + 4, a2);
            if ((_DWORD)v7 != 5) {
              game_UnitItem_Deserialize(a1 + 5, a2);
              if ((_DWORD)v7 != 6) {
                v9 = v7 - 6;
                do {
                  game_UnitItem_Deserialize(&v14, a2);
                  --v9;
                } while (v9 != 0);
              }
            }
          }
        }
      }
    }
  }
  if ((_DWORD)v8 != 0) {
    v10 = (int*)(a1 + 6);
    for (i = 0; i != v8; ++i) {
      if (i <= 0x17) {
        v12 = v10;
      }
      else {
        v12 = &v14;
      }
      game_UnitItem_Deserialize(v12, a2);
      v10 += 2;
    }
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

__int64 game_UnitItemList_GetBloodSkill_lambda0_Invoke(__int64 result,
                                                       unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _WORD* v8;
  __int16 v9;
  _WORD* v10;

  v2 = *(_QWORD*)(result + 8);
  if (*(_WORD*)v2 == 0) {
    v3 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 24LL);
    if ((*(_WORD*)(v3 + 88) & 0x100) == 0 ||
        (v4 = *(_QWORD*)(v3 + 40), (v5 = *(_QWORD*)(v3 + 48)) == v4)) {
      v8 = &GameData_1b47d74;
    }
    else {
      v6 = (v5 - v4) >> 2;
      v7 = 0;
      v8 = &GameData_1b47d74;
      while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(v4 + 4 * v7) & 0xFFF)) +
                       104LL) != 8) {
        if (v6 == ++v7) {
          goto LABEL_10;
        }
      }
      v10 = (_WORD*)(v4 + 4LL * (unsigned int)v7);
      v8 = GameData_212c8a8;
      if (v7 >= 0) {
        v8 = v10;
      }
    }
  LABEL_10:
    if ((*v8 & 0xFFF) != 0) {
      v9 = *a2;
      *(_BYTE*)(v2 + 2) = *((_BYTE*)a2 + 2);
      *(_WORD*)v2 = v9;
      *(_BYTE*)(v2 + 3) = *((_BYTE*)a2 + 3);
      *(_DWORD*)(v2 + 4) = *((_DWORD*)a2 + 1);
    }
  }
  return result;
}

__int64 game_UnitItemList_EachItem_lambda0_Invoke_713e30(__int64 result,
                                                         unsigned __int16* a2,
                                                         __int64 a3, __int64 a4)
{
  __int64 v4;

  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          72LL) == *(unsigned __int8*)(result + 8)) {
    v4 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
    if (v4 == 0) {
      GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  }
  return result;
}

__int64 game_UnitItemList_EachItem_lambda0_Invoke_713f80(__int64 result,
                                                         unsigned __int16* a2,
                                                         __int64 a3, __int64 a4)
{
  __int64 v4;

  if (*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) ==
      *(_QWORD*)(result + 8)) {
    v4 = *(_QWORD*)(*(_QWORD*)(result + 16) + 32LL);
    if (v4 == 0) {
      GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  }
  return result;
}

__int64 game_UnitItemList_EachAccouted_lambda0_Invoke(__int64 result,
                                                      __int64 a2, __int64 a3,
                                                      __int64 a4)
{
  __int64 v4;

  if ((*(_BYTE*)(a2 + 3) & 1) != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(result + 8) + 32LL);
    if (v4 == 0) {
      GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  }
  return result;
}

__int64 game_UnitItemList_UpdateMagic_lambda0_Invoke(__int64 a1, _DWORD* a2)
{
  _WORD* v3;
  __int64 result;

  v3 = *(_WORD**)(a1 + 8);
  result = game_HasActiveSkill_843420(a2);
  if ((result & 1) != 0) {
    result = GameRoutine_713120(
        v3,
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (*a2 & 0xFFF)) +
                   576LL),
        *(_QWORD*)(a1 + 24), 0);
    **(_BYTE**)(a1 + 32) |= result & 1;
  }
  return result;
}

#pragma GCC visibility pop
