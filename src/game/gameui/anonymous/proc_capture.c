#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_658c00(_QWORD* result);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_anonymous_ProcCapture_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 GameData_2259690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
_QWORD* ProcCapture_Destructor(__int64 a1);
__int64 ProcCapture_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcCapture_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcCapture_DeletingDestructor(__int64 a1);

_QWORD* ProcCapture_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char* v7;
  char v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _BYTE v14[4];

  *(_QWORD*)a1 = game_gameui_anonymous_ProcCapture_vtable;
  if ((*(_BYTE*)(a1 + 152) & 1) == 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
    v3 = *(_QWORD*)(game_g_frame_clock + 13224);
    v4 = *(_QWORD*)(v3 + 48);
    v5 = *(_QWORD*)(v3 + 56);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      v6 = *(_BYTE**)(*(_QWORD*)(v4 + 8) + 304LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    else {
      v6 = *(_BYTE**)(*(_QWORD*)(v4 + 8) + 304LL);
    }
    v7 = v6 + 249;
    if (v6[250] == 0) {
      v7 = v6 + 280;
    }
    v8 = *v7;
    if (v6[250] == 1) {
      v6[250] = 0;
    }
    if (v6[176] == 1) {
      v6[176] = 0;
    }
    v9 = *(__int64**)(v2 + 544);
    if (v9 != nullptr && (v8 & 1) != 0) {
      v10 = *v9;
      v14[0] = 0;
      (*(void (**)(__int64*, _BYTE*))(v10 + 48))(v9, v14);
    }
  }
  v11 = *(_QWORD**)(a1 + 224);
  if (v11 == (_QWORD*)(a1 + 192)) {
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
  GameData_2259690 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

void ProcCapture_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char* v7;
  char v8;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _BYTE v14[4];

  *(_QWORD*)a1 = game_gameui_anonymous_ProcCapture_vtable;
  if ((*(_BYTE*)(a1 + 152) & 1) == 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
    v3 = *(_QWORD*)(game_g_frame_clock + 13224);
    v4 = *(_QWORD*)(v3 + 48);
    v5 = *(_QWORD*)(v3 + 56);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      v6 = *(_BYTE**)(*(_QWORD*)(v4 + 8) + 304LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
    else {
      v6 = *(_BYTE**)(*(_QWORD*)(v4 + 8) + 304LL);
    }
    v7 = v6 + 249;
    if (v6[250] == 0) {
      v7 = v6 + 280;
    }
    v8 = *v7;
    if (v6[250] == 1) {
      v6[250] = 0;
    }
    if (v6[176] == 1) {
      v6[176] = 0;
    }
    v9 = *(__int64**)(v2 + 544);
    if (v9 != nullptr && (v8 & 1) != 0) {
      v10 = *v9;
      v14[0] = 0;
      (*(void (**)(__int64*, _BYTE*))(v10 + 48))(v9, v14);
    }
  }
  v11 = *(_QWORD**)(a1 + 224);
  if (v11 == (_QWORD*)(a1 + 192)) {
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
  GameData_2259690 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, a1);
}

#pragma GCC visibility pop
