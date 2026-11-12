#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void Element_1885a60(PSEUDO_X8, _QWORD* result);
__attribute__((swiftcall)) void MenuItem_188b680(PSEUDO_X8, _QWORD*, __int64);
__int64* GameRoutine_1889230(__int64, __int64, __int64);
__int64 Element_1886290(_QWORD, _QWORD);
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_188ca50(_QWORD*, __int64);
__int64 GameRoutine_1898940(__int64);
__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18ae4d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 GameRoutine_5766a0(_QWORD, _QWORD);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 MenuItem_188b0e0(_QWORD, _QWORD, _QWORD);
__int64 MenuItem_188b880(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212dfd0;
extern __int64 (*GameData_2102688[])();
extern __int64 (*GameData_21026b0[])();
extern __int64 (*GameData_2102758[])();
extern __int64 (*GameData_2102968[])();
extern __int64 (*GameData_2102990[])();
extern __int64 (
    *game_gameui_control_MenuItemSkill_Destroy_MenuItemSkill_189c380_ptr[])();
extern __int64 (*game_gameui_control_MenuItemSkill_vtable[])();
extern __int64 (*ui_Event_vtable[])();
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2132098[3];
extern __int64 GameData_21026d0;
extern __int64 GameData_21026e0;
extern __int64 GameData_21026f0;
extern __int64 GameData_2102700;
extern __int64 GameData_2102710;
extern __int64 GameData_2102720;
extern __int64 GameData_2102730;
extern __int64 GameData_2102740;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_21026c8;
extern char* GameData_21026d8;
extern char* GameData_21026e8;
extern char* GameData_21026f8;
extern char* GameData_2102708;
extern char* GameData_2102718;
extern char* GameData_2102728;
extern char* GameData_2102738;
struct PseudoSret Layout_1363f00(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__attribute__((swiftcall)) void MenuItemSkill_1898db0(PSEUDO_X8 x8_,
                                                      __int64 a1);
__attribute__((swiftcall)) void MenuItemSkill_1899140(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2);
__attribute__((swiftcall)) void
MenuItemSkill_1899240_alt1(__attribute__((swift_indirect_result)) void* x8_,
                           __int64* result) __asm__("MenuItemSkill_1899240");
__attribute__((swiftcall)) void MenuItemSkill_189bb00(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2);
__int64 MenuItemSkill_189be60(_QWORD* a1, char a2);
__int64 MenuItemSkill_189bf80(_QWORD* a1, char a2);
__int64 MenuItemSkill_189c0a0(_QWORD* a1, char a2, int a3);
__int64 MenuItemSkill_189c1c0(_QWORD* a1, char a2, int a3);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN GameData_22594f0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_2130ea0;
extern int GameData_1c1706c[];
extern int GameData_22594e8;
__int64 MenuItemSkill_1899480(__int64 a1, unsigned int a2, char a3, char a4);
_QWORD* Element_1886290_alt1(__int64, const char**) __asm__("Element_1886290");
__attribute__((swiftcall)) void
Layout_1363f00_alt1(PSEUDO_X8, __int64, __int64) __asm__("Layout_1363f00");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__attribute__((swiftcall)) void MenuItemSkill_1899240(PSEUDO_X8 x8_,
                                                      __int64* a1);

__attribute__((swiftcall)) void MenuItemSkill_1898db0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 v5;
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
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  __int64 v27;
  __int64 v28;

  v4 = (_QWORD*)LayoutEx_579160(1160, 8);
  v5 = (__int64)(v4 + 3);
  v6 = v4;
  v4[1] = 0;
  v4[2] = 0;
  *v4 = GameData_2102758;
  GameRoutine_188ca50(v4 + 3, a1);
  *((_BYTE*)v6 + 1100) = 0;
  *((_BYTE*)v6 + 1104) = 0;
  v6[139] = 0;
  v6[3] = game_gameui_control_MenuItemSkill_vtable;
  v6[140] = 0;
  v6[136] = GameData_21026b0;
  v6[12] = GameData_2102688;
  *((_BYTE*)v6 + 1096) = 14;
  *((_DWORD*)v6 + 282) = -1;
  *((_BYTE*)v6 + 1134) = 1;
  *(_QWORD*)((char*)v6 + 1135) = 0;
  *(_QWORD*)((char*)v6 + 1143) = 0;
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_WORD*)((char*)v6 + 1151) = 0;
  *((_WORD*)v6 + 566) = 0;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 80, 16, 0);
  v9 = GameData_2102700;
  v8[6] = GameData_21026f8;
  v8[7] = v9;
  v10 = GameData_2102710;
  v8[8] = GameData_2102708;
  v8[9] = v10;
  v11 = GameData_21026e0;
  v8[2] = GameData_21026d8;
  v8[3] = v11;
  v12 = GameData_21026f0;
  v8[4] = GameData_21026e8;
  v8[5] = v12;
  v13 = GameData_21026d0;
  *v8 = GameData_21026c8;
  v8[1] = v13;
  v14 = GameRoutine_576600(a1, "Icon");
  if (v14 != 0) {
    v27 = v14;
    v28 = strlen(v14);
    if (v28 != 0) {
      GameRoutine_1888c80((__int64)(v6 + 29), (__int64)v8, (__int64)&v27);
    }
  }
  v15 = GameRoutine_576600(a1, v8[2]);
  if (v15 != 0) {
    v27 = v15;
    v28 = strlen(v15);
    if (v28 != 0) {
      GameRoutine_1888c80((__int64)(v6 + 29), (__int64)(v8 + 2), (__int64)&v27);
    }
  }
  v16 = GameRoutine_576600(a1, v8[4]);
  if (v16 != 0) {
    v27 = v16;
    v28 = strlen(v16);
    if (v28 != 0) {
      GameRoutine_1888c80((__int64)(v6 + 29), (__int64)(v8 + 4), (__int64)&v27);
    }
  }
  v17 = GameRoutine_576600(a1, v8[6]);
  if (v17 != 0) {
    v27 = v17;
    v28 = strlen(v17);
    if (v28 != 0) {
      GameRoutine_1888c80((__int64)(v6 + 29), (__int64)(v8 + 6), (__int64)&v27);
    }
  }
  v18 = GameRoutine_576600(a1, v8[8]);
  if (v18 != 0) {
    v27 = v18;
    v28 = strlen(v18);
    if (v28 != 0) {
      GameRoutine_1888c80((__int64)(v6 + 29), (__int64)(v8 + 8), (__int64)&v27);
    }
  }
  v19 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 48, 16, 0);
  v20 = GameData_2102730;
  v19[2] = GameData_2102728;
  v19[3] = v20;
  v21 = GameData_2102740;
  v19[4] = GameData_2102738;
  v19[5] = v21;
  v22 = GameData_2102720;
  *v19 = GameData_2102718;
  v19[1] = v22;
  v27 = GameRoutine_5766a0(a1, "NumNone");
  if (v27 != 0) {
    GameRoutine_1889230((__int64)(v6 + 34), (__int64)v19, (__int64)&v27);
  }
  v27 = GameRoutine_5766a0(a1, v19[2]);
  if (v27 != 0) {
    GameRoutine_1889230((__int64)(v6 + 34), (__int64)(v19 + 2), (__int64)&v27);
  }
  v27 = GameRoutine_5766a0(a1, v19[4]);
  if (v27 != 0) {
    GameRoutine_1889230((__int64)(v6 + 34), (__int64)(v19 + 4), (__int64)&v27);
  }
  v23 = Pane_58fac0(*(_QWORD*)(v6[4] + 24LL), "HelpTarget");
  if (v23 != 0 || (v23 = GameRoutine_576740(a1, "HelpTarget")) != 0) {
    *((_BYTE*)v6 + 1134) = *(_DWORD*)(v23 + *(unsigned int*)(v23 + 4)) != 0;
  }
  v6[39] &= 0xFFFFFFF3FFFFFFFFLL;
  GameRoutine_1898940(v5);
  if (*(_QWORD*)(*v7 + 200LL) != 0) {
    v24 = 128;
  }
  else {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free(*v7 + v24);
  if (*(_QWORD*)(*v7 + 200LL) != 0) {
    v25 = 128;
  }
  else {
    v25 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*v7 + v25);
  *a2 = v5;
  a2[1] = (__int64)v6;
  v6[3] = game_gameui_control_MenuItemSkill_Destroy_MenuItemSkill_189c380_ptr;
  v6[12] = GameData_2102968;
  v6[136] = GameData_2102990;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void MenuItemSkill_1899140(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  char v10;
  __int64 result;

  v6 = (_QWORD*)LayoutEx_579160(1160, 8);
  v7 = (__int64)(v6 + 3);
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_2102758;
  MenuItem_188b0e0(v6 + 3, a1, a2);
  v9 = v8[39];
  *((_BYTE*)v8 + 1100) = 0;
  *((_BYTE*)v8 + 1104) = 0;
  v8[139] = 0;
  v8[140] = 0;
  *((_WORD*)v8 + 566) = 0;
  v8[39] = v9 & 0xFFFFFFFCFFFFFFFFLL;
  v8[3] = game_gameui_control_MenuItemSkill_vtable;
  v8[136] = GameData_21026b0;
  v8[12] = GameData_2102688;
  *((_BYTE*)v8 + 1096) = 14;
  *((_DWORD*)v8 + 282) = -1;
  v10 = *(_BYTE*)(a1 + 1110);
  v8[39] = v9 & 0xFFFFFFF0FFFFFFFFLL;
  *((_BYTE*)v8 + 1134) = v10;
  *(_QWORD*)((char*)v8 + 1135) = 0;
  *(_QWORD*)((char*)v8 + 1143) = 0;
  *(_WORD*)((char*)v8 + 1151) = 0;
  result = GameRoutine_1898940(v7);
  *a3 = v7;
  a3[1] = (__int64)v8;
  v8[3] = game_gameui_control_MenuItemSkill_Destroy_MenuItemSkill_189c380_ptr;
  v8[12] = GameData_2102968;
  v8[136] = GameData_2102990;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void MenuItemSkill_1899240(PSEUDO_X8 x8_,
                                                      __int64* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  _QWORD* v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  const char* v10;
  const char** v11;
  __int64 v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;
  struct {
    const char* v21;
    __int64 v22;
  } v21_;

  v3 = a1[140];
  if (v3 != 0 && *(_QWORD*)(v3 + 8) != -1) {
    goto LABEL_28;
  }
  v21_.v21 = "HPStock";
  v21_.v22 = 7;
  v5 = Element_1886290_alt1((__int64)a1, &v21_.v21);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212dfd0) != 0) {
    *GameData_212dfc8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_212dfd0);
  }
  if (v5 == nullptr) {
    goto LABEL_28;
  }
  v6 = (__int64*)(*(__int64 (**)(_QWORD*))(*v5 + 16LL))(v5);
  if (v6 != GameData_212dfc8) {
    do {
      v6 = (__int64*)*v6;
    } while (v6 != GameData_212dfc8 && v6 != nullptr);
    if (v6 == nullptr) {
      goto LABEL_28;
    }
  }
  Layout_1363f00_alt1((void*)(&v17_.v17), a1[10], (__int64)v5);
  v19_.v19 = 0;
  v19_.v20 = 0;
  if (v17_.v18 != 0 &&
      (v8 = std___1___shared_weak_count_lock_alt1(v17_.v18), v19_.v20 = v8,
       v8 != 0) &&
      (v19_.v19 = v17_.v17, v17_.v17 != 0) &&
      (v9 = v8, (v10 = (const char*)__dynamic_cast(
                     v17_.v17, GameData_212dfc0[0], GameData_2132098[0], 0)) !=
                    nullptr)) {
    v11 = (const char**)&v19_.v19;
    v21_.v21 = v10;
    v21_.v22 = v9;
  }
  else {
    v11 = &v21_.v21;
  }
  *v11 = nullptr;
  v11[1] = nullptr;
  v13 = v21_.v21;
  v12 = v21_.v22;
  if (v21_.v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21_.v22 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  v14 = v19_.v20;
  if (v19_.v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt1(v14);
  }
  if (v17_.v18 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v17_.v18);
  }
  v15 = a1[140];
  a1[139] = (__int64)v13;
  a1[140] = v12;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v15);
  LABEL_28:
    v12 = a1[140];
  }
  *a2 = 0;
  a2[1] = 0;
  if (v12 != 0) {
    v16 = std___1___shared_weak_count_lock_alt1(v12);
    a2[1] = v16;
    if (v16 != 0) {
      *a2 = a1[139];
    }
  }
}

__int64 MenuItemSkill_1899480(__int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 result;
  __int64 v9;
  atomic_uchar* v10;
  int v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64* v16;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  const char* v23;
  _QWORD* v24;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  const char* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  _QWORD v41[2];
  _QWORD v42[4];
  int v43;
  __int64 v44;
  __int64 v45;
  _QWORD v46[2];

  *(_BYTE*)(a1 + 1128) = a3 ^ 1;
  if (a2 <= 4) {
    LayoutAccessor_1562cf0(a1 + 88,
                           (char*)GameData_1c1706c + GameData_1c1706c[a2]);
  }
  v37 = "Cost";
  v38 = 4;
  result = Element_1886290(a1, &v37);
  v9 = result;
  v10 = (atomic_uchar*)GameData_2130ea8;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(GameData_2130ea8);
    if ((_DWORD)result != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = __cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v9 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    if ((__int64*)result == GameData_2130ea0) {
      goto LABEL_90;
    }
    do {
      result = *(_QWORD*)result;
    } while ((__int64*)result != GameData_2130ea0 && result != 0);
    if (result != 0) {
    LABEL_90:
      v12 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      result = ui_LayoutAccessor_FindTextBox(a1 + 88, v9 + 176);
      if (result != 0) {
        result = Pane_58f8a0(result);
        if (result != 0) {
          *(_DWORD*)(result + 12) = v12;
        }
      }
    }
  }
  if (a2 >= 3) {
    if (a2 == 3) {
      LayoutAccessor_1562cf0(a1 + 88, "Info");
      v22 = "EquipDefault";
    }
    else {
      if (a2 != 4) {
        return result;
      }
      LayoutAccessor_1562cf0(a1 + 88, "Info");
      v22 = "EquipEmptyDefault";
    }
    return LayoutAccessor_1562cf0(a1 + 88, v22);
  }
  v13 = *(_QWORD*)(a1 + 288);
  if ((a3 & 1) != 0) {
    if ((v13 & 0x400000000LL) != 0) {
      v14 = "FixedDisableDefault";
    }
    else {
      v14 = "DisableDefault";
    }
    LayoutAccessor_1562cf0(a1 + 88, v14);
    v37 = "Cost";
    v38 = 4;
    v15 = Element_1886290(a1, &v37);
    if ((atomic_load_explicit(v10, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_2130ea8) != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(GameData_2130ea8);
    }
    if (v15 != 0) {
      v16 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      if (v16 == GameData_2130ea0) {
        goto LABEL_29;
      }
      do {
        v16 = (__int64*)*v16;
      } while (v16 != GameData_2130ea0 && v16 != nullptr);
      if (v16 != nullptr) {
      LABEL_29:
        v18 = 72;
        if ((a4 & 1) != 0) {
          v18 = 64;
        }
        v19 = *(_DWORD*)((char*)GameData_212da30 + v18);
        v20 = ui_LayoutAccessor_FindTextBox(a1 + 88, v15 + 176);
        if (v20 != 0) {
          v21 = Pane_58f8a0(v20);
          if (v21 != 0) {
            *(_DWORD*)(v21 + 12) = v19;
          }
        }
      }
    }
  }
  else {
    if ((v13 & 0x400000000LL) != 0) {
      v23 = "FixedDefault";
    }
    else {
      v23 = "Default";
    }
    LayoutAccessor_1562cf0(a1 + 88, v23);
  }
  v37 = "Icon";
  v38 = 4;
  result = Element_1886290(a1, &v37);
  v24 = (_QWORD*)result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(GameData_212dfd0);
    if ((_DWORD)result != 0) {
      *GameData_212dfc8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = __cxa_guard_release(GameData_212dfd0);
    }
  }
  if (v24 != nullptr) {
    result = (*(__int64 (**)(_QWORD*))(*v24 + 16LL))(v24);
    if ((__int64*)result == GameData_212dfc8) {
      goto LABEL_50;
    }
    do {
      result = *(_QWORD*)result;
    } while ((__int64*)result != GameData_212dfc8 && result != 0);
    if (result != 0) {
    LABEL_50:
      v26 = *(_QWORD*)(a1 + 96);
      if (v26 != 0) {
        v27 = std___1___shared_weak_count_lock(v26);
        v28 = *(_QWORD*)(a1 + 88);
        v29 = v27;
        if (v27 == 0) {
          v28 = 0;
        }
      }
      else {
        v29 = 0;
        v28 = 0;
      }
      v30 = v24[29];
      v41[0] = 0;
      v41[1] = 0;
      v37 = nullptr;
      v38 = 0;
      memset(v42, 0, sizeof(v42));
      v44 = 0;
      v45 = 0;
      v46[0] = v28;
      v46[1] = v29;
      v39 = 0;
      v40 = v41;
      v43 = 1065353216;
      if (v29 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                  memory_order_relaxed);
        ui_LayoutAccessor_Setup_155dea0(&v37, v46, v30);
        if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          std___1___shared_weak_count___release_weak(v29);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          std___1___shared_weak_count___release_weak(v29);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dea0(&v37, v46, v30);
      }
      v31 = ui_LayoutAccessor_FindPane(&v37, "Icon");
      if ((a3 & 1) != 0) {
        if (v31 == 0 || (v31 = __dynamic_cast(v31, GameData_212d670[0],
                                              GameData_212d678[0], 0)) == 0) {
        LABEL_74:
          LayoutAccessor_155e140(&v37);
          v34 = v45;
          if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
            std___1___shared_weak_count___release_weak(v34);
          }
          GameRoutine_1564060(v42);
          GameRoutine_1563f90(&v40, v41[0]);
          result = v38;
          if (v38 != 0) {
            return std___1___shared_weak_count___release_weak(v38);
          }
          return result;
        }
        v32 = *(_DWORD*)((char*)((_UNKNOWN*)0x78LL) + (_QWORD)GameData_212da30);
      }
      else {
        if (v31 != 0) {
          v31 =
              __dynamic_cast(v31, GameData_212d670[0], GameData_212d678[0], 0);
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                  memory_order_acquire) &
             1) == 0) {
          v35 = v31;
          v36 = __cxa_guard_acquire(&GameData_22594f0);
          v31 = v35;
          if (v36 != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release(&GameData_22594f0);
            v31 = v35;
          }
        }
        if (v31 == 0) {
          goto LABEL_74;
        }
        v32 = GameData_22594e8;
      }
      v33 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v31 + 88LL))(v31, 0);
      if (v33 != 0) {
        *(_DWORD*)(v33 + 12) = v32;
      }
      goto LABEL_74;
    }
  }
  return result;
}

__attribute__((swiftcall)) void MenuItemSkill_189bb00(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = X8CALL_X0(_QWORD*, MenuItem_188b680((void*)(a3), (_QWORD*)a1, a2));
  if (*(_DWORD*)(a2 + 8) == 45) {
    if (GameData_21f1e08 != 0 && (*(_BYTE*)(a1 + 1109) & 1) != 0) {
      v6 = *(_QWORD*)(GameData_21f1e08 + 144);
      if (v6 != 0) {
        v7 = *(_QWORD*)(GameData_21f1e08 + 136);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        if (*(_BYTE*)(a1 + 1080) == 1) {
          v8 = std___1___shared_weak_count_lock(v6);
          if (v8 != 0) {
            v9 = v8;
            if (v7 != 0) {
              if ((*(_BYTE*)(a1 + 1080) & 1) == 0) {
                GameRoutine_8123d0(v8);
              }
              GameRoutine_18a7ae0(v7, a1 + 1076, *(_QWORD*)(a1 + 1096), 0, 0, 0,
                                  0);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              std___1___shared_weak_count___release_weak(v9);
            }
          }
        }
        {
          (_QWORD*)std___1___shared_weak_count___release_weak(v6);
          return;
        }
      }
    }
    else {
      {
        (_QWORD*)MenuItem_188b880(a1, a2);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 MenuItemSkill_189be60(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = GameRoutine_18ae4d0(GameData_21f1e08, &v10, 2, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 32;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 MenuItemSkill_189bf80(_QWORD* a1, char a2)
{
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 result;
  __int64 (**v8)();
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 (***v12)();

  Element_1885a60((void*)(&v8), a1);
  v4 = v9;
  v10 = nullptr;
  v11 = 0;
  if (v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v9);
    v11 = v4;
    if (v4 != 0) {
      v10 = v8;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v5 = GameRoutine_18ae4d0(GameData_21f1e08, &v10, 3, 0);
    v4 = v11;
    if (v11 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v6);
  }
LABEL_11:
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if ((v5 & 1) == 0) {
    LOBYTE(v8) = a2 & 1;
    HIDWORD(v8) = 1;
    v10 = ui_Event_vtable;
    LODWORD(v11) = 31;
    v12 = &v8;
    return MenuItem_188b880(a1, &v10);
  }
  return result;
}

__int64 MenuItemSkill_189c0a0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = GameRoutine_18ae4d0(GameData_21f1e08, &v12, 0, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 30;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

__int64 MenuItemSkill_189c1c0(_QWORD* a1, char a2, int a3)
{
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 result;
  __int64 (**v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();

  Element_1885a60((void*)(&v10), a1);
  v6 = v11;
  v12 = nullptr;
  v13 = 0;
  if (v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v11);
    v13 = v6;
    if (v6 != 0) {
      v12 = v10;
    }
  }
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v7 = GameRoutine_18ae4d0(GameData_21f1e08, &v12, 1, 0);
    v6 = v13;
    if (v13 == 0) {
      goto LABEL_11;
    }
  }
  else {
    v7 = 0;
    if (v6 == 0) {
      goto LABEL_11;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v8);
  }
LABEL_11:
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v7 & 1) == 0) {
    HIDWORD(v10) = a3;
    LOBYTE(v10) = a2 & 1;
    v12 = ui_Event_vtable;
    LODWORD(v13) = 29;
    v14 = &v10;
    return MenuItem_188b880(a1, &v12);
  }
  return result;
}

#pragma GCC visibility pop
