#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9760;
extern __int64 GameData_21c9768;
extern __int64 GameData_21c9770;
extern __int64 GameData_21c9780;
extern __int64 GameData_21c9788;
extern __int64 GameData_21c9790;
extern __int64 GameData_21c9798;
extern __int64 GameData_21c97a0;
extern __int64 GameData_21c97b0;
extern __int64 GameData_21c97b8;
extern __int64 GameData_21c97c0;
extern __int64 GameData_21c97c8;
extern __int64 GameData_21c97d0;
extern __int64 GameData_21c97e0;
extern __int64 GameData_21c97e8;
extern __int64 GameData_21c9d08;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_13e9eb0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 DramaFile_13e6220(__int64 result);

__int64 DramaFile_13e6220(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  int* v32;
  unsigned __int64 v33;
  int v34;
  int v35;
  int v36;
  unsigned __int64 v37;
  int v38;
  int* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  int* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _BYTE* v61;
  _QWORD* v62;
  _QWORD* v63;

  if ((*(_BYTE*)(result + 248) & 1) != 0) {
    return result;
  }
  v1 = *(_QWORD**)(result + 8);
  if (*(_QWORD**)(result + 16) == v1) {
    v2 = 0;
  }
  else {
    v2 = *v1 + 16LL;
  }
  v61 = (_BYTE*)result;
  v3 = GameData_21c9768;
  v4 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
  if (GameData_21c9770 == GameData_21c9768) {
    v4 = 0;
  }
  v5 = GameData_21c9788 + GameData_21c9780;
  if (v4 == GameData_21c9788 + GameData_21c9780) {
    GameRoutine_66cf00(&GameData_21c9760);
    result = (__int64)v61;
    v5 = GameData_21c9788 + GameData_21c9780;
    v3 = GameData_21c9768;
  }
  *(_QWORD*)(*(_QWORD*)(v3 + 8 * (v5 >> 9)) + 8 * (v5 & 0x1FF)) = v2;
  ++GameData_21c9788;
  v6 = *(_QWORD*)(result + 32);
  if (*(_QWORD*)(result + 40) == v6) {
    v7 = 0;
  }
  else {
    v7 = *(_QWORD*)(*(_QWORD*)v6 + 8LL);
  }
  v8 = GameData_21c9798;
  v9 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
  if (GameData_21c97a0 == GameData_21c9798) {
    v9 = 0;
  }
  v10 = GameData_21c97b8 + GameData_21c97b0;
  if (v9 == GameData_21c97b8 + GameData_21c97b0) {
    GameRoutine_66cf00(&GameData_21c9790);
    result = (__int64)v61;
    v10 = GameData_21c97b8 + GameData_21c97b0;
    v8 = GameData_21c9798;
  }
  *(_QWORD*)(*(_QWORD*)(v8 + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF)) = v7;
  ++GameData_21c97b8;
  v11 = *(_QWORD**)(result + 56);
  v62 = *(_QWORD**)(result + 64);
  if (v11 == v62) {
    goto LABEL_85;
  }
  v12 = GameData_21c97c8;
  v13 = GameData_21c97d0;
  v14 = GameData_21c97e0;
  v15 = GameData_21c97e8;
  while (2) {
    v17 = v13 - v12;
    v63 = v11;
    v18 = *v11;
    v23 = v13 == v12;
    v19 = v15 + v14;
    v20 = (v17 << 6) - 1;
    if (v23) {
      v20 = 0;
    }
    if (v20 == v19) {
      GameRoutine_66d660(&GameData_21c97c0);
      v12 = GameData_21c97c8;
      v19 = GameData_21c97e8 + GameData_21c97e0;
    }
    *(_QWORD*)(*(_QWORD*)(v12 + 8 * (v19 >> 9)) + 8 * (v19 & 0x1FF)) = v18;
    ++GameData_21c97e8;
    v21 = *(_QWORD*)(v18 + 32);
    if (v21 == 0 || *(_BYTE*)v21 == 0) {
      goto LABEL_52;
    }
    v21 = game_HashString(v21);
    if (v21 == 0) {
      goto LABEL_50;
    }
    v22 = *(_QWORD*)(GameData_21c9d08 + 96);
    v23 = v22 == 0 || *(_QWORD*)(GameData_21c9d08 + 112) == 0;
    if (v23) {
      goto LABEL_50;
    }
    v24 = v22 - 1;
    if ((v22 & (v22 - 1)) != 0) {
      v25 = v21;
      if (v21 >= v22) {
        v25 = v21 % v22;
      }
    }
    else {
      v25 = v24 & v21;
    }
    v26 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d08 + 88) + 8 * v25);
    if (v26 == nullptr || (v27 = (_QWORD*)*v26) == nullptr) {
    LABEL_50:
      v29 = 0;
      goto LABEL_51;
    }
    if ((v22 & v24) == 0) {
      while (1) {
        v30 = v27[1];
        if (v30 == v21) {
          if (v27[2] == v21) {
            goto LABEL_84;
          }
        }
        else if ((v30 & v24) != v25) {
          goto LABEL_50;
        }
        v27 = (_QWORD*)*v27;
        v29 = 0;
        if (v27 == nullptr) {
          goto LABEL_51;
        }
      }
    }
    while (1) {
      v28 = v27[1];
      if (v28 == v21) {
        break;
      }
      if (v28 >= v22) {
        v28 %= v22;
      }
      if (v28 != v25) {
        goto LABEL_50;
      }
    LABEL_40:
      v27 = (_QWORD*)*v27;
      if (v27 == nullptr) {
        goto LABEL_50;
      }
    }
    if (v27[2] != v21) {
      goto LABEL_40;
    }
  LABEL_84:
    v29 = v27[3];
  LABEL_51:
    *(_QWORD*)(v18 + 40) = v29;
  LABEL_52:
    v31 = *(_QWORD*)(v18 + 24);
    if (v31 != 0) {
      v32 = *(int**)v31;
    }
    else {
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      v31 = v21;
      v32 = nullptr;
      *(_QWORD*)v21 = 0;
      *(_QWORD*)(v21 + 8) = 0;
      *(_QWORD*)(v21 + 16) = 0;
      *(_QWORD*)(v18 + 24) = v21;
    }
    *(_QWORD*)(v31 + 8) = v32;
    if (*(_WORD*)(v18 + 80) != 0) {
      v33 = 0;
      do {
        v34 = 10000 * *(__int16*)(*(_QWORD*)(v18 + 88) + 2 * v33);
        v35 = v34 + 100 * *(unsigned __int8*)(*(_QWORD*)(v18 + 104) + v33);
        v36 = v34 + 100 * *(unsigned __int8*)(*(_QWORD*)(v18 + 136) + v33) +
              *(unsigned __int8*)(*(_QWORD*)(v18 + 152) + v33);
        v37 = *(_QWORD*)(v31 + 16);
        v38 = v35 + *(unsigned __int8*)(*(_QWORD*)(v18 + 120) + v33);
        if ((unsigned __int64)v32 < v37) {
          *v32 = v38;
          v32[1] = v36;
          v32 += 2;
        }
        else {
          v39 = *(int**)v31;
          v40 = (__int64)v32 - *(_QWORD*)v31;
          v41 = (v40 >> 3) + 1;
          if (v41 >> 61 != 0) {
            GameRoutine_13e9eb0();
          }
          v42 = v37 - (_QWORD)v39;
          if (v42 >> 2 > v41) {
            v41 = v42 >> 2;
          }
          if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
            v43 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v43 = v41;
          }
          if (v43 != 0) {
            if (v43 >> 61 != 0) {
              GameRoutine_60a210(v21);
            }
            v44 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v43, 16, 0);
          }
          else {
            v44 = 0;
          }
          v45 = (int*)(v44 + v40);
          v46 = v44 + 8 * v43;
          *v45 = v38;
          v45[1] = v36;
          v47 = v44 + v40 - 8 * (v40 >> 3);
          v32 = (int*)(v44 + v40 + 8);
          v21 = memcpy(v47, v39, v40);
          *(_QWORD*)v31 = v47;
          *(_QWORD*)(v31 + 8) = v32;
          *(_QWORD*)(v31 + 16) = v46;
          if (v39 != nullptr) {
            v48 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v48 = 56;
            }
            v21 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v48);
          }
        }
        *(_QWORD*)(v31 + 8) = v32;
        ++v33;
      } while (v33 < *(unsigned __int16*)(v18 + 80));
    }
    v12 = GameData_21c97c8;
    v13 = GameData_21c97d0;
    v14 = GameData_21c97e0;
    v49 = GameData_21c97e8;
    if (GameData_21c97d0 == GameData_21c97c8) {
      v50 = 0;
    }
    else {
      v50 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
    }
    v15 = --GameData_21c97e8;
    if ((unsigned __int64)(v50 - (v49 + GameData_21c97e0) + 1) < 0x400) {
      v16 = v63;
    }
    else {
      v16 = v63;
      if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
        v51 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v51);
        v12 = GameData_21c97c8;
        v13 = GameData_21c97d0;
        v14 = GameData_21c97e0;
        v15 = GameData_21c97e8;
      }
      v13 -= 8;
      GameData_21c97d0 = v13;
    }
    v11 = v16 + 1;
    if (v11 != v62) {
      continue;
    }
    break;
  }
LABEL_85:
  result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v61 + 40LL))(v61);
  v52 = GameData_21c9770;
  v53 = GameData_21c9770 - GameData_21c9768;
  v23 = GameData_21c9770 == GameData_21c9768;
  v61[248] = 1;
  v54 = GameData_21c9788;
  v55 = (v53 << 6) - 1;
  if (v23) {
    v55 = 0;
  }
  --GameData_21c9788;
  if ((unsigned __int64)(v55 - (v54 + GameData_21c9780) + 1) >= 0x400) {
    if (*(_QWORD*)(v52 - 8) != 0) {
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v56 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
      v52 = GameData_21c9770;
    }
    GameData_21c9770 = v52 - 8;
  }
  v57 = GameData_21c97a0;
  v58 = GameData_21c97b8;
  v59 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
  if (GameData_21c97a0 == GameData_21c9798) {
    v59 = 0;
  }
  --GameData_21c97b8;
  if ((unsigned __int64)(v59 - (v58 + GameData_21c97b0) + 1) >= 0x400) {
    if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
      v57 = GameData_21c97a0;
    }
    GameData_21c97a0 = v57 - 8;
  }
  return result;
}

#pragma GCC visibility pop
