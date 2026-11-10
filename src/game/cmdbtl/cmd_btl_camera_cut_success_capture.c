#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ff7420(_QWORD, _QWORD);
__int64 GameRoutine_ff7720(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlCameraCutBase_vtable)();
extern __int64 (*game_cmdbtl_CmdBtlCameraCutSuccessCapture_vtable[])();
__int64 CmdBtlCameraCutSuccessCapture_Destructor(_QWORD* a1);
__int64 CmdBtlCameraCutSuccessCapture_f43960(__int64 a1, __int64* a2,
                                             __int64* a3, _DWORD* a4);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
float CmdBtlUnit_e7d750(_QWORD);
__attribute__((swiftcall)) void
CmdBtlCameraCutSuccessCapture_f43790(PSEUDO_X8 x8_, float32x4_t** a1);

__int64 CmdBtlCameraCutSuccessCapture_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  _QWORD v17[2];

  *a1 = game_cmdbtl_CmdBtlCameraCutSuccessCapture_vtable;
  v2 = a1[6];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = (_QWORD*)a1[5];
      v5 = v3;
      if (v4 != nullptr) {
        v17[0] = "Capture";
        v17[1] = 7;
        GameRoutine_ff7720(v4 + 43, v17);
        v6 = v4[27];
        v7 = v4[28];
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v6 != 0) {
          *(_BYTE*)(v6 + 60) = v4[44] != v4[43];
        }
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  v8 = a1[8];
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = (_QWORD*)a1[7];
      v11 = v9;
      if (v10 != nullptr) {
        v17[0] = "Capture";
        v17[1] = 7;
        GameRoutine_ff7720(v10 + 43, v17);
        v12 = v10[27];
        v13 = v10[28];
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v12 != 0) {
          *(_BYTE*)(v12 + 60) = v10[44] != v10[43];
        }
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
    }
    v14 = a1[8];
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
  }
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *a1 = &game_cmdbtl_CmdBtlCameraCutBase_vtable;
  v16 = a1[2];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    return std___1___shared_weak_count___release_weak(v16);
  }
  return result;
}

__attribute__((swiftcall)) void

CmdBtlCameraCutSuccessCapture_f43790(PSEUDO_X8 x8_, float32x4_t** a1)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t* v3;
  __int64 v5;
  float32x4_t* v6;
  float32x4_t* v7;
  __int64 v8;
  float32x4_t v9;
  __int64 v10;
  float v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x4_t v15;

  v3 = a1[1];
  if (v3 != nullptr) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = *a1;
      if (*a1 != nullptr) {
        v7 = a1[1];
        if (v7 != nullptr &&
            (atomic_fetch_add_explicit((atomic_ullong* volatile)&v7[1], 1u,
                                       memory_order_relaxed),
             (v8 = std___1___shared_weak_count_lock(v7)) != 0)) {
          v9 = v6[6];
          LANES128(v9).n128_u32[3] = 0;
          v15 = v9;
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v10 = v8;
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak(v10);
          }
        }
        else {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
            v14 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v14;
            __cxa_guard_release(&GameData_21a6130);
          }
          v15 = COERCE_AS(float32x4_t, GameData_21a6120);
          if (v7 == nullptr) {
            goto LABEL_15;
          }
        }
        std___1___shared_weak_count___release_weak(v7);
      LABEL_15:
        v11 = CmdBtlUnit_e7d750(v6);
        LODWORD(v12) = 0;
        *((float*)&v12 + 1) = v11;
        *a2 = vaddq_f32(v15, COERCE_AS(float32x4_t, v12));
      LABEL_16:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
        return;
      }
    }
  }
  else {
    v5 = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v13 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v13;
    __cxa_guard_release(&GameData_21a6130);
  }
  *a2 = COERCE_AS(float32x4_t, GameData_21a6120);
  if (v5 != 0) {
    goto LABEL_16;
  }
}

__int64 CmdBtlCameraCutSuccessCapture_f43960(__int64 a1, __int64* a2,
                                             __int64* a3, _DWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[2];

  v5 = *a2;
  v4 = a2[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(a1 + 48) = v4;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  v11 = *a3;
  v10 = a3[1];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  v12 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 56) = v11;
  *(_QWORD*)(a1 + 64) = v10;
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(a1 + 80) = *a4;
  *(_DWORD*)(a1 + 84) = a4[1];
  v14 = *(_OWORD*)(a1 + 80);
  *((_QWORD*)&v14 + 1) = (unsigned int)a4[2];
  *(_OWORD*)(a1 + 80) = v14;
  if (v13 != 0) {
    v15 = std___1___shared_weak_count_lock(v13);
    if (v15 != 0) {
      v16 = *(_QWORD**)(a1 + 40);
      v17 = v15;
      if (v16 != nullptr) {
        v25[0] = "Capture";
        v25[1] = 7;
        GameRoutine_ff7420(v16 + 43, v25);
        v18 = v16[27];
        v19 = v16[28];
        if (v19 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v18 != 0) {
          *(_BYTE*)(v18 + 60) = v16[44] != v16[43];
        }
        if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
  }
  result = *(_QWORD*)(a1 + 64);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v21 = *(_QWORD**)(a1 + 56);
      v22 = result;
      if (v21 != nullptr) {
        v25[0] = "Capture";
        v25[1] = 7;
        result = GameRoutine_ff7420(v21 + 43, v25);
        v23 = v21[27];
        v24 = v21[28];
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v23 != 0) {
          *(_BYTE*)(v23 + 60) = v21[44] != v21[43];
        }
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          result = std___1___shared_weak_count___release_weak(v24);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        return std___1___shared_weak_count___release_weak(v22);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
