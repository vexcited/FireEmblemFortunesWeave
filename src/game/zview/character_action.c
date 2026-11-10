#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterAction_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CharacterAction_Destructor(__int64 a1);

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
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* result;
  __int64 v34;

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
        std___1___shared_weak_count___release_weak(v4);
      }
      v5 = *(_QWORD*)(v3 - 24);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak(v5);
      }
      v3 -= 32;
    } while (v3 != v1);
    v6 = *(_QWORD*)(a1 + 400);
    *(_QWORD*)(a1 + 408) = v1;
    if (v6 != 0) {
    LABEL_10:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
    }
  }
  if ((*(_BYTE*)(a1 + 360) & 1) != 0 && *(_QWORD*)(a1 + 376) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  v9 = *(_QWORD*)(a1 + 296);
  if (v9 == 0) {
    goto LABEL_31;
  }
  v10 = *(_QWORD*)(a1 + 304);
  if (v9 == v10) {
  LABEL_28:
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    goto LABEL_31;
  }
  do {
    v12 = *(_QWORD**)(v10 - 16);
    if ((_QWORD*)(v10 - 48) == v12) {
      v11 = 32;
    LABEL_22:
      (*(void (**)(__int64))(*v12 + v11))((__int64)v12);
      goto LABEL_23;
    }
    if (v12 != nullptr) {
      v11 = 40;
      goto LABEL_22;
    }
  LABEL_23:
    v10 -= 64;
  } while (v10 != v9);
  v13 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 304) = v9;
  if (v13 != 0) {
    goto LABEL_28;
  }
LABEL_31:
  v15 = *(_QWORD*)(a1 + 272);
  if (v15 == 0) {
    goto LABEL_44;
  }
  v16 = *(_QWORD*)(a1 + 280);
  if (v15 == v16) {
  LABEL_41:
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    goto LABEL_44;
  }
  while (2) {
    v18 = *(_QWORD**)(v16 - 16);
    if ((_QWORD*)(v16 - 48) == v18) {
      v17 = 32;
      goto LABEL_35;
    }
    if (v18 != nullptr) {
      v17 = 40;
    LABEL_35:
      (*(void (**)(__int64))(*v18 + v17))((__int64)v18);
    }
    v16 -= 64;
    if (v16 != v15) {
      continue;
    }
    break;
  }
  v19 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a1 + 280) = v15;
  if (v19 != 0) {
    goto LABEL_41;
  }
LABEL_44:
  v21 = *(_QWORD*)(a1 + 248);
  if (v21 == 0) {
    goto LABEL_57;
  }
  v22 = *(_QWORD*)(a1 + 256);
  if (v21 == v22) {
  LABEL_54:
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
    goto LABEL_57;
  }
  while (2) {
    v24 = *(_QWORD**)(v22 - 16);
    if ((_QWORD*)(v22 - 48) == v24) {
      v23 = 32;
      goto LABEL_48;
    }
    if (v24 != nullptr) {
      v23 = 40;
    LABEL_48:
      (*(void (**)(__int64))(*v24 + v23))((__int64)v24);
    }
    v22 -= 64;
    if (v22 != v21) {
      continue;
    }
    break;
  }
  v25 = *(_QWORD*)(a1 + 248);
  *(_QWORD*)(a1 + 256) = v21;
  if (v25 != 0) {
    goto LABEL_54;
  }
LABEL_57:
  v27 = *(_QWORD*)(a1 + 224);
  if (v27 == 0) {
    goto LABEL_70;
  }
  v28 = *(_QWORD*)(a1 + 232);
  if (v27 == v28) {
  LABEL_67:
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
    goto LABEL_70;
  }
  while (2) {
    v30 = *(_QWORD**)(v28 - 16);
    if ((_QWORD*)(v28 - 48) == v30) {
      v29 = 32;
      goto LABEL_61;
    }
    if (v30 != nullptr) {
      v29 = 40;
    LABEL_61:
      (*(void (**)(__int64))(*v30 + v29))((__int64)v30);
    }
    v28 -= 64;
    if (v28 != v27) {
      continue;
    }
    break;
  }
  v31 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(a1 + 232) = v27;
  if (v31 != 0) {
    goto LABEL_67;
  }
LABEL_70:
  result = *(_QWORD**)(a1 + 208);
  if (result == (_QWORD*)(a1 + 176)) {
    v34 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v34))((__int64)result);
  }
  else if (result != nullptr) {
    v34 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v34))((__int64)result);
  }
  return result;
}

#pragma GCC visibility pop
