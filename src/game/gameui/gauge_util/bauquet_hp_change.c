#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* GameRoutine_174d4c0(__int64, __int64, int);
_QWORD* RelianceExpChange_174e380(_QWORD*, _QWORD*, _QWORD*, _QWORD*);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_15636c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1752580(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*game_gameui_GaugeUtil_BauquetHPChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
__int64 BauquetHPChange_Destructor(__int64 a1);
__int64 BauquetHPChange_1752390(_QWORD* a1, __int64* a2, __int64 a3,
                                unsigned int a4, unsigned int a5);
__int64 BauquetHPChange_Unknown5(__int64 a1);
_DWORD* BauquetHPChange_1752840(_QWORD* a1);
__int64 BauquetHPChange_Unknown6(__int64 a1);
__int64 BauquetHPChange_Unknown3(__int64 a1);
__int64 BauquetHPChange_Unknown4(__int64 a1);

__int64 BauquetHPChange_Destructor(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      if (*(_QWORD*)(a1 + 128) == 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          std___1___shared_weak_count___release_weak();
        }
        return 0;
      }
      v3 = *(_QWORD*)(a1 + 144);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v3 == 0) {
          return 0;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak();
        if (v3 == 0) {
          return 0;
        }
      }
      return *(float*)(a1 + 16) != 0.0;
    }
  }
  return result;
}

__int64 BauquetHPChange_1752390(_QWORD* a1, __int64* a2, __int64 a3,
                                unsigned int a4, unsigned int a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[2];
  __int64 v24;
  _BYTE v25[4];

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v11 = *a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak();
      }
      if (v11 != 0) {
        v13 = *a2;
        v12 = a2[1];
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                    memory_order_relaxed);
        }
        v14 = a1[17];
        a1[16] = v13;
        a1[17] = v12;
        if (v14 != 0) {
          std___1___shared_weak_count___release_weak();
        }
        a1[18] = a3;
        v25[0] = 0;
        v15 = game_Unit_GetParam(a3, v25, 1);
        (*(void (**)(_QWORD*, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 8LL))(
            a1, a4, a5, 0, v15);
        LOWORD(v21) = 0;
        LOWORD(v19) = 0;
        LOBYTE(v23[0]) = 22;
        strcpy((char*)v23 + 1, "SE_SYS_Heal");
        RelianceExpChange_174e380(a1, v23, &v21, &v19);
        if ((v19 & 1) != 0 && v20 != 0) {
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v20);
        }
        if ((v21 & 1) != 0 && v22 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v22);
        }
        if ((v23[0] & 1) != 0 && v24 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v24);
        }
        return GameRoutine_1752580(a1, 0);
      }
    }
  }
  return result;
}

__int64 BauquetHPChange_Unknown5(__int64 a1)
{
  __int64 result;
  _BYTE v2[4];

  result = *(_QWORD*)(a1 + 144);
  if (result != 0) {
    v2[0] = 0;
    return (unsigned int)((int)game_Unit_GetParam(result, v2, 1) / 2);
  }
  return result;
}

_DWORD* BauquetHPChange_1752840(_QWORD* a1)
{
  _DWORD* result;
  __int64 v3;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[4];

  result = (_DWORD*)a1[17];
  if (result != nullptr) {
    result = (_DWORD*)std___1___shared_weak_count_lock(result);
    if (result != nullptr) {
      v3 = a1[16];
      v4 = result;
      if (v3 != 0) {
        v5 = a1[18];
        v13[0] = 0;
        game_Unit_GetParam(v5, v13, 1);
        v6 = GameRoutine_155fbe0(v3, "L_HP_Gauge");
        *(_QWORD*)&v7 = 0;
        GameRoutine_1562680(v6, "GaugeUp", v7);
        GameRoutine_15638b0(v6, "GaugeUp", 1);
        GameRoutine_15636c0(v6, "GaugeUp", 1);
        v8 = ui_LayoutAccessor_FindPane(v3, "T_HP_Num");
        if (v8 != 0) {
          v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d690, 0);
          if (v9 != 0) {
            GameRoutine_156c910(v9, "%d", 1);
          }
        }
        v10 = ui_LayoutAccessor_FindPane(v3, "T_HP_MaxNum");
        if (v10 != 0) {
          v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d690, 0);
          if (v11 != 0) {
            GameRoutine_156c910(v11, "%d", 1);
          }
        }
        v12 = GameRoutine_155fbe0(v3, "L_HP_Gauge");
        result = GameRoutine_174d4c0(v12, (__int64)"GaugeInside", 53);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 2),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_DWORD*))(*(_QWORD*)v4 + 16LL))(v4);
        return (_DWORD*)std___1___shared_weak_count___release_weak();
      }
    }
  }
  return result;
}

__int64 BauquetHPChange_Unknown6(__int64 a1)
{
  __int64 result;
  int v3;
  _BYTE v4[4];

  result = *(_QWORD*)(a1 + 144);
  if (result != 0) {
    v3 = *(_DWORD*)(a1 + 8);
    v4[0] = 0;
    result = game_Unit_GetParam(result, v4, 1);
    if (v3 >= (int)result) {
      *(_DWORD*)(a1 + 16) = 0;
      *(_BYTE*)(a1 + 28) = 1;
    }
  }
  return result;
}

__int64 BauquetHPChange_Unknown3(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_BauquetHPChange_vtable;
  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
  return result;
}

__int64 BauquetHPChange_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_BauquetHPChange_vtable;
  if (*(_QWORD*)(a1 + 136) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 96);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 72);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

#pragma GCC visibility pop
