#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*wld_EffectModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* EffectModule_Destructor(_QWORD* result);
__int64 EffectModule_Unknown5(__int64 result);
_QWORD* EffectModule_bd3360(_QWORD* result, __int64* a2);
__int64 EffectModule_bd37c0(__int64 result);

_QWORD* EffectModule_Destructor(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[2];

  v1 = result[3];
  v2 = result[4];
  v3 = result;
  for (*result = wld_EffectModule_vtable; v1 != v2; v1 += 128) {
    v4 = *(_QWORD*)(v1 + 8);
    v5 = *(_QWORD*)(v1 + 16);
    if (v5 != 0) {
      v6 = (atomic_ullong*)(v5 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      v21[0] = v4;
      v21[1] = v5;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      result = (_QWORD*)GameRoutine_14a1390(v21, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          goto LABEL_10;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v5);
        if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        LABEL_10:
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
    else {
      v21[0] = *(_QWORD*)(v1 + 8);
      v21[1] = 0;
      result = (_QWORD*)GameRoutine_14a1390(v21, 1);
    }
  }
  v7 = (__int64*)v3[6];
  v8 = (__int64*)v3[7];
  if (v7 != v8) {
    while (1) {
      v9 = *v7;
      v10 = v7[1];
      if (v10 != 0) {
        v11 = (atomic_ullong*)(v10 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
        v21[0] = v9;
        v21[1] = v10;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
        result = (_QWORD*)GameRoutine_14a1390(v21, 1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_20;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v10);
          if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_20:
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            result = (_QWORD*)std___1___shared_weak_count___release_weak(v10);
          }
        }
      }
      else {
        v21[0] = *v7;
        v21[1] = 0;
        result = (_QWORD*)GameRoutine_14a1390(v21, 1);
      }
      v7 += 2;
      if (v7 == v8) {
        v7 = (__int64*)v3[6];
        break;
      }
    }
  }
  if (v7 != nullptr) {
    v12 = (__int64*)v3[7];
    if (v7 == v12) {
      goto LABEL_30;
    }
    do {
      v13 = *(v12 - 1);
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v13);
      }
      v12 -= 2;
    } while (v12 != v7);
    v14 = v3[6];
    v3[7] = v7;
    if (v14 != 0) {
    LABEL_30:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    }
  }
  v16 = v3[3];
  if (v16 != 0) {
    v17 = v3[4];
    if (v16 == v17) {
      goto LABEL_41;
    }
    do {
      v18 = *(_QWORD*)(v17 - 112);
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v18);
      }
      v17 -= 128;
    } while (v17 != v16);
    v19 = v3[3];
    v3[4] = v16;
    if (v19 != 0) {
    LABEL_41:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    }
  }
  return result;
}

__int64 EffectModule_Unknown5(__int64 result)
{
  int v1;
  int v2;
  float v3;
  float v4;
  __int64 v5;
  __int64 v6;
  float v7;
  __int64* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
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
  float v26;
  __int64* v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
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

  v1 = *(_DWORD*)(result + 84);
  if (v1 == 0) {
    return result;
  }
  v2 = *(_DWORD*)(result + 84);
  v3 = *(float*)(result + 80) -
       *(float*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 496LL) + 16LL);
  *(float*)(result + 80) = v3;
  if (v3 <= 0.0) {
    v3 = 0.0;
    v2 = 0;
    *(_QWORD*)(result + 80) = 0;
  }
  v4 = v3 / *(float*)(result + 76);
  if (v1 == 2) {
    v24 = *(_QWORD*)(result + 24);
    v25 = *(_QWORD*)(result + 32);
    if (v24 == v25) {
    LABEL_94:
      if (v2 != 0) {
        return result;
      }
    LABEL_95:
      *(_BYTE*)(result + 72) = 0;
      return result;
    }
    v26 = v4 * v4;
    while (1) {
      v27 = *(__int64**)(v24 + 8);
      v28 = *v27;
      if (*v27 != 0 && *(_DWORD*)(v28 + 16) == *((_DWORD*)v27 + 2)) {
        v29 = *(_DWORD*)(v28 + 36);
        if (v29 >= 1) {
          if ((unsigned int)v29 >= 8) {
            v32 = (_QWORD*)(v28 + 48);
            v33 = 0;
            do {
              v34 = v33;
              if (v33 < *(int*)(v28 + 36)) {
                v35 = *(v32 - 1);
                if (v35 != 0) {
                  *(float*)(v35 + 220) = v26;
                }
              }
              if (v34 + 1 < *(int*)(v28 + 36) && *v32 != 0) {
                *(float*)(*v32 + 220LL) = v26;
              }
              if (v34 + 2 < *(int*)(v28 + 36)) {
                v36 = v32[1];
                if (v36 != 0) {
                  *(float*)(v36 + 220) = v26;
                }
              }
              if (v34 + 3 < *(int*)(v28 + 36)) {
                v37 = v32[2];
                if (v37 != 0) {
                  *(float*)(v37 + 220) = v26;
                }
              }
              if (v34 + 4 < *(int*)(v28 + 36)) {
                v38 = v32[3];
                if (v38 != 0) {
                  *(float*)(v38 + 220) = v26;
                }
              }
              if (v34 + 5 < *(int*)(v28 + 36)) {
                v39 = v32[4];
                if (v39 != 0) {
                  *(float*)(v39 + 220) = v26;
                }
              }
              if (v34 + 6 < *(int*)(v28 + 36)) {
                v40 = v32[5];
                if (v40 != 0) {
                  *(float*)(v40 + 220) = v26;
                }
              }
              if (v34 + 7 < *(int*)(v28 + 36)) {
                v41 = v32[6];
                if (v41 != 0) {
                  *(float*)(v41 + 220) = v26;
                }
              }
              v32 += 8;
              v33 = v34 + 8;
            } while (v34 + 8 != (v29 & 0x7FFFFFF8));
            v30 = v34 + 8;
            v31 = v29 & 7;
            if (v31 == 0) {
              goto LABEL_51;
            }
            do {
            LABEL_87:
              if (v30 < *(int*)(v28 + 36)) {
                v42 = *(_QWORD*)(v28 + 40 + 8 * v30);
                if (v42 != 0) {
                  *(float*)(v42 + 220) = v26;
                }
              }
              ++v30;
              --v31;
            } while (v31 != 0);
            goto LABEL_51;
          }
          v30 = 0;
          v31 = v29 & 7;
          if (v31 != 0) {
            goto LABEL_87;
          }
        }
      }
      else {
        *(_BYTE*)(v24 + 36) = 1;
      }
    LABEL_51:
      v24 += 128;
      if (v24 == v25) {
        v2 = *(_DWORD*)(result + 84);
        goto LABEL_94;
      }
    }
  }
  if (v1 != 1) {
    return result;
  }
  v5 = *(_QWORD*)(result + 24);
  v6 = *(_QWORD*)(result + 32);
  if (v5 == v6) {
    goto LABEL_91;
  }
  v7 = (float)(1.0 - v4) * (float)(1.0 - v4);
  do {
    v8 = *(__int64**)(v5 + 8);
    v9 = *v8;
    if (*v8 == 0 || *(_DWORD*)(v9 + 16) != *((_DWORD*)v8 + 2)) {
      *(_BYTE*)(v5 + 36) = 1;
      goto LABEL_9;
    }
    v10 = *(_DWORD*)(v9 + 36);
    if (v10 >= 1) {
      if ((unsigned int)v10 < 8) {
        v11 = 0;
        v12 = v10 & 7;
        if (v12 == 0) {
          goto LABEL_9;
        }
        do {
        LABEL_45:
          if (v11 < *(int*)(v9 + 36)) {
            v23 = *(_QWORD*)(v9 + 40 + 8 * v11);
            if (v23 != 0) {
              *(float*)(v23 + 220) = v7;
            }
          }
          ++v11;
          --v12;
        } while (v12 != 0);
        goto LABEL_9;
      }
      v13 = (_QWORD*)(v9 + 48);
      v14 = 0;
      do {
        v15 = v14;
        if (v14 < *(int*)(v9 + 36)) {
          v16 = *(v13 - 1);
          if (v16 != 0) {
            *(float*)(v16 + 220) = v7;
          }
        }
        if (v15 + 1 < *(int*)(v9 + 36) && *v13 != 0) {
          *(float*)(*v13 + 220LL) = v7;
        }
        if (v15 + 2 < *(int*)(v9 + 36)) {
          v17 = v13[1];
          if (v17 != 0) {
            *(float*)(v17 + 220) = v7;
          }
        }
        if (v15 + 3 < *(int*)(v9 + 36)) {
          v18 = v13[2];
          if (v18 != 0) {
            *(float*)(v18 + 220) = v7;
          }
        }
        if (v15 + 4 < *(int*)(v9 + 36)) {
          v19 = v13[3];
          if (v19 != 0) {
            *(float*)(v19 + 220) = v7;
          }
        }
        if (v15 + 5 < *(int*)(v9 + 36)) {
          v20 = v13[4];
          if (v20 != 0) {
            *(float*)(v20 + 220) = v7;
          }
        }
        if (v15 + 6 < *(int*)(v9 + 36)) {
          v21 = v13[5];
          if (v21 != 0) {
            *(float*)(v21 + 220) = v7;
          }
        }
        if (v15 + 7 < *(int*)(v9 + 36)) {
          v22 = v13[6];
          if (v22 != 0) {
            *(float*)(v22 + 220) = v7;
          }
        }
        v13 += 8;
        v14 = v15 + 8;
      } while (v15 + 8 != (v10 & 0x7FFFFFF8));
      v11 = v15 + 8;
      v12 = v10 & 7;
      if (v12 != 0) {
        goto LABEL_45;
      }
    }
  LABEL_9:
    v5 += 128;
  } while (v5 != v6);
  v2 = *(_DWORD*)(result + 84);

LABEL_91:
  if (v2 == 0) {
    goto LABEL_95;
  }
  return result;
}

_QWORD* EffectModule_bd3360(_QWORD* result, __int64* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v4 = (_QWORD*)result[3];
  v2 = (_QWORD*)result[4];
  v3 = result + 3;
  v5 = *a2;
  v6 = a2[1];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 != v2) {
    while (v4[1] != v5) {
      v4 += 16;
      if (v4 == v2) {
        v4 = v2;
        break;
      }
    }
  }
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v7 = result;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    result = v7;
  }
  if (v4 != (_QWORD*)result[4]) {
    v8 = v4[1];
    v9 = v4[2];
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v30 = v9;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v30 = 0;
    }
    v29 = v8;
    GameRoutine_14a1390(&v29, 1);
    v10 = v30;
    if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    v11 = v3;
    v12 = v4;
    v13 = (_QWORD*)v3[1];
    v14 = v4;
    v15 = v11;
    if (v14 + 16 == v13) {
      v16 = v12;
      if (v12 == v13) {
      LABEL_41:
        v15[1] = v16;
        return v14;
      }
    }
    else {
      v16 = v12;
      do {
        v24 = v16[17];
        v25 = v16[18];
        v26 = v16;
        *v16 = v16[16];
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
        }
        v27 = v16[2];
        v26[1] = v24;
        v26[2] = v25;
        if (v27 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
            std___1___shared_weak_count___release_weak(v27);
          }
          v25 = v26[2];
        }
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
            std___1___shared_weak_count___release_weak(v25);
          }
        }
        v17 = v26[28];
        v18 = v26[29];
        v16 = v26 + 16;
        v26[11] = v26[27];
        v26[12] = v17;
        v19 = *((_BYTE*)v26 + 240);
        v26[13] = v18;
        *((_BYTE*)v26 + 112) = v19;
        v20 = v26[24];
        v26[7] = v26[23];
        v26[8] = v20;
        v21 = v26[26];
        v26[9] = v26[25];
        v26[10] = v21;
        v22 = v26[20];
        v26[3] = v26[19];
        v26[4] = v22;
        v23 = v26[22];
        v26[5] = v26[21];
        v26[6] = v23;
      } while (v26 + 32 != v13);
      v13 = (_QWORD*)v15[1];
      if (v16 == v13) {
        goto LABEL_41;
      }
    }
    do {
      v28 = *(v13 - 14);
      if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
        std___1___shared_weak_count___release_weak(v28);
      }
      v13 -= 16;
    } while (v13 != v16);
    goto LABEL_41;
  }
  return result;
}

__int64 EffectModule_bd37c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64 v13;
  _QWORD v14[2];

  v1 = *(_QWORD*)(result + 24);
  v2 = *(_QWORD*)(result + 32);
  v3 = (_QWORD*)result;
  if (v1 != v2) {
    while (1) {
      v4 = *(_QWORD*)(v1 + 8);
      v5 = *(_QWORD*)(v1 + 16);
      if (v5 != 0) {
        v6 = (atomic_ullong*)(v5 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        v14[0] = v4;
        v14[1] = v5;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                  memory_order_relaxed);
        result = GameRoutine_14a1390(v14, 1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_10;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          result = std___1___shared_weak_count___release_weak(v5);
          if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_10:
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            result = std___1___shared_weak_count___release_weak(v5);
          }
        }
      }
      else {
        v14[0] = *(_QWORD*)(v1 + 8);
        v14[1] = 0;
        result = GameRoutine_14a1390(v14, 1);
      }
      v1 += 128;
      if (v1 == v2) {
        v1 = v3[3];
        v2 = v3[4];
        break;
      }
    }
  }
  while (v2 != v1) {
    v7 = *(_QWORD*)(v2 - 112);
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      result = std___1___shared_weak_count___release_weak(v7);
    }
    v2 -= 128;
  }
  v3[4] = v1;
  v8 = (__int64*)v3[6];
  v9 = (__int64*)v3[7];
  if (v8 != v9) {
    while (1) {
      v10 = *v8;
      v11 = v8[1];
      if (v11 != 0) {
        v12 = (atomic_ullong*)(v11 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        v14[0] = v10;
        v14[1] = v11;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        result = GameRoutine_14a1390(v14, 1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_27;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = std___1___shared_weak_count___release_weak(v11);
          if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_27:
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            result = std___1___shared_weak_count___release_weak(v11);
          }
        }
      }
      else {
        v14[0] = *v8;
        v14[1] = 0;
        result = GameRoutine_14a1390(v14, 1);
      }
      v8 += 2;
      if (v8 == v9) {
        v8 = (__int64*)v3[6];
        v9 = (__int64*)v3[7];
        break;
      }
    }
  }
  while (v9 != v8) {
    v13 = *(v9 - 1);
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      result = std___1___shared_weak_count___release_weak(v13);
    }
    v9 -= 2;
  }
  v3[7] = v8;
  return result;
}

#pragma GCC visibility pop
