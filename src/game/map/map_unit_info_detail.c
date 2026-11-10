#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Cursor_730e40(_QWORD, _QWORD);
__int64 GameRoutine_182cf20(_QWORD, _QWORD);
__int64 GameRoutine_752480(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7595d0(_QWORD);
__int64 MapUnitInfo_1828ef0(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_212d0d0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfc0[10];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 MapUnitInfoDetail_Unknown140(__int64 a1, __int64* a2);
__int64 MapUnitInfoDetail_Unknown103(__int64 a1);
__int64 MapUnitInfoDetail_Unknown105(__int64 a1);
_QWORD* GameRoutine_182ff80(_QWORD* result, int*, _QWORD*, __int64, __int64,
                            int*, __int64);
_QWORD* GameRoutine_1830fa0(_QWORD* result, int*, _QWORD*, __int64, __int64,
                            int*, __int64);
__int64 GameRoutine_1000();
__int64 GameRoutine_182f4a0(_QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
extern __int64* GameData_212c880[5];
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda0_Invoke(__int64 result,
                                                            int* a2);
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda1_Invoke(__int64 result,
                                                            int* a2);
_QWORD* MapUnitInfoDetail_18302e0(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6);
__int64* MapUnitInfoDetail_18305e0(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10);
_QWORD* MapUnitInfoDetail_1831300(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6);
__int64* MapUnitInfoDetail_1831600(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10);
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda5_Invoke(__int64 result,
                                                            unsigned int* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void Layout_1363e00(PSEUDO_X8, _QWORD, _QWORD);
__int64 BasicMenu_16dd8b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_15745c0(_QWORD, _QWORD);
__int64 GameRoutine_157ef40(_QWORD, _QWORD);
__int64 GameRoutine_158d1a0(_QWORD, _QWORD);
__int64 GameRoutine_182e580(_QWORD, _QWORD);
__int64 GameRoutine_182ff80_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_182ff80");
__int64 GameRoutine_1830fa0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_1830fa0");
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18b47c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, double);
__int64 LayoutAccessor_1572ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15730d0(_QWORD);
__int64 Util_1575c70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitSkillList_EachIndirectSkill(_QWORD, _QWORD, _QWORD);
__int64 game_gameui_Util_IsVisibleSpecialPage(_QWORD);
__int64 game_gameui_Util_SetBasicStatusForUnitInfo(_QWORD, _QWORD);
__int64 game_map_752480(_QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_Add(_QWORD, _QWORD);
__int64 game_menu_PageTab_SetupLabel(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wmemchr(void);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_20e2d40[])();
extern __int64 (*GameData_20e2dc0[])();
extern __int64 (*GameData_20e2e40[])();
extern __int64 (*GameData_20e2ec0[])();
extern __int64 (*GameData_20e2fc0[])();
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212dfc0[2];
extern __int64 GameData_212c060;
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_2131958[10];
extern __int64 GameData_21f4018[];
extern int game_map_MapUnitInfoDetail_last_page_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 MapUnitInfoDetail_182cf20(__int64 result, unsigned int a2);

__int64 MapUnitInfoDetail_Unknown140(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "XHelp";
    *(_QWORD*)(v15 + 8) = 0;
    v16 = v14 + 40 * v12;
    *(_BYTE*)(v15 + 16) = 0;
    *(_BYTE*)(v15 + 28) = 0;
    v6 = v14 + v8 + 40;
    *(_QWORD*)(v15 + 32) = 0;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 16) = 0;
    *(_BYTE*)(v4 + 28) = 0;
    v6 = v4 + 40;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "XHelp";
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 MapUnitInfoDetail_182cf20(__int64 result, unsigned int a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _BOOL8 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v10;
  __int64 v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 (***v15)();
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 (***v22)();
  __int64 v23;
  __int64 v24;
  __int64 (***v25)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  int* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  char* v44;
  char* v45;
  char* v46;
  unsigned __int64 v47;
  char* v48;
  char* v49;
  __int64 v50;
  char* v51;
  char** v52;
  char* v53;
  __int16 v54;
  _QWORD* v55;
  char* v56;
  __int64 v57;
  char* v58;
  signed __int64 v59;
  __int64 v60;
  char* v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  bool v70;
  char* v71;
  __int64 v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 (*v81)();
  __int64 v82;
  __int64 (*v83)();
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 (***v88)();
  __int64 v89;
  __int64 v90;
  double v91;
  __int64 v92;
  unsigned int v93;
  int v94;
  __int64 v95;
  _QWORD* v96;
  _QWORD* v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  char* v105;
  char* v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  int v118;
  unsigned int v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  int v124;
  _BOOL4 v125;
  _BOOL4 v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int16 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  char v138;
  int v139;
  int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  int v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  int v148;
  __int64 v149;
  __int64 v150;
  char v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  char v158;
  __int64 v159;
  __int64 v160;
  int v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  _QWORD v165[2];
  __int64 (**v166)();
  _QWORD* v167;
  __int64 (***v168)();
  __int64 (***v169)();
  __int64 v170;
  _QWORD* v171;
  _QWORD* v172;
  __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  __int64 (**v176)();
  char* v177;
  char* v178;
  __int64 v179;
  unsigned __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;

  v2 = a2;
  if (*(_QWORD*)(result + 1064) == 0) {
    return result;
  }
  v3 = (_QWORD*)result;
  LayoutAccessor_15730d0(result + 848);
  v4 = LayoutAccessor_155fbe0(v3 + 106, "L_UnitInfo/L_UnitInfoDetail");
  LayoutAccessor_1572ac0(v4, v3[133], 0, 0);
  v5 = false;
  if (*(_QWORD*)(*(_QWORD*)GameData_212d0d0[0] + 160LL) != 0 &&
      (*(_BYTE*)(*(_QWORD*)GameData_212d0d0[0] + 363LL) & 1) == 0) {
    v6 = v3[133];
    v7 = GameData_212cfc0[0];
    v8 = game_map_752480(
        *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
        *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), 0);
    if (v8 == 0 || v6 == v8) {
      v10 = game_map_752480(*(unsigned int*)(*(_QWORD*)(*v7 + 48) + 8LL),
                            *(unsigned int*)(*(_QWORD*)(*v7 + 48) + 12LL), 1);
      v5 = v10 != 0 && v6 != v10;
    }
    else {
      v5 = true;
    }
  }
  GameRoutine_1572370(v4, v5);
  LayoutAccessor_1560070((void*)(&v176), v3 + 106, "L_IconStatus");
  if (v177 == nullptr) {
    goto LABEL_219;
  }
  v12 = std___1___shared_weak_count_lock(v177);
  v13 = v176;
  if (v177 != nullptr) {
    std___1___shared_weak_count___release_weak(v177);
  }
  if (v12 == 0 || v13 == nullptr) {
    goto LABEL_216;
  }
  v159 = v12;
  v14 = v3[133];
  v15 = &v166;
  v180 = 0;
  v181 = 0;
  v178 = nullptr;
  v179 = 0;
  v176 = nullptr;
  v177 = nullptr;
  v174 = 0;
  v175 = 0;
  v172 = nullptr;
  v173 = 0;
  v166 = GameData_20e2d40;
  v167 = v3;
  v170 = 0;
  v171 = nullptr;
  v169 = &v166;
  v168 = &v176;
  v16 = GameData_212c880[0];
  if ((*(_WORD*)(v14 + 1440) & 0x2080) == 0) {
    goto LABEL_31;
  }
  v17 = *(_QWORD*)(v14 + 1400);
  v18 = *(_QWORD*)(v14 + 1392);
  if ((int)((unsigned __int64)(v17 - v18) >> 2) < 1) {
    v15 = &v166;
  LABEL_31:
    v23 = 4;
    goto LABEL_32;
  }
  v19 = *GameData_212c880[0];
  v20 = 0;
  v21 = 0;
  do {
    if (((1 << *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v19 + 64) +
                                    8LL * (*(_DWORD*)(v18 + v20) & 0xFFF)) +
                         104LL)) &
         0x2080) != 0) {
      v22 = v169;
      if (v169 == nullptr) {
      LABEL_40:
        GameRoutine_60a310(v22);
      }
      ((void (*)(__int64 (***)(), __int64))(*v169)[6])(v169, v18 + v20);
      v19 = *v16;
      v17 = *(_QWORD*)(v14 + 1400);
      v18 = *(_QWORD*)(v14 + 1392);
    }
    ++v21;
    v20 += 4;
  } while (v21 < (int)((unsigned __int64)(v17 - v18) >> 2));
  v15 = v169;
  if (v169 == &v166) {
    goto LABEL_31;
  }
  if (v169 != nullptr) {
    v23 = 5;
  LABEL_32:
    (*v15)[v23]();
  }
  v24 = v3[133];
  v25 = &v166;
  v166 = GameData_20e2dc0;
  v167 = v3;
  v169 = &v166;
  v168 = (__int64 (***)())&v170;
  if ((*(_BYTE*)(v24 + 1440) & 1) == 0) {
  LABEL_45:
    v31 = 4;
    goto LABEL_46;
  }
  v26 = *(_QWORD*)(v24 + 1400);
  v27 = *(_QWORD*)(v24 + 1392);
  if ((int)((unsigned __int64)(v26 - v27) >> 2) < 1) {
    v25 = &v166;
    goto LABEL_45;
  }
  v28 = *v16;
  v29 = 0;
  v30 = 0;
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v28 + 64) +
                             8LL * (*(_DWORD*)(v27 + v29) & 0xFFF)) +
                  104LL) == 0) {
      v22 = v169;
      if (v169 == nullptr) {
        goto LABEL_40;
      }
      ((void (*)(__int64 (***)(), __int64))(*v169)[6])(v169, v27 + v29);
      v28 = *v16;
      v26 = *(_QWORD*)(v24 + 1400);
      v27 = *(_QWORD*)(v24 + 1392);
    }
    ++v30;
    v29 += 4;
  } while (v30 < (int)((unsigned __int64)(v26 - v27) >> 2));
  v25 = v169;
  if (v169 == &v166) {
    goto LABEL_45;
  }
  if (v169 != nullptr) {
    v31 = 5;
  LABEL_46:
    (*v25)[v31]();
  }
  v32 = v3[133];
  v33 = *(int**)(v32 + 1776);
  v34 = *(int**)(v32 + 1784);
  while (v33 != v34) {
    v36 = v3[133];
    if (v36 != 0 && (*v33 & 0xFFF) != 0) {
      v37 = *(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8LL * (*v33 & 0xFFF));
      if ((GameRoutine_6fc510(v37) & 1) == 0) {
        if (*(_BYTE*)(v37 + 273) == 0 ||
            ((v38 = *(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8 * (*v33 & 0xFFFLL)),
              v39 = *(unsigned __int8*)(v38 + 104),
              v40 = *(unsigned __int8*)(v38 + 273),
              (unsigned int)(v39 - 5) >= 2)
                 ? (v41 = 0)
                 : (v41 = ((unsigned int)*v33 >> 19) & 0x1F),
             (int)(v41 - (((unsigned int)*v33 >> 12) & 0x7F) + v40) >= 1)) {
          if ((GameRoutine_6fc7a0(v37, v36 + 1744) & 1) != 0) {
            v42 = *v33;
            v43 = *(_QWORD*)(*(_QWORD*)(*v16 + 64) + 8 * (*v33 & 0xFFFLL));
            if ((*(_WORD*)(v43 + 754) & 0x40) != 0) {
              v44 = v177;
              if (v178 == v177) {
                v49 = nullptr;
                v47 = v181 + v180;
                v48 = &v177[8 * ((v181 + v180) >> 9)];
              }
              else {
                v45 = &v177[8 * (v180 >> 9)];
                v46 = *(char**)v45;
                v47 = v181 + v180;
                v48 = &v177[8 * ((v181 + v180) >> 9)];
                v49 = (char*)(*(_QWORD*)v45 + 8 * (v180 & 0x1FF));
                v50 = *(_QWORD*)v48 + 8 * ((v181 + v180) & 0x1FF);
                if (v49 != (char*)v50) {
                  while (((v42 ^ *(_DWORD*)v49) & 0xFFF) != 0) {
                    v49 += 8;
                    if (v49 - v46 == 4096) {
                      v51 = *((char**)v45 + 1);
                      v45 += 8;
                      v46 = v51;
                      v49 = v51;
                    }
                    if (v49 == (char*)v50) {
                      v49 = (char*)(*(_QWORD*)v48 + 8 * (v47 & 0x1FF));
                      break;
                    }
                  }
                }
              }
              if (v172 == v171) {
                v56 = nullptr;
                v54 = v175 + v174;
                v55 = &v171[(v175 + v174) >> 9];
              }
              else {
                v52 = (char**)&v171[v174 >> 9];
                v53 = *v52;
                v54 = v175 + v174;
                v55 = &v171[(v175 + v174) >> 9];
                v56 = &(*v52)[8 * (v174 & 0x1FF)];
                v57 = *v55 + 8 * ((v175 + v174) & 0x1FF);
                if (v56 != (char*)v57) {
                  while (((v42 ^ *(_DWORD*)v56) & 0xFFF) != 0) {
                    v56 += 8;
                    if (v56 - v53 == 4096) {
                      v58 = v52[1];
                      ++v52;
                      v53 = v58;
                      v56 = v58;
                    }
                    if (v56 == (char*)v57) {
                      v56 = (char*)(*v55 + 8LL * (v54 & 0x1FF));
                      v59 = v178 - v177;
                      if (v178 != v177) {
                        goto LABEL_79;
                      }
                      goto LABEL_82;
                    }
                  }
                }
              }
              v59 = v178 - v177;
              if (v178 == v177) {
              LABEL_82:
                if (v49 != nullptr) {
                  goto LABEL_49;
                }
              }
              else {
              LABEL_79:
                if (v49 != (char*)(*(_QWORD*)v48 + 8 * (v47 & 0x1FF))) {
                  goto LABEL_49;
                }
              }
              if (v172 == v171) {
                if (v56 != nullptr) {
                  goto LABEL_49;
                }
              }
              else if (v56 != (char*)(*v55 + 8LL * (v54 & 0x1FF))) {
                goto LABEL_49;
              }
              if (v178 == v177) {
                v60 = 0;
              }
              else {
                v60 = (v59 << 6) - 1;
              }
              if (v60 == v47) {
                GameRoutine_182f4a0(&v176);
                v44 = v177;
                v47 = v181 + v180;
                v42 = *v33;
              }
              v35 = *(_QWORD*)&v44[8 * (v47 >> 9)] + 8 * (v47 & 0x1FF);
              *(_DWORD*)v35 = v42;
              *(_BYTE*)(v35 + 4) = *(_BYTE*)(v43 + 112);
              ++v181;
            }
          }
        }
      }
    }
  LABEL_49:
    ++v33;
  }
  v61 = &v177[8 * (v180 >> 9)];
  if (v178 == v177) {
    v62 = 0;
    v65 = 0;
    v64 = 0;
    v63 = &v177[8 * ((v181 + v180) >> 9)];
  }
  else {
    v62 = *(_QWORD*)v61 + 8 * (v180 & 0x1FF);
    v63 = &v177[8 * ((v181 + v180) >> 9)];
    v64 = *(_QWORD*)v63 + 8 * ((v181 + v180) & 0x1FF);
    v65 = v62;
  }
  v158 = v2;
  if (v62 == v64) {
    v66 = 0;
  }
  else {
    v66 = ((v64 - *(_QWORD*)v63) >> 3) + ((v63 - v61) << 6) -
          ((v65 - *(_QWORD*)v61) >> 3);
    if (v66 >= 1) {
      v67 = GameData_212c060;
      if ((unsigned __int64)v66 >= 0xFFFFFFFFFFFFFFFLL) {
        v2 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v2 = ((v64 - *(_QWORD*)v63) >> 3) + ((v63 - v61) << 6) -
             ((v65 - *(_QWORD*)v61) >> 3);
      }
      while (1) {
        v68 = GameRoutine_1a09d20(8 * v2, v67);
        if (v68 != 0) {
          break;
        }
        v69 = v2 >> 1;
        v70 = v2 > 1;
        v2 >>= 1;
        if (!v70) {
          goto LABEL_105;
        }
      }
      GameRoutine_182ff80_alt1(v61, v62, v63, v64, v66, v68, v2);
      v129 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v129 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v129);
      goto LABEL_106;
    }
  }
  v69 = 0;
LABEL_105:
  GameRoutine_182ff80_alt1(v61, v62, v63, v64, v66, 0, v69);
LABEL_106:
  v71 = (char*)&v171[v174 >> 9];
  if (v172 == v171) {
    v72 = 0;
    v74 = 0;
    v73 = (char*)&v171[(v175 + v174) >> 9];
    goto LABEL_116;
  }
  v72 = *(_QWORD*)v71 + 8 * (v174 & 0x1FF);
  v73 = (char*)&v171[(v175 + v174) >> 9];
  v74 = *(_QWORD*)v73 + 8LL * (((_WORD)v175 + (_WORD)v174) & 0x1FF);
  if (v72 == v74) {
  LABEL_116:
    v75 = 0;
    goto LABEL_117;
  }
  v75 = ((8LL * (((_WORD)v175 + (_WORD)v174) & 0x1FF)) >> 3) +
        ((v73 - v71) << 6) - ((__int64)(8 * (v174 & 0x1FF)) >> 3);
  if (v75 >= 1) {
    v76 = GameData_212c060;
    if ((unsigned __int64)v75 >= 0xFFFFFFFFFFFFFFFLL) {
      v2 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v2 = ((8LL * (((_WORD)v175 + (_WORD)v174) & 0x1FF)) >> 3) +
           ((v73 - v71) << 6) - ((__int64)(8 * (v174 & 0x1FF)) >> 3);
    }
    while (1) {
      v77 = GameRoutine_1a09d20(8 * v2, v76);
      if (v77 != 0) {
        break;
      }
      v78 = v2 >> 1;
      v70 = v2 > 1;
      v2 >>= 1;
      if (!v70) {
        goto LABEL_118;
      }
    }
    GameRoutine_1830fa0_alt1(v71, v72, v73, v74, v75, v77, v2);
    v130 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v130 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v130);
    goto LABEL_119;
  }
LABEL_117:
  v78 = 0;
LABEL_118:
  GameRoutine_1830fa0_alt1(v71, v72, v73, v74, v75, 0, v78);
LABEL_119:
  v79 = 0;
  v162 = (int)v181;
  v80 = -(__int64)(int)v181;
  v160 = (int)v175 + (int)v181;
  v161 = -1;
  while (2) {
    v165[0] = game_util_Format("L_Icon%02d", v79);
    v165[1] = strlen(v165[0]);
    v81 = v13[1];
    if (v81 != nullptr) {
      v82 = std___1___shared_weak_count_lock(v81);
      if (v82 != 0) {
        v83 = *v13;
        v84 = v82;
        if (*v13 != nullptr) {
          Layout_1363e00((void*)(&v182), *v13, v165);
          v184 = 0;
          v185 = 0;
          if (v183 != 0 &&
              (v85 = std___1___shared_weak_count_lock(v183), v185 = v85,
               v85 != 0) &&
              (v184 = v182, v182 != 0) &&
              (v86 = v85,
               (v87 = __dynamic_cast(v182, GameData_212dfc0[0],
                                     GameData_2131958[0], 0)) != 0)) {
            v88 = (__int64 (***)())&v184;
            v166 = (__int64 (**)())v87;
            v167 = (_QWORD*)v86;
          }
          else {
            v88 = &v166;
          }
          *v88 = nullptr;
          v88[1] = nullptr;
          v2 = (unsigned __int64)v166;
          v74 = (__int64)v167;
          if (v167 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v167 + 2), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
              std___1___shared_weak_count___release_weak(v74);
            }
          }
          v89 = v185;
          if (v185 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v185 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
            std___1___shared_weak_count___release_weak(v89);
          }
          if (v183 != 0) {
            std___1___shared_weak_count___release_weak(v183);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v83 == nullptr) {
            goto LABEL_120;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
          std___1___shared_weak_count___release_weak(v84);
          if (v83 == nullptr) {
            goto LABEL_120;
          }
        }
        if (v74 == 0) {
          goto LABEL_120;
        }
        v90 = std___1___shared_weak_count_lock(v74);
        std___1___shared_weak_count___release_weak(v74);
        if (v90 != 0 && v2 != 0) {
          if (v79 >= v162) {
            if (v79 >= v160) {
              goto LABEL_156;
            }
            v94 = *(_DWORD*)(v171[(v80 + v174) >> 9] +
                             8 * ((v80 + v174) & 0x1FF));
            if ((v94 & 0xFFF) == 0) {
              goto LABEL_156;
            }
            LODWORD(v91) = 1.0;
            *(_QWORD*)(v2 + 1088) = 0;
            *(_DWORD*)(v2 + 1096) = v94;
            LayoutAccessor_1562680(v2 + 88, "GoodStatus", v91);
            v95 = *(_QWORD*)(v2 + 1080);
            if (v95 != 0) {
              GameRoutine_1841930(
                  v95,
                  *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*(_DWORD*)(v2 + 1096) & 0xFFF)),
                  0);
            }
            v93 = 1;
            (*(void (**)(unsigned __int64, __int64))(*(_QWORD*)v2 + 40LL))(v2,
                                                                           1);
          LABEL_155:
            v161 = v79;
          }
          else {
            v92 = *(unsigned int*)(*(_QWORD*)&v177[8 * ((v79 + v180) >> 9)] +
                                   8 * ((v79 + v180) & 0x1FF));
            if ((v92 & 0xFFF) != 0) {
              v93 = 1;
              GameRoutine_18b47c0(v2, v92, 1, 0);
              goto LABEL_155;
            }
          LABEL_156:
            v93 = 0;
          }
          (*(void (**)(unsigned __int64, _QWORD))(*(_QWORD*)v2 + 40LL))(v2,
                                                                        v93);
        LABEL_158:
          if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
            std___1___shared_weak_count___release_weak(v90);
          }
        }
        else if (v90 != 0) {
          goto LABEL_158;
        }
      }
    }
  LABEL_120:
    ++v79;
    ++v80;
    if (v79 != 14) {
      continue;
    }
    break;
  }
  LayoutAccessor_155e830(v13, v161 >= 0);
  v96 = v171;
  v97 = v172;
  v175 = 0;
  v98 = v172 - v171;
  if (v98 < 3) {
    LOBYTE(v2) = v158;
  }
  else {
    v99 = fw_memory_g_heap_manager_ptr;
    LOBYTE(v2) = v158;
    do {
      if (*v96 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) != 0) {
          v100 = 128;
        }
        else {
          v100 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v99 + v100);
        v96 = v171;
        v97 = v172;
      }
      v171 = ++v96;
      v98 = v97 - v96;
    } while (v98 > 2);
  }
  if (v98 == 1) {
    v101 = 256;
  LABEL_173:
    v174 = v101;
  }
  else if (v98 == 2) {
    v101 = 512;
    goto LABEL_173;
  }
  if (v96 != v97) {
    v102 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v96 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v102 + 200LL) != 0) {
          v103 = 128;
        }
        else {
          v103 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v102 + v103);
      }
      ++v96;
    } while (v96 != v97);
    if (v171 != v172) {
      v172 = (_QWORD*)((char*)v172 + (((char*)v171 - (char*)v172 + 7) &
                                      0xFFFFFFFFFFFFFFF8LL));
    }
  }
  if (v170 != 0) {
    v104 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v104 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v104);
  }
  v105 = v177;
  v106 = v178;
  v181 = 0;
  v107 = (v178 - v177) >> 3;
  if (v107 >= 3) {
    v108 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_QWORD*)v105 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v108 + 200LL) != 0) {
          v109 = 128;
        }
        else {
          v109 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v108 + v109);
        v105 = v177;
        v106 = v178;
      }
      v105 += 8;
      v177 = v105;
      v107 = (v106 - v105) >> 3;
    } while (v107 > 2);
  }
  if (v107 == 1) {
    v110 = 256;
  LABEL_200:
    v180 = v110;
  }
  else if (v107 == 2) {
    v110 = 512;
    goto LABEL_200;
  }
  if (v105 != v106) {
    v111 = fw_memory_g_heap_manager_ptr;
    do {
      if (*(_QWORD*)v105 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v111 + 200LL) != 0) {
          v112 = 128;
        }
        else {
          v112 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v111 + v112);
      }
      v105 += 8;
    } while (v105 != v106);
    if (v177 != v178) {
      v178 += (v177 - v178 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
  }
  if (v176 != nullptr) {
    v113 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v113 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v113);
  }
  v12 = v159;
LABEL_216:
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
LABEL_219:
  v114 = LayoutAccessor_155fbe0(v3 + 106, "L_UnitInfo/L_BasicStatus");
  game_gameui_Util_SetBasicStatusForUnitInfo(v114, v3[133]);
  v115 = LayoutAccessor_155fbe0(v3 + 106, "L_UnitInfo/L_BattleStatus");
  GameRoutine_158d1a0(v115, v3[133]);
  v116 = LayoutAccessor_155fbe0(v3 + 106, "L_UnitInfo/L_SkillInfo");
  GameRoutine_157ef40(v116, v3[133]);
  v117 = LayoutAccessor_155fbe0(v3 + 106, "L_MasteryInfo");
  Util_1575c70(v117, v3[133], 2, 0, 0, 0);
  v3[85] = v3[84];
  game_menu_PageTab_Add(v3 + 82, 0);
  v118 = GameRoutine_15745c0(v3[133], 1);
  if (v118 >= 1) {
    v119 = v118;
    game_menu_PageTab_Add(v3 + 82, 1);
    if (v119 >= 0xF) {
      game_menu_PageTab_Add(v3 + 82, 2);
    }
  }
  v120 = v3[133];
  if ((*(_BYTE*)(v120 + 1834) & 4) != 0) {
    game_menu_PageTab_Add(v3 + 82, 3);
    v120 = v3[133];
  }
  LOBYTE(v184) = 0;
  LOWORD(v170) = 4;
  v180 = (unsigned __int64)&v176;
  v176 = GameData_20e2e40;
  v177 = (char*)&v184;
  game_UnitSkillList_EachIndirectSkill(v120 + 1456, &v170, &v176);
  if ((__int64 (***)())v180 == &v176) {
    v121 = 32;
  LABEL_228:
    (*(void (**)(__int64))(*(_QWORD*)v180 + v121))((__int64)v180);
  }
  else if (v180 != 0) {
    v121 = 40;
    goto LABEL_228;
  }
  if ((unsigned __int8)v184 == 1) {
    game_menu_PageTab_Add(v3 + 82, 4);
  }
  if ((game_gameui_Util_IsVisibleSpecialPage(v3[133]) & 1) != 0) {
    game_menu_PageTab_Add(v3 + 82, 5);
  }
  v122 = v3[133];
  v123 = *(_QWORD*)(v122 + 400);
  v124 = *(unsigned __int8*)(v123 + 96);
  if (v124 == 2) {
    if (*(_BYTE*)(v122 + 1880) != 0) {
      v127 = (__int64*)(v122 + 1880);
    }
    else {
      v128 = *(_QWORD*)(v123 + 112);
      if (v128 != 0) {
        v127 = &GameData_21f4018[8 * (unsigned __int64)*(
                                         unsigned __int8*)(v128 + 32)];
      }
      else {
        v127 = GameData_212c8b0[0];
      }
    }
    v126 = false;
    v125 = *(unsigned __int8*)v127 != 0;
  }
  else if (v124 == 1) {
    v125 = false;
    v126 = *(_BYTE*)(v122 + 1944) != 0;
  }
  else {
    v126 = false;
    v125 = false;
  }
  v131 = *(_QWORD*)(v122 + 408);
  v132 = *(_WORD*)(v122 + 1536);
  LODWORD(v170) = v131 != 0;
  if (v131 == 0) {
    LOWORD(v166) = 512;
    v180 = (unsigned __int64)&v176;
    v176 = GameData_20e2ec0;
    v177 = (char*)v3;
    v178 = (char*)&v170;
    game_UnitSkillList_EachIndirectSkill(v122 + 1456, &v166, &v176);
    if ((__int64 (***)())v180 == &v176) {
      v133 = 32;
    LABEL_254:
      (*(void (**)(__int64))(*(_QWORD*)v180 + v133))((__int64)v180);
    }
    else if (v180 != 0) {
      v133 = 40;
      goto LABEL_254;
    }
    v134 = v3[133];
    v135 = *(_QWORD*)(v134 + 1744);
    v136 = *(unsigned int*)((char*)((_UNKNOWN*)0x114LL) +
                            game_g_shared_system_skills_ptr);
    v137 = *(_QWORD*)(v134 + 1752) - v135;
    LODWORD(v176) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x114LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
    if (((v136 >> 5) & 0x7F) + 1 <= v137 >> 2 &&
        ((*(_DWORD*)(v135 + 4 * ((v136 >> 5) & 0x7F)) >> v136) & 1) != 0) {
      v138 = game_HasActiveSkill_843420(&v176, v134 + 1744);
      v139 = v170;
      if ((v138 & 1) != 0) {
        v139 = v170 + 1;
        LODWORD(v170) = v170 + 1;
      }
    }
    else {
      v139 = v170;
    }
    v140 = (v132 & 0x40) == 0 || v125;
    if (((v126 | v140) & 1) == 0 && v139 <= 0) {
      game_menu_PageTab_Add(v3 + 82, 6);
    }
  }
  if (v126) {
    game_menu_PageTab_Add(v3 + 82, 7);
  }
  if (v125) {
    game_menu_PageTab_Add(v3 + 82, 8);
  }
  if ((int)v170 >= 1) {
    game_menu_PageTab_Add(v3 + 82, 9);
    if ((int)v170 >= 2) {
      game_menu_PageTab_Add(v3 + 82, 10);
      if ((int)v170 >= 3) {
        game_menu_PageTab_Add(v3 + 82, 11);
      }
    }
  }
  v141 = v3[85];
  v142 = v3[84];
  if (v141 == v142) {
    v144 = game_map_MapUnitInfoDetail_last_page_;
    LODWORD(v143) = 0;
    if ((v2 & 1) != 0 && game_map_MapUnitInfoDetail_last_page_ != 12) {
      goto LABEL_300;
    }
  LABEL_289:
    if (v144 == 12) {
      goto LABEL_301;
    }
    if (v141 != v142) {
      v146 = wmemchr();
      v144 = game_map_MapUnitInfoDetail_last_page_;
      v147 = v146 != 0 ? v146 : v141;
      v141 = v3[85];
      if (v147 != v141) {
        v142 = v3[84];
        if (v141 != v142) {
          v143 = 0;
          while (*(_DWORD*)(v142 + 4 * v143) !=
                 game_map_MapUnitInfoDetail_last_page_) {
            if ((v141 - v142) >> 2 == ++v143) {
              goto LABEL_299;
            }
          }
          goto LABEL_304;
        }
        goto LABEL_358;
      }
    }
    v142 = v3[84];
    switch (v144) {
    case 8:
      if (v141 == v142) {
        goto LABEL_360;
      }
      v157 = wmemchr();
      if (v157 != 0) {
        v155 = v157;
      }
      else {
        v155 = v141;
      }
      v141 = v3[85];
      v142 = v3[84];
      if (v155 == v141) {
        goto LABEL_361;
      }
      if (v141 != v142) {
        v143 = 0;
        while (*(_DWORD*)(v142 + 4 * v143) != 7) {
          if ((v141 - v142) >> 2 == ++v143) {
          LABEL_299:
            LODWORD(v143) = 0;
            goto LABEL_304;
          }
        }
        goto LABEL_304;
      }
      break;
    case 7:
      if (v141 == v142) {
        goto LABEL_360;
      }
      v156 = wmemchr();
      if (v156 != 0) {
        v155 = v156;
      }
      else {
        v155 = v141;
      }
      v141 = v3[85];
      v142 = v3[84];
      if (v155 == v141) {
        goto LABEL_361;
      }
      if (v141 != v142) {
        v143 = 0;
        while (*(_DWORD*)(v142 + 4 * v143) != 8) {
          if ((v141 - v142) >> 2 == ++v143) {
            goto LABEL_299;
          }
        }
        goto LABEL_304;
      }
      break;
    case 2:
      if (v141 != v142) {
        v154 = wmemchr();
        if (v154 != 0) {
          v155 = v154;
        }
        else {
          v155 = v141;
        }
        v141 = v3[85];
        v142 = v3[84];
        if (v155 != v141) {
          if (v141 != v142) {
            v143 = 0;
            while (*(_DWORD*)(v142 + 4 * v143) != 1) {
              if ((v141 - v142) >> 2 == ++v143) {
                goto LABEL_299;
              }
            }
            goto LABEL_304;
          }
          break;
        }
      LABEL_361:
        v141 = v155;
        goto LABEL_304;
      }
    LABEL_360:
      v142 = v141;
      goto LABEL_304;
    default:
      goto LABEL_304;
    }
  LABEL_358:
    LODWORD(v143) = 0;
    v142 = v141;
    goto LABEL_304;
  }
  v143 = 0;
  while (*(_DWORD*)(v142 + 4 * v143) != 0) {
    if ((v141 - v142) >> 2 == ++v143) {
      LODWORD(v143) = 0;
      v144 = game_map_MapUnitInfoDetail_last_page_;
      if ((v2 & 1) == 0) {
        goto LABEL_289;
      }
      goto LABEL_284;
    }
  }
  v144 = game_map_MapUnitInfoDetail_last_page_;
  if ((v2 & 1) == 0) {
    goto LABEL_289;
  }
LABEL_284:
  if (v144 == 12) {
    goto LABEL_289;
  }
  v145 = wmemchr();
  if (v145 != 0) {
    v141 = v145;
  }
  v142 = v3[84];
  if (v141 != v3[85]) {
    v144 = game_map_MapUnitInfoDetail_last_page_;
    v141 = v3[85];
    goto LABEL_289;
  }
LABEL_300:
  game_map_MapUnitInfoDetail_last_page_ = 12;
LABEL_301:
  v148 = v143;
  if ((int)v143 < (unsigned __int64)((v141 - v142) >> 2)) {
    v148 = *(_DWORD*)(v142 + 4LL * (int)v143);
  }
  game_map_MapUnitInfoDetail_last_page_ = v148;
LABEL_304:
  BasicMenu_16dd8b0(v3, (unsigned __int64)(v141 - v142) >> 2,
                    (unsigned int)v143);
  LayoutAccessor_1560070((void*)(&v170), v3 + 106, "L_PageTab");
  if (v171 != nullptr && (v149 = std___1___shared_weak_count_lock(v171)) != 0) {
    v150 = v149;
    v151 = 0;
    v163 = v170;
    v164 = v149;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v149 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v150 = 0;
    v163 = 0;
    v164 = 0;
    v151 = 1;
  }
  v176 = GameData_20e2fc0;
  v180 = (unsigned __int64)&v176;
  game_menu_PageTab_SetupLabel(v3 + 82, &v163, &v176, 3, 14, 15);
  if ((__int64 (***)())v180 == &v176) {
    v152 = 32;
  LABEL_312:
    (*(void (**)(__int64))(*(_QWORD*)v180 + v152))((__int64)v180);
  }
  else if (v180 != 0) {
    v152 = 40;
    goto LABEL_312;
  }
  if (v164 != 0) {
    std___1___shared_weak_count___release_weak(v164);
  }
  if ((v151 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v150 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v150 + 16LL))(v150);
    std___1___shared_weak_count___release_weak(v150);
  }
  if (v171 != nullptr) {
    std___1___shared_weak_count___release_weak(v171);
  }
  v153 = v3[84];
  if ((int)v143 < (unsigned __int64)((v3[85] - v153) >> 2)) {
    LODWORD(v143) = *(_DWORD*)(v153 + 4LL * (int)v143);
  }
  GameRoutine_182e580(v3, (unsigned int)v143);
  result = *(_QWORD*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    return GameRoutine_18ae960(result, 0);
  }
  return result;
}

__int64 MapUnitInfoDetail_Unknown103(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_212cfc0[0];
  v3 = GameRoutine_752480(
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), 1);
  if (*(_QWORD*)(a1 + 1064) == v3) {
    return 0;
  }
  v4 = Cursor_730e40(*(_QWORD*)(*v2 + 48), v3);
  v5 = GameRoutine_7595d0(v4);
  *(_QWORD*)(a1 + 1064) = v5;
  MapUnitInfo_1828ef0(*(_QWORD*)GameData_212d0d0[0], v5);
  GameRoutine_182cf20(a1, 0);
  return 13;
}

__int64 MapUnitInfoDetail_Unknown105(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_212cfc0[0];
  v3 = GameRoutine_752480(
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), 0);
  if (*(_QWORD*)(a1 + 1064) == v3) {
    return 0;
  }
  v4 = Cursor_730e40(*(_QWORD*)(*v2 + 48), v3);
  v5 = GameRoutine_7595d0(v4);
  *(_QWORD*)(a1 + 1064) = v5;
  MapUnitInfo_1828ef0(*(_QWORD*)GameData_212d0d0[0], v5);
  GameRoutine_182cf20(a1, 0);
  return 13;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda0_Invoke(__int64 result,
                                                            int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
  if (v2 != 0 && (*a2 & 0xFFF) != 0) {
    v4 = result;
    v5 = GameData_212c880[0];
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v6);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v6 + 273) == 0 ||
          ((v7 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL)),
            v8 = *(unsigned __int8*)(v7 + 104),
            v9 = *(unsigned __int8*)(v7 + 273), (unsigned int)(v8 - 5) >= 2)
               ? (v10 = 0)
               : (v10 = ((unsigned int)*a2 >> 19) & 0x1F),
           (int)(v10 - (((unsigned int)*a2 >> 12) & 0x7F) + v9) >= 1)) {
        result = GameRoutine_6fc7a0(v6, v2 + 1744);
        if ((result & 1) != 0) {
          v11 = *(_QWORD**)(v4 + 16);
          v12 = v11[1];
          v13 = v11[2];
          v14 = v13 - v12;
          v15 = v13 == v12;
          v16 = *a2;
          v17 = (v14 << 6) - 1;
          v18 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL));
          if (v15) {
            v19 = 0;
          }
          else {
            v19 = v17;
          }
          v20 = v11[5] + v11[4];
          if (v19 == v20) {
            result = GameRoutine_182f4a0(v11);
            v12 = v11[1];
            v20 = v11[5] + v11[4];
            v16 = *a2;
          }
          v21 = *(_QWORD*)(v12 + 8 * (v20 >> 9)) + 8 * (v20 & 0x1FF);
          *(_DWORD*)v21 = v16;
          *(_BYTE*)(v21 + 4) = *(_BYTE*)(v18 + 112);
          ++v11[5];
        }
      }
    }
  }
  return result;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda1_Invoke(__int64 result,
                                                            int* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;

  v2 = GameData_212c880[0];
  v3 = *a2 & 0xFFF;
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v3);
  if ((*(_WORD*)(v4 + 754) & 0x20) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
    v6 = v5 == 0 || (*a2 & 0xFFF) == 0;
    if (!v6) {
      v7 = result;
      result = GameRoutine_6fc510(
          *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v3));
      if ((result & 1) == 0) {
        if (*(_BYTE*)(v4 + 273) == 0 ||
            ((v9 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)),
              v10 = *(unsigned __int8*)(v9 + 104),
              v11 = *(unsigned __int8*)(v9 + 273), (unsigned int)(v10 - 5) >= 2)
                 ? (v12 = 0)
                 : (v12 = ((unsigned int)*a2 >> 19) & 0x1F),
             (int)(v12 - (((unsigned int)*a2 >> 12) & 0x7F) + v11) >= 1)) {
          result = GameRoutine_6fc7a0(v4, v5 + 1744);
          if ((result & 1) != 0) {
            v13 = *(_QWORD**)(v7 + 16);
            v14 = v13[1];
            v15 = v13[2];
            v16 = v15 - v14;
            v6 = v15 == v14;
            v17 = *a2;
            v18 = (v16 << 6) - 1;
            v19 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL));
            if (v6) {
              v20 = 0;
            }
            else {
              v20 = v18;
            }
            v21 = v13[5] + v13[4];
            if (v20 == v21) {
              result = GameRoutine_182f4a0(*(_QWORD*)(v7 + 16));
              v14 = v13[1];
              v21 = v13[5] + v13[4];
              v17 = *a2;
            }
            v22 = *(_QWORD*)(v14 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF);
            *(_DWORD*)v22 = v17;
            *(_BYTE*)(v22 + 4) = *(_BYTE*)(v19 + 112);
            ++v13[5];
          }
        }
      }
    }
  }
  return result;
}

_QWORD* MapUnitInfoDetail_18302e0(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64* v24;
  int* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  int* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  int* v36;

  if (a5 != 0) {
    if (a5 == 2) {
      if (a4 == *a3) {
        a4 = *(a3 - 1) + 4096LL;
      }
      if (*(unsigned __int8*)(a4 - 4) <=
          (unsigned int)*((unsigned __int8*)a2 + 4)) {
        *(_QWORD*)a6 = *(_QWORD*)a2;
        v6 = *(_QWORD*)(a4 - 8);
      }
      else {
        *(_QWORD*)a6 = *(_QWORD*)(a4 - 8);
        v6 = *(_QWORD*)a2;
      }
      *(_QWORD*)(a6 + 8) = v6;
    }
    else if (a5 == 1) {
      *(_QWORD*)a6 = *(_QWORD*)a2;
    }
    else if ((__int64)a5 > 8) {
      v15 = a5 >> 1;
      v18 = a4;
      v19 = (a5 >> 1) + (((__int64)a2 - *result) >> 3);
      if (v19 < 1) {
        v22 = 511 - v19;
        v20 = &result[-(v22 >> 9)];
        v21 = (int*)(*v20 + 8LL * (~(_WORD)v22 & 0x1FF));
      }
      else {
        v20 = &result[(unsigned __int64)v19 >> 9];
        v21 = (int*)(*v20 + 8 * (v19 & 0x1FF));
      }
      v23 = result;
      v24 = (__int64*)a2;
      GameRoutine_182ff80(result, a2, v20, (__int64)v21, a5 >> 1, (int*)a6,
                          v15);
      result = GameRoutine_182ff80(v20, v21, a3, v18, a5 - v15,
                                   (int*)(a6 + 8 * v15), a5 - v15);
      if (v24 == (__int64*)v21) {
        v26 = v21;
        v27 = (_QWORD*)a6;
      LABEL_45:
        while (v26 != (int*)v18) {
          v35 = *(_QWORD*)v26;
          v26 += 2;
          *v27 = v35;
          if ((char*)((char*)v26 - *v20) == (char*)((char*)0x1000LL)) {
            v36 = (int*)v20[1];
            ++v20;
            v26 = v36;
          }
          ++v27;
        }
      }
      else {
        v26 = v21;
        v27 = (_QWORD*)a6;
        v28 = v23;
        while (v26 != (int*)v18) {
          if (*((unsigned __int8*)v26 + 4) <=
              (unsigned int)*((unsigned __int8*)v24 + 4)) {
            v31 = *v24++;
            *v27 = v31;
            if ((char*)((char*)v24 - *v28) == (char*)((char*)0x1000LL)) {
              v32 = (__int64*)v28[1];
              ++v28;
              v24 = v32;
            }
          }
          else {
            v29 = *(_QWORD*)v26;
            v26 += 2;
            *v27 = v29;
            if ((char*)((char*)v26 - *v20) == (char*)((char*)0x1000LL)) {
              v30 = (int*)v20[1];
              ++v20;
              v26 = v30;
            }
          }
          ++v27;
          if (v24 == (__int64*)v21) {
            goto LABEL_45;
          }
        }
        while (v24 != (__int64*)v21) {
          v33 = *v24++;
          *v27 = v33;
          if ((char*)((char*)v24 - *v28) == (char*)((char*)0x1000LL)) {
            v34 = (__int64*)v28[1];
            ++v28;
            v24 = v34;
          }
          ++v27;
        }
      }
    }
    else if (a2 != (int*)a4) {
      v7 = 0;
      v8 = (_QWORD*)a6;
      *(_QWORD*)a6 = *(_QWORD*)a2;
      while (1) {
        a2 += 2;
        if ((char*)((char*)a2 - *result) == (char*)((char*)0x1000LL)) {
          v9 = (__int64*)result[1];
          ++result;
          a2 = (int*)v9;
        }
        if (a2 == (int*)a4) {
          break;
        }
        v10 = v8 + 1;
        if (*((unsigned __int8*)a2 + 4) <=
            (unsigned int)*((unsigned __int8*)v8 + 4)) {
          *v10 = *(_QWORD*)a2;
        }
        else {
          v8[1] = *v8;
          v11 = a6;
          if (v8 != (_QWORD*)a6) {
            v12 = v7;
            while (1) {
              v11 = a6 + v12;
              v13 = *(unsigned __int8*)(a6 + v12 - 4);
              if (*((unsigned __int8*)a2 + 4) <= v13) {
                break;
              }
              v14 = *(_DWORD*)(v11 - 8);
              v12 -= 8;
              *(_BYTE*)(v11 + 4) = v13;
              *(_DWORD*)v11 = v14;
              if (v12 == 0) {
                v11 = a6;
                break;
              }
            }
          }
          *(_DWORD*)v11 = *a2;
          *(_BYTE*)(v11 + 4) = *((_BYTE*)a2 + 4);
        }
        v7 += 8;
        v8 = v10;
      }
    }
  }
  return result;
}

__int64* MapUnitInfoDetail_18305e0(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10)
{
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  _BOOL4 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  _QWORD* v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  __int64* v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64* v88;
  __int64* v89;
  __int64 v90;
  __int64* v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  int v96;
  __int64* v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  if (a8 == 0) {
    return result;
  }
  while (a7 > a10 && a8 > a10) {
    if (a7 == 0) {
      return result;
    }
    while (*(unsigned __int8*)(a4 + 4) <=
           (unsigned int)*(unsigned __int8*)(a2 + 4)) {
      a2 += 8;
      if (a2 - *result == 4096) {
        v12 = result[1];
        ++result;
        a2 = v12;
      }
      if (--a7 == 0) {
        return result;
      }
    }
    if (a7 >= a8) {
      if (a7 == 1) {
        v96 = *(_DWORD*)a2;
        *(_DWORD*)a2 = *(_DWORD*)a4;
        *(_DWORD*)a4 = v96;
        LOBYTE(v96) = *(_BYTE*)(a2 + 4);
        *(_BYTE*)(a2 + 4) = *(_BYTE*)(a4 + 4);
        *(_BYTE*)(a4 + 4) = v96;
        return result;
      }
      v21 = result;
      v22 = a2;
      v29 = a7 / 2;
      if ((unsigned __int64)(a7 + 1) < 3) {
      LABEL_31:
        if (a6 == (__int64*)a4) {
          goto LABEL_51;
        }
      }
      else {
        v30 = v29 + ((a2 - *result) >> 3);
        if (v30 >= 1) {
          v21 = &result[(unsigned __int64)v30 >> 9];
          v22 = *v21 + 8 * (v30 & 0x1FF);
          goto LABEL_31;
        }
        v42 = 511 - v30;
        v21 = &result[-(v42 >> 9)];
        v22 = *v21 + 8LL * (~(_WORD)v42 & 0x1FF);
        if (a6 == (__int64*)a4) {
        LABEL_51:
          v15 = 0;
          v13 = a3;
          v14 = a4;
          goto LABEL_52;
        }
      }
      v31 = (((__int64)a6 - *(_QWORD*)a5) >> 3) + ((a5 - (char*)a3) << 6);
      v32 = *a3;
      v33 = (a4 - *a3) >> 3;
      v34 = v31 - v33;
      if (v31 != v33) {
        v14 = a4;
        v13 = a3;
        do {
          v35 = v34 >> 1;
          v36 = v14;
          v37 = v13;
          if (v34 != 1) {
            v38 = v35 + ((v14 - v32) >> 3);
            if (v38 < 1) {
              v39 = 511 - v38;
              LOWORD(v38) = ~(511 - v38);
              v37 = &v13[-(v39 >> 9)];
            }
            else {
              v37 = &v13[(unsigned __int64)v38 >> 9];
            }
            v36 = *v37 + 8 * (v38 & 0x1FF);
          }
          if (*(unsigned __int8*)(v36 + 4) >
              (unsigned int)*(unsigned __int8*)(v22 + 4)) {
            v32 = *v37;
            v14 = v36 + 8;
            if (v36 + 8 - *v37 == 4096) {
              v40 = v37[1];
              ++v37;
              v32 = v40;
              v14 = v40;
            }
            v13 = v37;
            v35 = v34 + ~v35;
          }
          v34 = v35;
        } while (v35 != 0);
        if (v14 == a4) {
          v15 = 0;
        }
        else {
          v15 = (((char*)v13 - (char*)a3) << 6) - v33 + ((v14 - v32) >> 3);
        }
        goto LABEL_52;
      }
      goto LABEL_51;
    }
    v13 = a3;
    v14 = a4;
    v15 = a8 / 2;
    if ((unsigned __int64)(a8 + 1) < 3) {
      goto LABEL_14;
    }
    v16 = v15 + ((a4 - *a3) >> 3);
    if (v16 >= 1) {
      v13 = &a3[(unsigned __int64)v16 >> 9];
      v14 = *v13 + 8 * (v16 & 0x1FF);
    LABEL_14:
      if (a4 != a2) {
        goto LABEL_15;
      }
      goto LABEL_49;
    }
    v41 = 511 - v16;
    v13 = &a3[-(v41 >> 9)];
    v14 = *v13 + 8LL * (~(_WORD)v41 & 0x1FF);
    if (a4 != a2) {
    LABEL_15:
      v17 = ((a4 - *a3) >> 3) + (((char*)a3 - (char*)result) << 6);
      v18 = *result;
      v19 = (a2 - *result) >> 3;
      v20 = v17 - v19;
      if (v17 != v19) {
        v21 = result;
        v22 = a2;
        do {
          v23 = v20 >> 1;
          v24 = v22;
          v25 = v21;
          if (v20 != 1) {
            v26 = v23 + ((v22 - v18) >> 3);
            if (v26 < 1) {
              v27 = 511 - v26;
              LOWORD(v26) = ~(511 - v26);
              v25 = &v21[-(v27 >> 9)];
            }
            else {
              v25 = &v21[(unsigned __int64)v26 >> 9];
            }
            v24 = *v25 + 8 * (v26 & 0x1FF);
          }
          if (*(unsigned __int8*)(v14 + 4) <=
              (unsigned int)*(unsigned __int8*)(v24 + 4)) {
            v18 = *v25;
            v22 = v24 + 8;
            if (v24 + 8 - *v25 == 4096) {
              v28 = v25[1];
              ++v25;
              v18 = v28;
              v22 = v28;
            }
            v21 = v25;
            v23 = v20 + ~v23;
          }
          v20 = v23;
        } while (v23 != 0);
        if (v22 == a2) {
          v29 = 0;
        }
        else {
          v29 = ((v22 - v18) >> 3) - v19 + (((char*)v21 - (char*)result) << 6);
        }
        goto LABEL_52;
      }
    }
  LABEL_49:
    v29 = 0;
    v21 = result;
    v22 = a2;
  LABEL_52:
    v43 = v14;
    v44 = v13;
    if (v22 != a4) {
      v43 = v22;
      v44 = v21;
      if (a4 != v14) {
        v44 = v21;
        v43 = v22;
        v45 = a4;
        v46 = a3;
        while (1) {
          v47 = *(_DWORD*)v43;
          *(_DWORD*)v43 = *(_DWORD*)v45;
          *(_DWORD*)v45 = v47;
          LOBYTE(v47) = *(_BYTE*)(v43 + 4);
          *(_BYTE*)(v43 + 4) = *(_BYTE*)(v45 + 4);
          *(_BYTE*)(v45 + 4) = v47;
          v43 += 8;
          if (v43 - *v44 == 4096) {
            v48 = v44[1];
            ++v44;
            v43 = v48;
          }
          v45 += 8;
          if (v45 - *v46 == 4096) {
            v49 = v46[1];
            ++v46;
            v45 = v49;
          }
          if (v45 == v14) {
            break;
          }
          if (v43 == a4) {
            a4 = v45;
            a3 = v46;
          }
        }
        if (v43 != a4) {
          v50 = v44;
          v51 = v43;
          v52 = a4;
          v53 = a3;
          while (1) {
            v54 = *(_DWORD*)v51;
            *(_DWORD*)v51 = *(_DWORD*)v52;
            *(_DWORD*)v52 = v54;
            LOBYTE(v54) = *(_BYTE*)(v51 + 4);
            *(_BYTE*)(v51 + 4) = *(_BYTE*)(v52 + 4);
            *(_BYTE*)(v52 + 4) = v54;
            v51 += 8;
            if (v51 - *v50 == 4096) {
              v55 = v50[1];
              ++v50;
              v51 = v55;
            }
            v52 += 8;
            if (v52 - *v53 == 4096) {
              v56 = v53[1];
              ++v53;
              v52 = v56;
            }
            v57 = v51 == a4;
            if (v52 == v14) {
              if (v51 == a4) {
                break;
              }
              while (1) {
                v58 = *(_DWORD*)v51;
                *(_DWORD*)v51 = *(_DWORD*)a4;
                *(_DWORD*)a4 = v58;
                LOBYTE(v58) = *(_BYTE*)(v51 + 4);
                *(_BYTE*)(v51 + 4) = *(_BYTE*)(a4 + 4);
                *(_BYTE*)(a4 + 4) = v58;
                v51 += 8;
                if (v51 - *v50 == 4096) {
                  v59 = v50[1];
                  ++v50;
                  v51 = v59;
                }
                v53 = a3;
                v52 = a4 + 8;
                if (a4 + 8 - *a3 == 4096) {
                  v52 = a3[1];
                  v53 = a3 + 1;
                }
                v57 = v51 == a4;
                if (v52 != v14) {
                  break;
                }
                if (v51 == a4) {
                  goto LABEL_79;
                }
              }
            }
            if (v57) {
              a4 = v52;
              a3 = v53;
            }
          }
        }
      }
    }
  LABEL_79:
    v60 = a7 - v29;
    v61 = a8 - v15;
    if (v29 + v15 >= a8 - (v29 + v15) + a7) {
      v110 = a9;
      v111 = a10;
      v67 = a10;
      v68 = a9;
      v69 = result;
      v112 = v29;
      v70 = a2;
      v71 = v14;
      v72 = v21;
      v61 = v15;
      MapUnitInfoDetail_18305e0(v44, v43, v13, v71, a5, a6, v60, a8 - v15, v110,
                                v111);
      v60 = v112;
      result = v69;
      a9 = v68;
      a10 = v67;
      a2 = v70;
      a3 = v72;
      v14 = v22;
      a5 = (char*)v44;
      a6 = (__int64*)v43;
    }
    else {
      v62 = v22;
      v63 = a5;
      v64 = a6;
      v65 = v29;
      v66 = v13;
      MapUnitInfoDetail_18305e0(result, a2, v21, v62, v44, v43, v65, v15, a9,
                                a10);
      a3 = v66;
      a5 = v63;
      a6 = v64;
      result = v44;
      a2 = v43;
    }
    a7 = v60;
    a8 = v61;
    a4 = v14;
    if (v61 == 0) {
      return result;
    }
  }
  if (a7 > a8) {
    if ((__int64*)a4 == a6) {
      return result;
    }
    v73 = (_QWORD*)a9;
    v74 = (__int64*)a4;
    v75 = a3;
    do {
      v76 = *v74++;
      *v73 = v76;
      if ((char*)((char*)v74 - *v75) == (char*)GameRoutine_1000) {
        v77 = (__int64*)v75[1];
        ++v75;
        v74 = v77;
      }
      ++v73;
    } while (v74 != a6);
    while (2) {
      if (a4 == a2) {
        if ((_QWORD*)a9 != v73) {
          v97 = *(__int64**)a5;
          do {
            v98 = (__int64)a6;
            if (a6 == v97) {
              v98 = *((_QWORD*)a5 - 1) + 4096LL;
            }
            *(_DWORD*)(v98 - 8) = *((_DWORD*)v73 - 2);
            *(_BYTE*)(v98 - 4) = *((_BYTE*)v73 - 4);
            v97 = *(__int64**)a5;
            if (a6 == *(__int64**)a5) {
              v99 = *((__int64**)a5 - 1);
              a5 -= 8;
              v97 = v99;
              a6 = v99 + 512;
            }
            --v73;
            --a6;
          } while (v73 != (_QWORD*)a9);
        }
        return result;
      }
      if (*a3 == a4) {
        v80 = *(a3 - 1);
        v78 = (char*)v73 - 4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(v80 + 4092)) {
          goto LABEL_104;
        }
        v79 = v80 + 4096;
      }
      else {
        v78 = (char*)v73 - 4;
        v79 = a4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(a4 - 4)) {
        LABEL_104:
          v83 = (__int64)a6;
          if (a6 == *(__int64**)a5) {
            v83 = *((_QWORD*)a5 - 1) + 4096LL;
          }
          v84 = *((_DWORD*)v73-- - 2);
          *(_DWORD*)(v83 - 8) = v84;
          *(_BYTE*)(v83 - 4) = *v78;
          goto LABEL_107;
        }
      }
      v81 = (__int64)a6;
      if (a6 == *(__int64**)a5) {
        v81 = *((_QWORD*)a5 - 1) + 4096LL;
      }
      *(_DWORD*)(v81 - 8) = *(_DWORD*)(v79 - 8);
      *(_BYTE*)(v81 - 4) = *(_BYTE*)(v79 - 4);
      if (a4 == *a3) {
        v82 = *--a3;
        a4 = v82 + 4096;
      }
      a4 -= 8;
    LABEL_107:
      if (a6 == *(__int64**)a5) {
        v85 = *((_QWORD*)a5 - 1);
        a5 -= 8;
        a6 = (__int64*)(v85 + 4096);
      }
      --a6;
      if (v73 == (_QWORD*)a9) {
        return result;
      }
      continue;
    }
  }
  if (a2 == a4) {
    return result;
  }
  v86 = -a9;
  v87 = (_QWORD*)a9;
  v88 = (__int64*)a2;
  v89 = result;
  do {
    v90 = *v88++;
    *v87 = v90;
    if ((char*)((char*)v88 - *v89) == (char*)GameRoutine_1000) {
      v91 = (__int64*)v89[1];
      ++v89;
      v88 = v91;
    }
    ++v87;
    v86 -= 8;
  } while (v88 != (__int64*)a4);
  while ((__int64*)a4 != a6) {
    if (*(unsigned __int8*)(a4 + 4) <=
        (unsigned int)*(unsigned __int8*)(a9 + 4)) {
      *(_DWORD*)a2 = *(_DWORD*)a9;
      v94 = *(_BYTE*)(a9 + 4);
      a9 += 8;
      *(_BYTE*)(a2 + 4) = v94;
    }
    else {
      *(_DWORD*)a2 = *(_DWORD*)a4;
      v92 = *(_BYTE*)(a4 + 4);
      a4 += 8;
      *(_BYTE*)(a2 + 4) = v92;
      if (a4 - *a3 == 4096) {
        v93 = a3[1];
        ++a3;
        a4 = v93;
      }
    }
    a2 += 8;
    if (a2 - *result == 4096) {
      v95 = result[1];
      ++result;
      a2 = v95;
    }
    if (v87 == (_QWORD*)a9) {
      return result;
    }
  }
  v100 = *result;
  v101 = -v86;
  while (1) {
    v103 = (v101 - a9) >> 3;
    v104 = (v100 - a2 + 4096) >> 3;
    if (v103 >= v104) {
      v103 = v104;
    }
    if (v103 != 0) {
      v105 = 8 * v103 - 8;
      if ((~(_BYTE)v105 & 0x38) != 0) {
        v107 = ((unsigned __int8)((unsigned int)v105 >> 3) + 1) & 7;
        v106 = a9;
        do {
          --v107;
          *(_DWORD*)a2 = *(_DWORD*)v106;
          v108 = *(_BYTE*)(v106 + 4);
          v106 += 8;
          *(_BYTE*)(a2 + 4) = v108;
          a2 += 8;
        } while (v107 != 0);
      }
      else {
        v106 = a9;
      }
      a9 += 8 * v103;
      if (v105 >= 0x38) {
        do {
          *(_DWORD*)a2 = *(_DWORD*)v106;
          *(_BYTE*)(a2 + 4) = *(_BYTE*)(v106 + 4);
          *(_DWORD*)(a2 + 8) = *(_DWORD*)(v106 + 8);
          *(_BYTE*)(a2 + 12) = *(_BYTE*)(v106 + 12);
          *(_DWORD*)(a2 + 16) = *(_DWORD*)(v106 + 16);
          *(_BYTE*)(a2 + 20) = *(_BYTE*)(v106 + 20);
          *(_DWORD*)(a2 + 24) = *(_DWORD*)(v106 + 24);
          *(_BYTE*)(a2 + 28) = *(_BYTE*)(v106 + 28);
          *(_DWORD*)(a2 + 32) = *(_DWORD*)(v106 + 32);
          *(_BYTE*)(a2 + 36) = *(_BYTE*)(v106 + 36);
          *(_DWORD*)(a2 + 40) = *(_DWORD*)(v106 + 40);
          *(_BYTE*)(a2 + 44) = *(_BYTE*)(v106 + 44);
          *(_DWORD*)(a2 + 48) = *(_DWORD*)(v106 + 48);
          *(_BYTE*)(a2 + 52) = *(_BYTE*)(v106 + 52);
          *(_DWORD*)(a2 + 56) = *(_DWORD*)(v106 + 56);
          v109 = *(_BYTE*)(v106 + 60);
          v106 += 64;
          *(_BYTE*)(a2 + 60) = v109;
          a2 += 64;
        } while (v106 != a9);
      }
      if (v87 == (_QWORD*)a9) {
        break;
      }
    }
    v102 = result[1];
    ++result;
    v100 = v102;
    a2 = v102;
  }
  return result;
}

_QWORD* MapUnitInfoDetail_1831300(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64* v24;
  int* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  int* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  int* v36;

  if (a5 != 0) {
    if (a5 == 2) {
      if (a4 == *a3) {
        a4 = *(a3 - 1) + 4096LL;
      }
      if (*(unsigned __int8*)(a4 - 4) <=
          (unsigned int)*((unsigned __int8*)a2 + 4)) {
        *(_QWORD*)a6 = *(_QWORD*)a2;
        v6 = *(_QWORD*)(a4 - 8);
      }
      else {
        *(_QWORD*)a6 = *(_QWORD*)(a4 - 8);
        v6 = *(_QWORD*)a2;
      }
      *(_QWORD*)(a6 + 8) = v6;
    }
    else if (a5 == 1) {
      *(_QWORD*)a6 = *(_QWORD*)a2;
    }
    else if ((__int64)a5 > 8) {
      v15 = a5 >> 1;
      v18 = a4;
      v19 = (a5 >> 1) + (((__int64)a2 - *result) >> 3);
      if (v19 < 1) {
        v22 = 511 - v19;
        v20 = &result[-(v22 >> 9)];
        v21 = (int*)(*v20 + 8LL * (~(_WORD)v22 & 0x1FF));
      }
      else {
        v20 = &result[(unsigned __int64)v19 >> 9];
        v21 = (int*)(*v20 + 8 * (v19 & 0x1FF));
      }
      v23 = result;
      v24 = (__int64*)a2;
      GameRoutine_1830fa0(result, a2, v20, (__int64)v21, a5 >> 1, (int*)a6,
                          v15);
      result = GameRoutine_1830fa0(v20, v21, a3, v18, a5 - v15,
                                   (int*)(a6 + 8 * v15), a5 - v15);
      if (v24 == (__int64*)v21) {
        v26 = v21;
        v27 = (_QWORD*)a6;
      LABEL_45:
        while (v26 != (int*)v18) {
          v35 = *(_QWORD*)v26;
          v26 += 2;
          *v27 = v35;
          if ((char*)((char*)v26 - *v20) == (char*)((char*)0x1000LL)) {
            v36 = (int*)v20[1];
            ++v20;
            v26 = v36;
          }
          ++v27;
        }
      }
      else {
        v26 = v21;
        v27 = (_QWORD*)a6;
        v28 = v23;
        while (v26 != (int*)v18) {
          if (*((unsigned __int8*)v26 + 4) <=
              (unsigned int)*((unsigned __int8*)v24 + 4)) {
            v31 = *v24++;
            *v27 = v31;
            if ((char*)((char*)v24 - *v28) == (char*)((char*)0x1000LL)) {
              v32 = (__int64*)v28[1];
              ++v28;
              v24 = v32;
            }
          }
          else {
            v29 = *(_QWORD*)v26;
            v26 += 2;
            *v27 = v29;
            if ((char*)((char*)v26 - *v20) == (char*)((char*)0x1000LL)) {
              v30 = (int*)v20[1];
              ++v20;
              v26 = v30;
            }
          }
          ++v27;
          if (v24 == (__int64*)v21) {
            goto LABEL_45;
          }
        }
        while (v24 != (__int64*)v21) {
          v33 = *v24++;
          *v27 = v33;
          if ((char*)((char*)v24 - *v28) == (char*)((char*)0x1000LL)) {
            v34 = (__int64*)v28[1];
            ++v28;
            v24 = v34;
          }
          ++v27;
        }
      }
    }
    else if (a2 != (int*)a4) {
      v7 = 0;
      v8 = (_QWORD*)a6;
      *(_QWORD*)a6 = *(_QWORD*)a2;
      while (1) {
        a2 += 2;
        if ((char*)((char*)a2 - *result) == (char*)((char*)0x1000LL)) {
          v9 = (__int64*)result[1];
          ++result;
          a2 = (int*)v9;
        }
        if (a2 == (int*)a4) {
          break;
        }
        v10 = v8 + 1;
        if (*((unsigned __int8*)a2 + 4) <=
            (unsigned int)*((unsigned __int8*)v8 + 4)) {
          *v10 = *(_QWORD*)a2;
        }
        else {
          v8[1] = *v8;
          v11 = a6;
          if (v8 != (_QWORD*)a6) {
            v12 = v7;
            while (1) {
              v11 = a6 + v12;
              v13 = *(unsigned __int8*)(a6 + v12 - 4);
              if (*((unsigned __int8*)a2 + 4) <= v13) {
                break;
              }
              v14 = *(_DWORD*)(v11 - 8);
              v12 -= 8;
              *(_BYTE*)(v11 + 4) = v13;
              *(_DWORD*)v11 = v14;
              if (v12 == 0) {
                v11 = a6;
                break;
              }
            }
          }
          *(_DWORD*)v11 = *a2;
          *(_BYTE*)(v11 + 4) = *((_BYTE*)a2 + 4);
        }
        v7 += 8;
        v8 = v10;
      }
    }
  }
  return result;
}

__int64* MapUnitInfoDetail_1831600(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10)
{
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  _BOOL4 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  _QWORD* v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  __int64* v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64* v88;
  __int64* v89;
  __int64 v90;
  __int64* v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  int v96;
  __int64* v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  if (a8 == 0) {
    return result;
  }
  while (a7 > a10 && a8 > a10) {
    if (a7 == 0) {
      return result;
    }
    while (*(unsigned __int8*)(a4 + 4) <=
           (unsigned int)*(unsigned __int8*)(a2 + 4)) {
      a2 += 8;
      if (a2 - *result == 4096) {
        v12 = result[1];
        ++result;
        a2 = v12;
      }
      if (--a7 == 0) {
        return result;
      }
    }
    if (a7 >= a8) {
      if (a7 == 1) {
        v96 = *(_DWORD*)a2;
        *(_DWORD*)a2 = *(_DWORD*)a4;
        *(_DWORD*)a4 = v96;
        LOBYTE(v96) = *(_BYTE*)(a2 + 4);
        *(_BYTE*)(a2 + 4) = *(_BYTE*)(a4 + 4);
        *(_BYTE*)(a4 + 4) = v96;
        return result;
      }
      v21 = result;
      v22 = a2;
      v29 = a7 / 2;
      if ((unsigned __int64)(a7 + 1) < 3) {
      LABEL_31:
        if (a6 == (__int64*)a4) {
          goto LABEL_51;
        }
      }
      else {
        v30 = v29 + ((a2 - *result) >> 3);
        if (v30 >= 1) {
          v21 = &result[(unsigned __int64)v30 >> 9];
          v22 = *v21 + 8 * (v30 & 0x1FF);
          goto LABEL_31;
        }
        v42 = 511 - v30;
        v21 = &result[-(v42 >> 9)];
        v22 = *v21 + 8LL * (~(_WORD)v42 & 0x1FF);
        if (a6 == (__int64*)a4) {
        LABEL_51:
          v15 = 0;
          v13 = a3;
          v14 = a4;
          goto LABEL_52;
        }
      }
      v31 = (((__int64)a6 - *(_QWORD*)a5) >> 3) + ((a5 - (char*)a3) << 6);
      v32 = *a3;
      v33 = (a4 - *a3) >> 3;
      v34 = v31 - v33;
      if (v31 != v33) {
        v14 = a4;
        v13 = a3;
        do {
          v35 = v34 >> 1;
          v36 = v14;
          v37 = v13;
          if (v34 != 1) {
            v38 = v35 + ((v14 - v32) >> 3);
            if (v38 < 1) {
              v39 = 511 - v38;
              LOWORD(v38) = ~(511 - v38);
              v37 = &v13[-(v39 >> 9)];
            }
            else {
              v37 = &v13[(unsigned __int64)v38 >> 9];
            }
            v36 = *v37 + 8 * (v38 & 0x1FF);
          }
          if (*(unsigned __int8*)(v36 + 4) >
              (unsigned int)*(unsigned __int8*)(v22 + 4)) {
            v32 = *v37;
            v14 = v36 + 8;
            if (v36 + 8 - *v37 == 4096) {
              v40 = v37[1];
              ++v37;
              v32 = v40;
              v14 = v40;
            }
            v13 = v37;
            v35 = v34 + ~v35;
          }
          v34 = v35;
        } while (v35 != 0);
        if (v14 == a4) {
          v15 = 0;
        }
        else {
          v15 = (((char*)v13 - (char*)a3) << 6) - v33 + ((v14 - v32) >> 3);
        }
        goto LABEL_52;
      }
      goto LABEL_51;
    }
    v13 = a3;
    v14 = a4;
    v15 = a8 / 2;
    if ((unsigned __int64)(a8 + 1) < 3) {
      goto LABEL_14;
    }
    v16 = v15 + ((a4 - *a3) >> 3);
    if (v16 >= 1) {
      v13 = &a3[(unsigned __int64)v16 >> 9];
      v14 = *v13 + 8 * (v16 & 0x1FF);
    LABEL_14:
      if (a4 != a2) {
        goto LABEL_15;
      }
      goto LABEL_49;
    }
    v41 = 511 - v16;
    v13 = &a3[-(v41 >> 9)];
    v14 = *v13 + 8LL * (~(_WORD)v41 & 0x1FF);
    if (a4 != a2) {
    LABEL_15:
      v17 = ((a4 - *a3) >> 3) + (((char*)a3 - (char*)result) << 6);
      v18 = *result;
      v19 = (a2 - *result) >> 3;
      v20 = v17 - v19;
      if (v17 != v19) {
        v21 = result;
        v22 = a2;
        do {
          v23 = v20 >> 1;
          v24 = v22;
          v25 = v21;
          if (v20 != 1) {
            v26 = v23 + ((v22 - v18) >> 3);
            if (v26 < 1) {
              v27 = 511 - v26;
              LOWORD(v26) = ~(511 - v26);
              v25 = &v21[-(v27 >> 9)];
            }
            else {
              v25 = &v21[(unsigned __int64)v26 >> 9];
            }
            v24 = *v25 + 8 * (v26 & 0x1FF);
          }
          if (*(unsigned __int8*)(v14 + 4) <=
              (unsigned int)*(unsigned __int8*)(v24 + 4)) {
            v18 = *v25;
            v22 = v24 + 8;
            if (v24 + 8 - *v25 == 4096) {
              v28 = v25[1];
              ++v25;
              v18 = v28;
              v22 = v28;
            }
            v21 = v25;
            v23 = v20 + ~v23;
          }
          v20 = v23;
        } while (v23 != 0);
        if (v22 == a2) {
          v29 = 0;
        }
        else {
          v29 = ((v22 - v18) >> 3) - v19 + (((char*)v21 - (char*)result) << 6);
        }
        goto LABEL_52;
      }
    }
  LABEL_49:
    v29 = 0;
    v21 = result;
    v22 = a2;
  LABEL_52:
    v43 = v14;
    v44 = v13;
    if (v22 != a4) {
      v43 = v22;
      v44 = v21;
      if (a4 != v14) {
        v44 = v21;
        v43 = v22;
        v45 = a4;
        v46 = a3;
        while (1) {
          v47 = *(_DWORD*)v43;
          *(_DWORD*)v43 = *(_DWORD*)v45;
          *(_DWORD*)v45 = v47;
          LOBYTE(v47) = *(_BYTE*)(v43 + 4);
          *(_BYTE*)(v43 + 4) = *(_BYTE*)(v45 + 4);
          *(_BYTE*)(v45 + 4) = v47;
          v43 += 8;
          if (v43 - *v44 == 4096) {
            v48 = v44[1];
            ++v44;
            v43 = v48;
          }
          v45 += 8;
          if (v45 - *v46 == 4096) {
            v49 = v46[1];
            ++v46;
            v45 = v49;
          }
          if (v45 == v14) {
            break;
          }
          if (v43 == a4) {
            a4 = v45;
            a3 = v46;
          }
        }
        if (v43 != a4) {
          v50 = v44;
          v51 = v43;
          v52 = a4;
          v53 = a3;
          while (1) {
            v54 = *(_DWORD*)v51;
            *(_DWORD*)v51 = *(_DWORD*)v52;
            *(_DWORD*)v52 = v54;
            LOBYTE(v54) = *(_BYTE*)(v51 + 4);
            *(_BYTE*)(v51 + 4) = *(_BYTE*)(v52 + 4);
            *(_BYTE*)(v52 + 4) = v54;
            v51 += 8;
            if (v51 - *v50 == 4096) {
              v55 = v50[1];
              ++v50;
              v51 = v55;
            }
            v52 += 8;
            if (v52 - *v53 == 4096) {
              v56 = v53[1];
              ++v53;
              v52 = v56;
            }
            v57 = v51 == a4;
            if (v52 == v14) {
              if (v51 == a4) {
                break;
              }
              while (1) {
                v58 = *(_DWORD*)v51;
                *(_DWORD*)v51 = *(_DWORD*)a4;
                *(_DWORD*)a4 = v58;
                LOBYTE(v58) = *(_BYTE*)(v51 + 4);
                *(_BYTE*)(v51 + 4) = *(_BYTE*)(a4 + 4);
                *(_BYTE*)(a4 + 4) = v58;
                v51 += 8;
                if (v51 - *v50 == 4096) {
                  v59 = v50[1];
                  ++v50;
                  v51 = v59;
                }
                v53 = a3;
                v52 = a4 + 8;
                if (a4 + 8 - *a3 == 4096) {
                  v52 = a3[1];
                  v53 = a3 + 1;
                }
                v57 = v51 == a4;
                if (v52 != v14) {
                  break;
                }
                if (v51 == a4) {
                  goto LABEL_79;
                }
              }
            }
            if (v57) {
              a4 = v52;
              a3 = v53;
            }
          }
        }
      }
    }
  LABEL_79:
    v60 = a7 - v29;
    v61 = a8 - v15;
    if (v29 + v15 >= a8 - (v29 + v15) + a7) {
      v110 = a9;
      v111 = a10;
      v67 = a10;
      v68 = a9;
      v69 = result;
      v112 = v29;
      v70 = a2;
      v71 = v14;
      v72 = v21;
      v61 = v15;
      MapUnitInfoDetail_1831600(v44, v43, v13, v71, a5, a6, v60, a8 - v15, v110,
                                v111);
      v60 = v112;
      result = v69;
      a9 = v68;
      a10 = v67;
      a2 = v70;
      a3 = v72;
      v14 = v22;
      a5 = (char*)v44;
      a6 = (__int64*)v43;
    }
    else {
      v62 = v22;
      v63 = a5;
      v64 = a6;
      v65 = v29;
      v66 = v13;
      MapUnitInfoDetail_1831600(result, a2, v21, v62, v44, v43, v65, v15, a9,
                                a10);
      a3 = v66;
      a5 = v63;
      a6 = v64;
      result = v44;
      a2 = v43;
    }
    a7 = v60;
    a8 = v61;
    a4 = v14;
    if (v61 == 0) {
      return result;
    }
  }
  if (a7 > a8) {
    if ((__int64*)a4 == a6) {
      return result;
    }
    v73 = (_QWORD*)a9;
    v74 = (__int64*)a4;
    v75 = a3;
    do {
      v76 = *v74++;
      *v73 = v76;
      if ((char*)((char*)v74 - *v75) == (char*)GameRoutine_1000) {
        v77 = (__int64*)v75[1];
        ++v75;
        v74 = v77;
      }
      ++v73;
    } while (v74 != a6);
    while (2) {
      if (a4 == a2) {
        if ((_QWORD*)a9 != v73) {
          v97 = *(__int64**)a5;
          do {
            v98 = (__int64)a6;
            if (a6 == v97) {
              v98 = *((_QWORD*)a5 - 1) + 4096LL;
            }
            *(_DWORD*)(v98 - 8) = *((_DWORD*)v73 - 2);
            *(_BYTE*)(v98 - 4) = *((_BYTE*)v73 - 4);
            v97 = *(__int64**)a5;
            if (a6 == *(__int64**)a5) {
              v99 = *((__int64**)a5 - 1);
              a5 -= 8;
              v97 = v99;
              a6 = v99 + 512;
            }
            --v73;
            --a6;
          } while (v73 != (_QWORD*)a9);
        }
        return result;
      }
      if (*a3 == a4) {
        v80 = *(a3 - 1);
        v78 = (char*)v73 - 4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(v80 + 4092)) {
          goto LABEL_104;
        }
        v79 = v80 + 4096;
      }
      else {
        v78 = (char*)v73 - 4;
        v79 = a4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(a4 - 4)) {
        LABEL_104:
          v83 = (__int64)a6;
          if (a6 == *(__int64**)a5) {
            v83 = *((_QWORD*)a5 - 1) + 4096LL;
          }
          v84 = *((_DWORD*)v73-- - 2);
          *(_DWORD*)(v83 - 8) = v84;
          *(_BYTE*)(v83 - 4) = *v78;
          goto LABEL_107;
        }
      }
      v81 = (__int64)a6;
      if (a6 == *(__int64**)a5) {
        v81 = *((_QWORD*)a5 - 1) + 4096LL;
      }
      *(_DWORD*)(v81 - 8) = *(_DWORD*)(v79 - 8);
      *(_BYTE*)(v81 - 4) = *(_BYTE*)(v79 - 4);
      if (a4 == *a3) {
        v82 = *--a3;
        a4 = v82 + 4096;
      }
      a4 -= 8;
    LABEL_107:
      if (a6 == *(__int64**)a5) {
        v85 = *((_QWORD*)a5 - 1);
        a5 -= 8;
        a6 = (__int64*)(v85 + 4096);
      }
      --a6;
      if (v73 == (_QWORD*)a9) {
        return result;
      }
      continue;
    }
  }
  if (a2 == a4) {
    return result;
  }
  v86 = -a9;
  v87 = (_QWORD*)a9;
  v88 = (__int64*)a2;
  v89 = result;
  do {
    v90 = *v88++;
    *v87 = v90;
    if ((char*)((char*)v88 - *v89) == (char*)GameRoutine_1000) {
      v91 = (__int64*)v89[1];
      ++v89;
      v88 = v91;
    }
    ++v87;
    v86 -= 8;
  } while (v88 != (__int64*)a4);
  while ((__int64*)a4 != a6) {
    if (*(unsigned __int8*)(a4 + 4) <=
        (unsigned int)*(unsigned __int8*)(a9 + 4)) {
      *(_DWORD*)a2 = *(_DWORD*)a9;
      v94 = *(_BYTE*)(a9 + 4);
      a9 += 8;
      *(_BYTE*)(a2 + 4) = v94;
    }
    else {
      *(_DWORD*)a2 = *(_DWORD*)a4;
      v92 = *(_BYTE*)(a4 + 4);
      a4 += 8;
      *(_BYTE*)(a2 + 4) = v92;
      if (a4 - *a3 == 4096) {
        v93 = a3[1];
        ++a3;
        a4 = v93;
      }
    }
    a2 += 8;
    if (a2 - *result == 4096) {
      v95 = result[1];
      ++result;
      a2 = v95;
    }
    if (v87 == (_QWORD*)a9) {
      return result;
    }
  }
  v100 = *result;
  v101 = -v86;
  while (1) {
    v103 = (v101 - a9) >> 3;
    v104 = (v100 - a2 + 4096) >> 3;
    if (v103 >= v104) {
      v103 = v104;
    }
    if (v103 != 0) {
      v105 = 8 * v103 - 8;
      if ((~(_BYTE)v105 & 0x38) != 0) {
        v107 = ((unsigned __int8)((unsigned int)v105 >> 3) + 1) & 7;
        v106 = a9;
        do {
          --v107;
          *(_DWORD*)a2 = *(_DWORD*)v106;
          v108 = *(_BYTE*)(v106 + 4);
          v106 += 8;
          *(_BYTE*)(a2 + 4) = v108;
          a2 += 8;
        } while (v107 != 0);
      }
      else {
        v106 = a9;
      }
      a9 += 8 * v103;
      if (v105 >= 0x38) {
        do {
          *(_DWORD*)a2 = *(_DWORD*)v106;
          *(_BYTE*)(a2 + 4) = *(_BYTE*)(v106 + 4);
          *(_DWORD*)(a2 + 8) = *(_DWORD*)(v106 + 8);
          *(_BYTE*)(a2 + 12) = *(_BYTE*)(v106 + 12);
          *(_DWORD*)(a2 + 16) = *(_DWORD*)(v106 + 16);
          *(_BYTE*)(a2 + 20) = *(_BYTE*)(v106 + 20);
          *(_DWORD*)(a2 + 24) = *(_DWORD*)(v106 + 24);
          *(_BYTE*)(a2 + 28) = *(_BYTE*)(v106 + 28);
          *(_DWORD*)(a2 + 32) = *(_DWORD*)(v106 + 32);
          *(_BYTE*)(a2 + 36) = *(_BYTE*)(v106 + 36);
          *(_DWORD*)(a2 + 40) = *(_DWORD*)(v106 + 40);
          *(_BYTE*)(a2 + 44) = *(_BYTE*)(v106 + 44);
          *(_DWORD*)(a2 + 48) = *(_DWORD*)(v106 + 48);
          *(_BYTE*)(a2 + 52) = *(_BYTE*)(v106 + 52);
          *(_DWORD*)(a2 + 56) = *(_DWORD*)(v106 + 56);
          v109 = *(_BYTE*)(v106 + 60);
          v106 += 64;
          *(_BYTE*)(a2 + 60) = v109;
          a2 += 64;
        } while (v106 != a9);
      }
      if (v87 == (_QWORD*)a9) {
        break;
      }
    }
    v102 = result[1];
    ++result;
    v100 = v102;
    a2 = v102;
  }
  return result;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda5_Invoke(__int64 result,
                                                            unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
  v5 = *a2;
  v3 = *(_QWORD*)(v2 + 1744);
  if ((((unsigned __int64)v5 >> 5) & 0x7F) + 1 <=
          (*(_QWORD*)(v2 + 1752) - v3) >> 2 &&
      ((*(_DWORD*)(v3 + 4 * (((unsigned __int64)v5 >> 5) & 0x7F)) >> v5) & 1) !=
          0) {
    v4 = result;
    result = game_HasActiveSkill_843420(&v5, v2 + 1744);
    if ((result & 1) != 0) {
      **(_BYTE**)(v4 + 16) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
