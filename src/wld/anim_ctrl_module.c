#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a6df00(__int64);
__int64 GameRoutine_5e0030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5f6090(_QWORD);
__int64 GameRoutine_5f60c0(_QWORD, _QWORD, float);
__int64 GameRoutine_5f6180(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_5f65f0(_QWORD, _QWORD);
__int64 GameRoutine_5f6650(_QWORD, _QWORD);
__int64 GameRoutine_5f66c0(_QWORD);
__int64 GameRoutine_5fa6a0(_QWORD);
__int64 GameRoutine_a6b4e0(_QWORD, _QWORD);
__int64 GameRoutine_a6ca80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a78ac0(_QWORD, _QWORD);
__int64 GameRoutine_ce5c00(_QWORD);
__int64 GameRoutine_ce5d20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__int64* Model_a66700(__int64* result, int);
extern _UNKNOWN GameData_2167540;
extern _UNKNOWN* GameData_212e3a0;
extern __int64 (*GameData_1fc0748[])();
extern __int64 (*GameData_1fc0798[])();
extern __int64 (*GameData_1fc07e8[])();
extern __int64 (*GameData_212e3a8)();
extern __int64 (*wld_AnimCtrlModule_vtable[])();
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int as_g_tick_count;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a78a50(void);
void __attribute__((noreturn)) GameRoutine_a78a70(_QWORD);
__int64 AnimCtrlModule_Destructor(__int64 a1, long double a2);
_QWORD* AnimCtrlModule_Unknown6(_QWORD* result);
__int64 AnimCtrlModule_a77840(__int64 a1, _QWORD* a2, unsigned int a3);
__int64 AnimCtrlModule_a77c00(__int64 a1, int a2);
__int64 AnimCtrlModule_a77d60(_QWORD* a1, __int64 a2);
__int64 AnimCtrlModule_a782c0(__int64 result, __int64 a2);
_QWORD* AnimCtrlModule_a78700(_QWORD* result, unsigned __int64 a2,
                              long double a3);
__int64 AnimCtrlModule_a78700_alt1(_QWORD,
                                   _QWORD) __asm__("AnimCtrlModule_a78700");
__int64 AnimCtrlModule_a78f60_alt1(_QWORD, _QWORD, _QWORD,
                                   _QWORD) __asm__("AnimCtrlModule_a78f60");
__int64 GameRoutine_ce69c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*eft_ClampCurve_ptr)();
void __attribute__((noreturn)) GameRoutine_a78a30(void);
void __attribute__((noreturn)) GameRoutine_a78a90(void);
void AnimCtrlModule_Unknown4(_QWORD* a1);
__int64* AnimCtrlModule_a78450(__int64* result, _DWORD* a2);
__int64 AnimCtrlModule_a78580(_QWORD* a1, int a2);
void AnimCtrlModule_a78f60(__int64 a1, __int64* a2, __int64* a3, __int64 a4);
_QWORD* wld_AnimCtrlModule_AddModel_lambda0_Clone(_QWORD* a1);
_QWORD* wld_AnimCtrlModule_AddModel_lambda0_CloneInto(_QWORD* result,
                                                      _QWORD* a2);
__int64 AnimCtrlModule_a78f60_alt2(_QWORD) __asm__("AnimCtrlModule_a78f60");
void __attribute__((noreturn)) GameRoutine_a78a10(void);
__int64* AnimCtrlModule_a78ac0(__int64* result, unsigned __int64 a2);

__int64 AnimCtrlModule_Destructor(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
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
  __int64 v26;

  *(_QWORD*)a1 = wld_AnimCtrlModule_vtable;
  if (*(_BYTE*)(a1 + 132) == 1) {
    Model_a66700(*(__int64**)(a1 + 24), *(_DWORD*)(a1 + 128));
    if (*(_BYTE*)(a1 + 132) == 1) {
      *(_BYTE*)(a1 + 132) = 0;
    }
    *(_QWORD*)(a1 + 224) = 0xFFFFFFFFLL;
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)(a1 + 384) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  a2);
  }
  v5 = *(_QWORD**)(a1 + 352);
  if (v5 == (_QWORD*)(a1 + 320)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_14;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);

LABEL_14:
  result = *(_QWORD*)(a1 + 288);
  if (result == a1 + 256) {
    v8 = 32;
    goto LABEL_18;
  }
  if (result != 0) {
    v8 = 40;
  LABEL_18:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v8))((__int64)result);
  }
  v9 = *(_QWORD*)(a1 + 96);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 104);
    if (v9 == v10) {
      goto LABEL_27;
    }
    do {
      v11 = *(_QWORD*)(v10 - 24);
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = std___1___shared_weak_count___release_weak(v11);
      }
      v10 -= 32;
    } while (v10 != v9);
    v12 = *(_QWORD*)(a1 + 96);
    *(_QWORD*)(a1 + 104) = v9;
    if (v12 != 0) {
    LABEL_27:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a2);
    }
  }
  v14 = *(_QWORD**)(a1 + 72);
  if (v14 != nullptr) {
    v15 = *(_QWORD**)(a1 + 80);
    if (v14 == v15) {
      goto LABEL_45;
    }
    do {
      v16 = *(v15 - 8);
      if (v16 != 0) {
        *(v15 - 7) = v16;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, a2);
      }
      v18 = *(v15 - 10);
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
      }
      v19 = *(v15 - 13);
      v15 -= 13;
      result = v19;
      *v15 = 0;
      if (v19 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v15 != v14);
    v20 = *(_QWORD*)(a1 + 72);
    *(_QWORD*)(a1 + 80) = v14;
    if (v20 != 0) {
    LABEL_45:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21, a2);
    }
  }
  v22 = *(_QWORD*)(a1 + 48);
  if (v22 != 0) {
    v23 = *(_QWORD*)(a1 + 56);
    if (v22 == v23) {
      goto LABEL_56;
    }
    do {
      v24 = *(_QWORD*)(v23 - 8);
      if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        result = std___1___shared_weak_count___release_weak(v24);
      }
      v23 -= 16;
    } while (v23 != v22);
    v25 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 56) = v22;
    if (v25 != 0) {
    LABEL_56:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v26 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26, a2);
    }
  }
  return result;
}

void AnimCtrlModule_Unknown4(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  float* v5;
  __int64 v6;
  float* v7;
  float v8;
  float* v9;
  float* v10;
  float v11;
  float v12;
  float v13;
  int v15;
  __int64 v16;
  __int64 (*v17)();
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 (*v25)();
  bool v26;
  bool v27;
  bool v28;
  __int64 v29;
  float* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  bool v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  char* v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  char v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  float* v58;
  __int64* v59;
  float v60;
  __int64 v61;
  float v62;
  float v63;
  int v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  bool v68;
  int v69;
  char* v70;

  v1 = a1[9];
  v2 = a1[10];
  v3 = a1;
  if (v2 != v1) {
    v4 = 0;
    do {
      v5 = (float*)(v1 + 104 * v4);
      v6 = *(_QWORD*)v5;
      if (*(_QWORD*)v5 != 0) {
        v7 = *(float**)(v6 + 16);
        if (v7 != nullptr) {
          v8 = *v7;
        }
        else {
          v8 = 0.0;
        }
        v9 = *((float**)v5 + 5);
        v10 = *((float**)v5 + 6);
        v11 = v5[2] * *(float*)(*(_QWORD*)(a1[1] + 496LL) + 16LL);
        if (v9 != v10) {
          while (1) {
            v12 = *v9++;
            v13 = v12;
            if (v8 < v12 && (float)(v11 + v8) >= v13) {
              break;
            }
            if (v9 == v10) {
              goto LABEL_3;
            }
          }
          v11 = v13 - v8;
        }
      LABEL_3:
        *(float*)(v6 + 100) = v11;
        v1 = a1[9];
        v2 = a1[10];
      }
      ++v4;
    } while (v4 < 0x4EC4EC4EC4EC4EC5LL * ((v2 - v1) >> 3));
  }
  if (v2 != v1) {
    v15 = 0;
    v16 = 0;
    v17 = eft_ClampCurve_ptr;
    while (1) {
      v18 = *(_QWORD*)(v1 + 104 * v16);
      if (v18 != 0) {
        break;
      }
    LABEL_19:
      if (++v16 >=
          (unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * ((v3[10] - v1) >> 3))) {
        goto LABEL_77;
      }
    }
    v19 = *(_QWORD*)(v18 + 16);
    v20 = 0.0;
    v21 = 0.0;
    if (v19 != 0) {
      v21 = *(float*)v19;
      *(_BYTE*)(v18 + 169) = 0;
      v22 = *(float*)(v18 + 100);
      v23 = *(float*)v19;
      v24 = *(float*)(v19 + 8);
      v25 = *(__int64 (**)())(v19 + 16);
      v26 = *(float*)v19 >= v24 && v25 == v17;
      if (v26 ||
          (v23 < v24 ? (v27 = v25 == v17) : (v27 = true),
           !v27 ? (v28 = (float)(v22 + v23) < v24) : (v28 = true), !v28)) {
        *(_WORD*)(v18 + 168) = 257;
      }
      *(float*)(v19 + 12) = v22;
      v29 = *(_QWORD*)(v18 + 16);
      *(float*)v29 = (*(float (**)(_QWORD, float, float, float))(v29 + 16))(
          *(_QWORD*)(v29 + 24), *(float*)v29 + *(float*)(v29 + 12),
          *(float*)(v29 + 4), *(float*)(v29 + 8));
      v1 = v3[9];
    }
    v30 = *(float**)(*(_QWORD*)(v1 + 104 * v16) + 16LL);
    if (v30 != nullptr) {
      v20 = *v30;
    }
    v31 = v1 + 104LL * (int)v16;
    if (*(_QWORD*)v31 == 0 || *(_QWORD*)(v31 + 16) == 0 ||
        (v32 = v1 + 104LL * (int)v16, v34 = *(unsigned __int8*)(v32 + 32),
         v33 = v32 + 32, v34 == 0) ||
        *(_BYTE*)(v33 + 1) == 0 || *(float*)(v31 + 96) <= 0.0) {
    LABEL_74:
      if (v21 != v20) {
        v15 = 1;
        *(_BYTE*)(v1 + 104 * v16 + 76) = 1;
        v1 = v3[9];
      }
      goto LABEL_19;
    }
    v35 = v1 + 104 * v16;
    v36 = *(_QWORD*)(v35 + 16);
    v37 = *(_QWORD*)(v35 + 24);
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
      v1 = v3[9];
    }
    v38 = *(float*)(v1 + 104 * v16 + 8);
    v40 = v3[13];
    v39 = v3[14];
    if (v40 >= v39) {
      v41 = v3[12];
      v69 = v15;
      v42 = (__int64)(v40 - v41) >> 5;
      v43 = v42 + 1;
      if ((unsigned __int64)(v42 + 1) >> 59 != 0) {
        GameRoutine_a78a30();
      }
      v44 = v39 - v41;
      v68 = v38 >= 0.0;
      if (v44 >> 4 > v43) {
        v43 = v44 >> 4;
      }
      v45 = (unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFE0LL;
      v46 = 0x7FFFFFFFFFFFFFFLL;
      if (!v45) {
        v46 = v43;
      }
      if (v46 >> 59 != 0) {
        GameRoutine_60a210(a1);
      }
      v47 = v37;
      v48 = v36;
      v67 = 4 * v46;
      a1 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v46, 16, 0);
      v49 = (char*)a1 + v40 - v41;
      v66 = a1;
      *(_QWORD*)v49 = v48;
      *((_QWORD*)v49 + 1) = v47;
      v37 = v47;
      if (v47 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                  memory_order_relaxed);
        v41 = v3[12];
        v40 = v3[13];
        v42 = (__int64)(v40 - v41) >> 5;
      }
      v15 = v69;
      v50 = &v49[-32 * v42];
      *((float*)v49 + 4) = v21;
      *((float*)v49 + 5) = v20;
      v49[24] = v68;
      if (v41 != v40) {
        v51 = v41;
        v70 = &v49[-32 * v42];
        v52 = v70;
        do {
          *(_QWORD*)v52 = *(_QWORD*)v51;
          *((_QWORD*)v52 + 1) = *(_QWORD*)(v51 + 8);
          *(_QWORD*)v51 = 0;
          *(_QWORD*)(v51 + 8) = 0;
          v53 = *(_QWORD*)(v51 + 16);
          v54 = *(_BYTE*)(v51 + 24);
          v51 += 32;
          v52[24] = v54;
          *((_QWORD*)v52 + 2) = v53;
          v52 += 32;
        } while (v51 != v40);
        do {
          v55 = *(_QWORD*)(v41 + 8);
          if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
            a1 = (_QWORD*)std___1___shared_weak_count___release_weak(v55);
          }
          v41 += 32;
        } while (v41 != v40);
        v41 = v3[12];
        v50 = v70;
      }
      v56 = v49 + 32;
      v3[12] = v50;
      v3[13] = v56;
      v3[14] = &v66[v67];
      v17 = eft_ClampCurve_ptr;
      if (v41 != 0) {
        v57 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v57 = 56;
        }
        a1 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v41);
      }
      v3[13] = v56;
      if (v37 == 0) {
        goto LABEL_73;
      }
    }
    else {
      *(_QWORD*)v40 = v36;
      *(_QWORD*)(v40 + 8) = v37;
      if (v37 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                  memory_order_relaxed);
      }
      *(float*)(v40 + 16) = v21;
      *(float*)(v40 + 20) = v20;
      *(_BYTE*)(v40 + 24) = v38 >= 0.0;
      v3[13] = v40 + 32;
      if (v37 == 0) {
        goto LABEL_73;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
      a1 = (_QWORD*)std___1___shared_weak_count___release_weak(v37);
    }
  LABEL_73:
    v1 = v3[9];
    goto LABEL_74;
  }
  LOBYTE(v15) = 0;
LABEL_77:
  v58 = (float*)v3[12];
  v59 = (__int64*)v3[13];
  if (v58 == (float*)v59) {
    goto LABEL_92;
  }
  do {
    v61 = *(_QWORD*)v58;
    if (*(_QWORD*)v58 == 0) {
      goto LABEL_84;
    }
    v62 = v58[4];
    v63 = v58[5];
    v64 = *((unsigned __int8*)v58 + 24);
    *(_WORD*)(v61 + 112) = 0;
    if (v64 != 1) {
      if (v63 <= v62) {
        goto LABEL_79;
      }
    LABEL_88:
      *(_BYTE*)(v61 + 113) = 1;
      GameRoutine_ce69c0(v61);
      goto LABEL_79;
    }
    if (v63 < v62) {
      goto LABEL_88;
    }
  LABEL_79:
    GameRoutine_ce69c0(v61);
    v60 = *(float*)(v61 + 24);
    if (v60 >= v63) {
      v60 = v63;
    }
    if (v63 < 0.0) {
      v60 = 0.0;
    }
    *(float*)(v61 + 104) = v60;
  LABEL_84:
    v58 += 8;
  } while (v58 != (float*)v59);
  v58 = (float*)v3[12];
  v59 = (__int64*)v3[13];
LABEL_92:
  while (v59 != (__int64*)v58) {
    v65 = *(v59 - 3);
    if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
      std___1___shared_weak_count___release_weak(v65);
    }
    v59 -= 4;
  }
  v3[13] = v58;
  *((_BYTE*)v3 + 248) = v15 & 1;
}

_QWORD* AnimCtrlModule_Unknown6(_QWORD* result)
{
  _QWORD* v1;
  unsigned int v2;
  _BOOL4 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64* v18;
  __int64* j;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  char v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  char v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  _DWORD* v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;

  v1 = result;
  if (*((_BYTE*)result + 248) != 1 || (int)(v2 = *((_DWORD*)result + 60)) < 1) {
    v3 = false;
    if ((*((_BYTE*)result + 249) & 1) != 0) {
      goto LABEL_7;
    }
  LABEL_6:
    if (!v3) {
      goto LABEL_30;
    }
    goto LABEL_7;
  }
  v3 = as_g_tick_count % v2 == *((_DWORD*)result + 61);
  if ((*((_BYTE*)result + 249) & 1) == 0) {
    goto LABEL_6;
  }

LABEL_7:
  v4 = result[9];
  v5 = result[10];
  if (v4 != v5) {
    do {
      result = *(_QWORD**)v4;
      if (*(_QWORD*)v4 != 0 && *(_BYTE*)(v4 + 76) == 1) {
        result = GameRoutine_a6df00((__int64)result);
      }
      v4 += 104;
    } while (v4 != v5);
    v6 = v1[9];
    v7 = v1[10] - v6;
    if (v7 != 0) {
      v8 = 0x4EC4EC4EC4EC4EC5LL * (v7 >> 3);
      if (v7 == 104) {
        v9 = 0.0;
        v10 = 0;
        v11 = 0;
        v12 = 0;
      }
      else {
        v9 = 0.0;
        v43 = v6 + 104;
        v10 = 0;
        v11 = 0;
        v12 = 0;
        do {
          v44 = *(_QWORD*)(v43 - 104);
          if (v44 != 0 && *(_QWORD*)(v44 + 24) != 0 &&
              *(_DWORD*)(v43 - 32) == 0) {
            ++v11;
            v12 = v10;
            v9 = v9 + *(float*)(v43 - 8);
          }
          if (*(_QWORD*)v43 != 0 && *(_QWORD*)(*(_QWORD*)v43 + 24LL) != 0 &&
              *(_DWORD*)(v43 + 72) == 0) {
            v12 = v10 + 1;
            ++v11;
            v9 = v9 + *(float*)(v43 + 96);
          }
          v10 += 2;
          v43 += 208;
        } while ((v8 & 0xFFFFFFFFFFFFFFFELL) != v10);
      }
      if ((v8 & 1) != 0) {
        v13 = (_DWORD*)(v6 + 104 * v10);
        if (*(_QWORD*)v13 != 0 && *(_QWORD*)(*(_QWORD*)v13 + 24LL) != 0 &&
            v13[18] == 0) {
          ++v11;
          v12 = v10;
          v9 = v9 + *(float*)(v6 + 104 * v10 + 96);
        }
      }
      if (v11 == 1) {
        v14 = *(_QWORD*)(*(_QWORD*)(v6 + 104 * v12) + 24LL);
        result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14);
      }
      else if (v11 >= 2 && v9 > 0.0) {
        result = (_QWORD*)GameRoutine_5f6090(v1 + 46);
        v45 = v1[9];
        v46 = v1[10];
        if (v46 != v45) {
          v47 = 0;
          v48 = 0;
          v49 = 1.0 / v9;
          while (2) {
            v50 = 104 * v47 + 96;
            while (1) {
              if (*(float*)(v45 + v50) != 0.0) {
                v51 = *(_QWORD*)(v45 + v50 - 96);
                if (v51 != 0) {
                  v52 = *(_QWORD*)(v51 + 24);
                  if (v52 != 0 && *(_DWORD*)(v45 + v50 - 24) == 0 &&
                      (*(_WORD*)(v52 + 96) & 1) != 0) {
                    break;
                  }
                }
              }
              ++v47;
              v50 += 104;
              if (0x4EC4EC4EC4EC4EC5LL * ((v46 - v45) >> 3) <= v47) {
                if ((v48 & 1) == 0) {
                  goto LABEL_100;
                }
                goto LABEL_99;
              }
            }
            if ((v48 & 1) == 0) {
              GameRoutine_5f6650(v1 + 46, *((unsigned int*)v1 + 78));
              v45 = v1[9];
            }
            result = (_QWORD*)GameRoutine_5f60c0(v1 + 46, v52,
                                                 v49 * *(float*)(v45 + v50));
            v45 = v1[9];
            v46 = v1[10];
            ++v47;
            v48 = 1;
            if (0x4EC4EC4EC4EC4EC5LL * ((v46 - v45) >> 3) > v47) {
              continue;
            }
            break;
          }
        LABEL_99:
          result = (_QWORD*)GameRoutine_5f66c0(v1 + 46);
          v45 = v1[9];
          v46 = v1[10];
        }
      LABEL_100:
        if (v46 != v45) {
          v53 = 0;
          v54 = 0;
          while (2) {
            v55 = 104 * v53 + 96;
            v56 = 0x4EC4EC4EC4EC4EC5LL * ((v46 - v45) >> 3);
            while (1) {
              if (*(float*)(v45 + v55) != 0.0) {
                v57 = *(_QWORD*)(v45 + v55 - 96);
                if (v57 != 0) {
                  v58 = *(_QWORD*)(v57 + 24);
                  if (v58 != 0 && *(_DWORD*)(v45 + v55 - 24) == 1 &&
                      *(_BYTE*)(v45 + v55 - 28) == 1) {
                    v59 = (_DWORD*)(v45 + 104LL * *(int*)(v45 + v55 - 32));
                    if (*(_QWORD*)v59 != 0) {
                      v60 = *(_QWORD*)(*(_QWORD*)v59 + 24LL);
                      if (v60 != 0 && v59[18] == 2 &&
                          (*(_WORD*)(v58 + 96) & 1) != 0 &&
                          (*(_WORD*)(v60 + 96) & 1) != 0) {
                        break;
                      }
                    }
                  }
                }
              }
              ++v53;
              v55 += 104;
              if (v56 <= v53) {
                if ((v54 & 1) == 0) {
                  goto LABEL_23;
                }
                goto LABEL_119;
              }
            }
            v61 = v53;
            v62 = *(_QWORD*)(*(_QWORD*)v59 + 24LL);
            if ((v54 & 1) == 0) {
              GameRoutine_5f6650(v1 + 46, *((_DWORD*)v1 + 78) | 1u);
              v45 = v1[9];
            }
            result = (_QWORD*)GameRoutine_5f6180(v1 + 46, v58, v62,
                                                 *(float*)(v45 + v55));
            v45 = v1[9];
            v46 = v1[10];
            v53 = v61 + 1;
            v54 = 1;
            if (0x4EC4EC4EC4EC4EC5LL * ((v46 - v45) >> 3) > v61 + 1) {
              continue;
            }
            break;
          }
        LABEL_119:
          result = (_QWORD*)GameRoutine_5f66c0(v1 + 46);
        }
      }
    }
  }

LABEL_23:
  v15 = v1[9];
  for (i = v1[10]; v15 != i; v15 += 104) {
    *(_BYTE*)(v15 + 76) = 0;
  }
  v17 = v1[3];
  if (v17 != 0) {
    *(_BYTE*)(v17 + 504) = 1;
  }
  v18 = (__int64*)v1[6];
  for (j = (__int64*)v1[7]; v18 != j; *(_BYTE*)(*(_QWORD*)v20 + 504LL) = 1) {
    v20 = *v18;
    v18 += 2;
  }
  *((_WORD*)v1 + 124) = 0;

LABEL_30:
  v21 = (_QWORD*)v1[9];
  v22 = (_QWORD*)v1[10];
  if (v21 != v22) {
    do {
      v23 = (_QWORD*)*v21;
      if (*v21 != 0) {
        v24 = v23[1];
        v25 = (_QWORD*)v23[4];
        if (v25 != nullptr && v25[13] != 0) {
          (*(void (**)(_QWORD*, __int64))(*v25 + 56LL))(v25, v24);
          v24 = v23[1];
        }
        v26 = (_QWORD*)v23[5];
        if (v26 != nullptr && v26[13] != 0) {
          (*(void (**)(_QWORD*, __int64))(*v26 + 56LL))(v26, v24);
          v24 = v23[1];
        }
        result = (_QWORD*)v23[6];
        if (result != nullptr && result[13] != 0) {
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + 56LL))(
              result, v24);
        }
      }
      v21 += 13;
    } while (v21 != v22);
    v27 = v1[9];
    v28 = v1[10] - v27;
    if (v28 != 0) {
      v29 = 0x4EC4EC4EC4EC4EC5LL * (v28 >> 3);
      v30 = v29 & 3;
      if (v29 >= 4) {
        v38 = v29 & 0xFFFFFFFFFFFFFFFCLL;
        v39 = (_QWORD*)(v27 + 208);
        v31 = 0;
        v32 = 0;
        v33 = 0;
        do {
          v40 = *(v39 - 26);
          if (v40 != 0 && *(_QWORD*)(v40 + 24) != 0) {
            ++v33;
            v32 = v31;
          }
          v41 = *(v39 - 13);
          if (v41 != 0 && *(_QWORD*)(v41 + 24) != 0) {
            ++v33;
            v32 = v31 + 1;
          }
          if (*v39 != 0 && *(_QWORD*)(*v39 + 24LL) != 0) {
            ++v33;
            v32 = v31 + 2;
          }
          v42 = v39[13];
          if (v42 != 0 && *(_QWORD*)(v42 + 24) != 0) {
            ++v33;
            v32 = v31 + 3;
          }
          v39 += 52;
          v31 += 4;
        } while (v38 != v31);
      }
      else {
        v31 = 0;
        v32 = 0;
        v33 = 0;
      }
      if (v30 != 0) {
        v34 = (__int64*)(v27 + 104 * v31);
        do {
          v36 = *v34;
          v34 += 13;
          v35 = v36;
          if (v36 != 0 && *(_QWORD*)(v35 + 24) != 0) {
            ++v33;
            v32 = v31;
          }
          ++v31;
          --v30;
        } while (v30 != 0);
      }
      if (v33 == 1) {
        v37 = *(_QWORD*)(*(_QWORD*)(v27 + 104 * v32) + 24LL);
        return (_QWORD*)(*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v37 +
                                                          56LL))(v37, v1[4]);
      }
      else if (v33 >= 2) {
        nn_os_LockMutex(&GameData_2167540);
        GameRoutine_5f65f0(v1 + 46, v1[5]);
        return (_QWORD*)nn_os_UnlockMutex(&GameData_2167540);
      }
    }
  }
  return result;
}

__int64 AnimCtrlModule_a77840(__int64 a1, _QWORD* a2, unsigned int a3)
{
  __int64 result;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
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
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _BYTE v30[32];
  _BYTE* v31;
  _QWORD v32[4];
  _QWORD* v33;
  unsigned int v34;

  result = AnimCtrlModule_a77c00(a1, a3);
  if (a2[3] == 0 && a2[4] == 0 && a2[5] == 0 && a2[6] == 0 && a2[7] == 0) {
    return result;
  }
  nn_os_LockMutex(&GameData_2167540);
  v11 = 104LL * (int)a3;
  *(_DWORD*)(*(_QWORD*)(a1 + 72) + v11 + 96) = 1065353216;
  *(_DWORD*)(*(_QWORD*)(a1 + 72) + v11 + 8) = 1065353216;
  *(_WORD*)(*(_QWORD*)(a1 + 72) + v11 + 32) = 257;
  *(_QWORD*)(*(_QWORD*)(a1 + 72) + v11 + 48) =
      *(_QWORD*)(*(_QWORD*)(a1 + 72) + v11 + 40);
  v12 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       176, 16, 0);
  GameRoutine_a6ca80(v13, *(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 120), a2);
  v14 = *(_QWORD*)(a1 + 72);
  v15 = *(_QWORD*)(v14 + v11);
  *(_QWORD*)(v14 + v11) = v13;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = *(_QWORD*)(a1 + 72);
  if (*(_BYTE*)(a1 + 132) == 1) {
    v17 = *(_QWORD*)(v16 + 104LL * (int)a3);
    if (v17 != 0) {
      v18 = *(_QWORD*)(v17 + 24);
      if (v18 != 0) {
        GameRoutine_5e0030(v18, *(unsigned int*)(a1 + 224), 0);
        v16 = *(_QWORD*)(a1 + 72);
      }
    }
  }
  if (*(_QWORD*)(*(_QWORD*)(v16 + 104LL * (int)a3) + 24LL) != 0 &&
      *(_BYTE*)(a1 + 208) == 1) {
    *(_BYTE*)(a1 + 208) = 0;
  }
  if (a2[8] == 0) {
    goto LABEL_47;
  }
  v19 = fw_memory_HeapManager_Allocate(*v12, 152, 16, 0);
  *(_QWORD*)(v19 + 8) = 0;
  *(_QWORD*)(v19 + 16) = 0;
  *(_DWORD*)(v19 + 48) = 0;
  *(_QWORD*)v19 = GameData_1fc0748;
  *(_BYTE*)(v19 + 52) = 0;
  *(_BYTE*)(v19 + 24) = 16;
  *(_DWORD*)(v19 + 56) = 0;
  *(_QWORD*)(v19 + 64) = 0;
  *(_QWORD*)(v19 + 72) = 0;
  *(_QWORD*)(v19 + 80) = 0;
  *(_QWORD*)(v19 + 88) = 0;
  *(_QWORD*)(v19 + 96) = 0;
  *(_QWORD*)(v19 + 104) = 0;
  *(_QWORD*)(v19 + 112) = 0;
  *(_QWORD*)(v19 + 120) = 0;
  *(_WORD*)(v19 + 136) = 0;
  strcpy((char*)(v19 + 25), "<noname>");
  *(_DWORD*)(v19 + 128) = 0;
  *(_DWORD*)(v19 + 132) = 1065353216;
  *(_QWORD*)(v19 + 144) = as_g_base_frame_counter + 88;
  v20 = *(_QWORD*)(a1 + 72) + 104LL * (int)a3;
  v21 = *(_QWORD*)(v20 + 24);
  *(_QWORD*)(v20 + 16) = v19 + 24;
  *(_QWORD*)(v20 + 24) = v19;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 104LL * (int)a3 + 16) + 120LL) =
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL);
  v22 = *(_QWORD*)(a1 + 352);
  v23 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 104LL * (int)a3 + 16);
  v24 = (__int64*)a2[8];
  v25 = *v24;
  v26 = *((unsigned int*)v24 + 2);
  if (v22 != 0) {
    if (v22 == a1 + 320) {
      v31 = v30;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v22 + 24LL))(v22, v30);
    }
    else {
      v31 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    }
  }
  else {
    v31 = nullptr;
  }
  GameRoutine_ce5c00(v23);
  if (v31 != nullptr) {
    if (v31 == v30) {
      v33 = v32;
      (*(void (**)(__int64))(*(_QWORD*)v31 + 24LL))((__int64)v31);
    }
    else {
      v33 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v31 + 16LL))(
          (__int64)v31);
    }
  }
  else {
    v33 = nullptr;
  }
  GameRoutine_ce5d20(v23, v25, v26, v32, 0, 1);
  if (v33 == v32) {
    v27 = 32;
    goto LABEL_41;
  }
  if (v33 != nullptr) {
    v27 = 40;
  LABEL_41:
    (*(void (**)(__int64))(*v33 + v27))((__int64)v33);
  }
  if (v31 == v30) {
    v28 = 32;
    goto LABEL_46;
  }
  if (v31 != nullptr) {
    v28 = 40;
  LABEL_46:
    (*(void (**)(__int64))(*(_QWORD*)v31 + v28))((__int64)v31);
  }

LABEL_47:
  v29 = *(_QWORD*)(a1 + 288);
  if (v29 != 0) {
    v32[0] = a1;
    v34 = a3;
    (*(void (**)(__int64, _QWORD*, unsigned int*))(*(_QWORD*)v29 + 48LL))(
        v29, v32, &v34);
  }
  *(_BYTE*)(a1 + 249) = 1;
  return nn_os_UnlockMutex(&GameData_2167540);
}

__int64 AnimCtrlModule_a77c00(__int64 a1, int a2)
{
  int v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  nn_os_LockMutex(&GameData_2167540);
  v4 = a2;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 72) + 104LL * a2);
  if (v5 != 0) {
    if (*(_QWORD*)(v5 + 24) != 0) {
      GameRoutine_5fa6a0(*(_QWORD*)(a1 + 40));
      v6 = *(__int64**)(a1 + 48);
      v7 = *(__int64**)(a1 + 56);
      while (v6 != v7) {
        v8 = *v6;
        v6 += 2;
        GameRoutine_5fa6a0(*(_QWORD*)(v8 + 8));
      }
    }
    v9 = *(_QWORD*)(a1 + 72);
    if (*(_BYTE*)(a1 + 132) == 1) {
      v10 = *(_QWORD*)(v9 + 104LL * v4);
      if (v10 != 0) {
        v11 = *(_QWORD*)(v10 + 24);
        if (v11 != 0) {
          GameRoutine_5e0030(v11, *(unsigned int*)(a1 + 224), 3);
          v9 = *(_QWORD*)(a1 + 72);
        }
      }
    }
    v12 = 104LL * v4;
    v13 = *(_QWORD*)(v9 + v12);
    *(_QWORD*)(v9 + v12) = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
  }
  v14 = *(_QWORD*)(a1 + 72) + 104LL * v4;
  v16 = *(_QWORD*)(v14 + 16);
  v15 = (_QWORD*)(v14 + 16);
  if (v16 != 0) {
    v17 = v15[1];
    *v15 = 0;
    v15[1] = 0;
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v17);
    }
  }
  v18 = *(_QWORD*)(a1 + 72) + 104LL * v4;
  *(_QWORD*)(v18 + 48) = *(_QWORD*)(v18 + 40);
  *(_BYTE*)(a1 + 249) = 1;
  return nn_os_UnlockMutex(&GameData_2167540);
}

__int64 AnimCtrlModule_a77d60(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  long double v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  long double v28;
  __int64 v29;
  __int64 i;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  bool v43;
  unsigned __int64 v44;
  int v45;
  unsigned __int16* v46;
  int v47;
  _DWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  char* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  char* v56;
  long double v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 result;
  __int64 v65;
  _QWORD* v66;
  _QWORD v67[4];
  _QWORD* v68;
  _QWORD v69[4];
  _QWORD* v70;

  v2 = *(_QWORD*)(a2 + 168);
  v5 = *(unsigned __int16*)(v2 + 80);
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v6[3] = 0;
  v7 = v6 + 3;
  v6[1] = 0;
  v6[2] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v66 = a1;
  *v6 = GameData_1fc0798;
  v9 = (_QWORD*)a1[7];
  v8 = a1[8];
  if ((unsigned __int64)v9 >= v8) {
    v11 = a1[6];
    v12 = (char*)v9 - v11;
    v13 = ((__int64)v9 - v11) >> 4;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 60 != 0) {
      GameRoutine_a78a50();
    }
    v15 = v8 - v11;
    if (v15 >> 3 > v14) {
      v14 = v15 >> 3;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF0LL) {
      v16 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v14;
    }
    if (v16 != 0) {
      if (v16 >> 60 != 0) {
      LABEL_76:
        GameRoutine_60a210(v6);
      }
      v17 = v6;
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v16, 16, 0);
      v6 = v17;
    }
    else {
      v18 = 0;
    }
    v19 = &v12[v18];
    v20 = v18 + 16 * v16;
    *(_QWORD*)v19 = v7;
    *((_QWORD*)v19 + 1) = v6;
    v21 = (__int64)&v12[v18 + -16 * v13];
    v10 = (__int64)&v12[v18 + 16];
    v6 = (_QWORD*)memcpy(v21, v11, v12);
    a1 = v66;
    v66[6] = v21;
    v66[7] = v10;
    v66[8] = v20;
    if (v11 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      v6 = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
    }
  }
  else {
    *v9 = v7;
    v9[1] = v6;
    v10 = (__int64)(v9 + 2);
  }
  a1[7] = v10;
  **(_QWORD**)(v10 - 16) = a2;
  *(_QWORD*)(*(_QWORD*)(v10 - 16) + 8LL) = v2;
  v24 = *(_QWORD**)(v10 - 16);
  v25 = v24[2];
  if (0xAAAAAAAAAAAAAAABLL * ((v24[4] - v25) >> 2) < v5) {
    v26 = v24[3] - v25;
    v27 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 12 * v5, 16,
                                         0);
    v6 = (_QWORD*)memcpy(v27, v25, v26);
    v24[2] = v27;
    v24[3] = v27 + v26;
    v24[4] = v27 + 12 * v5;
    if (v25 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      v6 = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
    }
  }
  if ((_DWORD)v5 != 0) {
    for (i = 0; i != v5; ++i) {
      v32 = *(_QWORD**)(v10 - 16);
      v33 = (_QWORD*)v32[1];
      v34 = *(_QWORD*)(*(_QWORD*)a1[5] + 8LL);
      v35 = *(_QWORD*)(*v33 + 8LL);
      if (v35 != 0) {
        if (v34 == 0) {
          goto LABEL_38;
        }
        v36 = *(_QWORD*)(v35 + 16 * i + 32) + 2LL;
        v6 = (_QWORD*)strlen(v36);
        v37 = v6;
      }
      else {
        if (v34 == 0) {
        LABEL_38:
          v45 = -1;
          goto LABEL_44;
        }
        v36 = 0;
        v37 = nullptr;
      }
      v38 = v34 + 8;
      v39 = *(unsigned __int16*)(v34 + 12);
      v40 = v34 + 8 + 16 * v39;
      v41 = *(_DWORD*)v40;
      if (*(_DWORD*)(v34 + 8) < *(_DWORD*)v40) {
        do {
          v44 = (__int64)v41 >> 3;
          if ((unsigned __int64)v37 > v44) {
            v42 = (*((unsigned __int8*)v37 + v36 + ~v44) >> (v41 & 7)) & 1;
          }
          else {
            v42 = 0;
          }
          v39 = *(unsigned __int16*)(v34 + 12 + 16 * v39 + 2 * v42);
          v43 = v41 < *(_DWORD*)(v38 + 16 * v39);
          v41 = *(_DWORD*)(v38 + 16 * v39);
        } while (v43);
        v40 = v38 + 16 * v39;
      }
      v46 = *(unsigned __int16**)(v40 + 8);
      if (v37 == (_QWORD*)*v46) {
        v6 = (_QWORD*)memcmp(v46 + 1, v36);
        if ((_DWORD)v6 != 0) {
          v45 = -1;
        }
        else {
          v45 = (unsigned __int64)(v40 - v34 - 24) >> 4;
        }
      }
      else {
        v45 = -1;
      }
    LABEL_44:
      v47 = *(unsigned __int16*)(v33[2] + 96 * i + 42);
      v48 = (_DWORD*)v32[3];
      v49 = v32[4];
      if ((unsigned __int64)v48 < v49) {
        *v48 = i;
        v48[1] = v47;
        v31 = (__int64)(v48 + 3);
        v48[2] = v45;
      }
      else {
        v50 = v32[2];
        v51 = (char*)v48 - v50;
        v52 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v48 - v50) >> 2) + 1;
        if (v52 > 0x1555555555555555LL) {
          GameRoutine_a78a70(v6);
        }
        v53 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v49 - v50) >> 2);
        if (2 * v53 > v52) {
          v52 = 2 * v53;
        }
        if (v53 >= 0xAAAAAAAAAAAAAAALL) {
          v54 = 0x1555555555555555LL;
        }
        else {
          v54 = v52;
        }
        if (v54 != 0) {
          if (v54 > 0x1555555555555555LL) {
            goto LABEL_76;
          }
          v55 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               12 * v54, 16, 0);
        }
        else {
          v55 = 0;
        }
        v56 = &v51[v55];
        *(_DWORD*)v56 = i;
        *((_DWORD*)v56 + 1) = v47;
        *((_DWORD*)v56 + 2) = v45;
        v31 = (__int64)&v51[v55 + 12];
        v6 = (_QWORD*)memcpy(v55, v50, v51);
        v32[2] = v55;
        v32[3] = v31;
        v32[4] = v55 + 12 * v54;
        if (v50 != 0) {
          v58 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v58 = 56;
          }
          v6 = (_QWORD*)nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v57);
        }
      }
      v32[3] = v31;
      a1 = v66;
    }
  }
  v60 = *(__int64**)(v10 - 16);
  v59 = *(_QWORD*)(v10 - 8);
  v61 = a1[3];
  v62 = *v60;
  if (v59 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                              memory_order_relaxed);
  }
  v67[2] = v60;
  v67[3] = v59;
  v69[2] = v60;
  v67[0] = GameData_1fc07e8;
  v67[1] = v61;
  v68 = v67;
  v69[3] = v59;
  v70 = v69;
  v69[0] = GameData_1fc07e8;
  v69[1] = v61;
  if (v59 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_a6b4e0(v69, v62 + 720);
  if (v70 == v69) {
    v63 = 32;
  }
  else {
    if (v70 == nullptr) {
      goto LABEL_69;
    }
    v63 = 40;
  }
  (*(void (**)(__int64))(*v70 + v63))((__int64)v70);

LABEL_69:
  result = (__int64)v68;
  if (v68 == v67) {
    v65 = 32;
  }
  else {
    if (v68 == nullptr) {
      return result;
    }
    v65 = 40;
  }
  return (*(__int64 (**)(__int64))(*v68 + v65))((__int64)v68);
}

__int64 AnimCtrlModule_a782c0(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[4];
  _QWORD* v14;

  v3 = *(__int64**)(result + 48);
  v2 = *(__int64**)(result + 56);
  v4 = result;
  if (v3 != v2) {
    while (*(_QWORD*)*v3 != a2) {
      v3 += 2;
      if (v3 == v2) {
        return result;
      }
    }
  }
  if (v3 != v2) {
    v5 = *(_QWORD*)*v3;
    v13[2] = 0;
    v14 = v13;
    v13[0] = (char*)GameData_212e3a0 + 16;
    v13[1] = GameData_212e3a8;
    GameRoutine_a6b4e0(v13, v5 + 720);
    result = (__int64)v14;
    if (v14 == v13) {
      v6 = 32;
    }
    else {
      if (v14 == nullptr) {
      LABEL_11:
        v7 = *(__int64**)(v4 + 56);
        v8 = v3 + 2;
        if (v3 + 2 != v7) {
          do {
            v10 = *v8;
            v9 = v8[1];
            v11 = *(v8 - 1);
            *v8 = 0;
            v8[1] = 0;
            *(v8 - 2) = v10;
            *(v8 - 1) = v9;
            if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              result = std___1___shared_weak_count___release_weak(v11);
            }
            v8 += 2;
          } while (v8 != v7);
          v7 = *(__int64**)(v4 + 56);
          v3 = v8 - 2;
        }
        for (; v7 != v3; v7 -= 2) {
          v12 = *(v7 - 1);
          if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            result = std___1___shared_weak_count___release_weak(v12);
          }
        }
        *(_QWORD*)(v4 + 56) = v3;
        return result;
      }
      v6 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v14 + v6))((__int64)v14);
    goto LABEL_11;
  }
  return result;
}

__int64* AnimCtrlModule_a78450(__int64* result, _DWORD* a2)
{
  unsigned __int64 v2;
  _DWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _DWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = (_DWORD*)result[1];
  v2 = result[2];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v6 = *result;
    v7 = (__int64)v3 - *result;
    v8 = (v7 >> 2) + 1;
    if (v8 >> 62 != 0) {
      GameRoutine_a78a90();
    }
    v9 = v2 - v6;
    v10 = fw_memory_g_heap_manager_ptr;
    if (v9 >> 1 > v8) {
      v8 = v9 >> 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v8;
    }
    if (v11 != 0) {
      if (v11 >> 62 != 0) {
        GameRoutine_60a210(result);
      }
      v12 = a2;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
      a2 = v12;
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 4 * v11;
    v15 = v13 + v7 - 4 * (v7 >> 2);
    *(_DWORD*)(v13 + v7) = *a2;
    v5 = v13 + v7 + 4;
    result = (__int64*)memcpy(v15, v6, v7);
    *v4 = v15;
    v4[1] = v5;
    v4[2] = v14;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v16 = 56;
      }
      result =
          (__int64*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v16, v6);
    }
  }
  else {
    *v3 = *a2;
    v5 = (__int64)(v3 + 1);
  }
  v4[1] = v5;
  return result;
}

__int64 AnimCtrlModule_a78580(_QWORD* a1, int a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;

  result = AnimCtrlModule_a78700_alt1(a1 + 9, a2);
  v4 = a1[9];
  v5 = a1[10];
  v6 = v5 - v4;
  if (a1[11] - v4 > (unsigned __int64)(v5 - v4)) {
    if (v5 == v4) {
      v7 = 0;
    }
    else {
      if ((unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * (v6 >> 3)) >=
          0x276276276276277LL) {
        GameRoutine_60a210(result);
      }
      v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5 - v4, 16,
                                          0);
    }
    v8 = v7 + v6;
    result = AnimCtrlModule_a78f60_alt1(a1 + 11, v4, v5, v7);
    v9 = a1[9];
    a1[9] = v7;
    a1[10] = v8;
    a1[11] = v8;
    if (v9 == 0) {
      v4 = v7;
      if (v8 == v7) {
        return result;
      }
      goto LABEL_11;
    }
    v10 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v10 = 56;
    }
    result =
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v10, v9);
    v4 = a1[9];
    v5 = a1[10];
  }
  if (v5 == v4) {
    return result;
  }
LABEL_11:
  v11 = 0;
  v12 = 0;
  do {
    v13 = v4 + v11;
    v11 += 104;
    *(_DWORD*)(v13 + 80) = v12;
    *(_QWORD*)(v13 + 88) = a1;
    ++v12;
    v4 = a1[9];
  } while (0x4EC4EC4EC4EC4EC5LL * ((a1[10] - v4) >> 3) > v12);
  return result;
}

_QWORD* AnimCtrlModule_a78700(_QWORD* result, unsigned __int64 a2,
                              long double a3)
{
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;

  v3 = (_QWORD*)result[1];
  v4 = result;
  v5 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v3 - *result) >> 3);
  v6 = a2 >= v5;
  v7 = a2 - v5;
  if (v7 != 0 && v6) {
    return (_QWORD*)GameRoutine_a78ac0(result, v7);
  }
  if (!v6) {
    v8 = *result + 104 * a2;
    if ((_QWORD*)v8 != v3) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v10 = *(v3 - 8);
        if (v10 != 0) {
          *(v3 - 7) = v10;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, a3);
        }
        v12 = *(v3 - 10);
        if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v12);
        }
        v13 = (_QWORD*)*(v3 - 13);
        v3 -= 13;
        result = v13;
        *v3 = 0;
        if (v13 != nullptr) {
          result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
        }
      } while (v3 != (_QWORD*)v8);
    }
    v4[1] = v8;
  }
  return result;
}

__int64* AnimCtrlModule_a78ac0(__int64* result, unsigned __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  long double v24;
  __int64 v25;
  __int64 v26;

  v3 = result + 2;
  v2 = result[2];
  v4 = result;
  v5 = result[1];
  if (0x4EC4EC4EC4EC4EC5LL * ((v2 - v5) >> 3) >= a2) {
    if (a2 != 0) {
      v13 = v5 + 104 * a2;
      v14 = 104 * a2 - 104;
      if ((~(v14 / 0x68) & 3) != 0) {
        v15 = -(__int64)(((unsigned __int8)(v14 / 0x68) + 1) & 3);
        do {
          *(_QWORD*)v5 = 0;
          *(_DWORD*)(v5 + 8) = 1065353216;
          v16 = __CFADD__(v15++, 1);
          *(_QWORD*)(v5 + 16) = 0;
          *(_QWORD*)(v5 + 24) = 0;
          *(_BYTE*)(v5 + 68) = 0;
          *(_DWORD*)(v5 + 72) = 0;
          *(_QWORD*)(v5 + 40) = 0;
          *(_QWORD*)(v5 + 48) = 0;
          *(_QWORD*)(v5 + 56) = 0;
          *(_BYTE*)(v5 + 64) = 0;
          *(_BYTE*)(v5 + 76) = 1;
          *(_DWORD*)(v5 + 80) = 0;
          *(_QWORD*)(v5 + 88) = 0;
          *(_DWORD*)(v5 + 96) = 1065353216;
          *(_WORD*)(v5 + 32) = 257;
          v5 += 104;
        } while (!v16);
      }
      if (v14 >= 0x138) {
        do {
          *(_QWORD*)v5 = 0;
          *(_DWORD*)(v5 + 8) = 1065353216;
          *(_QWORD*)(v5 + 16) = 0;
          *(_QWORD*)(v5 + 24) = 0;
          *(_BYTE*)(v5 + 68) = 0;
          *(_DWORD*)(v5 + 72) = 0;
          *(_QWORD*)(v5 + 40) = 0;
          *(_QWORD*)(v5 + 48) = 0;
          *(_QWORD*)(v5 + 56) = 0;
          *(_BYTE*)(v5 + 64) = 0;
          *(_BYTE*)(v5 + 76) = 1;
          *(_DWORD*)(v5 + 80) = 0;
          *(_QWORD*)(v5 + 88) = 0;
          *(_DWORD*)(v5 + 96) = 1065353216;
          *(_WORD*)(v5 + 32) = 257;
          *(_QWORD*)(v5 + 104) = 0;
          *(_DWORD*)(v5 + 112) = 1065353216;
          *(_QWORD*)(v5 + 120) = 0;
          *(_QWORD*)(v5 + 128) = 0;
          *(_BYTE*)(v5 + 172) = 0;
          *(_DWORD*)(v5 + 176) = 0;
          *(_QWORD*)(v5 + 144) = 0;
          *(_QWORD*)(v5 + 152) = 0;
          *(_QWORD*)(v5 + 160) = 0;
          *(_BYTE*)(v5 + 168) = 0;
          *(_BYTE*)(v5 + 180) = 1;
          *(_DWORD*)(v5 + 184) = 0;
          *(_QWORD*)(v5 + 192) = 0;
          *(_DWORD*)(v5 + 200) = 1065353216;
          *(_WORD*)(v5 + 136) = 257;
          *(_QWORD*)(v5 + 208) = 0;
          *(_DWORD*)(v5 + 216) = 1065353216;
          *(_QWORD*)(v5 + 224) = 0;
          *(_QWORD*)(v5 + 232) = 0;
          *(_BYTE*)(v5 + 276) = 0;
          *(_DWORD*)(v5 + 280) = 0;
          *(_BYTE*)(v5 + 272) = 0;
          *(_QWORD*)(v5 + 248) = 0;
          *(_QWORD*)(v5 + 256) = 0;
          *(_QWORD*)(v5 + 264) = 0;
          *(_BYTE*)(v5 + 284) = 1;
          *(_DWORD*)(v5 + 288) = 0;
          *(_QWORD*)(v5 + 296) = 0;
          *(_DWORD*)(v5 + 304) = 1065353216;
          *(_WORD*)(v5 + 240) = 257;
          *(_QWORD*)(v5 + 312) = 0;
          *(_DWORD*)(v5 + 320) = 1065353216;
          *(_QWORD*)(v5 + 328) = 0;
          *(_QWORD*)(v5 + 336) = 0;
          *(_BYTE*)(v5 + 380) = 0;
          *(_DWORD*)(v5 + 384) = 0;
          *(_BYTE*)(v5 + 376) = 0;
          *(_QWORD*)(v5 + 352) = 0;
          *(_QWORD*)(v5 + 360) = 0;
          *(_QWORD*)(v5 + 368) = 0;
          *(_BYTE*)(v5 + 388) = 1;
          *(_DWORD*)(v5 + 392) = 0;
          *(_QWORD*)(v5 + 400) = 0;
          *(_DWORD*)(v5 + 408) = 1065353216;
          *(_WORD*)(v5 + 344) = 257;
          v5 += 416;
        } while (v5 != v13);
      }
      v5 = v13;
    }
    result[1] = v5;
  }
  else {
    v6 = v5 - *result;
    v7 = a2 + 0x4EC4EC4EC4EC4EC5LL * (v6 >> 3);
    if (v7 > 0x276276276276276LL) {
      GameRoutine_a78a10();
    }
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = 0x4EC4EC4EC4EC4EC5LL * ((v2 - *result) >> 3);
    if (2 * v9 > v7) {
      v7 = 2 * v9;
    }
    if (v9 >= 0x13B13B13B13B13BLL) {
      v10 = 0x276276276276276LL;
    }
    else {
      v10 = v7;
    }
    if (v10 != 0) {
      if (v10 > 0x276276276276276LL) {
        GameRoutine_60a210(result);
      }
      v11 = a2;
      v12 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 104 * v10, 16, 0);
      a2 = v11;
    }
    else {
      v12 = 0;
    }
    v17 = v12 + v6;
    v18 = 104 * a2 - 104;
    v19 = v12 + v6 + 104 * a2;
    if ((~(v18 / 0x68) & 3) != 0) {
      v21 = -(__int64)(((unsigned __int8)(v18 / 0x68) + 1) & 3);
      v20 = v17;
      do {
        *(_QWORD*)v20 = 0;
        *(_DWORD*)(v20 + 8) = 1065353216;
        v16 = __CFADD__(v21++, 1);
        *(_QWORD*)(v20 + 16) = 0;
        *(_QWORD*)(v20 + 24) = 0;
        *(_BYTE*)(v20 + 68) = 0;
        *(_DWORD*)(v20 + 72) = 0;
        *(_QWORD*)(v20 + 40) = 0;
        *(_QWORD*)(v20 + 48) = 0;
        *(_QWORD*)(v20 + 56) = 0;
        *(_BYTE*)(v20 + 64) = 0;
        *(_BYTE*)(v20 + 76) = 1;
        *(_DWORD*)(v20 + 80) = 0;
        *(_QWORD*)(v20 + 88) = 0;
        *(_DWORD*)(v20 + 96) = 1065353216;
        *(_WORD*)(v20 + 32) = 257;
        v20 += 104;
      } while (!v16);
    }
    else {
      v20 = v17;
    }
    if (v18 >= 0x138) {
      do {
        *(_QWORD*)v20 = 0;
        *(_DWORD*)(v20 + 8) = 1065353216;
        *(_QWORD*)(v20 + 16) = 0;
        *(_QWORD*)(v20 + 24) = 0;
        *(_BYTE*)(v20 + 68) = 0;
        *(_DWORD*)(v20 + 72) = 0;
        *(_QWORD*)(v20 + 40) = 0;
        *(_QWORD*)(v20 + 48) = 0;
        *(_QWORD*)(v20 + 56) = 0;
        *(_BYTE*)(v20 + 64) = 0;
        *(_BYTE*)(v20 + 76) = 1;
        *(_DWORD*)(v20 + 80) = 0;
        *(_QWORD*)(v20 + 88) = 0;
        *(_DWORD*)(v20 + 96) = 1065353216;
        *(_WORD*)(v20 + 32) = 257;
        *(_QWORD*)(v20 + 104) = 0;
        *(_DWORD*)(v20 + 112) = 1065353216;
        *(_QWORD*)(v20 + 120) = 0;
        *(_QWORD*)(v20 + 128) = 0;
        *(_BYTE*)(v20 + 172) = 0;
        *(_DWORD*)(v20 + 176) = 0;
        *(_QWORD*)(v20 + 144) = 0;
        *(_QWORD*)(v20 + 152) = 0;
        *(_QWORD*)(v20 + 160) = 0;
        *(_BYTE*)(v20 + 168) = 0;
        *(_BYTE*)(v20 + 180) = 1;
        *(_DWORD*)(v20 + 184) = 0;
        *(_QWORD*)(v20 + 192) = 0;
        *(_DWORD*)(v20 + 200) = 1065353216;
        *(_WORD*)(v20 + 136) = 257;
        *(_QWORD*)(v20 + 208) = 0;
        *(_DWORD*)(v20 + 216) = 1065353216;
        *(_QWORD*)(v20 + 224) = 0;
        *(_QWORD*)(v20 + 232) = 0;
        *(_BYTE*)(v20 + 276) = 0;
        *(_DWORD*)(v20 + 280) = 0;
        *(_BYTE*)(v20 + 272) = 0;
        *(_QWORD*)(v20 + 248) = 0;
        *(_QWORD*)(v20 + 256) = 0;
        *(_QWORD*)(v20 + 264) = 0;
        *(_BYTE*)(v20 + 284) = 1;
        *(_DWORD*)(v20 + 288) = 0;
        *(_QWORD*)(v20 + 296) = 0;
        *(_DWORD*)(v20 + 304) = 1065353216;
        *(_WORD*)(v20 + 240) = 257;
        *(_QWORD*)(v20 + 312) = 0;
        *(_DWORD*)(v20 + 320) = 1065353216;
        *(_QWORD*)(v20 + 328) = 0;
        *(_QWORD*)(v20 + 336) = 0;
        *(_BYTE*)(v20 + 380) = 0;
        *(_DWORD*)(v20 + 384) = 0;
        *(_BYTE*)(v20 + 376) = 0;
        *(_QWORD*)(v20 + 352) = 0;
        *(_QWORD*)(v20 + 360) = 0;
        *(_QWORD*)(v20 + 368) = 0;
        *(_BYTE*)(v20 + 388) = 1;
        *(_DWORD*)(v20 + 392) = 0;
        *(_QWORD*)(v20 + 400) = 0;
        *(_DWORD*)(v20 + 408) = 1065353216;
        *(_WORD*)(v20 + 344) = 257;
        v20 += 416;
      } while (v20 != v19);
    }
    v22 = v12 + 104 * v10;
    v23 = v17 + *v4 - v4[1];
    result = (__int64*)AnimCtrlModule_a78f60_alt2(v3);
    v25 = *v4;
    *v4 = v23;
    v4[1] = v19;
    v4[2] = v22;
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v26 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v26, v24);
    }
  }
  return result;
}

void AnimCtrlModule_a78f60(__int64 a1, __int64* a2, __int64* a3, __int64 a4)
{
  __int64* v5;
  __int64* v6;
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

  if (a2 != a3) {
    v5 = a2;
    v6 = a2;
    do {
      v7 = *v6;
      *v6 = 0;
      *(_QWORD*)a4 = v7;
      *(_DWORD*)(a4 + 8) = *((_DWORD*)v6 + 2);
      *(_QWORD*)(a4 + 16) = v6[2];
      *(_QWORD*)(a4 + 24) = v6[3];
      v6[2] = 0;
      v6[3] = 0;
      LOWORD(v7) = *((_WORD*)v6 + 16);
      *(_QWORD*)(a4 + 48) = 0;
      *(_QWORD*)(a4 + 56) = 0;
      *(_QWORD*)(a4 + 40) = 0;
      *(_WORD*)(a4 + 32) = v7;
      *(_QWORD*)(a4 + 40) = v6[5];
      *(_QWORD*)(a4 + 48) = v6[6];
      *(_QWORD*)(a4 + 56) = v6[7];
      v6[6] = 0;
      v6[7] = 0;
      v6[5] = 0;
      v9 = v6[10];
      v8 = v6[11];
      v10 = v6[9];
      *(_DWORD*)(a4 + 96) = *((_DWORD*)v6 + 24);
      *(_QWORD*)(a4 + 80) = v9;
      *(_QWORD*)(a4 + 88) = v8;
      *(_QWORD*)(a4 + 72) = v10;
      v11 = v6[8];
      v6 += 13;
      *(_QWORD*)(a4 + 64) = v11;
      a4 += 104;
    } while (v6 != a3);
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      v13 = v5[5];
      if (v13 != 0) {
        v5[6] = v13;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v14, v13);
      }
      v15 = v5[3];
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
      v16 = *v5;
      *v5 = 0;
      if (v16 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
      }
      v5 += 13;
    } while (v5 != a3);
  }
}

_QWORD* wld_AnimCtrlModule_AddModel_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v3 = a1[1];
  v4 = a1[2];
  *result = GameData_1fc07e8;
  result[1] = v3;
  v5 = a1[3];
  result[2] = v4;
  result[3] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

_QWORD* wld_AnimCtrlModule_AddModel_lambda0_CloneInto(_QWORD* result,
                                                      _QWORD* a2)
{
  __int64 v2;

  *a2 = GameData_1fc07e8;
  a2[1] = result[1];
  a2[2] = result[2];
  v2 = result[3];
  a2[3] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

#pragma GCC visibility pop
