#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64dfe0(void);
__int64 GameRoutine_6e36c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7fcb00(_QWORD, _QWORD);
__int64 GameRoutine_933800(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_93d8e0(void);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cf20(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84daa0(_QWORD, _QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c99a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8a0;
extern __int64* game_map_history_g_ride_pool_ptr[3];
__attribute__((swiftcall)) void GameRoutine_932880(PSEUDO_X8, _QWORD);
void __attribute__((noreturn)) GameRoutine_9337e0(void);
__int64 UnitVariables_6e31a0(__int64 a1, __int64 a2, char a3);
__int64 UnitVariables_931520(__int64 result, __int64* a2, int a3);
__int64 UnitVariables_931c00(unsigned __int8* a1, __int64* a2, int a3);
bool UnitVariables_932770(__int64 a1, __int64 a2);
__int64 GameHr_84cf20(__int64, __int64, char);
__int64 GameRoutine_7fcb00_alt1(__int64, __int64) __asm__("GameRoutine_7fcb00");
bool game_UnitSkillList_Remove(__int64, _WORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 UnitVariables_6e31a0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  int v9;
  bool v11;
  char v12;
  __int64 v13;
  bool v15;
  char v16;
  char v17;
  unsigned int v18;
  unsigned int v19;
  char v20;
  bool v21;
  unsigned int v22;
  unsigned int v23;
  char v24;
  char v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int16 v54;
  struct {
    __int64 v55;
    __int64 v56;
    __int64 v57;
    int v58;
    char gap44_[4];
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
  } v55_;
  struct {
    __int64 v67;
    __int64 v68;
    __int64 v69;
    int v70;
    char gap140_[4];
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
  } v67_;

  v3 = a2;
  if (a2 != 0) {
    if ((a3 & 1) != 0) {
      v5 = *(_QWORD*)(a2 + 400);
      v6 = *(_QWORD*)(a1 + 400);
      v7 = v5 == 0 || v5 == v6;
      if (v7 || *(unsigned __int8*)(v5 + 49) <
                    (unsigned int)*(unsigned __int8*)(v6 + 49)) {
        if (*(_BYTE*)(a2 + 1880) != 0) {
          v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                          8LL * *(unsigned __int8*)(a2 + 1880));
          v9 = *(unsigned __int8*)(v6 + 96);
          if (v8 != 0 && v9 == 2) {
            v13 = *(_QWORD*)(v6 + 112);
            v11 = v13 != 0 &&
                  *(unsigned __int8*)(v8 + 32) == *(unsigned __int8*)(v13 + 32);
            v9 = 2;
          }
          else {
            v11 = false;
          }
        }
        else {
          v9 = *(unsigned __int8*)(v6 + 96);
          v11 = false;
        }
        v12 = *(_BYTE*)(a2 + 1944) != 0 && v9 == 1 || v11;
      }
      else {
        v12 = 1;
      }
    }
    else {
      v12 = 0;
    }
    v15 = *(__int16*)(a1 + 468) < *(__int16*)(a2 + 468) ||
          *(__int16*)(a1 + 470) < *(__int16*)(a2 + 470) ||
          *(__int16*)(a1 + 472) < *(__int16*)(a2 + 472) ||
          *(__int16*)(a1 + 474) < *(__int16*)(a2 + 474) ||
          *(__int16*)(a1 + 476) < *(__int16*)(a2 + 476) ||
          *(__int16*)(a1 + 478) < *(__int16*)(a2 + 478) ||
          *(__int16*)(a1 + 480) < *(__int16*)(a2 + 480) ||
          *(__int16*)(a1 + 482) < *(__int16*)(a2 + 482) ||
          *(__int16*)(a1 + 484) < *(__int16*)(a2 + 484) ||
          *(__int16*)(a1 + 486) < *(__int16*)(a2 + 486) ||
          *(__int16*)(a1 + 488) < *(__int16*)(a2 + 488);
    v16 = v15 | v12;
    v17 = GameRoutine_7fcb00_alt1(a1 + 512, a2 + 512);
    v18 = *(unsigned __int8*)(a1 + 498);
    v19 = *(unsigned __int8*)(v3 + 498);
    v67_.v70 = 0;
    v67_.v68 = 0;
    v67_.v69 = 0;
    v20 = v16 | v17 & 1;
    v67_.v67 = 0;
    v67_.v71 = 0;
    v67_.v72 = 0;
    v21 = v18 >= v19;
    v22 = *(_DWORD*)(a1 + 504);
    v23 = *(_DWORD*)(v3 + 504);
    v67_.v73 = 0;
    v67_.v74 = 0;
    v67_.v75 = 0;
    v67_.v76 = 0;
    v67_.v77 = 0;
    v67_.v78 = 0;
    if (!v21) {
      v20 = 1;
    }
    if (v22 < v23) {
      v24 = 1;
    }
    else {
      v24 = v20;
    }
    GameHr_84cf20((__int64)&v67_.v67, a1 + 1360, 1);
    v25 = GameHr_84cf20((__int64)&v67_.v67, v3 + 1360, 1);
    v26 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v67_.v74 != 0) {
      v27 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v67_.v75 = v67_.v74;
      v28 = 128;
      if (*(_QWORD*)(v27 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v27 + v28, v67_.v74);
    }
    if (v67_.v71 != 0) {
      v29 = *v26;
      v67_.v72 = v67_.v71;
      v30 = 128;
      if (*(_QWORD*)(v29 + 200) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v29 + v30, v67_.v71);
    }
    if (v67_.v67 != 0) {
      v31 = *v26;
      v67_.v68 = v67_.v67;
      v32 = 128;
      if (*(_QWORD*)(v31 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v31 + v32, v67_.v67);
    }
    v67_.v70 = 0;
    v67_.v68 = 0;
    v67_.v69 = 0;
    v67_.v67 = 0;
    v67_.v71 = 0;
    v67_.v72 = 0;
    v67_.v73 = 0;
    v67_.v74 = 0;
    v67_.v75 = 0;
    v67_.v76 = 0;
    v67_.v77 = 0;
    v67_.v78 = 0;
    GameHr_84cf20((__int64)&v67_.v67, a1 + 1552, 1);
    v33 = GameHr_84cf20((__int64)&v67_.v67, v3 + 1552, 1);
    if (v67_.v74 != 0) {
      v34 = *v26;
      v67_.v75 = v67_.v74;
      v35 = 128;
      if (*(_QWORD*)(v34 + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v34 + v35, v67_.v74);
    }
    if (v67_.v71 != 0) {
      v36 = *v26;
      v67_.v72 = v67_.v71;
      v37 = 128;
      if (*(_QWORD*)(v36 + 200) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v36 + v37, v67_.v71);
    }
    if (v67_.v67 != 0) {
      v38 = *v26;
      v67_.v68 = v67_.v67;
      v39 = 128;
      if (*(_QWORD*)(v38 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v38 + v39, v67_.v67);
    }
    v67_.v67 = 0;
    v67_.v71 = 0;
    v67_.v74 = 0;
    v67_.v75 = 0;
    v55_.v55 = 0;
    v55_.v57 = 0;
    v55_.v59 = 0;
    v55_.v61 = 0;
    v55_.v62 = 0;
    v55_.v63 = 0;
    v55_.v64 = 0;
    v67_.v68 = 0;
    v67_.v69 = 0;
    v67_.v70 = 0;
    v67_.v72 = 0;
    v67_.v73 = 0;
    v67_.v77 = 0;
    v67_.v78 = 0;
    v67_.v76 = 0;
    GameHr_84cf20((__int64)&v67_.v67, a1 + 1072, 1);
    v55_.v56 = 0;
    v55_.v58 = 0;
    v55_.v60 = 0;
    v55_.v65 = 0;
    v55_.v66 = 0;
    GameHr_84cf20((__int64)&v55_.v55, v3 + 1072, 1);
    v54 = 64;
    game_UnitSkillList_Remove((__int64)&v55_.v55, &v54);
    v40 = GameHr_84cf20((__int64)&v67_.v67, (__int64)&v55_.v55, 1);
    if (v55_.v62 != 0) {
      v41 = *v26;
      v55_.v63 = v55_.v62;
      v42 = 128;
      if (*(_QWORD*)(v41 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v41 + v42, v55_.v62);
    }
    if (v55_.v59 != 0) {
      v43 = *v26;
      v55_.v60 = v55_.v59;
      v44 = 128;
      if (*(_QWORD*)(v43 + 200) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v43 + v44, v55_.v59);
    }
    if (v55_.v55 != 0) {
      v45 = *v26;
      v55_.v56 = v55_.v55;
      v46 = 128;
      if (*(_QWORD*)(v45 + 200) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v45 + v46, v55_.v55);
    }
    if (v67_.v74 != 0) {
      v47 = *v26;
      v67_.v75 = v67_.v74;
      v48 = 128;
      if (*(_QWORD*)(v47 + 200) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v47 + v48, v67_.v74);
    }
    if (v67_.v71 != 0) {
      v49 = *v26;
      v67_.v72 = v67_.v71;
      v50 = 128;
      if (*(_QWORD*)(v49 + 200) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v49 + v50, v67_.v71);
    }
    LOBYTE(v3) = v24 | v25 & 1 | v33 | v40;
    if (v67_.v67 != 0) {
      v51 = *v26;
      v67_.v68 = v67_.v67;
      v52 = 128;
      if (*(_QWORD*)(v51 + 200) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v51 + v52, v67_.v67);
    }
  }
  return v3 & 1;
}

__int64 UnitVariables_931520(__int64 result, __int64* a2, int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64* i;
  unsigned int v11;
  bool v12;
  __int64 v13;
  _QWORD* v14;
  __int64* j;
  unsigned int v16;
  bool v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int16 v22;
  char* v23;
  char* v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  unsigned int v30;
  bool v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  _QWORD* v35;
  bool v36;
  __int64 v37;
  __int64* v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  unsigned int v42;
  __int16 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  _BYTE* v50;
  unsigned __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  _BYTE* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _BYTE* v58;
  __int64 v59;
  _QWORD* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64* v63;
  unsigned int v64;
  _QWORD* v65;
  unsigned int v66;
  bool v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64* v72;
  unsigned int v73;
  _QWORD* v74;
  unsigned int v75;
  bool v76;
  __int64 v77;
  __int64* v78;
  _QWORD* v79;
  unsigned int v80;
  unsigned int v81;
  bool v82;
  __int64 v83;
  char v84;
  char* v85;
  char* v86;

  if (*(_BYTE*)result == 0) {
    return result;
  }
  v3 = *a2;
  if (*a2 == 0) {
    return result;
  }
  v4 = result;
  v5 = *(unsigned __int8*)(v3 + 48);
  v7 = (_QWORD*)(result + 24);
  v6 = *(__int64**)(result + 24);
  v8 = v7;
  v84 = *(_BYTE*)(v3 + 48);
  if (v6 != nullptr) {
    v9 = v7;
    for (i = v6; i != nullptr; i = (__int64*)i[v13]) {
      v11 = *((unsigned __int8*)i + 26);
      v12 = v11 >= v5;
      v13 = v11 < v5;
      if (v12) {
        v9 = i;
      }
    }
    v8 = v7;
    if (v9 != v7) {
      if (v5 >= *((unsigned __int8*)v9 + 26)) {
        v8 = v9;
      }
      else {
        v8 = v7;
      }
    }
  }
  if (a3 == 0) {
    if (v6 != nullptr && v8 != v7) {
      v14 = v7;
      for (j = v6; j != nullptr; j = (__int64*)j[v18]) {
        v16 = *((unsigned __int8*)j + 26);
        v17 = v16 >= v5;
        v18 = v16 < v5;
        if (v17) {
          v14 = j;
        }
      }
      if (v14 != v7 && v5 >= *((unsigned __int8*)v14 + 26)) {
        v19 = (_QWORD*)v14[1];
        if (v19 != nullptr) {
          do {
            v20 = v19;
            v19 = (_QWORD*)*v19;
          } while (v19 != nullptr);
        }
        else {
          v35 = v14;
          do {
            v20 = (_QWORD*)v35[2];
            v36 = v35 == (_QWORD*)*v20;
            v35 = v20;
          } while (!v36);
        }
        if (*(_QWORD**)(v4 + 16) == v14) {
          *(_QWORD*)(v4 + 16) = v20;
        }
        --*(_QWORD*)(v4 + 32);
        GameRoutine_64dfe0();
        v37 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v14);
      }
    }
    goto LABEL_87;
  }
  if (v8 == v7) {
    v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (*(int*)(v4 + 32) < 5) {
      goto LABEL_76;
    }
    v22 = a3;
    GameRoutine_932880((void*)(&v85), v4);
    v23 = v85;
    v24 = v86;
    if (v86 == v85) {
      v25 = 0;
    }
    else {
      v25 = *(unsigned __int8*)(*((_QWORD*)v86 - 1) + 48LL);
    }
    if (v85 != nullptr) {
      v26 = *v21;
      v86 = v85;
      v27 = 128;
      if (*(_QWORD*)(v26 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(v26 + v27, v85);
    }
    v6 = (__int64*)*v7;
    if (v24 != v23) {
      LOWORD(a3) = v22;
      if (v25 == 255) {
        goto LABEL_76;
      }
      if (v6 == nullptr) {
        v38 = v7;
        v39 = v7;
      LABEL_83:
        v43 = a3;
        v44 = v39;
        v45 = fw_memory_HeapManager_Allocate(*v21, 32, 16, 0);
        *(_BYTE*)(v45 + 26) = v5;
        *(_WORD*)(v45 + 28) = 0;
        v39 = (_QWORD*)v45;
        v46 = v45;
        *(_QWORD*)v45 = 0;
        *(_QWORD*)(v45 + 8) = 0;
        *(_QWORD*)(v45 + 16) = v44;
        *v38 = v45;
        v47 = **(_QWORD**)(v4 + 16);
        if (v47 != 0) {
          *(_QWORD*)(v4 + 16) = v47;
          v46 = *v38;
        }
        fw_containers_BalanceAfterInsert(*(_QWORD*)(v4 + 24), v46);
        LOWORD(a3) = v43;
        ++*(_QWORD*)(v4 + 32);
      LABEL_86:
        *((_WORD*)v39 + 14) = a3;
        goto LABEL_87;
      }
      v28 = v7;
      v29 = (__int64*)*v7;
      do {
        v30 = *((unsigned __int8*)v29 + 26);
        v31 = v30 >= v25;
        v32 = v30 < v25;
        if (v31) {
          v28 = v29;
        }
        v29 = (__int64*)v29[v32];
      } while (v29 != nullptr);
      if (v28 == v7 || v25 < *((unsigned __int8*)v28 + 26)) {
        while (1) {
        LABEL_79:
          while (1) {
            v42 = *((unsigned __int8*)v6 + 26);
            v39 = v6;
            if (v5 >= v42) {
              break;
            }
            v6 = (__int64*)*v6;
            v38 = v39;
            if (*v39 == 0) {
              goto LABEL_83;
            }
          }
          if (v42 >= v5) {
            goto LABEL_86;
          }
          v6 = (__int64*)v6[1];
          if (v6 == nullptr) {
            v38 = v39 + 1;
            goto LABEL_83;
          }
        }
      }
      v33 = (_QWORD*)v28[1];
      if (v33 != nullptr) {
        do {
          v34 = v33;
          v33 = (_QWORD*)*v33;
        } while (v33 != nullptr);
      }
      else {
        v40 = v28;
        do {
          v34 = (_QWORD*)v40[2];
          v36 = v40 == (_QWORD*)*v34;
          v40 = v34;
        } while (!v36);
      }
      if (*(_QWORD**)(v4 + 16) == v28) {
        *(_QWORD*)(v4 + 16) = v34;
      }
      --*(_QWORD*)(v4 + 32);
      GameRoutine_64dfe0();
      v41 = 128;
      if (*(_QWORD*)(*v21 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*v21 + v41, v28);
      v6 = *(__int64**)(v4 + 24);
    }
    LOWORD(a3) = v22;
  LABEL_76:
    v38 = v7;
    v39 = v7;
    if (v6 != nullptr) {
      goto LABEL_79;
    }
    goto LABEL_83;
  }
  *((_WORD*)v8 + 14) = a3;

LABEL_87:
  v48 = *(_QWORD**)(v4 + 16);
  if (v48 == v7) {
    v49 = 0;
    goto LABEL_129;
  }
  v49 = 0;
  v50 = nullptr;
  v51 = 0;
  v52 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  do {
    if ((unsigned __int64)v50 >= v51) {
      v54 = &v50[-v49];
      v55 = (__int64)&v50[-v49 + 1];
      if (v55 < 0) {
        GameRoutine_9337e0();
      }
      if (2 * (v51 - v49) > v55) {
        v55 = 2 * (v51 - v49);
      }
      if (v51 - v49 >= 0x3FFFFFFFFFFFFFFFLL) {
        v56 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v56 = v55;
      }
      if (v56 != 0) {
        v57 = fw_memory_HeapManager_Allocate(*v52, v56, 16, 0);
      }
      else {
        v57 = 0;
      }
      v51 = v57 + v56;
      v58 = &v50[-v49];
      v54[v57] = *((_BYTE*)v48 + 26);
      v50 = &v54[v57 + 1];
      memcpy(v57, v49, v58);
      if (v49 != 0) {
        v59 = 128;
        if (*(_QWORD*)(*v52 + 200LL) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free(*v52 + v59, v49);
      }
      v49 = v57;
      v53 = (_QWORD*)v48[1];
      if (v53 == nullptr) {
        do {
        LABEL_109:
          v60 = (_QWORD*)v48[2];
          v36 = v48 == (_QWORD*)*v60;
          v48 = v60;
        } while (!v36);
        goto LABEL_89;
      }
    }
    else {
      *v50++ = *((_BYTE*)v48 + 26);
      v53 = (_QWORD*)v48[1];
      if (v53 == nullptr) {
        goto LABEL_109;
      }
    }
    do {
      v60 = v53;
      v53 = (_QWORD*)*v53;
    } while (v53 != nullptr);
  LABEL_89:
    v48 = v60;
  } while (v60 != v7);
  v85 = &v84;
  v86 = (char*)v4;
  if ((_BYTE*)v49 != v50) {
    v61 = (unsigned __int64)&v50[-v49];
    GameRoutine_933800(v49, v50, &v85,
                       (2 * __clz((unsigned __int64)&v50[-v49])) ^ 0x7E, 1);
    if (v50 - 1 == (_BYTE*)v49) {
      v62 = 0;
    }
    else {
      v62 = 0;
      do {
        v72 = (__int64*)*v7;
        if (*v7 != 0) {
          v73 = *(unsigned __int8*)(v49 + v62);
          v74 = v7;
          do {
            v75 = *((unsigned __int8*)v72 + 26);
            v76 = v75 >= v73;
            v77 = v75 < v73;
            if (v76) {
              v74 = v72;
            }
            v72 = (__int64*)v72[v77];
          } while (v72 != nullptr);
          if (v74 != v7 && v73 >= *((unsigned __int8*)v74 + 26)) {
            *((_WORD*)v74 + 14) =
                *((_WORD*)v74 + 14) & 0xFFF | ((_WORD)v62 << 12);
          }
        }
        v78 = (__int64*)*v7;
        if (*v7 != 0) {
          v79 = v7;
          v80 = *(unsigned __int8*)(v49 + (v62 | 1));
          do {
            v81 = *((unsigned __int8*)v78 + 26);
            v82 = v81 >= v80;
            v83 = v81 < v80;
            if (v82) {
              v79 = v78;
            }
            v78 = (__int64*)v78[v83];
          } while (v78 != nullptr);
          if (v79 != v7 && v80 >= *((unsigned __int8*)v79 + 26)) {
            *((_WORD*)v79 + 14) = *((_WORD*)v79 + 14) & 0xFFF |
                                  (((unsigned __int16)v62 | 1) << 12);
          }
        }
        v62 += 2;
      } while (v62 != (v61 & 0xFFFFFFFFFFFFFFFELL));
    }
    if ((v61 & 1) != 0) {
      v63 = (__int64*)*v7;
      if (*v7 != 0) {
        v64 = *(unsigned __int8*)(v49 + v62);
        v65 = v7;
        do {
          v66 = *((unsigned __int8*)v63 + 26);
          v67 = v66 >= v64;
          v68 = v66 < v64;
          if (v67) {
            v65 = v63;
          }
          v63 = (__int64*)v63[v68];
        } while (v63 != nullptr);
        if (v65 != v7 && v64 >= *((unsigned __int8*)v65 + 26)) {
          *((_WORD*)v65 + 14) =
              *((_WORD*)v65 + 14) & 0xFFF | ((_WORD)v62 << 12);
        }
      }
    }
  }

LABEL_129:
  if (v49 != 0) {
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v69,
                                  v49);
  }
  result = v4 + 3;
  if (*(_BYTE*)(v4 + 3) != 0) {
    result = game_UnitPool_Get(result);
    if (result != 0) {
      v70 = result;
      result = GameRoutine_93d8e0();
      if ((result & 0x80000000) == 0) {
        v71 = *(_QWORD*)(*(_QWORD*)(*game_map_history_g_ride_pool_ptr[0] + 16) +
                         120LL) +
              ((unsigned __int64)(unsigned int)result << 6);
        if (v71 != v4) {
          UnitVariables_932770(v71, v4);
        }
        result = v70 + 1880;
        if (v70 + 1880 != v4) {
          return UnitVariables_932770(result, v4);
        }
      }
    }
  }
  return result;
}

__int64 UnitVariables_931c00(unsigned __int8* a1, __int64* a2, int a3)
{
  unsigned __int8* v3;
  unsigned int v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  __int64 v8;
  int v9;
  unsigned __int8* v12;
  unsigned int v13;
  unsigned __int8* v14;
  unsigned int v15;
  bool v16;
  __int64 v17;
  int v18;

  if (a3 == 0 ||
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a1) +
                109LL) == 0) {
    return 0;
  }
  if (*a2 == 0) {
    goto LABEL_15;
  }
  v3 = *((unsigned __int8**)a1 + 3);
  if (v3 == nullptr) {
    goto LABEL_15;
  }
  v4 = *(unsigned __int8*)(*a2 + 48);
  v5 = a1 + 24;
  do {
    v6 = v3[26];
    v7 = v6 >= v4;
    if (v6 >= v4) {
      v8 = 0;
    }
    else {
      v8 = 8;
    }
    if (v7) {
      v5 = v3;
    }
    v3 = *(unsigned __int8**)&v3[v8];
  } while (v3 != nullptr);
  if (v5 != a1 + 24 && v4 >= v5[26]) {
    v9 = *((_WORD*)v5 + 14) & 0xFFF;
  }
  else {
  LABEL_15:
    v9 = 0;
  }
  UnitVariables_931520((__int64)a1, a2, v9 + a3);
  if (*a2 == 0) {
    goto LABEL_28;
  }
  v12 = *((unsigned __int8**)a1 + 3);
  if (v12 == nullptr) {
    goto LABEL_28;
  }
  v13 = *(unsigned __int8*)(*a2 + 48);
  v14 = a1 + 24;
  do {
    v15 = v12[26];
    v16 = v15 >= v13;
    if (v15 >= v13) {
      v17 = 0;
    }
    else {
      v17 = 8;
    }
    if (v16) {
      v14 = v12;
    }
    v12 = *(unsigned __int8**)&v12[v17];
  } while (v12 != nullptr);
  if (v14 != a1 + 24 && v13 >= v14[26]) {
    v18 = *((_WORD*)v14 + 14) & 0xFFF;
  }
  else {
  LABEL_28:
    v18 = 0;
  }
  return (unsigned int)(v18 - v9);
}

bool UnitVariables_932770(__int64 a1, __int64 a2)
{
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;

  v4 = *(unsigned __int8*)(a1 + 3);
  v3 = a1 + 3;
  if (v4 != 0) {
    v6 = game_UnitPool_Get(v3);
  }
  else {
    v6 = 0;
  }
  if (*(_BYTE*)(a2 + 3) != 0) {
    v7 = game_UnitPool_Get(a2 + 3);
    if (v6 != v7) {
      return v6 == v7;
    }
  }
  else {
    v7 = 0;
    if (v6 != 0) {
      return v6 == v7;
    }
  }
  *(_BYTE*)a1 = *(_BYTE*)a2;
  *(_BYTE*)(a1 + 1) = *(_BYTE*)(a2 + 1);
  *(_BYTE*)(a1 + 2) = *(_BYTE*)(a2 + 2);
  *(_DWORD*)(a1 + 8) = *(_DWORD*)(a2 + 8);
  if (a1 != a2) {
    v8 = *(unsigned __int8*)(a2 + 40);
    if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
      v11 = (v8 & 1) == 0;
      v12 = v8 >> 1;
      if (v11) {
        v13 = a2 + 41;
      }
      else {
        v13 = *(_QWORD*)(a2 + 56);
      }
      if (v11) {
        v14 = v12;
      }
      else {
        v14 = *(_QWORD*)(a2 + 48);
      }
      SpineModel_64dde0(a1 + 40, v13, v14);
    }
    else if ((v8 & 1) != 0) {
      GameRoutine_64df20(a1 + 40, *(_QWORD*)(a2 + 56), *(_QWORD*)(a2 + 48));
    }
    else {
      v9 = *(_QWORD*)(a2 + 40);
      v10 = *(_QWORD*)(a2 + 56);
      *(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 48);
      *(_QWORD*)(a1 + 56) = v10;
      *(_QWORD*)(a1 + 40) = v9;
    }
    GameRoutine_6e36c0(a1 + 16, *(_QWORD*)(a2 + 16), a2 + 24);
  }
  return v6 == v7;
}

#pragma GCC visibility pop
