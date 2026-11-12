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
__int64 DoLaterProc_DeletingDestructor_alt1(__int64 a1) __asm__(
    "DoLaterProc_DeletingDestructor");
float DoLaterProc_Unknown18(__int64 a1);
_QWORD* DoLaterProc_Unknown19(_QWORD* result);
_BYTE* ProcInst_657a50(__int64, char);
float* DoLaterProc_Unknown3(float* result);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DoLaterProc_DeletingDestructor(__int64 a1);

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

void DoLaterProc_DeletingDestructor(__int64 a1)
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
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, a1);
}

float* DoLaterProc_Unknown3(float* result)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  __int64 v3;

  v1 = result[49];
  v2 = result[48] + (float)((float)(*(float*)(*((_QWORD*)result + 25) + 16LL) *
                                    0x1.0aef000000000p+4f) /
                            0x1.f400000000000p+9f);
  result[48] = v2;
  if (v2 >= v1) {
    v3 = (__int64)result;
    result =
        (float*)(*(__int64 (**)(float*))(*(_QWORD*)result + 152LL))(result);
    if ((*(_WORD*)(v3 + 136) & 1) == 0) {
      return (float*)ProcInst_657a50(v3, 1);
    }
  }
  return result;
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
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 48LL))(
        (void*)v1, result[30]);
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
