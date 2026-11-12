#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterAction_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CharacterAction_Destructor(__int64 a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

_QWORD* CharacterAction_Destructor(__int64 a1)
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
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  _QWORD* result;
  __int64 v35;

  v1 = *(_QWORD*)(a1 + 400);
  *(_QWORD*)a1 = game_zview_CharacterAction_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 408);
    if (v1 == v3) {
      goto LABEL_10;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      v5 = *(_QWORD*)(v3 - 24);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v3 -= 32;
    } while (v3 != v1);
    v6 = *(_QWORD*)(a1 + 400);
    *(_QWORD*)(a1 + 408) = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_10:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v1);
    }
  }
  if ((*(_BYTE*)(a1 + 360) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 376);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
  v10 = *(_QWORD*)(a1 + 296);
  if (v10 == 0) {
    goto LABEL_31;
  }
  v11 = *(_QWORD*)(a1 + 304);
  if (v10 == v11) {
  LABEL_28:
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v10);
    goto LABEL_31;
  }
  do {
    v13 = *(_QWORD**)(v11 - 16);
    if ((_QWORD*)(v11 - 48) == v13) {
      v12 = 32;
    LABEL_22:
      (*(void (**)(__int64))(*v13 + v12))((__int64)v13);
      goto LABEL_23;
    }
    if (v13 != nullptr) {
      v12 = 40;
      goto LABEL_22;
    }
  LABEL_23:
    v11 -= 64;
  } while (v11 != v10);
  v14 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 304) = v10;
  v10 = v14;
  if (v14 != 0) {
    goto LABEL_28;
  }
LABEL_31:
  v16 = *(_QWORD*)(a1 + 272);
  if (v16 == 0) {
    goto LABEL_44;
  }
  v17 = *(_QWORD*)(a1 + 280);
  if (v16 == v17) {
  LABEL_41:
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v16);
    goto LABEL_44;
  }
  while (2) {
    v19 = *(_QWORD**)(v17 - 16);
    if ((_QWORD*)(v17 - 48) == v19) {
      v18 = 32;
      goto LABEL_35;
    }
    if (v19 != nullptr) {
      v18 = 40;
    LABEL_35:
      (*(void (**)(__int64))(*v19 + v18))((__int64)v19);
    }
    v17 -= 64;
    if (v17 != v16) {
      continue;
    }
    break;
  }
  v20 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a1 + 280) = v16;
  v16 = v20;
  if (v20 != 0) {
    goto LABEL_41;
  }
LABEL_44:
  v22 = *(_QWORD*)(a1 + 248);
  if (v22 == 0) {
    goto LABEL_57;
  }
  v23 = *(_QWORD*)(a1 + 256);
  if (v22 == v23) {
  LABEL_54:
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v22);
    goto LABEL_57;
  }
  while (2) {
    v25 = *(_QWORD**)(v23 - 16);
    if ((_QWORD*)(v23 - 48) == v25) {
      v24 = 32;
      goto LABEL_48;
    }
    if (v25 != nullptr) {
      v24 = 40;
    LABEL_48:
      (*(void (**)(__int64))(*v25 + v24))((__int64)v25);
    }
    v23 -= 64;
    if (v23 != v22) {
      continue;
    }
    break;
  }
  v26 = *(_QWORD*)(a1 + 248);
  *(_QWORD*)(a1 + 256) = v22;
  v22 = v26;
  if (v26 != 0) {
    goto LABEL_54;
  }
LABEL_57:
  v28 = *(_QWORD*)(a1 + 224);
  if (v28 == 0) {
    goto LABEL_70;
  }
  v29 = *(_QWORD*)(a1 + 232);
  if (v28 == v29) {
  LABEL_67:
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v28);
    goto LABEL_70;
  }
  while (2) {
    v31 = *(_QWORD**)(v29 - 16);
    if ((_QWORD*)(v29 - 48) == v31) {
      v30 = 32;
      goto LABEL_61;
    }
    if (v31 != nullptr) {
      v30 = 40;
    LABEL_61:
      (*(void (**)(__int64))(*v31 + v30))((__int64)v31);
    }
    v29 -= 64;
    if (v29 != v28) {
      continue;
    }
    break;
  }
  v32 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(a1 + 232) = v28;
  v28 = v32;
  if (v32 != 0) {
    goto LABEL_67;
  }
LABEL_70:
  result = *(_QWORD**)(a1 + 208);
  if (result == (_QWORD*)(a1 + 176)) {
    v35 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v35))((__int64)result);
  }
  else if (result != nullptr) {
    v35 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v35))((__int64)result);
  }
  return result;
}

#pragma GCC visibility pop
