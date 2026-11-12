#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
game_map_history_LogInfo_CreateTextGeneral(PSEUDO_X8, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
char* GameRoutine_123c840(__int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_map_history__1238f10(const char*, __int64, __int64);
char* game_map_history__1239240(const char*, __int64, __int64, __int64);
char* game_map_history__1239da0(unsigned __int64);
extern __int64 (*GameData_201ae78[])();
extern __int64 (*GameData_201af08[])();
extern __int64 (*GameData_201af88[])();
extern __int64 (*GameData_201b008[])();
extern __int64 (*GameData_201b088[])();
extern __int64 (*GameData_201b108[])();
extern __int64 (*GameData_201b188[])();
extern __int64 (*GameData_201b208[])();
extern __int64 (*GameData_201b288[])();
extern __int64 (*GameData_201b308[])();
extern __int64 (*GameData_201b388[])();
extern __int64 (*GameData_201b408[])();
extern __int64 (*GameData_201b488[])();
extern __int64 (*GameData_201b508[])();
extern __int64 (*GameData_201b588[])();
extern __int64 (*GameData_201b608[])();
extern __int64 (*GameData_201b688[])();
extern __int64 (*GameData_201b708[])();
extern __int64 (*GameData_201b788[])();
extern __int64 (*GameData_201b808[])();
extern __int64 (*GameData_201b888[])();
extern __int64 (*GameData_201b908[])();
extern __int64 (*GameData_201b988[])();
extern __int64 (*GameData_201ba08[])();
extern __int64 (*GameData_201ba88[])();
extern __int64 (*GameData_201bb08[])();
extern __int64 (*GameData_201bb88[])();
extern __int64 (*GameData_201bc08[])();
extern __int64 (*GameData_201bc88[])();
extern __int64 (*GameData_201bd08[])();
extern __int64 (*GameData_201bd88[])();
extern __int64 (*GameData_201be08[])();
extern __int64 (*GameData_201be88[])();
extern __int64 (*GameData_201bf08[])();
extern __int64 (*GameData_201bf88[])();
extern __int64 (*GameData_201c008[])();
extern __int64 (*GameData_201c088[])();
extern __int64 (*GameData_201c108[])();
extern __int64 (*GameData_201c188[])();
extern __int64 (*GameData_201c208[])();
extern __int64 (*GameData_201c288[])();
extern __int64 (*GameData_201c308[])();
extern __int64 (*GameData_201c388[])();
extern __int64 (*GameData_201c408[])();
extern __int64* GameData_212c868;
extern __int64* GameData_212c890[3];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void
game_map_history_1237860(PSEUDO_X8 x8_, unsigned __int8* a1, int a2, char a3);
__attribute__((swiftcall)) void

game_map_history_1237860(PSEUDO_X8 x8_, unsigned __int8* a1, int a2, char a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v4;
  unsigned __int8 v5;
  unsigned __int64 v6;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8 v31;
  unsigned __int8 v32;
  int v33;
  __int64 v34;
  const char* v35;
  unsigned __int8 v36;
  unsigned __int8 v37;
  const char* v38;
  __int64 (**v39)();
  char* v40;
  _QWORD* v41;
  __int64 v42;
  char* v43;
  _QWORD* v44;
  int v45;
  _QWORD* v46;
  const char* v47;
  __int64 (**v48)();
  char* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  char* v52;
  unsigned __int64 v53;
  char* v54;
  _QWORD* v55;
  __int64 i;
  char* v57;
  _QWORD* v58;
  int v59;
  _QWORD* v60;
  unsigned __int64 v61;
  char* v62;
  _QWORD* v63;
  __int64 v64;
  char* v65;
  _QWORD* v66;
  int v67;
  _QWORD* v68;
  unsigned int v69;
  unsigned __int8 v70;
  bool v71;
  int v72;
  char v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  unsigned __int64 v79;
  char* v80;
  _QWORD* v81;
  __int64 j;
  char* v83;
  _QWORD* v84;
  int v85;
  _QWORD* v86;
  unsigned __int64 v87;
  char* v88;
  _QWORD* v89;
  __int64 v90;
  char* v91;
  _QWORD* v92;
  int v93;
  _QWORD* v94;
  _QWORD* v95;
  _BYTE* v96;
  _BYTE* v97;
  char* v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  char* v101;
  char v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  __int64 v107;
  const char* v108;
  __int64* v109;
  _BYTE* v110;
  __int64* v111;
  _BYTE* v112;
  _BYTE* v113;
  __int64* v114;
  __int64* v115;
  char* v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  char* v119;
  unsigned __int8 v120;
  bool v121;
  int v122;
  char v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  _QWORD* v127;
  __int64 v128;
  char* v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
  char* v132;
  unsigned __int8 v133;
  bool v134;
  int v135;
  char v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  unsigned __int8 v141;
  __int64 v142;
  unsigned __int64 v143;
  char v144;
  __int64 v145;
  __int64 v146;
  int v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  unsigned __int8 v151;
  unsigned __int8 v152;
  struct {
    __int64 v153;
    unsigned __int64 v154;
    __int64 v155;
  } v153_;
  unsigned int v156;
  struct {
    _QWORD v157[4];
    _QWORD* v158;
  } v157_;
  struct {
    _QWORD v159[4];
    _QWORD* v160;
  } v159_;
  struct {
    _QWORD v161[2];
    unsigned __int64 v162;
    unsigned __int64 v163;
    _QWORD* v164;
    __int64 v165;
    __int64 v166;
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
  } v161_;

  v4 = *a1;
  v5 = a1[1];
  v6 = *((_QWORD*)a1 + 6);
  v11 = v4 == 1;
  if (v6 == 0) {
    goto LABEL_25;
  }
  v12 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v12 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_25;
  }
  v14 = v12 - 1;
  if ((v12 & (v12 - 1)) != 0) {
    v15 = *((_QWORD*)a1 + 6);
    if (v6 >= v12) {
      v15 = v6 % v12;
    }
  }
  else {
    v15 = v14 & v6;
  }
  v16 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v15);
  if (v16 == nullptr || (v17 = (_QWORD*)*v16) == nullptr) {
  LABEL_25:
    v19 = 0;
    v21 = *((_QWORD*)a1 + 8);
    if (v21 != 0) {
      goto LABEL_29;
    }
    goto LABEL_54;
  }
  if ((v12 & v14) == 0) {
    while (1) {
      v20 = v17[1];
      if (v20 == v6) {
        if (v17[2] == v6) {
          goto LABEL_53;
        }
      }
      else if ((v20 & v14) != v15) {
        goto LABEL_25;
      }
      v17 = (_QWORD*)*v17;
      v19 = 0;
      if (v17 == nullptr) {
        goto LABEL_28;
      }
    }
  }
  do {
    v18 = v17[1];
    if (v18 == v6) {
      if (v17[2] != v6) {
        goto LABEL_15;
      }
    LABEL_53:
      v19 = v17[3];
      v21 = *((_QWORD*)a1 + 8);
      if (v21 != 0) {
        goto LABEL_29;
      }
    LABEL_54:
      v29 = 0;
      goto LABEL_55;
    }
    if (v18 >= v12) {
      v18 %= v12;
    }
    if (v18 != v15) {
      goto LABEL_25;
    }
  LABEL_15:
    v17 = (_QWORD*)*v17;
  } while (v17 != nullptr);
  v19 = 0;
LABEL_28:
  v21 = *((_QWORD*)a1 + 8);
  if (v21 == 0) {
    goto LABEL_54;
  }
LABEL_29:
  v22 = *(_QWORD*)(*GameData_212c868 + 96);
  if (v22 == 0 || *(_QWORD*)(*GameData_212c868 + 112) == 0) {
    goto LABEL_54;
  }
  v24 = v22 - 1;
  if ((v22 & (v22 - 1)) != 0) {
    v25 = v21;
    if (v21 >= v22) {
      v25 = v21 % v22;
    }
  }
  else {
    v25 = v24 & v21;
  }
  v26 = *(_QWORD**)(*(_QWORD*)(*GameData_212c868 + 88) + 8 * v25);
  if (v26 == nullptr) {
    goto LABEL_54;
  }
  v27 = (_QWORD*)*v26;
  if (v27 == nullptr) {
    goto LABEL_54;
  }
  if ((v22 & v24) == 0) {
    while (1) {
      v30 = v27[1];
      if (v30 == v21) {
        if (v27[2] == v21) {
          goto LABEL_116;
        }
      }
      else if ((v30 & v24) != v25) {
        goto LABEL_54;
      }
      v27 = (_QWORD*)*v27;
      v29 = 0;
      if (v27 == nullptr) {
        goto LABEL_55;
      }
    }
  }
  while (1) {
    v28 = v27[1];
    if (v28 == v21) {
      break;
    }
    if (v28 >= v22) {
      v28 %= v22;
    }
    if (v28 != v25) {
      goto LABEL_54;
    }
  LABEL_42:
    v27 = (_QWORD*)*v27;
    if (v27 == nullptr) {
      goto LABEL_54;
    }
  }
  if (v27[2] != v21) {
    goto LABEL_42;
  }
LABEL_116:
  v29 = v27[3];
LABEL_55:
  v31 = a1[3];
  v32 = a1[4];
  if ((unsigned int)(v4 - 1) <= 0xE) {
    v150 = v29;
    v151 = a1[4];
    v152 = a1[3];
    switch (*a1) {
    case 1u:
      if (*((_DWORD*)a1 + 2) == 0) {
        v35 = "MID_RewindMsg_BattleStart";
        v161_.v165 = -1;
        v161_.v166 = -1;
        v161_.v167 = -1;
        v161_.v168 = -1;
        v34 = *msg_MessageManager_instance__ptr[0];
        v161_.v169 = -1;
        v161_.v170 = -1;
        v161_.v171 = -1;
        v161_.v172 = -1;
        v161_.v173 = -1;
        v161_.v174 = -1;
        v161_.v175 = -1;
        v161_.v176 = -1;
        v161_.v161[0] = GameData_212e348 + 2;
        v161_.v161[1] = 0xFFFF0001FFFF0000LL;
        v161_.v162 = 0xFFFF0004FFFF0002LL;
        v161_.v163 = 0xFFFF0006FFFF0005LL;
        v161_.v177 = 8;
        goto LABEL_169;
      }
      v33 = (unsigned __int8)*((_DWORD*)a1 + 2);
      v34 = *msg_MessageManager_instance__ptr[0];
      if (v33 <= 1) {
        if (v33 != 0) {
          v35 = "MID_RewindMsg_EnemyPhase";
          goto LABEL_168;
        }
      LABEL_164:
        v35 = "MID_RewindMsg_PlayerPhase";
        goto LABEL_168;
      }
      if (v33 != 2) {
        if (v33 == 3) {
          v35 = "MID_RewindMsg_AllyPhase";
          goto LABEL_168;
        }
        goto LABEL_164;
      }
      v35 = "MID_RewindMsg_ThirdPhase";
    LABEL_168:
      v161_.v165 = -1;
      v161_.v166 = -1;
      v161_.v167 = -1;
      v161_.v168 = -1;
      v161_.v169 = -1;
      v161_.v170 = -1;
      v161_.v171 = -1;
      v161_.v172 = -1;
      v161_.v173 = -1;
      v161_.v174 = -1;
      v161_.v175 = -1;
      v161_.v176 = -1;
      v161_.v161[0] = GameData_212e348 + 2;
      v161_.v161[1] = 0xFFFF0001FFFF0000LL;
      v161_.v162 = 0xFFFF0004FFFF0002LL;
      v161_.v163 = 0xFFFF0006FFFF0005LL;
      v161_.v177 = 8;
    LABEL_169:
      v161_.v164 = (_QWORD*)0xFFFF0008FFFF0007LL;
      v98 = GameRoutine_a4dbe0(v34, v35, 0);
      v99 = strlen(v98);
      if (v99 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_277;
      }
      v100 = v99;
      if (v99 >= 0x17) {
        v147 = a2;
        v102 = a3;
        if ((v99 | 7) == 0x17) {
          v103 = 26;
        }
        else {
          v103 = (v99 | 7) + 1;
        }
        v104 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v103, 16, 0);
        v105 = v103 | 1;
        a3 = v102;
        a2 = v147;
        v101 = (char*)v104;
        v153_.v154 = v100;
        v153_.v155 = v104;
        v153_.v153 = v105;
      }
      else {
        LOBYTE(v153_.v153) = 2 * v99;
        v101 = (char*)&v153_.v153 + 1;
        if (v99 == 0) {
          goto LABEL_178;
        }
      }
      memmove((__int64)v101, (__int64)v98, v100);
    LABEL_178:
      v101[v100] = 0;
      v29 = v150;
      goto LABEL_267;
    case 2u:
      if (*((_DWORD*)a1 + 2) != 0) {
        v53 = *((_QWORD*)a1 + 2);
        v157_.v157[0] = GameData_201ae78;
        v157_.v157[1] = a1;
        v157_.v158 = v157_.v157;
        v54 = game_map_history__1239da0(v53);
        v55 = v159_.v159;
        for (i = 0;; ++i) {
          v57 = &v54[i * 8];
          if (v54[i * 8] == 0) {
            break;
          }
          v58 = &v159_.v159[i];
          LOBYTE(v159_.v159[i]) = v54[i * 8];
          if (v57[1] == 0) {
            v110 = (char*)&v159_.v159[i] + 1;
            goto LABEL_211;
          }
          *((_BYTE*)v58 + 1) = v57[1];
          if (v57[2] == 0) {
            v110 = (char*)&v159_.v159[i] + 2;
            goto LABEL_211;
          }
          *((_BYTE*)v58 + 2) = v57[2];
          if (v57[3] == 0) {
            v110 = (char*)&v159_.v159[i] + 3;
            goto LABEL_211;
          }
          BYTE3(v159_.v159[i]) = v57[3];
          if (v57[4] == 0) {
            v110 = (char*)&v159_.v159[i] + 4;
            goto LABEL_211;
          }
          BYTE4(v159_.v159[i]) = v57[4];
          if (v57[5] == 0) {
            v110 = (char*)&v159_.v159[i] + 5;
            goto LABEL_211;
          }
          BYTE5(v159_.v159[i]) = v57[5];
          if (v57[6] == 0) {
            v110 = (char*)&v159_.v159[i] + 6;
            goto LABEL_211;
          }
          BYTE6(v159_.v159[i]) = v57[6];
          if ((_DWORD)(i * 8) == 120) {
            v110 = (char*)&v159_.v159[i] + 7;
            goto LABEL_211;
          }
          v59 = (unsigned __int8)v57[7];
          if (v59 == 0) {
            v110 = (char*)v55 + 7;
            goto LABEL_211;
          }
          v60 = &v159_.v159[i];
          ++v55;
          *((_BYTE*)v60 + 7) = v59;
        }
        v110 = &v159_.v159[i];
      LABEL_211:
        *v110 = 0;
        v111 = msg_MessageManager_instance__ptr[0];
        GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704,
                           (const char*)v159_.v159);
        v107 = *v111;
        v108 = "MID_RewindMsg_Mov";
        goto LABEL_232;
      }
      v87 = *((_QWORD*)a1 + 2);
      v157_.v157[0] = GameData_201af08;
      v157_.v157[1] = a1;
      v157_.v158 = v157_.v157;
      v88 = game_map_history__1239da0(v87);
      v89 = v159_.v159;
      v90 = 0;
      while (2) {
        v91 = &v88[v90 * 8];
        if (v88[v90 * 8] != 0) {
          v92 = &v159_.v159[v90];
          LOBYTE(v159_.v159[v90]) = v88[v90 * 8];
          if (v91[1] != 0) {
            *((_BYTE*)v92 + 1) = v91[1];
            if (v91[2] != 0) {
              *((_BYTE*)v92 + 2) = v91[2];
              if (v91[3] != 0) {
                BYTE3(v159_.v159[v90]) = v91[3];
                if (v91[4] != 0) {
                  BYTE4(v159_.v159[v90]) = v91[4];
                  if (v91[5] != 0) {
                    BYTE5(v159_.v159[v90]) = v91[5];
                    if (v91[6] != 0) {
                      BYTE6(v159_.v159[v90]) = v91[6];
                      if ((_DWORD)(v90 * 8) == 120) {
                        v113 = (char*)&v159_.v159[v90] + 7;
                      }
                      else {
                        v93 = (unsigned __int8)v91[7];
                        if (v93 != 0) {
                          v94 = &v159_.v159[v90];
                          ++v89;
                          ++v90;
                          *((_BYTE*)v94 + 7) = v93;
                          continue;
                        }
                        v113 = (char*)v89 + 7;
                      }
                    }
                    else {
                      v113 = (char*)&v159_.v159[v90] + 6;
                    }
                  }
                  else {
                    v113 = (char*)&v159_.v159[v90] + 5;
                  }
                }
                else {
                  v113 = (char*)&v159_.v159[v90] + 4;
                }
              }
              else {
                v113 = (char*)&v159_.v159[v90] + 3;
              }
            }
            else {
              v113 = (char*)&v159_.v159[v90] + 2;
            }
          }
          else {
            v113 = (char*)&v159_.v159[v90] + 1;
          }
        }
        else {
          v113 = &v159_.v159[v90];
        }
        break;
      }
      *v113 = 0;
      v115 = msg_MessageManager_instance__ptr[0];
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704,
                         (const char*)v159_.v159);
      v107 = *v115;
      v108 = "MID_RewindMsg_Wait";
      goto LABEL_232;
    case 3u:
      v156 = *((_DWORD*)a1 + 2);
      if (HIBYTE(v156) == 0) {
        v38 = "MID_RewindMsg_Defeat";
        v161_.v161[0] = GameData_201af88;
        v161_.v164 = v161_.v161;
        v159_.v159[0] = GameData_201b008;
        v159_.v159[1] = a1;
        goto LABEL_247;
      }
      v69 = v156 & 0xFFFF0000;
      if ((int)(v156 & 0xFFFF0000) <= 0x1FFFFFF) {
        if (v69 == 0x1000000) {
          v38 = "MID_RewindMsg_Defeat";
          v161_.v161[0] = GameData_201b088;
          v161_.v161[1] = a1;
          v161_.v164 = v161_.v161;
          v39 = GameData_201b108;
          goto LABEL_246;
        }
        if (v69 == 16842752) {
          v38 = "MID_RewindMsg_Destroy";
          v161_.v161[0] = GameData_201b308;
          v161_.v161[1] = a1;
          v161_.v164 = v161_.v161;
          v39 = GameData_201b388;
          goto LABEL_246;
        }
      LABEL_193:
        if ((v156 & 0xFF000000) == 0x4000000) {
          v38 = "MID_RewindMsg_Skill";
          v161_.v161[0] = GameData_201b688;
          v161_.v161[1] = a1;
          v161_.v164 = v161_.v161;
          v39 = GameData_201b708;
        }
        else {
          if ((v156 & 0xFF000000) != 0x3000000) {
            game_map_history_LogInfo_CreateTextGeneral((void*)(&v153_.v153),
                                                       (__int64)a1);
            goto LABEL_267;
          }
          v38 = "MID_RewindMsg_Magic";
          v161_.v161[0] = GameData_201b588;
          v161_.v161[1] = a1;
          v161_.v164 = v161_.v161;
          v39 = GameData_201b608;
        }
        goto LABEL_246;
      }
      if (v69 == 0x2000000) {
        v47 = "MID_RewindMsg_Person_Attack";
        v161_.v161[0] = GameData_201b188;
        v161_.v161[1] = a1;
        v161_.v164 = v161_.v161;
        v159_.v159[0] = GameData_201b208;
        v159_.v159[1] = a1;
        v159_.v160 = v159_.v159;
        v48 = GameData_201b288;
      }
      else {
        if (v69 != 33619968) {
          goto LABEL_193;
        }
        v47 = "MID_RewindMsg_Attack";
        v161_.v161[0] = GameData_201b408;
        v161_.v161[1] = a1;
        v161_.v164 = v161_.v161;
        v159_.v159[0] = GameData_201b488;
        v159_.v159[1] = a1;
        v159_.v160 = v159_.v159;
        v48 = GameData_201b508;
      }
    LABEL_83:
      v157_.v157[0] = v48;
      v157_.v157[1] = &v156;
      v157_.v158 = v157_.v157;
      v49 = game_map_history__1239240(v47, (__int64)v161_.v161,
                                      (__int64)v159_.v159, (__int64)v157_.v157);
      v50 = strlen(v49);
      if (v50 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_277;
      }
      v51 = v50;
      if (v50 >= 0x17) {
        v146 = v19;
        v70 = v5;
        v71 = v11;
        v72 = a2;
        v73 = a3;
        if ((v50 | 7) == 0x17) {
          v74 = 26;
        }
        else {
          v74 = (v50 | 7) + 1;
        }
        v75 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v74, 16, 0);
        v76 = v74 | 1;
        a3 = v73;
        a2 = v72;
        v11 = v71;
        v5 = v70;
        v19 = v146;
        v52 = (char*)v75;
        v153_.v154 = v51;
        v153_.v155 = v75;
        v153_.v153 = v76;
      }
      else {
        LOBYTE(v153_.v153) = 2 * v50;
        v52 = (char*)&v153_.v153 + 1;
        if (v50 == 0) {
        LABEL_126:
          v77 = v157_.v158;
          v52[v51] = 0;
          if (v77 == v157_.v157) {
            v29 = v150;
            v78 = 32;
          }
          else {
            v29 = v150;
            if (v77 == nullptr) {
              goto LABEL_158;
            }
            v78 = 40;
          }
          (*(void (**)(__int64))(*v77 + v78))((__int64)v77);
        LABEL_158:
          v95 = v159_.v160;
          if (v159_.v160 != v159_.v159) {
            if (v159_.v160 == nullptr) {
              goto LABEL_262;
            }
          LABEL_258:
            v140 = 40;
          LABEL_261:
            (*(void (**)(__int64))(*v95 + v140))((__int64)v95);
            goto LABEL_262;
          }
        LABEL_260:
          v140 = 32;
          goto LABEL_261;
        }
      }
      memmove((__int64)v52, (__int64)v49, v51);
      goto LABEL_126;
    case 4u:
      v156 = *((_DWORD*)a1 + 2);
      if ((v156 & 0x80000000) != 0) {
        v38 = "MID_RewindMsg_Recovery_Magic";
        v161_.v161[0] = GameData_201b908;
        v161_.v161[1] = a1;
        v161_.v164 = v161_.v161;
        v39 = GameData_201b988;
        goto LABEL_246;
      }
      v47 = "MID_RewindMsg_HPRecovery_Magic";
      v161_.v161[0] = GameData_201b788;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v159_.v159[0] = GameData_201b808;
      v159_.v159[1] = a1;
      v159_.v160 = v159_.v159;
      v48 = GameData_201b888;
      goto LABEL_83;
    case 5u:
      v38 = "MID_RewindMsg_Assist_Magic";
      v161_.v161[0] = GameData_201ba08;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v39 = GameData_201ba88;
      goto LABEL_246;
    case 6u:
      v38 = "MID_RewindMsg_Assist_Arts";
      v161_.v161[0] = GameData_201bb08;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v39 = GameData_201bb88;
      goto LABEL_246;
    case 7u:
      v38 = "MID_RewindMsg_Special";
      v161_.v161[0] = GameData_201bc08;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v39 = GameData_201bc88;
      goto LABEL_246;
    case 8u:
      v38 = "MID_RewindMsg_Gambit";
      v161_.v161[0] = GameData_201bd08;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v39 = GameData_201bd88;
      goto LABEL_246;
    case 9u:
      v38 = "MID_RewindMsg_Rage";
      v161_.v161[0] = GameData_201be08;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v39 = GameData_201be88;
      goto LABEL_246;
    case 0xAu:
      v38 = "MID_RewindMsg_Used_Item";
      v161_.v161[0] = GameData_201bf08;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v39 = GameData_201bf88;
      goto LABEL_246;
    case 0xBu:
      v61 = *((_QWORD*)a1 + 2);
      v157_.v157[0] = GameData_201c008;
      v157_.v157[1] = a1;
      v157_.v158 = v157_.v157;
      v62 = game_map_history__1239da0(v61);
      v63 = v159_.v159;
      v64 = 0;
      while (2) {
        v65 = &v62[v64 * 8];
        if (v62[v64 * 8] != 0) {
          v66 = &v159_.v159[v64];
          LOBYTE(v159_.v159[v64]) = v62[v64 * 8];
          if (v65[1] != 0) {
            *((_BYTE*)v66 + 1) = v65[1];
            if (v65[2] != 0) {
              *((_BYTE*)v66 + 2) = v65[2];
              if (v65[3] != 0) {
                BYTE3(v159_.v159[v64]) = v65[3];
                if (v65[4] != 0) {
                  BYTE4(v159_.v159[v64]) = v65[4];
                  if (v65[5] != 0) {
                    BYTE5(v159_.v159[v64]) = v65[5];
                    if (v65[6] != 0) {
                      BYTE6(v159_.v159[v64]) = v65[6];
                      if ((_DWORD)(v64 * 8) == 120) {
                        v97 = (char*)&v159_.v159[v64] + 7;
                      }
                      else {
                        v67 = (unsigned __int8)v65[7];
                        if (v67 != 0) {
                          v68 = &v159_.v159[v64];
                          ++v63;
                          ++v64;
                          *((_BYTE*)v68 + 7) = v67;
                          continue;
                        }
                        v97 = (char*)v63 + 7;
                      }
                    }
                    else {
                      v97 = (char*)&v159_.v159[v64] + 6;
                    }
                  }
                  else {
                    v97 = (char*)&v159_.v159[v64] + 5;
                  }
                }
                else {
                  v97 = (char*)&v159_.v159[v64] + 4;
                }
              }
              else {
                v97 = (char*)&v159_.v159[v64] + 3;
              }
            }
            else {
              v97 = (char*)&v159_.v159[v64] + 2;
            }
          }
          else {
            v97 = (char*)&v159_.v159[v64] + 1;
          }
        }
        else {
          v97 = &v159_.v159[v64];
        }
        break;
      }
      *v97 = 0;
      v109 = msg_MessageManager_instance__ptr[0];
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704,
                         (const char*)v159_.v159);
      v107 = *v109;
      v108 = "MID_RewindMsg_Secede";
      goto LABEL_232;
    case 0xCu:
      if (*((_QWORD*)a1 + 4) != 0) {
        v38 = "MID_RewindMsg_Get_Item";
        v161_.v161[0] = GameData_201c088;
        v161_.v161[1] = a1;
        v161_.v164 = v161_.v161;
        v39 = GameData_201c108;
      LABEL_246:
        v159_.v159[0] = v39;
        v159_.v159[1] = a1;
      LABEL_247:
        v159_.v160 = v159_.v159;
        v129 = game_map_history__1238f10(v38, (__int64)v161_.v161,
                                         (__int64)v159_.v159);
        v130 = strlen(v129);
        if (v130 < 0xFFFFFFFFFFFFFFF7LL) {
          v131 = v130;
          if (v130 >= 0x17) {
            v149 = v19;
            v133 = v5;
            v134 = v11;
            v135 = a2;
            v136 = a3;
            if ((v130 | 7) == 0x17) {
              v137 = 26;
            }
            else {
              v137 = (v130 | 7) + 1;
            }
            v138 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v137, 16, 0);
            v139 = v137 | 1;
            a3 = v136;
            a2 = v135;
            v11 = v134;
            v5 = v133;
            v19 = v149;
            v132 = (char*)v138;
            v153_.v154 = v131;
            v153_.v155 = v138;
            v153_.v153 = v139;
          }
          else {
            LOBYTE(v153_.v153) = 2 * v130;
            v132 = (char*)&v153_.v153 + 1;
            if (v130 == 0) {
              goto LABEL_256;
            }
          }
          memmove((__int64)v132, (__int64)v129, v131);
        LABEL_256:
          v95 = v159_.v160;
          v132[v131] = 0;
          if (v95 != v159_.v159) {
            v29 = v150;
            if (v95 == nullptr) {
            LABEL_262:
              v127 = v161_.v164;
              if (v161_.v164 == v161_.v161) {
                v128 = 32;
                goto LABEL_266;
              }
              if (v161_.v164 == nullptr) {
              LABEL_267:
                v32 = v151;
                v31 = v152;
                goto LABEL_268;
              }
              goto LABEL_264;
            }
            goto LABEL_258;
          }
          v29 = v150;
          goto LABEL_260;
        }
      LABEL_277:
        String_60a1d0();
      }
      v79 = *((_QWORD*)a1 + 2);
      v157_.v157[0] = GameData_201c188;
      v157_.v157[1] = a1;
      v157_.v158 = v157_.v157;
      v80 = game_map_history__1239da0(v79);
      v81 = v159_.v159;
      for (j = 0;; ++j) {
        v83 = &v80[j * 8];
        if (v80[j * 8] == 0) {
          v112 = &v159_.v159[j];
          goto LABEL_229;
        }
        v84 = &v159_.v159[j];
        LOBYTE(v159_.v159[j]) = v80[j * 8];
        if (v83[1] == 0) {
          v112 = (char*)&v159_.v159[j] + 1;
          goto LABEL_229;
        }
        *((_BYTE*)v84 + 1) = v83[1];
        if (v83[2] == 0) {
          v112 = (char*)&v159_.v159[j] + 2;
          goto LABEL_229;
        }
        *((_BYTE*)v84 + 2) = v83[2];
        if (v83[3] == 0) {
          v112 = (char*)&v159_.v159[j] + 3;
          goto LABEL_229;
        }
        BYTE3(v159_.v159[j]) = v83[3];
        if (v83[4] == 0) {
          v112 = (char*)&v159_.v159[j] + 4;
          goto LABEL_229;
        }
        BYTE4(v159_.v159[j]) = v83[4];
        if (v83[5] == 0) {
          v112 = (char*)&v159_.v159[j] + 5;
          goto LABEL_229;
        }
        BYTE5(v159_.v159[j]) = v83[5];
        if (v83[6] == 0) {
          v112 = (char*)&v159_.v159[j] + 6;
          goto LABEL_229;
        }
        BYTE6(v159_.v159[j]) = v83[6];
        if ((_DWORD)(j * 8) == 120) {
          v112 = (char*)&v159_.v159[j] + 7;
          goto LABEL_229;
        }
        v85 = (unsigned __int8)v83[7];
        if (v85 == 0) {
          break;
        }
        v86 = &v159_.v159[j];
        ++v81;
        *((_BYTE*)v86 + 7) = v85;
      }
      v112 = (char*)v81 + 7;
    LABEL_229:
      *v112 = 0;
      v114 = msg_MessageManager_instance__ptr[0];
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704,
                         (const char*)v159_.v159);
      v107 = *v114;
      v108 = "MID_RewindMsg_Open_Treasurebox";
    LABEL_232:
      v161_.v165 = -1;
      v161_.v166 = -1;
      v161_.v167 = -1;
      v161_.v168 = -1;
      v161_.v169 = -1;
      v161_.v170 = -1;
      v161_.v171 = -1;
      v161_.v172 = -1;
      v161_.v173 = -1;
      v161_.v174 = -1;
      v161_.v175 = -1;
      v161_.v176 = -1;
      v161_.v161[0] = GameData_212e348 + 2;
      v161_.v161[1] = 0xFFFF0001FFFF0000LL;
      v161_.v162 = 0xFFFF0004FFFF0002LL;
      v161_.v163 = 0xFFFF0006FFFF0005LL;
      v161_.v177 = 8;
      v161_.v164 = (_QWORD*)0xFFFF0008FFFF0007LL;
      v116 = GameRoutine_a4dbe0(v107, v108, 0);
      v117 = strlen(v116);
      if (v117 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_277;
      }
      v118 = v117;
      if (v117 >= 0x17) {
        v148 = v19;
        v120 = v5;
        v121 = v11;
        v122 = a2;
        v123 = a3;
        if ((v117 | 7) == 0x17) {
          v124 = 26;
        }
        else {
          v124 = (v117 | 7) + 1;
        }
        v125 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v124, 16, 0);
        v126 = v124 | 1;
        a3 = v123;
        a2 = v122;
        v11 = v121;
        v5 = v120;
        v19 = v148;
        v119 = (char*)v125;
        v153_.v154 = v118;
        v153_.v155 = v125;
        v153_.v153 = v126;
      }
      else {
        LOBYTE(v153_.v153) = 2 * v117;
        v119 = (char*)&v153_.v153 + 1;
        if (v117 == 0) {
          goto LABEL_241;
        }
      }
      memmove((__int64)v119, (__int64)v116, v118);
    LABEL_241:
      v127 = v157_.v158;
      v119[v118] = 0;
      if (v127 == v157_.v157) {
        v29 = v150;
        v128 = 32;
      LABEL_266:
        (*(void (**)(__int64))(*v127 + v128))((__int64)v127);
        goto LABEL_267;
      }
      v29 = v150;
      if (v127 == nullptr) {
        goto LABEL_267;
      }
    LABEL_264:
      v128 = 40;
      goto LABEL_266;
    case 0xDu:
      v157_.v157[0] = GameData_201c208;
      v157_.v157[1] = a1;
      v157_.v158 = v157_.v157;
      v40 = GameRoutine_123c840((__int64)v157_.v157);
      v41 = v159_.v159;
      v42 = 0;
      while (2) {
        v43 = &v40[v42 * 8];
        if (v40[v42 * 8] != 0) {
          v44 = &v159_.v159[v42];
          LOBYTE(v159_.v159[v42]) = v40[v42 * 8];
          if (v43[1] != 0) {
            *((_BYTE*)v44 + 1) = v43[1];
            if (v43[2] != 0) {
              *((_BYTE*)v44 + 2) = v43[2];
              if (v43[3] != 0) {
                BYTE3(v159_.v159[v42]) = v43[3];
                if (v43[4] != 0) {
                  BYTE4(v159_.v159[v42]) = v43[4];
                  if (v43[5] != 0) {
                    BYTE5(v159_.v159[v42]) = v43[5];
                    if (v43[6] != 0) {
                      BYTE6(v159_.v159[v42]) = v43[6];
                      if ((_DWORD)(v42 * 8) == 120) {
                        v96 = (char*)&v159_.v159[v42] + 7;
                      }
                      else {
                        v45 = (unsigned __int8)v43[7];
                        if (v45 != 0) {
                          v46 = &v159_.v159[v42];
                          ++v41;
                          ++v42;
                          *((_BYTE*)v46 + 7) = v45;
                          continue;
                        }
                        v96 = (char*)v41 + 7;
                      }
                    }
                    else {
                      v96 = (char*)&v159_.v159[v42] + 6;
                    }
                  }
                  else {
                    v96 = (char*)&v159_.v159[v42] + 5;
                  }
                }
                else {
                  v96 = (char*)&v159_.v159[v42] + 4;
                }
              }
              else {
                v96 = (char*)&v159_.v159[v42] + 3;
              }
            }
            else {
              v96 = (char*)&v159_.v159[v42] + 2;
            }
          }
          else {
            v96 = (char*)&v159_.v159[v42] + 1;
          }
        }
        else {
          v96 = &v159_.v159[v42];
        }
        break;
      }
      *v96 = 0;
      v106 = msg_MessageManager_instance__ptr[0];
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704,
                         (const char*)v159_.v159);
      v107 = *v106;
      v108 = "MID_RewindMsg_Miracle";
      goto LABEL_232;
    case 0xEu:
      v38 = "MID_RewindMsg_UnitSkill";
      v161_.v161[0] = GameData_201c288;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v39 = GameData_201c308;
      goto LABEL_246;
    case 0xFu:
      v38 = "MID_RewindMsg_Defeat2";
      v161_.v161[0] = GameData_201c388;
      v161_.v161[1] = a1;
      v161_.v164 = v161_.v161;
      v39 = GameData_201c408;
      goto LABEL_246;
    }
  }
  if (v4 == 255) {
    v36 = a1[3];
    v37 = a1[4];
    game_map_history_LogInfo_CreateTextGeneral((void*)(&v153_.v153),
                                               (__int64)a1);
    v32 = v37;
    v31 = v36;
  }
  else {
    LOWORD(v153_.v153) = 0;
  }
LABEL_268:
  v141 = a1[2];
  *(_DWORD*)a4 = a2;
  *(_BYTE*)(a4 + 4) = a3;
  *(_BYTE*)(a4 + 7) = v31;
  *(_BYTE*)(a4 + 8) = v32;
  *(_BYTE*)(a4 + 5) = v11 & 0xFD | (2 * (v5 & 1));
  *(_BYTE*)(a4 + 6) = v141;
  if ((v153_.v153 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)(a4 + 16), v153_.v155, v153_.v154);
    v144 = v153_.v153;
    *(_QWORD*)(a4 + 40) = v19;
    *(_QWORD*)(a4 + 48) = v29;
    if ((v144 & 1) != 0 && v153_.v155 != 0) {
      v145 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v145 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v145, v153_.v155);
    }
  }
  else {
    v142 = v153_.v153;
    v143 = v153_.v154;
    *(_QWORD*)(a4 + 48) = v29;
    *(_QWORD*)(a4 + 16) = v142;
    *(_QWORD*)(a4 + 24) = v143;
    *(_QWORD*)(a4 + 32) = v153_.v155;
    *(_QWORD*)(a4 + 40) = v19;
  }
}

#pragma GCC visibility pop
