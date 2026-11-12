#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10140c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1015560(_QWORD);
__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212fcd8;
extern __int64 (*game_telop_TelopStageClear_vtable[])();
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 TelopStageClear_Unknown33(__int64 a1);
__int64 TelopStageClear_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "TelopStageClear_DeletingDestructor");
__int64
GameRoutine_10140c0_alt1(__int64*, __int64, int, _QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_10140c0");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameHr_1015560(__int64);
void TelopReliance_1386f80(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TelopStageClear_DeletingDestructor(_QWORD* a1);

__int64 TelopStageClear_Unknown33(__int64 a1)
{
  unsigned int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 result;
  struct {
    __int64 v13;
    int v14;
  } v13_;
  _QWORD v15[4];

  v1 = *(_DWORD*)(a1 + 888);
  v3 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 168),
                                       (__int64)"T_TurnNum");
  if (v3 != 0) {
    v4 = __dynamic_cast(v3, GameData_212d670[0], GameData_212d690, 0);
    if (v4 != 0) {
      GameRoutine_156c910_alt1(v4, "%d", 1, v1);
    }
  }
  v5 = *(_QWORD*)(a1 + 880);
  if (*(_BYTE*)(v5 + 2136) != 0) {
    v6 = game_97b2f0(v5 + 2104);
    if (v6 == nullptr) {
      goto LABEL_10;
    }
  }
  else {
    v6 = GameHr_67ed20(*(_QWORD**)(v5 + 392));
    if (v6 == nullptr) {
      goto LABEL_10;
    }
  }
  v7 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 168),
                                          (__int64)"T_MVPUnit");
  if (v7 != 0) {
    GameRoutine_156c5d0_alt1(v7, (__int64)v6, 0);
  }
LABEL_10:
  v8 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 168), (__int64)"Face");
  if (v8 != 0) {
    v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v9 = 0;
  }
  v10 = *(_QWORD*)(a1 + 880);
  memset(v15, 0, 24);
  v11 = *(__int64**)(a1 + 896);
  v13_.v13 = v10;
  v13_.v14 = 1;
  v15[3] = *(_QWORD*)GameData_212fcd8;
  result =
      GameRoutine_10140c0_alt1(v11, v9, 0, &v13_.v13, (unsigned __int8*)v15);
  if ((result & 1) == 0) {
    return ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 168, (__int64)"Face", 0);
  }
  return result;
}

void TelopStageClear_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[112];
  a1[112] = 0;
  *a1 = game_telop_TelopStageClear_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameHr_1015560(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v1);
    v5 = a1[112];
    a1[112] = 0;
    if (v5 != 0) {
      GameHr_1015560(v5);
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, v5);
    }
  }
  v7 = a1[106];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v8 = a1[104];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  TelopReliance_1386f80((__int64)a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, (__int64)a1);
}

#pragma GCC visibility pop
