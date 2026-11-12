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
__int64* FloatingHelp_18ae010_alt1(__int64* result,
                                   _QWORD* a2) __asm__("FloatingHelp_18ae010");
__int64 FloatingHelp_18ae5e0(__int64 a1, float* a2);
__int64 FloatingHelp_18aed20(__int64 result, __int64 a2);
__int64 FloatingHelp_18aee60_alt1(_QWORD* a1,
                                  __int64* a2) __asm__("FloatingHelp_18aee60");
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
__attribute__((swiftcall)) void
GameRoutine_18acd40(PSEUDO_X8, __int64 result, _QWORD*, unsigned int, __int64*);
__attribute__((swiftcall)) void Pane_58dfa0(PSEUDO_X8, __int64);
__int64 Element_1885f00(__int64 result, __int64);
__int64 GameHr_18a57c0(__int64);
__int64 GameRoutine_18a4fa0(__int64, __int64**);
__int64 GameRoutine_18afc00(_QWORD*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gameui_control_18b4050(__int64);
__int64
game_sound_PlayCursorHelpSe_alt1() __asm__("game_sound_PlayCursorHelpSe");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern _DWORD GameData_1a82b60[4];
extern __int64 (*GameData_2104990[])();
extern __int64 (*GameData_2104a10[])();
extern __int64 (*GameData_21056a8[])();
extern __int64 (*ui_Event_vtable[])();
extern __int64* GameData_212d890[2];
extern __int64 GameData_212d8b0[3];
float ui_LayoutAccessor_SetTranslate_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_SetTranslate");
void GameRoutine_18ae960(_QWORD*, char);
__int64 FloatingHelp_18ac620(__int64 a1, __int64 a2);
void FloatingHelp_18acaf0(__int64 a1, char a2);
__int64 FloatingHelp_18ade60(__int64* a1);
void FloatingHelp_18ae160(unsigned int a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                          __int64* a5, long double a6);
__int64 FloatingHelp_18ae4d0(__int64 a1, _QWORD* a2, unsigned int a3);
_QWORD* FloatingHelp_18af980(__int64 a1, __int64* a2);
__int64 game_gameui_FloatingHelp_CheckNeedUpdateTargetElement(__int64 result,
                                                              __int64 a2);
__int64
game_gameui_FloatingHelp_UpdateTargetElements_lambda0_Invoke(__int64 a1,
                                                             _QWORD* a2);
__int64 game_gameui_FloatingHelp_CheckNeedUpdateTargetElement_lambda0_Invoke(
    __int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void
    GameRoutine_16d1510_alt1(PSEUDO_X8) __asm__("GameRoutine_16d1510");
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 FloatingHelp_18ac620_alt1(__int64,
                                  __int64*) __asm__("FloatingHelp_18ac620");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
int __cxa_guard_acquire_alt2(__int64) __asm__("__cxa_guard_acquire");
void __attribute__((noreturn))
GameRoutine_18883b0_alt1() __asm__("GameRoutine_18883b0");
void __attribute__((noreturn))
GameRoutine_18b0dc0_alt1() __asm__("GameRoutine_18b0dc0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void FloatingHelp_18ae010(__int64* a1, _QWORD* a2);
void FloatingHelp_18aee60(_QWORD* a1, __int64* a2);
__int64 FloatingHelp_18ac620_alt2(_QWORD,
                                  _QWORD) __asm__("FloatingHelp_18ac620");
__int64 GameHr_18b0920();
__int64 game_18b0d00();

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
              FloatingHelp_18ac620_alt2(v10, &v32);
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
        GameData_226b528 = (__int64)game_18b0d00;
        GameData_226b530 = 0;
        GameData_226b538 = 0;
        GameData_226b540 = 0;
        GameData_226b4a0 = 0;
        GameData_226b4a8 = (__int64)GameHr_18b0920;
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

__int64 FloatingHelp_18ac620(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  struct {
    __int64 (**v15)();
    int v16;
    char gap20_[4];
    __int64 v17;
  } v15_;
  __int64 var4;

  v3 = *(_QWORD*)(a1 + 144);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v3);
    if (v5 != 0) {
      v6 = v5;
      v7 = *(_QWORD*)(a1 + 136);
      if (v7 != 0) {
        GameHr_18a57c0(v7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v6);
      }
    }
  }
  v8 = *(_QWORD*)(a2 + 8);
  if (v8 != 0) {
    v9 = *(__int64**)a2;
    v10 = *(_QWORD*)(a2 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v15_.v17 = 0;
    v15_.v15 = ui_Event_vtable;
    v15_.v16 = 45;
    v11 = std___1___shared_weak_count_lock_alt1(v10);
    if (v11 != 0) {
      v12 = v11;
      if (v9 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(
            PSEUDO_X8, __int64*, __int64 (***)(void)))(v9[9] + 16))(
            (void*)(&var4), v9 + 9, &v15_.v15);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak_alt1(v12);
      }
    }
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  result = *(_QWORD*)(a1 + 144);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v14 = result;
      result = *(_QWORD*)(a1 + 136);
      if (result != 0) {
        result = GameRoutine_18a4fa0(result, (__int64**)a2);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        return std___1___shared_weak_count___release_weak_alt1(v14);
      }
    }
  }
  return result;
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

void FloatingHelp_18acaf0(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  long double v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  int v11;
  int v12;
  __int64* v13;
  _DWORD v14[3];

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = *(_QWORD*)(a1 + 144);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v3),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v5 != 0) {
      v7 = *(_QWORD*)(a1 + 136);
      v8 = v5;
      if (v7 != 0 && ((*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 32LL))(
                          *(_QWORD*)(a1 + 136)) &
                      1) != 0) {
        ui_LayoutAccessor_SetPaneVisible(v7 + 88, (__int64)"L_Cursor",
                                         (a2 & 1) == 0),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
        *(float*)(a1 + 260) = (*(float (**)(__int64))(*(_QWORD*)v7 + 48LL))(v7),
                       v6 = COERCE_AS(__typeof__(v6),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                       v9 = COERCE_AS(__typeof__(v9),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
        *(_DWORD*)(a1 + 264) = v9;
        v10 = (_QWORD*)GameData_212d8a8[0];
        LayoutAccessor_155e830_alt1(*(_QWORD*)GameData_212d8a8[0] + 24LL,
                                    a2 & 1),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
        v11 = *(_DWORD*)(a1 + 260);
        v12 = *(_DWORD*)(a1 + 264);
        v13 = (__int64*)(*v10 + 24LL);
        v14[2] = 0;
        v14[0] = v11;
        v14[1] = v12;
        *(float*)&v6 = ui_LayoutAccessor_SetTranslate_alt1(v13, (__int64)v14),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(v8, v6),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v8),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
  }
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

__int64 FloatingHelp_18ade60(__int64* a1)
{
  __int64 v1;
  __int64 (***v3)(_QWORD);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  char v11;

  v1 = *a1;
  if (*a1 == 0) {
    return v1 & 1;
  }
  v3 = (__int64 (***)(_QWORD))__dynamic_cast(*a1, GameData_21319a0,
                                             GameData_2132090[0], -2);
  if (v3 != nullptr) {
    v4 = a1[1];
    if (v4 == 0) {
      return (**v3)(v3);
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    LOBYTE(v1) = (**v3)(v3);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_21;
    }
    return v1 & 1;
  }
  v5 = __dynamic_cast(v1, GameData_21319a0, GameData_2131a70[0], 0);
  v1 = v5;
  if (v5 == 0) {
    return v1 & 1;
  }
  v4 = a1[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5) & 1) == 0) {
    goto LABEL_19;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL);
  while (1) {
    v6 = *(_QWORD*)(v6 + 24);
    if (v6 == 0) {
      break;
    }
    if ((*(_BYTE*)(v6 + 88) & 1) == 0) {
      goto LABEL_19;
    }
  }
  if (*(_QWORD*)(v1 + 328) == *(_QWORD*)(v1 + 336)) {
  LABEL_19:
    LOBYTE(v1) = 0;
    if (v4 == 0) {
      return v1 & 1;
    }
    goto LABEL_20;
  }
  v11 = 0;
  v9_.v9[0] = GameData_21056a8;
  v9_.v9[1] = &v11;
  v9_.v10 = v9_.v9;
  Element_1885f00(v1, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v8 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_25;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v8))((__int64)v9_.v10);
LABEL_25:
  LOBYTE(v1) = v11;
  if (v4 == 0) {
    return v1 & 1;
  }
LABEL_20:
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
  LABEL_21:
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  return v1 & 1;
}

void FloatingHelp_18ae010(__int64* a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  signed __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = (_QWORD*)a1[1];
  v3 = a1[2];
  if ((unsigned __int64)v2 >= v3) {
    v8 = *a1;
    v9 = (signed __int64)v2 - *a1;
    v10 = v9 >> 4;
    v11 = (v9 >> 4) + 1;
    if (v11 >> 60 != 0) {
      GameRoutine_18883b0_alt1();
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
      GameRoutine_60a210_alt1();
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v13, 16, 0);
    v16 = a2[1];
    v17 = (_QWORD*)(v15 + v9);
    v18 = v15 + 16 * v13;
    *v17 = *a2;
    v17[1] = v16;
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
      v8 = *a1;
      v9 = a1[1] - *a1;
      v10 = v9 >> 4;
    }
    v19 = (__int64)&v17[-2 * v10];
    v7 = v17 + 2;
    memcpy_alt1(v19, v8, v9);
    *a1 = v19;
    a1[1] = (__int64)v7;
    a1[2] = v18;
    if (v8 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v20, v8);
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
  a1[1] = (__int64)v7;
}

void FloatingHelp_18ae160(unsigned int a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                          __int64* a5, long double a6)
{
  __int64 v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float v31;
  int v32;
  unsigned __int32 v33;
  float32x2_t v34;
  float32x2_t v35;
  float32x2_t v36;
  float v37;
  float v38;
  float32x2_t v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    __int64 v43;
    __int64 v44;
  } v43_;
  struct {
    unsigned __int64 v45;
    __int64 v46;
  } v45_;
  struct {
    unsigned __int64 v47;
    __int64 v48;
  } v47_;

  v11 = *(_QWORD*)(*(_QWORD*)a2 + 192LL);
  if (v11 != 0) {
    v12 = *(float*)(v11 + 124);
    v13 = *(float*)(v11 + 140);
    Pane_58dfa0((void*)((float*)&v47_.v47), v11);
    *(float*)&a6 = v12 + *(float*)&v47_.v47;
    v14 = v12 + *(float*)&v47_.v48;
    *(float*)&v47_.v47 = v12 + *(float*)&v47_.v47;
    *((float*)&v47_.v47 + 1) = v13 + *((float*)&v47_.v47 + 1);
    *(float*)&v47_.v48 = v12 + *(float*)&v47_.v48;
    *((float*)&v47_.v48 + 1) = v13 + *((float*)&v47_.v48 + 1);
  }
  else {
    *(_QWORD*)&a6 = 0;
    v14 = 0x0.0p+0f;
    v47_.v47 = 0;
    v47_.v48 = 0;
  }
  v15 = *(_QWORD*)(*a4 + 192LL);
  if (v15 != 0) {
    v16 = *(float*)(v15 + 124);
    v17 = *(float*)(v15 + 140);
    Pane_58dfa0((void*)((float*)&v45_.v45), v15);
    v18 = v16 + *(float*)&v45_.v45;
    v19 = v17 + *((float*)&v45_.v45 + 1);
    *(float*)&v45_.v45 = v16 + *(float*)&v45_.v45;
    *((float*)&v45_.v45 + 1) = v17 + *((float*)&v45_.v45 + 1);
    v20 = v16 + *(float*)&v45_.v46;
    v21 = v17 + *((float*)&v45_.v46 + 1);
    v14 = *(float*)&v47_.v48;
    LODWORD(a6) = v47_.v47;
    *(float*)&v45_.v46 = v16 + *(float*)&v45_.v46;
    *((float*)&v45_.v46 + 1) = v17 + *((float*)&v45_.v46 + 1);
  }
  else {
    v19 = 0x0.0p+0f;
    v21 = 0x0.0p+0f;
    v45_.v45 = 0;
    v45_.v46 = 0;
    v18 = 0x0.0p+0f;
    v20 = 0x0.0p+0f;
  }
  if ((float)(v14 - *(float*)&a6) == 0x0.0p+0f &&
      (float)(*((float*)&v47_.v48 + 1) - *((float*)&v47_.v47 + 1)) ==
          0x0.0p+0f) {
    return;
  }
  *(float*)&a6 = v20 - v18;
  if ((float)(v20 - v18) == 0x0.0p+0f) {
    *(float*)&a6 = v21 - v19;
    if ((float)(v21 - v19) == 0x0.0p+0f) {
      return;
    }
  }
  v22 = a5[1];
  if (v22 == 0 || *(_QWORD*)(v22 + 8) == -1) {
  LABEL_20:
    if (*a3 != 0) {
      v27 = *(_QWORD*)(*a3 + 192LL);
      if (v27 != 0) {
        v28 = *(float*)(v27 + 124);
        v29 = *(float*)(v27 + 140);
        Pane_58dfa0((void*)((float*)&v43_.v43), v27);
        v30 = v28 + *(float*)&v43_.v43;
        v31 = v29 + *((float*)&v43_.v43 + 1);
        *(float*)&v43_.v43 = v28 + *(float*)&v43_.v43;
        *((float*)&v43_.v43 + 1) = v29 + *((float*)&v43_.v43 + 1);
        *(float*)&a6 = v28 + *(float*)&v43_.v44;
        *(float*)&v43_.v44 = v28 + *(float*)&v43_.v44;
        *((float*)&v43_.v44 + 1) = v29 + *((float*)&v43_.v44 + 1);
      }
      else {
        *(_QWORD*)&a6 = 0;
        v31 = 0x0.0p+0f;
        v43_.v43 = 0;
        v43_.v44 = 0;
        v30 = 0x0.0p+0f;
      }
      v32 = *(_DWORD*)(*(_QWORD*)a2 + 1024LL);
      if (v32 != 1) {
        if (v32 != 0) {
          return;
        }
        v33 = v45_.v45;
        LANES64(v34).n64_u64[0] = __PAIR64__(LODWORD(v31), LODWORD(v30));
        LANES64(v35).n64_u64[0] = v47_.v47;
        LANES64(v36).n64_u64[0] = v45_.v45;
        if (a1 != 3) {
          if (a1 == 2) {
            LANES64(v35).n64_u32[0] = v47_.v47;
            LANES64(v34).n64_u32[0] = LODWORD(a6);
            LANES64(v36).n64_u32[0] = v45_.v46;
          }
        LABEL_42:
          *(float32x2_t*)&a6 = vsub_f32(v34, v35);
          LANES64(v39).n64_u64[0] = LANES64_OF(vsub_f32(v36, v35)).n64_u64[0];
          *(float*)&a6 =
              LANES64_OF(vmul_f32(*(float32x2_t*)&a6, *(float32x2_t*)&a6))
                  .n64_f32[1] +
              (float)(*(float*)&a6 * *(float*)&a6);
          if ((float)(LANES64_OF(vmul_f32(v39, v39)).n64_f32[1] +
                      (float)(LANES64(v39).n64_f32[0] *
                              LANES64(v39).n64_f32[0])) >= *(float*)&a6) {
            return;
          }
          goto LABEL_43;
        }
        LANES64(v34).n64_f32[0] = v30;
        LANES64(v35).n64_u32[0] = v47_.v48;
        goto LABEL_38;
      }
      LANES64(v34).n64_u64[0] = __PAIR64__(LODWORD(v31), LODWORD(v30));
      v33 = v45_.v46;
      LANES64(v35).n64_u64[0] = v47_.v47;
      LANES64(v36).n64_u64[0] = v45_.v45;
      if (a1 < 2) {
        v37 = vabds_f32(v30, *(float*)&v47_.v47);
        v38 = vabds_f32(*(float*)&v45_.v45, *(float*)&v47_.v47);
      }
      else {
        if (a1 - 2 > 1) {
          goto LABEL_42;
        }
        v37 = vabds_f32(v31, *((float*)&v47_.v47 + 1));
        v38 = vabds_f32(*((float*)&v45_.v45 + 1), *((float*)&v47_.v47 + 1));
      }
      if (v37 == v38) {
        if (a1 == 3) {
          LANES64(v35).n64_u32[0] = v47_.v48;
          LANES64(v34).n64_f32[0] = v30;
          LANES64(v36).n64_u32[0] = v45_.v45;
          goto LABEL_42;
        }
        if (a1 != 2) {
          goto LABEL_42;
        }
        LANES64(v35).n64_u32[0] = v47_.v47;
        LANES64(v34).n64_u32[0] = LODWORD(a6);
      LABEL_38:
        LANES64(v36).n64_u32[0] = v33;
        goto LABEL_42;
      }
      if (v38 >= v37) {
        return;
      }
    }
  LABEL_43:
    v41 = *a4;
    v40 = a4[1];
    if (v40 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                memory_order_relaxed);
    }
    v42 = a3[1];
    *a3 = v41;
    a3[1] = v40;
    if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v42 + 16LL))(v42, a6);
      std___1___shared_weak_count___release_weak_alt1(v42);
    }
    return;
  }
  v23 = std___1___shared_weak_count_lock_alt1(v22);
  if (v23 == 0) {
    if (*a4 == 0) {
      return;
    }
    goto LABEL_20;
  }
  v24 = *a5;
  v25 = *a4;
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v26 = v23;
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt1(v26);
  }
  if (v25 != v24) {
    goto LABEL_20;
  }
}

__int64 FloatingHelp_18ae4d0(__int64 a1, _QWORD* a2, unsigned int a3)
{
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12[2];
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  if (*a2 != 0) {
    v12[0] = 0;
    v12[1] = 0;
    GameRoutine_18acd40((void*)(&v13_.v13), a1, a2, a3, v12);
    v5 = v13_.v13;
    if (v13_.v13 != 0) {
      if (a3 > 3) {
        v6 = -1;
      }
      else {
        v6 = GameData_1a82b60[a3];
      }
      *(_DWORD*)(a1 + 248) = v6;
      game_sound_PlayCursorHelpSe_alt1();
      v8 = *(_QWORD*)(a1 + 216);
      v7 = *(_QWORD*)(a1 + 224);
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
      }
      v9 = *(_QWORD*)(a1 + 240);
      *(_QWORD*)(a1 + 232) = v8;
      *(_QWORD*)(a1 + 240) = v7;
      if (v9 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v9);
      }
      FloatingHelp_18acc00(a1, &v13_.v13);
      FloatingHelp_18ac620(a1, (__int64)&v13_.v13);
    }
    v10 = v13_.v14;
    if (v13_.v14 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
      if (v5 != 0) {
        return 1;
      }
    }
    else if (v5 != 0) {
      return 1;
    }
  }
  return 0;
}

__int64 FloatingHelp_18ae5e0(__int64 a1, float* a2)
{

#pragma clang fp contract(off)
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
  _QWORD* v21;
  __int64* v22;
  bool v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 (***v28)(_QWORD);
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  struct {
    unsigned __int64 v36;
    __int64 v37;
  } v36_;
  struct {
    unsigned __int64 v38;
    __int64 v39;
  } v38_;

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
  v38_.v38 = __PAIR64__(LODWORD(v9), LODWORD(v6));
  LODWORD(v38_.v39) = 0;
  ui_LayoutAccessor_SetTranslate_alt1(
      (__int64*)(*(_QWORD*)GameData_212d8a8[0] + 24LL), (__int64)&v38_.v38);
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
          v16 = std___1___shared_weak_count_lock_alt1(v15);
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
        std___1___shared_weak_count___release_weak_alt1(v18);
      }
      v10 += 2;
      if (v10 == v11) {
        v34 = 1;
      }
      else {
        v34 = v17;
      }
      if ((v34 & 1) != 0) {
        return 1;
      }
    }
    v21 = *(_QWORD**)(v20 + 24);
    while (1) {
      if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0 &&
          __cxa_guard_acquire_alt2((__int64)v12) != 0) {
        *v13 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
        __cxa_guard_release_alt1((__int64)v12);
      }
      if (v21 != nullptr) {
        v22 = (__int64*)(*(__int64 (**)(_QWORD*))(*v21 + 16LL))(v21);
        if (v22 == v13) {
          break;
        }
        do {
          v22 = (__int64*)*v22;
          v23 = v22 == v13 || v22 == nullptr;
        } while (!v23);
        if (v22 != nullptr) {
          break;
        }
      }
      v21 = (_QWORD*)v21[3];
      if (v21 == nullptr) {
        goto LABEL_66;
      }
    }
    GameRoutine_16d1510_alt1((void*)((__int64*)&v36_.v36));
    v38_.v38 = 0;
    v38_.v39 = 0;
    if (v36_.v37 != 0) {
      v38_.v39 = std___1___shared_weak_count_lock_alt1(v36_.v37);
      if (v38_.v39 != 0) {
        v38_.v38 = v36_.v36;
      }
      if (v36_.v37 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v36_.v37);
      }
      v24 = v38_.v38;
      if (v38_.v38 != 0) {
        if (*(_QWORD*)(a1 + 224) != 0) {
          v25 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 224));
          v24 = v38_.v38;
          if (v25 != 0) {
            v26 = *(_QWORD*)(a1 + 216);
            if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v26 == v24) {
                goto LABEL_63;
              }
            }
            else {
              v27 = v24;
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              std___1___shared_weak_count___release_weak_alt1(v25);
              v23 = v26 == v27;
              v14 = GameData_21319a0;
              if (v23) {
                goto LABEL_63;
              }
            }
            v24 = v38_.v38;
            if (v38_.v38 == 0) {
              goto LABEL_63;
            }
          }
          else if (v38_.v38 == 0) {
            goto LABEL_63;
          }
        }
        v28 = (__int64 (***)(_QWORD))__dynamic_cast(v24, v14,
                                                    GameData_2132090[0], -2);
        if (v28 != nullptr) {
          v29 = v38_.v39;
          if (v38_.v39 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v38_.v39 + 8),
                                      1u, memory_order_relaxed);
          }
          if (((**v28)(v28) & 1) != 0) {
            game_sound_PlayCursorHelpSe_alt1();
            v31 = *(_QWORD*)(a1 + 216);
            v30 = *(_QWORD*)(a1 + 224);
            if (v30 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                                        memory_order_relaxed);
            }
            v32 = *(_QWORD*)(a1 + 240);
            *(_QWORD*)(a1 + 232) = v31;
            *(_QWORD*)(a1 + 240) = v30;
            if (v32 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v32);
            }
            FloatingHelp_18acc00(a1, &v38_.v38);
            FloatingHelp_18ac620_alt1(a1, (__int64*)&v38_.v38);
          }
          if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
            std___1___shared_weak_count___release_weak_alt1(v29);
          }
        }
      }
    }
  LABEL_63:
    v33 = v38_.v39;
    if (v38_.v39 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak_alt1(v33);
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

void FloatingHelp_18aee60(_QWORD* a1, __int64* a2)
{
  int v2;
  __int64 v4;
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
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;

  v4 = a2[1];
  if (v4 != 0) {
    v6 = std___1___shared_weak_count_lock_alt1(v4);
    if (v6 != 0) {
      v7 = *a2;
      v8 = v6;
      if (*a2 != 0) {
        v9 = a1[18];
        if (v9 != 0) {
          v10 = std___1___shared_weak_count_lock_alt1(v9);
          if (v10 != 0) {
            v11 = a1[17];
            v12 = v10;
            if (v11 != 0) {
              v13 = a2[1];
              if (v13 == 0) {
                goto LABEL_14;
              }
              v14 = std___1___shared_weak_count_lock_alt1(v13);
              if (v14 == 0) {
                goto LABEL_14;
              }
              v15 = *a2;
              if (*a2 != 0) {
                v2 = *(_DWORD*)(v15 + 2372);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v16 = v14;
                (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
                std___1___shared_weak_count___release_weak_alt1(v16);
              }
              if (v15 == 0) {
              LABEL_14:
                v2 = 0;
              }
              ui_LayoutAccessor_SetPriority_alt1(v11 + 88, v2 + 1);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
              std___1___shared_weak_count___release_weak_alt1(v12);
            }
          }
        }
        v18 = (__int64*)a1[21];
        v17 = (__int64*)a1[22];
        if (v18 != v17) {
          while (1) {
            v19 = v18[1];
            if (v19 != 0) {
              v20 = std___1___shared_weak_count_lock_alt1(v19);
              if (v20 != 0) {
                v21 = *v18;
                if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v22 = v20;
                  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                  std___1___shared_weak_count___release_weak_alt1(v22);
                }
                if (v7 == v21) {
                  break;
                }
              }
            }
            v18 += 2;
            if (v18 == v17) {
              v18 = v17;
              break;
            }
          }
          v17 = (__int64*)a1[22];
        }
        if (v18 == v17) {
          v23 = a1[23];
          if ((unsigned __int64)v17 >= v23) {
            v25 = a1[21];
            v26 = (char*)v17 - v25;
            v27 = (((__int64)v17 - v25) >> 4) + 1;
            if (v27 >> 60 != 0) {
              GameRoutine_18b0dc0_alt1();
            }
            v28 = v23 - v25;
            v29 = v28 >> 3;
            if (v28 >> 3 <= v27) {
              v29 = v27;
            }
            if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF0LL) {
              v30 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v30 = v29;
            }
            if (v30 >> 60 != 0) {
              GameRoutine_60a210_alt1();
            }
            v31 = fw_memory_g_heap_manager_ptr;
            v32 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v30, 16, 0);
            v33 = &v26[v32];
            v34 = v32 + 16 * v30;
            *(_QWORD*)v33 = v7;
            *((_QWORD*)v33 + 1) = v8;
            v24 = (__int64)&v26[v32 + 16];
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                      memory_order_relaxed);
            v35 = a1[21];
            v36 = a1[22] - v35;
            v37 = &v33[-v36];
            memcpy_alt1((__int64)&v33[-v36], v35, v36);
            a1[21] = v37;
            a1[22] = v24;
            a1[23] = v34;
            if (v35 != 0) {
              v38 = 128;
              if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
                v38 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v31 + v38, v35);
            }
          }
          else {
            *v17 = v7;
            v17[1] = v8;
            v24 = (__int64)(v17 + 2);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                      memory_order_relaxed);
          }
          a1[22] = v24;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
    }
  }
}

_QWORD* FloatingHelp_18af980(__int64 a1, __int64* a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;

  result = (_QWORD*)a2[1];
  if (result != nullptr) {
    result = (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result);
    if (result != nullptr) {
      v5 = *a2;
      v6 = (__int64)result;
      if (*a2 == 0) {
        goto LABEL_34;
      }
      v7 = *(_QWORD**)(a1 + 192);
      v8 = *(_QWORD**)(a1 + 200);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 1), 1u,
                                memory_order_relaxed);
      if (v7 != v8) {
        while (1) {
          result = (_QWORD*)v7[1];
          if (result != nullptr) {
            result =
                (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result);
            if (result != nullptr) {
              v9 = *v7;
              if (atomic_fetch_add((atomic_ullong* volatile)(result + 1),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v10 = (__int64)result;
                (*(void (**)(_QWORD*))(*result + 16LL))(result);
                result =
                    (_QWORD*)std___1___shared_weak_count___release_weak_alt1(
                        v10);
              }
              if (v5 == v9) {
                break;
              }
            }
          }
          v7 += 8;
          if (v7 == v8) {
            v7 = v8;
            break;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v6);
      }
      v11 = *(_QWORD**)(a1 + 200);
      if (v7 == v11) {
        goto LABEL_34;
      }
      if (v7 + 8 == v11) {
        if (v7 != v11) {
          goto LABEL_37;
        }
      LABEL_33:
        *(_QWORD*)(a1 + 200) = v7;
      LABEL_34:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v6);
        }
        return result;
      }
      while (1) {
        v12 = v7[8];
        v13 = v7[9];
        v14 = v7[1];
        v15 = v7;
        v7[8] = 0;
        v7[9] = 0;
        *v7 = v12;
        v7[1] = v13;
        if (v14 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v14);
        }
        v16 = (_QWORD*)v7[6];
        v7[6] = 0;
        if (v7 + 2 == v16) {
          break;
        }
        if (v16 != nullptr) {
          v17 = 40;
        LABEL_27:
          (*(void (**)(__int64))(*v16 + v17))((__int64)v16);
        }
        result = (_QWORD*)v7[14];
        if (result != nullptr) {
          if (v7 + 10 == result) {
            v7[6] = v7 + 2;
            result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(
                *result + 24LL))(result, v7 + 2);
          }
          else {
            v7[6] = result;
            v7[14] = 0;
          }
        }
        else {
          v7[6] = 0;
        }
        v7 += 8;
        if (v15 + 16 == v11) {
          v11 = *(_QWORD**)(a1 + 200);
          if (v7 == v11) {
            goto LABEL_33;
          }
        LABEL_37:
          while (2) {
            v18 = (_QWORD*)*(v11 - 2);
            if (v11 - 6 == v18) {
              v19 = 32;
            LABEL_41:
              (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
            }
            else if (v18 != nullptr) {
              v19 = 40;
              goto LABEL_41;
            }
            result = (_QWORD*)*(v11 - 7);
            if (result != nullptr) {
              result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(
                  (__int64)result);
            }
            v11 -= 8;
            if (v11 == v7) {
              goto LABEL_33;
            }
            continue;
          }
        }
      }
      v17 = 32;
      goto LABEL_27;
    }
  }
  return result;
}

__int64 game_gameui_FloatingHelp_CheckNeedUpdateTargetElement(__int64 result,
                                                              __int64 a2)
{
  unsigned __int8 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 (**v32)();
  __int64 v33;
  char v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  struct {
    __int64 (**v48)();
    __int64 v49;
    _BYTE* v50;
    char gap40_[8];
    __int64 (***v51)();
  } v48_;
  struct {
    __int64* v52;
    __int64 v53;
    _BYTE* v54;
    __int64* v55;
    __int64** v56;
  } v52_;
  struct {
    __int64 v57;
    __int64* v58;
    __int64 v59;
  } v57_;
  _BYTE v60[4];

  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (result == 0) {
    return result;
  }
  v4 = GameData_212d8b0[0];
  v5 = *(_QWORD*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] == 0) {
    return (v5 != 0) & v2;
  }
  v6 = *(_QWORD*)(v5 + 224);
  v7 = a2;
  v8 = result;
  if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
    goto LABEL_50;
  }
  v9 = *(__int64**)(v5 + 168);
  v10 = *(__int64**)(v5 + 176);
  v60[0] = 0;
  v57_.v59 = 0;
  v57_.v57 = (__int64)&v57_.v57;
  v57_.v58 = &v57_.v57;
  if (v9 == v10) {
  LABEL_36:
    v21 = 1;
    goto LABEL_38;
  }
  do {
    v11 = v9[1];
    if (v11 == 0) {
      goto LABEL_7;
    }
    v12 = std___1___shared_weak_count_lock_alt1(v11),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v12 == 0) {
      goto LABEL_7;
    }
    v3 = v12;
    v13 = *v9;
    if (*v9 != 0) {
      v52_.v52 = (__int64*)GameData_2104990;
      v52_.v53 = v5;
      v52_.v54 = v60;
      v52_.v55 = &v57_.v57;
      v52_.v56 = &v52_.v52;
      FloatingHelp_18aed20(v13, (__int64)&v52_.v52),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v52_.v56 == &v52_.v52) {
        v14 = 4;
      }
      else {
        if (v52_.v56 == nullptr) {
          goto LABEL_16;
        }
        v14 = 5;
      }
      ((void (*)(void*))(*v52_.v56)[v14])(v52_.v56),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  LABEL_16:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v3),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  LABEL_7:
    v9 += 2;
  } while (v9 != v10);
  if ((v60[0] & 1) != 0) {
    v46 = 0;
    goto LABEL_39;
  }
  v15 = v57_.v58;
  if (v57_.v58 == &v57_.v57) {
    goto LABEL_36;
  }
  v3 = GameData_21319a0;
  v16 = GameData_2131a70[0];
  while (2) {
    v17 = v15[2];
    if (v17 != 0) {
      v18 = __dynamic_cast(v17, v3, v16, 0),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v18 != 0) {
        v19 = v15[3];
        if (v19 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                    memory_order_relaxed);
        }
        v48_.v48 = GameData_2104a10;
        v48_.v49 = v5;
        v48_.v50 = v60;
        v48_.v51 = &v48_.v48;
        Element_1885f00(v18, (__int64)&v48_.v48),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v48_.v51 == &v48_.v48) {
          v20 = 4;
        LABEL_32:
          ((__int64 (*)(__int64))(*v48_.v51)[v20])((__int64)v48_.v51),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        else if (v48_.v51 != nullptr) {
          v20 = 5;
          goto LABEL_32;
        }
        if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v19),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
      }
    }
    v15 = (__int64*)v15[1];
    if (v15 != &v57_.v57) {
      continue;
    }
    break;
  }
  v21 = v60[0] ^ 1;
LABEL_38:
  v46 = v21;
LABEL_39:
  if (v57_.v59 != 0) {
    v22 = v57_.v58;
    v23 = *(__int64**)(v57_.v57 + 8);
    *(_QWORD*)(*v57_.v58 + 8) = v23;
    *v23 = *v22;
    v57_.v59 = 0;
    if (v22 != &v57_.v57) {
      v24 = fw_memory_g_heap_manager_ptr;
      do {
        v26 = (__int64*)v22[1];
        v3 = v22[3];
        if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          v27 = v22;
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v3),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v22 = v27;
        }
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v24 + v25, (__int64)v22),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v22 = v26;
      } while (v26 != &v57_.v57);
    }
  }
  v4 = GameData_212d8b0[0];
  v7 = a2;
  if ((v46 & 1) != 0) {
  LABEL_50:
    GameRoutine_18ae960((_QWORD*)v5, 1),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  *(_QWORD*)(v5 + 160) = v8;
  v28 = *(_QWORD*)(v7 + 8);
  if (v28 == 0 || *(_QWORD*)(v28 + 8) == -1) {
    v31 = *(_QWORD*)(v5 + 224);
    if (v31 != 0) {
      v32 = *(__int64 (***)(void))(v5 + 216),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                memory_order_relaxed);
      *(_BYTE*)(v5 + 258) = 1;
      if (*(_QWORD*)(v31 + 8) == -1) {
        v2 = 0;
      }
      else {
        v33 = std___1___shared_weak_count_lock_alt1(v31),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v48_.v49 = v33;
        if (v33 != 0) {
          v48_.v48 = v32;
          v35 = v32 != nullptr;
          if (v32 != nullptr) {
            v36 = *(_QWORD*)v4;
            if (*(_QWORD*)v4 != 0) {
              v37 = v33;
              if (*(_QWORD*)(v36 + 152) != 0) {
                v52_.v54 = nullptr;
                v52_.v52 = GameData_212d890[0] + 2;
                LODWORD(v52_.v53) = 44;
                (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                        __int64**))(
                    *(_QWORD*)(v36 + 8) + 16LL))((void*)(&v57_.v57), v36 + 8,
                                                 &v52_.v52),
                    v34 = COERCE_AS(
                        __typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                v34 = 1;
              }
              else {
                v34 = GameRoutine_18afc00(&v48_.v48);
              }
              v33 = v37;
            }
            LOBYTE(v4) = (v36 != 0) & v34;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v45 = v33;
            (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            std___1___shared_weak_count___release_weak_alt1(v45),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
        }
        else {
          v35 = false;
        }
        v2 = v4 & v35;
      }
      std___1___shared_weak_count___release_weak_alt1(v31),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      v2 = 0;
      *(_BYTE*)(v5 + 258) = 1;
    }
  }
  else {
    v52_.v52 = nullptr;
    v29 = std___1___shared_weak_count_lock_alt1(v28),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v52_.v53 = v29;
    if (v29 != 0) {
      v30 = v29;
      v52_.v52 = *(__int64**)v7;
      FloatingHelp_18acc00(v5, &v52_.v52),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v30),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
    else {
      FloatingHelp_18acc00(v5, &v52_.v52),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    *(_BYTE*)(v5 + 258) = 0;
    v38 = *(_QWORD*)(v7 + 8);
    if (v38 != 0 && (v39 = std___1___shared_weak_count_lock_alt1(v38),
                     v48_.v49 = v39, v39 != 0)) {
      v48_.v48 = *(__int64 (***)(void))v7,
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v40 = (char)v48_.v48;
      v41 = v48_.v48 != nullptr;
      if (v48_.v48 != nullptr) {
        v42 = *(_QWORD*)v4;
        if (*(_QWORD*)v4 != 0) {
          v43 = v39;
          if (*(_QWORD*)(v42 + 152) != 0) {
            v52_.v54 = nullptr;
            v52_.v52 = GameData_212d890[0] + 2;
            LODWORD(v52_.v53) = 44;
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, __int64, __int64**))(*(_QWORD*)(v42 + 8) + 16LL))(
                (void*)(&v57_.v57), v42 + 8, &v52_.v52),
                v34 =
                    COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v40 = 1;
          }
          else {
            v40 = GameRoutine_18afc00(&v48_.v48),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          v39 = v43;
        }
        LOBYTE(v3) = (v42 != 0) & v40;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v44 = v39;
        (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v44),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v2 = v3 & v41;
    }
    else {
      v2 = 0;
    }
  }
  return (v5 != 0) & v2;
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

__int64 game_gameui_FloatingHelp_UpdateTargetElements_lambda0_Invoke(__int64 a1,
                                                                     _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 (***v7)(_QWORD);
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;

  v2 = *a2;
  if (*a2 == 0) {
    return 0;
  }
  v5 = __dynamic_cast(*a2, GameData_21319a0, GameData_2132090[0], -2);
  if (v5 == 0) {
    v14 = __dynamic_cast(v2, GameData_21319a0, GameData_2131a70[0], 0);
    if (v14 == 0) {
      return 0;
    }
    v6 = a2[1];
    v15 = (_QWORD*)v14;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 144LL))(v14) & 1) != 0 &&
        ((*(__int64 (**)(_QWORD*))(*v15 + 32LL))(v15) & 1) != 0) {
      v16 = *(_QWORD*)(v15[1] + 24LL);
      while (1) {
        v16 = *(_QWORD*)(v16 + 24);
        if (v16 == 0) {
          break;
        }
        if ((*(_BYTE*)(v16 + 88) & 1) == 0) {
          goto LABEL_34;
        }
      }
      if ((game_gameui_control_18b4050((__int64)v15) & 1) != 0) {
        v24 = *(__int64**)(a1 + 8);
        v25 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v26 = a2[1];
        v25[2] = *a2;
        v25[3] = v26;
        if (v26 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                    memory_order_relaxed);
        }
        v25[1] = v24;
        v27 = *v24;
        *v25 = *v24;
        *(_QWORD*)(v27 + 8) = v25;
        *v24 = (__int64)v25;
        ++v24[2];
      }
    }
    goto LABEL_34;
  }
  v6 = a2[1];
  v7 = (__int64 (***)(_QWORD))v5;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v2 = *a2;
  }
  v8 = *(_QWORD*)(v2 + 320);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v2 + 312);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v28_.v28 = 0;
    v10 = std___1___shared_weak_count_lock_alt1(v8);
    v28_.v29 = v10;
    if (v10 != 0) {
      v28_.v28 = v9;
      if (v9 != 0) {
        v11 = v10;
        v12 = __dynamic_cast(v9, GameData_21319a0, GameData_2132090[0], -2);
        if (v12 != 0) {
          v13 = &v28_.v28;
          v30_.v30 = v12;
          v30_.v31 = v11;
          goto LABEL_21;
        }
      }
    }
  }
  else {
    v28_.v28 = 0;
    v28_.v29 = 0;
  }
  v13 = &v30_.v30;
LABEL_21:
  *v13 = 0;
  v13[1] = 0;
  v17 = v28_.v29;
  if (v28_.v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28_.v29 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  if (((**v7)(v7) & 1) != 0 && v30_.v30 == 0) {
    v18 = *(__int64**)(a1 + 8);
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v20 = a2[1];
    v19[2] = *a2;
    v19[3] = v20;
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
    }
    v19[1] = v18;
    v21 = *v18;
    *v19 = *v18;
    *(_QWORD*)(v21 + 8) = v19;
    *v18 = (__int64)v19;
    ++v18[2];
  }
  v22 = v30_.v31;
  if (v30_.v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30_.v31 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt1(v22);
  }
LABEL_34:
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  return 0;
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

__int64

game_gameui_FloatingHelp_CheckNeedUpdateTargetElement_lambda0_Invoke(__int64 a1,
                                                                     _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 (***v8)(_QWORD);
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
  __int64* v19;
  __int64 result;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int8 v25;
  __int64 v26;
  unsigned int v27;
  __int64* v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;

  v2 = *a2;
  if (*a2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 8);
  v6 = __dynamic_cast(*a2, GameData_21319a0, GameData_2132090[0], -2);
  if (v6 != 0) {
    v7 = a2[1];
    v8 = (__int64 (***)(_QWORD))v6;
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
    v9 = *(_QWORD*)(v4 + 224);
    if (v9 != 0) {
      v10 = std___1___shared_weak_count_lock_alt1(v9);
      v11 = *a2;
      if (v10 != 0) {
        v12 = *(_QWORD*)(v4 + 216);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v11 == v12) {
            goto LABEL_9;
          }
        LABEL_26:
          result = 0;
        LABEL_27:
          if (v7 == 0) {
            return result;
          }
          goto LABEL_49;
        }
        v23 = v10;
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v23);
        if (v11 != v12) {
          goto LABEL_26;
        }
      LABEL_9:
        v13 = *a2;
        v14 = *(_QWORD*)(*a2 + 320LL);
        if (v14 != 0) {
          v15 = *(_QWORD*)(v13 + 312);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                    memory_order_relaxed);
          v33_.v33 = 0;
          v16 = std___1___shared_weak_count_lock_alt1(v14);
          v33_.v34 = v16;
          if (v16 != 0) {
            v33_.v33 = v15;
            if (v15 != 0) {
              v17 = v16;
              v18 = __dynamic_cast(v15, GameData_21319a0, GameData_2132090[0],
                                   -2);
              if (v18 != 0) {
                v19 = &v33_.v33;
                v35_.v35 = v18;
                v35_.v36 = v17;
              LABEL_33:
                *v19 = 0;
                v19[1] = 0;
                v24 = v33_.v34;
                if (v33_.v34 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v33_.v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
                  std___1___shared_weak_count___release_weak_alt1(v24);
                }
                if (v14 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v14);
                }
                v25 = (**v8)(v8);
                result = v25 & (v35_.v35 == 0);
                if ((_DWORD)result == 1) {
                  **(_BYTE**)(a1 + 16) = 1;
                }
                v26 = v35_.v36;
                if (v35_.v36 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v27 = result;
                  (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
                  std___1___shared_weak_count___release_weak_alt1(v26);
                  result = v27;
                  if (v7 == 0) {
                    return result;
                  }
                  goto LABEL_49;
                }
                goto LABEL_27;
              }
            }
          }
        }
        else {
          v33_.v33 = 0;
          v33_.v34 = 0;
        }
        v19 = &v35_.v35;
        goto LABEL_33;
      }
    }
    else {
      v11 = *a2;
    }
    if (v11 != 0) {
      goto LABEL_26;
    }
    goto LABEL_9;
  }
  result = __dynamic_cast(v2, GameData_21319a0, GameData_2131a70[0], 0);
  if (result != 0) {
    v7 = a2[1];
    v21 = (_QWORD*)result;
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 144LL))(result) & 1) !=
            0 &&
        ((*(__int64 (**)(_QWORD*))(*v21 + 32LL))(v21) & 1) != 0) {
      v22 = *(_QWORD*)(v21[1] + 24LL);
      while (1) {
        v22 = *(_QWORD*)(v22 + 24);
        if (v22 == 0) {
          break;
        }
        if ((*(_BYTE*)(v22 + 88) & 1) == 0) {
          goto LABEL_48;
        }
      }
      if ((game_gameui_control_18b4050((__int64)v21) & 1) != 0) {
        v28 = *(__int64**)(a1 + 24);
        v29 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v30 = a2[1];
        v29[2] = *a2;
        v29[3] = v30;
        if (v30 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                    memory_order_relaxed);
        }
        v29[1] = v28;
        v31 = *v28;
        *v29 = *v28;
        *(_QWORD*)(v31 + 8) = v29;
        *v28 = (__int64)v29;
        ++v28[2];
      }
    }
  LABEL_48:
    result = 0;
    if (v7 != 0) {
    LABEL_49:
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v32 = result;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak_alt1(v7);
        return v32;
      }
    }
  }
  return result;
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
