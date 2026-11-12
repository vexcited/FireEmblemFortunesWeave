#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_15d4ba0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_167f810(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16dd280(_QWORD);
__int64 GameRoutine_187eb30(__int64, long double);
__int64 GameRoutine_187ec30(__int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20fcfb0[])();
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ProcSideStoryInfo_Unknown85_alt1(__int64 a1, long double a2) __asm__(
    "ProcSideStoryInfo_Unknown85");
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 BaseQuestMenu_Unknown85(__int64);
__int64 BasicMenu_16dd280(_QWORD*);
__int64 GameHr_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameRoutine_15d4ba0_alt1(__int64, __int64, char, unsigned __int8,
                                 char) __asm__("GameRoutine_15d4ba0");
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
unsigned int* game_gmap_SpotMgr_FindSpot_alt1(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
unsigned int* ProcSideStoryInfo_Unknown85(__int64 a1);

unsigned int* ProcSideStoryInfo_Unknown85(__int64 a1)
{
  __int64* v2;
  unsigned int* result;
  unsigned int* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    unsigned int* v14;
  } v13_;
  _QWORD v15[3];

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  BaseQuestMenu_Unknown85(a1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), "L_Info"),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_15d4ba0_alt1((__int64)v2, a1 + 1072, 0, 0, 1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_187ec30(a1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = *(unsigned int**)(**(_QWORD**)(a1 + 1080) + 200LL);
  if (result != nullptr) {
    result = game_gmap_SpotMgr_FindSpot_alt1(result),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (result != nullptr) {
      v4 = result;
      LayoutAccessor_1562cf0(a1 + 848, (unsigned int*)"Destination"),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v5 = BasicMenu_16dd280((_QWORD*)a1),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v13_.v13[0] = GameData_20fcfb0;
      v13_.v13[1] = a1;
      v13_.v14 = (unsigned int*)v13_.v13;
      if (GameData_225e7a0 != 0) {
        v7 = 32;
        result = (unsigned int*)v13_.v13;
        return (unsigned int*)(*(__int64 (**)(unsigned int*, __int64))(
            *(_QWORD*)result + v7))(result, v6);
      }
      v8 = v5;
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *v10 = v4;
      v11 = (__int64)v10;
      v15[0] = v10;
      v15[1] = v10 + 1;
      v15[2] = v10 + 1;
      GameHr_167f810(a1, 4, (__int64)v15, 0, v8, (__int64)v13_.v13),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v12, v11),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = v13_.v14;
      if (v13_.v14 == (unsigned int*)v13_.v13) {
        v7 = 32;
        return (unsigned int*)(*(__int64 (**)(unsigned int*, __int64))(
            *(_QWORD*)result + v7))(result, v6);
      }
      if (v13_.v14 != nullptr) {
        v7 = 40;
        return (unsigned int*)(*(__int64 (**)(unsigned int*, __int64))(
            *(_QWORD*)result + v7))(result, v6);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
