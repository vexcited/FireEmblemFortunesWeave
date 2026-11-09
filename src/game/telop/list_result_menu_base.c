#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155cda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155d940(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2131d18[23];
extern __int64 GameData_22736d0;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212e008[9];
extern __int64* game_g_frame_clock_ptr[3];
__int64 ListResultMenuBase_1754380(__int64 result);
_DWORD* ListResultMenuBase_1754800(__int64 a1);

__int64 ListResultMenuBase_1754380(__int64 result)
{
  int v1;
  bool v2;
  __int64 v3;
  __int64 v4;
  float v5;
  unsigned int v6;
  float v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  float v18;
  __int64 v19;
  float* v20;
  int v21;
  int v22;
  __int64 v23;

  v1 = *(_DWORD*)(result + 1056);
  if (v1 == 2) {
    v10 = GameData_22736d0;
    if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
      v11 = result;
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 ||
          (result = v11, *(_DWORD*)(v10 + 624) != 1)) {
        GameRoutine_155cda0(v10 + 272, "Out", 0);
        if (*(_DWORD*)(v10 + 624) == 1) {
          v12 = 2;
        }
        else {
          GameRoutine_155d940(v10 + 272);
          GameRoutine_155e830(v10 + 168, 0);
          v12 = 1;
        }
        *(_DWORD*)(v10 + 624) = v12;
        result = v11;
      }
    }
    v16 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
        v17 |= 2u;
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v17;
      }
      if ((v17 & 0x10) == 0) {
        v18 = *(float*)(v16 + 224);
        *(_DWORD*)(v16 + 156) = v17 & 0xFFFFFFE2 | 1;
        if (v18 > 0.0) {
          *(_DWORD*)(v16 + 224) = 0;
        }
      }
    }
    return GameRoutine_16df7a0(result);
  }
  if (v1 != 1) {
    return result;
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) != 0 ||
      (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3
           ? (v2 = (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) == 0)
           : (v2 = false),
       !v2)) {
    if (*(_QWORD*)(result + 336) == 0) {
      return result;
    }
    v3 = result;
    result = __dynamic_cast(*(_QWORD*)(result + 336), GameData_212e008[0],
                            GameData_2131d18[0], 0);
    v4 = result;
    if (result == 0) {
      return result;
    }
    result = v3;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    v6 = (int)v5;
    if ((int)v5 <= 1) {
      v6 = 1;
    }
    v7 = (float)v6;
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) != 0) {
      v8 = GameData_22736d0;
      v7 = v7 * 8.0;
      if (GameData_22736d0 == 0 || *(_DWORD*)(GameData_22736d0 + 624) == 0) {
        goto LABEL_65;
      }
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) == 0 ||
          *(_DWORD*)(v8 + 624) != 1) {
        GameRoutine_155e830(v8 + 168, 1);
        GameRoutine_155cda0(v8 + 272, "In", 0);
        if (*(_DWORD*)(v8 + 624) == 1) {
          v9 = 0;
        LABEL_64:
          result = v3;
          *(_DWORD*)(v8 + 624) = v9;
        LABEL_65:
          v22 = *(_DWORD*)(v4 + 84);
          if (v22 == 1) {
            v23 = *(_QWORD*)v4;
            *(float*)(v4 + 88) = v7 + *(float*)(v4 + 88);
            (*(void (**)(__int64))(v23 + 576))(v4);
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 568LL))(v4, 0);
            v22 = *(_DWORD*)(v4 + 84);
            result = v3;
          }
          if (v22 == 2) {
            return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result +
                                                      1104LL))(result, 1);
          }
          return result;
        }
        GameRoutine_155d940(v8 + 272);
        goto LABEL_63;
      }
    }
    else {
      v8 = GameData_22736d0;
      if (GameData_22736d0 == 0 || *(_DWORD*)(GameData_22736d0 + 624) == 2) {
        goto LABEL_65;
      }
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 ||
          *(_DWORD*)(v8 + 624) != 1) {
        GameRoutine_155cda0(v8 + 272, "Out", 0);
        if (*(_DWORD*)(v8 + 624) == 1) {
          v9 = 2;
          goto LABEL_64;
        }
        GameRoutine_155d940(v8 + 272);
        GameRoutine_155e830(v8 + 168, 0);
      LABEL_63:
        v9 = 1;
        goto LABEL_64;
      }
    }
    result = v3;
    goto LABEL_65;
  }
  v13 = GameData_22736d0;
  if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
    v14 = result;
    if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 ||
        (result = v14, *(_DWORD*)(v13 + 624) != 1)) {
      GameRoutine_155cda0(v13 + 272, "Out", 0);
      if (*(_DWORD*)(v13 + 624) == 1) {
        v15 = 2;
      }
      else {
        GameRoutine_155d940(v13 + 272);
        GameRoutine_155e830(v13 + 168, 0);
        v15 = 1;
      }
      *(_DWORD*)(v13 + 624) = v15;
      result = v14;
    }
  }
  if (*(_QWORD*)(result + 336) != 0) {
    v19 = result;
    result = __dynamic_cast(*(_QWORD*)(result + 336), GameData_212e008[0],
                            GameData_2131d18[0], 0);
    if (result != 0) {
      v20 = (float*)result;
      (*(void (**)(__int64))(*(_QWORD*)result + 600LL))(result);
      v20[22] = 8.0;
      result = (*(__int64 (**)(float*, _QWORD))(*(_QWORD*)v20 + 568LL))(v20, 0);
      v21 = *((_DWORD*)v20 + 21);
      if (v21 != 2 && v20[22] >= 8.0) {
        result = (*(__int64 (**)(float*))(*(_QWORD*)v20 + 584LL))(v20);
        if ((result & 1) != 0) {
          *((_DWORD*)v20 + 21) = 2;
          result = (*(__int64 (**)(float*))(*(_QWORD*)v20 + 592LL))(v20);
        }
        v21 = *((_DWORD*)v20 + 21);
      }
      if (v21 == 2) {
        result = v19;
        return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 1104LL))(
            result, 1);
      }
    }
  }
  return result;
}

_DWORD* ListResultMenuBase_1754800(__int64 a1)
{
  _DWORD* result;

  result = *(_DWORD**)(a1 + 336);
  if (result != nullptr) {
    result = (_DWORD*)__dynamic_cast(result, GameData_212e008[0],
                                     GameData_2131d18[0], 0);
    if (result != nullptr) {
      (*(void (**)(_DWORD*))(*(_QWORD*)result + 440LL))(result);
      result = (_DWORD*)(*(__int64 (**)(__int64, _QWORD, _QWORD))(
          *(_QWORD*)(a1 + 176) + 48LL))(a1 + 176, 0, 0);
      if ((_DWORD)result != 0) {
        (*(void (**)(__int64))(*(_QWORD*)(a1 + 176) + 144LL))(a1 + 176);
        result = *(_DWORD**)(a1 + 336);
        if (result != nullptr) {
          result = (_DWORD*)__dynamic_cast(result, GameData_212e008[0],
                                           GameData_2131d18[0], 0);
        }
        if (result[21] == 0) {
          result[21] = 1;
          return (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 560LL))(
              result);
        }
      }
      else {
        *(_DWORD*)(a1 + 1056) = 2;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
