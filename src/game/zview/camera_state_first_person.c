#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_d20f00(_QWORD* result);
__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CameraStateFirstPerson_vtable[])();
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21d96b8;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_220b6f0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eda8[10];
_QWORD* CameraStateFirstPerson_Destructor(__int64 a1);
__int64 CameraStateFirstPerson_DeletingDestructor(__int64 a1);
__int64 CameraStateFirstPerson_Unknown2(__int64 a1);

_QWORD* CameraStateFirstPerson_Destructor(__int64 a1)
{
  __int64 v1;
  int v2;

  *(_QWORD*)a1 = game_zview_CameraStateFirstPerson_vtable;
  if (*(_BYTE*)(a1 + 992) == 0) {
    return GameRoutine_d20f00((_QWORD*)a1);
  }
  *(_BYTE*)(a1 + 992) = 0;
  if (*(_BYTE*)(GameData_21f3cb0 + 1144) == 0) {
    return GameRoutine_d20f00((_QWORD*)a1);
  }
  *(_BYTE*)(GameData_21f3cb0 + 1144) = 0;
  v1 = GameData_21d96b8;
  v2 = *(_DWORD*)(GameData_21d96b8 + 24) - 1;
  *(_DWORD*)(GameData_21d96b8 + 24) = v2;
  if (v2 != 0) {
    return GameRoutine_d20f00((_QWORD*)a1);
  }
  (*(void (**)(__int64))(*(_QWORD*)(v1 + 16) + 8LL))(v1 + 16);
  return GameRoutine_d20f00((_QWORD*)a1);
}

__int64 CameraStateFirstPerson_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  *(_QWORD*)a1 = game_zview_CameraStateFirstPerson_vtable;
  if (*(_BYTE*)(a1 + 992) != 0) {
    *(_BYTE*)(a1 + 992) = 0;
    if (*(_BYTE*)(GameData_21f3cb0 + 1144) != 0) {
      *(_BYTE*)(GameData_21f3cb0 + 1144) = 0;
      v2 = GameData_21d96b8;
      v3 = *(_DWORD*)(GameData_21d96b8 + 24) - 1;
      *(_DWORD*)(GameData_21d96b8 + 24) = v3;
      if (v3 == 0) {
        (*(void (**)(__int64))(*(_QWORD*)(v2 + 16) + 8LL))(v2 + 16);
      }
    }
  }
  GameRoutine_d20f00((_QWORD*)a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 CameraStateFirstPerson_Unknown2(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  float v15;
  float v16;
  float v17;
  float v18;
  char v19;
  float v20;
  __int64 v21;
  int v22;

  v2 = (__int64*)GameData_212dc38[0];
  result = GameRoutine_a7fda0(a1 + 80, *(_QWORD*)GameData_212dc38[0] + 16LL);
  v4 = *(_QWORD*)(a1 + 912);
  v5 = *(_OWORD*)(*(_QWORD*)(v4 + 8) + 112LL);
  *(_QWORD*)(v4 + 16) = v5;
  v6 = *(_OWORD*)(v4 + 16);
  *((_QWORD*)&v6 + 1) = DWORD2(v5);
  *(_OWORD*)(v4 + 16) = v6;
  LODWORD(v6) = *(_DWORD*)(a1 + 164);
  LODWORD(v5) = *(_DWORD*)(a1 + 168);
  v7 = *(_QWORD*)(a1 + 888);
  *(_DWORD*)(a1 + 544) = 1050253722;
  *(_QWORD*)(a1 + 516) = 0x42480000C2480000LL;
  v8 = *(__int64**)(a1 + 880);
  *(_DWORD*)(a1 + 836) = v5;
  *(_DWORD*)(a1 + 832) = v6;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v9 = *v8;
    if (v9 == 0 || GameData_220b6f0 == 0) {
      goto LABEL_16;
    }
    v10 = *(_QWORD**)(GameData_220b6f0 + 8);
    v11 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v10 != v11) {
      while (*v10 != v9) {
        v10 += 2;
        if (v10 == v11) {
          goto LABEL_16;
        }
      }
    }
    if (v10 != v11) {
      v15 = *(float*)(v9 + 560);
    }
    else {
    LABEL_16:
      v15 = 1.4f;
      if (*GameData_212eda8[0] == 0) {
        v15 = 0.0f;
      }
    }
    *(_BYTE*)(a1 + 560) = 1;
    *(float*)(a1 + 556) = v15 + 0.1f;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      result = std___1___shared_weak_count___release_weak(v7);
    }
  }
  else {
    v12 = *v8;
    if (v12 == 0 || GameData_220b6f0 == 0) {
      goto LABEL_22;
    }
    v13 = *(_QWORD**)(GameData_220b6f0 + 8);
    v14 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v13 != v14) {
      while (*v13 != v12) {
        v13 += 2;
        if (v13 == v14) {
          goto LABEL_22;
        }
      }
    }
    if (v13 != v14) {
      v16 = *(float*)(v12 + 560);
    }
    else {
    LABEL_22:
      v16 = 1.4f;
      if (*GameData_212eda8[0] == 0) {
        v16 = 0.0f;
      }
    }
    *(_BYTE*)(a1 + 560) = 1;
    *(float*)(a1 + 556) = v16 + 0.1f;
  }
  v17 = *(float*)(a1 + 500);
  v18 = *(float*)(a1 + 512);
  *(_DWORD*)(a1 + 836) = 0;
  v19 = *(_BYTE*)(a1 + 992);
  *(float*)(a1 + 500) = v17 * 0.64f;
  v20 = *(float*)(a1 + 492);
  *(float*)(a1 + 512) = v18 * 0.96f;
  *(float*)(a1 + 492) = v20 * 1.25f;
  *(float*)(a1 + 504) = *(float*)(a1 + 504) * 1.25f;
  *(float*)(a1 + 528) = *(float*)(a1 + 528) * 0.5f;
  *(float*)(a1 + 524) = *(float*)(a1 + 524) * 0.5f;
  if ((v19 & 1) == 0) {
    v21 = *v2;
    *(_BYTE*)(a1 + 992) = 1;
    if ((*(_BYTE*)(v21 + 1144) & 1) == 0) {
      *(_BYTE*)(v21 + 1144) = 1;
      *(_DWORD*)(v21 + 1148) = 0;
      result = GameData_21d96b8;
      v22 = *(_DWORD*)(GameData_21d96b8 + 24);
      *(_DWORD*)(GameData_21d96b8 + 24) = v22 + 1;
      if (v22 == 0) {
        return (**(__int64 (***)(__int64))(result + 16))(result + 16);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
