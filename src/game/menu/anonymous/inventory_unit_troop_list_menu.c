#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_178cae0(_QWORD);
__int64 GameRoutine_17aad00(_QWORD);
__int64 GameRoutine_17b1f70(__int64, __int64);
__int64 GameRoutine_17b6720(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_menu_BasicMenu_SavedCursor_GetItem(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 (*GameData_20d74b0[])();
extern __int64 (*GameData_20d7740[])();
extern __int64 (*GameData_20d77c0[])();
extern __int64 (*GameData_20d7840[])();
extern __int64 (*GameData_20d78c0[])();
extern __int64 (*game_menu_anonymous_InventoryUnitTroopMenuItem_vtable[])();
extern __int64 GameData_20d7488;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131d58[15];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131a10[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 InventoryUnitTroopListMenu_17b5ac0(_QWORD* a1);
__int64 InventoryUnitTroopListMenu_17b5cb0(_QWORD* a1);
__int64 InventoryUnitTroopListMenu_17b5f20(__int64 a1);
__int64 InventoryUnitTroopListMenu_17b6290(__int64 a1);
__int64 InventoryUnitTroopListMenu_17b6320(_QWORD* a1);
__int64 InventoryUnitTroopListMenu_Unknown128(__int64 a1);
__int64 InventoryUnitTroopListMenu_Unknown167(__int64 a1);
__int64 GameRoutine_178cf10(_QWORD, _QWORD);
bool game_menu_anonymous_InventoryUnitTroopListMenu_BCall_closure_Invoke(
    __int64 a1, __int64 a2);
__int64 game_menu_anonymous_InventoryUnitTroopListMenu_BCall_closure0_Invoke(
    __int64 a1, __int64* a2);
bool game_menu_anonymous_InventoryUnitTroopListMenu_Create_closure_Invoke(
    __int64 a1, __int64 a2);
__int64 _ZN4game4menu9BasicMenu13Unknown16e2860Eb(_QWORD, _QWORD);
extern __int64 (*GameData_20d7630[])();
__int64
game_menu_anonymous_InventoryUnitTroopListMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64* a2);
__int64
game_menu_anonymous_InventoryUnitTroopListMenu_CreateSubMenu_closure_Invoke_17b69f0(
    __int64 a1, _QWORD* a2);
__int64
game_menu_anonymous_InventoryUnitTroopListMenu_CreateSubMenu_closure_Invoke_17b6b40(
    __int64 a1, _QWORD* a2);
__int64
game_menu_anonymous_InventoryUnitTroopListMenu_CreateSubMenu_closure_Invoke_17b6da0(
    __int64 a1, __int64* a2);
__int64
game_menu_anonymous_InventoryUnitTroopListMenu_CreateSubMenu_closure_Invoke_17b6f10(
    __int64 result, __int64 a2, _BYTE* a3);

__int64 InventoryUnitTroopListMenu_17b5ac0(_QWORD* a1)
{
  int v2;
  int v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  v3 = *(_DWORD*)(a1[132] + 356LL);
  if (v2 != 9) {
    if ((v3 & 1) != 0) {
      return game_menu_BasicMenu_Unknown16dd9a0(a1);
    }
    a1[148] = 0;
    game_menu_BasicMenu_Unknown96(a1);
    return GameRoutine_178cae0(a1);
  }
  if ((v3 & 1) == 0) {
    a1[148] = 0;
    goto LABEL_29;
  }
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1) != 10) {
    game_menu_BasicMenu_Unknown16dd9a0(a1);
  }
  v7 = a1[148];
  if (v7 != 0) {
    v7 = *(_WORD*)(v7 + 828) == 0 && *(_WORD*)(v7 + 836) == 0 &&
         *(_WORD*)(v7 + 844) == 0 && *(_WORD*)(v7 + 852) == 0 &&
         *(_WORD*)(v7 + 860) == 0 && *(unsigned __int16*)(v7 + 868) == 0;
  }
  v9 = a1[29];
  v8 = a1[30];
  v10 = v16;
  v16[2] = v7;
  v16[0] = GameData_20d74b0;
  v16[1] = a1;
  v17 = v16;
  if (v8 == v9) {
    goto LABEL_27;
  }
  v11 = 0;
  v12 = GameData_212e008[0];
  do {
    v13 = *(_QWORD*)(v9 + 8 * v11);
    if (v13 != 0) {
      v14 = __dynamic_cast(v13, v12, &GameData_20d7488, 0);
      if (v14 == 0) {
        goto LABEL_17;
      }
      v18 = v14;
      if (v17 == nullptr) {
        GameRoutine_60a310(0, v5);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v17 + 48LL))(v17, &v18) & 1) !=
          0) {
        break;
      }
      v9 = a1[29];
      v8 = a1[30];
    }
  LABEL_17:
    ++v11;
  } while (v11 < (v8 - v9) >> 3);
  v10 = v17;
  if (v17 != v16) {
    if (v17 != nullptr) {
      v15 = 40;
      goto LABEL_28;
    }
    goto LABEL_29;
  }

LABEL_27:
  v15 = 32;

LABEL_28:
  (*(void (**)(_QWORD*, __int64, __int64))(*v10 + v15))(v10, v5, v6);

LABEL_29:
  game_menu_BasicMenu_Unknown96(a1);
  return GameRoutine_178cae0(a1);
}

__int64 InventoryUnitTroopListMenu_17b5cb0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  void* v13;
  _BYTE* v14;
  char v15;

  v2 = a1[42];
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_20d7488, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) == 0) {
    return 1;
  }
  v5 = a1[148];
  if (v5 != 0) {
    v6 = *(_QWORD*)(v4 + 88);
    if (v5 == v6) {
      return 0;
    }
    else {
      if (a1[19] != 0) {
        v7 = (_QWORD*)a1[19];
      }
      else {
        v7 = a1;
      }
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 392, 16, 0);
      v9 = GameData_212c608[0];
      *(_QWORD*)(v8 + 88) = 0;
      *(_QWORD*)(v8 + 96) = 0;
      *(_QWORD*)(v8 + 104) = 0;
      *(_QWORD*)(v8 + 112) = 0;
      *(_QWORD*)(v8 + 120) = 0;
      *(_QWORD*)(v8 + 128) = 0;
      *(_WORD*)(v8 + 136) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      *(_QWORD*)(v8 + 24) = "NULL";
      *(_QWORD*)(v8 + 32) = 0;
      *(_QWORD*)(v8 + 138) = 0;
      *(_QWORD*)(v8 + 144) = 0;
      *(_QWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 56) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_QWORD*)(v8 + 80) = 0;
      *(_QWORD*)v8 = v9 + 16;
      *(_QWORD*)(v8 + 8) = 0;
      game_ProcInst_Register();
      v10 = GameData_2130240[0];
      *(_BYTE*)(v8 + 168) = 0;
      *(_BYTE*)(v8 + 172) = 0;
      *(_QWORD*)(v8 + 192) = 0;
      *(_QWORD*)(v8 + 200) = 0;
      *(_QWORD*)(v8 + 208) = 0;
      *(_QWORD*)(v8 + 216) = 0;
      *(_QWORD*)(v8 + 240) = 0;
      *(_QWORD*)(v8 + 248) = 0;
      *(_QWORD*)(v8 + 256) = 0;
      *(_QWORD*)(v8 + 264) = 0;
      *(_QWORD*)(v8 + 272) = 0;
      *(_QWORD*)(v8 + 336) = 0;
      *(_QWORD*)(v8 + 344) = 0;
      *(_QWORD*)(v8 + 320) = 0;
      *(_QWORD*)(v8 + 328) = 0;
      *(_QWORD*)(v8 + 304) = 0;
      *(_QWORD*)(v8 + 312) = 0;
      *(_QWORD*)(v8 + 288) = 0;
      *(_QWORD*)(v8 + 296) = 0;
      *(_QWORD*)(v8 + 152) = 0;
      *(_QWORD*)(v8 + 160) = v10 + 2;
      *(_QWORD*)(v8 + 232) = 0;
      *(_QWORD*)(v8 + 224) = v8 + 232;
      *(_DWORD*)(v8 + 280) = 1065353216;
      v11 = GameData_2131a10[0];
      *(_QWORD*)(v8 + 352) = 0;
      *(_QWORD*)(v8 + 360) = v5;
      *(_QWORD*)v8 = v11 + 2;
      *(_QWORD*)(v8 + 176) = v11 + 55;
      *(_QWORD*)(v8 + 184) = 0;
      *(_QWORD*)(v8 + 368) = v6;
      *(_QWORD*)(v8 + 376) = 0xFFFFFFFF00000000LL;
      *(_DWORD*)(v8 + 384) = -1;
      v12 = v7[5];
      if (v12 != 0) {
        *(_QWORD*)(v12 + 48) = v8;
        *(_QWORD*)(v8 + 56) = v7[5];
      }
      v7[5] = v8;
      *(_QWORD*)(v8 + 24) = "ExchangeMenu";
      *(_QWORD*)(v8 + 32) = v7;
      *(_DWORD*)(v8 + 140) = game_HashString32();
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 24;
      *(_QWORD*)(v8 + 80) = 1;
      v13 = GameData_21319e0;
      *(_QWORD*)(v8 + 8) = GameData_21319e0;
      *(_QWORD*)(v8 + 16) = v13;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8) & 1) != 0 &&
          (*(_WORD*)(v8 + 136) & 0x100) == 0) {
        *(_WORD*)(v8 + 136) |= 0x100u;
      }
      v14 = *(_BYTE**)(v8 + 32);
      v15 = v14[138];
      if (v15 == 0) {
        (*(void (**)(_BYTE*))(*(_QWORD*)v14 + 64LL))(v14);
        v15 = v14[138];
      }
      v14[138] = v15 + 1;
      *(_WORD*)(v8 + 136) |= 2u;
      return 9;
    }
  }
  else if ((GameRoutine_17b6720(a1, v4, 0) & 1) != 0) {
    return 10;
  }
  else {
    return 1;
  }
}

__int64 InventoryUnitTroopListMenu_17b5f20(__int64 a1)
{
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[4];
  _QWORD* v27;
  _QWORD v28[4];
  _QWORD* v29;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) == 0) {
    return 3;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1);
  if (*(_QWORD*)(a1 + 1184) == 0) {
    v9 = 0;
    goto LABEL_32;
  }
  v3 = *(_QWORD**)(a1 + 232);
  v4 = *(_QWORD**)(a1 + 240);
  v5 = v28;
  v28[0] = GameData_20d7740;
  v28[1] = a1;
  v29 = v28;
  if (v3 == v4) {
    v9 = 0;
  LABEL_18:
    v11 = 32;
    goto LABEL_19;
  }
  v6 = GameData_212e008[0];
  while (1) {
    if (*v3 != 0) {
      v7 = __dynamic_cast(*v3, v6, &GameData_20d7488, 0);
      if (v7 != 0) {
        v9 = v7;
        v10 = v29;
        v26[0] = v9;
        if (v29 == nullptr) {
        LABEL_59:
          GameRoutine_60a310(v10, v8);
        }
        if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v29 + 48LL))(v29, v26) & 1) !=
            0) {
          break;
        }
      }
    }
    if (++v3 == v4) {
      v9 = 0;
      break;
    }
  }
  v5 = v29;
  if (v29 == v28) {
    goto LABEL_18;
  }
  if (v29 != nullptr) {
    v11 = 40;
  LABEL_19:
    (*(void (**)(_QWORD*))(*v5 + v11))(v5);
  }
  if (v9 != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v9 + 56LL))(v9, 0);
    v12 = *(_QWORD*)(a1 + 336);
    if (v12 != v9) {
      if (v12 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 168LL))(v12);
      }
      *(_QWORD*)(a1 + 336) = v9;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, 0);
      v13 = *(_QWORD*)(a1 + 336);
      if (v13 == 0) {
        v14 = 4;
      LABEL_31:
        *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v14;
        goto LABEL_32;
      }
      (*(void (**)(__int64))(*(_QWORD*)v13 + 160LL))(v13);
      game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
      v12 = *(_QWORD*)(a1 + 336);
    }
    v14 = 4;
    if (v12 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 120LL))(v12) & 1) != 0) {
        v14 = 4;
      }
      else {
        v14 = 0;
      }
    }
    goto LABEL_31;
  }

LABEL_32:
  v16 = *(_QWORD*)(a1 + 232);
  v15 = *(_QWORD*)(a1 + 240);
  v17 = v28;
  v28[0] = GameData_20d77c0;
  v29 = v28;
  if (v15 == v16) {
    goto LABEL_43;
  }
  v18 = 0;
  v19 = GameData_212e008[0];
  do {
    v20 = *(_QWORD*)(v16 + 8 * v18);
    if (v20 != 0) {
      v21 = __dynamic_cast(v20, v19, &GameData_20d7488, 0);
      if (v21 == 0) {
        goto LABEL_34;
      }
      v22 = v21;
      v10 = v29;
      v26[0] = v22;
      if (v29 == nullptr) {
        goto LABEL_59;
      }
      if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v29 + 48LL))(v29, v26) & 1) !=
          0) {
        break;
      }
      v16 = *(_QWORD*)(a1 + 232);
      v15 = *(_QWORD*)(a1 + 240);
    }
  LABEL_34:
    ++v18;
  } while (v18 < (v15 - v16) >> 3);
  v17 = v29;
  if (v29 != v28) {
    if (v29 != nullptr) {
      v23 = 40;
      goto LABEL_44;
    }
    goto LABEL_45;
  }

LABEL_43:
  v23 = 32;

LABEL_44:
  (*(void (**)(_QWORD*))(*v17 + v23))(v17);

LABEL_45:
  *(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) &= ~1u;
  *(_QWORD*)(a1 + 1184) = 0;
  if ((GameRoutine_17b6720(a1, v9, 1) & 1) != 0) {
    v26[0] = GameData_20d7840;
    v27 = v26;
    v29 = v28;
    v28[0] = GameData_20d7840;
    GameRoutine_654050(v28, a1 + 288);
    if (v29 == v28) {
      v24 = 32;
    LABEL_51:
      (*(void (**)(void*))(*v29 + v24))(v29);
    }
    else if (v29 != nullptr) {
      v24 = 40;
      goto LABEL_51;
    }
    if (v27 == v26) {
      v25 = 32;
    LABEL_56:
      (*(void (**)(void*))(*v27 + v25))(v27);
    }
    else if (v27 != nullptr) {
      v25 = 40;
      goto LABEL_56;
    }
    return 10;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 1056) + 176LL) + 96LL))(
        *(_QWORD*)(a1 + 1056) + 176LL);
    return 0;
  }
}

__int64 InventoryUnitTroopListMenu_17b6290(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1) != 0) {
    return 0;
  }
  v1 = *(_QWORD*)(a1 + 152);
  v5[0] = GameData_20d78c0;
  v5[1] = a1;
  v6 = v5;
  if (v1 == 0) {
    v1 = a1;
  }
  GameRoutine_17b1f70(v1, (__int64)v5);
  if (v6 == v5) {
    v3 = 32;
    goto LABEL_9;
  }
  if (v6 != nullptr) {
    v3 = 40;
  LABEL_9:
    (*(void (**)(_QWORD*, __int64))(*v6 + v3))(v6, v2);
  }
  return 11;
}

__int64 InventoryUnitTroopListMenu_17b6320(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[132];
  if ((*(_BYTE*)(v1 + 356) & 1) != 0) {
    return 0;
  }
  v3 = a1[42];
  if (v3 != 0 && (v4 = __dynamic_cast(v3, GameData_212e008[0],
                                      GameData_2131d58[0], 0)) != 0 ||
      (v5 = game_menu_BasicMenu_SavedCursor_GetItem(*(_QWORD*)(v1 + 336))) !=
              0 &&
          (v4 = __dynamic_cast(v5, GameData_212e008[0], GameData_2131d58[0],
                               0)) != 0) {
    v6 = *(_QWORD*)(v4 + 88);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD*, __int64))(*a1 + 1336LL))(a1, v6);
  return 8;
}

__int64 InventoryUnitTroopListMenu_Unknown128(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;

  v13 = 17;
  result = game_UnitPool_GetFirst(&v13);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    v4 = result;
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 < 9) {
          v12 = v5 - 3;
          while (1) {
            if (v12 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v12 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  LABEL_8:
    while (1) {
      v7 = v4;
      v4 = v3;
      v8 = fw_memory_HeapManager_Allocate(*v6, 104, 16, 0);
      *(_WORD*)(v8 + 16) = 0;
      *(_DWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 48) = 0;
      *(_QWORD*)(v8 + 56) = 0;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 0;
      *(_WORD*)(v8 + 80) = 257;
      *(_BYTE*)(v8 + 82) = 1;
      *(_QWORD*)(v8 + 88) = v7;
      *(_DWORD*)(v8 + 96) = 0;
      *(_QWORD*)v8 = game_menu_anonymous_InventoryUnitTroopMenuItem_vtable;
      *(_QWORD*)(v8 + 8) = 0;
      *(_BYTE*)(v8 + 100) = 0;
      result = GameRoutine_16e0c00(a1, v8);
      if (v4 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v4 + 432);
      if (v3 == 0) {
        v9 = *(_QWORD*)(v4 + 440);
        if (v9 != 0) {
          v10 = *(unsigned __int8*)(v9 + 16);
          v3 = 0;
          if (v10 <= 8) {
            v11 = v10 - 3;
            while (1) {
              if (v11 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v11 == 6) {
                v3 = 0;
                goto LABEL_8;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 InventoryUnitTroopListMenu_Unknown167(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 152);
  if (v1 == 0) {
    v1 = a1;
  }
  return GameRoutine_17aad00(*(_QWORD*)(v1 + 32));
}

__int64

game_menu_anonymous_InventoryUnitTroopListMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  _WORD* v5;
  _WORD* v6;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *(_WORD**)(v3 + 1184);
  v6 = *(_WORD**)(*a2 + 88);
  if (v6 == v5) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    if (v6 != nullptr && v6[414] == 0 && v6[418] == 0 && v6[422] == 0 &&
        v6[426] == 0 && v6[430] == 0 && v6[434] == 0) {
      *(_BYTE*)(v4 + 100) = 1;
      goto LABEL_8;
    }
    return 0;
  }
  if (*(_BYTE*)(v4 + 100) != 1) {
    return 0;
  }
  *(_BYTE*)(v4 + 100) = 0;
LABEL_8:
  GameRoutine_178cf10(v4, a2);
  return 0;
}

__int64

game_menu_anonymous_InventoryUnitTroopListMenu_CreateSubMenu_closure_Invoke_17b69f0(
    __int64 a1, _QWORD* a2)
{
  if (*(_QWORD*)(*a2 + 88LL) == **(_QWORD**)(a1 + 8) ||
      ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2) & 1) == 0) {
    return 0;
  }
  **(_BYTE**)(a1 + 16) = 1;
  return 1;
}

__int64

game_menu_anonymous_InventoryUnitTroopListMenu_CreateSubMenu_closure_Invoke_17b6b40(
    __int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  _WORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = (_WORD*)*a2;
  v4 = v2[132];
  v2[148] = *a2;
  *(_DWORD*)(v4 + 356) |= 1u;
  if (v3 == nullptr || v3[414] != 0 || v3[418] != 0 || v3[422] != 0 ||
      v3[426] != 0 || v3[430] != 0 || v3[434] != 0) {
    return _ZN4game4menu9BasicMenu13Unknown16e2860Eb(v2, 0);
  }
  v6 = v2[29];
  v5 = v2[30];
  v7 = v2;
  v16[0] = GameData_20d7630;
  v16[1] = v3;
  v8 = v16;
  v17 = v16;
  if (v5 == v6) {
    goto LABEL_19;
  }
  v9 = 0;
  v10 = GameData_212e008[0];
  do {
    if (*(_QWORD*)(v6 + 8 * v9) != 0) {
      v12 = __dynamic_cast(*(_QWORD*)(v6 + 8 * v9), v10, &GameData_20d7488, 0);
      v2 = v7;
      if (v12 == 0) {
        goto LABEL_10;
      }
      v18 = v12;
      if (v17 == nullptr) {
        GameRoutine_60a310(0, v11);
      }
      v13 = (*(__int64 (**)(_QWORD*, __int64*))(*v17 + 48LL))(v17, &v18);
      v2 = v7;
      if ((v13 & 1) != 0) {
        break;
      }
      v6 = v7[29];
      v5 = v7[30];
    }
  LABEL_10:
    ++v9;
  } while (v9 < (v5 - v6) >> 3);
  v8 = v17;
  if (v17 != v16) {
    if (v17 != nullptr) {
      v14 = 40;
      goto LABEL_20;
    }
    return _ZN4game4menu9BasicMenu13Unknown16e2860Eb(v2, 0);
  }
LABEL_19:
  v14 = 32;
LABEL_20:
  (*(void (**)(_QWORD*))(*v8 + v14))(v8);
  v2 = v7;
  return _ZN4game4menu9BasicMenu13Unknown16e2860Eb(v2, 0);
}

__int64

game_menu_anonymous_InventoryUnitTroopListMenu_CreateSubMenu_closure_Invoke_17b6da0(
    __int64 a1, __int64* a2)
{
  _WORD* v2;
  __int64 v3;
  _WORD* v4;
  bool v5;

  v2 = *(_WORD**)(a1 + 8);
  v3 = *a2;
  v4 = *(_WORD**)(*a2 + 88);
  v5 = v4 == v2 || v4 == nullptr;
  if (v5 || v4[414] != 0 || v4[418] != 0 || v4[422] != 0 || v4[426] != 0 ||
      v4[430] != 0 || v4[434] != 0) {
    return 0;
  }
  *(_BYTE*)(v3 + 100) = 1;
  GameRoutine_178cf10(v3, a2);
  return 0;
}

__int64

game_menu_anonymous_InventoryUnitTroopListMenu_CreateSubMenu_closure_Invoke_17b6f10(
    __int64 result, __int64 a2, _BYTE* a3)
{
  if (*a3 == 1) {
    return game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(result + 8));
  }
  return result;
}

bool game_menu_anonymous_InventoryUnitTroopListMenu_BCall_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) ==
         *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1184LL);
}

__int64 game_menu_anonymous_InventoryUnitTroopListMenu_BCall_closure0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  if (*(_BYTE*)(*a2 + 100) == 1) {
    *(_BYTE*)(v2 + 100) = 0;
    GameRoutine_178cf10(v2, a2);
  }
  return 0;
}

bool game_menu_anonymous_InventoryUnitTroopListMenu_Create_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
