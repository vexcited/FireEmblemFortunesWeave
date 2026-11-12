#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LODModule_a98ee0(_QWORD*, unsigned int);
__int64 ResFile_5e5f00(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
bool GameRoutine_ad7390(_QWORD*);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_66df80();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___memory_a97000(PSEUDO_X8 x8_, _QWORD* a1,
                                              int a2);
__attribute__((swiftcall)) void

llvm_libcxx_21_libcxx_include___memory_a97000(PSEUDO_X8 x8_, _QWORD* a1, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _DWORD* i;
  int v20;
  signed __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  int v29;
  unsigned __int64 v30;
  _DWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  struct {
    _QWORD v35[3];
    __int64 v36;
    __int64 v37;
    __int64 v38;
    unsigned __int64 v39;
    char v40;
  } v35_;

  GameRoutine_ad7390(a1);
  v6 = *(_QWORD*)(ResFile_5e5f00(*(_QWORD*)(a1[1] + 592LL)) + 40);
  v35_.v37 = 0;
  v35_.v38 = 0;
  v7 = v6 + 120LL * a2;
  v8 = *(_QWORD*)(v7 + 24);
  v9 = *(unsigned __int16*)(v8 + 56);
  v35_.v35[0] = v7;
  v35_.v35[1] = v8;
  v35_.v35[2] = v9;
  v35_.v36 = 0;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v9 != 0) {
    v35_.v36 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v9, 16, 0);
    v35_.v38 = v35_.v36 + 8 * v9;
    memset(v35_.v36, 0, 8 * v9);
    v35_.v37 = v35_.v38;
  }
  v11 = *(unsigned __int16*)(v7 + 106);
  v35_.v39 = 0;
  v35_.v40 = 0;
  *a3 = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[3] = 0;
  if (v11 == 0) {
    v13 = 0;
    v16 = 0;
  LABEL_40:
    v30 = v35_.v39;
    goto LABEL_41;
  }
  v34 = a3;
  v12 = fw_memory_HeapManager_Allocate(*v10, 4 * v11, 16, 0);
  v13 = v12 + 4 * v11;
  v14 = v11 - 1;
  v15 = 84;
  v16 = v12;
  v17 = 0;
  v18 = 0;
  for (i = (_DWORD*)v12;; i = (_DWORD*)v17) {
    v20 = LODModule_a98ee0(v35_.v35,
                           *(unsigned __int16*)(*(_QWORD*)(v7 + 40) + v15));
    if ((unsigned __int64)i >= v13) {
      v21 = (signed __int64)i - v16;
      v22 = (v21 >> 2) + 1;
      if (v22 >> 62 != 0) {
        v34[1] = v17;
        v34[2] = v13;
        *v34 = v16;
        GameRoutine_66df80();
      }
      if ((__int64)(v13 - v16) >> 1 > v22) {
        v22 = (__int64)(v13 - v16) >> 1;
      }
      v23 = v13 - v16 >= 0x7FFFFFFFFFFFFFFCLL ? 0x3FFFFFFFFFFFFFFFLL : v22;
      if (v23 != 0) {
        if (v23 >> 62 != 0) {
          v34[1] = v17;
          v34[2] = v13;
          *v34 = v16;
          GameRoutine_60a210();
        }
        v24 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v23, 16, 0);
      }
      else {
        v24 = 0;
      }
      v13 = v24 + 4 * v23;
      v25 = v24 + v21 - 4 * (v21 >> 2);
      *(_DWORD*)(v24 + v21) = v20;
      v17 = v24 + v21 + 4;
      memcpy(v25, v16, v21);
      if (v16 != 0) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v16);
      }
      v16 = v25;
    }
    else {
      *i = v20;
      v17 = (__int64)(i + 1);
    }
    v27 = v35_.v40;
    if (v20 != -1 || v35_.v40 != 0) {
      break;
    }
    v35_.v40 = 1;
    if (v14 == 0) {
      a3 = v34;
      v34[1] = v17;
      v34[2] = v13;
      *v34 = v16;
      goto LABEL_33;
    }
  LABEL_6:
    v7 = v35_.v35[0];
    ++v18;
    --v14;
    v15 += 96;
  }
  if (v14 != 0) {
    goto LABEL_6;
  }
  a3 = v34;
  v34[1] = v17;
  v34[2] = v13;
  *v34 = v16;
  if ((v27 & 1) == 0) {
  LABEL_39:
    v10 = &fw_memory_g_heap_manager;
    goto LABEL_40;
  }
LABEL_33:
  v29 = v35_.v39;
  if (v35_.v39 == 0) {
    a3[3] = 0;
    v10 = &fw_memory_g_heap_manager;
  LABEL_44:
    a3[1] = v16;
    if (v13 != v16) {
      a3[1] = 0;
      a3[2] = 0;
      *a3 = 0;
      if (v16 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v32, v16);
      }
    }
    goto LABEL_49;
  }
  v30 = ++v35_.v39;
  if (v16 != v17) {
    v31 = (_DWORD*)v16;
    do {
      if (*v31 == -1) {
        *v31 = v29;
      }
      ++v31;
    } while (v31 != (_DWORD*)v17);
    goto LABEL_39;
  }
  v10 = &fw_memory_g_heap_manager;
LABEL_41:
  a3[3] = v30;
  if (v30 <= 1) {
    goto LABEL_44;
  }
LABEL_49:
  if (v35_.v36 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v33, v35_.v36);
  }
}

#pragma GCC visibility pop
