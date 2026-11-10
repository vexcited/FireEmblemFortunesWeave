#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11ef240(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2017b38[])();
extern __int64 GameData_21d9188;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2240080;
__int64 AI_Destructor(__int64 result);
__int64 AI_DeletingDestructor(_QWORD* a1);
__int64 AIThink_11ef3e0(_QWORD, _QWORD, _QWORD);
__int64 AIThink_121cc50(_QWORD, _QWORD);
__int64 AIThink_1220420(_QWORD, _QWORD, _QWORD);
__int64 AIThink_12205f0(_QWORD, _QWORD);
__int64 AIThink_12a9b20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_11f04d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_11f1960(_QWORD, _QWORD);
__int64 GameRoutine_121d8a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12aa9b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12aab80(_QWORD, _QWORD);
__int64 IDeploy_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 IRoute_750a00(_QWORD);
__int64 Mind_743dc0(_QWORD);
__int64 Mind_743fc0(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f94210[])();
extern __int64 (*GameData_1f94290[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64* game_g_empty_item_ptr;
extern __int64 GameData_212d290;
extern __int64 GameData_21ca310;
void __attribute__((noreturn)) GameRoutine_60a310(void);
__int64 AI_11eb060(__int64 a1);

__int64 AI_Destructor(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_11ef240(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = v2[1];
  v2[1] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
  }
  *v2 = GameData_2017b38;
  if ((_QWORD*)GameData_21d9188 == v2) {
    GameData_21d9188 = 0;
    GameData_2240080 = 0;
  }
  return result;
}

__int64 AI_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = a1[2];
  a1[2] = 0;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_11ef240(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = a1[1];
  a1[1] = 0;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
  }
  *a1 = GameData_2017b38;
  if ((_QWORD*)GameData_21d9188 == a1) {
    GameData_21d9188 = 0;
    GameData_2240080 = 0;
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, a1);
}

__int64 AI_11eb060(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _DWORD* v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v15;
  __int64 i;
  _QWORD* v17;
  char** v18;
  int v19;
  char** v20;
  int v21;
  __int64 v22;
  char* v23;
  char* v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64* v29;
  __int64 v30;
  _QWORD* v31;
  __int64* v32;
  int v33;
  int v34;
  char* v35;
  char* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  _QWORD* v42;
  __int64* v43;
  int v44;
  int v45;
  char* v46;
  char* v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  bool v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  int v56;
  int v57;
  _QWORD* v58;
  char* v59;
  char* v60;
  __int64 v61;
  int v62;
  __int64 v63;
  _QWORD* v64;
  int v65;
  int v66;
  __int64 v67;
  char* v68;
  char* v69;
  int v70;
  __int64 v71;
  int v72;
  char v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  int v77;
  char* v78;
  _QWORD* v79;
  char* v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  int v87;
  int v88;
  int v89;
  char v90;
  int v91;
  bool v92;
  __int64* v93;
  _DWORD* v94;
  int v95;
  int v96;
  unsigned int v97;
  int v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  char v103;
  int v104;
  bool v105;
  int v106;
  __int64 v107;
  __int64 v108;
  unsigned int v109;
  __int64 v110;
  _DWORD* v111;
  int v112;
  char* v113;
  char* v114;
  _QWORD v115[2];
  __int64 v116;
  _QWORD* v117;
  int v118;
  int v119;

  *(_BYTE*)(a1 + 28) = 1;
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(v2 + 816);
  if (v3 != 0) {
    if (v3 < 1) {
      v4 = 0;
    }
    else {
      v4 = (unsigned int)v3 >= 0xFB ? 0LL
                                    : *(_QWORD*)(GameData_21ca310 + 56) +
                                          2224LL * (unsigned int)v3 - 2224;
    }
    v5 = *(_DWORD*)(v2 + 820);
    *(_QWORD*)(v2 + 816) = 0;
    if ((*(_BYTE*)(v4 + 416) & 0x31) == 0) {
      v6 = game_g_shared_system_skills_ptr;
      LODWORD(v115[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
      if ((game_HasSkill(v4 + 1744, v115) & 1) == 0) {
        if (*(_WORD*)(v4 + 492) != 0 || *(_BYTE*)(v4 + 496) != 0 ||
            (LODWORD(v115[0]) =
                 *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v6) & 0xFFF,
             (game_HasSkill(v4 + 1744, v115) & 1) == 0)) {
          *(_BYTE*)(a1 + 28) = 0;
          v29 = GameData_212cfd0[0];
          v30 = *GameData_212cfd0[0];
          Mind_743dc0(*GameData_212cfd0[0]);
          v31 = v115;
          v32 = GameData_212ce98[0];
          v33 = *(char*)(v4 + 584);
          v34 = *(char*)(v4 + 585);
          v35 = *(char**)(v4 + 600);
          v36 = *(char**)(v4 + 608);
          v116 = v4;
          v117 = v115;
          v37 = *(_QWORD*)(*GameData_212ce98[0] + 96);
          v115[0] = GameData_1f94290;
          v115[1] = v37;
          if (v35 == v36) {
            goto LABEL_56;
          }
          do {
            v38 = *v35 + v33;
            v118 = v35[1] + v34;
            v119 = v38;
            if (v117 == nullptr) {
              goto LABEL_170;
            }
            (*(void (**)(_QWORD*, int*, int*))(*v117 + 48LL))(v117, &v119,
                                                              &v118);
            v35 += 4;
          } while (v35 != v36);
          v31 = v117;
          if (v117 == v115) {
          LABEL_56:
            v39 = 32;
          }
          else {
            if (v117 == nullptr) {
              goto LABEL_58;
            }
            v39 = 40;
          }
          (*(void (**)(__int64))(*v31 + v39))((__int64)v31);
        LABEL_58:
          if (*(_BYTE*)(*GameData_212ce90[0] +
                        *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) ==
              1) {
            if (*(_QWORD*)GameData_212d290 != 0 &&
                (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) != 0) {
              GameRoutine_12aa9b0(*(_QWORD*)(a1 + 16), v4, v5);
            }
            else {
              AIThink_1220420(*(_QWORD*)(a1 + 16), v4, v5);
            }
          }
          else {
            GameRoutine_11f04d0(*(_QWORD*)(a1 + 16), v4, v5);
          }
          if ((*(_WORD*)(v4 + 417) & 0x4004) == 0) {
            v55 = *v32;
            v56 = *(char*)(v4 + 584);
            v57 = *(char*)(v4 + 585);
            v58 = v115;
            v59 = *(char**)(v4 + 600);
            v60 = *(char**)(v4 + 608);
            v116 = v4;
            v117 = v115;
            v61 = *(_QWORD*)(v55 + 96);
            v115[0] = GameData_1f94210;
            v115[1] = v61;
            if (v59 == v60) {
              goto LABEL_114;
            }
            do {
              v62 = *v59 + v56;
              v118 = v59[1] + v57;
              v119 = v62;
              if (v117 == nullptr) {
                goto LABEL_170;
              }
              (*(void (**)(_QWORD*, int*, int*))(*v117 + 48LL))(v117, &v119,
                                                                &v118);
              v59 += 4;
            } while (v59 != v60);
            v58 = v117;
            if (v117 == v115) {
            LABEL_114:
              v63 = 32;
              goto LABEL_115;
            }
            if (v117 != nullptr) {
              v63 = 40;
            LABEL_115:
              (*(void (**)(__int64))(*v58 + v63))((__int64)v58);
            }
          }
          if (*(_BYTE*)(v30 + 20) == 0) {
            *(_DWORD*)(v30 + 12) = *(char*)(v4 + 584);
            *(_DWORD*)(v30 + 16) = *(char*)(v4 + 585);
            *(_BYTE*)(v30 + 20) = 1;
          }
          LODWORD(v115[0]) = 2;
          IDeploy_748f80(*GameData_212ce88[0], v4, *(unsigned int*)(*v29 + 24),
                         *(unsigned int*)(*v29 + 28), 0xFFFFFFFFLL, v115);
          v74 = GameData_212cfd8[0];
          v75 = *v29;
          goto LABEL_119;
        }
      }
    }
  }
  v7 = *(_QWORD*)(a1 + 8);
  v8 = *(_DWORD*)(v7 + 824);
  if (v8 != 0) {
    if (v8 < 1) {
      v4 = 0;
    }
    else {
      v4 = (unsigned int)v8 >= 0xFB ? 0LL
                                    : *(_QWORD*)(GameData_21ca310 + 56) +
                                          2224LL * (unsigned int)v8 - 2224;
    }
    *(_DWORD*)(v7 + 824) = 0;
    if ((*(_BYTE*)(v4 + 416) & 0x31) == 0) {
      v9 = game_g_shared_system_skills_ptr;
      LODWORD(v115[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
      if ((game_HasSkill(v4 + 1744, v115) & 1) == 0) {
        if (*(_WORD*)(v4 + 492) != 0 || *(_BYTE*)(v4 + 496) != 0 ||
            (LODWORD(v115[0]) =
                 *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v9) & 0xFFF,
             (game_HasSkill(v4 + 1744, v115) & 1) == 0)) {
          *(_BYTE*)(a1 + 28) = 0;
          v40 = GameData_212cfd0[0];
          v41 = *GameData_212cfd0[0];
          Mind_743dc0(*GameData_212cfd0[0]);
          v42 = v115;
          v43 = GameData_212ce98[0];
          v44 = *(char*)(v4 + 584);
          v45 = *(char*)(v4 + 585);
          v46 = *(char**)(v4 + 600);
          v47 = *(char**)(v4 + 608);
          v116 = v4;
          v117 = v115;
          v48 = *(_QWORD*)(*GameData_212ce98[0] + 96);
          v115[0] = GameData_1f94290;
          v115[1] = v48;
          if (v46 == v47) {
            goto LABEL_78;
          }
          do {
            v49 = *v46 + v44;
            v118 = v46[1] + v45;
            v119 = v49;
            if (v117 == nullptr) {
              goto LABEL_170;
            }
            (*(void (**)(_QWORD*, int*, int*))(*v117 + 48LL))(v117, &v119,
                                                              &v118);
            v46 += 4;
          } while (v46 != v47);
          v42 = v117;
          if (v117 == v115) {
          LABEL_78:
            v50 = 32;
          }
          else {
            if (v117 == nullptr) {
              goto LABEL_80;
            }
            v50 = 40;
          }
          (*(void (**)(__int64))(*v42 + v50))((__int64)v42);
        LABEL_80:
          if (*(_BYTE*)(*GameData_212ce90[0] +
                        *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) ==
              1) {
            if (*(_QWORD*)GameData_212d290 != 0 &&
                (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) != 0) {
              GameRoutine_12aab80(*(_QWORD*)(a1 + 16), v4);
            }
            else {
              AIThink_12205f0(*(_QWORD*)(a1 + 16), v4);
            }
          }
          else {
            AIThink_121cc50(*(_QWORD*)(a1 + 16), v4);
          }
          v72 = *(char*)(v4 + 584);
          if ((*(_WORD*)(v4 + 417) & 0x4004) != 0) {
            v73 = *(_BYTE*)(v4 + 584);
            if (*(_BYTE*)(v41 + 20) != 0) {
            LABEL_107:
              LODWORD(v115[0]) = 2;
              IDeploy_748f80(*GameData_212ce88[0], v4, (unsigned int)v73,
                             (unsigned int)*(char*)(v4 + 585),
                             *(unsigned int*)(*v40 + 52), v115);
              v74 = GameData_212cfd8[0];
              v75 = *v40;
            LABEL_119:
              v84 = *(char*)(v4 + 585);
              v85 = *(_QWORD*)(v4 + 440);
              v86 = *v74;
              v87 = *(_DWORD*)(v75 + 12);
              v88 = *(_DWORD*)(v75 + 16);
              v89 = *(char*)(v4 + 584);
              if (v85 != 0) {
                v90 = *(_BYTE*)(v85 + 16);
              }
              else {
                v90 = 9;
              }
              v91 = *(_DWORD*)(v4 + 592);
              *(_BYTE*)(v86 + 200) = 0;
              *(_DWORD*)(v86 + 160) = 0;
              v92 = v87 == v89 && v88 == v84;
              *(_DWORD*)(v86 + 192) = v84;
              *(_DWORD*)(v86 + 196) = 0;
              *(_DWORD*)(v86 + 184) = v84;
              *(_DWORD*)(v86 + 188) = v89;
              *(_DWORD*)(v86 + 176) = v84;
              *(_DWORD*)(v86 + 180) = v89;
              *(_BYTE*)(v86 + 164) = v90;
              *(_DWORD*)(v86 + 168) = v91;
              *(_DWORD*)(v86 + 172) = v89;
              if (!v92) {
                IRoute_750a00(v86 + 24);
              }
              return 1;
            }
          LABEL_106:
            *(_DWORD*)(v41 + 12) = v73;
            *(_DWORD*)(v41 + 16) = *(char*)(v4 + 585);
            *(_BYTE*)(v41 + 20) = 1;
            v73 = *(_BYTE*)(v4 + 584);
            goto LABEL_107;
          }
          v76 = *v43;
          v77 = *(char*)(v4 + 585);
          v78 = *(char**)(v4 + 600);
          v79 = v115;
          v80 = *(char**)(v4 + 608);
          v116 = v4;
          v117 = v115;
          v81 = *(_QWORD*)(v76 + 96);
          v115[0] = GameData_1f94210;
          v115[1] = v81;
          if (v78 == v80) {
            goto LABEL_150;
          }
          do {
            v82 = *v78 + v72;
            v118 = v78[1] + v77;
            v119 = v82;
            if (v117 == nullptr) {
              goto LABEL_170;
            }
            (*(void (**)(_QWORD*, int*, int*))(*v117 + 48LL))(v117, &v119,
                                                              &v118);
            v78 += 4;
          } while (v78 != v80);
          v79 = v117;
          if (v117 == v115) {
          LABEL_150:
            v83 = 32;
          }
          else {
            if (v117 == nullptr) {
              goto LABEL_152;
            }
            v83 = 40;
          }
          (*(void (**)(__int64))(*v79 + v83))((__int64)v79);
        LABEL_152:
          v73 = *(_BYTE*)(v4 + 584);
          if (*(_BYTE*)(v41 + 20) != 0) {
            goto LABEL_107;
          }
          goto LABEL_106;
        }
      }
    }
  }
  v10 = *(_DWORD**)(a1 + 8);
  v11 = v10[203];
  v12 = v11;
  if (v11 == 0) {
    v27 = (int)v10[202];
    if ((int)v27 < v10[200]) {
      v12 = *((unsigned __int8*)v10 + v27);
      if (v12 >= 1) {
        goto LABEL_19;
      }
    }
  LABEL_37:
    *(_DWORD*)(a1 + 24) = 1;
    return 0;
  }
  if (v11 < 1) {
    goto LABEL_37;
  }
LABEL_19:
  v13 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * (unsigned int)v12;
  if ((unsigned int)v12 > 0xFA || v13 == 2224) {
    goto LABEL_37;
  }
  if (v11 != 0) {
    *(_BYTE*)(a1 + 28) = 0;
  }
  else if ((*(_BYTE*)(v13 - 1808) & 0x31) != 0 ||
           (v51 = game_g_shared_system_skills_ptr,
            LODWORD(v115[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                          game_g_shared_system_skills_ptr) &
                               0xFFF,
            (game_HasSkill(v13 - 480, v115) & 1) != 0) ||
           (*(_WORD*)(v13 - 1732) == 0 ? (v52 = *(_BYTE*)(v13 - 1728) == 0)
                                       : (v52 = false),
            v52 && (LODWORD(v115[0]) =
                        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v51) & 0xFFF,
                    (game_HasSkill(v13 - 480, v115) & 1) != 0) ||
                ((v53 = *(_QWORD*)(v13 - 1784)) == 0
                     ? (v54 = 9)
                     : (v54 = *(unsigned __int8*)(v53 + 16)),
                 v54 != *(unsigned __int8*)(*GameData_212ce90[0] + 24) ||
                     (*(_BYTE*)(*GameData_212ce90[0] + v54 + 16) != 1 ||
                      *(_QWORD*)GameData_212d290 == 0 ||
                      (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) ==
                          0) &&
                         (LODWORD(v115[0]) =
                              *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x11CLL) + v51 +
                                         4) &
                              0xFFF,
                          (game_HasSkill(v13 - 480, v115) & 1) != 0)))) {
    v111 = *(_DWORD**)(a1 + 8);
    if (v111[203] != 0) {
      v111[203] = 0;
      return 0;
    }
    v112 = v111[202];
    if (v112 < v111[200]) {
      v111[202] = v112 + 1;
      return 0;
    }
    return 0;
  }
  if (*(_BYTE*)(a1 + 29) == 1) {
    v15 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(v15 + 22896) = 0;
    *(_QWORD*)(v15 + 22888) = 0;
    *(_QWORD*)(v15 + 22880) = 0;
    *(_QWORD*)(v15 + 22872) = 0;
    *(_QWORD*)(v15 + 22864) = 0;
    *(_QWORD*)(v15 + 22856) = 0;
    *(_QWORD*)(v15 + 22848) = 0;
    *(_QWORD*)(v15 + 22840) = 0;
    *(_QWORD*)(v15 + 22832) = 0;
    *(_QWORD*)(v15 + 22824) = 0;
    *(_QWORD*)(v15 + 22816) = 0;
    *(_QWORD*)(v15 + 22808) = 0;
    *(_QWORD*)(v15 + 22800) = 0;
    *(_QWORD*)(v15 + 22792) = 0;
    *(_QWORD*)(v15 + 22784) = 0;
    *(_QWORD*)(v15 + 22776) = 0;
    *(_QWORD*)(v15 + 22768) = 0;
    *(_QWORD*)(v15 + 22760) = 0;
    *(_QWORD*)(v15 + 22752) = 0;
    *(_QWORD*)(v15 + 22744) = 0;
    *(_QWORD*)(v15 + 22736) = 0;
    *(_QWORD*)(v15 + 22728) = 0;
    *(_QWORD*)(v15 + 22720) = 0;
    *(_QWORD*)(v15 + 22712) = 0;
    *(_QWORD*)(v15 + 22704) = 0;
    *(_QWORD*)(v15 + 22696) = 0;
    *(_QWORD*)(v15 + 22688) = 0;
    *(_QWORD*)(v15 + 22680) = 0;
    *(_QWORD*)(v15 + 22672) = 0;
    *(_QWORD*)(v15 + 22664) = 0;
    *(_QWORD*)(v15 + 22656) = 0;
    *(_DWORD*)(v15 + 22904) = 0;
    for (i = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                        24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                        556000);
         i != 0; i = *(_QWORD*)(i + 432)) {
      GameRoutine_11f1960(v15, i);
    }
    *(_BYTE*)(a1 + 29) = 0;
  }
  Mind_743fc0(*GameData_212cfd0[0], v13 - 2224);
  v17 = v115;
  v18 = (char**)(v13 - 1624);
  v114 = (char*)(v13 - 1640);
  v19 = *(char*)(v13 - 1640);
  v20 = (char**)(v13 - 1616);
  v113 = (char*)(v13 - 1639);
  v21 = *(char*)(v13 - 1639);
  v116 = v13 - 2224;
  v117 = v115;
  v22 = *(_QWORD*)(*GameData_212ce98[0] + 96);
  v115[0] = GameData_1f94290;
  v115[1] = v22;
  v23 = *(char**)(v13 - 1624);
  v24 = *(char**)(v13 - 1616);
  if (v23 == v24) {
    goto LABEL_62;
  }
  do {
    v25 = *v23 + v19;
    v118 = v23[1] + v21;
    v119 = v25;
    if (v117 == nullptr) {
    LABEL_170:
      GameRoutine_60a310();
    }
    (*(void (**)(_QWORD*, int*, int*))(*v117 + 48LL))(v117, &v119, &v118);
    v23 += 4;
  } while (v23 != v24);
  v17 = v117;
  if (v117 == v115) {
  LABEL_62:
    v26 = 32;
  }
  else {
    if (v117 == nullptr) {
      goto LABEL_64;
    }
    v26 = 40;
  }
  (*(void (**)(__int64))(*v17 + v26))((__int64)v17);
LABEL_64:
  if (*(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) == 1) {
    if (*(_QWORD*)GameData_212d290 != 0 &&
        (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) != 0) {
      AIThink_12a9b20(*(_QWORD*)(a1 + 16), v13 - 2224, v11 != 0);
    }
    else {
      GameRoutine_121d8a0(*(_QWORD*)(a1 + 16), v13 - 2224, v11 != 0);
    }
  }
  else {
    AIThink_11ef3e0(*(_QWORD*)(a1 + 16), v13 - 2224, v11 != 0);
  }
  if ((*(_WORD*)(v13 - 1807) & 0x4004) == 0) {
    v64 = v115;
    v65 = *v113;
    v66 = *v114;
    v116 = v13 - 2224;
    v117 = v115;
    v67 = *(_QWORD*)(*GameData_212ce98[0] + 96);
    v115[0] = GameData_1f94210;
    v115[1] = v67;
    v68 = *v18;
    v69 = *v20;
    if (*v18 == *v20) {
      goto LABEL_129;
    }
    do {
      v70 = *v68 + v66;
      v118 = v68[1] + v65;
      v119 = v70;
      if (v117 == nullptr) {
        goto LABEL_170;
      }
      (*(void (**)(_QWORD*, int*, int*))(*v117 + 48LL))(v117, &v119, &v118);
      v68 += 4;
    } while (v68 != v69);
    v64 = v117;
    if (v117 == v115) {
    LABEL_129:
      v71 = 32;
    }
    else {
      if (v117 == nullptr) {
        goto LABEL_131;
      }
      v71 = 40;
    }
    (*(void (**)(__int64))(*v64 + v71))((__int64)v64);
  }
LABEL_131:
  v93 = GameData_212cfd0[0];
  v94 = *(_DWORD**)(a1 + 8);
  v95 = *(unsigned __int8*)(*GameData_212cfd0[0] + 20);
  if (v94[203] != 0) {
    v94[203] = 0;
  }
  else {
    v96 = v94[202];
    if (v96 < v94[200]) {
      v94[202] = v96 + 1;
    }
  }
  if (v95 == 0) {
    return 0;
  }
  LODWORD(v115[0]) = 2;
  LOBYTE(v119) = 10;
  v97 = game_Unit_GetParam(v13 - 2224, &v119, 1);
  IDeploy_748f80(*GameData_212ce88[0], v13 - 2224, (unsigned int)*v114,
                 (unsigned int)*v113, v97, v115);
  v98 = *v114;
  v99 = *v113;
  v100 = *(_QWORD*)(v13 - 1784);
  v101 = *GameData_212cfd8[0];
  v102 = *v93;
  if (v100 != 0) {
    v103 = *(_BYTE*)(v100 + 16);
  }
  else {
    v103 = 9;
  }
  v104 = *(_DWORD*)(v13 - 1632);
  v105 = *(_DWORD*)(*v93 + 12) == v98 && *(_DWORD*)(*v93 + 16) == v99;
  *(_BYTE*)(v101 + 200) = 0;
  *(_DWORD*)(v101 + 160) = 0;
  *(_DWORD*)(v101 + 192) = v99;
  *(_DWORD*)(v101 + 196) = 0;
  *(_DWORD*)(v101 + 184) = v99;
  *(_DWORD*)(v101 + 188) = v98;
  *(_DWORD*)(v101 + 176) = v99;
  *(_DWORD*)(v101 + 180) = v98;
  *(_BYTE*)(v101 + 164) = v103;
  *(_DWORD*)(v101 + 168) = v104;
  *(_DWORD*)(v101 + 172) = v98;
  if (!v105) {
    IRoute_750a00(v101 + 24);
    v102 = *v93;
  }
  v106 = *(unsigned __int8*)(v102 + 20);
  if (v106 == 4) {
    v109 = *(unsigned __int16*)(v102 + 44);
    if (v109 == 0) {
      v109 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v110 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v109);
    if ((unsigned int)*(unsigned __int8*)(v110 + 72) - 5 > 1 ||
        (*(_BYTE*)(v110 + 73) & 0xFE) != 8) {
      return 1;
    }
  LABEL_158:
    *(_BYTE*)(a1 + 29) = 1;
    return 1;
  }
  if (v106 == 9) {
    v107 = *(_DWORD*)(v102 + 56) & 0xFFF;
    if ((_DWORD)v107 != 0) {
      v108 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v107);
      if (v108 != 0 && *(_BYTE*)(v108 + 250) == 16) {
        goto LABEL_158;
      }
    }
  }
  return 1;
}

#pragma GCC visibility pop
