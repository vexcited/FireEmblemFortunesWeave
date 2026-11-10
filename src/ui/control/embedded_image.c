#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13681c0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___hash_memory(_QWORD, _QWORD);
extern _UNKNOWN GameData_21f8028;
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 (*ui_control_EmbeddedImage_vtable[])();
extern __int64 GameData_21f8020;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
__int64 EmbeddedImage_188a200(__int64 a1, __int64 a2);

__int64 EmbeddedImage_188a200(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a1 = ui_control_EmbeddedImage_vtable;
  if (v2 != 0) {
    v4 = *(_QWORD*)(v2 + 24);
  }
  else {
    v4 = 0;
  }
  v5 = ui_Manager_instance_;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f8028, a2) != 0) {
    GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(&GameData_21f8028);
  }
  if (v4 == 0) {
    goto LABEL_14;
  }
  v6 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  if (v6 == &GameData_21f8020) {
    goto LABEL_13;
  }
  do {
    v6 = (__int64*)*v6;
  } while (v6 != &GameData_21f8020 && v6 != nullptr);
  if (v6 != nullptr) {
  LABEL_13:
    v11 = v4;
    v8 = std___1___hash_memory(&v11, 8);
  }
  else {
  LABEL_14:
    v8 = 0;
  }
  result = GameRoutine_13681c0(v5, v8);
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  return result;
}

#pragma GCC visibility pop
