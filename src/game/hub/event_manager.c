#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cbcbe0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd48f8[])();
extern __int64 (*game_hub_EventManager_vtable[])();
extern __int64 GameData_21f3c98;
extern int GameData_220b700;
__int64 EventManager_Destructor(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_d59720(PSEUDO_X8, _QWORD, _QWORD);
__int64 EventManager_cbb140(__int64 result);
__int64 GameRoutine_cbc720(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d83020(_QWORD, _QWORD);
__int64 GameRoutine_e152d0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd4b18[])();
extern __int64 GameData_212dbb8[9];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 EventManager_cbb140(__int64 result);
__int64 EventManager_cbb8c0(__int64 a1, _DWORD* a2);
__int64 EventManager_cbbb40(__int64 a1, __int64 a2);
_QWORD* EventManager_cbc520(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
_QWORD* EventManager_cbcbe0(_QWORD* result);
__int64 GameRoutine_cbd9c0(_QWORD, _QWORD);
__int64 GameRoutine_cbdb20(_QWORD, _QWORD);
__int64 GameRoutine_cbdc80(_QWORD, _QWORD);
__int64 GameRoutine_cbdde0(_QWORD, _QWORD);
__int64 GameRoutine_d5ad30(_QWORD, _QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cbe390(void);
__int64 EventManager_cbce30(_QWORD* a1);
__int64 EventManager_cbd020(__int64 result);
__int64 game_hub_EventManager_TryRunHitEvent_lambda0_Invoke(__int64 result,
                                                            __int64* a2);
__int64* EventManager_cbdf40(__int64** a1, unsigned __int8* a2, __int64 a3,
                             __int64** a4);
__int64
game_hub_EventManager_GetCandidatesAccessEvent_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
_QWORD*
game_hub_EventManager_ForLoopEventOptimize_lambda0_Invoke(_QWORD* result,
                                                          __int64 a2);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a310");
__int64 AreaEvent_d5a220(_QWORD, _QWORD, _QWORD);
__int64 EventManager_cbb140_alt1(_QWORD) __asm__("EventManager_cbb140");
__int64 EventManager_cbc720_alt1(_QWORD, _QWORD,
                                 _QWORD) __asm__("EventManager_cbc720");
__int64 GameRoutine_10ca6e0(__int64 result);
__int64 GameRoutine_d59fd0(__int64);
__int64 GameRoutine_d827e0(__int64 result);
__int64 memcmp_alt1(_QWORD, _QWORD) __asm__("memcmp");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int128 GameData_1a831c0;
extern __int64 (*GameData_1fd4a18[])();
extern __int64 GameData_212dc68;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 EventManager_cbaf20(__int64 a1);
__int64 game_hub_EventManager_TryRunHitEvent(float32x4_t* a1, char a2);
__attribute__((swiftcall)) void
EventManager_cbbf20(PSEUDO_X8 x8_, __int64 result, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void EventManager_cbc0c0(PSEUDO_X8 x8_,
                                                    unsigned __int64 result,
                                                    __int64 a2, __int64 a3,
                                                    __int64 a4);
unsigned __int64 EventManager_cbc720(__int64 a1, __int64 a2, __int64 a3);
__int64 EventManager_d7ac20(__int64 result);

__int64 EventManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 j;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = a1[15];
  a1[14] = 0;
  a1[15] = 0;
  *a1 = game_hub_EventManager_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = (_QWORD*)a1[19];
  if (v3 != a1 + 20) {
    do {
      v4 = v3[7];
      for (i = v3[8]; i != v4; i -= 16) {
        v10 = *(_QWORD*)(i - 8);
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
      v3[8] = v4;
      v6 = v3[10];
      for (j = v3[11]; j != v6; j -= 16) {
        v11 = *(_QWORD*)(j - 8);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      v8 = (_QWORD*)v3[1];
      v3[11] = v6;
      if (v8 != nullptr) {
        do {
          v9 = v8;
          v8 = (_QWORD*)*v8;
        } while (v8 != nullptr);
      }
      else {
        do {
          v9 = (_QWORD*)v3[2];
          v12 = v3 == (_QWORD*)*v9;
          v3 = v9;
        } while (!v12);
      }
      v3 = v9;
    } while (v9 != a1 + 20);
  }
  result = GameRoutine_cbcbe0(a1[20]);
  v14 = a1[17];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = a1[15];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak(v15);
  }
  v16 = a1[13];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
  }
  *a1 = GameData_1fd48f8;
  if ((_QWORD*)GameData_21f3c98 == a1) {
    GameData_21f3c98 = 0;
    GameData_220b700 = 0;
  }
  return result;
}

__int64 EventManager_cbaf20(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  float32x4_t* v8;
  float32x4_t v9;
  float v10;
  float32x4_t v11;
  __int64 v12;
  __int64 result;
  _QWORD* v17;
  _QWORD* v18;
  __int64* v19;
  __int64* i;
  __int64 v21;
  __int64* v22;
  __int64* j;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;

  EventManager_cbb140(a1);
  if (*(_BYTE*)(a1 + 48) == 1) {
    *(_BYTE*)(a1 + 48) = 0;
  }
  v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v4 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    std___1___shared_weak_count___release_weak(v2);
    v6 = v5 == 0 || v3 == 0;
    if (!v6) {
      v7 = *(_QWORD*)(v3 + 24);
      if (*(_BYTE*)(*(_QWORD*)(v7 + 8) + 145LL) == 1) {
        v8 = *(float32x4_t**)(v7 + 16);
        v9 = vaddq_f32(v8[35], COERCE_AS(float32x4_t, GameData_1a831c0));
        v10 = *(float*)(LANES128(v8[30]).n128_u64[1] + 36) *
              0x1.ca5dc20000000p+5f;
        if (*(_BYTE*)(a1 + 48) == 1) {
          *(_QWORD*)(a1 + 16) = LANES128(v9).n128_u64[0];
          v11 = *(float32x4_t*)(a1 + 16);
          LANES128(v11).n128_u64[1] = LANES128(v9).n128_u32[2];
        }
        else {
          LANES128(v9).n128_u32[3] = 0;
          *(_BYTE*)(a1 + 48) = 1;
          v11 = v9;
        }
        *(float32x4_t*)(a1 + 16) = v11;
        *(float*)(a1 + 32) = v10;
      }
    LABEL_18:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
      goto LABEL_20;
    }
  }
  else {
    v5 = 0;
  }
  if (*(_BYTE*)(a1 + 80) == 1) {
    *(_BYTE*)(a1 + 80) = 0;
  }
  if (v5 != 0) {
    goto LABEL_18;
  }
LABEL_20:
  v12 = *(_QWORD*)(a1 + 112);
  EventManager_cbb140(*(_QWORD*)GameData_212dc68);
  GameRoutine_d827e0(v12);
  EventManager_d7ac20(*(_QWORD*)(a1 + 96));
  result = GameRoutine_10ca6e0(*(_QWORD*)(a1 + 128));
  v17 = *(_QWORD**)(a1 + 152);
  v18 = (_QWORD*)(a1 + 160);
  if (v17 != v18) {
    do {
      v19 = (__int64*)v17[7];
      for (i = (__int64*)v17[8]; v19 != i; result = GameRoutine_d59fd0(v21)) {
        v21 = *v19;
        v19 += 2;
      }
      v22 = (__int64*)v17[10];
      for (j = (__int64*)v17[11]; v22 != j; result = GameRoutine_d59fd0(v24)) {
        v24 = *v22;
        v22 += 2;
      }
      v25 = (_QWORD*)v17[1];
      if (v25 != nullptr) {
        do {
          v26 = v25;
          v25 = (_QWORD*)*v25;
        } while (v25 != nullptr);
      }
      else {
        do {
          v26 = (_QWORD*)v17[2];
          v6 = v17 == (_QWORD*)*v26;
          v17 = v26;
        } while (!v6);
      }
      v17 = v26;
    } while (v26 != v18);
  }
  return result;
}

__int64 EventManager_cbb140(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;

  v1 = *(_QWORD**)(result + 152);
  v2 = (_QWORD*)(result + 160);
  if (v1 != (_QWORD*)(result + 160)) {
    while (1) {
      v3 = (_QWORD*)v1[7];
      v4 = (_QWORD*)v1[8];
      if (v3 != v4) {
        while ((*(_BYTE*)(*v3 + 1452LL) & 1) == 0) {
          v3 += 2;
          if (v3 == v4) {
            goto LABEL_24;
          }
        }
      }
      v5 = v3 + 2;
      v6 = v3 == v4 || v5 == v4;
      if (!v6) {
        break;
      }
      if (v3 != v4) {
        goto LABEL_22;
      }
    LABEL_24:
      v10 = (_QWORD*)v1[10];
      v11 = (_QWORD*)v1[11];
      if (v10 != v11) {
        while ((*(_BYTE*)(*v10 + 1452LL) & 1) == 0) {
          v10 += 2;
          if (v10 == v11) {
            goto LABEL_45;
          }
        }
      }
      if (v10 != v11) {
        v13 = v10 + 2;
        if (v10 + 2 != v11) {
          do {
            v14 = *v13;
            if ((*(_BYTE*)(*v13 + 1452LL) & 1) == 0) {
              v15 = v13[1];
              *v13 = 0;
              v13[1] = 0;
              v16 = v10[1];
              *v10 = v14;
              v10[1] = v15;
              if (v16 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
                result = std___1___shared_weak_count___release_weak(v16);
              }
              v10 += 2;
            }
            v13 += 2;
          } while (v13 != v11);
          v11 = (_QWORD*)v1[11];
        }
      }
      if (v10 != v11) {
        do {
          v19 = *(v11 - 1);
          if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            result = std___1___shared_weak_count___release_weak(v19);
          }
          v11 -= 2;
        } while (v11 != v10);
        v1[11] = v10;
      }
    LABEL_45:
      v17 = (_QWORD*)v1[1];
      if (v17 != nullptr) {
        do {
          v18 = v17;
          v17 = (_QWORD*)*v17;
        } while (v17 != nullptr);
      }
      else {
        do {
          v18 = (_QWORD*)v1[2];
          v6 = v1 == (_QWORD*)*v18;
          v1 = v18;
        } while (!v6);
      }
      v1 = v18;
      if (v18 == v2) {
        return result;
      }
    }
    do {
      v7 = *v5;
      if ((*(_BYTE*)(*v5 + 1452LL) & 1) == 0) {
        v8 = v5[1];
        *v5 = 0;
        v5[1] = 0;
        v9 = v3[1];
        *v3 = v7;
        v3[1] = v8;
        if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          result = std___1___shared_weak_count___release_weak(v9);
        }
        v3 += 2;
      }
      v5 += 2;
    } while (v5 != v4);
    v4 = (_QWORD*)v1[8];
    if (v3 == v4) {
      goto LABEL_24;
    }
  LABEL_22:
    while (v4 != v3) {
      v12 = *(v4 - 1);
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak(v12);
      }
      v4 -= 2;
    }
    v1[8] = v3;
    goto LABEL_24;
  }
  return result;
}

__int64 game_hub_EventManager_TryRunHitEvent(float32x4_t* a1, char a2)
{
  long double v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  int v7;
  float32x4_t* v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  float32x4_t v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[4];
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  long double v42;
  _BYTE* v43;
  long double* v44;
  _BYTE v45[4];

  v45[0] = a2;
  EventManager_cbb140_alt1(a1);
  v40 = 0;
  v41 = 0;
  v38 = nullptr;
  v39 = 0;
  v36 = 0;
  v37 = nullptr;
  v34[0] = GameData_1fd4a18;
  v34[1] = &v36;
  v34[2] = v45;
  v35 = v34;
  *(_QWORD*)&v42 = GameData_1fd4a18;
  *((_QWORD*)&v42 + 1) = &v36;
  v44 = &v42;
  v43 = v45;
  EventManager_cbc720_alt1(a1, GameData_21f3d10 + 88, &v42);
  if (v44 == &v42) {
    v4 = 32;
  }
  else {
    if (v44 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v44 + v4))((__int64)v44);
LABEL_6:
  result = (__int64)v35;
  if (v35 == v34) {
    v6 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v35 + v6))((__int64)v35);
LABEL_11:
  v7 = LANES128(a1[3]).n128_u8[0];
  LOBYTE(v42) = 0;
  LOBYTE(v43) = 0;
  if (v7 != 0) {
    v8 = a1 + 1;
  }
  else {
    v8 = nullptr;
  }
  if (v7 != 0 && (LANES128(a1[5]).n128_u8[0] & 1) != 0) {
    v9 = a1[4];
    v10 = a1[1];
    LOBYTE(v43) = 1;
    v11 = vsubq_f32(v9, v10);
    v12 = vmulq_f32(v11, v11);
    LANES128(v12).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_u64[0];
    LANES128(v12).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
            .n64_u64[0];
    LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
    v13 = vrsqrteq_f32(v12);
    v14 = vmulq_f32(v13, vrsqrtsq_f32(v13, vmulq_f32(v12, v13)));
    v3 = COERCE_LONG_DOUBLE(vaddq_f32(
        v10,
        vmulq_n_f32(
            vbicq_s8(
                vmulq_f32(v11, vmulq_f32(v14, vrsqrtsq_f32(
                                                  v14, vmulq_f32(v12, v14)))),
                vceqzq_f32(v12)),
            fminf(LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t,
                                                 LANES128(v12).n128_u64[0])))
                      .n64_f32[0],
                  5.0))));
    v42 = v3;
  }
  v15 = v37;
  v16 = v38;
  if (v38 == v37) {
    v16 = v37;
  }
  else {
    v17 = &v37[v40 >> 8];
    v18 = (_QWORD*)(*v17 + 16LL * (unsigned __int8)v40);
    v19 = v37[(v41 + v40) >> 8] + 16LL * (unsigned __int8)(v41 + v40);
    if (v18 != (_QWORD*)v19) {
      do {
        result = v18[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            if (*v18 != 0 && (LANES128(a1[9]).n128_u8[0] != 1 ||
                              *(_DWORD*)(*v18 + 1448LL) != -1)) {
              v20 = result;
              AreaEvent_d5a220(*v18, &v42, v8);
              result = v20;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v21 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak(v21);
            }
          }
        }
        v18 += 2;
        if ((char*)((char*)v18 - *v17) == (char*)((char*)0x1000LL)) {
          v22 = (_QWORD*)v17[1];
          ++v17;
          v18 = v22;
        }
      } while (v18 != (_QWORD*)v19);
      v15 = v37;
      v16 = v38;
    }
    if (v16 != v15) {
      v23 = &v15[v40 >> 8];
      v24 = *v23;
      v25 = *v23 + 16LL * (unsigned __int8)v40;
      v26 = v15[(v41 + v40) >> 8] + 16LL * (unsigned __int8)(v41 + v40);
      if (v25 != v26) {
        do {
          result = *(_QWORD*)(v25 + 8);
          if (result != 0) {
            result = std___1___shared_weak_count___release_weak(result);
            v24 = *v23;
          }
          v25 += 16;
          if (v25 - v24 == 4096) {
            v27 = v23[1];
            ++v23;
            v24 = v27;
            v25 = v27;
          }
        } while (v25 != v26);
        v15 = v37;
        v16 = v38;
      }
    }
  }
  v41 = 0;
  v28 = v16 - v15;
  if (v28 >= 3) {
    v29 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v15 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v29 + v30, v3);
        v15 = v37;
        v16 = v38;
      }
      v37 = ++v15;
      v28 = v16 - v15;
    } while (v28 > 2);
  }
  if (v28 == 1) {
    v31 = 128;
  }
  else {
    if (v28 != 2) {
      goto LABEL_55;
    }
    v31 = 256;
  }
  v40 = v31;
LABEL_55:
  if (v15 != v16) {
    do {
      if (*v15 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v32 = 128;
        }
        else {
          v32 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            fw_memory_g_heap_manager + v32, v3);
      }
      ++v15;
    } while (v15 != v16);
    if (v37 != v38) {
      v38 = (_QWORD*)((char*)v38 +
                      (((char*)v37 - (char*)v38 + 7) & 0xFFFFFFFFFFFFFFF8LL));
    }
  }
  if (v36 != 0) {
    v33 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v33 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v33,
                                              v3);
  }
  return result;
}

__int64 EventManager_cbb8c0(__int64 a1, _DWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* i;
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  _QWORD* v15;
  _QWORD* v16;
  bool v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD v22[3];

  v2 = *(_QWORD**)(a1 + 152);
  v3 = (_QWORD*)(a1 + 160);
  if (v2 != (_QWORD*)(a1 + 160)) {
    do {
      v7 = (__int64*)v2[7];
      for (i = (__int64*)v2[8]; v7 != i; v7 += 2) {
        while (1) {
          if ((unsigned int)(*a2 - 3) < 2 ||
              (GameRoutine_e152d0(*v7 + 120) & 1) == 0) {
            v8 = *(_QWORD**)(a1 + 152);
            if (v8 != v3) {
              v9 = *v7;
              while (1) {
                v10 = (__int64*)v8[7];
                v11 = (__int64*)v8[8];
                if (v10 != v11) {
                  while (1) {
                    v12 = *v10;
                    if (*v10 == v9) {
                      break;
                    }
                    v10 += 2;
                    if (v10 == v11) {
                      goto LABEL_18;
                    }
                  }
                  if (v10 != v11) {
                    break;
                  }
                }
              LABEL_18:
                v13 = (__int64*)v8[10];
                v14 = (__int64*)v8[11];
                if (v13 != v14) {
                  while (1) {
                    v12 = *v13;
                    if (*v13 == v9) {
                      break;
                    }
                    v13 += 2;
                    if (v13 == v14) {
                      goto LABEL_23;
                    }
                  }
                  if (v13 != v14) {
                    break;
                  }
                }
              LABEL_23:
                v15 = (_QWORD*)v8[1];
                if (v15 != nullptr) {
                  do {
                    v16 = v15;
                    v15 = (_QWORD*)*v15;
                  } while (v15 != nullptr);
                }
                else {
                  do {
                    v16 = (_QWORD*)v8[2];
                    v17 = v8 == (_QWORD*)*v16;
                    v8 = v16;
                  } while (!v17);
                }
                v8 = v16;
                if (v16 == v3) {
                  goto LABEL_7;
                }
              }
              if ((*(_BYTE*)(v12 + 1452) & 1) == 0) {
                break;
              }
            }
          }
        LABEL_7:
          v7 += 2;
          if (v7 == i) {
            goto LABEL_36;
          }
        }
        if (*(_DWORD*)(v12 + 1244) == 1) {
          GameRoutine_d59720((void*)v22, v12, 3);
          if (v22[0] != 0) {
            v22[1] = v22[0];
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v18);
          }
        }
        *(_BYTE*)(v12 + 1452) = 1;
      }
    LABEL_36:
      v19 = (_QWORD*)v2[1];
      if (v19 != nullptr) {
        do {
          v20 = v19;
          v19 = (_QWORD*)*v19;
        } while (v19 != nullptr);
      }
      else {
        do {
          v20 = (_QWORD*)v2[2];
          v17 = v2 == (_QWORD*)*v20;
          v2 = v20;
        } while (!v17);
      }
      v2 = v20;
    } while (v20 != v3);
  }
  EventManager_cbb140(a1);
  return GameRoutine_d83020(*(_QWORD*)(a1 + 112), a2);
}

__int64 EventManager_cbbb40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  _QWORD* v10;
  _QWORD* v11;
  bool v12;
  __int64 v14;
  _QWORD v15[5];

  v4 = *(_QWORD**)(a1 + 152);
  if (v4 == (_QWORD*)(a1 + 160)) {
    return 0;
  }
  v15[3] = v2;
  v15[4] = v3;
  while (1) {
    v5 = (__int64*)v4[7];
    v6 = (__int64*)v4[8];
    if (v5 != v6) {
      while (1) {
        v7 = *v5;
        if (*v5 == a2) {
          break;
        }
        v5 += 2;
        if (v5 == v6) {
          goto LABEL_9;
        }
      }
      if (v5 != v6) {
        break;
      }
    }
  LABEL_9:
    v8 = (__int64*)v4[10];
    v9 = (__int64*)v4[11];
    if (v8 != v9) {
      while (1) {
        v7 = *v8;
        if (*v8 == a2) {
          break;
        }
        v8 += 2;
        if (v8 == v9) {
          goto LABEL_14;
        }
      }
      if (v8 != v9) {
        break;
      }
    }
  LABEL_14:
    v10 = (_QWORD*)v4[1];
    if (v10 != nullptr) {
      do {
        v11 = v10;
        v10 = (_QWORD*)*v10;
      } while (v10 != nullptr);
    }
    else {
      do {
        v11 = (_QWORD*)v4[2];
        v12 = v4 == (_QWORD*)*v11;
        v4 = v11;
      } while (!v12);
    }
    v4 = v11;
    if (v11 == (_QWORD*)(a1 + 160)) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v7 + 1452) & 1) == 0) {
    if (*(_DWORD*)(v7 + 1244) == 1) {
      GameRoutine_d59720((void*)v15, v7, 3);
      if (v15[0] != 0) {
        v15[1] = v15[0];
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v14);
      }
    }
    *(_BYTE*)(v7 + 1452) = 1;
  }
  return 1;
}

__attribute__((swiftcall)) void

EventManager_cbbf20(PSEUDO_X8 x8_, __int64 result, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  bool v26;
  __int64 v27;

  if (a3 == 0 || (v5 = *(_QWORD**)(result + 152), v6 = (_QWORD*)(result + 160),
                  v5 == (_QWORD*)(result + 160))) {
  LABEL_33:
    *a4 = 0;
    a4[1] = 0;
  }
  else {
    while (1) {
      v9 = (_QWORD*)v5[7];
      v10 = (_QWORD*)v5[8];
      if (v9 != v10) {
        while (1) {
          v11 = *v9;
          v12 = *(unsigned __int8*)(*v9 + 208LL);
          v13 = *(_QWORD*)(*v9 + 216LL);
          if ((v12 & 1) == 0) {
            v13 = v12 >> 1;
          }
          if (a3 == v13) {
            v14 = v11 + 209;
            v15 = *(_QWORD*)(v11 + 224);
            v16 = (v12 & 1) != 0 ? v15 : v14;
            result = memcmp_alt1(a2, v16);
            if ((_DWORD)result == 0) {
              break;
            }
          }
          v9 += 2;
          if (v9 == v10) {
            goto LABEL_16;
          }
        }
      }
      if (v9 != v10) {
        break;
      }
    LABEL_16:
      v9 = (_QWORD*)v5[10];
      v17 = (_QWORD*)v5[11];
      if (v9 != v17) {
        while (1) {
          v18 = *v9;
          v19 = *(unsigned __int8*)(*v9 + 208LL);
          v20 = *(_QWORD*)(*v9 + 216LL);
          if ((v19 & 1) == 0) {
            v20 = v19 >> 1;
          }
          if (a3 == v20) {
            v21 = v18 + 209;
            v22 = *(_QWORD*)(v18 + 224);
            v23 = (v19 & 1) != 0 ? v22 : v21;
            result = memcmp_alt1(a2, v23);
            if ((_DWORD)result == 0) {
              break;
            }
          }
          v9 += 2;
          if (v9 == v17) {
            goto LABEL_27;
          }
        }
      }
      if (v9 != v17) {
        break;
      }
    LABEL_27:
      v24 = (_QWORD*)v5[1];
      if (v24 != nullptr) {
        do {
          v25 = v24;
          v24 = (_QWORD*)*v24;
        } while (v24 != nullptr);
      }
      else {
        do {
          v25 = (_QWORD*)v5[2];
          v26 = v5 == (_QWORD*)*v25;
          v5 = v25;
        } while (!v26);
      }
      v5 = v25;
      if (v25 == v6) {
        goto LABEL_33;
      }
    }
    *a4 = *v9;
    v27 = v9[1];
    a4[1] = v27;
    if (v27 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void EventManager_cbc0c0(PSEUDO_X8 x8_,
                                                    unsigned __int64 result,
                                                    __int64 a2, __int64 a3,
                                                    __int64 a4)
{
  _QWORD* a5 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v9;
  long double v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64** v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  int v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64* v27;
  char* v28;
  char* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  bool v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  int v36;
  long double v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;

  if (a3 == 0) {
    *a5 = 0;
    a5[1] = 0;
    {
      result;
      return;
    }
  }
  v9 = result;
  result = strlen(a4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_106;
  }
  v11 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (result | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v58 = v11;
    v59 = v12;
    v57 = v13 | 1;
    goto LABEL_11;
  }
  LOBYTE(v57) = 2 * result;
  v12 = (char*)&v57 + 1;
  if (result != 0) {
  LABEL_11:
    result = memmove(v12, a4, v11);
  }
  v12[v11] = 0;
  v55 = v9;
  v56 = a5;
  v14 = *(__int64***)(v9 + 160);
  if (v14 != nullptr) {
    if ((v57 & 1) != 0) {
      v15 = v59;
    }
    else {
      v15 = (char*)&v57 + 1;
    }
    if ((v57 & 1) != 0) {
      v16 = v58;
    }
    else {
      v16 = (unsigned __int64)(unsigned __int8)v57 >> 1;
    }
    do {
      v17 = *((unsigned __int8*)v14 + 32);
      v18 = (v17 & 1) == 0;
      v19 = v17 >> 1;
      if (v18) {
        v20 = v19;
      }
      else {
        v20 = (unsigned __int64)v14[5];
      }
      if (v18) {
        v21 = (__int64*)((char*)v14 + 33);
      }
      else {
        v21 = v14[6];
      }
      result = memcmp_alt1(v15, v21);
      if ((_DWORD)result != 0) {
        if ((result & 0x80000000) != 0) {
          goto LABEL_21;
        }
      }
      else if (v16 < v20) {
        goto LABEL_21;
      }
      result = memcmp_alt1(v21, v15);
      if ((_DWORD)result != 0) {
        if ((result & 0x80000000) == 0) {
        LABEL_34:
          v22 = 0;
          if ((v57 & 1) == 0) {
            goto LABEL_41;
          }
          goto LABEL_37;
        }
      }
      else if (v20 >= v16) {
        goto LABEL_34;
      }
      ++v14;
    LABEL_21:
      v14 = (__int64**)*v14;
    } while (v14 != nullptr);
  }
  v22 = 1;
  if ((v57 & 1) != 0) {
  LABEL_37:
    if (v59 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v10);
    }
  }
LABEL_41:
  if (v22 != 0) {
    goto LABEL_42;
  }
  result = strlen(a4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_106:
    String_60a1d0(result);
  }
  v24 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (result | 7) + 1;
    }
    v25 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v26,
                                                16, 0);
    v58 = v24;
    v59 = v25;
    v57 = v26 | 1;
  }
  else {
    LOBYTE(v57) = 2 * result;
    v25 = (char*)&v57 + 1;
    if (result == 0) {
      goto LABEL_52;
    }
  }
  memmove(v25, a4, v24);
LABEL_52:
  v25[v24] = 0;
  v27 = *(__int64**)(v55 + 160);
  if (v27 == nullptr) {
  LABEL_75:
    String_60a250("map::at:  key not found");
  }
  v28 = v59;
  if ((v57 & 1) != 0) {
    v29 = v59;
  }
  else {
    v29 = (char*)&v57 + 1;
  }
  if ((v57 & 1) != 0) {
    v30 = v58;
  }
  else {
    v30 = (unsigned __int64)(unsigned __int8)v57 >> 1;
  }
  while (1) {
    while (1) {
      v31 = *((unsigned __int8*)v27 + 32);
      v32 = (v31 & 1) == 0;
      v33 = v31 >> 1;
      v34 = v32 ? v33 : v27[5];
      v35 = v32 ? (__int64)v27 + 33 : v27[6];
      v36 = memcmp_alt1(v29, v35);
      if (v36 != 0) {
        break;
      }
      if (v30 >= v34) {
        goto LABEL_70;
      }
    LABEL_59:
      v27 = (__int64*)*v27;
      if (v27 == nullptr) {
        goto LABEL_75;
      }
    }
    if (v36 < 0) {
      goto LABEL_59;
    }
  LABEL_70:
    result = memcmp_alt1(v35, v29);
    if ((_DWORD)result != 0) {
      if ((result & 0x80000000) == 0) {
        break;
      }
      goto LABEL_74;
    }
    if (v34 >= v30) {
      break;
    }
  LABEL_74:
    v27 = (__int64*)v27[1];
    if (v27 == nullptr) {
      goto LABEL_75;
    }
  }
  if ((v57 & 1) != 0 && v28 != nullptr) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v37);
  }
  v40 = (_QWORD*)v27[7];
  v39 = (_QWORD*)v27[8];
  if (v40 != v39) {
    while (1) {
      v41 = *v40;
      v42 = *(unsigned __int8*)(*v40 + 208LL);
      v43 = *(_QWORD*)(*v40 + 216LL);
      if ((v42 & 1) == 0) {
        v43 = v42 >> 1;
      }
      if (a3 == v43) {
        v44 = v41 + 209;
        v45 = *(_QWORD*)(v41 + 224);
        v46 = (v42 & 1) != 0 ? v45 : v44;
        result = memcmp_alt1(a2, v46);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v40 += 2;
      if (v40 == v39) {
        goto LABEL_92;
      }
    }
  }
  if (v40 == v39) {
  LABEL_92:
    v40 = (_QWORD*)v27[10];
    v47 = (_QWORD*)v27[11];
    if (v40 != v47) {
      while (1) {
        v48 = *v40;
        v49 = *(unsigned __int8*)(*v40 + 208LL);
        v50 = *(_QWORD*)(*v40 + 216LL);
        if ((v49 & 1) == 0) {
          v50 = v49 >> 1;
        }
        if (a3 == v50) {
          v51 = v48 + 209;
          v52 = *(_QWORD*)(v48 + 224);
          v53 = (v49 & 1) != 0 ? v52 : v51;
          result = memcmp_alt1(a2, v53);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v40 += 2;
        if (v40 == v47) {
          goto LABEL_42;
        }
      }
    }
    if (v40 != v47) {
      goto LABEL_103;
    }
  LABEL_42:
    *v56 = 0;
    v56[1] = 0;
  }
  else {
  LABEL_103:
    *v56 = *v40;
    v54 = v40[1];
    v56[1] = v54;
    if (v54 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  {
    result;
    return;
  }
}

_QWORD* EventManager_cbc520(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  char v5;
  __int64 v6;
  _QWORD* v8;
  _QWORD* result;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 i;
  _QWORD* v16;
  _QWORD* v17;
  bool v18;
  __int64 v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  int v24;
  char v25;
  _QWORD v26[4];
  _QWORD* v27;

  v4 = *(unsigned __int8*)(a2 + 8);
  LOBYTE(v24) = 0;
  v25 = 0;
  if (v4 == 1) {
    v5 = *(_DWORD*)(a2 + 4);
    v25 = 1;
    v24 = 1 << v5;
  }
  if (*(_BYTE*)a2 == 1) {
    v22[0] = GameData_1fd4b18;
    v22[1] = a2;
    v22[2] = &v24;
    v22[3] = a3;
    v23 = v22;
    v26[3] = a3;
    v27 = v26;
    v26[0] = GameData_1fd4b18;
    v26[1] = a2;
    v26[2] = &v24;
    GameRoutine_cbc720(a1, *(_QWORD*)GameData_212dbb8[0] + 88LL, v26);
    if (v27 == v26) {
      v6 = 32;
    }
    else {
      if (v27 == nullptr) {
        goto LABEL_26;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v27 + v6))((__int64)v27);
  LABEL_26:
    result = v23;
    if (v23 != v22) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  v20[0] = GameData_1fd4b18;
  v20[1] = a2;
  v20[2] = &v24;
  v20[3] = a3;
  v8 = *(_QWORD**)(a1 + 152);
  result = v20;
  v10 = (_QWORD*)(a1 + 160);
  v21 = v20;
  if (v8 == (_QWORD*)(a1 + 160)) {
  LABEL_23:
    v19 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
        *result + v19))(result, a2, a3, a4);
  }
  do {
    v11 = v8[7];
    v12 = v8[8];
    if (v11 != v12) {
      while (1) {
        v13 = v21;
        if (v21 == nullptr) {
          break;
        }
        (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, v11);
        v11 += 16;
        if (v11 == v12) {
          goto LABEL_13;
        }
      }
    LABEL_31:
      GameRoutine_60a310(v13);
    }
  LABEL_13:
    v14 = v8[10];
    for (i = v8[11]; v14 != i; v14 += 16) {
      v13 = v21;
      if (v21 == nullptr) {
        goto LABEL_31;
      }
      (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, v14);
    }
    v16 = (_QWORD*)v8[1];
    if (v16 != nullptr) {
      do {
        v17 = v16;
        v16 = (_QWORD*)*v16;
      } while (v16 != nullptr);
    }
    else {
      do {
        v17 = (_QWORD*)v8[2];
        v18 = v8 == (_QWORD*)*v17;
        v8 = v17;
      } while (!v18);
    }
    v8 = v17;
  } while (v17 != v10);
  result = v21;
  if (v21 == v20) {
    goto LABEL_23;
  }

LABEL_27:
  if (result != nullptr) {
    v19 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64, __int64))(
        *result + v19))(result, a2, a3, a4);
  }
  return result;
}

unsigned __int64 EventManager_cbc720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  unsigned __int64 result;
  long double v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64** v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  char v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64* v26;
  char* v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  long double v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;

  if ((*(_BYTE*)a2 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 16);
  }
  else {
    v6 = a2 + 1;
  }
  result = strlen(v6);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_92;
  }
  v9 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (result | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v44 = v9;
    v45 = v10;
    v43 = v11 | 1;
    goto LABEL_12;
  }
  LOBYTE(v43) = 2 * result;
  v10 = (char*)&v43 + 1;
  if (result != 0) {
  LABEL_12:
    result = memmove(v10, v6, v9);
  }
  v10[v9] = 0;
  v12 = *(__int64***)(a1 + 160);
  if (v12 != nullptr) {
    if ((v43 & 1) != 0) {
      v13 = v45;
    }
    else {
      v13 = (char*)&v43 + 1;
    }
    if ((v43 & 1) != 0) {
      v14 = v44;
    }
    else {
      v14 = (unsigned __int64)(unsigned __int8)v43 >> 1;
    }
    do {
      v15 = *((unsigned __int8*)v12 + 32);
      v16 = (v15 & 1) == 0;
      v17 = v15 >> 1;
      if (v16) {
        v18 = v17;
      }
      else {
        v18 = (unsigned __int64)v12[5];
      }
      if (v16) {
        v19 = (__int64*)((char*)v12 + 33);
      }
      else {
        v19 = v12[6];
      }
      result = memcmp_alt1(v13, v19);
      if ((_DWORD)result != 0) {
        if ((result & 0x80000000) != 0) {
          goto LABEL_22;
        }
      }
      else if (v14 < v18) {
        goto LABEL_22;
      }
      result = memcmp_alt1(v19, v13);
      if ((_DWORD)result != 0) {
        if ((result & 0x80000000) == 0) {
        LABEL_35:
          v20 = 0;
          if ((v43 & 1) == 0) {
            goto LABEL_42;
          }
          goto LABEL_38;
        }
      }
      else if (v18 >= v14) {
        goto LABEL_35;
      }
      ++v12;
    LABEL_22:
      v12 = (__int64**)*v12;
    } while (v12 != nullptr);
  }
  v20 = 1;
  if ((v43 & 1) != 0) {
  LABEL_38:
    if (v45 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v8);
    }
  }
LABEL_42:
  if ((v20 & 1) != 0) {
    return result;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v22 = *(_QWORD*)(a2 + 16);
  }
  else {
    v22 = a2 + 1;
  }
  result = strlen(v22);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_92:
    String_60a1d0(result);
  }
  v23 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (result | 7) + 1;
    }
    v24 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v25,
                                                16, 0);
    v44 = v23;
    v45 = v24;
    v43 = v25 | 1;
  }
  else {
    LOBYTE(v43) = 2 * result;
    v24 = (char*)&v43 + 1;
    if (result == 0) {
      goto LABEL_55;
    }
  }
  memmove(v24, v22, v23);
LABEL_55:
  v24[v23] = 0;
  v26 = *(__int64**)(a1 + 160);
  if (v26 == nullptr) {
  LABEL_78:
    String_60a250("map::at:  key not found");
  }
  v27 = v45;
  if ((v43 & 1) != 0) {
    v28 = v45;
  }
  else {
    v28 = (char*)&v43 + 1;
  }
  if ((v43 & 1) != 0) {
    v29 = v44;
  }
  else {
    v29 = (unsigned __int64)(unsigned __int8)v43 >> 1;
  }
  while (1) {
    while (1) {
      v30 = *((unsigned __int8*)v26 + 32);
      v31 = (v30 & 1) == 0;
      v32 = v30 >> 1;
      v33 = v31 ? v32 : v26[5];
      v34 = v31 ? (__int64)v26 + 33 : v26[6];
      v35 = memcmp_alt1(v28, v34);
      if (v35 != 0) {
        break;
      }
      if (v29 >= v33) {
        goto LABEL_73;
      }
    LABEL_62:
      v26 = (__int64*)*v26;
      if (v26 == nullptr) {
        goto LABEL_78;
      }
    }
    if (v35 < 0) {
      goto LABEL_62;
    }
  LABEL_73:
    result = memcmp_alt1(v34, v28);
    if ((_DWORD)result != 0) {
      if ((result & 0x80000000) == 0) {
        break;
      }
      goto LABEL_77;
    }
    if (v33 >= v29) {
      break;
    }
  LABEL_77:
    v26 = (__int64*)v26[1];
    if (v26 == nullptr) {
      goto LABEL_78;
    }
  }
  if ((v43 & 1) != 0 && v27 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v36);
  }
  v38 = v26[7];
  v39 = v26[8];
  if (v38 != v39) {
    while (1) {
      v40 = *(_QWORD*)(a3 + 32);
      if (v40 == 0) {
        break;
      }
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v40 + 48LL))(v40, v38);
      v38 += 16;
      if (v38 == v39) {
        goto LABEL_87;
      }
    }
  LABEL_91:
    GameRoutine_60a310(v40);
  }
LABEL_87:
  v41 = v26[10];
  v42 = v26[11];
  if (v41 != v42) {
    while (1) {
      v40 = *(_QWORD*)(a3 + 32);
      if (v40 == 0) {
        break;
      }
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v40 + 48LL))(v40, v41);
      v41 += 16;
      if (v41 == v42) {
        return result;
      }
    }
    goto LABEL_91;
  }
  return result;
}

_QWORD* EventManager_cbcbe0(_QWORD* result)
{
  _QWORD* v1;
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

  if (result != nullptr) {
    v1 = result;
    EventManager_cbcbe0(*result);
    EventManager_cbcbe0(v1[1]);
    v2 = v1[10];
    v3 = fw_memory_g_heap_manager_ptr;
    if (v2 != 0) {
      v4 = v1[11];
      if (v2 == v4) {
        goto LABEL_11;
      }
      do {
        v5 = *(_QWORD*)(v4 - 8);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
        v4 -= 16;
      } while (v4 != v2);
      v6 = v1[10];
      v1[11] = v2;
      if (v6 != 0) {
      LABEL_11:
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
      }
    }
    v8 = v1[7];
    if (v8 != 0) {
      v9 = v1[8];
      if (v8 == v9) {
        goto LABEL_22;
      }
      do {
        v10 = *(_QWORD*)(v9 - 8);
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
        v9 -= 16;
      } while (v9 != v8);
      v11 = v1[7];
      v1[8] = v8;
      if (v11 != 0) {
      LABEL_22:
        v12 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
      }
    }
    if ((v1[4] & 1) != 0 && v1[6] != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
  }
  return result;
}

__int64 EventManager_cbce30(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v1 = a1[9];
  if (v1 != 0) {
    a1[10] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v4 = a1[8];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[6];
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  result = a1[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 EventManager_cbd020(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 24);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 32);
    v3 = result;
    if (v1 == v2) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = std___1___shared_weak_count___release_weak(v4);
      }
      v2 -= 16;
    } while (v2 != v1);
    v5 = *(_QWORD*)(v3 + 24);
    *(_QWORD*)(v3 + 32) = v1;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
    }
  }
  return result;
}

__int64 game_hub_EventManager_TryRunHitEvent_lambda0_Invoke(__int64 result,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  int v5;
  unsigned __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  unsigned __int64 v28;
  _QWORD* v29;
  char* v30;
  __int64 v31;
  char* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  char* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v57;
  signed __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64* v70;
  __int64 v71;
  signed __int64 v72;
  signed __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  signed __int64 v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(__int64**)(result + 8);
  if (**(_BYTE**)(result + 16) != 1 || (*(_BYTE*)(v3 + 1760) & 0x80) != 0) {
    v5 = *(_DWORD*)(v3 + 1448);
    if (v5 != -1) {
      if (v5 != 0) {
        goto LABEL_64;
      }
      if (v2 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                  memory_order_relaxed);
      }
      v6 = v4[4];
      if (v6 != 0) {
        goto LABEL_59;
      }
      v8 = (char*)v4[1];
      v7 = (char*)v4[2];
      v9 = 32 * (v7 - v8) - 1;
      if (v7 == v8) {
        v9 = 0;
      }
      if ((unsigned __int64)(v9 - v4[5]) >= 0x100) {
        v4[4] = 256;
        v10 = *((_QWORD*)v7 - 1);
        v4[2] = (__int64)(v7 - 8);
        v81 = v10;
        result = GameRoutine_cbd9c0(v4, &v81);
      LABEL_58:
        v6 = v4[4];
      LABEL_59:
        v48 = v4[1];
        v49 = (_QWORD*)(v48 + 8 * (v6 >> 8));
        v50 = *v49 + 16LL * (unsigned __int8)v6;
        if (v4[2] == v48) {
          v50 = 0;
        }
        if (v50 == *v49) {
          v50 = *(v49 - 1) + 4096LL;
        }
        *(_QWORD*)(v50 - 16) = v3;
        *(_QWORD*)(v50 - 8) = v2;
        v51 = v4[5] + 1;
        --v4[4];
        v4[5] = v51;
        goto LABEL_64;
      }
      v20 = (char*)v4[3];
      v21 = (char*)*v4;
      v22 = (__int64)&v20[-*v4];
      if (v7 - v8 < (unsigned __int64)v22) {
        if (v8 == v21) {
          v81 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4096,
                                               16, 0);
          GameRoutine_cbdc80(v4, &v81);
          v35 = v4[2];
          v36 = *(_QWORD*)(v35 - 8);
          v4[2] = v35 - 8;
          v81 = v36;
          result = GameRoutine_cbd9c0(v4, &v81);
        }
        else {
          v81 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4096,
                                               16, 0);
          result = GameRoutine_cbdb20(v4, &v81);
        }
        v37 = 128;
        if (v4[2] - v4[1] != 8) {
          v37 = v4[4] + 256;
        }
        v4[4] = v37;
        goto LABEL_58;
      }
      if (v20 == v21) {
        v28 = 1;
      }
      else {
        v28 = v22 >> 2;
      }
      if (v28 >> 61 == 0) {
        v29 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        v30 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
        result = fw_memory_HeapManager_Allocate(*v29, 4096, 16, 0);
        v31 = result;
        if (v28 != 0) {
          v32 = &v30[8 * v28];
        }
        else {
          v38 = fw_memory_HeapManager_Allocate(*v29, 8, 16, 0);
          v32 = (char*)(v38 + 8);
          v39 = 128;
          if (*(_QWORD*)(*v29 + 200LL) == 0) {
            v39 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v29 + v39);
          v8 = (char*)v4[1];
          v7 = (char*)v4[2];
          v30 = (char*)v38;
        }
        *(_QWORD*)v30 = v31;
        v40 = v30 + 8;
        v41 = v30;
        if (v8 != v7) {
          while (1) {
            if (v40 == v32) {
              if (v30 <= v41) {
                if (v40 == v41) {
                  v54 = 1;
                }
                else {
                  v54 = (v40 - v41) >> 2;
                }
                if (v54 >> 61 != 0) {
                  goto LABEL_113;
                }
                v55 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v54, 16, 0);
                v56 = v55;
                v42 = (char*)(v55 + 8 * (v54 >> 2));
                v58 = v40 - v30;
                v57 = v40 == v30;
                v40 = v42;
                if (!v57) {
                  v40 = &v42[v58];
                  v59 = (_QWORD*)(v55 + 8 * (v54 >> 2));
                  do {
                    v60 = *(_QWORD*)v30;
                    v30 += 8;
                    v58 -= 8LL;
                    *v59++ = v60;
                  } while (v58 != 0);
                }
                v32 = (char*)(v55 + 8 * v54);
                v61 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v61 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
                v41 = (char*)v56;
              }
              else {
                v53 = (((v30 - v41) >> 3) + 1 +
                       ((unsigned __int64)(((v30 - v41) >> 3) + 1) >> 63)) >>
                      1;
                v42 = &v30[-8 * v53];
                if (v40 != v30) {
                  result = memmove(&v30[-8 * v53], v30, v40 - v30);
                }
                v40 = &v42[v40 - v30];
              }
            }
            else {
              v42 = v30;
            }
            v52 = *(_QWORD*)v8;
            v8 += 8;
            v30 = v42;
            *(_QWORD*)v40 = v52;
            v40 += 8;
            if (v8 == (char*)v4[2]) {
              goto LABEL_52;
            }
          }
        }
        v42 = v30;
      LABEL_52:
        v43 = v4[4];
        v44 = *v4;
        *v4 = (__int64)v41;
        v4[1] = (__int64)v42;
        v45 = 128;
        v4[2] = (__int64)v40;
        v4[3] = (__int64)v32;
        v46 = v43 + 256;
        if (v40 - v42 != 8) {
          v45 = v46;
        }
        v4[4] = v45;
        if (v44 != 0) {
          v47 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v47 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v47);
        }
        goto LABEL_58;
      }
    LABEL_113:
      GameRoutine_60a210(result);
    }
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
    }
    v11 = (__int64*)v4[1];
    v12 = (__int64*)v4[2];
    v13 = (char*)v12 - (char*)v11;
    if (v12 == v11) {
      v14 = 0;
    }
    else {
      v14 = 32 * ((char*)v12 - (char*)v11) - 1;
    }
    v15 = v4[4];
    v16 = v4[5] + v15;
    if (v14 != v16) {
    LABEL_95:
      v69 = (_QWORD*)(v11[v16 >> 8] + 16LL * (unsigned __int8)v16);
      *v69 = v3;
      v69[1] = v2;
      ++v4[5];
      if (v2 == 0) {
        return result;
      }
      goto LABEL_65;
    }
    if (v15 < 0x100) {
      v18 = (__int64*)v4[3];
      v19 = (__int64)v18 - *v4;
      if (v13 >= (unsigned __int64)v19) {
        v23 = v19 >> 2;
        if (v18 == (__int64*)*v4) {
          v24 = 1;
        }
        else {
          v24 = v23;
        }
        if (v24 >> 61 != 0) {
          goto LABEL_113;
        }
        v25 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
        v26 = (__int64*)(v25 + v13);
        v27 = (__int64*)(v25 + 8 * v24);
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
        if (v13 == 8 * v24) {
          if (v12 == v11) {
            v62 = result;
            v63 = fw_memory_g_heap_manager_ptr;
            v26 = (__int64*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
            v27 = v26 + 1;
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)v63 + 200LL) == 0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v63 + v64);
            result = v62;
            v11 = (__int64*)v4[1];
            v12 = (__int64*)v4[2];
            v25 = (__int64)v26;
          }
          else {
            v26 -=
                ((v13 >> 3) + 1 + ((unsigned __int64)((v13 >> 3) + 1) >> 63)) >>
                1;
          }
        }
        *v26 = result;
        v65 = v26 + 1;
        if (v12 != v11) {
          while (1) {
            if (v26 == (__int64*)v25) {
              if (v65 >= v27) {
                if (v27 == v26) {
                  v74 = 1;
                }
                else {
                  v74 = ((char*)v27 - (char*)v26) >> 2;
                }
                if (v74 >> 61 != 0) {
                  goto LABEL_113;
                }
                v75 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v74, 16, 0);
                v76 = v75;
                v70 = (__int64*)(v75 + ((2 * v74 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                v77 = (char*)v65 - (char*)v26;
                v57 = v65 == v26;
                v65 = v70;
                if (!v57) {
                  v65 = (__int64*)((char*)v70 + v77);
                  v78 = (_QWORD*)(v75 + ((2 * v74 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  do {
                    v79 = *v26++;
                    v77 -= 8LL;
                    *v78++ = v79;
                  } while (v77 != 0);
                }
                v27 = (__int64*)(v75 + 8 * v74);
                v80 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v80 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v80);
                v25 = v76;
              }
              else {
                v72 = (char*)v65 - (char*)v26;
                v73 = (char*)v65 - (char*)v26;
                v57 = v65 == v26;
                v65 += (v27 - v65 + 1 +
                        ((unsigned __int64)(v27 - v65 + 1) >> 63)) >>
                       1;
                v70 = (__int64*)((char*)v65 - v72);
                if (!v57) {
                  result = memmove((char*)v65 - v72, v26, v73);
                }
              }
            }
            else {
              v70 = v26;
            }
            v71 = *--v12;
            *(v70 - 1) = v71;
            v66 = v70 - 1;
            v26 = v66;
            if (v12 == (__int64*)v4[1]) {
              goto LABEL_90;
            }
          }
        }
        v66 = v26;
      LABEL_90:
        v67 = *v4;
        *v4 = v25;
        v4[1] = (__int64)v66;
        v4[2] = (__int64)v65;
        v4[3] = (__int64)v27;
        if (v67 != 0) {
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v68 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
        }
        goto LABEL_94;
      }
      if (v18 != v12) {
        v81 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
        result = GameRoutine_cbdc80(v4, &v81);
        goto LABEL_94;
      }
      v81 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
      GameRoutine_cbdb20(v4, &v81);
      v33 = (__int64*)v4[1];
      v34 = *v33;
      v4[1] = (__int64)(v33 + 1);
      v81 = v34;
    }
    else {
      v4[4] = v15 - 256;
      v17 = *v11;
      v4[1] = (__int64)(v11 + 1);
      v81 = v17;
    }
    result = GameRoutine_cbdde0(v4, &v81);
  LABEL_94:
    v11 = (__int64*)v4[1];
    v16 = v4[5] + v4[4];
    goto LABEL_95;
  }
LABEL_64:
  if (v2 == 0) {
    return result;
  }
LABEL_65:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

__int64* EventManager_cbdf40(__int64** a1, unsigned __int8* a2, __int64 a3,
                             __int64** a4)
{
  __int64* v4;
  __int64* v5;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  _QWORD* v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;

  v5 = (__int64*)(a1 + 1);
  v4 = a1[1];
  if (v4 != nullptr) {
    v8 = *a2;
    v9 = (v8 & 1) == 0;
    v10 = v8 >> 1;
    if (v9) {
      v11 = a2 + 1;
    }
    else {
      v11 = *((unsigned __int8**)a2 + 2);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *((_QWORD*)a2 + 1);
    }
    while (1) {
      while (1) {
        v13 = v4;
        v14 = *((unsigned __int8*)v4 + 32);
        v15 = (v14 & 1) == 0;
        v16 = v14 >> 1;
        v17 = v15 ? v16 : v13[5];
        v18 = v15 ? (__int64)v13 + 33 : v13[6];
        v19 = v17 >= v12 ? v12 : v17;
        v20 = memcmp(v11, v18, v19);
        if (v20 != 0) {
          break;
        }
        if (v12 >= v17) {
          goto LABEL_22;
        }
      LABEL_8:
        v4 = (__int64*)*v13;
        v5 = v13;
        if (*v13 == 0) {
          goto LABEL_29;
        }
      }
      if (v20 < 0) {
        goto LABEL_8;
      }
    LABEL_22:
      v21 = memcmp(v18, v11, v19);
      if (v21 != 0) {
        if ((v21 & 0x80000000) == 0) {
          return v13;
        }
      }
      else if (v17 >= v12) {
        return v13;
      }
      v4 = (__int64*)v13[1];
      if (v4 == nullptr) {
        v5 = v13 + 1;
        goto LABEL_29;
      }
    }
  }
  v13 = (__int64*)(a1 + 1);
LABEL_29:
  v22 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  v23 = *a4;
  v24 = v22;
  if ((*(_BYTE*)*a4 & 1) != 0) {
    fw_text_String_CopyTerminated(v22 + 4, v23[2], v23[1]);
  }
  else {
    v25 = *v23;
    v26 = v23[1];
    v27 = v23[2];
    v22[5] = v26;
    v22[6] = v27;
    v22[4] = v25;
  }
  v24[11] = 0;
  v24[12] = 0;
  v24[9] = 0;
  v24[10] = 0;
  v28 = v24;
  v24[7] = 0;
  v24[8] = 0;
  *v24 = 0;
  v24[1] = 0;
  v24[2] = v13;
  *v5 = (__int64)v24;
  v29 = (__int64*)**a1;
  if (v29 != nullptr) {
    *a1 = v29;
    v28 = (_QWORD*)*v5;
  }
  fw_containers_BalanceAfterInsert(a1[1], v28);
  a1[2] = (__int64*)((char*)a1[2] + 1);
  return v24;
}

__int64

game_hub_EventManager_GetCandidatesAccessEvent_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 result;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    v5 = *a2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_d5ad30(v5, *(_QWORD*)(a1 + 16));
    if ((result & 1) == 0) {
    LABEL_23:
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        return std___1___shared_weak_count___release_weak(v2);
      }
      return result;
    }
    v7 = *(__int64**)(a1 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    result = GameRoutine_d5ad30(v3, *(_QWORD*)(a1 + 16));
    if ((result & 1) == 0) {
      return result;
    }
    v7 = *(__int64**)(a1 + 8);
  }
  v8 = (_QWORD*)v7[1];
  v9 = v7[2];
  if ((unsigned __int64)v8 >= v9) {
    v11 = *v7;
    v12 = (__int64)v8 - *v7;
    v13 = v12 >> 4;
    v14 = (v12 >> 4) + 1;
    if (v14 >> 60 != 0) {
      GameRoutine_cbe390();
    }
    v15 = v9 - v11;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 3 > v14) {
      v14 = v15 >> 3;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF0LL) {
      v17 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 60 != 0) {
        GameRoutine_60a210(result);
      }
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v17, 16, 0);
      v11 = *v7;
      v19 = v7[1] - *v7;
      v13 = v19 >> 4;
    }
    else {
      v18 = 0;
      v19 = v12;
    }
    v20 = (_QWORD*)(v18 + v12);
    v21 = v18 + 16 * v17;
    *v20 = v3;
    v20[1] = v2;
    v22 = v18 + v12 - 16 * v13;
    v10 = v18 + v12 + 16;
    result = memcpy(v22, v11, v19);
    *v7 = v22;
    v7[1] = v10;
    v7[2] = v21;
    if (v11 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v23);
    }
  }
  else {
    *v8 = v3;
    v8[1] = v2;
    v10 = (__int64)(v8 + 2);
  }
  v7[1] = v10;
  if (v2 != 0) {
    goto LABEL_23;
  }
  return result;
}

_QWORD*

game_hub_EventManager_ForLoopEventOptimize_lambda0_Invoke(_QWORD* result,
                                                          __int64 a2)
{
  __int64 v2;
  __int64 v3;

  if (*(_BYTE*)(result[1] + 12LL) != 1 ||
      (*(_BYTE*)(*(_QWORD*)a2 + 1761LL) & 2) == 0) {
    v2 = result[2];
    if (*(_BYTE*)(v2 + 4) != 1 ||
        (*(_DWORD*)(*(_QWORD*)a2 + 1208LL) & *(_DWORD*)v2) != 0) {
      v3 = *(_QWORD*)(result[3] + 32LL);
      if (v3 == 0) {
        GameRoutine_60a310_alt1((unsigned __int8)v3, a2);
      }
      return (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
    }
  }
  return result;
}

__int64 EventManager_d7ac20(__int64 result)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  float v6;

  if ((*(_BYTE*)(result + 76) & 1) == 0 &&
      *(int*)(GameData_21f3cb8 + 32) <= 0 &&
      *(_DWORD*)(GameData_21f3cb8 + 16) <= 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v3 = 2)
             : (v3 = 3),
         (v3 & v2) != 0)) {
      if (game_hub_ProcHubSeqView_instance_ == 0 ||
          (v4 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) == 0 ||
          *(_QWORD*)(v4 + 40) == 0) {
        v5 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
        if ((v5 == 0 || *(_QWORD*)(v5 + 40) == 0) &&
            *(_BYTE*)(GameData_21f3d10 + 10) == 1 &&
            *(int*)(GameData_21d96b8 + 24) <= 0) {
          v6 = *(float*)(result + 72) +
               (float)((float)(*(float*)(*(_QWORD*)
                                             game_script_hub_g_frame_counter_ptr
                                                 [0] +
                                         160LL) *
                               -0x1.0aef000000000p+4f) /
                       0x1.f400000000000p+9f);
          if (v6 < 0x0.0p+0f) {
            v6 = 0x0.0p+0f;
          }
          *(float*)(result + 72) = v6;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
