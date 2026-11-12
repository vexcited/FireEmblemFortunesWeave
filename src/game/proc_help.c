#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHelp_Destructor(__int64 a1);
__int64 ProcHelp_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcHelp_DeletingDestructor");
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_18a56f0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_212d8a8[4];
extern __int64 game_g_game_setting;
__int64 ProcHelp_18b0790(__int64 a1);
__int64 ProcHelp_18b0bd0(__int64 a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64* GameData_212d890[2];
_QWORD* ProcHelp_Unknown5(_QWORD* a1);
__int64 GameRoutine_1553220_alt1(__int64 result) __asm__("GameRoutine_1553220");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcHelp_DeletingDestructor(__int64 a1);

__int64 ProcHelp_Destructor(__int64 a1)
{
  __int64 v2;

  if (*(_BYTE*)(a1 + 196) == 1) {
    GameRoutine_1553220(*(unsigned int*)(a1 + 192));
    if (*(_BYTE*)(a1 + 196) == 1) {
      *(_BYTE*)(a1 + 196) = 0;
    }
  }
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcHelp_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  if (*(_BYTE*)(a1 + 196) == 1) {
    GameRoutine_1553220_alt1(*(unsigned int*)(a1 + 192));
    if (*(_BYTE*)(a1 + 196) == 1) {
      *(_BYTE*)(a1 + 196) = 0;
    }
  }
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

_QWORD* ProcHelp_Unknown5(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  char v7[4];
  struct {
    __int64* v8;
    int v9;
    char gap20_[4];
    __int64 v10;
  } v8_;

  v2 = a1[21];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = a1[20];
      if (v5 != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5) & 1) != 0) {
        ProcHelp_18b0bd0((__int64)a1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  result = (_QWORD*)a1[19];
  if (result != nullptr) {
    v8_.v10 = 0;
    v8_.v8 = GameData_212d890[0] + 2;
    v8_.v9 = 1;
    result = X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64**))(
            *result + 16LL))((void*)v7, result, &v8_.v8));
  }
  a1[19] = 0;
  return result;
}

__int64 ProcHelp_18b0790(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 result;
  __int64 v9;
  _BYTE v10[200];

  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(_QWORD*)(a1 + 160);
      v5 = v3;
      if (v4 != 0) {
        GameRoutine_18a56f0(*(_QWORD*)(a1 + 160));
        if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
                ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
                 *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                     (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
                     (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) ||
            *(_BYTE*)(game_g_game_setting + 903) == 1 &&
                ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0 ||
                 *(_BYTE*)(game_g_game_setting + 940) == 1 &&
                     (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0 &&
                     (*(_BYTE*)(game_g_game_setting + 902) & 1) != 0)) {
          v6 = 0;
          v7 = 1;
        }
        else {
          v6 = 1;
          v7 = 0;
        }
        ui_LayoutAccessor_SetPaneVisible(v4 + 88, "L_Cursor", v6);
        LayoutAccessor_155e830(*(_QWORD*)GameData_212d8a8[0] + 24LL, v7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  snd_Fade_Fade_10c830(v10, 0.0f);
  snd_play_ff2d0((void*)(&v9), "SE_SYS_Help_Open", "SE_SYS_Help_Open", v10, 0,
                 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v10);
  if ((*(_BYTE*)(a1 + 196) & 1) == 0) {
    result = GameRoutine_1553130(10);
    *(_DWORD*)(a1 + 192) = 10;
    *(_BYTE*)(a1 + 196) = 1;
  }
  return result;
}

__int64 ProcHelp_18b0bd0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _BYTE v8[200];

  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(_BYTE**)(a1 + 160);
      v5 = v3;
      if (v4 != nullptr) {
        (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)v4 + 40LL))(
            *(_QWORD*)(a1 + 160), 0);
        if (v4[1076] == 1) {
          v4[1076] = 0;
        }
        if (v4[1092] == 1) {
          v4[1092] = 0;
        }
        LayoutAccessor_155e830(*(_QWORD*)GameData_212d8a8[0] + 24LL, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  snd_Fade_Fade_10c830(v8, 0.0f);
  snd_play_ff2d0((void*)(&v7), "SE_SYS_Help_Close", "SE_SYS_Help_Close", v8, 0,
                 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade(v8);
  if (*(_BYTE*)(a1 + 196) == 1) {
    result = GameRoutine_1553220(*(unsigned int*)(a1 + 192));
    if (*(_BYTE*)(a1 + 196) == 1) {
      *(_BYTE*)(a1 + 196) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
