#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Config_bc7840(__int64, __int64);
__int64 GameRoutine_18e4620(_QWORD, _QWORD);
__int64 eft_EmitterSetHandle_Get_5b6700(_QWORD);
__int64 eft_EmitterSet_Release(void);
extern __int64 eft_g_effectSystem;
extern __int64* eft_g_effectSystem_ptr[3];
_QWORD* Stack_bcc040(_QWORD* result);
__int64 Stack_bcc1a0(__int64 result, int a2);
_QWORD* fw_world_SwapCallables(_QWORD* result, _QWORD*);
__int64 GameRoutine_18e4620_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_18e4620");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_world_JobContext_Drain(unsigned int*);
__int64 fw_world_JobContext_Wait(__int64 result, unsigned int);
__int64 fw_world_JobQueue_Submit(__int64, int);
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fd0538[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 GameData_226b928;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 eft_Stack_calcEmitter(__int64 result);
void GameRoutine_18e4620_alt2(__int64, __int64) __asm__("GameRoutine_18e4620");
__int64 eft_Stack_calcEmitter_lambda0_Invoke(__int64 result, __int64 a2,
                                             atomic_uint* a3);

__int64 eft_Stack_calcEmitter(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  int v4;
  __int64 v5;
  unsigned int* v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64* v20;
  __int64* v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  int v38;
  _QWORD* v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  struct {
    _QWORD v47[4];
    _QWORD* v48;
  } v47_;

  if ((*(_BYTE*)result & 1) != 0) {
    return result;
  }
  v1 = *(_QWORD**)(result + 72);
  v2 = (_QWORD*)(result + 64);
  v3 = result;
  *(_BYTE*)(result + 96) = 0;
  if (v1 == (_QWORD*)(result + 64)) {
    v4 = 0;
    result = *(_QWORD*)(result + 16);
    if (result == 0) {
    LABEL_18:
      v8 = 0;
      goto LABEL_19;
    }
  }
  else {
    v4 = 0;
    do {
      v1 = (_QWORD*)v1[1];
      ++v4;
    } while (v1 != v2);
    result = *(_QWORD*)(result + 16);
    if (result == 0) {
      goto LABEL_18;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_18;
  }
  v5 = *(_QWORD*)(v3 + 8);
  if (v5 == 0) {
    v8 = 0;
    goto LABEL_60;
  }
  v6 = *(unsigned int**)(v3 + 24);
  if (v6 == *(unsigned int**)(v3 + 32)) {
    v9 = 0;
    v8 = 0;
  }
  else {
    v7 = *v6;
    v8 = 0;
    v9 = 0;
    if ((v7 & 0x80000000) == 0 && (signed int)v7 < *(int*)v5) {
      v10 = (__int64*)(*(_QWORD*)(v5 + 112) + 48LL * v7);
      v8 = *v10;
      v11 = v10[1];
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v12 = result;
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
          result = v12;
        }
      }
      if (v8 != 0) {
        v13 = result;
        v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 112LL))(v8);
        result = v13;
      LABEL_60:
        v9 = 1;
        goto LABEL_63;
      }
      v9 = 0;
    }
  }
LABEL_63:
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 == 0) {
      return result;
    }
  }
  else {
    v45 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v45);
    if ((v9 & 1) == 0) {
      return result;
    }
  }
LABEL_19:
  if (v4 >= 11 && (*(_BYTE*)(eft_g_effectSystem + 319) & 1) != 0) {
    v46 = 0;
    fw_world_JobContext_Drain((unsigned int*)GameData_226b928);
    v14 = GameData_226b928;
    v15 = GameData_226b928 + 32;
    do {
      v16 = *(_DWORD*)(v14 + 8);
      v17 = (v16 + 1) & 0xFFFFFF;
      if (v16 + 1 <= 0) {
        v17 = -(-(v16 + 1) & 0xFFFFFF);
      }
      *(_DWORD*)(v14 + 8) = v17;
      v18 = atomic_load((unsigned __int64*)(v15 + 32LL * (v16 & 0x3F)));
      if (v18 != 0) {
        v16 = -1;
      }
    } while (v16 < 0);
    v19 = v16 | 0xC0000000;
    v20 = (unsigned __int64*)(v15 + 32LL * (v16 & 0x3F));
    nn_os_ClearLightEvent(v20 + 1);
    v21 = (__int64*)fw_memory_g_heap_manager_ptr;
    v22 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v22[2] = 0;
    v23 = v22;
    v24 = GameData_212e368[0];
    v22[8] = 0;
    *v22 = v24 + 16;
    v22[1] = 0;
    v25 = v20[3];
    v20[3] = (unsigned __int64)v23;
    if (v25 != 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v25 + 8LL))(v25);
    }
    atomic_store(v19, v20);
    v23[1] = v14;
    v26 = *v21;
    *((_DWORD*)v23 + 4) = v19;
    v27 = fw_memory_HeapManager_Allocate(v26, 40, 16, 0);
    *(_DWORD*)(v27 + 16) = v4;
    v47_.v48 = (_QWORD*)v27;
    *(_QWORD*)v27 = GameData_1fd0538;
    *(_QWORD*)(v27 + 8) = v3;
    *(_QWORD*)(v27 + 24) = &v46;
    *(_QWORD*)(v27 + 32) = v8;
    fw_world_SwapCallables(v47_.v47, v23 + 4);
    if (v47_.v48 == v47_.v47) {
      v28 = 32;
    }
    else {
      if (v47_.v48 == nullptr) {
      LABEL_49:
        fw_world_JobQueue_Submit(*(_QWORD*)(v14 + 16), v19);
        fw_world_JobContext_Wait(*(_QWORD*)GameData_21323e8[0], v19);
        v38 = atomic_load(&v46);
        if (v38 >= 1) {
          v39 = *(_QWORD**)(v3 + 72);
          while (v39 != v2) {
            v40 = v39;
            v39 = (_QWORD*)v39[1];
            if (*((_BYTE*)v40 + 137) == 1) {
              v41 = eft_g_effectSystem;
              if (v40 !=
                  (_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem +
                                                             296) -
                                                  24LL) +
                                       8LL * *((unsigned int*)v40 + 10)) +
                            64LL)) {
                v42 = *v39;
                *(_QWORD*)(*v40 + 8LL) = v39;
                *v39 = *v40;
                *(_QWORD*)(v42 + 8) = v40;
                *v40 = v42;
              }
              v43 = v40 - 17;
              GameRoutine_18e4620_alt1(*(_QWORD*)(v41 + 440),
                                       (__int64)(v40 - 17));
              (*(void (**)(_QWORD*))(*v43 + 8LL))(v43);
              if (--v38 == 0) {
                break;
              }
            }
          }
        }
        result = *(_QWORD*)(v3 + 72);
        if ((_QWORD*)result != v2) {
          do {
            v44 = *(_QWORD*)(result + 8);
            (*(void (**)(void*))(*(_QWORD*)(result - 136) + 112LL))(
                (void*)(result - 136));
            result = v44;
          } while ((_QWORD*)v44 != v2);
        }
        return result;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v47_.v48 + v28))((__int64)v47_.v48);
    goto LABEL_49;
  }
  v29 = *(_QWORD**)(v3 + 72);
  if (v29 != v2) {
    do {
      v30 = (_QWORD*)v29[1];
      if (*((_BYTE*)v29 + 208) == 1) {
        *(_BYTE*)(v3 + 96) = 1;
      }
      v31 = v29 - 17;
      result = (*(__int64 (**)(_QWORD*))(*(v29 - 17) + 96LL))(v29 - 17);
      if ((result & 1) == 0) {
        v47_.v47[0] = v8;
        if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v31 + 24LL))(v29 - 17,
                                                              v47_.v47) &
             1) != 0) {
          result = (*(__int64 (**)(_QWORD*))(*v31 + 112LL))(v29 - 17);
        }
        else {
          v32 = eft_g_effectSystem;
          if (v29 !=
              (_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem +
                                                         296) -
                                              24LL) +
                                   8LL * *((unsigned int*)v29 + 10)) +
                        64LL)) {
            v33 = (__int64*)v29[1];
            v34 = *v33;
            *(_QWORD*)(*v29 + 8LL) = v33;
            *v33 = *v29;
            *(_QWORD*)(v34 + 8) = v29;
            *v29 = v34;
          }
          GameRoutine_18e4620_alt1(*(_QWORD*)(v32 + 440), (__int64)(v29 - 17));
          result = (*(__int64 (**)(_QWORD*))(*v31 + 8LL))(v29 - 17);
        }
      }
      v29 = v30;
    } while (v30 != v2);
    v29 = *(_QWORD**)(v3 + 72);
  }
  if (v29 != v2) {
    do {
      v36 = *(v29 - 17);
      v35 = v29 - 17;
      v37 = (_QWORD*)v35[18];
      result = (*(__int64 (**)(_QWORD*))(v36 + 112))(v35);
      v29 = v37;
    } while (v37 != v2);
  }
  return result;
}

_QWORD* Stack_bcc040(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 i;
  unsigned __int64 v4;
  unsigned __int64 j;
  __int64 v6;
  _QWORD* k;
  __int64* m;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;

  v1 = result;
  if (*(_BYTE*)result == 1) {
    *(_BYTE*)result = 0;
    v2 = result + 6;
    for (i = result[7]; (_QWORD*)i != v2; i = *(_QWORD*)(i + 8)) {
      v4 = *(unsigned int*)(i + 36);
      *(_BYTE*)(i + 34) = 0;
      if ((_DWORD)v4 != 0) {
        for (j = 0; j < v4; ++j) {
          result = *(_QWORD**)(i + 40 + 8 * j);
          if (result != nullptr) {
            result =
                (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 64LL))(result);
            v4 = *(unsigned int*)(i + 36);
          }
        }
      }
    }
  }
  else {
    v6 = result[7];
    for (k = result + 6; (_QWORD*)v6 != k; v6 = v1[7]) {
      result = (_QWORD*)Config_bc7840(eft_g_effectSystem, v6);
    }
    for (m = (__int64*)v1[9]; m != v1 + 8; m = (__int64*)v1[9]) {
      v10 = eft_g_effectSystem;
      if (m != (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem +
                                                           296) -
                                                24LL) +
                                     8LL * *((unsigned int*)m + 10)) +
                          64LL)) {
        v11 = (__int64*)m[1];
        v12 = *v11;
        *(_QWORD*)(*m + 8) = v11;
        *v11 = *m;
        *(_QWORD*)(v12 + 8) = m;
        *m = v12;
      }
      v9 = m - 17;
      GameRoutine_18e4620_alt2(*(_QWORD*)(v10 + 440), (__int64)(m - 17));
      result = (_QWORD*)(*(__int64 (**)(__int64*))(*v9 + 8))(v9);
    }
  }
  return result;
}

__int64 Stack_bcc1a0(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = *(_QWORD*)(result + 72);
  v3 = result + 64;
  v5 = result;
  v6 = eft_g_effectSystem_ptr[0];
  if (v2 != result + 64) {
    do {
      v8 = *(_QWORD*)(v2 + 8);
      if (*(_DWORD*)(v2 + 284) == 0) {
        result = eft_EmitterSetHandle_Get_5b6700(v2 + 336);
        if (result != 0 && *(_DWORD*)(result + 48) == a2) {
          *(_QWORD*)(result + 448) = 0;
          result = eft_EmitterSet_Release();
        }
      }
      v9 = *(_QWORD*)(v2 + 16);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 24);
        if (v10 != 0 && (*(_QWORD*)(v10 + 8 * ((__int64)a2 >> 6) + 120) &
                         (1LL << a2)) != 0) {
          v11 = *v6;
          if (v2 != *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v6 + 296) - 24LL) +
                               8LL * *(unsigned int*)(v2 + 40)) +
                        64LL) {
            v12 = *(__int64**)(v2 + 8);
            v13 = *v12;
            *(_QWORD*)(*(_QWORD*)v2 + 8LL) = v12;
            *v12 = *(_QWORD*)v2;
            *(_QWORD*)(v13 + 8) = v2;
            *(_QWORD*)v2 = v13;
          }
          v7 = v2 - 136;
          GameRoutine_18e4620(*(_QWORD*)(v11 + 440), v7);
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
        }
      }
      v2 = v8;
    } while (v8 != v3);
  }
  v14 = *(_QWORD*)(v5 + 56);
  v15 = v5 + 48;
  if (v14 != v5 + 48) {
    v16 = (__int64)a2 >> 6;
    v17 = 1LL << a2;
    do {
      v18 = *(_QWORD*)(v14 + 8);
      v19 = *(_QWORD*)(v14 + 24);
      if (v19 != 0 && (*(_QWORD*)(v19 + 8 * v16 + 120) & v17) != 0) {
        result = Config_bc7840(*v6, v14);
      }
      v14 = v18;
    } while (v18 != v15);
  }
  return result;
}

__int64 eft_Stack_calcEmitter_lambda0_Invoke(__int64 result, __int64 a2,
                                             atomic_uint* a3)
{
  __int64 v3;
  _QWORD******* v4;
  unsigned int v5;
  signed int add;
  _QWORD******* v7;
  __int64 v9;
  signed int v10;
  int v11;
  unsigned int v12;
  int i;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v21;

  v3 = *(_QWORD*)(result + 8);
  v4 = (_QWORD*******)(v3 + 64);
  if ((signed __int32)*(_DWORD*)(result + 16) /
          (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                   *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                  2) &
                 0xFFFFFFFE) +
                2) <=
      1) {
    v5 = 1;
  }
  else {
    v5 = (signed __int32)*(_DWORD*)(result + 16) /
         (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                  *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                 2) &
                0xFFFFFFFE) +
               2);
  }
  add = atomic_fetch_add(a3, v5);
  v7 = *(_QWORD********)(v3 + 72);
  if (add < (signed __int32)*(_DWORD*)(result + 16) && v7 != v4) {
    v9 = result;
    v10 = 0;
    v11 = 0;
    while (1) {
      v12 = add - v11;
      if (add - v11 >= 0) {
        if (v12 != 0) {
          for (i = v12 & 7; i != 0; --i) {
            v7 = (_QWORD*******)v7[1];
            --v12;
          }
          if ((unsigned int)(v11 - add) <= 0xFFFFFFF8) {
            v14 = v12 - 1;
            do {
              v14 -= 8;
              v7 = *(_QWORD********)(v7[1][1][1][1][1][1][1] + 8LL);
            } while (v14 < 0xFFFFFFFE);
          }
        }
        goto LABEL_22;
      }
      v15 = ((_BYTE)v11 - (_BYTE)add) & 7;
      if ((((_BYTE)v11 - (_BYTE)add) & 7) != 0) {
        break;
      }
      v16 = add - v11;
      if (v12 <= 0xFFFFFFF8) {
        goto LABEL_21;
      }
    LABEL_22:
      if (v7 == v4) {
        v11 = add;
      }
      else {
        v17 = 1;
        do {
          if (*((_BYTE*)v7 + 208) == 1) {
            *(_BYTE*)(v3 + 96) = 1;
          }
          result = ((__int64 (*)(_QWORD*******))(*(v7 - 17))[12])(v7 - 17);
          if ((result & 1) == 0) {
            v21 = *(_QWORD*)(v9 + 32);
            result = ((__int64 (*)(_QWORD*******, __int64*))(*(v7 - 17))[3])(
                v7 - 17, &v21);
            if ((result & 1) == 0) {
              ++v10;
              *((_BYTE*)v7 + 137) = 1;
            }
          }
          v7 = (_QWORD*******)v7[1];
          v18 = v17 + 1;
        } while (v7 != v4 && v17++ < v5);
        v11 = add + v18 - 1;
      }
      v5 = (v5 + 1) >> 1;
      add = atomic_fetch_add(a3, v5);
      if (add >= (signed __int32)*(_DWORD*)(v9 + 16) || v7 == v4) {
        if (v10 >= 1) {
          atomic_fetch_add(*(atomic_uint* volatile*)(v9 + 24), v10);
        }
        return result;
      }
    }
    v16 = add - v11;
    do {
      v7 = (_QWORD*******)*v7;
      ++v16;
      --v15;
    } while (v15 != 0);
    if (v12 > 0xFFFFFFF8) {
      goto LABEL_22;
    }
    do {
    LABEL_21:
      v16 += 8;
      v7 = *(_QWORD********)*******v7;
    } while (v16 != 0);
    goto LABEL_22;
  }
  return result;
}

#pragma GCC visibility pop
