#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1657240(_QWORD* result);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ac6c8b;
extern __int64 (*game_gmap_GmapSpotInfoSetter_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
__int64 GmapSpotInfoSetterForGmap_Unknown6(__int64 a1);
__int64 GmapSpotInfoSetterForGmap_DeletingDestructor(_QWORD* a1);

__int64 GmapSpotInfoSetterForGmap_Unknown6(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  float v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  char v14;

  result = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 8), &GameData_1ac6c8b);
  if (result != 0) {
    v3 = result;
    v4 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 8), &GameData_1ac6c8b);
    v5 = __dynamic_cast(v4, GameData_212d670[0], GameData_212fc70[0], 0);
    LOWORD(v6) = *(_WORD*)(v5 + 218);
    v7 = (float)v6;
    LOWORD(v6) = *(_WORD*)(v5 + 220);
    v8 = (float)v6;
    v9 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 8), "N_DummyMargin");
    if (v9 != 0) {
      LODWORD(v10) = HIDWORD(*(_QWORD*)(v9 + 136));
    }
    else {
      v10 = 0.0;
    }
    v11 = v7 + v8;
    v12 = 540.0 - v10;
    result = Pane_58fac0(v3, "Margin_Height");
    if (result != 0) {
      v12 = v12 + *(float*)(result + *(unsigned int*)(result + 4));
    }
    if (v12 >= v11) {
      v13 = v12;
    }
    else {
      v13 = v11;
    }
    *(_DWORD*)(v3 + 84) = *(_DWORD*)(v3 + 80);
    v14 = *(_BYTE*)(v3 + 88);
    *(float*)(v3 + 80) = v13;
    *(_BYTE*)(v3 + 88) = v14 | 0x10;
  }
  return result;
}

__int64 GmapSpotInfoSetterForGmap_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = &game_gmap_GmapSpotInfoSetter_vtable;
  v2 = a1[9];
  a1[9] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = a1 + 5;
  v4 = fw_memory_g_heap_manager_ptr;
  if (a1[5] != 0) {
    GameRoutine_1657240(a1 + 5);
    if (*v3 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5, *v3);
    }
  }
  v6 = a1[2];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, a1);
}

#pragma GCC visibility pop
