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
__int64 game_gameui_anonymous_ProcGameUIFade_In_alt1(
    __int64 result, unsigned int a2, __int64 a3, unsigned int a4,
    unsigned int a5,
    __int64 a6) __asm__("game_gameui_anonymous_ProcGameUIFade_In");
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
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GameData_205c570[])();
__int64 ProcGameUIFade_15e1b80(__int64 result, int a2, int a3, int a4,
                               __int64 a5);
__int64 GameHr_15e3a40(__int64 result, char, int, __int64, int);
__int64 LayoutAccessor_15636c0_alt1(__int64 result, __int64, char,
                                    float) __asm__("LayoutAccessor_15636c0");
float LayoutAccessor_15638b0(__int64*, char*, char);
unsigned __int64 GameHr_1562680_alt1(unsigned __int64 result, char*,
                                     float) __asm__("GameHr_1562680");
__int64 game_gameui_anonymous_ProcGameUIFade_In(__int64 result, int a2,
                                                __int64 a3, int a4, int a5,
                                                __int64 a6);
_QWORD* GameRoutine_b87b70(_QWORD* result, _QWORD*);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 GameData_21c6978;
void GameRoutine_15e4f00(__int64*, _QWORD*);
void GameRoutine_15e5060(__int64*, _QWORD*);
__int64 ProcGameUIFade_15e1e60(__int64 a1, __int64 a2, __int64 a3);

__int64 game_gameui_anonymous_ProcGameUIFade_In(__int64 result, int a2,
                                                __int64 a3, int a4, int a5,
                                                __int64 a6)
{

#pragma clang fp contract(off)
  int v6;
  __int64 v7;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
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
  int v29;
  int v30;
  int* v31;
  int* v32;
  _DWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _DWORD* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  int* v41;
  int v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int* v55;
  int v56;
  int v57;
  __int64 v58;
  char v59;
  int v60;
  __int64 v61;
  int v62;
  int v63;
  struct {
    _QWORD v66[4];
    _QWORD* v67;
  } v66_;
  struct {
    _BYTE v68[32];
    _BYTE* v69;
  } v68_;

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
      v68_.v69 = v68_.v68;
      (*(void (**)(_QWORD, _BYTE*))(**(_QWORD**)(v11 + 32) + 24LL))(
          *(_QWORD*)(v11 + 32), v68_.v68);
    }
    else {
      v68_.v69 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    }
    a5 = v13;
  }
  else {
    v68_.v69 = nullptr;
  }
  v14 = *(_QWORD*)(v10 + 40);
  v63 = a5;
  if (v14 == 0) {
  LABEL_46:
    v66_.v66[0] = GameData_205c4f0;
    v66_.v66[1] = v10;
    v66_.v67 = v66_.v66;
    ProcGameUIFade_15e32a0(v10, 1, a2, a3, a4, v63, a6, (__int64)v66_.v66,
                           (__int64)v68_.v68);
    if (v66_.v67 == v66_.v66) {
      v35 = 32;
    }
    else {
      if (v66_.v67 == nullptr) {
        goto LABEL_51;
      }
      v35 = 40;
    }
    (*(void (**)(__int64))(*v66_.v67 + v35))((__int64)v66_.v67);
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
    if (v17 == 0 || (v18 = std___1___shared_weak_count_lock_alt1(v17)) == 0) {
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
      std___1___shared_weak_count___release_weak_alt1(v20);
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
    v23 = std___1___shared_weak_count_lock_alt1(v22);
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
      std___1___shared_weak_count___release_weak_alt1(v26);
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
  GameHr_1562680_alt1(v14 + 168, GameData_205c338[*(int*)(v14 + 292)],
                      0x1.0000000000000p+0f);
  v28 = LayoutAccessor_15638b0((__int64*)(v14 + 168), "In", 0);
  LayoutAccessor_15636c0_alt1(v14 + 168, (__int64)"In", 0, v28);
  v29 = *(_DWORD*)(v14 + 296);
  v30 = a3 & 0xFFFFFFFE;
  if ((v29 & 0xFFFFFFFE) == 2) {
    v31 = (int*)GameData_2259528;
    v32 = (int*)GameData_2259530;
    if (GameData_2259530 == GameData_2259528) {
    LABEL_63:
      LODWORD(v34) = -1;
    }
    else {
      v33 = (_DWORD*)(GameData_2259528 + 4);
      v34 = 0;
      while (*(v33 - 1) != *(_DWORD*)(v14 + 288) || *v33 != v29) {
        ++v34;
        v33 += 2;
        if ((GameData_2259530 - GameData_2259528) >> 3 == v34) {
          goto LABEL_63;
        }
      }
    }
    if (v30 == 2) {
      if ((_DWORD)v34 != -1) {
        v37 = (_DWORD*)(GameData_2259528 + 8LL * (int)v34);
        *v37 = *(_DWORD*)(v14 + 288);
        v37[1] = a3;
        v38 = GameData_2259530;
        goto LABEL_88;
      }
    LABEL_67:
      v39 = *(unsigned int*)(v14 + 288) | (unsigned __int64)(a3 << 32);
      if ((unsigned __int64)v32 >= GameData_2259538) {
        v43 = GameData_2259528;
        v44 = (unsigned __int64)v32 - GameData_2259528;
        v45 = ((__int64)v32 - GameData_2259528) >> 3;
        v46 = v45 + 1;
        if ((unsigned __int64)(v45 + 1) >> 61 != 0) {
          GameRoutine_15e3df0_alt1();
        }
        v47 = GameData_2259538 - GameData_2259528;
        v48 = fw_memory_g_heap_manager_ptr;
        if ((GameData_2259538 - GameData_2259528) >> 2 > v46) {
          v46 = v47 >> 2;
        }
        if ((unsigned __int64)v47 >= 0x7FFFFFFFFFFFFFF8LL) {
          v49 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v49 = v46;
        }
        if (v49 != 0) {
          if (v49 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v50 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v49, 16, 0);
        }
        else {
          v50 = 0;
        }
        v51 = v50 + 8 * v49;
        v52 = v50 + v44 - 8 * v45;
        *(_QWORD*)(v50 + v44) = v39;
        v38 = v50 + v44 + 8;
        memcpy_alt1(v52, v43, v44);
        GameData_2259528 = v52;
        GameData_2259530 = v38;
        GameData_2259538 = v51;
        if (v43 != 0) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)v48 + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v48 + v53, v43);
        }
      }
      else {
        *(_QWORD*)v32 = v39;
        v38 = (__int64)(v32 + 2);
      }
      GameData_2259530 = v38;
    LABEL_88:
      v54 = GameData_21c6968;
      v55 = (int*)GameData_2259528;
      if (GameData_2259528 == v38) {
        v56 = 5;
      }
      else {
        v57 = *(_DWORD*)GameData_2259528;
        v56 = *(_DWORD*)(GameData_2259528 + 4);
        do {
          if (*v55 > v57) {
            v56 = v55[1];
            v57 = *v55;
          }
          v55 += 2;
        } while (v55 != (int*)v38);
      }
    LABEL_94:
      v58 = v14 + 368;
      v59 = 1;
      v60 = 1;
    }
    else {
      if ((_DWORD)v34 != -1) {
        v40 = GameData_2259528 + 8LL * (int)v34;
        v41 = (int*)(v40 + 8);
        if (v40 + 8 == GameData_2259530) {
          v32 = (int*)v40;
        }
        else {
          do {
            v42 = v41[1];
            *(v41 - 2) = *v41;
            *(v41 - 1) = v42;
            v41 += 2;
          } while (v41 != v32);
          v32 = v41 - 2;
          v31 = (int*)GameData_2259528;
        }
        GameData_2259530 = (__int64)v32;
      }
      v54 = GameData_21c6968;
      if (v31 != v32) {
        v62 = *v31;
        v56 = v31[1];
        do {
          if (*v31 > v62) {
            v56 = v31[1];
            v62 = *v31;
          }
          v31 += 2;
        } while (v31 != v32);
        goto LABEL_94;
      }
      v56 = *(_DWORD*)(v14 + 296);
      v60 = *(_DWORD*)(v14 + 304);
      v58 = v14 + 368;
      v59 = 0;
    }
    GameHr_15e3a40(v54, v59, v56, v58, v60);
  }
  else if (v30 == 2) {
    v32 = (int*)GameData_2259530;
    goto LABEL_67;
  }
  v61 = *(_QWORD*)(v14 + 8);
  *(_DWORD*)(v14 + 296) = a3;
  if (v61 != 0) {
    while (1) {
      if (*(_BYTE*)v61 == 2) {
        if (*(_DWORD*)(v61 + 32) == 1) {
          *(_QWORD*)(v14 + 16) = v61;
          *(_WORD*)(v14 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v61 == 0) {
        break;
      }
      v61 += 64;
    }
  }
LABEL_51:
  result = (__int64)v68_.v69;
  if (v68_.v69 == v68_.v68) {
    v36 = 32;
    return (*(__int64 (**)(__int64))(*(_QWORD*)v68_.v69 + v36))(
        (__int64)v68_.v69);
  }
  else if (v68_.v69 != nullptr) {
    v36 = 40;
    return (*(__int64 (**)(__int64))(*(_QWORD*)v68_.v69 + v36))(
        (__int64)v68_.v69);
  }
  return result;
}

__int64 ProcGameUIFade_15e1b80(__int64 result, int a2, int a3, int a4,
                               __int64 a5)
{
  int v5;
  __int64 v6;
  _QWORD* v7;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BOOL4 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  struct {
    _BYTE v32[32];
    _BYTE* v33;
  } v32_;

  if ((*(_BYTE*)(result + 152) & 1) != 0) {
    return result;
  }
  v6 = *(_QWORD*)(result + 40);
  v7 = (_QWORD*)result;
  if (a5 != 0) {
    if (v6 != 0) {
      while (*(_QWORD*)(v6 + 280) != a5) {
        v6 = *(_QWORD*)(v6 + 56);
        if (v6 == 0) {
          return result;
        }
      }
      *(_DWORD*)(v6 + 292) = a4;
    LABEL_46:
      *(_DWORD*)(v6 + 300) = 2;
    }
    return result;
  }
  if (v6 != 0) {
    if ((unsigned int)(a3 - 1) >= 2) {
      v10 = a3;
    }
    else {
      v10 = 0;
    }
    do {
      v11 = *(_DWORD*)(v6 + 296);
      v12 = *(_QWORD*)(v6 + 176);
      if (v12 != 0) {
        v13 = std___1___shared_weak_count_lock_alt1(v12);
        if (v13 != 0) {
          v14 = *(_QWORD*)(v6 + 168);
          if (v14 != 0) {
            v5 = *(_DWORD*)(v14 + 2372);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v14 != 0) {
              goto LABEL_19;
            }
          }
          else {
            v15 = v13;
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak_alt1(v15);
            if (v14 != 0) {
            LABEL_19:
              if (v5 != a2) {
                goto LABEL_12;
              }
              goto LABEL_23;
            }
          }
        }
      }
      v5 = 0;
      if (a2 != 0) {
        goto LABEL_12;
      }
    LABEL_23:
      if ((unsigned int)(v11 - 1) >= 2) {
        v16 = v11;
      }
      else {
        v16 = 0;
      }
      if (v16 == v10 && *(_QWORD*)(v6 + 184) != 0) {
        v17 = *(_QWORD*)(v6 + 176);
        if (v17 != 0) {
          result = std___1___shared_weak_count_lock_alt1(v17);
          if (result == 0) {
            goto LABEL_38;
          }
          v18 = *(_QWORD*)(v6 + 168);
          if (v18 != 0) {
            v11 = *(unsigned __int8*)(v18 + 24);
            v19 = v18 + 152;
            if (v11 == 0) {
              v19 = 0;
            }
            v20 = v19 != *(_QWORD*)(v6 + 184);
          }
          else {
            v20 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v21 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            result = std___1___shared_weak_count___release_weak_alt1(v21);
          }
          if (!v20) {
            if ((v11 & 1) != 0) {
              goto LABEL_40;
            }
          }
          else {
          LABEL_38:
            v22 = *(_QWORD*)(v6 + 176);
            if (v22 != 0 && *(_QWORD*)(v22 + 8) != -1) {
            LABEL_40:
              *(_DWORD*)(v6 + 292) = a4;
              goto LABEL_46;
            }
          }
        }
      }
    LABEL_12:
      v6 = *(_QWORD*)(v6 + 56);
    } while (v6 != 0);
  }
  v23 = v7[31];
  if (v23 == 0) {
    v24 = a4;
    goto LABEL_48;
  }
  v24 = a4;
  v25 = *(_QWORD*)(v7[27] + 8 * ((v23 + v7[30] - 1) / 0x55uLL)) +
        48 * ((v23 + v7[30] - 1) % 0x55uLL);
  v26 = *(_QWORD*)(v25 + 32);
  if (v26 == 0) {
  LABEL_48:
    v32_.v33 = nullptr;
    goto LABEL_49;
  }
  if (v26 == v25) {
    v32_.v33 = v32_.v32;
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v26 + 24LL))(v26, v32_.v32);
  }
  else {
    v32_.v33 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
  }
LABEL_49:
  v30_.v30[0] = GameData_205c570;
  v30_.v30[1] = v7;
  v30_.v31 = v30_.v30;
  ProcGameUIFade_15e32a0((__int64)v7, 0, a2, a3, v24, 0, 0, (__int64)v30_.v30,
                         (__int64)v32_.v32);
  if (v30_.v31 == v30_.v30) {
    v27 = 32;
    goto LABEL_53;
  }
  if (v30_.v31 != nullptr) {
    v27 = 40;
  LABEL_53:
    (*(void (**)(__int64))(*v30_.v31 + v27))((__int64)v30_.v31);
  }
  result = (__int64)v32_.v33;
  if (v32_.v33 == v32_.v32) {
    v28 = 32;
  }
  else {
    if (v32_.v33 == nullptr) {
      return result;
    }
    v28 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v32_.v33 + v28))(
      (__int64)v32_.v33);
}

__int64 ProcGameUIFade_15e1e60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64* v4;
  char* v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  __int64* v17;
  __int64 v18;
  char* v19;
  char* v20;
  unsigned __int64 v21;
  signed __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64 v27;
  char* v28;
  char* v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  signed __int64 v43;
  bool v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  signed __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  signed __int64 v58;
  char* v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  char* v66;
  char* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  char* v82;
  char* v83;
  unsigned __int64 v84;
  signed __int64 v85;
  __int64 v86;
  char* v87;
  unsigned __int64 v88;
  __int64* v89;
  __int64 v90;
  char* v91;
  char* v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  char* v99;
  char* v100;
  __int64 v101;
  __int64 v102;
  char* v103;
  __int64 v104;
  signed __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  signed __int64 v110;
  _QWORD* v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  signed __int64 v120;
  char* v121;
  _QWORD* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64* v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  _QWORD* v132;
  __int64* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64* v145;
  __int64* v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 result;
  __int64 v154;
  __int64 v157;
  struct {
    _QWORD v159[4];
    _QWORD* v160;
  } v159_;

  v3 = a2;
  v4 = (__int64*)GameData_2259540;
  if (GameData_2259540 == 0) {
    goto LABEL_172;
  }
  v5 = *(char**)(GameData_2259540 + 168);
  v6 = *(char**)(GameData_2259540 + 176);
  v7 = a1;
  v8 = v6 - v5;
  v9 = (v6 - v5) >> 3;
  if (v6 == v5) {
    v10 = 0;
  }
  else {
    v10 = 17 * (v9 + ((v6 - v5) >> 1)) - 1;
  }
  v11 = *(_QWORD*)(GameData_2259540 + 192);
  if (v10 == *(_QWORD*)(GameData_2259540 + 200) + v11) {
    v12 = v11 >= 0x55;
    v13 = v11 - 85;
    if (v12) {
      *(_QWORD*)(GameData_2259540 + 192) = v13;
      v14 = *(_QWORD*)v5;
      v4[21] = (__int64)(v5 + 8);
      v159_.v159[0] = v14;
    }
    else {
      v15 = *(char**)(GameData_2259540 + 184);
      v16 = *(char**)(GameData_2259540 + 160);
      if (v8 >= v15 - v16) {
        if (v15 == v16) {
          v25 = 1;
        }
        else {
          v25 = (v15 - v16) >> 2;
        }
        if (v25 >> 61 != 0) {
          goto LABEL_183;
        }
        v26 = (__int64*)fw_memory_g_heap_manager_ptr;
        v27 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v25, 16, 0);
        v28 = (char*)(v27 + v8);
        v29 = (char*)(v27 + 8 * v25);
        v30 = fw_memory_HeapManager_Allocate_alt1(*v26, 4080, 16, 0);
        if (v8 == 8 * v25) {
          if (v6 == v5) {
            v34 = v30;
            v35 = fw_memory_g_heap_manager_ptr;
            v28 = (char*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
            v29 = v28 + 8;
            v36 = 128;
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v35 + v36, v27);
            v5 = (char*)v4[21];
            v6 = (char*)v4[22];
            v30 = v34;
            v27 = (__int64)v28;
          }
          else {
            v28 -= 8 * ((v9 + 1 + ((unsigned __int64)(v9 + 1) >> 63)) >> 1);
          }
        }
        v7 = a1;
        *(_QWORD*)v28 = v30;
        v37 = v28 + 8;
        if (v6 != v5) {
          while (1) {
            if (v28 == (char*)v27) {
              if (v37 >= v29) {
                if (v29 == v28) {
                  v46 = 1;
                }
                else {
                  v46 = (v29 - v28) >> 2;
                }
                if (v46 >> 61 != 0) {
                  goto LABEL_183;
                }
                v47 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v46, 16, 0);
                v48 = v47;
                v41 = (char*)(v47 + ((2 * v46 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                v49 = v37 - v28;
                v44 = v37 == v28;
                v37 = v41;
                if (!v44) {
                  v37 = &v41[v49];
                  v50 = (_QWORD*)(v47 + ((2 * v46 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  do {
                    v51 = *(_QWORD*)v28;
                    v28 += 8;
                    v49 -= 8LL;
                    *v50++ = v51;
                  } while (v49 != 0);
                }
                v29 = (char*)(v47 + 8 * v46);
                v52 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v52 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v27);
                v27 = v48;
              }
              else {
                v43 = v37 - v28;
                v45 = v37 - v28;
                v44 = v37 == v28;
                v37 +=
                    8 * ((((v29 - v37) >> 3) + 1 +
                          ((unsigned __int64)(((v29 - v37) >> 3) + 1) >> 63)) >>
                         1);
                v41 = &v37[-v43];
                if (!v44) {
                  memmove((__int64)&v37[-v43], (__int64)v28, v45);
                }
              }
            }
            else {
              v41 = v28;
            }
            v42 = *((_QWORD*)v6 - 1);
            v6 -= 8;
            *((_QWORD*)v41 - 1) = v42;
            v38 = v41 - 8;
            v28 = v38;
            if (v6 == (char*)v4[21]) {
              goto LABEL_31;
            }
          }
        }
        v38 = v28;
      LABEL_31:
        v39 = v4[20];
        v4[22] = (__int64)v37;
        v4[23] = (__int64)v29;
        v3 = a2;
        v4[20] = v27;
        v4[21] = (__int64)v38;
        if (v39 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v39);
        }
        goto LABEL_67;
      }
      v17 = (__int64*)fw_memory_g_heap_manager_ptr;
      v18 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
      if (v15 != v6) {
        v19 = (char*)v4[22];
        if (v19 == (char*)v4[23]) {
          v21 = v4[20];
          v20 = (char*)v4[21];
          if ((unsigned __int64)v20 <= v21) {
            if (v19 == (char*)v21) {
              v56 = 1;
            }
            else {
              v56 = (__int64)&v19[-v21] >> 2;
            }
            if (v56 >> 61 != 0) {
              goto LABEL_183;
            }
            v57 = fw_memory_HeapManager_Allocate_alt1(*v17, 8 * v56, 16, 0);
            v58 = v19 - v20;
            v44 = v19 == v20;
            v59 = (char*)(v57 + 8 * (v56 >> 2));
            v19 = v59;
            if (!v44) {
              v19 = &v59[v58];
              v60 = (_QWORD*)(v57 + 8 * (v56 >> 2));
              do {
                v61 = *(_QWORD*)v20;
                v20 += 8;
                v58 -= 8LL;
                *v60++ = v61;
              } while (v58 != 0);
            }
            v4[20] = v57;
            v4[21] = (__int64)v59;
            v4[22] = (__int64)v19;
            v4[23] = v57 + 8 * v56;
            if (v21 != 0) {
              v62 = 128;
              if (*(_QWORD*)(*v17 + 200) == 0) {
                v62 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v17 + v62, v21);
              v19 = (char*)v4[22];
            }
          }
          else {
            v22 = v19 - v20;
            v23 = ((__int64)&v20[-v21] >> 3) + 1;
            v24 = &v20[-8 * (v23 / 2)];
            if (v19 != v20) {
              memmove((__int64)&v20[-8 * (v23 / 2)], v4[21], v19 - v20);
              v20 = (char*)v4[21];
            }
            v19 = &v24[v22];
            v4[21] = (__int64)&v20[8 * (v23 / -2)];
            v4[22] = (__int64)&v24[v22];
          }
        }
        *(_QWORD*)v19 = v18;
        v4[22] += 8;
        goto LABEL_67;
      }
      v32 = v4[20];
      v31 = (__int64*)v4[21];
      if (v31 == (__int64*)v32) {
        v54 = v4[22];
        v53 = v4[23];
        if (v54 >= v53) {
          v125 = v53 - (_QWORD)v31;
          v44 = v125 == 0;
          v126 = v125 >> 2;
          if (v44) {
            v127 = 1;
          }
          else {
            v127 = v126;
          }
          if (v127 >> 61 != 0) {
            goto LABEL_183;
          }
          v128 = v17;
          v129 = fw_memory_HeapManager_Allocate_alt1(*v17, 8 * v127, 16, 0);
          v130 = v54 - (_QWORD)v31;
          v33 = v129 + ((2 * v127 + 6) & 0xFFFFFFFFFFFFFFF8LL);
          v131 = v33;
          if ((__int64*)v54 != v31) {
            v131 = v33 + v130;
            v132 = (_QWORD*)(v129 + ((2 * v127 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v133 = v31;
            do {
              v134 = *v133++;
              v130 -= 8LL;
              *v132++ = v134;
            } while (v130 != 0);
          }
          v4[20] = v129;
          v4[21] = v33;
          v4[22] = v131;
          v4[23] = v129 + 8 * v127;
          if (v31 != nullptr) {
            v135 = 128;
            if (*(_QWORD*)(*v128 + 200) == 0) {
              v135 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v128 + v135, v32);
            v33 = v4[21];
          }
        }
        else {
          v55 = (((__int64)(v53 - v54) >> 3) + 1) / 2;
          v33 = (unsigned __int64)&v31[v55];
          if ((__int64*)v54 != v31) {
            memmove((__int64)&v31[v55], v4[21], v54 - (_QWORD)v31);
            v54 = v4[22];
          }
          v4[21] = v33;
          v4[22] = v54 + 8 * v55;
        }
      }
      else {
        v33 = v4[21];
      }
      *(_QWORD*)(v33 - 8) = v18;
      v136 = v4[21];
      v4[21] = v136 - 8;
      v137 = *(_QWORD*)(v136 - 8);
      v4[21] = v136;
      v159_.v159[0] = v137;
    }
    GameRoutine_15e4f00(v4 + 20, v159_.v159);
  LABEL_67:
    v5 = (char*)v4[21];
    v6 = (char*)v4[22];
  }
  if (v6 == v5) {
    v64 = 0;
    v65 = *(_QWORD*)(v7 + 32);
    if (v65 != 0) {
    LABEL_70:
      if (v65 == v7) {
        *(_QWORD*)(v64 + 32) = v64;
        (*(void (**)(_QWORD, unsigned __int64))(**(_QWORD**)(v7 + 32) + 24LL))(
            *(_QWORD*)(v7 + 32), v64);
      }
      else {
        *(_QWORD*)(v64 + 32) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
      }
      goto LABEL_75;
    }
  }
  else {
    v63 = v4[25] + v4[24];
    v64 = *(_QWORD*)&v5[8 * (v63 / 0x55)] + 48 * (v63 % 0x55);
    v65 = *(_QWORD*)(v7 + 32);
    if (v65 != 0) {
      goto LABEL_70;
    }
  }
  *(_QWORD*)(v64 + 32) = 0;
LABEL_75:
  v66 = (char*)v4[27];
  v67 = (char*)v4[28];
  v68 = v67 - v66;
  v69 = (v67 - v66) >> 3;
  ++v4[25];
  if (v67 == v66) {
    v70 = 0;
  }
  else {
    v70 = 17 * (v69 + ((v67 - v66) >> 1)) - 1;
  }
  v71 = v4[30];
  if (v70 != v4[31] + v71) {
    v74 = a3;
    if (v67 == v66) {
      goto LABEL_169;
    }
    goto LABEL_83;
  }
  v12 = v71 >= 0x55;
  v72 = v71 - 85;
  if (v12) {
    v4[30] = v72;
    v73 = *(_QWORD*)v66;
    v4[27] = (__int64)(v66 + 8);
    v159_.v159[0] = v73;
    GameRoutine_15e5060(v4 + 26, v159_.v159);
    v74 = a3;
    goto LABEL_168;
  }
  v78 = v4[29];
  v79 = v4[26];
  if (v68 >= v78 - v79) {
    v157 = v3;
    if (v78 == v79) {
      v88 = 1;
    }
    else {
      v88 = (v78 - v79) >> 2;
    }
    if (v88 >> 61 != 0) {
      goto LABEL_183;
    }
    v89 = (__int64*)fw_memory_g_heap_manager_ptr;
    v90 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v88, 16, 0);
    v91 = (char*)(v90 + v68);
    v92 = (char*)(v90 + 8 * v88);
    v93 = fw_memory_HeapManager_Allocate_alt1(*v89, 4080, 16, 0);
    if (v68 == 8 * v88) {
      if (v67 == v66) {
        v97 = v93;
        v91 = (char*)fw_memory_HeapManager_Allocate_alt1(*v89, 8, 16, 0);
        v92 = v91 + 8;
        v98 = 128;
        if (*(_QWORD*)(*v89 + 200) == 0) {
          v98 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v89 + v98, v90);
        v66 = (char*)v4[27];
        v67 = (char*)v4[28];
        v93 = v97;
        v90 = (__int64)v91;
      }
      else {
        v91 -= 8 * ((v69 + 1 + ((unsigned __int64)(v69 + 1) >> 63)) >> 1);
      }
    }
    *(_QWORD*)v91 = v93;
    v99 = v91 + 8;
    if (v67 != v66) {
      while (1) {
        if (v91 == (char*)v90) {
          if (v99 >= v92) {
            if (v92 == v91) {
              v107 = 1;
            }
            else {
              v107 = (v92 - v91) >> 2;
            }
            if (v107 >> 61 != 0) {
              goto LABEL_183;
            }
            v108 = fw_memory_HeapManager_Allocate_alt1(*v89, 8 * v107, 16, 0);
            v109 = v108;
            v103 = (char*)(v108 + ((2 * v107 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v110 = v99 - v91;
            v44 = v99 == v91;
            v99 = v103;
            if (!v44) {
              v99 = &v103[v110];
              v111 = (_QWORD*)(v108 + ((2 * v107 + 6) & 0xFFFFFFFFFFFFFFF8LL));
              do {
                v112 = *(_QWORD*)v91;
                v91 += 8;
                v110 -= 8LL;
                *v111++ = v112;
              } while (v110 != 0);
            }
            v92 = (char*)(v108 + 8 * v107);
            v113 = 128;
            if (*(_QWORD*)(*v89 + 200) == 0) {
              v113 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v89 + v113, v90);
            v90 = v109;
          }
          else {
            v105 = v99 - v91;
            v106 = v99 - v91;
            v44 = v99 == v91;
            v99 += 8 * ((((v92 - v99) >> 3) + 1 +
                         ((unsigned __int64)(((v92 - v99) >> 3) + 1) >> 63)) >>
                        1);
            v103 = &v99[-v105];
            if (!v44) {
              memmove((__int64)&v99[-v105], (__int64)v91, v106);
            }
          }
        }
        else {
          v103 = v91;
        }
        v104 = *((_QWORD*)v67 - 1);
        v67 -= 8;
        *((_QWORD*)v103 - 1) = v104;
        v100 = v103 - 8;
        v91 = v100;
        if (v67 == (char*)v4[27]) {
          goto LABEL_108;
        }
      }
    }
    v100 = v91;
  LABEL_108:
    v101 = v4[26];
    v4[28] = (__int64)v99;
    v4[29] = (__int64)v92;
    v3 = v157;
    v74 = a3;
    v4[26] = v90;
    v4[27] = (__int64)v100;
    if (v101 != 0) {
      v102 = 128;
      if (*(_QWORD*)(*v89 + 200) == 0) {
        v102 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v89 + v102, v101);
    }
  }
  else {
    v80 = (__int64*)fw_memory_g_heap_manager_ptr;
    v81 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
    if ((char*)v78 != v67) {
      v82 = (char*)v4[28];
      if (v82 != (char*)v4[29]) {
      LABEL_143:
        *(_QWORD*)v82 = v81;
        v74 = a3;
        v4[28] += 8;
        goto LABEL_168;
      }
      v84 = v4[26];
      v83 = (char*)v4[27];
      if ((unsigned __int64)v83 > v84) {
        v85 = v82 - v83;
        v86 = ((__int64)&v83[-v84] >> 3) + 1;
        v87 = &v83[-8 * (v86 / 2)];
        if (v82 != v83) {
          memmove((__int64)&v83[-8 * (v86 / 2)], v4[27], v82 - v83);
          v83 = (char*)v4[27];
        }
        v82 = &v87[v85];
        v4[27] = (__int64)&v83[8 * (v86 / -2)];
        v4[28] = (__int64)&v87[v85];
        goto LABEL_143;
      }
      if (v82 == (char*)v84) {
        v118 = 1;
      }
      else {
        v118 = (__int64)&v82[-v84] >> 2;
      }
      if (v118 >> 61 == 0) {
        v119 = fw_memory_HeapManager_Allocate_alt1(*v80, 8 * v118, 16, 0);
        v120 = v82 - v83;
        v44 = v82 == v83;
        v121 = (char*)(v119 + 8 * (v118 >> 2));
        v82 = v121;
        if (!v44) {
          v82 = &v121[v120];
          v122 = (_QWORD*)(v119 + 8 * (v118 >> 2));
          do {
            v123 = *(_QWORD*)v83;
            v83 += 8;
            v120 -= 8LL;
            *v122++ = v123;
          } while (v120 != 0);
        }
        v4[26] = v119;
        v4[27] = (__int64)v121;
        v4[28] = (__int64)v82;
        v4[29] = v119 + 8 * v118;
        if (v84 != 0) {
          v124 = 128;
          if (*(_QWORD*)(*v80 + 200) == 0) {
            v124 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v80 + v124, v84);
          v82 = (char*)v4[28];
        }
        goto LABEL_143;
      }
    LABEL_183:
      GameRoutine_60a210_alt1();
    }
    v95 = v4[26];
    v94 = (__int64*)v4[27];
    if (v94 == (__int64*)v95) {
      v115 = v4[28];
      v114 = v4[29];
      if (v115 >= v114) {
        v138 = v114 - (_QWORD)v94;
        v44 = v138 == 0;
        v139 = v138 >> 2;
        if (v44) {
          v140 = 1;
        }
        else {
          v140 = v139;
        }
        if (v140 >> 61 != 0) {
          goto LABEL_183;
        }
        v141 = fw_memory_HeapManager_Allocate_alt1(*v80, 8 * v140, 16, 0);
        v142 = v115 - (_QWORD)v94;
        v96 = (__int64*)(v141 + ((2 * v140 + 6) & 0xFFFFFFFFFFFFFFF8LL));
        v143 = v141 + 8 * v140;
        v74 = a3;
        v144 = (__int64)v96;
        if ((__int64*)v115 != v94) {
          v144 = (__int64)v96 + v142;
          v145 = v96;
          v146 = v94;
          do {
            v147 = *v146++;
            v142 -= 8LL;
            *v145++ = v147;
          } while (v142 != 0);
        }
        v4[26] = v141;
        v4[27] = (__int64)v96;
        v4[28] = v144;
        v4[29] = v143;
        if (v94 != nullptr) {
          v148 = 128;
          if (*(_QWORD*)(*v80 + 200) == 0) {
            v148 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v80 + v148, v95);
          v96 = (__int64*)v4[27];
        }
      }
      else {
        v116 = (((__int64)(v114 - v115) >> 3) + 1) / 2;
        v96 = &v94[v116];
        if ((__int64*)v115 != v94) {
          memmove((__int64)&v94[v116], v4[27], v115 - (_QWORD)v94);
          v115 = v4[28];
        }
        v117 = v115 + 8 * v116;
        v74 = a3;
        v4[27] = (__int64)v96;
        v4[28] = v117;
      }
    }
    else {
      v74 = a3;
      v96 = (__int64*)v4[27];
    }
    *(v96 - 1) = v81;
    v149 = v4[27];
    v4[27] = v149 - 8;
    v150 = *(_QWORD*)(v149 - 8);
    v4[27] = v149;
    v159_.v159[0] = v150;
    GameRoutine_15e5060(v4 + 26, v159_.v159);
  }
LABEL_168:
  v66 = (char*)v4[27];
  if ((char*)v4[28] == v66) {
  LABEL_169:
    v76 = 0;
    v77 = *(_QWORD*)(v74 + 32);
    if (v77 == 0) {
      goto LABEL_170;
    }
  LABEL_84:
    if (v77 == v74) {
      *(_QWORD*)(v76 + 32) = v76;
      (*(void (**)(_QWORD, unsigned __int64))(**(_QWORD**)(v74 + 32) + 24LL))(
          *(_QWORD*)(v74 + 32), v76);
    }
    else {
      *(_QWORD*)(v76 + 32) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
    }
    goto LABEL_171;
  }
LABEL_83:
  v75 = v4[31] + v4[30];
  v76 = *(_QWORD*)&v66[8 * (v75 / 0x55)] + 48 * (v75 % 0x55);
  v77 = *(_QWORD*)(v74 + 32);
  if (v77 != 0) {
    goto LABEL_84;
  }
LABEL_170:
  *(_QWORD*)(v76 + 32) = 0;
LABEL_171:
  ++v4[31];
LABEL_172:
  v151 = *(_QWORD*)(v3 + 32);
  v152 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  if (v151 != 0) {
    if (v151 == v3) {
      v159_.v160 = v159_.v159;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v151 + 24LL))(v151, v159_.v159);
    }
    else {
      v159_.v160 =
          (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v151 + 16LL))(v151);
    }
  }
  else {
    v159_.v160 = nullptr;
  }
  GameRoutine_b87b70(v159_.v159, (_QWORD*)(v152 + 512));
  result = (__int64)v159_.v160;
  if (v159_.v160 == v159_.v159) {
    v154 = 32;
  }
  else {
    if (v159_.v160 == nullptr) {
      return result;
    }
    v154 = 40;
  }
  return (*(__int64 (**)(__int64))(*v159_.v160 + v154))((__int64)v159_.v160);
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
