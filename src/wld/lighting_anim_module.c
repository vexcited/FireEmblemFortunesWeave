#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c686d0(__int64, __int64);
__int64 GameRoutine_c69950(__int64 result);
__int64 GameRoutine_c6c4f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c6da10(__int64 result);
__int64 GameRoutine_c6db70(__int64 result, unsigned int);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*wld_LightingAnimModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LightingAnimModule_DeletingDestructor(_QWORD* a1);
__int64 LightingAnimModule_c74700(__int64 a1, __int64 a2, __int64 a3, float a4);

__int64 LightingAnimModule_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[4];
  *a1 = wld_LightingAnimModule_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[5];
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = a1[5];
    do {
      v6 = *(_BYTE*)(v5 - 40);
      v5 -= 40;
      if ((v6 & 1) != 0 && *(_QWORD*)(v4 - 24) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
      }
      v4 = v5;
    } while (v5 != v1);
    v8 = a1[4];
    a1[5] = v1;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
    }
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
}

__int64 LightingAnimModule_c74700(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 i;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 result;
  float v15;

  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 392LL);
  v8 = *(unsigned int*)(v7 + 352);
  if ((int)v8 <= 0) {
    goto LABEL_14;
  }
  v9 = (_QWORD*)(v7 + 272);
  for (i = 0; i != v8; ++i) {
    v11 = *((unsigned __int8*)v9 - 16);
    v12 = *(v9 - 1);
    if ((v11 & 1) == 0) {
      v12 = v11 >> 1;
    }
    if (a3 == v12) {
      v13 = (v11 & 1) != 0 ? (_QWORD*)*v9 : (_QWORD*)((char*)v9 - 15);
      if ((unsigned int)memcmp(a2, v13, a3) == 0) {
        LODWORD(v8) = i;
        goto LABEL_16;
      }
    }
    v9 += 3;
  }
  if ((_DWORD)v8 == 4) {
    LODWORD(v8) = -1;
  }
  else {
  LABEL_14:
    GameRoutine_60a060(v7 + 256 + 24LL * (int)v8, a2, a3);
    ++*(_DWORD*)(v7 + 352);
    GameRoutine_c6c4f0(v7, v7 + 136, (unsigned int)v8);
    if ((_DWORD)v8 == 0) {
      *(_QWORD*)(v7 + 512) = 0xFFFFFFFF00000000LL;
      GameRoutine_c69950(v7);
      GameRoutine_c686d0(v7, v7 + 136);
    }
  }

LABEL_16:
  result = GameRoutine_c6db70(v7, v8);
  if (*(_DWORD*)(v7 + 516) != -1) {
    *(_DWORD*)(v7 + 520) = 1065353216;
    if (a4 <= 0.0) {
      v15 = 0.0;
      *(_DWORD*)(v7 + 524) = 1065353216;
    }
    else {
      v15 = (float)(1.0 - *(float*)(v7 + 524)) / a4;
    }
    *(float*)(v7 + 528) = v15;
    return GameRoutine_c6da10(v7);
  }
  return result;
}

#pragma GCC visibility pop
