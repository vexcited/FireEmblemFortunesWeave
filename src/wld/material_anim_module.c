#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_be6480(_QWORD* result, __int64, unsigned __int64, float);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_bea200(_QWORD);
__int64 GameRoutine_bea360(_QWORD);
__int64 GameRoutine_beb940(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*wld_MaterialAnimModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_beaa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_beaa20(void);
_QWORD* MaterialAnimModule_Destructor(_QWORD* result);
bool MaterialAnimModule_be6200(float* a1, __int64 a2, float a3);
__int64 MaterialAnimModule_be6340(__int64 result);
_QWORD* MaterialAnimModule_be7090(_QWORD* result, __int64 a2,
                                  unsigned __int64 a3, float a4);
_QWORD* MaterialAnimModule_be9e20(_QWORD* result);
_QWORD* MaterialAnimModule_be9f20(_QWORD* result, __int64* a2);

_QWORD* MaterialAnimModule_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* i;
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
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* j;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
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

  v1 = result[30];
  v2 = result[31];
  v3 = result;
  for (*result = wld_MaterialAnimModule_vtable; v2 != v1; v2 -= 16) {
    v4 = *(_QWORD*)(v2 - 8);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v4);
    }
  }
  v3[31] = v1;
  v5 = (__int64*)v3[27];
  for (i = (__int64*)v3[28]; v5 != i;
       result = (_QWORD*)GameRoutine_634d80(*(_QWORD*)(v7 + 8))) {
    v7 = *v5++;
  }
  v8 = v3[30];
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = v3[31];
    if (v8 == v10) {
      goto LABEL_17;
    }
    do {
      v11 = *(_QWORD*)(v10 - 8);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 16;
    } while (v10 != v8);
    v12 = v3[30];
    v3[31] = v8;
    if (v12 != 0) {
    LABEL_17:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v13 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13);
    }
  }
  v14 = v3[27];
  if (v14 != 0) {
    v15 = *(_QWORD*)v9;
    v3[28] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v15 + v16);
  }
  v17 = (_QWORD*)v3[24];
  if (v17 != nullptr) {
    v18 = (_QWORD*)v3[25];
    if (v17 == v18) {
      goto LABEL_35;
    }
    v19 = v18 - 3;
    do {
      if (*v19 != 0) {
        result = (_QWORD*)GameRoutine_bea200(v19);
        if (*v19 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v21 = 128;
          }
          else {
            v21 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v21);
        }
      }
      v20 = v19 - 6;
      v19 -= 9;
    } while (v20 != v17);
    v22 = v3[24];
    v3[25] = v17;
    if (v22 != 0) {
    LABEL_35:
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v23 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v23);
    }
  }
  for (j = (_QWORD*)v3[20]; j != nullptr;
       result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v25)) {
    v26 = j;
    j = (_QWORD*)*j;
    GameRoutine_beb940(v26 + 5);
    if ((v26[2] & 1) != 0 && v26[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
        v27 = 128;
      }
      else {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v27);
    }
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
      v25 = 128;
    }
    else {
      v25 = 56;
    }
  }
  v28 = v3[18];
  v3[18] = 0;
  if (v28 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v29);
  }
  v30 = v3[15];
  if (v30 != 0) {
    v31 = v3[16];
    if (v30 == v31) {
      goto LABEL_80;
    }
    do {
      v32 = v31;
      v33 = *(_QWORD*)(v31 - 24);
      if (v33 != 0) {
        v34 = *(_QWORD*)(v32 - 16);
        if (v33 == v34) {
          goto LABEL_69;
        }
        v35 = *(_QWORD*)(v32 - 16);
        do {
          v36 = *(_BYTE*)(v35 - 32);
          v35 -= 32;
          if ((v36 & 1) != 0 && *(_QWORD*)(v34 - 16) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v37 = 128;
            }
            else {
              v37 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v37);
          }
          v34 = v35;
        } while (v35 != v33);
        v38 = *(_QWORD*)(v32 - 24);
        *(_QWORD*)(v32 - 16) = v33;
        if (v38 != 0) {
        LABEL_69:
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v39);
        }
      }
      v31 = v32 - 48;
      if ((*(_BYTE*)(v32 - 48) & 1) != 0 && *(_QWORD*)(v32 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v40);
      }
    } while (v30 != v31);
    v41 = v3[15];
    v3[16] = v30;
    if (v41 != 0) {
    LABEL_80:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v42 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v42);
    }
  }
  if ((v3[10] & 1) != 0 && v3[12] != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v43 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v43);
  }
  if ((v3[6] & 1) != 0 && v3[8] != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v44 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v44);
  }
  v45 = v3[3];
  if (v45 != 0) {
    v46 = v3[4];
    if (v45 == v46) {
      goto LABEL_97;
    }
    do {
      v46 -= 64;
      result = (_QWORD*)GameRoutine_bea360(v46);
    } while (v46 != v45);
    v47 = v3[3];
    v3[4] = v45;
    if (v47 != 0) {
    LABEL_97:
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v48 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v48);
    }
  }
  return result;
}

bool MaterialAnimModule_be6200(float* a1, __int64 a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  int v13;
  float v14;
  bool v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v4 = **(_QWORD**)(a2 + 40);
  v3 = *(_QWORD*)(*(_QWORD*)(a2 + 40) + 8LL);
  v5 = v3 - v4;
  if (v3 != v4) {
    if (v5 == 12) {
      goto LABEL_3;
    }
    v7 = 0;
    v8 = 0xAAAAAAAAAAAAAAABLL * (v5 >> 2);
    v9 = **(_QWORD**)(a2 + 40);
    while (1) {
      v10 = *(float*)v9;
      if (a3 <= *(float*)v9) {
        break;
      }
      ++v7;
      v9 += 12;
      if (v8 == v7) {
        v6 = *(float*)(v3 - 8);
        goto LABEL_26;
      }
    }
    if (v7 == 0) {
    LABEL_3:
      v6 = *(float*)(v4 + 4);
    }
    else {
      v11 = *(float*)(v9 - 12);
      v6 = *(float*)(v9 + 4);
      if (vabds_f32(v10, v11) >= 0.00000011921f) {
        v12 = *(float*)(v9 - 8);
        v13 = *(_DWORD*)(v9 + 8);
        v14 = (float)(a3 - v11) / (float)(v10 - v11);
        if (v13 <= 1) {
          if (v13 == 1) {
            if (v14 < 1.0f) {
              v6 = v12;
            }
            goto LABEL_26;
          }
        }
        else {
          switch (v13) {
          case 2:
            v14 = v14 * v14;
            break;
          case 3:
            v19 = 1.0f;
            v14 = 1.0f - (float)((float)(1.0f - v14) * (float)(1.0f - v14));
            goto LABEL_24;
          case 4:
            v15 = v14 < 0.5f;
            v16 = (float)(v14 * -2.0f) + 2.0f;
            v14 = v14 * (float)(v14 + v14);
            v17 = (float)((float)(v16 * v16) * -0.5f) + 1.0f;
            if (!v15) {
              v14 = v17;
            }
            v18 = 1.0f - v14;
            goto LABEL_25;
          default:
            break;
          }
        }
        v19 = 1.0f;
      LABEL_24:
        v18 = v19 - v14;
      LABEL_25:
        v6 = (float)(v6 * v14) + (float)(v12 * v18);
      }
    }
  LABEL_26:
    *a1 = v6;
  }
  return v3 != v4;
}

__int64 MaterialAnimModule_be6340(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  __int64 v3;
  unsigned __int8* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int8* v12;

  v1 = *(unsigned __int8**)(result + 24);
  v2 = *(unsigned __int8**)(result + 32);
  v3 = result;
  v4 = v1;
  if (v1 != v2) {
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      v5 = *(_QWORD*)(result + 56);
    }
    else {
      v5 = *(_BYTE*)(result + 48) >> 1;
    }
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
      v9 = *(_QWORD*)(result + 64);
      v4 = *(unsigned __int8**)(result + 24);
      while (1) {
        v10 = *v4;
        v11 = *((_QWORD*)v4 + 1);
        if ((v10 & 1) == 0) {
          v11 = v10 >> 1;
        }
        if (v11 == v5) {
          v12 = (v10 & 1) != 0 ? *((unsigned __int8**)v4 + 2) : v4 + 1;
          result = memcmp(v12, v9, v5);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v4 += 64;
        if (v4 == v2) {
          return result;
        }
      }
    }
    else {
      v4 = *(unsigned __int8**)(result + 24);
      while (1) {
        v6 = *v4;
        v7 = *((_QWORD*)v4 + 1);
        if ((v6 & 1) == 0) {
          v7 = v6 >> 1;
        }
        if (v7 == v5) {
          v8 = (v6 & 1) != 0 ? *((unsigned __int8**)v4 + 2) : v4 + 1;
          result = memcmp(v8, v3 + 49, v5);
          if ((_DWORD)result == 0) {
            break;
          }
        }
        v4 += 64;
        if (v4 == v2) {
          return result;
        }
      }
    }
  }
  if (v4 != v2) {
    if ((*(_BYTE*)(v3 + 48) & 1) != 0) {
      **(_BYTE**)(v3 + 64) = 0;
      *(_QWORD*)(v3 + 56) = 0;
      v1 = *(unsigned __int8**)(v3 + 24);
    }
    else {
      *(_WORD*)(v3 + 48) = 0;
    }
    *(_DWORD*)(v3 + 72) = (unsigned __int64)(v4 - v1) >> 6;
    *((_DWORD*)v4 + 6) = 0;
  }
  return result;
}

_QWORD* MaterialAnimModule_be7090(_QWORD* result, __int64 a2,
                                  unsigned __int64 a3, float a4)
{
  __int64 v4;

  *((_BYTE*)result + 76) = 1;
  if (a4 > 0.0) {
    return GameRoutine_be6480(result, a2, a3, a4);
  }
  if (a3 != 0) {
    v4 = (__int64)result;
    GameRoutine_60a060(result + 6, a2, a3);
    return (_QWORD*)MaterialAnimModule_be6340(v4);
  }
  else {
    if ((result[6] & 1) != 0) {
      *(_BYTE*)result[8] = 0;
      result[7] = 0;
    }
    else {
      *((_WORD*)result + 24) = 0;
    }
    *((_DWORD*)result + 18) = -1;
    if ((result[10] & 1) != 0) {
      *(_BYTE*)result[12] = 0;
      result[11] = 0;
    }
    else {
      *((_WORD*)result + 40) = 0;
    }
    *(_QWORD*)((char*)result + 108) = 0;
    *((_DWORD*)result + 26) = -1;
  }
  return result;
}

_QWORD* MaterialAnimModule_be9e20(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = result + 24;
  v1 = (_QWORD*)result[24];
  result[23] = 0;
  if (v1 != nullptr) {
    v3 = (_QWORD*)result[25];
    v4 = result;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v6 = v3 - 3;
    do {
      if (*v6 != 0) {
        result = (_QWORD*)GameRoutine_bea200(v6);
        if (*v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
        }
      }
      v7 = v6 - 6;
      v6 -= 9;
    } while (v7 != v1);
    v9 = v4[24];
    v4[25] = v1;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v10 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v10);
    }
  }
  v2[1] = 0;
  v2[2] = 0;
  *v2 = 0;
  return result;
}

_QWORD* MaterialAnimModule_be9f20(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  char* v8;
  char* v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  v6 = a2[3];
  v7 = *((_DWORD*)a2 + 8);
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  *((_DWORD*)v3 + 8) = v7;
  v3[3] = v6;
  v8 = (char*)a2[5];
  v9 = (char*)a2[6];
  v10 = v9 - v8;
  if (v9 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_beaa00(result);
    }
    v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9 - v8, 16, 0);
    v12 = result;
    v3[5] = result;
    v3[6] = result;
    v3[7] = (char*)result + v10;
    do {
      v12[1] = 0;
      v12[2] = 0;
      *v12 = 0;
      v14 = *(_QWORD*)v8;
      v13 = *((_QWORD*)v8 + 1);
      v15 = v13 - *(_QWORD*)v8;
      if (v13 != *(_QWORD*)v8) {
        if (0xAAAAAAAAAAAAAAABLL * (v15 >> 2) >= 0x1555555555555556LL) {
          GameRoutine_beaa20();
        }
        v16 = fw_memory_HeapManager_Allocate(*v11, v15, 16, 0);
        v17 = v16 + v15;
        *v12 = v16;
        v12[1] = v16;
        v12[2] = v16 + v15;
        result = (_QWORD*)memcpy(v16, v14, v15);
        v12[1] = v17;
      }
      v8 += 24;
      v12 += 3;
    } while (v8 != v9);
    v3[6] = v12;
  }
  return result;
}

#pragma GCC visibility pop
