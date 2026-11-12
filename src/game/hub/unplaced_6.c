#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
HubScript_d99940(__attribute__((swift_indirect_result)) void*, __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ac690d;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void
game_hub_d99f80(__attribute__((swift_indirect_result)) void* x8_, __int64 a1);
__attribute__((swiftcall)) void

game_hub_d99f80(__attribute__((swift_indirect_result)) void* x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)(unsigned __int64)x8_;
  unsigned __int64 v3;
  char* v4;
  __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  _BYTE* v32;
  unsigned __int8* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  bool v38;
  unsigned __int64 v39;
  unsigned __int8* v40;
  unsigned __int64 v41;
  __int64* v42;
  _BYTE* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int8* v49;
  unsigned __int8* v50;
  unsigned __int8* v51;
  __int64 v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  _BYTE* v59;
  _QWORD v60[2];
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  _BYTE* v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  unsigned __int8* v68;
  unsigned __int8* v69;

  HubScript_d99940((void*)(&v68), a1);
  if ((*(_BYTE*)(GameData_21f3d10 + 88) & 1) != 0) {
    fw_text_String_CopyTerminated(&v65, *(_QWORD*)(GameData_21f3d10 + 104),
                                  *(_QWORD*)(GameData_21f3d10 + 96));
  }
  else {
    v3 = *(_QWORD*)(GameData_21f3d10 + 96);
    v4 = *(char**)(GameData_21f3d10 + 104);
    v65 = *(_QWORD*)(GameData_21f3d10 + 88);
    v66 = v3;
    v67 = v4;
  }
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  LOWORD(v62) = 0;
  result = GameRoutine_7a8220(a2, &v62);
  if ((v62 & 1) != 0 && v64 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v64);
  }
  if ((v65 & 1) != 0) {
    v7 = v66;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v65 >> 1;
  }
  if ((v65 & 1) != 0) {
    v8 = v67;
  }
  else {
    v8 = (char*)&v65 + 1;
  }
  v9 = v7 + 1;
  if (v7 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_108:
    String_60a1d0(result);
  }
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v9 | 7) + 1;
    }
    v12 = (_BYTE*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                 16, 0);
    v63 = v7 + 1;
    v64 = v12;
    v62 = v11 | 1;
    *v12 = 95;
    v10 = v12 + 1;
  }
  else {
    v63 = 0;
    v64 = nullptr;
    v10 = (char*)&v62 + 2;
    v62 = (unsigned __int8)(2 * v9);
    BYTE1(v62) = 95;
    if (v7 == 0) {
      goto LABEL_24;
    }
  }
  memmove(v10, v8, v7);
LABEL_24:
  v10[v7] = 0;
  result = GameRoutine_7a8220(a2, &v62);
  if ((v62 & 1) != 0 && v64 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v64);
  }
  v14 = v68;
  v15 = v69;
  if (v68 != v69) {
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v17 = *v14;
      v18 = (v17 & 1) == 0;
      v19 = v17 >> 1;
      if (v18) {
        v20 = v19;
      }
      else {
        v20 = *((_QWORD*)v14 + 1);
      }
      if (v18) {
        v21 = v14 + 1;
      }
      else {
        v21 = *((unsigned __int8**)v14 + 2);
      }
      v22 = v20 + 1;
      if (v20 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_108;
      }
      if (v22 >= 0x17) {
        if ((v22 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v22 | 7) + 1;
        }
        v25 = (_BYTE*)fw_memory_HeapManager_Allocate(*v16, v24, 16, 0);
        v63 = v20 + 1;
        v64 = v25;
        *v25 = 95;
        v23 = v25 + 1;
        v62 = v24 | 1;
      }
      else {
        v23 = (char*)&v62 + 2;
        v63 = 0;
        v64 = nullptr;
        v62 = 24320;
        LOBYTE(v62) = 2 * v22;
        if (v20 == 0) {
          goto LABEL_47;
        }
      }
      memmove(v23, v21, v20);
    LABEL_47:
      v23[v20] = 0;
      result = GameRoutine_7a8220(a2, &v62);
      if ((v62 & 1) != 0 && v64 != nullptr) {
        v26 = 128;
        if (*(_QWORD*)(*v16 + 200LL) == 0) {
          v26 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v16 + v26, v64);
      }
      if ((v65 & 1) != 0) {
        v27 = v66;
      }
      else {
        v27 = (unsigned __int64)(unsigned __int8)v65 >> 1;
      }
      if ((v65 & 1) != 0) {
        v28 = v67;
      }
      else {
        v28 = (char*)&v65 + 1;
      }
      v29 = v27 + 1;
      if (v27 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_108;
      }
      if (v29 >= 0x17) {
        if ((v29 | 7) == 0x17) {
          v31 = 26;
        }
        else {
          v31 = (v29 | 7) + 1;
        }
        v32 = (_BYTE*)fw_memory_HeapManager_Allocate(*v16, v31, 16, 0);
        v58 = v27 + 1;
        v59 = v32;
        *v32 = 95;
        v30 = v32 + 1;
        v57 = v31 | 1;
      }
      else {
        v30 = (char*)&v57 + 2;
        v58 = 0;
        v59 = nullptr;
        v57 = 24320;
        LOBYTE(v57) = 2 * v29;
        if (v27 == 0) {
          goto LABEL_67;
        }
      }
      memmove(v30, v28, v27);
    LABEL_67:
      v30[v27] = 0;
      v33 = v14 + 1;
      v34 = (_QWORD*)GameRoutine_1a09ce0(&v57, &GameData_1ac690d, 1);
      v36 = v34[1];
      v35 = v34[2];
      v60[0] = *v34;
      v60[1] = v36;
      v61 = v35;
      v34[1] = 0;
      v34[2] = 0;
      *v34 = 0;
      v37 = *(v33 - 1);
      v38 = (v37 & 1) == 0;
      v39 = v37 >> 1;
      if (v38) {
        v40 = v33;
      }
      else {
        v40 = *(unsigned __int8**)(v33 + 15);
      }
      if (v38) {
        v41 = v39;
      }
      else {
        v41 = *(_QWORD*)(v33 + 7);
      }
      v42 = (__int64*)GameRoutine_1a09ce0(v60, v40, v41);
      v44 = v42[1];
      v43 = (_BYTE*)v42[2];
      v62 = *v42;
      v63 = v44;
      v64 = v43;
      v42[1] = 0;
      v42[2] = 0;
      *v42 = 0;
      result = GameRoutine_7a8220(a2, &v62);
      if ((v62 & 1) != 0 && v64 != nullptr) {
        v45 = 128;
        if (*(_QWORD*)(*v16 + 200LL) == 0) {
          v45 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v16 + v45, v64);
      }
      if ((v60[0] & 1) != 0 && v61 != 0) {
        v46 = 128;
        if (*(_QWORD*)(*v16 + 200LL) == 0) {
          v46 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v16 + v46, v61);
      }
      if ((v57 & 1) != 0 && v59 != nullptr) {
        v47 = 128;
        if (*(_QWORD*)(*v16 + 200LL) == 0) {
          v47 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v16 + v47, v59);
      }
      v14 = v33 + 23;
    } while (v14 != v15);
  }
  if ((v65 & 1) != 0 && v67 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v67);
  }
  v49 = v68;
  if (v68 != nullptr) {
    v50 = v69;
    if (v68 == v69) {
      goto LABEL_104;
    }
    v51 = v69;
    v52 = fw_memory_g_heap_manager_ptr;
    do {
      v53 = *(v51 - 24);
      v51 -= 24;
      if ((v53 & 1) != 0) {
        v54 = *((_QWORD*)v50 - 1);
        if (v54 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v52 + 200LL) != 0) {
            v55 = 128;
          }
          else {
            v55 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v52 + v55, v54);
        }
      }
      v50 = v51;
    } while (v51 != v49);
    v69 = v49;
    v49 = v68;
    if (v68 != nullptr) {
    LABEL_104:
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v56 = 56;
      }
      {
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v49);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
