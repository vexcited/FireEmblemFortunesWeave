#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_f256b0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__int64 GameRoutine_1049ba0(_QWORD, _QWORD);
__int64 GameRoutine_845840(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f097d0(__int64);
__int64 GameRoutine_f16a70(_QWORD);
__int64 GameRoutine_f25920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f43b80(_QWORD);
__int64 GameRoutine_f445e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_f44f60(_QWORD);
__int64 GameRoutine_fbb8a0(_QWORD, _QWORD, _QWORD);
__int64 MapDrawTargetSelectInfo_Destructor(_QWORD);
__int64 MassMeshData_f44c80(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_Unit_IsImmobile(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_map_MapPanelDeployAction_vtable[])();
extern __int64 (*game_map_MassMeshGroup_vtable[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfd0[8];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
__int64 MapPanelDeployAction_Unknown3(__int64 a1);
__int64 MapPanelDeployAction_Destructor(_QWORD* a1);
__int64 MapPanelDeployAction_DeletingDestructor(_QWORD* a1);

__int64 MapPanelDeployAction_Unknown3(__int64 a1)
{
  int* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int* v10;
  void (***v11)(_QWORD);
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (**v15)(_QWORD);
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  char v37;
  __int64 v38;
  int v39;
  char v40;
  int v41;
  char v42;
  int v43;
  __int64 v44;
  bool v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  _QWORD* v52;
  __int64 v53;
  unsigned __int8* v54;
  unsigned __int8* v55;
  char* v56;
  __int64 v57;
  unsigned __int8 v58;
  char v59;
  unsigned __int8* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  unsigned __int8* v66;
  unsigned __int8* v67;
  unsigned __int8 v68;
  __int64 v69;
  int* v70;
  void (***v71)(_QWORD);
  void (***v72)(_QWORD);
  void (***v73)(_QWORD);
  void (***v74)(_QWORD);
  void (**v75)(_QWORD);
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  __int64 v89;
  unsigned __int64 v90;
  int* v91;
  __int64 v92;
  char* v93;
  char* v94;
  __int64 v95;
  unsigned int v96;
  __int64 v97;
  unsigned int v98;
  unsigned int v99;
  _BYTE* v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  bool v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  _BYTE* v108;
  _BYTE* v109;
  char v110;
  __int64 v111;
  unsigned __int8* v112;
  unsigned __int8* v113;
  __int64 v114;
  __int64 v115;
  unsigned __int8* v117;
  unsigned __int8* v118;
  __int64 v119;
  int* v120;
  unsigned __int64 v121;
  unsigned __int64 v122;
  char* v123;
  __int64 v124;

  v1 = (int*)a1;
  if (*(_BYTE*)(a1 + 8) == 1) {
    MassMeshData_f44c80(a1 + 16);
    v120 = v1;
    if (((*(__int64 (**)(int*))(*(_QWORD*)v1 + 48LL))(v1) & 1) == 0) {
      goto LABEL_179;
    }
    v2 = GameData_212d038[0];
    v3 = (__int64*)GameData_212d020[0];
    if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) == 1) {
      v4 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
      v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
      if (v5 != 0) {
        v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
        v7 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
        v8 = std___1___shared_weak_count_lock(v7);
        std___1___shared_weak_count___release_weak(v5);
        if (v8 != 0) {
          if (v6 != 0) {
            v9 = 254936;
          }
          else if (*(_BYTE*)(*(_QWORD*)v2 + 156LL) != 0) {
            v9 = 8;
          }
          else {
            v9 = 127472;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak(v8);
          }
        }
        else if (*(_BYTE*)(*(_QWORD*)v2 + 156LL) != 0) {
          v9 = 8;
        }
        else {
          v9 = 127472;
        }
      }
      else {
        v9 = 8;
      }
      v45 =
          (*(_QWORD*)(v4 + v9 + 127168) | *(_QWORD*)(v4 + v9 + 127192)) == 0 ||
          v4 == 0;
      if (!v45) {
        v46 = *v3;
        v119 = v4 + v9;
        v47 = *(_QWORD*)(*v3 + 104);
        if (v47 != 0) {
          v48 = *(_QWORD*)(v46 + 96);
          v49 = *(_QWORD*)(v46 + 104);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 16), 1u,
                                    memory_order_relaxed);
          v50 = std___1___shared_weak_count_lock(v49);
          std___1___shared_weak_count___release_weak(v47);
          if (v50 != 0) {
            if (v48 != 0) {
              v51 = *(_DWORD*)(v48 + 52);
              if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
                std___1___shared_weak_count___release_weak(v50);
              }
              if ((v51 & 0x40) != 0) {
                v52 = (_QWORD*)GameRoutine_1049ba0(v120 + 124,
                                                   *(_QWORD*)(v119 + 127192));
                if (v120[3209] < 1) {
                  v55 = nullptr;
                  v54 = nullptr;
                }
                else {
                  v53 = 0;
                  v54 = nullptr;
                  v55 = nullptr;
                  v56 = nullptr;
                  do {
                    v57 = (__int64)&v120[3 * v53 + 137];
                    v58 = *(_BYTE*)(v57 + 1);
                    v59 = *(_BYTE*)(v57 + 2);
                    if (v55 < (unsigned __int8*)v56) {
                      *v55 = v58;
                      v55[1] = v59;
                      *((_WORD*)v55 + 1) = 0;
                      v55 += 4;
                    }
                    else {
                      v60 = v55;
                      v61 = v55 - v54;
                      v62 = (v61 >> 2) + 1;
                      if (v62 >> 62 != 0) {
                      LABEL_185:
                        GameRoutine_74e1f0(v52);
                      }
                      if ((v56 - (char*)v54) >> 1 > v62) {
                        v62 = (v56 - (char*)v54) >> 1;
                      }
                      if ((unsigned __int64)(v56 - (char*)v54) >=
                          0x7FFFFFFFFFFFFFFCLL) {
                        v63 = 0x3FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v63 = v62;
                      }
                      if (v63 >> 62 != 0) {
                      LABEL_184:
                        GameRoutine_60a210(v52);
                      }
                      v52 = (_QWORD*)fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v63, 16,
                          0);
                      v64 = (char*)v52 + v61;
                      v64[1] = v59;
                      v65 = (__int64)v52 + v61 + -4 * (v61 >> 2);
                      *v64 = v58;
                      *((_WORD*)v64 + 1) = 0;
                      if (v54 != v60) {
                        v66 = v54;
                        v67 = (unsigned __int8*)v52 + v61 + -4 * (v61 >> 2);
                        do {
                          *v67 = *v66;
                          v67[1] = v66[1];
                          v67[2] = v66[2];
                          v68 = v66[3];
                          v66 += 4;
                          v67[3] = v68;
                          v67 += 4;
                        } while (v66 != v60);
                      }
                      v56 = (char*)v52 + 4 * v63;
                      v55 = (unsigned __int8*)(v64 + 4);
                      if (v54 != nullptr) {
                        v69 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v69 = 56;
                        }
                        v52 = (_QWORD*)nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v54);
                      }
                      v54 = (unsigned __int8*)v65;
                    }
                    ++v53;
                  } while (v53 < v120[3209]);
                }
              LABEL_123:
                v87 = GameData_212d020[0];
                v118 = v54;
                if (*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 248LL) ==
                    *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 256LL)) {
                  if (v54 == v55) {
                    goto LABEL_175;
                  }
                  v91 = v120;
                  v89 = 0;
                  goto LABEL_169;
                }
                v117 = v55;
                v121 = 0;
                v88 = 0;
                v89 = 0;
                v90 = 0;
                v91 = v120;
                v92 = v119;
              LABEL_126:
                v94 = *(char**)(*(_QWORD*)v87 + 248LL);
                v93 = *(char**)(*(_QWORD*)v87 + 256LL);
                v123 = v93;
                while (1) {
                  if (v94 == v93) {
                    ++v88;
                    v87 = GameData_212d020[0];
                    if (v88 == 4) {
                      v55 = v117;
                      v54 = v118;
                      if (v118 != v117) {
                        if (v89 != v90) {
                          v112 = (unsigned __int8*)v89;
                          do {
                            v113 = v112;
                            while (*v113 != *v54 || v113[1] != v54[1]) {
                              v113 += 4;
                              if (v113 == (unsigned __int8*)v90) {
                                goto LABEL_159;
                              }
                            }
                            if (v113 == (unsigned __int8*)v90) {
                            LABEL_159:
                              GameRoutine_f445e0(v91 + 4, 0,
                                                 (unsigned int)(char)*v54,
                                                 (unsigned int)(char)v54[1], 1,
                                                 0, 0x100000004LL, 1);
                              v112 = (unsigned __int8*)v89;
                            }
                            v54 += 4;
                          } while (v54 != v117);
                          v54 = v118;
                          if (v112 == nullptr) {
                          LABEL_175:
                            if (v54 != nullptr) {
                              v115 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v115 = 56;
                              }
                              nn_mem_StandardAllocator_Free(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v115,
                                  v54);
                            }
                            goto LABEL_179;
                          }
                        LABEL_172:
                          v114 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v114 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v114,
                              v112);
                          v54 = v118;
                          goto LABEL_175;
                        }
                        do {
                        LABEL_169:
                          GameRoutine_f445e0(v91 + 4, 0,
                                             (unsigned int)(char)*v54,
                                             (unsigned int)(char)v54[1], 1, 0,
                                             0x100000004LL, 1);
                          v54 += 4;
                        } while (v54 != v55);
                        v54 = v118;
                      }
                      v112 = (unsigned __int8*)v89;
                      if (v89 == 0) {
                        goto LABEL_175;
                      }
                      goto LABEL_172;
                    }
                    goto LABEL_126;
                  }
                  v98 = *v94;
                  v99 = v94[1];
                  v52 = X8CALL_X0(_QWORD*, GameRoutine_f256b0((void*)&v124, v92,
                                                              v98, v99, v88));
                  if (BYTE4(v124) != 0) {
                    break;
                  }
                LABEL_129:
                  v93 = v123;
                  v94 += 4;
                }
                switch (v88) {
                case 2u:
                  if (BYTE5(v124) == 1) {
                    v95 = 1;
                    v96 = 6;
                    goto LABEL_141;
                  }
                  break;
                case 1u:
                  if (BYTE5(v124) == 1) {
                    v95 = 1;
                    v96 = 5;
                  LABEL_141:
                    v97 = 1;
                    goto LABEL_128;
                  }
                  break;
                case 0u:
                  v95 = BYTE5(v124);
                  v96 = 4 * BYTE5(v124);
                  if (v90 >= v121) {
                    v100 = (_BYTE*)v89;
                    v101 = v90 - v89;
                    v102 = (v101 >> 2) + 1;
                    if (v102 >> 62 != 0) {
                      goto LABEL_185;
                    }
                    v103 = v121 - (_QWORD)v100;
                    if ((__int64)(v121 - (_QWORD)v100) >> 1 > v102) {
                      v102 = v103 >> 1;
                    }
                    v104 = (unsigned __int64)v103 >= 0x7FFFFFFFFFFFFFFCLL;
                    v105 = 0x3FFFFFFFFFFFFFFFLL;
                    if (!v104) {
                      v105 = v102;
                    }
                    if (v105 >> 62 != 0) {
                      goto LABEL_184;
                    }
                    v122 = v105;
                    v106 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v105, 16,
                        0);
                    v107 = v106 + v101;
                    v89 = v106 + v101 - 4 * (v101 >> 2);
                    *(_WORD*)(v107 + 2) = 0;
                    *(_BYTE*)v107 = v98;
                    *(_BYTE*)(v107 + 1) = v99;
                    if (v100 != (_BYTE*)v90) {
                      v108 = v100;
                      v109 = (_BYTE*)v89;
                      do {
                        *v109 = *v108;
                        v109[1] = v108[1];
                        v109[2] = v108[2];
                        v110 = v108[3];
                        v108 += 4;
                        v109[3] = v110;
                        v109 += 4;
                      } while (v108 != (_BYTE*)v90);
                    }
                    v90 = v107 + 4;
                    v121 = v106 + 4 * v122;
                    v92 = v119;
                    if (v100 != nullptr) {
                      v111 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v111 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v111, v100);
                    }
                    v91 = v120;
                    v97 = (unsigned int)v95;
                  }
                  else {
                    *(_BYTE*)v90 = v98;
                    *(_BYTE*)(v90 + 1) = v99;
                    v97 = (unsigned int)v95;
                    *(_WORD*)(v90 + 2) = 0;
                    v90 += 4LL;
                  }
                  goto LABEL_128;
                default:
                  break;
                }
                v95 = 0;
                v96 = 0;
                v97 = 0;
              LABEL_128:
                GameRoutine_f445e0(v91 + 4, v88, v98, v99, v97, 0,
                                   v96 | (unsigned __int64)(v95 << 32), 1);
                goto LABEL_129;
              }
            }
            else if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
              std___1___shared_weak_count___release_weak(v50);
            }
          }
        }
        v70 = v120;
        v71 = *((void (****)(_QWORD))v120 + 66);
        v72 = *((void (****)(_QWORD))v120 + 65);
        *((_QWORD*)v120 + 63) = 0;
        *((_QWORD*)v120 + 64) = 0;
        if (v72 != v71) {
          v73 = v71 - 7;
          v74 = v71 - 7;
          do {
            v75 = *v74;
            v74 -= 7;
            (*v75)(v73);
            v45 = v73 == v72;
            v73 = v74;
          } while (!v45);
        }
        v76 = *((_QWORD*)v120 + 1608);
        *((_QWORD*)v120 + 66) = v72;
        v120[3209] = 0;
        if (v76 != 0) {
          v77 = *((_QWORD**)v120 + 1607);
          if (v77 != nullptr) {
            v78 = fw_memory_g_heap_manager_ptr;
            do {
              v79 = (_QWORD*)*v77;
              if (*(_QWORD*)(*(_QWORD*)v78 + 200LL) != 0) {
                v80 = 128;
              }
              else {
                v80 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v78 + v80, v77);
              v77 = v79;
            } while (v79 != nullptr);
          }
          v70 = v120;
          v81 = *((_QWORD*)v120 + 1606);
          *((_QWORD*)v120 + 1607) = 0;
          if (v81 != 0) {
            v82 = v81 & 7;
            if (v81 >= 8) {
              v84 = v81 & 0xFFFFFFFFFFFFFFF8LL;
              v83 = 0;
              do {
                *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v83) = 0;
                *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v83 + 8) = 0;
                *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v83 + 16) = 0;
                *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v83 + 24) = 0;
                *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v83 + 32) = 0;
                *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v83 + 40) = 0;
                *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v83 + 48) = 0;
                v85 = *((_QWORD*)v120 + 1605) + 8 * v83;
                v83 += 8;
                *(_QWORD*)(v85 + 56) = 0;
              } while (v84 != v83);
            }
            else {
              v83 = 0;
            }
            if (v82 != 0) {
              v86 = 8 * v83;
              do {
                --v82;
                *(_QWORD*)(*((_QWORD*)v120 + 1605) + v86) = 0;
                v86 += 8;
              } while (v82 != 0);
            }
          }
          *((_QWORD*)v120 + 1608) = 0;
        }
        v55 = nullptr;
        v54 = nullptr;
        v70[3220] = 0;
        goto LABEL_123;
      }
    }
    else {
      v10 = v1;
      v11 = *((void (****)(_QWORD))v1 + 66);
      v12 = *((void (****)(_QWORD))v1 + 65);
      *((_QWORD*)v120 + 63) = 0;
      *((_QWORD*)v120 + 64) = 0;
      if (v12 != v11) {
        v13 = v11 - 7;
        v14 = v11 - 7;
        do {
          v15 = *v14;
          v14 -= 7;
          (*v15)(v13);
          v45 = v13 == v12;
          v13 = v14;
        } while (!v45);
      }
      v16 = *((_QWORD*)v120 + 1608);
      *((_QWORD*)v120 + 66) = v12;
      v120[3209] = 0;
      if (v16 != 0) {
        v17 = *((_QWORD**)v120 + 1607);
        if (v17 != nullptr) {
          v18 = fw_memory_g_heap_manager_ptr;
          do {
            v19 = (_QWORD*)*v17;
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v20, v17);
            v17 = v19;
          } while (v19 != nullptr);
        }
        v10 = v120;
        v21 = *((_QWORD*)v120 + 1606);
        *((_QWORD*)v120 + 1607) = 0;
        if (v21 != 0) {
          v22 = v21 & 7;
          if (v21 >= 8) {
            v24 = v21 & 0xFFFFFFFFFFFFFFF8LL;
            v23 = 0;
            do {
              *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v23) = 0;
              *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v23 + 8) = 0;
              *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v23 + 16) = 0;
              *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v23 + 24) = 0;
              *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v23 + 32) = 0;
              *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v23 + 40) = 0;
              *(_QWORD*)(*((_QWORD*)v120 + 1605) + 8 * v23 + 48) = 0;
              v25 = *((_QWORD*)v120 + 1605) + 8 * v23;
              v23 += 8;
              *(_QWORD*)(v25 + 56) = 0;
            } while (v24 != v23);
          }
          else {
            v23 = 0;
          }
          if (v22 != 0) {
            v26 = 8 * v23;
            do {
              --v22;
              *(_QWORD*)(*((_QWORD*)v120 + 1605) + v26) = 0;
              v26 += 8;
            } while (v22 != 0);
          }
        }
        *((_QWORD*)v120 + 1608) = 0;
      }
      v27 = *v3;
      v10[3220] = 0;
      if (*(_DWORD*)(v27 + 4368) >= 3u &&
          *(_BYTE*)(*GameData_212cfd0[0] + 8) != 0 &&
          (v28 = game_UnitPool_Get(*GameData_212cfd0[0] + 8)) != 0 &&
          *(_QWORD*)(v28 + 392) != 0 && (*(_BYTE*)(v28 + 417) & 0x1C) == 0 &&
          (*(float (**)(__int64))(*(_QWORD*)(v28 + 152) + 16LL))(v28 + 152) >
              0.0) {
        v29 = *(_QWORD*)(*v3 + 248);
        v30 = *(_QWORD*)(*v3 + 256);
        while (v29 != v30) {
          if (GameRoutine_f097d0(*v3) != 0) {
            game_Unit_IsImmobile();
          }
          v29 += 4;
        }
      }
      else {
        v32 = *(char**)(*v3 + 248);
        v31 = *(char**)(*v3 + 256);
        if (v32 != v31) {
          v33 = *(_QWORD*)(*v3 + 24);
          do {
            v34 = *v3;
            v35 = *v32;
            v36 = v32[1];
            if (GameRoutine_f097d0(*v3) == 0 ||
                (game_Unit_IsImmobile() & 1) != 0 ||
                ((*(_DWORD*)(v34 + 4408 + 4LL * ((int)(v35 + 32 * v36) >> 5)) >>
                  v35) &
                 1) == 0) {
              v37 = GameRoutine_f25920(v33 + 127472, v35, v36, 0, 0);
              v38 = 0;
              if ((v37 & 1) != 0) {
                GameRoutine_fbb8a0(v35, v36, *(_QWORD*)(v33 + 254664));
                v38 = (v39 & 0xFFFFFFFE) == 2;
              }
              v40 = GameRoutine_f25920(v33 + 127472, v35, v36, 1, 0);
              if ((v40 & 1) != 0) {
                GameRoutine_fbb8a0(v35, v36, *(_QWORD*)(v33 + 254664));
                if (v41 == 1) {
                  GameRoutine_845840(v33 + 242288, v35, v36);
                }
              }
              v42 = GameRoutine_f25920(v33 + 127472, v35, v36, 2, 0);
              if ((v42 & 1) != 0) {
                GameRoutine_fbb8a0(v35, v36, *(_QWORD*)(v33 + 254664));
                if (v43 == 2) {
                  GameRoutine_845840(v33 + 242288, v35, v36);
                }
              }
              if ((v37 & 1) != 0) {
                v44 = 3;
                if ((_DWORD)v38 == 0) {
                  v44 = 0;
                }
                GameRoutine_f445e0(v120 + 4, 0, v35, v36, (unsigned int)v38,
                                   (unsigned int)v38, v44 | (v38 << 32), 1);
              }
              if ((v40 & 1) != 0) {
                GameRoutine_f445e0(v120 + 4, 1, v35, v36, 0, 0, 0, 1);
              }
              v3 = (__int64*)GameData_212d020[0];
              if ((v42 & 1) != 0) {
                GameRoutine_f445e0(v120 + 4, 2, v35, v36, 0, 0, 0, 1);
              }
            }
            v32 += 4;
          } while (v32 != v31);
        }
      }
    }
  LABEL_179:
    v1 = v120;
    *((_BYTE*)v120 + 8) = 0;
  }
  GameRoutine_f44f60(v1 + 6);
  GameRoutine_f44f60(v1 + 12);
  GameRoutine_f44f60(v1 + 18);
  return GameRoutine_f44f60(v1 + 24);
}

__int64 MapPanelDeployAction_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelDeployAction_vtable;
  MapDrawTargetSelectInfo_Destructor(a1 + 62);
  a1[2] = game_map_MassMeshGroup_vtable;
  GameRoutine_f43b80(a1 + 16);
  GameRoutine_f16a70(a1[13]);
  GameRoutine_f16a70(a1[10]);
  GameRoutine_f16a70(a1[7]);
  return GameRoutine_f16a70(a1[4]);
}

__int64 MapPanelDeployAction_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_map_MapPanelDeployAction_vtable;
  MapDrawTargetSelectInfo_Destructor(a1 + 62);
  a1[2] = game_map_MassMeshGroup_vtable;
  GameRoutine_f43b80(a1 + 16);
  GameRoutine_f16a70(a1[13]);
  GameRoutine_f16a70(a1[10]);
  GameRoutine_f16a70(a1[7]);
  GameRoutine_f16a70(a1[4]);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
