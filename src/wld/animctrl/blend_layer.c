#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d2ae40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*wld_animctrl_BlendLayer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BlendLayer_Destructor(__int64 result);
_QWORD* Graph_d29060(_QWORD* result, long double, double, double, double,
                     long double);
__attribute__((swiftcall)) void
BlendLayer_d2b700_alt1(PSEUDO_X8, __int64* result) __asm__("BlendLayer_d2b700");
__int64 AnimCtrlModule_a77c00(__int64, int);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_d28f20(_QWORD, float);
__int64 GameRoutine_d2a2e0(_QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c188;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
__int64 BlendLayer_d29fa0(__int64 result, int a2, float a3);
__int64 BlendLayer_d2ae40_alt1(__int64 a1) __asm__("BlendLayer_d2ae40");
float* BlendLayer_d2af80(float* result, long double a2, double a3, double a4,
                         double a5, long double a6);
__attribute__((swiftcall)) void BlendLayer_d2b700(PSEUDO_X8 x8_,
                                                  _QWORD* result);
__attribute__((swiftcall)) void BlendLayer_d2b820(PSEUDO_X8 x8_,
                                                  __int64 result);
__int64 GameHr_d2a2e0(__int64 result, float);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void BlendLayer_d2ae40(__int64 a1);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");

__int64 BlendLayer_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  *(_QWORD*)result = wld_animctrl_BlendLayer_vtable;
  if (*(_BYTE*)(result + 52) == 1) {
    *(_BYTE*)(result + 52) = 0;
  }
  v2 = *(_QWORD*)(result + 24);
  v3 = *(_QWORD*)(result + 32);
  if (v2 != v3) {
    do {
      result = GameRoutine_d2ae40(v2);
      v2 += 56;
    } while (v2 != v3);
    v2 = *(_QWORD*)(v1 + 24);
  }
  if (v2 != 0) {
    v4 = *(_QWORD*)(v1 + 32);
    if (v2 == v4) {
      goto LABEL_14;
    }
    do {
      v5 = *(_QWORD*)(v4 - 48);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 56;
    } while (v4 != v2);
    v6 = *(_QWORD*)(v1 + 24);
    *(_QWORD*)(v1 + 32) = v2;
    v2 = v6;
    if (v6 != 0) {
    LABEL_14:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v2);
    }
  }
  return result;
}

__int64 BlendLayer_d29fa0(__int64 result, int a2, float a3)
{
  int v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;

  v3 = *(unsigned __int8*)(result + 52);
  v4 = result;
  *(_DWORD*)(result + 68) = a2;
  if (v3 == 1) {
    if (a3 == 0x0.0p+0f) {
      v6 = *(_QWORD*)(result + 24);
      v7 = *(_QWORD*)(result + 32);
      if (v6 != v7) {
        do {
          GameHr_d2a2e0(v6, a3);
          v6 += 56;
        } while (v6 != v7);
        if ((*(_BYTE*)(v4 + 52) & 1) == 0) {
          goto LABEL_22;
        }
      }
    }
    result = GameHr_d2a2e0(*(_QWORD*)(v4 + 24) + 56LL * *(int*)(v4 + 48), a3);
    v8 = *(_QWORD*)(v4 + 24);
    v9 = *(_QWORD*)(v4 + 32) - v8;
    if (v9 == 0) {
      LOBYTE(v13) = 0;
      v12 = 0;
      goto LABEL_48;
    }
    v10 = 0x6DB6DB6DB6DB6DB7LL * (v9 >> 3);
    if ((*(_BYTE*)(v4 + 52) & 1) != 0) {
      v11 = 0;
      v12 = 0;
      LOBYTE(v13) = 0;
      v14 = 0;
      while (1) {
        v15 = v8 + 56 * v11++;
        while (1) {
          if (*(_QWORD*)v15 == 0 && (*(_BYTE*)(v15 + 20) & 1) == 0) {
            result = v11 - *(unsigned int*)(v4 + 48);
            if (result != 1) {
              break;
            }
          }
          ++v11;
          v15 += 56;
          result = v11 - v10;
          if (v11 - v10 == 1) {
            if ((v14 & 1) != 0) {
              goto LABEL_48;
            }
          LABEL_24:
            if ((*(_BYTE*)(v4 + 52) & 1) != 0) {
              v19 = 0;
              v13 = 0;
              v20 = 0x1.fffffe0000000p+127f;
              v21 = *((float*)GameData_212c188 + 1);
              v22 = *(float*)((char*)((_UNKNOWN**)0x8LL) +
                              (_QWORD)GameData_212c188 + 4);
              v23 = (float*)(v8 + 40);
              v24 = -*(float*)GameData_212c188;
              while (1) {
                if (*(_DWORD*)(v4 + 48) != v19) {
                  result = *(unsigned __int8*)v23;
                  if ((_DWORD)result == 1) {
                    break;
                  }
                }
              LABEL_32:
                ++v19;
                v23 += 14;
                if (v10 == v19) {
                  v12 = v13 >> 8;
                  goto LABEL_48;
                }
              }
              v26 =
                  (float)(PSEUDO_UNFUSED(*(v23 - 4) * 0x1.921fb60000000p+1f)) +
                  (float)(roundf((float)(*(v23 - 4) * 0x1.921fb60000000p+1f) *
                                 0x1.45f3060000000p-3f) *
                          -0x1.921fb60000000p+2f);
              if (v26 > 0x1.921fb60000000p+0f) {
                v31 = 0x1.921fb60000000p+1f;
                goto LABEL_39;
              }
              v32 = 0x1.0000000000000p+0f;
              v33 = v26;
              if (v26 < -0x1.921fb60000000p+0f) {
                v31 = -0x1.921fb60000000p+1f;
              LABEL_39:
                v33 = v31 - v26;
                v32 = -0x1.0000000000000p+0f;
              }
              v34 =
                  v32 *
                  (float)((float)((float)((float)((float)(v22 +
                                                          (float)((float)((float)((float)(v21 +
                                                                                          (float)(v24 *
                                                                                                  (float)(v33 *
                                                                                                          v33))) *
                                                                                  (float)(v33 *
                                                                                          v33)) -
                                                                          *(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188)) *
                                                                  (float)(v33 *
                                                                          v33))) *
                                                  (float)(v33 * v33)) -
                                          *(float*)((char*)((__int128*)0x10LL) +
                                                    (_QWORD)GameData_212c188)) *
                                  (float)(v33 * v33)) +
                          0x1.0000000000000p+0f);
              v35 = fabsf(v34) * 0x1.0000000000000p-1f;
              if (v34 >= 0x0.0p+0f) {
                v36 = -0x1.0000000000000p+0f;
              }
              else {
                v36 = 0x1.0000000000000p+0f;
              }
              if ((float)((float)(v35 * v36) + 0x1.0000000000000p-1f) >= v20) {
                goto LABEL_32;
              }
              if (v26 <= 0x1.921fb60000000p+0f) {
                v27 = 0x1.0000000000000p+0f;
                if (v26 < -0x1.921fb60000000p+0f) {
                  v25 = -0x1.921fb60000000p+1f;
                LABEL_27:
                  v26 = v25 - v26;
                  v27 = -0x1.0000000000000p+0f;
                }
                v13 = v19;
                v28 =
                    v27 *
                    (float)((float)((float)((float)((float)(v22 +
                                                            (float)((float)((float)((float)(v21 +
                                                                                            (float)(v24 *
                                                                                                    (float)(v26 *
                                                                                                            v26))) *
                                                                                    (float)(v26 *
                                                                                            v26)) -
                                                                            *(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c188)) *
                                                                    (float)(v26 *
                                                                            v26))) *
                                                    (float)(v26 * v26)) -
                                            *(float*)((char*)((
                                                          __int128*)0x10LL) +
                                                      (_QWORD)
                                                          GameData_212c188)) *
                                    (float)(v26 * v26)) +
                            0x1.0000000000000p+0f);
                v29 = fabsf(v28) * 0x1.0000000000000p-1f;
                if (v28 >= 0x0.0p+0f) {
                  v30 = -0x1.0000000000000p+0f;
                }
                else {
                  v30 = 0x1.0000000000000p+0f;
                }
                v20 = (float)(v29 * v30) + 0x1.0000000000000p-1f;
                goto LABEL_32;
              }
              v25 = 0x1.921fb60000000p+1f;
              goto LABEL_27;
            }
          LABEL_22:
            GameRoutine_8123d0_alt1();
          }
        }
        LOBYTE(v13) = v11 - 1;
        v14 = 1;
        v12 = (unsigned int)(v11 - 1) >> 8;
        if (v11 == v10) {
        LABEL_48:
          v16 = (unsigned __int8)v13 | (v12 << 8);
          goto LABEL_49;
        }
      }
    }
    v17 = *(_QWORD*)(v4 + 24);
    v18 = v10;
    while (*(_QWORD*)v17 != 0 || (*(_BYTE*)(v17 + 20) & 1) != 0) {
      v17 += 56;
      if (--v18 == 0) {
        goto LABEL_24;
      }
    }
    goto LABEL_22;
  }
  v16 = 0;
LABEL_49:
  *(_DWORD*)(v4 + 48) = v16;
  *(_BYTE*)(v4 + 52) = 1;
  return result;
}

void BlendLayer_d2ae40(__int64 a1)
{
  int* v2;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  int v10;
  struct {
    int* v11;
    int* v12;
  } v11_;

  BlendLayer_d2b700_alt1((void*)((__int64*)&v11_.v11), (__int64*)a1);
  v2 = v11_.v11;
  v3 = v11_.v12;
  if (v11_.v11 == v11_.v12) {
    if (v11_.v11 == nullptr) {
      goto LABEL_6;
    }
    goto LABEL_3;
  }
  do {
    v6 = *v2;
    AnimCtrlModule_a77c00(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL), *v2);
    v7 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 16LL);
    v8 = *(_QWORD*)(v7 + 56) + 8 * v6;
    v10 = *(unsigned __int8*)(v8 + 4);
    v9 = (_BYTE*)(v8 + 4);
    if (v10 == 1) {
      *v9 = 0;
      AnimCtrlModule_a77c00(*(_QWORD*)(v7 + 24), v6);
    }
    ++v2;
  } while (v2 != v3);
  v2 = v11_.v11;
  if (v11_.v11 != nullptr) {
  LABEL_3:
    v11_.v12 = v2;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)v2);
  }
LABEL_6:
  v5 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  if (*(_BYTE*)(a1 + 20) == 1) {
    *(_BYTE*)(a1 + 20) = 0;
  }
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_WORD*)(a1 + 40) = 1;
}

float* BlendLayer_d2af80(float* result, long double a2, double a3, double a4,
                         double a5, long double a6)
{
  __int64* v6;
  __int64* v7;
  float* v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  double v15;
  float v16;
  float v17;
  float v18;
  float v20;
  int v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  char v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int* v33;
  int* i;
  int v35;
  int v36;
  char v37;
  int v38;
  char v39;
  float v40;
  float* v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  __int64 v52;
  unsigned __int64 v53;
  float v54;
  float v55;
  float v56;
  float v57;
  bool v58;
  float v59;
  float v60;
  float v61;
  float v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  float* v67;
  float v68;

  v6 = *((__int64**)result + 3);
  v7 = *((__int64**)result + 4);
  v8 = result;
  if (v6 != v7) {
    v9 = *(float*)&a2;
    while (1) {
      v10 = *v6;
      if (*v6 != 0 || (*((_BYTE*)v6 + 20) & 1) != 0) {
        break;
      }
    LABEL_3:
      v6 += 7;
      if (v6 == v7) {
        v6 = *((__int64**)v8 + 3);
        v7 = *((__int64**)v8 + 4);
        goto LABEL_76;
      }
    }
    v11 = v6[1];
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v10 == 0) {
    LABEL_31:
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = (float*)std___1___shared_weak_count___release_weak(v11);
      }
      v20 = *((float*)v6 + 6);
      v21 = *((unsigned __int8*)v6 + 40);
      v22 = v20 + (float)(*((float*)v6 + 7) * v9);
      if (!(v22 > 1.0)) {
        v23 = v20 + (float)(*((float*)v6 + 7) * v9);
      }
      else {
        v23 = 1.0;
      }
      if (!(v22 < 0.0)) {
        v24 = v23;
      }
      else {
        v24 = 0.0;
      }
      *((float*)v6 + 6) = v24;
      if (v21 == 1) {
        if (v24 <= 0.0) {
          *((_BYTE*)v6 + 41) = 1;
        }
      }
      else {
        if (v24 < 0x1.47ae140000000p-7) {
          v24 = 0x1.47ae140000000p-7;
        }
        *((float*)v6 + 6) = v24;
      }
      v26 = *v6;
      v25 = v6[1];
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v26 != 0) {
        v27 = *(_DWORD*)(v26 + 108);
        v28 = v27 >> 8;
        if (v25 == 0) {
          goto LABEL_53;
        }
      }
      else {
        LOBYTE(v27) = 0;
        v28 = 0;
        if (v25 == 0) {
          goto LABEL_53;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        result = (float*)std___1___shared_weak_count___release_weak(v25);
        if (v26 != 0) {
          goto LABEL_57;
        }
        goto LABEL_54;
      }
    LABEL_53:
      if (v26 != 0) {
        goto LABEL_57;
      }
    LABEL_54:
      if (*((_BYTE*)v6 + 20) != 1) {
        v29 = 0;
        LOBYTE(v27) = 0;
        v30 = *v6;
        v31 = v6[1];
        if (v31 == 0) {
        LABEL_59:
          v32 = (unsigned __int8)v27 | (v28 << 8);
          if (v30 != 0) {
            v33 = *(int**)(v30 + 64);
            for (i = *(int**)(v30 + 72); v33 != i;
                 *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v6[6] + 8) + 72LL) +
                           104LL * v35 + 33) = v37) {
              v36 = *v33++;
              v35 = v36;
              if (v36 == v32) {
                v37 = v29;
              }
              else {
                v37 = 0;
              }
            }
          }
          if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            result = (float*)std___1___shared_weak_count___release_weak(v31);
          }
          if (*((_BYTE*)v6 + 20) == 1) {
            v38 = *((_DWORD*)v6 + 4);
            if (v38 == v32) {
              v39 = v29;
            }
            else {
              v39 = 0;
            }
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v6[6] + 8) + 72LL) + 104LL * v38 +
                      33) = v39;
          }
          goto LABEL_3;
        }
      LABEL_58:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                  memory_order_relaxed);
        goto LABEL_59;
      }
      v27 = *((_DWORD*)v6 + 4);
      v28 = v27 >> 8;
    LABEL_57:
      v29 = 1;
      v30 = *v6;
      v31 = v6[1];
      if (v31 == 0) {
        goto LABEL_59;
      }
      goto LABEL_58;
    }
    *(_QWORD*)&a2 = *(_QWORD*)(v10 + 88);
    *(_QWORD*)&a6 = *(_QWORD*)(v10 + 96);
    v12 =
        LANES64_OF(vsub_f32(*(float32x2_t*)&a6, *(float32x2_t*)&a2)).n64_f32[0];
    LODWORD(a4) = DWORD1(a6);
    LODWORD(a3) = DWORD1(a2);
    v13 = *((float*)&a6 + 1) - *((float*)&a2 + 1);
    if (v12 != 0.0 || v13 != 0.0) {
      v14 = sqrtf((float)(v13 * v13) + (float)(v12 * v12));
      v12 = v12 / v14;
      v13 = v13 / v14;
    }
    *((float*)&v15 + 1) = v13;
    v16 = v9 * *(float*)(v10 + 104);
    v17 = fabsf(v16 * fabsf(v12));
    if ((LANES64_OF(vcgt_f32(*(float32x2_t*)&a2, *(float32x2_t*)&a6))
             .n64_u8[0] &
         1) != 0) {
      v18 = *(float*)&a2 - v17;
      if (!((float)(*(float*)&a2 - v17) < *(float*)&a6)) {
        goto LABEL_18;
      }
    }
    else {
      LODWORD(v18) = *(_QWORD*)(v10 + 88);
      if ((LANES64_OF(vcgt_f32(*(float32x2_t*)&a6, *(float32x2_t*)&a2))
               .n64_u32[0] &
           1) == 0 ||
          (v18 = *(float*)&a2 + v17,
           !((float)(*(float*)&a2 + v17) > *(float*)&a6))) {
      LABEL_18:
        *(float*)&a6 = fabsf(v16 * fabsf(*((float*)&v15 + 1)));
        if (!(*((float*)&a2 + 1) > *((float*)&a6 + 1))) {
          LODWORD(v15) = HIDWORD(*(_QWORD*)(v10 + 88));
          if (!(*((float*)&a2 + 1) < *((float*)&a6 + 1)) ||
              (*(float*)& v15 = *((float*)&a2 + 1) + *(float*)&a6,
               !((float)(*((float*)&a2 + 1) + *(float*)&a6) >
                 *((float*)&a6 + 1)))) {
          LABEL_24:
            if (*(float*)&a2 != v18 || *((float*)&a2 + 1) != *(float*)&v15) {
              *(float*)(v10 + 88) = v18;
              *(_DWORD*)(v10 + 92) = LODWORD(v15);
              result = (float*)Graph_d29060((_QWORD*)v10, a2, a3, a4, v15, a6);
            }
            if (v9 > 0.0) {
              result = (float*)GameRoutine_d28f20(v10, 0.5);
            }
            goto LABEL_31;
          }
        }
        else {
          *(float*)&v15 = *((float*)&a2 + 1) - *(float*)&a6;
          if (!((float)(*((float*)&a2 + 1) - *(float*)&a6) <
                *((float*)&a6 + 1))) {
            goto LABEL_24;
          }
        }
        LODWORD(v15) = HIDWORD(*(_QWORD*)(v10 + 96));
        goto LABEL_24;
      }
    }
    v18 = *(float*)&a6;
    goto LABEL_18;
  }
LABEL_76:
  if (v6 == v7) {
    return result;
  }
  v40 = 0.0;
  v41 = (float*)v6;
  v42 = *((float*)GameData_212c188 + 1);
  v43 = -*(float*)GameData_212c188;
  v44 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v45 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v46 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  do {
    v47 = (float)(v41[6] * 0x1.921fb60000000p+1) +
          (float)(roundf((float)(v41[6] * 0x1.921fb60000000p+1) *
                         0x1.45f3060000000p-3) *
                  -0x1.921fb60000000p+2);
    if (v47 > 0x1.921fb60000000p+0) {
      v47 = 0x1.921fb60000000p+1 - v47;
    LABEL_79:
      v48 = -1.0;
      goto LABEL_80;
    }
    v48 = 1.0;
    if (v47 < -0x1.921fb60000000p+0) {
      v47 = -0x1.921fb60000000p+1 - v47;
      goto LABEL_79;
    }
  LABEL_80:
    v41 += 14;
    v49 =
        v48 *
        (float)((float)((float)((float)((float)(v44 +
                                                (float)((float)((float)((float)(v42 +
                                                                                (float)(v43 *
                                                                                        (float)(v47 *
                                                                                                v47))) *
                                                                        (float)(v47 *
                                                                                v47)) -
                                                                *(float*)((char*)((
                                                                              _UNKNOWN**)0x8LL) +
                                                                          (_QWORD)
                                                                              GameData_212c188)) *
                                                        (float)(v47 * v47))) *
                                        (float)(v47 * v47)) -
                                *(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c188)) *
                        (float)(v47 * v47)) +
                1.0);
    v50 = fabsf(v49) * 0.5;
    if (!(v49 < 0.0)) {
      v51 = -1.0;
    }
    else {
      v51 = 1.0;
    }
    v40 = v40 + (float)((float)(v50 * v51) + 0.5);
  } while (v41 != (float*)v7);
  if (v40 > 0.0) {
    v52 = 0;
    v53 = 0;
    while (1) {
      v54 =
          (float)(*(float*)&v6[v52 + 3] * 0x1.921fb60000000p+1) +
          (float)(roundf((float)(*(float*)&v6[v52 + 3] * 0x1.921fb60000000p+1) *
                         0x1.45f3060000000p-3) *
                  -0x1.921fb60000000p+2);
      if (v54 > 0x1.921fb60000000p+0) {
        break;
      }
      v55 = 1.0;
      if (v54 < -0x1.921fb60000000p+0) {
        v54 = -0x1.921fb60000000p+1 - v54;
        goto LABEL_95;
      }
    LABEL_96:
      v56 =
          v55 *
          (float)((float)((float)(v45 +
                                  (float)((float)(v44 +
                                                  (float)((float)(v46 +
                                                                  (float)((float)(v42 +
                                                                                  (float)(v43 *
                                                                                          (float)(v54 *
                                                                                                  v54))) *
                                                                          (float)(v54 *
                                                                                  v54))) *
                                                          (float)(v54 * v54))) *
                                          (float)(v54 * v54))) *
                          (float)(v54 * v54)) +
                  1.0);
      v57 = fabsf(v56);
      v58 = v56 < 0.0;
      v59 = -1.0;
      v60 = v57 * 0.5;
      if (v58) {
        v59 = 1.0;
      }
      v61 = v8[16] * (float)((float)((float)(v60 * v59) + 0.5) / v40);
      if (*(_BYTE*)(*((_QWORD*)v8 + 1) + 132LL) == 1) {
        v62 = fmaxf(v61, 0x1.47ae140000000p-7);
        if (((_BYTE)v8[13] & (v53 == *((_DWORD*)v8 + 12))) != 0) {
          v61 = v62;
        }
      }
      result = (float*)v6[v52];
      v63 = v6[v52 + 1];
      *((float*)&v6[v52 + 4] + 1) = v61;
      if (v63 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (result != nullptr) {
        result[28] = v61;
        result = (float*)GameRoutine_d28f20(result, 0.0);
      }
      if (v63 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
        result = (float*)std___1___shared_weak_count___release_weak(v63);
      }
      v64 = &v6[v52];
      if (BYTE4(v6[v52 + 2]) == 1) {
        v65 = *(_QWORD*)(v64[6] + 8);
        v66 = *(_QWORD*)(v65 + 72) + 104LL * *((int*)v64 + 4);
        v68 = *(float*)(v66 + 96);
        v67 = (float*)(v66 + 96);
        if (v68 != v61) {
          *v67 = v61;
          *(_BYTE*)(v65 + 249) = 1;
        }
      }
      v6 = *((__int64**)v8 + 3);
      ++v53;
      v52 += 7;
      if (0x6DB6DB6DB6DB6DB7LL *
              ((__int64)(*((_QWORD*)v8 + 4) - (_QWORD)v6) >> 3) <=
          v53) {
        return result;
      }
    }
    v54 = 0x1.921fb60000000p+1 - v54;
  LABEL_95:
    v55 = -1.0;
    goto LABEL_96;
  }
  return result;
}

__attribute__((swiftcall)) void BlendLayer_d2b700(PSEUDO_X8 x8_, _QWORD* result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  int* v6;
  int* v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  int v11;

  v3 = *result;
  v2 = result[1];
  v4 = result;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 != 0) {
    v6 = *(int**)(v3 + 64);
    v7 = *(int**)(v3 + 72);
    v8 = v7 - v6;
    v9 = v8 + 1;
    if (v8 != -1) {
      if (v9 >> 62 != 0) {
        GameRoutine_6e5a20();
      }
      result = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v9, 16, 0);
      *a2 = result;
      a2[1] = result;
      a2[2] = (char*)result + 4 * v9;
      v6 = *(int**)(v3 + 64);
      v7 = *(int**)(v3 + 72);
    }
    while (v6 != v7) {
      v10 = *v6++;
      v11 = v10;
      result = (_QWORD*)GameRoutine_7d6200(a2, &v11);
    }
  }
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v2);
  }
  if (*((_BYTE*)v4 + 20) == 1) {
    (_QWORD*)GameRoutine_7d6200(a2, v4 + 2);
    return;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void BlendLayer_d2b820(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int* v15;
  int* v16;
  _DWORD* v17;
  int v18;
  unsigned __int64 v19;
  __int64 v20;
  signed __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  unsigned __int64 v30;
  _DWORD* v31;
  __int64 v32;
  signed __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = *(__int64**)(a1 + 24);
  v3 = *(__int64**)(a1 + 32);
  v41 = v3;
  while (v4 != v3) {
    v6 = *v4;
    v7 = v4[1];
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v6 != 0) {
      v8 = *a2;
      v9 = ((__int64)(*(_QWORD*)(v6 + 72) - *(_QWORD*)(v6 + 64)) >> 2) + 1;
      if (v9 > (a2[2] - *a2) >> 2) {
        if (v9 >> 62 != 0) {
          goto LABEL_61;
        }
        v10 = a2[1] - v8;
        v11 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                  4 * v9, 16, 0);
        memcpy_alt1(v11, v8, v10);
        *a2 = v11;
        a2[1] = v11 + v10;
        a2[2] = v11 + 4 * v9;
        if (v8 != 0) {
          v12 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v8);
        }
      }
    }
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
      v13 = *v4;
      v14 = v4[1];
      if (v14 == 0) {
        goto LABEL_19;
      }
    LABEL_18:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
      goto LABEL_19;
    }
    v13 = *v4;
    v14 = v4[1];
    if (v14 != 0) {
      goto LABEL_18;
    }
  LABEL_19:
    v42 = v14;
    if (v13 != 0) {
      v15 = *(int**)(v13 + 64);
      v16 = *(int**)(v13 + 72);
      if (v15 != v16) {
        v17 = (_DWORD*)a2[1];
        do {
          v18 = *v15;
          v19 = a2[2];
          if ((unsigned __int64)v17 < v19) {
            *v17++ = v18;
          }
          else {
            v20 = *a2;
            v21 = (signed __int64)v17 - *a2;
            v22 = (v21 >> 2) + 1;
            if (v22 >> 62 != 0) {
              goto LABEL_61;
            }
            v23 = v19 - v20;
            if (v23 >> 1 > v22) {
              v22 = v23 >> 1;
            }
            if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFFCLL) {
              v24 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v24 = v22;
            }
            if (v24 != 0) {
              if (v24 >> 62 != 0) {
                goto LABEL_62;
              }
              v25 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v24, 16, 0);
            }
            else {
              v25 = 0;
            }
            v26 = v25 + 4 * v24;
            v27 = v25 + v21 - 4 * (v21 >> 2);
            *(_DWORD*)(v25 + v21) = v18;
            v17 = (_DWORD*)(v25 + v21 + 4);
            memcpy_alt1(v27, v20, v21);
            *a2 = v27;
            a2[2] = v26;
            if (v20 != 0) {
              v28 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v28 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v20);
            }
          }
          ++v15;
          a2[1] = (__int64)v17;
        } while (v15 != v16);
      }
    }
    if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
      std___1___shared_weak_count___release_weak_alt1(v42);
    }
    if (*((_BYTE*)v4 + 20) == 1) {
      v29 = *((_DWORD*)v4 + 4);
      v31 = (_DWORD*)a2[1];
      v30 = a2[2];
      if ((unsigned __int64)v31 < v30) {
        *v31 = v29;
        v5 = (__int64)(v31 + 1);
      }
      else {
        v32 = *a2;
        v33 = (signed __int64)v31 - *a2;
        v34 = (v33 >> 2) + 1;
        if (v34 >> 62 != 0) {
        LABEL_61:
          GameRoutine_6e5a20_alt1();
        }
        v35 = v30 - v32;
        if (v35 >> 1 > v34) {
          v34 = v35 >> 1;
        }
        if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFFCLL) {
          v36 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v36 = v34;
        }
        if (v36 != 0) {
          if (v36 >> 62 != 0) {
          LABEL_62:
            GameRoutine_60a210();
          }
          v37 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v36, 16, 0);
        }
        else {
          v37 = 0;
        }
        v38 = v37 + 4 * v36;
        v39 = v37 + v33 - 4 * (v33 >> 2);
        *(_DWORD*)(v37 + v33) = v29;
        v5 = v37 + v33 + 4;
        memcpy_alt1(v39, v32, v33);
        *a2 = v39;
        a2[2] = v38;
        if (v32 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v32);
        }
      }
      a2[1] = v5;
    }
    v3 = v41;
    v4 += 7;
  }
}

#pragma GCC visibility pop
