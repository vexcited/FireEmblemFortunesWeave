#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 GameRoutine_f4c840(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff5668[])();
extern __int64 (*game_map_MapPanelTutorial_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTutorial_Destructor(_QWORD* a1);
__n128 MapPanelTutorial_DeletingDestructor(_QWORD* a1);
__int64
game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4ca30(__int64 a1,
                                                             __int64* a2);
_QWORD* game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4cbc0_alt1(
    __int64 a1, int* a2, int* a3) __asm__("game_map_MapPanelTutorial_"
                                          "UpdateTarget_lambda0_Invoke_f4cbc0");
__int64 game_map_MapPanelTutorial_UpdateTarget_lambda1_Invoke(__int64 a1,
                                                              _DWORD* a2,
                                                              _DWORD* a3);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64 CharacterController_d42d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_f54fe0(_QWORD);
__int64 GameRoutine_fcacb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 MapDrawConst_fcbcc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_map_f54910(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_1aad2d5;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ff55f8[])();
extern __int64 (*GameData_1ff56f8[])();
extern __int64 (*game_map_TutorialMeshData_vtable[])();
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d020[5];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
void MapPanelTutorial_Unknown3(__int64 a1);
_BYTE* GameRoutine_74e080_alt1(__int64*, __int64) __asm__("GameRoutine_74e080");
_BYTE* game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4cbc0(__int64 a1,
                                                                    int* a2,
                                                                    int* a3);

void MapPanelTutorial_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 (***v6)();
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64* v15;
  char* v16;
  char* v17;
  __int128 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned __int8* v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  float32x4_t v26;
  float32x4_t* v27;
  float32x4_t* v28;
  float32x4_t* v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  bool v33;
  float32x4_t v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64* v38;
  __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int128 v47;
  __int128 v48;
  __int128 v49;
  __int64 v50;
  __int128 v51;
  __int64 v52;
  __int128 v53;
  __int128 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  float v66;
  float v67;
  float v68;
  __int64 v69;
  float32x4_t* v70;
  float32x4_t* v71;
  float32x4_t* v72;
  void (**v73)(float32x4_t*);
  __int64 v74;
  __int64 v75;
  float* v76;
  float* v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64 v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  __int64 v88;
  float* v89;
  float* v90;
  float* v91;
  __int64 v92;
  long double v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  void (***v97)(_QWORD, long double);
  void (***v98)(_QWORD, long double);
  __int64 v99;
  __int64* v100;
  void (***v101)(_QWORD, long double);
  __int64 v102;
  __int64 v103;
  void (***v104)(_QWORD, long double);
  void (**v105)(_QWORD, long double);
  __int64 v106;
  __int64* v107;
  char v108;
  __int128 v109;
  __int128 v110;
  _QWORD v111[2];
  int v112;
  _QWORD v113[2];
  __int64 (**v114)();
  unsigned __int8*** v115;
  __int64 (***v116)();
  __int64 (**v117)();
  __int64 (***v118)();
  __int128 v119;
  __int128 v120;
  __int128 v121;
  __int128 v122;
  __int64 v123;
  __int64 v124;
  float32x4_t* v125;
  float32x4_t* v126;
  __int64 v127;
  __int64 v128;
  __int128 v129;
  __int64 v130;
  __int64 v131;
  float32x4_t v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  int v139;
  unsigned __int8** v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;

  v1 = a1;
  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_116;
  }
  v2 = *(__int64**)(a1 + 16);
  v3 = (__int64*)(a1 + 24);
  if (v2 != (__int64*)(a1 + 24)) {
    do {
      v12 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v12 + 48))(&v2[6]) & 1) != 0) {
        v13 = 1036831949;
      }
      else {
        v13 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v14 = (__int64*)v2[1];
      *((_DWORD*)v2 + 70) = v13;
      if (v14 != nullptr) {
        do {
          v15 = v14;
          v14 = (__int64*)*v14;
        } while (v14 != nullptr);
      }
      else {
        do {
          v15 = (__int64*)v2[2];
          v33 = v2 == (__int64*)*v15;
          v2 = v15;
        } while (!v33);
      }
      v2 = v15;
    } while (v15 != v3);
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1) & 1) == 0) {
    goto LABEL_115;
  }
  v142 = 0;
  v143 = 0;
  v141 = 0;
  v115 = (unsigned __int8***)&GameData_1aad2d5;
  v114 = (__int64 (**)())game_HashString(&GameData_1aad2d5);
  v117 = GameData_1ff55f8;
  v118 = &v114;
  v6 = &v117;
  *(_QWORD*)&v120 = &v117;
  *(_QWORD*)&v119 = &v141;
  v7 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v8 = *(__int64**)(v7 + 18832);
  v9 = *(__int64**)(v7 + 18824);
  if (v8 == v9) {
    goto LABEL_20;
  }
  do {
    v10 = *v9++;
    v111[0] = v10;
    if ((_QWORD)v120 == 0) {
      GameRoutine_60a310(0, v4, v5);
    }
    (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)v120 + 48LL))(v120, v111);
  } while (v9 != v8);
  v6 = (__int64 (***)())v120;
  if ((__int64 (***)())v120 == &v117) {
  LABEL_20:
    v11 = 4;
  }
  else {
    if ((_QWORD)v120 == 0) {
      goto LABEL_22;
    }
    v11 = 5;
  }
  (*v6)[v11]();
LABEL_22:
  v140 = (unsigned __int8**)&v141;
  v16 = *(char**)(*(_QWORD*)GameData_212d020[0] + 248LL);
  v17 = *(char**)(*(_QWORD*)GameData_212d020[0] + 256LL);
  if (v16 == v17 || v141 == v142) {
    goto LABEL_111;
  }
  v108 = 0;
  v18 = (__typeof__(v18)){0};
  v107 = GameData_212f8b0[0] + 2;
  do {
    v20 = *v140;
    v21 = v140[1];
    if (*v140 == v21) {
      goto LABEL_28;
    }
    v22 = *v16;
    v23 = v16[1];
    while (*v20 != (unsigned __int8)v22 || v20[1] != (unsigned __int8)v23) {
      v20 += 4;
      if (v20 == v21) {
        goto LABEL_28;
      }
    }
    v109 = v18;
    game_map_f54910(&v117);
    v117 = game_map_TutorialMeshData_vtable;
    v116 = &v114;
    v114 = GameData_1ff56f8;
    v115 = &v140;
    v24 = MapDrawConst_fcbcc0(v1, 1, v22, v23, &v114, 1);
    if (v116 == &v114) {
      v25 = 4;
      goto LABEL_38;
    }
    if (v116 != nullptr) {
      v25 = 5;
    LABEL_38:
      (*v116)[v25]();
    }
    GameRoutine_fcacb0(v1, &v117, 1, v22, v23, v24, GameData_212c958);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v74 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v74;
      __cxa_guard_release(&GameData_21a6130);
    }
    v26 = COERCE_AS(float32x4_t, GameData_21a6120);
    v28 = v125;
    v27 = v126;
    if (v126 != v125) {
      v29 = v125;
      do {
        v30 = v29[1];
        v29 += 4;
        v26 = vaddq_f32(v26, v30);
      } while (v29 != v126);
      v26 = vmulq_n_f32(
          v26, 0x1.0000000000000p+0 /
                   (float)(unsigned __int64)(((char*)v126 - (char*)v125) >> 6));
      LANES128(v26).n128_u32[3] = 0;
    }
    v31 = vsubq_f32(v26, v132);
    v32 = vmulq_f32(v31, v31);
    LANES128(v32).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
            .n64_u64[0];
    v33 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
                .n64_f32[0] <= 0.0 ||
        v126 == v125;
    if (!v33) {
      do {
        v28[1] = vsubq_f32(v28[1], v31);
        v28 += 4;
      } while (v28 != v27);
    }
    LANES128(v34).n128_u64[0] = LANES128(v26).n128_u64[0];
    LANES128(v34).n128_u64[1] = LANES128(v26).n128_u32[2];
    v132 = v34;
    v35 = ((__int64 (*)(__int64 (***)()))v117[4])(&v117);
    v36 = *v3;
    v37 = v35;
    v38 = (__int64*)(v1 + 24);
    v39 = v1 + 24;
    if (*v3 != 0) {
      v40 = (_QWORD*)*v3;
      while (1) {
        v41 = v40[4];
        if (v35 >= v41) {
          if (v41 >= v35) {
            while (1) {
              while (1) {
                v42 = *(_QWORD*)(v36 + 32);
                if (v35 >= v42) {
                  break;
                }
                v36 = *(_QWORD*)v36;
                if (v36 == 0) {
                  goto LABEL_162;
                }
              }
              if (v42 >= v35) {
                break;
              }
              v36 = *(_QWORD*)(v36 + 8);
              if (v36 == 0) {
              LABEL_162:
                String_60a250("map::at:  key not found");
              }
            }
            v64 = 0;
            goto LABEL_82;
          }
          ++v40;
        }
        v40 = (_QWORD*)*v40;
        if (v40 == nullptr) {
          while (1) {
            while (1) {
              v43 = *(_QWORD*)(v36 + 32);
              v39 = v36;
              if (v35 >= v43) {
                break;
              }
              v36 = *(_QWORD*)v36;
              v38 = (__int64*)v39;
              if (*(_QWORD*)v39 == 0) {
                goto LABEL_65;
              }
            }
            if (v43 >= v35) {
              goto LABEL_68;
            }
            v36 = *(_QWORD*)(v36 + 8);
            if (v36 == 0) {
              v38 = (__int64*)(v39 + 8);
              goto LABEL_65;
            }
          }
        }
      }
    }
  LABEL_65:
    v44 = v39;
    v39 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         304, 16, 0);
    *(_QWORD*)(v39 + 32) = v37;
    game_map_f54910(v39 + 48);
    *(_QWORD*)v39 = 0;
    *(_QWORD*)(v39 + 8) = 0;
    *(_QWORD*)(v39 + 16) = v44;
    v45 = v39;
    *(_QWORD*)(v39 + 48) = game_map_TutorialMeshData_vtable;
    *v38 = v39;
    v46 = **(_QWORD**)(v1 + 16);
    if (v46 != 0) {
      *(_QWORD*)(v1 + 16) = v46;
      v45 = *v38;
    }
    fw_containers_BalanceAfterInsert(*(_QWORD*)(v1 + 24), v45);
    ++*(_QWORD*)(v1 + 32);
  LABEL_68:
    *(_QWORD*)(v39 + 56) = v118;
    v47 = v120;
    *(_OWORD*)(v39 + 64) = v119;
    *(_OWORD*)(v39 + 80) = v47;
    v48 = v121;
    v49 = v122;
    v50 = v124;
    *(_QWORD*)(v39 + 128) = v123;
    *(_QWORD*)(v39 + 136) = v50;
    *(_OWORD*)(v39 + 96) = v48;
    *(_OWORD*)(v39 + 112) = v49;
    if ((__int64 (***)())(v39 + 48) != &v117) {
      GameRoutine_f155c0(v39 + 144);
      CharacterController_d42d20(v39 + 168, v127, v128, (v128 - v127) >> 4);
    }
    v51 = v129;
    v52 = v131;
    v36 = v1 + 24;
    *(_QWORD*)(v39 + 208) = v130;
    *(_QWORD*)(v39 + 216) = v52;
    *(_QWORD*)(v39 + 192) = v51;
    v53 = *(_OWORD*)(v39 + 192);
    *((_QWORD*)&v53 + 1) = DWORD2(v51);
    DWORD2(v51) = LANES128(v132).n128_u32[2];
    *(_QWORD*)(v39 + 224) = LANES128(v132).n128_u64[0];
    *(_OWORD*)(v39 + 192) = v53;
    v54 = *(_OWORD*)(v39 + 224);
    v55 = v134;
    *((_QWORD*)&v54 + 1) = DWORD2(v51);
    *(_QWORD*)(v39 + 240) = v133;
    *(_QWORD*)(v39 + 248) = v55;
    v56 = v136;
    *(_QWORD*)(v39 + 256) = v135;
    *(_QWORD*)(v39 + 264) = v56;
    *(_OWORD*)(v39 + 224) = v54;
    *(_DWORD*)(v39 + 288) = v139;
    v57 = v138;
    *(_QWORD*)(v39 + 272) = v137;
    *(_QWORD*)(v39 + 280) = v57;
    v58 = (__int64*)(v1 + 24);
    v59 = *v3;
    if (*v3 != 0) {
      while (1) {
        while (1) {
          v36 = v59;
          v60 = *(_QWORD*)(v59 + 32);
          if (v37 >= v60) {
            break;
          }
          v59 = *(_QWORD*)v36;
          v58 = (__int64*)v36;
          if (*(_QWORD*)v36 == 0) {
            goto LABEL_77;
          }
        }
        if (v60 >= v37) {
          break;
        }
        v59 = *(_QWORD*)(v36 + 8);
        if (v59 == 0) {
          v58 = (__int64*)(v36 + 8);
          goto LABEL_77;
        }
      }
    }
    else {
    LABEL_77:
      v61 = v36;
      v36 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
      *(_QWORD*)(v36 + 32) = v37;
      game_map_f54910(v36 + 48);
      *(_QWORD*)v36 = 0;
      *(_QWORD*)(v36 + 8) = 0;
      *(_QWORD*)(v36 + 16) = v61;
      v62 = v36;
      *(_QWORD*)(v36 + 48) = game_map_TutorialMeshData_vtable;
      *v58 = v36;
      v63 = **(_QWORD**)(v1 + 16);
      if (v63 != 0) {
        *(_QWORD*)(v1 + 16) = v63;
        v62 = *v58;
      }
      fw_containers_BalanceAfterInsert(*(_QWORD*)(v1 + 24), v62);
      ++*(_QWORD*)(v1 + 32);
    }
    v64 = 1;
  LABEL_82:
    v65 = *(_QWORD*)(v36 + 48);
    *(_BYTE*)(v36 + 272) = 1;
    if (((*(__int64 (**)(void*))(v65 + 48))((void*)(v36 + 48)) & 1) != 0) {
      *(_DWORD*)(v36 + 280) = 1036831949;
      if (v64 != 0) {
        goto LABEL_86;
      }
    }
    else {
      *(_DWORD*)(v36 + 276) = 1065353216;
      *(_DWORD*)(v36 + 280) = 0;
      if (v64 != 0) {
      LABEL_86:
        v66 = (float)((float)(*(float*)(*(_QWORD*)
                                            game_script_hub_g_frame_counter_ptr
                                                [0] +
                                        160LL) *
                              0x1.0aef000000000p+4) /
                      0x1.f400000000000p+9) *
              0.0;
        if (*(float*)&v138 <= 0.0) {
          if ((_BYTE)v137 != 0) {
            v68 = 0x1.0000000000000p+0;
          }
          else {
            v68 = 0.0;
          }
        }
        else {
          v67 = v66 / *(float*)&v138;
          if ((_BYTE)v137 != 0) {
            v68 = fminf(fmaxf(v67 + *((float*)&v137 + 1), 0x1.51eb860000000p-2),
                        0x1.0000000000000p+0);
          }
          else {
            v68 = fminf(fmaxf(*((float*)&v137 + 1) - v67, 0.0),
                        0x1.570a3c0000000p-1);
          }
        }
        *((float*)&v137 + 1) = v68;
        *(float*)&v133 = v66 + *(float*)&v133;
        ((void (*)(__int64 (***)()))v117[5])(&v117);
        GameRoutine_f54fe0(&v117);
        v18 = v129;
        if ((v108 & 1) != 0) {
          LODWORD(v18) = v129;
          *((_QWORD*)&v18 + 1) = DWORD2(v129);
        }
        v108 = 1;
        goto LABEL_96;
      }
    }
    v18 = v109;
  LABEL_96:
    v110 = v18;
    v117 = (__int64 (**)())v107;
    if (v127 != 0) {
      v128 = v127;
      v69 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v69 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v69);
      v18 = v110;
    }
    v70 = v125;
    if (v125 != nullptr) {
      if (v125 == v126) {
        goto LABEL_25;
      }
      v71 = v126 - 4;
      v72 = v126 - 4;
      do {
        v73 = (void (**)(float32x4_t*))LANES128(*(v72)).n128_u64[0];
        v72 -= 4;
        (*v73)(v71);
        v33 = v71 == v70;
        v71 = v72;
      } while (!v33);
      v18 = v110;
      v126 = v70;
      if (v125 != nullptr) {
      LABEL_25:
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v19);
        v18 = v110;
      }
    }
  LABEL_28:
    v16 += 4;
  } while (v16 != v17);
  if ((v108 & 1) != 0) {
    v111[1] = v18;
    v112 = DWORD2(v18);
    v111[0] = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830(&v117, 0.0);
    snd_playAt_ff5f0((void*)(v113), "SE_SYS_AttentionSign",
                     "SE_SYS_AttentionSign", v111, &v117, 0, 65537, 0, 0.0,
                     0x1.0000000000000p+0);
    snd_Fade_Destroy_Fade(&v117);
    GameRoutine_112180(v1 + 40, v113);
  }
LABEL_111:
  if (v141 != 0) {
    v142 = v141;
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v75);
  }
LABEL_115:
  *(_BYTE*)(v1 + 8) = 0;
LABEL_116:
  v76 = *(float**)(v1 + 16);
  v77 = (float*)(v1 + 24);
  if (v76 != (float*)(v1 + 24)) {
    v78 = game_script_hub_g_frame_counter_ptr[0];
    v79 = fw_memory_g_heap_manager_ptr;
    v80 = GameData_212f8b0[0] + 2;
    do {
      v83 = v76[70];
      v84 = (float)(*(float*)(*(_QWORD*)v78 + 160LL) * 0x1.0aef000000000p+4) /
            0x1.f400000000000p+9;
      if (v83 <= 0.0) {
        if (*((_BYTE*)v76 + 272) != 0) {
          v87 = 0x1.0000000000000p+0;
        }
        else {
          v87 = 0.0;
        }
      }
      else {
        v85 = v84 / v83;
        v86 = v76[69];
        if (*((_BYTE*)v76 + 272) != 0) {
          v87 = fminf(fmaxf(v85 + v86, 0x1.51eb860000000p-2),
                      0x1.0000000000000p+0);
        }
        else {
          v87 = fminf(fmaxf(v86 - v85, 0.0), 0x1.570a3c0000000p-1);
        }
      }
      v76[69] = v87;
      v88 = *((_QWORD*)v76 + 6);
      v76[60] = v84 + v76[60];
      (*(void (**)(_QWORD*))(v88 + 40))((_QWORD*)v76 + 6);
      GameRoutine_f54fe0(v76 + 12);
      v89 = *((float**)v76 + 1);
      if (((_BYTE)v76[68] & 1) != 0 || v76[69] > 0.0) {
        if (v89 != nullptr) {
          do {
            v91 = v89;
            v89 = *(float**)v89;
          } while (v89 != nullptr);
        }
        else {
          do {
            v91 = *((float**)v76 + 2);
            v33 = v76 == *(float**)v91;
            v76 = v91;
          } while (!v33);
        }
      }
      else {
        v90 = v76;
        if (v89 != nullptr) {
          do {
            v91 = v89;
            v89 = *(float**)v89;
          } while (v89 != nullptr);
        }
        else {
          do {
            v91 = *((float**)v90 + 2);
            v33 = v90 == *(float**)v91;
            v90 = v91;
          } while (!v33);
        }
        if (*(float**)(v1 + 16) == v76) {
          *(_QWORD*)(v1 + 16) = v91;
        }
        v92 = *(_QWORD*)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0(v92, v76);
        v94 = *((_QWORD*)v76 + 21);
        *((_QWORD*)v76 + 6) = v80;
        if (v94 != 0) {
          v95 = *(_QWORD*)v79;
          *((_QWORD*)v76 + 22) = v94;
          if (*(_QWORD*)(v95 + 200) != 0) {
            v96 = 128;
          }
          else {
            v96 = 56;
          }
          *(__n128*)&v93 = nn_mem_StandardAllocator_Free(v95 + v96);
        }
        v97 = *((void (****)(_QWORD, long double))v76 + 18);
        if (v97 != nullptr) {
          v98 = *((void (****)(_QWORD, long double))v76 + 19);
          if (v97 == v98) {
            goto LABEL_118;
          }
          v99 = v79;
          v100 = v80;
          v101 = v98 - 8;
          v102 = v1;
          v103 = v78;
          v104 = v98 - 8;
          do {
            v105 = *v104;
            v104 -= 8;
            (*v105)(v101, v93);
            v33 = v101 == v97;
            v101 = v104;
          } while (!v33);
          v106 = *((_QWORD*)v76 + 18);
          v78 = v103;
          v1 = v102;
          v80 = v100;
          v79 = v99;
          *((_QWORD*)v76 + 19) = v97;
          if (v106 != 0) {
          LABEL_118:
            if (*(_QWORD*)(*(_QWORD*)v79 + 200LL) != 0) {
              v81 = 128;
            }
            else {
              v81 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v79 + v81);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v79 + 200LL) != 0) {
          v82 = 128;
        }
        else {
          v82 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v79 + v82);
      }
      v76 = v91;
    } while (v91 != v77);
  }
}

__int64 MapPanelTutorial_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTutorial_vtable;
  return GameRoutine_f4c840(a1[3]);
}

__n128 MapPanelTutorial_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapPanelTutorial_vtable;
  GameRoutine_f4c840(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__int64

game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4ca30(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v7[0] = GameData_1ff5668;
  v7[1] = &v9;
  v8 = v7;
  v9 = v4;
  v7[2] = v2;
  v7[3] = v3;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 744LL))(v4, v7);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

_BYTE* game_map_MapPanelTutorial_UpdateTarget_lambda0_Invoke_f4cbc0(__int64 a1,
                                                                    int* a2,
                                                                    int* a3)
{
  int v4;
  int v5;
  _BYTE* result;
  __int64* v7;
  struct {
    _BYTE v8[2];
    __int16 v9;
  } v8_;

  v4 = *a2;
  v5 = *a3;
  result = (_BYTE*)(*(__int64 (**)(_QWORD))(***(_QWORD***)(a1 + 8) + 224LL))(
      **(_QWORD**)(a1 + 8));
  if (*(_QWORD*)result == **(_QWORD**)(a1 + 16)) {
    v7 = *(__int64**)(a1 + 24);
    v8_.v8[0] = v4;
    v8_.v8[1] = v5;
    v8_.v9 = 0;
    return GameRoutine_74e080_alt1(v7, (__int64)v8_.v8);
  }
  return result;
}

__int64 game_map_MapPanelTutorial_UpdateTarget_lambda1_Invoke(__int64 a1,
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
