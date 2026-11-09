#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfx_render_InstanceObject_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* InstanceObject_Destructor(_QWORD* result);

_QWORD* InstanceObject_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v1 = result[29];
  v2 = result;
  *result = gfx_render_InstanceObject_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[30] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = (_QWORD*)v2[26];
  if (v6 != nullptr) {
    v7 = (_QWORD*)v2[27];
    if (v6 == v7) {
      goto LABEL_14;
    }
    do {
      v8 = *(v7 - 6);
      *(v7 - 6) = 0;
      if (v8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
      }
      v9 = (_QWORD*)*(v7 - 7);
      v7 -= 7;
      result = v9;
      *v7 = 0;
      if (v9 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    } while (v7 != v6);
    v10 = v2[26];
    v2[27] = v6;
    if (v10 != 0) {
    LABEL_14:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
    }
  }
  v12 = (_QWORD*)v2[23];
  if (v12 != nullptr) {
    v13 = (_QWORD*)v2[24];
    if (v12 == v13) {
      goto LABEL_26;
    }
    do {
      v14 = *(v13 - 6);
      *(v13 - 6) = 0;
      if (v14 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
      }
      v15 = (_QWORD*)*(v13 - 7);
      v13 -= 7;
      result = v15;
      *v13 = 0;
      if (v15 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    } while (v13 != v12);
    v16 = v2[23];
    v2[24] = v12;
    if (v16 != 0) {
    LABEL_26:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
    }
  }
  v18 = v2[20];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    v2[21] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20);
  }
  v21 = v2[17];
  if (v21 != 0) {
    v22 = v2[18];
    if (v21 == v22) {
      goto LABEL_43;
    }
    do {
      v23 = *(_QWORD*)(v22 - 32);
      if (v23 != 0) {
        *(_QWORD*)(v22 - 24) = v23;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
      }
      v22 -= 96;
    } while (v22 != v21);
    v25 = v2[17];
    v2[18] = v21;
    if (v25 != 0) {
    LABEL_43:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v26 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26);
    }
  }
  v27 = v2[16];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v27);
  }
  v28 = v2[10];
  *v2 = gfx_render_Object_vtable;
  if (v28 != 0) {
    v29 = *(_QWORD*)v3;
    v2[11] = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v29 + v30);
  }
  if ((v2[1] & 1) != 0 && v2[3] != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v31 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v31);
  }
  return result;
}

#pragma GCC visibility pop
