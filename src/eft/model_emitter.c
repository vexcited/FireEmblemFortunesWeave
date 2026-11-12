#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_a6e580(PSEUDO_X8, _QWORD, _QWORD);
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
__int64
ModelEmitter_Unknown2_alt1(__int64 a1,
                           __int64* a2) __asm__("ModelEmitter_Unknown2");
_QWORD* GameRoutine_a6df00(__int64);
__int64 Model_a64140(__int64 result, long double);
extern __int64 (*eft_ClampCurve_ptr)();
__int64 ModelEmitter_14a5a10(__int64 a1, long double a2);
_QWORD* Material_addbe0(_QWORD* result, __int64, __int64, char);
float32x4_t GameRoutine_bcfba0(float32x4_t*);
__int64 ModelEmitter_Unknown3(float32x4_t* a1, long double a2);
__attribute__((swiftcall)) void
GameRoutine_a6e580_alt1(PSEUDO_X8, _QWORD*,
                        const char*) __asm__("GameRoutine_a6e580");
__int64 ModelEmitter_14a5a10_alt1(_QWORD*,
                                  __int64) __asm__("ModelEmitter_14a5a10");
__int64 ModelEmitter_14a5be0(__int64*);
__int64 Model_a61a80(__int64, _QWORD*);
__int64 ResFile_5e5f00(__int64);
__int64 Scene_a70a20(_QWORD*, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool GameRoutine_ad7390_alt1(_QWORD*) __asm__("GameRoutine_ad7390");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_a6ca80(__int64, __int64, __int64, _QWORD*);
void __attribute__((noreturn))
GameRoutine_14a69f0_alt1() __asm__("GameRoutine_14a69f0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ModelEmitter_Unknown2(__int64 a1, __int64* a2);

__int64 ModelEmitter_14a5a10(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float v16;
  __int64 (*v17)();
  bool v18;
  bool v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    return 1;
  }
  v3 = *(_QWORD*)(a1 + 40);
  if (v3 != *(_QWORD*)(a1 + 48)) {
    v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8LL * *(int*)(a1 + 36)) + 24LL);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 36)) +
                    24LL);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 56LL))(v6,
                                                          *(_QWORD*)a1 + 136LL);
    GameRoutine_a6df00(
        *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 36)));
    v7 = *(_QWORD**)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 36));
    v8 = v7[1];
    v9 = (_QWORD*)v7[4];
    if (v9 != nullptr && v9[13] != 0) {
      (*(void (**)(_QWORD*, __int64))(*v9 + 56LL))(v9, v8);
      v8 = v7[1];
    }
    v10 = (_QWORD*)v7[5];
    if (v10 != nullptr && v10[13] != 0) {
      (*(void (**)(_QWORD*, __int64))(*v10 + 56LL))(v10, v8);
      v8 = v7[1];
    }
    v11 = (_QWORD*)v7[6];
    if (v11 != nullptr && v11[13] != 0) {
      (*(void (**)(_QWORD*, __int64))(*v11 + 56LL))(v11, v8);
    }
    v12 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL * *(int*)(a1 + 36));
    v13 = *(_QWORD*)(v12 + 16);
    if (v13 != 0) {
      *(_BYTE*)(v12 + 169) = 0;
      v14 = *(float*)(v12 + 100);
      v15 = *(float*)v13;
      v16 = *(float*)(v13 + 8);
      v17 = *(__int64 (**)(void))(v13 + 16);
      v18 = *(float*)v13 >= v16 && v17 == eft_ClampCurve_ptr;
      if (v18 ||
          (v15 < v16 ? (v19 = v17 == eft_ClampCurve_ptr) : (v19 = true),
           !v19 ? (v20 = (float)(v14 + v15) < v16) : (v20 = true), !v20)) {
        *(_WORD*)(v12 + 168) = 257;
      }
      *(float*)(v13 + 12) = v14;
      v21 = *(_QWORD*)(v12 + 16);
      *(float*)&a2 =
          (*(float (**)(_QWORD, __int64, float, float, float))(v21 + 16))(
              *(_QWORD*)(v21 + 24), v8, *(float*)v21 + *(float*)(v21 + 12),
              *(float*)(v21 + 4), *(float*)(v21 + 8));
      *(_DWORD*)v21 = LODWORD(a2);
    }
    *(_BYTE*)(*(_QWORD*)a1 + 504LL) = 1;
  }
  Model_a64140(*(_QWORD*)a1, a2);
  v22 = *(_QWORD*)(a1 + 40);
  result = true;
  if (v22 != *(_QWORD*)(a1 + 48)) {
    v23 = *(_QWORD*)(v22 + 8LL * *(int*)(a1 + 36));
    v24 = *(_QWORD*)(v23 + 16);
    if (v24 != 0 && *(__int64 (**)(void))(v24 + 16) == eft_ClampCurve_ptr &&
        (*(_BYTE*)(v23 + 168) & 1) != 0) {
      return false;
    }
  }
  return result;
}

void ModelEmitter_Unknown2(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
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
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  const char* v36;
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
  _QWORD* v50;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64* v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64 v75;
  __int64* v76;
  __int64* v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _BYTE v83[336];
  struct {
    _QWORD v84[2];
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
  } v84_;
  _QWORD v91[4];

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *a2;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 416, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *(_DWORD*)(a1 + 176);
  v8 = (_QWORD*)v6;
  memcpy_alt1((__int64)v83, v2, 0x150u),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = a2[2];
  v81 = a1;
  v11 = *(_QWORD**)(a1 + 160);
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
  memcpy_alt1((__int64)(v8 + 8), (__int64)v83, 0x150u),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8[50] = 0;
  *((_DWORD*)v8 + 103) = 1065353216;
  GameRoutine_ad7390_alt1((_QWORD*)v9),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 592LL)),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = *(_QWORD*)(v12 + 48);
  v82 = v9;
  if (v13 != 0) {
    v14 = v8[11];
    v15 = v10;
    v16 = v12;
    v17 = v5;
    if (v14 != 0) {
      v18 = strlen_alt1((const char*)v8[11]),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v18 = 0;
    }
    v20 = v13 + 8;
    v21 = *(unsigned __int16*)(v13 + 12);
    v22 = v13 + 8 + 16 * v21;
    v23 = *(_DWORD*)v22;
    if ((signed __int32)*(_DWORD*)(v13 + 8) < (signed __int32)*(_DWORD*)v22) {
      do {
        v26 = (__int64)v23 >> 3;
        if (v18 > v26) {
          v24 = (*(unsigned __int8*)(v14 + v18 + ~v26) >> (v23 & 7)) & 1;
        }
        else {
          v24 = 0;
        }
        v21 = *(unsigned __int16*)(v13 + 12 + 16 * v21 + 2 * v24);
        v25 = v23 < (signed __int32)*(_DWORD*)(v20 + 16 * v21);
        v23 = *(_DWORD*)(v20 + 16 * v21);
      } while (v25);
      v22 = v20 + 16 * v21;
    }
    v27 = *(unsigned __int16**)(v22 + 8);
    if (v18 == *v27 && memcmp_alt1((__int64)(v27 + 1), v14, v18) == 0 &&
        (~(v28 = v22 - v13 - 24) & 0xFFFFFFFF0LL) != 0) {
      v19 = *(_QWORD*)(v16 + 40) + 120LL * (int)(v28 >> 4);
    }
    else {
      v19 = 0;
    }
    v10 = v15;
    v9 = v82;
    v5 = v17;
  }
  else {
    v19 = 0;
  }
  v91[0] = v19;
  if (*(_BYTE*)(v9 + 165) == 1) {
    v29 = GameRoutine_ad7390_alt1((_QWORD*)v9),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v30 = v9 + 32;
    if (!v29) {
      v30 = 0;
    }
  }
  else {
    v30 = 0;
  }
  v91[1] = v30;
  v31 = *v5;
  v91[2] = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 800LL);
  v32 = fw_memory_HeapManager_Allocate_alt1(v31, 816, 16, 0),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  Model_a61a80(v32, v91),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v8 = v32;
  *(_DWORD*)(v32 + 36) = v7;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v8[2] = v11;
    v8[3] = v10;
    v34 = std___1___shared_weak_count_lock_alt1(v10),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v34 != 0) {
      v35 = v34;
      if (v11 != nullptr) {
        v8[1] = Scene_a70a20(v11, v32),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v35),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  else {
    v8[2] = v11;
    v8[3] = 0;
  }
  v36 = (const char*)v8[18];
  v80 = v10;
  if (v36 != nullptr) {
    v37 = *(_QWORD*)(*v8 + 168LL);
    v8[50] = v37;
    v38 = *(_QWORD*)(*(_QWORD*)v37 + 8LL);
    if (v38 == 0) {
      goto LABEL_43;
    }
    v39 = strlen_alt1(v36),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v40 = v38 + 8;
    v41 = *(unsigned __int16*)(v38 + 12);
    v42 = v38 + 8 + 16 * v41;
    v43 = *(_DWORD*)v42;
    if ((signed __int32)*(_DWORD*)(v38 + 8) < (signed __int32)*(_DWORD*)v42) {
      do {
        v45 = (__int64)v43 >> 3;
        if (v39 > v45) {
          v44 = ((unsigned __int8)v36[v39 + ~v45] >> (v43 & 7)) & 1;
        }
        else {
          v44 = 0;
        }
        v41 = *(unsigned __int16*)(v38 + 12 + 16 * v41 + 2 * v44);
        v25 = v43 < (signed __int32)*(_DWORD*)(v40 + 16 * v41);
        v43 = *(_DWORD*)(v40 + 16 * v41);
      } while (v25);
      v42 = v40 + 16 * v41;
    }
    v46 = *(unsigned __int16**)(v42 + 8);
    if (v39 == *v46 &&
        memcmp_alt1((__int64)(v46 + 1), (__int64)v36, v39) == 0) {
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
      if (*(_BYTE*)(v9 + 165) == 1 && GameRoutine_ad7390_alt1((_QWORD*)v9)) {
        v50 = (_QWORD*)ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 592LL)),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v50 = nullptr;
      }
      GameRoutine_a6e580_alt1((void*)((__int64)v84_.v84), v50,
                              (const char*)v8[v49 + 13]),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v84_.v86 != 0 || v84_.v87 != 0 || v84_.v88 != 0 || v84_.v89 != 0 ||
          v84_.v90 != 0) {
        v55 = *v8;
        v56 = *(_QWORD*)(*(_QWORD*)(*v8 + 112LL) + 24LL);
        v57 = fw_memory_HeapManager_Allocate_alt1(*v5, 176, 16, 0),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameHr_a6ca80(v57, v55 + 136, v56, v84_.v84),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v59 = (__int64*)v8[6];
        v58 = v8[7];
        if ((unsigned __int64)v59 >= v58) {
          v61 = v8[5];
          v62 = (char*)v59 - v61;
          v63 = ((__int64)v59 - v61) >> 3;
          v64 = v63 + 1;
          if ((unsigned __int64)(v63 + 1) >> 61 != 0) {
            GameRoutine_14a69f0_alt1(),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v65 = v58 - v61;
          v66 = v5;
          if (v65 >> 2 > v64) {
            v64 = v65 >> 2;
          }
          if ((unsigned __int64)v65 >= 0x7FFFFFFFFFFFFFF8LL) {
            v67 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v67 = v64;
          }
          if (v67 != 0) {
            if (v67 >> 61 != 0) {
              GameRoutine_60a210_alt1(),
                  v33 = COERCE_AS(
                      __typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v68 = fw_memory_HeapManager_Allocate_alt1(*v66, 8 * v67, 16, 0),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          else {
            v68 = 0;
          }
          v69 = v68 + 8 * v67;
          v70 = (unsigned __int64)v59 - v61;
          v71 = (__int64)&v62[v68 + -8 * v63];
          *(_QWORD*)&v62[v68] = v57;
          v60 = (__int64)&v62[v68 + 8];
          memcpy_alt1(v71, v61, v70),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v8[5] = v71;
          v8[7] = v69;
          if (v61 != 0) {
            v5 = v66;
            if (*(_QWORD*)(*v66 + 200) != 0) {
              v72 = 128;
            }
            else {
              v72 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v66 + v72, v61),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v9 = v82;
          }
          else {
            v5 = v66;
            v9 = v82;
          }
        }
        else {
          *v59 = v57;
          v60 = (__int64)(v59 + 1);
        }
        v8[6] = v60;
      }
      if ((v84_.v84[0] & 1) != 0) {
        v33 = v84_.v85;
        if (v84_.v85 != 0) {
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v73 = 128;
          }
          else {
            v73 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v73, v84_.v85),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      ++v49;
    } while (v49 < v48);
  }
  ModelEmitter_14a5a10_alt1(v8, v33),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v80 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v80),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v74 = *(__int64**)(v81 + 472);
  *(_QWORD*)(v81 + 472) = v8;
  if (v74 != nullptr) {
    ModelEmitter_14a5be0(v74),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v75 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v75, (__int64)v74),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = *(_QWORD**)(v81 + 472);
  }
  v76 = (__int64*)v8[5];
  v77 = (__int64*)v8[6];
  if (v76 != v77) {
    v78 = *(_DWORD*)(*(_QWORD*)(v81 + 224) + 16LL);
    do {
      v79 = *v76++;
      *(_DWORD*)(v79 + 100) = v78;
    } while (v76 != v77);
  }
  *(_BYTE*)(v81 + 466) = 0;
}

__int64 ModelEmitter_Unknown3(float32x4_t* a1, long double a2)
{

#pragma clang fp contract(off)
  float v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  float32x4_t* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  char v11;
  char v12;
  float32x4_t* v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  float v23;
  float v24;
  __int64 v25;
  _QWORD** v26;
  _QWORD** v27;
  __int64 v28;
  __int64 v29;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((LANES128(a1[29]).n128_u8[3] & 1) != 0) {
    return 0;
  }
  if ((LANES128(a1[11]).n128_u8[4] & 1) == 0) {
    v3 = LANES128(a1[15]).n128_f32[0];
    if (v3 > 0x0.0p+0f) {
      LANES128(a1[15]).n128_f32[0] =
          v3 - *(float*)(*(_QWORD*)(LANES128(a1[14]).n128_u64[0] + 24) + 16LL);
      return 1;
    }
  }
  v4 = LANES128(a1[14]).n128_u64[0];
  if (*(float*)(v4 + 16) == 0x0.0p+0f) {
    return 1;
  }
  v5 = LANES128(a1[9]).n128_u64[1];
  if (v5 != 0) {
    LANES128(a1[11]).n128_u8[5] = *(_BYTE*)(v5 + 33);
  }
  if ((LANES128(a1[29]).n128_u8[2] & 1) != 0) {
    return 1;
  }
  v6 = LANES128(a1[29]).n128_u64[1];
  v7 = a1;
  v8 = *(__int64**)(v6 + 40);
  v9 = *(__int64**)(v6 + 48);
  if (v8 == v9) {
    goto LABEL_33;
  }
  LODWORD(a2) = *(_DWORD*)(v4 + 16);
  do {
    v10 = *v8++;
    *(_DWORD*)(v10 + 100) = LODWORD(a2);
  } while (v8 != v9);
  if ((LANES128(a1[29]).n128_u8[2] & 1) == 0) {
  LABEL_33:
    *(float32x4_t*)&a2 = GameRoutine_bcfba0(a1),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v12 = v11;
    a1 = v7;
    if ((v12 & 1) != 0) {
      v13 = *(float32x4_t**)LANES128(v7[29]).n128_u64[1];
      v14 = vsubq_f32(v13[27], v7[4]);
      a2 = COERCE_LONG_DOUBLE(vmulq_f32(v14, v14));
      *(float32x2_t*)&a2 = vadd_f32(
          COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&a2,
                                                      *(int8x16_t*)&a2, 8u))
                                     .n128_u64[0]),
          *(float32x2_t*)&a2);
      *(float32x2_t*)&a2 = vpadd_f32(*(float32x2_t*)&a2, *(float32x2_t*)&a2);
      if (*(float*)&a2 != 0x0.0p+0f) {
        goto LABEL_19;
      }
      v15 = vsubq_f32(v13[28], v7[5]);
      a2 = COERCE_LONG_DOUBLE(vmulq_f32(v15, v15));
      *(float32x2_t*)&a2 = vadd_f32(
          COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&a2,
                                                      *(int8x16_t*)&a2, 8u))
                                     .n128_u64[0]),
          *(float32x2_t*)&a2);
      *(float32x2_t*)&a2 = vpadd_f32(*(float32x2_t*)&a2, *(float32x2_t*)&a2);
      if (*(float*)&a2 != 0x0.0p+0f) {
        goto LABEL_19;
      }
      v16 = vsubq_f32(v13[29], v7[6]);
      a2 = COERCE_LONG_DOUBLE(vmulq_f32(v16, v16));
      *(float32x2_t*)&a2 = vadd_f32(
          COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&a2,
                                                      *(int8x16_t*)&a2, 8u))
                                     .n128_u64[0]),
          *(float32x2_t*)&a2);
      *(float32x2_t*)&a2 = vpadd_f32(*(float32x2_t*)&a2, *(float32x2_t*)&a2);
      if (*(float*)&a2 != 0x0.0p+0f ||
          (v17 = vsubq_f32(v13[30], v7[7]),
           a2 = COERCE_LONG_DOUBLE(vmulq_f32(v17, v17)),
           *(float32x2_t*)& a2 =
               vadd_f32(COERCE_AS(float32x2_t,
                                  LANES128_OF(vextq_s8(*(int8x16_t*)&a2,
                                                       *(int8x16_t*)&a2, 8u))
                                      .n128_u64[0]),
                        *(float32x2_t*)&a2),
           *(float32x2_t*)& a2 =
               vpadd_f32(*(float32x2_t*)&a2, *(float32x2_t*)&a2),
           *(float*)&a2 != 0x0.0p+0f)) {
      LABEL_19:
        v18 = LANES128(v7[7]).n128_u64[1];
        LANES128(v13[29]).n128_u64[1] = LANES128(v7[6]).n128_u64[1];
        LANES128(v13[30]).n128_u64[1] = v18;
        v19 = LANES128(v7[5]).n128_u64[1];
        LANES128(v13[27]).n128_u64[1] = LANES128(v7[4]).n128_u64[1];
        LANES128(v13[28]).n128_u64[1] = v19;
        v20 = LANES128(v7[4]).n128_u64[0];
        LANES128(v13[28]).n128_u64[0] = LANES128(v7[5]).n128_u64[0];
        LANES128(v13[27]).n128_u64[0] = v20;
        v21 = LANES128(v7[6]).n128_u64[0];
        LANES128(v13[30]).n128_u64[0] = LANES128(v7[7]).n128_u64[0];
        LANES128(v13[29]).n128_u64[0] = v21;
        LANES128(v13[31]).n128_u8[8] = 1;
        LANES128(v13[32]).n128_u32[0] = 3;
        LANES128(v13[32]).n128_u8[4] = 1;
      }
    }
  }
  if ((ModelEmitter_14a5a10(LANES128(a1[29]).n128_i64[1], a2) & 1) != 0) {
    v22 = LANES128(v7[29]).n128_u64[1];
    v23 = LANES128(v7[13]).n128_f32[3];
    v24 = *(float*)(v22 + 412);
    if (v24 != v23) {
      *(float*)(v22 + 412) = v23;
      v25 = *(_QWORD*)v22;
      v26 = *(_QWORD***)(v25 + 312);
      v27 = *(_QWORD***)(v25 + 320);
      if (v26 != v27) {
        if (v23 < 0x1.0000000000000p+0f != v24 >= 0x1.0000000000000p+0f) {
          do {
            v28 = (__int64)*v26;
            v26 += 2;
            (*(void (**)(__int64, const char*, __int64, float))(
                *(_QWORD*)v28 + 16LL))(v28, "DitherAlpha", 11, v23),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          } while (v26 != v27);
        }
        else {
          do {
            Material_addbe0(*v26, (__int64)"co_dither_alpha", 15,
                            v23 < 0x1.0000000000000p+0f),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            v29 = (__int64)*v26;
            v26 += 2;
            (*(void (**)(__int64, const char*, __int64, float))(
                *(_QWORD*)v29 + 16LL))(v29, "DitherAlpha", 11, v23),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          } while (v26 != v27);
        }
      }
    }
    *(_BYTE*)(*(_QWORD*)LANES128(v7[29]).n128_u64[1] + 32LL) =
        LANES128(v7[11]).n128_u8[5];
    return 1;
  }
  LANES128(v7[29]).n128_u8[3] = 1;
  return 0;
}

#pragma GCC visibility pop
