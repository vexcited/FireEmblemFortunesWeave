#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(__int64);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_telop_TelopCausationMerge_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopCausationMergeHero_Unknown44(__int64 result);
__int64 TelopCausationMergeHero_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TelopCausationMergeHero_DeletingDestructor");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 TelopCausationMerge_Unknown33(__int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 ProcObeliskUnitMergeRouteSelectMenu_158c260(__int64**, __int64, __int64,
                                                   unsigned int, char);
__n128 std___1___shared_weak_count___release_weak();
__n128 TelopCausationMergeHero_Unknown33_alt1(__int64 a1) __asm__(
    "TelopCausationMergeHero_Unknown33");
__int64 UnitVariables_6e31a0(__int64, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString32(__int64 result);
extern _UNKNOWN GameData_216de68;
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager;
unsigned __int64 GameRoutine_1130770(__int64, char*, __int64*);
void LayoutAccessor_1562680(__int64*, __int64, float);
__int64 TelopCausationMergeHero_Unknown36(__int64 a1);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 ProcObeliskUnitMergeRouteSelectMenu_158c260_alt1(
    __int64**, __int64, __int64, unsigned int,
    char) __asm__("ProcObeliskUnitMergeRouteSelectMenu_158c260");
__int64 game_Unit_Destroy_Unit_alt1(__int64) __asm__("game_Unit_Destroy_Unit");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void TelopReliance_1386f80(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 TelopCausationMergeHero_Unknown33(__int64 a1);
void TelopCausationMergeHero_DeletingDestructor(_QWORD* a1);

__int64 TelopCausationMergeHero_Unknown33(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  struct {
    __int64* v5;
    __int64 v6;
  } v5_;
  struct {
    __int64* v7;
    __int64 v8;
  } v7_;

  TelopCausationMerge_Unknown33(a1);
  LayoutAccessor_1560070_alt1((void*)(&v7_.v7), (__int64*)(a1 + 168),
                              "L_Merge");
  result = v7_.v8;
  if (v7_.v8 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v7_.v8);
    v4 = v7_.v7;
    result = v7_.v8;
    if (v7_.v8 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v7_.v8);
    }
    if (v3 != 0 && v4 != nullptr) {
      LayoutAccessor_1562cf0_alt1(a1 + 168, "HeroMerge");
      LayoutAccessor_1562cf0_alt1((__int64)v4, "HeroMerge");
      LayoutAccessor_1560070_alt1((void*)(&v5_.v5), v4, "L_InfoStatus");
      ProcObeliskUnitMergeRouteSelectMenu_158c260_alt1(
          &v5_.v5, a1 + 832, *(_QWORD*)(a1 + 824), 0, 0);
      result = v5_.v6;
      if (v5_.v6 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v5_.v6);
      }
    }
    else if (v3 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
  return result;
}

__int64 TelopCausationMergeHero_Unknown36(__int64 a1)
{
  __int64 v2;
  __int64 result;
  char* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  LayoutAccessor_1562680((__int64*)(a1 + 168), v2, 0x1.0000000000000p+0f);
  *(_DWORD*)(a1 + 420) = 0;
  LayoutAccessor_1562680((__int64*)(a1 + 168), (__int64)"Title_Wait",
                         0x1.0000000000000p+0f);
  result = UnitVariables_6e31a0(a1 + 832, *(_QWORD*)(a1 + 824), 0);
  if (GameData_21ec7b8 == 0) {
    if ((result & 1) != 0) {
      v4 = "MID_LGV_LG00_099_CausationMarged_Improve_m01";
    }
    else {
      v4 = "MID_LGV_LG00_099_CausationMarged_Keep_m01";
    }
    v5 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 1376, 16, 0);
    GameRoutine_1130770(v5, v4, nullptr);
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "talk::Seq";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = game_HashString32((__int64)"talk::Seq");
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_216de68;
    *(_QWORD*)(v5 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
    if ((result & 1) != 0 && (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v5 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
  }
  return result;
}

__int64 TelopCausationMergeHero_Unknown44(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

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
  return result;
}

void TelopCausationMergeHero_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_telop_TelopCausationMerge_vtable;
  game_Unit_Destroy_Unit_alt1((__int64)(a1 + 104));
  TelopReliance_1386f80((__int64)a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, (__int64)a1);
}

#pragma GCC visibility pop
