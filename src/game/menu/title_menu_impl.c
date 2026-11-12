#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_169e7d0(_QWORD*);
__int64 GameRoutine_173f310(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_173fc80(_QWORD, _QWORD);
__int64 LayoutAccessor_1562b50(_QWORD, _QWORD);
__int64 ProcInOutAnim_173fac0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 game_menu_GameMenu_Unknown136(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_21c6868;
extern __int64 (*game_menu_anonymous_ProcTitleBg_vtable[])();
extern __int64 GameData_2084398;
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_2260e70;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64* GameData_212e008[9];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 TitleMenu_1666920(__int64 a1, __int64* a2);
__int64 TitleMenu_1666ac0(__int64 a1, __int64* a2);
_QWORD* TitleMenu_16a0000_alt1(__int64 a1,
                               __int64 a2) __asm__("TitleMenu_16a0000");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_173f310_alt1(__int64, __int64*, char, __int64, __int64,
                                 float) __asm__("GameRoutine_173f310");
__int64 GameRoutine_173fc80_alt1(__int64, char) __asm__("GameRoutine_173fc80");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 game_menu_GameMenu_Unknown135_alt1(__int64, __int64*) __asm__(
    "game_menu_GameMenu_Unknown135");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
_QWORD* TitleMenu_16a0000(_QWORD* a1, __int64* a2);

__int64 TitleMenu_1666920(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
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

  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1) == 9 ||
      (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1) == 10) {
    v4 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0 &&
        (LayoutAccessor_1562b50(a1 + 952, "Back") & 1) != 0) {
      v5 = GameRoutine_156af20(v4, 7, 2, a1 + 952, 0, "Back");
      if (v5 != -1) {
        v7 = (__int64*)a2[1];
        v6 = a2[2];
        if ((unsigned __int64)v7 >= v6) {
          v9 = *a2;
          v10 = (__int64)v7 - *a2;
          v11 = (v10 >> 3) + 1;
          if (v11 >> 61 != 0) {
            GameRoutine_874500();
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
              GameRoutine_60a210(v5);
            }
            v15 = v5;
            v16 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
            v5 = v15;
          }
          else {
            v16 = 0;
          }
          v17 = v16 + 8 * v14;
          v18 = v16 + v10 - 8 * (v10 >> 3);
          *(_QWORD*)(v16 + v10) = v5;
          v8 = v16 + v10 + 8;
          memcpy(v18, v9, v10);
          *a2 = v18;
          a2[1] = v8;
          a2[2] = v17;
          if (v9 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v9);
          }
        }
        else {
          *v7 = v5;
          v8 = (__int64)(v7 + 1);
        }
        a2[1] = v8;
      }
    }
  }
  return TitleMenu_16a0000_alt1(a1, a2);
}

__int64 TitleMenu_1666ac0(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
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
  __int64 result;

  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1) == 9 ||
      (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1) == 10) {
    v4 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0 &&
        (LayoutAccessor_1562b50(a1 + 952, "Next") & 1) != 0) {
      v5 = GameRoutine_156af20(v4, 7, 2, a1 + 952, 0, "Next");
      if (v5 != -1) {
        v7 = (__int64*)a2[1];
        v6 = a2[2];
        if ((unsigned __int64)v7 >= v6) {
          v9 = *a2;
          v10 = (__int64)v7 - *a2;
          v11 = (v10 >> 3) + 1;
          if (v11 >> 61 != 0) {
            GameRoutine_874500();
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
              GameRoutine_60a210(v5);
            }
            v15 = v5;
            v16 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
            v5 = v15;
          }
          else {
            v16 = 0;
          }
          v17 = v16 + 8 * v14;
          v18 = v16 + v10 - 8 * (v10 >> 3);
          *(_QWORD*)(v16 + v10) = v5;
          v8 = v16 + v10 + 8;
          memcpy(v18, v9, v10);
          *a2 = v18;
          a2[1] = v8;
          a2[2] = v17;
          if (v9 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v9);
          }
        }
        else {
          *v7 = v5;
          v8 = (__int64)(v7 + 1);
        }
        a2[1] = v8;
      }
    }
  }
  game_menu_GameMenu_Unknown136(a1, a2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  if ((_DWORD)result == 3) {
    result = *(_QWORD*)(GameData_2260e70 + 168);
    if (result != 0) {
      return ProcInOutAnim_173fac0(result, 0);
    }
  }
  return result;
}

_QWORD* TitleMenu_16a0000(_QWORD* a1, __int64* a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  _QWORD v18[2];
  _QWORD v19[2];
  __int64 v20[2];

  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 106), (__int64)"IO", 1);
  game_menu_GameMenu_Unknown135_alt1((__int64)a1, a2);
  result = (_QWORD*)a1[42];
  if (result != nullptr) {
    result = (_QWORD*)__dynamic_cast(result, GameData_212e008[0],
                                     &GameData_2084398, 0);
    if (result != nullptr) {
      result = (_QWORD*)GameRoutine_169e7d0(result);
    }
  }
  if (GameData_2260e70 == 0) {
    LayoutAccessor_1560070((void*)(&v16_.v16), a1 + 106, "L_Bg");
    v6 = v16_.v16;
    v5 = v16_.v17;
    v7 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
    v8 = v7;
    if (v5 != 0) {
      v9 = GameData_212c608[0] + 16;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      *(_QWORD*)(v7 + 96) = 0;
      *(_QWORD*)(v7 + 104) = 0;
      *(_QWORD*)(v7 + 112) = 0;
      *(_QWORD*)(v7 + 120) = 0;
      *(_QWORD*)(v7 + 128) = 0;
      *(_WORD*)(v7 + 136) = 0;
      *(_QWORD*)v7 = v9;
      *(_QWORD*)(v7 + 8) = 0;
      *(_QWORD*)(v7 + 138) = 0;
      *(_QWORD*)(v7 + 144) = 0;
      *(_QWORD*)(v7 + 32) = 0;
      *(_QWORD*)(v7 + 40) = 0;
      *(_QWORD*)(v7 + 48) = 0;
      *(_QWORD*)(v7 + 56) = 0;
      *(_QWORD*)(v7 + 64) = 0;
      *(_QWORD*)(v7 + 72) = 0;
      *(_QWORD*)(v7 + 80) = 0;
      *(_QWORD*)(v7 + 88) = 0;
      *(_QWORD*)(v7 + 16) = 0;
      *(_QWORD*)(v7 + 24) = "NULL";
      game_ProcInst_Register_alt1(v7);
      GameData_2260e70 = v8;
      *(_QWORD*)(v8 + 152) = v6;
      *(_QWORD*)(v8 + 160) = v5;
      *(_QWORD*)v8 = game_menu_anonymous_ProcTitleBg_vtable;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      *(_QWORD*)(v8 + 168) = 0;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21c6868) != 0) {
        GameData_21c67d0 = 0;
        GameData_21c67d8 = 0;
        GameData_21c67e0 = 0;
        GameData_21c67b0 = 0;
        GameData_21c67b8 = 0;
        GameData_21c67c0 = 0;
        GameData_21c67c8 = 0;
        GameData_21c6808 = 0;
        GameData_21c6810 = 0;
        GameData_21c6818 = 0;
        GameData_21c67a8 = 3;
        GameData_21c6820 = 0;
        GameData_21c6828 = 0;
        GameData_21c6850 = 0;
        GameData_21c6858 = 0;
        GameData_21c6860 = 0;
        GameData_21c6848 = 0;
        GameData_21c6838 = 0;
        GameData_21c6840 = 0;
        GameData_21c6830 = 0;
        GameData_21c67e8 = 14;
        GameData_21c67f0 = 0;
        GameData_21c67f8 = 16;
        GameData_21c6800 = 1;
        __cxa_guard_release_alt1((__int64)&GameData_21c6868);
      }
      v10 = a1[5];
      if (v10 != 0) {
        *(_QWORD*)(v10 + 48) = v8;
        *(_QWORD*)(v8 + 56) = a1[5];
      }
      a1[5] = v8;
      *(_QWORD*)(v8 + 24) = "ProcTitleBg";
      *(_QWORD*)(v8 + 32) = a1;
      *(_DWORD*)(v8 + 140) =
          (unsigned int)game_HashString32_alt1("ProcTitleBg");
      *(_QWORD*)(v8 + 8) = &GameData_21c67a8;
      *(_QWORD*)(v8 + 16) = &GameData_21c67a8;
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 24;
      *(_QWORD*)(v8 + 80) = 1;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8) & 1) != 0 &&
          (*(_WORD*)(v8 + 136) & 0x100) == 0) {
        *(_WORD*)(v8 + 136) |= 0x100u;
      }
      std___1___shared_weak_count___release_weak_alt1(v5);
    }
    else {
      v11 = GameData_212c608[0] + 16;
      *(_QWORD*)(v7 + 96) = 0;
      *(_QWORD*)(v7 + 104) = 0;
      *(_QWORD*)(v7 + 112) = 0;
      *(_QWORD*)(v7 + 120) = 0;
      *(_QWORD*)(v7 + 128) = 0;
      *(_WORD*)(v7 + 136) = 0;
      *(_QWORD*)(v7 + 138) = 0;
      *(_QWORD*)(v7 + 144) = 0;
      *(_QWORD*)(v7 + 32) = 0;
      *(_QWORD*)(v7 + 40) = 0;
      *(_QWORD*)(v7 + 48) = 0;
      *(_QWORD*)(v7 + 56) = 0;
      *(_QWORD*)v7 = v11;
      *(_QWORD*)(v7 + 8) = 0;
      *(_QWORD*)(v7 + 16) = 0;
      *(_QWORD*)(v7 + 24) = "NULL";
      *(_QWORD*)(v7 + 64) = 0;
      *(_QWORD*)(v7 + 72) = 0;
      *(_QWORD*)(v7 + 80) = 0;
      *(_QWORD*)(v7 + 88) = 0;
      game_ProcInst_Register_alt1(v7);
      GameData_2260e70 = v8;
      *(_QWORD*)(v8 + 152) = v6;
      *(_QWORD*)(v8 + 160) = 0;
      *(_QWORD*)(v8 + 168) = 0;
      *(_QWORD*)v8 = game_menu_anonymous_ProcTitleBg_vtable;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21c6868) != 0) {
        GameData_21c67a8 = 3;
        GameData_21c67d0 = 0;
        GameData_21c67d8 = 0;
        GameData_21c67e0 = 0;
        GameData_21c67b0 = 0;
        GameData_21c67b8 = 0;
        GameData_21c67c0 = 0;
        GameData_21c67c8 = 0;
        GameData_21c6808 = 0;
        GameData_21c6810 = 0;
        GameData_21c6818 = 0;
        GameData_21c6820 = 0;
        GameData_21c6828 = 0;
        GameData_21c6850 = 0;
        GameData_21c6858 = 0;
        GameData_21c6860 = 0;
        GameData_21c6848 = 0;
        GameData_21c6838 = 0;
        GameData_21c6840 = 0;
        GameData_21c6830 = 0;
        GameData_21c67e8 = 14;
        GameData_21c67f0 = 0;
        GameData_21c67f8 = 16;
        GameData_21c6800 = 1;
        __cxa_guard_release_alt1((__int64)&GameData_21c6868);
      }
      v12 = a1[5];
      if (v12 != 0) {
        *(_QWORD*)(v12 + 48) = v8;
        *(_QWORD*)(v8 + 56) = a1[5];
      }
      a1[5] = v8;
      *(_QWORD*)(v8 + 24) = "ProcTitleBg";
      *(_QWORD*)(v8 + 32) = a1;
      *(_DWORD*)(v8 + 140) =
          (unsigned int)game_HashString32_alt1("ProcTitleBg");
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 24;
      *(_QWORD*)(v8 + 80) = 1;
      *(_QWORD*)(v8 + 8) = &GameData_21c67a8;
      *(_QWORD*)(v8 + 16) = &GameData_21c67a8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8) & 1) != 0 &&
          (*(_WORD*)(v8 + 136) & 0x100) == 0) {
        *(_WORD*)(v8 + 136) |= 0x100u;
      }
    }
    if (v16_.v17 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v16_.v17);
    }
    v13 = GameData_2260e70;
    v14 = *(_QWORD*)(GameData_2260e70 + 168);
    if (v14 != 0) {
      return (_QWORD*)GameRoutine_173fc80_alt1(v14, 0);
    }
    else {
      v15 = *(_QWORD*)(GameData_2260e70 + 160);
      v20[0] = *(_QWORD*)(GameData_2260e70 + 152);
      v20[1] = v15;
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                  memory_order_relaxed);
      }
      v19[0] = "In";
      v19[1] = 2;
      v18[0] = "Out";
      v18[1] = 3;
      result = (_QWORD*)GameRoutine_173f310_alt1(
          v13, v20, 0, (__int64)v19, (__int64)v18, -0x1.0000000000000p+0f);
      *(_QWORD*)(v13 + 168) = result;
      if (v15 != 0) {
        return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v15);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
