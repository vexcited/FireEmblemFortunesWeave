#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 UnitGridSelectMenu_178b240(_QWORD* a1, _QWORD* a2, unsigned __int8* a3,
                                   __int64 a4, unsigned __int8* a5);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 UnitGridSelectMenu_178aa80(__int64 a1, int a2);

__int64 UnitGridSelectMenu_178aa80(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _BYTE v6[200];
  __int64 v7;
  __int64 v8;

  if (a2 == 1) {
    v7 = v2;
    v8 = v3;
    snd_Fade_Fade_10c830(v6, 0.0f);
    snd_play_ff2d0((void*)(&v5), "SE_SYS_NG", "SE_SYS_NG", v6, 0, 65537, 0,
                   0.0f, 1.0f);
    return snd_Fade_Destroy_Fade(v6);
  }
  return result;
}

__int64 UnitGridSelectMenu_178b240(_QWORD* a1, _QWORD* a2, unsigned __int8* a3,
                                   __int64 a4, unsigned __int8* a5)
{
  __int64 v5;
  char* v6;
  _QWORD* v7;

  v5 = a1[2];
  v6 = (char*)a1[1];
  v7 = (_QWORD*)(a1[3] + (v5 >> 1));
  if ((v5 & 1) != 0) {
    v6 = *(char**)&v6[*v7];
  }
  return ((__int64 (*)(_QWORD*, _QWORD, _QWORD, __int64, _QWORD))v6)(
      v7, *a2, *a3, a4, *a5);
}

#pragma GCC visibility pop
