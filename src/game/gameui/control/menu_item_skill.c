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
_QWORD* ui_LayoutAccessor_Setup_155dea0_alt1(_QWORD*, _QWORD*, __int64) __asm__(
    "ui_LayoutAccessor_Setup_155dea0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 AsyncLoadThumbImage_1899d60(__int64, __int64);
__int64 Element_18863e0(__int64, const char**, char);
__int64 GameHr_1583b80(__int64*, unsigned int);
__int64 GameRoutine_157ac20(__int64*, __int64, char, char);
__int64 LayoutAccessor_155e140_alt1(__int64*) __asm__("LayoutAccessor_155e140");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 game_gameui_control_1898940(__int64);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool Util_1579d20(__int64, __int64);
char* HistoryLogInfo_6fb810(__int64);
extern _UNKNOWN* GameData_2131900;
extern _UNKNOWN GameData_22593b0;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d890[2];
extern __int64* GameData_21318f8;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_842cb0(_DWORD*, _QWORD*);
void AsyncLoadThumbImage_18999e0(__int64);
void AsyncLoadThumbImage_189ac20(__int64, unsigned int);
void AsyncLoadThumbImage_189adc0(__int64, int, int);
void GameRoutine_1563f90_alt1(__int64, __int64) __asm__("GameRoutine_1563f90");
void GameRoutine_1564060_alt1(__int64*) __asm__("GameRoutine_1564060");
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_66dd60(__int64*, unsigned __int64, _DWORD*);
void MenuItem_188b880_alt1(__int64, __int64) __asm__("MenuItem_188b880");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 MenuItemSkill_189a700(__int64 a1);
void MenuItemSkill_189b300(__int64 a1);
_QWORD* MenuItemSkill_189bdc0(__int64 a1);
__int64 GameRoutine_576600_alt1(__int64,
                                const char*) __asm__("GameRoutine_576600");
__int64 GameRoutine_5766a0_alt1(__int64,
                                const char*) __asm__("GameRoutine_5766a0");
__int64 LayoutEx_579160_alt1(__int64, __int64) __asm__("LayoutEx_579160");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 ui_control_1888c80(__int64, __int64, __int64);
__int64 ui_control_1889230(__int64, __int64, __int64);
const char* GameRoutine_576740_alt1(__int64,
                                    const char*) __asm__("GameRoutine_576740");
const char* Pane_58fac0_alt1(__int64, const char*) __asm__("Pane_58fac0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void ui_control_188ca50(_QWORD*, __int64);

__attribute__((swiftcall)) void MenuItemSkill_1898db0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  const char* v15;
  const char* v16;
  const char* v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 v26;
    unsigned __int64 v27;
  } v26_;

  v4 = (_QWORD*)LayoutEx_579160_alt1(1160, 8);
  v5 = (__int64)(v4 + 3);
  v6 = v4;
  v4[1] = 0;
  v4[2] = 0;
  *v4 = GameData_2102758;
  ui_control_188ca50(v4 + 3, a1);
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
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  *(_WORD*)((char*)v6 + 1151) = 0;
  *((_WORD*)v6 + 566) = 0;
  v8 = fw_memory_HeapManager_Allocate_alt1(*v7, 80, 16, 0);
  v9 = GameData_2102700;
  *(_QWORD*)(v8 + 48) = GameData_21026f8;
  *(_QWORD*)(v8 + 56) = v9;
  v10 = GameData_2102710;
  *(_QWORD*)(v8 + 64) = GameData_2102708;
  *(_QWORD*)(v8 + 72) = v10;
  v11 = GameData_21026e0;
  *(_QWORD*)(v8 + 16) = GameData_21026d8;
  *(_QWORD*)(v8 + 24) = v11;
  v12 = GameData_21026f0;
  *(_QWORD*)(v8 + 32) = GameData_21026e8;
  *(_QWORD*)(v8 + 40) = v12;
  v13 = GameData_21026d0;
  *(_QWORD*)v8 = GameData_21026c8;
  *(_QWORD*)(v8 + 8) = v13;
  v14 = (const char*)GameRoutine_576600_alt1(a1, "Icon");
  if (v14 != nullptr) {
    v26_.v26 = (__int64)v14;
    v26_.v27 = strlen_alt1(v14);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v6 + 29), v8, (__int64)&v26_.v26);
    }
  }
  v15 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v8 + 16));
  if (v15 != nullptr) {
    v26_.v26 = (__int64)v15;
    v26_.v27 = strlen_alt1(v15);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v6 + 29), v8 + 16, (__int64)&v26_.v26);
    }
  }
  v16 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v8 + 32));
  if (v16 != nullptr) {
    v26_.v26 = (__int64)v16;
    v26_.v27 = strlen_alt1(v16);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v6 + 29), v8 + 32, (__int64)&v26_.v26);
    }
  }
  v17 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v8 + 48));
  if (v17 != nullptr) {
    v26_.v26 = (__int64)v17;
    v26_.v27 = strlen_alt1(v17);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v6 + 29), v8 + 48, (__int64)&v26_.v26);
    }
  }
  v18 = (const char*)GameRoutine_576600_alt1(a1, *(const char**)(v8 + 64));
  if (v18 != nullptr) {
    v26_.v26 = (__int64)v18;
    v26_.v27 = strlen_alt1(v18);
    if (v26_.v27 != 0) {
      ui_control_1888c80((__int64)(v6 + 29), v8 + 64, (__int64)&v26_.v26);
    }
  }
  v19 = fw_memory_HeapManager_Allocate_alt1(*v7, 48, 16, 0);
  v20 = GameData_2102730;
  *(_QWORD*)(v19 + 16) = GameData_2102728;
  *(_QWORD*)(v19 + 24) = v20;
  v21 = GameData_2102740;
  *(_QWORD*)(v19 + 32) = GameData_2102738;
  *(_QWORD*)(v19 + 40) = v21;
  v22 = GameData_2102720;
  *(_QWORD*)v19 = GameData_2102718;
  *(_QWORD*)(v19 + 8) = v22;
  v26_.v26 = GameRoutine_5766a0_alt1(a1, "NumNone");
  if (v26_.v26 != 0) {
    ui_control_1889230((__int64)(v6 + 34), v19, (__int64)&v26_.v26);
  }
  v26_.v26 = GameRoutine_5766a0_alt1(a1, *(const char**)(v19 + 16));
  if (v26_.v26 != 0) {
    ui_control_1889230((__int64)(v6 + 34), v19 + 16, (__int64)&v26_.v26);
  }
  v26_.v26 = GameRoutine_5766a0_alt1(a1, *(const char**)(v19 + 32));
  if (v26_.v26 != 0) {
    ui_control_1889230((__int64)(v6 + 34), v19 + 32, (__int64)&v26_.v26);
  }
  v23 = Pane_58fac0_alt1(*(_QWORD*)(v6[4] + 24LL), "HelpTarget");
  if (v23 != nullptr ||
      (v23 = GameRoutine_576740_alt1(a1, "HelpTarget")) != nullptr) {
    *((_BYTE*)v6 + 1134) = *(_DWORD*)&v23[*((unsigned int*)v23 + 1)] != 0;
  }
  v6[39] &= 0xFFFFFFF3FFFFFFFFLL;
  game_gameui_control_1898940(v5);
  if (*(_QWORD*)(*v7 + 200) != 0) {
    v24 = 128;
  }
  else {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v7 + v24, v19);
  if (*(_QWORD*)(*v7 + 200) != 0) {
    v25 = 128;
  }
  else {
    v25 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v7 + v25, v8);
  *a2 = v5;
  a2[1] = (__int64)v6;
  v6[3] = game_gameui_control_MenuItemSkill_Destroy_MenuItemSkill_189c380_ptr;
  v6[12] = GameData_2102968;
  v6[136] = GameData_2102990;
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

__int64 MenuItemSkill_189a700(__int64 a1)
{
  _BYTE* v2;
  atomic_uchar* v3;
  __int64* v4;
  int v6;
  const char* v7;
  char* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  __int64* v17;
  int v19;
  const char* v20;
  char* v21;
  __int64 v22;
  atomic_ullong* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    const char* v33;
    __int64 v34;
    __int64 v35;
  } v33_;
  __int64* v36;
  __int64 v37[2];
  struct {
    __int64 v38[4];
    int v39;
    char gap92_[4];
    __int64 v40;
    __int64 v41;
  } v38_;
  _QWORD v42[2];

  AsyncLoadThumbImage_18999e0(a1);
  v33_.v33 = "Icon";
  v33_.v34 = 4;
  v2 = Element_1886290_alt1(a1, &v33_.v33);
  v3 = (atomic_uchar*)GameData_2131900;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_2131900) != 0) {
    *GameData_21318f8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_2131900);
  }
  if (v2 != nullptr) {
    v4 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v2 + 16LL))(v2);
    if (v4 == GameData_21318f8) {
      goto LABEL_10;
    }
    do {
      v4 = (__int64*)*v4;
    } while (v4 != GameData_21318f8 && v4 != nullptr);
    if (v4 != nullptr) {
    LABEL_10:
      v6 = *(unsigned __int8*)(a1 + 1072);
      v7 = "IconEmpty";
      if (v6 == 5) {
        v7 = "IconEmptyLegion";
      }
      if (v6 == 2) {
        v8 = "IconEmptyCombatArts";
      }
      else {
        v8 = (char*)v7;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, (__int64)v2, 0, 7u, v8);
      v2[88] |= 1u;
    }
  }
  v33_.v33 = "Icon";
  v33_.v34 = 4;
  v9 = Element_1886290_alt1(a1, &v33_.v33);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212dfd0) != 0) {
    *GameData_212dfc8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_212dfd0);
  }
  if (v9 != nullptr) {
    v10 = (__int64*)(*(__int64 (**)(_QWORD*))(*v9 + 16LL))(v9);
    if (v10 == GameData_212dfc8) {
      goto LABEL_25;
    }
    do {
      v10 = (__int64*)*v10;
    } while (v10 != GameData_212dfc8 && v10 != nullptr);
    if (v10 != nullptr) {
    LABEL_25:
      v12 = *(_QWORD*)(a1 + 96);
      if (v12 != 0) {
        v13 = std___1___shared_weak_count_lock_alt1(v12);
        v14 = *(_QWORD*)(a1 + 88);
        v15 = v13;
        if (v13 == 0) {
          v14 = 0;
        }
      }
      else {
        v14 = 0;
        v15 = 0;
      }
      v22 = v9[29];
      v37[0] = 0;
      v37[1] = 0;
      v33_.v33 = nullptr;
      v33_.v34 = 0;
      memset(v38_.v38, 0, sizeof(v38_.v38));
      v38_.v40 = 0;
      v38_.v41 = 0;
      v42[0] = v14;
      v42[1] = v15;
      v33_.v35 = 0;
      v36 = v37;
      v38_.v39 = 1065353216;
      if (v15 == 0) {
        ui_LayoutAccessor_Setup_155dea0_alt1(&v33_.v33, v42, v22);
        goto LABEL_52;
      }
      v23 = (atomic_ullong*)(v15 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0_alt1(&v33_.v33, v42, v22);
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v23, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_52;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt1(v15);
        if (atomic_fetch_add(v23, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_52;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v15);
    LABEL_52:
      ui_LayoutAccessor_SetPaneVisible((__int64)&v33_.v33,
                                       (__int64)"IconDamage", 0);
      ui_LayoutAccessor_SetPaneVisible((__int64)&v33_.v33, (__int64)"IconLock",
                                       0);
      ui_LayoutAccessor_SetPaneVisible((__int64)&v33_.v33, (__int64)"IconDrop",
                                       0);
      v24 = *(unsigned __int8*)(a1 + 1072);
      v25 =
          ui_LayoutAccessor_FindPane_alt1((__int64*)&v33_.v33, (__int64)"Icon");
      if (v24 == 5) {
        if (v25 == 0) {
          goto LABEL_64;
        }
        v29 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
        if (v29 == 0) {
          goto LABEL_64;
        }
        v27 = v29;
        v28 = "IconEmptyLegion";
      }
      else if (v24 == 2) {
        if (v25 == 0) {
          goto LABEL_64;
        }
        v26 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
        if (v26 == 0) {
          goto LABEL_64;
        }
        v27 = v26;
        v28 = "IconEmptyCombatArts";
      }
      else {
        if (v25 == 0) {
          goto LABEL_64;
        }
        v30 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
        if (v30 == 0) {
          goto LABEL_64;
        }
        v28 = "IconEmpty";
        v27 = v30;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v27, 0, 7u, v28);
    LABEL_64:
      *((_BYTE*)v9 + 88) |= 1u;
      LayoutAccessor_155e140_alt1((__int64*)&v33_.v33);
      v31 = v38_.v41;
      if (v38_.v41 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v38_.v41 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak_alt1(v31);
      }
      GameRoutine_1564060_alt1(v38_.v38);
      GameRoutine_1563f90_alt1((__int64)&v36, v37[0]);
      if (v33_.v34 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v33_.v34);
      }
      return GameRoutine_157ac20((__int64*)(a1 + 88), (__int64)"IconEquip", 0,
                                 1);
    }
  }
  v33_.v33 = "Icon";
  v33_.v34 = 4;
  v16 = Element_1886290_alt1(a1, &v33_.v33);
  if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_2131900) != 0) {
    *GameData_21318f8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release_alt1((__int64)GameData_2131900);
  }
  if (v16 != nullptr) {
    v17 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v16 + 16LL))(v16);
    if (v17 == GameData_21318f8) {
      goto LABEL_38;
    }
    do {
      v17 = (__int64*)*v17;
    } while (v17 != GameData_21318f8 && v17 != nullptr);
    if (v17 != nullptr) {
    LABEL_38:
      v19 = *(unsigned __int8*)(a1 + 1072);
      v20 = "IconEmpty";
      if (v19 == 5) {
        v20 = "IconEmptyLegion";
      }
      if (v19 == 2) {
        v21 = "IconEmptyCombatArts";
      }
      else {
        v21 = (char*)v20;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, (__int64)v16, 0, 7u, v21);
      v16[88] |= 1u;
    }
  }
  return GameRoutine_157ac20((__int64*)(a1 + 88), (__int64)"IconEquip", 0, 1);
}

void MenuItemSkill_189b300(__int64 a1)
{
  _DWORD* v1;
  __int64* v3;
  __int64 v4;
  int v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  bool v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  unsigned __int64 v40;
  char v41;
  __int64 v42;
  int v43;
  unsigned __int64 v44;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  unsigned int v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  int v57;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  unsigned int v64;
  int v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned int v71;
  __int64 v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  __int64 v79;
  int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned int v89;
  unsigned int v90;
  bool v91;
  __int64 v92;
  int v93;
  int v94;
  unsigned int v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  struct {
    char* v107;
    const char* v108;
    __int64 v109;
    int v110;
  } v107_;
  int v111;

  if (*(_BYTE*)(a1 + 1080) != 1) {
    return;
  }
  v1 = (_DWORD*)(a1 + 1076);
  if ((*(_DWORD*)(a1 + 1076) & 0xFFF) == 0) {
    game_gameui_control_1898940(a1);
    return;
  }
  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)(a1 + 1076) & 0xFFF));
  v5 = *(unsigned __int8*)(v4 + 104);
  AsyncLoadThumbImage_1899d60(a1, v4);
  if ((*(_DWORD*)(a1 + 1076) & 0xFFF) != 0) {
    v6 = HistoryLogInfo_6fb810(*(
        _QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (*(_DWORD*)(a1 + 1076) & 0xFFF)));
    v7 = *(_QWORD*)(a1 + 1032);
    if (v7 == 0) {
      goto LABEL_10;
    }
  }
  else {
    v6 = &GameData_1a9f09e;
    v7 = *(_QWORD*)(a1 + 1032);
    if (v7 == 0) {
      goto LABEL_10;
    }
  }
  GameRoutine_156c5d0(v7, (__int64)v6, 0);
  v8 = *(_QWORD*)(a1 + 1032);
  if (v8 != 0) {
    *(_BYTE*)(v8 + 88) |= 1u;
  }
LABEL_10:
  if (v5 == 12) {
    v9 = *(_DWORD*)(a1 + 1104);
    v10 = *(_QWORD*)(a1 + 1096);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 392);
      if (v11 == 0) {
        goto LABEL_24;
      }
      v12 = *(_QWORD*)(v10 + 1904);
      if (v12 == 0) {
        goto LABEL_24;
      }
      v13 = *(unsigned __int8*)(v11 + 48);
      v14 = v10 + 1904;
      do {
        v15 = *(unsigned __int8*)(v12 + 26);
        v16 = v15 >= v13;
        if (v15 >= v13) {
          v17 = 0;
        }
        else {
          v17 = 8;
        }
        if (v16) {
          v14 = v12;
        }
        v12 = *(_QWORD*)(v12 + v17);
      } while (v12 != 0);
      if (v14 != v10 + 1904 && v13 >= *(unsigned __int8*)(v14 + 26)) {
        v18 = *(_WORD*)(v14 + 28) & 0xFFF;
      }
      else {
      LABEL_24:
        v18 = 0;
      }
      v19 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
      if ((int)v19 < 1) {
      LABEL_39:
        v9 = 3;
        goto LABEL_136;
      }
      v20 = *(_DWORD*)GameData_21d9988;
      v21 = 0;
      v22 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v19 - 1));
      if (v22 >= v18) {
        v23 = v18;
      }
      else {
        v23 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v19 - 1));
      }
      if (v18 >= v20) {
        v24 = v23;
      }
      else {
        v24 = *(_DWORD*)GameData_21d9988;
      }
      v25 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
      while (1) {
        v26 = (unsigned int)(v21 + v25) >> 1;
        v27 = *(_DWORD*)(GameData_21d9988 + 4LL * v26);
        if (v24 == v27) {
          break;
        }
        if (v24 < v27) {
          v25 = (unsigned int)(v21 + v25) >> 1;
        }
        else {
          v21 = v26 + 1;
        }
        if (v21 >= v25) {
          if (v21 < 3) {
            goto LABEL_39;
          }
          goto LABEL_96;
        }
      }
      if ((int)(v26 + 1) < 3) {
        goto LABEL_39;
      }
    LABEL_96:
      if (v11 != 0) {
        v87 = *(_QWORD*)(v10 + 1904);
        if (v87 == 0) {
          goto LABEL_108;
        }
        v88 = v10 + 1904;
        v89 = *(unsigned __int8*)(v11 + 48);
        v11 = v88;
        do {
          v90 = *(unsigned __int8*)(v87 + 26);
          v91 = v90 >= v89;
          if (v90 >= v89) {
            v92 = 0;
          }
          else {
            v92 = 8;
          }
          if (v91) {
            v11 = v87;
          }
          v87 = *(_QWORD*)(v87 + v92);
        } while (v87 != 0);
        if (v11 != v88 && v89 >= *(unsigned __int8*)(v11 + 26)) {
          LODWORD(v11) = *(_WORD*)(v11 + 28) & 0xFFF;
        }
        else {
        LABEL_108:
          LODWORD(v11) = 0;
        }
      }
      v93 = 0;
      if (v22 >= (int)v11) {
        v22 = v11;
      }
      if ((int)v11 >= v20) {
        v94 = v22;
      }
      else {
        v94 = *(_DWORD*)GameData_21d9988;
      }
      while (1) {
        v95 = (unsigned int)(v93 + v19) >> 1;
        v96 = *(_DWORD*)(GameData_21d9988 + 4LL * v95);
        if (v94 == v96) {
          break;
        }
        if (v94 < v96) {
          LODWORD(v19) = (unsigned int)(v93 + v19) >> 1;
        }
        else {
          v93 = v95 + 1;
        }
        if (v93 >= (int)v19) {
          goto LABEL_133;
        }
      }
      v93 = v95 + 1;
    LABEL_133:
      if (v93 < 5) {
        v9 = 5;
        goto LABEL_136;
      }
    }
    if ((v9 & 0x80000000) != 0) {
      LayoutAccessor_1562cf0_alt1(a1 + 88, "RelianceOff");
      v103 = *(_QWORD*)(a1 + 8);
      if (v103 != 0) {
      LABEL_144:
        v104 = *(_QWORD*)(v103 + 24);
        goto LABEL_147;
      }
    LABEL_146:
      v104 = 0;
    LABEL_147:
      v107_.v110 = 0;
      v107_.v108 = nullptr;
      v107_.v109 = 0;
      v107_.v107 = nullptr;
      Util_1579d20(v104, (__int64)&v107_.v107);
      if (v107_.v107 != nullptr) {
        v107_.v108 = v107_.v107;
        v105 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v105 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v105, (__int64)v107_.v107);
      }
    LABEL_151:
      v107_.v107 = "NumNone";
      v107_.v108 = (_BYTE*)((_UNKNOWN*)0x7LL);
      Element_18863e0(a1, (const char**)&v107_.v107, 1);
      return;
    }
  LABEL_136:
    LayoutAccessor_1562cf0_alt1(a1 + 88, "RelianceOn");
    LayoutAccessor_1560070((void*)(&v107_.v107), (__int64*)(a1 + 88),
                           "L_Reliance");
    if (v107_.v108 != nullptr && (v101 = std___1___shared_weak_count_lock_alt1(
                                      (__int64)v107_.v108)) != 0) {
      v102 = v101;
      GameHr_1583b80((__int64*)v107_.v107, v9);
      if (atomic_fetch_add((atomic_ullong* volatile)(v102 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v102 + 16LL))(v102);
        std___1___shared_weak_count___release_weak_alt1(v102);
      }
    }
    else {
      GameHr_1583b80(nullptr, v9);
    }
    if (v107_.v108 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v107_.v108);
    }
    v103 = *(_QWORD*)(a1 + 8);
    if (v103 != 0) {
      goto LABEL_144;
    }
    goto LABEL_146;
  }
  LayoutAccessor_1562cf0_alt1(a1 + 88, "RelianceOff");
  if (v5 > 5) {
    if (v5 == 6 || v5 == 9) {
      v46 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * (*v1 & 0xFFFLL));
      v47 = *(unsigned __int8*)(v46 + 104);
      v48 = *(unsigned __int8*)(v46 + 273);
      if ((unsigned int)(v47 - 5) >= 2) {
        v49 = 0;
      }
      else {
        v49 = (*v1 >> 19) & 0x1F;
      }
      if (v49 + v48 != 0) {
        AsyncLoadThumbImage_189adc0(
            a1,
            (v48 - ((*v1 >> 12) & 0x7F) + v49) &
                ~((v48 - ((*v1 >> 12) & 0x7F) + v49) >> 31),
            v49 + v48);
        v50 = *(_DWORD*)(a1 + 1076);
        v51 = v50 & 0xFFF;
        v52 = (v50 >> 19) & 0x1F;
        v53 = (v50 >> 12) & 0x7F;
        v54 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v51);
        v55 = *(unsigned __int8*)(v54 + 104);
        v56 = *(unsigned __int8*)(v54 + 273);
        if ((unsigned int)(v55 - 5) >= 2) {
          v57 = 0;
        }
        else {
          v57 = v52;
        }
        v58 = 64;
        v59 = v57 - v53 + v56;
        if (*(_BYTE*)(a1 + 1128) != 0) {
          v58 = 60;
        }
        v60 = 72;
        if (*(_BYTE*)(a1 + 1128) != 0) {
          v60 = 36;
        }
        if (v59 >= 1) {
          v58 = v60;
        }
        v61 = *(_DWORD*)((char*)&GameData_22593b0 + v58);
        v62 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 88),
                                                 (__int64)"T_Num");
        if (v62 != 0) {
          v63 = Pane_58f8a0_alt1(v62);
          if (v63 != 0) {
            *(_DWORD*)(v63 + 12) = v61;
          }
        }
      }
      else {
        AsyncLoadThumbImage_189ac20(a1, 0xFFFFFFFF);
      }
      v85 = *(_QWORD*)(a1 + 8);
      if (v85 == 0) {
        goto LABEL_94;
      }
      goto LABEL_126;
    }
  LABEL_122:
    v98 = *(_QWORD*)(a1 + 8);
    if (v98 != 0) {
      v99 = *(_QWORD*)(v98 + 24);
    }
    else {
      v99 = 0;
    }
    v107_.v110 = 0;
    v107_.v108 = nullptr;
    v107_.v109 = 0;
    v107_.v107 = nullptr;
    Util_1579d20(v99, (__int64)&v107_.v107);
    if (v107_.v107 != nullptr) {
      v107_.v108 = v107_.v107;
      v106 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v106 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v106, (__int64)v107_.v107);
    }
    if ((*(_BYTE*)(a1 + 1111) & 1) == 0) {
      goto LABEL_151;
    }
    return;
  }
  if ((unsigned int)(v5 - 2) >= 2) {
    if (v5 == 5) {
      v64 = *(_DWORD*)(a1 + 1076);
      v65 = (v64 >> 19) & 0x1F;
      v66 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (v64 & 0xFFF));
      v67 = *(unsigned __int8*)(v66 + 104);
      v68 = *(unsigned __int8*)(v66 + 273);
      v69 = v68 - ((v64 >> 12) & 0x7F);
      if ((unsigned int)(v67 - 5) >= 2) {
        v70 = 0;
      }
      else {
        v70 = v65;
      }
      AsyncLoadThumbImage_189adc0(a1, (v69 + v70) & ~((v69 + v70) >> 31),
                                  v70 + v68);
      v71 = *(_DWORD*)(a1 + 1076);
      v72 = v71 & 0xFFF;
      v73 = (v71 >> 19) & 0x1F;
      v74 = (v71 >> 12) & 0x7F;
      v75 = *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v72);
      v76 = *(unsigned __int8*)(v75 + 104);
      v77 = *(unsigned __int8*)(v75 + 273);
      if ((unsigned int)(v76 - 5) >= 2) {
        v78 = 0;
      }
      else {
        v78 = v73;
      }
      v79 = 64;
      v80 = v78 - v74 + v77;
      if (*(_BYTE*)(a1 + 1128) != 0) {
        v79 = 60;
      }
      v81 = 72;
      if (*(_BYTE*)(a1 + 1128) != 0) {
        v81 = 36;
      }
      if (v80 >= 1) {
        v79 = v81;
      }
      v82 = *(_DWORD*)((char*)&GameData_22593b0 + v79);
      v83 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 88),
                                               (__int64)"T_Num");
      if (v83 != 0) {
        v84 = Pane_58f8a0_alt1(v83);
        if (v84 != 0) {
          *(_DWORD*)(v84 + 12) = v82;
        }
      }
      v85 = *(_QWORD*)(a1 + 8);
      if (v85 == 0) {
      LABEL_94:
        v86 = 0;
      LABEL_127:
        v107_.v110 = 0;
        v107_.v108 = nullptr;
        v107_.v109 = 0;
        v107_.v107 = nullptr;
      LABEL_128:
        Util_1579d20(v86, (__int64)&v107_.v107);
        if (v107_.v107 != nullptr) {
          v107_.v108 = v107_.v107;
          v100 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v100 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v100,
              (__int64)v107_.v107);
        }
        return;
      }
    LABEL_126:
      v86 = *(_QWORD*)(v85 + 24);
      goto LABEL_127;
    }
    goto LABEL_122;
  }
  v28 = GameRoutine_842cb0(v1, *(_QWORD**)(a1 + 1096));
  AsyncLoadThumbImage_189ac20(a1, v28);
  v29 =
      *(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8LL * (*(_DWORD*)(a1 + 1076) & 0xFFF));
  if (v29 != 0 && *(_BYTE*)(v29 + 104) == 3 &&
      (unsigned int)*(unsigned __int8*)(v29 + 250) - 33 <= 1) {
    v107_.v107 = "NumNone";
    v107_.v108 = (_BYTE*)((_UNKNOWN*)0x7LL);
    Element_18863e0(a1, (const char**)&v107_.v107, 1);
  }
  if (*(_BYTE*)(a1 + 1080) == 1) {
    v30 = *v3;
    v31 = *v1;
    v107_.v110 = 0;
    v32 = *(_QWORD*)(v30 + 64);
    v107_.v108 = nullptr;
    v107_.v109 = 0;
    v107_.v107 = nullptr;
    v33 = *(_QWORD*)(v32 + 8LL * (v31 & 0xFFF));
    v34 = *(unsigned __int16*)(v33 + 496);
    if (*(_WORD*)(v33 + 496) != 0) {
      v35 = 8;
      do {
        v39 = *(_QWORD*)(*(_QWORD*)(v33 + 504) + v35);
        if (((1LL << *(_BYTE*)(v39 + 250)) & 6) != 0) {
          v40 = *(unsigned __int16*)(v39 + 16);
          v41 = v40;
          v42 = (v40 >> 5) & 0x7F;
          v36 = v107_.v107;
          v43 = 1 << v41;
          v44 = (v107_.v108 - v107_.v107) >> 2;
          if (v42 + 1 > v44) {
            v111 = 0;
            GameRoutine_66dd60((__int64*)&v107_.v107, v42 + 1 - v44, &v111);
            v36 = v107_.v107;
            v37 = (unsigned int)v42;
            v38 = *(_DWORD*)&v107_.v107[4 * (unsigned int)v42];
          }
          else {
            v38 = *(_DWORD*)&v107_.v107[4 * (unsigned int)v42];
            if ((v38 & v43) != 0) {
              goto LABEL_51;
            }
            v37 = (unsigned int)v42;
          }
          *(_DWORD*)&v36[4 * v37] = v38 | v43;
          ++v107_.v110;
        }
      LABEL_51:
        --v34;
        v35 += 16;
      } while (v34 != 0);
    }
    v97 = *(_QWORD*)(a1 + 8);
    if (v97 != 0) {
      v86 = *(_QWORD*)(v97 + 24);
    }
    else {
      v86 = 0;
    }
    goto LABEL_128;
  }
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

_QWORD* MenuItemSkill_189bdc0(__int64 a1)
{
  __int64* v1;
  _QWORD* result;
  struct {
    __int64* v3;
    int v4;
    char gap20_[4];
    int* v5;
  } v3_;
  int v6;

  v6 = 2;
  v1 = GameData_212d890[0];
  v3_.v3 = GameData_212d890[0] + 2;
  v3_.v4 = 39;
  v3_.v5 = &v6;
  MenuItem_188b880_alt1(a1, (__int64)&v3_.v3);
  result = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0 && *(_QWORD*)(GameData_21f1e08 + 152) != 0) {
    v3_.v5 = nullptr;
    v3_.v3 = v1 + 2;
    v3_.v4 = 44;
    return X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
            (void*)&v6, GameData_21f1e08 + 8, &v3_.v3));
  }
  return result;
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
