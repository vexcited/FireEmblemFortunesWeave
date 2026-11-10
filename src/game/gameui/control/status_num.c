#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, _QWORD*);
_QWORD* GameRoutine_188fdc0(__int64, int, int, int, int, unsigned __int8, int,
                            char, int);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
extern _UNKNOWN GameData_22416d8;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_2130ea8;
extern __int64 GameData_22416d0;
extern __int64* GameData_212e348;
extern __int64* GameData_2130ea0;
extern __int64* msg_MessageManager_instance__ptr[2];
_QWORD* StatusNum_1890080(__int64 a1);
_QWORD* StatusNum_1890820(__int64 a1, unsigned int a2, int a3);
_QWORD* StatusNum_1890980(__int64 a1, int a2, int a3, char a4);
__int64* StatusNum_1890ac0(__int64 a1, int a2);
__int64 Element_1884860(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Element_1886290_alt1(_QWORD, _QWORD) __asm__("Element_1886290");
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_188fdc0_alt1(__int64, int, int, int, int, unsigned __int8,
                                 int, char, int) __asm__("GameRoutine_188fdc0");
__int64 GameRoutine_188fdc0_alt2(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD,
                                 _DWORD) __asm__("GameRoutine_188fdc0");
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_alt1(_QWORD) __asm__("__cxa_guard_acquire");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1(void) __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 strlen(_QWORD);
extern __int64 (*Element_1888840_ptr[])();
extern __int64 (*GameData_2100a00[])();
extern __int64 (*GameData_2100a58[])();
extern __int64 (*GameData_2100c10[])();
extern __int64 (*game_gameui_control_StatusNum_vtable[])();
extern __int64 GameData_2100a20;
extern __int64 GameData_2100a30;
extern __int64 GameData_2100a40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2100a18;
extern char* GameData_2100a28;
extern char* GameData_2100a38;
__attribute__((swiftcall)) void StatusNum_188fab0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, __int64 a3);
__int64 StatusNum_1890220(__int64 a1, int a2, int a3, int a4, char a5, char a6,
                          int a7);
__int64 StatusNum_1890420(__int64 a1, unsigned int a2, unsigned int a3,
                          unsigned int a4, char a5);
__int64 StatusNum_1890620(__int64 a1, int a2, int a3, int a4, char a5, int a6);
__int64 StatusNum_1890080_alt1(_QWORD) __asm__("StatusNum_1890080");
extern _UNKNOWN GameData_1abdf8e;
__int64 StatusNum_1890ba0(__int64 a1, int* a2, char a3, char a4, char a5);

__attribute__((swiftcall)) void StatusNum_188fab0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  const char* v23;
  __int64 v24;

  v8 = (_QWORD*)LayoutEx_579160(1056, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2100a58;
  Element_1884860(v8 + 3, a1, a2, a3);
  v10[3] = game_gameui_control_StatusNum_vtable;
  v10[12] = GameData_2100a00;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v13 = GameData_2100a30;
  v12[2] = GameData_2100a28;
  v12[3] = v13;
  v14 = GameData_2100a40;
  v12[4] = GameData_2100a38;
  v12[5] = v14;
  v15 = GameData_2100a20;
  *v12 = GameData_2100a18;
  v12[1] = v15;
  v16 = GameRoutine_576600(a1, "Text");
  if (v16 != 0) {
    v23 = (const char*)v16;
    v24 = strlen(v16);
    if (v24 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)v12, (__int64)&v23);
    }
  }
  v17 = GameRoutine_576600(a1, v12[2]);
  if (v17 != 0) {
    v23 = (const char*)v17;
    v24 = strlen(v17);
    if (v24 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 2),
                          (__int64)&v23);
    }
  }
  v18 = GameRoutine_576600(a1, v12[4]);
  if (v18 != 0) {
    v23 = (const char*)v18;
    v24 = strlen(v18);
    if (v24 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 4),
                          (__int64)&v23);
    }
  }
  v23 = "IconUpDown";
  v24 = 10;
  v19 = Element_1886290_alt1(v9, &v23);
  if (v19 != 0) {
    *(_BYTE*)(v19 + 88) &= ~1u;
  }
  v23 = "Max";
  v24 = 3;
  v20 = Element_1886290_alt1(v9, &v23);
  if (v20 != 0) {
    *(_BYTE*)(v20 + 88) &= ~1u;
  }
  v21 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v21 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v21);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = Element_1888840_ptr;
  v10[12] = GameData_2100c10;
  {
    result;
    return;
  }
}

_QWORD* StatusNum_1890080(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
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

  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  v11[0] = "Text";
  v11[1] = 4;
  v3 = Element_1886290(a1, v11);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    v9 = __cxa_guard_acquire(GameData_2130ea8, v2);
    if ((_DWORD)v9 != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v9, v10);
      __cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v3 != nullptr) {
    v4 = (__int64*)(*(__int64 (**)(_QWORD*))(*v3 + 16LL))(v3);
    if (v4 == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      v4 = (__int64*)*v4;
    } while (v4 != GameData_2130ea0 && v4 != nullptr);
    if (v4 != nullptr) {
    LABEL_10:
      v14 = -1;
      v15 = -1;
      v16 = -1;
      v17 = -1;
      v6 = *msg_MessageManager_instance__ptr[0];
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v25 = -1;
      v11[0] = GameData_212e348 + 2;
      v11[1] = 0xFFFF0001FFFF0000LL;
      v11[2] = 0xFFFF0004FFFF0002LL;
      v11[3] = 0xFFFF0006FFFF0005LL;
      v26 = 8;
      v12 = -65529;
      v13 = -65528;
      v7 = GameRoutine_a4dbe0(v6, "MID_Sys_ValueEmpty", 0, v11);
      GameRoutine_156c5d0(v3, v7, 0);
    }
  }
  return GameRoutine_188fdc0(a1, 0, 0, 0, -1, 0, 0, 0, -1);
}

__int64 StatusNum_1890220(__int64 a1, int a2, int a3, int a4, char a5, char a6,
                          int a7)
{
  __int64 v14;
  __int64* v15;
  __int64 v17;
  int v18;
  _QWORD v20[4];
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  v20[0] = "Text";
  v20[1] = 4;
  v14 = Element_1886290_alt1(a1, v20);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(GameData_2130ea8) != 0) {
    *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release(GameData_2130ea8);
  }
  if (v14 != 0) {
    v15 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    if (v15 == GameData_2130ea0) {
      goto LABEL_11;
    }
    do {
      v15 = (__int64*)*v15;
    } while (v15 != GameData_2130ea0 && v15 != nullptr);
    if (v15 != nullptr) {
    LABEL_11:
      if (a2 < 0 || (a6 & 1) == 0) {
        GameRoutine_156c910(v14, "%d", 1);
      }
      else {
        v23 = -1;
        v24 = -1;
        v25 = -1;
        v26 = -1;
        v17 = *msg_MessageManager_instance__ptr[0];
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v31 = -1;
        v32 = -1;
        v33 = -1;
        v34 = -1;
        v20[0] = GameData_212e348 + 2;
        v20[1] = 0xFFFF0001FFFF0000LL;
        v20[2] = 0xFFFF0004FFFF0002LL;
        v20[3] = 0xFFFF0006FFFF0005LL;
        v35 = 8;
        v21 = -65529;
        v22 = -65528;
        v18 = GameRoutine_a4dbe0(v17, "MID_Sys_Plus", 0, v20);
        GameRoutine_156c910(v14, "%s%d", (_BYTE*)((_UNKNOWN*)0x0LL) + 2, v18);
      }
    }
  }
  return GameRoutine_188fdc0_alt1(a1, a5 & 1, a2, a3, a4, 0, 0, 0, a7);
}

__int64 StatusNum_1890420(__int64 a1, unsigned int a2, unsigned int a3,
                          unsigned int a4, char a5)
{
  __int64 v10;
  __int64* v11;
  __int64 v13;
  int v14;
  _QWORD v16[4];
  int v17;
  int v18;
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
  __int64 v30;
  __int64 v31;

  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  v16[0] = "Text";
  v16[1] = 4;
  v10 = Element_1886290_alt1(a1, v16);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(GameData_2130ea8) != 0) {
    *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release(GameData_2130ea8);
  }
  if (v10 != 0) {
    v11 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    if (v11 == GameData_2130ea0) {
      goto LABEL_11;
    }
    do {
      v11 = (__int64*)*v11;
    } while (v11 != GameData_2130ea0 && v11 != nullptr);
    if (v11 != nullptr) {
    LABEL_11:
      if ((a2 & 0x80000000) != 0 || (a5 & 1) == 0) {
        GameRoutine_156c910(v10, "%d", 1);
      }
      else {
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v13 = *msg_MessageManager_instance__ptr[0];
        v23 = -1;
        v24 = -1;
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v16[0] = GameData_212e348 + 2;
        v16[1] = 0xFFFF0001FFFF0000LL;
        v16[2] = 0xFFFF0004FFFF0002LL;
        v16[3] = 0xFFFF0006FFFF0005LL;
        v31 = 8;
        v17 = -65529;
        v18 = -65528;
        v14 = GameRoutine_a4dbe0(v13, "MID_Sys_Plus", 0, v16);
        GameRoutine_156c910(v10, "%s%d", (_BYTE*)((_UNKNOWN*)0x0LL) + 2, v14);
      }
    }
  }
  return GameRoutine_188fdc0_alt2(a1, 1, a2, a3, a4, 0, 1, 0, -1);
}

__int64 StatusNum_1890620(__int64 a1, int a2, int a3, int a4, char a5, int a6)
{
  __int64 v12;
  __int64* v13;
  __int64 v15;
  int v16;
  _QWORD v18[4];
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  v18[0] = "Text";
  v18[1] = 4;
  v12 = Element_1886290_alt1(a1, v18);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(GameData_2130ea8) != 0) {
    *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release(GameData_2130ea8);
  }
  if (v12 != 0) {
    v13 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    if (v13 == GameData_2130ea0) {
      goto LABEL_11;
    }
    do {
      v13 = (__int64*)*v13;
    } while (v13 != GameData_2130ea0 && v13 != nullptr);
    if (v13 != nullptr) {
    LABEL_11:
      if (a2 < 0 || (a5 & 1) == 0) {
        GameRoutine_156c910(v12, "%d", 1);
      }
      else {
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v24 = -1;
        v15 = *msg_MessageManager_instance__ptr[0];
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v31 = -1;
        v32 = -1;
        v18[0] = GameData_212e348 + 2;
        v18[1] = 0xFFFF0001FFFF0000LL;
        v18[2] = 0xFFFF0004FFFF0002LL;
        v18[3] = 0xFFFF0006FFFF0005LL;
        v33 = 8;
        v19 = -65529;
        v20 = -65528;
        v16 = GameRoutine_a4dbe0(v15, "MID_Sys_Plus", 0, v18);
        GameRoutine_156c910(v12, "%s%d", (_BYTE*)((_UNKNOWN*)0x0LL) + 2, v16);
      }
    }
  }
  return GameRoutine_188fdc0_alt1(a1, 1, a2, a3, a4, 0, 0, 1, a6);
}

_QWORD* StatusNum_1890820(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v11;
  __int64 v12;
  _QWORD v13[2];

  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  v13[0] = "Text";
  v13[1] = 4;
  v7 = Element_1886290(a1, v13);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    v11 = __cxa_guard_acquire(&GameData_22416d8, v6);
    if ((_DWORD)v11 != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v11, v12);
      __cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v7 != nullptr) {
    v8 = (__int64*)(*(__int64 (**)(_QWORD*))(*v7 + 16LL))(v7);
    if (v8 == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      v8 = (__int64*)*v8;
    } while (v8 != &GameData_22416d0 && v8 != nullptr);
    if (v8 != nullptr) {
    LABEL_10:
      if (a2 == a3) {
        GameRoutine_156c910(v7, "%d", 1);
      }
      else {
        GameRoutine_156c910(v7, "%d%s%d", 3, (const char*)a2,
                            (unsigned int)"-");
      }
    }
  }
  return GameRoutine_188fdc0(a1, 0, a2, a2, -1, 0, 0, 0, -1);
}

_QWORD* StatusNum_1890980(__int64 a1, int a2, int a3, char a4)
{
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];

  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  v15[0] = "Text";
  v15[1] = 4;
  v9 = Element_1886290(a1, v15);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    v13 = __cxa_guard_acquire(&GameData_22416d8, v8);
    if ((_DWORD)v13 != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v13, v14);
      __cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v9 != nullptr) {
    v10 = (__int64*)(*(__int64 (**)(_QWORD*))(*v9 + 16LL))(v9);
    if (v10 == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      v10 = (__int64*)*v10;
    } while (v10 != &GameData_22416d0 && v10 != nullptr);
    if (v10 != nullptr) {
    LABEL_10:
      GameRoutine_156c910(v9, "%d", 1);
    }
  }
  return GameRoutine_188fdc0(a1, 1, a2, a3, 1, 0, 0, 0, a4 & 1);
}

__int64* StatusNum_1890ac0(__int64 a1, int a2)
{
  __int64* result;
  __int64 v4;
  __int64* v5;
  int v7;
  __int64 v8;
  _QWORD v9[2];

  v9[0] = "Text";
  v9[1] = 4;
  result = Element_1886290(a1, v9);
  v5 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v4);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v8);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v5 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v5 + 16))(v5);
    if (result == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v7 = *((_DWORD*)GameData_212da30 + a2);
      result = (__int64*)Pane_58f8a0(v5);
      if (result != nullptr) {
        *((_DWORD*)result + 3) = v7;
      }
    }
  }
  return result;
}

__int64 StatusNum_1890ba0(__int64 a1, int* a2, char a3, char a4, char a5)
{
  __int64 v10;
  __int64* v11;
  int v13;
  int v14;
  __int64 v15;
  unsigned int v16;
  int v17;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  bool v28;
  int v29;
  unsigned __int8 v30;
  const char* v31;
  _QWORD v32[2];
  unsigned __int64 v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;

  if ((a2[1] & 1) == 0) {
    return StatusNum_1890080_alt1(a1);
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
  v32[0] = "Text";
  v32[1] = 4;
  v10 = Element_1886290_alt1(a1, v32);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_alt1(GameData_2130ea8) != 0) {
    *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
    __cxa_guard_release(GameData_2130ea8);
  }
  if (v10 == 0) {
    return StatusNum_1890080_alt1(a1);
  }
  v11 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  if (v11 != GameData_2130ea0) {
    do {
      v11 = (__int64*)*v11;
    } while (v11 != GameData_2130ea0 && v11 != nullptr);
    if (v11 == nullptr) {
      return StatusNum_1890080_alt1(a1);
    }
  }
  v13 = *a2;
  if ((unsigned int)(*a2 - 39) < 3) {
    v14 = 0;
    if ((a4 & 1) == 0) {
      goto LABEL_24;
    }
  LABEL_22:
    if ((v14 & 0x80000000) == 0) {
      v37 = -1;
      v38 = -1;
      v39 = -1;
      v40 = -1;
      v21 = *msg_MessageManager_instance__ptr[0];
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v44 = -1;
      v45 = -1;
      v46 = -1;
      v47 = -1;
      v48 = -1;
      v32[0] = GameData_212e348 + 2;
      v32[1] = 0xFFFF0001FFFF0000LL;
      v33 = 0xFFFF0004FFFF0002LL;
      v34 = 0xFFFF0006FFFF0005LL;
      v49 = 8;
      v35 = -65529;
      v36 = -65528;
      v22 = GameRoutine_a4dbe0(v21, "MID_Sys_Plus", 0, v32);
      GameRoutine_156c910(v10, "%s%d", (_BYTE*)((_UNKNOWN*)0x0LL) + 2, v22);
      goto LABEL_25;
    }
  LABEL_24:
    GameRoutine_156c910(v10, "%d", 1);
    goto LABEL_25;
  }
  if (v13 != 9) {
    if (v13 != 17) {
      v14 = a2[4];
      if ((a4 & 1) == 0) {
        goto LABEL_24;
      }
      goto LABEL_22;
    }
    v15 = (unsigned int)a2[4];
    v16 = a2[5];
    if ((int)(v16 + v15) >= 1) {
      v17 = a2[6];
      if ((_DWORD)v15 == v16) {
        GameRoutine_156c910(v10, "%d", 1);
      }
      else {
        if ((a5 & 1) != 0) {
          v31 = (const char*)&GameData_1abdf8e;
        }
        else {
          v31 = "-";
        }
        GameRoutine_156c910(v10, "%d%s%d", 3, v15, v31, v16);
      }
      v29 = -1;
      v25 = a3 & 1;
      v27 = -1;
      v26 = a1;
      v23 = v16;
      v24 = v17;
      v30 = 0;
      return GameRoutine_188fdc0_alt1(v26, v25, v23, v24, v27, v30, 0, 0, v29);
    }
    return StatusNum_1890080_alt1(a1);
  }
  v19 = a2[4];
  v37 = -1;
  v38 = -1;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v20 = *msg_MessageManager_instance__ptr[0];
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v32[0] = GameData_212e348 + 2;
  v32[1] = 0xFFFF0001FFFF0000LL;
  v33 = 0xFFFF0004FFFF0002LL;
  v34 = 0xFFFF0006FFFF0005LL;
  v49 = 8;
  v35 = -65529;
  v36 = -65528;
  GameRoutine_a4dbe0(v20, "MID_Sys_Percent", 0, v32);
  GameRoutine_156c910(v10, "%d%s", 2, (const char*)v19);
LABEL_25:
  v23 = a2[4];
  v24 = a2[5];
  v25 = a3 & 1;
  v26 = a1;
  v27 = a2[6];
  v28 = *a2 == 38 || *a2 == 20;
  v29 = a2[2];
  v30 = v28;
  return GameRoutine_188fdc0_alt1(v26, v25, v23, v24, v27, v30, 0, 0, v29);
}

#pragma GCC visibility pop
