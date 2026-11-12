#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_gameui_control_HPStock_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131b48[2];
__int64 HPStock_DeletingDestructor_alt1(__int64 a1) __asm__(
    "HPStock_DeletingDestructor");
__int64 LayoutAccessor_155e140(_QWORD);
extern __int64 (*ui_ILayoutControl_vtable)();
__int64 HPStock_18a2270_alt1(__int64 a1) __asm__("HPStock_18a2270");
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2103950[])();
extern __int64 (*HPStock_18a2270_ptr[])();
__attribute__((swiftcall)) void
HPStock_18a1c50(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1, __int64 a2);
__attribute__((swiftcall)) void HPStock_18a1e80(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2);
_QWORD* ui_LayoutAccessor_Setup_155dea0_alt1(_QWORD*, _QWORD*, __int64) __asm__(
    "ui_LayoutAccessor_Setup_155dea0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutEx_579160_alt1(__int64, __int64) __asm__("LayoutEx_579160");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void ui_ILayoutControl_UpdatePath_alt1(__int64) __asm__(
    "ui_ILayoutControl_UpdatePath");
__int64 LayoutAccessor_155e140_alt1(__int64*) __asm__("LayoutAccessor_155e140");
void GameRoutine_1563f90_alt1(__int64, __int64) __asm__("GameRoutine_1563f90");
void GameRoutine_1564060_alt1(__int64*) __asm__("GameRoutine_1564060");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void HPStock_DeletingDestructor(__int64 a1);
void HPStock_18a2270(__int64 a1);
__attribute__((swiftcall)) void

HPStock_18a1c50(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  const char* v9;
  unsigned __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  char* v20;
  char* v21;
  __int64 result;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  v6 = (_QWORD*)LayoutEx_579160_alt1(200, 8);
  v6[1] = 0;
  v6[2] = 0;
  v7 = v6;
  *v6 = GameData_2103950;
  v6[4] = a1;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  v6[3] = &ui_ILayoutControl_vtable;
  v8 = v6 + 3;
  v9 = (const char*)(*(_QWORD*)(a1 + 24) + 176LL);
  v10 = strlen_alt1(v9);
  v7[5] = v9;
  v7[6] = v10;
  v11 = *(const char**)(a1 + 48);
  v12 = strlen_alt1(v11);
  v7[7] = v11;
  v7[8] = v12;
  ui_ILayoutControl_UpdatePath_alt1((__int64)v8);
  v7[12] = 0;
  v7[13] = 0;
  v7[14] = 0;
  v7[17] = 0;
  v7[18] = 0;
  v7[19] = 0;
  v7[20] = 0;
  v7[21] = 0;
  v7[23] = 0;
  v7[24] = 0;
  *v8 = game_gameui_control_HPStock_vtable;
  v7[16] = 0;
  v7[15] = v7 + 16;
  *((_DWORD*)v7 + 44) = 1065353216;
  if (a2 != 0) {
    v13 = *(_QWORD*)(a2 + 16);
    if (v13 != 0) {
      v14 = *(_QWORD*)(a2 + 8);
      v15 = *(_QWORD*)(a2 + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      v23_.v23 = 0;
      v16 = std___1___shared_weak_count_lock_alt1(v15);
      v23_.v24 = v16;
      if (v16 != 0) {
        v17 = v16;
        v23_.v23 = v14;
        ui_LayoutAccessor_Setup_155dea0_alt1(v7 + 12, &v23_.v23, a1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt1(v17);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dea0_alt1(v7 + 12, &v23_.v23, a1);
      }
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
    else {
      v23_.v23 = 0;
      v23_.v24 = 0;
      ui_LayoutAccessor_Setup_155dea0_alt1(v7 + 12, &v23_.v23, a1);
    }
  }
  v18 = game_util_Format_alt1("Stock%02d", 2);
  LayoutAccessor_1562cf0_alt1((__int64)(v7 + 12), v18);
  v19 = game_util_Format_alt1("Icon%02d_%s", 0, "Enable");
  LayoutAccessor_1562cf0_alt1((__int64)(v7 + 12), v19);
  v20 = game_util_Format_alt1("Icon%02d_%s", 1, "Enable");
  LayoutAccessor_1562cf0_alt1((__int64)(v7 + 12), v20);
  v21 = game_util_Format_alt1("Icon%02d_%s", 2, "Enable");
  result = LayoutAccessor_1562cf0_alt1((__int64)(v7 + 12), v21);
  *a3 = v8;
  a3[1] = v7;
  v7[3] = HPStock_18a2270_ptr;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void HPStock_18a1e80(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;

  v6 = (_QWORD*)LayoutEx_579160(200, 8);
  v6[1] = 0;
  v6[2] = 0;
  v7 = v6;
  *v6 = GameData_2103950;
  v6[4] = a2;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  v6[3] = &ui_ILayoutControl_vtable;
  v8 = v6 + 3;
  v9 = *(_QWORD*)(a2 + 24) + 176LL;
  v10 = strlen(v9);
  v7[5] = v9;
  v7[6] = v10;
  v11 = *(_QWORD*)(a2 + 48);
  v12 = strlen(v11);
  v7[7] = v11;
  v7[8] = v12;
  ui_ILayoutControl_UpdatePath(v8);
  v7[12] = 0;
  v7[13] = 0;
  v7[14] = 0;
  v7[17] = 0;
  v7[18] = 0;
  v7[19] = 0;
  v7[20] = 0;
  v7[21] = 0;
  v7[23] = 0;
  v7[24] = 0;
  v21 = 0;
  v22 = 0;
  *v8 = game_gameui_control_HPStock_vtable;
  v7[16] = 0;
  v7[15] = v7 + 16;
  *((_DWORD*)v7 + 44) = 1065353216;
  v13 = *(_QWORD*)(a1 + 80);
  if (v13 != 0 &&
      (v14 = std___1___shared_weak_count_lock(v13), v22 = v14, v14 != 0)) {
    v15 = v14;
    v21 = *(_QWORD*)(a1 + 72);
    ui_LayoutAccessor_Setup_155dea0(v7 + 12, &v21, a2);
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dea0(v7 + 12, &v21, a2);
  }
  v16 = game_util_Format("Stock%02d", 2);
  LayoutAccessor_1562cf0(v7 + 12, v16);
  v17 = game_util_Format("Icon%02d_%s", 0, "Enable");
  LayoutAccessor_1562cf0(v7 + 12, v17);
  v18 = game_util_Format("Icon%02d_%s", 1, "Enable");
  LayoutAccessor_1562cf0(v7 + 12, v18);
  v19 = game_util_Format("Icon%02d_%s", 2, "Enable");
  result = LayoutAccessor_1562cf0(v7 + 12, v19);
  *a3 = v8;
  a3[1] = v7;
  v7[3] = HPStock_18a2270_ptr;
  {
    result;
    return;
  }
}

void HPStock_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_gameui_control_HPStock_vtable;
  LayoutAccessor_155e140_alt1((__int64*)(a1 + 72));
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  GameRoutine_1564060_alt1((__int64*)(a1 + 120));
  GameRoutine_1563f90_alt1(a1 + 96, *(_QWORD*)(a1 + 104));
  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  *(_QWORD*)a1 = GameData_2131b48[0] + 2;
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 64);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v7, a1);
}

void HPStock_18a2270(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_gameui_control_HPStock_vtable;
  LayoutAccessor_155e140_alt1((__int64*)(a1 + 72));
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  GameRoutine_1564060_alt1((__int64*)(a1 + 120));
  GameRoutine_1563f90_alt1(a1 + 96, *(_QWORD*)(a1 + 104));
  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 64);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
}

#pragma GCC visibility pop
