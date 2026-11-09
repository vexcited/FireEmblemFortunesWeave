#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_13262e0(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_157cb40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1595650(_QWORD, _QWORD);
__int64 GameRoutine_1903280(_QWORD, _QWORD);
__int64 GameRoutine_1903880(_QWORD, _QWORD);
__int64 GameRoutine_8a1ae0(_QWORD);
__int64 GameRoutine_ae0560(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_SetupText(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD);
__int64 game_menu_PageTab_Update(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1ab8d4c;
extern _UNKNOWN* GameData_1fa8308;
extern __int64 (*GameData_210f100[])();
extern __int64 (*GameData_210f180[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_212c970[153];
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8a7fd0(void);
__int64 ProcGmapShopGuideMenu_Unknown84(__int64* a1);
__int64 ProcGmapShopGuideMenu_Unknown104(__int64 a1, char a2);
__int64 ProcGmapShopGuideMenu_Unknown106(__int64 a1, char a2);

__int64 ProcGmapShopGuideMenu_Unknown84(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64 v88;
  _QWORD* v89;
  _QWORD* v90;
  __int64 v91;
  int v92;
  __int64 v93;
  unsigned int v94;
  __int64 v95;
  __int64 result;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v100;
  unsigned __int64 v101;
  _QWORD* v102;
  _QWORD* v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  char* v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  char* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  char* v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  _QWORD v126[4];
  _QWORD* v127;
  _QWORD* v128;

  v2 = GameRoutine_155fbe0(a1 + 106, "L_Stock");
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned int*)(game_GameModeData_instance_ + 72);
  }
  else {
    v3 = 0;
  }
  GameRoutine_157cb40(v2, 0, "Icon", "T_Num", v3, 1);
  v4 = a1[151];
  a1[153] = a1[152];
  v5 = GameRoutine_13262e0(v4);
  if (v5 == 0) {
    v11 = GameRoutine_1903280(a1, 1);
    if (v11 != 0) {
      v12 = (__int64*)a1[153];
      v13 = a1[154];
      if ((unsigned __int64)v12 >= v13) {
        v15 = a1[152];
        v16 = (char*)v12 - v15;
        v17 = ((__int64)v12 - v15) >> 3;
        v18 = v17 + 1;
        if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
          goto LABEL_176;
        }
        v19 = v13 - v15;
        if (v19 >> 2 > v18) {
          v18 = v19 >> 2;
        }
        if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
          v20 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v20 = v18;
        }
        if (v20 != 0) {
          if (v20 >> 61 != 0) {
            goto LABEL_177;
          }
          v21 = v11;
          v22 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
          v11 = v21;
        }
        else {
          v22 = 0;
        }
        v52 = v22 + 8 * v20;
        v53 = (__int64)&v16[v22 + -8 * v17];
        *(_QWORD*)&v16[v22] = v11;
        v14 = (__int64)&v16[v22 + 8];
        memcpy(v53, v15, v16);
        a1[152] = v53;
        a1[153] = v14;
        a1[154] = v52;
        if (v15 != 0) {
          v54 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v54);
        }
      }
      else {
        *v12 = v11;
        v14 = (__int64)(v12 + 1);
      }
      a1[153] = v14;
    }
    v55 = GameRoutine_1903280(a1, 2);
    if (v55 != 0) {
      v56 = (__int64*)a1[153];
      v57 = a1[154];
      if ((unsigned __int64)v56 >= v57) {
        v59 = a1[152];
        v60 = (char*)v56 - v59;
        v61 = ((__int64)v56 - v59) >> 3;
        v62 = v61 + 1;
        if ((unsigned __int64)(v61 + 1) >> 61 != 0) {
          goto LABEL_176;
        }
        v63 = v57 - v59;
        if (v63 >> 2 > v62) {
          v62 = v63 >> 2;
        }
        if ((unsigned __int64)v63 >= 0x7FFFFFFFFFFFFFF8LL) {
          v64 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v64 = v62;
        }
        if (v64 != 0) {
          if (v64 >> 61 != 0) {
            goto LABEL_177;
          }
          v65 = v55;
          v66 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v64, 16, 0);
          v55 = v65;
        }
        else {
          v66 = 0;
        }
        v67 = v66 + 8 * v64;
        v68 = (__int64)&v60[v66 + -8 * v61];
        *(_QWORD*)&v60[v66] = v55;
        v58 = (__int64)&v60[v66 + 8];
        memcpy(v68, v59, v60);
        a1[152] = v68;
        a1[153] = v58;
        a1[154] = v67;
        if (v59 != 0) {
          v69 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v69);
        }
      }
      else {
        *v56 = v55;
        v58 = (__int64)(v56 + 1);
      }
      a1[153] = v58;
    }
    v70 = GameRoutine_1903280(a1, 4);
    if (v70 != 0) {
      v71 = (__int64*)a1[153];
      v72 = a1[154];
      if ((unsigned __int64)v71 >= v72) {
        v74 = a1[152];
        v75 = (char*)v71 - v74;
        v76 = ((__int64)v71 - v74) >> 3;
        v77 = v76 + 1;
        if ((unsigned __int64)(v76 + 1) >> 61 != 0) {
          goto LABEL_176;
        }
        v78 = v72 - v74;
        if (v78 >> 2 > v77) {
          v77 = v78 >> 2;
        }
        if ((unsigned __int64)v78 >= 0x7FFFFFFFFFFFFFF8LL) {
          v79 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v79 = v77;
        }
        if (v79 != 0) {
          if (v79 >> 61 != 0) {
            goto LABEL_177;
          }
          v80 = v70;
          v81 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v79, 16, 0);
          v70 = v80;
        }
        else {
          v81 = 0;
        }
        v82 = v81 + 8 * v79;
        v83 = (__int64)&v75[v81 + -8 * v76];
        *(_QWORD*)&v75[v81] = v70;
        v73 = (__int64)&v75[v81 + 8];
        memcpy(v83, v74, v75);
        a1[152] = v83;
        a1[153] = v73;
        a1[154] = v82;
        if (v74 != 0) {
          v84 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v84);
        }
      }
      else {
        *v71 = v70;
        v73 = (__int64)(v71 + 1);
      }
      a1[153] = v73;
    }
    v85 = *(_QWORD*)(a1[151] + 120);
    if (v85 != GameRoutine_ae0560()) {
      goto LABEL_111;
    }
    v97 = game_HashString(&GameData_1ab8d4c);
    if (v97 == 0) {
      goto LABEL_111;
    }
    v98 = *(_QWORD*)(*GameData_212c970[0] + 96);
    if (v98 == 0 || *(_QWORD*)(*GameData_212c970[0] + 112) == 0) {
      goto LABEL_111;
    }
    v100 = v98 - 1;
    if ((v98 & (v98 - 1)) != 0) {
      v101 = v97;
      if (v97 >= v98) {
        v101 = v97 % v98;
      }
    }
    else {
      v101 = v100 & v97;
    }
    v102 = *(_QWORD**)(*(_QWORD*)(*GameData_212c970[0] + 88) + 8 * v101);
    if (v102 == nullptr) {
      goto LABEL_111;
    }
    v103 = (_QWORD*)*v102;
    if (v103 == nullptr) {
      goto LABEL_111;
    }
    if ((v98 & v100) == 0) {
      while (1) {
        v105 = v103[1];
        if (v105 == v97) {
          if (v103[2] == v97) {
            goto LABEL_157;
          }
        }
        else if ((v105 & v100) != v101) {
          goto LABEL_111;
        }
        v103 = (_QWORD*)*v103;
        if (v103 == nullptr) {
          goto LABEL_111;
        }
      }
    }
    while (1) {
      v104 = v103[1];
      if (v104 == v97) {
        if (v103[2] == v97) {
        LABEL_157:
          v106 = v103[3];
          if (v106 == 0 ||
              (GameRoutine_1595650(12, *(_QWORD*)(v106 + 8)) & 1) != 0) {
            goto LABEL_111;
          }
          v107 = (_QWORD*)a1[153];
          v108 = a1[154];
          if ((unsigned __int64)v107 < v108) {
            *v107 = v106;
            v109 = (__int64)(v107 + 1);
          LABEL_175:
            a1[153] = v109;
            goto LABEL_111;
          }
          v110 = a1[152];
          v111 = (char*)v107 - v110;
          v112 = ((__int64)v107 - v110) >> 3;
          v113 = v112 + 1;
          if ((unsigned __int64)(v112 + 1) >> 61 == 0) {
            v114 = v108 - v110;
            if (v114 >> 2 > v113) {
              v113 = v114 >> 2;
            }
            if ((unsigned __int64)v114 >= 0x7FFFFFFFFFFFFFF8LL) {
              v115 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v115 = v113;
            }
            if (v115 == 0) {
              v116 = 0;
            LABEL_171:
              v117 = v116 + 8 * v115;
              v118 = (char*)v107 - v110;
              v119 = (__int64)&v111[v116 + -8 * v112];
              *(_QWORD*)&v111[v116] = v106;
              v109 = (__int64)&v111[v116 + 8];
              memcpy(v119, v110, v118);
              a1[152] = v119;
              a1[153] = v109;
              a1[154] = v117;
              if (v110 != 0) {
                v120 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v120 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v120);
              }
              goto LABEL_175;
            }
            if (v115 >> 61 == 0) {
              v116 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v115, 16, 0);
              goto LABEL_171;
            }
          LABEL_177:
            GameRoutine_60a210();
          }
        LABEL_176:
          GameRoutine_8a7fd0();
        }
      }
      else {
        if (v104 >= v98) {
          v104 %= v98;
        }
        if (v104 != v101) {
          goto LABEL_111;
        }
      }
      v103 = (_QWORD*)*v103;
      if (v103 == nullptr) {
        goto LABEL_111;
      }
    }
  }
  v7 = *(unsigned __int16*)(v5 + 32);
  v8 = v5;
  if (*(_WORD*)(v5 + 32) == 0) {
    goto LABEL_111;
  }
  v9 = 0;
  v10 = GameData_212c970[0];
  while (2) {
    v24 = (__int64)*(&GameData_1fa8308 +
                     (unsigned __int8)GameRoutine_8a1ae0(
                         *(_QWORD*)(*(_QWORD*)(v8 + 40) + 8 * v9)));
    v25 = a1[151];
    if ((*(_BYTE*)v25 & 1) != 0) {
      v26 = *(_QWORD*)(v25 + 16);
    }
    else {
      v26 = v25 + 1;
    }
    v27 = game_util_Format("%s_%s", v26, v24);
    v28 = game_HashString(v27);
    if (v28 == 0) {
      goto LABEL_21;
    }
    v29 = *(_QWORD*)(*v10 + 96);
    if (v29 == 0 || *(_QWORD*)(*v10 + 112) == 0) {
      goto LABEL_21;
    }
    v31 = v29 - 1;
    if ((v29 & (v29 - 1)) != 0) {
      v32 = v28;
      if (v28 >= v29) {
        v32 = v28 % v29;
      }
    }
    else {
      v32 = v31 & v28;
    }
    v33 = *(_QWORD**)(*(_QWORD*)(*v10 + 88) + 8 * v32);
    if (v33 == nullptr) {
      goto LABEL_21;
    }
    v34 = (_QWORD*)*v33;
    if (v34 == nullptr) {
      goto LABEL_21;
    }
    if ((v29 & v31) == 0) {
      while (1) {
        v36 = v34[1];
        if (v36 == v28) {
          if (v34[2] == v28) {
            goto LABEL_50;
          }
        }
        else if ((v36 & v31) != v32) {
          goto LABEL_21;
        }
        v34 = (_QWORD*)*v34;
        if (v34 == nullptr) {
          goto LABEL_21;
        }
      }
    }
    while (1) {
      v35 = v34[1];
      if (v35 == v28) {
        break;
      }
      if (v35 >= v29) {
        v35 %= v29;
      }
      if (v35 != v32) {
        goto LABEL_21;
      }
    LABEL_39:
      v34 = (_QWORD*)*v34;
      if (v34 == nullptr) {
        goto LABEL_21;
      }
    }
    if (v34[2] != v28) {
      goto LABEL_39;
    }
  LABEL_50:
    v37 = v34[3];
    if (v37 == 0 || (GameRoutine_1595650(0, *(_QWORD*)(v37 + 8)) & 1) != 0) {
      goto LABEL_21;
    }
    v38 = (_QWORD*)a1[153];
    v39 = a1[154];
    if ((unsigned __int64)v38 < v39) {
      *v38 = v37;
      v23 = (__int64)(v38 + 1);
      goto LABEL_20;
    }
    v40 = a1[152];
    v41 = (char*)v38 - v40;
    v42 = ((__int64)v38 - v40) >> 3;
    v43 = v42 + 1;
    if ((unsigned __int64)(v42 + 1) >> 61 != 0) {
      goto LABEL_176;
    }
    v44 = v39 - v40;
    if (v44 >> 2 > v43) {
      v43 = v44 >> 2;
    }
    if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
      v45 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v45 = v43;
    }
    if (v45 == 0) {
      v47 = 0;
      goto LABEL_63;
    }
    v121 = ((__int64)v38 - v40) >> 3;
    v122 = (char*)v38 - v40;
    if (v45 >> 61 != 0) {
      goto LABEL_177;
    }
    v46 = a1[152];
    v47 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v45, 16, 0);
    v42 = v121;
    v41 = v122;
    v40 = v46;
  LABEL_63:
    v48 = v47 + 8 * v45;
    v49 = (__int64)&v41[v47 + -8 * v42];
    v123 = v48;
    *(_QWORD*)&v41[v47] = v37;
    v23 = (__int64)&v41[v47 + 8];
    v50 = v40;
    memcpy(v49, v40, v41);
    a1[152] = v49;
    a1[153] = v23;
    a1[154] = v123;
    if (v50 != 0) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v51);
    }
  LABEL_20:
    a1[153] = v23;
  LABEL_21:
    if (++v9 != v7) {
      continue;
    }
    break;
  }

LABEL_111:
  v86 = a1[151];
  v87 = v126;
  v126[0] = GameData_210f100;
  v126[1] = a1;
  v127 = v126;
  if (v86 == 0) {
    goto LABEL_122;
  }
  v88 = *(_QWORD*)(*GameData_212c790 + 8);
  v89 = *(_QWORD**)(v88 + 8);
  v90 = *(_QWORD**)(v88 + 16);
  if (v89 == v90) {
    v87 = v126;
    goto LABEL_122;
  }
  do {
    if (*(_QWORD*)*v89 == v86) {
      v128 = (_QWORD*)*v89;
      if (v127 == nullptr) {
        GameRoutine_60a310(0, v6);
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v127 + 48LL))(v127, &v128);
    }
    ++v89;
  } while (v89 != v90);
  v87 = v127;
  if (v127 == v126) {
  LABEL_122:
    v91 = 32;
  LABEL_123:
    (*(void (**)(void))(*v87 + v91))();
  }
  else if (v127 != nullptr) {
    v91 = 40;
    goto LABEL_123;
  }
  *((_DWORD*)a1 + 268) = ((unsigned __int64)(a1[153] - a1[152]) >> 3) - 1;
  v92 = *((_DWORD*)a1 + 300);
  *((_DWORD*)a1 + 269) = v92;
  *((_DWORD*)a1 + 270) = v92;
  GameRoutine_1560070(&v124, a1 + 106, "L_MenuTab");
  v126[0] = GameData_210f180;
  v126[1] = a1;
  v93 = *a1;
  v127 = v126;
  v94 = (*(__int64 (**)(__int64*))(v93 + 192))(a1);
  game_menu_PageTab_SetupText(a1 + 134, &v124, v126, v94, 4, 5);
  if (v127 == v126) {
    v95 = 32;
  LABEL_128:
    (*(void (**)(void))(*v127 + v95))();
  }
  else if (v127 != nullptr) {
    v95 = 40;
    goto LABEL_128;
  }
  result = v125;
  if (v125 != 0) {
    return std___1___shared_weak_count___release_weak(v125);
  }
  return result;
}

__int64 ProcGmapShopGuideMenu_Unknown104(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  int v5;
  char v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_DWORD*)(a1 + 1076);
  v3 = *(_QWORD*)(a1 + 1088);
  if (v2 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v3) >> 2)) {
    v5 = *(_DWORD*)(v3 + 4LL * v2);
    if (v2 != v5) {
      *(_DWORD*)(a1 + 1080) = v2;
      *(_DWORD*)(a1 + 1076) = v5;
      v6 = a2;
      game_menu_PageTab_Update(a1 + 1072);
      a2 = v6;
    }
  }
  if ((game_menu_PageTab_Move(a1 + 1072, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  v7 = *(unsigned int*)(a1 + 1076);
  v8 = *(_QWORD*)(a1 + 1088);
  if ((int)v7 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v8) >> 2)) {
    v7 = *(unsigned int*)(v8 + 4LL * (int)v7);
  }
  GameRoutine_1903880(a1, v7);
  return 13;
}

__int64 ProcGmapShopGuideMenu_Unknown106(__int64 a1, char a2)
{
  int v2;
  __int64 v3;
  int v5;
  char v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_DWORD*)(a1 + 1076);
  v3 = *(_QWORD*)(a1 + 1088);
  if (v2 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v3) >> 2)) {
    v5 = *(_DWORD*)(v3 + 4LL * v2);
    if (v2 != v5) {
      *(_DWORD*)(a1 + 1080) = v2;
      *(_DWORD*)(a1 + 1076) = v5;
      v6 = a2;
      game_menu_PageTab_Update(a1 + 1072);
      a2 = v6;
    }
  }
  if ((game_menu_PageTab_Move(a1 + 1072, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  v7 = *(unsigned int*)(a1 + 1076);
  v8 = *(_QWORD*)(a1 + 1088);
  if ((int)v7 < (unsigned __int64)((*(_QWORD*)(a1 + 1096) - v8) >> 2)) {
    v7 = *(unsigned int*)(v8 + 4LL * (int)v7);
  }
  GameRoutine_1903880(a1, v7);
  return 13;
}

#pragma GCC visibility pop
