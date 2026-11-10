#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_62bec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_df9ca0(_QWORD);
__int64 GameRoutine_df9f60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_212c350;
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*GameData_1fe1bd0[14])();
extern __int64 (*game_hub_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb98[10];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
__int64 Object_Destructor_df88c0(__int64 a1);
__int64 Object_df8cc0(__int64 result);
__int64 EventManager_cbbb40(_QWORD);
__int64 GameRoutine_d80dc0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21f3c98;
extern __int64* GameData_212ebc0[5];
__int64 Object_df9f60(_QWORD* a1);
__int64 GameRoutine_d4eca0(_QWORD, _QWORD);
__int64 GameRoutine_dabc90(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fe1f70[])();
extern __int64 (*GameData_1fe1ff0[])();
extern __int64 (*GameData_1fe2070[])();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_hub_Object_EnableAccess_lambda0_Clone(_QWORD* a1);
__int64 game_hub_Object_EnableAccess_lambda0_CloneInto(__int64 a1, _QWORD* a2);
_QWORD* game_hub_Object_EnableHitPlayer_lambda0_Clone(__int64 a1);
__int64 game_hub_Object_EnableHitPlayer_lambda0_Invoke(__int64 a1, __int64 a2);
_QWORD* game_hub_Object_EnableHitAttack_lambda0_Clone(__int64 a1);
__int64 game_hub_Object_EnableHitAttack_lambda0_Invoke(__int64 a1, __int64* a2,
                                                       __int64* a3);

__int64 Object_Destructor_df88c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
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
  __int64 result;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;

  *(_QWORD*)a1 = game_hub_Object_vtable;
  if (*(_BYTE*)(a1 + 848) != 0) {
    *(_BYTE*)(a1 + 848) = 0;
  }
  GameRoutine_df9ca0(a1);
  GameRoutine_df9f60(a1);
  v2 = *(_QWORD*)(a1 + 752);
  v3 = *(_QWORD*)(a1 + 760);
  if (v2 != v3) {
    v4 = (char*)as_g_context_slots_ptr;
    v5 = as_g_script_manager_ptr;
    do {
      v6 = *(unsigned int*)(v2 + 8);
      if ((_DWORD)v6 != 0x2000) {
        v7 = &v4[16 * v6];
        v8 = *((_QWORD*)v7 + 1);
        if (v8 != 0 && *(_QWORD*)v7 == *(_QWORD*)v2 &&
            *(_DWORD*)(v8 + 52) == 1) {
          GameRoutine_62bec0(*v5, v2, 1);
        }
      }
      v2 += 24;
    } while (v2 != v3);
    v2 = *(_QWORD*)(a1 + 752);
  }
  v9 = *(_BYTE*)(a1 + 920);
  *(_QWORD*)(a1 + 760) = v2;
  if ((v9 & 1) != 0 && *(_QWORD*)(a1 + 936) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  v11 = *(_QWORD*)(a1 + 896);
  if (v11 != 0) {
    v12 = *(_QWORD*)(a1 + 904);
    if (v11 == v12) {
      goto LABEL_28;
    }
    v13 = *(_QWORD*)(a1 + 904);
    v14 = fw_memory_g_heap_manager_ptr;
    do {
      v15 = *(_BYTE*)(v13 - 24);
      v13 -= 24;
      if ((v15 & 1) != 0 && *(_QWORD*)(v12 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16);
      }
      v12 = v13;
    } while (v13 != v11);
    v17 = *(_QWORD*)(a1 + 896);
    *(_QWORD*)(a1 + 904) = v11;
    if (v17 != 0) {
    LABEL_28:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v18);
    }
  }
  if ((*(_BYTE*)(a1 + 872) & 1) != 0 && *(_QWORD*)(a1 + 888) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  v20 = *(_QWORD*)(a1 + 864);
  if (v20 != 0) {
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = *(_QWORD*)(a1 + 824);
  if (v21 != 0) {
    v22 = *(_QWORD*)(a1 + 832);
    if (v21 == v22) {
      goto LABEL_49;
    }
    v23 = *(_QWORD*)(a1 + 832);
    v24 = fw_memory_g_heap_manager_ptr;
    do {
      v25 = *(_BYTE*)(v23 - 24);
      v23 -= 24;
      if ((v25 & 1) != 0 && *(_QWORD*)(v22 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v26);
      }
      v22 = v23;
    } while (v23 != v21);
    v27 = *(_QWORD*)(a1 + 824);
    *(_QWORD*)(a1 + 832) = v21;
    if (v27 != 0) {
    LABEL_49:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v28);
    }
  }
  v29 = *(_QWORD*)(a1 + 808);
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
    if ((*(_BYTE*)(a1 + 776) & 1) == 0) {
      goto LABEL_60;
    }
  }
  else if ((*(_BYTE*)(a1 + 776) & 1) == 0) {
    goto LABEL_60;
  }
  if (*(_QWORD*)(a1 + 792) != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
  }

LABEL_60:
  v31 = *(_QWORD*)(a1 + 752);
  if (v31 != 0) {
    *(_QWORD*)(a1 + 760) = v31;
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
  }
  v33 = *(_QWORD*)(a1 + 744);
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak(v33);
  }
  v34 = *(_QWORD*)(a1 + 728);
  if (v34 != 0) {
    std___1___shared_weak_count___release_weak(v34);
  }
  v35 = *(_QWORD*)(a1 + 712);
  if (v35 != 0) {
    std___1___shared_weak_count___release_weak(v35);
  }
  result = Object_df8cc0(a1 + 16);
  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  v37 = *(unsigned int*)(a1 + 8);
  v38 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v38 != 0x4000) {
    v39 = (_QWORD*)(util_g_handle_slots_ptr[0][v37] + 16 * v38);
    if (*v39 != 0 && v39[1] == a1) {
      *v39 = 0;
      v39[1] = 0;
      *(_QWORD*)(a1 + 8) = 0x400000000001LL;
    }
  }
  --*(_DWORD*)(GameData_212c350 + 4 * v37);
  return result;
}

__int64 Object_df8cc0(__int64 result)
{
  __int64 v1;
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
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char v77;
  char v78;
  char v79;

  v1 = result;
  if ((*(_BYTE*)(result + 664) & 1) != 0 && *(_QWORD*)(result + 680) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if ((*(_BYTE*)(v1 + 640) & 1) != 0 && *(_QWORD*)(v1 + 656) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if (*(_BYTE*)(v1 + 632) == 1) {
    v4 = *(_QWORD*)(v1 + 608);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v1 + 616);
      if (v4 == v5) {
        goto LABEL_19;
      }
      do {
        v6 = *(unsigned int*)(v5 - 8);
        v7 = v5 - 32;
        if ((_DWORD)v6 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fe1bd0[v6])(&v77,
                                                                       v5 - 32);
        }
        *(_DWORD*)(v5 - 8) = -1;
        v5 -= 32;
      } while (v7 != v4);
      v8 = *(_QWORD*)(v1 + 608);
      *(_QWORD*)(v1 + 616) = v4;
      if (v8 != 0) {
      LABEL_19:
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
      }
    }
    if ((*(_BYTE*)(v1 + 584) & 1) != 0 && *(_QWORD*)(v1 + 600) != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
    }
  }
  if (*(_BYTE*)(v1 + 560) == 1) {
    v11 = *(_QWORD*)(v1 + 536);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v1 + 544);
      if (v11 == v12) {
        goto LABEL_35;
      }
      do {
        v13 = *(unsigned int*)(v12 - 8);
        v14 = v12 - 32;
        if ((_DWORD)v13 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fe1bd0[v13])(
              &v78, v12 - 32);
        }
        *(_DWORD*)(v12 - 8) = -1;
        v12 -= 32;
      } while (v14 != v11);
      v15 = *(_QWORD*)(v1 + 536);
      *(_QWORD*)(v1 + 544) = v11;
      if (v15 != 0) {
      LABEL_35:
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
      }
    }
    if ((*(_BYTE*)(v1 + 512) & 1) != 0 && *(_QWORD*)(v1 + 528) != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    }
  }
  if (*(_BYTE*)(v1 + 488) == 1) {
    v18 = *(_QWORD*)(v1 + 464);
    if (v18 != 0) {
      v19 = *(_QWORD*)(v1 + 472);
      if (v18 == v19) {
        goto LABEL_51;
      }
      do {
        v20 = *(unsigned int*)(v19 - 8);
        v21 = v19 - 32;
        if ((_DWORD)v20 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fe1bd0[v20])(
              &v79, v19 - 32);
        }
        *(_DWORD*)(v19 - 8) = -1;
        v19 -= 32;
      } while (v21 != v18);
      v22 = *(_QWORD*)(v1 + 464);
      *(_QWORD*)(v1 + 472) = v18;
      if (v22 != 0) {
      LABEL_51:
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
      }
    }
    if ((*(_BYTE*)(v1 + 440) & 1) != 0 && *(_QWORD*)(v1 + 456) != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
    }
  }
  v25 = *(_QWORD*)(v1 + 400);
  if (v25 != 0) {
    v26 = *(_QWORD*)(v1 + 408);
    if (v25 == v26) {
      goto LABEL_70;
    }
    v27 = *(_QWORD*)(v1 + 408);
    v28 = fw_memory_g_heap_manager_ptr;
    do {
      v29 = *(_BYTE*)(v27 - 24);
      v27 -= 24;
      if ((v29 & 1) != 0 && *(_QWORD*)(v26 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v28 + v30);
      }
      v26 = v27;
    } while (v27 != v25);
    v31 = *(_QWORD*)(v1 + 400);
    *(_QWORD*)(v1 + 408) = v25;
    if (v31 != 0) {
    LABEL_70:
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
    }
  }
  if ((*(_BYTE*)(v1 + 376) & 1) != 0 && *(_QWORD*)(v1 + 392) != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
  }
  v34 = *(_QWORD*)(v1 + 352);
  if (v34 != 0) {
    v35 = *(_QWORD*)(v1 + 360);
    if (v34 == v35) {
      goto LABEL_89;
    }
    v36 = *(_QWORD*)(v1 + 360);
    v37 = fw_memory_g_heap_manager_ptr;
    do {
      v38 = *(_BYTE*)(v36 - 24);
      v36 -= 24;
      if ((v38 & 1) != 0 && *(_QWORD*)(v35 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
          v39 = 128;
        }
        else {
          v39 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v37 + v39);
      }
      v35 = v36;
    } while (v36 != v34);
    v40 = *(_QWORD*)(v1 + 352);
    *(_QWORD*)(v1 + 360) = v34;
    if (v40 != 0) {
    LABEL_89:
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
    }
  }
  if ((*(_BYTE*)(v1 + 328) & 1) != 0 && *(_QWORD*)(v1 + 344) != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
  }
  v43 = *(_QWORD*)(v1 + 304);
  if (v43 != 0) {
    v44 = *(_QWORD*)(v1 + 312);
    if (v43 == v44) {
      goto LABEL_108;
    }
    v45 = *(_QWORD*)(v1 + 312);
    v46 = fw_memory_g_heap_manager_ptr;
    do {
      v47 = *(_BYTE*)(v45 - 24);
      v45 -= 24;
      if ((v47 & 1) != 0 && *(_QWORD*)(v44 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v46 + v48);
      }
      v44 = v45;
    } while (v45 != v43);
    v49 = *(_QWORD*)(v1 + 304);
    *(_QWORD*)(v1 + 312) = v43;
    if (v49 != 0) {
    LABEL_108:
      v50 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v50 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v50);
    }
  }
  if ((*(_BYTE*)(v1 + 280) & 1) != 0 && *(_QWORD*)(v1 + 296) != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
  }
  v52 = *(_QWORD*)(v1 + 256);
  if (v52 != 0) {
    v53 = *(_QWORD*)(v1 + 264);
    if (v52 == v53) {
      goto LABEL_127;
    }
    v54 = *(_QWORD*)(v1 + 264);
    v55 = fw_memory_g_heap_manager_ptr;
    do {
      v56 = *(_BYTE*)(v54 - 24);
      v54 -= 24;
      if ((v56 & 1) != 0 && *(_QWORD*)(v53 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
          v57 = 128;
        }
        else {
          v57 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v57);
      }
      v53 = v54;
    } while (v54 != v52);
    v58 = *(_QWORD*)(v1 + 256);
    *(_QWORD*)(v1 + 264) = v52;
    if (v58 != 0) {
    LABEL_127:
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
    }
  }
  if ((*(_BYTE*)(v1 + 232) & 1) != 0 && *(_QWORD*)(v1 + 248) != 0) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
  }
  v61 = *(_QWORD*)(v1 + 208);
  if (v61 != 0) {
    v62 = *(_QWORD*)(v1 + 216);
    if (v61 == v62) {
      goto LABEL_146;
    }
    v63 = *(_QWORD*)(v1 + 216);
    v64 = fw_memory_g_heap_manager_ptr;
    do {
      v65 = *(_BYTE*)(v63 - 24);
      v63 -= 24;
      if ((v65 & 1) != 0 && *(_QWORD*)(v62 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v64 + 200LL) != 0) {
          v66 = 128;
        }
        else {
          v66 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v64 + v66);
      }
      v62 = v63;
    } while (v63 != v61);
    v67 = *(_QWORD*)(v1 + 208);
    *(_QWORD*)(v1 + 216) = v61;
    if (v67 != 0) {
    LABEL_146:
      v68 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v68 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
    }
  }
  v69 = *(_QWORD*)(v1 + 176);
  if (v69 != 0) {
    *(_QWORD*)(v1 + 184) = v69;
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
  }
  if ((*(_BYTE*)(v1 + 136) & 1) != 0 && *(_QWORD*)(v1 + 152) != 0) {
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v71 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
  }
  if ((*(_BYTE*)(v1 + 112) & 1) != 0 && *(_QWORD*)(v1 + 128) != 0) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
  }
  if ((*(_BYTE*)(v1 + 88) & 1) != 0 && *(_QWORD*)(v1 + 104) != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73);
  }
  if ((*(_BYTE*)(v1 + 64) & 1) != 0 && *(_QWORD*)(v1 + 80) != 0) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0 && *(_QWORD*)(v1 + 40) != 0) {
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v75);
  }
  if ((*(_BYTE*)v1 & 1) != 0 && *(_QWORD*)(v1 + 16) != 0) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v76 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v76);
  }
  return result;
}

__int64 Object_df9f60(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  result = a1[89];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      if (a1[88] != 0) {
        result = EventManager_cbbb40(GameData_21f3c98);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        result = std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  v4 = a1[91];
  if (v4 != 0 && *(_QWORD*)(v4 + 8) != -1) {
    v5 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
    v6 = a1[90];
    v7 = v4;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_d80dc0(v5, &v6);
    if (v7 != 0) {
      std___1___shared_weak_count___release_weak(v7);
    }
    result = a1[91];
    a1[90] = 0;
    a1[91] = 0;
    if (result != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

_QWORD* game_hub_Object_EnableAccess_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *result = GameData_1fe1f70;
  v3 = result + 2;
  v4 = (_QWORD*)a1[6];
  if (v4 != nullptr) {
    if (v4 == a1 + 2) {
      result[6] = v3;
      v7 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
      result = v7;
    }
    else {
      v5 = result;
      v6 = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD, _QWORD*))(
          *v4 + 16LL))(v4, a1[6], v3);
      result = v5;
      v5[6] = v6;
    }
  }
  else {
    result[6] = 0;
  }
  result[8] = a1[8];
  return result;
}

__int64 game_hub_Object_EnableAccess_lambda0_CloneInto(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 result;

  *a2 = GameData_1fe1f70;
  v4 = a2 + 2;
  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    if (result == a1 + 16) {
      a2[6] = v4;
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 48) + 24LL))(
          *(_QWORD*)(a1 + 48));
    }
    else {
      result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 16LL))(
          result, v4);
      a2[6] = result;
    }
  }
  else {
    a2[6] = 0;
  }
  a2[8] = *(_QWORD*)(a1 + 64);
  return result;
}

_QWORD* game_hub_Object_EnableHitPlayer_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fe1ff0;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_hub_Object_EnableHitPlayer_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 48);
  if (v2 == 0) {
    GameRoutine_60a310((unsigned __int8)v2, a2);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
}

_QWORD* game_hub_Object_EnableHitAttack_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fe2070;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_hub_Object_EnableHitAttack_lambda0_Invoke(__int64 a1, __int64* a2,
                                                       __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];
  _QWORD v16[2];
  __int64 v17;
  __int64 v18;

  v4 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v17 = v4;
  v18 = v3;
  v6 = *a3;
  v5 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  v7 = *(_QWORD*)(a1 + 48);
  if (v7 == 0) {
    GameRoutine_60a310(0, a2);
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v17);
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak(v18);
  }
  v16[0] = 0;
  v15[0] = v4;
  v15[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v8 = GameRoutine_d4eca0(v15, v16);
    result = std___1___shared_weak_count___release_weak(v3);
    if ((v8 & 1) == 0) {
      goto LABEL_17;
    }
    v13 = v4;
    v14 = v3;
    v10 = *(_QWORD*)(v16[0] + 32LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v11 = v6;
    v12 = v5;
    if (v5 == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  result = GameRoutine_d4eca0(v15, v16);
  if ((result & 1) != 0) {
    v13 = v4;
    v14 = 0;
    v10 = *(_QWORD*)(v16[0] + 32LL);
    v11 = v6;
    v12 = v5;
    if (v5 != 0) {
    LABEL_9:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
    }
  LABEL_10:
    GameRoutine_dabc90(v10, &v13, &v11);
    if (v12 != 0) {
      std___1___shared_weak_count___release_weak(v12);
    }
    result = v14;
    if (v14 != 0) {
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
LABEL_17:
  if (v5 != 0) {
    result = std___1___shared_weak_count___release_weak(v5);
  }
  if (v3 != 0) {
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
