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
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
long double GameRoutine_a7ad80(float32x4_t*, float32x4_t*, __int64);
long double LocatorModule_Unknown6(_QWORD* a1);
__int64 LocatorModule_a7bee0(__int64 a1, __int64 a2);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64* LocatorModule_a7c2c0(__int64* result, __int64 a2, long double a3);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 wld_a7ab80(__int64, __int64);
void LocatorModule_a7c180_alt2(__int64*,
                               _QWORD*) __asm__("LocatorModule_a7c180");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

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

long double LocatorModule_Unknown6(_QWORD* a1)
{

#pragma clang fp contract(off)
  float32x4_t** v1;
  float32x4_t** v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t* v6;
  long double result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = (float32x4_t**)a1[5];
  v2 = (float32x4_t**)a1[6];
  if (v1 != v2) {
    v3 = a1[4];
    v5 = *(_QWORD*)(v3 + 24);
    v4 = *(_QWORD*)(v3 + 32);
    do {
      v6 = *v1++;
      result = GameRoutine_a7ad80(
          v6, (float32x4_t*)(v4 + ((__int64)LANES128(v6[1]).n128_i32[0] << 6)),
          v5 + 96LL * LANES128(v6[1]).n128_i32[0]);
    } while (v1 != v2);
  }
  return result;
}

__int64 LocatorModule_a7bee0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int16* v14;
  unsigned __int64 v16;

  v2 = *(_QWORD*)(**(_QWORD**)(a1 + 32) + 8LL);
  if (v2 == 0) {
    return 0;
  }
  if (a2 != 0) {
    v4 = a2;
    v5 = strlen(a2);
    a2 = v4;
    v6 = v5;
  }
  else {
    v6 = 0;
  }
  v7 = v2 + 8;
  v8 = *(unsigned __int16*)(v2 + 12);
  v9 = v2 + 8 + 16 * v8;
  v10 = *(_DWORD*)v9;
  if (*(_DWORD*)(v2 + 8) < *(_DWORD*)v9) {
    do {
      v13 = (__int64)v10 >> 3;
      if (v6 > v13) {
        v11 = (*(unsigned __int8*)(a2 + v6 + ~v13) >> (v10 & 7)) & 1;
      }
      else {
        v11 = 0;
      }
      v8 = *(unsigned __int16*)(v2 + 12 + 16 * v8 + 2 * v11);
      v12 = v10 < *(_DWORD*)(v7 + 16 * v8);
      v10 = *(_DWORD*)(v7 + 16 * v8);
    } while (v12);
    v9 = v7 + 16 * v8;
  }
  v14 = *(unsigned __int16**)(v9 + 8);
  if (v6 != *v14) {
    return 0;
  }
  if ((unsigned int)memcmp(v14 + 1, a2, v6) != 0) {
    return 0;
  }
  v16 = (unsigned __int64)(v9 - v2 - 24) >> 4;
  if ((v16 & 0x80000000) != 0) {
    return 0;
  }
  else {
    return LocatorModule_a7c000((_QWORD*)a1, v16);
  }
}

__int64 LocatorModule_a7c000(_QWORD* a1, int a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
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
  struct {
    _QWORD v21[4];
    int v22;
  } v21_;

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
    v21_.v21[0] = a1;
    v21_.v21[1] = v8 + ((__int64)a2 << 6);
    v21_.v21[2] = v9 + 96LL * a2;
    if (v10 != 0) {
      v10 = *(_QWORD*)(v10 + 16LL * a2 + 32) + 2LL;
    }
    v21_.v21[3] = v10;
    v21_.v22 = a2;
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 368, 16, 0);
    wld_a7ab80(v12, (__int64)v21_.v21);
    v13 = *(_DWORD*)(v12 + 20);
    v20 = v12;
    *(_DWORD*)(v12 + 20) = v13 + 1;
    LocatorModule_a7c180_alt2(v4, &v20);
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
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v11 + v18, v14);
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

__int64* LocatorModule_a7c2c0(__int64* result, __int64 a2, long double a3)
{
  int v3;
  bool v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  char* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;

  v3 = *(_DWORD*)(a2 + 20);
  v4 = __OFSUB__(v3--, 1);
  *(_DWORD*)(a2 + 20) = v3;
  if (!((v3 < 0) ^ v4 | (v3 == 0))) {
    return result;
  }
  v5 = *(_QWORD*)(a2 + 24);
  v6 = result;
  if ((v5 & 0x100000000LL) != 0) {
    *(_BYTE*)(a2 + 28) = 0;
    v7 = a2;
    result = Model_a66700((__int64*)result[3], v5);
    a2 = v7;
  }
  v8 = (char*)v6[5];
  v9 = (char*)v6[6];
  if (v8 != v9) {
    v10 = v9 - v8 - 8;
    if ((~(_BYTE)v10 & 0x18) == 0) {
    LABEL_10:
      v12 = (char*)v6[6];
      if (v10 >= 0x18) {
        v12 = v8 + 16;
        while (1) {
          if (*((_QWORD*)v12 - 2) == a2) {
            v12 -= 16;
            goto LABEL_19;
          }
          if (*((_QWORD*)v12 - 1) == a2) {
            v12 -= 8;
            goto LABEL_19;
          }
          if (*(_QWORD*)v12 == a2) {
            goto LABEL_19;
          }
          if (*((_QWORD*)v12 + 1) == a2) {
            break;
          }
          v13 = v12 + 16;
          v12 += 32;
          if (v13 == v9) {
            v12 = (char*)v6[6];
            goto LABEL_19;
          }
        }
        v12 += 8;
      }
      goto LABEL_19;
    }
    v11 = ((unsigned __int8)((unsigned int)v10 >> 3) + 1) & 3;
    while (*(_QWORD*)v8 != a2) {
      v8 += 8;
      if (--v11 == 0) {
        goto LABEL_10;
      }
    }
  }
  v12 = v8;
LABEL_19:
  v14 = v12 + 8;
  v15 = fw_memory_g_heap_manager_ptr;
  if (v12 + 8 != v9) {
    do {
      v17 = *((__int64**)v14 - 1);
      *((_QWORD*)v14 - 1) = *(_QWORD*)v14;
      *(_QWORD*)v14 = 0;
      if (v17 != nullptr) {
        if (*((_BYTE*)v17 + 28) == 1) {
          v18 = *v17;
          v19 = v17[3];
          *((_DWORD*)v17 + 32) = 0;
          if ((v19 & 0x100000000LL) != 0) {
            *((_BYTE*)v17 + 28) = 0;
            Model_a66700(*(__int64**)(v18 + 24), v19);
          }
          *(_BYTE*)(*(_QWORD*)(v18 + 24) + 504LL) = 1;
        }
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)v15 + v16, a3);
      }
      v14 += 8;
    } while (v14 != v9);
    v9 = (char*)v6[6];
    v12 = v14 - 8;
  }
  while (v9 != v12) {
    v22 = *((__int64**)v9 - 1);
    v9 -= 8;
    v21 = v22;
    *(_QWORD*)v9 = 0;
    if (v22 != nullptr) {
      if (*((_BYTE*)v21 + 28) == 1) {
        v23 = *v21;
        v24 = v21[3];
        *((_DWORD*)v21 + 32) = 0;
        if ((v24 & 0x100000000LL) != 0) {
          *((_BYTE*)v21 + 28) = 0;
          Model_a66700(*(__int64**)(v23 + 24), v24);
        }
        *(_BYTE*)(*(_QWORD*)(v23 + 24) + 504LL) = 1;
      }
      if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
        v20 = 128;
      }
      else {
        v20 = 56;
      }
      result =
          (__int64*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v20, a3);
    }
  }
  v6[6] = (__int64)v12;
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
