#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 snd_Fade_CtrlTypeAHDSR_CtrlTypeAHDSR_10d3b0(_QWORD, long double);
__n128 snd_Fade_Fade_10ca00(_QWORD, float, double);
extern __int64 GameData_212e2d8;
void Obj_126230(__int64 a1);

void Obj_126230(__int64 a1)
{
  __int64 v2;
  long double v3;

  *(_QWORD*)a1 = 0x3F8000003F800000LL;
  snd_Fade_Fade_10ca00(a1 + 8, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 208, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 408, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 608, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 808, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 1008, 1.0, 0.0);
  *(_DWORD*)(a1 + 1208) = 1065353216;
  snd_Fade_Fade_10ca00(a1 + 1216, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 1416, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 1616, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 1816, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 2016, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 2216, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 2416, 1.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 2616, 1.0, 0.0);
  v2 = GameData_212e2d8;
  *(_QWORD*)(a1 + 2824) = 0;
  *(_DWORD*)(a1 + 2832) = 0;
  *(_QWORD*)(a1 + 2848) = 0;
  *(_DWORD*)(a1 + 2856) = 0;
  v2 += 16;
  *(_QWORD*)(a1 + 2864) = 0;
  *(_QWORD*)(a1 + 2872) = 0;
  *(_QWORD*)(a1 + 2880) = 0;
  *(_QWORD*)(a1 + 2888) = 0;
  *(_QWORD*)(a1 + 2816) = v2;
  *(_QWORD*)(a1 + 2840) = v2;
  snd_Fade_Fade_10ca00(a1 + 2896, 0.0, 0.0);
  *(_QWORD*)(a1 + 3104) = 0;
  *(_QWORD*)(a1 + 3096) = 0;
  snd_Fade_Fade_10ca00(a1 + 3112, 0.0, 0.0);
  *(_QWORD*)(a1 + 3320) = 0;
  *(_QWORD*)(a1 + 3312) = 0;
  *(__n128*)&v3 = snd_Fade_Fade_10ca00(a1 + 3328, 0.0, 0.0);
  *(_QWORD*)(a1 + 3544) = 0;
  *(_QWORD*)(a1 + 3536) = 0;
  *(_QWORD*)(a1 + 3528) = 0;
  snd_Fade_CtrlTypeAHDSR_CtrlTypeAHDSR_10d3b0(a1 + 3552, v3);
  *(_QWORD*)(a1 + 3672) = 1065353216;
  snd_Fade_Fade_10ca00(a1 + 3680, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 3880, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 4080, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 4280, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 4480, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 4680, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 4880, 0.0, 0.0);
  snd_Fade_Fade_10ca00(a1 + 5080, 0.0, 0.0);
  *(_QWORD*)(a1 + 5432) = 0;
  *(_QWORD*)(a1 + 5424) = 0;
  *(_QWORD*)(a1 + 5416) = 0;
  *(_QWORD*)(a1 + 5408) = 0;
  *(_QWORD*)(a1 + 5400) = 0;
  *(_QWORD*)(a1 + 5392) = 0;
  *(_QWORD*)(a1 + 5384) = 0;
  *(_QWORD*)(a1 + 5376) = 0;
  *(_QWORD*)(a1 + 5368) = 0;
  *(_QWORD*)(a1 + 5360) = 0;
  *(_QWORD*)(a1 + 5352) = 0;
  *(_QWORD*)(a1 + 5344) = 0;
  *(_QWORD*)(a1 + 5336) = 0;
  *(_QWORD*)(a1 + 5328) = 0;
  *(_QWORD*)(a1 + 5320) = 0;
  *(_QWORD*)(a1 + 5312) = 0;
  *(_QWORD*)(a1 + 5304) = 0;
  *(_QWORD*)(a1 + 5296) = 0;
  *(_QWORD*)(a1 + 5288) = 0;
  *(_BYTE*)(a1 + 5440) = 0;
  *(_QWORD*)(a1 + 5280) = 0;
  *(_QWORD*)(a1 + 5444) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 5452) = 0;
  *(_QWORD*)(a1 + 5460) = 0;
  *(_QWORD*)(a1 + 5468) = 0;
  *(_QWORD*)(a1 + 5476) = 0;
  *(_QWORD*)(a1 + 5484) = 0;
  *(_QWORD*)(a1 + 5492) = 0;
  *(_QWORD*)(a1 + 5500) = 0;
  *(_QWORD*)(a1 + 5508) = 0;
  *(_QWORD*)(a1 + 5516) = 0;
  *(_QWORD*)(a1 + 5524) = 0;
  *(_QWORD*)(a1 + 5532) = 0;
}

#pragma GCC visibility pop
