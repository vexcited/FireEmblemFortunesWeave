#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2020(_QWORD, _QWORD);
__int64 GameRoutine_21c0(_QWORD, _QWORD);
__int64 GameRoutine_2360(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c05690(_QWORD, _QWORD);
__int64 GameRoutine_c05d90(void);
__int64 GameRoutine_c05fb0(_QWORD, _QWORD);
__int64 GameRoutine_c3b780(void);
__int64 GameRoutine_c3d0b0(void);
__int64 GameRoutine_c3d2d0(_QWORD, _QWORD);
__int64 GameRoutine_c3da20(void);
__int64 GameRoutine_c3dd90(void);
__int64 GameRoutine_c3dfb0(void);
__int64 GameRoutine_c3e190(_QWORD, _QWORD);
__int64 Value_2500(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameStringReads_c05cc0(_QWORD* a1, __int64 a2);
float GameStringReads_c3cd70(__int64 a1, char* a2);
__int64 GameStringReads_c3cf10(_QWORD* a1, __int64 a2);
__int64 GameStringReads_c3d730(bool* a1, _QWORD* a2);
__int64 GameStringReads_c3d930(__int64* a1, __int64 a2);
__int64 GameStringReads_c3dc40(__int64* a1, __int64 a2);
__int64 GameStringReads_c3e3b0(_DWORD* a1, _QWORD* a2);
__int64 GameStringReads_c3ec70(_DWORD* a1, _QWORD* a2);
__int64 GameStringReads_c3f080(_DWORD* a1, _QWORD* a2);

__int64 GameStringReads_c05cc0(_QWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;

  result = GameRoutine_c05d90();
  if ((result & 1) != 0) {
    v5 = *a1;
    v6 = *(_QWORD*)(a2 + 24);
    v14 = 0;
    GameRoutine_2020(v5, &v14);
    v7 = v14;
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v14, 16, 0);
    memset(v9, 0, v7, v10, v11, v12);
    Value_2500(*a1, v9, v7);
    GameRoutine_60a060(v6, v9, v14);
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v13 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13);
  }
  return result;
}

float GameStringReads_c3cd70(__int64 a1, char* a2)
{
  __int128 v4;
  char v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int128 v11;
  float result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  unsigned int v21;
  _QWORD v22[2];
  __int64 v23;
  __int64* v24;

  v4 = *(_OWORD*)*((_QWORD*)a2 + 3);
  v21 = *(_QWORD*)(*((_QWORD*)a2 + 3) + 8LL);
  v5 = *a2;
  v20 = v4;
  if ((v5 & 1) != 0) {
    fw_text_String_CopyTerminated(&v13, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    if ((v13 & 1) != 0) {
      goto LABEL_3;
    }
  }
  else {
    v6 = *((_QWORD*)a2 + 1);
    v13 = *(_QWORD*)a2;
    v14 = v6;
    v15 = *((_QWORD*)a2 + 2);
    if ((v13 & 1) != 0) {
    LABEL_3:
      fw_text_String_CopyTerminated(&v16, v15, v14);
      goto LABEL_6;
    }
  }
  v16 = v13;
  v17 = v14;
  v18 = v15;

LABEL_6:
  v19 = &v20;
  if ((v16 & 1) != 0) {
    fw_text_String_CopyTerminated(v22, v18, v17);
    v7 = v19;
  }
  else {
    v7 = &v20;
    v22[0] = v16;
    v22[1] = v17;
    v23 = v18;
  }
  v24 = v7;
  GameStringReads_c3cf10(a1, v22);
  if ((v22[0] & 1) != 0 && v23 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  if ((v16 & 1) != 0 && v18 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  if ((v13 & 1) != 0 && v15 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  *(_QWORD*)&v11 = v20;
  *((_QWORD*)&v11 + 1) = v21;
  *(_OWORD*)*((_QWORD*)a2 + 3) = v11;
  LODWORD(result) = v11;
  return result;
}

__int64 GameStringReads_c3cf10(_QWORD* a1, __int64 a2)
{
  __int64 result;
  _DWORD* v5;
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  _WORD v15[8];
  __int64 v16;
  _DWORD* v17;
  int v18;

  result = GameRoutine_c3d0b0();
  if ((result & 1) != 0) {
    v5 = *(_DWORD**)(a2 + 24);
    v15[0] = 0;
    v17 = v5;
    if ((GameRoutine_c05fb0(a1, v15) & 1) != 0) {
      v6 = v17;
      if ((GameRoutine_21c0(*a1, &v18) & 1) != 0) {
        *v6 = v18;
      }
    }
    if ((v15[0] & 1) != 0 && v16 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
    }
    v8 = *(_QWORD*)(a2 + 24);
    v15[0] = 0;
    v17 = (_DWORD*)(v8 + 4);
    if ((GameRoutine_c05fb0(a1, v15) & 1) != 0) {
      v9 = v17;
      if ((GameRoutine_21c0(*a1, &v18) & 1) != 0) {
        *v9 = v18;
      }
    }
    if ((v15[0] & 1) != 0 && v16 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v10);
    }
    v11 = *(_QWORD*)(a2 + 24);
    v15[0] = 0;
    v17 = (_DWORD*)(v11 + 8);
    result = GameRoutine_c05fb0(a1, v15);
    if ((result & 1) != 0) {
      v12 = *a1;
      v13 = v17;
      result = GameRoutine_21c0(v12, &v18);
      if ((result & 1) != 0) {
        *v13 = v18;
      }
    }
    if ((v15[0] & 1) != 0 && v16 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
  }
  return result;
}

__int64 GameStringReads_c3d730(bool* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _WORD v11[8];
  __int64 v12;
  bool* v13;
  int v14;

  v11[0] = 0;
  v13 = a1;
  if ((GameRoutine_c05690(a2, v11) & 1) != 0) {
    GameRoutine_21c0(*a2, v13);
  }
  if ((v11[0] & 1) != 0 && v12 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v11[0] = 0;
  v13 = a1 + 4;
  if ((GameRoutine_c05690(a2, v11) & 1) != 0) {
    GameRoutine_21c0(*a2, v13);
  }
  if ((v11[0] & 1) != 0 && v12 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v11[0] = 0;
  v13 = a1 + 8;
  if ((GameRoutine_c3d2d0(a2, v11) & 1) != 0) {
    v6 = *a2;
    v14 = 0;
    GameRoutine_21c0(v6, &v14);
    *v13 = v14 != 0;
  }
  if ((v11[0] & 1) != 0 && v12 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v11[0] = 0;
  v13 = a1 + 12;
  GameStringReads_c3d930(a2, v11);
  if ((v11[0] & 1) != 0 && v12 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  v11[0] = 0;
  v13 = a1 + 24;
  result = GameStringReads_c3dc40(a2, v11);
  if ((v11[0] & 1) != 0 && v12 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  return result;
}

__int64 GameStringReads_c3d930(__int64* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _WORD v12[8];
  __int64 v13;
  int* v14;
  int v15;
  int v16;
  int v17;

  result = GameRoutine_c3da20();
  if ((result & 1) != 0) {
    v5 = *a1;
    v16 = 0;
    result = GameRoutine_21c0(v5, &v16);
    if (v16 != 0) {
      v12[0] = 0;
      v14 = &v15;
      result = GameRoutine_c05fb0(a1, v12);
      if ((result & 1) != 0) {
        v6 = *a1;
        v7 = v14;
        result = GameRoutine_21c0(v6, &v17);
        if ((result & 1) != 0) {
          *v7 = v17;
        }
      }
      if ((v12[0] & 1) != 0 && v13 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
      }
      v9 = v15;
      v10 = *(_QWORD*)(a2 + 24);
      *(_BYTE*)(v10 + 4) = 1;
      *(_DWORD*)v10 = v9;
    }
    else {
      v11 = *(_QWORD*)(a2 + 24);
      if (*(_BYTE*)(v11 + 4) == 1) {
        *(_BYTE*)(v11 + 4) = 0;
      }
    }
  }
  return result;
}

__int64 GameStringReads_c3dc40(__int64* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  _WORD v13[8];
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;

  result = GameRoutine_c3dd90();
  if ((result & 1) != 0) {
    v5 = *a1;
    v16 = 0;
    GameRoutine_2360(v5, &v16);
    result = *(_QWORD*)(a2 + 24);
    v6 = 0xAAAAAAAAAAAAAAABLL *
         ((__int64)(*(_QWORD*)(result + 8) - *(_QWORD*)result) >> 2);
    if (v16 <= v6) {
      if (v16 < v6) {
        *(_QWORD*)(result + 8) = *(_QWORD*)result + 12 * v16;
      }
    }
    else {
      result = GameRoutine_c3dfb0();
    }
    v7 = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 8LL) - **(_QWORD**)(a2 + 24);
    if (v7 != 0) {
      v8 = 0;
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xAAAAAAAAAAAAAAABLL * (v7 >> 2);
      do {
        v11 = **(_QWORD**)(a2 + 24);
        v13[0] = 0;
        v15 = v11 + v8;
        result = GameRoutine_c3e190(a1, v13);
        if ((result & 1) != 0) {
          result = GameStringReads_c3e3b0(v15, a1);
        }
        if ((v13[0] & 1) != 0 && v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12);
        }
        --v10;
        v8 += 12;
      } while (v10 != 0);
    }
  }
  return result;
}

__int64 GameStringReads_c3e3b0(_DWORD* a1, _QWORD* a2)
{
  _DWORD* v4;
  __int64 v5;
  _DWORD* v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  _WORD v10[8];
  __int64 v11;
  _DWORD* v12;
  int v13;

  v10[0] = 0;
  v12 = a1;
  if ((GameRoutine_c05fb0(a2, v10) & 1) != 0) {
    v4 = v12;
    if ((GameRoutine_21c0(*a2, &v13) & 1) != 0) {
      *v4 = v13;
    }
  }
  if ((v10[0] & 1) != 0 && v11 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v10[0] = 0;
  v12 = a1 + 1;
  if ((GameRoutine_c05fb0(a2, v10) & 1) != 0) {
    v6 = v12;
    if ((GameRoutine_21c0(*a2, &v13) & 1) != 0) {
      *v6 = v13;
    }
  }
  if ((v10[0] & 1) != 0 && v11 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v10[0] = 0;
  v12 = a1 + 2;
  result = GameRoutine_c05690(a2, v10);
  if ((result & 1) != 0) {
    result = GameRoutine_21c0(*a2, v12);
  }
  if ((v10[0] & 1) != 0 && v11 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  return result;
}

__int64 GameStringReads_c3ec70(_DWORD* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  char v12[16];
  __int64 v13;
  _DWORD* v14;
  int v15;

  GameRoutine_c3b780();
  v14 = a1 + 64;
  *(_QWORD*)v12 = 0x746E6F72660ALL;
  GameStringReads_c3cd70((__int64)a2, v12);
  if ((v12[0] & 1) != 0 && v13 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v14 = a1 + 68;
  *(_QWORD*)v12 = 0x7466656C08LL;
  GameStringReads_c3cd70((__int64)a2, v12);
  if ((v12[0] & 1) != 0 && v13 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v14 = a1 + 72;
  *(_QWORD*)v12 = 0x68746469770ALL;
  if ((GameRoutine_c05fb0(a2, v12) & 1) != 0) {
    v6 = v14;
    if ((GameRoutine_21c0(*a2, &v15) & 1) != 0) {
      *v6 = v15;
    }
  }
  if ((v12[0] & 1) != 0 && v13 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v14 = a1 + 73;
  *(_QWORD*)v12 = 0x7468676965680CLL;
  result = GameRoutine_c05fb0(a2, v12);
  if ((result & 1) != 0) {
    v9 = *a2;
    v10 = v14;
    result = GameRoutine_21c0(v9, &v15);
    if ((result & 1) != 0) {
      *v10 = v15;
    }
  }
  if ((v12[0] & 1) != 0 && v13 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
}

__int64 GameStringReads_c3f080(_DWORD* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  _DWORD* v10;
  __int64 v11;
  _DWORD* v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  _DWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  int v22;

  GameRoutine_c3b780();
  v21 = a1 + 64;
  v18 = 0x746E6F72660ALL;
  GameStringReads_c3cd70((__int64)a2, (char*)&v18);
  if ((v18 & 1) != 0 && v20 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v21 = a1 + 68;
  v18 = 0x7466656C08LL;
  GameStringReads_c3cd70((__int64)a2, (char*)&v18);
  if ((v18 & 1) != 0 && v20 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v21 = a1 + 72;
  v18 = 0x68746469770ALL;
  if ((GameRoutine_c05fb0(a2, &v18) & 1) != 0) {
    v6 = v21;
    if ((GameRoutine_21c0(*a2, &v22) & 1) != 0) {
      *v6 = v22;
    }
  }
  if ((v18 & 1) != 0 && v20 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v21 = a1 + 73;
  v18 = 0x7468676965680CLL;
  if ((GameRoutine_c05fb0(a2, &v18) & 1) != 0) {
    v8 = v21;
    if ((GameRoutine_21c0(*a2, &v22) & 1) != 0) {
      *v8 = v22;
    }
  }
  if ((v18 & 1) != 0 && v20 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  v21 = a1 + 74;
  v18 = 0x4166666F74756318LL;
  v19 = 0x586168706CLL;
  if ((GameRoutine_c05fb0(a2, &v18) & 1) != 0) {
    v10 = v21;
    if ((GameRoutine_21c0(*a2, &v22) & 1) != 0) {
      *v10 = v22;
    }
  }
  if ((v18 & 1) != 0 && v20 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  v21 = a1 + 75;
  v18 = 0x4166666F74756318LL;
  v19 = 0x596168706CLL;
  if ((GameRoutine_c05fb0(a2, &v18) & 1) != 0) {
    v12 = v21;
    if ((GameRoutine_21c0(*a2, &v22) & 1) != 0) {
      *v12 = v22;
    }
  }
  if ((v18 & 1) != 0 && v20 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  v21 = a1 + 76;
  v18 = 0x4166666F74756318LL;
  v19 = 0x5A6168706CLL;
  result = GameRoutine_c05fb0(a2, &v18);
  if ((result & 1) != 0) {
    v15 = *a2;
    v16 = v21;
    result = GameRoutine_21c0(v15, &v22);
    if ((result & 1) != 0) {
      *v16 = v22;
    }
  }
  if ((v18 & 1) != 0 && v20 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
  }
  return result;
}

#pragma GCC visibility pop
