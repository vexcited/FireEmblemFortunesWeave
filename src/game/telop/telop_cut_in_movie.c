#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(__int64);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_173e750(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18d0ec0(_QWORD);
__int64 GameRoutine_18d1b90(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopCutInMovie_vtable[])();
extern __int64 GameData_2265ea0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130f90[5];
__int64 TelopCutInMovie_Unknown32(__int64 result);
__int64 TelopCutInMovie_Unknown33(__int64 a1);
__int64 TelopCutInMovie_Destructor_alt1(__int64 a1) __asm__(
    "TelopCutInMovie_Destructor");
__int64 TelopCutInMovie_DeletingDestructor_alt1(__int64 a1) __asm__(
    "TelopCutInMovie_DeletingDestructor");
void TelopReliance_1386f80(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopCutInMovie_Destructor(__int64 a1);
void TelopCutInMovie_DeletingDestructor(__int64 a1);

__int64 TelopCutInMovie_Unknown32(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;

  v1 = result;
  v2 = *GameData_2130f90[0];
  if (*GameData_2130f90[0] == 0 ||
      ((v4 = *(unsigned __int8*)(v2 + 160), v3 = v2 + 160,
        v5 = (unsigned __int64)v4 >> 1, (v4 & 1) != 0)
           ? (v6 = *(_QWORD*)(v3 + 8))
           : (v6 = v5),
       v6 == 0 || (*(_BYTE*)(v3 - 7) & 1) != 0 ||
           (*(_BYTE*)(v3 - 6) & 1) != 0 ||
           (result = GameRoutine_18d0ec0(GameData_2265ea0 + 144)) != 0 &&
               ((result = GameRoutine_18d1b90(*(_QWORD*)(result + 40))) & 1) !=
                   0)) {
    v7 = *(unsigned __int8**)(v1 + 16);
    if (v7 != nullptr) {
      v8 = *v7;
      v9 = v8 > 0x10;
      v10 = (1 << v8) & 0x1CE00;
      if (!v9 && v10 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 TelopCutInMovie_Unknown33(__int64 a1)
{
  __int64 result;
  __int64 v3;

  GameRoutine_155e830(a1 + 168, 0);
  result = ui_LayoutAccessor_FindPane(a1 + 168, "Movie");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      if ((*(_BYTE*)(a1 + 824) & 1) != 0) {
        v3 = *(_QWORD*)(a1 + 840);
      }
      else {
        v3 = a1 + 825;
      }
      return GameRoutine_173e750(a1, v3, result, 0, 0);
    }
  }
  return result;
}

void TelopCutInMovie_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_telop_TelopCutInMovie_vtable;
  if ((*(_BYTE*)(a1 + 824) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 840);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
      a1 = v2;
    }
  }
  TelopReliance_1386f80(a1);
}

void TelopCutInMovie_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_telop_TelopCutInMovie_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 824) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 840);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  TelopReliance_1386f80(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
