#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_22110b8;
extern __int64 (*game_zview_CharacterController_StateMoveTo_vtable[])();
extern __int64 GameData_22110ac;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cdcc10(void);
__int64 StateMoveTo_Unknown3(__int64 result);
_QWORD* StateMoveTo_d42860(_QWORD* result, __int64* a2);
_QWORD* StateMoveTo_Destructor(_QWORD* result);
__int64 StateMoveTo_DeletingDestructor(_QWORD* a1);
float StateMoveTo_Unknown2_d42c00(__int64 a1);

__int64 StateMoveTo_Unknown3(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 8);
  *(_BYTE*)(result + 16) =
      (*(_DWORD*)(*(_QWORD*)(v1 + 8) + 384LL) & 0x40000000) != 0;
  *(_DWORD*)(result + 184) = *(_DWORD*)(v1 + 596);
  *(_DWORD*)(result + 188) = *(_DWORD*)(v1 + 592);
  v2 = *(__int64**)(*(_QWORD*)(v1 + 8) + 632LL);
  v3 = *((unsigned int*)v2 + 4);
  if ((v3 & 2) == 0) {
    v4 = *v2;
    v5 = v3 | 2;
    *((_DWORD*)v2 + 4) = v5;
    v6 = ((__int64)*(int*)(v4 + 376) << 24) + (v5 << 20);
    if (*(_QWORD*)(v4 + 600) != 0) {
      ++v6;
    }
    v2[1] = v6;
  }
  return result;
}

_QWORD* StateMoveTo_d42860(_QWORD* result, __int64* a2)
{
  unsigned __int64 v2;
  __int64* v3;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;

  v3 = (__int64*)result[1];
  v2 = result[2];
  v5 = result;
  if ((unsigned __int64)v3 >= v2) {
    v7 = (__int64*)*result;
    v8 = (__int64)v3 - *result;
    v9 = (v8 >> 4) + 1;
    if (v9 >> 60 != 0) {
      GameRoutine_cdcc10();
    }
    v10 = v2 - (_QWORD)v7;
    if (v10 >> 3 > v9) {
      v9 = v10 >> 3;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF0LL) {
      v11 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v9;
    }
    if (v11 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v12 = fw_memory_g_heap_manager_ptr;
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v11, 16, 0);
    v13 = *a2;
    v14 = a2[1];
    v15 = (_QWORD*)((char*)result + v8);
    v6 = (__int64)result + v8 + 16;
    *v15 = v13;
    v15[1] = v14;
    if (v7 != v3) {
      v16 = v7;
      v17 = (_QWORD*)((char*)result + v8 + -16 * (v8 >> 4));
      do {
        v17[1] = v16[1];
        v18 = *v16;
        v16 += 2;
        *v17 = v18;
        v17 += 2;
      } while (v16 != v3);
    }
    *v5 = (char*)result + v8 + -16 * (v8 >> 4);
    v5[1] = v6;
    v5[2] = &result[2 * v11];
    if (v7 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v19, v7);
    }
  }
  else {
    v3[1] = a2[1];
    v6 = (__int64)(v3 + 2);
    *v3 = *a2;
  }
  v5[1] = v6;
  return result;
}

_QWORD* StateMoveTo_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
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

  v1 = result[28];
  v2 = result;
  *result = game_zview_CharacterController_StateMoveTo_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[29] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[18];
  if (v6 != 0) {
    v7 = *v3;
    v2[19] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = v2[15];
  if (v9 != 0) {
    v10 = *v3;
    v2[16] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = v2[12];
  if (v12 != 0) {
    v13 = *v3;
    v2[13] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = v2[5];
  if (v15 != 0) {
    v16 = *v3;
    v2[6] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  return result;
}

__int64 StateMoveTo_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
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

  v1 = a1[28];
  *a1 = game_zview_CharacterController_StateMoveTo_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[29] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = a1[18];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[19] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = a1[15];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[16] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = a1[12];
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    a1[13] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = a1[5];
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    a1[6] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v18 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, a1);
}

float StateMoveTo_Unknown2_d42c00(__int64 a1)
{
  __int64 v1;
  float result;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;

  *(_WORD*)(a1 + 16) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a1;
    v5 = __cxa_guard_acquire(&GameData_22110b8);
    a1 = v7;
    if (v5 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      a1 = v7;
    }
  }
  v1 = GameData_22110ac;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 168) = v1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v8 = a1;
    v6 = __cxa_guard_acquire(&GameData_22110b8);
    a1 = v8;
    if (v6 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      a1 = v8;
    }
  }
  v3 = GameData_22110ac;
  result = *(float*)&GameData_22110ac;
  v4 = *(_QWORD*)(a1 + 224);
  *(_BYTE*)(a1 + 220) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 232) = v4;
  *(_QWORD*)(a1 + 212) = v3;
  return result;
}

#pragma GCC visibility pop
