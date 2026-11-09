#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5ecdc0(_QWORD, _QWORD);
__int64 gxc_GpuMemory_Destroy_GpuMemory(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*g3d_InstanceModel_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 InstanceModel_Destructor(__int64 a1);

__int64 InstanceModel_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
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
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;

  *(_QWORD*)a1 = g3d_InstanceModel_vtable;
  v2 = *(_QWORD*)(a1 + 360);
  if (v2 != 0) {
    v3 = game_g_frame_clock_ptr[0];
    v4 = *(_QWORD*)(a1 + 352);
    v5 = *game_g_frame_clock_ptr[0];
    v6 = v4 + 112 * v2;
    do {
      GameRoutine_5ecdc0(v4, v5 + 568);
      v8 = *(_QWORD*)(*v3 + 80);
      v58 = *(_QWORD*)(v4 + 104);
      if (v8 == 0) {
        GameRoutine_60a310(0, v7);
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v8 + 48LL))(v8, &v58);
      v4 += 112;
    } while (v4 != v6);
  }
  result = gxc_GpuMemory_Destroy_GpuMemory(a1 + 480);
  v10 = *(_QWORD*)(a1 + 472);
  *(_QWORD*)(a1 + 472) = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v11);
  }
  v12 = *(_QWORD*)(a1 + 448);
  if (v12 != 0) {
    v13 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 456) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = *(_QWORD*)(a1 + 424);
  if (v15 != 0) {
    v16 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 432) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v16 + v17);
  }
  v18 = *(_QWORD*)(a1 + 392);
  if (v18 != 0) {
    v19 = *(_QWORD*)(a1 + 400);
    if (v18 == v19) {
      goto LABEL_33;
    }
    v20 = *(_QWORD*)(a1 + 400);
    do {
      v24 = *(_QWORD*)(v20 - 24);
      v20 -= 24;
      v23 = v24;
      if (v24 != 0) {
        v25 = *(_QWORD*)(v19 - 16);
        if (v23 == v25) {
          goto LABEL_21;
        }
        do {
          v26 = *(_QWORD*)(v25 - 8);
          if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
            result = std___1___shared_weak_count___release_weak(v26);
          }
          v25 -= 16;
        } while (v25 != v23);
        v21 = *(_QWORD*)(v19 - 24);
        *(_QWORD*)(v19 - 16) = v23;
        if (v21 != 0) {
        LABEL_21:
          v22 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v22 = 56;
          }
          result =
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v22);
        }
      }
      v19 = v20;
    } while (v18 != v20);
    v27 = *(_QWORD*)(a1 + 392);
    *(_QWORD*)(a1 + 400) = v18;
    if (v27 != 0) {
    LABEL_33:
      v28 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v28 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v28);
    }
  }
  v29 = *(_QWORD*)(a1 + 368);
  if (v29 != 0) {
    v30 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 376) = v29;
    v31 = 128;
    if (*(_QWORD*)(v30 + 200) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v30 + v31);
  }
  v32 = *(_QWORD**)(a1 + 312);
  if (v32 != nullptr) {
    v33 = *(_QWORD**)(a1 + 320);
    if (v32 == v33) {
      goto LABEL_47;
    }
    do {
      v34 = *(v33 - 4);
      v33 -= 4;
      result = v34;
      *v33 = 0;
      if (v34 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v33 != v32);
    v35 = *(_QWORD*)(a1 + 312);
    *(_QWORD*)(a1 + 320) = v32;
    if (v35 != 0) {
    LABEL_47:
      v36 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v36 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v36);
    }
  }
  v37 = *(_QWORD**)(a1 + 280);
  if (v37 != nullptr) {
    v38 = *(_QWORD**)(a1 + 288);
    if (v37 == v38) {
      goto LABEL_57;
    }
    do {
      v39 = *(v38 - 4);
      v38 -= 4;
      result = v39;
      *v38 = 0;
      if (v39 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v38 != v37);
    v40 = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(a1 + 288) = v37;
    if (v40 != 0) {
    LABEL_57:
      v41 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v41);
    }
  }
  v42 = *(_QWORD**)(a1 + 248);
  if (v42 != nullptr) {
    v43 = *(_QWORD**)(a1 + 256);
    if (v42 == v43) {
      goto LABEL_67;
    }
    do {
      v44 = *(v43 - 4);
      v43 -= 4;
      result = v44;
      *v43 = 0;
      if (v44 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v43 != v42);
    v45 = *(_QWORD*)(a1 + 248);
    *(_QWORD*)(a1 + 256) = v42;
    if (v45 != 0) {
    LABEL_67:
      v46 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v46 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v46);
    }
  }
  v47 = *(_QWORD**)(a1 + 216);
  if (v47 != nullptr) {
    v48 = *(_QWORD**)(a1 + 224);
    if (v47 == v48) {
      goto LABEL_77;
    }
    do {
      v49 = *(v48 - 4);
      v48 -= 4;
      result = v49;
      *v48 = 0;
      if (v49 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v48 != v47);
    v50 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v47;
    if (v50 != 0) {
    LABEL_77:
      v51 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v51 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v51);
    }
  }
  if (*(_QWORD*)(a1 + 160) != 0) {
    v52 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v52 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v52);
  }
  v53 = *(_QWORD*)(a1 + 152);
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    result = std___1___shared_weak_count___release_weak(v53);
  }
  v54 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v54 != 0) {
    v55 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 88) = v54;
    v56 = 128;
    if (*(_QWORD*)(v55 + 200) == 0) {
      v56 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v55 + v56);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v57 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v57 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v57);
  }
  return result;
}

#pragma GCC visibility pop
