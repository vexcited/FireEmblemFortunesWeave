#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ControlCreator_1363080(_BYTE* result, unsigned int);
__int64 ControlCreator_1362b40(__int64 result);
__int64 GameRoutine_13636c0(__int64 result);
__int64 GameRoutine_1369840(_QWORD);
__int64 GameRoutine_606390(_QWORD);
__int64 GameRoutine_606500(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_22416f8;
__int64 RenderTask_Unknown3(__int64 a1);
__int64 Layout_13636c0(__int64 result);
__int64 RenderTask_1369840(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 RenderTask_Unknown3(__int64 a1)
{
  _QWORD* v1;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  int** v13;
  int** v14;
  int v15;
  int** v16;
  __int64 v17;
  __int64 v18;
  int* v19;
  int v20;
  int* v21;
  __int64 v22;
  __int64 v23;
  int** v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
  __int64 v31;
  __int64* v32;
  __int64* i;
  __int64 v34;

  v1 = *(_QWORD**)(a1 + 8);
  v3 = (__int64*)v1[139];
  v4 = (__int64*)v1[140];
  while (v3 != v4) {
    v5 = v3;
    while (*(unsigned __int8*)(*v5 + 2376) < 2u) {
      v5 += 2;
      if (v5 == v4) {
        goto LABEL_32;
      }
    }
    ControlCreator_1362b40(*v5);
    v3 = (__int64*)v1[139];
    v6 = (__int64*)v1[140];
    if (*v5 != 0) {
      v4 = (__int64*)v1[139];
      if (v3 != v6) {
        v4 = (__int64*)v1[139];
        while (*v4 != *v5) {
          v4 += 2;
          if (v4 == v6) {
            goto LABEL_23;
          }
        }
      }
      if (v4 == v6 || (v7 = v4 + 2, v4 + 2 == v6)) {
        if (v4 != v6) {
          goto LABEL_24;
        }
      }
      else {
        do {
          v8 = *v7;
          if (*v7 != *v5) {
            v9 = v7[1];
            *v7 = 0;
            v7[1] = 0;
            v10 = v4[1];
            *v4 = v8;
            v4[1] = v9;
            if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak_alt1(v10);
            }
            v4 += 2;
          }
          v7 += 2;
        } while (v7 != v6);
        v6 = (__int64*)v1[140];
        v3 = (__int64*)v1[139];
        if (v4 != v6) {
        LABEL_24:
          while (v6 != v4) {
            v11 = *(v6 - 1);
            if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              std___1___shared_weak_count___release_weak_alt1(v11);
            }
            v6 -= 2;
          }
          v3 = (__int64*)v1[139];
          v1[140] = v4;
          continue;
        }
      }
    }
  LABEL_23:
    v4 = v6;
  }
LABEL_32:
  while (v3 != v4) {
    v12 = (_BYTE*)*v3;
    v3 += 2;
    ControlCreator_1363080(v12, GameData_22416f8);
  }
  v13 = (int**)v1[142];
  v14 = (int**)v1[143];
  if (v13 != v14) {
    while (1) {
      v15 = **v13;
      if (v15 >= 1) {
        **v13 = v15 + 1;
        if (**v13 > 1) {
          break;
        }
      }
      if (++v13 == v14) {
        v13 = v14;
        goto LABEL_56;
      }
    }
  }
  if (v13 != v14) {
    v16 = v13 + 1;
    if (v13 + 1 != v14) {
      v17 = fw_memory_g_heap_manager_ptr;
      do {
        v19 = *v16;
        v20 = **v16;
        if (v20 < 1 || (*v19 = v20 + 1, v19 = *v16, **v16 <= 1)) {
          *v16 = nullptr;
          v21 = *v13;
          *v13 = v19;
          if (v21 != nullptr) {
            v22 = *((_QWORD*)v21 + 1);
            *((_QWORD*)v21 + 1) = 0;
            if (v22 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
            }
            GameRoutine_606500(v21 + 58);
            GameRoutine_606390(v21 + 4);
            v23 = *((_QWORD*)v21 + 1);
            *((_QWORD*)v21 + 1) = 0;
            if (v23 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
            }
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v17 + v18,
                                               (__int64)v21);
          }
          ++v13;
        }
        ++v16;
      } while (v16 != v14);
    }
  }
LABEL_56:
  v24 = (int**)v1[143];
  if (v13 != v24) {
    do {
      v27 = (__int64)*--v24;
      v26 = v27;
      *v24 = nullptr;
      if (v27 != 0) {
        v28 = *(_QWORD*)(v26 + 8);
        *(_QWORD*)(v26 + 8) = 0;
        if (v28 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
        }
        GameRoutine_606500(v26 + 232);
        GameRoutine_606390(v26 + 16);
        v29 = *(_QWORD*)(v26 + 8);
        *(_QWORD*)(v26 + 8) = 0;
        if (v29 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
        }
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v25, v26);
      }
    } while (v24 != v13);
    v1[143] = v13;
  }
  result = RenderTask_1369840((__int64)(v1 + 158));
  GameData_22416f8 = (GameData_22416f8 & 1) == 0;
  v31 = *(_QWORD*)(a1 + 8);
  v32 = *(__int64**)(v31 + 1112);
  for (i = *(__int64**)(v31 + 1120); v32 != i; result = Layout_13636c0(v34)) {
    v34 = *v32;
    v32 += 2;
  }
  return result;
}

#pragma GCC visibility pop
