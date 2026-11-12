#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_159e2c0(_QWORD, _QWORD);
__int64 GameRoutine_170e3e0(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_MenuAnimator_PlayIn(_QWORD, _QWORD, _QWORD);
__int64 game_gameui_MenuAnimator_PlayOut(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(_QWORD);
__int64 TalkMenu_Unknown57(__int64 a1, __int64* a2);
__int64 TalkMenu_Unknown58(__int64 a1, __int64* a2);
__int64 TalkMenu_Unknown85(__int64 a1);
__int64 TalkMenu_Unknown94(__int64 a1);
__int64 TalkMenu_Unknown136(__int64 a1, int a2, char a3);
__int64 TalkMenu_Unknown137(__int64 a1, int a2, char a3);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
extern __int64 (*GameData_20aa910[])();
extern __int64 GameData_20aa8e8;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 TalkMenu_Unknown11(__int64 a1, int a2, char a3);
__int64 TalkMenu_Unknown12(__int64 a1, int a2, char a3);
_QWORD* game_facility_anonymous_TalkMenu_CheckFirstSelect(_QWORD* result);
__int64
game_facility_anonymous_TalkMenu_CheckFirstSelect_closure_Invoke(__int64 a1,
                                                                 __int64 a2);
_QWORD* GameRoutine_159e2c0_alt1(__int64, char) __asm__("GameRoutine_159e2c0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 TalkMenu_Unknown57(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 result;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 448LL))(a1);
  result = game_gameui_MenuAnimator_PlayIn(v4, a1 + 952, 0);
  v7 = (__int64*)a2[1];
  v6 = a2[2];
  if ((unsigned __int64)v7 >= v6) {
    v9 = *a2;
    v10 = (__int64)v7 - *a2;
    v11 = (v10 >> 3) + 1;
    if (v11 >> 61 != 0) {
      GameRoutine_874500(result);
    }
    v12 = v6 - v9;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v12 >> 2 > v11) {
      v11 = v12 >> 2;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v15 = result;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      result = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v10 - 8 * (v10 >> 3);
    *(_QWORD*)(v16 + v10) = result;
    v8 = v16 + v10 + 8;
    result = memcpy(v18, v9, v10);
    *a2 = v18;
    a2[1] = v8;
    a2[2] = v17;
    if (v9 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v9);
    }
  }
  else {
    *v7 = result;
    v8 = (__int64)(v7 + 1);
  }
  a2[1] = v8;
  return result;
}

__int64 TalkMenu_Unknown58(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 result;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 448LL))(a1);
  result = game_gameui_MenuAnimator_PlayOut(v4, a1 + 952, 0);
  v7 = (__int64*)a2[1];
  v6 = a2[2];
  if ((unsigned __int64)v7 >= v6) {
    v9 = *a2;
    v10 = (__int64)v7 - *a2;
    v11 = (v10 >> 3) + 1;
    if (v11 >> 61 != 0) {
      GameRoutine_874500(result);
    }
    v12 = v6 - v9;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v12 >> 2 > v11) {
      v11 = v12 >> 2;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v15 = result;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      result = v15;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v14;
    v18 = v16 + v10 - 8 * (v10 >> 3);
    *(_QWORD*)(v16 + v10) = result;
    v8 = v16 + v10 + 8;
    result = memcpy(v18, v9, v10);
    *a2 = v18;
    a2[1] = v8;
    a2[2] = v17;
    if (v9 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v9);
    }
  }
  else {
    *v7 = result;
    v8 = (__int64)(v7 + 1);
  }
  a2[1] = v8;
  return result;
}

__int64 TalkMenu_Unknown85(__int64 a1)
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
  if (v2 != 0 && ((*(void (**)(__int64))(*(_QWORD*)v2 + 168LL))(v2),
                  *(_QWORD*)(a1 + 336) = 0,
                  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, 0),
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

__int64 TalkMenu_Unknown94(__int64 a1)
{
  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  GameRoutine_155e830(a1 + 848, 0);
  GameRoutine_155e830(a1 + 848, 1);
  return GameRoutine_155e830(a1 + 952, 0);
}

__int64 TalkMenu_Unknown136(__int64 a1, int a2, char a3)
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
        GameRoutine_170e3e0(a1);
        v11 = *(_QWORD*)(a1 + 336);
        if (v11 != v9) {
          if (v11 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
          }
          *(_QWORD*)(a1 + 336) = v9;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, 0);
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

__int64 TalkMenu_Unknown137(__int64 a1, int a2, char a3)
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
        GameRoutine_170e3e0(a1);
        v10 = *(_QWORD*)(a1 + 336);
        if (v10 != v8) {
          if (v10 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 168LL))(v10);
          }
          *(_QWORD*)(a1 + 336) = v8;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, 0);
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

__int64 TalkMenu_Unknown11(__int64 a1, int a2, char a3)
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
        game_facility_anonymous_TalkMenu_CheckFirstSelect(a1 - 176);
        v10 = *(_QWORD*)(a1 + 160);
        if (v10 != v8) {
          if (v10 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 168LL))(v10);
          }
          *(_QWORD*)(a1 + 160) = v8;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1 - 176, 0, 1u, 0);
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

__int64 TalkMenu_Unknown12(__int64 a1, int a2, char a3)
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
        game_facility_anonymous_TalkMenu_CheckFirstSelect(a1 - 176);
        v11 = *(_QWORD*)(a1 + 160);
        if (v11 != v9) {
          if (v11 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
          }
          *(_QWORD*)(a1 + 160) = v9;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1 - 176, 0, 1u, 0);
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

_QWORD* game_facility_anonymous_TalkMenu_CheckFirstSelect(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  __int64 v12;

  if (result[42] != 0) {
    return result;
  }
  v1 = (__int64)result;
  v3 = result[29];
  v2 = result[30];
  v4 = v10_.v10;
  v10_.v10[0] = GameData_20aa910;
  v10_.v11 = v10_.v10;
  if (v2 == v3) {
    goto LABEL_13;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v3 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_20aa8e8, 0);
      if (v8 == 0) {
        goto LABEL_4;
      }
      v12 = v8;
      if (v10_.v11 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v10_.v11 + 48LL))(v10_.v11,
                                                                  &v12) &
           1) != 0) {
        break;
      }
      v3 = *(_QWORD*)(v1 + 232);
      v2 = *(_QWORD*)(v1 + 240);
    }
  LABEL_4:
    ++v5;
  } while (v5 < (v2 - v3) >> 3);
  v4 = v10_.v11;
  if (v10_.v11 != v10_.v10) {
    if (v10_.v11 != nullptr) {
      v9 = 40;
      goto LABEL_14;
    }
    return (_QWORD*)game_menu_BasicMenu_Unknown16dd9a0_alt1(v1);
  }
LABEL_13:
  v9 = 32;
LABEL_14:
  (*(void (**)(_QWORD*))(*v4 + v9))(v4);
  return (_QWORD*)game_menu_BasicMenu_Unknown16dd9a0_alt1(v1);
}

__int64

game_facility_anonymous_TalkMenu_CheckFirstSelect_closure_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 83LL) = 0;
  return 0;
}

#pragma GCC visibility pop
