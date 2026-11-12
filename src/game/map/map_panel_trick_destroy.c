#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_103d5c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelTrickDestroy_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTrickDestroy_Destructor(_QWORD* a1);
__int64 MapPanelTrickDestroy_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "MapPanelTrickDestroy_DeletingDestructor");
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 game_map_MapPanelTrickDestroy_UpdateTarget_lambda0_Invoke_alt1(
    __int64 a1, _DWORD* a2, _DWORD* a3) __asm__("game_map_MapPanelTrickDestroy_"
                                                "UpdateTarget_lambda0_Invoke");
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
_BYTE* GameRoutine_74e080_alt1(__int64*, __int64) __asm__("GameRoutine_74e080");
_BYTE* game_map_MapPanelTrickDestroy_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);
_BYTE* MapPanelRage_f1a700_alt1(__int64*,
                                __int64) __asm__("MapPanelRage_f1a700");
__int64* GameRoutine_64dfe0_alt1(__int64* result,
                                 __int64*) __asm__("GameRoutine_64dfe0");
__int64*
GameRoutine_f155c0_alt1(__int64* result, char*, char*,
                        unsigned __int64) __asm__("GameRoutine_f155c0");
__int64* fw_containers_BalanceAfterInsert_alt1(
    __int64* result, __int64*) __asm__("fw_containers_BalanceAfterInsert");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 CharacterController_d42d20_alt1(
    __int64 result, char*, char*,
    unsigned __int64) __asm__("CharacterController_d42d20");
__int64 GameHr_fcacb0(__int64, __int64, __int64, __int64, __int64, __int16);
__int64 MapDrawConst_fcbcc0_alt1(__int64, int, unsigned __int8, unsigned __int8,
                                 __int64, char) __asm__("MapDrawConst_fcbcc0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_map_f54910_alt1(__int64) __asm__("game_map_f54910");
float32x4_t*
GameRoutine_f54fe0_alt1(float32x4_t* result) __asm__("GameRoutine_f54fe0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_103d5c0_alt1(_QWORD*) __asm__("GameRoutine_103d5c0");
void __attribute__((noreturn))
GameRoutine_103d5a0_alt1() __asm__("GameRoutine_103d5a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_74e1f0_alt1() __asm__("GameRoutine_74e1f0");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapPanelTrickDestroy_DeletingDestructor(__int64 a1);

void game_map_MapPanelTrickDestroy_UpdateTarget(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  int v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  bool v17;
  char* v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  unsigned __int8* v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 (**v35)();
  char* v36;
  signed __int64 v37;
  _BYTE* v38;
  char v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 (**v43)();
  __int64 v44;
  char* v45;
  __int64 v46;
  char* v47;
  _BYTE* v48;
  char v49;
  __int64* v50;
  _QWORD* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int8* v58;
  __int64 v59;
  __int64* v60;
  unsigned __int8* v61;
  unsigned __int8* v62;
  unsigned __int8* v63;
  unsigned __int8* v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int8* v71;
  __int64 v72;
  unsigned __int8* v73;
  _BYTE* v74;
  unsigned __int8 v75;
  __int64 v76;
  unsigned __int8* v78;
  unsigned __int8* v79;
  __int64 v80;
  __int64 v81;
  unsigned __int8 v82;
  unsigned __int8 v83;
  __int16 v84;
  __int64** v85;
  float32x4_t v86;
  char* v87;
  float32x4_t* v88;
  char* v89;
  __int64* v90;
  float32x4_t v91;
  __int64 v92;
  float32x4_t v93;
  int8x16_t v94;
  float32x4_t v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64** v100;
  __int64 v101;
  __int64* v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64* v107;
  __int64 v108;
  __int128 v109;
  __int128 v110;
  __int128 v111;
  __int64 v112;
  __int128 v113;
  __int64 v114;
  __int128 v115;
  __int128 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  int v126;
  __int64 v127;
  __int64 v128;
  char* v129;
  char* v130;
  char* v131;
  void (**v132)(char*);
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64* v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  float32x4_t* v141;
  float32x4_t* v142;
  __int64 v143;
  __int64 v144;
  __int64* v145;
  __int64 v146;
  __int64 v147;
  float v148;
  float v149;
  float v150;
  float v151;
  float v152;
  unsigned __int64 v153;
  float32x4_t* v154;
  float32x4_t* v155;
  float32x4_t* v156;
  __int64* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  __int64* v164;
  __int64 v165;
  void (***v166)(_QWORD);
  void (***v167)(_QWORD);
  void (**v168)(_QWORD);
  __int64 v169;
  __int64 v170;
  __int64** v171;
  char* v172;
  unsigned __int64 v173;
  char* v174;
  unsigned __int64 v175;
  __int64 v176;
  __int64 v177;
  struct {
    __int64 (**v179)();
    char* v180;
    __int64 v181;
    char gap72_[8];
    __int64 (***v182)();
  } v179_;
  struct {
    __int64 (**i)();
    __int64 (***v184)();
    __int128 v185;
    __int128 v186;
    __int128 v187;
    __int128 v188;
    __int64 v189;
    __int64 v190;
    float32x4_t* v191;
    float32x4_t* v192;
    char gap208_[8];
    char* v193;
    char* v194;
    char gap232_[8];
    __int128 v195;
    __int64 v196;
    __int64 v197;
    float32x4_t v198;
    __int64 v199;
    __int64 v200;
    __int64 v201;
    __int64 v202;
    __int64 v203;
    __int64 v204;
    int v205;
  } i_;
  unsigned __int8** v206;
  struct {
    unsigned __int8* v207;
    unsigned __int8* v208;
    unsigned __int64 v209;
  } v207_;
  struct {
    unsigned __int8* v210;
    __int64 v211;
    __int64 v212;
  } v210_;

  v1 = a1;
  if (*(_BYTE*)(a1 + 8) == 1) {
    v2 = *(_QWORD**)(a1 + 16);
    v3 = (_QWORD*)(a1 + 24);
    if (v2 != (_QWORD*)(a1 + 24)) {
      do {
        v10 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void*))(v10 + 48))((void*)&v2[6]) & 1) != 0) {
          v11 = 1036831949;
        }
        else {
          v11 = 0;
          *((_DWORD*)v2 + 69) = 0;
        }
        v12 = (_QWORD*)v2[1];
        *((_DWORD*)v2 + 70) = v11;
        if (v12 != nullptr) {
          do {
            v13 = v12;
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
        else {
          do {
            v13 = (_QWORD*)v2[2];
            v17 = v2 == (_QWORD*)*v13;
            v2 = v13;
          } while (!v17);
        }
        v2 = v13;
      } while (v13 != v3);
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1) & 1) == 0) {
      goto LABEL_219;
    }
    v210_.v211 = 0;
    v210_.v212 = 0;
    v210_.v210 = nullptr;
    v4 = GameData_212d020[0];
    if (*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) < 3u ||
        (v5 = GameData_212cfd0[0], *(_BYTE*)(*GameData_212cfd0[0] + 8) == 0) ||
        (v6 = game_UnitPool_Get_alt1((_BYTE*)(*GameData_212cfd0[0] + 8))) ==
            nullptr ||
        v6[49] == 0 || (*((_BYTE*)v6 + 417) & 0x1C) != 0 ||
        (v7 = v6,
         (*(float (**)(__int64*))(v6[19] + 16))(v6 + 19) <= 0x0.0p+0f) ||
        *(_DWORD*)(*(_QWORD*)v4 + 4368LL) != 6 ||
        (*(_BYTE*)(*v5 + 8) == 0
             ? (v9 = v7, v8 = nullptr)
             : (v8 = game_UnitPool_Get_alt1((_BYTE*)(*v5 + 8)), v9 = v7),
         v8 != v9)) {
      v15 = *(unsigned __int8**)(*(_QWORD*)GameData_212d038[0] + 88LL);
      v14 = *(unsigned __int8**)(*(_QWORD*)GameData_212d038[0] + 96LL);
      if (v15 != v14) {
        do {
          v16 = v210_.v210;
          if (v210_.v210 != (unsigned __int8*)v210_.v211) {
            while (1) {
              v17 = *v16 == *v15 && v16[1] == v15[1];
              if (v17) {
                break;
              }
              v16 += 4;
              if (v16 == (unsigned __int8*)v210_.v211) {
                goto LABEL_27;
              }
            }
          }
          if (v16 == (unsigned __int8*)v210_.v211) {
          LABEL_27:
            MapPanelRage_f1a700_alt1((__int64*)&v210_.v210, (__int64)v15);
          }
          v15 += 4;
        } while (v15 != v14);
        v18 = (char*)v210_.v210;
        v172 = (char*)v210_.v211;
        if (v210_.v210 != (unsigned __int8*)v210_.v211 &&
            GameData_2234698 != GameData_22346a0) {
          v171 = (__int64**)(v1 + 24);
          v175 = 0;
          v19 = 0;
          v20 = nullptr;
          v21 = GameData_212cfb8[0];
          v22 = (__int64*)fw_memory_g_heap_manager_ptr;
          do {
            v23 = (unsigned __int8*)GameData_2234698;
            v24 = GameData_22346a0;
            while (v23 != (unsigned __int8*)v24) {
              v25 = *v23;
              v26 = *v18 + 32 * v18[1];
              v27 = *(_QWORD*)(*v21 + 16);
              if (v26 >= 0x400) {
                v26 = 0;
              }
              v28 =
                  *(__int16*)(v27 +
                              ((unsigned __int64)GameData_1b41abf[v25] << 11) +
                              2LL * v26 + 104);
              if ((v28 & 0x8000000000000000LL) == 0) {
                v29 = *(_QWORD*)(v27 + 8);
                if (v29 != 0) {
                  v30 = v29 + 144LL * (int)v28;
                  if ((_DWORD)v25 == (*(unsigned __int8 (**)(__int64))(
                                         *(_QWORD*)v30 + 40LL))(v30)) {
                    v179_.v180 = nullptr;
                    v179_.v181 = 0;
                    v179_.v179 = nullptr;
                    if (((*(__int64 (**)(__int64))(*(_QWORD*)v30 + 272LL))(
                             v30) &
                         1) != 0) {
                      i_.i = GameData_2003580;
                      i_.v184 = &v179_.v179;
                      *(_QWORD*)&i_.v186 = &i_.i;
                      (*(void (**)(__int64, __int64 (***)(void)))(
                          *(_QWORD*)v30 + 744LL))(v30, &i_.i);
                      if ((__int64 (***)(void))i_.v186 == &i_.i) {
                        v31 = 32;
                      LABEL_55:
                        (*(void (**)(__int64))(*(_QWORD*)i_.v186 + v31))(
                            (__int64)i_.v186);
                      }
                      else if ((_QWORD)i_.v186 != 0) {
                        v31 = 40;
                        goto LABEL_55;
                      }
                      v32 = (__int64)v179_.v179;
                      v33 = v179_.v180;
                      v34 = v179_.v180 - (char*)v179_.v179;
                      if ((unsigned __int64)(v179_.v180 - (char*)v179_.v179) >=
                          5) {
                        if ((unsigned __int64)v20 >= v175) {
                          v174 = (char*)v20 - v19;
                          v40 = ((__int64)v20 - v19) >> 3;
                          v41 = 0xAAAAAAAAAAAAAAABLL * v40 + 1;
                          if (v41 > 0xAAAAAAAAAAAAAAALL) {
                            GameRoutine_103d5a0_alt1();
                          }
                          if (0x5555555555555556LL *
                                  ((__int64)(v175 - v19) >> 3) >
                              v41) {
                            v41 = 0x5555555555555556LL *
                                  ((__int64)(v175 - v19) >> 3);
                          }
                          if (0xAAAAAAAAAAAAAAABLL *
                                  ((__int64)(v175 - v19) >> 3) >=
                              0x555555555555555LL) {
                            v42 = 0xAAAAAAAAAAAAAAALL;
                          }
                          else {
                            v42 = v41;
                          }
                          v173 = v42;
                          if (v42 != 0) {
                            if (v42 > 0xAAAAAAAAAAAAAAALL) {
                            LABEL_267:
                              GameRoutine_60a210_alt1();
                            }
                            v43 = v179_.v179;
                            v44 = fw_memory_HeapManager_Allocate_alt1(
                                *v22, 24 * v42, 16, 0);
                            v32 = (__int64)v43;
                          }
                          else {
                            v44 = 0;
                          }
                          v176 = v44;
                          v45 = &v174[v44];
                          *((_QWORD*)v45 + 1) = 0;
                          *((_QWORD*)v45 + 2) = 0;
                          *(_QWORD*)v45 = 0;
                          if (v33 != (char*)v32) {
                            if (v34 < 0) {
                            LABEL_266:
                              GameRoutine_74e1f0_alt1();
                            }
                            v46 = v19;
                            v47 = (char*)v32;
                            v48 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr, v34, 16,
                                0);
                            *(_QWORD*)v45 = v48;
                            *((_QWORD*)v45 + 2) = &v48[v34];
                            do {
                              *v48 = *v47;
                              v48[1] = v47[1];
                              v48[2] = v47[2];
                              v49 = v47[3];
                              v47 += 4;
                              v48[3] = v49;
                              v48 += 4;
                            } while (v47 != v33);
                            *((_QWORD*)v45 + 1) = v48;
                            v19 = v46;
                            v22 = (__int64*)fw_memory_g_heap_manager_ptr;
                          }
                          if ((__int64*)v19 != v20) {
                            v50 = (__int64*)v19;
                            v51 = (__int64*)((char*)v20 + v176 - v19 +
                                             -8 * v40 + 8);
                            do {
                              *v51 = 0;
                              v51[1] = 0;
                              *(v51 - 1) = *v50;
                              *v51 = v50[1];
                              v51[1] = v50[2];
                              v50[1] = 0;
                              v50[2] = 0;
                              *v50 = 0;
                              v50 += 3;
                              v51 += 3;
                            } while (v50 != v20);
                            v52 = (__int64*)v19;
                            do {
                              v53 = *v52;
                              if (*v52 != 0) {
                                v52[1] = v53;
                                v54 = 128;
                                if (*(_QWORD*)(*v22 + 200) == 0) {
                                  v54 = 56;
                                }
                                nn_mem_StandardAllocator_Free_alt1(*v22 + v54,
                                                                   v53);
                              }
                              v52 += 3;
                            } while (v52 != v20);
                          }
                          v20 = (__int64*)(v45 + 24);
                          v175 = v176 + 24 * v173;
                          if (v19 != 0) {
                            v55 = 128;
                            if (*(_QWORD*)(*v22 + 200) == 0) {
                              v55 = 56;
                            }
                            nn_mem_StandardAllocator_Free_alt1(*v22 + v55, v19);
                          }
                          v19 = v45 - v174;
                          v21 = GameData_212cfb8[0];
                        }
                        else {
                          v20[1] = 0;
                          v20[2] = 0;
                          *v20 = 0;
                          v35 = v179_.v179;
                          v36 = v179_.v180;
                          v37 = v179_.v180 - (char*)v179_.v179;
                          if (v179_.v180 != (char*)v179_.v179) {
                            if (v37 < 0) {
                              goto LABEL_266;
                            }
                            v38 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(
                                *v22, v179_.v180 - (char*)v179_.v179, 16, 0);
                            *v20 = (__int64)v38;
                            v20[1] = (__int64)v38;
                            v20[2] = (__int64)&v38[v37];
                            do {
                              *v38 = *(_BYTE*)v35;
                              v38[1] = *((_BYTE*)v35 + 1);
                              v38[2] = *((_BYTE*)v35 + 2);
                              v39 = *((_BYTE*)v35 + 3);
                              v35 = (__int64 (**)(void))((char*)v35 + 4);
                              v38[3] = v39;
                              v38 += 4;
                            } while (v35 != (__int64 (**)(void))v36);
                            v20[1] = (__int64)v38;
                          }
                          v20 += 3;
                        }
                        goto LABEL_95;
                      }
                      if (v179_.v179 == nullptr) {
                        goto LABEL_43;
                      }
                    }
                    else {
                    LABEL_95:
                      v32 = (__int64)v179_.v179;
                      if (v179_.v179 == nullptr) {
                        goto LABEL_43;
                      }
                    }
                    v56 = *v22;
                    v179_.v180 = (char*)v32;
                    v57 = 128;
                    if (*(_QWORD*)(v56 + 200) == 0) {
                      v57 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(v56 + v57, v32);
                  }
                }
              }
            LABEL_43:
              ++v23;
            }
            v18 += 4;
          } while (v18 != v172);
          v207_.v208 = nullptr;
          v207_.v209 = 0;
          v207_.v207 = nullptr;
          if ((__int64*)v19 != v20) {
            v58 = nullptr;
            v59 = 0;
            v177 = v19;
            v60 = (__int64*)v19;
            do {
              v62 = (unsigned __int8*)*v60;
              v61 = (unsigned __int8*)v60[1];
              while (v62 != v61) {
                if ((unsigned __int8*)v59 == v58) {
                LABEL_114:
                  if ((unsigned __int64)v58 < v207_.v209) {
                    *v58 = *v62;
                    v58[1] = v62[1];
                    v58[2] = v62[2];
                    v58[3] = v62[3];
                    v58 += 4;
                  }
                  else {
                    v65 = &v58[-v59];
                    v66 = (__int64)&v58[-v59] >> 2;
                    v67 = v66 + 1;
                    if ((unsigned __int64)(v66 + 1) >> 62 != 0) {
                      goto LABEL_266;
                    }
                    v68 = v207_.v209 - v59;
                    if ((__int64)(v207_.v209 - v59) >> 1 > v67) {
                      v67 = v68 >> 1;
                    }
                    if ((unsigned __int64)v68 >= 0x7FFFFFFFFFFFFFFCLL) {
                      v69 = 0x3FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v69 = v67;
                    }
                    if (v69 >> 62 != 0) {
                      goto LABEL_267;
                    }
                    v70 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v69, 16, 0);
                    v71 = &v65[v70];
                    v72 = (__int64)&v65[v70 + -4 * v66];
                    *v71 = *v62;
                    v71[1] = v62[1];
                    v71[2] = v62[2];
                    v71[3] = v62[3];
                    if ((unsigned __int8*)v59 != v58) {
                      v73 = (unsigned __int8*)v59;
                      v74 = (_BYTE*)v72;
                      do {
                        *v74 = *v73;
                        v74[1] = v73[1];
                        v74[2] = v73[2];
                        v75 = v73[3];
                        v73 += 4;
                        v74[3] = v75;
                        v74 += 4;
                      } while (v73 != v58);
                    }
                    v58 = v71 + 4;
                    v207_.v207 = (unsigned __int8*)v72;
                    v207_.v208 = v71 + 4;
                    v207_.v209 = v70 + 4 * v69;
                    if (v59 != 0) {
                      v76 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v76 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v59);
                    }
                    v59 = v72;
                  }
                  v207_.v208 = v58;
                }
                else {
                  v63 = (unsigned __int8*)v59;
                  while (*v63 != *v62 || v63[1] != v62[1]) {
                    v63 += 4;
                    if (v63 == v58) {
                      goto LABEL_114;
                    }
                  }
                }
                v62 += 4;
              }
              v60 += 3;
            } while (v60 != v20);
            if (v58 != (unsigned __int8*)v59) {
              v206 = &v207_.v207;
              game_map_f54910_alt1((__int64)&i_.i);
              v78 = v207_.v207;
              v79 = v207_.v208;
              v80 = a1;
              for (i_.i = game_map_TrickDestroyMeshData_vtable; v78 != v79;
                   v78 += 4) {
                v82 = *v78;
                v83 = v78[1];
                v179_.v179 = GameData_2003600;
                v179_.v180 = (char*)&v206;
                v179_.v182 = &v179_.v179;
                v84 = MapDrawConst_fcbcc0_alt1(v80, 1, v82, v83,
                                               (__int64)&v179_.v179, 1);
                if (v179_.v182 == &v179_.v179) {
                  v81 = 4;
                }
                else {
                  if (v179_.v182 == nullptr) {
                    goto LABEL_135;
                  }
                  v81 = 5;
                }
                ((__int64 (*)(__int64))(*v179_.v182)[v81])((__int64)v179_.v182);
              LABEL_135:
                v80 = a1;
                GameHr_fcacb0(a1, (__int64)&i_.i, 1, (unsigned int)(char)*v78,
                              (unsigned int)(char)v78[1], v84);
              }
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21a6130,
                       memory_order_acquire) &
                   1) == 0 &&
                  __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
                v170 = *((_QWORD*)GameData_212c540 + 1);
                *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
                *((_QWORD*)&GameData_21a6120 + 1) = v170;
                __cxa_guard_release_alt1((__int64)&GameData_21a6130);
              }
              v85 = v171;
              v86 = COERCE_AS(float32x4_t, GameData_21a6120);
              v88 = i_.v191;
              v87 = (char*)i_.v192;
              if (i_.v192 == i_.v191) {
                v90 = (__int64*)fw_memory_g_heap_manager_ptr;
              }
              else {
                v89 = (char*)i_.v191;
                v90 = (__int64*)fw_memory_g_heap_manager_ptr;
                do {
                  v91 = *((float32x4_t*)v89 + 1);
                  v89 += 64;
                  v86 = vaddq_f32(v86, v91);
                } while (v89 != (char*)i_.v192);
                v86 = vmulq_n_f32(
                    v86, 0x1.0000000000000p+0f /
                             (float)(unsigned __int64)(((char*)i_.v192 -
                                                        (char*)i_.v191) >>
                                                       6));
                LANES128(v86).n128_u32[3] = 0;
              }
              v93 = vsubq_f32(v86, i_.v198);
              v94 = vmulq_f32(v93, v93);
              LANES128(v94).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v94, v94, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v94).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v94).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v94).n128_u64[0])))
                          .n64_f32[0] > 0x0.0p+0f &&
                  i_.v192 != i_.v191) {
                do {
                  v88[1] = vsubq_f32(v88[1], v93);
                  v88 += 4;
                } while (v88 != (float32x4_t*)v87);
              }
              LANES128(v96).n128_u64[0] = LANES128(v86).n128_u64[0];
              LANES128(v96).n128_u64[1] = LANES128(v86).n128_u32[2];
              i_.v198 = v96;
              v97 = ((__int64 (*)(__int64 (***)(void)))i_.i[4])(&i_.i);
              v98 = (__int64)*v171;
              v99 = v97;
              v100 = v171;
              v101 = (__int64)v171;
              if (*v171 != nullptr) {
                v102 = *v171;
                do {
                  v103 = v102[4];
                  if (v97 >= v103) {
                    if (v103 >= v97) {
                      while (1) {
                        while (1) {
                          v104 = *(_QWORD*)(v98 + 32);
                          if (v97 >= v104) {
                            break;
                          }
                          v98 = *(_QWORD*)v98;
                          if (v98 == 0) {
                            goto LABEL_165;
                          }
                        }
                        if (v104 >= v97) {
                          goto LABEL_186;
                        }
                        v98 = *(_QWORD*)(v98 + 8);
                        if (v98 == 0) {
                        LABEL_165:
                          String_60a250_alt1("map::at:  key not found");
                        }
                      }
                    }
                    ++v102;
                  }
                  v102 = (__int64*)*v102;
                } while (v102 != nullptr);
                while (1) {
                  while (1) {
                    v105 = *(_QWORD*)(v98 + 32);
                    v101 = v98;
                    if (v97 >= v105) {
                      break;
                    }
                    v98 = *(_QWORD*)v98;
                    v100 = (__int64**)v101;
                    if (*(_QWORD*)v101 == 0) {
                      goto LABEL_171;
                    }
                  }
                  if (v105 >= v97) {
                    break;
                  }
                  v98 = *(_QWORD*)(v98 + 8);
                  if (v98 == 0) {
                    v100 = (__int64**)(v101 + 8);
                    goto LABEL_171;
                  }
                }
              }
              else {
              LABEL_171:
                v106 = v101;
                v101 = fw_memory_HeapManager_Allocate_alt1(*v90, 304, 16, 0);
                *(_QWORD*)(v101 + 32) = v99;
                game_map_f54910_alt1(v101 + 48);
                *(_QWORD*)(v101 + 48) = game_map_TrickDestroyMeshData_vtable;
                *(_QWORD*)v101 = 0;
                *(_QWORD*)(v101 + 8) = 0;
                v107 = (__int64*)v101;
                *(_QWORD*)(v101 + 16) = v106;
                *v100 = (__int64*)v101;
                v108 = **(_QWORD**)(a1 + 16);
                if (v108 != 0) {
                  *(_QWORD*)(a1 + 16) = v108;
                  v107 = *v100;
                }
                fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 24),
                                                      v107);
                ++*(_QWORD*)(a1 + 32);
              }
              *(_QWORD*)(v101 + 56) = i_.v184;
              v109 = i_.v186;
              *(_OWORD*)(v101 + 64) = i_.v185;
              *(_OWORD*)(v101 + 80) = v109;
              v110 = i_.v187;
              v111 = i_.v188;
              v112 = i_.v190;
              *(_QWORD*)(v101 + 128) = i_.v189;
              *(_QWORD*)(v101 + 136) = v112;
              *(_OWORD*)(v101 + 96) = v110;
              *(_OWORD*)(v101 + 112) = v111;
              if ((__int64 (***)(void))(v101 + 48) != &i_.i) {
                GameRoutine_f155c0_alt1((__int64*)(v101 + 144), (char*)i_.v191,
                                        (char*)i_.v192,
                                        ((char*)i_.v192 - (char*)i_.v191) >> 6);
                CharacterController_d42d20_alt1(v101 + 168, i_.v193, i_.v194,
                                                (i_.v194 - i_.v193) >> 4);
              }
              v113 = i_.v195;
              v114 = i_.v197;
              v98 = (__int64)v171;
              *(_QWORD*)(v101 + 208) = i_.v196;
              *(_QWORD*)(v101 + 216) = v114;
              *(_QWORD*)(v101 + 192) = v113;
              v115 = *(_OWORD*)(v101 + 192);
              *((_QWORD*)&v115 + 1) = DWORD2(v113);
              DWORD2(v113) = LANES128(i_.v198).n128_u32[2];
              *(_QWORD*)(v101 + 224) = LANES128(i_.v198).n128_u64[0];
              *(_OWORD*)(v101 + 192) = v115;
              v116 = *(_OWORD*)(v101 + 224);
              v117 = i_.v200;
              *((_QWORD*)&v116 + 1) = DWORD2(v113);
              *(_QWORD*)(v101 + 240) = i_.v199;
              *(_QWORD*)(v101 + 248) = v117;
              v118 = i_.v202;
              *(_QWORD*)(v101 + 256) = i_.v201;
              *(_QWORD*)(v101 + 264) = v118;
              *(_OWORD*)(v101 + 224) = v116;
              *(_DWORD*)(v101 + 288) = i_.v205;
              v119 = i_.v204;
              *(_QWORD*)(v101 + 272) = i_.v203;
              *(_QWORD*)(v101 + 280) = v119;
              v120 = (__int64)*v171;
              if (*v171 != nullptr) {
                while (1) {
                  while (1) {
                    v98 = v120;
                    v121 = *(_QWORD*)(v120 + 32);
                    if (v99 >= v121) {
                      break;
                    }
                    v120 = *(_QWORD*)v98;
                    v85 = (__int64**)v98;
                    if (*(_QWORD*)v98 == 0) {
                      goto LABEL_183;
                    }
                  }
                  if (v121 >= v99) {
                    break;
                  }
                  v120 = *(_QWORD*)(v98 + 8);
                  if (v120 == 0) {
                    v85 = (__int64**)(v98 + 8);
                    goto LABEL_183;
                  }
                }
              }
              else {
              LABEL_183:
                v122 = v98;
                v98 = fw_memory_HeapManager_Allocate_alt1(*v90, 304, 16, 0);
                *(_QWORD*)(v98 + 32) = v99;
                game_map_f54910_alt1(v98 + 48);
                *(_QWORD*)(v98 + 48) = game_map_TrickDestroyMeshData_vtable;
                *(_QWORD*)v98 = 0;
                *(_QWORD*)(v98 + 8) = 0;
                v123 = (__int64*)v98;
                *(_QWORD*)(v98 + 16) = v122;
                *v85 = (__int64*)v98;
                v124 = **(_QWORD**)(a1 + 16);
                if (v124 != 0) {
                  *(_QWORD*)(a1 + 16) = v124;
                  v123 = *v85;
                }
                fw_containers_BalanceAfterInsert_alt1(*(__int64**)(a1 + 24),
                                                      v123);
                ++*(_QWORD*)(a1 + 32);
              }
            LABEL_186:
              v125 = *(_QWORD*)(v98 + 48);
              *(_BYTE*)(v98 + 272) = 1;
              if (((*(__int64 (**)(__int64))(v125 + 48))((__int64)(v98 + 48)) &
                   1) != 0) {
                v126 = 1036831949;
              }
              else {
                v126 = 0;
                *(_DWORD*)(v98 + 276) = 1065353216;
              }
              *(_DWORD*)(v98 + 280) = v126;
              i_.i = (__int64 (**)(void))(GameData_212f8b0[0] + 2);
              if (i_.v193 != nullptr) {
                v127 = *v90;
                i_.v194 = i_.v193;
                v128 = 128;
                if (*(_QWORD*)(v127 + 200) == 0) {
                  v128 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(v127 + v128,
                                                   (__int64)i_.v193);
              }
              v129 = (char*)i_.v191;
              if (i_.v191 != nullptr) {
                if (i_.v191 == i_.v192) {
                  goto LABEL_199;
                }
                v130 = (char*)&i_.v192[-4];
                v131 = (char*)&i_.v192[-4];
                do {
                  v132 = *(void (***)(char*))v131;
                  v131 -= 64;
                  (*v132)(v130);
                  v17 = v130 == v129;
                  v130 = v131;
                } while (!v17);
                i_.v192 = (float32x4_t*)v129;
                v129 = (char*)i_.v191;
                if (i_.v191 != nullptr) {
                LABEL_199:
                  v133 = 128;
                  if (*(_QWORD*)(*v90 + 200) == 0) {
                    v133 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v90 + v133,
                                                     (__int64)v129);
                }
              }
              v59 = (__int64)v207_.v207;
            }
            v19 = v177;
            v1 = a1;
            v22 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (v59 != 0) {
              v134 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
              v207_.v208 = (unsigned __int8*)v59;
              v135 = 128;
              if (*(_QWORD*)(v134 + 200) == 0) {
                v135 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(v134 + v135, v59);
            }
            if (v177 == 0) {
              goto LABEL_215;
            }
            v136 = v20;
            do {
              v138 = *(v136 - 3);
              v136 -= 3;
              v137 = v138;
              if (v138 != 0) {
                *(v20 - 2) = v137;
                if (*(_QWORD*)(*v22 + 200) != 0) {
                  v139 = 128;
                }
                else {
                  v139 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v22 + v139, v137);
              }
              v20 = v136;
            } while (v136 != (__int64*)v177);
            goto LABEL_145;
          }
          v1 = a1;
          if (v20 != nullptr) {
          LABEL_145:
            v92 = 128;
            if (*(_QWORD*)(*v22 + 200) == 0) {
              v92 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v22 + v92, v19);
          }
        }
      }
    }
  LABEL_215:
    if (v210_.v210 != nullptr) {
      v210_.v211 = (__int64)v210_.v210;
      v140 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v140 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v140, (__int64)v210_.v210);
    }
  LABEL_219:
    *(_BYTE*)(v1 + 8) = 0;
  }
  v141 = *(float32x4_t**)(v1 + 16);
  v142 = (float32x4_t*)(v1 + 24);
  if (v141 != (float32x4_t*)(v1 + 24)) {
    v143 = game_script_hub_g_frame_counter_ptr[0];
    v144 = fw_memory_g_heap_manager_ptr;
    v145 = GameData_212f8b0[0] + 2;
    do {
      v148 = LANES128(v141[17]).n128_f32[2];
      v149 =
          (float)(*(float*)(*(_QWORD*)v143 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v148 <= 0x0.0p+0f) {
        if (LANES128(v141[17]).n128_u8[0] != 0) {
          v152 = 0x1.0000000000000p+0f;
        }
        else {
          v152 = 0x0.0p+0f;
        }
      }
      else {
        v150 = v149 / v148;
        v151 = LANES128(v141[17]).n128_f32[1];
        if (LANES128(v141[17]).n128_u8[0] != 0) {
          v152 = fminf(fmaxf(v150 + v151, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v152 = fminf(fmaxf(v151 - v150, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v141[17]).n128_f32[1] = v152;
      v153 = LANES128(v141[3]).n128_u64[0];
      LANES128(v141[15]).n128_f32[0] = v149 + LANES128(v141[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v153 + 40))(v141 + 3);
      GameRoutine_f54fe0_alt1(v141 + 3);
      v154 = (float32x4_t*)LANES128(*(v141)).n128_u64[1];
      if ((LANES128(v141[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v141[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v154 != nullptr) {
          do {
            v156 = v154;
            v154 = (float32x4_t*)LANES128(*(v154)).n128_u64[0];
          } while (v154 != nullptr);
        }
        else {
          do {
            v156 = (float32x4_t*)LANES128(v141[1]).n128_u64[0];
            v17 = v141 == (float32x4_t*)LANES128(*(v156)).n128_u64[0];
            v141 = v156;
          } while (!v17);
        }
      }
      else {
        v155 = v141;
        if (v154 != nullptr) {
          do {
            v156 = v154;
            v154 = (float32x4_t*)LANES128(*(v154)).n128_u64[0];
          } while (v154 != nullptr);
        }
        else {
          do {
            v156 = (float32x4_t*)LANES128(v155[1]).n128_u64[0];
            v17 = v155 == (float32x4_t*)LANES128(*(v156)).n128_u64[0];
            v155 = v156;
          } while (!v17);
        }
        if (*(float32x4_t**)(v1 + 16) == v141) {
          *(_QWORD*)(v1 + 16) = v156;
        }
        v157 = *(__int64**)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0_alt1(v157, (__int64*)v141);
        v158 = LANES128(v141[10]).n128_i64[1];
        LANES128(v141[3]).n128_u64[0] = (unsigned __int64)v145;
        if (v158 != 0) {
          v159 = *(_QWORD*)v144;
          LANES128(v141[11]).n128_u64[0] = v158;
          if (*(_QWORD*)(v159 + 200) != 0) {
            v160 = 128;
          }
          else {
            v160 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v159 + v160, v158);
        }
        v161 = LANES128(v141[9]).n128_i64[0];
        if (v161 != 0) {
          v162 = LANES128(v141[9]).n128_u64[1];
          if (v161 == v162) {
            goto LABEL_222;
          }
          v163 = v144;
          v164 = v145;
          v165 = v143;
          v166 = (void (***)(_QWORD))(v162 - 64);
          v167 = (void (***)(_QWORD))(v162 - 64);
          do {
            v168 = *v167;
            v167 -= 8;
            (*v168)(v166);
            v17 = v166 == (void (***)(_QWORD))v161;
            v166 = v167;
          } while (!v17);
          v169 = LANES128(v141[9]).n128_i64[0];
          v1 = a1;
          v143 = v165;
          v145 = v164;
          v144 = v163;
          LANES128(v141[9]).n128_u64[1] = v161;
          v161 = v169;
          if (v169 != 0) {
          LABEL_222:
            if (*(_QWORD*)(*(_QWORD*)v144 + 200LL) != 0) {
              v146 = 128;
            }
            else {
              v146 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v144 + v146, v161);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v144 + 200LL) != 0) {
          v147 = 128;
        }
        else {
          v147 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v144 + v147,
                                           (__int64)v141);
      }
      v141 = v156;
    } while (v156 != v142);
  }
}

__int64 MapPanelTrickDestroy_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTrickDestroy_vtable;
  return GameRoutine_103d5c0(a1[3]);
}

void MapPanelTrickDestroy_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_map_MapPanelTrickDestroy_vtable;
  GameRoutine_103d5c0_alt1(*(_QWORD**)(a1 + 24));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

_BYTE* game_map_MapPanelTrickDestroy_UpdateTarget_lambda0_Invoke(__int64 a1,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3)
{
  char v3;
  __int64* v4;
  struct {
    _BYTE v6[2];
    __int16 v7;
  } v6_;

  v3 = *a2;
  v4 = *(__int64**)(a1 + 8);
  v6_.v7 = 0;
  v6_.v6[0] = v3;
  v6_.v6[1] = *a3;
  return GameRoutine_74e080_alt1(v4, (__int64)v6_.v6);
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
