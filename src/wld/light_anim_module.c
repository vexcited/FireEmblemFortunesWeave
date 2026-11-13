#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_c51a60(_QWORD, _QWORD, float);
__int64 GameRoutine_c5f0c0(unsigned __int64, __int64*);
__int64 GameRoutine_c60200(_QWORD);
__int64 fmodf(float, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*wld_LightAnimModule_vtable[])();
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_c51ba0(__int64, float);
__int64 LightAnimModule_Destructor(_QWORD* a1);
__int64 LightAnimModule_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "LightAnimModule_DeletingDestructor");
__int64 LightAnimModule_c5f890(unsigned __int64 a1, __int64* a2);
__int64 LightAnimModule_Unknown5(__int64 result);
void LightAnimModule_c5fca0(__int64 a1, float*** a2, int a3, float a4);
__int64
LightAnimModule_c51a60_alt2(__int64 result, int a2,
                            long double a3) __asm__("LightAnimModule_c51a60");
__int64
LightAnimModule_c60000_alt1(__int64 result) __asm__("LightAnimModule_c60000");
__int64**
LightAnimModule_c60200_alt1(__int64** result) __asm__("LightAnimModule_c60200");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void LightAnimModule_c51a60_alt1(__int64, int,
                                 float) __asm__("LightAnimModule_c51a60");
float fmodf_alt1(float, float) __asm__("fmodf");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LightAnimModule_c51a60(__int64 a1, int a2, float a3);
void LightAnimModule_c60000(_QWORD* a1);
void LightAnimModule_DeletingDestructor(_QWORD* a1);
void LightAnimModule_c60200(__int64** a1);
__int64 GameHr_c60380(char**, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c53620();
__int64 LightAnimModule_c5f0c0(__int64 a1, __int64* a2);

void LightAnimModule_c51a60(__int64 a1, int a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 i;
  float v8;
  float v9;
  int v10;
  __int128 v11;

  v3 = *(_QWORD*)(a1 + 136);
  for (i = *(_QWORD*)(a1 + 144); v3 != i; v3 += 48) {
    if (*(_BYTE*)(v3 + 8) == 1 && *(_QWORD*)(v3 + 32) != *(_QWORD*)(v3 + 24) &&
        *(_DWORD*)v3 == a2) {
      v8 = a3;
      if (*(_BYTE*)(v3 + 16) == 1) {
        v8 = fmodf_alt1(a3, *(float*)(v3 + 12));
      }
      v9 = GameRoutine_c51ba0(v3, v8);
      v10 = *(_DWORD*)(v3 + 4);
      if (v10 <= 2) {
        if (v10 != 0) {
          if (v10 == 1) {
            *(float*)(a1 + 64) = v9;
          }
          else if (v10 == 2) {
            *(float*)(a1 + 48) = v9;
          }
        }
        else {
          *(float*)(a1 + 72) = v9;
        }
      }
      else if (v10 > 4) {
        if (v10 == 5) {
          *(float*)(a1 + 32) = v9;
        }
        else if (v10 == 6) {
          *(float*)(a1 + 68) = v9;
        }
      }
      else if (v10 == 3) {
        *(float*)(a1 + 52) = v9;
      }
      else {
        v11 = *(_OWORD*)(a1 + 48);
        *((_QWORD*)&v11 + 1) = LODWORD(v9);
        *(_OWORD*)(a1 + 48) = v11;
      }
    }
  }
}

__int64 LightAnimModule_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  *a1 = wld_LightAnimModule_vtable;
  v4 = a1 + 9;
  GameRoutine_c60200(&v4);
  v4 = a1 + 6;
  result = GameRoutine_c60200(&v4);
  v3 = a1[4];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

void LightAnimModule_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;

  *a1 = wld_LightAnimModule_vtable;
  v4 = a1 + 9;
  LightAnimModule_c60200(&v4);
  v4 = a1 + 6;
  LightAnimModule_c60200(&v4);
  v2 = a1[4];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

__int64 LightAnimModule_c5f0c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  char* v5;
  __int64 v6;
  int* v7;
  int* v8;
  char v9;
  char v10;
  int v11;
  int* v12;
  int* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  char* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  char* v58;
  __int64* v59;
  __int64 v60;
  _QWORD** v61;
  __int64 v62;
  unsigned __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  _QWORD* v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  __int64 v79;
  __int64 v80;
  __int64 result;
  struct {
    __int64 v84;
    __int64 v85;
    char* v86;
    char* v87;
    unsigned __int64 v88;
    int v89;
  } v84_;
  struct {
    _QWORD** v90;
    __int64 v91;
    char* v92;
    char* v93;
    unsigned __int64 v94;
    int v95;
  } v90_;

  v2 = a1;
  v90_.v93 = nullptr;
  v90_.v94 = 0;
  v90_.v91 = 0;
  v90_.v92 = nullptr;
  v90_.v90 = nullptr;
  v84_.v87 = nullptr;
  v84_.v88 = 0;
  v84_.v85 = 0;
  v84_.v86 = nullptr;
  v84_.v84 = 0;
  v90_.v95 = -1;
  v84_.v89 = -1;
  v3 = *(_QWORD**)*a2;
  v4 = *(_QWORD**)(*a2 + 8);
  if (v3 == v4) {
    v59 = a2;
    v5 = nullptr;
  }
  else {
    v5 = nullptr;
    do {
      v6 = *v3;
      v7 = *(int**)(*v3 + 136LL);
      v8 = *(int**)(*v3 + 144LL);
      if (v7 == v8) {
        v10 = 0;
        v9 = 0;
      }
      else {
        v9 = 0;
        v10 = 0;
        do {
          v11 = *v7;
          v7 += 12;
          v9 |= v11 == 0;
          v10 |= v11 == 1;
        } while (v7 != v8);
      }
      v12 = *(int**)(v6 + 160);
      v13 = *(int**)(v6 + 168);
      if (v12 != v13) {
        v14 = *(_QWORD**)(v2 + 24);
        v15 = v14[2];
        if (v15 != 0 && v14[4] != 0) {
          v20 = v14[1];
          v21 = v15 - 1;
          while (1) {
            v22 = *v12;
            if ((v15 & v21) == 0) {
              break;
            }
            v23 = *v12;
            if (v15 <= v22) {
              v23 = v22 % v15;
            }
            v24 = *(__int64***)(v20 + 8 * v23);
            if (v24 != nullptr) {
              goto LABEL_29;
            }
          LABEL_22:
            v12 += 5;
            if (v12 == v13) {
              goto LABEL_17;
            }
          }
          v23 = v21 & v22;
          v24 = *(__int64***)(v20 + 8 * (v21 & v22));
          if (v24 == nullptr) {
            goto LABEL_22;
          }
        LABEL_29:
          v25 = *v24;
          if (*v24 == nullptr) {
            goto LABEL_22;
          }
          v26 = (unsigned int)v12[1];
          if ((v15 & v21) == 0) {
            while (1) {
              v28 = v25[1];
              if (v28 == v22) {
                if (*((_DWORD*)v25 + 4) == (_DWORD)v22) {
                  goto LABEL_44;
                }
              }
              else if ((v28 & v21) != v23) {
                goto LABEL_22;
              }
              v25 = (__int64*)*v25;
              if (v25 == nullptr) {
                goto LABEL_22;
              }
            }
          }
          while (1) {
            v27 = v25[1];
            if (v27 == v22) {
              if (*((_DWORD*)v25 + 4) == (_DWORD)v22) {
              LABEL_44:
                v29 = v25[3];
                if (v26 < (v25[4] - v29) >> 2) {
                  v30 = v14[6];
                  if (v30 != 0) {
                    v31 =
                        *(_DWORD*)(v30 +
                                   88LL * *(unsigned int*)(v29 + 4 * v26) + 40);
                    v9 |= v31 == 0;
                    v10 |= v31 == 1;
                  }
                }
                goto LABEL_22;
              }
            }
            else {
              if (v27 >= v15) {
                v27 %= v15;
              }
              if (v27 != v23) {
                goto LABEL_22;
              }
            }
            v25 = (__int64*)*v25;
            if (v25 == nullptr) {
              goto LABEL_22;
            }
          }
        }
      }
    LABEL_17:
      if ((v9 & 1) != 0) {
        v17 = v90_.v93;
        if ((unsigned __int64)v90_.v93 >= v90_.v94) {
          v32 = (__int64)v90_.v92;
          v33 = v90_.v93 - v90_.v92;
          v34 = (v90_.v93 - v90_.v92) >> 4;
          v35 = v34 + 1;
          if ((unsigned __int64)(v34 + 1) >> 60 != 0) {
            goto LABEL_140;
          }
          v36 = v90_.v94 - (_QWORD)v90_.v92;
          if ((__int64)(v90_.v94 - (_QWORD)v90_.v92) >> 3 > v35) {
            v35 = v36 >> 3;
          }
          if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF0LL) {
            v37 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v37 = v35;
          }
          if (v37 >> 60 != 0) {
            goto LABEL_141;
          }
          v38 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v37, 16, 0);
          v39 = (_QWORD*)(v38 + v33);
          *v39 = v6;
          v40 = v3[1];
          v39[1] = v40;
          if (v40 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                                      memory_order_relaxed);
          }
          v41 = (__int64)&v39[-2 * v34];
          v42 = v38 + 16 * v37;
          v19 = (char*)(v39 + 2);
          memcpy(v41, v32, v33);
          v90_.v92 = (char*)v41;
          v90_.v94 = v42;
          if (v32 != 0) {
            v43 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v32);
          }
          v2 = a1;
        }
        else {
          *(_QWORD*)v90_.v93 = v6;
          v18 = v3[1];
          *((_QWORD*)v17 + 1) = v18;
          if (v18 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                      memory_order_relaxed);
          }
          v19 = v17 + 16;
        }
        v90_.v93 = v19;
      }
      if ((v10 & 1) != 0) {
        if ((unsigned __int64)v5 >= v84_.v88) {
          v45 = (__int64)v84_.v86;
          v46 = v5 - v84_.v86;
          v47 = (v5 - v84_.v86) >> 4;
          v48 = v47 + 1;
          if ((unsigned __int64)(v47 + 1) >> 60 != 0) {
            goto LABEL_140;
          }
          v49 = v84_.v88 - (_QWORD)v84_.v86;
          if ((__int64)(v84_.v88 - (_QWORD)v84_.v86) >> 3 > v48) {
            v48 = v49 >> 3;
          }
          if ((unsigned __int64)v49 >= 0x7FFFFFFFFFFFFFF0LL) {
            v50 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v50 = v48;
          }
          if (v50 >> 60 != 0) {
          LABEL_141:
            GameRoutine_60a210();
          }
          v51 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v50, 16, 0);
          v52 = (_QWORD*)(v51 + v46);
          *v52 = *v3;
          v53 = v3[1];
          v52[1] = v53;
          if (v53 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                                      memory_order_relaxed);
          }
          v54 = v51 + 16 * v50;
          v55 = (__int64)&v52[-2 * v47];
          v5 = (char*)(v52 + 2);
          memcpy(v55, v45, v46);
          v84_.v86 = (char*)v55;
          v84_.v88 = v54;
          if (v45 != 0) {
            v56 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v56 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v45);
          }
        }
        else {
          *(_QWORD*)v5 = *v3;
          v44 = v3[1];
          *((_QWORD*)v5 + 1) = v44;
          if (v44 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                                      memory_order_relaxed);
          }
          v5 += 16;
        }
        v84_.v87 = v5;
      }
      v3 += 2;
    } while (v3 != v4);
    v57 = v90_.v92;
    v58 = v90_.v93;
    if (v90_.v92 == v90_.v93) {
      v59 = a2;
    }
    else {
      v59 = a2;
      v61 = (_QWORD**)*a2;
      v60 = a2[1];
      if (v60 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 16), 1u,
                                  memory_order_relaxed);
      }
      v62 = v90_.v91;
      v90_.v90 = v61;
      v90_.v91 = v60;
      if (v62 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v62);
      }
      v63 = *(_QWORD*)(a1 + 56);
      if (v63 >= *(_QWORD*)(a1 + 64)) {
        v66 = GameHr_c60380((char**)(a1 + 48), (__int64)&v90_.v90);
        v2 = a1;
      }
      else {
        *(_QWORD*)v63 = v61;
        *(_QWORD*)(v63 + 8) = v60;
        if (v60 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 16), 1u,
                                    memory_order_relaxed);
        }
        v2 = a1;
        *(_QWORD*)(v63 + 24) = 0;
        *(_QWORD*)(v63 + 32) = 0;
        *(_QWORD*)(v63 + 16) = 0;
        if (v58 - v57 < 0) {
          goto LABEL_140;
        }
        v64 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v58 - v57, 16, 0);
        *(_QWORD*)(v63 + 16) = v64;
        *(_QWORD*)(v63 + 24) = v64;
        *(_QWORD*)(v63 + 32) = (char*)v64 + ((char*)v58 - (char*)v57);
        do {
          *v64 = *(_QWORD*)v57;
          v65 = *((_QWORD*)v57 + 1);
          v64[1] = v65;
          if (v65 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                                      memory_order_relaxed);
          }
          v57 += 16;
          v64 += 2;
        } while (v57 != v58);
        *(_QWORD*)(v63 + 24) = v64;
        v66 = v63 + 48;
        *(_DWORD*)(v63 + 40) = -1;
      }
      *(_QWORD*)(v2 + 56) = v66;
    }
  }
  v67 = (__int64)v84_.v86;
  if (v84_.v86 == v5) {
    if (v84_.v86 == nullptr) {
      goto LABEL_124;
    }
    v84_.v87 = v84_.v86;
    goto LABEL_121;
  }
  v69 = *v59;
  v68 = v59[1];
  if (v68 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                              memory_order_relaxed);
  }
  v70 = v84_.v85;
  v84_.v84 = v69;
  v84_.v85 = v68;
  if (v70 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v70);
  }
  v71 = *(_QWORD*)(v2 + 80);
  if (v71 >= *(_QWORD*)(v2 + 88)) {
    *(_QWORD*)(v2 + 80) = GameHr_c60380((char**)(v2 + 72), (__int64)&v84_.v84);
    if (v67 == 0) {
      goto LABEL_124;
    }
    do {
    LABEL_117:
      v75 = *((_QWORD*)v5 - 1);
      if (v75 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
        std___1___shared_weak_count___release_weak_alt1(v75);
      }
      v5 -= 16;
    } while (v5 != (char*)v67);
    v67 = (__int64)v84_.v86;
    if (v84_.v86 == nullptr) {
      goto LABEL_124;
    }
  LABEL_121:
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v67);
    goto LABEL_124;
  }
  *(_QWORD*)v71 = v69;
  *(_QWORD*)(v71 + 8) = v68;
  if (v68 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v68 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(v71 + 24) = 0;
  *(_QWORD*)(v71 + 32) = 0;
  *(_QWORD*)(v71 + 16) = 0;
  if ((__int64)&v5[-v67] < 0) {
  LABEL_140:
    GameRoutine_c53620();
  }
  v72 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int64)&v5[-v67], 16, 0);
  *(_QWORD*)(v71 + 16) = v72;
  *(_QWORD*)(v71 + 24) = v72;
  v73 = (char*)v67;
  *(_QWORD*)(v71 + 32) = &v5[(_QWORD)v72 - v67];
  do {
    *v72 = *(_QWORD*)v73;
    v74 = *((_QWORD*)v73 + 1);
    v72[1] = v74;
    if (v74 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v74 + 8), 1u,
                                memory_order_relaxed);
    }
    v73 += 16;
    v72 += 2;
  } while (v73 != v5);
  *(_QWORD*)(v71 + 24) = v72;
  *(_DWORD*)(v71 + 40) = -1;
  *(_QWORD*)(v2 + 80) = v71 + 48;
  if (v67 != 0) {
    goto LABEL_117;
  }
LABEL_124:
  if (v84_.v85 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v84_.v85);
  }
  v77 = (__int64)v90_.v92;
  if (v90_.v92 != nullptr) {
    v78 = v90_.v93;
    if (v90_.v92 == v90_.v93) {
      goto LABEL_134;
    }
    do {
      v79 = *((_QWORD*)v78 - 1);
      if (v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
        std___1___shared_weak_count___release_weak_alt1(v79);
      }
      v78 -= 16;
    } while (v78 != (char*)v77);
    v90_.v93 = (char*)v77;
    v77 = (__int64)v90_.v92;
    if (v90_.v92 != nullptr) {
    LABEL_134:
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v77);
    }
  }
  result = v90_.v91;
  if (v90_.v91 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v90_.v91);
  }
  return result;
}

__int64 LightAnimModule_c5f890(unsigned __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  int v6;
  char v7;
  char v8;
  _BYTE* v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12[2];

  v2 = a2[1];
  v12[0] = *a2;
  v12[1] = v2;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_c5f0c0(a1, v12);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      result = std___1___shared_weak_count___release_weak(v2);
    }
  }
  else {
    result = GameRoutine_c5f0c0(a1, v12);
  }
  v6 = *(_QWORD*)(a1 + 48) != *(_QWORD*)(a1 + 56) ||
       *(_QWORD*)(a1 + 72) != *(_QWORD*)(a1 + 80);
  if (*(unsigned __int8*)(a1 + 16) != v6) {
    v7 = *(_BYTE*)(a1 + 17);
    *(_BYTE*)(a1 + 16) = v6;
    if (v6 != 0) {
      v8 = 0;
    }
    else {
      v8 = 2;
    }
    *(_BYTE*)(a1 + 17) = v7 & 0xFD | v8;
    *(_BYTE*)(a1 + 18) = *(_BYTE*)(a1 + 18) & 0xFD | v8;
    *(_BYTE*)(a1 + 19) = *(_BYTE*)(a1 + 19) & 0xFD | v8;
    *(_BYTE*)(a1 + 20) = *(_BYTE*)(a1 + 20) & 0xFD | v8;
    v9 = *(_BYTE**)(a1 + 8);
    v9[632] = 0;
    v9[664] = 0;
    v9[696] = 0;
    v9[728] = 0;
    v10 = *(_QWORD*)a1;
    if (v6 != 0) {
      result = (*(__int64 (**)(unsigned __int64))(v10 + 64))(a1);
      v11 = *(_BYTE**)(a1 + 8);
      if ((v11[300] != 3 || v11[301] != 3) && v11[302] != 1) {
        return result;
      }
      v10 = *(_QWORD*)a1;
    }
    return (*(__int64 (**)(unsigned __int64))(v10 + 72))(a1);
  }
  return result;
}

__int64 LightAnimModule_Unknown5(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(result + 48);
  v2 = *(_QWORD*)(result + 56);
  v3 = result;
  if (v1 != v2) {
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                               8LL) +
                    40LL);
    v5 = 296;
    if ((*(_BYTE*)(v4 + 352) & 1 | ((*(_BYTE*)(v4 + 344) & 1) == 0)) != 0) {
      v5 = 248;
    }
    v6 = 3600 * *(_DWORD*)(v4 + v5 + 36) + 60 * *(_DWORD*)(v4 + v5 + 40) +
         *(_DWORD*)(v4 + v5 + 44);
    do {
      if (*(_DWORD*)(v1 + 40) != v6) {
        result = *(_QWORD*)(v1 + 8);
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result);
          if (result != 0) {
            if (*(_QWORD*)v1 != 0 && *(_BYTE*)(*(_QWORD*)v1 + 60LL) == 1) {
              v7 = *(__int64**)(v1 + 16);
              v8 = result;
              v9 = *(__int64**)(v1 + 24);
              *(_DWORD*)(v1 + 40) = v6;
              while (v7 != v9) {
                v10 = *v7;
                v7 += 2;
                LightAnimModule_c51a60_alt1(v10, 0,
                                            (float)v6 / 0x1.c200000000000p+11f);
              }
              LightAnimModule_c5fca0(v3, (float***)(v1 + 16), 0,
                                     (float)v6 / 0x1.c200000000000p+11f);
              result = v8;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v11 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak_alt1(v11);
            }
          }
        }
      }
      v1 += 48;
    } while (v1 != v2);
  }
  v12 = *(_QWORD*)(v3 + 72);
  v13 = *(_QWORD*)(v3 + 80);
  if (v12 != v13) {
    v14 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 496LL) + 16LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
    if (v14 != 0x0.0p+0f) {
      v15 = v14 + *(float*)(v3 + 40);
      if (v15 > 0x1.5179cc0000000p+16f) {
        v15 = v15 + -0x1.5179cc0000000p+16f;
      }
      *(float*)(v3 + 40) = v15;
      do {
        result = *(_QWORD*)(v12 + 8);
        if (result != 0) {
          result = std___1___shared_weak_count_lock_alt1(result);
          if (result != 0) {
            if (*(_QWORD*)v12 != 0 && *(_BYTE*)(*(_QWORD*)v12 + 60LL) == 1) {
              v16 = *(__int64**)(v12 + 16);
              v17 = *(__int64**)(v12 + 24);
              v18 = result;
              while (v16 != v17) {
                v19 = *v16;
                v16 += 2;
                LightAnimModule_c51a60_alt1(v19, 1, *(float*)(v3 + 40));
              }
              LightAnimModule_c5fca0(v3, (float***)(v12 + 16), 1,
                                     *(float*)(v3 + 40));
              result = v18;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v20 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak_alt1(v20);
            }
          }
        }
        v12 += 48;
      } while (v12 != v13);
    }
  }
  return result;
}

void LightAnimModule_c5fca0(__int64 a1, float*** a2, int a3, float a4)
{
  float** v4;
  float** v5;
  float* v9;
  int* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float* v32;
  int v33;
  float v34;
  __int128 v35;

  v4 = *a2;
  v5 = a2[1];
  if (*a2 == v5) {
    return;
  }
  while (2) {
    v9 = *((float**)*v4 + 20);
    v10 = *((int**)*v4 + 21);
  LABEL_7:
    if (v9 != (float*)v10) {
      v11 = *(_QWORD**)(a1 + 24);
      v12 = v11[2];
      if (v12 == 0 || v11[4] == 0) {
        goto LABEL_6;
      }
      v14 = *(int*)v9;
      v15 = v12 - 1;
      if ((v12 & (v12 - 1)) != 0) {
        v16 = *(int*)v9;
        if (v12 <= v14) {
          v16 = v14 % v12;
        }
      }
      else {
        v16 = v15 & v14;
      }
      v17 = *(__int64***)(v11[1] + 8 * v16);
      if (v17 == nullptr) {
        goto LABEL_6;
      }
      v18 = *v17;
      if (*v17 == nullptr) {
        goto LABEL_6;
      }
      v19 = *((unsigned int*)v9 + 1);
      if ((v12 & v15) == 0) {
        while (1) {
          v21 = v18[1];
          if (v21 == v14) {
            if (*((_DWORD*)v18 + 4) == (_DWORD)v14) {
              goto LABEL_32;
            }
          }
          else if ((v21 & v15) != v16) {
            goto LABEL_6;
          }
          v18 = (__int64*)*v18;
          if (v18 == nullptr) {
            goto LABEL_6;
          }
        }
      }
      while (1) {
        v20 = v18[1];
        if (v20 == v14) {
          if (*((_DWORD*)v18 + 4) == (_DWORD)v14) {
          LABEL_32:
            v22 = v18[3];
            if (v19 < (v18[4] - v22) >> 2) {
              v23 = v11[6];
              if (v23 != 0) {
                v24 = v23 + 88LL * *(unsigned int*)(v22 + 4 * v19);
                if (*(_BYTE*)(v24 + 48) == 1 &&
                    *(_QWORD*)(v24 + 64) != *(_QWORD*)(v24 + 72) &&
                    *(_DWORD*)(v24 + 40) == a3 && *(_BYTE*)(v24 + 56) == 1) {
                  v25 = v9[4];
                  v26 = *(float*)(v24 + 52);
                  v27 = (float)(v26 * *(float*)(v24 + 24)) * v25;
                  v28 = v26 + (float)(PSEUDO_UNFUSED(
                                  v26 * (float)(v25 * *(float*)(v24 + 28))));
                  v29 =
                      (float)(a4 + v27) *
                      (float)((float)((float)((float)(v25 +
                                                      -0x1.0000000000000p-1f) *
                                              *(float*)(v24 + 32)) *
                                      0x1.0000000000000p+1f) +
                              0x1.0000000000000p+0f);
                  if (v28 < 0x1.a36e2e0000000p-14f) {
                    v28 = 0x1.a36e2e0000000p-14f;
                  }
                  v30 = fmodf_alt1(v29, v28);
                  v31 = GameRoutine_c51ba0(v24 + 40, v30);
                  v32 = *v4;
                  v33 = *(_DWORD*)(v24 + 44);
                  v34 = v31 * v9[3];
                  if (v33 <= 2) {
                    switch (v33) {
                    case 0:
                      v32[18] = v34;
                      v9 += 5;
                      goto LABEL_7;
                    case 1:
                      v32[16] = v34;
                      v9 += 5;
                      goto LABEL_7;
                    case 2:
                      v32[12] = v34;
                      v9 += 5;
                      goto LABEL_7;
                    default:
                      break;
                    }
                  }
                  else {
                    if (v33 <= 4) {
                      if (v33 == 3) {
                        v32[13] = v34;
                        v9 += 5;
                      }
                      else {
                        v35 = *((_OWORD*)v32 + 3);
                        v9 += 5;
                        *((_QWORD*)&v35 + 1) = LODWORD(v34);
                        *((_OWORD*)v32 + 3) = v35;
                      }
                      goto LABEL_7;
                    }
                    if (v33 == 5) {
                      v32[8] = v34;
                    }
                    else if (v33 == 6) {
                      v32[17] = v34;
                      v9 += 5;
                      goto LABEL_7;
                    }
                  }
                }
              }
            }
          LABEL_6:
            v9 += 5;
            goto LABEL_7;
          }
        }
        else {
          if (v20 >= v12) {
            v20 %= v12;
          }
          if (v20 != v16) {
            goto LABEL_6;
          }
        }
        v18 = (__int64*)*v18;
        if (v18 == nullptr) {
          goto LABEL_6;
        }
      }
    }
    v4 += 2;
    if (v4 != v5) {
      continue;
    }
    break;
  }
}

void LightAnimModule_c60000(_QWORD* a1)
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
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = a1[9];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[10];
    if (v1 == v4) {
      goto LABEL_17;
    }
    do {
      v5 = *(_QWORD*)(v4 - 24);
      v6 = v4;
      if (v5 != 0) {
        *(_QWORD*)(v4 - 16) = v5;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v5);
      }
      v4 -= 88;
      if ((*(_BYTE*)(v6 - 88) & 1) != 0) {
        v8 = *(_QWORD*)(v6 - 72);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
        }
      }
    } while (v4 != v1);
    v10 = a1[9];
    a1[10] = v1;
    v1 = v10;
    if (v10 != 0) {
    LABEL_17:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v11, v1);
    }
  }
  v12 = (_QWORD*)a1[6];
  if (v12 != nullptr) {
    do {
      v14 = (_QWORD*)*v12;
      v15 = v12[3];
      if (v15 != 0) {
        v16 = *(_QWORD*)v3;
        v12[4] = v15;
        if (*(_QWORD*)(v16 + 200) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v13, (__int64)v12);
      v12 = v14;
    } while (v14 != nullptr);
  }
  v18 = a1[4];
  a1[4] = 0;
  if (v18 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v19, v18);
  }
}

void LightAnimModule_c60200(__int64** a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *a1;
  v2 = **a1;
  if (v2 != 0) {
    v3 = v1[1];
    for (i = fw_memory_g_heap_manager_ptr; v2 != v3; v3 -= 48) {
      v5 = *(_QWORD*)(v3 - 32);
      if (v5 != 0) {
        v6 = *(_QWORD*)(v3 - 24);
        if (v5 == v6) {
          goto LABEL_13;
        }
        do {
          v7 = *(_QWORD*)(v6 - 8);
          if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            std___1___shared_weak_count___release_weak_alt1(v7);
          }
          v6 -= 16;
        } while (v6 != v5);
        v8 = *(_QWORD*)(v3 - 32);
        *(_QWORD*)(v3 - 24) = v5;
        v5 = v8;
        if (v8 != 0) {
        LABEL_13:
          if (*(_QWORD*)(*(_QWORD*)i + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)i + v9, v5);
        }
      }
      v10 = *(_QWORD*)(v3 - 40);
      if (v10 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
    }
    v1[1] = v2;
    v11 = **a1;
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)i + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)i + v12, v11);
    }
  }
}

#pragma GCC visibility pop
