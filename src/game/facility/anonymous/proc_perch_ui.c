#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_anonymous_ProcPerchUI_vtable[])();
extern __int64 GameData_2262ae0;
extern __int64 game_gameui_MenuAnimator_instance_;
__int64 ProcPerchUI_Destructor(__int64 a1);
__int64 ProcPerchUI_Unknown2(__int64 result);

__int64 ProcPerchUI_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_facility_anonymous_ProcPerchUI_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 168);
  v4 = *(_DWORD**)(a1 + 272);
  if (*(_QWORD*)v4 != 0 && *(_DWORD*)(*(_QWORD*)v4 + 16LL) == v4[2]) {
    GameRoutine_14a1390(a1 + 272, 1);
  }
  v5 = *(_QWORD*)(a1 + 1008);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_155ca60(a1 + 816);
  GameRoutine_155ca60(a1 + 640);
  GameRoutine_155ca60(a1 + 464);
  GameRoutine_155ca60(a1 + 288);
  v6 = *(_QWORD*)(a1 + 280);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_155e140(a1 + 168);
  v7 = *(_QWORD*)(a1 + 264);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v8 = *(_QWORD*)(a1 + 176);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameData_2262ae0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcPerchUI_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  bool v9;
  bool v10;
  bool v11;
  bool v12;
  _BYTE v14[32];

  v1 = result;
  if (*(_BYTE*)(result + 1016) == 1) {
    v2 = *(_QWORD*)(result + 1000);
    if (v2 != 0 && *(float*)(v2 + 36) >= *(float*)(v2 + 32)) {
      result = ui_LayoutAccessor_SetPaneVisible(result + 168, "L_Key", 1);
      v3 = game_gameui_MenuAnimator_instance_;
      if (game_gameui_MenuAnimator_instance_ != 0) {
        sprintf(v14, "%s%s", "Alpha", "In");
        result = GameRoutine_156af20(v3, 4, 0, v1 + 168, "L_Key", v14);
      }
      v4 = *(_QWORD*)(v1 + 1008);
      *(_QWORD*)(v1 + 1000) = 0;
      *(_QWORD*)(v1 + 1008) = 0;
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = std___1___shared_weak_count___release_weak(v4);
      }
      *(_BYTE*)(v1 + 1016) = 0;
    }
  }
  else if (*(_BYTE*)(result + 1017) == 1) {
    result = ui_LayoutAccessor_IsPaneVisible(result + 168, "L_Key");
    if ((result & 1) != 0) {
      if (game_gameui_MenuAnimator_instance_ == 0) {
        goto LABEL_42;
      }
      v5 = *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) == -1 &&
           *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) == -1;
      v6 = v5 && *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) == -1;
      v7 = v6 && *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) == -1;
      v8 = v7 && *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) == -1;
      v9 = v8 && *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) == -1;
      v10 = v9 && *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) == -1;
      v11 = v10 && *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) == -1;
      v12 = v11 && *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) == -1;
      if (v12 && *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360) == -1) {
      LABEL_42:
        result = ui_LayoutAccessor_SetPaneVisible(v1 + 168, "L_Key", 0);
        *(_BYTE*)(v1 + 1017) = 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
