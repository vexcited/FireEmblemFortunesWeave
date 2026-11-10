#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
__int64 game_anonymous_TimelinePersons_Build_closure_Invoke(__int64 result,
                                                            __int64 a2);

__int64 game_anonymous_TimelinePersons_Build_closure_Invoke(__int64 result,
                                                            __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;
  unsigned __int64 v11;
  char* v12;
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
  char* v23;
  __int64 v24;
  __int64 v25;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
  v3 = *(__int64**)(v2 + 256);
  v4 = *(__int64**)(v2 + 264);
  if (v3 != v4) {
    v5 = *(__int64**)(result + 8);
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v8 = *v3;
      if (*v3 != 0) {
        v9 = (char*)*v5;
        v10 = (char*)v5[1];
        if ((char*)*v5 == v10) {
          goto LABEL_13;
        }
        v11 = v10 - v9 - 8;
        v12 = (char*)*v5;
        if ((~(_BYTE)v11 & 0x18) != 0) {
          v13 = ((unsigned __int8)((unsigned int)v11 >> 3) + 1) & 3;
          v12 = (char*)*v5;
          do {
            v14 = *(_QWORD*)v12;
            v12 += 8;
            if (v14 == v8) {
              goto LABEL_5;
            }
          } while (--v13 != 0);
        }
        if (v11 < 0x18) {
        LABEL_13:
          v15 = v5[2];
          if ((unsigned __int64)v10 < v15) {
            *(_QWORD*)v10 = v8;
            v7 = (__int64)(v10 + 8);
          }
          else {
            v16 = (char*)(v10 - v9);
            v17 = (v10 - v9) >> 3;
            v18 = v17 + 1;
            if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
              GameRoutine_688200();
            }
            v19 = v15 - (_QWORD)v9;
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
                GameRoutine_60a210(result);
              }
              v21 = fw_memory_HeapManager_Allocate(*v6, 8 * v20, 16, 0);
            }
            else {
              v21 = 0;
            }
            v22 = v21 + 8 * v20;
            v23 = (char*)(v10 - v9);
            v24 = (__int64)&v16[v21 + -8 * v17];
            *(_QWORD*)&v16[v21] = v8;
            v7 = (__int64)&v16[v21 + 8];
            result = memcpy(v24, v9, v23);
            *v5 = v24;
            v5[1] = v7;
            v5[2] = v22;
            if (v9 != nullptr) {
              v25 = 128;
              if (*(_QWORD*)(*v6 + 200LL) == 0) {
                v25 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v6 + v25);
            }
          }
          v5[1] = v7;
        }
        else {
          while (*(_QWORD*)v12 != v8 && *((_QWORD*)v12 + 1) != v8 &&
                 *((_QWORD*)v12 + 2) != v8 && *((_QWORD*)v12 + 3) != v8) {
            v12 += 32;
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
  return result;
}

#pragma GCC visibility pop
