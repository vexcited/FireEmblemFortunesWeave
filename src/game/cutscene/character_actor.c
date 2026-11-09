#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 GameRoutine_10758f0(_QWORD);
__int64 GameRoutine_1075d50(_QWORD, _QWORD);
__int64 GameRoutine_110b040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17fc340(__int64, __int64, _QWORD*);
__int64 GameRoutine_17fe9d0(__int64, __int64*, unsigned __int8*, char);
__int64 GameRoutine_17fede0(__int64, __int64*, unsigned __int8*, char, char);
__int64 GameRoutine_17ff8a0(__int64 result);
__int64 GameRoutine_1805160(_QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_ce3010(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Model_a66700(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212eaa0;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN* GameData_212eda0;
extern _UNKNOWN* GameData_212fa30;
extern _UNKNOWN* GameData_212fef8;
extern _UNKNOWN* GameData_212ff08;
extern __int64 (*game_cutscene_CharacterActor_vtable[])();
extern __int64 GameData_2235618;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212deb0;
extern int* GameData_212df08;
extern int* GameData_212ea98;
extern int* GameData_212ed88;
extern int* GameData_212ed98;
extern int* GameData_212fa28;
extern int* GameData_212fef0;
extern int* GameData_212ff00;
void __attribute__((noreturn)) GameRoutine_1812bf0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 CharacterActor_Destructor(_QWORD* a1);
__int64 CharacterActor_1804600(_QWORD* a1, _QWORD* a2, __int64 a3);
__int64 CharacterActor_Unknown2(__int64 result);
__int64 CharacterActor_18055a0(__int64 a1);
__int64 CharacterActor_1805680(__int64 a1, _QWORD* a2, unsigned int* a3);
bool CharacterActor_Unknown3(__int64 a1);
__int64 CharacterActor_Unknown7(__int64 result);

__int64 CharacterActor_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
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
  __int64 result;

  *a1 = game_cutscene_CharacterActor_vtable;
  if (a1[33] != 0) {
    GameRoutine_a867a0(a1 + 33);
    a1[33] = 0;
  }
  a1[34] = 0;
  a1[35] = 0;
  v2 = a1[39];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[40] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v2);
  }
  v6 = a1[36];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[37] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = a1[30];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[31] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = a1[27];
  if (v12 != 0) {
    v13 = a1[28];
    if (v12 == v13) {
      goto LABEL_22;
    }
    do {
      v14 = *(_QWORD*)(v13 - 8);
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak(v14);
      }
      v13 -= 16;
    } while (v13 != v12);
    v15 = a1[27];
    a1[28] = v12;
    v12 = v15;
    if (v15 != 0) {
    LABEL_22:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v12);
    }
  }
  v17 = a1[24];
  if (v17 != 0) {
    v18 = *(_QWORD*)v3;
    a1[25] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v20 = a1[21];
  if (v20 != 0) {
    v21 = a1[22];
    if (v20 == v21) {
      goto LABEL_36;
    }
    do {
      v22 = *(_QWORD*)(v21 - 8);
      if (v22 != 0) {
        std___1___shared_weak_count___release_weak(v22);
      }
      v21 -= 16;
    } while (v21 != v20);
    v23 = a1[21];
    a1[22] = v20;
    v20 = v23;
    if (v23 != 0) {
    LABEL_36:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24, v20);
    }
  }
  v25 = a1[18];
  if (v25 != 0) {
    v26 = *(_QWORD*)v3;
    a1[19] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(v26 + v27, v25);
  }
  v28 = a1[15];
  if (v28 != 0) {
    v29 = a1[16];
    if (v28 == v29) {
      goto LABEL_50;
    }
    do {
      v30 = *(_QWORD*)(v29 - 8);
      if (v30 != 0) {
        std___1___shared_weak_count___release_weak(v30);
      }
      v29 -= 16;
    } while (v29 != v28);
    v31 = a1[15];
    a1[16] = v28;
    v28 = v31;
    if (v31 != 0) {
    LABEL_50:
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v32, v28);
    }
  }
  v33 = a1[12];
  if (v33 != 0) {
    v34 = *(_QWORD*)v3;
    a1[13] = v33;
    v35 = 128;
    if (*(_QWORD*)(v34 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(v34 + v35, v33);
  }
  v36 = a1[9];
  if (v36 != 0) {
    v37 = a1[10];
    if (v36 == v37) {
      goto LABEL_64;
    }
    do {
      v38 = *(_QWORD*)(v37 - 8);
      if (v38 != 0) {
        std___1___shared_weak_count___release_weak(v38);
      }
      v37 -= 16;
    } while (v37 != v36);
    v39 = a1[9];
    a1[10] = v36;
    v36 = v39;
    if (v39 != 0) {
    LABEL_64:
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v40, v36);
    }
  }
  v41 = a1[6];
  if (v41 != 0) {
    v42 = *(_QWORD*)v3;
    a1[7] = v41;
    v43 = 128;
    if (*(_QWORD*)(v42 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(v42 + v43, v41);
  }
  v44 = a1[3];
  if (v44 != 0) {
    v45 = a1[4];
    if (v44 == v45) {
      goto LABEL_88;
    }
    do {
      v46 = *(_QWORD*)(v45 - 8);
      *(_QWORD*)(v45 - 8) = 0;
      if (v46 != 0) {
        GameRoutine_10758f0(v46 + 8);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v47, v46);
      }
      v48 = *(_QWORD*)(v45 - 16);
      *(_QWORD*)(v45 - 16) = 0;
      if (v48 != 0) {
        GameRoutine_10758f0(v48 + 8);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v49, v48);
      }
      v50 = *(_QWORD*)(v45 - 24);
      if (v50 != 0) {
        std___1___shared_weak_count___release_weak(v50);
      }
      v45 -= 32;
    } while (v45 != v44);
    v51 = a1[3];
    a1[4] = v44;
    v44 = v51;
    if (v51 != 0) {
    LABEL_88:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v52, v44);
    }
  }
  result = a1[2];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterActor_1804600(_QWORD* a1, _QWORD* a2, __int64 a3)
{
  int v3;
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  char* v28;
  signed __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  __int64 v37;
  char* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 result;
  __int64 v49;
  float v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  unsigned __int8 v58[16];
  __int64 v59;
  _DWORD v60[8];
  _DWORD* v61;

  v3 = *(unsigned __int8*)(a3 + 32);
  v4 = a2[1];
  v54 = *a2;
  v55 = v4;
  if (v4 != 0 &&
      (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                 memory_order_relaxed),
       (v8 = a2[1]) != 0) &&
      (v9 = std___1___shared_weak_count_lock(v8)) != 0) {
    v10 = *a2;
    v56 = v9;
  }
  else {
    v56 = 0;
    v10 = 0;
  }
  v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       80, 16, 0);
  *(_WORD*)v58 = 0;
  *(_BYTE*)v12 = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_DWORD*)(v12 + 8) = -1;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  v13 = GameRoutine_17fe9d0(v12 + 8, (__int64*)(v10 + 32), v58, v3 == 2);
  *(_BYTE*)v12 = v13 & 1;
  if ((v13 & 1) != 0) {
    v61 = nullptr;
    if ((GameRoutine_1075d50(v12 + 8, v60) & 1) != 0 && GameData_2235618 != 0) {
      GameRoutine_110b040(GameData_2235618, v12 + 16, v12 + 64);
    }
    if (v61 == v60) {
      v14 = 32;
      goto LABEL_14;
    }
    if (v61 != nullptr) {
      v14 = 40;
    LABEL_14:
      (*(void (**)(void))(*(_QWORD*)v61 + v14))();
    }
  }
  if ((v58[0] & 1) != 0 && v59 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*v11 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v15, v59);
  }
  v16 = a2[1];
  v57 = a2;
  if (v16 != 0) {
    v17 = std___1___shared_weak_count_lock(v16);
    if (v17 != 0) {
      v18 = *a2;
    }
    else {
      v18 = 0;
    }
  }
  else {
    v18 = 0;
    v17 = 0;
  }
  v19 = *(_BYTE*)(a3 + 34);
  v20 = fw_memory_HeapManager_Allocate(*v11, 80, 16, 0);
  *(_BYTE*)v20 = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v20 + 32) = 0;
  v58[0] = 10;
  *(_QWORD*)(v20 + 40) = 0;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  strcpy((char*)&v58[1], "_Face");
  *(_DWORD*)(v20 + 8) = -1;
  v21 = GameRoutine_17fede0(v20 + 8, (__int64*)(v18 + 32), v58, v19, v3 == 2);
  *(_BYTE*)v20 = v21 & 1;
  if ((v21 & 1) != 0) {
    v61 = nullptr;
    if ((GameRoutine_1075d50(v20 + 8, v60) & 1) != 0 && GameData_2235618 != 0) {
      GameRoutine_110b040(GameData_2235618, v20 + 16, v20 + 64);
    }
    v21 = (__int64)v61;
    if (v61 == v60) {
      v22 = 32;
      goto LABEL_33;
    }
    if (v61 != nullptr) {
      v22 = 40;
    LABEL_33:
      v21 = (*(__int64 (**)(void))(*(_QWORD*)v61 + v22))();
    }
  }
  if ((v58[0] & 1) != 0 && v59 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*v11 + 200LL) == 0) {
      v23 = 56;
    }
    v21 = nn_mem_StandardAllocator_Free(*v11 + v23, v59);
  }
  v24 = v57;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    v21 = std___1___shared_weak_count___release_weak(v17);
  }
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    v21 = std___1___shared_weak_count___release_weak(v56);
  }
  v26 = (char*)a1[4];
  v25 = a1[5];
  if ((unsigned __int64)v26 >= v25) {
    v28 = (char*)a1[3];
    v29 = v26 - v28;
    v30 = (v26 - v28) >> 5;
    v31 = v30 + 1;
    if ((unsigned __int64)(v30 + 1) >> 59 != 0) {
      GameRoutine_1812bf0(v21);
    }
    v32 = v25 - (_QWORD)v28;
    if (v32 >> 4 > v31) {
      v31 = v32 >> 4;
    }
    if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFE0LL) {
      v33 = 0x7FFFFFFFFFFFFFFLL;
    }
    else {
      v33 = v31;
    }
    if (v33 != 0) {
      if (v33 >> 59 != 0) {
        GameRoutine_60a210(v21);
      }
      v34 = fw_memory_HeapManager_Allocate(*v11, 32 * v33, 16, 0);
      v28 = (char*)a1[3];
      v26 = (char*)a1[4];
      v30 = (v26 - v28) >> 5;
    }
    else {
      v34 = 0;
    }
    v35 = (_QWORD*)(v34 + v29);
    v36 = v34 + 32 * v33;
    v35[2] = v12;
    v35[3] = v20;
    v37 = v34 + v29 - 32 * v30;
    v27 = v34 + v29 + 32;
    *v35 = v54;
    v35[1] = v55;
    if (v28 != v26) {
      v38 = v28;
      v39 = (_QWORD*)v37;
      do {
        *v39 = *(_QWORD*)v38;
        v39[1] = *((_QWORD*)v38 + 1);
        *(_QWORD*)v38 = 0;
        *((_QWORD*)v38 + 1) = 0;
        v40 = *((_QWORD*)v38 + 2);
        *((_QWORD*)v38 + 2) = 0;
        v39[2] = v40;
        v41 = *((_QWORD*)v38 + 3);
        *((_QWORD*)v38 + 3) = 0;
        v38 += 32;
        v39[3] = v41;
        v39 += 4;
      } while (v38 != v26);
      do {
        v42 = *((_QWORD*)v28 + 3);
        *((_QWORD*)v28 + 3) = 0;
        if (v42 != 0) {
          GameRoutine_10758f0(v42 + 8);
          if (*(_QWORD*)(*v11 + 200LL) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v43, v42);
        }
        v44 = *((_QWORD*)v28 + 2);
        *((_QWORD*)v28 + 2) = 0;
        if (v44 != 0) {
          GameRoutine_10758f0(v44 + 8);
          if (*(_QWORD*)(*v11 + 200LL) != 0) {
            v45 = 128;
          }
          else {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v45, v44);
        }
        v46 = *((_QWORD*)v28 + 1);
        if (v46 != 0) {
          std___1___shared_weak_count___release_weak(v46);
        }
        v28 += 32;
      } while (v28 != v26);
      v28 = (char*)a1[3];
      v24 = v57;
    }
    a1[3] = v37;
    a1[4] = v27;
    a1[5] = v36;
    if (v28 != nullptr) {
      v47 = 128;
      if (*(_QWORD*)(*v11 + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v47, v28);
    }
  }
  else {
    v27 = (__int64)(v26 + 32);
    *((_QWORD*)v26 + 2) = v12;
    *((_QWORD*)v26 + 3) = v20;
    *(_QWORD*)v26 = v54;
    *((_QWORD*)v26 + 1) = v55;
  }
  a1[4] = v27;
  result = std___1___shared_weak_count_lock(v24[1]);
  v49 = result;
  v50 = *(float*)(*v24 + 8LL);
  v52 = a1[6];
  v51 = a1[7];
  v53 = a1 + 6;
  *(float*)v60 = v50;
  if (v52 == v51 || *(float*)(v51 - 4) <= v50) {
    result = AnimCtrlModule_a78450(v53, v60);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    return std___1___shared_weak_count___release_weak(v49);
  }
  return result;
}

__int64 CharacterActor_Unknown2(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  atomic_uchar* v8;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int8 explicit;
  int* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8 v28;
  int* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned __int8 v34;
  int* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  atomic_uchar* v55;
  int v56;
  __int64 v57;

  v1 = *(_DWORD*)(result + 336);
  v2 = result;
  if (v1 > 2) {
    if (v1 == 3) {
      v20 = *(_QWORD*)(result + 264);
      if (v20 != 0) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212deb8, memory_order_acquire);
        v22 = GameData_212deb0;
        if ((explicit & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire(GameData_212deb8) != 0) {
          *v22 = wld_Crc32(0, "CharacterBuilder", 16);
          __cxa_guard_release(GameData_212deb8);
        }
        v23 = *(_QWORD*)(v20 + 512);
        v24 = v23;
        while (v24 != *(_QWORD*)(v20 + 504)) {
          v25 = *(_DWORD*)(v24 - 16);
          v24 -= 16;
          v23 -= 16;
          if (v25 == *v22) {
            if (*(_QWORD*)(v20 + 512) != v23) {
              v26 = *(_QWORD*)(v23 + 8);
              if (v26 != 0) {
                *(_QWORD*)(v2 + 272) = *(_QWORD*)(v26 + 408);
                v27 = *(_QWORD*)(v26 + 416);
                *(_QWORD*)(v2 + 280) = v27;
                if (v27 != 0) {
                  v28 = atomic_load_explicit(
                      (atomic_uchar* volatile)GameData_212ed90,
                      memory_order_acquire);
                  v29 = GameData_212ed88;
                  if ((v28 & 1) == 0 && (unsigned int)__cxa_guard_acquire(
                                            GameData_212ed90) != 0) {
                    *v29 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
                    __cxa_guard_release(GameData_212ed90);
                  }
                  v30 = *(_QWORD*)(v27 + 512);
                  v31 = v30;
                  while (v31 != *(_QWORD*)(v27 + 504)) {
                    v32 = *(_DWORD*)(v31 - 16);
                    v31 -= 16;
                    v30 -= 16;
                    if (v32 == *v29) {
                      if (*(_QWORD*)(v27 + 512) != v30 &&
                          *(_QWORD*)(v30 + 8) != 0) {
                        goto LABEL_55;
                      }
                      break;
                    }
                  }
                  v33 = *(_QWORD*)(v2 + 280);
                  v34 = atomic_load_explicit(
                      (atomic_uchar* volatile)GameData_212df10,
                      memory_order_acquire);
                  v35 = GameData_212df08;
                  if ((v34 & 1) == 0 && (unsigned int)__cxa_guard_acquire(
                                            GameData_212df10) != 0) {
                    *v35 = wld_Crc32(0, "ModelModule", 11);
                    __cxa_guard_release(GameData_212df10);
                  }
                  v36 = *(_QWORD*)(v33 + 512);
                  v37 = v36;
                  do {
                    v38 = *(_DWORD*)(v37 - 16);
                    v37 -= 16;
                    v36 -= 16;
                  } while (v38 != *v35);
                  v39 = *(_QWORD*)(v2 + 280);
                  v57 = *(_QWORD*)(*(_QWORD*)(v36 + 8) + 24LL);
                  v56 = 1;
                  CharacterActor_1805680(v39, &v57, &v56);
                }
              }
            }
            break;
          }
        }
      }
    LABEL_55:
      GameRoutine_17ff8a0(*(_QWORD*)(v2 + 272));
      result = GameRoutine_17ff8a0(*(_QWORD*)(v2 + 280));
      v40 = *(_QWORD*)(v2 + 264);
      if (v40 != 0) {
        result = std___1___shared_weak_count_lock(*(_QWORD*)(v2 + 16));
        v41 = *(_QWORD*)(v2 + 8);
        v42 = result;
        v43 = *(unsigned __int8*)(v41 + 24);
        if ((v43 & 1) != 0) {
          v44 = *(_QWORD*)(v41 + 32);
        }
        else {
          v44 = v43 >> 1;
        }
        if (v44 != 0) {
          v45 = v41 + 25;
          v46 = *(_QWORD*)(v41 + 40);
          if ((v43 & 1) != 0) {
            v47 = v46;
          }
          else {
            v47 = v45;
          }
          if (v44 >= 0xFF) {
            v48 = 255;
          }
          else {
            v48 = v44;
          }
          result = memmove(v40 + 16, v47, v48);
        }
        *(_QWORD*)(v40 + 272) = v44;
        *(_BYTE*)(v40 + 16 + v44) = 0;
        if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
          result = std___1___shared_weak_count___release_weak(v42);
        }
      }
      v19 = 4;
      goto LABEL_91;
    }
    if (v1 != 4) {
      return result;
    }
    v7 = *(_QWORD*)(result + 272);
    v8 = (atomic_uchar*)GameData_212eaa0;
    v9 = GameData_212ea98;
    if (v7 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212eaa0,
                                memory_order_acquire) &
           1) == 0) {
        v55 = v8;
        result = __cxa_guard_acquire(GameData_212eaa0);
        v8 = v55;
        if ((_DWORD)result != 0) {
          *v9 = wld_Crc32(0, "MaterialAnimModule", 18);
          result = __cxa_guard_release(GameData_212eaa0);
          v8 = v55;
        }
      }
      v10 = *(_QWORD*)(v7 + 512);
      v11 = v10;
      do {
        if (v11 == *(_QWORD*)(v7 + 504)) {
          v7 = 0;
          goto LABEL_72;
        }
        v12 = *(_DWORD*)(v11 - 16);
        v11 -= 16;
        v10 -= 16;
      } while (v12 != *v9);
      if (*(_QWORD*)(v7 + 512) != v10) {
        v7 = *(_QWORD*)(v10 + 8);
        v13 = *(_QWORD*)(v2 + 280);
        if (v13 != 0) {
          goto LABEL_73;
        }
        goto LABEL_80;
      }
      v7 = 0;
      v13 = *(_QWORD*)(v2 + 280);
      if (v13 == 0) {
      LABEL_80:
        v52 = 0;
      LABEL_81:
        v53 = *(_QWORD*)(v2 + 24);
        v54 = *(_QWORD*)(v2 + 32);
        if (v53 != v54) {
          if (v7 != 0) {
            if (v52 != 0) {
              do {
                GameRoutine_17fc340(v2 + 288, v7,
                                    (_QWORD*)(*(_QWORD*)(v53 + 16) + 8LL));
                result = GameRoutine_17fc340(
                    v2 + 312, v52, (_QWORD*)(*(_QWORD*)(v53 + 24) + 8LL));
                v53 += 32;
              } while (v53 != v54);
            }
            else {
              do {
                result = GameRoutine_17fc340(
                    v2 + 288, v7, (_QWORD*)(*(_QWORD*)(v53 + 16) + 8LL));
                v53 += 32;
              } while (v53 != v54);
            }
          }
          else if (v52 != 0) {
            do {
              result = GameRoutine_17fc340(
                  v2 + 312, v52, (_QWORD*)(*(_QWORD*)(v53 + 24) + 8LL));
              v53 += 32;
            } while (v53 != v54);
          }
        }
        v19 = 5;
      LABEL_91:
        *(_DWORD*)(v2 + 336) = v19;
        return result;
      }
    }
    else {
    LABEL_72:
      v13 = *(_QWORD*)(v2 + 280);
      if (v13 == 0) {
        goto LABEL_80;
      }
    }
  LABEL_73:
    if ((atomic_load_explicit(v8, memory_order_acquire) & 1) == 0) {
      result = __cxa_guard_acquire(GameData_212eaa0);
      if ((_DWORD)result != 0) {
        *v9 = wld_Crc32(0, "MaterialAnimModule", 18);
        result = __cxa_guard_release(GameData_212eaa0);
      }
    }
    v49 = *(_QWORD*)(v13 + 512);
    v50 = v49;
    while (v50 != *(_QWORD*)(v13 + 504)) {
      v51 = *(_DWORD*)(v50 - 16);
      v50 -= 16;
      v49 -= 16;
      if (v51 == *v9) {
        if (*(_QWORD*)(v13 + 512) == v49) {
          goto LABEL_80;
        }
        v52 = *(_QWORD*)(v49 + 8);
        goto LABEL_81;
      }
    }
    goto LABEL_80;
  }
  if (v1 != 1) {
    if (v1 != 2) {
      return result;
    }
    v3 = *(_QWORD*)(result + 24);
    v4 = *(_QWORD*)(result + 32);
    while (v3 != v4) {
      v5 = *(_QWORD*)(v3 + 16);
      if (*(_BYTE*)v5 == 1) {
        result = *(_QWORD*)(v5 + 64);
        if (result == 0) {
          return result;
        }
        if (*(_BYTE*)(result + 165) != 1) {
          return result;
        }
        result = GameRoutine_ad7390(result);
        if ((result & 1) == 0) {
          return result;
        }
      }
      v6 = *(_QWORD*)(v3 + 24);
      if (*(_BYTE*)v6 == 1) {
        result = *(_QWORD*)(v6 + 64);
        if (result == 0) {
          return result;
        }
        if (*(_BYTE*)(result + 165) != 1) {
          return result;
        }
        result = GameRoutine_ad7390(result);
        if ((result & 1) == 0) {
          return result;
        }
      }
      v3 += 32;
    }
    v19 = 3;
    goto LABEL_91;
  }
  v14 = *(_QWORD*)(result + 264);
  if (v14 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire(GameData_212deb8);
      if ((_DWORD)result != 0) {
        *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 16);
        result = __cxa_guard_release(GameData_212deb8);
      }
    }
    v15 = *(_QWORD*)(v14 + 512);
    v16 = v15;
    while (v16 != *(_QWORD*)(v14 + 504)) {
      v17 = *(_DWORD*)(v16 - 16);
      v16 -= 16;
      v15 -= 16;
      if (v17 == *GameData_212deb0) {
        if (*(_QWORD*)(v14 + 512) == v15) {
          return result;
        }
        v18 = *(_QWORD*)(v15 + 8);
        if (v18 == 0 || (*(_BYTE*)(v18 + 342) & 1) == 0) {
          return result;
        }
        if (*(_QWORD*)(v2 + 216) != *(_QWORD*)(v2 + 224)) {
          result = GameRoutine_1805160(*(_QWORD*)(v2 + 264));
        }
        v19 = 2;
        goto LABEL_91;
      }
    }
  }
  return result;
}

__int64 CharacterActor_18055a0(__int64 a1)
{
  unsigned __int8 explicit;
  int* v2;
  int v3;
  __int64 v4;
  __int64 i;
  int v6;
  int v8;
  __int64 v9;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v2 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v9 = a1;
    v8 = __cxa_guard_acquire(GameData_212ed90);
    v2 = GameData_212ed88;
    a1 = v9;
    if (v8 != 0) {
      *GameData_212ed88 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
      __cxa_guard_release(GameData_212ed90);
      v2 = GameData_212ed88;
      a1 = v9;
    }
  }
  v3 = *v2;
  v4 = *(_QWORD*)(a1 + 512);
  for (i = v4; i != *(_QWORD*)(a1 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == v3) {
      if (*(_QWORD*)(a1 + 512) != v4) {
        return *(_QWORD*)(v4 + 8);
      }
      return 0;
    }
  }
  return 0;
}

__int64 CharacterActor_1805680(__int64 a1, _QWORD* a2, unsigned int* a3)
{
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8 explicit;
  int* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  bool v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  int v50;
  __int64 v51;

  nn_os_LockMutex(GameData_212df28);
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v8 = GameRoutine_ce3010(v7, a1, *a2, *a3, 4);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v10 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v8 = __cxa_guard_acquire(GameData_212ed90);
    if ((_DWORD)v8 != 0) {
      *v10 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
      v8 = __cxa_guard_release(GameData_212ed90);
    }
  }
  v11 = *v10;
  v12 = *(_QWORD*)(a1 + 504);
  v13 = *(_QWORD*)(a1 + 512);
  v14 = v13;
  v50 = v11;
  v51 = v7;
  while (v14 != v12) {
    v15 = *(_DWORD*)(v14 - 16);
    v14 -= 16;
    if (v15 == v11) {
      if ((*(_BYTE*)(v7 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v12 == v13 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v12) <= 0x6F) {
    v16 = fw_memory_HeapManager_Allocate(*v6, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v16;
    *(_QWORD*)(a1 + 512) = v16;
    *(_QWORD*)(a1 + 520) = v16 + 112;
    if (v13 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v17, v12);
    }
  }
  v8 = GameRoutine_98f140(a1 + 504, &v50);
  if ((*(_BYTE*)(v7 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v7 + 16) = 1;
    *(_BYTE*)(v7 + 17) &= ~2u;
    *(_BYTE*)(v7 + 18) &= ~2u;
    *(_BYTE*)(v7 + 19) &= ~2u;
    *(_BYTE*)(v7 + 20) &= ~2u;
    v18 = *(_BYTE**)(v7 + 8);
    v18[632] = 0;
    v18[664] = 0;
    v18[696] = 0;
    v18[728] = 0;
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7);
    v19 = *(_BYTE**)(v7 + 8);
    v20 = v19[300] == 3 && v19[301] == 3;
    if (v20 || v19[302] == 1) {
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 72LL))(v7);
    }
  }

LABEL_20:
  v21 = *(__int64**)(a1 + 536);
  v22 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v21 >= v22) {
    v24 = *(_QWORD*)(a1 + 528);
    v25 = (char*)v21 - v24;
    v26 = ((__int64)v21 - v24) >> 3;
    v27 = v26 + 1;
    if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v28 = v22 - v24;
    if (v28 >> 2 > v27) {
      v27 = v28 >> 2;
    }
    if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
      v29 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v29 = v27;
    }
    if (v29 != 0) {
      if (v29 >> 61 != 0) {
        goto LABEL_56;
      }
      v30 = fw_memory_HeapManager_Allocate(*v6, 8 * v29, 16, 0);
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v29;
    v32 = (char*)v21 - v24;
    v33 = (__int64)&v25[v30 + -8 * v26];
    *(_QWORD*)&v25[v30] = v7;
    v23 = (__int64)&v25[v30 + 8];
    v8 = memcpy(v33, v24, v32);
    *(_QWORD*)(a1 + 528) = v33;
    *(_QWORD*)(a1 + 536) = v23;
    *(_QWORD*)(a1 + 544) = v31;
    if (v24 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v34 = 56;
      }
      v8 = nn_mem_StandardAllocator_Free(*v6 + v34, v24);
    }
  }
  else {
    *v21 = v7;
    v23 = (__int64)(v21 + 1);
  }
  *(_QWORD*)(a1 + 536) = v23;
  v35 = *(__int64**)(a1 + 560);
  v36 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v35 < v36) {
    *v35 = v7;
    v37 = (__int64)(v35 + 1);
    goto LABEL_52;
  }
  v38 = *(_QWORD*)(a1 + 552);
  v39 = (char*)v35 - v38;
  v40 = ((__int64)v35 - v38) >> 3;
  v41 = v40 + 1;
  if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v8);
  }
  v42 = v36 - v38;
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
    if (v43 >> 61 == 0) {
      v44 = fw_memory_HeapManager_Allocate(*v6, 8 * v43, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v8);
  }
  v44 = 0;

LABEL_48:
  v45 = v44 + 8 * v43;
  v46 = (char*)v35 - v38;
  v47 = (__int64)&v39[v44 + -8 * v40];
  *(_QWORD*)&v39[v44] = v7;
  v37 = (__int64)&v39[v44 + 8];
  memcpy(v47, v38, v46);
  *(_QWORD*)(a1 + 552) = v47;
  *(_QWORD*)(a1 + 560) = v37;
  *(_QWORD*)(a1 + 568) = v45;
  if (v38 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v48, v38);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v37;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  return nn_os_UnlockMutex(GameData_212df28);
}

bool CharacterActor_Unknown3(__int64 a1)
{
  int v1;

  v1 = *(_DWORD*)(a1 + 336);
  return v1 == 5 || v1 == 0;
}

__int64 CharacterActor_Unknown7(__int64 result)
{
  __int64 v1;
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8 v17;
  int* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  unsigned __int8 v27;
  int* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned __int8 v37;
  int* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 i;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;

  v1 = *(_QWORD*)(result + 264);
  if (v1 != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eda0,
                                    memory_order_acquire);
    v3 = GameData_212ed98;
    if ((explicit & 1) == 0) {
      v46 = v1;
      v53 = result;
      v47 = __cxa_guard_acquire(GameData_212eda0);
      result = v53;
      v1 = v46;
      if (v47 != 0) {
        *v3 = wld_Crc32(0, "CharacterAnimator", 17);
        __cxa_guard_release(GameData_212eda0);
        result = v53;
        v1 = v46;
      }
    }
    v5 = *(_QWORD*)(v1 + 504);
    v4 = *(_QWORD*)(v1 + 512);
    v6 = v4;
    v7 = v4;
    while (v7 != v5) {
      v8 = *(_DWORD*)(v7 - 16);
      v7 -= 16;
      v6 -= 16;
      if (v8 == *v3) {
        if (v4 != v6) {
          v9 = *(_QWORD*)(v6 + 8);
          if (v9 != 0 && *(_BYTE*)(v9 + 158) != 0) {
            v10 = *(_QWORD*)(v9 + 96);
            if (v10 != 0) {
              v11 = *(_QWORD*)(v9 + 104);
              *(_QWORD*)(*(_QWORD*)(v10 + 24) + 304LL) = 0;
              v12 = *(_QWORD*)(v10 + 24);
              if (*(_BYTE*)(v12 + 132) == 1) {
                v13 = result;
                Model_a66700(*(_QWORD*)(v12 + 24), *(unsigned int*)(v12 + 128));
                if (*(_BYTE*)(v12 + 132) == 1) {
                  *(_BYTE*)(v12 + 132) = 0;
                }
                result = v13;
                *(_QWORD*)(v12 + 224) = 0xFFFFFFFFLL;
              }
              if (v11 != 0) {
                *(_QWORD*)(*(_QWORD*)(v11 + 24) + 304LL) = 0;
                v14 = *(_QWORD*)(v11 + 24);
                if (*(_BYTE*)(v14 + 132) == 1) {
                  v15 = result;
                  Model_a66700(*(_QWORD*)(v14 + 24),
                               *(unsigned int*)(v14 + 128));
                  if (*(_BYTE*)(v14 + 132) == 1) {
                    *(_BYTE*)(v14 + 132) = 0;
                  }
                  result = v15;
                  *(_QWORD*)(v14 + 224) = 0xFFFFFFFFLL;
                }
              }
            }
          }
        }
        break;
      }
    }
    v16 = *(_QWORD*)(result + 264);
    v17 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff08,
                               memory_order_acquire);
    v18 = GameData_212ff00;
    if ((v17 & 1) == 0) {
      v48 = v16;
      v54 = result;
      v49 = __cxa_guard_acquire(GameData_212ff08);
      result = v54;
      v16 = v48;
      if (v49 != 0) {
        *v18 = wld_Crc32(0, "CharacterLookAt", 15);
        __cxa_guard_release(GameData_212ff08);
        result = v54;
        v16 = v48;
      }
    }
    v20 = *(_QWORD*)(v16 + 504);
    v19 = *(_QWORD*)(v16 + 512);
    v21 = v19;
    v22 = v19;
    while (v22 != v20) {
      v23 = *(_DWORD*)(v22 - 16);
      v22 -= 16;
      v21 -= 16;
      if (v23 == *v18) {
        if (v19 != v21) {
          v24 = *(_QWORD*)(v21 + 8);
          if (v24 != 0) {
            v25 = *(_DWORD*)(v24 + 96);
            *(_DWORD*)(v24 + 104) = 0;
            *(_DWORD*)(v24 + 96) = v25 | 0x10000;
          }
        }
        break;
      }
    }
    v26 = *(_QWORD*)(result + 264);
    v27 = atomic_load_explicit((atomic_uchar* volatile)GameData_212fa30,
                               memory_order_acquire);
    v28 = GameData_212fa28;
    if ((v27 & 1) == 0) {
      v50 = v26;
      v55 = result;
      v51 = __cxa_guard_acquire(GameData_212fa30);
      result = v55;
      v26 = v50;
      if (v51 != 0) {
        *v28 = wld_Crc32(0, "CharacterFacialController", 25);
        __cxa_guard_release(GameData_212fa30);
        result = v55;
        v26 = v50;
      }
    }
    v30 = *(_QWORD*)(v26 + 504);
    v29 = *(_QWORD*)(v26 + 512);
    v31 = v29;
    v32 = v29;
    while (v32 != v30) {
      v33 = *(_DWORD*)(v32 - 16);
      v32 -= 16;
      v31 -= 16;
      if (v33 == *v28) {
        if (v29 != v31) {
          v34 = *(_QWORD*)(v31 + 8);
          if (v34 != 0) {
            v35 = *(_DWORD*)(v34 + 96);
            *(_DWORD*)(v34 + 104) = 0;
            *(_DWORD*)(v34 + 96) = v35 | 0x10000;
          }
        }
        break;
      }
    }
    v36 = *(_QWORD*)(result + 264);
    v37 = atomic_load_explicit((atomic_uchar* volatile)GameData_212fef8,
                               memory_order_acquire);
    v38 = GameData_212fef0;
    if ((v37 & 1) == 0) {
      v52 = v36;
      result = __cxa_guard_acquire(GameData_212fef8);
      v36 = v52;
      if ((_DWORD)result != 0) {
        *v38 = wld_Crc32(0, "CharacterIK", 11);
        result = __cxa_guard_release(GameData_212fef8);
        v36 = v52;
      }
    }
    v40 = *(_QWORD*)(v36 + 504);
    v39 = *(_QWORD*)(v36 + 512);
    v41 = v39;
    for (i = v39; i != v40; i -= 16) {
      v43 = *(_DWORD*)(i - 16);
      v41 -= 16;
      if (v43 == *v38) {
        if (v39 != v41) {
          v44 = *(_QWORD*)(v41 + 8);
          if (v44 != 0) {
            v45 = *(_DWORD*)(v44 + 56);
            *(_DWORD*)(v44 + 64) = 0;
            *(_DWORD*)(v44 + 56) = v45 | 0x10000;
          }
        }
        return result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
