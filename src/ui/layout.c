#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_5769c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1363800(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_579280(_QWORD, _QWORD);
__int64 GameRoutine_57c640(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59d3b0(_QWORD);
__int64 GameRoutine_5fc660(_QWORD, _QWORD);
__int64 GameRoutine_5fc6a0(_QWORD, _QWORD, _QWORD);
__int64 LayoutEx_5791a0(_QWORD);
__int64 LayoutEx_57d060(_QWORD);
__int64 LayoutEx_Unknown14(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN** GameData_212e4c0[5];
extern _UNKNOWN** GameData_212e868[7];
extern _UNKNOWN** GameData_212e878[5];
extern __int64 GameData_21f8020;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb78[3];
extern __int64* GameData_2130ea0;
extern __int64* game_g_frame_clock_ptr[3];
__int64 Layout_1363220(__int64 result);
__int64* Layout_13639a0(__int64* result, __int64 a2);
__int64* Layout_1363bc0(__int64* result, _QWORD* a2);
__int64 ui_Layout_Draw_lambda0_Invoke(__int64 a1, _QWORD* a2, __int64 a3,
                                      __int64 a4, _QWORD* a5);
__attribute__((swiftcall)) void GameRoutine_13678f0(PSEUDO_X8, __int64 result,
                                                    const char**, __int64,
                                                    __int64, __int64);
__int64 GameRoutine_beefc0(char**, __int64, __int64, __int64, unsigned int,
                           unsigned int, __int64);
__int64 LayoutEx_579180(_QWORD);
__int64 LayoutEx_57b150(void);
__int64 LayoutEx_57cf40(_QWORD, _QWORD);
__int64 LayoutEx_58d200(_QWORD, _QWORD);
__int64 Layout_13639a0_alt1(_QWORD, _QWORD,
                            long double) __asm__("Layout_13639a0");
__int64 Layout_1364020_alt1(_QWORD, _QWORD, _QWORD) __asm__("Layout_1364020");
__int64 Layout_579280(_QWORD, _QWORD);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1(void) __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 std___1___shared_weak_count___release_weak_alt2(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_202f0c8[])();
extern __int64 (*GameData_2109ae8[])();
extern __int64 (*GameData_2109b78[])();
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212fc60[4];
extern __int64 GameData_2130ec0[2];
extern __int64 ui_Manager_instance_;
void __attribute__((noreturn)) GameRoutine_60a210();
__int64 Layout_13636c0(__int64 result);
__attribute__((swiftcall)) void
Layout_1363e00(PSEUDO_X8 x8_, unsigned __int64 result, _QWORD* a2);
__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8 x8_, __int64* result,
                                               __int64 a2);
__int64* Layout_1364020(__int64* a1, __int64 a2, __int64 a3);
__n128 Layout_ControlCreator_Unknown2(__int64 a1, __int64 a2, __int64 a3,
                                      const char** a4);
_QWORD* Layout_1364900(float* a1, _QWORD* a2, __int64 a3, __int64** a4);
__attribute__((swiftcall)) void
Layout_1685360(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
               __int64 a2, _QWORD* a3, _QWORD* a4, __n128 result);

__int64 Layout_1363220(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  __int64* v8;
  __int64 v9;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _QWORD v24[3];
  __int64 v25;

  if (result != 0 && (*(_BYTE*)(result + 88) & 1) != 0) {
    v3 = *(unsigned __int8*)(result + 90);
    if ((*(_BYTE*)(result + 88) & 2) == 0 || *(_BYTE*)(result + 90) != 0) {
      v24[1] = v1;
      v24[2] = v2;
      v4 = *(_QWORD*)(result + 40);
      v5 = result + 32;
      if (v4 != result + 32) {
        v6 = result;
        do {
          Layout_1363220(v4 - 8);
          v4 = *(_QWORD*)(v4 + 8);
        } while (v4 != v5);
        v3 = *(unsigned __int8*)(v6 + 90);
        result = v6;
      }
      if (v3 != 0) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_2130ea8, memory_order_acquire);
        v8 = GameData_2130ea0;
        if ((explicit & 1) == 0) {
          v22 = result;
          v23 = __cxa_guard_acquire(GameData_2130ea8);
          result = v22;
          if (v23 != 0) {
            *v8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v22);
            __cxa_guard_release(GameData_2130ea8);
            result = v22;
          }
        }
        v9 = result;
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        if ((__int64*)result == v8) {
          goto LABEL_36;
        }
        do {
          result = *(_QWORD*)result;
        } while ((__int64*)result != v8 && result != 0);
        if (result != 0) {
        LABEL_36:
          v25 = v9;
          result = GameRoutine_59d3b0(v9);
          v24[0] = result;
          if (result != 0) {
            v11 = GameData_212eb78[0];
            v12 = *GameData_212eb78[0];
            v13 = **(_QWORD**)GameData_212eb78[0];
            if (v13 != 0) {
              v14 = *(_QWORD*)(v13 + 16);
              v15 = *(_QWORD*)(v12 + 8);
              if (v15 != 0) {
              LABEL_22:
                v16 = *(_QWORD*)(v15 + 16);
                goto LABEL_25;
              }
            }
            else {
              v14 = 0;
              v15 = *(_QWORD*)(v12 + 8);
              if (v15 != 0) {
                goto LABEL_22;
              }
            }
            v16 = 0;
          LABEL_25:
            GameRoutine_1363800(v24, &v25, v14, v16);
            v17 = *v11;
            v18 = *(_QWORD*)(*v11 + 24);
            if (v18 != 0) {
              v19 = *(_QWORD*)(v18 + 16);
              v20 = *(_QWORD*)(v17 + 32);
              if (v20 != 0) {
              LABEL_27:
                v21 = *(_QWORD*)(v20 + 16);
                return GameRoutine_1363800(v24, &v25, v19, v21);
              }
            }
            else {
              v19 = 0;
              v20 = *(_QWORD*)(v17 + 32);
              if (v20 != 0) {
                goto LABEL_27;
              }
            }
            v21 = 0;
            return GameRoutine_1363800(v24, &v25, v19, v21);
          }
        }
      }
    }
  }
  return result;
}

__int64 Layout_13636c0(__int64 result)
{
  unsigned int v3;
  char** v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;

  if ((*(_BYTE*)(result + 1864) & 1) != 0 ||
      (*(_BYTE*)(result + 1976) & 1) != 0 || *(_BYTE*)(result + 24) != 1 ||
      (*(_BYTE*)(result + 2368) & 1) == 0 || *(_BYTE*)(result + 2376) != 0) {
    return result;
  }
  v3 = *(_DWORD*)(result + 2372);
  v8_.v8[0] = GameData_202f0c8;
  v8_.v8[1] = result;
  v8_.v9 = v8_.v8;
  v12_.v13 = v12_.v12;
  v10_.v11 = v10_.v10;
  v4 = *(char***)(*game_g_frame_clock_ptr[0] + 16664);
  v12_.v12[0] = GameData_2109ae8;
  v10_.v10[0] = GameData_2109b78;
  GameRoutine_beefc0(v4, (__int64)v8_.v8, (__int64)v12_.v12, (__int64)v10_.v10,
                     1u, v3, 0);
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
LABEL_11:
  if (v12_.v13 == v12_.v12) {
    v6 = 32;
    goto LABEL_15;
  }
  if (v12_.v13 != nullptr) {
    v6 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v12_.v13 + v6))((__int64)v12_.v13);
  }
  result = (__int64)v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v7 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
}

__int64* Layout_13639a0(__int64* result, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  atomic_uchar* v5;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 i;

  v2 = *(_QWORD*)(a2 + 24);
  v4 = result;
  v5 = (atomic_uchar*)GameData_212dfd0;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_21f8028);
    if ((_DWORD)result != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result);
      result = (__int64*)__cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v2 != 0) {
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    if (result == &GameData_21f8020) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_21f8020 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v7 = (_QWORD*)v4[285];
      v8 = v4 + 284;
      while (v7 != v8) {
        v9 = *(_QWORD*)(v7[2] + 8LL);
        if (v9 != 0) {
          v10 = *(_QWORD*)(v9 + 24);
          if ((atomic_load_explicit(v5, memory_order_acquire) & 1) != 0) {
            goto LABEL_15;
          }
        }
        else {
          v10 = 0;
          if ((atomic_load_explicit(v5, memory_order_acquire) & 1) != 0) {
            goto LABEL_15;
          }
        }
        result = (__int64*)__cxa_guard_acquire(v5);
        if ((_DWORD)result != 0) {
          GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result);
          result = (__int64*)__cxa_guard_release(v5);
        }
      LABEL_15:
        if (v10 == 0) {
          goto LABEL_23;
        }
        result =
            (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        if (result != &GameData_21f8020) {
          do {
            result = (__int64*)*result;
          } while (result != &GameData_21f8020 && result != nullptr);
          if (result == nullptr) {
          LABEL_23:
            v10 = 0;
          }
        }
        if (v10 == v2) {
          if (v7 != v8) {
            v12 = (_QWORD*)v7[1];
            *(_QWORD*)(*v7 + 8LL) = v12;
            *v12 = *v7;
            --v4[286];
            v13 = v7[3];
            if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
              std___1___shared_weak_count___release_weak(v13);
            }
            v14 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v14 = 56;
            }
            result = (__int64*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
          }
          break;
        }
        v7 = (_QWORD*)v7[1];
      }
    }
  }
  v15 = a2 + 72;
  for (i = *(_QWORD*)(a2 + 80); i != v15; i = *(_QWORD*)(i + 8)) {
    result = (__int64*)Layout_13639a0(v4, *(_QWORD*)(i + 16));
  }
  return result;
}

__int64* Layout_1363bc0(__int64* result, _QWORD* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v19;
  __int64* v20;
  __int64 v21;

  v2 = (__int64*)result[285];
  v3 = result + 284;
  if (v2 != result + 284) {
    v4 = *a2;
    v5 = result;
    if (*a2 != 0) {
      v6 = strlen(*a2);
      while (1) {
        v7 = v2[2];
        v8 = *(_BYTE*)(v7 + 48);
        v9 = *(_QWORD*)(v7 + 64);
        v10 = v7 + 49;
        if ((v8 & 1) != 0) {
          v11 = v9;
        }
        else {
          v11 = v10;
        }
        if (v11 != 0) {
          result = (__int64*)strlen(v11);
          v12 = (__int64)result - v6;
          if ((unsigned __int64)result < v6) {
            goto LABEL_4;
          }
        }
        else {
          result = nullptr;
          v12 = -(__int64)v6;
          if (v6 != 0) {
            goto LABEL_4;
          }
        }
        result = (__int64*)memcmp(v11 + v12, v4, v6);
        if ((_DWORD)result == 0) {
          break;
        }
      LABEL_4:
        v2 = (__int64*)v2[1];
        if (v2 == v3) {
          return result;
        }
      }
    }
    if (v2 != v3) {
      v13 = (__int64*)v2[1];
      v14 = *(_QWORD**)(v2[2] + 8);
      *(_QWORD*)(*v2 + 8) = v13;
      *v13 = *v2;
      --v5[286];
      v15 = v2[3];
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
      v17 = (_QWORD*)v14[3];
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                memory_order_acquire) &
           1) == 0) {
        result = (__int64*)__cxa_guard_acquire(&GameData_21f8028);
        if ((_DWORD)result != 0) {
          GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result);
          result = (__int64*)__cxa_guard_release(&GameData_21f8028);
        }
      }
      if (v17 != nullptr) {
        result = (__int64*)(*(__int64 (**)(_QWORD*))(*v17 + 16LL))(v17);
        if (result == &GameData_21f8020) {
          goto LABEL_28;
        }
        do {
          result = (__int64*)*result;
        } while (result != &GameData_21f8020 && result != nullptr);
        if (result != nullptr) {
        LABEL_28:
          if (*((_BYTE*)v5 + 24) != 0) {
            v19 = v5 + 19;
          }
          else {
            v19 = nullptr;
          }
          if (v17 + 27 != v19 + 9) {
            v20 = (__int64*)v17[28];
            v21 = *v20;
            *(_QWORD*)(v17[27] + 8LL) = v20;
            *v20 = v17[27];
            *(_QWORD*)(v21 + 8) = v17 + 27;
            v17[27] = v21;
          }
          GameRoutine_579280(v14, *game_g_frame_clock_ptr[0] + 568);
          (*(void (**)(_QWORD*))(*v14 + 8LL))(v14);
          return (__int64*)LayoutEx_5791a0(v14);
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

Layout_1363e00(PSEUDO_X8 x8_, unsigned __int64 result, _QWORD* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  if (a2[1] == 0) {
    goto LABEL_17;
  }
  v4 = *(_QWORD**)(result + 2280);
  v5 = (_QWORD*)(result + 2272);
  if (v4 == (_QWORD*)(result + 2272)) {
    goto LABEL_17;
  }
  v6 = *a2;
  if (*a2 != 0) {
    v7 = strlen(*a2);
    while (1) {
      v8 = v4[2];
      v9 = *(_BYTE*)(v8 + 48);
      v10 = *(_QWORD*)(v8 + 64);
      v11 = v8 + 49;
      if ((v9 & 1) != 0) {
        v12 = v10;
      }
      else {
        v12 = v11;
      }
      if (v12 != 0) {
        result = strlen(v12);
        v13 = result - v7;
        if (result < v7) {
          goto LABEL_5;
        }
      }
      else {
        result = 0;
        v13 = -(__int64)v7;
        if (v7 != 0) {
          goto LABEL_5;
        }
      }
      result = memcmp(v12 + v13, v6, v7);
      if ((_DWORD)result == 0) {
        break;
      }
    LABEL_5:
      v4 = (_QWORD*)v4[1];
      if (v4 == v5) {
        goto LABEL_17;
      }
    }
  }
  if (v4 == v5) {
  LABEL_17:
    *a3 = 0;
    a3[1] = 0;
  }
  else {
    *a3 = v4[2];
    v14 = v4[3];
    a3[1] = v14;
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                memory_order_relaxed);
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8 x8_, __int64* result,
                                               __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64* v5;
  atomic_uchar* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;

  if (a2 == 0) {
    goto LABEL_25;
  }
  v4 = (__int64*)result[285];
  v5 = result + 284;
  if (v4 == result + 284) {
    goto LABEL_25;
  }
  v7 = (atomic_uchar*)GameData_212dfd0;
  v8 = GameData_212dfc8;
  while (1) {
    v9 = *(_QWORD*)(v4[2] + 8);
    if (v9 != 0) {
      v10 = *(_QWORD*)(v9 + 24);
      if ((atomic_load_explicit(v7, memory_order_acquire) & 1) != 0) {
        goto LABEL_8;
      }
    }
    else {
      v10 = 0;
      if ((atomic_load_explicit(v7, memory_order_acquire) & 1) != 0) {
        goto LABEL_8;
      }
    }
    result = (__int64*)__cxa_guard_acquire(v7);
    if ((_DWORD)result != 0) {
      *v8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
      result = (__int64*)__cxa_guard_release(v7);
    }
  LABEL_8:
    if (v10 == 0) {
      goto LABEL_16;
    }
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    if (result != v8) {
      do {
        result = (__int64*)*result;
      } while (result != v8 && result != nullptr);
      if (result == nullptr) {
      LABEL_16:
        v10 = 0;
      }
    }
    if (v10 == a2) {
      break;
    }
    v4 = (__int64*)v4[1];
    if (v4 == v5) {
      goto LABEL_25;
    }
  }
  if (v4 == v5) {
  LABEL_25:
    *a3 = 0;
    a3[1] = 0;
    {
      result;
      return;
    }
  }
  v12 = v4[3];
  *a3 = v4[2];
  a3[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64* Layout_1364020(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v3 = *(_QWORD*)(a2 + 232);
  v7 = *(_QWORD*)(v3 + 80);
  v8 = v3 + 72;
  while (v7 != v8) {
    v9 = LayoutEx_57cf40(*(_QWORD*)(a3 + 232), v7 - 40);
    if (v9 != 0) {
      Layout_1364020(a1, v7 - 216, v9);
    }
    v7 = *(_QWORD*)(v7 + 8);
  }
  result = X8CALL_X0(__int64*, Layout_1363f00((void*)(&v24), a1, a2));
  v11 = v25;
  if (v25 != 0) {
    v12 = std___1___shared_weak_count_lock(v25);
    if (v12 == 0) {
      v22 = v11;
      return (__int64*)std___1___shared_weak_count___release_weak(v22);
    }
    v13 = v24;
    v14 = v12;
    result = (__int64*)std___1___shared_weak_count___release_weak(v11);
    if (v13 != 0) {
      Layout_1363f00((void*)(&v24), a1, a3);
      result = (__int64*)v25;
      if (v25 == 0 ||
          (v15 = *(_QWORD*)(v25 + 8),
           result = (__int64*)std___1___shared_weak_count___release_weak(v25),
           v15 == -1)) {
        if (*(_QWORD*)(a3 + 232) != 0) {
          result = (*(_QWORD * (**)(__int64* __return_ptr, __int64))(
              *(_QWORD*)v13 + 16LL))(&v24, v13);
          v16 = v24;
          if (v24 != 0) {
            v17 = (__int64*)a1[285];
            v18 = a1 + 284;
            if (v17 == a1 + 284) {
              goto LABEL_16;
            }
            while (v17[2] != v24) {
              v17 = (__int64*)v17[1];
              if (v17 == v18) {
                goto LABEL_16;
              }
            }
            if (v17 == v18) {
            LABEL_16:
              v19 = (__int64*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
              v20 = v25;
              v19[2] = v16;
              v19[3] = v20;
              if (v20 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8),
                                          1u, memory_order_relaxed);
              }
              v21 = a1[284];
              *v19 = v21;
              v19[1] = (__int64)v18;
              *(_QWORD*)(v21 + 8) = v19;
              a1[284] = (__int64)v19;
              ++a1[286];
              result = (__int64*)(*(__int64 (**)(__int64, __int64*))(
                  *(_QWORD*)v16 + 128LL))(v16, &v24);
            }
          }
        }
        else {
          v24 = 0;
          v25 = 0;
        }
        v23 = v25;
        if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
          result = (__int64*)std___1___shared_weak_count___release_weak(v23);
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      v22 = v14;
      return (__int64*)std___1___shared_weak_count___release_weak(v22);
    }
  }
  return result;
}

__n128 Layout_ControlCreator_Unknown2(__int64 a1, __int64 a2, __int64 a3,
                                      const char** a4)
{
  __n128 result;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  const char* v18[2];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v18[0] = *a4;
  v18[1] = (const char*)strlen(v18[0]),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_13678f0((void*)(&v16_.v16), ui_Manager_instance_, v18,
                      (__int64)a4, a3, *(_QWORD*)(a1 + 8)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = v16_.v16;
  if (v16_.v16 != 0) {
    v9 = *(_QWORD**)(a1 + 8);
    v10 = (_QWORD*)v9[285];
    v11 = v9 + 284;
    if (v10 == v9 + 284) {
      goto LABEL_5;
    }
    while (v10[2] != v16_.v16) {
      v10 = (_QWORD*)v10[1];
      if (v10 == v11) {
        goto LABEL_5;
      }
    }
    if (v10 == v11) {
    LABEL_5:
      v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v13 = v16_.v17;
      v12[2] = v8;
      v12[3] = v13;
      if (v13 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                  memory_order_relaxed);
      }
      v12[1] = v11;
      v14 = v9[284];
      *v12 = v14;
      *(_QWORD*)(v14 + 8) = v12;
      v9[284] = v12;
      ++v9[286];
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v8 + 128LL))(v8, &v16_.v16),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v15 = v16_.v17;
  if (v16_.v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16_.v17 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1();
  }
  return result;
}

__int64 ui_Layout_Draw_lambda0_Invoke(__int64 a1, _QWORD* a2, __int64 a3,
                                      __int64 a4, _QWORD* a5)
{
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v10;
  __int64 v11;
  _BYTE v13[4];

  v5 = *(_QWORD*)(a1 + 8);
  v6 = *((_DWORD*)a5 + 4);
  v7 = *((_DWORD*)a5 + 5);
  (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 1);
  v10 = *a2;
  (*(void (**)(_BYTE*))GameData_212e4c0[0])(v13);
  (*(void (**)(_BYTE*, __int64))GameData_212e878[0])(v13, 2);
  (*(void (**)(__int64, _BYTE*))GameData_212e868[0])(v10 + 8, v13);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 96LL))(*a2, *a5, a5[1]);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, v6, v7);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, v6, v7);
  v11 = a2[2];
  GameRoutine_5fc6a0(v5 + 2200, *a5, a5[1]);
  *(_QWORD*)(v5 + 504) = v5 + 2200;
  if ((unsigned int)LayoutEx_57d060(v5 + 152) != 0) {
    GameRoutine_5fc660(v5 + 1984, *a5);
    DrawInfo_5769c0(v5 + 256, v5 + 1984, v6, v7);
    GameRoutine_57c640(v5 + 152, *game_g_frame_clock_ptr[0] + 568, v5 + 256,
                       v11);
    DrawInfo_5769c0(v5 + 256, v5 + 1984, (unsigned int)(int)*(float*)(v5 + 192),
                    (unsigned int)(int)*(float*)(v5 + 196));
    (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 96LL))(*a2, *a5,
                                                                 a5[1]);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, v6, v7);
    (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, v6, v7);
    v11 = a2[2];
  }
  return LayoutEx_Unknown14(v5 + 152, v5 + 256, v11);
}

_QWORD* Layout_1364900(float* a1, _QWORD* a2, __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD** v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  _QWORD* v18;
  __int64* v19;
  float v20;
  __int64 v21;
  __int64 v22;
  float v23;
  float v24;
  _BOOL8 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 primeEm;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;

  v5 = *a2;
  v6 = a2[1];
  v9 = std___1___hash_memory(*a2, v6);
  v10 = *((_QWORD*)a1 + 1);
  v11 = v9;
  if (v10 != 0) {
    v12 = v10 - 1;
    if ((v10 & (v10 - 1)) != 0) {
      v4 = v9;
      if (v9 >= v10) {
        v4 = v9 % v10;
      }
    }
    else {
      v4 = v12 & v9;
    }
    v13 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v4);
    if (v13 != nullptr) {
      v14 = *v13;
      if (*v13 != nullptr) {
        if ((v10 & v12) == 0) {
          while (1) {
            v16 = v14[1];
            if (v16 == v11) {
              if (v14[3] == v6 && (unsigned int)memcmp(v14[2], v5, v6) == 0) {
                return v14;
              }
            }
            else if ((v16 & v12) != v4) {
              goto LABEL_25;
            }
            v14 = (_QWORD*)*v14;
            if (v14 == nullptr) {
              goto LABEL_25;
            }
          }
        }
        do {
          v15 = v14[1];
          if (v15 == v11) {
            if (v14[3] == v6 && (unsigned int)memcmp(v14[2], v5, v6) == 0) {
              return v14;
            }
          }
          else {
            if (v15 >= v10) {
              v15 %= v10;
            }
            if (v15 != v4) {
              break;
            }
          }
          v14 = (_QWORD*)*v14;
        } while (v14 != nullptr);
      }
    }
  }
LABEL_25:
  v17 = (__int64*)fw_memory_g_heap_manager_ptr;
  v18 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v19 = *a4;
  *v18 = 0;
  v18[1] = v11;
  v20 = a1[8];
  v14 = v18;
  v22 = *v19;
  v21 = v19[1];
  v18[4] = 0;
  v18[5] = 0;
  v18[2] = v22;
  v18[3] = v21;
  v23 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v10 == 0 || (float)(v20 * (float)v10) < v23) {
    v24 = v23 / v20;
    v25 = true;
    if (v10 >= 3) {
      v25 = (v10 & (v10 - 1)) != 0;
    }
    v26 = v25 | (2 * v10);
    v27 = vcvtps_u64_f32(v24);
    if (v26 <= v27) {
      v28 = v27;
    }
    else {
      v28 = v26;
    }
    if (v28 == 1) {
      v28 = 2;
    }
    else if ((v28 & (v28 - 1)) != 0) {
      primeEm = std___1___next_prime(v28);
      v10 = *((_QWORD*)a1 + 1);
      v28 = primeEm;
    }
    if (v28 <= v10) {
      if (v28 >= v10) {
        goto LABEL_86;
      }
      v35 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
        v35 = std___1___next_prime(v35);
      }
      else {
        v36 = 1LL << -(char)__clz(v35 - 1);
        if (v35 >= 2) {
          v35 = v36;
        }
      }
      if (v28 <= v35) {
        v28 = v35;
      }
      if (v28 >= v10) {
        goto LABEL_86;
      }
      if (v28 == 0) {
        v48 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v48 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*v17 + 200) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v17 + v49);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_86;
      }
    }
    if (v28 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v30 = fw_memory_HeapManager_Allocate_alt1(*v17, 8 * v28, 16, 0);
    v31 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v30;
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v17 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v17 + v32);
    }
    v33 = v28 & 7;
    *((_QWORD*)a1 + 1) = v28;
    if (v28 >= 8) {
      v34 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v34 + 48) = 0;
        v37 = *(_QWORD*)a1 + 8 * v34;
        v34 += 8;
        *(_QWORD*)(v37 + 56) = 0;
      } while ((v28 & 0x1FFFFFFFFFFFFFF8LL) != v34);
    }
    else {
      v34 = 0;
    }
    if ((v28 & 7) != 0) {
      v38 = 8 * v34;
      do {
        --v33;
        *(_QWORD*)(*(_QWORD*)a1 + v38) = 0;
        v38 += 8;
      } while (v33 != 0);
    }
    v40 = (__int64*)(a1 + 4);
    v39 = *((_QWORD**)a1 + 2);
    if (v39 != nullptr) {
      v41 = v39[1];
      v42 = v28 - 1;
      if ((v28 & (v28 - 1)) != 0) {
        if (v41 >= v28) {
          v41 %= v28;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v40;
        v43 = (_QWORD*)*v39;
        if (*v39 == 0) {
          goto LABEL_86;
        }
        while (1) {
          v44 = v43[1];
          if (v44 >= v28) {
            v44 %= v28;
          }
          if (v44 != v41) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v39;
              goto LABEL_63;
            }
            *v39 = *v43;
            *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
            v43 = v39;
          }
          v44 = v41;
        LABEL_63:
          v39 = v43;
          v43 = (_QWORD*)*v43;
          v41 = v44;
          if (v43 == nullptr) {
            goto LABEL_86;
          }
        }
      }
      v45 = v41 & v42;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v45) = v40;
      while (1) {
        v46 = (_QWORD*)*v39;
        if (*v39 == 0) {
          break;
        }
        v47 = v46[1] & v42;
        if (v47 == v45) {
          v39 = (_QWORD*)*v39;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v47) != 0) {
          *v39 = *v46;
          *v46 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v47);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v47) = v46;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v47) = v39;
          v39 = v46;
          v45 = v47;
        }
      }
    }
  LABEL_86:
    v10 = *((_QWORD*)a1 + 1);
    if ((v10 & (v10 - 1)) != 0) {
      if (v11 >= v10) {
        v4 = v11 % v10;
      }
      else {
        v4 = v11;
      }
    }
    else {
      v4 = (v10 - 1) & v11;
    }
  }
  v50 = *(_QWORD*)a1;
  v51 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v51 != nullptr) {
    *v14 = *v51;
    *v51 = v14;
  }
  else {
    v52 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v14;
    *v14 = v52;
    *(_QWORD*)(v50 + 8 * v4) = a1 + 4;
    if (*v14 != 0) {
      v53 = *(_QWORD*)(*v14 + 8LL);
      if ((v10 & (v10 - 1)) != 0) {
        if (v53 >= v10) {
          v53 %= v10;
        }
      }
      else {
        v53 &= v10 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v14;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v14;
}

__attribute__((swiftcall)) void

Layout_1685360(__attribute__((swift_indirect_result)) void* x8_, __int64 a1,
               __int64 a2, _QWORD* a3, _QWORD* a4, __n128 result)
{
  __int64* a5 = (__int64*)(unsigned __int64)x8_;
  __int64 v7;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  atomic_uchar* v18;
  __int64* v19;
  __int64* v20;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 i;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v7 = *(_QWORD*)(a2 + 8);
  if (v7 == 0) {
    goto LABEL_65;
  }
  v12 = std___1___shared_weak_count_lock(v7);
  if (v12 == 0) {
    goto LABEL_65;
  }
  v13 = *(_QWORD**)a2;
  v14 = v12;
  if (*(_QWORD*)a2 == 0) {
    goto LABEL_62;
  }
  v15 = v13[1];
  if (*(_QWORD*)(*(_QWORD*)(v15 + 24) + 24LL) == 0) {
    goto LABEL_62;
  }
  v16 = *(_BYTE*)(a1 + 24) != 0 ? a1 + 152 : 0LL;
  if (a4 != nullptr) {
    v46 = v16;
    v17 = a4;
    v18 = (atomic_uchar*)GameData_212dfd0;
    v19 = GameData_212dfc8;
    do {
      if ((atomic_load_explicit(v18, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(v18) != 0) {
        *v19 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
        __cxa_guard_release(v18);
      }
      v20 = (__int64*)(*(__int64 (**)(_QWORD*))(*v17 + 16LL))(v17);
      if (v20 == v19) {
        goto LABEL_22;
      }
      do {
        v20 = (__int64*)*v20;
      } while (v20 != v19 && v20 != nullptr);
      if (v20 != nullptr) {
      LABEL_22:
        v16 = v17[29];
        if (v15 != 0) {
          goto LABEL_26;
        }
        goto LABEL_62;
      }
      v17 = (_QWORD*)v17[3];
    } while (v17 != nullptr);
    v16 = v46;
    if (v15 == 0) {
      goto LABEL_62;
    }
  }
  else {
    a4 = *(_QWORD**)(a1 + 176);
  }
LABEL_26:
  if (*(_QWORD*)(*(_QWORD*)(v15 + 24) + 24LL) == 0) {
    goto LABEL_62;
  }
  v22 = (_QWORD*)LayoutEx_579180(96);
  if (v22 == nullptr) {
    goto LABEL_62;
  }
  v23 = v22;
  v24 = GameData_2130ec0[0];
  v22[2] = v22 + 1;
  v47 = v16;
  *v22 = v24 + 16;
  v22[1] = v22 + 1;
  v22[9] = v22 + 9;
  v22[10] = v22 + 9;
  LayoutEx_57b150();
  v25 = v23[3];
  LayoutEx_58d200(v25, *a3);
  Pane_58dee0(a4, v25);
  for (i = *(_QWORD*)(v15 + 80); i != v15 + 72; i = *(_QWORD*)(i + 8)) {
    v27 = LayoutEx_57cf40(v23, i - 40);
    if (v27 != 0) {
      Layout_1364020_alt1(a1, i - 216, v27);
    }
  }
  (*(void (**)(__int64* __return_ptr, _QWORD*, _QWORD*))(*v13 + 16LL))(
      &v48, v13, v23);
  if (v48 != 0 && (v28 = __dynamic_cast(v48, GameData_212dfc0[0],
                                        GameData_212fc60[0], 0)) != 0) {
    v50 = v28;
    v51 = v49;
    v29 = &v48;
  }
  else {
    v29 = &v50;
  }
  *v29 = 0;
  v29[1] = 0;
  v30 = v49;
  if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = std___1___shared_weak_count___release_weak_alt2(v30);
  }
  v31 = v50;
  if (v50 == 0) {
    v39 = v51;
    if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v39 + 16LL))(
          v39, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak_alt2(v39);
    }
    v40 = v47 + 72;
    if (*(_QWORD*)(v47 + 80) != v47 + 72) {
      v41 = *(_QWORD**)(*(_QWORD*)v40 + 16LL);
      if (v41 == v23) {
        v42 = *game_g_frame_clock_ptr[0];
        Layout_13639a0_alt1(a1, *(_QWORD*)(*(_QWORD*)v40 + 16LL),
                            *(long double*)&result);
        v43 = *(__int64**)v40;
        v44 = *(__int64**)(*(_QWORD*)v40 + 8LL);
        v45 = *v44;
        *(_QWORD*)(**(_QWORD**)v40 + 8LL) = v44;
        *v44 = *v43;
        *(_QWORD*)(v45 + 8) = v43;
        *v43 = v45;
        Layout_579280(v41, v42 + 568);
        (*(void (**)(_QWORD*))(*v41 + 8LL))(v41);
        LayoutEx_5791a0(v41);
      }
    }
  LABEL_62:
    v38 = 0;
    goto LABEL_63;
  }
  v32 = v51;
  v48 = v50;
  v49 = v51;
  if (v51 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                              memory_order_relaxed);
  }
  v33 = *(_QWORD*)(a1 + 2280);
  v34 = a1 + 2272;
  if (v33 == a1 + 2272) {
    goto LABEL_46;
  }
  while (*(_QWORD*)(v33 + 16) != v31) {
    v33 = *(_QWORD*)(v33 + 8);
    if (v33 == v34) {
      goto LABEL_46;
    }
  }
  if (v33 == v34) {
  LABEL_46:
    v35 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v35[2] = v31;
    v35[3] = v32;
    if (v32 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                memory_order_relaxed);
    }
    v36 = *(_QWORD*)(a1 + 2272);
    *v35 = v36;
    v35[1] = v34;
    *(_QWORD*)(v36 + 8) = v35;
    *(_QWORD*)(a1 + 2272) = v35;
    ++*(_QWORD*)(a1 + 2288);
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v31 + 128LL))(v31, &v48);
    v32 = v49;
  }
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    result = std___1___shared_weak_count___release_weak_alt2(v32);
  }
  v37 = v51;
  *a5 = v50;
  a5[1] = v37;
  if (v37 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v37 + 16LL))(
          v37, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak_alt2(v37);
    }
  }
  v38 = 1;
LABEL_63:
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v38 & 1) != 0) {
      result;
      return;
    }
    goto LABEL_65;
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
      v14, *(long double*)&result);
  result = std___1___shared_weak_count___release_weak_alt2(v14);
  if ((v38 & 1) == 0) {
  LABEL_65:
    *a5 = 0;
    a5[1] = 0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
