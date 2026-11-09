#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_713120(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84efa0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetAttack(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
bool GameRoutine_6ed370(__int64);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
extern _UNKNOWN* GameData_212c8a8;
extern __int64 (*GameData_1f92f08[])();
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64 (*GameData_1f93108[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* game_g_empty_item_ptr;
__int64 UnitItemList_70f9f0(unsigned __int16* a1, unsigned __int8 a2);
void* UnitItemList_70fee0(__int64 a1);
__int64 UnitItemList_710300(unsigned __int16* a1, __int64 a2);
__int64 UnitItemList_710640(__int64 a1);
__int64 UnitItemList_710b30(__int64 a1);
__int64 UnitItemList_710ea0(__int64 result);
__int64 UnitItemList_711470(__int64 result, int a2);
__int64 UnitItemList_712d40(__int64 (**a1)(), __int64 a2);
__int64 UnitItemList_713480(unsigned __int16* a1);

__int64 UnitItemList_70f9f0(unsigned __int16* a1, unsigned __int8 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*GameData_212c878[0] + 64);
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *a1) + 73LL) == a2) {
    return 0;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[4]) + 73LL) == a2) {
    return 1;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[8]) + 73LL) == a2) {
    return 2;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[12]) + 73LL) == a2) {
    return 3;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[16]) + 73LL) == a2) {
    return 4;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[20]) + 73LL) == a2) {
    return 5;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[24]) + 73LL) == a2) {
    return 6;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[28]) + 73LL) == a2) {
    return 7;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[32]) + 73LL) == a2) {
    return 8;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[36]) + 73LL) == a2) {
    return 9;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[40]) + 73LL) == a2) {
    return 10;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[44]) + 73LL) == a2) {
    return 11;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[48]) + 73LL) == a2) {
    return 12;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[52]) + 73LL) == a2) {
    return 13;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[56]) + 73LL) == a2) {
    return 14;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[60]) + 73LL) == a2) {
    return 15;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[64]) + 73LL) == a2) {
    return 16;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[68]) + 73LL) == a2) {
    return 17;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[72]) + 73LL) == a2) {
    return 18;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[76]) + 73LL) == a2) {
    return 19;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[80]) + 73LL) == a2) {
    return 20;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[84]) + 73LL) == a2) {
    return 21;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[88]) + 73LL) == a2) {
    return 22;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[92]) + 73LL) == a2) {
    return 23;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[96]) + 73LL) == a2) {
    return 24;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[100]) + 73LL) == a2) {
    return 25;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[104]) + 73LL) == a2) {
    return 26;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[108]) + 73LL) == a2) {
    return 27;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[112]) + 73LL) == a2) {
    return 28;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(v2 + 8LL * a1[116]) + 73LL) == a2) {
    return 29;
  }
  return 0xFFFFFFFFLL;
}

void* UnitItemList_70fee0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void* result;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  _QWORD v14[4];
  _QWORD* v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;

  v13 = v12;
  v12[0] = GameData_1f92f08;
  v12[1] = &v18;
  v17 = v16;
  v14[0] = GameData_1f93088;
  v14[1] = v12;
  v15 = v14;
  v16[2] = v14;
  v18 = *game_g_empty_item_ptr;
  v16[0] = GameData_1f92f88;
  v16[1] = 13;
  game_UnitItemList_EachItem(a1, v16);
  if (v17 == v16) {
    v1 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v17 + v1))((__int64)v17);

LABEL_6:
  if (v15 == v14) {
    v2 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v15 + v2))((__int64)v15);

LABEL_11:
  if (v13 == v12) {
    v3 = 32;
    goto LABEL_15;
  }
  if (v13 != nullptr) {
    v3 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v13 + v3))((__int64)v13);
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * (unsigned __int16)v18) +
                  24LL);
  if ((*(_WORD*)(v4 + 88) & 0x100) == 0) {
    return GameData_212c8a8;
  }
  v7 = v4 + 40;
  v5 = *(_QWORD*)(v4 + 40);
  v6 = *(_QWORD*)(v7 + 8);
  if (v6 == v5) {
    return GameData_212c8a8;
  }
  v8 = (v6 - v5) >> 2;
  v9 = 0;
  result = GameData_212c8a8;
  while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (*(_DWORD*)(v5 + 4 * v9) & 0xFFF)) +
                   104LL) != 8) {
    if (v8 == ++v9) {
      return result;
    }
  }
  v11 = v5 + 4LL * (unsigned int)v9;
  if (v9 >= 0) {
    return (void*)v11;
  }
  else {
    return GameData_212c8a8;
  }
}

__int64 UnitItemList_710300(unsigned __int16* a1, __int64 a2)
{
  char* v2;
  __int64 v3;
  unsigned __int16* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  unsigned __int8* v10;
  unsigned int v11;
  bool v12;
  unsigned int v13;
  __int64 v15;
  int v16;
  bool v17;
  int v18;
  unsigned __int8* v19;
  unsigned int v20;
  bool v21;
  __int64 v22;

  if (a2 != 0) {
    v2 = (char*)a1 + 11;
    v3 = 2;
    v5 = a1;
    v6 = GameData_212c878[0];
    v7 = *GameData_212c878[0];
    while (1) {
      if (*(_WORD*)(v2 - 11) != 0 && (*(v2 - 8) & 1) != 0) {
        v8 = *(_QWORD*)(v7 + 64);
        if (*(unsigned __int8*)(*(_QWORD*)(v8 +
                                           8LL *
                                               *(unsigned __int16*)(v2 - 11)) +
                                72LL) < 8u) {
          LODWORD(v3) = v3 - 2;
          goto LABEL_16;
        }
      }
      if (*(_WORD*)(v2 - 3) != 0 && (*v2 & 1) != 0) {
        v8 = *(_QWORD*)(v7 + 64);
        if (*(unsigned __int8*)(*(_QWORD*)(v8 +
                                           8LL * *(unsigned __int16*)(v2 - 3)) +
                                72LL) < 8u) {
          break;
        }
      }
      if (*(_WORD*)(v2 + 5) != 0 && (v2[8] & 1) != 0) {
        v8 = *(_QWORD*)(v7 + 64);
        if (*(unsigned __int8*)(*(_QWORD*)(v8 +
                                           8LL * *(unsigned __int16*)(v2 + 5)) +
                                72LL) < 8u) {
          goto LABEL_16;
        }
      }
      v3 += 3;
      v2 += 24;
      if (v3 == 32) {
        goto LABEL_26;
      }
    }
    LODWORD(v3) = v3 - 1;
  LABEL_16:
    v9 = &a1[4 * (unsigned int)v3];
    v10 = *(unsigned __int8**)(v8 + 8LL * *v9);
    v11 = v10[72];
    v12 = v11 <= 7 && v10[73] == 1;
    if (v12 &&
        (v11 - 5 > 1 ||
         (*((_DWORD*)v9 + 1) & 0xF) * (unsigned int)v10[87] - 1 >=
             *((unsigned __int8*)v9 + 2)) &&
        (*((_BYTE*)v9 + 3) & 0x20) == 0) {
      return (unsigned int)-1;
    }
  LABEL_26:
    v13 = -1;
    v15 = 0;
    v16 = 0;
    do {
      v19 = *(unsigned __int8**)(*(_QWORD*)(*v6 + 64) + 8LL * *v5);
      v20 = v19[72];
      v21 = v20 <= 7 && v19[73] == 1;
      if (v21 &&
          (v20 - 5 > 1 ||
           (*((_DWORD*)v5 + 1) & 0xF) * (unsigned int)v19[87] - 1 >=
               *((unsigned __int8*)v5 + 2)) &&
          (*((_BYTE*)v5 + 3) & 0x20) == 0 && UnitItem_6e8bc0(v5, a2)) {
        v22 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * *v5);
        if (*(unsigned __int8*)(v22 + 72) <= 7u && *(_BYTE*)(v22 + 73) == 1) {
          v17 = GameRoutine_6ed370(v22);
          v18 = game_Unit_GetAttack(
              a2, v17,
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * *v5) +
                                  88LL) >>
                  ((*((_BYTE*)v5 + 3) & 8) != 0),
              1, 1);
        }
        else {
          v18 = 0;
        }
        if (v16 < v18) {
          v13 = v15;
        }
        if (v16 <= v18) {
          v16 = v18;
        }
      }
      ++v15;
      v5 += 4;
    } while (v15 != 30);
  }
  else {
    return (unsigned int)-1;
  }
  return v13;
}

__int64 UnitItemList_710640(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  v1 = *(unsigned __int16*)(a1 + 48);
  if (*(_WORD*)(a1 + 48) != 0) {
    v2 = (*(_DWORD*)(a1 + 52) & 0xF) *
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8 * v1) +
                                 87LL) -
         *(unsigned __int8*)(a1 + 50);
    LODWORD(v1) = v2 & ~(v2 >> 31);
  }
  if (*(_WORD*)(a1 + 56) != 0) {
    v3 = (*(_DWORD*)(a1 + 60) & 0xF) *
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8LL *
                                                *(unsigned __int16*)(a1 + 56)) +
                                 87LL) -
         *(unsigned __int8*)(a1 + 58);
    LODWORD(v1) = (v3 & ~(v3 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 64) != 0) {
    v4 = (*(_DWORD*)(a1 + 68) & 0xF) *
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8LL *
                                                *(unsigned __int16*)(a1 + 64)) +
                                 87LL) -
         *(unsigned __int8*)(a1 + 66);
    LODWORD(v1) = (v4 & ~(v4 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 72) != 0) {
    v5 = (*(_DWORD*)(a1 + 76) & 0xF) *
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8LL *
                                                *(unsigned __int16*)(a1 + 72)) +
                                 87LL) -
         *(unsigned __int8*)(a1 + 74);
    LODWORD(v1) = (v5 & ~(v5 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 80) != 0) {
    v6 = (*(_DWORD*)(a1 + 84) & 0xF) *
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8LL *
                                                *(unsigned __int16*)(a1 + 80)) +
                                 87LL) -
         *(unsigned __int8*)(a1 + 82);
    LODWORD(v1) = (v6 & ~(v6 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 88) != 0) {
    v7 = (*(_DWORD*)(a1 + 92) & 0xF) *
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8LL *
                                                *(unsigned __int16*)(a1 + 88)) +
                                 87LL) -
         *(unsigned __int8*)(a1 + 90);
    LODWORD(v1) = (v7 & ~(v7 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 96) != 0) {
    v8 = (*(_DWORD*)(a1 + 100) & 0xF) *
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8LL *
                                                *(unsigned __int16*)(a1 + 96)) +
                                 87LL) -
         *(unsigned __int8*)(a1 + 98);
    LODWORD(v1) = (v8 & ~(v8 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 104) != 0) {
    v9 = (*(_DWORD*)(a1 + 108) & 0xF) *
             *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8LL * *(unsigned __int16*)(a1 +
                                                                       104)) +
                                 87LL) -
         *(unsigned __int8*)(a1 + 106);
    LODWORD(v1) = (v9 & ~(v9 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 112) != 0) {
    v10 = (*(_DWORD*)(a1 + 116) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        112)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 114);
    LODWORD(v1) = (v10 & ~(v10 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 120) != 0) {
    v11 = (*(_DWORD*)(a1 + 124) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        120)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 122);
    LODWORD(v1) = (v11 & ~(v11 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 128) != 0) {
    v12 = (*(_DWORD*)(a1 + 132) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        128)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 130);
    LODWORD(v1) = (v12 & ~(v12 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 136) != 0) {
    v13 = (*(_DWORD*)(a1 + 140) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        136)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 138);
    LODWORD(v1) = (v13 & ~(v13 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 144) != 0) {
    v14 = (*(_DWORD*)(a1 + 148) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        144)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 146);
    LODWORD(v1) = (v14 & ~(v14 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 152) != 0) {
    v15 = (*(_DWORD*)(a1 + 156) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        152)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 154);
    LODWORD(v1) = (v15 & ~(v15 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 160) != 0) {
    v16 = (*(_DWORD*)(a1 + 164) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        160)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 162);
    LODWORD(v1) = (v16 & ~(v16 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 168) != 0) {
    v17 = (*(_DWORD*)(a1 + 172) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        168)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 170);
    LODWORD(v1) = (v17 & ~(v17 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 176) != 0) {
    v18 = (*(_DWORD*)(a1 + 180) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        176)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 178);
    LODWORD(v1) = (v18 & ~(v18 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 184) != 0) {
    v19 = (*(_DWORD*)(a1 + 188) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        184)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 186);
    LODWORD(v1) = (v19 & ~(v19 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 192) != 0) {
    v20 = (*(_DWORD*)(a1 + 196) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        192)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 194);
    LODWORD(v1) = (v20 & ~(v20 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 200) != 0) {
    v21 = (*(_DWORD*)(a1 + 204) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        200)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 202);
    LODWORD(v1) = (v21 & ~(v21 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 208) != 0) {
    v22 = (*(_DWORD*)(a1 + 212) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        208)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 210);
    LODWORD(v1) = (v22 & ~(v22 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 216) != 0) {
    v23 = (*(_DWORD*)(a1 + 220) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        216)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 218);
    LODWORD(v1) = (v23 & ~(v23 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 224) != 0) {
    v24 = (*(_DWORD*)(a1 + 228) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        224)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 226);
    LODWORD(v1) = (v24 & ~(v24 >> 31)) + v1;
  }
  if (*(_WORD*)(a1 + 232) != 0) {
    v25 = (*(_DWORD*)(a1 + 236) & 0xF) *
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                        64) +
                                             8LL * *(unsigned __int16*)(a1 +
                                                                        232)) +
                                  87LL) -
          *(unsigned __int8*)(a1 + 234);
    LODWORD(v1) = (v25 & ~(v25 >> 31)) + v1;
  }
  return (unsigned int)v1;
}

__int64 UnitItemList_710b30(__int64 a1)
{
  __int64 v1;

  v1 = *(unsigned __int16*)(a1 + 48);
  if (*(_WORD*)(a1 + 48) != 0) {
    LODWORD(v1) =
        (*(_DWORD*)(a1 + 52) & 0xF) *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8 * v1) +
                            87LL);
  }
  if (*(_WORD*)(a1 + 56) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 60) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 56)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 64) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 68) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 64)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 72) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 76) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 72)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 80) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 84) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 80)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 88) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 92) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 88)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 96) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 100) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 96)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 104) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 108) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 104)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 112) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 116) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 112)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 120) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 124) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 120)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 128) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 132) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 128)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 136) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 140) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 136)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 144) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 148) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 144)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 152) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 156) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 152)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 160) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 164) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 160)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 168) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 172) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 168)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 176) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 180) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 176)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 184) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 188) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 184)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 192) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 196) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 192)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 200) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 204) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 200)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 208) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 212) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 208)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 216) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 220) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 216)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 224) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 228) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 224)) +
                                87LL);
  }
  if (*(_WORD*)(a1 + 232) != 0) {
    LODWORD(v1) =
        v1 +
        (*(_DWORD*)(a1 + 236) & 0xF) *
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8LL *
                                               *(unsigned __int16*)(a1 + 232)) +
                                87LL);
  }
  return (unsigned int)v1;
}

__int64 UnitItemList_710ea0(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *GameData_212c878[0];
  v2 = *(_QWORD*)(*GameData_212c878[0] + 64);
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       48)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 50) != 0) {
    *(_BYTE*)(result + 50) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       56)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 58) != 0) {
    *(_BYTE*)(result + 58) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       64)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 66) != 0) {
    *(_BYTE*)(result + 66) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       72)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 74) != 0) {
    *(_BYTE*)(result + 74) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       80)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 82) != 0) {
    *(_BYTE*)(result + 82) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       88)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 90) != 0) {
    *(_BYTE*)(result + 90) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       96)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 98) != 0) {
    *(_BYTE*)(result + 98) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       104)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 106) != 0) {
    *(_BYTE*)(result + 106) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       112)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 114) != 0) {
    *(_BYTE*)(result + 114) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       120)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 122) != 0) {
    *(_BYTE*)(result + 122) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       128)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 130) != 0) {
    *(_BYTE*)(result + 130) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       136)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 138) != 0) {
    *(_BYTE*)(result + 138) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       144)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 146) != 0) {
    *(_BYTE*)(result + 146) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       152)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 154) != 0) {
    *(_BYTE*)(result + 154) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       160)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 162) != 0) {
    *(_BYTE*)(result + 162) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       168)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 170) != 0) {
    *(_BYTE*)(result + 170) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       176)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 178) != 0) {
    *(_BYTE*)(result + 178) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       184)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 186) != 0) {
    *(_BYTE*)(result + 186) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       192)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 194) != 0) {
    *(_BYTE*)(result + 194) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       200)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 202) != 0) {
    *(_BYTE*)(result + 202) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       208)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 210) != 0) {
    *(_BYTE*)(result + 210) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       216)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 218) != 0) {
    *(_BYTE*)(result + 218) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       224)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 226) != 0) {
    *(_BYTE*)(result + 226) = 0;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(v2 + 8LL * *(unsigned __int16*)(result +
                                                                       232)) +
                            72LL) -
              5 >=
          2 &&
      *(_BYTE*)(result + 234) != 0) {
    *(_BYTE*)(result + 234) = 0;
  }
  return result;
}

__int64 UnitItemList_711470(__int64 result, int a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned __int8 v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  _BYTE* v14;
  char v15;
  char v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  unsigned __int8 v23;
  __int64 v24;
  int v25;
  int v26;
  unsigned int v27;
  _BYTE* v28;
  char v29;
  char v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  unsigned __int8 v37;
  __int64 v38;
  int v39;
  int v40;
  unsigned int v41;
  _BYTE* v42;
  char v43;
  char v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned __int8 v51;
  __int64 v52;
  int v53;
  int v54;
  unsigned int v55;
  _BYTE* v56;
  char v57;
  char v58;
  __int64 v59;
  __int64 v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  unsigned __int8 v65;
  __int64 v66;
  int v67;
  int v68;
  unsigned int v69;
  _BYTE* v70;
  char v71;
  char v72;
  __int64 v73;
  __int64 v74;
  int v75;
  int v76;
  unsigned int v77;
  int v78;
  unsigned __int8 v79;
  __int64 v80;
  int v81;
  int v82;
  unsigned int v83;
  _BYTE* v84;
  char v85;
  char v86;
  __int64 v87;
  __int64 v88;
  int v89;
  int v90;
  unsigned int v91;
  int v92;
  unsigned __int8 v93;
  __int64 v94;
  int v95;
  int v96;
  unsigned int v97;
  _BYTE* v98;
  char v99;
  char v100;
  __int64 v101;
  __int64 v102;
  int v103;
  int v104;
  unsigned int v105;
  int v106;
  unsigned __int8 v107;
  __int64 v108;
  int v109;
  int v110;
  unsigned int v111;
  _BYTE* v112;
  char v113;
  char v114;
  __int64 v115;
  __int64 v116;
  int v117;
  int v118;
  unsigned int v119;
  int v120;
  unsigned __int8 v121;
  __int64 v122;
  int v123;
  int v124;
  unsigned int v125;
  _BYTE* v126;
  char v127;
  char v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  unsigned int v133;
  int v134;
  unsigned __int8 v135;
  __int64 v136;
  int v137;
  int v138;
  unsigned int v139;
  _BYTE* v140;
  char v141;
  char v142;
  __int64 v143;
  __int64 v144;
  int v145;
  int v146;
  unsigned int v147;
  int v148;
  unsigned __int8 v149;
  __int64 v150;
  int v151;
  int v152;
  unsigned int v153;
  _BYTE* v154;
  char v155;
  char v156;
  __int64 v157;
  __int64 v158;
  int v159;
  int v160;
  unsigned int v161;
  int v162;
  unsigned __int8 v163;
  __int64 v164;
  int v165;
  int v166;
  unsigned int v167;
  _BYTE* v168;
  char v169;
  char v170;
  __int64 v171;
  __int64 v172;
  int v173;
  int v174;
  unsigned int v175;
  int v176;
  unsigned __int8 v177;
  __int64 v178;
  int v179;
  int v180;
  unsigned int v181;
  _BYTE* v182;
  char v183;
  char v184;
  __int64 v185;
  __int64 v186;
  int v187;
  int v188;
  unsigned int v189;
  int v190;
  unsigned __int8 v191;
  __int64 v192;
  int v193;
  int v194;
  unsigned int v195;
  _BYTE* v196;
  char v197;
  char v198;
  __int64 v199;
  __int64 v200;
  int v201;
  int v202;
  unsigned int v203;
  int v204;
  unsigned __int8 v205;
  __int64 v206;
  int v207;
  int v208;
  unsigned int v209;
  _BYTE* v210;
  char v211;
  char v212;
  __int64 v213;
  __int64 v214;
  int v215;
  int v216;
  unsigned int v217;
  int v218;
  unsigned __int8 v219;
  __int64 v220;
  int v221;
  int v222;
  unsigned int v223;
  _BYTE* v224;
  char v225;
  char v226;
  __int64 v227;
  __int64 v228;
  int v229;
  int v230;
  unsigned int v231;
  int v232;
  unsigned __int8 v233;
  __int64 v234;
  int v235;
  int v236;
  unsigned int v237;
  _BYTE* v238;
  char v239;
  char v240;
  __int64 v241;
  __int64 v242;
  int v243;
  int v244;
  unsigned int v245;
  int v246;
  unsigned __int8 v247;
  __int64 v248;
  int v249;
  int v250;
  unsigned int v251;
  _BYTE* v252;
  char v253;
  char v254;
  __int64 v255;
  __int64 v256;
  int v257;
  int v258;
  unsigned int v259;
  int v260;
  unsigned __int8 v261;
  __int64 v262;
  int v263;
  int v264;
  unsigned int v265;
  _BYTE* v266;
  char v267;
  char v268;
  __int64 v269;
  __int64 v270;
  int v271;
  int v272;
  unsigned int v273;
  int v274;
  unsigned __int8 v275;
  __int64 v276;
  int v277;
  int v278;
  unsigned int v279;
  _BYTE* v280;
  char v281;
  char v282;
  __int64 v283;
  __int64 v284;
  int v285;
  int v286;
  unsigned int v287;
  int v288;
  unsigned __int8 v289;
  __int64 v290;
  int v291;
  int v292;
  unsigned int v293;
  _BYTE* v294;
  char v295;
  char v296;
  __int64 v297;
  __int64 v298;
  int v299;
  int v300;
  unsigned int v301;
  int v302;
  unsigned __int8 v303;
  __int64 v304;
  int v305;
  int v306;
  unsigned int v307;
  _BYTE* v308;
  char v309;
  char v310;
  __int64 v311;
  __int64 v312;
  int v313;
  int v314;
  unsigned int v315;
  int v316;
  unsigned __int8 v317;
  __int64 v318;
  int v319;
  int v320;
  unsigned int v321;
  _BYTE* v322;
  char v323;
  char v324;
  __int64 v325;
  __int64 v326;
  int v327;
  int v328;
  int v329;
  unsigned int v330;
  int v331;
  unsigned __int8 v332;
  __int64 v333;
  int v334;
  int v335;
  unsigned int v336;
  _BYTE* v337;
  char v338;
  char v339;

  v2 = GameData_212c878[0];
  if (*(_BYTE*)(result + 50) != 0) {
    v3 = *GameData_212c878[0];
    v4 = *(unsigned __int16*)(result + 48);
    v5 = *(_DWORD*)(result + 52) & 0xF;
    v6 = v5 *
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8 * v4) +
                             87LL);
    v7 = (v6 - *(unsigned __int8*)(result + 50)) &
         ~((v6 - *(unsigned __int8*)(result + 50)) >> 31);
    if (v7 < v6) {
      v8 = v6 - a2 - v7;
      if (v6 >= v8) {
        LOBYTE(v6) = v8;
      }
      if (v8 >= 0) {
        v9 = v6;
      }
      else {
        v9 = 0;
      }
      *(_BYTE*)(result + 50) = v9;
      v10 = *(_QWORD*)(*(_QWORD*)(v3 + 64) + 8 * v4);
      v11 = *(unsigned __int8*)(v10 + 87);
      if (*(_BYTE*)(v10 + 87) != 0 &&
          (unsigned int)(v12 = *(unsigned __int8*)(v10 + 72)) < 8) {
        v13 = v12 - 7;
        v14 = (_BYTE*)(result + 51);
        if (v13 <= 0xFFFFFFFD) {
          if (v5 * v11 <= (unsigned int)v9) {
            v15 = 8;
          }
          else {
            v15 = 0;
          }
          v16 = *v14 & 0xF7 | v15;
          goto LABEL_17;
        }
      }
      else {
        v14 = (_BYTE*)(result + 51);
      }
      v16 = *v14 & 0xF7;
    LABEL_17:
      *v14 = v16;
    }
  }
  if (*(_BYTE*)(result + 58) != 0) {
    v17 = *v2;
    v18 = *(unsigned __int16*)(result + 56);
    v19 = *(_DWORD*)(result + 60) & 0xF;
    v20 = v19 * *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v18) +
                                    87LL);
    v21 = (v20 - *(unsigned __int8*)(result + 58)) &
          ~((v20 - *(unsigned __int8*)(result + 58)) >> 31);
    if (v21 < v20) {
      v22 = v20 - a2 - v21;
      if (v20 >= v22) {
        LOBYTE(v20) = v22;
      }
      if (v22 >= 0) {
        v23 = v20;
      }
      else {
        v23 = 0;
      }
      *(_BYTE*)(result + 58) = v23;
      v24 = *(_QWORD*)(*(_QWORD*)(v17 + 64) + 8 * v18);
      v25 = *(unsigned __int8*)(v24 + 87);
      if (*(_BYTE*)(v24 + 87) != 0 &&
          (unsigned int)(v26 = *(unsigned __int8*)(v24 + 72)) < 8) {
        v27 = v26 - 7;
        v28 = (_BYTE*)(result + 59);
        if (v27 <= 0xFFFFFFFD) {
          if (v19 * v25 <= (unsigned int)v23) {
            v29 = 8;
          }
          else {
            v29 = 0;
          }
          v30 = *v28 & 0xF7 | v29;
          goto LABEL_34;
        }
      }
      else {
        v28 = (_BYTE*)(result + 59);
      }
      v30 = *v28 & 0xF7;
    LABEL_34:
      *v28 = v30;
    }
  }
  if (*(_BYTE*)(result + 66) != 0) {
    v31 = *v2;
    v32 = *(unsigned __int16*)(result + 64);
    v33 = *(_DWORD*)(result + 68) & 0xF;
    v34 = v33 * *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v32) +
                                    87LL);
    v35 = (v34 - *(unsigned __int8*)(result + 66)) &
          ~((v34 - *(unsigned __int8*)(result + 66)) >> 31);
    if (v35 < v34) {
      v36 = v34 - a2 - v35;
      if (v34 >= v36) {
        LOBYTE(v34) = v36;
      }
      if (v36 >= 0) {
        v37 = v34;
      }
      else {
        v37 = 0;
      }
      *(_BYTE*)(result + 66) = v37;
      v38 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8 * v32);
      v39 = *(unsigned __int8*)(v38 + 87);
      if (*(_BYTE*)(v38 + 87) != 0 &&
          (unsigned int)(v40 = *(unsigned __int8*)(v38 + 72)) < 8) {
        v41 = v40 - 7;
        v42 = (_BYTE*)(result + 67);
        if (v41 <= 0xFFFFFFFD) {
          if (v33 * v39 <= (unsigned int)v37) {
            v43 = 8;
          }
          else {
            v43 = 0;
          }
          v44 = *v42 & 0xF7 | v43;
          goto LABEL_51;
        }
      }
      else {
        v42 = (_BYTE*)(result + 67);
      }
      v44 = *v42 & 0xF7;
    LABEL_51:
      *v42 = v44;
    }
  }
  if (*(_BYTE*)(result + 74) != 0) {
    v45 = *v2;
    v46 = *(unsigned __int16*)(result + 72);
    v47 = *(_DWORD*)(result + 76) & 0xF;
    v48 = v47 * *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v46) +
                                    87LL);
    v49 = (v48 - *(unsigned __int8*)(result + 74)) &
          ~((v48 - *(unsigned __int8*)(result + 74)) >> 31);
    if (v49 < v48) {
      v50 = v48 - a2 - v49;
      if (v48 >= v50) {
        LOBYTE(v48) = v50;
      }
      if (v50 >= 0) {
        v51 = v48;
      }
      else {
        v51 = 0;
      }
      *(_BYTE*)(result + 74) = v51;
      v52 = *(_QWORD*)(*(_QWORD*)(v45 + 64) + 8 * v46);
      v53 = *(unsigned __int8*)(v52 + 87);
      if (*(_BYTE*)(v52 + 87) != 0 &&
          (unsigned int)(v54 = *(unsigned __int8*)(v52 + 72)) < 8) {
        v55 = v54 - 7;
        v56 = (_BYTE*)(result + 75);
        if (v55 <= 0xFFFFFFFD) {
          if (v47 * v53 <= (unsigned int)v51) {
            v57 = 8;
          }
          else {
            v57 = 0;
          }
          v58 = *v56 & 0xF7 | v57;
          goto LABEL_68;
        }
      }
      else {
        v56 = (_BYTE*)(result + 75);
      }
      v58 = *v56 & 0xF7;
    LABEL_68:
      *v56 = v58;
    }
  }
  if (*(_BYTE*)(result + 82) != 0) {
    v59 = *v2;
    v60 = *(unsigned __int16*)(result + 80);
    v61 = *(_DWORD*)(result + 84) & 0xF;
    v62 = v61 * *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v60) +
                                    87LL);
    v63 = (v62 - *(unsigned __int8*)(result + 82)) &
          ~((v62 - *(unsigned __int8*)(result + 82)) >> 31);
    if (v63 < v62) {
      v64 = v62 - a2 - v63;
      if (v62 >= v64) {
        LOBYTE(v62) = v64;
      }
      if (v64 >= 0) {
        v65 = v62;
      }
      else {
        v65 = 0;
      }
      *(_BYTE*)(result + 82) = v65;
      v66 = *(_QWORD*)(*(_QWORD*)(v59 + 64) + 8 * v60);
      v67 = *(unsigned __int8*)(v66 + 87);
      if (*(_BYTE*)(v66 + 87) != 0 &&
          (unsigned int)(v68 = *(unsigned __int8*)(v66 + 72)) < 8) {
        v69 = v68 - 7;
        v70 = (_BYTE*)(result + 83);
        if (v69 <= 0xFFFFFFFD) {
          if (v61 * v67 <= (unsigned int)v65) {
            v71 = 8;
          }
          else {
            v71 = 0;
          }
          v72 = *v70 & 0xF7 | v71;
          goto LABEL_85;
        }
      }
      else {
        v70 = (_BYTE*)(result + 83);
      }
      v72 = *v70 & 0xF7;
    LABEL_85:
      *v70 = v72;
    }
  }
  if (*(_BYTE*)(result + 90) != 0) {
    v73 = *v2;
    v74 = *(unsigned __int16*)(result + 88);
    v75 = *(_DWORD*)(result + 92) & 0xF;
    v76 = v75 * *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v74) +
                                    87LL);
    v77 = (v76 - *(unsigned __int8*)(result + 90)) &
          ~((v76 - *(unsigned __int8*)(result + 90)) >> 31);
    if (v77 < v76) {
      v78 = v76 - a2 - v77;
      if (v76 >= v78) {
        LOBYTE(v76) = v78;
      }
      if (v78 >= 0) {
        v79 = v76;
      }
      else {
        v79 = 0;
      }
      *(_BYTE*)(result + 90) = v79;
      v80 = *(_QWORD*)(*(_QWORD*)(v73 + 64) + 8 * v74);
      v81 = *(unsigned __int8*)(v80 + 87);
      if (*(_BYTE*)(v80 + 87) != 0 &&
          (unsigned int)(v82 = *(unsigned __int8*)(v80 + 72)) < 8) {
        v83 = v82 - 7;
        v84 = (_BYTE*)(result + 91);
        if (v83 <= 0xFFFFFFFD) {
          if (v75 * v81 <= (unsigned int)v79) {
            v85 = 8;
          }
          else {
            v85 = 0;
          }
          v86 = *v84 & 0xF7 | v85;
          goto LABEL_102;
        }
      }
      else {
        v84 = (_BYTE*)(result + 91);
      }
      v86 = *v84 & 0xF7;
    LABEL_102:
      *v84 = v86;
    }
  }
  if (*(_BYTE*)(result + 98) != 0) {
    v87 = *v2;
    v88 = *(unsigned __int16*)(result + 96);
    v89 = *(_DWORD*)(result + 100) & 0xF;
    v90 = v89 * *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v88) +
                                    87LL);
    v91 = (v90 - *(unsigned __int8*)(result + 98)) &
          ~((v90 - *(unsigned __int8*)(result + 98)) >> 31);
    if (v91 < v90) {
      v92 = v90 - a2 - v91;
      if (v90 >= v92) {
        LOBYTE(v90) = v92;
      }
      if (v92 >= 0) {
        v93 = v90;
      }
      else {
        v93 = 0;
      }
      *(_BYTE*)(result + 98) = v93;
      v94 = *(_QWORD*)(*(_QWORD*)(v87 + 64) + 8 * v88);
      v95 = *(unsigned __int8*)(v94 + 87);
      if (*(_BYTE*)(v94 + 87) != 0 &&
          (unsigned int)(v96 = *(unsigned __int8*)(v94 + 72)) < 8) {
        v97 = v96 - 7;
        v98 = (_BYTE*)(result + 99);
        if (v97 <= 0xFFFFFFFD) {
          if (v89 * v95 <= (unsigned int)v93) {
            v99 = 8;
          }
          else {
            v99 = 0;
          }
          v100 = *v98 & 0xF7 | v99;
          goto LABEL_119;
        }
      }
      else {
        v98 = (_BYTE*)(result + 99);
      }
      v100 = *v98 & 0xF7;
    LABEL_119:
      *v98 = v100;
    }
  }
  if (*(_BYTE*)(result + 106) != 0) {
    v101 = *v2;
    v102 = *(unsigned __int16*)(result + 104);
    v103 = *(_DWORD*)(result + 108) & 0xF;
    v104 =
        v103 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v102) + 87LL);
    v105 = (v104 - *(unsigned __int8*)(result + 106)) &
           ~((v104 - *(unsigned __int8*)(result + 106)) >> 31);
    if (v105 < v104) {
      v106 = v104 - a2 - v105;
      if (v104 >= v106) {
        LOBYTE(v104) = v106;
      }
      if (v106 >= 0) {
        v107 = v104;
      }
      else {
        v107 = 0;
      }
      *(_BYTE*)(result + 106) = v107;
      v108 = *(_QWORD*)(*(_QWORD*)(v101 + 64) + 8 * v102);
      v109 = *(unsigned __int8*)(v108 + 87);
      if (*(_BYTE*)(v108 + 87) != 0 &&
          (unsigned int)(v110 = *(unsigned __int8*)(v108 + 72)) < 8) {
        v111 = v110 - 7;
        v112 = (_BYTE*)(result + 107);
        if (v111 <= 0xFFFFFFFD) {
          if (v103 * v109 <= (unsigned int)v107) {
            v113 = 8;
          }
          else {
            v113 = 0;
          }
          v114 = *v112 & 0xF7 | v113;
          goto LABEL_136;
        }
      }
      else {
        v112 = (_BYTE*)(result + 107);
      }
      v114 = *v112 & 0xF7;
    LABEL_136:
      *v112 = v114;
    }
  }
  if (*(_BYTE*)(result + 114) != 0) {
    v115 = *v2;
    v116 = *(unsigned __int16*)(result + 112);
    v117 = *(_DWORD*)(result + 116) & 0xF;
    v118 =
        v117 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v116) + 87LL);
    v119 = (v118 - *(unsigned __int8*)(result + 114)) &
           ~((v118 - *(unsigned __int8*)(result + 114)) >> 31);
    if (v119 < v118) {
      v120 = v118 - a2 - v119;
      if (v118 >= v120) {
        LOBYTE(v118) = v120;
      }
      if (v120 >= 0) {
        v121 = v118;
      }
      else {
        v121 = 0;
      }
      *(_BYTE*)(result + 114) = v121;
      v122 = *(_QWORD*)(*(_QWORD*)(v115 + 64) + 8 * v116);
      v123 = *(unsigned __int8*)(v122 + 87);
      if (*(_BYTE*)(v122 + 87) != 0 &&
          (unsigned int)(v124 = *(unsigned __int8*)(v122 + 72)) < 8) {
        v125 = v124 - 7;
        v126 = (_BYTE*)(result + 115);
        if (v125 <= 0xFFFFFFFD) {
          if (v117 * v123 <= (unsigned int)v121) {
            v127 = 8;
          }
          else {
            v127 = 0;
          }
          v128 = *v126 & 0xF7 | v127;
          goto LABEL_153;
        }
      }
      else {
        v126 = (_BYTE*)(result + 115);
      }
      v128 = *v126 & 0xF7;
    LABEL_153:
      *v126 = v128;
    }
  }
  if (*(_BYTE*)(result + 122) != 0) {
    v129 = *v2;
    v130 = *(unsigned __int16*)(result + 120);
    v131 = *(_DWORD*)(result + 124) & 0xF;
    v132 =
        v131 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v130) + 87LL);
    v133 = (v132 - *(unsigned __int8*)(result + 122)) &
           ~((v132 - *(unsigned __int8*)(result + 122)) >> 31);
    if (v133 < v132) {
      v134 = v132 - a2 - v133;
      if (v132 >= v134) {
        LOBYTE(v132) = v134;
      }
      if (v134 >= 0) {
        v135 = v132;
      }
      else {
        v135 = 0;
      }
      *(_BYTE*)(result + 122) = v135;
      v136 = *(_QWORD*)(*(_QWORD*)(v129 + 64) + 8 * v130);
      v137 = *(unsigned __int8*)(v136 + 87);
      if (*(_BYTE*)(v136 + 87) != 0 &&
          (unsigned int)(v138 = *(unsigned __int8*)(v136 + 72)) < 8) {
        v139 = v138 - 7;
        v140 = (_BYTE*)(result + 123);
        if (v139 <= 0xFFFFFFFD) {
          if (v131 * v137 <= (unsigned int)v135) {
            v141 = 8;
          }
          else {
            v141 = 0;
          }
          v142 = *v140 & 0xF7 | v141;
          goto LABEL_170;
        }
      }
      else {
        v140 = (_BYTE*)(result + 123);
      }
      v142 = *v140 & 0xF7;
    LABEL_170:
      *v140 = v142;
    }
  }
  if (*(_BYTE*)(result + 130) != 0) {
    v143 = *v2;
    v144 = *(unsigned __int16*)(result + 128);
    v145 = *(_DWORD*)(result + 132) & 0xF;
    v146 =
        v145 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v144) + 87LL);
    v147 = (v146 - *(unsigned __int8*)(result + 130)) &
           ~((v146 - *(unsigned __int8*)(result + 130)) >> 31);
    if (v147 < v146) {
      v148 = v146 - a2 - v147;
      if (v146 >= v148) {
        LOBYTE(v146) = v148;
      }
      if (v148 >= 0) {
        v149 = v146;
      }
      else {
        v149 = 0;
      }
      *(_BYTE*)(result + 130) = v149;
      v150 = *(_QWORD*)(*(_QWORD*)(v143 + 64) + 8 * v144);
      v151 = *(unsigned __int8*)(v150 + 87);
      if (*(_BYTE*)(v150 + 87) != 0 &&
          (unsigned int)(v152 = *(unsigned __int8*)(v150 + 72)) < 8) {
        v153 = v152 - 7;
        v154 = (_BYTE*)(result + 131);
        if (v153 <= 0xFFFFFFFD) {
          if (v145 * v151 <= (unsigned int)v149) {
            v155 = 8;
          }
          else {
            v155 = 0;
          }
          v156 = *v154 & 0xF7 | v155;
          goto LABEL_187;
        }
      }
      else {
        v154 = (_BYTE*)(result + 131);
      }
      v156 = *v154 & 0xF7;
    LABEL_187:
      *v154 = v156;
    }
  }
  if (*(_BYTE*)(result + 138) != 0) {
    v157 = *v2;
    v158 = *(unsigned __int16*)(result + 136);
    v159 = *(_DWORD*)(result + 140) & 0xF;
    v160 =
        v159 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v158) + 87LL);
    v161 = (v160 - *(unsigned __int8*)(result + 138)) &
           ~((v160 - *(unsigned __int8*)(result + 138)) >> 31);
    if (v161 < v160) {
      v162 = v160 - a2 - v161;
      if (v160 >= v162) {
        LOBYTE(v160) = v162;
      }
      if (v162 >= 0) {
        v163 = v160;
      }
      else {
        v163 = 0;
      }
      *(_BYTE*)(result + 138) = v163;
      v164 = *(_QWORD*)(*(_QWORD*)(v157 + 64) + 8 * v158);
      v165 = *(unsigned __int8*)(v164 + 87);
      if (*(_BYTE*)(v164 + 87) != 0 &&
          (unsigned int)(v166 = *(unsigned __int8*)(v164 + 72)) < 8) {
        v167 = v166 - 7;
        v168 = (_BYTE*)(result + 139);
        if (v167 <= 0xFFFFFFFD) {
          if (v159 * v165 <= (unsigned int)v163) {
            v169 = 8;
          }
          else {
            v169 = 0;
          }
          v170 = *v168 & 0xF7 | v169;
          goto LABEL_204;
        }
      }
      else {
        v168 = (_BYTE*)(result + 139);
      }
      v170 = *v168 & 0xF7;
    LABEL_204:
      *v168 = v170;
    }
  }
  if (*(_BYTE*)(result + 146) != 0) {
    v171 = *v2;
    v172 = *(unsigned __int16*)(result + 144);
    v173 = *(_DWORD*)(result + 148) & 0xF;
    v174 =
        v173 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v172) + 87LL);
    v175 = (v174 - *(unsigned __int8*)(result + 146)) &
           ~((v174 - *(unsigned __int8*)(result + 146)) >> 31);
    if (v175 < v174) {
      v176 = v174 - a2 - v175;
      if (v174 >= v176) {
        LOBYTE(v174) = v176;
      }
      if (v176 >= 0) {
        v177 = v174;
      }
      else {
        v177 = 0;
      }
      *(_BYTE*)(result + 146) = v177;
      v178 = *(_QWORD*)(*(_QWORD*)(v171 + 64) + 8 * v172);
      v179 = *(unsigned __int8*)(v178 + 87);
      if (*(_BYTE*)(v178 + 87) != 0 &&
          (unsigned int)(v180 = *(unsigned __int8*)(v178 + 72)) < 8) {
        v181 = v180 - 7;
        v182 = (_BYTE*)(result + 147);
        if (v181 <= 0xFFFFFFFD) {
          if (v173 * v179 <= (unsigned int)v177) {
            v183 = 8;
          }
          else {
            v183 = 0;
          }
          v184 = *v182 & 0xF7 | v183;
          goto LABEL_221;
        }
      }
      else {
        v182 = (_BYTE*)(result + 147);
      }
      v184 = *v182 & 0xF7;
    LABEL_221:
      *v182 = v184;
    }
  }
  if (*(_BYTE*)(result + 154) != 0) {
    v185 = *v2;
    v186 = *(unsigned __int16*)(result + 152);
    v187 = *(_DWORD*)(result + 156) & 0xF;
    v188 =
        v187 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v186) + 87LL);
    v189 = (v188 - *(unsigned __int8*)(result + 154)) &
           ~((v188 - *(unsigned __int8*)(result + 154)) >> 31);
    if (v189 < v188) {
      v190 = v188 - a2 - v189;
      if (v188 >= v190) {
        LOBYTE(v188) = v190;
      }
      if (v190 >= 0) {
        v191 = v188;
      }
      else {
        v191 = 0;
      }
      *(_BYTE*)(result + 154) = v191;
      v192 = *(_QWORD*)(*(_QWORD*)(v185 + 64) + 8 * v186);
      v193 = *(unsigned __int8*)(v192 + 87);
      if (*(_BYTE*)(v192 + 87) != 0 &&
          (unsigned int)(v194 = *(unsigned __int8*)(v192 + 72)) < 8) {
        v195 = v194 - 7;
        v196 = (_BYTE*)(result + 155);
        if (v195 <= 0xFFFFFFFD) {
          if (v187 * v193 <= (unsigned int)v191) {
            v197 = 8;
          }
          else {
            v197 = 0;
          }
          v198 = *v196 & 0xF7 | v197;
          goto LABEL_238;
        }
      }
      else {
        v196 = (_BYTE*)(result + 155);
      }
      v198 = *v196 & 0xF7;
    LABEL_238:
      *v196 = v198;
    }
  }
  if (*(_BYTE*)(result + 162) != 0) {
    v199 = *v2;
    v200 = *(unsigned __int16*)(result + 160);
    v201 = *(_DWORD*)(result + 164) & 0xF;
    v202 =
        v201 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v200) + 87LL);
    v203 = (v202 - *(unsigned __int8*)(result + 162)) &
           ~((v202 - *(unsigned __int8*)(result + 162)) >> 31);
    if (v203 < v202) {
      v204 = v202 - a2 - v203;
      if (v202 >= v204) {
        LOBYTE(v202) = v204;
      }
      if (v204 >= 0) {
        v205 = v202;
      }
      else {
        v205 = 0;
      }
      *(_BYTE*)(result + 162) = v205;
      v206 = *(_QWORD*)(*(_QWORD*)(v199 + 64) + 8 * v200);
      v207 = *(unsigned __int8*)(v206 + 87);
      if (*(_BYTE*)(v206 + 87) != 0 &&
          (unsigned int)(v208 = *(unsigned __int8*)(v206 + 72)) < 8) {
        v209 = v208 - 7;
        v210 = (_BYTE*)(result + 163);
        if (v209 <= 0xFFFFFFFD) {
          if (v201 * v207 <= (unsigned int)v205) {
            v211 = 8;
          }
          else {
            v211 = 0;
          }
          v212 = *v210 & 0xF7 | v211;
          goto LABEL_255;
        }
      }
      else {
        v210 = (_BYTE*)(result + 163);
      }
      v212 = *v210 & 0xF7;
    LABEL_255:
      *v210 = v212;
    }
  }
  if (*(_BYTE*)(result + 170) != 0) {
    v213 = *v2;
    v214 = *(unsigned __int16*)(result + 168);
    v215 = *(_DWORD*)(result + 172) & 0xF;
    v216 =
        v215 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v214) + 87LL);
    v217 = (v216 - *(unsigned __int8*)(result + 170)) &
           ~((v216 - *(unsigned __int8*)(result + 170)) >> 31);
    if (v217 < v216) {
      v218 = v216 - a2 - v217;
      if (v216 >= v218) {
        LOBYTE(v216) = v218;
      }
      if (v218 >= 0) {
        v219 = v216;
      }
      else {
        v219 = 0;
      }
      *(_BYTE*)(result + 170) = v219;
      v220 = *(_QWORD*)(*(_QWORD*)(v213 + 64) + 8 * v214);
      v221 = *(unsigned __int8*)(v220 + 87);
      if (*(_BYTE*)(v220 + 87) != 0 &&
          (unsigned int)(v222 = *(unsigned __int8*)(v220 + 72)) < 8) {
        v223 = v222 - 7;
        v224 = (_BYTE*)(result + 171);
        if (v223 <= 0xFFFFFFFD) {
          if (v215 * v221 <= (unsigned int)v219) {
            v225 = 8;
          }
          else {
            v225 = 0;
          }
          v226 = *v224 & 0xF7 | v225;
          goto LABEL_272;
        }
      }
      else {
        v224 = (_BYTE*)(result + 171);
      }
      v226 = *v224 & 0xF7;
    LABEL_272:
      *v224 = v226;
    }
  }
  if (*(_BYTE*)(result + 178) != 0) {
    v227 = *v2;
    v228 = *(unsigned __int16*)(result + 176);
    v229 = *(_DWORD*)(result + 180) & 0xF;
    v230 =
        v229 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v228) + 87LL);
    v231 = (v230 - *(unsigned __int8*)(result + 178)) &
           ~((v230 - *(unsigned __int8*)(result + 178)) >> 31);
    if (v231 < v230) {
      v232 = v230 - a2 - v231;
      if (v230 >= v232) {
        LOBYTE(v230) = v232;
      }
      if (v232 >= 0) {
        v233 = v230;
      }
      else {
        v233 = 0;
      }
      *(_BYTE*)(result + 178) = v233;
      v234 = *(_QWORD*)(*(_QWORD*)(v227 + 64) + 8 * v228);
      v235 = *(unsigned __int8*)(v234 + 87);
      if (*(_BYTE*)(v234 + 87) != 0 &&
          (unsigned int)(v236 = *(unsigned __int8*)(v234 + 72)) < 8) {
        v237 = v236 - 7;
        v238 = (_BYTE*)(result + 179);
        if (v237 <= 0xFFFFFFFD) {
          if (v229 * v235 <= (unsigned int)v233) {
            v239 = 8;
          }
          else {
            v239 = 0;
          }
          v240 = *v238 & 0xF7 | v239;
          goto LABEL_289;
        }
      }
      else {
        v238 = (_BYTE*)(result + 179);
      }
      v240 = *v238 & 0xF7;
    LABEL_289:
      *v238 = v240;
    }
  }
  if (*(_BYTE*)(result + 186) != 0) {
    v241 = *v2;
    v242 = *(unsigned __int16*)(result + 184);
    v243 = *(_DWORD*)(result + 188) & 0xF;
    v244 =
        v243 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v242) + 87LL);
    v245 = (v244 - *(unsigned __int8*)(result + 186)) &
           ~((v244 - *(unsigned __int8*)(result + 186)) >> 31);
    if (v245 < v244) {
      v246 = v244 - a2 - v245;
      if (v244 >= v246) {
        LOBYTE(v244) = v246;
      }
      if (v246 >= 0) {
        v247 = v244;
      }
      else {
        v247 = 0;
      }
      *(_BYTE*)(result + 186) = v247;
      v248 = *(_QWORD*)(*(_QWORD*)(v241 + 64) + 8 * v242);
      v249 = *(unsigned __int8*)(v248 + 87);
      if (*(_BYTE*)(v248 + 87) != 0 &&
          (unsigned int)(v250 = *(unsigned __int8*)(v248 + 72)) < 8) {
        v251 = v250 - 7;
        v252 = (_BYTE*)(result + 187);
        if (v251 <= 0xFFFFFFFD) {
          if (v243 * v249 <= (unsigned int)v247) {
            v253 = 8;
          }
          else {
            v253 = 0;
          }
          v254 = *v252 & 0xF7 | v253;
          goto LABEL_306;
        }
      }
      else {
        v252 = (_BYTE*)(result + 187);
      }
      v254 = *v252 & 0xF7;
    LABEL_306:
      *v252 = v254;
    }
  }
  if (*(_BYTE*)(result + 194) != 0) {
    v255 = *v2;
    v256 = *(unsigned __int16*)(result + 192);
    v257 = *(_DWORD*)(result + 196) & 0xF;
    v258 =
        v257 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v256) + 87LL);
    v259 = (v258 - *(unsigned __int8*)(result + 194)) &
           ~((v258 - *(unsigned __int8*)(result + 194)) >> 31);
    if (v259 < v258) {
      v260 = v258 - a2 - v259;
      if (v258 >= v260) {
        LOBYTE(v258) = v260;
      }
      if (v260 >= 0) {
        v261 = v258;
      }
      else {
        v261 = 0;
      }
      *(_BYTE*)(result + 194) = v261;
      v262 = *(_QWORD*)(*(_QWORD*)(v255 + 64) + 8 * v256);
      v263 = *(unsigned __int8*)(v262 + 87);
      if (*(_BYTE*)(v262 + 87) != 0 &&
          (unsigned int)(v264 = *(unsigned __int8*)(v262 + 72)) < 8) {
        v265 = v264 - 7;
        v266 = (_BYTE*)(result + 195);
        if (v265 <= 0xFFFFFFFD) {
          if (v257 * v263 <= (unsigned int)v261) {
            v267 = 8;
          }
          else {
            v267 = 0;
          }
          v268 = *v266 & 0xF7 | v267;
          goto LABEL_323;
        }
      }
      else {
        v266 = (_BYTE*)(result + 195);
      }
      v268 = *v266 & 0xF7;
    LABEL_323:
      *v266 = v268;
    }
  }
  if (*(_BYTE*)(result + 202) != 0) {
    v269 = *v2;
    v270 = *(unsigned __int16*)(result + 200);
    v271 = *(_DWORD*)(result + 204) & 0xF;
    v272 =
        v271 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v270) + 87LL);
    v273 = (v272 - *(unsigned __int8*)(result + 202)) &
           ~((v272 - *(unsigned __int8*)(result + 202)) >> 31);
    if (v273 < v272) {
      v274 = v272 - a2 - v273;
      if (v272 >= v274) {
        LOBYTE(v272) = v274;
      }
      if (v274 >= 0) {
        v275 = v272;
      }
      else {
        v275 = 0;
      }
      *(_BYTE*)(result + 202) = v275;
      v276 = *(_QWORD*)(*(_QWORD*)(v269 + 64) + 8 * v270);
      v277 = *(unsigned __int8*)(v276 + 87);
      if (*(_BYTE*)(v276 + 87) != 0 &&
          (unsigned int)(v278 = *(unsigned __int8*)(v276 + 72)) < 8) {
        v279 = v278 - 7;
        v280 = (_BYTE*)(result + 203);
        if (v279 <= 0xFFFFFFFD) {
          if (v271 * v277 <= (unsigned int)v275) {
            v281 = 8;
          }
          else {
            v281 = 0;
          }
          v282 = *v280 & 0xF7 | v281;
          goto LABEL_340;
        }
      }
      else {
        v280 = (_BYTE*)(result + 203);
      }
      v282 = *v280 & 0xF7;
    LABEL_340:
      *v280 = v282;
    }
  }
  if (*(_BYTE*)(result + 210) != 0) {
    v283 = *v2;
    v284 = *(unsigned __int16*)(result + 208);
    v285 = *(_DWORD*)(result + 212) & 0xF;
    v286 =
        v285 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v284) + 87LL);
    v287 = (v286 - *(unsigned __int8*)(result + 210)) &
           ~((v286 - *(unsigned __int8*)(result + 210)) >> 31);
    if (v287 < v286) {
      v288 = v286 - a2 - v287;
      if (v286 >= v288) {
        LOBYTE(v286) = v288;
      }
      if (v288 >= 0) {
        v289 = v286;
      }
      else {
        v289 = 0;
      }
      *(_BYTE*)(result + 210) = v289;
      v290 = *(_QWORD*)(*(_QWORD*)(v283 + 64) + 8 * v284);
      v291 = *(unsigned __int8*)(v290 + 87);
      if (*(_BYTE*)(v290 + 87) != 0 &&
          (unsigned int)(v292 = *(unsigned __int8*)(v290 + 72)) < 8) {
        v293 = v292 - 7;
        v294 = (_BYTE*)(result + 211);
        if (v293 <= 0xFFFFFFFD) {
          if (v285 * v291 <= (unsigned int)v289) {
            v295 = 8;
          }
          else {
            v295 = 0;
          }
          v296 = *v294 & 0xF7 | v295;
          goto LABEL_357;
        }
      }
      else {
        v294 = (_BYTE*)(result + 211);
      }
      v296 = *v294 & 0xF7;
    LABEL_357:
      *v294 = v296;
    }
  }
  if (*(_BYTE*)(result + 218) != 0) {
    v297 = *v2;
    v298 = *(unsigned __int16*)(result + 216);
    v299 = *(_DWORD*)(result + 220) & 0xF;
    v300 =
        v299 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v298) + 87LL);
    v301 = (v300 - *(unsigned __int8*)(result + 218)) &
           ~((v300 - *(unsigned __int8*)(result + 218)) >> 31);
    if (v301 < v300) {
      v302 = v300 - a2 - v301;
      if (v300 >= v302) {
        LOBYTE(v300) = v302;
      }
      if (v302 >= 0) {
        v303 = v300;
      }
      else {
        v303 = 0;
      }
      *(_BYTE*)(result + 218) = v303;
      v304 = *(_QWORD*)(*(_QWORD*)(v297 + 64) + 8 * v298);
      v305 = *(unsigned __int8*)(v304 + 87);
      if (*(_BYTE*)(v304 + 87) != 0 &&
          (unsigned int)(v306 = *(unsigned __int8*)(v304 + 72)) < 8) {
        v307 = v306 - 7;
        v308 = (_BYTE*)(result + 219);
        if (v307 <= 0xFFFFFFFD) {
          if (v299 * v305 <= (unsigned int)v303) {
            v309 = 8;
          }
          else {
            v309 = 0;
          }
          v310 = *v308 & 0xF7 | v309;
          goto LABEL_374;
        }
      }
      else {
        v308 = (_BYTE*)(result + 219);
      }
      v310 = *v308 & 0xF7;
    LABEL_374:
      *v308 = v310;
    }
  }
  if (*(_BYTE*)(result + 226) != 0) {
    v311 = *v2;
    v312 = *(unsigned __int16*)(result + 224);
    v313 = *(_DWORD*)(result + 228) & 0xF;
    v314 =
        v313 *
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v312) + 87LL);
    v315 = (v314 - *(unsigned __int8*)(result + 226)) &
           ~((v314 - *(unsigned __int8*)(result + 226)) >> 31);
    if (v315 < v314) {
      v316 = v314 - a2 - v315;
      if (v314 >= v316) {
        LOBYTE(v314) = v316;
      }
      if (v316 >= 0) {
        v317 = v314;
      }
      else {
        v317 = 0;
      }
      *(_BYTE*)(result + 226) = v317;
      v318 = *(_QWORD*)(*(_QWORD*)(v311 + 64) + 8 * v312);
      v319 = *(unsigned __int8*)(v318 + 87);
      if (*(_BYTE*)(v318 + 87) != 0 &&
          (unsigned int)(v320 = *(unsigned __int8*)(v318 + 72)) < 8) {
        v321 = v320 - 7;
        v322 = (_BYTE*)(result + 227);
        if (v321 <= 0xFFFFFFFD) {
          if (v313 * v319 <= (unsigned int)v317) {
            v323 = 8;
          }
          else {
            v323 = 0;
          }
          v324 = *v322 & 0xF7 | v323;
          goto LABEL_391;
        }
      }
      else {
        v322 = (_BYTE*)(result + 227);
      }
      v324 = *v322 & 0xF7;
    LABEL_391:
      *v322 = v324;
    }
  }
  if (*(_BYTE*)(result + 234) != 0) {
    v325 = *v2;
    v326 = *(unsigned __int16*)(result + 232);
    v327 =
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * v326) + 87LL);
    v328 = *(_DWORD*)(result + 236) & 0xF;
    v329 = v328 * v327;
    v330 = (v329 - *(unsigned __int8*)(result + 234)) &
           ~((v329 - *(unsigned __int8*)(result + 234)) >> 31);
    if (v330 < v329) {
      v331 = v329 - a2 - v330;
      if (v329 >= v331) {
        LOBYTE(v329) = v331;
      }
      if (v331 >= 0) {
        v332 = v329;
      }
      else {
        v332 = 0;
      }
      *(_BYTE*)(result + 234) = v332;
      v333 = *(_QWORD*)(*(_QWORD*)(v325 + 64) + 8 * v326);
      v334 = *(unsigned __int8*)(v333 + 87);
      if (*(_BYTE*)(v333 + 87) != 0 &&
          (unsigned int)(v335 = *(unsigned __int8*)(v333 + 72)) < 8) {
        v336 = v335 - 7;
        v337 = (_BYTE*)(result + 235);
        if (v336 <= 0xFFFFFFFD) {
          if (v328 * v334 <= (unsigned int)v332) {
            v338 = 8;
          }
          else {
            v338 = 0;
          }
          v339 = *v337 & 0xF7 | v338;
          goto LABEL_408;
        }
      }
      else {
        v337 = (_BYTE*)(result + 235);
      }
      v339 = *v337 & 0xF7;
    LABEL_408:
      *v337 = v339;
    }
  }
  return result;
}

__int64 UnitItemList_712d40(__int64 (**a1)(), __int64 a2)
{
  char v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char v13;
  __int64 v14;
  __int64 (**v15)();
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 (***v21)();
  __int64 (**v22)();
  __int64 (***v23)();
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 (**v33)();
  __int64 v34;
  int v35;
  char v37;

  if (a2 != 0) {
    v2 = *((_BYTE*)a1 + 51);
    v37 = 0;
    *((_BYTE*)a1 + 51) = v2 | 4;
    *((_BYTE*)a1 + 59) |= 4u;
    *((_BYTE*)a1 + 67) |= 4u;
    *((_BYTE*)a1 + 75) |= 4u;
    *((_BYTE*)a1 + 83) |= 4u;
    *((_BYTE*)a1 + 91) |= 4u;
    *((_BYTE*)a1 + 99) |= 4u;
    *((_BYTE*)a1 + 107) |= 4u;
    *((_BYTE*)a1 + 115) |= 4u;
    *((_BYTE*)a1 + 123) |= 4u;
    *((_BYTE*)a1 + 131) |= 4u;
    *((_BYTE*)a1 + 139) |= 4u;
    *((_BYTE*)a1 + 147) |= 4u;
    *((_BYTE*)a1 + 155) |= 4u;
    *((_BYTE*)a1 + 163) |= 4u;
    *((_BYTE*)a1 + 171) |= 4u;
    *((_BYTE*)a1 + 179) |= 4u;
    *((_BYTE*)a1 + 187) |= 4u;
    *((_BYTE*)a1 + 195) |= 4u;
    *((_BYTE*)a1 + 203) |= 4u;
    *((_BYTE*)a1 + 211) |= 4u;
    *((_BYTE*)a1 + 219) |= 4u;
    *((_BYTE*)a1 + 227) |= 4u;
    *((_BYTE*)a1 + 235) |= 4u;
    v5 = *(_QWORD*)(a2 + 392);
    v6 = game_Unit_GetJob(a2);
    v7 = *(_QWORD*)(a2 + 400);
    v8 = *(unsigned __int16*)(v5 + 184);
    v9 = v6;
    v10 = *(_QWORD*)(v5 + 24) + 672LL;
    if (*(_WORD*)(v5 + 184) != 0) {
      v11 = 8;
      v12 = 0;
      do {
        v13 = GameRoutine_713120(a1, *(_QWORD*)(*(_QWORD*)(v5 + 192) + v11),
                                 v10, 0);
        --v8;
        v11 += 16;
        v12 |= v13 & 1;
      } while (v8 != 0);
    }
    else {
      v12 = 0;
    }
    v14 = *(unsigned __int16*)(v9 + 128);
    v15 = (__int64 (**)())(a2 + 1744);
    if (*(_WORD*)(v9 + 128) != 0) {
      v16 = 8;
      do {
        v17 = GameRoutine_713120(a1, *(_QWORD*)(*(_QWORD*)(v9 + 136) + v16),
                                 v10, 0);
        --v14;
        v16 += 16;
        v12 |= v17 & 1;
      } while (v14 != 0);
    }
    v18 = *(unsigned __int16*)(v7 + 128);
    if (*(_WORD*)(v7 + 128) != 0) {
      v19 = 8;
      do {
        v20 = GameRoutine_713120(a1, *(_QWORD*)(*(_QWORD*)(v7 + 136) + v19),
                                 v10, v9 != v7);
        --v18;
        v19 += 16;
        v12 |= v20 & 1;
      } while (v18 != 0);
    }
    v37 = v12;
    v21 = (__int64 (***)())fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    v22 = GameData_1f93108;
    v23 = v21;
    v21[2] = v15;
    v21[3] = (__int64 (**)())v10;
    v21[4] = (__int64 (**)())&v37;
    v24 = *(_BYTE*)(a2 + 1834);
    *v21 = GameData_1f93108;
    v21[1] = a1;
    if ((v24 & 0x10) != 0) {
      v25 = *(_QWORD*)(a2 + 1784);
      v26 = *(_QWORD*)(a2 + 1776);
      if ((int)((unsigned __int64)(v25 - v26) >> 2) < 1) {
        v22 = GameData_1f93108;
      }
      else {
        v27 = 0;
        v28 = 0;
        v29 = GameData_212c880[0];
        v30 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v30 + 64) +
                                   8LL * (*(_DWORD*)(v26 + v27) & 0xFFF)) +
                        250LL) == 20) {
            ((void (*)(__int64 (***)(), __int64))(*v23)[6])(v23, v26 + v27);
            v30 = *v29;
            v25 = *(_QWORD*)(a2 + 1784);
            v26 = *(_QWORD*)(a2 + 1776);
          }
          ++v28;
          v27 += 4;
        } while (v28 < (int)((unsigned __int64)(v25 - v26) >> 2));
        v22 = *v23;
      }
    }
    ((void (*)(__int64 (***)()))v22[5])(v23);
    v31 = 0;
    v32 = GameData_212c878[0];
    do {
      v33 = &a1[v31];
      if ((BYTE3(a1[v31 + 6]) & 4) != 0) {
        v33[6] = nullptr;
      }
      else {
        v34 = *((unsigned __int16*)v33 + 24);
        if (v34 != 0) {
          v35 = GameRoutine_84efa0(
              v15,
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v32 + 64) + 8 * v34) + 24LL) +
                  8LL);
          if ((HIDWORD(a1[v31 + 6]) & 0xF) != v35) {
            HIDWORD(a1[v31 + 6]) =
                HIDWORD(a1[v31 + 6]) & 0xFFFFFFF0 | v35 & 0xF;
          }
        }
      }
      if (v37 == 1) {
        game_UnitItemList_Sort(a1, 0, 6);
        game_UnitItemList_Sort(a1, 6, 24);
      }
      ++v31;
    } while (v31 != 24);
  }
  return 1;
}

__int64 UnitItemList_713480(unsigned __int16* a1)
{
  __int64 v1;
  __int64 v2;
  int v3;

  v1 = *GameData_212c878[0];
  v2 = *(_QWORD*)(*GameData_212c878[0] + 64);
  if ((*(_DWORD*)(*(_QWORD*)(v2 + 8LL * *a1) + 336LL) & 0x100) != 0 ||
      (v3 = *(_DWORD*)(*(_QWORD*)(v2 + 8LL * *a1) + 336LL) & 0x200 |
            *((_BYTE*)a1 + 3) & 2) != 0) {
    *(_QWORD*)a1 = 0;
    v3 = 1;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[4]) + 336LL) & 0x100) != 0 ||
      (*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[4]) + 336LL) & 0x200 |
       *((_BYTE*)a1 + 11) & 2) != 0) {
    *((_QWORD*)a1 + 1) = 0;
    v3 = 1;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[8]) + 336LL) & 0x100) != 0 ||
      (*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[8]) + 336LL) & 0x200 |
       *((_BYTE*)a1 + 19) & 2) != 0) {
    *((_QWORD*)a1 + 2) = 0;
    v3 = 1;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[12]) + 336LL) & 0x100) != 0 ||
      (*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[12]) + 336LL) & 0x200 |
       *((_BYTE*)a1 + 27) & 2) != 0) {
    *((_QWORD*)a1 + 3) = 0;
    v3 = 1;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[16]) + 336LL) & 0x100) != 0 ||
      (*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[16]) + 336LL) & 0x200 |
       *((_BYTE*)a1 + 35) & 2) != 0) {
    *((_QWORD*)a1 + 4) = 0;
    v3 = 1;
    v2 = *(_QWORD*)(v1 + 64);
  }
  if ((*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[20]) + 336LL) & 0x100) != 0 ||
      (*(_DWORD*)(*(_QWORD*)(v2 + 8LL * a1[20]) + 336LL) & 0x200 |
       *((_BYTE*)a1 + 43) & 2) != 0) {
    *((_QWORD*)a1 + 5) = 0;
  }
  else if (v3 == 0) {
    return 1;
  }
  game_UnitItemList_Sort(a1, 0, 6);
  game_UnitItemList_Sort(a1, 6, 24);
  return 1;
}

#pragma GCC visibility pop
