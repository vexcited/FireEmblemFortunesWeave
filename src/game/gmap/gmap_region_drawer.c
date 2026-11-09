#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_gmap_GmapRegionDrawer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* GmapRegionDrawer_Destructor(_QWORD* result);
__int64 GmapRegionDrawer_DeletingDestructor(_QWORD* a1);
bool GmapRegionDrawer_Unknown2(__int64 a1);
__int64 GmapRegionDrawer_Unknown5(__int64 a1);
__int64 GmapRegionDrawer_Unknown6(__int64 a1);

_QWORD* GmapRegionDrawer_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = result[1];
  *result = game_gmap_GmapRegionDrawer_vtable;
  if (v1 != 0) {
    v2 = result;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
    v2[1] = 0;
  }
  return result;
}

__int64 GmapRegionDrawer_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = a1[1];
  *a1 = game_gmap_GmapRegionDrawer_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
    a1[1] = 0;
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a1);
}

bool GmapRegionDrawer_Unknown2(__int64 a1)
{
  return (*(float (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 16LL))(
             *(_QWORD*)(a1 + 8) + 8LL) > 0.0;
}

__int64 GmapRegionDrawer_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;

  v1 = *(_QWORD*)(a1 + 8);
  v5 = 1065353216;
  if (*(_BYTE*)(v1 + 32) == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(v1 + 8) +
                                                     24LL))(v1 + 8, 1.0, 1.0);
    *(_DWORD*)(v1 + 16) = 0;
  }
  else {
    if (*(float*)(v1 + 16) <= 0.5) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(v1 + 8) + 8LL))(v1 + 8, &v5, v1 + 40);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 8) + 16LL))(v1 + 8);
      v3 = *(_QWORD*)(v1 + 8);
      v4 = v1 + 8;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 8) + 16LL))(v1 + 8);
      v3 = *(_QWORD*)(v1 + 8);
      v4 = v1 + 8;
    }
    result = (*(__int64 (**)(__int64))(v3 + 24))(v4);
    *(_DWORD*)(v1 + 16) = 1056964608;
  }
  *(_DWORD*)(v1 + 20) = 0;
  *(_WORD*)(v1 + 32) = 256;
  return result;
}

__int64 GmapRegionDrawer_Unknown6(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;

  v1 = *(_QWORD*)(a1 + 8);
  v5 = 0;
  if (*(_BYTE*)(v1 + 32) == 1) {
    result = (*(__int64 (**)(__int64, double, double))(*(_QWORD*)(v1 + 8) +
                                                       24LL))(v1 + 8, 0.0, 0.0);
    *(_DWORD*)(v1 + 16) = 0;
  }
  else {
    if (*(float*)(v1 + 16) <= 0.5) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(v1 + 8) + 8LL))(v1 + 8, &v5, v1 + 40);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 8) + 16LL))(v1 + 8);
      v3 = *(_QWORD*)(v1 + 8);
      v4 = v1 + 8;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 8) + 16LL))(v1 + 8);
      v3 = *(_QWORD*)(v1 + 8);
      v4 = v1 + 8;
    }
    result = (*(__int64 (**)(__int64))(v3 + 24))(v4);
    *(_DWORD*)(v1 + 16) = 1056964608;
  }
  *(_DWORD*)(v1 + 20) = 0;
  *(_WORD*)(v1 + 32) = 256;
  return result;
}

#pragma GCC visibility pop
