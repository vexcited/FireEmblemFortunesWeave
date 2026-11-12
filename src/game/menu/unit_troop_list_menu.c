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
__int64
UnitTroopListMenu_1792540_alt2(_BYTE* a1, __int64* a2, unsigned __int64* a3,
                               __int64 a4, unsigned __int64* a5,
                               __int64 a6) __asm__("UnitTroopListMenu_1792540");
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
__int64
UnitTroopListMenu_1792940_alt1(_QWORD* a1,
                               __int64 a2) __asm__("UnitTroopListMenu_1792940");
__int64 GameRoutine_156d790(__int64);
bool UnitTroopListMenu_17940a0_alt1(__int64, __int64) __asm__(
    "UnitTroopListMenu_17940a0");
extern __int64 (*GameData_20c92b8[])();
__int64 UnitTroopListMenu_1792f90(__int64 a1);
__int64* UnitTroopListMenu_17932c0(__int64* result, __int64* a2, __int64 a3,
                                   char a4);
__int64* UnitTroopListMenu_1793f10(__int64* result, __int64* a2, __int64* a3,
                                   __int64* a4);
bool UnitTroopListMenu_17940a0(__int64 a1, __int64* a2);
__int64 GameRoutine_15b75f0_alt1(__int64,
                                 __int64) __asm__("GameRoutine_15b75f0");
__int64 GameRoutine_682660_alt1(unsigned __int8) __asm__("GameRoutine_682660");
__int64
UnitTroopListMenu_17932c0_alt1(__int64 result, _QWORD*, __int64,
                               char) __asm__("UnitTroopListMenu_17932c0");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
void GameHr_19ef790(__int64*, __int64, unsigned int);
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 UnitTroopListMenu_1792540(_BYTE* a1, __int64* a2, __int64 a3,
                                  __int64 a4, __int64 a5, __int64 a6);
void UnitTroopListMenu_1792940(_QWORD* a1, __int64 a2);
__attribute__((swiftcall)) void game_gameui_1594d10(PSEUDO_X8, _WORD* result,
                                                    int, __int64);
__int64 UnitTroopListMenu_1792ee0(__int64 a1);

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

__int64 UnitTroopListMenu_1792540(_BYTE* a1, __int64* a2, __int64 a3,
                                  __int64 a4, __int64 a5, __int64 a6)
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

  v6 = a4 - a3;
  v7 = a6 - a5;
  v8 = (unsigned __int64*)a5;
  v9 = (unsigned __int64*)a3;
  if (a4 - a3 == a6 - a5 && memcmp_alt1(a3, a5, a4 - a3) == 0) {
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
      return GameRoutine_15b75f0_alt1(*(_QWORD*)a2[1], *(_QWORD*)a2[2]);
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

void UnitTroopListMenu_1792940(_QWORD* a1, __int64 a2)
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
  char* v23;
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
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  struct {
    _QWORD v44[4];
    _QWORD* v45;
  } v44_;
  struct {
    char* v46;
    char* v47;
    __int64 v48;
  } v46_;
  struct {
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v49_;
  __int64 v52;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(a2 + 400);
  v49_.v50 = 0;
  v49_.v51 = 0;
  v49_.v49 = 0;
  v5 = *(unsigned __int8*)(v2 + 96);
  if (v5 == 1) {
    if (*(_BYTE*)(a2 + 1944) == 0) {
      goto LABEL_76;
    }
    GameHr_19ef790(&v49_.v49, 1, 8u),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
    GameHr_19ef790(&v49_.v49, v21, 8u),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_19ef790(
        &v49_.v49,
        *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v17 + 64) +
                                                   8LL *
                                                       *(unsigned __int8*)(a2 +
                                                                           1944)) +
                                        64LL) +
                             16LL) ^
            0x7FFFFFFFLL,
        0x20u),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameHr_19ef790(
        &v49_.v49,
        (unsigned __int8)~*(
            _BYTE*)(*(_QWORD*)(*(_QWORD*)(*v17 + 64) +
                               8LL * *(unsigned __int8*)(a2 + 1944)) +
                    50LL),
        8u),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41 = 32;
    v42 = *(unsigned __int8*)(a2 + 1944) | 0x80000000LL;
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
    v41 = 8;
    v42 = 0;
  LABEL_81:
    GameHr_19ef790(&v49_.v49, v42, v41),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v43 = v49_.v50;
    *a1 = v49_.v49;
    a1[1] = v43;
    a1[2] = v49_.v51;
    return;
  }
  v6 = &GameData_21f4018[8 * (unsigned __int64)*(unsigned __int8*)(v22 + 32)];
  if (*(_BYTE*)v6 == 0) {
    goto LABEL_76;
  }
LABEL_5:
  GameHr_19ef790(&v49_.v49, 2, 8u),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
  GameHr_19ef790(&v49_.v49, v7, 8u),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = 32;
  GameHr_19ef790(&v49_.v49, *(unsigned __int8*)v6 | 0x80000000LL, 0x20u),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = v44_.v44;
  v46_.v47 = nullptr;
  v46_.v48 = 0;
  v46_.v46 = nullptr;
  v44_.v44[0] = GameData_20c9238;
  v44_.v44[1] = v6;
  v44_.v45 = v44_.v44;
  v44_.v44[2] = &v46_.v46;
  v12 = (_QWORD*)v6[2];
  v13 = v6 + 3;
  if (v12 == v13) {
    goto LABEL_36;
  }
  do {
    v14 = GameRoutine_682660_alt1(*((_BYTE*)v12 + 26)),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v14 != 0) {
      v52 = v14;
      if (v44_.v45 == nullptr) {
        GameRoutine_60a310_alt2(),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v44_.v45 + 48LL))(v44_.v45, &v52),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
  v11 = v44_.v45;
  if (v44_.v45 == v44_.v44) {
    v8 = 32;
    goto LABEL_36;
  }
  if (v44_.v45 != nullptr) {
    v8 = 40;
  LABEL_36:
    (*(void (**)(_QWORD*, __int64, __int64))(*v11 + v8))(v11, v9, v10),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v46_.v46 == v46_.v47 ||
      (UnitTroopListMenu_17932c0_alt1(
           (__int64)v46_.v46, v46_.v47,
           (2 * __clz((v46_.v47 - v46_.v46) >> 4)) ^ 0x7E, 1),
       v23 = (char*)(v46_.v47 - v46_.v46), v46_.v47 == v46_.v46)) {
    LODWORD(v24) = 0;
    goto LABEL_68;
  }
  v24 = *(_QWORD*)v46_.v46;
  if (*(_QWORD*)v46_.v46 != 0) {
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
        if ((unsigned __int64)v23 >= 0x11) {
          goto LABEL_53;
        }
        goto LABEL_68;
      }
    }
    LODWORD(v24) = 0;
  }
  if ((unsigned __int64)v23 >= 0x11) {
  LABEL_53:
    v31 = *((_QWORD*)v46_.v46 + 2);
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
  GameHr_19ef790(&v49_.v49, (unsigned int)v24 ^ 0x7FFFFFFF, 0x20u),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38 = v49_.v50;
  v39 = v46_.v46;
  *a1 = v49_.v49;
  a1[1] = v38;
  a1[2] = v49_.v51;
  if (v39 != nullptr) {
    v46_.v47 = v39;
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v39),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
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

__int64 UnitTroopListMenu_1792ee0(__int64 a1)
{
  _WORD* v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  struct {
    int v7;
    char v8;
    char gap5_[11];
    int v9;
    int v10;
    char gap24_[8];
    __int64 v11;
    __int64 v12;
  } v7_;

  if (*(_WORD*)(a1 + 1952) != 0) {
    v2 = (_WORD*)(a1 + 1952);
  }
  else {
    v2 = nullptr;
  }
  game_gameui_1594d10((void*)((__int64)&v7_.v7), v2, 17, a1);
  if (v7_.v8 == 1) {
    if (v7_.v7 == 17) {
      v3 = v7_.v9 + 1000 * v7_.v10;
    }
    else {
      v3 = 0;
    }
    v4 = v7_.v11;
    if (v7_.v11 == 0) {
      return v3;
    }
  }
  else {
    v3 = 0;
    v4 = v7_.v11;
    if (v7_.v11 == 0) {
      return v3;
    }
  }
  v7_.v12 = v4;
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  return v3;
}

__int64 UnitTroopListMenu_1792f90(__int64 a1)
{
  __int64 v1;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;
  unsigned int v5;
  __int64 v6;

  v6 = a1;
  v5 = 0;
  v3_.v3[0] = GameData_20c92b8;
  v3_.v3[1] = &v5;
  v3_.v4 = v3_.v3;
  v3_.v3[2] = &v6;
  GameRoutine_156d790((__int64)v3_.v3);
  if (v3_.v4 == v3_.v3) {
    v1 = 32;
    goto LABEL_5;
  }
  if (v3_.v4 != nullptr) {
    v1 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3_.v4 + v1))((__int64)v3_.v4);
  }
  return v5;
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

__int64* UnitTroopListMenu_17932c0(__int64* result, __int64* a2, __int64 a3,
                                   char a4)
{
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  int v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  int v74;
  unsigned __int64 v75;
  __int64 v76;
  int v77;
  int v78;
  bool v79;
  unsigned __int64 v80;
  int v81;
  unsigned __int64 v82;
  int v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  int v86;
  __int64 v87;
  int v88;
  int v89;
  __int64 v90;
  int v91;
  int v92;
  __int64 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  int v101;
  int v102;
  int v103;
  __int64* v104;
  bool v106;
  __int64 v107;
  __int64* v108;
  __int64 v109;
  int v110;
  int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  int v119;
  int v120;
  bool v121;
  __int64 v122;
  unsigned __int64 v123;
  int v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  int v129;
  bool v130;
  __int64 v131;
  __int64 v132;
  int v133;
  __int64 v134;
  unsigned __int64 v135;
  int v136;
  int v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  int v145;
  unsigned __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  int v150;
  int v151;
  __int64 v152;
  __int64 v153;
  _DWORD* v154;
  int v155;
  int v156;
  __int64 v157;
  _DWORD* v158;
  _DWORD* v159;
  int v160;
  __int64 v161;

  v7 = result;
LABEL_2:
  v8 = (unsigned __int64)v7;
  while (1) {
    v7 = (__int64*)v8;
    v9 = (__int64)((__int64)a2 - v8) >> 4;
    if (v9 > 2) {
      break;
    }
    if ((unsigned __int64)v9 < 2) {
      return result;
    }
    if (v9 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 2) <=
          (signed __int32)*(_DWORD*)(v8 + 8)) {
        return result;
      }
      v99 = *(_QWORD*)v8;
    LABEL_115:
      *(_QWORD*)v8 = *(a2 - 2);
      *(a2 - 2) = v99;
      v103 = *(_DWORD*)(v8 + 8);
      *(_DWORD*)(v8 + 8) = *((_DWORD*)a2 - 2);
    LABEL_116:
      *((_DWORD*)a2 - 2) = v103;
      return result;
    }
  LABEL_10:
    if (v9 <= 23) {
      v104 = (__int64*)(v8 + 16);
      v106 = (__int64*)v8 == a2 || v104 == a2;
      if ((a4 & 1) != 0) {
        if (!v106) {
          v107 = 0;
          v108 = (__int64*)v8;
          do {
            v110 = *((_DWORD*)v108 + 6);
            v111 = *((_DWORD*)v108 + 2);
            v108 = v104;
            if (v110 > v111) {
              v112 = *v104;
              v113 = v107;
              do {
                v114 = v8 + v113;
                *(_QWORD*)(v114 + 16) = *(_QWORD*)(v8 + v113);
                *(_DWORD*)(v114 + 24) = *(_DWORD*)(v8 + v113 + 8);
                if (v113 == 0) {
                  v109 = v8;
                  goto LABEL_128;
                }
                v113 -= 16;
              } while (v110 > (signed __int32)*(_DWORD*)(v114 - 8));
              v109 = v8 + v113 + 16;
            LABEL_128:
              *(_QWORD*)v109 = v112;
              *(_DWORD*)(v109 + 8) = v110;
            }
            v104 = v108 + 2;
            v107 += 16;
          } while (v108 + 2 != a2);
        }
      }
      else if (!v106) {
        v154 = (_DWORD*)(v8 + 24);
        do {
          v155 = *((_DWORD*)v7 + 6);
          v156 = *((_DWORD*)v7 + 2);
          v7 = v104;
          if (v155 > v156) {
            v157 = *v104;
            v158 = v154;
            do {
              v159 = v158;
              *((_QWORD*)v158 - 1) = *((_QWORD*)v158 - 3);
              v160 = *(v158 - 4);
              v158 -= 4;
              *v159 = v160;
            } while (v155 > (signed __int32)*(v159 - 8));
            *((_QWORD*)v158 - 1) = v157;
            *v158 = v155;
          }
          v104 = v7 + 2;
          v154 += 4;
        } while (v7 + 2 != a2);
      }
      return result;
    }
    if (a3 == 0) {
      if ((__int64*)v8 != a2) {
        v115 = (unsigned __int64)(v9 - 2) >> 1;
        v116 = v115;
        do {
          if (v115 >= v116) {
            v117 = (2 * (v116 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v118 = v8 + 16 * v117;
            if ((__int64)(2 * v116 + 2) < v9) {
              v119 = *(_DWORD*)(v118 + 8);
              v120 = *(_DWORD*)(v118 + 24);
              v121 = v119 <= v120;
              if (v119 <= v120) {
                v122 = 0;
              }
              else {
                v122 = 16;
              }
              if (!v121) {
                v117 = 2 * v116 + 2;
              }
              v118 += v122;
            }
            v123 = v8 + 16 * v116;
            v124 = *(_DWORD*)(v123 + 8);
            if ((signed __int32)*(_DWORD*)(v118 + 8) <= v124) {
              v125 = *(_QWORD*)v123;
              do {
                v126 = v123;
                v123 = v118;
                *(_QWORD*)v126 = *(_QWORD*)v118;
                *(_DWORD*)(v126 + 8) = *(_DWORD*)(v118 + 8);
                if ((__int64)v115 < v117) {
                  break;
                }
                v127 = (2 * (v117 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v128 = 2 * v117 + 2;
                v118 = v8 + 16 * v127;
                if (v128 < v9) {
                  v129 = *(_DWORD*)(v118 + 8);
                  result = (__int64*)*(unsigned int*)(v118 + 24);
                  v130 = v129 <= (int)result;
                  if (v129 <= (int)result) {
                    v131 = 0;
                  }
                  else {
                    v131 = 16;
                  }
                  if (!v130) {
                    v127 = v128;
                  }
                  v118 += v131;
                }
                v117 = v127;
              } while ((signed __int32)*(_DWORD*)(v118 + 8) <= v124);
              *(_QWORD*)v123 = v125;
              *(_DWORD*)(v123 + 8) = v124;
            }
          }
          v121 = (__int64)v116-- <= 0;
        } while (!v121);
        do {
          v132 = *(_QWORD*)v8;
          v133 = *(_DWORD*)(v8 + 8);
          v134 = 0;
          v135 = v8;
          do {
            v140 = v135 + 16 * v134;
            v141 = (2 * v134) | 1;
            v139 = v140 + 16;
            v134 = 2 * v134 + 2;
            if (v134 < v9) {
              v136 = *(_DWORD*)(v140 + 24);
              v137 = *(_DWORD*)(v140 + 40);
              v138 = v140 + 32;
              if (v136 <= v137) {
                v134 = v141;
              }
              else {
                v139 = v138;
              }
            }
            else {
              v134 = v141;
            }
            *(_QWORD*)v135 = *(_QWORD*)v139;
            *(_DWORD*)(v135 + 8) = *(_DWORD*)(v139 + 8);
            v135 = v139;
          } while (v134 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
          if ((__int64*)v139 == a2 - 2) {
            *(_QWORD*)v139 = v132;
            *(_DWORD*)(v139 + 8) = v133;
          }
          else {
            *(_QWORD*)v139 = *(a2 - 2);
            *(_DWORD*)(v139 + 8) = *((_DWORD*)a2 - 2);
            *(a2 - 2) = v132;
            *((_DWORD*)a2 - 2) = v133;
            v142 = (__int64)(v139 - v8 + 16) >> 4;
            v121 = v142 < 2;
            v143 = v142 - 2;
            if (!v121) {
              v144 = v143 >> 1;
              v145 = *(_DWORD*)(v139 + 8);
              v146 = v8 + 16 * v144;
              if ((signed __int32)*(_DWORD*)(v146 + 8) > v145) {
                v147 = *(_QWORD*)v139;
                do {
                  v148 = v139;
                  v139 = v146;
                  *(_QWORD*)v148 = *(_QWORD*)v146;
                  *(_DWORD*)(v148 + 8) = *(_DWORD*)(v146 + 8);
                  if (v144 == 0) {
                    break;
                  }
                  v144 = (v144 - 1) >> 1;
                  v146 = v8 + 16 * v144;
                } while ((signed __int32)*(_DWORD*)(v146 + 8) > v145);
                *(_QWORD*)v139 = v147;
                *(_DWORD*)(v139 + 8) = v145;
              }
            }
          }
          a2 -= 2;
          v121 = v9-- <= 2;
        } while (!v121);
      }
      return result;
    }
    v10 = *((_DWORD*)a2 - 2);
    v11 = v8 + 16 * ((unsigned __int64)v9 >> 1);
    if ((unsigned __int64)v9 < 0x81) {
      v16 = *(_DWORD*)(v8 + 8);
      v17 = *(_DWORD*)(v11 + 8);
      if (v16 <= v17) {
        if (v10 <= v16) {
          goto LABEL_38;
        }
        v25 = *(_QWORD*)v8;
        *(_QWORD*)v8 = *(a2 - 2);
        *(a2 - 2) = v25;
        LODWORD(v25) = *(_DWORD*)(v8 + 8);
        *(_DWORD*)(v8 + 8) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v25;
        v26 = *(_DWORD*)(v8 + 8);
        v27 = *(_DWORD*)(v11 + 8);
        if (v26 <= v27) {
          goto LABEL_38;
        }
        v28 = *(_QWORD*)v11;
        v29 = *(_QWORD*)v8;
        *(_DWORD*)(v11 + 8) = v26;
        *(_DWORD*)(v8 + 8) = v27;
        *(_QWORD*)v11 = v29;
        *(_QWORD*)v8 = v28;
        --a3;
        if ((a4 & 1) == 0) {
          goto LABEL_63;
        }
      }
      else {
        v18 = *(_QWORD*)v11;
        if (v10 <= v16) {
          v41 = *(_QWORD*)v8;
          *(_DWORD*)(v11 + 8) = v16;
          *(_DWORD*)(v8 + 8) = v17;
          *(_QWORD*)v11 = v41;
          *(_QWORD*)v8 = v18;
          if ((signed __int32)*((_DWORD*)a2 - 2) > v17) {
            *(_QWORD*)v8 = *(a2 - 2);
            *(a2 - 2) = v18;
            v42 = *(_DWORD*)(v8 + 8);
            *(_DWORD*)(v8 + 8) = *((_DWORD*)a2 - 2);
            *((_DWORD*)a2 - 2) = v42;
          }
        LABEL_38:
          --a3;
          if ((a4 & 1) == 0) {
            goto LABEL_63;
          }
          goto LABEL_39;
        }
        *(_QWORD*)v11 = *(a2 - 2);
        *(a2 - 2) = v18;
        v19 = *(_DWORD*)(v11 + 8);
        *(_DWORD*)(v11 + 8) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v19;
        --a3;
        if ((a4 & 1) == 0) {
          goto LABEL_63;
        }
      }
    LABEL_39:
      v43 = *(_QWORD*)v8;
      v44 = *(_DWORD*)(v8 + 8);
    LABEL_64:
      v67 = 0;
      do {
        v68 = v8 + v67;
        v67 += 16;
      } while ((signed __int32)*(_DWORD*)(v68 + 24) > v44);
      v69 = v8 + v67;
      v70 = (unsigned __int64)a2;
      if (v67 == 16) {
        v73 = (unsigned __int64)a2;
        while (v69 < v73) {
          v74 = *(_DWORD*)(v73 - 8);
          v72 = v73 - 16;
          v73 -= 16LL;
          if (v74 > v44) {
            goto LABEL_74;
          }
        }
        v72 = v73;
      }
      else {
        do {
          v71 = *(_DWORD*)(v70 - 8);
          v72 = v70 - 16;
          v70 -= 16LL;
        } while (v71 <= v44);
      }
    LABEL_74:
      v8 = v69;
      if (v69 < v72) {
        v75 = v72;
        do {
          v76 = *(_QWORD*)v8;
          *(_QWORD*)v8 = *(_QWORD*)v75;
          *(_QWORD*)v75 = v76;
          LODWORD(v76) = *(_DWORD*)(v8 + 8);
          *(_DWORD*)(v8 + 8) = *(_DWORD*)(v75 + 8);
          *(_DWORD*)(v75 + 8) = v76;
          do {
            v77 = *(_DWORD*)(v8 + 24);
            v8 += 16LL;
          } while (v77 > v44);
          do {
            v78 = *(_DWORD*)(v75 - 8);
            v75 -= 16LL;
          } while (v78 <= v44);
        } while (v8 < v75);
      }
      if (v7 != (__int64*)(v8 - 16)) {
        *v7 = *(_QWORD*)(v8 - 16);
        *((_DWORD*)v7 + 2) = *(_DWORD*)(v8 - 8);
      }
      *(_QWORD*)(v8 - 16) = v43;
      *(_DWORD*)(v8 - 8) = v44;
      if (v69 < v72) {
        goto LABEL_85;
      }
      v79 = UnitTroopListMenu_17940a0_alt1((__int64)v7, v8 - 16);
      result = (__int64*)UnitTroopListMenu_17940a0_alt1(v8, (__int64)a2);
      if (((unsigned __int8)result & 1) != 0) {
        a2 = (__int64*)(v8 - 16);
        if (!v79) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v79) {
      LABEL_85:
        result = UnitTroopListMenu_17932c0(v7, v8 - 16, a3, a4 & 1);
        a4 = 0;
      }
    }
    else {
      v12 = *(_DWORD*)(v11 + 8);
      v13 = *(_DWORD*)(v8 + 8);
      if (v12 <= v13) {
        if (v10 > v12) {
          v20 = *(_QWORD*)v11;
          *(_QWORD*)v11 = *(a2 - 2);
          *(a2 - 2) = v20;
          LODWORD(v20) = *(_DWORD*)(v11 + 8);
          *(_DWORD*)(v11 + 8) = *((_DWORD*)a2 - 2);
          *((_DWORD*)a2 - 2) = v20;
          v21 = *(_DWORD*)(v11 + 8);
          v22 = *(_DWORD*)(v8 + 8);
          if (v21 > v22) {
            v23 = *(_QWORD*)v8;
            v24 = *(_QWORD*)v11;
            *(_DWORD*)(v8 + 8) = v21;
            *(_DWORD*)(v11 + 8) = v22;
            *(_QWORD*)v8 = v24;
            *(_QWORD*)v11 = v23;
          }
        }
      }
      else {
        v14 = *(_QWORD*)v8;
        if (v10 <= v12) {
          v30 = *(_QWORD*)v11;
          *(_DWORD*)(v8 + 8) = v12;
          *(_DWORD*)(v11 + 8) = v13;
          *(_QWORD*)v8 = v30;
          *(_QWORD*)v11 = v14;
          if ((signed __int32)*((_DWORD*)a2 - 2) <= v13) {
            goto LABEL_30;
          }
          *(_QWORD*)v11 = *(a2 - 2);
          *(a2 - 2) = v14;
          v15 = *(_DWORD*)(v11 + 8);
          *(_DWORD*)(v11 + 8) = *((_DWORD*)a2 - 2);
        }
        else {
          *(_QWORD*)v8 = *(a2 - 2);
          *(a2 - 2) = v14;
          v15 = *(_DWORD*)(v8 + 8);
          *(_DWORD*)(v8 + 8) = *((_DWORD*)a2 - 2);
        }
        *((_DWORD*)a2 - 2) = v15;
      }
    LABEL_30:
      v31 = *(_DWORD*)(v11 - 8);
      v32 = *(_DWORD*)(v8 + 24);
      v33 = *((_DWORD*)a2 - 6);
      if (v31 <= v32) {
        if (v33 > v31) {
          v36 = *(_QWORD*)(v11 - 16);
          *(_QWORD*)(v11 - 16) = *(a2 - 4);
          *(a2 - 4) = v36;
          LODWORD(v36) = *(_DWORD*)(v11 - 8);
          *(_DWORD*)(v11 - 8) = *((_DWORD*)a2 - 6);
          *((_DWORD*)a2 - 6) = v36;
          v37 = *(_DWORD*)(v11 - 8);
          v38 = *(_DWORD*)(v8 + 24);
          if (v37 > v38) {
            v39 = *(_QWORD*)(v8 + 16);
            v40 = *(_QWORD*)(v11 - 16);
            *(_DWORD*)(v8 + 24) = v37;
            *(_DWORD*)(v11 - 8) = v38;
            *(_QWORD*)(v8 + 16) = v40;
            *(_QWORD*)(v11 - 16) = v39;
          }
        }
      }
      else {
        v34 = *(_QWORD*)(v8 + 16);
        if (v33 <= v31) {
          v45 = *(_QWORD*)(v11 - 16);
          *(_DWORD*)(v8 + 24) = v31;
          *(_DWORD*)(v11 - 8) = v32;
          *(_QWORD*)(v8 + 16) = v45;
          *(_QWORD*)(v11 - 16) = v34;
          if ((signed __int32)*((_DWORD*)a2 - 6) <= v32) {
            goto LABEL_43;
          }
          *(_QWORD*)(v11 - 16) = *(a2 - 4);
          *(a2 - 4) = v34;
          v35 = *(_DWORD*)(v11 - 8);
          *(_DWORD*)(v11 - 8) = *((_DWORD*)a2 - 6);
        }
        else {
          *(_QWORD*)(v8 + 16) = *(a2 - 4);
          *(a2 - 4) = v34;
          v35 = *(_DWORD*)(v8 + 24);
          *(_DWORD*)(v8 + 24) = *((_DWORD*)a2 - 6);
        }
        *((_DWORD*)a2 - 6) = v35;
      }
    LABEL_43:
      v46 = *(_DWORD*)(v11 + 24);
      v47 = *(_DWORD*)(v8 + 40);
      v48 = *((_DWORD*)a2 - 10);
      if (v46 <= v47) {
        if (v48 > v46) {
          v51 = *(_QWORD*)(v11 + 16);
          *(_QWORD*)(v11 + 16) = *(a2 - 6);
          *(a2 - 6) = v51;
          LODWORD(v51) = *(_DWORD*)(v11 + 24);
          *(_DWORD*)(v11 + 24) = *((_DWORD*)a2 - 10);
          *((_DWORD*)a2 - 10) = v51;
          v52 = *(_DWORD*)(v11 + 24);
          v53 = *(_DWORD*)(v8 + 40);
          if (v52 > v53) {
            v54 = *(_QWORD*)(v8 + 32);
            v55 = *(_QWORD*)(v11 + 16);
            *(_DWORD*)(v8 + 40) = v52;
            *(_DWORD*)(v11 + 24) = v53;
            *(_QWORD*)(v8 + 32) = v55;
            *(_QWORD*)(v11 + 16) = v54;
          }
        }
      }
      else {
        v49 = *(_QWORD*)(v8 + 32);
        if (v48 <= v46) {
          v56 = *(_QWORD*)(v11 + 16);
          *(_DWORD*)(v8 + 40) = v46;
          *(_DWORD*)(v11 + 24) = v47;
          *(_QWORD*)(v8 + 32) = v56;
          *(_QWORD*)(v11 + 16) = v49;
          if ((signed __int32)*((_DWORD*)a2 - 10) <= v47) {
            goto LABEL_52;
          }
          *(_QWORD*)(v11 + 16) = *(a2 - 6);
          *(a2 - 6) = v49;
          v50 = *(_DWORD*)(v11 + 24);
          *(_DWORD*)(v11 + 24) = *((_DWORD*)a2 - 10);
        }
        else {
          *(_QWORD*)(v8 + 32) = *(a2 - 6);
          *(a2 - 6) = v49;
          v50 = *(_DWORD*)(v8 + 40);
          *(_DWORD*)(v8 + 40) = *((_DWORD*)a2 - 10);
        }
        *((_DWORD*)a2 - 10) = v50;
      }
    LABEL_52:
      v57 = *(_DWORD*)(v11 + 8);
      v58 = *(_DWORD*)(v11 - 8);
      v59 = *(_DWORD*)(v11 + 24);
      if (v57 <= v58) {
        v60 = *(_QWORD*)v11;
        if (v59 <= v57) {
          v58 = *(_DWORD*)(v11 + 8);
        }
        else {
          v62 = *(_QWORD*)(v11 + 16);
          *(_QWORD*)(v11 + 16) = v60;
          *(_DWORD*)(v11 + 8) = v59;
          *(_DWORD*)(v11 + 24) = v57;
          *(_QWORD*)v11 = v62;
          if (v59 <= v58) {
            v58 = v59;
            v60 = v62;
          }
          else {
            v60 = *(_QWORD*)(v11 - 16);
            *(_QWORD*)(v11 - 16) = v62;
            *(_DWORD*)(v11 - 8) = v59;
            *(_DWORD*)(v11 + 8) = v58;
            *(_QWORD*)v11 = v60;
          }
        }
      }
      else {
        v60 = *(_QWORD*)(v11 - 16);
        if (v59 <= v57) {
          v63 = *(_QWORD*)v11;
          *(_QWORD*)v11 = v60;
          *(_DWORD*)(v11 - 8) = v57;
          *(_DWORD*)(v11 + 8) = v58;
          *(_QWORD*)(v11 - 16) = v63;
          if (v59 > v58) {
            v64 = *(_QWORD*)(v11 + 16);
            *(_QWORD*)(v11 + 16) = v60;
            *(_DWORD*)(v11 + 8) = v59;
            v60 = v64;
            *(_QWORD*)v11 = v64;
            *(_DWORD*)(v11 + 24) = v58;
            v58 = v59;
          }
        }
        else {
          v61 = *(_QWORD*)(v11 + 16);
          *(_QWORD*)(v11 + 16) = v60;
          v60 = *(_QWORD*)v11;
          *(_DWORD*)(v11 - 8) = v59;
          *(_DWORD*)(v11 + 24) = v58;
          v58 = v57;
          *(_QWORD*)(v11 - 16) = v61;
        }
      }
      v65 = *(_QWORD*)v8;
      *(_QWORD*)v8 = v60;
      v66 = *(_DWORD*)(v8 + 8);
      *(_DWORD*)(v8 + 8) = v58;
      *(_QWORD*)v11 = v65;
      *(_DWORD*)(v11 + 8) = v66;
      --a3;
      if ((a4 & 1) != 0) {
        goto LABEL_39;
      }
    LABEL_63:
      v44 = *(_DWORD*)(v8 + 8);
      v43 = *(_QWORD*)v8;
      if ((signed __int32)*(_DWORD*)(v8 - 8) > v44) {
        goto LABEL_64;
      }
      if (v44 <= (signed __int32)*((_DWORD*)a2 - 2)) {
        v82 = v8 + 16;
        do {
          v8 = v82;
          if (v82 >= (unsigned __int64)a2) {
            break;
          }
          v83 = *(_DWORD*)(v82 + 8);
          v82 += 16LL;
        } while (v44 <= v83);
      }
      else {
        v80 = v8;
        do {
          v81 = *(_DWORD*)(v80 + 24);
          v8 = v80 + 16;
          v80 += 16LL;
        } while (v44 <= v81);
      }
      v84 = (unsigned __int64)a2;
      if (v8 < (unsigned __int64)a2) {
        v85 = (unsigned __int64)a2;
        do {
          v86 = *(_DWORD*)(v85 - 8);
          v84 = v85 - 16;
          v85 -= 16LL;
        } while (v44 > v86);
      }
      while (v8 < v84) {
        v87 = *(_QWORD*)v8;
        *(_QWORD*)v8 = *(_QWORD*)v84;
        *(_QWORD*)v84 = v87;
        LODWORD(v87) = *(_DWORD*)(v8 + 8);
        *(_DWORD*)(v8 + 8) = *(_DWORD*)(v84 + 8);
        *(_DWORD*)(v84 + 8) = v87;
        do {
          v88 = *(_DWORD*)(v8 + 24);
          v8 += 16LL;
        } while (v44 <= v88);
        do {
          v89 = *(_DWORD*)(v84 - 8);
          v84 -= 16LL;
        } while (v44 > v89);
      }
      if (v7 != (__int64*)(v8 - 16)) {
        *v7 = *(_QWORD*)(v8 - 16);
        *((_DWORD*)v7 + 2) = *(_DWORD*)(v8 - 8);
      }
      a4 = 0;
      *(_QWORD*)(v8 - 16) = v43;
      *(_DWORD*)(v8 - 8) = v44;
    }
  }
  if (v9 != 3) {
    if (v9 == 4) {
      return UnitTroopListMenu_1793f10((__int64*)v8, (__int64*)(v8 + 16),
                                       (__int64*)(v8 + 32), a2 - 2);
    }
    if (v9 == 5) {
      result =
          UnitTroopListMenu_1793f10((__int64*)v8, (__int64*)(v8 + 16),
                                    (__int64*)(v8 + 32), (__int64*)(v8 + 48));
      if ((signed __int32)*((_DWORD*)a2 - 2) >
          (signed __int32)*(_DWORD*)(v8 + 56)) {
        v90 = *(_QWORD*)(v8 + 48);
        *(_QWORD*)(v8 + 48) = *(a2 - 2);
        *(a2 - 2) = v90;
        LODWORD(v90) = *(_DWORD*)(v8 + 56);
        *(_DWORD*)(v8 + 56) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v90;
        v91 = *(_DWORD*)(v8 + 56);
        v92 = *(_DWORD*)(v8 + 40);
        if (v91 > v92) {
          v93 = *(_QWORD*)(v8 + 32);
          v94 = *(_QWORD*)(v8 + 48);
          *(_DWORD*)(v8 + 56) = v92;
          v95 = *(_DWORD*)(v8 + 24);
          *(_DWORD*)(v8 + 40) = v91;
          *(_QWORD*)(v8 + 32) = v94;
          *(_QWORD*)(v8 + 48) = v93;
          if (v91 > v95) {
            v96 = *(_QWORD*)(v8 + 16);
            *(_DWORD*)(v8 + 40) = v95;
            v97 = *(_DWORD*)(v8 + 8);
            *(_QWORD*)(v8 + 16) = v94;
            *(_DWORD*)(v8 + 24) = v91;
            *(_QWORD*)(v8 + 32) = v96;
            if (v91 > v97) {
              v98 = *(_QWORD*)v8;
              *(_QWORD*)v8 = v94;
              *(_DWORD*)(v8 + 8) = v91;
              *(_DWORD*)(v8 + 24) = v97;
              *(_QWORD*)(v8 + 16) = v98;
            }
          }
        }
      }
      return result;
    }
    goto LABEL_10;
  }
  v100 = *(_DWORD*)(v8 + 24);
  v101 = *(_DWORD*)(v8 + 8);
  v102 = *((_DWORD*)a2 - 2);
  if (v100 <= v101) {
    if (v102 > v100) {
      v149 = *(_QWORD*)(v8 + 16);
      *(_QWORD*)(v8 + 16) = *(a2 - 2);
      *(a2 - 2) = v149;
      LODWORD(v149) = *(_DWORD*)(v8 + 24);
      *(_DWORD*)(v8 + 24) = *((_DWORD*)a2 - 2);
      *((_DWORD*)a2 - 2) = v149;
      v150 = *(_DWORD*)(v8 + 24);
      v151 = *(_DWORD*)(v8 + 8);
      if (v150 > v151) {
        v152 = *(_QWORD*)v8;
        v153 = *(_QWORD*)(v8 + 16);
        *(_DWORD*)(v8 + 8) = v150;
        *(_DWORD*)(v8 + 24) = v151;
        *(_QWORD*)v8 = v153;
        *(_QWORD*)(v8 + 16) = v152;
      }
    }
  }
  else {
    v99 = *(_QWORD*)v8;
    if (v102 > v100) {
      goto LABEL_115;
    }
    v161 = *(_QWORD*)(v8 + 16);
    *(_QWORD*)(v8 + 16) = v99;
    *(_DWORD*)(v8 + 8) = v100;
    *(_DWORD*)(v8 + 24) = v101;
    *(_QWORD*)v8 = v161;
    if ((signed __int32)*((_DWORD*)a2 - 2) > v101) {
      *(_QWORD*)(v8 + 16) = *(a2 - 2);
      *(a2 - 2) = v99;
      v103 = *(_DWORD*)(v8 + 24);
      *(_DWORD*)(v8 + 24) = *((_DWORD*)a2 - 2);
      goto LABEL_116;
    }
  }
  return result;
}

__int64* UnitTroopListMenu_1793f10(__int64* result, __int64* a2, __int64* a3,
                                   __int64* a4)
{
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v4 = *((_DWORD*)a2 + 2);
  v5 = *((_DWORD*)a3 + 2);
  if (v4 <= (signed __int32)*((_DWORD*)result + 2)) {
    if (v5 > v4) {
      v7 = *a2;
      *a2 = *a3;
      *a3 = v7;
      v5 = *((_DWORD*)a2 + 2);
      *((_DWORD*)a2 + 2) = *((_DWORD*)a3 + 2);
      *((_DWORD*)a3 + 2) = v5;
      if ((signed __int32)*((_DWORD*)a2 + 2) >
          (signed __int32)*((_DWORD*)result + 2)) {
        v8 = *result;
        *result = *a2;
        *a2 = v8;
        LODWORD(v8) = *((_DWORD*)result + 2);
        *((_DWORD*)result + 2) = *((_DWORD*)a2 + 2);
        *((_DWORD*)a2 + 2) = v8;
        v5 = *((_DWORD*)a3 + 2);
      }
    }
  }
  else {
    v6 = *result;
    if (v5 > v4) {
      *result = *a3;
      *a3 = v6;
      v5 = *((_DWORD*)result + 2);
      *((_DWORD*)result + 2) = *((_DWORD*)a3 + 2);
    LABEL_9:
      *((_DWORD*)a3 + 2) = v5;
      goto LABEL_10;
    }
    *result = *a2;
    *a2 = v6;
    v9 = *((_DWORD*)result + 2);
    *((_DWORD*)result + 2) = *((_DWORD*)a2 + 2);
    *((_DWORD*)a2 + 2) = v9;
    v5 = *((_DWORD*)a3 + 2);
    if (v5 > v9) {
      v10 = *a2;
      *a2 = *a3;
      *a3 = v10;
      v5 = *((_DWORD*)a2 + 2);
      *((_DWORD*)a2 + 2) = *((_DWORD*)a3 + 2);
      goto LABEL_9;
    }
  }
LABEL_10:
  if ((signed __int32)*((_DWORD*)a4 + 2) > v5) {
    v11 = *a3;
    *a3 = *a4;
    *a4 = v11;
    LODWORD(v11) = *((_DWORD*)a3 + 2);
    *((_DWORD*)a3 + 2) = *((_DWORD*)a4 + 2);
    *((_DWORD*)a4 + 2) = v11;
    if ((signed __int32)*((_DWORD*)a3 + 2) >
        (signed __int32)*((_DWORD*)a2 + 2)) {
      v12 = *a2;
      *a2 = *a3;
      *a3 = v12;
      LODWORD(v12) = *((_DWORD*)a2 + 2);
      *((_DWORD*)a2 + 2) = *((_DWORD*)a3 + 2);
      *((_DWORD*)a3 + 2) = v12;
      if ((signed __int32)*((_DWORD*)a2 + 2) >
          (signed __int32)*((_DWORD*)result + 2)) {
        v13 = *result;
        *result = *a2;
        *a2 = v13;
        LODWORD(v13) = *((_DWORD*)result + 2);
        *((_DWORD*)result + 2) = *((_DWORD*)a2 + 2);
        *((_DWORD*)a2 + 2) = v13;
      }
    }
  }
  return result;
}

bool UnitTroopListMenu_17940a0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v2 = ((__int64)a2 - a1) >> 4;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v15 = *(_DWORD*)(a1 + 24);
      v16 = *(_DWORD*)(a1 + 8);
      v17 = *((_DWORD*)a2 - 2);
      if (v15 <= v16) {
        if (v17 > v15) {
          v24 = *(_QWORD*)(a1 + 16);
          *(_QWORD*)(a1 + 16) = *(a2 - 2);
          *(a2 - 2) = v24;
          LODWORD(v24) = *(_DWORD*)(a1 + 24);
          *(_DWORD*)(a1 + 24) = *((_DWORD*)a2 - 2);
          *((_DWORD*)a2 - 2) = v24;
          v25 = *(_DWORD*)(a1 + 24);
          v26 = *(_DWORD*)(a1 + 8);
          if (v25 > v26) {
            v27 = *(_QWORD*)a1;
            v28 = *(_QWORD*)(a1 + 16);
            *(_DWORD*)(a1 + 8) = v25;
            *(_DWORD*)(a1 + 24) = v26;
            *(_QWORD*)a1 = v28;
            *(_QWORD*)(a1 + 16) = v27;
          }
        }
        return true;
      }
      v3 = *(_QWORD*)a1;
      if (v17 <= v15) {
        v32 = *(_QWORD*)(a1 + 16);
        *(_QWORD*)(a1 + 16) = v3;
        *(_DWORD*)(a1 + 8) = v15;
        *(_DWORD*)(a1 + 24) = v16;
        *(_QWORD*)a1 = v32;
        if ((signed __int32)*((_DWORD*)a2 - 2) > v16) {
          *(_QWORD*)(a1 + 16) = *(a2 - 2);
          *(a2 - 2) = v3;
          v33 = *(_DWORD*)(a1 + 24);
          *(_DWORD*)(a1 + 24) = *((_DWORD*)a2 - 2);
          *((_DWORD*)a2 - 2) = v33;
        }
        return true;
      }
      goto LABEL_16;
    case 4LL:
      UnitTroopListMenu_1793f10((__int64*)a1, (__int64*)(a1 + 16),
                                (__int64*)(a1 + 32), a2 - 2);
      return true;
    case 5LL:
      UnitTroopListMenu_1793f10((__int64*)a1, (__int64*)(a1 + 16),
                                (__int64*)(a1 + 32), (__int64*)(a1 + 48));
      if ((signed __int32)*((_DWORD*)a2 - 2) >
          (signed __int32)*(_DWORD*)(a1 + 56)) {
        v6 = *(_QWORD*)(a1 + 48);
        *(_QWORD*)(a1 + 48) = *(a2 - 2);
        *(a2 - 2) = v6;
        LODWORD(v6) = *(_DWORD*)(a1 + 56);
        *(_DWORD*)(a1 + 56) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v6;
        v7 = *(_DWORD*)(a1 + 56);
        v8 = *(_DWORD*)(a1 + 40);
        if (v7 > v8) {
          v9 = *(_QWORD*)(a1 + 32);
          v10 = *(_QWORD*)(a1 + 48);
          *(_DWORD*)(a1 + 56) = v8;
          v11 = *(_DWORD*)(a1 + 24);
          *(_DWORD*)(a1 + 40) = v7;
          *(_QWORD*)(a1 + 32) = v10;
          *(_QWORD*)(a1 + 48) = v9;
          if (v7 > v11) {
            v12 = *(_QWORD*)(a1 + 16);
            *(_DWORD*)(a1 + 40) = v11;
            v13 = *(_DWORD*)(a1 + 8);
            *(_QWORD*)(a1 + 16) = v10;
            *(_DWORD*)(a1 + 24) = v7;
            *(_QWORD*)(a1 + 32) = v12;
            if (v7 > v13) {
              v14 = *(_QWORD*)a1;
              *(_QWORD*)a1 = v10;
              *(_DWORD*)(a1 + 8) = v7;
              *(_DWORD*)(a1 + 24) = v13;
              *(_QWORD*)(a1 + 16) = v14;
            }
          }
        }
      }
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v2 < 2) {
      return true;
    }
    if (v2 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 2) >
          (signed __int32)*(_DWORD*)(a1 + 8)) {
        v3 = *(_QWORD*)a1;
      LABEL_16:
        *(_QWORD*)a1 = *(a2 - 2);
        *(a2 - 2) = v3;
        v18 = *(_DWORD*)(a1 + 8);
        *(_DWORD*)(a1 + 8) = *((_DWORD*)a2 - 2);
        *((_DWORD*)a2 - 2) = v18;
      }
      return true;
    }
  }
  v19 = *(_DWORD*)(a1 + 24);
  v20 = *(_DWORD*)(a1 + 8);
  v21 = *(_DWORD*)(a1 + 40);
  if (v19 <= v20) {
    if (v21 > v19) {
      v29 = *(_QWORD*)(a1 + 16);
      v30 = *(_QWORD*)(a1 + 32);
      *(_DWORD*)(a1 + 24) = v21;
      *(_DWORD*)(a1 + 40) = v19;
      *(_QWORD*)(a1 + 16) = v30;
      *(_QWORD*)(a1 + 32) = v29;
      if (v21 > v20) {
        v31 = *(_QWORD*)a1;
        *(_QWORD*)a1 = v30;
        *(_DWORD*)(a1 + 8) = v21;
        *(_DWORD*)(a1 + 24) = v20;
        *(_QWORD*)(a1 + 16) = v31;
      }
    }
  }
  else {
    v22 = *(_QWORD*)a1;
    if (v21 <= v19) {
      v34 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 16) = v22;
      *(_DWORD*)(a1 + 8) = v19;
      *(_DWORD*)(a1 + 24) = v20;
      *(_QWORD*)a1 = v34;
      if (v21 <= v20) {
        goto LABEL_32;
      }
      v35 = *(_QWORD*)(a1 + 32);
      *(_QWORD*)(a1 + 32) = v22;
      *(_DWORD*)(a1 + 24) = v21;
      *(_QWORD*)(a1 + 16) = v35;
    }
    else {
      v23 = *(_QWORD*)(a1 + 32);
      *(_QWORD*)(a1 + 32) = v22;
      *(_DWORD*)(a1 + 8) = v21;
      *(_QWORD*)a1 = v23;
    }
    *(_DWORD*)(a1 + 40) = v20;
  }
LABEL_32:
  v36 = (__int64*)(a1 + 48);
  if ((__int64*)(a1 + 48) == a2) {
    return true;
  }
  v37 = (__int64*)(a1 + 32);
  v38 = 0;
  v39 = 0;
  while (1) {
    v41 = *((_DWORD*)v36 + 2);
    if (v41 > (signed __int32)*((_DWORD*)v37 + 2)) {
      v42 = *v36;
      v43 = v38;
      do {
        v44 = a1 + v43;
        *(_QWORD*)(v44 + 48) = *(_QWORD*)(a1 + v43 + 32);
        *(_DWORD*)(v44 + 56) = *(_DWORD*)(a1 + v43 + 40);
        if (v43 == -32) {
          v40 = a1;
          goto LABEL_35;
        }
        v43 -= 16;
      } while (v41 > (signed __int32)*(_DWORD*)(v44 + 24));
      v40 = a1 + v43 + 48;
    LABEL_35:
      ++v39;
      *(_QWORD*)v40 = v42;
      *(_DWORD*)(v40 + 8) = v41;
      if (v39 == 8) {
        return v36 + 2 == a2;
      }
    }
    v37 = v36;
    v36 += 2;
    v38 += 16;
    if (v36 == a2) {
      return true;
    }
  }
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
