#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_5768f0(_QWORD);
__int64 GameRoutine_55c190(_QWORD, float, float);
__int64 GameRoutine_55c5e0(_QWORD);
__int64 GameRoutine_55c5f0(_QWORD);
__int64 GameRoutine_55c640(_QWORD);
__int64 GameRoutine_55c6c0(_QWORD);
__int64 GameRoutine_55c6f0(_QWORD, _QWORD);
__int64 GameRoutine_55c7b0(_QWORD, _QWORD);
__int64 GameRoutine_566290(_QWORD);
__int64 GameRoutine_5662e0(_QWORD);
__int64 GameRoutine_5664a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_566d50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_566df0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_567c80(_QWORD);
__int64 GameRoutine_567cd0(_QWORD);
__int64 GameRoutine_567ea0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_568750(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5687f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_577d40(_QWORD, _QWORD);
__int64 GameRoutine_579180(__int64);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_5876c0(__int64 result, __int64);
__int64 GameRoutine_587770(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_58c720(__int64, __int64, __int64);
__int64 GameRoutine_58c820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58c850(void);
__int64 GameRoutine_58e740(__int64 result, __int64, __int64, char);
__int64 GameRoutine_59bff0(__int64, __int64, char);
__int64 GameRoutine_59d960(_QWORD, _QWORD, float);
__int64 GameRoutine_59f870(_QWORD, _QWORD, _QWORD);
__int64 Material_5882b0(__int64, __int64);
__int64 Pane_58dc00(__int64 result, __int64);
__int64 Pane_58f850(__int64);
__int64 Pane_58fd20(__int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_util_ConvertCharacterUtf8ToUtf32(_QWORD, _QWORD);
__int64 nn_util_PickOutCharacterFromUtf8String(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*nn_ui2d_TextBox_vtable[])();
float GameRoutine_59dbe0(void);
float GameRoutine_59de80(void);
__int64 TextBox_Unknown37(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5);
bool TextBox_Unknown48(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
bool TextBox_Unknown49(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
float TextBox_59b160(__int64 a1, __int64 a2);
void TextBox_59b4c0(__int64 a1, __int64 a2);
_QWORD* TextBox_59b5d0(__int64 a1, __int64 a2, __int64 a3);
__int64 TextBox_Destructor(_QWORD* a1);
__int64 TextBox_Unknown3(__int64 a1, __int64 a2);
__int64 TextBox_Unknown11(_QWORD* a1, int a2);
void TextBox_Unknown12(__int64 a1, float* a2);
__int64 TextBox_59b8f0(__int64 a1, __int64 a2);
float TextBox_Unknown14(__int64 a1);
__int64 TextBox_Unknown4(__int64 a1, int a2);
__int64 TextBox_Unknown5(__int64 result, int a2, unsigned __int8* a3);
__int64 TextBox_Unknown8(__int64 a1, int a2);
__int64 TextBox_Unknown9(__int64 result, int a2, unsigned __int8 a3);
__int64 TextBox_Unknown26(__int64 a1, __int64 a2, __int64 a3, char a4);
unsigned __int64 TextBox_59c560(unsigned __int64 result, __int64 a2);
unsigned __int64 TextBox_59c8e0(unsigned __int64 result, __int64 a2);
__int64 TextBox_Unknown28(__int64 result, __int64 a2, __int64 a3);
__int64 TextBox_Unknown38(__int64 a1, __int64 a2, __int64 a3);
__int64 TextBox_Unknown40(__int64 a1);
__int64 TextBox_Unknown41(__int64 a1, _WORD* a2, unsigned __int16 a3);
__int64 TextBox_Unknown42(__int64 a1, __int64 a2, unsigned __int16 a3);
__int64 TextBox_Unknown43(__int64 a1, __int64 a2, unsigned __int16 a3,
                          unsigned __int16 a4);
__int64 TextBox_Unknown44(__int64 a1, __int64 a2, unsigned __int16 a3,
                          unsigned __int16 a4);
__int64 TextBox_59d3c0(__int64 result, __int64 a2);
__int64 TextBox_59d8e0(__int64 result, int a2, float a3);
float TextBox_59d920(__int64 a1, int a2);
__int64 LayoutEx_579180(__int64);
__int64 LayoutEx_5791a0(__int64);
__int64 TextBox_55c600(_QWORD);
__int64 TextBox_55c650(_QWORD, _QWORD, _QWORD);
__int64 TextBox_55c6e0(_QWORD);
__int64 TextBox_Unknown39(__int64 result, __int64 a2, unsigned __int16 a3,
                          unsigned __int16 a4);
extern _UNKNOWN* GameData_2135448;
float GameRoutine_55c190_alt1(__int64, float,
                              float) __asm__("GameRoutine_55c190");
float Pane_58e030(__int64);
float fmodf(float, float);
float nn_ui2d_59f160(float*, int, float);
__attribute__((swiftcall)) void TextBox_Unknown45(PSEUDO_X8 x8_, __int64 a1);
float TextBox_59d550(__int64 a1, __int64 a2);
float TextBox_Unknown46(__int64 a1, __int64 a2);
float TextBox_Unknown47(__int64 a1, __int64 a2);
void TextBox_59d960(__int64 a1, __int64 a2, float a3);

__int64 TextBox_Unknown37(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5)
{
  __int64 v6;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int16 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;

  v6 = *(_QWORD*)(a4 + 24);
  if (v6 == 0) {
    goto LABEL_11;
  }
  if (*(_BYTE*)(a4 + 209) == 1) {
    v18 = 0;
    v20 = 0;
    v17 = 0;
    v19 = -1;
    if ((*(_BYTE*)a5 & 2) != 0) {
      v19 = *(_QWORD*)(a5 + 24);
    }
    (*(void (**)(__int64, __int64*, _QWORD, _QWORD, _QWORD*, _QWORD))(
        *(_QWORD*)v6 + 24LL))(v6, &v17, a1[28], *(_QWORD*)(a4 + 32), a1,
                              *(_QWORD*)(a5 + 8));
    if (((*(__int64 (**)(_QWORD*, __int64, __int64, __int64*))(*a1 + 392LL))(
             a1, a3, a4, &v17) &
         1) != 0) {
      goto LABEL_6;
    }
  LABEL_11:
    if (*(_QWORD*)(a5 + 24) <= (unsigned __int64)*(int*)(a5 + 32)) {
      v12 = *(int*)(a5 + 32);
    }
    else {
      v12 = *(_QWORD*)(a5 + 24);
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*a1 + 304LL))(a1, a3, v12);
    v11 = 0;
    if (*(int*)(a5 + 32) < 1) {
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  v18 = 0;
  v20 = 0;
  v17 = 0;
  v19 = -1;
  if ((*(_BYTE*)a5 & 2) != 0) {
    v19 = *(_QWORD*)(a5 + 24);
  }
  (*(void (**)(__int64, __int64*, _QWORD, _QWORD, _QWORD*, _QWORD))(
      *(_QWORD*)v6 + 16LL))(v6, &v17, a1[28], *(_QWORD*)(a4 + 32), a1,
                            *(_QWORD*)(a5 + 8));
  if (((*(__int64 (**)(_QWORD*, __int64, __int64, __int64*))(*a1 + 384LL))(
           a1, a3, a4, &v17) &
       1) == 0) {
    goto LABEL_11;
  }

LABEL_6:
  v11 = 1;
  if (*(int*)(a5 + 32) >= 1) {
  LABEL_15:
    if (a1[27] == 0) {
      v11 = 1;
    }
    if ((v11 & 1) == 0) {
      v13 = 344;
      if (*(_BYTE*)(a4 + 209) != 0) {
        v13 = 352;
      }
      (*(void (**)(_QWORD*, _QWORD, _QWORD))(*a1 + v13))(
          a1, *(_QWORD*)(a5 + 16), 0);
    }
  }

LABEL_21:
  v14 = a1[41];
  v17 = 0;
  v18 = 0;
  if (v14 != 0) {
    LODWORD(v14) = *(_DWORD*)(v14 + 152);
  }
  v19 = v14;
  v15 = *((_WORD*)a1 + 138);
  LOBYTE(v20) = (v15 & 8) != 0;
  BYTE1(v20) = (v15 & 0x20) != 0;
  BYTE2(v20) = (v15 & 0x80) != 0;
  HIBYTE(v20) = (v15 & 0x400) != 0;
  result = GameRoutine_55c6f0(a3, &v17);
  if (a2 != 0) {
    result = GameRoutine_59f870(a3, 16, result);
    *(_QWORD*)(a2 + 8) += result;
  }
  return result;
}

bool TextBox_Unknown48(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  _WORD* v4;
  __int64 v5;
  int v8;
  unsigned int v9;
  __int64 v10;

  v4 = *(_WORD**)a4;
  if (*(_QWORD*)a4 != 0) {
    LODWORD(v5) = *(unsigned __int16*)(a4 + 8);
    if (*(_WORD*)(a4 + 8) == 0) {
      if (*v4 != 0) {
        v5 = 0;
        do {
          v8 = (unsigned __int16)v4[++v5];
        } while (v8 != 0);
      }
      else {
        LODWORD(v5) = 0;
      }
    }
    v9 = *(_DWORD*)(a4 + 12);
    if (v9 != 0) {
      v10 = v9;
    }
    else {
      v10 = (unsigned int)v5;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*a1 + 304LL))(a1, a2, v10);
    if (a1[27] != 0) {
      (*(void (**)(_QWORD*, _QWORD, _QWORD, _QWORD))(*a1 + 344LL))(
          a1, *(_QWORD*)a4, 0, (unsigned int)v5);
    }
  }
  return v4 != nullptr;
}

bool TextBox_Unknown49(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE* v4;
  unsigned int v5;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v12;
  _BYTE* v13;

  v4 = *(_BYTE**)a4;
  if (*(_QWORD*)a4 != 0) {
    v5 = *(unsigned __int16*)(a4 + 8);
    if (*(_WORD*)(a4 + 8) == 0) {
      v13 = *(_BYTE**)a4;
      v8 = a2;
      if (*v4 != 0) {
        v5 = 0;
        v12 = 0;
        do {
          nn_util_PickOutCharacterFromUtf8String(&v12, &v13);
          ++v5;
        } while (*v13 != 0);
      }
      else {
        v5 = 0;
      }
      a2 = v8;
    }
    v9 = *(_DWORD*)(a4 + 12);
    if (v9 != 0) {
      v10 = v9;
    }
    else {
      v10 = v5;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*a1 + 304LL))(a1, a2, v10);
    if (a1[27] != 0) {
      (*(void (**)(_QWORD*, _QWORD, _QWORD, _QWORD))(*a1 + 352LL))(
          a1, *(_QWORD*)a4, 0, v5);
    }
  }
  return v4 != nullptr;
}

float TextBox_59b160(__int64 a1, __int64 a2)
{
  float result;

  if (*(_QWORD*)(a2 + 312) != 0) {
    *(_QWORD*)(a1 + 312) = GameRoutine_579180(16);
    *(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) = GameRoutine_579180(64);
    **(_QWORD**)(a1 + 312) = GameRoutine_579180(64);
    **(_DWORD**)(*(_QWORD*)(a1 + 312) + 8LL) =
        **(_DWORD**)(*(_QWORD*)(a2 + 312) + 8LL);
    ***(_DWORD***)(a1 + 312) = ***(_DWORD***)(a2 + 312);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 4LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 4LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 4LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 4LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 8LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 8LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 8LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 8LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 12LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 12LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 12LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 12LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 16LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 16LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 16LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 16LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 20LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 20LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 20LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 20LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 24LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 24LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 24LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 24LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 28LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 28LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 28LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 28LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 32LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 32LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 32LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 32LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 36LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 36LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 36LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 36LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 40LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 40LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 40LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 40LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 44LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 44LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 44LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 44LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 48LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 48LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 48LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 48LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 52LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 52LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 52LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 52LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 56LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 56LL);
    *(_DWORD*)(**(_QWORD**)(a1 + 312) + 56LL) =
        *(_DWORD*)(**(_QWORD**)(a2 + 312) + 56LL);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 312) + 8LL) + 60LL) =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 312) + 8LL) + 60LL);
    result = *(float*)(**(_QWORD**)(a2 + 312) + 60LL);
    *(float*)(**(_QWORD**)(a1 + 312) + 60LL) = result;
  }
  return result;
}

void TextBox_59b4c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)(a1 + 224) = *(_QWORD*)(a2 + 224);
  *(_QWORD*)(a1 + 240) = *(_QWORD*)(a2 + 240);
  *(_QWORD*)(a1 + 248) = *(_QWORD*)(a2 + 248);
  *(_DWORD*)(a1 + 256) = *(_DWORD*)(a2 + 256);
  *(_DWORD*)(a1 + 260) = *(_DWORD*)(a2 + 260);
  v4 = *(_QWORD*)(a2 + 264);
  *(_DWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 264) = v4;
  *(_WORD*)(a1 + 276) = *(_WORD*)(a2 + 276);
  *(_BYTE*)(a1 + 278) = *(_BYTE*)(a2 + 278);
  *(_BYTE*)(a1 + 279) = *(_BYTE*)(a2 + 279);
  *(_DWORD*)(a1 + 280) = *(_DWORD*)(a2 + 280);
  *(_QWORD*)(a1 + 284) = *(_QWORD*)(a2 + 284);
  *(_QWORD*)(a1 + 292) = *(_QWORD*)(a2 + 292);
  *(_DWORD*)(a1 + 300) = *(_DWORD*)(a2 + 300);
  *(_DWORD*)(a1 + 304) = *(_DWORD*)(a2 + 304);
  v5 = *(_DWORD*)(a2 + 308);
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 308) = v5;
  *(_DWORD*)(a1 + 232) = *(_DWORD*)(a2 + 232);
  *(_DWORD*)(a1 + 236) = *(_DWORD*)(a2 + 236);
  TextBox_59b160(a1, a2);
  v6 = *(_QWORD*)(a2 + 336);
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 18);
    if ((unsigned int)v7 <= 1) {
      v8 = 48;
    }
    else {
      v8 = 16 * v7 + 32;
    }
    v9 = GameRoutine_579180(v8);
    *(_QWORD*)(a1 + 336) = v9;
    memcpy(v9, *(_QWORD*)(a2 + 336), v8);
    *(_QWORD*)(*(_QWORD*)(a1 + 336) + 8LL) = 0;
  }
}

_QWORD* TextBox_59b5d0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* result;
  __int64 v13;
  _QWORD* v14;

  TextBox_59b4c0(a1, a2);
  v6 = *(unsigned __int16*)(a2 + 272);
  if (*(_WORD*)(a2 + 272) != 0) {
    v7 = v6 - 1;
  }
  else {
    v7 = 0;
  }
  if (v6 >= 2) {
    v8 = *(_QWORD*)(a2 + 328);
    if (v8 != 0) {
      v9 = *(unsigned int*)(v8 + 152);
    }
    else {
      v9 = 0;
    }
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)a1 + 312LL))(
        a1, a3, v7, v9);
    v10 = 344;
    if (*(_BYTE*)(a1 + 279) != 0) {
      v10 = 352;
    }
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + v10))(
        a1, *(_QWORD*)(a2 + 216), 0, *(unsigned __int16*)(a2 + 274));
  }
  v11 = *(_QWORD*)(a2 + 320);
  result = (_QWORD*)GameRoutine_579180(80);
  v14 = result;
  if (result != nullptr) {
    result = (_QWORD*)GameRoutine_587770(result, v11, a3, v13);
  }
  *(_QWORD*)(a1 + 320) = v14;
  return result;
}

__int64 TextBox_Destructor(_QWORD* a1)
{
  *a1 = nn_ui2d_TextBox_vtable;
  return GameRoutine_58c850();
}

__int64 TextBox_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  __int64 result;

  Pane_58dc00(a1, a2);
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 != 0 && (*(_BYTE*)(v4 + 73) & 1) == 0) {
    Material_5882b0(v4, a2);
    v5 = *(void (****)(_QWORD))(a1 + 320);
    if (v5 != nullptr) {
      (**v5)(*(_QWORD*)(a1 + 320));
      GameRoutine_5791a0((__int64)v5);
    }
    *(_QWORD*)(a1 + 320) = 0;
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 320LL))(a1, a2);
  v6 = *(_QWORD*)(a1 + 312);
  if (v6 != 0) {
    GameRoutine_5791a0(*(_QWORD*)(v6 + 8));
    GameRoutine_5791a0(**(_QWORD**)(a1 + 312));
    GameRoutine_5791a0(*(_QWORD*)(a1 + 312));
    *(_QWORD*)(a1 + 312) = 0;
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = GameRoutine_5791a0(result);
    *(_QWORD*)(a1 + 336) = 0;
  }
  return result;
}

__int64 TextBox_Unknown11(_QWORD* a1, int a2)
{
  (*(void (**)(_QWORD*))(*a1 + 80LL))(a1);
  if (a2 != 0) {
    return 0;
  }
  else {
    return a1[40];
  }
}

void TextBox_Unknown12(__int64 a1, float* a2)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(a1 + 98) & 2) != 0 &&
      (*(_BYTE*)(Pane_58f850(a1) + 552) & 2) != 0) {
    v11 = 0;
    v12 = 0;
    TextBox_59b8f0(a1, &v11);
    v5 = fabsf(*(float*)(a1 + 80));
    if (v5 >= (float)(*(float*)&v12 - *(float*)&v11)) {
      v6 = v5;
    }
    else {
      v6 = *(float*)&v12 - *(float*)&v11;
    }
    v7 = (*(float (**)(__int64))(*(_QWORD*)a1 + 112LL))(a1);
    v8 = *((float*)&v11 + 1);
    v9 = *((float*)&v12 + 1);
    *a2 = v6 + (float)(v7 * 2.0);
    v10 = v9 - v8;
    v4 = fabsf(*(float*)(a1 + 84));
    if (v4 < v10) {
      v4 = v10;
    }
  }
  else {
    *a2 = fabsf(*(float*)(a1 + 80));
    v4 = fabsf(*(float*)(a1 + 84));
  }
  a2[1] = v4;
}

__int64 TextBox_59b8f0(__int64 a1, __int64 a2)
{
  __int16 v4;
  int v5;
  bool v6;
  __int64 v7;
  float v8;
  int v9;
  bool v10;
  __int16 v12;
  int v13;
  bool v14;
  __int64 v15;
  float v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int128 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  if (*(_BYTE*)(a1 + 279) == 1) {
    v28 = 0;
    v29 = 0;
    v26 = 0;
    v27 = 0;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    v21 = 0;
    v19 = 0;
    v20 = 0u;
    v18 = 0;
    GameRoutine_566290(&v18);
    v4 = *(_WORD*)(a1 + 276);
    v5 = *(_DWORD*)(a1 + 280);
    *(_QWORD*)((char*)&v20 + 4) = 0;
    v6 = (v4 & 0x100) != 0;
    BYTE2(v29) = (v4 & 0x4000) != 0;
    v7 = *(_QWORD*)(a1 + 240);
    LOBYTE(v29) = v6;
    HIDWORD(v21) = v5;
    v22 = v7;
    if (v7 != 0) {
      GameRoutine_55c190(&v18, *(float*)(a1 + 248), *(float*)(a1 + 252));
      v8 = *(float*)(a1 + 80);
      v9 = *(_DWORD*)(a1 + 256);
      v10 = (*(_WORD*)(a1 + 276) & 0x40) == 0;
      LODWORD(v25) = *(_DWORD*)(a1 + 260);
      HIDWORD(v25) = v9;
      if (v10) {
        v8 = 3.4028e38;
      }
      *((float*)&v24 + 1) = v8;
    }
    if (*(_QWORD*)(a1 + 264) != 0) {
      v28 = *(_QWORD*)(a1 + 264);
    }
    GameRoutine_5664a0(&v18, a2, *(_QWORD*)(a1 + 216),
                       *(unsigned __int16*)(a1 + 274));
    return GameRoutine_5662e0(&v18);
  }
  else {
    v28 = 0;
    v29 = 0;
    v26 = 0;
    v27 = 0;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    v21 = 0;
    v19 = 0;
    v20 = 0u;
    v18 = 0;
    GameRoutine_567c80(&v18);
    v12 = *(_WORD*)(a1 + 276);
    v13 = *(_DWORD*)(a1 + 280);
    *(_QWORD*)((char*)&v20 + 4) = 0;
    v14 = (v12 & 0x100) != 0;
    BYTE2(v29) = (v12 & 0x4000) != 0;
    v15 = *(_QWORD*)(a1 + 240);
    LOBYTE(v29) = v14;
    HIDWORD(v21) = v13;
    v22 = v15;
    if (v15 != 0) {
      GameRoutine_55c190(&v18, *(float*)(a1 + 248), *(float*)(a1 + 252));
      v16 = *(float*)(a1 + 80);
      v17 = *(_DWORD*)(a1 + 256);
      v10 = (*(_WORD*)(a1 + 276) & 0x40) == 0;
      LODWORD(v25) = *(_DWORD*)(a1 + 260);
      HIDWORD(v25) = v17;
      if (v10) {
        v16 = 3.4028e38;
      }
      *((float*)&v24 + 1) = v16;
    }
    if (*(_QWORD*)(a1 + 264) != 0) {
      v28 = *(_QWORD*)(a1 + 264);
    }
    GameRoutine_567ea0(&v18, a2, *(_QWORD*)(a1 + 216),
                       *(unsigned __int16*)(a1 + 274));
    return GameRoutine_567cd0(&v18);
  }
}

float TextBox_Unknown14(__int64 a1)
{
  float v1;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;

  v1 = 0.0;
  if ((*(_BYTE*)(a1 + 98) & 2) != 0 &&
      (*(_BYTE*)(Pane_58f850(a1) + 552) & 2) != 0) {
    v3 = *(float*)(a1 + 308);
    if ((*(_WORD*)(a1 + 276) & 8) == 0) {
      v3 = 0.0;
    }
    v4 = *(float*)(a1 + 280);
    v5 = fabsf(v3);
    v6 = fabsf(v4);
    v7 = v4 + v3;
    if (v6 >= v5) {
      v8 = v6;
    }
    else {
      v8 = v5;
    }
    if (v7 >= v8) {
      v9 = v6 + v5;
    }
    else {
      v9 = v8;
    }
    return *(float*)(a1 + 248) * v9;
  }
  return v1;
}

__int64 TextBox_Unknown4(__int64 a1, int a2)
{
  return *(unsigned int*)(a1 + 4LL * (a2 / 2) + 232);
}

__int64 TextBox_Unknown5(__int64 result, int a2, unsigned __int8* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int16 v6;

  v3 = result + 4LL * (a2 / 2);
  v5 = *(unsigned __int8*)(v3 + 232);
  v4 = v3 + 232;
  if (v5 == *a3 && *(unsigned __int8*)(v4 + 1) == a3[1] &&
      *(unsigned __int8*)(v4 + 2) == a3[2]) {
    if (*(unsigned __int8*)(v4 + 3) == a3[3]) {
      v6 = *(_WORD*)(result + 276) & 4;
    }
    else {
      v6 = 4;
    }
    *(_WORD*)(result + 276) = v6 | *(_WORD*)(result + 276) & 0xFFFB;
    *(_DWORD*)v4 = *(_DWORD*)a3;
  }
  else {
    *(_WORD*)(result + 276) = *(_WORD*)(result + 276) & 0xFFFB | 4;
    *(_DWORD*)v4 = *(_DWORD*)a3;
  }
  return result;
}

__int64 TextBox_Unknown8(__int64 a1, int a2)
{
  int v2;

  if (a2 <= 0) {
    v2 = -(-a2 & 3);
  }
  else {
    v2 = a2 & 3;
  }
  return *(unsigned __int8*)(a1 + 4LL * (a2 / 8) + v2 + 232);
}

__int64 TextBox_Unknown9(__int64 result, int a2, unsigned __int8 a3)
{
  int v3;
  __int64 v4;
  __int16 v5;

  if (a2 <= 0) {
    v3 = -(-a2 & 3);
  }
  else {
    v3 = a2 & 3;
  }
  v4 = result + 4LL * (a2 / 8) + v3;
  if (*(unsigned __int8*)(v4 + 232) == a3) {
    v5 = *(_WORD*)(result + 276) & 4;
  }
  else {
    v5 = 4;
  }
  *(_WORD*)(result + 276) = v5 | *(_WORD*)(result + 276) & 0xFFFB;
  *(_BYTE*)(v4 + 232) = a3;
  return result;
}

__attribute__((swiftcall)) void TextBox_Unknown45(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  unsigned int v15;
  int v16;
  __int16 v17;
  int v18;
  float v19;
  float v20;

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  if (v3 != 0) {
    TextBox_59b8f0(a1, a2),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    v5 = *(float*)(a2 + 8) - *(float*)a2;
    v6 = *(float*)(a2 + 12) - *(float*)(a2 + 4);
    v7 = Pane_58e030(a1),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
    v9 = 0x0.0p+0f;
    v10 = 0x0.0p+0f;
    v11 = 0x0.0p+0f;
    v12 = 0x0.0p+0f;
    if (*(_QWORD*)(a1 + 312) != 0) {
    LABEL_3:
      v13 = v7 + (float)(v10 - v12);
      v14 = v8 - (float)(v9 - v11);
      *(float*)a2 = v13;
      *(float*)(a2 + 4) = v14;
      *(float*)(a2 + 8) = v5 + v13;
      *(float*)(a2 + 12) = v14 - v6;
      return;
    }
    v15 = *(unsigned __int8*)(a1 + 278);
    v16 = v15 & 3;
    if (v16 == 2) {
      v10 = *(float*)(a1 + 80);
      v17 = *(_WORD*)(a1 + 276);
      v18 = (v15 >> 2) & 3;
      if ((v17 & 0x1000) != 0) {
        v18 = 0;
      }
      if (v18 != 2) {
      LABEL_11:
        v9 = 0x0.0p+0f;
        if (v18 == 0) {
          v9 = *(float*)(a1 + 84) * 0x1.0000000000000p-1f;
        }
        if (v16 != 2) {
        LABEL_14:
          v12 = 0x0.0p+0f;
          if (v16 == 0) {
            v12 = v5 * 0x1.0000000000000p-1f;
            v19 = ceilf(v5 * 0x1.0000000000000p-1f);
            if ((v17 & 0x100) != 0) {
              v12 = v19;
            }
          }
          if (v18 != 2) {
            goto LABEL_18;
          }
          goto LABEL_27;
        }
      LABEL_26:
        v12 = v5;
        if (v18 != 2) {
        LABEL_18:
          v11 = 0x0.0p+0f;
          if (v18 == 0) {
            v11 = v6 * 0x1.0000000000000p-1f;
            v20 = ceilf(v6 * 0x1.0000000000000p-1f);
            if ((v17 & 0x100) != 0) {
              v11 = v20;
            }
          }
          goto LABEL_3;
        }
      LABEL_27:
        v11 = v6;
        goto LABEL_3;
      }
    }
    else {
      if ((v15 & 3) == 0) {
        v10 = *(float*)(a1 + 80) * 0x1.0000000000000p-1f;
      }
      v17 = *(_WORD*)(a1 + 276);
      v18 = (v15 >> 2) & 3;
      if ((v17 & 0x1000) != 0) {
        v18 = 0;
      }
      if (v18 != 2) {
        goto LABEL_11;
      }
    }
    v9 = *(float*)(a1 + 84);
    if (v16 != 2) {
      goto LABEL_14;
    }
    goto LABEL_26;
  }
}

__int64 TextBox_Unknown26(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result;
  bool v7;
  __int16 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
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
  __int64 v25;
  __int64 v26;
  __int64 v27;

  result = GameRoutine_58e740(a1, a2, a3, a4);
  v7 = *(_WORD*)(a1 + 274) == 0 || *(_QWORD*)(a1 + 240) == 0;
  if (v7 || *(_QWORD*)(a1 + 320) == 0) {
    *(_BYTE*)(a1 + 92) &= ~0x10u;
  }
  else {
    result = Pane_58fd20(a1);
    if ((result & 1) == 0) {
      GameRoutine_55c7b0(*(_QWORD*)(a1 + 328), *(_QWORD*)(a2 + 208));
      GameRoutine_5876c0(*(_QWORD*)(a1 + 320), a2);
      v8 = *(_WORD*)(a1 + 276);
      if ((v8 & 4) != 0) {
        *(_WORD*)(a1 + 276) = v8 & 0xFFFB;
        if (*(_BYTE*)(a1 + 279) == 1) {
          v26 = 0;
          v27 = 0;
          v24 = 0;
          v25 = 0;
          v22 = 0;
          v23 = 0;
          v20 = 0;
          v21 = 0;
          v18 = 0;
          v19 = 0;
          v16 = 0;
          v17 = 0;
          v15 = 0;
          GameRoutine_566290(&v15);
          LOBYTE(v27) = *(_BYTE*)(a1 + 277) & 1;
          (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 376LL))(a1, &v15);
          v21 = *(_QWORD*)(a1 + 328);
          GameRoutine_55c5e0(&v15);
          v9 = *(_QWORD**)(a1 + 312);
          v10 = *(_QWORD*)(a1 + 216);
          v11 = *(unsigned __int16*)(a1 + 274);
          if (v9 != nullptr) {
            GameRoutine_566df0(&v15, v10, v11, 16, v9[1], *v9);
          }
          else {
            GameRoutine_566d50(&v15, v10, v11);
          }
          GameRoutine_55c5f0(&v15);
          if ((*(_WORD*)(a1 + 276) & 0x80) != 0) {
            TextBox_59c560(a1, v26);
          }
          GameRoutine_5662e0(&v15);
        }
        else {
          v26 = 0;
          v27 = 0;
          v24 = 0;
          v25 = 0;
          v22 = 0;
          v23 = 0;
          v20 = 0;
          v21 = 0;
          v18 = 0;
          v19 = 0;
          v16 = 0;
          v17 = 0;
          v15 = 0;
          GameRoutine_567c80(&v15);
          LOBYTE(v27) = *(_BYTE*)(a1 + 277) & 1;
          (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 368LL))(a1, &v15);
          v21 = *(_QWORD*)(a1 + 328);
          GameRoutine_55c5e0(&v15);
          v12 = *(_QWORD**)(a1 + 312);
          v13 = *(_QWORD*)(a1 + 216);
          v14 = *(unsigned __int16*)(a1 + 274);
          if (v12 != nullptr) {
            GameRoutine_5687f0(&v15, v13, v14, 16, v12[1], *v12);
          }
          else {
            GameRoutine_568750(&v15, v13, v14);
          }
          GameRoutine_55c5f0(&v15);
          if ((*(_WORD*)(a1 + 276) & 0x80) != 0) {
            TextBox_59c8e0(a1, v26);
          }
          GameRoutine_567cd0(&v15);
        }
        return GameRoutine_59bff0(a1, a2, 1);
      }
      else {
        return GameRoutine_59bff0(a1, a2, 0);
      }
    }
  }
  return result;
}

unsigned __int64 TextBox_59c560(unsigned __int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v4;
  float v5;
  __int64 v6;
  int v7;
  float v8;
  float v9;
  int v10;
  float v11;
  int v12;
  unsigned int v13;
  unsigned __int64 v14;
  __int64 v15;
  float v16;
  bool v17;
  unsigned __int64 v18;
  float v19;
  unsigned int v20;
  float v21;
  int v22;
  float v23;
  float v24;
  float v25;
  _BYTE v27[4];
  unsigned __int64 v28;
  unsigned int v29;
  int v30;

  v2 = *(unsigned int*)(*(_QWORD*)(result + 328) + 156LL);
  if ((_DWORD)v2 != 0) {
    v4 = result;
    v5 = GameRoutine_59dbe0();
    v6 = *(_QWORD*)(v4 + 336);
    v7 = *(unsigned __int16*)(v4 + 276);
    v8 = v5;
    v9 = *(float*)v6;
    if ((~v7 & 0x9000) != 0) {
      if ((~v7 & 0x3000) == 0) {
        v12 = *(_DWORD*)(v6 + 28);
        v13 = *(_DWORD*)(*(_QWORD*)(v4 + 328) + 156LL);
        if (v12 == 2) {
          v9 = (float)(v9 + *(float*)(v6 + 4)) -
               (float)(*(float*)(v6 + 24) * (float)v13);
          goto LABEL_13;
        }
        if (v12 == 1) {
          v11 = *(float*)(v6 + 4) - (float)(*(float*)(v6 + 24) * (float)v13);
          goto LABEL_10;
        }
      }
    }
    else {
      v10 = *(_DWORD*)(v6 + 28);
      if (v10 == 2) {
        v9 = (float)(v9 + *(float*)(v6 + 4)) - (float)(v5 * 0.0);
        goto LABEL_13;
      }
      if (v10 == 1) {
        v11 = *(float*)(v6 + 4) - (float)(v5 * 0.0);
      LABEL_10:
        v9 = v9 + (float)(v11 * 0.5);
      }
    }
  LABEL_13:
    v14 = *(_QWORD*)(v4 + 216);
    v15 = 0;
    v16 = v8 * 0.5;
    while (1) {
      if ((~v7 & 0x9000) != 0) {
        if ((~v7 & 0x3000) == 0) {
          v9 = v16 + v9;
        LABEL_29:
          v23 = 0.0;
          goto LABEL_30;
        }
        if ((v7 & 0x200) == 0) {
          v9 = **(float**)(v4 + 336) + (float)(v8 * (float)(unsigned int)v15);
          goto LABEL_29;
        }
        v27[0] = 0;
        while (1) {
          result = (*(__int64 (**)(__int64, _BYTE*, unsigned __int64))(
              *(_QWORD*)a2 + 112LL))(a2, v27, v14);
          if ((v27[0] & 1) != 0) {
            break;
          }
          v17 = result > v14;
          v14 = result;
          if (!v17 ||
              result > *(_QWORD*)(v4 + 216) +
                           (unsigned __int64)*(unsigned __int16*)(v4 + 274)) {
            return result;
          }
        }
        v28 = v14;
        v14 = result;
        v30 = 0;
        nn_util_PickOutCharacterFromUtf8String(&v30, &v28);
        v29 = 0;
        result = nn_util_ConvertCharacterUtf8ToUtf32(&v29, &v30);
        if (v14 == 0) {
          return result;
        }
        v23 = *(float*)(v4 + 260) +
              (float)(*(int (**)(_QWORD, _QWORD))(
                  **(_QWORD**)(v4 + 240) + 128LL))(*(_QWORD*)(v4 + 240), v29);
        if ((*(_WORD*)(v4 + 276) & 0x1000) != 0) {
          v9 = v9 + (float)((float)(v8 * v23) * 0.5);
        }
        else if (v15 != 0) {
          v9 = v9 + (float)(v23 * v8);
        }
      }
      else {
        v27[0] = 0;
        while (1) {
          result = (*(__int64 (**)(__int64, _BYTE*, unsigned __int64))(
              *(_QWORD*)a2 + 112LL))(a2, v27, v14);
          if ((v27[0] & 1) != 0) {
            break;
          }
          v17 = result > v14;
          v14 = result;
          v17 = !v17 ||
                result > *(_QWORD*)(v4 + 216) +
                             (unsigned __int64)*(unsigned __int16*)(v4 + 274);
          if (v17) {
            return result;
          }
        }
        v18 = result;
        v28 = v14;
        v30 = 0;
        nn_util_PickOutCharacterFromUtf8String(&v30, &v28);
        v29 = 0;
        result = nn_util_ConvertCharacterUtf8ToUtf32(&v29, &v30);
        if (v18 == 0) {
          return result;
        }
        v19 = *(float*)(v4 + 248);
        v20 = v29;
        v21 = v19 / (float)(*(int (**)(_QWORD))(**(_QWORD**)(v4 + 240) + 32LL))(
                        *(_QWORD*)(v4 + 240));
        v22 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v4 + 240) + 128LL))(
            *(_QWORD*)(v4 + 240), v20);
        v14 = v18;
        v23 = v21 * (float)(*(float*)(v4 + 260) + (float)v22);
        v9 = v9 + (float)((float)(v8 * v23) * 0.5);
      }
    LABEL_30:
      result = GameRoutine_59d960(
          v4, *(_QWORD*)(*(_QWORD*)(v4 + 336) + 8LL) + 52 * v15, v9);
      v7 = *(unsigned __int16*)(v4 + 276);
      v24 = v8 * v23;
      if ((~v7 & 0x9000) != 0) {
        v25 = v9 + (float)(v24 * 0.5);
        if ((~v7 & 0x1200) != 0) {
          v25 = v9;
        }
        if ((~v7 & 0x3000) != 0) {
          v9 = v25;
        }
        else {
          v9 = v16 + v9;
        }
        if (++v15 == v2) {
          return result;
        }
      }
      else {
        v9 = v9 + (float)(v24 * 0.5);
        if (++v15 == v2) {
          return result;
        }
      }
    }
  }
  return result;
}

unsigned __int64 TextBox_59c8e0(unsigned __int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v4;
  float v5;
  __int64 v6;
  int v7;
  float v8;
  float v9;
  int v10;
  float v11;
  int v12;
  unsigned int v13;
  unsigned __int16* v14;
  __int64 v15;
  float v16;
  bool v17;
  float v18;
  unsigned int v19;
  unsigned __int16* v20;
  float v21;
  float v22;
  float v23;
  float v24;
  char v26[4];
  char v27[4];

  v2 = *(unsigned int*)(*(_QWORD*)(result + 328) + 156LL);
  if ((_DWORD)v2 != 0) {
    v4 = result;
    v5 = GameRoutine_59de80();
    v6 = *(_QWORD*)(v4 + 336);
    v7 = *(unsigned __int16*)(v4 + 276);
    v8 = v5;
    v9 = *(float*)v6;
    if ((~v7 & 0x9000) != 0) {
      if ((~v7 & 0x3000) == 0) {
        v12 = *(_DWORD*)(v6 + 28);
        v13 = *(_DWORD*)(*(_QWORD*)(v4 + 328) + 156LL);
        if (v12 == 2) {
          v9 = (float)(v9 + *(float*)(v6 + 4)) -
               (float)(*(float*)(v6 + 24) * (float)v13);
          goto LABEL_13;
        }
        if (v12 == 1) {
          v11 = *(float*)(v6 + 4) - (float)(*(float*)(v6 + 24) * (float)v13);
          goto LABEL_10;
        }
      }
    }
    else {
      v10 = *(_DWORD*)(v6 + 28);
      if (v10 == 2) {
        v9 = (float)(v9 + *(float*)(v6 + 4)) - (float)(v5 * 0.0);
        goto LABEL_13;
      }
      if (v10 == 1) {
        v11 = *(float*)(v6 + 4) - (float)(v5 * 0.0);
      LABEL_10:
        v9 = v9 + (float)(v11 * 0.5);
      }
    }
  LABEL_13:
    v14 = *(unsigned __int16**)(v4 + 216);
    v15 = 0;
    v16 = v8 * 0.5;
    while (1) {
      if ((~v7 & 0x9000) != 0) {
        if ((~v7 & 0x3000) == 0) {
          v9 = v16 + v9;
        LABEL_30:
          v22 = 0.0;
          goto LABEL_31;
        }
        if ((v7 & 0x200) == 0) {
          v9 = **(float**)(v4 + 336) + (float)(v8 * (float)(unsigned int)v15);
          goto LABEL_30;
        }
        v27[0] = 0;
        while (1) {
          result = (*(__int64 (**)(__int64, char*, unsigned __int16*))(
              *(_QWORD*)a2 + 112LL))(a2, v27, v14);
          if ((v27[0] & 1) != 0) {
            break;
          }
          v17 = result > (unsigned __int64)v14;
          v14 = (unsigned __int16*)result;
          if (!v17 || result > *(_QWORD*)(v4 + 216) +
                                   2 * (unsigned __int64)*(
                                           unsigned __int16*)(v4 + 274)) {
            return result;
          }
        }
        if (result == 0) {
          return result;
        }
        v20 = (unsigned __int16*)result;
        v22 = *(float*)(v4 + 260) +
              (float)(*(int (**)(_QWORD, _QWORD))(
                  **(_QWORD**)(v4 + 240) + 128LL))(*(_QWORD*)(v4 + 240), *v14);
        if ((*(_WORD*)(v4 + 276) & 0x1000) == 0) {
          v14 = v20;
          if (v15 != 0) {
            v9 = v9 + (float)(v22 * v8);
          }
          goto LABEL_31;
        }
      }
      else {
        v26[0] = 0;
        while (1) {
          result = (*(__int64 (**)(__int64, char*, unsigned __int16*))(
              *(_QWORD*)a2 + 112LL))(a2, v26, v14);
          if ((v26[0] & 1) != 0) {
            break;
          }
          v17 = result > (unsigned __int64)v14;
          v14 = (unsigned __int16*)result;
          v17 = !v17 || result > *(_QWORD*)(v4 + 216) +
                                     2 * (unsigned __int64)*(
                                             unsigned __int16*)(v4 + 274);
          if (v17) {
            return result;
          }
        }
        if (result == 0) {
          return result;
        }
        v18 = *(float*)(v4 + 248);
        v19 = *v14;
        v20 = (unsigned __int16*)result;
        v21 = v18 /
              (float)(int)X8CALL_X0(
                  _QWORD*,
                  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                      **(_QWORD**)(v4 + 240) + 32LL))(
                      (void*)*(_QWORD**)(v4 + 240), *(_QWORD*)(v4 + 240)));
        v22 = v21 * (float)(*(float*)(v4 + 260) +
                            (float)(*(int (**)(_QWORD, _QWORD))(
                                **(_QWORD**)(v4 + 240) + 128LL))(
                                *(_QWORD*)(v4 + 240), v19));
      }
      v14 = v20;
      v9 = v9 + (float)((float)(v8 * v22) * 0.5);
    LABEL_31:
      result = GameRoutine_59d960(
          v4, *(_QWORD*)(*(_QWORD*)(v4 + 336) + 8LL) + 52 * v15, v9);
      v7 = *(unsigned __int16*)(v4 + 276);
      v23 = v8 * v22;
      if ((~v7 & 0x9000) != 0) {
        v24 = v9 + (float)(v23 * 0.5);
        if ((~v7 & 0x1200) != 0) {
          v24 = v9;
        }
        if ((~v7 & 0x3000) != 0) {
          v9 = v24;
        }
        else {
          v9 = v16 + v9;
        }
        if (++v15 == v2) {
          return result;
        }
      }
      else {
        v9 = v9 + (float)(v23 * 0.5);
        if (++v15 == v2) {
          return result;
        }
      }
    }
  }
  return result;
}

__int64 TextBox_Unknown28(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;

  if (*(_WORD*)(result + 274) != 0 && *(_QWORD*)(result + 240) != 0) {
    v4 = result;
    result = *(_QWORD*)(result + 320);
    if (result != 0) {
      GameRoutine_58c720(result, a3, a2);
      if ((*(_BYTE*)(v4 + 98) & 2) != 0) {
        v7 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), 1);
        GameRoutine_58c820(a3, a2, v7);
      }
      v8 = *(_QWORD*)(*(_QWORD*)(a2 + 184) + 128LL);
      DrawInfo_5768f0(a2);
      result = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)v8 + 40LL))(
          v8, a3, *(_QWORD*)(v4 + 328));
      *(_BYTE*)(a2 + 404) |= 0x40u;
    }
  }
  return result;
}

__int64 TextBox_Unknown38(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
      *(_QWORD*)a1 + 312LL))(a1, a2, a3, (unsigned int)a3);
}

__int64 TextBox_Unknown39(__int64 result, __int64 a2, unsigned __int16 a3,
                          unsigned __int16 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int16 v23;
  _QWORD v24[2];
  unsigned int v25;
  bool v26;
  bool v27;
  bool v28;
  bool v29;
  _QWORD v30[2];
  unsigned int v31;
  int v32;
  __int64 v33;
  __int64 v34;

  if (a3 == 0) {
    return result;
  }
  v33 = v4;
  v34 = v5;
  v6 = a4;
  if (a4 == 0) {
    return result;
  }
  v7 = result;
  if (a3 < (unsigned int)*(unsigned __int16*)(result + 272)) {
    v8 = *(_QWORD*)(result + 328);
    if (v8 != 0 && *(_DWORD*)(v8 + 152) >= (int)a4) {
      return result;
    }
  }
  v10 = (unsigned int)a3 + 1;
  (*(void (**)(__int64))(*(_QWORD*)result + 320LL))(result);
  v30[1] = 0;
  v32 = 0;
  v30[0] = 0;
  v31 = v6;
  v11 = TextBox_55c6e0(v30);
  v12 = 1;
  if (*(_BYTE*)(v7 + 279) != 0) {
    v12 = 2;
  }
  v13 = LayoutEx_579180(v10 << v12);
  result = LayoutEx_579180(v11 + 192);
  v14 = result;
  if (*(_QWORD*)(v7 + 336) != 0) {
    result = LayoutEx_579180(52LL * v6);
    if (result != 0) {
      v15 = v6 & 3;
      if (v6 - 1 >= 3) {
        v17 = result + 104;
        v18 = 0;
        do {
          *(_QWORD*)(v17 - 104) = 0x3F8000003F800000LL;
          *(_DWORD*)(v17 - 96) = 1065353216;
          v18 -= 4;
          *(_DWORD*)(v17 - 84) = 0;
          *(_QWORD*)(v17 - 92) = 0x3F8000003F800000LL;
          *(_QWORD*)(v17 - 80) = 0;
          *(_QWORD*)(v17 - 72) = 0;
          *(_QWORD*)(v17 - 64) = 0xFFFFFFFF00000000LL;
          *(_DWORD*)(v17 - 56) = -1;
          *(_QWORD*)(v17 - 52) = 0x3F8000003F800000LL;
          *(_QWORD*)(v17 - 44) = 0x3F8000003F800000LL;
          *(_QWORD*)(v17 - 32) = 0;
          *(_QWORD*)(v17 - 20) = 0;
          *(_DWORD*)(v17 - 36) = 1065353216;
          *(_DWORD*)(v17 - 24) = 0;
          *(_QWORD*)(v17 - 12) = 0xFFFFFFFF00000000LL;
          *(_DWORD*)(v17 - 4) = -1;
          *(_QWORD*)v17 = 0x3F8000003F800000LL;
          *(_DWORD*)(v17 + 8) = 1065353216;
          *(_DWORD*)(v17 + 20) = 0;
          *(_QWORD*)(v17 + 12) = 0x3F8000003F800000LL;
          *(_QWORD*)(v17 + 24) = 0;
          *(_QWORD*)(v17 + 32) = 0;
          *(_QWORD*)(v17 + 40) = 0xFFFFFFFF00000000LL;
          *(_DWORD*)(v17 + 48) = -1;
          *(_QWORD*)(v17 + 52) = 0x3F8000003F800000LL;
          *(_DWORD*)(v17 + 60) = 1065353216;
          *(_DWORD*)(v17 + 72) = 0;
          *(_QWORD*)(v17 + 84) = 0;
          *(_QWORD*)(v17 + 64) = 0x3F8000003F800000LL;
          *(_QWORD*)(v17 + 76) = 0;
          *(_QWORD*)(v17 + 92) = 0xFFFFFFFF00000000LL;
          *(_DWORD*)(v17 + 100) = -1;
          v17 += 208;
        } while (-(__int64)((unsigned __int16)v6 & 0xFFFC) != v18);
        v16 = -v18;
        if ((v6 & 3) == 0) {
          goto LABEL_18;
        }
      }
      else {
        v16 = 0;
        if ((v6 & 3) == 0) {
          goto LABEL_18;
        }
      }
      v19 = result + 52 * v16 + 24;
      do {
        *(_QWORD*)(v19 - 24) = 0x3F8000003F800000LL;
        *(_DWORD*)(v19 - 16) = 1065353216;
        --v15;
        *(_DWORD*)(v19 - 4) = 0;
        *(_QWORD*)(v19 - 12) = 0x3F8000003F800000LL;
        *(_QWORD*)v19 = 0;
        *(_QWORD*)(v19 + 8) = 0;
        *(_QWORD*)(v19 + 16) = 0xFFFFFFFF00000000LL;
        *(_DWORD*)(v19 + 24) = -1;
        v19 += 52;
      } while (v15 != 0);
    }
  LABEL_18:
    *(_QWORD*)(*(_QWORD*)(v7 + 336) + 8LL) = result;
  }
  if (v13 == 0 || v14 == 0) {
    if (v13 == 0) {
      if (v14 == 0) {
        goto LABEL_27;
      }
      goto LABEL_26;
    }
  }
  else {
    v22 = *(_QWORD*)(v7 + 336);
    if (v22 == 0 || *(_QWORD*)(v22 + 8) != 0) {
      *(_QWORD*)(v7 + 216) = v13;
      *(_WORD*)(v7 + 272) = v10;
      TextBox_55c600(v14);
      *(_QWORD*)(v7 + 328) = v14;
      v25 = v6;
      v24[0] = v14 + 192;
      v24[1] = 0;
      v23 = *(_WORD*)(v7 + 276);
      v26 = (v23 & 8) != 0;
      v27 = (v23 & 0x20) != 0;
      v28 = (v23 & 0x80) != 0;
      v29 = (v23 & 0x400) != 0;
      return TextBox_55c650(v14, a2, v24);
    }
  }
  result = LayoutEx_5791a0(v13);
  if (v14 != 0) {
  LABEL_26:
    result = LayoutEx_5791a0(v14);
  }
LABEL_27:
  v21 = *(_QWORD*)(v7 + 336);
  if (v21 != 0) {
    result = *(_QWORD*)(v21 + 8);
    if (result != 0) {
      result = LayoutEx_5791a0(result);
      *(_QWORD*)(*(_QWORD*)(v7 + 336) + 8LL) = 0;
    }
  }
  return result;
}

__int64 TextBox_Unknown40(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 216);
  if (result != 0) {
    if (*(_QWORD*)(a1 + 328) != 0) {
      GameRoutine_55c6c0(*(_QWORD*)(a1 + 328));
      GameRoutine_55c640(*(_QWORD*)(a1 + 328));
      GameRoutine_5791a0(*(_QWORD*)(a1 + 328));
      result = *(_QWORD*)(a1 + 216);
      *(_QWORD*)(a1 + 328) = 0;
    }
    result = GameRoutine_5791a0(result);
    *(_QWORD*)(a1 + 216) = 0;
    *(_DWORD*)(a1 + 272) = 0;
  }
  v3 = *(_QWORD*)(a1 + 336);
  if (v3 != 0) {
    result = *(_QWORD*)(v3 + 8);
    if (result != 0) {
      result = GameRoutine_5791a0(result);
      *(_QWORD*)(*(_QWORD*)(a1 + 336) + 8LL) = 0;
    }
  }
  return result;
}

__int64 TextBox_Unknown41(__int64 a1, _WORD* a2, unsigned __int16 a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  bool v7;
  unsigned int v8;
  int v11;
  int v12;
  _WORD* v13;
  unsigned __int16 v14;

  LODWORD(v3) = (unsigned __int16)*a2;
  if (*a2 != 0) {
    v3 = 0;
    do {
      v4 = (unsigned __int16)a2[++v3];
    } while (v4 != 0);
  }
  if (*(_QWORD*)(a1 + 240) == 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 216);
  if (v5 == 0) {
    return 0;
  }
  v6 = *(unsigned __int16*)(a1 + 272);
  v7 = v6 != 0;
  v8 = v6 - 1;
  if (!v7) {
    v8 = 0;
  }
  if (v8 <= a3) {
    return 0;
  }
  v11 = (unsigned __int16)(v8 - a3);
  if ((int)v3 >= v11) {
    v12 = v11;
  }
  else {
    v12 = v3;
  }
  memcpy(v5 + 2LL * a3, a2, 2LL * v12);
  v13 = *(_WORD**)(a1 + 216);
  if (*v13 != 0) {
    v14 = a3 + v12;
  }
  else {
    v14 = 0;
  }
  *(_WORD*)(a1 + 274) = v14;
  v13[v14] = 0;
  *(_WORD*)(a1 + 276) |= 4u;
  *(_BYTE*)(a1 + 92) &= ~0x10u;
  return (unsigned int)v12;
}

__int64 TextBox_Unknown42(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  _BYTE* v13;
  unsigned __int16 v14;

  v6 = strlen(a2);
  if (*(_QWORD*)(a1 + 240) == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(a1 + 216);
  if (v7 == 0) {
    return 0;
  }
  v8 = *(unsigned __int16*)(a1 + 272);
  v9 = v8 != 0;
  v10 = v8 - 1;
  if (!v9) {
    v10 = 0;
  }
  if (v10 <= a3) {
    return 0;
  }
  v11 = (unsigned __int16)(v10 - a3);
  if (v6 >= v11) {
    v12 = v11;
  }
  else {
    v12 = v6;
  }
  memcpy(v7 + a3, a2, (int)v12);
  v13 = *(_BYTE**)(a1 + 216);
  if (*v13 != 0) {
    v14 = a3 + v12;
  }
  else {
    v14 = 0;
  }
  *(_WORD*)(a1 + 274) = v14;
  v13[v14] = 0;
  *(_WORD*)(a1 + 276) |= 4u;
  *(_BYTE*)(a1 + 92) &= ~0x10u;
  return v12;
}

__int64 TextBox_Unknown43(__int64 a1, __int64 a2, unsigned __int16 a3,
                          unsigned __int16 a4)
{
  __int64 v4;
  int v5;
  bool v6;
  unsigned int v7;
  unsigned int v10;
  unsigned int v11;
  _WORD* v12;
  unsigned __int16 v13;

  if (*(_QWORD*)(a1 + 240) == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 216);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(unsigned __int16*)(a1 + 272);
  v6 = v5 != 0;
  v7 = v5 - 1;
  if (!v6) {
    v7 = 0;
  }
  if (v7 <= a3) {
    return 0;
  }
  v10 = (unsigned __int16)(v7 - a3);
  if (a4 >= v10) {
    v11 = v10;
  }
  else {
    v11 = a4;
  }
  memcpy(v4 + 2LL * a3, a2, 2LL * v11);
  v12 = *(_WORD**)(a1 + 216);
  if (*v12 != 0) {
    v13 = v11 + a3;
  }
  else {
    v13 = 0;
  }
  *(_WORD*)(a1 + 274) = v13;
  v12[v13] = 0;
  *(_WORD*)(a1 + 276) |= 4u;
  *(_BYTE*)(a1 + 92) &= ~0x10u;
  return v11;
}

__int64 TextBox_Unknown44(__int64 a1, __int64 a2, unsigned __int16 a3,
                          unsigned __int16 a4)
{
  __int64 v4;
  int v5;
  bool v6;
  unsigned int v7;
  unsigned int v10;
  __int64 v11;
  _BYTE* v12;
  unsigned __int16 v13;

  if (*(_QWORD*)(a1 + 240) == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 216);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(unsigned __int16*)(a1 + 272);
  v6 = v5 != 0;
  v7 = v5 - 1;
  if (!v6) {
    v7 = 0;
  }
  if (v7 <= a3) {
    return 0;
  }
  v10 = (unsigned __int16)(v7 - a3);
  if (a4 >= v10) {
    v11 = v10;
  }
  else {
    v11 = a4;
  }
  memcpy(v4 + a3, a2, v11);
  v12 = *(_BYTE**)(a1 + 216);
  if (*v12 != 0) {
    v13 = v11 + a3;
  }
  else {
    v13 = 0;
  }
  *(_WORD*)(a1 + 274) = v13;
  v12[v13] = 0;
  *(_WORD*)(a1 + 276) |= 4u;
  *(_BYTE*)(a1 + 92) &= ~0x10u;
  return (unsigned int)v11;
}

__int64 TextBox_59d3c0(__int64 result, __int64 a2)
{
  __int64 v3;
  __int16 v4;
  bool v5;
  __int16 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int16 v11;
  _BOOL4 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;

  v3 = result;
  if (a2 == 0 ||
      (_DWORD)(result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 192LL))(a2)) ==
          1) {
    v4 = *(_WORD*)(v3 + 276);
    v5 = *(_QWORD*)(v3 + 240) == a2;
    v6 = *(_QWORD*)(v3 + 240) == a2 ? *(_WORD*)(v3 + 276) & 4 : 4;
    *(_WORD*)(v3 + 276) = v6 | v4 & 0xFFFB;
    if (!v5) {
      *(_QWORD*)(v3 + 240) = a2;
      if (a2 != 0) {
        v7 = (float)(*(int (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 240) + 40LL))(
            *(_QWORD*)(v3 + 240));
        v8 = *(float*)(v3 + 248);
        v9 = *(float*)(v3 + 252);
        v10 = (float)(int)result;
        v11 = *(_WORD*)(v3 + 276) & 4;
        v12 = v8 != v7;
        if (v9 != (float)(int)result) {
          v12 = true;
        }
        if (v12) {
          v11 = 4;
        }
        *(_WORD*)(v3 + 276) = v11 | *(_WORD*)(v3 + 276) & 0xFFFB;
        if (v12) {
          if (v9 == 0.0) {
            *(float*)(v3 + 248) = v7;
            *(float*)(v3 + 252) = v10;
          }
          else {
            v15 = v8 / v9;
            v16 = *(float*)(v3 + 280);
            v17 = *(float*)(v3 + 308);
            *(_QWORD*)(v3 + 248) =
                LODWORD(v7) | ((unsigned __int64)LODWORD(v10) << 32);
            v18 = v10 / v7;
            *(float*)(v3 + 280) = v18 * (float)(v15 * v16);
            *(float*)(v3 + 308) = v18 * (float)(v15 * v17);
          }
        }
      }
      else {
        v14 = *(float*)(v3 + 248);
        v13 = *(float*)(v3 + 252);
        *(_WORD*)(v3 + 276) = v4 | 4;
        if (v14 != 0.0 || v13 != 0.0) {
          *(_QWORD*)(v3 + 248) = 0;
          if (v13 != 0.0) {
            *(_DWORD*)(v3 + 280) = 2143289344;
            *(_DWORD*)(v3 + 308) = 2143289344;
          }
        }
      }
    }
  }
  return result;
}

float TextBox_59d550(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  float result;
  float v3;
  __int16 v4;
  _BOOL4 v5;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;

  result = *(float*)(a1 + 248);
  v3 = *(float*)(a1 + 252);
  v4 = *(_WORD*)(a1 + 276) & 4;
  v5 = result != *(float*)a2;
  if (v3 != *(float*)(a2 + 4)) {
    v5 = true;
  }
  if (v5) {
    v4 = 4;
  }
  *(_WORD*)(a1 + 276) = v4 | *(_WORD*)(a1 + 276) & 0xFFFB;
  if (v5) {
    if (v3 == 0x0.0p+0f) {
      *(_QWORD*)(a1 + 248) = *(_QWORD*)a2;
    }
    else {
      v6 = result / v3;
      v7 = *(float*)(a1 + 280);
      v8 = *(float*)(a1 + 308);
      v9 = HIDWORD(*(_QWORD*)a2);
      v10 = COERCE_FLOAT(*(_QWORD*)a2);
      *(_QWORD*)(a1 + 248) = *(_QWORD*)a2;
      v11 = v6 * v7;
      result = (float)(v6 * v8) * (float)(*(float*)&v9 / v10);
      *(float*)(a1 + 280) = v11 * (float)(*(float*)&v9 / v10);
      *(float*)(a1 + 308) = result;
    }
  }
  return result;
}

float TextBox_Unknown46(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  float v5;
  __int64 v6;
  int v7;
  float result;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  *(_QWORD*)(a2 + 20) = 0;
  v4 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a2 + 40) = v4;
  if (v4 != 0) {
    GameRoutine_55c190_alt1(a2, *(float*)(a1 + 248), *(float*)(a1 + 252));
    *(_DWORD*)(a2 + 68) = *(_DWORD*)(a1 + 256);
    *(_DWORD*)(a2 + 64) = *(_DWORD*)(a1 + 260);
    v5 = *(float*)(a1 + 80);
    if ((*(_WORD*)(a1 + 276) & 0x40) == 0) {
      v5 = 0x1.fffffe0000000p+127f;
    }
    *(float*)(a2 + 60) = v5;
  }
  v6 = *(_QWORD*)(a1 + 264);
  if (v6 != 0) {
    *(_QWORD*)(a2 + 88) = v6;
  }
  if (*(_QWORD*)(a1 + 312) != 0) {
    v7 = 0;
    goto LABEL_9;
  }
  v9 = *(_WORD*)(a1 + 276) & 3;
  if (v9 <= 1) {
    if (v9 != 0) {
      v7 = 0;
      v10 = *(unsigned __int8*)(a1 + 278);
      v11 = v10 & 3;
      if (v11 == 2) {
        goto LABEL_30;
      }
    }
    else {
      if ((*(_BYTE*)(a1 + 278) & 3) == 2) {
        v7 = 2;
      }
      else {
        v7 = (*(_BYTE*)(a1 + 278) & 3) == 0;
      }
      v10 = *(unsigned __int8*)(a1 + 278);
      v11 = v10 & 3;
      if (v11 == 2) {
        goto LABEL_30;
      }
    }
  LABEL_21:
    if (v11 == 0) {
      v7 |= 0x10u;
    }
    v12 = (v10 >> 2) & 3;
    if ((*(_WORD*)(a1 + 276) & 0x1000) != 0) {
      v13 = 0;
    }
    else {
      v13 = v12;
    }
    if (v13 == 2) {
      goto LABEL_34;
    }
    goto LABEL_27;
  }
  if (v9 == 2) {
    v7 = 1;
  }
  else {
    v7 = 2;
  }
  v10 = *(unsigned __int8*)(a1 + 278);
  v11 = v10 & 3;
  if (v11 != 2) {
    goto LABEL_21;
  }
LABEL_30:
  v7 |= 0x20u;
  v14 = (v10 >> 2) & 3;
  if ((*(_WORD*)(a1 + 276) & 0x1000) != 0) {
    v13 = 0;
  }
  else {
    v13 = v14;
  }
  if (v13 == 2) {
  LABEL_34:
    v7 |= 0x200u;
    goto LABEL_9;
  }
LABEL_27:
  if (v13 == 0) {
    v7 |= 0x100u;
  }
LABEL_9:
  *(_DWORD*)(a2 + 80) = v7;
  *(_DWORD*)a2 = *(_DWORD*)(a1 + 232);
  *(_DWORD*)(a2 + 4) = *(_DWORD*)(a1 + 236);
  result = *(float*)(a1 + 280);
  *(float*)(a2 + 36) = result;
  *(_BYTE*)(a2 + 98) = (*(_WORD*)(a1 + 276) & 0x4000) != 0;
  return result;
}

float TextBox_Unknown47(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  float v5;
  __int64 v6;
  int v7;
  float result;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  *(_QWORD*)(a2 + 20) = 0;
  v4 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a2 + 40) = v4;
  if (v4 != 0) {
    GameRoutine_55c190_alt1(a2, *(float*)(a1 + 248), *(float*)(a1 + 252));
    *(_DWORD*)(a2 + 68) = *(_DWORD*)(a1 + 256);
    *(_DWORD*)(a2 + 64) = *(_DWORD*)(a1 + 260);
    v5 = *(float*)(a1 + 80);
    if ((*(_WORD*)(a1 + 276) & 0x40) == 0) {
      v5 = 0x1.fffffe0000000p+127f;
    }
    *(float*)(a2 + 60) = v5;
  }
  v6 = *(_QWORD*)(a1 + 264);
  if (v6 != 0) {
    *(_QWORD*)(a2 + 88) = v6;
  }
  if (*(_QWORD*)(a1 + 312) != 0) {
    v7 = 0;
    goto LABEL_9;
  }
  v9 = *(_WORD*)(a1 + 276) & 3;
  if (v9 <= 1) {
    if (v9 != 0) {
      v7 = 0;
      v10 = *(unsigned __int8*)(a1 + 278);
      v11 = v10 & 3;
      if (v11 == 2) {
        goto LABEL_30;
      }
    }
    else {
      if ((*(_BYTE*)(a1 + 278) & 3) == 2) {
        v7 = 2;
      }
      else {
        v7 = (*(_BYTE*)(a1 + 278) & 3) == 0;
      }
      v10 = *(unsigned __int8*)(a1 + 278);
      v11 = v10 & 3;
      if (v11 == 2) {
        goto LABEL_30;
      }
    }
  LABEL_21:
    if (v11 == 0) {
      v7 |= 0x10u;
    }
    v12 = (v10 >> 2) & 3;
    if ((*(_WORD*)(a1 + 276) & 0x1000) != 0) {
      v13 = 0;
    }
    else {
      v13 = v12;
    }
    if (v13 == 2) {
      goto LABEL_34;
    }
    goto LABEL_27;
  }
  if (v9 == 2) {
    v7 = 1;
  }
  else {
    v7 = 2;
  }
  v10 = *(unsigned __int8*)(a1 + 278);
  v11 = v10 & 3;
  if (v11 != 2) {
    goto LABEL_21;
  }
LABEL_30:
  v7 |= 0x20u;
  v14 = (v10 >> 2) & 3;
  if ((*(_WORD*)(a1 + 276) & 0x1000) != 0) {
    v13 = 0;
  }
  else {
    v13 = v14;
  }
  if (v13 == 2) {
  LABEL_34:
    v7 |= 0x200u;
    goto LABEL_9;
  }
LABEL_27:
  if (v13 == 0) {
    v7 |= 0x100u;
  }
LABEL_9:
  *(_DWORD*)(a2 + 80) = v7;
  *(_DWORD*)a2 = *(_DWORD*)(a1 + 232);
  *(_DWORD*)(a2 + 4) = *(_DWORD*)(a1 + 236);
  result = *(float*)(a1 + 280);
  *(float*)(a2 + 36) = result;
  *(_BYTE*)(a2 + 98) = (*(_WORD*)(a1 + 276) & 0x4000) != 0;
  return result;
}

__int64 TextBox_59d8e0(__int64 result, int a2, float a3)
{
  if (a2 == 1) {
    *(float*)(*(_QWORD*)(result + 336) + 4LL) = a3;
    *(_WORD*)(result + 276) |= 4u;
  }
  else {
    if (a2 == 0) {
      **(float**)(result + 336) = a3;
    }
    *(_WORD*)(result + 276) |= 4u;
  }
  return result;
}

float TextBox_59d920(__int64 a1, int a2)
{
  float result;

  if (a2 == 1) {
    return *(float*)(*(_QWORD*)(a1 + 336) + 4LL);
  }
  result = 0.0;
  if (a2 == 0) {
    return **(float**)(a1 + 336);
  }
  return result;
}

void TextBox_59d960(__int64 a1, __int64 a2, float a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v9;
  __int64 v10;
  float v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float* v16;
  unsigned __int64 v17;
  float v18;
  float v19;
  float* v20;
  float v21;
  float* v22;
  unsigned int v23;
  __int64 v24;
  float v25;
  float* v26;
  __int64 v27;
  __int64 v28;

  if (*(_BYTE*)(*(_QWORD*)(a1 + 336) + 18LL) != 0) {
    v4 = a2 + 20;
    v5 = a2 + 8;
    v6 = a2 + 32;
    v9 = 0;
    v27 = a2 + 48;
    v10 = 16LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 336) + 18LL);
    v28 = a2 + 44;
    do {
      v12 = *(_QWORD*)(a1 + 336);
      v13 = a3;
      v14 = *(_QWORD*)(v12 + v9 + 32);
      v15 = *(unsigned int*)(v12 + v9 + 40);
      v16 = (float*)(v14 + *(unsigned int*)(v14 + 8));
      if (*(_BYTE*)(v12 + 16) == 1) {
        v17 = *(unsigned __int16*)(v14 + 4);
        v13 = a3;
        if (v17 >= 2) {
          v18 = *v16;
          v19 = v16[3 * (unsigned int)(v17 - 1)];
          if (a3 <= v19) {
            v13 = a3;
            if (a3 < v18) {
              v22 = (float*)(v14 + *(unsigned int*)(v14 + 8));
              v13 = v19 - fmodf(v18 - a3, v19 - v18);
              v16 = v22;
            }
          }
          else {
            v20 = (float*)(v14 + *(unsigned int*)(v14 + 8));
            v21 = fmodf(a3 - v18, v19 - v18);
            v16 = v20;
            v13 = v18 + v21;
          }
        }
      }
      v11 = nn_ui2d_59f160(v16, *(unsigned __int16*)(v14 + 4), v13);
      if ((int)v15 <= 2) {
        if ((_DWORD)v15 == 1) {
          v11 = -v11;
        }
        *(float*)(v6 + 4 * v15) = v11;
      }
      else if ((unsigned int)v15 > 5) {
        if ((unsigned int)v15 > 9) {
          if ((unsigned int)v15 > 0xD) {
            *(float*)(a2 + 4LL * (unsigned int)(v15 - 14)) = v11;
          }
          else {
            *(_BYTE*)(v27 + (unsigned int)(v15 - 10)) = (int)v11;
          }
        }
        else {
          *(_BYTE*)(v28 + (unsigned int)(v15 - 6)) = (int)v11;
        }
      }
      else {
        v23 = v15 - 3;
        if ((_DWORD)v15 != 4) {
          v11 = -v11;
        }
        v24 = (__int64)(float)(v11 * 0x1.6c16c20000000p+23f);
        v25 = vcvts_n_f32_u32(v24 & 0xFFFFFF, 0x18u);
        v26 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v24));
        *(float*)(v4 + 4LL * v23) = v26[1] + (float)(v26[3] * v25);
        *(float*)(v5 + 4LL * v23) = *v26 + (float)(v26[2] * v25);
      }
      v9 += 16;
    } while (v10 != v9);
  }
}

#pragma GCC visibility pop
