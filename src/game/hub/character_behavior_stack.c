#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 HubCharacterNatives_df4cc0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe17e8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_df5ca0(_QWORD);
__int64 CharacterBehaviorStack_Destructor(_QWORD* a1);
char* CharacterBehaviorStack_df5660(signed __int64* a1, char* a2, _QWORD* a3);

__int64 CharacterBehaviorStack_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = GameData_1fe17e8;
  HubCharacterNatives_df4cc0();
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v3 = a1[3];
  if (v3 != 0) {
    v4 = a1[4];
    if (v3 == v4) {
      goto LABEL_11;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = a1[3];
    a1[4] = v3;
    if (v6 != 0) {
    LABEL_11:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
    }
  }
  return result;
}

char* CharacterBehaviorStack_df5660(signed __int64* a1, char* a2, _QWORD* a3)
{
  char* v3;
  unsigned __int64 v4;
  char* v8;
  _QWORD* v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  signed __int64 v29;
  char* v30;
  __int64 v31;
  signed __int64 v32;
  char* v33;
  char* v34;
  __int64 v35;

  v3 = (char*)a1[1];
  v4 = a1[2];
  if ((unsigned __int64)v3 >= v4) {
    v10 = (char*)*a1;
    v11 = ((__int64)&v3[-*a1] >> 4) + 1;
    if (v11 >> 60 != 0) {
      GameRoutine_df5ca0(a1);
    }
    v12 = v4 - (_QWORD)v10;
    v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v11 = 0xFFFFFFFFFFFFFFFLL;
    }
    if (v11 != 0) {
      if (v11 >> 60 != 0) {
        GameRoutine_60a210(a1);
      }
      v14 = 16 * v11;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v11, 16, 0);
    }
    else {
      v14 = 0;
      v15 = 0;
    }
    v17 = v15 + v14;
    v16 = (char*)(v15 + a2 - v10);
    if (a2 - v10 == v14) {
      if (a2 == v10) {
        v25 = fw_memory_HeapManager_Allocate(*v13, 16, 16, 0);
        v17 = v25 + 16;
        v16 = (char*)v25;
        if (v15 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*v13 + 200LL) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v26);
        }
      }
      else {
        v16 -= 16 * ((((a2 - v10) >> 4) + 1 +
                      ((unsigned __int64)(((a2 - v10) >> 4) + 1) >> 63)) >>
                     1);
      }
    }
    v27 = a3[1];
    *(_QWORD*)v16 = *a3;
    *((_QWORD*)v16 + 1) = v27;
    *a3 = 0;
    a3[1] = 0;
    memcpy(v16 + 16, a2, a1[1] - (_QWORD)a2);
    v28 = (char*)*a1;
    v29 = a1[1];
    a1[1] = (signed __int64)a2;
    v30 = (char*)(a2 - v28);
    v31 = v29 - (_QWORD)a2;
    v32 = (signed __int64)&v16[-(a2 - v28)];
    v33 = &v16[v31 + 16];
    memcpy(v32, v28, v30);
    v34 = (char*)*a1;
    *a1 = v32;
    a1[1] = (signed __int64)v33;
    a1[2] = v17;
    if (v34 != nullptr) {
      v35 = 128;
      if (*(_QWORD*)(*v13 + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v35);
    }
  }
  else if (a2 == v3) {
    v16 = a2;
    *(_QWORD*)v3 = *a3;
    *((_QWORD*)v3 + 1) = a3[1];
    *a3 = 0;
    a3[1] = 0;
    a1[1] = (signed __int64)(v3 + 16);
  }
  else {
    v8 = v3 - 16;
    if ((unsigned __int64)v3 < 0x10) {
      v9 = (_QWORD*)a1[1];
    }
    else {
      *(_QWORD*)v3 = *(_QWORD*)v8;
      *((_QWORD*)v3 + 1) = *((_QWORD*)v3 - 1);
      v9 = v3 + 16;
      *(_QWORD*)v8 = 0;
      *((_QWORD*)v3 - 1) = 0;
    }
    a1[1] = (signed __int64)v9;
    if (v3 != a2 + 16) {
      v18 = v3 - 8;
      do {
        v19 = *((_QWORD*)v8 - 2);
        v20 = *((_QWORD*)v8 - 1);
        v8 -= 16;
        *(_QWORD*)v8 = 0;
        *((_QWORD*)v8 + 1) = 0;
        v21 = *(_QWORD*)v18;
        *((_QWORD*)v18 - 1) = v19;
        *(_QWORD*)v18 = v20;
        if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak(v21);
        }
        v18 -= 16;
      } while (v8 != a2);
    }
    v22 = *a3;
    v23 = a3[1];
    *a3 = 0;
    a3[1] = 0;
    v24 = *((_QWORD*)a2 + 1);
    *(_QWORD*)a2 = v22;
    *((_QWORD*)a2 + 1) = v23;
    if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v24);
      return a2;
    }
    else {
      return a2;
    }
  }
  return v16;
}

#pragma GCC visibility pop
