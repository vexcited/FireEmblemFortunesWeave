#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_17e5d20(_QWORD, _QWORD);
__int64 GameRoutine_17e5d20_alt1(_QWORD*, int) __asm__("GameRoutine_17e5d20");
__int64 GameRoutine_17e6a30(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 PageTab_16e6880(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_sound_PlayPageBackSe(_QWORD);
__int64 game_sound_PlayPageSendSe(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 TutorialInfoImpl_17e5b40(__int64 result, __int64 a2);
__int64 TutorialInfoImpl_17e6660(__int64 a1, unsigned __int8 a2, char a3);
__int64 TutorialInfoImpl_17e67b0(__int64 a1, char a2);
__int64 TutorialInfoImpl_17e68f0(_QWORD* a1, __int64 a2);
__int64 TutorialInfoImpl_17e6c00(__int64 a1);
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
_QWORD* ui_LayoutAccessor_Setup_155dea0(__int64*, __int64*, __int64);
__attribute__((swiftcall)) void GameRoutine_1612a90(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 LayoutAccessor_155e140(__int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562f00(__int64 result, unsigned int*, float);
__int64 LayoutAccessor_1563030(__int64 result, unsigned int*, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*game_menu_TutorialInfoImpl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
float LayoutAccessor_15638b0(__int64*, char*, char);
void GameRoutine_1563f90(__int64, __int64);
void GameRoutine_1564060(__int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 TutorialInfoImpl_17e56c0(_QWORD* a1);
__int64 TutorialInfoImpl_17e5830(__int64 result, __int64 a2, __int64 a3,
                                 char a4);

__int64 TutorialInfoImpl_17e56c0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;

  *a1 = game_menu_TutorialInfoImpl_vtable;
  v2 = a1[38];
  if (v2 != 0 && (*(_WORD*)(v2 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(v2, 1);
  }
  v3 = a1[34];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[29];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = (_QWORD*)a1[26];
  if (v5 == a1 + 22) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_13:
  v7 = a1[18];
  if (v7 != 0) {
    a1[19] = v7;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v7);
  }
  LayoutAccessor_155e140(a1 + 3);
  v9 = a1[15];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  GameRoutine_1564060(a1 + 9);
  GameRoutine_1563f90((__int64)(a1 + 6), a1[7]);
  result = a1[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

__int64 TutorialInfoImpl_17e5830(__int64 result, __int64 a2, __int64 a3,
                                 char a4)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  _QWORD* v7;
  __int64 v8;
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
  __int64 v20;
  __int64 v21;
  __int64* v22;
  float v23;
  _QWORD v24[2];
  struct {
    __int64* v25;
    __int64 v26;
  } v25_;
  struct {
    __int64 v27;
    __int64 v28;
  } v27_;

  *(_QWORD*)(result + 24) = 0;
  v4 = (__int64*)(result + 24);
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 8) = a2;
  *(_QWORD*)(result + 16) = a3;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)result = game_menu_TutorialInfoImpl_vtable;
  *(_QWORD*)(result + 48) = result + 56;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_DWORD*)(result + 136) = 0;
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  *(_BYTE*)(result + 240) = 0;
  *(_QWORD*)(result + 256) = 0;
  *(_QWORD*)(result + 264) = 0;
  *(_DWORD*)(result + 104) = 1065353216;
  *(_QWORD*)(result + 272) = 0;
  *(_QWORD*)(result + 280) = 0;
  *(_QWORD*)(result + 288) = 0;
  *(_QWORD*)(result + 296) = 0;
  *(_QWORD*)(result + 304) = 0;
  *(_QWORD*)(result + 128) = 0xFFFFFFFFLL;
  *(_DWORD*)(result + 168) = 2;
  if (a3 != 0) {
    v5 = *(_QWORD*)(a3 + 16);
    v7 = (_QWORD*)result;
    if (v5 != 0) {
      v8 = *(_QWORD*)(a3 + 8);
      v9 = *(_QWORD*)(a3 + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v27_.v27 = 0;
      v10 = v7[1];
      v11 = std___1___shared_weak_count_lock_alt1(v9);
      v27_.v28 = v11;
      if (v11 != 0) {
        v12 = v11;
        v27_.v27 = v8;
        ui_LayoutAccessor_Setup_155dea0(v4, &v27_.v27, v10);
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
      LABEL_8:
        v13 = v7[4];
        v24[0] = "Img";
        v24[1] = 3;
        if (v13 != 0) {
          v13 = std___1___shared_weak_count_lock_alt1(v13);
          if (v13 != 0) {
            v14 = *v4;
            v15 = v13;
            if (*v4 != 0) {
              GameRoutine_1612a90((void*)((__int64*)&v25_.v25), *v4,
                                  (__int64)v24);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if (v14 != 0) {
              LABEL_14:
                v16 = (__int64)v25_.v25;
                v13 = v25_.v26;
                goto LABEL_18;
              }
            }
            else {
              (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
              std___1___shared_weak_count___release_weak_alt1(v15);
              if (v14 != 0) {
                goto LABEL_14;
              }
            }
            v13 = 0;
          }
        }
        v16 = 0;
      LABEL_18:
        v17 = v7[34];
        v25_.v25 = nullptr;
        v25_.v26 = 0;
        v7[33] = v16;
        v7[34] = v13;
        if (v17 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v17);
          if (v25_.v26 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v25_.v26);
          }
          v13 = v7[34];
        }
        if (v13 != 0) {
          v18 = std___1___shared_weak_count_lock_alt1(v13);
          if (v18 != 0) {
            v19 = v7[33];
            if (v19 != 0) {
              *(_BYTE*)(v19 + 256) = 0;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v20 = v18;
              (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
              std___1___shared_weak_count___release_weak_alt1(v20);
            }
          }
        }
        LayoutAccessor_1560070((void*)(&v25_.v25), v4, "L_NextCursor");
        result = v25_.v26;
        if (v25_.v26 == 0) {
          goto LABEL_38;
        }
        v21 = std___1___shared_weak_count_lock_alt1(v25_.v26);
        v22 = v25_.v25;
        result = v25_.v26;
        if (v25_.v26 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v25_.v26);
        }
        if (v21 != 0 && v22 != nullptr) {
          result = LayoutAccessor_155e830((__int64)v22, a4 & 1);
          if ((a4 & 1) != 0) {
            GameHr_1562680((__int64)v22, (unsigned int*)"In",
                           0x1.0000000000000p+0f);
            v23 = LayoutAccessor_15638b0(v22, "In", 0);
            LayoutAccessor_1562f00((__int64)v22, (unsigned int*)"In", v23);
            LayoutAccessor_1563030((__int64)v22, (unsigned int*)"In", 0);
            result = GameHr_1562680((__int64)v22, (unsigned int*)"Wait",
                                    0x1.0000000000000p+0f);
          }
        }
        else if (v21 == 0) {
        LABEL_38:
          if (v5 != 0) {
            return std___1___shared_weak_count___release_weak_alt1(v5);
          }
          return result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          result = std___1___shared_weak_count___release_weak_alt1(v21);
        }
        goto LABEL_38;
      }
    }
    else {
      v10 = a2;
      v27_.v27 = 0;
      v27_.v28 = 0;
    }
    ui_LayoutAccessor_Setup_155dea0(v4, &v27_.v27, v10);
    goto LABEL_8;
  }
  return result;
}

__int64 TutorialInfoImpl_17e5b40(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;

  if (*(_QWORD*)(result + 256) != a2) {
    v39 = v2;
    v40 = v3;
    *(_QWORD*)(result + 256) = a2;
    v4 = result;
    v5 = *(__int64***)(a2 + 40);
    v6 = *v5;
    v7 = v5[1];
    if (*v5 == v7) {
      v14 = -1;
    }
    else {
      v8 = 0;
      v9 = GameData_212e348 + 2;
      do {
        v10 = *v6++;
        v11 = *(_QWORD*)(v10 + 48);
        if (v11 == 0) {
          break;
        }
        v25 = -1;
        v26 = -1;
        v27 = -1;
        v28 = -1;
        v29 = -1;
        v30 = -1;
        v31 = -1;
        v32 = -1;
        v12 = *msg_MessageManager_instance__ptr[0];
        v33 = -1;
        v34 = -1;
        v35 = -1;
        v36 = -1;
        v37 = 8;
        v38 = 0;
        v23 = -65529;
        v24 = -65528;
        v22[0] = v9;
        v22[1] = 0xFFFF0001FFFF0000LL;
        v22[2] = 0xFFFF0004FFFF0002LL;
        v22[3] = 0xFFFF0006FFFF0005LL;
        v13 = (_BYTE*)GameRoutine_a4dbe0(v12, v11, 0, v22);
        if (v13 == nullptr) {
          break;
        }
        if (*v13 == 0) {
          break;
        }
        ++v8;
      } while (v6 != v7);
      v14 = v8 - 1;
    }
    *(_DWORD*)(v4 + 128) = v14;
    *(_QWORD*)(v4 + 132) = 0;
    GameRoutine_1560070((void*)&v20, v4 + 24, "L_PageTab");
    if (v21 != 0) {
      v15 = std___1___shared_weak_count_lock(v21);
      if (v15 != 0) {
        v16 = v20;
        v17 = v15;
        if (v20 != 0) {
          *(_DWORD*)(v4 + 168) = 1;
          v18 = v21;
          if (v21 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                      memory_order_relaxed);
          }
          v19 = *(_QWORD*)(v4 + 232);
          *(_QWORD*)(v4 + 224) = v16;
          *(_QWORD*)(v4 + 232) = v18;
          if (v19 != 0) {
            std___1___shared_weak_count___release_weak(v19);
          }
          PageTab_16e6880(v4 + 128, 2, 14, 15);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
      if (v21 != 0) {
        std___1___shared_weak_count___release_weak(v21);
      }
    }
    return GameRoutine_17e5d20(v4, 0);
  }
  return result;
}

__int64 TutorialInfoImpl_17e6660(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8 v12;
  int v13;
  __int64 v14;
  __int64 v15;

  v4 = *(_QWORD*)(a1 + 272);
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4);
    if (v7 != 0) {
      v8 = *(_BYTE**)(a1 + 264);
      if (v8 != nullptr) {
        if ((v8[240] & 1) != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v9 = v7;
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak(v9);
          }
          return 0;
        }
        v11 = v7;
        v12 = (unsigned __int8)X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                *(_QWORD*)v8 + 160LL))((void*)v8, *(_QWORD*)(a1 + 264)));
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v12 & 1) != 0) {
            return 0;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
          if ((v12 & 1) != 0) {
            return 0;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  if ((game_menu_PageTab_Move(a1 + 128, 1, a2 & (unsigned __int8)~a3 & 1) &
       1) == 0) {
    return 0;
  }
  v13 = *(_DWORD*)(a1 + 132);
  v14 = *(_QWORD*)(a1 + 144);
  if (v13 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 152) - v14) >> 2)) {
    v13 = *(_DWORD*)(v14 + 4LL * v13);
  }
  v15 = GameRoutine_17e5d20_alt1((_QWORD*)a1, v13);
  game_sound_PlayPageSendSe(v15);
  return 1;
}

__int64 TutorialInfoImpl_17e67b0(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 v10;
  int v11;
  __int64 v12;
  __int64 v13;

  v3 = *(_QWORD*)(a1 + 272);
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = *(_BYTE**)(a1 + 264);
      if (v6 != nullptr) {
        if ((v6[240] & 1) != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v7 = v5;
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v7);
          }
          return 0;
        }
        v9 = v5;
        v10 = (unsigned __int8)X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                *(_QWORD*)v6 + 160LL))((void*)v6, *(_QWORD*)(a1 + 264)));
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v10 & 1) != 0) {
            return 0;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
          if ((v10 & 1) != 0) {
            return 0;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  if ((game_menu_PageTab_Move(a1 + 128, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  v11 = *(_DWORD*)(a1 + 132);
  v12 = *(_QWORD*)(a1 + 144);
  if (v11 < (unsigned __int64)((*(_QWORD*)(a1 + 152) - v12) >> 2)) {
    v11 = *(_DWORD*)(v12 + 4LL * v11);
  }
  v13 = GameRoutine_17e5d20_alt1((_QWORD*)a1, v11);
  game_sound_PlayPageBackSe(v13);
  return 1;
}

__int64 TutorialInfoImpl_17e68f0(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8 v11;
  __int64 result;

  v3 = a1[38];
  if (v3 != 0) {
    if ((*(_WORD*)(v3 + 136) & 1) == 0) {
      ProcInst_657a50(v3, 1);
    }
    a1[38] = 0;
  }
  v5 = a1[34];
  if (v5 != 0) {
    v6 = std___1___shared_weak_count_lock(v5);
    if (v6 != 0) {
      v7 = (_BYTE*)a1[33];
      if (v7 != nullptr) {
        if ((v7[240] & 1) != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v8 = v6;
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            std___1___shared_weak_count___release_weak(v8);
          }
          goto LABEL_15;
        }
        v10 = v6;
        v11 = (unsigned __int8)X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                *(_QWORD*)v7 + 160LL))((void*)v7, a1[33]));
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v11 & 1) != 0) {
          LABEL_15:
            result = GameRoutine_17e6a30(a1, a2);
            a1[38] = result;
            return result;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
          if ((v11 & 1) != 0) {
            goto LABEL_15;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v6;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  return TutorialInfoImpl_17e5b40((__int64)a1, a2);
}

__int64 TutorialInfoImpl_17e6c00(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8 v9;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = *(_QWORD*)(v1 + 272);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock(v3);
    if (v4 != 0) {
      v5 = *(_BYTE**)(v1 + 264);
      if (v5 != nullptr) {
        if ((v5[240] & 1) != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v6 = v4;
            (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
            std___1___shared_weak_count___release_weak(v6);
          }
          return 1;
        }
        v8 = v4;
        v9 = (unsigned __int8)X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                *(_QWORD*)v5 + 160LL))((void*)v5, *(_QWORD*)(v1 + 264)));
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v9 & 1) != 0) {
            return 1;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
          if ((v9 & 1) != 0) {
            return 1;
          }
        }
      }
      else if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v4;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  TutorialInfoImpl_17e5b40(*(_QWORD*)(a1 + 152), *(_QWORD*)(a1 + 160));
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + 304LL) = 0;
  return 0;
}

#pragma GCC visibility pop
