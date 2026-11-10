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
__int64 TextSelector_1907d20(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern char* GameData_20ff340[5];
__attribute__((swiftcall)) void TextSelector_19063a0(PSEUDO_X8 x8_,
                                                     _QWORD* result, __int64 a2,
                                                     __int64 a3, __int64 a4,
                                                     int a5);

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

__attribute__((swiftcall)) void TextSelector_19063a0(PSEUDO_X8 x8_,
                                                     _QWORD* result, __int64 a2,
                                                     __int64 a3, __int64 a4,
                                                     int a5)
{
  _QWORD* a6 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  _QWORD* v10;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  int v18;
  char v19;
  __int64* v20;
  unsigned __int64 v21;
  _QWORD* v22;
  unsigned __int64 v23;
  char* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;
  __int64* v29;
  unsigned __int64 v30;
  char* v31;
  char* v32;
  bool v33;
  bool v34;
  unsigned __int8* v35;
  bool v36;
  bool v37;
  char* v38;
  char* v39;
  char* v40;
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
  char* v56;
  char* v57;
  __int64* v58;
  __int64 v59;
  __int16 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  _BYTE* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _BYTE* v68;
  __int64 v69;
  _BYTE* v70;
  unsigned __int16 v72;
  bool v73;
  _BYTE* v74;
  int v75;
  __int64* v76;
  char v77;
  _BOOL4 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  _BOOL4 v85;
  __int64 v87;
  int v90;
  int v91;
  int v92;
  int v93;
  unsigned __int8* v94;
  char* v95;
  int v96;
  char* v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  char* v100;
  unsigned __int64 v101;
  char* v102;
  unsigned __int64 v103;
  char* v104;
  __int16 v105;
  __int16 v106;
  unsigned __int64 v107;
  bool v109;
  _BYTE* v110;
  __int64 v111;
  int v112;
  _BYTE* v114;
  __int64 v115;
  _WORD* v116;
  _BYTE* v117;
  _BYTE* v118;
  int v119;
  char* v120;
  char* v121;
  char* v122;
  int v123;
  int v124;
  char* v125;
  unsigned int v126;
  int v127;
  char* v128;
  unsigned int v129;
  int v130;
  unsigned int v131;
  char* v132;
  unsigned int v133;
  _BYTE* v134;
  unsigned int v135;
  int v136;
  int v137;
  unsigned int v138;
  _BYTE* v139;
  _BYTE* v140;
  int v141;
  _BYTE* v142;
  __int64 v143;
  __int64 v144;
  _QWORD* v145;
  __int64* v146;
  __int64* v147;
  __int64* v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  int v155;
  char* v156;
  _BYTE* v157;
  char v158;
  int v159;
  char* v160;
  int v161;
  char* v162;
  char* v163;
  unsigned __int64 v164;
  _QWORD* v165;
  _BOOL4 v166;
  _QWORD* v167;
  __int64 v169;
  unsigned __int64 v170;
  char* v171;
  char* v172;
  __int64 v173;
  __int64 v174;
  __int64* v175;
  unsigned __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  char* v179;

  v7 = *result;
  *result = 0;
  v10 = result;
  v12 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  if (a2 == 0) {
    *a6 = 0;
    a6[1] = 0;
    {
      result;
      return;
    }
  }
  v165 = v10;
  v167 = a6;
  v164 = 0;
  v14 = 0;
  v174 = fw_memory_HeapManager_Allocate(*v12, 640, 16, 0);
  v175 = (__int64*)v174;
  v176 = v174 + 640;
  do {
    v172 = nullptr;
    v173 = 0;
    v170 = 0;
    v171 = nullptr;
    v169 = 0;
    v16 = TextSelector_1905ba0(&v169, a2);
    if (v16 == 0 || (v169 != 0 ? (v17 = v170 == 0) : (v17 = true), v17)) {
      v18 = 1;
      goto LABEL_52;
    }
    a2 += v16;
    v19 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)a4 + 32LL))(a4, &v169);
    if ((v19 & 1) == 0) {
      goto LABEL_51;
    }
    v20 = v175;
    v21 = v169 != 0 ? v170 : 0LL;
    if ((unsigned __int64)v175 >= v176) {
      v29 = (__int64*)GameRoutine_190ad40(&v174, &v169);
    }
    else {
      *v175 = 0;
      v20[1] = 0;
      v22 = v12;
      if (v169 != 0) {
        v23 = v170;
        if (v170 != 0) {
          *v20 = v169;
          v20[1] = v23;
        }
      }
      v20[3] = 0;
      v20[4] = 0;
      v20[2] = 0;
      v25 = v171;
      v24 = v172;
      v26 = v172 - v171;
      if (v172 != v171) {
        if (0xAAAAAAAAAAAAAAABLL * (v26 >> 3) > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_348;
        }
        v27 = fw_memory_HeapManager_Allocate(*v22, v172 - v171, 16, 0);
        v20[2] = v27;
        v20[3] = v27;
        v20[4] = v27 + v26;
        do {
          *(_DWORD*)v27 = *(_DWORD*)v25;
          *(_QWORD*)(v27 + 8) = *((_QWORD*)v25 + 1);
          v28 = *((_WORD*)v25 + 8);
          v25 += 24;
          *(_WORD*)(v27 + 16) = v28;
          v27 += 24;
        } while (v25 != v24);
        v20[3] = v27;
      }
      v29 = v20 + 5;
      v12 = v22;
    }
    v30 = v170;
    v31 = v171;
    v32 = v172;
    v14 += v21;
    v175 = v29;
    v33 = v169 == 0 || v170 == 0;
    v34 = v33 || v171 == v172;
    if (v34 || ((v35 = *((unsigned __int8**)v171 + 1), *(_DWORD*)v171 != 0)
                    ? (v36 = v35 == nullptr)
                    : (v36 = true),
                v36 || (*(_DWORD*)v171 == 1
                            ? (v37 = *((unsigned __int16*)v171 + 8) == 0)
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
      v49 = *((_DWORD*)v171 + 6);
      if (v49 != 0) {
        v50 = *((unsigned __int16**)v171 + 4);
        v51 = v164;
        if (v50 != nullptr && v49 != 1 && *((_WORD*)v171 + 20) != 0) {
          v51 = *v50;
        }
      }
      else {
        v51 = v164;
      }
      if (v51 != 0) {
        v169 = a2;
        v170 = v51;
        do {
          *((_DWORD*)v32 - 6) = 0;
          v32 -= 24;
          *((_QWORD*)v32 + 1) = 0;
          *((_WORD*)v32 + 8) = 0;
        } while (v32 != v31);
        v172 = v31;
        v30 = v170;
        v53 = v169 != 0;
      }
      else {
        v53 = true;
      }
      v164 = v51;
      v14 += 2 * v51 + 7;
      if (!v53 || v30 == 0) {
        goto LABEL_51;
      }
      if ((unsigned __int64)v29 >= v176) {
        v62 = v51;
        v61 = GameRoutine_190ad40(&v174, &v169);
        v51 = v62;
      }
      else {
        *v29 = 0;
        v29[1] = 0;
        if (v169 != 0) {
          v55 = v170;
          if (v170 != 0) {
            *v29 = v169;
            v29[1] = v55;
          }
        }
        v29[3] = 0;
        v29[4] = 0;
        v29[2] = 0;
        v56 = v171;
        v57 = v172;
        if (v172 != v171) {
          if (0xAAAAAAAAAAAAAAABLL * ((v172 - v171) >> 3) >
              0xAAAAAAAAAAAAAAALL) {
          LABEL_348:
            GameRoutine_190aaf0();
          }
          v58 = v29;
          v59 = fw_memory_HeapManager_Allocate(*v12, v172 - v171, 16, 0);
          v29 = v58;
          v58[2] = v59;
          v58[3] = v59;
          v58[4] = v59 + v57 - v56;
          do {
            *(_DWORD*)v59 = *(_DWORD*)v56;
            *(_QWORD*)(v59 + 8) = *((_QWORD*)v56 + 1);
            v60 = *((_WORD*)v56 + 8);
            v56 += 24;
            *(_WORD*)(v59 + 16) = v60;
            v59 += 24;
          } while (v56 != v57);
          v51 = v164;
          v58[3] = v59;
        }
        v61 = (__int64)(v29 + 5);
      }
      a2 += v51;
      v14 += v30;
      v18 = 0;
      v175 = (__int64*)v61;
    }
  LABEL_52:
    v38 = v171;
    v39 = v172;
    v169 = 0;
    v170 = 0;
    v40 = v171;
    if (v171 != v172) {
      do {
        *((_DWORD*)v39 - 6) = 0;
        v39 -= 24;
        *((_QWORD*)v39 + 1) = 0;
        *((_WORD*)v39 + 8) = 0;
      } while (v39 != v38);
      v40 = v171;
    }
    if (v40 != nullptr) {
      if (v40 == v38) {
        v172 = v40;
      LABEL_8:
        if (*(_QWORD*)(*v12 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*v12 + v15);
        continue;
      }
      do {
        *((_DWORD*)v38 - 6) = 0;
        v38 -= 24;
        *((_QWORD*)v38 + 1) = 0;
        *((_WORD*)v38 + 8) = 0;
      } while (v38 != v40);
      v172 = v40;
      if (v171 != nullptr) {
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
  v64 = (_BYTE*)fw_memory_HeapManager_Allocate(*v12, v63, 16, 0);
  result = (_QWORD*)memset(v64, 0, v63, v65, v66, v67);
  v68 = (_BYTE*)*v165;
  *v165 = v64;
  if (v68 != nullptr) {
    v69 = 128;
    if (*(_QWORD*)(*v12 + 200LL) == 0) {
      v69 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*v12 + v69);
    v64 = (_BYTE*)*v165;
  }
  if ((v63 & 0xFF00) != 0) {
    v70 = v64;
  }
  else {
    v70 = nullptr;
  }
  if (v64 == nullptr || (v63 & 0xFF00) == 0) {
    v72 = 0;
  }
  else {
    v72 = v63;
  }
  if (a5 != 1 || (v70 != nullptr ? (v73 = v72 == 0) : (v73 = true), v73)) {
    v75 = 0;
    v74 = v70;
  }
  else {
    v74 = v70 + 1;
    v75 = 1;
    *v64 = 17;
  }
  v76 = (__int64*)v174;
  if ((__int64*)v174 != v175) {
    v77 = 0;
    v78 = v70 != nullptr;
    if (v72 == 0) {
      v78 = false;
    }
    v166 = v78;
    while (1) {
      if ((v77 & 1) != 0) {
        goto LABEL_135;
      }
      v79 = *v76;
      v80 = v76[1];
      v81 = v76 + 2;
      v82 = v76[2];
      v83 = v76[3];
      v85 = *v76 != 0 && v80 != 0;
      if (v85 && v82 == v83) {
        if ((unsigned __int16)v76[1] + (unsigned int)(unsigned __int16)v75 <
            v72) {
          result = (_QWORD*)memcpy(v74, v79, (unsigned __int16)v76[1]);
          v77 = 0;
          v74 += (unsigned __int16)v80;
          v75 += v80;
          goto LABEL_136;
        }
        goto LABEL_135;
      }
      if (v82 == v83) {
        v85 = false;
      }
      if (!v85) {
        goto LABEL_196;
      }
      v87 = *(_QWORD*)(v82 + 8);
      if (*(_DWORD*)v82 == 0 || v87 == 0) {
        goto LABEL_196;
      }
      if (*(_DWORD*)v82 != 1 || *(_WORD*)(v82 + 16) == 0) {
        goto LABEL_196;
      }
      v90 = *(unsigned __int16*)(v87 + 1);
      v91 = *(unsigned __int16*)(v87 + 3);
      if (v90 == 3) {
        if (v91 != 0) {
        LABEL_196:
          if (v79 != 0) {
            v107 = v76[1];
          }
          else {
            v107 = 0;
          }
          v109 = v107 > 0x1000 || v70 == nullptr || v72 == 0;
          if (!v109 && (unsigned int)v107 + (unsigned __int16)v75 < v72) {
            v110 = &v74[v107];
            v75 += v107;
            v77 = 0;
            if (v79 != 0 && v80 - 1 < v107) {
              result = (_QWORD*)memcpy(v74, v79, v76[1]);
              v77 = 0;
            }
            v74 = v110;
            goto LABEL_136;
          }
        }
        else if (a3 != 0) {
          v92 = *(_DWORD*)(v82 + 24);
          v93 = 0;
          if (v92 != 0 && (v94 = *(unsigned __int8**)(v82 + 32)) != nullptr &&
              (v93 = 0, v92 != 1) && *(_WORD*)(v82 + 40) != 0 &&
              (unsigned int)(v93 = *v94) > 4) {
            result = nullptr;
            v77 = v166;
            if (!v166) {
              goto LABEL_136;
            }
          }
          else {
            result =
                (_QWORD*)EmbeddedImage_188a0a0(a3, GameData_20ff340[v93], v81);
            v77 = v166;
            if (!v166) {
              goto LABEL_136;
            }
          }
          if ((unsigned int)(unsigned __int16)v75 + 15 < v72) {
            v77 = 0;
            v74[7] = (_BYTE)result;
            v74[6] = 0;
            v75 += 15;
            v74[8] = BYTE1(result);
            v74[9] = BYTE2(result);
            v74[10] = BYTE3(result);
            v74[11] = BYTE4(result);
            v74[12] = BYTE5(result);
            v74[13] = BYTE6(result);
            *(_DWORD*)v74 = 268436238;
            *((_WORD*)v74 + 2) = 2048;
            v74[14] = HIBYTE(result);
            v74 += 15;
            goto LABEL_136;
          }
        }
      LABEL_135:
        v77 = 0;
        goto LABEL_136;
      }
      if ((v90 | v91) != 0) {
        goto LABEL_196;
      }
      v170 = 0;
      v171 = nullptr;
      v169 = 0;
      v178 = 0;
      v179 = nullptr;
      v177 = 0;
      result = (_QWORD*)TextSelector_1907d20(&v169, &v177, v81);
      v95 = v179;
      v96 = v177 & 1;
      v97 = (char*)&v177 + 1;
      v98 = (unsigned __int64)(unsigned __int8)v177 >> 1;
      if (v96 != 0) {
        v97 = v179;
        v98 = v178;
      }
      v163 = v97;
      if (v97 != nullptr) {
        v99 = v98;
      }
      else {
        v99 = 0;
      }
      if (v98 != 0) {
        v100 = v97;
      }
      else {
        v100 = nullptr;
      }
      v101 = (unsigned __int64)(unsigned __int8)v169 >> 1;
      if ((v169 & 1) != 0) {
        v102 = v171;
      }
      else {
        v102 = (char*)&v169 + 1;
      }
      if ((v169 & 1) != 0) {
        v101 = v170;
      }
      if (v102 != nullptr) {
        v103 = v101;
      }
      else {
        v103 = 0;
      }
      if (!v166 || v100 == nullptr || v99 == 0 || v101 == 0 ||
          v102 == nullptr || v103 == 0) {
        goto LABEL_303;
      }
      v104 = v97;
      v105 = 0;
      v106 = v99 + v101 + 4;
      while (1) {
        v112 = (unsigned __int8)*v104;
        if ((*v104 & 0x80000000) == 0) {
          break;
        }
        if ((v112 & 0xC0) == 0x80) {
          goto LABEL_231;
        }
        if ((v112 & 0xE0) == 0xC0 && v104[1] < -64) {
          v111 = 2;
        }
        else if ((v112 & 0xF0) == 0xE0 && v104[1] <= -65 && v104[2] < -64) {
          v111 = 3;
        }
        else {
          if ((v112 & 0xF8) != 0xF0 || v104[1] > -65 || v104[2] > -65 ||
              v104[3] >= -64) {
            goto LABEL_231;
          }
          v111 = 4;
        }
      LABEL_212:
        v104 += v111;
        ++v105;
      }
      if (*v104 != 0 && v112 != 14) {
        v111 = 1;
        goto LABEL_212;
      }
    LABEL_231:
      if ((unsigned __int16)(v99 + v106 + v105 + 14) +
              (unsigned int)(unsigned __int16)v75 >=
          v72) {
        goto LABEL_303;
      }
      v74[5] = v106;
      v114 = v74 + 9;
      v155 = v96;
      v74[4] = 0;
      v74[6] = HIBYTE(v106);
      v74[7] = v103;
      v157 = v74 + 9;
      v159 = v103;
      v161 = v99;
      *(_DWORD*)v74 = 268435470;
      v74[8] = BYTE1(v103);
      v115 = (unsigned __int16)v103;
      memcpy(v114, v102, (unsigned __int16)v103);
      v116 = &v157[v115];
      *v116++ = v161;
      result = (_QWORD*)memcpy(v116, v163, (unsigned __int16)v161);
      v117 = (char*)v116 + (unsigned __int16)v161;
      *v117 = 19;
      v118 = v117 + 1;
      v119 = v75 + v161 + v159 + 12;
      if (v105 == 0) {
        goto LABEL_302;
      }
      v158 = v105;
      v120 = (char*)&v177 + 2;
      if (v155 != 0) {
        v120 = v95 + 1;
      }
      v162 = v120;
      v121 = v95 + 2;
      if (v155 == 0) {
        v121 = (char*)&v177 + 3;
      }
      v160 = v121;
      v122 = v95 + 3;
      if (v155 == 0) {
        v122 = (char*)&v177 + 4;
      }
      v156 = v122;
      if (v105 != 1) {
        break;
      }
      v100 = v163;
    LABEL_241:
      if ((v158 & 1) != 0) {
        v123 = *v163;
        if (v123 < 0) {
          if ((v123 & 0xC0) == 0x80) {
            v124 = v119;
            v125 = v100;
            v126 = 127;
          }
          else if ((v123 & 0xE0) == 0xC0 && *v162 < -64) {
            v124 = v119;
            v125 = v100;
            v126 = 2;
          }
          else if ((v123 & 0xF0) == 0xE0 && *v162 <= -65 && *v160 < -64) {
            v124 = v119;
            v125 = v100;
            v126 = 3;
          }
          else {
            v125 = v100;
            v124 = v119;
            if ((v123 & 0xF8) == 0xF0 && *v162 <= -65 && *v160 <= -65) {
              if (*v156 >= -64) {
                v126 = 255;
              }
              else {
                v126 = 4;
              }
            }
            else {
              v126 = 255;
            }
          }
        }
        else {
          v124 = v119;
          v125 = v100;
          v126 = 1;
        }
        result = (_QWORD*)memcpy(v118, v125, v126);
        v142 = &v118[v126];
        *v142 = 19;
        v118 = v142 + 1;
        v119 = v124 + v126 + 1;
      }
    LABEL_302:
      *((_WORD*)v118 + 2) = 0;
      v118[6] = 0;
      v75 = v119 + 7;
      *(_DWORD*)v118 = 285212686;
      v74 = v118 + 7;
      v96 = v177 & 1;
    LABEL_303:
      if (v96 != 0 && v179 != nullptr) {
        v143 = 128;
        if (*(_QWORD*)(*v12 + 200LL) == 0) {
          v143 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*v12 + v143);
      }
      if ((v169 & 1) != 0 && v171 != nullptr) {
        v144 = 128;
        if (*(_QWORD*)(*v12 + 200LL) == 0) {
          v144 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*v12 + v144);
      }
      v77 = 1;
    LABEL_136:
      v76 += 5;
      if (v76 == v175) {
        goto LABEL_314;
      }
    }
    v127 = v105 & 0xFFFE;
    while (2) {
      v136 = *v163;
      if (v136 < 0) {
        if ((v136 & 0xC0) == 0x80) {
          v137 = v119;
          v138 = 127;
        }
        else if ((v136 & 0xE0) == 0xC0 && *v162 < -64) {
          v137 = v119;
          v138 = 2;
        }
        else if ((v136 & 0xF0) == 0xE0 && *v162 <= -65 && *v160 < -64) {
          v137 = v119;
          v138 = 3;
        }
        else if ((v136 & 0xF8) == 0xF0 && *v162 <= -65 && *v160 <= -65) {
          v137 = v119;
          if (*v156 >= -64) {
            v138 = 255;
          }
          else {
            v138 = 4;
          }
        }
        else {
          v137 = v119;
          v138 = 255;
        }
      }
      else {
        v137 = v119;
        v138 = 1;
      }
      memcpy(v118, v100, v138);
      v139 = &v118[v138];
      *v139 = 19;
      v140 = v139 + 1;
      v141 = *v163;
      if ((v141 & 0x80000000) == 0) {
        v128 = v100;
        v129 = 1;
        v130 = v137;
        goto LABEL_248;
      }
      v130 = v137;
      if ((v141 & 0xC0) == 0x80) {
        v128 = v100;
        v129 = 127;
        goto LABEL_248;
      }
      if ((v141 & 0xE0) == 0xC0 && *v162 < -64) {
        v128 = v100;
        v129 = 2;
        goto LABEL_248;
      }
      if ((v141 & 0xF0) == 0xE0 && *v162 <= -65 && *v160 < -64) {
        v128 = v100;
        v129 = 3;
        goto LABEL_248;
      }
      if ((v141 & 0xF8) == 0xF0 && *v162 <= -65) {
        v128 = v100;
        if (*v160 <= -65) {
          if (*v156 >= -64) {
            v129 = 255;
          }
          else {
            v129 = 4;
          }
        LABEL_248:
          v131 = v130 + v138;
          v132 = &v128[v138];
          v133 = v131 + 1;
          result = (_QWORD*)memcpy(v140, v132, v129);
          v134 = &v140[v129];
          v127 -= 2;
          *v134 = 19;
          v118 = v134 + 1;
          v135 = v133 + v129;
          v100 = &v132[v129];
          v12 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v119 = v135 + 1;
          if (v127 == 0) {
            goto LABEL_241;
          }
          continue;
        }
      }
      else {
        v128 = v100;
      }
      break;
    }
    v129 = 255;
    goto LABEL_248;
  }
LABEL_314:
  if (a5 == 1) {
    v145 = v167;
    if (v70 != nullptr && v72 != 0) {
      LOWORD(v75) = v75 + 1;
      *v74++ = 18;
    }
  }
  else {
    v145 = v167;
  }
  if (v70 != nullptr && v72 != 0) {
    *v74 = 0;
    LOWORD(v75) = v75 + 1;
    goto LABEL_323;
  }
  if (v70 != nullptr) {
  LABEL_323:
    if ((_WORD)v75 != 0) {
      *v145 = v70;
      v145[1] = (unsigned __int16)v75;
      v146 = (__int64*)v174;
      if (v174 == 0) {
        result;
        return;
      }
      goto LABEL_327;
    }
  }
  *v145 = 0;
  v145[1] = 0;
  v146 = (__int64*)v174;
  if (v174 == 0) {
    result;
    return;
  }
LABEL_327:
  v147 = v175;
  if (v146 == v175) {
    goto LABEL_344;
  }
  v148 = v175;
  while (2) {
    *(v148 - 5) = 0;
    *(v148 - 4) = 0;
    v148 -= 5;
    v150 = v148[2];
    v151 = v148[3];
    v152 = v150;
    if (v150 != v151) {
      do {
        *(_DWORD*)(v151 - 24) = 0;
        v151 -= 24;
        *(_QWORD*)(v151 + 8) = 0;
        *(_WORD*)(v151 + 16) = 0;
      } while (v151 != v150);
      v152 = *(v147 - 3);
    }
    *(v147 - 2) = v150;
    if (v152 != 0) {
      if (v152 == v150) {
        *(v147 - 2) = v152;
      }
      else {
        do {
          *(_DWORD*)(v150 - 24) = 0;
          v150 -= 24;
          *(_QWORD*)(v150 + 8) = 0;
          *(_WORD*)(v150 + 16) = 0;
        } while (v150 != v152);
        v153 = *(v147 - 3);
        *(v147 - 2) = v152;
        if (v153 == 0) {
          goto LABEL_334;
        }
      }
      if (*(_QWORD*)(*v12 + 200LL) != 0) {
        v149 = 128;
      }
      else {
        v149 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*v12 + v149);
    }
  LABEL_334:
    *v148 = 0;
    v148[1] = 0;
    v147 = v148;
    if (v146 != v148) {
      continue;
    }
    break;
  }
  if (v174 != 0) {
  LABEL_344:
    v154 = 128;
    if (*(_QWORD*)(*v12 + 200LL) == 0) {
      v154 = 56;
    }
    {
      (_QWORD*)nn_mem_StandardAllocator_Free(*v12 + v154);
      return;
    }
  }
  {
    result;
    return;
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
  __int64 v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
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
  char* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int16 v25;
  __int64 v26;
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
  char* v46;
  char* v47;
  __int64 v48;
  int v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  char* v73;
  char* v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v83;
  int v84;
  unsigned __int8* v86;
  char* v87;
  char* v88;
  unsigned __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
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
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      640, 16, 0);
  GameRoutine_190ab40(0, 0, v4);
  v86 = nullptr;
  v87 = (char*)v4;
  v88 = (char*)v4;
  v89 = v4 + 640;
  v5 = a1;
  v6 = 0;
  v83 = a1;
  v84 = -1;
  do {
    if (*v5 == 0) {
      break;
    }
    v93 = 0;
    v94 = 0;
    v91 = 0;
    v92 = 0;
    v90 = nullptr;
    v7 = GameRoutine_1905ba0(&v90, v5);
    v8 = v90;
    v9 = v91;
    v11 = v92;
    v10 = v93;
    v12 = v90 == nullptr || v91 == 0;
    v13 = v12;
    if (!v12) {
      v6 += (__int64)v7;
      v5 = &v7[(_QWORD)v5];
      if (v92 == v93) {
        v17 = v95[0];
        v18 = 65280;
        v19 = 0xFFFF;
      }
      else {
        v14 = *(_QWORD*)(v92 + 8);
        v15 = *(_DWORD*)v92 == 0 || v14 == 0;
        if (v15 ||
            (*(_DWORD*)v92 == 1 ? (v16 = *(unsigned __int16*)(v92 + 16) == 0)
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
        v20 = v88;
        if ((unsigned __int64)v88 >= v89) {
          v26 = GameRoutine_190ad40(&v87, &v90);
        }
        else {
          v21 = (_QWORD*)v3;
          v22 = v10 - v11;
          *(_QWORD*)v88 = v8;
          *((_QWORD*)v20 + 1) = v9;
          *((_QWORD*)v20 + 2) = 0;
          *((_QWORD*)v20 + 3) = 0;
          *((_QWORD*)v20 + 4) = 0;
          if (v10 != v11) {
            if (0xAAAAAAAAAAAAAAABLL * (v22 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
              GameRoutine_190aaf0();
            }
            v23 = fw_memory_HeapManager_Allocate(*v21, v10 - v11, 16, 0);
            *((_QWORD*)v20 + 2) = v23;
            *((_QWORD*)v20 + 3) = v23;
            *((_QWORD*)v20 + 4) = v23 + v22;
            v24 = v11;
            do {
              *(_DWORD*)v23 = *(_DWORD*)v24;
              *(_QWORD*)(v23 + 8) = *(_QWORD*)(v24 + 8);
              v25 = *(_WORD*)(v24 + 16);
              v24 += 24;
              *(_WORD*)(v23 + 16) = v25;
              v23 += 24;
            } while (v24 != v10);
            *((_QWORD*)v20 + 3) = v23;
          }
          v26 = (__int64)(v20 + 40);
          v3 = (__int64)v21;
        }
        v88 = (char*)v26;
        if (v11 == v10) {
          v28 = (unsigned __int8*)v8;
          while (v28 >= (unsigned __int8*)v8) {
            v29 = v28;
            if (v28 > (unsigned __int8*)&v8[v9 - 1]) {
              break;
            }
            ++v28;
            if (v29 + 1 > (unsigned __int8*)&v8[v9]) {
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
              v84 =
                  -1 - 858993459 * ((unsigned __int64)(v26 - (_QWORD)v87) >> 3);
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v27);
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
    memmove(v83 + 1, v83, v86 - (unsigned __int8*)v83);
    goto LABEL_154;
  }
  if (v42 == 0x7FFFFFFF) {
    if (*v83 == 18 && *v41 == 17) {
      v40 = false;
    }
    else {
      memmove(v83 + 1, v83, v86 - (unsigned __int8*)v83);
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
      v46 = v87;
      v47 = &v87[40 * v84];
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
        v56 = (__int64*)&v46[40 * v55];
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
            v56 = (__int64*)&v46[40 * v55];
            v57 = *v56;
            v58 = v56[2];
            v59 = v56[3];
          } while (*v56 != 0 && v56[1] != 0 && v58 != v59);
          v84 = v55;
        }
        memmove(v86, v86 + 1, v57 - 1 - (_QWORD)v86);
        v64 = v87;
        *(_BYTE*)(v57 - 1) = 17;
        v65 = (__int64*)&v64[40 * v55];
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
        memmove(v86, v86 + 1, v54);
        v86 += v54;
        *v86 = 17;
        goto LABEL_145;
      }
      memmove(v83 + 1, v83, v86 - (unsigned __int8*)v83);
      v86 = (unsigned __int8*)&v83[v6 - 1];
      *v83 = 18;
      v52 = v88;
      *v41 = 17;
      v84 = -1 - 858993459 * ((unsigned __int64)(v52 - v46) >> 3);
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
  v73 = v87;
  if (v87 == nullptr) {
    return v40;
  }
  v74 = v88;
  if (v87 == v88) {
    goto LABEL_179;
  }
  v75 = v88;
  do {
    *((_QWORD*)v75 - 5) = 0;
    *((_QWORD*)v75 - 4) = 0;
    v75 -= 40;
    v77 = *((_QWORD*)v75 + 2);
    v78 = *((_QWORD*)v75 + 3);
    v79 = v77;
    if (v77 != v78) {
      do {
        *(_DWORD*)(v78 - 24) = 0;
        v78 -= 24;
        *(_QWORD*)(v78 + 8) = 0;
        *(_WORD*)(v78 + 16) = 0;
      } while (v78 != v77);
      v79 = *((_QWORD*)v74 - 3);
    }
    *((_QWORD*)v74 - 2) = v77;
    if (v79 != 0) {
      if (v79 == v77) {
        *((_QWORD*)v74 - 2) = v79;
      LABEL_165:
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v76 = 128;
        }
        else {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v76);
        goto LABEL_169;
      }
      do {
        *(_DWORD*)(v77 - 24) = 0;
        v77 -= 24;
        *(_QWORD*)(v77 + 8) = 0;
        *(_WORD*)(v77 + 16) = 0;
      } while (v77 != v79);
      v80 = *((_QWORD*)v74 - 3);
      *((_QWORD*)v74 - 2) = v79;
      if (v80 != 0) {
        goto LABEL_165;
      }
    }
  LABEL_169:
    *(_QWORD*)v75 = 0;
    *((_QWORD*)v75 + 1) = 0;
    v74 = v75;
  } while (v73 != v75);
  if (v87 != nullptr) {
  LABEL_179:
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v81);
  }
  return v40;
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
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  _QWORD* v14;
  _QWORD* v15;
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
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  unsigned __int64 v51;

  if (a1 == nullptr) {
    return 0;
  }
  v1 = a1;
  if (*a1 == 0) {
    return 0;
  }
  v2 = fw_memory_g_heap_manager_ptr;
  v49 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       640, 16, 0);
  v50 = (_QWORD*)v49;
  v51 = v49 + 640;
  do {
    v47 = 0;
    v48 = 0;
    v45 = 0;
    v46 = 0;
    v44 = nullptr;
    v3 = GameRoutine_1905ba0(&v44, v1);
    if (v3 == nullptr) {
      v5 = v46;
      v6 = v47;
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
    v4 = v45;
    v5 = v46;
    v6 = v47;
    if (v44 == nullptr || v45 == 0) {
      goto LABEL_13;
    }
    v1 = &v3[(_QWORD)v1];
    if (v46 != v47) {
      v8 = 0;
      goto LABEL_14;
    }
    v10 = v50;
    if ((unsigned __int64)v50 >= v51) {
      v12 = v46;
      v11 = GameRoutine_190ad40(&v49, &v44);
      v5 = v12;
    }
    else {
      *v50 = v44;
      v10[1] = v4;
      v10[2] = 0;
      v10[3] = 0;
      v11 = (__int64)(v10 + 5);
      v10[4] = 0;
    }
    v8 = 0;
    v50 = (_QWORD*)v11;
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
    }
  } while (v8 == 0);
  v15 = (_QWORD*)v49;
  v14 = v50;
  if ((_QWORD*)v49 == v50) {
    v13 = 1;
    if (v49 != 0) {
    LABEL_80:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v42);
    }
  }
  else {
    v16 = 0;
    v17 = v49;
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
    } while ((_QWORD*)v17 != v50);
    v13 = v16 + 1;
    if (v49 != 0) {
      v36 = v50;
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
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v37);
      LABEL_70:
        *v36 = 0;
        v36[1] = 0;
        v14 = v36;
        if (v15 == v36) {
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
