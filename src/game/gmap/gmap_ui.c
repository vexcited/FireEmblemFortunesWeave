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
__int64 GmapUI_17bc0a0_alt1(_QWORD* a1) __asm__("GmapUI_17bc0a0");
__int64 GameHr_1369e30(__int64, unsigned int);
__int64 GameRoutine_1366260_alt1(const char*,
                                 char) __asm__("GameRoutine_1366260");
__int64 GameRoutine_17be300_alt1(__int64) __asm__("GameRoutine_17be300");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void GameRoutine_17bd780_alt1(__int64*) __asm__("GameRoutine_17bd780");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapUI_17bc0a0(_QWORD* a1);
__int64 GmapSpotNameManager_17bddb0(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
const char* GameRoutine_1366820(const char* result);
extern __int64 (*GameData_20d89b0[])();
extern __int64 (*GameData_20d8a50[])();
void GmapUI_Destructor(_QWORD* a1);

void GmapUI_17bc0a0(_QWORD* a1)
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
  __int64* v10;
  int* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;

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
      GameHr_1369e30(ui_Manager_instance_ + 1264, v3);
      *((_BYTE*)&GameData_21f1dc8 + v3) = 1;
    }
  }
  v4 = (int*)GameData_21f1ca8;
  for (j = GameData_21f1cb0; v4 != (int*)j; ++v4) {
    v6 = *v4;
    if ((GameData_21f1dd8[v6] & 1) == 0) {
      GameRoutine_1366260_alt1(GameData_1fa9470[v6], 0);
      GameData_21f1dd8[v6] = 1;
    }
  }
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 12048, 16, 0);
  memset_alt1(v8 + 16, 0, 0x2F00u);
  if (GameData_2265728 == 0) {
    GameData_2265728 = v8;
    GameData_2265734 = 1;
  }
  *(_QWORD*)(v8 + 16) = 0;
  v9 = 0;
  *(_QWORD*)v8 = game_gmap_GmapSpotNameManager_vtable;
  *(_QWORD*)(v8 + 8) = 0;
  v10 = GameData_2131af8[0] + 2;
  v11 = GameData_2131af0[0];
  v12 = GameData_2131b00[0] + 2;
  do {
    v13 = *(_QWORD*)v7;
    v14 = v8 + v9;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 120) = 4286578687LL;
    *(_BYTE*)(v14 + 128) = 1;
    *(_DWORD*)(v14 + 129) = 0;
    *(_DWORD*)(v14 + 136) = -1;
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v13, 96, 16, 0);
    v15[1] = 0;
    v15[2] = 0;
    *v15 = v10;
    v9 += 120;
    v15[4] = 0;
    v15[5] = 0;
    v15[6] = 0;
    v15[7] = 0;
    v15[8] = 0;
    v15[9] = 0;
    v15[10] = 0;
    v15[11] = 1;
    *(_QWORD*)(v14 + 104) = v15;
    v15[3] = v12;
    *v11 = -1;
    *(_QWORD*)(v14 + 96) = v15 + 3;
  } while (v9 != 12000);
  v16 = *(_QWORD*)v7;
  GameData_2265728 = v8;
  *(_OWORD*)(v8 + 12032) = (__typeof__(*(_OWORD*)(v8 + 12032))){0};
  v17 = fw_memory_HeapManager_Allocate_alt1(v16, 5920, 16, 0);
  GameRoutine_17be300_alt1(v17);
  v18 = (__int64*)a1[1];
  a1[1] = v17;
  if (v18 != nullptr) {
    GameRoutine_17bd780_alt1(v18);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v19, (__int64)v18);
  }
}

void GmapUI_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int* v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  int v10;
  int* v11;
  __int64 j;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v2 = (_QWORD*)GameData_2265728;
  v3 = fw_memory_g_heap_manager_ptr;
  if (GameData_2265728 != 0) {
    GmapSpotNameManager_17bddb0(GameData_2265728 + 24);
    v4 = v2[2];
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    *v2 = GameData_20d8a50;
    if ((_QWORD*)GameData_2265728 == v2) {
      GameData_2265728 = 0;
      GameData_2265734 = 0;
    }
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v2);
  }
  GameData_2265728 = 0;
  v6 = (int*)GameData_21f1cc0;
  for (i = GameData_21f1cc8; v6 != (int*)i; ++v6) {
    v8 = *v6;
    if (*((_BYTE*)&GameData_21f1dc8 + v8) == 1) {
      v9 = ui_Manager_instance_ + 376LL * (unsigned int)v8;
      v10 = *(_DWORD*)(v9 + 1636);
      *(_DWORD*)(v9 + 1632) = 1;
      *(_DWORD*)(v9 + 1636) = v10 - 1;
      *((_BYTE*)&GameData_21f1dc8 + v8) = 0;
    }
  }
  v11 = (int*)GameData_21f1ca8;
  for (j = GameData_21f1cb0; v11 != (int*)j; ++v11) {
    v13 = *v11;
    if (GameData_21f1dd8[v13] == 1) {
      GameRoutine_1366820(GameData_1fa9470[v13]);
      GameData_21f1dd8[v13] = 0;
    }
  }
  v14 = (__int64*)a1[1];
  a1[1] = 0;
  if (v14 != nullptr) {
    GameRoutine_17bd780_alt1(v14);
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v15, (__int64)v14);
  }
  *a1 = GameData_20d89b0;
  if (*(_QWORD**)GameData_212d728[0] == a1) {
    *GameData_212d728[0] = 0;
    GameData_2265730 = 0;
  }
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
