#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_65d6c0(_QWORD);
__int64 GameRoutine_713600(_QWORD, _QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_db89d0(_QWORD, _QWORD);
__int64 GameRoutine_dbd8e0(void);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1ae979a;
extern __int64 (*GameData_1fdfa48[])();
extern __int64 (*GameData_1fdfb20[])();
extern __int64 (*game_GameHubData_vtable[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbf8;
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
extern int GameData_2213f54;
__int64 GameHubData_Destructor(__int64 a1);
__int64 GameHubData_db8890(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6);
__int64 GameHubData_Unknown8(_QWORD* a1, __int64 a2);
__int64 GameHubData_dba5a0(__int64* a1, __int64 a2);

__int64 GameHubData_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 result;
  __int64 v45;

  *(_QWORD*)a1 = game_GameHubData_vtable;
  *(_QWORD*)(a1 + 8) = GameData_1fdfa48;
  v2 = a1 + 8;
  if (*(_BYTE*)(a1 + 1096) == 1 && (*(_BYTE*)(a1 + 1072) & 1) != 0 &&
      *(_QWORD*)(a1 + 1088) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if (*(_BYTE*)(a1 + 1056) == 1) {
    v4 = *(_QWORD*)(a1 + 992);
    if (v4 != 0) {
      *(_QWORD*)(a1 + 1000) = v4;
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v5);
    }
  }
  if ((*(_BYTE*)(a1 + 952) & 1) != 0 && *(_QWORD*)(a1 + 968) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = *(_QWORD*)(a1 + 904);
  if (v7 != 0) {
    *(_QWORD*)(a1 + 912) = v7;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  v9 = *(_QWORD*)(a1 + 872);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 880);
    if (v9 == v10) {
      goto LABEL_32;
    }
    v11 = v10 - 264;
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      if ((*(_BYTE*)v11 & 1) != 0 && *(_QWORD*)(v11 + 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
      }
      v13 = v11 == v9;
      v11 -= 264;
    } while (!v13);
    v15 = *(_QWORD*)(a1 + 872);
    *(_QWORD*)(a1 + 880) = v9;
    if (v15 != 0) {
    LABEL_32:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v16);
    }
  }
  v17 = *(_QWORD*)(a1 + 848);
  if (v17 != 0) {
    *(_QWORD*)(a1 + 856) = v17;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  v19 = *(_QWORD*)(a1 + 824);
  if (v19 != 0) {
    *(_QWORD*)(a1 + 832) = v19;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  v21 = *(_QWORD*)(a1 + 800);
  if (v21 != 0) {
    *(_QWORD*)(a1 + 808) = v21;
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
  }
  v23 = *(_QWORD*)(a1 + 776);
  if (v23 != 0) {
    *(_QWORD*)(a1 + 784) = v23;
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  v25 = *(_QWORD*)(a1 + 752);
  if (v25 != 0) {
    *(_QWORD*)(a1 + 760) = v25;
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
  }
  v27 = *(_QWORD*)(a1 + 728);
  if (v27 != 0) {
    *(_QWORD*)(a1 + 736) = v27;
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
  }
  GameRoutine_65d6c0(a1 + 592);
  GameRoutine_65d6c0(a1 + 464);
  GameRoutine_65d6c0(a1 + 336);
  if ((*(_BYTE*)(a1 + 280) & 1) != 0 && *(_QWORD*)(a1 + 296) != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
  if ((*(_BYTE*)(a1 + 256) & 1) != 0 && *(_QWORD*)(a1 + 272) != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
  }
  v31 = *(_QWORD*)(a1 + 232);
  if (v31 != 0) {
    v32 = *(_QWORD*)(a1 + 240);
    if (v31 == v32) {
      goto LABEL_80;
    }
    v33 = *(_QWORD*)(a1 + 240);
    v34 = fw_memory_g_heap_manager_ptr;
    do {
      v35 = *(_BYTE*)(v33 - 24);
      v33 -= 24;
      if ((v35 & 1) != 0 && *(_QWORD*)(v32 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) != 0) {
          v36 = 128;
        }
        else {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v36);
      }
      v32 = v33;
    } while (v33 != v31);
    v37 = *(_QWORD*)(a1 + 232);
    *(_QWORD*)(a1 + 240) = v31;
    if (v37 != 0) {
    LABEL_80:
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v38);
    }
  }
  if ((*(_BYTE*)(a1 + 208) & 1) != 0 && *(_QWORD*)(a1 + 224) != 0) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v39);
  }
  if ((*(_BYTE*)(a1 + 104) & 1) != 0 && *(_QWORD*)(a1 + 120) != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
  }
  if ((*(_BYTE*)(a1 + 72) & 1) != 0 && *(_QWORD*)(a1 + 88) != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
  }
  v45 = v2;
  *(_QWORD*)(a1 + 8) = GameData_212d6d0 + 2;
  result = GameRoutine_876a40(&GameData_21eea40, &v45);
  *(_QWORD*)a1 = GameData_1fdfb20;
  if (*(_QWORD*)GameData_212c6a0[0] == a1) {
    *(_QWORD*)GameData_212c6a0[0] = 0;
    GameData_2213f54 = 0;
  }
  return result;
}

__int64 GameHubData_db8890(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  __int64 v7;
  unsigned int v8;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  _QWORD v16[3];

  v7 = *(_QWORD*)(a1 + 344);
  v8 = *(_DWORD*)(a1 + 352);
  if (v7 != 0 && (int)v8 >= 1) {
    if (v8 >= 0x20) {
      v10 = 32;
    }
    else {
      v10 = v8;
    }
    memset(v7, 0, v10, a4, a5, a6);
  }
  v11 = *(unsigned __int8*)(a1 + 980);
  *(_DWORD*)(a1 + 356) = 0;
  *(_BYTE*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  if (v11 == 1) {
    *(_BYTE*)(a1 + 980) = 0;
  }
  if (*(_BYTE*)(a1 + 1096) != 0) {
    if ((*(_BYTE*)(a1 + 1072) & 1) != 0 && *(_QWORD*)(a1 + 1088) != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v12);
    }
    *(_BYTE*)(a1 + 1096) = 0;
  }
  *(_BYTE*)(a1 + 1108) = 0;
  *(_DWORD*)(a1 + 1104) = 0;
  LOWORD(v16[0]) = 0;
  GameRoutine_db89d0(a1, v16);
  if ((v16[0] & 1) != 0 && v16[2] != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  *(_QWORD*)(a1 + 176) = 0;
  *(_BYTE*)(a1 + 160) = 0;
  v14 = *(_OWORD*)(a1 + 176);
  *(_DWORD*)(a1 + 192) = 0;
  v16[1] = &GameData_1ae979a;
  *(_OWORD*)(a1 + 176) = (unsigned __int64)v14;
  v16[0] = game_HashString(&GameData_1ae979a);
  return game_VariableManager_SetFlag(v16, 0);
}

__int64 GameHubData_Unknown8(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void (**v13)(__int64, int*);
  __int64 v14;
  int* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  unsigned __int64 v26;
  bool v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  bool v36;
  unsigned __int64 v37;
  char* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  char v46;
  unsigned __int64 v47;
  bool v48;
  unsigned __int64 v49;
  char* v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int128 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  char v84;
  __int64 v85;
  __int64 v86;
  __int128 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int8* v103;
  unsigned __int64 v104;
  bool v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int8* v120;
  unsigned __int64 v121;
  bool v122;
  unsigned __int64 v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  char* v128;
  unsigned __int64 v129;
  bool v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  char* v137;
  unsigned __int64 v138;
  bool v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  char v147;
  __int64 v148;
  int v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  int v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  int v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  void (**v169)(__int64, int*);
  __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  void (**v185)(__int64, int*);
  __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  void (**v201)(__int64, int*);
  __int64 v202;
  __int64 v203;
  unsigned __int64 v204;
  __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  unsigned __int64 v222;
  __int64 v223;
  __int64 v224;
  void (**v225)(__int64, int*);
  __int64 v226;
  __int64 v227;
  unsigned __int64 v228;
  bool v229;
  unsigned __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 result;
  void (**v260)(__int64, int*);
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  unsigned __int64 v272;
  __int64 v273;
  __int64 v274;
  unsigned __int64 v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  int v285;

  if (*(_QWORD*)GameData_212dbf8 != 0) {
    GameRoutine_dbd8e0();
  }
  v4 = *((unsigned __int8*)a1 + 16);
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = (char*)a1 + 17;
  }
  else {
    v7 = (char*)a1[4];
  }
  if (!v5) {
    LODWORD(v6) = *((_DWORD*)a1 + 6);
  }
  if ((_DWORD)v6 != 0) {
    v8 = *(int*)(a2 + 20);
    v9 = (unsigned int)(v6 + 1);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v6 + 1;
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v9);
    if ((v6 & 0x80000000) == 0) {
      memmove(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20), v7, v9);
      *(_DWORD*)(a2 + 20) += v9;
    }
  }
  else {
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = 0;
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = 0;
  }
  v13 = *(void (***)(__int64, int*))a2;
  v285 = 0;
  (*v13)(a2, &v285);
  v15 = (int*)(a2 + 20);
  v14 = *(int*)(a2 + 20);
  v17 = (_QWORD*)(a2 + 8);
  v16 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(v16 + v14) = 0;
  v18 = *(int*)(a2 + 20);
  LOBYTE(v16) = *((_BYTE*)a1 + 720);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v16;
  v19 = *(int*)(a2 + 20);
  LOBYTE(v16) = *((_BYTE*)a1 + 721);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v16;
  v20 = *(int*)(a2 + 20);
  LOBYTE(v16) = *((_BYTE*)a1 + 722);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = v16;
  v21 = *(int*)(a2 + 20);
  LOBYTE(v16) = *((_BYTE*)a1 + 723);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v16;
  v22 = *(int*)(a2 + 20);
  LOBYTE(v16) = *((_BYTE*)a1 + 724);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v16;
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  v23 = *(int*)(a2 + 20);
  v24 = *((_BYTE*)a1 + 40);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*v17 + v23) = v24;
  v285 = 0;
  (**(void (***)(__int64, int*))a2)(a2, &v285);
  v25 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  *(_BYTE*)(*v17 + v25) = 1;
  v26 = *((unsigned __int8*)a1 + 48);
  v27 = (v26 & 1) == 0;
  v28 = v26 >> 1;
  if (v27) {
    v29 = (char*)a1 + 49;
  }
  else {
    v29 = (char*)a1[8];
  }
  if (!v27) {
    LODWORD(v28) = *((_DWORD*)a1 + 14);
  }
  if ((_DWORD)v28 != 0) {
    v30 = *v15;
    v31 = (unsigned int)(v28 + 1);
    *v15 = v30 + 1;
    *(_BYTE*)(*v17 + v30) = v28 + 1;
    v32 = *v15;
    *v15 = v32 + 1;
    *(_BYTE*)(*v17 + v32) = BYTE1(v31);
    if ((v28 & 0x80000000) == 0) {
      memmove(*v17 + *v15, v29, v31);
      *v15 += v31;
    }
  }
  else {
    v33 = *v15;
    *v15 = v33 + 1;
    *(_BYTE*)(*v17 + v33) = 0;
    v34 = *v15;
    *v15 = v34 + 1;
    *(_BYTE*)(*v17 + v34) = 0;
  }
  v35 = *((unsigned __int8*)a1 + 72);
  v36 = (v35 & 1) == 0;
  v37 = v35 >> 1;
  if (v36) {
    v38 = (char*)a1 + 73;
  }
  else {
    v38 = (char*)a1[11];
  }
  v39 = *((_DWORD*)a1 + 20);
  if (v36) {
    v39 = v37;
  }
  if (v39 != 0) {
    v40 = *v15;
    v41 = (unsigned int)(v39 + 1);
    *v15 = v40 + 1;
    *(_BYTE*)(*v17 + v40) = v39 + 1;
    v42 = *v15;
    *v15 = v42 + 1;
    *(_BYTE*)(*v17 + v42) = BYTE1(v41);
    v43 = *v15;
    if ((v39 & 0x80000000) == 0) {
      memmove(*v17 + v43, v38, v41);
      v43 = *v15 + v41;
      *v15 = v43;
    }
  }
  else {
    v44 = *v15;
    *v15 = v44 + 1;
    *(_BYTE*)(*v17 + v44) = 0;
    v45 = *v15;
    *v15 = v45 + 1;
    *(_BYTE*)(*v17 + v45) = 0;
    v43 = *v15;
  }
  v46 = *((_DWORD*)a1 + 24);
  *v15 = v43 + 1;
  *(_BYTE*)(*v17 + v43) = v46;
  v47 = *((unsigned __int8*)a1 + 104);
  v48 = (v47 & 1) == 0;
  v49 = v47 >> 1;
  if (v48) {
    v50 = (char*)a1 + 105;
  }
  else {
    v50 = (char*)a1[15];
  }
  v51 = *((_DWORD*)a1 + 28);
  if (v48) {
    v51 = v49;
  }
  if (v51 != 0) {
    v52 = *v15;
    v53 = (unsigned int)(v51 + 1);
    *v15 = v52 + 1;
    *(_BYTE*)(*v17 + v52) = v51 + 1;
    v54 = *v15;
    *v15 = v54 + 1;
    *(_BYTE*)(*v17 + v54) = BYTE1(v53);
    v55 = *v15;
    if ((v51 & 0x80000000) == 0) {
      memmove(*v17 + v55, v50, v53);
      v55 = *v15 + v53;
      *v15 = v55;
    }
  }
  else {
    v56 = *v15;
    *v15 = v56 + 1;
    *(_BYTE*)(*v17 + v56) = 0;
    v57 = *v15;
    *v15 = v57 + 1;
    *(_BYTE*)(*v17 + v57) = 0;
    v55 = *v15;
  }
  v58 = *((_OWORD*)a1 + 8);
  *(_DWORD*)(a2 + 20) = v55 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v55) = v58;
  v59 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v59 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v59) = BYTE1(v58);
  v60 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v60 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v60) = BYTE2(v58);
  v61 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v61 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v61) = BYTE3(v58);
  v62 = *(int*)(a2 + 20);
  LODWORD(v61) = *((_DWORD*)a1 + 33);
  *(_DWORD*)(a2 + 20) = v62 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62) = v61;
  v63 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v63 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v63) = BYTE1(v61);
  v64 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v64 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v64) = BYTE2(v61);
  v65 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v65 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v65) = BYTE3(v61);
  v66 = *(int*)(a2 + 20);
  LODWORD(v61) = *((_DWORD*)a1 + 34);
  *(_DWORD*)(a2 + 20) = v66 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v66) = v61;
  v67 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v67 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v67) = BYTE1(v61);
  v68 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v68 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v68) = BYTE2(v61);
  v69 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v69 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v69) = BYTE3(v61);
  v70 = *(int*)(a2 + 20);
  LODWORD(v61) = *((_DWORD*)a1 + 36);
  *(_DWORD*)(a2 + 20) = v70 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v70) = v61;
  v71 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v71 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v71) = BYTE1(v61);
  v72 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v72 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v72) = BYTE2(v61);
  v73 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v73 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v73) = BYTE3(v61);
  v74 = *(int*)(a2 + 20);
  LOBYTE(v61) = *((_BYTE*)a1 + 148);
  *(_DWORD*)(a2 + 20) = v74 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v74) = v61;
  v75 = *(int*)(a2 + 20);
  LODWORD(v61) = *((_DWORD*)a1 + 38);
  *(_DWORD*)(a2 + 20) = v75 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v75) = v61;
  v76 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v76 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v76) = BYTE1(v61);
  v77 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v77 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v77) = BYTE2(v61);
  v78 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v78 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = BYTE3(v61);
  v79 = *(int*)(a2 + 20);
  LODWORD(v61) = *((_DWORD*)a1 + 39);
  *(_DWORD*)(a2 + 20) = v79 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v79) = v61;
  v80 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v80 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v80) = BYTE1(v61);
  v81 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v81 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v81) = BYTE2(v61);
  v82 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v82 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = BYTE3(v61);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 14) {
    v83 = *(int*)(a2 + 20);
    v84 = *((_BYTE*)a1 + 160);
    *(_DWORD*)(a2 + 20) = v83 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v83) = v84;
    v285 = 0;
    (**(void (***)(__int64, int*))a2)(a2, &v285);
    v85 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v85 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v85) = 0;
    v86 = *(int*)(a2 + 20);
    v87 = *((_OWORD*)a1 + 11);
    *(_DWORD*)(a2 + 20) = v86 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v86) = v87;
    v88 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v88 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v88) = BYTE1(v87);
    v89 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v89 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v89) = BYTE2(v87);
    v90 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v90 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v90) = BYTE3(v87);
    v91 = *(int*)(a2 + 20);
    LODWORD(v90) = *((_DWORD*)a1 + 45);
    *(_DWORD*)(a2 + 20) = v91 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91) = v90;
    v92 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v92 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92) = BYTE1(v90);
    v93 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v93 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v93) = BYTE2(v90);
    v94 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v94 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v94) = BYTE3(v90);
    v95 = *(int*)(a2 + 20);
    LODWORD(v90) = *((_DWORD*)a1 + 46);
    *(_DWORD*)(a2 + 20) = v95 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v95) = v90;
    v96 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v96 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v96) = BYTE1(v90);
    v97 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v97 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v97) = BYTE2(v90);
    v98 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v98 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v98) = BYTE3(v90);
    v99 = *(int*)(a2 + 20);
    LODWORD(v90) = *((_DWORD*)a1 + 48);
    *(_DWORD*)(a2 + 20) = v99 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v99) = v90;
    v100 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v100 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v100) = BYTE1(v90);
    v101 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v101 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v101) = BYTE2(v90);
    v102 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v102 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v102) = BYTE3(v90);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 10) {
    v104 = *((unsigned __int8*)a1 + 208);
    v105 = (v104 & 1) == 0;
    v106 = v104 >> 1;
    if (v105) {
      v103 = (unsigned __int8*)a1 + 209;
    }
    else {
      v103 = (unsigned __int8*)a1[28];
    }
    if (!v105) {
      LODWORD(v106) = *((_DWORD*)a1 + 54);
    }
    if ((_DWORD)v106 != 0) {
      v107 = *v15;
      v108 = (unsigned int)(v106 + 1);
      *v15 = v107 + 1;
      *(_BYTE*)(*v17 + v107) = v106 + 1;
      v109 = *v15;
      *v15 = v109 + 1;
      *(_BYTE*)(*v17 + v109) = BYTE1(v108);
      if ((v106 & 0x80000000) == 0) {
        memmove(*v17 + *v15, v103, v108);
        *v15 += v108;
      }
    }
    else {
      v110 = *v15;
      *v15 = v110 + 1;
      *(_BYTE*)(*v17 + v110) = 0;
      v111 = *v15;
      *v15 = v111 + 1;
      *(_BYTE*)(*v17 + v111) = 0;
    }
  }
  v112 = *v15;
  v113 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1[30] - a1[29]) >> 3);
  *v15 = v112 + 1;
  *(_BYTE*)(*v17 + v112) = v113;
  v114 = *v15;
  *v15 = v114 + 1;
  *(_BYTE*)(*v17 + v114) = BYTE1(v113);
  v115 = a1[29];
  if (a1[30] != v115) {
    v116 = 0;
    v117 = 0;
    do {
      v120 = (unsigned __int8*)(v115 + v116);
      v121 = *v120;
      v122 = (v121 & 1) == 0;
      v123 = v121 >> 1;
      if (v122) {
        v103 = v120 + 1;
      }
      else {
        v103 = *((unsigned __int8**)v120 + 2);
      }
      v124 = *((_DWORD*)v120 + 2);
      if (v122) {
        v124 = v123;
      }
      if (v124 != 0) {
        v125 = *v15;
        v126 = (unsigned int)(v124 + 1);
        *v15 = v125 + 1;
        *(_BYTE*)(*v17 + v125) = v124 + 1;
        v127 = *v15;
        *v15 = v127 + 1;
        *(_BYTE*)(*v17 + v127) = BYTE1(v126);
        if ((v124 & 0x80000000) == 0) {
          memmove(*v17 + *v15, v103, v126);
          *v15 += v126;
        }
      }
      else {
        v118 = *v15;
        *v15 = v118 + 1;
        *(_BYTE*)(*v17 + v118) = 0;
        v119 = *v15;
        *v15 = v119 + 1;
        *(_BYTE*)(*v17 + v119) = 0;
      }
      v115 = a1[29];
      ++v117;
      v116 += 24;
    } while (0xAAAAAAAAAAAAAAABLL * ((a1[30] - v115) >> 3) > v117);
  }
  if ((*(int (**)(_QWORD*, unsigned __int8*))(*a1 + 40LL))(a1, v103) > 7) {
    v129 = *((unsigned __int8*)a1 + 256);
    v130 = (v129 & 1) == 0;
    v131 = v129 >> 1;
    if (v130) {
      v128 = (char*)a1 + 257;
    }
    else {
      v128 = (char*)a1[34];
    }
    if (!v130) {
      LODWORD(v131) = *((_DWORD*)a1 + 66);
    }
    if ((_DWORD)v131 != 0) {
      v132 = *v15;
      v133 = (unsigned int)(v131 + 1);
      *v15 = v132 + 1;
      *(_BYTE*)(*v17 + v132) = v131 + 1;
      v134 = *v15;
      *v15 = v134 + 1;
      *(_BYTE*)(*v17 + v134) = BYTE1(v133);
      if ((v131 & 0x80000000) == 0) {
        memmove(*v17 + *v15, v128, v133);
        *v15 += v133;
      }
    }
    else {
      v135 = *v15;
      *v15 = v135 + 1;
      *(_BYTE*)(*v17 + v135) = 0;
      v136 = *v15;
      *v15 = v136 + 1;
      *(_BYTE*)(*v17 + v136) = 0;
    }
  }
  if ((*(int (**)(_QWORD*, char*))(*a1 + 40LL))(a1, v128) >= 20) {
    v138 = *((unsigned __int8*)a1 + 280);
    v139 = (v138 & 1) == 0;
    v140 = v138 >> 1;
    if (v139) {
      v137 = (char*)a1 + 281;
    }
    else {
      v137 = (char*)a1[37];
    }
    if (!v139) {
      LODWORD(v140) = *((_DWORD*)a1 + 72);
    }
    if ((_DWORD)v140 != 0) {
      v141 = *v15;
      v142 = (unsigned int)(v140 + 1);
      *v15 = v141 + 1;
      *(_BYTE*)(*v17 + v141) = v140 + 1;
      v143 = *v15;
      *v15 = v143 + 1;
      *(_BYTE*)(*v17 + v143) = BYTE1(v142);
      if ((v140 & 0x80000000) == 0) {
        memmove(*v17 + *v15, v137, v142);
        *v15 += v142;
      }
    }
    else {
      v144 = *v15;
      *v15 = v144 + 1;
      *(_BYTE*)(*v17 + v144) = 0;
      v145 = *v15;
      *v15 = v145 + 1;
      *(_BYTE*)(*v17 + v145) = 0;
    }
  }
  if ((*(int (**)(_QWORD*, char*))(*a1 + 40LL))(a1, v137) >= 9) {
    v146 = *v15;
    v147 = *((_BYTE*)a1 + 304);
    *v15 = v146 + 1;
    *(_BYTE*)(*v17 + v146) = v147;
  }
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 12) {
    v148 = *v15;
    v149 = *((_DWORD*)a1 + 77);
    *v15 = v148 + 1;
    *(_BYTE*)(*v17 + v148) = v149;
  }
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 15) {
    v150 = *v15;
    v151 = a1[39];
    *v15 = v150 + 1;
    *(_BYTE*)(*v17 + v150) = v151;
    v152 = *v15;
    *v15 = v152 + 1;
    *(_BYTE*)(*v17 + v152) = BYTE1(v151);
    v153 = *v15;
    *v15 = v153 + 1;
    *(_BYTE*)(*v17 + v153) = BYTE2(v151);
    v154 = *v15;
    *v15 = v154 + 1;
    *(_BYTE*)(*v17 + v154) = BYTE3(v151);
    v155 = *v15;
    *v15 = v155 + 1;
    *(_BYTE*)(*v17 + v155) = BYTE4(v151);
    v156 = *v15;
    *v15 = v156 + 1;
    *(_BYTE*)(*v17 + v156) = BYTE5(v151);
    v157 = *v15;
    *v15 = v157 + 1;
    *(_BYTE*)(*v17 + v157) = BYTE6(v151);
    v158 = *v15;
    *v15 = v158 + 1;
    *(_BYTE*)(*v17 + v158) = HIBYTE(v151);
  }
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 19) {
    v159 = *v15;
    v160 = *((_DWORD*)a1 + 80);
    *v15 = v159 + 1;
    *(_BYTE*)(*v17 + v159) = v160;
    v161 = *v15;
    *v15 = v161 + 1;
    *(_BYTE*)(*v17 + v161) = BYTE1(v160);
    v162 = *v15;
    *v15 = v162 + 1;
    *(_BYTE*)(*v17 + v162) = BYTE2(v160);
    v163 = *v15;
    *v15 = v163 + 1;
    *(_BYTE*)(*v17 + v163) = HIBYTE(v160);
  }
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 16) {
    v164 = *v15;
    v165 = *((_DWORD*)a1 + 81);
    *v15 = v164 + 1;
    *(_BYTE*)(*v17 + v164) = v165;
    v166 = *v15;
    *v15 = v166 + 1;
    *(_BYTE*)(*v17 + v166) = BYTE1(v165);
    v167 = *v15;
    *v15 = v167 + 1;
    *(_BYTE*)(*v17 + v167) = BYTE2(v165);
    v168 = *v15;
    *v15 = v168 + 1;
    *(_BYTE*)(*v17 + v168) = HIBYTE(v165);
  }
  v169 = *(void (***)(__int64, int*))a2;
  v285 = 0;
  (*v169)(a2, &v285);
  v170 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v170 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v170) = 0;
  v171 = *(int*)(a2 + 20);
  v172 = a1[92] - a1[91];
  *(_DWORD*)(a2 + 20) = v171 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v171) = v172 >> 3;
  v173 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v173 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v173) = v172 >> 11;
  v174 = a1[91];
  if (a1[92] != v174) {
    v175 = 0;
    do {
      v176 = *v15;
      v177 = *(_QWORD*)(v174 + 8 * v175++);
      *v15 = v176 + 1;
      *(_BYTE*)(*v17 + v176) = v177;
      v178 = *v15;
      *v15 = v178 + 1;
      *(_BYTE*)(*v17 + v178) = BYTE1(v177);
      v179 = *v15;
      *v15 = v179 + 1;
      *(_BYTE*)(*v17 + v179) = BYTE2(v177);
      v180 = *v15;
      *v15 = v180 + 1;
      *(_BYTE*)(*v17 + v180) = BYTE3(v177);
      v181 = *v15;
      *v15 = v181 + 1;
      *(_BYTE*)(*v17 + v181) = BYTE4(v177);
      v182 = *v15;
      *v15 = v182 + 1;
      *(_BYTE*)(*v17 + v182) = BYTE5(v177);
      v183 = *v15;
      *v15 = v183 + 1;
      *(_BYTE*)(*v17 + v183) = BYTE6(v177);
      v184 = *v15;
      *v15 = v184 + 1;
      *(_BYTE*)(*v17 + v184) = HIBYTE(v177);
      v174 = a1[91];
    } while (v175 < (a1[92] - v174) >> 3);
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  v185 = *(void (***)(__int64, int*))a2;
  v285 = 0;
  (*v185)(a2, &v285);
  v186 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v186 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v186) = 0;
  v187 = *(int*)(a2 + 20);
  v188 = a1[95] - a1[94];
  *(_DWORD*)(a2 + 20) = v187 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v187) = v188 >> 3;
  v189 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v189 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v189) = v188 >> 11;
  v190 = a1[94];
  if (a1[95] != v190) {
    v191 = 0;
    do {
      v192 = *v15;
      v193 = *(_QWORD*)(v190 + 8 * v191++);
      *v15 = v192 + 1;
      *(_BYTE*)(*v17 + v192) = v193;
      v194 = *v15;
      *v15 = v194 + 1;
      *(_BYTE*)(*v17 + v194) = BYTE1(v193);
      v195 = *v15;
      *v15 = v195 + 1;
      *(_BYTE*)(*v17 + v195) = BYTE2(v193);
      v196 = *v15;
      *v15 = v196 + 1;
      *(_BYTE*)(*v17 + v196) = BYTE3(v193);
      v197 = *v15;
      *v15 = v197 + 1;
      *(_BYTE*)(*v17 + v197) = BYTE4(v193);
      v198 = *v15;
      *v15 = v198 + 1;
      *(_BYTE*)(*v17 + v198) = BYTE5(v193);
      v199 = *v15;
      *v15 = v199 + 1;
      *(_BYTE*)(*v17 + v199) = BYTE6(v193);
      v200 = *v15;
      *v15 = v200 + 1;
      *(_BYTE*)(*v17 + v200) = HIBYTE(v193);
      v190 = a1[94];
    } while (v191 < (a1[95] - v190) >> 3);
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  v201 = *(void (***)(__int64, int*))a2;
  v285 = 0;
  (*v201)(a2, &v285);
  v202 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v202 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v202) = 0;
  v203 = *(int*)(a2 + 20);
  v204 = a1[98] - a1[97];
  *(_DWORD*)(a2 + 20) = v203 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v203) = v204 >> 3;
  v205 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v205 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v205) = v204 >> 11;
  v206 = a1[97];
  if (a1[98] != v206) {
    v207 = 0;
    do {
      v208 = *v15;
      v209 = *(_QWORD*)(v206 + 8 * v207++);
      *v15 = v208 + 1;
      *(_BYTE*)(*v17 + v208) = v209;
      v210 = *v15;
      *v15 = v210 + 1;
      *(_BYTE*)(*v17 + v210) = BYTE1(v209);
      v211 = *v15;
      *v15 = v211 + 1;
      *(_BYTE*)(*v17 + v211) = BYTE2(v209);
      v212 = *v15;
      *v15 = v212 + 1;
      *(_BYTE*)(*v17 + v212) = BYTE3(v209);
      v213 = *v15;
      *v15 = v213 + 1;
      *(_BYTE*)(*v17 + v213) = BYTE4(v209);
      v214 = *v15;
      *v15 = v214 + 1;
      *(_BYTE*)(*v17 + v214) = BYTE5(v209);
      v215 = *v15;
      *v15 = v215 + 1;
      *(_BYTE*)(*v17 + v215) = BYTE6(v209);
      v216 = *v15;
      *v15 = v216 + 1;
      *(_BYTE*)(*v17 + v216) = HIBYTE(v209);
      v206 = a1[97];
    } while (v207 < (a1[98] - v206) >> 3);
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  GameHubData_dba5a0(a1 + 100, a2);
  GameHubData_dba5a0(a1 + 103, a2);
  GameHubData_dba5a0(a1 + 106, a2);
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 21) {
    v217 = *v15;
    v218 = 0xF83E0F83E0F83E1LL * ((__int64)(a1[110] - a1[109]) >> 3);
    *v15 = v217 + 1;
    *(_BYTE*)(*v17 + v217) = v218;
    v219 = *v15;
    *v15 = v219 + 1;
    *(_BYTE*)(*v17 + v219) = BYTE1(v218);
    v220 = a1[109];
    if (a1[110] != v220) {
      v221 = 0;
      v222 = 0;
      do {
        v225 = *(void (***)(__int64, int*))a2;
        v226 = v220 + v221;
        v285 = 0;
        (*v225)(a2, &v285);
        v227 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v227 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v227) = 0;
        v228 = *(unsigned __int8*)(v220 + v221);
        v229 = (v228 & 1) == 0;
        v230 = v228 >> 1;
        if (v229) {
          v231 = v226 + 1;
        }
        else {
          v231 = *(_QWORD*)(v226 + 16);
        }
        if (!v229) {
          LODWORD(v230) = *(_DWORD*)(v226 + 8);
        }
        if ((_DWORD)v230 != 0) {
          v232 = *v15;
          v233 = (unsigned int)(v230 + 1);
          *v15 = v232 + 1;
          *(_BYTE*)(*v17 + v232) = v230 + 1;
          v234 = *v15;
          *v15 = v234 + 1;
          *(_BYTE*)(*v17 + v234) = BYTE1(v233);
          if ((v230 & 0x80000000) == 0) {
            memmove(*v17 + *v15, v231, v233);
            *v15 += v233;
          }
        }
        else {
          v223 = *v15;
          *v15 = v223 + 1;
          *(_BYTE*)(*v17 + v223) = 0;
          v224 = *v15;
          *v15 = v224 + 1;
          *(_BYTE*)(*v17 + v224) = 0;
        }
        GameRoutine_713600(v220 + v221 + 24, a2);
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
        v220 = a1[109];
        ++v222;
        v221 += 264;
      } while (0xF83E0F83E0F83E1LL * ((a1[110] - v220) >> 3) > v222);
    }
  }
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 11) {
    v235 = *v15;
    v236 = a1[41];
    *v15 = v235 + 1;
    *(_BYTE*)(*v17 + v235) = v236;
    v237 = *v15;
    *v15 = v237 + 1;
    *(_BYTE*)(*v17 + v237) = BYTE1(v236);
    v238 = *v15;
    *v15 = v238 + 1;
    *(_BYTE*)(*v17 + v238) = BYTE2(v236);
    v239 = *v15;
    *v15 = v239 + 1;
    *(_BYTE*)(*v17 + v239) = BYTE3(v236);
    v240 = *v15;
    *v15 = v240 + 1;
    *(_BYTE*)(*v17 + v240) = BYTE4(v236);
    v241 = *v15;
    *v15 = v241 + 1;
    *(_BYTE*)(*v17 + v241) = BYTE5(v236);
    v242 = *v15;
    *v15 = v242 + 1;
    *(_BYTE*)(*v17 + v242) = BYTE6(v236);
    v243 = *v15;
    *v15 = v243 + 1;
    *(_BYTE*)(*v17 + v243) = HIBYTE(v236);
  }
  v244 = *v15;
  v245 = *((unsigned int*)a1 + 89);
  *v15 = v244 + 1;
  *(_BYTE*)(*v17 + v244) = v245;
  v246 = *v15;
  *v15 = v246 + 1;
  *(_BYTE*)(*v17 + v246) = BYTE1(v245);
  v247 = *v15;
  *v15 = v247 + 1;
  *(_BYTE*)(*v17 + v247) = BYTE2(v245);
  v248 = *v15;
  *v15 = v248 + 1;
  *(_BYTE*)(*v17 + v248) = BYTE3(v245);
  if ((int)v245 >= 1) {
    memmove(*v17 + *v15, a1[43], v245);
    *v15 += v245;
  }
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 13) {
    v249 = *v15;
    v250 = *((unsigned int*)a1 + 121);
    *v15 = v249 + 1;
    *(_BYTE*)(*v17 + v249) = v250;
    v251 = *v15;
    *v15 = v251 + 1;
    *(_BYTE*)(*v17 + v251) = BYTE1(v250);
    v252 = *v15;
    *v15 = v252 + 1;
    *(_BYTE*)(*v17 + v252) = BYTE2(v250);
    v253 = *v15;
    *v15 = v253 + 1;
    *(_BYTE*)(*v17 + v253) = BYTE3(v250);
    if ((int)v250 >= 1) {
      memmove(*v17 + *v15, a1[59], v250);
      *v15 += v250;
    }
  }
  if ((*(int (**)(_QWORD*))(*a1 + 40LL))(a1) >= 17) {
    v254 = *v15;
    v255 = *((unsigned int*)a1 + 153);
    *v15 = v254 + 1;
    *(_BYTE*)(*v17 + v254) = v255;
    v256 = *v15;
    *v15 = v256 + 1;
    *(_BYTE*)(*v17 + v256) = BYTE1(v255);
    v257 = *v15;
    *v15 = v257 + 1;
    *(_BYTE*)(*v17 + v257) = BYTE2(v255);
    v258 = *v15;
    *v15 = v258 + 1;
    *(_BYTE*)(*v17 + v258) = BYTE3(v255);
    if ((int)v255 >= 1) {
      memmove(*v17 + *v15, a1[75], v255);
      *v15 += v255;
    }
  }
  result = (*(__int64 (**)(_QWORD*))(*a1 + 40LL))(a1);
  if ((int)result > 17) {
    v260 = *(void (***)(__int64, int*))a2;
    v285 = 0;
    (*v260)(a2, &v285);
    v261 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v261 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v261) = 0;
    v262 = *(int*)(a2 + 20);
    v263 = a1[112];
    *(_DWORD*)(a2 + 20) = v262 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v262) = v263;
    v264 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v264 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v264) = BYTE1(v263);
    v265 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v265 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v265) = BYTE2(v263);
    v266 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v266 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v266) = BYTE3(v263);
    v267 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v267 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v267) = BYTE4(v263);
    v268 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v268 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v268) = BYTE5(v263);
    v269 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v269 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v269) = BYTE6(v263);
    v270 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v270 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v270) = HIBYTE(v263);
    v271 = *(int*)(a2 + 20);
    v272 = a1[114] - a1[113];
    *(_DWORD*)(a2 + 20) = v271 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v271) = v272 >> 3;
    v273 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v273 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v273) = v272 >> 11;
    v274 = a1[113];
    if (a1[114] != v274) {
      v275 = 0;
      do {
        v276 = *v15;
        v277 = *(_QWORD*)(v274 + 8 * v275++);
        *v15 = v276 + 1;
        *(_BYTE*)(*v17 + v276) = v277;
        v278 = *v15;
        *v15 = v278 + 1;
        *(_BYTE*)(*v17 + v278) = BYTE1(v277);
        v279 = *v15;
        *v15 = v279 + 1;
        *(_BYTE*)(*v17 + v279) = BYTE2(v277);
        v280 = *v15;
        *v15 = v280 + 1;
        *(_BYTE*)(*v17 + v280) = BYTE3(v277);
        v281 = *v15;
        *v15 = v281 + 1;
        *(_BYTE*)(*v17 + v281) = BYTE4(v277);
        v282 = *v15;
        *v15 = v282 + 1;
        *(_BYTE*)(*v17 + v282) = BYTE5(v277);
        v283 = *v15;
        *v15 = v283 + 1;
        *(_BYTE*)(*v17 + v283) = BYTE6(v277);
        v284 = *v15;
        *v15 = v284 + 1;
        *(_BYTE*)(*v17 + v284) = HIBYTE(v277);
        v274 = a1[113];
      } while (v275 < (a1[114] - v274) >> 3);
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  return result;
}

__int64 GameHubData_dba5a0(__int64* a1, __int64 a2)
{
  void (**v2)(__int64, int*);
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  void (**v13)(__int64, int*);
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v30;
  int v31;

  v2 = *(void (***)(__int64, int*))a2;
  v30 = 0;
  (*v2)(a2, &v30);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = 0;
  v6 = *(int*)(a2 + 20);
  v7 = a1[1] - *a1;
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v7 >> 4;
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v7 >> 12;
  v9 = *a1;
  if (a1[1] != *a1) {
    v10 = 0;
    v11 = 0;
    do {
      v12 = (__int64*)(v9 + v10);
      v13 = *(void (***)(__int64, int*))a2;
      v31 = 0;
      (*v13)(a2, &v31);
      v14 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v14 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = 0;
      v15 = *(int*)(a2 + 20);
      v16 = *v12;
      *(_DWORD*)(a2 + 20) = v15 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v16;
      v17 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v17 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE1(v16);
      v18 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v18 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE2(v16);
      v19 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v19 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE3(v16);
      v20 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v20 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE4(v16);
      v21 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v21 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE5(v16);
      v22 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v22 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE6(v16);
      v23 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v23 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = HIBYTE(v16);
      v24 = *(int*)(a2 + 20);
      LOBYTE(v16) = *((_BYTE*)v12 + 8);
      *(_DWORD*)(a2 + 20) = v24 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v16;
      v25 = *(int*)(a2 + 20);
      LODWORD(v16) = *((_DWORD*)v12 + 3);
      *(_DWORD*)(a2 + 20) = v25 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v16;
      v26 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v26 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = BYTE1(v16);
      v27 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v27 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = BYTE2(v16);
      v28 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v28 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE3(v16);
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
      v9 = *a1;
      ++v11;
      v10 += 16;
    } while (v11 < (a1[1] - *a1) >> 4);
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

#pragma GCC visibility pop
