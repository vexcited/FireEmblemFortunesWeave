#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__int64 GameRoutine_15b59e0(__int64);
__int64 GameRoutine_15b5f20(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
bool game_Unit_IsUnlocked(__int64);
extern __int64 (*game_facility_anonymous_CmdBtlUnitSelectMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_UnitSelectMenuItem_vtable[])();
extern __int64 GameData_212c610;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2131908[20];
extern __int64 GameData_2131910[19];
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2131c90[40];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcItemShopUnitSelectMenu_Unknown153(__int64 a1, __int64 a2,
                                              __int64 a3);

__int64 ProcItemShopUnitSelectMenu_Unknown153(__int64 a1, __int64 a2,
                                              __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  bool v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v30[4];
    __int64* v31;
  } v30_;
  __int64 v32;

  v32 = 0;
  v30_.v31 = v30_.v30;
  v30_.v30[0] = GameData_2131910[0] + 16;
  v30_.v30[1] = (__int64)&v32;
  GameRoutine_15b5f20((__int64)v30_.v30);
  if (v30_.v31 == v30_.v30) {
    v6 = 32;
  }
  else {
    if (v30_.v31 == nullptr) {
      goto LABEL_6;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v30_.v31 + v6))((__int64)v30_.v31);
LABEL_6:
  if (v32 == 0) {
    v17 = *(_QWORD*)GameData_212dbb8[0];
    if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v17 + 9) != 1 ||
        *(_DWORD*)(v17 + 136) != 1) {
      goto LABEL_41;
    }
    v32 = 0;
    v30_.v31 = v30_.v30;
    v30_.v30[0] = GameData_2131908[0] + 16;
    v30_.v30[1] = (__int64)&v32;
    GameRoutine_15b59e0((__int64)v30_.v30);
    if (v30_.v31 == v30_.v30) {
      v18 = 32;
    }
    else {
      if (v30_.v31 == nullptr) {
        goto LABEL_40;
      }
      v18 = 40;
    }
    (*(void (**)(__int64))(*v30_.v31 + v18))((__int64)v30_.v31);
  LABEL_40:
    if (v32 == 0) {
      goto LABEL_41;
    }
  }
  v7 = *(_QWORD*)(a1 + 1400);
  if (v7 != 0) {
  LABEL_8:
    v8 = v7;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        112, 16, 0);
    if (a2 == 0 || (v10 = *(_QWORD*)(v8 + 1088), v11 = *(_QWORD*)(v8 + 1096),
                    v10 == v11)) {
      v15 = false;
    }
    else {
      v12 = v10 + 8;
      do {
        v13 = *(_QWORD*)(v12 - 8);
        LODWORD(v32) = 16;
        v30_.v30[0] = v13;
        v14 = game_UnitPool_Find_6ead60(v30_.v30, &v32);
        v15 = a2 == (_QWORD)v14;
        v16 = (_QWORD*)a2 == v14 || v12 == v11;
        v12 += 8;
      } while (!v16);
    }
    *(_QWORD*)(v9 + 8) = 0;
    *(_WORD*)(v9 + 16) = 0;
    *(_DWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 88) = a2;
    *(_WORD*)(v9 + 80) = 257;
    *(_BYTE*)(v9 + 82) = 1;
    if (a2 != 0) {
      *(_BYTE*)(v9 + 82) = game_Unit_IsUnlocked(a2);
    }
    v19 = game_facility_anonymous_CmdBtlUnitSelectMenuItem_vtable;
    *(_QWORD*)(v9 + 96) = a3;
    *(_BYTE*)(v9 + 104) = v15;
    goto LABEL_44;
  }
  v20 = *(_QWORD*)(a1 + 152);
  if (v20 == 0) {
    v20 = a1;
  }
  v21 = *(_QWORD*)(v20 + 32);
  if (v21 != 0) {
    v22 = __dynamic_cast(v21, GameData_212c610, GameData_2131c18[0], 0);
    if (v22 != 0) {
      v23 = v22;
      v24 = GameData_2131c18[0];
      v25 = GameData_2131c90[0];
      v26 = GameData_212c610;
      while (1) {
        v7 = __dynamic_cast(v23, v24, v25, 0);
        *(_QWORD*)(a1 + 1400) = v7;
        if (v7 != 0) {
          goto LABEL_8;
        }
        v27 = *(_QWORD*)(v23 + 152);
        if (v27 == 0) {
          v27 = v23;
        }
        v28 = *(_QWORD*)(v27 + 32);
        if (v28 != 0) {
          v23 = __dynamic_cast(v28, v26, v24, 0);
          if (v23 != 0) {
            continue;
          }
        }
        break;
      }
    }
  }
LABEL_41:
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  *(_QWORD*)(v9 + 8) = 0;
  *(_WORD*)(v9 + 16) = 0;
  *(_DWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 88) = a2;
  *(_WORD*)(v9 + 80) = 257;
  *(_BYTE*)(v9 + 82) = 1;
  if (a2 != 0) {
    *(_BYTE*)(v9 + 82) = game_Unit_IsUnlocked(a2);
  }
  v19 = game_facility_anonymous_UnitSelectMenuItem_vtable;
  *(_QWORD*)(v9 + 96) = a3;
LABEL_44:
  *(_QWORD*)v9 = v19;
  return v9;
}

#pragma GCC visibility pop
