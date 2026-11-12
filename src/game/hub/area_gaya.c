#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int128 GameData_1a831c0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_da89a0();
float32x4_t* AreaGaya_ff8f70(float32x4_t* result, __int64* a2, __int64** a3);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_hub_e1a340(PSEUDO_X8, _QWORD*, _QWORD*,
                                                __int128*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_1fffca8[])();
extern __int64 GameData_220b6d8;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_ff97a0();
void __attribute__((noreturn)) GameRoutine_ff9800();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AreaGaya_ff9140(_QWORD* a1, __int128* a2);

float32x4_t* AreaGaya_ff8f70(float32x4_t* result, __int64* a2, __int64** a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  float32x4_t* v7;
  float32x4_t v8;
  __int64 v9;
  __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  signed __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t v25;

  v3 = *a3;
  v4 = a3[1];
  if (*a3 != v4) {
    v7 = result;
    v8 = COERCE_AS(float32x4_t, GameData_1a831c0);
    do {
      v10 = *v3;
      if (*v3 != 0) {
        v11 = *v7;
        v25 = vaddq_f32(
            *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v10 + 24) + 16LL) + 560LL),
            v8);
        v12 = vsubq_f32(v25, v11);
        v13 = vmulq_f32(v12, v12);
        LANES128(v13).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_f32[0] < 0x1.2000000000000p+3f) {
          v15 = (__int64*)a2[1];
          v14 = a2[2];
          if ((unsigned __int64)v15 < v14) {
            *v15 = v10;
            v9 = (__int64)(v15 + 1);
          }
          else {
            v16 = *a2;
            v17 = (signed __int64)v15 - *a2;
            v18 = (v17 >> 3) + 1;
            if (v18 >> 61 != 0) {
              GameRoutine_da89a0();
            }
            v19 = v14 - v16;
            if (v19 >> 2 > v18) {
              v18 = v19 >> 2;
            }
            if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
              v20 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v20 = v18;
            }
            if (v20 != 0) {
              if (v20 >> 61 != 0) {
                GameRoutine_60a210();
              }
              v21 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
              v10 = *v3;
            }
            else {
              v21 = 0;
            }
            v22 = v21 + 8 * v20;
            v23 = v21 + v17 - 8 * (v17 >> 3);
            *(_QWORD*)(v21 + v17) = v10;
            v9 = v21 + v17 + 8;
            memcpy_alt1(v23, v16, v17);
            *a2 = v23;
            a2[1] = v9;
            a2[2] = v22;
            if (v16 != 0) {
              v24 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v24 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v16);
            }
          }
          a2[1] = v9;
          *v3 = 0;
          result = (float32x4_t*)AreaGaya_ff8f70((__int64)&v25, a2, a3);
          v8 = COERCE_AS(float32x4_t, GameData_1a831c0);
        }
      }
      ++v3;
    } while (v3 != v4);
  }
  return result;
}

void AreaGaya_ff9140(_QWORD* a1, __int128* a2)
{
  __int64* v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  __int64 v8;
  atomic_ullong* v9;
  __int128 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  bool v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  char* v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  const char* v27;
  int v28;
  const char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  __int128* v34;
  __int128* i;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  signed __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  atomic_ullong* v67;
  _QWORD* v68;
  struct {
    __int64 v69;
    __int64 v70;
  } v69_;
  struct {
    __int64 v71;
    __int64 v72;
    __int64 v73;
  } v71_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  v6 = *a2;
  *(_QWORD*)(v5 + 32) = 0;
  v7 = v5 + 32;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  v8 = v5;
  *(_QWORD*)(v5 + 8) = 0;
  v9 = (atomic_ullong*)(v5 + 8);
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)v5 = GameData_1fffca8;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_QWORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = v6;
  v10 = *(_OWORD*)(v5 + 32);
  *((_QWORD*)&v10 + 1) = DWORD2(v6);
  *(_OWORD*)(v5 + 32) = v10;
  if ((__int128*)(v5 + 32) == a2) {
    v14 = 0;
    v15 = 0;
    *(_QWORD*)(v5 + 96) = *((_QWORD*)a2 + 8);
  }
  else {
    CharacterController_d42d20(
        v5 + 48, *((char**)a2 + 2), *((char**)a2 + 3),
        (__int64)(*((_QWORD*)a2 + 3) - *((_QWORD*)a2 + 2)) >> 4);
    v11 = (__int64*)(v8 + 72);
    v12 = *((unsigned __int8*)a2 + 40);
    if ((*(_BYTE*)(v8 + 72) & 1) != 0) {
      v16 = (v12 & 1) == 0;
      v17 = v12 >> 1;
      if (v16) {
        v18 = (char*)a2 + 41;
      }
      else {
        v18 = *((char**)a2 + 7);
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = *((_QWORD*)a2 + 6);
      }
      SpineModel_64dde0(v11, (__int64)v18, v19);
    }
    else if ((v12 & 1) != 0) {
      GameRoutine_64df20(v11, *((_QWORD*)a2 + 7), *((_QWORD*)a2 + 6));
    }
    else {
      v13 = *((_QWORD*)a2 + 6);
      *v11 = *((_QWORD*)a2 + 5);
      *(_QWORD*)(v8 + 80) = v13;
      *(_QWORD*)(v8 + 88) = *((_QWORD*)a2 + 7);
    }
    v20 = *((char**)a2 + 9);
    v21 = *((char**)a2 + 10);
    *(_QWORD*)(v8 + 96) = *((_QWORD*)a2 + 8);
    CharacterController_d42d20(v8 + 104, v20, v21, (v21 - v20) >> 4);
    v15 = *(unsigned __int8*)(v8 + 72);
    v14 = *(_QWORD*)(v8 + 80);
  }
  v22 = v15 >> 1;
  v67 = v9;
  v68 = a1;
  v66 = v7;
  if ((v15 & 1) != 0) {
    v22 = v14;
  }
  if (v22 == 0) {
    v24 = *(_DWORD*)(v8 + 96);
    if (v24 >= 10) {
      v25 = *(_DWORD*)(v8 + 100);
      v26 = fw_memory_HeapManager_Allocate(*v4, 32, 16, 0);
      v71_.v73 = v26;
      v71_.v71 = 33;
      if (v25 != 2) {
        v71_.v72 = 26;
        *(_WORD*)(v26 + 24) = 28780;
        if (v25 == 1) {
          v27 = "SE_ENV_City_Gaya_Men_10_lp";
        }
        else {
          v27 = "SE_ENV_City_Gaya_Mix_10_lp";
        }
        v30 = *(_QWORD*)v27;
        v31 = *((_QWORD*)v27 + 1);
        v32 = *((_QWORD*)v27 + 2);
        *(_BYTE*)(v26 + 26) = 0;
        goto LABEL_41;
      }
      v71_.v72 = 28;
      strcpy((char*)(v26 + 24), "0_lp");
      v29 = "SE_ENV_City_Gaya_Women_10_lp";
      goto LABEL_40;
    }
    v28 = *(_DWORD*)(v8 + 100);
    v26 = fw_memory_HeapManager_Allocate(*v4, 32, 16, 0);
    v71_.v73 = v26;
    v71_.v71 = 33;
    if (v24 < 6) {
      if (v28 != 2) {
        v71_.v72 = 25;
        *(_WORD*)(v26 + 24) = 112;
        if (v28 == 1) {
          v29 = "SE_ENV_City_Gaya_Men_3_lp";
        }
        else {
          v29 = "SE_ENV_City_Gaya_Mix_3_lp";
        }
        goto LABEL_40;
      }
      v71_.v72 = 27;
      *(_DWORD*)(v26 + 23) = 1886150451;
      v33 = "SE_ENV_City_Gaya_Women_3_lp";
    }
    else {
      if (v28 != 2) {
        v71_.v72 = 25;
        *(_WORD*)(v26 + 24) = 112;
        if (v28 == 1) {
          v29 = "SE_ENV_City_Gaya_Men_6_lp";
        }
        else {
          v29 = "SE_ENV_City_Gaya_Mix_6_lp";
        }
      LABEL_40:
        v30 = *(_QWORD*)v29;
        v31 = *((_QWORD*)v29 + 1);
        v32 = *((_QWORD*)v29 + 2);
        goto LABEL_41;
      }
      v71_.v72 = 27;
      *(_DWORD*)(v26 + 23) = 1886150454;
      v33 = "SE_ENV_City_Gaya_Women_6_lp";
    }
    v30 = *(_QWORD*)v33;
    v31 = *((_QWORD*)v33 + 1);
    v32 = *((_QWORD*)v33 + 2);
    *(_BYTE*)(v26 + 27) = 0;
  LABEL_41:
    *(_QWORD*)v26 = v30;
    *(_QWORD*)(v26 + 8) = v31;
    *(_QWORD*)(v26 + 16) = v32;
    goto LABEL_42;
  }
  if ((v15 & 1) != 0) {
    fw_text_String_CopyTerminated(&v71_.v71, *(_QWORD*)(v8 + 88), v14);
  }
  else {
    v23 = *(_QWORD*)(v8 + 80);
    v71_.v71 = *(_QWORD*)(v8 + 72);
    v71_.v72 = v23;
    v71_.v73 = *(_QWORD*)(v8 + 88);
  }
LABEL_42:
  v34 = *((__int128**)a2 + 2);
  for (i = *((__int128**)a2 + 3); v34 != i; ++v34) {
    game_hub_e1a340((void*)(&v69_.v69), (_QWORD*)GameData_220b6d8, &v71_.v71,
                    v34);
    v36 = *(_QWORD**)(v8 + 136);
    v37 = *(_QWORD*)(v8 + 144);
    if ((unsigned __int64)v36 >= v37) {
      v40 = *(_QWORD*)(v8 + 128);
      v41 = (signed __int64)v36 - v40;
      v42 = ((__int64)v36 - v40) >> 4;
      v43 = v42 + 1;
      if ((unsigned __int64)(v42 + 1) >> 60 != 0) {
        GameRoutine_ff97a0();
      }
      v44 = v37 - v40;
      if (v44 >> 3 > v43) {
        v43 = v44 >> 3;
      }
      if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF0LL) {
        v45 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v45 = v43;
      }
      if (v45 >> 60 != 0) {
        goto LABEL_84;
      }
      v46 = fw_memory_HeapManager_Allocate(*v4, 16 * v45, 16, 0);
      v38 = v69_.v70;
      v47 = (_QWORD*)(v46 + v41);
      *v47 = v69_.v69;
      v47[1] = v38;
      if (v38 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 16), 1u,
                                  memory_order_relaxed);
        v40 = *(_QWORD*)(v8 + 128);
        v41 = *(_QWORD*)(v8 + 136) - v40;
        v42 = v41 >> 4;
      }
      v48 = (__int64)&v47[-2 * v42];
      v49 = v46 + 16 * v45;
      v39 = v47 + 2;
      memcpy_alt1(v48, v40, v41);
      *(_QWORD*)(v8 + 128) = v48;
      *(_QWORD*)(v8 + 136) = v39;
      *(_QWORD*)(v8 + 144) = v49;
      v4 = &fw_memory_g_heap_manager;
      if (v40 != 0) {
        v50 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v50, v40);
        v38 = v69_.v70;
      }
    }
    else {
      *v36 = v69_.v69;
      v38 = v69_.v70;
      v36[1] = v69_.v70;
      if (v38 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 16), 1u,
                                  memory_order_relaxed);
      }
      v39 = v36 + 2;
    }
    *(_QWORD*)(v8 + 136) = v39;
    if (v38 != 0) {
      std___1___shared_weak_count___release_weak(v38);
    }
  }
  if ((v71_.v71 & 1) != 0 && v71_.v73 != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v51, v71_.v73);
  }
  v52 = (__int64*)v68[2];
  v53 = v68[3];
  if ((unsigned __int64)v52 >= v53) {
    v55 = v68[1];
    v56 = (unsigned __int64)v52 - v55;
    v57 = ((__int64)v52 - v55) >> 4;
    v58 = v57 + 1;
    if ((unsigned __int64)(v57 + 1) >> 60 != 0) {
      GameRoutine_ff9800();
    }
    v59 = v53 - v55;
    if (v59 >> 3 > v58) {
      v58 = v59 >> 3;
    }
    if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF0LL) {
      v60 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v60 = v58;
    }
    if (v60 >> 60 != 0) {
    LABEL_84:
      GameRoutine_60a210();
    }
    v61 = fw_memory_HeapManager_Allocate(*v4, 16 * v60, 16, 0);
    v62 = (__int64*)(v61 + v56);
    v63 = v61 + 16 * v60;
    v64 = v61 + v56 - 16 * v57;
    v54 = v61 + v56 + 16;
    *v62 = v66;
    v62[1] = v8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    memcpy_alt1(v64, v55, v56);
    v68[1] = v64;
    v68[2] = v54;
    v68[3] = v63;
    if (v55 != 0) {
      v65 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v65 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v65, v55);
    }
  }
  else {
    v54 = (__int64)(v52 + 2);
    *v52 = v66;
    v52[1] = v8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  v68[2] = v54;
  if (atomic_fetch_add(v67, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
}

#pragma GCC visibility pop
