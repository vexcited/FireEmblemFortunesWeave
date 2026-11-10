#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*kaneko_disposable_DisposableProcInst_vtable[])();
extern __int64 (*kaneko_disposable_DoLaterProc_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 DoLaterProc_Destructor(__int64 a1);
__int64 DoLaterProc_DeletingDestructor(__int64 a1);
float DoLaterProc_Unknown18(__int64 a1);
_QWORD* DoLaterProc_Unknown19(_QWORD* result);

__int64 DoLaterProc_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = kaneko_disposable_DoLaterProc_vtable;
  v2 = (_QWORD*)(a1 + 208);
  v3 = *(_QWORD**)(a1 + 240);
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
  v5 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = kaneko_disposable_DisposableProcInst_vtable;
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 DoLaterProc_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = kaneko_disposable_DoLaterProc_vtable;
  v2 = (_QWORD*)(a1 + 208);
  v3 = *(_QWORD**)(a1 + 240);
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
  v5 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = kaneko_disposable_DisposableProcInst_vtable;
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v7);
}

float DoLaterProc_Unknown18(__int64 a1)
{
  return *(float*)(a1 + 196) - *(float*)(a1 + 192);
}

_QWORD* DoLaterProc_Unknown19(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  v1 = (_QWORD*)result[30];
  if (v1 != nullptr) {
    v2 = result + 26;
    v3 = result;
    (*(void (**)(_QWORD* __return_ptr, _QWORD))(*v1 + 48LL))(v1, result[30]);
    result = (_QWORD*)v3[30];
    v3[30] = 0;
    if (result == v2) {
      v4 = 32;
      return (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
    }
    if (result != nullptr) {
      v4 = 40;
      return (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
    }
  }
  return result;
}

#pragma GCC visibility pop
