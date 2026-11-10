#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e7d0a0(_QWORD, _QWORD);
__int64 GameRoutine_edf9f0(_QWORD);
__int64 GameRoutine_ff7720(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlCameraCutBase_vtable)();
extern __int64 (*game_cmdbtl_CmdBtlCameraCutSelfie_vtable[])();
float GameRoutine_e7d750(_QWORD);
__int64 CmdBtlCameraCutSelfie_Destructor(__int64 a1);
__int64 CmdBtlCameraCutSelfie_Unknown2(__int64 a1);
__int64 GameRoutine_ff7420(_QWORD, _QWORD);
__int64 CmdBtlCameraCutSelfie_edfe30(__int64 a1, __int64* a2, __int64 a3,
                                     _DWORD* a4, char a5, char a6, float a7,
                                     float a8, float a9);

__int64 CmdBtlCameraCutSelfie_Destructor(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[2];

  *(_QWORD*)a1 = game_cmdbtl_CmdBtlCameraCutSelfie_vtable;
  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    v3 = std___1___shared_weak_count_lock(result);
    if (v3 != 0) {
      v4 = *(_QWORD**)(a1 + 40);
      v5 = v3;
      if (v4 != nullptr) {
        v9[0] = "Selfie";
        v9[1] = 6;
        GameRoutine_ff7720(v4 + 43, v9);
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
        if (*(_BYTE*)(a1 + 120) == 1 && *(float*)(a1 + 116) < 0.0) {
          GameRoutine_e7d0a0(v4, 1);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    result = *(_QWORD*)(a1 + 48);
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
  }
  *(_QWORD*)a1 = &game_cmdbtl_CmdBtlCameraCutBase_vtable;
  v8 = *(_QWORD*)(a1 + 16);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 CmdBtlCameraCutSelfie_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  __int64 v10;
  float v11;
  __int128 v12;
  __int64 v13;

  if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
    v2 = *(_QWORD*)(a1 + 48);
    if (v2 != 0) {
      v3 = std___1___shared_weak_count_lock(v2);
      if (v3 != 0) {
        if (*(_QWORD*)(a1 + 40) != 0 && *(_BYTE*)(a1 + 120) == 1 &&
            *(float*)(a1 + 116) < 0.0) {
          v4 = v3;
          GameRoutine_e7d0a0(*(_QWORD*)(a1 + 40), 0);
          v3 = v4;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v5 = v3;
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 48);
  if (v6 != 0) {
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 != 0) {
      v8 = *(_QWORD*)(a1 + 40);
      if (v8 != 0) {
        if (*(_BYTE*)(v8 + 464) == 1) {
          v9 = *(_OWORD*)(v8 + 448);
        }
        else {
          v10 = v7;
          v11 = GameRoutine_e7d750(*(_QWORD*)(a1 + 40));
          LODWORD(v9) = 0;
          DWORD2(v9) = 0;
          v7 = v10;
          *((float*)&v9 + 1) = v11;
        }
        *(_QWORD*)(a1 + 144) = v9;
        v12 = *(_OWORD*)(a1 + 144);
        *((_QWORD*)&v12 + 1) = DWORD2(v9);
        *(_OWORD*)(a1 + 144) = v12;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v13 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  return GameRoutine_edf9f0(a1);
}

__int64 CmdBtlCameraCutSelfie_edfe30(__int64 a1, __int64* a2, __int64 a3,
                                     _DWORD* a4, char a5, char a6, float a7,
                                     float a8, float a9)
{
  __int64 v9;
  __int64 v10;
  __int64 v17;
  char v18;
  char v19;
  __int128 v20;
  __int64 v21;
  __int128 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v29[2];

  v10 = *a2;
  v9 = a2[1];
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  v17 = *(_QWORD*)(a1 + 48);
  v18 = a5 & 1;
  v19 = a6 & 1;
  *(_QWORD*)(a1 + 40) = v10;
  *(_QWORD*)(a1 + 48) = v9;
  if (v17 != 0) {
    std___1___shared_weak_count___release_weak(v17);
  }
  if (*(unsigned __int8*)(a1 + 80) == *(unsigned __int8*)(a3 + 16)) {
    if (*(_BYTE*)(a1 + 80) != 0) {
      *(_DWORD*)(a1 + 64) = *(_DWORD*)a3;
      *(_DWORD*)(a1 + 68) = *(_DWORD*)(a3 + 4);
      v20 = *(_OWORD*)(a1 + 64);
      *((_QWORD*)&v20 + 1) = *(unsigned int*)(a3 + 8);
      *(_OWORD*)(a1 + 64) = v20;
    }
  }
  else if (*(_BYTE*)(a1 + 80) != 0) {
    *(_BYTE*)(a1 + 80) = 0;
  }
  else {
    *(_QWORD*)(a1 + 72) = *(_QWORD*)(a3 + 8);
    *(_QWORD*)(a1 + 64) = *(_QWORD*)a3;
    *(_BYTE*)(a1 + 80) = 1;
  }
  *(float*)(a1 + 112) = a7;
  *(float*)(a1 + 116) = a8;
  v21 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(a1 + 96) = *a4;
  *(_DWORD*)(a1 + 100) = a4[1];
  v22 = *(_OWORD*)(a1 + 96);
  DWORD2(v22) = a4[2];
  *(_BYTE*)(a1 + 120) = v18;
  *(float*)(a1 + 124) = a9;
  *(_BYTE*)(a1 + 128) = v19;
  *((_QWORD*)&v22 + 1) = DWORD2(v22);
  *(_OWORD*)(a1 + 96) = v22;
  if (v21 != 0) {
    v23 = std___1___shared_weak_count_lock(v21);
    if (v23 != 0) {
      v24 = *(_QWORD**)(a1 + 40);
      v25 = v23;
      if (v24 != nullptr) {
        v29[0] = "Selfie";
        v29[1] = 6;
        GameRoutine_ff7420(v24 + 43, v29);
        v26 = v24[27];
        v27 = v24[28];
        if (v27 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v26 != 0) {
          *(_BYTE*)(v26 + 60) = v24[44] != v24[43];
        }
        if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak(v27);
        }
        if (*(_BYTE*)(a1 + 120) == 1 && *(float*)(a1 + 116) < 0.0) {
          GameRoutine_e7d0a0(v24, 0);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
    }
  }
  return GameRoutine_edf9f0(a1);
}

#pragma GCC visibility pop
