#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_de42e0(_QWORD);
__int64 GameRoutine_de45c0(_QWORD);
extern __int64 (*GameData_1fe10b0[])();
extern __int64 (*GameData_1fe10e0[])();
extern __int64 (*GameData_1fe1130[])();
extern __int64 GameData_21c9f38;
extern int GameData_2213f84;
__int64 HubFacilityOpenFile_Destructor(_QWORD* a1);
__attribute__((swiftcall)) void std___1_to_string_1a0abd0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_FlagConditionList_Assign(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ac05e5;
extern _UNKNOWN GameData_1ac690d;
extern __int64 GameData_21c9760;
extern __int64 GameData_21c9768;
extern __int64 GameData_21c9770;
extern __int64 GameData_21c9780;
extern __int64 GameData_21c9788;
extern __int64 GameData_21c9790;
extern __int64 GameData_21c9798;
extern __int64 GameData_21c97a0;
extern __int64 GameData_21c97b0;
extern __int64 GameData_21c97b8;
extern __int64 GameData_21c97c0;
extern __int64 GameData_21c97c8;
extern __int64 GameData_21c97d0;
extern __int64 GameData_21c97e0;
extern __int64 GameData_21c97e8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 HubFacilityOpenFile_dc7100(__int64 result);

__int64 HubFacilityOpenFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *a1 = GameData_1fe10b0;
  a1[1] = GameData_1fe10e0;
  v2 = a1 + 1;
  GameRoutine_de45c0(a1 + 1);
  result = GameRoutine_de42e0(v2);
  *a1 = GameData_1fe1130;
  if ((_QWORD*)GameData_21c9f38 == a1) {
    GameData_21c9f38 = 0;
    GameData_2213f84 = 0;
  }
  return result;
}

__int64 HubFacilityOpenFile_dc7100(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  _QWORD* v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64* v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  char* v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  char* v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  char* v42;
  unsigned __int64 v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  char* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64* v52;
  char* v53;
  unsigned __int64 v54;
  char* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 i;
  __int64 v61;
  char* v62;
  unsigned __int64 v63;
  unsigned __int8* v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  char* v68;
  unsigned __int64 v69;
  char* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64 v76;
  char* v77;
  char* v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  _BYTE* v93;
  __int64* v94;
  _QWORD v95[3];
  __int64 v96;
  unsigned __int64 v97;
  char* v98;
  __int64 v99;
  unsigned __int64 v100;
  char* v101;
  __int64 v102;
  unsigned __int64 v103;
  char* v104;

  if ((*(_BYTE*)(result + 248) & 1) == 0) {
    v1 = *(_QWORD**)(result + 8);
    if (*(_QWORD**)(result + 16) == v1) {
      v2 = 0;
    }
    else {
      v2 = *v1 + 16LL;
    }
    v3 = GameData_21c9768;
    v4 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v4 = 0;
    }
    v5 = GameData_21c9788 + GameData_21c9780;
    if (v4 == GameData_21c9788 + GameData_21c9780) {
      v6 = result;
      GameRoutine_66cf00(&GameData_21c9760);
      v3 = GameData_21c9768;
      result = v6;
      v5 = GameData_21c9788 + GameData_21c9780;
    }
    *(_QWORD*)(*(_QWORD*)(v3 + 8 * (v5 >> 9)) + 8 * (v5 & 0x1FF)) = v2;
    ++GameData_21c9788;
    v7 = *(_QWORD*)(result + 32);
    if (*(_QWORD*)(result + 40) == v7) {
      v8 = 0;
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)v7 + 8LL);
    }
    v9 = GameData_21c9798;
    v10 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v10 = 0;
    }
    v11 = GameData_21c97b8 + GameData_21c97b0;
    if (v10 == GameData_21c97b8 + GameData_21c97b0) {
      v12 = result;
      GameRoutine_66cf00(&GameData_21c9790);
      v9 = GameData_21c9798;
      result = v12;
      v11 = GameData_21c97b8 + GameData_21c97b0;
    }
    v93 = (_BYTE*)result;
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v11 >> 9)) + 8 * (v11 & 0x1FF)) = v8;
    v14 = *(__int64**)(result + 56);
    v13 = *(__int64**)(result + 64);
    ++GameData_21c97b8;
    if (v14 != v13) {
      v94 = v13;
      v15 = GameData_21c97c8;
      v16 = GameData_21c97d0;
      v17 = GameData_21c97e0;
      v18 = GameData_21c97e8;
      while (1) {
        v19 = v16 - v15;
        v20 = *v14;
        v21 = v16 == v15;
        v22 = v18 + v17;
        v23 = (v19 << 6) - 1;
        if (v21) {
          v23 = 0;
        }
        if (v23 == v22) {
          GameRoutine_66d660(&GameData_21c97c0);
          v15 = GameData_21c97c8;
          v22 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v15 + 8 * (v22 >> 9)) + 8 * (v22 & 0x1FF)) = v20;
        ++GameData_21c97e8;
        v24 = *(_QWORD**)(v20 + 24);
        if (v24 == nullptr) {
          v24 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
          *v24 = 0;
          v24[1] = 0;
          v24[2] = 0;
          v24[3] = 0;
          v24[4] = 0;
          v24[5] = 0;
          v24[6] = 0;
          v24[7] = 0;
          v24[8] = 0;
          *(_QWORD*)(v20 + 24) = v24;
        }
        game_FlagConditionList_Assign(v24 + 3, v20 + 56);
        if (*(_QWORD*)(v20 + 32) != 0) {
          v25 = *(char**)(v20 + 32);
        }
        else {
          v25 = &GameData_1a9f09e;
        }
        v26 = strlen(v25);
        if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_180;
        }
        v27 = v26;
        if (v26 >= 0x17) {
          break;
        }
        v28 = (char*)&v99 + 1;
        LOBYTE(v99) = 2 * v26;
        if (v26 != 0) {
          goto LABEL_37;
        }
      LABEL_38:
        v28[v27] = 0;
        v30 = (__int64*)GameRoutine_1a0a680(&v99, 0, &GameData_1ac05e5, 17);
        v32 = v30[1];
        v31 = (char*)v30[2];
        v102 = *v30;
        v103 = v32;
        v104 = v31;
        v30[1] = 0;
        v30[2] = 0;
        *v30 = 0;
        if ((v99 & 1) != 0 && v101 != nullptr) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v33);
        }
        if (*(_WORD*)(v20 + 40) == 0) {
          goto LABEL_136;
        }
        if (*(_WORD*)(v20 + 40) == 1) {
          if (**(_QWORD**)(v20 + 48) != 0) {
            v34 = **(char***)(v20 + 48);
          }
          else {
            v34 = &GameData_1a9f09e;
          }
          v26 = strlen(v34);
          if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
          LABEL_180:
            String_60a1d0(v26);
          }
          v35 = v26;
          if (v26 >= 0x17) {
            if ((v26 | 7) == 0x17) {
              v51 = 26;
            }
            else {
              v51 = (v26 | 7) + 1;
            }
            v36 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v51, 16, 0);
            v97 = v35;
            v98 = v36;
            v96 = v51 | 1;
          }
          else {
            v36 = (char*)&v96 + 1;
            LOBYTE(v96) = 2 * v26;
            if (v26 == 0) {
            LABEL_91:
              v36[v35] = 0;
              v52 =
                  (__int64*)GameRoutine_1a0a680(&v96, 0, &GameData_1ac690d, 1);
              v54 = v52[1];
              v53 = (char*)v52[2];
              v99 = *v52;
              v100 = v54;
              v101 = v53;
              v52[1] = 0;
              v52[2] = 0;
              *v52 = 0;
              if ((v99 & 1) != 0) {
                v55 = v101;
              }
              else {
                v55 = (char*)&v99 + 1;
              }
              if ((v99 & 1) != 0) {
                v56 = v100;
              }
              else {
                v56 = (unsigned __int64)(unsigned __int8)v99 >> 1;
              }
              GameRoutine_1a09ce0(&v102, v55, v56);
              if ((v99 & 1) != 0 && v101 != nullptr) {
                v57 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v57 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v57);
              }
              if ((v96 & 1) != 0 && v98 != nullptr) {
                goto LABEL_133;
              }
              goto LABEL_136;
            }
          }
          memmove(v36, v34, v35);
          goto LABEL_91;
        }
        v37 = 0;
        v100 = 0;
        v101 = nullptr;
        v99 = 0;
        do {
          if (*(_QWORD*)(*(_QWORD*)(v20 + 48) + 8 * v37) != 0) {
            v38 = *(char**)(*(_QWORD*)(v20 + 48) + 8 * v37);
          }
          else {
            v38 = &GameData_1a9f09e;
          }
          v26 = strlen(v38);
          if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_180;
          }
          v39 = v26;
          if (v26 >= 0x17) {
            if ((v26 | 7) == 0x17) {
              v41 = 26;
            }
            else {
              v41 = (v26 | 7) + 1;
            }
            v40 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v41, 16, 0);
            v97 = v39;
            v98 = v40;
            v96 = v41 | 1;
          LABEL_65:
            memmove(v40, v38, v39);
            goto LABEL_66;
          }
          v40 = (char*)&v96 + 1;
          LOBYTE(v96) = 2 * v26;
          if (v26 != 0) {
            goto LABEL_65;
          }
        LABEL_66:
          v40[v39] = 0;
          if ((v96 & 1) != 0) {
            v42 = v98;
          }
          else {
            v42 = (char*)&v96 + 1;
          }
          if ((v96 & 1) != 0) {
            v43 = v97;
          }
          else {
            v43 = (unsigned __int64)(unsigned __int8)v96 >> 1;
          }
          GameRoutine_1a09ce0(&v99, v42, v43);
          if ((v96 & 1) != 0 && v98 != nullptr) {
            v44 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
          }
          GameRoutine_1a09ce0(&v99, ",", 1);
          ++v37;
        } while (v37 < *(unsigned __int16*)(v20 + 40));
        v45 = v101;
        v46 = (unsigned __int64)(unsigned __int8)v99 >> 1;
        if ((v99 & 1) != 0) {
          LODWORD(v46) = v100;
        }
        else {
          v45 = (char*)&v99 + 1;
        }
        if (v45 != nullptr) {
          v13 = v94;
          if ((int)v46 < 8) {
            v50 = 0;
            v48 = 0xCBF29CE484222325LL;
            if ((int)v46 <= 0) {
              goto LABEL_112;
            }
          }
          else {
            v47 = 7;
            v48 = 0xCBF29CE484222325LL;
            do {
              v49 = &v45[v47];
              v47 += 8LL;
              v48 = (0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL *
                               ((0x100000001B3LL *
                                 ((0x100000001B3LL * v48) ^
                                  (unsigned __int8)*(v49 - 7))) ^
                                (unsigned __int8)*(v49 - 6))) ^
                              (unsigned __int8)*(v49 - 5))) ^
                            (unsigned __int8)*(v49 - 4))) ^
                          (unsigned __int8)*(v49 - 3))) ^
                        (unsigned __int8)*(v49 - 2))) ^
                      (unsigned __int8)*(v49 - 1))) ^
                    (unsigned __int8)*v49;
            } while (v47 < (v46 & 0x7FFFFFFF));
            v50 = v46 & 0x7FFFFFF8;
            if ((int)(v46 & 0x7FFFFFF8) >= (int)v46) {
              goto LABEL_112;
            }
          }
          v59 = v46 & 7;
          for (i = v50; v59 != 0; v48 = (0x100000001B3LL * v48) ^ v61) {
            v61 = (unsigned __int8)v45[i++];
            --v59;
          }
          if (v50 - (unsigned int)v46 <= 0xFFFFFFFFFFFFFFF8LL) {
            v62 = &v45[i];
            v63 = (unsigned int)v46 - i;
            v64 = (unsigned __int8*)(v62 + 3);
            do {
              v63 -= 8LL;
              v65 = (0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL *
                               ((0x100000001B3LL * v48) ^ *(v64 - 3))) ^
                              *(v64 - 2))) ^
                            *(v64 - 1))) ^
                          *v64)) ^
                        v64[1])) ^
                      v64[2])) ^
                    v64[3];
              v66 = v64[4];
              v64 += 8;
              v48 = (0x100000001B3LL * v65) ^ v66;
            } while (v63 != 0);
          }
        LABEL_112:
          if (v48 != 0) {
            v58 = v48;
          }
          else {
            v58 = -1;
          }
        }
        else {
          v13 = v94;
          v58 = 0;
        }
        std___1_to_string_1a0abd0((void*)v95, v58);
        v67 = (__int64*)GameRoutine_1a0a680(v95, 0, &GameData_1ac690d, 1);
        v69 = v67[1];
        v68 = (char*)v67[2];
        v96 = *v67;
        v97 = v69;
        v98 = v68;
        v67[1] = 0;
        v67[2] = 0;
        *v67 = 0;
        if ((v96 & 1) != 0) {
          v70 = v98;
        }
        else {
          v70 = (char*)&v96 + 1;
        }
        if ((v96 & 1) != 0) {
          v71 = v97;
        }
        else {
          v71 = (unsigned __int64)(unsigned __int8)v96 >> 1;
        }
        GameRoutine_1a09ce0(&v102, v70, v71);
        if ((v96 & 1) != 0 && v98 != nullptr) {
          v72 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v72 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v72);
        }
        if ((v95[0] & 1) != 0 && v95[2] != 0) {
          v73 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v73 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v73);
        }
        if ((v99 & 1) != 0 && v101 != nullptr) {
        LABEL_133:
          v74 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v74 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v74);
        }
      LABEL_136:
        v75 = *(__int64**)(v20 + 24);
        if (v75 == &v102) {
          goto LABEL_148;
        }
        if ((*(_BYTE*)v75 & 1) != 0) {
          if ((v102 & 1) != 0) {
            v78 = v104;
          }
          else {
            v78 = (char*)&v102 + 1;
          }
          if ((v102 & 1) != 0) {
            v79 = v103;
          }
          else {
            v79 = (unsigned __int64)(unsigned __int8)v102 >> 1;
          }
          SpineModel_64dde0(v75, v78, v79);
        LABEL_148:
          if ((v102 & 1) == 0) {
            goto LABEL_153;
          }
          goto LABEL_149;
        }
        if ((v102 & 1) != 0) {
          GameRoutine_64df20(v75, v104, v103);
          if ((v102 & 1) != 0) {
            goto LABEL_149;
          }
        }
        else {
          v76 = v102;
          v77 = v104;
          v75[1] = v103;
          v75[2] = (__int64)v77;
          *v75 = v76;
          if ((v102 & 1) == 0) {
            goto LABEL_153;
          }
        LABEL_149:
          if (v104 != nullptr) {
            v80 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v80 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v80);
          }
        }
      LABEL_153:
        v15 = GameData_21c97c8;
        v16 = GameData_21c97d0;
        v17 = GameData_21c97e0;
        v81 = GameData_21c97e8;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v82 = 0;
        }
        else {
          v82 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v18 = --GameData_21c97e8;
        if ((unsigned __int64)(v82 - (v81 + GameData_21c97e0) + 1) >= 0x400) {
          if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
            v83 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v83 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v83);
            v15 = GameData_21c97c8;
            v16 = GameData_21c97d0;
            v17 = GameData_21c97e0;
            v18 = GameData_21c97e8;
          }
          v16 -= 8;
          GameData_21c97d0 = v16;
        }
        if (++v14 == v13) {
          goto LABEL_163;
        }
      }
      if ((v26 | 7) == 0x17) {
        v29 = 26;
      }
      else {
        v29 = (v26 | 7) + 1;
      }
      v28 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v29,
                                                  16, 0);
      v100 = v27;
      v101 = v28;
      v99 = v29 | 1;
    LABEL_37:
      memmove(v28, v25, v27);
      goto LABEL_38;
    }
  LABEL_163:
    result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v93 + 40LL))(v93);
    v84 = GameData_21c9770;
    v85 = GameData_21c9770 - GameData_21c9768;
    v21 = GameData_21c9770 == GameData_21c9768;
    v93[248] = 1;
    v86 = GameData_21c9788;
    v87 = (v85 << 6) - 1;
    if (v21) {
      v87 = 0;
    }
    --GameData_21c9788;
    if ((unsigned __int64)(v87 - (v86 + GameData_21c9780) + 1) >= 0x400) {
      if (*(_QWORD*)(v84 - 8) != 0) {
        v88 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v88 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v88);
        v84 = GameData_21c9770;
      }
      GameData_21c9770 = v84 - 8;
    }
    v89 = GameData_21c97a0;
    v90 = GameData_21c97b8;
    v91 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v91 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v91 - (v90 + GameData_21c97b0) + 1) >= 0x400) {
      if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
        v92 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v92 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v92);
        v89 = GameData_21c97a0;
      }
      GameData_21c97a0 = v89 - 8;
    }
  }
  return result;
}

#pragma GCC visibility pop
