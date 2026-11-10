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
unsigned __int64 ResFile_ad7640(__int64 a1);
__int64 ResFile_ad8b40(__int64 a1, __int64 a2, float** a3);
__int64* GameRoutine_adb760(__int64* result, unsigned __int64);
_QWORD* ResFile_adb3c0(float* a1, unsigned __int8* a2, char* a3);

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
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  if (result[10] == 0) {
    v24 = v2;
    v25 = v3;
    v4 = result;
    if (result[12] == 0) {
      v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
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
        std___1___shared_weak_count___release_weak(v8);
      }
      v9 = v4[10];
      v22[0] = GameData_1fc2618;
      v22[1] = v4;
      v23 = v22;
      GameRoutine_a934d0(v22, v9);
      if (v23 == v22) {
        v10 = 32;
      }
      else {
        if (v23 == nullptr) {
          goto LABEL_12;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v23 + v10))((__int64)v23);
    LABEL_12:
      v11 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 80, 16, 0);
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
        std___1___shared_weak_count___release_weak(v12);
      }
      v13 = v4[12];
      v22[0] = GameData_1fc2698;
      v22[1] = v4;
      v23 = v22;
      GameRoutine_a934d0(v22, v13);
      if (v23 == v22) {
        v14 = 32;
      }
      else {
        if (v23 == nullptr) {
          goto LABEL_20;
        }
        v14 = 40;
      }
      (*(void (**)(__int64))(*v23 + v14))((__int64)v23);
    LABEL_20:
      v15 = (_QWORD*)a2[4];
      v16 = a2;
      if (v15 == nullptr) {
        v23 = nullptr;
        goto LABEL_29;
      }
      if (v15 != a2) {
        v23 = (_QWORD*)a2[4];
        goto LABEL_29;
      }
      v23 = v22;
      (*(void (**)(_QWORD*, _QWORD*))(*v15 + 24LL))(v15, v22);
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
      result = v23;
      if (v23 == nullptr) {
        v4[18] = 0;
        return result;
      }
      if (v23 != v22) {
        v4[18] = v23;
        return result;
      }
      v4[18] = v4 + 14;
      (*(void (**)(_QWORD*, _QWORD*))(*result + 24LL))(result, v4 + 14);
      result = v23;
      if (v23 == v22) {
        v21 = 32;
      }
      else {
        if (v23 == nullptr) {
          return result;
        }
        v21 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(__int64))(*v23 + v21))((__int64)v23);
    }
  }
  return result;
}

unsigned __int64 ResFile_ad7640(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  unsigned __int64 result;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64** v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  unsigned __int64 v36;
  int v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64** v45;
  __int64* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  float* v62;
  unsigned __int64* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64 v77;
  float v78;
  float v79;
  _BOOL8 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64* v87;
  unsigned __int64 v88;
  int v89;
  char* v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  char* v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  int v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  int v112;
  __int64 v113;
  __int64 v114;
  char* v115;
  char* v116;
  _DWORD* v117;
  int v118;
  int v119;
  char* v120;
  unsigned __int64 v121;
  __int64 v122;
  char* v123;
  __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64* v132;
  __int64* v133;
  char* v134;
  char* v135;
  __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  char* v140;
  __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64* v149;
  __int64* v150;
  char* v151;
  char* v152;
  __int64 v153;
  __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  char* v157;
  __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  _QWORD* i;
  __int64 v167;
  _QWORD* v168;
  __int64 v169;
  float* v170;
  __int64 v171;
  int v172;
  _QWORD* v173;
  unsigned __int64* v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64* v177;
  unsigned __int64 v178;
  __int64 v179;
  int v180;
  __int64 v181;
  int v182;
  _QWORD* v183;
  float* v184;
  struct {
    float* v185[2];
    _QWORD* v186;
    __int64 v187;
    int v188;
  } v185_;

  v1 = (_QWORD*)a1;
  result = ResFile_ad8b40(a1, *(_QWORD*)(a1 + 16), (float**)(a1 + 32));
  v3 = v1[3];
  if (v3 == 0) {
    return result;
  }
  v185_.v186 = nullptr;
  v185_.v187 = 0;
  v185_.v185[0] = nullptr;
  v185_.v185[1] = nullptr;
  v185_.v188 = 1065353216;
  result = ResFile_ad8b40((__int64)v1, v3, v185_.v185);
  v4 = v185_.v186;
  if (v185_.v186 == nullptr) {
    goto LABEL_307;
  }
  v173 = v1;
  v172 = result;
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
    result = std___1___hash_memory(v10, v11);
    v12 = v5 - 1;
    v13 = result;
    if ((v5 & (v5 - 1)) != 0) {
      v14 = result;
      if (result >= v5) {
        v14 = result % v5;
      }
    }
    else {
      v14 = result & v12;
    }
    v15 = *(__int64***)(v1[4] + 8 * v14);
    if (v15 == nullptr) {
      goto LABEL_4;
    }
    v16 = *v15;
    if (*v15 == nullptr) {
      goto LABEL_4;
    }
    if ((v5 & v12) == 0) {
      while (1) {
        v22 = v16[1];
        if (v22 == v13) {
          v23 = *((unsigned __int8*)v16 + 16);
          v24 = v16[3];
          if ((v23 & 1) == 0) {
            v24 = v23 >> 1;
          }
          if (v24 == v11) {
            v25 = v16;
            v26 =
                (v23 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
            result = memcmp(v26, v10, v11);
            v16 = v25;
            if ((_DWORD)result == 0) {
              goto LABEL_46;
            }
          }
        }
        else if ((v22 & v12) != v14) {
          goto LABEL_4;
        }
        v16 = (__int64*)*v16;
        if (v16 == nullptr) {
          goto LABEL_4;
        }
      }
    }
    while (1) {
      v17 = v16[1];
      if (v17 == v13) {
        break;
      }
      if (v17 >= v5) {
        v17 %= v5;
      }
      if (v17 != v14) {
        goto LABEL_4;
      }
    LABEL_24:
      v16 = (__int64*)*v16;
      if (v16 == nullptr) {
        goto LABEL_4;
      }
    }
    v18 = *((unsigned __int8*)v16 + 16);
    v19 = v16[3];
    if ((v18 & 1) == 0) {
      v19 = v18 >> 1;
    }
    if (v19 != v11) {
      goto LABEL_24;
    }
    v20 = v16;
    v21 = (v18 & 1) != 0 ? (__int64*)v16[4] : (__int64*)((char*)v16 + 17);
    result = memcmp(v21, v10, v11);
    v16 = v20;
    if ((_DWORD)result != 0) {
      goto LABEL_24;
    }
  LABEL_46:
    v27 = (__int64*)v4[25];
    v183 = v4;
    v184 = (float*)v16;
    if (v27 != nullptr) {
      v174 = (unsigned __int64*)(v16 + 25);
      do {
        v28 = *((unsigned __int8*)v27 + 16);
        v29 = v16[24];
        v30 = *((_DWORD*)v27 + 10);
        v177 = v27 + 2;
        v182 = v30;
        if ((unsigned int)(v30 - 1) < 3) {
          v31 = (unsigned int)(v30 + 1);
        }
        else {
          v31 = 1;
        }
        if (v29 == 0 || v16[26] == 0) {
          v33 = v27[3];
          v34 = v27[4];
          v35 = v28 & 1;
          v36 = v28 >> 1;
        }
        else {
          v34 = v27[4];
          v37 = v28 & 1;
          v38 = v28 >> 1;
          v180 = v37;
          v176 = v38;
          if (v37 != 0) {
            v39 = v27[4];
          }
          else {
            v39 = (__int64)v27 + 17;
          }
          if (v37 != 0) {
            v40 = v27[3];
          }
          else {
            v40 = v38;
          }
          v178 = v27[3];
          v41 = v39;
          v42 = std___1___hash_memory(v39, v40);
          v43 = v29 - 1;
          v44 = v42;
          if ((v29 & (v29 - 1)) != 0) {
            v16 = (__int64*)v184;
            v12 = v42;
            if (v42 >= v29) {
              v12 = v42 % v29;
            }
          }
          else {
            v16 = (__int64*)v184;
            v12 = v42 & v43;
          }
          v45 = *(__int64***)(v16[23] + 8 * v12);
          if (v45 != nullptr) {
            v175 = v34;
            v46 = *v45;
            if (*v45 != nullptr) {
              if ((v29 & v43) == 0) {
                while (1) {
                  v51 = v46[1];
                  if (v51 == v44) {
                    v52 = *((unsigned __int8*)v46 + 16);
                    v53 = v46[3];
                    if ((v52 & 1) == 0) {
                      v53 = v52 >> 1;
                    }
                    if (v53 == v40) {
                      v54 = (v52 & 1) != 0 ? (__int64*)v46[4]
                                           : (__int64*)((char*)v46 + 17);
                      result = memcmp(v54, v41, v40);
                      v16 = (__int64*)v184;
                      if ((_DWORD)result == 0) {
                        goto LABEL_95;
                      }
                    }
                  }
                  else if ((v51 & v43) != v12) {
                    goto LABEL_98;
                  }
                  v46 = (__int64*)*v46;
                  if (v46 == nullptr) {
                    goto LABEL_98;
                  }
                }
              }
              do {
                v47 = v46[1];
                if (v47 == v44) {
                  v48 = *((unsigned __int8*)v46 + 16);
                  v49 = v46[3];
                  if ((v48 & 1) == 0) {
                    v49 = v48 >> 1;
                  }
                  if (v49 == v40) {
                    v50 = (v48 & 1) != 0 ? (__int64*)v46[4]
                                         : (__int64*)((char*)v46 + 17);
                    result = memcmp(v50, v41, v40);
                    v16 = (__int64*)v184;
                    if ((_DWORD)result == 0) {
                    LABEL_95:
                      if (*((_DWORD*)v46 + 10) == v182) {
                        v55 = *((int*)v46 + 11);
                        if ((unsigned int)(v31 - 1) >= 7) {
                          v106 = 4 * v55;
                          v56 = 0;
                          do {
                            *(_DWORD*)(v16[20] + v106 + 4 * v56) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                           4 * v56);
                            *(_DWORD*)(v16[20] + v106 + 4 * v56 + 4) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                           4 * v56 + 4);
                            *(_DWORD*)(v16[20] + v106 + 4 * v56 + 8) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                           4 * v56 + 8);
                            *(_DWORD*)(v16[20] + v106 + 4 * v56 + 12) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                           4 * v56 + 12);
                            *(_DWORD*)(v16[20] + v106 + 4 * v56 + 16) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                           4 * v56 + 16);
                            *(_DWORD*)(v16[20] + v106 + 4 * v56 + 20) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                           4 * v56 + 20);
                            *(_DWORD*)(v16[20] + v106 + 4 * v56 + 24) =
                                *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                           4 * v56 + 24);
                            v107 = *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                              4 * v56 + 28);
                            v108 = v16[20] + v106 + 4 * v56;
                            v56 += 8;
                            *(_DWORD*)(v108 + 28) = v107;
                          } while ((v31 & 0x7FFFFFF8) != v56);
                        }
                        else {
                          v56 = 0;
                        }
                        v109 = v31 & 7;
                        if ((v31 & 7) != 0) {
                          v110 = 4 * v56;
                          v111 = v110 + 4 * v55;
                          do {
                            --v109;
                            v112 = *(_DWORD*)(v4[20] + 4LL * *((int*)v27 + 11) +
                                              v110);
                            v110 += 4;
                            *(_DWORD*)(v16[20] + v111) = v112;
                            v111 += 4;
                          } while (v109 != 0);
                        }
                      }
                      goto LABEL_48;
                    }
                  }
                }
                else {
                  if (v47 >= v29) {
                    v47 %= v29;
                  }
                  if (v47 != v12) {
                    break;
                  }
                }
                v46 = (__int64*)*v46;
              } while (v46 != nullptr);
            }
          LABEL_98:
            v34 = v175;
          }
          v35 = v180;
          v33 = v178;
          v36 = v176;
        }
        v181 = v16[21];
        v179 = v16[20];
        if (v35 != 0) {
          v57 = v34;
        }
        else {
          v57 = (__int64)v27 + 17;
        }
        if (v35 != 0) {
          v58 = v33;
        }
        else {
          v58 = v36;
        }
        v59 = std___1___hash_memory(v57, v58);
        v60 = v59;
        if (v29 == 0) {
          goto LABEL_139;
        }
        v61 = v29 - 1;
        if ((v29 & (v29 - 1)) != 0) {
          v62 = v184;
          v12 = v59;
          if (v59 >= v29) {
            v12 = v59 % v29;
          }
        }
        else {
          v62 = v184;
          v12 = v61 & v59;
        }
        v63 = *(unsigned __int64**)(*((_QWORD*)v62 + 23) + 8 * v12);
        if (v63 == nullptr || (v64 = *v63, *v63 == 0)) {
        LABEL_139:
          result = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
          *(_QWORD*)result = 0;
          *(_QWORD*)(result + 8) = v60;
          v64 = result;
          if ((*(_BYTE*)v177 & 1) != 0) {
            result = fw_text_String_CopyTerminated((__int64*)(result + 16),
                                                   v27[4], v27[3]);
          }
          else {
            v76 = *v177;
            v77 = v27[4];
            *(_QWORD*)(result + 24) = v27[3];
            *(_QWORD*)(result + 32) = v77;
            *(_QWORD*)(result + 16) = v76;
          }
          v16 = (__int64*)v184;
          *(_QWORD*)(v64 + 40) = 0;
          v75 = v182;
          v78 = v184[54];
          v79 = (float)(unsigned __int64)(*((_QWORD*)v184 + 26) + 1LL);
          if (v29 == 0 || (float)(v78 * (float)v29) < v79) {
            v80 = v29 < 3 || (v29 & (v29 - 1)) != 0;
            v81 = v80 | (2 * v29);
            v82 = vcvtps_u64_f32(v79 / v78);
            if (v81 <= v82) {
              v83 = v82;
            }
            else {
              v83 = v81;
            }
            if (v83 == 1) {
              v83 = 2;
            }
            else if ((v83 & (v83 - 1)) != 0) {
              result = std___1___next_prime(v83);
              v16 = (__int64*)v184;
              v83 = result;
            }
            v84 = v16[24];
            if (v83 > v84) {
              goto LABEL_155;
            }
            if (v83 < v84) {
              result = vcvtps_u64_f32((float)(unsigned __int64)v16[26] /
                                      *((float*)v16 + 54));
              if (v84 < 3 || (v84 & (v84 - 1)) != 0) {
                result = std___1___next_prime(result);
                v16 = (__int64*)v184;
              }
              else {
                v85 = 1LL << -(char)__clz(result - 1);
                if (result >= 2) {
                  result = v85;
                }
              }
              if (v83 <= result) {
                v83 = result;
              }
              if (v83 < v84) {
              LABEL_155:
                result = (unsigned __int64)GameRoutine_adb120(v16 + 23, v83);
                v16 = (__int64*)v184;
              }
            }
            v29 = v16[24];
            if ((v29 & (v29 - 1)) != 0) {
              if (v60 >= v29) {
                v12 = v60 % v29;
              }
              else {
                v12 = v60;
              }
            }
            else {
              v12 = (v29 - 1) & v60;
            }
          }
          v86 = v16[23];
          v87 = *(unsigned __int64**)(v86 + 8 * v12);
          if (v87 != nullptr) {
            v74 = v179;
            v73 = v181;
            *(_QWORD*)v64 = *v87;
            *v87 = v64;
          }
          else {
            *(_QWORD*)v64 = *v174;
            *v174 = v64;
            *(_QWORD*)(v86 + 8 * v12) = v174;
            v74 = v179;
            v73 = v181;
            if (*(_QWORD*)v64 != 0) {
              v88 = *(_QWORD*)(*(_QWORD*)v64 + 8LL);
              if ((v29 & (v29 - 1)) != 0) {
                if (v88 >= v29) {
                  v88 %= v29;
                }
              }
              else {
                v88 &= v29 - 1;
              }
              *(_QWORD*)(v16[23] + 8 * v88) = v64;
            }
          }
          ++v16[26];
          goto LABEL_180;
        }
        if ((v29 & v61) == 0) {
          while (1) {
            v69 = *(_QWORD*)(v64 + 8);
            if (v69 == v60) {
              v70 = *(unsigned __int8*)(v64 + 16);
              v71 = *(_QWORD*)(v64 + 24);
              if ((v70 & 1) == 0) {
                v71 = v70 >> 1;
              }
              if (v71 == v58) {
                v72 = (v70 & 1) != 0 ? *(_QWORD*)(v64 + 32) : v64 + 17;
                result = memcmp(v72, v57, v58);
                v16 = (__int64*)v184;
                if ((_DWORD)result == 0) {
                  goto LABEL_138;
                }
              }
            }
            else if ((v69 & v61) != v12) {
              goto LABEL_139;
            }
            v64 = *(_QWORD*)v64;
            if (v64 == 0) {
              goto LABEL_139;
            }
          }
        }
        while (1) {
          v65 = *(_QWORD*)(v64 + 8);
          if (v65 == v60) {
            break;
          }
          if (v65 >= v29) {
            v65 %= v29;
          }
          if (v65 != v12) {
            goto LABEL_139;
          }
        LABEL_116:
          v64 = *(_QWORD*)v64;
          if (v64 == 0) {
            goto LABEL_139;
          }
        }
        v66 = *(unsigned __int8*)(v64 + 16);
        v67 = *(_QWORD*)(v64 + 24);
        if ((v66 & 1) == 0) {
          v67 = v66 >> 1;
        }
        if (v67 != v58) {
          goto LABEL_116;
        }
        v68 = (v66 & 1) != 0 ? *(_QWORD*)(v64 + 32) : v64 + 17;
        result = memcmp(v68, v57, v58);
        v16 = (__int64*)v184;
        if ((_DWORD)result != 0) {
          goto LABEL_116;
        }
      LABEL_138:
        v74 = v179;
        v73 = v181;
        v75 = v182;
      LABEL_180:
        v89 = 0;
        *(_DWORD*)(v64 + 40) = v75;
        *(_DWORD*)(v64 + 44) = (unsigned __int64)(v73 - v74) >> 2;
        v90 = (char*)v16[21];
        do {
          v12 = v4[20];
          v91 = v89 + *((_DWORD*)v27 + 11);
          v92 = v16[22];
          if ((unsigned __int64)v90 < v92) {
            *(_DWORD*)v90 = *(_DWORD*)(v12 + 4 * v91);
            v90 += 4;
          }
          else {
            v93 = v16[20];
            v94 = &v90[-v93];
            v95 = (__int64)&v90[-v93] >> 2;
            v96 = v95 + 1;
            if ((unsigned __int64)(v95 + 1) >> 62 != 0) {
              GameRoutine_a78a90();
            }
            v97 = v92 - v93;
            v98 = v27;
            v99 = v31;
            if (v97 >> 1 > v96) {
              v96 = v97 >> 1;
            }
            if ((unsigned __int64)v97 >= 0x7FFFFFFFFFFFFFFCLL) {
              v100 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v100 = v96;
            }
            if (v100 != 0) {
              if (v100 >> 62 != 0) {
              LABEL_313:
                GameRoutine_60a210();
              }
              v101 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v100, 16, 0);
            }
            else {
              v101 = 0;
            }
            v102 = *(_DWORD*)(v12 + 4 * v91);
            v103 = v101 + 4 * v100;
            v104 = (__int64)&v94[v101 + -4 * v95];
            *(_DWORD*)&v94[v101] = v102;
            v90 = &v94[v101 + 4];
            result = memcpy(v104, v93, v94);
            v16 = (__int64*)v184;
            *((_QWORD*)v184 + 20) = v104;
            *((_QWORD*)v184 + 21) = v90;
            *((_QWORD*)v184 + 22) = v103;
            if (v93 != 0) {
              v105 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v105 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v105);
              v16 = (__int64*)v184;
            }
            v4 = v183;
            v31 = v99;
            v27 = v98;
          }
          ++v89;
          v16[21] = (__int64)v90;
        } while ((_DWORD)v31 != v89);
      LABEL_48:
        v27 = (__int64*)*v27;
      } while (v27 != nullptr);
    }
    v113 = v4[9];
    v114 = v4[10];
    v1 = v173;
    if (v113 != v114) {
      v115 = (char*)v16[10];
      while (1) {
        v116 = (char*)v16[9];
        v117 = *(_DWORD**)v113;
        if (v116 != v115) {
          while (*v117 != **(_DWORD**)v116) {
            v116 += 8;
            if (v116 == v115) {
              goto LABEL_219;
            }
          }
        }
        if (v116 == v115) {
          goto LABEL_219;
        }
        v118 = v117[29];
        if (v117[11] != 0 || v117[12] != 0) {
          break;
        }
      LABEL_237:
        v113 += 8;
        if (v113 == v114) {
          goto LABEL_238;
        }
      }
      v119 = *(_DWORD*)(*(_QWORD*)v116 + 116LL) | v118;
      if (v119 != 0) {
        v117[30] = *(_DWORD*)(*(_QWORD*)v116 + 120LL) & ~v118 | v118 & v117[30];
        *(_DWORD*)(*(_QWORD*)v113 + 116LL) = v119;
        v115 = (char*)v16[10];
      }
      v120 = (char*)(v115 - (v116 + 8));
      if (v115 != v116 + 8) {
        result = memmove(v116, v116 + 8, v115 - (v116 + 8));
        v16 = (__int64*)v184;
      }
      v115 -= 8;
      v16[10] = (__int64)&v120[(_QWORD)v116];
    LABEL_219:
      v121 = v16[11];
      if ((unsigned __int64)v115 >= v121) {
        v122 = v16[9];
        v123 = &v115[-v122];
        v124 = (__int64)&v115[-v122] >> 3;
        v125 = v124 + 1;
        if ((unsigned __int64)(v124 + 1) >> 61 != 0) {
          GameRoutine_adab90();
        }
        v126 = v121 - v122;
        if (v126 >> 2 > v125) {
          v125 = v126 >> 2;
        }
        if ((unsigned __int64)v126 >= 0x7FFFFFFFFFFFFFF8LL) {
          v127 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v127 = v125;
        }
        if (v127 != 0) {
          if (v127 >> 61 != 0) {
            goto LABEL_313;
          }
          v128 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v127, 16, 0);
        }
        else {
          v128 = 0;
        }
        v129 = v128 + 8 * v127;
        v130 = (__int64)&v123[v128 + -8 * v124];
        *(_QWORD*)&v123[v128] = *(_QWORD*)v113;
        v115 = &v123[v128 + 8];
        result = memcpy(v130, v122, v123);
        v16 = (__int64*)v184;
        *((_QWORD*)v184 + 9) = v130;
        *((_QWORD*)v184 + 10) = v115;
        *((_QWORD*)v184 + 11) = v129;
        if (v122 != 0) {
          v131 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v131 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v131);
          v16 = (__int64*)v184;
        }
        v4 = v183;
      }
      else {
        *(_QWORD*)v115 = *(_QWORD*)v113;
        v115 += 8;
      }
      v16[10] = (__int64)v115;
      goto LABEL_237;
    }
  LABEL_238:
    v132 = (__int64*)v4[12];
    v133 = (__int64*)v4[13];
    if (v132 != v133) {
      v134 = (char*)v16[13];
      do {
        v135 = (char*)v16[12];
        if (v135 != v134) {
          v136 = *v132;
          v137 = v134 - v135 - 8;
          while (1) {
            result = strcmp(v136, *(_QWORD*)v135);
            if ((_DWORD)result == 0) {
              break;
            }
            v135 += 8;
            v137 -= 8;
            if (v135 == v134) {
              v16 = (__int64*)v184;
              goto LABEL_250;
            }
          }
          if (v135 + 8 != v134) {
            result = memmove(v135, v135 + 8, v137);
          }
          v16 = (__int64*)v184;
          v134 = &v135[v137];
          *((_QWORD*)v184 + 13) = &v135[v137];
        }
      LABEL_250:
        v138 = v16[14];
        if ((unsigned __int64)v134 < v138) {
          *(_QWORD*)v134 = *v132;
          v134 += 8;
        }
        else {
          v139 = v16[12];
          v140 = &v134[-v139];
          v141 = (__int64)&v134[-v139] >> 3;
          v142 = v141 + 1;
          if ((unsigned __int64)(v141 + 1) >> 61 != 0) {
            GameRoutine_adabb0();
          }
          v143 = v138 - v139;
          if (v143 >> 2 > v142) {
            v142 = v143 >> 2;
          }
          if ((unsigned __int64)v143 >= 0x7FFFFFFFFFFFFFF8LL) {
            v144 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v144 = v142;
          }
          if (v144 != 0) {
            if (v144 >> 61 != 0) {
              goto LABEL_313;
            }
            v145 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v144, 16, 0);
          }
          else {
            v145 = 0;
          }
          v146 = v145 + 8 * v144;
          v147 = (__int64)&v140[v145 + -8 * v141];
          *(_QWORD*)&v140[v145] = *v132;
          v134 = &v140[v145 + 8];
          result = memcpy(v147, v139, v140);
          v16 = (__int64*)v184;
          *((_QWORD*)v184 + 12) = v147;
          *((_QWORD*)v184 + 13) = v134;
          *((_QWORD*)v184 + 14) = v146;
          if (v139 != 0) {
            v148 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v148 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v148);
            v16 = (__int64*)v184;
          }
          v4 = v183;
        }
        ++v132;
        v16[13] = (__int64)v134;
      } while (v132 != v133);
    }
    if (v172 > 65537) {
      v149 = (__int64*)v4[6];
      v150 = (__int64*)v4[7];
      if (v149 != v150) {
        v151 = (char*)v16[7];
        do {
          v152 = (char*)v16[6];
          if (v152 != v151) {
            v153 = *v149;
            v154 = v151 - v152 - 8;
            while (1) {
              result = strcmp(v153, *(_QWORD*)v152);
              if ((_DWORD)result == 0) {
                break;
              }
              v152 += 8;
              v154 -= 8;
              if (v152 == v151) {
                v16 = (__int64*)v184;
                goto LABEL_279;
              }
            }
            if (v152 + 8 != v151) {
              result = memmove(v152, v152 + 8, v154);
            }
            v16 = (__int64*)v184;
            v151 = &v152[v154];
            *((_QWORD*)v184 + 7) = &v152[v154];
          }
        LABEL_279:
          v155 = v16[8];
          if ((unsigned __int64)v151 < v155) {
            *(_QWORD*)v151 = *v149;
            v151 += 8;
          }
          else {
            v156 = v16[6];
            v157 = &v151[-v156];
            v158 = (__int64)&v151[-v156] >> 3;
            v159 = v158 + 1;
            if ((unsigned __int64)(v158 + 1) >> 61 != 0) {
              GameRoutine_adabd0();
            }
            v160 = v155 - v156;
            if (v160 >> 2 > v159) {
              v159 = v160 >> 2;
            }
            if ((unsigned __int64)v160 >= 0x7FFFFFFFFFFFFFF8LL) {
              v161 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v161 = v159;
            }
            if (v161 != 0) {
              if (v161 >> 61 != 0) {
                goto LABEL_313;
              }
              v162 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v161, 16, 0);
            }
            else {
              v162 = 0;
            }
            v163 = v162 + 8 * v161;
            v164 = (__int64)&v157[v162 + -8 * v158];
            *(_QWORD*)&v157[v162] = *v149;
            v151 = &v157[v162 + 8];
            result = memcpy(v164, v156, v157);
            v16 = (__int64*)v184;
            *((_QWORD*)v184 + 6) = v164;
            *((_QWORD*)v184 + 7) = v151;
            *((_QWORD*)v184 + 8) = v163;
            if (v156 != 0) {
              v165 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v165 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v165);
              v16 = (__int64*)v184;
            }
            v4 = v183;
          }
          ++v149;
          v16[7] = (__int64)v151;
        } while (v149 != v150);
      }
    }
  LABEL_4:
    v4 = (_QWORD*)*v4;
    if (v4 != nullptr) {
      continue;
    }
    break;
  }
  for (i = v185_.v186; i != nullptr;
       result = nn_mem_StandardAllocator_Free(
           *(_QWORD*)fw_memory_g_heap_manager_ptr + v167)) {
    v168 = i;
    i = (_QWORD*)*i;
    GameRoutine_adac20((__int64)(v168 + 5));
    if ((v168[2] & 1) != 0 && v168[4] != 0) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v169 = 128;
      }
      else {
        v169 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v169);
    }
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
      v167 = 128;
    }
    else {
      v167 = 56;
    }
  }
LABEL_307:
  v170 = v185_.v185[0];
  v185_.v185[0] = nullptr;
  if (v170 != nullptr) {
    v171 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v171 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v171);
  }
  return result;
}

__int64 ResFile_ad8b40(__int64 a1, __int64 a2, float** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 result;
  unsigned int* v6;
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
  float*** v22;
  float** v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  float* v26;
  float* v27;
  float* v28;
  unsigned __int64 v29;
  float* v30;
  float* v31;
  __int64* v32;
  unsigned int* v33;
  float** v34;
  __int64 v35;
  unsigned __int64 v36;
  float** v37;
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
  float* v48;
  float* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  float* v54;
  unsigned __int64 v55;
  __int64 v56;
  float* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  float* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  float* v63;
  unsigned __int64 v64;
  float* v65;
  __int64 v66;
  float* v67;
  float** v68;
  float* v69;
  unsigned __int64 v70;
  __int64 v71;
  float* v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  float* v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  float* v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  float* v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned int* v91;
  unsigned int* v92;
  int v93;
  unsigned int v94;
  float* v95;
  float* v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  char* v102;
  __int64 v103;
  int v104;
  char* v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  _QWORD* v111;
  _QWORD* v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  _QWORD* v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  _QWORD* v120;
  _QWORD* v121;
  unsigned __int64 v122;
  __int64 v123;
  __int64 v124;
  float v125;
  float v126;
  _BOOL8 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  __int64 v133;
  float* v134;
  char* v135;
  char* v136;
  _QWORD* v137;
  unsigned int v138;
  unsigned __int64 v139;
  __int64 v140;
  unsigned int* v141;
  char* v142;
  int i;
  unsigned __int64 v144;
  float* v145;
  char* v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64 v154;
  float* v155;
  unsigned __int64 v156;
  __int64 v157;
  __int64 v158;
  unsigned int* v159;
  char* v160;
  int v161;
  __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  float* v165;
  char* v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  char* v173;
  __int64 v174;
  __int64 v175;
  float* v176;
  float* v177;
  unsigned __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned int* v182;
  char* v183;
  int j;
  unsigned __int64 v185;
  float* v186;
  char* v187;
  __int64 v188;
  unsigned __int64 v189;
  __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  char* v194;
  __int64 v195;
  __int64 v196;
  int k;
  unsigned __int64 v198;
  unsigned __int64 v199;
  char* v200;
  __int64 v201;
  unsigned int v202;
  __int64 v203;
  __int64 v204;
  float** v205;
  int v206;
  _QWORD* v208;
  unsigned int* v209;
  int v210;
  float* v211;
  float* v212;
  unsigned int v213;
  unsigned int* v214;
  struct {
    __int64 v215;
    unsigned __int64 v216;
    char* v217;
  } v215_;
  struct {
    __int64 v218;
    unsigned __int64 v219;
    __int64 v220;
    unsigned int v221;
  } v218_;

  v3 = *(_QWORD*)(a2 + 592);
  result = *(unsigned int*)v3;
  *(_DWORD*)(a1 + 72) = result;
  if (*(int*)(v3 + 4) >= 1) {
    v6 = (unsigned int*)(v3 + 8);
    v7 = 0;
    v205 = a3 + 2;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v209 = (unsigned int*)v3;
    while (1) {
      v9 = strlen(v6);
      if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_378:
        String_60a1d0();
      }
      v10 = v9;
      v214 = v6;
      v206 = v7;
      if (v9 >= 0x17) {
        break;
      }
      v11 = (char*)&v218_.v218 + 1;
      LOBYTE(v218_.v218) = 2 * v9;
      if (v9 != 0) {
        goto LABEL_12;
      }
    LABEL_13:
      v11[v10] = 0;
      v15 = v218_.v218 & 1;
      if (v15 != 0) {
        v16 = (char*)v218_.v220;
      }
      else {
        v16 = (char*)&v218_.v218 + 1;
      }
      if ((v218_.v218 & 1) != 0) {
        v17 = v218_.v219;
      }
      else {
        v17 = (unsigned __int64)(unsigned __int8)v218_.v218 >> 1;
      }
      v18 = std___1___hash_memory(v16, v17);
      v19 = v18;
      v20 = (unsigned __int64)a3[1];
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
      v22 = *(float****)&(*a3)[2 * (_QWORD)v8];
      if (v22 == nullptr || (v23 = *v22, *v22 == nullptr)) {
      LABEL_53:
        v34 = (float**)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 248, 16, 0);
        v35 = v218_.v218;
        v36 = v218_.v219;
        v37 = a3;
        v23 = v34;
        v34[18] = nullptr;
        v34[19] = nullptr;
        v34[26] = nullptr;
        v34[27] = nullptr;
        v33 = v214;
        *v34 = nullptr;
        v34[1] = (float*)v19;
        v218_.v218 = 0;
        v218_.v219 = 0;
        v34[6] = nullptr;
        v34[7] = nullptr;
        v34[8] = nullptr;
        v34[9] = nullptr;
        v34[10] = nullptr;
        v34[11] = nullptr;
        v34[12] = nullptr;
        v34[13] = nullptr;
        v38 = *((float*)a3 + 8);
        v34[2] = (float*)v35;
        v34[3] = (float*)v36;
        v39 = v218_.v220;
        v218_.v220 = 0;
        v34[14] = nullptr;
        v34[15] = nullptr;
        v34[16] = nullptr;
        v34[17] = nullptr;
        v34[20] = nullptr;
        v34[21] = nullptr;
        v34[22] = nullptr;
        v34[23] = nullptr;
        v34[24] = nullptr;
        v34[25] = nullptr;
        v34[20] = nullptr;
        v34[21] = nullptr;
        v34[22] = nullptr;
        v34[23] = nullptr;
        v34[24] = nullptr;
        v34[25] = nullptr;
        v34[26] = nullptr;
        v34[28] = nullptr;
        v34[29] = nullptr;
        v34[30] = nullptr;
        v34[4] = (float*)v39;
        v34[5] = nullptr;
        *((_DWORD*)v34 + 38) = 1065353216;
        *((_DWORD*)v34 + 54) = 1065353216;
        v40 = (float)((unsigned __int64)a3[3] + 1);
        if (v20 != 0 && (float)(v38 * (float)v20) >= v40) {
        LABEL_120:
          v67 = *v37;
          v68 = *(float***)&(*v37)[2 * (_QWORD)v8];
          if (v68 != nullptr) {
            *v23 = *v68;
            *v68 = (float*)v23;
            v32 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          else {
            v69 = *v205;
            *v205 = (float*)v23;
            *v23 = v69;
            *(_QWORD*)&v67[2 * (_QWORD)v8] = v205;
            v32 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (*v23 != nullptr) {
              v70 = *((_QWORD*)*v23 + 1);
              if ((v20 & (v20 - 1)) != 0) {
                if (v70 >= v20) {
                  v70 %= v20;
                }
              }
              else {
                v70 &= v20 - 1;
              }
              *(_QWORD*)&(*v37)[2 * v70] = v23;
            }
          }
          v37[3] = (float*)((char*)v37[3] + 1);
          if ((v218_.v218 & 1) != 0) {
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
          primeEm = std___1___next_prime(v45);
          v37 = a3;
          v45 = primeEm;
        }
        v47 = (unsigned __int64)v37[1];
        if (v45 <= v47) {
          if (v45 < v47) {
            v52 = vcvtps_u64_f32((float)(unsigned __int64)v37[3] /
                                 *((float*)v37 + 8));
            if (v47 < 3 || (v47 & (v47 - 1)) != 0) {
              v52 = std___1___next_prime(v52);
              v37 = a3;
            }
            else {
              v53 = 1LL << -(char)__clz(v52 - 1);
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
              v65 = *v37;
              *v37 = nullptr;
              if (v65 != nullptr) {
                v66 = 128;
                if (*(_QWORD*)(*v43 + 200) == 0) {
                  v66 = 56;
                }
                nn_mem_StandardAllocator_Free(*v43 + v66);
              }
              v37 = a3;
              a3[1] = nullptr;
            }
          }
          goto LABEL_115;
        }
      LABEL_66:
        if (v45 >> 61 != 0) {
        LABEL_377:
          GameRoutine_60a210();
        }
        v48 = (float*)fw_memory_HeapManager_Allocate_alt1(*v43, 8 * v45, 16, 0);
        v49 = *a3;
        *a3 = v48;
        if (v49 != nullptr) {
          v50 = 128;
          if (*(_QWORD*)(*v43 + 200) == 0) {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free(*v43 + v50);
        }
        v37 = a3;
        a3[1] = (float*)v45;
        if (v45 >= 8) {
          v51 = 0;
          do {
            *(_QWORD*)&(*a3)[2 * v51] = 0;
            *(_QWORD*)&(*a3)[2 * v51 + 2] = 0;
            *(_QWORD*)&(*a3)[2 * v51 + 4] = 0;
            *(_QWORD*)&(*a3)[2 * v51 + 6] = 0;
            *(_QWORD*)&(*a3)[2 * v51 + 8] = 0;
            *(_QWORD*)&(*a3)[2 * v51 + 10] = 0;
            *(_QWORD*)&(*a3)[2 * v51 + 12] = 0;
            v54 = &(*a3)[2 * v51];
            v51 += 8;
            *((_QWORD*)v54 + 7) = 0;
          } while ((v45 & 0x1FFFFFFFFFFFFFF8LL) != v51);
        }
        else {
          v51 = 0;
        }
        v55 = v45 & 7;
        if ((v45 & 7) != 0) {
          v56 = 2 * v51;
          do {
            --v55;
            *(_QWORD*)&(*a3)[v56] = 0;
            v56 += 2;
          } while (v55 != 0);
        }
        v57 = *v205;
        if (*v205 == nullptr) {
          goto LABEL_115;
        }
        v58 = *((_QWORD*)v57 + 1);
        v59 = v45 - 1;
        if ((v45 & (v45 - 1)) == 0) {
          v62 = v58 & v59;
          *(_QWORD*)&(*a3)[2 * v62] = v205;
          while (1) {
            v63 = *(float**)v57;
            if (*(_QWORD*)v57 == 0) {
              break;
            }
            v64 = *((_QWORD*)v63 + 1) & v59;
            if (v64 == v62) {
              v57 = *(float**)v57;
            }
            else if (*(_QWORD*)&(*a3)[2 * v64] != 0) {
              *(_QWORD*)v57 = *(_QWORD*)v63;
              *(_QWORD*)v63 = **(_QWORD**)&(*a3)[2 * v64];
              **(_QWORD**)&(*a3)[2 * v64] = v63;
            }
            else {
              *(_QWORD*)&(*a3)[2 * v64] = v57;
              v57 = v63;
              v62 = v64;
            }
          }
          goto LABEL_115;
        }
        if (v58 >= v45) {
          v58 %= v45;
        }
        *(_QWORD*)&(*a3)[2 * v58] = v205;
        v60 = *(float**)v57;
        if (*(_QWORD*)v57 == 0) {
        LABEL_115:
          v20 = (unsigned __int64)v37[1];
          if ((v20 & (v20 - 1)) != 0) {
            v33 = v214;
            if (v19 >= v20) {
              v8 = (__int64*)(v19 % v20);
            }
            else {
              v8 = (__int64*)v19;
            }
          }
          else {
            v33 = v214;
            v8 = (__int64*)((v20 - 1) & v19);
          }
          goto LABEL_120;
        }
        while (2) {
          v61 = *((_QWORD*)v60 + 1);
          if (v61 >= v45) {
            v61 %= v45;
          }
          if (v61 != v58) {
            if (*(_QWORD*)&(*a3)[2 * v61] == 0) {
              *(_QWORD*)&(*a3)[2 * v61] = v57;
            LABEL_92:
              v57 = v60;
              v60 = *(float**)v60;
              v58 = v61;
              if (v60 == nullptr) {
                goto LABEL_115;
              }
              continue;
            }
            *(_QWORD*)v57 = *(_QWORD*)v60;
            *(_QWORD*)v60 = **(_QWORD**)&(*a3)[2 * v61];
            **(_QWORD**)&(*a3)[2 * v61] = v60;
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
          if (v28 == (float*)v19) {
            v29 = *((unsigned __int8*)v23 + 16);
            v30 = v23[3];
            if ((v29 & 1) == 0) {
              v30 = (float*)(v29 >> 1);
            }
            if (v30 == (float*)v17) {
              v31 = (v29 & 1) != 0 ? v23[4] : (float*)((char*)v23 + 17);
              if ((unsigned int)memcmp(v31, v16, v17) == 0) {
                goto LABEL_51;
              }
            }
          }
          else if ((__int64*)((unsigned __int64)v28 & v21) != v8) {
            goto LABEL_53;
          }
          v23 = (float**)*v23;
          if (v23 == nullptr) {
            goto LABEL_53;
          }
        }
      }
      while (1) {
        v24 = (unsigned __int64)v23[1];
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
        v23 = (float**)*v23;
        if (v23 == nullptr) {
          goto LABEL_53;
        }
      }
      v25 = *((unsigned __int8*)v23 + 16);
      v26 = v23[3];
      if ((v25 & 1) == 0) {
        v26 = (float*)(v25 >> 1);
      }
      if (v26 != (float*)v17) {
        goto LABEL_29;
      }
      v27 = (v25 & 1) != 0 ? v23[4] : (float*)((char*)v23 + 17);
      if ((unsigned int)memcmp(v27, v16, v17) != 0) {
        goto LABEL_29;
      }
    LABEL_51:
      v32 = &fw_memory_g_heap_manager;
      v33 = v214;
      if (v15 != 0) {
      LABEL_129:
        if (v218_.v220 != 0) {
          v71 = 128;
          if (*(_QWORD*)(*v32 + 200) == 0) {
            v71 = 56;
          }
          nn_mem_StandardAllocator_Free(*v32 + v71);
        }
      }
    LABEL_133:
      if (v23[18] != nullptr) {
        v72 = v23[17];
        while (v72 != nullptr) {
          v76 = v72;
          v72 = *(float**)v72;
          if (((_BYTE)v76[4] & 1) != 0 && *((_QWORD*)v76 + 4) != 0) {
            v77 = 128;
            if (*(_QWORD*)(*v32 + 200) == 0) {
              v77 = 56;
            }
            nn_mem_StandardAllocator_Free(*v32 + v77);
            v32 = &fw_memory_g_heap_manager;
          }
          v75 = 128;
          if (*(_QWORD*)(*v32 + 200) == 0) {
            v75 = 56;
          }
          nn_mem_StandardAllocator_Free(*v32 + v75);
        }
        v73 = (unsigned __int64)v23[16];
        v23[17] = nullptr;
        if (v73 != 0) {
          if (v73 >= 8) {
            v74 = 0;
            do {
              *(_QWORD*)&v23[15][2 * v74] = 0;
              *(_QWORD*)&v23[15][2 * v74 + 2] = 0;
              *(_QWORD*)&v23[15][2 * v74 + 4] = 0;
              *(_QWORD*)&v23[15][2 * v74 + 6] = 0;
              *(_QWORD*)&v23[15][2 * v74 + 8] = 0;
              *(_QWORD*)&v23[15][2 * v74 + 10] = 0;
              *(_QWORD*)&v23[15][2 * v74 + 12] = 0;
              v78 = (__int64)&v23[15][2 * v74];
              v74 += 8;
              *(_QWORD*)(v78 + 56) = 0;
            } while ((v73 & 0xFFFFFFFFFFFFFFF8LL) != v74);
          }
          else {
            v74 = 0;
          }
          v79 = v73 & 7;
          if (v79 != 0) {
            v80 = 2 * v74;
            do {
              --v79;
              *(_QWORD*)&v23[15][v80] = 0;
              v80 += 2;
            } while (v79 != 0);
          }
        }
        v23[18] = nullptr;
      }
      if (v23[26] != nullptr) {
        v81 = v23[25];
        while (v81 != nullptr) {
          v85 = v81;
          v81 = *(float**)v81;
          if (((_BYTE)v85[4] & 1) != 0 && *((_QWORD*)v85 + 4) != 0) {
            v86 = 128;
            if (*(_QWORD*)(*v32 + 200) == 0) {
              v86 = 56;
            }
            nn_mem_StandardAllocator_Free(*v32 + v86);
            v32 = &fw_memory_g_heap_manager;
          }
          v84 = 128;
          if (*(_QWORD*)(*v32 + 200) == 0) {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free(*v32 + v84);
        }
        v82 = (unsigned __int64)v23[24];
        v23[25] = nullptr;
        if (v82 != 0) {
          if (v82 >= 8) {
            v83 = 0;
            do {
              *(_QWORD*)&v23[23][2 * v83] = 0;
              *(_QWORD*)&v23[23][2 * v83 + 2] = 0;
              *(_QWORD*)&v23[23][2 * v83 + 4] = 0;
              *(_QWORD*)&v23[23][2 * v83 + 6] = 0;
              *(_QWORD*)&v23[23][2 * v83 + 8] = 0;
              *(_QWORD*)&v23[23][2 * v83 + 10] = 0;
              *(_QWORD*)&v23[23][2 * v83 + 12] = 0;
              v87 = (__int64)&v23[23][2 * v83];
              v83 += 8;
              *(_QWORD*)(v87 + 56) = 0;
            } while ((v82 & 0xFFFFFFFFFFFFFFF8LL) != v83);
          }
          else {
            v83 = 0;
          }
          v88 = v82 & 7;
          if (v88 != 0) {
            v89 = 2 * v83;
            do {
              --v88;
              *(_QWORD*)&v23[23][v89] = 0;
              v89 += 2;
            } while (v88 != 0);
          }
        }
        v23[26] = nullptr;
      }
      v23[21] = v23[20];
      v23[29] = v23[28];
      v23[5] = (float*)(v33 + 8);
      v90 = 24;
      if (*(int*)v3 < 65538) {
        v90 = 23;
      }
      v91 = v33;
      v92 = &v33[v90];
      if ((int)v91[20] >= 1) {
        v93 = 0;
        v208 = v23 + 25;
        while (1) {
          v94 = v92[8];
          v96 = v23[20];
          v95 = v23[21];
          v97 = v94 - 2;
          v98 = v94 - 1;
          if (v97 >= 3) {
            v99 = 0;
          }
          else {
            v99 = v98;
          }
          v100 = strlen(v92);
          if (v100 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_378;
          }
          v101 = v100;
          v213 = v99;
          v210 = v93;
          v211 = v96;
          v212 = v95;
          if (v100 >= 0x17) {
            if ((v100 | 7) == 0x17) {
              v103 = 26;
            }
            else {
              v103 = (v100 | 7) + 1;
            }
            v102 =
                (char*)fw_memory_HeapManager_Allocate_alt1(*v32, v103, 16, 0);
            v218_.v219 = v101;
            v218_.v220 = (__int64)v102;
            v218_.v218 = v103 | 1;
          }
          else {
            v102 = (char*)&v218_.v218 + 1;
            LOBYTE(v218_.v218) = 2 * v100;
            if (v100 == 0) {
              goto LABEL_188;
            }
          }
          memmove(v102, v92, v101);
        LABEL_188:
          v102[v101] = 0;
          v104 = v218_.v218 & 1;
          if (v104 != 0) {
            v105 = (char*)v218_.v220;
          }
          else {
            v105 = (char*)&v218_.v218 + 1;
          }
          if ((v218_.v218 & 1) != 0) {
            v106 = v218_.v219;
          }
          else {
            v106 = (unsigned __int64)(unsigned __int8)v218_.v218 >> 1;
          }
          v107 = std___1___hash_memory(v105, v106);
          v108 = (unsigned __int64)v23[24];
          v109 = v107;
          if (v108 == 0) {
            goto LABEL_228;
          }
          v110 = v108 - 1;
          if ((v108 & (v108 - 1)) != 0) {
            v3 = v107;
            if (v107 >= v108) {
              v3 = v107 % v108;
            }
          }
          else {
            v3 = v110 & v107;
          }
          v111 = *(_QWORD**)&v23[23][2 * v3];
          if (v111 == nullptr || (v112 = (_QWORD*)*v111, *v111 == 0)) {
          LABEL_227:
            v32 = &fw_memory_g_heap_manager;
          LABEL_228:
            v121 =
                (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v32, 48, 16, 0);
            v123 = v218_.v218;
            v122 = v218_.v219;
            *v121 = 0;
            v121[1] = v109;
            v112 = v121;
            v218_.v218 = 0;
            v121[2] = v123;
            v121[3] = v122;
            v124 = v218_.v220;
            v218_.v219 = 0;
            v218_.v220 = 0;
            v121[4] = v124;
            v121[5] = 0;
            v125 = *((float*)v23 + 54);
            v126 = (float)((unsigned __int64)v23[26] + 1);
            if (v108 == 0 || (float)(v125 * (float)v108) < v126) {
              v127 = v108 < 3 || (v108 & (v108 - 1)) != 0;
              v128 = v127 | (2 * v108);
              v129 = vcvtps_u64_f32(v126 / v125);
              if (v128 <= v129) {
                v130 = v129;
              }
              else {
                v130 = v128;
              }
              if (v130 == 1) {
                v130 = 2;
              }
              else if ((v130 & (v130 - 1)) != 0) {
                v130 = std___1___next_prime(v130);
              }
              v131 = (unsigned __int64)v23[24];
              if (v130 > v131) {
                goto LABEL_241;
              }
              if (v130 < v131) {
                v132 = vcvtps_u64_f32((float)(unsigned __int64)v23[26] /
                                      *((float*)v23 + 54));
                if (v131 < 3 || (v131 & (v131 - 1)) != 0) {
                  v132 = std___1___next_prime(v132);
                }
                else {
                  v133 = 1LL << -(char)__clz(v132 - 1);
                  if (v132 >= 2) {
                    v132 = v133;
                  }
                }
                if (v130 <= v132) {
                  v130 = v132;
                }
                if (v130 < v131) {
                LABEL_241:
                  GameRoutine_adb120((__int64*)v23 + 23, v130);
                }
              }
              v108 = (unsigned __int64)v23[24];
              if ((v108 & (v108 - 1)) != 0) {
                if (v109 >= v108) {
                  v3 = v109 % v108;
                }
                else {
                  v3 = v109;
                }
              }
              else {
                v3 = (v108 - 1) & v109;
              }
            }
            v134 = v23[23];
            v136 = (char*)v211;
            v135 = (char*)v212;
            v137 = *(_QWORD**)&v134[2 * v3];
            if (v137 != nullptr) {
              v3 = (unsigned __int64)v209;
              v138 = v213;
              *v112 = *v137;
              *v137 = v112;
            }
            else {
              *v112 = *v208;
              *v208 = v112;
              *(_QWORD*)&v134[2 * v3] = v208;
              v3 = (unsigned __int64)v209;
              v138 = v213;
              if (*v112 != 0) {
                v139 = *(_QWORD*)(*v112 + 8LL);
                if ((v108 & (v108 - 1)) != 0) {
                  if (v139 >= v108) {
                    v139 %= v108;
                  }
                }
                else {
                  v139 &= v108 - 1;
                }
                *(_QWORD*)&v23[23][2 * v139] = v112;
              }
            }
            v23[26] = (float*)((char*)v23[26] + 1);
            v104 = v218_.v218 & 1;
            goto LABEL_266;
          }
          if ((v108 & v110) != 0) {
            v32 = &fw_memory_g_heap_manager;
            while (1) {
              v113 = v112[1];
              if (v113 == v109) {
                v114 = *((unsigned __int8*)v112 + 16);
                v115 = v112[3];
                if ((v114 & 1) == 0) {
                  v115 = v114 >> 1;
                }
                if (v115 == v106) {
                  v116 = (v114 & 1) != 0 ? (_QWORD*)v112[4]
                                         : (_QWORD*)((char*)v112 + 17);
                  if ((unsigned int)memcmp(v116, v105, v106) == 0) {
                    v3 = (unsigned __int64)v209;
                    goto LABEL_290;
                  }
                }
              }
              else {
                if (v113 >= v108) {
                  v113 %= v108;
                }
                if (v113 != v3) {
                  goto LABEL_228;
                }
              }
              v112 = (_QWORD*)*v112;
              if (v112 == nullptr) {
                goto LABEL_228;
              }
            }
          }
          while (1) {
            v117 = v112[1];
            if (v117 != v109) {
              if ((v117 & v110) != v3) {
                goto LABEL_227;
              }
              goto LABEL_217;
            }
            v118 = *((unsigned __int8*)v112 + 16);
            v119 = v112[3];
            if ((v118 & 1) == 0) {
              v119 = v118 >> 1;
            }
            if (v119 == v106) {
              v120 = (v118 & 1) != 0 ? (_QWORD*)v112[4]
                                     : (_QWORD*)((char*)v112 + 17);
              if ((unsigned int)memcmp(v120, v105, v106) == 0) {
                break;
              }
            }
          LABEL_217:
            v112 = (_QWORD*)*v112;
            if (v112 == nullptr) {
              goto LABEL_227;
            }
          }
          v3 = (unsigned __int64)v209;
          v32 = (__int64*)fw_memory_g_heap_manager_ptr;
        LABEL_290:
          v138 = v213;
          v136 = (char*)v211;
          v135 = (char*)v212;
        LABEL_266:
          *((_DWORD*)v112 + 10) = v138;
          *((_DWORD*)v112 + 11) = (unsigned __int64)(v135 - v136) >> 2;
          if (v104 != 0 && v218_.v220 != 0) {
            v140 = 128;
            if (*(_QWORD*)(*v32 + 200) == 0) {
              v140 = 56;
            }
            nn_mem_StandardAllocator_Free(*v32 + v140);
          }
          v141 = v92 + 9;
          if ((int)v92[8] >= 1) {
            v142 = (char*)v23[21];
            for (i = 0; i < (int)v92[8]; ++i) {
              v144 = (unsigned __int64)v23[22];
              if ((unsigned __int64)v142 < v144) {
                *(_DWORD*)v142 = *v141;
                v142 += 4;
              }
              else {
                v145 = v23[20];
                v146 = (char*)(v142 - (char*)v145);
                v147 = (v142 - (char*)v145) >> 2;
                v148 = v147 + 1;
                if ((unsigned __int64)(v147 + 1) >> 62 != 0) {
                  GameRoutine_a78a90();
                }
                v149 = v144 - (_QWORD)v145;
                if (v149 >> 1 > v148) {
                  v148 = v149 >> 1;
                }
                if ((unsigned __int64)v149 >= 0x7FFFFFFFFFFFFFFCLL) {
                  v150 = 0x3FFFFFFFFFFFFFFFLL;
                }
                else {
                  v150 = v148;
                }
                if (v150 != 0) {
                  if (v150 >> 62 != 0) {
                    goto LABEL_377;
                  }
                  v151 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v150, 16, 0);
                }
                else {
                  v151 = 0;
                }
                v152 = v151 + 4 * v150;
                v153 = (__int64)&v146[v151 + -4 * v147];
                *(_DWORD*)&v146[v151] = *v141;
                v142 = &v146[v151 + 4];
                memcpy(v153, v145, v146);
                v23[20] = (float*)v153;
                v23[21] = (float*)v142;
                v23[22] = (float*)v152;
                if (v145 != nullptr) {
                  v154 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v154 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v154);
                }
              }
              v23[21] = (float*)v142;
              ++v141;
            }
          }
          v92 = v141;
          v32 = (__int64*)fw_memory_g_heap_manager_ptr;
          v93 = v210 + 1;
          if (v210 + 1 >= (int)v214[20]) {
            goto LABEL_292;
          }
        }
      }
      v141 = v92;
    LABEL_292:
      v155 = v23[9];
      v23[10] = v155;
      v156 = (int)v214[21];
      if (v156 > ((char*)v23[11] - (char*)v155) >> 3) {
        if ((v156 & 0x80000000) != 0) {
        LABEL_379:
          GameRoutine_adab90();
        }
        v157 = fw_memory_HeapManager_Allocate_alt1(*v32, 8 * v156, 16, 0);
        v23[9] = (float*)v157;
        v23[10] = (float*)v157;
        v23[11] = (float*)(v157 + 8 * v156);
        if (v155 != nullptr) {
          v158 = 128;
          if (*(_QWORD*)(*v32 + 200) == 0) {
            v158 = 56;
          }
          nn_mem_StandardAllocator_Free(*v32 + v158);
        }
      }
      v159 = v214;
      if ((int)v214[21] >= 1) {
        v160 = (char*)v23[10];
        v161 = 0;
        do {
          v164 = (unsigned __int64)v23[11];
          if ((unsigned __int64)v160 < v164) {
            *(_QWORD*)v160 = v141;
            v160 += 8;
          }
          else {
            v165 = v23[9];
            v166 = (char*)(v160 - (char*)v165);
            v167 = (v160 - (char*)v165) >> 3;
            v168 = v167 + 1;
            if ((unsigned __int64)(v167 + 1) >> 61 != 0) {
              goto LABEL_379;
            }
            v169 = v164 - (_QWORD)v165;
            if (v169 >> 2 > v168) {
              v168 = v169 >> 2;
            }
            if ((unsigned __int64)v169 >= 0x7FFFFFFFFFFFFFF8LL) {
              v170 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v170 = v168;
            }
            if (v170 != 0) {
              if (v170 >> 61 != 0) {
                goto LABEL_377;
              }
              v171 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v170, 16, 0);
            }
            else {
              v171 = 0;
            }
            v172 = v171 + 8 * v170;
            v173 = (char*)(v160 - (char*)v165);
            v174 = (__int64)&v166[v171 + -8 * v167];
            *(_QWORD*)&v166[v171] = v141;
            v160 = &v166[v171 + 8];
            memcpy(v174, v165, v173);
            v23[9] = (float*)v174;
            v23[10] = (float*)v160;
            v23[11] = (float*)v172;
            if (v165 != nullptr) {
              v175 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v175 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v175);
            }
            v159 = v214;
          }
          v23[10] = (float*)v160;
          ++v161;
          v162 = 128;
          if (*(_DWORD*)v3 < 0x10001u) {
            v162 = 120;
          }
          v163 = 60;
          if (*(int*)v3 >= 1) {
            v163 = v162;
          }
          v141 = (unsigned int*)((char*)v141 + v163);
        } while (v161 < (int)v159[21]);
      }
      v176 = v23[12];
      v177 = v23[14];
      v23[13] = v176;
      v178 = (int)v159[22];
      v179 = fw_memory_g_heap_manager_ptr;
      if (v178 > ((char*)v177 - (char*)v176) >> 3) {
        if ((v178 & 0x80000000) != 0) {
        LABEL_380:
          GameRoutine_adabb0();
        }
        v180 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v178, 16, 0);
        v23[12] = (float*)v180;
        v23[13] = (float*)v180;
        v23[14] = (float*)(v180 + 8 * v178);
        if (v176 != nullptr) {
          v181 = 128;
          if (*(_QWORD*)(*(_QWORD*)v179 + 200LL) == 0) {
            v181 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v179 + v181);
        }
      }
      v182 = v214;
      if ((int)v214[22] >= 1) {
        v183 = (char*)v23[13];
        for (j = 0; j < (int)v182[22]; ++j) {
          v185 = (unsigned __int64)v23[14];
          if ((unsigned __int64)v183 < v185) {
            *(_QWORD*)v183 = v141;
            v183 += 8;
          }
          else {
            v186 = v23[12];
            v187 = (char*)(v183 - (char*)v186);
            v188 = (v183 - (char*)v186) >> 3;
            v189 = v188 + 1;
            if ((unsigned __int64)(v188 + 1) >> 61 != 0) {
              goto LABEL_380;
            }
            v190 = v185 - (_QWORD)v186;
            if (v190 >> 2 > v189) {
              v189 = v190 >> 2;
            }
            if ((unsigned __int64)v190 >= 0x7FFFFFFFFFFFFFF8LL) {
              v191 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v191 = v189;
            }
            if (v191 != 0) {
              if (v191 >> 61 != 0) {
                goto LABEL_377;
              }
              v192 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v191, 16, 0);
            }
            else {
              v192 = 0;
            }
            v193 = v192 + 8 * v191;
            v194 = (char*)(v183 - (char*)v186);
            v195 = (__int64)&v187[v192 + -8 * v188];
            *(_QWORD*)&v187[v192] = v141;
            v183 = &v187[v192 + 8];
            memcpy(v195, v186, v194);
            v23[12] = (float*)v195;
            v23[13] = (float*)v183;
            v23[14] = (float*)v193;
            if (v186 != nullptr) {
              v196 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v196 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v196);
            }
            v182 = v214;
          }
          v23[13] = (float*)v183;
          v141 += 5;
        }
      }
      if (*(int*)v3 > 65537 && (int)v182[23] >= 1) {
        for (k = 0; k < (int)v214[23]; ++k) {
          v198 = strlen(v141);
          if (v198 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_378;
          }
          v199 = v198;
          if (v198 >= 0x17) {
            if ((v198 | 7) == 0x17) {
              v201 = 26;
            }
            else {
              v201 = (v198 | 7) + 1;
            }
            v200 = (char*)fw_memory_HeapManager_Allocate_alt1(
                fw_memory_g_heap_manager, v201, 16, 0);
            v215_.v216 = v199;
            v215_.v217 = v200;
            v215_.v215 = v201 | 1;
          }
          else {
            v200 = (char*)&v215_.v215 + 1;
            LOBYTE(v215_.v215) = 2 * v198;
            if (v198 == 0) {
              goto LABEL_361;
            }
          }
          memmove(v200, v141, v199);
        LABEL_361:
          v200[v199] = 0;
          v202 = v141[8];
          if ((v215_.v215 & 1) != 0) {
            fw_text_String_CopyTerminated(&v218_.v218, (__int64)v215_.v217,
                                          v215_.v216);
          }
          else {
            v218_.v218 = v215_.v215;
            v218_.v219 = v215_.v216;
            v218_.v220 = (__int64)v215_.v217;
          }
          v218_.v221 = v202;
          GameRoutine_adb3c0((float*)v23 + 30, (unsigned __int8*)&v218_.v218,
                             (char*)&v218_.v218);
          if ((v218_.v218 & 1) != 0 && v218_.v220 != 0) {
            v203 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v203 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v203);
          }
          if ((v215_.v215 & 1) != 0 && v215_.v217 != nullptr) {
            v204 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v204 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v204);
          }
          v141 += 9;
        }
      }
      v6 = v141;
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
      v7 = v206 + 1;
      if (v206 + 1 >= *(_DWORD*)(v3 + 4)) {
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
    v6 = v214;
    v11 = (char*)v13;
    v218_.v219 = v10;
    v218_.v220 = v13;
    v218_.v218 = v14;
  LABEL_12:
    memmove(v11, v6, v10);
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
        v37 = 1LL << -(char)__clz(v36 - 1);
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
