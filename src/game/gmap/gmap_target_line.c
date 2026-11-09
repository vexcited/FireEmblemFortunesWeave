#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 TroopMgr_13460a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_21206b8[])();
extern __int64 (*game_gmap_GmapTargetLine_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c790;
_QWORD* GmapTargetLine_Destructor(_QWORD* result);
bool GmapTargetLine_Unknown2(__int64 a1);
__int64 GmapTargetLine_Unknown5(__int64 result);
__int64 GmapTargetLine_Unknown6(__int64 result);

_QWORD* GmapTargetLine_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = result[1];
  *result = game_gmap_GmapTargetLine_vtable;
  if (v1 != 0) {
    v2 = *(_QWORD**)v1;
    v3 = *(_QWORD**)(v1 + 8);
    v4 = result;
    if (*(_QWORD**)v1 != v3) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        if (*v2 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6);
        }
        ++v2;
      } while (v2 != v3);
      v2 = *(_QWORD**)v1;
    }
    *(_QWORD*)(v1 + 8) = v2;
    if (v2 != nullptr) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    v4[1] = 0;
  }
  return result;
}

bool GmapTargetLine_Unknown2(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) != **(_QWORD**)(a1 + 8);
}

__int64 GmapTargetLine_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  char v10;

  v10 = 0;
  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  for (i = *(__int64**)(v2 + 16); v3 != i; ++v3) {
    v6 = *v3;
    v7 = *(_QWORD*)(*v3 + 96);
    if (v7 != 0 && *(_BYTE*)(v7 + 32) == 1 &&
        *(_QWORD*)(v6 + 32) != *(_QWORD*)(v6 + 24) &&
        (*(_WORD*)(v6 + 544) & 3) != 2 && (*(_BYTE*)(v6 + 546) & 0xEF) == 0) {
      v8[0] = GameData_21206b8;
      v8[1] = v1;
      v8[2] = &v10;
      v8[3] = v6;
      v9 = v8;
      TroopMgr_13460a0(v8);
      result = (__int64)v9;
      if (v9 == v8) {
        v5 = 32;
      }
      else {
        if (v9 == nullptr) {
          continue;
        }
        v5 = 40;
      }
      result = (*(__int64 (**)(void))(*v9 + v5))();
    }
  }
  return result;
}

__int64 GmapTargetLine_Unknown6(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD**)v1;
  v3 = *(_QWORD**)(v1 + 8);
  if (*(_QWORD**)v1 != v3) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5);
      }
      ++v2;
    } while (v2 != v3);
    v2 = *(_QWORD**)v1;
  }
  *(_QWORD*)(v1 + 8) = v2;
  return result;
}

#pragma GCC visibility pop
