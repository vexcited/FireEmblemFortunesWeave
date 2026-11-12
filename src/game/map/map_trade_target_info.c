#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_map_anonymous_ExchangeMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapTradeTargetInfo_Unknown162(__int64 a1, __int64 a2, int a3);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1571860(__int64*, __int64, char, char, char, char);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcTransitionAnim_156af20(__int64, int, int, __int64*, __int64,
                                   __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874500(void);
__int64 MapTradeTargetInfo_Unknown57(__int64 a1, __int64* a2);
__int64 MapTradeTargetInfo_Unknown84_alt1(__int64 a1) __asm__(
    "MapTradeTargetInfo_Unknown84");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameRoutine_1572370_alt1(__int64, char) __asm__("GameRoutine_1572370");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1571860(__int64*, __int64, char, char, char, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 MapTradeTargetInfo_Unknown84(__int64* a1);
__int64 ProcTransitionAnim_156af20_alt1(
    __int64, int, int, __int64*, const char*,
    const char*) __asm__("ProcTransitionAnim_156af20");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874500_alt1() __asm__("GameRoutine_874500");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 MapTradeTargetInfo_Unknown57(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[25];

  v3 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf_alt1((__int64)v20, "%s%s", "Right", "In");
    v5 = ProcTransitionAnim_156af20_alt1(v3, 3, 0, (__int64*)(a1 + 848),
                                         "Right", (const char*)v20);
  }
  else {
    v5 = -1;
  }
  v7 = (__int64*)a2[1];
  v6 = a2[2];
  if ((unsigned __int64)v7 >= v6) {
    v9 = *a2;
    v10 = (signed __int64)v7 - *a2;
    v11 = (v10 >> 3) + 1;
    if (v11 >> 61 != 0) {
      GameRoutine_874500_alt1();
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
        GameRoutine_60a210_alt1();
      }
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
    }
    else {
      v15 = 0;
    }
    v16 = v15 + 8 * v14;
    v17 = v15 + v10 - 8 * (v10 >> 3);
    *(_QWORD*)(v15 + v10) = v5;
    v8 = v15 + v10 + 8;
    memcpy_alt1(v17, v9, v10);
    *a2 = v17;
    a2[1] = v8;
    a2[2] = v16;
    if (v9 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v18, v9);
    }
  }
  else {
    *v7 = v5;
    v8 = (__int64)(v7 + 1);
  }
  a2[1] = v8;
  snd_Fade_Fade_10c830_alt1((__int64)v20, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_Window_Open",
                      (__int64)"SE_SYS_Window_Open", (__int64)v20, 0, 0x10001u,
                      0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  return snd_Fade_Destroy_Fade_alt1(v20);
}

__int64 MapTradeTargetInfo_Unknown84(__int64* a1)
{
  __int64 v2;
  __int64 i;
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64* v14;
    __int64 v15;
  } v14_;

  v2 = ui_LayoutAccessor_FindPane_alt1(a1 + 119, (__int64)"MenuItemTemp");
  if (v2 != 0) {
    for (i = *(_QWORD*)(v2 + 40); i != v2 + 32; i = *(_QWORD*)(i + 8)) {
      *(_BYTE*)(i + 80) &= ~1u;
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v14_.v14), a1 + 106, "L_UnitInfo");
  result = v14_.v15;
  if (v14_.v15 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v14_.v15);
    v6 = v14_.v14;
    result = v14_.v15;
    if (v14_.v15 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v14_.v15);
    }
    if (v5 != 0 && v6 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v7 = a1[134];
      v8 = std___1___shared_weak_count_lock_alt1(v5);
      if (v8 != 0) {
        v9 = v8;
        LayoutAccessor_1571860(v6, v7, 1, 0, 0, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak_alt1(v9);
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v5);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock_alt1(v5);
      if (v10 != 0) {
        v11 = v10;
        GameRoutine_1572370_alt1((__int64)v6, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt1(v11);
        }
      }
      std___1___shared_weak_count___release_weak_alt1(v5);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v12 = std___1___shared_weak_count_lock_alt1(v5);
      if (v12 != 0) {
        v13 = v12;
        LayoutAccessor_1562cf0_alt1((__int64)v6, "Info00");
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt1(v13);
        }
      }
      result = std___1___shared_weak_count___release_weak_alt1(v5);
    }
    else if (v5 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
  return result;
}

__int64 MapTradeTargetInfo_Unknown162(__int64 a1, __int64 a2, int a3)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *(_QWORD*)(result + 88) = a2;
  *(_DWORD*)(result + 40) = a3;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_map_anonymous_ExchangeMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

#pragma GCC visibility pop
