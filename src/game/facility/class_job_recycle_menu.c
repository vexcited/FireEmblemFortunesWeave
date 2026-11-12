#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15760a0(_QWORD, _QWORD);
__int64 GameRoutine_18b7c20(_QWORD);
__int64 GameRoutine_18b8160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
extern __int64 GameData_20e1d88;
extern __int64 GameData_21c9988;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20e21b8[3];
__int64 ClassJobRecycleMenu_Unknown88(__int64 a1);
__int64 GameRoutine_16dd280(_QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
extern __int64 GameData_2259540;
bool game_facility_ClassJobRecycleMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2,
                                                                    __int64 a3);
__int64
game_facility_ClassJobRecycleMenu_OnUnbindImpl_lambda0_Invoke(__int64 result);
__int64 game_facility_ClassJobRecycleMenu_ACall_lambda0_Invoke(__int64 a1);
__int64 game_facility_ClassJobRecycleMenu_ACall_lambda2_Invoke(__int64 a1);
__attribute__((swiftcall)) void game_95eea0(PSEUDO_X8, __int64 result, __int64);
__attribute__((swiftcall)) void game_95f260(PSEUDO_X8, __int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_20e1dc8[])();
extern __int64 (*GameData_20e1e48[])();
extern __int64 (*game_facility_ClassJobRecycleMenuItem_vtable[])();
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void BasicMenu_16e1f40(_QWORD*, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void game_facility_ClassJobRecycleMenu_AddItemList(_QWORD* a1);
__int64 game_facility_ClassJobRecycleMenu_SortAndFilter(_QWORD* a1);
__int64
game_facility_ClassJobRecycleMenu_AddItemList_lambda0_Invoke(__int64 a1,
                                                             __int64* a2);

void game_facility_ClassJobRecycleMenu_AddItemList(_QWORD* a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64*** v9;
  __int64** v10;
  __int64** v11;
  __int64* v12;
  __int64 v13;
  _BOOL4 v14;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  __int64 v17;
  __int64 v18;

  v1 = (__int64*)GameData_21c9868;
  v2 = GameData_21c9870;
  if (GameData_21c9868 == GameData_21c9870) {
    return;
  }
  while (2) {
    v7 = *v1;
    game_95f260((void*)((__int16*)v15_.v15), *v1);
    if ((v15_.v15[0] & 0x800) == 0) {
      goto LABEL_6;
    }
    v8 = v15_.v15;
    v17 = 0;
    v15_.v15[0] = GameData_20e1dc8;
    v15_.v15[1] = v7;
    v15_.v15[2] = &v17;
    v9 = *(__int64****)(game_UnitListSet_instance_ + 24);
    v15_.v16 = v15_.v15;
    v11 = *v9;
    v10 = v9[1];
    if (*v9 == v10) {
    LABEL_3:
      v4 = 32;
      goto LABEL_4;
    }
    do {
      v12 = *v11;
      v13 = (__int64)v11[1];
      if (v13 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v12 != nullptr) {
        v14 = (v12[6] & 0x20) == 0;
        if (v13 == 0) {
          goto LABEL_18;
        }
      }
      else {
        v14 = false;
        if (v13 == 0) {
          goto LABEL_18;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
        if (!v14) {
          goto LABEL_10;
        }
        goto LABEL_19;
      }
    LABEL_18:
      if (v14) {
      LABEL_19:
        v18 = **v11;
        if (v15_.v16 == nullptr) {
          GameRoutine_60a310();
        }
        (*(void (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16, &v18);
      }
    LABEL_10:
      v11 += 2;
    } while (v11 != v10);
    v8 = v15_.v16;
    if (v15_.v16 == v15_.v15) {
      goto LABEL_3;
    }
    if (v15_.v16 != nullptr) {
      v4 = 40;
    LABEL_4:
      (*(void (**)(__int64))(*v8 + v4))((__int64)v8);
    }
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        104, 16, 0);
    v6 = v17;
    *(_WORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_BYTE*)(v5 + 82) = 1;
    *(_WORD*)(v5 + 80) = 257;
    *(_QWORD*)(v5 + 88) = v6;
    *(_QWORD*)(v5 + 96) = v7;
    *(_QWORD*)v5 = game_facility_ClassJobRecycleMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    BasicMenuCursor_16e0c00(a1, v5);
  LABEL_6:
    if (++v1 != (__int64*)v2) {
      continue;
    }
    break;
  }
}

__int64 game_facility_ClassJobRecycleMenu_SortAndFilter(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  struct {
    _BYTE v6[32];
    _BYTE* v7;
  } v6_;

  v6_.v7 = nullptr;
  v4_.v4[0] = GameData_20e1e48;
  v4_.v5 = v4_.v4;
  BasicMenu_16e1f40(a1, (__int64)v6_.v6, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v1 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v4_.v5 + v1))((__int64)v4_.v5);
LABEL_6:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v3 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v6_.v7 + v3))((__int64)v6_.v7);
}

__int64 ClassJobRecycleMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  __int64* v18;
  __int64* v19;
  _QWORD* v20;
  char* v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20e1d88, 0);
    if (result != 0) {
      v3 = (__int64*)(a1 + 848);
      v4 = (_QWORD*)result;
      v17[0] = "L_Info/L_InfoTitle";
      v17[1] = 18;
      GameRoutine_13fa520((void*)&v18, a1 + 848, v17);
      result = (__int64)v19;
      if (v19 != nullptr) {
        v5 = std___1___shared_weak_count_lock(v19);
        v6 = v18;
        result = (__int64)v19;
        if (v19 != nullptr) {
          result = std___1___shared_weak_count___release_weak(v19);
        }
        if (v5 == 0 || v6 == nullptr) {
          if (v5 == 0) {
            return result;
          }
          goto LABEL_24;
        }
        GameRoutine_18b7c20(v6);
        v8 = v4[11];
        v7 = v4[12];
        if (v8 == 0) {
          goto LABEL_20;
        }
        v9 = *(_QWORD*)(v8 + 392);
        if (v9 == 0 || v7 != GameData_21c9988) {
          goto LABEL_20;
        }
        if (*(_QWORD*)(*(_QWORD*)(v9 + 24) + 1784LL) != 0) {
          v9 = *(_QWORD*)(*(_QWORD*)(v9 + 24) + 1784LL);
        }
        v11 = *(unsigned __int8*)(v9 + 52) - 1;
        if (v11 < 3) {
          v12 = GameData_20e21b8[(unsigned __int8)v11];
        }
        else {
        LABEL_20:
          v12 = *(char**)(v7 + 40);
          if (v12 == nullptr) {
            goto LABEL_22;
          }
        }
        v24 = -1;
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v13 = *msg_MessageManager_instance__ptr[0];
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v31 = -1;
        v32 = -1;
        v33 = -1;
        v34 = -1;
        v35 = -1;
        v18 = GameData_212e348 + 2;
        v19 = (__int64*)0xFFFF0001FFFF0000LL;
        v20 = (_QWORD*)0xFFFF0004FFFF0002LL;
        v21 = (char*)0xFFFF0006FFFF0005LL;
        v36 = 8;
        v22 = -65529;
        v23 = -65528;
        v12 = (char*)GameRoutine_a4dbe0(v13, v12, 0, &v18);
      LABEL_22:
        GameRoutine_18b8160(v6, v12, 0);
        v15 = v4[11];
        v14 = v4[12];
        v37 = 0;
        v17[0] = v14;
        v38 = v15;
        v18 = v3;
        v19 = &v38;
        v20 = v17;
        v21 = &v37;
        GameRoutine_15760a0(&v18, 1);
        GameRoutine_15760a0(&v18, 2);
        v16 = (*(__int64 (**)(_QWORD*))(*v4 + 24LL))(v4);
        GameRoutine_1562060(v3, "T_Job", v16);
        result = ui_LayoutAccessor_FindAlignment(v3, "A_JobIcon");
        if (result != 0) {
          result = Alignment_56b600();
        }
      LABEL_24:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
  }
  return result;
}

__int64

game_facility_ClassJobRecycleMenu_AddItemList_lambda0_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64* v5;
  __int16 v6;

  v2 = *a2;
  result =
      X8CALL_X0(__int64, game_95eea0((void*)(&v6), *a2, *(_QWORD*)(a1 + 8)));
  if ((v6 & 0x800) != 0) {
    v5 = *(__int64**)(a1 + 16);
    if (*v5 == 0) {
      *v5 = v2;
    }
  }
  return result;
}

bool game_facility_ClassJobRecycleMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2,
                                                                    __int64 a3)
{
  int v3;
  int v4;

  if (*(_QWORD*)(*(_QWORD*)a2 + 88LL) != 0) {
    v3 = 10000;
  }
  else {
    v3 = 0;
  }
  if (*(_QWORD*)(*(_QWORD*)a3 + 88LL) != 0) {
    v4 = 10000;
  }
  else {
    v4 = 0;
  }
  return v3 - *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)a2 + 96LL) + 16LL) >
         v4 - *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)a3 + 96LL) + 16LL);
}

__int64

game_facility_ClassJobRecycleMenu_OnUnbindImpl_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  unsigned int v5;

  v1 = GameData_2259540;
  if (GameData_2259540 != 0) {
    v2 = *(_QWORD*)(result + 8);
    v3 = GameRoutine_16dd280(v2);
    v4 = v3 - (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 224LL))(v2);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 496LL))(v2);
    return game_gameui_anonymous_ProcGameUIFade_In(v1, v4, 0, v5, 1, v2);
  }
  return result;
}

__int64 game_facility_ClassJobRecycleMenu_ACall_lambda0_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 1064) = 1;
  return 2;
}

__int64 game_facility_ClassJobRecycleMenu_ACall_lambda2_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 1065) = 1;
  return 2;
}

#pragma GCC visibility pop
