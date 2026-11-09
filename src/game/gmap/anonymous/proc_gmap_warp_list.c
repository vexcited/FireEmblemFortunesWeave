#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_1328300(_QWORD);
__int64 GameRoutine_1328460(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameRoutine_168f230(_QWORD);
__int64 GameRoutine_168f3a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16dd280(void);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ae0560(void);
__int64 GameRoutine_d5d770(_QWORD, _QWORD);
__int64 GameRoutine_dbced0(_QWORD, _QWORD);
__int64 GameRoutine_f2a8c0(_QWORD, _QWORD);
__int64 GameRoutine_f2a950(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ac7eee;
extern __int64 (*GameData_2081b18[])();
extern __int64 (*game_gmap_anonymous_GmapSpotWarpMenuItem_vtable[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212d750;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c96f8;
extern __int64 GameData_21ca080;
extern __int64 GameData_21f1668;
extern __int64 GameData_21f3cc8;
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern unsigned int GameData_1bee99c[15];
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
__int64 ProcGmapWarpList_Unknown100(_QWORD* a1);
bool ProcGmapWarpList_Unknown143(__int64 a1);
__int64 ProcGmapWarpList_Unknown144(__int64 a1);
_QWORD* ProcGmapWarpList_Unknown145(__int64 a1);

__int64 ProcGmapWarpList_Unknown100(_QWORD* a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64 v34;
  int v35;
  bool v36;
  bool v37;
  bool v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  int v47;
  bool v48;
  bool v49;
  bool v50;
  bool v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64* i;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  char* v87;
  __int64 v88;
  unsigned __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  unsigned __int64 v96;
  char* v97;
  __int64 v98;
  _QWORD v99[4];
  __int64 v100;
  unsigned __int64 v101;
  char* v102;

  v1 = a1[42];
  if (v1 == 0 ||
      *(__int64 (***)())v1 != game_gmap_anonymous_GmapSpotWarpMenuItem_vtable) {
    return 1;
  }
  v3 = *(_QWORD*)(v1 + 88);
  if ((unsigned __int8)GameRoutine_13261c0(v3) != 2) {
    v5 = *(_QWORD*)(v3 + 120);
    if (v5 == GameRoutine_ae0560()) {
      goto LABEL_20;
    }
    if (*(_QWORD*)(v3 + 120) == 0 ||
        (unsigned __int8)GameRoutine_13261c0(v3) != 2 &&
            (unsigned __int8)GameRoutine_13261c0(v3) != 0) {
      return 1;
    }
    v6 = *(__int64**)(GameData_21ca080 + 64);
    v7 = *(__int64**)(GameData_21ca080 + 72);
    if (v6 == v7) {
      return 1;
    }
    result = 1;
    while (1) {
      v8 = *v6++;
      if (*(_QWORD*)(v3 + 120) == *(_QWORD*)(v8 + 192)) {
        break;
      }
      if (v6 == v7) {
        return result;
      }
    }
  }
  if ((*(_BYTE*)(v3 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 ||
      (GameRoutine_1328300(v3) & 1) == 0 ||
      (GameRoutine_1328460(v3) & 1) == 0) {
    return 1;
  }

LABEL_20:
  v9 = *(_QWORD*)(v1 + 288);
  a1[157] = v9;
  v10 = GameData_212d750;
  if (*(_QWORD*)GameData_212d750 == 0) {
    if (v9 == 0) {
      return 4;
    }
    v15 = **(_QWORD**)(v9 + 32);
    v16 = GameData_21f3cc8;
    v17 = strlen(v15);
    if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_179;
    }
    v18 = v17;
    if (v17 >= 0x17) {
      if ((v17 | 7) == 0x17) {
        v30 = 26;
      }
      else {
        v30 = (v17 | 7) + 1;
      }
      v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v30,
                                                  16, 0);
      v89 = v18;
      v90 = v19;
      v88 = v30 | 1;
    }
    else {
      LOBYTE(v88) = 2 * v17;
      v19 = (char*)&v88 + 1;
      if (v17 == 0) {
      LABEL_60:
        v19[v18] = 0;
        v31 = *(_QWORD*)(a1[157] + 16LL);
        if ((v88 & 1) != 0) {
          v32 = v89;
        }
        else {
          v32 = (unsigned __int64)(unsigned __int8)v88 >> 1;
        }
        if (v32 != 0) {
          if ((v88 & 1) != 0) {
            v33 = v90;
          }
          else {
            v33 = (__int64*)((char*)&v88 + 1);
          }
          v34 = a1[150];
          if (v34 != 0 &&
              (v35 = strcmp(*(_QWORD*)(v34 + 8), &GameData_1ac7eee),
               v32 == 37) &&
              v35 == 0 &&
              (*v33 == 0x96E9AE81E39EA5E7LL
                   ? (v36 = v33[1] == 0x2DA38FE5BA87E580LL)
                   : (v36 = false),
               v36 ? (v37 = v33[2] == 0x83E3BB83E3A683E3LL) : (v37 = false),
               v37 ? (v38 = v33[3] == 0xE7B982E3A182E395LL) : (v38 = false),
               v38 ? (v39 = *(_QWORD*)((char*)v33 + 29) == 0xBFAEE69EA5E7B982LL)
                   : (v39 = false),
               v39 && (game_GameModeData_instance_ == 0 ||
                       ((*(unsigned __int8*)(game_GameModeData_instance_ + 15) -
                         7) &
                        0xFD) != 0))) {
            GameRoutine_f2a950(v16, v31, &v88, 0);
            v101 = 0;
            v102 = nullptr;
            v100 = 0;
            v77 = GameRoutine_168f230(&v100);
            v78 = v100;
            GameRoutine_6b7aa0(*(_QWORD*)GameData_212c6a0[0] + 232LL, v100, v77,
                               0xAAAAAAAAAAAAAAABLL * ((v77 - v100) >> 3));
            if (v78 != 0) {
              if (v78 != v77) {
                v79 = v77;
                v80 = fw_memory_g_heap_manager_ptr;
                do {
                  v81 = *(_BYTE*)(v79 - 24);
                  v79 -= 24;
                  if ((v81 & 1) != 0) {
                    v82 = *(_QWORD*)(v77 - 8);
                    if (v82 != 0) {
                      if (*(_QWORD*)(*(_QWORD*)v80 + 200LL) != 0) {
                        v83 = 128;
                      }
                      else {
                        v83 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*(_QWORD*)v80 + v83, v82);
                    }
                  }
                  v77 = v79;
                } while (v79 != v78);
              }
              v84 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v84 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v78);
            }
          }
          else {
            GameRoutine_f2a950(v16, v31, &v88, 1);
          }
        }
        else {
          GameRoutine_f2a8c0(v16, *(_QWORD*)(a1[157] + 16LL));
        }
        if ((v88 & 1) == 0) {
          return 4;
        }
        v64 = v90;
        if (v90 == nullptr) {
          return 4;
        }
      LABEL_144:
        v65 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v65 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v64);
        return 4;
      }
    }
    memmove(v19, v15, v18);
    goto LABEL_60;
  }
  if (v9 != 0) {
    v11 = **(_QWORD**)(v9 + 32);
    v12 = strlen(v11);
    if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_179;
    }
    v13 = v12;
    if (v12 >= 0x17) {
      if ((v12 | 7) == 0x17) {
        v20 = 26;
      }
      else {
        v20 = (v12 | 7) + 1;
      }
      v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                  16, 0);
      v101 = v13;
      v102 = v14;
      v100 = v20 | 1;
    }
    else {
      LOBYTE(v100) = 2 * v12;
      v14 = (char*)&v100 + 1;
      if (v12 == 0) {
      LABEL_36:
        v14[v13] = 0;
        v90 = nullptr;
        v91 = 0;
        v21 = a1[157];
        v92 = 0;
        v93 = 0;
        v94 = 0;
        v95 = 0;
        v96 = 0;
        v97 = nullptr;
        v98 = 0;
        v99[2] = 0;
        v99[0] = 0;
        *(_QWORD*)((char*)v99 + 5) = 0;
        v22 = *(_QWORD*)(v21 + 16);
        v88 = 0;
        v89 = 0;
        v23 = *(_QWORD*)(v22 + 88);
        v24 = strlen(v23);
        if (v24 < 0xFFFFFFFFFFFFFFF7LL) {
          v25 = v24;
          if (v24 >= 0x17) {
            if ((v24 | 7) == 0x17) {
              v27 = 26;
            }
            else {
              v27 = (v24 | 7) + 1;
            }
            v26 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v27, 16, 0);
            v86 = v25;
            v87 = v26;
            v85 = v27 | 1;
          }
          else {
            LOBYTE(v85) = 2 * v24;
            v26 = (char*)&v85 + 1;
            if (v24 == 0) {
            LABEL_45:
              v26[v25] = 0;
              GameRoutine_dbced0(&v88, &v85);
              v94 = 1;
              if ((v95 & 1) != 0) {
                if ((v100 & 1) != 0) {
                  v28 = v102;
                }
                else {
                  v28 = (char*)&v100 + 1;
                }
                if ((v100 & 1) != 0) {
                  v29 = v101;
                }
                else {
                  v29 = (unsigned __int64)(unsigned __int8)v100 >> 1;
                }
                GameRoutine_64dde0(&v95, v28, v29);
              }
              else if ((v100 & 1) != 0) {
                GameRoutine_64df20(&v95, v102, v101);
              }
              else {
                v95 = v100;
                v96 = v101;
                v97 = v102;
              }
              if ((v85 & 1) != 0 && v87 != nullptr) {
                v40 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v40 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v87);
              }
              v41 = GameData_212c6a0[0];
              v42 = *(_QWORD*)GameData_212c6a0[0] + 48LL;
              *(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) = 1;
              GameRoutine_d5d770(v42, &v88);
              if ((v100 & 1) != 0) {
                v43 = v102;
              }
              else {
                v43 = (__int64*)((char*)&v100 + 1);
              }
              v44 = a1[150];
              v45 = a1;
              if (v44 != 0 &&
                  ((v100 & 1) != 0
                       ? (v46 = v101)
                       : (v46 = (unsigned __int64)(unsigned __int8)v100 >> 1),
                   (v47 = strcmp(*(_QWORD*)(v44 + 8), &GameData_1ac7eee),
                    v45 = a1, v47 == 0) &&
                       v46 == 37 &&
                       (*v43 == 0x96E9AE81E39EA5E7LL
                            ? (v48 = v43[1] == 0x2DA38FE5BA87E580LL)
                            : (v48 = false),
                        v48 ? (v49 = v43[2] == 0x83E3BB83E3A683E3LL)
                            : (v49 = false),
                        v49 ? (v50 = v43[3] == 0xE7B982E3A182E395LL)
                            : (v50 = false),
                        v50 ? (v51 = *(_QWORD*)((char*)v43 + 29) ==
                                     0xBFAEE69EA5E7B982LL)
                            : (v51 = false),
                        v51 && (game_GameModeData_instance_ == 0 ||
                                ((*(_BYTE*)(game_GameModeData_instance_ + 15) -
                                  7) &
                                 0xFD) != 0)))) {
                v66 = *(_QWORD*)v41;
                v86 = 0;
                v87 = nullptr;
                v85 = 0;
                *(_DWORD*)(v66 + 928) = 0;
                v67 = GameRoutine_168f230(&v85);
                v68 = *(_QWORD*)v41;
                v69 = v85;
                v70 = v67;
                GameRoutine_6b7aa0(v68 + 232, v85, v67,
                                   0xAAAAAAAAAAAAAAABLL * ((v67 - v85) >> 3));
                if (v69 != 0) {
                  if (v69 != v70) {
                    v71 = v70;
                    v72 = fw_memory_g_heap_manager_ptr;
                    do {
                      v73 = *(_BYTE*)(v71 - 24);
                      v71 -= 24;
                      if ((v73 & 1) != 0) {
                        v74 = *(_QWORD*)(v70 - 8);
                        if (v74 != 0) {
                          if (*(_QWORD*)(*(_QWORD*)v72 + 200LL) != 0) {
                            v75 = 128;
                          }
                          else {
                            v75 = 56;
                          }
                          nn_mem_StandardAllocator_Free(*(_QWORD*)v72 + v75,
                                                        v74);
                        }
                      }
                      v70 = v71;
                    } while (v71 != v69);
                  }
                  v76 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v76 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v69);
                }
                v45 = a1;
              }
              else {
                *(_DWORD*)(*(_QWORD*)v41 + 928LL) = 3;
              }
              v52 = *(_QWORD*)(v45[157] + 16LL);
              v53 = *(_QWORD*)(GameData_21c96f8 + 16);
              *(_QWORD*)v53 = v52;
              *(_BYTE*)(v53 + 128) = 1;
              v54 = *(_QWORD*)(GameData_21c96e8 + 8);
              v55 = *(_DWORD*)(v54 + 56);
              if (v55 < 0) {
                for (i = *(__int64**)(v54 + 8);; ++i) {
                  v57 = *i;
                  if (*(_QWORD*)(*i + 96) == 0 && *(_QWORD*)(v57 + 552) == 0) {
                    break;
                  }
                }
                v55 = *(_DWORD*)(v57 + 84);
              }
              *(_DWORD*)(v53 + 124) = v55;
              *(_DWORD*)(*(_QWORD*)v10 + 152LL) = 11;
              v58 = *(_QWORD*)(GameData_21f1668 + 8);
              GameRoutine_155e830(*(_QWORD*)(v58 + 16), 0);
              if (game_hub_ProgressEventView_instance_ != 0) {
                GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
              }
              v59 = game_gameui_Footer_instance_;
              v60 = *(_DWORD*)(v58 + 5856) & 0xFFFEFFFF;
              *(_DWORD*)(v58 + 5856) = v60;
              if (v59 != 0) {
                GameRoutine_1567000(v59, 0);
                v60 = *(_DWORD*)(v58 + 5856);
              }
              *(_DWORD*)(v58 + 5856) = v60 & 0xFFFDFFFF;
              if ((v95 & 1) != 0 && v97 != nullptr) {
                v61 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v61 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v97);
              }
              if ((v91 & 1) != 0 && v93 != 0) {
                v62 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v62 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v93);
              }
              if ((v88 & 1) != 0 && v90 != nullptr) {
                v63 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v63 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v90);
              }
              if ((v100 & 1) == 0) {
                return 4;
              }
              v64 = v102;
              if (v102 == nullptr) {
                return 4;
              }
              goto LABEL_144;
            }
          }
          memmove(v26, v23, v25);
          goto LABEL_45;
        }
      LABEL_179:
        GameRoutine_60a1d0();
      }
    }
    memmove(v14, v11, v13);
    goto LABEL_36;
  }
  return 4;
}

bool ProcGmapWarpList_Unknown143(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v5[3];

  GameRoutine_168f3a0(v5, *(_QWORD*)(a1 + 1208), *(_QWORD*)(a1 + 1216));
  v1 = v5[0];
  v2 = v5[1];
  if (v5[0] != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v5[0]);
  }
  return (unsigned __int64)(v2 - v1) < 2;
}

__int64 ProcGmapWarpList_Unknown144(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;

  v1 = *(_QWORD*)(a1 + 232);
  if (*(_QWORD*)(a1 + 240) == v1) {
    return 4;
  }
  v3 = 0;
  while (1) {
    v4 = *(_QWORD*)(v1 + 8 * v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4) & 1) != 0 &&
        ((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 40LL))(v4) & 1) != 0) {
      break;
    }
    v1 = *(_QWORD*)(a1 + 232);
    if (++v3 >= (unsigned __int64)((*(_QWORD*)(a1 + 240) - v1) >> 3)) {
      return 4;
    }
  }
  v5 = *(char**)(a1 + 232);
  v6 = *(char**)(a1 + 240);
  if (v5 == v6) {
    return 4;
  }
  v7 = v6 - v5 - 8;
  v8 = (v7 >> 3) + 1;
  if (v7 >= 0x18) {
    v13 = 0;
    while ((_DWORD)v3 != (_DWORD)v13) {
      if ((_DWORD)v3 == (_DWORD)v13 + 1) {
        v5 += 8;
        break;
      }
      if ((_DWORD)v3 == (_DWORD)v13 + 2) {
        v5 += 16;
        break;
      }
      if ((_DWORD)v3 == (_DWORD)v13 + 3) {
        v5 += 24;
        break;
      }
      v5 += 32;
      v13 += 4;
      v9 = v13;
      if ((v8 & 0x3FFFFFFFFFFFFFFCLL) == v13) {
        goto LABEL_9;
      }
    }
  }
  else {
    v9 = 0;
  LABEL_9:
    v10 = v8 & 3;
    if (v10 == 0) {
      return 4;
    }
    v11 = v9 - v3;
    result = 4;
    while (v11 != 0) {
      v5 += 8;
      ++v11;
      if (--v10 == 0) {
        return result;
      }
    }
  }
  v14 = *(_QWORD*)v5;
  if (v14 == 0) {
    return 4;
  }
  if (*(__int64 (***)())v14 !=
      game_gmap_anonymous_GmapSpotWarpMenuItem_vtable) {
    return 4;
  }
  v15 = *(_QWORD*)(v14 + 288);
  if (v15 == 0) {
    return 4;
  }
  v16 = *(_QWORD*)(v15 + 16);
  if (game_GameModeData_instance_ != 0) {
    v17 = 80;
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v17 = 81;
    }
  }
  else {
    v17 = 80;
  }
  v18 = *(unsigned __int8*)(v16 + v17);
  if (v18 > 0xE) {
    return 1;
  }
  else {
    return GameData_1bee99c[v18];
  }
}

_QWORD* ProcGmapWarpList_Unknown145(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;

  v1 = *(_QWORD*)(a1 + 152);
  v3 = GameRoutine_16dd280();
  v9[0] = GameData_2081b18;
  v9[1] = a1;
  v10 = v9;
  if (GameData_225e7a0 != 0) {
    v5 = 32;
    result = v9;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  v7 = v3;
  if (v1 != 0) {
    v8 = v1;
  }
  else {
    v8 = a1;
  }
  GameRoutine_167f810(v8, 7, a1 + 1232, 0, v7, (__int64)v9);
  result = v10;
  if (v10 == v9) {
    v5 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  if (v10 != nullptr) {
    v5 = 40;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v5))(result,
                                                                      v4);
  }
  return result;
}

#pragma GCC visibility pop
