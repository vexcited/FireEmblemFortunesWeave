#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_658c00(_QWORD* result);
__int16* game_8697c0(__int16* result, char, float);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcProgressAsync_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21ee268;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
_QWORD* ProcProgressAsync_Destructor(__int64 a1);
__int64 ProcProgressAsync_DeletingDestructor(__int64 a1);

_QWORD* ProcProgressAsync_Destructor(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int16* v4;
  float v5;

  *(_QWORD*)a1 = game_ProcProgressAsync_vtable;
  v2 = game_gmap_GmapClock_instance_;
  v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    *(_QWORD*)(game_gmap_GmapClock_instance_ + 32) =
        *(_QWORD*)game_gmap_GmapClock_kDefaultTime_ptr;
    *(_DWORD*)(v2 + 40) = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + v3);
  }
  if (v2 != 0) {
    v4 = (__int16*)(v2 + 32);
  }
  else {
    v4 = (__int16*)v3;
  }
  if (v4[1] * *v4 * v4[2] != 0 ||
      (v2 != 0 ? (v4 = (__int16*)(v2 + 8)) : (v4 = (__int16*)v3), v2 == 0)) {
    v5 = 0x0.0p+0f;
  }
  else {
    v5 = *(float*)(v2 + 44);
  }
  game_8697c0(v4, 0, v5);
  GameData_21ee268 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

__int64 ProcProgressAsync_DeletingDestructor(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int16* v4;
  float v5;
  __int64 v6;

  *(_QWORD*)a1 = game_ProcProgressAsync_vtable;
  v2 = game_gmap_GmapClock_instance_;
  v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    *(_QWORD*)(game_gmap_GmapClock_instance_ + 32) =
        *(_QWORD*)game_gmap_GmapClock_kDefaultTime_ptr;
    *(_DWORD*)(v2 + 40) = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + v3);
  }
  if (v2 != 0) {
    v4 = (__int16*)(v2 + 32);
  }
  else {
    v4 = (__int16*)v3;
  }
  if (v4[1] * *v4 * v4[2] != 0 ||
      (v2 != 0 ? (v4 = (__int16*)(v2 + 8)) : (v4 = (__int16*)v3), v2 == 0)) {
    v5 = 0x0.0p+0f;
  }
  else {
    v5 = *(float*)(v2 + 44);
  }
  game_8697c0(v4, 0, v5);
  GameData_21ee268 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((_QWORD*)(a1 + 88));
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, a1);
}

#pragma GCC visibility pop
