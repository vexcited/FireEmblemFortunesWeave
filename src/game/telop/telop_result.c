#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_174e4e0(__int64, int);
__int64 GameRoutine_174f600(__int64, int);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 ProcInOutAnim_173fac0(__int64, char);
__int64 Registration_a4da40(_QWORD, _QWORD);
__int64 TelopSequence_1374cc0(_QWORD, _QWORD);
__int64 game_telop_TelopSequence_Unknown45(void);
__int64 game_util_Format(const char*, ...);
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_g_game_setting_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 TelopResult_1760380(_QWORD* a1);
__int64 TelopResult_1760680(__int64 a1);
__int64 TelopResult_17609c0(_QWORD* a1);
__int64 TelopResult_1760aa0(__int64 a1);

__int64 TelopResult_1760380(_QWORD* a1)
{
  _DWORD* v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 result;

  v1 = (_DWORD*)a1[106];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    GameRoutine_14a1390(a1 + 106, 1);
  }
  v3 = a1[118];
  if (v3 != 0) {
    if (*(_QWORD*)(v3 + 216) != *(_QWORD*)(v3 + 208)) {
      v4 = 0;
      v5 = ui_LayoutAccessor_empty__ptr[0];
      do {
        if (*(_QWORD*)(v3 + 168) != 0) {
          v6 = *(__int64**)(v3 + 168);
        }
        else {
          v6 = v5;
        }
        v7 = game_util_Format("L_MotivationGauge%02d", (unsigned int)v4);
        v8 = LayoutAccessor_155fbe0(v6, v7);
        LODWORD(v9) = 1.0;
        LayoutAccessor_1562680(v8, "Out", v9);
        ++v4;
      } while (
          0xAAAAAAAAAAAAAAABLL *
              ((__int64)(*(_QWORD*)(v3 + 216) - *(_QWORD*)(v3 + 208)) >> 3) >
          v4);
    }
    *(_DWORD*)(v3 + 232) = 6;
  }
  result = a1[145];
  if (result != 0) {
    return ProcInOutAnim_173fac0(result, 0);
  }
  return result;
}

__int64 TelopResult_1760680(__int64 a1)
{
  int v2;
  char v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8;
  char v9;
  __int64 v10;
  int v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 344LL))(a1);
  v3 = 1;
  v4 = GameRoutine_174f600(a1 + 984, 1);
  v5 = *(_QWORD*)(a1 + 1128);
  v6 = v4 ^ 1;
  if (v5 != *(_QWORD*)(a1 + 1136)) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = GameRoutine_174e4e0(v5 + v7, 1);
      ++v8;
      v7 += 184;
      v3 &= v9 ^ 1;
      v5 = *(_QWORD*)(a1 + 1128);
    } while (0xD37A6F4DE9BD37A7LL * ((*(_QWORD*)(a1 + 1136) - v5) >> 3) > v8);
  }
  if ((v2 & v6 & 1) != 0 && (v3 & 1) != 0) {
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1) & 1) == 0) {
      v11 = *(_DWORD*)(game_g_game_setting + 952);
      if ((v11 & 1) == 0 &&
          (*(_BYTE*)(a1 + 336) != 1 ||
           (v11 & 2) == 0 && (*(_BYTE*)(game_g_game_setting + 944) & 8) == 0)) {
        goto LABEL_52;
      }
      LayoutAccessor_155d940(a1 + 440);
      LayoutAccessor_155cda0(a1 + 440, "Out", 0);
      v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 216LL))(a1);
      LODWORD(v13) = 1.0;
      LayoutAccessor_1562680(a1 + 168, v12, v13);
      v14 = *(_QWORD*)(a1 + 8);
      if (v14 == 0) {
        goto LABEL_52;
      }
      while (1) {
        if (*(_BYTE*)v14 == 2) {
          if (*(_DWORD*)(v14 + 32) == 7) {
          LABEL_51:
            *(_QWORD*)(a1 + 16) = v14;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            goto LABEL_52;
          }
        }
        else if (*(_BYTE*)v14 == 0) {
          goto LABEL_52;
        }
        v14 += 64;
      }
    }
    if (*(_QWORD*)(a1 + 944) != 0) {
      v10 = *(_QWORD*)(a1 + 8);
      if (v10 != 0) {
        while (1) {
          if (*(_BYTE*)v10 == 2) {
            if (*(_DWORD*)(v10 + 32) == 4) {
              goto LABEL_54;
            }
          }
          else if (*(_BYTE*)v10 == 0) {
            break;
          }
          v10 += 64;
        }
      }
    }
    else {
      v15 = *(unsigned __int8*)(a1 + 824);
      v16 = *(_QWORD*)(a1 + 832);
      if ((v15 & 1) == 0) {
        v16 = v15 >> 1;
      }
      if (v16 != 0) {
        v17 = (v15 & 1) != 0 ? *(_QWORD*)(a1 + 840) : a1 + 825;
        if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0], v17) &
             1) != 0) {
          v10 = *(_QWORD*)(a1 + 8);
          if (v10 == 0) {
            goto LABEL_55;
          }
          while (1) {
            if (*(_BYTE*)v10 == 2) {
              if (*(_DWORD*)(v10 + 32) == 5) {
              LABEL_54:
                *(_QWORD*)(a1 + 16) = v10;
                *(_WORD*)(a1 + 136) &= ~0x80u;
                goto LABEL_55;
              }
            }
            else if (*(_BYTE*)v10 == 0) {
              goto LABEL_55;
            }
            v10 += 64;
          }
        }
      }
      v18 = *(_DWORD*)(game_g_game_setting + 952);
      if ((v18 & 1) != 0 ||
          *(_BYTE*)(a1 + 336) == 1 &&
              ((v18 & 2) != 0 ||
               (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0)) {
        LayoutAccessor_155d940(a1 + 440);
        LayoutAccessor_155cda0(a1 + 440, "Out", 0);
        v14 = *(_QWORD*)(a1 + 8);
        if (v14 != 0) {
          while (1) {
            if (*(_BYTE*)v14 == 2) {
              if (*(_DWORD*)(v14 + 32) == 6) {
                goto LABEL_51;
              }
            }
            else if (*(_BYTE*)v14 == 0) {
              break;
            }
            v14 += 64;
          }
        }
      }
    LABEL_52:
      if (*(_DWORD*)(a1 + 320) == 2) {
        TelopSequence_1374cc0(a1, 1);
      }
    }
  }
LABEL_55:
  if (*(_BYTE*)(a1 + 335) == 1 &&
      (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
}

__int64 TelopResult_17609c0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;

  game_telop_TelopSequence_Unknown45();
  GameRoutine_174f600((__int64)(a1 + 123), 2);
  v2 = a1[141];
  if (a1[142] != v2) {
    v3 = 0;
    v4 = 0;
    do {
      GameRoutine_174e4e0(v2 + v3, 2);
      v2 = a1[141];
      ++v4;
      v3 += 184;
    } while (0xD37A6F4DE9BD37A7LL * ((a1[142] - v2) >> 3) > v4);
  }
  return (*(__int64 (**)(_QWORD*))(*a1 + 488LL))(a1);
}

__int64 TelopResult_1760aa0(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;

  if (*(int*)(*(_QWORD*)(a1 + 944) + 232LL) > 4 ||
      game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v7 = 2)
               : (v7 = 3),
           (v7 & v6) == 0)) {
    v2 = *(unsigned __int8*)(a1 + 824);
    v3 = *(_QWORD*)(a1 + 832);
    if ((v2 & 1) == 0) {
      v3 = v2 >> 1;
    }
    if (v3 != 0) {
      v4 = (v2 & 1) != 0 ? *(_QWORD*)(a1 + 840) : a1 + 825;
      if ((Registration_a4da40(*msg_MessageManager_instance__ptr[0], v4) & 1) !=
          0) {
        v5 = *(_QWORD*)(a1 + 8);
        if (v5 == 0) {
          return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
        }
        while (1) {
          if (*(_BYTE*)v5 == 2) {
            if (*(_DWORD*)(v5 + 32) == 5) {
              *(_QWORD*)(a1 + 16) = v5;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
            }
          }
          else if (*(_BYTE*)v5 == 0) {
            return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
          }
          v5 += 64;
        }
      }
    }
    v8 = *(_DWORD*)(game_g_game_setting + 952);
    if ((v8 & 1) != 0 ||
        *(_BYTE*)(a1 + 336) == 1 &&
            ((v8 & 2) != 0 ||
             (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0)) {
      LayoutAccessor_155d940(a1 + 440);
      LayoutAccessor_155cda0(a1 + 440, "Out", 0);
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 != 0) {
        while (1) {
          if (*(_BYTE*)v9 == 2) {
            if (*(_DWORD*)(v9 + 32) == 6) {
              *(_QWORD*)(a1 + 16) = v9;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v9 == 0) {
            break;
          }
          v9 += 64;
        }
      }
    }
    if (*(_DWORD*)(a1 + 320) == 2) {
      TelopSequence_1374cc0(a1, 1);
    }
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
}

#pragma GCC visibility pop
