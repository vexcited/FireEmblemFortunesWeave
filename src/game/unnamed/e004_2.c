#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern char GameData_1a9f09e;
extern __int64 (*GameData_1fde958[7])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c330[2];
extern __int64* GameData_212c370;
extern __int64* GameData_212cc00[71];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21a6070;
extern __int64 GameData_22127a8;
__int64 GameRoutine_1a09c60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_d90ae0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_d9bf20(_QWORD, _QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__attribute__((swiftcall)) void Manager_d9bf20(PSEUDO_X8, _QWORD* result,
                                               unsigned __int8*,
                                               unsigned __int64,
                                               unsigned __int8**);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_d90ae0_alt1(__int64 result,
                                __int64*) __asm__("GameRoutine_d90ae0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0();
__int64 GameHr_d8d760(__int64 a1);

__int64 GameHr_d8d760(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  bool v18;
  __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int8* v24;
  char* v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  _DWORD* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int8* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  bool v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int8* v50;
  unsigned __int8* v51;
  unsigned __int64 v52;
  bool v53;
  __int64 v54;
  unsigned __int8* v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  unsigned __int8* v59;
  char* v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  _DWORD* v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  _QWORD* v69;
  unsigned __int64 v70;
  bool v71;
  unsigned __int64 v72;
  unsigned __int8* v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  unsigned __int64 v83;
  bool v84;
  unsigned __int64 v85;
  unsigned __int8* v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  _QWORD* v95;
  unsigned __int64 v96;
  bool v97;
  unsigned __int64 v98;
  unsigned __int8* v99;
  unsigned __int64 v100;
  __int64 result;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  char* v108;
  char* v109;
  char* v110;
  char* v111;
  unsigned __int64 v112;
  bool v113;
  struct {
    __int64 v114;
    __int64 v115;
    _DWORD* v116;
    char gap24_[8];
    __int64 v117;
    __int64 v118;
    __int64 v119;
    char gap56_[8];
    char v120;
  } v114_;
  char v121;

  v1 = *(unsigned __int8*)(a1 + 568);
  v2 = *(_QWORD*)(a1 + 576);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 == 0) {
    goto LABEL_33;
  }
  if ((v1 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 584);
  }
  else {
    v4 = a1 + 569;
  }
  v5 = game_HashString(v4);
  if (v5 == 0) {
    goto LABEL_31;
  }
  v6 = *(_QWORD*)(*GameData_212cc00[0] + 96);
  if (v6 == 0 || *(_QWORD*)(*GameData_212cc00[0] + 112) == 0) {
    goto LABEL_31;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = v5;
    if (v5 >= v6) {
      v9 = v5 % v6;
    }
  }
  else {
    v9 = v8 & v5;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(*GameData_212cc00[0] + 88) + 8 * v9);
  if (v10 == nullptr || (v11 = (_QWORD*)*v10) == nullptr) {
  LABEL_31:
    v13 = 0;
    goto LABEL_32;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v14 = v11[1];
      if (v14 == v5) {
        if (v11[2] == v5) {
          goto LABEL_232;
        }
      }
      else if ((v14 & v8) != v9) {
        goto LABEL_31;
      }
      v11 = (_QWORD*)*v11;
      v13 = 0;
      if (v11 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == v5) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_31;
    }
  LABEL_21:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_31;
    }
  }
  if (v11[2] != v5) {
    goto LABEL_21;
  }
LABEL_232:
  v13 = v11[3];
LABEL_32:
  *(_QWORD*)(a1 + 592) = v13;
LABEL_33:
  v15 = *(unsigned __int8**)(a1 + 520);
  v16 = *(unsigned __int8**)(a1 + 512);
  if (v15 != v16) {
    while (2) {
      v17 = *v16;
      v18 = (v17 & 1) == 0;
      v19 = v17 >> 1;
      if (v18) {
        v20 = v16 + 1;
      }
      else {
        v20 = *((unsigned __int8**)v16 + 2);
      }
      if (v18) {
        v21 = v19;
      }
      else {
        v21 = *((_QWORD*)v16 + 1);
      }
      if (v21 >= 4) {
        v22 = (char*)&v20[v21];
        v23 = v21;
        v24 = v20;
        do {
          v25 = (char*)memchr(v24, 80, v23 - 3);
          if (v25 == nullptr) {
            break;
          }
          if (*(_DWORD*)v25 == 1598310736) {
            if (v25 != v22 && v25 - (char*)v20 != -1) {
              goto LABEL_63;
            }
            break;
          }
          v24 = (unsigned __int8*)(v25 + 1);
          v23 = v22 - (char*)v24;
        } while (v22 - (char*)v24 >= 4);
      }
      v26 = v21 + 4;
      if ((unsigned __int64)(v21 + 4) >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_233:
        String_60a1d0();
      }
      if (v26 >= 0x17) {
        if ((v26 | 7) == 0x17) {
          v28 = 26;
        }
        else {
          v28 = (v26 | 7) + 1;
        }
        v29 = (_DWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v28, 16, 0);
        v114_.v115 = v21 + 4;
        v114_.v116 = v29;
        *v29 = 1598310736;
        v27 = (char*)(v29 + 1);
        v114_.v114 = v28 | 1;
      }
      else {
        v114_.v115 = 0;
        v114_.v116 = nullptr;
        HIDWORD(v114_.v114) = 0;
        v27 = (char*)&v114_.v114 + 5;
        *(_DWORD*)((char*)&v114_.v114 + 1) = 1598310736;
        LOBYTE(v114_.v114) = 2 * v26;
        if (v21 == 0) {
        LABEL_57:
          v27[v21] = 0;
          if ((*v16 & 1) != 0) {
            v30 = *((_QWORD*)v16 + 2);
            if (v30 != 0) {
              v31 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v31 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v30);
            }
          }
          *(_QWORD*)v16 = v114_.v114;
          *((_QWORD*)v16 + 1) = v114_.v115;
          *((_QWORD*)v16 + 2) = v114_.v116;
        LABEL_63:
          v16 += 24;
          if (v16 == v15) {
            v15 = *(unsigned __int8**)(a1 + 520);
            v16 = *(unsigned __int8**)(a1 + 512);
            goto LABEL_65;
          }
          continue;
        }
      }
      break;
    }
    memmove(v27, v20, v21);
    goto LABEL_57;
  }
LABEL_65:
  if (v15 != v16) {
    v33 = (unsigned __int8*)(a1 + 88);
    v32 = *(unsigned __int8*)(a1 + 88);
    v34 = *(_QWORD*)(a1 + 96);
    if ((v32 & 1) == 0) {
      v34 = v32 >> 1;
    }
    if (v34 == 0) {
      if (v33 != v16) {
        v35 = *v16;
        if ((v32 & 1) != 0) {
          if ((v35 & 1) != 0) {
            v38 = *((_QWORD*)v16 + 2);
          }
          else {
            v38 = (__int64)(v16 + 1);
          }
          if ((v35 & 1) != 0) {
            v39 = *((_QWORD*)v16 + 1);
          }
          else {
            v39 = v35 >> 1;
          }
          SpineModel_64dde0((__int64*)(a1 + 88), v38, v39);
        }
        else if ((v35 & 1) != 0) {
          GameRoutine_64df20_alt1((_QWORD*)(a1 + 88), *((_QWORD*)v16 + 2),
                                  *((_QWORD*)v16 + 1));
        }
        else {
          v36 = *(_QWORD*)v16;
          v37 = *((_QWORD*)v16 + 2);
          *(_QWORD*)(a1 + 96) = *((_QWORD*)v16 + 1);
          *(_QWORD*)(a1 + 104) = v37;
          *(_QWORD*)v33 = v36;
        }
      }
      v40 = *(unsigned __int8*)(a1 + 112);
      v41 = *(_QWORD*)(a1 + 120);
      if ((v40 & 1) == 0) {
        v41 = v40 >> 1;
      }
      if (v41 == 0) {
        v42 = *v33;
        if ((v40 & 1) != 0) {
          v44 = (v42 & 1) == 0;
          v45 = v42 >> 1;
          if (v44) {
            v46 = a1 + 89;
          }
          else {
            v46 = *(_QWORD*)(a1 + 104);
          }
          if (v44) {
            v47 = v45;
          }
          else {
            v47 = *(_QWORD*)(a1 + 96);
          }
          SpineModel_64dde0((__int64*)(a1 + 112), v46, v47);
        }
        else if ((v42 & 1) != 0) {
          GameRoutine_64df20_alt1((_QWORD*)(a1 + 112), *(_QWORD*)(a1 + 104),
                                  *(_QWORD*)(a1 + 96));
        }
        else {
          v43 = *(_QWORD*)(a1 + 96);
          *(_QWORD*)(a1 + 112) = *(_QWORD*)v33;
          *(_QWORD*)(a1 + 120) = v43;
          *(_QWORD*)(a1 + 128) = *(_QWORD*)(a1 + 104);
        }
        v48 = *(unsigned __int8*)(a1 + 112);
        v49 = *(_QWORD*)(a1 + 120);
        if ((v48 & 1) == 0) {
          v49 = v48 >> 1;
        }
        if (v49 >= 4) {
          if ((v48 & 1) != 0) {
            v108 = *(char**)(a1 + 128);
          }
          else {
            v108 = (char*)(a1 + 113);
          }
          v109 = &v108[v49];
        LABEL_218:
          v110 = v108;
          do {
            v111 = (char*)memchr(v110, 80, v49 - 3);
            if (v111 == nullptr) {
              break;
            }
            if (*(_DWORD*)v111 == 1598310736) {
              if (v111 != v109 && v111 - v108 != -1) {
                GameRoutine_1a0a8e0(a1 + 112, v111 - v108, 4, &GameData_1a9f09e,
                                    0);
                v112 = *(unsigned __int8*)(a1 + 112);
                v113 = (v112 & 1) == 0;
                v49 = v112 >> 1;
                if (v113) {
                  v108 = (char*)(a1 + 113);
                }
                else {
                  v108 = *(char**)(a1 + 128);
                }
                if (!v113) {
                  v49 = *(_QWORD*)(a1 + 120);
                }
                v109 = &v108[v49];
                if (v49 > 3) {
                  goto LABEL_218;
                }
              }
              break;
            }
            v110 = v111 + 1;
            v49 = v109 - v110;
          } while (v109 - v110 >= 4);
        }
      }
    }
  }
  v50 = *(unsigned __int8**)(a1 + 160);
  v51 = *(unsigned __int8**)(a1 + 168);
  if (v50 != v51) {
    while (2) {
      v52 = *v50;
      v53 = (v52 & 1) == 0;
      v54 = v52 >> 1;
      if (v53) {
        v55 = v50 + 1;
      }
      else {
        v55 = *((unsigned __int8**)v50 + 2);
      }
      if (v53) {
        v56 = v54;
      }
      else {
        v56 = *((_QWORD*)v50 + 1);
      }
      if (v56 < 4) {
        goto LABEL_113;
      }
      v57 = (char*)&v55[v56];
      v58 = v56;
      v59 = v55;
      while (1) {
        v60 = (char*)memchr(v59, 65, v58 - 3);
        if (v60 == nullptr) {
          goto LABEL_113;
        }
        if (*(_DWORD*)v60 == 1598310721) {
          break;
        }
        v59 = (unsigned __int8*)(v60 + 1);
        v58 = v57 - (char*)v59;
        if (v57 - (char*)v59 < 4) {
          goto LABEL_113;
        }
      }
      if (v60 == v57 || v60 - (char*)v55 == -1) {
      LABEL_113:
        v61 = v56 + 4;
        if ((unsigned __int64)(v56 + 4) >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_233;
        }
        if (v61 >= 0x17) {
          if ((v61 | 7) == 0x17) {
            v63 = 26;
          }
          else {
            v63 = (v61 | 7) + 1;
          }
          v64 = (_DWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v63, 16, 0);
          v114_.v115 = v56 + 4;
          v114_.v116 = v64;
          *v64 = 1598310721;
          v62 = (char*)(v64 + 1);
          v114_.v114 = v63 | 1;
        }
        else {
          v114_.v115 = 0;
          v114_.v116 = nullptr;
          HIDWORD(v114_.v114) = 0;
          v62 = (char*)&v114_.v114 + 5;
          *(_DWORD*)((char*)&v114_.v114 + 1) = 1598310721;
          LOBYTE(v114_.v114) = 2 * v61;
          if (v56 == 0) {
            goto LABEL_122;
          }
        }
        memmove(v62, v55, v56);
      LABEL_122:
        v62[v56] = 0;
        if ((*v50 & 1) != 0) {
          v65 = *((_QWORD*)v50 + 2);
          if (v65 != 0) {
            v66 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v65);
          }
        }
        *(_QWORD*)v50 = v114_.v114;
        *((_QWORD*)v50 + 1) = v114_.v115;
        *((_QWORD*)v50 + 2) = v114_.v116;
      }
      v50 += 24;
      if (v50 == v51) {
        break;
      }
      continue;
    }
  }
  v67 = (_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v68 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v68 = 0;
  }
  if (GameData_22127a8 != 0) {
    v69 = (_QWORD*)GameData_22127a8;
  }
  else {
    v69 = (_QWORD*)v68;
  }
  v70 = *(unsigned __int8*)(a1 + 200);
  v71 = (v70 & 1) == 0;
  v72 = v70 >> 1;
  if (v71) {
    v73 = (unsigned __int8*)(a1 + 201);
  }
  else {
    v73 = *(unsigned __int8**)(a1 + 216);
  }
  if (v71) {
    v74 = v72;
  }
  else {
    v74 = *(_QWORD*)(a1 + 208);
  }
  Manager_d9bf20((void*)(&v114_.v114), v69, v73, v74,
                 (unsigned __int8**)(a1 + 224));
  GameRoutine_d90ae0_alt1(a1 + 600, &v114_.v114);
  if (v114_.v120 == 1) {
    v75 = v114_.v118;
    if (v114_.v118 != 0) {
      v76 = v114_.v119;
      if (v114_.v118 == v114_.v119) {
        goto LABEL_149;
      }
      do {
        v77 = *(unsigned int*)(v76 - 8);
        v78 = v76 - 32;
        if ((_DWORD)v77 != -1) {
          ((void (*)(char*, __int64))GameData_1fde958[v77])(&v121, v76 - 32);
        }
        *(_DWORD*)(v76 - 8) = -1;
        v76 -= 32;
      } while (v78 != v75);
      v114_.v119 = v75;
      v75 = v114_.v118;
      if (v114_.v118 != 0) {
      LABEL_149:
        v79 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v79 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v75);
      }
    }
    if (((unsigned __int8)v114_.v116 & 1) != 0 && v114_.v117 != 0) {
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v114_.v117);
    }
  }
  if (*v67 != 0) {
    v81 = *v67 + 248LL;
  }
  else {
    v81 = 0;
  }
  if (GameData_22127a8 != 0) {
    v82 = (_QWORD*)GameData_22127a8;
  }
  else {
    v82 = (_QWORD*)v81;
  }
  v83 = *(unsigned __int8*)(a1 + 248);
  v84 = (v83 & 1) == 0;
  v85 = v83 >> 1;
  if (v84) {
    v86 = (unsigned __int8*)(a1 + 249);
  }
  else {
    v86 = *(unsigned __int8**)(a1 + 264);
  }
  if (v84) {
    v87 = v85;
  }
  else {
    v87 = *(_QWORD*)(a1 + 256);
  }
  Manager_d9bf20((void*)(&v114_.v114), v82, v86, v87,
                 (unsigned __int8**)(a1 + 272));
  GameRoutine_d90ae0_alt1(a1 + 672, &v114_.v114);
  if (v114_.v120 == 1) {
    v88 = v114_.v118;
    if (v114_.v118 != 0) {
      v89 = v114_.v119;
      if (v114_.v118 == v114_.v119) {
        goto LABEL_177;
      }
      do {
        v90 = *(unsigned int*)(v89 - 8);
        v91 = v89 - 32;
        if ((_DWORD)v90 != -1) {
          ((void (*)(char*, __int64))GameData_1fde958[v90])(&v121, v89 - 32);
        }
        *(_DWORD*)(v89 - 8) = -1;
        v89 -= 32;
      } while (v91 != v88);
      v114_.v119 = v88;
      v88 = v114_.v118;
      if (v114_.v118 != 0) {
      LABEL_177:
        v92 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v92 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, v88);
      }
    }
    if (((unsigned __int8)v114_.v116 & 1) != 0 && v114_.v117 != 0) {
      v93 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v93 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v114_.v117);
    }
  }
  if (*v67 != 0) {
    v94 = *v67 + 248LL;
  }
  else {
    v94 = 0;
  }
  if (GameData_22127a8 != 0) {
    v95 = (_QWORD*)GameData_22127a8;
  }
  else {
    v95 = (_QWORD*)v94;
  }
  v96 = *(unsigned __int8*)(a1 + 296);
  v97 = (v96 & 1) == 0;
  v98 = v96 >> 1;
  if (v97) {
    v99 = (unsigned __int8*)(a1 + 297);
  }
  else {
    v99 = *(unsigned __int8**)(a1 + 312);
  }
  if (v97) {
    v100 = v98;
  }
  else {
    v100 = *(_QWORD*)(a1 + 304);
  }
  Manager_d9bf20((void*)(&v114_.v114), v95, v99, v100,
                 (unsigned __int8**)(a1 + 320));
  result = GameRoutine_d90ae0_alt1(a1 + 744, &v114_.v114);
  if (v114_.v120 == 1) {
    v102 = v114_.v118;
    if (v114_.v118 != 0) {
      v103 = v114_.v119;
      if (v114_.v118 == v114_.v119) {
        goto LABEL_205;
      }
      do {
        v104 = *(unsigned int*)(v103 - 8);
        v105 = v103 - 32;
        if ((_DWORD)v104 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fde958[v104])(
              &v121, v103 - 32);
        }
        *(_DWORD*)(v103 - 8) = -1;
        v103 -= 32;
      } while (v105 != v102);
      v114_.v119 = v102;
      v102 = v114_.v118;
      if (v114_.v118 != 0) {
      LABEL_205:
        v106 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v106 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v106, v102);
      }
    }
    if (((unsigned __int8)v114_.v116 & 1) != 0 && v114_.v117 != 0) {
      v107 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v107 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v107, v114_.v117);
    }
  }
  return result;
}

_QWORD* GameHr_e0dce0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;

  v6 = *GameData_212c370;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  result = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (result == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v10 = 40;
  LABEL_8:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 == 0x4000) {
    return result;
  }
  v12 = GameData_212c330[0];
  v13 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(a1 + 20)] + 16 * v11);
  if (v13[1] == 0 || *v13 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v14 = *(_QWORD*)(a3 + 16);
  }
  else {
    v14 = a3 + 1;
  }
  v15 = GameRoutine_1a09c70(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_68:
    GameRoutine_60a1d0(v15);
  }
  v16 = v15;
  v17 = (_QWORD*)GameData_212bf68;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v15 | 7) + 1;
    }
    v18 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v19, 16, 0);
    v40 = v16;
    v41 = v18;
    v39 = v19 | 1;
  }
  else {
    LOBYTE(v39) = 2 * v15;
    v18 = (char*)&v39 + 1;
    if (v15 == 0) {
      goto LABEL_24;
    }
  }
  GameRoutine_1a0b940(v18, v14, v16);
LABEL_24:
  v20 = *v17;
  v18[v16] = 0;
  v21 = (__int64*)GameRoutine_651b90(v20, 24, 16, 0);
  v22 = v40;
  v23 = v21;
  *v21 = v39;
  v21[1] = v22;
  v21[2] = (__int64)v41;
  v24 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v24 == 0x4000 ||
      (v25 = (_QWORD*)(v12[*(unsigned int*)(a1 + 20)] + 16 * v24))[1] == 0) {
    v26 = nullptr;
  }
  else if (*v25 == *(_QWORD*)(a1 + 8)) {
    v26 = (_QWORD*)v25[1];
  }
  else {
    v26 = nullptr;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v27 = *(_QWORD*)(a2 + 16);
  }
  else {
    v27 = a2 + 1;
  }
  v15 = GameRoutine_1a09c70(v27);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_68;
  }
  v28 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v15 | 7) + 1;
    }
    v29 = (char*)GameRoutine_651b90(*v17, v30, 16, 0);
    v40 = v28;
    v41 = v29;
    v39 = v30 | 1;
  }
  else {
    LOBYTE(v39) = 2 * v15;
    v29 = (char*)&v39 + 1;
    if (v15 == 0) {
      goto LABEL_42;
    }
  }
  GameRoutine_1a0b940(v29, v27, v28);
LABEL_42:
  v31 = v26 + 109;
  v29[v28] = 0;
  if (v26 + 109 != &v39) {
    if ((*(_BYTE*)v31 & 1) != 0) {
      if ((v39 & 1) != 0) {
        v33 = v41;
      }
      else {
        v33 = (char*)&v39 + 1;
      }
      if ((v39 & 1) != 0) {
        v34 = v40;
      }
      else {
        v34 = (unsigned __int64)(unsigned __int8)v39 >> 1;
      }
      GameRoutine_64dde0(v31, v33, v34);
    }
    else if ((v39 & 1) != 0) {
      GameRoutine_64df20(v31, v41, v40);
    }
    else {
      v32 = v40;
      *v31 = v39;
      v26[110] = v32;
      v26[111] = v41;
    }
  }
  GameRoutine_6b7aa0(v26 + 112);
  if ((v39 & 1) != 0 && v41 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*v17 + 200LL) == 0) {
      v35 = 56;
    }
    GameRoutine_1a0a4e0(*v17 + v35, v41);
  }
  if ((*(_BYTE*)v23 & 1) != 0) {
    v36 = v23[2];
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*v17 + 200LL) == 0) {
        v37 = 56;
      }
      GameRoutine_1a0a4e0(*v17 + v37, v36);
    }
  }
  v38 = 128;
  if (*(_QWORD*)(*v17 + 200LL) == 0) {
    v38 = 56;
  }
  return (_QWORD*)GameRoutine_1a0a4e0(*v17 + v38, v23);
}

#pragma GCC visibility pop
