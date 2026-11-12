#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1114ca0(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_159e2c0(_QWORD, _QWORD);
__int64 GameRoutine_16df7a0(void);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 game_g_game_setting;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ChoiceMenu_Unknown2_1115140(__int64 result);
__int64 ChoiceMenu_Unknown85(__int64 a1);
__int64 ChoiceMenu_Unknown94(_QWORD* a1);
__int64 ChoiceMenu_Unknown136(__int64 a1, int a2, char a3);
__int64 ChoiceMenu_Unknown137(__int64 a1, int a2, char a3);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_sound_PlayCursorHorizontalSe(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_200f7e0[])();
extern __int64 (*GameData_200fcd0[])();
extern __int64 (*game_facility_anonymous_ChoiceMenu_vtable[])();
extern __int64 GameData_200f738;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
bool game_facility_anonymous_ChoiceMenu_SetSelectedWorstItem_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD* game_facility_anonymous_ChoiceMenu_CheckFirstSelect(_QWORD* result);
__int64
game_facility_anonymous_ChoiceMenu_CheckFirstSelect_closure_Invoke(__int64 a1,
                                                                   __int64 a2);
__int64 ChoiceMenu_Destructor(_QWORD* a1);
__int64 ChoiceMenu_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ChoiceMenu_DeletingDestructor");
__int64 ChoiceMenu_Unknown11(__int64 a1, int a2, char a3);
__int64 ChoiceMenu_Unknown12(__int64 a1, int a2, char a3);
_QWORD* GameRoutine_159e2c0_alt1(__int64, char) __asm__("GameRoutine_159e2c0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    __int64 result, char, unsigned __int8,
    unsigned __int8) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Destroy_BasicMenu");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ChoiceMenu_DeletingDestructor(_QWORD* a1);

bool game_facility_anonymous_ChoiceMenu_SetSelectedWorstItem_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *(unsigned __int8*)(*a2 + 84);
  v5 = *(unsigned __int8*)(v2 + 1120);
  if (v4 == v5) {
    game_facility_anonymous_ChoiceMenu_CheckFirstSelect(*(_QWORD*)(a1 + 8));
    v6 = *(_QWORD*)(v2 + 336);
    if (v6 != v3) {
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
      }
      *(_QWORD*)(v2 + 336) = v3;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v2, 0, 1, 0);
      v7 = *(_QWORD*)(v2 + 336);
      if (v7 == 0) {
        v8 = 4;
      LABEL_12:
        *(_DWORD*)(v2 + 356) = *(_DWORD*)(v2 + 356) & 0xFFFFFFFB | v8;
        game_sound_PlayCursorHorizontalSe();
        return v4 == v5;
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      v6 = *(_QWORD*)(v2 + 336);
    }
    v8 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
    goto LABEL_12;
  }
  return v4 == v5;
}

_QWORD* game_facility_anonymous_ChoiceMenu_CheckFirstSelect(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;

  if (result[42] != 0) {
    return result;
  }
  v1 = result;
  v3 = result[29];
  v2 = result[30];
  v4 = v10;
  v10[0] = GameData_200f7e0;
  v11 = v10;
  if (v2 == v3) {
    goto LABEL_13;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v3 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_200f738, 0);
      if (v8 == 0) {
        goto LABEL_4;
      }
      v12 = v8;
      if (v11 == nullptr) {
        GameRoutine_60a310(0);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v12) & 1) !=
          0) {
        break;
      }
      v3 = v1[29];
      v2 = v1[30];
    }
  LABEL_4:
    ++v5;
  } while (v5 < (v2 - v3) >> 3);
  v4 = v11;
  if (v11 != v10) {
    if (v11 != nullptr) {
      v9 = 40;
      goto LABEL_14;
    }
    return (_QWORD*)game_menu_BasicMenu_Unknown16dd9a0(v1);
  }
LABEL_13:
  v9 = 32;
LABEL_14:
  (*(void (**)(_QWORD*))(*v4 + v9))(v4);
  return (_QWORD*)game_menu_BasicMenu_Unknown16dd9a0(v1);
}

__int64

game_facility_anonymous_ChoiceMenu_CheckFirstSelect_closure_Invoke(__int64 a1,
                                                                   __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 83LL) = 0;
  return 0;
}

__int64 ChoiceMenu_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_facility_anonymous_ChoiceMenu_vtable;
  a1[22] = GameData_200fcd0;
  v2 = a1 + 134;
  v3 = (_QWORD*)a1[138];
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = a1[133];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

void ChoiceMenu_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *a1 = game_facility_anonymous_ChoiceMenu_vtable;
  a1[22] = GameData_200fcd0;
  v2 = a1 + 134;
  v3 = (_QWORD*)a1[138];
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = a1[133];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1((__int64)a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)a1);
}

__int64 ChoiceMenu_Unknown2_1115140(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 1056);
  if (v1 == 0 || *(float*)(v1 + 36) < *(float*)(v1 + 32)) {
    return GameRoutine_16df7a0();
  }
  return result;
}

__int64 ChoiceMenu_Unknown85(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 &&
      ((*(void (**)(__int64))(*(_QWORD*)v2 + 168LL))(v2),
       *(_QWORD*)(a1 + 336) = 0,
       _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(a1, 0, 1u, 0),
       (v3 = *(_QWORD*)(a1 + 336)) != 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 160LL))(v3);
    v4 = *(_QWORD*)(a1 + 336);
    v5 = 4;
    if (v4 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 120LL))(v4) & 1) != 0) {
        v5 = 4;
      }
      else {
        v5 = 0;
      }
    }
  }
  else {
    v5 = 4;
  }
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v5;
  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 952),
                         "L_Arrow/L_Arrow_L");
  GameRoutine_159e2c0_alt1((__int64)&v11_.v11, 0);
  if (v11_.v12 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v11_.v12);
  }
  LayoutAccessor_1560070((void*)(&v9_.v9), (__int64*)(a1 + 952),
                         "L_Arrow/L_Arrow_R");
  GameRoutine_159e2c0_alt1((__int64)&v9_.v9, 0);
  if (v9_.v10 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v9_.v10);
  }
  LayoutAccessor_1560070((void*)(&v7_.v7), (__int64*)(a1 + 952),
                         "L_Arrow/L_Arrow_D");
  GameRoutine_159e2c0_alt1((__int64)&v7_.v7, 0);
  result = v7_.v8;
  if (v7_.v8 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v7_.v8);
  }
  return result;
}

__int64 ChoiceMenu_Unknown94(_QWORD* a1)
{
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v8;

  if (a1[78] != 0) {
    a1[78] = 0;
  }
  GameRoutine_155e830(a1 + 106, 0);
  GameRoutine_155e830(a1 + 106, 1);
  v2 = (__int64*)a1[29];
  v3 = (__int64*)a1[30];
  if (v2 == v3) {
  LABEL_7:
    v4 = -1;
  }
  else {
    v4 = 0;
    while (1) {
      v5 = *v2++;
      if (v5 == a1[42]) {
        break;
      }
      ++v4;
      if (v2 == v3) {
        goto LABEL_7;
      }
    }
  }
  v6 = a1[138];
  v8 = v4;
  if (v6 == 0) {
    GameRoutine_60a310(0);
  }
  return (*(__int64 (**)(__int64, int*))(*(_QWORD*)v6 + 48LL))(v6, &v8);
}

__int64 ChoiceMenu_Unknown136(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  bool v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  int v13;

  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_2;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_2:
    v4 = *(_QWORD*)(a1 + 336);
    v5 = *(__int64**)(a1 + 232);
    v6 = *(__int64**)(a1 + 240);
    if (v5 == v6 ||
        a2 >= 1 &&
            ((v7 = v5 + 1, v5 += 2, v7 != v6) ? (v8 = v5 == v6) : (v8 = true),
             v8)) {
      v9 = 0;
      if (v4 != 0) {
        goto LABEL_23;
      }
    }
    else {
      v9 = *v5;
      if (v4 != *v5) {
      LABEL_23:
        GameRoutine_1114ca0((_QWORD*)a1);
        v11 = *(_QWORD*)(a1 + 336);
        if (v11 != v9) {
          if (v11 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
          }
          *(_QWORD*)(a1 + 336) = v9;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
          v12 = *(_QWORD*)(a1 + 336);
          if (v12 == 0) {
            v13 = 4;
          LABEL_34:
            *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v13;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v12 + 160LL))(v12);
          v11 = *(_QWORD*)(a1 + 336);
        }
        v13 = 4;
        if (v11 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 120LL))(v11) & 1) !=
              0) {
            v13 = 4;
          }
          else {
            v13 = 0;
          }
        }
        goto LABEL_34;
      }
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_2;
  }
  return result;
}

__int64 ChoiceMenu_Unknown137(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v12;

  if (a2 < 1) {
    return 0;
  }
  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_3;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_3:
    v4 = *(_QWORD*)(a1 + 336);
    v5 = *(__int64**)(a1 + 232);
    v6 = *(__int64**)(a1 + 240);
    if (v5 != v6) {
      v7 = v5 + 1;
      if (v7 != v6) {
        v8 = *v7;
        if (v4 == *v7) {
          return 0;
        }
      LABEL_20:
        GameRoutine_1114ca0((_QWORD*)a1);
        v10 = *(_QWORD*)(a1 + 336);
        if (v10 != v8) {
          if (v10 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 168LL))(v10);
          }
          *(_QWORD*)(a1 + 336) = v8;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
          v11 = *(_QWORD*)(a1 + 336);
          if (v11 == 0) {
            v12 = 4;
          LABEL_31:
            *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v12;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v11 + 160LL))(v11);
          v10 = *(_QWORD*)(a1 + 336);
        }
        v12 = 4;
        if (v10 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 120LL))(v10) & 1) !=
              0) {
            v12 = 4;
          }
          else {
            v12 = 0;
          }
        }
        goto LABEL_31;
      }
    }
    v8 = 0;
    if (v4 != 0) {
      goto LABEL_20;
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_3;
  }
  return result;
}

__int64 ChoiceMenu_Unknown11(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v12;

  if (a2 < 1) {
    return 0;
  }
  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_3;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_3:
    v4 = *(_QWORD*)(a1 + 160);
    v5 = *(__int64**)(a1 + 56);
    v6 = *(__int64**)(a1 + 64);
    if (v5 != v6) {
      v7 = v5 + 1;
      if (v7 != v6) {
        v8 = *v7;
        if (v4 == *v7) {
          return 0;
        }
      LABEL_20:
        game_facility_anonymous_ChoiceMenu_CheckFirstSelect(
            (_QWORD*)(a1 - 176));
        v10 = *(_QWORD*)(a1 + 160);
        if (v10 != v8) {
          if (v10 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 168LL))(v10);
          }
          *(_QWORD*)(a1 + 160) = v8;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1 - 176, 0, 1, 0);
          v11 = *(_QWORD*)(a1 + 160);
          if (v11 == 0) {
            v12 = 4;
          LABEL_31:
            *(_DWORD*)(a1 + 180) = *(_DWORD*)(a1 + 180) & 0xFFFFFFFB | v12;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v11 + 160LL))(v11);
          v10 = *(_QWORD*)(a1 + 160);
        }
        v12 = 4;
        if (v10 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 120LL))(v10) & 1) !=
              0) {
            v12 = 4;
          }
          else {
            v12 = 0;
          }
        }
        goto LABEL_31;
      }
    }
    v8 = 0;
    if (v4 != 0) {
      goto LABEL_20;
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_3;
  }
  return result;
}

__int64 ChoiceMenu_Unknown12(__int64 a1, int a2, char a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  bool v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  int v13;

  if ((a3 & 1) != 0 ||
      *(_BYTE*)(game_g_game_setting + 807) == 1 &&
          ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
           *(_BYTE*)(game_g_game_setting + 940) == 1 &&
               (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
               (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_2;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return 0;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_2:
    v4 = *(_QWORD*)(a1 + 160);
    v5 = *(__int64**)(a1 + 56);
    v6 = *(__int64**)(a1 + 64);
    if (v5 == v6 ||
        a2 >= 1 &&
            ((v7 = v5 + 1, v5 += 2, v7 != v6) ? (v8 = v5 == v6) : (v8 = true),
             v8)) {
      v9 = 0;
      if (v4 != 0) {
        goto LABEL_23;
      }
    }
    else {
      v9 = *v5;
      if (v4 != *v5) {
      LABEL_23:
        game_facility_anonymous_ChoiceMenu_CheckFirstSelect(
            (_QWORD*)(a1 - 176));
        v11 = *(_QWORD*)(a1 + 160);
        if (v11 != v9) {
          if (v11 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
          }
          *(_QWORD*)(a1 + 160) = v9;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1 - 176, 0, 1, 0);
          v12 = *(_QWORD*)(a1 + 160);
          if (v12 == 0) {
            v13 = 4;
          LABEL_34:
            *(_DWORD*)(a1 + 180) = *(_DWORD*)(a1 + 180) & 0xFFFFFFFB | v13;
            return 13;
          }
          (*(void (**)(__int64))(*(_QWORD*)v12 + 160LL))(v12);
          v11 = *(_QWORD*)(a1 + 160);
        }
        v13 = 4;
        if (v11 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 120LL))(v11) & 1) !=
              0) {
            v13 = 4;
          }
          else {
            v13 = 0;
          }
        }
        goto LABEL_34;
      }
    }
    return 0;
  }
  result = 0;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) != 1) {
      return 0;
    }
    goto LABEL_2;
  }
  return result;
}

#pragma GCC visibility pop
