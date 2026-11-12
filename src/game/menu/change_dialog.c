#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void Dialog_1648c60(__int64);
void GameRoutine_6e3b50(__int64, _QWORD*);
void Util_1585690(__int64, _QWORD*, const char*, __int64);
void __attribute__((noreturn)) GameRoutine_e66f80();
void game_gameui_157a1e0(__int64*, __int64, unsigned __int8, char, char, char,
                         char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ChangeDialog_Unknown135(__int64 a1);

__int64 ChangeDialog_Unknown135(__int64 a1)
{
  __int64 v2;
  __int64* v3;
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
  int v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  char v18;
  __int64 v19;
  _QWORD** v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
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
  _QWORD* v36;
  __int64 v37;
  char v38;
  __int64 v39;
  _QWORD** v40;
  char v41;
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
  __int64 v53;
  unsigned __int64 v54;
  bool v55;
  __int64 v56;
  const char* v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  _QWORD* v62;
  __int64* v63;
  char v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 result;
  struct {
    __int64* v69;
    __int64* v70;
    __int64 v71;
  } v69_;
  struct {
    __int64 v72;
    __int64 v73;
  } v72_;

  Dialog_1648c60(a1);
  LayoutAccessor_1560070((void*)(&v69_.v69), (__int64*)(a1 + 848), "L_Before");
  if (v69_.v70 != nullptr) {
    v2 = std___1___shared_weak_count_lock((__int64)v69_.v70);
    v3 = v69_.v69;
    if (v69_.v70 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v69_.v70);
    }
    if (v2 != 0 && v3 != nullptr) {
      v4 = *(_QWORD*)(a1 + 1520);
      v5 = *(_QWORD*)(a1 + 1528);
      v6 = v5 - v4;
      if (v5 == v4) {
        game_gameui_157a1e0(v3, v6, 0, 0, 0, 0, 0);
      }
      else {
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v6 >> 4)) >
            0x249249249249249LL) {
          goto LABEL_100;
        }
        v7 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v6, 16, 0);
        v8 = 0;
        do {
          v12 = v4 + v8;
          v13 = v7 + v8;
          v14 = *(_DWORD*)(v4 + v8);
          *(_QWORD*)(v13 + 4) = 0;
          *(_DWORD*)v13 = v14;
          v15 = *(_QWORD*)(v4 + v8 + 4);
          *(_QWORD*)(v13 + 12) = 0;
          *(_QWORD*)(v13 + 4) = v15;
          if (*(_BYTE*)(v4 + v8 + 12) != 0) {
            v9 = *(_QWORD*)(v12 + 12);
          }
          else {
            v9 = 0;
          }
          *(_QWORD*)(v13 + 48) = 0;
          v10 = v13 + 48;
          *(_QWORD*)(v13 + 12) = v9;
          *(_WORD*)(v13 + 26) = 0;
          *(_DWORD*)(v13 + 28) = 0;
          *(_QWORD*)(v13 + 40) = v13 + 48;
          *(_QWORD*)(v13 + 56) = 0;
          *(_QWORD*)(v13 + 64) = 0;
          *(_QWORD*)(v13 + 72) = 0;
          *(_QWORD*)(v13 + 80) = 0;
          GameRoutine_930b90(v13 + 24, v12 + 24);
          v11 = *(_QWORD*)(v12 + 88);
          v8 += 112;
          *(_DWORD*)(v10 + 48) = *(_DWORD*)(v12 + 96);
          *(_QWORD*)(v10 + 40) = v11;
          *(_WORD*)(v10 + 56) = *(_WORD*)(v12 + 104);
        } while (v4 + v8 != v5);
        game_gameui_157a1e0(v3, v7, 0, 0, 0, 0, 0);
        do {
          v17 = v7 + v8;
          v18 = *(_BYTE*)(v7 + v8 - 48);
          *(_DWORD*)(v17 - 80) = 0;
          *(_QWORD*)(v17 - 88) = 0;
          if ((v18 & 1) != 0) {
            **(_BYTE**)(v17 - 32) = 0;
            *(_QWORD*)(v17 - 40) = 0;
          }
          else {
            *(_WORD*)(v17 - 48) = 0;
          }
          v19 = v7 + v8;
          v20 = (_QWORD**)(v7 + v8 - 64);
          GameRoutine_6e3b50(v7 + v8 - 72, *v20);
          v21 = *(_BYTE*)(v17 - 48);
          *(_QWORD*)(v19 - 56) = 0;
          *(_QWORD*)(v19 - 72) = v20;
          *v20 = nullptr;
          if ((v21 & 1) != 0) {
            v16 = *(_QWORD**)(v19 - 32);
            if (v16 != nullptr) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v22 = 128;
              }
              else {
                v22 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v22,
                                            (__int64)v16);
              v16 = *(_QWORD**)(v19 - 64);
            }
          }
          else {
            v16 = nullptr;
          }
          GameRoutine_6e3b50(v7 + v8 - 72, v16);
          v8 -= 112;
        } while (v8 != 0);
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v7);
      }
    }
    else if (v2 == 0) {
      goto LABEL_33;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_33:
  LayoutAccessor_1560070((void*)(&v69_.v69), (__int64*)(a1 + 848), "L_After");
  if (v69_.v70 == nullptr) {
    goto LABEL_65;
  }
  v24 = std___1___shared_weak_count_lock((__int64)v69_.v70);
  v25 = v69_.v69;
  if (v69_.v70 != nullptr) {
    std___1___shared_weak_count___release_weak((__int64)v69_.v70);
  }
  if (v24 != 0 && v25 != nullptr) {
    v26 = *(_QWORD*)(a1 + 1520);
    v27 = *(_QWORD*)(a1 + 1528);
    v28 = v27 - v26;
    if (v27 == v26) {
      game_gameui_157a1e0(v25, 112, 0, 0, 0, 0, 0);
    }
    else {
      if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v28 >> 4)) >
          0x249249249249249LL) {
        goto LABEL_100;
      }
      v29 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v28, 16, 0);
      v30 = 0;
      do {
        v34 = v26 + v30;
        v35 = v29 + v30;
        *(_DWORD*)v35 = *(_DWORD*)(v26 + v30);
        *(_QWORD*)(v35 + 4) = *(_QWORD*)(v26 + v30 + 4);
        if (*(_BYTE*)(v26 + v30 + 12) != 0) {
          v31 = *(_QWORD*)(v34 + 12);
        }
        else {
          v31 = 0;
        }
        *(_QWORD*)(v35 + 48) = 0;
        v32 = v35 + 48;
        *(_QWORD*)(v35 + 12) = v31;
        *(_WORD*)(v35 + 26) = 0;
        *(_DWORD*)(v35 + 28) = 0;
        *(_QWORD*)(v35 + 40) = v35 + 48;
        *(_QWORD*)(v35 + 56) = 0;
        *(_QWORD*)(v35 + 64) = 0;
        *(_QWORD*)(v35 + 72) = 0;
        *(_QWORD*)(v35 + 80) = 0;
        GameRoutine_930b90(v35 + 24, v34 + 24);
        v33 = *(_QWORD*)(v34 + 88);
        v30 += 112;
        *(_DWORD*)(v32 + 48) = *(_DWORD*)(v34 + 96);
        *(_QWORD*)(v32 + 40) = v33;
        *(_WORD*)(v32 + 56) = *(_WORD*)(v34 + 104);
      } while (v26 + v30 != v27);
      game_gameui_157a1e0(v25, v29 + 112, 0, 0, 0, 0, 0);
      do {
        v37 = v29 + v30;
        v38 = *(_BYTE*)(v29 + v30 - 48);
        *(_DWORD*)(v37 - 80) = 0;
        *(_QWORD*)(v37 - 88) = 0;
        if ((v38 & 1) != 0) {
          **(_BYTE**)(v37 - 32) = 0;
          *(_QWORD*)(v37 - 40) = 0;
        }
        else {
          *(_WORD*)(v37 - 48) = 0;
        }
        v39 = v29 + v30;
        v40 = (_QWORD**)(v29 + v30 - 64);
        GameRoutine_6e3b50(v29 + v30 - 72, *v40);
        v41 = *(_BYTE*)(v37 - 48);
        *(_QWORD*)(v39 - 56) = 0;
        *(_QWORD*)(v39 - 72) = v40;
        *v40 = nullptr;
        if ((v41 & 1) != 0) {
          v36 = *(_QWORD**)(v39 - 32);
          if (v36 != nullptr) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v42 = 128;
            }
            else {
              v42 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v42,
                                          (__int64)v36);
            v36 = *(_QWORD**)(v39 - 64);
          }
        }
        else {
          v36 = nullptr;
        }
        GameRoutine_6e3b50(v29 + v30 - 72, v36);
        v30 -= 112;
      } while (v30 != 0);
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v29);
    }
  }
  else if (v24 == 0) {
    goto LABEL_65;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
LABEL_65:
  LayoutAccessor_1560070((void*)(&v72_.v72), (__int64*)(a1 + 848),
                         "L_InfoResult");
  v44 = *(_QWORD*)(a1 + 1544);
  v45 = *(_QWORD*)(a1 + 1552);
  v69_.v70 = nullptr;
  v69_.v71 = 0;
  v46 = v45 - v44;
  v69_.v69 = nullptr;
  if (v45 != v44) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v46 >> 4)) <=
        0x249249249249249LL) {
      v47 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v45 - v44, 16, 0);
      v48 = 0;
      v69_.v69 = (__int64*)v47;
      v69_.v71 = v47 + v46;
      do {
        v52 = v44 + v48;
        v53 = v47 + v48;
        *(_DWORD*)v53 = *(_DWORD*)(v44 + v48);
        *(_QWORD*)(v53 + 4) = *(_QWORD*)(v44 + v48 + 4);
        if (*(_BYTE*)(v44 + v48 + 12) != 0) {
          v49 = *(_QWORD*)(v52 + 12);
        }
        else {
          v49 = 0;
        }
        *(_QWORD*)(v53 + 48) = 0;
        v50 = v53 + 48;
        *(_QWORD*)(v53 + 12) = v49;
        *(_WORD*)(v53 + 26) = 0;
        *(_DWORD*)(v53 + 28) = 0;
        *(_QWORD*)(v53 + 40) = v53 + 48;
        *(_QWORD*)(v53 + 56) = 0;
        *(_QWORD*)(v53 + 64) = 0;
        *(_QWORD*)(v53 + 72) = 0;
        *(_QWORD*)(v53 + 80) = 0;
        GameRoutine_930b90(v53 + 24, v52 + 24);
        v51 = *(_QWORD*)(v52 + 88);
        v48 += 112;
        *(_DWORD*)(v50 + 48) = *(_DWORD*)(v52 + 96);
        *(_QWORD*)(v50 + 40) = v51;
        *(_WORD*)(v50 + 56) = *(_WORD*)(v52 + 104);
      } while (v44 + v48 != v45);
      v69_.v70 = (__int64*)(v47 + v48);
      goto LABEL_73;
    }
  LABEL_100:
    GameRoutine_e66f80();
  }
LABEL_73:
  v54 = *(unsigned __int8*)(a1 + 1496);
  v55 = (v54 & 1) == 0;
  v56 = v54 >> 1;
  if (v55) {
    v57 = (const char*)(a1 + 1497);
  }
  else {
    v57 = *(const char**)(a1 + 1512);
  }
  if (v55) {
    v58 = v56;
  }
  else {
    v58 = *(_QWORD*)(a1 + 1504);
  }
  Util_1585690((__int64)&v72_.v72, &v69_.v69, v57, v58);
  v59 = (__int64)v69_.v69;
  if (v69_.v69 != nullptr) {
    if (v69_.v69 == v69_.v70) {
      goto LABEL_94;
    }
    v60 = v69_.v70 - 5;
    v61 = fw_memory_g_heap_manager_ptr;
    do {
      v64 = *((_BYTE*)v60 - 8);
      *((_DWORD*)v60 - 10) = 0;
      *(v60 - 6) = 0;
      if ((v64 & 1) != 0) {
        *(_BYTE*)v60[1] = 0;
        *v60 = 0;
      }
      else {
        *((_WORD*)v60 - 4) = 0;
      }
      GameRoutine_6e3b50((__int64)(v60 - 4), (_QWORD*)*(v60 - 3));
      v65 = *((_BYTE*)v60 - 8);
      *(v60 - 3) = 0;
      *(v60 - 2) = 0;
      *(v60 - 4) = (__int64)(v60 - 3);
      if ((v65 & 1) != 0) {
        v62 = (_QWORD*)v60[1];
        if (v62 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v61 + 200LL) != 0) {
            v66 = 128;
          }
          else {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v61 + v66, (__int64)v62);
          v62 = (_QWORD*)*(v60 - 3);
        }
      }
      else {
        v62 = nullptr;
      }
      GameRoutine_6e3b50((__int64)(v60 - 4), v62);
      v63 = v60 - 9;
      v60 -= 14;
    } while (v63 != (__int64*)v59);
    v69_.v70 = (__int64*)v59;
    v59 = (__int64)v69_.v69;
    if (v69_.v69 != nullptr) {
    LABEL_94:
      v67 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v67 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v59);
    }
  }
  result = v72_.v73;
  if (v72_.v73 != 0) {
    return std___1___shared_weak_count___release_weak(v72_.v73);
  }
  return result;
}

#pragma GCC visibility pop
