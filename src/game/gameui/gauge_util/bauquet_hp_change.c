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
__int64 BauquetHPChange_1752390_alt1(
    _QWORD* a1, __int64* a2, __int64 a3, unsigned int a4,
    unsigned int a5) __asm__("BauquetHPChange_1752390");
__int64 BauquetHPChange_Unknown5(__int64 a1);
_DWORD*
BauquetHPChange_1752840_alt1(_QWORD* a1) __asm__("BauquetHPChange_1752840");
__int64 BauquetHPChange_Unknown6(__int64 a1);
__int64
BauquetHPChange_Unknown3_alt1(__int64 a1) __asm__("BauquetHPChange_Unknown3");
__int64
BauquetHPChange_Unknown4_alt1(__int64 a1) __asm__("BauquetHPChange_Unknown4");
__int64*
RelianceExpChange_174e380_alt1(__int64*, __int64*, __int64*,
                               __int64*) __asm__("RelianceExpChange_174e380");
__int64 GaugeUtil_1752580(__int64, int);
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 BauquetHPChange_1752390(__int64* a1, __int64* a2, __int64 a3,
                                unsigned int a4, unsigned int a5);
_DWORD* GameRoutine_174d4c0_alt1(__int64*, const char*,
                                 int) __asm__("GameRoutine_174d4c0");
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
float LayoutAccessor_15638b0(__int64*, char*, char);
unsigned __int64 GameHr_1562680(unsigned __int64 result, char*, float);
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
__int64 BauquetHPChange_1752840(__int64 a1);
void BauquetHPChange_Unknown3(__int64 a1);
void BauquetHPChange_Unknown4(__int64 a1);

__int64 BauquetHPChange_Destructor(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      if (*(_QWORD*)(a1 + 128) == 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v4 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          std___1___shared_weak_count___release_weak_alt1(v4);
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
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak_alt1(v5);
        if (v3 == 0) {
          return 0;
        }
      }
      return *(float*)(a1 + 16) != 0x0.0p+0f;
    }
  }
  return result;
}

__int64 BauquetHPChange_1752390(__int64* a1, __int64* a2, __int64 a3,
                                unsigned int a4, unsigned int a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    char gap16_[8];
    __int64 v21;
  } v20_;
  struct {
    __int64 v22;
    char gap40_[8];
    __int64 v23;
  } v22_;
  struct {
    __int64 v24[2];
    __int64 v25;
    char gap80_[28];
    char v26;
  } v24_;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v11 = *a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt1(v12);
      }
      if (v11 != 0) {
        v14 = *a2;
        v13 = a2[1];
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
        }
        v15 = a1[17];
        a1[16] = v14;
        a1[17] = v13;
        if (v15 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v15);
        }
        a1[18] = a3;
        v24_.v26 = 0;
        v16 = game_Unit_GetParam_alt1(a3);
        (*(void (**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD))(*a1 + 8))(
            a1, a4, a5, 0, v16);
        LOWORD(v22_.v22) = 0;
        LOWORD(v20_.v20) = 0;
        LOBYTE(v24_.v24[0]) = 22;
        strcpy((char*)v24_.v24 + 1, "SE_SYS_Heal");
        RelianceExpChange_174e380_alt1(a1, v24_.v24, &v22_.v22, &v20_.v20);
        if ((v20_.v20 & 1) != 0 && v20_.v21 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v20_.v21);
        }
        if ((v22_.v22 & 1) != 0 && v22_.v23 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v22_.v23);
        }
        if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v24_.v25);
        }
        return GaugeUtil_1752580((__int64)a1, 0);
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

__int64 BauquetHPChange_1752840(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  float v7;
  float v8;
  float v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;

  result = *(_QWORD*)(a1 + 136);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 128);
      v4 = result;
      if (v3 != nullptr) {
        v5 = game_Unit_GetParam_alt1(*(_QWORD*)(a1 + 144));
        v6 = LayoutAccessor_155fbe0(v3, "L_HP_Gauge");
        v7 = *(float*)(a1 + 32) / (float)v5;
        GameHr_1562680((unsigned __int64)v6, "GaugeUp", 0x0.0p+0f);
        v8 = LayoutAccessor_15638b0(v6, "GaugeUp", 1);
        v9 = 0x1.0000000000000p+0f;
        if (v7 <= 0x1.0000000000000p+0f) {
          v9 = v7;
        }
        if (v7 < 0x0.0p+0f) {
          v9 = 0x0.0p+0f;
        }
        LayoutAccessor_15636c0((__int64)v6, (__int64)"GaugeUp", 1, v8 * v9);
        v10 = *(_DWORD*)(a1 + 8);
        v11 = ui_LayoutAccessor_FindPane_alt1(v3, "T_HP_Num");
        if (v11 != 0) {
          v12 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d690, 0);
          if (v12 != 0) {
            GameRoutine_156c910_alt1(v12, "%d", 1, v10);
          }
        }
        v13 = ui_LayoutAccessor_FindPane_alt1(v3, "T_HP_MaxNum");
        if (v13 != 0) {
          v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d690, 0);
          if (v14 != 0) {
            GameRoutine_156c910_alt1(v14, "%d", 1, (unsigned int)v5);
          }
        }
        v15 = LayoutAccessor_155fbe0(v3, "L_HP_Gauge");
        result = (__int64)GameRoutine_174d4c0_alt1(v15, "GaugeInside", 53);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak_alt1(v4);
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

void BauquetHPChange_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_BauquetHPChange_vtable;
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 120);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
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
      nn_mem_StandardAllocator_Free_alt1(
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
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
}

void BauquetHPChange_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = game_gameui_GaugeUtil_BauquetHPChange_vtable;
  v2 = *(_QWORD*)(a1 + 136);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  *(_QWORD*)a1 = game_gameui_GaugeUtil_ExpChange_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 104) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 120);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 96);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 72);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
    }
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, a1);
}

#pragma GCC visibility pop
