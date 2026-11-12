#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7ad80(void);
__int64 CursorLocatorModule_Unknown6(_QWORD* a1);
__int64 LocatorModule_Destructor(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_CursorLocatorModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CursorLocatorModule_Destructor(_QWORD* a1);
__n128 CursorLocatorModule_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CursorLocatorModule_DeletingDestructor");
void LocatorModule_Destructor_alt1(_QWORD*) __asm__("LocatorModule_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CursorLocatorModule_DeletingDestructor(_QWORD* a1);

__int64 CursorLocatorModule_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *a1 = game_map_CursorLocatorModule_vtable;
  v2 = a1 + 8;
  v3 = (_QWORD*)a1[12];
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  return LocatorModule_Destructor(a1);
}

void CursorLocatorModule_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_map_CursorLocatorModule_vtable;
  v2 = a1 + 8;
  v3 = (_QWORD*)a1[12];
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
  LocatorModule_Destructor_alt1(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)a1);
}

__int64 CursorLocatorModule_Unknown6(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;

  v1 = a1[5];
  v2 = a1[6];
  while (v1 != v2) {
    v1 += 8;
    GameRoutine_a7ad80();
  }
  result = a1[12];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
