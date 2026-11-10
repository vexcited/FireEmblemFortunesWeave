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
        result = (_QWORD*)(*(__int64 (**)(void))(*result + v10))();
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
        result = (_QWORD*)(*(__int64 (**)(void))(*result + v10))();
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
