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
__int64* game_821090_alt1(int) __asm__("game_821090");
__int64 GameRoutine_15b7b80_alt1(__int64) __asm__("GameRoutine_15b7b80");
__int64 GameRoutine_1850ee0_alt1(__int64*, _QWORD*, __int64, char, char,
                                 char) __asm__("GameRoutine_1850ee0");
__int64 GameRoutine_8ca200_alt1(_QWORD*) __asm__("GameRoutine_8ca200");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_anonymous_RuntimeTalk_GetCondition_alt1(__int64) __asm__(
    "game_anonymous_RuntimeTalk_GetCondition");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool GameRoutine_15b7a20_alt1(__int64) __asm__("GameRoutine_15b7a20");
bool RelianceMenuItem_18515e0(__int64*);

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
  __int64* v5;
  __int64 v7;
  _BYTE* v8;
  char v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v16;
  _BYTE* v17;
  char v19;
  __int64 v20;
  int v21;
  char v22;
  __int64 v23;
  int v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  char v31;
  char v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  bool v36;
  bool v37;
  __int64* v38;
  char v39;
  __int64* v40;
  char v41;
  char v42;
  __int64 v43;
  __int64 v44;
  int v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  char v53;
  char v54;
  __int64 v55;
  __int64* v56;
  __int64 v57;
  bool v58;
  __int64 v60;
  int v61;
  char v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  struct {
    _QWORD v67[2];
    _BYTE v68[13];
    char v69;
    char gap38_[2];
    __int64 v70;
  } v67_;

  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v1 = *(_QWORD*)(a1 + 88);
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 392);
    *(_QWORD*)&v67_.v68[5] = 0;
    v67_.v70 = 0;
    v67_.v67[0] = v1;
    v67_.v67[1] = v3;
    v67_.v69 = 6;
    *(_QWORD*)v67_.v68 = GameRoutine_15b7a20_alt1(a1),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *(_DWORD*)&v67_.v68[1] = GameRoutine_15b7b80_alt1(a1) & 1,
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v4 = *(_QWORD*)(a1 + 88);
    if (v4 != 0) {
      LODWORD(v4) = *(unsigned __int8*)(v4 + 416) >> 7;
    }
    v67_.v68[2] = v4;
    v5 = game_821090_alt1(1),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v61 = COERCE_AS(__typeof__(v61),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (game_GameModeData_instance_ != 0 &&
        (v7 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v5)) != 0) {
      v8 = (_BYTE*)(a1 + 164);
      if (*(int*)(v7 + 32) >= 1 && *(_BYTE*)(a1 + 164) == 0) {
        v20 = GameRoutine_8ca200_alt1((_QWORD*)(a1 + 104)),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        if (v20 != 0 && (v21 = *(unsigned __int8*)(v20 + 64)) != 4) {
          LOBYTE(v21) =
              (game_GameModeData_instance_ == 0 ||
               (v26 = v20,
                v27 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)(*(_QWORD*)(v20 + 24) + 40LL)),
                v20 = v26, v27 == 0) ||
               *(_DWORD*)(v27 + 32) == 0) &&
              (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
                  v20) == 0,
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v61 = COERCE_AS(__typeof__(v61),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v22 = 1;
        }
        else {
          v22 = 0;
        }
        v10 = v22 & v21;
      }
      else {
        v10 = 0;
      }
    }
    else {
      v10 = 0;
      v8 = (_BYTE*)(a1 + 164);
    }
    v28 = *(_QWORD*)(a1 + 56);
    v67_.v68[4] = v10;
    if (v28 != 0) {
      v29 = std___1___shared_weak_count_lock_alt1(v28),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v29 != 0) {
        v30 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v30 != nullptr) {
          LABEL_40:
            v31 = *(_BYTE*)(a1 + 164);
            if (*(_DWORD*)(a1 + 96) != 0) {
              v32 = 1;
            }
            else {
              v33 = *(_QWORD*)(a1 + 88);
              if ((v33 == 0 || (*(_BYTE*)(v33 + 416) & 8) == 0) &&
                  (v34 = game_821090_alt1(1),
                   game_GameModeData_instance_ != 0) &&
                  (v35 = game_GameVariableTable_Find_alt1(
                       *(_QWORD**)(game_GameModeData_instance_ + 48),
                       (unsigned __int64*)v34)) != 0 &&
                  (*(int*)(v35 + 32) >= 1 ? (v36 = *v8 == 0) : (v36 = false),
                   v36)) {
                v44 = GameRoutine_8ca200_alt1((_QWORD*)(a1 + 104)),
                v21 =
                    COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
                v24 =
                    COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
                v45 =
                    COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
                v61 =
                    COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                if (v44 != 0 && (v45 = *(unsigned __int8*)(v44 + 64)) != 4) {
                  LOBYTE(
                      v45) =
                      (game_GameModeData_instance_ == 0 ||
                       (v63 = v44,
                        v64 = game_GameVariableTable_Find_alt1(
                            *(_QWORD**)(game_GameModeData_instance_ + 48),
                            (unsigned __int64*)(*(_QWORD*)(v44 + 24) + 40LL)),
                        v44 = v63, v64 == 0) ||
                       *(_DWORD*)(v64 + 32) == 0) &&
                      (unsigned __int16)
                              game_anonymous_RuntimeTalk_GetCondition_alt1(
                                  v44) == 0,
               v21 = COERCE_AS(__typeof__(v21),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
               v24 = COERCE_AS(__typeof__(v24),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
               v45 = COERCE_AS(__typeof__(v45),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
               v61 = COERCE_AS(__typeof__(v61),
                               PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                  v46 = 1;
                }
                else {
                  v46 = 0;
                }
                v32 = v46 & v45;
              }
              else {
                v32 = 0;
              }
            }
            v37 = RelianceMenuItem_18515e0((__int64*)(a1 + 104)),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
            v45 = COERCE_AS(__typeof__(v45),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
            v61 = COERCE_AS(__typeof__(v61),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
            v38 = (__int64*)(a1 + 104);
            v39 = v37;
            v40 = v30;
            v41 = v31;
            v42 = v32;
            return GameRoutine_1850ee0_alt1(v40, v38, (__int64)v67_.v67, v41,
                                            v42, v39);
          }
        }
        else {
          v43 = v29;
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v43),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          if (v30 != nullptr) {
            goto LABEL_40;
          }
        }
      }
    }
    v30 = &ui_LayoutAccessor_empty_;
    goto LABEL_40;
  }
  v12 = (__int64*)(a1 + 104);
  v11 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)&v67_.v68[5] = 0;
  v67_.v70 = 0;
  v67_.v67[0] = 0;
  v67_.v67[1] = v11;
  v67_.v69 = 6;
  *(_QWORD*)v67_.v68 = GameRoutine_15b7a20_alt1(a1),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_DWORD*)&v67_.v68[1] = GameRoutine_15b7b80_alt1(a1) & 1,
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v13 = *(_QWORD*)(a1 + 88);
  if (v13 != 0) {
    LODWORD(v13) = *(unsigned __int8*)(v13 + 416) >> 7;
  }
  v67_.v68[2] = v13;
  v14 = game_821090_alt1(1),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (game_GameModeData_instance_ != 0 &&
      (v16 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v14)) != 0) {
    v17 = (_BYTE*)(a1 + 164);
    if (*(int*)(v16 + 32) >= 1 && *(_BYTE*)(a1 + 164) == 0) {
      v23 = GameRoutine_8ca200_alt1((_QWORD*)(a1 + 104)),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v23 != 0 && (v24 = *(unsigned __int8*)(v23 + 64)) != 4) {
        LOBYTE(v24) =
            (game_GameModeData_instance_ == 0 ||
             (v47 = v23,
              v48 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)(*(_QWORD*)(v23 + 24) + 40LL)),
              v23 = v47, v48 == 0) ||
             *(_DWORD*)(v48 + 32) == 0) &&
            (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
                v23) == 0,
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v25 = 1;
      }
      else {
        v25 = 0;
      }
      v19 = v25 & v24;
    }
    else {
      v19 = 0;
    }
  }
  else {
    v19 = 0;
    v17 = (_BYTE*)(a1 + 164);
  }
  v49 = *(_QWORD*)(a1 + 56);
  v67_.v68[4] = v19;
  if (v49 == 0) {
    goto LABEL_69;
  }
  v50 = std___1___shared_weak_count_lock_alt1(v49),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v50 == 0) {
    goto LABEL_69;
  }
  v51 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v52 = v50;
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v52),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  if (v51 == nullptr) {
  LABEL_69:
    v51 = &ui_LayoutAccessor_empty_;
  }
  v53 = *(_BYTE*)(a1 + 164);
  if (*(_DWORD*)(a1 + 96) != 0) {
    v54 = 1;
  }
  else {
    v55 = *(_QWORD*)(a1 + 88);
    if ((v55 == 0 || (*(_BYTE*)(v55 + 416) & 8) == 0) &&
        (v56 = game_821090_alt1(1), game_GameModeData_instance_ != 0) &&
        (v57 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v56)) != 0 &&
        (*(int*)(v57 + 32) >= 1 ? (v58 = *v17 == 0) : (v58 = false), v58)) {
      v60 = GameRoutine_8ca200_alt1((_QWORD*)(a1 + 104)),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v61 = COERCE_AS(__typeof__(v61),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v60 != 0 && (v61 = *(unsigned __int8*)(v60 + 64)) != 4) {
        LOBYTE(v61) =
            (game_GameModeData_instance_ == 0 ||
             (v65 = v60,
              v66 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)(*(_QWORD*)(v60 + 24) + 40LL)),
              v60 = v65, v66 == 0) ||
             *(_DWORD*)(v66 + 32) == 0) &&
            (unsigned __int16)game_anonymous_RuntimeTalk_GetCondition_alt1(
                v60) == 0,
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v61 = COERCE_AS(__typeof__(v61),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v62 = 1;
      }
      else {
        v62 = 0;
      }
      v54 = v62 & v61;
    }
    else {
      v54 = 0;
    }
  }
  v39 = RelianceMenuItem_18515e0(v12),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v61 = COERCE_AS(__typeof__(v61),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v40 = v51;
  v38 = v12;
  v41 = v53;
  v42 = v54;
  return GameRoutine_1850ee0_alt1(v40, v38, (__int64)v67_.v67, v41, v42, v39);
}

#pragma GCC visibility pop
