#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcGmapExploreSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcGmapExploreSeq_Destructor(__int64 a1);
__int64 ProcGmapExploreSeq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_135c560(void);
__int64 GameRoutine_1769a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a8ac57;
extern _UNKNOWN GameData_1ac46e3;
extern __int64 GameData_21f61c0;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 ProcGmapExploreSeq_135ece0(__int64 a1);
__int64 ProcGmapExploreSeq_135ed00(__int64 result);
__int64 ProcGmapExploreSeq_135f540(__int64 a1);
__int64
game_gmap_anonymous_ProcGmapExploreSeq_Initialize_closure_Invoke(__int64 result,
                                                                 __int64* a2);

__int64 ProcGmapExploreSeq_135ece0(__int64 a1)
{
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + 40LL) =
      *(_QWORD*)(*(_QWORD*)(a1 + 152) + 32LL);
  return GameRoutine_135c560();
}

__int64 ProcGmapExploreSeq_135ed00(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD v35[2];

  v1 = *(_QWORD*)(result + 152);
  v3 = *(__int64**)(v1 + 32);
  v2 = *(__int64**)(v1 + 40);
  if (v2 != v3) {
    v4 = (_QWORD*)result;
    do {
      v5 = *v3;
      v6 = *(_QWORD*)(*v3 + 48);
      if ((((0x10000000000LL << *(_BYTE*)(v6 + 72)) |
            (1LL << *(_BYTE*)(v6 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        v8 = (_QWORD*)v4[24];
        v7 = v4[25];
        if ((unsigned __int64)v8 >= v7) {
          v12 = v4[23];
          v13 = (char*)v8 - v12;
          v14 = ((__int64)v8 - v12) >> 3;
          v15 = v14 + 1;
          if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
            goto LABEL_43;
          }
          v16 = v7 - v12;
          if (v16 >> 2 > v15) {
            v15 = v16 >> 2;
          }
          if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
            v17 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v17 = v15;
          }
          if (v17 != 0) {
            if (v17 >> 61 != 0) {
              goto LABEL_44;
            }
            v18 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
          }
          else {
            v18 = 0;
          }
          v26 = v18 + 8 * v17;
          v27 = (char*)v8 - v12;
          v28 = (__int64)&v13[v18 + -8 * v14];
          *(_QWORD*)&v13[v18] = v6;
          v9 = (__int64)&v13[v18 + 8];
          result = memcpy(v28, v12, v27);
          v4[23] = v28;
          v4[24] = v9;
          v4[25] = v26;
          if (v12 != 0) {
            v29 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v29 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
          }
        }
        else {
          *v8 = v6;
          v9 = (__int64)(v8 + 1);
        }
        v4[24] = v9;
      }
      else {
        v11 = (_QWORD*)v4[21];
        v10 = v4[22];
        if ((unsigned __int64)v11 >= v10) {
          v19 = v4[20];
          v20 = (char*)v11 - v19;
          v21 = ((__int64)v11 - v19) >> 3;
          v22 = v21 + 1;
          if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
          LABEL_43:
            GameRoutine_6e5c60(result);
          }
          v23 = v10 - v19;
          if (v23 >> 2 > v22) {
            v22 = v23 >> 2;
          }
          if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
            v24 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v24 = v22;
          }
          if (v24 != 0) {
            if (v24 >> 61 != 0) {
            LABEL_44:
              GameRoutine_60a210(result);
            }
            v25 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
          }
          else {
            v25 = 0;
          }
          v30 = v25 + 8 * v24;
          v31 = (char*)v11 - v19;
          v32 = (__int64)&v20[v25 + -8 * v21];
          *(_QWORD*)&v20[v25] = v6;
          v33 = (__int64)&v20[v25 + 8];
          result = memcpy(v32, v19, v31);
          v4[20] = v32;
          v4[21] = v33;
          v4[22] = v30;
          if (v19 != 0) {
            v34 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v34 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
          }
          v4[21] = v33;
        }
        else {
          *v11 = v6;
          v4[21] = v11 + 1;
        }
      }
      if (*(_BYTE*)(v5 + 58) == 1) {
        v35[1] = &GameData_1ac46e3;
        v35[0] = game_HashString(&GameData_1ac46e3);
        result = GameRoutine_9b11a0(&GameData_21f61c0, v35, 1);
      }
      ++v3;
    } while (v3 != v2);
    return GameRoutine_1769a80(v4, v4[19] + 32LL,
                               *(unsigned int*)(v4[19] + 80LL),
                               **(_QWORD**)(v4[19] + 56LL));
  }
  return result;
}

__int64 ProcGmapExploreSeq_135f540(__int64 a1)
{
  __int64 v1;
  _QWORD v3[2];

  v1 = *(_QWORD*)(a1 + 152);
  v3[1] = &GameData_1a8ac57;
  *(_QWORD*)(v1 + 40) = *(_QWORD*)(v1 + 32);
  *(_QWORD*)(v1 + 64) = *(_QWORD*)(v1 + 56);
  *(_DWORD*)(v1 + 80) = 1;
  v3[0] = game_HashString(&GameData_1a8ac57);
  return GameRoutine_9b11a0(&GameData_21f61c0, v3, 1);
}

__int64

game_gmap_anonymous_ProcGmapExploreSeq_Initialize_closure_Invoke(__int64 result,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 416) & 8) == 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_6c1f60();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 2 > v9) {
        v9 = v10 >> 2;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 ProcGmapExploreSeq_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcGmapExploreSeq_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 168) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcGmapExploreSeq_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_gmap_anonymous_ProcGmapExploreSeq_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 168) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
