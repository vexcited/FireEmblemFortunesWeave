#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_18850d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17aa380(_QWORD, _QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20d1818[])();
extern __int64 (*GameData_20d1878[])();
extern __int64 (*GameData_20d1a30[])();
extern __int64 (*game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr[])();
extern __int64 (*game_gameui_control_KeyIcon_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
__attribute__((swiftcall)) void KeyIcon_17aa140(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2);
__attribute__((swiftcall)) void KeyIcon_17aa270(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2);
__attribute__((swiftcall)) void KeyIcon_17aa2f0(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2);

__attribute__((swiftcall)) void KeyIcon_17aa140(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* result;
  _QWORD* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v6 = (_QWORD*)LayoutEx_579160(1072, 8);
  v7 = v6 + 3;
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_20d1878;
  result = (_QWORD*)Element_18850d0(v6 + 3, a1, a2);
  v8[3] = game_gameui_control_KeyIcon_vtable;
  v8[12] = GameData_20d1818;
  v10 = v8 + 12;
  *((_DWORD*)v8 + 263) = *(_DWORD*)(a1 + 1028);
  v11 = *(_DWORD*)(a1 + 1032);
  *((_DWORD*)v8 + 265) = 0;
  *((_DWORD*)v8 + 264) = v11;
  *((_BYTE*)v8 + 1064) = *(_BYTE*)(a1 + 1040);
  v12 = ui_Manager_instance_;
  v13 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v14 = ui_Manager_instance_ + 1240;
  if (v13 == ui_Manager_instance_ + 1240) {
    goto LABEL_4;
  }
  while (*(_QWORD**)(v13 + 16) != v10) {
    v13 = *(_QWORD*)(v13 + 8);
    if (v13 == v14) {
      goto LABEL_4;
    }
  }
  if (v13 == v14) {
  LABEL_4:
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    result[1] = v14;
    result[2] = v10;
    v15 = *(_QWORD*)(v12 + 1240);
    *result = v15;
    *(_QWORD*)(v15 + 8) = result;
    *(_QWORD*)(v12 + 1240) = result;
    ++*(_QWORD*)(v12 + 1256);
  }
  *a3 = v7;
  a3[1] = v8;
  v8[3] = game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr;
  v8[12] = GameData_20d1a30;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void KeyIcon_17aa270(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned int v5;

  if (*(_DWORD*)(a2 + 8) == 46) {
    v4 = result;
    if ((*(_BYTE*)(result + 1040) & 1) == 0) {
      v5 = *(_DWORD*)(result + 1032);
      result = GameRoutine_17aa380(result, "TextKey",
                                   *(unsigned int*)(result + 1028));
      if (v5 != 36) {
        *(_DWORD*)(v4 + 1032) = v5;
        result = GameRoutine_17aa380(v4, "TextKey2", v5);
      }
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void KeyIcon_17aa2f0(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned int v5;

  if (*(_DWORD*)(a2 + 8) == 46) {
    v4 = result;
    if ((*(_BYTE*)(result + 968) & 1) == 0) {
      v5 = *(_DWORD*)(result + 960);
      result = GameRoutine_17aa380(result - 72, "TextKey",
                                   *(unsigned int*)(result + 956));
      if (v5 != 36) {
        *(_DWORD*)(v4 + 960) = v5;
        result = GameRoutine_17aa380(v4 - 72, "TextKey2", v5);
      }
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
