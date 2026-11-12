#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19170a0(_QWORD, _QWORD);
__int64 GameRoutine_191ab90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_191c750();
__int64 GameRoutine_191d030();
__int64 GameRoutine_191d050();
__int64 GameRoutine_1922310(_QWORD, _QWORD, _QWORD);
__int64 game_191c8b0();
__int64 game_191cb10();
__int64 game_191cd20();
__int64 game_191ce20();
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 spine_Skeleton_getSlots(_QWORD);
__int64 spine_Skeleton_setPosition(double, float);
__int64 spine_Skeleton_setScaleX(void);
__int64 spine_Skeleton_setScaleY(_QWORD, float);
extern __int64 (*GameData_21107b0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
double* SpineBuildCallback_Unknown2_alt1(
    double* result, int a2, __int64 a3,
    char a4) __asm__("SpineBuildCallback_Unknown2");
__int64 GameHr_19170a0(__int64 result, const char*);
__int64 GameHr_1922310(__int64 result, unsigned __int8*, char);
__int64 game_191ab90(__int64, unsigned __int8*, _DWORD*);
__int64 game_191d030();
__int64 game_191d050();
__int64 spine_Skeleton_getSlots_alt1(void) __asm__("spine_Skeleton_getSlots");
__int64
spine_Skeleton_setPosition_alt1(__int64 result, float,
                                float) __asm__("spine_Skeleton_setPosition");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpineBuildCallback_Unknown2(__int64 a1, int a2, __int64 a3, char a4);

void SpineBuildCallback_Unknown2(__int64 a1, int a2, __int64 a3, char a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v6;
  unsigned __int64 v7;
  const char* v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int8* v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int8* v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  struct {
    __int64 v73;
    unsigned __int64 v74;
    unsigned __int8* v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
  } v73_;
  struct {
    _QWORD v85[4];
    _QWORD* v86;
  } v85_;

  if (a3 == 0 || a2 != 1 || (a4 & 1) == 0) {
    return;
  }
  v73_.v83 = 0;
  v73_.v84 = 0;
  v73_.v81 = 0;
  v73_.v82 = 0;
  v73_.v79 = 0;
  v73_.v80 = 0;
  v73_.v77 = 0;
  v73_.v78 = 0;
  v73_.v75 = nullptr;
  v73_.v76 = 0;
  v73_.v73 = 0;
  v73_.v74 = 0;
  GameHr_1922310((__int64)&v73_.v73, (unsigned __int8*)(a3 + 40), 0);
  v6 = *(unsigned __int8*)(a1 + 56);
  if ((v6 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 64);
  }
  else {
    v7 = v6 >> 1;
  }
  if (v7 != 0) {
    if ((v6 & 1) != 0) {
      v8 = *(const char**)(a1 + 72);
    }
    else {
      v8 = (const char*)(a1 + 57);
    }
    GameHr_19170a0(a3, v8);
  }
  if (*(_BYTE*)(a1 + 50) == 1 && *(_BYTE*)(a3 + 1041) == 1) {
    v9 = *(_QWORD*)(a3 + 96);
    if (v9 == 0 || (spine_Skeleton_setPosition_alt1(
                        v9, COERCE_FLOAT(*(_QWORD*)(a1 + 32)),
                        COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 32)))),
                    *(_BYTE*)(a3 + 1041) == 1)) {
      if (*(_QWORD*)(a3 + 96) != 0) {
        LODWORD(v72) = HIDWORD(*(_QWORD*)(a1 + 40));
        spine_Skeleton_setScaleX();
        spine_Skeleton_setScaleY(*(_QWORD*)(a3 + 96), v72);
      }
    }
  }
  v10 = *(unsigned __int8*)(a1 + 8);
  if (v10 <= 3) {
    switch (v10) {
    case 1u:
      if ((v73_.v73 & 1) != 0) {
        v26 = v73_.v74;
      }
      else {
        v26 = (unsigned __int64)(unsigned __int8)v73_.v73 >> 1;
      }
      if (v26 != 0) {
        v27 = v73_.v75;
        if ((v73_.v73 & 1) == 0) {
          v27 = (unsigned __int8*)&v73_.v73 + 1;
        }
        v28 = *v27;
        if ((unsigned int)(v28 - 51) <= 1) {
          v85_.v85[0] = GameData_21107b0;
          v85_.v85[1] = game_191ce20;
          v29 = *(unsigned __int8*)(a3 + 1041);
          v14 = v85_.v85;
          v85_.v86 = v85_.v85;
          if (v29 != 1) {
            goto LABEL_147;
          }
          if (*(_QWORD*)(a3 + 96) == 0) {
            goto LABEL_144;
          }
          v30 = spine_Skeleton_getSlots_alt1();
          if (*(_QWORD*)(v30 + 8) == 0) {
            goto LABEL_144;
          }
          v31 = v30;
          v32 = 0;
          while (v85_.v86 != nullptr) {
            if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                     v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v31 + 24) + 8 * v32)) &
                 1) != 0 &&
                *(_QWORD*)(v31 + 8) > (unsigned __int64)++v32) {
              continue;
            }
            goto LABEL_144;
          }
          goto LABEL_172;
        }
        if (v28 == 53) {
          v85_.v85[0] = GameData_21107b0;
          v85_.v85[1] = game_191d030;
          v59 = *(unsigned __int8*)(a3 + 1041);
          v14 = v85_.v85;
          v85_.v86 = v85_.v85;
          if (v59 != 1) {
            goto LABEL_147;
          }
          if (*(_QWORD*)(a3 + 96) == 0) {
            goto LABEL_144;
          }
          v60 = spine_Skeleton_getSlots_alt1();
          if (*(_QWORD*)(v60 + 8) == 0) {
            goto LABEL_144;
          }
          v61 = v60;
          v62 = 0;
          while (v85_.v86 != nullptr) {
            if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                     v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v61 + 24) + 8 * v62)) &
                 1) != 0 &&
                *(_QWORD*)(v61 + 8) > (unsigned __int64)++v62) {
              continue;
            }
            goto LABEL_144;
          }
          goto LABEL_172;
        }
      }
      v85_.v85[0] = GameData_21107b0;
      v85_.v85[1] = game_191d050;
      v63 = *(unsigned __int8*)(a3 + 1041);
      v14 = v85_.v85;
      v85_.v86 = v85_.v85;
      if (v63 != 1) {
        goto LABEL_147;
      }
      if (*(_QWORD*)(a3 + 96) == 0) {
        goto LABEL_144;
      }
      v64 = spine_Skeleton_getSlots_alt1();
      if (*(_QWORD*)(v64 + 8) == 0) {
        goto LABEL_144;
      }
      v65 = v64;
      v66 = 0;
      while (v85_.v86 != nullptr) {
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                 v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v65 + 24) + 8 * v66)) &
             1) != 0 &&
            *(_QWORD*)(v65 + 8) > (unsigned __int64)++v66) {
          continue;
        }
        goto LABEL_144;
      }
      goto LABEL_172;
    case 2u:
      v85_.v85[0] = GameData_21107b0;
      v85_.v85[1] = game_191cd20;
      v47 = *(unsigned __int8*)(a3 + 1041);
      v14 = v85_.v85;
      v85_.v86 = v85_.v85;
      if (v47 != 1) {
        goto LABEL_147;
      }
      if (*(_QWORD*)(a3 + 96) == 0) {
        goto LABEL_144;
      }
      v48 = spine_Skeleton_getSlots_alt1();
      if (*(_QWORD*)(v48 + 8) == 0) {
        goto LABEL_144;
      }
      v49 = v48;
      v50 = 0;
      while (v85_.v86 != nullptr) {
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                 v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v49 + 24) + 8 * v50)) &
             1) != 0 &&
            *(_QWORD*)(v49 + 8) > (unsigned __int64)++v50) {
          continue;
        }
        goto LABEL_144;
      }
      goto LABEL_172;
    case 3u:
      v85_.v85[0] = GameData_21107b0;
      v85_.v85[1] = GameRoutine_191c750;
      v18 = *(unsigned __int8*)(a3 + 1041);
      v14 = v85_.v85;
      v85_.v86 = v85_.v85;
      if (v18 != 1) {
        goto LABEL_147;
      }
      if (*(_QWORD*)(a3 + 96) == 0) {
        goto LABEL_144;
      }
      v19 = spine_Skeleton_getSlots_alt1();
      if (*(_QWORD*)(v19 + 8) == 0) {
        goto LABEL_144;
      }
      v20 = v19;
      v21 = 0;
      while (v85_.v86 != nullptr) {
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                 v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v20 + 24) + 8 * v21)) &
             1) != 0 &&
            *(_QWORD*)(v20 + 8) > (unsigned __int64)++v21) {
          continue;
        }
        goto LABEL_144;
      }
    LABEL_172:
      GameRoutine_60a310_alt1();
    default:
      break;
    }
  LABEL_73:
    v85_.v85[0] = GameData_21107b0;
    v85_.v85[1] = GameRoutine_191c750;
    v33 = *(unsigned __int8*)(a3 + 1041);
    v14 = v85_.v85;
    v85_.v86 = v85_.v85;
    if (v33 != 1) {
      goto LABEL_147;
    }
    if (*(_QWORD*)(a3 + 96) == 0) {
      goto LABEL_144;
    }
    v34 = spine_Skeleton_getSlots_alt1();
    if (*(_QWORD*)(v34 + 8) == 0) {
      goto LABEL_144;
    }
    v35 = v34;
    v36 = 0;
    while (v85_.v86 != nullptr) {
      if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
               v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v35 + 24) + 8 * v36)) &
           1) != 0 &&
          *(_QWORD*)(v35 + 8) > (unsigned __int64)++v36) {
        continue;
      }
      goto LABEL_144;
    }
    goto LABEL_172;
  }
  if (*(unsigned __int8*)(a1 + 8) > 5u) {
    if (v10 == 6) {
      if ((v73_.v73 & 1) != 0) {
        v41 = v73_.v74;
      }
      else {
        v41 = (unsigned __int64)(unsigned __int8)v73_.v73 >> 1;
      }
      if (v41 == 0) {
        goto LABEL_112;
      }
      v42 = v73_.v75;
      if ((v73_.v73 & 1) == 0) {
        v42 = (unsigned __int8*)&v73_.v73 + 1;
      }
      if ((unsigned int)*v42 - 51 <= 1) {
        v85_.v85[0] = GameData_21107b0;
        v85_.v85[1] = game_191c8b0;
        v43 = *(unsigned __int8*)(a3 + 1041);
        v14 = v85_.v85;
        v85_.v86 = v85_.v85;
        if (v43 != 1) {
          goto LABEL_147;
        }
        if (*(_QWORD*)(a3 + 96) == 0) {
          goto LABEL_144;
        }
        v44 = spine_Skeleton_getSlots_alt1();
        if (*(_QWORD*)(v44 + 8) == 0) {
          goto LABEL_144;
        }
        v45 = v44;
        v46 = 0;
        while (v85_.v86 != nullptr) {
          if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                   v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v45 + 24) + 8 * v46)) &
               1) != 0 &&
              *(_QWORD*)(v45 + 8) > (unsigned __int64)++v46) {
            continue;
          }
          goto LABEL_144;
        }
      }
      else {
      LABEL_112:
        v85_.v85[0] = GameData_21107b0;
        v85_.v85[1] = GameRoutine_191c750;
        v51 = *(unsigned __int8*)(a3 + 1041);
        v14 = v85_.v85;
        v85_.v86 = v85_.v85;
        if (v51 != 1) {
          goto LABEL_147;
        }
        if (*(_QWORD*)(a3 + 96) == 0) {
          goto LABEL_144;
        }
        v52 = spine_Skeleton_getSlots_alt1();
        if (*(_QWORD*)(v52 + 8) == 0) {
          goto LABEL_144;
        }
        v53 = v52;
        v54 = 0;
        while (v85_.v86 != nullptr) {
          if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                   v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v53 + 24) + 8 * v54)) &
               1) != 0 &&
              *(_QWORD*)(v53 + 8) > (unsigned __int64)++v54) {
            continue;
          }
          goto LABEL_144;
        }
      }
      goto LABEL_172;
    }
    if (v10 == 7) {
      v85_.v85[0] = GameData_21107b0;
      v85_.v85[1] = GameRoutine_191c750;
      v22 = *(unsigned __int8*)(a3 + 1041);
      v14 = v85_.v85;
      v85_.v86 = v85_.v85;
      if (v22 != 1) {
        goto LABEL_147;
      }
      if (*(_QWORD*)(a3 + 96) == 0) {
        goto LABEL_144;
      }
      v23 = spine_Skeleton_getSlots_alt1();
      if (*(_QWORD*)(v23 + 8) == 0) {
        goto LABEL_144;
      }
      v24 = v23;
      v25 = 0;
      while (v85_.v86 != nullptr) {
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                 v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v24 + 24) + 8 * v25)) &
             1) != 0 &&
            *(_QWORD*)(v24 + 8) > (unsigned __int64)++v25) {
          continue;
        }
        goto LABEL_144;
      }
      goto LABEL_172;
    }
    goto LABEL_73;
  }
  if (v10 == 4) {
    v85_.v85[0] = GameData_21107b0;
    v85_.v85[1] = GameRoutine_191c750;
    v37 = *(unsigned __int8*)(a3 + 1041);
    v14 = v85_.v85;
    v85_.v86 = v85_.v85;
    if (v37 != 1) {
      goto LABEL_147;
    }
    if (*(_QWORD*)(a3 + 96) == 0) {
      goto LABEL_144;
    }
    v38 = spine_Skeleton_getSlots_alt1();
    if (*(_QWORD*)(v38 + 8) == 0) {
      goto LABEL_144;
    }
    v39 = v38;
    v40 = 0;
    while (v85_.v86 != nullptr) {
      if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
               v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v39 + 24) + 8 * v40)) &
           1) != 0 &&
          *(_QWORD*)(v39 + 8) > (unsigned __int64)++v40) {
        continue;
      }
      goto LABEL_144;
    }
    goto LABEL_172;
  }
  if (v10 != 5) {
    goto LABEL_73;
  }
  if ((v73_.v73 & 1) != 0) {
    v11 = v73_.v74;
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)v73_.v73 >> 1;
  }
  if (v11 == 0) {
    goto LABEL_120;
  }
  v12 = v73_.v75;
  if ((v73_.v73 & 1) == 0) {
    v12 = (unsigned __int8*)&v73_.v73 + 1;
  }
  if ((unsigned int)*v12 - 51 > 1) {
  LABEL_120:
    v85_.v85[0] = GameData_21107b0;
    v85_.v85[1] = GameRoutine_191c750;
    v55 = *(unsigned __int8*)(a3 + 1041);
    v14 = v85_.v85;
    v85_.v86 = v85_.v85;
    if (v55 != 1) {
      goto LABEL_147;
    }
    if (*(_QWORD*)(a3 + 96) == 0) {
      goto LABEL_144;
    }
    v56 = spine_Skeleton_getSlots_alt1();
    if (*(_QWORD*)(v56 + 8) == 0) {
      goto LABEL_144;
    }
    v57 = v56;
    v58 = 0;
    while (v85_.v86 != nullptr) {
      if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
               v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v57 + 24) + 8 * v58)) &
           1) != 0 &&
          *(_QWORD*)(v57 + 8) > (unsigned __int64)++v58) {
        continue;
      }
      goto LABEL_144;
    }
    goto LABEL_172;
  }
  v85_.v85[0] = GameData_21107b0;
  v85_.v85[1] = game_191cb10;
  v13 = *(unsigned __int8*)(a3 + 1041);
  v14 = v85_.v85;
  v85_.v86 = v85_.v85;
  if (v13 != 1) {
  LABEL_147:
    v67 = 32;
    goto LABEL_148;
  }
  if (*(_QWORD*)(a3 + 96) != 0) {
    v15 = spine_Skeleton_getSlots_alt1();
    if (*(_QWORD*)(v15 + 8) != 0) {
      v16 = v15;
      v17 = 0;
      while (v85_.v86 != nullptr) {
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v85_.v86 + 48LL))(
                 v85_.v86, a3, *(_QWORD*)(*(_QWORD*)(v16 + 24) + 8 * v17)) &
             1) != 0 &&
            *(_QWORD*)(v16 + 8) > (unsigned __int64)++v17) {
          continue;
        }
        goto LABEL_144;
      }
      goto LABEL_172;
    }
  }
LABEL_144:
  v14 = v85_.v86;
  if (v85_.v86 == v85_.v85) {
    goto LABEL_147;
  }
  if (v85_.v86 != nullptr) {
    v67 = 40;
  LABEL_148:
    (*(void (**)(__int64))(*v14 + v67))((__int64)v14);
  }
  if (*(_BYTE*)(a1 + 12) != 0) {
    game_191ab90(a3, (unsigned __int8*)&v73_.v73, (_DWORD*)(a1 + 9));
  }
  if ((v73_.v82 & 1) != 0 && v73_.v84 != 0) {
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v73_.v84);
  }
  if ((v73_.v79 & 1) != 0 && v73_.v81 != 0) {
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v73_.v81);
  }
  if ((v73_.v76 & 1) != 0 && v73_.v78 != 0) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v73_.v78);
  }
  if ((v73_.v73 & 1) != 0 && v73_.v75 != nullptr) {
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v71 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, (__int64)v73_.v75);
  }
}

#pragma GCC visibility pop
