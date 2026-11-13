#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10();
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void spine_19167a0(__int64, __int64, unsigned __int64);
void TextureLoader_Unknown2(__int64 a1, __int64 a2, __int64 a3);

void TextureLoader_Unknown2(__int64 a1, __int64 a2, __int64 a3)
{
  char* v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  int v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  char* v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  char v36;
  __int64 v37;
  char* v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  struct {
    _QWORD v50[2];
    char* v51;
  } v50_;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    char* v54;
  } v52_;
  struct {
    __int64 v55;
    unsigned __int64 v56;
    char* v57;
  } v55_;

  v3 = *(const char**)(a3 + 16);
  v6 = strlen(v3);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_103;
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v55_.v56 = v7;
    v55_.v57 = v8;
    v55_.v55 = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v55_.v55) = 2 * v6;
  v8 = (char*)&v55_.v55 + 1;
  if (v6 != 0) {
  LABEL_9:
    memmove((__int64)v8, (__int64)v3, v7);
  }
  v8[v7] = 0;
  v10 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
  if ((v55_.v55 & 1) != 0) {
    v11 = v55_.v57;
  }
  else {
    v11 = (char*)&v55_.v55 + 1;
  }
  if ((v55_.v55 & 1) != 0) {
    v10 = v55_.v56;
  }
  if (v10 != 0) {
    v12 = v10;
    while (v12 != 0) {
      v13 = (unsigned __int8)v11[--v12];
      if (v13 == 46) {
        goto LABEL_21;
      }
    }
  }
  v12 = -1;
LABEL_21:
  if (v10 >= v12) {
    v14 = v12;
  }
  else {
    v14 = v10;
  }
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_103:
    String_60a1d0();
  }
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v14 | 7) + 1;
    }
    v15 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v16, 16, 0);
    v52_.v53 = v14;
    v52_.v54 = v15;
    v52_.v52 = v16 | 1;
    goto LABEL_32;
  }
  LOBYTE(v52_.v52) = 2 * v14;
  v15 = (char*)&v52_.v52 + 1;
  if (v14 != 0) {
  LABEL_32:
    memmove((__int64)v15, (__int64)v11, v14);
  }
  v15[v14] = 0;
  GameRoutine_1a09ce0((__int64)&v52_.v52, ".bntx", 5u);
  v17 = *(const char**)(a2 + 56);
  if ((v52_.v52 & 1) != 0) {
    v18 = v52_.v54;
  }
  else {
    v18 = (char*)&v52_.v52 + 1;
  }
  if (v17 != v18) {
    if (v17 != nullptr && (*(_BYTE*)(a2 + 64) & 1) != 0) {
      v19 = GameRoutine_19e10();
      (*(void (**)(__int64, const char*, const char*, __int64))(*(_QWORD*)v19 +
                                                                40LL))(
          v19, v17, "/Program/Externals/Spine/include\\spine/SpineString.h",
          135);
    }
    if (v18 != nullptr) {
      v20 = strlen(v18);
      *(_QWORD*)(a2 + 48) = v20;
      v21 = GameRoutine_19e10();
      v22 = (*(__int64 (**)(__int64, unsigned __int64, const char*, __int64))(
          *(_QWORD*)v21 + 24LL))(
          v21, v20 + 1, "/Program/Externals/Spine/include\\spine/SpineString.h",
          142);
      v23 = *(_QWORD*)(a2 + 48);
      *(_QWORD*)(a2 + 56) = v22;
      memcpy(v22, (__int64)v18, v23 + 1);
    }
    else {
      *(_QWORD*)(a2 + 48) = 0;
      *(_QWORD*)(a2 + 56) = 0;
    }
  }
  v24 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
  if ((v52_.v52 & 1) != 0) {
    v25 = v52_.v54;
  }
  else {
    v25 = (char*)&v52_.v52 + 1;
  }
  if ((v52_.v52 & 1) != 0) {
    v24 = v52_.v53;
  }
  if (v24 != 0) {
    v26 = (char*)(v25 - 1);
    v27 = v24;
    while (v27 != 0) {
      v28 = (unsigned __int8)v26[v27--];
      if (v28 == 47) {
        if (v27 != -1) {
          goto LABEL_58;
        }
        break;
      }
    }
    v27 = v24;
    while (v27 != 0) {
      v29 = (unsigned __int8)v26[v27--];
      if (v29 == 92) {
        goto LABEL_58;
      }
    }
  }
  v27 = -1;
LABEL_58:
  v30 = v27 + 1;
  v31 = v24 - (v27 + 1);
  if (v24 < v27 + 1) {
    fs_60a230();
  }
  v32 = v24 - v27;
  if (v31 >= v32) {
    v33 = v32;
  }
  else {
    v33 = v31;
  }
  if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_103;
  }
  if (v33 >= 0x17) {
    if ((v33 | 7) == 0x17) {
      v35 = 26;
    }
    else {
      v35 = (v33 | 7) + 1;
    }
    v34 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v35, 16, 0);
    v50_.v50[1] = v33;
    v50_.v51 = v34;
    v50_.v50[0] = v35 | 1;
    goto LABEL_70;
  }
  LOBYTE(v50_.v50[0]) = 2 * v33;
  v34 = (char*)v50_.v50 + 1;
  if (v33 != 0) {
  LABEL_70:
    memmove((__int64)v34, (__int64)&v25[v30], v33);
  }
  v34[v33] = 0;
  v36 = v50_.v50[0];
  v37 = (__int64)v50_.v51;
  v38 = *(const char**)(a2 + 24);
  if ((v50_.v50[0] & 1) != 0) {
    v39 = v50_.v51;
  }
  else {
    v39 = (char*)v50_.v50 + 1;
  }
  if (v38 != v39) {
    if (v38 != nullptr && (*(_BYTE*)(a2 + 32) & 1) != 0) {
      v40 = GameRoutine_19e10();
      (*(void (**)(__int64, const char*, const char*, __int64))(*(_QWORD*)v40 +
                                                                40LL))(
          v40, v38, "/Program/Externals/Spine/include\\spine/SpineString.h",
          135);
    }
    if (v39 != nullptr) {
      v41 = strlen(v39);
      *(_QWORD*)(a2 + 16) = v41;
      v42 = GameRoutine_19e10();
      v43 = (*(__int64 (**)(__int64, unsigned __int64, const char*, __int64))(
          *(_QWORD*)v42 + 24LL))(
          v42, v41 + 1, "/Program/Externals/Spine/include\\spine/SpineString.h",
          142);
      v44 = *(_QWORD*)(a2 + 16);
      *(_QWORD*)(a2 + 24) = v43;
      memcpy(v43, (__int64)v39, v44 + 1);
    }
    else {
      *(_QWORD*)(a2 + 16) = 0;
      *(_QWORD*)(a2 + 24) = 0;
    }
  }
  if ((v52_.v52 & 1) != 0) {
    v45 = v52_.v54;
  }
  else {
    v45 = (char*)&v52_.v52 + 1;
  }
  if ((v52_.v52 & 1) != 0) {
    v46 = v52_.v53;
  }
  else {
    v46 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
  }
  spine_19167a0(*(_QWORD*)(a1 + 8), (__int64)v45, v46);
  if ((v36 & 1) != 0 && v37 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  v37);
  }
  if ((v52_.v52 & 1) != 0 && v52_.v54 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  (__int64)v52_.v54);
  }
  if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v49,
                                  (__int64)v55_.v57);
  }
}

#pragma GCC visibility pop
