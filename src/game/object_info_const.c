#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 EffectModule_bd3360(_QWORD, _QWORD, long double);
__int64 GameRoutine_98ed40(_QWORD);
__int64 GameRoutine_98f2b0(_QWORD);
__int64 GameRoutine_bd3660(_QWORD, _QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _QWORD GameData_1b56248[5];
extern _UNKNOWN* GameData_212d4a8;
extern __int64 (*GameData_1b56208[5])();
extern __int64 (*GameData_1fb2378[])();
extern __int64 (*GameData_1fb23f8[])();
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern int* GameData_212d4a0;
struct PseudoSret GameRoutine_bd3a40(_QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_ObjectInfoConst_CreateEffect(__int64 result, int a2, __int64 a3);
unsigned __int64
game_ObjectInfoConst_CreateEffect_lambda1_Invoke(unsigned __int64 result,
                                                 __int64* a2);

__int64 game_ObjectInfoConst_CreateEffect(__int64 result, int a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  unsigned __int8 explicit;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 (***v18)();
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (**v24)();
  __int64 (***v25)();
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD v33[2];
  __int64 v34;

  if (result != 0 && a3 != 0) {
    v4 = *(_QWORD*)(result + 24);
    v6 = result;
    v7 = *(_DWORD*)(a3 + 284) - 1;
    if (v7 > 4) {
      if ((*(_BYTE*)(v4 + 65) & 1) == 0) {
        return result;
      }
    }
    else if ((*((_BYTE*)GameData_1b56208[v7] + v4) & 1) == 0) {
      return result;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4a8,
                                    memory_order_acquire);
    v9 = GameData_212d4a0;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212d4a8) != 0) {
      *v9 = wld_Crc32(0, "EffectModule", 12);
      __cxa_guard_release(GameData_212d4a8, v29, v30, v31);
    }
    v10 = *(_QWORD*)(a3 + 512);
    v11 = v10;
    while (v11 != *(_QWORD*)(a3 + 504)) {
      v12 = *(_DWORD*)(v11 - 16);
      v11 -= 16;
      v10 -= 16;
      if (v12 == *v9) {
        if (*(_QWORD*)(a3 + 512) != v10) {
          v13 = *(_QWORD*)(v10 + 8);
          if (v13 != 0) {
            goto LABEL_14;
          }
        }
        break;
      }
    }
    result = GameRoutine_98ed40(a3);
    v13 = result;
    if (result == 0) {
      return result;
    }
  LABEL_14:
    v33[0] = 0;
    v33[1] = 0;
    v14 = *(_QWORD*)(v6 + 24);
    v32 = v33;
    v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         40, 16, 0);
    v17 = GameData_1fb2378;
    *(_QWORD*)(v16 + 16) = a3;
    *(_DWORD*)(v16 + 24) = a2;
    v18 = (__int64 (***)())v16;
    *(_QWORD*)(v16 + 32) = &v32;
    *(_QWORD*)v16 = GameData_1fb2378;
    *(_QWORD*)(v16 + 8) = v13;
    v19 = *(__int64**)(v14 + 40);
    v20 = *(__int64**)(v14 + 48);
    if (v19 != v20) {
      do {
        v21 = *v19++;
        v34 = v21;
        ((void (*)(__int64 (***)(), __int64*))(*v18)[6])(v18, &v34);
      } while (v19 != v20);
      v17 = *v18;
    }
    ((void (*)(__int64 (***)()))v17[5])(v18);
    v22 = *(_QWORD*)(v6 + 24);
    v23 = fw_memory_HeapManager_Allocate(*v15, 40, 16, 0);
    v24 = GameData_1fb23f8;
    *(_QWORD*)(v23 + 16) = a3;
    *(_DWORD*)(v23 + 24) = a2;
    v25 = (__int64 (***)())v23;
    *(_QWORD*)(v23 + 32) = &v32;
    *(_QWORD*)v23 = GameData_1fb23f8;
    *(_QWORD*)(v23 + 8) = v13;
    v26 = *(__int64**)(v22 + 40);
    v27 = *(__int64**)(v22 + 48);
    if (v26 != v27) {
      do {
        v28 = *v26++;
        v34 = v28;
        ((void (*)(__int64 (***)(), __int64*))(*v25)[6])(v25, &v34);
      } while (v26 != v27);
      v24 = *v25;
    }
    ((void (*)(__int64 (***)()))v24[5])(v25);
    return GameRoutine_98f2b0(v33[0]);
  }
  return result;
}

unsigned __int64

game_ObjectInfoConst_CreateEffect_lambda1_Invoke(unsigned __int64 result,
                                                 __int64* a2)
{
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  bool v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  long double v37;
  __int64 v38;
  int v39;
  int v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  atomic_ullong* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;

  v2 = *a2;
  v3 = *(_DWORD*)(result + 24);
  v53 = (_QWORD*)result;
  if (*(_DWORD*)(v2 + 32) != v3) {
    v4 = *(_DWORD*)(v53[2] + 284LL) - 1;
    v5 = v4 > 4 ? 112LL : GameData_1b56248[v4];
    v46 = v2 + v5;
    v45 = *(unsigned __int16*)(v2 + v5);
    if (*(_WORD*)(v2 + v5) != 0) {
      v6 = 0;
      while (1) {
        v7 = *(_QWORD*)(v46 + 8);
        v8 = *(_QWORD*)(v7 + 8 * v6);
        v9 = v53[4];
        result = strlen(v8);
        if (result >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0(result);
        }
        v10 = result;
        if (result >= 0x17) {
          break;
        }
        v11 = (char*)&v48 + 1;
        LOBYTE(v48) = 2 * result;
        if (result != 0) {
          goto LABEL_16;
        }
      LABEL_17:
        v11[v10] = 0;
        v15 = *(_QWORD*)(v9 + 8);
        v14 = v9 + 8;
        v13 = v15;
        if (v15 == 0) {
          v34 = v14;
          if ((v48 & 1) == 0) {
            goto LABEL_71;
          }
        LABEL_67:
          if (v50 != nullptr) {
            v35 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v35 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v50);
          }
          goto LABEL_71;
        }
        v16 = v14;
        v47 = v48 & 1;
        if (v47 != 0) {
          v17 = v50;
        }
        else {
          v17 = (char*)&v48 + 1;
        }
        if ((v48 & 1) != 0) {
          v18 = v49;
        }
        else {
          v18 = (unsigned __int64)(unsigned __int8)v48 >> 1;
        }
        do {
          v19 = *(unsigned __int8*)(v13 + 32);
          v20 = (v19 & 1) == 0;
          v21 = v19 >> 1;
          if (v20) {
            v22 = v21;
          }
          else {
            v22 = *(_QWORD*)(v13 + 40);
          }
          if (v20) {
            v23 = v13 + 33;
          }
          else {
            v23 = *(_QWORD*)(v13 + 48);
          }
          if (v18 >= v22) {
            v24 = v22;
          }
          else {
            v24 = v18;
          }
          result = memcmp(v23, v17, v24);
          if (v22 < v18) {
            v25 = -1;
          }
          else {
            v25 = 1;
          }
          if (v22 == v18) {
            v25 = 0;
          }
          if ((_DWORD)result != 0) {
            v25 = result;
          }
          v26 = v25 < 0;
          if (v25 >= 0) {
            v27 = 0;
          }
          else {
            v27 = 8;
          }
          if (!v26) {
            v16 = v13;
          }
          v13 = *(_QWORD*)(v13 + v27);
        } while (v13 != 0);
        if (v16 == v14) {
          v34 = v14;
        }
        else {
          v28 = *(unsigned __int8*)(v16 + 32);
          v29 = (v28 & 1) == 0;
          v30 = v28 >> 1;
          if (v29) {
            v31 = v30;
          }
          else {
            v31 = *(_QWORD*)(v16 + 40);
          }
          if (v29) {
            v32 = v16 + 33;
          }
          else {
            v32 = *(_QWORD*)(v16 + 48);
          }
          if (v31 >= v18) {
            v33 = v18;
          }
          else {
            v33 = v31;
          }
          result = memcmp(v17, v32, v33);
          if ((_DWORD)result != 0) {
            if ((result & 0x80000000) == 0LL) {
              v34 = v16;
            }
            else {
              v34 = v14;
            }
          }
          else if (v18 >= v31) {
            v34 = v16;
          }
          else {
            v34 = v14;
          }
        }
        if (v47 != 0) {
          goto LABEL_67;
        }
      LABEL_71:
        if (v14 != v34) {
          goto LABEL_7;
        }
        v36 = v53[1];
        v51 = *(_QWORD*)(v7 + 8 * v6);
        v52 = strlen(v51);
        result = (unsigned __int64)(*(struct PseudoSret*)(&v48) =
                                        GameRoutine_bd3a40(v36, &v51),
                                    (void*)(&v48));
        v38 = v48;
        if (*(_QWORD*)v48 == 0 ||
            *(_DWORD*)(*(_QWORD*)v48 + 16LL) != *(_DWORD*)(v48 + 8)) {
          goto LABEL_98;
        }
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
          v39 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
          v40 = (v39 & 8) != 0 ? 2 : 3;
          if ((v40 & v39) == 0) {
            goto LABEL_89;
          }
        }
        if (game_ProcFadeView_instance_ != 0) {
          v41 = game_ProcFadeView_instance_ +
                ((unsigned __int64)*(
                     unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                 << 6);
          if (*(float*)(v41 + 172) == *(float*)(v41 + 168)) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)(v41 + 160) + 16LL))(v41 +
                                                                           160);
          }
          else {
            v37 = *(long double*)(v41 + 208);
          }
          LODWORD(v37) = HIDWORD(v37);
          if (*((float*)&v37 + 3) == 1.0) {
            *(__n128*)&v37 = ((__n128 (*)(unsigned __int64, float)) *
                              (_QWORD*)(*(_QWORD*)(v41 + 160) + 16LL))(
                v41 + 160, *((float*)&v37 + 3));
            LODWORD(v37) = HIDWORD(v37);
            if (*((float*)&v37 + 3) == 1.0) {
              v38 = v48;
            LABEL_89:
              v42 = v49;
              v51 = v38;
              v52 = v49;
              if (v49 != 0) {
                v43 = (atomic_ullong*)(v49 + 8);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8),
                                          1u, memory_order_relaxed);
                result = EffectModule_bd3360(v36, &v51, v37);
              LABEL_94:
                if (atomic_fetch_add(v43, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(unsigned __int64))(*(_QWORD*)v42 + 16LL))(v42);
                  result = std___1___shared_weak_count___release_weak(v42);
                  v44 = v49;
                  if (v49 != 0) {
                    goto LABEL_99;
                  }
                  goto LABEL_7;
                }
              }
              else {
                result = EffectModule_bd3360(v36, &v51, v37);
              }
            LABEL_98:
              v44 = v49;
              if (v49 != 0) {
                goto LABEL_99;
              }
              goto LABEL_7;
            }
          }
        }
        if (GameData_22400f8 != 0) {
          v38 = v48;
          if (*(_BYTE*)(GameData_22400f8 + 8) == 2) {
            goto LABEL_89;
          }
        }
        else {
          v38 = v48;
        }
        v42 = v49;
        v51 = v38;
        v52 = v49;
        if (v49 != 0) {
          v43 = (atomic_ullong*)(v49 + 8);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                    memory_order_relaxed);
          result = GameRoutine_bd3660(v36, &v51, v37);
          goto LABEL_94;
        }
        result = GameRoutine_bd3660(v36, &v51, v37);
        v44 = v49;
        if (v49 != 0) {
        LABEL_99:
          if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)v44 + 16LL))(v44);
            result = std___1___shared_weak_count___release_weak(v44);
          }
        }
      LABEL_7:
        if (++v6 == v45) {
          return result;
        }
      }
      if ((result | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (result | 7) + 1;
      }
      v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                  16, 0);
      v49 = v10;
      v50 = v11;
      v48 = v12 | 1;
    LABEL_16:
      result = memmove(v11, v8, v10);
      goto LABEL_17;
    }
  }
  return result;
}

#pragma GCC visibility pop
