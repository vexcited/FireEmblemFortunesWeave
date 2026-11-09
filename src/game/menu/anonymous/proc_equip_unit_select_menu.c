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

#pragma GCC visibility pop
