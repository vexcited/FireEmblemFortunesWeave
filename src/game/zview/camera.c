#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8234c0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdae50[])();
extern __int64 (*game_zview_Camera_vtable[])();
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_21f3cb0;
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212e740[2];
__int64 Camera_Destructor_d1dca0(__int64 a1);

__int64 Camera_Destructor_d1dca0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  *(_QWORD*)a1 = game_zview_Camera_vtable;
  if (*(_BYTE*)(a1 + 920) == 1) {
    GameRoutine_8234c0();
    *(_BYTE*)(a1 + 920) = 0;
  }
  v2 = *(_QWORD*)(a1 + 1176);
  *(_QWORD*)(a1 + 1176) = 0;
  if (v2 != 0) {
    *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 152LL) =
        *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 144LL);
    v3 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v3, v2);
  }
  v4 = *(_QWORD*)(a1 + 1168);
  *(_QWORD*)(a1 + 1168) = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = *(_QWORD*)(a1 + 1160);
  *(_QWORD*)(a1 + 1160) = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = *(_QWORD*)(a1 + 1000);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = *(_QWORD*)(a1 + 984);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 968);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  result = *(_QWORD*)(a1 + 912);
  *(_QWORD*)(a1 + 912) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  if (*(_BYTE*)(a1 + 904) == 1) {
    v10 = *(_QWORD*)(a1 + 840);
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = GameData_212e740[0];
  if (*(_BYTE*)(a1 + 816) == 1) {
    v12 = *(_QWORD*)(a1 + 784);
    *(_QWORD*)(a1 + 416) = GameData_212e740[0] + 2;
    if (v12 != 0) {
      v13 = *(_QWORD*)(a1 + 792);
      if (v12 == v13) {
        goto LABEL_34;
      }
      do {
        result = *(_QWORD*)(v13 - 8);
        *(_QWORD*)(v13 - 8) = 0;
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        }
        v13 -= 24;
      } while (v13 != v12);
      v14 = *(_QWORD*)(a1 + 784);
      *(_QWORD*)(a1 + 792) = v12;
      v12 = v14;
      if (v14 != 0) {
      LABEL_34:
        v15 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v15 = 56;
        }
        result =
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v15, v12);
      }
    }
  }
  v16 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 16) = v11 + 2;
  if (v16 != 0) {
    v17 = *(_QWORD*)(a1 + 392);
    if (v16 == v17) {
      goto LABEL_44;
    }
    do {
      result = *(_QWORD*)(v17 - 8);
      *(_QWORD*)(v17 - 8) = 0;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
      v17 -= 24;
    } while (v17 != v16);
    v18 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 392) = v16;
    v16 = v18;
    if (v18 != 0) {
    LABEL_44:
      v19 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v19 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v19, v16);
    }
  }
  *(_QWORD*)a1 = GameData_1fdae50;
  if (GameData_21f3cb0 == a1) {
    GameData_21f3cb0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
