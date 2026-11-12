#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 ui_LayoutAccessor_empty_;
__int64 ProcHpInfo_Unknown28(__int64 a1);
__int64 ProcHpInfo_Unknown29(__int64 a1);
_QWORD* GameRoutine_15e5e00(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_cmdbtl_anonymous_ProcHpInfo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ProcHpInfo_Destructor(_QWORD* a1);
__int64 ProcHpInfo_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ProcHpInfo_DeletingDestructor");
void GameRoutine_15e5e00_alt1(__int64) __asm__("GameRoutine_15e5e00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcHpInfo_DeletingDestructor(_QWORD* a1);

_QWORD* ProcHpInfo_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *a1 = game_cmdbtl_anonymous_ProcHpInfo_vtable;
  v2 = a1 + 26;
  v3 = (_QWORD*)a1[30];
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  return GameRoutine_15e5e00((__int64)a1);
}

void ProcHpInfo_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_cmdbtl_anonymous_ProcHpInfo_vtable;
  v2 = a1 + 26;
  v3 = (_QWORD*)a1[30];
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
  GameRoutine_15e5e00_alt1((__int64)a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)a1);
}

__int64 ProcHpInfo_Unknown28(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64* v4;

  result = *(_QWORD*)(a1 + 240);
  if (result != 0) {
    v3 = *(__int64**)(a1 + 168);
    if (v3 != nullptr) {
      v4 = v3;
    }
    else {
      v4 = &ui_LayoutAccessor_empty_;
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         v4);
  }
  return result;
}

__int64 ProcHpInfo_Unknown29(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64* v4;

  result = *(_QWORD*)(a1 + 240);
  if (result != 0) {
    v3 = *(__int64**)(a1 + 168);
    if (v3 != nullptr) {
      v4 = v3;
    }
    else {
      v4 = &ui_LayoutAccessor_empty_;
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(result,
                                                                         v4);
  }
  return result;
}

#pragma GCC visibility pop
