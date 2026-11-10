#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_be6480(_QWORD* result, __int64, unsigned __int64, float);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_bea200(_QWORD);
__int64 GameRoutine_bea360(_QWORD);
__int64 GameRoutine_beb940(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*wld_MaterialAnimModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_beaa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_beaa20(void);
_QWORD* MaterialAnimModule_Destructor(_QWORD* result);
bool MaterialAnimModule_be6200(float* a1, __int64 a2, float a3);
__int64 MaterialAnimModule_be6340(__int64 result);
_QWORD* MaterialAnimModule_be7090(_QWORD* result, __int64 a2,
                                  unsigned __int64 a3, float a4);
_QWORD* MaterialAnimModule_be9e20(_QWORD* result);
_QWORD* MaterialAnimModule_be9f20(_QWORD* result, __int64* a2);
__int64 GameRoutine_430(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_634d80_alt1(_QWORD, _QWORD) __asm__("GameRoutine_634d80");
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7910(_QWORD, _QWORD);
__int64 GameRoutine_be9640(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bea560(_QWORD, _QWORD);
__int64 GameRoutine_bea820(_QWORD, _QWORD);
__int64
    MaterialAnimModule_beaa40_alt1(_QWORD) __asm__("MaterialAnimModule_beaa40");
__int64
    MaterialAnimModule_beaf80_alt1(_QWORD) __asm__("MaterialAnimModule_beaf80");
__int64
    MaterialAnimModule_beb370_alt1(_QWORD) __asm__("MaterialAnimModule_beb370");
__int64
    MaterialAnimModule_beb520_alt1(_QWORD) __asm__("MaterialAnimModule_beb520");
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 Value_77d0(_QWORD);
__int64 Value_7aa0(_QWORD, _QWORD);
__int64 Value_7f50(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 timeline_Cursor_HasNext(_QWORD);
__int64 timeline_Cursor_Next(_QWORD);
__int64 timeline_Value_ToFloat(_QWORD);
__int64 timeline_Value_ToInt(_QWORD);
bool MaterialAnimModule_be7140(_QWORD*, __int64*, __int64, __int64, __int64,
                               __int64);
extern __int64 (*GameData_1fd0ad0[])();
extern __int64 (*nn_nlib_MemoryInputStream_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212e340[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_637ae0(void);
void __attribute__((noreturn)) GameRoutine_bea0a0(_QWORD);
void __attribute__((noreturn)) GameRoutine_bea490(void);
void __attribute__((noreturn)) GameRoutine_bea800(void);
void __attribute__((noreturn))
GameRoutine_bea800_alt1(_QWORD) __asm__("GameRoutine_bea800");
void __attribute__((noreturn))
GameRoutine_beaa20_alt1(_QWORD) __asm__("GameRoutine_beaa20");
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 wld_MaterialAnimModule_LoadAnimAsync(_QWORD* a1, __int64 a2, __int64 a3,
                                             __int64 a4);
_QWORD* MaterialAnimModule_bea0c0(_QWORD* result, __int64* a2);
__int64 MaterialAnimModule_bea200(__int64 result, __int64 a2);
__int64 MaterialAnimModule_bea360(__int64 result);
__int64* MaterialAnimModule_beaa40(__int64* result, __int64* a2, __int64* a3,
                                   unsigned __int64 a4);
__int64 MaterialAnimModule_beaf80(__int64 result, char* a2, char* a3,
                                  unsigned __int64 a4);
char** MaterialAnimModule_beb370(char** result, __int64 a2, __int64 a3,
                                 unsigned __int64 a4);
__int64** MaterialAnimModule_beb520(__int64** result);
_QWORD* MaterialAnimModule_beb6c0(_QWORD* a1, _QWORD* a2, _QWORD* a3);
__int64 MaterialAnimModule_beb940(__int64 result);
__int64 wld_MaterialAnimModule_LoadAnimAsync_lambda0_Invoke(unsigned __int64 a1,
                                                            __int64* a2);

__int64 wld_MaterialAnimModule_LoadAnimAsync(_QWORD* a1, __int64 a2, __int64 a3,
                                             __int64 a4)
{
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 result;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  atomic_ullong* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _BYTE* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  atomic_ullong* v41;
  _QWORD* v42;
  __int64 v43;
  _QWORD* v44;
  _BYTE v45[32];
  _BYTE* v46;
  _QWORD* v47;
  _BYTE v48[32];
  _BYTE* v49;

  if (a3 != 0 && a2 != 0) {
    v8 = *snd_g_fileIndex_ptr[0];
    v9 = strlen(a2);
    if ((GameRoutine_6360e0(v8, a2, v9, 0, 0) & 1) != 0 && a1[15] != a1[16]) {
      v10 = *(_BYTE**)(a4 + 32);
      v44 = a1;
      if (v10 != nullptr) {
        if (v10 == (_BYTE*)a4) {
          v46 = v45;
          (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v45);
          v12 = v44;
          v10 = v46;
        LABEL_14:
          v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
          v14[1] = 0;
          v15 = (atomic_ullong*)(v14 + 1);
          v14[2] = 0;
          v16 = v14;
          v47 = v12;
          *v14 = GameData_212e340[0] + 2;
          if (v10 != nullptr) {
            if (v10 == v45) {
              v49 = v48;
              (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v48);
              v12 = v47;
              v10 = v49;
            }
            else {
              v49 = v10;
              v46 = nullptr;
            }
          }
          else {
            v49 = nullptr;
          }
          v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v13, 80, 16, 0);
          v17[2] = v12;
          *v17 = GameData_1fd0ad0;
          if (v10 == nullptr) {
            v17[8] = 0;
            v16[8] = v17;
            goto LABEL_28;
          }
          if (v10 != v48) {
            v17[8] = v10;
            v16[8] = v17;
            goto LABEL_28;
          }
          v18 = v13;
          v19 = v17;
          v17[8] = v17 + 4;
          (*(void (**)(_BYTE*))(*(_QWORD*)v10 + 24LL))(v10);
          v20 = v49;
          v16[8] = v19;
          if (v20 == v48) {
            v21 = 32;
            v13 = v18;
          }
          else {
            v13 = v18;
            if (v20 == nullptr) {
              goto LABEL_28;
            }
            v21 = 40;
          }
          (*(void (**)(void))(*(_QWORD*)v20 + v21))();
        LABEL_28:
          v22 = (__int64)v46;
          v23 = v16 + 4;
          if (v46 == v45) {
            v24 = 32;
          }
          else {
            if (v46 == nullptr) {
            LABEL_33:
              v25 = (_QWORD*)a1[31];
              v26 = a1[32];
              if ((unsigned __int64)v25 >= v26) {
                v28 = a1[30];
                v29 = (char*)v25 - v28;
                v30 = ((__int64)v25 - v28) >> 4;
                v31 = v30 + 1;
                if ((unsigned __int64)(v30 + 1) >> 60 != 0) {
                  GameRoutine_bea490();
                }
                v32 = v26 - v28;
                v33 = v13;
                v41 = v15;
                if (v32 >> 3 > v31) {
                  v31 = v32 >> 3;
                }
                if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v34 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v34 = v31;
                }
                if (v34 >> 60 != 0) {
                  GameRoutine_60a210(v22);
                }
                v35 = fw_memory_HeapManager_Allocate(*v33, 16 * v34, 16, 0);
                v36 = &v29[v35];
                v37 = v35 + 16 * v34;
                v38 = (__int64)&v29[v35 + -16 * v30];
                v27 = (__int64)&v29[v35 + 16];
                *(_QWORD*)v36 = v16 + 4;
                *((_QWORD*)v36 + 1) = v16;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 1),
                                          1u, memory_order_relaxed);
                memcpy(v38, v28, v29);
                a1[30] = v38;
                a1[31] = v27;
                a1[32] = v37;
                if (v28 != 0) {
                  v39 = 128;
                  if (*(_QWORD*)(*v33 + 200LL) == 0) {
                    v39 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v33 + v39);
                }
                v15 = v41;
                v23 = v16 + 4;
              }
              else {
                *v25 = v23;
                v25[1] = v16;
                v27 = (__int64)(v25 + 2);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 1),
                                          1u, memory_order_relaxed);
              }
              a1[31] = v27;
              v42 = v23;
              v43 = (__int64)v16;
              v40 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 2), 1u,
                                        memory_order_relaxed);
              (*(void (**)(__int64, __int64, __int64, _QWORD**, __int64))(
                  *(_QWORD*)v40 + 16LL))(v40, a2, a3, &v42, 255);
              result = v43;
              if (v43 != 0) {
                result = std___1___shared_weak_count___release_weak(v43);
              }
              if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_QWORD*))(*v16 + 16LL))(v16);
                return std___1___shared_weak_count___release_weak(v16);
              }
              return result;
            }
            v24 = 40;
          }
          v22 = (*(__int64 (**)(void))(*(_QWORD*)v46 + v24))();
          goto LABEL_33;
        }
        v46 = v10;
        *(_QWORD*)(a4 + 32) = 0;
      }
      else {
        v46 = nullptr;
      }
      v12 = a1;
      goto LABEL_14;
    }
  }
  result = *(_QWORD*)(a4 + 32);
  if (result != 0) {
    LOBYTE(v47) = 0;
    return (*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)result + 48LL))(result,
                                                                         &v47);
  }
  return result;
}

_QWORD* MaterialAnimModule_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* i;
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
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* j;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
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

  v1 = result[30];
  v2 = result[31];
  v3 = result;
  for (*result = wld_MaterialAnimModule_vtable; v2 != v1; v2 -= 16) {
    v4 = *(_QWORD*)(v2 - 8);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v4);
    }
  }
  v3[31] = v1;
  v5 = (__int64*)v3[27];
  for (i = (__int64*)v3[28]; v5 != i;
       result = (_QWORD*)GameRoutine_634d80(*(_QWORD*)(v7 + 8))) {
    v7 = *v5++;
  }
  v8 = v3[30];
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = v3[31];
    if (v8 == v10) {
      goto LABEL_17;
    }
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 16;
    } while (v10 != v8);
    v12 = v3[30];
    v3[31] = v8;
    if (v12 != 0) {
    LABEL_17:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v13 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13);
    }
  }
  v14 = v3[27];
  if (v14 != 0) {
    v15 = *(_QWORD*)v9;
    v3[28] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v15 + v16);
  }
  v17 = (_QWORD*)v3[24];
  if (v17 != nullptr) {
    v18 = (_QWORD*)v3[25];
    if (v17 == v18) {
      goto LABEL_35;
    }
    v19 = v18 - 3;
    do {
      if (*v19 != 0) {
        result = (_QWORD*)GameRoutine_bea200(v19);
        if (*v19 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v21);
        }
      }
      v20 = v19 - 6;
      v19 -= 9;
    } while (v20 != v17);
    v22 = v3[24];
    v3[25] = v17;
    if (v22 != 0) {
    LABEL_35:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v23 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v23);
    }
  }
  for (j = (_QWORD*)v3[20]; j != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v25)) {
    v26 = j;
    j = (_QWORD*)*j;
    GameRoutine_beb940(v26 + 5);
    if ((v26[2] & 1) != 0 && v26[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
        v27 = 128;
      }
      else {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v27);
    }
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
      v25 = 128;
    }
    else {
      v25 = 56;
    }
  }
  v28 = v3[18];
  v3[18] = 0;
  if (v28 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v29);
  }
  v30 = v3[15];
  if (v30 != 0) {
    v31 = v3[16];
    if (v30 == v31) {
      goto LABEL_80;
    }
    do {
      v32 = v31;
      v33 = *(_QWORD*)(v31 - 24);
      if (v33 != 0) {
        v34 = *(_QWORD*)(v32 - 16);
        if (v33 == v34) {
          goto LABEL_69;
        }
        v35 = *(_QWORD*)(v32 - 16);
        do {
          v36 = *(_BYTE*)(v35 - 32);
          v35 -= 32;
          if ((v36 & 1) != 0 && *(_QWORD*)(v34 - 16) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v37 = 128;
            }
            else {
              v37 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v37);
          }
          v34 = v35;
        } while (v35 != v33);
        v38 = *(_QWORD*)(v32 - 24);
        *(_QWORD*)(v32 - 16) = v33;
        if (v38 != 0) {
        LABEL_69:
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v39);
        }
      }
      v31 = v32 - 48;
      if ((*(_BYTE*)(v32 - 48) & 1) != 0 && *(_QWORD*)(v32 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v40);
      }
    } while (v30 != v31);
    v41 = v3[15];
    v3[16] = v30;
    if (v41 != 0) {
    LABEL_80:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v42 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v42);
    }
  }
  if ((v3[10] & 1) != 0 && v3[12] != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v43 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v43);
  }
  if ((v3[6] & 1) != 0 && v3[8] != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v44 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v44);
  }
  v45 = v3[3];
  if (v45 != 0) {
    v46 = v3[4];
    if (v45 == v46) {
      goto LABEL_97;
    }
    do {
      v46 -= 64;
      result = (_QWORD*)GameRoutine_bea360(v46);
    } while (v46 != v45);
    v47 = v3[3];
    v3[4] = v45;
    if (v47 != 0) {
    LABEL_97:
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v48 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v48);
    }
  }
  return result;
}

bool MaterialAnimModule_be6200(float* a1, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  int v13;
  float v14;
  bool v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v4 = **(_QWORD**)(a2 + 40);
  v3 = *(_QWORD*)(*(_QWORD*)(a2 + 40) + 8LL);
  v5 = v3 - v4;
  if (v3 != v4) {
    if (v5 == 12) {
      goto LABEL_3;
    }
    v7 = 0;
    v8 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 2);
    v9 = **(_QWORD**)(a2 + 40);
    while (1) {
      v10 = *(float*)v9;
      if (a3 <= *(float*)v9) {
        break;
      }
      ++v7;
      v9 += 12;
      if (v8 == v7) {
        v6 = *(float*)(v3 - 8);
        goto LABEL_26;
      }
    }
    if (v7 == 0) {
    LABEL_3:
      v6 = *(float*)(v4 + 4);
    }
    else {
      v11 = *(float*)(v9 - 12);
      v6 = *(float*)(v9 + 4);
      if (vabds_f32(v10, v11) >= 0.00000011921f) {
        v12 = *(float*)(v9 - 8);
        v13 = *(_DWORD*)(v9 + 8);
        v14 = (float)(a3 - v11) / (float)(v10 - v11);
        if (v13 <= 1) {
          if (v13 == 1) {
            if (v14 < 1.0f) {
              v6 = v12;
            }
            goto LABEL_26;
          }
        }
        else {
          switch (v13) {
          case 2:
            v14 = v14 * v14;
            break;
          case 3:
            v19 = 1.0f;
            v14 = 1.0f - (float)((float)(1.0f - v14) * (float)(1.0f - v14));
            goto LABEL_24;
          case 4:
            v15 = v14 < 0.5f;
            v16 = (float)(v14 * -2.0f) + 2.0f;
            v14 = v14 * (float)(v14 + v14);
            v17 = (float)((float)(v16 * v16) * -0.5f) + 1.0f;
            if (!v15) {
              v14 = v17;
            }
            v18 = 1.0f - v14;
            goto LABEL_25;
          default:
            break;
          }
        }
        v19 = 1.0f;
      LABEL_24:
        v18 = v19 - v14;
      LABEL_25:
        v6 = (float)(v6 * v14) + (float)(v12 * v18);
      }
    }
  LABEL_26:
    *a1 = v6;
  }
  return v3 != v4;
}

__int64 MaterialAnimModule_be6340(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 v3;
  unsigned __int8* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int8* v12;

  v1 = *(unsigned __int8**)(result + 24);
  v2 = *(unsigned __int8**)(result + 32);
  v3 = result;
  v4 = v1;
  if (v1 != v2) {
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      v5 = *(_QWORD*)(result + 56);
    }
    else {
      v5 = *(_BYTE*)(result + 48) >> 1;
    }
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      v9 = *(_QWORD*)(result + 64);
      v4 = *(unsigned __int8**)(result + 24);
      while (1) {
        v10 = *v4;
        v11 = *((_QWORD*)v4 + 1);
        if ((v10 & 1) == 0) {
          v11 = v10 >> 1;
        }
        if (v11 == v5) {
          v12 = (v10 & 1) != 0 ? *((unsigned __int8**)v4 + 2) : v4 + 1;
          result = memcmp(v12, v9, v5);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v4 += 64;
        if (v4 == v2) {
          return result;
        }
      }
    }
    else {
      v4 = *(unsigned __int8**)(result + 24);
      while (1) {
        v6 = *v4;
        v7 = *((_QWORD*)v4 + 1);
        if ((v6 & 1) == 0) {
          v7 = v6 >> 1;
        }
        if (v7 == v5) {
          v8 = (v6 & 1) != 0 ? *((unsigned __int8**)v4 + 2) : v4 + 1;
          result = memcmp(v8, v3 + 49, v5);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v4 += 64;
        if (v4 == v2) {
          return result;
        }
      }
    }
  }
  if (v4 != v2) {
    if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
      **(_BYTE**)(v3 + 64) = 0;
      *(_QWORD*)(v3 + 56) = 0;
      v1 = *(unsigned __int8**)(v3 + 24);
    }
    else {
      *(_WORD*)(v3 + 48) = 0;
    }
    *(_DWORD*)(v3 + 72) = (unsigned __int64)(v4 - v1) >> 6;
    *((_DWORD*)v4 + 6) = 0;
  }
  return result;
}

_QWORD* MaterialAnimModule_be7090(_QWORD* result, __int64 a2,
                                  unsigned __int64 a3, float a4)
{
  __int64 v4;

  *((_BYTE*)result + 76) = 1;
  if (a4 > 0.0) {
    return GameRoutine_be6480(result, a2, a3, a4);
  }
  if (a3 != 0) {
    v4 = (__int64)result;
    GameRoutine_60a060(result + 6, a2, a3);
    return (_QWORD*)MaterialAnimModule_be6340(v4);
  }
  else {
    if ((result[6] & 1) != 0) {
      *(_BYTE*)result[8] = 0;
      result[7] = 0;
    }
    else {
      *((_WORD*)result + 24) = 0;
    }
    *((_DWORD*)result + 18) = -1;
    if ((result[10] & 1) != 0) {
      *(_BYTE*)result[12] = 0;
      result[11] = 0;
    }
    else {
      *((_WORD*)result + 40) = 0;
    }
    *(_QWORD*)((char*)result + 108) = 0;
    *((_DWORD*)result + 26) = -1;
  }
  return result;
}

_QWORD* MaterialAnimModule_be9e20(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = result + 24;
  v1 = (_QWORD*)result[24];
  result[23] = 0;
  if (v1 != nullptr) {
    v3 = (_QWORD*)result[25];
    v4 = result;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v6 = v3 - 3;
    do {
      if (*v6 != 0) {
        result = (_QWORD*)GameRoutine_bea200(v6);
        if (*v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
        }
      }
      v7 = v6 - 6;
      v6 -= 9;
    } while (v7 != v1);
    v9 = v4[24];
    v4[25] = v1;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v10 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v10);
    }
  }
  v2[1] = 0;
  v2[2] = 0;
  *v2 = 0;
  return result;
}

_QWORD* MaterialAnimModule_be9f20(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  char* v8;
  char* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  v6 = a2[3];
  v7 = *((_DWORD*)a2 + 8);
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  *((_DWORD*)v3 + 8) = v7;
  v3[3] = v6;
  v8 = (char*)a2[5];
  v9 = (char*)a2[6];
  v10 = v9 - v8;
  if (v9 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_beaa00(result);
    }
    v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9 - v8, 16, 0);
    v12 = result;
    v3[5] = result;
    v3[6] = result;
    v3[7] = (char*)result + v10;
    do {
      v12[1] = 0;
      v12[2] = 0;
      *v12 = 0;
      v14 = *(_QWORD*)v8;
      v13 = *((_QWORD*)v8 + 1);
      v15 = v13 - *(_QWORD*)v8;
      if (v13 != *(_QWORD*)v8) {
        if (0xAAAAAAAAAAAAAAABLL * (v15 >> 2) >= 0x1555555555555556LL) {
          GameRoutine_beaa20();
        }
        v16 = fw_memory_HeapManager_Allocate(*v11, v15, 16, 0);
        v17 = v16 + v15;
        *v12 = v16;
        v12[1] = v16;
        v12[2] = v16 + v15;
        result = (_QWORD*)memcpy(v16, v14, v15);
        v12[1] = v17;
      }
      v8 += 24;
      v12 += 3;
    } while (v8 != v9);
    v3[6] = v12;
  }
  return result;
}

_QWORD* MaterialAnimModule_bea0c0(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  v3[4] = 0;
  v3[5] = 0;
  v3[3] = 0;
  v6 = a2[3];
  v7 = a2[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (v8 < 0) {
      GameRoutine_bea0a0(result);
    }
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v7 - v6, 16, 0);
    v10 = 0;
    v3[3] = v9;
    v3[4] = v9;
    v3[5] = v9 + v8;
    do {
      v13 = (__int64*)(v6 + v10);
      result = (_QWORD*)(v9 + v10);
      if ((*(_BYTE*)(v6 + v10) & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(result, v13[2], v13[1]);
      }
      else {
        v14 = *v13;
        v15 = v13[1];
        v16 = v13[2];
        result[1] = v15;
        result[2] = v16;
        *result = v14;
      }
      v11 = v6 + v10;
      v12 = v9 + v10;
      v10 += 32;
      *(_DWORD*)(v12 + 24) = *(_DWORD*)(v11 + 24);
    } while (v6 + v10 != v7);
    v3[4] = v9 + v10;
  }
  return result;
}

__int64 MaterialAnimModule_bea200(__int64 result, __int64 a2)
{
  __int64 v2;
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

  v2 = *(_QWORD*)(result + 8);
  v4 = result;
  if (a2 != v2) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = *(_QWORD*)(v2 - 24);
      if (v8 != 0) {
        v9 = *(_QWORD*)(v2 - 16);
        if (v8 == v9) {
          goto LABEL_4;
        }
        do {
          v12 = *(_QWORD*)(v9 - 24);
          if (v12 != 0) {
            v13 = *(_QWORD*)(v9 - 16);
            if (v12 == v13) {
              goto LABEL_13;
            }
            do {
              v14 = *(_QWORD*)(v13 - 24);
              if (v14 != 0) {
                *(_QWORD*)(v13 - 16) = v14;
                if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                  v15 = 128;
                }
                else {
                  v15 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15);
              }
              v13 -= 40;
            } while (v13 != v12);
            v10 = *(_QWORD*)(v9 - 24);
            *(_QWORD*)(v9 - 16) = v12;
            if (v10 != 0) {
            LABEL_13:
              if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                v11 = 128;
              }
              else {
                v11 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v11);
            }
          }
          v9 -= 64;
        } while (v8 != v9);
        v6 = *(_QWORD*)(v2 - 24);
        *(_QWORD*)(v2 - 16) = v8;
        if (v6 != 0) {
        LABEL_4:
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
        }
      }
      v2 -= 64;
    } while (a2 != v2);
  }
  *(_QWORD*)(v4 + 8) = a2;
  return result;
}

__int64 MaterialAnimModule_bea360(__int64 result)
{
  __int64 v1;
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

  v1 = *(_QWORD*)(result + 40);
  v2 = result;
  if (v1 != 0) {
    v3 = *(_QWORD*)(result + 48);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = v3 - 24;
    do {
      v11 = v5;
      result = MaterialAnimModule_beb520_alt1(&v11);
      if ((*(_BYTE*)(v5 - 24) & 1) != 0 && *(_QWORD*)(v5 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
      }
      v6 = v5 - 24;
      v5 -= 48;
    } while (v6 != v1);
    v8 = *(_QWORD*)(v2 + 40);
    *(_QWORD*)(v2 + 48) = v1;
    if (v8 != 0) {
    LABEL_12:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9);
    }
  }
  if ((*(_BYTE*)v2 & 1) != 0 && *(_QWORD*)(v2 + 16) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  return result;
}

__int64* MaterialAnimModule_beaa40(__int64* result, __int64* a2, __int64* a3,
                                   unsigned __int64 a4)
{
  __int64 v4;
  __int64* v5;
  __int64* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
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
  signed __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  bool v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;

  v4 = result[2];
  v5 = (__int64*)*result;
  v8 = a2;
  v9 = result;
  if (a4 > (v4 - *result) >> 6) {
    if (v5 != nullptr) {
      v10 = (__int64*)result[1];
      if (v5 == v10) {
        goto LABEL_62;
      }
      v66 = result;
      v11 = fw_memory_g_heap_manager_ptr;
      do {
        v12 = v10;
        v13 = *(v10 - 3);
        if (v13 != 0) {
          v14 = *(v12 - 2);
          if (v13 == v14) {
            goto LABEL_16;
          }
          v15 = *(v12 - 2);
          do {
            v17 = *(_QWORD*)(v15 - 24);
            v15 -= 24;
            v16 = v17;
            if (v17 != 0) {
              *(_QWORD*)(v14 - 16) = v16;
              if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                v18 = 128;
              }
              else {
                v18 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18);
            }
            v14 = v15;
          } while (v15 != v13);
          v19 = *(v12 - 3);
          *(v12 - 2) = v13;
          if (v19 != 0) {
          LABEL_16:
            if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v20);
          }
        }
        v10 = v12 - 8;
        if ((*(_BYTE*)(v12 - 8) & 1) != 0 && *(v12 - 6) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v21);
        }
      } while (v5 != v10);
      v9 = v66;
      v47 = *v66;
      v66[1] = (__int64)v5;
      if (v47 != 0) {
      LABEL_62:
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v48);
      }
      v4 = 0;
      v9[1] = 0;
      v9[2] = 0;
      *v9 = 0;
    }
    if (a4 >> 58 == 0) {
      v49 = v4 >> 5;
      if (v4 >> 5 <= a4) {
        v49 = a4;
      }
      v50 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFC0LL;
      v51 = 0x3FFFFFFFFFFFFFFLL;
      if (!v50) {
        v51 = v49;
      }
      if (v51 >> 58 == 0) {
        v52 = v51 << 6;
        result = (__int64*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v51 << 6, 16, 0);
        v5 = result;
        *v9 = result;
        v9[1] = result;
        for (v9[2] = (char*)result + v52; v8 != a3; v5 += 8) {
          result = MaterialAnimModule_be9f20(v5, v8);
          v8 += 8;
        }
      LABEL_74:
        v9[1] = v5;
        return result;
      }
    }
    GameRoutine_bea800();
  }
  v22 = (__int64*)result[1];
  v23 = (char*)v22 - (char*)v5;
  if (a4 <= ((char*)v22 - (char*)v5) >> 6) {
    if (a2 != a3) {
      v36 = 0;
      do {
        result = &v5[v36];
        v38 = &v8[v36];
        if (v8 == v5) {
          v37 = v38[3];
          *((_DWORD*)result + 8) = *((_DWORD*)v38 + 8);
          result[3] = v37;
        }
        else {
          v39 = *(unsigned __int8*)v38;
          if ((*(_BYTE*)result & 1) != 0) {
            if ((v39 & 1) != 0) {
              v43 = v8[v36 + 2];
            }
            else {
              v43 = (__int64)&v8[v36] + 1;
            }
            if ((v39 & 1) != 0) {
              v44 = v8[v36 + 1];
            }
            else {
              v44 = v39 >> 1;
            }
            SpineModel_64dde0(result, v43, v44);
          }
          else if ((v39 & 1) != 0) {
            GameRoutine_64df20(result, v8[v36 + 2], v8[v36 + 1]);
          }
          else {
            v40 = *v38;
            v41 = v38[1];
            v42 = v38[2];
            result[1] = v41;
            result[2] = v42;
            *result = v40;
          }
          v45 = &v5[v36];
          v46 = v8[v36 + 3];
          *((_DWORD*)v45 + 8) = v8[v36 + 4];
          v45[3] = v46;
          result = (__int64*)MaterialAnimModule_beaf80_alt1(&v5[v36 + 5]);
        }
        v36 += 8;
      } while (&v8[v36] != a3);
      v22 = (__int64*)v9[1];
      v5 = (__int64*)((char*)v5 + v36 * 8);
    }
    if (v5 != v22) {
      v55 = fw_memory_g_heap_manager_ptr;
      do {
        v56 = *(v22 - 3);
        v57 = v22;
        if (v56 != 0) {
          v58 = *(v22 - 2);
          if (v56 == v58) {
            goto LABEL_95;
          }
          v59 = *(v22 - 2);
          do {
            v61 = *(_QWORD*)(v59 - 24);
            v59 -= 24;
            v60 = v61;
            if (v61 != 0) {
              *(_QWORD*)(v58 - 16) = v60;
              if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
                v62 = 128;
              }
              else {
                v62 = 56;
              }
              result =
                  (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v62);
            }
            v58 = v59;
          } while (v59 != v56);
          v63 = *(v57 - 3);
          *(v57 - 2) = v56;
          if (v63 != 0) {
          LABEL_95:
            if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
              v64 = 128;
            }
            else {
              v64 = 56;
            }
            result =
                (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v64);
          }
        }
        v22 = v57 - 8;
        if ((*(_BYTE*)(v57 - 8) & 1) != 0 && *(v57 - 6) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
            v65 = 128;
          }
          else {
            v65 = 56;
          }
          result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v65);
        }
      } while (v5 != v22);
    }
    goto LABEL_74;
  }
  v24 = (__int64*)((char*)a2 + v23);
  if (v22 != v5) {
    v25 = 0;
    do {
      result = &v5[v25 / 8];
      v27 = &v8[v25 / 8];
      if (v8 == v5) {
        v26 = v27[3];
        *((_DWORD*)result + 8) = *((_DWORD*)v27 + 8);
        result[3] = v26;
      }
      else {
        v28 = *(unsigned __int8*)v27;
        if ((*(_BYTE*)result & 1) != 0) {
          if ((v28 & 1) != 0) {
            v32 = v8[v25 / 8 + 2];
          }
          else {
            v32 = (__int64)&v8[v25 / 8] + 1;
          }
          if ((v28 & 1) != 0) {
            v33 = v8[v25 / 8 + 1];
          }
          else {
            v33 = v28 >> 1;
          }
          SpineModel_64dde0(result, v32, v33);
        }
        else if ((v28 & 1) != 0) {
          GameRoutine_64df20(result, v8[v25 / 8 + 2], v8[v25 / 8 + 1]);
        }
        else {
          v29 = *v27;
          v30 = v27[1];
          v31 = v27[2];
          result[1] = v30;
          result[2] = v31;
          *result = v29;
        }
        v34 = &v5[v25 / 8];
        v35 = v8[v25 / 8 + 3];
        *((_DWORD*)v34 + 8) = v8[v25 / 8 + 4];
        v34[3] = v35;
        result = (__int64*)MaterialAnimModule_beaf80_alt1(&v5[v25 / 8 + 5]);
      }
      v25 += 64LL;
    } while (v23 != v25);
    v22 = (__int64*)v9[1];
  }
  v53 = v22;
  if (v24 != a3) {
    v53 = v22;
    v54 = v22;
    do {
      result = MaterialAnimModule_be9f20(v54, v24);
      v24 += 8;
      v54 += 8;
      v53 += 8;
    } while (v24 != a3);
  }
  v9[1] = v53;
  return result;
}

__int64 MaterialAnimModule_beaf80(__int64 result, char* a2, char* a3,
                                  unsigned __int64 a4)
{
  __int64 v4;
  char* v5;
  char* v8;
  __int64* v9;
  char* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  signed __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v4 = *(_QWORD*)(result + 16);
  v5 = *(char**)result;
  v8 = a2;
  v9 = (__int64*)result;
  if (a4 > 0xAAAAAAAAAAAAAAABLL * ((v4 - *(_QWORD*)result) >> 3)) {
    if (v5 != nullptr) {
      v10 = *(char**)(result + 8);
      if (v5 == v10) {
        goto LABEL_23;
      }
      v11 = *(char**)(result + 8);
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v14 = *((_QWORD*)v11 - 3);
        v11 -= 24;
        v13 = v14;
        if (v14 != 0) {
          *((_QWORD*)v10 - 2) = v13;
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v15);
        }
        v10 = v11;
      } while (v11 != v5);
      v19 = *v9;
      v9[1] = (__int64)v5;
      if (v19 != 0) {
      LABEL_23:
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
      }
      v4 = 0;
      v9[1] = 0;
      v9[2] = 0;
      *v9 = 0;
    }
    if (a4 <= 0xAAAAAAAAAAAAAAALL) {
      v21 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 3);
      v22 = 2 * v21;
      if (2 * v21 <= a4) {
        v22 = a4;
      }
      v23 = v21 >= 0x555555555555555LL ? 0xAAAAAAAAAAAAAAALL : v22;
      if (v23 <= 0xAAAAAAAAAAAAAAALL) {
        v24 = 3 * v23;
        v25 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v23, 16, 0);
        v5 = (char*)result;
        *v9 = result;
        v9[1] = result;
        v9[2] = result + 8 * v24;
        if (v8 != a3) {
          while (1) {
            v27 = *(_QWORD*)v8;
            v26 = *((_QWORD*)v8 + 1);
            *((_QWORD*)v5 + 1) = 0;
            *((_QWORD*)v5 + 2) = 0;
            v28 = v26 - v27;
            *(_QWORD*)v5 = 0;
            if (v26 != v27) {
              if (0xAAAAAAAAAAAAAAABLL * (v28 >> 2) > 0x1555555555555555LL) {
                goto LABEL_47;
              }
              v29 = fw_memory_HeapManager_Allocate(*v25, v28, 16, 0);
              v30 = v29 + v28;
              *(_QWORD*)v5 = v29;
              *((_QWORD*)v5 + 1) = v29;
              *((_QWORD*)v5 + 2) = v29 + v28;
              result = memcpy(v29, v27, v28);
              *((_QWORD*)v5 + 1) = v30;
            }
            v8 += 24;
            v5 += 24;
            if (v8 == a3) {
              goto LABEL_58;
            }
          }
        }
        goto LABEL_58;
      }
    }
    GameRoutine_beaa00(result);
  }
  v16 = *(char**)(result + 8);
  v17 = v16 - v5;
  if (a4 <= 0xAAAAAAAAAAAAAAABLL * ((v16 - v5) >> 3)) {
    if (a2 != a3) {
      do {
        if (v8 != v5) {
          result = MaterialAnimModule_beb370_alt1(v5);
        }
        v8 += 24;
        v5 += 24;
      } while (v8 != a3);
      v16 = (char*)v9[1];
    }
    if (v5 != v16) {
      v39 = v16;
      v40 = fw_memory_g_heap_manager_ptr;
      do {
        v42 = *((_QWORD*)v39 - 3);
        v39 -= 24;
        v41 = v42;
        if (v42 != 0) {
          *((_QWORD*)v16 - 2) = v41;
          if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v40 + v43);
        }
        v16 = v39;
      } while (v39 != v5);
    }
  LABEL_58:
    v9[1] = (__int64)v5;
    return result;
  }
  v18 = &a2[v17];
  v44 = result;
  if (v16 != v5) {
    do {
      if (v8 != v5) {
        result = MaterialAnimModule_beb370_alt1(v5);
      }
      v8 += 24;
      v5 += 24;
      v17 -= 24LL;
    } while (v17 != 0);
    v16 = (char*)v9[1];
  }
  v31 = v16;
  if (v18 != a3) {
    v32 = (__int64*)(v16 + 8);
    v31 = v16;
    v33 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      *v32 = 0;
      v32[1] = 0;
      *(v32 - 1) = 0;
      v37 = *(_QWORD*)v18;
      v36 = *((_QWORD*)v18 + 1);
      v38 = v36 - *(_QWORD*)v18;
      if (v36 != *(_QWORD*)v18) {
        if (0xAAAAAAAAAAAAAAABLL * (v38 >> 2) > 0x1555555555555555LL) {
        LABEL_47:
          GameRoutine_beaa20();
        }
        v34 = fw_memory_HeapManager_Allocate(*v33, v38, 16, 0);
        v35 = v34 + v38;
        *(v32 - 1) = v34;
        *v32 = v34;
        v32[1] = v34 + v38;
        result = memcpy(v34, v37, v38);
        *v32 = v35;
      }
      v18 += 24;
      v31 += 24;
      v32 += 3;
    } while (v18 != a3);
  }
  *(_QWORD*)(v44 + 8) = v31;
  return result;
}

char** MaterialAnimModule_beb370(char** result, __int64 a2, __int64 a3,
                                 unsigned __int64 a4)
{
  __int64 v4;
  char* v5;
  _QWORD* v7;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  signed __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;

  v4 = (__int64)result[2];
  v5 = *result;
  v7 = result;
  if (a4 > 0xAAAAAAAAAAAAAAABLL * ((v4 - (__int64)*result) >> 2)) {
    v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v5 != nullptr) {
      v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      result[1] = v5;
      v11 = a4;
      v12 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(v10 + v12);
      a4 = v11;
      v4 = 0;
      v7[1] = 0;
      v7[2] = 0;
      *v7 = 0;
    }
    if (a4 <= 0x1555555555555555LL) {
      v13 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 2);
      v14 = 2 * v13;
      if (2 * v13 <= a4) {
        v14 = a4;
      }
      v15 = v13 >= 0xAAAAAAAAAAAAAAALL ? 0x1555555555555555LL : v14;
      if (v15 <= 0x1555555555555555LL) {
        v16 = 3 * v15;
        result = (char**)fw_memory_HeapManager_Allocate(*v9, 12 * v15, 16, 0);
        v17 = a3 - a2;
        v5 = (char*)result;
        *v7 = result;
        v7[1] = result;
        v7[2] = (char*)result + 4 * v16;
        if (v17 != 0) {
          result = (char**)memcpy(result, a2, v17);
        }
      LABEL_23:
        v22 = &v5[v17];
        goto LABEL_24;
      }
    }
    GameRoutine_beaa20();
  }
  v18 = result[1];
  v19 = v18 - v5;
  if (a4 <= 0xAAAAAAAAAAAAAAABLL * ((v18 - v5) >> 2)) {
    v17 = a3 - a2;
    if (v17 != 0) {
      result = (char**)memmove(*result, a2, v17);
    }
    goto LABEL_23;
  }
  v20 = a2 + v19;
  if (v18 != v5) {
    result = (char**)memmove(*result, a2, v19);
    v18 = (char*)v7[1];
  }
  v21 = a3 - v20;
  if (v21 != 0) {
    result = (char**)memmove(v18, v20, v21);
  }
  v22 = &v18[v21];
LABEL_24:
  v7[1] = v22;
  return result;
}

__int64** MaterialAnimModule_beb520(__int64** result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64** v4;
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

  v1 = *result;
  v2 = **result;
  if (v2 != 0) {
    v3 = v1[1];
    v4 = result;
    v5 = fw_memory_g_heap_manager_ptr;
    while (v2 != v3) {
      v6 = v3;
      v7 = *(_QWORD*)(v3 - 24);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v6 - 16);
        if (v7 == v8) {
          goto LABEL_15;
        }
        v9 = *(_QWORD*)(v6 - 16);
        do {
          v11 = *(_QWORD*)(v9 - 24);
          v9 -= 24;
          v10 = v11;
          if (v11 != 0) {
            *(_QWORD*)(v8 - 16) = v10;
            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            result =
                (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v12);
          }
          v8 = v9;
        } while (v9 != v7);
        v13 = *(_QWORD*)(v6 - 24);
        *(_QWORD*)(v6 - 16) = v7;
        if (v13 != 0) {
        LABEL_15:
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          result = (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v14);
        }
      }
      v3 = v6 - 64;
      if ((*(_BYTE*)(v6 - 64) & 1) != 0 && *(_QWORD*)(v6 - 48) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15);
      }
    }
    v1[1] = v2;
    if (**v4 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v16 = 56;
      }
      return (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16);
    }
  }
  return result;
}

_QWORD* MaterialAnimModule_beb6c0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  char* v17;
  char* v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v28;
  _QWORD* v29;
  __int64* v30;

  if (a1 != a2) {
    v4 = a1;
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)v4 & 1) != 0) {
        fw_text_String_CopyTerminated(a3, v4[2], v4[1]);
      }
      else {
        v6 = *v4;
        v7 = v4[2];
        a3[1] = v4[1];
        a3[2] = v7;
        *a3 = v6;
      }
      a3[4] = 0;
      a3[5] = 0;
      a3[3] = 0;
      v9 = (__int64*)v4[3];
      v8 = (__int64*)v4[4];
      v10 = (char*)v8 - (char*)v9;
      v30 = v8;
      if (v8 != v9) {
        v28 = v4;
        v29 = a3;
        if (v10 < 0) {
          GameRoutine_bea800();
        }
        v11 = fw_memory_HeapManager_Allocate(*v5, (char*)v8 - (char*)v9, 16, 0);
        v12 = v11;
        a3[3] = v11;
        a3[4] = v11;
        a3[5] = v11 + v10;
        do {
          if ((*(_BYTE*)v9 & 1) != 0) {
            v11 = fw_text_String_CopyTerminated(v12, v9[2], v9[1]);
          }
          else {
            v13 = *v9;
            v14 = v9[2];
            *(_QWORD*)(v12 + 8) = v9[1];
            *(_QWORD*)(v12 + 16) = v14;
            *(_QWORD*)v12 = v13;
          }
          v15 = v9[3];
          v16 = *((_DWORD*)v9 + 8);
          *(_QWORD*)(v12 + 40) = 0;
          *(_QWORD*)(v12 + 48) = 0;
          *(_QWORD*)(v12 + 56) = 0;
          *(_DWORD*)(v12 + 32) = v16;
          *(_QWORD*)(v12 + 24) = v15;
          v17 = (char*)v9[5];
          v18 = (char*)v9[6];
          v19 = v18 - v17;
          if (v18 != v17) {
            if (0xAAAAAAAAAAAAAAABLL * (v19 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
              GameRoutine_beaa00(v11);
            }
            v11 = fw_memory_HeapManager_Allocate(*v5, v18 - v17, 16, 0);
            v20 = (_QWORD*)v11;
            *(_QWORD*)(v12 + 40) = v11;
            *(_QWORD*)(v12 + 48) = v11;
            *(_QWORD*)(v12 + 56) = v11 + v19;
            do {
              v20[1] = 0;
              v20[2] = 0;
              *v20 = 0;
              v22 = *(_QWORD*)v17;
              v21 = *((_QWORD*)v17 + 1);
              v23 = v21 - *(_QWORD*)v17;
              if (v21 != *(_QWORD*)v17) {
                if (0xAAAAAAAAAAAAAAABLL * (v23 >> 2) >= 0x1555555555555556LL) {
                  GameRoutine_beaa20();
                }
                v24 = fw_memory_HeapManager_Allocate(*v5, v23, 16, 0);
                v25 = v24 + v23;
                *v20 = v24;
                v20[1] = v24;
                v20[2] = v24 + v23;
                v11 = memcpy(v24, v22, v23);
                v20[1] = v25;
              }
              v17 += 24;
              v20 += 3;
            } while (v17 != v18);
            *(_QWORD*)(v12 + 48) = v20;
          }
          v9 += 8;
          v12 += 64;
        } while (v9 != v30);
        v4 = v28;
        a3 = v29;
        v29[4] = v12;
      }
      v4 += 6;
      a3 += 6;
    } while (v4 != a2);
  }
  return a3;
}

__int64 MaterialAnimModule_beb940(__int64 result)
{
  _QWORD* v1;
  __int64* v2;
  __int64 i;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD**)(result + 16);
  v2 = (__int64*)result;
  for (i = fw_memory_g_heap_manager_ptr; v1 != nullptr;
       result = nn_mem_StandardAllocator_Free(*(_QWORD*)i + v4)) {
    v5 = v1;
    v1 = (_QWORD*)*v1;
    v6 = v5[6];
    if (v6 != 0) {
      v7 = *(_QWORD*)i;
      v5[7] = v6;
      if (*(_QWORD*)(v7 + 200) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(v7 + v8);
    }
    if ((v5[2] & 1) != 0 && v5[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)i + v9);
    }
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
      v4 = 128;
    }
    else {
      v4 = 56;
    }
  }
  v10 = *v2;
  *v2 = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)i + v11);
  }
  return result;
}

__int64 wld_MaterialAnimModule_LoadAnimAsync_lambda0_Invoke(unsigned __int64 a1,
                                                            __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  char v27;
  unsigned __int64 v28;
  char* v29;
  char* v30;
  bool v32;
  __int64 v33;
  __int64 result;
  __int64* v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  char* v53;
  char* v54;
  unsigned __int64 v55;
  char* v56;
  __int64* v57;
  char* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char v68;
  __int64* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  char* v76;
  char* v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int8* v85;
  unsigned __int64 v86;
  char* v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int8* v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int8* v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  __int64 v109;
  __int64 v110;
  unsigned __int8* v111;
  int v112;
  __int64* v113;
  __int64* v114;
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int8* v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int8* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  int v136;
  __int64* v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64* v140;
  __int64* v141;
  __int64* v142;
  unsigned __int64 v143;
  __int64* v144;
  __int64* v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64* v149;
  unsigned __int64 v150;
  __int64* v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64* v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  signed __int64 v165;
  int v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  int v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  int v176;
  int v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  unsigned __int64 v183;
  __int64 v184;
  __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64* v189;
  _DWORD* v190;
  unsigned __int64 v191;
  __int64 v192;
  __int64 v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  __int64 v197;
  _DWORD* v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  int v202;
  unsigned __int64 v203;
  __int64 v204;
  __int64 v205;
  unsigned __int64 v206;
  unsigned __int64 v207;
  unsigned __int64 v208;
  unsigned __int64 v209;
  __int64 v210;
  __int64* v211;
  __int64* v212;
  __int64 v213;
  _QWORD* v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  unsigned __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  char* v223;
  char* v224;
  __int64 v225;
  __int64 v226;
  _QWORD* v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64* v233;
  __int64* v234;
  __int64* v235;
  __int64* v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  int v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64* v253;
  __int64* v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64* v260;
  unsigned __int64 v261;
  __int64 v262;
  unsigned __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  char* v275;
  __int64* v276;
  char v277;
  unsigned __int64 v278;
  char* v279;
  unsigned __int64 v280;
  unsigned __int64 v281;
  __int64* v282;
  unsigned __int64 v283;
  unsigned __int64 v284;
  __int64* v285;
  __int64 v286;
  char* v287;
  char* v288;
  unsigned __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  char* v297;
  unsigned __int64 v298;
  char* v299;
  __int64 v300;
  char* v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  char v322;
  __int64 v323;
  unsigned __int64 v324;
  char v325;
  __int64 v326;
  int v327;
  unsigned __int8* v328;
  unsigned __int8* v329;
  _QWORD* v330;
  int v331;
  bool v332;
  char v333;
  unsigned __int8* v334;
  __int64 v335;
  unsigned __int64 v336;
  __int64* v337;
  unsigned __int8* v338;
  unsigned __int64 v339;
  unsigned __int64 v340;
  __int64 v341;
  unsigned __int64 v342;
  char* v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  int v348;
  unsigned __int64 v349;
  unsigned __int64 v350;
  unsigned __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  _QWORD v355[2];
  __int64* v356;
  __int64* v357;
  __int64 v358;
  __int64 v359;
  unsigned __int64 v360;
  char* v361;
  unsigned __int64 v362;
  unsigned __int64 v363;
  unsigned __int64 v364;
  __int64 v365;
  unsigned __int64 v366;
  char* v367;
  __int64* v368;
  unsigned __int64 v369;
  unsigned __int64 v370;
  __int16 v371;
  unsigned __int64 v372;
  char* v373;
  __int64 v374;
  char v375;
  char* v376;
  char* v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  _QWORD v383[8];

  v2 = *(_QWORD**)(a1 + 16);
  v3 = *a2;
  v4 = a1;
  v6 = (_QWORD*)v2[28];
  v5 = v2[29];
  if ((unsigned __int64)v6 >= v5) {
    v8 = v2[27];
    v9 = (char*)v6 - v8;
    v10 = ((__int64)v6 - v8) >> 3;
    v11 = v10 + 1;
    if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
      GameRoutine_637ae0();
    }
    v12 = v5 - v8;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v12 >> 2 > v11) {
      v11 = v12 >> 2;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
      v14 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 61 != 0) {
        goto LABEL_573;
      }
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
    }
    else {
      v15 = 0;
    }
    v16 = v15 + 8 * v14;
    v17 = (char*)v6 - v8;
    v18 = (__int64)&v9[v15 + -8 * v10];
    *(_QWORD*)&v9[v15] = v3;
    v7 = (__int64)&v9[v15 + 8];
    memcpy(v18, v8, v17);
    v2[27] = v18;
    v2[28] = v7;
    v2[29] = v16;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v19, v8);
    }
  }
  else {
    *v6 = v3;
    v7 = (__int64)(v6 + 1);
  }
  v2[28] = v7;
  v20 = strlen(v3 + 16);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v20);
  }
  v24 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (v20 | 7) + 1;
    }
    v25 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v26,
                                                16, 0);
    v342 = v24;
    v343 = v25;
    v341 = v26 | 1;
    goto LABEL_25;
  }
  LOBYTE(v341) = 2 * v20;
  v25 = (char*)&v341 + 1;
  if (v20 != 0) {
  LABEL_25:
    memcpy(v25, v3 + 16, v24);
  }
  v25[v24] = 0;
  v27 = v341;
  v28 = v342;
  if ((v341 & 1) == 0) {
    v28 = (unsigned __int64)(unsigned __int8)v341 >> 1;
  }
  if (v28 < 6) {
    goto LABEL_40;
  }
  v29 = v343;
  if ((v341 & 1) == 0) {
    v29 = (char*)&v341 + 1;
  }
  v30 = &v29[v28];
  if (*(_DWORD*)(v30 - 5) == 1869834798 && *(v30 - 1) == 110) {
    v322 = v341;
    v330 = v2;
    v324 = v4;
    v35 = (__int64*)fw_memory_g_heap_manager_ptr;
    v36 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         48, 16, 0);
    *(_QWORD*)(v36 + 16) = 0;
    v37 = (__int64*)(v36 + 16);
    v38 = v36;
    *(_QWORD*)v36 = 0;
    *(_DWORD*)(v36 + 8) = 0;
    *(_QWORD*)(v36 + 32) = 0;
    *(_QWORD*)(v36 + 40) = 0;
    *(_QWORD*)(v36 + 24) = 0;
    *(_DWORD*)(v36 + 16) = -1;
    *(_WORD*)(v36 + 40) = 0;
    v39 = *(_QWORD*)(v3 + 592);
    v40 = *(_QWORD*)(v3 + 576);
    v323 = v3;
    v41 = v35;
    v42 = fw_memory_HeapManager_Allocate(*v35, 80, 16, 0);
    *(_WORD*)(v42 + 56) = 257;
    *(_QWORD*)(v42 + 32) = -1;
    *(_QWORD*)(v42 + 40) = 0;
    *(_QWORD*)(v42 + 16) = 0;
    *(_QWORD*)(v42 + 24) = 0;
    *(_QWORD*)(v42 + 48) = 0;
    *(_DWORD*)(v42 + 60) = 0;
    *(_QWORD*)(v42 + 64) = v39;
    *(_QWORD*)(v42 + 72) = v40;
    memset(&v383[4], 0, 24);
    *(_QWORD*)v42 = nn_nlib_MemoryInputStream_vtable;
    *(_QWORD*)(v42 + 8) = 0;
    v383[0] = 0x2000;
    v383[1] = 256;
    v383[2] = 2048;
    v383[3] = 16;
    GameRoutine_7910(v38, v383);
    Value_7aa0(v38, v42);
    v325 = 1;
    if ((timeline_Cursor_HasNext(v38) & 1) == 0) {
    LABEL_564:
      Value_7f50(v38);
      (*(void (**)(__int64))(*(_QWORD*)v42 + 24LL))(v42);
      if (*(_QWORD*)(*v41 + 200) != 0) {
        v320 = 128;
      }
      else {
        v320 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v41 + v320, v42);
      Value_77d0(v38);
      if (*(_QWORD*)(*v41 + 200) != 0) {
        v321 = 128;
      }
      else {
        v321 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v41 + v321, v38);
      v3 = v323;
      v4 = v324;
      v2 = v330;
      v27 = v322;
      goto LABEL_41;
    }
    v43 = 0;
    v326 = v42;
    while (1) {
      if ((unsigned int)timeline_Cursor_Next(v38) == 15) {
        v44 = v37[1];
        v379 = *v37;
        v380 = v44;
        v45 = v37[3];
        v381 = v37[2];
        v382 = v45;
        if ((unsigned int)strcmp(v44, "Animations") == 0) {
          break;
        }
      }
    LABEL_54:
      if ((timeline_Cursor_HasNext(v38) & 1) == 0) {
        v325 = v43 ^ 1;
        goto LABEL_564;
      }
    }
    if ((unsigned int)timeline_Cursor_Next(v38) != 11) {
      v325 = 0;
      goto LABEL_564;
    }
    while (1) {
      if ((unsigned int)timeline_Cursor_Next(v38) == 12 || (v43 & 1) != 0) {
        goto LABEL_54;
      }
      v371 = 0;
      v374 = 0;
      v375 = 1;
      v46 = *v37;
      v47 = v37[1];
      v376 = nullptr;
      v377 = nullptr;
      v378 = 0;
      v379 = v46;
      v380 = v47;
      v48 = v330[16] - v330[15];
      v49 = v37[3];
      v381 = v37[2];
      v382 = v49;
      if (v48 != 0) {
        GameRoutine_bea560(&v376, 0xAAAAAAAAAAAAAAABLL * (v48 >> 4));
        v50 = v376;
        if (v377 != v376) {
          v51 = 0;
          v52 = 0;
          do {
            v56 = (char*)v330[15];
            if (v56 != v50) {
              v57 = (__int64*)&v56[v51];
              v58 = &v50[v51];
              v59 = (unsigned __int8)v56[v51];
              if ((v50[v51] & 1) != 0) {
                v53 = &v56[v51];
                if ((v59 & 1) != 0) {
                  v54 = *((char**)v53 + 2);
                }
                else {
                  v54 = v53 + 1;
                }
                if ((v59 & 1) != 0) {
                  v55 = *((_QWORD*)v53 + 1);
                }
                else {
                  v55 = v59 >> 1;
                }
                SpineModel_64dde0(v58, v54, v55);
              }
              else if ((v59 & 1) != 0) {
                GameRoutine_64df20(v58, *(_QWORD*)&v56[v51 + 16],
                                   *(_QWORD*)&v56[v51 + 8]);
              }
              else {
                v60 = *v57;
                v61 = v57[1];
                v62 = v57[2];
                *((_QWORD*)v58 + 1) = v61;
                *((_QWORD*)v58 + 2) = v62;
                *(_QWORD*)v58 = v60;
              }
            }
            v50 = v376;
            ++v52;
            v51 += 48LL;
          } while (v52 < 0xAAAAAAAAAAAAAAABLL * ((v377 - v376) >> 4));
        }
      }
      else {
        v50 = nullptr;
      }
      v327 = v379;
      if ((_DWORD)v379 == 13) {
        break;
      }
      v43 = 1;
      if (v50 != nullptr) {
      LABEL_521:
        v299 = v377;
        if (v50 == v377) {
          goto LABEL_555;
        }
        v333 = v43;
        do {
          v300 = *((_QWORD*)v299 - 3);
          v301 = v299;
          if (v300 != 0) {
            v302 = *((_QWORD*)v299 - 2);
            if (v300 == v302) {
              goto LABEL_546;
            }
            do {
              v303 = *(_QWORD*)(v302 - 24);
              v304 = v302;
              if (v303 != 0) {
                v305 = *(_QWORD*)(v302 - 16);
                if (v303 == v305) {
                  goto LABEL_537;
                }
                v306 = *(_QWORD*)(v302 - 16);
                do {
                  v308 = *(_QWORD*)(v306 - 24);
                  v306 -= 24;
                  v307 = v308;
                  if (v308 != 0) {
                    *(_QWORD*)(v305 - 16) = v307;
                    v309 = 56;
                    if (*(_QWORD*)(*v41 + 200) != 0) {
                      v309 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v41 + v309, v307);
                  }
                  v305 = v306;
                } while (v306 != v303);
                v310 = *(_QWORD*)(v304 - 24);
                *(_QWORD*)(v304 - 16) = v303;
                v303 = v310;
                if (v310 != 0) {
                LABEL_537:
                  v311 = 56;
                  if (*(_QWORD*)(*v41 + 200) != 0) {
                    v311 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v41 + v311, v303);
                }
              }
              v302 = v304 - 64;
              if ((*(_BYTE*)(v304 - 64) & 1) != 0) {
                v312 = *(_QWORD*)(v304 - 48);
                if (v312 != 0) {
                  v313 = 56;
                  if (*(_QWORD*)(*v41 + 200) != 0) {
                    v313 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v41 + v313, v312);
                }
              }
            } while (v300 != v302);
            v314 = *((_QWORD*)v301 - 3);
            *((_QWORD*)v301 - 2) = v300;
            v300 = v314;
            if (v314 != 0) {
            LABEL_546:
              v315 = 56;
              if (*(_QWORD*)(*v41 + 200) != 0) {
                v315 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(*v41 + v315, v300);
            }
          }
          v299 = v301 - 48;
          if ((*(v301 - 48) & 1) != 0) {
            v316 = *((_QWORD*)v301 - 4);
            if (v316 != 0) {
              v317 = 56;
              if (*(_QWORD*)(*v41 + 200) != 0) {
                v317 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(*v41 + v317, v316);
            }
          }
        } while (v50 != v299);
        v43 = v333;
        v377 = v50;
        v50 = v376;
        if (v376 != nullptr) {
        LABEL_555:
          v318 = 56;
          if (*(_QWORD*)(*v41 + 200) != 0) {
            v318 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(*v41 + v318, v50);
        }
      }
    LABEL_558:
      if ((v371 & 1) != 0 && v373 != nullptr) {
        v319 = 56;
        if (*(_QWORD*)(*v41 + 200) != 0) {
          v319 = 128;
        }
        nn_mem_StandardAllocator_Free_alt1(*v41 + v319, v373);
      }
      v42 = v326;
      if (v327 != 13) {
        goto LABEL_54;
      }
    }
    if ((unsigned int)timeline_Cursor_Next(v38) == 14) {
      v43 = 0;
      goto LABEL_514;
    }
    while (1) {
      v63 = v37[1];
      v379 = *v37;
      v380 = v63;
      v64 = v37[3];
      v381 = v37[2];
      v382 = v64;
      if ((_DWORD)v379 == 15) {
        v65 = v380;
        if ((unsigned int)strcmp(v380, "Name") != 0) {
          if ((unsigned int)strcmp(v65, "Duration") != 0) {
            if ((unsigned int)strcmp(v65, "Loop") != 0) {
              if ((unsigned int)strcmp(v65, "Keys") == 0) {
                if ((unsigned int)timeline_Cursor_Next(v38) != 13) {
                  goto LABEL_513;
                }
                v43 = 0;
                while (1) {
                  if ((unsigned int)timeline_Cursor_Next(v38) == 14 ||
                      (v43 & 1) != 0) {
                    goto LABEL_508;
                  }
                  LOWORD(v365) = 0;
                  v368 = nullptr;
                  v369 = 0;
                  v370 = 0;
                  v66 = v37[1];
                  v379 = *v37;
                  v380 = v66;
                  v67 = v37[3];
                  v381 = v37[2];
                  v382 = v67;
                  if ((_DWORD)v379 == 15) {
                    break;
                  }
                  v43 = 1;
                  v68 = 1;
                LABEL_454:
                  if ((v365 & 1) != 0 && v367 != nullptr) {
                    v274 = 56;
                    if (*(_QWORD*)(*v41 + 200) != 0) {
                      v274 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v41 + v274, v367);
                  }
                  if ((v68 & 1) != 0) {
                    goto LABEL_508;
                  }
                }
                a1 = GameRoutine_60a020(&v365, v380);
                v328 = (unsigned __int8*)v330[15];
                v334 = (unsigned __int8*)v330[16];
                if ((v365 & 1) != 0) {
                  a1 = fw_text_String_CopyTerminated(&v359, v367, v366);
                }
                else {
                  v359 = v365;
                  v360 = v366;
                  v361 = v367;
                }
                v363 = 0;
                v364 = 0;
                v362 = 0;
                v69 = v368;
                v70 = v369 - (_QWORD)v368;
                v337 = (__int64*)v369;
                if ((__int64*)v369 == v368) {
                  v71 = 0;
                }
                else {
                  if ((v70 & 0x8000000000000000LL) != 0) {
                    goto LABEL_575;
                  }
                  a1 = fw_memory_HeapManager_Allocate(*v41, v369 - (_QWORD)v368,
                                                      16, 0);
                  v71 = a1;
                  v362 = a1;
                  v363 = a1;
                  v364 = a1 + v70;
                  do {
                    if ((*(_BYTE*)v69 & 1) != 0) {
                      a1 = fw_text_String_CopyTerminated(v71, v69[2], v69[1]);
                    }
                    else {
                      v72 = *v69;
                      v73 = v69[2];
                      *(_QWORD*)(v71 + 8) = v69[1];
                      *(_QWORD*)(v71 + 16) = v73;
                      *(_QWORD*)v71 = v72;
                    }
                    v74 = v69[3];
                    v75 = *((_DWORD*)v69 + 8);
                    *(_QWORD*)(v71 + 40) = 0;
                    *(_QWORD*)(v71 + 48) = 0;
                    *(_QWORD*)(v71 + 56) = 0;
                    *(_DWORD*)(v71 + 32) = v75;
                    *(_QWORD*)(v71 + 24) = v74;
                    v76 = (char*)v69[5];
                    v77 = (char*)v69[6];
                    v78 = v77 - v76;
                    if (v77 != v76) {
                      if (0xAAAAAAAAAAAAAAABLL * (v78 >> 3) >
                          0xAAAAAAAAAAAAAAALL) {
                        goto LABEL_574;
                      }
                      a1 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, v77 - v76, 16,
                          0);
                      v79 = (_QWORD*)a1;
                      *(_QWORD*)(v71 + 40) = a1;
                      *(_QWORD*)(v71 + 48) = a1;
                      *(_QWORD*)(v71 + 56) = a1 + v78;
                      do {
                        v79[1] = 0;
                        v79[2] = 0;
                        *v79 = 0;
                        v83 = *(_QWORD*)v76;
                        v82 = *((_QWORD*)v76 + 1);
                        v84 = v82 - *(_QWORD*)v76;
                        if (v82 != *(_QWORD*)v76) {
                          if (0xAAAAAAAAAAAAAAABLL * (v84 >> 2) >
                              0x1555555555555555LL) {
                          LABEL_572:
                            GameRoutine_beaa20_alt1(a1);
                          }
                          v80 = fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, v84, 16,
                              0);
                          v81 = v80 + v84;
                          *v79 = v80;
                          v79[1] = v80;
                          v79[2] = v80 + v84;
                          a1 = memcpy(v80, v83, v84);
                          v79[1] = v81;
                        }
                        v76 += 24;
                        v79 += 3;
                      } while (v76 != v77);
                      *(_QWORD*)(v71 + 48) = v79;
                    }
                    v69 += 8;
                    v71 += 64LL;
                    v41 = (__int64*)fw_memory_g_heap_manager_ptr;
                  } while (v69 != v337);
                  v363 = v71;
                }
                v85 = v328;
                if (v328 != v334) {
                  if ((v359 & 1) != 0) {
                    v86 = v360;
                  }
                  else {
                    v86 = (unsigned __int8)v359 >> 1;
                  }
                  if ((v359 & 1) != 0) {
                    v87 = v361;
                    while (1) {
                      v91 = *v85;
                      v92 = *((_QWORD*)v85 + 1);
                      if ((v91 & 1) == 0) {
                        v92 = v91 >> 1;
                      }
                      if (v92 == v86) {
                        v93 = (v91 & 1) != 0 ? *((unsigned __int8**)v85 + 2)
                                             : v85 + 1;
                        if ((unsigned int)memcmp(v93, v87, v86) == 0) {
                          break;
                        }
                      }
                      v85 += 48;
                      if (v85 == v334) {
                        goto LABEL_139;
                      }
                    }
                  }
                  else {
                    while (1) {
                      v88 = *v85;
                      v89 = *((_QWORD*)v85 + 1);
                      if ((v88 & 1) == 0) {
                        v89 = v88 >> 1;
                      }
                      if (v89 == v86) {
                        v90 = (v88 & 1) != 0 ? *((unsigned __int8**)v85 + 2)
                                             : v85 + 1;
                        if ((unsigned int)memcmp(v90, (char*)&v359 + 1, v86) ==
                            0) {
                          break;
                        }
                      }
                      v85 += 48;
                      if (v85 == v334) {
                      LABEL_139:
                        v85 = v334;
                        break;
                      }
                    }
                  }
                }
                v94 = v362;
                v329 = v85;
                if (v362 != 0) {
                  if (v362 == v71) {
                    v363 = v362;
                    goto LABEL_162;
                  }
                  do {
                    v95 = v71;
                    v96 = *(_QWORD*)(v71 - 24);
                    if (v96 != 0) {
                      v97 = *(_QWORD*)(v95 - 16);
                      if (v96 == v97) {
                        goto LABEL_153;
                      }
                      v98 = *(_QWORD*)(v95 - 16);
                      do {
                        v100 = *(_QWORD*)(v98 - 24);
                        v98 -= 24;
                        v99 = v100;
                        if (v100 != 0) {
                          *(_QWORD*)(v97 - 16) = v99;
                          v101 = 56;
                          if (*(_QWORD*)(*v41 + 200) != 0) {
                            v101 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*v41 + v101, v99);
                        }
                        v97 = v98;
                      } while (v98 != v96);
                      v102 = *(_QWORD*)(v95 - 24);
                      *(_QWORD*)(v95 - 16) = v96;
                      v96 = v102;
                      if (v102 != 0) {
                      LABEL_153:
                        v103 = 56;
                        if (*(_QWORD*)(*v41 + 200) != 0) {
                          v103 = 128;
                        }
                        nn_mem_StandardAllocator_Free_alt1(*v41 + v103, v96);
                      }
                    }
                    v71 = v95 - 64;
                    if ((*(_BYTE*)(v95 - 64) & 1) != 0) {
                      v104 = *(_QWORD*)(v95 - 48);
                      if (v104 != 0) {
                        v105 = 56;
                        if (*(_QWORD*)(*v41 + 200) != 0) {
                          v105 = 128;
                        }
                        nn_mem_StandardAllocator_Free_alt1(*v41 + v105, v104);
                      }
                    }
                  } while (v94 != v71);
                  v85 = v329;
                  v363 = v94;
                  v94 = v362;
                  if (v362 != 0) {
                  LABEL_162:
                    v106 = 56;
                    if (*(_QWORD*)(*v41 + 200) != 0) {
                      v106 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v41 + v106, v94);
                  }
                }
                if ((v359 & 1) != 0 && v361 != nullptr) {
                  v107 = 56;
                  if (*(_QWORD*)(*v41 + 200) != 0) {
                    v107 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v41 + v107, v361);
                }
                if (v85 == (unsigned __int8*)v330[16] ||
                    (unsigned int)timeline_Cursor_Next(v38) != 13) {
                  v68 = 1;
                  v43 = 1;
                LABEL_429:
                  v260 = v368;
                  if (v368 != nullptr) {
                    v261 = v369;
                    if (v368 == (__int64*)v369) {
                      goto LABEL_451;
                    }
                    do {
                      v262 = *(_QWORD*)(v261 - 24);
                      v263 = v261;
                      if (v262 != 0) {
                        v264 = *(_QWORD*)(v261 - 16);
                        if (v262 == v264) {
                          goto LABEL_442;
                        }
                        v265 = *(_QWORD*)(v261 - 16);
                        do {
                          v267 = *(_QWORD*)(v265 - 24);
                          v265 -= 24;
                          v266 = v267;
                          if (v267 != 0) {
                            *(_QWORD*)(v264 - 16) = v266;
                            v268 = 56;
                            if (*(_QWORD*)(*v41 + 200) != 0) {
                              v268 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt1(*v41 + v268,
                                                               v266);
                          }
                          v264 = v265;
                        } while (v265 != v262);
                        v269 = *(_QWORD*)(v263 - 24);
                        *(_QWORD*)(v263 - 16) = v262;
                        v262 = v269;
                        if (v269 != 0) {
                        LABEL_442:
                          v270 = 56;
                          if (*(_QWORD*)(*v41 + 200) != 0) {
                            v270 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*v41 + v270, v262);
                        }
                      }
                      v261 = v263 - 64;
                      if ((*(_BYTE*)(v263 - 64) & 1) != 0) {
                        v271 = *(_QWORD*)(v263 - 48);
                        if (v271 != 0) {
                          v272 = 56;
                          if (*(_QWORD*)(*v41 + 200) != 0) {
                            v272 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*v41 + v272, v271);
                        }
                      }
                    } while (v260 != (__int64*)v261);
                    v369 = (unsigned __int64)v260;
                    v260 = v368;
                    if (v368 != nullptr) {
                    LABEL_451:
                      v273 = 56;
                      if (*(_QWORD*)(*v41 + 200) != 0) {
                        v273 = 128;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v41 + v273, v260);
                    }
                  }
                  goto LABEL_454;
                }
                v43 = 0;
                while (2) {
                  v108 = timeline_Cursor_Next(v38);
                  if ((v43 & 1) != 0 || v108 == 14) {
                    goto LABEL_459;
                  }
                  LOWORD(v352) = 0;
                  LODWORD(v355[0]) = 0;
                  *(_QWORD*)((char*)v355 + 4) = 0x3F80000000000000LL;
                  v356 = nullptr;
                  v357 = nullptr;
                  v358 = 0;
                  v109 = v37[1];
                  v379 = *v37;
                  v380 = v109;
                  v110 = v37[3];
                  v381 = v37[2];
                  v382 = v110;
                  if ((_DWORD)v379 != 15) {
                    v43 = 1;
                    v112 = 1;
                    goto LABEL_423;
                  }
                  a1 = GameRoutine_60a020(&v352, v380);
                  v111 = *((unsigned __int8**)v329 + 3);
                  v338 = *((unsigned __int8**)v329 + 4);
                  if ((v352 & 1) != 0) {
                    a1 = fw_text_String_CopyTerminated(&v344, v354, v353);
                  }
                  else {
                    v344 = v352;
                    v345 = v353;
                    v346 = v354;
                  }
                  v113 = v356;
                  v114 = v357;
                  v349 = 0;
                  v350 = 0;
                  v351 = 0;
                  v115 = (char*)v357 - (char*)v356;
                  v347 = v355[0];
                  v348 = v355[1];
                  if (v357 == v356) {
                    v117 = 0;
                  }
                  else {
                    if (0xAAAAAAAAAAAAAAABLL * (v115 >> 3) >
                        0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_574;
                    }
                    a1 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr,
                        (char*)v357 - (char*)v356, 16, 0);
                    v116 = a1 + v115;
                    v117 = a1;
                    v349 = a1;
                    v350 = a1;
                    v115 = a1;
                    v351 = v116;
                    do {
                      *(_QWORD*)(v115 + 8) = 0;
                      *(_QWORD*)(v115 + 16) = 0;
                      *(_QWORD*)v115 = 0;
                      v119 = *v113;
                      v118 = v113[1];
                      v120 = v118 - *v113;
                      if (v118 != *v113) {
                        if (0xAAAAAAAAAAAAAAABLL * (v120 >> 2) >
                            0x1555555555555555LL) {
                          goto LABEL_572;
                        }
                        v121 = fw_memory_HeapManager_Allocate(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, v120, 16,
                            0);
                        v122 = v121 + v120;
                        *(_QWORD*)v115 = v121;
                        *(_QWORD*)(v115 + 8) = v121;
                        *(_QWORD*)(v115 + 16) = v121 + v120;
                        a1 = memcpy(v121, v119, v120);
                        *(_QWORD*)(v115 + 8) = v122;
                      }
                      v113 += 3;
                      v115 += 24;
                    } while (v113 != v114);
                    v350 = v115;
                  }
                  v41 = &fw_memory_g_heap_manager;
                  if (v111 != v338) {
                    if ((v344 & 1) != 0) {
                      v123 = v345;
                    }
                    else {
                      v123 = (unsigned __int8)v344 >> 1;
                    }
                    if ((v344 & 1) != 0) {
                      v124 = v346;
                      while (1) {
                        v128 = *v111;
                        v129 = *((_QWORD*)v111 + 1);
                        if ((v128 & 1) == 0) {
                          v129 = v128 >> 1;
                        }
                        if (v129 == v123) {
                          v130 = (v128 & 1) != 0
                                     ? *((unsigned __int8**)v111 + 2)
                                     : v111 + 1;
                          if ((unsigned int)memcmp(v130, v124, v123) == 0) {
                            break;
                          }
                        }
                        v111 += 32;
                        if (v111 == v338) {
                          goto LABEL_214;
                        }
                      }
                    }
                    else {
                      while (1) {
                        v125 = *v111;
                        v126 = *((_QWORD*)v111 + 1);
                        if ((v125 & 1) == 0) {
                          v126 = v125 >> 1;
                        }
                        if (v126 == v123) {
                          v127 = (v125 & 1) != 0
                                     ? *((unsigned __int8**)v111 + 2)
                                     : v111 + 1;
                          if ((unsigned int)memcmp(v127, (char*)&v344 + 1,
                                                   v123) == 0) {
                            break;
                          }
                        }
                        v111 += 32;
                        if (v111 == v338) {
                        LABEL_214:
                          v111 = v338;
                          break;
                        }
                      }
                    }
                  }
                  if (v117 != 0) {
                    if (v117 == v115) {
                      v350 = v117;
                      goto LABEL_224;
                    }
                    do {
                      v132 = v115 - 24;
                      v131 = *(_QWORD*)(v115 - 24);
                      if (v131 != 0) {
                        *(_QWORD*)(v115 - 16) = v131;
                        v133 = 128;
                        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                          v133 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            fw_memory_g_heap_manager + v133, v131);
                      }
                      v115 -= 24;
                    } while (v132 != v117);
                    v350 = v117;
                    v117 = v349;
                    if (v349 != 0) {
                    LABEL_224:
                      v134 = 128;
                      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                        v134 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          fw_memory_g_heap_manager + v134, v117);
                    }
                  }
                  if ((v344 & 1) != 0 && v346 != 0) {
                    v135 = 128;
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                      v135 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        fw_memory_g_heap_manager + v135, v346);
                  }
                  if (v111 == *((unsigned __int8**)v329 + 4)) {
                    v112 = 1;
                    v43 = 1;
                    v140 = v356;
                    if (v356 != nullptr) {
                      goto LABEL_412;
                    }
                    goto LABEL_423;
                  }
                  v136 = *((_DWORD*)v111 + 6);
                  LODWORD(v355[0]) = v136;
                  if (v136 > 1) {
                    if (v136 == 2) {
                      v149 = v357;
                      v138 = 0xAAAAAAAAAAAAAAABLL * (v357 - v356);
                      if (v138 > 2) {
                        if ((char*)v357 - (char*)v356 == 72) {
                          goto LABEL_282;
                        }
                        v144 = v356 + 9;
                        if (v356 + 9 != v357) {
                          v159 = v357;
                          do {
                            v161 = *(v159 - 3);
                            v159 -= 3;
                            v160 = v161;
                            if (v161 != 0) {
                              *(v149 - 2) = v160;
                              v162 = 56;
                              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                  0) {
                                v162 = 128;
                              }
                              nn_mem_StandardAllocator_Free_alt1(
                                  fw_memory_g_heap_manager + v162, v160);
                            }
                            v149 = v159;
                          } while (v159 != v144);
                        }
                        goto LABEL_281;
                      }
                      v139 = 3;
                    }
                    else {
                      if (v136 != 3) {
                        goto LABEL_282;
                      }
                      v141 = v357;
                      v138 = 0xAAAAAAAAAAAAAAABLL * (v357 - v356);
                      if (v138 > 3) {
                        if ((char*)v357 - (char*)v356 == 96) {
                          goto LABEL_282;
                        }
                        v144 = v356 + 12;
                        if (v356 + 12 != v357) {
                          v155 = v357;
                          do {
                            v157 = *(v155 - 3);
                            v155 -= 3;
                            v156 = v157;
                            if (v157 != 0) {
                              *(v141 - 2) = v156;
                              v158 = 56;
                              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                  0) {
                                v158 = 128;
                              }
                              nn_mem_StandardAllocator_Free_alt1(
                                  fw_memory_g_heap_manager + v158, v156);
                            }
                            v141 = v155;
                          } while (v155 != v144);
                        }
                        goto LABEL_281;
                      }
                      v139 = 4;
                    }
                  LABEL_255:
                    v150 = v139 - v138;
                  }
                  else {
                    if (v136 != 0) {
                      if (v136 == 1) {
                        v137 = v357;
                        v138 = 0xAAAAAAAAAAAAAAABLL * (v357 - v356);
                        if (v138 <= 1) {
                          v139 = 2;
                          goto LABEL_255;
                        }
                        if ((char*)v357 - (char*)v356 != 48) {
                          v144 = v356 + 6;
                          if (v356 + 6 != v357) {
                            v151 = v357;
                            do {
                              v153 = *(v151 - 3);
                              v151 -= 3;
                              v152 = v153;
                              if (v153 != 0) {
                                *(v137 - 2) = v152;
                                v154 = 56;
                                if (*(_QWORD*)(fw_memory_g_heap_manager +
                                               200) != 0) {
                                  v154 = 128;
                                }
                                nn_mem_StandardAllocator_Free_alt1(
                                    fw_memory_g_heap_manager + v154, v152);
                              }
                              v137 = v151;
                            } while (v151 != v144);
                          }
                          goto LABEL_281;
                        }
                      }
                    LABEL_282:
                      if ((unsigned int)timeline_Cursor_Next(v38) != 11) {
                        v112 = 1;
                        v43 = 1;
                        v140 = v356;
                        if (v356 != nullptr) {
                          goto LABEL_412;
                        }
                        goto LABEL_423;
                      }
                      a1 = timeline_Cursor_Next(v38);
                      if ((_DWORD)a1 == 12) {
                        v332 = false;
                        goto LABEL_347;
                      }
                      while (2) {
                        v163 = v37[1];
                        v379 = *v37;
                        v380 = v163;
                        v164 = v37[3];
                        v381 = v37[2];
                        v382 = v164;
                        if ((_DWORD)v379 != 13) {
                          v332 = true;
                          break;
                        }
                        v165 = 0;
                      LABEL_287:
                        v335 = v165 >> 32;
                      LABEL_288:
                        while (1) {
                          v166 = timeline_Cursor_Next(v38);
                          v332 = v166 != 14;
                          if (v166 == 14) {
                            break;
                          }
                          v167 = v37[1];
                          v331 = v166;
                          v379 = *v37;
                          v380 = v167;
                          v168 = v37[3];
                          v381 = v37[2];
                          v382 = v168;
                          if ((_DWORD)v379 == 15) {
                            v169 = v380;
                            if ((unsigned int)strcmp(v380, "ElemIdx") == 0) {
                              timeline_Cursor_Next(v38);
                              v200 = v37[1];
                              v379 = *v37;
                              v380 = v200;
                              v201 = v37[3];
                              v381 = v37[2];
                              v382 = v201;
                              v165 = timeline_Value_ToInt(&v379) &
                                     0xFFFFFFFF00000000LL;
                              goto LABEL_287;
                            }
                            if ((unsigned int)strcmp(v169, "Key") == 0) {
                              v170 = timeline_Cursor_Next(v38);
                              a1 = timeline_Cursor_Next(v38);
                              if (v170 != 11) {
                                v332 = true;
                                goto LABEL_347;
                              }
                              if ((_DWORD)a1 != 12) {
                                while (1) {
                                  v172 = v37[1];
                                  v379 = *v37;
                                  v380 = v172;
                                  v173 = v37[3];
                                  v381 = v37[2];
                                  v382 = v173;
                                  if ((_DWORD)v379 != 13) {
                                  LABEL_338:
                                    timeline_Cursor_Next(v38);
                                    v166 = v331;
                                    goto LABEL_339;
                                  }
                                  LODWORD(v174) = 0;
                                  LODWORD(v339) = 0;
                                  LODWORD(v175) = 0;
                                  do {
                                    v176 = v175;
                                    a1 = timeline_Cursor_Next(v38);
                                    v177 = a1 != 14;
                                    if ((_DWORD)a1 == 14) {
                                      break;
                                    }
                                    while (1) {
                                      while (1) {
                                        while (1) {
                                          v178 = v37[1];
                                          v379 = *v37;
                                          v380 = v178;
                                          v179 = v37[3];
                                          v381 = v37[2];
                                          v382 = v179;
                                          if ((_DWORD)v379 == 15) {
                                            break;
                                          }
                                        LABEL_301:
                                          a1 = timeline_Cursor_Next(v38);
                                          if ((_DWORD)a1 == 14) {
                                            goto LABEL_317;
                                          }
                                        }
                                        v180 = v380;
                                        if ((unsigned int)strcmp(v380,
                                                                 "Time") != 0) {
                                          break;
                                        }
                                        timeline_Cursor_Next(v38);
                                        v181 = v37[1];
                                        v379 = *v37;
                                        v380 = v181;
                                        v182 = v37[3];
                                        v381 = v37[2];
                                        v382 = v182;
                                        v183 = timeline_Value_ToFloat(&v379);
                                        v174 = HIDWORD(v183);
                                        if ((_DWORD)v183 != 0) {
                                          a1 = GameRoutine_430();
                                          if ((_DWORD)a1 == 22) {
                                          LABEL_334:
                                            v177 = 1;
                                            goto LABEL_318;
                                          }
                                        }
                                        a1 = timeline_Cursor_Next(v38);
                                        if ((_DWORD)a1 == 14) {
                                          goto LABEL_317;
                                        }
                                      }
                                      if ((unsigned int)strcmp(v180, "Value") !=
                                          0) {
                                        break;
                                      }
                                      timeline_Cursor_Next(v38);
                                      v184 = v37[1];
                                      v379 = *v37;
                                      v380 = v184;
                                      v185 = v37[3];
                                      v381 = v37[2];
                                      v382 = v185;
                                      v186 = timeline_Value_ToFloat(&v379);
                                      v339 = HIDWORD(v186);
                                      if ((_DWORD)v186 != 0) {
                                        a1 = GameRoutine_430();
                                        if ((_DWORD)a1 == 22) {
                                          goto LABEL_334;
                                        }
                                      }
                                      a1 = timeline_Cursor_Next(v38);
                                      if ((_DWORD)a1 == 14) {
                                      LABEL_317:
                                        v177 = 0;
                                        goto LABEL_318;
                                      }
                                    }
                                    if ((unsigned int)strcmp(v180, "Curve") !=
                                        0) {
                                      goto LABEL_301;
                                    }
                                    timeline_Cursor_Next(v38);
                                    v187 = v37[1];
                                    v379 = *v37;
                                    v380 = v187;
                                    v188 = v37[3];
                                    v381 = v37[2];
                                    v382 = v188;
                                    a1 = timeline_Value_ToInt(&v379);
                                    v175 = HIDWORD(a1);
                                  } while ((_DWORD)a1 == 0);
                                LABEL_318:
                                  v189 = &v356[3 * (int)v335];
                                  v190 = (_DWORD*)v189[1];
                                  v191 = v189[2];
                                  if ((unsigned __int64)v190 < v191) {
                                    v190[2] = v176;
                                    *v190 = v174;
                                    v190[1] = v339;
                                    v171 = (__int64)(v190 + 3);
                                    goto LABEL_296;
                                  }
                                  v192 = *v189;
                                  v193 = (__int64)v190 - *v189;
                                  v194 = 1 - 0x5555555555555555LL * (v193 >> 2);
                                  if (v194 > 0x1555555555555555LL) {
                                    goto LABEL_572;
                                  }
                                  v195 = 0xAAAAAAAAAAAAAAABLL *
                                         ((__int64)(v191 - v192) >> 2);
                                  if (2 * v195 > v194) {
                                    v194 = 2 * v195;
                                  }
                                  if (v195 >= 0xAAAAAAAAAAAAAAALL) {
                                    v196 = 0x1555555555555555LL;
                                  }
                                  else {
                                    v196 = v194;
                                  }
                                  if (v196 == 0) {
                                    v197 = 0;
                                    goto LABEL_329;
                                  }
                                  if (v196 > 0x1555555555555555LL) {
                                    goto LABEL_573;
                                  }
                                  v197 = fw_memory_HeapManager_Allocate(
                                      fw_memory_g_heap_manager, 12 * v196, 16,
                                      0);
                                LABEL_329:
                                  v198 = (_DWORD*)(v197 + v193);
                                  v198[2] = v176;
                                  *v198 = v174;
                                  v198[1] = v339;
                                  v171 = v197 + v193 + 12;
                                  memcpy(v197, v192, v193);
                                  *v189 = v197;
                                  v189[1] = v171;
                                  v189[2] = v197 + 12 * v196;
                                  v41 = &fw_memory_g_heap_manager;
                                  if (v192 != 0) {
                                    v199 = 128;
                                    if (*(_QWORD*)(fw_memory_g_heap_manager +
                                                   200) == 0) {
                                      v199 = 56;
                                    }
                                    nn_mem_StandardAllocator_Free_alt1(
                                        fw_memory_g_heap_manager + v199, v192);
                                  }
                                LABEL_296:
                                  v189[1] = v171;
                                  if ((((unsigned int)timeline_Cursor_Next(
                                            v38) != 12) &
                                       ~v177) == 0) {
                                    if ((v177 & 1) == 0) {
                                      goto LABEL_288;
                                    }
                                    goto LABEL_338;
                                  }
                                }
                              }
                            }
                          }
                        }
                      LABEL_339:
                        v202 = v166;
                        a1 = timeline_Cursor_Next(v38);
                        if (v202 == 14 && (_DWORD)a1 != 12) {
                          continue;
                        }
                        break;
                      }
                    LABEL_347:
                      v203 = v369;
                      if (v369 < v370) {
                        if ((v352 & 1) != 0) {
                          a1 = fw_text_String_CopyTerminated(v369, v354, v353);
                        }
                        else {
                          v204 = v352;
                          v205 = v354;
                          *(_QWORD*)(v369 + 8) = v353;
                          *(_QWORD*)(v203 + 16) = v205;
                          *(_QWORD*)v203 = v204;
                        }
                        *(_QWORD*)(v203 + 40) = 0;
                        *(_QWORD*)(v203 + 48) = 0;
                        *(_QWORD*)(v203 + 56) = 0;
                        v43 = v332;
                        v210 = v355[0];
                        *(_DWORD*)(v203 + 32) = v355[1];
                        *(_QWORD*)(v203 + 24) = v210;
                        v211 = v356;
                        v212 = v357;
                        v213 = (char*)v357 - (char*)v356;
                        if (v357 == v356) {
                          goto LABEL_369;
                        }
                        if (0xAAAAAAAAAAAAAAABLL * (v213 >> 3) <=
                            0xAAAAAAAAAAAAAAALL) {
                          a1 = fw_memory_HeapManager_Allocate(
                              fw_memory_g_heap_manager,
                              (char*)v357 - (char*)v356, 16, 0);
                          v214 = (_QWORD*)a1;
                          *(_QWORD*)(v203 + 40) = a1;
                          *(_QWORD*)(v203 + 48) = a1;
                          *(_QWORD*)(v203 + 56) = a1 + v213;
                          do {
                            v214[1] = 0;
                            v214[2] = 0;
                            *v214 = 0;
                            v218 = *v211;
                            v217 = v211[1];
                            v219 = v217 - *v211;
                            if (v217 != *v211) {
                              if (0xAAAAAAAAAAAAAAABLL * (v219 >> 2) >
                                  0x1555555555555555LL) {
                                goto LABEL_572;
                              }
                              v215 = fw_memory_HeapManager_Allocate(
                                  fw_memory_g_heap_manager, v219, 16, 0);
                              v216 = v215 + v219;
                              *v214 = v215;
                              v214[1] = v215;
                              v214[2] = v215 + v219;
                              a1 = memcpy(v215, v218, v219);
                              v214[1] = v216;
                              v41 = &fw_memory_g_heap_manager;
                            }
                            v211 += 3;
                            v214 += 3;
                          } while (v211 != v212);
                          *(_QWORD*)(v203 + 48) = v214;
                          v43 = v332;
                        LABEL_369:
                          v220 = v203 + 64;
                        LABEL_411:
                          v112 = 0;
                          v369 = v220;
                          v140 = v356;
                          if (v356 != nullptr) {
                          LABEL_412:
                            v253 = v357;
                            if (v140 == v357) {
                              goto LABEL_420;
                            }
                            v254 = v357;
                            do {
                              v256 = *(v254 - 3);
                              v254 -= 3;
                              v255 = v256;
                              if (v256 != 0) {
                                *(v253 - 2) = v255;
                                v257 = 56;
                                if (*(_QWORD*)(fw_memory_g_heap_manager +
                                               200) != 0) {
                                  v257 = 128;
                                }
                                nn_mem_StandardAllocator_Free_alt1(
                                    fw_memory_g_heap_manager + v257, v255);
                              }
                              v253 = v254;
                            } while (v254 != v140);
                            v357 = v140;
                            v140 = v356;
                            if (v356 != nullptr) {
                            LABEL_420:
                              v258 = 56;
                              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                  0) {
                                v258 = 128;
                              }
                              nn_mem_StandardAllocator_Free_alt1(
                                  fw_memory_g_heap_manager + v258, v140);
                            }
                          }
                        LABEL_423:
                          if ((v352 & 1) != 0 && v354 != 0) {
                            v259 = 56;
                            if (*(_QWORD*)(*v41 + 200) != 0) {
                              v259 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt1(*v41 + v259,
                                                               v354);
                          }
                          if (v112 == 0) {
                            continue;
                          }
                        LABEL_459:
                          v276 = (__int64*)v376;
                          v275 = v377;
                          if (v376 != v377) {
                            v277 = v43;
                            if ((v365 & 1) != 0) {
                              v278 = v366;
                            }
                            else {
                              v278 = (unsigned __int8)v365 >> 1;
                            }
                            if ((v365 & 1) != 0) {
                              v279 = v367;
                              while (1) {
                                v283 = *(unsigned __int8*)v276;
                                v284 = v276[1];
                                if ((v283 & 1) == 0) {
                                  v284 = v283 >> 1;
                                }
                                if (v284 == v278) {
                                  v285 = (v283 & 1) != 0
                                             ? (__int64*)v276[2]
                                             : (__int64*)((char*)v276 + 1);
                                  if ((unsigned int)memcmp(v285, v279, v278) ==
                                      0) {
                                    break;
                                  }
                                }
                                v276 += 6;
                                if (v276 == (__int64*)v275) {
                                  goto LABEL_488;
                                }
                              }
                            }
                            else {
                              while (1) {
                                v280 = *(unsigned __int8*)v276;
                                v281 = v276[1];
                                if ((v280 & 1) == 0) {
                                  v281 = v280 >> 1;
                                }
                                if (v281 == v278) {
                                  v282 = (v280 & 1) != 0
                                             ? (__int64*)v276[2]
                                             : (__int64*)((char*)v276 + 1);
                                  if ((unsigned int)memcmp(
                                          v282, (char*)&v365 + 1, v278) == 0) {
                                    break;
                                  }
                                }
                                v276 += 6;
                                if (v276 == (__int64*)v275) {
                                LABEL_488:
                                  v68 = 0;
                                  v43 = v277;
                                  goto LABEL_429;
                                }
                              }
                            }
                            v43 = v277;
                          }
                          v68 = 0;
                          if (v276 != (__int64*)v275 && v276 != &v365) {
                            if ((*(_BYTE*)v276 & 1) != 0) {
                              if ((v365 & 1) != 0) {
                                v288 = v367;
                              }
                              else {
                                v288 = (char*)&v365 + 1;
                              }
                              if ((v365 & 1) != 0) {
                                v289 = v366;
                              }
                              else {
                                v289 =
                                    (unsigned __int64)(unsigned __int8)v365 >>
                                    1;
                              }
                              SpineModel_64dde0(v276, v288, v289);
                            }
                            else if ((v365 & 1) != 0) {
                              GameRoutine_64df20(v276, v367, v366);
                            }
                            else {
                              v286 = v365;
                              v287 = v367;
                              v276[1] = v366;
                              v276[2] = (__int64)v287;
                              *v276 = v286;
                            }
                            MaterialAnimModule_beaa40_alt1(v276 + 3);
                            v68 = 0;
                          }
                          goto LABEL_429;
                        }
                      LABEL_574:
                        GameRoutine_beaa00(a1);
                      }
                      v206 = v369 - (_QWORD)v368;
                      v207 = ((__int64)(v369 - (_QWORD)v368) >> 6) + 1;
                      if (v207 >> 58 != 0) {
                      LABEL_575:
                        GameRoutine_bea800_alt1(a1);
                      }
                      v208 = (__int64)(v370 - (_QWORD)v368) >> 5;
                      if (v208 <= v207) {
                        v208 = ((__int64)(v369 - (_QWORD)v368) >> 6) + 1;
                      }
                      if (v370 - (unsigned __int64)v368 >=
                          0x7FFFFFFFFFFFFFC0LL) {
                        v209 = 0x3FFFFFFFFFFFFFFLL;
                      }
                      else {
                        v209 = v208;
                      }
                      if (v209 == 0) {
                        a1 = 0;
                      LABEL_371:
                        v221 = a1 + v206;
                        v336 = a1;
                        v340 = v209;
                        if ((v352 & 1) != 0) {
                          a1 = fw_text_String_CopyTerminated(a1 + v206, v354,
                                                             v353);
                        }
                        else {
                          v222 = v353;
                          *(_QWORD*)v221 = v352;
                          *(_QWORD*)(v221 + 8) = v222;
                          *(_QWORD*)(v221 + 16) = v354;
                        }
                        v223 = (char*)v356;
                        v224 = (char*)v357;
                        *(_QWORD*)(v221 + 40) = 0;
                        *(_QWORD*)(v221 + 48) = 0;
                        v225 = v224 - v223;
                        v226 = v355[0];
                        *(_QWORD*)(v221 + 56) = 0;
                        *(_QWORD*)(v221 + 24) = v226;
                        *(_DWORD*)(v221 + 32) = v355[1];
                        if (v224 != v223) {
                          if (0xAAAAAAAAAAAAAAABLL * (v225 >> 3) >
                              0xAAAAAAAAAAAAAAALL) {
                            goto LABEL_574;
                          }
                          a1 = fw_memory_HeapManager_Allocate(
                              fw_memory_g_heap_manager, v224 - v223, 16, 0);
                          v227 = (_QWORD*)a1;
                          *(_QWORD*)(v221 + 40) = a1;
                          *(_QWORD*)(v221 + 48) = a1;
                          *(_QWORD*)(v221 + 56) = a1 + v225;
                          do {
                            v227[1] = 0;
                            v227[2] = 0;
                            *v227 = 0;
                            v231 = *(_QWORD*)v223;
                            v230 = *((_QWORD*)v223 + 1);
                            v232 = v230 - *(_QWORD*)v223;
                            if (v230 != *(_QWORD*)v223) {
                              if (0xAAAAAAAAAAAAAAABLL * (v232 >> 2) >
                                  0x1555555555555555LL) {
                                goto LABEL_572;
                              }
                              v228 = fw_memory_HeapManager_Allocate(
                                  fw_memory_g_heap_manager, v232, 16, 0);
                              v229 = v228 + v232;
                              *v227 = v228;
                              v227[1] = v228;
                              v227[2] = v228 + v232;
                              a1 = memcpy(v228, v231, v232);
                              v227[1] = v229;
                              v41 = &fw_memory_g_heap_manager;
                            }
                            v223 += 24;
                            v227 += 3;
                          } while (v223 != v224);
                          *(_QWORD*)(v221 + 48) = v227;
                        }
                        v234 = v368;
                        v233 = (__int64*)v369;
                        v235 = (__int64*)((char*)v368 + v221 - v369);
                        if ((__int64*)v369 != v368) {
                          v236 = v368;
                          v237 = (__int64)v368 + v221 - v369;
                          do {
                            v238 = *v236;
                            v239 = v236[2];
                            *(_QWORD*)(v237 + 8) = v236[1];
                            *(_QWORD*)(v237 + 16) = v239;
                            *(_QWORD*)v237 = v238;
                            v236[1] = 0;
                            v236[2] = 0;
                            *v236 = 0;
                            v240 = v236[3];
                            v241 = *((_DWORD*)v236 + 8);
                            *(_QWORD*)(v237 + 40) = 0;
                            *(_QWORD*)(v237 + 48) = 0;
                            *(_QWORD*)(v237 + 56) = 0;
                            *(_DWORD*)(v237 + 32) = v241;
                            *(_QWORD*)(v237 + 24) = v240;
                            *(_QWORD*)(v237 + 40) = v236[5];
                            *(_QWORD*)(v237 + 48) = v236[6];
                            *(_QWORD*)(v237 + 56) = v236[7];
                            v236[6] = 0;
                            v236[7] = 0;
                            v236[5] = 0;
                            v236 += 8;
                            v237 += 64;
                          } while (v236 != v233);
                          do {
                            v242 = v234[5];
                            if (v242 != 0) {
                              v243 = v234[6];
                              if (v242 == v243) {
                                goto LABEL_397;
                              }
                              v244 = v234[6];
                              do {
                                v246 = *(_QWORD*)(v244 - 24);
                                v244 -= 24;
                                v245 = v246;
                                if (v246 != 0) {
                                  *(_QWORD*)(v243 - 16) = v245;
                                  v247 = 56;
                                  if (*(_QWORD*)(fw_memory_g_heap_manager +
                                                 200) != 0) {
                                    v247 = 128;
                                  }
                                  nn_mem_StandardAllocator_Free_alt1(
                                      fw_memory_g_heap_manager + v247, v245);
                                }
                                v243 = v244;
                              } while (v244 != v242);
                              v248 = v234[5];
                              v234[6] = v242;
                              v242 = v248;
                              if (v248 != 0) {
                              LABEL_397:
                                v249 = 56;
                                if (*(_QWORD*)(fw_memory_g_heap_manager +
                                               200) != 0) {
                                  v249 = 128;
                                }
                                nn_mem_StandardAllocator_Free_alt1(
                                    fw_memory_g_heap_manager + v249, v242);
                              }
                            }
                            if ((*(_BYTE*)v234 & 1) != 0) {
                              v250 = v234[2];
                              if (v250 != 0) {
                                v251 = 56;
                                if (*(_QWORD*)(fw_memory_g_heap_manager +
                                               200) != 0) {
                                  v251 = 128;
                                }
                                nn_mem_StandardAllocator_Free_alt1(
                                    fw_memory_g_heap_manager + v251, v250);
                              }
                            }
                            v234 += 8;
                          } while (v234 != v233);
                          v234 = v368;
                        }
                        v220 = v221 + 64;
                        v368 = v235;
                        v369 = v221 + 64;
                        v370 = v336 + (v340 << 6);
                        if (v234 != nullptr) {
                          v252 = 56;
                          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                            v252 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              fw_memory_g_heap_manager + v252, v234);
                        }
                        v43 = v332;
                        goto LABEL_411;
                      }
                      if (v209 >> 58 == 0) {
                        a1 = fw_memory_HeapManager_Allocate(
                            fw_memory_g_heap_manager, v209 << 6, 16, 0);
                        goto LABEL_371;
                      }
                    LABEL_573:
                      GameRoutine_60a210(a1);
                    }
                    v142 = v357;
                    v143 = 0xAAAAAAAAAAAAAAABLL * (v357 - v356);
                    if (v357 != v356) {
                      if (v143 < 2) {
                        goto LABEL_282;
                      }
                      v144 = v356 + 3;
                      if (v356 + 3 != v357) {
                        v145 = v357;
                        do {
                          v147 = *(v145 - 3);
                          v145 -= 3;
                          v146 = v147;
                          if (v147 != 0) {
                            *(v142 - 2) = v146;
                            v148 = 56;
                            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                0) {
                              v148 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt1(
                                fw_memory_g_heap_manager + v148, v146);
                          }
                          v142 = v145;
                        } while (v145 != v144);
                      }
                    LABEL_281:
                      v357 = v144;
                      goto LABEL_282;
                    }
                    v150 = 1 - v143;
                  }
                  break;
                }
                GameRoutine_bea820(&v356, v150);
                goto LABEL_282;
              }
            }
            else {
              timeline_Cursor_Next(v38);
              v295 = v37[1];
              v43 = 1;
              v379 = *v37;
              v380 = v295;
              v296 = v37[3];
              v381 = v37[2];
              v382 = v296;
              if ((_DWORD)v379 != 2) {
                if ((_DWORD)v379 != 3) {
                  goto LABEL_514;
                }
                v43 = 0;
              }
              v375 = v43;
            }
          }
          else {
            timeline_Cursor_Next(v38);
            v292 = v37[1];
            v379 = *v37;
            v380 = v292;
            v293 = v37[3];
            v381 = v37[2];
            v382 = v293;
            v294 = timeline_Value_ToFloat(&v379);
            HIDWORD(v374) = HIDWORD(v294);
            if ((_DWORD)v294 != 0 && (unsigned int)GameRoutine_430() == 22) {
            LABEL_513:
              v43 = 1;
            LABEL_514:
              if ((v371 & 1) != 0) {
                v297 = v373;
              }
              else {
                v297 = (char*)&v371 + 1;
              }
              if ((v371 & 1) != 0) {
                v298 = v372;
              }
              else {
                v298 = (unsigned __int64)(unsigned __int8)v371 >> 1;
              }
              GameRoutine_be9640(v330, v297, v298, &v371);
              v50 = v376;
              if (v376 != nullptr) {
                goto LABEL_521;
              }
              goto LABEL_558;
            }
          }
        }
        else {
          timeline_Cursor_Next(v38);
          v290 = v37[1];
          v379 = *v37;
          v380 = v290;
          v291 = v37[3];
          v381 = v37[2];
          v382 = v291;
          if ((_DWORD)v379 != 4) {
            goto LABEL_513;
          }
          GameRoutine_60a020(&v371, v380);
        }
      }
      v43 = 0;
    LABEL_508:
      if ((unsigned int)timeline_Cursor_Next(v38) == 14 || (v43 & 1) != 0) {
        goto LABEL_514;
      }
    }
  }
  if (v28 < 0xA ||
      (*(_QWORD*)(v30 - 9) == 0x6D696E6174616D2ELL ? (v32 = *(v30 - 1) == 98)
                                                   : (v32 = false),
       !v32)) {
  LABEL_40:
    v325 = 0;
    goto LABEL_41;
  }
  v325 =
      MaterialAnimModule_be7140(v2, *(__int64**)(v3 + 592), v21, 1, v22, v23);
LABEL_41:
  if (v2[28] == v2[27]) {
    GameRoutine_634d80_alt1(*(_QWORD*)(v3 + 8), v3);
    if ((v27 & 1) == 0) {
      goto LABEL_49;
    }
  }
  else if ((v27 & 1) == 0) {
    goto LABEL_49;
  }
  if (v343 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v343);
  }
LABEL_49:
  result = *(_QWORD*)(v4 + 64);
  if (result != 0) {
    LOBYTE(v371) = v325 & 1;
    return (*(__int64 (**)(__int64, __int16*))(*(_QWORD*)result + 48LL))(result,
                                                                         &v371);
  }
  return result;
}

#pragma GCC visibility pop
