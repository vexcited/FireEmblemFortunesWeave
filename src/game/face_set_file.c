#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_109ea80(PSEUDO_X8, __int64 result,
                                                    __int64);
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
double atof(_QWORD);
extern __int64 GameData_21c9de8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a230(_QWORD);
unsigned __int64 FaceSetFile_10acb20(unsigned __int64 result, _BYTE* a2);

unsigned __int64 FaceSetFile_10acb20(unsigned __int64 result, _BYTE* a2)
{
  unsigned __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int8* v19;
  int v20;
  unsigned __int8* v21;
  int v22;
  int v23;
  int v24;
  char* v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64* v34;
  unsigned int v35;
  unsigned __int64 v36;
  char* v37;
  signed __int64 v38;
  char* v39;
  char* v40;
  char* v41;
  char* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  int v45;
  unsigned __int64 v46;
  char* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  char v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  char* v57;
  char* v58;
  __int64 v59;
  char v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char v67;
  __int64 v68;
  __int64 v69;
  int v70;
  _BYTE* v71;
  unsigned __int64 v72;
  unsigned __int8* v73;
  int v74;
  float v75;
  unsigned __int64 v76;
  char* v77;
  unsigned __int64 v78;
  char* v79;
  __int64 v80;
  __int64 v81;
  char v82;
  unsigned __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  char* v87;
  unsigned __int64 v88;
  bool v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  char* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  char* v100;
  unsigned __int64 v101;
  __int64 v102;
  char* v103;
  __int64 v104;
  unsigned __int64 v105;
  char* v106;
  __int64 v107;
  unsigned __int64 v108;
  char* v109;
  __int64 v110;
  unsigned __int64 v111;
  _QWORD* v112;
  __int64 v113;
  _QWORD* v114;
  _QWORD* v115;
  __int64 v116;
  unsigned __int64 v117;
  char* v118;
  __int64 v119;
  unsigned __int64 v120;
  char* v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  char* v125;
  __int64 v126;
  unsigned __int64 v127;
  _BYTE* v128;
  __int64 v129;
  __int64 v129s[3];
  unsigned __int64 v130;
  _BYTE* v131;
  _QWORD* v132;

  if (a2 != nullptr && *a2 == 65 && a2[1] == 70) {
    v3 = result;
    result = game_HashString(a2);
    if (result != 0) {
      v4 = &GameData_21c9de8;
      v5 = *(_QWORD*)(GameData_21c9de8 + 96);
      if (v5 != 0 && *(_QWORD*)(GameData_21c9de8 + 112) != 0) {
        v7 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v8 = result;
          if (result >= v5) {
            v8 = result % v5;
          }
        }
        else {
          v8 = v7 & result;
        }
        v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c9de8 + 88) + 8 * v8);
        if (v9 != nullptr) {
          v10 = (_QWORD*)*v9;
          if (v10 != nullptr) {
            if ((v5 & v7) == 0) {
              while (1) {
                v12 = v10[1];
                if (v12 == result) {
                  if (v10[2] == result) {
                    goto LABEL_29;
                  }
                }
                else if ((v12 & v7) != v8) {
                  return result;
                }
                v10 = (_QWORD*)*v10;
                if (v10 == nullptr) {
                  return result;
                }
              }
            }
            while (1) {
              v11 = v10[1];
              if (v11 == result) {
                break;
              }
              if (v11 >= v5) {
                v11 %= v5;
              }
              if (v11 != v8) {
                return result;
              }
            LABEL_18:
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                return result;
              }
            }
            if (v10[2] != result) {
              goto LABEL_18;
            }
          LABEL_29:
            v13 = (_QWORD*)v10[3];
            if (v13 != nullptr) {
              v14 = 0;
              v15 = **(_QWORD***)(GameData_21c9de8 + 64);
              v16 = (__int64*)fw_memory_g_heap_manager_ptr;
              v111 = v3;
              while (1) {
                v18 = v3 + 424 * v14;
                v19 = *(
                    unsigned __int8**)(*(_QWORD*)(*(_QWORD*)(**(_QWORD**)(*v4 +
                                                                          40) +
                                                             32LL) +
                                                  24LL) +
                                       160 * v14 + 32);
                *(_QWORD*)v18 = v19;
                v22 = *v19;
                v21 = v19 + 1;
                v20 = v22;
                if (v22 != 0) {
                  v23 = 0;
                  do {
                    v23 = v20 - v23 + 32 * v23;
                    v24 = *v21++;
                    v20 = v24;
                  } while (v24 != 0);
                }
                else {
                  v23 = 0;
                }
                *(_DWORD*)(v18 + 8) = v23;
                v25 = (char*)v13[5];
                v132 = v15 + 5;
                v115 = v13 + 5;
                if (v25 != nullptr) {
                  v26 = v25;
                }
                else {
                  v26 = (char*)v15[5];
                }
                if (v26 != nullptr) {
                  v119 = (__int64)a2;
                  v120 = strlen(a2);
                  v121 = v26;
                  v122 = strlen(v26);
                  result = X8CALL_X0(
                      __int64,
                      GameRoutine_109ea80((void*)v129s, (__int64)&v119, 2));
                  v129 = v129s[0];
                  v130 = v129s[1];
                  v131 = (_BYTE*)v129s[2];
                  if ((*(_BYTE*)(v18 + 16) & 1) != 0 &&
                      *(_QWORD*)(v18 + 32) != 0) {
                    v27 = 128;
                    if (*(_QWORD*)(*v16 + 200) == 0) {
                      v27 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(*v16 + v27,
                        *(_QWORD*)(v18 + 32));
                  }
                  v28 = v130;
                  *(_QWORD*)(v18 + 16) = v129;
                  *(_QWORD*)(v18 + 24) = v28;
                  *(_QWORD*)(v18 + 32) = v131;
                }
                if (v13[6] != 0) {
                  v29 = v13[6];
                }
                else {
                  v29 = v15[6];
                }
                if (v29 == 0) {
                  goto LABEL_278;
                }
                v114 = v13;
                v117 = 0;
                v118 = nullptr;
                v116 = 0;
                v127 = 0;
                v128 = nullptr;
                v125 = nullptr;
                v126 = 0;
                v123 = 0;
                v124 = 0;
                v30 = strlen(v29);
                if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_310;
                }
                v31 = v30;
                v112 = v15;
                v113 = v14;
                if (v30 >= 0x17) {
                  break;
                }
                v32 = (char*)&v119 + 1;
                LOBYTE(v119) = 2 * v30;
                if (v30 != 0) {
                  goto LABEL_60;
                }
              LABEL_61:
                v32[v31] = 0;
                v34 = v4;
                v35 = (unsigned __int8)v119;
                v36 = v120;
                v37 = v121;
                if ((v119 & 1) != 0) {
                  v38 = v120;
                }
                else {
                  v38 = (unsigned __int64)(unsigned __int8)v119 >> 1;
                }
                if (v38 >= 1) {
                  if ((v119 & 1) != 0) {
                    v39 = v121;
                  }
                  else {
                    v39 = (char*)&v119 + 1;
                  }
                  v40 = &v39[v38];
                LABEL_69:
                  v41 = v39;
                  do {
                    v42 = (char*)memchr(v41, 32, v38);
                    if (v42 == nullptr) {
                      break;
                    }
                    if (*v42 == 32) {
                      if (v42 != v40 && v42 - v39 != -1) {
                        GameRoutine_1a0a8e0(&v119, v42 - v39, 1,
                                            &GameData_1a9f09e, 0);
                        v35 = (unsigned __int8)v119;
                        v36 = v120;
                        v37 = v121;
                        v39 = (v119 & 1) != 0 ? v121 : (char*)&v119 + 1;
                        v38 =
                            (v119 & 1) != 0
                                ? v120
                                : (unsigned __int64)(unsigned __int8)v119 >> 1;
                        v40 = &v39[v38];
                        if (v38 > 0) {
                          goto LABEL_69;
                        }
                      }
                      break;
                    }
                    v41 = v42 + 1;
                    v38 = v40 - v41;
                  } while (v40 - v41 >= 1);
                }
                if ((v35 & 1) == 0) {
                  v36 = v35 >> 1;
                  v37 = (char*)&v119 + 1;
                }
                v30 = memchr(v37, 40, v36);
                v4 = v34;
                v3 = v111;
                if (v30 != 0) {
                  v43 = v30 - (_QWORD)v37;
                }
                else {
                  v43 = -1;
                }
                if (v36 != 0) {
                  v44 = v36;
                  do {
                    if (v44 == 0) {
                      goto LABEL_101;
                    }
                    v45 = (unsigned __int8)v37[--v44];
                  } while (v45 != 41);
                  if (v43 < v44 && v44 != -1) {
                    if (v36 >= v43) {
                      v46 = v43;
                    }
                    else {
                      v46 = v36;
                    }
                    if (v46 >= 0xFFFFFFFFFFFFFFF7LL) {
                      goto LABEL_310;
                    }
                    if (v46 >= 0x17) {
                      if ((v46 | 7) == 0x17) {
                        v59 = 26;
                      }
                      else {
                        v59 = (v46 | 7) + 1;
                      }
                      v47 = (char*)fw_memory_HeapManager_Allocate(
                          fw_memory_g_heap_manager, v59, 16, 0);
                      v130 = v46;
                      v131 = v47;
                      v129 = v59 | 1;
                    }
                    else {
                      v47 = (char*)&v129 + 1;
                      LOBYTE(v129) = 2 * v46;
                      if (v43 == 0) {
                      LABEL_139:
                        v60 = v126;
                        v47[v46] = 0;
                        if ((v60 & 1) != 0 && v128 != nullptr) {
                          v61 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v61 = 56;
                          }
                          v30 = nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v61,
                              (__int64)v128);
                        }
                        v126 = v129;
                        v127 = v130;
                        v62 = v120;
                        v128 = v131;
                        if ((v119 & 1) == 0) {
                          v62 = (unsigned __int64)(unsigned __int8)v119 >> 1;
                        }
                        if (v43 >= v62) {
                          goto LABEL_311;
                        }
                        v55 = v43 + 1;
                        v63 = ~v43 + v44;
                        if ((v119 & 1) != 0) {
                          v57 = v121;
                        }
                        else {
                          v57 = (char*)&v119 + 1;
                        }
                        if (v62 - v55 >= v63) {
                          v56 = v63;
                        }
                        else {
                          v56 = v62 - v55;
                        }
                        if (v56 >= 0xFFFFFFFFFFFFFFF7LL) {
                          goto LABEL_310;
                        }
                        v16 = &fw_memory_g_heap_manager;
                        if (v56 >= 0x17) {
                          goto LABEL_157;
                        }
                        v58 = (char*)&v129 + 1;
                        v14 = v113;
                        LOBYTE(v129) = 2 * v56;
                        if (v56 != 0) {
                          goto LABEL_161;
                        }
                        goto LABEL_162;
                      }
                    }
                    v30 = memmove(v47, v37, v46);
                    goto LABEL_139;
                  }
                }
              LABEL_101:
                v30 = memchr(v29, 44, v31);
                if (v30 == 0 || (v48 = v30 - v29, v30 - v29 == -1)) {
                  v30 = GameRoutine_60a060(&v126, v29, v31);
                  v15 = v112;
                  if ((v123 & 1) != 0) {
                    *v125 = 0;
                    v124 = 0;
                  }
                  else {
                    LOWORD(v123) = 0;
                  }
                  v14 = v113;
                  v13 = v114;
                  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
                  goto LABEL_168;
                }
                if (v36 >= v48) {
                  v49 = v30 - v29;
                }
                else {
                  v49 = v36;
                }
                if (v49 >= 0xFFFFFFFFFFFFFFF7LL) {
                LABEL_310:
                  String_60a1d0(v30);
                }
                if (v49 >= 0x17) {
                  if ((v49 | 7) == 0x17) {
                    v51 = 26;
                  }
                  else {
                    v51 = (v49 | 7) + 1;
                  }
                  v50 = (char*)fw_memory_HeapManager_Allocate(
                      fw_memory_g_heap_manager, v51, 16, 0);
                  v130 = v49;
                  v131 = v50;
                  v129 = v51 | 1;
                LABEL_118:
                  v30 = memmove(v50, v37, v49);
                  goto LABEL_119;
                }
                v50 = (char*)&v129 + 1;
                LOBYTE(v129) = 2 * v49;
                if (v49 != 0) {
                  goto LABEL_118;
                }
              LABEL_119:
                v52 = v126;
                v50[v49] = 0;
                if ((v52 & 1) != 0 && v128 != nullptr) {
                  v53 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v53 = 56;
                  }
                  v30 = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                      (__int64)v128);
                }
                v126 = v129;
                v127 = v130;
                v128 = v131;
                v54 = v120;
                if ((v119 & 1) == 0) {
                  v54 = (unsigned __int64)(unsigned __int8)v119 >> 1;
                }
                if (v48 >= v54) {
                LABEL_311:
                  String_60a230(v30);
                }
                v55 = v48 + 1;
                v56 = v54 - (v48 + 1);
                if ((v119 & 1) != 0) {
                  v57 = v121;
                }
                else {
                  v57 = (char*)&v119 + 1;
                }
                if (v56 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_310;
                }
                v16 = &fw_memory_g_heap_manager;
                if (v56 >= 0x17) {
                LABEL_157:
                  if ((v56 | 7) == 0x17) {
                    v64 = 26;
                  }
                  else {
                    v64 = (v56 | 7) + 1;
                  }
                  v65 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       v64, 16, 0);
                  v66 = v64 | 1;
                  v14 = v113;
                  v58 = (char*)v65;
                  v130 = v56;
                  v131 = (_BYTE*)v65;
                  v129 = v66;
                LABEL_161:
                  v30 = memmove(v58, &v57[v55], v56);
                  goto LABEL_162;
                }
                v58 = (char*)&v129 + 1;
                v14 = v113;
                LOBYTE(v129) = 2 * v56;
                if (v54 != v55) {
                  goto LABEL_161;
                }
              LABEL_162:
                v67 = v123;
                v58[v56] = 0;
                if ((v67 & 1) != 0 && v125 != nullptr) {
                  v68 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v68 = 56;
                  }
                  v30 = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                      v68, (__int64)v125);
                }
                v13 = v114;
                v15 = v112;
                v123 = v129;
                v124 = v130;
                v125 = v131;
              LABEL_168:
                if ((v119 & 1) != 0 && v121 != nullptr) {
                  v69 = 128;
                  if (*(_QWORD*)(*v16 + 200) == 0) {
                    v69 = 56;
                  }
                  v30 = nn_mem_StandardAllocator_Free(*v16 + v69,
                                                      (__int64)v121);
                }
                v70 = v123 & 1;
                v71 = v128;
                if (v70 != 0) {
                  v72 = v124;
                }
                else {
                  v72 = (unsigned __int64)(unsigned __int8)v123 >> 1;
                }
                v73 = (unsigned __int8*)&v126 + 1;
                if ((v126 & 1) != 0) {
                  v73 = v128;
                }
                v74 = *v73;
                if (v72 != 0) {
                  if ((unsigned int)(v74 - 58) > 0xFFFFFFF5) {
                    if ((v116 & 1) != 0) {
                      if (v70 != 0) {
                        v77 = v125;
                      }
                      else {
                        v77 = (char*)&v123 + 1;
                      }
                      SpineModel_64dde0(&v116, v77, v72);
                      v70 = v123 & 1;
                    }
                    else if (v70 != 0) {
                      GameRoutine_64df20(&v116, v125, v124);
                      v70 = 1;
                    }
                    else {
                      v116 = v123;
                      v117 = v124;
                      v118 = v125;
                    }
                    if ((v126 & 1) != 0) {
                      v79 = v128;
                    }
                    else {
                      v79 = (char*)&v126 + 1;
                    }
                  }
                  else {
                    if ((v116 & 1) != 0) {
                      if ((v126 & 1) != 0) {
                        v76 = v127;
                      }
                      else {
                        v76 = (unsigned __int64)(unsigned __int8)v126 >> 1;
                      }
                      SpineModel_64dde0(&v116, v73, v76);
                    }
                    else if ((v126 & 1) != 0) {
                      GameRoutine_64df20(&v116, v128, v127);
                    }
                    else {
                      v116 = v126;
                      v117 = v127;
                      v118 = v128;
                    }
                    if (v70 != 0) {
                      v79 = v125;
                    }
                    else {
                      v79 = (char*)&v123 + 1;
                    }
                  }
                  v75 = atof(v79);
                  if (v70 == 0) {
                    goto LABEL_222;
                  }
                }
                else if ((unsigned int)(v74 - 48) > 9) {
                  if ((v116 & 1) != 0) {
                    if ((v126 & 1) != 0) {
                      v78 = v127;
                    }
                    else {
                      v78 = (unsigned __int64)(unsigned __int8)v126 >> 1;
                    }
                    v30 = SpineModel_64dde0(&v116, v73, v78);
                    v75 = 1.0f;
                    if (v70 == 0) {
                      goto LABEL_222;
                    }
                  }
                  else if ((v126 & 1) != 0) {
                    v30 = GameRoutine_64df20(&v116, v128, v127);
                    v75 = 1.0f;
                    if (v70 == 0) {
                      goto LABEL_222;
                    }
                  }
                  else {
                    v75 = 1.0f;
                    v116 = v126;
                    v117 = v127;
                    v118 = v128;
                    if (v70 == 0) {
                      goto LABEL_222;
                    }
                  }
                }
                else {
                  v75 = atof(v73);
                  if ((v116 & 1) != 0) {
                    *v118 = 0;
                    v117 = 0;
                    if (v70 == 0) {
                      goto LABEL_222;
                    }
                  }
                  else {
                    LOWORD(v116) = 0;
                    if (v70 == 0) {
                      goto LABEL_222;
                    }
                  }
                }
                if (v125 != nullptr) {
                  v80 = 128;
                  if (*(_QWORD*)(*v16 + 200) == 0) {
                    v80 = 56;
                  }
                  v30 = nn_mem_StandardAllocator_Free(*v16 + v80,
                                                      (__int64)v125);
                }
              LABEL_222:
                if ((v126 & 1) != 0 && v128 != nullptr) {
                  v81 = 128;
                  if (*(_QWORD*)(*v16 + 200) == 0) {
                    v81 = 56;
                  }
                  v30 = nn_mem_StandardAllocator_Free(*v16 + v81,
                                                      (__int64)v128);
                }
                if (v75 <= 0.0f) {
                  goto LABEL_261;
                }
                v82 = v116;
                v83 = v117;
                if ((v116 & 1) == 0) {
                  v83 = (unsigned __int64)(unsigned __int8)v116 >> 1;
                }
                if (v83 == 0) {
                  v88 = *(unsigned __int8*)(v18 + 16);
                  v89 = (v88 & 1) == 0;
                  v90 = v88 >> 1;
                  if (v89) {
                    v91 = v90;
                  }
                  else {
                    v91 = *(_QWORD*)(v18 + 24);
                  }
                  if (v89) {
                    v92 = v18 + 17;
                  }
                  else {
                    v92 = *(_QWORD*)(v18 + 32);
                  }
                  v93 = v91 + 6;
                  if (v91 + 6 >= 0xFFFFFFFFFFFFFFF7LL) {
                    goto LABEL_310;
                  }
                  if (v93 >= 0x17) {
                    if ((v93 | 7) == 0x17) {
                      v95 = 26;
                    }
                    else {
                      v95 = (v93 | 7) + 1;
                    }
                    v96 = fw_memory_HeapManager_Allocate(
                        fw_memory_g_heap_manager, v95, 16, 0);
                    v97 = v95 | 1;
                    v15 = v112;
                    v94 = (char*)v96;
                    v120 = v91 + 6;
                    v121 = (char*)v96;
                    v119 = v97;
                  }
                  else {
                    v94 = (char*)&v119 + 1;
                    v120 = 0;
                    v121 = nullptr;
                    v119 = (unsigned __int8)(2 * v93);
                    if (v91 == 0) {
                    LABEL_254:
                      strcpy(&v94[v91], "_Blink");
                      v16 = (__int64*)fw_memory_g_heap_manager_ptr;
                      if ((v82 & 1) != 0 && v118 != nullptr) {
                        v98 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v98 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v98,
                            (__int64)v118);
                      }
                      v14 = v113;
                      v13 = v114;
                      v116 = v119;
                      v117 = v120;
                      v87 = v121;
                      goto LABEL_260;
                    }
                  }
                  memmove(v94, v92, v91);
                  goto LABEL_254;
                }
                v119 = (__int64)a2;
                v84 = strlen(a2);
                v85 = v118;
                if ((v82 & 1) == 0) {
                  v85 = (char*)&v116 + 1;
                }
                v120 = v84;
                v121 = v85;
                v122 = strlen(v85);
                GameRoutine_109ea80((void*)v129s, (__int64)&v119, 2);
                v129 = v129s[0];
                v130 = v129s[1];
                v131 = (_BYTE*)v129s[2];
                if ((v116 & 1) != 0 && v118 != nullptr) {
                  v86 = 128;
                  if (*(_QWORD*)(*v16 + 200) == 0) {
                    v86 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v16 + v86, (__int64)v118);
                }
                v116 = v129;
                v117 = v130;
                v87 = v131;
              LABEL_260:
                v118 = v87;
              LABEL_261:
                result = v18 + 112;
                *(float*)(v18 + 12) = v75;
                if ((__int64*)(v18 + 112) != &v116) {
                  if ((*(_BYTE*)result & 1) != 0) {
                    if ((v116 & 1) != 0) {
                      v100 = v118;
                    }
                    else {
                      v100 = (char*)&v116 + 1;
                    }
                    if ((v116 & 1) != 0) {
                      v101 = v117;
                    }
                    else {
                      v101 = (unsigned __int64)(unsigned __int8)v116 >> 1;
                    }
                    result = SpineModel_64dde0(result, v100, v101);
                  }
                  else if ((v116 & 1) != 0) {
                    result = GameRoutine_64df20(result, v118, v117);
                  }
                  else {
                    v99 = v117;
                    *(_QWORD*)result = v116;
                    *(_QWORD*)(v18 + 120) = v99;
                    *(_QWORD*)(v18 + 128) = v118;
                  }
                }
                if ((v116 & 1) != 0 && v118 != nullptr) {
                  v102 = 128;
                  if (*(_QWORD*)(*v16 + 200) == 0) {
                    v102 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(*v16 + v102,
                                                         (__int64)v118);
                }
              LABEL_278:
                if (v13[7] != 0) {
                  v103 = (char*)v13[7];
                }
                else {
                  v103 = (char*)v15[7];
                }
                if (v103 != nullptr) {
                  v119 = (__int64)a2;
                  v120 = strlen(a2);
                  v121 = v103;
                  v122 = strlen(v103);
                  result = X8CALL_X0(
                      __int64,
                      GameRoutine_109ea80((void*)v129s, (__int64)&v119, 2));
                  v129 = v129s[0];
                  v130 = v129s[1];
                  v131 = (_BYTE*)v129s[2];
                  if ((*(_BYTE*)(v18 + 400) & 1) != 0 &&
                      *(_QWORD*)(v18 + 416) != 0) {
                    v104 = 128;
                    if (*(_QWORD*)(*v16 + 200) == 0) {
                      v104 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(*v16 + v104,
                        *(_QWORD*)(v18 + 416));
                  }
                  v105 = v130;
                  *(_QWORD*)(v18 + 400) = v129;
                  *(_QWORD*)(v18 + 408) = v105;
                  *(_QWORD*)(v18 + 416) = v131;
                }
                if (v13[8] != 0) {
                  v106 = (char*)v13[8];
                }
                else {
                  v106 = (char*)v15[8];
                }
                if (v106 != nullptr) {
                  v119 = (__int64)a2;
                  v120 = strlen(a2);
                  v121 = v106;
                  v122 = strlen(v106);
                  result = X8CALL_X0(
                      __int64,
                      GameRoutine_109ea80((void*)v129s, (__int64)&v119, 2));
                  v129 = v129s[0];
                  v130 = v129s[1];
                  v131 = (_BYTE*)v129s[2];
                  if ((*(_BYTE*)(v18 + 208) & 1) != 0 &&
                      *(_QWORD*)(v18 + 224) != 0) {
                    v107 = 128;
                    if (*(_QWORD*)(*v16 + 200) == 0) {
                      v107 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(*v16 + v107,
                        *(_QWORD*)(v18 + 224));
                  }
                  v108 = v130;
                  *(_QWORD*)(v18 + 208) = v129;
                  *(_QWORD*)(v18 + 216) = v108;
                  *(_QWORD*)(v18 + 224) = v131;
                }
                if (v13[9] != 0) {
                  v109 = (char*)v13[9];
                }
                else {
                  v109 = (char*)v15[9];
                }
                if (v109 != nullptr) {
                  v119 = (__int64)a2;
                  v120 = strlen(a2);
                  v121 = v109;
                  v122 = strlen(v109);
                  result = X8CALL_X0(
                      __int64,
                      GameRoutine_109ea80((void*)v129s, (__int64)&v119, 2));
                  v129 = v129s[0];
                  v130 = v129s[1];
                  v131 = (_BYTE*)v129s[2];
                  if ((*(_BYTE*)(v18 + 304) & 1) != 0 &&
                      *(_QWORD*)(v18 + 320) != 0) {
                    v110 = 128;
                    if (*(_QWORD*)(*v16 + 200) == 0) {
                      v110 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(*v16 + v110,
                        *(_QWORD*)(v18 + 320));
                  }
                  v17 = v130;
                  *(_QWORD*)(v18 + 304) = v129;
                  *(_QWORD*)(v18 + 312) = v17;
                  *(_QWORD*)(v18 + 320) = v131;
                }
                v13 = v115;
                v15 = v132;
                if (++v14 == 24) {
                  return result;
                }
              }
              if ((v30 | 7) == 0x17) {
                v33 = 26;
              }
              else {
                v33 = (v30 | 7) + 1;
              }
              v32 = (char*)fw_memory_HeapManager_Allocate(*v16, v33, 16, 0);
              v120 = v31;
              v121 = v32;
              v119 = v33 | 1;
            LABEL_60:
              memcpy(v32, v29, v31);
              goto LABEL_61;
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
