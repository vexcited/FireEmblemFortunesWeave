#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_65c760();
void game_map_history_anonymous_1241580(__int64, unsigned __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_map_history_anonymous_1243060(__int64 a1, __int64 a2);

void game_map_history_anonymous_1243060(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  float v40;
  __int64 v41;
  float v42;
  float v43;
  _BOOL8 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64* v53;
  __int64 v54;
  __int64 v55;
  signed __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  int v63;

  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v7 = *(unsigned __int8*)(v4 + v3);
  *(_DWORD*)(a2 + 20) = v3 + 2;
  v8 = v7 | (*(unsigned __int8*)(v4 + v3 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 3;
  v9 = *(unsigned __int8*)(v4 + v3 + 2);
  *(_DWORD*)(a2 + 20) = v3 + 4;
  v10 = *(_QWORD*)a1;
  v11 = v8 | (v9 << 16) | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
  v12 = fw_memory_g_heap_manager_ptr;
  v63 = v8 | (v9 << 16) | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
  if (v11 > (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)a1) >> 3) {
    v13 = *(_QWORD*)(a1 + 8) - v10;
    v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        8 * v11, 16, 0);
    memcpy(v2, v10, v13);
    *(_QWORD*)a1 = v2;
    *(_QWORD*)(a1 + 8) = v2 + v13;
    *(_QWORD*)(a1 + 16) = v2 + 8 * v11;
    if (v10 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14, v10);
    }
  }
  game_map_history_anonymous_1241580(
      a1 + 24, vcvtps_u64_f32((float)(unsigned int)v11 / *(float*)(a1 + 56)));
  if ((_DWORD)v11 != 0) {
    v15 = (__int64*)(a1 + 40);
    v16 = 0;
    do {
      v17 = *(int*)(a2 + 20);
      v18 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      v19 = *(unsigned __int8*)(v18 + v17);
      *(_DWORD*)(a2 + 20) = v17 + 2;
      v20 = v19 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v17 + 3;
      v21 = v20 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v17 + 4;
      v22 = v21 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v17 + 5;
      v23 = v22 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v17 + 6;
      v24 = v23 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v17 + 7;
      v25 = v24 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 6) << 48);
      *(_DWORD*)(a2 + 20) = v17 + 8;
      v26 = v25 | ((unsigned __int64)*(unsigned __int8*)(v18 + v17 + 7) << 56);
      *(_DWORD*)(a2 + 20) = v17 + 9;
      v27 = *(unsigned __int8*)(v18 + v17 + 8);
      *(_DWORD*)(a2 + 20) = v17 + 10;
      v28 = *(unsigned __int8*)(v18 + v17 + 9);
      *(_DWORD*)(a2 + 20) = v17 + 11;
      v29 = *(unsigned __int8*)(v18 + v17 + 10);
      *(_DWORD*)(a2 + 20) = v17 + 12;
      v30 = *(unsigned __int8*)(v18 + v17 + 11);
      v31 = *(_QWORD*)(a1 + 32);
      if (v31 != 0) {
        v32 = v31 - 1;
        if ((v31 & (v31 - 1)) != 0) {
          v2 = v26;
          if (v26 >= v31) {
            v2 = v26 % v31;
          }
        }
        else {
          v2 = v32 & v26;
        }
        v33 = *(_QWORD**)(*(_QWORD*)(a1 + 24) + 8 * v2);
        if (v33 != nullptr) {
          v34 = (_QWORD*)*v33;
          if (v34 != nullptr) {
            if ((v31 & v32) == 0) {
              while (1) {
                v36 = v34[1];
                if (v36 == v26) {
                  if (v34[2] == v26) {
                    goto LABEL_65;
                  }
                }
                else if ((v36 & v32) != v2) {
                  goto LABEL_28;
                }
                v34 = (_QWORD*)*v34;
                if (v34 == nullptr) {
                  goto LABEL_28;
                }
              }
            }
            do {
              v35 = v34[1];
              if (v35 == v26) {
                if (v34[2] == v26) {
                  goto LABEL_65;
                }
              }
              else {
                if (v35 >= v31) {
                  v35 %= v31;
                }
                if (v35 != v2) {
                  break;
                }
              }
              v34 = (_QWORD*)*v34;
            } while (v34 != nullptr);
          }
        }
      }
    LABEL_28:
      v37 = v27 | (v28 << 8) | (v29 << 16) | (v30 << 24);
      v38 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 32, 16, 0);
      v39 = *(_QWORD*)(a1 + 48);
      v40 = *(float*)(a1 + 56);
      v41 = v38;
      *(_QWORD*)v38 = 0;
      *(_QWORD*)(v38 + 8) = v26;
      *(_QWORD*)(v38 + 16) = v26;
      *(_DWORD*)(v38 + 24) = 0;
      *(_DWORD*)(v38 + 28) = v37;
      v42 = (float)(unsigned __int64)(v39 + 1);
      if (v31 == 0 || (float)(v40 * (float)v31) < v42) {
        v43 = v42 / v40;
        v44 = (v31 & (v31 - 1)) != 0;
        if (v31 < 3) {
          v44 = true;
        }
        v45 = v44 | (2 * v31);
        v46 = vcvtps_u64_f32(v43);
        if (v45 <= v46) {
          v47 = v46;
        }
        else {
          v47 = v45;
        }
        game_map_history_anonymous_1241580(a1 + 24, v47);
        v31 = *(_QWORD*)(a1 + 32);
        if ((v31 & (v31 - 1)) != 0) {
          if (v26 >= v31) {
            v2 = v26 % v31;
          }
          else {
            v2 = v26;
          }
        }
        else {
          v2 = (v31 - 1) & v26;
        }
      }
      v48 = *(_QWORD*)(a1 + 24);
      v49 = *(__int64**)(v48 + 8 * v2);
      if (v49 != nullptr) {
        *(_QWORD*)v41 = *v49;
        *v49 = v41;
      }
      else {
        v50 = *v15;
        *v15 = v41;
        *(_QWORD*)v41 = v50;
        *(_QWORD*)(v48 + 8 * v2) = v15;
        if (*(_QWORD*)v41 != 0) {
          v51 = *(_QWORD*)(*(_QWORD*)v41 + 8LL);
          if ((v31 & (v31 - 1)) != 0) {
            if (v51 >= v31) {
              v51 %= v31;
            }
          }
          else {
            v51 &= v31 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v51) = v41;
        }
      }
      ++*(_QWORD*)(a1 + 48);
      v53 = *(unsigned __int64**)(a1 + 8);
      v52 = *(_QWORD*)(a1 + 16);
      if ((unsigned __int64)v53 >= v52) {
        v55 = *(_QWORD*)a1;
        v56 = (signed __int64)v53 - *(_QWORD*)a1;
        v57 = (v56 >> 3) + 1;
        if (v57 >> 61 != 0) {
          GameRoutine_65c760();
        }
        v58 = v52 - v55;
        if (v58 >> 2 > v57) {
          v57 = v58 >> 2;
        }
        if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
          v59 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v59 = v57;
        }
        if (v59 != 0) {
          if (v59 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v60 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v59, 16, 0);
        }
        else {
          v60 = 0;
        }
        v61 = v60 + 8 * v59;
        v2 = v60 + v56 - 8 * (v56 >> 3);
        *(_QWORD*)(v60 + v56) = v26;
        v54 = v60 + v56 + 8;
        memcpy(v2, v55, v56);
        *(_QWORD*)a1 = v2;
        *(_QWORD*)(a1 + 8) = v54;
        *(_QWORD*)(a1 + 16) = v61;
        if (v55 != 0) {
          v62 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v62 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v55);
        }
      }
      else {
        *v53 = v26;
        v54 = (__int64)(v53 + 1);
      }
      LODWORD(v11) = v63;
      *(_QWORD*)(a1 + 8) = v54;
    LABEL_65:
      ++v16;
    } while (v16 != (_DWORD)v11);
  }
}

#pragma GCC visibility pop
