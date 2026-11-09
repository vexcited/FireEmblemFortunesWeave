#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Drawer_Destructor(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_Trick_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Impl_Destructor_7cbf80(_QWORD* a1);

__int64 Impl_Destructor_7cbf80(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  bool v7;
  __int64 result;
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
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  _QWORD* v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;

  *a1 = game_map_Trick_Impl_vtable;
  v3 = (_QWORD*)a1[1];
  v2 = (_QWORD*)a1[2];
  if (v3 != v2) {
    v4 = v2 - 18;
    v5 = v2 - 18;
    do {
      v6 = *v5;
      v5 -= 18;
      (*(void (**)(_QWORD*))(v6 + 824))(v4);
      v7 = v4 == v3;
      v4 = v5;
    } while (!v7);
  }
  a1[2] = v3;
  result = Drawer_Destructor(a1 + 2368);
  v9 = a1[2365];
  v10 = fw_memory_g_heap_manager_ptr;
  if (v9 != 0) {
    v11 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[2366] = v9;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v11 + v12, v9);
  }
  v13 = a1[2362];
  if (v13 != 0) {
    v14 = *(_QWORD*)v10;
    a1[2363] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  v16 = a1[2359];
  if (v16 != 0) {
    v17 = *(_QWORD*)v10;
    a1[2360] = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v17 + v18, v16);
  }
  v19 = a1[2356];
  if (v19 != 0) {
    v20 = *(_QWORD*)v10;
    a1[2357] = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v20 + v21, v19);
  }
  v22 = a1[2353];
  if (v22 != 0) {
    v23 = *(_QWORD*)v10;
    a1[2354] = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v23 + v24, v22);
  }
  v25 = a1[2350];
  if (v25 != 0) {
    v26 = *(_QWORD*)v10;
    a1[2351] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v26 + v27, v25);
  }
  v28 = a1[2347];
  if (v28 != 0) {
    v29 = *(_QWORD*)v10;
    a1[2348] = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v29 + v30, v28);
  }
  v31 = a1[2344];
  if (v31 != 0) {
    v32 = *(_QWORD*)v10;
    a1[2345] = v31;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v32 + v33, v31);
  }
  v34 = a1[2341];
  if (v34 != 0) {
    v35 = *(_QWORD*)v10;
    a1[2342] = v34;
    v36 = 128;
    if (*(_QWORD*)(v35 + 200) == 0) {
      v36 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v35 + v36, v34);
  }
  v37 = a1[2338];
  if (v37 != 0) {
    v38 = *(_QWORD*)v10;
    a1[2339] = v37;
    v39 = 128;
    if (*(_QWORD*)(v38 + 200) == 0) {
      v39 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v38 + v39, v37);
  }
  v40 = a1[2335];
  if (v40 != 0) {
    v41 = *(_QWORD*)v10;
    a1[2336] = v40;
    v42 = 128;
    if (*(_QWORD*)(v41 + 200) == 0) {
      v42 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v41 + v42, v40);
  }
  v43 = a1[2332];
  if (v43 != 0) {
    v44 = *(_QWORD*)v10;
    a1[2333] = v43;
    v45 = 128;
    if (*(_QWORD*)(v44 + 200) == 0) {
      v45 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v44 + v45, v43);
  }
  v46 = a1[2329];
  if (v46 != 0) {
    v47 = *(_QWORD*)v10;
    a1[2330] = v46;
    v48 = 128;
    if (*(_QWORD*)(v47 + 200) == 0) {
      v48 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v47 + v48, v46);
  }
  v49 = a1[2326];
  if (v49 != 0) {
    v50 = *(_QWORD*)v10;
    a1[2327] = v49;
    v51 = 128;
    if (*(_QWORD*)(v50 + 200) == 0) {
      v51 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v50 + v51, v49);
  }
  v52 = a1[2323];
  if (v52 != 0) {
    v53 = *(_QWORD*)v10;
    a1[2324] = v52;
    v54 = 128;
    if (*(_QWORD*)(v53 + 200) == 0) {
      v54 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v53 + v54, v52);
  }
  v55 = a1[2320];
  if (v55 != 0) {
    v56 = *(_QWORD*)v10;
    a1[2321] = v55;
    v57 = 128;
    if (*(_QWORD*)(v56 + 200) == 0) {
      v57 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v56 + v57, v55);
  }
  v58 = a1[2317];
  if (v58 != 0) {
    v59 = *(_QWORD*)v10;
    a1[2318] = v58;
    v60 = 128;
    if (*(_QWORD*)(v59 + 200) == 0) {
      v60 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v59 + v60, v58);
  }
  v61 = a1[10];
  if (v61 != 0) {
    v62 = *(_QWORD*)v10;
    a1[11] = v61;
    v63 = 128;
    if (*(_QWORD*)(v62 + 200) == 0) {
      v63 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v62 + v63, v61);
  }
  v64 = a1[7];
  if (v64 != 0) {
    v65 = *(_QWORD*)v10;
    a1[8] = v64;
    v66 = 128;
    if (*(_QWORD*)(v65 + 200) == 0) {
      v66 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v65 + v66, v64);
  }
  v67 = a1[4];
  if (v67 != 0) {
    v68 = *(_QWORD*)v10;
    a1[5] = v67;
    v69 = 128;
    if (*(_QWORD*)(v68 + 200) == 0) {
      v69 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v68 + v69, v67);
  }
  v70 = (_QWORD*)a1[1];
  if (v70 != nullptr) {
    v71 = (_QWORD*)a1[2];
    if (v70 == v71) {
      goto LABEL_91;
    }
    v72 = v71 - 18;
    v73 = v71 - 18;
    do {
      v74 = *v73;
      v73 -= 18;
      result = (*(__int64 (**)(_QWORD*))(v74 + 824))(v72);
      v7 = v72 == v70;
      v72 = v73;
    } while (!v7);
    v75 = (_QWORD*)a1[1];
    a1[2] = v70;
    v70 = v75;
    if (v75 != nullptr) {
    LABEL_91:
      v76 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v76 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v76, v70);
    }
  }
  return result;
}

#pragma GCC visibility pop
