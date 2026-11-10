#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_103d5c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelTrickDestroy_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTrickDestroy_Destructor(_QWORD* a1);
__int64 MapPanelTrickDestroy_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 game_map_MapPanelTrickDestroy_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                  _DWORD* a2,
                                                                  _DWORD* a3);
__int64 game_map_MapPanelTrickDestroy_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                  _DWORD* a2,
                                                                  _DWORD* a3);
__int64 CharacterController_d42d20(_QWORD);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_f54fe0(_QWORD);
__int64 GameRoutine_fcacb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 MapDrawConst_fcbcc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapPanelRage_f1a700(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_map_f54910(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_2003580[])();
extern __int64 (*GameData_2003600[])();
extern __int64 (*game_map_TrickDestroyMeshData_vtable[])();
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_2234698;
extern __int64 GameData_22346a0;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern unsigned __int8 GameData_1b41abf[17];
void __attribute__((noreturn)) GameRoutine_103d5a0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(void);
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_map_MapPanelTrickDestroy_UpdateTarget(__int64 a1);

void game_map_MapPanelTrickDestroy_UpdateTarget(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  bool v16;
  char* v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  _QWORD* v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 (**v31)();
  char* v32;
  signed __int64 v33;
  __int64 (**v34)();
  char* v35;
  signed __int64 v36;
  char v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 (**v41)();
  __int64* v42;
  __int64* v43;
  char* v44;
  char v45;
  __int64* v46;
  _QWORD* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int8* v53;
  __int64 v54;
  __int64* v55;
  unsigned __int8* v56;
  unsigned __int8* v57;
  unsigned __int8* v58;
  unsigned __int8* v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int8* v65;
  __int64 v66;
  unsigned __int8* v67;
  _BYTE* v68;
  unsigned __int8 v69;
  __int64 v70;
  char* v71;
  char* v72;
  __int64 v73;
  void* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  __int64* v79;
  float32x4_t v80;
  float32x4_t* v81;
  float32x4_t* v82;
  float32x4_t* v83;
  _QWORD* v84;
  float32x4_t v85;
  __int64 v86;
  float32x4_t v87;
  int8x16_t v88;
  float32x4_t v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64* v94;
  __int64 v95;
  _QWORD* v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int128 v103;
  __int128 v104;
  __int128 v105;
  __int64 v106;
  __int128 v107;
  __int64 v108;
  __int128 v109;
  __int128 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;
  __int64 v121;
  __int64 v122;
  float32x4_t* v123;
  float32x4_t* v124;
  float32x4_t* v125;
  void (**v126)(float32x4_t*);
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  float* v135;
  float* v136;
  __int64 v137;
  __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  float v142;
  float v143;
  float v144;
  float v145;
  float v146;
  __int64 v147;
  float* v148;
  float* v149;
  float* v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  void (***v155)(_QWORD);
  void (***v156)(_QWORD);
  __int64 v157;
  __int64* v158;
  __int64 v159;
  void (***v160)(_QWORD);
  void (***v161)(_QWORD);
  void (**v162)(_QWORD);
  __int64 v163;
  __int64 v164;
  __int64* v165;
  char* v166;
  unsigned __int64 v167;
  char* v168;
  unsigned __int64 v169;
  __int64 v170;
  __int64* v171;
  __int64 (**v173)();
  char* v174;
  __int64 v175;
  __int64 (***v176)();
  __int64 (**v177)();
  __int64 (***v178)();
  __int128 v179;
  __int128 v180;
  __int128 v181;
  __int128 v182;
  __int64 v183;
  __int64 v184;
  float32x4_t* v185;
  float32x4_t* v186;
  __int64 v187;
  __int64 v188;
  __int128 v189;
  __int64 v190;
  __int64 v191;
  float32x4_t v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  int v199;
  char** v200;
  char* v201;
  char* v202;
  unsigned __int64 v203;
  unsigned __int8* v204;
  unsigned __int8* v205;
  __int64 v206;

  v1 = a1;
  if (*(_BYTE*)(a1 + 8) == 1) {
    v2 = *(_QWORD**)(a1 + 16);
    v3 = (_QWORD*)(a1 + 24);
    if (v2 != (_QWORD*)(a1 + 24)) {
      do {
        v9 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void*))(v9 + 48))(&v2[6]) & 1) != 0) {
          v10 = 1036831949;
        }
        else {
          v10 = 0;
          *((_DWORD*)v2 + 69) = 0;
        }
        v11 = (_QWORD*)v2[1];
        *((_DWORD*)v2 + 70) = v10;
        if (v11 != nullptr) {
          do {
            v12 = v11;
            v11 = (_QWORD*)*v11;
          } while (v11 != nullptr);
        }
        else {
          do {
            v12 = (_QWORD*)v2[2];
            v16 = v2 == (_QWORD*)*v12;
            v2 = v12;
          } while (!v16);
        }
        v2 = v12;
      } while (v12 != v3);
    }
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
    if ((v4 & 1) == 0) {
      goto LABEL_219;
    }
    v205 = nullptr;
    v206 = 0;
    v204 = nullptr;
    v5 = GameData_212d020[0];
    if (*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) < 3u ||
        (v6 = GameData_212cfd0[0],
         *(_BYTE*)(v4 = *GameData_212cfd0[0] + 8) == 0) ||
        (v4 = game_UnitPool_Get(v4)) == 0 || *(_QWORD*)(v4 + 392) == 0 ||
        (*(_BYTE*)(v4 + 417) & 0x1C) != 0 ||
        (v7 = v4, (*(float (**)(__int64))(*(_QWORD*)(v4 + 152) + 16LL))(
                      v4 + 152) <= 0.0f) ||
        *(_DWORD*)(*(_QWORD*)v5 + 4368LL) != 6 ||
        (*(_BYTE*)(*v6 + 8) == 0 ? (v8 = v7, v4 = 0)
                                 : (v4 = game_UnitPool_Get(*v6 + 8), v8 = v7),
         v4 != v8)) {
      v14 = *(unsigned __int8**)(*(_QWORD*)GameData_212d038[0] + 88LL);
      v13 = *(unsigned __int8**)(*(_QWORD*)GameData_212d038[0] + 96LL);
      if (v14 != v13) {
        do {
          v15 = v204;
          if (v204 != v205) {
            while (1) {
              v16 = *v15 == *v14 && v15[1] == v14[1];
              if (v16) {
                break;
              }
              v15 += 4;
              if (v15 == v205) {
                goto LABEL_27;
              }
            }
          }
          if (v15 == v205) {
          LABEL_27:
            v4 = MapPanelRage_f1a700(&v204, v14);
          }
          v14 += 4;
        } while (v14 != v13);
        v17 = (char*)v204;
        v166 = (char*)v205;
        if (v204 != v205 && GameData_2234698 != GameData_22346a0) {
          v165 = (__int64*)(v1 + 24);
          v169 = 0;
          v18 = nullptr;
          v19 = nullptr;
          v20 = GameData_212cfb8[0];
          v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          do {
            v22 = (unsigned __int8*)GameData_2234698;
            v23 = GameData_22346a0;
            while (v22 != (unsigned __int8*)v23) {
              v24 = *v22;
              v25 = *v17 + 32 * v17[1];
              v26 = *(_QWORD*)(*v20 + 16);
              if (v25 >= 0x400) {
                v25 = 0;
              }
              v27 =
                  *(__int16*)(v26 +
                              ((unsigned __int64)GameData_1b41abf[v24] << 11) +
                              2LL * v25 + 104);
              if ((v27 & 0x8000000000000000LL) == 0) {
                v28 = *(_QWORD*)(v26 + 8);
                if (v28 != 0) {
                  v29 = v28 + 144LL * (int)v27;
                  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 40LL))(v29);
                  if ((_DWORD)v24 == (unsigned __int8)v4) {
                    v174 = nullptr;
                    v175 = 0;
                    v173 = nullptr;
                    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 272LL))(v29);
                    if ((v4 & 1) != 0) {
                      v177 = GameData_2003580;
                      v178 = &v173;
                      *(_QWORD*)&v180 = &v177;
                      (*(void (**)(__int64, __int64 (***)()))(
                          *(_QWORD*)v29 + 744LL))(v29, &v177);
                      v4 = v180;
                      if ((__int64 (***)())v180 == &v177) {
                        v30 = 32;
                      LABEL_55:
                        v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v180 + v30))(
                            (__int64)v180);
                      }
                      else if ((_QWORD)v180 != 0) {
                        v30 = 40;
                        goto LABEL_55;
                      }
                      v31 = v173;
                      v32 = v174;
                      v33 = v174 - (char*)v173;
                      if ((unsigned __int64)(v174 - (char*)v173) >= 5) {
                        if ((unsigned __int64)v19 >= v169) {
                          v168 = (char*)((char*)v19 - (char*)v18);
                          v38 = v19 - v18;
                          v39 = 0xAAAAAAAAAAAAAAABLL * v38 + 1;
                          if (v39 > 0xAAAAAAAAAAAAAAALL) {
                            GameRoutine_103d5a0();
                          }
                          if (0x5555555555555556LL *
                                  ((__int64)(v169 - (_QWORD)v18) >> 3) >
                              v39) {
                            v39 = 0x5555555555555556LL *
                                  ((__int64)(v169 - (_QWORD)v18) >> 3);
                          }
                          if (0xAAAAAAAAAAAAAAABLL *
                                  ((__int64)(v169 - (_QWORD)v18) >> 3) >=
                              0x555555555555555LL) {
                            v40 = 0xAAAAAAAAAAAAAAALL;
                          }
                          else {
                            v40 = v39;
                          }
                          v167 = v40;
                          if (v40 != 0) {
                            if (v40 > 0xAAAAAAAAAAAAAAALL) {
                            LABEL_267:
                              GameRoutine_60a210(v4);
                            }
                            v41 = v173;
                            v4 = fw_memory_HeapManager_Allocate(*v21, 24 * v40,
                                                                16, 0);
                            v31 = v41;
                          }
                          else {
                            v4 = 0;
                          }
                          v170 = v4;
                          v42 = (__int64*)&v168[v4];
                          v42[1] = 0;
                          v42[2] = 0;
                          *v42 = 0;
                          if (v32 != (char*)v31) {
                            if (v33 < 0) {
                            LABEL_266:
                              GameRoutine_74e1f0();
                            }
                            v43 = v18;
                            v44 = (char*)v31;
                            v4 = fw_memory_HeapManager_Allocate(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr, v33, 16,
                                0);
                            *v42 = v4;
                            v42[2] = v4 + v33;
                            do {
                              *(_BYTE*)v4 = *v44;
                              *(_BYTE*)(v4 + 1) = v44[1];
                              *(_BYTE*)(v4 + 2) = v44[2];
                              v45 = v44[3];
                              v44 += 4;
                              *(_BYTE*)(v4 + 3) = v45;
                              v4 += 4;
                            } while (v44 != v32);
                            v42[1] = v4;
                            v18 = v43;
                            v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
                          }
                          if (v18 != v19) {
                            v46 = v18;
                            v47 = (_QWORD*)(v170 + (char*)&v19[-v38] -
                                            (char*)v18 + 8);
                            do {
                              *v47 = 0;
                              v47[1] = 0;
                              *(v47 - 1) = *v46;
                              *v47 = v46[1];
                              v47[1] = v46[2];
                              v46[1] = 0;
                              v46[2] = 0;
                              *v46 = 0;
                              v46 += 3;
                              v47 += 3;
                            } while (v46 != v19);
                            v48 = v18;
                            do {
                              if (*v48 != 0) {
                                v48[1] = *v48;
                                v49 = 128;
                                if (*(_QWORD*)(*v21 + 200LL) == 0) {
                                  v49 = 56;
                                }
                                v4 = nn_mem_StandardAllocator_Free(*v21 + v49);
                              }
                              v48 += 3;
                            } while (v48 != v19);
                          }
                          v19 = v42 + 3;
                          v169 = v170 + 24 * v167;
                          if (v18 != nullptr) {
                            v50 = 128;
                            if (*(_QWORD*)(*v21 + 200LL) == 0) {
                              v50 = 56;
                            }
                            v4 = nn_mem_StandardAllocator_Free(*v21 + v50);
                          }
                          v18 = (__int64*)((char*)v42 - v168);
                          v20 = GameData_212cfb8[0];
                        }
                        else {
                          v19[1] = 0;
                          v19[2] = 0;
                          *v19 = 0;
                          v34 = v173;
                          v35 = v174;
                          v36 = v174 - (char*)v173;
                          if (v174 != (char*)v173) {
                            if (v36 < 0) {
                              goto LABEL_266;
                            }
                            v4 = fw_memory_HeapManager_Allocate(
                                *v21, v174 - (char*)v173, 16, 0);
                            *v19 = v4;
                            v19[1] = v4;
                            v19[2] = v4 + v36;
                            do {
                              *(_BYTE*)v4 = *(_BYTE*)v34;
                              *(_BYTE*)(v4 + 1) = *((_BYTE*)v34 + 1);
                              *(_BYTE*)(v4 + 2) = *((_BYTE*)v34 + 2);
                              v37 = *((_BYTE*)v34 + 3);
                              v34 = (__int64 (**)())((char*)v34 + 4);
                              *(_BYTE*)(v4 + 3) = v37;
                              v4 += 4;
                            } while (v34 != (__int64 (**)())v35);
                            v19[1] = v4;
                          }
                          v19 += 3;
                        }
                        goto LABEL_95;
                      }
                      if (v173 == nullptr) {
                        goto LABEL_43;
                      }
                    }
                    else {
                    LABEL_95:
                      v31 = v173;
                      if (v173 == nullptr) {
                        goto LABEL_43;
                      }
                    }
                    v51 = *v21;
                    v174 = (char*)v31;
                    v52 = 128;
                    if (*(_QWORD*)(v51 + 200) == 0) {
                      v52 = 56;
                    }
                    v4 = nn_mem_StandardAllocator_Free(v51 + v52);
                  }
                }
              }
            LABEL_43:
              ++v22;
            }
            v17 += 4;
          } while (v17 != v166);
          v202 = nullptr;
          v203 = 0;
          v201 = nullptr;
          if (v18 != v19) {
            v53 = nullptr;
            v54 = 0;
            v171 = v18;
            v55 = v18;
            do {
              v57 = (unsigned __int8*)*v55;
              v56 = (unsigned __int8*)v55[1];
              while (v57 != v56) {
                if ((unsigned __int8*)v54 == v53) {
                LABEL_114:
                  if ((unsigned __int64)v53 < v203) {
                    *v53 = *v57;
                    v53[1] = v57[1];
                    v53[2] = v57[2];
                    v53[3] = v57[3];
                    v53 += 4;
                  }
                  else {
                    v60 = &v53[-v54];
                    v61 = (__int64)&v53[-v54] >> 2;
                    v62 = v61 + 1;
                    if ((unsigned __int64)(v61 + 1) >> 62 != 0) {
                      goto LABEL_266;
                    }
                    v63 = v203 - v54;
                    if ((__int64)(v203 - v54) >> 1 > v62) {
                      v62 = v63 >> 1;
                    }
                    if ((unsigned __int64)v63 >= 0x7FFFFFFFFFFFFFFCLL) {
                      v64 = 0x3FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v64 = v62;
                    }
                    if (v64 >> 62 != 0) {
                      goto LABEL_267;
                    }
                    v4 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v64, 16, 0);
                    v65 = &v60[v4];
                    v66 = (__int64)&v60[v4 + -4 * v61];
                    *v65 = *v57;
                    v65[1] = v57[1];
                    v65[2] = v57[2];
                    v65[3] = v57[3];
                    if ((unsigned __int8*)v54 != v53) {
                      v67 = (unsigned __int8*)v54;
                      v68 = (_BYTE*)v66;
                      do {
                        *v68 = *v67;
                        v68[1] = v67[1];
                        v68[2] = v67[2];
                        v69 = v67[3];
                        v67 += 4;
                        v68[3] = v69;
                        v68 += 4;
                      } while (v67 != v53);
                    }
                    v53 = v65 + 4;
                    v201 = (char*)v66;
                    v202 = (char*)(v65 + 4);
                    v203 = v4 + 4 * v64;
                    if (v54 != 0) {
                      v70 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v70 = 56;
                      }
                      v4 = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
                    }
                    v54 = v66;
                  }
                  v202 = (char*)v53;
                }
                else {
                  v58 = (unsigned __int8*)v54;
                  while (*v58 != *v57 || v58[1] != v57[1]) {
                    v58 += 4;
                    if (v58 == v53) {
                      goto LABEL_114;
                    }
                  }
                }
                v57 += 4;
              }
              v55 += 3;
            } while (v55 != v19);
            if (v53 != (unsigned __int8*)v54) {
              v200 = &v201;
              game_map_f54910(&v177);
              v71 = v201;
              v72 = v202;
              v73 = a1;
              v177 = game_map_TrickDestroyMeshData_vtable;
              if (v201 != v202) {
                v74 = GameData_212c958;
                do {
                  v76 = (unsigned int)*v71;
                  v77 = (unsigned int)v71[1];
                  v173 = GameData_2003600;
                  v174 = (char*)&v200;
                  v176 = &v173;
                  v78 = MapDrawConst_fcbcc0(v73, 1, v76, v77, &v173, 1);
                  if (v176 == &v173) {
                    v75 = 4;
                  }
                  else {
                    if (v176 == nullptr) {
                      goto LABEL_135;
                    }
                    v75 = 5;
                  }
                  (*v176)[v75]();
                LABEL_135:
                  v73 = a1;
                  GameRoutine_fcacb0(a1, &v177, 1, (unsigned int)*v71,
                                     (unsigned int)v71[1], v78, v74);
                  v71 += 4;
                } while (v71 != v72);
              }
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21a6130,
                       memory_order_acquire) &
                   1) == 0 &&
                  (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
                v164 = *((_QWORD*)GameData_212c540 + 1);
                *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                *((_QWORD*)&GameData_21a6120 + 1) = v164;
                __cxa_guard_release(&GameData_21a6130);
              }
              v79 = v165;
              v80 = COERCE_AS(float32x4_t, GameData_21a6120);
              v82 = v185;
              v81 = v186;
              if (v186 == v185) {
                v84 = (_QWORD*)fw_memory_g_heap_manager_ptr;
              }
              else {
                v83 = v185;
                v84 = (_QWORD*)fw_memory_g_heap_manager_ptr;
                do {
                  v85 = v83[1];
                  v83 += 4;
                  v80 = vaddq_f32(v80, v85);
                } while (v83 != v186);
                v80 = vmulq_n_f32(
                    v80,
                    0x1.0000000000000p+0f /
                        (float)(unsigned __int64)(((char*)v186 - (char*)v185) >>
                                                  6));
                LANES128(v80).n128_u32[3] = 0;
              }
              v87 = vsubq_f32(v80, v192);
              v88 = vmulq_f32(v87, v87);
              LANES128(v88).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
                          .n64_f32[0] > 0.0f &&
                  v186 != v185) {
                do {
                  v82[1] = vsubq_f32(v82[1], v87);
                  v82 += 4;
                } while (v82 != v81);
              }
              LANES128(v90).n128_u64[0] = LANES128(v80).n128_u64[0];
              LANES128(v90).n128_u64[1] = LANES128(v80).n128_u32[2];
              v192 = v90;
              v91 = ((__int64 (*)(__int64 (***)()))v177[4])(&v177);
              v92 = *v165;
              v93 = v91;
              v94 = v165;
              v95 = (__int64)v165;
              if (*v165 != 0) {
                v96 = (_QWORD*)*v165;
                do {
                  v97 = v96[4];
                  if (v91 >= v97) {
                    if (v97 >= v91) {
                      while (1) {
                        while (1) {
                          v98 = *(_QWORD*)(v92 + 32);
                          if (v91 >= v98) {
                            break;
                          }
                          v92 = *(_QWORD*)v92;
                          if (v92 == 0) {
                            goto LABEL_165;
                          }
                        }
                        if (v98 >= v91) {
                          goto LABEL_186;
                        }
                        v92 = *(_QWORD*)(v92 + 8);
                        if (v92 == 0) {
                        LABEL_165:
                          String_60a250("map::at:  key not found");
                        }
                      }
                    }
                    ++v96;
                  }
                  v96 = (_QWORD*)*v96;
                } while (v96 != nullptr);
                while (1) {
                  while (1) {
                    v99 = *(_QWORD*)(v92 + 32);
                    v95 = v92;
                    if (v91 >= v99) {
                      break;
                    }
                    v92 = *(_QWORD*)v92;
                    v94 = (__int64*)v95;
                    if (*(_QWORD*)v95 == 0) {
                      goto LABEL_171;
                    }
                  }
                  if (v99 >= v91) {
                    break;
                  }
                  v92 = *(_QWORD*)(v92 + 8);
                  if (v92 == 0) {
                    v94 = (__int64*)(v95 + 8);
                    goto LABEL_171;
                  }
                }
              }
              else {
              LABEL_171:
                v100 = v95;
                v95 = fw_memory_HeapManager_Allocate(*v84, 304, 16, 0);
                *(_QWORD*)(v95 + 32) = v93;
                game_map_f54910(v95 + 48);
                *(_QWORD*)(v95 + 48) = game_map_TrickDestroyMeshData_vtable;
                *(_QWORD*)v95 = 0;
                *(_QWORD*)(v95 + 8) = 0;
                v101 = v95;
                *(_QWORD*)(v95 + 16) = v100;
                *v94 = v95;
                v102 = **(_QWORD**)(a1 + 16);
                if (v102 != 0) {
                  *(_QWORD*)(a1 + 16) = v102;
                  v101 = *v94;
                }
                fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 24), v101);
                ++*(_QWORD*)(a1 + 32);
              }
              *(_QWORD*)(v95 + 56) = v178;
              v103 = v180;
              *(_OWORD*)(v95 + 64) = v179;
              *(_OWORD*)(v95 + 80) = v103;
              v104 = v181;
              v105 = v182;
              v106 = v184;
              *(_QWORD*)(v95 + 128) = v183;
              *(_QWORD*)(v95 + 136) = v106;
              *(_OWORD*)(v95 + 96) = v104;
              *(_OWORD*)(v95 + 112) = v105;
              if ((__int64 (***)())(v95 + 48) != &v177) {
                GameRoutine_f155c0(v95 + 144);
                CharacterController_d42d20(v95 + 168);
              }
              v107 = v189;
              v108 = v191;
              v92 = (__int64)v165;
              *(_QWORD*)(v95 + 208) = v190;
              *(_QWORD*)(v95 + 216) = v108;
              *(_QWORD*)(v95 + 192) = v107;
              v109 = *(_OWORD*)(v95 + 192);
              *((_QWORD*)&v109 + 1) = DWORD2(v107);
              DWORD2(v107) = LANES128(v192).n128_u32[2];
              *(_QWORD*)(v95 + 224) = LANES128(v192).n128_u64[0];
              *(_OWORD*)(v95 + 192) = v109;
              v110 = *(_OWORD*)(v95 + 224);
              v111 = v194;
              *((_QWORD*)&v110 + 1) = DWORD2(v107);
              *(_QWORD*)(v95 + 240) = v193;
              *(_QWORD*)(v95 + 248) = v111;
              v112 = v196;
              *(_QWORD*)(v95 + 256) = v195;
              *(_QWORD*)(v95 + 264) = v112;
              *(_OWORD*)(v95 + 224) = v110;
              *(_DWORD*)(v95 + 288) = v199;
              v113 = v198;
              *(_QWORD*)(v95 + 272) = v197;
              *(_QWORD*)(v95 + 280) = v113;
              v114 = *v165;
              if (*v165 != 0) {
                while (1) {
                  while (1) {
                    v92 = v114;
                    v115 = *(_QWORD*)(v114 + 32);
                    if (v93 >= v115) {
                      break;
                    }
                    v114 = *(_QWORD*)v92;
                    v79 = (__int64*)v92;
                    if (*(_QWORD*)v92 == 0) {
                      goto LABEL_183;
                    }
                  }
                  if (v115 >= v93) {
                    break;
                  }
                  v114 = *(_QWORD*)(v92 + 8);
                  if (v114 == 0) {
                    v79 = (__int64*)(v92 + 8);
                    goto LABEL_183;
                  }
                }
              }
              else {
              LABEL_183:
                v116 = v92;
                v92 = fw_memory_HeapManager_Allocate(*v84, 304, 16, 0);
                *(_QWORD*)(v92 + 32) = v93;
                game_map_f54910(v92 + 48);
                *(_QWORD*)(v92 + 48) = game_map_TrickDestroyMeshData_vtable;
                *(_QWORD*)v92 = 0;
                *(_QWORD*)(v92 + 8) = 0;
                v117 = v92;
                *(_QWORD*)(v92 + 16) = v116;
                *v79 = v92;
                v118 = **(_QWORD**)(a1 + 16);
                if (v118 != 0) {
                  *(_QWORD*)(a1 + 16) = v118;
                  v117 = *v79;
                }
                fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 24), v117);
                ++*(_QWORD*)(a1 + 32);
              }
            LABEL_186:
              v119 = *(_QWORD*)(v92 + 48);
              *(_BYTE*)(v92 + 272) = 1;
              if (((*(__int64 (**)(void*))(v119 + 48))((void*)(v92 + 48)) &
                   1) != 0) {
                v120 = 1036831949;
              }
              else {
                v120 = 0;
                *(_DWORD*)(v92 + 276) = 1065353216;
              }
              *(_DWORD*)(v92 + 280) = v120;
              v177 = (__int64 (**)())(GameData_212f8b0[0] + 2);
              if (v187 != 0) {
                v121 = *v84;
                v188 = v187;
                v122 = 128;
                if (*(_QWORD*)(v121 + 200) == 0) {
                  v122 = 56;
                }
                nn_mem_StandardAllocator_Free(v121 + v122);
              }
              v123 = v185;
              if (v185 != nullptr) {
                if (v185 == v186) {
                  goto LABEL_199;
                }
                v124 = v186 - 4;
                v125 = v186 - 4;
                do {
                  v126 = (void (**)(float32x4_t*))LANES128(*(v125)).n128_u64[0];
                  v125 -= 4;
                  (*v126)(v124);
                  v16 = v124 == v123;
                  v124 = v125;
                } while (!v16);
                v186 = v123;
                if (v185 != nullptr) {
                LABEL_199:
                  v127 = 128;
                  if (*(_QWORD*)(*v84 + 200LL) == 0) {
                    v127 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v84 + v127);
                }
              }
              v54 = (__int64)v201;
            }
            v1 = a1;
            v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
            if (v54 != 0) {
              v128 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
              v202 = (char*)v54;
              v129 = 128;
              if (*(_QWORD*)(v128 + 200) == 0) {
                v129 = 56;
              }
              nn_mem_StandardAllocator_Free(v128 + v129);
            }
            if (v171 == nullptr) {
              goto LABEL_215;
            }
            v130 = v19;
            do {
              v132 = *(v130 - 3);
              v130 -= 3;
              v131 = v132;
              if (v132 != 0) {
                *(v19 - 2) = v131;
                if (*(_QWORD*)(*v21 + 200LL) != 0) {
                  v133 = 128;
                }
                else {
                  v133 = 56;
                }
                nn_mem_StandardAllocator_Free(*v21 + v133);
              }
              v19 = v130;
            } while (v130 != v171);
            goto LABEL_145;
          }
          v1 = a1;
          if (v19 != nullptr) {
          LABEL_145:
            v86 = 128;
            if (*(_QWORD*)(*v21 + 200LL) == 0) {
              v86 = 56;
            }
            nn_mem_StandardAllocator_Free(*v21 + v86);
          }
        }
      }
    }
  LABEL_215:
    if (v204 != nullptr) {
      v205 = v204;
      v134 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v134 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v134);
    }
  LABEL_219:
    *(_BYTE*)(v1 + 8) = 0;
  }
  v135 = *(float**)(v1 + 16);
  v136 = (float*)(v1 + 24);
  if (v135 != (float*)(v1 + 24)) {
    v137 = game_script_hub_g_frame_counter_ptr[0];
    v138 = fw_memory_g_heap_manager_ptr;
    v139 = GameData_212f8b0[0] + 2;
    do {
      v142 = v135[70];
      v143 =
          (float)(*(float*)(*(_QWORD*)v137 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v142 <= 0.0f) {
        if (*((_BYTE*)v135 + 272) != 0) {
          v146 = 0x1.0000000000000p+0f;
        }
        else {
          v146 = 0.0f;
        }
      }
      else {
        v144 = v143 / v142;
        v145 = v135[69];
        if (*((_BYTE*)v135 + 272) != 0) {
          v146 = fminf(fmaxf(v144 + v145, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v146 = fminf(fmaxf(v145 - v144, 0.0f), 0x1.570a3c0000000p-1f);
        }
      }
      v135[69] = v146;
      v147 = *((_QWORD*)v135 + 6);
      v135[60] = v143 + v135[60];
      (*(void (**)(_QWORD*))(v147 + 40))((_QWORD*)v135 + 6);
      GameRoutine_f54fe0(v135 + 12);
      v148 = *((float**)v135 + 1);
      if (((_BYTE)v135[68] & 1) != 0 || v135[69] > 0.0f) {
        if (v148 != nullptr) {
          do {
            v150 = v148;
            v148 = *(float**)v148;
          } while (v148 != nullptr);
        }
        else {
          do {
            v150 = *((float**)v135 + 2);
            v16 = v135 == *(float**)v150;
            v135 = v150;
          } while (!v16);
        }
      }
      else {
        v149 = v135;
        if (v148 != nullptr) {
          do {
            v150 = v148;
            v148 = *(float**)v148;
          } while (v148 != nullptr);
        }
        else {
          do {
            v150 = *((float**)v149 + 2);
            v16 = v149 == *(float**)v150;
            v149 = v150;
          } while (!v16);
        }
        if (*(float**)(v1 + 16) == v135) {
          *(_QWORD*)(v1 + 16) = v150;
        }
        v151 = *(_QWORD*)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0(v151, v135);
        v152 = *((_QWORD*)v135 + 21);
        *((_QWORD*)v135 + 6) = v139;
        if (v152 != 0) {
          v153 = *(_QWORD*)v138;
          *((_QWORD*)v135 + 22) = v152;
          if (*(_QWORD*)(v153 + 200) != 0) {
            v154 = 128;
          }
          else {
            v154 = 56;
          }
          nn_mem_StandardAllocator_Free(v153 + v154);
        }
        v155 = *((void (****)(_QWORD))v135 + 18);
        if (v155 != nullptr) {
          v156 = *((void (****)(_QWORD))v135 + 19);
          if (v155 == v156) {
            goto LABEL_222;
          }
          v157 = v138;
          v158 = v139;
          v159 = v137;
          v160 = v156 - 8;
          v161 = v156 - 8;
          do {
            v162 = *v161;
            v161 -= 8;
            (*v162)(v160);
            v16 = v160 == v155;
            v160 = v161;
          } while (!v16);
          v163 = *((_QWORD*)v135 + 18);
          v1 = a1;
          v137 = v159;
          v139 = v158;
          v138 = v157;
          *((_QWORD*)v135 + 19) = v155;
          if (v163 != 0) {
          LABEL_222:
            if (*(_QWORD*)(*(_QWORD*)v138 + 200LL) != 0) {
              v140 = 128;
            }
            else {
              v140 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v138 + v140);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v138 + 200LL) != 0) {
          v141 = 128;
        }
        else {
          v141 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v138 + v141);
      }
      v135 = v150;
    } while (v150 != v136);
  }
}

__int64 MapPanelTrickDestroy_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTrickDestroy_vtable;
  return GameRoutine_103d5c0(a1[3]);
}

__int64 MapPanelTrickDestroy_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapPanelTrickDestroy_vtable;
  GameRoutine_103d5c0(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__int64 game_map_MapPanelTrickDestroy_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                  _DWORD* a2,
                                                                  _DWORD* a3)
{
  char v3;
  __int64 v4;
  _BYTE v6[2];
  __int16 v7;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v6[0] = v3;
  v6[1] = *a3;
  return GameRoutine_74e080(v4, v6);
}

__int64 game_map_MapPanelTrickDestroy_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                                  _DWORD* a2,
                                                                  _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = **(char****)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 == v5) {
    return 0;
  }
  while (*a2 != *v4 || *a3 != v4[1]) {
    v4 += 4;
    if (v4 == v5) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
