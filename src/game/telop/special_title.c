#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 TelopReliance_1386f80(_QWORD);
__int64 TelopSequence_1375be0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
extern __int64 (*GameData_20c9810[])();
extern __int64 (*GameData_20c99d8[])();
extern __int64 (*GameData_20c9a68[])();
extern __int64 GameData_22420e0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpecialTitle_Unknown41(__int64 a1);
__int64 SpecialTitle_Unknown33(__int64 a1);
__int64 SpecialTitle_Unknown34(__int64 result);
__int64 SpecialTitle_Unknown39(__int64 result);
__int64 SpecialTitle_Unknown44(__int64 result);
__int64 SpecialTitle_Destructor_17962a0(__int64 a1);
__int64 SpecialTitle_DeletingDestructor_1796380(__int64 a1);
__int64 SpecialTitle_Destructor_1796470(__int64 a1);
__int64 SpecialTitle_DeletingDestructor_1796550(__int64 a1);
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 GameRoutine_14a1520_alt1(__int64*, char) __asm__("GameRoutine_14a1520");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 SpecialTitle_Unknown41(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 881) & 1) != 0) {
    return 1;
  }
  else {
    return TelopSequence_1375be0();
  }
}

__int64 SpecialTitle_Unknown33(__int64 a1)
{
  __int64 v2;

  ui_LayoutAccessor_SetPriority(a1 + 168, 80);
  if ((*(_BYTE*)(a1 + 840) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 856);
  }
  else {
    v2 = a1 + 841;
  }
  LayoutAccessor_1562060(a1 + 168, "T_Txt", v2);
  return ui_LayoutAccessor_SetPaneVisible(a1 + 168, "N_Genre",
                                          *(_DWORD*)(a1 + 832) == 1);
}

__int64 SpecialTitle_Unknown34(__int64 result)
{
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _DWORD* v7;
    __int64 v8;
  } v7_;

  v3 = *(_DWORD**)(result + 864);
  if (*(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2]) {
    v4 = *(_QWORD*)(result + 872);
    v5 = result;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v7_.v8 = v4;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v7_.v8 = 0;
    }
    v7_.v7 = v3;
    result = GameRoutine_14a1390_alt1((__int64*)&v7_.v7, 1);
    v6 = v7_.v8;
    if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak_alt1(v6);
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak_alt1(v4);
    }
    **(_QWORD**)(v5 + 864) = 0;
  }
  return result;
}

__int64 SpecialTitle_Unknown39(__int64 result)
{
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _DWORD* v7;
    __int64 v8;
  } v7_;

  v3 = *(_DWORD**)(result + 864);
  if (*(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2]) {
    v4 = *(_QWORD*)(result + 872);
    v5 = result;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v7_.v8 = v4;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v7_.v8 = 0;
    }
    v7_.v7 = v3;
    result = GameRoutine_14a1520_alt1((__int64*)&v7_.v7, 1);
    v6 = v7_.v8;
    if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak_alt1(v6);
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak_alt1(v4);
    }
    **(_QWORD**)(v5 + 864) = 0;
  }
  return result;
}

__int64 SpecialTitle_Unknown44(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(_BYTE*)(result + 880) == 1) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 SpecialTitle_Destructor_17962a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 872);
  *(_QWORD*)a1 = GameData_20c9810;
  *(_QWORD*)(a1 + 824) = GameData_20c99d8;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
    a1 = v5;
    if ((*(_BYTE*)(v5 + 840) & 1) == 0) {
      goto LABEL_9;
    }
  }
  else if ((*(_BYTE*)(a1 + 840) & 1) == 0) {
    goto LABEL_9;
  }
  v2 = *(_QWORD*)(a1 + 856);
  if (v2 != 0) {
    v3 = a1;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v2);
    a1 = v3;
  }
LABEL_9:
  *(_QWORD*)(a1 + 824) = GameData_20c9a68;
  if (GameData_22420e0 == a1) {
    GameData_22420e0 = 0;
  }
  return TelopReliance_1386f80(a1);
}

__int64 SpecialTitle_DeletingDestructor_1796380(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 872);
  *(_QWORD*)a1 = GameData_20c9810;
  *(_QWORD*)(a1 + 824) = GameData_20c99d8;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 840) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 856);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20c9a68;
  if (GameData_22420e0 == a1) {
    GameData_22420e0 = 0;
  }
  TelopReliance_1386f80(a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

__int64 SpecialTitle_Destructor_1796470(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 48);
  v2 = a1 - 824;
  *(_QWORD*)(a1 - 824) = GameData_20c9810;
  *(_QWORD*)a1 = GameData_20c99d8;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
    if ((*(_BYTE*)(a1 + 16) & 1) == 0) {
      goto LABEL_9;
    }
  }
  else if ((*(_BYTE*)(a1 + 16) & 1) == 0) {
    goto LABEL_9;
  }
  v4 = *(_QWORD*)(a1 + 32);
  if (v4 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  v4);
  }
LABEL_9:
  *(_QWORD*)a1 = GameData_20c9a68;
  if (GameData_22420e0 == v2) {
    GameData_22420e0 = 0;
  }
  return TelopReliance_1386f80(v2);
}

__int64 SpecialTitle_DeletingDestructor_1796550(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 48);
  v2 = a1 - 824;
  *(_QWORD*)(a1 - 824) = GameData_20c9810;
  *(_QWORD*)a1 = GameData_20c99d8;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  *(_QWORD*)a1 = GameData_20c9a68;
  if (GameData_22420e0 == v2) {
    GameData_22420e0 = 0;
  }
  TelopReliance_1386f80(v2);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v2);
}

#pragma GCC visibility pop
