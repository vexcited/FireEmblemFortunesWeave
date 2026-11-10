#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14877f0(_QWORD, _QWORD);
_QWORD* GameRoutine_15e59c0(_QWORD* result);
__int64 GameRoutine_1553220(_QWORD);
__int64 game_gameui_MenuAnimator_PlayOut(_QWORD, _QWORD, _QWORD);
extern __int64 game_g_game_setting;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
_QWORD* BasicInfo_15e5fa0(_QWORD* result);
_QWORD* BasicInfo_15e60c0(__int64 a1);
__int64 BasicInfo_15e6120(__int64** a1);

void __attribute__((noreturn)) BasicInfo_DeletingDestructor()
{
  __udf(0x8002u);
}

_QWORD* BasicInfo_15e5fa0(_QWORD* result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int16 v6;
  _QWORD* v7;
  __int64 v8;

  v2 = result[1];
  v1 = result[2];
  if (v2 <= v1) {
    while (*(_BYTE*)v1 != 2) {
      v1 -= 64LL;
      if (v2 > v1) {
        return result;
      }
    }
    if (*(_DWORD*)(v1 + 32) == 3) {
      v3 = result;
      (*(void (**)(_QWORD*))(*result + 304LL))(result);
      v4 = (*(__int64 (**)(_QWORD*))(*v3 + 176LL))(v3);
      if (v3[21] != 0) {
        v5 = (__int64*)v3[21];
      }
      else {
        v5 = ui_LayoutAccessor_empty__ptr[0];
      }
      result = (_QWORD*)game_gameui_MenuAnimator_PlayOut(v4, v5, 0);
      v6 = *((_WORD*)v3 + 68);
      v7 = v3;
      v3[23] = result;
      if ((v6 & 2) != 0 && *((_BYTE*)v3 + 204) == 1) {
        result = (_QWORD*)GameRoutine_1553220(*((unsigned int*)v3 + 50));
        v7 = v3;
        if (*((_BYTE*)v3 + 204) == 1) {
          *((_BYTE*)v3 + 204) = 0;
        }
      }
      v8 = v7[1];
      if (v8 != 0) {
        while (1) {
          if (*(_BYTE*)v8 == 2) {
            if (*(_DWORD*)(v8 + 32) == 4) {
              v7[2] = v8;
              *((_WORD*)v7 + 68) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v8 == 0) {
            break;
          }
          v8 += 64;
        }
      }
      *((_WORD*)v7 + 68) |= 8u;
    }
  }
  return result;
}

_QWORD* BasicInfo_15e60c0(__int64 a1)
{
  _QWORD* result;

  result = GameRoutine_15e59c0((_QWORD*)a1);
  if ((*(_WORD*)(a1 + 136) & 2) != 0 && *(_BYTE*)(a1 + 204) == 1) {
    result = (_QWORD*)GameRoutine_1553220(*(unsigned int*)(a1 + 200));
    if (*(_BYTE*)(a1 + 204) == 1) {
      *(_BYTE*)(a1 + 204) = 0;
    }
  }
  return result;
}

__int64 BasicInfo_15e6120(__int64** a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int16 v7;
  __int64* v8;

  result = ((__int64 (*)(__int64**))(*a1)[29])(a1);
  if (((_WORD)a1[17] & 2) == 0) {
    return result;
  }
  v3 = *(_DWORD*)(game_g_game_setting + 952);
  if ((v3 & 1) != 0) {
    result = ((__int64 (*)(__int64**))(*a1)[30])(a1);
    if ((_DWORD)result != 0) {
      goto LABEL_10;
    }
    v3 = *(_DWORD*)(game_g_game_setting + 952);
  }
  if ((v3 & 2) != 0) {
    result = ((__int64 (*)(__int64**))(*a1)[31])(a1);
    if ((_DWORD)result != 0) {
      goto LABEL_10;
    }
    v3 = *(_DWORD*)(game_g_game_setting + 952);
  }
  if ((v3 & 0x80) == 0) {
    return result;
  }
  result = ((__int64 (*)(__int64**))(*a1)[32])(a1);
LABEL_10:
  switch ((_DWORD)result) {
  case 1:
    return ((__int64 (*)(__int64**))(*a1)[35])(a1);
  case 2:
    v4 = 33;
    break;
  case 3:
    v4 = 34;
    break;
  default:
    if ((result & 0xFFFFFFFE) != 2) {
      return result;
    }
    goto LABEL_16;
  }
  ((void (*)(__int64**))(*a1)[v4])(a1);
LABEL_16:
  ((void (*)(__int64**))(*a1)[38])(a1);
  v5 = ((__int64 (*)(__int64**))(*a1)[22])(a1);
  if (a1[21] != nullptr) {
    v6 = a1[21];
  }
  else {
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
  result = game_gameui_MenuAnimator_PlayOut(v5, v6, 0);
  v7 = *((_WORD*)a1 + 68);
  a1[23] = (__int64*)result;
  if ((v7 & 2) != 0 && *((_BYTE*)a1 + 204) == 1) {
    result = GameRoutine_1553220(*((unsigned int*)a1 + 50));
    if (*((_BYTE*)a1 + 204) == 1) {
      *((_BYTE*)a1 + 204) = 0;
    }
  }
  v8 = a1[1];
  if (v8 != nullptr) {
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*((_DWORD*)v8 + 8) == 4) {
          a1[2] = v8;
          *((_WORD*)a1 + 68) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        break;
      }
      v8 += 8;
    }
  }
  *((_WORD*)a1 + 68) |= 8u;
  return result;
}

#pragma GCC visibility pop
