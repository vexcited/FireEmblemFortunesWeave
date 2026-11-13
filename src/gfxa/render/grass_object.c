#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_c761a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 (*gfxa_render_GrassObject_vtable[])();
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_ad5790(void);
_QWORD*
GrassObject_Destructor_alt1(_QWORD* result) __asm__("GrassObject_Destructor");
__int64 GrassObject_Unknown2(__int64 result);
__int64 GameRoutine_c75d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c761a0_alt1(__int64 result, __int64, _QWORD**,
                                unsigned __int64, __int64*,
                                signed __int64) __asm__("GameRoutine_c761a0");
void __attribute__((noreturn)) GameRoutine_c76170(long double, long double);
__int64 GrassObject_c75f90_alt1(_QWORD* a1, long double* a2, __int64 a3,
                                __int64 a4) __asm__("GrassObject_c75f90");
__int64 GrassObject_c76540(__int64 result, __int64 a2, _QWORD** a3,
                           unsigned __int64 a4, __int64* a5);
__int64 gfxa_render_GrassObject_CollectElements_lambda0_Invoke(__int64 a1,
                                                               __int64 a2);
__int64 gfxa_render_GrassObject_CollectElements_lambda1_Invoke(__int64 a1,
                                                               __int64 a2);
__int64* GrassObject_c76880(__int64* result, __int64*, char*, _QWORD**, __int64,
                            __int64, __int64*, __int64);
__int64 ElementRenderer_a74470(__int64 result, __int64, __int64*);
__int64 GrassObject_c76540_alt1(__int64 result, _QWORD*, _QWORD**,
                                unsigned __int64,
                                _QWORD*) __asm__("GrassObject_c76540");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64 (*GameData_1fd2e68[])();
extern __int64 (*GameData_1fd2ee8[])();
extern __int64 g3d_g_passKinds;
void __attribute__((noreturn)) String_60a250(const char*);
__int64 gfxa_render_GrassObject_CollectElements(__int64 result, __int64 a2,
                                                _QWORD* a3);
__int64* GrassObject_c761a0(__int64* result, char* a2, _QWORD** a3,
                            unsigned __int64 a4, __int64* a5, __int64 a6);
__int64 GrassObject_c75d80(__int64 result, _QWORD* a2, unsigned int a3,
                           __int64 a4, char a5);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_c76170_alt1() __asm__("GameRoutine_c76170");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GrassObject_Destructor(__int64 a1);
__int64 GrassObject_c75f90(_QWORD* a1, __int128* a2, __int64 a3, __int64 a4);

void GrassObject_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
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
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v1 = *(_QWORD*)(a1 + 248);
  *(_QWORD*)a1 = gfxa_render_GrassObject_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 256) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 224);
  if (v6 != 0) {
    v7 = *(_QWORD**)(a1 + 232);
    if ((_QWORD*)v6 == v7) {
      goto LABEL_14;
    }
    do {
      v8 = *(v7 - 6);
      *(v7 - 6) = 0;
      if (v8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
      }
      v10 = *(v7 - 7);
      v7 -= 7;
      v9 = v10;
      *v7 = 0;
      if (v10 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
      }
    } while (v7 != (_QWORD*)v6);
    v11 = *(_QWORD*)(a1 + 224);
    *(_QWORD*)(a1 + 232) = v6;
    v6 = v11;
    if (v11 != 0) {
    LABEL_14:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, v6);
    }
  }
  v13 = *(_QWORD*)(a1 + 200);
  if (v13 != 0) {
    v14 = *(_QWORD**)(a1 + 208);
    if ((_QWORD*)v13 == v14) {
      goto LABEL_26;
    }
    do {
      v15 = *(v14 - 6);
      *(v14 - 6) = 0;
      if (v15 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
      }
      v17 = *(v14 - 7);
      v14 -= 7;
      v16 = v17;
      *v14 = 0;
      if (v17 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
      }
    } while (v14 != (_QWORD*)v13);
    v18 = *(_QWORD*)(a1 + 200);
    *(_QWORD*)(a1 + 208) = v13;
    v13 = v18;
    if (v18 != 0) {
    LABEL_26:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v19, v13);
    }
  }
  v20 = *(_QWORD*)(a1 + 176);
  if (v20 != 0) {
    v21 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 184) = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v21 + v22, v20);
  }
  v23 = *(_QWORD*)(a1 + 152);
  if (v23 != 0) {
    v24 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 160) = v23;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v24 + v25, v23);
  }
  v26 = *(_QWORD*)(a1 + 144);
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak_alt1(v26);
  }
  v27 = *(_QWORD*)(a1 + 128);
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak_alt1(v27);
  }
  v28 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v28 != 0) {
    v29 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 88) = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v29 + v30, v28);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v31 = *(_QWORD*)(a1 + 24);
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v32, v31);
    }
  }
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
        result = nn_mem_StandardAllocator_Free(*v5 + v7, (_QWORD)(v3));
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
              result = nn_mem_StandardAllocator_Free(
                  fw_memory_g_heap_manager + v25, (_QWORD)(v15));
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
                    fw_memory_g_heap_manager + v38, (_QWORD)(v28));
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
      nn_mem_StandardAllocator_Free(*v5 + v46, (_QWORD)(v43));
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

__int64 gfxa_render_GrassObject_CollectElements(__int64 result, __int64 a2,
                                                _QWORD* a3)
{
  __int64 v4;
  __int64 v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v20_;
  struct {
    char gap40_[4];
    int v23;
    __int64 v24;
    __int64 v25;
  } v23_;
  struct {
    _QWORD v26[2];
    __int64 v27;
    char gap88_[8];
    _QWORD* v28;
  } v26_;
  struct {
    _QWORD* v29;
    __int64 v30;
  } v29_;

  if (*(_BYTE*)(result + 32) == 1 && *(_DWORD*)(result + 288) != 0) {
    v4 = result;
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(result + 120) + 48LL))(
        *(_QWORD*)(result + 120));
    if ((int)result >= 1) {
      v6 = 0;
      while (1) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD))(
            **(_QWORD**)(v4 + 120) + 72LL))(
            (void*)(&v29_.v29), *(_QWORD*)(v4 + 120), (unsigned int)v6);
        if (v29_.v29 != nullptr) {
          break;
        }
      LABEL_45:
        v18 = v29_.v30;
        if (v29_.v30 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v29_.v30 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak_alt1(v18);
        }
        ++v6;
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 120) + 48LL))(
            *(_QWORD*)(v4 + 120));
        if (v6 >= (int)result) {
          return result;
        }
      }
      v8 = (unsigned int*)v29_.v29[30];
      v7 = (unsigned int*)v29_.v29[31];
      while (1) {
        if (v8 == v7) {
          goto LABEL_45;
        }
        v10 = *v8;
        v11 = *(_DWORD*)(g3d_g_passKinds + 4LL * (int)v10);
        if (v11 >= 6) {
          String_60a250("bitset test argument out of range");
        }
        if (((*a3 >> v11) & 1) == 0) {
          goto LABEL_12;
        }
        v12 = v29_.v29[33];
        if (0xAAAAAAAAAAAAAAABLL * ((v29_.v29[34] - v12) >> 3) <= (int)v10 ||
            v11 == 4 || (*(_BYTE*)(v12 + 24LL * (int)v10 + 21) & 1) == 0 ||
            ((*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                 **(_QWORD**)(v4 + 120) + 128LL))(*(_QWORD*)(v4 + 120),
                                                  (unsigned int)v6, *v8) &
             1) == 0) {
          goto LABEL_12;
        }
        v26_.v28 = v26_.v26;
        v26_.v27 = (v10 << 32) | v6;
        v26_.v26[0] = GameData_1fd2e68;
        v26_.v26[1] = v4;
        v23_.v24 = 0;
        v23_.v25 = 0xFFFFFFFFLL;
        v23_.v23 = *(_DWORD*)(v4 + 36);
        if ((*(_BYTE*)(v4 + 8) & 1) != 0) {
          fw_text_String_CopyTerminated(&v20_.v20, *(_QWORD*)(v4 + 24),
                                        *(_QWORD*)(v4 + 16));
        }
        else {
          v13 = *(_QWORD*)(v4 + 16);
          v20_.v20 = *(_QWORD*)(v4 + 8);
          v20_.v21 = v13;
          v20_.v22 = *(_QWORD*)(v4 + 24);
        }
        LODWORD(v23_.v25) = v10;
        ElementRenderer_a74470(a2, (__int64)v26_.v26, (__int64*)&v23_.v23);
        if ((v20_.v20 & 1) != 0 && v20_.v22 != 0) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v20_.v22);
        }
        if (v26_.v28 == v26_.v26) {
          v15 = 32;
        }
        else {
          if (v26_.v28 == nullptr) {
            goto LABEL_33;
          }
          v15 = 40;
        }
        (*(void (**)(__int64))(*v26_.v28 + v15))((__int64)v26_.v28);
      LABEL_33:
        if (*(_BYTE*)(v4 + 284) == 1) {
          v26_.v27 = (v10 << 32) | v6;
          v26_.v28 = v26_.v26;
          v26_.v26[0] = GameData_1fd2ee8;
          v26_.v26[1] = v4;
          v23_.v24 = 0;
          v23_.v25 = 0xFFFFFFFFLL;
          v23_.v23 = *(_DWORD*)(v4 + 36);
          if ((*(_BYTE*)(v4 + 8) & 1) != 0) {
            fw_text_String_CopyTerminated(&v20_.v20, *(_QWORD*)(v4 + 24),
                                          *(_QWORD*)(v4 + 16));
          }
          else {
            v16 = *(_QWORD*)(v4 + 16);
            v20_.v20 = *(_QWORD*)(v4 + 8);
            v20_.v21 = v16;
            v20_.v22 = *(_QWORD*)(v4 + 24);
          }
          LODWORD(v23_.v25) = v10;
          ElementRenderer_a74470(a2, (__int64)v26_.v26, (__int64*)&v23_.v23);
          if ((v20_.v20 & 1) != 0 && v20_.v22 != 0) {
            v17 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v20_.v22);
          }
          if (v26_.v28 == v26_.v26) {
            v9 = 32;
          LABEL_11:
            (*(void (**)(__int64))(*v26_.v28 + v9))((__int64)v26_.v28);
            goto LABEL_12;
          }
          if (v26_.v28 != nullptr) {
            v9 = 40;
            goto LABEL_11;
          }
        }
      LABEL_12:
        ++v8;
      }
    }
  }
  return result;
}

__int64 GrassObject_c75d80(__int64 result, _QWORD* a2, unsigned int a3,
                           __int64 a4, char a5)
{
  unsigned int v5;
  _QWORD* v6;
  int v7;
  char v8;
  __int64 v11;
  int v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 i;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v27;

  v5 = *(_DWORD*)(result + 276);
  if ((signed int)v5 <= (signed __int32)*(_DWORD*)(result + 280)) {
    v6 = (_QWORD*)(result + 120);
    v7 = a5 & 1;
    v8 = a5;
    v11 = result;
    v27 = (_QWORD*)(result + 136);
    v24 = result + 120;
    do {
      result = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
          **(_QWORD**)(v11 + 120) + 112LL))(*(_QWORD*)(v11 + 120), a3, v5);
      if ((result & 1) != 0) {
        v13 = *(_DWORD*)(v11 + 272);
        if (v13 >= 1) {
          v14 = 1;
          v15 = 0;
          v16 = 0;
          for (i = 0; i < v13; ++i) {
            v18 = *(_QWORD*)(v11 + 248);
            if (*(_DWORD*)(v18 + v16 + 4) != 0 && *(_DWORD*)(v18 + v16) == v5 &&
                *(unsigned __int8*)(v18 + v16 + 8) == v7) {
              if ((v14 & 1) != 0) {
                if ((v8 & 1) != 0) {
                  v19 = v27;
                }
                else {
                  v19 = v6;
                }
                (*(void (**)(_QWORD, _QWORD*, _QWORD, _QWORD, __int64))(
                    *(_QWORD*)*v19 + 88LL))(*v19, a2, a3, v5, a4);
                v20 = *v19;
                v8 = a5;
                v6 = (_QWORD*)v24;
                (*(void (**)(__int64, _QWORD*, _QWORD, _QWORD, __int64))(
                    *(_QWORD*)v20 + 80LL))(v20, a2, a3, v5, a4);
              }
              v21 = *(_QWORD*)(v11 + 200) + v15 +
                    16LL * *(int*)(*(_QWORD*)(v11 + 200) + v15 + 16);
              (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)*a2 + 224LL))(*a2, 1, 11, *(_QWORD*)(v21 + 24),
                                          *(_QWORD*)(v21 + 32));
              v22 = v6;
              if ((v8 & 1) != 0) {
                v23 = *(_QWORD*)(v11 + 224) + v15 +
                      16LL * *(int*)(*(_QWORD*)(v11 + 224) + v15 + 16);
                (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
                    *(_QWORD*)*a2 + 224LL))(*a2, 1, 12, *(_QWORD*)(v23 + 24),
                                            *(_QWORD*)(v23 + 32));
                v22 = v27;
              }
              result = (*(__int64 (**)(_QWORD, _QWORD*, _QWORD, _QWORD, _QWORD,
                                       _QWORD))(*(_QWORD*)*v22 + 96LL))(
                  *v22, a2, a3, v5,
                  *(unsigned int*)(*(_QWORD*)(v11 + 248) + v16 + 4), 0);
              v13 = *(_DWORD*)(v11 + 272);
              v14 = 0;
            }
            v16 += 12;
            v15 += 56;
          }
        }
      }
    } while ((int)v5++ < (signed __int32)*(_DWORD*)(v11 + 280));
  }
  return result;
}

__int64 GrassObject_c75f90(_QWORD* a1, __int128* a2, __int64 a3, __int64 a4)
{
  __int128 v4;
  __int128 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128 v26;
  __int128 v27;
  _BYTE v28[19];

  v5 = *a2;
  v4 = a2[1];
  v6 = a1[20];
  v7 = a1[21];
  *(_QWORD*)&v28[11] = 0;
  *(_QWORD*)&v28[3] = 0;
  if (v6 >= v7) {
    v10 = a1[19];
    v11 = v6 - v10;
    v12 = (__int64)(v6 - v10) >> 7;
    v13 = v12 + 1;
    if ((unsigned __int64)(v12 + 1) >> 57 != 0) {
      GameRoutine_c76170_alt1();
    }
    v14 = v7 - v10;
    v15 = fw_memory_g_heap_manager_ptr;
    if (v14 >> 6 > v13) {
      v13 = v14 >> 6;
    }
    if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFF80LL) {
      v16 = 0x1FFFFFFFFFFFFFFLL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      v26 = *a2;
      v27 = a2[1];
      if (v16 >> 57 != 0) {
        GameRoutine_60a210_alt1();
      }
      v17 = a3;
      v18 = a4;
      v19 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v16 << 7, 16, 0);
      v5 = v26;
      v4 = v27;
      a4 = v18;
      a3 = v17;
    }
    else {
      v19 = 0;
    }
    v20 = v19 + v11;
    v21 = v19 + (v16 << 7);
    *(_BYTE*)v20 = 1;
    v22 = v19 + v11 - (v12 << 7);
    *(_OWORD*)(v20 + 16) = v5;
    *(_OWORD*)(v20 + 32) = v4;
    v9 = v19 + v11 + 128;
    *(_BYTE*)(v20 + 48) = 0;
    *(_BYTE*)(v20 + 72) = 0;
    *(_DWORD*)(v20 + 76) = 0;
    *(_BYTE*)(v20 + 80) = 0;
    *(_BYTE*)(v20 + 88) = 0;
    *(_BYTE*)(v20 + 96) = 0;
    *(_BYTE*)(v20 + 104) = 0;
    *(_QWORD*)(v20 + 112) = a3;
    *(_QWORD*)(v20 + 120) = a4;
    *(_QWORD*)(v20 + 57) = *(_QWORD*)&v28[8];
    *(_QWORD*)(v20 + 49) = *(_QWORD*)v28;
    *(_DWORD*)(v20 + 64) = 0;
    memcpy_alt1(v22, v10, v11);
    a1[19] = v22;
    a1[20] = v9;
    a1[21] = v21;
    if (v10 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v23, v10);
    }
  }
  else {
    *(_OWORD*)(v6 + 16) = v5;
    *(_OWORD*)(v6 + 32) = v4;
    v9 = v6 + 128;
    *(_BYTE*)(v6 + 48) = 0;
    *(_BYTE*)(v6 + 72) = 0;
    *(_DWORD*)(v6 + 76) = 0;
    *(_BYTE*)(v6 + 80) = 0;
    *(_BYTE*)(v6 + 88) = 0;
    *(_BYTE*)(v6 + 96) = 0;
    *(_BYTE*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 112) = a3;
    *(_QWORD*)(v6 + 120) = a4;
    *(_BYTE*)v6 = 1;
    *(_OWORD*)(v6 + 49) = *(_OWORD*)v28;
    *(_DWORD*)(v6 + 64) = 0;
  }
  v24 = a1[19];
  a1[20] = v9;
  return (unsigned int)((unsigned __int64)(v9 - v24) >> 7) - 1;
}

__int64* GrassObject_c761a0(__int64* result, char* a2, _QWORD** a3,
                            unsigned __int64 a4, __int64* a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  __int64* v14;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  char* v30;
  int v31;
  __int64* v32;
  __int64* v34;
  __int64* v35;
  __int64* v36;
  __int64* v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;

  if (a4 < 2) {
    return result;
  }
  if (a4 == 2) {
    v7 = *((_QWORD*)a2 - 2);
    v8 = *((_DWORD*)a2 - 2);
    v9 = *result;
    v10 = *((_DWORD*)result + 2);
    if (v8 == v10) {
      if (*(float*)(**a3 + (v7 << 7) + 52) >=
          *(float*)(**a3 + (v9 << 7) + 52)) {
        return result;
      }
    }
    else if (v8 >= v10) {
      return result;
    }
    *result = v7;
    *((_QWORD*)a2 - 2) = v9;
    v17 = *((_DWORD*)result + 2);
    *((_DWORD*)result + 2) = *((_DWORD*)a2 - 2);
    *((_DWORD*)a2 - 2) = v17;
    return result;
  }
  if ((__int64)a4 <= 0) {
    if (result == (__int64*)a2) {
      return result;
    }
    v18 = result + 2;
    if (result + 2 == (__int64*)a2) {
      return result;
    }
    v19 = 0;
    v20 = result;
    while (1) {
      v22 = v20;
      v20 = v18;
      v23 = v22[2];
      v24 = *((_DWORD*)v22 + 6);
      v25 = *((_DWORD*)v22 + 2);
      if (v24 == v25) {
        v26 = *v22;
        if (*(float*)(**a3 + (v23 << 7) + 52) >=
            *(float*)(**a3 + (*v22 << 7) + 52)) {
          goto LABEL_17;
        }
      }
      else {
        if (v24 >= v25) {
          goto LABEL_17;
        }
        v26 = *v22;
      }
      v22[2] = v26;
      *((_DWORD*)v20 + 2) = *((_DWORD*)v22 + 2);
      v21 = result;
      if (v22 == result) {
        goto LABEL_16;
      }
      v27 = v19;
      while (1) {
        v30 = (char*)result + v27;
        v31 = *(_DWORD*)((char*)result + v27 - 8);
        if (v24 == v31) {
          break;
        }
        if (v24 >= v31) {
          v21 = (__int64*)((char*)result + v27);
          goto LABEL_16;
        }
        v28 = *((_QWORD*)v30 - 2);
      LABEL_26:
        v22 -= 2;
        v29 = (char*)result + v27;
        v27 -= 16;
        *(_QWORD*)v29 = v28;
        *((_DWORD*)v29 + 2) = v31;
        if (v27 == 0) {
          v21 = result;
          goto LABEL_16;
        }
      }
      v28 = *((_QWORD*)v30 - 2);
      if (*(float*)(**a3 + (v23 << 7) + 52) <
          *(float*)(**a3 + (v28 << 7) + 52)) {
        goto LABEL_26;
      }
      v21 = v22;
    LABEL_16:
      *v21 = v23;
      *((_DWORD*)v21 + 2) = v24;
    LABEL_17:
      v18 = v20 + 2;
      v19 += 16;
      if (v20 + 2 == (__int64*)a2) {
        return result;
      }
    }
  }
  v11 = a4 >> 1;
  v13 = a4 - (a4 >> 1);
  if ((__int64)a4 > a6) {
    v14 = result;
    GrassObject_c761a0(result, (char*)&result[2 * v11], a3, a4 >> 1, a5, a6);
    GrassObject_c761a0(&v14[2 * v11], a2, a3, v13, a5, a6);
    return GrassObject_c76880(v14, &v14[2 * v11], a2, a3, v11, v13, a5, a6);
  }
  v32 = result;
  v34 = a5;
  GrassObject_c76540_alt1((__int64)result, &result[2 * v11], a3, a4 >> 1, a5);
  v35 = &v34[2 * v11];
  result = (__int64*)GrassObject_c76540_alt1((__int64)&v32[2 * v11], a2, a3,
                                             v13, v35);
  v36 = &v34[2 * a4];
  v37 = v35;
  while (v37 != v36) {
    v39 = *v37;
    v40 = *((_DWORD*)v37 + 2);
    v41 = *v34;
    v42 = *((_DWORD*)v34 + 2);
    if (v40 == v42) {
      if (*(float*)(**a3 + (v39 << 7) + 52) >=
          *(float*)(**a3 + (v41 << 7) + 52)) {
        goto LABEL_40;
      }
    }
    else if (v40 >= v42) {
    LABEL_40:
      *v32 = v41;
      v38 = *((_DWORD*)v34 + 2);
      v34 += 2;
      goto LABEL_34;
    }
    *v32 = v39;
    v38 = *((_DWORD*)v37 + 2);
    v37 += 2;
  LABEL_34:
    *((_DWORD*)v32 + 2) = v38;
    v32 += 2;
    if (v34 == v35) {
      if (v37 != v36) {
        v46 = 0;
        do {
          v47 = &v37[v46];
          v48 = &v32[v46];
          v46 += 2;
          *v48 = *v47;
          *((_DWORD*)v48 + 2) = *((_DWORD*)v47 + 2);
        } while (v47 + 2 != v36);
      }
      return result;
    }
  }
  if (v34 != v35) {
    v43 = 0;
    do {
      v44 = &v34[v43];
      v45 = &v32[v43];
      v43 += 2;
      *v45 = *v44;
      *((_DWORD*)v45 + 2) = *((_DWORD*)v44 + 2);
    } while (v44 + 2 != v35);
  }
  return result;
}

__int64 GrassObject_c76540(__int64 result, __int64 a2, _QWORD** a3,
                           unsigned __int64 a4, __int64* a5)
{
  __int64 v5;
  int v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  int v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;

  switch (a4) {
  case 0uLL:
    return result;
  case 2uLL:
    v6 = *(_DWORD*)(a2 - 8);
    v7 = *(_DWORD*)(result + 8);
    v8 = (__int64*)(a2 - 16);
    if (v6 == v7) {
      if (*(float*)(**a3 + (*v8 << 7) + 52) >=
          *(float*)(**a3 + (*(_QWORD*)result << 7) + 52LL)) {
      LABEL_7:
        v9 = *(_QWORD*)(result + 8);
        *a5 = *(_QWORD*)result;
        a5[1] = v9;
        v11 = *v8;
        v10 = *(_QWORD*)(a2 - 8);
        a5[2] = v11;
        a5[3] = v10;
        return result;
      }
    }
    else if (v6 >= v7) {
      goto LABEL_7;
    }
    v29 = *v8;
    v28 = *(_QWORD*)(a2 - 8);
    *a5 = v29;
    a5[1] = v28;
    v30 = *(_QWORD*)(result + 8);
    a5[2] = *(_QWORD*)result;
    a5[3] = v30;
    return result;
  case 1uLL:
    v5 = *(_QWORD*)(result + 8);
    *a5 = *(_QWORD*)result;
    a5[1] = v5;
    return result;
  default:
    break;
  }
  if ((__int64)a4 <= 8) {
    if (result == a2) {
      return result;
    }
    v12 = *(_QWORD*)(result + 8);
    v13 = (__int64*)(result + 16);
    *a5 = *(_QWORD*)result;
    a5[1] = v12;
    if (result + 16 == a2) {
      return result;
    }
    v14 = 0;
    v15 = a5;
  LABEL_15:
    v17 = v13;
    v18 = *(_DWORD*)(result + 24);
    v19 = *((_DWORD*)v15 + 2);
    v20 = v15 + 2;
    if (v18 == v19) {
      if (*(float*)(**a3 + (*v17 << 7) + 52) >=
          *(float*)(**a3 + (*v15 << 7) + 52)) {
        goto LABEL_17;
      }
    }
    else if (v18 >= v19) {
    LABEL_17:
      v21 = v17[1];
      *v20 = *v17;
      v15[3] = v21;
      goto LABEL_14;
    }
    v22 = v15[1];
    *v20 = *v15;
    v15[3] = v22;
    v16 = a5;
    if (v15 == a5) {
      goto LABEL_13;
    }
    v23 = v14;
    while (1) {
      v25 = *(_DWORD*)(result + 24);
      v26 = *(__int64*)((char*)a5 + v23 - 16);
      v27 = *(_DWORD*)((char*)a5 + v23 - 8);
      if (v25 == v27) {
        if (*(float*)(**a3 + (*v17 << 7) + 52) >=
            *(float*)(**a3 + (v26 << 7) + 52)) {
          v16 = v15;
        LABEL_13:
          *v16 = *v17;
          *((_DWORD*)v16 + 2) = *(_DWORD*)(result + 24);
        LABEL_14:
          v13 = v17 + 2;
          v14 += 16;
          v15 = v20;
          result = (__int64)v17;
          if (v17 + 2 == (__int64*)a2) {
            return result;
          }
          goto LABEL_15;
        }
      }
      else if (v25 >= v27) {
        v16 = (__int64*)((char*)a5 + v23);
        goto LABEL_13;
      }
      v15 -= 2;
      v24 = (char*)a5 + v23;
      v23 -= 16;
      *(_QWORD*)v24 = v26;
      *((_DWORD*)v24 + 2) = v27;
      if (v23 == 0) {
        v16 = a5;
        goto LABEL_13;
      }
    }
  }
  v31 = a4 >> 1;
  v32 = (__int64*)result;
  v37 = result + 16 * (a4 >> 1);
  v38 = 16 * (a4 >> 1);
  GameRoutine_c761a0_alt1(result, v37, a3, v31, a5, v31);
  result =
      GameRoutine_c761a0_alt1(v37, a2, a3, a4 - v31, &a5[2 * v31], a4 - v31);
  if (v38 != 0) {
    v39 = v37;
    v40 = a5;
    v41 = v32;
    v42 = a2;
    while (1) {
      if (v39 == a2) {
        while (v41 != (__int64*)v37) {
          v47 = *v41;
          v48 = v41[1];
          v41 += 2;
          *v40 = v47;
          v40[1] = v48;
          v40 += 2;
        }
        return result;
      }
      v45 = *(_DWORD*)(v39 + 8);
      v46 = *((_DWORD*)v41 + 2);
      if (v45 == v46) {
        if (*(float*)(**a3 + (*(_QWORD*)v39 << 7) + 52LL) >=
            *(float*)(**a3 + (*v41 << 7) + 52)) {
          goto LABEL_38;
        }
      }
      else if (v45 >= v46) {
      LABEL_38:
        v43 = *v41;
        v44 = v41[1];
        v41 += 2;
        goto LABEL_32;
      }
      v43 = *(_QWORD*)v39;
      v44 = *(_QWORD*)(v39 + 8);
      v39 += 16;
    LABEL_32:
      *v40 = v43;
      v40[1] = v44;
      v40 += 2;
      if (v41 == (__int64*)v37) {
        goto LABEL_44;
      }
    }
  }
  v39 = v37;
  v40 = a5;
  v42 = a2;
LABEL_44:
  while (v39 != v42) {
    v49 = *(_QWORD*)v39;
    v50 = *(_QWORD*)(v39 + 8);
    v39 += 16;
    *v40 = v49;
    v40[1] = v50;
    v40 += 2;
  }
  return result;
}

__int64* GrassObject_c76880(__int64* result, __int64* a2, char* a3, _QWORD** a4,
                            __int64 a5, __int64 a6, __int64* a7, __int64 a8)
{

#pragma clang fp contract(off)
  _QWORD* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 i;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  int v23;
  __int64* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  int v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  int v34;
  __int64* v35;
  __int64 v36;
  int v37;
  __int64* j;
  __int64 v39;
  int v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  _BOOL4 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  __int64* v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  int v61;
  int v62;
  __int64* v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  int v68;
  __int64 v69;
  int v70;
  __int64 v71;
  int v72;
  __int64* v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64* v78;

  if (a6 == 0) {
    return result;
  }
  do {
    if (a5 <= a8 || a6 <= a8) {
      if (a5 > a6) {
        if (a2 == (__int64*)a3) {
          return result;
        }
        v51 = 0;
        do {
          v52 = &a2[v51];
          v53 = &a7[v51];
          v51 += 2;
          v55 = *v52;
          v54 = v52[1];
          *v53 = v55;
          v53[1] = v54;
        } while (&a2[v51] != (__int64*)a3);
        v56 = a3 - 8;
        v57 = &a7[v51];
        while (1) {
          if (a2 == result) {
            for (; v57 != a7; v56 -= 16) {
              v75 = *(v57 - 2);
              v57 -= 2;
              *((_QWORD*)v56 - 1) = v75;
              *(_DWORD*)v56 = *((_DWORD*)v57 + 2);
            }
            return result;
          }
          v60 = a2 - 2;
          v58 = *(a2 - 2);
          v59 = a2 - 1;
          v61 = *((_DWORD*)a2 - 2);
          v62 = *((_DWORD*)v57 - 2);
          if (v62 == v61) {
            if (*(float*)(**a4 + (*(v57 - 2) << 7) + 52) <
                *(float*)(**a4 + (v58 << 7) + 52)) {
              goto LABEL_60;
            }
          }
          else if (v62 < v61) {
            goto LABEL_60;
          }
          v58 = *(v57 - 2);
          v59 = v57 - 1;
          v60 = a2;
          v57 -= 2;
        LABEL_60:
          *((_QWORD*)v56 - 1) = v58;
          a2 = v60;
          *(_DWORD*)v56 = *(_DWORD*)v59;
          v56 -= 16;
          if (v57 == a7) {
            return result;
          }
        }
      }
      if (result == a2) {
        return result;
      }
      v63 = a7;
      v64 = result;
      do {
        v65 = *v64;
        v66 = v64[1];
        v64 += 2;
        *v63 = v65;
        v63[1] = v66;
        v63 += 2;
      } while (v64 != a2);
      v67 = v63 - 2;
      while (1) {
        if (a2 == (__int64*)a3) {
          v76 = 0;
          do {
            v77 = &a7[v76];
            v78 = &result[v76];
            v76 += 2;
            *v78 = *v77;
            *((_DWORD*)v78 + 2) = *((_DWORD*)v77 + 2);
          } while (v67 != v77);
          return result;
        }
        v69 = *a2;
        v70 = *((_DWORD*)a2 + 2);
        v71 = *a7;
        v72 = *((_DWORD*)a7 + 2);
        if (v70 == v72) {
          if (*(float*)(**a4 + (v69 << 7) + 52) >=
              *(float*)(**a4 + (v71 << 7) + 52)) {
            goto LABEL_78;
          }
        }
        else if (v70 >= v72) {
        LABEL_78:
          *result = v71;
          v68 = *((_DWORD*)a7 + 2);
          a7 += 2;
          goto LABEL_72;
        }
        *result = v69;
        v68 = *((_DWORD*)a2 + 2);
        a2 += 2;
      LABEL_72:
        *((_DWORD*)result + 2) = v68;
        result += 2;
        if (v63 == a7) {
          return result;
        }
      }
    }
    if (a5 == 0) {
      return result;
    }
    v11 = *a4;
    v12 = *a2;
    v13 = *((_DWORD*)a2 + 2);
    v14 = -a5;
    for (i = 0;; i += 2) {
      v17 = result[i];
      v18 = result[i + 1];
      if (v13 != v18) {
        if (v13 < v18) {
          break;
        }
        goto LABEL_7;
      }
      if (*(float*)(*v11 + (v12 << 7) + 52) <
          *(float*)(*v11 + (v17 << 7) + 52)) {
        break;
      }
    LABEL_7:
      if (__CFADD__(v14++, 1)) {
        return result;
      }
    }
    v19 = -v14;
    v20 = &result[i];
    if (-v14 >= a6) {
      if (v14 == -1) {
        v73 = &result[i];
        *v73 = v12;
        *a2 = v17;
        v74 = result[i + 1];
        *((_DWORD*)v73 + 2) = *((_DWORD*)a2 + 2);
        *((_DWORD*)a2 + 2) = v74;
        return result;
      }
      v29 = v19 / 2;
      v24 = &result[2 * (v19 / 2) + i];
      if (a3 == (char*)a2) {
        v22 = (__int64*)a3;
      LABEL_33:
        v21 = ((char*)v22 - (char*)a2) >> 4;
        goto LABEL_34;
      }
      v30 = *((_DWORD*)v24 + 2);
      v31 = (a3 - (char*)a2) >> 4;
      v22 = a2;
      while (1) {
        v32 = v31 >> 1;
        v33 = &v22[2 * (v31 >> 1)];
        v34 = *((_DWORD*)v33 + 2);
        if (v34 == v30) {
          if (*(float*)(*v11 + (*v33 << 7) + 52) >=
              *(float*)(*v11 + (*v24 << 7) + 52)) {
            goto LABEL_24;
          }
        }
        else if (v34 >= v30) {
          goto LABEL_24;
        }
        v22 = v33 + 2;
        v32 = v31 + ~v32;
      LABEL_24:
        v31 = v32;
        if (v32 == 0) {
          goto LABEL_33;
        }
      }
    }
    v21 = a6 / 2;
    v22 = &a2[2 * (a6 / 2)];
    if (v20 != a2) {
      v23 = *((_DWORD*)v22 + 2);
      v24 = &result[i];
      v25 = ((char*)a2 - (char*)result - i * 8) >> 4;
      while (1) {
        v26 = v25 >> 1;
        v27 = &v24[2 * (v25 >> 1)];
        v28 = *((_DWORD*)v27 + 2);
        if (v23 == v28) {
          if (*(float*)(*v11 + (*v22 << 7) + 52) <
              *(float*)(*v11 + (*v27 << 7) + 52)) {
            goto LABEL_14;
          }
        }
        else if (v23 < v28) {
          goto LABEL_14;
        }
        v24 = v27 + 2;
        v26 = v25 + ~v26;
      LABEL_14:
        v25 = v26;
        if (v26 == 0) {
          goto LABEL_31;
        }
      }
    }
    v24 = a2;
  LABEL_31:
    v29 = ((char*)v24 - (char*)result - i * 8) >> 4;
  LABEL_34:
    v35 = v22;
    if (v24 != a2) {
      v35 = v24;
      if (a2 != v22) {
        v36 = *v24;
        *v24 = v12;
        v35 = v24 + 2;
        *a2 = v36;
        v37 = *((_DWORD*)v24 + 2);
        *((_DWORD*)v24 + 2) = *((_DWORD*)a2 + 2);
        *((_DWORD*)a2 + 2) = v37;
        for (j = a2 + 2; j != v22; j += 2) {
          v39 = *v35;
          if (v35 == a2) {
            a2 = j;
          }
          *v35 = *j;
          *j = v39;
          v40 = *((_DWORD*)v35 + 2);
          *((_DWORD*)v35 + 2) = *((_DWORD*)j + 2);
          *((_DWORD*)j + 2) = v40;
          v35 += 2;
        }
        if (v35 != a2) {
          v41 = v35;
          v42 = a2;
          while (1) {
            v43 = *v41;
            *v41 = *v42;
            *v42 = v43;
            LODWORD(v43) = *((_DWORD*)v41 + 2);
            *((_DWORD*)v41 + 2) = *((_DWORD*)v42 + 2);
            v41 += 2;
            *((_DWORD*)v42 + 2) = v43;
            v42 += 2;
            v44 = v41 == a2;
            if (v42 == v22) {
              if (v41 == a2) {
                break;
              }
              v42 = a2 + 2;
              while (1) {
                v45 = *v41;
                *v41 = *a2;
                *a2 = v45;
                LODWORD(v45) = *((_DWORD*)v41 + 2);
                *((_DWORD*)v41 + 2) = *((_DWORD*)a2 + 2);
                v41 += 2;
                *((_DWORD*)a2 + 2) = v45;
                v44 = v41 == a2;
                if (v42 != v22) {
                  break;
                }
                if (v41 == a2) {
                  goto LABEL_49;
                }
              }
            }
            if (v44) {
              a2 = v42;
            }
          }
        }
      }
    }
  LABEL_49:
    v46 = a6 - v21;
    if (v29 + v21 >= a6 - (v29 + v21) - v14) {
      GrassObject_c76880(v35, v22, a3, a4, -(v29 + v14), a6 - v21, a7, a8);
      v22 = v24;
      v46 = v21;
      a5 = v29;
      a3 = (char*)v35;
    }
    else {
      v47 = v20;
      v48 = v24;
      v49 = a3;
      v50 = -(v29 + v14);
      GrassObject_c76880(v47, v48, (char*)v35, a4, v29, v21, a7, a8);
      a5 = v50;
      a3 = v49;
      v20 = v35;
    }
    a6 = v46;
    result = v20;
    a2 = v22;
  } while (v46 != 0);
  return result;
}

__int64 gfxa_render_GrassObject_CollectElements_lambda0_Invoke(__int64 a1,
                                                               __int64 a2)
{
  return GameRoutine_c75d80(*(_QWORD*)(a1 + 8), a2, *(unsigned int*)(a1 + 16),
                            *(unsigned int*)(a1 + 20), 0);
}

__int64 gfxa_render_GrassObject_CollectElements_lambda1_Invoke(__int64 a1,
                                                               __int64 a2)
{
  return GameRoutine_c75d80(*(_QWORD*)(a1 + 8), a2, *(unsigned int*)(a1 + 16),
                            *(unsigned int*)(a1 + 20), 1);
}

#pragma GCC visibility pop
