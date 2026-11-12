#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern __int64 GameData_212bf68;
extern __int64* GameData_212d458[7];
extern __int64 GameData_21c9608;
__n128 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_da3110(long double);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_da3110_alt1() __asm__("GameRoutine_da3110");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_da5c00(__int64* a1);

void GameHr_da5c00(__int64* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  signed __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v1 = *(_QWORD**)(GameData_21c9608 + 904);
  v2 = *(_QWORD**)(GameData_21c9608 + 912);
  if (v1 != v2) {
    v4 = GameData_212d458[0];
    do {
      v5 = *(_QWORD**)(*v4 + 24);
      v6 = *(_QWORD**)(*v4 + 32);
      if (v5 != v6) {
        while (1) {
          v7 = *v5;
          if (*(_QWORD*)(*v5 + 264LL) == *v1) {
            break;
          }
          v5 += 2;
          if (v5 == v6) {
            goto LABEL_3;
          }
        }
        v8 = v5[1];
        if (v8 != 0) {
          v9 = v5[1];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
          v10 = std___1___shared_weak_count_lock(v9);
          std___1___shared_weak_count___release_weak(v8);
          if (v10 != 0) {
            v12 = (_QWORD*)a1[1];
            v11 = a1[2];
            if ((unsigned __int64)v12 >= v11) {
              v14 = *a1;
              v15 = (signed __int64)v12 - *a1;
              v16 = (v15 >> 3) + 1;
              if (v16 >> 61 != 0) {
                GameRoutine_da3110_alt1();
              }
              v17 = v11 - v14;
              if (v17 >> 2 > v16) {
                v16 = v17 >> 2;
              }
              if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
                v18 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v18 = v16;
              }
              if (v18 != 0) {
                if (v18 >> 61 != 0) {
                  GameRoutine_60a210_alt1();
                }
                v19 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
              }
              else {
                v19 = 0;
              }
              v20 = v19 + 8 * v18;
              v21 = v19 + v15 - 8 * (v15 >> 3);
              *(_QWORD*)(v19 + v15) = v7;
              v13 = v19 + v15 + 8;
              memcpy(v21, v14, v15);
              *a1 = v21;
              a1[2] = v20;
              if (v14 != 0) {
                v22 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v22 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v14);
              }
              v4 = GameData_212d458[0];
            }
            else {
              *v12 = v7;
              v13 = (__int64)(v12 + 1);
            }
            a1[1] = v13;
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak(v10);
            }
          }
        }
      }
    LABEL_3:
      ++v1;
    } while (v1 != v2);
  }
}

#pragma GCC visibility pop
