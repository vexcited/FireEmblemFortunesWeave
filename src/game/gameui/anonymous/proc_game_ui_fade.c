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
_QWORD* ProcGameUiFade_15e3040(_QWORD* result);
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

_QWORD* ProcGameUiFade_15e3040(_QWORD* result)
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

__int64 ProcGameUIFade_15e32a0(__int64 a1, char a2, int a3, int a4, int a5,
                               int a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  long double v28;
  char** v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int* v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 result;
  __int64* v59;
  __int64 v61;
  __int64 v62;
  _QWORD v63[6];
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259858,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2259858) != 0) {
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
    __cxa_guard_release(&GameData_2259858);
  }
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       416, 16, 0);
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
  v59 = (__int64*)(v16 + 8);
  game_ProcInst_Register(v16);
  v19 = *(_QWORD*)(a8 + 32);
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
  if (v19 != 0) {
    if (v19 == a8) {
      *(_QWORD*)(v16 + 352) = v16 + 320;
      (*(void (**)(__int64))(*(_QWORD*)v19 + 24LL))(v19);
    }
    else {
      *(_QWORD*)(v16 + 352) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    }
  }
  else {
    *(_QWORD*)(v16 + 352) = 0;
  }
  v20 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v21 = *(_QWORD*)(a9 + 32);
  if (v21 != 0) {
    if (v21 == a9) {
      *(_QWORD*)(v16 + 400) = v16 + 368;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, v16 + 368);
    }
    else {
      *(_QWORD*)(v16 + 400) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    }
  }
  else {
    *(_QWORD*)(v16 + 400) = 0;
  }
  v22 = *(_QWORD*)(v16 + 352);
  LOBYTE(v63[0]) = 1;
  if (v22 == 0) {
    GameRoutine_60a310(0, v18);
  }
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v22 + 48LL))(v22, v63);
  memset(&v63[3], 0, 24);
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v64 = 0;
  v63[0] = 0x800000018LL;
  v63[1] = 0x500000050LL;
  v63[2] = 0x100000;
  GameRoutine_1366bd0((void*)(&v61), "Layout/Common.arc", "Common_Fade", v63);
  v23 = v61;
  v24 = v62;
  v25 = *(_QWORD*)(v16 + 160);
  v61 = 0;
  v62 = 0;
  *(_QWORD*)(v16 + 152) = v23;
  *(_QWORD*)(v16 + 160) = v24;
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v26 = v62;
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  *(_BYTE*)(*(_QWORD*)(v16 + 152) + 2369LL) = 0;
  v27 = *(_QWORD*)(v16 + 160);
  v61 = *(_QWORD*)(v16 + 152);
  v62 = v27;
  if (v27 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(v16 + 168, &v61);
    if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak(v27);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(v16 + 168, &v61);
  }
  ui_LayoutAccessor_SetPriority(v16 + 168, *(unsigned int*)(v16 + 288), v28);
  LayoutAccessor_155e830(v16 + 168, 1);
  LayoutAccessor_1562680(
      v16 + 168, (char*)GameData_1be4670 + GameData_1be4670[*(int*)(v16 + 296)],
      0x1.0000000000000p+0);
  if (*(_BYTE*)(v16 + 272) != 0) {
    v29 = GameData_205c338_alt1;
  }
  else {
    v29 = GameData_205c4d0;
  }
  v30 = LayoutAccessor_1562680(v16 + 168, v29[*(int*)(v16 + 292)],
                               0x1.0000000000000p+0);
  v32 = *(unsigned int*)(v16 + 296);
  if ((v32 & 0xFFFFFFFE) == 2) {
    if ((*(_BYTE*)(v16 + 272) & 1) != 0) {
      v33 = *(unsigned int*)(v16 + 288) | (unsigned __int64)(v32 << 32);
      v34 = GameData_2259530;
      if (GameData_2259530 >= (unsigned __int64)GameData_2259538) {
        v38 = GameData_2259528;
        v39 = GameData_2259530 - GameData_2259528;
        v40 = (GameData_2259530 - GameData_2259528) >> 3;
        v41 = v40 + 1;
        if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
          GameRoutine_15e3df0(v30);
        }
        v42 = GameData_2259538 - GameData_2259528;
        if ((GameData_2259538 - GameData_2259528) >> 2 > v41) {
          v41 = v42 >> 2;
        }
        if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
          v43 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v43 = v41;
        }
        if (v43 != 0) {
          if (v43 >> 61 != 0) {
            GameRoutine_60a210(v30);
          }
          v44 = fw_memory_HeapManager_Allocate(*v20, 8 * v43, 16, 0);
        }
        else {
          v44 = 0;
        }
        v45 = v44 + 8 * v43;
        v46 = v44 + v39 - 8 * v40;
        *(_QWORD*)(v44 + v39) = v33;
        v35 = v44 + v39 + 8;
        memcpy(v46, v38, v39);
        GameData_2259528 = v46;
        GameData_2259530 = v35;
        GameData_2259538 = v45;
        if (v38 != 0) {
          v47 = 128;
          if (*(_QWORD*)(*v20 + 200LL) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v20 + v47);
        }
      }
      else {
        *(_QWORD*)GameData_2259530 = v33;
        v35 = v34 + 8;
      }
      GameData_2259530 = v35;
      v37 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628);
      if ((*(_BYTE*)(v16 + 272) & 1) != 0) {
        v48 = (int*)GameData_2259528;
        if (GameData_2259528 == v35) {
          v32 = 5;
        }
        else {
          v49 = *(_DWORD*)GameData_2259528;
          v32 = *(unsigned int*)(GameData_2259528 + 4);
          do {
            if (*v48 > v49) {
              v32 = (unsigned int)v48[1];
              v49 = *v48;
            }
            v48 += 2;
          } while (v48 != (int*)v35);
        }
        v36 = 1;
      }
      else {
        v32 = *(unsigned int*)(v16 + 296);
        v36 = 0;
      }
    }
    else {
      v36 = 0;
      v37 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628);
    }
    GameRoutine_15e3a40(v37, v36, v32, v16 + 368, *(unsigned int*)(v16 + 304));
  }
  if ((*(_BYTE*)(v16 + 272) & 1) == 0) {
    v50 = *v59;
    if (*v59 != 0) {
      while (1) {
        if (*(_BYTE*)v50 == 2) {
          if (*(_DWORD*)(v50 + 32) == 2) {
            *(_QWORD*)(v16 + 16) = v50;
            *(_WORD*)(v16 + 136) &= ~0x80u;
            v51 = v65;
            if (v65 == 0) {
              goto LABEL_76;
            }
            goto LABEL_63;
          }
        }
        else if (*(_BYTE*)v50 == 0) {
          break;
        }
        v50 += 64;
      }
    }
  }
  v51 = v65;
  if (v65 == 0) {
    goto LABEL_76;
  }
LABEL_63:
  v52 = v66;
  if (v51 == v66) {
    goto LABEL_73;
  }
  v53 = v66;
  do {
    v54 = *(_BYTE*)(v53 - 24);
    v53 -= 24;
    if ((v54 & 1) != 0) {
      v31 = *(_QWORD*)(v52 - 8);
      if (v31 != 0) {
        if (*(_QWORD*)(*v20 + 200LL) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v20 + v55);
      }
    }
    v52 = v53;
  } while (v53 != v51);
  v66 = v51;
  if (v65 != 0) {
  LABEL_73:
    v56 = 128;
    if (*(_QWORD*)(*v20 + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v20 + v56);
  }
LABEL_76:
  v57 = *(_QWORD*)(a1 + 40);
  if (v57 != 0) {
    *(_QWORD*)(v57 + 48) = v16;
    *(_QWORD*)(v16 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v16;
  *(_QWORD*)(v16 + 24) = "GameUIFade";
  *(_QWORD*)(v16 + 32) = a1;
  *(_DWORD*)(v16 + 140) = game_HashString32("GameUIFade", v31);
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
