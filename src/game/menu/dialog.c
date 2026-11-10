#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameConverge_8f24c0(_QWORD, _QWORD);
__int64 GameRoutine_1647b80(_QWORD, _QWORD);
__int64 GameRoutine_164b120(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 GameRoutine_16e0120(_QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a89034;
extern _UNKNOWN GameData_225d6d8;
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_1f90100[])();
extern __int64 (*GameData_1fb7780[])();
extern __int64 (*GameData_1fb7b68[])();
extern __int64 (*GameData_1fe2b80[])();
extern __int64 (*GameData_1fe9808[])();
extern __int64 (*GameData_20378d0[])();
extern __int64 (*game_menu_ProcDialogList_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d690;
extern __int64 GameData_225d660;
extern __int64 GameData_225d668;
extern __int64 GameData_225d670;
extern __int64 GameData_225d680;
extern __int64 GameData_225d690;
extern __int64 GameData_225d6a0;
extern __int64 GameData_225d6a8;
extern __int64 GameData_225d6b0;
extern __int64 GameData_225d6c0;
extern __int64 GameData_225d6d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e0a0[11];
extern __int64* GameData_212e0a8[10];
extern __int64* GameData_212e348;
extern __int64* GameData_212fc70[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char GameData_225d658;
extern char GameData_225d698;
extern int GameData_225d678;
extern int GameData_225d688;
extern int GameData_225d6b8;
extern int GameData_225d6c8;
void __attribute__((noreturn)) GameRoutine_8f2260(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64 a1, __int64 a2);
void game_menu_Dialog__CreateBind_game_menu_Dialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
_QWORD* game_menu_Dialog__CreateBind_game_menu_ItemDialog(__int64 a1,
                                                          _QWORD* a2);
void game_menu_Dialog__CreateBind_game_menu_ItemDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
__int64 game_menu_Dialog__CreateBind_game_menu_ExchangeDialog(__int64 a1,
                                                              _QWORD* a2);
void game_menu_Dialog__CreateBind_game_menu_ExchangeDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
void game_menu_Dialog__CreateBindDirect_game_menu_Dialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
__int64 game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog(__int64 a1,
                                                                _QWORD* a2);
void game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
void game_menu_Dialog__CreateBind_game_menu_InfoDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2);
__int64 Dialog_16495e0(_QWORD* a1);
__int64 Dialog_16499c0(__int64 result);
__int64 Dialog_1649ba0(__int64 a1, __int64* a2);
__int64 Dialog_1649e50(__int64 result, __int64 a2, char a3, char a4);
__int64 game_menu_Dialog_PostBuild_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_menu_Dialog_PostBuild_lambda1_Invoke(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
void __attribute__((noreturn)) GameRoutine_60a210();
__int64 Dialog_164b120(float* a1, __int64* a2, __int64** a3);
__int64 game_menu_Dialog_SetDecideSe_lambda0_Invoke(__int64 result);

__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1504, 16, 0);
  GameRoutine_1647b80(v4, a2);
  ProcInst_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
  v8[0] = GameData_1f90100;
  v9 = v8;
  v11 = v10;
  v10[0] = GameData_1f90100;
  GameRoutine_654050(v10, v4 + 1200);
  if (v11 == v10) {
    v5 = 32;
    goto LABEL_7;
  }
  if (v11 != nullptr) {
    v5 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
  }
  if (v9 == v8) {
    v6 = 32;
    goto LABEL_12;
  }
  if (v9 != nullptr) {
    v6 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v9 + v6))((__int64)v9);
  }
  return v4;
}

void game_menu_Dialog__CreateBind_game_menu_Dialog_closure_CloneInto(__int64 a1,
                                                                     _QWORD* a2)
{
  *a2 = GameData_1f90100;
}

_QWORD* game_menu_Dialog__CreateBind_game_menu_ItemDialog(__int64 a1,
                                                          _QWORD* a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;

  if (a1 == 0) {
    return nullptr;
  }
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1520, 16, 0);
  v11[0] = *a2;
  GameRoutine_1647b80(v4, v11);
  v4[189] = 0;
  v4[188] = 0;
  v4[187] = 0;
  v5 = GameData_212e0a0[0] + 140;
  *v4 = GameData_212e0a0[0] + 2;
  v4[22] = v5;
  ProcInst_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
  v12 = v11;
  v9[0] = GameData_1fb7780;
  v10 = v9;
  v11[0] = GameData_1fb7780;
  GameRoutine_654050(v11, v4 + 150);
  if (v12 == v11) {
    v6 = 32;
    goto LABEL_7;
  }
  if (v12 != nullptr) {
    v6 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v12 + v6))((__int64)v12);
  }
  if (v10 == v9) {
    v7 = 32;
    goto LABEL_12;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
  }
  return v4;
}

void game_menu_Dialog__CreateBind_game_menu_ItemDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fb7780;
}

__int64 game_menu_Dialog__CreateBind_game_menu_ExchangeDialog(__int64 a1,
                                                              _QWORD* a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1584, 16, 0);
  v11[0] = *a2;
  GameRoutine_1647b80(v4, v11);
  v5 = GameData_212e0a8[0];
  *(_WORD*)(v4 + 1496) = 0;
  *(_QWORD*)(v4 + 1520) = 0;
  *(_QWORD*)(v4 + 1528) = 0;
  *(_QWORD*)(v4 + 1536) = 0;
  *(_QWORD*)(v4 + 1544) = 0;
  *(_QWORD*)(v4 + 1552) = 0;
  *(_QWORD*)(v4 + 1560) = 0;
  *(_BYTE*)(v4 + 1568) = 0;
  *(_QWORD*)v4 = v5 + 2;
  *(_QWORD*)(v4 + 176) = v5 + 141;
  ProcInst_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
  v12 = v11;
  v9[0] = GameData_1fb7b68;
  v10 = v9;
  v11[0] = GameData_1fb7b68;
  GameRoutine_654050(v11, v4 + 1200);
  if (v12 == v11) {
    v6 = 32;
    goto LABEL_7;
  }
  if (v12 != nullptr) {
    v6 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v12 + v6))((__int64)v12);
  }
  if (v10 == v9) {
    v7 = 32;
    goto LABEL_12;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
  }
  return v4;
}

void game_menu_Dialog__CreateBind_game_menu_ExchangeDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fb7b68;
}

void game_menu_Dialog__CreateBindDirect_game_menu_Dialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fe2b80;
}

__int64 game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog(__int64 a1,
                                                                _QWORD* a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;

  if (a1 != 0) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1520, 16, 0);
    v11[0] = *a2;
    GameRoutine_1647b80(v4, v11);
    *(_QWORD*)(v4 + 1512) = 0;
    *(_QWORD*)(v4 + 1504) = 0;
    *(_QWORD*)(v4 + 1496) = 0;
    v5 = GameData_212e0a0[0] + 140;
    *(_QWORD*)v4 = GameData_212e0a0[0] + 2;
    *(_QWORD*)(v4 + 176) = v5;
    ProcInst_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
    v12 = v11;
    v9[0] = GameData_1fe9808;
    v10 = v9;
    v11[0] = GameData_1fe9808;
    GameRoutine_654050(v11, v4 + 1200);
    if (v12 == v11) {
      v6 = 32;
    }
    else {
      if (v12 == nullptr) {
        goto LABEL_8;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v12 + v6))((__int64)v12);
  LABEL_8:
    if (v10 == v9) {
      v7 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_13:
        *(_BYTE*)(v4 + 1080) = 1;
        return v4;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
    goto LABEL_13;
  }
  return 0;
}

void game_menu_Dialog__CreateBindDirect_game_menu_ItemDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_1fe9808;
}

void game_menu_Dialog__CreateBind_game_menu_InfoDialog_closure_CloneInto(
    __int64 a1, _QWORD* a2)
{
  *a2 = GameData_20378d0;
}

__int64 Dialog_16495e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;

  v1 = a1[29];
  v2 = a1[30];
  if (v1 != v2 && (unsigned int)((unsigned __int64)(v2 - v1 + 0x7FFFFFFF8LL) >>
                                 3) <= 0x7FFFFFFE) {
    return GameRoutine_16df7a0(a1);
  }
  GameRoutine_1560070((void*)&v10, a1 + 106, "L_NextCursor");
  if (v11 != 0) {
    v5 = std___1___shared_weak_count_lock(v11);
    if (v5 != 0) {
      v6 = v5;
      if (v10 != nullptr) {
        v7 = ui_LayoutAccessor_IsPaneVisible(a1 + 106, "L_NextCursor");
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
        if (v11 != 0) {
          std___1___shared_weak_count___release_weak(v11);
        }
        if ((v7 & 1) == 0) {
          LayoutAccessor_155d940(a1 + 164);
          ui_LayoutAccessor_SetPaneVisible(a1 + 106, "L_NextCursor", 1);
          LayoutAccessor_155cda0(a1 + 164, "In", 0);
        }
        goto LABEL_17;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    if (v11 != 0) {
      std___1___shared_weak_count___release_weak(v11);
    }
  }
LABEL_17:
  if ((*(_BYTE*)(game_g_game_setting + 952) & 3) != 0 ||
      (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0) {
    LayoutAccessor_155d940(a1 + 164);
    LayoutAccessor_155cda0(a1 + 164, "Out", 0);
    v9 = a1[160];
    if (v9 != 0) {
      v10 = a1;
      v8 = (*(unsigned int (**)(__int64, _QWORD**))(*(_QWORD*)v9 + 48LL))(v9,
                                                                          &v10);
    }
    else {
      v8 = 2;
    }
  }
  else {
    v8 = 0;
  }
  return GameRoutine_16e0120(a1, v8);
}

__int64 Dialog_16499c0(__int64 result)
{
  char* v1;
  char* v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  int v9;

  v1 = *(char**)(result + 232);
  v2 = *(char**)(result + 240);
  v3 = result;
  if (v1 != v2 && ((v2 - v1 + 0x7FFFFFFF8LL) & 0x7FFFFFFF8LL) == 8) {
    v4 = v1 + 8;
    if (v4 == v2) {
      v5 = 0;
    }
    else {
      v5 = *(_QWORD*)v4;
    }
    result = *(_QWORD*)(result + 336);
    if (result != v5) {
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
      }
      *(_QWORD*)(v3 + 336) = v5;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 0, 1, 0);
      result = *(_QWORD*)(v3 + 336);
      if (result == 0) {
        v6 = 4;
      LABEL_16:
        *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v6;
        v1 = *(char**)(v3 + 232);
        v2 = *(char**)(v3 + 240);
        goto LABEL_17;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(v3 + 336);
    }
    v6 = 4;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
      if ((result & 1) != 0) {
        v6 = 4;
      }
      else {
        v6 = 0;
      }
    }
    goto LABEL_16;
  }
LABEL_17:
  if (v1 != v2 && ((v2 - v1 + 0x7FFFFFFF8LL) & 0x7FFFFFFF8LL) == 0x10) {
    if (v1 + 8 == v2 || (v7 = (__int64*)(v1 + 16)) == (__int64*)v2) {
      v8 = 0;
    }
    else {
      v8 = *v7;
    }
    result = *(_QWORD*)(v3 + 336);
    if (result != v8) {
      if (result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
      }
      *(_QWORD*)(v3 + 336) = v8;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 0, 1, 0);
      result = *(_QWORD*)(v3 + 336);
      if (result == 0) {
        v9 = 4;
      LABEL_33:
        *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v9;
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(v3 + 336);
    }
    v9 = 4;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
      if ((result & 1) != 0) {
        v9 = 4;
      }
      else {
        v9 = 0;
      }
    }
    goto LABEL_33;
  }
  return result;
}

__int64 Dialog_1649ba0(__int64 a1, __int64* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  float v15;
  __int64 v16;
  _BYTE* v17;
  char v18;

  if (a1 == 0 || a2[1] == *a2) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_225d6d8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_225d6d8) != 0) {
    GameData_225d678 = 0;
    GameData_225d680 = 0;
    GameData_225d688 = 0;
    GameData_225d690 = 0;
    GameData_225d698 = 0;
    GameData_225d6c0 = 0;
    GameData_225d6c8 = 0;
    GameData_225d6d0 = 0;
    GameData_225d6a0 = 0;
    GameData_225d6a8 = 0;
    GameData_225d658 = 14;
    GameData_225d6b0 = 0;
    GameData_225d6b8 = 0;
    GameData_225d660 = 0;
    GameData_225d668 = 16;
    GameData_225d670 = 1;
    __cxa_guard_release(&GameData_225d6d8);
  }
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      184, 16, 0);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  v8 = game_ProcInst_Register(v5);
  v9 = *a2;
  v10 = a2[1];
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  v11 = v10 - v9;
  *(_QWORD*)v5 = game_menu_ProcDialogList_vtable;
  *(_QWORD*)(v5 + 168) = 0;
  if (v10 != v9) {
    if (0xAAAAAAAAAAAAAAABLL * (v11 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260(v8);
    }
    v12 = fw_memory_HeapManager_Allocate(*v4, v10 - v9, 16, 0);
    *(_QWORD*)(v5 + 152) = v12;
    *(_QWORD*)(v5 + 160) = v12;
    *(_QWORD*)(v5 + 168) = v12 + v11;
    do {
      v8 = GameConverge_8f24c0(v12, v9);
      v9 += 48;
      v12 += 48;
    } while (v9 != v10);
    *(_QWORD*)(v5 + 160) = v12;
  }
  *(_DWORD*)(v5 + 176) = 0;
  GameRoutine_8679c0(v8);
  v13 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v14 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v14 & 0x10) == 0) {
      v15 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v14 & 0xFFFFFFE2 | 1;
      if (v15 > 0.0) {
        *(_DWORD*)(v13 + 224) = 0;
      }
    }
  }
  v16 = *(_QWORD*)(a1 + 40);
  if (v16 != 0) {
    *(_QWORD*)(v16 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "ProcDialogList";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = game_HashString32();
  *(_QWORD*)(v5 + 8) = &GameData_225d658;
  *(_QWORD*)(v5 + 16) = &GameData_225d658;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v17 = (_BYTE*)*v7;
  v18 = *(_BYTE*)(*v7 + 138LL);
  if (v18 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v7);
    v18 = v17[138];
  }
  v17[138] = v18 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  return v5;
}

__int64 Dialog_1649e50(__int64 result, __int64 a2, char a3, char a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v4 = *(unsigned __int8*)(result + 1088);
  v5 = *(_QWORD*)(result + 1096);
  v6 = (_QWORD*)(result + 1088);
  v7 = result;
  v8 = v4 & 1;
  v9 = v4 >> 1;
  if (v8 != 0) {
    v10 = *(_QWORD*)(result + 1096);
  }
  else {
    v10 = v9;
  }
  if (v10 == 0) {
    v14 = 1113;
    v15 = 1112;
    v13 = result + 1088;
    goto LABEL_11;
  }
  v11 = *(unsigned __int8*)(result + 1120);
  if ((v11 & 1) != 0) {
    v12 = *(_QWORD*)(result + 1128);
  }
  else {
    v12 = v11 >> 1;
  }
  if (v12 == 0) {
    v13 = result + 1120;
    v14 = 1145;
    v15 = 1144;
  LABEL_11:
    v16 = a3 & 1;
    v17 = a4 & 1;
    result = GameRoutine_60a020(v13, a2);
    v18 = *(unsigned __int8*)(v7 + 1088);
    v5 = *(_QWORD*)(v7 + 1096);
    *(_BYTE*)(v7 + v15) = v16;
    v8 = v18 & 1;
    v9 = v18 >> 1;
    *(_BYTE*)(v7 + v14) = v17;
  }
  if (v8 != 0) {
    v19 = v5;
  }
  else {
    v19 = v9;
  }
  if (v19 != 0) {
    v20 = *(unsigned __int8*)(v7 + 1120);
    if ((v20 & 1) != 0) {
      v21 = *(_QWORD*)(v7 + 1128);
    }
    else {
      v21 = v20 >> 1;
    }
    if (v21 != 0 && (*(_BYTE*)(v7 + 1112) & 1) != 0 &&
        (*(_BYTE*)(v7 + 1144) & 1) == 0) {
      v22 = *(_QWORD*)(v7 + 1088);
      v23 = *(_QWORD*)(v7 + 1104);
      v24 = *(_WORD*)(v7 + 1112);
      v25 = *(_QWORD*)(v7 + 1120);
      v26 = *(_QWORD*)(v7 + 1128);
      v27 = *(_QWORD*)(v7 + 1136);
      *(_QWORD*)(v7 + 1128) = v5;
      *(_QWORD*)(v7 + 1120) = v22;
      *(_QWORD*)(v7 + 1136) = v23;
      v6[2] = v27;
      LOWORD(v27) = *(_WORD*)(v7 + 1144);
      *v6 = v25;
      v6[1] = v26;
      *(_WORD*)(v7 + 1144) = v24;
      *(_WORD*)(v7 + 1112) = v27;
    }
  }
  return result;
}

__int64 game_menu_Dialog_PostBuild_lambda0_Invoke(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  char v36;
  __int64 v38;
  __int64* v39;
  _QWORD v40[4];
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
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
  _BYTE v56[4];
  _QWORD* v57;

  v2 = *(_QWORD**)a2;
  v4 = *(_QWORD*)(*(_QWORD*)a2 + 56LL);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = (__int64*)v2[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v38 = v5;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v38);
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v7 = (*(__int64 (**)(_QWORD*))(*v2 + 48LL))(v2);
  LayoutAccessor_155e830(v6, v7 & 1);
  v8 = v2[7];
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_10;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)v2[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v39 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    v12 = v39;
    if (v39 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if (v12 == nullptr) {
  LABEL_10:
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_11:
  v13 = ui_LayoutAccessor_FindPane(v12, "T_Txt");
  if (v13 != 0) {
    v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d690, 0);
    if (v14 != 0) {
      v15 = v14;
      v16 = v2[7];
      if (v16 == 0) {
        goto LABEL_18;
      }
      v17 = std___1___shared_weak_count_lock(v16);
      if (v17 == 0) {
        goto LABEL_18;
      }
      v18 = v17;
      v19 = (atomic_ullong*)(v17 + 8);
      v20 = (__int64*)v2[6];
      if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v21 = v20;
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
        v20 = v21;
      }
      if (v20 == nullptr) {
      LABEL_18:
        v20 = ui_LayoutAccessor_empty__ptr[0];
      }
      v22 = ui_LayoutAccessor_FindPane(v20, "Wdw");
      if (v22 != 0) {
        v23 = *(float*)(v22 + 80);
        v24 = *(float*)(v15 + 80);
        v25 = v22;
        v26 = *(_QWORD*)(a1 + 16);
        v57 = v2;
        v40[0] = &v57;
        *(float*)(GameRoutine_164b120(v26, &v57, v40) + 24) = v23 - v24;
        v27 = Pane_58fac0(v25, "Margin_Width");
        if (v27 != 0) {
          v28 = *(_DWORD*)(v27 + *(unsigned int*)(v27 + 4));
          v29 = *(_QWORD*)(a1 + 16);
          v57 = v2;
          v40[0] = &v57;
          *(float*)(GameRoutine_164b120(v29, &v57, v40) + 24) =
              (float)v28 + (float)v28;
        }
      }
      if (*((_BYTE*)v2 + 83) == 1) {
        v30 = (*(__int64 (**)(_QWORD*))(*v2 + 24LL))(v2);
      }
      else {
        v31 = (*(__int64 (**)(_QWORD*))(*v2 + 24LL))(v2);
        if (v31 == 0) {
          v34 = 0;
          goto LABEL_27;
        }
        v32 = v31;
        v43 = -1;
        v44 = -1;
        v45 = -1;
        v46 = -1;
        v33 = *msg_MessageManager_instance__ptr[0];
        v47 = -1;
        v48 = -1;
        v49 = -1;
        v50 = -1;
        v51 = -1;
        v52 = -1;
        v53 = -1;
        v54 = -1;
        v40[0] = GameData_212e348 + 2;
        v40[1] = 0xFFFF0001FFFF0000LL;
        v40[2] = 0xFFFF0004FFFF0002LL;
        v40[3] = 0xFFFF0006FFFF0005LL;
        v55 = 8;
        v41 = -65529;
        v42 = -65528;
        v30 = GameRoutine_a4dbe0(v33, v32, 0, v40);
      }
      v34 = v30;
    LABEL_27:
      GameRoutine_190a0c0(v40, &v57, v56, v15, v34);
      v35 = *(float*)&v57;
      v36 = *(_BYTE*)(v15 + 88) | 0x10;
      *(_QWORD*)(v15 + 80) = v57;
      *(_BYTE*)(v15 + 88) = v36;
      **(float**)(a1 + 8) = fmaxf(**(float**)(a1 + 8), v35);
    }
  }
  return 0;
}

__int64 Dialog_164b120(float* a1, __int64* a2, __int64** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;

  v4 = *a2;
  v53 = *a2;
  v7 = std___1___hash_memory(&v53, 8);
  v8 = *((_QWORD*)a1 + 1);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != 0) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = *(_QWORD*)(result + 8);
            if (v14 == v9) {
              if (*(_QWORD*)(result + 16) == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_22;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = *(_QWORD*)(result + 8);
          if (v13 == v9) {
            if (*(_QWORD*)(result + 16) == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = *a3;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v9;
  v17 = a1[8];
  v18 = *v16;
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 16) = v18;
  v19 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v8 == 0 || (float)(v17 * (float)v8) < v19) {
    v20 = v19 / v17;
    v21 = true;
    if (v8 >= 3) {
      v21 = (v8 & (v8 - 1)) != 0;
    }
    v22 = v21 | (2 * v8);
    v23 = vcvtps_u64_f32(v20);
    if (v22 <= v23) {
      primeEm = v23;
    }
    else {
      primeEm = v22;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v25 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v25;
      v8 = *((_QWORD*)a1 + 1);
    }
    if (primeEm <= v8) {
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      v32 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v45 = result;
        v32 = std___1___next_prime(v32);
        result = v45;
      }
      else {
        v33 = 1LL << -(char)__clz(v32 - 1);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (primeEm <= v32) {
        primeEm = v32;
      }
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v46 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v46 != 0) {
          v47 = result;
          v48 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(*v15 + v48);
          result = v47;
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v26 = result;
    v27 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * primeEm, 16, 0);
    v28 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v27;
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*v15 + v29);
    }
    v30 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v31 = 0;
      result = v26;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 48) = 0;
        v34 = *(_QWORD*)a1 + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v34 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v31);
    }
    else {
      v31 = 0;
      result = v26;
    }
    if ((primeEm & 7) != 0) {
      v35 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(*(_QWORD*)a1 + v35) = 0;
        v35 += 8;
      } while (v30 != 0);
    }
    v37 = (__int64*)(a1 + 4);
    v36 = *((_QWORD**)a1 + 2);
    if (v36 != nullptr) {
      v38 = v36[1];
      v39 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v38 >= primeEm) {
          v38 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v37;
        v40 = (_QWORD*)*v36;
        if (*v36 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v41 = v40[1];
          if (v41 >= primeEm) {
            v41 %= primeEm;
          }
          if (v41 != v38) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
              goto LABEL_60;
            }
            *v36 = *v40;
            *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
            v40 = v36;
          }
          v41 = v38;
        LABEL_60:
          v36 = v40;
          v40 = (_QWORD*)*v40;
          v38 = v41;
          if (v40 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v42 = v38 & v39;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v37;
      while (1) {
        v43 = (_QWORD*)*v36;
        if (*v36 == 0) {
          break;
        }
        v44 = v43[1] & v39;
        if (v44 == v42) {
          v36 = (_QWORD*)*v36;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) != 0) {
          *v36 = *v43;
          *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v36;
          v36 = v43;
          v42 = v44;
        }
      }
    }
  LABEL_83:
    v8 = *((_QWORD*)a1 + 1);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v49 = *(_QWORD*)a1;
  v50 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v50 != nullptr) {
    *(_QWORD*)result = *v50;
    *v50 = result;
  }
  else {
    v51 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *(_QWORD*)result = v51;
    *(_QWORD*)(v49 + 8 * v3) = a1 + 4;
    if (*(_QWORD*)result != 0) {
      v52 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v52 >= v8) {
          v52 %= v8;
        }
      }
      else {
        v52 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

__int64 game_menu_Dialog_PostBuild_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  float v12;
  unsigned __int64 v13;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  float** v21;
  float* v22;
  unsigned __int64 v23;
  __int64 v24;
  float v25;
  int v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  atomic_ullong* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v39;

  v2 = *a2;
  v4 = *(_QWORD*)(*a2 + 56);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = *(__int64**)(v2 + 48);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v20 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v8 = v20;
    if (v20 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v8 == nullptr) {
  LABEL_5:
    v8 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v9 = ui_LayoutAccessor_FindPane(v8, "Wdw");
  if (v9 != 0) {
    v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212fc70[0], 0);
    if (v10 != 0) {
      v11 = *(_QWORD**)(a1 + 24);
      v12 = 0.0;
      v13 = v11[1];
      if (v13 != 0 && v11[3] != 0) {
        v15 = v10;
        v39 = v2;
        v16 = std___1___hash_memory(&v39, 8);
        v17 = v13 - 1;
        v18 = v16;
        if ((v13 & (v13 - 1)) != 0) {
          v19 = v16;
          if (v16 >= v13) {
            v19 = v16 % v13;
          }
        }
        else {
          v19 = v16 & v17;
        }
        v10 = v15;
        v21 = *(float***)(*v11 + 8 * v19);
        if (v21 != nullptr) {
          v22 = *v21;
          if (v22 != nullptr) {
            if ((v13 & v17) == 0) {
              while (1) {
                v24 = *((_QWORD*)v22 + 1);
                if (v24 == v18) {
                  if (*((_QWORD*)v22 + 2) == v2) {
                    goto LABEL_34;
                  }
                }
                else if ((v24 & v17) != v19) {
                  goto LABEL_35;
                }
                v22 = *(float**)v22;
                if (v22 == nullptr) {
                  goto LABEL_35;
                }
              }
            }
            do {
              v23 = *((_QWORD*)v22 + 1);
              if (v23 == v18) {
                if (*((_QWORD*)v22 + 2) == v2) {
                LABEL_34:
                  v12 = v22[6];
                  break;
                }
              }
              else {
                if (v23 >= v13) {
                  v23 %= v13;
                }
                if (v23 != v19) {
                  break;
                }
              }
              v22 = *(float**)v22;
            } while (v22 != nullptr);
          }
        }
      }
    LABEL_35:
      v25 = *(float*)(v10 + 80);
      v26 = *(_DWORD*)(v10 + 84);
      v27 = v12 + **(float**)(a1 + 16);
      *(_BYTE*)(v10 + 88) |= 0x10u;
      v28 = fmaxf(v25, v27);
      *(float*)(v10 + 80) = v28;
      v29 = *(_QWORD*)(v2 + 56);
      if (v29 == 0) {
        goto LABEL_40;
      }
      v30 = std___1___shared_weak_count_lock(v29);
      if (v30 == 0) {
        goto LABEL_40;
      }
      v31 = v30;
      v32 = (atomic_ullong*)(v30 + 8);
      v33 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v32, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v34 = v33;
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak(v31);
        v33 = v34;
      }
      if (v33 == nullptr) {
      LABEL_40:
        v33 = ui_LayoutAccessor_empty__ptr[0];
      }
      v35 = ui_LayoutAccessor_FindPane(v33, "Wdw_Overlay");
      if (v35 != 0) {
        v36 = __dynamic_cast(v35, GameData_212d670[0], GameData_212fc70[0], 0);
        if (v36 != 0) {
          v37 = *(_BYTE*)(v36 + 88);
          *(float*)(v36 + 80) = v28;
          *(_DWORD*)(v36 + 84) = v26;
          *(_BYTE*)(v36 + 88) = v37 | 0x10;
        }
      }
      **(float**)(a1 + 8) = fmaxf(**(float**)(a1 + 8), v28);
    }
  }
  return 0;
}

__int64 game_menu_Dialog_SetDecideSe_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _BYTE v3[200];

  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    v1 = *(_QWORD*)(result + 24);
  }
  else {
    v1 = result + 9;
  }
  if (v1 != 0) {
    snd_Fade_Fade_10c830(v3, 0.0f);
    snd_play_ff2d0((void*)(&v2), v1, v1, v3, 0, 65537, 0, 0.0f, 1.0f);
    return snd_Fade_Destroy_Fade(v3);
  }
  return result;
}

#pragma GCC visibility pop
