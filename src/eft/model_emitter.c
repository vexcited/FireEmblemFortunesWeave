#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a6e580(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_14a5a10(_QWORD*, __int64);
__int64 GameRoutine_14a5be0(__int64*);
__int64 GameRoutine_5e5f00(_QWORD);
__int64 GameRoutine_a61a80(_QWORD, _QWORD);
__int64 GameRoutine_a6ca80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a70a20(_QWORD, _QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_14a69f0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 ModelEmitter_Unknown2(__int64 a1, __int64* a2);

__int64 ModelEmitter_Unknown2(__int64 a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  unsigned __int16* v27;
  unsigned __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int16* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  _QWORD* v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 result;
  __int64* v76;
  __int64 v77;
  __int64* v78;
  __int64* v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _BYTE v85[336];
  _QWORD v86[2];
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _QWORD v93[4];

  v2 = *a2;
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      416, 16, 0);
  v7 = *(_DWORD*)(a1 + 176);
  v8 = (_QWORD*)v6;
  memcpy(v85, v2, 336);
  v9 = a2[2];
  v83 = a1;
  v11 = *(_QWORD*)(a1 + 160);
  v10 = *(_QWORD*)(a1 + 168);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  *((_BYTE*)v8 + 32) = 0;
  v8[2] = 0;
  v8[3] = 0;
  *(_QWORD*)((char*)v8 + 36) = 0;
  *(_QWORD*)((char*)v8 + 44) = 0;
  *(_QWORD*)((char*)v8 + 52) = 0;
  *((_DWORD*)v8 + 15) = 0;
  memcpy(v8 + 8, v85, 336);
  v8[50] = 0;
  *((_DWORD*)v8 + 103) = 1065353216;
  GameRoutine_ad7390(v9);
  v12 = GameRoutine_5e5f00(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 592LL));
  v13 = *(_QWORD*)(v12 + 48);
  v84 = v9;
  if (v13 != 0) {
    v14 = v8[11];
    v15 = v10;
    v16 = v12;
    v17 = v5;
    if (v14 != 0) {
      v18 = strlen(v8[11]);
    }
    else {
      v18 = 0;
    }
    v20 = v13 + 8;
    v21 = *(unsigned __int16*)(v13 + 12);
    v22 = v13 + 8 + 16 * v21;
    v23 = *(_DWORD*)v22;
    if (*(_DWORD*)(v13 + 8) < *(_DWORD*)v22) {
      do {
        v26 = (__int64)v23 >> 3;
        if (v18 > v26) {
          v24 = (*(unsigned __int8*)(v14 + v18 + ~v26) >> (v23 & 7)) & 1;
        }
        else {
          v24 = 0;
        }
        v21 = *(unsigned __int16*)(v13 + 12 + 16 * v21 + 2 * v24);
        v25 = v23 < *(_DWORD*)(v20 + 16 * v21);
        v23 = *(_DWORD*)(v20 + 16 * v21);
      } while (v25);
      v22 = v20 + 16 * v21;
    }
    v27 = *(unsigned __int16**)(v22 + 8);
    if (v18 == *v27 && (unsigned int)memcmp(v27 + 1, v14, v18) == 0 &&
        (~(v28 = v22 - v13 - 24) & 0xFFFFFFFF0LL) != 0) {
      v19 = *(_QWORD*)(v16 + 40) + 120LL * (int)(v28 >> 4);
    }
    else {
      v19 = 0;
    }
    v10 = v15;
    v9 = v84;
    v5 = v17;
  }
  else {
    v19 = 0;
  }
  v93[0] = v19;
  if (*(_BYTE*)(v9 + 165) == 1) {
    v29 = GameRoutine_ad7390(v9);
    v30 = v9 + 32;
    if ((v29 & 1) == 0) {
      v30 = 0;
    }
  }
  else {
    v30 = 0;
  }
  v93[1] = v30;
  v31 = *v5;
  v93[2] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 800LL);
  v32 = fw_memory_HeapManager_Allocate(v31, 816, 16, 0);
  GameRoutine_a61a80(v32, v93);
  *v8 = v32;
  *(_DWORD*)(v32 + 36) = v7;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v8[2] = v11;
    v8[3] = v10;
    v34 = std___1___shared_weak_count_lock(v10);
    if (v34 != 0) {
      v35 = v34;
      if (v11 != 0) {
        v8[1] = GameRoutine_a70a20(v11, v32);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  else {
    v8[2] = v11;
    v8[3] = 0;
  }
  v36 = v8[18];
  v82 = v10;
  if (v36 != 0) {
    v37 = *(_QWORD*)(*v8 + 168LL);
    v8[50] = v37;
    v38 = *(_QWORD*)(*(_QWORD*)v37 + 8LL);
    if (v38 == 0) {
      goto LABEL_43;
    }
    v39 = strlen(v36);
    v40 = v38 + 8;
    v41 = *(unsigned __int16*)(v38 + 12);
    v42 = v38 + 8 + 16 * v41;
    v43 = *(_DWORD*)v42;
    if (*(_DWORD*)(v38 + 8) < *(_DWORD*)v42) {
      do {
        v45 = (__int64)v43 >> 3;
        if (v39 > v45) {
          v44 = (*(unsigned __int8*)(v36 + v39 + ~v45) >> (v43 & 7)) & 1;
        }
        else {
          v44 = 0;
        }
        v41 = *(unsigned __int16*)(v38 + 12 + 16 * v41 + 2 * v44);
        v25 = v43 < *(_DWORD*)(v40 + 16 * v41);
        v43 = *(_DWORD*)(v40 + 16 * v41);
      } while (v25);
      v42 = v40 + 16 * v41;
    }
    v46 = *(unsigned __int16**)(v42 + 8);
    if (v39 == *v46 && (unsigned int)memcmp(v46 + 1, v36, v39) == 0) {
      v47 = (unsigned __int64)(v42 - v38 - 24) >> 4;
    }
    else {
    LABEL_43:
      LODWORD(v47) = -1;
    }
    *((_DWORD*)v8 + 102) = v47;
  }
  v48 = *((unsigned __int8*)v8 + 136);
  if (*((_BYTE*)v8 + 136) != 0) {
    v49 = 0;
    do {
      if (*(_BYTE*)(v9 + 165) == 1 && (GameRoutine_ad7390(v9) & 1) != 0) {
        v50 = GameRoutine_5e5f00(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 592LL));
      }
      else {
        v50 = 0;
      }
      GameRoutine_a6e580(v86, v50, v8[v49 + 13]);
      if (v88 != 0 || v89 != 0 || v90 != 0 || v91 != 0 || v92 != 0) {
        v55 = *v8;
        v56 = *(_QWORD*)(*(_QWORD*)(*v8 + 112LL) + 24LL);
        v57 = fw_memory_HeapManager_Allocate(*v5, 176, 16, 0);
        v58 = GameRoutine_a6ca80(v57, v55 + 136, v56, v86);
        v60 = (__int64*)v8[6];
        v59 = v8[7];
        if ((unsigned __int64)v60 >= v59) {
          v62 = v8[5];
          v63 = (char*)v60 - v62;
          v64 = ((__int64)v60 - v62) >> 3;
          v65 = v64 + 1;
          if ((unsigned __int64)(v64 + 1) >> 61 != 0) {
            GameRoutine_14a69f0(v58);
          }
          v66 = v59 - v62;
          v67 = v5;
          if (v66 >> 2 > v65) {
            v65 = v66 >> 2;
          }
          if ((unsigned __int64)v66 >= 0x7FFFFFFFFFFFFFF8LL) {
            v68 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v68 = v65;
          }
          if (v68 != 0) {
            if (v68 >> 61 != 0) {
              GameRoutine_60a210(v58);
            }
            v69 = fw_memory_HeapManager_Allocate(*v67, 8 * v68, 16, 0);
          }
          else {
            v69 = 0;
          }
          v70 = v69 + 8 * v68;
          v71 = (char*)v60 - v62;
          v72 = (__int64)&v63[v69 + -8 * v64];
          *(_QWORD*)&v63[v69] = v57;
          v61 = (__int64)&v63[v69 + 8];
          memcpy(v72, v62, v71);
          v8[5] = v72;
          v8[7] = v70;
          if (v62 != 0) {
            v5 = v67;
            if (*(_QWORD*)(*v67 + 200LL) != 0) {
              v73 = 128;
            }
            else {
              v73 = 56;
            }
            nn_mem_StandardAllocator_Free(*v67 + v73, v62);
            v9 = v84;
          }
          else {
            v5 = v67;
            v9 = v84;
          }
        }
        else {
          *v60 = v57;
          v61 = (__int64)(v60 + 1);
        }
        v8[6] = v61;
      }
      if ((v86[0] & 1) != 0) {
        v33 = v87;
        if (v87 != 0) {
          if (*(_QWORD*)(*v5 + 200LL) != 0) {
            v74 = 128;
          }
          else {
            v74 = 56;
          }
          nn_mem_StandardAllocator_Free(*v5 + v74, v87);
        }
      }
      ++v49;
    } while (v49 < v48);
  }
  GameRoutine_14a5a10(v8, v33);
  result = v82;
  if (v82 != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  v76 = *(__int64**)(v83 + 472);
  *(_QWORD*)(v83 + 472) = v8;
  if (v76 != nullptr) {
    GameRoutine_14a5be0(v76);
    v77 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v77 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v5 + v77, v76);
    v8 = *(_QWORD**)(v83 + 472);
  }
  v78 = (__int64*)v8[5];
  v79 = (__int64*)v8[6];
  if (v78 != v79) {
    v80 = *(_DWORD*)(*(_QWORD*)(v83 + 224) + 16LL);
    do {
      v81 = *v78++;
      *(_DWORD*)(v81 + 100) = v80;
    } while (v78 != v79);
  }
  *(_BYTE*)(v83 + 466) = 0;
  return result;
}

#pragma GCC visibility pop
