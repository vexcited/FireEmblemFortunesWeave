#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 TroopMgr_13460a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_21206b8[])();
extern __int64 (*game_gmap_GmapTargetLine_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c790;
_QWORD* GmapTargetLine_Destructor(_QWORD* result);
bool GmapTargetLine_Unknown2(__int64 a1);
__int64 GmapTargetLine_Unknown5(__int64 result);
__int64
GmapTargetLine_Unknown6_alt1(__int64 result) __asm__("GmapTargetLine_Unknown6");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_19b0930(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_gmap_GmapTargetLine_Impl_TryAdd_closure_Invoke(__int64 result,
                                                            _QWORD* a2);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapTargetLine_Unknown6(__int64 a1);
extern __int64* GameData_2130e00;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 GmapTargetLine_Unknown3(__int64 result);

_QWORD* GmapTargetLine_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = result[1];
  *result = game_gmap_GmapTargetLine_vtable;
  if (v1 != 0) {
    v2 = *(_QWORD**)v1;
    v3 = *(_QWORD**)(v1 + 8);
    v4 = result;
    if (*(_QWORD**)v1 != v3) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        if (*v2 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6);
        }
        ++v2;
      } while (v2 != v3);
      v2 = *(_QWORD**)v1;
    }
    *(_QWORD*)(v1 + 8) = v2;
    if (v2 != nullptr) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    v4[1] = 0;
  }
  return result;
}

bool GmapTargetLine_Unknown2(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) != **(_QWORD**)(a1 + 8);
}

__int64 GmapTargetLine_Unknown3(__int64 result)
{
  float*** v1;
  float** v2;
  float** v3;
  __int64* v4;
  __int64 v5;
  float* v6;

  v1 = *(float****)(result + 8);
  v2 = *v1;
  v3 = v1[1];
  if (v2 != v3) {
    v4 = GameData_2130e00;
    v5 = game_script_hub_g_frame_counter_ptr[0];
    do {
      v6 = *v2++;
      *v6 = *v6 + (float)(*(float*)(*v4 + 596) *
                          (float)((float)(*(float*)(*(_QWORD*)v5 + 160LL) *
                                          0x1.0aef000000000p+4f) /
                                  0x1.f400000000000p+9f));
    } while (v2 != v3);
  }
  return result;
}

__int64 GmapTargetLine_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  char v10;

  v10 = 0;
  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  for (i = *(__int64**)(v2 + 16); v3 != i; ++v3) {
    v6 = *v3;
    v7 = *(_QWORD*)(*v3 + 96);
    if (v7 != 0 && *(_BYTE*)(v7 + 32) == 1 &&
        *(_QWORD*)(v6 + 32) != *(_QWORD*)(v6 + 24) &&
        (*(_WORD*)(v6 + 544) & 3) != 2 && (*(_BYTE*)(v6 + 546) & 0xEF) == 0) {
      v8[0] = GameData_21206b8;
      v8[1] = v1;
      v8[2] = &v10;
      v8[3] = v6;
      v9 = v8;
      TroopMgr_13460a0(v8);
      result = (__int64)v9;
      if (v9 == v8) {
        v5 = 32;
      }
      else {
        if (v9 == nullptr) {
          continue;
        }
        v5 = 40;
      }
      result = (*(__int64 (**)(void*))(*v9 + v5))(v9);
    }
  }
  return result;
}

void GmapTargetLine_Unknown6(__int64 a1)
{
  __int64** v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;

  v1 = *(__int64***)(a1 + 8);
  v2 = *v1;
  v3 = v1[1];
  if (*v1 != v3) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v5, *v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = *v1;
  }
  v1[1] = v2;
}

__int64 game_gmap_GmapTargetLine_Impl_TryAdd_closure_Invoke(__int64 result,
                                                            _QWORD* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;

  v2 = *(_QWORD*)(result + 24);
  v3 = (_QWORD*)*a2;
  v4 = (__int64*)v2;
  if (*(_QWORD*)(v2 + 32) != *(_QWORD*)(v2 + 24)) {
    if ((v5 = *(_QWORD*)(v2 + 96), v6 = *(_QWORD*)(v2 + 552), (v5 | v6) == 0) ||
        v5 == 0 && (v6 != 0 ? (v7 = *(_QWORD*)(v2 + 104) == 0) : (v7 = false),
                    v7 &&
                        *(__int16*)(v2 + 642) * *(__int16*)(v2 + 640) *
                                *(__int16*)(v2 + 644) ==
                            0 &&
                        *(_QWORD*)(v6 + 352) == 0) ||
        (v4 = *(__int64**)(result + 24), (*(_WORD*)(v2 + 544) & 3) != 2)) {
      v4 = *(__int64**)(v2 + 24);
    }
  }
  v8 = *((_DWORD*)v3 + 135);
  v9 = *v4;
  v10 = (_QWORD*)*a2;
  v11 = (unsigned int)(v8 - 1);
  if (v8 >= 1) {
    v12 = v3[3];
    v13 = v3[4] - v12;
    v14 = (_QWORD*)(v12 + 8LL * (unsigned int)v11);
    if (v11 >= v13 >> 3) {
      v10 = (_QWORD*)*a2;
    }
    else {
      v10 = v14;
    }
  }
  if (v9 == *v10) {
    v15 = *(__int64**)(result + 8);
    v16 = *v15;
    v17 = v15[1];
    if (*v15 == v17) {
    LABEL_30:
      v29 = result;
      v30 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      *(_DWORD*)result = 0;
      *(_QWORD*)(result + 8) = v2;
      *(_QWORD*)(result + 16) = v3;
      v32 = (__int64*)v15[1];
      v31 = v15[2];
      if ((unsigned __int64)v32 >= v31) {
        v34 = *v15;
        v35 = (__int64)v32 - *v15;
        v36 = (v35 >> 3) + 1;
        if (v36 >> 61 != 0) {
          GameRoutine_19b0930();
        }
        v37 = v31 - v34;
        if (v37 >> 2 > v36) {
          v36 = v37 >> 2;
        }
        if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
          v38 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v38 = v36;
        }
        if (v38 != 0) {
          if (v38 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v39 = result;
          v40 = fw_memory_HeapManager_Allocate(*v30, 8 * v38, 16, 0);
          result = v39;
        }
        else {
          v40 = 0;
        }
        v41 = v40 + 8 * v38;
        v42 = v40 + v35 - 8 * (v35 >> 3);
        *(_QWORD*)(v40 + v35) = result;
        v33 = v40 + v35 + 8;
        result = memcpy(v42, v34, v35);
        *v15 = v42;
        v15[1] = v33;
        v15[2] = v41;
        if (v34 != 0) {
          v43 = 128;
          if (*(_QWORD*)(*v30 + 200LL) == 0) {
            v43 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v30 + v43);
        }
      }
      else {
        *v32 = result;
        v33 = (__int64)(v32 + 1);
      }
      v15[1] = v33;
      **(_BYTE**)(v29 + 16) = 1;
    }
    else {
      while (1) {
        if (**(_QWORD**)(*(_QWORD*)v16 + 8LL) == *(_QWORD*)v2) {
          v18 = *(_QWORD*)(*(_QWORD*)v16 + 16LL);
          v19 = *(_DWORD*)(v18 + 540);
          v20 = __OFSUB__(v19, 1);
          v21 = (unsigned int)(v19 - 1);
          if (((v21 & 0x80000000) != 0LL) == v20) {
            v22 = *(_QWORD*)(v18 + 24);
            v23 = *(_QWORD*)(v18 + 32) - v22;
            v24 = v22 + 8LL * (unsigned int)v21;
            if (v21 < v23 >> 3) {
              v18 = v24;
            }
          }
          v25 = (_QWORD*)*a2;
          if (v8 >= 1) {
            v26 = v3[3];
            v27 = v3[4] - v26;
            v28 = (_QWORD*)(v26 + 8 * v11);
            if (v11 >= v27 >> 3) {
              v25 = (_QWORD*)*a2;
            }
            else {
              v25 = v28;
            }
          }
          if (*(_QWORD*)v18 == *v25) {
            break;
          }
        }
        v16 += 8;
        if (v16 == v17) {
          goto LABEL_30;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
