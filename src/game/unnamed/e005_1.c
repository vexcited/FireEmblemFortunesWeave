#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern _QWORD GameData_1b01768[4];
extern int GameData_1b9abf0[];
extern __int64 (*GameData_1fec818[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212ea58;
extern __int64 GameData_21ec7a8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern char GameData_2216850;
extern char GameData_2216858;
__int64 GameRoutine_10181a0(_QWORD, _QWORD);
__n128 GameRoutine_10c830(_QWORD, float);
__int64 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_176c370(_QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 GameRoutine_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_e9bcb0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f90cd0(_QWORD);
__attribute__((swiftcall)) void GameRoutine_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD,
                                                  _QWORD, double, float);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN GameData_1b9abf0_alt1 __asm__("GameData_1b9abf0");
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void GameHr_f3e780();

_QWORD* GameHr_ef8a80(_QWORD* result, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;

  v3 = result[30];
  if (result[31] == v3) {
    return result;
  }
  v4 = result;
  v5 = *(_QWORD*)(v3 + 32);
  if (v5 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
  v6 = (_QWORD*)v4[30];
  v7 = (_QWORD*)v4[31];
  v8 = v6 + 6;
  if (v6 + 6 != v7) {
    while (1) {
      v9 = (_QWORD*)*(v8 - 2);
      *(v8 - 2) = 0;
      if (v8 - 6 == v9) {
        break;
      }
      if (v9 != nullptr) {
        v10 = 40;
      LABEL_12:
        (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
      }
      result = (_QWORD*)v8[4];
      if (result != nullptr) {
        if (v8 == result) {
          *(v8 - 2) = v8 - 6;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8 - 6);
        }
        else {
          *(v8 - 2) = result;
          v8[4] = 0;
        }
      }
      else {
        *(v8 - 2) = 0;
      }
      v8 += 6;
      if (v8 == v7) {
        v7 = (_QWORD*)v4[31];
        v6 = v8 - 6;
        if (v8 - 6 == v7) {
          goto LABEL_18;
        }
      LABEL_24:
        while (2) {
          result = (_QWORD*)*(v7 - 2);
          v13 = v7 - 6;
          if (v7 - 6 != result) {
            if (result != nullptr) {
              v12 = 40;
            LABEL_22:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v12))(
                  (__int64)result);
            }
            v7 -= 6;
            if (v13 == v6) {
              goto LABEL_18;
            }
            continue;
          }
          break;
        }
        v12 = 32;
        goto LABEL_22;
      }
    }
    v10 = 32;
    goto LABEL_12;
  }
  if (v6 != v7) {
    goto LABEL_24;
  }
LABEL_18:
  v11 = (_QWORD*)v4[30];
  v4[31] = v6;
  if (v6 != v11) {
    *((_DWORD*)v4 + 38) = 1;
  }
  return result;
}

__int64 GameHr_f335e0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  char v5;
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
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;

  if (*(_QWORD*)(a1 + 152) == 0) {
    v4 = 0;
    v5 = 1;
    v19 = 0;
    v20 = 0;
    v6 = *GameData_212ea58;
    goto LABEL_31;
  }
  v2 = GameData_212ea58;
  v25 = *(_QWORD*)(a1 + 152);
  v21 = 0;
  v22 = 0;
  v24 = v23;
  v23[0] = GameData_1fec818;
  v23[1] = &v25;
  v23[2] = &v21;
  GameRoutine_e9a800(*GameData_212ea58, v23);
  if (v24 == v23) {
    v3 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_8;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v24 + v3))((__int64)v24);
LABEL_8:
  v7 = v21;
  if (v21 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(v21 + 16) + 440LL);
    if (v8 != 0 && (unsigned __int64)(v9 = *(unsigned __int8*)(v8 + 16)) <= 3) {
      v10 = GameData_1b01768[v9];
    }
    else {
      v10 = 3;
    }
    v11 = *v2 + (v10 << 7);
    v12 = *(_QWORD*)(v11 + 760);
    if (v12 != 0) {
      v13 = *(_QWORD*)(v11 + 752);
      v14 = *(_QWORD*)(v11 + 760);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      v15 = GameRoutine_1a0a0c0(v14);
      if (v15 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v16 = v15;
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          GameRoutine_1a09c50(v16);
        }
        GameRoutine_1a09c50(v12);
        if (v7 == v13) {
          v7 = 0;
          goto LABEL_19;
        }
      }
      else {
        GameRoutine_1a09c50(v12);
      }
    }
    if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
      *(_DWORD*)(*v2 + 1204) |= 1u;
    }
    v7 = v21;
    v4 = v22;
    if (v22 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                memory_order_relaxed);
    }
    goto LABEL_25;
  }
LABEL_19:
  v4 = 0;
LABEL_25:
  v17 = v22;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    GameRoutine_1a09c50(v17);
  }
  v6 = *v2;
  v19 = v7;
  v20 = v4;
  if (v4 != 0) {
    v5 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v5 = 1;
  }
LABEL_31:
  GameRoutine_e9bcb0(v6, a1, 0, &v19);
  result = v20;
  if (v20 != 0) {
    result = GameRoutine_1a09c50(v20);
  }
  if ((v5 & 1) == 0) {
    return GameRoutine_1a09c50(v4);
  }
  return result;
}

void GameHr_f3e780()
{
  _QWORD handle[2];
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  _WORD* v12;
  __int64 v13;
  struct {
    __int16 v14;
    char gap18_[6];
    unsigned __int64 v15;
    _WORD* v16;
  } v14_;
  _QWORD v17[25];

  v0 = *(_QWORD*)(GameData_2203490 + 888);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_2203490 + 880);
    v2 = *(_QWORD*)(GameData_2203490 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      v5 = *(_QWORD*)(v1 + 208);
      v14_.v14 = 0;
      *(_DWORD*)(*(_QWORD*)(v5 + 136) + 60LL) = 0;
      v6 = *(_QWORD*)(v1 + 208);
      v7 = *(_QWORD*)(v6 + 392);
      v8 = *(_QWORD*)(v6 + 400);
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        v9 = *(_DWORD*)(v7 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
      }
      else {
        v9 = *(_DWORD*)(v7 + 11784);
      }
      if ((unsigned int)(v9 - 2) <= 4) {
        GameRoutine_60a020_alt1(
            (__int64)&v14_.v14,
            (const char*)&GameData_1b9abf0_alt1 +
                *((int*)&GameData_1b9abf0_alt1 + (unsigned int)(v9 - 2)));
      }
      v10 = v14_.v14 & 1;
      v11 = (unsigned __int64)(unsigned __int8)v14_.v14 >> 1;
      if (v10 != 0) {
        v11 = v14_.v15;
      }
      if (v11 != 0) {
        v12 = v10 != 0 ? v14_.v16 : (__int16*)((char*)&v14_.v14 + 1);
        if (v12 != nullptr) {
          snd_Fade_Fade_10c830((__int64)v17, 0x0.0p+0f);
          snd_play_ff2d0((void*)(handle), (__int64)v12, (__int64)v12,
                         (__int64)v17, 0, 0x10001u, 0, 0x0.0p+0f,
                         0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade(v17);
          v10 = v14_.v14 & 1;
        }
      }
      if (v10 != 0 && v14_.v16 != nullptr) {
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v14_.v16);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

__int64 GameHr_f40b80(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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

  GameRoutine_10c830(&v16, 0.0f);
  GameRoutine_ff2d0((void*)(&v15), "FF_Capture_Failure", "FF_Capture_Failure",
                    &v16, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(&v16);
  result = GameRoutine_f90cd0(GameData_21ec7a8);
  v3 = *(_QWORD*)(GameData_2203490 + 888);
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_2203490 + 880);
    v5 = *(_QWORD*)(GameData_2203490 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = GameRoutine_1a0a0c0(v5);
    result = GameRoutine_1a09c50(v3);
    if (v6 == 0 || v4 == 0) {
      if (v6 == 0) {
        return result;
      }
    }
    else {
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0(result);
      }
      if (GameData_2216850 == 1) {
        v9 = *(_QWORD*)(v4 + 312);
        v8 = *(_QWORD*)(v4 + 320);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v10 = GameRoutine_1a0a0c0(v8);
        v11 = *(_QWORD*)(v9 + 8);
        v12 = *(_QWORD*)(v9 + 16);
        v13 = v10;
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          v17 = v12;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
        }
        else {
          v17 = 0;
        }
        v16 = v11;
        GameRoutine_176c370(a1, &v16);
        v14 = v17;
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          GameRoutine_1a09c50(v14);
        }
        if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          GameRoutine_1a09c50(v12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          GameRoutine_1a09c50(v13);
        }
        result = GameRoutine_1a09c50(v8);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return GameRoutine_1a09c50(v6);
    }
  }
  return result;
}

_QWORD* GameHr_1017b90(_QWORD* a1, _QWORD* a2)
{
  unsigned __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  char* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _BYTE v13[32];
  _BYTE* v14;

  if (a1 != a2) {
    v4 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v6 = (v4 & 1) == 0;
      v7 = v4 >> 1;
      if (v6) {
        v8 = (char*)a2 + 1;
      }
      else {
        v8 = (char*)a2[2];
      }
      if (v6) {
        v9 = v7;
      }
      else {
        v9 = a2[1];
      }
      GameRoutine_64dde0(a1, v8, v9);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20(a1, a2[2], a2[1]);
    }
    else {
      a1[1] = a2[1];
      v5 = *a2;
      a1[2] = a2[2];
      *a1 = v5;
    }
  }
  a1[3] = a2[3];
  v10 = (_QWORD*)a2[8];
  if (v10 != nullptr) {
    if (v10 == a2 + 4) {
      v14 = v13;
      (*(void (**)(_QWORD*, _BYTE*))(*v10 + 24LL))(v10, v13);
    }
    else {
      v14 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v10 + 16LL))(v10);
    }
  }
  else {
    v14 = nullptr;
  }
  GameRoutine_10181a0(v13, a1 + 4);
  if (v14 == v13) {
    v11 = 32;
    goto LABEL_22;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_22:
    (*(void (**)(__int64))(*(_QWORD*)v14 + v11))((__int64)v14);
  }
  return a1;
}

#pragma GCC visibility pop
