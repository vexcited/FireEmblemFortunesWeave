#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 Util_1586140(__int64*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_1648c60(__int64);
void GameRoutine_6e3b50(__int64, _QWORD*);
void Util_1585690(__int64, __int64*, const char*, __int64);
void __attribute__((noreturn)) GameRoutine_e66f80();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ExchangeDialog_Unknown135(__int64 a1);

__int64 ExchangeDialog_Unknown135(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
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
  _QWORD* v17;
  __int64 v18;
  char v19;
  char v20;
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
  unsigned __int64 v33;
  bool v34;
  __int64 v35;
  const char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  char v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 result;
  struct {
    __int64 v47;
    __int64 v48;
  } v47_;
  struct {
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v49_;
  struct {
    __int64* v52;
    __int64 v53;
  } v52_;

  GameRoutine_1648c60(a1);
  LayoutAccessor_1560070((void*)(&v52_.v52), (__int64*)(a1 + 848), "L_Target");
  v49_.v50 = 0;
  v49_.v51 = 0;
  v49_.v49 = 0;
  v2 = *(_QWORD*)(a1 + 1520);
  v3 = *(_QWORD*)(a1 + 1528);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = v3 - v2;
  if (v3 != v2) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v5 >> 4)) >
        0x249249249249249LL) {
      goto LABEL_70;
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v3 - v2, 16, 0);
    v7 = 0;
    v49_.v49 = v6;
    v49_.v51 = v6 + v5;
    do {
      v11 = v2 + v7;
      v12 = v6 + v7;
      *(_DWORD*)v12 = *(_DWORD*)(v2 + v7);
      *(_QWORD*)(v12 + 4) = *(_QWORD*)(v2 + v7 + 4);
      if (*(_BYTE*)(v2 + v7 + 12) != 0) {
        v8 = *(_QWORD*)(v11 + 12);
      }
      else {
        v8 = 0;
      }
      *(_QWORD*)(v12 + 48) = 0;
      v9 = v12 + 48;
      *(_QWORD*)(v12 + 12) = v8;
      *(_WORD*)(v12 + 26) = 0;
      *(_DWORD*)(v12 + 28) = 0;
      *(_QWORD*)(v12 + 40) = v12 + 48;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_QWORD*)(v12 + 80) = 0;
      GameRoutine_930b90(v12 + 24, v11 + 24);
      v10 = *(_QWORD*)(v11 + 88);
      v7 += 112;
      *(_DWORD*)(v9 + 48) = *(_DWORD*)(v11 + 96);
      *(_QWORD*)(v9 + 40) = v10;
      *(_WORD*)(v9 + 56) = *(_WORD*)(v11 + 104);
    } while (v2 + v7 != v3);
    v49_.v50 = v6 + v7;
  }
  if (v52_.v53 != 0) {
    v13 = std___1___shared_weak_count_lock(v52_.v53);
    if (v13 != 0) {
      v14 = v13;
      if (v52_.v52 != nullptr) {
        Util_1586140(v52_.v52, &v49_.v49);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
      }
    }
  }
  v15 = v49_.v49;
  if (v49_.v49 != 0) {
    if (v49_.v49 == v49_.v50) {
      goto LABEL_30;
    }
    v16 = v49_.v50 - 40;
    do {
      v19 = *(_BYTE*)(v16 - 8);
      *(_DWORD*)(v16 - 40) = 0;
      *(_QWORD*)(v16 - 48) = 0;
      if ((v19 & 1) != 0) {
        **(_BYTE**)(v16 + 8) = 0;
        *(_QWORD*)v16 = 0;
      }
      else {
        *(_WORD*)(v16 - 8) = 0;
      }
      GameRoutine_6e3b50(v16 - 32, *(_QWORD**)(v16 - 24));
      v20 = *(_BYTE*)(v16 - 8);
      *(_QWORD*)(v16 - 24) = 0;
      *(_QWORD*)(v16 - 16) = 0;
      *(_QWORD*)(v16 - 32) = v16 - 24;
      if ((v20 & 1) != 0) {
        v17 = *(_QWORD**)(v16 + 8);
        if (v17 != nullptr) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free(*v4 + v21, (__int64)v17);
          v17 = *(_QWORD**)(v16 - 24);
        }
      }
      else {
        v17 = nullptr;
      }
      GameRoutine_6e3b50(v16 - 32, v17);
      v18 = v16 - 72;
      v16 -= 112;
    } while (v18 != v15);
    v15 = v49_.v49;
    if (v49_.v49 != 0) {
    LABEL_30:
      v22 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v22, v15);
    }
  }
  if (v52_.v53 != 0) {
    std___1___shared_weak_count___release_weak(v52_.v53);
  }
  LayoutAccessor_1560070((void*)(&v47_.v47), (__int64*)(a1 + 848),
                         "L_InfoResult");
  v23 = *(_QWORD*)(a1 + 1544);
  v24 = *(_QWORD*)(a1 + 1552);
  v49_.v50 = 0;
  v49_.v51 = 0;
  v25 = v24 - v23;
  v49_.v49 = 0;
  if (v24 != v23) {
    if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v25 >> 4)) <=
        0x249249249249249LL) {
      v26 = fw_memory_HeapManager_Allocate(*v4, v24 - v23, 16, 0);
      v27 = 0;
      v49_.v49 = v26;
      v49_.v51 = v26 + v25;
      do {
        v31 = v23 + v27;
        v32 = v26 + v27;
        *(_DWORD*)v32 = *(_DWORD*)(v23 + v27);
        *(_QWORD*)(v32 + 4) = *(_QWORD*)(v23 + v27 + 4);
        if (*(_BYTE*)(v23 + v27 + 12) != 0) {
          v28 = *(_QWORD*)(v31 + 12);
        }
        else {
          v28 = 0;
        }
        *(_QWORD*)(v32 + 48) = 0;
        v29 = v32 + 48;
        *(_QWORD*)(v32 + 12) = v28;
        *(_WORD*)(v32 + 26) = 0;
        *(_DWORD*)(v32 + 28) = 0;
        *(_QWORD*)(v32 + 40) = v32 + 48;
        *(_QWORD*)(v32 + 56) = 0;
        *(_QWORD*)(v32 + 64) = 0;
        *(_QWORD*)(v32 + 72) = 0;
        *(_QWORD*)(v32 + 80) = 0;
        GameRoutine_930b90(v32 + 24, v31 + 24);
        v30 = *(_QWORD*)(v31 + 88);
        v27 += 112;
        *(_DWORD*)(v29 + 48) = *(_DWORD*)(v31 + 96);
        *(_QWORD*)(v29 + 40) = v30;
        *(_WORD*)(v29 + 56) = *(_WORD*)(v31 + 104);
      } while (v23 + v27 != v24);
      v49_.v50 = v26 + v27;
      goto LABEL_43;
    }
  LABEL_70:
    GameRoutine_e66f80();
  }
LABEL_43:
  v33 = *(unsigned __int8*)(a1 + 1496);
  v34 = (v33 & 1) == 0;
  v35 = v33 >> 1;
  if (v34) {
    v36 = (const char*)(a1 + 1497);
  }
  else {
    v36 = *(const char**)(a1 + 1512);
  }
  if (v34) {
    v37 = v35;
  }
  else {
    v37 = *(_QWORD*)(a1 + 1504);
  }
  Util_1585690((__int64)&v47_.v47, &v49_.v49, v36, v37);
  v38 = v49_.v49;
  if (v49_.v49 != 0) {
    if (v49_.v49 == v49_.v50) {
      goto LABEL_64;
    }
    v39 = v49_.v50 - 40;
    do {
      v42 = *(_BYTE*)(v39 - 8);
      *(_DWORD*)(v39 - 40) = 0;
      *(_QWORD*)(v39 - 48) = 0;
      if ((v42 & 1) != 0) {
        **(_BYTE**)(v39 + 8) = 0;
        *(_QWORD*)v39 = 0;
      }
      else {
        *(_WORD*)(v39 - 8) = 0;
      }
      GameRoutine_6e3b50(v39 - 32, *(_QWORD**)(v39 - 24));
      v43 = *(_BYTE*)(v39 - 8);
      *(_QWORD*)(v39 - 24) = 0;
      *(_QWORD*)(v39 - 16) = 0;
      *(_QWORD*)(v39 - 32) = v39 - 24;
      if ((v43 & 1) != 0) {
        v40 = *(_QWORD**)(v39 + 8);
        if (v40 != nullptr) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v44 = 128;
          }
          else {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(*v4 + v44, (__int64)v40);
          v40 = *(_QWORD**)(v39 - 24);
        }
      }
      else {
        v40 = nullptr;
      }
      GameRoutine_6e3b50(v39 - 32, v40);
      v41 = v39 - 72;
      v39 -= 112;
    } while (v41 != v38);
    v49_.v50 = v38;
    v38 = v49_.v49;
    if (v49_.v49 != 0) {
    LABEL_64:
      v45 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v45, v38);
    }
  }
  result = v47_.v48;
  if (v47_.v48 != 0) {
    return std___1___shared_weak_count___release_weak(v47_.v48);
  }
  return result;
}

#pragma GCC visibility pop
