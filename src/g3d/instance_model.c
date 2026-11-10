#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5ecdc0(_QWORD, _QWORD);
__int64 gxc_GpuMemory_Destroy_GpuMemory(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*g3d_InstanceModel_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 InstanceModel_Destructor(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, _QWORD);
__int64 ElementRenderer_a74470(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5de60(_QWORD, _QWORD);
__int64 GameRoutine_a73760(void);
__int64 Material_add560(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_g3d_5ed6f0(void);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_211d4a8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1987fb0(void);
void __attribute__((noreturn)) GameRoutine_1987fd0(void);
void __attribute__((noreturn)) GameRoutine_1987ff0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
void InstanceModel_19859a0(__int64 a1, int a2, unsigned int a3, __int64 a4,
                           __int64 a5, __int64 a6);
__int64 InstanceModel_Unknown2(__int64 result);
void InstanceModel_Unknown4(float32x4_t* a1, _DWORD* a2, _QWORD* a3,
                            _QWORD* a4);

void InstanceModel_19859a0(__int64 a1, int a2, unsigned int a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  int v6;
  char* v7;
  char* v8;
  unsigned int v9;
  unsigned __int64 v12;
  int v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  long double v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  char* v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;

  v6 = a3 - 1;
  v8 = *(char**)a1;
  v7 = *(char**)(a1 + 8);
  v9 = a3;
  if ((int)(a3 - 1) < 0) {
    v6 = a3 + 1022;
  }
  v12 = (v7 - v8) >> 5;
  v13 = ((v6 >> 10) & ~(v6 >> 31)) + 1;
  *(_DWORD*)(a1 + 24) = v13;
  v14 = (unsigned int)(v13 * a2);
  v15 = v14 - v12;
  if (v14 <= v12) {
    if (v14 < v12) {
      v34 = &v8[32 * v14];
      while (v7 != v34) {
        v36 = *((_QWORD*)v7 - 4);
        v7 -= 32;
        v35 = v36;
        *(_QWORD*)v7 = 0;
        if (v36 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35);
        }
      }
      *(_QWORD*)(a1 + 8) = v34;
    }
  }
  else {
    v16 = *(_QWORD*)(a1 + 16);
    if (v15 <= (v16 - (__int64)v7) >> 5) {
      memset(v7, 0, 32 * v15, a4, a5, a6);
      *(_QWORD*)(a1 + 8) = &v7[32 * v15];
    }
    else {
      v17 = v16 - (_QWORD)v8;
      if (v17 >> 4 > v14) {
        v14 = v17 >> 4;
      }
      if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFE0LL) {
        v14 = 0x7FFFFFFFFFFFFFFLL;
      }
      if (v14 >> 59 != 0) {
        GameRoutine_60a210(a1);
      }
      v18 = 32 * v14;
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v14, 16, 0);
      v20 = v19 + v7 - v8;
      v21 = v19 + v18;
      *(__n128*)&v25 = memset(v20, 0, 32 * v15, v22, v23, v24);
      v26 = v20 + 32 * v15;
      v27 = v20 - 32 * v12;
      if (v8 != v7) {
        v28 = v8;
        v29 = v27;
        do {
          v30 = *(_QWORD*)v28;
          *(_QWORD*)v28 = 0;
          *(_QWORD*)v29 = v30;
          *(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
          v31 = *((_QWORD*)v28 + 2);
          v32 = *((_QWORD*)v28 + 3);
          v28 += 32;
          *(_QWORD*)(v29 + 16) = v31;
          *(_QWORD*)(v29 + 24) = v32;
          v29 += 32LL;
        } while (v28 != v7);
        do {
          v33 = *(_QWORD*)v8;
          *(_QWORD*)v8 = 0;
          if (v33 != 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v33 + 8LL))(v33, v25);
          }
          v8 += 32;
        } while (v8 != v7);
        v8 = *(char**)a1;
      }
      *(_QWORD*)a1 = v27;
      *(_QWORD*)(a1 + 8) = v26;
      *(_QWORD*)(a1 + 16) = v21;
      if (v8 != nullptr) {
        v37 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v37);
      }
    }
  }
  if ((int)v9 >= 1 && a2 != 0) {
    v38 = 0;
    v39 = game_g_frame_clock_ptr[0];
    while (v9 >= 0x21) {
      v40 = 49152;
      if (v9 < 0x41) {
        goto LABEL_39;
      }
      if (v9 < 0x81) {
        goto LABEL_41;
      }
      if (v9 >= 0x101) {
        v41 = 49152;
        if (v9 >= 0x201) {
          goto LABEL_48;
        }
        goto LABEL_45;
      }
    LABEL_43:
      if (v40 >= 0x3000) {
        v40 = 12288;
      }
    LABEL_45:
      if (v40 >= 0x6000) {
        v41 = 24576;
      }
      else {
        v41 = v40;
      }
    LABEL_48:
      v42 = 0;
      do {
        v46 = *(_DWORD*)(a1 + 24);
        v47 = *(char**)a1;
        v54 = 3;
        v48 = &v47[32 * v38 + 32 * v46 * v42];
        v49 = *(_QWORD*)(*v39 + 312);
        v50 = *(_QWORD*)(*(_QWORD*)(*v39 + 552) + 16LL);
        v55 = v41;
        v56 = v49;
        GameRoutine_53bd0((void*)(&v57), &v54);
        v51 = v57;
        v57 = 0;
        v52 = *(_QWORD*)v48;
        *(_QWORD*)v48 = v51;
        if (v52 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v52 + 8LL))(v52);
          v53 = v57;
          v57 = 0;
          if (v53 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53);
          }
        }
        v43 = (*(__int64 (**)(__int64))(*(_QWORD*)v50 + 80LL))(v50);
        *((_QWORD*)v48 + 3) = v44;
        v45 = *(_QWORD*)v48;
        *((_QWORD*)v48 + 2) = v43;
        GameRoutine_5de60(v48 + 16, v45);
        ++v42;
      } while (a2 != v42);
      ++v38;
      if (v9 >= 0x400) {
        v9 -= 1024;
      }
      else {
        v9 = 0;
      }
      if ((int)v9 <= 0) {
        return;
      }
    }
    v40 = 1536;
  LABEL_39:
    if (v40 >= 0xC00) {
      v40 = 3072;
    }
  LABEL_41:
    if (v40 >= 0x1800) {
      v40 = 6144;
    }
    goto LABEL_43;
  }
}

__int64 InstanceModel_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
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
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
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

  *(_QWORD*)a1 = g3d_InstanceModel_vtable;
  v2 = *(_QWORD*)(a1 + 360);
  if (v2 != 0) {
    v3 = game_g_frame_clock_ptr[0];
    v4 = *(_QWORD*)(a1 + 352);
    v5 = *game_g_frame_clock_ptr[0];
    v6 = v4 + 112 * v2;
    do {
      GameRoutine_5ecdc0(v4, v5 + 568);
      v8 = *(_QWORD*)(*v3 + 80);
      v58 = *(_QWORD*)(v4 + 104);
      if (v8 == 0) {
        GameRoutine_60a310(0, v7);
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v8 + 48LL))(v8, &v58);
      v4 += 112;
    } while (v4 != v6);
  }
  result = gxc_GpuMemory_Destroy_GpuMemory(a1 + 480);
  v10 = *(_QWORD*)(a1 + 472);
  *(_QWORD*)(a1 + 472) = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v11);
  }
  v12 = *(_QWORD*)(a1 + 448);
  if (v12 != 0) {
    v13 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 456) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = *(_QWORD*)(a1 + 424);
  if (v15 != 0) {
    v16 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 432) = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v16 + v17);
  }
  v18 = *(_QWORD*)(a1 + 392);
  if (v18 != 0) {
    v19 = *(_QWORD*)(a1 + 400);
    if (v18 == v19) {
      goto LABEL_33;
    }
    v20 = *(_QWORD*)(a1 + 400);
    do {
      v24 = *(_QWORD*)(v20 - 24);
      v20 -= 24;
      v23 = v24;
      if (v24 != 0) {
        v25 = *(_QWORD*)(v19 - 16);
        if (v23 == v25) {
          goto LABEL_21;
        }
        do {
          v26 = *(_QWORD*)(v25 - 8);
          if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
            result = std___1___shared_weak_count___release_weak(v26);
          }
          v25 -= 16;
        } while (v25 != v23);
        v21 = *(_QWORD*)(v19 - 24);
        *(_QWORD*)(v19 - 16) = v23;
        if (v21 != 0) {
        LABEL_21:
          v22 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v22 = 56;
          }
          result =
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v22);
        }
      }
      v19 = v20;
    } while (v18 != v20);
    v27 = *(_QWORD*)(a1 + 392);
    *(_QWORD*)(a1 + 400) = v18;
    if (v27 != 0) {
    LABEL_33:
      v28 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v28 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v28);
    }
  }
  v29 = *(_QWORD*)(a1 + 368);
  if (v29 != 0) {
    v30 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 376) = v29;
    v31 = 128;
    if (*(_QWORD*)(v30 + 200) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v30 + v31);
  }
  v32 = *(_QWORD**)(a1 + 312);
  if (v32 != nullptr) {
    v33 = *(_QWORD**)(a1 + 320);
    if (v32 == v33) {
      goto LABEL_47;
    }
    do {
      v34 = *(v33 - 4);
      v33 -= 4;
      result = v34;
      *v33 = 0;
      if (v34 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v33 != v32);
    v35 = *(_QWORD*)(a1 + 312);
    *(_QWORD*)(a1 + 320) = v32;
    if (v35 != 0) {
    LABEL_47:
      v36 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v36 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v36);
    }
  }
  v37 = *(_QWORD**)(a1 + 280);
  if (v37 != nullptr) {
    v38 = *(_QWORD**)(a1 + 288);
    if (v37 == v38) {
      goto LABEL_57;
    }
    do {
      v39 = *(v38 - 4);
      v38 -= 4;
      result = v39;
      *v38 = 0;
      if (v39 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v38 != v37);
    v40 = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(a1 + 288) = v37;
    if (v40 != 0) {
    LABEL_57:
      v41 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v41);
    }
  }
  v42 = *(_QWORD**)(a1 + 248);
  if (v42 != nullptr) {
    v43 = *(_QWORD**)(a1 + 256);
    if (v42 == v43) {
      goto LABEL_67;
    }
    do {
      v44 = *(v43 - 4);
      v43 -= 4;
      result = v44;
      *v43 = 0;
      if (v44 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v43 != v42);
    v45 = *(_QWORD*)(a1 + 248);
    *(_QWORD*)(a1 + 256) = v42;
    if (v45 != 0) {
    LABEL_67:
      v46 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v46 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v46);
    }
  }
  v47 = *(_QWORD**)(a1 + 216);
  if (v47 != nullptr) {
    v48 = *(_QWORD**)(a1 + 224);
    if (v47 == v48) {
      goto LABEL_77;
    }
    do {
      v49 = *(v48 - 4);
      v48 -= 4;
      result = v49;
      *v48 = 0;
      if (v49 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
    } while (v48 != v47);
    v50 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v47;
    if (v50 != 0) {
    LABEL_77:
      v51 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v51 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v51);
    }
  }
  if (*(_QWORD*)(a1 + 160) != 0) {
    v52 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v52 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v52);
  }
  v53 = *(_QWORD*)(a1 + 152);
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    result = std___1___shared_weak_count___release_weak(v53);
  }
  v54 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v54 != 0) {
    v55 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 88) = v54;
    v56 = 128;
    if (*(_QWORD*)(v55 + 200) == 0) {
      v56 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v55 + v56);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v57 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v57 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v57);
  }
  return result;
}

__int64 InstanceModel_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  bool v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  float32x4_t* v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int64 v24;
  float32x4_t* v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  int32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  int32x4_t v45;
  int32x4_t v46;
  int8x16_t v47;
  int8x16_t v48;
  int8x16_t v49;
  float32x4_t v50;
  float32x4_t v51;
  unsigned __int64 v52;
  int8x16_t v53;
  float32x4_t v54;
  int8x16_t v55;
  int8x16_t v56;
  int32x4_t v57;
  int32x4_t v58;
  int32x4_t v59;
  int32x4_t v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  unsigned int v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int32x4_t* v73;
  int32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  int32x4_t* v77;
  int32x4_t v78;
  __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  int32x4_t v83;
  int32x4_t v84;
  int32x4_t* v85;
  int32x4_t v86;
  int32x4_t v87;
  char v88;
  __int64 v89;
  __int64 v90;
  __int64** v91;
  __int64* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  char v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  int32x4_t v111;
  int32x4_t v112;
  int32x4_t v113;
  int32x4_t v114;

  if (*(_DWORD*)(result + 136) != 0) {
    v3 = result;
    if ((*(_BYTE*)(result + 417) & 1) != 0 ||
        (*(_BYTE*)(result + 116) & 1) != 0) {
      v90 = *(_QWORD*)(result + 128);
      *(_BYTE*)(v3 + 417) = 0;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
      v91 = *(__int64***)(v3 + 392);
      v2 = *(_QWORD*)(v3 + 400);
      while (v91 != (__int64**)v2) {
        v92 = *v91;
        v93 = v91[1];
        if (*v91 != v93) {
          do {
            v94 = *v92;
            v92 += 2;
            result = Material_add560(v94);
          } while (v92 != v93);
        }
        v91 += 3;
      }
    }
    if (*(_BYTE*)(v3 + 418) == 1) {
      v4 = *(_DWORD*)(v3 + 344);
      *(_BYTE*)(v3 + 418) = 0;
      v5 = v4 < -1;
      v6 = ((_BYTE)v4 + 1) & 1;
      if (v5) {
        v6 = -v6;
      }
      *(_DWORD*)(v3 + 344) = v6;
      if (*(_BYTE*)(v3 + 113) == 1) {
        v7 = *(_DWORD*)(v3 + 208);
        v5 = v7 < -1;
        v8 = ((_BYTE)v7 + 1) & 1;
        if (v5) {
          v8 = -v8;
        }
        *(_DWORD*)(v3 + 208) = v8;
      }
      v96 = *(_QWORD*)(v3 + 128);
      v97 = *(unsigned __int16*)(v96 + 164);
      if (*(_WORD*)(v96 + 164) != 0) {
        v9 = 0;
        v95 = *(_QWORD*)(*(_QWORD*)(v96 + 168) + 32LL);
        do {
          LODWORD(v11) = *(_DWORD*)(v3 + 136);
          v1 &= 0xFFFFFFFFFFFFFF00LL;
          v2 &= 0xFFFFFFFFFFFFFF00LL;
          if ((int)v11 < 1) {
            goto LABEL_14;
          }
          v12 = 0;
          v13 = 0;
          v14 = 0;
          v15 = 0;
          v16 = 0;
          v102 = 0;
          v17 = 32LL * *(int*)(v3 + 208);
          v100 = v2;
          v101 = v3 + 216 + v17;
          v18 = -1;
          v98 = v3 + 280 + v17;
          v19 =
              (float32x4_t*)(v95 +
                             ((unsigned __int64)*(
                                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v96 +
                                                                           176) +
                                                                112 * v9) +
                                                     84LL)
                              << 6));
          v21 = v19[2];
          v20 = v19[3];
          v23 = *v19;
          v22 = v19[1];
          v103 = *v19;
          v104 = v22;
          v105 = v21;
          v106 = v20;
          do {
            v24 = *(_QWORD*)(v3 + 352);
            v25 = (float32x4_t*)(*(_QWORD*)(v3 + 424) + v12);
            v26 = v25[1];
            v27 = v25[2];
            v28 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(*v25, LANES128(v23).n128_f32[0]), v26,
                    COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
                v27, v23, 2);
            v29 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(*v25, LANES128(v22).n128_f32[0]), v26,
                    COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]), 1),
                v27, v22, 2);
            v30 = vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(*v25, LANES128(v21).n128_f32[0]), v26,
                    COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1),
                v27, v21, 2);
            v31 = vaddq_f32(
                v25[3],
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(*v25, LANES128(v20).n128_f32[0]), v26,
                        COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
                    v27, v20, 2));
            v111 = v28;
            v112 = v29;
            v113 = v30;
            v114 = v31;
            if (*(_BYTE*)(v3 + 114) == 1) {
              LANES128(v32).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v32).n128_i8[8] =
                  vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v33).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              v34 = vzip1q_s32(v29, COERCE_AS(int32x4_t, 0));
              *(int8x8_t*)&LANES128(v33).n128_i8[8] =
                  vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v35 = vmulq_f32(vmulq_f32(v28, v32), v33);
              LANES128(v33).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v33).n128_i8[8] =
                  vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              LANES128(v36).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v36).n128_i8[8] =
                  vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v37 = vzip2q_s32(v28, v30);
              v38 = vsubq_f32(v35, vmulq_f32(vmulq_f32(v28, v33), v36));
              LANES128(v38).n128_u64[0] =
                  LANES128_OF(vpaddq_f32(v38, v38)).n128_u64[0];
              v39 = vaddq_f32(
                  vdupq_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 0),
                  vdupq_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1));
              v40 = vrecpeq_f32(v39);
              v41 = vmulq_f32(v40, vrecpsq_f32(v40, v39));
              v42 = vrecpsq_f32(v41, v39);
              v43 = vceqzq_f32(v39);
              v44 = vmulq_f32(v41, v42);
              v45 = vzip1q_s32(v28, v30);
              v46 = vzip2q_s32(v29, COERCE_AS(int32x4_t, 0));
              v47 = vzip2q_s32(v45, v34);
              v48 = vzip1q_s32(v37, v46);
              v49 = vzip1q_s32(v45, v34);
              LANES128(v50).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v46).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v51).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v34).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v50).n128_i8[8] =
                  vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v52 = LANES64_OF(vqtbl1_s8(v48, COERCE_AS(int8x8_t,
                                                        0xF0E0D0C07060504LL)))
                        .n64_u64[0];
              *(int8x8_t*)&LANES128(v51).n128_i8[8] =
                  vqtbl1_s8(v48, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v48).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v46).n128_u64[1] = v52;
              *(int8x8_t*)&LANES128(v48).n128_i8[8] =
                  vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v53 = vmulq_f32(v44, vmlsq_f32(vmulq_f32(v50, v46), v48, v51));
              *(int8x8_t*)&LANES128(v34).n128_i8[8] =
                  vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v54 = vmulq_f32(v51, v34);
              LANES128(v51).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v51).n128_i8[8] =
                  vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v55 = vmulq_f32(v44, vmlsq_f32(v54, v46, v51));
              v56 = vmulq_f32(v44, vmlsq_f32(vmulq_f32(v48, v51), v34, v50));
              v57 = vbicq_s8(v53, v43);
              v58 = vbicq_s8(v55, v43);
              v59 = vbicq_s8(v56, v43);
              v60 = vzip1q_s32(v57, v59);
              v61 = vzip2q_s32(v57, v59);
              v62 = vzip1q_s32(v58, COERCE_AS(int32x4_t, 0));
              v63 = vzip2q_s32(v58, COERCE_AS(int32x4_t, 0));
              v28 = vzip1q_s32(v60, v62);
              v29 = vzip2q_s32(v60, v62);
              v30 = vzip1q_s32(v61, v63);
              v31 = vzip2q_s32(v61, v63);
            }
            if (*(_BYTE*)(v3 + 112) == 1) {
              v64 = (unsigned int)v13 >> 10;
              if (v18 == (unsigned int)v13 >> 10) {
                v65 = v1;
                v64 = v18;
                v66 = v13 & 0x3FF;
                if (v14 == 0) {
                  goto LABEL_33;
                }
              }
              else {
                v107 = v31;
                v108 = v30;
                v67 = v15;
                v109 = v29;
                v110 = v28;
                v68 = *(_QWORD*)v101 +
                      32 * (v64 + *(int*)(v101 + 24) * (__int64)(int)v9);
                v65 = *(_QWORD*)(v68 + 8LL * *(int*)(v68 + 8));
                if ((v16 & 1) != 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v1 + 64LL))(v1);
                }
                v69 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 56LL))(v65);
                v14 = v69;
                if (*(_BYTE*)(v3 + 114) == 1) {
                  v99 = v69;
                  v70 = *(_QWORD*)v98 +
                        32 * (v64 + *(int*)(v98 + 24) * (__int64)(int)v9);
                  v71 = *(_QWORD*)(v70 + 8LL * *(int*)(v70 + 8));
                  if ((v102 & 1) != 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v100 + 64LL))(v100);
                  }
                  v72 = (*(__int64 (**)(__int64))(*(_QWORD*)v71 + 56LL))(v71);
                  v21 = v105;
                  v20 = v106;
                  v23 = v103;
                  v22 = v104;
                  v16 = 1;
                  v15 = v72;
                  v14 = v99;
                  v100 = v71;
                  v102 = 1;
                }
                else {
                  v21 = v105;
                  v20 = v106;
                  v23 = v103;
                  v22 = v104;
                  v16 = 1;
                  v15 = v67;
                }
                v29 = v109;
                v28 = v110;
                v31 = v107;
                v30 = v108;
                v66 = v13 & 0x3FF;
                if (v14 == 0) {
                  goto LABEL_33;
                }
              }
              v73 = (int32x4_t*)(v14 + 48LL * v66);
              v74 = vzip1q_s32(v111, v113);
              v75 = vzip1q_s32(v112, v114);
              *v73 = vzip1q_s32(v74, v75);
              v73[1] = vzip2q_s32(v74, v75);
              v73[2] =
                  vzip1q_s32(vzip2q_s32(v111, v113), vzip2q_s32(v112, v114));
            LABEL_33:
              if (v15 != 0) {
                v76 = vzip1q_s32(v28, v30);
                v77 = (int32x4_t*)(v15 + 48LL * v66);
                v78 = vzip1q_s32(v29, v31);
                *v77 = vzip1q_s32(v76, v78);
                v77[1] = vzip2q_s32(v76, v78);
                v77[2] = vzip1q_s32(vzip2q_s32(v28, v30), vzip2q_s32(v29, v31));
              }
              v1 = v65;
              v18 = v64;
            }
            result = v24 + 112LL * ((int)v13 + (int)v9 * (int)v11);
            if (*(_BYTE*)(*(_QWORD*)result + 90LL) == 0 &&
                *(_BYTE*)(result + 13) == 0) {
              v79 = v14;
              v80 = v15;
              v81 = v16;
              v82 = v1;
              v83 = vzip1q_s32(v111, v113);
              v84 = vzip1q_s32(v112, v114);
              v85 = *(int32x4_t**)(result + 80);
              v86 = vzip1q_s32(v28, v30);
              *v85 = vzip1q_s32(v83, v84);
              v85[1] = vzip2q_s32(v83, v84);
              v87 = vzip1q_s32(v29, v31);
              v85[2] =
                  vzip1q_s32(vzip2q_s32(v111, v113), vzip2q_s32(v112, v114));
              v85[3] = vzip1q_s32(v86, v87);
              v85[4] = vzip2q_s32(v86, v87);
              v85[5] = vzip1q_s32(vzip2q_s32(v28, v30), vzip2q_s32(v29, v31));
              result = nn_g3d_5ed6f0();
              v23 = v103;
              v22 = v104;
              v21 = v105;
              v20 = v106;
              v1 = v82;
              v16 = v81;
              v15 = v80;
              v14 = v79;
            }
            v11 = *(int*)(v3 + 136);
            ++v13;
            v12 += 64;
          } while (v13 < v11);
          if ((v102 & 1) != 0) {
            v2 = v100;
            v88 = v16;
            v89 = v1;
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v100 + 64LL))(v100);
            v1 = v89;
            if ((v88 & 1) == 0) {
              goto LABEL_14;
            }
          LABEL_13:
            v10 = v1;
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 64LL))(v1);
            v1 = v10;
            goto LABEL_14;
          }
          v2 = v100;
          if ((v16 & 1) != 0) {
            goto LABEL_13;
          }
        LABEL_14:
          ++v9;
        } while (v9 != v97);
      }
    }
  }
  return result;
}

void InstanceModel_Unknown4(float32x4_t* a1, _DWORD* a2, _QWORD* a3, _QWORD* a4)
{
  unsigned __int32 v4;
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  float v36;
  int v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned int v42;
  int v43;
  __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64** v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int** v83;
  int* v84;
  int v85;
  int v86;
  bool v87;
  int v88;
  int v89;
  int v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v98;
  float32x4_t v100;
  float32x4_t v101;
  int8x16_t v102;
  unsigned __int64 v103;
  _QWORD* v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  int v112;
  __int64 v113;
  bool v114;
  __int64 v115;
  unsigned __int16* v116;
  int v117;
  unsigned __int64 v118;
  int v119;
  int v120;
  int v121;
  int v122;
  __int64 v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  unsigned __int64 v129;
  _QWORD* v130;
  __int64 v131;
  __int64 v132;
  char* v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  char* v139;
  __int64 v140;
  __int64 v141;
  __int64 (**v142)();
  unsigned __int64 v143;
  unsigned int v144;
  __int64 v145;
  __int64 v146;
  __int64 (***v147)();
  __int64 (***v148)();
  __int64 (**v149)();
  __int64 (****v150)();
  __int64 (***v151)();
  __int64 (***v152)();
  __int64 (**v153)();
  __int64 v154;
  __int64 v155;
  char v157;
  unsigned __int64 v158;
  __int64 v159;
  unsigned __int64 v161;
  __int64 v162;
  _QWORD* v163;
  __int64 v164;
  char* v165;
  unsigned __int64 v166;
  int v167;
  __int64 v168;
  int v169;
  __int64 v170;
  bool v171;
  unsigned __int8 v172;
  int v173;
  __int64* v174;
  __int64 v175;
  int v176;
  _DWORD v177[5];
  __int64 (**v178)();
  float32x4_t* v179;
  __int64* v180;
  int v181;
  char v182;
  bool v183;
  __int64 (***v184)();
  _DWORD* v185;

  v4 = LANES128(a1[8]).n128_u32[2];
  v185 = a2;
  if (v4 != 0) {
    v5 = (__int64*)a4[1];
    v6 = a4;
    v7 = a3;
    if (v5[1] != v5[2] || *(_DWORD*)(v9 = *v5) != -2 ||
        *(_DWORD*)(v9 + 8) == 3) {
      v10 = LANES128(a1[8]).n128_u64[0];
      v11 = *(__int64**)(v10 + 312);
      v12 = *(__int64**)(v10 + 320);
      if (v11 != v12) {
        v13 = *a3 & 0x3FLL;
        while (1) {
          v14 = *v11;
          v11 += 2;
          if ((v13 & *(_QWORD*)(v14 + 312)) != 0) {
            break;
          }
          if (v11 == v12) {
            return;
          }
        }
        if (LANES128(a1[8]).n128_u8[14] == 1) {
          v16 = LANES128(a1[23]).n128_u64[0];
          v15 = LANES128(a1[23]).n128_u64[1];
          if (v16 == v15) {
            v171 = false;
            v19 = *(unsigned __int16*)(v10 + 164);
            if (*(_WORD*)(v10 + 164) == 0) {
              return;
            }
            goto LABEL_19;
          }
          v17 = v16 + 4;
          do {
            v18 = *(_DWORD*)(v17 - 4);
            v171 = v18 >= 0;
            if ((v18 & 0x80000000) == 0) {
              break;
            }
            v87 = v17 == v15;
            v17 += 4LL;
          } while (!v87);
        }
        else {
          v171 = false;
        }
        v19 = *(unsigned __int16*)(v10 + 164);
        if (*(_WORD*)(v10 + 164) == 0) {
          return;
        }
      LABEL_19:
        v20 = 0xFFFFFFFFLL;
        v21 = 0;
        v157 = 0;
        v22 = nullptr;
        v23 = *(_DWORD*)(v10 + 252) - 1;
        v169 = LANES128(a1[8]).n128_u8[12];
        v161 = LANES128(a1[8]).n128_u64[0];
        v154 = v19;
        v155 = *a3 & 0x3FLL;
        v173 = v23;
      LABEL_22:
        v24 = 8 * v21;
        if (v13 == 8) {
          v25 = *(_DWORD*)(*(_QWORD*)(v10 + 616) + 8 * v21);
          if ((v7[1] & 1) != 0) {
            if ((v25 & 0x8000) != 0) {
              goto LABEL_21;
            }
          }
          else if ((v25 & 1) == 0) {
            goto LABEL_21;
          }
        }
        v26 = *(_QWORD*)(v10 + 176) + 112 * v21;
        v27 = *(unsigned __int16*)(*(_QWORD*)v26 + 82LL);
        if (((*(unsigned int*)(*(_QWORD*)(v10 + 152) + 4 * (v27 >> 5)) >>
              (v27 & 0x1F)) &
             1) == 0 ||
            ((*(_DWORD*)(*(_QWORD*)(v10 + 144) +
                         4 * ((unsigned __int64)*(
                                  unsigned __int16*)(*(_QWORD*)v26 + 84LL) >>
                              5)) >>
              *(_WORD*)(*(_QWORD*)v26 + 84LL)) &
             1) == 0) {
          goto LABEL_21;
        }
        v28 = *(_QWORD*)(v10 + 312);
        if (v20 != v27) {
          v20 = *(unsigned __int16*)(*(_QWORD*)v26 + 82LL);
          v22 = *(_QWORD**)(v28 + 16 * v27);
        }
        v30 = (__int64*)v22[36];
        v29 = (__int64*)v22[37];
        v31 = *(_QWORD*)(v28 + 16 * v20);
        v32 = *(_DWORD*)(v31 + 400);
        v33 = *(unsigned __int8*)(v31 + 410);
        v34 = (unsigned int)(v32 - 1) >= 3
                  ? *(_DWORD*)(*(_QWORD*)(v10 + 360) + 4LL * (int)v21)
                  : *(_DWORD*)(*(_QWORD*)(v10 + 360) + 4LL * (int)v21) | 4;
        v35 = v33 != 0 ? v34 : v34 | 0x20;
        if (v30 == v29) {
          goto LABEL_21;
        }
        v36 = 0.0f;
        v162 = 8 * v21;
        v163 = v22;
        v37 = 1;
        v159 = v20;
        v38 = nullptr;
        v172 = 0;
        v170 = v21;
        v174 = v29;
        v175 = *(_QWORD*)(v10 + 176) + 112 * v21;
        v176 = v35;
      LABEL_43:
        v40 = *v30;
        v41 = *v30 >> 32;
        if (v41 >= 6) {
          String_60a250("bitset test argument out of range");
        }
        if (((*v7 >> v41) & 1) == 0) {
          goto LABEL_42;
        }
        if ((unsigned int)(HIDWORD(v40) - 1) < 2) {
          if ((*(_BYTE*)(*(_QWORD*)(v10 + 616) + 8 * v21 + 1) & 0x80) != 0) {
            goto LABEL_42;
          }
        }
        else if (HIDWORD(v40) == 4) {
          if ((*(_BYTE*)(*(_QWORD*)(v10 + 616) + v24) & 2) == 0) {
            goto LABEL_42;
          }
        }
        else if (HIDWORD(v40) == 3 &&
                 (*(_BYTE*)(*(_QWORD*)(v10 + 616) + v24) & 1) == 0) {
          goto LABEL_42;
        }
        v42 = HIDWORD(v40) - 3;
        v43 = (unsigned int)(HIDWORD(v40) - 3) < 3;
        if (v38 != nullptr && v43 == v172) {
          if ((v37 & 1) != 0) {
            goto LABEL_148;
          }
          goto LABEL_56;
        }
        v45 = LANES128(a1[9]).n128_u64[0];
        v46 = *(_QWORD**)(v45 + 16);
        v47 = *(_QWORD**)(v45 + 24);
        v48 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        if (v46 == v47) {
        LABEL_61:
          v167 = v37;
          v49 = (__int64*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          *v49 = 0;
          v49[1] = 0;
          v49[2] = 0;
          v49[3] = 0;
          v50 = v49;
          v49[4] = 0;
          v49[5] = 0;
          v49[6] = 0;
          v49[7] = 0;
          v51 = *(unsigned int*)(v45 + 8);
          if ((_DWORD)v51 != 0) {
            if ((v51 & 0x80000000) != 0) {
              GameRoutine_1987fb0();
            }
            v52 = 2 * v51;
            v53 = fw_memory_g_heap_manager_ptr;
            v54 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 2 * v51, 16, 0);
            v55 = v54 + 2 * v51;
            v56 = v52;
            v48 = (_QWORD*)v53;
            memset(v54, 0, v56, v57, v58, v59);
            *v50 = v54;
            v50[1] = v55;
            v10 = v161;
            v50[2] = v55;
          }
          v60 = fw_memory_HeapManager_Allocate(*v48, 128, 16, 0);
          v50[3] = v60;
          v50[4] = v60;
          v50[5] = v60 + 128;
          v61 = *(_QWORD*)v185;
          v63 = *(_QWORD**)(v45 + 24);
          v62 = *(_QWORD*)(v45 + 32);
          if ((unsigned __int64)v63 >= v62) {
            v65 = *(_QWORD*)(v45 + 16);
            v66 = (char*)v63 - v65;
            v67 = ((__int64)v63 - v65) >> 4;
            v68 = v67 + 1;
            if ((unsigned __int64)(v67 + 1) >> 60 != 0) {
              GameRoutine_1987ff0();
            }
            v69 = v62 - v65;
            if (v69 >> 3 > v68) {
              v68 = v69 >> 3;
            }
            if ((unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFF0LL) {
              v70 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v70 = v68;
            }
            if (v70 != 0) {
              if (v70 >> 60 != 0) {
              LABEL_250:
                GameRoutine_60a210(v60);
              }
              v71 = *(_QWORD*)v185;
              v72 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v70, 16, 0);
              v61 = v71;
              v6 = a4;
            }
            else {
              v72 = 0;
            }
            v74 = &v66[v72];
            *(_QWORD*)v74 = v61;
            *((_QWORD*)v74 + 1) = v50;
            v75 = (__int64)&v66[v72 + -16 * v67];
            v158 = v72 + 16 * v70;
            v64 = (__int64)&v66[v72 + 16];
            memcpy(v75, v65, v66);
            *(_QWORD*)(v45 + 16) = v75;
            *(_QWORD*)(v45 + 24) = v64;
            *(_QWORD*)(v45 + 32) = v158;
            if (v65 != 0) {
              v76 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v76 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v76);
            }
            v7 = a3;
            v10 = v161;
          }
          else {
            *v63 = v61;
            v63[1] = v50;
            v7 = a3;
            v64 = (__int64)(v63 + 2);
          }
          v23 = v173;
          v29 = v174;
          v26 = v175;
          v73 = (__int64**)(v64 - 8);
          v35 = v176;
          v37 = v167;
          LOBYTE(v43) = (unsigned int)(HIDWORD(v40) - 3) < 3;
          v42 = HIDWORD(v40) - 3;
          *(_QWORD*)(v45 + 24) = v64;
          v24 = v162;
        }
        else {
          while (*v46 != 0) {
            v46 += 2;
            if (v46 == v47) {
              goto LABEL_61;
            }
          }
          *v46 = *(_QWORD*)v185;
          v73 = (__int64**)(v46 + 1);
        }
        v38 = *v73;
        v21 = v170;
        if (LANES128(a1[8]).n128_i32[2] < 1) {
          goto LABEL_151;
        }
        v77 = 0;
        v78 = 0;
        while (1) {
          *(_WORD*)(*v38 + 2 * v77) = -258;
          if (LANES128(a1[8]).n128_u8[13] == 1 &&
              ((*(_QWORD*)(LANES128(a1[10]).n128_u64[0] + 8 * (v77 >> 6)) >>
                v77) &
               1) == 0) {
            goto LABEL_87;
          }
          v80 = *(_QWORD*)(*v6 + 8LL);
          if (v80 != *(_QWORD*)(*v6 + 16LL) && *(_BYTE*)(v80 + (int)v77) != 0) {
            goto LABEL_87;
          }
          v81 = v6[1];
          v82 = *(_QWORD*)(v81 + 8);
          v83 = (int**)(v82 + 8LL * (int)v77);
          if (v82 == *(_QWORD*)(v81 + 16)) {
            v83 = (int**)v6[1];
          }
          v84 = *v83;
          if ((v35 & 0x20) != 0) {
            v89 = *v84;
            if (v89 == -2) {
              goto LABEL_87;
            }
            if (v89 >= v23) {
              v86 = v23;
            }
            else {
              v86 = v89;
            }
          }
          else {
            v85 = v84[2];
            v86 = *v84;
            v87 = v85 != 3 && v86 == -2;
            if (v87) {
              goto LABEL_87;
            }
            if (v86 >= v23) {
              v86 = v23;
            }
            if (v85 == 3) {
              v88 = v84[1];
              if (v88 >= v23) {
                v88 = v23;
              }
              if (v42 > 2) {
                goto LABEL_116;
              }
            LABEL_111:
              if ((*(_DWORD*)(*(_QWORD*)(v10 + 616) + v24) & 0xC000) ==
                  0x8000) {
                v90 = *(unsigned __int8*)(*(_QWORD*)v26 + 91LL) - 1;
                if (v90 < v86) {
                  v86 = *(unsigned __int8*)(*(_QWORD*)v26 + 91LL) - 1;
                }
                if (v90 < v88) {
                  v88 = *(unsigned __int8*)(*(_QWORD*)v26 + 91LL) - 1;
                }
              }
              goto LABEL_116;
            }
          }
          v88 = v86;
          if (v42 <= 2) {
            goto LABEL_111;
          }
        LABEL_116:
          if (v86 < 0 ||
              ((v91 = *(_QWORD*)(v10 + 384)) == *(_QWORD*)(v10 + 392)
                   ? (LOBYTE(v92) = 0)
                   : (v92 = (*(_QWORD*)(v91 + 8LL * (int)v170) >> v86) & 1LL),
               (v93 = -2, v86 < (unsigned int)*(
                                    unsigned __int8*)(*(_QWORD*)v26 + 91LL)) &&
                   (v92 & 1) == 0)) {
            v93 = v86;
          }
          if (v88 < 0 ||
              ((v94 = *(_QWORD*)(v10 + 384)) == *(_QWORD*)(v10 + 392)
                   ? (LOBYTE(v95) = 0)
                   : (v95 = (*(_QWORD*)(v94 + 8LL * (int)v170) >> v88) & 1LL),
               (v96 = -2, v88 < (unsigned int)*(
                                    unsigned __int8*)(*(_QWORD*)v26 + 91LL)) &&
                   (v95 & 1) == 0)) {
            v96 = v88;
          }
          if (v93 == -2 && v96 == -2) {
            goto LABEL_87;
          }
          *(_BYTE*)(*v38 + 2 * v77) = v93;
          *(_BYTE*)(*v38 + 2 * v77 + 1) = v96;
          if (v93 == -2) {
            goto LABEL_138;
          }
          v98 = *(_QWORD*)(*(_QWORD*)v26 + 24LL);
          if (v98 != 0) {
            v98 += 56LL * v93;
            if (*(_DWORD*)(v98 + 36) != 3) {
            LABEL_138:
              LODWORD(v98) = 0;
            }
            else {
              LODWORD(v98) = *(_DWORD*)(v98 + 44) / 3u;
            }
          }
          if (v93 != v96 && v96 != -2) {
            v79 = *(_QWORD*)(*(_QWORD*)v26 + 24LL);
            if (v79 == 0) {
              goto LABEL_86;
            }
            v79 += 56LL * v96;
            if (*(_DWORD*)(v79 + 36) == 3) {
              LODWORD(v79) = *(_DWORD*)(v79 + 44) / 3u;
              goto LABEL_86;
            }
          }
          LODWORD(v79) = 0;
        LABEL_86:
          v78 += v98 + v79;
        LABEL_87:
          if ((__int64)++v77 >= LANES128(a1[8]).n128_i32[2]) {
            if (v78 != 0) {
              v172 = v43;
              *((_DWORD*)v38 + 12) = v170;
              *((_DWORD*)v38 + 13) = v159;
              v157 = 1;
              if ((v37 & 1) != 0) {
              LABEL_148:
                v44 = *(_QWORD*)v185;
                if (*(_QWORD*)(*(_QWORD*)v185 + 80LL) != 0) {
                  LANES128(v100).n128_u64[0] = 0x3F0000003F000000LL;
                  LANES128(v100).n128_u64[1] = 0x3F0000003F000000LL;
                  v101 = vmulq_f32(vaddq_f32(a1[3], a1[4]), v100);
                  LANES128(v100).n128_u64[0] = *(_QWORD*)(v44 + 88);
                  LANES128(v100).n128_u64[1] = *(unsigned int*)(v44 + 96);
                  v102 = vmulq_f32(v101, v100);
                  LANES128(v102).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v102, v102, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v102).n128_u64[0])))
                          .n64_u64[0];
                  v36 =
                      *(float*)(v44 + 108) +
                      (float)((float)(LANES64_OF(
                                          vpadd_f32(
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v102).n128_u64[0]),
                                              COERCE_AS(
                                                  float32x2_t,
                                                  LANES128(v102).n128_u64[0])))
                                          .n64_f32[0] +
                                      *(float*)(v44 + 100)) *
                              *(float*)(v44 + 104));
                  LOBYTE(v44) = v169;
                  if (v169 != 0) {
                  LABEL_156:
                    v44 = v163[40];
                    if (v44 != 0) {
                      v106 = v163[33];
                      if (0xAAAAAAAAAAAAAAABLL * ((v163[34] - v106) >> 3) <=
                          (int)v40) {
                        goto LABEL_166;
                      }
                      v107 = *(_QWORD*)(v106 + 24LL * (int)v40);
                      if (v107 == 0) {
                        goto LABEL_166;
                      }
                      v60 = std___1___hash_memory("co_instance", 11);
                      v35 = v176;
                      v108 = *(_QWORD*)(v107 + 232);
                      v109 = v108;
                      do {
                        if (v109 == *(_QWORD*)(v107 + 224)) {
                          goto LABEL_166;
                        }
                        v110 = *(_QWORD*)(v109 - 16);
                        v109 -= 16;
                        v108 -= 16;
                      } while (v110 != v60);
                      if (*(_QWORD*)(v107 + 232) == v108) {
                      LABEL_166:
                        LOBYTE(v44) = 0;
                      }
                      else {
                        LOBYTE(v44) = 1;
                        if ((v38[7] & 1) == 0) {
                          *((_BYTE*)v38 + 56) = 1;
                          v111 = LANES128(a1[8]).n128_u32[2];
                          v38[4] = v38[3];
                          if ((int)v111 >= 1) {
                            v112 = 0;
                            v164 = v111;
                            while (1) {
                              v115 = *v38;
                              v116 = (unsigned __int16*)(*v38 + 2LL * v112);
                              v117 = *v116;
                              if (v117 == 65278) {
                                break;
                              }
                              if (LANES128(a1[8]).n128_u8[14] == 1) {
                                v118 = LANES128(a1[23]).n128_u64[0];
                                if (v118 == LANES128(a1[23]).n128_u64[1]) {
                                  if (v112 >= 0) {
                                    v126 = v112;
                                  }
                                  else {
                                    v126 = v112 + 1023;
                                  }
                                  LODWORD(v123) = v112 + 1;
                                  LODWORD(v113) = v112 + 1;
                                  if (v112 + 1 < (int)v111) {
                                    v127 = v126 >> 10;
                                    v123 = (int)v123;
                                    while (1) {
                                      v128 = v123 + 1023;
                                      LODWORD(v113) = v123;
                                      if ((int)v123 >= 0) {
                                        v128 = v123;
                                      }
                                      if (v127 != v128 >> 10) {
                                        break;
                                      }
                                      if (*(unsigned __int16*)(v115 +
                                                               2 * v123) !=
                                          v117) {
                                        goto LABEL_208;
                                      }
                                      if (v111 == ++v123) {
                                        goto LABEL_207;
                                      }
                                    }
                                  }
                                }
                                else {
                                  if ((*(_DWORD*)(v118 + 4LL * v112) &
                                       0x80000000) == 0) {
                                    break;
                                  }
                                  v119 = v112 + 1023;
                                  v120 = v112 + 1;
                                  if (v112 >= 0) {
                                    v119 = v112;
                                  }
                                  LODWORD(v113) = v112 + 1;
                                  if (v120 < (int)v111) {
                                    v121 = v119 >> 10;
                                    v113 = v120;
                                    while (
                                        v121 == (int)v113 / 1024 &&
                                        *(unsigned __int16*)(v115 + 2 * v113) ==
                                            v117 &&
                                        (*(_DWORD*)(v118 + 4 * v113) &
                                         0x80000000) != 0) {
                                      if (v111 == ++v113) {
                                        goto LABEL_207;
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                if (v112 >= 0) {
                                  v122 = v112;
                                }
                                else {
                                  v122 = v112 + 1023;
                                }
                                LODWORD(v123) = v112 + 1;
                                LODWORD(v113) = v112 + 1;
                                if (v112 + 1 < (int)v111) {
                                  v124 = v122 >> 10;
                                  v123 = (int)v123;
                                  while (1) {
                                    v125 = v123 + 1023;
                                    LODWORD(v113) = v123;
                                    if ((int)v123 >= 0) {
                                      v125 = v123;
                                    }
                                    if (v124 != v125 >> 10) {
                                      break;
                                    }
                                    if (*(unsigned __int16*)(v115 + 2 * v123) !=
                                        v117) {
                                    LABEL_208:
                                      LODWORD(v113) = v123;
                                      break;
                                    }
                                    if (v111 == ++v123) {
                                    LABEL_207:
                                      LODWORD(v113) = v111;
                                      break;
                                    }
                                  }
                                }
                              }
                              v130 = (_QWORD*)v38[4];
                              v129 = v38[5];
                              if ((unsigned __int64)v130 >= v129) {
                                v132 = v38[3];
                                v133 = (char*)v130 - v132;
                                v134 = ((__int64)v130 - v132) >> 4;
                                v135 = v134 + 1;
                                if ((unsigned __int64)(v134 + 1) >> 60 != 0) {
                                  GameRoutine_1987fd0();
                                }
                                v136 = v129 - v132;
                                v168 = *v38 + 2LL * v112;
                                if (v136 >> 3 > v135) {
                                  v135 = v136 >> 3;
                                }
                                if ((unsigned __int64)v136 >=
                                    0x7FFFFFFFFFFFFFF0LL) {
                                  v137 = 0xFFFFFFFFFFFFFFFLL;
                                }
                                else {
                                  v137 = v135;
                                }
                                if (v137 != 0) {
                                  v165 = v133;
                                  if (v137 >> 60 != 0) {
                                    goto LABEL_250;
                                  }
                                  v138 = fw_memory_HeapManager_Allocate(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      16 * v137, 16, 0);
                                  v133 = v165;
                                }
                                else {
                                  v138 = 0;
                                }
                                v139 = &v133[v138];
                                v140 = (__int64)&v133[v138 + -16 * v134];
                                v166 = v138 + 16 * v137;
                                *(_QWORD*)v139 = 0;
                                *((_QWORD*)v139 + 1) = 0;
                                v131 = (__int64)&v133[v138 + 16];
                                v60 = memcpy(v140, v132, v133);
                                v38[3] = v140;
                                v38[4] = v131;
                                v38[5] = v166;
                                if (v132 != 0) {
                                  v141 = 128;
                                  if (*(_QWORD*)(*(_QWORD*)
                                                     fw_memory_g_heap_manager_ptr +
                                                 200LL) == 0) {
                                    v141 = 56;
                                  }
                                  v60 = nn_mem_StandardAllocator_Free(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v141);
                                }
                                v7 = a3;
                                v10 = v161;
                                v35 = v176;
                                v111 = v164;
                                v116 = (unsigned __int16*)v168;
                              }
                              else {
                                *v130 = 0;
                                v130[1] = 0;
                                v131 = (__int64)(v130 + 2);
                              }
                              v38[4] = v131;
                              *(_DWORD*)(v131 - 16) = v112;
                              *(_DWORD*)(v131 - 12) = v113 - v112;
                              *(_DWORD*)(v131 - 8) = *(char*)v116;
                              *(_DWORD*)(v131 - 4) = *((char*)v116 + 1);
                              v24 = v162;
                            LABEL_171:
                              LOBYTE(v44) = 1;
                              v112 = v113;
                              v114 = (int)v113 < (int)v111;
                              v21 = v170;
                              if (!v114) {
                                goto LABEL_167;
                              }
                            }
                            LODWORD(v113) = v112 + 1;
                            goto LABEL_171;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  v36 = 0.0f;
                  LOBYTE(v44) = v169;
                  if (v169 != 0) {
                    goto LABEL_156;
                  }
                }
              }
              else {
              LABEL_56:
                LOBYTE(v44) = v169;
                if (v169 != 0) {
                  goto LABEL_156;
                }
              }
            LABEL_167:
              v182 = v44;
              v177[4] = v35;
              v180 = v38;
              v181 = v40;
              *(float*)&v177[1] = v36;
              v178 = GameData_211d4a8;
              v179 = a1;
              v184 = &v178;
              v177[2] = 0;
              v177[3] = v40;
              v183 = v171;
              v177[0] = LANES128(a1[2]).n128_u32[1];
              ElementRenderer_a74470(v185, &v178, v177);
              if (v184 != &v178) {
                v23 = v173;
                if (v184 != nullptr) {
                  v39 = 5;
                LABEL_40:
                  (*v184)[v39]();
                }
                v29 = v174;
                v26 = v175;
                v35 = v176;
                v37 = 0;
                goto LABEL_42;
              }
              v23 = v173;
              v39 = 4;
              goto LABEL_40;
            }
          LABEL_151:
            v103 = LANES128(a1[9]).n128_u64[0];
            v104 = *(_QWORD**)(v103 + 16);
            v105 = *(_QWORD**)(v103 + 24);
            if (v104 != v105) {
              while ((__int64*)v104[1] != v38) {
                v104 += 2;
                if (v104 == v105) {
                  goto LABEL_228;
                }
              }
              *v104 = 0;
            }
          LABEL_228:
            *((_BYTE*)v38 + 56) = 0;
            v38 = nullptr;
          LABEL_42:
            if (++v30 != v29) {
              goto LABEL_43;
            }
            v19 = v154;
            v13 = v155;
            v22 = v163;
            v20 = v159;
          LABEL_21:
            if (++v21 == v19) {
              if ((v157 & 1) == 0) {
                return;
              }
              v142 = (__int64 (**)())LANES128(a1[9]).n128_u64[0];
              v143 = LANES128(a1[9]).n128_u64[1];
              v178 = v142;
              v179 = (float32x4_t*)v143;
              if (v143 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v143 + 8),
                                          1u, memory_order_relaxed);
              }
              v144 = v185[2];
              v145 = *(_QWORD*)v185;
              if ((v144 & 0x80000000) != 0) {
                v150 = *(__int64 (*****)())(v145 + 112);
                v151 = *v150;
                v152 = v150[1];
                if (*v150 != v152) {
                  do {
                    v153 = *v151;
                    v151 += 2;
                    if (v153 == v142) {
                      goto LABEL_243;
                    }
                  } while (v151 != v152);
                }
              }
              else {
                v146 = *(_QWORD*)(v145 + 112) + 24LL * v144;
                v147 = *(__int64 (****)())v146;
                v148 = *(__int64 (****)())(v146 + 8);
                if (*(__int64 (****)())v146 != v148) {
                  do {
                    v149 = *v147;
                    v147 += 2;
                    if (v149 == v142) {
                      goto LABEL_243;
                    }
                  } while (v147 != v148);
                }
              }
              GameRoutine_a73760();
              v143 = (unsigned __int64)v179;
            LABEL_243:
              if (v143 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(unsigned __int64))(*(_QWORD*)v143 + 16LL))(v143);
                std___1___shared_weak_count___release_weak_alt1(v143);
              }
              return;
            }
            goto LABEL_22;
          }
        }
      }
    }
  }
}

#pragma GCC visibility pop
