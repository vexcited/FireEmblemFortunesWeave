#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1595700(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15970e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16966e0();
__int64 GameRoutine_1842580(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ffe140(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
__int64 FacilityMenuItem_DrawText(_QWORD* a1);
_QWORD* GameRoutine_169a430(__int64, char*);
__int64 FacilityMenuItem_ACall(_QWORD* a1);

__int64 FacilityMenuItem_ACall(_QWORD* a1)
{
  char v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[2];
    char v8;
  } v7_;

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  result = 1;
  if ((v2 & 1) != 0) {
    v4 = a1[14];
    v7_.v8 = 1;
    v6 = *(_QWORD*)(v4 + 96);
    v5 = *(_QWORD*)(v4 + 104);
    v7_.v7[0] = v6;
    v7_.v7[1] = v5;
    GameRoutine_169a430((__int64)a1, (char*)v7_.v7);
    return 12;
  }
  return result;
}

__int64 FacilityMenuItem_DrawText(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  atomic_ullong* v43;
  __int64* v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  atomic_ullong* v50;
  __int64* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  atomic_ullong* v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  atomic_ullong* v79;
  __int64* v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  atomic_ullong* v92;
  __int64* v93;
  char* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  char* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  atomic_ullong* v105;
  __int64* v106;
  char* v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  char* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  atomic_ullong* v118;
  __int64* v119;
  char* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  atomic_ullong* v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  atomic_ullong* v131;
  __int64* v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64* v136;
  __int64 result;
  __int64 v138;
  __int64* v139;
  __int64* v140;
  __int64* v141;
  __int64* v142;
  __int64* v143;
  __int64* v144;
  __int64* v145;
  __int64* v146;
  __int64* v147;
  __int64 v148;
  __int64* v149;
  __int64* v150;
  __int64* v151;
  _QWORD v152[2];
  char* v153;
  __int64 v154;
  _QWORD v155[2];
  unsigned __int64 v156;
  _QWORD v157[2];
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  int v165;
  int v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;

  game_menu_GameMenuItem_DrawText();
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v139 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v139;
    if (v139 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v7 = ui_LayoutAccessor_FindPane(v6, "Icon");
  if (v7 != 0) {
    *(_BYTE*)(v7 + 88) &= ~1u;
  }
  v8 = a1[7];
  if (v8 == 0) {
    goto LABEL_12;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_12;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = (__int64*)a1[6];
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v140 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    v12 = v140;
    if (v140 != nullptr) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if (v12 == nullptr) {
  LABEL_12:
    v12 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_13:
  GameRoutine_1562cf0(v12, "Facility");
  v13 = a1[14];
  if (*(_DWORD*)(v13 + 32) == 14) {
    LODWORD(v154) = 14;
    if ((*(_BYTE*)(v13 + 40) & 1) != 0) {
      fw_text_String_CopyTerminated(v155, *(_QWORD*)(v13 + 56),
                                    *(_QWORD*)(v13 + 48));
    }
    else {
      v14 = *(_QWORD*)(v13 + 48);
      v15 = *(_QWORD*)(v13 + 56);
      v155[0] = *(_QWORD*)(v13 + 40);
      v155[1] = v14;
      v156 = v15;
    }
    if ((*(_BYTE*)(v13 + 64) & 1) != 0) {
      fw_text_String_CopyTerminated(v157, *(_QWORD*)(v13 + 80),
                                    *(_QWORD*)(v13 + 72));
    }
    else {
      v23 = *(_QWORD*)(v13 + 72);
      v24 = *(_QWORD*)(v13 + 80);
      v157[0] = *(_QWORD*)(v13 + 64);
      v157[1] = v23;
      v158 = v24;
    }
    v25 = *(_QWORD*)(v13 + 104);
    v159 = *(_QWORD*)(v13 + 96);
    v160 = v25;
    v26 = msg_MessageManager_instance__ptr[0];
    v27 = *msg_MessageManager_instance__ptr[0];
    if ((v155[0] & 1) != 0) {
      v28 = v156;
    }
    else {
      v28 = (unsigned __int64)&v154 | 9;
    }
    v29 = GameRoutine_ffe140((unsigned int)v154, v28);
    v30 = GameData_212e348;
    v167 = -1;
    v168 = -1;
    v169 = -1;
    v170 = -1;
    v171 = -1;
    v172 = -1;
    v173 = -1;
    v174 = -1;
    v175 = -1;
    v176 = -1;
    v177 = -1;
    v178 = -1;
    v161 = (__int64)(GameData_212e348 + 2);
    v162 = 0xFFFF0001FFFF0000LL;
    v163 = 0xFFFF0004FFFF0002LL;
    v164 = 0xFFFF0006FFFF0005LL;
    v179 = 8;
    v165 = -65529;
    v166 = -65528;
    v31 = GameRoutine_a4dbe0(v27, v29, 0, &v161);
    v32 = strlen(v31);
    if (v32 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_224;
    }
    v33 = v32;
    if (v32 >= 0x17) {
      if ((v32 | 7) == 0x17) {
        v35 = 26;
      }
      else {
        v35 = (v32 | 7) + 1;
      }
      v34 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v35, 16, 0);
      v152[1] = v33;
      v153 = v34;
      v152[0] = v35 | 1;
    }
    else {
      LOBYTE(v152[0]) = 2 * v32;
      v34 = (char*)v152 + 1;
      if (v32 == 0) {
        goto LABEL_40;
      }
    }
    memmove(v34, v31, v33);
  LABEL_40:
    v34[v33] = 0;
    GameRoutine_1a09ce0(v152, " ", 1);
    v36 = *(_QWORD*)(GameRoutine_16966e0() + 32);
    v37 = *v26;
    v167 = -1;
    v168 = -1;
    v169 = -1;
    v170 = -1;
    v171 = -1;
    v172 = -1;
    v173 = -1;
    v174 = -1;
    v175 = -1;
    v176 = -1;
    v177 = -1;
    v178 = -1;
    v161 = (__int64)(v30 + 2);
    v162 = 0xFFFF0001FFFF0000LL;
    v163 = 0xFFFF0004FFFF0002LL;
    v164 = 0xFFFF0006FFFF0005LL;
    v179 = 8;
    v165 = -65529;
    v166 = -65528;
    v38 = GameRoutine_a4dbe0(v37, v36, 0, &v161);
    v39 = strlen(v38);
    GameRoutine_1a09ce0(v152, v38, v39);
    v40 = a1[7];
    if (v40 != 0) {
      v41 = std___1___shared_weak_count_lock(v40);
      if (v41 != 0) {
        v42 = v41;
        v43 = (atomic_ullong*)(v41 + 8);
        v44 = (__int64*)a1[6];
        if (atomic_fetch_add(v43, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v44 != nullptr) {
            goto LABEL_45;
          }
        }
        else {
          v150 = v44;
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
          std___1___shared_weak_count___release_weak(v42);
          v44 = v150;
          if (v150 != nullptr) {
          LABEL_45:
            if ((v152[0] & 1) != 0) {
              v45 = v153;
            }
            else {
              v45 = (char*)v152 + 1;
            }
            if (v45 != nullptr) {
              v46 = ui_LayoutAccessor_FindTextBox(v44, "T_Txt");
              if (v46 != 0) {
                GameRoutine_156c5d0(v46, v45, 0);
              }
            }
            v47 = a1[7];
            if (v47 != 0) {
              v48 = std___1___shared_weak_count_lock(v47);
              if (v48 != 0) {
                v49 = v48;
                v50 = (atomic_ullong*)(v48 + 8);
                v51 = (__int64*)a1[6];
                if (atomic_fetch_add(v50, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                  if (v51 != nullptr) {
                    goto LABEL_56;
                  }
                }
                else {
                  v151 = v51;
                  (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
                  std___1___shared_weak_count___release_weak(v49);
                  v51 = v151;
                  if (v151 != nullptr) {
                  LABEL_56:
                    v52 = ui_LayoutAccessor_FindPane(v51, "Icon");
                    if (v52 != 0) {
                      v52 = __dynamic_cast(v52, GameData_212d670[0],
                                           GameData_212d678[0], 0);
                    }
                    if ((v155[0] & 1) != 0) {
                      v53 = v156;
                    }
                    else {
                      v53 = (unsigned __int64)&v154 | 9;
                    }
                    GameRoutine_1842580(v52, (unsigned int)v154, v53);
                    if ((v152[0] & 1) != 0 && v153 != nullptr) {
                      v54 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v54 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v153);
                    }
                    if ((v157[0] & 1) != 0 && v158 != 0) {
                      v55 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v55 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v158);
                    }
                    if ((v155[0] & 1) == 0) {
                      goto LABEL_76;
                    }
                    v22 = v156;
                    if (v156 == 0) {
                      goto LABEL_76;
                    }
                    goto LABEL_73;
                  }
                }
              }
            }
            v51 = ui_LayoutAccessor_empty__ptr[0];
            goto LABEL_56;
          }
        }
      }
    }
    v44 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_45;
  }
  v16 = a1[7];
  if (v16 == 0) {
    goto LABEL_20;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 == 0) {
    goto LABEL_20;
  }
  v18 = v17;
  v19 = (atomic_ullong*)(v17 + 8);
  v20 = (__int64*)a1[6];
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v149 = v20;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
    v20 = v149;
    if (v149 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if (v20 == nullptr) {
  LABEL_20:
    v20 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_21:
  v21 = a1[14];
  LOWORD(v161) = 0;
  GameRoutine_1595700(v20, v21 + 32, &v161);
  if ((v161 & 1) != 0) {
    v22 = v163;
    if (v163 != 0) {
    LABEL_73:
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v56 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v22);
    }
  }

LABEL_76:
  v57 = a1[7];
  if (v57 == 0) {
    goto LABEL_80;
  }
  v58 = std___1___shared_weak_count_lock(v57);
  if (v58 == 0) {
    goto LABEL_80;
  }
  v59 = v58;
  v60 = (atomic_ullong*)(v58 + 8);
  v61 = (__int64*)a1[6];
  if (atomic_fetch_add(v60, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v61 != nullptr) {
      goto LABEL_81;
    }
    goto LABEL_80;
  }
  v141 = v61;
  (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
  std___1___shared_weak_count___release_weak(v59);
  v61 = v141;
  if (v141 == nullptr) {
  LABEL_80:
    v61 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_81:
  v62 = GameRoutine_155fbe0(v61, "Icon");
  v63 = a1[14];
  v154 = v62;
  LOBYTE(v155[0]) = 0;
  v64 = *(_BYTE*)(v63 + 40);
  v65 = *(_QWORD*)(v63 + 56);
  v66 = *(_DWORD*)(v63 + 32);
  v67 = v63 + 41;
  if ((v64 & 1) != 0) {
    v68 = v65;
  }
  else {
    v68 = v67;
  }
  v69 = strlen(v68);
  if (v66 == 8) {
    v70 = 18;
  }
  else {
    v70 = v66;
  }
  GameRoutine_15970e0(&v154, v70, v68, v69, 1);
  v71 = game_util_Format("L_Icon%02d", 0);
  v72 = strlen(v71);
  if (v72 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_224;
  }
  v73 = v72;
  if (v72 >= 0x17) {
    if ((v72 | 7) == 0x17) {
      v75 = 26;
    }
    else {
      v75 = (v72 | 7) + 1;
    }
    v74 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v75, 16, 0);
    v162 = v73;
    v163 = (unsigned __int64)v74;
    v161 = v75 | 1;
    goto LABEL_95;
  }
  v74 = (char*)&v161 + 1;
  LOBYTE(v161) = 2 * v72;
  if (v72 != 0) {
  LABEL_95:
    memmove(v74, v71, v73);
  }
  v74[v73] = 0;
  v76 = a1[7];
  if (v76 == 0) {
    goto LABEL_100;
  }
  v77 = std___1___shared_weak_count_lock(v76);
  if (v77 == 0) {
    goto LABEL_100;
  }
  v78 = v77;
  v79 = (atomic_ullong*)(v77 + 8);
  v80 = (__int64*)a1[6];
  if (atomic_fetch_add(v79, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v80 != nullptr) {
      goto LABEL_101;
    }
    goto LABEL_100;
  }
  v142 = v80;
  (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
  std___1___shared_weak_count___release_weak(v78);
  v80 = v142;
  if (v142 == nullptr) {
  LABEL_100:
    v80 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_101:
  if ((v161 & 1) != 0) {
    v81 = (char*)v163;
  }
  else {
    v81 = (char*)&v161 + 1;
  }
  v82 = GameRoutine_155fbe0(v80, v81);
  GameRoutine_155e830(v82, 0);
  if ((v161 & 1) != 0 && v163 != 0) {
    v83 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v83,
                                  v163);
  }
  v84 = game_util_Format("L_Icon%02d", 1);
  v85 = strlen(v84);
  if (v85 > 0xFFFFFFFFFFFFFFF6LL) {
  LABEL_224:
    GameRoutine_60a1d0();
  }
  v86 = v85;
  if (v85 >= 0x17) {
    if ((v85 | 7) == 0x17) {
      v88 = 26;
    }
    else {
      v88 = (v85 | 7) + 1;
    }
    v87 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v88, 16, 0);
    v162 = v86;
    v163 = (unsigned __int64)v87;
    v161 = v88 | 1;
    goto LABEL_117;
  }
  v87 = (char*)&v161 + 1;
  LOBYTE(v161) = 2 * v85;
  if (v85 != 0) {
  LABEL_117:
    memmove(v87, v84, v86);
  }
  v87[v86] = 0;
  v89 = a1[7];
  if (v89 == 0) {
    goto LABEL_122;
  }
  v90 = std___1___shared_weak_count_lock(v89);
  if (v90 == 0) {
    goto LABEL_122;
  }
  v91 = v90;
  v92 = (atomic_ullong*)(v90 + 8);
  v93 = (__int64*)a1[6];
  if (atomic_fetch_add(v92, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v93 != nullptr) {
      goto LABEL_123;
    }
    goto LABEL_122;
  }
  v143 = v93;
  (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91);
  std___1___shared_weak_count___release_weak(v91);
  v93 = v143;
  if (v143 == nullptr) {
  LABEL_122:
    v93 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_123:
  if ((v161 & 1) != 0) {
    v94 = (char*)v163;
  }
  else {
    v94 = (char*)&v161 + 1;
  }
  v95 = GameRoutine_155fbe0(v93, v94);
  GameRoutine_155e830(v95, 0);
  if ((v161 & 1) != 0 && v163 != 0) {
    v96 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v96 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v96,
                                  v163);
  }
  v97 = game_util_Format("L_Icon%02d", 2);
  v98 = strlen(v97);
  if (v98 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_224;
  }
  v99 = v98;
  if (v98 >= 0x17) {
    if ((v98 | 7) == 0x17) {
      v101 = 26;
    }
    else {
      v101 = (v98 | 7) + 1;
    }
    v100 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v101, 16, 0);
    v162 = v99;
    v163 = (unsigned __int64)v100;
    v161 = v101 | 1;
    goto LABEL_139;
  }
  v100 = (char*)&v161 + 1;
  LOBYTE(v161) = 2 * v98;
  if (v98 != 0) {
  LABEL_139:
    memmove(v100, v97, v99);
  }
  v100[v99] = 0;
  v102 = a1[7];
  if (v102 == 0) {
    goto LABEL_144;
  }
  v103 = std___1___shared_weak_count_lock(v102);
  if (v103 == 0) {
    goto LABEL_144;
  }
  v104 = v103;
  v105 = (atomic_ullong*)(v103 + 8);
  v106 = (__int64*)a1[6];
  if (atomic_fetch_add(v105, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v106 != nullptr) {
      goto LABEL_145;
    }
    goto LABEL_144;
  }
  v144 = v106;
  (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
  std___1___shared_weak_count___release_weak(v104);
  v106 = v144;
  if (v144 == nullptr) {
  LABEL_144:
    v106 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_145:
  if ((v161 & 1) != 0) {
    v107 = (char*)v163;
  }
  else {
    v107 = (char*)&v161 + 1;
  }
  v108 = GameRoutine_155fbe0(v106, v107);
  GameRoutine_155e830(v108, 0);
  if ((v161 & 1) != 0 && v163 != 0) {
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v109,
                                  v163);
  }
  v110 = game_util_Format("L_Icon%02d", 3);
  v111 = strlen(v110);
  if (v111 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_224;
  }
  v112 = v111;
  if (v111 >= 0x17) {
    if ((v111 | 7) == 0x17) {
      v114 = 26;
    }
    else {
      v114 = (v111 | 7) + 1;
    }
    v113 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v114, 16, 0);
    v162 = v112;
    v163 = (unsigned __int64)v113;
    v161 = v114 | 1;
    goto LABEL_161;
  }
  v113 = (char*)&v161 + 1;
  LOBYTE(v161) = 2 * v111;
  if (v111 != 0) {
  LABEL_161:
    memmove(v113, v110, v112);
  }
  v113[v112] = 0;
  v115 = a1[7];
  if (v115 == 0) {
    goto LABEL_166;
  }
  v116 = std___1___shared_weak_count_lock(v115);
  if (v116 == 0) {
    goto LABEL_166;
  }
  v117 = v116;
  v118 = (atomic_ullong*)(v116 + 8);
  v119 = (__int64*)a1[6];
  if (atomic_fetch_add(v118, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v145 = v119;
    (*(void (**)(__int64))(*(_QWORD*)v117 + 16LL))(v117);
    std___1___shared_weak_count___release_weak(v117);
    v119 = v145;
    if (v145 != nullptr) {
      goto LABEL_167;
    }
    goto LABEL_166;
  }
  if (v119 == nullptr) {
  LABEL_166:
    v119 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_167:
  if ((v161 & 1) != 0) {
    v120 = (char*)v163;
  }
  else {
    v120 = (char*)&v161 + 1;
  }
  v121 = GameRoutine_155fbe0(v119, v120);
  GameRoutine_155e830(v121, 0);
  if ((v161 & 1) != 0 && v163 != 0) {
    v122 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v122 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v122,
                                  v163);
  }
  v123 = a1[7];
  if (v123 == 0) {
    goto LABEL_179;
  }
  v124 = std___1___shared_weak_count_lock(v123);
  if (v124 == 0) {
    goto LABEL_179;
  }
  v125 = v124;
  v126 = (atomic_ullong*)(v124 + 8);
  v127 = (__int64*)a1[6];
  if (atomic_fetch_add(v126, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v127 != nullptr) {
      goto LABEL_180;
    }
    goto LABEL_179;
  }
  v146 = v127;
  (*(void (**)(__int64))(*(_QWORD*)v125 + 16LL))(v125);
  std___1___shared_weak_count___release_weak(v125);
  v127 = v146;
  if (v146 == nullptr) {
  LABEL_179:
    v127 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_180:
  ui_LayoutAccessor_SetPaneVisible(v127, "L_IconLesson", 0);
  v128 = a1[7];
  if (v128 == 0) {
    goto LABEL_184;
  }
  v129 = std___1___shared_weak_count_lock(v128);
  if (v129 == 0) {
    goto LABEL_184;
  }
  v130 = v129;
  v131 = (atomic_ullong*)(v129 + 8);
  v132 = (__int64*)a1[6];
  if (atomic_fetch_add(v131, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v132 != nullptr) {
      goto LABEL_185;
    }
    goto LABEL_184;
  }
  v147 = v132;
  (*(void (**)(__int64))(*(_QWORD*)v130 + 16LL))(v130);
  std___1___shared_weak_count___release_weak(v130);
  v132 = v147;
  if (v147 == nullptr) {
  LABEL_184:
    v132 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_185:
  v133 = GameRoutine_155fbe0(v132, "L_State");
  GameRoutine_155e830(v133, 0);
  v134 = a1[7];
  if (v134 == 0) {
    goto LABEL_189;
  }
  v135 = std___1___shared_weak_count_lock(v134);
  if (v135 == 0) {
    goto LABEL_189;
  }
  v136 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v135 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v148 = v135;
    (*(void (**)(__int64))(*(_QWORD*)v135 + 16LL))(v135);
    std___1___shared_weak_count___release_weak(v148);
    if (v136 != nullptr) {
      goto LABEL_190;
    }
    goto LABEL_189;
  }
  if (v136 == nullptr) {
  LABEL_189:
    v136 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_190:
  result = ui_LayoutAccessor_FindAlignment(v136, "A_Icon");
  if (result != 0) {
    Alignment_56b600();
    result = v136[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v138 = result;
        result = *v136;
        if (*v136 != 0) {
          result = ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v138 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v138 + 16LL))(v138);
          return std___1___shared_weak_count___release_weak(v138);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
