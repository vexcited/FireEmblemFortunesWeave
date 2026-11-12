#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_2131e20[2];
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Manager_Destructor_17da880(_QWORD* result);
__int64 Manager_DeletingDestructor_17da980(_QWORD* a1);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
extern __int64 game_g_frame_clock;
float Manager_Unknown2_17daa80(__int64 a1, _QWORD* a2);

_QWORD* Manager_Destructor_17da880(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = result;
  v2 = result[28];
  *result = GameData_2131e20[0] + 16;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = result[29];
    if (v2 == v4) {
      goto LABEL_8;
    }
    do {
      result = *(_QWORD**)(v4 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v4 -= 16;
    } while (v4 != v2);
    v5 = v1[28];
    v1[29] = v2;
    v2 = v5;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v2);
    }
  }
  v7 = v1[25];
  if (v7 != 0) {
    v8 = *(_QWORD*)v3;
    v1[26] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  return result;
}

__int64 Manager_DeletingDestructor_17da980(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = a1[28];
  *a1 = GameData_2131e20[0] + 16;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = a1[29];
    if (v2 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v2);
    v6 = a1[28];
    a1[29] = v2;
    v2 = v6;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v2);
    }
  }
  v8 = a1[25];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    a1[26] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, a1);
}

float Manager_Unknown2_17daa80(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float result;

  v3 = nn_os_ConvertToTimeSpan(*a2);
  v4 = (float)(v3 / 1000) / 0x1.04ad660000000p+14f;
  if (game_g_frame_clock != 0) {
    v5 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
    if (v4 >= (float)(v5 + 0x1.99999a0000000p-4f)) {
      v5 = (float)(v3 / 1000) / 0x1.04ad660000000p+14f;
    }
  }
  else {
    v5 = (float)(int)(float)(v4 + 0x1.99999a0000000p-4f);
  }
  v6 = (float)*(int*)(a1 + 360);
  result = 0x1.0000000000000p+1f;
  if (v5 <= (float)(v6 + 0x1.4000000000000p+3f)) {
    result = v5;
    if (v5 > v6) {
      return (float)*(int*)(a1 + 360);
    }
  }
  return result;
}

#pragma GCC visibility pop
