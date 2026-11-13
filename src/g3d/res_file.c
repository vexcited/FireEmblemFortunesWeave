#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 GameRoutine_ad8640(_QWORD);
__int64 GameRoutine_ad8980(__int64 result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_1fc2618[])();
extern __int64 (*GameData_1fc2698[])();
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_ad7640(_QWORD*);
_QWORD* g3d_ResFile_prepareAsyncLoading(_QWORD* result, _QWORD* a2);
__int64 g3d_ResFile_prepareAsyncLoading_lambda0_Invoke(__int64 result);
__int64 g3d_ResFile_prepareAsyncLoading_lambda1_Invoke(__int64 a1);
_QWORD* GameRoutine_adb3c0(float*, unsigned __int8*, char*);
__int64* GameRoutine_adb120(__int64* result, unsigned __int64);
__int64 GameRoutine_adac20(__int64 result);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a78a90();
void __attribute__((noreturn)) GameRoutine_adab90();
void __attribute__((noreturn)) GameRoutine_adabb0();
void __attribute__((noreturn)) GameRoutine_adabd0();
void __attribute__((noreturn)) String_60a1d0();
__attribute__((swiftcall)) void ResFile_ad6ca0(PSEUDO_X8 x8_);
unsigned __int64 ResFile_ad7640_alt1(__int64 a1) __asm__("ResFile_ad7640");
__int64 ResFile_ad8b40_alt1(__int64 a1, __int64 a2,
                            float** a3) __asm__("ResFile_ad8b40");
__int64* GameRoutine_adb760(__int64* result, unsigned __int64);
_QWORD* ResFile_adb3c0(float* a1, unsigned __int8* a2, char* a3);
_QWORD* GameRoutine_a934d0_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_a934d0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_adac20_alt1(_QWORD*) __asm__("GameRoutine_adac20");
void GameRoutine_adb120_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_adb120");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ResFile_ad7640(__int64 a1);
__int64 ResFile_ad8b40(__int64 a1, __int64 a2, __int64 a3);

__attribute__((swiftcall)) void ResFile_ad6ca0(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 result;

  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  *a1 = result;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_DWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 144) = 0;
  *(_DWORD*)(result + 160) = 0;
  *(_WORD*)(result + 164) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_DWORD*)result = 7;
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_DWORD*)(result + 64) = 1065353216;
  {
    result;
    return;
  }
}

_QWORD* g3d_ResFile_prepareAsyncLoading(_QWORD* result, _QWORD* a2)
{
  _QWORD* v4;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;

  if (result[10] == 0) {
    v4 = result;
    if (result[12] == 0) {
      v6 = (__int64*)fw_memory_g_heap_manager_ptr;
      v7 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v7[2] = 0;
      v8 = v4[11];
      v7[8] = 0;
      *v7 = GameData_1fbf780;
      v7[1] = 0;
      v4[10] = v7 + 4;
      v4[11] = v7;
      if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
      v9 = (_QWORD*)v4[10];
      v22_.v22[0] = GameData_1fc2618;
      v22_.v22[1] = v4;
      v22_.v23 = v22_.v22;
      GameRoutine_a934d0_alt1(v22_.v22, v9);
      if (v22_.v23 == v22_.v22) {
        v10 = 32;
      }
      else {
        if (v22_.v23 == nullptr) {
          goto LABEL_12;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v22_.v23 + v10))((__int64)v22_.v23);
    LABEL_12:
      v11 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v6, 80, 16, 0);
      v12 = v4[13];
      v11[1] = 0;
      v11[2] = 0;
      v11[8] = 0;
      *v11 = GameData_1fbf780;
      v4[12] = v11 + 4;
      v4[13] = v11;
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak_alt1(v12);
      }
      v13 = (_QWORD*)v4[12];
      v22_.v22[0] = GameData_1fc2698;
      v22_.v22[1] = v4;
      v22_.v23 = v22_.v22;
      GameRoutine_a934d0_alt1(v22_.v22, v13);
      if (v22_.v23 == v22_.v22) {
        v14 = 32;
      }
      else {
        if (v22_.v23 == nullptr) {
          goto LABEL_20;
        }
        v14 = 40;
      }
      (*(void (**)(__int64))(*v22_.v23 + v14))((__int64)v22_.v23);
    LABEL_20:
      v15 = (_QWORD*)a2[4];
      v16 = a2;
      if (v15 == nullptr) {
        v22_.v23 = nullptr;
        goto LABEL_29;
      }
      if (v15 != a2) {
        v22_.v23 = (_QWORD*)a2[4];
        goto LABEL_29;
      }
      v22_.v23 = v22_.v22;
      (*(void (**)(_QWORD*, _QWORD*))(*v15 + 24LL))(v15, v22_.v22);
      v17 = (_QWORD*)a2[4];
      a2[4] = 0;
      if (v17 == a2) {
        v18 = 32;
      }
      else {
        v16 = a2;
        if (v17 == nullptr) {
          goto LABEL_29;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
      v16 = a2;
    LABEL_29:
      v16[4] = 0;
      v19 = (_QWORD*)v4[18];
      v4[18] = 0;
      if (v19 == v4 + 14) {
        v20 = 32;
      }
      else {
        if (v19 == nullptr) {
          goto LABEL_34;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
    LABEL_34:
      result = v22_.v23;
      if (v22_.v23 == nullptr) {
        v4[18] = 0;
        return result;
      }
      if (v22_.v23 != v22_.v22) {
        v4[18] = v22_.v23;
        return result;
      }
      v4[18] = v4 + 14;
      (*(void (**)(_QWORD*, _QWORD*))(*result + 24LL))(result, v4 + 14);
      result = v22_.v23;
      if (v22_.v23 == v22_.v22) {
        v21 = 32;
      }
      else {
        if (v22_.v23 == nullptr) {
          return result;
        }
        v21 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(__int64))(*v22_.v23 + v21))(
          (__int64)v22_.v23);
    }
  }
  return result;
}

void ResFile_ad7640(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  __int64 v2;
  int v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64** v16;
  __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  __int64 v28;
  int v29;
  __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;
  unsigned __int64 v36;
  __int64 v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64** v48;
  __int64* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  float* v67;
  _QWORD* v68;
  _QWORD* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  int v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  float v86;
  float v87;
  _BOOL8 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 primeEm;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  unsigned __int64 v98;
  int v99;
  _DWORD* v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64* v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  int v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  int v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  int v122;
  __int64 v123;
  __int64 v124;
  _QWORD* v125;
  __int64 v126;
  _DWORD* v127;
  int v128;
  int v129;
  char* v130;
  unsigned __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  const char** v142;
  const char** v143;
  const char** v144;
  const char** v145;
  const char* v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  __int64 v158;
  const char** v159;
  const char** v160;
  const char** v161;
  const char** v162;
  const char* v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  __int64 v174;
  __int64 v175;
  _QWORD* v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  int v183;
  _QWORD* v184;
  _QWORD* v185;
  __int64 v186;
  unsigned __int64 v187;
  __int64* v188;
  unsigned __int64 v189;
  __int64 v190;
  int v191;
  __int64 v192;
  int v193;
  _QWORD* v194;
  float* v195;
  struct {
    _QWORD v196[2];
    _QWORD* v197;
    __int64 v198;
    int v199;
  } v196_;

  v1 = (_QWORD*)a1;
  ResFile_ad8b40(a1, *(_QWORD*)(a1 + 16), a1 + 32);
  v2 = v1[3];
  if (v2 == 0) {
    return;
  }
  v196_.v197 = nullptr;
  v196_.v198 = 0;
  v196_.v196[0] = 0;
  v196_.v196[1] = 0;
  v196_.v199 = 1065353216;
  v3 = ResFile_ad8b40((__int64)v1, v2, (__int64)v196_.v196);
  v4 = v196_.v197;
  if (v196_.v197 == nullptr) {
    goto LABEL_307;
  }
  v184 = v1;
  v183 = v3;
  while (2) {
    v5 = v1[5];
    if (v5 == 0 || v1[7] == 0) {
      goto LABEL_4;
    }
    v7 = *((unsigned __int8*)v4 + 16);
    v8 = (v7 & 1) == 0;
    v9 = v7 >> 1;
    v10 = v8 ? (__int64)v4 + 17 : v4[4];
    v11 = v8 ? v9 : v4[3];
    v12 = std___1___hash_memory_alt1(v10, v11);
    v13 = v5 - 1;
    v14 = v12;
    if ((v5 & (v5 - 1)) != 0) {
      v15 = v12;
      if (v12 >= v5) {
        v15 = v12 % v5;
      }
    }
    else {
      v15 = v12 & v13;
    }
    v16 = *(__int64***)(v1[4] + 8 * v15);
    if (v16 == nullptr) {
      goto LABEL_4;
    }
    v17 = *v16;
    if (*v16 == nullptr) {
      goto LABEL_4;
    }
    if ((v5 & v13) == 0) {
      while (1) {
        v24 = v17[1];
        if (v24 == v14) {
          v25 = *((unsigned __int8*)v17 + 16);
          v26 = v17[3];
          if ((v25 & 1) == 0) {
            v26 = v25 >> 1;
          }
          if (v26 == v11) {
            v27 = v17;
            v28 = (v25 & 1) != 0 ? v17[4] : (__int64)v17 + 17;
            v29 = memcmp_alt1(v28, v10, v11);
            v17 = v27;
            if (v29 == 0) {
              goto LABEL_46;
            }
          }
        }
        else if ((v24 & v13) != v15) {
          goto LABEL_4;
        }
        v17 = (__int64*)*v17;
        if (v17 == nullptr) {
          goto LABEL_4;
        }
      }
    }
    while (1) {
      v18 = v17[1];
      if (v18 == v14) {
        break;
      }
      if (v18 >= v5) {
        v18 %= v5;
      }
      if (v18 != v15) {
        goto LABEL_4;
      }
    LABEL_24:
      v17 = (__int64*)*v17;
      if (v17 == nullptr) {
        goto LABEL_4;
      }
    }
    v19 = *((unsigned __int8*)v17 + 16);
    v20 = v17[3];
    if ((v19 & 1) == 0) {
      v20 = v19 >> 1;
    }
    if (v20 != v11) {
      goto LABEL_24;
    }
    v21 = v17;
    v22 = (v19 & 1) != 0 ? v17[4] : (__int64)v17 + 17;
    v23 = memcmp_alt1(v22, v10, v11);
    v17 = v21;
    if (v23 != 0) {
      goto LABEL_24;
    }
  LABEL_46:
    v30 = (__int64*)v4[25];
    v194 = v4;
    v195 = (float*)v17;
    if (v30 != nullptr) {
      v185 = v17 + 25;
      do {
        v31 = *((unsigned __int8*)v30 + 16);
        v32 = v17[24];
        v33 = *((_DWORD*)v30 + 10);
        v188 = v30 + 2;
        v193 = v33;
        if ((unsigned int)(v33 - 1) < 3) {
          v34 = (unsigned int)(v33 + 1);
        }
        else {
          v34 = 1;
        }
        if (v32 == 0 || v17[26] == 0) {
          v36 = v30[3];
          v37 = v30[4];
          v38 = v31 & 1;
          v39 = v31 >> 1;
        }
        else {
          v37 = v30[4];
          v40 = v31 & 1;
          v41 = v31 >> 1;
          v191 = v40;
          v187 = v41;
          if (v40 != 0) {
            v42 = v30[4];
          }
          else {
            v42 = (__int64)v30 + 17;
          }
          if (v40 != 0) {
            v43 = v30[3];
          }
          else {
            v43 = v41;
          }
          v189 = v30[3];
          v44 = v42;
          v45 = std___1___hash_memory_alt1(v42, v43);
          v46 = v32 - 1;
          v47 = v45;
          if ((v32 & (v32 - 1)) != 0) {
            v17 = (__int64*)v195;
            v13 = v45;
            if (v45 >= v32) {
              v13 = v45 % v32;
            }
          }
          else {
            v17 = (__int64*)v195;
            v13 = v45 & v46;
          }
          v48 = *(__int64***)(v17[23] + 8 * v13);
          if (v48 != nullptr) {
            v186 = v37;
            v49 = *v48;
            if (*v48 != nullptr) {
              if ((v32 & v46) == 0) {
                while (1) {
                  v55 = v49[1];
                  if (v55 == v47) {
                    v56 = *((unsigned __int8*)v49 + 16);
                    v57 = v49[3];
                    if ((v56 & 1) == 0) {
                      v57 = v56 >> 1;
                    }
                    if (v57 == v43) {
                      v58 = (v56 & 1) != 0 ? v49[4] : (__int64)v49 + 17;
                      v59 = memcmp_alt1(v58, v44, v43);
                      v17 = (__int64*)v195;
                      if (v59 == 0) {
                        goto LABEL_95;
                      }
                    }
                  }
                  else if ((v55 & v46) != v13) {
                    goto LABEL_98;
                  }
                  v49 = (__int64*)*v49;
                  if (v49 == nullptr) {
                    goto LABEL_98;
                  }
                }
              }
              do {
                v50 = v49[1];
                if (v50 == v47) {
                  v51 = *((unsigned __int8*)v49 + 16);
                  v52 = v49[3];
                  if ((v51 & 1) == 0) {
                    v52 = v51 >> 1;
                  }
                  if (v52 == v43) {
                    v53 = (v51 & 1) != 0 ? v49[4] : (__int64)v49 + 17;
                    v54 = memcmp_alt1(v53, v44, v43);
                    v17 = (__int64*)v195;
                    if (v54 == 0) {
                    LABEL_95:
                      if (*((_DWORD*)v49 + 10) == v193) {
                        v60 = *((int*)v49 + 11);
                        if ((unsigned int)(v34 - 1) >= 7) {
                          v116 = 4 * v60;
                          v61 = 0;
                          do {
                            *(_DWORD*)(v17[20] + v116 + 4 * v61) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                           4 * v61);
                            *(_DWORD*)(v17[20] + v116 + 4 * v61 + 4) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                           4 * v61 + 4);
                            *(_DWORD*)(v17[20] + v116 + 4 * v61 + 8) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                           4 * v61 + 8);
                            *(_DWORD*)(v17[20] + v116 + 4 * v61 + 12) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                           4 * v61 + 12);
                            *(_DWORD*)(v17[20] + v116 + 4 * v61 + 16) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                           4 * v61 + 16);
                            *(_DWORD*)(v17[20] + v116 + 4 * v61 + 20) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                           4 * v61 + 20);
                            *(_DWORD*)(v17[20] + v116 + 4 * v61 + 24) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                           4 * v61 + 24);
                            v117 = *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                              4 * v61 + 28);
                            v118 = v17[20] + v116 + 4 * v61;
                            v61 += 8;
                            *(_DWORD*)(v118 + 28) = v117;
                          } while ((v34 & 0x7FFFFFF8) != v61);
                        }
                        else {
                          v61 = 0;
                        }
                        v119 = v34 & 7;
                        if ((v34 & 7) != 0) {
                          v120 = 4 * v61;
                          v121 = v120 + 4 * v60;
                          do {
                            --v119;
                            v122 = *(_DWORD*)(v4[20] + 4LL * *((int*)v30 + 11) +
                                              v120);
                            v120 += 4;
                            *(_DWORD*)(v17[20] + v121) = v122;
                            v121 += 4;
                          } while (v119 != 0);
                        }
                      }
                      goto LABEL_48;
                    }
                  }
                }
                else {
                  if (v50 >= v32) {
                    v50 %= v32;
                  }
                  if (v50 != v13) {
                    break;
                  }
                }
                v49 = (__int64*)*v49;
              } while (v49 != nullptr);
            }
          LABEL_98:
            v37 = v186;
          }
          v38 = v191;
          v36 = v189;
          v39 = v187;
        }
        v192 = v17[21];
        v190 = v17[20];
        if (v38 != 0) {
          v62 = v37;
        }
        else {
          v62 = (__int64)v30 + 17;
        }
        if (v38 != 0) {
          v63 = v36;
        }
        else {
          v63 = v39;
        }
        v64 = std___1___hash_memory_alt1(v62, v63);
        v65 = v64;
        if (v32 == 0) {
          goto LABEL_139;
        }
        v66 = v32 - 1;
        if ((v32 & (v32 - 1)) != 0) {
          v67 = v195;
          v13 = v64;
          if (v64 >= v32) {
            v13 = v64 % v32;
          }
        }
        else {
          v67 = v195;
          v13 = v66 & v64;
        }
        v68 = *(_QWORD**)(*((_QWORD*)v67 + 23) + 8 * v13);
        if (v68 == nullptr || (v69 = (_QWORD*)*v68, *v68 == 0)) {
        LABEL_139:
          v83 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
          *v83 = 0;
          v83[1] = v65;
          v69 = v83;
          if ((*(_BYTE*)v188 & 1) != 0) {
            fw_text_String_CopyTerminated(v83 + 2, v30[4], v30[3]);
          }
          else {
            v84 = *v188;
            v85 = v30[4];
            v83[3] = v30[3];
            v83[4] = v85;
            v83[2] = v84;
          }
          v17 = (__int64*)v195;
          v69[5] = 0;
          v82 = v193;
          v86 = v195[54];
          v87 = (float)(unsigned __int64)(*((_QWORD*)v195 + 26) + 1LL);
          if (v32 == 0 || (float)(v86 * (float)v32) < v87) {
            v88 = v32 < 3 || (v32 & (v32 - 1)) != 0;
            v89 = v88 | (2 * v32);
            v90 = vcvtps_u64_f32(v87 / v86);
            if (v89 <= v90) {
              v91 = v90;
            }
            else {
              v91 = v89;
            }
            if (v91 == 1) {
              v91 = 2;
            }
            else if ((v91 & (v91 - 1)) != 0) {
              primeEm = std___1___next_prime_alt1(v91);
              v17 = (__int64*)v195;
              v91 = primeEm;
            }
            v93 = v17[24];
            if (v91 > v93) {
              goto LABEL_155;
            }
            if (v91 < v93) {
              v94 = vcvtps_u64_f32((float)(unsigned __int64)v17[26] /
                                   *((float*)v17 + 54));
              if (v93 < 3 || (v93 & (v93 - 1)) != 0) {
                v94 = std___1___next_prime_alt1(v94);
                v17 = (__int64*)v195;
              }
              else {
                v95 = 1LL << (-(char)__clz(v94 - 1) & 63);
                if (v94 >= 2) {
                  v94 = v95;
                }
              }
              if (v91 <= v94) {
                v91 = v94;
              }
              if (v91 < v93) {
              LABEL_155:
                GameRoutine_adb120_alt1(v17 + 23, v91);
                v17 = (__int64*)v195;
              }
            }
            v32 = v17[24];
            if ((v32 & (v32 - 1)) != 0) {
              if (v65 >= v32) {
                v13 = v65 % v32;
              }
              else {
                v13 = v65;
              }
            }
            else {
              v13 = (v32 - 1) & v65;
            }
          }
          v96 = v17[23];
          v97 = *(_QWORD**)(v96 + 8 * v13);
          if (v97 != nullptr) {
            v81 = v190;
            v80 = v192;
            *v69 = *v97;
            *v97 = v69;
          }
          else {
            *v69 = *v185;
            *v185 = v69;
            *(_QWORD*)(v96 + 8 * v13) = v185;
            v81 = v190;
            v80 = v192;
            if (*v69 != 0) {
              v98 = *(_QWORD*)(*v69 + 8LL);
              if ((v32 & (v32 - 1)) != 0) {
                if (v98 >= v32) {
                  v98 %= v32;
                }
              }
              else {
                v98 &= v32 - 1;
              }
              *(_QWORD*)(v17[23] + 8 * v98) = v69;
            }
          }
          ++v17[26];
          goto LABEL_180;
        }
        if ((v32 & v66) == 0) {
          while (1) {
            v75 = v69[1];
            if (v75 == v65) {
              v76 = *((unsigned __int8*)v69 + 16);
              v77 = v69[3];
              if ((v76 & 1) == 0) {
                v77 = v76 >> 1;
              }
              if (v77 == v63) {
                v78 = (v76 & 1) != 0 ? v69[4] : (__int64)v69 + 17;
                v79 = memcmp_alt1(v78, v62, v63);
                v17 = (__int64*)v195;
                if (v79 == 0) {
                  goto LABEL_138;
                }
              }
            }
            else if ((v75 & v66) != v13) {
              goto LABEL_139;
            }
            v69 = (_QWORD*)*v69;
            if (v69 == nullptr) {
              goto LABEL_139;
            }
          }
        }
        while (1) {
          v70 = v69[1];
          if (v70 == v65) {
            break;
          }
          if (v70 >= v32) {
            v70 %= v32;
          }
          if (v70 != v13) {
            goto LABEL_139;
          }
        LABEL_116:
          v69 = (_QWORD*)*v69;
          if (v69 == nullptr) {
            goto LABEL_139;
          }
        }
        v71 = *((unsigned __int8*)v69 + 16);
        v72 = v69[3];
        if ((v71 & 1) == 0) {
          v72 = v71 >> 1;
        }
        if (v72 != v63) {
          goto LABEL_116;
        }
        v73 = (v71 & 1) != 0 ? v69[4] : (__int64)v69 + 17;
        v74 = memcmp_alt1(v73, v62, v63);
        v17 = (__int64*)v195;
        if (v74 != 0) {
          goto LABEL_116;
        }
      LABEL_138:
        v81 = v190;
        v80 = v192;
        v82 = v193;
      LABEL_180:
        v99 = 0;
        *((_DWORD*)v69 + 10) = v82;
        *((_DWORD*)v69 + 11) = (unsigned __int64)(v80 - v81) >> 2;
        v100 = (_DWORD*)v17[21];
        do {
          v13 = v4[20];
          v101 = v99 + *((_DWORD*)v30 + 11);
          v102 = v17[22];
          if ((unsigned __int64)v100 < v102) {
            *v100++ = *(_DWORD*)(v13 + 4 * v101);
          }
          else {
            v103 = v17[20];
            v104 = (unsigned __int64)v100 - v103;
            v105 = ((__int64)v100 - v103) >> 2;
            v106 = v105 + 1;
            if ((unsigned __int64)(v105 + 1) >> 62 != 0) {
              GameRoutine_a78a90();
            }
            v107 = v102 - v103;
            v108 = v30;
            v109 = v34;
            if (v107 >> 1 > v106) {
              v106 = v107 >> 1;
            }
            if ((unsigned __int64)v107 >= 0x7FFFFFFFFFFFFFFCLL) {
              v110 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v110 = v106;
            }
            if (v110 != 0) {
              if (v110 >> 62 != 0) {
              LABEL_313:
                GameRoutine_60a210();
              }
              v111 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v110, 16, 0);
            }
            else {
              v111 = 0;
            }
            v112 = *(_DWORD*)(v13 + 4 * v101);
            v113 = v111 + 4 * v110;
            v114 = v111 + v104 - 4 * v105;
            *(_DWORD*)(v111 + v104) = v112;
            v100 = (_DWORD*)(v111 + v104 + 4);
            memcpy_alt1(v114, v103, v104);
            v17 = (__int64*)v195;
            *((_QWORD*)v195 + 20) = v114;
            *((_QWORD*)v195 + 21) = v100;
            *((_QWORD*)v195 + 22) = v113;
            if (v103 != 0) {
              v115 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v115 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v115, v103);
              v17 = (__int64*)v195;
            }
            v4 = v194;
            v34 = v109;
            v30 = v108;
          }
          ++v99;
          v17[21] = (__int64)v100;
        } while ((_DWORD)v34 != v99);
      LABEL_48:
        v30 = (__int64*)*v30;
      } while (v30 != nullptr);
    }
    v123 = v4[9];
    v124 = v4[10];
    v1 = v184;
    if (v123 != v124) {
      v125 = (_QWORD*)v17[10];
      while (1) {
        v126 = v17[9];
        v127 = *(_DWORD**)v123;
        if ((_QWORD*)v126 != v125) {
          while (*v127 != **(_DWORD**)v126) {
            v126 += 8;
            if ((_QWORD*)v126 == v125) {
              goto LABEL_219;
            }
          }
        }
        if ((_QWORD*)v126 == v125) {
          goto LABEL_219;
        }
        v128 = v127[29];
        if (v127[11] != 0 || v127[12] != 0) {
          break;
        }
      LABEL_237:
        v123 += 8;
        if (v123 == v124) {
          goto LABEL_238;
        }
      }
      v129 = *(_DWORD*)(*(_QWORD*)v126 + 116LL) | v128;
      if (v129 != 0) {
        v127[30] = *(_DWORD*)(*(_QWORD*)v126 + 120LL) & ~v128 | v128 & v127[30];
        *(_DWORD*)(*(_QWORD*)v123 + 116LL) = v129;
        v125 = (_QWORD*)v17[10];
      }
      v130 = (char*)v125 - v126 - 8;
      if (v125 != (_QWORD*)(v126 + 8)) {
        memmove_alt1(v126, v126 + 8, (unsigned __int64)v125 - v126 - 8);
        v17 = (__int64*)v195;
      }
      --v125;
      v17[10] = (__int64)&v130[v126];
    LABEL_219:
      v131 = v17[11];
      if ((unsigned __int64)v125 >= v131) {
        v132 = v17[9];
        v133 = (unsigned __int64)v125 - v132;
        v134 = ((__int64)v125 - v132) >> 3;
        v135 = v134 + 1;
        if ((unsigned __int64)(v134 + 1) >> 61 != 0) {
          GameRoutine_adab90();
        }
        v136 = v131 - v132;
        if (v136 >> 2 > v135) {
          v135 = v136 >> 2;
        }
        if ((unsigned __int64)v136 >= 0x7FFFFFFFFFFFFFF8LL) {
          v137 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v137 = v135;
        }
        if (v137 != 0) {
          if (v137 >> 61 != 0) {
            goto LABEL_313;
          }
          v138 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v137, 16, 0);
        }
        else {
          v138 = 0;
        }
        v139 = v138 + 8 * v137;
        v140 = v138 + v133 - 8 * v134;
        *(_QWORD*)(v138 + v133) = *(_QWORD*)v123;
        v125 = (_QWORD*)(v138 + v133 + 8);
        memcpy_alt1(v140, v132, v133);
        v17 = (__int64*)v195;
        *((_QWORD*)v195 + 9) = v140;
        *((_QWORD*)v195 + 10) = v125;
        *((_QWORD*)v195 + 11) = v139;
        if (v132 != 0) {
          v141 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v141 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v141, v132);
          v17 = (__int64*)v195;
        }
        v4 = v194;
      }
      else {
        *v125++ = *(_QWORD*)v123;
      }
      v17[10] = (__int64)v125;
      goto LABEL_237;
    }
  LABEL_238:
    v142 = (const char**)v4[12];
    v143 = (const char**)v4[13];
    if (v142 != v143) {
      v144 = (const char**)v17[13];
      do {
        v145 = (const char**)v17[12];
        if (v145 != v144) {
          v146 = *v142;
          v147 = (char*)v144 - (char*)v145 - 8;
          while (strcmp_alt1(v146, *v145) != 0) {
            ++v145;
            v147 -= 8LL;
            if (v145 == v144) {
              v17 = (__int64*)v195;
              goto LABEL_250;
            }
          }
          if (v145 + 1 != v144) {
            memmove_alt1((__int64)v145, (__int64)(v145 + 1), v147);
          }
          v17 = (__int64*)v195;
          v144 = (const char**)((char*)v145 + v147);
          *((_QWORD*)v195 + 13) = (char*)v145 + v147;
        }
      LABEL_250:
        v148 = v17[14];
        if ((unsigned __int64)v144 < v148) {
          *v144++ = *v142;
        }
        else {
          v149 = v17[12];
          v150 = (unsigned __int64)v144 - v149;
          v151 = ((__int64)v144 - v149) >> 3;
          v152 = v151 + 1;
          if ((unsigned __int64)(v151 + 1) >> 61 != 0) {
            GameRoutine_adabb0();
          }
          v153 = v148 - v149;
          if (v153 >> 2 > v152) {
            v152 = v153 >> 2;
          }
          if ((unsigned __int64)v153 >= 0x7FFFFFFFFFFFFFF8LL) {
            v154 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v154 = v152;
          }
          if (v154 != 0) {
            if (v154 >> 61 != 0) {
              goto LABEL_313;
            }
            v155 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v154, 16, 0);
          }
          else {
            v155 = 0;
          }
          v156 = v155 + 8 * v154;
          v157 = v155 + v150 - 8 * v151;
          *(_QWORD*)(v155 + v150) = *v142;
          v144 = (const char**)(v155 + v150 + 8);
          memcpy_alt1(v157, v149, v150);
          v17 = (__int64*)v195;
          *((_QWORD*)v195 + 12) = v157;
          *((_QWORD*)v195 + 13) = v144;
          *((_QWORD*)v195 + 14) = v156;
          if (v149 != 0) {
            v158 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v158 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v158, v149);
            v17 = (__int64*)v195;
          }
          v4 = v194;
        }
        ++v142;
        v17[13] = (__int64)v144;
      } while (v142 != v143);
    }
    if (v183 > 65537) {
      v159 = (const char**)v4[6];
      v160 = (const char**)v4[7];
      if (v159 != v160) {
        v161 = (const char**)v17[7];
        do {
          v162 = (const char**)v17[6];
          if (v162 != v161) {
            v163 = *v159;
            v164 = (char*)v161 - (char*)v162 - 8;
            while (strcmp_alt1(v163, *v162) != 0) {
              ++v162;
              v164 -= 8LL;
              if (v162 == v161) {
                v17 = (__int64*)v195;
                goto LABEL_279;
              }
            }
            if (v162 + 1 != v161) {
              memmove_alt1((__int64)v162, (__int64)(v162 + 1), v164);
            }
            v17 = (__int64*)v195;
            v161 = (const char**)((char*)v162 + v164);
            *((_QWORD*)v195 + 7) = (char*)v162 + v164;
          }
        LABEL_279:
          v165 = v17[8];
          if ((unsigned __int64)v161 < v165) {
            *v161++ = *v159;
          }
          else {
            v166 = v17[6];
            v167 = (unsigned __int64)v161 - v166;
            v168 = ((__int64)v161 - v166) >> 3;
            v169 = v168 + 1;
            if ((unsigned __int64)(v168 + 1) >> 61 != 0) {
              GameRoutine_adabd0();
            }
            v170 = v165 - v166;
            if (v170 >> 2 > v169) {
              v169 = v170 >> 2;
            }
            if ((unsigned __int64)v170 >= 0x7FFFFFFFFFFFFFF8LL) {
              v171 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v171 = v169;
            }
            if (v171 != 0) {
              if (v171 >> 61 != 0) {
                goto LABEL_313;
              }
              v172 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v171, 16, 0);
            }
            else {
              v172 = 0;
            }
            v173 = v172 + 8 * v171;
            v174 = v172 + v167 - 8 * v168;
            *(_QWORD*)(v172 + v167) = *v159;
            v161 = (const char**)(v172 + v167 + 8);
            memcpy_alt1(v174, v166, v167);
            v17 = (__int64*)v195;
            *((_QWORD*)v195 + 6) = v174;
            *((_QWORD*)v195 + 7) = v161;
            *((_QWORD*)v195 + 8) = v173;
            if (v166 != 0) {
              v175 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v175 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v175, v166);
              v17 = (__int64*)v195;
            }
            v4 = v194;
          }
          ++v159;
          v17[7] = (__int64)v161;
        } while (v159 != v160);
      }
    }
  LABEL_4:
    v4 = (_QWORD*)*v4;
    if (v4 != nullptr) {
      continue;
    }
    break;
  }
  v176 = v196_.v197;
  while (v176 != nullptr) {
    v178 = (__int64)v176;
    v176 = (_QWORD*)*v176;
    GameRoutine_adac20_alt1((_QWORD*)(v178 + 40));
    if ((*(_BYTE*)(v178 + 16) & 1) != 0) {
      v179 = *(_QWORD*)(v178 + 32);
      if (v179 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v180 = 128;
        }
        else {
          v180 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v180,
                                           v179);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
      v177 = 128;
    }
    else {
      v177 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v177, v178);
  }
LABEL_307:
  v181 = v196_.v196[0];
  v196_.v196[0] = 0;
  if (v181 != 0) {
    v182 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v182 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v182, v181);
  }
}

__int64 ResFile_ad8b40(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 result;
  const char* v6;
  int v7;
  __int64* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  const char* v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  float v40;
  _BOOL8 v41;
  unsigned __int64 v42;
  __int64* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 primeEm;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  _QWORD* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  unsigned __int64 v70;
  __int64 v71;
  _QWORD* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  _QWORD* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  const char* v97;
  __int64 v98;
  int v99;
  int v100;
  __int64 v101;
  __int64 v102;
  unsigned int v103;
  int v104;
  int v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  char* v108;
  __int64 v109;
  int v110;
  char* v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  _QWORD* v117;
  _QWORD* v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  _QWORD* v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  float v131;
  float v132;
  _BOOL8 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  _QWORD* v143;
  int v144;
  unsigned __int64 v145;
  __int64 v146;
  __int64 v147;
  _DWORD* v148;
  int i;
  unsigned __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  unsigned __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  __int64 v164;
  const char* v165;
  __int64* v166;
  int v167;
  __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  __int64 v171;
  char* v172;
  __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  unsigned __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  const char* v188;
  __int64* v189;
  int j;
  unsigned __int64 v191;
  __int64 v192;
  char* v193;
  __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  unsigned __int64 v197;
  __int64 v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  __int64 v201;
  __int64 v202;
  int k;
  unsigned __int64 v204;
  unsigned __int64 v205;
  char* v206;
  __int64 v207;
  int v208;
  __int64 v209;
  __int64 v210;
  _QWORD* v211;
  int v212;
  _QWORD* v214;
  const char* v215;
  int v216;
  __int64 v217;
  __int64 v218;
  int v219;
  const char* v220;
  struct {
    __int64 v221;
    unsigned __int64 v222;
    char* v223;
  } v221_;
  struct {
    __int64 v224;
    unsigned __int64 v225;
    char* v226;
    int v227;
  } v224_;

  v3 = *(_QWORD*)(a2 + 592);
  result = *(unsigned int*)v3;
  *(_DWORD*)(a1 + 72) = result;
  if (*(int*)(v3 + 4) >= 1) {
    v6 = (const char*)(v3 + 8);
    v7 = 0;
    v211 = (_QWORD*)(a3 + 16);
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v215 = (const char*)v3;
    while (1) {
      v9 = strlen_alt1(v6);
      if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_378:
        String_60a1d0();
      }
      v10 = v9;
      v220 = v6;
      v212 = v7;
      if (v9 >= 0x17) {
        break;
      }
      v11 = (char*)&v224_.v224 + 1;
      LOBYTE(v224_.v224) = 2 * v9;
      if (v9 != 0) {
        goto LABEL_12;
      }
    LABEL_13:
      v11[v10] = 0;
      v15 = v224_.v224 & 1;
      if (v15 != 0) {
        v16 = v224_.v226;
      }
      else {
        v16 = (char*)&v224_.v224 + 1;
      }
      if ((v224_.v224 & 1) != 0) {
        v17 = v224_.v225;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v224_.v224 >> 1;
      }
      v18 = std___1___hash_memory_alt1((__int64)v16, v17);
      v19 = v18;
      v20 = *(_QWORD*)(a3 + 8);
      if (v20 == 0) {
        goto LABEL_53;
      }
      v21 = v20 - 1;
      if ((v20 & (v20 - 1)) != 0) {
        v8 = (__int64*)v18;
        if (v18 >= v20) {
          v8 = (__int64*)(v18 % v20);
        }
      }
      else {
        v8 = (__int64*)(v21 & v18);
      }
      v22 = *(_QWORD**)(*(_QWORD*)a3 + 8LL * (_QWORD)v8);
      if (v22 == nullptr || (v23 = (_QWORD*)*v22, *v22 == 0)) {
      LABEL_53:
        v34 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 248, 16, 0);
        v35 = v224_.v224;
        v36 = v224_.v225;
        v37 = a3;
        v23 = v34;
        v34[18] = 0;
        v34[19] = 0;
        v34[26] = 0;
        v34[27] = 0;
        v33 = v220;
        *v34 = 0;
        v34[1] = v19;
        v224_.v224 = 0;
        v224_.v225 = 0;
        v34[6] = 0;
        v34[7] = 0;
        v34[8] = 0;
        v34[9] = 0;
        v34[10] = 0;
        v34[11] = 0;
        v34[12] = 0;
        v34[13] = 0;
        v38 = *(float*)(a3 + 32);
        v34[2] = v35;
        v34[3] = v36;
        v39 = (__int64)v224_.v226;
        v224_.v226 = nullptr;
        v34[14] = 0;
        v34[15] = 0;
        v34[16] = 0;
        v34[17] = 0;
        v34[20] = 0;
        v34[21] = 0;
        v34[22] = 0;
        v34[23] = 0;
        v34[24] = 0;
        v34[25] = 0;
        v34[20] = 0;
        v34[21] = 0;
        v34[22] = 0;
        v34[23] = 0;
        v34[24] = 0;
        v34[25] = 0;
        v34[26] = 0;
        v34[28] = 0;
        v34[29] = 0;
        v34[30] = 0;
        v34[4] = v39;
        v34[5] = 0;
        *((_DWORD*)v34 + 38) = 1065353216;
        *((_DWORD*)v34 + 54) = 1065353216;
        v40 = (float)(unsigned __int64)(*(_QWORD*)(a3 + 24) + 1LL);
        if (v20 != 0 && (float)(v38 * (float)v20) >= v40) {
        LABEL_120:
          v67 = *(_QWORD*)v37;
          v68 = *(_QWORD**)(*(_QWORD*)v37 + 8LL * (_QWORD)v8);
          if (v68 != nullptr) {
            *v23 = *v68;
            *v68 = v23;
            v32 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          else {
            v69 = (_QWORD*)*v211;
            *v211 = v23;
            *v23 = v69;
            *(_QWORD*)(v67 + 8LL * (_QWORD)v8) = v211;
            v32 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (*v23 != 0) {
              v70 = *(_QWORD*)(*v23 + 8LL);
              if ((v20 & (v20 - 1)) != 0) {
                if (v70 >= v20) {
                  v70 %= v20;
                }
              }
              else {
                v70 &= v20 - 1;
              }
              *(_QWORD*)(*(_QWORD*)v37 + 8 * v70) = v23;
            }
          }
          ++*(_QWORD*)(v37 + 24);
          if ((v224_.v224 & 1) != 0) {
            goto LABEL_129;
          }
          goto LABEL_133;
        }
        v41 = v20 < 3 || (v20 & (v20 - 1)) != 0;
        v42 = v41 | (2 * v20);
        v43 = (__int64*)fw_memory_g_heap_manager_ptr;
        v44 = vcvtps_u64_f32(v40 / v38);
        if (v42 <= v44) {
          v45 = v44;
        }
        else {
          v45 = v42;
        }
        if (v45 == 1) {
          v45 = 2;
        }
        else if ((v45 & (v45 - 1)) != 0) {
          primeEm = std___1___next_prime_alt1(v45);
          v37 = a3;
          v45 = primeEm;
        }
        v47 = *(_QWORD*)(v37 + 8);
        if (v45 <= v47) {
          if (v45 < v47) {
            v52 = vcvtps_u64_f32((float)*(unsigned __int64*)(v37 + 24) /
                                 *(float*)(v37 + 32));
            if (v47 < 3 || (v47 & (v47 - 1)) != 0) {
              v52 = std___1___next_prime_alt1(v52);
              v37 = a3;
            }
            else {
              v53 = 1LL << (-(char)__clz(v52 - 1) & 63);
              if (v52 >= 2) {
                v52 = v53;
              }
            }
            if (v45 <= v52) {
              v45 = v52;
            }
            if (v45 < v47) {
              if (v45 != 0) {
                goto LABEL_66;
              }
              v65 = *(_QWORD*)v37;
              *(_QWORD*)v37 = 0;
              if (v65 != 0) {
                v66 = 128;
                if (*(_QWORD*)(*v43 + 200) == 0) {
                  v66 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v43 + v66, v65);
              }
              v37 = a3;
              *(_QWORD*)(a3 + 8) = 0;
            }
          }
          goto LABEL_115;
        }
      LABEL_66:
        if (v45 >> 61 != 0) {
        LABEL_377:
          GameRoutine_60a210();
        }
        v48 = fw_memory_HeapManager_Allocate_alt1(*v43, 8 * v45, 16, 0);
        v49 = *(_QWORD*)a3;
        *(_QWORD*)a3 = v48;
        if (v49 != 0) {
          v50 = 128;
          if (*(_QWORD*)(*v43 + 200) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v43 + v50, v49);
        }
        v37 = a3;
        *(_QWORD*)(a3 + 8) = v45;
        if (v45 >= 8) {
          v51 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)a3 + 8 * v51) = 0;
            *(_QWORD*)(*(_QWORD*)a3 + 8 * v51 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)a3 + 8 * v51 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)a3 + 8 * v51 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)a3 + 8 * v51 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)a3 + 8 * v51 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)a3 + 8 * v51 + 48) = 0;
            v54 = *(_QWORD*)a3 + 8 * v51;
            v51 += 8;
            *(_QWORD*)(v54 + 56) = 0;
          } while ((v45 & 0x1FFFFFFFFFFFFFF8LL) != v51);
        }
        else {
          v51 = 0;
        }
        v55 = v45 & 7;
        if ((v45 & 7) != 0) {
          v56 = 8 * v51;
          do {
            --v55;
            *(_QWORD*)(*(_QWORD*)a3 + v56) = 0;
            v56 += 8;
          } while (v55 != 0);
        }
        v57 = (_QWORD*)*v211;
        if (*v211 == 0) {
          goto LABEL_115;
        }
        v58 = v57[1];
        v59 = v45 - 1;
        if ((v45 & (v45 - 1)) == 0) {
          v62 = v58 & v59;
          *(_QWORD*)(*(_QWORD*)a3 + 8 * v62) = v211;
          while (1) {
            v63 = (_QWORD*)*v57;
            if (*v57 == 0) {
              break;
            }
            v64 = v63[1] & v59;
            if (v64 == v62) {
              v57 = (_QWORD*)*v57;
            }
            else if (*(_QWORD*)(*(_QWORD*)a3 + 8 * v64) != 0) {
              *v57 = *v63;
              *v63 = **(_QWORD**)(*(_QWORD*)a3 + 8 * v64);
              **(_QWORD**)(*(_QWORD*)a3 + 8 * v64) = v63;
            }
            else {
              *(_QWORD*)(*(_QWORD*)a3 + 8 * v64) = v57;
              v57 = v63;
              v62 = v64;
            }
          }
          goto LABEL_115;
        }
        if (v58 >= v45) {
          v58 %= v45;
        }
        *(_QWORD*)(*(_QWORD*)a3 + 8 * v58) = v211;
        v60 = (_QWORD*)*v57;
        if (*v57 == 0) {
        LABEL_115:
          v20 = *(_QWORD*)(v37 + 8);
          if ((v20 & (v20 - 1)) != 0) {
            v33 = v220;
            if (v19 >= v20) {
              v8 = (__int64*)(v19 % v20);
            }
            else {
              v8 = (__int64*)v19;
            }
          }
          else {
            v33 = v220;
            v8 = (__int64*)((v20 - 1) & v19);
          }
          goto LABEL_120;
        }
        while (2) {
          v61 = v60[1];
          if (v61 >= v45) {
            v61 %= v45;
          }
          if (v61 != v58) {
            if (*(_QWORD*)(*(_QWORD*)a3 + 8 * v61) == 0) {
              *(_QWORD*)(*(_QWORD*)a3 + 8 * v61) = v57;
            LABEL_92:
              v57 = v60;
              v60 = (_QWORD*)*v60;
              v58 = v61;
              if (v60 == nullptr) {
                goto LABEL_115;
              }
              continue;
            }
            *v57 = *v60;
            *v60 = **(_QWORD**)(*(_QWORD*)a3 + 8 * v61);
            **(_QWORD**)(*(_QWORD*)a3 + 8 * v61) = v60;
            v60 = v57;
          }
          break;
        }
        v61 = v58;
        goto LABEL_92;
      }
      if ((v20 & v21) == 0) {
        while (1) {
          v28 = v23[1];
          if (v28 == v19) {
            v29 = *((unsigned __int8*)v23 + 16);
            v30 = v23[3];
            if ((v29 & 1) == 0) {
              v30 = v29 >> 1;
            }
            if (v30 == v17) {
              v31 = (v29 & 1) != 0 ? v23[4] : (__int64)v23 + 17;
              if (memcmp_alt1(v31, (__int64)v16, v17) == 0) {
                goto LABEL_51;
              }
            }
          }
          else if ((__int64*)(v28 & v21) != v8) {
            goto LABEL_53;
          }
          v23 = (_QWORD*)*v23;
          if (v23 == nullptr) {
            goto LABEL_53;
          }
        }
      }
      while (1) {
        v24 = v23[1];
        if (v24 == v19) {
          break;
        }
        if (v24 >= v20) {
          v24 %= v20;
        }
        if ((__int64*)v24 != v8) {
          goto LABEL_53;
        }
      LABEL_29:
        v23 = (_QWORD*)*v23;
        if (v23 == nullptr) {
          goto LABEL_53;
        }
      }
      v25 = *((unsigned __int8*)v23 + 16);
      v26 = v23[3];
      if ((v25 & 1) == 0) {
        v26 = v25 >> 1;
      }
      if (v26 != v17) {
        goto LABEL_29;
      }
      v27 = (v25 & 1) != 0 ? v23[4] : (__int64)v23 + 17;
      if (memcmp_alt1(v27, (__int64)v16, v17) != 0) {
        goto LABEL_29;
      }
    LABEL_51:
      v32 = &fw_memory_g_heap_manager;
      v33 = v220;
      if (v15 != 0) {
      LABEL_129:
        if (v224_.v226 != nullptr) {
          v71 = 128;
          if (*(_QWORD*)(*v32 + 200) == 0) {
            v71 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v32 + v71, (__int64)v224_.v226);
        }
      }
    LABEL_133:
      if (v23[18] != 0) {
        v72 = (_QWORD*)v23[17];
        while (v72 != nullptr) {
          v76 = (__int64)v72;
          v72 = (_QWORD*)*v72;
          if ((*(_BYTE*)(v76 + 16) & 1) != 0 && *(_QWORD*)(v76 + 32) != 0) {
            v77 = *v32;
            v78 = v76;
            v79 = *(_QWORD*)(v76 + 32);
            v80 = 128;
            if (*(_QWORD*)(v77 + 200) == 0) {
              v80 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v77 + v80, v79);
            v76 = v78;
            v32 = &fw_memory_g_heap_manager;
          }
          v75 = 128;
          if (*(_QWORD*)(*v32 + 200) == 0) {
            v75 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v32 + v75, v76);
        }
        v73 = v23[16];
        v23[17] = 0;
        if (v73 != 0) {
          if (v73 >= 8) {
            v74 = 0;
            do {
              *(_QWORD*)(v23[15] + 8 * v74) = 0;
              *(_QWORD*)(v23[15] + 8 * v74 + 8) = 0;
              *(_QWORD*)(v23[15] + 8 * v74 + 16) = 0;
              *(_QWORD*)(v23[15] + 8 * v74 + 24) = 0;
              *(_QWORD*)(v23[15] + 8 * v74 + 32) = 0;
              *(_QWORD*)(v23[15] + 8 * v74 + 40) = 0;
              *(_QWORD*)(v23[15] + 8 * v74 + 48) = 0;
              v81 = v23[15] + 8 * v74;
              v74 += 8;
              *(_QWORD*)(v81 + 56) = 0;
            } while ((v73 & 0xFFFFFFFFFFFFFFF8LL) != v74);
          }
          else {
            v74 = 0;
          }
          v82 = v73 & 7;
          if (v82 != 0) {
            v83 = 8 * v74;
            do {
              --v82;
              *(_QWORD*)(v23[15] + v83) = 0;
              v83 += 8;
            } while (v82 != 0);
          }
        }
        v23[18] = 0;
      }
      if (v23[26] != 0) {
        v84 = (_QWORD*)v23[25];
        while (v84 != nullptr) {
          v88 = (__int64)v84;
          v84 = (_QWORD*)*v84;
          if ((*(_BYTE*)(v88 + 16) & 1) != 0 && *(_QWORD*)(v88 + 32) != 0) {
            v89 = *v32;
            v90 = v88;
            v91 = *(_QWORD*)(v88 + 32);
            v92 = 128;
            if (*(_QWORD*)(v89 + 200) == 0) {
              v92 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v89 + v92, v91);
            v88 = v90;
            v32 = &fw_memory_g_heap_manager;
          }
          v87 = 128;
          if (*(_QWORD*)(*v32 + 200) == 0) {
            v87 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v32 + v87, v88);
        }
        v85 = v23[24];
        v23[25] = 0;
        if (v85 != 0) {
          if (v85 >= 8) {
            v86 = 0;
            do {
              *(_QWORD*)(v23[23] + 8 * v86) = 0;
              *(_QWORD*)(v23[23] + 8 * v86 + 8) = 0;
              *(_QWORD*)(v23[23] + 8 * v86 + 16) = 0;
              *(_QWORD*)(v23[23] + 8 * v86 + 24) = 0;
              *(_QWORD*)(v23[23] + 8 * v86 + 32) = 0;
              *(_QWORD*)(v23[23] + 8 * v86 + 40) = 0;
              *(_QWORD*)(v23[23] + 8 * v86 + 48) = 0;
              v93 = v23[23] + 8 * v86;
              v86 += 8;
              *(_QWORD*)(v93 + 56) = 0;
            } while ((v85 & 0xFFFFFFFFFFFFFFF8LL) != v86);
          }
          else {
            v86 = 0;
          }
          v94 = v85 & 7;
          if (v94 != 0) {
            v95 = 8 * v86;
            do {
              --v94;
              *(_QWORD*)(v23[23] + v95) = 0;
              v95 += 8;
            } while (v94 != 0);
          }
        }
        v23[26] = 0;
      }
      v23[21] = v23[20];
      v23[29] = v23[28];
      v23[5] = v33 + 32;
      v96 = 96;
      if (*(int*)v3 < 65538) {
        v96 = 92;
      }
      v97 = v33;
      v98 = (__int64)&v33[v96];
      if (*((int*)v97 + 20) >= 1) {
        v99 = 0;
        v214 = v23 + 25;
        while (1) {
          v100 = *(_DWORD*)(v98 + 32);
          v102 = v23[20];
          v101 = v23[21];
          v103 = v100 - 2;
          v104 = v100 - 1;
          if (v103 >= 3) {
            v105 = 0;
          }
          else {
            v105 = v104;
          }
          v106 = strlen_alt1((const char*)v98);
          if (v106 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_378;
          }
          v107 = v106;
          v219 = v105;
          v216 = v99;
          v217 = v102;
          v218 = v101;
          if (v106 >= 0x17) {
            if ((v106 | 7) == 0x17) {
              v109 = 26;
            }
            else {
              v109 = (v106 | 7) + 1;
            }
            v108 =
                (char*)fw_memory_HeapManager_Allocate_alt1(*v32, v109, 16, 0);
            v224_.v225 = v107;
            v224_.v226 = v108;
            v224_.v224 = v109 | 1;
          }
          else {
            v108 = (char*)&v224_.v224 + 1;
            LOBYTE(v224_.v224) = 2 * v106;
            if (v106 == 0) {
              goto LABEL_188;
            }
          }
          memmove_alt1((__int64)v108, v98, v107);
        LABEL_188:
          v108[v107] = 0;
          v110 = v224_.v224 & 1;
          if (v110 != 0) {
            v111 = v224_.v226;
          }
          else {
            v111 = (char*)&v224_.v224 + 1;
          }
          if ((v224_.v224 & 1) != 0) {
            v112 = v224_.v225;
          }
          else {
            v112 = (unsigned __int64)(unsigned __int8)v224_.v224 >> 1;
          }
          v113 = std___1___hash_memory_alt1((__int64)v111, v112);
          v114 = v23[24];
          v115 = v113;
          if (v114 == 0) {
            goto LABEL_228;
          }
          v116 = v114 - 1;
          if ((v114 & (v114 - 1)) != 0) {
            v3 = v113;
            if (v113 >= v114) {
              v3 = v113 % v114;
            }
          }
          else {
            v3 = v116 & v113;
          }
          v117 = *(_QWORD**)(v23[23] + 8 * v3);
          if (v117 == nullptr || (v118 = (_QWORD*)*v117, *v117 == 0)) {
          LABEL_227:
            v32 = &fw_memory_g_heap_manager;
          LABEL_228:
            v127 =
                (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v32, 48, 16, 0);
            v129 = v224_.v224;
            v128 = v224_.v225;
            *v127 = 0;
            v127[1] = v115;
            v118 = v127;
            v224_.v224 = 0;
            v127[2] = v129;
            v127[3] = v128;
            v130 = (__int64)v224_.v226;
            v224_.v225 = 0;
            v224_.v226 = nullptr;
            v127[4] = v130;
            v127[5] = 0;
            v131 = *((float*)v23 + 54);
            v132 = (float)(unsigned __int64)(v23[26] + 1LL);
            if (v114 == 0 || (float)(v131 * (float)v114) < v132) {
              v133 = v114 < 3 || (v114 & (v114 - 1)) != 0;
              v134 = v133 | (2 * v114);
              v135 = vcvtps_u64_f32(v132 / v131);
              if (v134 <= v135) {
                v136 = v135;
              }
              else {
                v136 = v134;
              }
              if (v136 == 1) {
                v136 = 2;
              }
              else if ((v136 & (v136 - 1)) != 0) {
                v136 = std___1___next_prime_alt1(v136);
              }
              v137 = v23[24];
              if (v136 > v137) {
                goto LABEL_241;
              }
              if (v136 < v137) {
                v138 = vcvtps_u64_f32((float)(unsigned __int64)v23[26] /
                                      *((float*)v23 + 54));
                if (v137 < 3 || (v137 & (v137 - 1)) != 0) {
                  v138 = std___1___next_prime_alt1(v138);
                }
                else {
                  v139 = 1LL << (-(char)__clz(v138 - 1) & 63);
                  if (v138 >= 2) {
                    v138 = v139;
                  }
                }
                if (v136 <= v138) {
                  v136 = v138;
                }
                if (v136 < v137) {
                LABEL_241:
                  GameRoutine_adb120_alt1(v23 + 23, v136);
                }
              }
              v114 = v23[24];
              if ((v114 & (v114 - 1)) != 0) {
                if (v115 >= v114) {
                  v3 = v115 % v114;
                }
                else {
                  v3 = v115;
                }
              }
              else {
                v3 = (v114 - 1) & v115;
              }
            }
            v140 = v23[23];
            v142 = v217;
            v141 = v218;
            v143 = *(_QWORD**)(v140 + 8 * v3);
            if (v143 != nullptr) {
              v3 = (unsigned __int64)v215;
              v144 = v219;
              *v118 = *v143;
              *v143 = v118;
            }
            else {
              *v118 = *v214;
              *v214 = v118;
              *(_QWORD*)(v140 + 8 * v3) = v214;
              v3 = (unsigned __int64)v215;
              v144 = v219;
              if (*v118 != 0) {
                v145 = *(_QWORD*)(*v118 + 8LL);
                if ((v114 & (v114 - 1)) != 0) {
                  if (v145 >= v114) {
                    v145 %= v114;
                  }
                }
                else {
                  v145 &= v114 - 1;
                }
                *(_QWORD*)(v23[23] + 8 * v145) = v118;
              }
            }
            ++v23[26];
            v110 = v224_.v224 & 1;
            goto LABEL_266;
          }
          if ((v114 & v116) != 0) {
            v32 = &fw_memory_g_heap_manager;
            while (1) {
              v119 = v118[1];
              if (v119 == v115) {
                v120 = *((unsigned __int8*)v118 + 16);
                v121 = v118[3];
                if ((v120 & 1) == 0) {
                  v121 = v120 >> 1;
                }
                if (v121 == v112) {
                  v122 = (v120 & 1) != 0 ? v118[4] : (__int64)v118 + 17;
                  if (memcmp_alt1(v122, (__int64)v111, v112) == 0) {
                    v3 = (unsigned __int64)v215;
                    goto LABEL_290;
                  }
                }
              }
              else {
                if (v119 >= v114) {
                  v119 %= v114;
                }
                if (v119 != v3) {
                  goto LABEL_228;
                }
              }
              v118 = (_QWORD*)*v118;
              if (v118 == nullptr) {
                goto LABEL_228;
              }
            }
          }
          while (1) {
            v123 = v118[1];
            if (v123 != v115) {
              if ((v123 & v116) != v3) {
                goto LABEL_227;
              }
              goto LABEL_217;
            }
            v124 = *((unsigned __int8*)v118 + 16);
            v125 = v118[3];
            if ((v124 & 1) == 0) {
              v125 = v124 >> 1;
            }
            if (v125 == v112) {
              v126 = (v124 & 1) != 0 ? v118[4] : (__int64)v118 + 17;
              if (memcmp_alt1(v126, (__int64)v111, v112) == 0) {
                break;
              }
            }
          LABEL_217:
            v118 = (_QWORD*)*v118;
            if (v118 == nullptr) {
              goto LABEL_227;
            }
          }
          v3 = (unsigned __int64)v215;
          v32 = (__int64*)fw_memory_g_heap_manager_ptr;
        LABEL_290:
          v144 = v219;
          v142 = v217;
          v141 = v218;
        LABEL_266:
          *((_DWORD*)v118 + 10) = v144;
          *((_DWORD*)v118 + 11) = (unsigned __int64)(v141 - v142) >> 2;
          if (v110 != 0 && v224_.v226 != nullptr) {
            v146 = 128;
            if (*(_QWORD*)(*v32 + 200) == 0) {
              v146 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v32 + v146,
                                               (__int64)v224_.v226);
          }
          v147 = v98 + 36;
          if (*(int*)(v98 + 32) >= 1) {
            v148 = (_DWORD*)v23[21];
            for (i = 0; i < (signed __int32)*(_DWORD*)(v98 + 32); ++i) {
              v150 = v23[22];
              if ((unsigned __int64)v148 < v150) {
                *v148++ = *(_DWORD*)v147;
              }
              else {
                v151 = v23[20];
                v152 = (unsigned __int64)v148 - v151;
                v153 = ((__int64)v148 - v151) >> 2;
                v154 = v153 + 1;
                if ((unsigned __int64)(v153 + 1) >> 62 != 0) {
                  GameRoutine_a78a90();
                }
                v155 = v150 - v151;
                if (v155 >> 1 > v154) {
                  v154 = v155 >> 1;
                }
                if ((unsigned __int64)v155 >= 0x7FFFFFFFFFFFFFFCLL) {
                  v156 = 0x3FFFFFFFFFFFFFFFLL;
                }
                else {
                  v156 = v154;
                }
                if (v156 != 0) {
                  if (v156 >> 62 != 0) {
                    goto LABEL_377;
                  }
                  v157 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v156, 16, 0);
                }
                else {
                  v157 = 0;
                }
                v158 = v157 + 4 * v156;
                v159 = v157 + v152 - 4 * v153;
                *(_DWORD*)(v157 + v152) = *(_DWORD*)v147;
                v148 = (_DWORD*)(v157 + v152 + 4);
                memcpy_alt1(v159, v151, v152);
                v23[20] = v159;
                v23[21] = v148;
                v23[22] = v158;
                if (v151 != 0) {
                  v160 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v160 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v160, v151);
                }
              }
              v23[21] = v148;
              v147 += 4;
            }
          }
          v98 = v147;
          v32 = (__int64*)fw_memory_g_heap_manager_ptr;
          v99 = v216 + 1;
          if (v216 + 1 >= (signed __int32)*((_DWORD*)v220 + 20)) {
            goto LABEL_292;
          }
        }
      }
      v147 = v98;
    LABEL_292:
      v161 = v23[9];
      v23[10] = v161;
      v162 = *((int*)v220 + 21);
      if (v162 > (v23[11] - v161) >> 3) {
        if ((v162 & 0x80000000) != 0) {
        LABEL_379:
          GameRoutine_adab90();
        }
        v163 = fw_memory_HeapManager_Allocate_alt1(*v32, 8 * v162, 16, 0);
        v23[9] = v163;
        v23[10] = v163;
        v23[11] = v163 + 8 * v162;
        if (v161 != 0) {
          v164 = 128;
          if (*(_QWORD*)(*v32 + 200) == 0) {
            v164 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v32 + v164, v161);
        }
      }
      v165 = v220;
      if (*((int*)v220 + 21) >= 1) {
        v166 = (__int64*)v23[10];
        v167 = 0;
        do {
          v170 = v23[11];
          if ((unsigned __int64)v166 < v170) {
            *v166++ = v147;
          }
          else {
            v171 = v23[9];
            v172 = (char*)v166 - v171;
            v173 = ((__int64)v166 - v171) >> 3;
            v174 = v173 + 1;
            if ((unsigned __int64)(v173 + 1) >> 61 != 0) {
              goto LABEL_379;
            }
            v175 = v170 - v171;
            if (v175 >> 2 > v174) {
              v174 = v175 >> 2;
            }
            if ((unsigned __int64)v175 >= 0x7FFFFFFFFFFFFFF8LL) {
              v176 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v176 = v174;
            }
            if (v176 != 0) {
              if (v176 >> 61 != 0) {
                goto LABEL_377;
              }
              v177 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v176, 16, 0);
            }
            else {
              v177 = 0;
            }
            v178 = v177 + 8 * v176;
            v179 = (unsigned __int64)v166 - v171;
            v180 = (__int64)&v172[v177 + -8 * v173];
            *(_QWORD*)&v172[v177] = v147;
            v166 = (__int64*)&v172[v177 + 8];
            memcpy_alt1(v180, v171, v179);
            v23[9] = v180;
            v23[10] = v166;
            v23[11] = v178;
            if (v171 != 0) {
              v181 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v181 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v181, v171);
            }
            v165 = v220;
          }
          v23[10] = v166;
          ++v167;
          v168 = 128;
          if (*(_DWORD*)v3 < 0x10001u) {
            v168 = 120;
          }
          v169 = 60;
          if (*(int*)v3 >= 1) {
            v169 = v168;
          }
          v147 += v169;
        } while (v167 < (signed __int32)*((_DWORD*)v165 + 21));
      }
      v182 = v23[12];
      v183 = v23[14];
      v23[13] = v182;
      v184 = *((int*)v165 + 22);
      v185 = fw_memory_g_heap_manager_ptr;
      if (v184 > (v183 - v182) >> 3) {
        if ((v184 & 0x80000000) != 0) {
        LABEL_380:
          GameRoutine_adabb0();
        }
        v186 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v184, 16, 0);
        v23[12] = v186;
        v23[13] = v186;
        v23[14] = v186 + 8 * v184;
        if (v182 != 0) {
          v187 = 128;
          if (*(_QWORD*)(*(_QWORD*)v185 + 200LL) == 0) {
            v187 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v185 + v187, v182);
        }
      }
      v188 = v220;
      if (*((int*)v220 + 22) >= 1) {
        v189 = (__int64*)v23[13];
        for (j = 0; j < (signed __int32)*((_DWORD*)v188 + 22); ++j) {
          v191 = v23[14];
          if ((unsigned __int64)v189 < v191) {
            *v189++ = v147;
          }
          else {
            v192 = v23[12];
            v193 = (char*)v189 - v192;
            v194 = ((__int64)v189 - v192) >> 3;
            v195 = v194 + 1;
            if ((unsigned __int64)(v194 + 1) >> 61 != 0) {
              goto LABEL_380;
            }
            v196 = v191 - v192;
            if (v196 >> 2 > v195) {
              v195 = v196 >> 2;
            }
            if ((unsigned __int64)v196 >= 0x7FFFFFFFFFFFFFF8LL) {
              v197 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v197 = v195;
            }
            if (v197 != 0) {
              if (v197 >> 61 != 0) {
                goto LABEL_377;
              }
              v198 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v197, 16, 0);
            }
            else {
              v198 = 0;
            }
            v199 = v198 + 8 * v197;
            v200 = (unsigned __int64)v189 - v192;
            v201 = (__int64)&v193[v198 + -8 * v194];
            *(_QWORD*)&v193[v198] = v147;
            v189 = (__int64*)&v193[v198 + 8];
            memcpy_alt1(v201, v192, v200);
            v23[12] = v201;
            v23[13] = v189;
            v23[14] = v199;
            if (v192 != 0) {
              v202 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v202 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v202, v192);
            }
            v188 = v220;
          }
          v23[13] = v189;
          v147 += 20;
        }
      }
      if (*(int*)v3 > 65537 && *((int*)v188 + 23) >= 1) {
        for (k = 0; k < (signed __int32)*((_DWORD*)v220 + 23); ++k) {
          v204 = strlen_alt1((const char*)v147);
          if (v204 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_378;
          }
          v205 = v204;
          if (v204 >= 0x17) {
            if ((v204 | 7) == 0x17) {
              v207 = 26;
            }
            else {
              v207 = (v204 | 7) + 1;
            }
            v206 = (char*)fw_memory_HeapManager_Allocate_alt1(
                fw_memory_g_heap_manager, v207, 16, 0);
            v221_.v222 = v205;
            v221_.v223 = v206;
            v221_.v221 = v207 | 1;
          }
          else {
            v206 = (char*)&v221_.v221 + 1;
            LOBYTE(v221_.v221) = 2 * v204;
            if (v204 == 0) {
              goto LABEL_361;
            }
          }
          memmove_alt1((__int64)v206, v147, v205);
        LABEL_361:
          v206[v205] = 0;
          v208 = *(_DWORD*)(v147 + 32);
          if ((v221_.v221 & 1) != 0) {
            fw_text_String_CopyTerminated(&v224_.v224, (__int64)v221_.v223,
                                          v221_.v222);
          }
          else {
            v224_.v224 = v221_.v221;
            v224_.v225 = v221_.v222;
            v224_.v226 = v221_.v223;
          }
          v224_.v227 = v208;
          ResFile_adb3c0((float*)v23 + 30, (unsigned __int8*)&v224_.v224,
                         (char*)&v224_.v224);
          if ((v224_.v224 & 1) != 0 && v224_.v226 != nullptr) {
            v209 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v209 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v209,
                (__int64)v224_.v226);
          }
          if ((v221_.v221 & 1) != 0 && v221_.v223 != nullptr) {
            v210 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v210 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v210,
                (__int64)v221_.v223);
          }
          v147 += 36;
        }
      }
      v6 = (const char*)v147;
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
      v7 = v212 + 1;
      if (v212 + 1 >= (signed __int32)*(_DWORD*)(v3 + 4)) {
        return *(unsigned int*)v3;
      }
    }
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v13 = fw_memory_HeapManager_Allocate_alt1(*v8, v12, 16, 0);
    v14 = v12 | 1;
    v6 = v220;
    v11 = (char*)v13;
    v224_.v225 = v10;
    v224_.v226 = (char*)v13;
    v224_.v224 = v14;
  LABEL_12:
    memmove_alt1((__int64)v11, (__int64)v6, v10);
    goto LABEL_13;
  }
  return result;
}

__int64 g3d_ResFile_prepareAsyncLoading_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  unsigned int v2;

  v1 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(v1 + 164) & 1) == 0) {
    result = GameRoutine_ad7390(*(_QWORD*)(result + 8));
    if ((result & 1) != 0) {
      if (*(_QWORD*)(v1 + 16) != 0) {
        GameRoutine_ad7640((_QWORD*)v1);
        result = GameRoutine_ad8640(v1);
      }
      *(_BYTE*)(v1 + 164) = 1;
      v2 = atomic_load((unsigned int*)(v1 + 160));
      if (v2 == 0) {
        return GameRoutine_ad8980(v1);
      }
    }
  }
  return result;
}

__int64 g3d_ResFile_prepareAsyncLoading_lambda1_Invoke(__int64 a1)
{
  __int64 result;
  unsigned int v2;

  result = *(_QWORD*)(a1 + 8);
  atomic_fetch_add((atomic_uint* volatile)(result + 160), 0xFFFFFFFF);
  if (*(_BYTE*)(result + 164) == 1) {
    v2 = atomic_load((unsigned int*)(result + 160));
    if (v2 == 0) {
      return GameRoutine_ad8980(result);
    }
  }
  return result;
}

_QWORD* ResFile_adb3c0(float* a1, unsigned __int8* a2, char* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  char v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  _BOOL8 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 primeEm;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *((_QWORD*)a1 + 1);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? (_QWORD*)v16[4]
                                     : (_QWORD*)((char*)v16 + 17);
                if ((unsigned int)memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 =
                  (v18 & 1) != 0 ? (_QWORD*)v16[4] : (_QWORD*)((char*)v16 + 17);
              if ((unsigned int)memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v26 = *a3;
  v16 = v25;
  *v25 = 0;
  v25[1] = v13;
  if ((v26 & 1) != 0) {
    fw_text_String_CopyTerminated(v25 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v27 = *((_QWORD*)a3 + 1);
    v25[2] = *(_QWORD*)a3;
    v25[3] = v27;
    v25[4] = *((_QWORD*)a3 + 2);
  }
  v28 = a1[8];
  *((_DWORD*)v16 + 10) = *((_DWORD*)a3 + 6);
  v29 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v12 == 0 || (float)(v28 * (float)v12) < v29) {
    v30 = v29 / v28;
    v31 = true;
    if (v12 >= 3) {
      v31 = (v12 & (v12 - 1)) != 0;
    }
    v32 = v31 | (2 * v12);
    v33 = vcvtps_u64_f32(v30);
    if (v32 <= v33) {
      primeEm = v33;
    }
    else {
      primeEm = v32;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v35 = *((_QWORD*)a1 + 1);
    if (primeEm > v35) {
      goto LABEL_56;
    }
    if (primeEm < v35) {
      v36 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v35 < 3 || (v35 & (v35 - 1)) != 0) {
        v36 = std___1___next_prime(v36);
      }
      else {
        v37 = 1LL << (-(char)__clz(v36 - 1) & 63);
        if (v36 >= 2) {
          v36 = v37;
        }
      }
      if (primeEm <= v36) {
        primeEm = v36;
      }
      if (primeEm < v35) {
      LABEL_56:
        GameRoutine_adb760((__int64*)a1, primeEm);
      }
    }
    v12 = *((_QWORD*)a1 + 1);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v38 = *(_QWORD*)a1;
  v39 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v39 != nullptr) {
    *v16 = *v39;
    *v39 = v16;
  }
  else {
    v40 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v16;
    *v16 = v40;
    *(_QWORD*)(v38 + 8 * v3) = a1 + 4;
    if (*v16 != 0) {
      v41 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v41 >= v12) {
          v41 %= v12;
        }
      }
      else {
        v41 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v16;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v16;
}

#pragma GCC visibility pop
