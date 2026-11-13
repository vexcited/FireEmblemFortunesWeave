#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ElementRenderer_a75e00_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("ElementRenderer_a75e00");
__int64 GameRoutine_a72660(__int64 result, int, __int64, __int64, __int64,
                           __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
void __attribute__((noreturn)) GameRoutine_a74650(void);
__int64 ElementRenderer_a74470(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6);
__int64** ElementRenderer_a748a0(__int64** result);
__int64** ElementRenderer_a74a20(__int64** result);
__int64 ElementRenderer_a75980(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               __int64 (**a5)(_QWORD));
__int64 ElementRenderer_a75e00(char** a1, __int64 a2, __int64 a3,
                               long double a4);
__int64 gfx_render_ElementRenderer_RenderMultithread_lambda0_Invoke(__int64 a1,
                                                                    int* a2);
__int64 ElementRenderer_a75980_alt1(
    _QWORD*, _QWORD*, _QWORD*, _QWORD*,
    __int64 (**)(_QWORD)) __asm__("ElementRenderer_a75980");
bool GameRoutine_a75ae0(_QWORD*, _QWORD*, __int64 (**)(__int64));
__int64 ElementRenderer_a74e00(__int64 result, __int64* a2,
                               __int64 (**a3)(__int64, __int64), __int64 a4,
                               char a5);

__int64 ElementRenderer_a74470(__int64 result, __int64 a2, __int64 a3,
                               __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6;
  _DWORD* v7;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;

  v6 = *(unsigned int*)(result + 8);
  v7 = *(_DWORD**)result;
  if ((v6 & 0x80000000) != 0) {
    v16 = *(_QWORD**)v7;
    v17 = *(_DWORD*)(*(_QWORD*)v7 + 24LL);
    v18 = *(int*)(*(_QWORD*)v7 + 28LL);
    *(_DWORD*)(*(_QWORD*)v7 + 28LL) = v18 + 1;
    if ((int)v18 >= v17) {
      v19 = a2;
      GameRoutine_a72660((__int64)v16, v18 + 1, a3, a4, a5, a6);
      a2 = v19;
    }
    v20 = *v16 + 24 * (v18 >> 8);
    v21 = *(_QWORD*)(v20 + 8);
    if (v21 >= *(_QWORD*)(v20 + 16)) {
      result = ElementRenderer_a75e00_alt1(v20, a2, a3);
    }
    else {
      v22 = *(_QWORD*)(a2 + 32);
      if (v22 != 0) {
        if (v22 == a2) {
          *(_QWORD*)(v21 + 32) = v21;
          (*(void (**)(_QWORD, unsigned __int64))(
              **(_QWORD**)(a2 + 32) + 24LL))(*(_QWORD*)(a2 + 32), v21);
        }
        else {
          *(_QWORD*)(v21 + 32) = v22;
          *(_QWORD*)(a2 + 32) = 0;
        }
      }
      else {
        *(_QWORD*)(v21 + 32) = 0;
      }
      v25 = *(_QWORD*)a3;
      v26 = *(_QWORD*)(a3 + 8);
      result = v21 + 80;
      *(_DWORD*)(v21 + 64) = *(_DWORD*)(a3 + 16);
      *(_QWORD*)(v21 + 48) = v25;
      *(_QWORD*)(v21 + 56) = v26;
    }
    *(_QWORD*)(v20 + 8) = result;
    ++v7[18];
  }
  else {
    v9 = *(_QWORD*)v7 + 32 * v6;
    v10 = *(_DWORD*)(v9 + 24);
    v11 = *(int*)(v9 + 28);
    *(_DWORD*)(v9 + 28) = v11 + 1;
    if ((int)v11 >= v10) {
      v12 = a2;
      result = GameRoutine_a72660(v9, (int)v11 + 1, a3, a4, a5, a6);
      a2 = v12;
    }
    v13 = *(_QWORD*)v9 + 24 * (v11 >> 8);
    v14 = *(_QWORD*)(v13 + 8);
    if (v14 >= *(_QWORD*)(v13 + 16)) {
      result = ElementRenderer_a75e00_alt1(v13, a2, a3);
      *(_QWORD*)(v13 + 8) = result;
    }
    else {
      v15 = *(_QWORD*)(a2 + 32);
      if (v15 != 0) {
        if (v15 == a2) {
          *(_QWORD*)(v14 + 32) = v14;
          result = (*(__int64 (**)(_QWORD, unsigned __int64))(
              **(_QWORD**)(a2 + 32) + 24LL))(*(_QWORD*)(a2 + 32), v14);
        }
        else {
          *(_QWORD*)(v14 + 32) = v15;
          *(_QWORD*)(a2 + 32) = 0;
        }
      }
      else {
        *(_QWORD*)(v14 + 32) = 0;
      }
      v23 = *(_QWORD*)(a3 + 8);
      v24 = *(_DWORD*)(a3 + 16);
      *(_QWORD*)(v14 + 48) = *(_QWORD*)a3;
      *(_QWORD*)(v14 + 56) = v23;
      *(_DWORD*)(v14 + 64) = v24;
      *(_QWORD*)(v13 + 8) = v14 + 80;
    }
  }
  return result;
}

__int64** ElementRenderer_a748a0(__int64** result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64** v15;

  v1 = *result;
  v2 = **result;
  if (v2 != 0) {
    v14 = *result;
    v15 = result;
    v3 = v1[1];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v2 != v3) {
      v5 = v1[1];
      do {
        v9 = *(_QWORD*)(v5 - 24);
        v5 -= 24;
        v7 = v9;
        if (v9 != 0) {
          v10 = *(_QWORD*)(v3 - 16);
          if (v7 == v10) {
            goto LABEL_5;
          }
          do {
            v11 = *(_QWORD*)(v10 - 8);
            if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
              result =
                  (__int64**)std___1___shared_weak_count___release_weak(v11);
            }
            v10 -= 16;
          } while (v10 != v7);
          v6 = *(_QWORD*)(v3 - 24);
          *(_QWORD*)(v3 - 16) = v7;
          v7 = v6;
          if (v6 != 0) {
          LABEL_5:
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            result =
                (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
          }
        }
        v3 = v5;
      } while (v2 != v5);
    }
    v14[1] = v2;
    v12 = **v15;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v13 = 56;
      }
      return (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13, v12);
    }
  }
  return result;
}

__int64** ElementRenderer_a74a20(__int64** result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64** v22;
  __int64 v23;

  v1 = *result;
  v2 = **result;
  if (v2 == 0) {
    return result;
  }
  v21 = *result;
  v22 = result;
  v3 = v1[1];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 == v3) {
    goto LABEL_28;
  }
  v5 = v1[1];
  v23 = **result;
  while (2) {
    v9 = *(_QWORD*)(v5 - 32);
    v5 -= 32;
    v7 = v9;
    if (v9 == 0) {
      goto LABEL_9;
    }
    v10 = *(_QWORD*)(v3 - 24);
    if (v7 == v10) {
      goto LABEL_5;
    }
    v11 = *(_QWORD*)(v3 - 24);
    while (2) {
      v15 = *(_QWORD*)(v11 - 24);
      v11 -= 24;
      v13 = v15;
      if (v15 == 0) {
        goto LABEL_18;
      }
      v16 = *(_QWORD*)(v10 - 16);
      if (v13 == v16) {
      LABEL_14:
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result =
            (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
        goto LABEL_18;
      }
      do {
        result = *(__int64***)(v16 - 48);
        v18 = v16 - 80;
        if ((__int64**)(v16 - 80) == result) {
          v17 = 4;
        LABEL_23:
          result = (__int64**)((__int64 (*)(void*))(*result)[v17])(result);
          goto LABEL_24;
        }
        if (result != nullptr) {
          v17 = 5;
          goto LABEL_23;
        }
      LABEL_24:
        v16 = v18;
      } while (v18 != v13);
      v12 = *(_QWORD*)(v10 - 24);
      *(_QWORD*)(v10 - 16) = v13;
      v13 = v12;
      if (v12 != 0) {
        goto LABEL_14;
      }
    LABEL_18:
      v10 = v11;
      if (v7 != v11) {
        continue;
      }
      break;
    }
    v6 = *(_QWORD*)(v3 - 32);
    v2 = v23;
    *(_QWORD*)(v3 - 24) = v7;
    v7 = v6;
    if (v6 != 0) {
    LABEL_5:
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v8 = 128;
      }
      else {
        v8 = 56;
      }
      result = (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
    }
  LABEL_9:
    v3 = v5;
    if (v2 != v5) {
      continue;
    }
    break;
  }
LABEL_28:
  v21[1] = v2;
  v19 = **v22;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v20 = 56;
    }
    return (__int64**)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v20, v19);
  }
  return result;
}

__int64 ElementRenderer_a74e00(__int64 result, __int64* a2,
                               __int64 (**a3)(__int64, __int64), __int64 a4,
                               char a5)
{
  __int64* v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 (*v14)(__int64, __int64);
  char v15;
  char v16;
  __int64 v17;
  char v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  char v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  char v50;
  __int64 v51;
  char v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  bool v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  char v78;
  __int64 v79;
  __int64* v80;
  bool v82;
  __int64 v83;
  __int64* v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  bool v91;
  __int64 v92;
  __int64* v93;
  __int64* v94;
  __int64 v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  __int64* v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  __int64 v104;
  __int64* v105;
  __int64* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64* v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64* v120;
  __int64* v121;
  __int64 v122;
  __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64 v126;

  v9 = (__int64*)result;
LABEL_2:
  v10 = v9;
  v124 = a2;
  while (1) {
    v9 = v10;
    v11 = a2 - v10;
    v12 = v11 - 2;
    if (v11 > 2) {
      break;
    }
    if ((unsigned __int64)v11 < 2) {
      return result;
    }
    if (v11 == 2) {
      result = (*a3)(*(a2 - 1), *v10);
      if ((result & 1) != 0) {
        v77 = *v10;
        *v10 = *(a2 - 1);
      LABEL_105:
        *(a2 - 1) = v77;
        return result;
      }
      return result;
    }
  LABEL_10:
    if (v11 <= 23) {
      v80 = v10 + 1;
      v82 = v10 == a2 || v80 == a2;
      if ((a5 & 1) != 0) {
        if (!v82) {
          v83 = 0;
          v84 = v10;
          do {
            v87 = *v84;
            v86 = v84[1];
            v84 = v80;
            result = (*a3)(v86, v87);
            if ((result & 1) != 0) {
              v88 = *v84;
              v89 = v83;
              do {
                *(__int64*)((char*)v10 + v89 + 8) =
                    *(__int64*)((char*)v10 + v89);
                if (v89 == 0) {
                  v85 = v10;
                  goto LABEL_120;
                }
                result = (*a3)(v88, *(__int64*)((char*)v10 + v89 - 8));
                v89 -= 8;
              } while ((result & 1) != 0);
              v85 = (__int64*)((char*)v10 + v89 + 8);
            LABEL_120:
              *v85 = v88;
            }
            v80 = v84 + 1;
            v83 += 8;
          } while (v84 + 1 != a2);
        }
      }
      else if (!v82) {
        do {
          v118 = *v9;
          v117 = v9[1];
          v9 = v80;
          result = (*a3)(v117, v118);
          if ((result & 1) != 0) {
            v119 = *v9;
            v120 = v9;
            do {
              v121 = v120;
              v122 = *--v120;
              v123 = *(v121 - 2);
              *v121 = v122;
              result = (*a3)(v119, v123);
            } while ((result & 1) != 0);
            *v120 = v119;
          }
          v80 = v9 + 1;
        } while (v9 + 1 != a2);
      }
      return result;
    }
    if (a4 == 0) {
      if (v10 != a2) {
        v90 = v12 >> 1;
        v125 = v12 >> 1;
        do {
          if (v125 >= v90) {
            v92 = (2 * (v90 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v93 = &v9[v92];
            if ((__int64)(2 * v90 + 2) < v11 &&
                ((*a3)(*v93, v93[1]) & 1) != 0) {
              ++v93;
              v92 = 2 * v90 + 2;
            }
            v94 = &v9[v90];
            result = (*a3)(*v93, *v94);
            if ((result & 1) == 0) {
              v95 = *v94;
              do {
                v96 = v93;
                *v94 = *v93;
                if (v125 < v92) {
                  break;
                }
                v97 = (2 * (v92 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v98 = 2 * v92 + 2;
                v93 = &v9[v97];
                if (v98 < v11 && ((*a3)(*v93, v93[1]) & 1) != 0) {
                  ++v93;
                  v97 = v98;
                }
                result = (*a3)(*v93, v95);
                v94 = v96;
                v92 = v97;
              } while ((result & 1) == 0);
              *v96 = v95;
            }
          }
          v91 = (__int64)v90-- <= 0;
        } while (!v91);
        v99 = v124;
        do {
          v100 = v99;
          v101 = 0;
          v102 = v9;
          v126 = *v9;
          do {
            v106 = &v102[v101];
            v107 = (2 * v101) | 1;
            v105 = v106 + 1;
            v108 = 2 * v101 + 2;
            if (v108 < v11) {
              v104 = v106[2];
              v103 = v106 + 2;
              result = (*a3)(*(v103 - 1), v104);
              if ((result & 1) != 0) {
                v105 = v103;
                v101 = v108;
              }
              else {
                v101 = v107;
              }
            }
            else {
              v101 = (2 * v101) | 1;
            }
            *v102 = *v105;
            v102 = v105;
          } while (v101 <= (__int64)((unsigned __int64)(v11 - 2) >> 1));
          v99 = v100 - 1;
          if (v105 == v100 - 1) {
            *v105 = v126;
          }
          else {
            *v105 = *v99;
            *v99 = v126;
            v109 = ((char*)v105 - (char*)v9 + 8) >> 3;
            v91 = v109 < 2;
            v110 = v109 - 2;
            if (!v91) {
              v111 = v110 >> 1;
              v112 = &v9[v110 >> 1];
              result = (*a3)(*v112, *v105);
              if ((result & 1) != 0) {
                v113 = *v105;
                do {
                  v114 = v112;
                  *v105 = *v112;
                  if (v111 == 0) {
                    break;
                  }
                  v111 = (v111 - 1) >> 1;
                  v112 = &v9[v111];
                  result = (*a3)(*v112, v113);
                  v105 = v114;
                } while ((result & 1) != 0);
                *v114 = v113;
              }
            }
          }
          v91 = v11-- <= 2;
        } while (!v91);
      }
      return result;
    }
    v13 = &v10[(unsigned __int64)v11 >> 1];
    v14 = *a3;
    if ((unsigned __int64)v11 < 0x81) {
      v18 = v14(*v9, *v13);
      v19 = (*a3)(*(a2 - 1), *v9);
      if ((v18 & 1) != 0) {
        v20 = *v13;
        if ((v19 & 1) != 0) {
          *v13 = *(a2 - 1);
          *(a2 - 1) = v20;
        }
        else {
          *v13 = *v9;
          *v9 = v20;
          if ((((__int64 (*)(_QWORD))*a3)(*(a2 - 1)) & 1) != 0) {
            v31 = *v9;
            *v9 = *(a2 - 1);
            *(a2 - 1) = v31;
          }
        }
      }
      else if ((v19 & 1) != 0) {
        v23 = *v9;
        *v9 = *(a2 - 1);
        *(a2 - 1) = v23;
        if (((*a3)(*v9, *v13) & 1) != 0) {
          v24 = *v13;
          *v13 = *v9;
          *v9 = v24;
        }
      }
      goto LABEL_55;
    }
    v15 = v14(*v13, *v9);
    v16 = (*a3)(*(a2 - 1), *v13);
    if ((v15 & 1) != 0) {
      v17 = *v9;
      if ((v16 & 1) != 0) {
        *v9 = *(a2 - 1);
        *(a2 - 1) = v17;
      }
      else {
        *v9 = *v13;
        *v13 = v17;
        if ((((__int64 (*)(_QWORD))*a3)(*(a2 - 1)) & 1) != 0) {
          v25 = *v13;
          *v13 = *(a2 - 1);
          *(a2 - 1) = v25;
        }
      }
    }
    else if ((v16 & 1) != 0) {
      v21 = *v13;
      *v13 = *(a2 - 1);
      *(a2 - 1) = v21;
      if (((*a3)(*v13, *v9) & 1) != 0) {
        v22 = *v9;
        *v9 = *v13;
        *v13 = v22;
      }
    }
    v26 = (*a3)(*(v13 - 1), v9[1]);
    v27 = (*a3)(*(a2 - 2), *(v13 - 1));
    if ((v26 & 1) != 0) {
      v28 = v9[1];
      if ((v27 & 1) != 0) {
        v9[1] = *(a2 - 2);
        *(a2 - 2) = v28;
      }
      else {
        v9[1] = *(v13 - 1);
        *(v13 - 1) = v28;
        if ((((__int64 (*)(_QWORD))*a3)(*(a2 - 2)) & 1) != 0) {
          v32 = *(v13 - 1);
          *(v13 - 1) = *(a2 - 2);
          *(a2 - 2) = v32;
        }
      }
    }
    else if ((v27 & 1) != 0) {
      v29 = *(v13 - 1);
      *(v13 - 1) = *(a2 - 2);
      *(a2 - 2) = v29;
      if (((*a3)(*(v13 - 1), v9[1]) & 1) != 0) {
        v30 = v9[1];
        v9[1] = *(v13 - 1);
        *(v13 - 1) = v30;
      }
    }
    v33 = (*a3)(v13[1], v9[2]);
    v34 = (*a3)(*(a2 - 3), v13[1]);
    if ((v33 & 1) != 0) {
      v35 = v9[2];
      if ((v34 & 1) != 0) {
        v9[2] = *(a2 - 3);
        *(a2 - 3) = v35;
      }
      else {
        v9[2] = v13[1];
        v13[1] = v35;
        if ((((__int64 (*)(_QWORD))*a3)(*(a2 - 3)) & 1) != 0) {
          v38 = v13[1];
          v13[1] = *(a2 - 3);
          *(a2 - 3) = v38;
        }
      }
    }
    else if ((v34 & 1) != 0) {
      v36 = v13[1];
      v13[1] = *(a2 - 3);
      *(a2 - 3) = v36;
      if (((*a3)(v13[1], v9[2]) & 1) != 0) {
        v37 = v9[2];
        v9[2] = v13[1];
        v13[1] = v37;
      }
    }
    v39 = (*a3)(*v13, *(v13 - 1));
    v40 = (*a3)(v13[1], *v13);
    if ((v39 & 1) == 0) {
      v42 = *v13;
      if ((v40 & 1) == 0) {
        goto LABEL_54;
      }
      *v13 = v13[1];
      v13[1] = v42;
      v44 = ((__int64 (*)(void))*a3)();
      v42 = *v13;
      if ((v44 & 1) == 0) {
        goto LABEL_54;
      }
      v45 = *(v13 - 1);
      *(v13 - 1) = v42;
      *v13 = v45;
      goto LABEL_53;
    }
    v41 = *(v13 - 1);
    if ((v40 & 1) != 0) {
      v42 = *v13;
      v43 = v13[1];
      v13[1] = v41;
      *(v13 - 1) = v43;
    }
    else {
      v46 = v13[1];
      *(v13 - 1) = *v13;
      *v13 = v41;
      v47 = ((__int64 (*)(__int64))*a3)(v46);
      v42 = *v13;
      if ((v47 & 1) != 0) {
        v45 = v13[1];
        *v13 = v45;
        v13[1] = v42;
      LABEL_53:
        v42 = v45;
      }
    }
  LABEL_54:
    v48 = *v9;
    *v9 = v42;
    *v13 = v48;
  LABEL_55:
    v49 = *v9;
    --a4;
    if ((a5 & 1) != 0 ||
        (v50 = (*a3)(*(v9 - 1), *v9), v49 = *v9, (v50 & 1) != 0)) {
      v51 = 0;
      do {
        v52 = (*a3)(v9[++v51], v49);
      } while ((v52 & 1) != 0);
      v53 = &v9[v51];
      v54 = a2;
      if (v51 == 1) {
        v54 = a2;
        do {
          if (v53 >= v54) {
            break;
          }
          v56 = *--v54;
        } while (((*a3)(v56, v49) & 1) == 0);
      }
      else {
        do {
          v55 = *--v54;
        } while (((*a3)(v55, v49) & 1) == 0);
      }
      if (v53 >= v54) {
        v62 = v53 - 1;
        if (v9 == v53 - 1) {
          goto LABEL_75;
        }
      LABEL_74:
        *v9 = *v62;
        goto LABEL_75;
      }
      v57 = &v9[v51];
      v58 = v54;
      do {
        v59 = *v57;
        *v57 = *v58;
        *v58 = v59;
        do {
          v60 = v57[1];
          ++v57;
        } while (((*a3)(v60, v49) & 1) != 0);
        do {
          v61 = *--v58;
        } while (((*a3)(v61, v49) & 1) == 0);
      } while (v57 < v58);
      a2 = v124;
      v62 = v57 - 1;
      if (v9 != v62) {
        goto LABEL_74;
      }
    LABEL_75:
      *v62 = v49;
      if (v53 < v54) {
        goto LABEL_78;
      }
      v10 = v62 + 1;
      v63 = GameRoutine_a75ae0(v9, v62, (__int64 (**)(__int64))a3);
      result = ((__int64 (*)(_QWORD*, _QWORD*, __int64 (**)(__int64)))
                    GameRoutine_a75ae0)(v62 + 1, a2, (__int64 (**)(__int64))a3);
      if ((result & 1) != 0) {
        a2 = v62;
        if (!v63) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v63) {
      LABEL_78:
        result = ElementRenderer_a74e00((__int64)v9, v62,
                                        (__int64 (**)(__int64))a3, a4, a5 & 1);
        a5 = 0;
        v10 = v62 + 1;
      }
    }
    else {
      result = (*a3)(*v9, *(a2 - 1));
      if ((result & 1) != 0) {
        v10 = v9;
        do {
          v64 = v10[1];
          ++v10;
          result = (*a3)(v49, v64);
        } while ((result & 1) == 0);
      }
      else {
        v65 = (unsigned __int64)(v9 + 1);
        do {
          v10 = (__int64*)v65;
          if (v65 >= (unsigned __int64)a2) {
            break;
          }
          v65 += 8LL;
          result = (*a3)(v49, *v10);
        } while ((result & 1) == 0);
      }
      v66 = a2;
      if (v10 < a2) {
        v66 = a2;
        do {
          v67 = *--v66;
          result = (*a3)(v49, v67);
        } while ((result & 1) != 0);
      }
      while (v10 < v66) {
        v68 = *v10;
        *v10 = *v66;
        *v66 = v68;
        do {
          v69 = v10[1];
          ++v10;
        } while (((*a3)(v49, v69) & 1) == 0);
        do {
          v70 = *--v66;
          result = (*a3)(v49, v70);
        } while ((result & 1) != 0);
      }
      v71 = v10 - 1;
      if (v9 != v10 - 1) {
        *v9 = *v71;
      }
      a5 = 0;
      *v71 = v49;
    }
  }
  if (v11 != 3) {
    if (v11 == 4) {
      return ElementRenderer_a75980_alt1(v10, v10 + 1, v10 + 2, a2 - 1,
                                         (__int64 (**)(_QWORD))a3);
    }
    if (v11 == 5) {
      ElementRenderer_a75980_alt1(v10, v10 + 1, v10 + 2, v10 + 3,
                                  (__int64 (**)(_QWORD))a3);
      result = (*a3)(*(a2 - 1), v10[3]);
      if ((result & 1) == 0) {
        return result;
      }
      v72 = v10[3];
      v10[3] = *(a2 - 1);
      *(a2 - 1) = v72;
      result = (*a3)(v10[3], v10[2]);
      if ((result & 1) == 0) {
        return result;
      }
      v73 = v10[2];
      v10[2] = v10[3];
      v10[3] = v73;
      result = ((__int64 (*)(void))*a3)();
      if ((result & 1) == 0) {
        return result;
      }
      v75 = v10[1];
      v74 = v10[2];
      v76 = *v10;
      v10[1] = v74;
      v10[2] = v75;
      result = (*a3)(v74, v76);
      goto LABEL_162;
    }
    goto LABEL_10;
  }
  v78 = (*a3)(v10[1], *v10);
  result = (*a3)(*(a2 - 1), v10[1]);
  if ((v78 & 1) == 0) {
    if ((result & 1) == 0) {
      return result;
    }
    v115 = v10[1];
    v10[1] = *(a2 - 1);
    *(a2 - 1) = v115;
    result = (*a3)(v10[1], *v10);
  LABEL_162:
    if ((result & 1) != 0) {
      v116 = *v10;
      *v10 = v10[1];
      v10[1] = v116;
    }
    return result;
  }
  v79 = *v10;
  if ((result & 1) != 0) {
    *v10 = *(a2 - 1);
    *(a2 - 1) = v79;
  }
  else {
    *v10 = v10[1];
    v10[1] = v79;
    result = ((__int64 (*)(_QWORD))*a3)(*(a2 - 1));
    if ((result & 1) != 0) {
      v77 = v10[1];
      v10[1] = *(a2 - 1);
      goto LABEL_105;
    }
  }
  return result;
}

__int64 ElementRenderer_a75980(_QWORD* a1, _QWORD* a2, _QWORD* a3, _QWORD* a4,
                               __int64 (**a5)(_QWORD))
{
  char v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v10 = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a2, *a1);
  v11 = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a3, *a2);
  if ((v10 & 1) != 0) {
    v12 = *a1;
    if ((v11 & 1) != 0) {
      *a1 = *a3;
      *a3 = v12;
    }
    else {
      *a1 = *a2;
      *a2 = v12;
      if (((*a5)(*a3) & 1) != 0) {
        v15 = *a2;
        *a2 = *a3;
        *a3 = v15;
      }
    }
  }
  else if ((v11 & 1) != 0) {
    v13 = *a2;
    *a2 = *a3;
    *a3 = v13;
    if ((((__int64 (*)(_QWORD, _QWORD))*a5)(*a2, *a1) & 1) != 0) {
      v14 = *a1;
      *a1 = *a2;
      *a2 = v14;
    }
  }
  result = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a4, *a3);
  if ((result & 1) != 0) {
    v17 = *a3;
    *a3 = *a4;
    *a4 = v17;
    result = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a3, *a2);
    if ((result & 1) != 0) {
      v18 = *a2;
      *a2 = *a3;
      *a3 = v18;
      result = ((__int64 (*)(_QWORD, _QWORD))*a5)(*a2, *a1);
      if ((result & 1) != 0) {
        v19 = *a1;
        *a1 = *a2;
        *a2 = v19;
      }
    }
  }
  return result;
}

__int64 ElementRenderer_a75e00(char** a1, __int64 a2, __int64 a3,
                               long double a4)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  char* v17;
  int v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  int v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  char* v27;
  __int64 v28;

  v4 = a1[1] - *a1;
  v5 = 1 - 0x3333333333333333LL * (v4 >> 4);
  if (v5 > 0x333333333333333LL) {
    GameRoutine_a74650();
  }
  v9 = fw_memory_g_heap_manager_ptr;
  if (0x999999999999999ALL * ((a1[2] - *a1) >> 4) > v5) {
    v5 = 0x999999999999999ALL * ((a1[2] - *a1) >> 4);
  }
  if (0xCCCCCCCCCCCCCCCDLL * ((a1[2] - *a1) >> 4) >= 0x199999999999999LL) {
    v10 = 0x333333333333333LL;
  }
  else {
    v10 = v5;
  }
  if (v10 != 0) {
    if (v10 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v10, 16, 0);
  }
  else {
    v11 = 0;
  }
  v12 = *(_QWORD*)(a2 + 32);
  v13 = v11 + v4;
  if (v12 != 0) {
    if (v12 == a2) {
      *(_QWORD*)(v13 + 32) = v13;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v12 + 24LL))(v12, v13);
    }
    else {
      *(_QWORD*)(v13 + 32) = v12;
      *(_QWORD*)(a2 + 32) = 0;
    }
  }
  else {
    *(_QWORD*)(v13 + 32) = 0;
  }
  v14 = *(_QWORD*)(a3 + 8);
  v15 = v11 + 80 * v10;
  v16 = *a1;
  v17 = a1[1];
  *(_QWORD*)(v13 + 48) = *(_QWORD*)a3;
  *(_QWORD*)(v13 + 56) = v14;
  v18 = *(_DWORD*)(a3 + 16);
  v19 = v13 + 80;
  *(_DWORD*)(v13 + 64) = v18;
  v20 = (char*)(v13 + v16 - v17);
  if (v16 != v17) {
    v21 = v16;
    v22 = (char*)(v13 + v16 - v17);
    do {
      v25 = *((char**)v21 + 4);
      if (v25 != nullptr) {
        if (v21 == v25) {
          *((_QWORD*)v22 + 4) = v22;
          (*(void (**)(_QWORD, char*))(**((_QWORD**)v21 + 4) + 24LL))(
              *((_QWORD*)v21 + 4), v22);
        }
        else {
          *((_QWORD*)v22 + 4) = v25;
          *((_QWORD*)v21 + 4) = 0;
        }
      }
      else {
        *((_QWORD*)v22 + 4) = 0;
      }
      v23 = *((_DWORD*)v21 + 16);
      *((_QWORD*)v22 + 7) = *((_QWORD*)v21 + 7);
      v24 = *((_QWORD*)v21 + 6);
      *((_DWORD*)v22 + 16) = v23;
      v21 += 80;
      *((_QWORD*)v22 + 6) = v24;
      v22 += 80;
    } while (v21 != v17);
    while (1) {
      v27 = *((char**)v16 + 4);
      if (v16 == v27) {
        v26 = 32;
      }
      else {
        if (v27 == nullptr) {
          goto LABEL_26;
        }
        v26 = 40;
      }
      (*(void (**)(void*))(*(_QWORD*)v27 + v26))((void*)v27);
    LABEL_26:
      v16 += 80;
      if (v16 == v17) {
        v16 = *a1;
        break;
      }
    }
  }
  *a1 = v20;
  a1[1] = (char*)v19;
  a1[2] = (char*)v15;
  if (v16 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v28 = 56;
    }
    ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free_alt1)(
        *(_QWORD*)v9 + v28, (__int64)v16);
  }
  return v19;
}

__int64 gfx_render_ElementRenderer_RenderMultithread_lambda0_Invoke(__int64 a1,
                                                                    int* a2)
{
  __int64 v2;
  int v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  int v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = *a2;
  v4 = (_QWORD*)(*(_QWORD*)(a1 + 8) + 560LL);
  if (*(_BYTE*)(v2 + 76) == 1) {
    LODWORD(v5) = *(_DWORD*)(v2 + 72) +
                  ((*(_QWORD*)(v2 + 32) - *(_QWORD*)(v2 + 24)) >> 3);
  }
  else {
    v5 = (*(_QWORD*)(v2 + 56) - *(_QWORD*)(v2 + 48)) >> 3;
  }
  LODWORD(v6) = (int)v5 / 5 * v3;
  v7 = v6 + (int)v5 / 5;
  if ((int)v5 < v7) {
    v7 = v5;
  }
  if (v3 >= 4) {
    v8 = v5;
  }
  else {
    v8 = v7;
  }
  (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 40LL))(*v4);
  if ((*(_BYTE*)(v2 + 76) & 1) == 0) {
    if ((int)v6 >= v8) {
      return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
    }
    v6 = (int)v6;
    while (1) {
      v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 48) + 8 * v6) + 32LL);
      if (v11 == 0) {
        break;
      }
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v11 + 48LL))(v11, v4);
      if (v8 == ++v6) {
        return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
      }
    }
  LABEL_26:
    GameRoutine_60a310();
  }
  if (*(int*)(v2 + 72) <= 0) {
    if ((int)v6 >= v8) {
      return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
    }
    v6 = (int)v6;
    while (1) {
      v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 8 * v6) + 32LL);
      if (v12 == 0) {
        break;
      }
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 48LL))(v12, v4);
      if (v8 == ++v6) {
        return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
      }
    }
    goto LABEL_26;
  }
  if ((int)v6 < v8) {
    v9 = *(_QWORD**)v2;
    v6 = (int)v6;
    while (1) {
      v10 = *(_QWORD*)(*(_QWORD*)(*v9 + 24 * (v6 >> 8)) +
                       80LL * (unsigned __int8)v6 + 32);
      if (v10 == 0) {
        break;
      }
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v10 + 48LL))(v10, v4);
      if (v8 == ++v6) {
        return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
      }
    }
    goto LABEL_26;
  }
  return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v4 + 48LL))(*v4);
}

#pragma GCC visibility pop
