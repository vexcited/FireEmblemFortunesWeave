#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_151b980();
__int64 SpotMgr_132ffa0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2049fb0[])();
extern __int64 (*game_gmap_SpotAttachmentDispatch_vtable)();
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21c96e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c780;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 SpotAttachmentFort_Unknown30(__int64 a1);
_QWORD* SpotAttachmentFort_Unknown16(__int64 a1, __int64 a2);
__int64 SpotAttachmentFort_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "SpotAttachmentFort_DeletingDestructor");
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1a9a50c;
extern __int64 GameData_21c9ed0;
__int64 SpotAttachmentFort_151b980();
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_888610(void);
__int64 game_gmap_SpotAttachmentFort_OnStartPhase_lambda0_Invoke(__int64 result,
                                                                 __int64* a2);
__int64 game_gmap_SpotAttachmentFort_OnEndPhase_lambda0_Invoke(__int64 a1,
                                                               __int64* a2);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gmap_1340560(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_1a83910;
extern __int64 (*GameData_2049f30[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d1e0[2];
extern __int64* eft_g_effectSystem_ptr[3];
void GameRoutine_151cae0(__int64*, unsigned __int64);
_QWORD* game_gmap_SpotAttachmentFort_OnStartPhase_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_gmap_SpotAttachmentFort_OnStartPhase");
__int64 SpotAttachmentFort_151c7c0(__int64 a1, __int64* a2, __int64 a3,
                                   __int64** a4);
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpotAttachmentFort_DeletingDestructor(_QWORD* a1);
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 game_gmap_1340560_alt1(__int64 result, char, __n128,
                               long double) __asm__("game_gmap_1340560");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_playAt_ff5f0_alt1(__int64, __int64, __int64, __int64, unsigned int,
                              unsigned int, int, float,
                              float) __asm__("snd_playAt_ff5f0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void game_gmap_SpotAttachmentFort_OnStartPhase(__int64 a1, double a2,
                                               long double a3);

__int64 SpotAttachmentFort_151b980()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1a9a50c);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21c9ed0 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21c9ed0 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ed0 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  return v6[3];
                }
              }
              else if ((v9 & v3) != v4) {
                return 0;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return v8;
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
                return v6[3];
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                return 0;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 SpotAttachmentFort_Unknown30(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  unsigned __int8* v8;
  int v9;
  __int64 v10;
  int v11;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
  v2 = GameRoutine_151b980();
  v3 = *(unsigned __int8*)(v1 + 50);
  if (v3 >= 3) {
    if (v3 >= 5) {
      if (v3 >= 7) {
        if (v3 >= 9) {
          v6 = v3 >= 0xB;
          v4 = 4;
          if (v6) {
            v4 = 5;
          }
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
        else {
          v4 = 3;
          v5 = *(_QWORD*)(v1 + 64);
          if (v5 == 0) {
            goto LABEL_21;
          }
        }
      }
      else {
        v4 = 2;
        v5 = *(_QWORD*)(v1 + 64);
        if (v5 == 0) {
          goto LABEL_21;
        }
      }
    }
    else {
      v4 = 1;
      v5 = *(_QWORD*)(v1 + 64);
      if (v5 == 0) {
        goto LABEL_21;
      }
    }
  }
  else {
    v4 = 0;
    v5 = *(_QWORD*)(v1 + 64);
    if (v5 == 0) {
      goto LABEL_21;
    }
  }
  v7 = *(unsigned __int16*)(v2 + 32);
  if (*(_WORD*)(v2 + 32) == 0) {
  LABEL_21:
    v10 = 72;
    return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
  }
  v8 = *(unsigned __int8**)(v2 + 40);
  v9 = *(unsigned __int8*)(v5 + 250);
  v10 = 72;
  while (1) {
    v11 = *v8++;
    if (v11 == v9) {
      break;
    }
    if (--v7 == 0) {
      return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
    }
  }
  v10 = 56;
  return *(unsigned __int8*)(*(_QWORD*)(v2 + v10) + v4);
}

void game_gmap_SpotAttachmentFort_OnStartPhase(__int64 a1, double a2,
                                               long double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int128 v11;
  __n128 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;
  struct {
    __int64* v27;
    __int64* v28;
    __int64 v29;
  } v27_;
  struct {
    _QWORD v30[2];
    int v31;
  } v30_;
  struct {
    _QWORD v32[3];
    int v33;
    char gap124_[4];
    _QWORD* v34;
    __int64 v35;
    __int128 v36;
    __int64 v37;
    __int64 v38;
  } v32_;

  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD*)(a1 + 32);
  v4 = v32_.v32;
  v27_.v28 = nullptr;
  v27_.v29 = 0;
  v27_.v27 = nullptr;
  v32_.v32[0] = GameData_2049f30;
  v32_.v32[1] = &v27_.v27;
  v32_.v34 = v32_.v32;
  if (v3 == 0) {
    goto LABEL_11;
  }
  v5 = *(_QWORD*)(*GameData_212c790 + 8);
  v6 = *(_QWORD**)(v5 + 8);
  v7 = *(_QWORD**)(v5 + 16);
  if (v6 == v7) {
    v4 = v32_.v32;
  LABEL_11:
    v8 = 32;
    goto LABEL_12;
  }
  do {
    if (*(_QWORD*)*v6 == v3) {
      v30_.v30[0] = *v6;
      if (v32_.v34 == nullptr) {
        GameRoutine_60a310_alt1(),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v32_.v34 + 48LL))(v32_.v34, v30_.v30),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    ++v6;
  } while (v6 != v7);
  v4 = v32_.v34;
  if (v32_.v34 == v32_.v32) {
    goto LABEL_11;
  }
  if (v32_.v34 != nullptr) {
    v8 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v4 + v8))((__int64)v4),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = v27_.v27;
  v10 = v27_.v28;
  if (v27_.v28 != v27_.v27) {
    v11 = *(_OWORD*)(*v27_.v27 + 48);
    v30_.v30[1] = *(_QWORD*)(*v27_.v27 + 48);
    v30_.v31 = DWORD2(v11);
    v30_.v30[0] = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830_alt1((__int64)v32_.v32, 0x0.0p+0f),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_playAt_ff5f0_alt1((__int64)"SE_SYS_GMAP_Dead_Unit",
                          (__int64)"SE_SYS_GMAP_Dead_Unit", (__int64)v30_.v30,
                          (__int64)v32_.v32, 0, 0x10001u, 0, 0x0.0p+0f,
                          0x1.0000000000000p+0f),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    snd_Fade_Destroy_Fade_alt1(v32_.v32),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = v27_.v27;
    v10 = v27_.v28;
  }
  if (v9 != v10) {
    v12 = COERCE_AS(__n128, GameData_1a83910);
    v13 = eft_g_effectSystem_ptr[0];
    v14 = (__int64*)GameData_212c540;
    do {
      v15 = *v9;
      game_gmap_1340560_alt1(*v9, 3, v12, a3),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v16 = *(_QWORD**)(v15 + 48);
      v17 = *(_QWORD*)(v15 + 56);
      v18 = (_QWORD*)*v13;
      v32_.v32[0] = 0;
      v32_.v32[1] = 0;
      v32_.v33 = 5;
      v32_.v32[2] = "Btl_Hit_Damage";
      v32_.v34 = v16;
      v32_.v35 = v17;
      v19 = *v14;
      v20 = v14[1];
      v32_.v36 = GameData_1a83910;
      v32_.v37 = v19;
      v32_.v38 = v20;
      v21 = Manager_bc6460_alt1(v18, (__int64)v32_.v32, 1),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameHr_14a10d0(&v25_.v25, (__int64)v21, v22, (__int64)&GameData_1a9f09e),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v23 = v25_.v26;
      if (v25_.v26 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v23),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ++v9;
    } while (v9 != v10);
    v9 = v27_.v27;
  }
  if (v9 != nullptr) {
    v27_.v28 = v9;
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v9),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

_QWORD* SpotAttachmentFort_Unknown16(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD* v10;

  v2 = *(_QWORD*)(a1 + 32);
  v8[0] = GameData_2049fb0;
  v8[1] = a1;
  result = v8;
  v9 = v8;
  if (v2 == 0) {
    goto LABEL_11;
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_QWORD**)(v4 + 8);
  v6 = *(_QWORD**)(v4 + 16);
  if (v5 == v6) {
    result = v8;
  LABEL_11:
    v7 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v7))(result,
                                                                      a2);
  }
  do {
    if (*(_QWORD*)*v5 == v2) {
      v10 = (_QWORD*)*v5;
      if (v9 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v9 + 48LL))(v9, &v10);
    }
    ++v5;
  } while (v5 != v6);
  result = v9;
  if (v9 == v8) {
    goto LABEL_11;
  }
  if (v9 == nullptr) {
    return result;
  }
  v7 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v7))(result, a2);
}

void SpotAttachmentFort_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v10;
  unsigned int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    unsigned int v18[2];
    char* v19;
  } v18_;

  v1 = a1[4];
  *a1 = &game_gmap_SpotAttachmentDispatch_vtable;
  if (v1 != 0) {
    v3 = 0;
    v4 = GameData_212cf80[0];
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL);
    v6 = GameData_212c780;
    while (1) {
      v7 = *(_QWORD*)(v5 + 48);
      if (*(_BYTE*)(v7 + v3) != 0) {
        v8 = *(_DWORD*)(v7 + v3 + 4);
        if (v8 != 0 && *v6 != 0) {
          v18_.v19 = &GameData_1a9f09e;
          v18_.v18[0] = v8;
          v18_.v18[1] = 0;
          if (SpotMgr_132ffa0_alt1(v18_.v18) == v1) {
            break;
          }
        }
      }
      v3 += 8;
      if (v3 == 2400) {
        goto LABEL_19;
      }
    }
    v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 48LL) + v3;
    v11 = *(_DWORD*)(v10 + 4);
    if (v11 != 0 && *v6 != 0) {
      v18_.v19 = &GameData_1a9f09e;
      v18_.v18[0] = v11;
      v18_.v18[1] = 0;
      if (SpotMgr_132ffa0_alt1(v18_.v18) != 0) {
        *(_DWORD*)(v10 + 4) = 0;
      }
    }
  }
LABEL_19:
  v13 = a1[6];
  v14 = fw_memory_g_heap_manager_ptr;
  if (v13 != 0) {
    v15 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v13;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v15 + v16, v13);
  }
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v14 + v17, (__int64)a1);
}

__int64 SpotAttachmentFort_151c7c0(__int64 a1, __int64* a2, __int64 a3,
                                   __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 result;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  float v17;
  __int64 v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;

  v5 = *a2;
  v34 = *a2;
  v8 = std___1___hash_memory(&v34, 8);
  v9 = *(_QWORD*)(a1 + 8);
  v10 = v8;
  if (v9 != 0) {
    v11 = v9 - 1;
    if ((v9 & (v9 - 1)) != 0) {
      v4 = v8;
      if (v8 >= v9) {
        v4 = v8 % v9;
      }
    }
    else {
      v4 = v11 & v8;
    }
    v12 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v12 != nullptr) {
      result = *v12;
      if (*v12 != 0) {
        if ((v9 & v11) == 0) {
          while (1) {
            v15 = *(_QWORD*)(result + 8);
            if (v15 == v10) {
              if (*(_QWORD*)(result + 16) == v5) {
                return result;
              }
            }
            else if ((v15 & v11) != v4) {
              goto LABEL_23;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_23;
            }
          }
        }
        do {
          v14 = *(_QWORD*)(result + 8);
          if (v14 == v10) {
            if (*(_QWORD*)(result + 16) == v5) {
              return result;
            }
          }
          else {
            if (v14 >= v9) {
              v14 %= v9;
            }
            if (v14 != v4) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_23:
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = *a4;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v10;
  v17 = *(float*)(a1 + 32);
  v18 = *v16;
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 16) = v18;
  v19 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v9 == 0 || (float)(v17 * (float)v9) < v19) {
    v20 = v19 / v17;
    v21 = true;
    if (v9 >= 3) {
      v21 = (v9 & (v9 - 1)) != 0;
    }
    v22 = v21 | (2 * v9);
    v23 = vcvtps_u64_f32(v20);
    if (v22 <= v23) {
      primeEm = v23;
    }
    else {
      primeEm = v22;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v25 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v25;
      v9 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm > v9) {
      goto LABEL_35;
    }
    if (primeEm < v9) {
      v27 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v9 < 3 || (v9 & (v9 - 1)) != 0) {
        v29 = result;
        v27 = std___1___next_prime(v27);
        result = v29;
      }
      else {
        v28 = 1LL << -(char)__clz(v27 - 1);
        if (v27 >= 2) {
          v27 = v28;
        }
      }
      if (primeEm <= v27) {
        primeEm = v27;
      }
      if (primeEm < v9) {
      LABEL_35:
        v26 = result;
        GameRoutine_151cae0((__int64*)a1, primeEm);
        result = v26;
      }
    }
    v9 = *(_QWORD*)(a1 + 8);
    if ((v9 & (v9 - 1)) != 0) {
      if (v10 >= v9) {
        v4 = v10 % v9;
      }
      else {
        v4 = v10;
      }
    }
    else {
      v4 = (v9 - 1) & v10;
    }
  }
  v30 = *(_QWORD*)a1;
  v31 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v31 != nullptr) {
    *(_QWORD*)result = *v31;
    *v31 = result;
  }
  else {
    v32 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v32;
    *(_QWORD*)(v30 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v33 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v9 & (v9 - 1)) != 0) {
        if (v33 >= v9) {
          v33 %= v9;
        }
      }
      else {
        v33 &= v9 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v33) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__int64 game_gmap_SpotAttachmentFort_OnStartPhase_lambda0_Invoke(__int64 result,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0 && *(_BYTE*)(v3 + 32) == 1) {
    v4 = *(__int64**)(result + 8);
    v6 = (_QWORD*)v4[1];
    v5 = v4[2];
    if ((unsigned __int64)v6 >= v5) {
      v8 = *v4;
      v9 = (__int64)v6 - *v4;
      v10 = (v9 >> 3) + 1;
      if (v10 >> 61 != 0) {
        GameRoutine_888610();
      }
      v11 = v5 - v8;
      v12 = fw_memory_g_heap_manager_ptr;
      if (v11 >> 2 > v10) {
        v10 = v11 >> 2;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + 8 * v13;
      v16 = v14 + v9 - 8 * (v9 >> 3);
      *(_QWORD*)(v14 + v9) = v2;
      v7 = v14 + v9 + 8;
      result = memcpy(v16, v8, v9);
      *v4 = v16;
      v4[1] = v7;
      v4[2] = v15;
      if (v8 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v17, v8);
      }
    }
    else {
      *v6 = v2;
      v7 = (__int64)(v6 + 1);
    }
    v4[1] = v7;
  }
  return result;
}

__int64 game_gmap_SpotAttachmentFort_OnEndPhase_lambda0_Invoke(__int64 a1,
                                                               __int64* a2)
{
  _DWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;

  v3 = *a2;
  v2 = *(_DWORD**)(a1 + 8);
  result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v2 + 256LL))(v2);
  if ((_DWORD)result != 0) {
    v5 = *(_QWORD*)(v3 + 96);
    if (v5 != 0 && *(_BYTE*)(v5 + 32) == 1) {
      ++v2[18];
    }
  }
  return result;
}

#pragma GCC visibility pop
