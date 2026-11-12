#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e2280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
__int64 ProcBlacksmithUnitSelectMenu_Unknown147(__int64 a1, char a2);
__int64 BasicMenu_16e2280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcBlacksmithUnitSelectMenu_Unknown148(__int64 a1, char a2);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__int64 GameRoutine_15b59e0(__int64);
__int64 GameRoutine_15b5f20(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
bool game_Unit_IsUnlocked(__int64);
extern __int64 (*game_facility_anonymous_BlacksmithUnitGridMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_CmdBtlUnitSelectMenuItem_vtable[])();
extern __int64 GameData_212c610;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2131908[20];
extern __int64 GameData_2131910[19];
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2131c90[40];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcBlacksmithUnitSelectMenu_Unknown153(_QWORD* a1, __int64 a2);

__int64 ProcBlacksmithUnitSelectMenu_Unknown147(__int64 a1, char a2)
{
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 result;
  _QWORD* v8;

  v4 = 0;
  v5 = GameData_212e008[0];
  v6 = GameData_212e0c8[0];
  while (v4 < (int)((*(_QWORD*)(a1 + 240) - *(_QWORD*)(a1 + 232)) >> 3)) {
    result = GameRoutine_16e2280(a1, (unsigned int)v4, 0, 0);
    if (result != 0) {
      result = __dynamic_cast(result, v5, v6, 0);
      if (result != 0) {
        v8 = (_QWORD*)result;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result) & 1) !=
                0 &&
            ((*(__int64 (**)(_QWORD*))(*v8 + 40LL))(v8) & 1) != 0 &&
            ((a2 & 1) != 0 ||
             ((*(__int64 (**)(_QWORD*))(*v8 + 464LL))(v8) & 1) != 0)) {
          result = v8[11];
        }
        else {
          result = 0;
        }
      }
    }
    ++v4;
    if (result != 0) {
      return result;
    }
  }
  return 0;
}

__int64 ProcBlacksmithUnitSelectMenu_Unknown148(__int64 a1, char a2)
{
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 result;
  bool v8;
  _QWORD* v9;

  v4 = GameData_212e008[0];
  v5 = GameData_212e0c8[0];
  v6 = (*(_QWORD*)(a1 + 240) - *(_QWORD*)(a1 + 232)) >> 3;
  while (1) {
    v8 = __OFSUB__((_DWORD)v6, 1);
    LODWORD(v6) = v6 - 1;
    if ((int)v6 < 0 != v8) {
      break;
    }
    result = BasicMenu_16e2280(a1, (unsigned int)v6, 0, 0);
    if (result != 0) {
      result = __dynamic_cast(result, v4, v5, 0);
      if (result != 0) {
        v9 = (_QWORD*)result;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result) & 1) !=
                0 &&
            ((*(__int64 (**)(_QWORD*))(*v9 + 40LL))(v9) & 1) != 0 &&
            ((a2 & 1) != 0 ||
             ((*(__int64 (**)(_QWORD*))(*v9 + 464LL))(v9) & 1) != 0)) {
          result = v9[11];
        }
        else {
          result = 0;
        }
      }
    }
    if (result != 0) {
      return result;
    }
  }
  return 0;
}

__int64 ProcBlacksmithUnitSelectMenu_Unknown153(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  bool v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 (**v20)();
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  struct {
    __int64 v33[4];
    __int64* v34;
  } v33_;
  __int64 v35;

  v35 = 0;
  v33_.v34 = v33_.v33;
  v33_.v33[0] = GameData_2131910[0] + 16;
  v33_.v33[1] = (__int64)&v35;
  GameRoutine_15b5f20((__int64)v33_.v33);
  if (v33_.v34 == v33_.v33) {
    v4 = 32;
  }
  else {
    if (v33_.v34 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v33_.v34 + v4))((__int64)v33_.v34);
LABEL_6:
  if (v35 == 0) {
    v15 = *(_QWORD*)GameData_212dbb8[0];
    if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v15 + 9) != 1 ||
        *(_DWORD*)(v15 + 136) != 1) {
      goto LABEL_41;
    }
    v35 = 0;
    v33_.v34 = v33_.v33;
    v33_.v33[0] = GameData_2131908[0] + 16;
    v33_.v33[1] = (__int64)&v35;
    GameRoutine_15b59e0((__int64)v33_.v33);
    if (v33_.v34 == v33_.v33) {
      v16 = 32;
    }
    else {
      if (v33_.v34 == nullptr) {
        goto LABEL_40;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v33_.v34 + v16))((__int64)v33_.v34);
  LABEL_40:
    if (v35 == 0) {
      goto LABEL_41;
    }
  }
  v5 = a1[177];
  if (v5 != 0) {
  LABEL_8:
    v6 = v5;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        128, 16, 0);
    if (a2 == 0 ||
        (v8 = *(_QWORD*)(v6 + 1088), v9 = *(_QWORD*)(v6 + 1096), v8 == v9)) {
      v13 = false;
    }
    else {
      v10 = v8 + 8;
      do {
        v11 = *(_QWORD*)(v10 - 8);
        LODWORD(v35) = 16;
        v33_.v33[0] = v11;
        v12 = game_UnitPool_Find_6ead60(v33_.v33, &v35);
        v13 = a2 == (_QWORD)v12;
        v14 = (_QWORD*)a2 == v12 || v10 == v9;
        v10 += 8;
      } while (!v14);
    }
    v17 = a1 + 175;
    *(_QWORD*)(v7 + 8) = 0;
    *(_WORD*)(v7 + 16) = 0;
    *(_DWORD*)(v7 + 40) = 0;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_QWORD*)(v7 + 88) = a2;
    *(_WORD*)(v7 + 80) = 257;
    *(_BYTE*)(v7 + 82) = 1;
    if (a2 != 0) {
      *(_BYTE*)(v7 + 82) = game_Unit_IsUnlocked(a2);
    }
    v18 = *v17;
    v19 = v17[1];
    *(_BYTE*)(v7 + 120) = v13;
    *(_QWORD*)(v7 + 96) = 0;
    *(_QWORD*)(v7 + 104) = v18;
    v20 = game_facility_anonymous_CmdBtlUnitSelectMenuItem_vtable;
    goto LABEL_44;
  }
  v21 = (_QWORD*)a1[19];
  if (v21 == nullptr) {
    v21 = a1;
  }
  v22 = v21[4];
  if (v22 != 0) {
    v23 = __dynamic_cast(v22, GameData_212c610, GameData_2131c18[0], 0);
    if (v23 != 0) {
      v24 = v23;
      v25 = GameData_2131c18[0];
      v26 = GameData_2131c90[0];
      v27 = GameData_212c610;
      while (1) {
        v5 = __dynamic_cast(v24, v25, v26, 0);
        a1[177] = v5;
        if (v5 != 0) {
          goto LABEL_8;
        }
        v28 = *(_QWORD*)(v24 + 152);
        if (v28 == 0) {
          v28 = v24;
        }
        v29 = *(_QWORD*)(v28 + 32);
        if (v29 != 0) {
          v24 = __dynamic_cast(v29, v27, v25, 0);
          if (v24 != 0) {
            continue;
          }
        }
        break;
      }
    }
  }
LABEL_41:
  v30 = a1 + 175;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  *(_QWORD*)(v7 + 8) = 0;
  *(_WORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 88) = a2;
  *(_WORD*)(v7 + 80) = 257;
  *(_BYTE*)(v7 + 82) = 1;
  if (a2 != 0) {
    *(_BYTE*)(v7 + 82) = game_Unit_IsUnlocked(a2);
  }
  v31 = *v30;
  v19 = v30[1];
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = v31;
  v20 = game_facility_anonymous_BlacksmithUnitGridMenuItem_vtable;
LABEL_44:
  *(_QWORD*)(v7 + 112) = v19;
  *(_QWORD*)v7 = v20;
  return v7;
}

#pragma GCC visibility pop
