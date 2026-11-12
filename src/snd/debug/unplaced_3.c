#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_a46540(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_debug_a468e0(__int64 a1, unsigned __int8* a2);
void snd_debug_a46a60(__int64 a1, __int64 a2, const char* a3);
__int64 snd_debug_a46f30(unsigned __int8* a1);

void snd_debug_a468e0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int8* v3;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
    char* v19;
  } v17_;

  v2 = *a2;
  v3 = *((unsigned __int8**)a2 + 2);
  v5 = (v2 & 1) == 0;
  v6 = v2 >> 1;
  if (v5) {
    v3 = a2 + 1;
  }
  if (!v5) {
    v6 = *((_QWORD*)a2 + 1);
  }
  if (v6 != 0) {
    v7 = &v3[v6];
    v8 = 0;
    v9 = 0;
    do {
      if (v6 + v9 == 0) {
        goto LABEL_11;
      }
      v10 = &v7[v9--];
      ++v8;
    } while (*(v10 - 1) != 46);
    if (v6 + v9 + 1 <= 1) {
      goto LABEL_11;
    }
    if (v6 + v9 > v6) {
      fs_60a230();
    }
    v14 = -v9;
    if ((unsigned __int64)-v9 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v16 = 26;
      }
      else {
        v16 = (v14 | 7) + 1;
      }
      v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                  16, 0);
      v17_.v18 = -v9;
      v17_.v19 = v15;
      v17_.v17 = v16 | 1;
    }
    else {
      LOBYTE(v17_.v17) = -2 * v9;
      v15 = (char*)&v17_.v17 + 1;
      if (v9 == 0) {
      LABEL_27:
        v15[v8] = 0;
        if ((*(_BYTE*)a1 & 1) != 0) {
          goto LABEL_12;
        }
        goto LABEL_16;
      }
    }
    memmove((__int64)v15, (__int64)&v7[v9], -v9);
    goto LABEL_27;
  }
LABEL_11:
  LOWORD(v17_.v17) = 0;
  if ((*(_BYTE*)a1 & 1) != 0) {
  LABEL_12:
    v11 = *(_QWORD*)(a1 + 16);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
    }
  }
LABEL_16:
  v13 = v17_.v18;
  *(_QWORD*)a1 = v17_.v17;
  *(_QWORD*)(a1 + 8) = v13;
  *(_QWORD*)(a1 + 16) = v17_.v19;
}

void snd_debug_a46a60(__int64 a1, __int64 a2, const char* a3)
{
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    char* v37;
  } v35_;
  struct {
    __int64 v38;
    unsigned __int64 v39;
    char* v40;
  } v38_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
  } v41_;

  if (a3 != nullptr) {
    v5 = a3;
  }
  else {
    v5 = &GameData_1a9f09e;
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_106;
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
    v35_.v36 = v7;
    v35_.v37 = v8;
    v35_.v35 = v9 | 1;
  }
  else {
    LOBYTE(v35_.v35) = 2 * v6;
    v8 = (char*)&v35_.v35 + 1;
    if (v6 == 0) {
      goto LABEL_13;
    }
  }
  memcpy((__int64)v8, (__int64)v5, v7);
LABEL_13:
  v8[v7] = 0;
  v41_.v42 = 0;
  v41_.v43 = nullptr;
  v41_.v41 = 0;
  if ((v35_.v35 & 1) != 0) {
    v10 = v35_.v37;
  }
  else {
    v10 = (char*)&v35_.v35 + 1;
  }
  v11 = (unsigned __int64)(unsigned __int8)v35_.v35 >> 1;
  if ((v35_.v35 & 1) != 0) {
    v11 = v35_.v36;
  }
  if (v11 == 0) {
    goto LABEL_23;
  }
  v12 = &v10[v11];
  v13 = -1;
  v14 = 0;
  do {
    if (v11 + v14 == 0) {
      goto LABEL_23;
    }
    v15 = &v12[v14--];
    ++v13;
  } while (*(v15 - 1) != 47);
  if (v11 + v14 == -1) {
  LABEL_23:
    if ((v35_.v35 & 1) == 0) {
      v38_.v38 = v35_.v35;
      v38_.v39 = v35_.v36;
      v38_.v40 = v35_.v37;
      goto LABEL_28;
    }
    fw_text_String_CopyTerminated(&v38_.v38, (__int64)v35_.v37, v35_.v36);
    if ((v38_.v38 & 1) == 0) {
    LABEL_28:
      v41_.v41 = v38_.v38;
      v41_.v42 = v38_.v39;
      v41_.v43 = v38_.v40;
      if ((v38_.v38 & 1) != 0) {
        goto LABEL_29;
      }
      goto LABEL_33;
    }
  LABEL_25:
    GameRoutine_64df20(&v41_.v41, (__int64)v38_.v40, v38_.v39);
    if ((v38_.v38 & 1) != 0) {
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  if (v11 + v14 >= v11) {
    fs_60a230();
  }
  if (v14 <= 8) {
    goto LABEL_106;
  }
  v21 = ~v14;
  if (~v14 >= 0x17) {
    if ((v21 | 7) == 0x17) {
      v32 = 26;
    }
    else {
      v32 = (v21 | 7) + 1;
    }
    v22 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v32,
                                                16, 0);
    v38_.v39 = ~v14;
    v38_.v40 = v22;
    v38_.v38 = v32 | 1;
    goto LABEL_94;
  }
  LOBYTE(v38_.v38) = 2 * v21;
  v22 = (char*)&v38_.v38 + 1;
  if (v14 != -1) {
  LABEL_94:
    memmove((__int64)v22, (__int64)&v12[v14 + 1], ~v14);
  }
  v22[v13] = 0;
  if ((v41_.v41 & 1) == 0) {
    if ((v38_.v38 & 1) == 0) {
      goto LABEL_28;
    }
    goto LABEL_25;
  }
  if ((v38_.v38 & 1) != 0) {
    v33 = v38_.v40;
  }
  else {
    v33 = (char*)&v38_.v38 + 1;
  }
  if ((v38_.v38 & 1) != 0) {
    v34 = v38_.v39;
  }
  else {
    v34 = (unsigned __int64)(unsigned __int8)v38_.v38 >> 1;
  }
  SpineModel_64dde0(&v41_.v41, (__int64)v33, v34);
  if ((v38_.v38 & 1) != 0) {
  LABEL_29:
    if (v38_.v40 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v38_.v40);
    }
  }
LABEL_33:
  if ((v41_.v41 & 1) != 0) {
    v17 = v41_.v43;
  }
  else {
    v17 = (char*)&v41_.v41 + 1;
  }
  if ((v41_.v41 & 1) != 0) {
    v18 = v41_.v42;
  }
  else {
    v18 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  if (v18 != 0) {
    v19 = v18;
    do {
      if (v19 == 0) {
        goto LABEL_44;
      }
      v20 = &v17[v19--];
    } while (*(v20 - 1) != 46);
    if (v19 + 1 > 1) {
      if (v18 >= v19) {
        v23 = v19;
      }
      else {
        v23 = v18;
      }
      if (v23 < 0xFFFFFFFFFFFFFFF7LL) {
        if (v23 >= 0x17) {
          if ((v23 | 7) == 0x17) {
            v25 = 26;
          }
          else {
            v25 = (v23 | 7) + 1;
          }
          v24 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v25, 16, 0);
          v38_.v39 = v23;
          v38_.v40 = v24;
          v38_.v38 = v25 | 1;
        }
        else {
          LOBYTE(v38_.v38) = 2 * v23;
          v24 = (char*)&v38_.v38 + 1;
          if (v19 == 0) {
          LABEL_66:
            v24[v23] = 0;
            if ((*(_BYTE*)a1 & 1) == 0) {
              goto LABEL_71;
            }
            goto LABEL_67;
          }
        }
        memmove((__int64)v24, (__int64)v17, v23);
        goto LABEL_66;
      }
    LABEL_106:
      String_60a1d0();
    }
  }
LABEL_44:
  if ((v41_.v41 & 1) != 0) {
    fw_text_String_CopyTerminated(&v38_.v38, (__int64)v41_.v43, v41_.v42);
    if ((*(_BYTE*)a1 & 1) == 0) {
      goto LABEL_71;
    }
  }
  else {
    v38_.v38 = v41_.v41;
    v38_.v39 = v41_.v42;
    v38_.v40 = v41_.v43;
    if ((*(_BYTE*)a1 & 1) == 0) {
      goto LABEL_71;
    }
  }
LABEL_67:
  v26 = *(_QWORD*)(a1 + 16);
  if (v26 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  v26);
  }
LABEL_71:
  v28 = v38_.v39;
  *(_QWORD*)a1 = v38_.v38;
  *(_QWORD*)(a1 + 8) = v28;
  *(_QWORD*)(a1 + 16) = v38_.v40;
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  (__int64)v41_.v43);
  }
  if ((v35_.v35 & 1) != 0) {
    fw_text_String_CopyTerminated(&v41_.v41, (__int64)v35_.v37, v35_.v36);
  }
  else {
    v41_.v41 = v35_.v35;
    v41_.v42 = v35_.v36;
    v41_.v43 = v35_.v37;
  }
  snd_debug_a468e0(a2, (unsigned __int8*)&v41_.v41);
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  (__int64)v41_.v43);
  }
  if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  (__int64)v35_.v37);
  }
}

__int64 snd_debug_a46f30(unsigned __int8* a1)
{
  char v2;
  __int64 v3;
  unsigned __int64 v4;
  char* v5;
  unsigned __int64 v6;
  int v8;
  unsigned int v10;
  unsigned __int64 v11;
  int v12;
  int v14;
  __int64 v15;
  int v17;
  int v18;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;

  v19_.v20 = 0;
  v19_.v21 = nullptr;
  v19_.v19 = 0;
  snd_debug_a468e0((__int64)&v19_.v19, a1);
  v2 = v19_.v19;
  v3 = (__int64)v19_.v21;
  if ((v19_.v19 & 1) != 0) {
    v4 = v19_.v20;
  }
  else {
    v4 = (unsigned __int64)(unsigned __int8)v19_.v19 >> 1;
  }
  if ((v19_.v19 & 1) != 0) {
    v5 = v19_.v21;
  }
  else {
    v5 = (char*)&v19_.v19 + 1;
  }
  if (v4 >= 6) {
    v6 = 6;
  }
  else {
    v6 = v4;
  }
  if (memcmp((__int64)v5, (__int64)".bfcpx", v6) == 0 && v4 == 6) {
    v10 = 11;
  }
  else {
    v8 = memcmp((__int64)v5, (__int64)".bffnt", v6);
    if (v4 == 6 && v8 == 0) {
      v10 = 0;
    }
    else {
      v10 = 4;
      if (v4 >= 4) {
        v11 = 4;
      }
      else {
        v11 = v4;
      }
      v12 = memcmp((__int64)v5, (__int64)".otf", v11);
      if (v4 != 4 || v12 != 0) {
        v14 = memcmp((__int64)v5, (__int64)".ttf", v11);
        if (v4 != 4 || v14 != 0) {
          v17 = memcmp((__int64)v5, (__int64)".bfotf", v6);
          if (v4 != 6 || v17 != 0) {
            v18 = memcmp((__int64)v5, (__int64)".bfttf", v6);
            v10 = 12;
            if (v4 == 6 && v18 == 0) {
              v10 = GameRoutine_a46540((__int64)a1) + 5;
            }
          }
          else {
            v10 = 2;
          }
        }
        else {
          v10 = 3;
        }
      }
    }
  }
  if ((v2 & 1) != 0 && v3 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v3);
  }
  return v10;
}

#pragma GCC visibility pop
