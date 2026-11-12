#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_18850d0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 GameRoutine_156d490(_QWORD, long double);
extern __int64 (*GameData_20c9c00[])();
extern __int64 (*GameData_20c9c40[])();
extern __int64 (*GameData_20c9df8[])();
extern __int64 (*game_gameui_control_KeyArrow_vtable[])();
extern __int64 (*game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr[])();
extern __int64 GameData_2131d90[8];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern char* game_menu_kTabAnimations[21];
long double Element_18863e0(_QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void KeyArrow_1796880(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2);
__int64 Element_18850d0_alt1(__int64, __int64,
                             __int64) __asm__("Element_18850d0");
__int64 Element_18863e0_alt1(__int64, const char**,
                             char) __asm__("Element_18863e0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutEx_579160_alt1(__int64, __int64) __asm__("LayoutEx_579160");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
const char* GameRoutine_156d490_alt1(__int64*) __asm__("GameRoutine_156d490");

__attribute__((swiftcall)) void KeyArrow_1796880(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int8 v16;
  __int64 result;
  const char* v18[2];

  v6 = (_QWORD*)LayoutEx_579160_alt1(1072, 8);
  v7 = (__int64)(v6 + 3);
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_20c9c40;
  Element_18850d0_alt1((__int64)(v6 + 3), a1, a2);
  v9 = GameData_2131d90[0] + 376;
  v8[3] = GameData_2131d90[0] + 16;
  v8[12] = v9;
  v10 = v8 + 12;
  *((_DWORD*)v8 + 263) = *(_DWORD*)(a1 + 1028);
  LODWORD(v9) = *(_DWORD*)(a1 + 1032);
  *((_DWORD*)v8 + 265) = 0;
  *((_DWORD*)v8 + 264) = v9;
  *((_BYTE*)v8 + 1064) = *(_BYTE*)(a1 + 1040);
  v11 = ui_Manager_instance_;
  v12 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v13 = ui_Manager_instance_ + 1240;
  if (v12 == ui_Manager_instance_ + 1240) {
    goto LABEL_4;
  }
  while (*(_QWORD**)(v12 + 16) != v10) {
    v12 = *(_QWORD*)(v12 + 8);
    if (v12 == v13) {
      goto LABEL_4;
    }
  }
  if (v12 == v13) {
  LABEL_4:
    v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    v14[1] = v13;
    v14[2] = v10;
    v15 = *(_QWORD*)(v11 + 1240);
    *v14 = v15;
    *(_QWORD*)(v15 + 8) = v14;
    *(_QWORD*)(v11 + 1240) = v14;
    ++*(_QWORD*)(v11 + 1256);
  }
  v8[3] = game_gameui_control_KeyArrow_vtable;
  v8[12] = GameData_20c9c00;
  *((_BYTE*)v8 + 1065) = *(_BYTE*)(a1 + 1041);
  v18[0] = "Wait";
  v18[1] = (_BYTE*)((_UNKNOWN*)0x4LL);
  Element_18863e0_alt1(v7, v18, 0);
  v16 = (unsigned __int8)GameRoutine_156d490_alt1(v8 + 14);
  *((_BYTE*)v8 + 1065) = v16;
  result = GameHr_1562680((__int64)(v8 + 14), game_menu_kTabAnimations[3 * v16],
                          0x1.0000000000000p+0f);
  *a3 = v7;
  a3[1] = (__int64)v8;
  v8[3] = game_gameui_control_KeyIcon_Destroy_KeyIcon_17aa580_ptr;
  v8[12] = GameData_20c9df8;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
