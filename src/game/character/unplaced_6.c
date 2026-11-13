#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212ea38;
float powf(float, float);
__int64 game_character_bd87d0(float a1, __int64 a2, __int64 a3, _BYTE* a4);

__int64 game_character_bd87d0(float a1, __int64 a2, __int64 a3, _BYTE* a4)
{

#pragma clang fp contract(off)
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a3 != 0) {
    {
      __typeof__(a1) z_ = (__typeof__(a1)){0};
      LOBYTE(z_) = *a4;
      a1 = z_;
    }
    v6 = *(float*)GameData_212ea38;
    v7 = powf((float)LODWORD(a1) / 0x1.fe00000000000p+7f,
              *(float*)GameData_212ea38),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v8 = 0x0.0p+0f;
    v9 = 0x0.0p+0f;
    if (v7 >= 0x0.0p+0f) {
      v9 = v7;
      if (v7 > 0x1.0000000000000p+0f) {
        v9 = 0x1.0000000000000p+0f;
      }
    }
    {
      __typeof__(v7) z_ = (__typeof__(v7)){0};
      LOBYTE(z_) = a4[1];
      v7 = z_;
    }
    v10 = powf((float)LODWORD(v7) / 0x1.fe00000000000p+7f, v6),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v10 >= 0x0.0p+0f) {
      v8 = v10;
      if (v10 > 0x1.0000000000000p+0f) {
        v8 = 0x1.0000000000000p+0f;
      }
    }
    {
      __typeof__(v10) z_ = (__typeof__(v10)){0};
      LOBYTE(z_) = a4[2];
      v10 = z_;
    }
    v11 = powf((float)LODWORD(v10) / 0x1.fe00000000000p+7f, v6),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v12 = 0x0.0p+0f;
    if (v11 >= 0x0.0p+0f) {
      v12 = v11;
      if (v11 > 0x1.0000000000000p+0f) {
        v12 = 0x1.0000000000000p+0f;
      }
    }
    return (*(__int64 (**)(__int64, const char*, __int64, unsigned __int64))(
        *(_QWORD*)a3 + 72LL))(
        a3, "MakeupColor0", 12,
        ((unsigned __int64)(unsigned __int8)a4[3] << 24) |
            ((unsigned __int64)(unsigned int)(int)(float)(v12 *
                                                          0x1.fe00000000000p+7f)
             << 16) |
            ((unsigned __int64)(unsigned int)(int)(float)(v8 *
                                                          0x1.fe00000000000p+7f)
             << 8) |
            (unsigned int)(int)(float)(v9 * 0x1.fe00000000000p+7f));
  }
  return result;
}

#pragma GCC visibility pop
