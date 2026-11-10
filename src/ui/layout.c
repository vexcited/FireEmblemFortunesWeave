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

#pragma GCC visibility pop
