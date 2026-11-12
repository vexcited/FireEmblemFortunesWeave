#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_1fd23f0[])();
extern __int64 GameData_212eaf8[7];
extern __int64 GameData_212eb08[5];
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c53620();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void wld_c52ad0(PSEUDO_X8 x8_, __int64 a1);

__attribute__((swiftcall)) void wld_c52ad0(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  _BYTE* v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  struct {
    _QWORD v46[2];
    const char* v47;
  } v46_;
  struct {
    char v48[16];
    __int64 v49;
  } v48_;
  struct {
    _QWORD v50[2];
    char* v51;
  } v50_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      336, 16, 0);
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  v6 = v5;
  *(_DWORD*)(v5 + 64) = 1092616192;
  *(_QWORD*)(v5 + 126) = 0;
  *(_WORD*)(v5 + 124) = 257;
  *(_QWORD*)(v5 + 8) = 0;
  v7 = (atomic_ullong*)(v5 + 8);
  *(_QWORD*)v5 = GameData_1fd23f0;
  *(_QWORD*)(v5 + 100) = 0x3F80000000000000LL;
  *(_QWORD*)(v5 + 262) = 0;
  *(_QWORD*)(v5 + 270) = 0;
  *(_QWORD*)(v5 + 108) = 0x3F8000003F800000LL;
  *(_OWORD*)(v5 + 80) = GameData_1a837f0;
  v8 = GameData_212eb08[0];
  *(_QWORD*)(v5 + 320) = 0x3F8000003F800000LL;
  *(_QWORD*)(v5 + 134) = 0;
  *(_QWORD*)(v5 + 142) = 0;
  *(_QWORD*)(v5 + 150) = 0;
  *(_QWORD*)(v5 + 158) = 0;
  *(_QWORD*)(v5 + 166) = 0;
  *(_QWORD*)(v5 + 174) = 0;
  *(_QWORD*)(v5 + 182) = 0;
  *(_QWORD*)(v5 + 190) = 0;
  *(_QWORD*)(v5 + 198) = 0;
  *(_QWORD*)(v5 + 206) = 0;
  *(_QWORD*)(v5 + 214) = 0;
  *(_QWORD*)(v5 + 222) = 0;
  *(_QWORD*)(v5 + 230) = 0;
  *(_QWORD*)(v5 + 238) = 0;
  *(_QWORD*)(v5 + 246) = 0;
  *(_QWORD*)(v5 + 254) = 0;
  *(_WORD*)(v5 + 278) = 0;
  *(_QWORD*)(v5 + 32) = v8 + 16;
  v9 = v5 + 32;
  *(_OWORD*)(v5 + 288) = GameData_1a82c50;
  *(_OWORD*)(v5 + 304) = GameData_1a82d00;
  *(_DWORD*)(v5 + 116) = 1065353216;
  *(_DWORD*)(v5 + 120) = 2;
  *(_DWORD*)(v5 + 96) = 1148846080;
  *(_DWORD*)(v5 + 40) = 3;
  v10 = *(unsigned int*)(a1 + 56);
  strcpy(v48_.v48, "\nlight");
  *(_DWORD*)(a1 + 56) = v10 + 1;
  std___1_to_string_1a0a790((void*)(v46_.v46), v10);
  if ((v46_.v46[0] & 1) != 0) {
    v11 = v46_.v47;
  }
  else {
    v11 = (char*)v46_.v46 + 1;
  }
  if ((v46_.v46[0] & 1) != 0) {
    v12 = v46_.v46[1];
  }
  else {
    v12 = (unsigned __int64)LOBYTE(v46_.v46[0]) >> 1;
  }
  v13 = (__int64*)GameRoutine_1a09ce0((__int64)v48_.v48, v11, v12);
  v14 = *v13;
  v15 = v13[1];
  *v13 = 0;
  v13[1] = 0;
  v50_.v50[0] = v14;
  v50_.v50[1] = v15;
  v16 = v13[2];
  v13[2] = 0;
  v50_.v51 = (char*)v16;
  if ((v46_.v46[0] & 1) != 0 && v46_.v47 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v17, (__int64)v46_.v47);
  }
  if ((v48_.v48[0] & 1) != 0 && v48_.v49 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v18, v48_.v49);
  }
  v19 = 0;
  if ((v50_.v50[0] & 1) != 0) {
    v20 = v50_.v51;
  }
  else {
    v20 = (char*)v50_.v50 + 1;
  }
  while (1) {
    v21 = &v20[v19];
    v22 = v6 + v19;
    if (v20[v19] == 0) {
      v28 = (_BYTE*)(v22 + 216);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 216) = v20[v19];
    if (v21[1] == 0) {
      v28 = (_BYTE*)(v6 + v19 + 217);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 217) = v21[1];
    v23 = v6 + v19;
    if (v21[2] == 0) {
      v28 = (_BYTE*)(v23 + 218);
      goto LABEL_40;
    }
    *(_BYTE*)(v23 + 218) = v21[2];
    if (v21[3] == 0) {
      v28 = (_BYTE*)(v6 + v19 + 219);
      goto LABEL_40;
    }
    *(_BYTE*)(v23 + 219) = v21[3];
    v24 = v6 + v19;
    if (v21[4] == 0) {
      v28 = (_BYTE*)(v24 + 220);
      goto LABEL_40;
    }
    *(_BYTE*)(v24 + 220) = v21[4];
    if (v21[5] == 0) {
      v28 = (_BYTE*)(v6 + v19 + 221);
      goto LABEL_40;
    }
    *(_BYTE*)(v24 + 221) = v21[5];
    v25 = v6 + v19;
    if (v21[6] == 0) {
      v28 = (_BYTE*)(v25 + 222);
      goto LABEL_40;
    }
    *(_BYTE*)(v25 + 222) = v21[6];
    if (v21[7] == 0) {
      v28 = (_BYTE*)(v6 + v19 + 223);
      goto LABEL_40;
    }
    *(_BYTE*)(v25 + 223) = v21[7];
    v26 = v6 + v19;
    v27 = (unsigned __int8)v21[8];
    if (v27 == 0) {
      break;
    }
    v19 += 9;
    *(_BYTE*)(v26 + 224) = v27;
    if ((_DWORD)v19 == 63) {
      v28 = (_BYTE*)(v6 + v19 + 216);
      goto LABEL_40;
    }
  }
  v28 = (_BYTE*)(v26 + 224);
LABEL_40:
  *v28 = 0;
  v29 = *(__int64**)(a1 + 8);
  v30 = *(_QWORD*)(a1 + 16);
  if ((unsigned __int64)v29 >= v30) {
    v32 = (__int64)v29 - *(_QWORD*)a1;
    v33 = (v32 >> 4) + 1;
    if (v33 >> 60 != 0) {
      GameRoutine_c53620();
    }
    v34 = v30 - *(_QWORD*)a1;
    if (v34 >> 3 > v33) {
      v33 = v34 >> 3;
    }
    if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF0LL) {
      v35 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v35 = v33;
    }
    if (v35 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v36 = fw_memory_HeapManager_Allocate(*v4, 16 * v35, 16, 0);
    v37 = (__int64*)(v36 + v32);
    v38 = v36 + 16 * v35;
    *v37 = v9;
    v37[1] = v6;
    v31 = v36 + v32 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v39 = *(_QWORD*)a1;
    v40 = *(_QWORD*)(a1 + 8) - *(_QWORD*)a1;
    v41 = (char*)v37 - v40;
    memcpy((__int64)v37 - v40, *(_QWORD*)a1, v40);
    *(_QWORD*)a1 = v41;
    *(_QWORD*)(a1 + 8) = v31;
    *(_QWORD*)(a1 + 16) = v38;
    if (v39 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v42, v39);
    }
  }
  else {
    *v29 = v9;
    v29[1] = v6;
    v31 = (__int64)(v29 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 8) = v31;
  v43 = GameData_212eaf8[0];
  a2[3] = v9;
  a2[4] = 0;
  *a2 = v43 + 16;
  a2[1] = v9;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  a2[2] = v6;
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v44 = v50_.v50[0];
  a2[4] = v9;
  if ((v44 & 1) != 0 && v50_.v51 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v45, (__int64)v50_.v51);
  }
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
}

#pragma GCC visibility pop
