#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, const char**);
__attribute__((swiftcall)) void GameRoutine_15ac6b0(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, __int64*,
                                                    __int64*);
__attribute__((swiftcall)) void GameRoutine_9d52c0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void MenuItemSkill_1899240(PSEUDO_X8, __int64*);
__int64* game_9a28e0(int);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 Element_1885f00(__int64 result, __int64);
__int64 Element_18863e0(__int64, const char**, char);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_157b310(__int64*, unsigned __int16*, __int64);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 GameRoutine_157b510(__int64*);
__int64 GameRoutine_8ca0c0(__int64, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 MenuItemRageName_18a0790(__int64);
__int64 MenuItemSkill_189a700(__int64);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_Unit_GetJob(__int64);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, __int64, unsigned int,
                         unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_IsPaneVisible(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool Util_1579d20(__int64, __int64);
char* GameHr_6ed1a0(__int64);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* Registration_a51f40(char*);
char* game_util_Format(const char*, ...);
const char* GameRoutine_156bee0(const char* result, __int64, __int64, __int64,
                                char, float, float);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN* GameData_21318f0;
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_22416d8;
extern _UNKNOWN GameData_2258da0;
extern __int64 (***GameData_212dae8)();
extern __int64 (*GameData_204d688[])();
extern __int64 (*GameData_21056a8[])();
extern __int64 (*game_gameui_control_MenuItemRageName_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cf48;
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 GameData_21f8020;
extern __int64 GameData_22416d0;
extern __int64 GameData_2258d98;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_21044b8[9];
extern char GameData_1a9f09e;
extern int GameData_1c1766c[5];
int __cxa_guard_acquire(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_8d7580();
void __cxa_guard_release(__int64);
void game_gameui_158dbc0(__int64, _WORD*, __int64, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void game_gameui_control_1891a80(__int64* a1);
__int64 game_gameui_control_1898940(__int64 a1);
_QWORD* game_gameui_control_189c7c0(__int64* a1);
__int64 game_gameui_control_18a0a00(__int64 a1);
__int64 game_gameui_control_18a4290(__int64* a1, int a2, char a3);
__int64 game_gameui_control_18a4810(__int64* a1, int a2, int a3, int a4,
                                    __int64 a5, char a6);
void game_gameui_control_18a5bc0(__int64 a1);
void game_gameui_control_18a73c0(__int64 a1, unsigned __int16* a2);
void game_gameui_control_18aa420(__int64 a1, __int64* a2, __int64 a3);
__int64 game_gameui_control_18b4050(__int64 a1);
__int64 game_gameui_control_18b5650(__int64 a1);
__int64 game_gameui_control_18b5800(__int64 a1);
__int64 game_gameui_control_18bf640(__int64* a1, int a2, char a3);
__int64 game_gameui_control_18bfa40(__int64 a1, unsigned int a2);
__int64 game_gameui_control_18c0480(__int64 a1, int a2);
__int64 game_gameui_control_18c0790(__int64 a1);
__int64 game_gameui_control_18c0980(__int64 a1);

void game_gameui_control_1891a80(__int64* a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  const char* v9;
  __int64 v10;
  __int64 v11;
  struct {
    const char* v12;
    __int64 v13;
  } v12_;

  v12_.v12 = "Num";
  v12_.v13 = 3;
  v2 = Element_1886290((__int64)a1, &v12_.v12);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22416d8) != 0) {
    GameData_22416d0 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release((__int64)&GameData_22416d8);
  }
  if (v2 == nullptr) {
    goto LABEL_10;
  }
  v3 = (__int64*)(*(__int64 (**)(_QWORD*))(*v2 + 16LL))(v2);
  if (v3 != &GameData_22416d0) {
    do {
      v3 = (__int64*)*v3;
    } while (v3 != &GameData_22416d0 && v3 != nullptr);
    if (v3 == nullptr) {
    LABEL_10:
      v2 = nullptr;
    }
  }
  v5 = a1[10];
  a1[136] = (__int64)v2;
  if (v5 != 0) {
    v12_.v12 = "Max";
    v12_.v13 = 3;
    v6 = Element_1886290((__int64)a1, &v12_.v12);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
      GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)&GameData_21f8028);
    }
    if (v6 != nullptr) {
      v7 = (__int64*)(*(__int64 (**)(_QWORD*))(*v6 + 16LL))(v6);
      if (v7 == &GameData_21f8020) {
        goto LABEL_21;
      }
      do {
        v7 = (__int64*)*v7;
      } while (v7 != &GameData_21f8020 && v7 != nullptr);
      if (v7 != nullptr) {
      LABEL_21:
        GameRoutine_9d52c0((void*)((__int64*)&v12_.v12), a1[10], (__int64)v6);
        v9 = v12_.v12;
        v10 = v12_.v13;
        v11 = a1[138];
        v12_.v12 = nullptr;
        v12_.v13 = 0;
        a1[137] = (__int64)v9;
        a1[138] = v10;
        if (v11 != 0) {
          std___1___shared_weak_count___release_weak(v11);
          if (v12_.v13 != 0) {
            std___1___shared_weak_count___release_weak(v12_.v13);
          }
        }
      }
    }
  }
}

__int64 game_gameui_control_1898940(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    const char* v8;
    const char* v9;
    __int64 v10;
    int v11;
  } v8_;

  if (*(_BYTE*)(a1 + 1080) == 1) {
    *(_BYTE*)(a1 + 1080) = 0;
  }
  *(_QWORD*)(a1 + 1096) = 0;
  *(_DWORD*)(a1 + 1104) = -1;
  MenuItemSkill_189a700(a1);
  v2 = *(_QWORD*)(a1 + 1032);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 88) &= ~1u;
  }
  v8_.v8 = "NumNone";
  v8_.v9 = (_BYTE*)((_UNKNOWN*)0x7LL);
  Element_18863e0(a1, &v8_.v8, 1);
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 24);
  }
  else {
    v4 = 0;
  }
  v8_.v11 = 0;
  v8_.v9 = nullptr;
  v8_.v10 = 0;
  v8_.v8 = nullptr;
  Util_1579d20(v4, (__int64)&v8_.v8);
  if (v8_.v8 != nullptr) {
    v8_.v9 = v8_.v8;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  (__int64)v8_.v8);
  }
  MenuItemSkill_1899240((void*)(&v8_.v8), (__int64*)a1);
  if (v8_.v8 != nullptr) {
    (*(void (**)(const char*, _QWORD))(*(_QWORD*)v8_.v8 + 40LL))(v8_.v8, 0);
  }
  v6 = (__int64)v8_.v9;
  if (v8_.v9 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v8_.v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  return LayoutAccessor_1562cf0(a1 + 88, "RelianceOff");
}

_QWORD* game_gameui_control_189c7c0(__int64* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  atomic_uchar* v6;
  unsigned __int8 explicit;
  __int64* v8;
  __int64* v9;
  const char* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  const char* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* result;
  struct {
    const char* v21;
    __int64 v22;
  } v21_;

  v21_.v21 = "Max";
  v21_.v22 = 3;
  v2 = Element_1886290((__int64)a1, &v21_.v21);
  if (v2 != nullptr) {
    *((_BYTE*)v2 + 88) &= ~1u;
  }
  v21_.v21 = "Gauge";
  v21_.v22 = 5;
  v3 = Element_1886290((__int64)a1, &v21_.v21);
  if (v3 != nullptr) {
    v4 = v3[3];
    a1[135] = v4;
    if (v4 != 0) {
      *(_BYTE*)(v4 + 88) &= ~1u;
    }
  }
  v21_.v21 = "Icon";
  v21_.v22 = 4;
  v5 = Element_1886290((__int64)a1, &v21_.v21);
  v6 = (atomic_uchar*)GameData_212dfd0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire);
  v8 = GameData_212dfc8;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
    *v8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release((__int64)GameData_212dfd0);
  }
  if (v5 != nullptr) {
    v9 = (__int64*)(*(__int64 (**)(_QWORD*))(*v5 + 16LL))(v5);
    if (v9 == v8) {
      goto LABEL_39;
    }
    do {
      v9 = (__int64*)*v9;
    } while (v9 != v8 && v9 != nullptr);
    if (v9 != nullptr) {
    LABEL_39:
      GameRoutine_15ac6b0((void*)((__int64*)&v21_.v21), a1[10], (__int64)v5);
      v11 = v21_.v21;
      v12 = v21_.v22;
      v13 = a1[137];
      v21_.v21 = nullptr;
      v21_.v22 = 0;
      a1[136] = (__int64)v11;
      a1[137] = v12;
      if (v13 != 0) {
        std___1___shared_weak_count___release_weak(v13);
        if (v21_.v22 != 0) {
          std___1___shared_weak_count___release_weak(v21_.v22);
        }
      }
    }
  }
  v21_.v21 = "Icon2";
  v21_.v22 = 5;
  v14 = Element_1886290((__int64)a1, &v21_.v21);
  if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
    *v8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release((__int64)GameData_212dfd0);
  }
  if (v14 != nullptr) {
    v15 = (__int64*)(*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
    if (v15 == v8) {
      goto LABEL_27;
    }
    do {
      v15 = (__int64*)*v15;
    } while (v15 != v8 && v15 != nullptr);
    if (v15 != nullptr) {
    LABEL_27:
      GameRoutine_15ac6b0((void*)((__int64*)&v21_.v21), a1[10], (__int64)v14);
      v17 = v21_.v21;
      v18 = v21_.v22;
      v19 = a1[139];
      v21_.v21 = nullptr;
      v21_.v22 = 0;
      a1[138] = (__int64)v17;
      a1[139] = v18;
      if (v19 != 0) {
        std___1___shared_weak_count___release_weak(v19);
        if (v21_.v22 != 0) {
          std___1___shared_weak_count___release_weak(v21_.v22);
        }
      }
    }
  }
  v21_.v21 = "State";
  v21_.v22 = 5;
  result = Element_1886290((__int64)a1, &v21_.v21);
  if (result != nullptr) {
    *((_BYTE*)result + 88) &= ~1u;
  }
  return result;
}

__int64 game_gameui_control_18a0a00(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19[2];
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  v19[0] = (__int64)"L_MenuItem_Name";
  v19[1] = 15;
  GameRoutine_15d4100((void*)(&v20_.v20), (__int64*)(a1 + 88), v19);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v4 = v20_.v20;
  v5 = v20_.v21;
  v6 = v3;
  if (v20_.v21 != 0) {
    v7 = v20_.v21;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20_.v21 + 16), 1u,
                              memory_order_relaxed);
    v6[2] = v5;
    *v6 = game_gameui_control_MenuItemRageName_vtable;
    v6[1] = v4;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v6[3] = 0;
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      v9 = (_QWORD*)v6[1];
      if (v9 != nullptr) {
        v10 = v9[131];
        v11 = v9 + 130;
        if ((_QWORD*)v10 == v9 + 130) {
          goto LABEL_7;
        }
        while (*(_QWORD**)(v10 + 16) != v6) {
          v10 = *(_QWORD*)(v10 + 8);
          if ((_QWORD*)v10 == v11) {
            goto LABEL_7;
          }
        }
        if ((_QWORD*)v10 == v11) {
        LABEL_7:
          v12 = *v2;
          v13 = v8;
          v14 = (_QWORD*)fw_memory_HeapManager_Allocate(v12, 24, 16, 0);
          v14[1] = v11;
          v14[2] = v6;
          v8 = v13;
          v15 = v9[130];
          *v14 = v15;
          *(_QWORD*)(v15 + 8) = v14;
          v9[130] = v14;
          ++v9[132];
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v16 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v16);
      }
    }
    std___1___shared_weak_count___release_weak(v5);
  }
  else {
    v3[2] = 0;
    v3[3] = 0;
    *v3 = game_gameui_control_MenuItemRageName_vtable;
    v3[1] = v4;
  }
  v17 = *(_QWORD*)(a1 + 1072);
  *(_QWORD*)(a1 + 1072) = v6;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  if (v20_.v21 != 0) {
    std___1___shared_weak_count___release_weak(v20_.v21);
  }
  MenuItemRageName_18a0790(*(_QWORD*)(a1 + 1072));
  return ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_MorphRange", 0);
}

__int64 game_gameui_control_18a4290(__int64* a1, int a2, char a3)
{
  __int64* v6;
  __int64 v7;
  __int64* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  struct {
    __int64* v22;
    __int64 v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    int v26;
    int v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v22_;

  v22_.v28 = -1;
  v22_.v29 = -1;
  v6 = msg_MessageManager_instance__ptr[0];
  v22_.v30 = -1;
  v22_.v31 = -1;
  v7 = *msg_MessageManager_instance__ptr[0];
  v8 = GameData_212e348;
  v22_.v32 = -1;
  v22_.v33 = -1;
  v22_.v34 = -1;
  v22_.v35 = -1;
  v22_.v36 = -1;
  v22_.v37 = -1;
  v22_.v38 = -1;
  v22_.v39 = -1;
  v22_.v22 = GameData_212e348 + 2;
  v22_.v23 = 0xFFFF0001FFFF0000LL;
  v22_.v24 = 0xFFFF0004FFFF0002LL;
  v22_.v25 = 0xFFFF0006FFFF0005LL;
  v22_.v40 = 8;
  v22_.v26 = -65529;
  v22_.v27 = -65528;
  v9 = GameRoutine_a4dbe0(v7, "MID_XHelp_Base", 0);
  if (v9 != nullptr) {
    v10 = (__int64)v9;
    v11 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_StatusDetail_Txt00");
    if (v11 != 0) {
      GameRoutine_156c5d0(v11, v10, 0);
    }
  }
  LayoutAccessor_1560070((void*)(&v22_.v22), a1, "L_StatusDetail_Num00");
  if (v22_.v23 != 0) {
    v12 = std___1___shared_weak_count_lock(v22_.v23);
    v13 = v22_.v22;
    if (v22_.v23 != 0) {
      std___1___shared_weak_count___release_weak(v22_.v23);
    }
    if (v12 != 0 && v13 != nullptr) {
      ui_LayoutAccessor_SetPaneVisible((__int64)v13, (__int64)"IconUpDown", 0);
      ui_LayoutAccessor_SetPaneVisible((__int64)v13, (__int64)"IconMax", 0);
      if (a2 > 0 || (a3 & 1) != 0) {
        v18 = ui_LayoutAccessor_FindPane(v13, (__int64)"T_Num");
        if (v18 != 0) {
          v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d690, 0);
          if (v19 != 0) {
            GameRoutine_156c910(v19, "%d", 1, (unsigned int)a2);
          }
        }
      }
      else {
        v14 = *v6;
        v22_.v28 = -1;
        v22_.v29 = -1;
        v22_.v30 = -1;
        v22_.v31 = -1;
        v22_.v32 = -1;
        v22_.v33 = -1;
        v22_.v34 = -1;
        v22_.v35 = -1;
        v22_.v36 = -1;
        v22_.v37 = -1;
        v22_.v38 = -1;
        v22_.v39 = -1;
        v22_.v22 = v8 + 2;
        v22_.v23 = 0xFFFF0001FFFF0000LL;
        v22_.v24 = 0xFFFF0004FFFF0002LL;
        v22_.v25 = 0xFFFF0006FFFF0005LL;
        v22_.v40 = 8;
        v22_.v26 = -65529;
        v22_.v27 = -65528;
        v15 = GameRoutine_a4dbe0(v14, "MID_Sys_ValueEmpty", 0);
        if (v15 != nullptr) {
          v16 = (__int64)v15;
          v17 = ui_LayoutAccessor_FindTextBox(v13, (__int64)"T_Num");
          if (v17 != 0) {
            GameRoutine_156c5d0(v17, v16, 0);
          }
        }
      }
    }
    else if (v12 == 0) {
      goto LABEL_21;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
  }
LABEL_21:
  result = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_StatusDetail");
  if (result != 0) {
    Alignment_56b600(result);
    result = a1[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v21 = result;
        result = *a1;
        if (*a1 != 0) {
          result = ControlCreator_13633c0(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          return std___1___shared_weak_count___release_weak(v21);
        }
      }
    }
  }
  return result;
}

__int64 game_gameui_control_18a4810(__int64* a1, int a2, int a3, int a4,
                                    __int64 a5, char a6)
{
  char v11;
  __int64 v12;
  char v13;
  int v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  char v19;
  int v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  int v32;
  __int64 v33;
  char v34;
  int v35;
  int v36;
  int v37;
  char v38[24];
  struct {
    __int64* v39;
    __int64 v40;
    unsigned __int64 v41;
    unsigned __int64 v42;
    int v43;
    int v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
  } v39_;

  v11 = (a5 == 0) | a6;
  if (((a5 == 0) | a6 & 1) != 0) {
    goto LABEL_24;
  }
  v12 = *(_QWORD*)(a5 + 440);
  if (v12 != 0) {
    v13 = *(_BYTE*)(v12 + 16);
  }
  else {
    v13 = 9;
  }
  if (((1 << v13) & 6) != 0) {
    v14 = 63;
  }
  else {
    v14 = 62;
  }
  v15 = game_9a28e0(v14);
  v16 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v17 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v15);
    if (v17 == 0) {
      if (a4 <= 0) {
        goto LABEL_24;
      }
      goto LABEL_12;
    }
    v16 = *(_DWORD*)(v17 + 32);
  }
  if (a4 <= v16) {
    goto LABEL_24;
  }
LABEL_12:
  v18 = *(_QWORD*)(a5 + 440);
  if (v18 != 0) {
    v19 = *(_BYTE*)(v18 + 16);
  }
  else {
    v19 = 9;
  }
  if (((1 << v19) & 6) != 0) {
    v20 = 63;
  }
  else {
    v20 = 62;
  }
  v21 = game_9a28e0(v20);
  if (game_GameModeData_instance_ != 0 &&
      (v22 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v21)) != 0) {
    a4 = *(_DWORD*)(v22 + 32);
  }
  else {
    a4 = 0;
  }
LABEL_24:
  v23 = GameData_1c1766c[a3];
  nn_util_SNPrintf(v38, 24, "T_StatusDetail_Txt%02d", a2);
  LayoutAccessor_1562060((__int64)a1, (__int64)v38,
                         (__int64)GameData_1c1766c + v23);
  nn_util_SNPrintf(v38, 24, "L_StatusDetail_Num%02d", a2);
  LayoutAccessor_1560070((void*)(&v39_.v39), a1, v38);
  result = v39_.v40;
  if (v39_.v40 == 0) {
    return result;
  }
  v25 = std___1___shared_weak_count_lock(v39_.v40);
  v26 = v39_.v39;
  result = v39_.v40;
  if (v39_.v40 != 0) {
    result = std___1___shared_weak_count___release_weak(v39_.v40);
  }
  if (v25 == 0 || v26 == nullptr) {
    if (v25 == 0) {
      return result;
    }
    goto LABEL_38;
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v26, (__int64)"IconUpDown", 0);
  ui_LayoutAccessor_SetPaneVisible((__int64)v26, (__int64)"IconMax", 0);
  v27 = ui_LayoutAccessor_FindPane(v26, (__int64)"T_Num");
  if (v27 == 0) {
    v28 = 0;
    if ((a4 & 0x80000000) == 0) {
      goto LABEL_31;
    }
  LABEL_42:
    result = GameRoutine_156c910(v28, "%d", 1, (unsigned int)a4);
    if (v28 != 0) {
      v35 = *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)GameData_212da30);
      result = Pane_58f8a0(v28);
      if (result != 0) {
        *(_DWORD*)(result + 12) = v35;
      }
    }
    goto LABEL_38;
  }
  v28 = __dynamic_cast(v27, GameData_212d670[0], GameData_212d690, 0);
  if (a4 < 0) {
    goto LABEL_42;
  }
LABEL_31:
  v39_.v45 = -1;
  v39_.v46 = -1;
  v39_.v47 = -1;
  v39_.v48 = -1;
  v29 = *msg_MessageManager_instance__ptr[0];
  v39_.v49 = -1;
  v39_.v50 = -1;
  v39_.v51 = -1;
  v39_.v52 = -1;
  v39_.v53 = -1;
  v39_.v54 = -1;
  v39_.v55 = -1;
  v39_.v56 = -1;
  v39_.v39 = GameData_212e348 + 2;
  v39_.v40 = 0xFFFF0001FFFF0000LL;
  v39_.v41 = 0xFFFF0004FFFF0002LL;
  v39_.v42 = 0xFFFF0006FFFF0005LL;
  v39_.v57 = 8;
  v39_.v43 = -65529;
  v39_.v44 = -65528;
  v30 = GameRoutine_a4dbe0(v29, "MID_Sys_Plus", 0);
  v31 = game_util_Format("%s%d", v30, a4);
  result = GameRoutine_156c910(v28, "%s", 1, v31);
  if (v28 != 0) {
    v32 = *(_DWORD*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                     (_QWORD)GameData_212da30 + 4);
    result = Pane_58f8a0(v28);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v32;
    }
  }
  if ((v11 & 1) != 0) {
    goto LABEL_38;
  }
  v33 = *(_QWORD*)(a5 + 440);
  if (v33 != 0) {
    v34 = *(_BYTE*)(v33 + 16);
  }
  else {
    v34 = 9;
  }
  if (((1 << v34) & 6) != 0) {
    v36 = 63;
  }
  else {
    v36 = 62;
  }
  result = (__int64)game_9a28e0(v36);
  v37 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
  LABEL_52:
    if (a4 < v37) {
      goto LABEL_38;
    }
    goto LABEL_53;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)result);
  if (result != 0) {
    v37 = *(_DWORD*)(result + 32);
    goto LABEL_52;
  }
  if (a4 >= 0) {
  LABEL_53:
    result =
        ui_LayoutAccessor_SetPaneVisible((__int64)v26, (__int64)"IconMax", 1);
  }
LABEL_38:
  if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    return std___1___shared_weak_count___release_weak(v25);
  }
  return result;
}

void game_gameui_control_18a5bc0(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  float v17;
  bool v18;
  float v19;
  char* v20;
  __int64 v21;
  float v22;
  unsigned __int64 v23;
  float v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  float v28;
  float v30;
  char* v31;
  __int64 v32;
  float v33;
  unsigned __int64 v34;
  float v35;
  float v37;
  __int64 v38;
  unsigned __int64 v39;
  bool v40;
  float v41;
  __int64 v42;
  float v43;
  unsigned __int64 v44;
  char v45;
  float v46;
  _QWORD* v47;
  __int64* v48;
  __int64 v50;
  float v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _BOOL4 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char v62;
  char v63;
  __int64 v64;
  float v65;
  float v66;
  char v67;
  char v68;
  const char* v69[2];
  __int64 v70;
  _BYTE v71[4];

  v3 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88), (__int64)"A_Title");
  if (v3 != 0) {
    Alignment_56b600(v3);
  }
  v4 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                       (__int64)"A_StatusDetail");
  if (v4 != 0) {
    Alignment_56b600(v4);
  }
  v5 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                       (__int64)"A_InfoDetail");
  if (v5 != 0) {
    Alignment_56b600(v5);
  }
  v6 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                       (__int64)"A_Contents");
  if (v6 != 0) {
    Alignment_56b600(v6);
  }
  v7 = *(_QWORD*)(a1 + 96);
  if (v7 != 0) {
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      v9 = v8;
      v10 = *(_QWORD*)(a1 + 88);
      if (v10 != 0) {
        ControlCreator_13633c0(v10);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  v11 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"N_InfoTitle");
  v12 = 0x0.0p+0f;
  v13 = 0x0.0p+0f;
  v71[0] = 0;
  v69[0] = (const char*)0xFF7FFFFF7F7FFFFFLL;
  v70 = 0x7F7FFFFFFF7FFFFFLL;
  if (v11 != 0) {
    v14 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v11 + 128), *(float32x4_t*)(v11 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        (const char*)v11, (__int64)v69, (__int64)&v70, (__int64)v71, 0,
        sqrtf((float)(*(float*)&v14 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v11 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v11 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v11 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v11 + 144)))) /
            *(float*)(v11 + 72),
        sqrtf((float)(*((float*)&v14 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v11 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v11 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v11 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v11 + 144))))) /
            *(float*)(v11 + 76));
    if (v71[0] == 1) {
      v13 = vabds_f32(*((float*)&v70 + 1), *((float*)v69 + 1));
    }
  }
  v15 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"L_InfoTxt");
  v71[0] = 0;
  v69[0] = (const char*)0xFF7FFFFF7F7FFFFFLL;
  v70 = 0x7F7FFFFFFF7FFFFFLL;
  if (v15 != 0) {
    v16 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v15 + 128), *(float32x4_t*)(v15 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        (const char*)v15, (__int64)v69, (__int64)&v70, (__int64)v71, 0,
        sqrtf((float)(*(float*)&v16 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v15 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v15 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v15 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v15 + 144)))) /
            *(float*)(v15 + 72),
        sqrtf((float)(*((float*)&v16 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v15 + 144))))) /
            *(float*)(v15 + 76));
    if (v71[0] == 1) {
      v12 = vabds_f32(*((float*)&v70 + 1), *((float*)v69 + 1));
    }
  }
  v17 = 0x0.0p+0f;
  v18 = v12 == 0x0.0p+0f || v13 == 0x0.0p+0f;
  if (v18) {
    v19 = v13 + v12;
  }
  else {
    v19 = (float)(v13 + v12) + 0x1.4000000000000p+3f;
  }
  v20 = game_util_Format("L_Efficacy%02d", 0);
  v21 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)v20);
  v22 = 0x0.0p+0f;
  v71[0] = 0;
  v69[0] = (const char*)0xFF7FFFFF7F7FFFFFLL;
  v70 = 0x7F7FFFFFFF7FFFFFLL;
  if (v21 != 0) {
    v23 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v21 + 128), *(float32x4_t*)(v21 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        (const char*)v21, (__int64)v69, (__int64)&v70, (__int64)v71, 0,
        sqrtf((float)(*(float*)&v23 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v21 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v21 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v21 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v21 + 144)))) /
            *(float*)(v21 + 72),
        sqrtf((float)(*((float*)&v23 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v21 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v21 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v21 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v21 + 144))))) /
            *(float*)(v21 + 76));
    if (v71[0] == 1) {
      v22 = vabds_f32(*((float*)&v70 + 1), *((float*)v69 + 1));
    }
  }
  if (v22 == 0x0.0p+0f) {
    v24 = v19;
  }
  else {
    v24 = (float)(v19 + v22) + 0x1.4000000000000p+3f;
  }
  v25 = game_util_Format("L_Efficacy%02d", 1);
  v26 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)v25);
  v71[0] = 0;
  v69[0] = (const char*)0xFF7FFFFF7F7FFFFFLL;
  v70 = 0x7F7FFFFFFF7FFFFFLL;
  if (v26 != 0) {
    v27 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v26 + 128), *(float32x4_t*)(v26 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        (const char*)v26, (__int64)v69, (__int64)&v70, (__int64)v71, 0,
        sqrtf((float)(*(float*)&v27 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v26 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v26 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v26 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v26 + 144)))) /
            *(float*)(v26 + 72),
        sqrtf((float)(*((float*)&v27 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v26 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v26 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v26 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v26 + 144))))) /
            *(float*)(v26 + 76));
    if (v71[0] == 1) {
      v17 = vabds_f32(*((float*)&v70 + 1), *((float*)v69 + 1));
    }
  }
  v28 = 0x0.0p+0f;
  if (v17 == 0x0.0p+0f || v22 == 0x0.0p+0f) {
    v30 = v24 + v17;
  }
  else {
    v30 = (float)(v24 + v17) + 0x1.4000000000000p+3f;
  }
  v31 = game_util_Format("L_Efficacy%02d", 2);
  v32 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)v31);
  v33 = 0x0.0p+0f;
  v71[0] = 0;
  v69[0] = (const char*)0xFF7FFFFF7F7FFFFFLL;
  v70 = 0x7F7FFFFFFF7FFFFFLL;
  if (v32 != 0) {
    v34 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v32 + 128), *(float32x4_t*)(v32 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        (const char*)v32, (__int64)v69, (__int64)&v70, (__int64)v71, 0,
        sqrtf((float)(*(float*)&v34 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v32 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v32 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v32 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v32 + 144)))) /
            *(float*)(v32 + 72),
        sqrtf((float)(*((float*)&v34 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 144))))) /
            *(float*)(v32 + 76));
    v33 = 0x0.0p+0f;
    if (v71[0] == 1) {
      v33 = vabds_f32(*((float*)&v70 + 1), *((float*)v69 + 1));
    }
  }
  v18 = v33 == 0x0.0p+0f;
  v35 = v30 + v33;
  if (v18 || v17 == 0x0.0p+0f) {
    v37 = v35;
  }
  else {
    v37 = v35 + 0x1.4000000000000p+3f;
  }
  v38 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"N_Status");
  v71[0] = 0;
  v69[0] = (const char*)0xFF7FFFFF7F7FFFFFLL;
  v70 = 0x7F7FFFFFFF7FFFFFLL;
  if (v38 != 0) {
    v39 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v38 + 128), *(float32x4_t*)(v38 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        (const char*)v38, (__int64)v69, (__int64)&v70, (__int64)v71, 0,
        sqrtf((float)(*(float*)&v39 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v38 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v38 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v38 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v38 + 144)))) /
            *(float*)(v38 + 72),
        sqrtf((float)(*((float*)&v39 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v38 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v38 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v38 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v38 + 144))))) /
            *(float*)(v38 + 76));
    if (v71[0] == 1) {
      v28 = vabds_f32(*((float*)&v70 + 1), *((float*)v69 + 1));
    }
  }
  v40 = v12 != 0x0.0p+0f || v13 != 0x0.0p+0f;
  if (v40 && v28 != 0x0.0p+0f) {
    v41 = (float)(v37 + v28) + 0x1.4000000000000p+3f;
  }
  else {
    v41 = v37 + v28;
  }
  v42 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88),
                                   (__int64)"A_StatusDetail");
  v43 = 0x0.0p+0f;
  v71[0] = 0;
  v69[0] = (const char*)0xFF7FFFFF7F7FFFFFLL;
  v70 = 0x7F7FFFFFFF7FFFFFLL;
  if (v42 != 0) {
    v44 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v42 + 128), *(float32x4_t*)(v42 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        (const char*)v42, (__int64)v69, (__int64)&v70, (__int64)v71, 0,
        sqrtf((float)(*(float*)&v44 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v42 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v42 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v42 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v42 + 144)))) /
            *(float*)(v42 + 72),
        sqrtf((float)(*((float*)&v44 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v42 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v42 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v42 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v42 + 144))))) /
            *(float*)(v42 + 76));
    if (v71[0] == 1) {
      v43 = vabds_f32(*((float*)&v70 + 1), *((float*)v69 + 1));
    }
  }
  v45 = v28 != 0x0.0p+0f || v40;
  if (((unsigned __int8)v45 & (v43 != 0x0.0p+0f)) != 0) {
    v46 = (float)(v41 + v43) + 0x1.4000000000000p+3f;
  }
  else {
    v46 = v41 + v43;
  }
  v69[0] = "Window";
  v69[1] = (_BYTE*)((_UNKNOWN*)0x6LL);
  v47 = Element_1886290(a1, v69);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2258da0) != 0) {
    GameData_2258d98 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release((__int64)&GameData_2258da0);
  }
  if (v47 != nullptr) {
    v48 = (__int64*)(*(__int64 (**)(_QWORD*))(*v47 + 16LL))(v47);
    if (v48 == &GameData_2258d98) {
      goto LABEL_78;
    }
    do {
      v48 = (__int64*)*v48;
    } while (v48 != &GameData_2258d98 && v48 != nullptr);
    if (v48 != nullptr) {
    LABEL_78:
      v50 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88),
                                       (__int64)"A_Contents");
      v51 = 0x0.0p+0f;
      v71[0] = 0;
      v69[0] = (const char*)0xFF7FFFFF7F7FFFFFLL;
      v70 = 0x7F7FFFFFFF7FFFFFLL;
      if (v50 != 0) {
        v52 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v50 + 128),
                                    *(float32x4_t*)(v50 + 128)))
                  .n128_u64[0];
        GameRoutine_156bee0(
            (const char*)v50, (__int64)v69, (__int64)&v70, (__int64)v71, 0,
            sqrtf((float)(*(float*)&v52 +
                          (float)(COERCE_FLOAT(*(_OWORD*)(v50 + 112)) *
                                  COERCE_FLOAT(*(_OWORD*)(v50 + 112)))) +
                  (float)(COERCE_FLOAT(*(_OWORD*)(v50 + 144)) *
                          COERCE_FLOAT(*(_OWORD*)(v50 + 144)))) /
                *(float*)(v50 + 72),
            sqrtf(
                (float)(*((float*)&v52 + 1) +
                        (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v50 + 112))) *
                                COERCE_FLOAT(HIDWORD(*(_QWORD*)(v50 + 112))))) +
                (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v50 + 144))) *
                        COERCE_FLOAT(HIDWORD(*(_QWORD*)(v50 + 144))))) /
                *(float*)(v50 + 76));
        if (v71[0] == 1) {
          v51 = vabds_f32(*(float*)&v70, *(float*)v69);
        }
      }
      if (*(_QWORD*)(a1 + 104) == 0) {
        goto LABEL_99;
      }
      v53 = *(_QWORD*)(a1 + 96);
      if (v53 == 0) {
        goto LABEL_99;
      }
      v54 = std___1___shared_weak_count_lock(v53);
      if (v54 != 0) {
        v55 = *(_QWORD*)(a1 + 88);
        if (v55 != 0) {
          v1 = *(unsigned __int8*)(v55 + 24);
          v56 = v55 + 152;
          if (v1 == 0) {
            v56 = 0;
          }
          v57 = v56 != *(_QWORD*)(a1 + 104);
        }
        else {
          v57 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v57) {
            goto LABEL_91;
          }
        }
        else {
          v59 = v54;
          (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
          std___1___shared_weak_count___release_weak(v59);
          if (v57) {
            goto LABEL_91;
          }
        }
        if ((v1 & 1) == 0) {
          goto LABEL_99;
        }
        goto LABEL_96;
      }
    LABEL_91:
      v58 = *(_QWORD*)(a1 + 96);
      if (v58 == 0 || *(_QWORD*)(v58 + 8) == -1) {
        goto LABEL_99;
      }
    LABEL_96:
      v60 = *(_QWORD*)(a1 + 104);
      if (v60 != 0) {
        v61 = *(_QWORD*)(v60 + 24);
        if (v61 != 0) {
          v62 = *(_BYTE*)(v61 + 89);
          v63 = *(_BYTE*)(v61 + 88) & 1;
          *(_BYTE*)(v61 + 88) |= 1u;
          *(_BYTE*)(v61 + 89) = -1;
        }
        else {
          v62 = 0;
          v63 = 0;
        }
      LABEL_100:
        if ((ui_LayoutAccessor_IsPaneVisible((__int64*)(a1 + 88),
                                             (__int64)"InfoTitle_Border") &
             1) != 0) {
          v64 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88),
                                           (__int64)"InfoTitle_Border");
          if (v64 == 0) {
          LABEL_104:
            v65 = v51 + 0x1.3000000000000p+6f;
            if (v61 == 0) {
              goto LABEL_110;
            }
            goto LABEL_109;
          }
          while ((*(_BYTE*)(v64 + 88) & 1) != 0) {
            v64 = *(_QWORD*)(v64 + 24);
            if (v64 == 0) {
              goto LABEL_104;
            }
          }
        }
        v66 = 0x1.7800000000000p+5f;
        if (*(_BYTE*)(a1 + 1060) != 0) {
          v66 = 0x1.4000000000000p+5f;
        }
        v65 = v51 + (float)(v66 * 0x1.0000000000000p+1f);
        if (v61 != 0) {
        LABEL_109:
          v67 = *(_BYTE*)(v61 + 88);
          *(_BYTE*)(v61 + 89) = v62;
          *(_BYTE*)(v61 + 88) = v67 & 0xFE | v63;
        }
      LABEL_110:
        v68 = *((_BYTE*)v47 + 88) | 0x10;
        *((float*)v47 + 20) = v65;
        *((float*)v47 + 21) = v46 + 0x1.4800000000000p+6f;
        *((_BYTE*)v47 + 88) = v68;
        return;
      }
    LABEL_99:
      v62 = 0;
      v63 = 0;
      v61 = 0;
      goto LABEL_100;
    }
  }
}

void game_gameui_control_18a73c0(__int64 a1, unsigned __int16* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v5;
  __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  _BOOL4 v9;
  bool v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  const char* v15;
  const char* v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  int v24;
  int v25;
  char v26;
  __int64 v27;
  struct {
    _QWORD v28[4];
    int v29;
    int v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
  } v28_;
  float v44;
  _DWORD v45[2];

  v2 = *a2;
  v5 = GameData_212c878[0];
  v6 = *GameData_212c878[0];
  if ((*((_BYTE*)a2 + 3) & 0x20) != 0) {
    v7 = *(unsigned __int8**)(*(_QWORD*)(v6 + 64) + 8 * v2);
  LABEL_12:
    v9 = ((v7[72] - 5) & 0xFE) == 0;
    goto LABEL_13;
  }
  v7 = *(unsigned __int8**)(*(_QWORD*)(v6 + 64) + 8 * v2);
  if ((v7[336] & 8) != 0) {
    goto LABEL_12;
  }
  v8 = v7[72];
  v9 = true;
  v10 = v8 > 7;
  v11 = 1LL << v8;
  v12 = v10 || ((1LL << v7[73]) & 0x7DC) == 0;
  v13 = v11 & 0x20FF;
  if (!v12 || v13 == 0) {
    goto LABEL_12;
  }
LABEL_13:
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  if (v9) {
    v15 = "Status08";
  }
  else {
    v15 = "StatusOff";
  }
  if (v9) {
    v16 = "Wdw_TitleOff_Status08";
  }
  else {
    v16 = "Wdw_TitleOff_Status02";
  }
  LayoutAccessor_1562cf0(a1 + 88, v15);
  LayoutAccessor_1562cf0(a1 + 88, v16);
  *(_BYTE*)(a1 + 1060) = v9;
  if (*a2 != 0) {
    v17 = GameHr_6ed1a0(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *a2));
    if (v17 == nullptr) {
      goto LABEL_25;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
    v28_.v31 = -1;
    v28_.v32 = -1;
    v28_.v33 = -1;
    v28_.v34 = -1;
    v18 = *msg_MessageManager_instance__ptr[0];
    v28_.v35 = -1;
    v28_.v36 = -1;
    v28_.v37 = -1;
    v28_.v38 = -1;
    v28_.v39 = -1;
    v28_.v40 = -1;
    v28_.v41 = -1;
    v28_.v42 = -1;
    v28_.v28[0] = GameData_212e348 + 2;
    v28_.v28[1] = 0xFFFF0001FFFF0000LL;
    v28_.v28[2] = 0xFFFF0004FFFF0002LL;
    v28_.v28[3] = 0xFFFF0006FFFF0005LL;
    v28_.v43 = 8;
    v28_.v29 = -65529;
    v28_.v30 = -65528;
    v17 = GameRoutine_a4dbe0(v18, "MID_Sys_ValueEmptyLong", 0);
    if (v17 == nullptr) {
      goto LABEL_25;
    }
  }
  v19 = (__int64)v17;
  v20 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v20 != 0) {
    GameRoutine_156c5d0(v20, v19, 0);
  }
LABEL_25:
  v21 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v21 != 0) {
    v22 = v21;
    v23 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v23 != nullptr) {
      GameRoutine_190a0c0((float*)v28_.v28, (__int64)v45, &v44, v23, v23[27]);
      v24 = v45[0];
      v25 = v45[1];
    }
    else {
      v24 = 0;
      v25 = 0;
    }
    v26 = *(_BYTE*)(v22 + 88);
    *(_DWORD*)(v22 + 80) = v24;
    *(_DWORD*)(v22 + 84) = v25;
    *(_BYTE*)(v22 + 88) = v26 | 0x10;
  }
  if (v9) {
    game_gameui_158dbc0(a1 + 88, a2, 0, 0);
  }
  v27 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v27 != 0) {
    Alignment_56b600(v27);
  }
  game_gameui_control_18a5bc0(a1);
}

void game_gameui_control_18aa420(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int16 v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  __int16 v20;
  __int16 v21;
  __int16 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 (***v26)();
  _QWORD* v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  __int16* v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  _WORD* v47;
  int v48;
  __int16 v49;
  int v50;
  __int16 v51;
  int v52;
  __int16 v53;
  int v54;
  __int16 v55;
  int v56;
  __int16 v57;
  int v58;
  __int16 v59;
  int v60;
  __int16 v61;
  int v62;
  __int16 v63;
  int v64;
  int v65;
  int v66;
  __int64 v67;
  int v68;
  char* v69;
  char* v70;
  char* v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  char* v75;
  char* v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64 v94;
  __int64* v95;
  __int64 v96;
  struct {
    __int64 v97;
    __int64 v98;
    __int64 v99;
  } v97_;
  struct {
    __int64* v100;
    __int64 v101;
    unsigned __int64 v102;
    unsigned __int64 v103;
    int v104;
    int v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
    __int64 v117;
    __int64 v118;
  } v100_;

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetail02");
  v100_.v106 = -1;
  v100_.v107 = -1;
  v100_.v108 = -1;
  v100_.v109 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v100_.v110 = -1;
  v100_.v111 = -1;
  v100_.v112 = -1;
  v100_.v113 = -1;
  v100_.v114 = -1;
  v100_.v115 = -1;
  v100_.v116 = -1;
  v100_.v117 = -1;
  v100_.v100 = GameData_212e348 + 2;
  v100_.v101 = 0xFFFF0001FFFF0000LL;
  v100_.v102 = 0xFFFF0004FFFF0002LL;
  v100_.v103 = 0xFFFF0006FFFF0005LL;
  v100_.v118 = 8;
  v100_.v104 = -65529;
  v100_.v105 = -65528;
  v7 = GameRoutine_a4dbe0(v6, "MID_XHelp_Reliance", 0);
  if (v7 != nullptr) {
    v8 = (__int64)v7;
    v9 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                       (__int64)"T_StatusDetail_Txt00");
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, v8, 0);
    }
  }
  LayoutAccessor_1560070((void*)(&v100_.v100), (__int64*)(a1 + 88),
                         "L_StatusDetail_Num00");
  if (v100_.v101 != 0) {
    v10 = std___1___shared_weak_count_lock(v100_.v101);
    v11 = v100_.v100;
    if (v100_.v101 != 0) {
      std___1___shared_weak_count___release_weak(v100_.v101);
    }
    if (v10 != 0 && v11 != nullptr) {
      v12 = ui_LayoutAccessor_FindTextBox(v11, (__int64)"T_Num");
      if (v12 != 0) {
        GameRoutine_156c5d0(v12, (__int64)&GameData_1a9f09e, 0);
      }
      ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"IconUpDown", 0);
      ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"IconMax", 0);
    }
    else if (v10 == 0) {
      goto LABEL_14;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      if (a2 == nullptr) {
        goto LABEL_19;
      }
      goto LABEL_15;
    }
  }
LABEL_14:
  if (a2 == nullptr) {
  LABEL_19:
    v15 = *(_WORD*)GameData_212cf48;
    v16 = *((_WORD*)GameData_212cf48 + 1);
    v17 = *((_WORD*)GameData_212cf48 + 2);
    v18 = *((_WORD*)GameData_212cf48 + 3);
    v19 = *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212cf48);
    v20 = *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212cf48 + 2);
    v21 = *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212cf48 + 4);
    v22 = *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212cf48 + 6);
    LOWORD(v23) =
        *(_WORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212cf48);
    LOWORD(v97_.v97) = *(_WORD*)GameData_212cf48;
    WORD1(v97_.v97) = v16;
    WORD2(v97_.v97) = v17;
    HIWORD(v97_.v97) = v18;
    LOWORD(v97_.v98) = v19;
    WORD1(v97_.v98) = v20;
    WORD2(v97_.v98) = v21;
    HIWORD(v97_.v98) = v22;
    goto LABEL_132;
  }
LABEL_15:
  if (a3 == 0) {
    goto LABEL_19;
  }
  v13 = a2[49];
  v100_.v100 = a2;
  v100_.v101 = v13;
  if (v13 != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 24) + 1784LL) + 272LL);
  }
  else {
    v14 = 0;
  }
  v24 = *(_QWORD*)(a3 + 392);
  v100_.v102 = v14;
  v97_.v97 = a3;
  v97_.v98 = v24;
  v97_.v99 = 0;
  if (v24 == 0) {
  LABEL_26:
    v26 = GameData_212dae8;
    goto LABEL_27;
  }
  v25 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v24 + 24) + 1784LL) + 272LL);
  v97_.v99 = v25;
  v26 = GameData_212dae8;
  if (v14 != 0 && v25 != 0) {
    v27 = *(_QWORD**)(game_GameModeData_instance_ + 128);
    v28 = GameReliance_8e17a0(v27, (__int64)&v100_.v100, (__int64)&v97_.v97);
    if ((v28 & 0x80000000) == 0) {
      v26 = (__int64 (***)(void))(v27[1] + 56LL * v28);
      goto LABEL_27;
    }
    goto LABEL_26;
  }
LABEL_27:
  v23 = *((unsigned __int8*)v26 + 11);
  v97_.v97 = 0;
  v97_.v98 = 0;
  LOWORD(v97_.v99) = 0;
  if (v23 != 0) {
    v29 = *(_QWORD*)(game_Unit_GetJob(a3) + 64);
    if (v29 != 0) {
      v31 = *(__int64**)(v29 + 40);
      v30 = *v31;
      v32 = v31[1] - *v31;
      v33 = (unsigned __int64)v32 >> 3;
      if ((int)((unsigned __int64)v32 >> 3) < 1) {
        v35 = a2;
        v36 = a3;
        v37 = (__int16*)GameData_212cf48;
      }
      else {
        if ((unsigned int)v33 >= v23) {
          LODWORD(v33) = v23;
        }
        v34 = (unsigned int)(v33 - 1);
        if (v34 >= v32 >> 3) {
          GameRoutine_8d7580();
        }
        v35 = a2;
        v36 = a3;
        v37 = (__int16*)(*(_QWORD*)(v30 + 8 * v34) + 32LL);
      }
      v38 = *v37;
      if (v38 <= -100) {
        v38 = -100;
      }
      if (v38 >= 100) {
        v15 = 100;
      }
      else {
        v15 = v38;
      }
      v39 = v37[1];
      LOWORD(v97_.v97) = v15;
      if (v39 <= -100) {
        v39 = -100;
      }
      if (v39 >= 100) {
        v16 = 100;
      }
      else {
        v16 = v39;
      }
      v40 = v37[2];
      WORD1(v97_.v97) = v16;
      if (v40 <= -100) {
        v40 = -100;
      }
      if (v40 >= 100) {
        v17 = 100;
      }
      else {
        v17 = v40;
      }
      v41 = v37[3];
      WORD2(v97_.v97) = v17;
      if (v41 <= -100) {
        v41 = -100;
      }
      if (v41 >= 100) {
        v18 = 100;
      }
      else {
        v18 = v41;
      }
      v42 = v37[4];
      HIWORD(v97_.v97) = v18;
      if (v42 <= -100) {
        v42 = -100;
      }
      if (v42 >= 100) {
        v19 = 100;
      }
      else {
        v19 = v42;
      }
      v43 = v37[5];
      LOWORD(v97_.v98) = v19;
      if (v43 <= -100) {
        v43 = -100;
      }
      if (v43 >= 100) {
        v20 = 100;
      }
      else {
        v20 = v43;
      }
      v44 = v37[6];
      WORD1(v97_.v98) = v20;
      if (v44 <= -100) {
        v44 = -100;
      }
      if (v44 >= 100) {
        v21 = 100;
      }
      else {
        v21 = v44;
      }
      v45 = v37[7];
      v46 = v37[8];
      WORD2(v97_.v98) = v21;
      if (v45 <= -100) {
        v45 = -100;
      }
      if (v45 >= 100) {
        v22 = 100;
      }
      else {
        v22 = v45;
      }
      if (v46 <= -100) {
        v46 = -100;
      }
      HIWORD(v97_.v98) = v22;
      if (v46 >= 100) {
        LOWORD(v23) = 100;
      }
      else {
        LOWORD(v23) = v46;
      }
      LOWORD(v97_.v99) = v23;
      goto LABEL_84;
    }
    v35 = a2;
    v36 = a3;
    LOWORD(v23) = 0;
  }
  else {
    v35 = a2;
    v36 = a3;
  }
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
LABEL_84:
  v100_.v100 = (__int64*)v35[49];
  v96 = *(_QWORD*)(v36 + 392);
  v47 = (_WORD*)GameRoutine_8ca0c0((__int64)&v100_.v100, (__int64)&v96);
  if (v47 == nullptr) {
    goto LABEL_133;
  }
  if ((__int16)(v47[32] + v15) <= -100) {
    v48 = -100;
  }
  else {
    v48 = (__int16)(v47[32] + v15);
  }
  if (v48 >= 100) {
    v15 = 100;
  }
  else {
    v15 = v48;
  }
  v49 = v47[33];
  LOWORD(v97_.v97) = v15;
  v50 = (__int16)(v49 + v16);
  if (v50 <= -100) {
    v50 = -100;
  }
  if (v50 >= 100) {
    v16 = 100;
  }
  else {
    v16 = v50;
  }
  v51 = v47[34];
  WORD1(v97_.v97) = v16;
  v52 = (__int16)(v51 + v17);
  if (v52 <= -100) {
    v52 = -100;
  }
  if (v52 >= 100) {
    v17 = 100;
  }
  else {
    v17 = v52;
  }
  v53 = v47[35];
  WORD2(v97_.v97) = v17;
  v54 = (__int16)(v53 + v18);
  if (v54 <= -100) {
    v54 = -100;
  }
  if (v54 >= 100) {
    v18 = 100;
  }
  else {
    v18 = v54;
  }
  v55 = v47[36];
  HIWORD(v97_.v97) = v18;
  v56 = (__int16)(v55 + v19);
  if (v56 <= -100) {
    v56 = -100;
  }
  if (v56 >= 100) {
    v19 = 100;
  }
  else {
    v19 = v56;
  }
  v57 = v47[37];
  LOWORD(v97_.v98) = v19;
  v58 = (__int16)(v57 + v20);
  if (v58 <= -100) {
    v58 = -100;
  }
  if (v58 >= 100) {
    v20 = 100;
  }
  else {
    v20 = v58;
  }
  v59 = v47[38];
  WORD1(v97_.v98) = v20;
  v60 = (__int16)(v59 + v21);
  if (v60 <= -100) {
    v60 = -100;
  }
  if (v60 >= 100) {
    v21 = 100;
  }
  else {
    v21 = v60;
  }
  v61 = v47[39];
  WORD2(v97_.v98) = v21;
  v62 = (__int16)(v61 + v22);
  if (v62 <= -100) {
    v62 = -100;
  }
  if (v62 >= 100) {
    v22 = 100;
  }
  else {
    v22 = v62;
  }
  v63 = v47[40];
  HIWORD(v97_.v98) = v22;
  v64 = (__int16)(v63 + v23);
  if (v64 <= -100) {
    v65 = -100;
  }
  else {
    v65 = v64;
  }
  if (v65 >= 100) {
    LOWORD(v23) = 100;
  }
  else {
    LOWORD(v23) = v65;
  }
LABEL_132:
  LOWORD(v97_.v99) = v23;
LABEL_133:
  if (((unsigned __int16)(v22 | v23 | v21 | v20 | v19 | v18 | v17) |
       (unsigned __int16)(v16 | v15)) != 0) {
    v66 = 1;
    v67 = 0;
    v95 = GameData_212e348 + 2;
    while (1) {
      v68 = *((__int16*)&v97_.v97 + v67);
      if (*((_WORD*)&v97_.v97 + v67) == 0) {
        goto LABEL_136;
      }
      v69 = game_util_Format("T_StatusDetail_Txt%02d", v66);
      if ((unsigned __int8)v67 > 8u) {
        v70 = nullptr;
      }
      else {
        v70 = GameData_21044b8[v67];
      }
      LayoutAccessor_1562060(a1 + 88, (__int64)v69, (__int64)v70);
      v71 = game_util_Format("L_StatusDetail_Num%02d", v66);
      LayoutAccessor_1560070((void*)(&v100_.v100), (__int64*)(a1 + 88), v71);
      if (v100_.v101 != 0) {
        v72 = std___1___shared_weak_count_lock(v100_.v101);
        v73 = v100_.v100;
        if (v100_.v101 != 0) {
          std___1___shared_weak_count___release_weak(v100_.v101);
        }
        if (v72 != 0 && v73 != nullptr) {
          if (v68 < 0) {
            v76 = game_util_Format("%d", v68);
          }
          else {
            v100_.v106 = -1;
            v100_.v107 = -1;
            v100_.v108 = -1;
            v100_.v109 = -1;
            v100_.v110 = -1;
            v100_.v111 = -1;
            v100_.v112 = -1;
            v100_.v113 = -1;
            v74 = *msg_MessageManager_instance__ptr[0];
            v100_.v114 = -1;
            v100_.v115 = -1;
            v100_.v116 = -1;
            v100_.v117 = -1;
            v100_.v100 = v95;
            v100_.v101 = 0xFFFF0001FFFF0000LL;
            v100_.v102 = 0xFFFF0004FFFF0002LL;
            v100_.v103 = 0xFFFF0006FFFF0005LL;
            v100_.v118 = 8;
            v100_.v104 = -65529;
            v100_.v105 = -65528;
            v75 = GameRoutine_a4dbe0(v74, "MID_Sys_Plus", 0);
            v76 = game_util_Format("%s%d", v75, v68);
          }
          v77 = v76;
          v78 = ui_LayoutAccessor_FindPane(v73, (__int64)"T_Num");
          if (v78 != 0) {
            v79 = __dynamic_cast(v78, GameData_212d670[0], GameData_212d690, 0);
            if (v79 != 0) {
              GameRoutine_156c910(v79, "%s", 1, v77);
            }
          }
          v80 = ui_LayoutAccessor_FindPane(v73, (__int64)"T_Num");
          if (v80 != 0) {
            v81 = __dynamic_cast(v80, GameData_212d670[0], GameData_212d690, 0);
            if (v81 != 0) {
              v82 = *(_DWORD*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                               (_QWORD)GameData_212da30 + 4);
              v83 = Pane_58f8a0(v81);
              if (v83 != 0) {
                *(_DWORD*)(v83 + 12) = v82;
              }
            }
          }
          ui_LayoutAccessor_SetPaneVisible((__int64)v73, (__int64)"IconUpDown",
                                           0);
        LABEL_159:
          if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
            std___1___shared_weak_count___release_weak(v72);
          }
          goto LABEL_135;
        }
        if (v72 != 0) {
          goto LABEL_159;
        }
      }
    LABEL_135:
      ++v66;
    LABEL_136:
      if (++v67 == 9) {
        v84 = game_util_Format("StatusDetail%02d", v66);
        LayoutAccessor_1562cf0(a1 + 88, v84);
        goto LABEL_162;
      }
    }
  }
  v86 = *msg_MessageManager_instance__ptr[0];
  v100_.v106 = -1;
  v100_.v107 = -1;
  v100_.v108 = -1;
  v100_.v109 = -1;
  v100_.v110 = -1;
  v100_.v111 = -1;
  v100_.v112 = -1;
  v100_.v113 = -1;
  v100_.v114 = -1;
  v100_.v115 = -1;
  v100_.v116 = -1;
  v100_.v117 = -1;
  v100_.v100 = GameData_212e348 + 2;
  v100_.v101 = 0xFFFF0001FFFF0000LL;
  v100_.v102 = 0xFFFF0004FFFF0002LL;
  v100_.v103 = 0xFFFF0006FFFF0005LL;
  v100_.v118 = 8;
  v100_.v104 = -65529;
  v100_.v105 = -65528;
  v87 = GameRoutine_a4dbe0(v86, "MID_Sys_Empty", 0);
  if (v87 != nullptr) {
    v88 = (__int64)v87;
    v89 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                        (__int64)"T_StatusDetail_Txt01");
    if (v89 != 0) {
      GameRoutine_156c5d0(v89, v88, 0);
    }
  }
  v90 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_StatusDetail_Num01/T_Num");
  if (v90 != 0) {
    GameRoutine_156c5d0(v90, (__int64)&GameData_1a9f09e, 0);
  }
  v91 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88),
                                   (__int64)"L_StatusDetail_Num01/T_Num");
  if (v91 != 0) {
    v92 = __dynamic_cast(v91, GameData_212d670[0], GameData_212d690, 0);
    if (v92 != 0) {
      v93 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v94 = Pane_58f8a0(v92);
      if (v94 != 0) {
        *(_DWORD*)(v94 + 12) = v93;
      }
    }
  }
LABEL_162:
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 0);
  v85 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v85 != 0) {
    Alignment_56b600(v85);
  }
  game_gameui_control_18a5bc0(a1);
}

__int64 game_gameui_control_18b4050(__int64 a1)
{
  __int64 v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  char v9;

  if (*(_QWORD*)(a1 + 328) == *(_QWORD*)(a1 + 336)) {
    return 0;
  }
  v9 = 0;
  v5_.v5[0] = GameData_21056a8;
  v5_.v5[1] = &v9;
  v5_.v6 = v5_.v5;
  Element_1885f00(a1, (__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v3 = 32;
    goto LABEL_7;
  }
  if (v5_.v6 != nullptr) {
    v3 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v5_.v6 + v3))((__int64)v5_.v6);
  }
  return v9 & 1;
}

__int64 game_gameui_control_18b5650(__int64 a1)
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  struct {
    __int64* v10;
    __int64 v11;
    unsigned __int64 v12;
    unsigned __int64 v13;
    __int64** v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v10_;
  __int64 v28;

  *(_BYTE*)(a1 + 1105) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  v2 = *msg_MessageManager_instance__ptr[0];
  v10_.v15 = -1;
  v10_.v16 = -1;
  v10_.v17 = -1;
  v10_.v18 = -1;
  v10_.v19 = -1;
  v10_.v20 = -1;
  v10_.v21 = -1;
  v10_.v22 = -1;
  v10_.v23 = -1;
  v10_.v24 = -1;
  v10_.v25 = -1;
  v10_.v26 = -1;
  v10_.v10 = GameData_212e348 + 2;
  v10_.v11 = 0xFFFF0001FFFF0000LL;
  v10_.v12 = 0xFFFF0004FFFF0002LL;
  v10_.v13 = 0xFFFF0006FFFF0005LL;
  v10_.v27 = 8;
  v10_.v14 = (__int64**)0xFFFF0008FFFF0007LL;
  v3 = GameRoutine_a4dbe0(v2, "MID_Sys_NoEquipment", 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88), (__int64)"T_Txt");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  LayoutAccessor_1560070((void*)(&v10_.v10), (__int64*)(a1 + 88), "L_Icon");
  result = v10_.v11;
  if (v10_.v11 != 0) {
    v7 = std___1___shared_weak_count_lock(v10_.v11);
    v8 = v10_.v10;
    result = v10_.v11;
    if (v10_.v11 != 0) {
      result = std___1___shared_weak_count___release_weak(v10_.v11);
    }
    if (v7 == 0 || v8 == nullptr) {
      if (v7 == 0) {
        return result;
      }
      goto LABEL_16;
    }
    LayoutAccessor_155e830((__int64)v8, 1);
    v28 = 0;
    v10_.v10 = (__int64*)GameData_204d688;
    v10_.v14 = &v10_.v10;
    GameHr_157b310(v8, (unsigned __int16*)&v28, (__int64)&v10_.v10);
    result = (__int64)v10_.v14;
    if (v10_.v14 == &v10_.v10) {
      v9 = 4;
    }
    else {
      if (v10_.v14 == nullptr) {
        goto LABEL_16;
      }
      v9 = 5;
    }
    result = ((__int64 (*)(void*))(*v10_.v14)[v9])(v10_.v14);
  LABEL_16:
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  return result;
}

__int64 game_gameui_control_18b5800(__int64 a1)
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10[2];
  struct {
    __int64* v11;
    __int64 v12;
    unsigned __int64 v13;
    unsigned __int64 v14;
    int v15;
    int v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v11_;

  *(_BYTE*)(a1 + 1105) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  v2 = *msg_MessageManager_instance__ptr[0];
  v11_.v17 = -1;
  v11_.v18 = -1;
  v11_.v19 = -1;
  v11_.v20 = -1;
  v11_.v21 = -1;
  v11_.v22 = -1;
  v11_.v23 = -1;
  v11_.v24 = -1;
  v11_.v25 = -1;
  v11_.v26 = -1;
  v11_.v27 = -1;
  v11_.v28 = -1;
  v11_.v11 = GameData_212e348 + 2;
  v11_.v12 = 0xFFFF0001FFFF0000LL;
  v11_.v13 = 0xFFFF0004FFFF0002LL;
  v11_.v14 = 0xFFFF0006FFFF0005LL;
  v11_.v29 = 8;
  v11_.v15 = -65529;
  v11_.v16 = -65528;
  v3 = GameRoutine_a4dbe0(v2, "MID_Sys_Empty", 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88), (__int64)"T_Txt");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 88), "L_Icon");
  result = v11_.v12;
  if (v11_.v12 != 0) {
    v7 = std___1___shared_weak_count_lock(v11_.v12);
    v8 = v11_.v11;
    result = v11_.v12;
    if (v7 != 0) {
      v9 = (__int64)v11_.v11;
    }
    else {
      v9 = 0;
    }
    if (v11_.v12 != 0) {
      result = std___1___shared_weak_count___release_weak(v11_.v12);
    }
    if (v9 != 0) {
      LayoutAccessor_155e830((__int64)v8, 1);
      v10[0] = v9;
      v10[1] = v7;
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_157b510(v10);
        std___1___shared_weak_count___release_weak(v7);
      }
      else {
        GameRoutine_157b510(v10);
      }
      result = ui_LayoutAccessor_FindPane(v8, (__int64)"Icon");
      if (result != 0) {
        result =
            __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
        if (result != 0) {
          result = Manager_136a920(ui_Manager_instance_ + 1264, result, 0, 7u,
                                   "IconEmptyCombatArts");
        }
      }
    }
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  return result;
}

__int64 game_gameui_control_18bf640(__int64* a1, int a2, char a3)
{
  __int64* v5;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  const char* v11;
  const char* v12;

  v5 = a1 + 10;
  if (a2 >= 0) {
    v7 = a2;
  }
  else {
    v7 = -a2;
  }
  v8 = ui_LayoutAccessor_FindPane(v5, (__int64)"T_Num");
  if (v8 != 0) {
    v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d690, 0);
    if (v9 != 0) {
      GameRoutine_156c910(v9, "%d", 1, v7);
    }
  }
  if ((a3 & 1) != 0) {
    v10 = *((_DWORD*)a1 + 58);
    *((_DWORD*)a1 + 58) = 1;
    if (v10 != 1) {
      (*(void (**)(__int64*))(*a1 + 184))(a1);
    }
  }
  if (a2 >= 0) {
    v11 = "Attack";
  }
  else {
    v11 = "Heal";
  }
  if (a2 >= 0) {
    v12 = "Anim_Attack";
  }
  else {
    v12 = "Anim_Heal";
  }
  LayoutAccessor_1562cf0((__int64)(a1 + 10), v11);
  GameHr_1562680((__int64)(a1 + 10), v12, 0x1.0000000000000p+0f);
  return (*(__int64 (**)(__int64*, __int64))(*a1 + 40))(a1, 1);
}

__int64 game_gameui_control_18bfa40(__int64 a1, unsigned int a2)
{
  int v2;
  __int64 v5;
  const char* v6;
  char* v7;
  __int64* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;

  v2 = *(_DWORD*)(a1 + 232);
  v5 = a1 + 80;
  if (v2 != 0) {
    v6 = "Size_OnMap_Efficacy";
  }
  else {
    v6 = "Size_Combat_Efficacy";
  }
  LayoutAccessor_1562cf0(v5, v6);
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 12;
    v7 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 24;
    v7 = (char*)(a1 + 249);
  }
  strcpy(v7, "Anim_AttackC");
  v8 = msg_MessageManager_instance__ptr[0];
  Registration_a51f40((char*)(*msg_MessageManager_instance__ptr[0] + 14704));
  v9 = GameRoutine_a4dbe0(*v8, "MID_Battle_Damage_Critical", 0);
  if (v9 != nullptr) {
    v10 = (__int64)v9;
    v11 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 80), (__int64)"T_Txt");
    if (v11 != 0) {
      GameRoutine_156c5d0(v11, v10, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
  v12 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 80), (__int64)"T_Num");
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d690, 0);
    if (v13 != 0) {
      GameRoutine_156c910(v13, "%d", 1, a2);
    }
  }
  LayoutAccessor_1562cf0(a1 + 80, "Critical");
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v14 = *(const char**)(a1 + 264);
  }
  else {
    v14 = (const char*)(a1 + 249);
  }
  GameHr_1562680(a1 + 80, v14, 0x1.0000000000000p+0f);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 game_gameui_control_18c0480(__int64 a1, int a2)
{
  char* v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  const char* v10;
  __int64* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int128 v16;
  const char* v17;
  struct {
    __int64* v19;
    __int64 v20;
    int v21;
  } v19_;
  struct {
    _QWORD v22[2];
    unsigned __int64 v23;
    unsigned __int64 v24;
    int v25;
    int v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v22_;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 10;
    v3 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 20;
    v3 = (char*)(a1 + 249);
  }
  strcpy(v3, "Anim_Skill");
  if (a2 < 1) {
    LayoutAccessor_1562cf0(a1 + 80, "StatusDown");
    v11 = msg_MessageManager_instance__ptr[0];
    Registration_a51f40((char*)(*msg_MessageManager_instance__ptr[0] + 14704));
    v12 = *v11;
    v22_.v27 = -1;
    v22_.v28 = -1;
    v22_.v29 = -1;
    v22_.v30 = -1;
    v22_.v31 = -1;
    v22_.v32 = -1;
    v22_.v33 = -1;
    v22_.v34 = -1;
    v22_.v35 = -1;
    v22_.v36 = -1;
    v22_.v37 = -1;
    v22_.v38 = -1;
    v22_.v22[0] = GameData_212e348 + 2;
    v22_.v22[1] = 0xFFFF0001FFFF0000LL;
    v22_.v23 = 0xFFFF0004FFFF0002LL;
    v22_.v24 = 0xFFFF0006FFFF0005LL;
    v22_.v39 = 8;
    v22_.v25 = -65529;
    v22_.v26 = -65528;
    v13 = GameRoutine_a4dbe0(v12, "MID_Battle_StatusDown", 0);
    if (v13 != nullptr) {
      v14 = (__int64)v13;
      v15 =
          ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 80), (__int64)"T_Txt");
      if (v15 != 0) {
        GameRoutine_156c5d0(v15, v14, 0);
      }
    }
    (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
    v16 = *(_OWORD*)(a1 + 192);
    v19_.v20 = *(_QWORD*)(a1 + 192);
    v19_.v21 = DWORD2(v16);
    v19_.v19 = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830((__int64)v22_.v22, 0x0.0p+0f);
    v10 = "SE_ACT_LD_StatusDown_Common";
  }
  else {
    LayoutAccessor_1562cf0(a1 + 80, "StatusUp");
    v4 = msg_MessageManager_instance__ptr[0];
    Registration_a51f40((char*)(*msg_MessageManager_instance__ptr[0] + 14704));
    v5 = *v4;
    v22_.v27 = -1;
    v22_.v28 = -1;
    v22_.v29 = -1;
    v22_.v30 = -1;
    v22_.v31 = -1;
    v22_.v32 = -1;
    v22_.v33 = -1;
    v22_.v34 = -1;
    v22_.v35 = -1;
    v22_.v36 = -1;
    v22_.v37 = -1;
    v22_.v38 = -1;
    v22_.v22[0] = GameData_212e348 + 2;
    v22_.v22[1] = 0xFFFF0001FFFF0000LL;
    v22_.v23 = 0xFFFF0004FFFF0002LL;
    v22_.v24 = 0xFFFF0006FFFF0005LL;
    v22_.v39 = 8;
    v22_.v25 = -65529;
    v22_.v26 = -65528;
    v6 = GameRoutine_a4dbe0(v5, "MID_Battle_StatusUp", 0);
    if (v6 != nullptr) {
      v7 = (__int64)v6;
      v8 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 80), (__int64)"T_Txt");
      if (v8 != 0) {
        GameRoutine_156c5d0(v8, v7, 0);
      }
    }
    (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
    v9 = *(_OWORD*)(a1 + 192);
    v19_.v20 = *(_QWORD*)(a1 + 192);
    v19_.v21 = DWORD2(v9);
    v19_.v19 = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830((__int64)v22_.v22, 0x0.0p+0f);
    v10 = "SE_ACT_LD_StatusUp_Common";
  }
  snd_playAt_ff5f0((__int64)v10, (__int64)v10, (__int64)&v19_.v19,
                   (__int64)v22_.v22, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v22_.v22);
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v17 = *(const char**)(a1 + 264);
  }
  else {
    v17 = (const char*)(a1 + 249);
  }
  GameHr_1562680(a1 + 80, v17, 0x1.0000000000000p+0f);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 game_gameui_control_18c0790(__int64 a1)
{
  char* v2;
  __int64* v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  const char* v9;
  struct {
    _QWORD v11[2];
    int v12;
  } v11_;
  struct {
    _QWORD v13[4];
    int v14;
    int v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v13_;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 10;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 20;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_Skill");
  LayoutAccessor_1562cf0(a1 + 80, "StatusDown");
  v3 = msg_MessageManager_instance__ptr[0];
  Registration_a51f40((char*)(*msg_MessageManager_instance__ptr[0] + 14704));
  v4 = *v3;
  v13_.v16 = -1;
  v13_.v17 = -1;
  v13_.v18 = -1;
  v13_.v19 = -1;
  v13_.v20 = -1;
  v13_.v21 = -1;
  v13_.v22 = -1;
  v13_.v23 = -1;
  v13_.v24 = -1;
  v13_.v25 = -1;
  v13_.v26 = -1;
  v13_.v27 = -1;
  v13_.v13[0] = GameData_212e348 + 2;
  v13_.v13[1] = 0xFFFF0001FFFF0000LL;
  v13_.v13[2] = 0xFFFF0004FFFF0002LL;
  v13_.v13[3] = 0xFFFF0006FFFF0005LL;
  v13_.v28 = 8;
  v13_.v14 = -65529;
  v13_.v15 = -65528;
  v5 = GameRoutine_a4dbe0(v4, "MID_Battle_BadCondition", 0);
  if (v5 != nullptr) {
    v6 = (__int64)v5;
    v7 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 80), (__int64)"T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
  v8 = *(_OWORD*)(a1 + 192);
  v11_.v11[1] = *(_QWORD*)(a1 + 192);
  v11_.v12 = DWORD2(v8);
  v11_.v11[0] = GameData_212d1e0[0] + 2;
  snd_Fade_Fade_10c830((__int64)v13_.v13, 0x0.0p+0f);
  snd_playAt_ff5f0((__int64)"SE_ACT_LD_BadCondition_Common",
                   (__int64)"SE_ACT_LD_BadCondition_Common", (__int64)v11_.v11,
                   (__int64)v13_.v13, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v13_.v13);
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v9 = *(const char**)(a1 + 264);
  }
  else {
    v9 = (const char*)(a1 + 249);
  }
  GameHr_1562680(a1 + 80, v9, 0x1.0000000000000p+0f);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 game_gameui_control_18c0980(__int64 a1)
{
  char* v2;
  __int64* v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  const char* v9;
  struct {
    _QWORD v11[2];
    int v12;
  } v11_;
  struct {
    _QWORD v13[4];
    int v14;
    int v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v13_;

  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    *(_QWORD*)(a1 + 256) = 10;
    v2 = *(char**)(a1 + 264);
  }
  else {
    *(_BYTE*)(a1 + 248) = 20;
    v2 = (char*)(a1 + 249);
  }
  strcpy(v2, "Anim_Skill");
  LayoutAccessor_1562cf0(a1 + 80, "StatusUp");
  v3 = msg_MessageManager_instance__ptr[0];
  Registration_a51f40((char*)(*msg_MessageManager_instance__ptr[0] + 14704));
  v4 = *v3;
  v13_.v16 = -1;
  v13_.v17 = -1;
  v13_.v18 = -1;
  v13_.v19 = -1;
  v13_.v20 = -1;
  v13_.v21 = -1;
  v13_.v22 = -1;
  v13_.v23 = -1;
  v13_.v24 = -1;
  v13_.v25 = -1;
  v13_.v26 = -1;
  v13_.v27 = -1;
  v13_.v13[0] = GameData_212e348 + 2;
  v13_.v13[1] = 0xFFFF0001FFFF0000LL;
  v13_.v13[2] = 0xFFFF0004FFFF0002LL;
  v13_.v13[3] = 0xFFFF0006FFFF0005LL;
  v13_.v28 = 8;
  v13_.v14 = -65529;
  v13_.v15 = -65528;
  v5 = GameRoutine_a4dbe0(v4, "MID_Battle_CureCondition", 0);
  if (v5 != nullptr) {
    v6 = (__int64)v5;
    v7 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 80), (__int64)"T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 160LL))(a1, "T_Txt");
  v8 = *(_OWORD*)(a1 + 192);
  v11_.v11[1] = *(_QWORD*)(a1 + 192);
  v11_.v12 = DWORD2(v8);
  v11_.v11[0] = GameData_212d1e0[0] + 2;
  snd_Fade_Fade_10c830((__int64)v13_.v13, 0x0.0p+0f);
  snd_playAt_ff5f0((__int64)"SE_ACT_LD_CureCondition_Common",
                   (__int64)"SE_ACT_LD_CureCondition_Common", (__int64)v11_.v11,
                   (__int64)v13_.v13, 0, 0x10001u, 0, 0x0.0p+0f,
                   0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v13_.v13);
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v9 = *(const char**)(a1 + 264);
  }
  else {
    v9 = (const char*)(a1 + 249);
  }
  GameHr_1562680(a1 + 80, v9, 0x1.0000000000000p+0f);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

#pragma GCC visibility pop
