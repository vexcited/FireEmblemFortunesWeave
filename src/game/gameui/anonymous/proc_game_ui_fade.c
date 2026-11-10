#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e2de0(_QWORD);
__int64 GameRoutine_15e3040(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_anonymous_ProcGameUIFade_vtable[])();
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcGameUIFade_Destructor(__int64 a1);
__int64 ProcGameUIFade_DeletingDestructor(__int64 a1);
extern __int64 fw_memory_g_heap_manager;
_QWORD* ProcGameUiFade_15e2de0(_QWORD* result);
_QWORD*
ProcGameUiFade_15e3040_alt1(_QWORD* result) __asm__("ProcGameUiFade_15e3040");
__int64 GameRoutine_15e4bb0(_QWORD);
__int64 GameRoutine_15e4cd0(_QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In_closure_Invoke(__int64 a1,
                                                               _BYTE* a2);
__int64 game_gameui_anonymous_ProcGameUIFade_Out_closure_Invoke(__int64 a1,
                                                                _BYTE* a2);
__int64 GameRoutine_15e32a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e3a40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_205c4f0[])();
extern __int64 GameData_21c6968;
extern __int64 GameData_2259528;
extern __int64 GameData_2259530;
extern __int64 GameData_2259538;
extern char* GameData_205c338[2];
float GameRoutine_15638b0(__int64*, __int64, char);
void __attribute__((noreturn)) GameRoutine_15e3df0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In(__int64 result, unsigned int a2,
                                                __int64 a3, unsigned int a4,
                                                unsigned int a5, __int64 a6);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD);
__int64 GameRoutine_15e4620();
__int64 GameRoutine_15e4640();
__int64 GameRoutine_15e4660();
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern _UNKNOWN GameData_2259858;
extern __int64 (*game_gameui_anonymous_GameUIFade_vtable[])();
extern __int64* GameData_212c628;
extern __int64 GameData_205c4b8;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c610;
extern __int64 GameData_22596a0;
extern __int64 GameData_22596a8;
extern __int64 GameData_22596b0;
extern __int64 GameData_22596c0;
extern __int64 GameData_22596d0;
extern __int64 GameData_22596e0;
extern __int64 GameData_22596e8;
extern __int64 GameData_22596f0;
extern __int64 GameData_2259700;
extern __int64 GameData_2259710;
extern __int64 GameData_2259720;
extern __int64 GameData_2259728;
extern __int64 GameData_2259730;
extern __int64 GameData_2259740;
extern __int64 GameData_2259750;
extern __int64 GameData_2259760;
extern __int64 GameData_2259768;
extern __int64 GameData_2259770;
extern __int64 GameData_2259780;
extern __int64 GameData_2259790;
extern __int64 GameData_22597a0;
extern __int64 GameData_22597a8;
extern __int64 GameData_22597b0;
extern __int64 GameData_22597c0;
extern __int64 GameData_22597d0;
extern __int64 GameData_22597e0;
extern __int64 GameData_22597e8;
extern __int64 GameData_22597f0;
extern __int64 GameData_2259800;
extern __int64 GameData_2259810;
extern __int64 GameData_2259820;
extern __int64 GameData_2259828;
extern __int64 GameData_2259830;
extern __int64 GameData_2259840;
extern __int64 GameData_2259850;
extern char* GameData_205c338_alt1[] __asm__("GameData_205c338");
extern char* GameData_205c4d0[];
extern char GameData_2259698;
extern char GameData_22596d8;
extern char GameData_2259718;
extern char GameData_2259758;
extern char GameData_2259798;
extern char GameData_22597d8;
extern char GameData_2259818;
extern int GameData_1be4670[];
extern int GameData_22596b8;
extern int GameData_22596c8;
extern int GameData_22596f8;
extern int GameData_2259708;
extern int GameData_2259738;
extern int GameData_2259748;
extern int GameData_2259778;
extern int GameData_2259788;
extern int GameData_22597b8;
extern int GameData_22597c8;
extern int GameData_22597f8;
extern int GameData_2259808;
extern int GameData_2259838;
extern int GameData_2259848;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcGameUIFade_15e32a0(__int64 a1, char a2, int a3, int a4, int a5,
                               int a6, __int64 a7, __int64 a8, __int64 a9);
__int64 ProcGameUIFade_15e4bb0(_QWORD* a1);
__int64 ProcGameUIFade_15e4cd0(_QWORD* a1);
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_15e3a40_alt1(__int64 result, char, int, __int64,
                                 int) __asm__("GameRoutine_15e3a40");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ui_LayoutAccessor_SetPriority_alt1(__int64 result, int) __asm__(
    "ui_LayoutAccessor_SetPriority");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
extern _UNKNOWN GameData_1be4670_alt1 __asm__("GameData_1be4670");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __attribute__((noreturn))
GameRoutine_15e3df0_alt1() __asm__("GameRoutine_15e3df0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcGameUiFade_15e3040(__int64* a1);

__int64 game_gameui_anonymous_ProcGameUIFade_In(__int64 result, unsigned int a2,
                                                __int64 a3, unsigned int a4,
                                                unsigned int a5, __int64 a6)
{
  int v6;
  __int64 v7;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  __int64 v29;
  int v30;
  int v31;
  int* v32;
  int* v33;
  _DWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  int* v42;
  int v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int* v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  unsigned int v64;
  _QWORD v67[4];
  _QWORD* v68;
  _BYTE v69[32];
  _BYTE* v70;

  if ((*(_BYTE*)(result + 152) & 1) != 0) {
    return result;
  }
  v7 = *(_QWORD*)(result + 248);
  v10 = result;
  if (v7 != 0 &&
      (v11 = *(_QWORD*)(*(_QWORD*)(result + 216) +
                        8 * ((v7 + *(_QWORD*)(result + 240) - 1) / 0x55uLL)) +
             48 * ((v7 + *(_QWORD*)(result + 240) - 1) % 0x55uLL),
       (v12 = *(_QWORD*)(v11 + 32)) != 0)) {
    v13 = a5;
    if (v12 == v11) {
      v70 = v69;
      (*(void (**)(_QWORD, _BYTE*))(**(_QWORD**)(v11 + 32) + 24LL))(
          *(_QWORD*)(v11 + 32), v69);
    }
    else {
      v70 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    }
    a5 = v13;
  }
  else {
    v70 = nullptr;
  }
  v14 = *(_QWORD*)(v10 + 40);
  v64 = a5;
  if (v14 == 0) {
  LABEL_46:
    v67[0] = GameData_205c4f0;
    v67[1] = v10;
    v68 = v67;
    GameRoutine_15e32a0(v10, 1, a2, a3, a4, v64, a6, v67, v69);
    if (v68 == v67) {
      v36 = 32;
    }
    else {
      if (v68 == nullptr) {
        goto LABEL_51;
      }
      v36 = 40;
    }
    (*(void (**)(__int64))(*v68 + v36))((__int64)v68);
    goto LABEL_51;
  }
  if ((unsigned int)(a3 - 1) >= 2) {
    v15 = a3;
  }
  else {
    v15 = 0;
  }
  while (1) {
    v16 = *(_DWORD*)(v14 + 296);
    v17 = *(_QWORD*)(v14 + 176);
    if (v17 == 0 || (v18 = std___1___shared_weak_count_lock(v17)) == 0) {
    LABEL_24:
      v6 = 0;
      if (a2 != 0) {
        goto LABEL_14;
      }
      goto LABEL_25;
    }
    v19 = *(_QWORD*)(v14 + 168);
    if (v19 != 0) {
      v6 = *(_DWORD*)(v19 + 2372);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v19 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v20 = v18;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v20);
      if (v19 == 0) {
        goto LABEL_24;
      }
    }
    if (v6 != a2) {
      goto LABEL_14;
    }
  LABEL_25:
    if ((unsigned int)(v16 - 1) >= 2) {
      v21 = v16;
    }
    else {
      v21 = 0;
    }
    if (v21 != v15) {
      goto LABEL_14;
    }
    if (*(_QWORD*)(v14 + 184) == 0) {
      goto LABEL_14;
    }
    v22 = *(_QWORD*)(v14 + 176);
    if (v22 == 0) {
      goto LABEL_14;
    }
    v23 = std___1___shared_weak_count_lock(v22);
    if (v23 == 0) {
      break;
    }
    v24 = *(_QWORD*)(v14 + 168);
    if (v24 != 0) {
      v16 = *(unsigned __int8*)(v24 + 24);
      v25 = v24 + 152;
      if (v16 == 0) {
        v25 = 0;
      }
      v6 = v25 != *(_QWORD*)(v14 + 184);
    }
    else {
      v6 = 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v6 != 0) {
        break;
      }
    }
    else {
      v26 = v23;
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v26);
      if (v6 != 0) {
        break;
      }
    }
    if ((v16 & 1) != 0) {
      goto LABEL_43;
    }
  LABEL_14:
    v14 = *(_QWORD*)(v14 + 56);
    if (v14 == 0) {
      goto LABEL_46;
    }
  }
  v27 = *(_QWORD*)(v14 + 176);
  if (v27 == 0 || *(_QWORD*)(v27 + 8) == -1) {
    goto LABEL_14;
  }
LABEL_43:
  *(_DWORD*)(v14 + 300) = 0;
  *(_QWORD*)(v14 + 280) = a6;
  LayoutAccessor_1562680(v14 + 168, GameData_205c338[*(int*)(v14 + 292)], 1.0f);
  v28 = GameRoutine_15638b0((__int64*)(v14 + 168), (__int64)"In", 0);
  v29 = LayoutAccessor_15636c0(v14 + 168, "In", 0, v28);
  v30 = *(_DWORD*)(v14 + 296);
  v31 = a3 & 0xFFFFFFFE;
  if ((v30 & 0xFFFFFFFE) == 2) {
    v32 = (int*)GameData_2259528;
    v33 = (int*)GameData_2259530;
    if (GameData_2259530 == GameData_2259528) {
    LABEL_63:
      LODWORD(v35) = -1;
    }
    else {
      v34 = (_DWORD*)(GameData_2259528 + 4);
      v35 = 0;
      while (*(v34 - 1) != *(_DWORD*)(v14 + 288) || *v34 != v30) {
        ++v35;
        v34 += 2;
        if ((GameData_2259530 - GameData_2259528) >> 3 == v35) {
          goto LABEL_63;
        }
      }
    }
    if (v31 == 2) {
      if ((_DWORD)v35 != -1) {
        v38 = (_DWORD*)(GameData_2259528 + 8LL * (int)v35);
        *v38 = *(_DWORD*)(v14 + 288);
        v38[1] = a3;
        v39 = GameData_2259530;
        goto LABEL_88;
      }
    LABEL_67:
      v40 = *(unsigned int*)(v14 + 288) | (unsigned __int64)(a3 << 32);
      if ((unsigned __int64)v33 >= GameData_2259538) {
        v44 = GameData_2259528;
        v45 = (char*)v33 - GameData_2259528;
        v46 = ((__int64)v33 - GameData_2259528) >> 3;
        v47 = v46 + 1;
        if ((unsigned __int64)(v46 + 1) >> 61 != 0) {
          GameRoutine_15e3df0(v29);
        }
        v48 = GameData_2259538 - GameData_2259528;
        v49 = fw_memory_g_heap_manager_ptr;
        if ((GameData_2259538 - GameData_2259528) >> 2 > v47) {
          v47 = v48 >> 2;
        }
        if ((unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFF8LL) {
          v50 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v50 = v47;
        }
        if (v50 != 0) {
          if (v50 >> 61 != 0) {
            GameRoutine_60a210(v29);
          }
          v51 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v50, 16, 0);
        }
        else {
          v51 = 0;
        }
        v52 = v51 + 8 * v50;
        v53 = (__int64)&v45[v51 + -8 * v46];
        *(_QWORD*)&v45[v51] = v40;
        v39 = (__int64)&v45[v51 + 8];
        memcpy(v53, v44, v45);
        GameData_2259528 = v53;
        GameData_2259530 = v39;
        GameData_2259538 = v52;
        if (v44 != 0) {
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v49 + v54);
        }
      }
      else {
        *(_QWORD*)v33 = v40;
        v39 = (__int64)(v33 + 2);
      }
      GameData_2259530 = v39;
    LABEL_88:
      v55 = GameData_21c6968;
      v56 = (int*)GameData_2259528;
      if (GameData_2259528 == v39) {
        v57 = 5;
      }
      else {
        v58 = *(_DWORD*)GameData_2259528;
        v57 = *(unsigned int*)(GameData_2259528 + 4);
        do {
          if (*v56 > v58) {
            v57 = (unsigned int)v56[1];
            v58 = *v56;
          }
          v56 += 2;
        } while (v56 != (int*)v39);
      }
    LABEL_94:
      v59 = v14 + 368;
      v60 = 1;
      v61 = 1;
    }
    else {
      if ((_DWORD)v35 != -1) {
        v41 = GameData_2259528 + 8LL * (int)v35;
        v42 = (int*)(v41 + 8);
        if (v41 + 8 == GameData_2259530) {
          v33 = (int*)v41;
        }
        else {
          do {
            v43 = v42[1];
            *(v42 - 2) = *v42;
            *(v42 - 1) = v43;
            v42 += 2;
          } while (v42 != v33);
          v33 = v42 - 2;
          v32 = (int*)GameData_2259528;
        }
        GameData_2259530 = (__int64)v33;
      }
      v55 = GameData_21c6968;
      if (v32 != v33) {
        v63 = *v32;
        v57 = (unsigned int)v32[1];
        do {
          if (*v32 > v63) {
            v57 = (unsigned int)v32[1];
            v63 = *v32;
          }
          v32 += 2;
        } while (v32 != v33);
        goto LABEL_94;
      }
      v57 = *(unsigned int*)(v14 + 296);
      v61 = *(unsigned int*)(v14 + 304);
      v59 = v14 + 368;
      v60 = 0;
    }
    GameRoutine_15e3a40(v55, v60, v57, v59, v61);
  }
  else if (v31 == 2) {
    v33 = (int*)GameData_2259530;
    goto LABEL_67;
  }
  v62 = *(_QWORD*)(v14 + 8);
  *(_DWORD*)(v14 + 296) = a3;
  if (v62 != 0) {
    while (1) {
      if (*(_BYTE*)v62 == 2) {
        if (*(_DWORD*)(v62 + 32) == 1) {
          *(_QWORD*)(v14 + 16) = v62;
          *(_WORD*)(v14 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v62 == 0) {
        break;
      }
      v62 += 64;
    }
  }
LABEL_51:
  result = (__int64)v70;
  if (v70 == v69) {
    v37 = 32;
    return (*(__int64 (**)(__int64))(*(_QWORD*)v70 + v37))((__int64)v70);
  }
  else if (v70 != nullptr) {
    v37 = 40;
    return (*(__int64 (**)(__int64))(*(_QWORD*)v70 + v37))((__int64)v70);
  }
  return result;
}

__int64 ProcGameUIFade_Destructor(__int64 a1)
{
  *(_QWORD*)a1 = game_gameui_anonymous_ProcGameUIFade_vtable;
  GameRoutine_15e2de0(a1 + 208);
  GameRoutine_15e3040(a1 + 160);
  GameData_2259540 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcGameUIFade_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_gameui_anonymous_ProcGameUIFade_vtable;
  GameRoutine_15e2de0(a1 + 208);
  GameRoutine_15e3040(a1 + 160);
  GameData_2259540 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

_QWORD* ProcGameUiFade_15e2de0(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = (_QWORD*)result[1];
  v2 = (_QWORD*)result[2];
  v3 = result;
  if (v2 == v1) {
    v4 = result + 5;
    v2 = (_QWORD*)result[1];
    goto LABEL_14;
  }
  v4 = result + 5;
  v5 = result[4];
  v6 = &v1[v5 / 0x55];
  v7 = *v6;
  v8 = *v6 + 48 * (v5 % 0x55);
  v9 = v1[(result[5] + v5) / 0x55] + 48 * ((result[5] + v5) % 0x55);
  if (v8 != v9) {
    while (1) {
      result = *(_QWORD**)(v8 + 32);
      if (result == (_QWORD*)v8) {
        break;
      }
      if (result != nullptr) {
        v10 = 40;
      LABEL_9:
        result = (_QWORD*)(*(__int64 (**)(void*))(*result + v10))(result);
        v7 = *v6;
      }
      v8 += 48LL;
      if (v8 - v7 == 4080) {
        v11 = v6[1];
        ++v6;
        v7 = v11;
        v8 = v11;
      }
      if (v8 == v9) {
        v1 = (_QWORD*)v3[1];
        v2 = (_QWORD*)v3[2];
        goto LABEL_14;
      }
    }
    v10 = 32;
    goto LABEL_9;
  }

LABEL_14:
  *v4 = 0;
  v12 = v2 - v1;
  if (v12 >= 3) {
    v13 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v14, *v1);
        v1 = (_QWORD*)v3[1];
        v2 = (_QWORD*)v3[2];
      }
      v3[1] = ++v1;
      v12 = v2 - v1;
    } while (v12 > 2);
  }
  if (v12 == 1) {
    v15 = 42;
  }
  else {
    if (v12 != 2) {
      goto LABEL_27;
    }
    v15 = 85;
  }
  v3[4] = v15;

LABEL_27:
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(
            fw_memory_g_heap_manager + v16, *v1);
      }
      ++v1;
    } while (v1 != v2);
    v17 = v3[2];
    v18 = v3[1] - v17;
    if (v18 != 0) {
      v3[2] = v17 + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (*v3 != 0) {
    v19 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v19 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        fw_memory_g_heap_manager + v19, *v3);
  }
  return result;
}

void ProcGameUiFade_15e3040(__int64* a1)
{
  __int64* v1;
  __int64* v2;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = (__int64*)a1[1];
  v2 = (__int64*)a1[2];
  if (v2 == v1) {
    v4 = a1 + 5;
    v2 = (__int64*)a1[1];
    goto LABEL_14;
  }
  v4 = a1 + 5;
  v5 = a1[4];
  v6 = &v1[v5 / 0x55];
  v7 = *v6;
  v8 = *v6 + 48 * (v5 % 0x55);
  v9 = v1[(a1[5] + v5) / 0x55] + 48 * ((a1[5] + v5) % 0x55);
  if (v8 != v9) {
    while (1) {
      v10 = *(_QWORD**)(v8 + 32);
      if (v10 == (_QWORD*)v8) {
        break;
      }
      if (v10 != nullptr) {
        v11 = 40;
      LABEL_9:
        (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
        v7 = *v6;
      }
      v8 += 48LL;
      if (v8 - v7 == 4080) {
        v12 = v6[1];
        ++v6;
        v7 = v12;
        v8 = v12;
      }
      if (v8 == v9) {
        v1 = (__int64*)a1[1];
        v2 = (__int64*)a1[2];
        goto LABEL_14;
      }
    }
    v11 = 32;
    goto LABEL_9;
  }
LABEL_14:
  *v4 = 0;
  v13 = v2 - v1;
  if (v13 >= 3) {
    v14 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v14 + v15, *v1);
        v1 = (__int64*)a1[1];
        v2 = (__int64*)a1[2];
      }
      a1[1] = (__int64)++v1;
      v13 = v2 - v1;
    } while (v13 > 2);
  }
  if (v13 == 1) {
    v16 = 42;
  }
  else {
    if (v13 != 2) {
      goto LABEL_27;
    }
    v16 = 85;
  }
  a1[4] = v16;
LABEL_27:
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v17, *v1);
      }
      ++v1;
    } while (v1 != v2);
    v18 = a1[2];
    v19 = a1[1] - v18;
    if (v19 != 0) {
      a1[2] = v18 + ((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (*a1 != 0) {
    v20 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v20, *a1);
  }
}

__int64 ProcGameUIFade_15e32a0(__int64 a1, char a2, int a3, int a4, int a5,
                               int a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char** v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 result;
  __int64* v56;
  struct {
    __int64 v58;
    __int64 v59;
  } v58_;
  struct {
    _QWORD v60[6];
    int v61;
    char gap84_[4];
    __int64 v62;
    __int64 v63;
    __int64 v64;
  } v60_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259858,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_2259858) != 0) {
    GameData_2259698 = 15;
    GameData_2259798 = 15;
    GameData_22596a0 = 0;
    GameData_22596a8 = (__int64)GameRoutine_15e4620;
    GameData_2259718 = 14;
    GameData_22596b0 = 0;
    GameData_22596b8 = 0;
    GameData_22596c0 = 0;
    GameData_22596c8 = 0;
    GameData_22596d0 = 0;
    GameData_22596e0 = 0;
    GameData_22596e8 = 0;
    GameData_22596f0 = 0;
    GameData_22597a0 = 0;
    GameData_22597a8 = (__int64)GameRoutine_15e4640;
    GameData_22596d8 = 2;
    GameData_22596f8 = 1;
    GameData_2259700 = 0;
    GameData_2259708 = 0;
    GameData_2259710 = 0;
    GameData_2259720 = 0;
    GameData_2259728 = 16;
    GameData_2259730 = 1;
    GameData_2259738 = 0;
    GameData_2259740 = 0;
    GameData_2259748 = 0;
    GameData_22597d8 = 13;
    GameData_2259750 = 0;
    GameData_2259758 = 2;
    GameData_2259768 = 0;
    GameData_2259770 = 0;
    GameData_2259760 = 0;
    GameData_2259778 = 2;
    GameData_2259780 = 0;
    GameData_2259788 = 0;
    GameData_2259790 = 0;
    GameData_22597b0 = 0;
    GameData_22597b8 = 0;
    GameData_22597c0 = 0;
    GameData_22597c8 = 0;
    GameData_22597d0 = 0;
    GameData_22597e0 = 0;
    GameData_22597e8 = (__int64)GameRoutine_15e4660;
    GameData_22597f0 = 0;
    GameData_22597f8 = 0;
    GameData_2259800 = 0;
    GameData_2259808 = 0;
    GameData_2259810 = 0;
    GameData_2259818 = 0;
    GameData_2259840 = 0;
    GameData_2259848 = 0;
    GameData_2259850 = 0;
    GameData_2259838 = 0;
    GameData_2259828 = 0;
    GameData_2259830 = 0;
    GameData_2259820 = 0;
    __cxa_guard_release_alt1((__int64)&GameData_2259858);
  }
  v16 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 416, 16, 0);
  v17 = GameData_212c608[0];
  *(_QWORD*)(v16 + 96) = 0;
  *(_QWORD*)(v16 + 104) = 0;
  *(_QWORD*)(v16 + 112) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_QWORD*)(v16 + 128) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = "NULL";
  *(_QWORD*)(v16 + 138) = 0;
  *(_QWORD*)(v16 + 144) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 88) = 0;
  *(_QWORD*)v16 = v17 + 16;
  *(_QWORD*)(v16 + 8) = 0;
  v56 = (__int64*)(v16 + 8);
  game_ProcInst_Register_alt1(v16);
  v18 = *(_QWORD*)(a8 + 32);
  *(_QWORD*)(v16 + 168) = 0;
  *(_QWORD*)(v16 + 152) = 0;
  *(_QWORD*)(v16 + 160) = 0;
  *(_QWORD*)(v16 + 176) = 0;
  *(_QWORD*)(v16 + 184) = 0;
  *(_QWORD*)(v16 + 208) = 0;
  *(_QWORD*)(v16 + 216) = 0;
  *(_QWORD*)(v16 + 224) = 0;
  *(_QWORD*)(v16 + 232) = 0;
  *(_QWORD*)(v16 + 240) = 0;
  *(_QWORD*)(v16 + 256) = 0;
  *(_QWORD*)(v16 + 264) = 0;
  *(_QWORD*)v16 = game_gameui_anonymous_GameUIFade_vtable;
  *(_QWORD*)(v16 + 200) = 0;
  *(_BYTE*)(v16 + 272) = a2 & 1;
  *(_QWORD*)(v16 + 280) = a7;
  *(_DWORD*)(v16 + 288) = a3;
  *(_DWORD*)(v16 + 292) = a5;
  *(_DWORD*)(v16 + 296) = a4;
  *(_DWORD*)(v16 + 300) = 0;
  *(_DWORD*)(v16 + 304) = a6;
  *(_QWORD*)(v16 + 192) = v16 + 200;
  *(_DWORD*)(v16 + 248) = 1065353216;
  if (v18 != 0) {
    if (v18 == a8) {
      *(_QWORD*)(v16 + 352) = v16 + 320;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 24LL))(v18);
    }
    else {
      *(_QWORD*)(v16 + 352) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    }
  }
  else {
    *(_QWORD*)(v16 + 352) = 0;
  }
  v19 = (__int64*)fw_memory_g_heap_manager_ptr;
  v20 = *(_QWORD*)(a9 + 32);
  if (v20 != 0) {
    if (v20 == a9) {
      *(_QWORD*)(v16 + 400) = v16 + 368;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 24LL))(v20, v16 + 368);
    }
    else {
      *(_QWORD*)(v16 + 400) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    }
  }
  else {
    *(_QWORD*)(v16 + 400) = 0;
  }
  v21 = *(_QWORD*)(v16 + 352);
  LOBYTE(v60_.v60[0]) = 1;
  if (v21 == 0) {
    GameRoutine_60a310_alt1();
  }
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v21 + 48LL))(v21, v60_.v60);
  memset(&v60_.v60[3], 0, 24);
  v60_.v62 = 0;
  v60_.v63 = 0;
  v60_.v64 = 0;
  v60_.v61 = 0;
  v60_.v60[0] = 0x800000018LL;
  v60_.v60[1] = 0x500000050LL;
  v60_.v60[2] = 0x100000;
  game_1366bd0((void*)(&v58_.v58), (__int64)"Layout/Common.arc",
               (__int64)"Common_Fade", (__int64)v60_.v60);
  v22 = v58_.v58;
  v23 = v58_.v59;
  v24 = *(_QWORD*)(v16 + 160);
  v58_.v58 = 0;
  v58_.v59 = 0;
  *(_QWORD*)(v16 + 152) = v22;
  *(_QWORD*)(v16 + 160) = v23;
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak_alt1(v24);
  }
  v25 = v58_.v59;
  if (v58_.v59 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58_.v59 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak_alt1(v25);
  }
  *(_BYTE*)(*(_QWORD*)(v16 + 152) + 2369LL) = 0;
  v26 = *(_QWORD*)(v16 + 160);
  v58_.v58 = *(_QWORD*)(v16 + 152);
  v58_.v59 = v26;
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1((_QWORD*)(v16 + 168), &v58_.v58);
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak_alt1(v26);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1((_QWORD*)(v16 + 168), &v58_.v58);
  }
  ui_LayoutAccessor_SetPriority_alt1(v16 + 168, *(_DWORD*)(v16 + 288));
  LayoutAccessor_155e830_alt1(v16 + 168, 1);
  GameHr_1562680(v16 + 168,
                 (const char*)&GameData_1be4670_alt1 +
                     *((int*)&GameData_1be4670_alt1 + *(int*)(v16 + 296)),
                 0x1.0000000000000p+0f);
  if (*(_BYTE*)(v16 + 272) != 0) {
    v27 = GameData_205c338_alt1;
  }
  else {
    v27 = GameData_205c4d0;
  }
  GameHr_1562680(v16 + 168, v27[*(int*)(v16 + 292)], 0x1.0000000000000p+0f);
  v28 = *(unsigned int*)(v16 + 296);
  if ((v28 & 0xFFFFFFFE) == 2) {
    if ((*(_BYTE*)(v16 + 272) & 1) != 0) {
      v29 = *(unsigned int*)(v16 + 288) | (unsigned __int64)(v28 << 32);
      v30 = GameData_2259530;
      if (GameData_2259530 >= (unsigned __int64)GameData_2259538) {
        v34 = GameData_2259528;
        v35 = GameData_2259530 - GameData_2259528;
        v36 = (GameData_2259530 - GameData_2259528) >> 3;
        v37 = v36 + 1;
        if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
          GameRoutine_15e3df0_alt1();
        }
        v38 = GameData_2259538 - GameData_2259528;
        if ((GameData_2259538 - GameData_2259528) >> 2 > v37) {
          v37 = v38 >> 2;
        }
        if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
          v39 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v39 = v37;
        }
        if (v39 != 0) {
          if (v39 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v40 = fw_memory_HeapManager_Allocate_alt1(*v19, 8 * v39, 16, 0);
        }
        else {
          v40 = 0;
        }
        v41 = v40 + 8 * v39;
        v42 = v40 + v35 - 8 * v36;
        *(_QWORD*)(v40 + v35) = v29;
        v31 = v40 + v35 + 8;
        memcpy_alt1(v42, v34, v35);
        GameData_2259528 = v42;
        GameData_2259530 = v31;
        GameData_2259538 = v41;
        if (v34 != 0) {
          v43 = 128;
          if (*(_QWORD*)(*v19 + 200) == 0) {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v19 + v43, v34);
        }
      }
      else {
        *(_QWORD*)GameData_2259530 = v29;
        v31 = v30 + 8;
      }
      GameData_2259530 = v31;
      v33 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628);
      if ((*(_BYTE*)(v16 + 272) & 1) != 0) {
        v44 = (int*)GameData_2259528;
        if (GameData_2259528 == v31) {
          LODWORD(v28) = 5;
        }
        else {
          v45 = *(_DWORD*)GameData_2259528;
          LODWORD(v28) = *(_DWORD*)(GameData_2259528 + 4);
          do {
            if (*v44 > v45) {
              LODWORD(v28) = v44[1];
              v45 = *v44;
            }
            v44 += 2;
          } while (v44 != (int*)v31);
        }
        v32 = 1;
      }
      else {
        LODWORD(v28) = *(_DWORD*)(v16 + 296);
        v32 = 0;
      }
    }
    else {
      v32 = 0;
      v33 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628);
    }
    GameRoutine_15e3a40_alt1(v33, v32, v28, v16 + 368, *(_DWORD*)(v16 + 304));
  }
  if ((*(_BYTE*)(v16 + 272) & 1) == 0) {
    v46 = *v56;
    if (*v56 != 0) {
      while (1) {
        if (*(_BYTE*)v46 == 2) {
          if (*(_DWORD*)(v46 + 32) == 2) {
            *(_QWORD*)(v16 + 16) = v46;
            *(_WORD*)(v16 + 136) &= ~0x80u;
            v47 = v60_.v62;
            if (v60_.v62 == 0) {
              goto LABEL_76;
            }
            goto LABEL_63;
          }
        }
        else if (*(_BYTE*)v46 == 0) {
          break;
        }
        v46 += 64;
      }
    }
  }
  v47 = v60_.v62;
  if (v60_.v62 == 0) {
    goto LABEL_76;
  }
LABEL_63:
  v48 = v60_.v63;
  if (v47 == v60_.v63) {
    goto LABEL_73;
  }
  v49 = v60_.v63;
  do {
    v50 = *(_BYTE*)(v49 - 24);
    v49 -= 24;
    if ((v50 & 1) != 0) {
      v51 = *(_QWORD*)(v48 - 8);
      if (v51 != 0) {
        if (*(_QWORD*)(*v19 + 200) != 0) {
          v52 = 128;
        }
        else {
          v52 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v19 + v52, v51);
      }
    }
    v48 = v49;
  } while (v49 != v47);
  v60_.v63 = v47;
  v47 = v60_.v62;
  if (v60_.v62 != 0) {
  LABEL_73:
    v53 = 128;
    if (*(_QWORD*)(*v19 + 200) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v19 + v53, v47);
  }
LABEL_76:
  v54 = *(_QWORD*)(a1 + 40);
  if (v54 != 0) {
    *(_QWORD*)(v54 + 48) = v16;
    *(_QWORD*)(v16 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v16;
  *(_QWORD*)(v16 + 24) = "GameUIFade";
  *(_QWORD*)(v16 + 32) = a1;
  *(_DWORD*)(v16 + 140) = (unsigned int)game_HashString32_alt1("GameUIFade");
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 24;
  *(_QWORD*)(v16 + 80) = 1;
  *(_QWORD*)(v16 + 8) = &GameData_2259698;
  *(_QWORD*)(v16 + 16) = &GameData_2259698;
  (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 136LL))(v16);
  if ((result & 1) != 0 && (*(_WORD*)(v16 + 136) & 0x100) == 0) {
    *(_WORD*)(v16 + 136) |= 0x100u;
  }
  return result;
}

__int64 game_gameui_anonymous_ProcGameUIFade_In_closure_Invoke(__int64 a1,
                                                               _BYTE* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8);
  if (*a2 == 1) {
    return GameRoutine_15e4bb0(v2);
  }
  else {
    return GameRoutine_15e4cd0(v2);
  }
}

__int64 ProcGameUIFade_15e4bb0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  struct {
    _BYTE v6[32];
    _BYTE* v7;
  } v6_;
  char v8;

  result = a1[5];
  if (result == 0 || (result = __dynamic_cast(result, GameData_212c610,
                                              &GameData_205c4b8, 0)) == 0) {
    v3 = a1[25];
    if (v3 != 0) {
      v4 = *(_QWORD*)(a1[21] + 8 * ((v3 + a1[24] - 1) / 0x55uLL)) +
           48 * ((v3 + a1[24] - 1) % 0x55uLL);
      result = *(_QWORD*)(v4 + 32);
      if (result != 0) {
        if (result == v4) {
          v6_.v7 = v6_.v6;
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)result + 24LL))(result,
                                                                   v6_.v6);
          result = (__int64)v6_.v7;
          if (v6_.v7 == nullptr) {
            return result;
          }
        }
        else {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          v6_.v7 = (_BYTE*)result;
          if (result == 0) {
            return result;
          }
        }
        v8 = 1;
        (*(void (**)(__int64, char*))(*(_QWORD*)result + 48LL))(result, &v8);
        result = (__int64)v6_.v7;
        if (v6_.v7 == v6_.v6) {
          v5 = 32;
        }
        else {
          if (v6_.v7 == nullptr) {
            return result;
          }
          v5 = 40;
        }
        return (*(__int64 (**)(__int64))(*(_QWORD*)v6_.v7 + v5))(
            (__int64)v6_.v7);
      }
    }
  }
  return result;
}

__int64 ProcGameUIFade_15e4cd0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _BYTE v7[32];
    _BYTE* v8;
  } v7_;
  char v9;

  result = a1[5];
  if (result == 0 || (result = __dynamic_cast(result, GameData_212c610,
                                              &GameData_205c4b8, 0)) == 0) {
    v3 = a1[25];
    if (v3 != 0) {
      v4 = *(_QWORD*)(a1[21] + 8 * ((v3 + a1[24] - 1) / 0x55uLL)) +
           48 * ((v3 + a1[24] - 1) % 0x55uLL);
      result = *(_QWORD*)(v4 + 32);
      if (result != 0) {
        if (result == v4) {
          v7_.v8 = v7_.v7;
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)result + 24LL))(result,
                                                                   v7_.v7);
          result = (__int64)v7_.v8;
          if (v7_.v8 == nullptr) {
            return result;
          }
        }
        else {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          v7_.v8 = (_BYTE*)result;
          if (result == 0) {
            return result;
          }
        }
        v5 = *(_QWORD*)result;
        v9 = 0;
        (*(void (**)(__int64, char*))(v5 + 48))(result, &v9);
        result = (__int64)v7_.v8;
        if (v7_.v8 == v7_.v7) {
          v6 = 32;
        }
        else {
          if (v7_.v8 == nullptr) {
            return result;
          }
          v6 = 40;
        }
        return (*(__int64 (**)(__int64))(*(_QWORD*)v7_.v8 + v6))(
            (__int64)v7_.v8);
      }
    }
  }
  return result;
}

__int64 game_gameui_anonymous_ProcGameUIFade_Out_closure_Invoke(__int64 a1,
                                                                _BYTE* a2)
{
  _QWORD* v2;

  v2 = *(_QWORD**)(a1 + 8);
  if (*a2 == 1) {
    return GameRoutine_15e4bb0(v2);
  }
  else {
    return GameRoutine_15e4cd0(v2);
  }
}

#pragma GCC visibility pop
