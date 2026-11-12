#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LayoutAccessor_155ca60(__int64);
__int64 game_ProcInst_Unregister(__int64 result);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_AnimTaskProc_vtable[])();
extern __int64* GameData_212d890[2];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_658c00(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void AnimTaskProc_Destructor(__int64 a1);
void AnimTaskProc_DeletingDestructor(__int64 a1);
_QWORD* AnimTaskProc_Unknown5(_QWORD* result);

void AnimTaskProc_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = game_map_AnimTaskProc_vtable;
  v2 = (_QWORD*)(a1 + 336);
  v3 = *(_QWORD**)(a1 + 368);
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
  LayoutAccessor_155ca60(a1 + 160);
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

void AnimTaskProc_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_map_AnimTaskProc_vtable;
  v2 = (_QWORD*)(a1 + 336);
  v3 = *(_QWORD**)(a1 + 368);
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
  LayoutAccessor_155ca60(a1 + 160);
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                a1);
}

_QWORD* AnimTaskProc_Unknown5(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  struct {
    __int64* v7;
    int v8;
    char gap20_[4];
    __int64 v9;
  } v7_;
  __int64 var4;

  v1 = result[19];
  result[19] = 0;
  if (v1 != 0) {
    v2 = (_QWORD*)result[46];
    if (v2 != nullptr) {
      v3 = result + 42;
      v4 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v2 + 48LL))(
          (void*)(v2), result[46]);
      v5 = (_QWORD*)v4[46];
      v4[46] = 0;
      if (v5 == v3) {
        v6 = 32;
        goto LABEL_7;
      }
      if (v5 != nullptr) {
        v6 = 40;
      LABEL_7:
        (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
      }
    }
    v7_.v9 = 0;
    v7_.v7 = GameData_212d890[0] + 2;
    v7_.v8 = 1;
    return X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)v1 + 16LL))((void*)&var4, v1, &v7_.v7));
  }
  return result;
}

#pragma GCC visibility pop
