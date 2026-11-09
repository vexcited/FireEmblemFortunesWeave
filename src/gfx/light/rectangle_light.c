#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_c75d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern __int128 GameData_1b80310;
extern __int128 GameData_1b80320;
extern __int64 (*gfx_light_Instance_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
float RectangleLight_Unknown2(__int64 a1);

long double RectangleLight_c53f00() { return *(long double*)&GameData_1b80310; }

long double RectangleLight_c53f10() { return *(long double*)&GameData_1b80320; }

long double Actor_Unknown2() { return *(long double*)GameData_212c2a0; }

__int64 GameHr_c76f00(__int64 a1, __int64 a2);
_QWORD* RectangleLight_c541a0(_QWORD* result);

float RectangleLight_Unknown2(__int64 a1)
{
  float v1;
  int v2;
  float v3;

  v1 = *(float*)(a1 + 64);
  v2 = *(_DWORD*)(a1 + 88);
  if (v2 == 3) {
    v3 = *(float*)(a1 + 288);
    goto LABEL_5;
  }
  if (v2 == 0) {
    v3 = *(float*)(a1 + 288) * 3.1416f;
  LABEL_5:
    v1 = v1 / (float)(v3 * *(float*)(a1 + 292));
  }
  return (float)(v1 * *(float*)(a1 + 72)) * (float)(*(float*)(a1 + 68) + 1.0f);
}

_QWORD* RectangleLight_c541a0(_QWORD* result)
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

  v1 = result[20];
  v2 = result;
  *result = gfx_light_Instance_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[21] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[17];
  if (v6 != 0) {
    v7 = v2[18];
    if (v6 == v7) {
      goto LABEL_15;
    }
    do {
      v8 = *(_QWORD*)(v7 - 24);
      if (v8 != 0) {
        *(_QWORD*)(v7 - 16) = v8;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
      }
      v7 -= 48;
    } while (v7 != v6);
    v10 = v2[17];
    v2[18] = v6;
    if (v10 != 0) {
    LABEL_15:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
    }
  }
  v12 = v2[14];
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    v2[15] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14);
  }
  return result;
}

#pragma GCC visibility pop
