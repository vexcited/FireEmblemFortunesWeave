#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_15e5e00(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_anonymous_ProcAutoSelect_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
ProcAutoSelect_Destructor_alt1(_QWORD* a1) __asm__("ProcAutoSelect_Destructor");
__int64 ProcAutoSelect_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ProcAutoSelect_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_15e5e00_alt1(__int64) __asm__("GameRoutine_15e5e00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcAutoSelect_Destructor(_QWORD* a1);
void ProcAutoSelect_DeletingDestructor(_QWORD* a1);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1626290(__int64);
__int64 GameHr_1627bf0(__int64);
__int64 game_cmdbtl_anonymous_16278c0(__int64 result);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool LayoutAccessor_1563380(__int64*, __int64, char);
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 ProcAutoSelect_Unknown3(__int64 a1);

void ProcAutoSelect_Destructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_cmdbtl_anonymous_ProcAutoSelect_vtable;
  v2 = a1[45];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = (_QWORD*)a1[42];
  if (v3 == a1 + 38) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_8:
  v5 = a1[34];
  if (v5 != 0) {
    a1[35] = v5;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
  }
  v7 = a1[29];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  GameRoutine_15e5e00_alt1((__int64)a1);
}

void ProcAutoSelect_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *a1 = game_cmdbtl_anonymous_ProcAutoSelect_vtable;
  v2 = a1[45];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = (_QWORD*)a1[42];
  if (v3 == a1 + 38) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_8:
  v5 = a1[34];
  v6 = fw_memory_g_heap_manager_ptr;
  if (v5 != 0) {
    v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[35] = v5;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v5);
  }
  v9 = a1[29];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  GameRoutine_15e5e00_alt1((__int64)a1);
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v10, (__int64)a1);
}

__int64 ProcAutoSelect_Unknown3(__int64 a1)
{
  __int64* v2;
  char v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  int v8;
  __int64* v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v2 = ui_LayoutAccessor_empty__ptr[0];
  v3 = *(_BYTE*)(a1 + 409);
  if (*(_QWORD*)(a1 + 168) != 0) {
    v4 = *(__int64**)(a1 + 168);
  }
  else {
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v4, (__int64)"L_KeyHelp", v3);
  if (*(_QWORD*)(a1 + 168) != 0) {
    v5 = *(_QWORD*)(a1 + 168);
  }
  else {
    v5 = (__int64)v2;
  }
  ui_LayoutAccessor_SetPaneVisible(v5, (__int64)"L_KeyHelp01",
                                   *(_BYTE*)(a1 + 409));
  if (*(_QWORD*)(a1 + 168) != 0) {
    v6 = *(_QWORD*)(a1 + 168);
  }
  else {
    v6 = (__int64)v2;
  }
  result = ui_LayoutAccessor_SetPaneVisible(v6, (__int64)"L_KeyHelp_Skip",
                                            *(_BYTE*)(a1 + 409));
  v8 = *(_DWORD*)(a1 + 208);
  if (v8 > 1) {
    if (v8 == 2) {
      if (*(_BYTE*)(a1 + 408) != 1) {
        goto LABEL_51;
      }
      if (*(_QWORD*)(a1 + 168) != 0) {
        v14 = *(_QWORD*)(a1 + 168);
      }
      else {
        v14 = (__int64)v2;
      }
      GameHr_1562680(v14, "KeyHelp_Cancel_In", 0x1.0000000000000p+0f);
      if (*(_QWORD*)(a1 + 168) != 0) {
        v15 = *(_QWORD*)(a1 + 168);
      }
      else {
        v15 = (__int64)v2;
      }
      GameHr_1562680(v15, "KeyHelp_Auto_Out", 0x1.0000000000000p+0f);
      *(_DWORD*)(a1 + 388) = 1;
      if (*(_QWORD*)(a1 + 168) != 0) {
        v16 = *(__int64**)(a1 + 168);
      }
      else {
        v16 = v2;
      }
      v17 = v16[1];
      if (v17 != 0) {
        v18 = std___1___shared_weak_count_lock(v17);
        if (v18 != 0) {
          v19 = v18;
          if (*v16 != 0) {
            ControlCreator_13633c0(*v16);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            std___1___shared_weak_count___release_weak_alt1(v19);
          }
        }
      }
      result = GameHr_1626290(a1);
      v10 = 3;
      goto LABEL_50;
    }
    if (v8 == 3) {
      v11 = *(_QWORD*)(a1 + 168) != 0 ? *(__int64**)(a1 + 168) : v2;
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          v11, (__int64)"KeyHelp_Auto_Out", 0);
      v10 = 0;
      if ((result & 1) != 0) {
      LABEL_50:
        *(_DWORD*)(a1 + 208) = v10;
      }
    }
  }
  else {
    if (v8 == 0) {
      if ((*(_BYTE*)(a1 + 408) & 1) != 0) {
        goto LABEL_51;
      }
      if (*(_QWORD*)(a1 + 168) != 0) {
        v12 = *(_QWORD*)(a1 + 168);
      }
      else {
        v12 = (__int64)v2;
      }
      GameHr_1562680(v12, "KeyHelp_Cancel_Out", 0x1.0000000000000p+0f);
      if (*(_QWORD*)(a1 + 168) != 0) {
        v13 = *(_QWORD*)(a1 + 168);
      }
      else {
        v13 = (__int64)v2;
      }
      result = GameHr_1562680(v13, "KeyHelp_Auto_In", 0x1.0000000000000p+0f);
      *(_DWORD*)(a1 + 388) = 2;
      v10 = 1;
      goto LABEL_50;
    }
    if (v8 == 1) {
      v9 = *(_QWORD*)(a1 + 168) != 0 ? *(__int64**)(a1 + 168) : v2;
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          v9, (__int64)"KeyHelp_Cancel_Out", 0);
      if ((result & 1) != 0) {
        v10 = 2;
        goto LABEL_50;
      }
    }
  }
LABEL_51:
  v20 = *(_DWORD*)(a1 + 384);
  if (v20 <= 1) {
    if (v20 != 0) {
      if (v20 != 1) {
        goto LABEL_79;
      }
      result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
          *(__int64**)(a1 + 224), (__int64)"In", 0);
      if ((result & 1) == 0) {
        goto LABEL_79;
      }
      goto LABEL_61;
    }
    if (*(_DWORD*)(a1 + 388) != 1) {
      goto LABEL_79;
    }
    v24 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 384) = 1;
    GameHr_1562680(v24, "In", 0x1.0000000000000p+0f);
  LABEL_72:
    result = game_cmdbtl_anonymous_16278c0(a1 + 224);
    goto LABEL_79;
  }
  switch (v20) {
  case 2:
    result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
        *(__int64**)(a1 + 224), (__int64)"Out", 0);
    if ((result & 1) == 0) {
      break;
    }
    if (*(_BYTE*)(*(_QWORD*)(a1 + 240) + 411LL) != 1) {
      *(_DWORD*)(a1 + 384) = 0;
      break;
    }
    v22 = 4;
  LABEL_65:
    *(_DWORD*)(a1 + 384) = v22;
    break;
  case 3:
    v23 = *(_DWORD*)(a1 + 388);
    if (v23 == 2) {
      result =
          GameHr_1562680(*(_QWORD*)(a1 + 224), "Out", 0x1.0000000000000p+0f);
      v26 = 2;
    }
    else {
      if (v23 == 3 || v23 == 4) {
        *(_DWORD*)(a1 + 388) = 0;
        goto LABEL_72;
      }
      if (*(_BYTE*)(*(_QWORD*)(a1 + 240) + 411LL) != 1) {
        break;
      }
      v26 = 4;
    }
    *(_QWORD*)(a1 + 384) = v26;
    break;
  case 4:
    v21 = *(_QWORD*)(a1 + 240);
    if ((*(_BYTE*)(v21 + 408) & 1) == 0) {
      v25 = *(_QWORD*)(a1 + 224);
      *(_DWORD*)(a1 + 384) = 0;
      result = GameHr_1562680(v25, "Out", 0x1.0000000000000p+0f);
      break;
    }
    if ((*(_BYTE*)(v21 + 411) & 1) == 0) {
    LABEL_61:
      v22 = 3;
      goto LABEL_65;
    }
    break;
  default:
    break;
  }
LABEL_79:
  if (*(_BYTE*)(a1 + 393) == 1) {
    result = GameHr_1627bf0(a1 + 224);
  }
  if (*(_BYTE*)(a1 + 392) == 1) {
    result = game_cmdbtl_anonymous_16278c0(a1 + 224);
    *(_BYTE*)(a1 + 392) = 0;
  }
  return result;
}

#pragma GCC visibility pop
