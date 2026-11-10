#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_158c260(_QWORD);
__int64 GameRoutine_158ca00(_QWORD);
__int64 GameRoutine_15e5e00(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetTranslate(_QWORD, _QWORD);
extern __int64 (*GameData_207cad8[])();
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern int GameData_225d700;
__int64 CompareInfoCreate_Unknown28(_QWORD* a1);
__int64 CompareInfoCreate_DeletingDestructor(__int64 a1);
__int64 CompareInfoCreate_Destructor(_QWORD* a1);
__int64 CompareInfoCreate_DeletingDestructor_166cd50(_QWORD* a1);

__int64 CompareInfoCreate_Unknown28(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;

  if (a1[28] == a1[29]) {
    v3 = a1[22];
    v7 = a1[21];
    v8 = v3;
    if (v3 == 0) {
      GameRoutine_158ca00(&v7);
      goto LABEL_9;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_158ca00(&v7);
  LABEL_8:
    std___1___shared_weak_count___release_weak(v3);
    goto LABEL_9;
  }
  v2 = a1[22];
  v7 = a1[21];
  v8 = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_158c260(&v7);
  v3 = v8;
  if (v8 != 0) {
    goto LABEL_8;
  }

LABEL_9:
  v4 = (__int64*)a1[21];
  LODWORD(v8) = 0;
  if (v4 != nullptr) {
    v5 = v4;
  }
  else {
    v5 = ui_LayoutAccessor_empty__ptr[0];
  }
  v7 = 0x438C000000000000LL;
  return ui_LayoutAccessor_SetTranslate(v5, &v7);
}

__int64 CompareInfoCreate_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)(a1 + 208) = GameData_207cad8;
  if (GameData_225d6f8 == a1) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  GameRoutine_15e5e00(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 CompareInfoCreate_Destructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = GameData_207cad8;
  v1 = (__int64)(a1 - 26);
  if (GameData_225d6f8 == v1) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  return GameRoutine_15e5e00(v1);
}

__int64 CompareInfoCreate_DeletingDestructor_166cd50(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;

  *a1 = GameData_207cad8;
  v1 = a1 - 26;
  if ((_QWORD*)GameData_225d6f8 == a1 - 26) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  GameRoutine_15e5e00((__int64)(a1 - 26));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
}

#pragma GCC visibility pop
