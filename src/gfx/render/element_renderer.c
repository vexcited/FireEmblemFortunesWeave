#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ElementRenderer_a75e00_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("ElementRenderer_a75e00");
__int64 GameRoutine_a72660(__int64 result, int, __int64, __int64, __int64,
                           __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
void __attribute__((noreturn)) GameRoutine_a74650(void);
__int64 ElementRenderer_a74470(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6);
__int64** ElementRenderer_a748a0(__int64** result);
__int64** ElementRenderer_a74a20(__int64** result);
__int64 ElementRenderer_a75980(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               __int64 (**a5)(_QWORD));
__int64 ElementRenderer_a75e00(char** a1, __int64 a2, __int64 a3,
                               long double a4);
__int64 gfx_render_ElementRenderer_RenderMultithread_lambda0_Invoke(__int64 a1,
                                                                    int* a2);

__int64 ElementRenderer_a74470(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6;
  _DWORD* v7;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;

  v6 = *(unsigned int*)(result + 8);
  v7 = *(_DWORD**)result;
  if ((v6 & 0x80000000) != 0) {
    v16 = *(_QWORD**)v7;
    v17 = *(_DWORD*)(*(_QWORD*)v7 + 24LL);
    v18 = *(int*)(*(_QWORD*)v7 + 28LL);
    *(_DWORD*)(*(_QWORD*)v7 + 28LL) = v18 + 1;
    if ((int)v18 >= v17) {
      v19 = a2;
      GameRoutine_a72660((__int64)v16, v18 + 1, a3, a4, a5, a6);
      a2 = v19;
    }
    v20 = *v16 + 24 * (v18 >> 8);
    v21 = *(_QWORD*)(v20 + 8);
    if (v21 >= *(_QWORD*)(v20 + 16)) {
      result = ElementRenderer_a75e00_alt1(v20, a2, a3);
    }
    else {
      v22 = *(_QWORD*)(a2 + 32);
      if (v22 != 0) {
        if (v22 == a2) {
          *(_QWORD*)(v21 + 32) = v21;
          (*(void (**)(_QWORD, unsigned __int64))(
              **(_QWORD**)(a2 + 32) + 24LL))(*(_QWORD*)(a2 + 32), v21);
        }
        else {
          *(_QWORD*)(v21 + 32) = v22;
          *(_QWORD*)(a2 + 32) = 0;
        }
      }
      else {
        *(_QWORD*)(v21 + 32) = 0;
      }
      v25 = *(_QWORD*)a3;
      v26 = *(_QWORD*)(a3 + 8);
      result = v21 + 80;
      *(_DWORD*)(v21 + 64) = *(_DWORD*)(a3 + 16);
      *(_QWORD*)(v21 + 48) = v25;
      *(_QWORD*)(v21 + 56) = v26;
    }
    *(_QWORD*)(v20 + 8) = result;
    ++v7[18];
  }
  else {
    v9 = *(_QWORD*)v7 + 32 * v6;
    v10 = *(_DWORD*)(v9 + 24);
    v11 = *(int*)(v9 + 28);
    *(_DWORD*)(v9 + 28) = v11 + 1;
    if ((int)v11 >= v10) {
      v12 = a2;
      result = GameRoutine_a72660(v9, (int)v11 + 1, a3, a4, a5, a6);
      a2 = v12;
    }
    v13 = *(_QWORD*)v9 + 24 * (v11 >> 8);
    v14 = *(_QWORD*)(v13 + 8);
    if (v14 >= *(_QWORD*)(v13 + 16)) {
      result = ElementRenderer_a75e00_alt1(v13, a2, a3);
      *(_QWORD*)(v13 + 8) = result;
    }
    else {
      v15 = *(_QWORD*)(a2 + 32);
      if (v15 != 0) {
        if (v15 == a2) {
          *(_QWORD*)(v14 + 32) = v14;
          result = (*(__int64 (**)(_QWORD, unsigned __int64))(
              **(_QWORD**)(a2 + 32) + 24LL))(*(_QWORD*)(a2 + 32), v14);
        }
        else {
          *(_QWORD*)(v14 + 32) = v15;
          *(_QWORD*)(a2 + 32) = 0;
        }
      }
      else {
        *(_QWORD*)(v14 + 32) = 0;
      }
      v23 = *(_QWORD*)(a3 + 8);
      v24 = *(_DWORD*)(a3 + 16);
      *(_QWORD*)(v14 + 48) = *(_QWORD*)a3;
      *(_QWORD*)(v14 + 56) = v23;
      *(_DWORD*)(v14 + 64) = v24;
      *(_QWORD*)(v13 + 8) = v14 + 80;
    }
  }
  return result;
}

__int64** ElementRenderer_a748a0(__int64** result)
{
  __int64* v1;
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
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64** v15;

  v1 = *result;
  v2 = **result;
  if (v2 != 0) {
    v14 = *result;
    v15 = result;
    v3 = v1[1];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v2 != v3) {
      v5 = v1[1];
      do {
        v9 = *(_QWORD*)(v5 - 24);
        v5 -= 24;
        v7 = v9;
        if (v9 != 0) {
          v10 = *(_QWORD*)(v3 - 16);
          if (v7 == v10) {
            goto LABEL_5;
          }
          do {
            v11 = *(_QWORD*)(v10 - 8);
            if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              result =
                  (__int64**)std___1___shared_weak_count___release_weak(v11);
            }
            v10 -= 16;
          } while (v10 != v7);
          v6 = *(_QWORD*)(v3 - 24);
          *(_QWORD*)(v3 - 16) = v7;
          v7 = v6;
          if (v6 != 0) {
          LABEL_5:
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            result =
                (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
          }
        }
        v3 = v5;
      } while (v2 != v5);
    }
    v14[1] = v2;
    v12 = **v15;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v13 = 56;
      }
      return (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13, v12);
    }
  }
  return result;
}

__int64** ElementRenderer_a74a20(__int64** result)
{
  __int64* v1;
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64** v22;
  __int64 v23;

  v1 = *result;
  v2 = **result;
  if (v2 == 0) {
    return result;
  }
  v21 = *result;
  v22 = result;
  v3 = v1[1];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 == v3) {
    goto LABEL_28;
  }
  v5 = v1[1];
  v23 = **result;
  while (2) {
    v9 = *(_QWORD*)(v5 - 32);
    v5 -= 32;
    v7 = v9;
    if (v9 == 0) {
      goto LABEL_9;
    }
    v10 = *(_QWORD*)(v3 - 24);
    if (v7 == v10) {
      goto LABEL_5;
    }
    v11 = *(_QWORD*)(v3 - 24);
    while (2) {
      v15 = *(_QWORD*)(v11 - 24);
      v11 -= 24;
      v13 = v15;
      if (v15 == 0) {
        goto LABEL_18;
      }
      v16 = *(_QWORD*)(v10 - 16);
      if (v13 == v16) {
      LABEL_14:
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result =
            (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
        goto LABEL_18;
      }
      do {
        result = *(__int64***)(v16 - 48);
        v18 = v16 - 80;
        if ((__int64**)(v16 - 80) == result) {
          v17 = 4;
        LABEL_23:
          result = (__int64**)((__int64 (*)(void*))(*result)[v17])(result);
          goto LABEL_24;
        }
        if (result != nullptr) {
          v17 = 5;
          goto LABEL_23;
        }
      LABEL_24:
        v16 = v18;
      } while (v18 != v13);
      v12 = *(_QWORD*)(v10 - 24);
      *(_QWORD*)(v10 - 16) = v13;
      v13 = v12;
      if (v12 != 0) {
        goto LABEL_14;
      }
    LABEL_18:
      v10 = v11;
      if (v7 != v11) {
        continue;
      }
      break;
    }
    v6 = *(_QWORD*)(v3 - 32);
    v2 = v23;
    *(_QWORD*)(v3 - 24) = v7;
    v7 = v6;
    if (v6 != 0) {
    LABEL_5:
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      result = (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
    }
  LABEL_9:
    v3 = v5;
    if (v2 != v5) {
      continue;
    }
    break;
  }
LABEL_28:
  v21[1] = v2;
  v19 = **v22;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v20 = 56;
    }
    return (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v20, v19);
  }
  return result;
}

__int64 ElementRenderer_a75980(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               __int64 (**a5)(_QWORD))
{
  char v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v10 = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a2, *a1);
  v11 = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a3, *a2);
  if ((v10 & 1) != 0) {
    v12 = *a1;
    if ((v11 & 1) != 0) {
      *a1 = *a3;
      *a3 = v12;
    }
    else {
      *a1 = *a2;
      *a2 = v12;
      if (((*a5)(*a3) & 1) != 0) {
        v15 = *a2;
        *a2 = *a3;
        *a3 = v15;
      }
    }
  }
  else if ((v11 & 1) != 0) {
    v13 = *a2;
    *a2 = *a3;
    *a3 = v13;
    if ((((__int64 (*)(_QWORD, _QWORD))*a5)(*a2, *a1) & 1) != 0) {
      v14 = *a1;
      *a1 = *a2;
      *a2 = v14;
    }
  }
  result = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a4, *a3);
  if ((result & 1) != 0) {
    v17 = *a3;
    *a3 = *a4;
    *a4 = v17;
    result = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a3, *a2);
    if ((result & 1) != 0) {
      v18 = *a2;
      *a2 = *a3;
      *a3 = v18;
      result = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a2, *a1);
      if ((result & 1) != 0) {
        v19 = *a1;
        *a1 = *a2;
        *a2 = v19;
      }
    }
  }
  return result;
}

__int64 ElementRenderer_a75e00(char** a1, __int64 a2, __int64 a3,
                               long double a4)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  char* v17;
  int v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  int v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  char* v27;
  __int64 v28;

  v4 = a1[1] - *a1;
  v5 = 1 - 0x3333333333333333LL * (v4 >> 4);
  if (v5 > 0x333333333333333LL) {
    GameRoutine_a74650();
  }
  v9 = fw_memory_g_heap_manager_ptr;
  if (0x999999999999999ALL * ((a1[2] - *a1) >> 4) > v5) {
    v5 = 0x999999999999999ALL * ((a1[2] - *a1) >> 4);
  }
  if (0xCCCCCCCCCCCCCCCDLL * ((a1[2] - *a1) >> 4) >= 0x199999999999999LL) {
    v10 = 0x333333333333333LL;
  }
  else {
    v10 = v5;
  }
  if (v10 != 0) {
    if (v10 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v10, 16, 0);
  }
  else {
    v11 = 0;
  }
  v12 = *(_QWORD*)(a2 + 32);
  v13 = v11 + v4;
  if (v12 != 0) {
    if (v12 == a2) {
      *(_QWORD*)(v13 + 32) = v13;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v12 + 24LL))(v12, v13);
    }
    else {
      *(_QWORD*)(v13 + 32) = v12;
      *(_QWORD*)(a2 + 32) = 0;
    }
  }
  else {
    *(_QWORD*)(v13 + 32) = 0;
  }
  v14 = *(_QWORD*)(a3 + 8);
  v15 = v11 + 80 * v10;
  v16 = *a1;
  v17 = a1[1];
  *(_QWORD*)(v13 + 48) = *(_QWORD*)a3;
  *(_QWORD*)(v13 + 56) = v14;
  v18 = *(_DWORD*)(a3 + 16);
  v19 = v13 + 80;
  *(_DWORD*)(v13 + 64) = v18;
  v20 = (char*)(v13 + v16 - v17);
  if (v16 != v17) {
    v21 = v16;
    v22 = (char*)(v13 + v16 - v17);
    do {
      v25 = *((char**)v21 + 4);
      if (v25 != nullptr) {
        if (v21 == v25) {
          *((_QWORD*)v22 + 4) = v22;
          (*(void (**)(_QWORD, char*))(**((_QWORD**)v21 + 4) + 24LL))(
              *((_QWORD*)v21 + 4), v22);
        }
        else {
          *((_QWORD*)v22 + 4) = v25;
          *((_QWORD*)v21 + 4) = 0;
        }
      }
      else {
        *((_QWORD*)v22 + 4) = 0;
      }
      v23 = *((_DWORD*)v21 + 16);
      *((_QWORD*)v22 + 7) = *((_QWORD*)v21 + 7);
      v24 = *((_QWORD*)v21 + 6);
      *((_DWORD*)v22 + 16) = v23;
      v21 += 80;
      *((_QWORD*)v22 + 6) = v24;
      v22 += 80;
    } while (v21 != v17);
    while (1) {
      v27 = *((char**)v16 + 4);
      if (v16 == v27) {
        v26 = 32;
      }
      else {
        if (v27 == nullptr) {
          goto LABEL_26;
        }
        v26 = 40;
      }
      (*(void (**)(void*))(*(_QWORD*)v27 + v26))((void*)v27);
    LABEL_26:
      v16 += 80;
      if (v16 == v17) {
        v16 = *a1;
        break;
      }
    }
  }
  *a1 = v20;
  a1[1] = (char*)v19;
  a1[2] = (char*)v15;
  if (v16 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v28, a4);
  }
  return v19;
}

__int64 gfx_render_ElementRenderer_RenderMultithread_lambda0_Invoke(__int64 a1,
                                                                    int* a2)
{
  __int64 v2;
  int v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  int v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = *a2;
  v4 = (_QWORD*)(*(_QWORD*)(a1 + 8) + 560LL);
  if (*(_BYTE*)(v2 + 76) == 1) {
    LODWORD(v5) = *(_DWORD*)(v2 + 72) +
                  ((*(_QWORD*)(v2 + 32) - *(_QWORD*)(v2 + 24)) >> 3);
  }
  else {
    v5 = (*(_QWORD*)(v2 + 56) - *(_QWORD*)(v2 + 48)) >> 3;
  }
  LODWORD(v6) = (int)v5 / 5 * v3;
  v7 = v6 + (int)v5 / 5;
  if ((int)v5 < v7) {
    v7 = v5;
  }
  if (v3 >= 4) {
    v8 = v5;
  }
  else {
    v8 = v7;
  }
  (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 40LL))(*v4);
  if ((*(_BYTE*)(v2 + 76) & 1) == 0) {
    if ((int)v6 >= v8) {
      return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
    }
    v6 = (int)v6;
    while (1) {
      v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v6) + 32LL);
      if (v11 == 0) {
        break;
      }
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v11 + 48LL))(v11, v4);
      if (v8 == ++v6) {
        return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
      }
    }
  LABEL_26:
    GameRoutine_60a310();
  }
  if (*(int*)(v2 + 72) <= 0) {
    if ((int)v6 >= v8) {
      return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
    }
    v6 = (int)v6;
    while (1) {
      v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 8 * v6) + 32LL);
      if (v12 == 0) {
        break;
      }
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 48LL))(v12, v4);
      if (v8 == ++v6) {
        return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
      }
    }
    goto LABEL_26;
  }
  if ((int)v6 < v8) {
    v9 = *(_QWORD**)v2;
    v6 = (int)v6;
    while (1) {
      v10 = *(_QWORD*)(*(_QWORD*)(*v9 + 24 * (v6 >> 8)) +
                       80LL * (unsigned __int8)v6 + 32);
      if (v10 == 0) {
        break;
      }
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v10 + 48LL))(v10, v4);
      if (v8 == ++v6) {
        return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
      }
    }
    goto LABEL_26;
  }
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
}

#pragma GCC visibility pop
