#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenu_16e2460(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15b75f0(_QWORD, _QWORD);
__int64 GameRoutine_15de8c0(_QWORD);
__int64 GameRoutine_178bdb0(__int64, __int64, char);
__int64 GameRoutine_1792940(_QWORD, _QWORD);
__int64 GameRoutine_1792ee0(_QWORD);
__int64 GameRoutine_1792f90(_QWORD);
__int64 GameRoutine_19ef790(_QWORD, _QWORD, _QWORD);
__int64 UnitDerivedParams_6deeb0(_QWORD, _QWORD);
__int64
    UnitTroopListMenu_17923f0_alt1(_QWORD) __asm__("UnitTroopListMenu_17923f0");
__int64
    UnitTroopListMenu_17924c0_alt1(_QWORD,
                                   _QWORD) __asm__("UnitTroopListMenu_17924c0");
__int64
    UnitTroopListMenu_1792540_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD) __asm__("UnitTroopListMenu_1792540");
__int64
    UnitTroopListMenu_17926e0_alt1(_QWORD,
                                   _QWORD) __asm__("UnitTroopListMenu_17926e0");
__int64
    UnitTroopListMenu_1792760_alt1(_QWORD, _QWORD, _QWORD,
                                   _QWORD) __asm__("UnitTroopListMenu_1792760");
__int64
    UnitTroopListMenu_1792860_alt1(_QWORD) __asm__("UnitTroopListMenu_1792860");
__int64
    UnitTroopListMenu_1792da0_alt1(_QWORD,
                                   _QWORD) __asm__("UnitTroopListMenu_1792da0");
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetEquippedAttack(_QWORD, _QWORD);
__int64 game_Unit_GetGuard(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetMagicAttack(_QWORD, _QWORD);
__int64 game_Unit_GetMagicGuard(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetUnknown4(_QWORD, _QWORD);
__int64 game_Unit_GetUnknown5(_QWORD, _QWORD);
__int64 game_Unit_GetUnknown6(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _BYTE GameData_1c019a4[10];
extern __int64 (*GameData_20c9448[])();
extern __int64 GameData_20c9638;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
extern __int64* GameData_21319e8[10];
extern int GameData_2263c3c;
extern int GameData_2263c40;
void __attribute__((noreturn)) GameRoutine_1793290(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(void);
__int64 UnitTroopListMenu_178c8d0(__int64 a1, char a2);
__int64 UnitTroopListMenu_178c920(__int64 a1, char a2);
__int64 UnitTroopListMenu_178c970(__int64 a1, char a2);
__int64 UnitTroopListMenu_178c9c0(__int64 a1, char a2);
__int64 UnitTroopListMenu_178ca10(__int64 a1, char a2);
__int64 UnitTroopListMenu_178ca60(__int64 a1, char a2);
_QWORD* game_menu_UnitTroopListMenu_ApplyChangeUnit(_QWORD* result, __int64 a2);
__int64 game_menu_UnitTroopListMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                 _QWORD** a2,
                                                                 __int64* a3);
__int64 UnitTroopListMenu_17923f0(__int64* a1);
__int64 UnitTroopListMenu_17924c0(_QWORD* a1, __int64 a2);
__int64 UnitTroopListMenu_1792540(_BYTE* a1, __int64* a2, unsigned __int64* a3,
                                  __int64 a4, unsigned __int64* a5, __int64 a6);
__int64* UnitTroopListMenu_17926e0(__int64* result, __int64* a2);
__int64 UnitTroopListMenu_1792760(_BYTE* a1, __int64* a2, int a3, int a4);
__int64 UnitTroopListMenu_1792860(__int64 a1);
__int64 UnitTroopListMenu_1792da0(__int64 a1, unsigned __int8 a2);
__int64 UnitTroopListMenu_17930e0(__int64 result, __int64* a2);
__int64 UnitTroopListMenu_17944c0(__int64 a1, _DWORD* a2);
__int64 game_menu_UnitTroopListMenu_UpdatePage_lambda0_Invoke(__int64 a1,
                                                              __int64 a2);
bool game_menu_UnitTroopListMenu_ApplyChangeUnit_lambda0_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 GameRoutine_17932c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682660(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_20c9238[])();
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c998[148];
extern __int64 GameData_21f4018[];
extern __int64 GameData_21f4228;
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a310");
__int64 UnitTroopListMenu_1792940(_QWORD* a1, __int64 a2);

__int64 UnitTroopListMenu_178c8d0(__int64 a1, char a2)
{
  __int64 v3;

  v3 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20c9638, 0);
  if ((unsigned int)GameRoutine_178bdb0(v3, 0xFFFFFFFFLL, a2) == 13) {
    return 13;
  }
  else {
    return 0;
  }
}

__int64 UnitTroopListMenu_178c920(__int64 a1, char a2)
{
  __int64 v3;

  v3 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20c9638, 0);
  if ((unsigned int)GameRoutine_178bdb0(v3, 1, a2) == 13) {
    return 13;
  }
  else {
    return 0;
  }
}

__int64 UnitTroopListMenu_178c970(__int64 a1, char a2)
{
  __int64 v3;

  v3 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20c9638, 0);
  return GameRoutine_178bdb0(v3, 0xFFFFFFFFLL, a2);
}

__int64 UnitTroopListMenu_178c9c0(__int64 a1, char a2)
{
  __int64 v3;

  v3 = __dynamic_cast(*(_QWORD*)(a1 + 880), GameData_21319e8[0],
                      &GameData_20c9638, 0);
  return GameRoutine_178bdb0(v3, 0xFFFFFFFFLL, a2);
}

__int64 UnitTroopListMenu_178ca10(__int64 a1, char a2)
{
  __int64 v3;

  v3 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20c9638, 0);
  return GameRoutine_178bdb0(v3, 1, a2);
}

__int64 UnitTroopListMenu_178ca60(__int64 a1, char a2)
{
  __int64 v3;

  v3 = __dynamic_cast(*(_QWORD*)(a1 + 880), GameData_21319e8[0],
                      &GameData_20c9638, 0);
  return GameRoutine_178bdb0(v3, 1, a2);
}

_QWORD* game_menu_UnitTroopListMenu_ApplyChangeUnit(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  _QWORD* v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  _QWORD v21[4];
  _QWORD* v22;
  __int64 v23;

  if (result[134] == 0) {
    return result;
  }
  v2 = result;
  v3 = (_QWORD*)result[29];
  v4 = (_QWORD*)result[30];
  v21[0] = GameData_20c9448;
  v21[1] = result;
  result = v21;
  v22 = v21;
  if (v3 == v4) {
    v9 = 0;
  LABEL_15:
    v10 = 32;
    goto LABEL_16;
  }
  v5 = GameData_212e008[0];
  v6 = GameData_212e0c8[0];
  while (1) {
    if (*v3 != 0) {
      v7 = __dynamic_cast(*v3, v5, v6, 0);
      if (v7 != 0) {
        v9 = v7;
        v23 = v7;
        if (v22 == nullptr) {
          GameRoutine_60a310(0, a2, v8);
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v22 + 48LL))(v22, &v23) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v3 == v4) {
      v9 = 0;
      break;
    }
  }
  result = v22;
  if (v22 == v21) {
    goto LABEL_15;
  }
  if (v22 != nullptr) {
    v10 = 40;
  LABEL_16:
    result =
        (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v10))(result, a2);
  }
  if (v9 != 0) {
    v11 = v2[42];
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
    }
    v2[42] = v9;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v2, 1, 0, 0);
    v12 = v2[42];
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 160LL))(v12);
      v13 = v2[42];
      v14 = 4;
      if (v13 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 120LL))(v13) & 1) != 0) {
          v14 = 4;
        }
        else {
          v14 = 0;
        }
      }
    }
    else {
      v14 = 4;
    }
    v15 = (_QWORD*)v2[29];
    v16 = (_QWORD*)v2[30];
    *((_DWORD*)v2 + 89) = *((_DWORD*)v2 + 89) & 0xFFFFFFFB | v14;
    if (v15 != v16) {
      v17 = 0;
      do {
        v18 = *v15;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v15 + 48LL))(*v15) & 1) != 0) {
          if (v18 == v2[42]) {
            goto LABEL_34;
          }
          ++v17;
        }
        ++v15;
      } while (v15 != v16);
    }
    v17 = -1;
  LABEL_34:
    if (v17 <= 1) {
      v19 = 1;
    }
    else {
      v19 = v17;
    }
    *((_DWORD*)v2 + 138) = v19 - 1;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v2, 1, 0, 0);
    v20 = (*(__int64 (**)(_QWORD*))(v2[22] + 16LL))(v2 + 22);
    result = (_QWORD*)BasicMenu_16e2460(v2[23], 1, 0);
    *((_DWORD*)v2 + 48) = (int)result % v20;
  }
  v2[134] = 0;
  return result;
}

__int64 game_menu_UnitTroopListMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                 _QWORD** a2,
                                                                 __int64* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  char v17;
  __int64 v18;
  char v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  _BYTE* v23;
  __int64* v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD v44[3];
  _QWORD v45[3];
  _QWORD v46[3];
  _QWORD v47[3];
  _QWORD v48[4];
  char v49;
  _BYTE* v50;
  __int64* v51;
  _BYTE v52[4];
  __int64 v53;
  _QWORD* v54;
  __int64* v55;
  __int64 v56;
  _QWORD* v57;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *a3;
  v55 = &v56;
  v56 = v5;
  v57 = v4;
  v53 = v3;
  v54 = &v57;
  if (GameData_2263c40 != 0) {
    v52[0] = GameData_2263c40 == 2;
    v50 = v52;
    v51 = &v53;
    v48[0] = &v49;
    v48[1] = &v57;
    v48[2] = &v56;
    v48[3] = &v50;
    switch (GameData_2263c3c) {
    case 1:
      v6 = game_Unit_GetJob(v4[11]);
      UnitTroopListMenu_17924c0_alt1(v47, v6);
      v7 = game_Unit_GetJob(*(_QWORD*)(v56 + 88));
      UnitTroopListMenu_17924c0_alt1(v46, v7);
      UnitTroopListMenu_17926e0_alt1(v45, v47);
      UnitTroopListMenu_17926e0_alt1(v44, v46);
      v8 = v45[0];
      v9 = v44[0];
      LOBYTE(v10) = UnitTroopListMenu_1792540_alt1(v50, v51, v45[0], v45[1],
                                                   v44[0], v44[1]);
      if (v9 != 0) {
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v9);
      }
      if (v8 != 0) {
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v8);
      }
      if (v46[0] != 0) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v46[0]);
      }
      v14 = v47[0];
      if (v47[0] == 0) {
        return v10 & 1;
      }
      v15 = fw_memory_g_heap_manager;
      goto LABEL_53;
    case 2:
      v32 = v4[11];
      LOBYTE(v47[0]) = 0;
      v33 = *(__int16*)(v32 + 492);
      v20 = game_Unit_GetParam(v32, v47, 1) + 10000 * v33;
      LOBYTE(v47[0]) = 0;
      v34 = *(_QWORD*)(v56 + 88);
      v35 = *(__int16*)(v34 + 492);
      v22 = (unsigned int)game_Unit_GetParam(v34, v47, 1) + 10000 * v35;
      goto LABEL_72;
    case 3:
      v20 = GameRoutine_15de8c0(v4[11]);
      v21 = GameRoutine_15de8c0(*(_QWORD*)(v56 + 88));
      goto LABEL_71;
    case 4:
      v30 = v4[11];
      v23 = v52;
      v24 = &v53;
      v31 = *(_DWORD*)(v30 + 504) +
            10000 * (unsigned int)*(unsigned __int8*)(v30 + 498);
      v22 = *(_DWORD*)(*(_QWORD*)(v5 + 88) + 504LL) +
            10000 *
                (unsigned int)*(unsigned __int8*)(*(_QWORD*)(v5 + 88) + 498LL);
      goto LABEL_74;
    case 5:
      v20 = UnitTroopListMenu_1792860_alt1(v4[11]);
      v22 = (unsigned int)UnitTroopListMenu_1792860_alt1(*(_QWORD*)(v5 + 88));
      v23 = v52;
      v24 = &v53;
      goto LABEL_73;
    case 6:
      GameRoutine_1792940(v47, v4[11]);
      GameRoutine_1792940(v46, *(_QWORD*)(v56 + 88));
      UnitTroopListMenu_17926e0_alt1(v45, v47);
      UnitTroopListMenu_17926e0_alt1(v44, v46);
      v36 = v45[0];
      v37 = v44[0];
      LOBYTE(v10) = UnitTroopListMenu_1792540_alt1(v50, v51, v45[0], v45[1],
                                                   v44[0], v44[1]);
      v38 = fw_memory_g_heap_manager_ptr;
      if (v37 != 0) {
        v39 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v37);
      }
      if (v36 != 0) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v40, v36);
      }
      if (v46[0] != 0) {
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
          v41 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v41, v46[0]);
      }
      v14 = v47[0];
      if (v47[0] == 0) {
        return v10 & 1;
      }
      v15 = *(_QWORD*)v38;
    LABEL_53:
      v42 = 128;
      if (*(_QWORD*)(v15 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(v15 + v42, v14);
      return v10 & 1;
    case 7:
      v17 = UnitTroopListMenu_1792da0_alt1(v48, 0);
      goto LABEL_75;
    case 8:
      v17 = UnitTroopListMenu_1792da0_alt1(v48, 1);
      goto LABEL_75;
    case 9:
      v17 = UnitTroopListMenu_1792da0_alt1(v48, 2);
      goto LABEL_75;
    case 10:
      v17 = UnitTroopListMenu_1792da0_alt1(v48, 3);
      goto LABEL_75;
    case 11:
      v17 = UnitTroopListMenu_1792da0_alt1(v48, 4);
      goto LABEL_75;
    case 12:
      v17 = UnitTroopListMenu_1792da0_alt1(v48, 5);
      goto LABEL_75;
    case 13:
      v17 = UnitTroopListMenu_1792da0_alt1(v48, 6);
      goto LABEL_75;
    case 14:
      v17 = UnitTroopListMenu_1792da0_alt1(v48, 12);
      goto LABEL_75;
    case 15:
      v18 = v4[11];
      v19 = 10;
      goto LABEL_70;
    case 16:
      v25 = v4[11];
      LOBYTE(v47[0]) = 1;
      v26 = game_Unit_GetParam(v25, v47, 1);
      v27 = *(char*)(v25 + 807);
      LOBYTE(v47[0]) = 1;
      v20 = (v26 / 5 + v27) & ~((v26 / 5 + v27) >> 31);
      v28 = *(_QWORD*)(v56 + 88);
      v29 = (int)game_Unit_GetParam(v28, v47, 1) / 5 + *(char*)(v28 + 807);
      v22 = v29 & (unsigned int)~(v29 >> 31);
      goto LABEL_72;
    case 17:
      v20 = game_Unit_GetEquippedAttack(v4[11], 1);
      v21 = game_Unit_GetEquippedAttack(*(_QWORD*)(v56 + 88), 1);
      goto LABEL_71;
    case 18:
      v20 = game_Unit_GetUnknown4(v4[11], 1);
      v21 = game_Unit_GetUnknown4(*(_QWORD*)(v56 + 88), 1);
      goto LABEL_71;
    case 19:
      v20 = game_Unit_GetUnknown6(v4[11], 1);
      v21 = game_Unit_GetUnknown6(*(_QWORD*)(v56 + 88), 1);
      goto LABEL_71;
    case 20:
      v20 = UnitDerivedParams_6deeb0(v4[11], 1);
      v21 = UnitDerivedParams_6deeb0(*(_QWORD*)(v56 + 88), 1);
      goto LABEL_71;
    case 21:
      v20 = game_Unit_GetMagicAttack(v4[11], 1);
      v21 = game_Unit_GetMagicAttack(*(_QWORD*)(v56 + 88), 1);
      goto LABEL_71;
    case 22:
      v20 = game_Unit_GetMagicGuard(v4[11], 1);
      v21 = game_Unit_GetMagicGuard(*(_QWORD*)(v56 + 88), 1);
      goto LABEL_71;
    case 23:
      v20 = game_Unit_GetUnknown5(v4[11], 1);
      v21 = game_Unit_GetUnknown5(*(_QWORD*)(v56 + 88), 1);
      goto LABEL_71;
    case 24:
      v20 = game_Unit_GetGuard(v4[11], 1);
      v21 = game_Unit_GetGuard(*(_QWORD*)(v56 + 88), 1);
      goto LABEL_71;
    case 25:
      v20 = GameRoutine_1792ee0(v4[11]);
      v21 = GameRoutine_1792ee0(*(_QWORD*)(v56 + 88));
      goto LABEL_71;
    case 26:
      v18 = v4[11];
      v19 = 1;
      goto LABEL_70;
    case 27:
      v18 = v4[11];
      v19 = 2;
      goto LABEL_70;
    case 28:
      v18 = v4[11];
      v19 = 4;
      goto LABEL_70;
    case 29:
      v18 = v4[11];
      v19 = 3;
      goto LABEL_70;
    case 30:
      v18 = v4[11];
      v19 = 6;
      goto LABEL_70;
    case 31:
      v18 = v4[11];
      v19 = 7;
      goto LABEL_70;
    case 32:
      v18 = v4[11];
      v19 = 5;
      goto LABEL_70;
    case 33:
      v18 = v4[11];
      v19 = 8;
    LABEL_70:
      LOBYTE(v47[0]) = v19;
      v20 = game_Unit_GetParam(v18, v47, 1);
      LOBYTE(v47[0]) = v19;
      v21 = game_Unit_GetParam(*(_QWORD*)(v56 + 88), v47, 1);
      goto LABEL_71;
    case 34:
      v20 = GameRoutine_1792f90(v4[11]);
      v21 = GameRoutine_1792f90(*(_QWORD*)(v56 + 88));
    LABEL_71:
      v22 = v21;
    LABEL_72:
      v23 = v50;
      v24 = v51;
    LABEL_73:
      v31 = v20;
    LABEL_74:
      v17 = UnitTroopListMenu_1792760_alt1(v23, v24, v31, v22);
      break;
    default:
      v17 = UnitTroopListMenu_17923f0_alt1(&v53);
      goto LABEL_75;
    }
    goto LABEL_75;
  }
  v10 = (*(__int64 (**)(_QWORD*))(*v4 + 464LL))(v4);
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)*v55 + 464LL))(*v55);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1312LL))(v3) & 1) != 0) {
    v10 |= (*(__int64 (**)(_QWORD))(*(_QWORD*)*v54 + 576LL))(*v54);
    v16 |= (*(__int64 (**)(__int64))(*(_QWORD*)*v55 + 576LL))(*v55);
  }
  if (((v10 ^ v16) & 1) == 0) {
    v17 = GameRoutine_15b75f0(*v54, *v55);
  LABEL_75:
    LOBYTE(v10) = v17;
  }
  return v10 & 1;
}

__int64 UnitTroopListMenu_17923f0(__int64* a1)
{
  __int64 v1;
  int v3;
  int v4;

  v1 = *a1;
  v3 = (*(__int64 (**)(_QWORD))(**(_QWORD**)a1[1] + 464LL))(*(_QWORD*)a1[1]);
  v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)a1[2] + 464LL))(*(_QWORD*)a1[2]);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 1312LL))(v1) & 1) != 0) {
    v3 |= (*(__int64 (**)(_QWORD))(**(_QWORD**)a1[1] + 576LL))(*(_QWORD*)a1[1]);
    v4 |= (*(__int64 (**)(_QWORD))(**(_QWORD**)a1[2] + 576LL))(*(_QWORD*)a1[2]);
  }
  if (((v3 ^ v4) & 1) != 0) {
    return v3 & 1;
  }
  else {
    return GameRoutine_15b75f0(*(_QWORD*)a1[1], *(_QWORD*)a1[2]);
  }
}

__int64 UnitTroopListMenu_17924c0(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = *(unsigned __int8*)(a2 + 49);
  v8 = 0;
  v9 = 0;
  v7 = 0;
  GameRoutine_19ef790(&v7, v3, 8);
  GameRoutine_19ef790(&v7, *(unsigned __int8*)(a2 + 536), 8);
  result = GameRoutine_19ef790(
      &v7, *(unsigned __int16*)(a2 + 16) | 0x80000000LL, 32);
  v6 = v8;
  *a1 = v7;
  a1[1] = v6;
  a1[2] = v9;
  return result;
}

__int64 UnitTroopListMenu_1792540(_BYTE* a1, __int64* a2, unsigned __int64* a3,
                                  __int64 a4, unsigned __int64* a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64* v8;
  unsigned __int64* v9;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  int v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  bool v23;
  __int64 v24;
  int v25;

  v6 = a4 - (_QWORD)a3;
  v7 = a6 - (_QWORD)a5;
  v8 = a5;
  v9 = a3;
  if (a4 - (_QWORD)a3 == a6 - (_QWORD)a5 && (unsigned int)memcmp(a3, a5) == 0) {
    v24 = *a2;
    v19 = (*(__int64 (**)(_QWORD))(**(_QWORD**)a2[1] + 464LL))(*(_QWORD*)a2[1]);
    v25 = (*(__int64 (**)(_QWORD))(**(_QWORD**)a2[2] + 464LL))(*(_QWORD*)a2[2]);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 1312LL))(v24) & 1) != 0) {
      v19 |=
          (*(__int64 (**)(_QWORD))(**(_QWORD**)a2[1] + 576LL))(*(_QWORD*)a2[1]);
      v25 |=
          (*(__int64 (**)(_QWORD))(**(_QWORD**)a2[2] + 576LL))(*(_QWORD*)a2[2]);
    }
    if (((v19 ^ v25) & 1) == 0) {
      return GameRoutine_15b75f0(*(_QWORD*)a2[1], *(_QWORD*)a2[2]);
    }
  }
  else {
    v12 = v6 >> 3;
    v13 = v7 >> 3;
    if (v7 >> 3 >= v6 >> 3) {
      v14 = v6 >> 3;
    }
    else {
      v14 = v7 >> 3;
    }
    if (*a1 == 1) {
      if (v14 < 1) {
      LABEL_10:
        LOBYTE(v19) = v12 < v13;
      }
      else {
        while (1) {
          v16 = *v9++;
          v15 = v16;
          v17 = *v8++;
          v18 = v15 >= v17;
          if (v15 != v17) {
            break;
          }
          if (--v14 == 0) {
            goto LABEL_10;
          }
        }
        LOBYTE(v19) = !v18;
      }
    }
    else if (v14 < 1) {
    LABEL_14:
      LOBYTE(v19) = v12 > v13;
    }
    else {
      while (1) {
        v21 = *v9++;
        v20 = v21;
        v22 = *v8++;
        v23 = v20 > v22;
        if (v20 != v22) {
          break;
        }
        if (--v14 == 0) {
          goto LABEL_14;
        }
      }
      LOBYTE(v19) = v23;
    }
  }
  return v19 & 1;
}

__int64* UnitTroopListMenu_17926e0(__int64* result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;

  result[1] = 0;
  result[2] = 0;
  *result = 0;
  v3 = *a2;
  v2 = a2[1];
  v4 = v2 - *a2;
  if (v2 != *a2) {
    if (v4 < 0) {
      GameRoutine_65c760();
    }
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v2 - *a2, 16, 0);
    v7 = v6 + v4;
    *v5 = v6;
    v5[1] = v6;
    v5[2] = v6 + v4;
    result = (__int64*)memcpy(v6, v3, v4);
    v5[1] = v7;
  }
  return result;
}

__int64 UnitTroopListMenu_1792760(_BYTE* a1, __int64* a2, int a3, int a4)
{
  __int64 v4;
  int v6;
  int v7;

  if (a3 == a4) {
    v4 = *a2;
    v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)a2[1] + 464LL))(*(_QWORD*)a2[1]);
    v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)a2[2] + 464LL))(*(_QWORD*)a2[2]);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 1312LL))(v4) & 1) != 0) {
      v6 |=
          (*(__int64 (**)(_QWORD))(**(_QWORD**)a2[1] + 576LL))(*(_QWORD*)a2[1]);
      v7 |=
          (*(__int64 (**)(_QWORD))(**(_QWORD**)a2[2] + 576LL))(*(_QWORD*)a2[2]);
    }
    if (((v6 ^ v7) & 1) == 0) {
      return GameRoutine_15b75f0(*(_QWORD*)a2[1], *(_QWORD*)a2[2]);
    }
  }
  else if (*a1 != 0) {
    LOBYTE(v6) = a3 < a4;
  }
  else {
    LOBYTE(v6) = a3 > a4;
  }
  return v6 & 1;
}

__int64 UnitTroopListMenu_1792860(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = (_BYTE*)(a1 + 847);
  v2 = *GameData_212c878[0];
  v3 = 2;
  while (1) {
    if (*(_WORD*)(v1 - 19) != 0 && (*(v1 - 16) & 1) != 0) {
      v4 = *(_QWORD*)(v2 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v4 +
                                         8LL * *(unsigned __int16*)(v1 - 19)) +
                              72LL) < 8u) {
        LODWORD(v3) = v3 - 2;
        return *(
            unsigned __int16*)(*(_QWORD*)(v4 +
                                          8LL *
                                              *(unsigned __int16*)(a1 + 828 +
                                                                   8LL *
                                                                       (int)
                                                                           v3)) +
                               16LL);
      }
    }
    if (*(_WORD*)(v1 - 11) != 0 && (*(v1 - 8) & 1) != 0) {
      v4 = *(_QWORD*)(v2 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v4 +
                                         8LL * *(unsigned __int16*)(v1 - 11)) +
                              72LL) < 8u) {
        break;
      }
    }
    if (*(_WORD*)(v1 - 3) != 0 && (*v1 & 1) != 0) {
      v4 = *(_QWORD*)(v2 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v4 +
                                         8LL * *(unsigned __int16*)(v1 - 3)) +
                              72LL) < 8u) {
        return *(
            unsigned __int16*)(*(_QWORD*)(v4 +
                                          8LL *
                                              *(unsigned __int16*)(a1 + 828 +
                                                                   8LL *
                                                                       (int)
                                                                           v3)) +
                               16LL);
      }
    }
    v3 += 3;
    v1 += 24;
    if (v3 == 32) {
      return 0xFFFFFFFFLL;
    }
  }
  LODWORD(v3) = v3 - 1;
  return *(
      unsigned __int16*)(*(_QWORD*)(v4 +
                                    8LL * *(unsigned __int16*)(a1 + 828 +
                                                               8LL * (int)v3)) +
                         16LL);
}

__int64 UnitTroopListMenu_1792940(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64* v17;
  __int64 v18;
  int v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  _QWORD* v27;
  unsigned int v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  _QWORD* v34;
  unsigned int v35;
  bool v36;
  __int64 v37;
  __int64 result;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD v45[4];
  _QWORD* v46;
  char* v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  v2 = *(_QWORD*)(a2 + 400);
  v51 = 0;
  v52 = 0;
  v50 = 0;
  v5 = *(unsigned __int8*)(v2 + 96);
  if (v5 == 1) {
    if (*(_BYTE*)(a2 + 1944) == 0) {
      goto LABEL_76;
    }
    GameRoutine_19ef790(&v50, 1, 8);
    v17 = GameData_212c998[0];
    v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                8LL * *(unsigned __int8*)(a2 + 1944)) +
                     64LL);
    if (v18 == 0) {
      goto LABEL_79;
    }
    v19 = *(unsigned __int8*)(v18 + 250);
    if (v19 <= 9) {
      if (v19 == 7) {
        v21 = 1;
        goto LABEL_80;
      }
      if (v19 != 8) {
        goto LABEL_79;
      }
      v21 = 2;
    }
    else {
      v20 = v19 == 10 || v19 == 31;
      if (!v20) {
        if (v19 == 42) {
          v21 = 4;
          goto LABEL_80;
        }
      LABEL_79:
        v21 = 0;
        goto LABEL_80;
      }
      v21 = 3;
    }
  LABEL_80:
    GameRoutine_19ef790(&v50, v21, 8);
    GameRoutine_19ef790(
        &v50,
        *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v17 + 64) +
                                                   8LL *
                                                       *(unsigned __int8*)(a2 +
                                                                           1944)) +
                                        64LL) +
                             16LL) ^
            0x7FFFFFFFLL,
        32);
    GameRoutine_19ef790(
        &v50,
        (unsigned __int8)~*(
            _BYTE*)(*(_QWORD*)(*(_QWORD*)(*v17 + 64) +
                               8LL * *(unsigned __int8*)(a2 + 1944)) +
                    50LL),
        8);
    v42 = 32;
    v43 = *(unsigned __int8*)(a2 + 1944) | 0x80000000LL;
    goto LABEL_81;
  }
  if (v5 != 2) {
    goto LABEL_76;
  }
  if (*(_BYTE*)(a2 + 1880) != 0) {
    v6 = (__int64*)(a2 + 1880);
    goto LABEL_5;
  }
  v22 = *(_QWORD*)(v2 + 112);
  if (v22 == 0) {
    v6 = &GameData_21f4228;
    if ((_BYTE)GameData_21f4228 != 0) {
      goto LABEL_5;
    }
  LABEL_76:
    v42 = 8;
    v43 = 0;
  LABEL_81:
    result = GameRoutine_19ef790(&v50, v43, v42);
    v44 = v51;
    *a1 = v50;
    a1[1] = v44;
    a1[2] = v52;
    return result;
  }
  v6 = &GameData_21f4018[8 * (unsigned __int64)*(unsigned __int8*)(v22 + 32)];
  if (*(_BYTE*)v6 == 0) {
    goto LABEL_76;
  }
LABEL_5:
  GameRoutine_19ef790(&v50, 2, 8);
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                       8LL * *(unsigned __int8*)v6) +
                            32LL) -
          1 <
      5) {
    v7 = (unsigned __int8)(*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                           64) +
                                                8LL * *(unsigned __int8*)v6) +
                                     32LL) -
                           1) +
         1LL;
  }
  else {
    v7 = 0;
  }
  GameRoutine_19ef790(&v50, v7, 8);
  v8 = 32;
  GameRoutine_19ef790(&v50, *(unsigned __int8*)v6 | 0x80000000LL, 32);
  v11 = v45;
  v48 = nullptr;
  v49 = 0;
  v47 = nullptr;
  v45[0] = GameData_20c9238;
  v45[1] = v6;
  v46 = v45;
  v45[2] = &v47;
  v12 = (_QWORD*)v6[2];
  v13 = v6 + 3;
  if (v12 == v13) {
    goto LABEL_36;
  }
  do {
    v14 = GameRoutine_682660(*((unsigned __int8*)v12 + 26));
    if (v14 != 0) {
      v53 = v14;
      if (v46 == nullptr) {
        GameRoutine_60a310_alt1(0, v9);
      }
      (*(void (**)(_QWORD*, __int64*))(*v46 + 48LL))(v46, &v53);
    }
    v15 = (_QWORD*)v12[1];
    if (v15 != nullptr) {
      do {
        v16 = v15;
        v15 = (_QWORD*)*v15;
      } while (v15 != nullptr);
    }
    else {
      do {
        v16 = (_QWORD*)v12[2];
        v20 = v12 == (_QWORD*)*v16;
        v12 = v16;
      } while (!v20);
    }
    v12 = v16;
  } while (v16 != v13);
  v11 = v46;
  if (v46 == v45) {
    v8 = 32;
    goto LABEL_36;
  }
  if (v46 != nullptr) {
    v8 = 40;
  LABEL_36:
    (*(void (**)(_QWORD*, __int64, __int64))(*v11 + v8))(v11, v9, v10);
  }
  if (v47 == v48 ||
      (GameRoutine_17932c0(v47, v48, (2 * __clz((v48 - v47) >> 4)) ^ 0x7E),
       v23 = v48 - v47, v48 == v47)) {
    LODWORD(v24) = 0;
    goto LABEL_68;
  }
  v24 = *(_QWORD*)v47;
  if (*(_QWORD*)v47 != 0) {
    v25 = *v13;
    if (*v13 != 0) {
      v26 = *(unsigned __int8*)(v24 + 48);
      v27 = v13;
      do {
        v28 = *(unsigned __int8*)(v25 + 26);
        v29 = v28 >= v26;
        if (v28 >= v26) {
          v30 = 0;
        }
        else {
          v30 = 8;
        }
        if (v29) {
          v27 = (_QWORD*)v25;
        }
        v25 = *(_QWORD*)(v25 + v30);
      } while (v25 != 0);
      if (v27 != v13 && v26 >= *((unsigned __int8*)v27 + 26)) {
        LODWORD(v24) = *((_WORD*)v27 + 14) & 0xFFF;
        if (v23 >= 0x11) {
          goto LABEL_53;
        }
        goto LABEL_68;
      }
    }
    LODWORD(v24) = 0;
  }
  if (v23 >= 0x11) {
  LABEL_53:
    v31 = *((_QWORD*)v47 + 2);
    if (v31 != 0) {
      v32 = *v13;
      if (*v13 == 0) {
        goto LABEL_65;
      }
      v33 = *(unsigned __int8*)(v31 + 48);
      v34 = v13;
      do {
        v35 = *(unsigned __int8*)(v32 + 26);
        v36 = v35 >= v33;
        if (v35 >= v33) {
          v37 = 0;
        }
        else {
          v37 = 8;
        }
        if (v36) {
          v34 = (_QWORD*)v32;
        }
        v32 = *(_QWORD*)(v32 + v37);
      } while (v32 != 0);
      if (v34 != v13 && v33 >= *((unsigned __int8*)v34 + 26)) {
        LODWORD(v31) = *((_WORD*)v34 + 14) & 0xFFF;
      }
      else {
      LABEL_65:
        LODWORD(v31) = 0;
      }
    }
    LODWORD(v24) = v31 + v24;
  }
LABEL_68:
  result = GameRoutine_19ef790(&v50, (unsigned int)v24 ^ 0x7FFFFFFF, 32);
  v39 = v51;
  v40 = v47;
  *a1 = v50;
  a1[1] = v39;
  a1[2] = v52;
  if (v40 != nullptr) {
    v48 = v40;
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
  }
  return result;
}

__int64 UnitTroopListMenu_1792da0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  bool v8;
  __int64* v9;
  __int64 v10;
  int v11;
  int v12;
  _BYTE* v14;
  bool v15;
  char v16;

  v2 = 2LL * a2;
  v3 = *(_QWORD*)(**(_QWORD**)(a1 + 8) + 88LL);
  v4 = *(unsigned __int16*)(v3 + v2 + 514) +
       10000 * *(unsigned __int8*)(v3 + a2 + 540);
  v5 = *(_QWORD*)(**(_QWORD**)(a1 + 16) + 88LL);
  v6 = *(unsigned __int16*)(v5 + v2 + 514) +
       10000 * *(unsigned __int8*)(v5 + a2 + 540);
  v7 = *(_QWORD*)(a1 + 24);
  v8 = v4 > v6;
  if (v4 == v6) {
    v9 = *(__int64**)(v7 + 8);
    v10 = *v9;
    v11 = (*(__int64 (**)(_QWORD))(**(_QWORD**)v9[1] + 464LL))(*(_QWORD*)v9[1]);
    v12 = (*(__int64 (**)(_QWORD))(**(_QWORD**)v9[2] + 464LL))(*(_QWORD*)v9[2]);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 1312LL))(v10) & 1) != 0) {
      v11 |=
          (*(__int64 (**)(_QWORD))(**(_QWORD**)v9[1] + 576LL))(*(_QWORD*)v9[1]);
      v12 |=
          (*(__int64 (**)(_QWORD))(**(_QWORD**)v9[2] + 576LL))(*(_QWORD*)v9[2]);
    }
    if (((v11 ^ v12) & 1) == 0) {
      return GameRoutine_15b75f0(*(_QWORD*)v9[1], *(_QWORD*)v9[2]);
    }
  }
  else {
    v14 = *(_BYTE**)v7;
    v15 = v4 < v6;
    v16 = v8;
    if (*v14 != 0) {
      LOBYTE(v11) = v15;
    }
    else {
      LOBYTE(v11) = v16;
    }
  }
  return v11 & 1;
}

__int64 UnitTroopListMenu_17930e0(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  bool v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v2 = *(__int64**)(result + 16);
  v3 = *a2;
  if (*a2 == 0) {
    goto LABEL_13;
  }
  v4 = *(_QWORD*)(result + 8);
  v7 = *(_QWORD*)(v4 + 24);
  v5 = v4 + 24;
  v6 = v7;
  if (v7 == 0) {
    goto LABEL_13;
  }
  v8 = *(unsigned __int8*)(v3 + 48);
  v9 = v5;
  do {
    v10 = *(unsigned __int8*)(v6 + 26);
    v11 = v10 >= v8;
    if (v10 >= v8) {
      v12 = 0;
    }
    else {
      v12 = 8;
    }
    if (v11) {
      v9 = v6;
    }
    v6 = *(_QWORD*)(v6 + v12);
  } while (v6 != 0);
  if (v9 != v5 && v8 >= *(unsigned __int8*)(v9 + 26)) {
    v13 = *(_WORD*)(v9 + 28) & 0xFFF;
  }
  else {
  LABEL_13:
    v13 = 0;
  }
  v15 = v2[1];
  v14 = v2[2];
  if (v15 >= v14) {
    v17 = *v2;
    v18 = v15 - *v2;
    v19 = (v18 >> 4) + 1;
    if (v19 >> 60 != 0) {
      GameRoutine_1793290();
    }
    v20 = v14 - v17;
    v21 = fw_memory_g_heap_manager_ptr;
    if (v20 >> 3 > v19) {
      v19 = v20 >> 3;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF0LL) {
      v22 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v22 = v19;
    }
    if (v22 != 0) {
      if (v22 >> 60 != 0) {
        GameRoutine_60a210(result);
      }
      v23 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v22, 16, 0);
    }
    else {
      v23 = 0;
    }
    v24 = v23 + v18;
    v25 = v23 + 16 * v22;
    *(_QWORD*)v24 = v3;
    v26 = v23 + v18 - 16 * (v18 >> 4);
    *(_DWORD*)(v24 + 8) = v13;
    v16 = v23 + v18 + 16;
    result = memcpy(v26, v17, v18);
    *v2 = v26;
    v2[1] = v16;
    v2[2] = v25;
    if (v17 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v27 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v27, v17);
    }
  }
  else {
    *(_QWORD*)v15 = v3;
    *(_DWORD*)(v15 + 8) = v13;
    v16 = v15 + 16;
  }
  v2[1] = v16;
  return result;
}

__int64 UnitTroopListMenu_17944c0(__int64 a1, _DWORD* a2)
{
  __int64 v3;
  unsigned int v4;
  char v5;
  __int64 result;
  char v7;

  v3 = **(_QWORD**)(a1 + 16);
  v4 = *a2 - 28;
  if (v4 > 9) {
    v5 = 11;
  }
  else {
    v5 = GameData_1c019a4[v4];
  }
  v7 = v5;
  result = game_Unit_GetParam(v3, &v7, 1);
  **(_DWORD**)(a1 + 8) += result;
  return result;
}

__int64 game_menu_UnitTroopListMenu_UpdatePage_lambda0_Invoke(__int64 a1,
                                                              __int64 a2)
{
  _DWORD* v2;

  v2 = *(_DWORD**)(a1 + 8);
  *(_DWORD*)(*(_QWORD*)a2 + 96LL) = *v2;
  return 0;
}

bool game_menu_UnitTroopListMenu_ApplyChangeUnit_lambda0_Invoke(__int64 a1,
                                                                __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) ==
         *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1072LL);
}

#pragma GCC visibility pop
