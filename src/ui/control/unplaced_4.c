#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void ui_control_1886f20(PSEUDO_X8, _QWORD*,
                                                   unsigned int, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void ui_control_1888120(PSEUDO_X8 x8_, _QWORD* a1,
                                                   unsigned int a2, __int64 a3);

__attribute__((swiftcall)) void ui_control_1888120(PSEUDO_X8 x8_, _QWORD* a1,
                                                   unsigned int a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  _QWORD* v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _BYTE v15[32];
    _BYTE* v16;
  } v15_;
  __int64 v17[3];

  v5 = *(_QWORD*)(a3 + 32);
  if (v5 != 0) {
    v7 = a1;
    v8 = a2;
    if (v5 == a3) {
      v15_.v16 = v15_.v15;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v15_.v15);
    }
    else {
      v15_.v16 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
    a2 = v8;
    a1 = v7;
  }
  else {
    v15_.v16 = nullptr;
  }
  ui_control_1886f20((void*)(v17), a1, a2, (__int64)v15_.v15);
  if (v15_.v16 == v15_.v15) {
    v9 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_12;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15_.v16 + v9))((__int64)v15_.v16);
LABEL_12:
  v10 = v17[0];
  v11 = v17[1];
  if (v17[0] == v17[1]) {
    *a4 = 0;
    a4[1] = 0;
    if (v10 == 0) {
      return;
    }
    goto LABEL_20;
  }
  v12 = *(_QWORD*)(v17[0] + 8);
  *a4 = *(_QWORD*)v17[0];
  a4[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  do {
    v13 = *(_QWORD*)(v11 - 8);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
    v11 -= 16;
  } while (v11 != v10);
  v10 = v17[0];
  if (v17[0] != 0) {
  LABEL_20:
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v10);
  }
}

#pragma GCC visibility pop
