#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 PxGetPhysics(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*cphysx_ContactCallback_vtable[])();
extern __int64 (*cphysx_RigidActor_vtable)();
extern __int64 (*cphysx_RigidDynamic_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_14a03b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 RigidDynamic_Destructor(_QWORD* a1);
__int64 RigidDynamic_Unknown2(__int64 a1, __int64 a2, __int64 a3);
__int64 RigidDynamic_Unknown3(_QWORD* a1, __int64 a2, float a3);
__int64 RigidDynamic_Unknown4(__int64 a1, __int64 a2);
__int64 RigidDynamic_14a0140(__int64* a1, __int64 a2, float a3, __int64 a4,
                             __int64 a5, __int64 a6);

__int64 RigidDynamic_Destructor(_QWORD* a1)
{
  void (***v2)(_QWORD);
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  *a1 = cphysx_RigidDynamic_vtable;
  v2 = (void (***)(_QWORD))a1[2];
  if (v2 != nullptr) {
    v3 = (__int64*)a1[3];
    v4 = (__int64*)a1[4];
    if (v3 != v4) {
      do {
        v5 = *v3++;
        (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)a1[2] + 200LL))(
            a1[2], v5, 1);
      } while (v3 != v4);
      v2 = (void (***)(_QWORD))a1[2];
    }
    (**v2)(v2);
  }
  v6 = a1[6];
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6 != 0) {
    v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v6;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(v8 + v9, v6);
  }
  v10 = a1[3];
  if (v10 != 0) {
    v11 = *v7;
    a1[4] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  result = a1[1];
  *a1 = &cphysx_RigidActor_vtable;
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 RigidDynamic_Unknown2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 result;

  v4 = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 24) + 232LL))(
      *(_QWORD*)(a2 + 24), a3);
  *(_QWORD*)(a1 + 16) = v4;
  (*(void (**)(__int64, float))(*(_QWORD*)v4 + 368LL))(v4, 25.0);
  (*(void (**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 16) + 440LL))(
      *(_QWORD*)(a1 + 16), 4, 1);
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v5 = cphysx_ContactCallback_vtable;
  result = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = v5;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL) = a1;
  return result;
}

__int64 RigidDynamic_Unknown3(_QWORD* a1, __int64 a2, float a3)
{
  __int64 v4;
  __int64 result;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  float v22;

  v4 = a1[2];
  v22 = a3;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 192LL))(v4);
  result = AnimCtrlModule_a78450(a1 + 6, &v22);
  v8 = (_QWORD*)a1[4];
  v7 = a1[5];
  if ((unsigned __int64)v8 >= v7) {
    v10 = a1[3];
    v11 = (char*)v8 - v10;
    v12 = ((__int64)v8 - v10) >> 3;
    v13 = v12 + 1;
    if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
      GameRoutine_14a03b0(result);
    }
    v14 = v7 - v10;
    v15 = fw_memory_g_heap_manager_ptr;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = v17 + 8 * v16;
    v19 = (char*)v8 - v10;
    v20 = (__int64)&v11[v17 + -8 * v12];
    *(_QWORD*)&v11[v17] = a2;
    v9 = (__int64)&v11[v17 + 8];
    result = memcpy(v20, v10, v19);
    a1[3] = v20;
    a1[4] = v9;
    a1[5] = v18;
    if (v10 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v21, v10);
    }
  }
  else {
    *v8 = a2;
    v9 = (__int64)(v8 + 1);
  }
  a1[4] = v9;
  return result;
}

__int64 RigidDynamic_Unknown4(__int64 a1, __int64 a2)
{
  __int64 result;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  result = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(a1 + 16) + 200LL))(*(_QWORD*)(a1 + 16), a2, 1);
  v6 = *(char**)(a1 + 24);
  v5 = *(char**)(a1 + 32);
  v7 = v5 - v6;
  if (v5 != v6) {
    v8 = 0;
    v9 = v7 >> 3;
    v10 = v7 - 8;
    while (*(_QWORD*)v6 != a2) {
      v8 += 4;
      v6 += 8;
      v10 -= 8;
      if (--v9 == 0) {
        return result;
      }
    }
    if (v6 + 8 != v5) {
      result = memmove(v6, v6 + 8, v10);
    }
    *(_QWORD*)(a1 + 32) = &v6[v10];
    v11 = *(_QWORD*)(a1 + 48);
    v12 = *(_QWORD*)(a1 + 56);
    v13 = v11 + v8;
    v14 = v12 - v11 - v8;
    v15 = v14 - 4;
    if (v13 + 4 != v12) {
      result = memmove(v13, v13 + 4, v14 - 4);
    }
    *(_QWORD*)(a1 + 56) = v13 + v15;
  }
  return result;
}

__int64 RigidDynamic_14a0140(__int64* a1, __int64 a2, float a3, __int64 a4,
                             __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  _QWORD v31[2];
  float v32;
  char v33[4];

  v6 = *a1;
  v32 = a3;
  v11 = (*(__int64 (**)(__int64*))(v6 + 40))(a1);
  v31[0] = a5;
  v12 = PxGetPhysics();
  v33[0] = 11;
  v13 = (*(__int64 (**)(__int64, __int64, _QWORD*, __int64, __int64, char*))(
      *(_QWORD*)v12 + 248LL))(v12, a2, v31, 1, 1, v33);
  LOBYTE(a2) =
      (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 192LL))(v11, v13);
  (**(void (***)(__int64))v13)(v13);
  v31[1] = 0;
  v31[0] = a6;
  if ((a2 & 1) != 0) {
    v14 = v13;
  }
  else {
    v14 = 0;
  }
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 112LL))(v13, v31);
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 128LL))(v13, v31);
  result = AnimCtrlModule_a78450(a1 + 6, &v32);
  v17 = (__int64*)a1[4];
  v16 = a1[5];
  if ((unsigned __int64)v17 >= v16) {
    v19 = a1[3];
    v20 = (char*)v17 - v19;
    v21 = ((__int64)v17 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      GameRoutine_14a03b0(result);
    }
    v23 = v16 - v19;
    v24 = fw_memory_g_heap_manager_ptr;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v25 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v25 = v22;
    }
    if (v25 != 0) {
      if (v25 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v26 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v25, 16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + 8 * v25;
    v28 = (char*)v17 - v19;
    v29 = (__int64)&v20[v26 + -8 * v21];
    *(_QWORD*)&v20[v26] = v14;
    v18 = (__int64)&v20[v26 + 8];
    result = memcpy(v29, v19, v28);
    a1[3] = v29;
    a1[4] = v18;
    a1[5] = v27;
    if (v19 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
        v30 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v30, v19);
    }
  }
  else {
    *v17 = v14;
    v18 = (__int64)(v17 + 1);
  }
  a1[4] = v18;
  return result;
}

#pragma GCC visibility pop
