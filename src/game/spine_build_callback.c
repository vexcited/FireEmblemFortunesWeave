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
double* SpineBuildCallback_Unknown2(double* result, int a2, __int64 a3,
                                    char a4);

double* SpineBuildCallback_Unknown2(double* result, int a2, __int64 a3, char a4)
{
  double* v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  unsigned int v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int8* v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int8* v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  float v83;
  __int64 v84;
  unsigned __int64 v85;
  unsigned __int8* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  _QWORD v96[4];
  _QWORD* v97;

  if (a3 == 0 || a2 != 1 || (a4 & 1) == 0) {
    return result;
  }
  v4 = result;
  v94 = 0;
  v95 = 0;
  v92 = 0;
  v93 = 0;
  v90 = 0;
  v91 = 0;
  v88 = 0;
  v89 = 0;
  v86 = nullptr;
  v87 = 0;
  v84 = 0;
  v85 = 0;
  GameRoutine_1922310(&v84, a3 + 40, 0);
  v6 = *((unsigned __int8*)v4 + 56);
  if ((v6 & 1) != 0) {
    v7 = *((_QWORD*)v4 + 8);
  }
  else {
    v7 = v6 >> 1;
  }
  if (v7 != 0) {
    if ((v6 & 1) != 0) {
      v8 = *((char**)v4 + 9);
    }
    else {
      v8 = (char*)v4 + 57;
    }
    GameRoutine_19170a0(a3, v8);
  }
  if (*((_BYTE*)v4 + 50) == 1 && *(_BYTE*)(a3 + 1041) == 1) {
    if (*(_QWORD*)(a3 + 96) == 0 ||
        (spine_Skeleton_setPosition(v4[4],
                                    COERCE_FLOAT(HIDWORD(*((_QWORD*)v4 + 4)))),
         *(_BYTE*)(a3 + 1041) == 1)) {
      if (*(_QWORD*)(a3 + 96) != 0) {
        LODWORD(v83) = HIDWORD(*((_QWORD*)v4 + 5));
        spine_Skeleton_setScaleX();
        spine_Skeleton_setScaleY(*(_QWORD*)(a3 + 96), v83);
      }
    }
  }
  v9 = *((unsigned __int8*)v4 + 8);
  if (v9 <= 3) {
    switch (v9) {
    case 1u:
      if ((v84 & 1) != 0) {
        v28 = v85;
      }
      else {
        v28 = (unsigned __int64)(unsigned __int8)v84 >> 1;
      }
      if (v28 != 0) {
        v29 = v86;
        if ((v84 & 1) == 0) {
          v29 = (unsigned __int8*)&v84 + 1;
        }
        v30 = *v29;
        if ((unsigned int)(v30 - 51) <= 1) {
          v96[0] = GameData_21107b0;
          v96[1] = game_191ce20;
          v31 = *(unsigned __int8*)(a3 + 1041);
          result = (double*)v96;
          v97 = v96;
          if (v31 != 1) {
            goto LABEL_147;
          }
          v32 = *(_QWORD*)(a3 + 96);
          if (v32 == 0) {
            goto LABEL_144;
          }
          v33 = spine_Skeleton_getSlots(v32);
          if (*(_QWORD*)(v33 + 8) == 0) {
            goto LABEL_144;
          }
          v34 = v33;
          v35 = 0;
          while (1) {
            v17 = v97;
            if (v97 == nullptr) {
              goto LABEL_172;
            }
            if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                     v97, a3, *(_QWORD*)(*(_QWORD*)(v34 + 24) + 8 * v35)) &
                 1) != 0 &&
                *(_QWORD*)(v34 + 8) > (unsigned __int64)++v35) {
              continue;
            }
            goto LABEL_144;
          }
        }
        if (v30 == 53) {
          v96[0] = GameData_21107b0;
          v96[1] = GameRoutine_191d030;
          v68 = *(unsigned __int8*)(a3 + 1041);
          result = (double*)v96;
          v97 = v96;
          if (v68 != 1) {
            goto LABEL_147;
          }
          v69 = *(_QWORD*)(a3 + 96);
          if (v69 == 0) {
            goto LABEL_144;
          }
          v70 = spine_Skeleton_getSlots(v69);
          if (*(_QWORD*)(v70 + 8) == 0) {
            goto LABEL_144;
          }
          v71 = v70;
          v72 = 0;
          while (1) {
            v17 = v97;
            if (v97 == nullptr) {
              goto LABEL_172;
            }
            if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                     v97, a3, *(_QWORD*)(*(_QWORD*)(v71 + 24) + 8 * v72)) &
                 1) != 0 &&
                *(_QWORD*)(v71 + 8) > (unsigned __int64)++v72) {
              continue;
            }
            goto LABEL_144;
          }
        }
      }
      v96[0] = GameData_21107b0;
      v96[1] = GameRoutine_191d050;
      v73 = *(unsigned __int8*)(a3 + 1041);
      result = (double*)v96;
      v97 = v96;
      if (v73 != 1) {
        goto LABEL_147;
      }
      v74 = *(_QWORD*)(a3 + 96);
      if (v74 == 0) {
        goto LABEL_144;
      }
      v75 = spine_Skeleton_getSlots(v74);
      if (*(_QWORD*)(v75 + 8) == 0) {
        goto LABEL_144;
      }
      v76 = v75;
      v77 = 0;
      while (1) {
        v17 = v97;
        if (v97 == nullptr) {
          goto LABEL_172;
        }
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                 v97, a3, *(_QWORD*)(*(_QWORD*)(v76 + 24) + 8 * v77)) &
             1) != 0 &&
            *(_QWORD*)(v76 + 8) > (unsigned __int64)++v77) {
          continue;
        }
        goto LABEL_144;
      }
    case 2u:
      v96[0] = GameData_21107b0;
      v96[1] = game_191cd20;
      v53 = *(unsigned __int8*)(a3 + 1041);
      result = (double*)v96;
      v97 = v96;
      if (v53 != 1) {
        goto LABEL_147;
      }
      v54 = *(_QWORD*)(a3 + 96);
      if (v54 == 0) {
        goto LABEL_144;
      }
      v55 = spine_Skeleton_getSlots(v54);
      if (*(_QWORD*)(v55 + 8) == 0) {
        goto LABEL_144;
      }
      v56 = v55;
      v57 = 0;
      while (1) {
        v17 = v97;
        if (v97 == nullptr) {
          goto LABEL_172;
        }
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                 v97, a3, *(_QWORD*)(*(_QWORD*)(v56 + 24) + 8 * v57)) &
             1) != 0 &&
            *(_QWORD*)(v56 + 8) > (unsigned __int64)++v57) {
          continue;
        }
        goto LABEL_144;
      }
    case 3u:
      v96[0] = GameData_21107b0;
      v96[1] = GameRoutine_191c750;
      v18 = *(unsigned __int8*)(a3 + 1041);
      result = (double*)v96;
      v97 = v96;
      if (v18 != 1) {
        goto LABEL_147;
      }
      v19 = *(_QWORD*)(a3 + 96);
      if (v19 == 0) {
        goto LABEL_144;
      }
      v20 = spine_Skeleton_getSlots(v19);
      if (*(_QWORD*)(v20 + 8) == 0) {
        goto LABEL_144;
      }
      v21 = v20;
      v22 = 0;
      while (1) {
        v17 = v97;
        if (v97 == nullptr) {
          break;
        }
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                 v97, a3, *(_QWORD*)(*(_QWORD*)(v21 + 24) + 8 * v22)) &
             1) != 0 &&
            *(_QWORD*)(v21 + 8) > (unsigned __int64)++v22) {
          continue;
        }
        goto LABEL_144;
      }
    LABEL_172:
      GameRoutine_60a310(v17);
    default:
      break;
    }
  LABEL_73:
    v96[0] = GameData_21107b0;
    v96[1] = GameRoutine_191c750;
    v36 = *(unsigned __int8*)(a3 + 1041);
    result = (double*)v96;
    v97 = v96;
    if (v36 != 1) {
      goto LABEL_147;
    }
    v37 = *(_QWORD*)(a3 + 96);
    if (v37 == 0) {
      goto LABEL_144;
    }
    v38 = spine_Skeleton_getSlots(v37);
    if (*(_QWORD*)(v38 + 8) == 0) {
      goto LABEL_144;
    }
    v39 = v38;
    v40 = 0;
    while (1) {
      v17 = v97;
      if (v97 == nullptr) {
        goto LABEL_172;
      }
      if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
               v97, a3, *(_QWORD*)(*(_QWORD*)(v39 + 24) + 8 * v40)) &
           1) != 0 &&
          *(_QWORD*)(v39 + 8) > (unsigned __int64)++v40) {
        continue;
      }
      goto LABEL_144;
    }
  }
  if (*((unsigned __int8*)v4 + 8) > 5u) {
    if (v9 == 6) {
      if ((v84 & 1) != 0) {
        v46 = v85;
      }
      else {
        v46 = (unsigned __int64)(unsigned __int8)v84 >> 1;
      }
      if (v46 == 0) {
        goto LABEL_112;
      }
      v47 = v86;
      if ((v84 & 1) == 0) {
        v47 = (unsigned __int8*)&v84 + 1;
      }
      if ((unsigned int)*v47 - 51 <= 1) {
        v96[0] = GameData_21107b0;
        v96[1] = game_191c8b0;
        v48 = *(unsigned __int8*)(a3 + 1041);
        result = (double*)v96;
        v97 = v96;
        if (v48 != 1) {
          goto LABEL_147;
        }
        v49 = *(_QWORD*)(a3 + 96);
        if (v49 == 0) {
          goto LABEL_144;
        }
        v50 = spine_Skeleton_getSlots(v49);
        if (*(_QWORD*)(v50 + 8) == 0) {
          goto LABEL_144;
        }
        v51 = v50;
        v52 = 0;
        while (1) {
          v17 = v97;
          if (v97 == nullptr) {
            break;
          }
          if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                   v97, a3, *(_QWORD*)(*(_QWORD*)(v51 + 24) + 8 * v52)) &
               1) != 0 &&
              *(_QWORD*)(v51 + 8) > (unsigned __int64)++v52) {
            continue;
          }
          goto LABEL_144;
        }
      }
      else {
      LABEL_112:
        v96[0] = GameData_21107b0;
        v96[1] = GameRoutine_191c750;
        v58 = *(unsigned __int8*)(a3 + 1041);
        result = (double*)v96;
        v97 = v96;
        if (v58 != 1) {
          goto LABEL_147;
        }
        v59 = *(_QWORD*)(a3 + 96);
        if (v59 == 0) {
          goto LABEL_144;
        }
        v60 = spine_Skeleton_getSlots(v59);
        if (*(_QWORD*)(v60 + 8) == 0) {
          goto LABEL_144;
        }
        v61 = v60;
        v62 = 0;
        while (1) {
          v17 = v97;
          if (v97 == nullptr) {
            break;
          }
          if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                   v97, a3, *(_QWORD*)(*(_QWORD*)(v61 + 24) + 8 * v62)) &
               1) != 0 &&
              *(_QWORD*)(v61 + 8) > (unsigned __int64)++v62) {
            continue;
          }
          goto LABEL_144;
        }
      }
      goto LABEL_172;
    }
    if (v9 == 7) {
      v96[0] = GameData_21107b0;
      v96[1] = GameRoutine_191c750;
      v23 = *(unsigned __int8*)(a3 + 1041);
      result = (double*)v96;
      v97 = v96;
      if (v23 != 1) {
        goto LABEL_147;
      }
      v24 = *(_QWORD*)(a3 + 96);
      if (v24 == 0) {
        goto LABEL_144;
      }
      v25 = spine_Skeleton_getSlots(v24);
      if (*(_QWORD*)(v25 + 8) == 0) {
        goto LABEL_144;
      }
      v26 = v25;
      v27 = 0;
      while (1) {
        v17 = v97;
        if (v97 == nullptr) {
          goto LABEL_172;
        }
        if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                 v97, a3, *(_QWORD*)(*(_QWORD*)(v26 + 24) + 8 * v27)) &
             1) != 0 &&
            *(_QWORD*)(v26 + 8) > (unsigned __int64)++v27) {
          continue;
        }
        goto LABEL_144;
      }
    }
    goto LABEL_73;
  }
  if (v9 == 4) {
    v96[0] = GameData_21107b0;
    v96[1] = GameRoutine_191c750;
    v41 = *(unsigned __int8*)(a3 + 1041);
    result = (double*)v96;
    v97 = v96;
    if (v41 != 1) {
      goto LABEL_147;
    }
    v42 = *(_QWORD*)(a3 + 96);
    if (v42 == 0) {
      goto LABEL_144;
    }
    v43 = spine_Skeleton_getSlots(v42);
    if (*(_QWORD*)(v43 + 8) == 0) {
      goto LABEL_144;
    }
    v44 = v43;
    v45 = 0;
    while (1) {
      v17 = v97;
      if (v97 == nullptr) {
        goto LABEL_172;
      }
      if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
               v97, a3, *(_QWORD*)(*(_QWORD*)(v44 + 24) + 8 * v45)) &
           1) != 0 &&
          *(_QWORD*)(v44 + 8) > (unsigned __int64)++v45) {
        continue;
      }
      goto LABEL_144;
    }
  }
  if (v9 != 5) {
    goto LABEL_73;
  }
  if ((v84 & 1) != 0) {
    v10 = v85;
  }
  else {
    v10 = (unsigned __int64)(unsigned __int8)v84 >> 1;
  }
  if (v10 != 0) {
    v11 = v86;
    if ((v84 & 1) == 0) {
      v11 = (unsigned __int8*)&v84 + 1;
    }
    if ((unsigned int)*v11 - 51 <= 1) {
      v96[0] = GameData_21107b0;
      v96[1] = game_191cb10;
      v12 = *(unsigned __int8*)(a3 + 1041);
      result = (double*)v96;
      v97 = v96;
      if (v12 != 1) {
      LABEL_147:
        v78 = 32;
        goto LABEL_148;
      }
      v13 = *(_QWORD*)(a3 + 96);
      if (v13 != 0) {
        v14 = spine_Skeleton_getSlots(v13);
        if (*(_QWORD*)(v14 + 8) != 0) {
          v15 = v14;
          v16 = 0;
          while (1) {
            v17 = v97;
            if (v97 == nullptr) {
              goto LABEL_172;
            }
            if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
                     v97, a3, *(_QWORD*)(*(_QWORD*)(v15 + 24) + 8 * v16)) &
                 1) != 0 &&
                *(_QWORD*)(v15 + 8) > (unsigned __int64)++v16) {
              continue;
            }
            break;
          }
        }
      }
    LABEL_144:
      result = (double*)v97;
      if (v97 == v96) {
        goto LABEL_147;
      }
      if (v97 != nullptr) {
        v78 = 40;
      LABEL_148:
        result = (double*)(*(__int64 (**)(__int64))(*(_QWORD*)result + v78))(
            (__int64)result);
      }
      if (*((_BYTE*)v4 + 12) != 0) {
        result = (double*)GameRoutine_191ab90(a3, &v84, (char*)v4 + 9);
      }
      if ((v93 & 1) != 0 && v95 != 0) {
        v79 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v79 = 56;
        }
        result = (double*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v79);
      }
      if ((v90 & 1) != 0 && v92 != 0) {
        v80 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v80 = 56;
        }
        result = (double*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v80);
      }
      if ((v87 & 1) != 0 && v89 != 0) {
        v81 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v81 = 56;
        }
        result = (double*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v81);
      }
      if ((v84 & 1) != 0 && v86 != nullptr) {
        v82 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v82 = 56;
        }
        return (double*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v82);
      }
      return result;
    }
  }
  v96[0] = GameData_21107b0;
  v96[1] = GameRoutine_191c750;
  v63 = *(unsigned __int8*)(a3 + 1041);
  result = (double*)v96;
  v97 = v96;
  if (v63 != 1) {
    goto LABEL_147;
  }
  v64 = *(_QWORD*)(a3 + 96);
  if (v64 == 0) {
    goto LABEL_144;
  }
  v65 = spine_Skeleton_getSlots(v64);
  if (*(_QWORD*)(v65 + 8) == 0) {
    goto LABEL_144;
  }
  v66 = v65;
  v67 = 0;
  while (1) {
    v17 = v97;
    if (v97 == nullptr) {
      goto LABEL_172;
    }
    if (((*(__int64 (**)(_QWORD*, __int64, _QWORD))(*v97 + 48LL))(
             v97, a3, *(_QWORD*)(*(_QWORD*)(v66 + 24) + 8 * v67)) &
         1) != 0 &&
        *(_QWORD*)(v66 + 8) > (unsigned __int64)++v67) {
      continue;
    }
    goto LABEL_144;
  }
}

#pragma GCC visibility pop
