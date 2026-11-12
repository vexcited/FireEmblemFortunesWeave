#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_menu_BasicMenu_Destroy_BasicMenu(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64* GameData_2131b18[5];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcObeliskMenu_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ProcObeliskMenu_DeletingDestructor");
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Destroy_BasicMenu");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcObeliskMenu_DeletingDestructor(_QWORD* a1);

void ProcObeliskMenu_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v2 = GameData_2131b18[0];
  *a1 = GameData_2131b18[0] + 2;
  a1[22] = v2 + 144;
  a1[132] = v2 + 170;
  v3 = a1 + 134;
  v4 = (_QWORD*)a1[138];
  if (v4 == v3) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_6:
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)a1);
}

#pragma GCC visibility pop
