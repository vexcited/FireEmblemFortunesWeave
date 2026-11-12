#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_d9b060(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__attribute__((swiftcall)) void Manager_d9b420(PSEUDO_X8, _QWORD*,
                                               unsigned __int8*);
__attribute__((swiftcall)) void Manager_d9ba20(PSEUDO_X8, __int64,
                                               unsigned __int8*, _QWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
bool as_d9af70(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5);
__attribute__((swiftcall)) void as_d9b900(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                          __int64 a3, __int64 a4, __int64 a5,
                                          _QWORD* a6, __int64 a7, __int64* a8);

bool as_d9af70(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v10[2];
  struct {
    _QWORD v11[2];
    __int64 v12;
  } v11_;

  GameRoutine_d9b060((void*)(v11_.v11), a1, "void", 4, a2, a3, a4, a5);
  Manager_d9b420((void*)(v10), a1, (unsigned __int8*)v11_.v11);
  v7 = v10[0];
  v6 = v10[1];
  if (v10[1] != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10[1] + 8LL),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    if ((v11_.v11[0] & 1) == 0) {
      return v7 != 0;
    }
  }
  else if ((v11_.v11[0] & 1) == 0) {
    return v7 != 0;
  }
  if (v11_.v12 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v11_.v12);
  }
  return v7 != 0;
}

__attribute__((swiftcall)) void as_d9b900(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                          __int64 a3, __int64 a4, __int64 a5,
                                          _QWORD* a6, __int64 a7, __int64* a8)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    unsigned __int64 v18;
    char* v19;
  } v17_;

  GameRoutine_d9b060((void*)(&v17_.v17), a1, a2, a3, a4, a5, a6, a7);
  Manager_d9ba20((void*)(a9), a1, (unsigned __int8*)&v17_.v17, a6);
  if (a8 == &v17_.v17) {
    goto LABEL_13;
  }
  if ((*(_BYTE*)a8 & 1) != 0) {
    if ((v17_.v17 & 1) != 0) {
      v14 = v17_.v19;
    }
    else {
      v14 = (char*)&v17_.v17 + 1;
    }
    if ((v17_.v17 & 1) != 0) {
      v15 = v17_.v18;
    }
    else {
      v15 = (unsigned __int64)(unsigned __int8)v17_.v17 >> 1;
    }
    SpineModel_64dde0(a8, (__int64)v14, v15);
  LABEL_13:
    if ((v17_.v17 & 1) == 0) {
      return;
    }
    goto LABEL_14;
  }
  if ((v17_.v17 & 1) != 0) {
    GameRoutine_64df20(a8, (__int64)v17_.v19, v17_.v18);
    if ((v17_.v17 & 1) == 0) {
      return;
    }
  }
  else {
    v13 = v17_.v18;
    *a8 = v17_.v17;
    a8[1] = v13;
    a8[2] = (__int64)v17_.v19;
    if ((v17_.v17 & 1) == 0) {
      return;
    }
  }
LABEL_14:
  if (v17_.v19 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  (__int64)v17_.v19);
  }
}

#pragma GCC visibility pop
