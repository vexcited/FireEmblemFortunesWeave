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

#pragma GCC visibility pop
