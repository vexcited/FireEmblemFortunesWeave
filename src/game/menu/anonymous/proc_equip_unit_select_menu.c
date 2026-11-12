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
__int64 ProcEquipUnitSelectMenu_17ab3e0_alt1(__int64 a1) __asm__(
    "ProcEquipUnitSelectMenu_17ab3e0");
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
__int64 ProcEquipUnitSelectMenu_17ac080_alt1(__int64* a1) __asm__(
    "ProcEquipUnitSelectMenu_17ac080");
__int64 ProcEquipUnitSelectMenu_17acfe0_alt1(_DWORD* a1, __int64* a2) __asm__(
    "ProcEquipUnitSelectMenu_17acfe0");
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
__int64 ProcEquipUnitSelectMenu_17ac480_alt1(__int64 a1) __asm__(
    "ProcEquipUnitSelectMenu_17ac480");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_178a2c0_alt1(__int64, __int64*) __asm__("GameRoutine_178a2c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcEquipUnitSelectMenu_17acfe0(_DWORD* a1, __int64* a2);
_QWORD* GameRoutine_6680e0_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_6680e0");
_QWORD* game_menu_UnitGridSelectMenu_ApplyChangeUnit_alt1(
    _QWORD* result) __asm__("game_menu_UnitGridSelectMenu_ApplyChangeUnit");
__int64 BasicMenu_16e2860(__int64 result, char);
__int64 EquipUnitSelectMenu_16cd2a0_alt1(__int64, unsigned int) __asm__(
    "EquipUnitSelectMenu_16cd2a0");
__int64 EquipUnitSelectMenu_16cdaa0(__int64*, __int64*);
__int64 GameRoutine_12f2090_alt1(__int64 result) __asm__("GameRoutine_12f2090");
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
__int64 game_menu_BasicMenu_Unknown96_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown96");
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog_alt1(
    __int64, __int64) __asm__("game_menu_Dialog__CreateBind_game_menu_Dialog");
void __attribute__((noreturn))
GameRoutine_16d0d20_alt1() __asm__("GameRoutine_16d0d20");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void ProcEquipUnitSelectMenu_17ab3e0(__int64 a1);
__int64 ProcEquipUnitSelectMenu_17ac080(__int64 a1);
__int64* game_820d50(int);
__int64 BasicMenu_16e1e50(__int64, __int64);
__int64 CorpsManager_9726e0_alt1(__int64) __asm__("CorpsManager_9726e0");
__int64 GameRoutine_15b59e0(__int64);
__int64 GameRoutine_15b5f20(__int64);
__int64 GameRoutine_15b7370_alt1() __asm__("GameRoutine_15b7370");
__int64 GameRoutine_17b1d00(__int64, __int64, __int64*, __int64, __int64, char,
                            char, char);
__int64 game_menu_anonymous_17b0590(int);
bool GameRoutine_822320(unsigned int);
extern __int64 (*GameData_20c5940[])();
extern __int64 (*GameData_20d2228[])();
extern __int64 (*GameData_20d22a8[])();
extern __int64 (*GameData_20d23a8[])();
extern __int64* GameData_212ea58;
extern __int64 GameData_2131908[20];
extern __int64 GameData_2131910[19];
extern __int64 GameData_21f3d10;
extern __int64 GameData_2203490;
extern char game_facility_g_unknown_2259368;
__int64 ProcEquipUnitSelectMenu_17ace60(__int64 result);
void ProcEquipUnitSelectMenu_17ad490(_BYTE* a1, __int64* a2, int a3);
bool ProcEquipUnitSelectMenu_17ae020(__int64 a1, __int64 a2, char a3);
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_menu_anonymous_17aed00(__int64 result, __int64*,
                                    __int64 (**)(__int64*, __int64*), __int64,
                                    char);
bool game_Unit_IsUnlocked_alt1(__int64) __asm__("game_Unit_IsUnlocked");
extern __int64 (*game_19f0540_ptr)();
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1() __asm__("GameRoutine_6c1f60");
void ProcEquipUnitSelectMenu_17ac480(_QWORD* a1);

void ProcEquipUnitSelectMenu_17ab3e0(__int64 a1)
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 (**v19)();
    __int64 (**v20)();
    _WORD* v21;
    char gap24_[8];
    __int64* v22;
  } v19_;
  __int64 v23;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
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
  v9 = &v19_.v19;
  v19_.v21 = (_WORD*)v6;
  v19_.v19 = GameData_20d2198;
  v19_.v20 = (__int64 (**)(void))a1,
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v19_.v22 = (__int64*)&v19_.v19;
  if (v7 == v8) {
    goto LABEL_25;
  }
  v10 = 0;
  v11 = GameData_212e008[0];
  do {
    v12 = *(_QWORD*)(v8 + 8 * v10);
    if (v12 != 0) {
      v13 = __dynamic_cast(v12, v11, &GameData_20d2170, 0),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v13 == 0) {
        goto LABEL_12;
      }
      v23 = v13;
      if (v19_.v22 == nullptr) {
        GameRoutine_60a310_alt1(),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      if (((*(__int64 (**)(__int64*, __int64*))(*v19_.v22 + 48))(v19_.v22,
                                                                 &v23) &
           1) != 0) {
        break;
      }
      v8 = *(_QWORD*)(a1 + 232);
      v7 = *(_QWORD*)(a1 + 240);
    }
  LABEL_12:
    ++v10;
  } while (v10 < (v7 - v8) >> 3);
  v9 = (__int64 (***)(void))v19_.v22,
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v19_.v22 != (__int64*)&v19_.v19) {
    if (v19_.v22 != nullptr) {
      v14 = 5;
      goto LABEL_26;
    }
    goto LABEL_27;
  }
LABEL_25:
  v14 = 4;
LABEL_26:
  ((void (*)(__int64 (***)(void), __int64, __int64))(*v9)[v14])(v9, v3, v4),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_27:
  game_menu_BasicMenu_Unknown96_alt1(a1),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  game_menu_UnitGridSelectMenu_ApplyChangeUnit_alt1((_QWORD*)a1),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  (*(void (**)(__int64))(*(_QWORD*)a1 + 704LL))(a1),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_BYTE*)(a1 + 1168) = 0;
  game_menu_BasicMenu_Unknown16dd9a0_alt1(a1),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_30:
  v16 = *(_QWORD*)a1;
  v17 = *(unsigned int*)(a1 + 1352);
  v19_.v20 = nullptr;
  v19_.v21 = nullptr;
  v19_.v19 = nullptr;
  (*(void (**)(__int64, __int64 (***)(void), __int64))(v16 + 1216))(
      a1, &v19_.v19, v17),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  EquipUnitSelectMenu_16cdaa0((__int64*)a1, (__int64*)&v19_.v19),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v19_.v19 != nullptr) {
    v19_.v20 = v19_.v19;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v19_.v19),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
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

__int64 ProcEquipUnitSelectMenu_17ac080(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
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
  struct {
    _QWORD v31[4];
    _QWORD* v32;
  } v31_;
  const char* v33;

  v1 = *(_QWORD*)(a1 + 1360);
  v2 = *(_QWORD*)(a1 + 1368);
  v3 = v2 - v1;
  if (v2 != v1) {
    if ((v3 & 0x8000000000000000LL) != 0) {
      GameRoutine_16d0d20_alt1();
    }
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v2 - v1, 16, 0);
    memcpy_alt1(v6, v1, v3);
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
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v11, v6);
    v12 = v9 != 10 || *(_DWORD*)(a1 + 1184) == 1;
    if (!v12 && *(_DWORD*)(a1 + 1352) == 0) {
      result = *(_QWORD*)(a1 + 336);
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
                (signed __int32)*(
                    _DWORD*)(*(_QWORD*)(*(_QWORD*)
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
              GameRoutine_12f2090_alt1(result);
              v29 = EquipUnitSelectMenu_16cd2a0_alt1(a1, *(_DWORD*)(a1 + 1352));
              v30 = *(_QWORD*)a1;
              *(_DWORD*)(a1 + 1352) = v29;
              (*(void (**)(__int64))(v30 + 704))(a1);
              game_menu_BasicMenu_Unknown16dd9a0_alt1(a1);
              (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 552LL))(a1, 0);
              return 13;
            }
            v33 = "MID_AutoMenu_Deposit_Failure_Message";
            v27 = game_menu_Dialog__CreateBind_game_menu_Dialog_alt1(
                a1, (__int64)&v33);
            if (v27 == 0) {
              return 12;
            }
            v31_.v32 = nullptr;
            GameRoutine_6680e0_alt1(v31_.v31, (_QWORD*)(v27 + 1248));
            if (v31_.v32 == v31_.v31) {
              v28 = 32;
            }
            else {
              if (v31_.v32 == nullptr) {
                return 12;
              }
              v28 = 40;
            }
            (*(void (**)(__int64))(*v31_.v32 + v28))((__int64)v31_.v32);
            return 12;
          }
        }
      }
      return result;
    }
  }
  return 0;
}

void ProcEquipUnitSelectMenu_17ac480(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  char* v40;
  __int64* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64* v62;
  __int64 v63;
  int v64;
  int v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  int v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  struct {
    __int64 (**v79)();
    int* v80;
    char gap48_[16];
    __int64 (**v81)(__int64*, __int64*);
  } v79_;
  int v82;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      (v1 = a1, (GameRoutine_15b7370_alt1() & 1) != 0)) {
  LABEL_16:
    LODWORD(v79_.v79) = 17;
    v11 = game_UnitPool_GetFirst_alt1((int*)&v79_.v79);
    if (v11 == 0) {
      return;
    }
    v12 = *(_QWORD*)(v11 + 432);
    v13 = v11;
    if (v12 == 0) {
      v12 = *(_QWORD*)(v11 + 440);
      if (v12 != 0) {
        v14 = *(unsigned __int8*)(v12 + 16);
        if (v14 <= 8) {
          v39 = v14 - 3;
          while (1) {
            if (v39 == 0) {
              v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v12 != 0) {
                break;
              }
            }
            if (++v39 == 6) {
              goto LABEL_20;
            }
          }
        }
        else {
        LABEL_20:
          v12 = 0;
        }
      }
    }
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    v16 = GameData_2131bb8[0] + 16;
    while (1) {
      while (1) {
      LABEL_23:
        v17 = v12;
        v18 = fw_memory_HeapManager_Allocate_alt1(*v15, 104, 16, 0);
        *(_WORD*)(v18 + 16) = 0;
        *(_DWORD*)(v18 + 40) = 0;
        *(_QWORD*)(v18 + 48) = 0;
        *(_QWORD*)(v18 + 56) = 0;
        *(_QWORD*)(v18 + 64) = 0;
        *(_QWORD*)(v18 + 72) = 0;
        *(_WORD*)(v18 + 80) = 257;
        *(_BYTE*)(v18 + 82) = 1;
        *(_QWORD*)(v18 + 88) = v13;
        *(_QWORD*)v18 = v16;
        *(_QWORD*)(v18 + 8) = 0;
        v19 = game_Unit_IsUnlocked_alt1(v13);
        *(_QWORD*)v18 = game_menu_anonymous_InventoryUnitMenuItem_vtable;
        *(_BYTE*)(v18 + 96) = 0;
        *(_BYTE*)(v18 + 82) = v19;
        BasicMenuCursor_16e0c00_alt1(a1, v18);
        v79_.v80 = (int*)&GameData_1a96902;
        v79_.v79 = (__int64 (**)(void))game_HashString_alt1(
            (__int64)&GameData_1a96902);
        if (game_GameModeData_instance_ != 0) {
          v20 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v79_.v79);
          if (v20 != 0 && *(_DWORD*)(v20 + 32) != 0) {
            v21 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v21 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            *(_BYTE*)(v18 + 82) = *(_QWORD*)(v13 + 392) == v21;
          }
        }
        if (v17 == 0) {
          return;
        }
        v12 = *(_QWORD*)(v17 + 432);
        v13 = v17;
        if (v12 == 0) {
          v22 = *(_QWORD*)(v17 + 440);
          v13 = v17;
          if (v22 != 0) {
            v23 = *(unsigned __int8*)(v22 + 16);
            v12 = 0;
            v13 = v17;
            if (v23 <= 8) {
              break;
            }
          }
        }
      }
      v24 = v23 - 3;
      do {
        if (v24 == 0) {
          v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
          if (v12 != 0) {
            v13 = v17;
            goto LABEL_23;
          }
        }
        ++v24;
      } while (v24 != 6);
      v12 = 0;
      v13 = v17;
    }
  }
  v82 = 0;
  v79_.v79 = GameData_1fb0cb0;
  v79_.v80 = &v82;
  v79_.v81 = (__int64 (**)(__int64*, __int64*))&v79_.v79;
  CorpsManager_9726e0_alt1((__int64)&v79_.v79);
  if (v79_.v81 == (__int64 (**)(__int64*, __int64*))&v79_.v79) {
    v2 = 32;
  }
  else {
    if (v79_.v81 == nullptr) {
      goto LABEL_9;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))((char*)*v79_.v81 + v2))((__int64)v79_.v81);
LABEL_9:
  if (((((v82 & 2) != 0) + (v82 & 1) + ((v82 & 4) != 0) + ((v82 & 8) != 0) +
        ((v82 & 0x10) != 0) + ((v82 & 0x20) != 0) + ((v82 & 0x40) != 0) +
        ((v82 & 0x80) != 0)) |
       ((v82 & 0x100) != 0)) == 0) {
    goto LABEL_16;
  }
  LODWORD(v79_.v79) = 17;
  v3 = game_UnitPool_GetFirst_alt1((int*)&v79_.v79);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v3 == 0) {
    v9 = nullptr;
    v8 = 0;
    v41 = nullptr;
    goto LABEL_75;
  }
  v5 = *(_QWORD*)(v3 + 432);
  v6 = v3;
  if (v5 == 0) {
    v5 = *(_QWORD*)(v3 + 440);
    if (v5 != 0) {
      v7 = *(unsigned __int8*)(v5 + 16);
      if (v7 < 9) {
        v74 = v7 - 3;
        while (1) {
          if (v74 == 0) {
            v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v5 != 0) {
              break;
            }
          }
          if (++v74 == 6) {
            goto LABEL_14;
          }
        }
      }
      else {
      LABEL_14:
        v5 = 0;
      }
    }
  }
  v8 = 0;
  v9 = nullptr;
  v10 = 0;
  while (1) {
  LABEL_39:
    v25 = v5;
    if ((unsigned __int64)v9 < v10) {
      *v9++ = v6;
      if (v5 == 0) {
        goto LABEL_71;
      }
      goto LABEL_58;
    }
    v26 = (unsigned __int64)v9 - v8;
    v27 = ((__int64)v9 - v8) >> 3;
    v28 = v27 + 1;
    if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
      GameRoutine_6c1f60_alt1();
    }
    if ((__int64)(v10 - v8) >> 2 > v28) {
      v28 = (__int64)(v10 - v8) >> 2;
    }
    v29 = v10 - v8 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL : v28;
    if (v29 != 0) {
      if (v29 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v30 = v8;
      v31 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
      v8 = v30;
    }
    else {
      v31 = 0;
    }
    v10 = v31 + 8 * v29;
    v32 = v31 + v26 - 8 * v27;
    *(_QWORD*)(v31 + v26) = v6;
    v9 = (__int64*)(v31 + v26 + 8);
    v33 = v8;
    memcpy_alt1(v32, v8, v26);
    if (v33 != 0) {
      break;
    }
    v8 = v32;
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v25 == 0) {
      goto LABEL_71;
    }
  LABEL_58:
    v5 = *(_QWORD*)(v25 + 432);
    v6 = v25;
    if (v5 == 0) {
      v36 = *(_QWORD*)(v25 + 440);
      v6 = v25;
      if (v36 != 0) {
        v37 = *(unsigned __int8*)(v36 + 16);
        v5 = 0;
        v6 = v25;
        if (v37 <= 8) {
          v38 = v37 - 3;
          while (1) {
            if (v38 == 0) {
              v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v5 != 0) {
                break;
              }
            }
            if (++v38 == 6) {
              v5 = 0;
              v6 = v25;
              goto LABEL_39;
            }
          }
          v6 = v25;
        }
      }
    }
  }
  v34 = v33;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v35 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v35 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v34);
  v8 = v32;
  if (v25 != 0) {
    goto LABEL_58;
  }
LABEL_71:
  v79_.v79 = (__int64 (**)(void))game_19f0540_ptr;
  if ((__int64*)v8 != v9) {
    v40 = (char*)v9 - v8;
    v41 = (__int64*)v8;
    v42 = ((__int64)v9 - v8) >> 3;
    game_menu_anonymous_17aed00(v8, v9,
                                (__int64 (**)(__int64*, __int64*))&v79_.v79,
                                (2 * __clz(v42)) ^ 0x7E, 1);
    v1 = a1;
    goto LABEL_76;
  }
  v1 = a1;
  v41 = (__int64*)v8;
LABEL_75:
  v40 = (char*)v9 - v8;
  v42 = ((__int64)v9 - v8) >> 3;
LABEL_76:
  v43 = fw_memory_HeapManager_Allocate_alt1(*v4, 104, 16, 0);
  v44 = *v41;
  v77 = (__int64)v41;
  *(_QWORD*)(v43 + 8) = 0;
  *(_WORD*)(v43 + 16) = 0;
  *(_DWORD*)(v43 + 40) = 0;
  *(_QWORD*)(v43 + 64) = 0;
  *(_QWORD*)(v43 + 72) = 0;
  *(_QWORD*)(v43 + 48) = 0;
  *(_QWORD*)(v43 + 56) = 0;
  *(_WORD*)(v43 + 80) = 257;
  *(_BYTE*)(v43 + 82) = 1;
  *(_QWORD*)(v43 + 88) = v44;
  if (v44 != 0) {
    *(_BYTE*)(v43 + 82) = game_Unit_IsUnlocked_alt1(v44);
  }
  *(_BYTE*)(v43 + 96) = 0;
  *(_QWORD*)v43 = game_menu_anonymous_InventoryUnitMenuItem_vtable;
  BasicMenuCursor_16e0c00_alt1(v1, v43);
  v45 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v42 > 1) {
    v46 = v41[1];
    v47 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
    *(_QWORD*)(v47 + 8) = 0;
    *(_WORD*)(v47 + 16) = 0;
    *(_DWORD*)(v47 + 40) = 0;
    *(_QWORD*)(v47 + 48) = 0;
    *(_QWORD*)(v47 + 56) = 0;
    *(_QWORD*)(v47 + 64) = 0;
    *(_QWORD*)(v47 + 72) = 0;
    *(_QWORD*)(v47 + 88) = v46;
    *(_WORD*)(v47 + 80) = 257;
    *(_BYTE*)(v47 + 82) = 1;
    if (v46 != 0) {
      *(_BYTE*)(v47 + 82) = game_Unit_IsUnlocked_alt1(v46);
    }
    *(_BYTE*)(v47 + 96) = 0;
    *(_QWORD*)v47 = game_menu_anonymous_InventoryUnitMenuItem_vtable;
    BasicMenuCursor_16e0c00_alt1(a1, v47);
    v48 = *(_DWORD*)(v46 + 416);
    v49 = *(unsigned __int8*)(v46 + 501);
    v79_.v80 = (int*)&GameData_1a96902;
    if ((v48 & 0x100000) != 0) {
      v50 = v49;
    }
    else {
      v50 = -1;
    }
    v79_.v79 =
        (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a96902);
    if (game_GameModeData_instance_ != 0) {
      v51 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v79_.v79);
      if (v51 != 0 && *(_DWORD*)(v51 + 32) != 0) {
        v52 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v52 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        *(_BYTE*)(v47 + 82) = *(_QWORD*)(v46 + 392) == v52;
      }
    }
    if (v40 == (char*)((__int128*)0x10LL)) {
      v53 = 2;
    LABEL_92:
      v45 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v50 != -1 && v53 % 9 != 0) {
        v55 = v53 + 1;
        do {
          v56 = fw_memory_HeapManager_Allocate_alt1(*v45, 104, 16, 0);
          *(_WORD*)(v56 + 16) = 0;
          *(_DWORD*)(v56 + 40) = 0;
          *(_QWORD*)(v56 + 48) = 0;
          *(_QWORD*)(v56 + 56) = 0;
          *(_QWORD*)(v56 + 64) = 0;
          *(_QWORD*)(v56 + 72) = 0;
          *(_WORD*)(v56 + 80) = 257;
          *(_BYTE*)(v56 + 82) = 1;
          *(_QWORD*)(v56 + 88) = 0;
          *(_BYTE*)(v56 + 96) = 0;
          *(_QWORD*)v56 = game_menu_anonymous_EmptyMenuItem_vtable;
          *(_QWORD*)(v56 + 8) = 0;
          *(_DWORD*)(v56 + 100) = v50;
          BasicMenuCursor_16e0c00_alt1(a1, v56);
          v57 = 954437177 * v55++ + 238609294;
        } while (v57 > 0x1C71C71C);
      }
      goto LABEL_98;
    }
    v59 = 3;
    v60 = 2;
    v53 = 2;
    if (v42 > 3) {
      v59 = v42;
    }
    v76 = v59;
    v75 = GameData_2131bb8[0] + 16;
    while (2) {
      v61 = a1;
      v62 = (__int64*)fw_memory_g_heap_manager_ptr;
      if ((unsigned int)(954437177 * v53 + 238609294) < 0x1C71C71D) {
      LABEL_113:
        v68 = fw_memory_HeapManager_Allocate_alt1(*v62, 104, 16, 0);
        v53 = 1;
        *(_WORD*)(v68 + 16) = 0;
        *(_DWORD*)(v68 + 40) = 0;
        *(_QWORD*)(v68 + 48) = 0;
        *(_QWORD*)(v68 + 56) = 0;
        *(_QWORD*)(v68 + 64) = 0;
        *(_QWORD*)(v68 + 72) = 0;
        *(_WORD*)(v68 + 80) = 257;
        *(_QWORD*)(v68 + 88) = 0;
        *(_BYTE*)(v68 + 96) = 0;
        *(_BYTE*)(v68 + 82) = 1;
        *(_QWORD*)v68 = game_menu_anonymous_MarginMenuItem_vtable;
        *(_QWORD*)(v68 + 8) = 0;
        BasicMenuCursor_16e0c00_alt1(v61, v68);
        v63 = *(_QWORD*)(v77 + 8 * v60);
      }
      else {
        v63 = *(_QWORD*)(v77 + 8 * v60);
        v64 = *(unsigned __int8*)(v63 + 501);
        if ((*(_BYTE*)(v63 + 418) & 0x10) == 0) {
          v64 = -1;
        }
        if (v64 != v50) {
          v61 = a1;
          v65 = v53 + 1;
          do {
            v66 = fw_memory_HeapManager_Allocate_alt1(*v62, 104, 16, 0);
            *(_WORD*)(v66 + 16) = 0;
            *(_DWORD*)(v66 + 40) = 0;
            *(_QWORD*)(v66 + 48) = 0;
            *(_QWORD*)(v66 + 56) = 0;
            *(_QWORD*)(v66 + 64) = 0;
            *(_QWORD*)(v66 + 72) = 0;
            *(_WORD*)(v66 + 80) = 257;
            *(_BYTE*)(v66 + 82) = 1;
            *(_QWORD*)(v66 + 88) = 0;
            *(_BYTE*)(v66 + 96) = 0;
            *(_QWORD*)v66 = game_menu_anonymous_EmptyMenuItem_vtable;
            *(_QWORD*)(v66 + 8) = 0;
            *(_DWORD*)(v66 + 100) = v50;
            BasicMenuCursor_16e0c00_alt1(a1, v66);
            v67 = 954437177 * v65++ + 238609294;
          } while (v67 > 0x1C71C71C);
          goto LABEL_113;
        }
      }
      v69 = fw_memory_HeapManager_Allocate_alt1(*v62, 104, 16, 0);
      *(_WORD*)(v69 + 16) = 0;
      *(_DWORD*)(v69 + 40) = 0;
      *(_QWORD*)(v69 + 48) = 0;
      *(_QWORD*)(v69 + 56) = 0;
      *(_QWORD*)(v69 + 64) = 0;
      *(_QWORD*)(v69 + 72) = 0;
      *(_WORD*)(v69 + 80) = 257;
      *(_BYTE*)(v69 + 82) = 1;
      *(_QWORD*)(v69 + 88) = v63;
      *(_QWORD*)v69 = v75;
      *(_QWORD*)(v69 + 8) = 0;
      if (v63 != 0) {
        *(_BYTE*)(v69 + 82) = game_Unit_IsUnlocked_alt1(v63);
      }
      *(_BYTE*)(v69 + 96) = 0;
      *(_QWORD*)v69 = game_menu_anonymous_InventoryUnitMenuItem_vtable;
      BasicMenuCursor_16e0c00_alt1(a1, v69);
      v70 = *(_DWORD*)(v63 + 416);
      v71 = *(unsigned __int8*)(v63 + 501);
      v79_.v80 = (int*)&GameData_1a96902;
      if ((v70 & 0x100000) != 0) {
        v50 = v71;
      }
      else {
        v50 = -1;
      }
      v79_.v79 =
          (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a96902);
      if (game_GameModeData_instance_ != 0) {
        v72 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v79_.v79);
        if (v72 != 0 && *(_DWORD*)(v72 + 32) != 0) {
          v73 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v73 = *(_QWORD*)(game_GameModeData_instance_ + 96);
          }
          *(_BYTE*)(v69 + 82) = *(_QWORD*)(v63 + 392) == v73;
        }
      }
      ++v53;
      if (++v60 == v76) {
        goto LABEL_92;
      }
      continue;
    }
  }
LABEL_98:
  v58 = 128;
  if (*(_QWORD*)(*v45 + 200) == 0) {
    v58 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v45 + v58, v77);
}

__int64 ProcEquipUnitSelectMenu_17ace60(__int64 result)
{
  __int64 v1;
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  if (game_GameModeData_instance_ == 0) {
    goto LABEL_10;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    goto LABEL_10;
  }
  v1 = result;
  v2 = GameRoutine_15b7370_alt1();
  result = v1;
  if ((v2 & 1) != 0) {
    goto LABEL_10;
  }
  v9 = 0;
  v10_.v10[0] = GameData_1fb0cb0;
  v10_.v10[1] = &v9;
  v10_.v11 = v10_.v10;
  CorpsManager_9726e0_alt1((__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v3 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_9;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v3))((__int64)v10_.v11);
LABEL_9:
  result = v1;
  if (((((v9 & 2) != 0) + (v9 & 1) + ((v9 & 4) != 0) + ((v9 & 8) != 0) +
        ((v9 & 0x10) != 0) + ((v9 & 0x20) != 0) + ((v9 & 0x40) != 0) +
        ((v9 & 0x80) != 0)) |
       ((v9 & 0x100) != 0)) != 0) {
    return result;
  }
LABEL_10:
  v5 = *(_QWORD*)(result + 256);
  v4 = *(_QWORD*)(result + 264);
  if (v4 != v5) {
    v6 = 0;
    do {
      v7 = *(_QWORD*)(v5 + 8 * v6);
      if (v7 != 0) {
        *(_DWORD*)(v7 + 40) = v6;
        v5 = *(_QWORD*)(result + 256);
        v4 = *(_QWORD*)(result + 264);
      }
      ++v6;
    } while (v6 < (v4 - v5) >> 3);
  }
  v10_.v10[0] = GameData_20c5940;
  v10_.v11 = v10_.v10;
  BasicMenu_16e1e50(result, (__int64)v10_.v10);
  result = (__int64)v10_.v11;
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v10_.v11 + v8))((__int64)v10_.v11);
}

void ProcEquipUnitSelectMenu_17acfe0(_DWORD* a1, __int64* a2)
{
  char v4;
  __int64 v5;
  int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  signed __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  signed __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35[2];

  v35[1] = (unsigned __int64)&GameData_1a96902;
  v35[0] = game_HashString_alt1((__int64)&GameData_1a96902);
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v35);
    if (v5 == 0) {
      goto LABEL_5;
    }
    v4 = *(_DWORD*)(v5 + 32) != 0;
  }
  if ((v4 & 1) != 0) {
    return;
  }
LABEL_5:
  if (a1[296] == 1) {
    return;
  }
  GameRoutine_178a2c0_alt1((__int64)a1, a2);
  v6 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 192LL))(a1);
  v7 = a2[1];
  v8 = a2[2];
  if (v7 >= v8) {
    v10 = *a2;
    v11 = v7 - *a2;
    v12 = 1 - 0x3333333333333333LL * (v11 >> 3);
    if (v12 > 0x666666666666666LL) {
      goto LABEL_41;
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v8 - v10) >> 3);
    if (2 * v14 > v12) {
      v12 = 2 * v14;
    }
    if (v14 >= 0x333333333333333LL) {
      v15 = 0x666666666666666LL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 > 0x666666666666666LL) {
        goto LABEL_42;
      }
      v16 = v6;
      v17 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v15, 16, 0);
      v6 = v16;
    }
    else {
      v17 = 0;
    }
    v18 = v17 + v11;
    *(_QWORD*)v18 = &GameData_1a9f09e;
    *(_QWORD*)(v18 + 8) = "MID_KeyHelp_AutoAll";
    *(_BYTE*)(v18 + 28) = 0;
    *(_QWORD*)(v18 + 32) = 0;
    *(_BYTE*)(v18 + 16) = 1;
    v19 = v17 + 40 * v15;
    v9 = v17 + v11 + 40;
    *(_DWORD*)(v18 + 20) = 6;
    *(_DWORD*)(v18 + 24) = v6;
    memcpy_alt1(v17, v10, v11);
    *a2 = v17;
    a2[1] = v9;
    a2[2] = v19;
    if (v10 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v20, v10);
    }
  }
  else {
    *(_BYTE*)(v7 + 28) = 0;
    *(_QWORD*)(v7 + 32) = 0;
    *(_QWORD*)v7 = &GameData_1a9f09e;
    *(_QWORD*)(v7 + 8) = "MID_KeyHelp_AutoAll";
    v9 = v7 + 40;
    *(_BYTE*)(v7 + 16) = 1;
    *(_DWORD*)(v7 + 20) = 6;
    *(_DWORD*)(v7 + 24) = v6;
  }
  a2[1] = v9;
  v21 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 192LL))(a1);
  v22 = a2[1];
  v23 = a2[2];
  if (v22 >= v23) {
    v25 = *a2;
    v26 = v22 - *a2;
    v27 = 1 - 0x3333333333333333LL * (v26 >> 3);
    if (v27 <= 0x666666666666666LL) {
      v28 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v23 - v25) >> 3);
      if (2 * v28 > v27) {
        v27 = 2 * v28;
      }
      if (v28 >= 0x333333333333333LL) {
        v29 = 0x666666666666666LL;
      }
      else {
        v29 = v27;
      }
      if (v29 == 0) {
        v31 = 0;
      LABEL_35:
        v32 = v31 + v26;
        *(_QWORD*)v32 = &GameData_1a9f09e;
        *(_QWORD*)(v32 + 8) = "MID_KeyHelp_ListChange";
        *(_BYTE*)(v32 + 28) = 0;
        *(_QWORD*)(v32 + 32) = 0;
        *(_BYTE*)(v32 + 16) = 1;
        v33 = v31 + 40 * v29;
        v24 = v31 + v26 + 40;
        *(_DWORD*)(v32 + 20) = 7;
        *(_DWORD*)(v32 + 24) = v21;
        memcpy_alt1(v31, v25, v26);
        *a2 = v31;
        a2[1] = v24;
        a2[2] = v33;
        if (v25 != 0) {
          v34 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v25);
        }
        goto LABEL_39;
      }
      if (v29 <= 0x666666666666666LL) {
        v30 = v21;
        v31 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                  40 * v29, 16, 0);
        v21 = v30;
        goto LABEL_35;
      }
    LABEL_42:
      GameRoutine_60a210_alt1();
    }
  LABEL_41:
    GameRoutine_874520_alt1();
  }
  *(_BYTE*)(v22 + 28) = 0;
  *(_QWORD*)(v22 + 32) = 0;
  *(_QWORD*)v22 = &GameData_1a9f09e;
  *(_QWORD*)(v22 + 8) = "MID_KeyHelp_ListChange";
  v24 = v22 + 40;
  *(_BYTE*)(v22 + 16) = 1;
  *(_DWORD*)(v22 + 20) = 7;
  *(_DWORD*)(v22 + 24) = v21;
LABEL_39:
  a2[1] = v24;
}

void ProcEquipUnitSelectMenu_17ad490(_BYTE* a1, __int64* a2, int a3)
{
  __int64* v5;
  __int64 v6;
  __int64 v8;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  const char* v17;
  __int64 v18;
  signed __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  int v24;
  __int64 v25;
  int v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  int v31;
  __int64 v32;
  signed __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  int v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  int v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  const char* v47;
  __int64 v48;
  signed __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  int v53;
  __int64 v54;
  unsigned __int64 v55;
  int v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  int v65;
  __int64 v66;
  struct {
    _QWORD v67[4];
    _QWORD* v68;
  } v67_;
  __int64 v69;

  if (a3 == 7) {
    v5 = game_820d50(6);
    if ((game_GameModeData_instance_ == 0 ||
         (v6 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v5)) == 0 ||
         *(_DWORD*)(v6 + 32) == 0) &&
        GameRoutine_822320(1u)) {
      if (GameData_21f3d10 == 0 || *(_BYTE*)(GameData_21f3d10 + 9) != 1) {
        if (GameData_2203490 != 0) {
          return;
        }
        goto LABEL_23;
      }
      if (*(_DWORD*)(GameData_21f3d10 + 136) == 1 || *GameData_212ea58 != 0) {
        return;
      }
      if (*(_DWORD*)(GameData_21f3d10 + 136) != 1) {
      LABEL_23:
        v69 = 0;
        v67_.v68 = v67_.v67;
        v67_.v67[0] = GameData_2131910[0] + 16;
        v67_.v67[1] = &v69;
        GameRoutine_15b5f20((__int64)v67_.v67);
        if (v67_.v68 == v67_.v67) {
          v13 = 32;
        }
        else {
          if (v67_.v68 == nullptr) {
          LABEL_46:
            if (v69 != 0 || (game_facility_g_unknown_2259368 & 1) != 0) {
              return;
            }
          LABEL_48:
            v14 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
            v15 = a2[1];
            v30 = a2[2];
            if (v15 < v30) {
              v17 = "MID_AutoMenu_Deploy";
              goto LABEL_50;
            }
            v32 = *a2;
            v33 = v15 - *a2;
            v34 = 1 - 0x3333333333333333LL * (v33 >> 3);
            if (v34 <= 0x666666666666666LL) {
              v35 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v30 - v32) >> 3);
              if (2 * v35 > v34) {
                v34 = 2 * v35;
              }
              if (v35 >= 0x333333333333333LL) {
                v36 = 0x666666666666666LL;
              }
              else {
                v36 = v34;
              }
              if (v36 == 0) {
                v38 = 0;
                goto LABEL_76;
              }
              if (v36 <= 0x666666666666666LL) {
                v37 = v14;
                v38 = fw_memory_HeapManager_Allocate_alt1(
                    fw_memory_g_heap_manager, 40 * v36, 16, 0);
                v14 = v37;
              LABEL_76:
                v46 = v38 + v33;
                v47 = "MID_AutoMenu_Deploy";
              LABEL_88:
                *(_QWORD*)v46 = &GameData_1a9f09e;
                *(_QWORD*)(v46 + 8) = v47;
                *(_BYTE*)(v46 + 16) = 1;
                v55 = v38 + 40 * v36;
                v56 = 11;
                goto LABEL_113;
              }
            LABEL_120:
              GameRoutine_60a210_alt1();
            }
            goto LABEL_119;
          }
          v13 = 40;
        }
        (*(void (**)(__int64))(*v67_.v68 + v13))((__int64)v67_.v68);
        goto LABEL_46;
      }
      v69 = 0;
      v67_.v68 = v67_.v67;
      v67_.v67[0] = GameData_2131908[0] + 16;
      v67_.v67[1] = &v69;
      GameRoutine_15b59e0((__int64)v67_.v67);
      if (v67_.v68 == v67_.v67) {
        v8 = 32;
      }
      else {
        if (v67_.v68 == nullptr) {
          goto LABEL_91;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v67_.v68 + v8))((__int64)v67_.v68);
    LABEL_91:
      if (v69 != 0) {
        return;
      }
      goto LABEL_23;
    }
  }
  else {
    if ((game_menu_anonymous_17b0590(a3) & 1) == 0) {
      return;
    }
    if (a3 <= 4) {
      if (a3 != 0) {
        if (a3 != 4) {
          return;
        }
        v14 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
        v15 = a2[1];
        v16 = a2[2];
        if (v15 < v16) {
          v17 = "MID_AutoMenu_Skill";
        LABEL_50:
          *(_QWORD*)v15 = &GameData_1a9f09e;
          *(_QWORD*)(v15 + 8) = v17;
          *(_BYTE*)(v15 + 16) = 1;
          v31 = 11;
        LABEL_101:
          *(_DWORD*)(v15 + 20) = v31;
          *(_DWORD*)(v15 + 24) = v14;
          *(_BYTE*)(v15 + 28) = 0;
          v61 = v15 + 40;
          *(_QWORD*)(v15 + 32) = 0;
        LABEL_117:
          a2[1] = v61;
          return;
        }
        v32 = *a2;
        v33 = v15 - *a2;
        v39 = 1 - 0x3333333333333333LL * (v33 >> 3);
        if (v39 <= 0x666666666666666LL) {
          v40 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v16 - v32) >> 3);
          if (2 * v40 > v39) {
            v39 = 2 * v40;
          }
          if (v40 >= 0x333333333333333LL) {
            v36 = 0x666666666666666LL;
          }
          else {
            v36 = v39;
          }
          if (v36 != 0) {
            if (v36 > 0x666666666666666LL) {
              goto LABEL_120;
            }
            v41 = v14;
            v38 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      40 * v36, 16, 0);
            v14 = v41;
          }
          else {
            v38 = 0;
          }
          v46 = v38 + v33;
          v47 = "MID_AutoMenu_Skill";
          goto LABEL_88;
        }
      }
      else {
        if ((a1[1392] & 1) == 0) {
          v26 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
          v27 = a2[1];
          v28 = a2[2];
          if (v27 >= v28) {
            v48 = *a2;
            v49 = v27 - *a2;
            v50 = 1 - 0x3333333333333333LL * (v49 >> 3);
            if (v50 > 0x666666666666666LL) {
              goto LABEL_119;
            }
            v51 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v28 - v48) >> 3);
            if (2 * v51 > v50) {
              v50 = 2 * v51;
            }
            if (v51 >= 0x333333333333333LL) {
              v52 = 0x666666666666666LL;
            }
            else {
              v52 = v50;
            }
            if (v52 != 0) {
              if (v52 > 0x666666666666666LL) {
                goto LABEL_120;
              }
              v53 = v26;
              v54 = fw_memory_HeapManager_Allocate_alt1(
                  fw_memory_g_heap_manager, 40 * v52, 16, 0);
              v26 = v53;
            }
            else {
              v54 = 0;
            }
            v57 = v54 + v49;
            *(_QWORD*)v57 = &GameData_1a9f09e;
            *(_QWORD*)(v57 + 8) = "MID_AutoMenu_Equip";
            *(_BYTE*)(v57 + 28) = 0;
            *(_QWORD*)(v57 + 32) = 0;
            *(_BYTE*)(v57 + 16) = 1;
            v58 = v54 + 40 * v52;
            v29 = v54 + v49 + 40;
            *(_DWORD*)(v57 + 20) = 11;
            *(_DWORD*)(v57 + 24) = v26;
            memcpy_alt1(v54, v48, v49);
            *a2 = v54;
            a2[1] = v29;
            a2[2] = v58;
            if (v48 != 0) {
              v59 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v59 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v48);
            }
          }
          else {
            *(_BYTE*)(v27 + 28) = 0;
            *(_QWORD*)(v27 + 32) = 0;
            *(_QWORD*)v27 = &GameData_1a9f09e;
            *(_QWORD*)(v27 + 8) = "MID_AutoMenu_Equip";
            v29 = v27 + 40;
            *(_BYTE*)(v27 + 16) = 1;
            *(_DWORD*)(v27 + 20) = 11;
            *(_DWORD*)(v27 + 24) = v26;
          }
          a2[1] = v29;
        }
        v14 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
        v15 = a2[1];
        v60 = a2[2];
        if (v15 < v60) {
          *(_QWORD*)v15 = &GameData_1a9f09e;
          *(_QWORD*)(v15 + 8) = "MID_AutoMenu_Deposit";
          *(_BYTE*)(v15 + 16) = 1;
          v31 = 10;
          goto LABEL_101;
        }
        v32 = *a2;
        v33 = v15 - *a2;
        v62 = 1 - 0x3333333333333333LL * (v33 >> 3);
        if (v62 <= 0x666666666666666LL) {
          v63 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v60 - v32) >> 3);
          if (2 * v63 > v62) {
            v62 = 2 * v63;
          }
          if (v63 >= 0x333333333333333LL) {
            v64 = 0x666666666666666LL;
          }
          else {
            v64 = v62;
          }
          if (v64 != 0) {
            if (v64 > 0x666666666666666LL) {
              goto LABEL_120;
            }
            v65 = v14;
            v38 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      40 * v64, 16, 0);
            v14 = v65;
          }
          else {
            v38 = 0;
          }
          v46 = v38 + v33;
          *(_QWORD*)v46 = &GameData_1a9f09e;
          *(_QWORD*)(v46 + 8) = "MID_AutoMenu_Deposit";
          *(_BYTE*)(v46 + 16) = 1;
          v55 = v38 + 40 * v64;
          v56 = 10;
        LABEL_113:
          *(_DWORD*)(v46 + 20) = v56;
          *(_DWORD*)(v46 + 24) = v14;
          *(_BYTE*)(v46 + 28) = 0;
          v61 = v46 + 40;
          *(_QWORD*)(v46 + 32) = 0;
          memcpy_alt1(v38, v32, v33);
          *a2 = v38;
          a2[1] = v61;
          a2[2] = v55;
          if (v32 != 0) {
            v66 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v32);
          }
          goto LABEL_117;
        }
      }
    LABEL_119:
      GameRoutine_874520_alt1();
    }
    if ((unsigned int)(a3 - 5) >= 2) {
      if (a3 != 8) {
        return;
      }
      goto LABEL_48;
    }
    v10 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
    v11 = a2[1];
    v12 = a2[2];
    if (v11 < v12) {
      *(_BYTE*)(v11 + 28) = 0;
      *(_QWORD*)(v11 + 32) = 0;
      *(_QWORD*)v11 = &GameData_1a9f09e;
      *(_QWORD*)(v11 + 8) = "MID_AutoMenu_Arts";
      *(_BYTE*)(v11 + 16) = 1;
      *(_DWORD*)(v11 + 20) = 11;
      *(_DWORD*)(v11 + 24) = v10;
      a2[1] = v11 + 40;
      return;
    }
    v18 = *a2;
    v19 = v11 - *a2;
    v20 = 1 - 0x3333333333333333LL * (v19 >> 3);
    if (v20 > 0x666666666666666LL) {
      goto LABEL_119;
    }
    v21 = fw_memory_g_heap_manager_ptr;
    v22 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v12 - v18) >> 3);
    if (2 * v22 > v20) {
      v20 = 2 * v22;
    }
    if (v22 >= 0x333333333333333LL) {
      v23 = 0x666666666666666LL;
    }
    else {
      v23 = v20;
    }
    if (v23 != 0) {
      if (v23 > 0x666666666666666LL) {
        goto LABEL_120;
      }
      v24 = v10;
      v25 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v23, 16, 0);
      v10 = v24;
    }
    else {
      v25 = 0;
    }
    v42 = v25 + v19;
    *(_QWORD*)v42 = &GameData_1a9f09e;
    *(_QWORD*)(v42 + 8) = "MID_AutoMenu_Arts";
    *(_BYTE*)(v42 + 28) = 0;
    *(_QWORD*)(v42 + 32) = 0;
    *(_BYTE*)(v42 + 16) = 1;
    v43 = v25 + 40 * v23;
    v44 = v25 + v19 + 40;
    *(_DWORD*)(v42 + 20) = 11;
    *(_DWORD*)(v42 + 24) = v10;
    memcpy_alt1(v25, v18, v19);
    *a2 = v25;
    a2[1] = v44;
    a2[2] = v43;
    if (v18 != 0) {
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v21 + v45, v18);
    }
    a2[1] = v44;
  }
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

bool ProcEquipUnitSelectMenu_17ae020(__int64 a1, __int64 a2, char a3)
{
  _BOOL4 v4;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  __int64 v21;
  int v22;
  __int64 v23;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  char v26;
  __int64 v27;

  if (a2 == 0) {
    return false;
  }
  v27 = *(_QWORD*)(a2 + 88);
  v4 = v27 != 0;
  if (v27 != 0) {
    v7 = *(_QWORD*)(a1 + 232);
    v6 = *(_QWORD*)(a1 + 240);
    v8 = v24_.v24;
    v26 = 0;
    v24_.v24[0] = GameData_20d2228;
    v24_.v24[1] = &v27;
    v24_.v25 = v24_.v24;
    v24_.v24[2] = &v26;
    if (v6 == v7) {
      goto LABEL_15;
    }
    v10 = 0;
    v11 = GameData_212e008[0];
    while (1) {
      v12 = *(_QWORD*)(v7 + 8 * v10);
      if (v12 != 0) {
        v13 = __dynamic_cast(v12, v11, &GameData_20d2170, 0);
        if (v13 != 0) {
          v19_.v19[0] = v13;
          if (v24_.v25 == nullptr) {
            GameRoutine_60a310_alt1();
          }
          if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v24_.v25 + 48LL))(v24_.v25,
                                                                     v19_.v19) &
               1) != 0) {
          LABEL_12:
            v8 = v24_.v25;
            if (v24_.v25 != v24_.v24) {
              if (v24_.v25 != nullptr) {
                v14 = 40;
                goto LABEL_16;
              }
              goto LABEL_17;
            }
          LABEL_15:
            v14 = 32;
          LABEL_16:
            (*(void (**)(_QWORD*))(*v8 + v14))(v8);
          LABEL_17:
            v15 = *(_BYTE*)(a1 + 1392);
            v21 = a2;
            v22 = 1;
            v19_.v20 = v19_.v19;
            v23 = 0x42280000C1600000LL;
            v24_.v24[0] = GameData_20d22a8;
            v24_.v24[1] = a1;
            v24_.v25 = v24_.v24;
            v19_.v19[0] = GameData_20d23a8;
            v19_.v19[1] = a1;
            GameRoutine_17b1d00(a1, v27, &v21, (__int64)v24_.v24,
                                (__int64)v19_.v19, v26, v15, a3 & 1);
            if (v19_.v20 == v19_.v19) {
              v16 = 32;
            LABEL_21:
              (*(void (**)(__int64))(*v19_.v20 + v16))((__int64)v19_.v20);
            }
            else if (v19_.v20 != nullptr) {
              v16 = 40;
              goto LABEL_21;
            }
            if (v24_.v25 == v24_.v24) {
              v17 = 32;
            LABEL_26:
              (*(void (**)(__int64))(*v24_.v25 + v17))((__int64)v24_.v25);
            }
            else if (v24_.v25 != nullptr) {
              v17 = 40;
              goto LABEL_26;
            }
            return v4;
          }
          v7 = *(_QWORD*)(a1 + 232);
          v6 = *(_QWORD*)(a1 + 240);
        }
      }
      if (++v10 >= (unsigned __int64)((v6 - v7) >> 3)) {
        goto LABEL_12;
      }
    }
  }
  return v4;
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
  char v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  __int64 v16;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (_WORD*)*a2;
  *(_QWORD*)(v2 + 1384) = *a2;
  *(_DWORD*)(v2 + 1184) = 1;
  if (v3 == nullptr || v3[414] != 0 || v3[418] != 0 || v3[422] != 0 ||
      v3[426] != 0 || v3[430] != 0 || v3[434] != 0) {
    return BasicMenu_16e2860(v2, 0);
  }
  v5 = *(_QWORD*)(v2 + 232);
  v4 = *(_QWORD*)(v2 + 240);
  v6 = v2;
  v14_.v14[0] = GameData_20d2318;
  v14_.v14[1] = v3;
  v7 = v14_.v14;
  v14_.v15 = v14_.v14;
  if (v4 == v5) {
    goto LABEL_19;
  }
  v8 = 0;
  v9 = GameData_212e008[0];
  do {
    if (*(_QWORD*)(v5 + 8 * v8) != 0) {
      v10 = __dynamic_cast(*(_QWORD*)(v5 + 8 * v8), v9, &GameData_20d2170, 0);
      v2 = v6;
      if (v10 == 0) {
        goto LABEL_10;
      }
      v16 = v10;
      if (v14_.v15 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      v11 = (*(__int64 (**)(_QWORD*, __int64*))(*v14_.v15 + 48LL))(v14_.v15,
                                                                   &v16);
      v2 = v6;
      if ((v11 & 1) != 0) {
        break;
      }
      v5 = *(_QWORD*)(v6 + 232);
      v4 = *(_QWORD*)(v6 + 240);
    }
  LABEL_10:
    ++v8;
  } while (v8 < (v4 - v5) >> 3);
  v7 = v14_.v15;
  if (v14_.v15 != v14_.v14) {
    if (v14_.v15 != nullptr) {
      v12 = 40;
      goto LABEL_20;
    }
    return BasicMenu_16e2860(v2, 0);
  }
LABEL_19:
  v12 = 32;
LABEL_20:
  (*(void (**)(_QWORD*))(*v7 + v12))(v7);
  v2 = v6;
  return BasicMenu_16e2860(v2, 0);
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
