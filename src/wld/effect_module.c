#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*wld_EffectModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD*
EffectModule_Destructor_alt1(_QWORD* result) __asm__("EffectModule_Destructor");
__int64 EffectModule_Unknown5(__int64 result);
_QWORD* EffectModule_bd3360(_QWORD* result, __int64* a2);
__int64 EffectModule_bd37c0(__int64 result);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 GameRoutine_bd2320(_QWORD, _QWORD, long double, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212ea18;
extern int* GameData_212df08;
extern int* GameData_212ea10;
long double GameRoutine_14a1a30(_QWORD, long double, long double);
long double GameRoutine_14a3920(void);
void EffectModule_Unknown7(__int64 a1, long double a2, long double a3);
__int64 GameHr_14a1390(__int64*, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void EffectModule_Destructor(_QWORD* a1);

void EffectModule_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
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
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21[2];

  v1 = a1[3];
  v2 = a1[4];
  for (*a1 = wld_EffectModule_vtable; v1 != v2; v1 += 128) {
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
      GameHr_14a1390(v21, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          goto LABEL_10;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
        if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        LABEL_10:
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak_alt1(v5);
        }
      }
    }
    else {
      v21[0] = *(_QWORD*)(v1 + 8);
      v21[1] = 0;
      GameHr_14a1390(v21, 1);
    }
  }
  v7 = (__int64*)a1[6];
  v8 = (__int64*)a1[7];
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
        GameHr_14a1390(v21, 1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_20;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak_alt1(v10);
          if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_20:
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak_alt1(v10);
          }
        }
      }
      else {
        v21[0] = *v7;
        v21[1] = 0;
        GameHr_14a1390(v21, 1);
      }
      v7 += 2;
      if (v7 == v8) {
        v7 = (__int64*)a1[6];
        break;
      }
    }
  }
  if (v7 != nullptr) {
    v12 = (__int64*)a1[7];
    if (v7 == v12) {
      goto LABEL_30;
    }
    do {
      v13 = *(v12 - 1);
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
      v12 -= 2;
    } while (v12 != v7);
    v14 = (__int64*)a1[6];
    a1[7] = v7;
    v7 = v14;
    if (v14 != nullptr) {
    LABEL_30:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v7);
    }
  }
  v16 = a1[3];
  if (v16 != 0) {
    v17 = a1[4];
    if (v16 == v17) {
      goto LABEL_41;
    }
    do {
      v18 = *(_QWORD*)(v17 - 112);
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt1(v18);
      }
      v17 -= 128;
    } while (v17 != v16);
    v19 = a1[3];
    a1[4] = v16;
    v16 = v19;
    if (v19 != 0) {
    LABEL_41:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v16);
    }
  }
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

void EffectModule_Unknown7(__int64 a1, long double a2, long double a3)
{
  __int64 v3;
  _BOOL4 v5;
  unsigned __int8 explicit;
  int* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  bool v12;
  unsigned __int8 v13;
  int* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  __int64* v23;
  __int64** v24;
  __int64 v25;
  float* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  bool v33;
  unsigned int v34;
  __int64 v35;
  _DWORD* v36;
  bool v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  float* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  char v74;
  __int128 v75;
  __int128 v76;
  __int128 v77;
  __int128 v78;
  __int64* v79;
  __int64 v80;
  unsigned int v81;
  unsigned int i;
  __int64 v83;
  long double v84;
  float32x4_t v85;
  __int64* v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 j;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  long double v108;
  _BOOL4 v109;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = false;
  if (*(_BYTE*)(v3 + 289) == 1 && (*(_BYTE*)(v3 + 288) & 1) != 0) {
    if ((*(_BYTE*)(v3 + 300) & 0xFD) == 1) {
      v5 = false;
    }
    else {
      v105 = *(_QWORD*)(a1 + 8);
      do {
        v105 = *(_QWORD*)(v105 + 736);
        v5 = v105 == 0;
      } while (v105 != 0 && *(_BYTE*)(v105 + 289) == 1 &&
               *(_BYTE*)(v105 + 288) == 1 &&
               (*(_BYTE*)(v105 + 300) & 0xFD) != 1);
    }
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v7 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
    *v7 = (unsigned int)wld_Crc32(0, (unsigned __int8*)"ModelModule", 11);
    __cxa_guard_release(GameData_212df10);
  }
  v8 = *(_QWORD*)(v3 + 512);
  v9 = v8;
  do {
    if (v9 == *(_QWORD*)(v3 + 504)) {
      goto LABEL_21;
    }
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    v8 -= 16;
  } while (v10 != *v7);
  if (*(_QWORD*)(v3 + 512) == v8) {
  LABEL_21:
    v12 = false;
    v11 = 0;
  LABEL_22:
    v19 = false;
    v18 = 1;
    goto LABEL_23;
  }
  v11 = *(_QWORD*)(v8 + 8);
  if (v11 == 0) {
    v12 = false;
    goto LABEL_22;
  }
  *(float*)&a2 = fminf(*(float*)(v11 + 120), *(float*)(v11 + 124));
  LODWORD(a3) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0));
  v12 = *(float*)(v11 + 128) > 0.0 || *(float*)&a2 < 0x1.0000000000000p+0;
  if (*(_QWORD*)(v11 + 32) == 0) {
    goto LABEL_22;
  }
  v13 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea18,
                             memory_order_acquire);
  v14 = GameData_212ea10;
  if ((v13 & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212ea18) != 0) {
    *v14 = (unsigned int)wld_Crc32(
        0, (unsigned __int8*)"InstancedObjectCtrlModule", 25);
    __cxa_guard_release(GameData_212ea18);
  }
  v15 = *(_QWORD*)(v3 + 512);
  v16 = v15;
  while (v16 != *(_QWORD*)(v3 + 504)) {
    v17 = *(_DWORD*)(v16 - 16);
    v16 -= 16;
    v15 -= 16;
    if (v17 == *v14) {
      if (*(_QWORD*)(v3 + 512) != v15) {
        v18 = 0;
        v19 = *(_QWORD*)(v15 + 8) == 0;
        goto LABEL_23;
      }
      break;
    }
  }
  v18 = 0;
  v19 = true;
LABEL_23:
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(_QWORD*)(a1 + 32);
  if (v20 == v21) {
    goto LABEL_190;
  }
  v22 = (_DWORD*)(v11 + 120);
  do {
    v24 = (__int64**)(v20 + 8);
    v23 = *(__int64**)(v20 + 8);
    v25 = *v23;
    if (*v23 == 0 || *(_DWORD*)(v25 + 16) != *((_DWORD*)v23 + 2)) {
      *(_BYTE*)(v20 + 36) = 1;
      goto LABEL_26;
    }
    if (*(_BYTE*)(v20 + 112) == 1 && (*(_BYTE*)(a1 + 72) & 1) == 0) {
      *(_BYTE*)(v25 + 33) = v5;
    }
    if ((v18 & 1) == 0) {
      v27 = *(_QWORD*)(v11 + 32);
      v28 = *(int*)(v20 + 24);
      v29 = *(_QWORD*)(v27 + 368);
      v30 = *(_QWORD*)(v27 + 376);
      if (v29 == v30) {
        v31 = -1;
      }
      else {
        v31 = *(_DWORD*)(v29 + 4 * v28);
      }
      v32 = *(_DWORD*)(v11 + 176);
      v34 = v31 - v32;
      v33 = v31 < v32;
      v35 = *(_QWORD*)(v11 + 184);
      v36 = (_DWORD*)(v35 + 56LL * v34);
      if (v33) {
        v36 = v22;
      }
      LODWORD(a2) = *v36;
      LODWORD(a3) = v36[1];
      v37 = *(float*)v36 < 0x1.0000000000000p+0 ||
            *(float*)&a3 < 0x1.0000000000000p+0;
      if (v37 || (LODWORD(a2) = v36[2], *(float*)&a2 > 0.0)) {
        if (v29 == v30) {
          v42 = -1;
        }
        else {
          v42 = *(_DWORD*)(v29 + 4 * v28);
        }
        v33 = v42 < v32;
        v43 = (float*)(v35 + 56LL * (unsigned int)(v42 - v32));
        if (v33) {
          v26 = (float*)v22;
        }
        else {
          v26 = v43;
        }
        goto LABEL_56;
      }
    LABEL_45:
      if (*(_BYTE*)(a1 + 88) == 1) {
        v38 = **v24;
        v39 = *(_DWORD*)(v38 + 36);
        if (v39 >= 1) {
          if ((unsigned int)v39 >= 8) {
            v60 = (__int64*)(v38 + 48);
            v61 = 0;
            do {
              v62 = v61;
              if (v61 < *(int*)(v38 + 36)) {
                v63 = *(v60 - 1);
                if (v63 != 0) {
                  if ((*(_BYTE*)(v63 + 444) & 1) == 0) {
                    *(_BYTE*)(v63 + 444) = 1;
                  }
                  *(_BYTE*)(v63 + 432) = 1;
                  *(_QWORD*)(v63 + 436) = 1065353216;
                }
              }
              if (v62 + 1 < *(int*)(v38 + 36)) {
                v64 = *v60;
                if (*v60 != 0) {
                  if ((*(_BYTE*)(v64 + 444) & 1) == 0) {
                    *(_BYTE*)(v64 + 444) = 1;
                  }
                  *(_BYTE*)(v64 + 432) = 1;
                  *(_QWORD*)(v64 + 436) = 1065353216;
                }
              }
              if (v62 + 2 < *(int*)(v38 + 36)) {
                v65 = v60[1];
                if (v65 != 0) {
                  if ((*(_BYTE*)(v65 + 444) & 1) == 0) {
                    *(_BYTE*)(v65 + 444) = 1;
                  }
                  *(_BYTE*)(v65 + 432) = 1;
                  *(_QWORD*)(v65 + 436) = 1065353216;
                }
              }
              if (v62 + 3 < *(int*)(v38 + 36)) {
                v66 = v60[2];
                if (v66 != 0) {
                  if ((*(_BYTE*)(v66 + 444) & 1) == 0) {
                    *(_BYTE*)(v66 + 444) = 1;
                  }
                  *(_BYTE*)(v66 + 432) = 1;
                  *(_QWORD*)(v66 + 436) = 1065353216;
                }
              }
              if (v62 + 4 < *(int*)(v38 + 36)) {
                v67 = v60[3];
                if (v67 != 0) {
                  if ((*(_BYTE*)(v67 + 444) & 1) == 0) {
                    *(_BYTE*)(v67 + 444) = 1;
                  }
                  *(_BYTE*)(v67 + 432) = 1;
                  *(_QWORD*)(v67 + 436) = 1065353216;
                }
              }
              if (v62 + 5 < *(int*)(v38 + 36)) {
                v68 = v60[4];
                if (v68 != 0) {
                  if ((*(_BYTE*)(v68 + 444) & 1) == 0) {
                    *(_BYTE*)(v68 + 444) = 1;
                  }
                  *(_BYTE*)(v68 + 432) = 1;
                  *(_QWORD*)(v68 + 436) = 1065353216;
                }
              }
              if (v62 + 6 < *(int*)(v38 + 36)) {
                v69 = v60[5];
                if (v69 != 0) {
                  if ((*(_BYTE*)(v69 + 444) & 1) == 0) {
                    *(_BYTE*)(v69 + 444) = 1;
                  }
                  *(_BYTE*)(v69 + 432) = 1;
                  *(_QWORD*)(v69 + 436) = 1065353216;
                }
              }
              if (v62 + 7 < *(int*)(v38 + 36)) {
                v70 = v60[6];
                if (v70 != 0) {
                  if ((*(_BYTE*)(v70 + 444) & 1) == 0) {
                    *(_BYTE*)(v70 + 444) = 1;
                  }
                  *(_BYTE*)(v70 + 432) = 1;
                  *(_QWORD*)(v70 + 436) = 1065353216;
                }
              }
              v60 += 8;
              v61 = v62 + 8;
            } while (v62 + 8 != (v39 & 0x7FFFFFF8));
            v40 = v62 + 8;
            v41 = v39 & 7;
            if (v41 == 0) {
              goto LABEL_161;
            }
          }
          else {
            v40 = 0;
            v41 = v39 & 7;
            if (v41 == 0) {
              goto LABEL_161;
            }
          }
          do {
            if (v40 < *(int*)(v38 + 36)) {
              v71 = *(_QWORD*)(v38 + 40 + 8 * v40);
              if (v71 != 0) {
                if ((*(_BYTE*)(v71 + 444) & 1) == 0) {
                  *(_BYTE*)(v71 + 444) = 1;
                }
                *(_BYTE*)(v71 + 432) = 1;
                *(_QWORD*)(v71 + 436) = 1065353216;
              }
            }
            ++v40;
            --v41;
          } while (v41 != 0);
        }
      }
    LABEL_161:
      v12 = false;
      goto LABEL_162;
    }
    v26 = (float*)v22;
    if (!v12) {
      goto LABEL_45;
    }
  LABEL_56:
    v44 = **v24;
    v45 = *(_DWORD*)(v44 + 36);
    if (v45 >= 1) {
      *(float*)&a2 = v26[1] * *v26;
      *(float*)&a3 = v26[2];
      if ((unsigned int)v45 >= 8) {
        v48 = (__int64*)(v44 + 48);
        v49 = 0;
        do {
          v50 = v49;
          if (v49 < *(int*)(v44 + 36)) {
            v51 = *(v48 - 1);
            if (v51 != 0) {
              if ((*(_BYTE*)(v51 + 444) & 1) == 0) {
                *(_BYTE*)(v51 + 444) = 1;
              }
              *(_BYTE*)(v51 + 432) = 1;
              *(_DWORD*)(v51 + 440) = LODWORD(a3);
              *(_DWORD*)(v51 + 436) = LODWORD(a2);
            }
          }
          if (v50 + 1 < *(int*)(v44 + 36)) {
            v52 = *v48;
            if (*v48 != 0) {
              if ((*(_BYTE*)(v52 + 444) & 1) == 0) {
                *(_BYTE*)(v52 + 444) = 1;
              }
              *(_BYTE*)(v52 + 432) = 1;
              *(_DWORD*)(v52 + 440) = LODWORD(a3);
              *(_DWORD*)(v52 + 436) = LODWORD(a2);
            }
          }
          if (v50 + 2 < *(int*)(v44 + 36)) {
            v53 = v48[1];
            if (v53 != 0) {
              if ((*(_BYTE*)(v53 + 444) & 1) == 0) {
                *(_BYTE*)(v53 + 444) = 1;
              }
              *(_BYTE*)(v53 + 432) = 1;
              *(_DWORD*)(v53 + 440) = LODWORD(a3);
              *(_DWORD*)(v53 + 436) = LODWORD(a2);
            }
          }
          if (v50 + 3 < *(int*)(v44 + 36)) {
            v54 = v48[2];
            if (v54 != 0) {
              if ((*(_BYTE*)(v54 + 444) & 1) == 0) {
                *(_BYTE*)(v54 + 444) = 1;
              }
              *(_BYTE*)(v54 + 432) = 1;
              *(_DWORD*)(v54 + 440) = LODWORD(a3);
              *(_DWORD*)(v54 + 436) = LODWORD(a2);
            }
          }
          if (v50 + 4 < *(int*)(v44 + 36)) {
            v55 = v48[3];
            if (v55 != 0) {
              if ((*(_BYTE*)(v55 + 444) & 1) == 0) {
                *(_BYTE*)(v55 + 444) = 1;
              }
              *(_BYTE*)(v55 + 432) = 1;
              *(_DWORD*)(v55 + 440) = LODWORD(a3);
              *(_DWORD*)(v55 + 436) = LODWORD(a2);
            }
          }
          if (v50 + 5 < *(int*)(v44 + 36)) {
            v56 = v48[4];
            if (v56 != 0) {
              if ((*(_BYTE*)(v56 + 444) & 1) == 0) {
                *(_BYTE*)(v56 + 444) = 1;
              }
              *(_BYTE*)(v56 + 432) = 1;
              *(_DWORD*)(v56 + 440) = LODWORD(a3);
              *(_DWORD*)(v56 + 436) = LODWORD(a2);
            }
          }
          if (v50 + 6 < *(int*)(v44 + 36)) {
            v57 = v48[5];
            if (v57 != 0) {
              if ((*(_BYTE*)(v57 + 444) & 1) == 0) {
                *(_BYTE*)(v57 + 444) = 1;
              }
              *(_BYTE*)(v57 + 432) = 1;
              *(_DWORD*)(v57 + 440) = LODWORD(a3);
              *(_DWORD*)(v57 + 436) = LODWORD(a2);
            }
          }
          if (v50 + 7 < *(int*)(v44 + 36)) {
            v58 = v48[6];
            if (v58 != 0) {
              if ((*(_BYTE*)(v58 + 444) & 1) == 0) {
                *(_BYTE*)(v58 + 444) = 1;
              }
              *(_BYTE*)(v58 + 432) = 1;
              *(_DWORD*)(v58 + 440) = LODWORD(a3);
              *(_DWORD*)(v58 + 436) = LODWORD(a2);
            }
          }
          v48 += 8;
          v49 = v50 + 8;
        } while (v50 + 8 != (v45 & 0x7FFFFFF8));
        v46 = v50 + 8;
        v47 = v45 & 7;
        if (v47 == 0) {
          goto LABEL_110;
        }
        do {
        LABEL_106:
          if (v46 < *(int*)(v44 + 36)) {
            v59 = *(_QWORD*)(v44 + 40 + 8 * v46);
            if (v59 != 0) {
              if ((*(_BYTE*)(v59 + 444) & 1) == 0) {
                *(_BYTE*)(v59 + 444) = 1;
              }
              *(_BYTE*)(v59 + 432) = 1;
              *(_DWORD*)(v59 + 440) = LODWORD(a3);
              *(_DWORD*)(v59 + 436) = LODWORD(a2);
            }
          }
          ++v46;
          --v47;
        } while (v47 != 0);
        goto LABEL_110;
      }
      v46 = 0;
      v47 = v45 & 7;
      if (v47 != 0) {
        goto LABEL_106;
      }
    }
  LABEL_110:
    v12 = true;
  LABEL_162:
    v72 = *(_DWORD*)(v20 + 32);
    if ((*(_DWORD*)(v20 + 24) & 0x80000000) == 0 || v72 != 0) {
      v73 = v18;
      v74 = v72 == 0 || v19;
      if ((v74 & 1) == 0) {
        GameRoutine_bd2320(a1, v20, a2, a3);
        v79 = *(__int64**)(v20 + 8);
        v80 = *v79;
        if (*v79 != 0 && *(_DWORD*)(v80 + 16) == *((_DWORD*)v79 + 2)) {
          v81 = *(_DWORD*)(v80 + 36);
          if (v81 != 0) {
            for (i = 0; i < v81; ++i) {
              if ((int)v81 > (int)i) {
                v83 = *(_QWORD*)(v80 + 40 + 8LL * (int)i);
                if (v83 != 0) {
                  *(_OWORD*)(v83 + 64) = v75;
                  *(_OWORD*)(v83 + 80) = v76;
                  *(_WORD*)(v83 + 128) = 257;
                  *(_OWORD*)(v83 + 96) = v77;
                  *(_OWORD*)(v83 + 112) = v78;
                  v81 = *(_DWORD*)(v80 + 36);
                }
              }
            }
          }
        }
        a2 = GameRoutine_14a3920();
      }
      v108 = GameRoutine_14a1a30(v20 + 8, a2, a3);
      v85 =
          vsubq_f32(COERCE_FLOAT32X4_T(GameRoutine_14a1a30(v20 + 8, v108, v84)),
                    *(float32x4_t*)&v108);
      a2 = COERCE_LONG_DOUBLE(vmulq_f32(v85, v85));
      a3 = COERCE_LONG_DOUBLE(vextq_s8(*(int8x16_t*)&a2, *(int8x16_t*)&a2, 8u));
      *(float32x2_t*)&a2 = vadd_f32(*(float32x2_t*)&a3, *(float32x2_t*)&a2);
      *(float32x2_t*)&a2 = vpadd_f32(*(float32x2_t*)&a2, *(float32x2_t*)&a2);
      if (*(float*)&a2 <= 9.0) {
      LABEL_187:
        v18 = v73;
      }
      else {
        a2 = COERCE_LONG_DOUBLE(
            vmulq_f32(*(float32x4_t*)&v108, *(float32x4_t*)&v108));
        v18 = v73;
        a3 = COERCE_LONG_DOUBLE(
            vextq_s8(*(int8x16_t*)&a2, *(int8x16_t*)&a2, 8u));
        *(float32x2_t*)&a2 = vadd_f32(*(float32x2_t*)&a3, *(float32x2_t*)&a2);
        *(float32x2_t*)&a2 = vpadd_f32(*(float32x2_t*)&a2, *(float32x2_t*)&a2);
        if (*(float*)&a2 > 0.0) {
          v86 = *v24;
          v87 = **v24;
          if (v87 != 0 && *(_DWORD*)(v87 + 16) == *((_DWORD*)v86 + 2)) {
            v88 = *(unsigned int*)(v87 + 36);
            if ((_DWORD)v88 != 0) {
              v109 = v5;
              for (j = 0; j < v88; ++j) {
                v90 = *(_QWORD*)(v87 + 40 + 8 * j);
                if (v90 != 0) {
                  (*(void (**)(__int64, __int64, long double))(
                      *(_QWORD*)v90 + 120LL))(v90, 4, a2);
                  v88 = *(unsigned int*)(v87 + 36);
                }
              }
              v5 = v109;
              goto LABEL_187;
            }
          }
        }
      }
      v22 = (_DWORD*)(v11 + 120);
    }
  LABEL_26:
    v20 += 128;
  } while (v20 != v21);
  v20 = *(_QWORD*)(a1 + 24);
  v21 = *(_QWORD*)(a1 + 32);
LABEL_190:
  *(_BYTE*)(a1 + 88) = v12;
  if (v20 != v21) {
    while ((*(_BYTE*)(v20 + 36) & 1) == 0) {
      v20 += 128;
      if (v20 == v21) {
        return;
      }
    }
  }
  if (v20 != v21) {
    v91 = v20 + 128;
    if (v20 + 128 != v21) {
      do {
        if ((*(_BYTE*)(v91 + 36) & 1) == 0) {
          *(_QWORD*)v20 = *(_QWORD*)v91;
          v101 = *(_QWORD*)(v91 + 8);
          v102 = *(_QWORD*)(v91 + 16);
          if (v102 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v102 + 8), 1u,
                                      memory_order_relaxed);
          }
          v103 = *(_QWORD*)(v20 + 16);
          *(_QWORD*)(v20 + 8) = v101;
          *(_QWORD*)(v20 + 16) = v102;
          if (v103 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v103 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v103 + 16LL))(v103);
              std___1___shared_weak_count___release_weak(v103);
            }
            v102 = *(_QWORD*)(v20 + 16);
          }
          if (v102 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v102 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v102 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v102 + 16LL))(v102);
              std___1___shared_weak_count___release_weak(v102);
            }
          }
          v92 = *(_QWORD*)(v91 + 24);
          v93 = *(_QWORD*)(v91 + 32);
          v94 = *(_QWORD*)(v91 + 48);
          *(_QWORD*)(v20 + 40) = *(_QWORD*)(v91 + 40);
          *(_QWORD*)(v20 + 48) = v94;
          *(_QWORD*)(v20 + 24) = v92;
          *(_QWORD*)(v20 + 32) = v93;
          v95 = *(_QWORD*)(v91 + 56);
          v96 = *(_QWORD*)(v91 + 64);
          v97 = *(_QWORD*)(v91 + 80);
          *(_QWORD*)(v20 + 72) = *(_QWORD*)(v91 + 72);
          *(_QWORD*)(v20 + 80) = v97;
          *(_QWORD*)(v20 + 56) = v95;
          *(_QWORD*)(v20 + 64) = v96;
          v98 = *(_QWORD*)(v91 + 88);
          v99 = *(_QWORD*)(v91 + 96);
          v100 = *(_QWORD*)(v91 + 104);
          *(_BYTE*)(v20 + 112) = *(_BYTE*)(v91 + 112);
          *(_QWORD*)(v20 + 96) = v99;
          *(_QWORD*)(v20 + 104) = v100;
          *(_QWORD*)(v20 + 88) = v98;
          v20 += 128;
        }
        v91 += 128;
      } while (v91 != v21);
      v21 = *(_QWORD*)(a1 + 32);
    }
  }
  if (v20 != v21) {
    do {
      v104 = *(_QWORD*)(v21 - 112);
      if (v104 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
        std___1___shared_weak_count___release_weak(v104);
      }
      v21 -= 128;
    } while (v21 != v20);
    *(_QWORD*)(a1 + 32) = v20;
  }
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
