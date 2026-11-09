#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_55f130(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_55f150(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_55fc60(_QWORD, _QWORD);
__int64 GameRoutine_55feb0(_QWORD, _QWORD);
__int64 GameRoutine_55ffe0(void);
__int64 ResFontBase_DeletingDestructor(void);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
extern __int64 (*nn_font_ResFont_vtable[])();
__int64 ResFont_DeletingDestructor(_QWORD* a1);
_QWORD* ResFont_Unknown3(_QWORD* result);
__int64 ResFont_55eae0(__int64 a1, __int64 a2, unsigned int* a3, __int64 a4,
                       __int64 a5, __int64 a6);

__int64 ResFont_DeletingDestructor(_QWORD* a1)
{
  *a1 = nn_font_ResFont_vtable;
  return ResFontBase_DeletingDestructor();
}

_QWORD* ResFont_Unknown3(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;

  if (result[2] != 0) {
    v1 = result;
    GameRoutine_55ffe0();
    v2 = v1[2];
    v1[2] = 0;
    v1[4] = 0;
    v1[12] = 0;
    v1[13] = 0;
    v1[14] = 0;
    v1[15] = 0;
    return (_QWORD*)v2;
  }
  return result;
}

__int64 ResFont_55eae0(__int64 a1, __int64 a2, unsigned int* a3, __int64 a4,
                       __int64 a5, __int64 a6)
{
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  bool v10;
  int v11;
  _DWORD* v12;
  int* v13;
  int v17;
  __int64 v19;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  int* v28;
  int v31;
  __int64 v38;
  _QWORD v39[32];

  if (*(_QWORD*)(a1 + 16) != 0) {
    return 0;
  }
  v6 = a3[2];
  v7 = v6 & 0xFF000000;
  if ((v6 & 0xFF000000) == 0x5000000) {
    v8 = 83886080;
  }
  else {
    v8 = 67174400;
  }
  v9 = *a3;
  if (*a3 != 1414415942) {
    memset(v39, 0, sizeof(v39));
    nn_util_SNPrintf(
        v39, 256, "Signature check failed ('%c%c%c%c' must be '%c%c%c%c').",
        HIBYTE(v9), BYTE2(v9), BYTE1(v9), (unsigned __int8)v9, 84, 78, 70, 70);
    return 0;
  }
  v10 = *((__int16*)a3 + 2) == -257 && (v8 ^ v6) >> 24 == 0;
  if (!v10 || ((v8 & 0x10000) != 0) < (unsigned int)BYTE2(v6) || a3[3] < 0x24 ||
      *((unsigned __int16*)a3 + 8) < 2u) {
    return 0;
  }
  *(_BYTE*)(a1 + 260) = v7 == 83886080;
  v11 = *((unsigned __int16*)a3 + 8);
  if (v7 == 83886080) {
    if (*((_WORD*)a3 + 8) != 0) {
      v12 = nullptr;
      v13 = (int*)((char*)a3 + *((unsigned __int16*)a3 + 3));
      while (1) {
        v17 = *v13;
        if (*v13 > 1346456898) {
          break;
        }
        if (v17 == 1179535686) {
          v12 = v13 + 2;
          --v11;
          v13 = (int*)((char*)v13 + (unsigned int)v13[1]);
          if (v11 == 0) {
          LABEL_36:
            *(_QWORD*)(a1 + 24) = a3;
            if (v12 != nullptr) {
              v19 = a2;
              v25 = GameRoutine_55fc60(a3, 1196315211);
              v26 = a1;
              GameRoutine_55f150(a1, a3, v12, v25, a4, a5, a6);
              goto LABEL_59;
            }
            return 0;
          }
        }
        else {
          if (v17 != 1196315211 && v17 != 1212438339) {
            goto LABEL_60;
          }
        LABEL_27:
          --v11;
          v13 = (int*)((char*)v13 + (unsigned int)v13[1]);
          if (v11 == 0) {
            goto LABEL_36;
          }
        }
      }
      if (v17 != 1346456899 && v17 != 1347176276 && v17 != 1380404295) {
        goto LABEL_60;
      }
      goto LABEL_27;
    }
  LABEL_60:
    *(_QWORD*)(a1 + 24) = a3;
    return 0;
  }
  if (*((_WORD*)a3 + 8) == 0) {
    goto LABEL_60;
  }
  v27 = nullptr;
  v28 = (int*)((char*)a3 + *((unsigned __int16*)a3 + 3));
  do {
    while (1) {
      v31 = *v28;
      if (*v28 <= 1346456898) {
        break;
      }
      if (v31 != 1346456899 && v31 != 1347176276 && v31 != 1380404295) {
        goto LABEL_60;
      }
    LABEL_48:
      --v11;
      v28 = (int*)((char*)v28 + (unsigned int)v28[1]);
      if (v11 == 0) {
        goto LABEL_57;
      }
    }
    if (v31 != 1179535686) {
      if (v31 != 1196315211 && v31 != 1212438339) {
        goto LABEL_60;
      }
      goto LABEL_48;
    }
    v27 = v28 + 2;
    --v11;
    v28 = (int*)((char*)v28 + (unsigned int)v28[1]);
  } while (v11 != 0);

LABEL_57:
  *(_QWORD*)(a1 + 24) = a3;
  if (v27 == nullptr) {
    return 0;
  }
  v19 = a2;
  v38 = GameRoutine_55fc60(a3, 1196315211);
  v26 = a1;
  GameRoutine_55f130(a1, a3, v27, v38, a4, a5, a6);

LABEL_59:
  GameRoutine_55feb0(v26, v19);
  return 1;
}

#pragma GCC visibility pop
