#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_c761a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 (*gfxa_render_GrassObject_vtable[])();
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_ad5790(void);
_QWORD* GrassObject_Destructor(_QWORD* result);
__int64 GrassObject_Unknown2(__int64 result);

_QWORD* GrassObject_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
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
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v1 = result[31];
  v2 = result;
  *result = gfxa_render_GrassObject_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[32] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = (_QWORD*)v2[28];
  if (v6 != nullptr) {
    v7 = (_QWORD*)v2[29];
    if (v6 == v7) {
      goto LABEL_14;
    }
    do {
      v8 = *(v7 - 6);
      *(v7 - 6) = 0;
      if (v8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
      }
      v9 = (_QWORD*)*(v7 - 7);
      v7 -= 7;
      result = v9;
      *v7 = 0;
      if (v9 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    } while (v7 != v6);
    v10 = v2[28];
    v2[29] = v6;
    if (v10 != 0) {
    LABEL_14:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
    }
  }
  v12 = (_QWORD*)v2[25];
  if (v12 != nullptr) {
    v13 = (_QWORD*)v2[26];
    if (v12 == v13) {
      goto LABEL_26;
    }
    do {
      v14 = *(v13 - 6);
      *(v13 - 6) = 0;
      if (v14 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
      }
      v15 = (_QWORD*)*(v13 - 7);
      v13 -= 7;
      result = v15;
      *v13 = 0;
      if (v15 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    } while (v13 != v12);
    v16 = v2[25];
    v2[26] = v12;
    if (v16 != 0) {
    LABEL_26:
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v17 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
    }
  }
  v18 = v2[22];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    v2[23] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20);
  }
  v21 = v2[19];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    v2[20] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23);
  }
  v24 = v2[18];
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v24);
  }
  v25 = v2[16];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v25);
  }
  v26 = v2[10];
  *v2 = gfx_render_Object_vtable;
  if (v26 != 0) {
    v27 = *(_QWORD*)v3;
    v2[11] = v26;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v27 + v28);
  }
  if ((v2[1] & 1) != 0 && v2[3] != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v29 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v29);
  }
  return result;
}

__int64 GrassObject_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  bool v45;
  __int64 v46;
  __int64 v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  int v59;
  int v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  char v65;
  char v66;
  char v67;
  char v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64* v77;
  __int64 v78;
  int v79;
  __int64 v80;
  float v81;
  int v82;
  bool v83;
  bool v84;
  int v85;
  int v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  int v91;
  unsigned __int64 v92;
  unsigned int v93;
  float v94;
  float v95;
  __int64 v96;
  _DWORD* v97;
  _DWORD* v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  char v113;
  __int64 v114;
  __int64 v115;
  _QWORD* v116;
  _QWORD* v117;

  if (*(_BYTE*)(result + 32) == 1) {
    v1 = *(_QWORD*)(result + 152);
    v2 = result;
    v3 = *(_QWORD*)(result + 176);
    v4 = *(_QWORD*)(result + 160);
    *(_QWORD*)(result + 272) = 0x6400000000LL;
    *(_DWORD*)(result + 280) = 0;
    *(_BYTE*)(result + 284) = 0;
    *(_QWORD*)(result + 184) = v3;
    v116 = (_QWORD*)(result + 152);
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v6 = (v4 - v1) >> 6;
    if (v6 > (*(_QWORD*)(result + 192) - v3) >> 4) {
      if (v6 >> 60 != 0) {
      LABEL_169:
        GameRoutine_ad5790();
      }
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, (v4 - v1) >> 2, 16, 0);
      *(_QWORD*)(v2 + 176) = result;
      *(_QWORD*)(v2 + 184) = result;
      *(_QWORD*)(v2 + 192) = result + 16 * v6;
      if (v3 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v5 + v7);
        v1 = *(_QWORD*)(v2 + 152);
        v4 = *(_QWORD*)(v2 + 160);
      }
    }
    if (v1 != v4) {
      v8 = 0;
      do {
        if (*(_BYTE*)v1 == 1 && (*(_BYTE*)(v1 + 48) & 1) == 0 &&
            (*(_BYTE*)(v1 + 104) != 1 || *(_QWORD*)(v1 + 96) != 0)) {
          v11 = *(_DWORD*)(v1 + 56);
          v13 = *(_QWORD*)(v2 + 184);
          v12 = *(_QWORD*)(v2 + 192);
          if (v13 >= v12) {
            v15 = *(_QWORD*)(v2 + 176);
            v16 = v13 - v15;
            v17 = (__int64)(v13 - v15) >> 4;
            v18 = v17 + 1;
            if ((unsigned __int64)(v17 + 1) >> 60 != 0) {
              goto LABEL_169;
            }
            v19 = v12 - v15;
            if (v19 >> 3 > v18) {
              v18 = v19 >> 3;
            }
            v20 = (unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF0LL
                      ? 0xFFFFFFFFFFFFFFFLL
                      : v18;
            if (v20 != 0) {
              if (v20 >> 60 != 0) {
                goto LABEL_170;
              }
              v21 = fw_memory_HeapManager_Allocate(*v5, 16 * v20, 16, 0);
            }
            else {
              v21 = 0;
            }
            v22 = v21 + v16;
            v23 = v21 + 16 * v20;
            *(_DWORD*)(v22 + 8) = v11;
            v24 = v21 + v16 - 16 * v17;
            *(_QWORD*)v22 = v8;
            v14 = v21 + v16 + 16;
            result = memcpy(v24, v15, v16);
            *(_QWORD*)(v2 + 176) = v24;
            *(_QWORD*)(v2 + 184) = v14;
            *(_QWORD*)(v2 + 192) = v23;
            v5 = &fw_memory_g_heap_manager;
            if (v15 != 0) {
              v25 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v25 = 56;
              }
              result =
                  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v25);
            }
          }
          else {
            *(_QWORD*)v13 = v8;
            *(_DWORD*)(v13 + 8) = v11;
            v14 = v13 + 16;
          }
          *(_QWORD*)(v2 + 184) = v14;
          v26 = *(_DWORD*)(v1 + 60);
          if (*(_DWORD*)(v1 + 56) != v26 && *(float*)(v1 + 64) > 0.0) {
            v27 = *(_QWORD*)(v2 + 192);
            if (v14 < v27) {
              *(_QWORD*)v14 = v8;
              *(_DWORD*)(v14 + 8) = v26;
              v9 = v14 + 16;
            }
            else {
              v28 = *(_QWORD*)(v2 + 176);
              v29 = v14 - v28;
              v30 = (__int64)(v14 - v28) >> 4;
              v31 = v30 + 1;
              if ((unsigned __int64)(v30 + 1) >> 60 != 0) {
                goto LABEL_169;
              }
              v32 = v27 - v28;
              if (v32 >> 3 > v31) {
                v31 = v32 >> 3;
              }
              if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF0LL) {
                v33 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v33 = v31;
              }
              if (v33 != 0) {
                if (v33 >> 60 != 0) {
                LABEL_170:
                  GameRoutine_60a210(result);
                }
                v34 = fw_memory_HeapManager_Allocate(*v5, 16 * v33, 16, 0);
              }
              else {
                v34 = 0;
              }
              v35 = v34 + v29;
              v36 = v34 + 16 * v33;
              *(_DWORD*)(v35 + 8) = v26;
              v37 = v34 + v29 - 16 * v30;
              *(_QWORD*)v35 = v8;
              v9 = v34 + v29 + 16;
              result = memcpy(v37, v28, v29);
              *(_QWORD*)(v2 + 176) = v37;
              *(_QWORD*)(v2 + 184) = v9;
              *(_QWORD*)(v2 + 192) = v36;
              v5 = &fw_memory_g_heap_manager;
              if (v28 != 0) {
                v38 = 128;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                  v38 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    fw_memory_g_heap_manager + v38);
              }
            }
            *(_QWORD*)(v2 + 184) = v9;
          }
        }
        ++v8;
        v1 += 128;
      } while (v1 != v4);
    }
    v39 = *(_QWORD*)(v2 + 176);
    v40 = *(_QWORD*)(v2 + 184);
    v117 = v116;
    if ((v40 - v39) >> 4 < 1) {
      v44 = 0;
    LABEL_58:
      GameRoutine_c761a0(v39, v40, &v117, (v40 - v39) >> 4, 0, v44);
    }
    else {
      v41 = (v40 - v39) >> 4;
      v42 = GameData_212c060;
      while (1) {
        v43 = GameRoutine_1a09d20(16 * v41, v42);
        if (v43 != 0) {
          break;
        }
        v44 = v41 >> 1;
        v45 = v41 > 1;
        v41 >>= 1;
        if (!v45) {
          goto LABEL_58;
        }
      }
      GameRoutine_c761a0(v39, v40, &v117, (v40 - v39) >> 4, v43, v41);
      v46 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v46);
    }
    if (*(int*)(v2 + 112) >= 1) {
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      while (1) {
        v53 = 56 * v47;
        v54 = *(_QWORD*)(v2 + 248) + 12 * v47;
        *(_DWORD*)(v54 + 4) = 0;
        v55 = *(_QWORD*)(v2 + 200) + 56 * v47;
        v56 = *(_DWORD*)(v55 + 16);
        v45 = v56 < -1;
        v57 = ((_BYTE)v56 + 1) & 1;
        if (v45) {
          v57 = -v57;
        }
        *(_DWORD*)(v55 + 16) = v57;
        v58 = *(_QWORD*)(v2 + 224) + v53;
        v59 = *(_DWORD*)(v58 + 16);
        v45 = v59 < -1;
        v60 = ((_BYTE)v59 + 1) & 1;
        if (v45) {
          v60 = -v60;
        }
        *(_DWORD*)(v58 + 16) = v60;
        if (v50 >= v49) {
          v61 = v49;
        }
        else {
          v61 = v50;
        }
        v62 = *(_QWORD*)(v2 + 176);
        v63 = (*(_QWORD*)(v2 + 184) - v62) >> 4;
        if (v63 <= v61) {
          goto LABEL_64;
        }
        while (1) {
          v64 = *v116 + (*(_QWORD*)(v62 + 16 * v61) << 7);
          if (*(float*)(v64 + 64) > 0.0 || (*(_BYTE*)(v64 + 72) & 1) != 0) {
            v65 = 1;
            v66 = 1;
            if ((unsigned int)v61 < v50) {
              goto LABEL_82;
            }
          }
          else {
            v65 = *(_BYTE*)(v64 + 88);
            if (*(_QWORD*)(v64 + 80) != 0) {
              v66 = 0;
            }
            else {
              v66 = *(_BYTE*)(v64 + 88);
            }
            if ((unsigned int)v61 < v50) {
              goto LABEL_82;
            }
          }
          if ((v65 & 1) != 0) {
            v68 = 1;
            goto LABEL_90;
          }
        LABEL_82:
          v67 = (unsigned int)v61 < v49 ? 1 : v66;
          if ((v67 & 1) == 0) {
            break;
          }
          v61 = (unsigned int)(v61 + 1);
          if (v63 <= v61) {
            goto LABEL_64;
          }
        }
        v68 = 0;
      LABEL_90:
        v69 = *(_DWORD*)(v62 + 16 * v61 + 8);
        *(_BYTE*)(v54 + 8) = v68;
        *(_DWORD*)v54 = v69;
        v70 = *(_QWORD*)(*(_QWORD*)(v2 + 200) + v53 +
                         8LL * *(int*)(*(_QWORD*)(v2 + 200) + v53 + 16));
        v115 = v70;
        v71 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 56LL))(v70);
        v72 = *(_QWORD*)(*(_QWORD*)(v2 + 224) + v53 +
                         8LL * *(int*)(*(_QWORD*)(v2 + 224) + v53 + 16));
        v73 = (*(__int64 (**)(__int64))(*(_QWORD*)v72 + 56LL))(v72);
        v74 = *(unsigned __int8*)(v54 + 8);
        v75 = *(_QWORD*)(v2 + 176);
        if (*(_BYTE*)(v54 + 8) != 0) {
          v76 = v50;
        }
        else {
          v76 = v49;
        }
        if (v76 >= (*(_QWORD*)(v2 + 184) - v75) >> 4) {
          goto LABEL_159;
        }
        while (2) {
          v77 = (__int64*)(v75 + 16 * v76);
          v78 = *v77;
          v79 = *((_DWORD*)v77 + 2);
          v80 = *v116 + (v78 << 7);
          v81 = *(float*)(v80 + 64);
          if (v81 > 0.0 || (*(_BYTE*)(v80 + 72) & 1) != 0 ||
              ((v82 = *(unsigned __int8*)(v80 + 88)) == 1
                   ? (v83 = *(_QWORD*)(v80 + 80) == 0)
                   : (v83 = false),
               v83)) {
            if ((*(_BYTE*)(v54 + 8) & 1) != 0) {
              goto LABEL_112;
            }
          LABEL_95:
            if (v74 != 0) {
              v50 = v76 + 1;
            }
            else {
              v49 = v76 + 1;
            }
          LABEL_98:
            v75 = *(_QWORD*)(v2 + 176);
            if (v74 != 0) {
              v76 = v50;
            }
            else {
              v76 = v49;
            }
            if (v76 >= (*(_QWORD*)(v2 + 184) - v75) >> 4) {
              goto LABEL_159;
            }
            continue;
          }
          break;
        }
        if ((v82 & 1) == 0 && (*(_BYTE*)(v54 + 8) & 1) != 0) {
          goto LABEL_95;
        }
      LABEL_112:
        if (v79 != *(_DWORD*)v54) {
          if (*(int*)(v54 + 4) > 0) {
            goto LABEL_159;
          }
          *(_DWORD*)v54 = v79;
        }
        v84 = v81 <= 0.0 || *(_BYTE*)(v54 + 8) == 0;
        v85 = *(unsigned __int8*)(v54 + 8);
        if (!v84) {
          v86 = *(_DWORD*)(v80 + 60);
          if (v86 >= *(_DWORD*)(v80 + 56)) {
            v86 = *(_DWORD*)(v80 + 56);
          }
          v85 = v79 == v86;
        }
        v87 = 120;
        if (*(_BYTE*)(v80 + 104) != 0) {
          v87 = 96;
        }
        v88 = *(_QWORD*)(v80 + v87);
        if (*(_BYTE*)(v80 + 88) != 0) {
          v89 = *(_QWORD*)(v80 + 80);
        }
        else {
          v89 = *(_QWORD*)(v80 + v87);
        }
        if (*(_BYTE*)(v54 + 8) != 0) {
          if (v81 <= 0.0) {
            if (*(_BYTE*)(v80 + 72) != 0) {
              v90 = 0;
            }
            else {
              v90 = v89;
            }
          }
          else {
            v90 = 0;
            if (v85 == 0) {
              v88 = v89;
            }
          }
        }
        else {
          v90 = 0;
          v88 = v89;
        }
        v91 = *(_DWORD*)(v54 + 4);
        if (v74 != 0) {
          v92 = v52;
        }
        else {
          v92 = v51;
        }
        if (v88 <= v92) {
        LABEL_155:
          if (v91 == 1024) {
            goto LABEL_159;
          }
          if (v74 != 0) {
            v52 = 0;
            ++v50;
          }
          else {
            ++v49;
            v51 = 0;
          }
          goto LABEL_98;
        }
        v93 = v92 + 1;
        while (v91 != 1024) {
          if (v90 <= v92) {
            v97 = (_DWORD*)(v71 + 48LL * v91);
            v98 = (_DWORD*)(*(_QWORD*)(v80 + 112) + 60 * v92);
            v99 = v98[1];
            v100 = v98[6];
            v101 = v98[7];
            v103 = v98[2];
            v102 = v98[3];
            v104 = v98[4];
            v105 = v98[5];
            v107 = v98[8];
            v106 = v98[9];
            v108 = v98[10];
            v109 = v98[11];
            *v97 = *v98;
            v97[1] = v102;
            v97[2] = v100;
            v97[3] = v106;
            v97[4] = v99;
            v97[5] = v104;
            v97[6] = v101;
            v97[7] = v108;
            v97[8] = v103;
            v97[9] = v105;
            v97[10] = v107;
            v97[11] = v109;
            if (v89 <= v92) {
              v94 = *(float*)(v80 + 76);
              v95 = 0.0;
            }
            else if (v81 <= 0.0) {
              v95 = 0.0;
              v94 = 1.0;
            }
            else {
              v94 = 1.0 - *(float*)(v80 + 64);
              if (*(_DWORD*)(v80 + 56) == v79) {
                v95 = 0.0;
              }
              else {
                v95 = 1.0;
              }
            }
            ++v48;
            v96 = v73 + 16LL * *(int*)(v54 + 4);
            *(float*)v96 = v94;
            *(float*)(v96 + 4) = v95;
            *(_QWORD*)(v96 + 8) = 1065353216;
            v91 = *(_DWORD*)(v54 + 4) + 1;
            *(_DWORD*)(v54 + 4) = v91;
          }
          v92 = v93;
          if (v74 != 0) {
            v52 = v93;
          }
          else {
            v51 = v93;
          }
          ++v93;
          if (v88 <= v92) {
            goto LABEL_155;
          }
        }
      LABEL_159:
        (*(void (**)(__int64))(*(_QWORD*)v72 + 64LL))(v72);
        (*(void (**)(__int64))(*(_QWORD*)v115 + 64LL))(v115);
        if (*(int*)(v54 + 4) >= 1) {
          *(_DWORD*)(v2 + 272) = v47 + 1;
          v110 = *(_DWORD*)(v2 + 276);
          if (v110 >= *(_DWORD*)v54) {
            v110 = *(_DWORD*)v54;
          }
          v111 = *(_DWORD*)(v2 + 280);
          *(_DWORD*)(v2 + 276) = v110;
          v112 = *(_DWORD*)v54;
          if (*(_DWORD*)v54 <= v111) {
            v112 = v111;
          }
          v113 = *(_BYTE*)(v2 + 284);
          *(_DWORD*)(v2 + 280) = v112;
          *(_BYTE*)(v2 + 284) = v113 | *(_BYTE*)(v54 + 8);
        }
      LABEL_64:
        if (++v47 >= *(int*)(v2 + 112)) {
          goto LABEL_166;
        }
      }
    }
    v48 = 0;
  LABEL_166:
    v114 = *(_QWORD*)(v2 + 120);
    *(_DWORD*)(v2 + 288) = v48;
    (*(void (**)(__int64))(*(_QWORD*)v114 + 16LL))(v114);
    result = *(_QWORD*)(v2 + 136);
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    }
  }
  return result;
}

#pragma GCC visibility pop
