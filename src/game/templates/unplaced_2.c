#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameHr_14a4a80(__int64, __int64*);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_14a1390(__int64*, char);
__int64 GameHr_14a1520(__int64*, char);
__int64 SpotMgr_13304c0(unsigned int*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_14a1cc0(__int64*, float);
__int64 game_14a2820(__int64, float32x4_t*);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 snd_getListenerPosition_1007f0(__int64, __int64, __int64);
__int64 snd_isLoaded(unsigned __int8*);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 strstr(const char*, const char*);
bool GameRoutine_811200(const char*);
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_1a837a0;
extern __int64 (*GameData_20dd480[])();
extern __int64 (*game_cutscene_Signal_LightRange_vtable[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_224b6d8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_sound_g_game_sound;
extern char GameData_1a9f09e;
int memcmp(__int64, __int64, unsigned __int64);
int strcmp(const char*, const char*);
unsigned __int64 strlen(const char*);
void GameRoutine_14a20b0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_templates_a93d00(__int64 a1, __int64 a2, unsigned __int64 a3,
                           float a4);
_QWORD* game_templates_a94680(__int64 a1, unsigned __int8* a2, char* a3);
void game_templates_be1ba0(__int64 a1, __int64 a2);
__int64 game_templates_be2400(__int64 a1, unsigned int* a2, int* a3);
void game_templates_14a3de0(__int64 a1, __int64 a2, __int64 a3, const char* a4);
void game_templates_14a4360(__int64 a1);
__int64 game_templates_14a7aa0(__int64* a1);
__attribute__((swiftcall)) void game_templates_17e9730(PSEUDO_X8 x8_);

void game_templates_a93d00(__int64 a1, __int64 a2, unsigned __int64 a3,
                           float a4)
{

#pragma clang fp contract(off)
  int v4;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
    __int64 v18;
  } v16_;
  struct {
    __int64 v19[2];
    __int64 v20;
    int v21;
    float v22;
  } v19_;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v4 = *(_DWORD*)(a1 + 88);
  if (a3 >= 0x17) {
    v9 = a2;
    if ((a3 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (a3 | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a2 = v9;
    v8 = (char*)v11;
    v16_.v17 = a3;
    v16_.v18 = v11;
    v16_.v16 = v10 | 1;
    goto LABEL_9;
  }
  LOBYTE(v16_.v16) = 2 * a3;
  v8 = (char*)&v16_.v16 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove((__int64)v8, a2, a3),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v8[a3] = 0;
  if ((v16_.v16 & 1) != 0) {
    fw_text_String_CopyTerminated(v19_.v19, v16_.v18, v16_.v17),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v19_.v19[0] = v16_.v16;
    v19_.v19[1] = v16_.v17;
    v19_.v20 = v16_.v18;
  }
  v19_.v21 = v4;
  v19_.v22 = a4;
  game_templates_a94680(a1 + 48, (unsigned __int8*)v19_.v19, (char*)v19_.v19),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = v12;
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v19_.v20),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v16_.v16 & 1) != 0 && v16_.v18 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v16_.v18),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v13 & 1) != 0) {
    ++*(_DWORD*)(a1 + 88);
  }
}

_QWORD* game_templates_a94680(__int64 a1, unsigned __int8* a2, char* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  char v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  _BOOL8 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 primeEm;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  unsigned __int64 v60;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory((__int64)v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp(v24, (__int64)v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp(v20, (__int64)v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v27 = *a3;
  v16 = v26;
  *v26 = 0;
  v26[1] = v13;
  if ((v27 & 1) != 0) {
    fw_text_String_CopyTerminated(v26 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v28 = *((_QWORD*)a3 + 1);
    v26[2] = *(_QWORD*)a3;
    v26[3] = v28;
    v26[4] = *((_QWORD*)a3 + 2);
  }
  v29 = *(float*)(a1 + 32);
  v16[5] = *((_QWORD*)a3 + 3);
  v30 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v12 == 0 || (float)(v29 * (float)v12) < v30) {
    v31 = v30 / v29;
    v32 = true;
    if (v12 >= 3) {
      v32 = (v12 & (v12 - 1)) != 0;
    }
    v33 = v32 | (2 * v12);
    v34 = vcvtps_u64_f32(v31);
    if (v33 <= v34) {
      primeEm = v34;
    }
    else {
      primeEm = v33;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v36 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v36) {
      if (primeEm >= v36) {
        goto LABEL_105;
      }
      v42 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v36 < 3 || (v36 & (v36 - 1)) != 0) {
        v42 = std___1___next_prime(v42);
      }
      else {
        v43 = 1LL << -(char)__clz(v42 - 1);
        if (v42 >= 2) {
          v42 = v43;
        }
      }
      if (primeEm <= v42) {
        primeEm = v42;
      }
      if (primeEm >= v36) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v55 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v55 != 0) {
          v56 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v56, v55);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v37 = fw_memory_HeapManager_Allocate(*v25, 8 * primeEm, 16, 0);
    v38 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v37;
    if (v38 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*v25 + v39, v38);
    }
    v40 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v41 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 48) = 0;
        v44 = *(_QWORD*)a1 + 8 * v41;
        v41 += 8;
        *(_QWORD*)(v44 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v41);
    }
    else {
      v41 = 0;
    }
    if ((primeEm & 7) != 0) {
      v45 = 8 * v41;
      do {
        --v40;
        *(_QWORD*)(*(_QWORD*)a1 + v45) = 0;
        v45 += 8;
      } while (v40 != 0);
    }
    v47 = a1 + 16;
    v46 = *(_QWORD**)(a1 + 16);
    if (v46 != nullptr) {
      v48 = v46[1];
      v49 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v48 >= primeEm) {
          v48 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v48) = v47;
        v50 = (_QWORD*)*v46;
        if (*v46 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v51 = v50[1];
          if (v51 >= primeEm) {
            v51 %= primeEm;
          }
          if (v51 != v48) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v51) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v46;
              goto LABEL_82;
            }
            *v46 = *v50;
            *v50 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v51);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v51) = v50;
            v50 = v46;
          }
          v51 = v48;
        LABEL_82:
          v46 = v50;
          v50 = (_QWORD*)*v50;
          v48 = v51;
          if (v50 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v52 = v48 & v49;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v47;
      while (1) {
        v53 = (_QWORD*)*v46;
        if (*v46 == 0) {
          break;
        }
        v54 = v53[1] & v49;
        if (v54 == v52) {
          v46 = (_QWORD*)*v46;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) != 0) {
          *v46 = *v53;
          *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v46;
          v46 = v53;
          v52 = v54;
        }
      }
    }
  LABEL_105:
    v12 = *(_QWORD*)(a1 + 8);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v57 = *(_QWORD*)a1;
  v58 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v58 != nullptr) {
    *v16 = *v58;
    *v58 = v16;
  }
  else {
    v59 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v16;
    *v16 = v59;
    *(_QWORD*)(v57 + 8 * v3) = a1 + 16;
    if (*v16 != 0) {
      v60 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v60 >= v12) {
          v60 %= v12;
        }
      }
      else {
        v60 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v60) = v16;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v16;
}

void game_templates_be1ba0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  float v5;
  unsigned __int64 v6;
  float v7;
  float v8;
  _BOOL8 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 primeEm;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  unsigned __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64* v41;
  int v42;
  _BOOL4 v43;
  _BOOL4 v44;
  int v45;
  _QWORD* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64* v50;
  int v51;
  _BOOL4 v52;
  _BOOL4 v53;
  char v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;

  v2 = *(unsigned int*)(a2 + 16);
  *(_QWORD*)(a2 + 8) = v2;
  v5 = *(float*)(a1 + 32);
  v6 = *(_QWORD*)(a1 + 8);
  v7 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v5 * (float)v6) < v7) {
    v8 = v7 / v5;
    v9 = true;
    if (v6 >= 3) {
      v9 = (v6 & (v6 - 1)) != 0;
    }
    v10 = v9 | (2 * v6);
    v11 = vcvtps_u64_f32(v8);
    if (v10 <= v11) {
      v12 = v11;
    }
    else {
      v12 = v10;
    }
    if (v12 == 1) {
      v12 = 2;
    }
    else if ((v12 & (v12 - 1)) != 0) {
      primeEm = std___1___next_prime(v12);
      v6 = *(_QWORD*)(a1 + 8);
      v12 = primeEm;
    }
    if (v12 > v6) {
      goto LABEL_13;
    }
    if (v12 >= v6) {
      goto LABEL_65;
    }
    v20 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                         *(float*)(a1 + 32));
    if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
      v20 = std___1___next_prime(v20);
    }
    else {
      v21 = 1LL << -(char)__clz(v20 - 1);
      if (v20 >= 2) {
        v20 = v21;
      }
    }
    if (v12 <= v20) {
      v12 = v20;
    }
    if (v12 >= v6) {
      goto LABEL_65;
    }
    if (v12 != 0) {
    LABEL_13:
      if (v12 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v14 = fw_memory_g_heap_manager_ptr;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      v16 = *(_QWORD*)a1;
      *(_QWORD*)a1 = v15;
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v17, v16);
      }
      v18 = v12 & 7;
      *(_QWORD*)(a1 + 8) = v12;
      if (v12 >= 8) {
        v19 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v19 + 48) = 0;
          v22 = *(_QWORD*)a1 + 8 * v19;
          v19 += 8;
          *(_QWORD*)(v22 + 56) = 0;
        } while ((v12 & 0x1FFFFFFFFFFFFFF8LL) != v19);
      }
      else {
        v19 = 0;
      }
      if ((v12 & 7) != 0) {
        v23 = 8 * v19;
        do {
          --v18;
          *(_QWORD*)(*(_QWORD*)a1 + v23) = 0;
          v23 += 8;
        } while (v18 != 0);
      }
      v25 = a1 + 16;
      v24 = *(_QWORD**)(a1 + 16);
      if (v24 != nullptr) {
        v26 = v24[1];
        v27 = v12 - 1;
        if ((v12 & (v12 - 1)) != 0) {
          if (v26 >= v12) {
            v26 %= v12;
          }
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v26) = v25;
          while (1) {
            v28 = (_QWORD*)*v24;
            if (*v24 == 0) {
              break;
            }
            v29 = v28[1];
            if (v29 >= v12) {
              v29 %= v12;
            }
            if (v29 == v26) {
              v24 = (_QWORD*)*v24;
            }
            else {
              v30 = (_QWORD*)*v24;
              if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v29) != 0) {
                do {
                  v31 = v30;
                  v30 = (_QWORD*)*v30;
                } while (v30 != nullptr &&
                         *((_DWORD*)v28 + 4) == *((_DWORD*)v30 + 4));
                *v24 = v30;
                *v31 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v29);
                **(_QWORD**)(*(_QWORD*)a1 + 8 * v29) = v28;
              }
              else {
                *(_QWORD*)(*(_QWORD*)a1 + 8 * v29) = v24;
                v24 = v28;
                v26 = v29;
              }
            }
          }
        }
        else {
          v32 = v26 & v27;
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v32) = v25;
          while (1) {
            v33 = (_QWORD*)*v24;
            if (*v24 == 0) {
              break;
            }
            v34 = v33[1] & v27;
            if (v34 == v32) {
              v24 = (_QWORD*)*v24;
            }
            else {
              v35 = (_QWORD*)*v24;
              if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v34) != 0) {
                do {
                  v36 = v35;
                  v35 = (_QWORD*)*v35;
                } while (v35 != nullptr &&
                         *((_DWORD*)v33 + 4) == *((_DWORD*)v35 + 4));
                *v24 = v35;
                *v36 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v34);
                **(_QWORD**)(*(_QWORD*)a1 + 8 * v34) = v33;
              }
              else {
                *(_QWORD*)(*(_QWORD*)a1 + 8 * v34) = v24;
                v24 = v33;
                v32 = v34;
              }
            }
          }
        }
      }
    }
    else {
      v37 = *(_QWORD*)a1;
      *(_QWORD*)a1 = 0;
      if (v37 != 0) {
        v38 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v37);
      }
      *(_QWORD*)(a1 + 8) = 0;
    }
  LABEL_65:
    v6 = *(_QWORD*)(a1 + 8);
  }
  v39 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v40 = v2;
    if (v6 <= v2) {
      v40 = v2 % v6;
    }
    v41 = *(__int64**)(*(_QWORD*)a1 + 8 * v40);
    if (v41 == nullptr) {
      v56 = *(_QWORD*)(a2 + 8);
      v46 = nullptr;
      if (v56 < v6) {
        goto LABEL_92;
      }
      goto LABEL_91;
    }
    v42 = 0;
    do {
      v46 = v41;
      v41 = (__int64*)*v41;
      if (v41 == nullptr) {
        break;
      }
      v47 = v41[1];
      v48 = v47;
      if (v47 >= v6) {
        v48 = v47 % v6;
      }
      if (v48 != v40) {
        break;
      }
      v43 = v47 == v2 && *((_DWORD*)v41 + 4) == *(_DWORD*)(a2 + 16);
      v44 = v43 != (v42 & 1);
      v45 = v42 & v44;
      v42 |= v44;
    } while (v45 != 1);
  }
  else {
    v49 = ((_DWORD)v6 - 1) & (unsigned int)v2;
    v50 = *(__int64**)(*(_QWORD*)a1 + 8 * v49);
    if (v50 == nullptr) {
      v56 = *(_QWORD*)(a2 + 8);
      v46 = nullptr;
      goto LABEL_102;
    }
    v51 = 0;
    do {
      v46 = v50;
      v50 = (__int64*)*v50;
      if (v50 == nullptr) {
        break;
      }
      v55 = v50[1];
      if ((v55 & v39) != v49) {
        break;
      }
      v52 = v55 == v2 && *((_DWORD*)v50 + 4) == *(_DWORD*)(a2 + 16);
      v53 = v52 != (v51 & 1);
      v54 = v51 & v53;
      v51 |= v53;
    } while ((v54 & 1) == 0);
  }
  v56 = *(_QWORD*)(a2 + 8);
  if ((v6 & v39) != 0) {
    if (v56 < v6) {
    LABEL_92:
      if (v46 != nullptr) {
        goto LABEL_93;
      }
    LABEL_103:
      *(_QWORD*)a2 = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(a1 + 16) = a2;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = a1 + 16;
      if (*(_QWORD*)a2 == 0) {
        goto LABEL_109;
      }
      v57 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
      if ((v6 & v39) != 0) {
        if (v57 >= v6) {
          v57 %= v6;
        }
      }
      else {
        v57 &= v39;
      }
      goto LABEL_108;
    }
  LABEL_91:
    v56 %= v6;
    goto LABEL_92;
  }
LABEL_102:
  v56 &= v39;
  if (v46 == nullptr) {
    goto LABEL_103;
  }
LABEL_93:
  *(_QWORD*)a2 = *v46;
  *v46 = a2;
  if (*(_QWORD*)a2 != 0) {
    v57 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
    if ((v6 & v39) == 0) {
      v57 &= v39;
      if (v57 == v56) {
        goto LABEL_109;
      }
      goto LABEL_108;
    }
    if (v57 >= v6) {
      v57 %= v6;
    }
    if (v57 != v56) {
    LABEL_108:
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v57) = a2;
    }
  }
LABEL_109:
  ++*(_QWORD*)(a1 + 24);
}

__int64 game_templates_be2400(__int64 a1, unsigned int* a2, int* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  __int64* v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  unsigned __int64 v53;

  v4 = *a2;
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v8 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v3 = *a2;
      if (v5 <= v4) {
        v3 = (unsigned int)v4 % (unsigned int)v5;
      }
    }
    else {
      v3 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
    v9 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
    if (v9 != nullptr) {
      result = *v9;
      if (*v9 != 0) {
        if ((v5 & v8) == 0) {
          while (1) {
            v12 = *(_QWORD*)(result + 8);
            if (v12 == v4) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v4) {
                return result;
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_23;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_23;
            }
          }
        }
        do {
          v11 = *(_QWORD*)(result + 8);
          if (v11 == v4) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v4) {
              return result;
            }
          }
          else {
            if (v11 >= v5) {
              v11 %= v5;
            }
            if (v11 != v3) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_23:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v14 = *a3;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v4;
  *(_DWORD*)(result + 16) = v14;
  v15 = *((_QWORD*)a3 + 1);
  v16 = *((_QWORD*)a3 + 2);
  *((_QWORD*)a3 + 1) = 0;
  *((_QWORD*)a3 + 2) = 0;
  *(_QWORD*)(result + 24) = v15;
  *(_QWORD*)(result + 32) = v16;
  v17 = *((_QWORD*)a3 + 3);
  *((_QWORD*)a3 + 3) = 0;
  v18 = *(float*)(a1 + 32);
  *(_QWORD*)(result + 40) = v17;
  *(_DWORD*)(result + 48) = a3[8];
  v19 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v5 == 0 || (float)(v18 * (float)v5) < v19) {
    v20 = v19 / v18;
    v21 = true;
    if (v5 >= 3) {
      v21 = (v5 & (v5 - 1)) != 0;
    }
    v22 = v21 | (2 * v5);
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
    }
    v26 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v26) {
      if (primeEm >= v26) {
        goto LABEL_84;
      }
      v33 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v26 < 3 || (v26 & (v26 - 1)) != 0) {
        v46 = result;
        v33 = std___1___next_prime(v33);
        result = v46;
      }
      else {
        v34 = 1LL << -(char)__clz(v33 - 1);
        if (v33 >= 2) {
          v33 = v34;
        }
      }
      if (primeEm <= v33) {
        primeEm = v33;
      }
      if (primeEm >= v26) {
        goto LABEL_84;
      }
      if (primeEm == 0) {
        v47 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v47 != 0) {
          v48 = result;
          v49 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free(*v13 + v49, v47);
          result = v48;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_84;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v27 = result;
    v28 = fw_memory_HeapManager_Allocate(*v13, 8 * primeEm, 16, 0);
    v29 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v28;
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v30, v29);
    }
    v31 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v32 = 0;
      result = v27;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v32 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v32 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v32 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v32 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v32 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v32 + 48) = 0;
        v35 = *(_QWORD*)a1 + 8 * v32;
        v32 += 8;
        *(_QWORD*)(v35 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v32);
    }
    else {
      v32 = 0;
      result = v27;
    }
    if ((primeEm & 7) != 0) {
      v36 = 8 * v32;
      do {
        --v31;
        *(_QWORD*)(*(_QWORD*)a1 + v36) = 0;
        v36 += 8;
      } while (v31 != 0);
    }
    v38 = a1 + 16;
    v37 = *(_QWORD**)(a1 + 16);
    if (v37 != nullptr) {
      v39 = v37[1];
      v40 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v39 >= primeEm) {
          v39 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v39) = v38;
        v41 = (_QWORD*)*v37;
        if (*v37 == 0) {
          goto LABEL_84;
        }
        while (1) {
          v42 = v41[1];
          if (v42 >= primeEm) {
            v42 %= primeEm;
          }
          if (v42 != v39) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v42) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v37;
              goto LABEL_61;
            }
            *v37 = *v41;
            *v41 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v42);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v42) = v41;
            v41 = v37;
          }
          v42 = v39;
        LABEL_61:
          v37 = v41;
          v41 = (_QWORD*)*v41;
          v39 = v42;
          if (v41 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      v43 = v39 & v40;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v38;
      while (1) {
        v44 = (_QWORD*)*v37;
        if (*v37 == 0) {
          break;
        }
        v45 = v44[1] & v40;
        if (v45 == v43) {
          v37 = (_QWORD*)*v37;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v45) != 0) {
          *v37 = *v44;
          *v44 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v45);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v45) = v44;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v45) = v37;
          v37 = v44;
          v43 = v45;
        }
      }
    }
  LABEL_84:
    v5 = *(_QWORD*)(a1 + 8);
    if ((v5 & (v5 - 1)) != 0) {
      if (v5 <= v4) {
        v3 = v4 % v5;
      }
      else {
        v3 = v4;
      }
    }
    else {
      v3 = ((_DWORD)v5 - 1) & (unsigned int)v4;
    }
  }
  v50 = *(_QWORD*)a1;
  v51 = *(__int64**)(*(_QWORD*)a1 + 8 * v3);
  if (v51 != nullptr) {
    *(_QWORD*)result = *v51;
    *v51 = result;
  }
  else {
    v52 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v52;
    *(_QWORD*)(v50 + 8 * v3) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v53 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v53 >= v5) {
          v53 %= v5;
        }
      }
      else {
        v53 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

void game_templates_14a3de0(__int64 a1, __int64 a2, __int64 a3, const char* a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int8* v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 i;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;

  *(_WORD*)(a1 + 112) = 0;
  v4 = a1 + 112;
  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = a3;
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 56) = 0;
  *(_WORD*)(a1 + 92) = 0;
  *(_BYTE*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 24) = 0x2000;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_BYTE*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 103) = 0;
  *(_WORD*)(a1 + 84) = 256;
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 88) = -1082130432;
  *(_DWORD*)(a1 + 268) = 2;
  if (a2 != 0 && *(_DWORD*)(a2 + 16) == (_DWORD)a3) {
    v5 = *(_QWORD*)(a2 + 24);
    if (strcmp(*(const char**)v5, "invalid") != 0) {
      v8 = *(unsigned __int8**)(v5 + 96);
      if (v8 != nullptr) {
        if (game_sound_g_game_sound != 0 &&
                ((snd_isLoaded(v8) & 1) != 0 ||
                 strstr((const char*)v8, "_lp") != 0) &&
                SHIDWORD(GameData_224b6d8) > 0 ||
            ((v9 = *(_QWORD*)a1, *(_QWORD*)a1 == 0) ||
             *(_DWORD*)(v9 + 16) != *(_DWORD*)(a1 + 8) ||
             (v10 = *(const char**)(*(_QWORD*)(v9 + 24) + 96LL)) == nullptr ||
             !GameRoutine_811200(v10)) &&
                (int)GameData_224b6d8 >= 1) {
          *(_BYTE*)(a1 + 92) = 1;
        }
      }
      v11 = *(_QWORD*)a1;
      if (*(_QWORD*)a1 != 0 && *(_DWORD*)(v11 + 16) == *(_DWORD*)(a1 + 8)) {
        v12 = *(unsigned int*)(v11 + 36);
        if ((_DWORD)v12 != 0) {
          for (i = 0; i < v12; ++i) {
            v14 = *(_QWORD*)(v11 + 40 + 8 * i);
            if (v14 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 96LL))(v14) & 1) !=
                  0) {
                *(_BYTE*)(a1 + 84) = 0;
                goto LABEL_25;
              }
              v12 = *(unsigned int*)(v11 + 36);
            }
          }
        }
      }
      *(_BYTE*)(a1 + 84) = 1;
      GameRoutine_14a20b0(a1);
    LABEL_25:
      if (a4 != nullptr) {
        v15 = strlen(a4);
        if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0();
        }
        v16 = v15;
        if (v15 >= 0x17) {
          if ((v15 | 7) == 0x17) {
            v18 = 26;
          }
          else {
            v18 = (v15 | 7) + 1;
          }
          v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v18, 16, 0);
          v22_.v23 = v16;
          v22_.v24 = v17;
          v22_.v22 = v18 | 1;
        }
        else {
          LOBYTE(v22_.v22) = 2 * v15;
          v17 = (char*)&v22_.v22 + 1;
          if (v15 == 0) {
          LABEL_35:
            v17[v16] = 0;
            if ((*(_BYTE*)v4 & 1) != 0) {
              v19 = *(_QWORD*)(a1 + 128);
              if (v19 != 0) {
                v20 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v20 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
              }
            }
            v21 = v22_.v23;
            *(_QWORD*)v4 = v22_.v22;
            *(_QWORD*)(v4 + 8) = v21;
            *(_QWORD*)(v4 + 16) = v22_.v24;
            return;
          }
        }
        memcpy((__int64)v17, (__int64)a4, v16);
        goto LABEL_35;
      }
    }
  }
}

void game_templates_14a4360(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 i;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  _QWORD* v22;
  __int64* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  const char* v31;
  const char* v32;
  int v33;
  int v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  _QWORD* v40;
  _QWORD* v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  _QWORD* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 j;
  __int64 v58;
  float v59;
  float v60;
  struct {
    __int64 v61[2];
    const char* v62;
  } v61_;
  __int64 v63;
  struct {
    __int64 v64;
    const char* v65;
  } v64_;
  struct {
    float32x4_t v66;
    char gap64_[8];
    _QWORD* v67;
  } v66_;

  snd_getListenerPosition_1007f0((__int64)&v63, (__int64)&v63 + 4,
                                 (__int64)&v64_.v64);
  LANES128(v2).n128_u64[0] = v63;
  v4 = *(__int64**)a1;
  v3 = *(__int64**)(a1 + 8);
  LANES128(v2).n128_u64[1] = (unsigned int)v64_.v64;
  v66_.v66 = v2;
  if (v4 != v3) {
    while (1) {
      while ((game_14a2820(*v4, &v66_.v66) & 1) != 0) {
        v4 += 2;
        if (v4 == *(__int64**)(a1 + 8)) {
          goto LABEL_25;
        }
      }
      v5 = *(__int64**)(a1 + 8);
      v6 = v4 + 2;
      if (v4 + 2 != v5) {
        break;
      }
      v7 = v4;
      if (v4 != v5) {
        goto LABEL_22;
      }
    LABEL_19:
      *(_QWORD*)(a1 + 8) = v7;
      if (v4 == v7) {
        goto LABEL_25;
      }
    }
    do {
      v8 = *v6;
      v9 = v6[1];
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      v10 = *(v6 - 1);
      *(v6 - 2) = v8;
      *(v6 - 1) = v9;
      if (v10 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
        v9 = *(v6 - 1);
      }
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      v6 += 2;
    } while (v6 != v5);
    v5 = *(__int64**)(a1 + 8);
    v7 = v6 - 2;
    if (v6 - 2 == v5) {
      goto LABEL_19;
    }
    do {
    LABEL_22:
      v11 = *(v5 - 1);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
      v5 -= 2;
    } while (v5 != v7);
    goto LABEL_19;
  }
LABEL_25:
  v12 = *(__int64**)(a1 + 24);
  if (v12 != *(__int64**)(a1 + 32)) {
    v13 = eft_g_effectSystem_ptr[0];
    do {
      v14 = (_QWORD*)*v12;
      v15 = *(_QWORD*)*v12;
      if (v15 != 0 && *(_DWORD*)(v15 + 16) == *((_DWORD*)v14 + 2)) {
        v16 = *(unsigned int*)(v15 + 36);
        if ((_DWORD)v16 != 0) {
          for (i = 0; i < v16; ++i) {
            v18 = *(_QWORD*)(v15 + 40 + 8 * i);
            if (v18 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 96LL))(v18) & 1) !=
                  0) {
                goto LABEL_27;
              }
              v16 = *(unsigned int*)(v15 + 36);
            }
          }
          v14 = (_QWORD*)*v12;
        }
      }
      v19 = *((float*)v12 + 5);
      v20 = *(float*)(*(_QWORD*)(*v13 + 136) + 16LL) + *((float*)v12 + 4);
      *((float*)v12 + 4) = v20;
      v21 = (float)(v20 / v19) * (float)(v20 / v19);
      if (v21 > 0x1.0000000000000p+0f) {
        v21 = 0x1.0000000000000p+0f;
      }
      game_14a1cc0(v14, v21);
      if (*((float*)v12 + 4) < *((float*)v12 + 5)) {
      LABEL_27:
        v12 += 3;
      }
      else {
        v12 = GameHr_14a4a80(a1 + 24, v12);
      }
    } while (v12 != *(__int64**)(a1 + 32));
  }
  v22 = *(_QWORD**)(a1 + 88);
  v66_.v67 = (_QWORD*)(a1 + 88);
  if (v22 != nullptr) {
    while (1) {
      v23 = v22 + 2;
      v24 = v22;
      if ((v22[2] & 1) != 0) {
        fw_text_String_CopyTerminated(&v63, v22[4], v22[3]);
      }
      else {
        v25 = v22[3];
        v63 = *v23;
        v64_.v64 = v25;
        v64_.v65 = (const char*)v22[4];
      }
      v26 = *(__int64**)a1;
      v27 = *(__int64**)(a1 + 8);
      if ((v63 & 1) != 0) {
        fw_text_String_CopyTerminated(v61_.v61, (__int64)v64_.v65, v64_.v64);
        if (v26 != v27) {
          while (1) {
          LABEL_52:
            v28 = *v26;
            v29 = v26[1];
            if (v29 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                        memory_order_relaxed);
            }
            v30 = *(_QWORD*)v28;
            if (*(_QWORD*)v28 != 0 &&
                *(_DWORD*)(v30 + 16) == *(_DWORD*)(v28 + 8)) {
              v31 = **(const char***)(v30 + 24);
            }
            else {
              v31 = &GameData_1a9f09e;
            }
            if ((v61_.v61[0] & 1) != 0) {
              v32 = v61_.v62;
            }
            else {
              v32 = (char*)v61_.v61 + 1;
            }
            v33 = strcmp(v32, v31);
            if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v34 = v33;
              (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
              std___1___shared_weak_count___release_weak(v29);
              v33 = v34;
            }
            if (v33 == 0) {
              break;
            }
            v26 += 2;
            if (v26 == v27) {
              v26 = v27;
              break;
            }
          }
        }
      }
      else {
        v61_.v61[0] = v63;
        v61_.v61[1] = v64_.v64;
        v61_.v62 = v64_.v65;
        if (v26 != v27) {
          goto LABEL_52;
        }
      }
      if ((v61_.v61[0] & 1) != 0 && v61_.v62 != nullptr) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, (__int64)v61_.v62);
      }
      v22 = (_QWORD*)*v24;
      if (v26 == *(__int64**)(a1 + 8)) {
        break;
      }
      if ((v63 & 1) != 0) {
        goto LABEL_112;
      }
    LABEL_44:
      if (v22 == nullptr) {
        goto LABEL_118;
      }
    }
    v36 = *(_QWORD*)(a1 + 80);
    v37 = v24[1];
    v38 = v36 - 1;
    if ((v36 & (v36 - 1)) != 0) {
      if (v37 >= v36) {
        v37 %= v36;
      }
    }
    else {
      v37 &= v38;
    }
    v39 = *(_QWORD*)(a1 + 72);
    v40 = *(_QWORD**)(v39 + 8 * v37);
    do {
      v41 = v40;
      v40 = (_QWORD*)*v40;
    } while (v40 != v24);
    if (v41 == v66_.v67) {
      goto LABEL_135;
    }
    v42 = v41[1];
    if ((v36 & v38) != 0) {
      if (v42 >= v36) {
        v42 %= v36;
      }
    }
    else {
      v42 &= v38;
    }
    v43 = (_QWORD*)*v24;
    if (v42 != v37) {
    LABEL_135:
      if (v22 != nullptr) {
        v44 = v22[1];
        if ((v36 & v38) != 0) {
          if (v44 >= v36) {
            v44 %= v36;
          }
        }
        else {
          v44 &= v38;
        }
        v43 = (_QWORD*)*v24;
        if (v44 == v37) {
          goto LABEL_95;
        }
      }
      *(_QWORD*)(v39 + 8 * v37) = 0;
      v43 = (_QWORD*)*v24;
    }
    if (v43 != nullptr) {
    LABEL_95:
      v45 = v43[1];
      if ((v36 & v38) != 0) {
        if (v45 >= v36) {
          v45 %= v36;
        }
        if (v45 != v37) {
          goto LABEL_99;
        }
      }
      else {
        v45 &= v38;
        if (v45 != v37) {
        LABEL_99:
          *(_QWORD*)(*(_QWORD*)(a1 + 72) + 8 * v45) = v41;
          v43 = (_QWORD*)*v24;
        }
      }
    }
    *v41 = v43;
    *v24 = 0;
    --*(_QWORD*)(a1 + 96);
    v46 = v24[5];
    if (v46 != 0) {
      v24[6] = v46;
      v47 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v46);
    }
    if ((*(_BYTE*)v23 & 1) != 0) {
      v48 = v24[4];
      if (v48 != 0) {
        v49 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v48);
      }
    }
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v50,
                                  (__int64)v24);
    if ((v63 & 1) == 0) {
      goto LABEL_44;
    }
  LABEL_112:
    if (v64_.v65 != nullptr) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, (__int64)v64_.v65);
    }
    goto LABEL_44;
  }
LABEL_118:
  v52 = *(__int64**)(a1 + 48);
  if (v52 != *(__int64**)(a1 + 56)) {
    v53 = eft_g_effectSystem_ptr[0];
    do {
      v54 = (_QWORD*)*v52;
      v55 = *(_QWORD*)*v52;
      if (v55 != 0 && *(_DWORD*)(v55 + 16) == *((_DWORD*)v54 + 2)) {
        v56 = *(unsigned int*)(v55 + 36);
        if ((_DWORD)v56 != 0) {
          for (j = 0; j < v56; ++j) {
            v58 = *(_QWORD*)(v55 + 40 + 8 * j);
            if (v58 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v58 + 96LL))(v58) & 1) !=
                  0) {
                goto LABEL_120;
              }
              v56 = *(unsigned int*)(v55 + 36);
            }
          }
          v54 = (_QWORD*)*v52;
        }
      }
      v59 = *((float*)v52 + 5);
      v60 = *(float*)(*(_QWORD*)(*v53 + 136) + 16LL) + *((float*)v52 + 4);
      *((float*)v52 + 4) = v60;
      game_14a1cc0(v54,
                   (float)(0x1.0000000000000p+0f - (float)(v60 / v59)) *
                       (float)(0x1.0000000000000p+0f - (float)(v60 / v59)));
      if (*((float*)v52 + 4) < *((float*)v52 + 5)) {
      LABEL_120:
        v52 += 3;
      }
      else {
        GameHr_14a1390(v52, 1);
        v52 = GameHr_14a4a80(a1 + 48, v52);
      }
    } while (v52 != *(__int64**)(a1 + 56));
  }
}

__int64 game_templates_14a7aa0(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  unsigned int v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
    const char* v16;
    int v17;
    char gap28_[4];
    __int64 v18;
    __int64 v19;
    __int128 v20;
    __int64 v21;
    __int64 v22;
  } v14_;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a1520(a1 + 2, 1),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a1520(a1 + 4, 1),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = SpotMgr_13304c0(*(unsigned int**)(a1[14] + 48)),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14_.v17 = 5;
  v3 = *(_QWORD*)(v2 + 32);
  v4 = *(_QWORD*)(v2 + 40);
  v14_.v14 = 0;
  v14_.v15 = 0;
  v14_.v18 = v3;
  v14_.v19 = v4;
  v5 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v14_.v20 = GameData_1a837a0;
  v6 = *((_QWORD*)GameData_212c540 + 1);
  v14_.v21 = *(_QWORD*)GameData_212c540;
  v14_.v22 = v6;
  v14_.v16 = "Gmap_Spot_Miasma_Cancel";
  v7 = Manager_bc6460(v5, (__int64)&v14_.v14, 1),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result =
      GameHr_14a10d0(&v14_.v14, (__int64)v7, v8, (__int64)&GameData_1a9f09e),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = v14_.v14;
  v11 = v14_.v15;
  if (v14_.v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14_.v15 + 8), 1u,
                              memory_order_relaxed);
  }
  v12 = a1[7];
  a1[6] = v10;
  a1[7] = v11;
  if (v12 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(v12),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v11 = a1[7];
  }
  if (v11 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak(v11),
    v8 = COERCE_AS(__typeof__(v8),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = v14_.v15;
    if (v14_.v15 == 0) {
      return result;
    }
  }
  else {
    v13 = v14_.v15;
    if (v14_.v15 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

__attribute__((swiftcall)) void game_templates_17e9730(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 336, 16, 0);
  v3 = v2 + 4;
  v4 = v2;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = GameData_20dd480;
  result = memset((__int64)(v2 + 4), 0, 0x120u);
  v4[7] = 0;
  v4[8] = 0;
  v4[9] = 0;
  v4[15] = 0;
  v4[16] = 0;
  v4[17] = 0;
  v4[19] = 0;
  v4[20] = 0;
  v4[21] = 0;
  v4[23] = 0;
  v4[24] = 0;
  v4[25] = 0;
  v4[27] = 0;
  v4[28] = 0;
  v4[29] = 0;
  v4[4] = game_cutscene_Signal_LightRange_vtable;
  v4[31] = 0;
  v4[32] = 0;
  v4[33] = 0;
  v4[36] = 0;
  v4[37] = 0;
  v4[35] = 0;
  v4[40] = 0;
  v4[41] = 0;
  v4[39] = 0;
  *a1 = v3;
  a1[1] = v4;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
