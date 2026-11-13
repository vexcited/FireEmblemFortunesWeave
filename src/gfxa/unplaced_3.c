#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameHr_e5d5a0(__int64*, _QWORD*);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8);
__int64* Manager_bc6460(_QWORD*, __int64, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, __int64,
                                      char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a680(__int64, unsigned __int64, const char*,
                            unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 gxc_Allocate_5f420(__int64, __int64);
__int64 gxc_Free_5f440(__int64);
__int64 gxc_NvnDescriptorPool_AllocateTextureDescriptor(__int64);
unsigned __int128 gxc_NvnDescriptorPool_AllocateTextureDescriptor_pair(
    __int64) __asm__("gxc_NvnDescriptorPool_AllocateTextureDescriptor");
__int64 gxc_NvnDescriptorPool_FreeTextureDescriptor(__int64 result, __int64,
                                                    int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_vfx_bc5ea0(_QWORD*, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN** GameData_2132160[15];
extern _UNKNOWN** GameData_2132168[14];
extern _UNKNOWN** GameData_2132170[13];
extern _UNKNOWN** GameData_2132178[12];
extern _UNKNOWN** GameData_2132180[11];
extern _UNKNOWN** GameData_2132188[10];
extern _UNKNOWN** GameData_2132190[9];
extern _UNKNOWN** GameData_21321a8[6];
extern _UNKNOWN** GameData_21321b0[5];
extern _UNKNOWN** GameData_21321b8[4];
extern _UNKNOWN** GameData_21321c0[3];
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_2177528)(__int64, __int64, unsigned int*);
extern __int64 (*GameData_21788c8)(_BYTE*, __int64);
extern __int64 (*GameData_2178930)(_BYTE*, __int64, __int64, unsigned __int64);
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_226b678;
extern __int64 GameData_226b688;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern unsigned int GameData_1c1b0b0[5];
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_adf500();
void __attribute__((noreturn)) GameRoutine_b44a40();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void gfxa_b447c0(__int64 a1, unsigned __int64 a2);
__int64 gfxa_18dd220(__int64* a1);
void gfxa_18df280(__int64 a1, __int64* a2);

void gfxa_b447c0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
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

  v3 = *(_QWORD**)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if (0x6DB6DB6DB6DB6DB7LL * ((v2 - (__int64)v3) >> 3) >= a2) {
    if (a2 != 0) {
      v14 = 56 * ((56 * a2 - 56) / 0x38) + 56;
      memset(*(_QWORD*)(a1 + 8), 0, v14);
      v3 = (_QWORD*)((char*)v3 + v14);
    }
    *(_QWORD*)(a1 + 8) = v3;
  }
  else {
    v5 = *(_QWORD**)a1;
    v6 = (__int64)v3 - *(_QWORD*)a1;
    v7 = a2 + 0x6DB6DB6DB6DB6DB7LL * (v6 >> 3);
    if (v7 > 0x492492492492492LL) {
      GameRoutine_b44a40();
    }
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = 0x6DB6DB6DB6DB6DB7LL * ((v2 - (__int64)v5) >> 3);
    v10 = 2 * v9;
    if (2 * v9 <= v7) {
      v10 = a2 + 0x6DB6DB6DB6DB6DB7LL * (v6 >> 3);
    }
    if (v9 >= 0x249249249249249LL) {
      v11 = 0x492492492492492LL;
    }
    else {
      v11 = v10;
    }
    if (v11 != 0) {
      if (v11 > 0x492492492492492LL) {
        GameRoutine_60a210();
      }
      v12 = a2;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56 * v11, 16, 0);
      a2 = v12;
    }
    else {
      v13 = 0;
    }
    v15 = v13 + v6;
    v16 = v13 + 56 * v11;
    v17 = 56 * ((56 * a2 - 56) / 0x38) + 56;
    memset(v15, 0, v17);
    v18 = v15 + v17;
    if (v5 != v3) {
      v19 = v5;
      v20 = v13;
      do {
        v21 = *v19;
        *v19 = 0;
        *(_QWORD*)v20 = v21;
        v22 = v19[1];
        v19[1] = 0;
        *(_QWORD*)(v20 + 8) = v22;
        *(_DWORD*)(v20 + 16) = *((_DWORD*)v19 + 4);
        v23 = v19[3];
        v24 = v19[4];
        v25 = v19[5];
        v26 = v19[6];
        v19 += 7;
        *(_QWORD*)(v20 + 40) = v25;
        *(_QWORD*)(v20 + 48) = v26;
        *(_QWORD*)(v20 + 24) = v23;
        *(_QWORD*)(v20 + 32) = v24;
        v20 += 56;
      } while (v19 != v3);
      do {
        v27 = v5[1];
        v5[1] = 0;
        if (v27 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
        }
        v28 = *v5;
        *v5 = 0;
        if (v28 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
        }
        v5 += 7;
      } while (v5 != v3);
      v5 = *(_QWORD**)a1;
    }
    *(_QWORD*)a1 = v13;
    *(_QWORD*)(a1 + 8) = v18;
    *(_QWORD*)(a1 + 16) = v16;
    if (v5 != nullptr) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v29, (__int64)v5);
    }
  }
}

__int64 gfxa_18dd220(__int64* a1)
{
  int v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  __int64* v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  _QWORD* v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  unsigned __int64 v36;
  __int64* v37;
  const char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  const char* v43;
  _QWORD* v44;
  const char* v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64* v62;
  unsigned int v63;
  __int64 result;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  struct {
    __int64 v71;
    unsigned __int64 v72;
    const char* v73;
  } v71_;
  struct {
    _QWORD v74[2];
    __int64 v75;
  } v74_;
  struct {
    __int64 v76;
    __int64 v77;
    const char* v78;
  } v76_;
  struct {
    __int64 v79;
    __int64 v80;
    char* v81;
    int v82;
    char gap124_[4];
    __int64 v83;
    __int64 v84;
    __int128 v85;
    __int64 v86;
    __int64 v87;
  } v79_;

  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = 0;
  v3 = eft_g_effectSystem_ptr[0];
  v4 = (__int64*)GameData_212c540;
  while (1) {
    std___1_to_string_1a0a790((void*)(v74_.v74)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = (__int64*)GameRoutine_1a0a680((__int64)v74_.v74, 0, "Field_LensFlare_",
                                       0x10u),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v6 = v5[1];
    v7 = *v5;
    v79_.v81 = (char*)v5[2];
    v79_.v79 = v7;
    v79_.v80 = v6;
    v5[1] = 0;
    v5[2] = 0;
    *v5 = 0;
    std___1_to_string_1a0a790((void*)(&v71_.v71)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v71_.v71 & 1) != 0) {
      v8 = v71_.v73;
    }
    else {
      v8 = (char*)&v71_.v71 + 1;
    }
    if ((v71_.v71 & 1) != 0) {
      v9 = v71_.v72;
    }
    else {
      v9 = (unsigned __int64)(unsigned __int8)v71_.v71 >> 1;
    }
    v10 = (__int64*)GameRoutine_1a09ce0((__int64)&v79_.v79, v8, v9),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v12 = v10[1];
    v11 = (const char*)v10[2];
    v76_.v76 = *v10;
    v76_.v77 = v12;
    v76_.v78 = v11;
    v10[1] = 0;
    v10[2] = 0;
    *v10 = 0;
    if ((v71_.v71 & 1) != 0 && v71_.v73 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v71_.v73),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((v79_.v79 & 1) != 0 && v79_.v81 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v79_.v81),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((v74_.v74[0] & 1) != 0 && v74_.v75 != 0) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v15 = 128;
      }
      else {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v74_.v75),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v16 = (v76_.v76 & 1) != 0 ? v76_.v78 : (char*)&v76_.v76 + 1;
    if ((nn_vfx_bc5ea0((_QWORD*)*v3, v16) & 0x100000000LL) == 0) {
      break;
    }
    v17 = (_QWORD*)*v3;
    v79_.v79 = 0;
    v79_.v80 = 0;
    v79_.v83 = 0;
    v79_.v84 = 0;
    v79_.v82 = 0;
    if ((v76_.v76 & 1) != 0) {
      v18 = v76_.v78;
    }
    else {
      v18 = (char*)&v76_.v76 + 1;
    }
    v79_.v85 = GameData_1a837f0;
    v19 = *v4;
    v20 = v4[1];
    v79_.v81 = (char*)v18;
    v79_.v86 = v19;
    v79_.v87 = v20;
    v21 = ({
      unsigned __int128 r_ = Manager_bc6460_pair(v17, (__int64)&v79_.v79, 1);
      v22 = COERCE_AS(__typeof__(v22), (unsigned long long)(r_ >> 64));
      v49 = COERCE_AS(__typeof__(v49), (unsigned long long)(r_ >> 64));
      v63 = COERCE_AS(__typeof__(v63), (unsigned long long)(r_ >> 64));
      (__int64*)(unsigned long long)r_;
    });
    GameHr_14a10d0(&v79_.v79, (__int64)v21, v22, (__int64)&GameData_1a9f09e),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v23 = v79_.v79;
    v24 = *(_QWORD*)v79_.v79;
    if (*(_QWORD*)v79_.v79 != 0 &&
        *(_DWORD*)(v24 + 16) == *(_DWORD*)(v79_.v79 + 8)) {
      *(_BYTE*)(v24 + 33) = 0;
    }
    v25 = (_QWORD*)a1[3];
    if ((unsigned __int64)v25 >= a1[4]) {
      v27 = GameHr_e5d5a0(a1 + 2, &v79_.v79),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      *v25 = v23;
      v26 = v79_.v80;
      v25[1] = v79_.v80;
      if (v26 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                  memory_order_relaxed);
      }
      v27 = v25 + 2;
    }
    v28 = v79_.v80;
    a1[3] = (__int64)v27;
    if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v28),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((v76_.v76 & 1) == 0) {
        goto LABEL_2;
      }
    }
    else if ((v76_.v76 & 1) == 0) {
      goto LABEL_2;
    }
    if (v76_.v78 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v29 = 128;
      }
      else {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v76_.v78),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  LABEL_2:
    ++v2;
  }
  if ((v76_.v76 & 1) != 0 && v76_.v78 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  (__int64)v76_.v78),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v31 = 0;
  while (2) {
    std___1_to_string_1a0a790((void*)(v74_.v74)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v32 = (__int64*)GameRoutine_1a0a680((__int64)v74_.v74, 0,
                                        "Field_Moon_LensFlare_", 0x15u),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v33 = v32[1];
    v34 = *v32;
    v79_.v81 = (char*)v32[2];
    v79_.v79 = v34;
    v79_.v80 = v33;
    v32[1] = 0;
    v32[2] = 0;
    *v32 = 0;
    std___1_to_string_1a0a790((void*)(&v71_.v71)),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v71_.v71 & 1) != 0) {
      v35 = v71_.v73;
    }
    else {
      v35 = (char*)&v71_.v71 + 1;
    }
    if ((v71_.v71 & 1) != 0) {
      v36 = v71_.v72;
    }
    else {
      v36 = (unsigned __int64)(unsigned __int8)v71_.v71 >> 1;
    }
    v37 = (__int64*)GameRoutine_1a09ce0((__int64)&v79_.v79, v35, v36),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v39 = v37[1];
    v38 = (const char*)v37[2];
    v76_.v76 = *v37;
    v76_.v77 = v39;
    v76_.v78 = v38;
    v37[1] = 0;
    v37[2] = 0;
    *v37 = 0;
    if ((v71_.v71 & 1) != 0 && v71_.v73 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v40 = 128;
      }
      else {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v71_.v73),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((v79_.v79 & 1) != 0 && v79_.v81 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v41 = 128;
      }
      else {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, (__int64)v79_.v81),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((v74_.v74[0] & 1) != 0 && v74_.v75 != 0) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v42 = 128;
      }
      else {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v74_.v75),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((v76_.v76 & 1) != 0) {
      v43 = v76_.v78;
    }
    else {
      v43 = (char*)&v76_.v76 + 1;
    }
    if ((nn_vfx_bc5ea0((_QWORD*)*v3, v43) & 0x100000000LL) != 0) {
      v44 = (_QWORD*)*v3;
      v79_.v79 = 0;
      v79_.v80 = 0;
      v79_.v83 = 0;
      v79_.v84 = 0;
      v79_.v82 = 0;
      if ((v76_.v76 & 1) != 0) {
        v45 = v76_.v78;
      }
      else {
        v45 = (char*)&v76_.v76 + 1;
      }
      v79_.v85 = GameData_1a837f0;
      v46 = *v4;
      v47 = v4[1];
      v79_.v81 = (char*)v45;
      v79_.v86 = v46;
      v79_.v87 = v47;
      v48 = ({
        unsigned __int128 r_ = Manager_bc6460_pair(v44, (__int64)&v79_.v79, 1);
        v22 = COERCE_AS(__typeof__(v22), (unsigned long long)(r_ >> 64));
        v49 = COERCE_AS(__typeof__(v49), (unsigned long long)(r_ >> 64));
        v63 = COERCE_AS(__typeof__(v63), (unsigned long long)(r_ >> 64));
        (__int64*)(unsigned long long)r_;
      });
      GameHr_14a10d0(&v79_.v79, (__int64)v48, v49, (__int64)&GameData_1a9f09e),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v50 = v79_.v79;
      v51 = *(_QWORD*)v79_.v79;
      if (*(_QWORD*)v79_.v79 != 0 &&
          *(_DWORD*)(v51 + 16) == *(_DWORD*)(v79_.v79 + 8)) {
        *(_BYTE*)(v51 + 33) = 0;
      }
      v52 = (_QWORD*)a1[6];
      if ((unsigned __int64)v52 >= a1[7]) {
        v54 = GameHr_e5d5a0(a1 + 5, &v79_.v79),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        *v52 = v50;
        v53 = v79_.v80;
        v52[1] = v79_.v80;
        if (v53 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                                    memory_order_relaxed);
        }
        v54 = v52 + 2;
      }
      v55 = v79_.v80;
      a1[6] = (__int64)v54;
      if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v49 = COERCE_AS(__typeof__(v49),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v55),
            v22 = COERCE_AS(__typeof__(v22),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v49 = COERCE_AS(__typeof__(v49),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if ((v76_.v76 & 1) != 0) {
          goto LABEL_101;
        }
      }
      else if ((v76_.v76 & 1) != 0) {
      LABEL_101:
        if (v76_.v78 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v56 = 128;
          }
          else {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, (__int64)v76_.v78),
              v22 = COERCE_AS(__typeof__(v22),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v49 = COERCE_AS(__typeof__(v49),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      ++v31;
      continue;
    }
    break;
  }
  if ((v76_.v76 & 1) != 0 && v76_.v78 != nullptr) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v57,
                                  (__int64)v76_.v78),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v79_.v79 = 0;
  v79_.v80 = 0;
  if ((GameData_226b678 & 1) != 0) {
    v58 = (char*)GameData_226b688;
  }
  else {
    v58 = (char*)&GameData_226b678 + 1;
  }
  v59 = v4[1];
  v79_.v83 = *v4;
  v79_.v84 = v59;
  v60 = (_QWORD*)*v3;
  v79_.v86 = v79_.v83;
  v79_.v87 = v59;
  v79_.v82 = 0;
  v79_.v81 = v58;
  v61 = *((_QWORD*)GameData_212c548 + 1);
  *(_QWORD*)&v79_.v85 = *(_QWORD*)GameData_212c548;
  *((_QWORD*)&v79_.v85 + 1) = v61;
  v62 = ({
    unsigned __int128 r_ = Manager_bc6460_pair(v60, (__int64)&v79_.v79, 0);
    v22 = COERCE_AS(__typeof__(v22), (unsigned long long)(r_ >> 64));
    v49 = COERCE_AS(__typeof__(v49), (unsigned long long)(r_ >> 64));
    v63 = COERCE_AS(__typeof__(v63), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  result =
      GameHr_14a10d0(&v76_.v76, (__int64)v62, v63, (__int64)&GameData_1a9f09e),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v49 = COERCE_AS(__typeof__(v49),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65 = v76_.v76;
  v66 = v76_.v77;
  if (v76_.v77 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v76_.v77 + 8), 1u,
                              memory_order_relaxed);
  }
  v67 = a1[9];
  a1[8] = v65;
  a1[9] = v66;
  if (v67 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(v67),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v66 = a1[9];
  }
  if (v66 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v66 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v49 = COERCE_AS(__typeof__(v49),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(v66),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v49 = COERCE_AS(__typeof__(v49),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v68 = v76_.v77;
  if (v76_.v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76_.v77 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v49 = COERCE_AS(__typeof__(v49),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak(v68),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v49 = COERCE_AS(__typeof__(v49),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v69 = a1[8];
  v70 = *(_QWORD*)v69;
  if (*(_QWORD*)v69 != 0 && *(_DWORD*)(v70 + 16) == *(_DWORD*)(v69 + 8)) {
    *(_BYTE*)(v70 + 33) = 0;
  }
  return result;
}

void gfxa_18df280(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  int* v2;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  int v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  unsigned int v55;
  _BYTE v56[264];

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = (int*)a2;
  if (*(_BYTE*)(a1 + 2124) == 1) {
    v4 = a2[1];
    (*(void (**)(__int64))GameData_2132160[0])(a1 + 40),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_Free_5f440(*(_QWORD*)(a1 + 2088)),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v5 = *(__int64**)(a1 + 2096);
    v6 = *(__int64**)(a1 + 2104);
    if (v5 != v6) {
      do {
        v7 = *v5;
        v8 = v5[1];
        v5 += 2;
        gxc_NvnDescriptorPool_FreeTextureDescriptor(v4, v7, v8),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      } while (v5 != v6);
      v5 = *(__int64**)(a1 + 2096);
    }
    *(_QWORD*)(a1 + 2104) = v5;
    *(_QWORD*)(a1 + 2088) = 0;
    *(_BYTE*)(a1 + 2124) = 0;
  }
  v9 = *(_QWORD*)v2;
  (*(void (**)(_BYTE*))GameData_2132168[0])(v56),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_BYTE*, __int64))GameData_2132170[0])(v56, v9),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_BYTE*, _QWORD, _QWORD))GameData_2132178[0])(
      v56, (unsigned int)v2[6], (unsigned int)v2[7]),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (float)v2[7] / (float)v2[5];
  v11 = fabsf(v10 + -0x1.0000000000000p+0f);
  if (v11 <= 0x1.0000000000000p-23f) {
    goto LABEL_16;
  }
  v12 = fabsf(v10);
  v13 = 0x1.0000000000000p+0f;
  if (v12 >= 0x1.0000000000000p+0f) {
    v13 = v12;
  }
  if (v11 <= (float)(v13 * 0x1.0000000000000p-23f)) {
  LABEL_16:
    v15 = 2;
    goto LABEL_17;
  }
  if (v10 <= 0x1.0000000000000p+1f) {
    v15 = 0;
    goto LABEL_17;
  }
  v14 = fabsf(v10 + -0x1.8000000000000p+1f);
  if (v14 <= 0x1.0000000000000p-23f) {
    goto LABEL_15;
  }
  if (v12 < 0x1.8000000000000p+1f) {
    v12 = 0x1.8000000000000p+1f;
  }
  if (v14 <= (float)(v12 * 0x1.0000000000000p-23f)) {
  LABEL_15:
    v15 = 1;
  LABEL_17:
    (*(void (**)(_BYTE*, __int64))GameData_2132180[0])(v56, v15),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v16 = (unsigned int)v2[8];
  if ((unsigned int)v16 > 4) {
    v17 = 0;
  }
  else {
    v17 = GameData_1c1b0b0[v16];
  }
  (*(void (**)(_BYTE*, __int64))GameData_2132188[0])(v56, v17),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_BYTE*, __int64, __int64, __int64, __int64, __int64, __int64,
               _QWORD))GameData_2132190[0])(v56, a1 + 16, a1 + 20, a1, a1 + 4,
                                            a1 + 8, a1 + 12, 0),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = v2[8];
  v55 = 0;
  *(_DWORD*)(a1 + 2128) = v18;
  v19 = v2[7];
  *(_DWORD*)(a1 + 24) = v2[6];
  *(_DWORD*)(a1 + 28) = v19;
  v20 = v2[5];
  *(_DWORD*)(a1 + 32) = v2[4];
  *(_DWORD*)(a1 + 36) = v20;
  GameData_2177528(v9, 133, &v55);
  v21 = *((_QWORD*)v2 + 1);
  v22 = v55;
  *(_QWORD*)(a1 + 2104) = *(_QWORD*)(a1 + 2096);
  if ((_DWORD)v22 != 0) {
    v54 = (__int64*)v2;
    if ((v22 & 0x80000000) != 0) {
      GameRoutine_6e5a20(),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v23 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         4 * v22, 16, 0),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    memset(v23, 0, 4 * v22),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v24 = 0;
    v53 = v23 + 4 * v22;
    do {
      v27 = ({
        unsigned __int128 r_ =
            gxc_NvnDescriptorPool_AllocateTextureDescriptor_pair(v21);
        v28 = COERCE_AS(__typeof__(v28), (unsigned long long)(r_ >> 64));
        (__int64)(unsigned long long)r_;
      });
      v29 = *(_QWORD*)(a1 + 2104);
      v30 = *(_QWORD*)(a1 + 2112);
      v31 = v28;
      if (v29 < v30) {
        *(_QWORD*)v29 = v27;
        *(_DWORD*)(v29 + 8) = v28;
        v25 = v29 + 16;
      }
      else {
        v32 = *(_QWORD*)(a1 + 2096);
        v33 = v29 - v32;
        v34 = (__int64)(v29 - v32) >> 4;
        v35 = v34 + 1;
        if ((unsigned __int64)(v34 + 1) >> 60 != 0) {
          GameRoutine_adf500(),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v36 = v30 - v32;
        if (v36 >> 3 > v35) {
          v35 = v36 >> 3;
        }
        if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF0LL) {
          v37 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v37 = v35;
        }
        if (v37 != 0) {
          if (v37 >> 60 != 0) {
            GameRoutine_60a210(),
                v28 =
                    COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v38 = v27;
          v39 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v37, 16, 0),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v27 = v38;
        }
        else {
          v39 = 0;
        }
        v40 = v39 + v33;
        v41 = v39 + 16 * v37;
        v42 = v39 + v33 - 16 * v34;
        *(_QWORD*)v40 = v27;
        *(_DWORD*)(v40 + 8) = v31;
        v25 = v39 + v33 + 16;
        memcpy(v42, v32, v33),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 2096) = v42;
        *(_QWORD*)(a1 + 2104) = v25;
        *(_QWORD*)(a1 + 2112) = v41;
        if (v32 != 0) {
          v43 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v32),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v26 = (int)v55;
      *(_DWORD*)(v23 + 4 * v24++) = v31;
      *(_QWORD*)(a1 + 2104) = v25;
    } while (v24 < v26);
    v44 = v53;
    v2 = (int*)v54;
  }
  else {
    v23 = 0;
    v44 = 0;
  }
  GameData_2178930(v56, v21 + 8, v23, (unsigned __int64)(v44 - v23) >> 2);
  if (*((_BYTE*)v2 + 36) != 0) {
    v45 = 536870986;
  }
  else {
    v45 = 536870922;
  }
  GameData_21788c8(v56, v45);
  (*(void (**)(_BYTE*, __int64))GameData_21321a8[0])(v56, 2),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = (*(__int64 (**)(_BYTE*))GameData_21321b0[0])(v56),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v47 = gxc_Allocate_5f420(v46, 4096),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 2088) = v47;
  (*(void (**)(_BYTE*, __int64, __int64))GameData_21321b8[0])(v56, v47, v46),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(unsigned __int8 (**)(__int64, _BYTE*))GameData_21321c0[0])(a1 + 40,
                                                                    v56) != 0) {
    *(_BYTE*)(a1 + 2124) = 1;
    if (v23 == 0) {
      return;
    }
    goto LABEL_48;
  }
  gxc_Free_5f440(*(_QWORD*)(a1 + 2088)),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49 = *(__int64**)(a1 + 2096);
  v50 = *(__int64**)(a1 + 2104);
  *(_QWORD*)(a1 + 2088) = 0;
  if (v49 != v50) {
    do {
      v51 = *v49;
      v52 = v49[1];
      v49 += 2;
      gxc_NvnDescriptorPool_FreeTextureDescriptor(v21, v51, v52),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v49 != v50);
    v49 = *(__int64**)(a1 + 2096);
  }
  *(_QWORD*)(a1 + 2104) = v49;
  if (v23 != 0) {
  LABEL_48:
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  v23),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

#pragma GCC visibility pop
