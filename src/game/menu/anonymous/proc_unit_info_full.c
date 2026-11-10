#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcUnitInfoFull_Unknown141(__int64 a1, __int64* a2);
_QWORD* GameRoutine_1606250(_QWORD* result);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157b780(_QWORD);
__int64 GameRoutine_1605f00(__int64);
__int64 GameRoutine_1617a20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1617d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_906c90(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 UnitInfoMenuItem_16061b0(__int64, __int64);
__int64 game_gameui_Util_GetMorphRage(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_16176e0(void);
void __attribute__((noreturn)) String_60a1d0(void);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure_Invoke(__int64 a1,
                                                                 int* a2);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure0_Invoke(__int64 a1,
                                                                  int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure1_Invoke(
    _QWORD* result, int* a2);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure_Invoke(_QWORD* result,
                                                                 int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure0_Invoke(
    _QWORD* result, unsigned int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure2_Invoke(
    _QWORD* result, int* a2);
unsigned __int64
game_menu_anonymous_ProcUnitInfoFull_UpdatePage04_closure_Invoke(
    unsigned __int64 result, int* a2, __int64* a3);
__int64 ProcUnitInfoFull_1617860(__int64** a1, __int64 a2, __int64 a3,
                                 __int64 a4);
__int64 ProcUnitInfoFull_1617b80(__int64** a1, __int64 a2, __int64 a3);
__int64 game_menu_anonymous_ProcUnitInfoFull_LCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64 game_menu_anonymous_ProcUnitInfoFull_RCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2);

__int64 ProcUnitInfoFull_Unknown141(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "XHelp";
    *(_QWORD*)(v15 + 8) = 0;
    v16 = v14 + 40 * v12;
    *(_BYTE*)(v15 + 16) = 0;
    *(_BYTE*)(v15 + 28) = 0;
    v6 = v14 + v8 + 40;
    *(_QWORD*)(v15 + 32) = 0;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 16) = 0;
    *(_BYTE*)(v4 + 28) = 0;
    v6 = v4 + 40;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "XHelp";
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure_Invoke(__int64 a1,
                                                                 int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *(int**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *v2;
  *v2 = v5 + 1;
  v6 = *(_QWORD*)(v3 + 8 * v5 + 1336);
  v7 = *(_QWORD*)(v3 + 1064);
  GameRoutine_1605f00(v6);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v6 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v6 + 32) = v7;
  *(_DWORD*)(v6 + 24) = 3;
  v12 = *a2;
  *(_BYTE*)(v6 + 64) = 0;
  *(_DWORD*)(v6 + 60) = v12;
  return GameRoutine_1606250((_QWORD*)v6);
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure0_Invoke(__int64 a1,
                                                                  int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *(int**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *v2;
  *v2 = v5 + 1;
  v6 = *(_QWORD*)(v3 + 8 * v5 + 1312);
  v7 = *(_QWORD*)(v3 + 1064);
  GameRoutine_1605f00(v6);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v6 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v6 + 32) = v7;
  *(_DWORD*)(v6 + 24) = 3;
  v12 = *a2;
  *(_BYTE*)(v6 + 64) = 0;
  *(_DWORD*)(v6 + 60) = v12;
  return GameRoutine_1606250((_QWORD*)v6);
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure1_Invoke(
    _QWORD* result, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = (int*)result[1];
  v3 = *v2;
  if ((int)v3 <= 2) {
    v4 = result[2];
    *v2 = v3 + 1;
    v6 = *(_QWORD*)(v4 + 8 * v3 + 1960);
    v7 = *(_QWORD*)(v4 + 1064);
    GameRoutine_1605f00(v6);
    v8 = *(_QWORD*)(v6 + 16);
    if (v8 != 0) {
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 != 0) {
        v10 = v9;
        v11 = *(_QWORD*)(v6 + 8);
        if (v11 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
    }
    *(_QWORD*)(v6 + 32) = v7;
    *(_DWORD*)(v6 + 24) = 3;
    v12 = *a2;
    *(_BYTE*)(v6 + 64) = 0;
    *(_DWORD*)(v6 + 60) = v12;
    return GameRoutine_1606250((_QWORD*)v6);
  }
  return result;
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure_Invoke(_QWORD* result,
                                                                 int* a2)
{
  __int64 v2;
  _QWORD* v4;
  char v5;
  int* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  if (*(int*)result[1] <= 6) {
    v2 = result[2];
    v4 = result;
    v5 = GameRoutine_157b780(*(_QWORD*)(v2 + 1064));
    v6 = (int*)v4[1];
    v7 = v5 ^ 1;
    v8 = *v6;
    *v6 = v8 + 1;
    v9 = *(_QWORD*)(v2 + 8 * v8 + 1376);
    v10 = *(_QWORD*)(v2 + 1064);
    GameRoutine_1605f00(v9);
    v11 = *(_QWORD*)(v9 + 16);
    if (v11 != 0) {
      v12 = std___1___shared_weak_count_lock(v11);
      if (v12 != 0) {
        v13 = v12;
        v14 = *(_QWORD*)(v9 + 8);
        if (v14 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 40LL))(v14, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
      }
    }
    *(_QWORD*)(v9 + 32) = v10;
    *(_DWORD*)(v9 + 24) = 4;
    v15 = *a2;
    *(_BYTE*)(v9 + 64) = v7 & 1;
    *(_DWORD*)(v9 + 60) = v15;
    return GameRoutine_1606250((_QWORD*)v9);
  }
  return result;
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure0_Invoke(
    _QWORD* result, unsigned int* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  char v8;
  int* v9;
  _QWORD* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  v2 = result[3];
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 1064);
  v5 = *(_QWORD*)(v4 + 1456);
  if (((v3 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v4 + 1464) - v5) >> 2 &&
      ((*(_DWORD*)(v5 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) != 0 &&
      *(int*)result[1] <= 6) {
    v6 = result;
    v8 = GameRoutine_157b780(*(_QWORD*)(v2 + 1064));
    v9 = (int*)v6[1];
    v10 = v6;
    v11 = v8 ^ 1;
    v12 = *v9;
    *v9 = v12 + 1;
    v13 = *(_QWORD*)(v2 + 8 * v12 + 1376);
    v14 = *(_QWORD*)(v2 + 1064);
    GameRoutine_1605f00(v13);
    v15 = *(_QWORD*)(v13 + 16);
    if (v15 != 0) {
      v16 = std___1___shared_weak_count_lock(v15);
      if (v16 != 0) {
        v17 = v16;
        v18 = *(_QWORD*)(v13 + 8);
        if (v18 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v18 + 40LL))(v18, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
    }
    *(_QWORD*)(v13 + 32) = v14;
    *(_DWORD*)(v13 + 24) = 4;
    v19 = *a2;
    *(_BYTE*)(v13 + 64) = v11 & 1;
    *(_DWORD*)(v13 + 60) = v19;
    result = GameRoutine_1606250((_QWORD*)v13);
    ++*(_DWORD*)v10[2];
  }
  return result;
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure2_Invoke(
    _QWORD* result, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;

  v2 = (int*)result[1];
  v3 = *v2;
  if ((int)v3 > 2) {
    return result;
  }
  v4 = result[2];
  *v2 = v3 + 1;
  v6 = *(_QWORD*)(v4 + 1064);
  v7 = *(_QWORD*)(v4 + 8 * v3 + 1824);
  GameRoutine_1605f00(v7);
  v8 = *(_QWORD*)(v7 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v7 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v7 + 32) = v6;
  *(_DWORD*)(v7 + 24) = 7;
  v12 = *a2;
  *(_DWORD*)(v7 + 60) = *a2;
  v13 = GameData_212c880[0];
  v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (v12 & 0xFFF)) +
                   592LL);
  if (v14 != 0) {
    game_gameui_Util_GetMorphRage(v6, v14);
    GameRoutine_1606250((_QWORD*)v7);
  }
  else {
    UnitInfoMenuItem_16061b0(v7, (__int64)"MID_Sys_Empty");
  }
  v15 = *(_QWORD*)(v4 + 1064);
  v16 = *(_QWORD*)(v4 + 8 * v3 + 1848);
  GameRoutine_1605f00(v16);
  v17 = *(_QWORD*)(v16 + 16);
  if (v17 != 0) {
    v18 = std___1___shared_weak_count_lock(v17);
    if (v18 != 0) {
      v19 = v18;
      v20 = *(_QWORD*)(v16 + 8);
      if (v20 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 40LL))(v20, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
  }
  *(_QWORD*)(v16 + 32) = v15;
  v21 = *v13;
  *(_DWORD*)(v16 + 24) = 8;
  v22 = *a2;
  *(_DWORD*)(v16 + 60) = *a2;
  v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (v22 & 0xFFF)) +
                   592LL);
  if (v23 != 0) {
    if (*(_WORD*)(v23 + 128) != 0) {
      v24 = *(_QWORD*)(*(_QWORD*)(v23 + 136) + 8LL);
      game_gameui_Util_GetMorphRage(v15, v23);
      if (v24 != 0) {
        GameRoutine_1606250((_QWORD*)v16);
        goto LABEL_23;
      }
    }
    else {
      game_gameui_Util_GetMorphRage(v15, v23);
    }
  }
  UnitInfoMenuItem_16061b0(v16, (__int64)"MID_Sys_Empty");
LABEL_23:
  v25 = *(_QWORD*)(v4 + 1064);
  v26 = *(_QWORD*)(v4 + 8 * v3 + 1872);
  GameRoutine_1605f00(v26);
  v27 = *(_QWORD*)(v26 + 16);
  if (v27 != 0) {
    v28 = std___1___shared_weak_count_lock(v27);
    if (v28 != 0) {
      v29 = v28;
      v30 = *(_QWORD*)(v26 + 8);
      if (v30 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v30 + 40LL))(v30, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        std___1___shared_weak_count___release_weak(v29);
      }
    }
  }
  *(_QWORD*)(v26 + 32) = v25;
  v31 = *v13;
  *(_DWORD*)(v26 + 24) = 9;
  v32 = *a2;
  *(_DWORD*)(v26 + 60) = *a2;
  v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v32 & 0xFFF)) +
                   592LL);
  if (v33 != 0 &&
      (*(_WORD*)game_gameui_Util_GetMorphRage(v25, v33) & 0xFFF) != 0) {
    return GameRoutine_1606250((_QWORD*)v26);
  }
  else {
    return (_QWORD*)UnitInfoMenuItem_16061b0(v26, (__int64)"MID_Sys_Empty");
  }
}

unsigned __int64

game_menu_anonymous_ProcUnitInfoFull_UpdatePage04_closure_Invoke(
    unsigned __int64 result, int* a2, __int64* a3)
{
  _DWORD* v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  int v14;
  char* v15;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  char* v20;

  v3 = *(_DWORD**)(result + 8);
  v4 = (unsigned int)*v3;
  if ((unsigned int)v4 > 9) {
    goto LABEL_32;
  }
  v5 = *a2;
  v6 = result;
  v7 = *a3;
  v8 = **(_QWORD**)(result + 16);
  v9 = *(_QWORD*)(*(_QWORD*)(result + 24) + 16 * v4);
  if (v5 >= 1) {
    v10 = game_util_Format("%d", v5);
    result = strlen(v10);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v11 = result;
    if (result >= 0x17) {
      if ((result | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (result | 7) + 1;
      }
      v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                  16, 0);
      v19[1] = v11;
      v20 = v12;
      v19[0] = v13 | 1;
    }
    else {
      LOBYTE(v19[0]) = 2 * result;
      v12 = (char*)v19 + 1;
      if (result == 0) {
        goto LABEL_13;
      }
    }
    result = memmove(v12, v10, v11);
  LABEL_13:
    v12[v11] = 0;
    v14 = v19[0] & 1;
    if ((v19[0] & 1) != 0) {
      v15 = v20;
    }
    else {
      v15 = (char*)v19 + 1;
    }
    if (v9 != 0 && v15 != nullptr) {
      result = ui_LayoutAccessor_FindTextBox(v8, v9);
      if (result != 0) {
        result = GameRoutine_156c5d0(result, v15, 0);
        v14 = v19[0] & 1;
      }
    }
    if (v14 != 0 && v20 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v20);
    }
    goto LABEL_27;
  }
  result = LayoutAccessor_1562060(**(_QWORD**)(result + 16), v9,
                                  "MID_Sys_ValueEmptyLong");
LABEL_27:
  if (v7 != 0) {
    v18 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 16LL * **(int**)(v6 + 8) + 8);
    if (v18 != 0) {
      result = ui_LayoutAccessor_FindTextBox(**(_QWORD**)(v6 + 16), v18);
      if (result != 0) {
        result = GameRoutine_156c5d0(result, v7, 0);
      }
    }
  }
  v3 = *(_DWORD**)(v6 + 8);
  LODWORD(v4) = *v3;
LABEL_32:
  *v3 = v4 + 1;
  return result;
}

__int64 ProcUnitInfoFull_1617860(__int64** a1, __int64 a2, __int64 a3,
                                 __int64 a4)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v4 = (char*)a1[1] - (char*)*a1;
  v5 = (v4 >> 5) + 1;
  if (v5 >> 59 != 0) {
    GameRoutine_16176e0();
  }
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = (char*)a1[2] - (char*)*a1;
  if (v8 >> 4 > v5) {
    v5 = v8 >> 4;
  }
  if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFE0LL) {
    v9 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v9 = v5;
  }
  if (v9 != 0) {
    if (v9 >> 59 != 0) {
      GameRoutine_60a210(a1);
    }
    v10 = a2;
    v11 = a3;
    v12 = a4;
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32 * v9, 16, 0);
    a4 = v12;
    a3 = v11;
    a2 = v10;
  }
  else {
    v13 = 0;
  }
  v14 = v13 + v4;
  v15 = v13 + 32 * v9;
  GameRoutine_1617a20(v13 + v4, a2, a3, a4);
  v16 = *a1;
  v17 = a1[1];
  v18 = v14 + 32;
  v19 = (_QWORD*)(v14 + (char*)*a1 - (char*)v17);
  if (v17 != *a1) {
    v20 = *a1;
    v21 = v19;
    do {
      v22 = *v20;
      v23 = v20[2];
      v21[1] = v20[1];
      v21[2] = v23;
      *v21 = v22;
      v20[1] = 0;
      v20[2] = 0;
      *v20 = 0;
      v24 = v20[3];
      v20 += 4;
      v21[3] = v24;
      v21 += 4;
    } while (v20 != v17);
    do {
      if ((*(_BYTE*)v16 & 1) != 0) {
        v25 = v16[2];
        if (v25 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v26 = 128;
          }
          else {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v26, v25);
        }
      }
      v16 += 4;
    } while (v16 != v17);
    v16 = *a1;
  }
  *a1 = v19;
  a1[1] = (__int64*)v18;
  a1[2] = (__int64*)v15;
  if (v16 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v27, v16);
  }
  return v18;
}

__int64 ProcUnitInfoFull_1617b80(__int64** a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v3 = (char*)a1[1] - (char*)*a1;
  v4 = (v3 >> 5) + 1;
  if (v4 >> 59 != 0) {
    GameRoutine_16176e0();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = (char*)a1[2] - (char*)*a1;
  if (v7 >> 4 > v4) {
    v4 = v7 >> 4;
  }
  if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFE0LL) {
    v8 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v8 = v4;
  }
  if (v8 != 0) {
    if (v8 >> 59 != 0) {
      GameRoutine_60a210(a1);
    }
    v9 = a2;
    v10 = a3;
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32 * v8, 16, 0);
    a3 = v10;
    a2 = v9;
  }
  else {
    v11 = 0;
  }
  v12 = v11 + v3;
  v13 = v11 + 32 * v8;
  GameRoutine_1617d40(v11 + v3, a2, a3);
  v14 = *a1;
  v15 = a1[1];
  v16 = v12 + 32;
  v17 = (_QWORD*)(v12 + (char*)*a1 - (char*)v15);
  if (v15 != *a1) {
    v18 = *a1;
    v19 = v17;
    do {
      v20 = *v18;
      v21 = v18[2];
      v19[1] = v18[1];
      v19[2] = v21;
      *v19 = v20;
      v18[1] = 0;
      v18[2] = 0;
      *v18 = 0;
      v22 = v18[3];
      v18 += 4;
      v19[3] = v22;
      v19 += 4;
    } while (v18 != v15);
    do {
      if ((*(_BYTE*)v14 & 1) != 0) {
        v23 = v14[2];
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v24, v23);
        }
      }
      v14 += 4;
    } while (v14 != v15);
    v14 = *a1;
  }
  *a1 = v17;
  a1[1] = (__int64*)v16;
  a1[2] = (__int64*)v13;
  if (v14 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v25, v14);
  }
  return v16;
}

__int64 game_menu_anonymous_ProcUnitInfoFull_LCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];

  v2 = *a2;
  v6[0] = v2;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
  }
  else {
    v3 = 0;
  }
  v6[1] = v3;
  if ((unsigned int)GameRoutine_906c90(game_GameModeData_instance_ + 136, v6) !=
      0) {
    return 0;
  }
  v5 = *(_QWORD*)(v2 + 392);
  if (v5 == 0) {
    return 0;
  }
  result = *(_QWORD*)(v5 + 288);
  if (result != 0) {
    return GameRoutine_975940(result) != 0;
  }
  return result;
}

__int64 game_menu_anonymous_ProcUnitInfoFull_RCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];

  v2 = *a2;
  v6[0] = v2;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
  }
  else {
    v3 = 0;
  }
  v6[1] = v3;
  if ((unsigned int)GameRoutine_906c90(game_GameModeData_instance_ + 136, v6) !=
      0) {
    return 0;
  }
  v5 = *(_QWORD*)(v2 + 392);
  if (v5 == 0) {
    return 0;
  }
  result = *(_QWORD*)(v5 + 288);
  if (result != 0) {
    return GameRoutine_975940(result) != 0;
  }
  return result;
}

#pragma GCC visibility pop
