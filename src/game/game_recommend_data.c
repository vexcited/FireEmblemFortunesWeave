#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20258a8[])();
extern __int64 GameData_212c7c8[8];
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cda0[19];
extern __int64* GameData_212d6d0;
extern int GameData_2240f08;
void __attribute__((noreturn)) GameRoutine_13033d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRecommendData_Destructor(_QWORD* a1);
__int64 GameRecommendData_130cc00(_QWORD* a1);
__int64 GameRecommendData_DeletingDestructor(_QWORD* a1);
__int64 GameRecommendData_130cd90(_QWORD* a1);
__int64 GameRecommendData_130cec0(__int64 result);
__int64 GameRecommendData_Unknown8(__int64 result, __int64 a2);
__int64 GameRecommendData_130d040(__int64 result, __int64 a2);
_QWORD* GameRecommendData_Unknown9_alt1(_QWORD* result, __int64 a2) __asm__(
    "GameRecommendData_Unknown9");
__int64 GameRecommendData_Unknown6(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_13033d0_alt1() __asm__("GameRoutine_13033d0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameRecommendData_Unknown9(_QWORD* a1, __int64 a2);

__int64 GameRecommendData_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  _QWORD* v5;

  v1 = a1[2];
  if (v1 != 0) {
    a1[3] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  a1[1] = GameData_212d6d0 + 2;
  v5 = a1 + 1;
  result = GameRoutine_876a40(&GameData_21eea40, &v5);
  *a1 = GameData_20258a8;
  if (*(_QWORD**)GameData_212c7c8[0] == a1) {
    *(_QWORD*)GameData_212c7c8[0] = 0;
    GameData_2240f08 = 0;
  }
  return result;
}

__int64 GameRecommendData_130cc00(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v4;
  __int64 result;
  _QWORD* v6;

  v1 = a1[1];
  v2 = a1 - 1;
  if (v1 != 0) {
    a1[2] = v1;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v6 = a1;
  *a1 = GameData_212d6d0 + 2;
  result = GameRoutine_876a40(&GameData_21eea40, &v6);
  *(a1 - 1) = GameData_20258a8;
  if (*(_QWORD**)GameData_212c7c8[0] == v2) {
    *(_QWORD*)GameData_212c7c8[0] = 0;
    GameData_2240f08 = 0;
  }
  return result;
}

__int64 GameRecommendData_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v8;

  v1 = a1[2];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[3] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  a1[1] = GameData_212d6d0 + 2;
  v8 = a1 + 1;
  GameRoutine_876a40(&GameData_21eea40, &v8);
  *a1 = GameData_20258a8;
  if (*(_QWORD**)GameData_212c7c8[0] == a1) {
    *(_QWORD*)GameData_212c7c8[0] = 0;
    GameData_2240f08 = 0;
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
}

__int64 GameRecommendData_130cd90(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v9;

  v1 = a1[1];
  v2 = a1 - 1;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[2] = v1;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6);
  }
  v9 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v9);
  *(a1 - 1) = GameData_20258a8;
  if (*(_QWORD**)GameData_212c7c8[0] == v2) {
    *(_QWORD*)GameData_212c7c8[0] = 0;
    GameData_2240f08 = 0;
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
}

__int64 GameRecommendData_Unknown6(__int64 result)
{
  *(_QWORD*)(result + 24) = *(_QWORD*)(result + 16);
  return result;
}

__int64 GameRecommendData_130cec0(__int64 result)
{
  *(_QWORD*)(result + 16) = *(_QWORD*)(result + 8);
  return result;
}

__int64 GameRecommendData_Unknown8(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int** v7;
  unsigned int** v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 24) - *(_QWORD*)(result + 16);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *(unsigned int***)(result + 16);
  v8 = *(unsigned int***)(result + 24);
  while (v7 != v8) {
    v12 = *v7;
    v13 = *(int*)(a2 + 20);
    if (*v7 != nullptr) {
      v14 = *v12;
      *(_DWORD*)(a2 + 20) = v13 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v14;
      v15 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v15 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE1(v14);
      v16 = HIWORD(v14);
      LODWORD(v12) = HIBYTE(v14);
      v17 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v16;
    }
    else {
      *(_DWORD*)(a2 + 20) = v13 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = 0;
      v9 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v9 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = 0;
      v10 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v10 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = 0;
    }
    v11 = *(int*)(a2 + 20);
    ++v7;
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = (_BYTE)v12;
  }
  return result;
}

__int64 GameRecommendData_130d040(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int** v7;
  unsigned int** v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int* v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 16) - *(_QWORD*)(result + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *(unsigned int***)(result + 8);
  v8 = *(unsigned int***)(result + 16);
  while (v7 != v8) {
    v12 = *v7;
    v13 = *(int*)(a2 + 20);
    if (*v7 != nullptr) {
      v14 = *v12;
      *(_DWORD*)(a2 + 20) = v13 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v14;
      v15 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v15 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE1(v14);
      v16 = HIWORD(v14);
      LODWORD(v12) = HIBYTE(v14);
      v17 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v16;
    }
    else {
      *(_DWORD*)(a2 + 20) = v13 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = 0;
      v9 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v9 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = 0;
      v10 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v10 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = 0;
    }
    v11 = *(int*)(a2 + 20);
    ++v7;
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = (_BYTE)v12;
  }
  return result;
}

void GameRecommendData_Unknown9(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64** v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v6 = *(unsigned __int8*)(v3 + v2);
  *(_DWORD*)(a2 + 20) = v2 + 2;
  v7 = v6 | (*(unsigned __int8*)(v3 + v2 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v2 + 3;
  v8 = *(unsigned __int8*)(v3 + v2 + 2);
  *(_DWORD*)(a2 + 20) = v2 + 4;
  v9 = a1[2];
  v10 = v7 | (v8 << 16) | (*(unsigned __int8*)(v3 + v2 + 3) << 24);
  v11 = fw_memory_g_heap_manager_ptr;
  if (v10 > (a1[4] - v9) >> 3) {
    v12 = a1[3] - v9;
    v13 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
    memcpy_alt1(v13, v9, v12);
    a1[2] = v13;
    a1[3] = v13 + v12;
    a1[4] = v13 + 8 * v10;
    if (v9 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v14, v9);
    }
  }
  if ((_DWORD)v10 != 0) {
    v15 = 0;
    v16 = GameData_212cda0[0];
    do {
      v18 = *(int*)(a2 + 20);
      v19 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v18 + 1;
      v20 = *(unsigned __int8*)(v19 + v18);
      *(_DWORD*)(a2 + 20) = v18 + 2;
      v21 = v20 | (*(unsigned __int8*)(v19 + v18 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v18 + 3;
      v22 = *(unsigned __int8*)(v19 + v18 + 2);
      *(_DWORD*)(a2 + 20) = v18 + 4;
      v23 = v21 | (v22 << 16) | (*(unsigned __int8*)(v19 + v18 + 3) << 24);
      if ((_DWORD)v23 != 0) {
        v24 = *(_QWORD*)(*v16 + 136);
        if (v24 != 0 && *(_QWORD*)(*v16 + 152) != 0) {
          v26 = v24 - 1;
          if ((v24 & (v24 - 1)) != 0) {
            v27 = v23;
            if (v24 <= v23) {
              v27 = (unsigned int)v23 % (unsigned int)v24;
            }
          }
          else {
            v27 = ((_DWORD)v24 - 1) & (unsigned int)v23;
          }
          v28 = *(__int64***)(*(_QWORD*)(*v16 + 128) + 8 * v27);
          if (v28 != nullptr) {
            v29 = *v28;
            if (v29 != nullptr) {
              if ((v24 & v26) == 0) {
                while (1) {
                  v31 = v29[1];
                  if (v31 == v23) {
                    if (*((_DWORD*)v29 + 4) == (_DWORD)v23) {
                      goto LABEL_36;
                    }
                  }
                  else if ((v31 & v26) != v27) {
                    goto LABEL_10;
                  }
                  v29 = (__int64*)*v29;
                  if (v29 == nullptr) {
                    goto LABEL_10;
                  }
                }
              }
              do {
                v30 = v29[1];
                if (v30 == v23) {
                  if (*((_DWORD*)v29 + 4) == (_DWORD)v23) {
                  LABEL_36:
                    v32 = v29[3];
                    if (v32 != 0) {
                      v34 = (_QWORD*)a1[3];
                      v33 = a1[4];
                      if ((unsigned __int64)v34 < v33) {
                        *v34 = v32;
                        v17 = (__int64)(v34 + 1);
                      }
                      else {
                        v35 = a1[2];
                        v36 = (char*)v34 - v35;
                        v37 = ((__int64)v34 - v35) >> 3;
                        v38 = v37 + 1;
                        if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
                          GameRoutine_13033d0_alt1();
                        }
                        v39 = v33 - v35;
                        if (v39 >> 2 > v38) {
                          v38 = v39 >> 2;
                        }
                        if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v40 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v40 = v38;
                        }
                        if (v40 != 0) {
                          if (v40 >> 61 != 0) {
                            GameRoutine_60a210_alt1();
                          }
                          v41 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40,
                              16, 0);
                          v37 = ((__int64)v34 - v35) >> 3;
                        }
                        else {
                          v41 = 0;
                        }
                        v42 = v41 + 8 * v40;
                        v43 = (unsigned __int64)v34 - v35;
                        v44 = (__int64)&v36[v41 + -8 * v37];
                        v46 = v42;
                        *(_QWORD*)&v36[v41] = v32;
                        v17 = (__int64)&v36[v41 + 8];
                        memcpy_alt1(v44, v35, v43);
                        a1[2] = v44;
                        a1[3] = v17;
                        a1[4] = v46;
                        if (v35 != 0) {
                          v45 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v45 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                              v35);
                        }
                      }
                      a1[3] = v17;
                    }
                    break;
                  }
                }
                else {
                  if (v30 >= v24) {
                    v30 %= v24;
                  }
                  if (v30 != v27) {
                    break;
                  }
                }
                v29 = (__int64*)*v29;
              } while (v29 != nullptr);
            }
          }
        }
      }
    LABEL_10:
      ++v15;
    } while (v15 != (_DWORD)v10);
  }
}

#pragma GCC visibility pop
