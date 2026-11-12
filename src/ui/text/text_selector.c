#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_190ab40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190ad40(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
char* GameRoutine_1905ba0(char**, char*);
extern __int64 (*ui_text_TextSelector_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
void __attribute__((noreturn)) GameRoutine_190aaf0(void);
__int64 TextSelector_Unknown2(__int64 result);
_QWORD* TextSelector_Destructor(_QWORD* result);
__int64 TextSelector_Unknown4(__int64 a1, _QWORD* a2);
bool TextSelector_19073e0(char* a1, int* a2);
__int64 TextSelector_1907f20(char* a1);
__int64 TextSelector_Unknown3(__int64 a1, unsigned __int16 a2,
                              unsigned __int16 a3);
__int64 EmbeddedImage_188a0a0(_QWORD, _QWORD, _QWORD);
__int64 TextSelector_1905ba0(_QWORD, _QWORD);
__int64 TextSelector_1907d20_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("TextSelector_1907d20");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern char* GameData_20ff340[5];
__attribute__((swiftcall)) void
TextSelector_19063a0_alt1(PSEUDO_X8 x8_, _QWORD* result, __int64 a2, __int64 a3,
                          __int64 a4, int a5) __asm__("TextSelector_19063a0");
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
char* TextSelector_1907d20(char* result, __int64 a2, __int64* a3);
_QWORD* GameHr_190ad40(__int64*, __int64*);
__int64* EmbeddedImage_188a0a0_alt1(__int64,
                                    __int64) __asm__("EmbeddedImage_188a0a0");
__int64 TextSelector_1907d20_alt2(__int64 result, __int64,
                                  __int64*) __asm__("TextSelector_1907d20");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
char* TextSelector_1905ba0_alt1(char**, char*) __asm__("TextSelector_1905ba0");
void GameHr_190ab40(_QWORD*, _QWORD*, _QWORD*);
void __attribute__((noreturn))
GameRoutine_190aaf0_alt1() __asm__("GameRoutine_190aaf0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void TextSelector_19063a0(PSEUDO_X8 x8_, __int64* a1,
                                                     char* a2, __int64 a3,
                                                     __int64 a4, int a5);

__int64 TextSelector_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(unsigned int*)(result + 136);
  if ((unsigned int)v1 <= 0x1F) {
    v2 = result + 8;
    *(_DWORD*)(result + 136) = v1 + 1;
    *(_DWORD*)(result + 8 + 4 * v1) = -256;
    v3 = *(unsigned int*)(result + 136);
    if ((unsigned int)v3 <= 0x1F) {
      *(_DWORD*)(result + 136) = v3 + 1;
      *(_DWORD*)(v2 + 4 * v3) = -65536;
      v4 = *(unsigned int*)(result + 136);
      if ((unsigned int)v4 <= 0x1F) {
        *(_DWORD*)(result + 136) = v4 + 1;
        *(_DWORD*)(v2 + 4 * v4) = -65535;
        v5 = *(unsigned int*)(result + 136);
        if ((unsigned int)v5 <= 0x1F) {
          *(_DWORD*)(result + 136) = v5 + 1;
          *(_DWORD*)(v2 + 4 * v5) = -65534;
          v6 = *(unsigned int*)(result + 136);
          if ((unsigned int)v6 <= 0x1F) {
            *(_DWORD*)(result + 136) = v6 + 1;
            *(_DWORD*)(v2 + 4 * v6) = -65532;
            v7 = *(unsigned int*)(result + 136);
            if ((unsigned int)v7 <= 0x1F) {
              *(_DWORD*)(result + 136) = v7 + 1;
              *(_DWORD*)(v2 + 4 * v7) = -65531;
              v8 = *(unsigned int*)(result + 136);
              if ((unsigned int)v8 <= 0x1F) {
                *(_DWORD*)(result + 136) = v8 + 1;
                *(_DWORD*)(v2 + 4 * v8) = -65530;
                v9 = *(unsigned int*)(result + 136);
                if ((unsigned int)v9 <= 0x1F) {
                  *(_DWORD*)(result + 136) = v9 + 1;
                  *(_DWORD*)(v2 + 4 * v9) = -65529;
                  v10 = *(unsigned int*)(result + 136);
                  if ((unsigned int)v10 <= 0x1F) {
                    *(_DWORD*)(result + 136) = v10 + 1;
                    *(_DWORD*)(v2 + 4 * v10) = -65528;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void TextSelector_19063a0(PSEUDO_X8 x8_, __int64* a1,
                                                     char* a2, __int64 a3,
                                                     __int64 a4, int a5)
{
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  bool v17;
  int v18;
  char v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  bool v34;
  unsigned __int8* v35;
  bool v36;
  bool v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  int v49;
  unsigned __int16* v50;
  unsigned __int64 v51;
  _BOOL4 v53;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int16 v60;
  __int64* v61;
  unsigned __int64 v62;
  __int64 v63;
  _BYTE* v64;
  __int64 v65;
  __int64 v66;
  _BYTE* v67;
  unsigned __int16 v69;
  bool v70;
  _BYTE* v71;
  int v72;
  __int64* v73;
  char v74;
  _BOOL4 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _BOOL4 v81;
  __int64 v83;
  int v86;
  int v87;
  int v88;
  int v89;
  unsigned __int8* v90;
  __int64* v91;
  __int64 v92;
  int v93;
  char* v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  char* v99;
  unsigned __int64 v100;
  char* v101;
  __int16 v102;
  __int16 v103;
  unsigned __int64 v104;
  bool v106;
  _BYTE* v107;
  __int64 v108;
  int v109;
  __int64 v111;
  __int64 v112;
  _WORD* v113;
  _BYTE* v114;
  __int64 v115;
  int v116;
  char* v117;
  char* v118;
  char* v119;
  int v120;
  int v121;
  __int64 v122;
  unsigned int v123;
  int v124;
  __int64 v125;
  unsigned int v126;
  int v127;
  unsigned int v128;
  __int64 v129;
  unsigned int v130;
  _BYTE* v131;
  unsigned int v132;
  int v133;
  int v134;
  unsigned int v135;
  _BYTE* v136;
  __int64 v137;
  int v138;
  _BYTE* v139;
  __int64 v140;
  __int64 v141;
  _QWORD* v142;
  __int64 v143;
  __int64* v144;
  __int64* v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  int v152;
  char* v153;
  _BYTE* v154;
  char v155;
  int v156;
  char* v157;
  int v158;
  char* v159;
  char* v160;
  unsigned __int64 v161;
  __int64* v162;
  _BOOL4 v163;
  _QWORD* v164;
  struct {
    char* v166;
    unsigned __int64 v167;
    char* v168;
    __int64 v169;
    __int64 v170;
  } v166_;
  struct {
    __int64* v171;
    __int64* v172;
    unsigned __int64 v173;
  } v171_;
  struct {
    __int64 v174;
    unsigned __int64 v175;
    char* v176;
  } v174_;

  v7 = *a1;
  *a1 = 0;
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v7);
  }
  if (a2 == nullptr) {
    *a6 = 0;
    a6[1] = 0;
    return;
  }
  v162 = a1;
  v164 = a6;
  v161 = 0;
  v14 = 0;
  v171_.v171 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v12, 640, 16, 0);
  v171_.v172 = v171_.v171;
  v171_.v173 = (unsigned __int64)(v171_.v171 + 80);
  do {
    v166_.v169 = 0;
    v166_.v170 = 0;
    v166_.v167 = 0;
    v166_.v168 = nullptr;
    v166_.v166 = nullptr;
    v16 = TextSelector_1905ba0_alt1(&v166_.v166, a2);
    if (v16 == nullptr ||
        (v166_.v166 != nullptr ? (v17 = v166_.v167 == 0) : (v17 = true), v17)) {
      v18 = 1;
      goto LABEL_52;
    }
    a2 = &v16[(_QWORD)a2];
    v19 = (*(__int64 (**)(__int64, char**))(*(_QWORD*)a4 + 32LL))(a4,
                                                                  &v166_.v166);
    if ((v19 & 1) == 0) {
      goto LABEL_51;
    }
    v20 = v171_.v172;
    v21 = v166_.v166 != nullptr ? v166_.v167 : 0LL;
    if ((unsigned __int64)v171_.v172 >= v171_.v173) {
      v29 = GameHr_190ad40((__int64*)&v171_.v171, (__int64*)&v166_.v166);
    }
    else {
      *v171_.v172 = 0;
      v20[1] = 0;
      v22 = v12;
      if (v166_.v166 != nullptr) {
        v23 = v166_.v167;
        if (v166_.v167 != 0) {
          *v20 = (__int64)v166_.v166;
          v20[1] = v23;
        }
      }
      v20[3] = 0;
      v20[4] = 0;
      v20[2] = 0;
      v25 = (__int64)v166_.v168;
      v24 = v166_.v169;
      v26 = v166_.v169 - (_QWORD)v166_.v168;
      if ((char*)v166_.v169 != v166_.v168) {
        if (0xAAAAAAAAAAAAAAABLL * (v26 >> 3) > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_348;
        }
        v27 = fw_memory_HeapManager_Allocate_alt1(
            *v22, v166_.v169 - (_QWORD)v166_.v168, 16, 0);
        v20[2] = v27;
        v20[3] = v27;
        v20[4] = v27 + v26;
        do {
          *(_DWORD*)v27 = *(_DWORD*)v25;
          *(_QWORD*)(v27 + 8) = *(_QWORD*)(v25 + 8);
          v28 = *(_WORD*)(v25 + 16);
          v25 += 24;
          *(_WORD*)(v27 + 16) = v28;
          v27 += 24;
        } while (v25 != v24);
        v20[3] = v27;
      }
      v29 = v20 + 5;
      v12 = v22;
    }
    v30 = v166_.v167;
    v31 = (__int64)v166_.v168;
    v32 = v166_.v169;
    v14 += v21;
    v171_.v172 = v29;
    v33 = v166_.v166 == nullptr || v166_.v167 == 0;
    v34 = v33 || v166_.v168 == (char*)v166_.v169;
    if (v34 ||
        ((v35 = *((unsigned __int8**)v166_.v168 + 1), *(_DWORD*)v166_.v168 != 0)
             ? (v36 = v35 == nullptr)
             : (v36 = true),
         v36 || (*(_DWORD*)v166_.v168 == 1
                     ? (v37 = *((unsigned __int16*)v166_.v168 + 8) == 0)
                     : (v37 = true),
                 v37))) {
    LABEL_51:
      v18 = 0;
      goto LABEL_52;
    }
    v41 = *v35;
    if (v41 == 14) {
      v42 = *(unsigned __int16*)(v35 + 5);
    }
    else {
      v42 = 0;
    }
    v43 = *(unsigned __int16*)(v35 + 1);
    v44 = *(unsigned __int16*)(v35 + 3);
    v45 = v41 & 0xFE;
    if (v45 == 14 && v43 == 3) {
      v18 = 0;
      if (v44 == 0 && v42 <= 7) {
        v14 += 8 - v42;
      }
    }
    else {
      if (v45 != 14 || v43 != 0 || v44 != 0) {
        goto LABEL_51;
      }
      v49 = *((_DWORD*)v166_.v168 + 6);
      if (v49 != 0) {
        v50 = *((unsigned __int16**)v166_.v168 + 4);
        v51 = v161;
        if (v50 != nullptr && v49 != 1 && *((_WORD*)v166_.v168 + 20) != 0) {
          v51 = *v50;
        }
      }
      else {
        v51 = v161;
      }
      if (v51 != 0) {
        v166_.v166 = a2;
        v166_.v167 = v51;
        do {
          *(_DWORD*)(v32 - 24) = 0;
          v32 -= 24;
          *(_QWORD*)(v32 + 8) = 0;
          *(_WORD*)(v32 + 16) = 0;
        } while (v32 != v31);
        v166_.v169 = v31;
        v30 = v166_.v167;
        v53 = v166_.v166 != nullptr;
      }
      else {
        v53 = true;
      }
      v161 = v51;
      v14 += 2 * v51 + 7;
      if (!v53 || v30 == 0) {
        goto LABEL_51;
      }
      if ((unsigned __int64)v29 >= v171_.v173) {
        v62 = v51;
        v61 = GameHr_190ad40((__int64*)&v171_.v171, (__int64*)&v166_.v166);
        v51 = v62;
      }
      else {
        *v29 = 0;
        v29[1] = 0;
        if (v166_.v166 != nullptr) {
          v55 = v166_.v167;
          if (v166_.v167 != 0) {
            *v29 = (__int64)v166_.v166;
            v29[1] = v55;
          }
        }
        v29[3] = 0;
        v29[4] = 0;
        v29[2] = 0;
        v56 = (__int64)v166_.v168;
        v57 = v166_.v169;
        if ((char*)v166_.v169 != v166_.v168) {
          if (0xAAAAAAAAAAAAAAABLL * ((v166_.v169 - (__int64)v166_.v168) >> 3) >
              0xAAAAAAAAAAAAAAALL) {
          LABEL_348:
            GameRoutine_190aaf0_alt1();
          }
          v58 = v29;
          v59 = fw_memory_HeapManager_Allocate_alt1(
              *v12, v166_.v169 - (_QWORD)v166_.v168, 16, 0);
          v29 = v58;
          v58[2] = v59;
          v58[3] = v59;
          v58[4] = v59 + v57 - v56;
          do {
            *(_DWORD*)v59 = *(_DWORD*)v56;
            *(_QWORD*)(v59 + 8) = *(_QWORD*)(v56 + 8);
            v60 = *(_WORD*)(v56 + 16);
            v56 += 24;
            *(_WORD*)(v59 + 16) = v60;
            v59 += 24;
          } while (v56 != v57);
          v51 = v161;
          v58[3] = v59;
        }
        v61 = v29 + 5;
      }
      a2 += v51;
      v14 += v30;
      v18 = 0;
      v171_.v172 = v61;
    }
  LABEL_52:
    v38 = (__int64)v166_.v168;
    v39 = v166_.v169;
    v166_.v166 = nullptr;
    v166_.v167 = 0;
    v40 = (__int64)v166_.v168;
    if (v166_.v168 != (char*)v166_.v169) {
      do {
        *(_DWORD*)(v39 - 24) = 0;
        v39 -= 24;
        *(_QWORD*)(v39 + 8) = 0;
        *(_WORD*)(v39 + 16) = 0;
      } while (v39 != v38);
      v40 = (__int64)v166_.v168;
    }
    if (v40 != 0) {
      if (v40 == v38) {
        v166_.v169 = v40;
      LABEL_8:
        if (*(_QWORD*)(*v12 + 200) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v15, v40);
        continue;
      }
      do {
        *(_DWORD*)(v38 - 24) = 0;
        v38 -= 24;
        *(_QWORD*)(v38 + 8) = 0;
        *(_WORD*)(v38 + 16) = 0;
      } while (v38 != v40);
      v166_.v169 = v40;
      v40 = (__int64)v166_.v168;
      if (v166_.v168 != nullptr) {
        goto LABEL_8;
      }
    }
  } while (v18 == 0);
  if ((unsigned __int64)(v14 + 4) <= 0x100) {
    v63 = 256;
  }
  else {
    v63 = v14 + 4;
  }
  v64 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(*v12, v63, 16, 0);
  memset_alt1((__int64)v64, 0, v63);
  v65 = *v162;
  *v162 = (__int64)v64;
  if (v65 != 0) {
    v66 = 128;
    if (*(_QWORD*)(*v12 + 200) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v12 + v66, v65);
    v64 = (_BYTE*)*v162;
  }
  if ((v63 & 0xFF00) != 0) {
    v67 = v64;
  }
  else {
    v67 = nullptr;
  }
  if (v64 == nullptr || (v63 & 0xFF00) == 0) {
    v69 = 0;
  }
  else {
    v69 = v63;
  }
  if (a5 != 1 || (v67 != nullptr ? (v70 = v69 == 0) : (v70 = true), v70)) {
    v72 = 0;
    v71 = v67;
  }
  else {
    v71 = v67 + 1;
    v72 = 1;
    *v64 = 17;
  }
  v73 = v171_.v171;
  if (v171_.v171 != v171_.v172) {
    v74 = 0;
    v75 = v67 != nullptr;
    if (v69 == 0) {
      v75 = false;
    }
    v163 = v75;
    while (1) {
      if ((v74 & 1) != 0) {
        goto LABEL_135;
      }
      v76 = *v73;
      v77 = v73[1];
      v78 = v73[2];
      v79 = v73[3];
      v81 = *v73 != 0 && v77 != 0;
      if (v81 && v78 == v79) {
        if ((unsigned __int16)v73[1] + (unsigned int)(unsigned __int16)v72 <
            v69) {
          memcpy_alt1((__int64)v71, v76, (unsigned __int16)v73[1]);
          v74 = 0;
          v71 += (unsigned __int16)v77;
          v72 += v77;
          goto LABEL_136;
        }
        goto LABEL_135;
      }
      if (v78 == v79) {
        v81 = false;
      }
      if (!v81) {
        goto LABEL_196;
      }
      v83 = *(_QWORD*)(v78 + 8);
      if (*(_DWORD*)v78 == 0 || v83 == 0) {
        goto LABEL_196;
      }
      if (*(_DWORD*)v78 != 1 || *(_WORD*)(v78 + 16) == 0) {
        goto LABEL_196;
      }
      v86 = *(unsigned __int16*)(v83 + 1);
      v87 = *(unsigned __int16*)(v83 + 3);
      if (v86 == 3) {
        if (v87 != 0) {
        LABEL_196:
          if (v76 != 0) {
            v104 = v73[1];
          }
          else {
            v104 = 0;
          }
          v106 = v104 > 0x1000 || v67 == nullptr || v69 == 0;
          if (!v106 && (unsigned int)v104 + (unsigned __int16)v72 < v69) {
            v107 = &v71[v104];
            v72 += v104;
            v74 = 0;
            if (v76 != 0 && v77 - 1 < v104) {
              memcpy_alt1((__int64)v71, v76, v73[1]);
              v74 = 0;
            }
            v71 = v107;
            goto LABEL_136;
          }
        }
        else if (a3 != 0) {
          v88 = *(_DWORD*)(v78 + 24);
          v89 = 0;
          if (v88 != 0 && (v90 = *(unsigned __int8**)(v78 + 32)) != nullptr &&
              (v89 = 0, v88 != 1) && *(_WORD*)(v78 + 40) != 0 &&
              (unsigned int)(v89 = *v90) > 4) {
            v91 = nullptr;
            v74 = v163;
            if (!v163) {
              goto LABEL_136;
            }
          }
          else {
            v91 =
                EmbeddedImage_188a0a0_alt1(a3, (__int64)GameData_20ff340[v89]);
            v74 = v163;
            if (!v163) {
              goto LABEL_136;
            }
          }
          if ((unsigned int)(unsigned __int16)v72 + 15 < v69) {
            v74 = 0;
            v71[7] = (_BYTE)v91;
            v71[6] = 0;
            v72 += 15;
            v71[8] = BYTE1(v91);
            v71[9] = BYTE2(v91);
            v71[10] = BYTE3(v91);
            v71[11] = BYTE4(v91);
            v71[12] = BYTE5(v91);
            v71[13] = BYTE6(v91);
            *(_DWORD*)v71 = 268436238;
            *((_WORD*)v71 + 2) = 2048;
            v71[14] = HIBYTE(v91);
            v71 += 15;
            goto LABEL_136;
          }
        }
      LABEL_135:
        v74 = 0;
        goto LABEL_136;
      }
      if ((v86 | v87) != 0) {
        goto LABEL_196;
      }
      v166_.v167 = 0;
      v166_.v168 = nullptr;
      v166_.v166 = nullptr;
      v174_.v175 = 0;
      v174_.v176 = nullptr;
      v174_.v174 = 0;
      TextSelector_1907d20_alt2((__int64)&v166_.v166, (__int64)&v174_.v174,
                                v73 + 2);
      v92 = (__int64)v174_.v176;
      v93 = v174_.v174 & 1;
      v94 = (char*)&v174_.v174 + 1;
      v95 = (unsigned __int64)(unsigned __int8)v174_.v174 >> 1;
      if (v93 != 0) {
        v94 = v174_.v176;
        v95 = v174_.v175;
      }
      v160 = v94;
      if (v94 != nullptr) {
        v96 = v95;
      }
      else {
        v96 = 0;
      }
      if (v95 != 0) {
        v97 = (__int64)v94;
      }
      else {
        v97 = 0;
      }
      v98 = (unsigned __int64)(unsigned __int8)v166_.v166 >> 1;
      if (((unsigned __int8)v166_.v166 & 1) != 0) {
        v99 = v166_.v168;
      }
      else {
        v99 = (char*)&v166_.v166 + 1;
      }
      if (((unsigned __int8)v166_.v166 & 1) != 0) {
        v98 = v166_.v167;
      }
      if (v99 != nullptr) {
        v100 = v98;
      }
      else {
        v100 = 0;
      }
      if (!v163 || v97 == 0 || v96 == 0 || v98 == 0 || v99 == nullptr ||
          v100 == 0) {
        goto LABEL_303;
      }
      v101 = v94;
      v102 = 0;
      v103 = v96 + v98 + 4;
      while (1) {
        v109 = (unsigned __int8)*v101;
        if ((*v101 & 0x80000000) == 0) {
          break;
        }
        if ((v109 & 0xC0) == 0x80) {
          goto LABEL_231;
        }
        if ((v109 & 0xE0) == 0xC0 && v101[1] < -64) {
          v108 = 2;
        }
        else if ((v109 & 0xF0) == 0xE0 && v101[1] <= -65 && v101[2] < -64) {
          v108 = 3;
        }
        else {
          if ((v109 & 0xF8) != 0xF0 || v101[1] > -65 || v101[2] > -65 ||
              v101[3] >= -64) {
            goto LABEL_231;
          }
          v108 = 4;
        }
      LABEL_212:
        v101 += v108;
        ++v102;
      }
      if (*v101 != 0 && v109 != 14) {
        v108 = 1;
        goto LABEL_212;
      }
    LABEL_231:
      if ((unsigned __int16)(v96 + v103 + v102 + 14) +
              (unsigned int)(unsigned __int16)v72 >=
          v69) {
        goto LABEL_303;
      }
      v71[5] = v103;
      v111 = (__int64)(v71 + 9);
      v152 = v93;
      v71[4] = 0;
      v71[6] = HIBYTE(v103);
      v71[7] = v100;
      v154 = v71 + 9;
      v156 = v100;
      v158 = v96;
      *(_DWORD*)v71 = 268435470;
      v71[8] = BYTE1(v100);
      v112 = (unsigned __int16)v100;
      memcpy_alt1(v111, (__int64)v99, (unsigned __int16)v100);
      v113 = &v154[v112];
      *v113++ = v158;
      memcpy_alt1((__int64)v113, (__int64)v160, (unsigned __int16)v158);
      v114 = (char*)v113 + (unsigned __int16)v158;
      *v114 = 19;
      v115 = (__int64)(v114 + 1);
      v116 = v72 + v158 + v156 + 12;
      if (v102 == 0) {
        goto LABEL_302;
      }
      v155 = v102;
      v117 = (char*)&v174_.v174 + 2;
      if (v152 != 0) {
        v117 = (char*)(v92 + 1);
      }
      v159 = v117;
      v118 = (char*)(v92 + 2);
      if (v152 == 0) {
        v118 = (char*)&v174_.v174 + 3;
      }
      v157 = v118;
      v119 = (char*)(v92 + 3);
      if (v152 == 0) {
        v119 = (char*)&v174_.v174 + 4;
      }
      v153 = v119;
      if (v102 != 1) {
        break;
      }
      v97 = (__int64)v160;
    LABEL_241:
      if ((v155 & 1) != 0) {
        v120 = *v160;
        if (v120 < 0) {
          if ((v120 & 0xC0) == 0x80) {
            v121 = v116;
            v122 = v97;
            v123 = 127;
          }
          else if ((v120 & 0xE0) == 0xC0 && *v159 < -64) {
            v121 = v116;
            v122 = v97;
            v123 = 2;
          }
          else if ((v120 & 0xF0) == 0xE0 && *v159 <= -65 && *v157 < -64) {
            v121 = v116;
            v122 = v97;
            v123 = 3;
          }
          else {
            v122 = v97;
            v121 = v116;
            if ((v120 & 0xF8) == 0xF0 && *v159 <= -65 && *v157 <= -65) {
              if (*v153 >= -64) {
                v123 = 255;
              }
              else {
                v123 = 4;
              }
            }
            else {
              v123 = 255;
            }
          }
        }
        else {
          v121 = v116;
          v122 = v97;
          v123 = 1;
        }
        memcpy_alt1(v115, v122, v123);
        v139 = (_BYTE*)(v115 + v123);
        *v139 = 19;
        v115 = (__int64)(v139 + 1);
        v116 = v121 + v123 + 1;
      }
    LABEL_302:
      *(_WORD*)(v115 + 4) = 0;
      *(_BYTE*)(v115 + 6) = 0;
      v72 = v116 + 7;
      *(_DWORD*)v115 = 285212686;
      v71 = (_BYTE*)(v115 + 7);
      v93 = v174_.v174 & 1;
    LABEL_303:
      if (v93 != 0 && v174_.v176 != nullptr) {
        v140 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v140 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v140, (__int64)v174_.v176);
      }
      if (((unsigned __int8)v166_.v166 & 1) != 0 && v166_.v168 != nullptr) {
        v141 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v141 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v141, (__int64)v166_.v168);
      }
      v74 = 1;
    LABEL_136:
      v73 += 5;
      if (v73 == v171_.v172) {
        goto LABEL_314;
      }
    }
    v124 = v102 & 0xFFFE;
    while (2) {
      v133 = *v160;
      if (v133 < 0) {
        if ((v133 & 0xC0) == 0x80) {
          v134 = v116;
          v135 = 127;
        }
        else if ((v133 & 0xE0) == 0xC0 && *v159 < -64) {
          v134 = v116;
          v135 = 2;
        }
        else if ((v133 & 0xF0) == 0xE0 && *v159 <= -65 && *v157 < -64) {
          v134 = v116;
          v135 = 3;
        }
        else if ((v133 & 0xF8) == 0xF0 && *v159 <= -65 && *v157 <= -65) {
          v134 = v116;
          if (*v153 >= -64) {
            v135 = 255;
          }
          else {
            v135 = 4;
          }
        }
        else {
          v134 = v116;
          v135 = 255;
        }
      }
      else {
        v134 = v116;
        v135 = 1;
      }
      memcpy_alt1(v115, v97, v135);
      v136 = (_BYTE*)(v115 + v135);
      *v136 = 19;
      v137 = (__int64)(v136 + 1);
      v138 = *v160;
      if ((v138 & 0x80000000) == 0) {
        v125 = v97;
        v126 = 1;
        v127 = v134;
        goto LABEL_248;
      }
      v127 = v134;
      if ((v138 & 0xC0) == 0x80) {
        v125 = v97;
        v126 = 127;
        goto LABEL_248;
      }
      if ((v138 & 0xE0) == 0xC0 && *v159 < -64) {
        v125 = v97;
        v126 = 2;
        goto LABEL_248;
      }
      if ((v138 & 0xF0) == 0xE0 && *v159 <= -65 && *v157 < -64) {
        v125 = v97;
        v126 = 3;
        goto LABEL_248;
      }
      if ((v138 & 0xF8) == 0xF0 && *v159 <= -65) {
        v125 = v97;
        if (*v157 <= -65) {
          if (*v153 >= -64) {
            v126 = 255;
          }
          else {
            v126 = 4;
          }
        LABEL_248:
          v128 = v127 + v135;
          v129 = v125 + v135;
          v130 = v128 + 1;
          memcpy_alt1(v137, v129, v126);
          v131 = (_BYTE*)(v137 + v126);
          v124 -= 2;
          *v131 = 19;
          v115 = (__int64)(v131 + 1);
          v132 = v130 + v126;
          v97 = v129 + v126;
          v12 = (__int64*)fw_memory_g_heap_manager_ptr;
          v116 = v132 + 1;
          if (v124 == 0) {
            goto LABEL_241;
          }
          continue;
        }
      }
      else {
        v125 = v97;
      }
      break;
    }
    v126 = 255;
    goto LABEL_248;
  }
LABEL_314:
  if (a5 == 1) {
    v142 = v164;
    if (v67 != nullptr && v69 != 0) {
      LOWORD(v72) = v72 + 1;
      *v71++ = 18;
    }
  }
  else {
    v142 = v164;
  }
  if (v67 != nullptr && v69 != 0) {
    *v71 = 0;
    LOWORD(v72) = v72 + 1;
    goto LABEL_323;
  }
  if (v67 != nullptr) {
  LABEL_323:
    if ((_WORD)v72 != 0) {
      *v142 = v67;
      v142[1] = (unsigned __int16)v72;
      v143 = (__int64)v171_.v171;
      if (v171_.v171 == nullptr) {
        return;
      }
      goto LABEL_327;
    }
  }
  *v142 = 0;
  v142[1] = 0;
  v143 = (__int64)v171_.v171;
  if (v171_.v171 == nullptr) {
    return;
  }
LABEL_327:
  v144 = v171_.v172;
  if ((__int64*)v143 == v171_.v172) {
    goto LABEL_344;
  }
  v145 = v171_.v172;
  while (2) {
    *(v145 - 5) = 0;
    *(v145 - 4) = 0;
    v145 -= 5;
    v147 = v145[2];
    v148 = v145[3];
    v149 = v147;
    if (v147 != v148) {
      do {
        *(_DWORD*)(v148 - 24) = 0;
        v148 -= 24;
        *(_QWORD*)(v148 + 8) = 0;
        *(_WORD*)(v148 + 16) = 0;
      } while (v148 != v147);
      v149 = *(v144 - 3);
    }
    *(v144 - 2) = v147;
    if (v149 != 0) {
      if (v149 == v147) {
        *(v144 - 2) = v149;
      }
      else {
        do {
          *(_DWORD*)(v147 - 24) = 0;
          v147 -= 24;
          *(_QWORD*)(v147 + 8) = 0;
          *(_WORD*)(v147 + 16) = 0;
        } while (v147 != v149);
        v150 = *(v144 - 3);
        *(v144 - 2) = v149;
        v149 = v150;
        if (v150 == 0) {
          goto LABEL_334;
        }
      }
      if (*(_QWORD*)(*v12 + 200) != 0) {
        v146 = 128;
      }
      else {
        v146 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v12 + v146, v149);
    }
  LABEL_334:
    *v145 = 0;
    v145[1] = 0;
    v144 = v145;
    if ((__int64*)v143 != v145) {
      continue;
    }
    break;
  }
  v143 = (__int64)v171_.v171;
  if (v171_.v171 != nullptr) {
  LABEL_344:
    v151 = 128;
    if (*(_QWORD*)(*v12 + 200) == 0) {
      v151 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v12 + v151, v143);
  }
}

_QWORD* TextSelector_Destructor(_QWORD* result)
{
  __int64* v1;

  v1 = GameData_212e348;
  result[2] = -1;
  result[3] = -1;
  result[4] = -1;
  result[5] = -1;
  result[6] = -1;
  result[7] = -1;
  result[8] = -1;
  result[9] = -1;
  result[10] = -1;
  result[11] = -1;
  result[12] = -1;
  result[13] = -1;
  result[14] = -1;
  result[15] = -1;
  result[16] = -1;
  result[17] = 0;
  *result = v1 + 2;
  result[1] = -1;
  return result;
}

__int64 TextSelector_Unknown4(__int64 a1, _QWORD* a2)
{
  int* v2;
  int v6;
  __int64 v7;
  bool v8;
  int v9;
  bool v10;
  __int64 v11;
  __int64 v12;

  v2 = (int*)a2[2];
  if (*a2 == 0 || a2[1] == 0 || v2 == (int*)a2[3]) {
    return (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 24LL))(
        a1, 65280, 0xFFFF);
  }
  v6 = *v2;
  v7 = *((_QWORD*)v2 + 1);
  v8 = *v2 == 0 || v7 == 0;
  if (v8 || ((v9 = *((unsigned __int16*)v2 + 8), v6 == 1) ? (v10 = v9 == 0)
                                                          : (v10 = true),
             v10)) {
    v12 = 0xFFFF;
    v11 = 0xFFFF;
  }
  else {
    v11 = *(unsigned __int16*)(v7 + 1);
    v12 = *(unsigned __int16*)(v7 + 3);
  }
  return (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 24LL))(
      a1, v11, v12);
}

bool TextSelector_19073e0(char* a1, int* a2)
{
  __int64 v3;
  _QWORD* v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  int v13;
  __int64 v14;
  bool v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char** v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int16 v25;
  char** v26;
  __int64 v27;
  unsigned __int8* v28;
  unsigned __int8* v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  char* v38;
  unsigned int v39;
  _BOOL4 v40;
  char* v41;
  int v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  int v51;
  char** v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v73;
  char** v74;
  char** v75;
  __int64 v76;
  __int64 v77;
  char* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v83;
  int v84;
  unsigned __int8* v86;
  struct {
    char* v87;
    char** v88;
    char** v89;
  } v87_;
  struct {
    char* v90;
    char* v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
  } v90_;
  _QWORD v95[19];

  v95[6] = -65536;
  __builtin_memset(&v95[7], 255, 80);
  v95[0] = ui_text_TextSelector_vtable;
  v95[1] = 0xFFFF0000FFFFFF00LL;
  v95[2] = 0xFFFF0002FFFF0001LL;
  v95[3] = 0xFFFF0005FFFF0004LL;
  v95[4] = 0xFFFF0007FFFF0006LL;
  v95[5] = 0xFFFF0003FFFF0008LL;
  v3 = fw_memory_g_heap_manager_ptr;
  v95[17] = 11;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 640, 16, 0);
  GameHr_190ab40(nullptr, nullptr, v4);
  v86 = nullptr;
  v87_.v87 = (char*)v4;
  v87_.v88 = (char**)v4;
  v87_.v89 = (char**)(v4 + 80);
  v5 = a1;
  v6 = 0;
  v83 = a1;
  v84 = -1;
  do {
    if (*v5 == 0) {
      break;
    }
    v90_.v93 = 0;
    v90_.v94 = 0;
    v90_.v91 = nullptr;
    v90_.v92 = 0;
    v90_.v90 = nullptr;
    v7 = TextSelector_1905ba0_alt1(&v90_.v90, v5);
    v8 = v90_.v90;
    v9 = v90_.v91;
    v11 = v90_.v92;
    v10 = v90_.v93;
    v12 = v90_.v90 == nullptr || v90_.v91 == nullptr;
    v13 = v12;
    if (!v12) {
      v6 += (__int64)v7;
      v5 = &v7[(_QWORD)v5];
      if (v90_.v92 == v90_.v93) {
        v17 = v95[0];
        v18 = 65280;
        v19 = 0xFFFF;
      }
      else {
        v14 = *(_QWORD*)(v90_.v92 + 8);
        v15 = *(_DWORD*)v90_.v92 == 0 || v14 == 0;
        if (v15 || (*(_DWORD*)v90_.v92 == 1
                        ? (v16 = *(unsigned __int16*)(v90_.v92 + 16) == 0)
                        : (v16 = true),
                    v16)) {
          v19 = 0xFFFF;
          v18 = 0xFFFF;
        }
        else {
          v18 = *(unsigned __int16*)(v14 + 1);
          v19 = *(unsigned __int16*)(v14 + 3);
        }
        v17 = v95[0];
      }
      if (((*(__int64 (**)(_QWORD*, __int64, __int64))(v17 + 24))(v95, v18,
                                                                  v19) &
           1) != 0) {
        v20 = v87_.v88;
        if (v87_.v88 >= v87_.v89) {
          v26 =
              (char**)GameHr_190ad40((__int64*)&v87_.v87, (__int64*)&v90_.v90);
        }
        else {
          v21 = (__int64*)v3;
          v22 = v10 - v11;
          *v87_.v88 = v8;
          v20[1] = v9;
          v20[2] = nullptr;
          v20[3] = nullptr;
          v20[4] = nullptr;
          if (v10 != v11) {
            if (0xAAAAAAAAAAAAAAABLL * (v22 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
              GameRoutine_190aaf0_alt1();
            }
            v23 = fw_memory_HeapManager_Allocate_alt1(*v21, v10 - v11, 16, 0);
            v20[2] = (char*)v23;
            v20[3] = (char*)v23;
            v20[4] = (char*)(v23 + v22);
            v24 = v11;
            do {
              *(_DWORD*)v23 = *(_DWORD*)v24;
              *(_QWORD*)(v23 + 8) = *(_QWORD*)(v24 + 8);
              v25 = *(_WORD*)(v24 + 16);
              v24 += 24;
              *(_WORD*)(v23 + 16) = v25;
              v23 += 24;
            } while (v24 != v10);
            v20[3] = (char*)v23;
          }
          v26 = v20 + 5;
          v3 = (__int64)v21;
        }
        v87_.v88 = v26;
        if (v11 == v10) {
          v28 = (unsigned __int8*)v8;
          while (v28 >= (unsigned __int8*)v8) {
            v29 = v28;
            if ((char*)v28 > &v9[(_QWORD)v8 - 1]) {
              break;
            }
            ++v28;
            if ((char*)(v29 + 1) > &v9[(_QWORD)v8]) {
              break;
            }
            v30 = *v29;
            if ((char)*v29 < 0) {
              if ((v30 & 0xC0) == 0x80) {
                break;
              }
              if ((v30 & 0xE0) == 0xC0 && ((v32 = *v28) & 0xC0) == 0x80) {
                v31 = v32 | (v30 << 8);
                v28 = v29 + 2;
              }
              else if ((v30 & 0xF0) == 0xE0 && ((v33 = *v28) & 0xC0) == 0x80 &&
                       ((v34 = v29[2]) & 0xC0) == 0x80) {
                v31 = (v30 << 16) | (v33 << 8) | v34;
                v28 = v29 + 3;
              }
              else {
                if ((v30 & 0xF8) != 0xF0) {
                  break;
                }
                v35 = *v28;
                if ((v35 & 0xC0) != 0x80) {
                  break;
                }
                v36 = v29[2];
                if ((v36 & 0xC0) != 0x80) {
                  break;
                }
                v37 = v29[3];
                if ((v37 & 0xC0) != 0x80) {
                  break;
                }
                v31 = (v30 << 24) | (v35 << 16) | (v36 << 8) | v37;
                v28 = v29 + 4;
              }
            }
            else {
              v31 = *v29;
            }
            if ((v30 & 0x80) == 0 && v31 == 17) {
              v86 = v29;
              v84 = -1 - 858993459 *
                             ((unsigned __int64)((char*)v26 - v87_.v87) >> 3);
              break;
            }
          }
        }
      }
    }
    while (v10 != v11) {
      *(_DWORD*)(v10 - 24) = 0;
      v10 -= 24;
      *(_QWORD*)(v10 + 8) = 0;
      *(_WORD*)(v10 + 16) = 0;
    }
    if (v11 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v27 = 128;
      }
      else {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v27, v11);
    }
  } while (v13 == 0);
  v38 = v83;
  v39 = 0x7FFFFFFF;
  v40 = false;
  if (v83 == nullptr || v6 == 0) {
    goto LABEL_160;
  }
  if (v86 == nullptr) {
    v39 = 0;
    v40 = false;
  LABEL_160:
    *a2 = v39;
    goto LABEL_161;
  }
  v41 = &v83[v6 - 1];
  v42 = *a2;
  if (*a2 == 0x80000000) {
    v43 = (unsigned __int8)*v83;
    if (v43 == 18) {
      if (*v41 == 17) {
      LABEL_154:
        v40 = true;
        *v83 = 17;
        *v41 = 18;
        v39 = 0x80000000;
        goto LABEL_160;
      }
    }
    else if (v43 == 17 && *v41 == 18) {
      v40 = false;
      v39 = 0x80000000;
      goto LABEL_160;
    }
    memmove_alt1((__int64)(v83 + 1), (__int64)v83, v86 - (unsigned __int8*)v83);
    goto LABEL_154;
  }
  if (v42 == 0x7FFFFFFF) {
    if (*v83 == 18 && *v41 == 17) {
      v40 = false;
    }
    else {
      memmove_alt1((__int64)(v83 + 1), (__int64)v83,
                   v86 - (unsigned __int8*)v83);
      v40 = true;
      *v83 = 18;
      *v41 = 17;
    }
    goto LABEL_159;
  }
  v44 = (unsigned __int8)*v83;
  if (v42 < 1) {
    v40 = false;
    if (v44 == 17) {
      goto LABEL_151;
    }
    goto LABEL_158;
  }
  v40 = v44 != 18;
  if (v44 != 18) {
    v45 = 0;
    while (1) {
      v46 = (__int64)v87_.v87;
      v47 = &v87_.v87[40 * v84];
      v48 = *((_QWORD*)v47 + 1);
      if (*(_QWORD*)v47 != 0 && v48 != 0 &&
          *(_QWORD*)v47 + v48 - 1 == (_QWORD)v86) {
        if (*((_QWORD*)v47 + 2) == *((_QWORD*)v47 + 3)) {
          v53 = v48 - 1;
          if (v53 != 0) {
            *((_QWORD*)v47 + 1) = v53;
          }
          else {
            *(_QWORD*)v47 = 0;
            *((_QWORD*)v47 + 1) = 0;
          }
        }
        v55 = v84 + 1LL;
        v56 = (__int64*)(v46 + 40 * v55);
        ++v84;
        v57 = *v56;
        v58 = v56[2];
        v59 = v56[3];
        if (*v56 != 0 && v56[1] != 0 && v58 != v59) {
          do {
            *v56 = v57 - 1;
            do {
              --*(_QWORD*)(v58 + 8);
              v58 += 24;
            } while (v58 != v59);
            ++v55;
            v56 = (__int64*)(v46 + 40 * v55);
            v57 = *v56;
            v58 = v56[2];
            v59 = v56[3];
          } while (*v56 != 0 && v56[1] != 0 && v58 != v59);
          v84 = v55;
        }
        memmove_alt1((__int64)v86, (__int64)(v86 + 1), v57 - 1 - (_QWORD)v86);
        v64 = (__int64)v87_.v87;
        *(_BYTE*)(v57 - 1) = 17;
        v65 = (__int64*)(v64 + 40 * v55);
        v66 = *v65;
        v67 = v65[1];
        v68 = v65[2];
        v69 = v65[3];
        if (*v65 == 0 || v67 == 0 || v68 == v69) {
          if (v66 == 0 || v67 == -1) {
            *v65 = 0;
            v65[1] = 0;
          }
          else {
            *v65 = v66 - 1;
            v65[1] = v67 + 1;
          }
        }
        else {
          *v65 = v66 - 1;
          do {
            --*(_QWORD*)(v68 + 8);
            v68 += 24;
          } while (v68 != v69);
        }
        v86 = (unsigned __int8*)(v57 - 1);
        goto LABEL_145;
      }
      v51 = v86[1];
      if ((char)v86[1] < 0) {
        break;
      }
      if (v51 != 18) {
        v54 = 1;
      LABEL_144:
        memmove_alt1((__int64)v86, (__int64)(v86 + 1), v54);
        v86 += v54;
        *v86 = 17;
        goto LABEL_145;
      }
      memmove_alt1((__int64)(v83 + 1), (__int64)v83,
                   v86 - (unsigned __int8*)v83);
      v86 = (unsigned __int8*)&v83[v6 - 1];
      *v83 = 18;
      v52 = v87_.v88;
      *v41 = 17;
      v84 = -1 - 858993459 * (((unsigned __int64)v52 - v46) >> 3);
    LABEL_145:
      v44 = (unsigned __int8)*v83;
      if (v44 == 18) {
        v38 = v83;
        goto LABEL_157;
      }
      if (++v45 >= *a2) {
        v40 = true;
        if (v44 != 17) {
          goto LABEL_158;
        }
        goto LABEL_151;
      }
    }
    if ((v51 & 0xC0) == 0x80) {
      v54 = 127;
    }
    else if ((v51 & 0xE0) == 0xC0 && (char)v86[2] < -64) {
      v54 = 2;
    }
    else if ((v51 & 0xF0) == 0xE0 && (char)v86[2] <= -65 &&
             (char)v86[3] < -64) {
      v54 = 3;
    }
    else if ((v51 & 0xF8) == 0xF0 && (char)v86[2] <= -65 &&
             (char)v86[3] <= -65) {
      if ((char)v86[4] >= -64) {
        v54 = 255;
      }
      else {
        v54 = 4;
      }
    }
    else {
      v54 = 255;
    }
    goto LABEL_144;
  }
  v45 = 0;
LABEL_157:
  *a2 = v45;
  v44 = (unsigned __int8)*v38;
  if (v44 == 17) {
  LABEL_151:
    v39 = 0x80000000;
    goto LABEL_160;
  }
LABEL_158:
  if (v44 == 18) {
  LABEL_159:
    v39 = 0x7FFFFFFF;
    goto LABEL_160;
  }
LABEL_161:
  v73 = (__int64)v87_.v87;
  if (v87_.v87 == nullptr) {
    return v40;
  }
  v74 = v87_.v88;
  if (v87_.v87 == (char*)v87_.v88) {
    goto LABEL_179;
  }
  v75 = v87_.v88;
  do {
    *(v75 - 5) = nullptr;
    *(v75 - 4) = nullptr;
    v75 -= 5;
    v77 = (__int64)v75[2];
    v78 = v75[3];
    v79 = v77;
    if ((char*)v77 != v78) {
      do {
        *((_DWORD*)v78 - 6) = 0;
        v78 -= 24;
        *((_QWORD*)v78 + 1) = 0;
        *((_WORD*)v78 + 8) = 0;
      } while (v78 != (char*)v77);
      v79 = (__int64)*(v74 - 3);
    }
    *(v74 - 2) = (char*)v77;
    if (v79 != 0) {
      if (v79 == v77) {
        *(v74 - 2) = (char*)v79;
      LABEL_165:
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v76 = 128;
        }
        else {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v76, v79);
        goto LABEL_169;
      }
      do {
        *(_DWORD*)(v77 - 24) = 0;
        v77 -= 24;
        *(_QWORD*)(v77 + 8) = 0;
        *(_WORD*)(v77 + 16) = 0;
      } while (v77 != v79);
      v80 = (__int64)*(v74 - 3);
      *(v74 - 2) = (char*)v79;
      v79 = v80;
      if (v80 != 0) {
        goto LABEL_165;
      }
    }
  LABEL_169:
    *v75 = nullptr;
    v75[1] = nullptr;
    v74 = v75;
  } while ((char**)v73 != v75);
  v73 = (__int64)v87_.v87;
  if (v87_.v87 != nullptr) {
  LABEL_179:
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v81, v73);
  }
  return v40;
}

char* TextSelector_1907d20(char* result, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v20;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int16* v26;
  char* v27;
  int v28;
  __int64 v29;
  __int64 v31;

  v3 = *a3;
  if (a3[1] != *a3) {
    v4 = *(_QWORD*)(v3 + 8);
    if (*(_DWORD*)v3 != 0 && v4 != 0 && *(_DWORD*)v3 == 1 &&
        *(_WORD*)(v3 + 16) != 0 && (*(_BYTE*)v4 & 0xFE) == 0xE &&
        *(_WORD*)(v4 + 1) == 0) {
      v8 = *(unsigned __int16*)(v4 + 3);
      if (v8 == 16) {
        v17 = *(_DWORD*)(v3 + 24);
        v18 = *(_QWORD*)(v3 + 32);
        if (v17 != 0 && v18 != 0) {
          v20 = *(unsigned __int16*)(v3 + 40);
          if (v17 != 1 && (_DWORD)v20 != 0) {
            v23 = a2;
            if ((*result & 1) != 0) {
              **((_BYTE**)result + 2) = 0;
              *((_QWORD*)result + 1) = 0;
            }
            else {
              *(_WORD*)result = 0;
            }
            result = (char*)GameRoutine_1a09ce0(
                (__int64)result, (const char*)(v18 + 2), v20 - 2);
            v3 = *a3;
            a2 = v23;
          }
        }
        v28 = *(_DWORD*)(v3 + 48);
        v29 = *(_QWORD*)(v3 + 56);
        if (v28 != 0 && v29 != 0) {
          v31 = *(unsigned __int16*)(v3 + 64);
          if (v28 != 1 && (_DWORD)v31 != 0) {
            if ((*(_BYTE*)a2 & 1) != 0) {
              **(_BYTE**)(a2 + 16) = 0;
              *(_QWORD*)(a2 + 8) = 0;
            }
            else {
              *(_WORD*)a2 = 0;
            }
            return (char*)GameRoutine_1a09ce0(a2, (const char*)(v29 + 2),
                                              v31 - 2);
          }
        }
      }
      else if (v8 == 0) {
        v9 = *(_DWORD*)(v3 + 48);
        v10 = *(_QWORD*)(v3 + 56);
        v11 = *(unsigned __int16*)(v3 + 64);
        if (v9 != 0 && v10 != 0 && v9 != 1 && (_DWORD)v11 != 0) {
          v16 = a2;
          if ((*result & 1) != 0) {
            **((_BYTE**)result + 2) = 0;
            *((_QWORD*)result + 1) = 0;
          }
          else {
            *(_WORD*)result = 0;
          }
          GameRoutine_1a09ce0((__int64)result, (const char*)(v10 + 2), v11 - 2);
          v3 = *a3;
          a2 = v16;
        }
        v24 = *(_DWORD*)(v3 + 24);
        v25 = 0;
        if (v24 != 0) {
          v26 = *(unsigned __int16**)(v3 + 32);
          v27 = (char*)a2;
          if (v26 != nullptr) {
            v25 = 0;
            if (v24 != 1 && *(_WORD*)(v3 + 40) != 0) {
              v25 = *v26;
            }
          }
        }
        else {
          v27 = (char*)a2;
        }
        return GameRoutine_60a060(v27, v10 + v11, v25);
      }
    }
  }
  return result;
}

__int64 TextSelector_1907f20(char* a1)
{
  char* v1;
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  _QWORD* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned __int8* v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    char* v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
  } v44_;
  struct {
    _QWORD* v49;
    _QWORD* v50;
    unsigned __int64 v51;
  } v49_;

  if (a1 == nullptr) {
    return 0;
  }
  v1 = a1;
  if (*a1 == 0) {
    return 0;
  }
  v2 = fw_memory_g_heap_manager_ptr;
  v49_.v49 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 640, 16, 0);
  v49_.v50 = v49_.v49;
  v49_.v51 = (unsigned __int64)(v49_.v49 + 80);
  do {
    v44_.v47 = 0;
    v44_.v48 = 0;
    v44_.v45 = 0;
    v44_.v46 = 0;
    v44_.v44 = nullptr;
    v3 = TextSelector_1905ba0_alt1(&v44_.v44, v1);
    if (v3 == nullptr) {
      v5 = v44_.v46;
      v6 = v44_.v47;
    LABEL_13:
      v8 = 1;
      if (v5 == v6) {
        goto LABEL_15;
      }
      do {
      LABEL_14:
        *(_DWORD*)(v6 - 24) = 0;
        v6 -= 24;
        *(_QWORD*)(v6 + 8) = 0;
        *(_WORD*)(v6 + 16) = 0;
      } while (v6 != v5);
      goto LABEL_15;
    }
    v4 = v44_.v45;
    v5 = v44_.v46;
    v6 = v44_.v47;
    if (v44_.v44 == nullptr || v44_.v45 == 0) {
      goto LABEL_13;
    }
    v1 = &v3[(_QWORD)v1];
    if (v44_.v46 != v44_.v47) {
      v8 = 0;
      goto LABEL_14;
    }
    v10 = v49_.v50;
    if ((unsigned __int64)v49_.v50 >= v49_.v51) {
      v12 = v44_.v46;
      v11 = GameHr_190ad40((__int64*)&v49_.v49, (__int64*)&v44_.v44);
      v5 = v12;
    }
    else {
      *v49_.v50 = v44_.v44;
      v10[1] = v4;
      v10[2] = 0;
      v10[3] = 0;
      v11 = v10 + 5;
      v10[4] = 0;
    }
    v8 = 0;
    v49_.v50 = v11;
    if (v5 != v6) {
      goto LABEL_14;
    }
  LABEL_15:
    if (v5 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v9, v5);
    }
  } while (v8 == 0);
  v15 = (__int64)v49_.v49;
  v14 = v49_.v50;
  if (v49_.v49 == v49_.v50) {
    v13 = 1;
    if (v49_.v49 != nullptr) {
    LABEL_80:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v42, v15);
    }
  }
  else {
    v16 = 0;
    v17 = (__int64)v49_.v49;
    do {
      v18 = *(unsigned __int8**)v17;
      v19 = *(_DWORD*)(v17 + 8);
      v20 = 0;
      while (v19 >= 1) {
        v23 = *v18;
        if ((char)*v18 < 0) {
          if ((v23 & 0xC0) == 0x80) {
            v26 = -127;
            v23 = 128;
            goto LABEL_60;
          }
          if ((v23 & 0xE0) == 0xC0 && ((v27 = v18[1]) & 0xC0) == 0x80) {
            v23 = v27 | (v23 << 8);
            v24 = -2;
            v25 = 2;
          }
          else if ((v23 & 0xF0) == 0xE0 && ((v28 = v18[1]) & 0xC0) == 0x80 &&
                   ((v29 = v18[2]) & 0xC0) == 0x80) {
            v30 = (v23 << 16) | (v28 << 8);
            v24 = -3;
            v23 = v30 | v29;
            v25 = 3;
          }
          else {
            if ((v23 & 0xF8) != 0xF0 || ((v31 = v18[1]) & 0xC0) != 0x80 ||
                ((v32 = v18[2]) & 0xC0) != 0x80 ||
                ((v33 = v18[3]) & 0xC0) != 0x80) {
              v26 = -255;
              v23 = -1;
            LABEL_60:
              v19 += v26;
            LABEL_61:
              v21 = v20 != 0;
            LABEL_62:
              v16 += v21;
              v21 = 0;
              v22 = v16;
              goto LABEL_32;
            }
            v34 = (v23 << 24) | (v31 << 16);
            v24 = -4;
            v35 = v34 | (v32 << 8);
            v25 = 4;
            v23 = v35 | v33;
          }
        }
        else {
          v24 = -1;
          v25 = 1;
        }
        v18 += v25;
        v19 += v24;
        if (v23 == 10) {
          if ((v20 & 1) != 0) {
            v21 = 1;
            v23 = 10;
            goto LABEL_62;
          }
          v21 = 2;
        }
        else {
          if (v23 != 13) {
            goto LABEL_61;
          }
          v21 = 1;
          if ((v20 & 2) != 0) {
            v23 = 13;
            goto LABEL_62;
          }
        }
        v22 = v16 + 1;
      LABEL_32:
        if (v19 >= 1) {
          v20 = v21;
        }
        else {
          v16 = v22;
          v20 = 0;
        }
        if (v23 == 0) {
          break;
        }
      }
      v17 += 40;
    } while ((_QWORD*)v17 != v49_.v50);
    v13 = v16 + 1;
    if (v49_.v49 != nullptr) {
      v36 = v49_.v50;
      while (1) {
        *(v36 - 5) = 0;
        *(v36 - 4) = 0;
        v36 -= 5;
        v38 = v36[2];
        v39 = v36[3];
        v40 = v38;
        if (v38 != v39) {
          do {
            *(_DWORD*)(v39 - 24) = 0;
            v39 -= 24;
            *(_QWORD*)(v39 + 8) = 0;
            *(_WORD*)(v39 + 16) = 0;
          } while (v39 != v38);
          v40 = *(v14 - 3);
        }
        *(v14 - 2) = v38;
        if (v40 == 0) {
          goto LABEL_70;
        }
        if (v40 == v38) {
          *(v14 - 2) = v40;
        }
        else {
          do {
            *(_DWORD*)(v38 - 24) = 0;
            v38 -= 24;
            *(_QWORD*)(v38 + 8) = 0;
            *(_WORD*)(v38 + 16) = 0;
          } while (v38 != v40);
          v41 = *(v14 - 3);
          *(v14 - 2) = v40;
          v40 = v41;
          if (v41 == 0) {
            goto LABEL_70;
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v37 = 128;
        }
        else {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v37, v40);
      LABEL_70:
        *v36 = 0;
        v36[1] = 0;
        v14 = v36;
        if ((_QWORD*)v15 == v36) {
          goto LABEL_80;
        }
      }
    }
  }
  return v13;
}

__int64 TextSelector_Unknown3(__int64 a1, unsigned __int16 a2,
                              unsigned __int16 a3)
{
  unsigned __int64 v3;
  _BOOL4 v4;
  unsigned __int16* v5;
  unsigned __int64 i;
  int v7;
  int v8;

  v3 = *(unsigned int*)(a1 + 136);
  v4 = *(_DWORD*)(a1 + 136) == 0;
  if ((int)v3 >= 1) {
    v5 = (unsigned __int16*)(a1 + 10);
    for (i = 1;; ++i) {
      v7 = *(v5 - 1);
      if (v7 == 0xFFFF) {
        break;
      }
      if (v7 == a2) {
        v8 = *v5;
        v4 = v8 == a3 || v8 == 0xFFFF;
        if (i >= v3) {
          return v4 ^ (unsigned int)(*(_DWORD*)(a1 + 140) == 1);
        }
      }
      else {
        v4 = false;
        if (i >= v3) {
          return v4 ^ (unsigned int)(*(_DWORD*)(a1 + 140) == 1);
        }
      }
      v5 += 2;
      if (v4) {
        return v4 ^ (unsigned int)(*(_DWORD*)(a1 + 140) == 1);
      }
    }
    v4 = true;
  }
  return v4 ^ (unsigned int)(*(_DWORD*)(a1 + 140) == 1);
}

#pragma GCC visibility pop
