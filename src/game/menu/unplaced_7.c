#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_173fe30(__int64);
extern __int64 GameData_2260e70;
extern __int64 game_gameui_MenuAnimator_instance_;
__int64 game_menu_16a04c0(_QWORD* a1);

__int64 game_menu_16a04c0(_QWORD* a1)
{
  char v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  bool v15;
  char v16;
  __int64 v17;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 472LL))(a1) & 1) != 0) {
    goto LABEL_2;
  }
  {
    v3 = (__int64*)a1[74];
    __asm__ volatile("" ::"r"(v3));
  }
  {
    v4 = (__int64*)a1[75];
    __asm__ volatile("" ::"r"(v4));
  }
  if (v3 == v4) {
    goto LABEL_43;
  }
  do {
    while (1) {
      {
        v5 = *v3;
        __asm__ volatile("" ::"r"(v5));
      }
      if (*v3 != -1 && game_gameui_MenuAnimator_instance_ != 0) {
        break;
      }
      if (++v3 == v4) {
        goto LABEL_43;
      }
    }
    v15 = v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360);
    v16 = v15;
    if (v15) {
      break;
    }
    ++v3;
  } while (v3 != v4);
  if ((v16 & 1) != 0) {
  LABEL_2:
    v2 = 0;
  }
  else {
  LABEL_43:
    {
      v17 = *(_QWORD*)(GameData_2260e70 + 168);
      __asm__ volatile("" ::"r"(v17));
    }
    if (v17 != 0) {
      v2 = GameHr_173fe30(v17) ^ 1;
    }
    else {
      v2 = 1;
    }
  }
  return v2 & 1;
}

#pragma GCC visibility pop
