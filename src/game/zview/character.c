#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_Character_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64 Character_Destructor(__int64 a1);

__int64 Character_Destructor(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  char* v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
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
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 result;
  unsigned __int64 v61;
  int v62;
  char v63;

  v1 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)a1 = game_zview_Character_vtable;
  if (v1 != 0 && *(_BYTE*)(a1 + 240) != 0) {
    *(_BYTE*)(a1 + 240) = 0;
    v3 = *(_DWORD*)(v1 + 32) - 1;
    *(_DWORD*)(v1 + 32) = v3;
    if (v3 == 0) {
      v4 = *(_QWORD*)(v1 + 8);
      v63 = 0;
      v61 = 0xBF800000BF800000LL;
      v62 = 1065353216;
      v5 = GameRoutine_819f40(v4);
      if (v5 != *(_DWORD*)(v1 + 16)) {
        GameRoutine_81a540(v1, v5, &v61);
      }
    }
  }
  v6 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 64) = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = *(_QWORD*)(a1 + 600);
  if (v14 == 0) {
    goto LABEL_49;
  }
  v15 = *(char**)(v14 + 608);
  v16 = *(char**)(v14 + 616);
  if (v15 == v16) {
    goto LABEL_39;
  }
  v17 = v16 - v15 - 8;
  if ((~(_BYTE)v17 & 0x18) != 0) {
    v18 = ((unsigned __int8)((unsigned int)v17 >> 3) + 1) & 3;
    while (*(_QWORD*)v15 != a1) {
      v15 += 8;
      if (--v18 == 0) {
        goto LABEL_28;
      }
    }
    goto LABEL_39;
  }
LABEL_28:
  if (v17 >= 0x18) {
    v15 += 16;
    while (1) {
      if (*((_QWORD*)v15 - 2) == a1) {
        v15 -= 16;
        goto LABEL_39;
      }
      if (*((_QWORD*)v15 - 1) == a1) {
        v15 -= 8;
        goto LABEL_39;
      }
      if (*(_QWORD*)v15 == a1) {
        goto LABEL_39;
      }
      if (*((_QWORD*)v15 + 1) == a1) {
        break;
      }
      v19 = v15 + 16;
      v15 += 32;
      if (v19 == v16) {
        goto LABEL_48;
      }
    }
    v15 += 8;
  LABEL_39:
    if (v15 != v16) {
      v20 = v15 + 8;
      if (v15 + 8 != v16) {
        do {
          if (*(_QWORD*)v20 != a1) {
            *(_QWORD*)v15 = *(_QWORD*)v20;
            v15 += 8;
          }
          v20 += 8;
        } while (v20 != v16);
        v16 = *(char**)(v14 + 616);
      }
    }
    if (v15 != v16) {
      *(_QWORD*)(v14 + 616) = v15;
    }
  }
LABEL_48:
  *(_QWORD*)(a1 + 600) = 0;
LABEL_49:
  v21 = *(_QWORD*)(a1 + 608);
  v22 = *(_QWORD*)(a1 + 616) - v21;
  if ((int)(v22 >> 3) < 1) {
    goto LABEL_82;
  }
  v23 = (v22 >> 3) & 0x7FFFFFFF;
  do {
    v25 = *(_QWORD*)(*(_QWORD*)(a1 + 608) + 8 * (v23 - 1));
    v26 = *(_QWORD*)(v25 + 600);
    if (v26 != 0) {
      v27 = *(char**)(v26 + 608);
      v28 = *(char**)(v26 + 616);
      if (v27 != v28) {
        v29 = v28 - v27 - 8;
        if ((~(_BYTE)v29 & 0x18) == 0) {
        LABEL_59:
          if (v29 < 0x18) {
          LABEL_51:
            *(_QWORD*)(v25 + 600) = 0;
            continue;
          }
          v27 += 16;
          while (1) {
            if (*((_QWORD*)v27 - 2) == v25) {
              v27 -= 16;
              if (v27 != v28) {
                goto LABEL_71;
              }
              goto LABEL_77;
            }
            if (*((_QWORD*)v27 - 1) == v25) {
              v27 -= 8;
              goto LABEL_70;
            }
            if (*(_QWORD*)v27 == v25) {
              goto LABEL_70;
            }
            if (*((_QWORD*)v27 + 1) == v25) {
              break;
            }
            v31 = v27 + 16;
            v27 += 32;
            if (v31 == v28) {
              goto LABEL_51;
            }
          }
          v27 += 8;
          if (v27 != v28) {
            goto LABEL_71;
          }
        LABEL_77:
          if (v27 != v28) {
            *(_QWORD*)(v26 + 616) = v27;
          }
          goto LABEL_51;
        }
        v30 = ((unsigned __int8)((unsigned int)v29 >> 3) + 1) & 3;
        while (*(_QWORD*)v27 != v25) {
          v27 += 8;
          if (--v30 == 0) {
            goto LABEL_59;
          }
        }
      }
    LABEL_70:
      if (v27 != v28) {
      LABEL_71:
        v32 = v27 + 8;
        if (v27 + 8 != v28) {
          do {
            if (*(_QWORD*)v32 != v25) {
              *(_QWORD*)v27 = *(_QWORD*)v32;
              v27 += 8;
            }
            v32 += 8;
          } while (v32 != v28);
          v28 = *(char**)(v26 + 616);
        }
      }
      goto LABEL_77;
    }
  } while (v23-- > 1);
  v21 = *(_QWORD*)(a1 + 608);
LABEL_82:
  *(_QWORD*)(a1 + 616) = v21;
  v33 = *(_QWORD*)(a1 + 632);
  *(_QWORD*)(a1 + 632) = 0;
  if (v33 != 0) {
    v34 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v34, v33);
    v21 = *(_QWORD*)(a1 + 608);
  }
  if (v21 != 0) {
    v35 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 616) = v21;
    v36 = 128;
    if (*(_QWORD*)(v35 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(v35 + v36, v21);
  }
  v37 = *(_QWORD*)(a1 + 400);
  if (v37 == 0) {
    goto LABEL_103;
  }
  v38 = *(_QWORD*)(a1 + 408);
  if (v37 == v38) {
  LABEL_100:
    v43 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v43, v37);
    goto LABEL_103;
  }
  while (2) {
    v40 = *(_QWORD**)(v38 - 16);
    v41 = v38 - 48;
    if ((_QWORD*)(v38 - 48) == v40) {
      v39 = 32;
      goto LABEL_94;
    }
    if (v40 != nullptr) {
      v39 = 40;
    LABEL_94:
      (*(void (**)(__int64))(*v40 + v39))((__int64)v40);
    }
    v38 = v41;
    if (v41 != v37) {
      continue;
    }
    break;
  }
  v42 = *(_QWORD*)(a1 + 400);
  *(_QWORD*)(a1 + 408) = v37;
  v37 = v42;
  if (v42 != 0) {
    goto LABEL_100;
  }
LABEL_103:
  v44 = *(_QWORD*)(a1 + 344);
  if (v44 != 0) {
    v45 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 352) = v44;
    v46 = 128;
    if (*(_QWORD*)(v45 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(v45 + v46, v44);
  }
  v47 = *(_QWORD*)(a1 + 144);
  if (v47 != 0) {
    v48 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 152) = v47;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(v48 + v49, v47);
  }
  v50 = *(_QWORD*)(a1 + 136);
  if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak(v50);
  }
  v51 = *(_QWORD**)(a1 + 112);
  if (v51 == (_QWORD*)(a1 + 80)) {
    v52 = 32;
  LABEL_118:
    (*(void (**)(__int64))(*v51 + v52))((__int64)v51);
  }
  else if (v51 != nullptr) {
    v52 = 40;
    goto LABEL_118;
  }
  v53 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 64) = 0;
  if (v53 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53);
  }
  v54 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = 0;
  if (v54 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 8LL))(v54);
  }
  v55 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  if (v55 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 8LL))(v55);
  }
  v56 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v56 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 8LL))(v56);
  }
  v57 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v57 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
  }
  v58 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v58 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 8LL))(v58);
  }
  v59 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v59 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
  }
  result = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
