#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9647c0(__int64 result);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_EffectConst_Drawer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Drawer_Destructor_alt1(_QWORD* a1) __asm__("Drawer_Destructor");
bool GameRoutine_964040(__int64);
__int64 Drawer_9647c0_alt1(__int64 result) __asm__("Drawer_9647c0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
bool EffectConst_964040(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Drawer_9647c0(__int64 a1);
void Drawer_Destructor(_QWORD* a1);

void Drawer_9647c0(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v1 = a1 + 73728;
  v3 = *(__int64**)(a1 + 73760);
  v4 = *(__int64**)(a1 + 73768);
  while (v3 != v4) {
    v5 = *v3++;
    EffectConst_964040(v5);
  }
  v6 = 0;
  v7 = 65616;
  do {
    v8 = a1 + v6;
    v9 = (_QWORD*)(a1 + v7);
    v6 += 1024;
    v7 += 128;
    *(v9 - 8) = v8 + 16;
    *(v9 - 7) = v8 + 80;
    *(v9 - 4) = v8 + 272;
    *(v9 - 3) = v8 + 336;
    *(v9 - 6) = v8 + 144;
    *(v9 - 5) = v8 + 208;
    *(v9 - 2) = v8 + 400;
    *(v9 - 1) = v8 + 464;
    *v9 = v8 + 528;
    v9[1] = v8 + 592;
    v9[2] = v8 + 656;
    v9[3] = v8 + 720;
    v9[4] = v8 + 784;
    v9[5] = v8 + 848;
    v9[6] = v8 + 912;
    v9[7] = v8 + 976;
  } while (v6 != 0x10000);
  v10 = *(_QWORD*)(v1 + 32);
  *(_QWORD*)(v1 + 16) = a1 + 65552;
  *(_DWORD*)(v1 + 24) = 0;
  *(_QWORD*)(v1 + 40) = v10;
  if (*(_QWORD*)(v1 + 80) != 0) {
    v11 = *(_QWORD**)(v1 + 72);
    if (v11 != nullptr) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)*v11;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v14, (__int64)v11);
        v11 = v13;
      } while (v13 != nullptr);
    }
    v15 = *(_QWORD*)(v1 + 64);
    *(_QWORD*)(v1 + 72) = 0;
    if (v15 != 0) {
      v16 = v15 & 7;
      if (v15 >= 8) {
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v1 + 56) + 8 * v17) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 56) + 8 * v17 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 56) + 8 * v17 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 56) + 8 * v17 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 56) + 8 * v17 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 56) + 8 * v17 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 56) + 8 * v17 + 48) = 0;
          v19 = *(_QWORD*)(v1 + 56) + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while (v18 != v17);
      }
      else {
        v17 = 0;
      }
      if (v16 != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(*(_QWORD*)(v1 + 56) + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
    }
    *(_QWORD*)(v1 + 80) = 0;
  }
  if (*(_QWORD*)(v1 + 120) != 0) {
    v21 = *(_QWORD**)(v1 + 112);
    if (v21 != nullptr) {
      v22 = fw_memory_g_heap_manager_ptr;
      do {
        v23 = (_QWORD*)*v21;
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v22 + v24, (__int64)v21);
        v21 = v23;
      } while (v23 != nullptr);
    }
    v25 = *(_QWORD*)(v1 + 104);
    *(_QWORD*)(v1 + 112) = 0;
    if (v25 != 0) {
      v26 = v25 & 7;
      if (v25 >= 8) {
        v28 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v27) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v27 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v27 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v27 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v27 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v27 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v1 + 96) + 8 * v27 + 48) = 0;
          v29 = *(_QWORD*)(v1 + 96) + 8 * v27;
          v27 += 8;
          *(_QWORD*)(v29 + 56) = 0;
        } while (v28 != v27);
      }
      else {
        v27 = 0;
      }
      if (v26 != 0) {
        v30 = 8 * v27;
        do {
          --v26;
          *(_QWORD*)(*(_QWORD*)(v1 + 96) + v30) = 0;
          v30 += 8;
        } while (v26 != 0);
      }
    }
    *(_QWORD*)(v1 + 120) = 0;
  }
  v31 = *(_QWORD*)(v1 + 136);
  *(_DWORD*)(v1 + 160) = 0;
  *(_QWORD*)(v1 + 144) = v31;
}

void Drawer_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 i;
  __int64 v19;

  v2 = a1 + 9216;
  *a1 = game_map_EffectConst_Drawer_vtable;
  Drawer_9647c0((__int64)a1);
  v3 = v2[17];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v2[18] = v3;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v5, v3);
  }
  v6 = (_QWORD*)v2[14];
  if (v6 != nullptr) {
    do {
      v7 = (_QWORD*)*v6;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v8, (__int64)v6);
      v6 = v7;
    } while (v7 != nullptr);
  }
  v9 = v2[12];
  v2[12] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v10, v9);
  }
  v11 = (_QWORD*)v2[9];
  if (v11 != nullptr) {
    do {
      v12 = (_QWORD*)*v11;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v13, (__int64)v11);
      v11 = v12;
    } while (v12 != nullptr);
  }
  v14 = v2[7];
  v2[7] = 0;
  if (v14 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v15, v14);
  }
  v16 = v2[4];
  if (v16 != 0) {
    v2[5] = v16;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v17, v16);
  }
  for (i = 8188; i != -4; i -= 8) {
    v19 = a1[i];
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt1(v19);
    }
  }
}

#pragma GCC visibility pop
