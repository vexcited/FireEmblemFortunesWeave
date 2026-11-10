#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
__int64 GameRoutine_6fc960(_QWORD, _QWORD);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_map_BattleUtil_EachFactorSkill_7a8e00_alt1(
    _QWORD, _QWORD,
    _QWORD) __asm__("game_map_BattleUtil_EachFactorSkill_7a8e00");
extern __int64 (*GameData_1f98f48[])();
extern __int64 (*GameData_1f98fc8[])();
extern __int64 (*GameData_1f99048[])();
extern __int64 (*GameData_1f99148[])();
extern __int64 (*GameData_1f991c8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 game_map_BattleUtil_EachFactorSkill_7a8c20(__int64 result, __int64 a2,
                                                   char a3, __int64 a4,
                                                   __int64 a5);
__int64 game_map_BattleUtil_EachFactorSkill_7a8e00(__int64 result, __int64 a2,
                                                   __int64 a3);
__int64 game_map_BattleUtil_GetRevengeSkill(__int64 result, __int64 a2,
                                            __int64 a3);
__int64 game_map_BattleUtil_GetFactorSkill_lambda0_Invoke_7ab080(__int64 result,
                                                                 _DWORD* a2);
__int64 game_map_BattleUtil_GetFactorSkill_lambda0_Invoke_7ab1f0(__int64 result,
                                                                 _DWORD* a2);
_QWORD* game_map_BattleUtil_EachFactorSkill_lambda0_Clone_7ab370(_QWORD* a1);
_QWORD*
game_map_BattleUtil_EachFactorSkill_lambda0_CloneInto_7ab420(_QWORD* result,
                                                             _QWORD* a2);
__int64
game_map_BattleUtil_EachFactorSkill_lambda0_Invoke_7ab4f0(__int64 a1,
                                                          unsigned __int16* a2);
_QWORD* game_map_BattleUtil_EachFactorSkill_lambda0_Clone_7ab660(_QWORD* a1);
_QWORD*
game_map_BattleUtil_EachFactorSkill_lambda0_CloneInto_7ab710(_QWORD* result,
                                                             _QWORD* a2);
__int64
game_map_BattleUtil_EachFactorSkill_lambda0_Invoke_7ab7e0(__int64 result,
                                                          _DWORD* a2);
_QWORD* game_map_BattleUtil_EachFactorSkill_lambda1_Clone(_QWORD* a1);
_QWORD* game_map_BattleUtil_EachFactorSkill_lambda1_CloneInto(_QWORD* result,
                                                              _QWORD* a2);
__int64 game_map_BattleUtil_EachFactorSkill_lambda1_Invoke(__int64 result,
                                                           _DWORD* a2);
_QWORD* game_map_BattleUtil_GetHealPower_lambda0_Clone(_QWORD* a1);
__int64 game_map_BattleUtil_GetHealPower_lambda0_CloneInto(_QWORD* a1,
                                                           _QWORD* a2);
__int64 game_map_BattleUtil_GetHealPower_lambda0_Invoke(__int64 a1, _DWORD* a2,
                                                        __int64 a3);
__int64 game_map_BattleUtil_GetRevengeSkill_lambda0_Invoke(__int64 result,
                                                           _DWORD* a2);

__int64 game_map_BattleUtil_EachFactorSkill_7a8c20(__int64 result, __int64 a2,
                                                   char a3, __int64 a4,
                                                   __int64 a5)
{
  __int64 v6;
  __int64 v10;
  _BYTE* v11;
  _QWORD* v12;
  _QWORD* v13;
  _WORD* v14;
  __int64 i;
  __int64 v16;
  _BYTE v17[32];
  _BYTE* v18;
  char v19[32];
  _QWORD* v20;

  if (result != 0 && a2 != 0) {
    v6 = result;
    result = game_map_BattleUtil_EachFactorSkill_7a8e00_alt1(result + 1744,
                                                             a2 + 1744, a5);
    if ((a3 & 1) == 0) {
      goto LABEL_23;
    }
    v10 = *(_QWORD*)(a5 + 32);
    if (v10 != 0) {
      if (v10 == a5) {
        v18 = v17;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v17);
        v11 = v18;
      }
      else {
        v11 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        v18 = v11;
      }
    }
    else {
      v11 = nullptr;
      v18 = nullptr;
    }
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v13 = v12;
    *v12 = GameData_1f98f48;
    v12[2] = v6;
    v12[3] = a2;
    if (v11 != nullptr) {
      if (v11 == v17) {
        v12[8] = v12 + 4;
        (*(void (**)(_BYTE*))(*(_QWORD*)v11 + 24LL))(v11);
      }
      else {
        v12[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v11 + 16LL))(v11);
      }
    }
    else {
      v12[8] = 0;
    }
    v20 = v13;
    game_UnitItemList_EachItem(v6 + 828, v19);
    v14 = (_WORD*)(v6 + 876);
    for (i = 24; i != 0; --i) {
      if (*v14 != 0) {
        (*(void (**)(_QWORD*, _WORD*))(*v13 + 48LL))(v13, v14);
      }
      v14 += 4;
    }
    (*(void (**)(_QWORD*))(*v13 + 40LL))(v13);
    result = (__int64)v18;
    if (v18 == v17) {
      v16 = 32;
    }
    else {
      if (v18 == nullptr) {
        goto LABEL_23;
      }
      v16 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + v16))((__int64)v18);
  LABEL_23:
    if (a4 != 0) {
      return game_map_BattleUtil_EachFactorSkill_7a8e00_alt1(
          *(_QWORD*)(a4 + 24) + 512LL, a2 + 1744, a5);
    }
  }
  return result;
}

__int64 game_map_BattleUtil_EachFactorSkill_7a8e00(__int64 result, __int64 a2,
                                                   __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  _BYTE v32[32];
  _BYTE* v33;
  __int64 v34;
  __int64 v35;
  _BYTE v36[32];
  _BYTE* v37;
  __int64 v38;
  __int64 v39;

  if ((*(_BYTE*)(result + 88) & 6) == 0) {
    return result;
  }
  v38 = v3;
  v39 = v4;
  v5 = result;
  v34 = result;
  v35 = a2;
  v6 = *(_QWORD*)(a3 + 32);
  if (v6 != 0) {
    if (v6 == a3) {
      v37 = v36;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v6 + 24LL))(v6, v36);
      v9 = v37;
    }
    else {
      v9 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      v37 = v9;
    }
  }
  else {
    v9 = nullptr;
    v37 = nullptr;
  }
  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v12 = v11;
  *v11 = GameData_1f98fc8;
  v13 = v35;
  v11[2] = v34;
  v11[3] = v13;
  if (v9 != nullptr) {
    if (v9 == v36) {
      v11[8] = v11 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v9 + 24LL))(v9);
      if ((*(_BYTE*)(v5 + 88) & 2) == 0) {
        goto LABEL_19;
      }
    }
    else {
      v11[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v9 + 16LL))(v9);
      if ((*(_BYTE*)(v5 + 88) & 2) == 0) {
        goto LABEL_19;
      }
    }
  }
  else {
    v11[8] = 0;
    if ((*(_BYTE*)(v5 + 88) & 2) == 0) {
      goto LABEL_19;
    }
  }
  v14 = *(_QWORD*)(v5 + 32);
  v15 = *(_QWORD*)(v5 + 40);
  if ((int)((unsigned __int64)(v15 - v14) >> 2) >= 1) {
    v16 = 0;
    v17 = 0;
    v18 = GameData_212c880[0];
    v19 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v19 + 64) +
                               8LL * (*(_DWORD*)(v14 + v16) & 0xFFF)) +
                    250LL) == 1) {
        (*(void (**)(_QWORD*, __int64))(*v12 + 48LL))(v12, v14 + v16);
        v19 = *v18;
        v14 = *(_QWORD*)(v5 + 32);
        v15 = *(_QWORD*)(v5 + 40);
      }
      ++v17;
      v16 += 4;
    } while (v17 < (int)((unsigned __int64)(v15 - v14) >> 2));
  }
LABEL_19:
  (*(void (**)(_QWORD*))(*v12 + 40LL))(v12);
  if (v37 == v36) {
    v20 = 32;
  }
  else {
    if (v37 == nullptr) {
      goto LABEL_24;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v37 + v20))((__int64)v37);
LABEL_24:
  v21 = *(_QWORD*)(a3 + 32);
  if (v21 != 0) {
    if (v21 == a3) {
      v33 = v32;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v21 + 24LL))(v21, v32);
      v22 = v33;
    }
    else {
      v22 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      v33 = v22;
    }
  }
  else {
    v22 = nullptr;
    v33 = nullptr;
  }
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 80, 16, 0);
  v24 = v23;
  *v23 = GameData_1f99048;
  v23[2] = v5;
  v23[3] = a2;
  if (v22 == nullptr) {
    v23[8] = 0;
    if ((*(_BYTE*)(v5 + 88) & 4) == 0) {
      goto LABEL_41;
    }
    goto LABEL_36;
  }
  if (v22 != v32) {
    v23[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v22 + 16LL))(v22);
    if ((*(_BYTE*)(v5 + 88) & 4) == 0) {
      goto LABEL_41;
    }
  LABEL_36:
    v25 = *(_QWORD*)(v5 + 32);
    v26 = *(_QWORD*)(v5 + 40);
    if ((int)((unsigned __int64)(v26 - v25) >> 2) >= 1) {
      v27 = 0;
      v28 = 0;
      v29 = GameData_212c880[0];
      v30 = *GameData_212c880[0];
      do {
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v30 + 64) +
                                 8LL * (*(_DWORD*)(v25 + v27) & 0xFFF)) +
                      250LL) == 2) {
          (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, v25 + v27);
          v30 = *v29;
          v25 = *(_QWORD*)(v5 + 32);
          v26 = *(_QWORD*)(v5 + 40);
        }
        ++v28;
        v27 += 4;
      } while (v28 < (int)((unsigned __int64)(v26 - v25) >> 2));
    }
    goto LABEL_41;
  }
  v23[8] = v23 + 4;
  (*(void (**)(_BYTE*))(*(_QWORD*)v22 + 24LL))(v22);
  if ((*(_BYTE*)(v5 + 88) & 4) != 0) {
    goto LABEL_36;
  }
LABEL_41:
  (*(void (**)(_QWORD*))(*v24 + 40LL))(v24);
  result = (__int64)v33;
  if (v33 == v32) {
    v31 = 32;
  }
  else {
    if (v33 == nullptr) {
      return result;
    }
    v31 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v33 + v31))((__int64)v33);
}

__int64 game_map_BattleUtil_GetRevengeSkill(__int64 result, __int64 a2,
                                            __int64 a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;
  __int64 v15;

  v15 = result;
  if (result != 0) {
    v3 = result;
    if ((*(_WORD*)(result + 1536) & 0x10) == 0) {
      return 0;
    }
    v4 = v12;
    v14 = 0;
    v12[0] = GameData_1f991c8;
    v12[1] = &v15;
    v5 = *(_QWORD*)(v3 + 1496);
    v13 = v12;
    v12[2] = &v14;
    v6 = *(_QWORD*)(v3 + 1488);
    if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
      goto LABEL_14;
    }
    v7 = 0;
    v8 = 0;
    v9 = GameData_212c880[0];
    v10 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                               8LL * (*(_DWORD*)(v6 + v7) & 0xFFF)) +
                    104LL) == 4) {
        if (v13 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v13 + 48LL))(v13, v6 + v7);
        v10 = *v9;
        v5 = *(_QWORD*)(v3 + 1496);
        v6 = *(_QWORD*)(v3 + 1488);
      }
      ++v8;
      v7 += 4;
    } while (v8 < (int)((unsigned __int64)(v5 - v6) >> 2));
    v4 = v13;
    if (v13 == v12) {
    LABEL_14:
      v11 = 32;
    }
    else {
      if (v13 == nullptr) {
        return v14;
      }
      v11 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v4 + v11))(v4, a2, a3);
    return v14;
  }
  return result;
}

__int64 game_map_BattleUtil_GetFactorSkill_lambda0_Invoke_7ab080(__int64 result,
                                                                 _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned int v9;

  v2 = *(__int64**)(result + 8);
  v3 = *v2;
  if (*v2 != 0) {
    v4 = *(unsigned __int8*)(v3 + 250);
    if (v4 == 2) {
      v5 = 2;
    }
    else {
      v5 = 0;
    }
    if (v4 == 1) {
      LODWORD(v3) = 1;
    }
    else {
      LODWORD(v3) = v5;
    }
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * (*a2 & 0xFFFLL));
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 250);
    if (v7 == 2) {
      v8 = 2;
    }
    else {
      v8 = 0;
    }
    if (v7 == 1) {
      v9 = 1;
    }
    else {
      v9 = v8;
    }
    if ((unsigned int)v3 < v9) {
      *v2 = v6;
    }
  }
  return result;
}

__int64 game_map_BattleUtil_GetFactorSkill_lambda0_Invoke_7ab1f0(__int64 result,
                                                                 _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned int v9;

  v2 = *(__int64**)(result + 8);
  v3 = *v2;
  if (*v2 != 0) {
    v4 = *(unsigned __int8*)(v3 + 250);
    if (v4 == 2) {
      v5 = 2;
    }
    else {
      v5 = 0;
    }
    if (v4 == 1) {
      LODWORD(v3) = 1;
    }
    else {
      LODWORD(v3) = v5;
    }
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * (*a2 & 0xFFFLL));
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 250);
    if (v7 == 2) {
      v8 = 2;
    }
    else {
      v8 = 0;
    }
    if (v7 == 1) {
      v9 = 1;
    }
    else {
      v9 = v8;
    }
    if ((unsigned int)v3 < v9) {
      *v2 = v6;
    }
  }
  return result;
}

_QWORD* game_map_BattleUtil_EachFactorSkill_lambda0_Clone_7ab370(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1f98f48;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    if (v4 == a1 + 4) {
      v5 = result;
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[8] = (*(_QWORD *
                     (**)(_QWORD * __return_ptr, _QWORD*))(*v4 + 16LL))(v4, v4);
    }
    return v5;
  }
  else {
    result[8] = 0;
  }
  return result;
}

_QWORD*

game_map_BattleUtil_EachFactorSkill_lambda0_CloneInto_7ab420(_QWORD* result,
                                                             _QWORD* a2)
{
  __int64 v3;
  _QWORD* v4;

  *a2 = GameData_1f98f48;
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  v4 = (_QWORD*)result[8];
  if (v4 != nullptr) {
    if (v4 == result + 4) {
      a2[8] = a2 + 4;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[8] + 24LL))(
          result[8]);
    }
    else {
      result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(
          v4, result[8]);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  return result;
}

__int64

game_map_BattleUtil_EachFactorSkill_lambda0_Invoke_7ab4f0(__int64 a1,
                                                          unsigned __int16* a2)
{
  __int64 result;

  result = UnitItem_6e8bc0(a2, *(_QWORD*)(a1 + 16));
  if ((result & 1) != 0) {
    return game_map_BattleUtil_EachFactorSkill_7a8e00_alt1(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                              8LL * *a2) +
                   24LL) +
            8LL,
        *(_QWORD*)(a1 + 24) + 1744LL, a1 + 32);
  }
  return result;
}

_QWORD* game_map_BattleUtil_EachFactorSkill_lambda0_Clone_7ab660(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1f98fc8;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    if (v4 == a1 + 4) {
      v5 = result;
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[8] = (*(_QWORD *
                     (**)(_QWORD * __return_ptr, _QWORD*))(*v4 + 16LL))(v4, v4);
    }
    return v5;
  }
  else {
    result[8] = 0;
  }
  return result;
}

_QWORD*

game_map_BattleUtil_EachFactorSkill_lambda0_CloneInto_7ab710(_QWORD* result,
                                                             _QWORD* a2)
{
  __int64 v3;
  _QWORD* v4;

  *a2 = GameData_1f98fc8;
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  v4 = (_QWORD*)result[8];
  if (v4 != nullptr) {
    if (v4 == result + 4) {
      a2[8] = a2 + 4;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[8] + 24LL))(
          result[8]);
    }
    else {
      result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(
          v4, result[8]);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  return result;
}

_QWORD* game_map_BattleUtil_EachFactorSkill_lambda1_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1f99048;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = (_QWORD*)a1[8];
  if (v4 != nullptr) {
    if (v4 == a1 + 4) {
      v5 = result;
      result[8] = result + 4;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[8] = (*(_QWORD *
                     (**)(_QWORD * __return_ptr, _QWORD*))(*v4 + 16LL))(v4, v4);
    }
    return v5;
  }
  else {
    result[8] = 0;
  }
  return result;
}

_QWORD* game_map_BattleUtil_EachFactorSkill_lambda1_CloneInto(_QWORD* result,
                                                              _QWORD* a2)
{
  __int64 v3;
  _QWORD* v4;

  *a2 = GameData_1f99048;
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  v4 = (_QWORD*)result[8];
  if (v4 != nullptr) {
    if (v4 == result + 4) {
      a2[8] = a2 + 4;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[8] + 24LL))(
          result[8]);
    }
    else {
      result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v4 + 16LL))(
          v4, result[8]);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  return result;
}

__int64 game_map_BattleUtil_EachFactorSkill_lambda1_Invoke(__int64 result,
                                                           _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if ((*a2 & 0xFFF) != 0) {
    v3 = *(_QWORD*)(result + 16);
    v2 = *(_QWORD*)(result + 24);
    v5 = result;
    v6 = GameData_212c880[0];
    v7 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v7);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v7 + 273) == 0 ||
          ((v8 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8 * (*a2 & 0xFFFLL)),
            v9 = *(unsigned __int8*)(v8 + 104),
            v10 = *(unsigned __int8*)(v8 + 273), (unsigned int)(v9 - 5) >= 2)
               ? (v11 = 0)
               : (v11 = (*a2 >> 19) & 0x1F),
           v11 - ((*a2 >> 12) & 0x7F) + v10 >= 1)) {
        result = GameRoutine_6fc7a0(v7, v3);
        if ((result & 1) != 0) {
          result = GameRoutine_6fc960(v7, v2);
          if ((result & 1) != 0) {
            v14 = *(_QWORD*)(v5 + 64);
            if (v14 == 0) {
              GameRoutine_60a310(0, v12, v13);
            }
            return (*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)v14 + 48LL))(
                v14, a2);
          }
        }
      }
    }
  }
  return result;
}

_QWORD* game_map_BattleUtil_GetHealPower_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1f99148;
  v3 = result + 2;
  v4 = (_QWORD*)a1[6];
  if (v4 != nullptr) {
    if (v4 == a1 + 2) {
      result[6] = v3;
      v7 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
      result = v7;
    }
    else {
      v5 = result;
      v6 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD, _QWORD*))(
          *v4 + 16LL))(v4, a1[6], v3);
      result = v5;
      v5[6] = v6;
    }
  }
  else {
    result[6] = 0;
  }
  v8 = a1[9];
  result[8] = a1[8];
  result[9] = v8;
  return result;
}

__int64 game_map_BattleUtil_GetHealPower_lambda0_CloneInto(_QWORD* a1,
                                                           _QWORD* a2)
{
  _QWORD* v4;
  __int64 result;

  *a2 = GameData_1f99148;
  v4 = a2 + 2;
  result = a1[6];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 2) {
      a2[6] = v4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[6] + 24LL))(a1[6]);
    }
    else {
      result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 16LL))(
          result, v4);
      a2[6] = result;
    }
  }
  else {
    a2[6] = 0;
  }
  a2[9] = a1[9];
  a2[8] = a1[8];
  return result;
}

__int64 game_map_BattleUtil_GetHealPower_lambda0_Invoke(__int64 a1, _DWORD* a2,
                                                        __int64 a3)
{
  __int64 v4;
  __int64 result;
  __int64 v7;
  int v8;
  int v9;
  _BYTE v10[4];

  v4 = *(_QWORD*)(a1 + 48);
  if (v4 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  if ((result & 1) != 0) {
    v7 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v7 + 256) == 0) {
      goto LABEL_10;
    }
    v8 = **(__int16**)(v7 + 264);
    if (v8 < 1) {
      goto LABEL_10;
    }
    v9 = *(unsigned __int8*)(v7 + 250);
    if (v9 == 10) {
      result = *(_QWORD*)(a1 + 64);
      if (result == 0) {
      LABEL_10:
        v8 = 0;
        goto LABEL_11;
      }
      v10[0] = 0;
      result = game_Unit_GetParam(result, v10, 1);
      v8 = ((int)result * v8 + 99) / 100;
    }
    else if (v9 != 9) {
      goto LABEL_10;
    }
  LABEL_11:
    **(_DWORD**)(a1 + 72) += v8;
  }
  return result;
}

__int64 game_map_BattleUtil_GetRevengeSkill_lambda0_Invoke(__int64 result,
                                                           _DWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;

  v2 = **(_QWORD**)(result + 8);
  if (v2 != 0 && (*a2 & 0xFFF) != 0) {
    v4 = result;
    v5 = GameData_212c880[0];
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v6);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v6 + 273) == 0 ||
          ((v7 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL)),
            v8 = *(unsigned __int8*)(v7 + 104),
            v9 = *(unsigned __int8*)(v7 + 273), (unsigned int)(v8 - 5) >= 2)
               ? (v10 = 0)
               : (v10 = (*a2 >> 19) & 0x1F),
           v10 - ((*a2 >> 12) & 0x7F) + v9 >= 1)) {
        result = GameRoutine_6fc7a0(v6, v2 + 1744);
        if ((result & 1) != 0) {
          **(_QWORD**)(v4 + 16) =
              *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*a2 & 0xFFF));
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
