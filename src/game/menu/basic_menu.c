#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e3a80(_QWORD);
__int64 GameRoutine_6e5a40(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2131c30[52];
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64* GameData_212d638[10];
__int64 BasicMenu_16dd8b0(__int64 a1, int a2, int a3);
__int64 BasicMenu_16df280(__int64 a1, __int64 a2, unsigned __int8 a3,
                          unsigned __int8 a4, char a5);
__int64 BasicMenu_16e17e0(_QWORD* a1);
__int64 BasicMenu_16e1e50(__int64 a1, __int64 a2);
__int64 BasicMenu_16e2280(__int64 a1, int a2, char a3, char a4);
__int64 BasicMenu_16e2460(_QWORD* a1, char a2, char a3);
__int64 BasicMenu_16e25a0(__int64 result, char a2);
__int64 game_menu_BasicMenu_StickRCall_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 GameRoutine_16e3a80_alt1(__int64 result, __int64*, __int64, __int64,
                                 char) __asm__("GameRoutine_16e3a80");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_TutorialInfo_CreateBind(__int64, __int64**);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_9c2e00();
__int64 BasicMenu_16dc800(__int64 a1);
__int64 BasicMenu_16dd280(_QWORD* a1);
__int64 BasicMenu_16e1f40(__int64 result, __int64 a2, __int64 a3);
__int64 BasicMenu_16e2860(__int64 result, char a2);

__int64 BasicMenu_16dc800(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64* v10;
    __int64* v11;
  } v10_;

  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 528LL))((void*)(&v10_.v10), (__int64)a1);
  result = game_menu_TutorialInfo_CreateBind(a1, &v10_.v10);
  v3 = v10_.v10;
  if (v10_.v10 != nullptr) {
    v4 = v10_.v11;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v10_.v10 == v10_.v11) {
      goto LABEL_12;
    }
    v6 = v10_.v11;
    do {
      v7 = *((_BYTE*)v6 - 24);
      v6 -= 3;
      if ((v7 & 1) != 0 && *(v4 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
      }
      v4 = v6;
    } while (v6 != v3);
    v10_.v11 = v3;
    if (v10_.v10 != nullptr) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v9 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v9);
    }
  }
  return result;
}

__int64 BasicMenu_16dd280(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  __int128 v16;
  unsigned int v17;
  __int64 v18;

  if (a1[108] == 0 || (v3 = a1[107]) == 0) {
  LABEL_20:
    v13 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
    if (((*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1) & 1) != 0) {
      v14 = game_ProcFadeView_instance_;
      if (game_ProcFadeView_instance_ == 0) {
        return (unsigned int)(v14 + v13);
      }
      v15 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v15 + 172) == *(float*)(v15 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v15 + 160) + 16LL))(v15 +
                                                                       160);
      }
      else {
        v16 = *(_OWORD*)(v15 + 208);
      }
      if (*((float*)&v16 + 3) == 1.0f) {
        if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v15 + 160) + 16LL))(
                            v15 + 160, *((float*)&v16 + 3)))
                .n128_f32[3] == 1.0f) {
          v14 = 1010;
        }
        else {
          v14 = 0;
        }
        return (unsigned int)(v14 + v13);
      }
    }
    v14 = 0;
    return (unsigned int)(v14 + v13);
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_11;
  }
  v5 = a1[106];
  if (v5 != 0) {
    v1 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v1 == 0) {
      v6 = 0;
    }
    v7 = v6 != a1[108];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
    LABEL_11:
      v8 = a1[107];
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_20;
      }
      goto LABEL_17;
    }
  }
  else {
    v9 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) == 0) {
    goto LABEL_20;
  }
  v8 = a1[107];
  if (v8 == 0) {
    return 0;
  }
LABEL_17:
  result = std___1___shared_weak_count_lock(v8);
  if (result == 0) {
    return 0;
  }
  v11 = a1[106];
  v12 = result;
  if (v11 != 0) {
    result = *(unsigned int*)(v11 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = result;
    v18 = v12;
    (*(void (**)(__int64 __return_ptr, __int64))(*(_QWORD*)v12 + 16LL))(v12,
                                                                        v12);
    std___1___shared_weak_count___release_weak(v18);
    result = v17;
  }
  if (v11 == 0) {
    return 0;
  }
  return result;
}

__int64 BasicMenu_16dd8b0(__int64 a1, int a2, int a3)
{
  unsigned __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;

  *(_DWORD*)(a1 + 660) = a3;
  *(_DWORD*)(a1 + 664) = a3;
  *(_DWORD*)(a1 + 656) = a2 - 1;
  *(_QWORD*)(a1 + 792) = *(_QWORD*)(a1 + 784);
  *(_QWORD*)(a1 + 816) = *(_QWORD*)(a1 + 808);
  if (a2 < 1) {
    v16 = 0;
    result = GameRoutine_6e5a40(a1 + 784, 1, &v16);
    v11 = *(_QWORD*)(a1 + 816);
    v12 = *(_QWORD*)(a1 + 808);
    v16 = 0;
    v14 = v11 - v12;
    v13 = v14 == 0;
    v15 = v14 >> 2;
    if (!v13) {
      if (v15 < 2) {
        return result;
      }
      v10 = v12 + 4;
      goto LABEL_8;
    }
    v9 = 1 - v15;
  }
  else {
    v4 = (unsigned int)a2;
    v16 = 0;
    result = GameRoutine_6e5a40(a1 + 784, (unsigned int)a2, &v16);
    v6 = *(_QWORD*)(a1 + 816);
    v7 = *(_QWORD*)(a1 + 808);
    v16 = 0;
    v8 = (v6 - v7) >> 2;
    v9 = v4 - v8;
    if (v4 <= v8) {
      if (v4 >= v8) {
        return result;
      }
      v10 = v7 + 4 * v4;
    LABEL_8:
      *(_QWORD*)(a1 + 816) = v10;
      return result;
    }
  }
  return GameRoutine_6e5a40(a1 + 808, v9, &v16);
}

__int64 BasicMenu_16df280(__int64 a1, __int64 a2, unsigned __int8 a3,
                          unsigned __int8 a4, char a5)
{
  __int64 result;
  int v7;
  char v8;
  unsigned __int8 v9;
  unsigned __int8 v10;
  __int64 v11;

  result = *(_QWORD*)(a1 + 336);
  if ((a3 & 1) == 0 && result == a2) {
    v7 = 4;
    if (result == 0) {
      goto LABEL_13;
    }
  LABEL_9:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
    if ((result & 1) != 0) {
      v7 = 4;
    }
    else {
      v7 = 0;
    }
    goto LABEL_13;
  }
  if (result != 0) {
    v8 = a5;
    v9 = a4;
    v10 = a3;
    v11 = a2;
    (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
    a2 = v11;
    a3 = v10;
    a4 = v9;
    a5 = v8;
  }
  *(_QWORD*)(a1 + 336) = a2;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, a4 & 1, (a3 & a4 & 1) == 0,
                                              a5 & 1);
  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    v7 = 4;
    goto LABEL_13;
  }
  (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
  result = *(_QWORD*)(a1 + 336);
  v7 = 4;
  if (result != 0) {
    goto LABEL_9;
  }
LABEL_13:
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v7;
  return result;
}

__int64 BasicMenu_16e17e0(_QWORD* a1)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  bool v7;
  _BOOL4 v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 472LL))(a1) & 1) != 0) {
    return 0;
  }
  v3 = a1[74];
  v4 = a1[75];
  if (v3 != v4) {
    for (i = v3 + 8;; i += 8) {
      v6 = *(_QWORD*)(i - 8);
      v7 = v6 == -1 || game_gameui_MenuAnimator_instance_ == 0;
      if (v7) {
        v8 = false;
      }
      else {
        v8 = v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
             v6 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360);
        if (v8) {
          return !v8;
        }
      }
      v7 = i == v4;
      if (v7) {
        return !v8;
      }
    }
  }
  return 1;
}

__int64 BasicMenu_16e1e50(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[32];
  _BYTE* v8;

  result = *(_QWORD*)(a2 + 32);
  if (result == 0) {
    return result;
  }
  v5 = *(_QWORD*)(a1 + 232);
  v4 = *(_QWORD*)(a1 + 240);
  if ((unsigned __int64)((v4 - v5) >> 3) < 2) {
    return result;
  }
  if (result == a2) {
    v8 = v7;
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)result + 24LL))(result, v7);
    if (v5 == v4) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v8 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  if (v5 != v4) {
  LABEL_5:
    GameRoutine_16e3a80(v5);
  }
LABEL_6:
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(void))(*(_QWORD*)v8 + v6))();
}

__int64 BasicMenu_16e1f40(__int64 result, __int64 a2, __int64 a3)
{
  __int64* v3;
  _QWORD* v4;
  char* v5;
  char* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v33;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  v3 = *(__int64**)(result + 232);
  v4 = (_QWORD*)result;
  v5 = *(char**)(result + 256);
  v33 = (__int64*)(result + 232);
  *(_QWORD*)(result + 240) = v3;
  if (*(_QWORD*)(a2 + 32) != 0) {
    v6 = *(char**)(result + 264);
    if (v5 != v6) {
      do {
        v9 = *(_QWORD*)v5;
        v10 = *(_QWORD*)(a2 + 32);
        v34_.v34[0] = *(_QWORD*)v5;
        if (v10 == 0) {
          GameRoutine_60a310();
        }
        result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v10 + 48LL))(
            v10, v34_.v34);
        if ((result & 1) != 0) {
          v12 = (_QWORD*)v4[30];
          v11 = v4[31];
          if ((unsigned __int64)v12 < v11) {
            *v12 = v9;
            v8 = (__int64)(v12 + 1);
          }
          else {
            v13 = *v33;
            v14 = (__int64)v12 - *v33;
            v15 = (v14 >> 3) + 1;
            if (v15 >> 61 != 0) {
              goto LABEL_55;
            }
            v16 = v11 - v13;
            if (v16 >> 2 > v15) {
              v15 = v16 >> 2;
            }
            if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
              v17 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v15;
            }
            if (v17 != 0) {
              if (v17 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v18 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
            }
            else {
              v18 = 0;
            }
            v19 = v18 + 8 * v17;
            v20 = v18 + v14 - 8 * (v14 >> 3);
            *(_QWORD*)(v18 + v14) = v9;
            v8 = v18 + v14 + 8;
            result = memcpy(v20, v13, v14);
            v4[29] = v20;
            v4[30] = v8;
            v4[31] = v19;
            if (v13 != 0) {
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
            }
          }
          v4[30] = v8;
        }
        v5 += 8;
      } while (v5 != v6);
      v3 = (__int64*)v4[30];
    }
  }
  else {
    v22 = *(char**)(result + 264);
    v23 = *(_QWORD*)(result + 248);
    v24 = v22 - v5;
    if (v22 - v5 <= (unsigned __int64)(v23 - (_QWORD)v3)) {
      if (v22 != v5) {
        result = memmove(v3, v5, v22 - v5);
      }
    }
    else {
      v25 = v24 >> 3;
      if (v3 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v26);
        v23 = 0;
        v33[1] = 0;
        v33[2] = 0;
        *v33 = 0;
      }
      if (v25 >> 61 != 0) {
        goto LABEL_55;
      }
      v27 = v23 >> 2;
      if (v23 >> 2 <= v25) {
        v27 = v24 >> 3;
      }
      v28 = (unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                          : v27;
      if (v28 >> 61 != 0) {
      LABEL_55:
        GameRoutine_9c2e00();
      }
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
      v3 = (__int64*)result;
      v4[29] = result;
      v4[30] = result;
      v4[31] = result + 8 * v28;
      if (v22 != v5) {
        result = memcpy(result, v5, v22 - v5);
      }
    }
    v3 = (__int64*)((char*)v3 + v24);
    v4[30] = v3;
  }
  v29 = *v33;
  if ((__int64*)*v33 != v3) {
    result = *(_QWORD*)(a3 + 32);
    if (result != 0) {
      v30 = ((__int64)v3 - v29) >> 3;
      if (v30 >= 2) {
        if (result == a3) {
          v34_.v35 = v34_.v34;
          (*(void (**)(__int64, _QWORD*))(*(_QWORD*)result + 24LL))(result,
                                                                    v34_.v34);
        }
        else {
          v34_.v35 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)result +
                                                        16LL))(result);
        }
        GameRoutine_16e3a80_alt1(v29, v3, (__int64)v34_.v34,
                                 (2 * __clz(v30)) ^ 0x7E, 1);
        result = (__int64)v34_.v35;
        if (v34_.v35 == v34_.v34) {
          v31 = 32;
        }
        else {
          if (v34_.v35 == nullptr) {
            return result;
          }
          v31 = 40;
        }
        return (*(__int64 (**)(__int64))(*v34_.v35 + v31))((__int64)v34_.v35);
      }
    }
  }
  return result;
}

__int64 BasicMenu_16e2280(__int64 a1, int a2, char a3, char a4)
{
  char* v4;
  char* v5;
  int v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v16;

  if ((a2 & 0x80000000) == 0) {
    v4 = *(char**)(a1 + 232);
    v5 = *(char**)(a1 + 240);
    if (v4 != v5) {
      if ((a3 & 1) != 0) {
        v7 = 0;
        if ((a4 & 1) == 0) {
          while (1) {
            v8 = *(_QWORD*)v4;
            if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 48LL))(
                     *(_QWORD*)v4) &
                 1) != 0) {
              if (a2 == v7) {
                return v8;
              }
              ++v7;
            }
            v4 += 8;
            if (v4 == v5) {
              return 0;
            }
          }
        }
        while (1) {
          v8 = *(_QWORD*)v4;
          if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 48LL))(*(_QWORD*)v4) &
               1) != 0 &&
              ((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 40LL))(v8) & 1) != 0) {
            if (a2 == v7) {
              return v8;
            }
            ++v7;
          }
          v4 += 8;
          if (v4 == v5) {
            return 0;
          }
        }
      }
      if ((a4 & 1) != 0) {
        v9 = 0;
        while (1) {
          v8 = *(_QWORD*)v4;
          if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 40LL))(*(_QWORD*)v4) &
               1) != 0) {
            if (a2 == v9) {
              return v8;
            }
            ++v9;
          }
          v4 += 8;
          if (v4 == v5) {
            return 0;
          }
        }
      }
      v10 = v5 - v4 - 8;
      v11 = (v10 >> 3) + 1;
      if (v10 >= 0x18) {
        v16 = 0;
        while (a2 != (_DWORD)v16) {
          if (a2 == (_DWORD)v16 + 1) {
            v4 += 8;
            return *(_QWORD*)v4;
          }
          if (a2 == (_DWORD)v16 + 2) {
            return *((_QWORD*)v4 + 2);
          }
          if (a2 == (_DWORD)v16 + 3) {
            return *((_QWORD*)v4 + 3);
          }
          v4 += 32;
          v16 += 4;
          v12 = v16;
          if ((v11 & 0x3FFFFFFFFFFFFFFCLL) == v16) {
            goto LABEL_23;
          }
        }
        return *(_QWORD*)v4;
      }
      v12 = 0;
    LABEL_23:
      v13 = v11 & 3;
      if (v13 != 0) {
        v14 = a2 - v12;
        v8 = 0;
        while (v14 != 0) {
          v4 += 8;
          --v14;
          if (--v13 == 0) {
            return v8;
          }
        }
        return *(_QWORD*)v4;
      }
    }
  }
  return 0;
}

__int64 BasicMenu_16e2460(_QWORD* a1, char a2, char a3)
{
  __int64* v3;
  __int64* v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;

  v3 = (__int64*)a1[29];
  v4 = (__int64*)a1[30];
  if (v3 == v4) {
    return (unsigned int)-1;
  }
  else {
    v6 = 0;
    if ((a2 & 1) != 0) {
      if ((a3 & 1) == 0) {
        while (1) {
          v8 = *v3;
          if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 48LL))(*v3) & 1) !=
              0) {
            if (v8 == a1[42]) {
              return v6;
            }
            ++v6;
          }
          if (++v3 == v4) {
            return (unsigned int)-1;
          }
        }
      }
      while (1) {
        v7 = *v3;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 48LL))(*v3) & 1) != 0 &&
            ((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7) & 1) != 0) {
          if (v7 == a1[42]) {
            return v6;
          }
          ++v6;
        }
        if (++v3 == v4) {
          return (unsigned int)-1;
        }
      }
    }
    if ((a3 & 1) != 0) {
      while (1) {
        v11 = *v3;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 40LL))(*v3) & 1) != 0) {
          if (v11 == a1[42]) {
            return v6;
          }
          ++v6;
        }
        if (++v3 == v4) {
          return (unsigned int)-1;
        }
      }
    }
    while (1) {
      v9 = *v3++;
      if (v9 == a1[42]) {
        break;
      }
      ++v6;
      if (v3 == v4) {
        return (unsigned int)-1;
      }
    }
  }
  return v6;
}

__int64 BasicMenu_16e25a0(__int64 result, char a2)
{
  char* v2;
  char* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;

  v2 = *(char**)(result + 232);
  v3 = *(char**)(result + 240);
  if (v2 == v3) {
    return result;
  }
  v4 = result;
  v5 = 0;
  v6 = *(__int64**)(result + 232);
  while (1) {
    v7 = *v6++;
    if (v7 == *(_QWORD*)(result + 336)) {
      break;
    }
    ++v5;
    if (v6 == (__int64*)v3) {
      return result;
    }
  }
  v8 = v3 - v2;
  v9 = a2;
  v10 = (unsigned __int64)(v8 + 0x7FFFFFFF8LL) >> 3;
  if (v5 >= (int)v10) {
    v11 = (unsigned int)v10;
  }
  else {
    v11 = (unsigned int)v5;
  }
  if ((v11 & 0x80000000) != 0) {
  LABEL_16:
    v12 = (int)v11;
    if ((int)v11 >= (unsigned __int64)(v8 >> 3)) {
      if ((_DWORD)v11 != v5) {
        goto LABEL_24;
      }
      return result;
    }
    while (1) {
      v15 = *(_QWORD*)&v2[8 * v12];
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 48LL))(v15);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15);
        if ((result & 1) != 0) {
          break;
        }
      }
      v2 = *(char**)(v4 + 232);
      if (++v12 >=
          (unsigned __int64)((__int64)(*(_QWORD*)(v4 + 240) - (_QWORD)v2) >>
                             3)) {
        goto LABEL_23;
      }
    }
  }
  else {
    v12 = v11;
    while (1) {
      v14 = *(_QWORD*)(*(_QWORD*)(v4 + 232) + 8 * v12);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 48LL))(v14);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
        if ((result & 1) != 0) {
          break;
        }
      }
      if (v12-- <= 0) {
        v2 = *(char**)(v4 + 232);
        a2 = v9;
        v8 = *(_QWORD*)(v4 + 240) - (_QWORD)v2;
        goto LABEL_16;
      }
    }
  }
  LODWORD(v11) = v12;
LABEL_23:
  a2 = v9;
  if ((_DWORD)v11 != v5) {
  LABEL_24:
    if ((v11 & 0x80000000) == 0) {
      v16 = *(char**)(v4 + 232);
      v17 = *(char**)(v4 + 240);
      if (v16 != v17) {
        v18 = v17 - v16 - 8;
        v19 = (v18 >> 3) + 1;
        if (v18 >= 0x18) {
          v24 = 0;
          while ((_DWORD)v11 != (_DWORD)v24) {
            if ((_DWORD)v11 == (_DWORD)v24 + 1) {
              v16 += 8;
              break;
            }
            if ((_DWORD)v11 == (_DWORD)v24 + 2) {
              v16 += 16;
              break;
            }
            if ((_DWORD)v11 == (_DWORD)v24 + 3) {
              v16 += 24;
              break;
            }
            v16 += 32;
            v24 += 4;
            v20 = v24;
            if ((v19 & 0x3FFFFFFFFFFFFFFCLL) == v24) {
              goto LABEL_28;
            }
          }
        LABEL_44:
          v23 = *(_QWORD*)v16;
          result = *(_QWORD*)(v4 + 336);
          if ((a2 & 1) == 0) {
          LABEL_45:
            if (result == v23) {
              goto LABEL_50;
            }
          }
        LABEL_46:
          if (result != 0) {
            (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
            a2 = v9;
          }
          *(_QWORD*)(v4 + 336) = v23;
          _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v4, 1, (a2 & 1) == 0, 0);
          result = *(_QWORD*)(v4 + 336);
          if (result == 0) {
            v25 = 4;
          LABEL_55:
            *(_DWORD*)(v4 + 356) = *(_DWORD*)(v4 + 356) & 0xFFFFFFFB | v25;
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
          result = *(_QWORD*)(v4 + 336);
        LABEL_50:
          v25 = 4;
          if (result != 0) {
            result =
                (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
            if ((result & 1) != 0) {
              v25 = 4;
            }
            else {
              v25 = 0;
            }
          }
          goto LABEL_55;
        }
        v20 = 0;
      LABEL_28:
        v21 = v19 & 3;
        if (v21 != 0) {
          v22 = v11 - v20;
          while (v22 != 0) {
            v16 += 8;
            --v22;
            if (--v21 == 0) {
              goto LABEL_32;
            }
          }
          goto LABEL_44;
        }
      }
    }
  LABEL_32:
    v23 = 0;
    result = *(_QWORD*)(v4 + 336);
    if ((a2 & 1) == 0) {
      goto LABEL_45;
    }
    goto LABEL_46;
  }
  return result;
}

__int64 BasicMenu_16e2860(__int64 result, char a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v13;
  bool v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  _QWORD* v28;
  int v29;
  _QWORD* v30;
  _QWORD* v31;
  int v32;
  __int64 v33;

  v2 = *(_QWORD**)(result + 232);
  v3 = *(_QWORD**)(result + 240);
  if (v2 == v3) {
    return result;
  }
  v5 = result;
  v6 = 0;
  while (1) {
    v7 = *v2;
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v2 + 48LL))(*v2);
    if ((result & 1) != 0) {
      break;
    }
  LABEL_3:
    if (++v2 == v3) {
      return result;
    }
  }
  if (v7 != *(_QWORD*)(v5 + 336)) {
    ++v6;
    goto LABEL_3;
  }
  if (v6 < 0) {
    return result;
  }
  v8 = *(_QWORD*)(v5 + 232);
  v9 = *(_QWORD*)(v5 + 240);
  v10 = (unsigned __int64)(v9 - v8 + 0x7FFFFFFF8LL) >> 3;
  if (v6 < (int)v10) {
    LODWORD(v10) = v6;
  }
  v11 = v9 == v8 ? -1 : v10;
  v12 = v11;
  while (1) {
    ++v12;
    v13 = *(_QWORD*)(v5 + 240) == *(_QWORD*)(v5 + 232)
              ? 0
              : ((unsigned __int64)(*(_QWORD*)(v5 + 240) -
                                    *(_QWORD*)(v5 + 232) + 0x7FFFFFFF8LL) >>
                 3) +
                    1;
    if (v12 >= v13) {
      break;
    }
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 232LL))(
        v5, (unsigned int)v12);
    if ((result & 1) != 0) {
      goto LABEL_25;
    }
  }
  v12 = v11;
  while (1) {
    v14 = __OFSUB__(v12--, 1);
    if (v12 < 0 != v14) {
      break;
    }
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v5 + 232LL))(
        v5, (unsigned int)v12);
    if ((result & 1) != 0) {
      goto LABEL_25;
    }
  }
  v12 = v11;
LABEL_25:
  if (v6 == v12) {
    return result;
  }
  if (v12 < 0) {
    goto LABEL_34;
  }
  v15 = *(char**)(v5 + 232);
  v16 = *(char**)(v5 + 240);
  if (v15 == v16) {
    goto LABEL_34;
  }
  v17 = v16 - v15 - 8;
  v18 = (v17 >> 3) + 1;
  if (v17 >= 0x18) {
    v24 = 0;
    while (v12 != (_DWORD)v24) {
      if (v12 == (_DWORD)v24 + 1) {
        v15 += 8;
        break;
      }
      if (v12 == (_DWORD)v24 + 2) {
        v15 += 16;
        break;
      }
      if (v12 == (_DWORD)v24 + 3) {
        v15 += 24;
        break;
      }
      v15 += 32;
      v24 += 4;
      v19 = v24;
      if ((v18 & 0x3FFFFFFFFFFFFFFCLL) == v24) {
        goto LABEL_30;
      }
    }
  LABEL_46:
    v22 = *(_QWORD*)v15;
    v23 = *(_QWORD*)(v5 + 336);
    if ((a2 & 1) != 0) {
      goto LABEL_48;
    }
  LABEL_47:
    if (v23 != v22) {
      goto LABEL_48;
    }
  LABEL_52:
    v26 = 4;
    if (v23 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 120LL))(v23) & 1) != 0) {
        v26 = 4;
      }
      else {
        v26 = 0;
      }
    }
    goto LABEL_57;
  }
  v19 = 0;
LABEL_30:
  v20 = v18 & 3;
  if (v20 != 0) {
    v21 = v12 - v19;
    while (v21 != 0) {
      v15 += 8;
      --v21;
      if (--v20 == 0) {
        goto LABEL_34;
      }
    }
    goto LABEL_46;
  }
LABEL_34:
  v22 = 0;
  v23 = *(_QWORD*)(v5 + 336);
  if ((a2 & 1) == 0) {
    goto LABEL_47;
  }
LABEL_48:
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 168LL))(v23);
  }
  *(_QWORD*)(v5 + 336) = v22;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 0, 1u, 0);
  v25 = *(_QWORD*)(v5 + 336);
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 160LL))(v25);
    v23 = *(_QWORD*)(v5 + 336);
    goto LABEL_52;
  }
  v26 = 4;
LABEL_57:
  v27 = *(_QWORD*)(v5 + 176);
  *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v26;
  result = (*(__int64 (**)(__int64))(v27 + 16))(v5 + 176);
  v28 = *(_QWORD**)(v5 + 184);
  v29 = result;
  v30 = (_QWORD*)v28[29];
  v31 = (_QWORD*)v28[30];
  if (v30 != v31) {
    v32 = 0;
    do {
      v33 = *v30;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v30 + 48LL))(*v30);
      if ((result & 1) != 0) {
        if (v33 == v28[42]) {
          goto LABEL_64;
        }
        ++v32;
      }
      ++v30;
    } while (v30 != v31);
  }
  v32 = -1;
LABEL_64:
  *(_DWORD*)(v5 + 192) = v32 % v29;
  return result;
}

__int64 game_menu_BasicMenu_StickRCall_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 result;

  v2 = *a2;
  if (*a2 == 0) {
    return 0;
  }
  v3 = *(_DWORD**)(a1 + 8);
  result = __dynamic_cast(*a2, GameData_212d638[0], GameData_2131c30[0], 0);
  if (result == 0) {
    return result;
  }
  if ((*(_BYTE*)(result + 144) & 1) != 0) {
    return 0;
  }
  v3[50] = *(_DWORD*)(v2 + 40);
  (*(void (**)(_DWORD*))(*(_QWORD*)v3 + 352LL))(v3);
  return 2;
}

#pragma GCC visibility pop
