#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15b7a20(_QWORD);
__int64 GameRoutine_15b7b80(_QWORD);
__int64 GameRoutine_1850ee0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18515e0(_QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 GameRoutine_8c77c0(_QWORD);
__int64 GameRoutine_8ca200(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
__int64 RelianceMenuItem_Unknown75(__int64 a1);
__int64 RelianceMenuItem_Unknown58(__int64 a1);
__int64 RelianceMenuItem_Unknown55_1850910(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1789b00(_QWORD);
__int64 game_821090(_QWORD);
__int64 game_anonymous_RuntimeTalk_GetCondition(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 RelianceMenuItem_PlayDecideSe(__int64 result);

__int64 RelianceMenuItem_Unknown75(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  __int64 v9;

  v2 = GameRoutine_821090(1);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
  if (result == 0) {
    return result;
  }
  if (*(int*)(result + 32) < 1 || *(_BYTE*)(a1 + 164) != 0) {
    return 0;
  }
  v5 = GameRoutine_8ca200(a1 + 104);
  if (v5 != 0 && (v6 = *(unsigned __int8*)(v5 + 64)) != 4) {
    v6 = (game_GameModeData_instance_ == 0 ||
          (v8 = v5,
           v9 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48),
               *(_QWORD*)(v5 + 24) + 40LL),
           v5 = v8, v9 == 0) ||
          *(_DWORD*)(v9 + 32) == 0) &&
         (unsigned __int16)GameRoutine_8c77c0(v5) == 0;
    v7 = 1;
  }
  else {
    v7 = 0;
  }
  return v7 & v6;
}

__int64 RelianceMenuItem_Unknown58(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v4;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;

  if (*(_DWORD*)(a1 + 96) != 0) {
    return 1;
  }
  v2 = *(_QWORD*)(a1 + 88);
  if (v2 != 0 && (*(_BYTE*)(v2 + 416) & 8) != 0) {
    return 0;
  }
  v4 = GameRoutine_821090(1);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
  if (result == 0) {
    return result;
  }
  if (*(int*)(result + 32) < 1 || *(_BYTE*)(a1 + 164) != 0) {
    return 0;
  }
  v6 = GameRoutine_8ca200(a1 + 104);
  if (v6 != 0 && (v7 = *(unsigned __int8*)(v6 + 64)) != 4) {
    v7 = (game_GameModeData_instance_ == 0 ||
          (v9 = v6,
           v10 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48),
               *(_QWORD*)(v6 + 24) + 40LL),
           v6 = v9, v10 == 0) ||
          *(_DWORD*)(v10 + 32) == 0) &&
         (unsigned __int16)GameRoutine_8c77c0(v6) == 0;
    v8 = 1;
  }
  else {
    v8 = 0;
  }
  return v8 & v7;
}

__int64 RelianceMenuItem_PlayDecideSe(__int64 result)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[25];

  if (*(_QWORD*)(result + 88) != 0) {
    v1 = result;
    result = game_821090(1);
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), result);
      if (result != 0 && *(int*)(result + 32) >= 1 &&
          *(_BYTE*)(v1 + 164) == 0) {
        result = GameRoutine_8ca200(v1 + 104);
        if (result != 0 && *(_BYTE*)(result + 64) != 4) {
          if (game_GameModeData_instance_ == 0 ||
              (v3 = result,
               v4 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48),
                   *(_QWORD*)(result + 24) + 40LL),
               result = v3, v4 == 0) ||
              *(_DWORD*)(v4 + 32) == 0) {
            result = game_anonymous_RuntimeTalk_GetCondition(result);
            if ((_WORD)result == 0) {
              if (*(_DWORD*)(v1 + 96) != 0 ||
                  ((v5 = *(_QWORD*)(v1 + 88)) == 0 ||
                   (*(_BYTE*)(v5 + 416) & 8) == 0) &&
                      (result = game_821090(1),
                       game_GameModeData_instance_ != 0) &&
                      (result = game_GameVariableTable_Find(
                           *(_QWORD*)(game_GameModeData_instance_ + 48),
                           result)) != 0 &&
                      *(int*)(result + 32) >= 1 && *(_BYTE*)(v1 + 164) == 0 &&
                      (result = GameRoutine_8ca200(v1 + 104)) != 0 &&
                      *(_BYTE*)(result + 64) != 4 &&
                      (v7[0] = result,
                       ((result = GameRoutine_1789b00(v7)) & 1) != 0)) {
                snd_Fade_Fade_10c830(v7, 0.0f);
                snd_play_ff2d0((void*)(&v6), "SE_SYS_Decide_H_Light",
                               "SE_SYS_Decide_H_Light", v7, 0, 65537, 0, 0.0f,
                               1.0f);
                return snd_Fade_Destroy_Fade(v7);
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 RelianceMenuItem_Unknown55_1850910(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  char v17;
  __int64 v18;
  int v19;
  char v20;
  __int64 v21;
  int v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  bool v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  bool v56;
  __int64 v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD v65[2];
  _BYTE v66[13];
  char v67;
  __int64 v68;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 392);
    *(_QWORD*)&v66[5] = 0;
    v68 = 0;
    v65[0] = v1;
    v65[1] = v3;
    v67 = 6;
    *(_QWORD*)v66 = GameRoutine_15b7a20(a1) & 1;
    *(_DWORD*)&v66[1] = GameRoutine_15b7b80(a1) & 1;
    v4 = *(_QWORD*)(a1 + 88);
    if (v4 != 0) {
      LODWORD(v4) = *(unsigned __int8*)(v4 + 416) >> 7;
    }
    v66[2] = v4;
    v5 = GameRoutine_821090(1);
    if (game_GameModeData_instance_ != 0 &&
        (v6 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v5)) != 0) {
      v7 = (_BYTE*)(a1 + 164);
      if (*(int*)(v6 + 32) >= 1 && *(_BYTE*)(a1 + 164) == 0) {
        v18 = GameRoutine_8ca200(a1 + 104);
        if (v18 != 0 && (v19 = *(unsigned __int8*)(v18 + 64)) != 4) {
          LOBYTE(v19) = (game_GameModeData_instance_ == 0 ||
                         (v24 = v18,
                          v25 = game_GameVariableTable_Find(
                              *(_QWORD*)(game_GameModeData_instance_ + 48),
                              *(_QWORD*)(v18 + 24) + 40LL),
                          v18 = v24, v25 == 0) ||
                         *(_DWORD*)(v25 + 32) == 0) &&
                        (unsigned __int16)GameRoutine_8c77c0(v18) == 0;
          v20 = 1;
        }
        else {
          v20 = 0;
        }
        v9 = v20 & v19;
      }
      else {
        v9 = 0;
      }
    }
    else {
      v9 = 0;
      v7 = (_BYTE*)(a1 + 164);
    }
    v26 = *(_QWORD*)(a1 + 56);
    v66[4] = v9;
    if (v26 != 0) {
      v27 = std___1___shared_weak_count_lock(v26);
      if (v27 != 0) {
        v28 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v28 != nullptr) {
          LABEL_40:
            v29 = *(unsigned __int8*)(a1 + 164);
            if (*(_DWORD*)(a1 + 96) != 0) {
              v30 = 1;
            }
            else {
              v31 = *(_QWORD*)(a1 + 88);
              if ((v31 == 0 || (*(_BYTE*)(v31 + 416) & 8) == 0) &&
                  (v32 = GameRoutine_821090(1),
                   game_GameModeData_instance_ != 0) &&
                  (v33 = game_GameVariableTable_Find(
                       *(_QWORD*)(game_GameModeData_instance_ + 48), v32)) !=
                      0 &&
                  (*(int*)(v33 + 32) >= 1 ? (v34 = *v7 == 0) : (v34 = false),
                   v34)) {
                v42 = GameRoutine_8ca200(a1 + 104);
                if (v42 != 0 && (v43 = *(unsigned __int8*)(v42 + 64)) != 4) {
                  v43 = (game_GameModeData_instance_ == 0 ||
                         (v61 = v42,
                          v62 = game_GameVariableTable_Find(
                              *(_QWORD*)(game_GameModeData_instance_ + 48),
                              *(_QWORD*)(v42 + 24) + 40LL),
                          v42 = v61, v62 == 0) ||
                         *(_DWORD*)(v62 + 32) == 0) &&
                        (unsigned __int16)GameRoutine_8c77c0(v42) == 0;
                  v44 = 1;
                }
                else {
                  v44 = 0;
                }
                v30 = v44 & v43;
              }
              else {
                v30 = 0;
              }
            }
            v35 = GameRoutine_18515e0(a1 + 104);
            v36 = a1 + 104;
            v37 = v35 & 1;
            v38 = v28;
            v39 = v29;
            v40 = v30;
            return GameRoutine_1850ee0(v38, v36, v65, v39, v40, v37);
          }
        }
        else {
          v41 = v27;
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak(v41);
          if (v28 != nullptr) {
            goto LABEL_40;
          }
        }
      }
    }
    v28 = &ui_LayoutAccessor_empty_;
    goto LABEL_40;
  }
  v11 = a1 + 104;
  v10 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)&v66[5] = 0;
  v68 = 0;
  v65[0] = 0;
  v65[1] = v10;
  v67 = 6;
  *(_QWORD*)v66 = GameRoutine_15b7a20(a1) & 1;
  *(_DWORD*)&v66[1] = GameRoutine_15b7b80(a1) & 1;
  v12 = *(_QWORD*)(a1 + 88);
  if (v12 != 0) {
    LODWORD(v12) = *(unsigned __int8*)(v12 + 416) >> 7;
  }
  v66[2] = v12;
  v13 = GameRoutine_821090(1);
  if (game_GameModeData_instance_ != 0 &&
      (v14 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v13)) != 0) {
    v15 = (_BYTE*)(a1 + 164);
    if (*(int*)(v14 + 32) >= 1 && *(_BYTE*)(a1 + 164) == 0) {
      v21 = GameRoutine_8ca200(a1 + 104);
      if (v21 != 0 && (v22 = *(unsigned __int8*)(v21 + 64)) != 4) {
        LOBYTE(v22) = (game_GameModeData_instance_ == 0 ||
                       (v45 = v21,
                        v46 = game_GameVariableTable_Find(
                            *(_QWORD*)(game_GameModeData_instance_ + 48),
                            *(_QWORD*)(v21 + 24) + 40LL),
                        v21 = v45, v46 == 0) ||
                       *(_DWORD*)(v46 + 32) == 0) &&
                      (unsigned __int16)GameRoutine_8c77c0(v21) == 0;
        v23 = 1;
      }
      else {
        v23 = 0;
      }
      v17 = v23 & v22;
    }
    else {
      v17 = 0;
    }
  }
  else {
    v17 = 0;
    v15 = (_BYTE*)(a1 + 164);
  }
  v47 = *(_QWORD*)(a1 + 56);
  v66[4] = v17;
  if (v47 == 0) {
    goto LABEL_69;
  }
  v48 = std___1___shared_weak_count_lock(v47);
  if (v48 == 0) {
    goto LABEL_69;
  }
  v49 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v50 = v48;
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak(v50);
  }
  if (v49 == nullptr) {
  LABEL_69:
    v49 = &ui_LayoutAccessor_empty_;
  }
  v51 = *(unsigned __int8*)(a1 + 164);
  if (*(_DWORD*)(a1 + 96) != 0) {
    v52 = 1;
  }
  else {
    v53 = *(_QWORD*)(a1 + 88);
    if ((v53 == 0 || (*(_BYTE*)(v53 + 416) & 8) == 0) &&
        (v54 = GameRoutine_821090(1), game_GameModeData_instance_ != 0) &&
        (v55 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v54)) != 0 &&
        (*(int*)(v55 + 32) >= 1 ? (v56 = *v15 == 0) : (v56 = false), v56)) {
      v58 = GameRoutine_8ca200(a1 + 104);
      if (v58 != 0 && (v59 = *(unsigned __int8*)(v58 + 64)) != 4) {
        v59 = (game_GameModeData_instance_ == 0 ||
               (v63 = v58,
                v64 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48),
                    *(_QWORD*)(v58 + 24) + 40LL),
                v58 = v63, v64 == 0) ||
               *(_DWORD*)(v64 + 32) == 0) &&
              (unsigned __int16)GameRoutine_8c77c0(v58) == 0;
        v60 = 1;
      }
      else {
        v60 = 0;
      }
      v52 = v60 & v59;
    }
    else {
      v52 = 0;
    }
  }
  v37 = GameRoutine_18515e0(v11) & 1;
  v38 = v49;
  v36 = v11;
  v39 = v51;
  v40 = v52;
  return GameRoutine_1850ee0(v38, v36, v65, v39, v40, v37);
}

#pragma GCC visibility pop
