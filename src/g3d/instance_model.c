#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__int64
InstanceModel_Destructor_alt1(__int64 a1) __asm__("InstanceModel_Destructor");
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
void InstanceModel_19859a0_alt1(__int64 a1, int a2, unsigned int a3, __int64 a4,
                                __int64 a5,
                                __int64 a6) __asm__("InstanceModel_19859a0");
__int64 InstanceModel_Unknown2(__int64 result);
void InstanceModel_Unknown4_alt1(float32x4_t* a1, _DWORD* a2, _QWORD* a3,
                                 _QWORD* a4) __asm__("InstanceModel_Unknown4");
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a83610;
float32x4_t InstanceModel_19862d0(__int64 a1, int a2, float32x4_t* a3,
                                  float32x4_t* a4, float32x4_t* a5,
                                  float32x4_t result);
_QWORD* GameRoutine_a73760_alt1(__int64*,
                                _QWORD*) __asm__("GameRoutine_a73760");
_QWORD* gxc_GpuMemory_Destroy_GpuMemory_alt1(_QWORD* result) __asm__(
    "gxc_GpuMemory_Destroy_GpuMemory");
__attribute__((swiftcall)) void
GameRoutine_53bd0_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_53bd0");
__int64 GameRoutine_5de60_alt1(_QWORD*, __int64) __asm__("GameRoutine_5de60");
__int64 GameRoutine_5ecdc0_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_5ecdc0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void ElementRenderer_a74470_alt1(__int64, __int64,
                                 __int64*) __asm__("ElementRenderer_a74470");
void __attribute__((noreturn))
GameRoutine_1987fb0_alt1() __asm__("GameRoutine_1987fb0");
void __attribute__((noreturn))
GameRoutine_1987fd0_alt1() __asm__("GameRoutine_1987fd0");
void __attribute__((noreturn))
GameRoutine_1987ff0_alt1() __asm__("GameRoutine_1987ff0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void InstanceModel_19859a0(__int64 a1, int a2, unsigned int a3);
void InstanceModel_Destructor(__int64 a1);
__int64* InstanceModel_Unknown4(__int64* result, _DWORD* a2, _QWORD* a3,
                                _QWORD* a4);

void InstanceModel_19859a0(__int64 a1, int a2, unsigned int a3)
{
  int v3;
  char* v4;
  char* v5;
  unsigned int v6;
  unsigned __int64 v9;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  char* v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  struct {
    int v47;
    char gap4_[4];
    __int64 v48;
    __int64 v49;
  } v47_;
  __int64 v50;

  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a3 - 1;
  v5 = *(char**)a1;
  v4 = *(char**)(a1 + 8);
  v6 = a3;
  if ((int)(a3 - 1) < 0) {
    v3 = a3 + 1022;
  }
  v9 = (v4 - v5) >> 5;
  v10 = ((v3 >> 10) & ~(v3 >> 31)) + 1;
  *(_DWORD*)(a1 + 24) = v10;
  v11 = (unsigned int)(v10 * a2);
  v12 = v11 - v9;
  if (v11 <= v9) {
    if (v11 < v9) {
      v27 = &v5[32 * v11];
      while (v4 != v27) {
        v29 = *((_QWORD*)v4 - 4);
        v4 -= 32;
        v28 = v29;
        *(_QWORD*)v4 = 0;
        if (v29 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      *(_QWORD*)(a1 + 8) = v27;
    }
  }
  else {
    v13 = *(_QWORD*)(a1 + 16);
    if (v12 <= (v13 - (__int64)v4) >> 5) {
      memset_alt1((__int64)v4, 0, 32 * v12),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(a1 + 8) = &v4[32 * v12];
    }
    else {
      v14 = v13 - (_QWORD)v5;
      if (v14 >> 4 > v11) {
        v11 = v14 >> 4;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFE0LL) {
        v11 = 0x7FFFFFFFFFFFFFFLL;
      }
      if (v11 >> 59 != 0) {
        GameRoutine_60a210_alt1(),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v15 = 32 * v11;
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v11, 16, 0),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v17 = v16 + v4 - v5;
      v18 = v16 + v15;
      memset_alt1(v17, 0, 32 * v12),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v19 = v17 + 32 * v12;
      v20 = v17 - 32 * v9;
      if (v5 != v4) {
        v21 = v5;
        v22 = v20;
        do {
          v23 = *(_QWORD*)v21;
          *(_QWORD*)v21 = 0;
          *(_QWORD*)v22 = v23;
          *(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
          v24 = *((_QWORD*)v21 + 2);
          v25 = *((_QWORD*)v21 + 3);
          v21 += 32;
          *(_QWORD*)(v22 + 16) = v24;
          *(_QWORD*)(v22 + 24) = v25;
          v22 += 32LL;
        } while (v21 != v4);
        do {
          v26 = *(_QWORD*)v5;
          *(_QWORD*)v5 = 0;
          if (v26 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v5 += 32;
        } while (v5 != v4);
        v5 = *(char**)a1;
      }
      *(_QWORD*)a1 = v20;
      *(_QWORD*)(a1 + 8) = v19;
      *(_QWORD*)(a1 + 16) = v18;
      if (v5 != nullptr) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v5),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  if ((int)v6 >= 1 && a2 != 0) {
    v31 = 0;
    v32 = game_g_frame_clock_ptr[0];
    while (v6 >= 0x21) {
      v33 = 49152;
      if (v6 < 0x41) {
        goto LABEL_39;
      }
      if (v6 < 0x81) {
        goto LABEL_41;
      }
      if (v6 >= 0x101) {
        v34 = 49152;
        if (v6 >= 0x201) {
          goto LABEL_48;
        }
        goto LABEL_45;
      }
    LABEL_43:
      if (v33 >= 0x3000) {
        v33 = 12288;
      }
    LABEL_45:
      if (v33 >= 0x6000) {
        v34 = 24576;
      }
      else {
        v34 = v33;
      }
    LABEL_48:
      v35 = 0;
      do {
        v39 = *(_DWORD*)(a1 + 24);
        v40 = *(char**)a1;
        v47_.v47 = 3;
        v41 = (__int64*)&v40[32 * v31 + 32 * v39 * v35];
        v42 = *(_QWORD*)(*v32 + 312);
        v43 = *(_QWORD*)(*(_QWORD*)(*v32 + 552) + 16LL);
        v47_.v48 = v34;
        v47_.v49 = v42;
        GameRoutine_53bd0_alt1((void*)(&v50), (__int64)&v47_.v47),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v44 = v50;
        v50 = 0;
        v45 = *v41;
        *v41 = v44;
        if (v45 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v46 = v50;
          v50 = 0;
          if (v46 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46),
                v37 =
                    COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 80LL))(v43),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v41[3] = v37;
        v38 = *v41;
        v41[2] = v36;
        GameRoutine_5de60_alt1(v41 + 2, v38),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        ++v35;
      } while (a2 != v35);
      ++v31;
      if (v6 >= 0x400) {
        v6 -= 1024;
      }
      else {
        v6 = 0;
      }
      if ((int)v6 <= 0) {
        return;
      }
    }
    v33 = 1536;
  LABEL_39:
    if (v33 >= 0xC00) {
      v33 = 3072;
    }
  LABEL_41:
    if (v33 >= 0x1800) {
      v33 = 6144;
    }
    goto LABEL_43;
  }
}

void InstanceModel_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
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
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
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
  __int64 v60;
  __int64 v61;
  __int64 v62;

  *(_QWORD*)a1 = g3d_InstanceModel_vtable;
  v2 = *(_QWORD*)(a1 + 360);
  if (v2 != 0) {
    v3 = game_g_frame_clock_ptr[0];
    v4 = *(_QWORD*)(a1 + 352);
    v5 = *game_g_frame_clock_ptr[0];
    v6 = v4 + 112 * v2;
    do {
      GameRoutine_5ecdc0_alt1(v4, v5 + 568);
      v7 = *(_QWORD*)(*v3 + 80);
      v62 = *(_QWORD*)(v4 + 104);
      if (v7 == 0) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v62);
      v4 += 112;
    } while (v4 != v6);
  }
  gxc_GpuMemory_Destroy_GpuMemory_alt1((_QWORD*)(a1 + 480));
  v8 = *(_QWORD*)(a1 + 472);
  *(_QWORD*)(a1 + 472) = 0;
  if (v8 != 0) {
    v9 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v9, v8);
  }
  v10 = *(_QWORD*)(a1 + 448);
  if (v10 != 0) {
    v11 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 456) = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v11 + v12, v10);
  }
  v13 = *(_QWORD*)(a1 + 424);
  if (v13 != 0) {
    v14 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 432) = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v14 + v15, v13);
  }
  v16 = *(_QWORD*)(a1 + 392);
  if (v16 != 0) {
    v17 = *(_QWORD*)(a1 + 400);
    if (v16 == v17) {
      goto LABEL_33;
    }
    v18 = *(_QWORD*)(a1 + 400);
    do {
      v22 = *(_QWORD*)(v18 - 24);
      v18 -= 24;
      v20 = v22;
      if (v22 != 0) {
        v23 = *(_QWORD*)(v17 - 16);
        if (v20 == v23) {
          goto LABEL_21;
        }
        do {
          v24 = *(_QWORD*)(v23 - 8);
          if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            std___1___shared_weak_count___release_weak_alt2(v24);
          }
          v23 -= 16;
        } while (v23 != v20);
        v19 = *(_QWORD*)(v17 - 24);
        *(_QWORD*)(v17 - 16) = v20;
        v20 = v19;
        if (v19 != 0) {
        LABEL_21:
          v21 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v21,
                                             v20);
        }
      }
      v17 = v18;
    } while (v16 != v18);
    v25 = *(_QWORD*)(a1 + 392);
    *(_QWORD*)(a1 + 400) = v16;
    v16 = v25;
    if (v25 != 0) {
    LABEL_33:
      v26 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v26, v16);
    }
  }
  v27 = *(_QWORD*)(a1 + 368);
  if (v27 != 0) {
    v28 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 376) = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v28 + v29, v27);
  }
  v30 = *(_QWORD*)(a1 + 312);
  if (v30 != 0) {
    v31 = *(_QWORD**)(a1 + 320);
    if ((_QWORD*)v30 == v31) {
      goto LABEL_47;
    }
    do {
      v33 = *(v31 - 4);
      v31 -= 4;
      v32 = v33;
      *v31 = 0;
      if (v33 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
      }
    } while (v31 != (_QWORD*)v30);
    v34 = *(_QWORD*)(a1 + 312);
    *(_QWORD*)(a1 + 320) = v30;
    v30 = v34;
    if (v34 != 0) {
    LABEL_47:
      v35 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v35, v30);
    }
  }
  v36 = *(_QWORD*)(a1 + 280);
  if (v36 != 0) {
    v37 = *(_QWORD**)(a1 + 288);
    if ((_QWORD*)v36 == v37) {
      goto LABEL_57;
    }
    do {
      v39 = *(v37 - 4);
      v37 -= 4;
      v38 = v39;
      *v37 = 0;
      if (v39 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
      }
    } while (v37 != (_QWORD*)v36);
    v40 = *(_QWORD*)(a1 + 280);
    *(_QWORD*)(a1 + 288) = v36;
    v36 = v40;
    if (v40 != 0) {
    LABEL_57:
      v41 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v41, v36);
    }
  }
  v42 = *(_QWORD*)(a1 + 248);
  if (v42 != 0) {
    v43 = *(_QWORD**)(a1 + 256);
    if ((_QWORD*)v42 == v43) {
      goto LABEL_67;
    }
    do {
      v45 = *(v43 - 4);
      v43 -= 4;
      v44 = v45;
      *v43 = 0;
      if (v45 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
      }
    } while (v43 != (_QWORD*)v42);
    v46 = *(_QWORD*)(a1 + 248);
    *(_QWORD*)(a1 + 256) = v42;
    v42 = v46;
    if (v46 != 0) {
    LABEL_67:
      v47 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v47, v42);
    }
  }
  v48 = *(_QWORD*)(a1 + 216);
  if (v48 != 0) {
    v49 = *(_QWORD**)(a1 + 224);
    if ((_QWORD*)v48 == v49) {
      goto LABEL_77;
    }
    do {
      v51 = *(v49 - 4);
      v49 -= 4;
      v50 = v51;
      *v49 = 0;
      if (v51 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50);
      }
    } while (v49 != (_QWORD*)v48);
    v52 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v48;
    v48 = v52;
    if (v52 != 0) {
    LABEL_77:
      v53 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v53, v48);
    }
  }
  v54 = *(_QWORD*)(a1 + 160);
  if (v54 != 0) {
    v55 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v55, v54);
  }
  v56 = *(_QWORD*)(a1 + 152);
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    std___1___shared_weak_count___release_weak_alt2(v56);
  }
  v57 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v57 != 0) {
    v58 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 88) = v57;
    v59 = 128;
    if (*(_QWORD*)(v58 + 200) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v58 + v59, v57);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v60 = *(_QWORD*)(a1 + 24);
    if (v60 != 0) {
      v61 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v61, v60);
    }
  }
}

float32x4_t InstanceModel_19862d0(__int64 a1, int a2, float32x4_t* a3,
                                  float32x4_t* a4, float32x4_t* a5,
                                  float32x4_t result)
{
  float32x4_t* v6;
  float32x4_t v7;
  int8x16_t v8;
  float v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  int8x16_t v14;
  int8x16_t v15;
  int8x16_t v16;
  int8x16_t v17;
  int8x16_t v18;
  int8x16_t v19;
  int8x16_t v20;
  int32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  int32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  int8x16_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t* v46;

  if ((*(_BYTE*)(a1 + 418) & 1) != 0 || (*(_BYTE*)(a1 + 113) & 1) != 0) {
    result = *a5;
    v6 = (float32x4_t*)(*(_QWORD*)(a1 + 448) + 48LL * a2);
    v7 = vsubq_f32(*v6, *a5);
    v8 = vmulq_f32(v7, v7);
    LANES128(v8).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
            .n64_u64[0];
    v9 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                              COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
             .n64_f32[0];
    v10 = *a4;
    if (v9 != 0x0.0p+0f ||
        (v11 = vsubq_f32(v6[1], v10), v12 = vmulq_f32(v11, v11),
         LANES128(v12).n128_u64[0] =
             LANES64_OF(
                 vadd_f32(
                     COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                 .n64_u64[0],
         LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                 .n64_f32[0] != 0x0.0p+0f) ||
        (v13 = vsubq_f32(v6[2], *a3), v14 = vmulq_f32(v13, v13),
         LANES128(v14).n128_u64[0] =
             LANES64_OF(
                 vadd_f32(
                     COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                 .n64_u64[0],
         LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                 .n64_f32[0] != 0x0.0p+0f)) {
      v15 = vmlaq_f32(v10, vdupq_n_s32(0xC0C90FDB),
                      vrndnq_f32(vmulq_f32(v10, vdupq_n_s32(0x3E22F983u))));
      v16 = vcgtq_f32(v15, vdupq_n_s32(0x3FC90FDBu));
      v17 = vmvnq_s8(v16);
      v18 = vbslq_s8(v16, vsubq_f32(vdupq_n_s32(0x40490FDBu), v15), v15);
      v19 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v18);
      v20 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v18);
      v21 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
      v22 = vbslq_s8(v19, v20, v18);
      PSEUDO_LOW_LANE128(v20, n128_u32, *(_DWORD*)GameData_212c190);
      v23 = vbicq_s8(v17, v19);
      v24 = vmulq_f32(v22, v22);
      v25 = vmlsq_lane_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v21).n128_u64[0]), 0),
          v24, COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(
          v20, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v26 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 0),
          v24, v25);
      v27 = vmlaq_f32(vdupq_laneq_s32(v21, 2), v24, v26);
      LANES128(v21).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v21).n128_u64[1] = 0x3F8000003F800000LL;
      PSEUDO_LOW_LANE128(
          v26, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_OWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v28 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v26).n128_u64[0]), 0),
          v24, v27);
      v29 = vmlaq_f32(v21, v24, v28);
      PSEUDO_LOW_LANE128(v28, n128_u32, *(_DWORD*)GameData_212c188);
      v30 = vmulq_f32(v22, v29);
      v31 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
      v32 = vmlsq_lane_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v31).n128_u64[0]), 0),
          v24, COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(
          v28, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c188))));
      v33 = vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 0),
          v24, v32);
      v34 = vmlaq_f32(vdupq_laneq_s32(v31, 2), v24, v33);
      PSEUDO_LOW_LANE128(v33, n128_f32, -LANES128(v31).n128_f32[3]);
      v35 = vmlaq_f32(
          v21, v24,
          vmlaq_f32(vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v33).n128_u64[0]), 0),
                    v24, v34));
      v36 = vbslq_s8(v23, v35, vnegq_f32(v35));
      LANES128(v24).n128_u64[0] =
          LANES128(v36).n128_u32[2] |
          ((unsigned __int64)LANES128(v30).n128_u32[2] << 32);
      LANES128(v31).n128_u64[0] =
          LANES128(v36).n128_u32[1] |
          ((unsigned __int64)LANES128(v36).n128_u32[1] << 32);
      LANES128(v31).n128_u64[1] = 3212836864LL;
      LANES128(v35).n128_u64[0] = LANES128(v24).n128_u64[0];
      LANES128(v35).n128_u64[1] = LANES128(v30).n128_u32[1];
      v37 = vmulq_f32(v35, v31);
      LANES128(v35).n128_u64[0] =
          LANES128(v30).n128_u32[1] |
          ((unsigned __int64)LANES128(v30).n128_u32[1] << 32);
      LANES128(v35).n128_u64[1] = LANES128(v36).n128_u32[1];
      LANES128(v24).n128_u64[1] = 1065353216;
      v38 = vmulq_f32(v35, v24);
      LANES128(v35).n128_u64[0] =
          __ROR8__(LANES128(v36).n128_u32[2] |
                       ((unsigned __int64)LANES128(v30).n128_u32[2] << 32),
                   32);
      LANES128(v39).n128_u64[0] = 0;
      v40 = vaddq_f32(vmulq_n_f32(v38, LANES128(v30).n128_f32[0]),
                      vmulq_f32(vmulq_n_f32(v35, LANES128(v36).n128_f32[0]),
                                COERCE_AS(float32x4_t, GameData_1a82940)));
      LANES128(v34).n128_u32[0] = 0;
      v41 = vaddq_f32(vmulq_n_f32(v38, LANES128(v36).n128_f32[0]),
                      vmulq_f32(vmulq_n_f32(v35, LANES128(v30).n128_f32[0]),
                                COERCE_AS(float32x4_t, GameData_1a83510)));
      LANES128(v34).n128_u32[1] = HIDWORD(LANES128(*(a3)).n128_u64[0]);
      LANES128(v39).n128_u64[1] = (unsigned int)LANES128(*(a3)).n128_u64[1];
      v42 = vmlaq_f32(
          vmlaq_f32(vmulq_n_f32(v37, COERCE_FLOAT(LANES128(*(a3)).n128_u64[0])),
                    COERCE_AS(float32x4_t, 0), v40),
          COERCE_AS(float32x4_t, 0), v41);
      v43 = vmlaq_f32(
          vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v37), v40,
                         COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, 0), v41);
      v44 = vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v37),
                                      COERCE_AS(float32x4_t, 0), v40),
                            v41, v39, 2);
      v45 = vaddq_f32(
          vmlaq_f32(vmlaq_f32(vmulq_f32(v37, COERCE_AS(float32x4_t, 0)),
                              COERCE_AS(float32x4_t, 0), v40),
                    COERCE_AS(float32x4_t, 0), v41),
          COERCE_AS(float32x4_t, 0));
      LANES128(*(v6)).n128_u64[1] = LANES128(*(a5)).n128_u64[1];
      LANES128(*(v6)).n128_u64[0] = LANES128(*(a5)).n128_u64[0];
      LANES128(v6[1]).n128_u64[1] = LANES128(*(a4)).n128_u64[1];
      LANES128(v6[1]).n128_u64[0] = LANES128(*(a4)).n128_u64[0];
      LANES128(v6[2]).n128_u64[1] = LANES128(*(a3)).n128_u64[1];
      result = vaddq_f32(
          result, vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                      LANES128(v45).n128_f32[0]),
                          COERCE_AS(float32x4_t, GameData_1a83610),
                          COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v45, 2));
      LANES128(v6[2]).n128_u64[0] = LANES128(*(a3)).n128_u64[0];
      v46 = (float32x4_t*)(*(_QWORD*)(a1 + 424) + ((__int64)a2 << 6));
      *v46 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v42).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v42, 2);
      v46[1] = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v43).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v43, 2);
      v46[2] = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v44).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v44, 2);
      v46[3] = result;
      *(_BYTE*)(a1 + 416) = 1;
    }
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

__int64* InstanceModel_Unknown4(__int64* result, _DWORD* a2, _QWORD* a3,
                                _QWORD* a4)
{
  int v4;
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  float32x4_t* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  int v23;
  __int64 v24;
  int v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  int v34;
  float v35;
  int v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned int v41;
  int v42;
  __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  __int64* v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64** v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int** v79;
  int* v80;
  int v81;
  int v82;
  bool v83;
  int v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  int v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v94;
  float32x4_t v96;
  float32x4_t v97;
  int8x16_t v98;
  unsigned __int64 v99;
  _QWORD* v100;
  _QWORD* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  bool v111;
  __int64 v112;
  unsigned __int16* v113;
  int v114;
  unsigned __int64 v115;
  int v116;
  int v117;
  int v118;
  int v119;
  __int64 v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  unsigned __int64 v126;
  _QWORD* v127;
  __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  _QWORD* v136;
  __int64 v137;
  __int64 v138;
  __int64 (**v139)();
  __int64 v140;
  unsigned int v141;
  __int64 v142;
  __int64 (***v143)();
  __int64 (***v144)();
  __int64 (**v145)();
  __int64 (***v146)();
  __int64 (***v147)();
  __int64 (**v148)();
  __int64 v149;
  __int64 v150;
  char v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  unsigned __int64 v160;
  unsigned __int64 v161;
  int v162;
  __int64 v163;
  int v164;
  __int64 v165;
  bool v166;
  unsigned __int8 v167;
  int v168;
  __int64* v169;
  __int64 v170;
  int v171;
  __int64 v172;
  int v173;
  int v174;
  int v175;
  struct {
    __int64 (**v176)();
    __int64 v177;
    __int64* v178;
    int v179;
    char v180;
    bool v181;
    char gap206_[2];
    __int64 (***v182)();
    char gap216_[32];
    _DWORD* v183;
  } v176_;

  v4 = *((_DWORD*)result + 34);
  v176_.v183 = a2;
  if (v4 != 0) {
    v5 = (__int64*)a4[1];
    v6 = a4;
    v7 = a3;
    v8 = (float32x4_t*)result;
    if (v5[1] != v5[2] || *(_DWORD*)(v9 = *v5) != -2 ||
        *(_DWORD*)(v9 + 8) == 3) {
      v10 = result[16];
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
            return result;
          }
        }
        if (*((_BYTE*)result + 142) == 1) {
          v16 = result[46];
          v15 = result[47];
          if (v16 == v15) {
            v166 = false;
            v19 = *(unsigned __int16*)(v10 + 164);
            if (*(_WORD*)(v10 + 164) == 0) {
              return result;
            }
            goto LABEL_19;
          }
          v17 = v16 + 4;
          do {
            v18 = *(_DWORD*)(v17 - 4);
            v166 = v18 >= 0;
            if ((v18 & 0x80000000) == 0) {
              break;
            }
            v83 = v17 == v15;
            v17 += 4;
          } while (!v83);
        }
        else {
          v166 = false;
        }
        v19 = *(unsigned __int16*)(v10 + 164);
        if (*(_WORD*)(v10 + 164) == 0) {
          return result;
        }
      LABEL_19:
        v20 = 0xFFFFFFFFLL;
        v21 = 0;
        v152 = 0;
        v22 = nullptr;
        v23 = *(_DWORD*)(v10 + 252) - 1;
        v164 = *((unsigned __int8*)result + 140);
        v156 = result[16];
        v149 = v19;
        v150 = *a3 & 0x3FLL;
        v168 = v23;
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
        result = (__int64*)(*(_QWORD*)(v10 + 176) + 112 * v21);
        v26 = *(unsigned __int16*)(*result + 82);
        if (((*(unsigned int*)(*(_QWORD*)(v10 + 152) + 4 * (v26 >> 5)) >>
              (v26 & 0x1F)) &
             1) == 0 ||
            ((*(_DWORD*)(*(_QWORD*)(v10 + 144) +
                         4 * ((unsigned __int64)*(unsigned __int16*)(*result +
                                                                     84) >>
                              5)) >>
              *(_WORD*)(*result + 84)) &
             1) == 0) {
          goto LABEL_21;
        }
        v27 = *(_QWORD*)(v10 + 312);
        if (v20 != v26) {
          v20 = *(unsigned __int16*)(*result + 82);
          v22 = *(_QWORD**)(v27 + 16 * v26);
        }
        v29 = (__int64*)v22[36];
        v28 = (__int64*)v22[37];
        v30 = *(_QWORD*)(v27 + 16 * v20);
        v31 = *(_DWORD*)(v30 + 400);
        v32 = *(unsigned __int8*)(v30 + 410);
        v33 = (unsigned int)(v31 - 1) >= 3
                  ? *(_DWORD*)(*(_QWORD*)(v10 + 360) + 4LL * (int)v21)
                  : *(_DWORD*)(*(_QWORD*)(v10 + 360) + 4LL * (int)v21) | 4;
        v34 = v32 != 0 ? v33 : v33 | 0x20;
        if (v29 == v28) {
          goto LABEL_21;
        }
        v35 = 0x0.0p+0f;
        v157 = 8 * v21;
        v158 = v22;
        v36 = 1;
        v154 = v20;
        v37 = nullptr;
        v167 = 0;
        v165 = v21;
        v169 = v28;
        v170 = *(_QWORD*)(v10 + 176) + 112 * v21;
        v171 = v34;
      LABEL_43:
        v39 = *v29;
        v40 = *v29 >> 32;
        if (v40 >= 6) {
          String_60a250_alt1("bitset test argument out of range");
        }
        if (((*v7 >> v40) & 1) == 0) {
          goto LABEL_42;
        }
        if ((unsigned int)(HIDWORD(v39) - 1) < 2) {
          if ((*(_BYTE*)(*(_QWORD*)(v10 + 616) + 8 * v21 + 1) & 0x80) != 0) {
            goto LABEL_42;
          }
        }
        else if (HIDWORD(v39) == 4) {
          if ((*(_BYTE*)(*(_QWORD*)(v10 + 616) + v24) & 2) == 0) {
            goto LABEL_42;
          }
        }
        else if (HIDWORD(v39) == 3 &&
                 (*(_BYTE*)(*(_QWORD*)(v10 + 616) + v24) & 1) == 0) {
          goto LABEL_42;
        }
        v41 = HIDWORD(v39) - 3;
        v42 = (unsigned int)(HIDWORD(v39) - 3) < 3;
        if (v37 != nullptr && v42 == v167) {
          if ((v36 & 1) != 0) {
            goto LABEL_148;
          }
          goto LABEL_56;
        }
        v44 = LANES128(v8[9]).n128_u64[0];
        v45 = *(_QWORD**)(v44 + 16);
        v46 = *(_QWORD**)(v44 + 24);
        v47 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v45 == v46) {
        LABEL_61:
          v162 = v36;
          v48 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
          *v48 = 0;
          v48[1] = 0;
          v48[2] = 0;
          v48[3] = 0;
          v49 = v48;
          v48[4] = 0;
          v48[5] = 0;
          v48[6] = 0;
          v48[7] = 0;
          v50 = *(unsigned int*)(v44 + 8);
          if ((_DWORD)v50 != 0) {
            if ((v50 & 0x80000000) != 0) {
              GameRoutine_1987fb0_alt1();
            }
            v51 = 2 * v50;
            v52 = fw_memory_g_heap_manager_ptr;
            v53 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 2 * v50, 16, 0);
            v54 = v53 + 2 * v50;
            v55 = v51;
            v47 = (__int64*)v52;
            memset_alt1(v53, 0, v55);
            *v49 = v53;
            v49[1] = v54;
            v10 = v156;
            v49[2] = v54;
          }
          v56 = fw_memory_HeapManager_Allocate_alt1(*v47, 128, 16, 0);
          v49[3] = v56;
          v49[4] = v56;
          v49[5] = v56 + 128;
          v57 = *(_QWORD*)v176_.v183;
          v59 = *(_QWORD**)(v44 + 24);
          v58 = *(_QWORD*)(v44 + 32);
          if ((unsigned __int64)v59 >= v58) {
            v61 = *(_QWORD*)(v44 + 16);
            v62 = (unsigned __int64)v59 - v61;
            v63 = ((__int64)v59 - v61) >> 4;
            v64 = v63 + 1;
            if ((unsigned __int64)(v63 + 1) >> 60 != 0) {
              GameRoutine_1987ff0_alt1();
            }
            v65 = v58 - v61;
            if (v65 >> 3 > v64) {
              v64 = v65 >> 3;
            }
            if ((unsigned __int64)v65 >= 0x7FFFFFFFFFFFFFF0LL) {
              v66 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v66 = v64;
            }
            if (v66 != 0) {
              if (v66 >> 60 != 0) {
              LABEL_250:
                GameRoutine_60a210_alt1();
              }
              v67 = *(_QWORD*)v176_.v183;
              v68 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v66, 16, 0);
              v57 = v67;
              v6 = a4;
            }
            else {
              v68 = 0;
            }
            v70 = (_QWORD*)(v68 + v62);
            *v70 = v57;
            v70[1] = v49;
            v71 = v68 + v62 - 16 * v63;
            v153 = v68 + 16 * v66;
            v60 = v68 + v62 + 16;
            memcpy_alt1(v71, v61, v62);
            *(_QWORD*)(v44 + 16) = v71;
            *(_QWORD*)(v44 + 24) = v60;
            *(_QWORD*)(v44 + 32) = v153;
            if (v61 != 0) {
              v72 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v72 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, v61);
            }
            v7 = a3;
            v10 = v156;
          }
          else {
            *v59 = v57;
            v59[1] = v49;
            v7 = a3;
            v60 = (__int64)(v59 + 2);
          }
          v23 = v168;
          v28 = v169;
          result = (__int64*)v170;
          v69 = (__int64**)(v60 - 8);
          v34 = v171;
          v36 = v162;
          LOBYTE(v42) = (unsigned int)(HIDWORD(v39) - 3) < 3;
          v41 = HIDWORD(v39) - 3;
          *(_QWORD*)(v44 + 24) = v60;
          v24 = v157;
        }
        else {
          while (*v45 != 0) {
            v45 += 2;
            if (v45 == v46) {
              goto LABEL_61;
            }
          }
          *v45 = *(_QWORD*)v176_.v183;
          v69 = (__int64**)(v45 + 1);
        }
        v37 = *v69;
        v21 = v165;
        if (LANES128(v8[8]).n128_i32[2] < 1) {
          goto LABEL_151;
        }
        v73 = 0;
        v74 = 0;
        while (1) {
          *(_WORD*)(*v37 + 2 * v73) = -258;
          if (LANES128(v8[8]).n128_u8[13] == 1 &&
              ((*(_QWORD*)(LANES128(v8[10]).n128_u64[0] + 8 * (v73 >> 6)) >>
                v73) &
               1) == 0) {
            goto LABEL_87;
          }
          v76 = *(_QWORD*)(*v6 + 8LL);
          if (v76 != *(_QWORD*)(*v6 + 16LL) && *(_BYTE*)(v76 + (int)v73) != 0) {
            goto LABEL_87;
          }
          v77 = v6[1];
          v78 = *(_QWORD*)(v77 + 8);
          v79 = (int**)(v78 + 8LL * (int)v73);
          if (v78 == *(_QWORD*)(v77 + 16)) {
            v79 = (int**)v6[1];
          }
          v80 = *v79;
          if ((v34 & 0x20) != 0) {
            v85 = *v80;
            if (v85 == -2) {
              goto LABEL_87;
            }
            if (v85 >= v23) {
              v82 = v23;
            }
            else {
              v82 = v85;
            }
          }
          else {
            v81 = v80[2];
            v82 = *v80;
            v83 = v81 != 3 && v82 == -2;
            if (v83) {
              goto LABEL_87;
            }
            if (v82 >= v23) {
              v82 = v23;
            }
            if (v81 == 3) {
              v84 = v80[1];
              if (v84 >= v23) {
                v84 = v23;
              }
              if (v41 > 2) {
                goto LABEL_116;
              }
            LABEL_111:
              if ((*(_DWORD*)(*(_QWORD*)(v10 + 616) + v24) & 0xC000) ==
                  0x8000) {
                v86 = *(unsigned __int8*)(*result + 91) - 1;
                if (v86 < v82) {
                  v82 = *(unsigned __int8*)(*result + 91) - 1;
                }
                if (v86 < v84) {
                  v84 = *(unsigned __int8*)(*result + 91) - 1;
                }
              }
              goto LABEL_116;
            }
          }
          v84 = v82;
          if (v41 <= 2) {
            goto LABEL_111;
          }
        LABEL_116:
          if (v82 < 0 ||
              ((v87 = *(_QWORD*)(v10 + 384)) == *(_QWORD*)(v10 + 392)
                   ? (LOBYTE(v88) = 0)
                   : (v88 = (*(_QWORD*)(v87 + 8LL * (int)v165) >> v82) & 1LL),
               (v89 = -2,
                v82 < (unsigned int)*(unsigned __int8*)(*result + 91)) &&
                   (v88 & 1) == 0)) {
            v89 = v82;
          }
          if (v84 < 0 ||
              ((v90 = *(_QWORD*)(v10 + 384)) == *(_QWORD*)(v10 + 392)
                   ? (LOBYTE(v91) = 0)
                   : (v91 = (*(_QWORD*)(v90 + 8LL * (int)v165) >> v84) & 1LL),
               (v92 = -2,
                v84 < (unsigned int)*(unsigned __int8*)(*result + 91)) &&
                   (v91 & 1) == 0)) {
            v92 = v84;
          }
          if (v89 == -2 && v92 == -2) {
            goto LABEL_87;
          }
          *(_BYTE*)(*v37 + 2 * v73) = v89;
          *(_BYTE*)(*v37 + 2 * v73 + 1) = v92;
          if (v89 == -2) {
            goto LABEL_138;
          }
          v94 = *(_QWORD*)(*result + 24);
          if (v94 != 0) {
            v94 += 56LL * v89;
            if (*(_DWORD*)(v94 + 36) != 3) {
            LABEL_138:
              LODWORD(v94) = 0;
            }
            else {
              LODWORD(v94) = *(_DWORD*)(v94 + 44) / 3u;
            }
          }
          if (v89 != v92 && v92 != -2) {
            v75 = *(_QWORD*)(*result + 24);
            if (v75 == 0) {
              goto LABEL_86;
            }
            v75 += 56LL * v92;
            if (*(_DWORD*)(v75 + 36) == 3) {
              LODWORD(v75) = *(_DWORD*)(v75 + 44) / 3u;
              goto LABEL_86;
            }
          }
          LODWORD(v75) = 0;
        LABEL_86:
          v74 += v94 + v75;
        LABEL_87:
          if ((__int64)++v73 >= LANES128(v8[8]).n128_i32[2]) {
            if (v74 != 0) {
              v167 = v42;
              *((_DWORD*)v37 + 12) = v165;
              *((_DWORD*)v37 + 13) = v154;
              v152 = 1;
              if ((v36 & 1) != 0) {
              LABEL_148:
                v43 = *(_QWORD*)v176_.v183;
                if (*(_QWORD*)(*(_QWORD*)v176_.v183 + 80LL) != 0) {
                  LANES128(v96).n128_u64[0] = 0x3F0000003F000000LL;
                  LANES128(v96).n128_u64[1] = 0x3F0000003F000000LL;
                  v97 = vmulq_f32(vaddq_f32(v8[3], v8[4]), v96);
                  LANES128(v96).n128_u64[0] = *(_QWORD*)(v43 + 88);
                  LANES128(v96).n128_u64[1] = *(unsigned int*)(v43 + 96);
                  v98 = vmulq_f32(v97, v96);
                  LANES128(v98).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v98, v98, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v98).n128_u64[0])))
                          .n64_u64[0];
                  v35 = *(float*)(v43 + 108) +
                        (float)((float)(LANES64_OF(
                                            vpadd_f32(
                                                COERCE_AS(
                                                    float32x2_t,
                                                    LANES128(v98).n128_u64[0]),
                                                COERCE_AS(
                                                    float32x2_t,
                                                    LANES128(v98).n128_u64[0])))
                                            .n64_f32[0] +
                                        *(float*)(v43 + 100)) *
                                *(float*)(v43 + 104));
                  LOBYTE(v43) = v164;
                  if (v164 != 0) {
                  LABEL_156:
                    v43 = v158[40];
                    if (v43 != 0) {
                      v102 = v158[33];
                      if (0xAAAAAAAAAAAAAAABLL * ((v158[34] - v102) >> 3) <=
                          (int)v39) {
                        goto LABEL_166;
                      }
                      v103 = *(_QWORD*)(v102 + 24LL * (int)v39);
                      if (v103 == 0) {
                        goto LABEL_166;
                      }
                      v104 = std___1___hash_memory_alt1((__int64)"co_instance",
                                                        0xBu);
                      v34 = v171;
                      v105 = *(_QWORD*)(v103 + 232);
                      v106 = v105;
                      do {
                        if (v106 == *(_QWORD*)(v103 + 224)) {
                          goto LABEL_166;
                        }
                        v107 = *(_QWORD*)(v106 - 16);
                        v106 -= 16;
                        v105 -= 16;
                      } while (v107 != v104);
                      if (*(_QWORD*)(v103 + 232) == v105) {
                      LABEL_166:
                        LOBYTE(v43) = 0;
                      }
                      else {
                        LOBYTE(v43) = 1;
                        if ((v37[7] & 1) == 0) {
                          *((_BYTE*)v37 + 56) = 1;
                          v108 = LANES128(v8[8]).n128_u32[2];
                          v37[4] = v37[3];
                          if ((int)v108 >= 1) {
                            v109 = 0;
                            v159 = v108;
                            while (1) {
                              v112 = *v37;
                              v113 = (unsigned __int16*)(*v37 + 2LL * v109);
                              v114 = *v113;
                              if (v114 == 65278) {
                                break;
                              }
                              if (LANES128(v8[8]).n128_u8[14] == 1) {
                                v115 = LANES128(v8[23]).n128_u64[0];
                                if (v115 == LANES128(v8[23]).n128_u64[1]) {
                                  if (v109 >= 0) {
                                    v123 = v109;
                                  }
                                  else {
                                    v123 = v109 + 1023;
                                  }
                                  LODWORD(v120) = v109 + 1;
                                  LODWORD(v110) = v109 + 1;
                                  if (v109 + 1 < (int)v108) {
                                    v124 = v123 >> 10;
                                    v120 = (int)v120;
                                    while (1) {
                                      v125 = v120 + 1023;
                                      LODWORD(v110) = v120;
                                      if ((int)v120 >= 0) {
                                        v125 = v120;
                                      }
                                      if (v124 != v125 >> 10) {
                                        break;
                                      }
                                      if (*(unsigned __int16*)(v112 +
                                                               2 * v120) !=
                                          v114) {
                                        goto LABEL_208;
                                      }
                                      if (v108 == ++v120) {
                                        goto LABEL_207;
                                      }
                                    }
                                  }
                                }
                                else {
                                  if ((*(_DWORD*)(v115 + 4LL * v109) &
                                       0x80000000) == 0) {
                                    break;
                                  }
                                  v116 = v109 + 1023;
                                  v117 = v109 + 1;
                                  if (v109 >= 0) {
                                    v116 = v109;
                                  }
                                  LODWORD(v110) = v109 + 1;
                                  if (v117 < (int)v108) {
                                    v118 = v116 >> 10;
                                    v110 = v117;
                                    while (
                                        v118 == (int)v110 / 1024 &&
                                        *(unsigned __int16*)(v112 + 2 * v110) ==
                                            v114 &&
                                        (*(_DWORD*)(v115 + 4 * v110) &
                                         0x80000000) != 0) {
                                      if (v108 == ++v110) {
                                        goto LABEL_207;
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                if (v109 >= 0) {
                                  v119 = v109;
                                }
                                else {
                                  v119 = v109 + 1023;
                                }
                                LODWORD(v120) = v109 + 1;
                                LODWORD(v110) = v109 + 1;
                                if (v109 + 1 < (int)v108) {
                                  v121 = v119 >> 10;
                                  v120 = (int)v120;
                                  while (1) {
                                    v122 = v120 + 1023;
                                    LODWORD(v110) = v120;
                                    if ((int)v120 >= 0) {
                                      v122 = v120;
                                    }
                                    if (v121 != v122 >> 10) {
                                      break;
                                    }
                                    if (*(unsigned __int16*)(v112 + 2 * v120) !=
                                        v114) {
                                    LABEL_208:
                                      LODWORD(v110) = v120;
                                      break;
                                    }
                                    if (v108 == ++v120) {
                                    LABEL_207:
                                      LODWORD(v110) = v108;
                                      break;
                                    }
                                  }
                                }
                              }
                              v127 = (_QWORD*)v37[4];
                              v126 = v37[5];
                              if ((unsigned __int64)v127 >= v126) {
                                v129 = v37[3];
                                v130 = (unsigned __int64)v127 - v129;
                                v131 = ((__int64)v127 - v129) >> 4;
                                v132 = v131 + 1;
                                if ((unsigned __int64)(v131 + 1) >> 60 != 0) {
                                  GameRoutine_1987fd0_alt1();
                                }
                                v133 = v126 - v129;
                                v163 = *v37 + 2LL * v109;
                                if (v133 >> 3 > v132) {
                                  v132 = v133 >> 3;
                                }
                                if ((unsigned __int64)v133 >=
                                    0x7FFFFFFFFFFFFFF0LL) {
                                  v134 = 0xFFFFFFFFFFFFFFFLL;
                                }
                                else {
                                  v134 = v132;
                                }
                                if (v134 != 0) {
                                  v160 = v130;
                                  if (v134 >> 60 != 0) {
                                    goto LABEL_250;
                                  }
                                  v135 = fw_memory_HeapManager_Allocate_alt1(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      16 * v134, 16, 0);
                                  v130 = v160;
                                }
                                else {
                                  v135 = 0;
                                }
                                v136 = (_QWORD*)(v135 + v130);
                                v137 = v135 + v130 - 16 * v131;
                                v161 = v135 + 16 * v134;
                                *v136 = 0;
                                v136[1] = 0;
                                v128 = v135 + v130 + 16;
                                memcpy_alt1(v137, v129, v130);
                                v37[3] = v137;
                                v37[4] = v128;
                                v37[5] = v161;
                                if (v129 != 0) {
                                  v138 = 128;
                                  if (*(_QWORD*)(*(_QWORD*)
                                                     fw_memory_g_heap_manager_ptr +
                                                 200LL) == 0) {
                                    v138 = 56;
                                  }
                                  nn_mem_StandardAllocator_Free_alt1(
                                      *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                          v138,
                                      v129);
                                }
                                v7 = a3;
                                v10 = v156;
                                v34 = v171;
                                v108 = v159;
                                v113 = (unsigned __int16*)v163;
                              }
                              else {
                                *v127 = 0;
                                v127[1] = 0;
                                v128 = (__int64)(v127 + 2);
                              }
                              v37[4] = v128;
                              *(_DWORD*)(v128 - 16) = v109;
                              *(_DWORD*)(v128 - 12) = v110 - v109;
                              *(_DWORD*)(v128 - 8) = *(char*)v113;
                              *(_DWORD*)(v128 - 4) = *((char*)v113 + 1);
                              v24 = v157;
                            LABEL_171:
                              LOBYTE(v43) = 1;
                              v109 = v110;
                              v111 = (int)v110 < (int)v108;
                              v21 = v165;
                              if (!v111) {
                                goto LABEL_167;
                              }
                            }
                            LODWORD(v110) = v109 + 1;
                            goto LABEL_171;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  v35 = 0x0.0p+0f;
                  LOBYTE(v43) = v164;
                  if (v164 != 0) {
                    goto LABEL_156;
                  }
                }
              }
              else {
              LABEL_56:
                LOBYTE(v43) = v164;
                if (v164 != 0) {
                  goto LABEL_156;
                }
              }
            LABEL_167:
              v176_.v180 = v43;
              v175 = v34;
              v176_.v178 = v37;
              v176_.v179 = v39;
              *((float*)&v172 + 1) = v35;
              v176_.v176 = GameData_211d4a8;
              v176_.v177 = (__int64)v8;
              v176_.v182 = &v176_.v176;
              v173 = 0;
              v174 = v39;
              v176_.v181 = v166;
              LODWORD(v172) = LANES128(v8[2]).n128_u32[1];
              ElementRenderer_a74470_alt1((__int64)v176_.v183,
                                          (__int64)&v176_.v176, &v172);
              if (v176_.v182 != &v176_.v176) {
                v23 = v168;
                if (v176_.v182 != nullptr) {
                  v38 = 5;
                LABEL_40:
                  ((__int64 (*)(__int64))(*v176_.v182)[v38])(
                      (__int64)v176_.v182);
                }
                v28 = v169;
                result = (__int64*)v170;
                v34 = v171;
                v36 = 0;
                goto LABEL_42;
              }
              v23 = v168;
              v38 = 4;
              goto LABEL_40;
            }
          LABEL_151:
            v99 = LANES128(v8[9]).n128_u64[0];
            v100 = *(_QWORD**)(v99 + 16);
            v101 = *(_QWORD**)(v99 + 24);
            if (v100 != v101) {
              while ((__int64*)v100[1] != v37) {
                v100 += 2;
                if (v100 == v101) {
                  goto LABEL_228;
                }
              }
              *v100 = 0;
            }
          LABEL_228:
            *((_BYTE*)v37 + 56) = 0;
            v37 = nullptr;
          LABEL_42:
            if (++v29 != v28) {
              goto LABEL_43;
            }
            v19 = v149;
            v13 = v150;
            v22 = v158;
            v20 = v154;
          LABEL_21:
            if (++v21 == v19) {
              if ((v152 & 1) == 0) {
                return result;
              }
              v139 = (__int64 (**)(void))LANES128(v8[9]).n128_u64[0];
              v140 = LANES128(v8[9]).n128_i64[1];
              v176_.v176 = v139;
              v176_.v177 = v140;
              if (v140 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v140 + 8),
                                          1u, memory_order_relaxed);
              }
              v141 = v176_.v183[2];
              v142 = *(_QWORD*)v176_.v183;
              if ((v141 & 0x80000000) != 0) {
                result = *(__int64**)(v142 + 112);
                v146 = (__int64 (***)(void))*result;
                v147 = (__int64 (***)(void))result[1];
                if ((__int64 (***)(void))*result != v147) {
                  do {
                    v148 = *v146;
                    v146 += 2;
                    if (v148 == v139) {
                      goto LABEL_243;
                    }
                  } while (v146 != v147);
                }
              }
              else {
                result = (__int64*)(*(_QWORD*)(v142 + 112) + 24LL * v141);
                v143 = (__int64 (***)(void))*result;
                v144 = (__int64 (***)(void))result[1];
                if ((__int64 (***)(void))*result != v144) {
                  do {
                    v145 = *v143;
                    v143 += 2;
                    if (v145 == v139) {
                      goto LABEL_243;
                    }
                  } while (v143 != v144);
                }
              }
              result = GameRoutine_a73760_alt1(result, &v176_.v176);
              v140 = v176_.v177;
            LABEL_243:
              if (v140 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v140 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v140 + 16LL))(v140);
                return (__int64*)
                    std___1___shared_weak_count___release_weak_alt2(v140);
              }
              return result;
            }
            goto LABEL_22;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
