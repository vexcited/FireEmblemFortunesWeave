#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bc9020(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_211d5a8[])();
extern __int64 GameData_2203100;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e340[2];
extern __int64* snd_g_fileIndex_ptr[2];
__int64 wld_map_MapEffectLoader_LoadAsync(__int64 a1, __int64 a2, __int64 a3);

__int64 wld_map_MapEffectLoader_LoadAsync(__int64 a1, __int64 a2, __int64 a3)
{
  char** v3;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;

  if (a3 == 0) {
    return 0;
  }
  v3 = (char**)(a2 + 16);
  v5 = snd_g_fileIndex_ptr[0];
  v6 = 24 * a3;
  while (1) {
    v7 = (*(_BYTE*)(v3 - 2) & 1) != 0 ? *v3 : (char*)v3 - 15;
    if (v7 != nullptr) {
      v8 = *v5;
      v9 = strlen(v7);
      if ((GameRoutine_6360e0(v8, v7, v9, 0, 0) & 1) != 0) {
        break;
      }
    }
    v3 += 3;
    v6 -= 24;
    if (v6 == 0) {
      return 0;
    }
  }
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v10[2] = 0;
  v11 = GameData_212e340[0];
  v12 = *(_QWORD*)(a1 + 128);
  v10[5] = a1;
  *v10 = v11 + 2;
  v10[1] = 0;
  v10[4] = GameData_211d5a8;
  v10[8] = v10 + 4;
  *(_QWORD*)(a1 + 120) = v10 + 4;
  *(_QWORD*)(a1 + 128) = v10;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *v5;
  if ((*(_BYTE*)(v3 - 2) & 1) != 0) {
    v14 = *v3;
  }
  else {
    v14 = (char*)v3 - 15;
  }
  v15 = strlen(v14);
  v16 = *(_QWORD*)(a1 + 120);
  v17 = *(_QWORD*)(a1 + 128);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    v23 = v16;
    v24 = v17;
    v18 = GameData_2203100;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v23 = v16;
    v24 = 0;
    v18 = GameData_2203100;
  }
  v22[0] = v14;
  v22[1] = v15;
  v25 = v18;
  v26 = 0;
  result = GameRoutine_bc9020(v13, v22);
  if (v24 != 0) {
    v20 = result;
    std___1___shared_weak_count___release_weak(v24);
    result = v20;
  }
  if (v17 != 0) {
    v21 = result;
    std___1___shared_weak_count___release_weak(v17);
    return v21;
  }
  return result;
}

#pragma GCC visibility pop
