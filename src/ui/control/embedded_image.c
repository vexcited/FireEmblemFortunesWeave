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
__int64 EmbeddedImage_188a200_alt1(__int64 a1,
                                   __int64 a2) __asm__("EmbeddedImage_188a200");
__int64 AsyncLoadImage_17e48a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
extern __int64 (*EmbeddedImage_188a200_ptr[])();
extern __int64 (*GameData_20ff378[])();
__attribute__((swiftcall)) void EmbeddedImage_18895c0(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2, __int64 a3);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_13681c0_alt1(_QWORD*,
                              unsigned __int64) __asm__("GameRoutine_13681c0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void EmbeddedImage_188a200(__int64 a1);

__attribute__((swiftcall)) void EmbeddedImage_18895c0(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  _QWORD v19[2];

  v8 = (_QWORD*)LayoutEx_579160(136, 8);
  v8[1] = 0;
  v8[2] = 0;
  v9 = v8;
  *v8 = GameData_20ff378;
  v8[4] = a2;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v8[8] = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  v8[3] = &ui_ILayoutControl_vtable;
  v10 = v8 + 3;
  v11 = *(_QWORD*)(a2 + 24) + 176LL;
  v12 = strlen(v11);
  v9[5] = v11;
  v9[6] = v12;
  v13 = *(_QWORD*)(a2 + 48);
  v14 = strlen(v13);
  v9[7] = v13;
  v9[8] = v14;
  ui_ILayoutControl_UpdatePath(v10);
  v9[12] = a3;
  v9[13] = 0;
  v9[14] = 0;
  v9[15] = 0;
  *((_DWORD*)v9 + 32) = 0;
  *v10 = ui_control_EmbeddedImage_vtable;
  v19[0] = "Image";
  v19[1] = 5;
  v9[13] = AsyncLoadImage_17e48a0(v10, a2, a1, v19);
  v15 = Pane_58fac0(*(_QWORD*)(a2 + 24), "Margin");
  if (v15 != 0 || (v15 = GameRoutine_576740(a1, "Margin")) != 0) {
    *((float*)v9 + 30) = (float)*(int*)(v15 + *(unsigned int*)(v15 + 4));
  }
  v16 = Pane_58fac0(*(_QWORD*)(a2 + 24), "FixedWidth");
  if (v16 != 0 || (v16 = GameRoutine_576740(a1, "FixedWidth")) != 0) {
    *((float*)v9 + 31) = (float)*(int*)(v16 + *(unsigned int*)(v16 + 4));
  }
  v17 = Pane_58fac0(*(_QWORD*)(a2 + 24), "FixedHeight");
  if (v17 != 0 || (v17 = GameRoutine_576740(a1, "FixedHeight")) != 0) {
    *((float*)v9 + 32) = (float)*(int*)(v17 + *(unsigned int*)(v17 + 4));
  }
  result = (*(__int64 (**)(_QWORD*, _QWORD))(v9[3] + 40LL))(v10, 0);
  *a4 = v10;
  a4[1] = v9;
  v9[3] = EmbeddedImage_188a200_ptr;
  {
    result;
    return;
  }
}

void EmbeddedImage_188a200(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a1 = ui_control_EmbeddedImage_vtable;
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 24);
  }
  else {
    v3 = 0;
  }
  v4 = (_QWORD*)ui_Manager_instance_;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21f8028) != 0) {
    GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_21f8028);
  }
  if (v3 == 0) {
    goto LABEL_14;
  }
  v5 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  if (v5 == &GameData_21f8020) {
    goto LABEL_13;
  }
  do {
    v5 = (__int64*)*v5;
  } while (v5 != &GameData_21f8020 && v5 != nullptr);
  if (v5 != nullptr) {
  LABEL_13:
    v10 = v3;
    v7 = std___1___hash_memory_alt1((__int64)&v10, 8u);
  }
  else {
  LABEL_14:
    v7 = 0;
  }
  GameRoutine_13681c0_alt1(v4, v7);
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 64);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
}

#pragma GCC visibility pop
