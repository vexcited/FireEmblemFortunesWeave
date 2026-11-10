#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64* Model_a66700(__int64* result, int);
extern __int64 (*wld_LocatorModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* LocatorModule_Destructor(_QWORD* result);
__int64 GameRoutine_a7ab80(__int64, __int64);
__int64 LocatorModule_a7c180_alt1(_QWORD,
                                  _QWORD) __asm__("LocatorModule_a7c180");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
long double GameRoutine_a7b5b0(float32x4_t*, float32x4_t**, float32x4_t*,
                               __int64);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a7c7a0(void);
__int64 LocatorModule_a7c000(_QWORD* a1, int a2);
__int64* LocatorModule_a7c180(__int64* result, _QWORD* a2);
long double
wld_LocatorModule_OnLocatorConnectionChanged_lambda0_Invoke(__int64 a1, int* a2,
                                                            float32x4_t** a3);

_QWORD* LocatorModule_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  _QWORD* v18;
  __int64 v19;

  v1 = (_QWORD*)result[5];
  v2 = (_QWORD*)result[6];
  v3 = result;
  *result = wld_LocatorModule_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = v1;
  if (v1 != v2) {
    do {
      v8 = (__int64*)*--v2;
      v7 = v8;
      *v2 = 0;
      if (v8 != nullptr) {
        if (*((_BYTE*)v7 + 28) == 1) {
          v9 = *v7;
          v10 = v7[3];
          *((_DWORD*)v7 + 32) = 0;
          if ((v10 & 0x100000000LL) != 0) {
            *((_BYTE*)v7 + 28) = 0;
            v11 = v7;
            Model_a66700(*(__int64**)(v9 + 24), v10);
            v7 = v11;
          }
          *(_BYTE*)(*(_QWORD*)(v9 + 24) + 504LL) = 1;
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, v7);
      }
    } while (v2 != v1);
    v5 = (_QWORD*)v3[5];
  }
  v3[6] = v1;
  if (v5 != nullptr) {
    if (v5 == v1) {
      v3[6] = v5;
    }
    else {
      do {
        v14 = (__int64*)*--v1;
        v13 = v14;
        *v1 = 0;
        if (v14 != nullptr) {
          if (*((_BYTE*)v13 + 28) == 1) {
            v15 = *v13;
            v16 = v13[3];
            *((_DWORD*)v13 + 32) = 0;
            if ((v16 & 0x100000000LL) != 0) {
              *((_BYTE*)v13 + 28) = 0;
              v17 = v13;
              Model_a66700(*(__int64**)(v15 + 24), v16);
              v13 = v17;
            }
            *(_BYTE*)(*(_QWORD*)(v15 + 24) + 504LL) = 1;
          }
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v13);
        }
      } while (v1 != v5);
      v18 = (_QWORD*)v3[5];
      v3[6] = v5;
      v5 = v18;
      if (v18 == nullptr) {
        return result;
      }
    }
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v19 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19, v5);
  }
  return result;
}

__int64 LocatorModule_a7c000(_QWORD* a1, int a2)
{
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  _QWORD v21[4];
  int v22;

  v2 = (__int64*)a1[5];
  v3 = (__int64*)a1[6];
  v4 = a1 + 5;
  if (v2 != v3) {
    while (*(_DWORD*)(*v2 + 16) != a2) {
      if (++v2 == v3) {
        goto LABEL_8;
      }
    }
  }
  if (v2 == v3 || (v6 = *v2, *v2 == 0)) {
  LABEL_8:
    v7 = (_QWORD*)a1[4];
    v9 = v7[3];
    v8 = v7[4];
    v10 = *(_QWORD*)(*v7 + 8LL);
    v21[0] = a1;
    v21[1] = v8 + ((__int64)a2 << 6);
    v21[2] = v9 + 96LL * a2;
    if (v10 != 0) {
      v10 = *(_QWORD*)(v10 + 16LL * a2 + 32) + 2LL;
    }
    v21[3] = v10;
    v22 = a2;
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         368, 16, 0);
    GameRoutine_a7ab80(v12, (__int64)v21);
    v13 = *(_DWORD*)(v12 + 20);
    v20 = v12;
    *(_DWORD*)(v12 + 20) = v13 + 1;
    LocatorModule_a7c180_alt1(v4, &v20);
    v14 = v20;
    v6 = *(_QWORD*)(a1[6] - 8LL);
    v20 = 0;
    if (v14 != 0) {
      if (*(_BYTE*)(v14 + 28) == 1) {
        v15 = *(_QWORD*)v14;
        v16 = *(_QWORD*)(v14 + 24);
        *(_DWORD*)(v14 + 128) = 0;
        if ((v16 & 0x100000000LL) != 0) {
          *(_BYTE*)(v14 + 28) = 0;
          v17 = v14;
          Model_a66700(*(__int64**)(v15 + 24), v16);
          v14 = v17;
        }
        *(_BYTE*)(*(_QWORD*)(v15 + 24) + 504LL) = 1;
      }
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v14);
    }
  }
  else {
    ++*(_DWORD*)(v6 + 20);
  }
  return v6;
}

__int64* LocatorModule_a7c180(__int64* result, _QWORD* a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;

  v3 = (_QWORD*)result[1];
  v2 = result[2];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v7 = (__int64)v3 - *result;
    v8 = (v7 >> 3) + 1;
    if (v8 >> 61 != 0) {
      GameRoutine_a7c7a0();
    }
    v9 = v2 - *result;
    v10 = v9 >> 2;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v9 >> 2 <= v8) {
      v10 = (v7 >> 3) + 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v10;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = *a2;
    *a2 = 0;
    v16 = (_QWORD*)(v14 + v7);
    v17 = v14 + 8 * v12;
    v18 = *v4;
    v19 = v4[1] - *v4;
    v20 = *v4;
    v21 = (char*)v16 - v19;
    *v16 = v15;
    v6 = v16 + 1;
    result = (__int64*)memcpy(v21, v20, v19);
    *v4 = (__int64)v21;
    v4[1] = (__int64)v6;
    v4[2] = v17;
    if (v18 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v22 = 56;
      }
      result =
          (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v22, v18);
    }
  }
  else {
    v5 = *a2;
    *a2 = 0;
    *v3 = v5;
    v6 = v3 + 1;
  }
  v4[1] = (__int64)v6;
  return result;
}

long double

wld_LocatorModule_OnLocatorConnectionChanged_lambda0_Invoke(__int64 a1, int* a2,
                                                            float32x4_t** a3)
{
  return GameRoutine_a7b5b0(
      (float32x4_t*)*(_QWORD*)(a1 + 16), a3,
      (float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) + 32LL) +
                     ((__int64)*a2 << 6)),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL) + 24LL) + 96LL * *a2);
}

#pragma GCC visibility pop
