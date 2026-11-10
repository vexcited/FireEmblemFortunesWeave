#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 TimelineFile_890160(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64* GameRoutine_9a28e0(int);
extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN* GameData_1f9caf8;
extern __int64 (*GameData_1fba818[])();
extern __int64 (*GameData_1fba898[])();
extern __int64 GameData_21f8fa0;
extern __int64 GameData_21f8fa8;
extern __int64 GameData_21f8fb8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_RecallData_SetAlreadyReadImpl(__int64 a1, __int64 a2);
__int64 game_RecallData_Commit_lambda0_Invoke(__int64 a1, __int64 a2,
                                              __int64 a3);
__int64 game_RecallData_SetAlreadyReadImpl_lambda0_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          unsigned __int64* a3);

__int64 game_RecallData_SetAlreadyReadImpl(__int64 a1, __int64 a2)
{
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64** v10;
  unsigned __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int16* v36;
  int v37;
  int v38;
  int v39;
  unsigned int v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64** v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v54;
  unsigned __int64 v55;
  _QWORD* v56;
  _QWORD* v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  unsigned int v63;
  int v64;
  unsigned __int64 v65;
  void* v66;
  __int64 result;
  int v68;
  int v70;
  int v71;
  int v72;
  int v73;
  unsigned int v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  _QWORD v79[4];
  _QWORD* v80;

  if ((a2 & 1) != 0) {
    if (game_GameModeData_instance_ != 0) {
      v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      v5 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v5 = 0;
      v3 = 0;
      v4 = 0;
    }
    v23 = GameRoutine_9a28e0(71);
    if (game_GameModeData_instance_ != 0 &&
        (v24 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v23)) != 0 &&
        *(_DWORD*)(v24 + 32) != 0) {
      v25 = 66;
    }
    else {
      v26 = GameRoutine_9a28e0(70);
      if (game_GameModeData_instance_ != 0 &&
          (v27 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v26)) != 0 &&
          *(_DWORD*)(v27 + 32) != 0) {
        v25 = 55;
      }
      else {
        v28 = GameRoutine_9a28e0(69);
        if (game_GameModeData_instance_ != 0 &&
            (v29 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v28)) != 0 &&
            *(_DWORD*)(v29 + 32) != 0) {
          v25 = 44;
        }
        else {
          v30 = GameRoutine_9a28e0(68);
          if (game_GameModeData_instance_ != 0 &&
              (v31 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), v30)) != 0 &&
              *(_DWORD*)(v31 + 32) != 0) {
            v25 = 33;
          }
          else {
            v32 = GameRoutine_9a28e0(67);
            if (game_GameModeData_instance_ != 0 &&
                (v33 = game_GameVariableTable_Find(
                     *(_QWORD*)(game_GameModeData_instance_ + 48), v32)) != 0 &&
                *(_DWORD*)(v33 + 32) != 0) {
              v25 = 22;
            }
            else {
              v34 = GameRoutine_9a28e0(66);
              if (game_GameModeData_instance_ != 0 &&
                  (v35 = game_GameVariableTable_Find(
                       *(_QWORD*)(game_GameModeData_instance_ + 48), v34)) !=
                      0) {
                if (*(_DWORD*)(v35 + 32) != 0) {
                  v25 = 11;
                }
                else {
                  v25 = 0;
                }
              }
              else {
                v25 = 0;
              }
            }
          }
        }
      }
    }
    if (game_gmap_GmapClock_instance_ != 0) {
      v36 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v36 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v37 = *v36;
    v38 = v36[1];
    v39 = v36[2];
    if (v38 * v37 * v39 == 0) {
      v40 = v3;
      v38 = 0;
      v39 = 0;
      v78 = 0;
      goto LABEL_79;
    }
    v40 = v3;
    LODWORD(v78) = v36[4];
    HIDWORD(v78) = v36[3];
    if (v3 == 0) {
      goto LABEL_93;
    }
    v3 = 0;
    if (v5 > 1) {
      if (v5 == 3) {
        v41 = TimelineFile_890160(&GameData_1aabf6c);
        if (v41 == 0) {
          goto LABEL_79;
        }
      }
      else {
        if (v5 != 2) {
          goto LABEL_93;
        }
        v41 = TimelineFile_890160(&GameData_1ad653b);
        if (v41 == 0) {
          goto LABEL_79;
        }
      }
    }
    else {
      if (v5 != 0) {
        if (v5 != 1) {
          goto LABEL_93;
        }
        v41 = TimelineFile_890160(*(&GameData_1f9caf8 + v40));
        if (v41 == 0) {
          goto LABEL_79;
        }
        goto LABEL_90;
      }
      v41 = TimelineFile_890160(&GameData_1abf89f);
      if (v41 == 0) {
      LABEL_79:
        v3 = 0;
        goto LABEL_93;
      }
    }
  LABEL_90:
    v43 = v37 - *(__int16*)(*(_QWORD*)(v41 + 24) + 96LL);
    v44 = v43 & ~(v43 >> 31);
    if (v44 >= 10) {
      v3 = 10;
    }
    else {
      v3 = v44;
    }
  LABEL_93:
    v45 = *(_QWORD*)(a1 + 8);
    v46 = game_GameModeData_instance_;
    v47 = v79;
    v79[0] = GameData_1fba818;
    v79[1] = a1;
    v80 = v79;
    if (game_GameModeData_instance_ != 0) {
      v48 = *(_QWORD*)(v45 + 24);
      v77 = v5;
      v49 = *(__int64***)(v48 + 216);
      if (v49 != nullptr) {
        do {
          v50 = (unsigned __int64)v49[2];
          if (v50 != 0) {
            v51 = *(_QWORD**)(v46 + 48);
            v52 = v51[2];
            if (v52 != 0 && v51[4] != 0) {
              v54 = v52 - 1;
              if ((v52 & (v52 - 1)) != 0) {
                v55 = (unsigned __int64)v49[2];
                if (v50 >= v52) {
                  v55 = v50 % v52;
                }
              }
              else {
                v55 = v54 & v50;
              }
              v56 = *(_QWORD**)(v51[1] + 8 * v55);
              if (v56 != nullptr) {
                v57 = (_QWORD*)*v56;
                if (v57 != nullptr) {
                  if ((v52 & v54) == 0) {
                    while (1) {
                      v59 = v57[1];
                      if (v50 == v59) {
                        if (v57[2] == v50) {
                          goto LABEL_122;
                        }
                      }
                      else if ((v59 & v54) != v55) {
                        goto LABEL_96;
                      }
                      v57 = (_QWORD*)*v57;
                      if (v57 == nullptr) {
                        goto LABEL_96;
                      }
                    }
                  }
                  do {
                    v58 = v57[1];
                    if (v50 == v58) {
                      if (v57[2] == v50) {
                      LABEL_122:
                        if (v57[3] == 0) {
                          break;
                        }
                        v21 = v80;
                        if (v80 != nullptr) {
                          (*(void (**)(_QWORD*, __int64))(*v80 + 48LL))(
                              v80,
                              *(_QWORD*)(v48 + 176) + 40LL * *((int*)v49 + 6));
                          break;
                        }
                      LABEL_165:
                        GameRoutine_60a310(v21, a2);
                      }
                    }
                    else {
                      if (v58 >= v52) {
                        v58 %= v52;
                      }
                      if (v58 != v55) {
                        break;
                      }
                    }
                    v57 = (_QWORD*)*v57;
                  } while (v57 != nullptr);
                }
              }
            }
          }
        LABEL_96:
          v49 = (__int64**)*v49;
        } while (v49 != nullptr);
        v47 = v80;
        if (v80 != v79) {
          v5 = v77;
          if (v80 == nullptr) {
          LABEL_132:
            v42 = (int)v78 / 10;
            goto LABEL_133;
          }
          v60 = 40;
        LABEL_131:
          (*(void (**)(__int64))(*v47 + v60))((__int64)v47);
          goto LABEL_132;
        }
      }
      else {
        v47 = v79;
      }
      v5 = v77;
      v60 = 32;
      goto LABEL_131;
    }
    v60 = 32;
    goto LABEL_131;
  }
  v6 = *(_QWORD*)(a1 + 8);
  v7 = game_GameModeData_instance_;
  v8 = v79;
  v79[0] = GameData_1fba898;
  v80 = v79;
  if (game_GameModeData_instance_ == 0) {
    v22 = 32;
  LABEL_85:
    (*(void (**)(__int64))(*v8 + v22))((__int64)v8);
    goto LABEL_86;
  }
  v9 = *(_QWORD*)(v6 + 24);
  v10 = *(__int64***)(v9 + 216);
  if (v10 == nullptr) {
    v8 = v79;
    v22 = 32;
    goto LABEL_85;
  }
  while (2) {
    v11 = (unsigned __int64)v10[2];
    if (v11 == 0) {
      goto LABEL_7;
    }
    v12 = *(_QWORD**)(v7 + 48);
    v13 = v12[2];
    v14 = v13 == 0 || v12[4] == 0;
    if (v14) {
      goto LABEL_7;
    }
    v15 = v13 - 1;
    if ((v13 & (v13 - 1)) != 0) {
      v16 = (unsigned __int64)v10[2];
      if (v11 >= v13) {
        v16 = v11 % v13;
      }
    }
    else {
      v16 = v15 & v11;
    }
    v17 = *(_QWORD**)(v12[1] + 8 * v16);
    if (v17 == nullptr) {
      goto LABEL_7;
    }
    v18 = (_QWORD*)*v17;
    if (v18 == nullptr) {
      goto LABEL_7;
    }
    if ((v13 & v15) == 0) {
      while (1) {
        v20 = v18[1];
        if (v11 == v20) {
          if (v18[2] == v11) {
            goto LABEL_33;
          }
        }
        else if ((v20 & v15) != v16) {
          goto LABEL_7;
        }
        v18 = (_QWORD*)*v18;
        if (v18 == nullptr) {
          goto LABEL_7;
        }
      }
    }
    while (1) {
      v19 = v18[1];
      if (v11 == v19) {
        break;
      }
      if (v19 >= v13) {
        v19 %= v13;
      }
      if (v19 != v16) {
        goto LABEL_7;
      }
    LABEL_22:
      v18 = (_QWORD*)*v18;
      if (v18 == nullptr) {
        goto LABEL_7;
      }
    }
    if (v18[2] != v11) {
      goto LABEL_22;
    }
  LABEL_33:
    if (v18[3] != 0) {
      v21 = v80;
      if (v80 == nullptr) {
        goto LABEL_165;
      }
      (*(void (**)(_QWORD*, __int64))(*v80 + 48LL))(
          v80, *(_QWORD*)(v9 + 176) + 40LL * *((int*)v10 + 6));
    }
  LABEL_7:
    v10 = (__int64**)*v10;
    if (v10 != nullptr) {
      continue;
    }
    break;
  }
  v8 = v80;
  if (v80 == v79) {
    v22 = 32;
    goto LABEL_85;
  }
  if (v80 != nullptr) {
    v22 = 40;
    goto LABEL_85;
  }
LABEL_86:
  v38 = 0;
  v39 = 0;
  HIDWORD(v78) = 0;
  v42 = 0;
  v3 = 0;
  v4 = 0;
  v25 = 0;
  v5 = 0;
  v40 = 0;
LABEL_133:
  if (*(char*)(*(_QWORD*)(a1 + 8) + 152LL) < 0) {
    goto LABEL_149;
  }
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_149;
  }
  v61 = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), a1 + 16);
  if (v61 == 0) {
    goto LABEL_149;
  }
  v62 = *(_DWORD*)(v61 + 32);
  v63 = v62 / 0x21B7900 -
        11 * ((390451573 * (unsigned __int64)(v62 / 0x21B7900)) >> 32);
  if (v63 == 0) {
    goto LABEL_149;
  }
  v64 = v5;
  v65 = (v62 / 0x86DE40uLL) & 3;
  if (((v62 / 0x86DE40) & 3) > 1) {
    v66 = (_DWORD)v65 == 3 ? &GameData_1aabf6c : &GameData_1ad653b;
  }
  else {
    v66 = (_DWORD)v65 != 0 ? *(&GameData_1f9caf8 + v63) : &GameData_1abf89f;
  }
  result = TimelineFile_890160(v66);
  v68 = *(char*)(*(_QWORD*)(a1 + 8) + 152LL);
  v14 = (_DWORD)v65 == v68;
  v5 = v64;
  if (!v14 || v64 == v68) {
  LABEL_149:
    if (v4 >= 13) {
      v70 = 13;
    }
    else {
      v70 = v4;
    }
    v71 = v70 - 1;
    if (v4 <= 0) {
      v71 = 0;
    }
    if (v38 >= 12) {
      v72 = 12;
    }
    else {
      v72 = v38;
    }
    v73 = v72 - 1;
    if (v38 <= 0) {
      v73 = 0;
    }
    v74 =
        v73 + 12 * (v71 - (v5 + 4 * (v40 + v25)) + 16 * (v5 + 4 * (v40 + v25)));
    if (v39 >= 31) {
      v75 = 31;
    }
    else {
      v75 = v39;
    }
    v76 = v75 - 1;
    if (v39 <= 0) {
      v76 = 0;
    }
    return game_VariableManager_SetFlag(
        a1 + 16,
        11 * (v42 + 6 * (HIDWORD(v78) + 24 * (v76 - v74 + 32 * v74))) + v3);
  }
  return result;
}

__int64 game_RecallData_Commit_lambda0_Invoke(__int64 a1, __int64 a2,
                                              __int64 a3)
{
  __int64 v4;
  __int64 v5;

  if (game_GameModeData_instance_ != 0 &&
      (v4 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), a2)) != 0) {
    v5 = *(unsigned int*)(v4 + 32);
  }
  else {
    v5 = 0;
  }
  return game_VariableManager_SetFlag(a3, v5);
}

__int64 game_RecallData_SetAlreadyReadImpl_lambda0_Invoke(__int64 a1,
                                                          __int64 a2,
                                                          unsigned __int64* a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  unsigned __int64 v14;
  void* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64*** v19;
  __int64** v20;
  unsigned __int64 v21;
  __int64* v22;
  int v23;

  if (game_GameModeData_instance_ == 0) {
    v9 = 0;
    return game_VariableManager_SetFlag(a2, v9);
  }
  v4 = *(_QWORD*)(game_GameModeData_instance_ + 48);
  v5 = *(_QWORD*)(a1 + 8);
  v7 = game_GameVariableTable_Find(v4, a2);
  if (v7 != 0) {
    v8 = *(_DWORD*)(v7 + 32);
  }
  else {
    v8 = 0;
  }
  v10 = game_GameVariableTable_Find(v4, a3);
  if (v10 != 0) {
    v9 = *(_DWORD*)(v10 + 32);
  }
  else {
    v9 = 0;
  }
  v11 = game_GameVariableTable_Find(v4, v5 + 16);
  if (v11 != 0) {
    v12 = *(_DWORD*)(v11 + 32);
    v13 = v12 / 0x21B7900 -
          11 * ((390451573 * (unsigned __int64)(v12 / 0x21B7900)) >> 32);
    if (v13 != 0) {
      v14 = (v12 / 0x86DE40uLL) & 3;
      if ((int)v14 > 1) {
        if ((_DWORD)v14 == 3) {
          v15 = &GameData_1aabf6c;
        }
        else {
          v15 = &GameData_1ad653b;
        }
      }
      else if ((_DWORD)v14 != 0) {
        v15 = *(&GameData_1f9caf8 + v13);
      }
      else {
        v15 = &GameData_1abf89f;
      }
      TimelineFile_890160(v15);
      if (GameData_21f8fa8 == 0 || GameData_21f8fb8 == 0) {
        goto LABEL_42;
      }
      v16 = *a3;
      v17 = GameData_21f8fa8 - 1;
      if ((GameData_21f8fa8 & (GameData_21f8fa8 - 1)) != 0) {
        v18 = *a3;
        if (v16 >= GameData_21f8fa8) {
          v18 = v16 % GameData_21f8fa8;
        }
      }
      else {
        v18 = v17 & v16;
      }
      v19 = *(__int64****)(GameData_21f8fa0 + 8 * v18);
      if (v19 == nullptr || (v20 = *v19) == nullptr) {
      LABEL_42:
        if (v8 > (int)v9) {
          v9 = v8;
        }
        return game_VariableManager_SetFlag(a2, v9);
      }
      if ((GameData_21f8fa8 & v17) == 0) {
        while (1) {
          v22 = v20[1];
          if ((__int64*)v16 == v22) {
            if (v20[2] == (__int64*)v16) {
              goto LABEL_40;
            }
          }
          else if (((unsigned __int64)v22 & v17) != v18) {
            goto LABEL_42;
          }
          v20 = (__int64**)*v20;
          if (v20 == nullptr) {
            goto LABEL_42;
          }
        }
      }
      while (1) {
        v21 = (unsigned __int64)v20[1];
        if (v16 == v21) {
          if (v20[2] == (__int64*)v16) {
          LABEL_40:
            v23 = *((unsigned __int8*)v20 + 24);
            if (v23 == 1) {
              if ((int)v9 >= v8) {
                v9 = v8;
              }
            }
            else if (v23 != 2) {
              goto LABEL_42;
            }
            return game_VariableManager_SetFlag(a2, v9);
          }
        }
        else {
          if (v21 >= GameData_21f8fa8) {
            v21 %= (unsigned __int64)GameData_21f8fa8;
          }
          if (v21 != v18) {
            goto LABEL_42;
          }
        }
        v20 = (__int64**)*v20;
        if (v20 == nullptr) {
          goto LABEL_42;
        }
      }
    }
  }
  return game_VariableManager_SetFlag(a2, v9);
}

#pragma GCC visibility pop
