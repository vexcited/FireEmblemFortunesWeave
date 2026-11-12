#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
_QWORD* GameRoutine_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_120c6c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15de9d0(_QWORD, _QWORD);
__int64 GameRoutine_15dea90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8ae490(_QWORD);
__int64 GameRoutine_8aed00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8af4b0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_menu_anonymous_UnitItemMenu_vtable[])();
extern __int64 GameData_20a3328;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* game_g_empty_item_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
_QWORD* SendUnitItemMenu_Unknown128(_QWORD* result);
__int64 SendUnitItemMenu_Unknown88(__int64 a1);
__int64 SendUnitItemMenu_Unknown101(__int64 a1);
__int64 SendUnitItemMenu_16fb620(_QWORD* a1);
_BYTE* SendUnitItemMenu_Unknown142(_BYTE* result, __int64* a2);
__int64 SendUnitItemMenu_Unknown143(__int64 a1);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
extern __int64 (*GameData_20a33d0[])();
__int64 SendUnitItemMenu_Unknown8(__int64 a1);
__int64 game_menu_SendUnitItemMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 game_menu_SendUnitItemMenu_CreateBind_lambda1_Clone(__int64 a1);
__int64 game_menu_SendUnitItemMenu_CreateBind_lambda1_CloneInto(__int64 a1,
                                                                __int64 a2);
__int64 SendUnitItemMenu_16fc880(__int64 a1);
__int64 ProcList_9bd480(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 game_menu_DeleteTransportMenu_CreateBind(__int64, __int64, __int64,
                                                 char, char);
bool TransporterConst_89ca00(unsigned __int16*);
extern __int64 (*GameData_20a3350[])();
extern __int64 (*GameData_20a34c0[])();
__int64 game_menu_SendUnitItemMenu_CreateBind(__int64 a1, __int64 a2,
                                              __int64 a3, char a4, char a5,
                                              __int64 a6, __int64 a7);
_QWORD* game_menu_SendUnitItemMenu_CreateBind_lambda1_Destructor(_QWORD* a1);
_QWORD* game_menu_SendUnitItemMenu_CreateBind_lambda1_Destroy(_QWORD* a1);
__int64 game_menu_SendUnitItemMenu_ACall_lambda0_Invoke(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 game_gameui_anonymous_15d2540(__int64*, _WORD*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);
__int64 game_IsVibrationEnabled(_BYTE*);
extern __int64 game_g_game_setting;
void GameHr_157e0f0(__int64*, const char*, const char*);
__int64 SendUnitItemMenu_Unknown84(__int64 a1);

__int64 game_menu_SendUnitItemMenu_CreateBind(__int64 a1, __int64 a2,
                                              __int64 a3, char a4, char a5,
                                              __int64 a6, __int64 a7)
{
  __int64 result;
  __int64 v15;
  char v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  _BYTE* v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  struct {
    _BYTE v27[32];
    _BYTE* v28;
  } v27_;
  struct {
    _BYTE v29[32];
    _BYTE* v30;
  } v29_;
  struct {
    _QWORD v31[4];
    _QWORD* v32;
  } v31_;

  result = ProcList_9bd480(a1);
  if (result == 0) {
    return result;
  }
  v15 = result;
  v31_.v31[0] = GameData_20a3350;
  v16 = a5 & 1;
  v17 = a4 & 1;
  v31_.v32 = v31_.v31;
  game_ProcList_Call_9bcfa0(result, (__int64)v31_.v31);
  if (v31_.v32 == v31_.v31) {
    v18 = 32;
  }
  else {
    if (v31_.v32 == nullptr) {
      goto LABEL_7;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v31_.v32 + v18))((__int64)v31_.v32);
LABEL_7:
  v19 = *(_QWORD*)(a6 + 32);
  LOBYTE(v26) = v17;
  HIBYTE(v26) = v16;
  if (v19 != 0) {
    if (v19 == a6) {
      v27_.v28 = v27_.v27;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v19 + 24LL))(v19, v27_.v27);
    }
    else {
      v27_.v28 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    }
  }
  else {
    v27_.v28 = nullptr;
  }
  v20 = *(_QWORD*)(a7 + 32);
  if (v20 != 0) {
    if (v20 == a7) {
      v29_.v30 = v29_.v29;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v20 + 24LL))(v20, v29_.v29);
    }
    else {
      v29_.v30 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    }
  }
  else {
    v29_.v30 = nullptr;
  }
  v21 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  *(_QWORD*)v21 = GameData_20a33d0;
  *(_QWORD*)(v21 + 16) = a1;
  *(_QWORD*)(v21 + 24) = a2;
  *(_QWORD*)(v21 + 32) = a3;
  *(_WORD*)(v21 + 40) = v26;
  v22 = v27_.v28;
  if (v27_.v28 == nullptr) {
    *(_QWORD*)(v21 + 80) = 0;
    v23 = v29_.v30;
    if (v29_.v30 != nullptr) {
      goto LABEL_22;
    }
    goto LABEL_25;
  }
  if (v27_.v28 == v27_.v27) {
    *(_QWORD*)(v21 + 80) = v21 + 48;
    (*(void (**)(_BYTE*))(*(_QWORD*)v22 + 24LL))(v22);
    v23 = v29_.v30;
    if (v29_.v30 != nullptr) {
      goto LABEL_22;
    }
  LABEL_25:
    *(_QWORD*)(v21 + 128) = 0;
    goto LABEL_27;
  }
  *(_QWORD*)(v21 + 80) =
      (*(__int64 (**)(__int64))(*(_QWORD*)v27_.v28 + 16LL))((__int64)v27_.v28);
  v23 = v29_.v30;
  if (v29_.v30 == nullptr) {
    goto LABEL_25;
  }
LABEL_22:
  if (v23 == v29_.v29) {
    *(_QWORD*)(v21 + 128) = v21 + 96;
    (*(void (**)(_BYTE*))(*(_QWORD*)v23 + 24LL))(v23);
  }
  else {
    *(_QWORD*)(v21 + 128) =
        (*(__int64 (**)(_BYTE*))(*(_QWORD*)v23 + 16LL))(v23);
  }
LABEL_27:
  v31_.v32 = (_QWORD*)v21;
  game_ProcList_Call_9bcfa0(v15, (__int64)v31_.v31);
  (*(void (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21);
  if (v29_.v30 == v29_.v29) {
    v24 = 32;
    goto LABEL_31;
  }
  if (v29_.v30 != nullptr) {
    v24 = 40;
  LABEL_31:
    (*(void (**)(__int64))(*(_QWORD*)v29_.v30 + v24))((__int64)v29_.v30);
  }
  result = (__int64)v27_.v28;
  if (v27_.v28 == v27_.v27) {
    v25 = 32;
  }
  else {
    if (v27_.v28 == nullptr) {
      return result;
    }
    v25 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v27_.v28 + v25))(
      (__int64)v27_.v28);
}

_QWORD* SendUnitItemMenu_Unknown128(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = (_QWORD*)result[134];
  if (v1[1] != *v1) {
    v2 = result;
    v3 = 0;
    v4 = 0;
    v5 = game_g_empty_item_ptr;
    do {
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
      v7 = v2[133];
      *(_WORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 48) = 0;
      *(_QWORD*)(v6 + 56) = 0;
      v8 = v6;
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      *(_WORD*)(v6 + 80) = 257;
      *(_BYTE*)(v6 + 82) = 1;
      *(_DWORD*)(v6 + 40) = v4;
      *(_QWORD*)v6 = game_menu_anonymous_UnitItemMenu_vtable;
      *(_QWORD*)(v6 + 8) = 0;
      *(_BYTE*)(v6 + 104) = 0;
      *(_QWORD*)(v6 + 88) = v7;
      *(_QWORD*)(v6 + 96) = v1;
      if ((__int64)(v1[1] - *v1) >> 3 <= (unsigned __int64)(v3 >> 32)) {
        v9 = (__int64)v5;
      }
      else {
        v9 = *v1 + (v3 >> 29);
      }
      *(_BYTE*)(v8 + 104) = GameRoutine_8ae490(v9);
      result = GameRoutine_16e0c00(v2, v8);
      v1 = (_QWORD*)v2[134];
      ++v4;
      v3 += 0x100000000LL;
    } while (v4 < (__int64)(v1[1] - *v1) >> 3);
  }
  return result;
}

__int64 SendUnitItemMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  signed __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  int v18;
  unsigned __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  int v24;
  __int64 v25;
  struct {
    __int64* v26;
    __int64 v27;
  } v26_;
  struct {
    __int64* v28;
    __int64 v29;
  } v28_;

  LayoutAccessor_1560070((void*)(&v28_.v28), (__int64*)(a1 + 848),
                         "L_UnitInfo");
  if (v28_.v29 != 0) {
    v2 = std___1___shared_weak_count_lock_alt1(v28_.v29);
    v3 = v28_.v28;
    if (v28_.v29 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v28_.v29);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        goto LABEL_20;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v5 = *(_QWORD*)(a1 + 1064);
      v6 = std___1___shared_weak_count_lock_alt1(v2);
      if (v6 != 0) {
        v7 = v6;
        LayoutAccessor_1571860(v3, v5, 1, 0, 0, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak_alt1(v7);
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock_alt1(v2);
      if (v8 != 0) {
        v9 = v8;
        LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)"List00");
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak_alt1(v9);
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v2);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
LABEL_20:
  LayoutAccessor_1560070((void*)(&v26_.v26), (__int64*)(a1 + 952),
                         "L_MenuItem_InfoHeader");
  if (v26_.v27 != 0) {
    v10 = std___1___shared_weak_count_lock_alt1(v26_.v27);
    if (v10 != 0) {
      v11 = v10;
      if (v26_.v26 != nullptr) {
        GameHr_157e0f0(v26_.v26, "MID_SysMenu_Item", "MID_Sys_WeaponEndure");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
    }
    if (v26_.v27 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v26_.v27);
    }
  }
  GameHr_1562680(a1 + 952, (unsigned int*)"Menu_07_Header",
                 0x1.0000000000000p+0f);
  v12 = *(char**)(a1 + 232);
  v13 = *(char**)(a1 + 240);
  if (v12 == v13) {
    goto LABEL_36;
  }
  v14 = v13 - v12;
  v15 = (unsigned __int64)(v13 - v12 + 0x7FFFFFFF8LL) >> 3;
  if ((v15 & 0x80000000) != 0) {
    goto LABEL_36;
  }
  v16 = v14 - 8;
  v17 = ((unsigned __int64)(v14 - 8) >> 3) + 1;
  if (v16 < 0x18) {
    v18 = 0;
  LABEL_32:
    v19 = v17 & 3;
    if (v19 != 0) {
      v20 = v15 - v18;
      while (v20 != 0) {
        v12 += 8;
        --v20;
        if (--v19 == 0) {
          goto LABEL_36;
        }
      }
      goto LABEL_55;
    }
  LABEL_36:
    v21 = 0;
    v22 = *(_QWORD*)(a1 + 336);
    if (v22 == 0) {
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v25 = 0;
  while ((_DWORD)v15 != (_DWORD)v25) {
    if ((_DWORD)v25 + 1 == (_DWORD)v15) {
      v12 += 8;
      break;
    }
    if ((_DWORD)v25 + 2 == (_DWORD)v15) {
      v12 += 16;
      break;
    }
    if ((_DWORD)v25 + 3 == (_DWORD)v15) {
      v12 += 24;
      break;
    }
    v12 += 32;
    v25 += 4;
    v18 = v25;
    if ((v17 & 0x3FFFFFFFFFFFFFFCLL) == v25) {
      goto LABEL_32;
    }
  }
LABEL_55:
  v21 = *(_QWORD*)v12;
  v22 = *(_QWORD*)(a1 + 336);
  if (v22 != 0) {
  LABEL_37:
    (*(void (**)(__int64))(*(_QWORD*)v22 + 168LL))(v22);
  }
LABEL_38:
  *(_QWORD*)(a1 + 336) = v21;
  BasicMenu_16dea40(a1, 1, 0, 0);
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
    game_IsVibrationEnabled((_BYTE*)(game_g_game_setting + 712));
    result = *(_QWORD*)(a1 + 336);
    v24 = 4;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
      if ((result & 1) != 0) {
        v24 = 4;
      }
      else {
        v24 = 0;
      }
    }
  }
  else {
    v24 = 4;
  }
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v24;
  return result;
}

__int64 SendUnitItemMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20a3328, 0);
    if (result != 0) {
      v3 = result;
      LayoutAccessor_1560070((void*)(&v9_.v9), (__int64*)(a1 + 848),
                             "L_ItemDetail");
      v4 = *(_QWORD**)(v3 + 96);
      v5 = *(int*)(v3 + 40);
      result = v9_.v10;
      v6 = v5 >= (__int64)(v4[1] - *v4) >> 3 ? game_g_empty_item_ptr
                                             : (__int64*)(*v4 + 8 * v5);
      if (v9_.v10 != 0) {
        v7 = std___1___shared_weak_count_lock_alt1(v9_.v10);
        if (v7 != 0) {
          v8 = v7;
          if (v9_.v9 != nullptr) {
            game_gameui_anonymous_15d2540(v9_.v9, v6);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak_alt1(v8);
          }
        }
        result = v9_.v10;
        if (v9_.v10 != 0) {
          return std___1___shared_weak_count___release_weak_alt1(v9_.v10);
        }
      }
    }
  }
  return result;
}

__int64 SendUnitItemMenu_Unknown101(__int64 a1)
{
  __int64 v2;

  if ((*(_BYTE*)(a1 + 1080) & 1) != 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 1168);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  return 3;
}

__int64 SendUnitItemMenu_16fb620(_QWORD* a1)
{
  __int64 result;
  unsigned __int64 v3;
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  _BOOL4 v12;
  __int64 v13;
  unsigned int v14;
  _QWORD* v15;
  unsigned __int64 v16;
  _DWORD* v17;
  _DWORD* v18;
  _DWORD* v19;
  int v20;
  int v21;
  _DWORD* v22;

  result = a1[42];
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20a3328, 0);
    if (result != 0) {
      v3 = *(int*)(result + 40);
      v4 = result;
      v5 = a1[30] == a1[29]
               ? -1
               : (unsigned __int64)(a1[30] - a1[29] + 0x7FFFFFFF8LL) >> 3;
      v6 = *(_QWORD**)(result + 96);
      v7 = v3 >= (__int64)(v6[1] - *v6) >> 3 ? game_g_empty_item_ptr
                                             : (__int64*)(*v6 + 8 * v3);
      v8 = *((_BYTE*)v7 + 3);
      v9 = *(unsigned __int16*)v7;
      v10 = *GameData_212c878[0];
      if ((v8 & 1) != 0) {
        v13 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v9);
        v11 = *(unsigned __int8*)(v13 + 72) < 8u;
        v12 = *(unsigned __int8*)(v13 + 72) == 13;
      }
      else {
        v11 = false;
        v12 = false;
        v13 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * v9);
      }
      v14 = *(unsigned __int8*)(v13 + 73);
      result = GameRoutine_8aed00(a1[134], a1[133], (unsigned int)v3);
      if ((result & 1) != 0) {
        v15 = (_QWORD*)a1[134];
        v16 = *(int*)(v4 + 40);
        v17 = (_DWORD*)v15[1];
        if (v16 < ((__int64)v17 - *v15) >> 3) {
          v18 = (_DWORD*)(*v15 + 8 * v16);
          if (v18 + 2 != v17) {
            v19 = v18;
            do {
              v20 = v19[2];
              v19 += 2;
              v21 = v18[3];
              *v18 = v20;
              v18[1] = v21;
              v22 = v18 + 4;
              v18 = v19;
            } while (v22 != v17);
            v18 = v19;
          }
          v15[1] = v18;
          v15 = (_QWORD*)a1[134];
        }
        GameRoutine_8af4b0(v15, a1[133]);
        if ((_DWORD)v3 != v5) {
          GameRoutine_120c6c0(a1[133], 5, 1);
          if (v11) {
            GameRoutine_15de9d0(a1[133], 1);
          }
          else if (v12) {
            GameRoutine_15dea90(a1[133], v14, 1);
          }
        }
        result = a1[140];
        if (result != 0) {
          return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
        }
      }
    }
  }
  return result;
}

_BYTE* SendUnitItemMenu_Unknown142(_BYTE* result, __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  if ((result[1080] & 1) == 0) {
    result =
        (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 192LL))(result);
    v3 = a2[1];
    v4 = a2[2];
    if (v3 >= v4) {
      v6 = *a2;
      v7 = v3 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v4 - v6) >> 3);
      if (2 * v10 > v8) {
        v8 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v8;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = (int)result;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
        LODWORD(result) = v12;
      }
      else {
        v13 = 0;
      }
      v14 = v13 + v7;
      *(_QWORD*)v14 = &GameData_1a9f09e;
      *(_QWORD*)(v14 + 8) = "MID_KeyHelp_Cancel";
      *(_BYTE*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_BYTE*)(v14 + 16) = 1;
      v15 = v13 + 40 * v11;
      *(_DWORD*)(v14 + 20) = 1;
      *(_DWORD*)(v14 + 24) = (_DWORD)result;
      v5 = v13 + v7 + 40;
      result = (_BYTE*)memcpy(v13, v6, v7);
      *a2 = v13;
      a2[1] = v5;
      a2[2] = v15;
      if (v6 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v16 = 56;
        }
        result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16, v6);
      }
    }
    else {
      *(_BYTE*)(v3 + 28) = 0;
      *(_QWORD*)(v3 + 32) = 0;
      *(_QWORD*)v3 = &GameData_1a9f09e;
      *(_QWORD*)(v3 + 8) = "MID_KeyHelp_Cancel";
      v5 = v3 + 40;
      *(_BYTE*)(v3 + 16) = 1;
      *(_DWORD*)(v3 + 20) = 1;
      *(_DWORD*)(v3 + 24) = (_DWORD)result;
    }
    a2[1] = v5;
  }
  return result;
}

__int64 SendUnitItemMenu_Unknown143(__int64 a1)
{
  return 2 * (unsigned int)*(unsigned __int8*)(a1 + 1081);
}

__int64 SendUnitItemMenu_Unknown8(__int64 a1)
{
  return 2 * (unsigned int)*(unsigned __int8*)(a1 + 25);
}

__int64 game_menu_SendUnitItemMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;
  const char* v7;

  v2 = *a2;
  v7 = "MID_SendUnitMenu_ItemFull_Message";
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, &v7);
  if (result != 0) {
    v6 = nullptr;
    GameRoutine_6680e0(v5, result + 1248);
    result = (__int64)v6;
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(void*))(*(_QWORD*)v6 + v4))((void*)v6);
  }
  return result;
}

_QWORD* game_menu_SendUnitItemMenu_CreateBind_lambda1_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;

  *a1 = GameData_20a33d0;
  v2 = a1 + 12;
  v3 = (_QWORD*)a1[16];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  result = (_QWORD*)a1[10];
  if (result == a1 + 6) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
}

__int64 game_menu_SendUnitItemMenu_CreateBind_lambda1_Clone(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  *(_QWORD*)v2 = GameData_20a33d0;
  v3 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(v2 + 16) = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(v2 + 24) = v3;
  *(_QWORD*)(v2 + 32) = *(_QWORD*)(a1 + 32);
  *(_WORD*)(v2 + 40) = *(_WORD*)(a1 + 40);
  v4 = *(_QWORD*)(a1 + 80);
  if (v4 == 0) {
    *(_QWORD*)(v2 + 80) = 0;
    v5 = *(_QWORD*)(a1 + 128);
    if (v5 != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v4 == a1 + 48) {
    *(_QWORD*)(v2 + 80) = v2 + 48;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
    v5 = *(_QWORD*)(a1 + 128);
    if (v5 != 0) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(v2 + 128) = 0;
    return v2;
  }
  *(_QWORD*)(v2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  v5 = *(_QWORD*)(a1 + 128);
  if (v5 == 0) {
    goto LABEL_9;
  }
LABEL_6:
  if (v5 == a1 + 96) {
    *(_QWORD*)(v2 + 128) = v2 + 96;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  else {
    *(_QWORD*)(v2 + 128) = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  }
  return v2;
}

__int64 game_menu_SendUnitItemMenu_CreateBind_lambda1_CloneInto(__int64 a1,
                                                                __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  *(_QWORD*)a2 = GameData_20a33d0;
  v5 = *(_QWORD*)(a1 + 16);
  v4 = *(_QWORD*)(a1 + 24);
  v6 = *(_QWORD*)(a1 + 32);
  *(_WORD*)(a2 + 40) = *(_WORD*)(a1 + 40);
  *(_QWORD*)(a2 + 24) = v4;
  *(_QWORD*)(a2 + 32) = v6;
  *(_QWORD*)(a2 + 16) = v5;
  v7 = *(_QWORD*)(a1 + 80);
  if (v7 == 0) {
    *(_QWORD*)(a2 + 80) = 0;
    result = *(_QWORD*)(a1 + 128);
    if (result != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v7 == a1 + 48) {
    *(_QWORD*)(a2 + 80) = a2 + 48;
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 80) + 24LL))(*(_QWORD*)(a1 + 80));
    result = *(_QWORD*)(a1 + 128);
    if (result != 0) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(a2 + 128) = 0;
    return result;
  }
  *(_QWORD*)(a2 + 80) = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  result = *(_QWORD*)(a1 + 128);
  if (result == 0) {
    goto LABEL_9;
  }
LABEL_6:
  if (result == a1 + 96) {
    *(_QWORD*)(a2 + 128) = a2 + 96;
    return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 128) + 24LL))(
        *(_QWORD*)(a1 + 128));
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    *(_QWORD*)(a2 + 128) = result;
  }
  return result;
}

_QWORD* game_menu_SendUnitItemMenu_CreateBind_lambda1_Destroy(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;

  v2 = a1 + 12;
  v3 = (_QWORD*)a1[16];
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  result = (_QWORD*)a1[10];
  if (result == a1 + 6) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
}

__int64 game_menu_SendUnitItemMenu_ACall_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int16* v5;
  char v7;
  __int64 v8;
  __int64 v9;
  struct {
    _BYTE v10[32];
    _BYTE* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(a1 + 24) & 4) == 0 ||
      ((v2 = *(_QWORD*)(a1 + 16), v3 = *(int*)(v2 + 40),
        v4 = *(_QWORD**)(v2 + 96), v3 >= (__int64)(v4[1] - *v4) >> 3)
           ? (v5 = (unsigned __int16*)game_g_empty_item_ptr)
           : (v5 = (unsigned __int16*)(*v4 + 8 * v3)),
       TransporterConst_89ca00(v5))) {
    SendUnitItemMenu_16fb620((_QWORD*)v1);
    return 5;
  }
  v7 = *(_BYTE*)(v1 + 1081);
  v10_.v11 = nullptr;
  v12_.v12[0] = GameData_20a34c0;
  v12_.v12[1] = v1;
  v12_.v13 = v12_.v12;
  game_menu_DeleteTransportMenu_CreateBind(v1, (__int64)v12_.v12,
                                           (__int64)v10_.v10, v7, 0);
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10_.v11 + v8))((__int64)v10_.v11);
LABEL_12:
  if (v12_.v13 == v12_.v12) {
    v9 = 32;
    goto LABEL_16;
  }
  if (v12_.v13 != nullptr) {
    v9 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v12_.v13 + v9))((__int64)v12_.v13);
  }
  return 2;
}

__int64 SendUnitItemMenu_16fc880(__int64 a1)
{
  SendUnitItemMenu_16fb620(*(_QWORD**)(a1 + 8));
  return 5;
}

#pragma GCC visibility pop
