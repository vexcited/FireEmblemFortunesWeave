#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD);
__int64 GameRoutine_6ed500();
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_21ca350;
extern __int64 (*GameData_20f8358[])();
extern __int64 (*game_facility_anonymous_BlacksmithMenuItem_Refine_vtable[])();
extern __int64 GameData_21ca318;
extern __int64 GameData_21ca320;
extern __int64 GameData_21ca328;
extern __int64 GameData_21ca330;
extern __int64 GameData_21ca340;
extern __int64 GameData_21ca348;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212c878[6];
__int64 BlacksmithMenuItemBefore_1878850(__int64 a1, int* a2);

__int64 BlacksmithMenuItemBefore_1878850(__int64 a1, int* a2)
{
  int v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int16* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 result;
  int v16;
  __int64 v17;
  __int64 v18;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0);
  v6 = *(_QWORD*)(v3 + 1064);
  v7 = *(int*)(v3 + 1104);
  v8 = v5;
  *(_WORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_BYTE*)(v5 + 88) = 0;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_DWORD*)(v5 + 84) = 1;
  *(_QWORD*)v5 = game_facility_anonymous_BlacksmithMenuItem_Refine_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  *(_DWORD*)(v5 + 40) = v7;
  *(_QWORD*)(v5 + 96) = GameData_20f8358;
  *(_QWORD*)(v5 + 104) = v6;
  if (v6 != 0) {
    v9 = (unsigned __int16*)(v6 + 8 * v7 + 828);
  }
  else {
    v9 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v7 + 4);
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v9);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca350,
                            memory_order_acquire) &
       1) == 0) {
    v18 = v5;
    v17 = v10;
    v16 = __cxa_guard_acquire(&GameData_21ca350, &GameData_21ca318);
    v10 = v17;
    v8 = v18;
    if (v16 != 0) {
      GameData_21ca340 = 0;
      GameData_21ca348 = 0;
      *(_OWORD*)&GameData_21ca330 = 0u;
      GameData_21ca320 = 0;
      GameData_21ca328 = 0;
      GameData_21ca318 = 0;
      GameRoutine_2b0(GameRoutine_6ed500);
      __cxa_guard_release(&GameData_21ca350);
      v10 = v17;
      v8 = v18;
    }
  }
  v11 = *(_QWORD*)(v10 + 24);
  v12 = *(_QWORD*)(v11 + 536);
  v13 = *(_QWORD*)(v11 + 528);
  *(_DWORD*)(v8 + 120) = v2;
  LODWORD(v12) = -1227133513 * ((unsigned __int64)(v12 - v13) >> 3);
  v14 = (__int64*)(v13 + 56LL * v2);
  if (v2 >= (int)v12) {
    v14 = &GameData_21ca318;
  }
  *(_QWORD*)(v8 + 112) = v14;
  result = BasicMenuCursor_16e0c00(v3, v8);
  ++**(_DWORD**)(a1 + 16);
  return result;
}

#pragma GCC visibility pop
