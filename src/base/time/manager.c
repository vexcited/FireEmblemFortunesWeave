#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*base_time_Manager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_17db4b0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
_QWORD* Manager_Destructor_17dab60(_QWORD* result);
__int64 Manager_DeletingDestructor_17dac60(_QWORD* a1);
_QWORD* Manager_17dad60(_QWORD* result, __int64 a2);
__int64 nn_oe_GetProgramTotalActiveTime();
__int64 nn_os_ConvertToTick(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_GetSystemTickFrequency(void);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern int as_g_tick_count;
__int64 Manager_17dae80(__int64 a1);
float Manager_Unknown2_17db400(__int64 a1, _QWORD* a2);

_QWORD* Manager_Destructor_17dab60(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = result[28];
  v2 = result;
  *result = base_time_Manager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = result[29];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      result = *(_QWORD**)(v4 - 8);
      if (result != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count___release_weak(result);
      }
      v4 -= 16;
    } while (v4 != v1);
    v5 = v2[28];
    v2[29] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_8:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v1);
    }
  }
  v7 = v2[25];
  if (v7 != 0) {
    v8 = *(_QWORD*)v3;
    v2[26] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  return result;
}

__int64 Manager_DeletingDestructor_17dac60(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[28];
  *a1 = base_time_Manager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[29];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[28];
    a1[29] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v1);
    }
  }
  v8 = a1[25];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    a1[26] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, a1);
}

_QWORD* Manager_17dad60(_QWORD* result, __int64 a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = (_QWORD*)result[26];
  v2 = result[27];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v6 = result[25];
    v7 = (char*)v3 - v6;
    v8 = ((__int64)v3 - v6) >> 3;
    v9 = v8 + 1;
    if ((unsigned __int64)(v8 + 1) >> 61 != 0) {
      GameRoutine_17db4b0();
    }
    v10 = v2 - v6;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = a2;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      a2 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + 8 * v12;
    v16 = (__int64)&v7[v14 + -8 * v8];
    *(_QWORD*)&v7[v14] = a2;
    v5 = (__int64)&v7[v14 + 8];
    result = (_QWORD*)memcpy(v16, v6, v7);
    v4[25] = v16;
    v4[26] = v5;
    v4[27] = v15;
    if (v6 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v17, v6);
    }
  }
  else {
    *v3 = a2;
    v5 = (__int64)(v3 + 1);
  }
  v4[26] = v5;
  return result;
}

__int64 Manager_17dae80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 ProgramTotalActiveTimeEv;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  int v7;
  __int64 v8;
  char v9;
  float v10;
  __int64 v11;
  double v12;
  double v13;
  __int64 v14;
  char v15;
  float v16;
  __int64 v17;
  double v18;
  double v19;
  __int64 v20;
  char v21;
  float v22;
  __int64 v23;
  double v24;
  double v25;
  __int64 result;
  __int64* v27;
  __int64* v28;
  double v29;
  double v30;
  double v31;
  double v32;
  __int64 v33;
  char v34;
  float v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* i;
  __int64* v47;
  __int64* j;
  float v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  __int64 v54;

  ProgramTotalActiveTimeEv = nn_oe_GetProgramTotalActiveTime();
  v3 = nn_os_ConvertToTick(ProgramTotalActiveTimeEv);
  v4 = *(_QWORD*)(a1 + 24);
  v5 = v3 - *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v5;
  *(_QWORD*)(a1 + 16) = v3;
  *(_QWORD*)(a1 + 24) = v4 + v5;
  v6 = (*(float (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a1 + 8);
  v7 = *(_DWORD*)(a1 + 40);
  *(float*)(a1 + 68) = v6;
  if (v7 != as_g_tick_count) {
    v8 = *(_QWORD*)(a1 + 32);
    *(_DWORD*)(a1 + 40) = as_g_tick_count;
    v9 = (*(__int64 (**)(__int64))(v8 + 16))((__int64)(a1 + 32));
    v10 = 0x0.0p+0f;
    if ((v9 & 1) == 0) {
      v11 = *(_QWORD*)(a1 + 56);
      if (v11 != 0) {
        v10 = *(float*)(v11 + 16);
      }
      else {
        v10 = 0x1.0000000000000p+0f;
      }
    }
    *(float*)(a1 + 48) = v10 * *(float*)(a1 + 44);
  }
  if (*(_BYTE*)(a1 + 64) == 1) {
    *(float*)(a1 + 48) = *(float*)(a1 + 68) * *(float*)(a1 + 44);
  }
  if ((*(_BYTE*)(a1 + 65) & 1) != 0) {
    v12 = 0x0.0p+0;
    *(_DWORD*)(a1 + 48) = 0;
  }
  else {
    v12 = *(float*)(a1 + 48);
  }
  v13 = v12 / 0x1.df851eb851eb8p+5 * (double)nn_os_GetSystemTickFrequency();
  *(_QWORD*)(a1 + 72) += (__int64)v13;
  *(_QWORD*)(a1 + 80) = (__int64)v13;
  if (*(_DWORD*)(a1 + 96) != as_g_tick_count) {
    v14 = *(_QWORD*)(a1 + 88);
    *(_DWORD*)(a1 + 96) = as_g_tick_count;
    v15 = (*(__int64 (**)(__int64))(v14 + 16))((__int64)(a1 + 88));
    v16 = 0x0.0p+0f;
    if ((v15 & 1) == 0) {
      v17 = *(_QWORD*)(a1 + 112);
      if (v17 != 0) {
        v16 = *(float*)(v17 + 16);
      }
      else {
        v16 = 0x1.0000000000000p+0f;
      }
    }
    *(float*)(a1 + 104) = v16 * *(float*)(a1 + 100);
  }
  if (*(_BYTE*)(a1 + 120) == 1) {
    *(float*)(a1 + 104) = *(float*)(a1 + 124) * *(float*)(a1 + 100);
  }
  if ((*(_BYTE*)(a1 + 121) & 1) != 0) {
    v18 = 0x0.0p+0;
    *(_DWORD*)(a1 + 104) = 0;
  }
  else {
    v18 = *(float*)(a1 + 104);
  }
  v19 = v18 / 0x1.df851eb851eb8p+5 * (double)nn_os_GetSystemTickFrequency();
  *(_QWORD*)(a1 + 128) += (__int64)v19;
  *(_QWORD*)(a1 + 136) = (__int64)v19;
  if (*(_DWORD*)(a1 + 152) != as_g_tick_count) {
    v20 = *(_QWORD*)(a1 + 144);
    *(_DWORD*)(a1 + 152) = as_g_tick_count;
    v21 = (*(__int64 (**)(__int64))(v20 + 16))((__int64)(a1 + 144));
    v22 = 0x0.0p+0f;
    if ((v21 & 1) == 0) {
      v23 = *(_QWORD*)(a1 + 168);
      if (v23 != 0) {
        v22 = *(float*)(v23 + 16);
      }
      else {
        v22 = 0x1.0000000000000p+0f;
      }
    }
    *(float*)(a1 + 160) = v22 * *(float*)(a1 + 156);
  }
  if (*(_BYTE*)(a1 + 176) == 1) {
    *(float*)(a1 + 160) = *(float*)(a1 + 180) * *(float*)(a1 + 156);
  }
  if ((*(_BYTE*)(a1 + 177) & 1) != 0) {
    v24 = 0x0.0p+0;
    *(_DWORD*)(a1 + 160) = 0;
  }
  else {
    v24 = *(float*)(a1 + 160);
  }
  v25 = v24 / 0x1.df851eb851eb8p+5;
  result = nn_os_GetSystemTickFrequency();
  v27 = *(__int64**)(a1 + 200);
  v28 = *(__int64**)(a1 + 208);
  v29 = v25 * (double)result;
  *(_QWORD*)(a1 + 184) += (__int64)v29;
  *(_QWORD*)(a1 + 192) = (__int64)v29;
  while (v27 != v28) {
    v33 = *v27;
    if (*(_DWORD*)(*v27 + 8) != as_g_tick_count) {
      *(_DWORD*)(v33 + 8) = as_g_tick_count;
      v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      v35 = 0x0.0p+0f;
      if ((v34 & 1) == 0) {
        v36 = *(_QWORD*)(v33 + 24);
        if (v36 != 0) {
          v35 = *(float*)(v36 + 16);
        }
        else {
          v35 = 0x1.0000000000000p+0f;
        }
      }
      *(float*)(v33 + 16) = v35 * *(float*)(v33 + 12);
    }
    if (*(_BYTE*)(v33 + 32) == 1) {
      *(float*)(v33 + 16) = *(float*)(v33 + 36) * *(float*)(v33 + 12);
    }
    if ((*(_BYTE*)(v33 + 33) & 1) != 0) {
      v30 = 0x0.0p+0;
      *(_DWORD*)(v33 + 16) = 0;
    }
    else {
      v30 = *(float*)(v33 + 16);
    }
    v31 = v30 / 0x1.df851eb851eb8p+5;
    result = nn_os_GetSystemTickFrequency();
    ++v27;
    v32 = v31 * (double)result;
    *(_QWORD*)(v33 + 40) += (__int64)v32;
    *(_QWORD*)(v33 + 48) = (__int64)v32;
  }
  v37 = *(__int64**)(a1 + 224);
  v38 = *(__int64**)(a1 + 232);
  if (v37 == v38) {
  LABEL_56:
    if (v37 == v38) {
      goto LABEL_70;
    }
    v41 = v37 + 2;
    if (v37 + 2 == v38) {
      goto LABEL_70;
    }
    while (1) {
      result = v41[1];
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        if (result != 0) {
          v42 = *v41;
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v42 != 0) {
              goto LABEL_67;
            }
          }
          else {
            v43 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            result = std___1___shared_weak_count___release_weak_alt1(v43);
            if (v42 != 0) {
            LABEL_67:
              v44 = *v41;
              v45 = v41[1];
              *v41 = 0;
              v41[1] = 0;
              result = v37[1];
              *v37 = v44;
              v37[1] = v45;
              if (result != 0) {
                result =
                    std___1___shared_weak_count___release_weak_alt1(result);
              }
              v37 += 2;
            }
          }
        }
      }
      v41 += 2;
      if (v41 == v38) {
        goto LABEL_70;
      }
    }
  }
  do {
    result = v37[1];
    if (result == 0) {
      goto LABEL_56;
    }
    result = std___1___shared_weak_count_lock(result);
    if (result == 0) {
      goto LABEL_56;
    }
    v40 = *v37;
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v40 == 0) {
        goto LABEL_56;
      }
    }
    else {
      v39 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak_alt1(v39);
      if (v40 == 0) {
        goto LABEL_56;
      }
    }
    v37 += 2;
  } while (v37 != v38);
  v37 = v38;
LABEL_70:
  i = *(__int64**)(a1 + 232);
  if (v37 != i) {
    v47 = *(__int64**)(a1 + 232);
    for (i = v37; v47 != v37; v47 -= 2) {
      result = *(v47 - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(result);
      }
    }
    *(_QWORD*)(a1 + 232) = v37;
  }
  for (j = *(__int64**)(a1 + 224); j != i; j += 2) {
    result = j[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v50 = *j;
        if (*j != 0 && *(_DWORD*)(v50 + 8) != as_g_tick_count) {
          *(_DWORD*)(v50 + 8) = as_g_tick_count;
          v51 = result;
          v52 = (*(__int64 (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
          v49 = 0x0.0p+0f;
          if ((v52 & 1) == 0) {
            v53 = *(_QWORD*)(v50 + 24);
            if (v53 != 0) {
              v49 = *(float*)(v53 + 16);
            }
            else {
              v49 = 0x1.0000000000000p+0f;
            }
          }
          result = v51;
          *(float*)(v50 + 16) = v49 * *(float*)(v50 + 12);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v54 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak_alt1(v54);
        }
      }
    }
  }
  return result;
}

float Manager_Unknown2_17db400(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  float result;

  result =
      (float)(nn_os_ConvertToTimeSpan(*a2) / 1000) / 0x1.04ad660000000p+14f;
  if (result < 0x1.19999a0000000p+0f) {
    return 0x1.0000000000000p+0f;
  }
  return result;
}

#pragma GCC visibility pop
