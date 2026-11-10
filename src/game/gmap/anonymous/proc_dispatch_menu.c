#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
extern _UNKNOWN GameData_1a925e2;
extern _UNKNOWN* GameData_20a0e80;
extern __int64 game_GameModeData_instance_;
void* ProcDispatchMenu_Unknown67(__int64 a1);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_16f33e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_212cf80[5];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ceb0;
_QWORD* game_gmap_anonymous_ProcDispatchMenu_AddItemList_closure_Invoke(
    _QWORD* result, unsigned int* a2);
_QWORD*
game_gmap_anonymous_ProcDispatchMenu_AddItemList_closure0_Invoke(__int64 a1,
                                                                 int* a2);
__int64 game_gmap_anonymous_ProcDispatchMenu_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2);
__int64 GameRoutine_16f33e0_alt1(__int64, int, __int64,
                                 int) __asm__("GameRoutine_16f33e0");

void* ProcDispatchMenu_Unknown67(__int64 a1)
{
  __int64 v1;
  unsigned __int8 v3;

  v1 = *(_QWORD*)(a1 + 1064);
  if ((*(_BYTE*)(v1 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return &GameData_1a925e2;
  }
  v3 = GameRoutine_13261c0(v1) - 5;
  if (v3 > 4u) {
    return nullptr;
  }
  else {
    return *(&GameData_20a0e80 + v3);
  }
}

_QWORD* game_gmap_anonymous_ProcDispatchMenu_AddItemList_closure_Invoke(
    _QWORD* result, unsigned int* a2)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;

  v2 = *a2;
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v2);
  if ((int)v2 < 0) {
    v3 = GameData_212ceb0;
  }
  if (*(_BYTE*)v3 != 0 && *((_DWORD*)v3 + 1) != 0) {
    v4 = (_QWORD*)result[1];
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        104, 16, 0);
    GameRoutine_16f33e0(v6, (unsigned int)v2, v4[133], *(unsigned int*)v5[2]);
    result = BasicMenuCursor_16e0c00(v4, v6);
    ++*(_DWORD*)v5[2];
  }
  return result;
}

_QWORD*

game_gmap_anonymous_ProcDispatchMenu_AddItemList_closure0_Invoke(__int64 a1,
                                                                 int* a2)
{
  int v2;
  _QWORD* v3;
  __int64 v5;
  _QWORD* result;

  v2 = *a2;
  v3 = *(_QWORD**)(a1 + 8);
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  GameRoutine_16f33e0_alt1(v5, v2, v3[133], **(_DWORD**)(a1 + 16));
  result = BasicMenuCursor_16e0c00(v3, v5);
  ++**(_DWORD**)(a1 + 16);
  return result;
}

__int64 game_gmap_anonymous_ProcDispatchMenu_SortAndFilter_closure_Invoke(
    __int64 a1, unsigned __int8** a2)
{
  unsigned __int8* v2;
  int* v3;
  int v4;
  unsigned __int8 v5;

  v2 = *a2;
  v3 = *(int**)(a1 + 8);
  if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)*a2 + 568LL))(*a2) & 1) !=
      0) {
    v4 = v3[v2[83]];
  }
  else {
    if (((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v2 + 576LL))(v2) & 1) ==
        0) {
      v5 = v2[84];
      return v5 & 1;
    }
    v4 = *v3;
  }
  v5 = v4 > 0;
  return v5 & 1;
}

#pragma GCC visibility pop
