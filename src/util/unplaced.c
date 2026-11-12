#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void util_cb2640(__int64** a1);

void util_cb2640(__int64** a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = *a1;
  v2 = **a1;
  if (v2 != 0) {
    v3 = v1[1];
    v5 = fw_memory_g_heap_manager_ptr;
    while (v3 != v2) {
      v6 = *(_QWORD**)(v3 - 16);
      v7 = v3;
      if ((_QWORD*)(v3 - 48) == v6) {
        v8 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_10;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v6 + v8))((__int64)v6);
    LABEL_10:
      v9 = *(_QWORD**)(v3 - 64);
      if ((_QWORD*)(v3 - 96) == v9) {
        v10 = 32;
      }
      else {
        if (v9 == nullptr) {
          goto LABEL_15;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
    LABEL_15:
      v11 = *(_QWORD**)(v3 - 112);
      if ((_QWORD*)(v3 - 144) == v11) {
        v12 = 32;
      }
      else {
        if (v11 == nullptr) {
          goto LABEL_20;
        }
        v12 = 40;
      }
      (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
    LABEL_20:
      v3 -= 176;
      if ((*(_BYTE*)(v7 - 176) & 1) != 0) {
        v13 = *(_QWORD*)(v7 - 160);
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v14, v13);
        }
      }
    }
    v1[1] = v2;
    v15 = **a1;
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, v15);
    }
  }
}

#pragma GCC visibility pop
