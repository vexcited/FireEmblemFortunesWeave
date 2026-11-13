#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn))
SceneCameraCharaViewerController_DeletingDestructor();
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
game_facility_1450df0(PSEUDO_X8, __int128*, float, float, float, float);
__int64 GameRoutine_a7fed0(_QWORD, _QWORD, _QWORD, float, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wld_a7fda0(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_212e460[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212e438;
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void
game_facility_SceneCameraCharaViewerController_CommitBlend_lambda0_Invoke(
    PSEUDO_X8 x8_, __int64 a1);
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void game_facility_148da00(PSEUDO_X8, char* result,
                                                      char*, char*, char*);
__attribute__((swiftcall)) void
game_facility_148df80(PSEUDO_X8, __int64 result, __int64, _QWORD*, __int64);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 GameRoutine_d25920(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_2043458[])();
extern __int64 GameData_220f848;
extern __int64 game_script_hub_g_frame_counter;
float Cursor_734120(int, int, float, float, float, float);
float GameRoutine_1016910(__int64, float);
float GameRoutine_1016b40(float32x4_t*, float);
void game_d25cc0(__int64);
void game_d26240(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_SceneCameraCharaViewerController_CommitBlend(__int64 a1,
                                                                __int64 a2);
void __attribute__((noreturn))

SceneCameraCharaViewerController_DeletingDestructor()
{
  __udf(0x8002u);
}

void game_facility_SceneCameraCharaViewerController_CommitBlend(__int64 a1,
                                                                __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  float v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  float v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  int v18;
  float v19;
  float v20;
  float v21;
  int v22;
  int v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  int v29;
  int v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* i;
  __int64 v43;
  __int128 v44;
  __int128 v45;
  __int128 v46;
  int v47;
  __int128 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int128 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int128 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  signed __int64 v66;
  char v67;
  char* v68;
  __int64 v69;
  signed __int64 v70;
  char** v71;
  char* v72;
  unsigned __int64 v73;
  signed __int64 v74;
  char** v75;
  char* v76;
  bool v77;
  __int64 v78;
  char** v79;
  unsigned int v80;
  char* v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  char** v87;
  __int64 v88;
  __int64* k;
  __int64 v90;
  __int64 v91;
  char* v92;
  char** j;
  char* v94;
  char* v95;
  char* v96;
  char* v97;
  _QWORD* v98;
  __int64* v99;
  unsigned __int64 v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  char* v109;
  __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  _QWORD* v117;
  __int64 v118;
  _DWORD* v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  struct {
    _QWORD v127[4];
    _QWORD* v128;
  } v127_;
  struct {
    __int64 (**v129)();
    char* v130;
    char* v131;
    char gap88_[8];
    char** v132;
  } v129_;

  if (*(_BYTE*)(a1 + 100) == 1) {
    v3 = GameData_220f848;
    if (GameData_220f848 != 0) {
      GameRoutine_d25920(GameData_220f848);
      game_d25cc0(v3);
      game_d26240(v3);
    }
  }
  v4 = *(_QWORD*)(a1 + 40);
  v5 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  v6 = v4 + *(_QWORD*)(a1 + 48);
  v7 = *(__int64**)(a1 + 16);
  v8 = *(__int64**)(a1 + 24);
  v9 = &v7[v6 >> 4];
  if (v8 == v7) {
    v10 = 0;
  }
  else {
    v10 = *v9 + 368 * (v6 & 0xF);
  }
  v11 = 0;
  v12 = fabsf(v5 + v5);
  while (1) {
    v13 = &v7[v4 >> 4];
    if (v8 != v7) {
      break;
    }
    if (v10 == 0) {
      v15 = 0;
      goto LABEL_81;
    }
  LABEL_13:
    v16 = v10;
    if (v10 == *v9) {
      v16 = *(v9 - 1) + 5888;
      if (v11 == 0) {
        goto LABEL_26;
      }
    }
    else if (v11 == 0) {
      goto LABEL_26;
    }
    v17 = *(float*)(v16 - 28);
    if (v17 == 0x1.0000000000000p+0f) {
      v18 = *(_DWORD*)(v16 - 36);
      v17 = 0x0.0p+0f;
      *(_DWORD*)(v16 - 36) = 0;
      *(_DWORD*)(v16 - 28) = 0;
      *(_DWORD*)(v16 - 40) = v18;
      *(_DWORD*)(v16 - 32) = *(_DWORD*)(v16 - 24);
    }
    if (v11 != 2) {
    LABEL_26:
      v27 = *(float*)(v16 - 40);
      v26 = *(float*)(v16 - 36);
      if (v26 >= v27) {
        v34 = *(float*)(v16 - 28);
      }
      else {
        v28 = v5 + v26;
        v29 = *(_DWORD*)(v16 - 20);
        v30 = *(_DWORD*)(v16 - 16);
        if (v27 >= v28) {
          v31 = v28;
        }
        else {
          v31 = *(float*)(v16 - 40);
        }
        v32 = *(float*)(v16 - 32);
        v33 = *(float*)(v16 - 28);
        *(float*)(v16 - 36) = v31;
        v34 = Cursor_734120(v29, v30, v32, v33, v31, v27);
      }
      *(float*)(v16 - 24) = v34;
      goto LABEL_33;
    }
    v20 = *(float*)(v16 - 40);
    v19 = *(float*)(v16 - 36);
    if (v19 < v20) {
      v21 = (float)(v5 + v5) + v19;
      v22 = *(_DWORD*)(v16 - 20);
      v23 = *(_DWORD*)(v16 - 16);
      if (v20 >= v21) {
        v24 = v21;
      }
      else {
        v24 = *(float*)(v16 - 40);
      }
      v25 = *(float*)(v16 - 32);
      *(float*)(v16 - 36) = v24;
      v17 = Cursor_734120(v22, v23, v25, v17, v24, v20);
    }
    *(float*)(v16 - 24) = v17;
  LABEL_33:
    v36 = *(float*)(v16 - 56);
    v35 = *(float*)(v16 - 52);
    if (v35 <= v36) {
      if (v35 >= v36) {
        goto LABEL_39;
      }
      v35 = v12 + v35;
      if (v35 <= v36) {
        goto LABEL_39;
      }
    LABEL_38:
      v35 = *(float*)(v16 - 56);
      goto LABEL_39;
    }
    v35 = v35 - v12;
    if (v35 < v36) {
      goto LABEL_38;
    }
  LABEL_39:
    *(float*)(v16 - 52) = v35;
    GameRoutine_1016910(v16 - 368, v5);
    GameRoutine_1016b40((float32x4_t*)(v16 - 368), v5);
    if (v11 <= 1) {
      v37 = 1;
    }
    else {
      v37 = v11;
    }
    if (v11 == 1) {
      v11 = 2;
    }
    else {
      v11 = v37;
    }
    if (v10 == *v9) {
      v38 = *--v9;
      v10 = v38 + 5888;
    }
    v4 = *(_QWORD*)(a1 + 40);
    v7 = *(__int64**)(a1 + 16);
    v8 = *(__int64**)(a1 + 24);
    v10 -= 368;
  }
  v14 = *v13;
  v15 = *v13 + 368 * (v4 & 0xF);
  if (v10 != v15) {
    goto LABEL_13;
  }
  v39 = v7[(*(_QWORD*)(a1 + 48) + v4) >> 4] +
        368LL * ((*(int*)(a1 + 48) + (int)v4) & 0xF);
  if (v10 != v39) {
    while (*(float*)(v15 + 344) > 0x0.0p+0f) {
      v15 += 368;
      if (v15 - v14 == 5888) {
        v40 = v13[1];
        ++v13;
        v14 = v40;
        v15 = v40;
      }
      if (v15 == v39) {
        goto LABEL_79;
      }
    }
  }
  if (v15 == v39) {
  LABEL_79:
    v15 = v7[(*(_QWORD*)(a1 + 48) + v4) >> 4] +
          368LL * ((*(int*)(a1 + 48) + (int)v4) & 0xF);
  }
  else {
    v41 = v15;
    for (i = v13;; v14 = *i) {
      v41 += 368;
      if (v41 - v14 == 5888) {
        v43 = i[1];
        ++i;
        v41 = v43;
      }
      if (v41 == v39) {
        break;
      }
      if (*(float*)(v41 + 344) > 0x0.0p+0f) {
        *(_QWORD*)(v15 + 8) = *(_QWORD*)(v41 + 8);
        *(_QWORD*)v15 = *(_QWORD*)v41;
        *(_DWORD*)(v15 + 16) = *(_DWORD*)(v41 + 16);
        *(_DWORD*)(v15 + 20) = *(_DWORD*)(v41 + 20);
        v44 = *(_OWORD*)(v15 + 16);
        *((_QWORD*)&v44 + 1) = *(unsigned int*)(v41 + 24);
        *(_OWORD*)(v15 + 16) = v44;
        *(_DWORD*)(v15 + 32) = *(_DWORD*)(v41 + 32);
        *(_DWORD*)(v15 + 36) = *(_DWORD*)(v41 + 36);
        v45 = *(_OWORD*)(v15 + 32);
        *((_QWORD*)&v45 + 1) = *(unsigned int*)(v41 + 40);
        *(_OWORD*)(v15 + 32) = v45;
        *(_DWORD*)(v15 + 48) = *(_DWORD*)(v41 + 48);
        *(_DWORD*)(v15 + 52) = *(_DWORD*)(v41 + 52);
        v46 = *(_OWORD*)(v15 + 48);
        *((_QWORD*)&v46 + 1) = *(unsigned int*)(v41 + 56);
        *(_OWORD*)(v15 + 48) = v46;
        v47 = *(_DWORD*)(v41 + 72);
        *(_QWORD*)(v15 + 64) = *(_QWORD*)(v41 + 64);
        *(_DWORD*)(v15 + 72) = v47;
        *(_DWORD*)(v15 + 80) = *(_DWORD*)(v41 + 80);
        *(_DWORD*)(v15 + 84) = *(_DWORD*)(v41 + 84);
        v48 = *(_OWORD*)(v15 + 80);
        *((_QWORD*)&v48 + 1) = *(unsigned int*)(v41 + 88);
        *(_OWORD*)(v15 + 80) = v48;
        *(_DWORD*)(v15 + 96) = *(_DWORD*)(v41 + 96);
        *(_DWORD*)(v15 + 100) = *(_DWORD*)(v41 + 100);
        *(_DWORD*)(v15 + 104) = *(_DWORD*)(v41 + 104);
        *(_DWORD*)(v15 + 108) = *(_DWORD*)(v41 + 108);
        v50 = *(_QWORD*)(v41 + 112);
        v49 = *(_QWORD*)(v41 + 120);
        if (v49 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 16), 1u,
                                    memory_order_relaxed);
        }
        v51 = *(_QWORD*)(v15 + 120);
        *(_QWORD*)(v15 + 112) = v50;
        *(_QWORD*)(v15 + 120) = v49;
        if (v51 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v51);
        }
        v52 = *(_QWORD*)(v41 + 128);
        v53 = *(_QWORD*)(v41 + 136);
        *(_DWORD*)(v15 + 144) = *(_DWORD*)(v41 + 144);
        *(_QWORD*)(v15 + 128) = v52;
        *(_QWORD*)(v15 + 136) = v53;
        *(_DWORD*)(v15 + 160) = *(_DWORD*)(v41 + 160);
        *(_DWORD*)(v15 + 164) = *(_DWORD*)(v41 + 164);
        v54 = *(_OWORD*)(v15 + 160);
        *((_QWORD*)&v54 + 1) = *(unsigned int*)(v41 + 168);
        *(_OWORD*)(v15 + 160) = v54;
        LODWORD(v52) = *(_DWORD*)(v41 + 216);
        *(_QWORD*)(v15 + 200) = *(_QWORD*)(v41 + 200);
        *(_QWORD*)(v15 + 184) = *(_QWORD*)(v41 + 184);
        *(_QWORD*)(v15 + 176) = *(_QWORD*)(v41 + 176);
        v55 = *(_QWORD*)(v41 + 192);
        v56 = *(_QWORD*)(v41 + 208);
        *(_DWORD*)(v15 + 216) = v52;
        *(_QWORD*)(v15 + 208) = v56;
        *(_QWORD*)(v15 + 192) = v55;
        v58 = *(_QWORD*)(v41 + 224);
        v57 = *(_QWORD*)(v41 + 232);
        if (v57 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 16), 1u,
                                    memory_order_relaxed);
        }
        v59 = *(_QWORD*)(v15 + 232);
        *(_QWORD*)(v15 + 224) = v58;
        *(_QWORD*)(v15 + 232) = v57;
        if (v59 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v59);
        }
        if (v15 != v41) {
          CharacterController_d42d20(
              v15 + 240, *(char**)(v41 + 240), *(char**)(v41 + 248),
              (__int64)(*(_QWORD*)(v41 + 248) - *(_QWORD*)(v41 + 240)) >> 4);
        }
        if (*(unsigned __int8*)(v15 + 288) == *(unsigned __int8*)(v41 + 288)) {
          if (*(_BYTE*)(v15 + 288) != 0) {
            *(_DWORD*)(v15 + 272) = *(_DWORD*)(v41 + 272);
            *(_DWORD*)(v15 + 276) = *(_DWORD*)(v41 + 276);
            v60 = *(_OWORD*)(v15 + 272);
            *((_QWORD*)&v60 + 1) = *(unsigned int*)(v41 + 280);
            *(_OWORD*)(v15 + 272) = v60;
          }
        }
        else if (*(_BYTE*)(v15 + 288) != 0) {
          *(_BYTE*)(v15 + 288) = 0;
        }
        else {
          *(_QWORD*)(v15 + 280) = *(_QWORD*)(v41 + 280);
          v61 = *(_QWORD*)(v41 + 272);
          *(_BYTE*)(v15 + 288) = 1;
          *(_QWORD*)(v15 + 272) = v61;
        }
        *(_QWORD*)(v15 + 312) = *(_QWORD*)(v41 + 312);
        *(_QWORD*)(v15 + 304) = *(_QWORD*)(v41 + 304);
        v62 = *(_QWORD*)(v41 + 328);
        v63 = *(_QWORD*)(v41 + 336);
        v64 = *(_QWORD*)(v41 + 344);
        *(_DWORD*)(v15 + 352) = *(_DWORD*)(v41 + 352);
        *(_QWORD*)(v15 + 336) = v63;
        *(_QWORD*)(v15 + 344) = v64;
        *(_QWORD*)(v15 + 328) = v62;
        v15 += 368;
        if (v15 - *v13 == 5888) {
          v65 = v13[1];
          ++v13;
          v15 = v65;
        }
      }
    }
    v4 = *(_QWORD*)(a1 + 40);
    v7 = *(__int64**)(a1 + 16);
    v8 = *(__int64**)(a1 + 24);
  }
LABEL_81:
  v66 = *(_QWORD*)(a1 + 48);
  v67 = v66 + v4;
  v68 = (char*)&v7[(v66 + v4) >> 4];
  if (v8 == v7) {
    v69 = 0;
  }
  else {
    v69 = *(_QWORD*)v68 + 368LL * (((_BYTE)v66 + (_BYTE)v4) & 0xF);
  }
  if (v69 == v15) {
    v70 = 0;
  }
  else {
    v70 = 0xD37A6F4DE9BD37A7LL * ((v69 - *(_QWORD*)v68) >> 4) +
          2 * (v68 - (char*)v13) + 0x2C8590B21642C859LL * ((v15 - *v13) >> 4);
  }
  v71 = (char**)&v7[v4 >> 4];
  if (v8 != v7) {
    v72 = &(*v71)[368 * (v4 & 0xF)];
    if ((char*)v15 != v72) {
      goto LABEL_89;
    }
  LABEL_94:
    v73 = 0;
    goto LABEL_95;
  }
  v72 = nullptr;
  if (v15 == 0) {
    goto LABEL_94;
  }
LABEL_89:
  v73 = 0xD37A6F4DE9BD37A7LL * ((v15 - *v13) >> 4) +
        2 * ((char*)v13 - (char*)v71) +
        0x2C8590B21642C859LL * ((v72 - *v71) >> 4);
  if (v73 == 0) {
  LABEL_95:
    v76 = v72;
    v75 = (char**)&v7[v4 >> 4];
    if (v70 < 1) {
      goto LABEL_163;
    }
    goto LABEL_96;
  }
  v74 = 0xD37A6F4DE9BD37A7LL * ((v15 - *v13) >> 4) +
        2 * ((char*)v13 - (char*)v71);
  if (v74 < 1) {
    v83 = 15 - v74;
    v75 = &v71[-(v83 >> 4)];
    v76 = &(*v75)[368 * (~(_BYTE)v83 & 0xF)];
    if (v70 >= 1) {
      goto LABEL_96;
    }
  }
  else {
    v75 = &v71[(unsigned __int64)v74 >> 4];
    v76 = &(*v75)[368 * (v74 & 0xF)];
    if (v70 < 1) {
      goto LABEL_163;
    }
  LABEL_96:
    v77 = v73 > (unsigned __int64)(v66 - v70) >> 1;
    v78 = v70 - 0x2C8590B21642C859LL * ((v76 - *v75) >> 4);
    if (!v77) {
      if (v78 < 1) {
        v81 = (char*)&v75[-((unsigned __int64)(15 - v78) >> 4)];
        v82 = *(_QWORD*)v81;
        v80 = ~(15 - (_BYTE)v78) & 0xF;
      }
      else {
        v80 = v78 & 0xF;
        v81 = (char*)&v75[(unsigned __int64)v78 >> 4];
        v82 = *(_QWORD*)v81;
      }
      v92 = (char*)(v82 + 368LL * v80);
      if (v71 == v75) {
        v95 = v72;
        v96 = v76;
      }
      else {
        game_facility_148da00((void*)((char**)&v129_.v129), *v75, v76, v81,
                              v92);
        v81 = v129_.v130;
        v92 = v129_.v131;
        for (j = v75 - 1; j != v71; v92 = v129_.v131) {
          v94 = *j--;
          game_facility_148da00((void*)((char**)&v129_.v129), v94, v94 + 5888,
                                v81, v92);
          v81 = v129_.v130;
        }
        v95 = v72;
        v96 = *v71 + 5888;
      }
      game_facility_148da00((void*)((char**)&v129_.v129), v95, v96, v81, v92);
      v102 = v129_.v131;
      v103 = fw_memory_g_heap_manager_ptr;
      while (v72 != v102) {
        v104 = *((_QWORD*)v72 + 30);
        if (v104 != 0) {
          v105 = *(_QWORD*)v103;
          *((_QWORD*)v72 + 31) = v104;
          if (*(_QWORD*)(v105 + 200) != 0) {
            v106 = 128;
          }
          else {
            v106 = 56;
          }
          nn_mem_StandardAllocator_Free(v105 + v106, v104);
        }
        v107 = *((_QWORD*)v72 + 29);
        if (v107 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v107);
        }
        v108 = *((_QWORD*)v72 + 15);
        if (v108 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v108);
        }
        v72 += 368;
        if (v72 - *v71 == 5888) {
          v109 = v71[1];
          ++v71;
          v72 = v109;
        }
      }
      v66 = *(_QWORD*)(a1 + 48) - v70;
      v7 = *(__int64**)(a1 + 16);
      v4 = *(_QWORD*)(a1 + 40) + v70;
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(a1 + 48) = v66;
      if (v4 >= 0x20) {
        do {
          if (*v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v103 + 200LL) != 0) {
              v110 = 128;
            }
            else {
              v110 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v103 + v110, *v7);
            v7 = *(__int64**)(a1 + 16);
            v4 = *(_QWORD*)(a1 + 40);
          }
          ++v7;
          v4 -= 16LL;
          *(_QWORD*)(a1 + 16) = v7;
          *(_QWORD*)(a1 + 40) = v4;
        } while (v4 >= 0x20);
        v66 = *(_QWORD*)(a1 + 48);
      }
      goto LABEL_163;
    }
    if (v78 < 1) {
      v84 = 15 - v78;
      LOBYTE(v78) = ~(15 - v78);
      v79 = &v75[-(v84 >> 4)];
    }
    else {
      v79 = &v75[(unsigned __int64)v78 >> 4];
    }
    v85 = (__int64)&(*v79)[368 * (v78 & 0xF)];
    if (v8 == v7) {
      v86 = 0;
      if (v79 == (char**)v68) {
        goto LABEL_116;
      }
    LABEL_107:
      game_facility_148df80((void*)((__int64*)&v129_.v129), v85,
                            (__int64)(*v79 + 5888), v75, (__int64)v76);
      v87 = (char**)v129_.v130;
      v88 = (__int64)v129_.v131;
      for (k = (__int64*)(v79 + 1); k != (__int64*)v68;
           v88 = (__int64)v129_.v131) {
        v90 = *k++;
        game_facility_148df80((void*)((__int64*)&v129_.v129), v90, v90 + 5888,
                              v87, v88);
        v87 = (char**)v129_.v130;
      }
      v85 = *(_QWORD*)v68;
      v91 = v86;
    }
    else {
      v86 = *(_QWORD*)v68 + 368LL * (v67 & 0xF);
      if (v79 != (char**)v68) {
        goto LABEL_107;
      }
    LABEL_116:
      v91 = v86;
      v87 = v75;
      v88 = (__int64)v76;
    }
    game_facility_148df80((void*)((__int64*)&v129_.v129), v85, v91, v87, v88);
    v97 = v129_.v130;
    v98 = v129_.v131;
    v7 = *(__int64**)(a1 + 16);
    v99 = *(__int64**)(a1 + 24);
    if (v99 == v7) {
      v101 = 0;
      if (v129_.v131 != nullptr) {
        goto LABEL_145;
      }
    }
    else {
      v100 = *(_QWORD*)(a1 + 48) + *(_QWORD*)(a1 + 40);
      v101 = v7[v100 >> 4] + 368 * (v100 & 0xF);
      if (v129_.v131 == (char*)v101) {
        goto LABEL_159;
      }
    LABEL_145:
      v111 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v112 = v98[30];
        if (v112 != 0) {
          v113 = *v111;
          v98[31] = v112;
          if (*(_QWORD*)(v113 + 200) != 0) {
            v114 = 128;
          }
          else {
            v114 = 56;
          }
          nn_mem_StandardAllocator_Free(v113 + v114, v112);
        }
        v115 = v98[29];
        if (v115 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v115);
        }
        v116 = v98[15];
        if (v116 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v116);
        }
        v98 += 46;
        if ((_UNKNOWN*)((char*)v98 - *(_QWORD*)v97) == ((_UNKNOWN*)0x1700LL)) {
          v117 = *((_QWORD**)v97 + 1);
          v97 += 8;
          v98 = v117;
        }
      } while (v98 != (_QWORD*)v101);
      v7 = *(__int64**)(a1 + 16);
      v99 = *(__int64**)(a1 + 24);
    }
  LABEL_159:
    if (v99 == v7) {
      v118 = 0;
    }
    else {
      v118 = 2 * ((char*)v99 - (char*)v7) - 1;
    }
    v4 = *(_QWORD*)(a1 + 40);
    v66 = *(_QWORD*)(a1 + 48) - v70;
    *(_QWORD*)(a1 + 48) = v66;
    if (v118 - (v4 + v66) >= 0x20) {
      v122 = fw_memory_g_heap_manager_ptr;
      do {
        v124 = *(v99 - 1);
        if (v124 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v122 + 200LL) != 0) {
            v125 = 128;
          }
          else {
            v125 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v122 + v125, v124);
          v7 = *(__int64**)(a1 + 16);
          v99 = *(__int64**)(a1 + 24);
          v4 = *(_QWORD*)(a1 + 40);
          v66 = *(_QWORD*)(a1 + 48);
        }
        *(_QWORD*)(a1 + 24) = --v99;
        v123 = 2 * ((char*)v99 - (char*)v7) - 1;
        if (v99 == v7) {
          v123 = 0;
        }
      } while (v123 - (v4 + v66) >= 0x20);
    }
  }
LABEL_163:
  if (v66 == 1) {
    v119 = (_DWORD*)(v7[v4 >> 4] + 368 * (v4 & 0xF));
    v119[83] = v119[82];
    v119[86] = v119[85];
    v66 = *(_QWORD*)(a1 + 48);
  }
  if (a2 != 0 && v66 != 0) {
    v127_.v127[0] = GameData_2043458;
    v127_.v127[1] = a1;
    v127_.v128 = v127_.v127;
    v129_.v132 = (char**)&v129_.v129;
    v129_.v129 = GameData_2043458;
    v129_.v130 = (char*)a1;
    GameRoutine_14514d0(&v129_.v129, (_QWORD*)(a2 + 272));
    if (v129_.v132 == (char**)&v129_.v129) {
      v120 = 32;
    LABEL_171:
      (*(void (**)(void*)) & (*v129_.v132)[v120])((void*)v129_.v132);
    }
    else if (v129_.v132 != nullptr) {
      v120 = 40;
      goto LABEL_171;
    }
    if (v127_.v128 == v127_.v127) {
      v121 = 32;
    LABEL_176:
      (*(void (**)(__int64))(*v127_.v128 + v121))((__int64)v127_.v128);
    }
    else if (v127_.v128 != nullptr) {
      v121 = 40;
      goto LABEL_176;
    }
  }
}

__attribute__((swiftcall)) void

game_facility_SceneCameraCharaViewerController_CommitBlend_lambda0_Invoke(
    PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x4_t* v2;
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  atomic_ullong* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
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
  float* v32;
  float v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  _DWORD* v40;
  float32x4_t v41;
  unsigned __int64 v42;
  float v43;
  float* v44;
  float v45;
  float v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  float32x4_t* v54;
  float32x4_t v55;
  float32x4_t v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int128 v63;
  _QWORD* v64;

  v64 = a2;
  v2 = *(float32x4_t**)(a1 + 8);
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 432, 16, 0);
  v4 = result;
  v5 = GameData_212e460[0];
  v6 = (__int64*)GameData_212c2a0;
  *(_QWORD*)(result + 112) = 1065353216;
  *(_QWORD*)(result + 120) = 0x100000000LL;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 8) = 0;
  v7 = (atomic_ullong*)(result + 8);
  v8 = *v6;
  v9 = v6[1];
  *(_QWORD*)(result + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(result + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(result + 144) = 0x4110000041800000LL;
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v6);
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v6);
  *(_QWORD*)(result + 168) = 1092616192;
  v12 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6);
  v13 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6 + 8);
  *(_QWORD*)result = v5 + 2;
  v14 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6);
  v15 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8);
  *(_QWORD*)(result + 240) = v10;
  *(_QWORD*)(result + 248) = v11;
  *(_QWORD*)(result + 192) = v8;
  *(_QWORD*)(result + 200) = v9;
  *(_QWORD*)(result + 224) = v12;
  *(_QWORD*)(result + 232) = v13;
  *(_QWORD*)(result + 208) = v14;
  *(_QWORD*)(result + 216) = v15;
  v16 = (__int64*)GameData_212c2b0;
  v17 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0);
  v19 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0);
  v18 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  v21 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2b0);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2b0);
  v22 = *(_QWORD*)GameData_212c2b0;
  *(_QWORD*)(result + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0 + 8);
  *(_QWORD*)(result + 280) = v18;
  v23 = *v16;
  v24 = v16[1];
  v26 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
  v25 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16 + 8);
  *(_QWORD*)(result + 320) = v22;
  *(_QWORD*)(result + 328) = v17;
  *(_QWORD*)(result + 256) = v23;
  *(_QWORD*)(result + 264) = v24;
  v27 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v16);
  *(_QWORD*)(result + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v16);
  *(_QWORD*)(result + 312) = v20;
  v28 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v16 + 8);
  *(_QWORD*)(result + 288) =
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v16 + 16);
  *(_QWORD*)(result + 296) = v25;
  *(_QWORD*)(result + 336) = v19;
  *(_QWORD*)(result + 344) = v28;
  v29 = GameData_212e438;
  v30 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v16);
  *(_QWORD*)(result + 40) = 0;
  *(_DWORD*)(result + 152) = 0;
  *(_BYTE*)(result + 164) = 1;
  *(_DWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 352) = v26;
  *(_QWORD*)(result + 360) = v27;
  *(_QWORD*)(result + 408) = 0;
  *(_QWORD*)(result + 416) = 0;
  *(_QWORD*)(result + 384) = 0;
  *(_QWORD*)(result + 392) = 0;
  *(_BYTE*)(result + 165) = 1;
  *(_QWORD*)(result + 368) = v21;
  *(_QWORD*)(result + 376) = v30;
  *(_QWORD*)(result + 156) = 0x469C40003DCCCCCDLL;
  *(_OWORD*)(result + 48) = GameData_1a83090;
  *(_OWORD*)(result + 64) = (__typeof__(*(_OWORD*)(result + 64))){0};
  *(_OWORD*)(result + 80) = GameData_1a83610;
  *(_OWORD*)(result + 96) = (__typeof__(*(_OWORD*)(result + 96))){0};
  *(_QWORD*)(result + 32) = v29 + 16;
  v31 = result + 32;
  *(_QWORD*)(result + 424) = 1023;
  *(_QWORD*)(result + 392) = 1023;
  *(_QWORD*)(result + 400) = 0;
  if (LANES128(v2[3]).n128_u64[0] != 0) {
    v32 = (float*)(*(_QWORD*)(LANES128(v2[1]).n128_u64[0] +
                              8 * (LANES128(v2[2]).n128_u64[1] >> 4)) +
                   368 * (LANES128(v2[2]).n128_u64[1] & 0xF));
    v33 = v32[86];
    game_13f9460((void*)(&v63), v32 + 4);
    v34 = GameData_212dce8;
    game_facility_1450df0(
        (void*)(&v61), &v63, *v32,
        v32[2] - *(float*)(*(_QWORD*)GameData_212dce8 + 128LL), v32[1], v32[3]);
    v35 = v61;
    wld_a7fda0(LANES128(v2[3]).n128_u64[1], v61);
    result = wld_a7fda0(v31, v35);
    v36 = LANES128(v2[2]).n128_u64[1];
    v37 = LANES128(v2[1]).n128_u64[0];
    v38 = v62;
    v39 = v36 >> 1;
    LODWORD(v36) = v36 & 0xF;
    v39 &= 0x7FFFFFFFFFFFFFF8uLL;
    v40 = (_DWORD*)(*(_QWORD*)(v37 + v39) + 368LL * (unsigned int)v36);
    LANES128(v2[5]).n128_u32[0] = v40[12];
    LANES128(v2[5]).n128_u32[1] = v40[13];
    v41 = v2[5];
    LANES128(v41).n128_u64[1] = (unsigned int)v40[14];
    v2[5] = v41;
    LANES128(v2[6]).n128_u32[0] =
        *(_DWORD*)(*(_QWORD*)(v37 + v39) + 368LL * (unsigned int)v36 + 64);
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
      result = std___1___shared_weak_count___release_weak(v38);
    }
    if (LANES128(v2[3]).n128_u64[0] >= 2) {
      v42 = 1;
      v43 = v33 + 0.0f;
      do {
        v44 = (float*)(*(_QWORD*)(LANES128(v2[1]).n128_u64[0] +
                                  8 * ((v42 + LANES128(v2[2]).n128_u64[1]) >>
                                       4)) +
                       368LL *
                           (((_DWORD)v42 + LANES128(v2[2]).n128_u32[2]) & 0xF));
        v43 = v43 + v44[86];
        game_13f9460((void*)(&v63), v44 + 4);
        result = X8CALL_X0(
            __int64,
            game_facility_1450df0((void*)(&v61), &v63, *v44,
                                  v44[2] - *(float*)(*(_QWORD*)v34 + 128LL),
                                  v44[1], v44[3]));
        v45 = *(
            float*)(*(_QWORD*)(LANES128(v2[1]).n128_u64[0] +
                               8 * ((v42 + LANES128(v2[2]).n128_u64[1]) >> 4)) +
                    368LL *
                        (((_DWORD)v42 + LANES128(v2[2]).n128_u32[2]) & 0xF) +
                    344);
        if (v45 > 0.0f) {
          v46 = v45 / v43;
          v47 = v61;
          v48 = LANES128(v2[3]).n128_u64[1];
          if ((float)(v45 / v43) <= 0.0f) {
            v49 = v31;
          }
          else {
            v49 = v61;
          }
          wld_a7fda0(LANES128(v2[3]).n128_u64[1], v49);
          if (v46 > 0.0f && v46 < 0x1.0000000000000p+0f) {
            GameRoutine_a7fed0(v48, v31, v47, v46, v46);
          }
          result = wld_a7fda0(v31, LANES128(v2[3]).n128_u64[1]);
          v51 = LANES128(v2[1]).n128_u64[0];
          v52 = v42 + LANES128(v2[2]).n128_u64[1];
          v53 = v52 >> 1;
          LODWORD(v52) = v52 & 0xF;
          v53 &= 0x7FFFFFFFFFFFFFF8uLL;
          v54 =
              (float32x4_t*)(*(_QWORD*)(v51 + v53) + 368LL * (unsigned int)v52);
          v55 = vaddq_f32(v2[5],
                          vmulq_n_f32(vsubq_f32(v54[3], v2[5]),
                                      LANES128(v54[21]).n128_f32[2] / v43));
          LANES128(v2[5]).n128_u64[0] = LANES128(v55).n128_u64[0];
          v56 = v2[5];
          LANES128(v56).n128_u64[1] = LANES128(v55).n128_u32[2];
          LANES128(v55).n128_u32[0] = LANES128(v2[6]).n128_u32[0];
          v2[5] = v56;
          v57 = *(_QWORD*)(v51 + v53) + 368LL * (unsigned int)v52;
          LANES128(v2[6]).n128_f32[0] =
              LANES128(v55).n128_f32[0] +
              (float)((float)(*(float*)(v57 + 64) - LANES128(v55).n128_f32[0]) *
                      (float)(*(float*)(v57 + 344) / v43));
        }
        v58 = v62;
        if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
          result = std___1___shared_weak_count___release_weak(v58);
        }
        ++v42;
      } while (LANES128(v2[3]).n128_u64[0] > v42);
    }
  }
  v59 = LANES128(v2[4]).n128_u64[0];
  v60 = v64;
  *v64 = LANES128(v2[3]).n128_u64[1];
  v60[1] = v59;
  if (v59 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    {
      std___1___shared_weak_count___release_weak(v4);
      return;
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
