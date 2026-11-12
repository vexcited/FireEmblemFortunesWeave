#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
__int64 game_anonymous_TimelinePersons_Build_closure_Invoke_alt1(
    __int64 result,
    __int64 a2) __asm__("game_anonymous_TimelinePersons_Build_closure_Invoke");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_anonymous_TimelinePersons_Build_closure_Invoke(__int64 a1,
                                                         __int64 a2);

void game_anonymous_TimelinePersons_Build_closure_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
  v3 = *(__int64**)(v2 + 256);
  v4 = *(__int64**)(v2 + 264);
  if (v3 != v4) {
    v5 = *(__int64**)(a1 + 8);
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v8 = *v3;
      if (*v3 != 0) {
        v9 = *v5;
        v10 = (__int64*)v5[1];
        if ((__int64*)*v5 == v10) {
          goto LABEL_13;
        }
        v11 = (unsigned __int64)v10 - v9 - 8;
        v12 = (__int64*)*v5;
        if ((~(_BYTE)v11 & 0x18) != 0) {
          v13 = ((unsigned __int8)((unsigned int)v11 >> 3) + 1) & 3;
          v12 = (__int64*)*v5;
          do {
            v14 = *v12++;
            if (v14 == v8) {
              goto LABEL_5;
            }
          } while (--v13 != 0);
        }
        if (v11 < 0x18) {
        LABEL_13:
          v15 = v5[2];
          if ((unsigned __int64)v10 < v15) {
            *v10 = v8;
            v7 = (__int64)(v10 + 1);
          }
          else {
            v16 = (char*)v10 - v9;
            v17 = ((__int64)v10 - v9) >> 3;
            v18 = v17 + 1;
            if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
              GameRoutine_688200_alt1();
            }
            v19 = v15 - v9;
            if (v19 >> 2 > v18) {
              v18 = v19 >> 2;
            }
            if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
              v20 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v20 = v18;
            }
            if (v20 != 0) {
              if (v20 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v21 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v20, 16, 0);
            }
            else {
              v21 = 0;
            }
            v22 = v21 + 8 * v20;
            v23 = (unsigned __int64)v10 - v9;
            v24 = (__int64)&v16[v21 + -8 * v17];
            *(_QWORD*)&v16[v21] = v8;
            v7 = (__int64)&v16[v21 + 8];
            memcpy_alt1(v24, v9, v23);
            *v5 = v24;
            v5[1] = v7;
            v5[2] = v22;
            if (v9 != 0) {
              v25 = 128;
              if (*(_QWORD*)(*v6 + 200) == 0) {
                v25 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v6 + v25, v9);
            }
          }
          v5[1] = v7;
        }
        else {
          while (*v12 != v8 && v12[1] != v8 && v12[2] != v8 && v12[3] != v8) {
            v12 += 4;
            if (v12 == v10) {
              goto LABEL_13;
            }
          }
        }
      }
    LABEL_5:
      ++v3;
    } while (v3 != v4);
  }
}

#pragma GCC visibility pop
