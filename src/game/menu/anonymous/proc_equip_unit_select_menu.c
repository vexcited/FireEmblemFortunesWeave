#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12f1a00(void);
__int64 GameRoutine_12f2150(void);
__int64 GameRoutine_12f21e0(void);
__int64 GameRoutine_12f2270(void);
__int64 GameRoutine_16cd2a0(_QWORD, _QWORD);
__int64 GameRoutine_16cdaa0(_QWORD, _QWORD);
__int64 GameRoutine_17ae020(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(void);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 game_menu_UnitGridSelectMenu_ApplyChangeUnit(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 (*GameData_20d2198[])();
extern __int64 GameData_20d2170;
extern __int64 GameData_212c608[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2130240[8];
extern __int64* GameData_2131a10[5];
void __attribute__((noreturn)) GameRoutine_16d0d20(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcEquipUnitSelectMenu_17ab3e0(__int64 a1);
__int64 ProcEquipUnitSelectMenu_17ab620(__int64 a1);
__int64 ProcEquipUnitSelectMenu_Unknown112(__int64* a1);
__int64 EquipUnitSelectMenu_16cd2a0(_QWORD, _QWORD);
__int64 GameRoutine_12f2090(void);
__int64 GameRoutine_178a2c0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16e2860Eb(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a96902;
extern __int64 (*GameData_20d2318[])();
extern __int64 GameData_2131d98[7];
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212c878[6];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcEquipUnitSelectMenu_17ac080(__int64* a1);
__int64 ProcEquipUnitSelectMenu_17acfe0(_DWORD* a1, __int64* a2);
__int64 ProcEquipUnitSelectMenu_17adcc0(__int64 a1);
__int64 game_menu_anonymous_ProcEquipUnitSelectMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_menu_anonymous_ProcEquipUnitSelectMenu_CreateSubMenu_closure_Invoke_17ae2f0(
    __int64 a1, _QWORD* a2);
__int64
game_menu_anonymous_ProcEquipUnitSelectMenu_CreateSubMenu_closure_Invoke_17ae440(
    __int64 a1, _QWORD* a2);
__int64
game_menu_anonymous_ProcEquipUnitSelectMenu_CreateSubMenu_closure_Invoke_17ae690(
    __int64 a1, __int64 a2);
__int64
game_menu_anonymous_ProcEquipUnitSelectMenu_CreateSubMenu_closure_Invoke_17ae810(
    __int64 a1, unsigned int* a2, unsigned __int8* a3);
bool game_menu_anonymous_ProcEquipUnitSelectMenu_BCall_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_menu_anonymous_ProcEquipUnitSelectMenu_BCall_closure0_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 CorpsManager_9726e0(_QWORD);
__int64 GameRoutine_15b7370(void);
__int64 GameRoutine_17aed00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_IsUnlocked(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_1fb0cb0[])();
extern __int64 (*GameData_2131528)();
extern __int64 (*game_menu_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_InventoryUnitMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_MarginMenuItem_vtable[])();
extern __int64 GameData_2131bb8[5];
extern __int64 GameData_21ca310;
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD, _QWORD);
__int64 ProcEquipUnitSelectMenu_17ac480(__int64 a1);

__int64 ProcEquipUnitSelectMenu_17ab3e0(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 (***v9)();
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (*v15)();
  __int64 v16;
  __int64 result;
  __int64 v18;
  __int64 (**v19)();
  __int64 (**v20)();
  _WORD* v21;
  __int64 (***v22)();
  __int64 v23;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  v5 = *(_DWORD*)(a1 + 1184);
  if (v2 != 9) {
    if (v5 == 1) {
      goto LABEL_30;
    }
  LABEL_21:
    *(_QWORD*)(a1 + 1384) = 0;
    goto LABEL_27;
  }
  if (v5 != 1) {
    *(_DWORD*)(a1 + 1184) = 0;
    goto LABEL_21;
  }
  v6 = *(_QWORD*)(a1 + 1384);
  if (v6 != 0) {
    v6 = *(_WORD*)(v6 + 828) == 0 && *(_WORD*)(v6 + 836) == 0 &&
         *(_WORD*)(v6 + 844) == 0 && *(_WORD*)(v6 + 852) == 0 &&
         *(_WORD*)(v6 + 860) == 0 && *(unsigned __int16*)(v6 + 868) == 0;
  }
  v8 = *(_QWORD*)(a1 + 232);
  v7 = *(_QWORD*)(a1 + 240);
  v9 = &v19;
  v21 = (_WORD*)v6;
  v19 = GameData_20d2198;
  v20 = (__int64 (**)())a1;
  v22 = &v19;
  if (v7 == v8) {
    goto LABEL_25;
  }
  v10 = 0;
  v11 = GameData_212e008[0];
  do {
    v12 = *(_QWORD*)(v8 + 8 * v10);
    if (v12 != 0) {
      v13 = __dynamic_cast(v12, v11, &GameData_20d2170, 0);
      if (v13 == 0) {
        goto LABEL_12;
      }
      v23 = v13;
      if (v22 == nullptr) {
        GameRoutine_60a310(0, v3);
      }
      if ((((__int64 (*)(__int64 (***)(), __int64*))(*v22)[6])(v22, &v23) &
           1) != 0) {
        break;
      }
      v8 = *(_QWORD*)(a1 + 232);
      v7 = *(_QWORD*)(a1 + 240);
    }
  LABEL_12:
    ++v10;
  } while (v10 < (v7 - v8) >> 3);
  v9 = v22;
  if (v22 != &v19) {
    if (v22 != nullptr) {
      v14 = 5;
      goto LABEL_26;
    }
    goto LABEL_27;
  }

LABEL_25:
  v14 = 4;

LABEL_26:
  ((void (*)(__int64 (***)(), __int64, __int64))(*v9)[v14])(v9, v3, v4);

LABEL_27:
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  game_menu_UnitGridSelectMenu_ApplyChangeUnit(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 704LL))(a1);
  *(_BYTE*)(a1 + 1168) = 0;
  game_menu_BasicMenu_Unknown16dd9a0(a1);

LABEL_30:
  v15 = *(__int64 (**)())a1;
  v16 = *(unsigned int*)(a1 + 1352);
  v20 = nullptr;
  v21 = nullptr;
  v19 = nullptr;
  (*((void (**)(__int64, __int64 (***)(), __int64))v15 + 152))(a1, &v19, v16);
  result = GameRoutine_16cdaa0(a1, &v19);
  if (v19 != nullptr) {
    v20 = v19;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v19);
  }
  return result;
}

__int64 ProcEquipUnitSelectMenu_17ab620(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  void* v13;
  _BYTE* v14;
  char v15;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_20d2170, 0);
  if (v3 == 0) {
    return 1;
  }
  v4 = v3;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) == 0) {
    return 1;
  }
  v5 = *(_QWORD*)(a1 + 1384);
  if (v5 == 0) {
    if ((GameRoutine_17ae020(a1, v4, 0) & 1) != 0) {
      *(_DWORD*)(a1 + 1184) = 0;
      return 10;
    }
    return 1;
  }
  v6 = *(_QWORD*)(v4 + 88);
  if (v6 == 0) {
    return 1;
  }
  if (v5 == v6) {
    return 0;
  }
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      392, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 32) = 0;
  v9 = (_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 224) = v7 + 232;
  v10 = GameData_2130240[0];
  *(_BYTE*)(v7 + 168) = 0;
  *(_BYTE*)(v7 + 172) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 248) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 336) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 320) = 0;
  *(_QWORD*)(v7 + 328) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = v10 + 2;
  *(_DWORD*)(v7 + 280) = 1065353216;
  v11 = GameData_2131a10[0];
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = v5;
  *(_QWORD*)(v7 + 176) = v11 + 55;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)v7 = v11 + 2;
  *(_QWORD*)(v7 + 368) = v6;
  *(_QWORD*)(v7 + 376) = 0xFFFFFFFF00000000LL;
  v12 = *(_QWORD*)(a1 + 40);
  *(_DWORD*)(v7 + 384) = -1;
  if (v12 != 0) {
    *(_QWORD*)(v12 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "ExchangeMenu";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = game_HashString32();
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  v13 = GameData_21319e0;
  *(_QWORD*)(v7 + 8) = GameData_21319e0;
  *(_QWORD*)(v7 + 16) = v13;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  v14 = (_BYTE*)*v9;
  v15 = *(_BYTE*)(*v9 + 138LL);
  if (v15 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*v9);
    v15 = v14[138];
  }
  v14[138] = v15 + 1;
  *(_WORD*)(v7 + 136) |= 2u;
  return 9;
}

__int64 ProcEquipUnitSelectMenu_Unknown112(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  bool v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  int v18;
  __int64 v19;

  v1 = a1[170];
  v2 = a1[171];
  v3 = v2 - v1;
  if (v2 == v1) {
    return 0;
  }
  if (v3 < 0) {
    GameRoutine_16d0d20();
  }
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      v2 - v1, 16, 0);
  memcpy(v6, v1, v3);
  v7 = v3 - 4;
  v8 = 0;
  do {
    v9 = *(_DWORD*)(v6 + v8);
    v10 = v9 == 11 || v7 == v8;
    v8 += 4;
  } while (!v10);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v11, v6);
  v12 = v9 != 11 || *((_DWORD*)a1 + 296) == 1;
  if (!v12 && (v13 = a1[42]) != 0 &&
      (v14 = __dynamic_cast(v13, GameData_212e008[0], &GameData_20d2170, 0)) !=
          0 &&
      *(_QWORD*)(v14 + 88) != 0) {
    v15 = *((_DWORD*)a1 + 338);
    v16 = 0;
    if (v15 <= 5) {
      if (v15 == 0) {
        GameRoutine_12f1a00();
        goto LABEL_32;
      }
      if (v15 == 4) {
        GameRoutine_12f2150();
        goto LABEL_32;
      }
      if (v15 != 5) {
        return v16;
      }
      goto LABEL_29;
    }
    if (v15 == 6) {
    LABEL_29:
      GameRoutine_12f21e0();
      goto LABEL_32;
    }
    if (v15 == 7 || v15 == 8) {
      GameRoutine_12f2270();
    LABEL_32:
      v18 = GameRoutine_16cd2a0(a1, *((unsigned int*)a1 + 338));
      v19 = *a1;
      *((_DWORD*)a1 + 338) = v18;
      (*(void (**)(__int64*))(v19 + 704))(a1);
      game_menu_BasicMenu_Unknown16dd9a0(a1);
      (*(void (**)(__int64*, _QWORD))(*a1 + 552))(a1, 0);
      return 13;
    }
  }
  else {
    return 0;
  }
  return v16;
}

__int64 ProcEquipUnitSelectMenu_17ac080(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  bool v10;
  __int64 v11;
  bool v12;
  __int64 result;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  _BYTE v31[32];
  _BYTE* v32;
  const char* v33;

  v1 = a1[170];
  v2 = a1[171];
  v3 = v2 - v1;
  if (v2 != v1) {
    if (v3 < 0) {
      GameRoutine_16d0d20();
    }
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v2 - v1, 16, 0);
    memcpy(v6, v1, v3);
    v7 = v3 - 4;
    v8 = 0;
    do {
      v9 = *(_DWORD*)(v6 + v8);
      v10 = v9 == 10 || v7 == v8;
      v8 += 4;
    } while (!v10);
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v11, v6);
    v12 = v9 != 10 || *((_DWORD*)a1 + 296) == 1;
    if (!v12 && *((_DWORD*)a1 + 338) == 0) {
      result = a1[42];
      if (result != 0) {
        result =
            __dynamic_cast(result, GameData_212e008[0], &GameData_20d2170, 0);
        if (result != 0) {
          result = *(_QWORD*)(result + 88);
          if (result != 0) {
            if (*(_WORD*)(result + 828) == 0 ||
                (*(_BYTE*)(result + 831) & 0x10) != 0) {
              v15 = 0;
            }
            else {
              v15 = 0;
              v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8LL * *(unsigned __int16*)(result + 828));
              if ((*(_DWORD*)(v16 + 336) & 4) == 0 &&
                  ((1LL << *(_BYTE*)(v16 + 72)) & 0xE01F) != 0) {
                v15 = (*(_DWORD*)(v16 + 336) & 0x300) == 0;
              }
            }
            if (*(_WORD*)(result + 836) != 0) {
              if ((*(_BYTE*)(result + 839) & 0x10) != 0) {
                v17 = 0;
              }
              else {
                v17 = 0;
                v18 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(result + 836));
                if ((*(_DWORD*)(v18 + 336) & 4) == 0 &&
                    ((1LL << *(_BYTE*)(v18 + 72)) & 0xE01F) != 0) {
                  v17 = (*(_DWORD*)(v18 + 336) & 0x300) == 0;
                }
              }
              v15 += v17;
            }
            if (*(_WORD*)(result + 844) != 0) {
              if ((*(_BYTE*)(result + 847) & 0x10) != 0) {
                v19 = 0;
              }
              else {
                v19 = 0;
                v20 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(result + 844));
                if ((*(_DWORD*)(v20 + 336) & 4) == 0 &&
                    ((1LL << *(_BYTE*)(v20 + 72)) & 0xE01F) != 0) {
                  v19 = (*(_DWORD*)(v20 + 336) & 0x300) == 0;
                }
              }
              v15 += v19;
            }
            if (*(_WORD*)(result + 852) != 0) {
              if ((*(_BYTE*)(result + 855) & 0x10) != 0) {
                v21 = 0;
              }
              else {
                v21 = 0;
                v22 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(result + 852));
                if ((*(_DWORD*)(v22 + 336) & 4) == 0 &&
                    ((1LL << *(_BYTE*)(v22 + 72)) & 0xE01F) != 0) {
                  v21 = (*(_DWORD*)(v22 + 336) & 0x300) == 0;
                }
              }
              v15 += v21;
            }
            if (*(_WORD*)(result + 860) != 0) {
              if ((*(_BYTE*)(result + 863) & 0x10) != 0) {
                v23 = 0;
              }
              else {
                v23 = 0;
                v24 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(result + 860));
                if ((*(_DWORD*)(v24 + 336) & 4) == 0 &&
                    ((1LL << *(_BYTE*)(v24 + 72)) & 0xE01F) != 0) {
                  v23 = (*(_DWORD*)(v24 + 336) & 0x300) == 0;
                }
              }
              v15 += v23;
            }
            if (*(_WORD*)(result + 868) != 0) {
              if ((*(_BYTE*)(result + 871) & 0x10) != 0) {
                v25 = 0;
              }
              else {
                v25 = 0;
                v26 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(result + 868));
                if ((*(_DWORD*)(v26 + 336) & 4) == 0 &&
                    ((1LL << *(_BYTE*)(v26 + 72)) & 0xE01F) != 0) {
                  v25 = (*(_DWORD*)(v26 + 336) & 0x300) == 0;
                }
              }
              v15 += v25;
            }
            if (v15 == 0 ||
                *(_DWORD*)(*(_QWORD*)(*(_QWORD*)
                                          game_TransporterConst_List_instance__ptr
                                              [0] +
                                      8LL) +
                           72LL) >=
                    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)
                                              game_TransporterConst_List_instance__ptr
                                                  [0] +
                                          8LL) +
                               84LL) +
                        v15) {
              GameRoutine_12f2090();
              v29 = EquipUnitSelectMenu_16cd2a0(a1, *((unsigned int*)a1 + 338));
              v30 = *a1;
              *((_DWORD*)a1 + 338) = v29;
              (*(void (**)(__int64*))(v30 + 704))(a1);
              game_menu_BasicMenu_Unknown16dd9a0(a1);
              (*(void (**)(__int64*, _QWORD))(*a1 + 552))(a1, 0);
              return 13;
            }
            v33 = "MID_AutoMenu_Deposit_Failure_Message";
            v27 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, &v33);
            if (v27 == 0) {
              return 12;
            }
            v32 = nullptr;
            GameRoutine_6680e0(v31, v27 + 1248);
            if (v32 == v31) {
              v28 = 32;
            }
            else {
              if (v32 == nullptr) {
                return 12;
              }
              v28 = 40;
            }
            (*(void (**)(void))(*(_QWORD*)v32 + v28))();
            return 12;
          }
        }
      }
      return result;
    }
  }
  return 0;
}

__int64 ProcEquipUnitSelectMenu_17ac480(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  char* v9;
  char* v10;
  unsigned __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  char* v39;
  char* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v54;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  int v63;
  int v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  char* v76;
  __int64 (**v78)();
  int* v79;
  __int64 (***v80)();
  int v81;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      (v1 = a1, (GameRoutine_15b7370() & 1) != 0)) {
  LABEL_16:
    LODWORD(v78) = 17;
    result = game_UnitPool_GetFirst(&v78);
    if (result == 0) {
      return result;
    }
    v13 = *(_QWORD*)(result + 432);
    v14 = result;
    if (v13 == 0) {
      v13 = *(_QWORD*)(result + 440);
      if (v13 != 0) {
        v15 = *(unsigned __int8*)(v13 + 16);
        if (v15 <= 8) {
          v38 = v15 - 3;
          while (1) {
            if (v38 == 0) {
              v13 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v13 != 0) {
                break;
              }
            }
            if (++v38 == 6) {
              goto LABEL_20;
            }
          }
        }
        else {
        LABEL_20:
          v13 = 0;
        }
      }
    }
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v17 = GameData_2131bb8[0] + 16;
    while (1) {
      while (1) {
      LABEL_23:
        v18 = v13;
        v19 = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
        *(_WORD*)(v19 + 16) = 0;
        *(_DWORD*)(v19 + 40) = 0;
        *(_QWORD*)(v19 + 48) = 0;
        *(_QWORD*)(v19 + 56) = 0;
        *(_QWORD*)(v19 + 64) = 0;
        *(_QWORD*)(v19 + 72) = 0;
        *(_WORD*)(v19 + 80) = 257;
        *(_BYTE*)(v19 + 82) = 1;
        *(_QWORD*)(v19 + 88) = v14;
        *(_QWORD*)v19 = v17;
        *(_QWORD*)(v19 + 8) = 0;
        v20 = game_Unit_IsUnlocked(v14);
        *(_QWORD*)v19 = game_menu_anonymous_InventoryUnitMenuItem_vtable;
        *(_BYTE*)(v19 + 96) = 0;
        *(_BYTE*)(v19 + 82) = v20 & 1;
        BasicMenuCursor_16e0c00(a1, v19);
        v79 = (int*)&GameData_1a96902;
        result = game_HashString(&GameData_1a96902);
        v78 = (__int64 (**)())result;
        if (game_GameModeData_instance_ != 0) {
          result = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), &v78);
          if (result != 0 && *(_DWORD*)(result + 32) != 0) {
            v21 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v21 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            *(_BYTE*)(v19 + 82) = *(_QWORD*)(v14 + 392) == v21;
          }
        }
        if (v18 == 0) {
          return result;
        }
        v13 = *(_QWORD*)(v18 + 432);
        v14 = v18;
        if (v13 == 0) {
          v22 = *(_QWORD*)(v18 + 440);
          v14 = v18;
          if (v22 != 0) {
            v23 = *(unsigned __int8*)(v22 + 16);
            v13 = 0;
            v14 = v18;
            if (v23 <= 8) {
              break;
            }
          }
        }
      }
      v24 = v23 - 3;
      do {
        if (v24 == 0) {
          v13 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v13 != 0) {
            v14 = v18;
            goto LABEL_23;
          }
        }
        ++v24;
      } while (v24 != 6);
      v13 = 0;
      v14 = v18;
    }
  }
  v81 = 0;
  v78 = GameData_1fb0cb0;
  v79 = &v81;
  v80 = &v78;
  CorpsManager_9726e0(&v78);
  if (v80 == &v78) {
    v2 = 4;
  }
  else {
    if (v80 == nullptr) {
      goto LABEL_9;
    }
    v2 = 5;
  }
  (*v80)[v2]();
LABEL_9:
  if (((((v81 & 2) != 0) + (v81 & 1) + ((v81 & 4) != 0) + ((v81 & 8) != 0) +
        ((v81 & 0x10) != 0) + ((v81 & 0x20) != 0) + ((v81 & 0x40) != 0) +
        ((v81 & 0x80) != 0)) |
       ((v81 & 0x100) != 0)) == 0) {
    goto LABEL_16;
  }
  LODWORD(v78) = 17;
  v3 = game_UnitPool_GetFirst(&v78);
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v3 == 0) {
    v10 = nullptr;
    v9 = nullptr;
    v40 = nullptr;
    goto LABEL_75;
  }
  v6 = *(_QWORD*)(v3 + 432);
  v7 = v3;
  if (v6 == 0) {
    v6 = *(_QWORD*)(v3 + 440);
    if (v6 != 0) {
      v8 = *(unsigned __int8*)(v6 + 16);
      if (v8 < 9) {
        v73 = v8 - 3;
        while (1) {
          if (v73 == 0) {
            v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v6 != 0) {
              break;
            }
          }
          if (++v73 == 6) {
            goto LABEL_14;
          }
        }
      }
      else {
      LABEL_14:
        v6 = 0;
      }
    }
  }
  v9 = nullptr;
  v10 = nullptr;
  v11 = 0;
  while (1) {
  LABEL_39:
    v25 = v6;
    if ((unsigned __int64)v10 < v11) {
      *(_QWORD*)v10 = v7;
      v10 += 8;
      if (v6 == 0) {
        goto LABEL_71;
      }
      goto LABEL_58;
    }
    v26 = (char*)(v10 - v9);
    v27 = (v10 - v9) >> 3;
    v28 = v27 + 1;
    if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
      GameRoutine_6c1f60(v3, v4);
    }
    if ((__int64)(v11 - (_QWORD)v9) >> 2 > v28) {
      v28 = (__int64)(v11 - (_QWORD)v9) >> 2;
    }
    v29 = v11 - (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL
              ? 0x1FFFFFFFFFFFFFFFLL
              : v28;
    if (v29 != 0) {
      if (v29 >> 61 != 0) {
        GameRoutine_60a210(v3);
      }
      v30 = v9;
      v31 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
      v9 = v30;
    }
    else {
      v31 = 0;
    }
    v11 = v31 + 8 * v29;
    v32 = (__int64)&v26[v31 + -8 * v27];
    *(_QWORD*)&v26[v31] = v7;
    v10 = &v26[v31 + 8];
    v33 = v9;
    v3 = memcpy(v32, v9, v26);
    if (v33 != nullptr) {
      break;
    }
    v9 = (char*)v32;
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v25 == 0) {
      goto LABEL_71;
    }
  LABEL_58:
    v6 = *(_QWORD*)(v25 + 432);
    v7 = v25;
    if (v6 == 0) {
      v35 = *(_QWORD*)(v25 + 440);
      v7 = v25;
      if (v35 != 0) {
        v36 = *(unsigned __int8*)(v35 + 16);
        v6 = 0;
        v7 = v25;
        if (v36 <= 8) {
          v37 = v36 - 3;
          while (1) {
            if (v37 == 0) {
              v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v6 != 0) {
                break;
              }
            }
            if (++v37 == 6) {
              v6 = 0;
              v7 = v25;
              goto LABEL_39;
            }
          }
          v7 = v25;
        }
      }
    }
  }
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v34 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v34 = 56;
  }
  v3 = nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
  v9 = (char*)v32;
  if (v25 != 0) {
    goto LABEL_58;
  }
LABEL_71:
  v78 = (__int64 (**)())GameData_2131528;
  if (v9 != v10) {
    v39 = (char*)(v10 - v9);
    v40 = v9;
    v41 = (v10 - v9) >> 3;
    GameRoutine_17aed00(v9, v10, &v78, (2 * __clz(v41)) ^ 0x7E, 1);
    v1 = a1;
    goto LABEL_76;
  }
  v1 = a1;
  v40 = v9;
LABEL_75:
  v39 = (char*)(v10 - v9);
  v41 = (v10 - v9) >> 3;
LABEL_76:
  v42 = fw_memory_HeapManager_Allocate(*v5, 104, 16, 0);
  v43 = *(_QWORD*)v40;
  v76 = v40;
  *(_QWORD*)(v42 + 8) = 0;
  *(_WORD*)(v42 + 16) = 0;
  *(_DWORD*)(v42 + 40) = 0;
  *(_QWORD*)(v42 + 64) = 0;
  *(_QWORD*)(v42 + 72) = 0;
  *(_QWORD*)(v42 + 48) = 0;
  *(_QWORD*)(v42 + 56) = 0;
  *(_WORD*)(v42 + 80) = 257;
  *(_BYTE*)(v42 + 82) = 1;
  *(_QWORD*)(v42 + 88) = v43;
  if (v43 != 0) {
    *(_BYTE*)(v42 + 82) = game_Unit_IsUnlocked(v43) & 1;
  }
  *(_BYTE*)(v42 + 96) = 0;
  *(_QWORD*)v42 = game_menu_anonymous_InventoryUnitMenuItem_vtable;
  BasicMenuCursor_16e0c00(v1, v42);
  v44 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v41 > 1) {
    v45 = *((_QWORD*)v40 + 1);
    v46 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         104, 16, 0);
    *(_QWORD*)(v46 + 8) = 0;
    *(_WORD*)(v46 + 16) = 0;
    *(_DWORD*)(v46 + 40) = 0;
    *(_QWORD*)(v46 + 48) = 0;
    *(_QWORD*)(v46 + 56) = 0;
    *(_QWORD*)(v46 + 64) = 0;
    *(_QWORD*)(v46 + 72) = 0;
    *(_QWORD*)(v46 + 88) = v45;
    *(_WORD*)(v46 + 80) = 257;
    *(_BYTE*)(v46 + 82) = 1;
    if (v45 != 0) {
      *(_BYTE*)(v46 + 82) = game_Unit_IsUnlocked(v45) & 1;
    }
    *(_BYTE*)(v46 + 96) = 0;
    *(_QWORD*)v46 = game_menu_anonymous_InventoryUnitMenuItem_vtable;
    BasicMenuCursor_16e0c00(a1, v46);
    v47 = *(_DWORD*)(v45 + 416);
    v48 = *(unsigned __int8*)(v45 + 501);
    v79 = (int*)&GameData_1a96902;
    if ((v47 & 0x100000) != 0) {
      v49 = v48;
    }
    else {
      v49 = -1;
    }
    v78 = (__int64 (**)())game_HashString(&GameData_1a96902);
    if (game_GameModeData_instance_ != 0) {
      v50 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v78);
      if (v50 != 0 && *(_DWORD*)(v50 + 32) != 0) {
        v51 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v51 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        *(_BYTE*)(v46 + 82) = *(_QWORD*)(v45 + 392) == v51;
      }
    }
    if (v39 == (char*)((__int128*)0x10LL)) {
      v52 = 2;
    LABEL_92:
      v44 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v49 != -1 && v52 % 9 != 0) {
        v54 = v52 + 1;
        do {
          v55 = fw_memory_HeapManager_Allocate(*v44, 104, 16, 0);
          *(_WORD*)(v55 + 16) = 0;
          *(_DWORD*)(v55 + 40) = 0;
          *(_QWORD*)(v55 + 48) = 0;
          *(_QWORD*)(v55 + 56) = 0;
          *(_QWORD*)(v55 + 64) = 0;
          *(_QWORD*)(v55 + 72) = 0;
          *(_WORD*)(v55 + 80) = 257;
          *(_BYTE*)(v55 + 82) = 1;
          *(_QWORD*)(v55 + 88) = 0;
          *(_BYTE*)(v55 + 96) = 0;
          *(_QWORD*)v55 = game_menu_anonymous_EmptyMenuItem_vtable;
          *(_QWORD*)(v55 + 8) = 0;
          *(_DWORD*)(v55 + 100) = v49;
          BasicMenuCursor_16e0c00(a1, v55);
          v56 = 954437177 * v54++ + 238609294;
        } while (v56 > 0x1C71C71C);
      }
      goto LABEL_98;
    }
    v58 = 3;
    v59 = 2;
    v52 = 2;
    if (v41 > 3) {
      v58 = v41;
    }
    v75 = v58;
    v74 = GameData_2131bb8[0] + 16;
    while (2) {
      v60 = a1;
      v61 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if ((unsigned int)(954437177 * v52 + 238609294) < 0x1C71C71D) {
      LABEL_113:
        v67 = fw_memory_HeapManager_Allocate(*v61, 104, 16, 0);
        v52 = 1;
        *(_WORD*)(v67 + 16) = 0;
        *(_DWORD*)(v67 + 40) = 0;
        *(_QWORD*)(v67 + 48) = 0;
        *(_QWORD*)(v67 + 56) = 0;
        *(_QWORD*)(v67 + 64) = 0;
        *(_QWORD*)(v67 + 72) = 0;
        *(_WORD*)(v67 + 80) = 257;
        *(_QWORD*)(v67 + 88) = 0;
        *(_BYTE*)(v67 + 96) = 0;
        *(_BYTE*)(v67 + 82) = 1;
        *(_QWORD*)v67 = game_menu_anonymous_MarginMenuItem_vtable;
        *(_QWORD*)(v67 + 8) = 0;
        BasicMenuCursor_16e0c00(v60, v67);
        v62 = *(_QWORD*)&v76[8 * v59];
      }
      else {
        v62 = *(_QWORD*)&v76[8 * v59];
        v63 = *(unsigned __int8*)(v62 + 501);
        if ((*(_BYTE*)(v62 + 418) & 0x10) == 0) {
          v63 = -1;
        }
        if (v63 != v49) {
          v60 = a1;
          v64 = v52 + 1;
          do {
            v65 = fw_memory_HeapManager_Allocate(*v61, 104, 16, 0);
            *(_WORD*)(v65 + 16) = 0;
            *(_DWORD*)(v65 + 40) = 0;
            *(_QWORD*)(v65 + 48) = 0;
            *(_QWORD*)(v65 + 56) = 0;
            *(_QWORD*)(v65 + 64) = 0;
            *(_QWORD*)(v65 + 72) = 0;
            *(_WORD*)(v65 + 80) = 257;
            *(_BYTE*)(v65 + 82) = 1;
            *(_QWORD*)(v65 + 88) = 0;
            *(_BYTE*)(v65 + 96) = 0;
            *(_QWORD*)v65 = game_menu_anonymous_EmptyMenuItem_vtable;
            *(_QWORD*)(v65 + 8) = 0;
            *(_DWORD*)(v65 + 100) = v49;
            BasicMenuCursor_16e0c00(a1, v65);
            v66 = 954437177 * v64++ + 238609294;
          } while (v66 > 0x1C71C71C);
          goto LABEL_113;
        }
      }
      v68 = fw_memory_HeapManager_Allocate(*v61, 104, 16, 0);
      *(_WORD*)(v68 + 16) = 0;
      *(_DWORD*)(v68 + 40) = 0;
      *(_QWORD*)(v68 + 48) = 0;
      *(_QWORD*)(v68 + 56) = 0;
      *(_QWORD*)(v68 + 64) = 0;
      *(_QWORD*)(v68 + 72) = 0;
      *(_WORD*)(v68 + 80) = 257;
      *(_BYTE*)(v68 + 82) = 1;
      *(_QWORD*)(v68 + 88) = v62;
      *(_QWORD*)v68 = v74;
      *(_QWORD*)(v68 + 8) = 0;
      if (v62 != 0) {
        *(_BYTE*)(v68 + 82) = game_Unit_IsUnlocked(v62) & 1;
      }
      *(_BYTE*)(v68 + 96) = 0;
      *(_QWORD*)v68 = game_menu_anonymous_InventoryUnitMenuItem_vtable;
      BasicMenuCursor_16e0c00(a1, v68);
      v69 = *(_DWORD*)(v62 + 416);
      v70 = *(unsigned __int8*)(v62 + 501);
      v79 = (int*)&GameData_1a96902;
      if ((v69 & 0x100000) != 0) {
        v49 = v70;
      }
      else {
        v49 = -1;
      }
      v78 = (__int64 (**)())game_HashString(&GameData_1a96902);
      if (game_GameModeData_instance_ != 0) {
        v71 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v78);
        if (v71 != 0 && *(_DWORD*)(v71 + 32) != 0) {
          v72 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v72 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          *(_BYTE*)(v68 + 82) = *(_QWORD*)(v62 + 392) == v72;
        }
      }
      ++v52;
      if (++v59 == v75) {
        goto LABEL_92;
      }
      continue;
    }
  }
LABEL_98:
  v57 = 128;
  if (*(_QWORD*)(*v44 + 200LL) == 0) {
    v57 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(*v44 + v57);
}

__int64 ProcEquipUnitSelectMenu_17acfe0(_DWORD* a1, __int64* a2)
{
  __int64 result;
  char v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD v33[2];

  v33[1] = &GameData_1a96902;
  result = game_HashString(&GameData_1a96902);
  v33[0] = result;
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v33);
    if (result == 0) {
      goto LABEL_5;
    }
    v5 = *(_DWORD*)(result + 32) != 0;
  }
  if ((v5 & 1) != 0) {
    return result;
  }
LABEL_5:
  if (a1[296] == 1) {
    return result;
  }
  GameRoutine_178a2c0(a1, a2);
  result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 192LL))(a1);
  v6 = a2[1];
  v7 = a2[2];
  if (v6 >= v7) {
    v9 = *a2;
    v10 = v6 - *a2;
    v11 = 1 - 0x3333333333333333LL * (v10 >> 3);
    if (v11 > 0x666666666666666LL) {
      goto LABEL_41;
    }
    v12 = fw_memory_g_heap_manager_ptr;
    v13 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v7 - v9) >> 3);
    if (2 * v13 > v11) {
      v11 = 2 * v13;
    }
    if (v13 >= 0x333333333333333LL) {
      v14 = 0x666666666666666LL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 > 0x666666666666666LL) {
        goto LABEL_42;
      }
      v15 = result;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v14, 16, 0);
      LODWORD(result) = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + v10;
    *(_QWORD*)v17 = &GameData_1a9f09e;
    *(_QWORD*)(v17 + 8) = "MID_KeyHelp_AutoAll";
    *(_BYTE*)(v17 + 28) = 0;
    *(_QWORD*)(v17 + 32) = 0;
    *(_BYTE*)(v17 + 16) = 1;
    v18 = v16 + 40 * v14;
    v8 = v16 + v10 + 40;
    *(_DWORD*)(v17 + 20) = 6;
    *(_DWORD*)(v17 + 24) = result;
    memcpy(v16, v9, v10);
    *a2 = v16;
    a2[1] = v8;
    a2[2] = v18;
    if (v9 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v19, v9);
    }
  }
  else {
    *(_BYTE*)(v6 + 28) = 0;
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)v6 = &GameData_1a9f09e;
    *(_QWORD*)(v6 + 8) = "MID_KeyHelp_AutoAll";
    v8 = v6 + 40;
    *(_BYTE*)(v6 + 16) = 1;
    *(_DWORD*)(v6 + 20) = 6;
    *(_DWORD*)(v6 + 24) = result;
  }
  a2[1] = v8;
  result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 192LL))(a1);
  v20 = a2[1];
  v21 = a2[2];
  if (v20 >= v21) {
    v23 = *a2;
    v24 = v20 - *a2;
    v25 = 1 - 0x3333333333333333LL * (v24 >> 3);
    if (v25 <= 0x666666666666666LL) {
      v26 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v21 - v23) >> 3);
      if (2 * v26 > v25) {
        v25 = 2 * v26;
      }
      if (v26 >= 0x333333333333333LL) {
        v27 = 0x666666666666666LL;
      }
      else {
        v27 = v25;
      }
      if (v27 == 0) {
        v29 = 0;
      LABEL_35:
        v30 = v29 + v24;
        *(_QWORD*)v30 = &GameData_1a9f09e;
        *(_QWORD*)(v30 + 8) = "MID_KeyHelp_ListChange";
        *(_BYTE*)(v30 + 28) = 0;
        *(_QWORD*)(v30 + 32) = 0;
        *(_BYTE*)(v30 + 16) = 1;
        v31 = v29 + 40 * v27;
        v22 = v29 + v24 + 40;
        *(_DWORD*)(v30 + 20) = 7;
        *(_DWORD*)(v30 + 24) = result;
        result = memcpy(v29, v23, v24);
        *a2 = v29;
        a2[1] = v22;
        a2[2] = v31;
        if (v23 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v23);
        }
        goto LABEL_39;
      }
      if (v27 <= 0x666666666666666LL) {
        v28 = result;
        v29 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v27,
                                             16, 0);
        LODWORD(result) = v28;
        goto LABEL_35;
      }
    LABEL_42:
      GameRoutine_60a210(result);
    }
  LABEL_41:
    GameRoutine_874520(result);
  }
  *(_BYTE*)(v20 + 28) = 0;
  *(_QWORD*)(v20 + 32) = 0;
  *(_QWORD*)v20 = &GameData_1a9f09e;
  *(_QWORD*)(v20 + 8) = "MID_KeyHelp_ListChange";
  v22 = v20 + 40;
  *(_BYTE*)(v20 + 16) = 1;
  *(_DWORD*)(v20 + 20) = 7;
  *(_DWORD*)(v20 + 24) = result;
LABEL_39:
  a2[1] = v22;
  return result;
}

__int64 ProcEquipUnitSelectMenu_17adcc0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20d2170, 0);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 152);
      v4 = *(_QWORD*)(result + 88);
      if (v3 == 0) {
        v3 = a1;
      }
      v5 = *(_QWORD*)(v3 + 32);
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 512, 16, 0);
      v7 = GameData_212c608[0];
      *(_QWORD*)(v6 + 96) = 0;
      *(_QWORD*)(v6 + 104) = 0;
      *(_QWORD*)(v6 + 112) = 0;
      *(_QWORD*)(v6 + 120) = 0;
      *(_QWORD*)(v6 + 128) = 0;
      *(_WORD*)(v6 + 136) = 0;
      *(_QWORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 24) = "NULL";
      *(_QWORD*)(v6 + 138) = 0;
      *(_QWORD*)(v6 + 144) = 0;
      *(_QWORD*)(v6 + 32) = 0;
      *(_QWORD*)(v6 + 40) = 0;
      *(_QWORD*)(v6 + 48) = 0;
      *(_QWORD*)(v6 + 56) = 0;
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      *(_QWORD*)(v6 + 80) = 0;
      *(_QWORD*)(v6 + 88) = 0;
      *(_QWORD*)v6 = v7 + 16;
      *(_QWORD*)(v6 + 8) = 0;
      game_ProcInst_Register();
      *(_QWORD*)(v6 + 232) = 0;
      *(_QWORD*)(v6 + 224) = v6 + 232;
      v8 = GameData_2130240[0];
      *(_BYTE*)(v6 + 168) = 0;
      *(_BYTE*)(v6 + 172) = 0;
      *(_QWORD*)(v6 + 192) = 0;
      *(_QWORD*)(v6 + 200) = 0;
      *(_QWORD*)(v6 + 208) = 0;
      *(_QWORD*)(v6 + 216) = 0;
      *(_QWORD*)(v6 + 240) = 0;
      *(_QWORD*)(v6 + 248) = 0;
      *(_QWORD*)(v6 + 256) = 0;
      *(_QWORD*)(v6 + 264) = 0;
      *(_QWORD*)(v6 + 272) = 0;
      *(_QWORD*)(v6 + 336) = 0;
      *(_QWORD*)(v6 + 344) = 0;
      *(_QWORD*)(v6 + 320) = 0;
      *(_QWORD*)(v6 + 328) = 0;
      *(_QWORD*)(v6 + 304) = 0;
      *(_QWORD*)(v6 + 312) = 0;
      *(_QWORD*)(v6 + 288) = 0;
      *(_QWORD*)(v6 + 296) = 0;
      *(_DWORD*)(v6 + 376) = 0;
      *(_QWORD*)(v6 + 384) = 0;
      *(_QWORD*)(v6 + 392) = 0;
      *(_QWORD*)(v6 + 400) = 0;
      *(_QWORD*)(v6 + 448) = 0;
      *(_QWORD*)(v6 + 464) = 0;
      *(_QWORD*)(v6 + 472) = 0;
      *(_BYTE*)(v6 + 480) = 0;
      *(_QWORD*)(v6 + 496) = v4;
      *(_QWORD*)(v6 + 152) = 0;
      *(_QWORD*)(v6 + 160) = v8 + 2;
      *(_DWORD*)(v6 + 280) = 1065353216;
      *(_QWORD*)(v6 + 352) = 1;
      *(_QWORD*)(v6 + 368) = 0xFFFFFFFFLL;
      *(_DWORD*)(v6 + 408) = 2;
      v9 = GameData_2131d98[0] + 448;
      *(_QWORD*)v6 = GameData_2131d98[0] + 16;
      *(_QWORD*)(v6 + 176) = v9;
      *(_QWORD*)(v6 + 184) = 0;
      return ProcInst_657850(v6, GameData_21319e0, "InventoryUnitTroopSequence",
                             1, v5);
    }
  }
  return result;
}

__int64 game_menu_anonymous_ProcEquipUnitSelectMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v3;
  _BYTE* v4;
  _WORD* v5;
  _WORD* v6;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_BYTE**)a2;
  v5 = *(_WORD**)(v3 + 1384);
  v6 = *(_WORD**)(*(_QWORD*)a2 + 88LL);
  if (v6 == v5) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    if (v6 != nullptr && v6[414] == 0 && v6[418] == 0 && v6[422] == 0 &&
        v6[426] == 0 && v6[430] == 0 && v6[434] == 0) {
      v4[96] = 1;
      goto LABEL_8;
    }
    return 0;
  }
  if (v4[96] != 1) {
    return 0;
  }
  v4[96] = 0;
LABEL_8:
  (*(void (**)(_BYTE*))(*(_QWORD*)v4 + 96LL))(v4);
  return 0;
}

__int64

game_menu_anonymous_ProcEquipUnitSelectMenu_CreateSubMenu_closure_Invoke_17ae2f0(
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

game_menu_anonymous_ProcEquipUnitSelectMenu_CreateSubMenu_closure_Invoke_17ae440(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  _WORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  _QWORD v15[4];
  _QWORD* v16;
  __int64 v17;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (_WORD*)*a2;
  *(_QWORD*)(v2 + 1384) = *a2;
  *(_DWORD*)(v2 + 1184) = 1;
  if (v3 == nullptr || v3[414] != 0 || v3[418] != 0 || v3[422] != 0 ||
      v3[426] != 0 || v3[430] != 0 || v3[434] != 0) {
    return _ZN4game4menu9BasicMenu13Unknown16e2860Eb(v2, 0);
  }
  v5 = *(_QWORD*)(v2 + 232);
  v4 = *(_QWORD*)(v2 + 240);
  v6 = v2;
  v15[0] = GameData_20d2318;
  v15[1] = v3;
  v7 = v15;
  v16 = v15;
  if (v4 == v5) {
    goto LABEL_19;
  }
  v8 = 0;
  v9 = GameData_212e008[0];
  do {
    if (*(_QWORD*)(v5 + 8 * v8) != 0) {
      v11 = __dynamic_cast(*(_QWORD*)(v5 + 8 * v8), v9, &GameData_20d2170, 0);
      v2 = v6;
      if (v11 == 0) {
        goto LABEL_10;
      }
      v17 = v11;
      if (v16 == nullptr) {
        GameRoutine_60a310(0, v10);
      }
      v12 = (*(__int64 (**)(_QWORD*, __int64*))(*v16 + 48LL))(v16, &v17);
      v2 = v6;
      if ((v12 & 1) != 0) {
        break;
      }
      v5 = *(_QWORD*)(v6 + 232);
      v4 = *(_QWORD*)(v6 + 240);
    }
  LABEL_10:
    ++v8;
  } while (v8 < (v4 - v5) >> 3);
  v7 = v16;
  if (v16 != v15) {
    if (v16 != nullptr) {
      v13 = 40;
      goto LABEL_20;
    }
    return _ZN4game4menu9BasicMenu13Unknown16e2860Eb(v2, 0);
  }
LABEL_19:
  v13 = 32;
LABEL_20:
  (*(void (**)(_QWORD*))(*v7 + v13))(v7);
  v2 = v6;
  return _ZN4game4menu9BasicMenu13Unknown16e2860Eb(v2, 0);
}

__int64

game_menu_anonymous_ProcEquipUnitSelectMenu_CreateSubMenu_closure_Invoke_17ae690(
    __int64 a1, __int64 a2)
{
  _WORD* v2;
  _BYTE* v3;
  _WORD* v4;
  bool v5;

  v2 = *(_WORD**)(a1 + 8);
  v3 = *(_BYTE**)a2;
  v4 = *(_WORD**)(*(_QWORD*)a2 + 88LL);
  v5 = v4 == v2 || v4 == nullptr;
  if (v5 || v4[414] != 0 || v4[418] != 0 || v4[422] != 0 || v4[426] != 0 ||
      v4[430] != 0 || v4[434] != 0) {
    return 0;
  }
  v3[96] = 1;
  (*(void (**)(_BYTE*))(*(_QWORD*)v3 + 96LL))(v3);
  return 0;
}

__int64

game_menu_anonymous_ProcEquipUnitSelectMenu_CreateSubMenu_closure_Invoke_17ae810(
    __int64 a1, unsigned int* a2, unsigned __int8* a3)
{
  __int64* v3;
  int v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  __int64 result;

  v3 = *(__int64**)(a1 + 8);
  v4 = *a3;
  v5 = EquipUnitSelectMenu_16cd2a0(v3, *a2);
  *((_DWORD*)v3 + 338) = v5;
  *((_DWORD*)v3 + 339) = v5;
  v6 = EquipUnitSelectMenu_16cd2a0(v3, v5);
  v7 = *v3;
  *((_DWORD*)v3 + 338) = v6;
  result = (*(__int64 (**)(__int64*))(v7 + 704))(v3);
  if (v4 == 1) {
    return game_menu_BasicMenu_Unknown16dd9a0(v3);
  }
  return result;
}

bool game_menu_anonymous_ProcEquipUnitSelectMenu_BCall_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) ==
         *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1384LL);
}

__int64

game_menu_anonymous_ProcEquipUnitSelectMenu_BCall_closure0_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64* v2;
  __int64 v3;

  v2 = (__int64*)*a2;
  if (*(_BYTE*)(*a2 + 96) == 1) {
    v3 = *v2;
    *((_BYTE*)v2 + 96) = 0;
    (*(void (**)(__int64*, __int64*))(v3 + 96))(v2, a2);
  }
  return 0;
}

#pragma GCC visibility pop
