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
__int64 game_facility_TrainingKindMenu_SetTrainingMastery_lambda0_Invoke(
    __int64 result, unsigned __int8* a2);

__int64 game_facility_TrainingKindMenu_SetTrainingMastery_lambda0_Invoke(
    __int64 result, unsigned __int8* a2)
{
  int* v2;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;

  v2 = *(int**)(result + 24);
  v4 = *v2;
  if (*v2 > 3) {
    return result;
  }
  v5 = *a2;
  v6 = result;
  if (*(char*)(*(_QWORD*)(result + 16) + v5) < 1) {
    return result;
  }
  *v2 = v4 + 1;
  v7 = game_util_Format("IconMastery%02d", v4);
  v8 = strlen(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v8);
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v16[1] = v9;
    v17 = v10;
    v16[0] = v11 | 1;
  }
  else {
    LOBYTE(v16[0]) = 2 * v8;
    v10 = (char*)v16 + 1;
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v10, v7, v9);
LABEL_12:
  v10[v9] = 0;
  if ((v16[0] & 1) != 0) {
    v12 = v17;
  }
  else {
    v12 = (char*)v16 + 1;
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(v6 + 8), v12, 1);
  if ((v16[0] & 1) != 0) {
    v13 = v17;
  }
  else {
    v13 = (char*)v16 + 1;
  }
  v14 = ui_LayoutAccessor_FindPane(*(_QWORD*)(v6 + 8), v13);
  if (v14 != 0) {
    v14 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
  }
  result = GameRoutine_1841190(v14, (unsigned int)v5);
  if ((v16[0] & 1) != 0 && v17 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  return result;
}

#pragma GCC visibility pop
