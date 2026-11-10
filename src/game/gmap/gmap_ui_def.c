#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136ad70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1596b00(_QWORD);
__int64 GameRoutine_174d580(_QWORD, _QWORD, _QWORD, float);
__int64 GameSideStoryData_12b50c0(_QWORD, _QWORD);
__int64 GameSubquestData_1256ec0(void);
__int64 GameSubquestData_125a1a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15635a0(_QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(void);
__int64 game_gmap_SpotMgr_FindSpot(void);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aeeeee;
extern __int64 (*GameData_2075838[])();
extern __int64 (*GameData_20758c8[])();
extern __int64 (*GameData_2075948[])();
extern __int64 (*GameData_20759c8[])();
extern __int64 (*GameData_2075a48[])();
extern __int64 (*GameData_2075ac8[])();
extern __int64 (*GameData_2075b48[])();
extern __int64 (*GameData_2075bc8[])();
extern __int64 (*GameData_2075c48[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_2130e20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
extern char* GameData_2075cb8[16];
extern char* GameData_2075cf8[8];
extern char* GameData_2075d18[4];
void __attribute__((noreturn)) GameRoutine_1654e20(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
bool game_gmap_GmapUIDef_SetQuestIcon(__int64 a1, __int64 a2, char a3);
bool GmapUIDef_1653b80(__int64* a1, int a2, float a3);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda2_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda3_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda4_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda5_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda6_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda7_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda8_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda9_Invoke(__int64 a1, _QWORD* a2);
__int64 GameRoutine_ae2330(_QWORD);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
extern __int64 GameData_21c9e48;
void __attribute__((noreturn)) GameRoutine_1655af0(void);
__int64 GmapUIDef_1654a80(__int64 a1, __int64 a2);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 Impl_13287c0(_QWORD);
__int64 game_HashString_alt2(_QWORD) __asm__("game_HashString");
__int64 game_gmap_SpotMgr_FindSpot_alt1(_QWORD) __asm__(
    "game_gmap_SpotMgr_FindSpot");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_1654c60(void);
__attribute__((swiftcall)) void GmapUIDef_1654700(PSEUDO_X8 x8_, __int64 a1);
extern __int64 GameData_21c96e8;
extern __int64 GameData_22416c0;
__int64 GmapUIDef_1654300(__int64 result, __int64 a2, char a3);

bool game_gmap_GmapUIDef_SetQuestIcon(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 (***v32)();
  __int64 (**v33)();
  unsigned __int64 v34;
  __int64 v35;
  char* v36;
  char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  char v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 (***v47)();
  __int64 v48;
  __int64 (***v49)();
  __int64 v50;
  char* v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 (***v59)();
  __int64 v60;
  __int64 (***v61)();
  __int64 v62;
  char* v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  __int64* v67;
  __int64 v68;
  int v69;
  __int64 v70;
  unsigned __int64 v71;
  char* v72;
  __int64 v73;
  char* v74;
  char* v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  char v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  char* v89;
  __int64 v90;
  _QWORD* v91;
  __int64* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  __int64* v97;
  unsigned __int64 v98;
  __int64 (***v99)();
  __int64 (**v100)();
  unsigned __int64 v101;
  _QWORD* v102;
  char* v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  _QWORD* v108;
  __int64 v109;
  __int64 v110;
  __int64 (***v111)();
  __int64 v112;
  __int64 (***v113)();
  __int64 v114;
  __int64 v115;
  __int64* v116;
  __int64* v117;
  __int64 v118;
  unsigned int v119;
  char* v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64* v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  __int64 (***v129)();
  __int64 v130;
  __int64 (***v131)();
  __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  _QWORD* v139;
  __int64 (***v140)();
  __int64 v141;
  __int64 (***v142)();
  unsigned __int64 v143;
  unsigned __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  _QWORD* v147;
  __int64 (***v148)();
  __int64 v149;
  __int64 (***v150)();
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  _BYTE* v156;
  __int64 v157;
  __int64 v158;
  char v159;
  unsigned __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  unsigned __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  char v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  char* v178;
  char* v179;
  unsigned __int64 v180;
  __int64 v181;
  char* v182;
  unsigned __int64 v183;
  char* v184;
  __int64 v185;
  char* v186;
  char* v187;
  unsigned __int64 v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  char* v194;
  __int64 v195;
  __int64 v196;
  char* v197;
  __int64 v198;
  char* v199;
  __int64 v200;
  char* v201;
  __int64 v202;
  __int64 v203;
  int v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  char v208;
  __int64* v210;
  __int64* v211;
  __int64 v212;

  v4 = *(_QWORD*)(a1 + 32);
  v3 = *(_QWORD*)(a1 + 40);
  if (v4 != v3) {
    do {
      v21 = *(_QWORD**)(v3 - 16);
      v22 = v3 - 48;
      if ((_QWORD*)(v3 - 48) == v21) {
        v20 = 32;
      }
      else {
        if (v21 == nullptr) {
          goto LABEL_20;
        }
        v20 = 40;
      }
      (*(void (**)(void*))(*v21 + v20))(v21);
    LABEL_20:
      v3 = v22;
    } while (v22 != v4);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_BYTE*)(a1 + 64) = 1;
  v8 = *(_QWORD*)(a2 + 120);
  if (v8 != 0 && game_GameModeData_instance_ != 0) {
    v9 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v9 != 0 && v8 == *(_QWORD*)(v9 + 200)) {
      goto LABEL_15;
    }
  }
  v10 = *(_QWORD*)(*GameData_212c790 + 8);
  v11 = *(_QWORD**)(v10 + 8);
  v12 = *(_QWORD**)(v10 + 16);
  while (1) {
    if (v11 == v12) {
      goto LABEL_95;
    }
    v13 = (_QWORD*)*v11;
    if (*(_QWORD*)*v11 == a2) {
      v14 = v13[12];
      if (v14 != 0 && (unsigned int)*(unsigned __int8*)(v14 + 32) - 3 < 2) {
        break;
      }
    }
    ++v11;
  }
  if ((v13[68] & 8) != 0) {
  LABEL_15:
    v211 = (__int64*)&GameData_1aeeeee;
    v15 = game_HashString();
    v210 = (__int64*)v15;
    if (game_GameModeData_instance_ == 0 ||
        (v15 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v210)) == 0 ||
        *(_DWORD*)(v15 + 32) == 0) {
      v16 = *(_QWORD*)(*GameData_212c780 + 8);
      v17 = *(_QWORD*)(v16 + 48);
      v18 = *(_QWORD*)(v16 + 56);
      if (v17 != v18) {
        v19 = 0;
        do {
          v23 = *(_QWORD*)(*(_QWORD*)v17 + 120LL);
          v24 = v23 == 0 || game_GameModeData_instance_ == 0;
          if (!v24 &&
              (v25 = *(_QWORD*)(game_GameModeData_instance_ + 24)) != 0 &&
              v23 == *(_QWORD*)(v25 + 200)) {
          LABEL_24:
            ++v19;
          }
          else {
            v26 = *(_QWORD*)(*GameData_212c790 + 8);
            v27 = *(_QWORD**)(v26 + 8);
            v28 = *(_QWORD**)(v26 + 16);
            while (v27 != v28) {
              v29 = (_QWORD*)*v27;
              if (*(_QWORD*)*v27 == *(_QWORD*)v17) {
                v30 = v29[12];
                if (v30 != 0 &&
                    (unsigned int)*(unsigned __int8*)(v30 + 32) - 3 < 2) {
                  if ((v29[68] & 8) != 0) {
                    goto LABEL_24;
                  }
                  break;
                }
              }
              ++v27;
            }
          }
          v17 += 8;
        } while (v17 != v18);
        if (v19 > 1) {
          v32 = *(__int64 (****)())(a1 + 40);
          v31 = *(_QWORD*)(a1 + 48);
          if ((unsigned __int64)v32 < v31) {
            v33 = GameData_2075838;
          LABEL_45:
            *v32 = v33;
            v32[4] = (__int64 (**)())v32;
            v35 = (__int64)(v32 + 6);
          LABEL_94:
            *(_QWORD*)(a1 + 40) = v35;
            *(_BYTE*)(a1 + 64) = 1;
            goto LABEL_95;
          }
          v36 = *(char**)(a1 + 32);
          v52 = (char*)((char*)v32 - v36);
          v53 = 1 - 0x5555555555555555LL * (((char*)v32 - v36) >> 4);
          if (v53 > 0x555555555555555LL) {
            goto LABEL_366;
          }
          v54 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v31 - (_QWORD)v36) >> 4);
          if (2 * v54 > v53) {
            v53 = 2 * v54;
          }
          if (v54 >= 0x2AAAAAAAAAAAAAALL) {
            v55 = 0x555555555555555LL;
          }
          else {
            v55 = v53;
          }
          if (v55 > 0x555555555555555LL) {
            goto LABEL_367;
          }
          v56 = 3 * v55;
          v42 = a3;
          v57 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v55, 16, 0);
          v58 = &v52[v57];
          v45 = v57 + 16 * v56;
          v46 = v57;
          *(_QWORD*)v58 = GameData_2075838;
          v35 = (__int64)&v52[v57 + 48];
          *((_QWORD*)v58 + 4) = v58;
          if (v36 != (char*)v32) {
            v59 = (__int64 (***)())v36;
            v60 = v57;
            do {
              v61 = (__int64 (***)())v59[4];
              if (v61 != nullptr) {
                if (v59 == v61) {
                  *(_QWORD*)(v60 + 32) = v60;
                  ((void (*)(__int64 (***)(), __int64))(*v61)[3])(v61, v60);
                }
                else {
                  *(_QWORD*)(v60 + 32) = v61;
                  v59[4] = nullptr;
                }
              }
              else {
                *(_QWORD*)(v60 + 32) = 0;
              }
              v59 += 6;
              v60 += 48;
            } while (v59 != v32);
            while (1) {
              v63 = *((char**)v36 + 4);
              if (v36 == v63) {
                v62 = 32;
              }
              else {
                if (v63 == nullptr) {
                  goto LABEL_84;
                }
                v62 = 40;
              }
              (*(void (**)(void*))(*(_QWORD*)v63 + v62))((void*)v63);
            LABEL_84:
              v36 += 48;
              if (v36 == (char*)v32) {
                goto LABEL_88;
              }
            }
          }
        LABEL_89:
          *(_QWORD*)(a1 + 32) = v46;
          *(_QWORD*)(a1 + 40) = v35;
          *(_QWORD*)(a1 + 48) = v45;
          if (v36 != nullptr) {
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64);
          }
          a3 = v42;
          goto LABEL_94;
        }
      }
      v32 = *(__int64 (****)())(a1 + 40);
      v34 = *(_QWORD*)(a1 + 48);
      if ((unsigned __int64)v32 < v34) {
        v33 = GameData_20758c8;
        goto LABEL_45;
      }
      v36 = *(char**)(a1 + 32);
      v37 = (char*)((char*)v32 - v36);
      v38 = 1 - 0x5555555555555555LL * (((char*)v32 - v36) >> 4);
      if (v38 > 0x555555555555555LL) {
        goto LABEL_366;
      }
      v39 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v34 - (_QWORD)v36) >> 4);
      if (2 * v39 > v38) {
        v38 = 2 * v39;
      }
      if (v39 >= 0x2AAAAAAAAAAAAAALL) {
        v40 = 0x555555555555555LL;
      }
      else {
        v40 = v38;
      }
      if (v40 > 0x555555555555555LL) {
        goto LABEL_367;
      }
      v41 = 3 * v40;
      v42 = a3;
      v43 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v40, 16, 0);
      v44 = &v37[v43];
      v45 = v43 + 16 * v41;
      v46 = v43;
      *(_QWORD*)v44 = GameData_20758c8;
      v35 = (__int64)&v37[v43 + 48];
      *((_QWORD*)v44 + 4) = v44;
      if (v36 == (char*)v32) {
        goto LABEL_89;
      }
      v47 = (__int64 (***)())v36;
      v48 = v43;
      do {
        v49 = (__int64 (***)())v47[4];
        if (v49 != nullptr) {
          if (v47 == v49) {
            *(_QWORD*)(v48 + 32) = v48;
            ((void (*)(__int64 (***)(), __int64))(*v49)[3])(v49, v48);
          }
          else {
            *(_QWORD*)(v48 + 32) = v49;
            v47[4] = nullptr;
          }
        }
        else {
          *(_QWORD*)(v48 + 32) = 0;
        }
        v47 += 6;
        v48 += 48;
      } while (v47 != v32);
      while (1) {
        v51 = *((char**)v36 + 4);
        if (v36 == v51) {
          v50 = 32;
        }
        else {
          if (v51 == nullptr) {
            goto LABEL_63;
          }
          v50 = 40;
        }
        (*(void (**)(void*))(*(_QWORD*)v51 + v50))((void*)v51);
      LABEL_63:
        v36 += 48;
        if (v36 == (char*)v32) {
        LABEL_88:
          v36 = *(char**)(a1 + 32);
          goto LABEL_89;
        }
      }
    }
  }
LABEL_95:
  v211 = nullptr;
  v212 = 0;
  v210 = nullptr;
  v15 = GameSideStoryData_12b50c0(*(_QWORD*)GameData_212c7b8[0], &v210);
  v66 = v210;
  v65 = v211;
  if (v210 == v211) {
  LABEL_103:
    v69 = 0;
    if (v66 == nullptr) {
      goto LABEL_107;
    }
    goto LABEL_104;
  }
  v67 = v210;
  while (1) {
    v68 = *v67;
    v15 = *(_QWORD*)(*(_QWORD*)*v67 + 200LL);
    if (v15 != 0) {
      v15 = game_gmap_SpotMgr_FindSpot();
      if (v15 == a2 && *(_BYTE*)(v68 + 8) == 3) {
        break;
      }
    }
    if (++v67 == v65) {
      goto LABEL_103;
    }
  }
  v69 = 1;
  if (v66 != nullptr) {
  LABEL_104:
    v211 = v66;
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    v15 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v70);
  }
LABEL_107:
  if (v69 != 0) {
    v72 = *(char**)(a1 + 40);
    v71 = *(_QWORD*)(a1 + 48);
    if ((unsigned __int64)v72 < v71) {
      *((_QWORD*)v72 + 4) = v72;
      v73 = (__int64)(v72 + 48);
      *(_QWORD*)v72 = GameData_2075948;
    LABEL_137:
      *(_QWORD*)(a1 + 40) = v73;
      *(_BYTE*)(a1 + 64) = 1;
      goto LABEL_138;
    }
    v74 = *(char**)(a1 + 32);
    v75 = (char*)(v72 - v74);
    v76 = 1 - 0x5555555555555555LL * ((v72 - v74) >> 4);
    if (v76 > 0x555555555555555LL) {
      goto LABEL_366;
    }
    v77 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v71 - (_QWORD)v74) >> 4);
    if (2 * v77 > v76) {
      v76 = 2 * v77;
    }
    if (v77 >= 0x2AAAAAAAAAAAAAALL) {
      v78 = 0x555555555555555LL;
    }
    else {
      v78 = v76;
    }
    if (v78 > 0x555555555555555LL) {
      goto LABEL_367;
    }
    v79 = 3 * v78;
    v80 = a3;
    v81 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         48 * v78, 16, 0);
    v82 = &v75[v81];
    v83 = v81 + 16 * v79;
    v84 = v81;
    *(_QWORD*)v82 = GameData_2075948;
    v73 = (__int64)&v75[v81 + 48];
    *((_QWORD*)v82 + 4) = v82;
    if (v74 == v72) {
    LABEL_132:
      *(_QWORD*)(a1 + 32) = v84;
      *(_QWORD*)(a1 + 40) = v73;
      *(_QWORD*)(a1 + 48) = v83;
      if (v74 != nullptr) {
        v90 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v90 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v90);
      }
      a3 = v80;
      goto LABEL_137;
    }
    v85 = v74;
    v86 = v81;
    do {
      v87 = *((char**)v85 + 4);
      if (v87 != nullptr) {
        if (v85 == v87) {
          *(_QWORD*)(v86 + 32) = v86;
          (*(void (**)(char*, __int64))(*(_QWORD*)v87 + 24LL))(v87, v86);
        }
        else {
          *(_QWORD*)(v86 + 32) = v87;
          *((_QWORD*)v85 + 4) = 0;
        }
      }
      else {
        *(_QWORD*)(v86 + 32) = 0;
      }
      v85 += 48;
      v86 += 48;
    } while (v85 != v72);
    while (1) {
      v89 = *((char**)v74 + 4);
      if (v74 == v89) {
        v88 = 32;
      }
      else {
        if (v89 == nullptr) {
          goto LABEL_127;
        }
        v88 = 40;
      }
      (*(void (**)(void*))(*(_QWORD*)v89 + v88))((void*)v89);
    LABEL_127:
      v74 += 48;
      if (v74 == v72) {
        v74 = *(char**)(a1 + 32);
        goto LABEL_132;
      }
    }
  }
LABEL_138:
  v211 = nullptr;
  v212 = 0;
  v210 = nullptr;
  v91 = (_QWORD*)GameData_212c7b0[0];
  v15 = GameSubquestData_125a1a0(*(_QWORD*)GameData_212c7b0[0], &v210, a2, 0);
  v93 = v210;
  v92 = v211;
  if (v210 != nullptr) {
    v211 = v210;
    v94 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v94 = 56;
    }
    v15 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v94);
  }
  if (v92 == v93) {
    goto LABEL_270;
  }
  v95 = *v91;
  v211 = nullptr;
  v212 = 0;
  v210 = nullptr;
  v15 = GameSubquestData_125a1a0(v95, &v210, a2, 0);
  v96 = v210;
  v97 = v210;
  if (v210 != v211) {
    do {
      if (*(_BYTE*)(*(_QWORD*)*v97 + 112LL) == 7) {
        goto LABEL_147;
      }
      ++v97;
    } while (v97 != v211);
    v97 = v211;
  LABEL_147:
    while (*(_BYTE*)(*(_QWORD*)*v96 + 112LL) != 5) {
      if (++v96 == v211) {
        v96 = v211;
        break;
      }
    }
  }
  if (v97 != v211) {
    v99 = *(__int64 (****)())(a1 + 40);
    v98 = *(_QWORD*)(a1 + 48);
    if ((unsigned __int64)v99 < v98) {
      v100 = GameData_20759c8;
    LABEL_156:
      *v99 = v100;
      v99[4] = (__int64 (**)())v99;
      v102 = v99 + 6;
      goto LABEL_265;
    }
    v103 = *(char**)(a1 + 32);
    v104 = 1 - 0x5555555555555555LL * (((char*)v99 - v103) >> 4);
    if (v104 > 0x555555555555555LL) {
      goto LABEL_366;
    }
    v105 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v98 - (_QWORD)v103) >> 4);
    if (2 * v105 > v104) {
      v104 = 2 * v105;
    }
    if (v105 >= 0x2AAAAAAAAAAAAAALL) {
      v106 = 0x555555555555555LL;
    }
    else {
      v106 = v104;
    }
    if (v106 > 0x555555555555555LL) {
      goto LABEL_367;
    }
    v107 = 3 * v106;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         48 * v106, 16, 0);
    v108 = (_QWORD*)(v15 + (char*)v99 - v103);
    v109 = v15 + 16 * v107;
    v110 = v15;
    *v108 = GameData_20759c8;
    v102 = v108 + 6;
    v108[4] = v108;
    if (v103 == (char*)v99) {
      goto LABEL_180;
    }
    v111 = (__int64 (***)())v103;
    v112 = v15;
    do {
      v113 = (__int64 (***)())v111[4];
      if (v113 != nullptr) {
        if (v111 == v113) {
          *(_QWORD*)(v112 + 32) = v112;
          ((void (*)(__int64 (***)(), __int64))(*v113)[3])(v113, v112);
        }
        else {
          *(_QWORD*)(v112 + 32) = v113;
          v111[4] = nullptr;
        }
      }
      else {
        *(_QWORD*)(v112 + 32) = 0;
      }
      v111 += 6;
      v112 += 48;
    } while (v111 != v99);
    v91 = (_QWORD*)GameData_212c7b0[0];
    while (1) {
      v15 = *((_QWORD*)v103 + 4);
      if (v103 == (char*)v15) {
        v114 = 32;
      }
      else {
        if (v15 == 0) {
          goto LABEL_175;
        }
        v114 = 40;
      }
      v15 = (*(__int64 (**)(void*))(*(_QWORD*)v15 + v114))((void*)v15);
    LABEL_175:
      v103 += 48;
      if (v103 == (char*)v99) {
        v103 = *(char**)(a1 + 32);
      LABEL_180:
        *(_QWORD*)(a1 + 32) = v110;
        *(_QWORD*)(a1 + 40) = v102;
        *(_QWORD*)(a1 + 48) = v109;
        if (v103 != nullptr) {
          v115 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
          goto LABEL_262;
        }
        goto LABEL_265;
      }
    }
  }
  if (v96 != v211) {
    v99 = *(__int64 (****)())(a1 + 40);
    v101 = *(_QWORD*)(a1 + 48);
    if ((unsigned __int64)v99 < v101) {
      v100 = GameData_2075a48;
      goto LABEL_156;
    }
    v120 = *(char**)(a1 + 32);
    v121 = 1 - 0x5555555555555555LL * (((char*)v99 - v120) >> 4);
    if (v121 > 0x555555555555555LL) {
      goto LABEL_366;
    }
    v122 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v101 - (_QWORD)v120) >> 4);
    if (2 * v122 > v121) {
      v121 = 2 * v122;
    }
    if (v122 >= 0x2AAAAAAAAAAAAAALL) {
      v123 = 0x555555555555555LL;
    }
    else {
      v123 = v121;
    }
    if (v123 > 0x555555555555555LL) {
      goto LABEL_367;
    }
    v124 = 3 * v123;
    v125 = (__int64*)fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         48 * v123, 16, 0);
    v126 = (_QWORD*)(v15 + (char*)v99 - v120);
    v127 = v15 + 16 * v124;
    v128 = v15;
    *v126 = GameData_2075a48;
    v102 = v126 + 6;
    v126[4] = v126;
    if (v120 != (char*)v99) {
      v129 = (__int64 (***)())v120;
      v130 = v15;
      do {
        v131 = (__int64 (***)())v129[4];
        if (v131 != nullptr) {
          if (v129 == v131) {
            *(_QWORD*)(v130 + 32) = v130;
            ((void (*)(__int64 (***)(), __int64))(*v131)[3])(v131, v130);
          }
          else {
            *(_QWORD*)(v130 + 32) = v131;
            v129[4] = nullptr;
          }
        }
        else {
          *(_QWORD*)(v130 + 32) = 0;
        }
        v129 += 6;
        v130 += 48;
      } while (v129 != v99);
      v91 = (_QWORD*)GameData_212c7b0[0];
      v125 = (__int64*)fw_memory_g_heap_manager_ptr;
      while (1) {
        v15 = *((_QWORD*)v120 + 4);
        if (v120 == (char*)v15) {
          v132 = 32;
        }
        else {
          if (v15 == 0) {
            goto LABEL_206;
          }
          v132 = 40;
        }
        v15 = (*(__int64 (**)(void*))(*(_QWORD*)v15 + v132))((void*)v15);
      LABEL_206:
        v120 += 48;
        if (v120 == (char*)v99) {
          goto LABEL_259;
        }
      }
    }
    goto LABEL_244;
  }
  v15 = GameSubquestData_125a1a0(*v91, &v210, a2, 0);
  v116 = v210;
  if (v210 == v211) {
    goto LABEL_266;
  }
  v117 = v210;
  while (1) {
    v118 = *v117++;
    v119 = *(unsigned __int16*)(*(_QWORD*)v118 + 128LL);
    if (v119 >= 2) {
      break;
    }
    if (v119 == 1) {
      v99 = *(__int64 (****)())(a1 + 40);
      v134 = *(_QWORD*)(a1 + 48);
      if ((unsigned __int64)v99 < v134) {
        v100 = GameData_2075b48;
        goto LABEL_156;
      }
      v120 = *(char**)(a1 + 32);
      v143 = 1 - 0x5555555555555555LL * (((char*)v99 - v120) >> 4);
      if (v143 > 0x555555555555555LL) {
        goto LABEL_366;
      }
      v144 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v134 - (_QWORD)v120) >> 4);
      if (2 * v144 > v143) {
        v143 = 2 * v144;
      }
      if (v144 >= 0x2AAAAAAAAAAAAAALL) {
        v145 = 0x555555555555555LL;
      }
      else {
        v145 = v143;
      }
      if (v145 > 0x555555555555555LL) {
        goto LABEL_367;
      }
      v146 = 3 * v145;
      v125 = (__int64*)fw_memory_g_heap_manager_ptr;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v145, 16, 0);
      v147 = (_QWORD*)(v15 + (char*)v99 - v120);
      v127 = v15 + 16 * v146;
      v128 = v15;
      *v147 = GameData_2075b48;
      v102 = v147 + 6;
      v147[4] = v147;
      if (v120 == (char*)v99) {
        goto LABEL_244;
      }
      v148 = (__int64 (***)())v120;
      v149 = v15;
      do {
        v150 = (__int64 (***)())v148[4];
        if (v150 != nullptr) {
          if (v148 == v150) {
            *(_QWORD*)(v149 + 32) = v149;
            ((void (*)(__int64 (***)(), __int64))(*v150)[3])(v150, v149);
          }
          else {
            *(_QWORD*)(v149 + 32) = v150;
            v148[4] = nullptr;
          }
        }
        else {
          *(_QWORD*)(v149 + 32) = 0;
        }
        v148 += 6;
        v149 += 48;
      } while (v148 != v99);
      v91 = (_QWORD*)GameData_212c7b0[0];
      v125 = (__int64*)fw_memory_g_heap_manager_ptr;
      while (2) {
        v15 = *((_QWORD*)v120 + 4);
        if (v120 != (char*)v15) {
          if (v15 != 0) {
            v152 = 40;
          LABEL_254:
            v15 = (*(__int64 (**)(void*))(*(_QWORD*)v15 + v152))((void*)v15);
          }
          v120 += 48;
          if (v120 == (char*)v99) {
            goto LABEL_259;
          }
          continue;
        }
        break;
      }
      v152 = 32;
      goto LABEL_254;
    }
    if (v117 == v211) {
      goto LABEL_266;
    }
  }
  v99 = *(__int64 (****)())(a1 + 40);
  v133 = *(_QWORD*)(a1 + 48);
  if ((unsigned __int64)v99 < v133) {
    v100 = GameData_2075ac8;
    goto LABEL_156;
  }
  v120 = *(char**)(a1 + 32);
  v135 = 1 - 0x5555555555555555LL * (((char*)v99 - v120) >> 4);
  if (v135 > 0x555555555555555LL) {
    goto LABEL_366;
  }
  v136 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v133 - (_QWORD)v120) >> 4);
  if (2 * v136 > v135) {
    v135 = 2 * v136;
  }
  if (v136 >= 0x2AAAAAAAAAAAAAALL) {
    v137 = 0x555555555555555LL;
  }
  else {
    v137 = v135;
  }
  if (v137 > 0x555555555555555LL) {
    goto LABEL_367;
  }
  v138 = 3 * v137;
  v125 = (__int64*)fw_memory_g_heap_manager_ptr;
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48 * v137, 16, 0);
  v139 = (_QWORD*)(v15 + (char*)v99 - v120);
  v127 = v15 + 16 * v138;
  v128 = v15;
  *v139 = GameData_2075ac8;
  v102 = v139 + 6;
  v139[4] = v139;
  if (v120 == (char*)v99) {
  LABEL_244:
    v91 = (_QWORD*)GameData_212c7b0[0];
    goto LABEL_260;
  }
  v140 = (__int64 (***)())v120;
  v141 = v15;
  do {
    v142 = (__int64 (***)())v140[4];
    if (v142 != nullptr) {
      if (v140 == v142) {
        *(_QWORD*)(v141 + 32) = v141;
        ((void (*)(__int64 (***)(), __int64))(*v142)[3])(v142, v141);
      }
      else {
        *(_QWORD*)(v141 + 32) = v142;
        v140[4] = nullptr;
      }
    }
    else {
      *(_QWORD*)(v141 + 32) = 0;
    }
    v140 += 6;
    v141 += 48;
  } while (v140 != v99);
  v91 = (_QWORD*)GameData_212c7b0[0];
  v125 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    v15 = *((_QWORD*)v120 + 4);
    if (v120 == (char*)v15) {
      v151 = 32;
    LABEL_247:
      v15 = (*(__int64 (**)(void*))(*(_QWORD*)v15 + v151))((void*)v15);
      goto LABEL_248;
    }
    if (v15 != 0) {
      v151 = 40;
      goto LABEL_247;
    }
  LABEL_248:
    v120 += 48;
  } while (v120 != (char*)v99);
LABEL_259:
  v120 = *(char**)(a1 + 32);
LABEL_260:
  *(_QWORD*)(a1 + 32) = v128;
  *(_QWORD*)(a1 + 40) = v102;
  *(_QWORD*)(a1 + 48) = v127;
  if (v120 != nullptr) {
    v115 = *v125;
  LABEL_262:
    v153 = 128;
    if (*(_QWORD*)(v115 + 200) == 0) {
      v153 = 56;
    }
    v15 = nn_mem_StandardAllocator_Free(v115 + v153);
  }
LABEL_265:
  v116 = v210;
  *(_QWORD*)(a1 + 40) = v102;
  *(_BYTE*)(a1 + 64) = 1;
LABEL_266:
  if (v116 != nullptr) {
    v211 = v116;
    v154 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v154 = 56;
    }
    v15 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v154);
  }
LABEL_270:
  v155 = *(_QWORD*)(a2 + 120);
  if (v155 != 0) {
    v156 = *(_BYTE**)(v155 + 112);
    if (v156 != nullptr && *v156 != 0) {
      v157 = *v91;
      if (game_GameModeData_instance_ != 0) {
        v15 = GameSubquestData_125b8e0(v157);
        if (v15 == 0) {
          goto LABEL_309;
        }
      }
      else {
        v15 = GameSubquestData_125b8e0(v157);
        if (v15 == 0) {
          goto LABEL_309;
        }
      }
      if ((*(_BYTE*)(v15 + 9) & 0xFE) != 4) {
        v158 = v15;
        v15 = GameSubquestData_1256ec0();
        if ((v15 & 1) != 0) {
          v159 = *(_BYTE*)(v158 + 9);
          v161 = *(_QWORD*)(a1 + 40);
          v160 = *(_QWORD*)(a1 + 48);
          if (v161 < v160) {
            *(_BYTE*)(v161 + 8) = v159;
            *(_QWORD*)(v161 + 32) = v161;
            v162 = v161 + 48;
            *(_QWORD*)v161 = GameData_2075bc8;
          LABEL_308:
            *(_QWORD*)(a1 + 40) = v162;
            *(_BYTE*)(a1 + 64) = 1;
            goto LABEL_309;
          }
          v163 = *(_QWORD*)(a1 + 32);
          v164 = 1 - 0x5555555555555555LL * ((__int64)(v161 - v163) >> 4);
          if (v164 <= 0x555555555555555LL) {
            v165 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v160 - v163) >> 4);
            if (2 * v165 > v164) {
              v164 = 2 * v165;
            }
            if (v165 >= 0x2AAAAAAAAAAAAAALL) {
              v166 = 0x555555555555555LL;
            }
            else {
              v166 = v164;
            }
            if (v166 <= 0x555555555555555LL) {
              v167 = 3 * v166;
              v168 = fw_memory_g_heap_manager_ptr;
              v15 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v166, 16, 0);
              v169 = v15 + v161 - v163;
              v170 = v15 + 16 * v167;
              v171 = v15;
              *(_QWORD*)v169 = GameData_2075bc8;
              v162 = v169 + 48;
              *(_BYTE*)(v169 + 8) = v159;
              *(_QWORD*)(v169 + 32) = v169;
              if (v163 == v161) {
              LABEL_304:
                *(_QWORD*)(a1 + 32) = v171;
                *(_QWORD*)(a1 + 40) = v162;
                *(_QWORD*)(a1 + 48) = v170;
                if (v163 != 0) {
                  v177 = 128;
                  if (*(_QWORD*)(*(_QWORD*)v168 + 200LL) == 0) {
                    v177 = 56;
                  }
                  v15 = nn_mem_StandardAllocator_Free(*(_QWORD*)v168 + v177);
                }
                goto LABEL_308;
              }
              v172 = a3;
              v173 = v163;
              v174 = v15;
              do {
                v175 = *(_QWORD*)(v173 + 32);
                if (v175 != 0) {
                  if (v173 == v175) {
                    *(_QWORD*)(v174 + 32) = v174;
                    (*(void (**)(__int64, __int64))(*(_QWORD*)v175 + 24LL))(
                        v175, v174);
                  }
                  else {
                    *(_QWORD*)(v174 + 32) = v175;
                    *(_QWORD*)(v173 + 32) = 0;
                  }
                }
                else {
                  *(_QWORD*)(v174 + 32) = 0;
                }
                v173 += 48;
                v174 += 48;
              } while (v173 != v161);
              a3 = v172;
              v168 = fw_memory_g_heap_manager_ptr;
              while (2) {
                v15 = *(_QWORD*)(v163 + 32);
                if (v163 != v15) {
                  if (v15 != 0) {
                    v176 = 40;
                  LABEL_298:
                    v15 = (*(__int64 (**)(void*))(*(_QWORD*)v15 + v176))(
                        (void*)v15);
                  }
                  v163 += 48;
                  if (v163 == v161) {
                    v163 = *(_QWORD*)(a1 + 32);
                    goto LABEL_304;
                  }
                  continue;
                }
                break;
              }
              v176 = 32;
              goto LABEL_298;
            }
          LABEL_367:
            GameRoutine_60a210(v15);
          }
        LABEL_366:
          GameRoutine_1654e20();
        }
      }
    }
  }
LABEL_309:
  if ((a3 & 1) != 0) {
    v179 = *(char**)(*(_QWORD*)GameData_2130e20 + 8LL);
    v178 = *(char**)(*(_QWORD*)GameData_2130e20 + 16LL);
    if (v179 == v178) {
      goto LABEL_326;
    }
    v180 = v178 - v179 - 8;
    if ((~(_BYTE)v180 & 0x18) != 0) {
      v181 = ((unsigned __int8)((unsigned int)v180 >> 3) + 1) & 3;
      while (*(_QWORD*)v179 != a2) {
        v179 += 8;
        if (--v181 == 0) {
          goto LABEL_315;
        }
      }
    LABEL_326:
      if (v179 != v178) {
        v184 = *(char**)(a1 + 40);
        v183 = *(_QWORD*)(a1 + 48);
        if ((unsigned __int64)v184 < v183) {
          *((_QWORD*)v184 + 4) = v184;
          v185 = (__int64)(v184 + 48);
          *(_QWORD*)v184 = GameData_2075c48;
          goto LABEL_355;
        }
        v186 = *(char**)(a1 + 32);
        v187 = (char*)(v184 - v186);
        v188 = 1 - 0x5555555555555555LL * ((v184 - v186) >> 4);
        if (v188 > 0x555555555555555LL) {
          goto LABEL_366;
        }
        v189 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v183 - (_QWORD)v186) >> 4);
        if (2 * v189 > v188) {
          v188 = 2 * v189;
        }
        if (v189 >= 0x2AAAAAAAAAAAAAALL) {
          v190 = 0x555555555555555LL;
        }
        else {
          v190 = v188;
        }
        if (v190 > 0x555555555555555LL) {
          goto LABEL_367;
        }
        v191 = 3 * v190;
        v192 = fw_memory_g_heap_manager_ptr;
        v193 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v190, 16, 0);
        v194 = &v187[v193];
        v195 = v193 + 16 * v191;
        v196 = v193;
        *(_QWORD*)v194 = GameData_2075c48;
        v185 = (__int64)&v187[v193 + 48];
        *((_QWORD*)v194 + 4) = v194;
        if (v186 != v184) {
          v197 = v186;
          v198 = v193;
          do {
            v199 = *((char**)v197 + 4);
            if (v199 != nullptr) {
              if (v197 == v199) {
                *(_QWORD*)(v198 + 32) = v198;
                (*(void (**)(char*, __int64))(*(_QWORD*)v199 + 24LL))(v199,
                                                                      v198);
              }
              else {
                *(_QWORD*)(v198 + 32) = v199;
                *((_QWORD*)v197 + 4) = 0;
              }
            }
            else {
              *(_QWORD*)(v198 + 32) = 0;
            }
            v197 += 48;
            v198 += 48;
          } while (v197 != v184);
          while (1) {
            v201 = *((char**)v186 + 4);
            if (v186 == v201) {
              v200 = 32;
            }
            else {
              if (v201 == nullptr) {
                goto LABEL_346;
              }
              v200 = 40;
            }
            (*(void (**)(void*))(*(_QWORD*)v201 + v200))((void*)v201);
          LABEL_346:
            v186 += 48;
            if (v186 == v184) {
              v186 = *(char**)(a1 + 32);
              break;
            }
          }
        }
        *(_QWORD*)(a1 + 32) = v196;
        *(_QWORD*)(a1 + 40) = v185;
        *(_QWORD*)(a1 + 48) = v195;
        if (v186 != nullptr) {
          v202 = 128;
          if (*(_QWORD*)(*(_QWORD*)v192 + 200LL) == 0) {
            v202 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v192 + v202);
        }
      LABEL_355:
        *(_QWORD*)(a1 + 40) = v185;
        *(_BYTE*)(a1 + 64) = 1;
      }
    }
    else {
    LABEL_315:
      if (v180 >= 0x18) {
        v179 += 16;
        while (1) {
          if (*((_QWORD*)v179 - 2) == a2) {
            v179 -= 16;
            goto LABEL_326;
          }
          if (*((_QWORD*)v179 - 1) == a2) {
            v179 -= 8;
            goto LABEL_326;
          }
          if (*(_QWORD*)v179 == a2) {
            goto LABEL_326;
          }
          if (*((_QWORD*)v179 + 1) == a2) {
            break;
          }
          v182 = v179 + 16;
          v179 += 32;
          if (v182 == v178) {
            goto LABEL_356;
          }
        }
        v179 += 8;
        goto LABEL_326;
      }
    }
  }
LABEL_356:
  v203 = *(_QWORD*)(a1 + 16);
  v204 = -1431655765 * ((*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 4);
  if (v203 != 0) {
    v205 = std___1___shared_weak_count_lock(v203);
    if (v205 != 0) {
      v206 = *(_QWORD*)(a1 + 8);
      v207 = v205;
      if (v206 != 0) {
        v208 = LayoutAccessor_155ea30(*(_QWORD*)(a1 + 8));
        if (v204 >= 1 && (v208 & 1) == 0) {
          *(_BYTE*)(a1 + 64) = 1;
        }
        LayoutAccessor_155e830(v206, v204 > 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v207 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v207 + 16LL))(v207);
        std___1___shared_weak_count___release_weak(v207);
      }
    }
  }
  GameRoutine_1596b00(a1);
  return v204 > 0;
}

bool GmapUIDef_1653b80(__int64* a1, int a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BOOL4 v13;
  char* v14;
  _QWORD v15[6];

  if (a2 == 8) {
    return false;
  }
  v15[2] = v5;
  v15[4] = v3;
  v15[5] = v4;
  if (a1[1] != 0 && (v10 = std___1___shared_weak_count_lock(a1[1])) != 0) {
    v11 = *a1;
    v12 = v10;
    v13 = v11 == 0;
    if (v11 != 0) {
      v14 = GameData_2075cb8[a2];
      LayoutAccessor_155e830(v11, 1);
      if ((LayoutAccessor_15635a0(v11, v14, 1) & 1) == 0) {
        LayoutAccessor_1562cf0(v11, v14);
      }
      if (a3 >= 1.0) {
        if ((LayoutAccessor_15635a0(v11, "GaugeMax", 1) & 1) == 0) {
          LayoutAccessor_1562680(v11, "GaugeMax", 1.0);
        }
      }
      else {
        v15[0] = v11;
        v15[1] = v12;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_174d580(v15, "GaugeUp", 7, a3);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
  }
  else {
    v13 = true;
  }
  return !v13;
}

__int64 GmapUIDef_1654300(__int64 result, __int64 a2, char a3)
{
  __int64 v3;
  int v4;
  _BOOL4 v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  int v40;
  _DWORD* v41;

  *(_DWORD*)(result + 96) = 0;
  if (a2 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(a2 + 96);
  if (v3 == 0) {
    *(_BYTE*)(result + 100) = 0;
    v10 = *(_QWORD*)(a2 + 96);
    if (v10 != 0) {
      v7 = *(unsigned __int8*)(v10 + 32);
      if ((unsigned int)(v7 - 3) < 2) {
        v8 = 0;
        v5 = false;
        v9 = 0;
        if ((a3 & 1) != 0) {
          goto LABEL_88;
        }
        goto LABEL_24;
      }
      goto LABEL_23;
    }
  LABEL_14:
    if (*(_QWORD*)(a2 + 552) == 0 || *(_QWORD*)(a2 + 104) != 0 ||
        (v9 = *(__int16*)(a2 + 642) * *(__int16*)(a2 + 640) *
              *(__int16*)(a2 + 644)) != 0) {
      v8 = 1;
      v5 = false;
      v9 = 0;
      *(_QWORD*)(result + 8) = a2;
      *(_DWORD*)result = 0;
      *(_DWORD*)(result + 96) = 1;
      if ((a3 & 1) != 0) {
        goto LABEL_88;
      }
    }
    else {
      v8 = 0;
      v5 = false;
      if ((a3 & 1) != 0) {
        goto LABEL_88;
      }
    }
    goto LABEL_24;
  }
  v4 = *(unsigned __int8*)(v3 + 32);
  v5 = v4 == 1;
  *(_BYTE*)(result + 100) = v5;
  v6 = *(_QWORD*)(a2 + 96);
  if (v6 == 0) {
    if (v4 == 1) {
      v8 = 0;
      v9 = 0;
      v5 = true;
      if ((a3 & 1) != 0) {
        goto LABEL_88;
      }
      goto LABEL_24;
    }
    goto LABEL_14;
  }
  v7 = *(unsigned __int8*)(v6 + 32);
  if ((unsigned int)(v7 - 3) < 2) {
  LABEL_5:
    v8 = 0;
    v9 = 0;
    if ((a3 & 1) != 0) {
      goto LABEL_88;
    }
    goto LABEL_24;
  }
  if (v4 == 1) {
    v5 = true;
    if (v7 == 1) {
      v9 = 0;
      *(_QWORD*)(result + 8) = a2;
      *(_DWORD*)result = 0;
      v8 = 1;
      *(_DWORD*)(result + 96) = 1;
      if ((a3 & 1) != 0) {
        goto LABEL_88;
      }
      goto LABEL_24;
    }
    goto LABEL_5;
  }
LABEL_23:
  v8 = 0;
  v5 = false;
  v9 = v7 == 2;
  if ((a3 & 1) != 0) {
    goto LABEL_88;
  }
LABEL_24:
  v11 = GameData_21c96e8;
  v12 = *(_QWORD*)(GameData_21c96e8 + 8);
  if (*(_BYTE*)(v12 + 60) != 1) {
    goto LABEL_34;
  }
  v13 = *(_QWORD*)(a2 + 96);
  v14 = *(_QWORD*)(a2 + 552);
  if (*(_BYTE*)(GameData_22416c0 + 54) != 1) {
    if ((v13 | v14) != 0 && *(_QWORD*)(a2 + 32) != *(_QWORD*)(a2 + 24) &&
        (v13 == 0 && v14 != 0 && *(_QWORD*)(a2 + 104) == 0 &&
             *(__int16*)(a2 + 642) * *(__int16*)(a2 + 640) *
                     *(__int16*)(a2 + 644) ==
                 0 &&
             *(_QWORD*)(v14 + 352) == 0 ||
         (*(_WORD*)(a2 + 544) & 3) != 2)) {
      goto LABEL_88;
    }
    goto LABEL_34;
  }
  if ((v13 | v14) != 0 || *(_DWORD*)(a2 + 84) != *(_DWORD*)(v12 + 56) ||
      *(_QWORD*)(a2 + 32) == *(_QWORD*)(a2 + 24)) {
  LABEL_34:
    v15 = *(_DWORD*)(a2 + 540);
    v16 = (__int64*)a2;
    v17 = __OFSUB__(v15, 1);
    v18 = (unsigned int)(v15 - 1);
    if (((v18 & 0x80000000) != 0LL) == v17) {
      v19 = *(_QWORD*)(a2 + 24);
      v20 = *(_QWORD*)(a2 + 32) - v19;
      v21 = (__int64*)(v19 + 8LL * (unsigned int)v18);
      if (v18 >= v20 >> 3) {
        v16 = (__int64*)a2;
      }
      else {
        v16 = v21;
      }
    }
    v22 = *v16;
    if (*v16 == 0) {
      goto LABEL_88;
    }
    v23 = *(__int64**)(v12 + 8);
    v24 = *(__int64**)(v12 + 16);
    if (v23 == v24) {
      goto LABEL_88;
    }
    v25 = GameData_22416c0;
    while (1) {
      v27 = *v23;
      v28 = *(_DWORD*)(*v23 + 540);
      v29 = (_QWORD*)*v23;
      v17 = __OFSUB__(v28, 1);
      v30 = (unsigned int)(v28 - 1);
      if (((v30 & 0x80000000) != 0LL) == v17) {
        v31 = *(_QWORD*)(v27 + 24);
        v32 = *(_QWORD*)(v27 + 32) - v31;
        v33 = (_QWORD*)(v31 + 8LL * (unsigned int)v30);
        if (v30 >= v32 >> 3) {
          v29 = (_QWORD*)*v23;
        }
        else {
          v29 = v33;
        }
      }
      if (v27 == a2 || *v29 != v22) {
        goto LABEL_42;
      }
      v35 = *(_QWORD*)(v11 + 8);
      if ((*(_BYTE*)(v35 + 60) & 1) == 0) {
        break;
      }
      v36 = *(_QWORD*)(v27 + 96);
      v37 = *(_QWORD*)(v27 + 552);
      if (*(_BYTE*)(v25 + 54) == 1) {
        if ((v36 | v37) != 0) {
          goto LABEL_59;
        }
        if (*(_DWORD*)(v27 + 84) == *(_DWORD*)(v35 + 56)) {
          if (*(_QWORD*)(v27 + 32) != *(_QWORD*)(v27 + 24) || v5) {
            goto LABEL_42;
          }
          goto LABEL_70;
        }
      }
      else if ((v36 | v37) != 0) {
        if (*(_QWORD*)(v27 + 32) != *(_QWORD*)(v27 + 24) &&
            (v36 == 0 && v37 != 0 && *(_QWORD*)(v27 + 104) == 0 &&
                 *(__int16*)(v27 + 642) * *(__int16*)(v27 + 640) *
                         *(__int16*)(v27 + 644) ==
                     0 &&
                 *(_QWORD*)(v37 + 352) == 0 ||
             (*(_WORD*)(v27 + 544) & 3) != 2)) {
          goto LABEL_42;
        }
      LABEL_59:
        if (v36 != 0) {
          v38 = *(unsigned __int8*)(v36 + 32);
          if ((unsigned int)(v38 - 3) < 2) {
            goto LABEL_42;
          }
          if (!v5) {
            v40 = v38 == 2;
          LABEL_80:
            v9 += v40;
            goto LABEL_42;
          }
          if (v38 != 1 || v8 > 5) {
            goto LABEL_42;
          }
          goto LABEL_41;
        }
      }
      if (!v5) {
      LABEL_70:
        if (*(_QWORD*)(v27 + 552) != 0 && *(_QWORD*)(v27 + 104) == 0 &&
            *(__int16*)(v27 + 642) * *(__int16*)(v27 + 640) *
                    *(__int16*)(v27 + 644) ==
                0) {
          v40 = 0;
          goto LABEL_80;
        }
        if (v8 > 5) {
          goto LABEL_42;
        }
      LABEL_41:
        v26 = result + 16LL * v8;
        *(_DWORD*)v26 = 0;
        *(_QWORD*)(v26 + 8) = v27;
        v8 = *(_DWORD*)(result + 96) + 1;
        *(_DWORD*)(result + 96) = v8;
      }
    LABEL_42:
      if (++v23 == v24) {
        goto LABEL_88;
      }
    }
    v36 = *(_QWORD*)(v27 + 96);
    goto LABEL_59;
  }
LABEL_88:
  if (v9 >= 1 && v8 <= 5) {
    v41 = (_DWORD*)(result + 16LL * v8);
    v41[2] = v9;
    *v41 = 1;
    ++*(_DWORD*)(result + 96);
  }
  return result;
}

__attribute__((swiftcall)) void GmapUIDef_1654700(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 16);
  }
  else {
    v3 = a1 + 1;
  }
  result = game_HashString_alt2(v3);
  if (result != 0) {
    v5 = *(_QWORD*)(GameData_21c9e48 + 96);
    if (v5 != 0 && *(_QWORD*)(GameData_21c9e48 + 112) != 0) {
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
      v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c9e48 + 88) + 8 * v8);
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
                {
                  result;
                  return;
                }
              }
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                result;
                return;
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
              result;
              return;
            }
          LABEL_18:
            v10 = (_QWORD*)*v10;
            if (v10 == nullptr) {
              result;
              return;
            }
          }
          if (v10[2] != result) {
            goto LABEL_18;
          }
        LABEL_29:
          v13 = v10[3];
          if (v13 != 0) {
            v14 = *(__int64**)(v13 + 40);
            v15 = *v14;
            v16 = v14[1] - *v14;
            if ((int)((unsigned __int64)v16 >> 3) >= 1) {
              v17 = 0;
              v18 = 0;
              v19 = 0;
              while (1) {
                if (v18 >= v16 >> 3) {
                  *a2 = v19;
                  GameRoutine_1655af0();
                }
                v21 = *(_QWORD*)(v15 + 8 * v18);
                result = game_gmap_SpotMgr_FindSpot_alt1(*(_QWORD*)(v21 + 40));
                v22 = result;
                if (game_GameModeData_instance_ != 0 &&
                    *(_BYTE*)(game_GameModeData_instance_ + 15) == 1 &&
                    (*(_BYTE*)(v21 + 67) & 1) != 0) {
                  v23 = 5;
                }
                else {
                  v23 = 4;
                  if (*(_BYTE*)(result + 176) != 3 ||
                      (*(_BYTE*)(result + 112) & 1) != 0) {
                    goto LABEL_56;
                  }
                  result = GameRoutine_ae2330(v21);
                  if ((result & 1) != 0) {
                    if ((*(_BYTE*)(v22 + 178) & 4) == 0) {
                      if (game_GameModeData_instance_ != 0) {
                      LABEL_49:
                        v24 = *(_DWORD*)(game_GameModeData_instance_ + 72);
                      }
                      else {
                      LABEL_50:
                        v24 = 0;
                      }
                      result = GameRoutine_9db9e0(
                          23, *(unsigned __int16*)(v21 + 64));
                      if (v24 >= (int)result) {
                        result = Impl_13287c0(v22);
                        if ((result & 1) != 0) {
                          v23 = 0;
                        }
                        else {
                          v23 = 6;
                        }
                      }
                      else {
                        v23 = 1;
                      }
                      goto LABEL_56;
                    }
                    if (game_GameModeData_instance_ == 0) {
                      goto LABEL_50;
                    }
                    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
                      goto LABEL_49;
                    }
                    v23 = 2;
                  }
                  else {
                    v23 = 3;
                  }
                }
              LABEL_56:
                v25 = a2[2];
                if (v17 < v25) {
                  *(_QWORD*)v17 = v21;
                  *(_DWORD*)(v17 + 8) = v23;
                  v17 += 16LL;
                }
                else {
                  v26 = v17 - v19;
                  v27 = (__int64)(v17 - v19) >> 4;
                  v28 = v27 + 1;
                  if ((unsigned __int64)(v27 + 1) >> 60 != 0) {
                    *a2 = v19;
                    GameRoutine_1654c60();
                  }
                  v29 = v25 - v19;
                  if (v29 >> 3 > v28) {
                    v28 = v29 >> 3;
                  }
                  if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF0LL) {
                    v30 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v30 = v28;
                  }
                  if (v30 != 0) {
                    if (v30 >> 60 != 0) {
                      *a2 = v19;
                      GameRoutine_60a210(result);
                    }
                    v31 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v30, 16,
                        0);
                  }
                  else {
                    v31 = 0;
                  }
                  v32 = v31 + v26;
                  v33 = v31 + 16 * v30;
                  *(_QWORD*)v32 = v21;
                  v34 = v31 + v26 - 16 * v27;
                  *(_DWORD*)(v32 + 8) = v23;
                  v17 = v31 + v26 + 16;
                  result = memcpy(v34, v19, v26);
                  a2[1] = v17;
                  a2[2] = v33;
                  if (v19 != 0) {
                    v35 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v35 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
                  }
                  v19 = v34;
                }
                v15 = *v14;
                v20 = v14[1];
                ++v18;
                a2[1] = v17;
                v16 = v20 - v15;
                if ((__int64)v18 >= (int)((unsigned __int64)v16 >> 3)) {
                  goto LABEL_73;
                }
              }
            }
            v19 = 0;
          LABEL_73:
            *a2 = v19;
          }
        }
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 GmapUIDef_1654a80(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  __int64 v20;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 16);
  }
  else {
    v2 = a1 + 1;
  }
  v3 = game_HashString_alt1(v2, a2);
  if (v3 == 0) {
    return 2;
  }
  v4 = *(_QWORD*)(GameData_21c9e48 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c9e48 + 112) == 0) {
    return 2;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v3;
    if (v3 >= v4) {
      v7 = v3 % v4;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c9e48 + 88) + 8 * v7);
  if (v8 == nullptr) {
    return 2;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    return 2;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v12 = v9[1];
      if (v12 == v3) {
        if (v9[2] == v3) {
          goto LABEL_29;
        }
      }
      else if ((v12 & v6) != v7) {
        return 2;
      }
      v9 = (_QWORD*)*v9;
      v11 = 2;
      if (v9 == nullptr) {
        return v11;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      return 2;
    }
  LABEL_18:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      return 2;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_18;
  }
LABEL_29:
  v13 = v9[3];
  if (v13 == 0) {
    return 2;
  }
  v14 = *(__int64**)(v13 + 40);
  v15 = *v14;
  v16 = v14[1] - *v14;
  if ((int)((unsigned __int64)v16 >> 3) < 1) {
    return 2;
  }
  v17 = 0;
  LOBYTE(v18) = 1;
  v19 = 1;
  do {
    if (v17 >= v16 >> 3) {
      GameRoutine_1655af0();
    }
    v20 = *(_QWORD*)(v15 + 8 * v17);
    if (game_GameModeData_instance_ == 0 ||
        *(_BYTE*)(game_GameModeData_instance_ + 15) != 1 ||
        (*(_BYTE*)(v20 + 67) & 1) == 0) {
      v19 = 0;
    }
    if ((v18 & 1) != 0) {
      v18 = GameRoutine_ae2330(v20) ^ 1;
    }
    else {
      v18 = 0;
    }
    if (((v19 | v18) & 1) == 0) {
      return 0;
    }
    v15 = *v14;
    ++v17;
    v16 = v14[1] - *v14;
  } while ((__int64)v17 < (int)((unsigned __int64)v16 >> 3));
  v11 = v18 & 1;
  if ((v19 & 1) != 0) {
    return 2;
  }
  return v11;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda2_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Main_Unknown");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Main_Unknown");
      }
      return GameRoutine_136ad70(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda3_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "MainQuest");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Main");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Main");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda4_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "SideStory");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "SideStory");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda5_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Sub_Show");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Sub_Show");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda6_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Sub_Challenge");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Sub_Challenge");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda7_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Sub_Unknown");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Sub_Unknown");
      }
      return GameRoutine_136ad70(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda8_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v4 = *((unsigned int*)a2 + 2);
      v5 = result;
      if ((unsigned int)v4 > 3) {
        v6 = game_util_Format(&GameData_1a9f09e, "Sub_Dest");
      }
      else {
        v6 = game_util_Format(GameData_2075cf8[v4], "Sub_Dest");
      }
      return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7, v6);
    }
  }
  return result;
}

__int64 game_gmap_GmapUIDef_SetQuestIcon_lambda9_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;

  *((_DWORD*)a2 + 4) = 1;
  if (*((_DWORD*)a2 + 2) == 0) {
    LayoutAccessor_1562cf0(*a2, "Default");
  }
  result = ui_LayoutAccessor_FindPane(*a2, "IconQuest");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v5 = *((unsigned int*)a2 + 2);
      v6 = result;
      if ((unsigned int)v5 > 3) {
        v7 = game_util_Format(&GameData_1a9f09e, "Sub");
      }
      else {
        v7 = game_util_Format(GameData_2075cf8[v5], "Sub");
      }
      result = GameRoutine_136a920(ui_Manager_instance_ + 1264, v6, 0, 7, v7);
    }
  }
  v8 = *(unsigned __int8*)(a1 + 8);
  if (v8 <= 3) {
    v9 = *a2;
    v10 = GameData_2075d18[v8];
    *((_DWORD*)a2 + 4) = 1;
    LayoutAccessor_1562cf0(v9, v10);
    result = LayoutAccessor_1562cf0(*a2, "Enable");
    *((_BYTE*)a2 + 20) = 1;
  }
  return result;
}

#pragma GCC visibility pop
