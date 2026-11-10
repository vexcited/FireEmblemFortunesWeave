#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e7e800(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_ea6540(_QWORD);
void __attribute__((noreturn)) GameRoutine_ebd590(_QWORD);
__int64* MindViewer_ed9d60(__int64* result, _QWORD* a2);
__int64 MindViewer_eda030(__int64 a1, __int64* a2);
__int64 MindViewer_eda160(__int64 a1, __int64* a2);
_QWORD* MindViewer_eda380(_QWORD* result, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void game_cmdbtl_ed9ba0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, long double);
__int64 GameRoutine_10d6d40(__int64*, int*, int*);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN GameData_1a0d058;
extern __int64 (*GameData_1fef170[])();
extern __int64 GameData_212f520[4];
void GameRoutine_d28880(__int64**, __int64*);
void __attribute__((noreturn)) GameRoutine_60a310();
unsigned __int64 game_cmdbtl_MindViewer_CalcCmdBtlViewer(_QWORD* a1,
                                                         __int64 a2);
__n128 game_cmdbtl_MindViewer_CalcCmdBtlViewer_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);

__int64* MindViewer_ed9d60(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v5 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_ea6540(result);
    }
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v8) >> 3);
    if (2 * v11 > v10) {
      v10 = 2 * v11;
    }
    if (v11 >= 0x555555555555555LL) {
      v10 = 0xAAAAAAAAAAAAAAALL;
    }
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_60a210(result);
    }
    v12 = 3 * v10;
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24 * v10, 16, 0);
    v15 = a2[1];
    v16 = (_QWORD*)(v14 + v9);
    v17 = v14 + 8 * v12;
    *v16 = *a2;
    v16[1] = v15;
    v18 = a2[2];
    v16[2] = v18;
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      v8 = *v5;
      v9 = v5[1] - *v5;
    }
    v19 = (char*)v16 - v9;
    v7 = v16 + 3;
    result = (__int64*)memcpy((char*)v16 - v9, v8, v9);
    *v5 = (__int64)v19;
    v5[1] = (__int64)v7;
    v5[2] = v17;
    if (v8 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v20 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v20, v8);
    }
  }
  else {
    *v2 = *a2;
    v2[1] = a2[1];
    v6 = a2[2];
    v2[2] = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    v7 = v2 + 3;
  }
  v5[1] = (__int64)v7;
  return result;
}

__int64 MindViewer_eda030(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  result = GameRoutine_e7e800(v2);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 MindViewer_eda160(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 result;

  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v5 = *(_QWORD*)(v3 + 272);
  v4 = *(_QWORD*)(v3 + 280);
  if (v5 != v4) {
    v6 = *(_QWORD*)(v3 + 280);
    v7 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v8 & 1) != 0) {
        v9 = *(_QWORD*)(v4 - 8);
        if (v9 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v10, v9);
        }
      }
      v4 = v6;
    } while (v6 != v5);
  }
  *(_QWORD*)(v3 + 280) = v5;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

_QWORD* MindViewer_eda380(_QWORD* result, __int64 a2, __int64 a3)
{
  unsigned __int8* v3;
  _QWORD* v4;
  int v5;
  unsigned __int8* v6;
  int v7;
  __int64 v8;
  int v9;
  unsigned __int8* v10;
  int v11;
  unsigned __int8* v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;

  v3 = *(unsigned __int8**)(a2 + 16);
  v4 = result;
  if ((*(_BYTE*)a2 & 1) == 0) {
    v3 = (unsigned __int8*)(a2 + 1);
  }
  v7 = *v3;
  v6 = v3 + 1;
  v5 = v7;
  if (v7 != 0) {
    LODWORD(v8) = 0;
    do {
      v8 = (unsigned int)(v5 - v8 + 32 * v8);
      v9 = *v6++;
      v5 = v9;
    } while (v9 != 0);
  }
  else {
    v8 = 0;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v10 = *(unsigned __int8**)(a3 + 16);
  }
  else {
    v10 = (unsigned __int8*)(a3 + 1);
  }
  v13 = *v10;
  v12 = v10 + 1;
  v11 = v13;
  if (v13 != 0) {
    LODWORD(v14) = 0;
    do {
      v14 = (unsigned int)(v11 - v14 + 32 * v14);
      v15 = *v12++;
      v11 = v15;
    } while (v15 != 0);
    v16 = v14 << 32;
  }
  else {
    v16 = 0;
  }
  v18 = (__int64*)result[12];
  v17 = result[13];
  if ((unsigned __int64)v18 >= v17) {
    v20 = result[11];
    v21 = (char*)v18 - v20;
    v22 = ((__int64)v18 - v20) >> 3;
    v23 = v22 + 1;
    if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
      GameRoutine_ebd590(result);
    }
    v24 = v17 - v20;
    v25 = fw_memory_g_heap_manager_ptr;
    if (v24 >> 2 > v23) {
      v23 = v24 >> 2;
    }
    if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v23;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v27 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v16 | v8;
    v29 = v27 + 8 * v26;
    v30 = (char*)v18 - v20;
    v31 = (__int64)&v21[v27 + -8 * v22];
    *(_QWORD*)&v21[v27] = v28;
    v19 = (__int64)&v21[v27 + 8];
    result = (_QWORD*)memcpy(v31, v20, v30);
    v4[11] = v31;
    v4[12] = v19;
    v4[13] = v29;
    if (v20 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
        v32 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v32, v20);
    }
  }
  else {
    *v18 = v16 | v8;
    v19 = (__int64)(v18 + 1);
  }
  v4[12] = v19;
  return result;
}

unsigned __int64 game_cmdbtl_MindViewer_CalcCmdBtlViewer(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  int v6;
  __int64 v7;
  int v8;
  int32x4_t** v9;
  __int64 v10;
  __n128 v11;
  int32x4_t* v12;
  __int64 v13;
  __int64 v14;
  int32x4_t* v15;
  int32x4_t* v16;
  int32x4_t v17;
  __int64 v18;
  int32x4_t** v19;
  int32x4_t* v20;
  int32x4_t* v21;
  __int64 v22;
  __int64 v24;
  int32x4_t* v25;
  int32x4_t* v26;
  int32x4_t v27;
  __int64 v28;
  __int64 v29;
  __n128 v30;
  __int64 v31;
  int32x4_t* v32;
  __int64 v33;
  __int64 v34;
  __int64 v36;
  int32x4_t* v37;
  int32x4_t* v38;
  int32x4_t v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  int* v59;
  int* v60;
  unsigned __int64 result;
  int v62;
  int v63;
  unsigned __int64 v64;
  int v65;
  int v66;
  unsigned __int64 v67;
  int v68;
  int v72;
  struct {
    _QWORD v73[2];
    __int64 v74;
    char gap24_[8];
    _QWORD* v75;
  } v73_;
  struct {
    __int64 v76;
    __int64 v77;
  } v76_;

  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = *(_DWORD*)(a2 + 216);
  v3 = *((_DWORD*)a1 + 3);
  v6 = v2 | 0x41;
  *(_DWORD*)(a2 + 216) = v2 | 0x41;
  if (v3 != 0 || *(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 13LL) != 0) {
    v8 = v2 | 0x841;
    if (*(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 13LL) == 0) {
      v8 = v6;
    }
    if (v3 != 0) {
      v8 |= 0x80000u;
    }
    *(_DWORD*)(a2 + 216) = v8;
    v7 = a1[5];
    if (v7 == 0) {
      goto LABEL_12;
    }
  }
  else {
    v7 = a1[5];
    if (v7 == 0) {
      goto LABEL_12;
    }
  }
  if (*(_QWORD*)(v7 + 8) != -1) {
    v9 = (int32x4_t**)(a1 + 4);
    goto LABEL_14;
  }
LABEL_12:
  v10 = (*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v7 = *(_QWORD*)(v10 + 88);
  if (v7 == 0) {
    goto LABEL_25;
  }
  v9 = (int32x4_t**)(v10 + 80);
LABEL_14:
  v12 = *v9;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                            memory_order_relaxed);
  v13 = std___1___shared_weak_count_lock(v7),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v11 = std___1___shared_weak_count___release_weak_alt1(v7),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v13 != 0 && v12 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    v14 = LANES128(v12[13]).n128_i64[0];
    if (v14 != 0) {
      v15 = *(int32x4_t**)(v14 + 8);
      v16 = v15 + 19;
    }
    else {
      v16 = v12 + 7;
      v15 = (int32x4_t*)&GameData_1a0d058;
    }
    v17 = *v16;
    v18 = LANES128(v12[1]).n128_i64[0];
    *(_QWORD*)(a2 + 8) = v15;
    v11 = vuzp1q_s32(v17, v17);
    *(_DWORD*)(a2 + 16) = 999;
    *(_DWORD*)(a2 + 20) = 1;
    *(_QWORD*)(a2 + 24) = 0;
    *(_QWORD*)(a2 + 32) = 0;
    *(_QWORD*)(a2 + 40) = v18;
    *(_QWORD*)a2 = LANES128(v11).n128_u64[0];
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v11 = std___1___shared_weak_count___release_weak_alt1(v13),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  else if (v13 == 0) {
    goto LABEL_25;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v13 + 16LL))(
        v13, *(long double*)&v11),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v11 = std___1___shared_weak_count___release_weak_alt1(v13),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_25:
  if ((a1[6] & 0x80000000) == 0) {
    v19 = (int32x4_t**)(*(_QWORD*)((*(__int64 (**)(_QWORD*, long double))(
                                       *a1 + 32LL))(a1, *(long double*)&v11) +
                                   40) +
                        16LL * *((int*)a1 + 12)),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v20 = v19[1];
    if (v20 != nullptr) {
      v21 = *v19;
      atomic_fetch_add_explicit(
          (atomic_ullong* volatile)&LANES128(*(v20)).n128_i8[8], 1u,
          memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)&v20[1], 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add(
              (atomic_ullong* volatile)&LANES128(*(v20)).n128_i8[8],
              0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(int32x4_t*))(LANES128(*(v20)).n128_u64[0] + 16))(v20),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v20),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v22 = std___1___shared_weak_count_lock(v20),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v11 = std___1___shared_weak_count___release_weak_alt1(v20),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v22 == 0 || v21 == nullptr) {
        if (v22 == 0) {
          goto LABEL_43;
        }
      }
      else {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                  memory_order_relaxed);
        v24 = LANES128(v21[13]).n128_i64[0];
        if (v24 != 0) {
          v25 = *(int32x4_t**)(v24 + 8);
          v26 = v25 + 19;
        }
        else {
          v26 = v21 + 7;
          v25 = (int32x4_t*)&GameData_1a0d058;
        }
        v27 = *v26;
        v28 = LANES128(v21[1]).n128_i64[0];
        *(_QWORD*)(a2 + 104) = v25;
        v11 = vuzp1q_s32(v27, v27);
        *(_DWORD*)(a2 + 112) = 999;
        *(_DWORD*)(a2 + 116) = 1;
        *(_QWORD*)(a2 + 120) = 0;
        *(_QWORD*)(a2 + 128) = 0;
        *(_QWORD*)(a2 + 136) = v28;
        *(_QWORD*)(a2 + 96) = LANES128(v11).n128_u64[0];
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
              v42 = COERCE_AS(__typeof__(v42),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v11 = std___1___shared_weak_count___release_weak_alt1(v22),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(
            v22, *(long double*)&v11),
            v42 = COERCE_AS(__typeof__(v42),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v11 = std___1___shared_weak_count___release_weak_alt1(v22),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  }
LABEL_43:
  v29 = (*(__int64 (**)(_QWORD*, long double))(*a1 + 40LL))(
      a1, *(long double*)&v11),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v31 = *(_QWORD*)(v29 + 88);
  if (v31 == 0) {
    goto LABEL_58;
  }
  v32 = *(int32x4_t**)(v29 + 80);
  v33 = *(_QWORD*)(v29 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                            memory_order_relaxed);
  v34 = std___1___shared_weak_count_lock(v33),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v30 = std___1___shared_weak_count___release_weak_alt1(v31),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v34 == 0 || v32 == nullptr) {
    if (v34 == 0) {
      goto LABEL_58;
    }
  }
  else {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                              memory_order_relaxed);
    v36 = LANES128(v32[13]).n128_i64[0];
    if (v36 != 0) {
      v37 = *(int32x4_t**)(v36 + 8);
      v38 = v37 + 19;
    }
    else {
      v38 = v32 + 7;
      v37 = (int32x4_t*)&GameData_1a0d058;
    }
    v39 = *v38;
    v40 = LANES128(v32[1]).n128_i64[0];
    *(_QWORD*)(a2 + 56) = v37;
    v30 = vuzp1q_s32(v39, v39);
    *(_DWORD*)(a2 + 64) = 999;
    *(_DWORD*)(a2 + 68) = 1;
    *(_QWORD*)(a2 + 72) = 0;
    *(_QWORD*)(a2 + 80) = 0;
    *(_QWORD*)(a2 + 88) = v40;
    *(_QWORD*)(a2 + 48) = LANES128(v30).n128_u64[0];
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v30 = std___1___shared_weak_count___release_weak_alt1(v34),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v34 + 16LL))(
        v34, *(long double*)&v30),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v30 = std___1___shared_weak_count___release_weak_alt1(v34),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_58:
  v41 = (*(__int64 (**)(_QWORD*, long double))(*a1 + 16LL))(
      a1, *(long double*)&v30),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v44 = *(__int64**)(v41 + 40);
  v45 = *(__int64**)(v41 + 48);
  v73_.v74 = a2 + 248;
  v73_.v73[0] = GameData_1fef170;
  v73_.v73[1] = a1;
  v73_.v75 = v73_.v73;
  if (v44 == v45) {
    v48 = v73_.v73;
  LABEL_71:
    v49 = 32;
    goto LABEL_72;
  }
  do {
    v76_.v76 = *v44;
    v46 = v44[1];
    v76_.v77 = v46;
    if (v46 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v73_.v75 == nullptr) {
    LABEL_125:
      GameRoutine_60a310(),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    (*(void (**)(_QWORD*, __int64*))(*v73_.v75 + 48LL))(v73_.v75, &v76_.v76),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v47 = v76_.v77;
    if (v76_.v77 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v76_.v77 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v47),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v44 += 2;
  } while (v44 != v45);
  v48 = v73_.v75;
  if (v73_.v75 == v73_.v73) {
    goto LABEL_71;
  }
  if (v73_.v75 != nullptr) {
    v49 = 40;
  LABEL_72:
    (*(void (**)(_QWORD*, __int64, __int64))(*v48 + v49))(v48, v42, v43),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v50 = (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v73_.v73[0] = GameData_1fef170;
  v73_.v73[1] = a1;
  v53 = *(__int64**)(v50 + 40);
  v54 = *(__int64**)(v50 + 48);
  v73_.v74 = a2 + 272;
  v73_.v75 = v73_.v73;
  if (v53 == v54) {
    v57 = v73_.v73;
  LABEL_86:
    v58 = 32;
    goto LABEL_87;
  }
  do {
    v76_.v76 = *v53;
    v55 = v53[1];
    v76_.v77 = v55;
    if (v55 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v73_.v75 == nullptr) {
      goto LABEL_125;
    }
    (*(void (**)(_QWORD*, __int64*))(*v73_.v75 + 48LL))(v73_.v75, &v76_.v76),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v56 = v76_.v77;
    if (v76_.v77 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v76_.v77 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v56),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v53 += 2;
  } while (v53 != v54);
  v57 = v73_.v75;
  if (v73_.v75 == v73_.v73) {
    goto LABEL_86;
  }
  if (v73_.v75 != nullptr) {
    v58 = 40;
  LABEL_87:
    (*(void (**)(_QWORD*, __int64, __int64))(*v57 + v58))(v57, v51, v52),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v60 = (int*)a1[11];
  v59 = (int*)a1[12];
  if (v60 == v59) {
    result = *(_QWORD*)(a2 + 200);
  }
  else {
    result = *(_QWORD*)(a2 + 200);
    if (v3 != 0) {
      do {
        v63 = *v60;
        v62 = v60[1];
        v64 = *(_QWORD*)(a2 + 208);
        LODWORD(v73_.v73[0]) = v62;
        LODWORD(v76_.v76) = v63;
        if (result >= v64) {
          result = GameRoutine_10d6d40((__int64*)(a2 + 192), (int*)v73_.v73,
                                       (int*)&v76_.v76),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        else {
          *(_QWORD*)(result + 16) = 0;
          *(_QWORD*)(result + 24) = 0;
          *(_QWORD*)(result + 8) = 0;
          *(_DWORD*)result = v62;
          *(_DWORD*)(result + 4) = v63;
          result += 32LL;
        }
        v60 += 2;
        *(_QWORD*)(a2 + 200) = result;
      } while (v60 != v59);
    }
    else {
      do {
        v65 = *v60;
        v66 = v60[1];
        v67 = *(_QWORD*)(a2 + 208);
        LODWORD(v73_.v73[0]) = *v60;
        LODWORD(v76_.v76) = v66;
        if (result >= v67) {
          result = GameRoutine_10d6d40((__int64*)(a2 + 192), (int*)v73_.v73,
                                       (int*)&v76_.v76),
          v42 = COERCE_AS(__typeof__(v42),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        else {
          *(_QWORD*)(result + 16) = 0;
          *(_QWORD*)(result + 24) = 0;
          *(_QWORD*)(result + 8) = 0;
          *(_DWORD*)result = v65;
          *(_DWORD*)(result + 4) = v66;
          result += 32LL;
        }
        v60 += 2;
        *(_QWORD*)(a2 + 200) = result;
      } while (v60 != v59);
    }
  }
  if (result != *(_QWORD*)(a2 + 192)) {
    v68 = *(_DWORD*)(result - 32);
    if (v68 <= -77626399) {
      if (v68 == -972548316 || v68 == -93581017) {
        goto LABEL_115;
      }
    }
    else if (v68 == -77626398 || v68 == 1400556095 || v68 == 1715476756) {
      goto LABEL_115;
    }
    v72 = *(_DWORD*)(result - 28);
    if (v72 > -77626399) {
      if (v72 != -77626398 && v72 != 1400556095 && v72 != 1715476756) {
        return result;
      }
    LABEL_115:
      *(_DWORD*)(a2 + 216) |= 0x10000000u;
      return result;
    }
    if (v72 == -972548316 || v72 == -93581017) {
      goto LABEL_115;
    }
  }
  return result;
}

__n128 game_cmdbtl_MindViewer_CalcCmdBtlViewer_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __n128 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
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
  __int64 v24[4];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(v5 + 40);
  if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
    v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v5 + 32LL))(*(_QWORD*)(a1 + 8)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = *(_QWORD*)(v8 + 88);
    if (v6 == 0) {
      goto LABEL_12;
    }
    v7 = (__int64*)(v8 + 80);
  }
  else {
    v7 = (__int64*)(v5 + 32);
  }
  v10 = *v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v11 = std___1___shared_weak_count_lock(v6),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v11 == 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v6);
  LABEL_12:
    if (v3 == 0) {
      goto LABEL_35;
    }
  LABEL_13:
    if ((*(_DWORD*)(v5 + 48) & 0x80000000) != 0 ||
        (v13 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64, long double))(
                                         *(_QWORD*)v5 + 32LL))(
                                         v5, *(long double*)&result) +
                                     40) +
                          16LL * *(int*)(v5 + 48)),
         (v14 = v13[1]) == 0)) {
      if (v3 == 0) {
        goto LABEL_35;
      }
    }
    else {
      v15 = *v13;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v14),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v16 = std___1___shared_weak_count_lock(v14),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v16 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v17 = v16;
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v17),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        result = std___1___shared_weak_count___release_weak_alt1(v14);
        if (v15 == v3) {
          goto LABEL_35;
        }
      }
      else {
        result = std___1___shared_weak_count___release_weak_alt1(v14);
        if (v3 == 0) {
          goto LABEL_35;
        }
      }
    }
    v18 = (*(__int64 (**)(__int64, long double))(*(_QWORD*)v5 + 40LL))(
        v5, *(long double*)&result),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v19 = *(_QWORD*)(v18 + 88);
    if (v19 != 0) {
      v20 = *(_QWORD*)(v18 + 80);
      v21 = *(_QWORD*)(v18 + 88);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                memory_order_relaxed);
      v22 = std___1___shared_weak_count_lock(v21),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v22 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v23 = v22;
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v23),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        result = std___1___shared_weak_count___release_weak_alt1(v19);
        if (v3 == 0 || v20 == v3) {
          goto LABEL_35;
        }
      LABEL_34:
        game_cmdbtl_ed9ba0((void*)(v24), v5,
                           *(_QWORD*)(*(_QWORD*)(v3 + 208) + 8LL),
                           *(_QWORD*)(v3 + 16), *(long double*)&result),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameRoutine_d28880(*(__int64***)(a1 + 16), v24),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_35;
      }
      result = std___1___shared_weak_count___release_weak_alt1(v19);
    }
    if (v3 == 0) {
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v12 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  result = std___1___shared_weak_count___release_weak_alt1(v6);
  if (v10 != v3) {
    goto LABEL_13;
  }
LABEL_35:
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v2 + 16LL))(
        v2, *(long double*)&result),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return std___1___shared_weak_count___release_weak_alt1(v2);
  }
  return result;
}

#pragma GCC visibility pop
