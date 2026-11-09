#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_c53460(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_21675f0;
extern __int64 (*eft_Emitter_vtable)();
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Emitter_Destructor(__int64 a1);
__int64 GameHr_bd7520(__int64 result);

void __attribute__((noreturn)) Emitter_DeletingDestructor() { __udf(0x8002u); }

void __attribute__((noreturn)) EffectEmitter_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 Emitter_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
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
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 result;

  *(_QWORD*)a1 = &eft_Emitter_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    v3 = (__int64*)(v2 + 40);
    *(_QWORD*)(v2 + 40 + 8LL * *(__int16*)(a1 + 184)) = 0;
    v4 = *(unsigned int*)(v2 + 36);
    if ((_DWORD)v4 != 0) {
      while (1) {
        v5 = *v3++;
        if (v5 != 0) {
          break;
        }
        if (--v4 == 0) {
          goto LABEL_5;
        }
      }
    }
    else {
    LABEL_5:
      *(_BYTE*)(v2 + 32) = 1;
    }
  }
  v6 = *(_QWORD*)(a1 + 168);
  if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
    v7 = *(_QWORD*)(a1 + 384);
    v8 = *(_QWORD*)(a1 + 392);
    if (v7 != v8) {
      v9 = v7 + 40;
      while (1) {
        v11 = *(_QWORD*)(v9 - 24);
        if (v11 == 0) {
          break;
        }
        v12 = std___1___shared_weak_count_lock(v11);
        if (v12 == 0) {
          break;
        }
        v13 = *(_QWORD*)(v9 - 32);
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v13 == 0) {
            break;
          }
        }
        else {
          v14 = v12;
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v14);
          if (v13 == 0) {
            break;
          }
        }
        v15 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 168));
        GameRoutine_c53460(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 288LL) + 872LL),
            v9 - 40);
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          break;
        }
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
        v16 = *(_QWORD*)(v9 + 16);
        if (v16 == 0) {
          goto LABEL_10;
        }
      LABEL_19:
        v17 = std___1___shared_weak_count_lock(v16);
        if (v17 != 0) {
          v18 = *(_QWORD*)(v9 + 8);
          if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v18 != 0) {
              goto LABEL_24;
            }
          }
          else {
            v19 = v17;
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            std___1___shared_weak_count___release_weak(v19);
            if (v18 != 0) {
            LABEL_24:
              v20 = std___1___shared_weak_count_lock(*(_QWORD*)(a1 + 168));
              GameRoutine_c53460(
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 160) + 288LL) + 872LL),
                  v9);
              if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                std___1___shared_weak_count___release_weak(v20);
              }
            }
          }
        }
      LABEL_10:
        v10 = v9 + 48;
        v9 += 88;
        if (v10 == v8) {
          goto LABEL_28;
        }
      }
      v16 = *(_QWORD*)(v9 + 16);
      if (v16 == 0) {
        goto LABEL_10;
      }
      goto LABEL_19;
    }
  }

LABEL_28:
  v21 = *(_DWORD*)(a1 + 340);
  if ((v21 & 0x80000000) == 0) {
    v22 = *(_QWORD*)(eft_g_effectSystem + 104);
    v23 = *(_QWORD*)(v22 + 32);
    if (v23 != v22 + 24) {
      while (*(_DWORD*)(v23 + 16) != v21) {
        v23 = *(_QWORD*)(v23 + 8);
        if (v23 == v22 + 24) {
          goto LABEL_32;
        }
      }
    LABEL_37:
      nn_os_LockMutex(&GameData_21675f0);
      --*(_DWORD*)(v23 - 4);
      nn_os_UnlockMutex(&GameData_21675f0);
      v24 = *(_QWORD*)(a1 + 384);
      if (v24 == 0) {
        goto LABEL_53;
      }
      goto LABEL_38;
    }
  LABEL_32:
    v23 = *(_QWORD*)(v22 + 16);
    if (v23 != v22 + 8) {
      while (*(_DWORD*)(v23 + 16) != v21) {
        v23 = *(_QWORD*)(v23 + 8);
        if (v23 == v22 + 8) {
          goto LABEL_35;
        }
      }
      goto LABEL_37;
    }
  }

LABEL_35:
  v24 = *(_QWORD*)(a1 + 384);
  if (v24 == 0) {
    goto LABEL_53;
  }

LABEL_38:
  v25 = *(_QWORD*)(a1 + 392);
  if (v24 == v25) {
    goto LABEL_50;
  }
  do {
    v26 = *(_QWORD*)(v25 - 32);
    *(_QWORD*)(v25 - 48) = gfx_light_Actor_vtable;
    *(_QWORD*)(v25 - 40) = 0;
    *(_QWORD*)(v25 - 32) = 0;
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak(v26);
      v27 = *(_QWORD*)(v25 - 32);
      *(_QWORD*)(v25 - 24) = 0;
      if (v27 != 0) {
        std___1___shared_weak_count___release_weak(v27);
      }
    }
    else {
      *(_QWORD*)(v25 - 24) = 0;
    }
    v28 = *(_QWORD*)(v25 - 72);
    *(_QWORD*)(v25 - 72) = 0;
    *(_QWORD*)(v25 - 88) = gfx_light_Actor_vtable;
    *(_QWORD*)(v25 - 80) = 0;
    if (v28 != 0) {
      std___1___shared_weak_count___release_weak(v28);
      v29 = *(_QWORD*)(v25 - 72);
      *(_QWORD*)(v25 - 64) = 0;
      if (v29 != 0) {
        std___1___shared_weak_count___release_weak(v29);
      }
    }
    else {
      *(_QWORD*)(v25 - 64) = 0;
    }
    v25 -= 88;
  } while (v25 != v24);
  v30 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 392) = v24;
  if (v30 != 0) {
  LABEL_50:
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
  }

LABEL_53:
  v32 = *(_QWORD*)(a1 + 352);
  if (v32 != 0) {
    v33 = *(_QWORD*)(a1 + 360);
    if (v32 == v33) {
      goto LABEL_67;
    }
    v34 = fw_memory_g_heap_manager_ptr;
    do {
      v36 = *(__int64**)(v33 - 8);
      *(_QWORD*)(v33 - 8) = 0;
      if (v36 != nullptr) {
        v37 = v36[1];
        v36[1] = 0;
        if (v37 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
        }
        v38 = *v36;
        *v36 = 0;
        if (v38 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
        }
        if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) != 0) {
          v35 = 128;
        }
        else {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v35);
      }
      v33 -= 16;
    } while (v33 != v32);
    v39 = *(_QWORD*)(a1 + 352);
    *(_QWORD*)(a1 + 360) = v32;
    if (v39 != 0) {
    LABEL_67:
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v40);
    }
  }
  v41 = *(_QWORD*)(a1 + 232);
  if (v41 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = *(_QWORD*)(a1 + 168);
    if (result == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
  std___1___shared_weak_count___release_weak(v41);
  result = *(_QWORD*)(a1 + 168);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 GameHr_bd7520(__int64 result)
{
  *(_DWORD*)(result + 176) = 0;
  *(_BYTE*)(result + 136) = 0;
  return result;
}

#pragma GCC visibility pop
