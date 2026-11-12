#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void BuildLeader_193c980(PSEUDO_X8, __int64 result,
                                                    __int64*);
__int64 GameHr_19390c0(__int64 result, char*, __int64, __int64, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 GameData_226b8f0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_19390a0();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 llvm_libcxx_21_libcxx_include___vector_1938d60(__int64 a1,
                                                       float32x4_t* a2,
                                                       float32x2_t** a3,
                                                       float a4);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void eft_bc9d40(PSEUDO_X8, __int64 result, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 llvm_libcxx_21_libcxx_include___vector_bd62d0(__int64 result, __int64,
                                                      __int64, __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
extern __int64 GameData_212e9d8[3];
extern __int64 eft_g_effectSystem;
extern char GameData_1a9f09e;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void GameHr_c1a240(__int64, _QWORD*);
void __attribute__((noreturn)) GameRoutine_66df80();
void __attribute__((noreturn)) GameRoutine_9337e0();
void __attribute__((noreturn)) GameRoutine_a675b0();
void __attribute__((noreturn)) GameRoutine_c184a0();
void llvm_libcxx_21_libcxx_include___vector_a67360(__int64* a1,
                                                   unsigned __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___vector_bd3fe0(__int64 result);
__int64 llvm_libcxx_21_libcxx_include___vector_193a2a0(__int64 a1, __int64* a2);
void llvm_libcxx_21_libcxx_include___vector_19433b0(_QWORD* a1, int a2);
_QWORD* llvm_libcxx_21_libcxx_include___vector_19a7740(__int64 a1,
                                                       unsigned __int8* a2,
                                                       __int64 a3,
                                                       __int64** a4);

void llvm_libcxx_21_libcxx_include___vector_a67360(__int64* a1,
                                                   unsigned __int64 a2)
{
  _OWORD* v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _OWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _OWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = (_OWORD*)a1[1];
  v3 = a1[2];
  if (a2 <= (v3 - (__int64)v2) >> 5) {
    if (a2 != 0) {
      v12 = &v2[2 * a2];
      v13 = 32 * a2 - 32;
      if ((~(_BYTE)v13 & 0xE0) != 0) {
        v14 = -(__int64)(((unsigned __int8)((unsigned int)v13 >> 5) + 1) & 7);
        do {
          *v2 = GameData_1a82f20;
          v2[1] = GameData_1a82ea0;
          v2 += 2;
          v15 = __CFADD__(v14++, 1);
        } while (!v15);
      }
      if (v13 >= 0xE0) {
        do {
          *v2 = GameData_1a82f20;
          v2[1] = GameData_1a82ea0;
          v2[2] = GameData_1a82f20;
          v2[3] = GameData_1a82ea0;
          v2[4] = GameData_1a82f20;
          v2[5] = GameData_1a82ea0;
          v2[6] = GameData_1a82f20;
          v2[7] = GameData_1a82ea0;
          v2[8] = GameData_1a82f20;
          v2[9] = GameData_1a82ea0;
          v2[10] = GameData_1a82f20;
          v2[11] = GameData_1a82ea0;
          v2[12] = GameData_1a82f20;
          v2[13] = GameData_1a82ea0;
          v2[14] = GameData_1a82f20;
          v2[15] = GameData_1a82ea0;
          v2 += 16;
        } while (v2 != v12);
      }
      v2 = v12;
    }
    a1[1] = (__int64)v2;
  }
  else {
    v5 = (__int64)v2 - *a1;
    v6 = a2 + (v5 >> 5);
    if (v6 >> 59 != 0) {
      GameRoutine_a675b0();
    }
    v7 = v3 - *a1;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v7 >> 4 > v6) {
      v6 = v7 >> 4;
    }
    if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFE0LL) {
      v9 = 0x7FFFFFFFFFFFFFFLL;
    }
    else {
      v9 = v6;
    }
    if (v9 != 0) {
      if (v9 >> 59 != 0) {
        GameRoutine_60a210();
      }
      v10 = a2;
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v9, 16, 0);
      a2 = v10;
    }
    else {
      v11 = 0;
    }
    v16 = v11 + v5;
    v17 = 32 * a2 - 32;
    v18 = v11 + v5 + 32 * a2;
    if ((~(_BYTE)v17 & 0xE0) != 0) {
      v20 = -(__int64)(((unsigned __int8)((unsigned int)v17 >> 5) + 1) & 7);
      v19 = (_OWORD*)(v11 + v5);
      do {
        *v19 = GameData_1a82f20;
        v19[1] = GameData_1a82ea0;
        v19 += 2;
        v15 = __CFADD__(v20++, 1);
      } while (!v15);
    }
    else {
      v19 = (_OWORD*)(v11 + v5);
    }
    if (v17 >= 0xE0) {
      do {
        *v19 = GameData_1a82f20;
        v19[1] = GameData_1a82ea0;
        v19[2] = GameData_1a82f20;
        v19[3] = GameData_1a82ea0;
        v19[4] = GameData_1a82f20;
        v19[5] = GameData_1a82ea0;
        v19[6] = GameData_1a82f20;
        v19[7] = GameData_1a82ea0;
        v19[8] = GameData_1a82f20;
        v19[9] = GameData_1a82ea0;
        v19[10] = GameData_1a82f20;
        v19[11] = GameData_1a82ea0;
        v19[12] = GameData_1a82f20;
        v19[13] = GameData_1a82ea0;
        v19[14] = GameData_1a82f20;
        v19[15] = GameData_1a82ea0;
        v19 += 16;
      } while (v19 != (_OWORD*)v18);
    }
    v21 = v11 + 32 * v9;
    v22 = *a1;
    v23 = a1[1] - *a1;
    v24 = v16 - v23;
    memcpy(v16 - v23, *a1, v23);
    *a1 = v24;
    a1[1] = v18;
    a1[2] = v21;
    if (v22 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v25, v22);
    }
  }
}

__int64 llvm_libcxx_21_libcxx_include___vector_bd3fe0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  float32x4_t** v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  int v10;
  const char* v11;
  unsigned __int64 v12;
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
  unsigned __int32 v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int8x16_t v36;
  float v37;
  float v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  float v52;
  unsigned __int64 v53;
  float v54;
  float v55;
  float v56;
  float v57;
  int v58;
  int v59;
  long double v60;
  float32x4_t v61;
  __int128 v62;
  __int128 v63;
  unsigned __int64 v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float32x4_t v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  bool v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int128 v98;
  float32x4_t v99;
  long double v100;
  float32x4_t v101;
  float32x4_t v102;
  __int128 v103;
  struct {
    __int64 v104[2];
    __int64 v105;
  } v104_;
  struct {
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    float32x4_t* v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
  } v106_;
  struct {
    __int64 v117;
    unsigned __int64 v118;
    __int64 v119;
  } v117_;
  struct {
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    float32x4_t* v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
  } v120_;

  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v1 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)result + 120LL) + 448LL);
  if (v1 == 0) {
    return result;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)result + 568LL) + 784LL);
  if (v2 == 0) {
    return result;
  }
  v3 = (float32x4_t**)result;
  eft_bc9d40((void*)(&v120_.v120),
             *(_QWORD*)(*(_QWORD*)(*(_QWORD*)result + 120LL) + 448LL), 1),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v4 = GameData_212e9d8[0];
  if (v120_.v122 != 0) {
    v5 = std___1___shared_weak_count_lock(v120_.v122),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v5 != 0) {
      v6 = v120_.v121;
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v6 != 0) {
          goto LABEL_52;
        }
      }
      else {
        v7 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
        std___1___shared_weak_count___release_weak(v7),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
        if (v6 != 0) {
          goto LABEL_52;
        }
      }
    }
  }
  BYTE5(v117_.v117) = 0;
  LOBYTE(v117_.v117) = 8;
  *(_DWORD*)((char*)&v117_.v117 + 1) = 779382117;
  v8 = *(_QWORD*)(v1 + 152);
  if (v8 != 0) {
    v10 = *(unsigned __int8*)(v8 + 72);
    v9 = (const char*)(v8 + 72);
    if (v10 != 0) {
      v11 = v9;
    }
    else {
      v11 = "<noname>";
    }
  }
  else {
    v11 = &GameData_1a9f09e;
  }
  v12 = strlen(v11),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  GameRoutine_1a09ce0((__int64)&v117_.v117, v11, v12),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if ((v117_.v117 & 1) != 0) {
    fw_text_String_CopyTerminated(v104_.v104, v117_.v119, v117_.v118),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  else {
    v104_.v104[0] = v117_.v117;
    v104_.v104[1] = v117_.v118;
    v104_.v105 = v117_.v119;
  }
  llvm_libcxx_21_libcxx_include___vector_bd62d0((__int64)&v106_.v106, v1, v2,
                                                (__int64)v104_.v104),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v14 = v106_.v107;
  v13 = v106_.v108;
  if (v106_.v108 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v106_.v108 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = v120_.v122;
  v120_.v121 = v14;
  v120_.v122 = v13;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v120_.v123 = v106_.v109;
  v120_.v124 = v106_.v110;
  v17 = v106_.v112;
  v16 = v106_.v113;
  if (v106_.v113 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v106_.v113 + 16), 1u,
                              memory_order_relaxed);
  }
  v18 = v120_.v127;
  v120_.v126 = v17;
  v120_.v127 = v16;
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak(v18),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v19 = v106_.v113;
  v106_.v113 = 0;
  v120_.v128 = v106_.v114;
  v120_.v129 = v106_.v115;
  v120_.v130 = v106_.v116;
  v106_.v111 = v4 + 16;
  v106_.v112 = 0;
  if (v19 != 0) {
    std___1___shared_weak_count___release_weak(v19),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v106_.v114 = 0;
    if (v106_.v113 != 0) {
      std___1___shared_weak_count___release_weak(v106_.v113),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
  else {
    v106_.v114 = 0;
  }
  v20 = v106_.v108;
  v106_.v108 = 0;
  v106_.v106 = v4 + 16;
  v106_.v107 = 0;
  if (v20 != 0) {
    std___1___shared_weak_count___release_weak(v20),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v106_.v109 = 0;
    if (v106_.v108 != 0) {
      std___1___shared_weak_count___release_weak(v106_.v108),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    if ((v104_.v104[0] & 1) == 0) {
      goto LABEL_39;
    }
    goto LABEL_35;
  }
  v106_.v109 = 0;
  if ((v104_.v104[0] & 1) != 0) {
  LABEL_35:
    if (v104_.v105 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v104_.v105),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
  }
LABEL_39:
  if (v120_.v122 != 0) {
    v22 = std___1___shared_weak_count_lock(v120_.v122),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if (v22 != 0) {
      v23 = v120_.v121;
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = v22;
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
        std___1___shared_weak_count___release_weak(v24),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      if (v23 != 0) {
        v25 = v120_.v122;
        if (v120_.v122 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v120_.v122 + 16),
                                    1u, memory_order_relaxed);
          v26 = v120_.v122;
          v120_.v122 = v25;
          if (v26 != 0) {
            std___1___shared_weak_count___release_weak(v26),
                v61 = COERCE_AS(__typeof__(v61),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v69 = COERCE_AS(__typeof__(v69),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
        }
        if ((v117_.v117 & 1) != 0 && v117_.v119 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v117_.v119),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
      LABEL_52:
        v28 = v120_.v122;
        v29 = LANES128((*v3)[1]).n128_u32[0];
        if (v29 == 4) {
          v30 = 2;
        }
        else {
          v30 = 0;
        }
        v101 = (*v3)[55];
        v102 = (*v3)[52];
        if (v29 == 3) {
          v31 = 1;
        }
        else {
          v31 = v30;
        }
        LANES128(v120_.v124[6]).n128_u32[2] = v31;
        if (v28 != 0) {
          v32 = std___1___shared_weak_count_lock(v28),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v32 != 0) {
            v33 = v120_.v121;
            if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v34 = v32;
              (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
                  v61 = COERCE_AS(__typeof__(v61),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
              std___1___shared_weak_count___release_weak(v34),
                  v61 = COERCE_AS(__typeof__(v61),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            if (v33 != 0) {
              v120_.v124[1] = v101;
            }
          }
        }
        v35 = *(_DWORD*)(v2 + 4);
        if ((v35 & 1) != 0) {
          v36 = vmulq_f32(v102, v102);
          LANES128(v36).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
                  .n64_u64[0];
          v37 = *(float*)(v2 + 24) *
                LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]))))
                    .n64_f32[0];
          if (v37 >= 0x1.47ae140000000p-7f) {
            v38 = v37;
          }
          else {
            v38 = 0x1.47ae140000000p-7f;
          }
          if (v120_.v122 != 0) {
            v39 = std___1___shared_weak_count_lock(v120_.v122),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v39 != 0) {
              v40 = v120_.v121;
              if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v41 = v39;
                (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39),
                    v61 = COERCE_AS(__typeof__(v61),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v62 = COERCE_AS(__typeof__(v62),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                std___1___shared_weak_count___release_weak(v41),
                    v61 = COERCE_AS(__typeof__(v61),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v62 = COERCE_AS(__typeof__(v62),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              if (v40 != 0) {
                LANES128(v120_.v124[2]).n128_f32[0] = v38;
              }
            }
          }
          v35 = *(_DWORD*)(v2 + 4);
        }
        if ((v35 & 4) != 0) {
          v42 = 0x1.0000000000000p+0f;
          v43 = *(
              _QWORD*)(*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 296) - 24LL) +
                       8LL * *(int*)(v1 + 176));
          v44 = *(_QWORD*)(v43 + 16);
          if (v44 != 0) {
            v45 = *(_QWORD*)(v43 + 8);
            v46 = *(_QWORD*)(v43 + 16);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                                      memory_order_relaxed);
            v47 = std___1___shared_weak_count_lock(v46),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
            std___1___shared_weak_count___release_weak(v44),
                v61 = COERCE_AS(__typeof__(v61),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v69 = COERCE_AS(__typeof__(v69),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v47 != 0) {
              if (v45 != 0) {
                if (*(int*)v45 < 1) {
                  v50 = 0;
                  v49 = 0;
                }
                else {
                  v48 = *(__int64**)(v45 + 112);
                  v50 = *v48;
                  v49 = v48[1];
                  if (v49 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v49 + 8), 1u,
                        memory_order_relaxed);
                  }
                }
                v52 = 0x1.0000000000000p+0f;
                v53 = LANES128((*v3)[10]).n128_u64[0];
                v54 = *(float*)(v53 + 1488);
                v55 = *(float*)(v53 + 1492);
                v56 = *(float*)(v53 + 1496);
                v57 = *(float*)(v53 + 1500);
                v58 = *(unsigned __int8*)(v53 + 2454);
                v59 = *(unsigned __int8*)(v53 + 2455);
                if (v50 != 0) {
                  v60 = ((long double (*)(__int64, float)) *
                         (_QWORD*)(*(_QWORD*)v50 + 16LL))(
                      v50, 0x1.0000000000000p+0f),
                  v61 = COERCE_AS(__typeof__(v61),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v99 = v61;
                  v100 = v60;
                  v103 = v62;
                  v98 = v63;
                  v64 = LANES128_OF(((__n128 (*)(__int64)) *
                                     (_QWORD*)(*(_QWORD*)v50 + 24LL))(v50))
                            .n128_u64[1],
                  v61 = COERCE_AS(__typeof__(v61),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v66 =
                      *(float*)&v98 +
                      (float)((float)(vmuls_lane_f32(
                                          LANES128(v99).n128_f32[0],
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v101).n128_u64[0]),
                                          1) +
                                      (float)(*(float*)&v100 *
                                              LANES128(v101).n128_f32[0])) +
                              (float)(*(float*)&v103 *
                                      LANES128(v101).n128_f32[2]));
                  v67 =
                      *((float*)&v98 + 2) +
                      (float)((float)(vmuls_lane_f32(LANES128(v101).n128_f32[1],
                                                     v99, 2) +
                                      (float)(LANES128(v101).n128_f32[0] *
                                              *((float*)&v100 + 2))) +
                              (float)(LANES128(v101).n128_f32[2] *
                                      *((float*)&v103 + 2)));
                  v68 = *((float*)&v98 + 1) +
                        (float)((float)(LANES128_OF(vmulq_f32(v101, v99))
                                            .n128_f32[1] +
                                        (float)(LANES128(v101).n128_f32[0] *
                                                *((float*)&v100 + 1))) +
                                (float)(LANES128(v101).n128_f32[2] *
                                        *((float*)&v103 + 1)));
                  v70 = vmuls_lane_f32(v68, v69, 3);
                  v73 = (float)(vmuls_lane_f32(v68, v69, 2) +
                                (float)(v66 * *(float*)&v64)) +
                        (float)(v67 * v72);
                  v75 = v74 +
                        (float)((float)(v70 +
                                        (float)(v66 * *((float*)&v64 + 1))) +
                                (float)(v67 * v71));
                  if (v75 < 0x0.0p+0f) {
                    v75 = -v75;
                  }
                  v76 = 0x1.0000000000000p+0f -
                        (float)(PSEUDO_UNFUSED(
                            (float)(v65 + v73) *
                            (float)(0x1.0000000000000p+0f / v75)));
                  v77 = (*(float (**)(__int64))(*(_QWORD*)v50 + 56LL))(v50),
                  v61 = COERCE_AS(__typeof__(v61),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v78 = (*(float (**)(__int64))(*(_QWORD*)v50 + 64LL))(v50),
                  v61 = COERCE_AS(__typeof__(v61),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v52 =
                      (float)-(float)(v78 * v77) /
                      (float)-(float)(v78 - (float)(v76 * (float)(v78 - v77)));
                }
                v79 = (float)(v52 - v54) / (float)(v55 - v54);
                v80 = v52 - v56;
                if (v79 <= 0x1.0000000000000p+0f) {
                  v81 = v79;
                }
                else {
                  v81 = 0x1.0000000000000p+0f;
                }
                v82 = v79 < 0x0.0p+0f;
                v83 = 0x0.0p+0f;
                if (!v82) {
                  v83 = v81;
                }
                v84 = v80 / (float)(v57 - v56);
                if (v58 == 0) {
                  v83 = 0x1.0000000000000p+0f;
                }
                if (v84 <= 0x1.0000000000000p+0f) {
                  v85 = v84;
                }
                else {
                  v85 = 0x1.0000000000000p+0f;
                }
                v86 = 0x1.0000000000000p+0f - v85;
                if (v84 >= 0x0.0p+0f) {
                  v87 = v86;
                }
                else {
                  v87 = 0x1.0000000000000p+0f;
                }
                if (v59 == 0) {
                  v87 = 0x1.0000000000000p+0f;
                }
                v42 = v83 * v87;
                if (v49 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49),
                      v61 = COERCE_AS(__typeof__(v61),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v69 = COERCE_AS(__typeof__(v69),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                  std___1___shared_weak_count___release_weak(v49),
                      v61 = COERCE_AS(__typeof__(v61),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v62 = COERCE_AS(__typeof__(v62),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v63 = COERCE_AS(__typeof__(v63),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v69 = COERCE_AS(__typeof__(v69),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47),
                    v61 = COERCE_AS(__typeof__(v61),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v62 = COERCE_AS(__typeof__(v62),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                std___1___shared_weak_count___release_weak(v47),
                    v61 = COERCE_AS(__typeof__(v61),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v62 = COERCE_AS(__typeof__(v62),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
            }
          }
          if (v120_.v122 != 0) {
            v88 = *(float*)(LANES128((*v3)[7]).n128_u64[1] + 268);
            v89 = std___1___shared_weak_count_lock(v120_.v122),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v62 =
                COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v63 =
                COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v89 != 0) {
              v90 = v120_.v121;
              if (atomic_fetch_add((atomic_ullong* volatile)(v89 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v91 = v89;
                (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89),
                    v61 = COERCE_AS(__typeof__(v61),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v62 = COERCE_AS(__typeof__(v62),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                std___1___shared_weak_count___release_weak(v91),
                    v61 = COERCE_AS(__typeof__(v61),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v62 = COERCE_AS(__typeof__(v62),
                                    PSEUDO_REGISTER(__n128, "v2", "=w")),
                    v63 = COERCE_AS(__typeof__(v63),
                                    PSEUDO_REGISTER(__n128, "v3", "=w")),
                    v69 = COERCE_AS(__typeof__(v69),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              if (v90 != 0) {
                *(float*)(v120_.v123 + 72) = v42 * v88;
              }
            }
          }
        }
        if ((*(_BYTE*)(eft_g_effectSystem + 313) & 1) != 0) {
          v92 = 0;
          v93 = v120_.v122;
          if (v120_.v122 == 0) {
            goto LABEL_127;
          }
        LABEL_122:
          v94 = std___1___shared_weak_count_lock(v93),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v94 != 0) {
            v95 = v120_.v121;
            if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v96 = v94;
              (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94),
                  v61 = COERCE_AS(__typeof__(v61),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
              std___1___shared_weak_count___release_weak(v96),
                  v61 = COERCE_AS(__typeof__(v61),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v62 = COERCE_AS(__typeof__(v62),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v63 = COERCE_AS(__typeof__(v63),
                                  PSEUDO_REGISTER(__n128, "v3", "=w")),
                  v69 = COERCE_AS(__typeof__(v69),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            if (v95 != 0) {
              *(_BYTE*)(v120_.v123 + 92) = v92 & 1;
            }
          }
          goto LABEL_127;
        }
        v92 = *(_BYTE*)(v1 + 181);
        v93 = v120_.v122;
        if (v120_.v122 != 0) {
          goto LABEL_122;
        }
      LABEL_127:
        v97 = v120_.v127;
        v120_.v127 = 0;
        v120_.v125 = v4 + 16;
        v120_.v126 = 0;
        if (v97 != 0) {
          std___1___shared_weak_count___release_weak(v97),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          v120_.v128 = 0;
          if (v120_.v127 != 0) {
            std___1___shared_weak_count___release_weak(v120_.v127),
                v61 = COERCE_AS(__typeof__(v61),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v62 = COERCE_AS(__typeof__(v62),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v63 = COERCE_AS(__typeof__(v63),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v69 = COERCE_AS(__typeof__(v69),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
        }
        else {
          v120_.v128 = 0;
        }
        result = v120_.v122;
        v120_.v122 = 0;
        v120_.v120 = v4 + 16;
        v120_.v121 = 0;
        if (result != 0) {
          std___1___shared_weak_count___release_weak(result),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          result = v120_.v122;
          v120_.v123 = 0;
          if (v120_.v122 != 0) {
            return std___1___shared_weak_count___release_weak(v120_.v122);
          }
        }
        return result;
      }
    }
  }
  if ((v117_.v117 & 1) != 0 && v117_.v119 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v51,
                                  v117_.v119),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v63 = COERCE_AS(__typeof__(v63), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  goto LABEL_127;
}

__int64 llvm_libcxx_21_libcxx_include___vector_1938d60(__int64 a1,
                                                       float32x4_t* a2,
                                                       float32x2_t** a3,
                                                       float a4)
{
  __int64 result;
  __int64 v9;
  unsigned __int64 v10;
  float32x2_t* v11;
  float32x2_t* v12;
  unsigned __int64 v13;
  float32x4_t v14;
  float v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64* v37;
  __int64 v38;
  __int64 v39;
  struct {
    char* v40;
    unsigned __int64* v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    char gap56_[8];
    unsigned __int64 v45;
    unsigned __int64 v46;
    unsigned __int64 v47;
    unsigned __int64 v48;
    unsigned __int64 v49;
    unsigned __int64 v50;
    unsigned __int64 v51;
    unsigned __int64 v52;
    float v53;
  } v40_;
  struct {
    unsigned __int64 v54;
    __int64 v55;
  } v54_;
  char v56;

  result = *(_QWORD*)(a1 + 8);
  if (result == 0) {
    *(_QWORD*)a1 = 0;
    *(_QWORD*)(a1 + 8) = 0;
    return result;
  }
  result = std___1___shared_weak_count_lock(result);
  v9 = result;
  if (result == 0 || *(_QWORD*)a1 == 0) {
    result = *(_QWORD*)(a1 + 8);
    *(_QWORD*)a1 = 0;
    *(_QWORD*)(a1 + 8) = 0;
    if (result == 0) {
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if (*(_BYTE*)(*(_QWORD*)a1 + 32LL) == 1) {
    v38 = *(_QWORD*)a1;
    v10 = *(_QWORD*)(a1 + 192);
    *(_QWORD*)(a1 + 200) = v10;
    v12 = *a3;
    v11 = a3[1];
    v39 = GameData_226b8f0;
    if (*a3 != v11) {
      do {
        if (LANES64(v12[3]).n64_u8[0] == 1) {
          v13 = *(_QWORD*)(a1 + 208);
          v14 = vaddq_f32(
              vmlaq_n_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(*a2,
                                  COERCE_FLOAT(LANES64(v12[10]).n64_u64[0])),
                      a2[1], v12[10], 1),
                  a2[2], LANES64(v12[11]).n64_f32[0]),
              a2[3]);
          v15 = vmuls_lane_f32(
              0x1.0000000000000p+0f / LANES128(v14).n128_f32[3], v14, 2);
          if (v10 < v13) {
            *(_QWORD*)v10 = v12;
            *(float*)(v10 + 8) = v15;
            v10 += 16LL;
          }
          else {
            v16 = *(_QWORD*)(a1 + 192);
            v17 = v10 - v16;
            v18 = (__int64)(v10 - v16) >> 4;
            v19 = v18 + 1;
            if ((unsigned __int64)(v18 + 1) >> 60 != 0) {
              GameRoutine_19390a0();
            }
            v20 = v13 - v16;
            if (v20 >> 3 > v19) {
              v19 = v20 >> 3;
            }
            if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF0LL) {
              v21 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v21 = v19;
            }
            if (v21 != 0) {
              if (v21 >> 60 != 0) {
                GameRoutine_60a210();
              }
              v22 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v21, 16, 0);
            }
            else {
              v22 = 0;
            }
            v23 = v22 + v17;
            v24 = v22 + 16 * v21;
            v25 = v22 + v17 - 16 * v18;
            *(_QWORD*)v23 = v12;
            *(float*)(v23 + 8) = v15;
            v10 = v22 + v17 + 16;
            memcpy(v25, v16, v17);
            *(_QWORD*)(a1 + 192) = v25;
            *(_QWORD*)(a1 + 200) = v10;
            *(_QWORD*)(a1 + 208) = v24;
            if (v16 != 0) {
              v26 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v26 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v16);
            }
          }
          *(_QWORD*)(a1 + 200) = v10;
        }
        v12 += 12;
      } while (v12 != v11);
    }
    if ((*(_BYTE*)(a1 + 240) & 1) != 0) {
      v27 = *(_QWORD*)(a1 + 192);
      v54_.v54 = 8;
      v40_.v40 = &v56;
      v40_.v41 = &v54_.v54;
      if (v27 != v10) {
        GameHr_19390c0(v27, (char*)v10, (__int64)&v40_.v40,
                       (2 * __clz((__int64)(v10 - v27) >> 4)) ^ 0x7E, 1);
      }
    }
    v40_.v40 = (char*)v38;
    v40_.v41 = (unsigned __int64*)v9;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    v40_.v53 = a4;
    v28 = *(_QWORD*)(a1 + 192);
    v29 = LANES128(a2[3]).n128_u64[0];
    v30 = *(_QWORD*)(a1 + 200) - v28;
    v40_.v52 = LANES128(a2[3]).n128_u64[1];
    v40_.v42 = v28;
    v40_.v43 = v30 >> 4;
    v31 = LANES128(a2[2]).n128_u64[0];
    v32 = *(_QWORD*)(a1 + 216);
    v40_.v50 = LANES128(a2[2]).n128_u64[1];
    v40_.v51 = v29;
    v33 = LANES128(*(a2)).n128_u64[0];
    v34 = LANES128(*(a2)).n128_u64[1];
    v40_.v44 = v32;
    v40_.v49 = v31;
    v40_.v45 = v33;
    v40_.v46 = v34;
    v35 = LANES128(a2[1]).n128_u64[1];
    v40_.v47 = LANES128(a2[1]).n128_u64[0];
    v40_.v48 = v35;
    result = X8CALL_X0(__int64, BuildLeader_193c980((void*)(&v54_.v54),
                                                    *(_QWORD*)(v39 + 16),
                                                    (__int64*)&v40_.v40));
    v36 = v54_.v55;
    *(_QWORD*)(a1 + 224) = v54_.v54;
    *(_QWORD*)(a1 + 232) = v36;
    v37 = v40_.v41;
    v54_.v54 = 0;
    v54_.v55 = 10000;
    if (v40_.v41 == nullptr ||
        atomic_fetch_add((atomic_ullong* volatile)(v40_.v41 + 1),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
    LABEL_28:
      if (v9 == 0) {
        return result;
      }
      goto LABEL_29;
    }
    (*(void (**)(unsigned __int64*))(*v37 + 16))(v37);
    result = (__int64)v37;
  LABEL_27:
    result = std___1___shared_weak_count___release_weak(result);
    goto LABEL_28;
  }
LABEL_29:
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___vector_193a2a0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int* v3;
  unsigned int* v4;
  __int64* v5;
  __int64* v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  unsigned int* v13;
  _DWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  _DWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64** v50;
  __int64** v51;
  unsigned int v52;
  __int64* v53;
  unsigned int v54;
  __int64 v55;
  __int64* v56;
  unsigned int v57;
  __int64** v58;
  __int64** v59;
  __int64* v60;
  unsigned int v61;
  __int64 v62;
  __int64* v63;
  unsigned int v64;
  __int64** v65;
  __int64** v66;
  unsigned int v67;
  __int64 v68;
  __int64* v69;
  int v70;
  float32x4_t v71;
  float32x4_t v72;
  __int64 v73;
  __int64 v74;
  float32x4_t v75;
  unsigned __int64 v76;
  _OWORD* v77;
  __int128 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64** v92;
  unsigned int v93;
  unsigned int* v94;
  unsigned int* v95;
  __int64* v96;
  unsigned int v97;
  __int64** v98;
  __int64** v99;
  unsigned int v100;
  __int64** v101;
  __int64 v102;
  __int64* v103;
  float32x4_t v104;
  float32x4_t v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  bool v109;
  unsigned __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int128 v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  __int64* v119;
  struct {
    __int64* v120;
    __int64 v121;
  } v120_;

  v2 = *(_QWORD*)(a1 + 32);
  v120_.v120 = nullptr;
  v120_.v121 = 0;
  *(_QWORD*)(a1 + 40) = v2;
  *(_QWORD*)(a1 + 64) = *(_QWORD*)(a1 + 56);
  v3 = (unsigned int*)a2[9];
  v4 = (unsigned int*)a2[10];
  v119 = (__int64*)&v120_.v120;
  if (v3 == v4) {
    goto LABEL_120;
  }
  v5 = a2;
  do {
    v8 = v3[4];
    v9 = v5[12];
    if ((*(_BYTE*)(v9 + 40LL * (int)v8 + 31) & 1) != 0) {
      do {
        v10 = v9 + 40LL * (int)v8;
        v11 = *(unsigned __int8*)(v10 + 36);
        v8 = *(_DWORD*)(v10 + 32);
      } while ((v8 & 0x80000000) == 0 && v11 != 0);
      if ((v8 & 0x80000000) != 0 && v11 != 0) {
        v13 = *(unsigned int**)(a1 + 64);
        v12 = *(_QWORD*)(a1 + 72);
        if ((unsigned __int64)v13 >= v12) {
          v15 = *(_QWORD*)(a1 + 56);
          v16 = (unsigned __int64)v13 - v15;
          v17 = ((__int64)v13 - v15) >> 2;
          v18 = v17 + 1;
          if ((unsigned __int64)(v17 + 1) >> 62 != 0) {
            goto LABEL_149;
          }
          v19 = v12 - v15;
          if (v19 >> 1 > v18) {
            v18 = v19 >> 1;
          }
          if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFFCLL) {
            v20 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v20 = v18;
          }
          if (v20 != 0) {
            if (v20 >> 62 != 0) {
              goto LABEL_150;
            }
            v21 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v20, 16, 0);
          }
          else {
            v21 = 0;
          }
          v22 = v21 + 4 * v20;
          v23 = v21 + v16 - 4 * v17;
          *(_DWORD*)(v21 + v16) = *v3;
          v14 = (_DWORD*)(v21 + v16 + 4);
          memcpy(v23, v15, v16);
          *(_QWORD*)(a1 + 56) = v23;
          *(_QWORD*)(a1 + 64) = v14;
          *(_QWORD*)(a1 + 72) = v22;
          if (v15 != 0) {
            v24 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v24 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v15);
          }
          v5 = a2;
        }
        else {
          *v13 = *v3;
          v14 = v13 + 1;
        }
        v25 = *(_QWORD*)(a1 + 72);
        *(_QWORD*)(a1 + 64) = v14;
        if ((unsigned __int64)v14 >= v25) {
          v27 = *(_QWORD*)(a1 + 56);
          v28 = (unsigned __int64)v14 - v27;
          v29 = ((__int64)v14 - v27) >> 2;
          v30 = v29 + 1;
          if ((unsigned __int64)(v29 + 1) >> 62 != 0) {
            goto LABEL_149;
          }
          v31 = v25 - v27;
          if (v31 >> 1 > v30) {
            v30 = v31 >> 1;
          }
          if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFFCLL) {
            v32 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v32 = v30;
          }
          if (v32 != 0) {
            if (v32 >> 62 != 0) {
              goto LABEL_150;
            }
            v33 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v32, 16, 0);
          }
          else {
            v33 = 0;
          }
          v34 = v33 + 4 * v32;
          v35 = v33 + v28 - 4 * v29;
          *(_DWORD*)(v33 + v28) = v3[1];
          v26 = (_DWORD*)(v33 + v28 + 4);
          memcpy(v35, v27, v28);
          *(_QWORD*)(a1 + 56) = v35;
          *(_QWORD*)(a1 + 64) = v26;
          *(_QWORD*)(a1 + 72) = v34;
          if (v27 != 0) {
            v36 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v27);
          }
          v5 = a2;
        }
        else {
          *v14 = v3[1];
          v26 = v14 + 1;
        }
        v37 = *(_QWORD*)(a1 + 72);
        *(_QWORD*)(a1 + 64) = v26;
        if ((unsigned __int64)v26 >= v37) {
          v39 = *(_QWORD*)(a1 + 56);
          v40 = (unsigned __int64)v26 - v39;
          v41 = ((__int64)v26 - v39) >> 2;
          v42 = v41 + 1;
          if ((unsigned __int64)(v41 + 1) >> 62 != 0) {
          LABEL_149:
            GameRoutine_66df80();
          }
          v43 = v37 - v39;
          if (v43 >> 1 > v42) {
            v42 = v43 >> 1;
          }
          if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFFCLL) {
            v44 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v44 = v42;
          }
          if (v44 != 0) {
            if (v44 >> 62 != 0) {
            LABEL_150:
              GameRoutine_60a210();
            }
            v45 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v44, 16, 0);
          }
          else {
            v45 = 0;
          }
          v46 = v45 + 4 * v44;
          v47 = v45 + v40 - 4 * v41;
          *(_DWORD*)(v45 + v40) = v3[2];
          v38 = v45 + v40 + 4;
          memcpy(v47, v39, v40);
          *(_QWORD*)(a1 + 56) = v47;
          *(_QWORD*)(a1 + 64) = v38;
          *(_QWORD*)(a1 + 72) = v46;
          if (v39 != 0) {
            v48 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v48 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v39);
          }
          v5 = a2;
        }
        else {
          *v26 = v3[2];
          v38 = (__int64)(v26 + 1);
        }
        *(_QWORD*)(a1 + 64) = v38;
        v49 = v120_.v120;
        v50 = &v120_.v120;
        v51 = &v120_.v120;
        v52 = *v3;
        if (v120_.v120 != nullptr) {
          v53 = v120_.v120;
          while (1) {
            while (1) {
              v51 = (__int64**)v53;
              v54 = *((_DWORD*)v53 + 7);
              if (v52 >= v54) {
                break;
              }
              v53 = *v51;
              v50 = v51;
              if (*v51 == nullptr) {
                goto LABEL_69;
              }
            }
            if (v54 >= v52) {
              break;
            }
            v53 = v51[1];
            if (v53 == nullptr) {
              v50 = v51 + 1;
              goto LABEL_69;
            }
          }
        }
        else {
        LABEL_69:
          v55 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
          *(_DWORD*)(v55 + 28) = v52;
          *(_DWORD*)(v55 + 32) = 0;
          *(_QWORD*)v55 = 0;
          *(_QWORD*)(v55 + 8) = 0;
          *(_QWORD*)(v55 + 16) = v51;
          *v50 = (__int64*)v55;
          if (*v119 != 0) {
            v119 = (__int64*)*v119;
            v56 = *v50;
          }
          else {
            v56 = (__int64*)v55;
          }
          fw_containers_BalanceAfterInsert(v120_.v120, v56);
          v49 = v120_.v120;
          ++v120_.v121;
        }
        v57 = v3[1];
        v58 = &v120_.v120;
        v59 = &v120_.v120;
        if (v49 != nullptr) {
          v60 = v49;
          while (1) {
            while (1) {
              v59 = (__int64**)v60;
              v61 = *((_DWORD*)v60 + 7);
              if (v57 >= v61) {
                break;
              }
              v60 = *v59;
              v58 = v59;
              if (*v59 == nullptr) {
                goto LABEL_80;
              }
            }
            if (v61 >= v57) {
              break;
            }
            v60 = v59[1];
            if (v60 == nullptr) {
              v58 = v59 + 1;
              goto LABEL_80;
            }
          }
        }
        else {
        LABEL_80:
          v62 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
          *(_DWORD*)(v62 + 28) = v57;
          *(_DWORD*)(v62 + 32) = 0;
          *(_QWORD*)v62 = 0;
          *(_QWORD*)(v62 + 8) = 0;
          *(_QWORD*)(v62 + 16) = v59;
          *v58 = (__int64*)v62;
          if (*v119 != 0) {
            v119 = (__int64*)*v119;
            v63 = *v58;
          }
          else {
            v63 = (__int64*)v62;
          }
          fw_containers_BalanceAfterInsert(v120_.v120, v63);
          v49 = v120_.v120;
          ++v120_.v121;
        }
        v64 = v3[2];
        v65 = &v120_.v120;
        v66 = &v120_.v120;
        if (v49 != nullptr) {
          while (1) {
            while (1) {
              v66 = (__int64**)v49;
              v67 = *((_DWORD*)v49 + 7);
              if (v64 >= v67) {
                break;
              }
              v49 = *v66;
              v65 = v66;
              if (*v66 == nullptr) {
                goto LABEL_91;
              }
            }
            if (v67 >= v64) {
              break;
            }
            v49 = v66[1];
            if (v49 == nullptr) {
              v65 = v66 + 1;
              goto LABEL_91;
            }
          }
        }
        else {
        LABEL_91:
          v68 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
          *(_DWORD*)(v68 + 28) = v64;
          *(_DWORD*)(v68 + 32) = 0;
          *(_QWORD*)v68 = 0;
          *(_QWORD*)(v68 + 8) = 0;
          *(_QWORD*)(v68 + 16) = v66;
          *v65 = (__int64*)v68;
          if (*v119 != 0) {
            v119 = (__int64*)*v119;
            v7 = *v65;
          }
          else {
            v7 = (__int64*)v68;
          }
          fw_containers_BalanceAfterInsert(v120_.v120, v7);
          ++v120_.v121;
        }
      }
    }
    v3 += 6;
  } while (v3 != v4);
  if (v120_.v121 == 0) {
  LABEL_120:
    v93 = 0;
  }
  else {
    v69 = v119;
    if (v119 == (__int64*)&v120_.v120) {
      v117 = COERCE_AS(float32x4_t, GameData_1a82f20);
      v116 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    }
    else {
      v70 = 0;
      v116 = COERCE_AS(float32x4_t, GameData_1a82ea0);
      v117 = COERCE_AS(float32x4_t, GameData_1a82f20);
      do {
        v73 = v5[3];
        v74 = 16LL * *((unsigned int*)v69 + 7);
        v75 = *(float32x4_t*)(v73 + v74);
        *(_QWORD*)&v78 = *(_QWORD*)(v73 + v74);
        v77 = *(_OWORD**)(a1 + 40);
        v76 = *(_QWORD*)(a1 + 48);
        *((_QWORD*)&v78 + 1) = LANES128(v75).n128_u32[2] | 0x3F80000000000000LL;
        if ((unsigned __int64)v77 >= v76) {
          v80 = *(_QWORD*)(a1 + 32);
          v81 = (char*)v77 - v80;
          v82 = ((__int64)v77 - v80) >> 4;
          v83 = v82 + 1;
          if ((unsigned __int64)(v82 + 1) >> 60 != 0) {
            GameRoutine_c184a0();
          }
          v84 = v76 - v80;
          v115 = v75;
          if (v84 >> 3 > v83) {
            v83 = v84 >> 3;
          }
          if ((unsigned __int64)v84 >= 0x7FFFFFFFFFFFFFF0LL) {
            v85 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v85 = v83;
          }
          if (v85 != 0) {
            v114 = v78;
            if (v85 >> 60 != 0) {
              goto LABEL_150;
            }
            v86 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v85, 16, 0);
            v78 = v114;
          }
          else {
            v86 = 0;
          }
          v87 = v86 + 16 * v85;
          v88 = (unsigned __int64)v77 - v80;
          v89 = (__int64)&v81[v86 + -16 * v82];
          *(_OWORD*)&v81[v86] = v78;
          v79 = (__int64)&v81[v86 + 16];
          memcpy(v89, v80, v88);
          *(_QWORD*)(a1 + 32) = v89;
          *(_QWORD*)(a1 + 40) = v79;
          *(_QWORD*)(a1 + 48) = v87;
          if (v80 != 0) {
            v90 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v90 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v90, v80);
          }
          v75 = v115;
          v5 = a2;
        }
        else {
          *v77 = v78;
          v79 = (__int64)(v77 + 1);
        }
        *(_QWORD*)(a1 + 40) = v79;
        *((_DWORD*)v69 + 8) = v70;
        v91 = (__int64*)v69[1];
        if (v91 != nullptr) {
          do {
            v92 = (__int64**)v91;
            v91 = (__int64*)*v91;
          } while (v91 != nullptr);
        }
        else {
          do {
            v92 = (__int64**)v69[2];
            v109 = v69 == *v92;
            v69 = (__int64*)v92;
          } while (!v109);
        }
        ++v70;
        v69 = (__int64*)v92;
        v71 = vminq_f32(v117, v75);
        LANES128(v71).n128_u32[3] = 0;
        v117 = v71;
        v72 = vmaxq_f32(v116, v75);
        LANES128(v72).n128_u32[3] = 0;
        v116 = v72;
      } while (v92 != &v120_.v120);
    }
    v94 = *(unsigned int**)(a1 + 56);
    v95 = *(unsigned int**)(a1 + 64);
    while (v94 != v95) {
      v96 = v120_.v120;
      v97 = *v94;
      v98 = &v120_.v120;
      v99 = &v120_.v120;
      if (v120_.v120 != nullptr) {
        while (1) {
          while (1) {
            v99 = (__int64**)v96;
            v100 = *((_DWORD*)v96 + 7);
            if (v97 >= v100) {
              break;
            }
            v96 = *v99;
            v98 = v99;
            if (*v99 == nullptr) {
              goto LABEL_133;
            }
          }
          if (v100 >= v97) {
            break;
          }
          v96 = v99[1];
          if (v96 == nullptr) {
            v98 = v99 + 1;
            goto LABEL_133;
          }
        }
      }
      else {
      LABEL_133:
        v101 = v99;
        v102 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        *(_DWORD*)(v102 + 28) = v97;
        *(_DWORD*)(v102 + 32) = 0;
        *(_QWORD*)v102 = 0;
        *(_QWORD*)(v102 + 8) = 0;
        v99 = (__int64**)v102;
        v103 = (__int64*)v102;
        *(_QWORD*)(v102 + 16) = v101;
        *v98 = (__int64*)v102;
        if (*v119 != 0) {
          v119 = (__int64*)*v119;
          v103 = *v98;
        }
        fw_containers_BalanceAfterInsert(v120_.v120, v103);
        v5 = a2;
        ++v120_.v121;
      }
      *v94++ = *((_DWORD*)v99 + 8);
    }
    LANES128(v104).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v104).n128_u64[1] = 0x3F0000003F000000LL;
    v105 = vmulq_f32(vaddq_f32(v116, v117), v104);
    *(_QWORD*)(a1 + 80) = LANES128(v105).n128_u64[0];
    *(_DWORD*)(a1 + 88) = LANES128(v105).n128_u32[2];
    if ((__int64*)a1 != v5) {
      v106 = *(unsigned __int8*)v5;
      if ((*(_BYTE*)a1 & 1) != 0) {
        v109 = (v106 & 1) == 0;
        v110 = v106 >> 1;
        if (v109) {
          v111 = (__int64)v5 + 1;
        }
        else {
          v111 = v5[2];
        }
        if (v109) {
          v112 = v110;
        }
        else {
          v112 = v5[1];
        }
        SpineModel_64dde0((__int64*)a1, v111, v112);
      }
      else if ((v106 & 1) != 0) {
        GameRoutine_64df20((_QWORD*)a1, v5[2], v5[1]);
      }
      else {
        v107 = *v5;
        v108 = v5[2];
        *(_QWORD*)(a1 + 8) = v5[1];
        *(_QWORD*)(a1 + 16) = v108;
        *(_QWORD*)a1 = v107;
      }
    }
    v93 = 1;
    *(_BYTE*)(a1 + 24) = 1;
  }
  GameHr_c1a240((__int64)&v119, v120_.v120);
  return v93;
}

void llvm_libcxx_21_libcxx_include___vector_19433b0(_QWORD* a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v3 = a1[2];
  v4 = a1[1];
  v5 = a2;
  v6 = v3 - v4;
  v7 = a2 - (v3 - v4);
  if (a2 <= (unsigned __int64)(v3 - v4)) {
    if (a2 < (unsigned __int64)(v3 - v4)) {
      a1[2] = v4 + a2;
    }
  }
  else {
    v8 = a1[3];
    if (v8 - v3 >= v7) {
      v15 = a2 + v4;
      memset(v3, 0, v7);
      a1[2] = v15;
    }
    else {
      if (a2 < 0) {
        GameRoutine_9337e0();
      }
      v9 = v8 - v4;
      v10 = fw_memory_g_heap_manager_ptr;
      v11 = 2 * v9;
      if (2 * v9 <= a2) {
        v11 = a2;
      }
      if (v9 >= 0x3FFFFFFFFFFFFFFFLL) {
        v12 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v11;
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
      memset(v13 + v6, 0, v7);
      memcpy(v13, v4, v6);
      a1[1] = v13;
      a1[2] = v13 + v5;
      a1[3] = v13 + v12;
      if (v4 != 0) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v14, v4);
      }
    }
  }
}

_QWORD* llvm_libcxx_21_libcxx_include___vector_19a7740(__int64 a1,
                                                       unsigned __int8* a2,
                                                       __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  _QWORD* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  _QWORD* v61;
  unsigned __int64 v62;

  v5 = *a2;
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  if (v8) {
    v10 = a2 + 1;
  }
  else {
    v10 = *((unsigned __int8**)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  v12 = std___1___hash_memory((__int64)v10, v11);
  v13 = *(_QWORD*)(a1 + 8);
  v14 = v12;
  if (v13 != 0) {
    v15 = v13 - 1;
    if ((v13 & (v13 - 1)) != 0) {
      v4 = v12;
      if (v12 >= v13) {
        v4 = v12 % v13;
      }
    }
    else {
      v4 = v15 & v12;
    }
    v16 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v16 != nullptr) {
      v17 = (_QWORD*)*v16;
      if (*v16 != 0) {
        if ((v13 & v15) == 0) {
          while (1) {
            v22 = v17[1];
            if (v22 == v14) {
              v23 = *((unsigned __int8*)v17 + 16);
              v24 = v17[3];
              if ((v23 & 1) == 0) {
                v24 = v23 >> 1;
              }
              if (v24 == v11) {
                v25 = (v23 & 1) != 0 ? v17[4] : (__int64)v17 + 17;
                if (memcmp(v25, (__int64)v10, v11) == 0) {
                  return v17;
                }
              }
            }
            else if ((v22 & v15) != v4) {
              goto LABEL_41;
            }
            v17 = (_QWORD*)*v17;
            if (v17 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v18 = v17[1];
          if (v18 == v14) {
            v19 = *((unsigned __int8*)v17 + 16);
            v20 = v17[3];
            if ((v19 & 1) == 0) {
              v20 = v19 >> 1;
            }
            if (v20 == v11) {
              v21 = (v19 & 1) != 0 ? v17[4] : (__int64)v17 + 17;
              if (memcmp(v21, (__int64)v10, v11) == 0) {
                return v17;
              }
            }
          }
          else {
            if (v18 >= v13) {
              v18 %= v13;
            }
            if (v18 != v4) {
              break;
            }
          }
          v17 = (_QWORD*)*v17;
        } while (v17 != nullptr);
      }
    }
  }
LABEL_41:
  v26 = (_QWORD*)(a1 + 16);
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  v28 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v29 = *a4;
  *v28 = 0;
  v28[1] = v14;
  v17 = v28;
  v30 = *v29;
  v31 = v29[2];
  v28[3] = v29[1];
  v28[4] = v31;
  v28[2] = v30;
  v29[1] = 0;
  v29[2] = 0;
  *v29 = 0;
  v28[5] = 0;
  v28[6] = 0;
  v28[7] = 0;
  v32 = *(float*)(a1 + 32);
  v33 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v13 == 0 || (float)(v32 * (float)v13) < v33) {
    v34 = v33 / v32;
    v35 = true;
    if (v13 >= 3) {
      v35 = (v13 & (v13 - 1)) != 0;
    }
    v36 = v35 | (2 * v13);
    v37 = vcvtps_u64_f32(v34);
    if (v36 <= v37) {
      primeEm = v37;
    }
    else {
      primeEm = v36;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v39 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v39) {
      if (primeEm >= v39) {
        goto LABEL_102;
      }
      v45 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v39 < 3 || (v39 & (v39 - 1)) != 0) {
        v45 = std___1___next_prime(v45);
      }
      else {
        v46 = 1LL << -(char)__clz(v45 - 1);
        if (v45 >= 2) {
          v45 = v46;
        }
      }
      if (primeEm <= v45) {
        primeEm = v45;
      }
      if (primeEm >= v39) {
        goto LABEL_102;
      }
      if (primeEm == 0) {
        v57 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v57 != 0) {
          v58 = 128;
          if (*(_QWORD*)(*v27 + 200) == 0) {
            v58 = 56;
          }
          nn_mem_StandardAllocator_Free(*v27 + v58, v57);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_102;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v40 = fw_memory_HeapManager_Allocate(*v27, 8 * primeEm, 16, 0);
    v41 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v40;
    if (v41 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*v27 + 200) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*v27 + v42, v41);
    }
    v43 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v44 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v44 + 48) = 0;
        v47 = *(_QWORD*)a1 + 8 * v44;
        v44 += 8;
        *(_QWORD*)(v47 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v44);
    }
    else {
      v44 = 0;
    }
    if ((primeEm & 7) != 0) {
      v48 = 8 * v44;
      do {
        --v43;
        *(_QWORD*)(*(_QWORD*)a1 + v48) = 0;
        v48 += 8;
      } while (v43 != 0);
    }
    v49 = (_QWORD*)*v26;
    if (*v26 != 0) {
      v50 = v49[1];
      v51 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v50 >= primeEm) {
          v50 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v50) = v26;
        v52 = (_QWORD*)*v49;
        if (*v49 == 0) {
          goto LABEL_102;
        }
        while (1) {
          v53 = v52[1];
          if (v53 >= primeEm) {
            v53 %= primeEm;
          }
          if (v53 != v50) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v53) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v53) = v49;
              goto LABEL_79;
            }
            *v49 = *v52;
            *v52 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v53);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v53) = v52;
            v52 = v49;
          }
          v53 = v50;
        LABEL_79:
          v49 = v52;
          v52 = (_QWORD*)*v52;
          v50 = v53;
          if (v52 == nullptr) {
            goto LABEL_102;
          }
        }
      }
      v54 = v50 & v51;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v26;
      while (1) {
        v55 = (_QWORD*)*v49;
        if (*v49 == 0) {
          break;
        }
        v56 = v55[1] & v51;
        if (v56 == v54) {
          v49 = (_QWORD*)*v49;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v56) != 0) {
          *v49 = *v55;
          *v55 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v56);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v56) = v55;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = v49;
          v49 = v55;
          v54 = v56;
        }
      }
    }
  LABEL_102:
    v13 = *(_QWORD*)(a1 + 8);
    if ((v13 & (v13 - 1)) != 0) {
      if (v14 >= v13) {
        v4 = v14 % v13;
      }
      else {
        v4 = v14;
      }
    }
    else {
      v4 = (v13 - 1) & v14;
    }
  }
  v59 = *(_QWORD*)a1;
  v60 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v60 != nullptr) {
    *v17 = *v60;
    *v60 = v17;
  }
  else {
    v61 = (_QWORD*)*v26;
    *v26 = v17;
    *v17 = v61;
    *(_QWORD*)(v59 + 8 * v4) = v26;
    if (*v17 != 0) {
      v62 = *(_QWORD*)(*v17 + 8LL);
      if ((v13 & (v13 - 1)) != 0) {
        if (v62 >= v13) {
          v62 %= v13;
        }
      }
      else {
        v62 &= v13 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v62) = v17;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v17;
}

#pragma GCC visibility pop
