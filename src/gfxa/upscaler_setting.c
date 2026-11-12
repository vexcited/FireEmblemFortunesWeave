#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*gfxa_UpscalerSetting_vtable[])();
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
extern __int64* GameData_212e558[25];
extern __int64* GameData_212e568[23];
_QWORD* UpscalerSetting_Destructor_alt1(_QWORD* result) __asm__(
    "UpscalerSetting_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void UpscalerSetting_Destructor(__int64 a1);

void UpscalerSetting_Destructor(__int64 a1)
{
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
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  *(_QWORD*)a1 = gfxa_UpscalerSetting_vtable;
  v2 = *(_QWORD*)(a1 + 416);
  *(_QWORD*)(a1 + 376) = GameData_212e568[0] + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 424) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v2);
  }
  v6 = GameData_212e530[0];
  *(_QWORD*)(a1 + 376) = GameData_212e530[0] + 16;
  if ((*(_BYTE*)(a1 + 384) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 400);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
    }
  }
  v9 = *(_QWORD*)(a1 + 344);
  *(_QWORD*)(a1 + 296) = GameData_212e528[0] + 16;
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 352) = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v10 + v11, v9);
  }
  *(_QWORD*)(a1 + 296) = v6 + 16;
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 320);
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v13, v12);
    }
  }
  v14 = GameData_212e558[0];
  v15 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 216) = GameData_212e558[0] + 2;
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 272) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
  }
  *(_QWORD*)(a1 + 216) = v6 + 16;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 240);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v19, v18);
    }
  }
  v20 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)(a1 + 136) = v14 + 2;
  if (v20 != 0) {
    v21 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 192) = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v21 + v22, v20);
  }
  *(_QWORD*)(a1 + 136) = v6 + 16;
  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 160);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v24, v23);
    }
  }
  v25 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 56) = v14 + 2;
  if (v25 != 0) {
    v26 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 112) = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v26 + v27, v25);
  }
  *(_QWORD*)(a1 + 56) = v6 + 16;
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v28 = *(_QWORD*)(a1 + 80);
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v29, v28);
    }
  }
  v30 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = GameData_212e548[0] + 2;
  if (v30 != 0) {
    v31 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 40) = v30;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v31 + v32, v30);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v33 = *(_QWORD*)(a1 + 24);
    if (v33 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v34, v33);
    }
  }
}

#pragma GCC visibility pop
