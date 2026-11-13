#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 SingleThreadFunctionalJob_DeletingDestructor(__int64 a1,
                                                     long double a2);
__int64 SingleThreadFunctionalJob_Unknown2(__int64 a1, __int64 a2);

__int64 SingleThreadFunctionalJob_DeletingDestructor(__int64 a1, long double a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v2 = (_QWORD*)(a1 + 32);
  v3 = *(_QWORD**)(a1 + 64);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_6:
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)a1);
}

__int64 SingleThreadFunctionalJob_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 64);
  if (v2 == 0) {
    GameRoutine_60a310((unsigned __int8)v2, a2);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
}

#pragma GCC visibility pop
