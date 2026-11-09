#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*g3d_Anim_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_g_frame_clock;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a310(void);
__int64 Anim_Destructor(__int64 a1);

__int64 Anim_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int16 v27;
  __int64 v28;
  __int64 v29;
  __int16 v30;
  __int64 v31;
  __int64 v32;
  __int16 v33;
  __int64 v34;
  __int64 v35;
  __int16 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 result;
  __int64 v48;

  *(_QWORD*)a1 = g3d_Anim_vtable;
  if (*(int*)(a1 + 96) >= 1) {
    v2 = *(_QWORD*)(a1 + 72);
    if (v2 != 0) {
      v3 = 0;
      v4 = 1;
      v5 = game_g_frame_clock_ptr[0];
    LABEL_4:
      v6 = v2 + v3;
      *(_QWORD*)(v6 + 96) = 0;
      v7 = *(_QWORD*)(v6 + 80);
      if (v7 != 0) {
        v8 = *v5;
        v48 = v7;
        v9 = *(_QWORD*)(v8 + 80);
        if (v9 == 0) {
          goto LABEL_65;
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v48);
      }
      while (v4 < *(int*)(a1 + 96)) {
        v2 = *(_QWORD*)(a1 + 72);
        ++v4;
        v3 += 104;
        if (v2 != 0) {
          goto LABEL_4;
        }
      }
    }
  }
  if (*(int*)(a1 + 92) >= 1) {
    v10 = *(_QWORD*)(a1 + 64);
    if (v10 != 0) {
      v11 = 0;
      v12 = 1;
      v13 = game_g_frame_clock_ptr[0];
    LABEL_13:
      v14 = v10 + v11;
      *(_QWORD*)(v14 + 96) = 0;
      v15 = *(_QWORD*)(v14 + 80);
      if (v15 != 0) {
        v16 = *v13;
        v48 = v15;
        v17 = *(_QWORD*)(v16 + 80);
        if (v17 == 0) {
          goto LABEL_65;
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v17 + 48LL))(v17, &v48);
      }
      while (v12 < *(int*)(a1 + 92)) {
        v10 = *(_QWORD*)(a1 + 64);
        ++v12;
        v11 += 104;
        if (v10 != 0) {
          goto LABEL_13;
        }
      }
    }
  }
  if (*(int*)(a1 + 88) >= 1) {
    v18 = *(_QWORD*)(a1 + 56);
    if (v18 != 0) {
      v19 = 0;
      v20 = 1;
      v21 = game_g_frame_clock_ptr[0];
    LABEL_22:
      v22 = v18 + v19;
      *(_QWORD*)(v22 + 96) = 0;
      v23 = *(_QWORD*)(v22 + 80);
      if (v23 != 0) {
        v24 = *v21;
        v48 = v23;
        v25 = *(_QWORD*)(v24 + 80);
        if (v25 == 0) {
          goto LABEL_65;
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v25 + 48LL))(v25, &v48);
      }
      while (v20 < *(int*)(a1 + 88)) {
        v18 = *(_QWORD*)(a1 + 56);
        ++v20;
        v19 += 104;
        if (v18 != 0) {
          goto LABEL_22;
        }
      }
    }
  }
  v26 = *(_QWORD*)(a1 + 48);
  if (v26 != 0) {
    v27 = *(_WORD*)(v26 + 96);
    *(_QWORD*)(v26 + 104) = 0;
    *(_WORD*)(v26 + 96) = v27 & 0xFFFE;
    if (*(_QWORD*)(*(_QWORD*)(a1 + 48) + 80LL) != 0) {
      v48 = *(_QWORD*)(*(_QWORD*)(a1 + 48) + 80LL);
      v28 = *(_QWORD*)(game_g_frame_clock + 80);
      if (v28 == 0) {
        goto LABEL_65;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v28 + 48LL))(v28, &v48);
    }
  }
  v29 = *(_QWORD*)(a1 + 40);
  if (v29 != 0) {
    v30 = *(_WORD*)(v29 + 96);
    *(_QWORD*)(v29 + 104) = 0;
    *(_WORD*)(v29 + 96) = v30 & 0xFFFE;
    if (*(_QWORD*)(*(_QWORD*)(a1 + 40) + 80LL) != 0) {
      v48 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 80LL);
      v31 = *(_QWORD*)(game_g_frame_clock + 80);
      if (v31 == 0) {
        goto LABEL_65;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v31 + 48LL))(v31, &v48);
    }
  }
  v32 = *(_QWORD*)(a1 + 32);
  if (v32 != 0) {
    v33 = *(_WORD*)(v32 + 96);
    *(_QWORD*)(v32 + 104) = 0;
    *(_WORD*)(v32 + 96) = v33 & 0xFFFE;
    if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 80LL) != 0) {
      v48 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 80LL);
      v34 = *(_QWORD*)(game_g_frame_clock + 80);
      if (v34 == 0) {
        goto LABEL_65;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v34 + 48LL))(v34, &v48);
    }
  }
  v35 = *(_QWORD*)(a1 + 24);
  if (v35 != 0) {
    v36 = *(_WORD*)(v35 + 96);
    *(_QWORD*)(v35 + 104) = 0;
    *(_WORD*)(v35 + 96) = v36 & 0xFFFE;
    if (*(_QWORD*)(*(_QWORD*)(a1 + 24) + 80LL) != 0) {
      v48 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 80LL);
      v37 = *(_QWORD*)(game_g_frame_clock + 80);
      if (v37 != 0) {
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v37 + 48LL))(v37, &v48);
        goto LABEL_44;
      }
    LABEL_65:
      GameRoutine_60a310();
    }
  }

LABEL_44:
  v38 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 72) = 0;
  if (v38 != 0) {
    v39 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v39, v38 - 8);
  }
  v40 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 64) = 0;
  if (v40 != 0) {
    v41 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v41, v40 - 8);
  }
  v42 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = 0;
  if (v42 != 0) {
    v43 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v43, v42 - 8);
  }
  v44 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  if (v44 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
  }
  v45 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
  }
  v46 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v46 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
  }
  result = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
