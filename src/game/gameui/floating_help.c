#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1363e00(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1366ac0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_16d1510(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_18ac620(__int64, __int64);
__int64 GameRoutine_59f140(_QWORD, _QWORD);
__int64 GameRoutine_c8b000(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_sound_PlayCursorHelpSe(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetTranslate(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212dfd0;
extern __int64 (*GameData_21046b0[])();
extern __int64 GameData_212d8a8[4];
extern __int64 GameData_21319a0;
extern __int64 GameData_21f1e08;
extern __int64 GameData_220b680;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2131a70[10];
extern __int64* GameData_2132090[4];
extern __int64* GameData_21320a0[2];
extern int GameData_226b5a0;
void __attribute__((noreturn)) GameRoutine_18883b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_18b0dc0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 FloatingHelp_Destructor(_QWORD* a1);
__int64 FloatingHelp_18ac7f0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 FloatingHelp_18acc00(__int64 a1, _QWORD* a2);
__int64* FloatingHelp_18ae010(__int64* result, _QWORD* a2);
__int64 FloatingHelp_18ae5e0(__int64 a1, float* a2);
__int64 FloatingHelp_18aed20(__int64 result, __int64 a2);
__int64 FloatingHelp_18aee60(_QWORD* a1, __int64* a2);
__int64 game_gameui_FloatingHelp_GetNeighbor_lambda2_Invoke(__int64 a1,
                                                            __int64* a2);
_QWORD* FloatingHelp_18b18a0(_QWORD* a1, _QWORD** a2, unsigned __int64 a3);
bool FloatingHelp_18b1ac0(_QWORD* a1, __int64* a2);
__int64
game_gameui_FloatingHelp_UpdateTargetElements_lambda1_Invoke(__int64 a1,
                                                             _QWORD* a2);
_QWORD* GameRoutine_18ae160(unsigned int, __int64, _QWORD*, _QWORD*, __int64*,
                            long double);
__int64 GameRoutine_18ac620_alt1(_QWORD, _QWORD) __asm__("GameRoutine_18ac620");
__int64 GameRoutine_18b0920();
__int64 GameRoutine_18b0d00();
__int64 ProcHelp_18b0790();
__int64 ProcHelp_18b0bd0();
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_alt1(_QWORD) __asm__("__cxa_guard_acquire");
__int64 game_ProcInst_Register(_QWORD);
extern _UNKNOWN GameData_226b598;
extern __int64 (*game_ProcHelp_vtable[])();
extern __int64* GameData_212c628;
extern __int64* GameData_2130240[8];
extern __int64 GameData_212c608[2];
extern __int64 GameData_226b460;
extern __int64 GameData_226b468;
extern __int64 GameData_226b470;
extern __int64 GameData_226b480;
extern __int64 GameData_226b490;
extern __int64 GameData_226b4a0;
extern __int64 GameData_226b4a8;
extern __int64 GameData_226b4b0;
extern __int64 GameData_226b4c0;
extern __int64 GameData_226b4d0;
extern __int64 GameData_226b4e0;
extern __int64 GameData_226b4e8;
extern __int64 GameData_226b4f0;
extern __int64 GameData_226b500;
extern __int64 GameData_226b510;
extern __int64 GameData_226b520;
extern __int64 GameData_226b528;
extern __int64 GameData_226b530;
extern __int64 GameData_226b540;
extern __int64 GameData_226b550;
extern __int64 GameData_226b560;
extern __int64 GameData_226b568;
extern __int64 GameData_226b570;
extern __int64 GameData_226b580;
extern __int64 GameData_226b590;
extern char GameData_226b458;
extern char GameData_226b498;
extern char GameData_226b4d8;
extern char GameData_226b518;
extern char GameData_226b558;
extern int GameData_226b478;
extern int GameData_226b488;
extern int GameData_226b4b8;
extern int GameData_226b4c8;
extern int GameData_226b4f8;
extern int GameData_226b508;
extern int GameData_226b538;
extern int GameData_226b548;
extern int GameData_226b578;
extern int GameData_226b588;
__attribute__((swiftcall)) void
FloatingHelp_Unknown4(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__int64 (***game_gameui_FloatingHelp_GetNeighbor_lambda1_Invoke(
    __int64 a1, _QWORD* a2))(_QWORD);
__int64 (
    ***game_gameui_FloatingHelp_CheckNeedUpdateTargetElement_lambda1_Invoke(
        __int64 a1, _QWORD* a2))(_QWORD);
__int64 LayoutAccessor_155e140_alt1(__int64*) __asm__("LayoutAccessor_155e140");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_1563f90_alt1(__int64, __int64) __asm__("GameRoutine_1563f90");
void GameRoutine_1564060_alt1(__int64*) __asm__("GameRoutine_1564060");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* GameRoutine_18ae160_alt1(unsigned int, __int64, _QWORD*, _QWORD*,
                                 __int64*) __asm__("GameRoutine_18ae160");
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__attribute__((swiftcall)) void
Layout_1363e00(PSEUDO_X8, unsigned __int64 result, __int64);
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPriority_alt1(__int64 result, int) __asm__(
    "ui_LayoutAccessor_SetPriority");
void GameRoutine_1366ac0_alt1(__int64, __int64) __asm__("GameRoutine_1366ac0");

__int64 FloatingHelp_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;

  v1 = a1[2];
  if (v1 != 0) {
    *(_BYTE*)(v1 + 2376) = 1;
    v3 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
  v4 = a1[30];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = a1[28];
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = a1[24];
  if (v6 == 0) {
    goto LABEL_24;
  }
  v7 = a1[25];
  if (v6 == v7) {
  LABEL_21:
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v6);
    goto LABEL_24;
  }
  do {
    v8 = *(_QWORD**)(v7 - 16);
    if ((_QWORD*)(v7 - 48) == v8) {
      v9 = 32;
    }
    else {
      if (v8 == nullptr) {
        goto LABEL_18;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
  LABEL_18:
    v10 = *(_QWORD*)(v7 - 56);
    if (v10 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
    v7 -= 64;
  } while (v7 != v6);
  v11 = a1[24];
  a1[25] = v6;
  v6 = v11;
  if (v11 != 0) {
    goto LABEL_21;
  }
LABEL_24:
  v13 = a1[21];
  if (v13 != 0) {
    v14 = a1[22];
    if (v13 == v14) {
      goto LABEL_31;
    }
    do {
      v15 = *(_QWORD*)(v14 - 8);
      if (v15 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
      v14 -= 16;
    } while (v14 != v13);
    v16 = a1[21];
    a1[22] = v13;
    v13 = v16;
    if (v16 != 0) {
    LABEL_31:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v13);
    }
  }
  v18 = a1[18];
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v18);
  }
  LayoutAccessor_155e140_alt1(a1 + 4);
  v19 = a1[16];
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  GameRoutine_1564060_alt1(a1 + 10);
  GameRoutine_1563f90_alt1((__int64)(a1 + 7), a1[8]);
  result = a1[5];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
  }
  v21 = a1[3];
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    result = std___1___shared_weak_count___release_weak_alt1(v21);
  }
  *a1 = GameData_21046b0;
  if ((_QWORD*)GameData_21f1e08 == a1) {
    GameData_21f1e08 = 0;
    GameData_226b5a0 = 0;
  }
  return result;
}

__attribute__((swiftcall)) void

FloatingHelp_Unknown4(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  _DWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _DWORD v34[11];

  v7 = *(_DWORD*)(a2 + 8);
  switch (v7) {
  case 44:
    v30 = *(_QWORD*)(result + 152);
    if (v30 != 0 && *(__int64 (***)())v30 == game_ProcHelp_vtable) {
      *(_BYTE*)(v30 + 176) = 1;
    }
    break;
  case 43:
    if (*(_QWORD*)(result + 152) == 0) {
      *(_QWORD*)&v34[3] = v6;
      *(_QWORD*)&v34[5] = v5;
      *(_QWORD*)&v34[7] = v3;
      *(_QWORD*)&v34[9] = v4;
      v8 = *(__int64**)(a2 + 16);
      v9 = a3;
      v32 = 0;
      v33 = 0;
      v10 = result;
      if (v8[1] != 0) {
        v11 = std___1___shared_weak_count_lock(v8[1]);
        result = v10;
        v33 = v11;
        if (v11 != 0) {
          v12 = *v8;
          v32 = v12;
          if (v12 != 0) {
            v13 =
                __dynamic_cast(v12, GameData_21319a0, GameData_2132090[0], -2);
            result = v10;
            if (v13 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                        memory_order_relaxed);
              GameRoutine_18ac620_alt1(v10, &v32);
              v14 = *(_QWORD*)(v10 + 240);
              v15 = v10;
              *(_QWORD*)(v10 + 232) = 0;
              *(_QWORD*)(v10 + 240) = 0;
              if (v14 != 0) {
                std___1___shared_weak_count___release_weak(v14);
                v15 = v10;
              }
              v16 = *(_QWORD*)(v15 + 144);
              v17 = v15;
              *(_DWORD*)(v15 + 248) = -1;
              v18 = std___1___shared_weak_count_lock(v16);
              v19 = (*(float (**)(_QWORD))(**(_QWORD**)(v17 + 136) + 48LL))(
                  *(_QWORD*)(v17 + 136));
              v21 = v20;
              if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                std___1___shared_weak_count___release_weak(v18);
              }
              *(float*)(v10 + 260) = v19;
              *(_DWORD*)(v10 + 264) = v21;
              *(float*)v34 = v19;
              v34[1] = v21;
              v34[2] = 0;
              ui_LayoutAccessor_SetTranslate(
                  *(_QWORD*)GameData_212d8a8[0] + 24LL, v34);
              result = v10;
              if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
                std___1___shared_weak_count___release_weak(v11);
                result = v10;
              }
            }
          }
        }
      }
      v22 = v33;
      if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak(v22);
        result = v10;
      }
      v23 = *(_QWORD*)(result + 160);
      v24 = result + 8;
      if (v23 == 0) {
        v23 =
            *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628);
        if (v23 != 0) {
          while (*(_QWORD*)(v23 + 40) != 0) {
            v31 = v23;
            v23 = *(_QWORD*)(v23 + 40);
            while ((*(_WORD*)(v23 + 136) & 2) == 0) {
              v23 = *(_QWORD*)(v23 + 56);
              if (v23 == 0) {
                v23 = v31;
                goto LABEL_20;
              }
            }
          }
        }
      }
    LABEL_20:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b598,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire_alt1(&GameData_226b598) != 0) {
        GameData_226b460 = 0;
        GameData_226b468 = (__int64)ProcHelp_18b0790;
        GameData_226b458 = 13;
        GameData_226b4d8 = 13;
        GameData_226b518 = 13;
        GameData_226b470 = 0;
        GameData_226b478 = 0;
        GameData_226b480 = 0;
        GameData_226b488 = 0;
        GameData_226b490 = 0;
        GameData_226b4b0 = 0;
        GameData_226b4b8 = 0;
        GameData_226b4c0 = 0;
        GameData_226b4c8 = 0;
        GameData_226b4d0 = 0;
        GameData_226b498 = 15;
        GameData_226b4f0 = 0;
        GameData_226b4f8 = 0;
        GameData_226b500 = 0;
        GameData_226b508 = 0;
        GameData_226b510 = 0;
        GameData_226b520 = 0;
        GameData_226b528 = (__int64)GameRoutine_18b0d00;
        GameData_226b530 = 0;
        GameData_226b538 = 0;
        GameData_226b540 = 0;
        GameData_226b4a0 = 0;
        GameData_226b4a8 = (__int64)GameRoutine_18b0920;
        GameData_226b548 = 0;
        GameData_226b550 = 0;
        GameData_226b558 = 0;
        GameData_226b580 = 0;
        GameData_226b588 = 0;
        GameData_226b590 = 0;
        GameData_226b578 = 0;
        GameData_226b568 = 0;
        GameData_226b570 = 0;
        GameData_226b560 = 0;
        GameData_226b4e0 = 0;
        GameData_226b4e8 = (__int64)ProcHelp_18b0bd0;
        __cxa_guard_release(&GameData_226b598);
      }
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 200, 16, 0);
      v26 = GameData_212c608[0];
      *(_QWORD*)(v25 + 96) = 0;
      *(_QWORD*)(v25 + 104) = 0;
      *(_QWORD*)(v25 + 112) = 0;
      *(_QWORD*)(v25 + 120) = 0;
      *(_QWORD*)(v25 + 128) = 0;
      *(_WORD*)(v25 + 136) = 0;
      *(_QWORD*)(v25 + 16) = 0;
      *(_QWORD*)(v25 + 24) = "NULL";
      *(_QWORD*)(v25 + 138) = 0;
      *(_QWORD*)(v25 + 144) = 0;
      *(_QWORD*)(v25 + 32) = 0;
      *(_QWORD*)(v25 + 40) = 0;
      *(_QWORD*)(v25 + 48) = 0;
      *(_QWORD*)(v25 + 56) = 0;
      *(_QWORD*)(v25 + 64) = 0;
      *(_QWORD*)(v25 + 72) = 0;
      *(_QWORD*)(v25 + 80) = 0;
      *(_QWORD*)(v25 + 88) = 0;
      *(_QWORD*)v25 = v26 + 16;
      *(_QWORD*)(v25 + 8) = 0;
      game_ProcInst_Register(v25);
      *(_QWORD*)v25 = game_ProcHelp_vtable;
      v28 = *(_QWORD*)(v10 + 136);
      v27 = *(_QWORD*)(v10 + 144);
      *(_QWORD*)(v25 + 152) = v24;
      *(_QWORD*)(v25 + 160) = v28;
      *(_QWORD*)(v25 + 168) = v27;
      if (v27 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
      }
      *(_BYTE*)(v25 + 178) = 0;
      *(_WORD*)(v25 + 176) = 256;
      v29 = GameData_2130240[0];
      *(_BYTE*)(v25 + 192) = 0;
      *(_BYTE*)(v25 + 196) = 0;
      *(_QWORD*)(v25 + 184) = v29 + 2;
      result = ProcInst_657850(v25, &GameData_226b458, "ProcHelp", 1, v23);
      *(_QWORD*)(v10 + 152) = v25;
      a3 = v9;
    }
    break;
  case 1:
    *(_QWORD*)(result + 152) = 0;
    break;
  default:
    break;
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

__int64 FloatingHelp_18ac7f0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  _BYTE* v22;
  __int64 v23;
  _QWORD v24[2];
  _QWORD v25[2];
  struct {
    __int64 v26;
    __int64 v27;
  } v26_;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;

  v4 = a1[18];
  a1[17] = 0;
  a1[18] = 0;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v7 = a1[2];
  if (v7 != 0) {
    *(_BYTE*)(v7 + 2376) = 1;
    v8 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v8);
    }
  }
  GameRoutine_1366ac0_alt1(a2, a3);
  v9 = v30_.v30;
  v10 = v30_.v31;
  v11 = a1[3];
  v30_.v30 = 0;
  v30_.v31 = 0;
  a1[2] = v9;
  a1[3] = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  if (v30_.v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30_.v31 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30_.v31 + 16LL))(v30_.v31);
    std___1___shared_weak_count___release_weak_alt1(v30_.v31);
  }
  v12 = a1[3];
  v25[0] = a1[2];
  v25[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1(a1 + 4, v25);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1(a1 + 4, v25);
  }
  ui_LayoutAccessor_SetPriority_alt1((__int64)(a1 + 4), 1);
  LayoutAccessor_155e830_alt1((__int64)(a1 + 4), 1);
  v13 = a1[2];
  v24[0] = "RootPane";
  v24[1] = 8;
  Layout_1363e00((void*)(&v26_.v26), v13, (__int64)v24);
  v28_.v28 = 0;
  v28_.v29 = 0;
  if (v26_.v27 != 0 &&
      (v14 = std___1___shared_weak_count_lock_alt1(v26_.v27), v28_.v29 = v14,
       v14 != 0) &&
      (v28_.v28 = v26_.v26, v26_.v26 != 0) &&
      (v15 = v14, (v16 = __dynamic_cast(v26_.v26, GameData_212dfc0[0],
                                        GameData_21320a0[0], 0)) != 0)) {
    v17 = &v28_.v28;
    v30_.v30 = v16;
    v30_.v31 = v15;
  }
  else {
    v17 = &v30_.v30;
  }
  *v17 = 0;
  v17[1] = 0;
  v19 = v30_.v30;
  v18 = v30_.v31;
  if (v30_.v31 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30_.v31 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt1(v18);
    }
  }
  v20 = v28_.v29;
  if (v28_.v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28_.v29 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  if (v26_.v27 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v26_.v27);
  }
  result = a1[18];
  a1[17] = v19;
  a1[18] = v18;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
    v18 = a1[18];
  }
  if (v18 != 0) {
    result = std___1___shared_weak_count_lock_alt1(v18);
    if (result != 0) {
      v22 = (_BYTE*)a1[17];
      v23 = result;
      if (v22 != nullptr) {
        result =
            (*(__int64 (**)(_BYTE*, _QWORD))(*(_QWORD*)v22 + 40LL))(v22, 0);
        if (v22[1076] == 1) {
          v22[1076] = 0;
        }
        if (v22[1092] == 1) {
          v22[1092] = 0;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        return std___1___shared_weak_count___release_weak_alt1(v23);
      }
    }
  }
  return result;
}

__int64 FloatingHelp_18acc00(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *a2;
  if (*a2 != 0) {
    result = __dynamic_cast(*a2, GameData_21319a0, GameData_2132090[0], -2);
    if (result != 0) {
      v6 = a2[1];
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                  memory_order_relaxed);
        v2 = *a2;
        v7 = a2[1];
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
        }
      }
      else {
        v7 = 0;
      }
      v8 = *(_QWORD*)(a1 + 224);
      *(_QWORD*)(a1 + 216) = v2;
      *(_QWORD*)(a1 + 224) = v7;
      if (v8 != 0) {
        std___1___shared_weak_count___release_weak(v8);
      }
      v9 = GameData_220b680;
      v10 = a2[1];
      v11 = *a2;
      v12 = v10;
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_c8b000(v9, &v11, 1);
      result = v12;
      if (v12 != 0) {
        result = std___1___shared_weak_count___release_weak(v12);
      }
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  else {
    result = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 216) = 0;
    *(_QWORD*)(a1 + 224) = 0;
    if (result != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

__int64* FloatingHelp_18ae010(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v5 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = v9 >> 4;
    v11 = (v9 >> 4) + 1;
    if (v11 >> 60 != 0) {
      GameRoutine_18883b0(result);
    }
    v12 = v3 - v8;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v13 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v11;
    }
    if (v13 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         16 * v13, 16, 0);
    v16 = a2[1];
    v17 = (_QWORD*)(v15 + v9);
    v18 = v15 + 16 * v13;
    *v17 = *a2;
    v17[1] = v16;
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      v8 = *v5;
      v9 = v5[1] - *v5;
      v10 = v9 >> 4;
    }
    v19 = &v17[-2 * v10];
    v7 = v17 + 2;
    result = (__int64*)memcpy(v19, v8, v9);
    *v5 = (__int64)v19;
    v5[1] = (__int64)v7;
    v5[2] = v18;
    if (v8 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v20 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20);
    }
  }
  else {
    *v2 = *a2;
    v6 = a2[1];
    v2[1] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v2 + 2;
  }
  v5[1] = (__int64)v7;
  return result;
}

__int64 FloatingHelp_18ae5e0(__int64 a1, float* a2)
{
  float v2;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  __int64* v10;
  __int64* v11;
  atomic_uchar* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  bool v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 (***v30)(_QWORD);
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;

  v2 = *(float*)(a1 + 276);
  v4 = *(float*)(a1 + 260) + *a2;
  v5 = *(float*)(a1 + 272);
  if (v2 >= v4) {
    v2 = *(float*)(a1 + 260) + *a2;
  }
  if (v4 >= *(float*)(a1 + 268)) {
    v6 = v2;
  }
  else {
    v6 = *(float*)(a1 + 268);
  }
  v7 = *(float*)(a1 + 264);
  *(float*)(a1 + 260) = v6;
  v8 = v7 - a2[1];
  if (v5 >= v8) {
    v5 = v8;
  }
  if (v8 >= *(float*)(a1 + 280)) {
    v9 = v5;
  }
  else {
    v9 = *(float*)(a1 + 280);
  }
  *(float*)(a1 + 264) = v9;
  v41 = __PAIR64__(LODWORD(v9), LODWORD(v6));
  LODWORD(v42) = 0;
  ui_LayoutAccessor_SetTranslate(*(_QWORD*)GameData_212d8a8[0] + 24LL, &v41);
  v10 = *(__int64**)(a1 + 168);
  v11 = *(__int64**)(a1 + 176);
  if (v10 != v11) {
    v12 = (atomic_uchar*)GameData_212dfd0;
    v13 = GameData_212dfc8;
    v14 = GameData_21319a0;
    while (1) {
      while (1) {
        v15 = v10[1];
        if (v15 != 0) {
          v16 = std___1___shared_weak_count_lock(v15);
          if (v16 != 0) {
            break;
          }
        }
        v10 += 2;
        if (v10 == v11) {
          return 1;
        }
      }
      v17 = *v10;
      v18 = v16;
      if (*v10 != 0) {
        v19 = *(_BYTE*)(v17 + 24) != 0 ? v17 + 152 : 0LL;
        v20 = GameRoutine_59f140(v19, a1 + 260);
        if (v20 != 0) {
          break;
        }
        LOBYTE(v17) = 0;
      }
    LABEL_67:
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
      }
      v10 += 2;
      if (v10 == v11) {
        v37 = 1;
      }
      else {
        v37 = v17;
      }
      if ((v37 & 1) != 0) {
        return 1;
      }
    }
    v22 = *(_QWORD**)(v20 + 24);
    while (1) {
      if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0) {
        v25 = __cxa_guard_acquire(v12, v21);
        if ((_DWORD)v25 != 0) {
          *v13 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v25, v21);
          __cxa_guard_release(v12);
        }
      }
      if (v22 != nullptr) {
        v23 = (__int64*)(*(__int64 (**)(_QWORD*))(*v22 + 16LL))(v22);
        if (v23 == v13) {
          break;
        }
        do {
          v23 = (__int64*)*v23;
          v24 = v23 == v13 || v23 == nullptr;
        } while (!v24);
        if (v23 != nullptr) {
          break;
        }
      }
      v22 = (_QWORD*)v22[3];
      if (v22 == nullptr) {
        goto LABEL_66;
      }
    }
    GameRoutine_16d1510((void*)&v39, v17, v22);
    v41 = 0;
    v42 = 0;
    if (v40 != 0) {
      v42 = std___1___shared_weak_count_lock(v40);
      if (v42 != 0) {
        v41 = v39;
      }
      if (v40 != 0) {
        std___1___shared_weak_count___release_weak(v40);
      }
      v26 = v41;
      if (v41 != 0) {
        if (*(_QWORD*)(a1 + 224) != 0) {
          v27 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 224));
          v26 = v41;
          if (v27 != 0) {
            v28 = *(_QWORD*)(a1 + 216);
            if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v28 == v26) {
                goto LABEL_63;
              }
            }
            else {
              v29 = v26;
              (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
              std___1___shared_weak_count___release_weak(v27);
              v24 = v28 == v29;
              v14 = GameData_21319a0;
              if (v24) {
                goto LABEL_63;
              }
            }
            v26 = v41;
            if (v41 == 0) {
              goto LABEL_63;
            }
          }
          else if (v41 == 0) {
            goto LABEL_63;
          }
        }
        v30 = (__int64 (***)(_QWORD))__dynamic_cast(v26, v14,
                                                    GameData_2132090[0], -2);
        if (v30 != nullptr) {
          v31 = v42;
          if (v42 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                      memory_order_relaxed);
          }
          v32 = (**v30)(v30);
          if ((v32 & 1) != 0) {
            game_sound_PlayCursorHelpSe(v32);
            v34 = *(_QWORD*)(a1 + 216);
            v33 = *(_QWORD*)(a1 + 224);
            if (v33 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                        memory_order_relaxed);
            }
            v35 = *(_QWORD*)(a1 + 240);
            *(_QWORD*)(a1 + 232) = v34;
            *(_QWORD*)(a1 + 240) = v33;
            if (v35 != 0) {
              std___1___shared_weak_count___release_weak(v35);
            }
            FloatingHelp_18acc00(a1, &v41);
            GameRoutine_18ac620(a1, (__int64)&v41);
          }
          if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak(v31);
          }
        }
      }
    }
  LABEL_63:
    v36 = v42;
    if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak(v36);
    }
  LABEL_66:
    LOBYTE(v17) = 1;
    goto LABEL_67;
  }
  return 1;
}

__int64 FloatingHelp_18aed20(__int64 result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD**)(result + 2280);
  v3 = (_QWORD*)(result + 2272);
  if (v2 == (_QWORD*)(result + 2272)) {
    return result;
  }
  v5 = GameData_212dfc0[0];
  v6 = GameData_21319a0;
  while (1) {
    result = v2[2];
    if (result != 0) {
      result = __dynamic_cast(result, v5, v6, 0);
      if (result != 0) {
        break;
      }
    }
  LABEL_3:
    v2 = (_QWORD*)v2[1];
    if (v2 == v3) {
      return result;
    }
  }
  v7 = v2[3];
  v10 = result;
  v11 = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  v8 = *(_QWORD*)(a2 + 32);
  if (v8 == 0) {
    GameRoutine_60a310(0);
  }
  result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v8 + 48LL))(v8, &v10);
  v9 = v11;
  if ((result & 1) == 0) {
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = std___1___shared_weak_count___release_weak(v9);
    }
    goto LABEL_3;
  }
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__int64 FloatingHelp_18aee60(_QWORD* a1, __int64* a2)
{
  int v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v6 = *a2;
      v7 = result;
      if (*a2 != 0) {
        result = a1[18];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v8 = a1[17];
            v9 = result;
            if (v8 != 0) {
              v10 = a2[1];
              if (v10 == 0) {
                goto LABEL_14;
              }
              v11 = std___1___shared_weak_count_lock(v10);
              if (v11 == 0) {
                goto LABEL_14;
              }
              v12 = *a2;
              if (*a2 != 0) {
                v2 = *(_DWORD*)(v12 + 2372);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v13 = v11;
                (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
                std___1___shared_weak_count___release_weak(v13);
              }
              if (v12 == 0) {
              LABEL_14:
                v2 = 0;
              }
              result = ui_LayoutAccessor_SetPriority(v8 + 88,
                                                     (unsigned int)(v2 + 1));
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              result = std___1___shared_weak_count___release_weak(v9);
            }
          }
        }
        v15 = (__int64*)a1[21];
        v14 = (__int64*)a1[22];
        if (v15 != v14) {
          while (1) {
            result = v15[1];
            if (result != 0) {
              result = std___1___shared_weak_count_lock(result);
              if (result != 0) {
                v16 = *v15;
                if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v17 = result;
                  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
                  result = std___1___shared_weak_count___release_weak(v17);
                }
                if (v6 == v16) {
                  break;
                }
              }
            }
            v15 += 2;
            if (v15 == v14) {
              v15 = v14;
              break;
            }
          }
          v14 = (__int64*)a1[22];
        }
        if (v15 == v14) {
          v18 = a1[23];
          if ((unsigned __int64)v14 >= v18) {
            v20 = a1[21];
            v21 = (char*)v14 - v20;
            v22 = (((__int64)v14 - v20) >> 4) + 1;
            if (v22 >> 60 != 0) {
              GameRoutine_18b0dc0();
            }
            v23 = v18 - v20;
            v24 = v23 >> 3;
            if (v23 >> 3 <= v22) {
              v24 = v22;
            }
            if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF0LL) {
              v25 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v25 = v24;
            }
            if (v25 >> 60 != 0) {
              GameRoutine_60a210(result);
            }
            v26 = fw_memory_g_heap_manager_ptr;
            v27 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v25, 16, 0);
            v28 = &v21[v27];
            v29 = v27 + 16 * v25;
            *(_QWORD*)v28 = v6;
            *((_QWORD*)v28 + 1) = v7;
            v19 = (__int64)&v21[v27 + 16];
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                      memory_order_relaxed);
            v30 = a1[21];
            v31 = a1[22] - v30;
            v32 = &v28[-v31];
            result = memcpy(&v28[-v31], v30, v31);
            a1[21] = v32;
            a1[22] = v19;
            a1[23] = v29;
            if (v30 != 0) {
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) == 0) {
                v33 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v26 + v33);
            }
          }
          else {
            *v14 = v6;
            v14[1] = v7;
            v19 = (__int64)(v14 + 2);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                      memory_order_relaxed);
          }
          a1[22] = v19;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

__int64 (***game_gameui_FloatingHelp_GetNeighbor_lambda1_Invoke(
    __int64 a1, _QWORD* a2))(_QWORD)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 (***result)(_QWORD);
  __int64 v14;
  __int64 v16;
  unsigned int v17;
  _QWORD* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22[2];

  v2 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v2 + 240);
  if (v5 != 0) {
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v2 + 232);
      v8 = v7 != 0 && *a2 == v7;
      if (v8 && **(_DWORD**)(a1 + 16) == *(_DWORD*)(v2 + 248)) {
        v9 = *(_QWORD**)(a1 + 24);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                  memory_order_relaxed);
        v10 = v9[1];
        *v9 = v7;
        v9[1] = v6;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v11 = v6;
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak_alt1(v10);
          v6 = v11;
        }
        v12 = 0;
        **(_BYTE**)(a1 + 32) = 1;
      }
      else {
        v12 = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v12 != 0) {
          goto LABEL_16;
        }
      }
      else {
        v21 = v6;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v21);
        if (v12 != 0) {
          goto LABEL_16;
        }
      }
      return (__int64 (***)(_QWORD))(((_UNKNOWN*)0x0LL) + 1);
    }
  }
LABEL_16:
  result = (__int64 (***)(_QWORD))*a2;
  if (*a2 != 0) {
    result = (__int64 (***)(_QWORD))__dynamic_cast(result, GameData_21319a0,
                                                   GameData_2132090[0], -2);
    if (result != nullptr) {
      v14 = a2[1];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (((**result)(result) & 1) != 0) {
        v16 = *(_QWORD*)(a1 + 48);
        v17 = **(_DWORD**)(a1 + 40);
        v18 = *(_QWORD**)(a1 + 56);
        v19 = *(__int64**)(a1 + 64);
        v20 = v19[1];
        v22[0] = *v19;
        v22[1] = v20;
        if (v20 == 0) {
          GameRoutine_18ae160_alt1(v17, v16, v18, a2, v22);
          if (v14 != 0) {
          LABEL_24:
            if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
              std___1___shared_weak_count___release_weak_alt1(v14);
            }
          }
          return nullptr;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_18ae160_alt1(v17, v16, v18, a2, v22);
        std___1___shared_weak_count___release_weak_alt1(v20);
      }
      if (v14 != 0) {
        goto LABEL_24;
      }
      return nullptr;
    }
  }
  return result;
}

__int64 game_gameui_FloatingHelp_GetNeighbor_lambda2_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  char v11;

  v3 = *a2;
  if (*a2 != 0) {
    v3 = __dynamic_cast(v3, GameData_21319a0, GameData_2132090[0], -2);
    if (v3 != 0) {
      v5 = a2[1];
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
      }
      LOBYTE(v3) = (**(__int64 (***)(__int64))v3)(v3);
      if ((v3 & 1) != 0) {
        v6 = *(__int64**)(a1 + 8);
        v8 = *a2;
        v7 = a2[1];
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                    memory_order_relaxed);
        }
        v9 = v6[1];
        *v6 = v8;
        v6[1] = v7;
        if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          v10 = v3;
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
          LOBYTE(v3) = v10;
        }
      }
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        v11 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
        LOBYTE(v3) = v11;
      }
    }
  }
  return v3 & 1;
}

_QWORD* FloatingHelp_18b18a0(_QWORD* a1, _QWORD** a2, unsigned __int64 a3)
{
  _QWORD* v3;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  _QWORD* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* i;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* j;
  __int64 v22;
  _QWORD* v23;

  v3 = a1;
  if (a3 >= 2) {
    if (a3 == 2) {
      v6 = *a2;
      if ((FloatingHelp_18b1ac0(*a2 + 2, a1 + 2) & 1) != 0) {
        v7 = (_QWORD*)v6[1];
        *(_QWORD*)(*v6 + 8LL) = v7;
        *v7 = *v6;
        *(_QWORD*)(*v3 + 8LL) = v6;
        *v6 = *v3;
        *v3 = v6;
        v6[1] = v3;
        return v6;
      }
    }
    else {
      v8 = a3 >> 1;
      v10 = a1;
      v11 = (a3 >> 1) + 1;
      do {
        v10 = (_QWORD*)v10[1];
        --v11;
      } while (v11 > 1);
      v12 = (_QWORD*)FloatingHelp_18b18a0(a1, v10, a3 >> 1);
      v3 = (_QWORD*)FloatingHelp_18b18a0(v10, a2, a3 - v8);
      if ((FloatingHelp_18b1ac0(v3 + 2, v12 + 2) & 1) != 0) {
        for (i = (_QWORD*)v3[1]; i != a2; i = (_QWORD*)i[1]) {
          if ((FloatingHelp_18b1ac0(i + 2, v12 + 2) & 1) == 0) {
            break;
          }
        }
        v14 = *i;
        v15 = *(_QWORD**)(*i + 8LL);
        *(_QWORD*)(*v3 + 8LL) = v15;
        *v15 = *v3;
        v16 = (_QWORD*)v12[1];
        *(_QWORD*)(*v12 + 8LL) = v3;
        *v3 = *v12;
        *v12 = v14;
        *(_QWORD*)(v14 + 8) = v12;
      }
      else {
        v16 = (_QWORD*)v12[1];
        i = v3;
        v3 = v12;
      }
      if (v16 != i && i != a2) {
        v18 = i;
        do {
          if ((FloatingHelp_18b1ac0(i + 2, v16 + 2) & 1) != 0) {
            for (j = (_QWORD*)i[1]; j != a2; j = (_QWORD*)j[1]) {
              if ((FloatingHelp_18b1ac0(j + 2, v16 + 2) & 1) == 0) {
                break;
              }
            }
            v22 = *j;
            if (v18 == i) {
              v18 = j;
            }
            v23 = *(_QWORD**)(v22 + 8);
            *(_QWORD*)(*i + 8LL) = v23;
            *v23 = *i;
            v19 = (_QWORD*)v16[1];
            *(_QWORD*)(*v16 + 8LL) = i;
            *i = *v16;
            *v16 = v22;
            *(_QWORD*)(v22 + 8) = v16;
            i = j;
          }
          else {
            v19 = (_QWORD*)v16[1];
          }
          v16 = v19;
        } while (v19 != v18 && i != a2);
      }
    }
  }
  return v3;
}

bool FloatingHelp_18b1ac0(_QWORD* a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;

  v2 = *a1;
  if (*a1 == 0) {
    v7 = 0x7FFFFFFF;
    v8 = *a2;
    if (*a2 == 0) {
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  v5 = __dynamic_cast(*a1, GameData_21319a0, GameData_2132090[0], -2);
  if (v5 != 0) {
    v6 = a1[1];
    if (v6 == 0) {
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      v8 = *a2;
      if (*a2 == 0) {
        goto LABEL_27;
      }
      goto LABEL_19;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  v9 = __dynamic_cast(v2, GameData_21319a0, GameData_2131a70[0], 0);
  if (v9 == 0) {
    v7 = 0x7FFFFFFF;
    v8 = *a2;
    if (*a2 == 0) {
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  v6 = a1[1];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_DWORD*)(v9 + 1028);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
    LABEL_5:
      v8 = *a2;
      if (*a2 == 0) {
        goto LABEL_27;
      }
      goto LABEL_19;
    }
  LABEL_12:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v8 = *a2;
    if (*a2 == 0) {
      goto LABEL_27;
    }
    goto LABEL_19;
  }
  v7 = *(_DWORD*)(v9 + 1028);
  v8 = *a2;
  if (*a2 == 0) {
    goto LABEL_27;
  }
LABEL_19:
  v10 = __dynamic_cast(v8, GameData_21319a0, GameData_2132090[0], -2);
  if (v10 != 0) {
    v11 = a2[1];
    if (v11 == 0) {
      v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      return v7 < v12;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_26;
    }
    return v7 < v12;
  }
  v13 = __dynamic_cast(v8, GameData_21319a0, GameData_2131a70[0], 0);
  if (v13 == 0) {
  LABEL_27:
    v12 = 0x7FFFFFFF;
    return v7 < v12;
  }
  v11 = a2[1];
  if (v11 == 0) {
    v12 = *(_DWORD*)(v13 + 1028);
    return v7 < v12;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                            memory_order_relaxed);
  v12 = *(_DWORD*)(v13 + 1028);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
  LABEL_26:
    v14 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
    v12 = v14;
  }
  return v7 < v12;
}

__int64 game_gameui_FloatingHelp_UpdateTargetElements_lambda1_Invoke(__int64 a1,
                                                                     _QWORD* a2)
{
  __int64 v4;
  __int64 (***v5)(_QWORD);
  __int64 v6;
  char v7;

  if (*a2 != 0 &&
      (v4 = *(_QWORD*)(a1 + 8),
       (v5 = (__int64 (***)(_QWORD))__dynamic_cast(
            *a2, GameData_21319a0, GameData_2132090[0], -2)) != nullptr)) {
    v6 = a2[1];
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = (**v5)(v5);
    if ((v7 & 1) != 0) {
      FloatingHelp_18acc00(v4, a2);
      **(_BYTE**)(a1 + 16) = 1;
    }
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    v7 = 0;
  }
  return v7 & 1;
}

__int64 (
    ***game_gameui_FloatingHelp_CheckNeedUpdateTargetElement_lambda1_Invoke(
        __int64 a1, _QWORD* a2))(_QWORD)
{
  __int64 (***result)(_QWORD);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (***v8)(_QWORD);
  __int64 v9;
  __int64 (***v10)(_QWORD);
  __int64 (***v11)(_QWORD);
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;

  result = (__int64 (***)(_QWORD))*a2;
  if (*a2 == 0) {
    return result;
  }
  v5 = *(_QWORD*)(a1 + 8);
  v6 = a1;
  result = (__int64 (***)(_QWORD))__dynamic_cast(result, GameData_21319a0,
                                                 GameData_2132090[0], -2);
  if (result == nullptr) {
    return result;
  }
  v7 = a2[1];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_QWORD*)(v5 + 224) != 0) {
    v8 = result;
    v9 = std___1___shared_weak_count_lock(*(_QWORD*)(v5 + 224));
    v10 = (__int64 (***)(_QWORD))*a2;
    if (v9 != 0) {
      v11 = *(__int64 (****)(_QWORD))(v5 + 216);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v12);
      }
      result = v8;
      if (v10 == v11) {
      LABEL_14:
        v13 = *(_QWORD*)(*a2 + 8LL);
        if (v13 != 0) {
          v14 = *(_QWORD*)(v13 + 24);
          if (v14 != 0) {
            while ((*(_BYTE*)(v14 + 88) & 1) != 0) {
              v14 = *(_QWORD*)(v14 + 24);
              if (v14 == 0) {
                if (((**result)(result) & 1) == 0) {
                  break;
                }
                result = (__int64 (***)(_QWORD))(((_UNKNOWN*)0x0LL) + 1);
                **(_BYTE**)(v6 + 16) = 1;
                if (v7 != 0) {
                  goto LABEL_22;
                }
                return result;
              }
            }
          }
        }
      }
    }
    else {
      result = v8;
      if (v10 == nullptr) {
        goto LABEL_14;
      }
    }
  }
  else if (*a2 == 0) {
    goto LABEL_14;
  }
  result = nullptr;
  if (v7 != 0) {
  LABEL_22:
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = (unsigned int)result;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      return (__int64 (***)(_QWORD))v15;
    }
  }
  return result;
}

#pragma GCC visibility pop
