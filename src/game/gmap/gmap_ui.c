#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212d708;
__int64 game_gmap_GmapUI_Impl_UpdateCorpsInfo_closure_Invoke(__int64 result,
                                                             __int64 a2);
__int64 GameRoutine_1366260(_QWORD, _QWORD);
__int64 GameRoutine_17bd780(_QWORD);
__int64 GameRoutine_17be300(void);
__int64 RenderTask_1369e30(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gmap_GmapSpotNameManager_vtable[])();
extern __int64 (*game_gmap_GmapUI_vtable[])();
extern __int64* GameData_212d728[2];
extern __int64* GameData_2131af8[9];
extern __int64* GameData_2131b00[8];
extern __int64 GameData_21f1ca8;
extern __int64 GameData_21f1cb0;
extern __int64 GameData_21f1cc0;
extern __int64 GameData_21f1cc8;
extern __int64 GameData_21f1dc8;
extern __int64 GameData_2265728;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern char* GameData_1fa9470[9];
extern char GameData_21f1dd8[];
extern int* GameData_2131af0[10];
extern int GameData_2265730;
extern int GameData_2265734;
__int64 GmapUI_17bc0a0(_QWORD* a1);

__int64 GmapUI_17bc0a0(_QWORD* a1)
{
  int* v1;
  __int64 i;
  __int64 v3;
  int* v4;
  __int64 j;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64** v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;

  if (*GameData_212d728[0] == 0) {
    *GameData_212d728[0] = (__int64)a1;
    GameData_2265730 = 1;
  }
  *a1 = game_gmap_GmapUI_vtable;
  a1[1] = 0;
  v1 = (int*)GameData_21f1cc0;
  for (i = GameData_21f1cc8; v1 != (int*)i; ++v1) {
    v3 = *v1;
    if ((*((_BYTE*)&GameData_21f1dc8 + v3) & 1) == 0) {
      RenderTask_1369e30(ui_Manager_instance_ + 1264, (unsigned int)v3);
      *((_BYTE*)&GameData_21f1dc8 + v3) = 1;
    }
  }
  v4 = (int*)GameData_21f1ca8;
  for (j = GameData_21f1cb0; v4 != (int*)j; ++v4) {
    v6 = *v4;
    if ((GameData_21f1dd8[v6] & 1) == 0) {
      GameRoutine_1366260(GameData_1fa9470[v6], 0);
      GameData_21f1dd8[v6] = 1;
    }
  }
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      12048, 16, 0);
  memset(v8 + 16, 0, 12032, v9, v10, v11);
  if (GameData_2265728 == 0) {
    GameData_2265728 = v8;
    GameData_2265734 = 1;
  }
  *(_QWORD*)(v8 + 16) = 0;
  v12 = 0;
  *(_QWORD*)v8 = game_gmap_GmapSpotNameManager_vtable;
  *(_QWORD*)(v8 + 8) = 0;
  v13 = GameData_2131af8[0] + 2;
  v14 = GameData_2131af0[0];
  v15 = GameData_2131b00[0] + 2;
  do {
    v16 = *(_QWORD*)v7;
    v17 = v8 + v12;
    *(_QWORD*)(v17 + 104) = 0;
    *(_QWORD*)(v17 + 112) = 0;
    *(_QWORD*)(v17 + 88) = 0;
    *(_QWORD*)(v17 + 96) = 0;
    *(_QWORD*)(v17 + 72) = 0;
    *(_QWORD*)(v17 + 80) = 0;
    *(_QWORD*)(v17 + 56) = 0;
    *(_QWORD*)(v17 + 64) = 0;
    *(_QWORD*)(v17 + 40) = 0;
    *(_QWORD*)(v17 + 48) = 0;
    *(_QWORD*)(v17 + 24) = 0;
    *(_QWORD*)(v17 + 32) = 0;
    *(_QWORD*)(v17 + 120) = 4286578687LL;
    *(_BYTE*)(v17 + 128) = 1;
    *(_DWORD*)(v17 + 129) = 0;
    *(_DWORD*)(v17 + 136) = -1;
    v18 = (__int64**)fw_memory_HeapManager_Allocate(v16, 96, 16, 0);
    v18[1] = nullptr;
    v18[2] = nullptr;
    *v18 = v13;
    v12 += 120;
    v18[4] = nullptr;
    v18[5] = nullptr;
    v18[6] = nullptr;
    v18[7] = nullptr;
    v18[8] = nullptr;
    v18[9] = nullptr;
    v18[10] = nullptr;
    v18[11] = (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
    *(_QWORD*)(v17 + 104) = v18;
    v18[3] = v15;
    *v14 = -1;
    *(_QWORD*)(v17 + 96) = v18 + 3;
  } while (v12 != 12000);
  v19 = *(_QWORD*)v7;
  GameData_2265728 = v8;
  *(_OWORD*)(v8 + 12032) = (__typeof__(*(_OWORD*)(v8 + 12032))){0};
  v20 = fw_memory_HeapManager_Allocate(v19, 5920, 16, 0);
  result = GameRoutine_17be300();
  v22 = a1[1];
  a1[1] = v20;
  if (v22 != 0) {
    GameRoutine_17bd780(v22);
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v23 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v23);
  }
  return result;
}

__int64 game_gmap_GmapUI_Impl_UpdateCorpsInfo_closure_Invoke(__int64 result,
                                                             __int64 a2)
{
  if (**(_QWORD**)a2 == *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL)) {
    **(_DWORD**)(result + 8) = *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  }
  return result;
}

#pragma GCC visibility pop
