#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ca0480(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ca2520(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ca45c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ca6660(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Loader_c9fb60_alt1(_QWORD* result, unsigned __int64* a2,
                           __int64 a3) __asm__("Loader_c9fb60");
_QWORD* Loader_ca1c00_alt1(_QWORD* result, unsigned __int64* a2,
                           __int64 a3) __asm__("Loader_ca1c00");
_QWORD* Loader_ca3ca0_alt1(_QWORD* result, unsigned __int64* a2,
                           __int64 a3) __asm__("Loader_ca3ca0");
_QWORD* Loader_ca5d40_alt1(_QWORD* result, unsigned __int64* a2,
                           __int64 a3) __asm__("Loader_ca5d40");
_QWORD* GameRoutine_ca0480_alt1(__int64, unsigned __int64,
                                __int64*) __asm__("GameRoutine_ca0480");
_QWORD* GameRoutine_ca2520_alt1(__int64, unsigned __int64,
                                __int64*) __asm__("GameRoutine_ca2520");
_QWORD* GameRoutine_ca45c0_alt1(__int64, unsigned __int64,
                                __int64*) __asm__("GameRoutine_ca45c0");
_QWORD* GameRoutine_ca6660_alt1(__int64, unsigned __int64,
                                __int64*) __asm__("GameRoutine_ca6660");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Loader_c9fb60(_QWORD* a1, unsigned __int64* a2, __int64 a3);
void Loader_ca1c00(_QWORD* a1, unsigned __int64* a2, __int64 a3);
void Loader_ca3ca0(_QWORD* a1, unsigned __int64* a2, __int64 a3);
void Loader_ca5d40(_QWORD* a1, unsigned __int64* a2, __int64 a3);

void Loader_c9fb60(_QWORD* a1, unsigned __int64* a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;

  v3 = a1[11];
  v4 = *a2;
  if (v3 != 0 && a1[13] != 0) {
    v8 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v9 = *a2;
      if (v4 >= v3) {
        v9 = v4 % v3;
      }
    }
    else {
      v9 = v8 & v4;
    }
    v10 = *(_QWORD**)(a1[10] + 8 * v9);
    if (v10 != nullptr) {
      v11 = (_QWORD*)*v10;
      if (v11 != nullptr) {
        if ((v3 & v8) == 0) {
          while (1) {
            v13 = v11[1];
            if (v13 == v4) {
              if (v11[2] == v4) {
                return;
              }
            }
            else if ((v13 & v8) != v9) {
              goto LABEL_24;
            }
            v11 = (_QWORD*)*v11;
            if (v11 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v12 = v11[1];
          if (v12 == v4) {
            if (v11[2] == v4) {
              return;
            }
          }
          else {
            if (v12 >= v3) {
              v12 %= v3;
            }
            if (v12 != v9) {
              break;
            }
          }
          v11 = (_QWORD*)*v11;
        } while (v11 != nullptr);
      }
    }
  }
LABEL_24:
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v15[2] = v4;
  v15[3] = a3;
  *v15 = 0;
  v15[1] = v4;
  if (GameRoutine_ca0480_alt1((__int64)(a1 + 10), v4, v15 + 2) != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v16, (__int64)v15);
  }
  else {
    v17 = a1[11];
    v18 = v17 - 1;
    if ((v17 & (v17 - 1)) != 0) {
      if (v4 >= v17) {
        v4 %= v17;
      }
    }
    else {
      v4 &= v18;
    }
    v19 = a1[10];
    v20 = *(__int64**)(v19 + 8 * v4);
    if (v20 != nullptr) {
      *v15 = *v20;
      *v20 = (__int64)v15;
    }
    else {
      v21 = a1[12];
      a1[12] = v15;
      *v15 = v21;
      *(_QWORD*)(v19 + 8 * v4) = a1 + 12;
      if (*v15 != 0) {
        v22 = *(_QWORD*)(*v15 + 8);
        if ((v17 & v18) != 0) {
          if (v22 >= v17) {
            v22 %= v17;
          }
        }
        else {
          v22 &= v18;
        }
        *(_QWORD*)(a1[10] + 8 * v22) = v15;
      }
    }
    ++a1[13];
  }
}

void Loader_ca1c00(_QWORD* a1, unsigned __int64* a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;

  v3 = a1[11];
  v4 = *a2;
  if (v3 != 0 && a1[13] != 0) {
    v8 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v9 = *a2;
      if (v4 >= v3) {
        v9 = v4 % v3;
      }
    }
    else {
      v9 = v8 & v4;
    }
    v10 = *(_QWORD**)(a1[10] + 8 * v9);
    if (v10 != nullptr) {
      v11 = (_QWORD*)*v10;
      if (v11 != nullptr) {
        if ((v3 & v8) == 0) {
          while (1) {
            v13 = v11[1];
            if (v13 == v4) {
              if (v11[2] == v4) {
                return;
              }
            }
            else if ((v13 & v8) != v9) {
              goto LABEL_24;
            }
            v11 = (_QWORD*)*v11;
            if (v11 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v12 = v11[1];
          if (v12 == v4) {
            if (v11[2] == v4) {
              return;
            }
          }
          else {
            if (v12 >= v3) {
              v12 %= v3;
            }
            if (v12 != v9) {
              break;
            }
          }
          v11 = (_QWORD*)*v11;
        } while (v11 != nullptr);
      }
    }
  }
LABEL_24:
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v15[2] = v4;
  v15[3] = a3;
  *v15 = 0;
  v15[1] = v4;
  if (GameRoutine_ca2520_alt1((__int64)(a1 + 10), v4, v15 + 2) != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v16, (__int64)v15);
  }
  else {
    v17 = a1[11];
    v18 = v17 - 1;
    if ((v17 & (v17 - 1)) != 0) {
      if (v4 >= v17) {
        v4 %= v17;
      }
    }
    else {
      v4 &= v18;
    }
    v19 = a1[10];
    v20 = *(__int64**)(v19 + 8 * v4);
    if (v20 != nullptr) {
      *v15 = *v20;
      *v20 = (__int64)v15;
    }
    else {
      v21 = a1[12];
      a1[12] = v15;
      *v15 = v21;
      *(_QWORD*)(v19 + 8 * v4) = a1 + 12;
      if (*v15 != 0) {
        v22 = *(_QWORD*)(*v15 + 8);
        if ((v17 & v18) != 0) {
          if (v22 >= v17) {
            v22 %= v17;
          }
        }
        else {
          v22 &= v18;
        }
        *(_QWORD*)(a1[10] + 8 * v22) = v15;
      }
    }
    ++a1[13];
  }
}

void Loader_ca3ca0(_QWORD* a1, unsigned __int64* a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;

  v3 = a1[11];
  v4 = *a2;
  if (v3 != 0 && a1[13] != 0) {
    v8 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v9 = *a2;
      if (v4 >= v3) {
        v9 = v4 % v3;
      }
    }
    else {
      v9 = v8 & v4;
    }
    v10 = *(_QWORD**)(a1[10] + 8 * v9);
    if (v10 != nullptr) {
      v11 = (_QWORD*)*v10;
      if (v11 != nullptr) {
        if ((v3 & v8) == 0) {
          while (1) {
            v13 = v11[1];
            if (v13 == v4) {
              if (v11[2] == v4) {
                return;
              }
            }
            else if ((v13 & v8) != v9) {
              goto LABEL_24;
            }
            v11 = (_QWORD*)*v11;
            if (v11 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v12 = v11[1];
          if (v12 == v4) {
            if (v11[2] == v4) {
              return;
            }
          }
          else {
            if (v12 >= v3) {
              v12 %= v3;
            }
            if (v12 != v9) {
              break;
            }
          }
          v11 = (_QWORD*)*v11;
        } while (v11 != nullptr);
      }
    }
  }
LABEL_24:
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v15[2] = v4;
  v15[3] = a3;
  *v15 = 0;
  v15[1] = v4;
  if (GameRoutine_ca45c0_alt1((__int64)(a1 + 10), v4, v15 + 2) != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v16, (__int64)v15);
  }
  else {
    v17 = a1[11];
    v18 = v17 - 1;
    if ((v17 & (v17 - 1)) != 0) {
      if (v4 >= v17) {
        v4 %= v17;
      }
    }
    else {
      v4 &= v18;
    }
    v19 = a1[10];
    v20 = *(__int64**)(v19 + 8 * v4);
    if (v20 != nullptr) {
      *v15 = *v20;
      *v20 = (__int64)v15;
    }
    else {
      v21 = a1[12];
      a1[12] = v15;
      *v15 = v21;
      *(_QWORD*)(v19 + 8 * v4) = a1 + 12;
      if (*v15 != 0) {
        v22 = *(_QWORD*)(*v15 + 8);
        if ((v17 & v18) != 0) {
          if (v22 >= v17) {
            v22 %= v17;
          }
        }
        else {
          v22 &= v18;
        }
        *(_QWORD*)(a1[10] + 8 * v22) = v15;
      }
    }
    ++a1[13];
  }
}

void Loader_ca5d40(_QWORD* a1, unsigned __int64* a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;

  v3 = a1[11];
  v4 = *a2;
  if (v3 != 0 && a1[13] != 0) {
    v8 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v9 = *a2;
      if (v4 >= v3) {
        v9 = v4 % v3;
      }
    }
    else {
      v9 = v8 & v4;
    }
    v10 = *(_QWORD**)(a1[10] + 8 * v9);
    if (v10 != nullptr) {
      v11 = (_QWORD*)*v10;
      if (v11 != nullptr) {
        if ((v3 & v8) == 0) {
          while (1) {
            v13 = v11[1];
            if (v13 == v4) {
              if (v11[2] == v4) {
                return;
              }
            }
            else if ((v13 & v8) != v9) {
              goto LABEL_24;
            }
            v11 = (_QWORD*)*v11;
            if (v11 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v12 = v11[1];
          if (v12 == v4) {
            if (v11[2] == v4) {
              return;
            }
          }
          else {
            if (v12 >= v3) {
              v12 %= v3;
            }
            if (v12 != v9) {
              break;
            }
          }
          v11 = (_QWORD*)*v11;
        } while (v11 != nullptr);
      }
    }
  }
LABEL_24:
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v15[2] = v4;
  v15[3] = a3;
  *v15 = 0;
  v15[1] = v4;
  if (GameRoutine_ca6660_alt1((__int64)(a1 + 10), v4, v15 + 2) != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v16, (__int64)v15);
  }
  else {
    v17 = a1[11];
    v18 = v17 - 1;
    if ((v17 & (v17 - 1)) != 0) {
      if (v4 >= v17) {
        v4 %= v17;
      }
    }
    else {
      v4 &= v18;
    }
    v19 = a1[10];
    v20 = *(__int64**)(v19 + 8 * v4);
    if (v20 != nullptr) {
      *v15 = *v20;
      *v20 = (__int64)v15;
    }
    else {
      v21 = a1[12];
      a1[12] = v15;
      *v15 = v21;
      *(_QWORD*)(v19 + 8 * v4) = a1 + 12;
      if (*v15 != 0) {
        v22 = *(_QWORD*)(*v15 + 8);
        if ((v17 & v18) != 0) {
          if (v22 >= v17) {
            v22 %= v17;
          }
        }
        else {
          v22 &= v18;
        }
        *(_QWORD*)(a1[10] + 8 * v22) = v15;
      }
    }
    ++a1[13];
  }
}

#pragma GCC visibility pop
