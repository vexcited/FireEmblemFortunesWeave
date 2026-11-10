#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool GmapSpotMenuItem_IsActive(__int64 a1);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_gmap_GmapSpotMenuItem_vtable[])();
extern __int64* GameData_212d630[11];
extern __int64* GameData_2131b00[8];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GmapSpotMenuItem_DeletingDestructor(__int64 a1);

bool GmapSpotMenuItem_IsActive(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 88);
  return v1 != 0 && *(_BYTE*)(v1 + 176) != 1;
}

__int64 GmapSpotMenuItem_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *(_QWORD*)a1 = game_gmap_GmapSpotMenuItem_vtable;
  v2 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 104) = GameData_2131b00[0] + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 == 0) {
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(a1 + 144);
  if (v2 == v4) {
  LABEL_11:
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
    goto LABEL_14;
  }
  do {
    v6 = *(_QWORD**)(v4 - 16);
    v7 = v4 - 48;
    if ((_QWORD*)(v4 - 48) == v6) {
      v5 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v6 + v5))((__int64)v6);
      goto LABEL_6;
    }
    if (v6 != nullptr) {
      v5 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v4 = v7;
  } while (v7 != v2);
  v8 = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a1 + 144) = v2;
  if (v8 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v10 = *(_QWORD*)(a1 + 120);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = GameData_212d630[0] + 2;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
  }
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
}

#pragma GCC visibility pop
