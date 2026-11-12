#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_ad0e40(float*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_ad5600(PSEUDO_X8, _QWORD);
__int64 GameRoutine_5fb840(void);
__int64 GameRoutine_5fb900(_QWORD);
__int64 GameRoutine_5fba80(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_ad1740(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad4be0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5280(_QWORD);
__int64 GameRoutine_ad5500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*gfx_shader_ShaderDeleter_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
__int64 Archive_ad3220(__int64 result);
unsigned __int64 Archive_ad3360_alt1(__int64 a1,
                                     char a2) __asm__("Archive_ad3360");
__int64 gfx_shader_Archive_CreateShader_lambda1_Invoke(__int64 result);
__int64 GameRoutine_ad4040(_QWORD, _QWORD);
__int64 memcmp_alt1(_QWORD, _QWORD) __asm__("memcmp");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_1fc2440[])();
extern __int64 (*GameData_1fc2490[])();
extern __int64 (*GameData_1fc2520[])();
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_ad4010(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                unsigned __int64 a3, __int64 a4,
                                unsigned __int64 a5);
__attribute__((swiftcall)) void gfx_ad5600(PSEUDO_X8, unsigned __int64 result);
__int64 GameHr_ad5280(_QWORD*);
__int64 GameRoutine_5fb840_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_5fb840");
__int64 GameRoutine_5fb900_alt1(__int64) __asm__("GameRoutine_5fb900");
__int64 GameRoutine_5fba80_alt1(__int64,
                                unsigned int*) __asm__("GameRoutine_5fba80");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 GameRoutine_ad1740_alt1(float*, __int64,
                                unsigned __int64) __asm__("GameRoutine_ad1740");
__int64 GameRoutine_ad5500_alt1(_QWORD*, __int64, unsigned __int64,
                                unsigned int) __asm__("GameRoutine_ad5500");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int memcmp_alt2(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_ad0e40_alt1(float*, __int64,
                             unsigned __int64) __asm__("GameRoutine_ad0e40");
void GameRoutine_ad4be0_alt1(__int64, __int64, int,
                             int) __asm__("GameRoutine_ad4be0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_64aa00_alt1() __asm__("GameRoutine_64aa00");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Archive_ad3360(__int64 a1, char a2);
__attribute__((swiftcall)) void

gfx_shader_Archive_CreateShader(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                unsigned __int64 a3, __int64 a4,
                                unsigned __int64 a5)
{
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v9;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 result;
  long double v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int16* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  atomic_ullong* v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  char* v58;
  atomic_ullong* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  _QWORD v66[2];
  char* v67;
  __int64 v68;
  __int64 v69;
  _QWORD v70[2];
  _QWORD v71[4];
  _QWORD* v72;
  _QWORD v73[4];
  _QWORD* v74;

  v70[0] = a2;
  v70[1] = a3;
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0(a1);
  }
  v9 = (__int64*)a1;
  if (a3 >= 0x17) {
    v12 = a2;
    if ((a3 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (a3 | 7) + 1;
    }
    v14 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16, 0);
    a2 = v12;
    v11 = (char*)v14;
    v69 = v14;
    v68 = v13 | 1;
    goto LABEL_9;
  }
  LOBYTE(v68) = 2 * a3;
  v11 = (char*)&v68 + 1;
  if (a3 != 0) {
  LABEL_9:
    a1 = memmove(v11, a2, a3);
  }
  v11[a3] = 0;
  if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  if (a5 >= 0x17) {
    if ((a5 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (a5 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v66[1] = a5;
    v67 = v15;
    v66[0] = v16 | 1;
    goto LABEL_18;
  }
  LOBYTE(v66[0]) = 2 * a5;
  v15 = (char*)v66 + 1;
  if (a5 != 0) {
  LABEL_18:
    memmove(v15, a4, a5);
  }
  v15[a5] = 0;
  result = GameRoutine_ad4040(v9 + 7, v70);
  if (result == 0) {
    *a6 = 0;
    a6[1] = 0;
    if ((v66[0] & 1) == 0) {
      goto LABEL_43;
    }
    goto LABEL_39;
  }
  v19 = *(__int64**)(result + 40);
  v20 = result;
  v21 = v19[3];
  if ((v66[0] & 1) != 0) {
    v22 = v67;
  }
  else {
    v22 = (char*)v66 + 1;
  }
  if (v21 != 0) {
    if (v22 != nullptr) {
      result = strlen(v22);
      v23 = result;
    }
    else {
      v23 = 0;
    }
    v24 = v21 + 8;
    v25 = *(unsigned __int16*)(v21 + 12);
    v26 = v21 + 8 + 16 * v25;
    v27 = *(_DWORD*)v26;
    if (*(_DWORD*)(v21 + 8) < *(_DWORD*)v26) {
      do {
        v30 = (__int64)v27 >> 3;
        if (v23 > v30) {
          v28 = ((unsigned __int8)v22[v23 + ~v30] >> (v27 & 7)) & 1;
        }
        else {
          v28 = 0;
        }
        v25 = *(unsigned __int16*)(v21 + 12 + 16 * v25 + 2 * v28);
        v29 = v27 < *(_DWORD*)(v24 + 16 * v25);
        v27 = *(_DWORD*)(v24 + 16 * v25);
      } while (v29);
      v26 = v24 + 16 * v25;
    }
    v31 = *(unsigned __int16**)(v26 + 8);
    if (v23 == *v31) {
      result = memcmp_alt1(v31 + 1, v22);
      if ((_DWORD)result == 0) {
        v34 = v26 - v21 - 24;
        v35 = (unsigned __int64)v34 >> 4;
        if ((unsigned int)((unsigned __int64)v34 >> 4) != -1) {
          v36 = *v19;
          v37 = *v9;
          v38 = strlen(*v19 + 2);
          v65 = std___1___hash_memory(v36 + 2, v38);
          v39 = *(_QWORD*)(v19[2] + ((__int64)(int)(v34 >> 4) << 8));
          v40 = strlen(v39 + 2);
          v41 = std___1___hash_memory(v39 + 2, v40);
          LODWORD(v36) = *(_DWORD*)(v20 + 48);
          v42 = v41;
          v43 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
          v43[1] = 0;
          v43[2] = 0;
          v43[7] = v9;
          v43[13] = v9;
          v74 = v73;
          *v43 = GameData_1fc2440;
          v43[4] = v37;
          v44 = v43 + 4;
          v71[0] = GameData_1fc2520;
          v71[1] = v9;
          v72 = v71;
          v43[18] = 0;
          v43[19] = 0;
          v43[6] = GameData_1fc2490;
          v73[0] = GameData_1fc2490;
          v73[1] = v9;
          v43[20] = 0;
          v43[21] = 0;
          v43[22] = 0;
          v43[23] = 0;
          v43[24] = 0;
          v43[25] = 0;
          v43[26] = 0;
          v43[27] = 0;
          v43[28] = 0;
          v43[29] = 0;
          v43[30] = 0;
          v43[31] = 0;
          v43[32] = 0;
          v43[33] = 0;
          v43[36] = v42;
          v43[10] = v43 + 6;
          v43[12] = GameData_1fc2520;
          v43[16] = v43 + 12;
          v43[34] = 0;
          v43[35] = v65;
          GameRoutine_ad4be0(v43 + 4, v19, (unsigned int)v36,
                             (unsigned int)v35);
          if (v72 == v71) {
            v46 = 32;
            v45 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          else {
            v45 = &fw_memory_g_heap_manager;
            if (v72 == nullptr) {
              goto LABEL_55;
            }
            v46 = 40;
          }
          (*(void (**)(__int64))(*v72 + v46))((__int64)v72);
        LABEL_55:
          result = (__int64)v74;
          if (v74 == v73) {
            v47 = 32;
          }
          else {
            if (v74 == nullptr) {
              goto LABEL_60;
            }
            v47 = 40;
          }
          result = (*(__int64 (**)(__int64))(*v74 + v47))((__int64)v74);
        LABEL_60:
          v48 = (_QWORD*)v9[23];
          v49 = v9[24];
          *a6 = v44;
          a6[1] = v43;
          if ((unsigned __int64)v48 >= v49) {
            v52 = v9[22];
            v53 = (char*)v48 - v52;
            v54 = (((__int64)v48 - v52) >> 4) + 1;
            if (v54 >> 60 != 0) {
              GameRoutine_ad4010();
            }
            v55 = v49 - v52;
            if (v55 >> 3 > v54) {
              v54 = v55 >> 3;
            }
            if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF0LL) {
              v56 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v56 = v54;
            }
            if (v56 >> 60 != 0) {
              GameRoutine_60a210(result);
            }
            v57 = fw_memory_HeapManager_Allocate(*v45, 16 * v56, 16, 0);
            v58 = &v53[v57];
            v59 = (atomic_ullong*)(v43 + 2);
            v60 = v57 + 16 * v56;
            *(_QWORD*)v58 = v44;
            *((_QWORD*)v58 + 1) = v43;
            v51 = (__int64)&v53[v57 + 16];
            atomic_fetch_add_explicit(v59, 1u, memory_order_relaxed);
            v61 = v9[22];
            v62 = v9[23] - v61;
            v63 = &v58[-v62];
            result = memcpy(&v58[-v62], v61, v62);
            v9[22] = (__int64)v63;
            v9[23] = v51;
            v9[24] = v60;
            if (v61 != 0) {
              v64 = 128;
              if (*(_QWORD*)(*v45 + 200) == 0) {
                v64 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(*v45 + v64, v18);
            }
          }
          else {
            *v48 = v44;
            v48[1] = v43;
            v50 = (atomic_ullong*)(v43 + 2);
            v51 = (__int64)(v48 + 2);
            atomic_fetch_add_explicit(v50, 1u, memory_order_relaxed);
          }
          v9[23] = v51;
          if ((v66[0] & 1) != 0) {
          LABEL_39:
            if (v67 != nullptr) {
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v32 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v18);
            }
          }
        LABEL_43:
          if ((v68 & 1) != 0 && v69 != 0) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            {
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v18);
              return;
            }
          }
          {
            result;
            return;
          }
        }
      }
    }
  }
  *a6 = 0;
  a6[1] = 0;
  if ((v66[0] & 1) == 0) {
    goto LABEL_43;
  }
  goto LABEL_39;
}

__int64 Archive_ad3220(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;

  v1 = *(__int64**)(result + 176);
  v2 = *(__int64**)(result + 184);
  if (v2 != v1) {
    v3 = v1 + 2;
    v4 = result;
    while (1) {
      v5 = *(v3 - 1);
      if (v5 == 0 || *(_QWORD*)(v5 + 8) == -1) {
        break;
      }
      v6 = v3 == v2;
      v3 += 2;
      if (v6) {
        return result;
      }
    }
    v7 = v3 - 2;
    if (v3 - 2 != v2 && v3 != v2) {
      do {
        v8 = v3[1];
        if (v8 != 0 && *(_QWORD*)(v8 + 8) != -1) {
          v9 = *v3;
          *v3 = 0;
          v3[1] = 0;
          result = v7[1];
          *v7 = v9;
          v7[1] = v8;
          if (result != 0) {
            result = std___1___shared_weak_count___release_weak(result);
          }
          v7 += 2;
        }
        v3 += 2;
      } while (v3 != v2);
      v2 = *(__int64**)(v4 + 184);
    }
    if (v7 != v2) {
      do {
        result = *(v2 - 1);
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
        v2 -= 2;
      } while (v2 != v7);
      *(_QWORD*)(v4 + 184) = v7;
    }
  }
  return result;
}

void Archive_ad3360(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* i;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int8* v71;
  unsigned __int64 v72;
  bool v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int8* v77;
  unsigned __int64 v78;
  bool v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64* v83;
  unsigned __int64* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64* v92;
  unsigned __int64 v93;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64* v99;
  bool v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  __int64** v109;
  __int64* v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  int v115;
  unsigned __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  int v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  __int64* v124;
  char v125;
  const char* v126;
  const char* v127;
  __int64 v128;
  const char* v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  int v134;
  __int64 v135;
  bool v136;
  unsigned __int64 v137;
  unsigned __int16* v138;
  unsigned __int64 v139;
  unsigned __int8* v140;
  unsigned __int8* j;
  unsigned __int64 v142;
  bool v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  unsigned int v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  char v154;
  __int64 v155;
  __int64 v156;
  __int64* v157;
  char v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  unsigned __int64* v167;
  __int64 v168;
  __int64* v169;
  struct {
    unsigned __int8* v170;
    __int64 v171;
  } v170_;

  Archive_ad3220(a1);
  if ((a2 & 1) != 0) {
    v4 = *(_QWORD**)(a1 + 72);
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v4 != nullptr) {
      v6 = nullptr;
      v169 = nullptr;
      v7 = 0;
      do {
        v8 = (__int64)v6;
        v9 = *(_QWORD*)a1;
        v10 = *(_QWORD*)a1 + 568LL;
        v11 = *(_QWORD*)(v4[5] + 32LL);
        v12 = *(_QWORD*)a1 + 16592LL;
        v13 = fw_memory_HeapManager_Allocate_alt1(*v5, 32, 16, 0);
        v14 = v4[5];
        v15 = v13;
        *(_DWORD*)(v13 + 8) = 2;
        *(_QWORD*)v13 = gfx_shader_ShaderDeleter_vtable;
        *(_QWORD*)(v13 + 16) = v10;
        *(_QWORD*)(v13 + 24) = v14;
        v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 24, 16, 0);
        v16[1] = v12;
        v16[2] = v15;
        v17 = *(_QWORD*)(v9 + 16592);
        *v16 = v17;
        *(_QWORD*)(v17 + 8) = v16;
        *(_QWORD*)(v9 + 16592) = v16;
        ++*(_QWORD*)(v9 + 16608);
        GameRoutine_634d80_alt1(*(_QWORD*)(v11 + 8), v11);
        if ((unsigned __int64)v169 >= v7) {
          v20 = (unsigned __int64)v169 - v8;
          v21 = 1 - 0x5555555555555555LL * (((__int64)v169 - v8) >> 3);
          if (v21 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_64aa00_alt1();
          }
          v22 = v8;
          if (0x5555555555555556LL * ((__int64)(v7 - v8) >> 3) > v21) {
            v21 = 0x5555555555555556LL * ((__int64)(v7 - v8) >> 3);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v7 - v8) >> 3) >=
              0x555555555555555LL) {
            v23 = 0xAAAAAAAAAAAAAAALL;
          }
          else {
            v23 = v21;
          }
          if (v23 != 0) {
            if (v23 > 0xAAAAAAAAAAAAAAALL) {
              GameRoutine_60a210_alt1();
            }
            v24 = fw_memory_HeapManager_Allocate_alt1(*v5, 24 * v23, 16, 0);
          }
          else {
            v24 = 0;
          }
          v25 = (_QWORD*)(v24 + v20);
          if ((v4[2] & 1) != 0) {
            fw_text_String_CopyTerminated_alt1((__int64*)(v24 + v20), v4[4],
                                               v4[3]);
          }
          else {
            v26 = v4[2];
            v27 = v4[4];
            v25[1] = v4[3];
            v25[2] = v27;
            *v25 = v26;
          }
          v7 = v24 + 24 * v23;
          v169 = v25 + 3;
          memcpy_alt1(v24, v22, v20);
          if (v22 != 0) {
            v28 = 128;
            if (*(_QWORD*)(*v5 + 200) == 0) {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v5 + v28, v22);
          }
          v6 = (__int64*)v24;
        }
        else {
          v6 = (__int64*)v8;
          if ((v4[2] & 1) != 0) {
            fw_text_String_CopyTerminated_alt1(v169, v4[4], v4[3]);
          }
          else {
            v18 = v4[2];
            v19 = v4[4];
            v169[1] = v4[3];
            v169[2] = v19;
            *v169 = v18;
          }
          v169 += 3;
        }
        v4 = (_QWORD*)*v4;
      } while (v4 != nullptr);
    }
    else {
      v169 = nullptr;
      v6 = nullptr;
    }
    if (*(_QWORD*)(a1 + 80) != 0) {
      v29 = *(_QWORD**)(a1 + 72);
      while (v29 != nullptr) {
        v31 = (__int64)v29;
        v29 = (_QWORD*)*v29;
        if ((*(_BYTE*)(v31 + 16) & 1) != 0 && *(_QWORD*)(v31 + 32) != 0) {
          v32 = v31;
          v33 = *(_QWORD*)(v31 + 32);
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v34 = 128;
          }
          else {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v5 + v34, v33);
          v31 = v32;
        }
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v30 = 128;
        }
        else {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v5 + v30, v31);
      }
      v35 = *(_QWORD*)(a1 + 64);
      *(_QWORD*)(a1 + 72) = 0;
      if (v35 != 0) {
        v36 = v35 & 7;
        if (v35 >= 8) {
          v38 = v35 & 0xFFFFFFFFFFFFFFF8LL;
          v37 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v37) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v37 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v37 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v37 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v37 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v37 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v37 + 48) = 0;
            v39 = *(_QWORD*)(a1 + 56) + 8 * v37;
            v37 += 8;
            *(_QWORD*)(v39 + 56) = 0;
          } while (v38 != v37);
        }
        else {
          v37 = 0;
        }
        if (v36 != 0) {
          v40 = 8 * v37;
          do {
            --v36;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + v40) = 0;
            v40 += 8;
          } while (v36 != 0);
        }
      }
      *(_QWORD*)(a1 + 80) = 0;
    }
    v41 = v169;
    if (*(_QWORD*)(a1 + 160) != 0) {
      v42 = *(_QWORD**)(a1 + 152);
      while (v42 != nullptr) {
        v44 = (__int64)v42;
        v42 = (_QWORD*)*v42;
        v45 = *(_QWORD**)(v44 + 56);
        if (v45 != nullptr) {
          do {
            v46 = (_QWORD*)*v45;
            if (*(_QWORD*)(*v5 + 200) != 0) {
              v47 = 128;
            }
            else {
              v47 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v5 + v47, (__int64)v45);
            v45 = v46;
          } while (v46 != nullptr);
        }
        v48 = *(_QWORD*)(v44 + 40);
        *(_QWORD*)(v44 + 40) = 0;
        if (v48 != 0) {
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v49 = 128;
          }
          else {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v5 + v49, v48);
        }
        if ((*(_BYTE*)(v44 + 16) & 1) != 0) {
          v50 = *(_QWORD*)(v44 + 32);
          if (v50 != 0) {
            if (*(_QWORD*)(*v5 + 200) != 0) {
              v51 = 128;
            }
            else {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v5 + v51, v50);
          }
        }
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v43 = 128;
        }
        else {
          v43 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v5 + v43, v44);
      }
      v52 = *(_QWORD*)(a1 + 144);
      v41 = v169;
      *(_QWORD*)(a1 + 152) = 0;
      if (v52 != 0) {
        v53 = v52 & 7;
        if (v52 >= 8) {
          v55 = v52 & 0xFFFFFFFFFFFFFFF8LL;
          v54 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v54) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v54 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v54 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v54 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v54 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v54 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v54 + 48) = 0;
            v56 = *(_QWORD*)(a1 + 136) + 8 * v54;
            v54 += 8;
            *(_QWORD*)(v56 + 56) = 0;
          } while (v55 != v54);
        }
        else {
          v54 = 0;
        }
        if (v53 != 0) {
          v57 = 8 * v54;
          do {
            --v53;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + v57) = 0;
            v57 += 8;
          } while (v53 != 0);
        }
      }
      *(_QWORD*)(a1 + 160) = 0;
    }
    for (i = *(_QWORD**)(a1 + 32); i != nullptr; i = (_QWORD*)*i) {
      GameRoutine_634d80_alt1(*(_QWORD*)(i[5] + 8LL), i[5]);
    }
    if (*(_QWORD*)(a1 + 40) != 0) {
      v59 = *(_QWORD**)(a1 + 32);
      while (v59 != nullptr) {
        v61 = (__int64)v59;
        v59 = (_QWORD*)*v59;
        if ((*(_BYTE*)(v61 + 16) & 1) != 0 && *(_QWORD*)(v61 + 32) != 0) {
          v62 = v61;
          v63 = *(_QWORD*)(v61 + 32);
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v64 = 128;
          }
          else {
            v64 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v5 + v64, v63);
          v61 = v62;
        }
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v60 = 128;
        }
        else {
          v60 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v5 + v60, v61);
      }
      v65 = *(_QWORD*)(a1 + 24);
      v41 = v169;
      *(_QWORD*)(a1 + 32) = 0;
      if (v65 != 0) {
        v66 = v65 & 7;
        if (v65 >= 8) {
          v68 = v65 & 0xFFFFFFFFFFFFFFF8LL;
          v67 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v67) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v67 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v67 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v67 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v67 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v67 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v67 + 48) = 0;
            v69 = *(_QWORD*)(a1 + 16) + 8 * v67;
            v67 += 8;
            *(_QWORD*)(v69 + 56) = 0;
          } while (v68 != v67);
        }
        else {
          v67 = 0;
        }
        if (v66 != 0) {
          v70 = 8 * v67;
          do {
            --v66;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + v70) = 0;
            v70 += 8;
          } while (v66 != 0);
        }
      }
      *(_QWORD*)(a1 + 40) = 0;
    }
    if (v6 != v41) {
      v71 = (unsigned __int8*)v6;
      do {
        v72 = *v71;
        v73 = (v72 & 1) == 0;
        v74 = v72 >> 1;
        if (v73) {
          v75 = (__int64)(v71 + 1);
        }
        else {
          v75 = *((_QWORD*)v71 + 2);
        }
        if (v73) {
          v76 = v74;
        }
        else {
          v76 = *((_QWORD*)v71 + 1);
        }
        GameRoutine_ad0e40_alt1((float*)a1, v75, v76);
        v71 += 24;
      } while (v71 != (unsigned __int8*)v41);
      v77 = (unsigned __int8*)v6;
      do {
        v78 = *v77;
        v79 = (v78 & 1) == 0;
        v80 = v78 >> 1;
        if (v79) {
          v81 = (__int64)(v77 + 1);
        }
        else {
          v81 = *((_QWORD*)v77 + 2);
        }
        if (v79) {
          v82 = v80;
        }
        else {
          v82 = *((_QWORD*)v77 + 1);
        }
        GameRoutine_ad1740_alt1((float*)a1, v81, v82);
        v77 += 24;
      } while (v77 != (unsigned __int8*)v41);
    }
    v162 = (__int64)v6;
    v84 = *(unsigned __int64**)(a1 + 176);
    v83 = *(unsigned __int64**)(a1 + 184);
    if (v84 != v83) {
      v167 = *(unsigned __int64**)(a1 + 184);
      do {
        v87 = v84[1];
        if (v87 != 0) {
          v88 = std___1___shared_weak_count_lock_alt1(v87);
          if (v88 != 0) {
            v168 = v88;
            if (*v84 != 0) {
              v89 = *(_QWORD*)(a1 + 104);
              v90 = *(_QWORD*)(*v84 + 248);
              v163 = v89 - 1;
              v164 = v89;
              if ((v89 & (v89 - 1)) != 0) {
                v91 = *(_QWORD*)(*v84 + 248);
                if (v90 >= v89) {
                  v91 = v90 % v89;
                }
                v92 = *(__int64**)(*(_QWORD*)(a1 + 96) + 8 * v91);
                v165 = *(_QWORD*)(a1 + 96);
                do {
                  do {
                    v92 = (__int64*)*v92;
                  } while (v92[1] != v90);
                } while (v92[2] != v90);
              }
              else {
                v92 = *(__int64**)(*(_QWORD*)(a1 + 96) + 8 * ((v89 - 1) & v90));
                v165 = *(_QWORD*)(a1 + 96);
                do {
                  do {
                    v92 = (__int64*)*v92;
                  } while (v92[1] != v90);
                } while (v92[2] != v90);
              }
              v93 = *(_QWORD*)(a1 + 64);
              if (v93 != 0 && *(_QWORD*)(a1 + 80) != 0) {
                v95 = *((unsigned __int8*)v92 + 24);
                v166 = *v84;
                v96 = (__int64)v92 + 25;
                v99 = v92 + 4;
                v97 = v92[4];
                v98 = v99[1];
                v100 = (v95 & 1) == 0;
                v101 = v95 >> 1;
                v102 = v100 ? v96 : v98;
                v103 = v100 ? v101 : v97;
                v104 = v102;
                v105 = std___1___hash_memory_alt1(v102, v103);
                v106 = v93 - 1;
                v107 = v105;
                if ((v93 & (v93 - 1)) != 0) {
                  v108 = v105;
                  if (v105 >= v93) {
                    v108 = v105 % v93;
                  }
                }
                else {
                  v108 = v105 & v106;
                }
                v109 = *(__int64***)(*(_QWORD*)(a1 + 56) + 8 * v108);
                if (v109 != nullptr) {
                  v110 = *v109;
                  if (*v109 != nullptr) {
                    if ((v93 & v106) == 0) {
                      while (1) {
                        v117 = v110[1];
                        if (v117 == v107) {
                          v118 = *((unsigned __int8*)v110 + 16);
                          v119 = v110[3];
                          if ((v118 & 1) == 0) {
                            v119 = v118 >> 1;
                          }
                          if (v119 == v103) {
                            v120 =
                                (v118 & 1) != 0 ? v110[4] : (__int64)v110 + 17;
                            v121 = memcmp_alt2(v120, v104, v103);
                            v116 = v166;
                            if (v121 == 0) {
                              goto LABEL_187;
                            }
                          }
                        }
                        else if ((v117 & v106) != v108) {
                          goto LABEL_130;
                        }
                        v110 = (__int64*)*v110;
                        if (v110 == nullptr) {
                          goto LABEL_130;
                        }
                      }
                    }
                    do {
                      v111 = v110[1];
                      if (v111 == v107) {
                        v112 = *((unsigned __int8*)v110 + 16);
                        v113 = v110[3];
                        if ((v112 & 1) == 0) {
                          v113 = v112 >> 1;
                        }
                        if (v113 == v103) {
                          v114 = (v112 & 1) != 0 ? v110[4] : (__int64)v110 + 17;
                          v115 = memcmp_alt2(v114, v104, v103);
                          v116 = v166;
                          if (v115 == 0) {
                          LABEL_187:
                            v122 = *(_QWORD*)(v116 + 256);
                            if ((v164 & v163) != 0) {
                              v123 = v122;
                              if (v122 >= v164) {
                                v123 = v122 % v164;
                              }
                              v124 = *(__int64**)(v165 + 8 * v123);
                              do {
                                do {
                                  v124 = (__int64*)*v124;
                                } while (v124[1] != v122);
                              } while (v124[2] != v122);
                            }
                            else {
                              v124 = *(__int64**)(v165 + 8 * (v122 & v163));
                              do {
                                do {
                                  v124 = (__int64*)*v124;
                                } while (v124[1] != v122);
                              } while (v124[2] != v122);
                            }
                            v125 = *((_BYTE*)v124 + 24);
                            v126 = (const char*)v124[5];
                            v127 = (char*)v124 + 25;
                            v128 = *(_QWORD*)(v110[5] + 24);
                            if ((v125 & 1) != 0) {
                              v129 = v126;
                            }
                            else {
                              v129 = v127;
                            }
                            if (v128 != 0) {
                              if (v129 != nullptr) {
                                v130 = strlen_alt1(v129);
                              }
                              else {
                                v130 = 0;
                              }
                              v131 = v128 + 8;
                              v132 = *(unsigned __int16*)(v128 + 12);
                              v133 = v128 + 8 + 16 * v132;
                              v134 = *(_DWORD*)v133;
                              if ((signed __int32)*(_DWORD*)(v128 + 8) <
                                  (signed __int32)*(_DWORD*)v133) {
                                do {
                                  v137 = (__int64)v134 >> 3;
                                  if (v130 > v137) {
                                    v135 =
                                        ((unsigned __int8)v129[v130 + ~v137] >>
                                         (v134 & 7)) &
                                        1;
                                  }
                                  else {
                                    v135 = 0;
                                  }
                                  v132 = *(unsigned __int16*)(v128 + 12 +
                                                              16 * v132 +
                                                              2 * v135);
                                  v136 = v134 < (signed __int32)*(
                                                    _DWORD*)(v131 + 16 * v132);
                                  v134 = *(_DWORD*)(v131 + 16 * v132);
                                } while (v136);
                                v133 = v131 + 16 * v132;
                              }
                              v138 = *(unsigned __int16**)(v133 + 8);
                              if (v130 == *v138 &&
                                  memcmp_alt2((__int64)(v138 + 1),
                                              (__int64)v129, v130) == 0) {
                                v139 =
                                    (unsigned __int64)(v133 - v128 - 24) >> 4;
                                if ((_DWORD)v139 != -1) {
                                  gfx_ad5600((void*)(&v170_.v170), v166);
                                  GameRoutine_ad4be0_alt1(v166, v110[5],
                                                          *((_DWORD*)v110 + 12),
                                                          v139);
                                  GameHr_ad5280((_QWORD*)v166);
                                  v140 = v170_.v170;
                                  for (j = (unsigned __int8*)v170_.v171;
                                       v140 != j; v140 += 32) {
                                    v142 = *v140;
                                    v143 = (v142 & 1) == 0;
                                    v144 = v142 >> 1;
                                    if (v143) {
                                      v145 = (__int64)(v140 + 1);
                                    }
                                    else {
                                      v145 = *((_QWORD*)v140 + 2);
                                    }
                                    if (v143) {
                                      v146 = v144;
                                    }
                                    else {
                                      v146 = *((_QWORD*)v140 + 1);
                                    }
                                    GameRoutine_ad5500_alt1(
                                        (_QWORD*)v166, v145, v146,
                                        *((_DWORD*)v140 + 6));
                                  }
                                  v147 = GameRoutine_5fba80_alt1(
                                      *(_QWORD*)(v166 + 120),
                                      *(unsigned int**)(v166 + 200));
                                  v148 = *(_QWORD*)(v166 + 120);
                                  if ((v147 & 0x80000000) != 0) {
                                    v147 = *(_DWORD*)(v148 + 224) &
                                           ~(*(int*)(v148 + 224) >> 31);
                                  }
                                  v149 = *(_QWORD*)(v148 + 136) +
                                         ((unsigned __int64)v147 << 6);
                                  v150 = *(_QWORD*)v166;
                                  *(_QWORD*)(v166 + 136) = v149;
                                  GameRoutine_5fb840_alt1(v149, v150 + 568);
                                  v151 = GameRoutine_5fb900_alt1(
                                      *(_QWORD*)(v166 + 136));
                                  v85 = (__int64)v170_.v170;
                                  *(_QWORD*)(v166 + 144) = *(_QWORD*)(v151 + 8);
                                  if (v85 != 0) {
                                    v152 = v170_.v171;
                                    if (v85 == v170_.v171) {
                                      goto LABEL_127;
                                    }
                                    v153 = v170_.v171;
                                    do {
                                      v154 = *(_BYTE*)(v153 - 32);
                                      v153 -= 32;
                                      if ((v154 & 1) != 0) {
                                        v155 = *(_QWORD*)(v152 - 16);
                                        if (v155 != 0) {
                                          v156 = 128;
                                          if (*(_QWORD*)(*v5 + 200) == 0) {
                                            v156 = 56;
                                          }
                                          nn_mem_StandardAllocator_Free_alt2(
                                              *v5 + v156, v155);
                                        }
                                      }
                                      v152 = v153;
                                    } while (v153 != v85);
                                    v170_.v171 = v85;
                                    v85 = (__int64)v170_.v170;
                                    if (v170_.v170 != nullptr) {
                                    LABEL_127:
                                      v86 = 128;
                                      if (*(_QWORD*)(*v5 + 200) == 0) {
                                        v86 = 56;
                                      }
                                      nn_mem_StandardAllocator_Free_alt2(
                                          *v5 + v86, v85);
                                    }
                                  }
                                }
                              }
                            }
                            break;
                          }
                        }
                      }
                      else {
                        if (v111 >= v93) {
                          v111 %= v93;
                        }
                        if (v111 != v108) {
                          break;
                        }
                      }
                      v110 = (__int64*)*v110;
                    } while (v110 != nullptr);
                  }
                }
              }
            }
          LABEL_130:
            v41 = v169;
            v83 = v167;
            if (atomic_fetch_add((atomic_ullong* volatile)(v168 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v168 + 16LL))(v168);
              std___1___shared_weak_count___release_weak_alt1(v168);
            }
          }
        }
        v84 += 2;
      } while (v84 != v83);
    }
    if (v162 != 0) {
      if ((__int64*)v162 != v41) {
        v157 = v169;
        do {
          v158 = *((_BYTE*)v157 - 24);
          v157 -= 3;
          if ((v158 & 1) != 0) {
            v159 = *(v169 - 1);
            if (v159 != 0) {
              if (*(_QWORD*)(*v5 + 200) != 0) {
                v160 = 128;
              }
              else {
                v160 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v5 + v160, v159);
            }
          }
          v169 = v157;
        } while (v157 != (__int64*)v162);
      }
      v161 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v161 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v161, v162);
    }
  }
}

__int64 gfx_shader_Archive_CreateShader_lambda1_Invoke(__int64 result)
{
  __int64 v1;
  int v2;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_DWORD*)(v1 + 200);
  *(_DWORD*)(v1 + 200) = v2 + 1;
  if (v2 >= 10239) {
    result = Archive_ad3220(v1);
    *(_DWORD*)(v1 + 200) = 0;
  }
  return result;
}

#pragma GCC visibility pop
