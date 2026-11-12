#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_19a5400(PSEUDO_X8, __int64,
                                                    unsigned __int64);
__int64 GameHr_5d1310(__int64*, __int64);
__int64 GameHr_bc7fc0(__int64*);
__int64 GameRoutine_5d3ee0(__int64, __int64 (*)(__int64*, void*, __int64),
                           __int64);
__int64 GameRoutine_5d3ef0(__int64, __int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_bc3cf0();
__int64 GameRoutine_bc3d70();
__int64 GameRoutine_bd0140();
__int64 eft_bcb9e0(_QWORD*);
__int64 eft_data_Manager_LoadAsync(_QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_bc8340();
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_1fcffa0[])();
extern __int64 (*GameData_212e960[6])();
extern __int64 (*GameData_212e968[5])();
extern __int64 (*GameData_212e970[4])();
extern __int64 (*GameData_212e978[3])();
extern __int64 (*GameData_212e980[2])();
extern __int64 (*GameData_212e988)();
extern __int64 (*eft_VfxHeap_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float expf(float);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void GameHr_bc8700(__int64, __int64);
void GameRoutine_64aa80(__int64);
void GameRoutine_64eb80(__int64*, __int64*, __int64*, __int64, __int64,
                        __int64*, __int64);
void GameRoutine_bc81b0(__int64*, unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void eft_res_Manager_Manager(__int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void memory_64e4a0(__int64* a1, __int64* a2, unsigned __int64 a3, __int64* a4,
                   __int64 a5);
void memory_64e8e0(__int64* a1, __int64* a2, unsigned __int64 a3, __int64* a4);
void memory_a6e360(__int64 a1, __int64 a2, unsigned __int8* a3);
__attribute__((swiftcall)) void memory_a6ea10(PSEUDO_X8 x8_, __int64 a1,
                                              int a2);
void memory_b3a750(__int64 a1, _BYTE* a2, _BYTE* a3, _BYTE* a4, __int64 a5,
                   float a6);
void memory_bc3dc0(__int64 a1, __int64 a2);

void memory_64e4a0(__int64* a1, __int64* a2, unsigned __int64 a3, __int64* a4,
                   __int64 a5)
{
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 i;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
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

  if (a3 >= 2) {
    v5 = a2;
    v6 = a1;
    if (a3 == 2) {
      v7 = *(a2 - 1);
      v8 = *a1;
      if ((signed __int32)*(_DWORD*)(v7 + 160) <
          (signed __int32)*(_DWORD*)(*a1 + 160)) {
        *a1 = v7;
        *(a2 - 1) = v8;
      }
    }
    else {
      v9 = a3;
      if ((__int64)a3 <= 0) {
        if (a1 != a2) {
          v14 = a1 + 1;
          if (a1 + 1 != a2) {
            v15 = 0;
            v16 = a1;
            v17 = fw_memory_g_heap_manager_ptr;
            do {
              v18 = *v16;
              v19 = v16[1];
              v16 = v14;
              if ((signed __int32)*(_DWORD*)(v19 + 160) <
                  (signed __int32)*(_DWORD*)(v18 + 160)) {
                v20 = 0;
                *v14 = 0;
                for (i = v15;; i -= 8) {
                  v22 = (__int64*)((char*)v6 + i);
                  *v22 = 0;
                  v22[1] = v18;
                  if (v20 != 0) {
                    GameRoutine_64aa80(v20);
                    if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
                      v23 = 128;
                    }
                    else {
                      v23 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v23, v20);
                  }
                  if (i == 0) {
                    break;
                  }
                  v24 = (__int64*)((char*)v6 + i);
                  v18 = *(__int64*)((char*)v6 + i - 8);
                  if ((signed __int32)*(_DWORD*)(v19 + 160) >=
                      (signed __int32)*(_DWORD*)(v18 + 160)) {
                    goto LABEL_24;
                  }
                  v20 = *v22;
                }
                v24 = v6;
              LABEL_24:
                v25 = *v24;
                v5 = a2;
                *v24 = v19;
                if (v25 != 0) {
                  GameRoutine_64aa80(v25);
                  if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
                    v26 = 128;
                  }
                  else {
                    v26 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v26, v25);
                }
              }
              v14 = v16 + 1;
              v15 += 8;
            } while (v16 + 1 != v5);
          }
        }
      }
      else {
        v10 = a3 >> 1;
        v11 = a4;
        v12 = a3 - (a3 >> 1);
        if ((__int64)a3 <= a5) {
          memory_64e8e0(a1, &a1[v10], a3 >> 1, a4);
          v27 = &v11[v10];
          memory_64e8e0(&v6[v10], v5, v9 - (v9 >> 1), v27);
          v28 = &v11[v9];
          v29 = v27;
          v30 = v11;
          v31 = fw_memory_g_heap_manager_ptr;
          while (v29 != v28) {
            v32 = *v29;
            v33 = *v30;
            if ((signed __int32)*(_DWORD*)(*v29 + 160) >=
                (signed __int32)*(_DWORD*)(*v30 + 160)) {
              *v30 = 0;
              v36 = *v6;
              *v6 = v33;
              if (v36 != 0) {
                GameRoutine_64aa80(v36);
                v37 = 128;
                if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
                  v37 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v37, v36);
              }
              ++v30;
            }
            else {
              *v29 = 0;
              v34 = *v6;
              *v6 = v32;
              if (v34 != 0) {
                GameRoutine_64aa80(v34);
                v35 = 128;
                if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
                  v35 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v35, v34);
              }
              ++v29;
            }
            ++v6;
            if (v30 == v27) {
              for (; v29 != v28; ++v6) {
                v41 = *v29;
                *v29 = 0;
                v42 = *v6;
                *v6 = v41;
                if (v42 != 0) {
                  GameRoutine_64aa80(v42);
                  if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
                    v43 = 128;
                  }
                  else {
                    v43 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v43, v42);
                }
                ++v29;
              }
              goto LABEL_59;
            }
          }
          for (; v30 != v27; ++v6) {
            v38 = *v30;
            *v30 = 0;
            v39 = *v6;
            *v6 = v38;
            if (v39 != 0) {
              GameRoutine_64aa80(v39);
              if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
                v40 = 128;
              }
              else {
                v40 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v40, v39);
            }
            ++v30;
          }
        LABEL_59:
          if (v11 != nullptr) {
            do {
              v44 = *v11;
              *v11 = 0;
              if (v44 != 0) {
                GameRoutine_64aa80(v44);
                if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
                  v45 = 128;
                }
                else {
                  v45 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v45, v44);
              }
              ++v11;
              --v9;
            } while (v9 != 0);
          }
        }
        else {
          memory_64e4a0(a1, &a1[v10], a3 >> 1, a4, a5);
          memory_64e4a0(&v6[v10], v5, v12, v11, a5);
          GameRoutine_64eb80(v6, &v6[v10], v5, v10, v12, v11, a5);
        }
      }
    }
  }
}

void memory_64e8e0(__int64* a1, __int64* a2, unsigned __int64 a3, __int64* a4)
{
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  if (a3 != 0) {
    v4 = a4;
    v6 = a1;
    if (a3 == 2) {
      v8 = *(a2 - 1);
      v9 = *a1;
      if ((signed __int32)*(_DWORD*)(v8 + 160) >=
          (signed __int32)*(_DWORD*)(*a1 + 160)) {
        *a1 = 0;
        *a4 = v9;
        v10 = *(a2 - 1);
        *(a2 - 1) = 0;
      }
      else {
        *(a2 - 1) = 0;
        *a4 = v8;
        v10 = *a1;
        *a1 = 0;
      }
      a4[1] = v10;
    }
    else if (a3 == 1) {
      v7 = *a1;
      *a1 = 0;
      *a4 = v7;
    }
    else if ((__int64)a3 > 8) {
      v28 = a3 >> 1;
      v30 = &a1[a3 >> 1];
      v31 = 8 * (a3 >> 1);
      memory_64e4a0(a1, v30, v28, a4, v28);
      memory_64e4a0(v30, a2, a3 - v28, &v4[v28], a3 - v28);
      if (v31 != 0) {
        v32 = v30;
        while (v32 != a2) {
          v33 = *v32;
          v34 = *v6;
          if ((signed __int32)*(_DWORD*)(*v32 + 160) >=
              (signed __int32)*(_DWORD*)(*v6 + 160)) {
            *v6++ = 0;
            v33 = v34;
          }
          else {
            *v32++ = 0;
          }
          *v4++ = v33;
          if (v6 == v30) {
            goto LABEL_43;
          }
        }
        while (v6 != v30) {
          v35 = *v6;
          *v6++ = 0;
          *v4++ = v35;
        }
      }
      else {
        v32 = v30;
      LABEL_43:
        while (v32 != a2) {
          v36 = *v32;
          *v32++ = 0;
          *v4++ = v36;
        }
      }
    }
    else if (a1 != a2) {
      v11 = *a1;
      *a1 = 0;
      v12 = a1 + 1;
      *a4 = v11;
      if (a1 + 1 != a2) {
        v13 = 0;
        v14 = a4;
        v15 = fw_memory_g_heap_manager_ptr;
        do {
          v16 = v14;
          v18 = *v14++;
          v17 = v18;
          v19 = *v12;
          if ((signed __int32)*(_DWORD*)(*v12 + 160) >=
              (signed __int32)*(_DWORD*)(v18 + 160)) {
            *v12 = 0;
            *v14 = v19;
          }
          else {
            *v16 = 0;
            v16[1] = v17;
            v20 = v4;
            if (v16 != v4) {
              v21 = v13;
              while (1) {
                v20 = (__int64*)((char*)v4 + v21);
                v22 = *(__int64*)((char*)v4 + v21 - 8);
                if ((signed __int32)*(_DWORD*)(*v12 + 160) >=
                    (signed __int32)*(_DWORD*)(v22 + 160)) {
                  break;
                }
                v23 = *v20;
                *(v20 - 1) = 0;
                *v20 = v22;
                if (v23 != 0) {
                  GameRoutine_64aa80(v23);
                  if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
                    v24 = 128;
                  }
                  else {
                    v24 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v24, v23);
                }
                v21 -= 8;
                if (v21 == 0) {
                  v20 = v4;
                  break;
                }
              }
            }
            v25 = *v12;
            *v12 = 0;
            v26 = *v20;
            *v20 = v25;
            if (v26 != 0) {
              GameRoutine_64aa80(v26);
              if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
                v27 = 128;
              }
              else {
                v27 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v27, v26);
            }
          }
          ++v12;
          v13 += 8;
        } while (v12 != a2);
      }
    }
  }
}

void memory_a6e360(__int64 a1, __int64 a2, unsigned __int8* a3)
{
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  const char* v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int16* v24;
  unsigned __int64 v25;
  __int64 v26;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    const char* v29;
  } v27_;

  v3 = *a3;
  v4 = (v3 & 1) == 0;
  v5 = v3 >> 1;
  if (v4) {
    v6 = v5;
  }
  else {
    v6 = *((_QWORD*)a3 + 1);
  }
  if (v4) {
    v7 = (__int64)(a3 + 1);
  }
  else {
    v7 = *((_QWORD*)a3 + 2);
  }
  v8 = v6 + 5;
  if (v6 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v8 | 7) + 1;
    }
    v11 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v12, 16, 0);
    v27_.v28 = v6 + 5;
    v27_.v29 = v11;
    v27_.v27 = v12 | 1;
    goto LABEL_15;
  }
  v27_.v28 = 0;
  v27_.v29 = nullptr;
  v27_.v27 = (unsigned __int8)(2 * v8);
  v11 = (char*)&v27_.v27 + 1;
  if (v6 != 0) {
  LABEL_15:
    memmove((__int64)v11, v7, v6);
  }
  strcpy((char*)&v11[v6], ".json");
  v13 = (__int64)v27_.v29;
  if ((v27_.v27 & 1) != 0) {
    v14 = v27_.v29;
  }
  else {
    v14 = (char*)&v27_.v27 + 1;
  }
  v15 = *(_QWORD*)(a2 + 192);
  if (v15 != 0) {
    if (v14 != nullptr) {
      v16 = strlen(v14);
    }
    else {
      v16 = 0;
    }
    v17 = v15 + 8;
    v18 = *(unsigned __int16*)(v15 + 12);
    v19 = v15 + 8 + 16 * v18;
    v20 = *(_DWORD*)v19;
    if ((signed __int32)*(_DWORD*)(v15 + 8) < (signed __int32)*(_DWORD*)v19) {
      do {
        v23 = (__int64)v20 >> 3;
        if (v16 > v23) {
          v21 = ((unsigned __int8)v14[v16 + ~v23] >> (v20 & 7)) & 1;
        }
        else {
          v21 = 0;
        }
        v18 = *(unsigned __int16*)(v15 + 12 + 16 * v18 + 2 * v21);
        v22 = v20 < (signed __int32)*(_DWORD*)(v17 + 16 * v18);
        v20 = *(_DWORD*)(v17 + 16 * v18);
      } while (v22);
      v19 = v17 + 16 * v18;
    }
    v24 = *(unsigned __int16**)(v19 + 8);
    if (v16 == *v24 && memcmp((__int64)(v24 + 1), (__int64)v14, v16) == 0) {
      v25 = v19 - v15 - 24;
      if ((~v25 & 0xFFFFFFFF0LL) != 0) {
        *(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 + 184) + 16LL * (int)(v25 >> 4);
      }
    }
  }
  if ((v27_.v27 & 1) != 0 && v13 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v13);
  }
}

__attribute__((swiftcall)) void memory_a6ea10(PSEUDO_X8 x8_, __int64 a1, int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = *(unsigned __int16*)(a1 + 226);
  v6 = 0;
  *(_QWORD*)(a3 + 56) = 0;
  *(_QWORD*)(a3 + 64) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_QWORD*)(a3 + 24) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 8) = 0;
  *(_QWORD*)(a3 + 16) = 0;
  *(_QWORD*)a3 = 0;
  if (a2 < v3) {
    v6 = *(_QWORD*)(a1 + 88) + 80LL * a2;
    *(_QWORD*)(a3 + 24) = v6;
  }
  if (a2 >= *(unsigned __int16*)(a1 + 230)) {
    v7 = 0;
  }
  else {
    v7 = *(_QWORD*)(a1 + 120) + 96LL * a2;
    *(_QWORD*)(a3 + 32) = v7;
  }
  if (a2 >= *(unsigned __int16*)(a1 + 228)) {
    v8 = 0;
  }
  else {
    v8 = *(_QWORD*)(a1 + 104) + 112LL * a2;
    *(_QWORD*)(a3 + 40) = v8;
  }
  if (a2 >= *(unsigned __int16*)(a1 + 232)) {
    v9 = 0;
  }
  else {
    v9 = *(_QWORD*)(a1 + 136) + 80LL * a2;
    *(_QWORD*)(a3 + 48) = v9;
  }
  if (a2 < *(unsigned __int16*)(a1 + 234)) {
    v10 = *(_QWORD*)(a1 + 152) + 96LL * a2;
    *(_QWORD*)(a3 + 56) = v10;
    if (v6 == 0) {
      goto LABEL_16;
    }
  LABEL_20:
    GameRoutine_60a020(a3, (const char*)(*(_QWORD*)(v6 + 8) + 2LL));
    goto LABEL_21;
  }
  v10 = 0;
  if (v6 != 0) {
    goto LABEL_20;
  }
LABEL_16:
  v6 = v7;
  if (v7 != 0) {
    goto LABEL_20;
  }
  v6 = v8;
  if (v8 != 0) {
    goto LABEL_20;
  }
  v6 = v9;
  if (v9 != 0) {
    goto LABEL_20;
  }
  v6 = v10;
  if (v10 != 0) {
    goto LABEL_20;
  }
LABEL_21:
  memory_a6e360(a3, a1, (unsigned __int8*)a3);
}

void memory_b3a750(__int64 a1, _BYTE* a2, _BYTE* a3, _BYTE* a4, __int64 a5,
                   float a6)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  float v17;
  __int64 v18;
  char v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  __int64 v26;
  float v27;
  __int64 v28;
  float v29;
  _BYTE* v31;
  _BYTE* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float* v37;
  _DWORD* v38;
  __int64 v39;
  float v40;
  __int64 v41;
  float* v42;
  _DWORD* v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  __int64 v49;
  __int128 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  float v54;
  __int128 v55;
  __int64 v56;
  int v57;

  *(_DWORD*)(a1 + 4) = 1069044204;
  v7 = *(_QWORD*)(a5 + 32);
  *(_DWORD*)(a1 + 136) = *(_DWORD*)(a5 + 40);
  *(_QWORD*)(a1 + 128) = v7;
  v8 = *(_QWORD*)(a5 + 48);
  *(_DWORD*)(a1 + 152) = *(_DWORD*)(a5 + 56);
  *(_QWORD*)(a1 + 144) = v8;
  v9 = 128;
  if (a2[96] != 0) {
    v9 = 92;
  }
  v10 = *(_DWORD*)&a2[v9];
  *(_DWORD*)a1 = v10;
  if (v10 != 5) {
    if (v10 == 1) {
      v21 = 672;
      if (a3[640] != 0) {
        v21 = 636;
      }
      v22 = *(float*)&a3[v21];
      *(_DWORD*)(a1 + 8) = 0;
      v23 = v22 + -0x1.a934f00000000p+2f;
      *(float*)(a1 + 20) = v23;
      v24 = 128;
      if (a4[96] != 0) {
        v24 = 92;
      }
      v25 = *(float*)&a4[v24];
      *(_DWORD*)(a1 + 12) = 0;
      *(float*)(a1 + 24) = v23;
      *(float*)(a1 + 56) = -v25;
      v26 = 208;
      if (a4[176] != 0) {
        v26 = 172;
      }
      v27 = *(float*)&a4[v26];
      *(_DWORD*)(a1 + 16) = 0;
      *(float*)(a1 + 28) = v23;
      *(float*)(a1 + 60) = -v27;
      v28 = 288;
      if (a4[256] != 0) {
        v28 = 252;
      }
      v29 = *(float*)&a4[v28];
      *(_QWORD*)(a1 + 80) = 0x3F8000003F800000LL;
      *(_BYTE*)(a1 + 88) = 1;
      *(_QWORD*)(a1 + 32) = 0xC13A4D3CC13A4D3CLL;
      *(_QWORD*)(a1 + 40) = 0x4155B2C4C13A4D3CLL;
      *(float*)(a1 + 64) = -v29;
      *(_QWORD*)(a1 + 48) = 0x4155B2C44155B2C4LL;
      goto LABEL_62;
    }
    if (v10 != 0) {
      goto LABEL_62;
    }
  }
  v11 = 128;
  if (a3[96] != 0) {
    v12 = 92;
  }
  else {
    v12 = 128;
  }
  v13 = *(float*)&a3[v12];
  *(_DWORD*)(a1 + 8) = 1065353216;
  v14 = -v13;
  *(float*)(a1 + 20) = v14;
  if (a4[96] != 0) {
    v11 = 92;
  }
  v15 = *(float*)&a4[v11];
  *(_DWORD*)(a1 + 12) = 1065353216;
  *(float*)(a1 + 24) = v14;
  *(float*)(a1 + 56) = -v15;
  v16 = 208;
  if (a4[176] != 0) {
    v16 = 172;
  }
  v17 = *(float*)&a4[v16];
  *(_DWORD*)(a1 + 16) = 1065353216;
  *(float*)(a1 + 28) = v14;
  *(float*)(a1 + 60) = -v17;
  v18 = 288;
  if (a4[256] != 0) {
    v18 = 252;
  }
  *(float*)(a1 + 64) = -*(float*)&a4[v18];
  if (*(_BYTE*)a5 == 1) {
    *(_DWORD*)(a1 + 80) = 1065353216;
    v19 = 1;
    v20 = 0x1.0000000000000p+0f;
  }
  else {
    v31 = a2;
    v32 = a3;
    v33 = a5;
    v34 = 208;
    if (a2[176] != 0) {
      v34 = 172;
    }
    *(float*)(a1 + 80) =
        0x1.0000000000000p+0f - expf(-(float)(a6 * *(float*)&a2[v34]));
    v35 = 288;
    if (v31[256] != 0) {
      v35 = 252;
    }
    v20 = 0x1.0000000000000p+0f - expf(-(float)(a6 * *(float*)&v31[v35]));
    a5 = v33;
    a3 = v32;
    a2 = v31;
    v19 = 0;
  }
  *(float*)(a1 + 84) = v20;
  *(_BYTE*)(a1 + 88) = v19;
  v36 = 200;
  if (a3[170] != 0) {
    v36 = 169;
  }
  *(_BYTE*)(a1 + 89) = a3[v36];
  v37 = (float*)(a3 + 244);
  if (a3[248] != 0) {
    v38 = a3 + 244;
  }
  else {
    v38 = a3 + 280;
  }
  *(_DWORD*)(a1 + 92) = *v38;
  v39 = 360;
  if (a3[328] != 0) {
    v39 = 324;
  }
  if (a3[248] == 0) {
    v37 = (float*)(a3 + 280);
  }
  v40 = *(float*)&a3[v39] - *v37;
  if (v40 < 0x0.0p+0f) {
    v40 = 0x0.0p+0f;
  }
  *(float*)(a1 + 96) = v40;
  v41 = 432;
  if (a3[402] != 0) {
    v41 = 401;
  }
  *(_BYTE*)(a1 + 100) = a3[v41];
  v42 = (float*)(a3 + 476);
  if (a3[480] != 0) {
    v43 = a3 + 476;
  }
  else {
    v43 = a3 + 512;
  }
  *(_DWORD*)(a1 + 104) = *v43;
  v44 = 592;
  if (a3[560] != 0) {
    v44 = 556;
  }
  v45 = *(float*)&a3[v44];
  if (a3[480] == 0) {
    v42 = (float*)(a3 + 512);
  }
  v46 = *v42;
  *(_QWORD*)(a1 + 32) = 0xC13A4D3CC13A4D3CLL;
  *(_QWORD*)(a1 + 40) = 0x4155B2C4C13A4D3CLL;
  v47 = v45 - v46;
  *(_QWORD*)(a1 + 48) = 0x4155B2C44155B2C4LL;
  if (v47 < 0x0.0p+0f) {
    v47 = 0x0.0p+0f;
  }
  *(float*)(a1 + 108) = v47;
  if (v10 != 5) {
  LABEL_62:
    *(_WORD*)(a1 + 112) = 0;
    *(_DWORD*)(a1 + 116) = 0;
    *(_QWORD*)(a1 + 68) = 0;
    *(_DWORD*)(a1 + 76) = 0;
    goto LABEL_63;
  }
  *(_BYTE*)(a1 + 112) = 1;
  v48 = 368;
  if (a2[336] != 0) {
    v48 = 332;
  }
  if (*(_DWORD*)&a2[v48] == 1) {
    v49 = 880;
    if (a3[832] != 0) {
      v49 = 816;
    }
    v50 = *(_OWORD*)&a3[v49];
    *(_QWORD*)(a1 + 68) = v50;
    *(_DWORD*)(a1 + 76) = DWORD2(v50);
    v51 = 968;
    if (a3[936] != 0) {
      v51 = 932;
    }
    v52 = *(_DWORD*)&a3[v51];
    *(_BYTE*)(a1 + 113) = 1;
    *(_DWORD*)(a1 + 116) = v52;
  }
  else {
    v55 = *(_OWORD*)(a5 + 16);
    *(_QWORD*)(a1 + 68) = v55;
    *(_DWORD*)(a1 + 76) = DWORD2(v55);
    v56 = 752;
    if (a3[720] != 0) {
      v56 = 716;
    }
    v57 = *(_DWORD*)&a3[v56];
    *(_BYTE*)(a1 + 113) = 0;
    *(_DWORD*)(a1 + 116) = v57;
  }
LABEL_63:
  v53 = 448;
  if (a2[416] != 0) {
    v53 = 412;
  }
  v54 = *(float*)&a2[v53];
  *(float*)(a1 + 124) = v54;
  *(_BYTE*)(a1 + 120) =
      fabsf(v54 + -0x1.0000000000000p+0f) > 0x1.0624de0000000p-10f;
}

void memory_bc3dc0(__int64 a1, __int64 a2)
{
  __int64* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 (*v11)();
  __int64 v12;
  __int64 (*v13)();
  __int64 (*v14)();
  __int64 (*v15)();
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64** v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
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
  _QWORD* v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  unsigned __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  __int64** v71;
  struct {
    __int64 v72;
    __int64 v73;
  } v72_;

  *(_QWORD*)(a1 + 136) = a2;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v4 = eft_VfxHeap_vtable;
  v5 = *(_QWORD**)(a1 + 88);
  *(_QWORD*)(a1 + 88) = v4;
  if (v5 != nullptr) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v5 + 8LL))(
        (void*)(v5), v5);
    v4 = *(_QWORD**)(a1 + 88);
  }
  v6 = game_g_frame_clock_ptr[0];
  *(_BYTE*)(a1 + 79) = 1;
  *(_QWORD*)(a1 + 24) = v4;
  *(_QWORD*)(a1 + 32) = 0xC0000002400LL;
  *(_DWORD*)(a1 + 48) = 4096;
  *(_QWORD*)(a1 + 8) = *v6 + 568;
  *(_QWORD*)(a1 + 16) = v4;
  v7 = *v3;
  *(_QWORD*)(a1 + 40) = 0x10000000100LL;
  *(_DWORD*)(a1 + 64) = 1024;
  *(_QWORD*)(a1 + 80) = 0x2000000;
  *(_QWORD*)(a1 + 56) = 0x40000;
  v8 = (__int64*)fw_memory_HeapManager_Allocate(v7, 5896, 16, 0);
  GameHr_5d1310(v8, a1);
  v9 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 96) = v8;
  if (v9 != nullptr) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v9 + 8LL))(
        (void*)(v9), v9);
    v8 = *(__int64**)(a1 + 96);
  }
  GameRoutine_5d3ee0((__int64)v8,
                     (__int64 (*)(__int64*, void*, __int64))GameRoutine_bc3cf0,
                     0);
  GameRoutine_5d3ef0(*(_QWORD*)(a1 + 96), (__int64)GameRoutine_bc3d70, 0);
  v10 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(v10 + 3072) = 0;
  *(_QWORD*)(v10 + 3080) = 0;
  *(_QWORD*)(v10 + 3088) = 0;
  v11 = GameData_212e988;
  *(_WORD*)(v10 + 2257) = 257;
  *(_QWORD*)(v10 + 3096) = 0;
  *(_QWORD*)(v10 + 3104) = 0;
  *(_QWORD*)(v10 + 3112) = 0;
  *(_QWORD*)(v10 + 3120) = 0;
  *(_QWORD*)(v10 + 3128) = 0;
  *(_QWORD*)(v10 + 3136) = 0;
  *(_QWORD*)(v10 + 3144) = GameRoutine_bd0140;
  *(_QWORD*)(v10 + 3160) = 0;
  *(_QWORD*)(v10 + 3168) = 0;
  *(_QWORD*)(v10 + 3176) = 0;
  *(_QWORD*)(v10 + 3184) = 0;
  *(_QWORD*)(v10 + 3192) = 0;
  *(_QWORD*)(v10 + 3200) = 0;
  *(_QWORD*)(v10 + 3208) = 0;
  *(_QWORD*)(v10 + 3216) = 0;
  *(_QWORD*)(v10 + 3224) = 0;
  *(_QWORD*)(v10 + 3232) = GameRoutine_bd0140;
  *(_QWORD*)(v10 + 3248) = 0;
  *(_QWORD*)(v10 + 3256) = 0;
  *(_QWORD*)(v10 + 3264) = 0;
  *(_QWORD*)(v10 + 3272) = 0;
  *(_QWORD*)(v10 + 3280) = 0;
  *(_QWORD*)(v10 + 3288) = 0;
  *(_QWORD*)(v10 + 3296) = 0;
  *(_QWORD*)(v10 + 3304) = 0;
  *(_QWORD*)(v10 + 3312) = 0;
  *(_QWORD*)(v10 + 3320) = GameRoutine_bd0140;
  *(_QWORD*)(v10 + 3336) = 0;
  *(_QWORD*)(v10 + 3344) = 0;
  *(_QWORD*)(v10 + 3352) = 0;
  *(_QWORD*)(v10 + 3360) = 0;
  *(_QWORD*)(v10 + 3368) = 0;
  *(_QWORD*)(v10 + 3376) = 0;
  *(_QWORD*)(v10 + 3384) = 0;
  *(_QWORD*)(v10 + 3392) = 0;
  *(_QWORD*)(v10 + 3400) = 0;
  *(_QWORD*)(v10 + 3408) = GameRoutine_bd0140;
  *(_BYTE*)(v10 + 2261) = 1;
  *(_QWORD*)(v10 + 3424) = 0;
  *(_QWORD*)(v10 + 3432) = 0;
  *(_QWORD*)(v10 + 3440) = 0;
  *(_QWORD*)(v10 + 3448) = 0;
  *(_QWORD*)(v10 + 3456) = 0;
  *(_QWORD*)(v10 + 3464) = 0;
  *(_QWORD*)(v10 + 3472) = 0;
  *(_QWORD*)(v10 + 3480) = 0;
  *(_QWORD*)(v10 + 3488) = 0;
  *(_QWORD*)(v10 + 3496) = GameRoutine_bd0140;
  *(_BYTE*)(v10 + 2262) = 1;
  *(_QWORD*)(v10 + 3512) = 0;
  *(_QWORD*)(v10 + 3520) = 0;
  *(_QWORD*)(v10 + 3528) = 0;
  *(_QWORD*)(v10 + 3536) = 0;
  *(_QWORD*)(v10 + 3544) = 0;
  *(_QWORD*)(v10 + 3552) = 0;
  *(_QWORD*)(v10 + 3560) = 0;
  *(_QWORD*)(v10 + 3568) = 0;
  *(_WORD*)(v10 + 2259) = 257;
  *(_QWORD*)(v10 + 3576) = 0;
  *(_QWORD*)(v10 + 3584) = GameRoutine_bd0140;
  *(_BYTE*)(v10 + 2263) = 1;
  *(_QWORD*)(v10 + 3664) = 0;
  *(_QWORD*)(v10 + 3656) = 0;
  *(_QWORD*)(v10 + 3648) = 0;
  *(_QWORD*)(v10 + 3640) = 0;
  *(_QWORD*)(v10 + 3632) = 0;
  *(_QWORD*)(v10 + 3624) = 0;
  *(_QWORD*)(v10 + 3616) = 0;
  *(_QWORD*)(v10 + 3608) = 0;
  *(_QWORD*)(v10 + 3600) = 0;
  *(_QWORD*)(v10 + 3672) = GameRoutine_bd0140;
  *(_BYTE*)(v10 + 2264) = 1;
  *(_QWORD*)(v10 + 3752) = 0;
  *(_QWORD*)(v10 + 3744) = 0;
  *(_QWORD*)(v10 + 3736) = 0;
  *(_QWORD*)(v10 + 3728) = 0;
  *(_QWORD*)(v10 + 3720) = 0;
  *(_QWORD*)(v10 + 3712) = 0;
  *(_QWORD*)(v10 + 3704) = 0;
  *(_QWORD*)(v10 + 3696) = 0;
  *(_QWORD*)(v10 + 3688) = 0;
  *(_QWORD*)(v10 + 3760) = GameRoutine_bd0140;
  *(_QWORD*)(v10 + 3064) = v11;
  *(_QWORD*)(v10 + 3152) = v11;
  *(_QWORD*)(v10 + 3240) = v11;
  *(_QWORD*)(v10 + 3328) = v11;
  *(_QWORD*)(v10 + 3416) = v11;
  *(_QWORD*)(v10 + 3504) = v11;
  *(_QWORD*)(v10 + 3592) = v11;
  *(_QWORD*)(v10 + 3680) = v11;
  v12 = *(_QWORD*)(a1 + 96);
  *(_BYTE*)(v12 + 2248) = 1;
  *(_QWORD*)(v12 + 2280) = 0;
  *(_QWORD*)(v12 + 2288) = 0;
  *(_QWORD*)(v12 + 2296) = 0;
  v13 = GameData_212e960[0];
  *(_QWORD*)(v12 + 2312) = 0;
  *(_QWORD*)(v12 + 2320) = 0;
  *(_QWORD*)(v12 + 2328) = 0;
  *(_QWORD*)(v12 + 2336) = 0;
  *(_QWORD*)(v12 + 2344) = 0;
  *(_QWORD*)(v12 + 2352) = 0;
  *(_QWORD*)(v12 + 2272) = v11;
  *(_BYTE*)(v12 + 2250) = 1;
  *(_QWORD*)(v12 + 2456) = 0;
  *(_QWORD*)(v12 + 2464) = 0;
  *(_QWORD*)(v12 + 2472) = 0;
  *(_QWORD*)(v12 + 2480) = 0;
  *(_QWORD*)(v12 + 2488) = 0;
  *(_QWORD*)(v12 + 2496) = 0;
  *(_QWORD*)(v12 + 2304) = v13;
  *(__int64 (**)(void))(v12 + 2504) = GameData_212e968[0];
  *(__int64 (**)(void))(v12 + 2512) = GameData_212e978[0];
  v14 = GameData_212e970[0];
  *(_QWORD*)(v12 + 2528) = 0;
  *(_QWORD*)(v12 + 2448) = v11;
  *(_BYTE*)(v12 + 2252) = 1;
  *(_QWORD*)(v12 + 2632) = 0;
  *(_QWORD*)(v12 + 2640) = 0;
  *(_QWORD*)(v12 + 2648) = 0;
  *(_QWORD*)(v12 + 2656) = 0;
  *(_QWORD*)(v12 + 2664) = 0;
  *(_QWORD*)(v12 + 2672) = 0;
  *(_QWORD*)(v12 + 2680) = 0;
  *(_QWORD*)(v12 + 2688) = 0;
  *(_QWORD*)(v12 + 2520) = v14;
  v15 = GameData_212e980[0];
  v16 = *v3;
  *(_QWORD*)(v12 + 2704) = 0;
  *(_QWORD*)(v12 + 2624) = v11;
  *(_QWORD*)(v12 + 2696) = v15;
  v17 = fw_memory_HeapManager_Allocate(v16, 56, 16, 0);
  v18 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(v17 + 40) = 0;
  *(_DWORD*)(v17 + 48) = 0;
  *(_QWORD*)v17 = 0;
  *(_QWORD*)(v17 + 8) = 0;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)(v17 + 24) = 0;
  *(_DWORD*)(v17 + 32) = 0;
  *(_QWORD*)(a1 + 112) = v17;
  if (v18 != 0) {
    v19 = *(_QWORD*)(v18 + 16);
    if (v19 != 0) {
      GameRoutine_634d80(*(_QWORD*)(v19 + 8), v19);
    }
    v20 = *(_QWORD*)(v18 + 8);
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v20);
    }
    v21 = 128;
    if (*(_QWORD*)(*v3 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*v3 + v21, v18);
    v17 = *(_QWORD*)(a1 + 112);
  }
  eft_data_Manager_LoadAsync((_QWORD*)v17);
  if (*(_QWORD*)(a1 + 120) == 0) {
    GameRoutine_19a5400((void*)(&v71),
                        (__int64)"Contents:/Effect/EffectCulling.ebb", 0x22u);
    v23 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 48, 16, 0);
    v25 = v71;
    v24 = v72_.v72;
    v26 = v72_.v73;
    v22 = (__int64)v23;
    v23[1] = 0;
    v23[2] = 0;
    *v23 = GameData_1fcffa0;
    v23[3] = v25;
    v27 = v23 + 3;
    v23[4] = v24;
    v28 = v23 + 4;
    v23[5] = v26;
    if (v26 != 0) {
      *(_QWORD*)(v24 + 16) = v28;
      v71 = (__int64**)&v72_.v72;
      v72_.v72 = 0;
      v72_.v73 = 0;
    }
    else {
      *v27 = v28;
    }
    v29 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 120) = v27;
    *(_QWORD*)(a1 + 128) = v23;
    if (v29 == 0) {
      goto LABEL_23;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      v22 = *(_QWORD*)(a1 + 128);
      if (v22 != 0) {
      LABEL_23:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                  memory_order_relaxed);
        GameHr_bc8700((__int64)&v71, v72_.v72);
        goto LABEL_24;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak(v29);
      v22 = *(_QWORD*)(a1 + 128);
      if (v22 != 0) {
        goto LABEL_23;
      }
    }
    GameHr_bc8700((__int64)&v71, v72_.v72);
    goto LABEL_28;
  }
  v22 = *(_QWORD*)(a1 + 128);
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  LABEL_24:
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
LABEL_28:
  v30 = fw_memory_HeapManager_Allocate(*v3, 24, 16, 0);
  *(_DWORD*)v30 = 0;
  v31 = fw_memory_HeapManager_Allocate(*v3, 417792, 16, 0);
  v32 = 0;
  do {
    v33 = v31 + v32;
    v32 += 816;
    *(_QWORD*)v33 = v33;
    *(_QWORD*)(v33 + 8) = v33;
    *(_QWORD*)(v33 + 16) = 0;
    *(_QWORD*)(v33 + 24) = 0;
    *(_BYTE*)(v33 + 32) = 0;
    *(_WORD*)(v33 + 33) = 1;
    *(_QWORD*)(v33 + 80) = 0;
    *(_QWORD*)(v33 + 36) = 0;
    *(_QWORD*)(v33 + 44) = 0;
    *(_QWORD*)(v33 + 52) = 0;
    *(_QWORD*)(v33 + 60) = 0;
    *(_DWORD*)(v33 + 68) = 0;
    *(_QWORD*)(v33 + 152) = 0;
    *(_QWORD*)(v33 + 160) = 0;
    *(_BYTE*)(v33 + 168) = 0;
    *(_WORD*)(v33 + 169) = 1;
    *(_QWORD*)(v33 + 216) = 0;
    *(_DWORD*)(v33 + 204) = 0;
    *(_QWORD*)(v33 + 196) = 0;
    *(_QWORD*)(v33 + 188) = 0;
    *(_QWORD*)(v33 + 180) = 0;
    *(_QWORD*)(v33 + 172) = 0;
    *(_QWORD*)(v33 + 288) = 0;
    *(_QWORD*)(v33 + 296) = 0;
    *(_BYTE*)(v33 + 304) = 0;
    *(_QWORD*)(v33 + 136) = v33 + 136;
    *(_QWORD*)(v33 + 144) = v33 + 136;
    *(_QWORD*)(v33 + 352) = 0;
    *(_DWORD*)(v33 + 340) = 0;
    *(_BYTE*)(v33 + 440) = 0;
    *(_QWORD*)(v33 + 424) = 0;
    *(_QWORD*)(v33 + 432) = 0;
    *(_QWORD*)(v33 + 488) = 0;
    *(_DWORD*)(v33 + 476) = 0;
    *(_BYTE*)(v33 + 576) = 0;
    *(_QWORD*)(v33 + 560) = 0;
    *(_QWORD*)(v33 + 568) = 0;
    *(_QWORD*)(v33 + 624) = 0;
    *(_QWORD*)(v33 + 272) = v33 + 272;
    *(_QWORD*)(v33 + 280) = v33 + 272;
    *(_DWORD*)(v33 + 612) = 0;
    *(_BYTE*)(v33 + 712) = 0;
    *(_QWORD*)(v33 + 704) = 0;
    *(_QWORD*)(v33 + 696) = 0;
    *(_QWORD*)(v33 + 760) = 0;
    *(_DWORD*)(v33 + 748) = 0;
    *(_WORD*)(v33 + 305) = 1;
    *(_QWORD*)(v33 + 308) = 0;
    *(_QWORD*)(v33 + 316) = 0;
    *(_QWORD*)(v33 + 324) = 0;
    *(_QWORD*)(v33 + 332) = 0;
    *(_QWORD*)(v33 + 408) = v33 + 408;
    *(_QWORD*)(v33 + 416) = v33 + 408;
    *(_WORD*)(v33 + 441) = 1;
    *(_QWORD*)(v33 + 460) = 0;
    *(_QWORD*)(v33 + 468) = 0;
    *(_QWORD*)(v33 + 444) = 0;
    *(_QWORD*)(v33 + 452) = 0;
    *(_QWORD*)(v33 + 544) = v33 + 544;
    *(_QWORD*)(v33 + 552) = v33 + 544;
    *(_WORD*)(v33 + 577) = 1;
    *(_QWORD*)(v33 + 580) = 0;
    *(_QWORD*)(v33 + 588) = 0;
    *(_QWORD*)(v33 + 596) = 0;
    *(_QWORD*)(v33 + 604) = 0;
    *(_QWORD*)(v33 + 680) = v33 + 680;
    *(_QWORD*)(v33 + 688) = v33 + 680;
    *(_WORD*)(v33 + 713) = 1;
    *(_QWORD*)(v33 + 732) = 0;
    *(_QWORD*)(v33 + 740) = 0;
    *(_QWORD*)(v33 + 716) = 0;
    *(_QWORD*)(v33 + 724) = 0;
  } while (v32 != 417792);
  v34 = 1088;
  *(_QWORD*)(v30 + 8) = v31;
  *(_QWORD*)(v30 + 16) = v31;
  while (1) {
    *(_QWORD*)(*(_QWORD*)(v30 + 16) + v34 - 1008) =
        *(_QWORD*)(v30 + 16) + v34 - 952;
    *(_QWORD*)(*(_QWORD*)(v30 + 16) + v34 - 872) =
        *(_QWORD*)(v30 + 16) + v34 - 816;
    *(_QWORD*)(*(_QWORD*)(v30 + 16) + v34 - 736) =
        *(_QWORD*)(v30 + 16) + v34 - 680;
    *(_QWORD*)(*(_QWORD*)(v30 + 16) + v34 - 600) =
        *(_QWORD*)(v30 + 16) + v34 - 544;
    *(_QWORD*)(*(_QWORD*)(v30 + 16) + v34 - 464) =
        *(_QWORD*)(v30 + 16) + v34 - 408;
    *(_QWORD*)(*(_QWORD*)(v30 + 16) + v34 - 328) =
        *(_QWORD*)(v30 + 16) + v34 - 272;
    *(_QWORD*)(*(_QWORD*)(v30 + 16) + v34 - 192) =
        *(_QWORD*)(v30 + 16) + v34 - 136;
    v35 = *(_QWORD*)(v30 + 16);
    if (v34 == 417792) {
      break;
    }
    v36 = v35 + v34;
    v34 += 1088;
    *(_QWORD*)(v36 - 56) = v36;
  }
  *(_QWORD*)(v35 + 417736) = 0;
  v37 = *(_QWORD*)(a1 + 432);
  *(_QWORD*)(a1 + 432) = v30;
  if (v37 != 0) {
    v38 = *(_QWORD*)(v37 + 8);
    *(_QWORD*)(v37 + 8) = 0;
    if (v38 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*v3 + v39, v38);
    }
    v40 = 128;
    if (*(_QWORD*)(*v3 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*v3 + v40, v37);
  }
  v41 = fw_memory_HeapManager_Allocate(*v3, 224, 16, 0);
  eft_res_Manager_Manager(v41, a1);
  v42 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = v41;
  if (v42 != 0) {
    v43 = *(_QWORD**)(v42 + 208);
    *(_QWORD*)(v42 + 208) = 0;
    if (v43 == nullptr) {
    LABEL_55:
      v50 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free(*v3 + v50, v42);
      v41 = *(_QWORD*)(a1 + 104);
      goto LABEL_58;
    }
    v44 = (_QWORD*)v43[8];
    if (v44 == v43 + 4) {
      v45 = 32;
    }
    else {
      if (v44 == nullptr) {
      LABEL_48:
        v46 = v43[1];
        if (v46 != 0) {
          v47 = *v3;
          v43[2] = v46;
          v48 = 128;
          if (*(_QWORD*)(v47 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(v47 + v48, v46);
        }
        v49 = 128;
        if (*(_QWORD*)(*v3 + 200) == 0) {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free(*v3 + v49, (__int64)v43);
        goto LABEL_55;
      }
      v45 = 40;
    }
    (*(void (**)(__int64))(*v44 + v45))((__int64)v44);
    goto LABEL_48;
  }
LABEL_58:
  v51 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 40, 16, 0);
  v52 = *(_QWORD*)(a1 + 440);
  *v51 = a1;
  v51[1] = v41;
  v51[2] = 0;
  v51[3] = 0;
  v51[4] = 0;
  *(_QWORD*)(a1 + 440) = v51;
  if (v52 != 0) {
    v53 = *(_QWORD*)(v52 + 16);
    if (v53 != 0) {
      v54 = *(_QWORD*)(v52 + 24);
      if (v53 == v54) {
        goto LABEL_70;
      }
      do {
        if ((*(_BYTE*)(v54 - 32) & 1) != 0) {
          v55 = *(_QWORD*)(v54 - 16);
          if (v55 != 0) {
            if (*(_QWORD*)(*v3 + 200) != 0) {
              v56 = 128;
            }
            else {
              v56 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v56, v55);
          }
        }
        v54 -= 72;
      } while (v54 != v53);
      v57 = *(_QWORD*)(v52 + 16);
      *(_QWORD*)(v52 + 24) = v53;
      v53 = v57;
      if (v57 != 0) {
      LABEL_70:
        v58 = 128;
        if (*(_QWORD*)(*v3 + 200) == 0) {
          v58 = 56;
        }
        nn_mem_StandardAllocator_Free(*v3 + v58, v53);
      }
    }
    v59 = 128;
    if (*(_QWORD*)(*v3 + 200) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*v3 + v59, v52);
  }
  *(_QWORD*)(a1 + 144) = -1;
  *(_QWORD*)(a1 + 152) = -1;
  v60 = *(_QWORD**)(a1 + 296);
  if ((unsigned __int64)v60 >= *(_QWORD*)(a1 + 304)) {
    v61 = GameHr_bc7fc0((__int64*)(a1 + 288));
  }
  else {
    v60[7] = 0;
    v60[8] = 0;
    v60[5] = 0;
    v60[6] = 0;
    v61 = (__int64)(v60 + 9);
    v60[3] = 0;
    v60[4] = 0;
    v60[1] = 0;
    v60[2] = 0;
    *v60 = 0;
  }
  *(_QWORD*)(a1 + 296) = v61;
  v62 = *(_QWORD*)(v61 - 24);
  v63 = *(_QWORD**)(v61 - 16);
  v64 = ((__int64)v63 - v62) >> 3;
  if (v64 > 0x3E) {
    if ((_QWORD*)((char*)v63 - v62) != ((__int64*)0x1F8LL)) {
      v65 = (_QWORD*)(v62 + 504);
      if ((_QWORD*)(v62 + 504) != v63) {
        do {
          v67 = (_QWORD*)*--v63;
          v66 = v67;
          *v63 = 0;
          if (v67 != nullptr) {
            eft_bcb9e0(v66);
            if (*(_QWORD*)(*v3 + 200) != 0) {
              v68 = 128;
            }
            else {
              v68 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v68, (__int64)v66);
          }
        } while (v63 != v65);
      }
      *(_QWORD*)(v61 - 16) = v65;
    }
  }
  else {
    GameRoutine_bc81b0((__int64*)(v61 - 24), 63 - v64);
  }
  v69 = *(_QWORD*)(a1 + 296);
  if ((*(_BYTE*)(v69 - 72) & 1) != 0) {
    *(_QWORD*)(v69 - 64) = 4;
    v70 = *(char**)(v69 - 56);
  }
  else {
    *(_BYTE*)(v69 - 72) = 8;
    v70 = (char*)(v69 - 71);
  }
  strcpy(v70, "Main");
  *(_QWORD*)(*(_QWORD*)(a1 + 96) + 4592LL) = game_bc8340;
}

#pragma GCC visibility pop
