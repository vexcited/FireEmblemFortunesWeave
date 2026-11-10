#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SpineModel_1919040(_QWORD*, _QWORD*);
__int64 GameConverge_8e7ca0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 spine_SlotData_getName(_QWORD);
__int64 spine_Slot_getData(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1abfafc;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
bool ProcAfterEpisodeSeq_19bcbf0(__int64 a1);
__int64 ProcAfterEpisodeSeq_19bd810(__int64 result, int a2, __int64 a3,
                                    __int64 a4);
__int64 game_anonymous_ProcAfterEpisodeSeq_Face_SetGrayScale_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
__int64 GameRoutine_19bb850(_QWORD);
__int64 GameRoutine_19bbae0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 game_809ba0(float);
__int64 game_HashString(_QWORD);
extern __int64* GameData_212e348;
extern __int64 GameData_21c99c8;
extern __int64 GameData_22730f0;
extern __int64 game_ProcFadeView_instance_;
extern __int64 msg_MessageManager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 ProcAfterEpisodeSeq_19b8ac0(__int64 a1);
unsigned __int64 ProcAfterEpisodeSeq_19bac40(unsigned __int64 result);

__int64 ProcAfterEpisodeSeq_19b8ac0(__int64 a1)
{
  unsigned __int64 v2;
  __int128 v3;
  __int64 result;

  if (game_ProcFadeView_instance_ == 0) {
    return LayoutAccessor_1562680(a1 + 256, "In", 1.0f);
  }
  v2 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
  }
  else {
    v3 = *(_OWORD*)(v2 + 208);
  }
  if (*((float*)&v3 + 3) != 1.0f ||
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160,
                                                           *((float*)&v3 + 3)))
              .n128_f32[3] != 1.0f) {
    return LayoutAccessor_1562680(a1 + 256, "In", 1.0f);
  }
  result = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    return game_809ba0(0.5f);
  }
  return result;
}

unsigned __int64 ProcAfterEpisodeSeq_19bac40(unsigned __int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned __int64* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  unsigned __int64 v43;
  int v44;
  __int64 v45;
  unsigned __int64* v46;
  _QWORD* v47;
  unsigned __int64 v48;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v64;
  unsigned __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  unsigned __int64 v68;
  int v69;
  __int64 v70;
  unsigned __int64* v71;
  _QWORD* v72;
  unsigned __int64 v73;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  _QWORD* v79;
  _QWORD* v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v88;
  unsigned __int64 v89;
  _QWORD* v90;
  _QWORD* v91;
  unsigned __int64 v92;
  int v93;
  __int64 v94;
  unsigned __int64* v95;
  _QWORD* v96;
  unsigned __int64 v97;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  _QWORD* v103;
  _QWORD* v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  __int64** v111;
  __int64* v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned int v115;
  __int64** v116;
  __int64* v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64** v120;
  __int64* v121;
  unsigned __int64 v122;
  __int64 v123;
  __int64** v124;
  __int64* v125;
  unsigned __int64 v126;
  __int64 v127;
  _QWORD v128[4];
  int v129;
  int v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;

  if (*(_QWORD*)result == 0) {
    return result;
  }
  v1 = result;
  v2 = game_GameModeData_instance_;
  GameRoutine_682bc0(v128, *(_QWORD*)(*(_QWORD*)result + 32LL));
  result = GameConverge_8e7ca0(*(_QWORD*)(v2 + 176), v128[0]);
  if ((result & 1) != 0 && *(_QWORD*)(v1 + 16) == 0) {
    return result;
  }
  if (*(_OWORD*)(v1 + 8) == 0) {
    return result;
  }
  v3 = GameRoutine_19bb850(v1);
  GameRoutine_60a020(v1 + 24, v3);
  v4 = GameRoutine_19bbae0(v1);
  v5 = v4;
  if (v4 != 0) {
    v6 = msg_MessageManager_instance_;
    if ((*(_BYTE*)(msg_MessageManager_instance_ + 14704) & 1) != 0) {
      *(_QWORD*)(msg_MessageManager_instance_ + 14712) = 0;
      v7 = *(_BYTE**)(v6 + 14720);
    }
    else {
      v7 = (_BYTE*)(msg_MessageManager_instance_ + 14705);
      *(_BYTE*)(msg_MessageManager_instance_ + 14704) = 0;
    }
    *v7 = 0;
    v131 = -1;
    v132 = -1;
    v133 = -1;
    v134 = -1;
    v135 = -1;
    v136 = -1;
    v137 = -1;
    v138 = -1;
    v139 = -1;
    v140 = -1;
    v141 = -1;
    v142 = -1;
    v128[0] = GameData_212e348 + 2;
    v128[1] = 0xFFFF0001FFFF0000LL;
    v128[2] = 0xFFFF0004FFFF0002LL;
    v128[3] = 0xFFFF0006FFFF0005LL;
    v143 = 8;
    v129 = -65529;
    v130 = -65528;
    v4 = GameRoutine_a4dbe0(msg_MessageManager_instance_, v4, 0, v128);
  }
  if (v5 != 0) {
    v8 = v4;
  }
  else {
    v8 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(v1 + 48, v8);
  if (*(_QWORD*)v1 != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)v1 + 32LL);
  }
  else {
    v9 = 0;
  }
  v10 = GameData_22730f0;
  v11 = game_HashString(v9);
  if (v11 != 0) {
    v12 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v12 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v14 = v12 - 1;
      if ((v12 & (v12 - 1)) != 0) {
        v15 = v11;
        if (v11 >= v12) {
          v15 = v11 % v12;
        }
      }
      else {
        v15 = v14 & v11;
      }
      v16 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v15);
      if (v16 != nullptr) {
        v17 = (_QWORD*)*v16;
        if (v17 != nullptr) {
          if ((v12 & v14) == 0) {
            while (1) {
              v20 = v17[1];
              if (v20 == v11) {
                if (v17[2] == v11) {
                  goto LABEL_42;
                }
              }
              else if ((v20 & v14) != v15) {
                goto LABEL_66;
              }
              v17 = (_QWORD*)*v17;
              v19 = 0;
              if (v17 == nullptr) {
                goto LABEL_67;
              }
            }
          }
          do {
            v18 = v17[1];
            if (v18 == v11) {
              if (v17[2] == v11) {
              LABEL_42:
                v21 = (unsigned __int64*)v17[3];
                if (v21 != nullptr) {
                  v22 = *(_QWORD**)(*(_QWORD*)(v10 + 208) + 8LL);
                  v23 = v22[2];
                  if (v23 != 0 && v22[4] != 0) {
                    v25 = *v21;
                    v26 = v23 - 1;
                    if ((v23 & (v23 - 1)) != 0) {
                      v27 = v25;
                      if (v25 >= v23) {
                        v27 = v25 % v23;
                      }
                    }
                    else {
                      v27 = v26 & v25;
                    }
                    v28 = v22[1];
                    v29 = *(_QWORD**)(v28 + 8 * v27);
                    if (v29 != nullptr) {
                      v30 = (_QWORD*)*v29;
                      if (v30 != nullptr) {
                        if ((v23 & v26) == 0) {
                          while (1) {
                            v32 = v30[1];
                            if (v25 == v32) {
                              if (v30[2] == v25) {
                                goto LABEL_228;
                              }
                            }
                            else if ((v32 & v26) != v27) {
                              goto LABEL_66;
                            }
                            v30 = (_QWORD*)*v30;
                            v19 = 0;
                            if (v30 == nullptr) {
                              goto LABEL_67;
                            }
                          }
                        }
                        while (1) {
                          v31 = v30[1];
                          if (v25 == v31) {
                            if (v30[2] == v25) {
                            LABEL_228:
                              if ((v23 & v26) != 0) {
                                v107 = v25;
                                if (v25 >= v23) {
                                  v107 = v25 % v23;
                                }
                              }
                              else {
                                v107 = v26 & v25;
                              }
                              v111 = *(__int64***)(v28 + 8 * v107);
                              if (v111 != nullptr) {
                                v112 = *v111;
                                if (v112 != nullptr) {
                                  if ((v23 & v26) == 0) {
                                    while (1) {
                                      v114 = v112[1];
                                      if (v25 == v114) {
                                        if (v112[2] == v25) {
                                          goto LABEL_256;
                                        }
                                      }
                                      else if ((v114 & v26) != v107) {
                                        goto LABEL_314;
                                      }
                                      v112 = (__int64*)*v112;
                                      if (v112 == nullptr) {
                                        goto LABEL_314;
                                      }
                                    }
                                  }
                                  do {
                                    v113 = v112[1];
                                    if (v25 == v113) {
                                      if (v112[2] == v25) {
                                      LABEL_256:
                                        v115 = (v112[9] & 0x3FF) -
                                               ((*((_DWORD*)v112 + 18) >> 1) &
                                                0x155);
                                        v19 =
                                            (16843009 *
                                             (((v115 & 0x33333333) +
                                               ((v115 >> 2) & 0x33333333) +
                                               (((v115 & 0x33333333) +
                                                 ((v115 >> 2) & 0x33333333)) >>
                                                4)) &
                                              0xF0F0F0F)) >>
                                            24;
                                        goto LABEL_67;
                                      }
                                    }
                                    else {
                                      if (v113 >= v23) {
                                        v113 %= v23;
                                      }
                                      if (v113 != v107) {
                                        break;
                                      }
                                    }
                                    v112 = (__int64*)*v112;
                                  } while (v112 != nullptr);
                                }
                              }
                            LABEL_314:
                              String_60a250("unordered_map::at: key not found");
                            }
                          }
                          else {
                            if (v31 >= v23) {
                              v31 %= v23;
                            }
                            if (v31 != v27) {
                              goto LABEL_66;
                            }
                          }
                          v30 = (_QWORD*)*v30;
                          v19 = 0;
                          if (v30 == nullptr) {
                            goto LABEL_67;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              }
            }
            else {
              if (v18 >= v12) {
                v18 %= v12;
              }
              if (v18 != v15) {
                break;
              }
            }
            v17 = (_QWORD*)*v17;
          } while (v17 != nullptr);
        }
      }
    }
  }
LABEL_66:
  v19 = 0;
LABEL_67:
  v33 = *(_QWORD*)v1;
  *(_DWORD*)(v1 + 72) = v19;
  if (v33 != 0) {
    v34 = *(_QWORD*)(v33 + 32);
  }
  else {
    v34 = 0;
  }
  v35 = GameData_22730f0;
  v36 = game_HashString(v34);
  if (v36 == 0) {
    goto LABEL_119;
  }
  v37 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v37 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_119;
  }
  v39 = v37 - 1;
  if ((v37 & (v37 - 1)) != 0) {
    v40 = v36;
    if (v36 >= v37) {
      v40 = v36 % v37;
    }
  }
  else {
    v40 = v39 & v36;
  }
  v41 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v40);
  if (v41 == nullptr) {
    goto LABEL_119;
  }
  v42 = (_QWORD*)*v41;
  if (v42 == nullptr) {
    goto LABEL_119;
  }
  if ((v37 & v39) == 0) {
    while (1) {
      v45 = v42[1];
      if (v45 == v36) {
        if (v42[2] == v36) {
          goto LABEL_95;
        }
      }
      else if ((v45 & v39) != v40) {
        goto LABEL_119;
      }
      v42 = (_QWORD*)*v42;
      v44 = 0;
      if (v42 == nullptr) {
        goto LABEL_120;
      }
    }
  }
  while (1) {
    v43 = v42[1];
    if (v43 == v36) {
      break;
    }
    if (v43 >= v37) {
      v43 %= v37;
    }
    if (v43 != v40) {
      goto LABEL_119;
    }
  LABEL_84:
    v42 = (_QWORD*)*v42;
    if (v42 == nullptr) {
      goto LABEL_119;
    }
  }
  if (v42[2] != v36) {
    goto LABEL_84;
  }
LABEL_95:
  v46 = (unsigned __int64*)v42[3];
  if (v46 == nullptr) {
    goto LABEL_119;
  }
  v47 = *(_QWORD**)(*(_QWORD*)(v35 + 208) + 8LL);
  v48 = v47[2];
  if (v48 == 0 || v47[4] == 0) {
    goto LABEL_119;
  }
  v50 = *v46;
  v51 = v48 - 1;
  if ((v48 & (v48 - 1)) != 0) {
    v52 = v50;
    if (v50 >= v48) {
      v52 = v50 % v48;
    }
  }
  else {
    v52 = v51 & v50;
  }
  v53 = v47[1];
  v54 = *(_QWORD**)(v53 + 8 * v52);
  if (v54 == nullptr || (v55 = (_QWORD*)*v54) == nullptr) {
  LABEL_119:
    v44 = 0;
    goto LABEL_120;
  }
  if ((v48 & v51) == 0) {
    while (1) {
      v57 = v55[1];
      if (v50 == v57) {
        if (v55[2] == v50) {
          goto LABEL_231;
        }
      }
      else if ((v57 & v51) != v52) {
        goto LABEL_119;
      }
      v55 = (_QWORD*)*v55;
      v44 = 0;
      if (v55 == nullptr) {
        goto LABEL_120;
      }
    }
  }
  while (2) {
    v56 = v55[1];
    if (v50 != v56) {
      if (v56 >= v48) {
        v56 %= v48;
      }
      if (v56 != v52) {
        goto LABEL_119;
      }
    }
    else if (v55[2] == v50) {
    LABEL_231:
      if ((v48 & v51) != 0) {
        v108 = v50;
        if (v50 >= v48) {
          v108 = v50 % v48;
        }
      }
      else {
        v108 = v51 & v50;
      }
      v116 = *(__int64***)(v53 + 8 * v108);
      if (v116 == nullptr) {
        goto LABEL_314;
      }
      v117 = *v116;
      if (v117 == nullptr) {
        goto LABEL_314;
      }
      if ((v48 & v51) == 0) {
        while (1) {
          v119 = v117[1];
          if (v50 == v119) {
            if (v117[2] == v50) {
              goto LABEL_273;
            }
          }
          else if ((v119 & v51) != v108) {
            goto LABEL_314;
          }
          v117 = (__int64*)*v117;
          if (v117 == nullptr) {
            goto LABEL_314;
          }
        }
      }
      while (2) {
        v118 = v117[1];
        if (v50 != v118) {
          if (v118 >= v48) {
            v118 %= v48;
          }
          if (v118 != v108) {
            goto LABEL_314;
          }
        }
        else if (v117[2] == v50) {
        LABEL_273:
          if (*((_DWORD*)v117 + 10) == 1) {
            v44 = *((_DWORD*)v117 + 8);
          }
          else {
            v44 = 0;
          }
        LABEL_120:
          v58 = *(_QWORD*)v1;
          *(_DWORD*)(v1 + 76) = v44;
          if (v58 != 0) {
            v59 = *(_QWORD*)(v58 + 32);
          }
          else {
            v59 = 0;
          }
          v60 = GameData_22730f0;
          v61 = game_HashString(v59);
          if (v61 == 0) {
            goto LABEL_172;
          }
          v62 = *(_QWORD*)(GameData_21c99c8 + 96);
          if (v62 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
            goto LABEL_172;
          }
          v64 = v62 - 1;
          if ((v62 & (v62 - 1)) != 0) {
            v65 = v61;
            if (v61 >= v62) {
              v65 = v61 % v62;
            }
          }
          else {
            v65 = v64 & v61;
          }
          v66 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v65);
          if (v66 == nullptr) {
            goto LABEL_172;
          }
          v67 = (_QWORD*)*v66;
          if (v67 == nullptr) {
            goto LABEL_172;
          }
          if ((v62 & v64) == 0) {
            while (1) {
              v70 = v67[1];
              if (v70 == v61) {
                if (v67[2] == v61) {
                  goto LABEL_148;
                }
              }
              else if ((v70 & v64) != v65) {
                goto LABEL_172;
              }
              v67 = (_QWORD*)*v67;
              v69 = 0;
              if (v67 == nullptr) {
                goto LABEL_173;
              }
            }
          }
          while (1) {
            v68 = v67[1];
            if (v68 == v61) {
              break;
            }
            if (v68 >= v62) {
              v68 %= v62;
            }
            if (v68 != v65) {
              goto LABEL_172;
            }
          LABEL_137:
            v67 = (_QWORD*)*v67;
            if (v67 == nullptr) {
              goto LABEL_172;
            }
          }
          if (v67[2] != v61) {
            goto LABEL_137;
          }
        LABEL_148:
          v71 = (unsigned __int64*)v67[3];
          if (v71 == nullptr) {
            goto LABEL_172;
          }
          v72 = *(_QWORD**)(*(_QWORD*)(v60 + 208) + 8LL);
          v73 = v72[2];
          if (v73 == 0 || v72[4] == 0) {
            goto LABEL_172;
          }
          v75 = *v71;
          v76 = v73 - 1;
          if ((v73 & (v73 - 1)) != 0) {
            v77 = v75;
            if (v75 >= v73) {
              v77 = v75 % v73;
            }
          }
          else {
            v77 = v76 & v75;
          }
          v78 = v72[1];
          v79 = *(_QWORD**)(v78 + 8 * v77);
          if (v79 == nullptr || (v80 = (_QWORD*)*v79) == nullptr) {
          LABEL_172:
            v69 = 0;
            goto LABEL_173;
          }
          if ((v73 & v76) == 0) {
            while (1) {
              v82 = v80[1];
              if (v75 == v82) {
                if (v80[2] == v75) {
                  goto LABEL_234;
                }
              }
              else if ((v82 & v76) != v77) {
                goto LABEL_172;
              }
              v80 = (_QWORD*)*v80;
              v69 = 0;
              if (v80 == nullptr) {
                goto LABEL_173;
              }
            }
          }
          while (2) {
            v81 = v80[1];
            if (v75 != v81) {
              if (v81 >= v73) {
                v81 %= v73;
              }
              if (v81 != v77) {
                goto LABEL_172;
              }
            }
            else if (v80[2] == v75) {
            LABEL_234:
              if ((v73 & v76) != 0) {
                v109 = v75;
                if (v75 >= v73) {
                  v109 = v75 % v73;
                }
              }
              else {
                v109 = v76 & v75;
              }
              v120 = *(__int64***)(v78 + 8 * v109);
              if (v120 == nullptr) {
                goto LABEL_314;
              }
              v121 = *v120;
              if (v121 == nullptr) {
                goto LABEL_314;
              }
              if ((v73 & v76) == 0) {
                while (1) {
                  v123 = v121[1];
                  if (v75 == v123) {
                    if (v121[2] == v75) {
                      goto LABEL_292;
                    }
                  }
                  else if ((v123 & v76) != v109) {
                    goto LABEL_314;
                  }
                  v121 = (__int64*)*v121;
                  if (v121 == nullptr) {
                    goto LABEL_314;
                  }
                }
              }
              while (2) {
                v122 = v121[1];
                if (v75 != v122) {
                  if (v122 >= v73) {
                    v122 %= v73;
                  }
                  if (v122 != v109) {
                    goto LABEL_314;
                  }
                }
                else if (v121[2] == v75) {
                LABEL_292:
                  if (*((_DWORD*)v121 + 13) == 1) {
                    v69 = *((_DWORD*)v121 + 11);
                  }
                  else {
                    v69 = 0;
                  }
                LABEL_173:
                  v83 = *(_QWORD*)v1;
                  *(_DWORD*)(v1 + 80) = v69;
                  if (v83 != 0) {
                    v84 = *(_QWORD*)(v83 + 32);
                  }
                  else {
                    v84 = 0;
                  }
                  v85 = GameData_22730f0;
                  result = game_HashString(v84);
                  if (result == 0) {
                    goto LABEL_225;
                  }
                  v86 = *(_QWORD*)(GameData_21c99c8 + 96);
                  if (v86 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
                    goto LABEL_225;
                  }
                  v88 = v86 - 1;
                  if ((v86 & (v86 - 1)) != 0) {
                    v89 = result;
                    if (result >= v86) {
                      v89 = result % v86;
                    }
                  }
                  else {
                    v89 = v88 & result;
                  }
                  v90 =
                      *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v89);
                  if (v90 == nullptr) {
                    goto LABEL_225;
                  }
                  v91 = (_QWORD*)*v90;
                  if (v91 == nullptr) {
                    goto LABEL_225;
                  }
                  if ((v86 & v88) == 0) {
                    while (1) {
                      v94 = v91[1];
                      if (v94 == result) {
                        if (v91[2] == result) {
                          goto LABEL_201;
                        }
                      }
                      else if ((v94 & v88) != v89) {
                        goto LABEL_225;
                      }
                      v91 = (_QWORD*)*v91;
                      v93 = 0;
                      if (v91 == nullptr) {
                        goto LABEL_226;
                      }
                    }
                  }
                  while (1) {
                    v92 = v91[1];
                    if (v92 == result) {
                      break;
                    }
                    if (v92 >= v86) {
                      v92 %= v86;
                    }
                    if (v92 != v89) {
                      goto LABEL_225;
                    }
                  LABEL_190:
                    v91 = (_QWORD*)*v91;
                    if (v91 == nullptr) {
                      goto LABEL_225;
                    }
                  }
                  if (v91[2] != result) {
                    goto LABEL_190;
                  }
                LABEL_201:
                  v95 = (unsigned __int64*)v91[3];
                  if (v95 == nullptr) {
                    goto LABEL_225;
                  }
                  v96 = *(_QWORD**)(*(_QWORD*)(v85 + 208) + 8LL);
                  v97 = v96[2];
                  if (v97 == 0 || v96[4] == 0) {
                    goto LABEL_225;
                  }
                  v99 = *v95;
                  v100 = v97 - 1;
                  if ((v97 & (v97 - 1)) != 0) {
                    v101 = v99;
                    if (v99 >= v97) {
                      v101 = v99 % v97;
                    }
                  }
                  else {
                    v101 = v100 & v99;
                  }
                  v102 = v96[1];
                  v103 = *(_QWORD**)(v102 + 8 * v101);
                  if (v103 == nullptr || (v104 = (_QWORD*)*v103) == nullptr) {
                  LABEL_225:
                    v93 = 0;
                    goto LABEL_226;
                  }
                  if ((v97 & v100) == 0) {
                    while (1) {
                      v106 = v104[1];
                      if (v99 == v106) {
                        if (v104[2] == v99) {
                          goto LABEL_237;
                        }
                      }
                      else if ((v106 & v100) != v101) {
                        goto LABEL_225;
                      }
                      v104 = (_QWORD*)*v104;
                      v93 = 0;
                      if (v104 == nullptr) {
                        goto LABEL_226;
                      }
                    }
                  }
                  while (2) {
                    v105 = v104[1];
                    if (v99 != v105) {
                      if (v105 >= v97) {
                        v105 %= v97;
                      }
                      if (v105 != v101) {
                        goto LABEL_225;
                      }
                    }
                    else if (v104[2] == v99) {
                    LABEL_237:
                      if ((v97 & v100) != 0) {
                        v110 = v99;
                        if (v99 >= v97) {
                          v110 = v99 % v97;
                        }
                      }
                      else {
                        v110 = v100 & v99;
                      }
                      v124 = *(__int64***)(v102 + 8 * v110);
                      if (v124 == nullptr) {
                        goto LABEL_314;
                      }
                      v125 = *v124;
                      if (v125 == nullptr) {
                        goto LABEL_314;
                      }
                      if ((v97 & v100) == 0) {
                        while (1) {
                          v127 = v125[1];
                          if (v99 == v127) {
                            if (v125[2] == v99) {
                              goto LABEL_311;
                            }
                          }
                          else if ((v127 & v100) != v110) {
                            goto LABEL_314;
                          }
                          v125 = (__int64*)*v125;
                          if (v125 == nullptr) {
                            goto LABEL_314;
                          }
                        }
                      }
                      while (2) {
                        v126 = v125[1];
                        if (v99 != v126) {
                          if (v126 >= v97) {
                            v126 %= v97;
                          }
                          if (v126 != v110) {
                            goto LABEL_314;
                          }
                        }
                        else if (v125[2] == v99) {
                        LABEL_311:
                          if (*((_DWORD*)v125 + 16) == 1) {
                            v93 = *((_DWORD*)v125 + 14);
                          }
                          else {
                            v93 = 0;
                          }
                        LABEL_226:
                          *(_DWORD*)(v1 + 84) = v93;
                          return result;
                        }
                        v125 = (__int64*)*v125;
                        if (v125 == nullptr) {
                          goto LABEL_314;
                        }
                        continue;
                      }
                    }
                    v104 = (_QWORD*)*v104;
                    v93 = 0;
                    if (v104 == nullptr) {
                      goto LABEL_226;
                    }
                    continue;
                  }
                }
                v121 = (__int64*)*v121;
                if (v121 == nullptr) {
                  goto LABEL_314;
                }
                continue;
              }
            }
            v80 = (_QWORD*)*v80;
            v69 = 0;
            if (v80 == nullptr) {
              goto LABEL_173;
            }
            continue;
          }
        }
        v117 = (__int64*)*v117;
        if (v117 == nullptr) {
          goto LABEL_314;
        }
        continue;
      }
    }
    v55 = (_QWORD*)*v55;
    v44 = 0;
    if (v55 == nullptr) {
      goto LABEL_120;
    }
    continue;
  }
}

bool ProcAfterEpisodeSeq_19bcbf0(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_QWORD*)a1 == 0) {
    return false;
  }
  v2 = game_GameModeData_instance_;
  GameRoutine_682bc0(&v6, *(_QWORD*)(*(_QWORD*)a1 + 32LL));
  if ((GameConverge_8e7ca0(*(_QWORD*)(v2 + 176), v6) & 1) != 0 &&
          *(_QWORD*)(a1 + 16) == 0 ||
      *(_OWORD*)(a1 + 8) == 0) {
    return false;
  }
  v4 = *(_QWORD*)(a1 + 88);
  if (v4 != 0 && ((v5 = game_GameModeData_instance_,
                   GameRoutine_682bc0(&v6, *(_QWORD*)(v4 + 32)),
                   (GameConverge_8e7ca0(*(_QWORD*)(v5 + 176), v6) & 1) == 0) ||
                  *(_QWORD*)(a1 + 104) != 0)) {
    return *(_OWORD*)(a1 + 96) == 0;
  }
  else {
    return true;
  }
}

__int64 ProcAfterEpisodeSeq_19bd810(__int64 result, int a2, __int64 a3,
                                    __int64 a4)
{
  __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  const char* v12;
  char* v13;
  __int64 v14;
  _QWORD v15[2];
  char* v16;

  if (a3 == 0 || a4 == 0) {
    return result;
  }
  v6 = result;
  v8 = strlen(a3);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v8);
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v15[1] = v9;
    v16 = v10;
    v15[0] = v11 | 1;
  }
  else {
    LOBYTE(v15[0]) = 2 * v8;
    v10 = (char*)v15 + 1;
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  memcpy(v10, a3, v9);
LABEL_12:
  v10[v9] = 0;
  if (a2 != 0) {
    v12 = "01";
  }
  else {
    v12 = (const char*)&GameData_1abfafc;
  }
  result = GameRoutine_1a09ce0(v15, v12, 2);
  if ((v15[0] & 1) != 0) {
    v13 = v16;
  }
  else {
    v13 = (char*)v15 + 1;
  }
  if (v13 != nullptr) {
    result = ui_LayoutAccessor_FindTextBox(v6 + 256, v13);
    if (result != 0) {
      result = GameRoutine_156c5d0(result, a4, 0);
    }
  }
  if ((v15[0] & 1) != 0 && v16 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  return result;
}

__int64 game_anonymous_ProcAfterEpisodeSeq_Face_SetGrayScale_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  _QWORD v7[2];

  v4 = spine_Slot_getData(a3);
  v7[0] = *(_QWORD*)(spine_SlotData_getName(v4) + 16);
  v7[1] = strlen(v7[0]);
  v5 = SpineModel_1919040((_QWORD*)(a2 + 1280), v7);
  if (v5 != nullptr) {
    *((_DWORD*)v5 + 22) = -1082130432;
    *((_DWORD*)v5 + 24) = 2;
  }
  return 1;
}

#pragma GCC visibility pop
