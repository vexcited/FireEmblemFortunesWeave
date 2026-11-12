#include "decomp/pseudo_helpers.h"

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

#pragma GCC visibility pop
