#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* ListResultMenuBase_1754800(__int64);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_16dd280(_QWORD);
__int64 GameRoutine_7fa250(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8c4ae0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20bab80;
extern __int64 GameData_2259540;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212e008[9];
_DWORD* ExpListResultMenu_Unknown138(__int64 a1, char a2);
__int64 BasicMenu_16dd280(_QWORD*);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__n128 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                               _QWORD, _QWORD);
__int64 ExpListResultMenu_Unknown96(__int64 a1, __n128 a2);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_7fa250(__int64, __int64*, __int64);
__int64 game_UnitGrow_Clamp(__int64 result);

__int64 ExpListResultMenu_Unknown96(__int64 a1, __n128 a2)
{
  __int64 v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;

  if (*(_BYTE*)(a1 + 1120) == 1) {
    v3 = GameData_2259540;
    if (GameData_2259540 != 0) {
      v4 = BasicMenu_16dd280((_QWORD*)a1);
      v5 = v4 - (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 488LL))(a1);
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 496LL))(a1);
      a2 = game_gameui_anonymous_ProcGameUIFade_In(v3, v5, v6, v7, 1, a1);
    }
    LANES128(a2).n128_f32[0] = 1.0;
    LayoutAccessor_1562680(a1 + 848, "In", *(long double*)&a2);
    *(_BYTE*)(a1 + 1120) = 0;
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 1104LL))(a1, 0);
}

_DWORD* ExpListResultMenu_Unknown138(__int64 a1, char a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  char v11;
  struct {
    __int16 v13;
    char v14;
  } v13_;
  struct {
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
  } v15_;
  _BYTE v25[11];

  if ((a2 & 1) != 0 && *(_QWORD*)(a1 + 336) != 0) {
    v2 = (_QWORD*)a1;
    v3 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                        &GameData_20bab80, 0);
    a1 = (__int64)v2;
    if (v3 != 0 && (*(int*)(v3 + 112) > 0 || *(int*)(v3 + 116) >= 1)) {
      if ((*(_BYTE*)(v3 + 106) & 1) != 0 || *(_BYTE*)(v3 + 107) == 1) {
        v4 = v2[138];
        if (v4 != 0) {
          v15_.v15 = *(_QWORD*)(v3 + 96);
          if (((*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v4 + 48LL))(
                   v4, &v15_.v15) &
               1) != 0) {
            GameHr_1562680((__int64)(v2 + 106), "Out", 0x1.0000000000000p+0f);
            v5 = v2;
            v6 = GameData_2259540;
            if (GameData_2259540 != 0) {
              BasicMenu_16dd280(v2);
              (*(void (**)(_QWORD*))(*v2 + 224LL))(v2);
              (*(void (**)(_QWORD*))(*v2 + 488LL))(v2);
              v7 = (*(__int64 (**)(_QWORD*))(*v2 + 496LL))(v2);
              v5 = v2;
              if ((*(_BYTE*)(v6 + 152) & 1) == 0) {
                v8 = *(_QWORD*)(v6 + 40);
                if (v8 != 0) {
                  while (*(_QWORD**)(v8 + 280) != v2) {
                    v8 = *(_QWORD*)(v8 + 56);
                    if (v8 == 0) {
                      goto LABEL_17;
                    }
                  }
                  *(_DWORD*)(v8 + 292) = v7;
                  *(_DWORD*)(v8 + 300) = 2;
                }
              }
            }
          LABEL_17:
            *((_BYTE*)v5 + 1120) = 1;
          }
        }
      }
      v15_.v24 = 0;
      memset(v25, 0, sizeof(v25));
      v15_.v22 = 0;
      v15_.v23 = 0;
      v15_.v20 = 0;
      v15_.v21 = 0;
      v15_.v18 = 0;
      v15_.v19 = 0;
      v15_.v16 = 0;
      v15_.v17 = 0;
      v15_.v15 = *(_QWORD*)(v3 + 96);
      LODWORD(v15_.v16) = *(_DWORD*)(v3 + 112);
      HIDWORD(v15_.v23) = *(_DWORD*)(v3 + 116);
      if (game_ProcGameSkipView_instance_ != 0 &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v10 = 2)
               : (v10 = 3),
           (v10 & v9) == 0)) {
        v11 = 3;
      }
      else {
        v11 = 1;
      }
      v25[10] = v11;
      game_UnitGrow_Clamp((__int64)&v15_.v15);
      if (v15_.v15 != 0 &&
          (HIDWORD(v15_.v23) |
           (((unsigned int)v15_.v23 |
             ((HIDWORD(v15_.v22) |
               (((unsigned int)v15_.v22 |
                 ((HIDWORD(v15_.v21) |
                   (((unsigned int)v15_.v21 |
                     ((HIDWORD(v15_.v20) |
                       (((unsigned int)v15_.v20 |
                         ((HIDWORD(v15_.v19) |
                           (((unsigned int)v15_.v19 |
                             ((HIDWORD(v15_.v18) |
                               (((unsigned int)v15_.v18 |
                                 ((HIDWORD(v15_.v16) | (unsigned int)v15_.v16 |
                                   (unsigned int)v15_.v17 |
                                   HIDWORD(v15_.v17)) != 0)) != 0)) != 0)) !=
                            0)) != 0)) != 0)) != 0)) != 0)) != 0)) != 0)) !=
              0)) != 0)) != 0) {
        v13_.v14 = 0;
        v13_.v13 = 256;
        return (_DWORD*)GameHr_7fa250((__int64)v2, &v15_.v15,
                                      (__int64)&v13_.v13);
      }
      a1 = (__int64)v2;
    }
  }
  return ListResultMenuBase_1754800(a1);
}

#pragma GCC visibility pop
