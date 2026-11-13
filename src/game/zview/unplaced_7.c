#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
bool GameRoutine_d24440(float, __int64, __int64, float32x4_t*, float32x4_t*,
                        __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_cf38d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void game_zview_d24620(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, float32x4_t* a3,
                                                  float32x4_t* a4, _DWORD* a5);

__attribute__((swiftcall)) void game_zview_d24620(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, float32x4_t* a3,
                                                  float32x4_t* a4, _DWORD* a5)
{

#pragma clang fp contract(off)
  __int64* a6 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v6;
  __int64 v9;
  __int64 v11;
  float32x4_t* v12;
  __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  char v22;
  __int64 v23;
  float32x4_t* v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  float32x4_t* v39;
  unsigned __int64 v40;

  {
    v6 = *(_DWORD*)(a2 + 376);
    __asm__ volatile("" ::"r"(v6));
  }
  a6[1] = 0;
  a6[2] = 0;
  *a6 = 0;
  if (v6 != 0 && v6 != 5) {
    {
      v9 = *(_QWORD*)(a2 + 16);
      __asm__ volatile("" ::"r"(v9));
    }
    if ((*(_BYTE*)(v9 + 288) & 1) == 0 && (unsigned int)(v6 - 1) <= 2 &&
        (*(_BYTE*)(v9 + 289) & 1) != 0) {
      {
        v11 = *(_QWORD*)a1;
        __asm__ volatile("" ::"r"(v11));
      }
      v12 = a4;
      v13 = (__int64*)a1;
      {
        v14 = (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 3;
        __asm__ volatile("" ::"r"(v14));
      }
      if (*(_QWORD*)(a1 + 8) == *(_QWORD*)a1 || (*a5 & 2) != 0) {
        LODWORD(v16) = 0;
      }
      else {
        {
          v15 = *(_QWORD*)(*(_QWORD*)(a2 + 632) + 8LL);
          __asm__ volatile("" ::"r"(v15));
        }
        if ((*a5 & 4) != 0) {
          v16 = 0;
          while (1) {
            {
              v18 = *(_QWORD*)(v11 + 8 * v16);
              __asm__ volatile("" ::"r"(v18));
            }
            if (v18 != 0 && v15 < *(_QWORD*)(*(_QWORD*)(v18 + 632) + 8LL)) {
              break;
            }
            if (v14 == ++v16) {
            LABEL_24:
              LODWORD(v16) = v14 - 1;
              break;
            }
          }
        }
        else {
          v16 = 0;
          while (1) {
            {
              v17 = *(_QWORD*)(v11 + 8 * v16);
              __asm__ volatile("" ::"r"(v17));
            }
            if (v17 != 0 && v15 == *(_QWORD*)(*(_QWORD*)(v17 + 632) + 8LL)) {
              break;
            }
            if (v14 == ++v16) {
              goto LABEL_24;
            }
          }
        }
      }
      v19 = (int)v16;
      if (v14 > (int)v16) {
        v20 = nullptr;
        v21 = 0;
        v40 = 0;
        v22 = 0;
        v39 = a3;
        while (1) {
          {
            v23 = *(_QWORD*)(v11 + 8 * v19);
            __asm__ volatile("" ::"r"(v23));
          }
          if (v23 != 0) {
            if (v23 == a2 || (unsigned int)(*(_DWORD*)(v23 + 376) - 1) > 3) {
              goto LABEL_28;
            }
            v25 = a3;
            LOBYTE(a1) =
                GameRoutine_d24440(0x1.0000000000000p+0f, a1, a2, a3, v12, v23);
            if ((a1 & 1) != 0) {
              break;
            }
            a3 = v25;
          }
        LABEL_28:
          {
            v11 = *v13;
            __asm__ volatile("" ::"r"(v11));
          }
          if (++v19 >= (unsigned __int64)((v13[1] - *v13) >> 3)) {
            *a6 = v21;
            a6[1] = (__int64)v20;
            a6[2] = v40;
            return;
          }
        }
        if ((v22 & 1) != 0) {
          v26 = v21;
        }
        else {
          v28 = v40;
          v27 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v40 - v21 > 0xFF) {
            v26 = v21;
            if ((unsigned __int64)v20 < v40) {
              goto LABEL_44;
            }
            goto LABEL_46;
          }
          v29 = (unsigned __int64)v20 - v21;
          v26 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
          v20 = (_QWORD*)((char*)v20 + v26 - v21);
          v40 = v26 + 256;
          a1 = memcpy(v26, v21, v29);
          if (v21 != 0) {
            v30 = fw_memory_g_heap_manager_ptr;
            v31 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v21);
            v27 = (__int64*)v30;
          LABEL_43:
            v28 = v40;
            if ((unsigned __int64)v20 < v40) {
            LABEL_44:
              v40 = v28;
              v22 = 1;
              v21 = v26;
              *v20++ = *(_QWORD*)(v11 + 8 * v19);
            LABEL_61:
              a3 = v39;
              goto LABEL_28;
            }
          LABEL_46:
            v32 = (unsigned __int64)v20 - v26;
            v33 = ((__int64)v20 - v26) >> 3;
            v34 = v33 + 1;
            if ((unsigned __int64)(v33 + 1) >> 61 != 0) {
              a6[1] = (__int64)v20;
              a6[2] = v28;
              *a6 = v26;
              GameRoutine_cf38d0();
            }
            if ((v28 - v26) >> 2 > v34) {
              v34 = (v28 - v26) >> 2;
            }
            if ((unsigned __int64)(v28 - v26) >= 0x7FFFFFFFFFFFFFF8LL) {
              v35 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v35 = v34;
            }
            if (v35 != 0) {
              if (v35 >> 61 != 0) {
                a6[1] = (__int64)v20;
                a6[2] = v28;
                *a6 = v26;
                GameRoutine_60a210();
              }
              v36 = fw_memory_HeapManager_Allocate(*v27, 8 * v35, 16, 0);
            }
            else {
              v36 = 0;
            }
            v40 = v36 + 8 * v35;
            v21 = v36 + v32 - 8 * v33;
            *(_QWORD*)(v36 + v32) = *(_QWORD*)(v11 + 8 * v19);
            v20 = (_QWORD*)(v36 + v32 + 8);
            a1 = memcpy(v21, v26, v32);
            if (v26 != 0) {
              v37 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v37 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v26);
            }
            v12 = a4;
            v22 = 1;
            goto LABEL_61;
          }
        }
        v27 = (__int64*)fw_memory_g_heap_manager_ptr;
        goto LABEL_43;
      }
    }
  }
}

#pragma GCC visibility pop
