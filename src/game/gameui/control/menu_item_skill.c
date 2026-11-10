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
MenuItemSkill_1899240(__attribute__((swift_indirect_result)) void* x8_,
                      __int64* result);
__attribute__((swiftcall)) void MenuItemSkill_189bb00(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2);
__int64 MenuItemSkill_189be60(_QWORD* a1, char a2);
__int64 MenuItemSkill_189bf80(_QWORD* a1, char a2);
__int64 MenuItemSkill_189c0a0(_QWORD* a1, char a2, int a3);
__int64 MenuItemSkill_189c1c0(_QWORD* a1, char a2, int a3);

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

__attribute__((swiftcall)) void

MenuItemSkill_1899240(__attribute__((swift_indirect_result)) void* x8_,
                      __int64* result)
{
  _QWORD* a2 = (_QWORD*)(unsigned __int64)x8_;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char** v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
  __int64 v19;

  v3 = result[140];
  v4 = result;
  if (v3 != 0 && *(_QWORD*)(v3 + 8) != -1) {
    goto LABEL_28;
  }
  v18 = "HPStock";
  v19 = 7;
  result = (__int64*)Element_1886290(result, &v18);
  v5 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_212dfd0);
    if ((_DWORD)result != 0) {
      *GameData_212dfc8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      result = (__int64*)__cxa_guard_release(GameData_212dfd0);
    }
  }
  if (v5 == nullptr) {
    goto LABEL_28;
  }
  result = (__int64*)(*(__int64 (**)(__int64*))(*v5 + 16))(v5);
  if (result != GameData_212dfc8) {
    do {
      result = (__int64*)*result;
    } while (result != GameData_212dfc8 && result != nullptr);
    if (result == nullptr) {
      goto LABEL_28;
    }
  }
  *(struct PseudoSret*)(&v14) = Layout_1363f00(v4[10], v5);
  v16 = 0;
  v17 = 0;
  if (v15 != 0 &&
      (v7 = std___1___shared_weak_count_lock(v15), v17 = v7, v7 != 0) &&
      (v16 = v14, v14 != 0) &&
      (v8 = v7, (v9 = __dynamic_cast(v14, GameData_212dfc0[0],
                                     GameData_2132098[0], 0)) != 0)) {
    v10 = (const char**)&v16;
    v18 = (const char*)v9;
    v19 = v8;
  }
  else {
    v10 = &v18;
  }
  *v10 = nullptr;
  v10[1] = nullptr;
  v12 = v18;
  v11 = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  v13 = v17;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
  result = (__int64*)v4[140];
  v4[139] = (__int64)v12;
  v4[140] = v11;
  if (result != nullptr) {
    result = (__int64*)std___1___shared_weak_count___release_weak(result);
  LABEL_28:
    v11 = v4[140];
  }
  *a2 = 0;
  a2[1] = 0;
  if (v11 != 0) {
    result = (__int64*)std___1___shared_weak_count_lock(v11);
    a2[1] = result;
    if (result != nullptr) {
      *a2 = v4[139];
    }
  }
  {
    result;
    return;
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
