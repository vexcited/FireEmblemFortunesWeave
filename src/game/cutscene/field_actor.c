#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 GameRoutine_10758f0(_QWORD);
__int64 GameRoutine_1075d50(_QWORD, _QWORD);
__int64 GameRoutine_110b040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17fe9d0(__int64, __int64*, unsigned __int8*, char);
__int64 GameRoutine_1800640(__int64 result);
__int64 GameRoutine_a85600(_QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_ecb40(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cutscene_FieldActor_vtable[])();
extern __int64 GameData_212c638;
extern __int64 GameData_21c6978;
extern __int64 GameData_2235618;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1812b50(_QWORD);
void __attribute__((noreturn)) GameRoutine_1812bb0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 FieldActor_Destructor(__int64 a1);
__int64 FieldActor_1802740(_QWORD* a1, _QWORD* a2, char a3);
__int64 FieldActor_1802b20(__int64 a1, _QWORD* a2);
__int64 FieldActor_1802c10(_QWORD* a1, _QWORD* a2);
__int64 FieldActor_Unknown3(__int64 a1);
__int64 FieldActor_Unknown9(__int64 a1, __int64 a2);
__int64 GameRoutine_c22420(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_22356e8;
extern _UNKNOWN* GameData_212ea68;
extern _UNKNOWN* GameData_212ec88;
extern _UNKNOWN* GameData_212ff48;
extern int GameData_22356e0;
extern int* GameData_212ea60;
extern int* GameData_212ec80;
extern int* GameData_212ff40;
__int64 FieldActor_1800640(__int64 result);
__int64 FieldActor_1800f40(__int64 result, _BYTE* a2);
__int64 FieldActor_18011a0(__int64 result, __int64 a2);
float FieldActor_1801380(__int64 a1, __int64 a2);
void FieldActor_1801540(__int64 a1, __int64 a2);
void FieldActor_1801760(__int64 a1, __int64 a2);
float FieldActor_18019a0(__int64 a1, __int64 a2);

__int64 FieldActor_1800640(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  int v11;
  atomic_uchar* v12;
  int* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  _QWORD* v21;
  __int16 v22[8];
  __int64 v23;

  v1 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  v2 = *(_QWORD*)(v1 + 96);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 24);
    v4 = *(_QWORD*)(v2 + 32);
    if (v4 == 0) {
    LABEL_13:
      if (v3 != 0) {
        goto LABEL_14;
      }
      goto LABEL_27;
    }
  LABEL_12:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_13;
  }
  v5 = result;
  v22[0] = 0;
  result = GameRoutine_c22420(v1 + 104, v22);
  if ((v22[0] & 1) != 0 && v23 != 0) {
    v6 = result;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v23);
    result = v6;
  }
  if (result != 0) {
    v8 = *(_QWORD*)(result + 40);
    v3 = *(_QWORD*)(v8 + 24);
    v4 = *(_QWORD*)(v8 + 32);
    if (v4 == 0) {
      result = v5;
      if (v3 != 0) {
      LABEL_14:
        v9 = *(_QWORD**)(v3 + 112);
        v10 = *(_QWORD**)(v3 + 120);
        if (v9 != v10) {
          v11 = result & 1;
          v12 = (atomic_uchar*)GameData_212ea68;
          v13 = GameData_212ea60;
          do {
            v14 = *v9;
            if ((atomic_load_explicit(v12, memory_order_acquire) & 1) == 0) {
              v20 = v10;
              v21 = v9;
              v19 = v11;
              result = __cxa_guard_acquire(GameData_212ea68);
              v13 = GameData_212ea60;
              v11 = v19;
              v10 = v20;
              v9 = v21;
              v12 = (atomic_uchar*)GameData_212ea68;
              if ((_DWORD)result != 0) {
                *GameData_212ea60 = wld_Crc32(0, "GrassModule", 11);
                result = __cxa_guard_release(GameData_212ea68);
                v13 = GameData_212ea60;
                v11 = v19;
                v10 = v20;
                v9 = v21;
                v12 = (atomic_uchar*)GameData_212ea68;
              }
            }
            v15 = *(_QWORD*)(v14 + 512);
            v16 = v15;
            while (v16 != *(_QWORD*)(v14 + 504)) {
              v17 = *(_DWORD*)(v16 - 16);
              v16 -= 16;
              v15 -= 16;
              if (v17 == *v13) {
                if (*(_QWORD*)(v14 + 512) != v15) {
                  v18 = *(_QWORD*)(v15 + 8);
                  if (v18 != 0) {
                    *(_BYTE*)(v18 + 312) = v11;
                  }
                }
                break;
              }
            }
            ++v9;
          } while (v9 != v10);
        }
      }
    LABEL_27:
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
      return result;
    }
    result = v5;
    goto LABEL_12;
  }
  return result;
}

__int64 FieldActor_1800f40(__int64 result, _BYTE* a2)
{
  char** v2;
  char* v3;
  char* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;

  if ((*a2 & 1) == 0) {
    v2 = *(char***)(result + 8);
    v4 = *v2;
    v3 = v2[1];
    if (*v2 != v3) {
      v5 = *(_QWORD*)(result + 16);
      v6 = v3 - v4 - 8;
      if ((~(_BYTE)v6 & 0x18) != 0) {
        v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
        while (*(_QWORD*)v4 != v5) {
          v4 += 8;
          if (--v7 == 0) {
            goto LABEL_7;
          }
        }
      }
      else {
      LABEL_7:
        if (v6 < 0x18) {
          return result;
        }
        for (v4 += 16;; v4 += 32) {
          if (*((_QWORD*)v4 - 2) == v5) {
            v4 -= 16;
            goto LABEL_18;
          }
          if (*((_QWORD*)v4 - 1) == v5) {
            v4 -= 8;
            goto LABEL_18;
          }
          if (*(_QWORD*)v4 == v5) {
            goto LABEL_18;
          }
          if (*((_QWORD*)v4 + 1) == v5) {
            break;
          }
          v8 = v4 + 16;
          if (v8 == v3) {
            return result;
          }
        }
        v4 += 8;
      }
    }
  LABEL_18:
    if (v4 != v3) {
      v9 = v4 + 8;
      if (v4 + 8 != v3) {
        do {
          if (*(_QWORD*)v9 != *(_QWORD*)(result + 16)) {
            *(_QWORD*)v4 = *(_QWORD*)v9;
            v4 += 8;
          }
          v9 += 8;
        } while (v9 != v3);
        v3 = v2[1];
      }
    }
    if (v4 != v3) {
      v2[1] = v4;
    }
  }
  return result;
}

__int64 FieldActor_18011a0(__int64 result, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  char v9;
  int v10;
  __int64 v11;
  __int64 v12;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec88,
                                  memory_order_acquire);
  v3 = GameData_212ec80;
  if ((explicit & 1) == 0) {
    v11 = a2;
    v12 = result;
    v10 = __cxa_guard_acquire(GameData_212ec88);
    v3 = GameData_212ec80;
    a2 = v11;
    result = v12;
    if (v10 != 0) {
      *GameData_212ec80 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(GameData_212ec88);
      v3 = GameData_212ec80;
      a2 = v11;
      result = v12;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v9 = *(_BYTE*)(result + 8);
          *(_BYTE*)(v8 + 61) = 1;
          *(_BYTE*)(v8 + 62) = v9;
        }
      }
      return result;
    }
  }
  return result;
}

float FieldActor_1801380(__int64 a1, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  float result;
  int v10;
  __int64 v11;
  __int64 v12;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec88,
                                  memory_order_acquire);
  v3 = GameData_212ec80;
  if ((explicit & 1) == 0) {
    v11 = a2;
    v12 = a1;
    v10 = __cxa_guard_acquire(GameData_212ec88);
    v3 = GameData_212ec80;
    a2 = v11;
    a1 = v12;
    if (v10 != 0) {
      *GameData_212ec80 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(GameData_212ec88);
      v3 = GameData_212ec80;
      a2 = v11;
      a1 = v12;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          result = *(float*)(a1 + 8);
          *(float*)(v8 + 52) = result;
        }
      }
      return result;
    }
  }
  return result;
}

void FieldActor_1801540(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  int v11;
  __int64 v12;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356e8,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a2;
    v11 = __cxa_guard_acquire(&GameData_22356e8);
    a2 = v12;
    if (v11 != 0) {
      GameData_22356e0 = wld_Crc32(0, "ClothWindModule", 15);
      __cxa_guard_release(&GameData_22356e8);
      a2 = v12;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_22356e0) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(float*)(v5 + 44);
          if (v6 <= 0.0) {
            v10 = 0.0;
            if (*(_BYTE*)(v5 + 32) != 0) {
              v10 = 1.0;
            }
          }
          else {
            v7 = 0.0;
            v8 = fmaxf(*(float*)(v5 + 36) / v6, 0.0);
            if (*(_BYTE*)(v5 + 32) != 0) {
              v7 = 1.0;
            }
            v9 = fminf(v8, 1.0);
            v10 = (float)(v7 * v9) +
                  (float)(*(float*)(v5 + 40) * (float)(1.0 - v9));
          }
          *(float*)(v5 + 40) = v10;
          *(_BYTE*)(v5 + 32) = 0;
          *(_DWORD*)(v5 + 36) = 0;
          *(_DWORD*)(v5 + 44) = 0;
        }
      }
      return;
    }
  }
}

void FieldActor_1801760(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  int v11;
  __int64 v12;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356e8,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a2;
    v11 = __cxa_guard_acquire(&GameData_22356e8);
    a2 = v12;
    if (v11 != 0) {
      GameData_22356e0 = wld_Crc32(0, "ClothWindModule", 15);
      __cxa_guard_release(&GameData_22356e8);
      a2 = v12;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_22356e0) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(float*)(v5 + 44);
          if (v6 <= 0.0) {
            v10 = 0.0;
            if (*(_BYTE*)(v5 + 32) != 0) {
              v10 = 1.0;
            }
          }
          else {
            v7 = 0.0;
            v8 = fmaxf(*(float*)(v5 + 36) / v6, 0.0);
            if (*(_BYTE*)(v5 + 32) != 0) {
              v7 = 1.0;
            }
            v9 = fminf(v8, 1.0);
            v10 = (float)(v7 * v9) +
                  (float)(*(float*)(v5 + 40) * (float)(1.0 - v9));
          }
          *(float*)(v5 + 40) = v10;
          *(_DWORD*)(v5 + 36) = 0;
          *(_BYTE*)(v5 + 32) = 1;
          *(_QWORD*)(v5 + 44) = 0x46EA600000000000LL;
        }
      }
      return;
    }
  }
}

float FieldActor_18019a0(__int64 a1, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  __int64 v9;
  float result;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff48,
                                  memory_order_acquire);
  v3 = GameData_212ff40;
  if ((explicit & 1) == 0) {
    v13 = a2;
    v14 = a1;
    v12 = __cxa_guard_acquire(GameData_212ff48);
    v3 = GameData_212ff40;
    a2 = v13;
    a1 = v14;
    if (v12 != 0) {
      *GameData_212ff40 = wld_Crc32(0, "ClothWindModule", 15);
      __cxa_guard_release(GameData_212ff48);
      v3 = GameData_212ff40;
      a2 = v13;
      a1 = v14;
    }
  }
  v4 = *v3;
  v5 = *(_QWORD*)(a2 + 512);
  for (i = v5; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == v4) {
      if (*(_QWORD*)(a2 + 512) != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v9 = *(_QWORD*)(a1 + 8);
          result = *(float*)(v9 + 16);
          v11 = *(_QWORD*)(v9 + 8);
          *(_QWORD*)(v8 + 56) = *(_QWORD*)v9;
          *(_QWORD*)(v8 + 64) = v11;
          *(float*)(v8 + 72) = result;
        }
      }
      return result;
    }
  }
  return result;
}

__int64 FieldActor_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
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
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 result;

  *(_QWORD*)a1 = game_cutscene_FieldActor_vtable;
  if (*(_BYTE*)(a1 + 8) == 1) {
    GameRoutine_a85600(GameData_21c6978);
  }
  v2 = *(_QWORD*)(a1 + 304);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 312) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  v6 = *(_QWORD*)(a1 + 280);
  if (v6 != 0) {
    v7 = *(_QWORD*)(a1 + 288);
    if (v6 == v7) {
      goto LABEL_14;
    }
    do {
      v8 = *(_QWORD*)(v7 - 8);
      if (v8 != 0) {
        std___1___shared_weak_count___release_weak(v8);
      }
      v7 -= 16;
    } while (v7 != v6);
    v9 = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(a1 + 288) = v6;
    v6 = v9;
    if (v9 != 0) {
    LABEL_14:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
    }
  }
  v11 = *(_QWORD*)(a1 + 256);
  if (v11 != 0) {
    v12 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 264) = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(v12 + v13, v11);
  }
  v14 = *(_QWORD*)(a1 + 232);
  if (v14 != 0) {
    v15 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 240) = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  v17 = *(_QWORD*)(a1 + 208);
  if (v17 != 0) {
    v18 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 216) = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = *(_QWORD*)(a1 + 184);
  if (v20 != 0) {
    v21 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 192) = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  v23 = *(_QWORD*)(a1 + 160);
  if (v23 != 0) {
    v24 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 168) = v23;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(v24 + v25, v23);
  }
  v26 = *(_QWORD*)(a1 + 136);
  if (v26 != 0) {
    v27 = *(_QWORD*)(a1 + 144);
    if (v26 == v27) {
      goto LABEL_44;
    }
    do {
      v28 = *(_QWORD*)(v27 - 8);
      if (v28 != 0) {
        std___1___shared_weak_count___release_weak(v28);
      }
      v27 -= 16;
    } while (v27 != v26);
    v29 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 144) = v26;
    v26 = v29;
    if (v29 != 0) {
    LABEL_44:
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v30, v26);
    }
  }
  v31 = *(_QWORD*)(a1 + 104);
  if (v31 != 0) {
    v32 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 112) = v31;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(v32 + v33, v31);
  }
  v34 = *(_QWORD*)(a1 + 80);
  if (v34 != 0) {
    v35 = *(_QWORD*)(a1 + 88);
    if (v34 == v35) {
      goto LABEL_58;
    }
    do {
      v36 = *(_QWORD*)(v35 - 8);
      if (v36 != 0) {
        std___1___shared_weak_count___release_weak(v36);
      }
      v35 -= 16;
    } while (v35 != v34);
    v37 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 88) = v34;
    v34 = v37;
    if (v37 != 0) {
    LABEL_58:
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v38, v34);
    }
  }
  v39 = *(_QWORD*)(a1 + 56);
  if (v39 != 0) {
    v40 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 64) = v39;
    v41 = 128;
    if (*(_QWORD*)(v40 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(v40 + v41, v39);
  }
  v42 = *(_QWORD*)(a1 + 32);
  if (v42 != 0) {
    v43 = *(_QWORD*)(a1 + 40);
    if (v42 == v43) {
      goto LABEL_77;
    }
    do {
      v44 = *(_QWORD*)(v43 - 8);
      *(_QWORD*)(v43 - 8) = 0;
      if (v44 != 0) {
        GameRoutine_10758f0(v44 + 8);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v45 = 128;
        }
        else {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v45, v44);
      }
      v46 = *(_QWORD*)(v43 - 16);
      if (v46 != 0) {
        std___1___shared_weak_count___release_weak(v46);
      }
      v43 -= 24;
    } while (v43 != v42);
    v47 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v42;
    v42 = v47;
    if (v47 != 0) {
    LABEL_77:
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v48, v42);
    }
  }
  result = *(_QWORD*)(a1 + 24);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 FieldActor_1802740(_QWORD* a1, _QWORD* a2, char a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  char* v27;
  char* v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 result;
  __int64 v38;
  float v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned __int8 v45[16];
  __int64 v46;
  _DWORD v47[8];
  _DWORD* v48;

  v3 = a2[1];
  v43 = *a2;
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16),
                                            1u, memory_order_relaxed),
                  (v7 = a2[1]) != 0)) {
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      v9 = *a2;
    }
    else {
      v9 = 0;
    }
  }
  else {
    v9 = 0;
    v8 = 0;
  }
  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       80, 16, 0);
  v45[8] = 0;
  *(_BYTE*)v11 = 0;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  v45[0] = 14;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  qmemcpy(&v45[1], "_Camera", 7);
  *(_DWORD*)(v11 + 8) = -1;
  v12 = GameRoutine_17fe9d0(v11 + 8, (__int64*)(v9 + 24), v45, a3 & 1);
  *(_BYTE*)v11 = v12 & 1;
  if ((v12 & 1) != 0) {
    v48 = nullptr;
    if ((GameRoutine_1075d50(v11 + 8, v47) & 1) != 0 && GameData_2235618 != 0) {
      GameRoutine_110b040(GameData_2235618, v11 + 16, v11 + 64);
    }
    v12 = (__int64)v48;
    if (v48 == v47) {
      v13 = 32;
      goto LABEL_14;
    }
    if (v48 != nullptr) {
      v13 = 40;
    LABEL_14:
      v12 = (*(__int64 (**)(void))(*(_QWORD*)v48 + v13))();
    }
  }
  if ((v45[0] & 1) != 0 && v46 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v10 + 200LL) == 0) {
      v14 = 56;
    }
    v12 = nn_mem_StandardAllocator_Free(*v10 + v14, v46);
  }
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    v12 = std___1___shared_weak_count___release_weak(v8);
  }
  v16 = (_QWORD*)a1[5];
  v15 = a1[6];
  if ((unsigned __int64)v16 >= v15) {
    v18 = a1[4];
    v19 = (char*)v16 - v18;
    v20 = 1 - 0x5555555555555555LL * (((__int64)v16 - v18) >> 3);
    if (v20 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1812b50(v12);
    }
    v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v15 - v18) >> 3);
    if (2 * v21 > v20) {
      v20 = 2 * v21;
    }
    if (v21 >= 0x555555555555555LL) {
      v22 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v22 = v20;
    }
    if (v22 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210(v12);
    }
    v23 = 3 * v22;
    v24 = fw_memory_HeapManager_Allocate(*v10, 24 * v22, 16, 0);
    v25 = &v19[v24];
    v26 = v24 + 8 * v23;
    *((_QWORD*)v25 + 2) = v11;
    v17 = (__int64)&v19[v24 + 24];
    *(_QWORD*)v25 = v43;
    *((_QWORD*)v25 + 1) = v3;
    v27 = (char*)a1[4];
    v28 = (char*)a1[5];
    v29 = (__int64)&v19[v24 + v27 - v28];
    if (v27 != v28) {
      v44 = v26;
      v30 = (char*)a1[4];
      v31 = &v19[v24 + v27 - v28];
      do {
        *(_QWORD*)v31 = *(_QWORD*)v30;
        *((_QWORD*)v31 + 1) = *((_QWORD*)v30 + 1);
        *(_QWORD*)v30 = 0;
        *((_QWORD*)v30 + 1) = 0;
        v32 = *((_QWORD*)v30 + 2);
        *((_QWORD*)v30 + 2) = 0;
        v30 += 24;
        *((_QWORD*)v31 + 2) = v32;
        v31 += 24;
      } while (v30 != v28);
      do {
        v33 = *((_QWORD*)v27 + 2);
        *((_QWORD*)v27 + 2) = 0;
        if (v33 != 0) {
          GameRoutine_10758f0(v33 + 8);
          if (*(_QWORD*)(*v10 + 200LL) != 0) {
            v34 = 128;
          }
          else {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v34, v33);
        }
        v35 = *((_QWORD*)v27 + 1);
        if (v35 != 0) {
          std___1___shared_weak_count___release_weak(v35);
        }
        v27 += 24;
      } while (v27 != v28);
      v27 = (char*)a1[4];
      v26 = v44;
    }
    a1[4] = v29;
    a1[5] = v17;
    a1[6] = v26;
    if (v27 != nullptr) {
      v36 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v36, v27);
    }
  }
  else {
    v17 = (__int64)(v16 + 3);
    v16[2] = v11;
    *v16 = v43;
    v16[1] = v3;
  }
  a1[5] = v17;
  result = std___1___shared_weak_count_lock(a2[1]);
  v38 = result;
  v39 = *(float*)(*a2 + 8LL);
  v41 = a1[7];
  v40 = a1[8];
  v42 = a1 + 7;
  *(float*)v47 = v39;
  if (v41 == v40 || *(float*)(v40 - 4) <= v39) {
    result = AnimCtrlModule_a78450(v42, v47);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    return std___1___shared_weak_count___release_weak(v38);
  }
  return result;
}

__int64 FieldActor_1802b20(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;

  v3 = a2[1];
  if (v3 != 0 && (v5 = std___1___shared_weak_count_lock(v3)) != 0) {
    v6 = v5;
    AnimCtrlModule_a78450(a1 + 184, *a2 + 24LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    AnimCtrlModule_a78450(a1 + 184, 24);
  }
  result = std___1___shared_weak_count_lock(a2[1]);
  v8 = result;
  v9 = *(float*)(*a2 + 8LL);
  v11 = *(_QWORD*)(a1 + 208);
  v10 = *(_QWORD*)(a1 + 216);
  v12 = a1 + 208;
  v13 = v9;
  if (v11 == v10 || *(float*)(v10 - 4) <= v9) {
    result = AnimCtrlModule_a78450(v12, &v13);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 FieldActor_1802c10(_QWORD* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  unsigned __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  float v27;

  v4 = std___1___shared_weak_count_lock(a2[1]);
  v5 = v4;
  v6 = *(_DWORD*)(*a2 + 28LL);
  v8 = (_DWORD*)a1[30];
  v7 = a1[31];
  if ((unsigned __int64)v8 >= v7) {
    v10 = a1[29];
    v11 = (char*)v8 - v10;
    v12 = ((__int64)v8 - v10) >> 3;
    v13 = v12 + 1;
    if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
      GameRoutine_1812bb0();
    }
    v14 = v7 - v10;
    v15 = fw_memory_g_heap_manager_ptr;
    if (v14 >> 2 > v13) {
      v13 = v14 >> 2;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
      v16 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      if (v16 >> 61 != 0) {
        GameRoutine_60a210(v4);
      }
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = &v11[v17];
    v19 = v17 + 8 * v16;
    v20 = (__int64)&v11[v17 + -8 * v12];
    *(_DWORD*)v18 = 1;
    *((_DWORD*)v18 + 1) = v6;
    v9 = (__int64)&v11[v17 + 8];
    memcpy(v20, v10, v11);
    a1[29] = v20;
    a1[30] = v9;
    a1[31] = v19;
    if (v10 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v21, v10);
    }
  }
  else {
    v8[1] = v6;
    v9 = (__int64)(v8 + 2);
    *v8 = 1;
  }
  a1[30] = v9;
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  result = std___1___shared_weak_count_lock(a2[1]);
  v23 = result;
  v24 = *(float*)(*a2 + 8LL);
  v26 = a1[32];
  v25 = a1[33];
  v27 = v24;
  if (v26 == v25 || *(float*)(v25 - 4) <= v24) {
    result = AnimCtrlModule_a78450(a1 + 32, &v27);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    return std___1___shared_weak_count___release_weak(v23);
  }
  return result;
}

__int64 FieldActor_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (*(_BYTE*)(a1 + 8) == 1) {
    v2 = *(_QWORD*)(GameData_21c6978 + 32);
    if (*(_QWORD*)(GameData_21c6978 + 24) == v2) {
      v3 = 0;
      if ((GameRoutine_ecb40() & 1) == 0) {
        return 0;
      }
    }
    else {
      v3 = *(_QWORD*)(v2 - 8);
      if ((GameRoutine_ecb40() & 1) == 0) {
        return 0;
      }
    }
    v4 = *(_QWORD*)(v3 + 64);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v4 + 96);
      if (v5 != 0 && *(_DWORD*)(v5 + 240) == 5) {
        v6 = (_QWORD*)(v4 + 120);
        while (1) {
          v6 = (_QWORD*)*v6;
          if (v6 == nullptr) {
            break;
          }
          result = 0;
          if (*(_DWORD*)(v6[5] + 240LL) != 5) {
            return result;
          }
        }
        goto LABEL_13;
      }
      return 0;
    }
  }

LABEL_13:
  v9 = *(_QWORD*)(a1 + 32);
  v8 = *(_QWORD*)(a1 + 40);
  while (v9 != v8) {
    v10 = *(_QWORD*)(v9 + 16);
    if (*(_BYTE*)v10 == 1) {
      result = *(_QWORD*)(v10 + 64);
      if (result == 0) {
        return result;
      }
      if (*(_BYTE*)(result + 165) != 1 ||
          (GameRoutine_ad7390(result) & 1) == 0) {
        return 0;
      }
    }
    v9 += 24;
  }
  return 1;
}

__int64 FieldActor_Unknown9(__int64 a1, __int64 a2)
{
  __int64 result;

  if ((*(_BYTE*)(a2 + 5) & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                               32LL) -
                                    8LL) +
                         40LL) +
              225LL) = 1;
    return GameRoutine_1800640(*(unsigned __int8*)(a2 + 7));
  }
  return result;
}

#pragma GCC visibility pop
