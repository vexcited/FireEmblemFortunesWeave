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
__int64 DramaFile_13e6220_alt1(__int64 result) __asm__("DramaFile_13e6220");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_66cf00_alt1(__int64*) __asm__("GameRoutine_66cf00");
void GameRoutine_66d660_alt1(__int64*) __asm__("GameRoutine_66d660");
void __attribute__((noreturn))
GameRoutine_13e9eb0_alt1() __asm__("GameRoutine_13e9eb0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DramaFile_13e6220(_BYTE* a1);

void DramaFile_13e6220(_BYTE* a1)
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
  _BYTE* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  int v37;
  unsigned __int64 v38;
  int v39;
  __int64 v40;
  signed __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  int* v46;
  unsigned __int64 v47;
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
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _BYTE* v65;
  _QWORD* v66;
  _QWORD* v67;

  if ((a1[248] & 1) != 0) {
    return;
  }
  v1 = *((_QWORD**)a1 + 1);
  if (*((_QWORD**)a1 + 2) == v1) {
    v2 = 0;
  }
  else {
    v2 = *v1 + 16LL;
  }
  v65 = a1;
  v3 = GameData_21c9768;
  v4 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
  if (GameData_21c9770 == GameData_21c9768) {
    v4 = 0;
  }
  v5 = GameData_21c9788 + GameData_21c9780;
  if (v4 == GameData_21c9788 + GameData_21c9780) {
    GameRoutine_66cf00_alt1(&GameData_21c9760);
    a1 = v65;
    v5 = GameData_21c9788 + GameData_21c9780;
    v3 = GameData_21c9768;
  }
  *(_QWORD*)(*(_QWORD*)(v3 + 8 * (v5 >> 9)) + 8 * (v5 & 0x1FF)) = v2;
  ++GameData_21c9788;
  v6 = *((_QWORD*)a1 + 4);
  if (*((_QWORD*)a1 + 5) == v6) {
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
    GameRoutine_66cf00_alt1(&GameData_21c9790);
    a1 = v65;
    v10 = GameData_21c97b8 + GameData_21c97b0;
    v8 = GameData_21c9798;
  }
  *(_QWORD*)(*(_QWORD*)(v8 + 8 * (v10 >> 9)) + 8 * (v10 & 0x1FF)) = v7;
  ++GameData_21c97b8;
  v11 = *((_QWORD**)a1 + 7);
  v66 = *((_QWORD**)a1 + 8);
  if (v11 == v66) {
    goto LABEL_85;
  }
  v12 = GameData_21c97c8;
  v13 = GameData_21c97d0;
  v14 = GameData_21c97e0;
  v15 = GameData_21c97e8;
  while (2) {
    v17 = v13 - v12;
    v67 = v11;
    v18 = *v11;
    v24 = v13 == v12;
    v19 = v15 + v14;
    v20 = (v17 << 6) - 1;
    if (v24) {
      v20 = 0;
    }
    if (v20 == v19) {
      GameRoutine_66d660_alt1(&GameData_21c97c0);
      v12 = GameData_21c97c8;
      v19 = GameData_21c97e8 + GameData_21c97e0;
    }
    *(_QWORD*)(*(_QWORD*)(v12 + 8 * (v19 >> 9)) + 8 * (v19 & 0x1FF)) = v18;
    ++GameData_21c97e8;
    v21 = *(_BYTE**)(v18 + 32);
    if (v21 == nullptr || *v21 == 0) {
      goto LABEL_52;
    }
    v22 = game_HashString_alt1((__int64)v21);
    if (v22 == 0) {
      goto LABEL_50;
    }
    v23 = *(_QWORD*)(GameData_21c9d08 + 96);
    v24 = v23 == 0 || *(_QWORD*)(GameData_21c9d08 + 112) == 0;
    if (v24) {
      goto LABEL_50;
    }
    v25 = v23 - 1;
    if ((v23 & (v23 - 1)) != 0) {
      v26 = v22;
      if (v22 >= v23) {
        v26 = v22 % v23;
      }
    }
    else {
      v26 = v25 & v22;
    }
    v27 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d08 + 88) + 8 * v26);
    if (v27 == nullptr || (v28 = (_QWORD*)*v27) == nullptr) {
    LABEL_50:
      v30 = 0;
      goto LABEL_51;
    }
    if ((v23 & v25) == 0) {
      while (1) {
        v31 = v28[1];
        if (v31 == v22) {
          if (v28[2] == v22) {
            goto LABEL_84;
          }
        }
        else if ((v31 & v25) != v26) {
          goto LABEL_50;
        }
        v28 = (_QWORD*)*v28;
        v30 = 0;
        if (v28 == nullptr) {
          goto LABEL_51;
        }
      }
    }
    while (1) {
      v29 = v28[1];
      if (v29 == v22) {
        break;
      }
      if (v29 >= v23) {
        v29 %= v23;
      }
      if (v29 != v26) {
        goto LABEL_50;
      }
    LABEL_40:
      v28 = (_QWORD*)*v28;
      if (v28 == nullptr) {
        goto LABEL_50;
      }
    }
    if (v28[2] != v22) {
      goto LABEL_40;
    }
  LABEL_84:
    v30 = v28[3];
  LABEL_51:
    *(_QWORD*)(v18 + 40) = v30;
  LABEL_52:
    v32 = *(_QWORD*)(v18 + 24);
    if (v32 != 0) {
      v33 = *(int**)v32;
    }
    else {
      v32 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      v33 = nullptr;
      *(_QWORD*)v32 = 0;
      *(_QWORD*)(v32 + 8) = 0;
      *(_QWORD*)(v32 + 16) = 0;
      *(_QWORD*)(v18 + 24) = v32;
    }
    *(_QWORD*)(v32 + 8) = v33;
    if (*(_WORD*)(v18 + 80) != 0) {
      v34 = 0;
      do {
        v35 = 10000 * *(__int16*)(*(_QWORD*)(v18 + 88) + 2 * v34);
        v36 = v35 + 100 * *(unsigned __int8*)(*(_QWORD*)(v18 + 104) + v34);
        v37 = v35 + 100 * *(unsigned __int8*)(*(_QWORD*)(v18 + 136) + v34) +
              *(unsigned __int8*)(*(_QWORD*)(v18 + 152) + v34);
        v38 = *(_QWORD*)(v32 + 16);
        v39 = v36 + *(unsigned __int8*)(*(_QWORD*)(v18 + 120) + v34);
        if ((unsigned __int64)v33 < v38) {
          *v33 = v39;
          v33[1] = v37;
          v33 += 2;
        }
        else {
          v40 = *(_QWORD*)v32;
          v41 = (signed __int64)v33 - *(_QWORD*)v32;
          v42 = (v41 >> 3) + 1;
          if (v42 >> 61 != 0) {
            GameRoutine_13e9eb0_alt1();
          }
          v43 = v38 - v40;
          if (v43 >> 2 > v42) {
            v42 = v43 >> 2;
          }
          if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
            v44 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v44 = v42;
          }
          if (v44 != 0) {
            if (v44 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v45 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0);
          }
          else {
            v45 = 0;
          }
          v46 = (int*)(v45 + v41);
          v47 = v45 + 8 * v44;
          *v46 = v39;
          v46[1] = v37;
          v48 = v45 + v41 - 8 * (v41 >> 3);
          v33 = (int*)(v45 + v41 + 8);
          memcpy_alt1(v48, v40, v41);
          *(_QWORD*)v32 = v48;
          *(_QWORD*)(v32 + 8) = v33;
          *(_QWORD*)(v32 + 16) = v47;
          if (v40 != 0) {
            v49 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v49 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v40);
          }
        }
        *(_QWORD*)(v32 + 8) = v33;
        ++v34;
      } while (v34 < *(unsigned __int16*)(v18 + 80));
    }
    v12 = GameData_21c97c8;
    v13 = GameData_21c97d0;
    v14 = GameData_21c97e0;
    v50 = GameData_21c97e8;
    if (GameData_21c97d0 == GameData_21c97c8) {
      v51 = 0;
    }
    else {
      v51 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
    }
    v15 = --GameData_21c97e8;
    if ((unsigned __int64)(v51 - (v50 + GameData_21c97e0) + 1) < 0x400) {
      v16 = v67;
    }
    else {
      v52 = *(_QWORD*)(GameData_21c97d0 - 8);
      v16 = v67;
      if (v52 != 0) {
        v53 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v52);
        v12 = GameData_21c97c8;
        v13 = GameData_21c97d0;
        v14 = GameData_21c97e0;
        v15 = GameData_21c97e8;
      }
      v13 -= 8;
      GameData_21c97d0 = v13;
    }
    v11 = v16 + 1;
    if (v11 != v66) {
      continue;
    }
    break;
  }
LABEL_85:
  (*(void (**)(_BYTE*))(*(_QWORD*)v65 + 40LL))(v65);
  v54 = GameData_21c9770;
  v55 = GameData_21c9770 - GameData_21c9768;
  v24 = GameData_21c9770 == GameData_21c9768;
  v65[248] = 1;
  v56 = GameData_21c9788;
  v57 = (v55 << 6) - 1;
  if (v24) {
    v57 = 0;
  }
  --GameData_21c9788;
  if ((unsigned __int64)(v57 - (v56 + GameData_21c9780) + 1) >= 0x400) {
    v58 = *(_QWORD*)(v54 - 8);
    if (v58 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v58);
      v54 = GameData_21c9770;
    }
    GameData_21c9770 = v54 - 8;
  }
  v60 = GameData_21c97a0;
  v61 = GameData_21c97b8;
  v62 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
  if (GameData_21c97a0 == GameData_21c9798) {
    v62 = 0;
  }
  --GameData_21c97b8;
  if ((unsigned __int64)(v62 - (v61 + GameData_21c97b0) + 1) >= 0x400) {
    v63 = *(_QWORD*)(GameData_21c97a0 - 8);
    if (v63 != 0) {
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v63);
      v60 = GameData_21c97a0;
    }
    GameData_21c97a0 = v60 - 8;
  }
}

#pragma GCC visibility pop
