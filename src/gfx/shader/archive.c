#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_ad0e40(float*, __int64, unsigned __int64);
_QWORD* GameRoutine_ad5600(_QWORD* __return_ptr, _QWORD);
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
unsigned __int64 Archive_ad3360(__int64 a1, char a2);
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

unsigned __int64 Archive_ad3360(__int64 a1, char a2)
{
  unsigned __int64 result;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* i;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  _QWORD* j;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* k;
  _QWORD* m;
  __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int8* v72;
  unsigned __int64 v73;
  bool v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int8* v78;
  unsigned __int64 v79;
  bool v80;
  unsigned __int64 v81;
  unsigned __int8* v82;
  unsigned __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  unsigned __int8* v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  __int64* v91;
  unsigned __int64 v92;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64* v98;
  bool v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  __int64** v107;
  __int64* v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64* v112;
  _QWORD* v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64* v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64* v120;
  char v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  int v130;
  __int64 v131;
  bool v132;
  unsigned __int64 v133;
  unsigned __int16* v134;
  unsigned __int64 v135;
  unsigned __int8* v136;
  unsigned __int8* n;
  unsigned __int64 v138;
  bool v139;
  unsigned __int64 v140;
  unsigned __int8* v141;
  unsigned __int64 v142;
  unsigned int v143;
  __int64 v144;
  unsigned __int8* v145;
  unsigned __int8* v146;
  char v147;
  __int64 v148;
  __int64 v149;
  unsigned __int8* v150;
  char v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  unsigned __int8* v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  _QWORD* v159;
  _QWORD* v160;
  unsigned __int64 v161;
  unsigned __int8* v162;
  unsigned __int8* v163;
  unsigned __int8* v164;

  result = Archive_ad3220(a1);
  if ((a2 & 1) != 0) {
    v5 = *(_QWORD**)(a1 + 72);
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v5 != nullptr) {
      v7 = nullptr;
      v162 = nullptr;
      v8 = 0;
      do {
        v9 = v7;
        v10 = *(_QWORD*)a1;
        v11 = *(_QWORD*)a1 + 568LL;
        v12 = *(_QWORD*)(v5[5] + 32LL);
        v13 = *(_QWORD*)a1 + 16592LL;
        v14 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
        v15 = v5[5];
        v16 = v14;
        *(_DWORD*)(v14 + 8) = 2;
        *(_QWORD*)v14 = gfx_shader_ShaderDeleter_vtable;
        *(_QWORD*)(v14 + 16) = v11;
        *(_QWORD*)(v14 + 24) = v15;
        v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 24, 16, 0);
        v17[1] = v13;
        v17[2] = v16;
        v18 = *(_QWORD*)(v10 + 16592);
        *v17 = v18;
        *(_QWORD*)(v18 + 8) = v17;
        *(_QWORD*)(v10 + 16592) = v17;
        ++*(_QWORD*)(v10 + 16608);
        result = GameRoutine_634d80(*(_QWORD*)(v12 + 8), v12);
        if ((unsigned __int64)v162 >= v8) {
          v21 = (char*)(v162 - v9);
          v22 = 1 - 0x5555555555555555LL * ((v162 - v9) >> 3);
          if (v22 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_64aa00(result);
          }
          v23 = v9;
          if (0x5555555555555556LL * ((__int64)(v8 - (_QWORD)v9) >> 3) > v22) {
            v22 = 0x5555555555555556LL * ((__int64)(v8 - (_QWORD)v9) >> 3);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v8 - (_QWORD)v9) >> 3) >=
              0x555555555555555LL) {
            v24 = 0xAAAAAAAAAAAAAAALL;
          }
          else {
            v24 = v22;
          }
          if (v24 != 0) {
            if (v24 > 0xAAAAAAAAAAAAAAALL) {
              GameRoutine_60a210(result);
            }
            v25 = fw_memory_HeapManager_Allocate(*v6, 24 * v24, 16, 0);
          }
          else {
            v25 = 0;
          }
          v26 = &v21[v25];
          if ((v5[2] & 1) != 0) {
            fw_text_String_CopyTerminated(&v21[v25], v5[4], v5[3]);
          }
          else {
            v27 = v5[2];
            v28 = v5[4];
            *((_QWORD*)v26 + 1) = v5[3];
            *((_QWORD*)v26 + 2) = v28;
            *(_QWORD*)v26 = v27;
          }
          v8 = v25 + 24 * v24;
          v162 = (unsigned __int8*)(v26 + 24);
          result = memcpy(v25, v23, v21);
          if (v23 != nullptr) {
            v29 = 128;
            if (*(_QWORD*)(*v6 + 200LL) == 0) {
              v29 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v6 + v29, v23);
          }
          v7 = (unsigned __int8*)v25;
        }
        else {
          v7 = v9;
          if ((v5[2] & 1) != 0) {
            result = fw_text_String_CopyTerminated(v162, v5[4], v5[3]);
          }
          else {
            v19 = v5[2];
            v20 = v5[4];
            *((_QWORD*)v162 + 1) = v5[3];
            *((_QWORD*)v162 + 2) = v20;
            *(_QWORD*)v162 = v19;
          }
          v162 += 24;
        }
        v5 = (_QWORD*)*v5;
      } while (v5 != nullptr);
    }
    else {
      v162 = nullptr;
      v7 = nullptr;
    }
    if (*(_QWORD*)(a1 + 80) != 0) {
      for (i = *(_QWORD**)(a1 + 72); i != nullptr;
           result = nn_mem_StandardAllocator_Free(*v6 + v31, v32)) {
        v32 = i;
        i = (_QWORD*)*i;
        if ((v32[2] & 1) != 0 && v32[4] != 0) {
          v33 = v32;
          v34 = v32[4];
          if (*(_QWORD*)(*v6 + 200LL) != 0) {
            v35 = 128;
          }
          else {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v35, v34);
          v32 = v33;
        }
        if (*(_QWORD*)(*v6 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
      }
      v36 = *(_QWORD*)(a1 + 64);
      *(_QWORD*)(a1 + 72) = 0;
      if (v36 != 0) {
        v37 = v36 & 7;
        if (v36 >= 8) {
          v39 = v36 & 0xFFFFFFFFFFFFFFF8LL;
          v38 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v38) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v38 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v38 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v38 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v38 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v38 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v38 + 48) = 0;
            v40 = *(_QWORD*)(a1 + 56) + 8 * v38;
            v38 += 8;
            *(_QWORD*)(v40 + 56) = 0;
          } while (v39 != v38);
        }
        else {
          v38 = 0;
        }
        if (v37 != 0) {
          v41 = 8 * v38;
          do {
            --v37;
            *(_QWORD*)(*(_QWORD*)(a1 + 56) + v41) = 0;
            v41 += 8;
          } while (v37 != 0);
        }
      }
      *(_QWORD*)(a1 + 80) = 0;
    }
    v42 = v162;
    if (*(_QWORD*)(a1 + 160) != 0) {
      for (j = *(_QWORD**)(a1 + 152); j != nullptr;
           result = nn_mem_StandardAllocator_Free(*v6 + v44, v45)) {
        v45 = j;
        j = (_QWORD*)*j;
        v46 = (_QWORD*)v45[7];
        if (v46 != nullptr) {
          do {
            v47 = (_QWORD*)*v46;
            if (*(_QWORD*)(*v6 + 200LL) != 0) {
              v48 = 128;
            }
            else {
              v48 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v48, v46);
            v46 = v47;
          } while (v47 != nullptr);
        }
        v49 = v45[5];
        v45[5] = 0;
        if (v49 != 0) {
          if (*(_QWORD*)(*v6 + 200LL) != 0) {
            v50 = 128;
          }
          else {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v50, v49);
        }
        if ((v45[2] & 1) != 0) {
          v51 = v45[4];
          if (v51 != 0) {
            if (*(_QWORD*)(*v6 + 200LL) != 0) {
              v52 = 128;
            }
            else {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v52, v51);
          }
        }
        if (*(_QWORD*)(*v6 + 200LL) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
      }
      v53 = *(_QWORD*)(a1 + 144);
      v42 = v162;
      *(_QWORD*)(a1 + 152) = 0;
      if (v53 != 0) {
        v54 = v53 & 7;
        if (v53 >= 8) {
          v56 = v53 & 0xFFFFFFFFFFFFFFF8LL;
          v55 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v55) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v55 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v55 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v55 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v55 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v55 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + 8 * v55 + 48) = 0;
            v57 = *(_QWORD*)(a1 + 136) + 8 * v55;
            v55 += 8;
            *(_QWORD*)(v57 + 56) = 0;
          } while (v56 != v55);
        }
        else {
          v55 = 0;
        }
        if (v54 != 0) {
          v58 = 8 * v55;
          do {
            --v54;
            *(_QWORD*)(*(_QWORD*)(a1 + 136) + v58) = 0;
            v58 += 8;
          } while (v54 != 0);
        }
      }
      *(_QWORD*)(a1 + 160) = 0;
    }
    for (k = *(_QWORD**)(a1 + 32); k != nullptr; k = (_QWORD*)*k) {
      result = GameRoutine_634d80(*(_QWORD*)(k[5] + 8LL), k[5]);
    }
    if (*(_QWORD*)(a1 + 40) != 0) {
      for (m = *(_QWORD**)(a1 + 32); m != nullptr;
           result = nn_mem_StandardAllocator_Free(*v6 + v61, v62)) {
        v62 = m;
        m = (_QWORD*)*m;
        if ((v62[2] & 1) != 0 && v62[4] != 0) {
          v63 = v62;
          v64 = v62[4];
          if (*(_QWORD*)(*v6 + 200LL) != 0) {
            v65 = 128;
          }
          else {
            v65 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v65, v64);
          v62 = v63;
        }
        if (*(_QWORD*)(*v6 + 200LL) != 0) {
          v61 = 128;
        }
        else {
          v61 = 56;
        }
      }
      v66 = *(_QWORD*)(a1 + 24);
      v42 = v162;
      *(_QWORD*)(a1 + 32) = 0;
      if (v66 != 0) {
        v67 = v66 & 7;
        if (v66 >= 8) {
          v69 = v66 & 0xFFFFFFFFFFFFFFF8LL;
          v68 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v68) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v68 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v68 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v68 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v68 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v68 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + 8 * v68 + 48) = 0;
            v70 = *(_QWORD*)(a1 + 16) + 8 * v68;
            v68 += 8;
            *(_QWORD*)(v70 + 56) = 0;
          } while (v69 != v68);
        }
        else {
          v68 = 0;
        }
        if (v67 != 0) {
          v71 = 8 * v68;
          do {
            --v67;
            *(_QWORD*)(*(_QWORD*)(a1 + 16) + v71) = 0;
            v71 += 8;
          } while (v67 != 0);
        }
      }
      *(_QWORD*)(a1 + 40) = 0;
    }
    if (v7 != v42) {
      v72 = v7;
      do {
        v73 = *v72;
        v74 = (v73 & 1) == 0;
        v75 = v73 >> 1;
        if (v74) {
          v76 = (__int64)(v72 + 1);
        }
        else {
          v76 = *((_QWORD*)v72 + 2);
        }
        if (v74) {
          v77 = v75;
        }
        else {
          v77 = *((_QWORD*)v72 + 1);
        }
        GameRoutine_ad0e40((float*)a1, v76, v77);
        v72 += 24;
      } while (v72 != v42);
      v78 = v7;
      do {
        v79 = *v78;
        v80 = (v79 & 1) == 0;
        v81 = v79 >> 1;
        if (v80) {
          v82 = v78 + 1;
        }
        else {
          v82 = *((unsigned __int8**)v78 + 2);
        }
        if (v80) {
          v83 = v81;
        }
        else {
          v83 = *((_QWORD*)v78 + 1);
        }
        result = GameRoutine_ad1740(a1, v82, v83);
        v78 += 24;
      } while (v78 != v42);
    }
    v155 = v7;
    v85 = *(_QWORD**)(a1 + 176);
    v84 = *(_QWORD**)(a1 + 184);
    if (v85 != v84) {
      v160 = *(_QWORD**)(a1 + 184);
      do {
        result = v85[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v161 = result;
            if (*v85 != 0) {
              v88 = *(_QWORD*)(a1 + 104);
              v89 = *(_QWORD*)(*v85 + 248LL);
              v156 = v88 - 1;
              v157 = v88;
              if ((v88 & (v88 - 1)) != 0) {
                v90 = *(_QWORD*)(*v85 + 248LL);
                if (v89 >= v88) {
                  v90 = v89 % v88;
                }
                v91 = *(__int64**)(*(_QWORD*)(a1 + 96) + 8 * v90);
                v158 = *(_QWORD*)(a1 + 96);
                do {
                  do {
                    v91 = (__int64*)*v91;
                  } while (v91[1] != v89);
                } while (v91[2] != v89);
              }
              else {
                v91 = *(__int64**)(*(_QWORD*)(a1 + 96) + 8 * ((v88 - 1) & v89));
                v158 = *(_QWORD*)(a1 + 96);
                do {
                  do {
                    v91 = (__int64*)*v91;
                  } while (v91[1] != v89);
                } while (v91[2] != v89);
              }
              v92 = *(_QWORD*)(a1 + 64);
              if (v92 != 0 && *(_QWORD*)(a1 + 80) != 0) {
                v94 = *((unsigned __int8*)v91 + 24);
                v159 = (_QWORD*)*v85;
                v95 = (__int64)v91 + 25;
                v98 = v91 + 4;
                v96 = v91[4];
                v97 = v98[1];
                v99 = (v94 & 1) == 0;
                v100 = v94 >> 1;
                v101 = v99 ? v95 : v97;
                v102 = v99 ? v100 : v96;
                v103 = v101;
                result = std___1___hash_memory(v101, v102);
                v104 = v92 - 1;
                v105 = result;
                if ((v92 & (v92 - 1)) != 0) {
                  v106 = result;
                  if (result >= v92) {
                    v106 = result % v92;
                  }
                }
                else {
                  v106 = result & v104;
                }
                v107 = *(__int64***)(*(_QWORD*)(a1 + 56) + 8 * v106);
                if (v107 != nullptr) {
                  v108 = *v107;
                  if (*v107 != nullptr) {
                    if ((v92 & v104) == 0) {
                      while (1) {
                        v114 = v108[1];
                        if (v114 == v105) {
                          v115 = *((unsigned __int8*)v108 + 16);
                          v116 = v108[3];
                          if ((v115 & 1) == 0) {
                            v116 = v115 >> 1;
                          }
                          if (v116 == v102) {
                            v117 = (v115 & 1) != 0
                                       ? (__int64*)v108[4]
                                       : (__int64*)((char*)v108 + 17);
                            result = memcmp(v117, v103, v102);
                            v113 = v159;
                            if ((_DWORD)result == 0) {
                              goto LABEL_187;
                            }
                          }
                        }
                        else if ((v114 & v104) != v106) {
                          goto LABEL_130;
                        }
                        v108 = (__int64*)*v108;
                        if (v108 == nullptr) {
                          goto LABEL_130;
                        }
                      }
                    }
                    do {
                      v109 = v108[1];
                      if (v109 == v105) {
                        v110 = *((unsigned __int8*)v108 + 16);
                        v111 = v108[3];
                        if ((v110 & 1) == 0) {
                          v111 = v110 >> 1;
                        }
                        if (v111 == v102) {
                          v112 = (v110 & 1) != 0 ? (__int64*)v108[4]
                                                 : (__int64*)((char*)v108 + 17);
                          result = memcmp(v112, v103, v102);
                          v113 = v159;
                          if ((_DWORD)result == 0) {
                          LABEL_187:
                            v118 = v113[32];
                            if ((v157 & v156) != 0) {
                              v119 = v118;
                              if (v118 >= v157) {
                                v119 = v118 % v157;
                              }
                              v120 = *(__int64**)(v158 + 8 * v119);
                              do {
                                do {
                                  v120 = (__int64*)*v120;
                                } while (v120[1] != v118);
                              } while (v120[2] != v118);
                            }
                            else {
                              v120 = *(__int64**)(v158 + 8 * (v118 & v156));
                              do {
                                do {
                                  v120 = (__int64*)*v120;
                                } while (v120[1] != v118);
                              } while (v120[2] != v118);
                            }
                            v121 = *((_BYTE*)v120 + 24);
                            v122 = v120[5];
                            v123 = (__int64)v120 + 25;
                            v124 = *(_QWORD*)(v108[5] + 24);
                            if ((v121 & 1) != 0) {
                              v125 = v122;
                            }
                            else {
                              v125 = v123;
                            }
                            if (v124 != 0) {
                              if (v125 != 0) {
                                result = strlen(v125);
                                v126 = result;
                              }
                              else {
                                v126 = 0;
                              }
                              v127 = v124 + 8;
                              v128 = *(unsigned __int16*)(v124 + 12);
                              v129 = v124 + 8 + 16 * v128;
                              v130 = *(_DWORD*)v129;
                              if (*(_DWORD*)(v124 + 8) < *(_DWORD*)v129) {
                                do {
                                  v133 = (__int64)v130 >> 3;
                                  if (v126 > v133) {
                                    v131 = (*(unsigned __int8*)(v125 + v126 +
                                                                ~v133) >>
                                            (v130 & 7)) &
                                           1;
                                  }
                                  else {
                                    v131 = 0;
                                  }
                                  v128 = *(unsigned __int16*)(v124 + 12 +
                                                              16 * v128 +
                                                              2 * v131);
                                  v132 = v130 < *(_DWORD*)(v127 + 16 * v128);
                                  v130 = *(_DWORD*)(v127 + 16 * v128);
                                } while (v132);
                                v129 = v127 + 16 * v128;
                              }
                              v134 = *(unsigned __int16**)(v129 + 8);
                              if (v126 == *v134) {
                                result = memcmp(v134 + 1, v125, v126);
                                if ((_DWORD)result == 0) {
                                  v135 =
                                      (unsigned __int64)(v129 - v124 - 24) >> 4;
                                  if ((_DWORD)v135 != -1) {
                                    GameRoutine_ad5600(&v163, v159);
                                    GameRoutine_ad4be0(
                                        v159, v108[5],
                                        *((unsigned int*)v108 + 12),
                                        (unsigned int)v135);
                                    GameRoutine_ad5280(v159);
                                    v136 = v163;
                                    for (n = v164; v136 != n; v136 += 32) {
                                      v138 = *v136;
                                      v139 = (v138 & 1) == 0;
                                      v140 = v138 >> 1;
                                      if (v139) {
                                        v141 = v136 + 1;
                                      }
                                      else {
                                        v141 = *((unsigned __int8**)v136 + 2);
                                      }
                                      if (v139) {
                                        v142 = v140;
                                      }
                                      else {
                                        v142 = *((_QWORD*)v136 + 1);
                                      }
                                      GameRoutine_ad5500(
                                          v159, v141, v142,
                                          *((unsigned int*)v136 + 6));
                                    }
                                    v143 =
                                        GameRoutine_5fba80(v159[15], v159[25]);
                                    v144 = v159[15];
                                    if ((v143 & 0x80000000) != 0) {
                                      v143 = *(_DWORD*)(v144 + 224) &
                                             ~(*(int*)(v144 + 224) >> 31);
                                    }
                                    v159[17] = *(_QWORD*)(v144 + 136) +
                                               ((unsigned __int64)v143 << 6);
                                    GameRoutine_5fb840();
                                    result = GameRoutine_5fb900(v159[17]);
                                    v86 = v163;
                                    v159[18] = *(_QWORD*)(result + 8);
                                    if (v86 != nullptr) {
                                      v145 = v164;
                                      if (v86 == v164) {
                                        goto LABEL_127;
                                      }
                                      v146 = v164;
                                      do {
                                        v147 = *(v146 - 32);
                                        v146 -= 32;
                                        if ((v147 & 1) != 0) {
                                          v148 = *((_QWORD*)v145 - 2);
                                          if (v148 != 0) {
                                            v149 = 128;
                                            if (*(_QWORD*)(*v6 + 200LL) == 0) {
                                              v149 = 56;
                                            }
                                            result =
                                                nn_mem_StandardAllocator_Free(
                                                    *v6 + v149, v148);
                                          }
                                        }
                                        v145 = v146;
                                      } while (v146 != v86);
                                      v164 = v86;
                                      v86 = v163;
                                      if (v163 != nullptr) {
                                      LABEL_127:
                                        v87 = 128;
                                        if (*(_QWORD*)(*v6 + 200LL) == 0) {
                                          v87 = 56;
                                        }
                                        result = nn_mem_StandardAllocator_Free(
                                            *v6 + v87, v86);
                                      }
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
                        if (v109 >= v92) {
                          v109 %= v92;
                        }
                        if (v109 != v106) {
                          break;
                        }
                      }
                      v108 = (__int64*)*v108;
                    } while (v108 != nullptr);
                  }
                }
              }
            }
          LABEL_130:
            v42 = v162;
            v84 = v160;
            if (atomic_fetch_add((atomic_ullong* volatile)(v161 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(unsigned __int64))(*(_QWORD*)v161 + 16LL))(v161);
              result = std___1___shared_weak_count___release_weak(v161);
            }
          }
        }
        v85 += 2;
      } while (v85 != v84);
    }
    if (v155 != nullptr) {
      if (v155 != v42) {
        v150 = v162;
        do {
          v151 = *(v150 - 24);
          v150 -= 24;
          if ((v151 & 1) != 0) {
            v152 = *((_QWORD*)v162 - 1);
            if (v152 != 0) {
              if (*(_QWORD*)(*v6 + 200LL) != 0) {
                v153 = 128;
              }
              else {
                v153 = 56;
              }
              nn_mem_StandardAllocator_Free(*v6 + v153, v152);
            }
          }
          v162 = v150;
        } while (v150 != v155);
      }
      v154 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v154 = 56;
      }
      return nn_mem_StandardAllocator_Free(*v6 + v154, v155);
    }
  }
  return result;
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
