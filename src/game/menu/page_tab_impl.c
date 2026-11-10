#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_159e180(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_156d490(_QWORD);
__int64 GameRoutine_17aa380(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_menu_PageTab_Update(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern char* game_menu_kTabAnimations[21];
__int64 PageTab_16e6880(__int64 a1, int a2, unsigned int a3, unsigned int a4);

__int64 PageTab_16e6880(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 result;
  _QWORD* v9;
  __int64 v10;
  int i;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  _QWORD v27[2];
  __int64 v28;
  __int64 v29;

  result = *(_QWORD*)(a1 + 104);
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    return result;
  }
  v9 = *(_QWORD**)(a1 + 96);
  v10 = result;
  if (v9 == nullptr) {
    goto LABEL_46;
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 96), "A_Tab", 0);
  ui_LayoutAccessor_SetPaneVisible(v9, "L_ArrowL", 0);
  ui_LayoutAccessor_SetPaneVisible(v9, "L_ArrowR", 0);
  LayoutAccessor_1562cf0(v9, "UnitOff");
  if (*(int*)a1 <= 0) {
    v19 = *(_DWORD*)(a1 + 40);
    if (v19 != 0 && v19 != 3) {
      goto LABEL_45;
    }
  }
  v26 = a3;
  for (i = 0; i != 13; ++i) {
    v12 = game_util_Format("L_Tab%02d", i);
    GameRoutine_1560070((void*)&v28, v9, v12);
    if (v29 == 0) {
      continue;
    }
    v13 = std___1___shared_weak_count_lock(v29);
    v14 = v28;
    if (v29 != 0) {
      std___1___shared_weak_count___release_weak(v29);
    }
    if (v13 != 0 && v14 != 0) {
      v15 = *(_DWORD*)a1;
      LayoutAccessor_155e830(v14, i <= *(_DWORD*)a1);
      if (i <= v15) {
        LayoutAccessor_1562680(
            v14, game_menu_kTabAnimations[3 * *(unsigned __int8*)(a1 + 112)],
            1.0);
      }
    }
    else if (v13 == 0) {
      continue;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  }
  ui_LayoutAccessor_SetPaneVisible(v9, "A_Tab", 1);
  ui_LayoutAccessor_SetPaneVisible(v9, "L_ArrowL", *(_DWORD*)a1 > 0);
  ui_LayoutAccessor_SetPaneVisible(v9, "L_ArrowR", *(_DWORD*)a1 > 0);
  *(_BYTE*)(a1 + 112) = GameRoutine_156d490(v9);
  v27[0] = "L_ArrowL";
  v27[1] = 8;
  GameRoutine_159e180((void*)&v28, v9, v27);
  if (v29 != 0) {
    v16 = std___1___shared_weak_count_lock(v29);
    v17 = v28;
    if (v29 != 0) {
      std___1___shared_weak_count___release_weak(v29);
    }
    if (v16 != 0 && v17 != 0) {
      v18 = *(unsigned __int8*)(a1 + 112);
      *(_BYTE*)(v17 + 1041) = v18;
      LayoutAccessor_1562680(v17 + 88, game_menu_kTabAnimations[3 * v18], 1.0);
      *(_DWORD*)(v17 + 1036) = a2;
      *(_DWORD*)(v17 + 1028) = v26;
      GameRoutine_17aa380(v17, "TextKey", v26);
    LABEL_27:
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
    }
    else if (v16 != 0) {
      goto LABEL_27;
    }
  }
  v27[0] = "L_ArrowR";
  v27[1] = 8;
  GameRoutine_159e180((void*)&v28, v9, v27);
  if (v29 != 0) {
    v20 = std___1___shared_weak_count_lock(v29);
    v21 = v28;
    if (v29 != 0) {
      std___1___shared_weak_count___release_weak(v29);
    }
    if (v20 != 0 && v21 != 0) {
      v22 = *(unsigned __int8*)(a1 + 112);
      *(_BYTE*)(v21 + 1041) = v22;
      LayoutAccessor_1562680(v21 + 88, game_menu_kTabAnimations[3 * v22], 1.0);
      *(_DWORD*)(v21 + 1036) = a2;
      *(_DWORD*)(v21 + 1028) = a4;
      GameRoutine_17aa380(v21, "TextKey", a4);
    LABEL_36:
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
      }
    }
    else if (v20 != 0) {
      goto LABEL_36;
    }
  }
  if (ui_LayoutAccessor_FindAlignment(v9, "A_Tab") != 0) {
    Alignment_56b600();
    v23 = v9[1];
    if (v23 != 0) {
      v24 = std___1___shared_weak_count_lock(v23);
      if (v24 != 0) {
        v25 = v24;
        if (*v9 != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          std___1___shared_weak_count___release_weak(v25);
        }
      }
    }
  }

LABEL_45:
  result = game_menu_PageTab_Update(a1);

LABEL_46:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

#pragma GCC visibility pop
