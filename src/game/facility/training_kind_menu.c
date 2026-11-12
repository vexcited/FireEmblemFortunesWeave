#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1841190(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_facility_TrainingKindMenu_SetTrainingMastery_lambda0_Invoke_alt1(
    __int64 result,
    unsigned __int8* a2) __asm__("game_facility_TrainingKindMenu_"
                                 "SetTrainingMastery_lambda0_Invoke");
__int64
GameRoutine_1841190_alt1(__int64,
                         unsigned __int8) __asm__("GameRoutine_1841190");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_TrainingKindMenu_SetTrainingMastery_lambda0_Invoke(
    __int64* a1, unsigned __int8* a2);

void game_facility_TrainingKindMenu_SetTrainingMastery_lambda0_Invoke(
    __int64* a1, unsigned __int8* a2)
{
  int* v2;
  int v4;
  __int64 v5;
  char* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[2];
    char* v17;
  } v16_;

  v2 = (int*)a1[3];
  v4 = *v2;
  if (*v2 > 3) {
    return;
  }
  v5 = *a2;
  if (*(char*)(a1[2] + v5) < 1) {
    return;
  }
  *v2 = v4 + 1;
  v7 = game_util_Format_alt1("IconMastery%02d", v4);
  v8 = strlen_alt1(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v16_.v16[1] = v9;
    v16_.v17 = v10;
    v16_.v16[0] = v11 | 1;
  }
  else {
    LOBYTE(v16_.v16[0]) = 2 * v8;
    v10 = (char*)v16_.v16 + 1;
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  memmove_alt1((__int64)v10, (__int64)v7, v9);
LABEL_12:
  v10[v9] = 0;
  if ((v16_.v16[0] & 1) != 0) {
    v12 = v16_.v17;
  }
  else {
    v12 = (char*)v16_.v16 + 1;
  }
  ui_LayoutAccessor_SetPaneVisible_alt1(a1[1], (__int64)v12, 1);
  if ((v16_.v16[0] & 1) != 0) {
    v13 = v16_.v17;
  }
  else {
    v13 = (char*)v16_.v16 + 1;
  }
  v14 = ui_LayoutAccessor_FindPane_alt1((__int64*)a1[1], (__int64)v13);
  if (v14 != 0) {
    v14 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1841190_alt1(v14, v5);
  if ((v16_.v16[0] & 1) != 0 && v16_.v17 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v16_.v17);
  }
}

#pragma GCC visibility pop
