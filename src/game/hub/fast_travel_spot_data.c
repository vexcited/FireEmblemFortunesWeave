#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_FastTravelBase_vtable)();
extern __int64 (*game_hub_FastTravelSpotData_vtable[])();
extern __int64 GameData_220d618;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 FastTravelSpotData_Unknown2(__int64 a1);
_QWORD* FastTravelSpotData_Destructor(_QWORD* result);

__int64 FastTravelSpotData_Unknown2(__int64 a1)
{
  _DWORD* v1;

  v1 = *(_DWORD**)(a1 + 8);
  if (v1 != nullptr && *v1 == 1) {
    return *(_BYTE*)(GameData_220d618 + 56) & 1;
  }
  else {
    return 0;
  }
}

_QWORD* FastTravelSpotData_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = result[6];
  v2 = result;
  *result = game_hub_FastTravelSpotData_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = result[7];
    if (v1 == v4) {
      goto LABEL_19;
    }
    do {
      if (*(_BYTE*)(v4 - 16) == 1) {
        if ((*(_BYTE*)(v4 - 64) & 1) != 0) {
          v5 = *(_QWORD*)(v4 - 48);
          if (v5 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v6 = 128;
            }
            else {
              v6 = 56;
            }
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
          }
        }
        if ((*(_BYTE*)(v4 - 88) & 1) != 0) {
          v7 = *(_QWORD*)(v4 - 72);
          if (v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
          }
        }
      }
      v4 -= 128;
    } while (v4 != v1);
    v9 = v2[6];
    v2[7] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_19:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v1);
    }
  }
  v11 = v2[3];
  if (v11 != 0) {
    v12 = v2[4];
    if (v11 == v12) {
      goto LABEL_39;
    }
    do {
      if ((*(_BYTE*)(v12 - 48) & 1) != 0) {
        v13 = *(_QWORD*)(v12 - 32);
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, v13);
        }
      }
      if ((*(_BYTE*)(v12 - 72) & 1) != 0) {
        v15 = *(_QWORD*)(v12 - 56);
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v15);
        }
      }
      v12 -= 80;
    } while (v12 != v11);
    v17 = v2[3];
    v2[4] = v11;
    v11 = v17;
    if (v17 != 0) {
    LABEL_39:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, v11);
    }
  }
  *v2 = &game_hub_FastTravelBase_vtable;
  v19 = v2[2];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v19);
  }
  return result;
}

#pragma GCC visibility pop
