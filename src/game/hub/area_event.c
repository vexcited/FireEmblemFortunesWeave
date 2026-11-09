#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_62bec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cb2640(_QWORD);
__int64 GameRoutine_d6aa20(_QWORD);
__int64 GameRoutine_d80dc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _QWORD GameData_212c350;
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*GameData_1fdcd80[29])();
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*game_hub_AreaEvent_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eb98[10];
extern __int64* GameData_212ebc0[5];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
__int64 AreaEvent_Destructor(__int64 a1);

__int64 AreaEvent_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
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
  __int64 v47;
  __int64 v48;
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
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 result;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;

  *(_QWORD*)a1 = game_hub_AreaEvent_vtable;
  v2 = *(_QWORD*)(a1 + 1560);
  if (v2 != 0 && *(_QWORD*)(v2 + 8) != -1) {
    v3 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
    v71 = *(_QWORD*)(a1 + 1552);
    v72 = v2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_d80dc0(v3, &v71);
    if (v72 != 0) {
      std___1___shared_weak_count___release_weak(v72);
    }
    v4 = *(_QWORD*)(a1 + 1560);
    *(_QWORD*)(a1 + 1552) = 0;
    *(_QWORD*)(a1 + 1560) = 0;
    if (v4 != 0) {
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  v5 = *(_QWORD*)(a1 + 1400);
  v6 = *(_QWORD*)(a1 + 1408);
  if (v5 != v6) {
    v7 = (char*)as_g_context_slots_ptr;
    v8 = as_g_script_manager_ptr;
    do {
      v9 = *(unsigned int*)(v5 + 8);
      if ((_DWORD)v9 != 0x2000) {
        v10 = &v7[16 * v9];
        v11 = *((_QWORD*)v10 + 1);
        if (v11 != 0 && *(_QWORD*)v10 == *(_QWORD*)v5 &&
            *(_DWORD*)(v11 + 52) == 1) {
          GameRoutine_62bec0(*v8, v5, 1);
        }
      }
      v5 += 24;
    } while (v5 != v6);
    v5 = *(_QWORD*)(a1 + 1400);
  }
  v12 = *(unsigned __int8*)(a1 + 1736);
  *(_QWORD*)(a1 + 1408) = v5;
  if (v12 == 1 && (*(_BYTE*)(a1 + 1704) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 1720);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
    }
  }
  v15 = *(_QWORD*)(a1 + 1696);
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  if (*(_BYTE*)(a1 + 1656) == 1 && (*(_BYTE*)(a1 + 1632) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 1648);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  if ((*(_BYTE*)(a1 + 1568) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 1584);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  v20 = *(_QWORD*)(a1 + 1560);
  if (v20 != 0) {
    std___1___shared_weak_count___release_weak(v20);
  }
  if ((*(_BYTE*)(a1 + 1520) & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 1536);
    if (v21 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v21);
    }
  }
  if ((*(_BYTE*)(a1 + 1488) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 1504);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
    }
  }
  if ((*(_BYTE*)(a1 + 1456) & 1) != 0) {
    v25 = *(_QWORD*)(a1 + 1472);
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v25);
    }
  }
  v71 = a1 + 1424;
  GameRoutine_cb2640(&v71);
  v27 = *(_QWORD*)(a1 + 1400);
  if (v27 != 0) {
    *(_QWORD*)(a1 + 1408) = v27;
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28,
                                  v27);
  }
  v29 = *(_QWORD*)(a1 + 1376);
  if (v29 != 0) {
    v30 = *(_QWORD*)(a1 + 1384);
    if (v29 == v30) {
      goto LABEL_64;
    }
    do {
      v31 = *(unsigned int*)(v30 - 16);
      v32 = v30 - 64;
      if ((_DWORD)v31 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fdce28[v31])(&v71, v30 - 64);
      }
      *(_DWORD*)(v30 - 16) = -1;
      v30 -= 64;
    } while (v32 != v29);
    v33 = *(_QWORD*)(a1 + 1376);
    *(_QWORD*)(a1 + 1384) = v29;
    v29 = v33;
    if (v33 != 0) {
    LABEL_64:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v29);
    }
  }
  v35 = *(_QWORD*)(a1 + 1352);
  if (v35 != 0) {
    v36 = *(_QWORD*)(a1 + 1360);
    if (v35 == v36) {
      goto LABEL_74;
    }
    do {
      v37 = *(unsigned int*)(v36 - 16);
      v38 = v36 - 64;
      if ((_DWORD)v37 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fdce28[v37])(&v71, v36 - 64);
      }
      *(_DWORD*)(v36 - 16) = -1;
      v36 -= 64;
    } while (v38 != v35);
    v39 = *(_QWORD*)(a1 + 1352);
    *(_QWORD*)(a1 + 1360) = v35;
    v35 = v39;
    if (v39 != 0) {
    LABEL_74:
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v35);
    }
  }
  v41 = *(_QWORD*)(a1 + 1328);
  if (v41 != 0) {
    v42 = *(_QWORD*)(a1 + 1336);
    if (v41 == v42) {
      goto LABEL_84;
    }
    do {
      v43 = *(unsigned int*)(v42 - 16);
      v44 = v42 - 64;
      if ((_DWORD)v43 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fdce28[v43])(&v71, v42 - 64);
      }
      *(_DWORD*)(v42 - 16) = -1;
      v42 -= 64;
    } while (v44 != v41);
    v45 = *(_QWORD*)(a1 + 1328);
    *(_QWORD*)(a1 + 1336) = v41;
    v41 = v45;
    if (v45 != 0) {
    LABEL_84:
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v41);
    }
  }
  v47 = *(_QWORD*)(a1 + 1304);
  if (v47 != 0) {
    v48 = *(_QWORD*)(a1 + 1312);
    if (v47 == v48) {
      goto LABEL_94;
    }
    do {
      v49 = *(unsigned int*)(v48 - 16);
      v50 = v48 - 64;
      if ((_DWORD)v49 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fdce28[v49])(&v71, v48 - 64);
      }
      *(_DWORD*)(v48 - 16) = -1;
      v48 -= 64;
    } while (v50 != v47);
    v51 = *(_QWORD*)(a1 + 1304);
    *(_QWORD*)(a1 + 1312) = v47;
    v47 = v51;
    if (v51 != 0) {
    LABEL_94:
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v47);
    }
  }
  v53 = *(_QWORD*)(a1 + 1280);
  if (v53 != 0) {
    v54 = *(_QWORD*)(a1 + 1288);
    if (v53 == v54) {
      goto LABEL_104;
    }
    do {
      v55 = *(unsigned int*)(v54 - 16);
      v56 = v54 - 64;
      if ((_DWORD)v55 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fdce28[v55])(&v71, v54 - 64);
      }
      *(_DWORD*)(v54 - 16) = -1;
      v54 -= 64;
    } while (v56 != v53);
    v57 = *(_QWORD*)(a1 + 1280);
    *(_QWORD*)(a1 + 1288) = v53;
    v53 = v57;
    if (v57 != 0) {
    LABEL_104:
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v58 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v53);
    }
  }
  v59 = *(_QWORD*)(a1 + 1248);
  if (v59 != 0) {
    v60 = *(_QWORD*)(a1 + 1256);
    if (v59 == v60) {
      goto LABEL_114;
    }
    do {
      v61 = *(unsigned int*)(v60 - 8);
      v62 = v60 - 32;
      if ((_DWORD)v61 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fdcd80[v61])(&v71, v60 - 32);
      }
      *(_DWORD*)(v60 - 8) = -1;
      v60 -= 32;
    } while (v62 != v59);
    v63 = *(_QWORD*)(a1 + 1248);
    *(_QWORD*)(a1 + 1256) = v59;
    v59 = v63;
    if (v63 != 0) {
    LABEL_114:
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v59);
    }
  }
  if ((*(_BYTE*)(a1 + 1216) & 1) != 0) {
    v65 = *(_QWORD*)(a1 + 1232);
    if (v65 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v65);
    }
  }
  result = GameRoutine_d6aa20(a1 + 16);
  *(_QWORD*)a1 = GameData_212eb98[0] + 2;
  v68 = *(unsigned int*)(a1 + 8);
  v69 = *(unsigned int*)(a1 + 12);
  if ((_DWORD)v69 != 0x4000) {
    v70 = (_QWORD*)(util_g_handle_slots_ptr[0][v68] + 16 * v69);
    if (*v70 != 0 && v70[1] == a1) {
      *v70 = 0;
      v70[1] = 0;
      *(_QWORD*)(a1 + 8) = 0x400000000001LL;
    }
  }
  --*(_DWORD*)(GameData_212c350 + 4 * v68);
  return result;
}

#pragma GCC visibility pop
