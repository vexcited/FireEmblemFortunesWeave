#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern int GameData_1b0c148[];
extern __int64 (*GameData_1f54618[])();
extern __int64 (*GameData_1f6d400)(_QWORD);
extern __int64 (*GameData_1f6d9c8)(_QWORD);
extern __int64 (*GameData_1f6fe88[])();
extern __int64 (*GameData_1f722f8)(_QWORD*);
extern __int64 (*GameData_1f72960[])();
extern __int64 (*GameData_1f73828[])();
extern char* GameData_1f7ccf0;
extern char* GameData_1f7d770;
extern int GameData_1f7d780;
extern _UNKNOWN** GameData_212bff8;
extern __int64* GameData_212d480[2];
extern __int64* GameData_212e250;
extern __int64 GameData_212e2d0[2];
extern __int64* GameData_2134248[3];
extern __int64* GameData_21343a8[2];
extern __int64 GameData_2134720[23];
extern __int64 GameData_2134730[21];
extern __int64 GameData_2134768[14];
extern __int64 GameData_2134780[11];
extern __int64 GameData_2134788[10];
extern __int64 GameData_21347a0[7];
extern __int64 GameData_21347c0[3];
extern _UNKNOWN* GameData_2134b78;
extern __int64* GameData_2134b80;
extern __int64* GameData_2134b98[5];
extern __int64* GameData_2134ba0[4];
extern __int64* GameData_2134bb0[2];
extern __int64* GameData_2134bb8;
extern _QWORD GameData_2134bc0;
extern __int64 (*GameData_2134bc8[2])();
extern __int64 (*GameData_2134bd0)();
extern __int16* GameData_2134be0[2];
extern __int64* GameData_2134c00[3];
extern __int64* GameData_2134c08[2];
extern __int64* GameData_2134c10;
extern __int64* GameData_2134c38[12];
extern __int64* GameData_2134c40[11];
extern __int64* GameData_2134c50[9];
extern __int64* GameData_2134c80[3];
extern __int64* GameData_2134c88[2];
extern __int64 GameData_2134cc0;
extern _UNKNOWN** GameData_2134d10;
extern _UNKNOWN* GameData_2134fa0;
extern __int64 GameData_2178e00;
extern __int64 GameData_2198f88;
extern __int16 GameData_2199b50;
extern __int16 GameData_2199b70;
extern __int16 GameData_2199b90;
extern __int16 GameData_2199bb0;
extern __int64 GameData_2199c38;
extern __int64 GameData_219c9b0;
__int64 GameRoutine_112080(_QWORD);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1121e0(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD);
__int64 GameRoutine_112320(void);
__int64 GameRoutine_112460(void);
__int64 GameRoutine_119030(_QWORD);
__int64 GameRoutine_119040(_QWORD);
__int64 GameRoutine_119060(_QWORD);
__int64 GameRoutine_1261b0(void);
__int64 GameRoutine_143ad0(_QWORD);
__int64 GameRoutine_1449c0(void);
__int64 GameRoutine_1678f0(void);
__int64 GameRoutine_16b090(void);
__int64 GameRoutine_16b760(_QWORD, _QWORD);
__int64 GameRoutine_16b8d0(_QWORD, _QWORD);
__int64 GameRoutine_16b900(_QWORD, float);
__int64 GameRoutine_16b930(_QWORD, float);
__int64 GameRoutine_16bdb0(_QWORD, _QWORD);
__int64 GameRoutine_16bde0(_QWORD, float);
__int64 GameRoutine_16be10(_QWORD, float);
__int64 GameRoutine_16c4c0(_QWORD, _QWORD);
__int64 GameRoutine_16c4f0(_QWORD, float);
__int64 GameRoutine_16c520(_QWORD, float);
__int64 GameRoutine_173a50(void);
__int64 GameRoutine_1758d0(void);
__int64 GameRoutine_176350(void);
__int64 GameRoutine_178240(void);
__int64 GameRoutine_178f40(_QWORD, _QWORD);
__int64 GameRoutine_179600(_QWORD, _QWORD);
__int64 GameRoutine_17a550(_QWORD);
__int64 GameRoutine_17ae40(_QWORD, _QWORD);
__int64 GameRoutine_17afe0(_QWORD, float);
__int64 GameRoutine_17b320(_QWORD);
__int64 GameRoutine_17b410(__int64 result);
__int64 GameRoutine_17ba40(__int64 result, __int64);
__int64 GameRoutine_17bf40(_QWORD*);
__int64 GameRoutine_17c140(_QWORD*);
__int64 GameRoutine_17c340(_QWORD*);
__int64* GameRoutine_17c940(__int64);
__int64 GameRoutine_17cd20(_QWORD, _QWORD);
__int64 GameRoutine_17d5c0(_QWORD);
__int64 GameRoutine_17d940(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17da60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17e300(_QWORD);
__int64 GameRoutine_17e320(_QWORD, _QWORD);
__int64 GameRoutine_17e680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17e7e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_180c80(__int64, __int64);
__int64 GameRoutine_180fb0(__int64);
__int64 GameRoutine_183910(__int64, __int64);
__int64 GameRoutine_188860(_QWORD*, __int64);
__int64 GameRoutine_189e50(_QWORD, _QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_190480(_QWORD, _QWORD);
__int64 GameRoutine_1905a40(_QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_1908c0(_QWORD* result, __int64);
__int64 GameRoutine_194020(_QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09b90(_QWORD);
__int64 GameRoutine_1a09ba0(_QWORD);
__int64 GameRoutine_1a09bb0(_QWORD);
__int64 GameRoutine_1a09c60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a09f00(_QWORD, _QWORD);
__int64 GameRoutine_1a09f30(_QWORD);
__int64 GameRoutine_1a09f40(_QWORD);
__int64 GameRoutine_1a09f60(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a1e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a710(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a720(_QWORD);
__int64 GameRoutine_1a0a730(_QWORD);
__int64 GameRoutine_1a0a7e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a7f0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a800(_QWORD);
__int64 GameRoutine_1a0a8a0(_QWORD);
__int64 GameRoutine_1a0b9b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b9c0(_QWORD);
__int64 GameRoutine_1a0b9f0(_QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bfe0(_QWORD);
__int64 GameRoutine_1b3770(_QWORD);
__int64 GameRoutine_1b37b0(_QWORD);
__int64 GameRoutine_1b37c0(_QWORD);
__int64 GameRoutine_1b6460(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1b9180(_QWORD, _QWORD);
__int64 GameRoutine_1bcc50(_QWORD);
__int64 GameRoutine_1bd280(_QWORD, _QWORD);
__int64 GameRoutine_1bd6a0(_QWORD, _QWORD);
__int64 GameRoutine_1bd8e0(_QWORD);
__int64 GameRoutine_1bd970(_QWORD);
__int64 GameRoutine_1bd9c0(_QWORD);
__int64 GameRoutine_1bdbc0(_QWORD, _QWORD);
__int64 GameRoutine_1bdc30(_QWORD, _QWORD);
__int64 GameRoutine_1bde80(_QWORD);
__int64 GameRoutine_1bdf20(_QWORD);
__int64 GameRoutine_1be200(_QWORD, _QWORD);
__int64 GameRoutine_1be220(_QWORD);
__int64 GameRoutine_1bf0c0(_QWORD);
__int64 GameRoutine_1bf860(__int64);
__int64 GameRoutine_1c1060(_QWORD, _QWORD);
__int64 GameRoutine_1c1430(void);
__int64 GameRoutine_1c43e0(_QWORD, _QWORD);
__int64 GameRoutine_1cb640(_QWORD, _QWORD);
__int64 GameRoutine_1ccb60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1d23e0(_QWORD, _QWORD);
__int64 GameRoutine_1d63f0(_QWORD, _QWORD);
__int64 GameRoutine_1d6760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1d9240(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1d9480(_QWORD);
__int64 GameRoutine_1db800(_QWORD, _QWORD);
__int64 GameRoutine_1dfba0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1dfc40(_QWORD);
__int64 GameRoutine_1ef440(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_259550(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_259940(_QWORD);
__int64 GameRoutine_25a860(_QWORD);
__int64 GameRoutine_25a8e0(void);
__int64 GameRoutine_25f460(void);
__int64 GameRoutine_25f810(_QWORD);
__int64 GameRoutine_25fa90(_QWORD, _QWORD);
__int64 GameRoutine_2606c0(_QWORD, _QWORD);
__int64 GameRoutine_261510(_QWORD);
__int64 GameRoutine_261540(_QWORD);
__int64 GameRoutine_2615d0(__int64);
__int64 GameRoutine_2615e0(__int64);
__int64 GameRoutine_261780(__int64);
__int64 GameRoutine_2617f0(_QWORD);
__int64 GameRoutine_263940(_QWORD, _QWORD);
__int64 GameRoutine_2af320(void);
__int64 GameRoutine_2afd20(void);
__int64 GameRoutine_a38b10(_QWORD);
__int64 GameRoutine_a3a260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a3a3a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f0230(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f1b80(_QWORD, _QWORD);
__int64 GameRoutine_f5740(_QWORD, _QWORD);
__int64 GameRoutine_fdf60(_QWORD, _QWORD);
__int64 GameRoutine_fdfe0(_QWORD, _QWORD);
__int64 snd_coef_BiQuadCoef_BiQuadCoef(__int64);
extern __int64* snd_g_memory_ptr[2];
__int64 GameHr_1835b0(_QWORD* a1);

__int64 GameHr_173100(__int64 a1, int a2, unsigned int a3, float a4)
{
  __int64 v6;
  _BYTE* v7;

  v6 = *(_QWORD*)(a1 + 104) + 8LL * a2;
  v7 = *(_BYTE**)(*(_QWORD*)(v6 + 8) +
                  8LL * *(unsigned int*)(*(_QWORD*)(v6 + 8) + 124LL) + 128);
  GameRoutine_16bdb0(v7, a3);
  GameRoutine_16bde0(v7, a4);
  v7[68] = 0;
  GameRoutine_1a09b70(a1 + 136);
  (*(void (**)(_BYTE*))(*(_QWORD*)v7 + 16LL))(v7);
  return GameRoutine_1a09b80(a1 + 136);
}

__int64 GameHr_173180(__int64 a1, int a2, unsigned int a3, float a4)
{
  __int64 v6;
  _BYTE* v7;

  v6 = *(_QWORD*)(a1 + 104) + 8LL * a2;
  v7 = *(_BYTE**)(*(_QWORD*)(v6 + 8) +
                  8LL * *(unsigned int*)(*(_QWORD*)(v6 + 8) + 124LL) + 128);
  GameRoutine_16bdb0(v7, a3);
  GameRoutine_16be10(v7, a4);
  v7[68] = 1;
  GameRoutine_1a09b70(a1 + 136);
  (*(void (**)(_BYTE*))(*(_QWORD*)v7 + 16LL))(v7);
  return GameRoutine_1a09b80(a1 + 136);
}

__int64 GameHr_173230(__int64 a1, __int64 a2, __int64 a3)
{
  GameRoutine_1a09b70(a1 + 136);
  *(_QWORD*)(a1 + 192) = a2;
  *(_QWORD*)(a1 + 200) = a3;
  return GameRoutine_1a09b80(a1 + 136);
}

__int64 GameHr_173480(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 result;
  void (***v6)(_QWORD);

  GameRoutine_2af320();
  v2 = GameData_2134720[0];
  *(_WORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 124) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)a1 = v2 + 16;
  GameRoutine_1a0a040(a1 + 120, 1, 0);
  v3 = GameData_212d480[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 40, 32);
  result = GameRoutine_173a50();
  v6 = *(void (****)(_QWORD))(a1 + 104);
  *(_QWORD*)(a1 + 104) = v4;
  if (v6 != nullptr) {
    (**v6)(v6);
    return (*(__int64 (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(
        *v3, v6);
  }
  return result;
}

__int64 GameHr_1741b0(_QWORD* a1)
{
  __int64 result;

  result = GameRoutine_2af320();
  *a1 = &GameData_1f6d400;
  return result;
}

__int64 GameHr_174630(_QWORD* a1)
{
  __int64 result;

  result = GameRoutine_2af320();
  *a1 = &GameData_1f6d9c8;
  return result;
}

__int64 GameHr_174c10(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  void (***v9)(_QWORD);
  _BYTE* v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = a1 + 24576;
  GameRoutine_2af320();
  *(_BYTE*)(a1 + 104) = 0;
  v3 = GameData_21347a0[0];
  *(_QWORD*)(v2 + 196) = 0;
  *(_QWORD*)(a1 + 24784) = 0;
  *(_DWORD*)(v2 + 216) = 0;
  *(_QWORD*)a1 = v3 + 16;
  *(_QWORD*)(a1 + 108) = 0x1400000001LL;
  *(_QWORD*)(a1 + 116) = 0x1400000080LL;
  *(_QWORD*)(a1 + 124) = 0xA00000001LL;
  *(_DWORD*)(a1 + 132) = 1;
  GameRoutine_1a0ba50(a1 + 136, 0, 24634, v4, v5, v6);
  GameRoutine_1a0a040(a1 + 24768, 1, 0);
  *(_DWORD*)(v2 + 224) = 262145000;
  *(_QWORD*)(v2 + 228) = 0x3DCCCCCD3DCCCCCDLL;
  *(_QWORD*)(v2 + 236) = 0x4120000041200000LL;
  v7 = GameData_212d480[0];
  v8 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 24, 32);
  GameRoutine_1758d0();
  v9 = *(void (****)(_QWORD))(a1 + 24760);
  *(_QWORD*)(a1 + 24760) = v8;
  if (v9 != nullptr) {
    (**v9)(v9);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v7 + 24LL))(*v7, v9);
    v8 = *(_QWORD*)(a1 + 24760);
  }
  GameRoutine_16b760(*(_QWORD*)(v8 + 8), 6);
  v10 = *(
      _BYTE**)(*(_QWORD*)(*(_QWORD*)(a1 + 24760) + 8LL) +
               8LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24760) + 8LL) +
                                      124LL) +
               128);
  GameRoutine_16c4c0(v10, *(unsigned __int16*)(v2 + 224));
  GameRoutine_16c4f0(v10, *(float*)(v2 + 228));
  v10[72] = 0;
  GameRoutine_16c520(v10, *(float*)(v2 + 236));
  (*(void (**)(_BYTE*))(*(_QWORD*)v10 + 16LL))(v10);
  GameRoutine_16b760(*(_QWORD*)(*(_QWORD*)(a1 + 24760) + 16LL), 6);
  v11 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(a1 + 24760) + 16LL) +
                   8LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 24760) +
                                                     16LL) +
                                          124LL) +
                   128);
  GameRoutine_16c4c0(v11, *(unsigned __int16*)(v2 + 226));
  GameRoutine_16c4f0(v11, *(float*)(v2 + 232));
  v11[72] = 0;
  GameRoutine_16c520(v11, *(float*)(v2 + 240));
  (*(void (**)(_BYTE*))(*(_QWORD*)v11 + 16LL))(v11);
  return GameRoutine_1a0ba50(a1 + 136, 0, 24624, v12, v13, v14);
}

__int64 GameHr_175c20(__int64 a1, unsigned int a2)
{
  unsigned int v4;

  GameRoutine_1a09b70(a1 + 24768);
  if (a2 <= 1) {
    v4 = 1;
  }
  else {
    v4 = a2;
  }
  if (v4 >= 0x3FF) {
    v4 = 1023;
  }
  *(_DWORD*)(a1 + 132) = v4;
  return GameRoutine_1a09b80(a1 + 24768);
}

__int64 GameHr_175ed0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  void (***v6)(_QWORD);
  __int64 v7;

  GameRoutine_2af320();
  v2 = GameData_2134730[0];
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v3 = (__int64*)(a1 + 104);
  *(_QWORD*)(a1 + 140) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_BYTE*)(a1 + 128) = 0;
  *(_QWORD*)a1 = v2 + 16;
  GameRoutine_1a0a040(a1 + 136, 1, 0);
  v4 = GameData_212d480[0];
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 16, 32);
  GameRoutine_176350();
  v6 = (void (***)(_QWORD))*v3;
  *v3 = v5;
  if (v6 != nullptr) {
    (**v6)(v6);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v4 + 24LL))(*v4, v6);
    v5 = *v3;
  }
  GameRoutine_16b760(*(_QWORD*)(v5 + 8), 1);
  v7 = *(_QWORD*)(*(_QWORD*)(*v3 + 8) +
                  8LL * *(unsigned int*)(*(_QWORD*)(*v3 + 8) + 124LL) + 128);
  GameRoutine_16b8d0(v7, 100);
  GameRoutine_16b900(v7, 50.0);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
}

__int64 GameHr_176570(__int64 a1, int a2, unsigned int a3, char a4, float a5,
                      float a6)
{
  __int64 v10;
  _BYTE* v11;

  v10 = *(_QWORD*)(a1 + 104) + 8LL * a2;
  v11 = *(_BYTE**)(*(_QWORD*)(v10 + 8) +
                   8LL * *(unsigned int*)(*(_QWORD*)(v10 + 8) + 124LL) + 128);
  GameRoutine_16b8d0(v11, a3);
  GameRoutine_16b900(v11, a5);
  GameRoutine_16b930(v11, a6);
  v11[68] = a4;
  GameRoutine_1a09b70(a1 + 136);
  (*(void (**)(_BYTE*))(*(_QWORD*)v11 + 16LL))(v11);
  return GameRoutine_1a09b80(a1 + 136);
}

__int64 GameHr_176830(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  GameRoutine_2af320();
  v2 = GameData_2134780[0];
  *(_BYTE*)(a1 + 104) = 0;
  *(_QWORD*)a1 = v2 + 16;
  return GameRoutine_1a0ba50(a1 + 108, 0, 4108, v3, v4, v5);
}

__int64 GameHr_177140(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = a1 + 49152;
  GameRoutine_2af320();
  v3 = GameData_21347c0[0];
  *((_WORD*)v2 + 56) = 0;
  v2 += 14;
  *(_QWORD*)((char*)v2 + 4) = 0;
  v2[2] = 0;
  *((_DWORD*)v2 + 6) = 0;
  *a1 = v3 + 16;
  GameRoutine_1a0ba50(a1 + 13, 0, 393220, v4, v5, v6);
  return GameRoutine_1a0a040(v2, 1, 0);
}

__int64 GameHr_177580(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  void (***v8)(_QWORD);
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  GameRoutine_2af320();
  v2 = GameData_2134788[0];
  *(_QWORD*)(a1 + 6320) = 0;
  *(_DWORD*)(a1 + 6328) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 6308) = 0;
  GameRoutine_1a0ba50(a1 + 104, 0, 6202, v3, v4, v5);
  GameRoutine_1a0a040(a1 + 6304, 1, 0);
  v6 = GameData_212d480[0];
  v7 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 32, 32);
  GameRoutine_178240();
  v8 = *(void (****)(_QWORD))(a1 + 104);
  *(_QWORD*)(a1 + 104) = v7;
  if (v8 != nullptr) {
    (**v8)(v8);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v6 + 24LL))(*v6, v8);
    v7 = *(_QWORD*)(a1 + 104);
  }
  v9 = *(_QWORD*)(v7 + 8);
  GameRoutine_16b760(v9, 0);
  v10 = *(_QWORD*)(v9 + 8LL * *(unsigned int*)(v9 + 124) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  v11 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 16LL);
  GameRoutine_16b760(v11, 3);
  v12 = *(_QWORD*)(v11 + 8LL * *(unsigned int*)(v11 + 124) + 128);
  GameRoutine_16bdb0(v12, 2000);
  GameRoutine_16bde0(v12, 20.0);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  v13 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 24LL);
  GameRoutine_16b760(v13, 3);
  v14 = *(_QWORD*)(v13 + 8LL * *(unsigned int*)(v13 + 124) + 128);
  GameRoutine_16bdb0(v14, 4000);
  GameRoutine_16bde0(v14, 20.0);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
}

__int64 GameHr_178780(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, int a6)
{
  __int64* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;

  GameRoutine_1678f0();
  v8 = GameData_21343a8[0];
  *(_QWORD*)(a1 + 5720) = 0;
  *(_DWORD*)(a1 + 5728) = 0;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5688) = 0;
  *(_QWORD*)(a1 + 5696) = 0;
  *(_WORD*)(a1 + 5704) = 0;
  *(_QWORD*)a1 = v8 + 2;
  *(_QWORD*)(a1 + 5592) = v8 + 171;
  *(_QWORD*)(a1 + 40) = v8 + 30;
  *(_QWORD*)(a1 + 5708) = 0;
  result = GameRoutine_1a0a040(a1 + 5704, 1, 0);
  v10 = *(_QWORD*)(a1 + 5688);
  v11 = *(_QWORD*)(a1 + 5680);
  v12 = (v10 - v11) >> 4;
  if (a6 <= v12) {
    if (a6 < v12) {
      v10 = v11 + 16LL * a6;
      *(_QWORD*)(a1 + 5688) = v10;
    }
  }
  else {
    result = GameRoutine_178f40(a1 + 5680, a6 - v12);
    v10 = *(_QWORD*)(a1 + 5688);
    v11 = *(_QWORD*)(a1 + 5680);
  }
  if (v10 != v11) {
    v13 = 0;
    v14 = 0;
    do {
      result = GameRoutine_112080(v11 + v13);
      v11 = *(_QWORD*)(a1 + 5680);
      ++v14;
      v13 += 16;
    } while (v14 < (*(_QWORD*)(a1 + 5688) - v11) >> 4);
  }
  return result;
}

__int64 GameHr_179260(__int64 a1, int a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;

  GameRoutine_2af320();
  v4 = GameData_2134768[0];
  *(_WORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 132) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)a1 = v4 + 16;
  result = GameRoutine_1a0a040(a1 + 128, 1, 0);
  v6 = *(_QWORD*)(a1 + 112);
  v7 = *(_QWORD*)(a1 + 104);
  v8 = (v6 - v7) >> 3;
  if (a2 <= v8) {
    if (a2 < v8) {
      v6 = v7 + 8LL * a2;
      *(_QWORD*)(a1 + 112) = v6;
    }
  }
  else {
    result = GameRoutine_179600(a1 + 104, a2 - v8);
    v7 = *(_QWORD*)(a1 + 104);
    v6 = *(_QWORD*)(a1 + 112);
  }
  if (v6 != v7) {
    v9 = 0;
    do {
      *(_QWORD*)(v7 + 8 * v9++) = 0;
      v7 = *(_QWORD*)(a1 + 104);
    } while (v9 < (*(_QWORD*)(a1 + 112) - v7) >> 3);
  }
  return result;
}

__int64 GameHr_179780(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64* v8;

  *(_QWORD*)a1 = GameData_2134248[0] + 2;
  *(_DWORD*)(a1 + 8) = 0x2000;
  GameRoutine_112320();
  v8 = GameData_2134b98[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = a2;
  *(_QWORD*)a1 = v8 + 2;
  GameRoutine_190020(a1 + 40, &GameData_1a9f09e);
  *(_DWORD*)(a1 + 64) = a4;
  *(_BYTE*)(a1 + 68) = 0;
  return GameRoutine_190200(a1 + 40, a3);
}

__int64 GameHr_179810(__int64 a1)
{
  __int64 v1;

  *(_QWORD*)a1 = GameData_1f6fe88;
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v1 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _QWORD))(
        **(_QWORD**)GameData_212d480[0] + 24LL))(
        (void*)*(_QWORD**)GameData_212d480[0], *GameData_212d480[0],
        *(_QWORD*)(a1 + 56));
    a1 = v1;
  }
  *(_QWORD*)a1 = GameData_1f54618;
  return GameRoutine_112460();
}

__int64 GameHr_1798b0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64* v8;
  __int64 result;

  *(_QWORD*)a1 = GameData_2134248[0] + 2;
  *(_DWORD*)(a1 + 8) = 0x2000;
  GameRoutine_112320();
  v8 = GameData_2134b98[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = a2;
  *(_QWORD*)a1 = v8 + 2;
  GameRoutine_190020(a1 + 40, &GameData_1a9f09e);
  *(_DWORD*)(a1 + 64) = a4;
  *(_BYTE*)(a1 + 68) = 0;
  result = GameRoutine_190200(a1 + 40, a3);
  *(_QWORD*)a1 = GameData_2134ba0[0] + 2;
  return result;
}

__int64 GameHr_179c10(__int64 a1)
{
  __int64 result;

  GameRoutine_2afd20();
  *(_QWORD*)a1 = GameData_2134bb0[0] + 2;
  result = GameRoutine_17a550(a1 + 48);
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 96) = 3;
  *(_QWORD*)(a1 + 104) = 0x200000001LL;
  *(_QWORD*)(a1 + 112) = 0x400000003LL;
  *(_DWORD*)(a1 + 120) = 5;
  return result;
}

__int64 GameHr_17a550(__int64 result)
{
  *(_DWORD*)(result + 24) = 0;
  *(_WORD*)(result + 28) = 0;
  *(_QWORD*)result = 20000;
  *(_QWORD*)(result + 8) = 300000000;
  *(_QWORD*)(result + 16) = 0x3F80000000000000LL;
  return result;
}

__int64 GameHr_17a590(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 result;

  *(_WORD*)(a1 + 16) = 0;
  v3 = GameData_2134bb8;
  *(_DWORD*)(a1 + 20) = 48000;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 96) = 6;
  *(_QWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 112) = 0x2000;
  *(_DWORD*)(a1 + 120) = 6;
  *(_QWORD*)(a1 + 128) = 0;
  *(_DWORD*)(a1 + 136) = 0x2000;
  *(_DWORD*)(a1 + 144) = 6;
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 0x2000;
  *(_DWORD*)(a1 + 168) = 6;
  *(_QWORD*)(a1 + 176) = 0;
  *(_DWORD*)(a1 + 184) = 0x2000;
  *(_BYTE*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 8) = a2;
  result = GameRoutine_1a0a710(a1 + 240, 0, 0);
  *(_QWORD*)(a1 + 256) = 0;
  *(_DWORD*)(a1 + 264) = 0x2000;
  *(_QWORD*)(a1 + 272) = 0;
  *(_DWORD*)(a1 + 280) = 0x2000;
  *(_QWORD*)(a1 + 288) = 0;
  *(_DWORD*)(a1 + 296) = 0x2000;
  *(_QWORD*)(a1 + 304) = 0;
  *(_DWORD*)(a1 + 312) = 0x2000;
  return result;
}

__int64 GameHr_17a790(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if ((*(_BYTE*)(result + 16) & 1) == 0) {
    v24 = v2;
    v3 = result;
    GameRoutine_1a09b70(&GameData_2199b50);
    v4 = GameData_212d480[0];
    v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 5816,
                                                 32);
    GameRoutine_17cd20(v5, v3);
    *(_QWORD*)(v3 + 24) = v5;
    GameRoutine_17d5c0(v5);
    v6 = *v4;
    *(_BYTE*)(v3 + 192) = 0;
    *(_QWORD*)(v3 + 200) = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)v6 + 16LL))(v6, 448, 4096);
    v7 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
        *v4, 0x40000, 4096);
    v8 = *(_QWORD*)(v3 + 208);
    *(_QWORD*)(v3 + 208) = v7;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
      v9 = *(_QWORD*)(v3 + 208);
    }
    else {
      v9 = v7;
    }
    v10 = *(_QWORD*)(v3 + 200);
    v11 = (_QWORD*)GameData_212e2d0[0];
    v12 = (*(__int64 (**)(_QWORD))(**(_QWORD**)GameData_212e2d0[0] + 64LL))(
        *(_QWORD*)GameData_212e2d0[0]);
    v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v11 + 48LL))(*v11);
    GameRoutine_1a0a7e0(v10, GameData_2134bc8[0], v3, v9, 0x40000,
                        (unsigned int)(v12 + 1), v13, v14, v1, v24);
    GameRoutine_1a0a7f0(*(_QWORD*)(v3 + 200), "SND_PlayerUpdate");
    GameRoutine_1a0a800(*(_QWORD*)(v3 + 200));
    v15 = *v4;
    *(_BYTE*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)v15 + 16LL))(v15, 448, 4096);
    v16 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v4 + 16LL))(
        *v4, 0x40000, 4096);
    v17 = *(_QWORD*)(v3 + 232);
    *(_QWORD*)(v3 + 232) = v16;
    if (v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
      v18 = *(_QWORD*)(v3 + 232);
    }
    else {
      v18 = v16;
    }
    v19 = *(_QWORD*)(v3 + 224);
    v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v11 + 64LL))(*v11);
    v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v11 + 48LL))(*v11);
    GameRoutine_1a0a7e0(v19, GameData_2134bd0, v3, v18, 0x40000,
                        (unsigned int)(v20 + 2), v21, v22, v23, v25);
    GameRoutine_1a0a7f0(*(_QWORD*)(v3 + 224), "SND_PlayerTask");
    GameRoutine_1a0a800(*(_QWORD*)(v3 + 224));
    *(_BYTE*)(v3 + 16) = 1;
    return GameRoutine_1a09b80(GameData_2134bc0);
  }
  return result;
}

__int64 GameHr_17a9c0(__int64 a1)
{
  __int64 v2;
  __int64 SystemTickEv;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  _BYTE v15[64];

  v2 = GameRoutine_1a09f00(v15, 1);
  SystemTickEv = GameRoutine_1a09ba0(v2);
  if ((*(_BYTE*)(a1 + 192) & 1) == 0) {
    v5 = SystemTickEv;
    v6 = 0;
    do {
      v7 = GameRoutine_1a09ba0(SystemTickEv);
      v8 = GameRoutine_1a09bb0(v7 - v5);
      v9 = v6;
      v10 = v8 / 1000;
      v11 = v8 / 1000;
      if (v8 >= 0x1F3FFFFFFFFC18LL) {
        v9 = v6 - v10;
        v5 = GameRoutine_1a09ba0(v8);
        v11 = 0;
      }
      v12 = v10 - v6;
      GameRoutine_1a0a730(a1 + 240);
      if (v12 <= 49999) {
        v13 = v12;
      }
      else {
        v13 = 5000;
      }
      if (v12 <= 49999) {
        v6 = v9;
      }
      else {
        v6 = v11 + 5000;
      }
      if (v13 >= 5000) {
        v14 = v13 + 5000;
        do {
          GameRoutine_17afe0(a1, 5.0);
          v14 -= 5000LL;
          v6 += 5000;
        } while (v14 >> 4 > 0x270);
      }
      GameRoutine_1a0a1e0(v15, 2500000);
      SystemTickEv = GameRoutine_1a09f40(v15);
    } while (*(_BYTE*)(a1 + 192) != 1);
  }
  return GameRoutine_1a09f30(v15);
}

__int64 GameHr_17ab20(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;

  result = GameRoutine_1a0bfe0(0);
  if ((*(_BYTE*)(a1 + 216) & 1) == 0) {
    GameRoutine_1a0a720(a1 + 240);
    for (result = GameRoutine_1a0a8a0(a1 + 240); (*(_BYTE*)(a1 + 216) & 1) == 0;
         result = GameRoutine_1a0a8a0(a1 + 240)) {
      if (*(_BYTE*)(a1 + 16) == 1) {
        GameRoutine_1a09b70(&GameData_2199bb0);
        v4 = *(_QWORD*)(a1 + 32);
        v3 = *(_QWORD*)(a1 + 40);
        if (v3 != v4) {
          v5 = 0;
          do {
            v6 = *(_QWORD*)(v4 + 8 * v5);
            if (v6 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v6 + 1144LL))(v6);
              v4 = *(_QWORD*)(a1 + 32);
              v3 = *(_QWORD*)(a1 + 40);
            }
            ++v5;
          } while (v5 < (v3 - v4) >> 3);
        }
        v8 = *(_QWORD*)(a1 + 64);
        v7 = *(_QWORD*)(a1 + 72);
        if (v7 != v8) {
          v9 = 0;
          do {
            v10 = *(_QWORD*)(v8 + 8 * v9);
            if (v10 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10);
              v8 = *(_QWORD*)(a1 + 64);
              v7 = *(_QWORD*)(a1 + 72);
            }
            ++v9;
          } while (v9 < (v7 - v8) >> 3);
        }
        result = GameRoutine_1a09b80(&GameData_2199bb0);
        if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
          break;
        }
      }
      GameRoutine_1a0a720(a1 + 240);
    }
  }
  return result;
}

__int64 GameHr_17ac60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  void (***v17)(_QWORD);

  if (*(_BYTE*)(result + 16) == 1) {
    v1 = result;
    GameRoutine_1a09b70(&GameData_2199b70);
    v2 = *(_QWORD*)(v1 + 32);
    if (*(_QWORD*)(v1 + 40) == v2) {
      v4 = 0;
    }
    else {
      v3 = 0;
      v4 = 0;
      do {
        v5 = *(_QWORD*)(v2 + 8 * v3);
        if (v5 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 1288LL))(v5) & 1) !=
              0) {
            GameRoutine_17ae40(v1, *(_QWORD*)(*(_QWORD*)(v1 + 32) + 8 * v3));
          }
          else {
            ++v4;
          }
        }
        v2 = *(_QWORD*)(v1 + 32);
        ++v3;
      } while (v3 < (*(_QWORD*)(v1 + 40) - v2) >> 3);
    }
    v7 = *(_QWORD*)(v1 + 64);
    v6 = *(_QWORD*)(v1 + 72);
    *(_DWORD*)(v1 + 56) = v4;
    if (v6 != v7) {
      v8 = 0;
      do {
        v9 = *(_QWORD*)(v7 + 8 * v8);
        if (v9 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
          v7 = *(_QWORD*)(v1 + 64);
          v6 = *(_QWORD*)(v1 + 72);
        }
        ++v8;
      } while (v8 < (v6 - v7) >> 3);
    }
    if (v6 == v7) {
      v11 = 0;
    }
    else {
      v10 = 0;
      v11 = 0;
      v12 = GameData_212d480[0];
      do {
        v13 = *(_QWORD*)(v7 + 8 * v10);
        if (v13 != 0) {
          if (*(_BYTE*)(v13 + 152) == 1) {
            if (v6 == v7) {
              v6 = v7;
            }
            else {
              v14 = 0;
              while (1) {
                v15 = *(_QWORD*)(v7 + 8 * v14);
                if (v15 == v13) {
                  break;
                }
                if ((v6 - v7) >> 3 == ++v14) {
                  goto LABEL_19;
                }
              }
              (*(void (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
              v16 = *(_QWORD*)(v1 + 64);
              v17 = *(void (****)(_QWORD))(v16 + 8 * v14);
              *(_QWORD*)(v16 + 8 * v14) = 0;
              (**v17)(v17);
              (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v12 +
                                                         24LL))(*v12, v17);
              v7 = *(_QWORD*)(v1 + 64);
              v6 = *(_QWORD*)(v1 + 72);
            }
          }
          else {
            ++v11;
          }
        }
      LABEL_19:
        ++v10;
      } while (v10 < (v6 - v7) >> 3);
    }
    *(_DWORD*)(v1 + 88) = v11;
    return GameRoutine_1a09b80(&GameData_2199b70);
  }
  return result;
}

__int64 GameHr_17ae40(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void (***v10)(_QWORD);

  GameRoutine_1a09b70(GameData_2134be0[0]);
  GameRoutine_1a09b70(&GameData_2199b90);
  GameRoutine_1a09b70(&GameData_2199bb0);
  v4 = *(_QWORD*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 40) - v4;
  if (v5 != 0) {
    v6 = v5 >> 3;
    v7 = 0;
    while (1) {
      v8 = *(_QWORD*)(v4 + 8 * v7);
      if (v8 == a2) {
        break;
      }
      if (v6 == ++v7) {
        goto LABEL_7;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v8 + 1128LL))(v8);
    v9 = *(_QWORD*)(a1 + 32);
    v10 = *(void (****)(_QWORD))(v9 + 8 * v7);
    *(_QWORD*)(v9 + 8 * v7) = 0;
    (**v10)(v10);
    (*(void (**)(_QWORD, void (***)(_QWORD)))(**(_QWORD**)GameData_212d480[0] +
                                              24LL))(*GameData_212d480[0], v10);
  }
LABEL_7:
  GameRoutine_1a09b80(&GameData_2199bb0);
  GameRoutine_1a09b80(&GameData_2199b90);
  return GameRoutine_1a09b80(&GameData_2199b70);
}

__int64 GameHr_17af40(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  void (***v9)(_QWORD);

  v2 = *(_QWORD*)(result + 64);
  v3 = *(_QWORD*)(result + 72) - v2;
  if (v3 != 0) {
    v4 = v3 >> 3;
    v5 = 0;
    while (1) {
      v6 = *(_QWORD**)(v2 + 8 * v5);
      if (v6 == a2) {
        break;
      }
      if (v4 == ++v5) {
        return result;
      }
    }
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v6 + 24LL))(
        (void*)v6, *(_QWORD*)(v2 + 8 * v5));
    v8 = *(_QWORD*)(v7 + 64);
    v9 = *(void (****)(_QWORD))(v8 + 8 * v5);
    *(_QWORD*)(v8 + 8 * v5) = 0;
    (**v9)(v9);
    return (*(__int64 (**)(_QWORD, void (***)(_QWORD)))(
        **(_QWORD**)GameData_212d480[0] + 24LL))(*GameData_212d480[0], v9);
  }
  return result;
}

__int64 GameHr_17afe0(__int64 result, float a2)
{
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  if (*(_BYTE*)(result + 16) == 1) {
    v3 = result;
    v4 = (__int16*)GameData_2134bc0;
    GameRoutine_1a09b70(GameData_2134bc0);
    v5 = GameRoutine_17b320(v3 + 104);
    if (v5 != 0) {
      v6 = v5;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 160LL))(v5) & 1) == 0) {
        GameRoutine_1a09b80(&GameData_2199b50);
        v4 = &GameData_2199b90;
        GameRoutine_1a09b70(&GameData_2199b90);
        do {
          v9 = *(_QWORD*)(v3 + 32);
          v8 = *(_QWORD*)(v3 + 40);
          if (v8 != v9) {
            v10 = 0;
            do {
              v11 = *(_QWORD*)(v9 + 8 * v10);
              if (v11 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v11 + 1136LL))(v11);
                v9 = *(_QWORD*)(v3 + 32);
                v8 = *(_QWORD*)(v3 + 40);
              }
              ++v10;
            } while (v10 < (v8 - v9) >> 3);
          }
          if (v8 != v9) {
            v12 = 0;
            do {
              v13 = *(_QWORD*)(v9 + 8 * v12);
              if (v13 != 0) {
                (*(void (**)(__int64, __int64, _QWORD, float))(
                    *(_QWORD*)v13 + 1160LL))(v13, 6, *(unsigned int*)(v3 + 20),
                                             a2);
                v9 = *(_QWORD*)(v3 + 32);
                v8 = *(_QWORD*)(v3 + 40);
              }
              ++v12;
            } while (v12 < (v8 - v9) >> 3);
          }
          v14 = *(_DWORD*)(v3 + 20);
          v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 208LL))(v6);
          if ((int)(100 *
                    (*(unsigned int (**)(__int64))(*(_QWORD*)v6 + 216LL))(v6) /
                    v15) <= 19) {
            break;
          }
          v16 = (int)(float)((float)(a2 * (float)v14) / 1000.0);
          if ((GameRoutine_17d940(*(_QWORD*)(v3 + 24), v16, 6,
                                  *(unsigned int*)(v3 + 20)) &
               1) != 0) {
            v18 = *(_QWORD*)(v3 + 32);
            v17 = *(_QWORD*)(v3 + 40);
            if (v17 != v18) {
              v19 = 0;
              do {
                v20 = *(_QWORD*)(v18 + 8 * v19);
                if (v20 != 0) {
                  GameRoutine_17da60(*(_QWORD*)(v3 + 24), v20, v16, 6,
                                     *(unsigned int*)(v3 + 20));
                  v18 = *(_QWORD*)(v3 + 32);
                  v17 = *(_QWORD*)(v3 + 40);
                }
                ++v19;
              } while (v19 < (v17 - v18) >> 3);
            }
            GameRoutine_17e300(*(_QWORD*)(v3 + 24));
          }
          GameRoutine_17e320(*(_QWORD*)(v3 + 24), 6);
          GameRoutine_17e680(*(_QWORD*)(v3 + 24), v6, 0, v16,
                             *(unsigned int*)(v3 + 96));
          v21 = GameRoutine_17b320(v3 + 128);
          if (v21 != 0) {
            v22 = v21;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 160LL))(v21) & 1) ==
                0) {
              GameRoutine_17e680(*(_QWORD*)(v3 + 24), v22, 1, v16,
                                 *(unsigned int*)(v3 + 120));
            }
          }
          v23 = GameRoutine_17b320(v3 + 152);
          if (v23 != 0) {
            v24 = v23;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 160LL))(v23) & 1) ==
                0) {
              GameRoutine_17e680(*(_QWORD*)(v3 + 24), v24, 2, v16,
                                 *(unsigned int*)(v3 + 144));
            }
          }
          v25 = GameRoutine_17b320(v3 + 176);
          if (v25 != 0) {
            v26 = v25;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 160LL))(v25) & 1) ==
                0) {
              GameRoutine_17e680(*(_QWORD*)(v3 + 24), v26, 3, v16,
                                 *(unsigned int*)(v3 + 168));
            }
          }
          v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 208LL))(v6);
        } while (
            (int)(100 *
                  (*(unsigned int (**)(__int64))(*(_QWORD*)v6 + 216LL))(v6) /
                  v7) > 49);
      }
    }
    return GameRoutine_1a09b80(v4);
  }
  return result;
}

__int64* GameHr_17b320(__int64 a1)
{
  __int64* result;
  __int64 v3;
  unsigned __int8 explicit;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64* v9;

  result = (__int64*)GameRoutine_112290(a1);
  if (result != nullptr) {
    v3 = GameRoutine_112290(a1);
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v3 - 5592) + 64LL))(
        v3 - 5592);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2134b78,
                                    memory_order_acquire);
    v5 = GameData_2134b80;
    if ((explicit & 1) == 0) {
      v9 = result;
      v8 = GameRoutine_1a09fd0(GameData_2134b78);
      v5 = GameData_2134b80;
      result = v9;
      if (v8 != 0) {
        *GameData_2134b80 = GameRoutine_a38b10(v9);
        GameRoutine_1a09fe0(GameData_2134b78);
        v5 = GameData_2134b80;
        result = v9;
      }
    }
    if (result == v5) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != v5 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v7 = GameRoutine_112290(a1);
      if (v7 != 0) {
        return (__int64*)(v7 - 5592);
      }
      else {
        return nullptr;
      }
    }
  }
  return result;
}

__int64 GameHr_17bb20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  void (***v8)(_QWORD);

  GameRoutine_1a09b70(&GameData_2199b70);
  GameRoutine_1a09b70(&GameData_2199b90);
  GameRoutine_1a09b70(&GameData_2199bb0);
  v3 = *(_QWORD*)(a1 + 32);
  v2 = *(_QWORD*)(a1 + 40);
  if (v2 != v3) {
    v4 = 0;
    v5 = GameData_212d480[0];
    do {
      v6 = *(_QWORD*)(v3 + 8 * v4);
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 1128LL))(v6);
        v7 = *(_QWORD*)(a1 + 32);
        v8 = *(void (****)(_QWORD))(v7 + 8 * v4);
        *(_QWORD*)(v7 + 8 * v4) = 0;
        (**v8)(v8);
        (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v5 + 24LL))(*v5,
                                                                          v8);
        v3 = *(_QWORD*)(a1 + 32);
        v2 = *(_QWORD*)(a1 + 40);
      }
      ++v4;
    } while (v4 < (v2 - v3) >> 3);
  }
  GameRoutine_1a09b80(&GameData_2199bb0);
  GameRoutine_1a09b80(&GameData_2199b90);
  return GameRoutine_1a09b80(&GameData_2199b70);
}

__int64 GameHr_17bcd0(__int64 a1, __int64 a2)
{
  unsigned int v4;
  int v5;
  unsigned int v6;
  __int64 v8;
  int v9;

  GameRoutine_1a09b70(GameData_2134bc0);
  GameRoutine_1a09b70(&GameData_2199b90);
  if (a2 != 0) {
    if ((GameRoutine_1120d0(a1 + 104) & 1) == 0) {
      v8 = 0;
      v9 = 0x2000;
      GameRoutine_1121e0(&v8, a2 + 5592);
      GameRoutine_112180(a1 + 104, &v8);
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 136LL))(a2);
      v5 = *(_DWORD*)(a1 + 20);
      *(_DWORD*)(a1 + 96) = v4;
      v6 = v5 / 200;
      GameRoutine_17e7e0(*(_QWORD*)(a1 + 24), a2, (unsigned int)(v5 / 200), v4);
      GameRoutine_17e7e0(*(_QWORD*)(a1 + 24), a2, v6,
                         *(unsigned int*)(a1 + 96));
      GameRoutine_17e7e0(*(_QWORD*)(a1 + 24), a2, v6,
                         *(unsigned int*)(a1 + 96));
      GameRoutine_17e7e0(*(_QWORD*)(a1 + 24), a2, v6,
                         *(unsigned int*)(a1 + 96));
      GameRoutine_17e7e0(*(_QWORD*)(a1 + 24), a2, v6,
                         *(unsigned int*)(a1 + 96));
      GameRoutine_17e7e0(*(_QWORD*)(a1 + 24), a2, v6,
                         *(unsigned int*)(a1 + 96));
      GameRoutine_17e7e0(*(_QWORD*)(a1 + 24), a2, v6,
                         *(unsigned int*)(a1 + 96));
      GameRoutine_17e7e0(*(_QWORD*)(a1 + 24), a2, v6,
                         *(unsigned int*)(a1 + 96));
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 152LL))(a2, 0);
    }
  }
  else {
    GameRoutine_112080(a1 + 104);
  }
  GameRoutine_1a09b80(&GameData_2199b90);
  return GameRoutine_1a09b80(&GameData_2199b50);
}

__int64 GameHr_17be70(__int64 result, int a2)
{
  __int64 v2;
  __int64 v4;

  if (a2 <= 2) {
    v2 = result;
    GameRoutine_1a09b70(GameData_2134bc0);
    GameRoutine_1a09b70(&GameData_2199b90);
    if ((unsigned int)a2 <= 2) {
      v4 = GameData_2134bc0;
      GameRoutine_1a09b70(GameData_2134bc0);
      GameRoutine_1a09b70(&GameData_2199b90);
      GameRoutine_112080(v2 + (unsigned int)(24 * a2) + 128);
      GameRoutine_1a09b80(&GameData_2199b90);
      GameRoutine_1a09b80(v4);
    }
    GameRoutine_112080(v2 + 16LL * (unsigned int)a2 + 272);
    GameRoutine_1a09b80(&GameData_2199b90);
    return GameRoutine_1a09b80(&GameData_2199b50);
  }
  return result;
}

__int64* GameHr_17c940(__int64 a1)
{
  __int64* result;
  __int64 v3;
  unsigned __int8 explicit;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64* v9;

  result = (__int64*)GameRoutine_112290(a1);
  if (result != nullptr) {
    v3 = GameRoutine_112290(a1);
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v3 - 5592) + 64LL))(
        v3 - 5592);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2134b78,
                                    memory_order_acquire);
    v5 = GameData_2134b80;
    if ((explicit & 1) == 0) {
      v9 = result;
      v8 = GameRoutine_1a09fd0(GameData_2134b78);
      v5 = GameData_2134b80;
      result = v9;
      if (v8 != 0) {
        *GameData_2134b80 = GameRoutine_a38b10(v9);
        GameRoutine_1a09fe0(GameData_2134b78);
        v5 = GameData_2134b80;
        result = v9;
      }
    }
    if (result == v5) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != v5 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v7 = GameRoutine_112290(a1);
      if (v7 != 0) {
        return (__int64*)(v7 - 5592);
      }
      else {
        return nullptr;
      }
    }
  }
  return result;
}

__int64 GameHr_17ca40()
{
  __int64 v0;

  v0 = GameRoutine_119030(GameData_2178e00);
  return GameRoutine_17b410(v0);
}

__int64 GameHr_17ca70()
{
  __int64 v0;
  __int64 v1;

  v0 = GameRoutine_119030(GameData_2178e00);
  return GameRoutine_17ba40(v0, v1);
}

__int64 GameHr_17caa0()
{
  __int64 v0;
  __int64* v1;
  char v2;

  v0 = GameRoutine_119030(GameData_2178e00);
  GameRoutine_1a09b70(&GameData_2199b50);
  v1 = GameRoutine_17c940(v0 + 104);
  if (v1 != nullptr) {
    v2 = (*(__int64 (**)(__int64*))(*v1 + 160))(v1) ^ 1;
  }
  else {
    v2 = 0;
  }
  GameRoutine_1a09b80(&GameData_2199b50);
  return v2 & 1;
}

__int64 GameHr_17cd20(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 result;

  GameRoutine_1261b0();
  v4 = GameData_2134c00[0];
  *(_QWORD*)(a1 + 5552) = a2;
  *(_QWORD*)a1 = v4 + 2;
  v5 = GameData_2134c08[0];
  *(_QWORD*)(a1 + 5568) = 0;
  *(_QWORD*)(a1 + 5576) = 0;
  *(_QWORD*)(a1 + 5584) = 0;
  *(_QWORD*)(a1 + 5592) = 0;
  *(_QWORD*)(a1 + 5600) = 0;
  *(_DWORD*)(a1 + 5608) = 0;
  v6 = v5 + 2;
  *(_QWORD*)(a1 + 5560) = v5 + 2;
  v7 = GameData_212d480[0];
  v8 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 115200,
                                               32);
  GameRoutine_1a0ba50(v8, 0, 115200, v9, v10, v11);
  v12 = *v7;
  *(_QWORD*)(a1 + 5568) = v8;
  v13 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v12 + 16LL))(
      v12, 115200, 32);
  GameRoutine_1a0ba50(v13, 0, 115200, v14, v15, v16);
  v17 = *v7;
  *(_QWORD*)(a1 + 5576) = v13;
  v18 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v17 + 16LL))(
      v17, 115200, 32);
  GameRoutine_1a0ba50(v18, 0, 115200, v19, v20, v21);
  v22 = *v7;
  *(_QWORD*)(a1 + 5584) = v18;
  v23 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v22 + 16LL))(
      v22, 115200, 32);
  GameRoutine_1a0ba50(v23, 0, 115200, v24, v25, v26);
  v27 = *v7;
  *(_QWORD*)(a1 + 5592) = v23;
  *(_QWORD*)(a1 + 5616) = v6;
  *(_QWORD*)(a1 + 5624) = 0;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_QWORD*)(a1 + 5640) = 0;
  *(_QWORD*)(a1 + 5648) = 0;
  *(_QWORD*)(a1 + 5656) = 0;
  *(_DWORD*)(a1 + 5664) = 0;
  v28 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v27 + 16LL))(
      v27, 115200, 32);
  GameRoutine_1a0ba50(v28, 0, 115200, v29, v30, v31);
  v32 = *v7;
  *(_QWORD*)(a1 + 5624) = v28;
  v33 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v32 + 16LL))(
      v32, 115200, 32);
  GameRoutine_1a0ba50(v33, 0, 115200, v34, v35, v36);
  v37 = *v7;
  *(_QWORD*)(a1 + 5632) = v33;
  v38 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v37 + 16LL))(
      v37, 115200, 32);
  GameRoutine_1a0ba50(v38, 0, 115200, v39, v40, v41);
  v42 = *v7;
  *(_QWORD*)(a1 + 5640) = v38;
  v43 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v42 + 16LL))(
      v42, 115200, 32);
  GameRoutine_1a0ba50(v43, 0, 115200, v44, v45, v46);
  v47 = *v7;
  *(_QWORD*)(a1 + 5648) = v43;
  *(_QWORD*)(a1 + 5672) = v6;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5688) = 0;
  *(_QWORD*)(a1 + 5696) = 0;
  *(_QWORD*)(a1 + 5704) = 0;
  *(_QWORD*)(a1 + 5712) = 0;
  *(_DWORD*)(a1 + 5720) = 0;
  v48 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v47 + 16LL))(
      v47, 115200, 32);
  GameRoutine_1a0ba50(v48, 0, 115200, v49, v50, v51);
  v52 = *v7;
  *(_QWORD*)(a1 + 5680) = v48;
  v53 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v52 + 16LL))(
      v52, 115200, 32);
  GameRoutine_1a0ba50(v53, 0, 115200, v54, v55, v56);
  v57 = *v7;
  *(_QWORD*)(a1 + 5688) = v53;
  v58 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v57 + 16LL))(
      v57, 115200, 32);
  GameRoutine_1a0ba50(v58, 0, 115200, v59, v60, v61);
  v62 = *v7;
  *(_QWORD*)(a1 + 5696) = v58;
  v63 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v62 + 16LL))(
      v62, 115200, 32);
  GameRoutine_1a0ba50(v63, 0, 115200, v64, v65, v66);
  v67 = *v7;
  *(_QWORD*)(a1 + 5704) = v63;
  *(_QWORD*)(a1 + 5728) = 0;
  *(_QWORD*)(a1 + 5736) = 0;
  *(_QWORD*)(a1 + 5744) = 0;
  *(_QWORD*)(a1 + 5752) = 0;
  *(_QWORD*)(a1 + 5760) = 0;
  *(_QWORD*)(a1 + 5768) = 0;
  *(_QWORD*)(a1 + 5776) = 0;
  *(_QWORD*)(a1 + 5784) = 0;
  *(_QWORD*)(a1 + 5792) = 0;
  *(_QWORD*)(a1 + 5800) = 0;
  *(_QWORD*)(a1 + 5808) = 0;
  v68 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v67 + 16LL))(
      v67, 115200, 32);
  GameRoutine_1a0ba50(v68, 0, 115200, v69, v70, v71);
  v72 = *v7;
  *(_QWORD*)(a1 + 5736) = v68;
  v73 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v72 + 16LL))(
      v72, 115200, 32);
  GameRoutine_1a0ba50(v73, 0, 115200, v74, v75, v76);
  v77 = *v7;
  *(_QWORD*)(a1 + 5744) = v73;
  v78 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v77 + 16LL))(
      v77, 115200, 32);
  GameRoutine_1a0ba50(v78, 0, 115200, v79, v80, v81);
  v82 = *v7;
  *(_QWORD*)(a1 + 5752) = v78;
  v83 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v82 + 16LL))(
      v82, 115200, 32);
  GameRoutine_1a0ba50(v83, 0, 115200, v84, v85, v86);
  v87 = *v7;
  *(_QWORD*)(a1 + 5760) = v83;
  v88 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v87 + 16LL))(
      v87, 57608, 32);
  GameRoutine_1a0ba50(v88, 0, 57608, v89, v90, v91);
  v92 = *v7;
  *(_QWORD*)(a1 + 5768) = v88;
  v93 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v92 + 16LL))(
      v92, 57608, 32);
  GameRoutine_1a0ba50(v93, 0, 57608, v94, v95, v96);
  v97 = *v7;
  *(_QWORD*)(a1 + 5776) = v93;
  v98 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v97 + 16LL))(
      v97, 57608, 32);
  GameRoutine_1a0ba50(v98, 0, 57608, v99, v100, v101);
  v102 = *v7;
  *(_QWORD*)(a1 + 5784) = v98;
  v103 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v102 + 16LL))(
      v102, 57608, 32);
  GameRoutine_1a0ba50(v103, 0, 57608, v104, v105, v106);
  v107 = *v7;
  *(_QWORD*)(a1 + 5792) = v103;
  result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v107 + 16LL))(
      v107, 28800, 32);
  *(_QWORD*)(a1 + 5800) = result;
  return result;
}

__int64 GameHr_17ea40(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 result;

  GameRoutine_189e50(a1, a2);
  *(_QWORD*)(a1 + 11160) = 0;
  v3 = GameData_2134c10;
  *(_QWORD*)(a1 + 11168) = 0;
  *(_QWORD*)(a1 + 11176) = 0;
  *(_QWORD*)(a1 + 11184) = 0;
  *(_QWORD*)(a1 + 11192) = 0;
  *(_QWORD*)(a1 + 11200) = 0;
  *(_QWORD*)(a1 + 11208) = 0;
  *(_QWORD*)(a1 + 11216) = 0;
  *(_QWORD*)(a1 + 11224) = 0;
  *(_QWORD*)(a1 + 11232) = 0;
  *(_QWORD*)(a1 + 11240) = 0;
  *(_QWORD*)(a1 + 11248) = 0;
  *(_QWORD*)(a1 + 11256) = 0;
  *(_QWORD*)(a1 + 11264) = 0;
  *(_QWORD*)(a1 + 11272) = 0;
  *(_QWORD*)(a1 + 11312) = 0;
  *(_QWORD*)(a1 + 11320) = 0;
  *(_QWORD*)(a1 + 11328) = 0;
  *(_QWORD*)(a1 + 11368) = 0;
  *(_QWORD*)(a1 + 11376) = 0;
  *(_QWORD*)(a1 + 11384) = 0;
  *(_QWORD*)(a1 + 11424) = 0;
  *(_QWORD*)(a1 + 11432) = 0;
  *(_QWORD*)(a1 + 11440) = 0;
  *(_QWORD*)(a1 + 11516) = 0;
  *(_QWORD*)(a1 + 11528) = 0;
  *(_DWORD*)(a1 + 11536) = 0;
  *(_QWORD*)(a1 + 11480) = 0;
  *(_QWORD*)(a1 + 11488) = 0;
  *(_QWORD*)(a1 + 11496) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 5552) = v3 + 207;
  *(_DWORD*)(a1 + 11280) = 2;
  *(_DWORD*)(a1 + 11308) = 2;
  *(_DWORD*)(a1 + 11336) = 2;
  *(_DWORD*)(a1 + 11364) = 2;
  *(_DWORD*)(a1 + 11392) = 2;
  *(_DWORD*)(a1 + 11420) = 2;
  *(_DWORD*)(a1 + 11448) = 2;
  *(_DWORD*)(a1 + 11476) = 2;
  *(_QWORD*)(a1 + 11284) = 0;
  *(_QWORD*)(a1 + 11292) = 0;
  *(_QWORD*)(a1 + 11300) = 0;
  *(_BYTE*)(a1 + 11504) = 0;
  *(_QWORD*)(a1 + 11340) = 0;
  *(_QWORD*)(a1 + 11348) = 0;
  *(_QWORD*)(a1 + 11356) = 0;
  *(_QWORD*)(a1 + 11396) = 0;
  *(_QWORD*)(a1 + 11404) = 0;
  *(_QWORD*)(a1 + 11412) = 0;
  *(_QWORD*)(a1 + 11460) = 0;
  *(_QWORD*)(a1 + 11468) = 0;
  *(_QWORD*)(a1 + 11452) = 0;
  *(_WORD*)(a1 + 11512) = 0;
  result = GameRoutine_1a0a040(a1 + 11512, 1, 0);
  *(_DWORD*)(a1 + 11544) = -1;
  return result;
}

__int64 GameHr_180c80(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _BYTE* v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  _QWORD* v20;
  char* v21;
  unsigned __int64 v22;
  _BYTE* v23;
  unsigned __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  char v42;
  char* v43;
  unsigned __int64 v44;
  char* v45;
  _QWORD* v46;
  char* v47;
  unsigned __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 result;
  const char* v54;
  _QWORD v55[2];
  __int64 v56;
  __int64 v57;
  int v58;

  v3 = a1 + 4096;
  v4 = *(_QWORD*)(a1 + 32);
  *(_BYTE*)(v3 + 1821) = *(_BYTE*)(a2 + 226);
  v6 = (_QWORD*)GameRoutine_119030(v4);
  v7 = GameRoutine_17c340(v6);
  v57 = 0;
  v58 = 0x2000;
  if (v7 != 0) {
    v8 = v7 + 5552;
  }
  else {
    v8 = 0;
  }
  GameRoutine_1121e0(&v57, v8);
  GameRoutine_112180(a1 + 6072, &v57);
  v9 = *(_QWORD**)(a1 + 5648);
  v10 = (_BYTE*)(a1 + 5736);
  v11 = v9 + 4;
  if ((_QWORD*)(a1 + 5736) == v9 + 4) {
    goto LABEL_16;
  }
  v12 = *(unsigned __int8*)v11;
  if ((*v10 & 1) != 0) {
    v17 = (char*)v9 + 33;
    v20 = v9 + 5;
    v18 = v9[5];
    v19 = (char*)v20[1];
    if ((v12 & 1) != 0) {
      v21 = v19;
    }
    else {
      v21 = v17;
    }
    if ((v12 & 1) != 0) {
      v22 = v18;
    }
    else {
      v22 = v12 >> 1;
    }
    GameRoutine_a3a260(a1 + 5736, v21, v22);
  LABEL_16:
    v16 = *(_QWORD*)(a2 + 232);
    if (v16 != 0) {
      goto LABEL_17;
    }
    goto LABEL_30;
  }
  if ((v12 & 1) != 0) {
    GameRoutine_a3a3a0(a1 + 5736, v9[6], v9[5]);
    v16 = *(_QWORD*)(a2 + 232);
    if (v16 != 0) {
      goto LABEL_17;
    }
  LABEL_30:
    v31 = *(_QWORD**)(a1 + 5648);
    v32 = (_QWORD*)(v3 + 1584);
    v33 = v31 + 10;
    if ((_QWORD*)(v3 + 1584) != v31 + 10) {
      v34 = *(unsigned __int8*)v33;
      if ((*(_BYTE*)v32 & 1) != 0) {
        v43 = (char*)v31 + 81;
        v46 = v31 + 11;
        v44 = v31[11];
        v45 = (char*)v46[1];
        if ((v34 & 1) != 0) {
          v47 = v45;
        }
        else {
          v47 = v43;
        }
        if ((v34 & 1) != 0) {
          v48 = v44;
        }
        else {
          v48 = v34 >> 1;
        }
        GameRoutine_a3a260(v32, v47, v48);
      }
      else if ((v34 & 1) != 0) {
        GameRoutine_a3a3a0(v32, v31[12], v31[11]);
      }
      else {
        v35 = *v33;
        v36 = v33[1];
        v37 = v33[2];
        *(_QWORD*)(v3 + 1592) = v36;
        *(_QWORD*)(v3 + 1600) = v37;
        *v32 = v35;
      }
    }
    v49 = *(_QWORD*)(a1 + 5648);
    *(_DWORD*)(a1 + 5704) = *(_DWORD*)(v49 + 104);
    *(_DWORD*)(a1 + 5708) = *(_DWORD*)(v49 + 108);
    goto LABEL_47;
  }
  v13 = *v11;
  v14 = v11[1];
  v15 = v11[2];
  *(_QWORD*)(a1 + 5744) = v14;
  *(_QWORD*)(a1 + 5752) = v15;
  *(_QWORD*)v10 = v13;
  v16 = *(_QWORD*)(a2 + 232);
  if (v16 == 0) {
    goto LABEL_30;
  }
LABEL_17:
  v23 = (_BYTE*)(v3 + 1584);
  GameRoutine_190200(v3 + 1584, v16);
  v24 = *(unsigned __int8*)(v3 + 1584);
  if ((*(_BYTE*)(v3 + 1640) & 1) != 0) {
    v26 = (v24 & 1) == 0;
    v27 = v24 >> 1;
    if (v26) {
      v28 = a1 + 5681;
    }
    else {
      v28 = *(_QWORD*)(a1 + 5696);
    }
    if (v26) {
      v29 = v27;
    }
    else {
      v29 = *(_QWORD*)(a1 + 5688);
    }
    GameRoutine_a3a260(a1 + 5736, v28, v29);
    if ((*v23 & 1) != 0) {
      goto LABEL_35;
    }
    goto LABEL_28;
  }
  if ((v24 & 1) == 0) {
    v25 = *(_QWORD*)(v3 + 1592);
    *(_QWORD*)v10 = *(_QWORD*)v23;
    *(_QWORD*)(a1 + 5744) = v25;
    *(_QWORD*)(a1 + 5752) = *(_QWORD*)(v3 + 1600);
    if ((*v23 & 1) != 0) {
      goto LABEL_35;
    }
  LABEL_28:
    v30 = *(_QWORD*)(v3 + 1592);
    v55[0] = *(_QWORD*)v23;
    v55[1] = v30;
    v56 = *(_QWORD*)(v3 + 1600);
    goto LABEL_36;
  }
  GameRoutine_a3a3a0(a1 + 5736, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
  if ((*v23 & 1) == 0) {
    goto LABEL_28;
  }
LABEL_35:
  GameRoutine_1905a40(v55, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
LABEL_36:
  v38 = GameRoutine_190240(v55);
  v39 = GameRoutine_fdf60(v38, 0);
  v40 = GameRoutine_190240(v55);
  v41 = GameRoutine_fdfe0(v40, 0);
  v42 = v55[0];
  *(_DWORD*)(a1 + 5704) = v39;
  *(_DWORD*)(a1 + 5708) = v41;
  if ((v42 & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)GameData_212d480[0] + 24LL))(
        *GameData_212d480[0], v56);
  }
LABEL_47:
  v50 = (_QWORD*)GameData_212e2d0[0];
  v51 = *(_QWORD*)GameData_212e2d0[0];
  v52 = GameRoutine_190240(a1 + 5680);
  if (((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v51 + 424LL))(
           v51, a1, v52) &
       1) != 0) {
    GameRoutine_143ad0(a1);
  }
  result = (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      *(_QWORD*)*GameData_212e250 + 176LL))(*GameData_212e250, a1 + 5704,
                                            a1 + 5772, a1 + 5776);
  *(_DWORD*)(a1 + 5768) = result;
  if ((_DWORD)result == -1 && *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 120LL) == 0) {
    v54 = (const char*)GameRoutine_190240(a1 + 5680);
    result =
        (*(__int64 (**)(_QWORD, const char*, ...))(*(_QWORD*)*v50 + 392LL))(
            *v50, "#SoundLibrary error : InvalidSoundId : %s\n", v54);
    *(_BYTE*)(v3 + 1799) = 1;
  }
  return result;
}

__int64 GameHr_181620(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      _DWORD* a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v41;
  int v42;

  v14 = a1 + 4096;
  GameRoutine_1449c0();
  *(_QWORD*)(a1 + 6072) = 0;
  v15 = GameData_2134c38[0];
  *(_DWORD*)(a1 + 6080) = 0x2000;
  v41 = 0;
  v42 = 0x2000;
  *(_QWORD*)a1 = v15 + 2;
  *(_QWORD*)(a1 + 5592) = v15 + 244;
  *(_QWORD*)(a1 + 40) = v15 + 103;
  *(_DWORD*)(a1 + 6088) = -1;
  *(_BYTE*)(v14 + 1796) = 1;
  *(_DWORD*)(a1 + 5792) = 1;
  if (a3 != 0) {
    v16 = a3 + 5592;
  }
  else {
    v16 = 0;
  }
  GameRoutine_1121e0(&v41, v16);
  GameRoutine_112180(a1 + 5800, &v41);
  v41 = 0;
  v42 = 0x2000;
  if (a7 != 0) {
    v17 = a7 + 5592;
  }
  else {
    v17 = 0;
  }
  GameRoutine_1121e0(&v41, v17);
  GameRoutine_112180(a1 + 5848, &v41);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a8 + 208);
  v18 = GameRoutine_f5740(a5, a1 + 5656);
  v19 = *(_QWORD*)(a1 + 5648);
  if (v18 != 0) {
    GameRoutine_f0230(v19, v18, 0);
    v20 = *(_QWORD*)(v18 + 24);
    if (v20 != 0) {
      GameRoutine_190200(*(_QWORD*)(a1 + 5648) + 80LL, v20);
    }
    v21 = *(_QWORD*)(a1 + 5648);
    if (a6 != 0) {
      goto LABEL_11;
    }
  LABEL_40:
    *(_DWORD*)(v21 + 24) = *a5;
    *(_DWORD*)(v21 + 28) = a5[1];
    goto LABEL_41;
  }
  *(_DWORD*)(v19 + 56) = *a5;
  *(_DWORD*)(v19 + 60) = a5[1];
  v22 = *(_QWORD*)(a1 + 5648);
  *(_DWORD*)(v22 + 104) = *a5;
  *(_DWORD*)(v22 + 108) = a5[1];
  if (a6 != 0) {
    v23 = (unsigned __int8*)(a6 + 80);
    v24 = (_QWORD*)(*(_QWORD*)(a1 + 5648) + 32LL);
    if (v24 != (_QWORD*)(a6 + 80)) {
      v25 = *v23;
      if ((*(_BYTE*)v24 & 1) == 0) {
        if ((v25 & 1) != 0) {
          GameRoutine_a3a3a0(v24, *(_QWORD*)(a6 + 96), *(_QWORD*)(a6 + 88));
          v28 = *(_QWORD**)(a1 + 5648);
          if (v28 == (_QWORD*)a6) {
            goto LABEL_39;
          }
        }
        else {
          v26 = *(_QWORD*)v23;
          v27 = *(_QWORD*)(a6 + 96);
          *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 40LL) = *(_QWORD*)(a6 + 88);
          v24[2] = v27;
          *v24 = v26;
          v28 = *(_QWORD**)(a1 + 5648);
          if (v28 == (_QWORD*)a6) {
            goto LABEL_39;
          }
        }
        goto LABEL_26;
      }
      v29 = (v25 & 1) == 0;
      v30 = v25 >> 1;
      if (v29) {
        v31 = a6 + 81;
      }
      else {
        v31 = *(_QWORD*)(a6 + 96);
      }
      if (v29) {
        v32 = v30;
      }
      else {
        v32 = *(_QWORD*)(a6 + 88);
      }
      GameRoutine_a3a260(v24, v31, v32);
    }
    v28 = *(_QWORD**)(a1 + 5648);
    if (v28 == (_QWORD*)a6) {
      goto LABEL_39;
    }
  LABEL_26:
    v33 = *v23;
    if ((v28[10] & 1) != 0) {
      v36 = (v33 & 1) == 0;
      v37 = v33 >> 1;
      if (v36) {
        v38 = a6 + 81;
      }
      else {
        v38 = *(_QWORD*)(a6 + 96);
      }
      if (v36) {
        v39 = v37;
      }
      else {
        v39 = *(_QWORD*)(a6 + 88);
      }
      GameRoutine_a3a260(v28 + 10, v38, v39);
    }
    else if ((v33 & 1) != 0) {
      GameRoutine_a3a3a0(v28 + 10, *(_QWORD*)(a6 + 96), *(_QWORD*)(a6 + 88));
    }
    else {
      v34 = *(_QWORD*)v23;
      v35 = *(_QWORD*)(a6 + 96);
      v28[11] = *(_QWORD*)(a6 + 88);
      v28[12] = v35;
      v28[10] = v34;
    }
  }
LABEL_39:
  *(_BYTE*)(v14 + 1799) = 1;
  v21 = *(_QWORD*)(a1 + 5648);
  if (a6 == 0) {
    goto LABEL_40;
  }
LABEL_11:
  GameRoutine_f1b80(v21, a6);
LABEL_41:
  GameRoutine_180c80(a1, a8);
  GameRoutine_180fb0(a1);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 GameHr_1835b0(_QWORD* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void (***v7)(_QWORD);
  __int64 v8;
  __int64 v9;
  __int64 result;

  v2 = GameData_2134c40[0];
  a1[2] = 0;
  *a1 = v2 + 2;
  a1[1] = 0;
  v3 = snd_g_memory_ptr[0];
  v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef(v4);
  v5 = (void (***)(_QWORD))a1[1];
  a1[1] = v4;
  if (v5 != nullptr) {
    (**v5)(v5);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v5);
  }
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
      *v3, 248, 32);
  snd_coef_BiQuadCoef_BiQuadCoef(v6);
  v7 = (void (***)(_QWORD))a1[2];
  a1[2] = v6;
  if (v7 != nullptr) {
    (**v7)(v7);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v3 + 24LL))(*v3, v7);
  }
  *(_WORD*)(*(_QWORD*)(a1[1] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[1] + 192LL) + 8LL) = -17536;
  v8 = *(_QWORD*)(a1[1] + 8LL * *(unsigned int*)(a1[1] + 124LL) + 128);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  *(_DWORD*)(a1[1] + 204LL) = 0;
  *(_WORD*)(*(_QWORD*)(a1[2] + 128LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 136LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 144LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 152LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 160LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 168LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 176LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 184LL) + 8LL) = -17536;
  *(_WORD*)(*(_QWORD*)(a1[2] + 192LL) + 8LL) = -17536;
  v9 = *(_QWORD*)(a1[2] + 8LL * *(unsigned int*)(a1[2] + 124LL) + 128);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  *(_DWORD*)(a1[2] + 204LL) = 0;
  return result;
}

__int64 GameHr_188860(_QWORD* a1, __int64 a2)
{
  _QWORD* v2;
  __int64 result;

  v2 = a1;
  *a1 = GameData_2134c50[0] + 2;
  a1[1] = a2;
  GameRoutine_190020(a1 + 2, &GameData_1a9f09e);
  *((_WORD*)v2 + 44) = 0;
  *((_DWORD*)v2 + 10) = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[9] = 0;
  *((_DWORD*)v2 + 20) = 0;
  *(_QWORD*)((char*)v2 + 92) = 0;
  v2[13] = 0;
  *((_DWORD*)v2 + 16) = 0x2000;
  *((_DWORD*)v2 + 28) = 0;
  GameRoutine_1a0a040(v2 + 11, 1, 0);
  *((_WORD*)v2 + 60) = 0;
  v2 += 15;
  *(_QWORD*)((char*)v2 + 4) = 0;
  v2[2] = 0;
  *((_DWORD*)v2 + 6) = 0;
  result = GameRoutine_1a0a040(v2, 1, 0);
  *((_BYTE*)v2 + 32) = 0;
  v2[5] = 0;
  return result;
}

__int64 GameHr_189e50(_QWORD* a1, __int64 a2)
{
  __int64 result;

  result = GameRoutine_183910((__int64)a1, a2);
  *a1 = &GameData_1f722f8;
  a1[694] = GameData_1f72960;
  return result;
}

__int64 GameHr_18b120(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;

  GameRoutine_188860(a1, a2);
  *a1 = GameData_2134c80[0] + 2;
  GameRoutine_1a0ba50(a1 + 21, 0, 284, v3, v4, v5);
  a1[57] = 0;
  a1[58] = 0;
  v6 = GameData_212d480[0];
  v7 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 32780, 32);
  GameRoutine_1a0ba50(v7, 0, 32780, v8, v9, v10);
  v11 = *v6;
  a1[21] = v7;
  v12 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v11 + 16LL))(
      v11, 48, 32);
  v13 = GameData_2134c88[0];
  *(_QWORD*)(v12 + 32) = 0;
  *(_BYTE*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 24) = 0;
  v14 = v13 + 2;
  *(_QWORD*)v12 = v13 + 2;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 32) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v6 + 16LL))(*v6, 0x20000, 32);
  v15 = *v6;
  a1[53] = v12;
  v16 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v15 + 16LL))(
      v15, 48, 32);
  *(_QWORD*)v16 = v14;
  *(_QWORD*)(v16 + 8) = 0;
  v17 = v16;
  *(_QWORD*)(v16 + 32) = 0;
  *(_BYTE*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_DWORD*)(v16 + 24) = 0;
  *(_QWORD*)(v16 + 32) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v6 + 16LL))(*v6, 0x20000, 32);
  v18 = *v6;
  a1[54] = v17;
  v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v18 + 16LL))(
      v18, 48, 32);
  *(_QWORD*)v19 = v14;
  *(_QWORD*)(v19 + 8) = 0;
  v20 = v19;
  *(_QWORD*)(v19 + 32) = 0;
  *(_BYTE*)(v19 + 40) = 0;
  *(_QWORD*)(v19 + 16) = 0;
  *(_DWORD*)(v19 + 24) = 0;
  *(_QWORD*)(v19 + 32) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v6 + 16LL))(*v6, 0x20000, 32);
  v21 = *v6;
  a1[55] = v20;
  a1[57] = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v21 + 16LL))(
      v21, 0x4000, 32);
  result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v6 + 16LL))(
      *v6, 0x4000, 32);
  a1[58] = result;
  return result;
}

__int64 GameHr_18d540(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  _BYTE* v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  char* v20;
  _QWORD* v21;
  char* v22;
  unsigned __int64 v23;
  _BYTE* v24;
  unsigned __int64 v25;
  __int64 v26;
  bool v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  char v43;
  char* v44;
  unsigned __int64 v45;
  char* v46;
  _QWORD* v47;
  char* v48;
  unsigned __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 result;
  const char* v55;
  _QWORD v56[2];
  __int64 v57;
  __int64 v58;
  int v59;

  v2 = a1 + 4096;
  *(_BYTE*)(a1 + 5917) = *(_BYTE*)(a2 + 226);
  v5 = *(unsigned __int8*)(a2 + 225);
  *(_BYTE*)(a1 + 6088) = v5;
  if (v5 == 1) {
    v6 = (_QWORD*)GameRoutine_119030(*(_QWORD*)(a1 + 32));
    v7 = GameRoutine_17bf40(v6);
  }
  else {
    v8 = (_QWORD*)GameRoutine_119030(*(_QWORD*)(a1 + 32));
    v7 = GameRoutine_17c140(v8);
  }
  v58 = 0;
  v59 = 0x2000;
  if (v7 != 0) {
    v9 = v7 + 5552;
  }
  else {
    v9 = 0;
  }
  GameRoutine_1121e0(&v58, v9);
  GameRoutine_112180(a1 + 6072, &v58);
  v10 = *(_QWORD**)(a1 + 5648);
  v11 = (_BYTE*)(v2 + 1640);
  v12 = v10 + 4;
  if ((_QWORD*)(v2 + 1640) == v10 + 4) {
    goto LABEL_19;
  }
  v13 = *(unsigned __int8*)v12;
  if ((*v11 & 1) != 0) {
    v18 = (char*)v10 + 33;
    v21 = v10 + 5;
    v19 = v10[5];
    v20 = (char*)v21[1];
    if ((v13 & 1) != 0) {
      v22 = v20;
    }
    else {
      v22 = v18;
    }
    if ((v13 & 1) != 0) {
      v23 = v19;
    }
    else {
      v23 = v13 >> 1;
    }
    GameRoutine_a3a260(v2 + 1640, v22, v23);
  LABEL_19:
    v17 = *(_QWORD*)(a2 + 232);
    if (v17 != 0) {
      goto LABEL_20;
    }
    goto LABEL_33;
  }
  if ((v13 & 1) != 0) {
    GameRoutine_a3a3a0(v2 + 1640, v10[6], v10[5]);
    v17 = *(_QWORD*)(a2 + 232);
    if (v17 != 0) {
      goto LABEL_20;
    }
  LABEL_33:
    v32 = *(_QWORD**)(a1 + 5648);
    v33 = (_QWORD*)(v2 + 1584);
    v34 = v32 + 10;
    if ((_QWORD*)(v2 + 1584) != v32 + 10) {
      v35 = *(unsigned __int8*)v34;
      if ((*(_BYTE*)v33 & 1) != 0) {
        v44 = (char*)v32 + 81;
        v47 = v32 + 11;
        v45 = v32[11];
        v46 = (char*)v47[1];
        if ((v35 & 1) != 0) {
          v48 = v46;
        }
        else {
          v48 = v44;
        }
        if ((v35 & 1) != 0) {
          v49 = v45;
        }
        else {
          v49 = v35 >> 1;
        }
        GameRoutine_a3a260(v33, v48, v49);
      }
      else if ((v35 & 1) != 0) {
        GameRoutine_a3a3a0(v33, v32[12], v32[11]);
      }
      else {
        v36 = *v34;
        v37 = v34[1];
        v38 = v34[2];
        *(_QWORD*)(v2 + 1592) = v37;
        *(_QWORD*)(v2 + 1600) = v38;
        *v33 = v36;
      }
    }
    v50 = *(_QWORD*)(a1 + 5648);
    *(_DWORD*)(a1 + 5704) = *(_DWORD*)(v50 + 104);
    *(_DWORD*)(a1 + 5708) = *(_DWORD*)(v50 + 108);
    goto LABEL_50;
  }
  v14 = *v12;
  v15 = v12[1];
  v16 = v12[2];
  *(_QWORD*)(v2 + 1648) = v15;
  *(_QWORD*)(v2 + 1656) = v16;
  *(_QWORD*)v11 = v14;
  v17 = *(_QWORD*)(a2 + 232);
  if (v17 == 0) {
    goto LABEL_33;
  }
LABEL_20:
  v24 = (_BYTE*)(v2 + 1584);
  GameRoutine_190200(v2 + 1584, v17);
  v25 = *(unsigned __int8*)(v2 + 1584);
  if ((*(_BYTE*)(v2 + 1640) & 1) != 0) {
    v27 = (v25 & 1) == 0;
    v28 = v25 >> 1;
    if (v27) {
      v29 = a1 + 5681;
    }
    else {
      v29 = *(_QWORD*)(a1 + 5696);
    }
    if (v27) {
      v30 = v28;
    }
    else {
      v30 = *(_QWORD*)(a1 + 5688);
    }
    GameRoutine_a3a260(v2 + 1640, v29, v30);
    if ((*v24 & 1) != 0) {
      goto LABEL_38;
    }
    goto LABEL_31;
  }
  if ((v25 & 1) == 0) {
    v26 = *(_QWORD*)(v2 + 1592);
    *(_QWORD*)v11 = *(_QWORD*)v24;
    *(_QWORD*)(v2 + 1648) = v26;
    *(_QWORD*)(v2 + 1656) = *(_QWORD*)(v2 + 1600);
    if ((*v24 & 1) != 0) {
      goto LABEL_38;
    }
  LABEL_31:
    v31 = *(_QWORD*)(v2 + 1592);
    v56[0] = *(_QWORD*)v24;
    v56[1] = v31;
    v57 = *(_QWORD*)(v2 + 1600);
    goto LABEL_39;
  }
  GameRoutine_a3a3a0(v2 + 1640, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
  if ((*v24 & 1) == 0) {
    goto LABEL_31;
  }
LABEL_38:
  GameRoutine_1905a40(v56, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
LABEL_39:
  v39 = GameRoutine_190240(v56);
  v40 = GameRoutine_fdf60(v39, 0);
  v41 = GameRoutine_190240(v56);
  v42 = GameRoutine_fdfe0(v41, 0);
  v43 = v56[0];
  *(_DWORD*)(a1 + 5704) = v40;
  *(_DWORD*)(a1 + 5708) = v42;
  if ((v43 & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)GameData_212d480[0] + 24LL))(
        *GameData_212d480[0], v57);
  }
LABEL_50:
  v51 = (_QWORD*)GameData_212e2d0[0];
  v52 = *(_QWORD*)GameData_212e2d0[0];
  v53 = GameRoutine_190240(a1 + 5680);
  if (((*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v52 + 424LL))(
           v52, a1, v53) &
       1) != 0) {
    GameRoutine_143ad0(a1);
  }
  result = (*(__int64 (**)(_QWORD, __int64, __int64, __int64))(
      *(_QWORD*)*GameData_212e250 + 176LL))(*GameData_212e250, a1 + 5704,
                                            a1 + 5772, a1 + 5776);
  *(_DWORD*)(a1 + 5768) = result;
  if ((_DWORD)result == -1 && *(_DWORD*)(*(_QWORD*)(a1 + 5648) + 120LL) == 0) {
    v55 = (const char*)GameRoutine_190240(a1 + 5680);
    result =
        (*(__int64 (**)(_QWORD, const char*, ...))(*(_QWORD*)*v51 + 392LL))(
            *v51, "#SoundLibrary error : InvalidSoundId : %s\n", v55);
    *(_BYTE*)(v2 + 1799) = 1;
  }
  return result;
}

_QWORD* GameHr_1900f0(_QWORD* result, __int64* a2)
{
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)a2 & 1) != 0) {
    return (_QWORD*)GameRoutine_1905a40(result, a2[2], a2[1]);
  }
  v2 = *a2;
  v3 = a2[2];
  result[1] = a2[1];
  result[2] = v3;
  *result = v2;
  return result;
}

__int64 GameHr_190200(__int64 a1, char* a2)
{
  if (a2 == nullptr) {
    a2 = &GameData_1a9f09e;
  }
  GameRoutine_190480(a1, a2);
  return a1;
}

__int64 GameHr_190260(unsigned __int8* a1, unsigned __int8* a2,
                      unsigned __int64 a3)
{
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int8* v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned int v15;
  unsigned __int8* v16;
  __int64 v17;
  __int64 v18;

  v3 = *a2;
  v4 = (v3 & 1) == 0;
  v5 = v3 >> 1;
  if (v4) {
    v6 = v5;
  }
  else {
    v6 = *((_QWORD*)a2 + 1);
  }
  v7 = *a1;
  if (v4) {
    v8 = a2 + 1;
  }
  else {
    v8 = *((unsigned __int8**)a2 + 2);
  }
  v9 = (v7 & 1) == 0;
  v10 = v7 >> 1;
  if (v9) {
    v11 = a1 + 1;
  }
  else {
    v11 = *((unsigned __int8**)a1 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a1 + 1);
  }
  v13 = (unsigned __int8*)(v12 - a3);
  if (v12 < a3) {
    return -1;
  }
  if (v6 != 0) {
    v14 = &v11[v12];
    if ((__int64)v13 >= v6) {
      v15 = *v8;
      v16 = &v11[a3];
      do {
        v17 = GameRoutine_1a09c60(v16, v15, &v13[-v6 + 1]);
        if (v17 == 0) {
          break;
        }
        v18 = v17;
        if ((unsigned int)GameRoutine_1a09cf0(v17, v8, v6) == 0) {
          goto LABEL_22;
        }
        v16 = (unsigned __int8*)(v18 + 1);
        v13 = &v14[-v18 - 1];
      } while ((__int64)v13 >= v6);
    }
    v18 = (__int64)v14;
  LABEL_22:
    if ((unsigned __int8*)v18 == v14) {
      return -1;
    }
    else {
      return v18 - (_QWORD)v11;
    }
  }
  return a3;
}

_QWORD* GameHr_1908c0(_QWORD* result, __int64 a2)
{
  result[4] = 0;
  *result = GameData_1f73828;
  result[1] = a2;
  result[2] = result + 2;
  result[3] = result + 2;
  return result;
}

_QWORD* GameHr_1909b0(__int64 a1)
{
  _QWORD* v2;

  v2 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 40, 32);
  GameRoutine_1908c0(v2, a1);
  GameData_2199c38 = (__int64)v2;
  return v2;
}

_QWORD* GameHr_190a20(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;

  if (result[4] != 0) {
    v1 = (_QWORD*)result[3];
    v2 = result + 2;
    v3 = *(_QWORD**)(result[2] + 8LL);
    *(_QWORD*)(*v1 + 8LL) = v3;
    *v3 = *v1;
    result[4] = 0;
    if (v1 != result + 2) {
      do {
        v4 = (_QWORD*)v1[1];
        result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)GameData_2198f88 +
                                                    24LL))(GameData_2198f88);
        v1 = v4;
      } while (v4 != v2);
    }
  }
  return result;
}

__int64 GameHr_190ac0(__int64 a1)
{
  __int64 i;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  for (i = ((__int64 (*)(void))GameRoutine_119040)(); *(_QWORD*)(a1 + 32) != 0;
       i = GameRoutine_119040(v8)) {
    v3 = *(_QWORD**)(a1 + 24);
    v4 = (_QWORD*)v3[1];
    v5 = v3[2];
    *(_QWORD*)(*v3 + 8LL) = v4;
    *v4 = *v3;
    v6 = GameData_2198f88;
    --*(_QWORD*)(a1 + 32);
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    GameRoutine_119060(v7);
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    (**(void (***)(__int64))v5)(v5);
    v8 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)GameData_2198f88 + 24LL))(
        GameData_2198f88, v5);
  }
  return GameRoutine_119060(i);
}

bool GameHr_190b80(__int64 a1, int a2, int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _BOOL4 v11;

  v6 = GameRoutine_119040(a1);
  v7 = *(_QWORD*)(a1 + 24);
  v8 = a1 + 16;
  if (v7 == a1 + 16) {
    v11 = false;
  }
  else {
    do {
      v9 = *(_DWORD*)(*(_QWORD*)(v7 + 16) + 8LL);
      v11 = v9 >= a2 && v9 <= a3;
      if (v11) {
        break;
      }
      v7 = *(_QWORD*)(v7 + 8);
    } while (v7 != v8);
  }
  GameRoutine_119060(v6);
  return v11;
}

__int64 GameHr_190c70(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 j;
  __int64 v8;
  __int64 k;
  __int64 v10;
  __int64 m;
  __int64 v12;
  __int64 v13;

  GameRoutine_2af320();
  *(_QWORD*)(a1 + 204) = 0;
  v2 = GameData_2134cc0;
  *(_WORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 158) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)a1 = v2 + 16;
  GameRoutine_1a0a040(a1 + 200, 1, 0);
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  GameRoutine_1a09b70(a1 + 200);
  *(_QWORD*)(a1 + 156) = 0;
  *(_WORD*)(a1 + 164) = 256;
  if (*(int*)(a1 + 152) >= 1) {
    v3 = 0;
    do {
      *(_DWORD*)(*(_QWORD*)(a1 + 104) + 4 * v3++) = 0;
      v4 = *(int*)(a1 + 152);
    } while (v3 < v4);
    if ((int)v4 >= 1) {
      for (i = 0; i < v6; ++i) {
        *(_DWORD*)(*(_QWORD*)(a1 + 112) + 4 * i) = 0;
        v6 = *(int*)(a1 + 152);
      }
      if ((int)v6 >= 1) {
        for (j = 0; j < v8; ++j) {
          *(_DWORD*)(*(_QWORD*)(a1 + 120) + 4 * j) = 0;
          v8 = *(int*)(a1 + 152);
        }
        if ((int)v8 >= 1) {
          for (k = 0; k < v10; ++k) {
            *(_DWORD*)(*(_QWORD*)(a1 + 128) + 4 * k) = 0;
            v10 = *(int*)(a1 + 152);
          }
          if ((int)v10 >= 1) {
            for (m = 0; m < v12; ++m) {
              *(_DWORD*)(*(_QWORD*)(a1 + 136) + 4 * m) = 0;
              v12 = *(int*)(a1 + 152);
            }
            if ((int)v12 >= 1) {
              v13 = 0;
              do {
                *(_DWORD*)(*(_QWORD*)(a1 + 144) + 4 * v13++) = 0;
              } while (v13 < *(int*)(a1 + 152));
            }
          }
        }
      }
    }
  }
  return GameRoutine_1a09b80(a1 + 200);
}

__int64 GameHr_191740(__int64 a1, unsigned int a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  GameRoutine_1a09b70(a1 + 200);
  v4 = GameData_212d480[0];
  if (*(_QWORD*)(a1 + 104) != 0) {
    v5 = *GameData_212d480[0];
    *(_QWORD*)(a1 + 104) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  if (*(_QWORD*)(a1 + 112) != 0) {
    v6 = *v4;
    *(_QWORD*)(a1 + 112) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  if (*(_QWORD*)(a1 + 120) != 0) {
    v7 = *v4;
    *(_QWORD*)(a1 + 120) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  if (*(_QWORD*)(a1 + 128) != 0) {
    v8 = *v4;
    *(_QWORD*)(a1 + 128) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  if (*(_QWORD*)(a1 + 136) != 0) {
    v9 = *v4;
    *(_QWORD*)(a1 + 136) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
  }
  if (*(_QWORD*)(a1 + 144) != 0) {
    v10 = *v4;
    *(_QWORD*)(a1 + 144) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
  }
  *(_DWORD*)(a1 + 152) = a2;
  if (a2 != 0) {
    *(_QWORD*)(a1 + 104) = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v4 + 16LL))(*v4, 4LL * a2, 32);
    *(_QWORD*)(a1 + 112) = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v4 + 16LL))(*v4, 4LL * *(unsigned int*)(a1 + 152), 32);
    *(_QWORD*)(a1 + 120) = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v4 + 16LL))(*v4, 4LL * *(unsigned int*)(a1 + 152), 32);
    *(_QWORD*)(a1 + 128) = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v4 + 16LL))(*v4, 4LL * *(unsigned int*)(a1 + 152), 32);
    *(_QWORD*)(a1 + 136) = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v4 + 16LL))(*v4, 4LL * *(unsigned int*)(a1 + 152), 32);
    *(_QWORD*)(a1 + 144) = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v4 + 16LL))(*v4, 4LL * *(unsigned int*)(a1 + 152), 32);
  }
  return GameRoutine_1a09b80(a1 + 200);
}

__int64 GameHr_191900(__int64 a1, __int16* a2, int a3, unsigned int a4)
{
  int v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  bool v15;
  int v17;
  int v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  int v23;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int16* v28;
  int v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;

  GameRoutine_1a09b70(a1 + 200);
  v9 = *(_DWORD*)(a1 + 156);
  v8 = *(_DWORD*)(a1 + 160);
  GameRoutine_1a09b80(a1 + 200);
  if ((int)a4 >= 1) {
    if (a4 < 6) {
      v10 = 0;
      while (v10 != (a3 & ~(a3 >> 31))) {
        *(_DWORD*)(*(_QWORD*)(a1 + 104) + 4LL * v8) = *a2;
        if (a4 == 1) {
          ++a2;
        }
        else {
          *(_DWORD*)(*(_QWORD*)(a1 + 112) + 4LL * v8) = a2[1];
          if (a4 == 2) {
            a2 += 2;
          }
          else {
            *(_DWORD*)(*(_QWORD*)(a1 + 120) + 4LL * v8) = a2[2];
            if (a4 == 3) {
              a2 += 3;
            }
            else {
              *(_DWORD*)(*(_QWORD*)(a1 + 128) + 4LL * v8) = a2[3];
              if (a4 == 4) {
                a2 += 4;
              }
              else {
                v11 = a2[4];
                a2 += 5;
                *(_DWORD*)(*(_QWORD*)(a1 + 136) + 4LL * v8) = v11;
              }
            }
          }
        }
        v12 = a4 + 1LL;
        v13 = (__int64*)(a1 + 8LL * a4 + 104);
        do {
          v14 = *v13++;
          *(_DWORD*)(v14 + 4LL * v8) = 0;
          v15 = (_DWORD)v12++ == 6;
        } while (!v15);
        ++v10;
        if (v8 + 1 < *(_DWORD*)(a1 + 152)) {
          ++v8;
        }
        else {
          v8 = 0;
        }
        if (v8 == v9 && v10 < a3) {
          goto LABEL_69;
        }
      }
      goto LABEL_70;
    }
    v23 = 0;
    while (1) {
      if (v23 == (a3 & ~(a3 >> 31))) {
        goto LABEL_70;
      }
      if (a4 < 8) {
        break;
      }
      v26 = 0;
      v27 = (__int64*)(a1 + 160);
      do {
        v26 -= 8;
        *(_DWORD*)(*(v27 - 7) + 4LL * v8) = *a2;
        *(_DWORD*)(*(v27 - 6) + 4LL * v8) = a2[1];
        *(_DWORD*)(*(v27 - 5) + 4LL * v8) = a2[2];
        *(_DWORD*)(*(v27 - 4) + 4LL * v8) = a2[3];
        *(_DWORD*)(*(v27 - 3) + 4LL * v8) = a2[4];
        *(_DWORD*)(*(v27 - 2) + 4LL * v8) = a2[5];
        *(_DWORD*)(*(v27 - 1) + 4LL * v8) = a2[6];
        v28 = a2 + 8;
        v29 = a2[7];
        v30 = *v27;
        v27 += 8;
        a2 += 8;
        *(_DWORD*)(v30 + 4LL * v8) = v29;
      } while (-(__int64)(a4 & 0x7FFFFFF8) != v26);
      v25 = -v26;
      a2 = v28;
      if ((a4 & 7) != 0) {
        goto LABEL_56;
      }
    LABEL_42:
      ++v23;
      if (v8 + 1 < *(_DWORD*)(a1 + 152)) {
        ++v8;
      }
      else {
        v8 = 0;
      }
      if (v8 == v9 && v23 < a3) {
        goto LABEL_69;
      }
    }
    v25 = 0;
    if ((a4 & 7) == 0) {
      goto LABEL_42;
    }
  LABEL_56:
    v31 = (__int64*)(a1 + 104 + 8 * v25);
    v32 = a4 & 7;
    do {
      v34 = *a2++;
      v33 = v34;
      v35 = *v31++;
      --v32;
      *(_DWORD*)(v35 + 4LL * v8) = v33;
    } while (v32 != 0);
    goto LABEL_42;
  }
  v17 = a3 & ~(a3 >> 31);
  if (a4 > 5) {
    v36 = 1;
    while (v17 != 0) {
      --v17;
      if (v8 + 1 < *(_DWORD*)(a1 + 152)) {
        ++v8;
      }
      else {
        v8 = 0;
      }
      if (v8 == v9 && v36++ < a3) {
      LABEL_69:
        (*(void (**)(_QWORD, const char*))(**(_QWORD**)GameData_212e2d0[0] +
                                           392LL))(
            *(_QWORD*)GameData_212e2d0[0],
            "#SoundLibrary : FxPCMPlayer's write buffer over flow !!\n");
        *(_BYTE*)(a1 + 164) = 0;
        v8 = v9;
        break;
      }
    }
  }
  else {
    v18 = 0;
    while (v18 != v17) {
      v19 = a4 + 1LL;
      v20 = (__int64*)(a1 + 8LL * a4 + 104);
      do {
        v21 = *v20++;
        *(_DWORD*)(v21 + 4LL * v8) = 0;
        v15 = (_DWORD)v19++ == 6;
      } while (!v15);
      ++v18;
      if (v8 + 1 < *(_DWORD*)(a1 + 152)) {
        ++v8;
      }
      else {
        v8 = 0;
      }
      if (v8 == v9 && v18 < a3) {
        goto LABEL_69;
      }
    }
  }
LABEL_70:
  GameRoutine_1a09b70(a1 + 200);
  *(_DWORD*)(a1 + 160) = v8;
  *(_BYTE*)(a1 + 164) = 1;
  return GameRoutine_1a09b80(a1 + 200);
}

__int64 GameHr_191c60(_DWORD* a1)
{
  int v2;
  int v3;
  unsigned int v4;

  GameRoutine_1a09b70(a1 + 50);
  v2 = a1[39];
  v3 = a1[40];
  GameRoutine_1a09b80(a1 + 50);
  v4 = a1[38];
  if (v3 != v2) {
    v4 = 0;
    do {
      ++v4;
      if (v3 + 1 < a1[38]) {
        ++v3;
      }
      else {
        v3 = 0;
      }
    } while (v3 != v2);
  }
  if (v4 <= 7) {
    return v4;
  }
  else {
    return v4 - 8;
  }
}

__int64* GameHr_192e60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* result;

  v2 = (**(__int64 (***)(__int64))a1)(a1);
  v3 = ((__int64 (*)(__int64))*GameData_212bff8)(40);
  GameRoutine_194020(v3, v2);
  result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 200LL))(a1);
  *result = v3;
  return result;
}

__int64 GameHr_192f90(__int64 a1)
{
  *(_BYTE*)(a1 + 12) = 0;
  if ((unsigned int)GameRoutine_1b37c0(a1 + 8) != 0) {
    return *(unsigned int*)(a1 + 8);
  }
  (**(void (***)(__int64))a1)(a1);
  ((void (*)(__int64))*GameData_2134d10)(a1);
  return 0;
}

__int64 GameHr_1b4900(__int64 a1, int a2)
{
  unsigned __int64 v3;
  __int64 v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 (**v11)(__int64);
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  __int64 v21;

  if (*(_DWORD*)(a1 + 88) != 0) {
    v3 = *(_QWORD*)(a1 + 520);
    LODWORD(v4) = *(_DWORD*)(a1 + 116);
    v5 = *(_QWORD**)(a1 + 80);
  }
  else {
    v6 = a2;
    v7 = *(unsigned int*)(*(_QWORD*)(a1 + 16) + 13880LL);
    *(_DWORD*)(a1 + 112) = v7;
    result = ((__int64 (*)(__int64))*GameData_212bff8)(4 * v7);
    v21 = result;
    if (result == 0) {
      return result;
    }
    GameRoutine_1b9180(a1 + 80, &v21);
    v5 = *(_QWORD**)(a1 + 80);
    *(_DWORD*)(a1 + 116) = 0;
    LODWORD(v4) = 0;
    a2 = v6;
    v3 = (*v5 + 4LL * *(unsigned int*)(a1 + 112)) & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD*)(a1 + 520) = v3;
  }
  v9 = (a2 + 15) & 0xFFFFFFF0 | 4;
  if (v3 - 4LL * (unsigned int)v9 >= v5[(unsigned int)v4]) {
    return 1;
  }
  v10 = -v9;
  v11 = (__int64 (**)(__int64))GameData_212bff8;
  while (1) {
    v17 = v4 + 1;
    v18 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 13876LL);
    v19 = *(_DWORD*)(a1 + 112);
    if (v18 != 0 && (v19 << v17) - v19 >= v18) {
      *(_QWORD*)(a1 + 512) = v3;
      *(_BYTE*)(a1 + 128) = 1;
      goto LABEL_22;
    }
    v20 = *(_DWORD*)(a1 + 88);
    *(_DWORD*)(a1 + 116) = v17;
    if (v20 == v17) {
      break;
    }
  LABEL_7:
    v12 = v5[v17] + 4LL * (unsigned int)(v19 << v17);
    v13 = v12 - 4LL * (int)GameRoutine_25a860(*(_QWORD*)(a1 + 32));
    if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 256LL) != 0) {
      v14 = -8;
    }
    else {
      v14 = 0;
    }
    v15 = GameRoutine_25a8e0();
    v4 = *(unsigned int*)(a1 + 116);
    if ((v15 & 1) != 0) {
      v16 = -8;
    }
    else {
      v16 = 0;
    }
    v3 = (v13 + v16 + v14) & 0xFFFFFFFFFFFFFFF0LL;
    v5 = *(_QWORD**)(a1 + 80);
    *(_QWORD*)(a1 + 520) = v3;
    if (v3 + 4 * v10 >= v5[v4]) {
      return 1;
    }
  }
  v21 = (*v11)(4LL * (unsigned int)(v19 << v17));
  if (v21 != 0) {
    GameRoutine_1b9180(a1 + 80, &v21);
    v5 = *(_QWORD**)(a1 + 80);
    v19 = *(_DWORD*)(a1 + 112);
    v17 = *(_DWORD*)(a1 + 116);
    goto LABEL_7;
  }
  *(_BYTE*)(a1 + 128) = 1;
  *(_QWORD*)(a1 + 512) = *(_QWORD*)(a1 + 520);
LABEL_22:
  GameRoutine_1b6460(a1, "Stack overflow", 1);
  return 0;
}

__int64 GameHr_1c0440(_QWORD* a1, __int64 a2)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = a1;
  v4 = (*(__int64 (**)(_QWORD*))(*a1 + 96LL))(a1);
  if (v4 == (*(unsigned int (**)(__int64))(*(_QWORD*)a2 + 96LL))(a2)) {
    v5 = (*(__int64 (**)(_QWORD*))(*v3 + 48LL))(v3);
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
    if ((unsigned int)GameRoutine_1a09d30(v5, v6) == 0) {
      v7 = (*(__int64 (**)(_QWORD*))(*v3 + 56LL))(v3);
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2);
      if ((unsigned int)GameRoutine_1a09d30(v7, v8) == 0) {
        return 1;
      }
    }
  }
  while (1) {
    v3 = (_QWORD*)v3[32];
    if (v3 == nullptr) {
      break;
    }
    v9 = (*(__int64 (**)(_QWORD*))(*v3 + 96LL))(v3);
    if (v9 == (*(unsigned int (**)(__int64))(*(_QWORD*)a2 + 96LL))(a2)) {
      v10 = (*(__int64 (**)(_QWORD*))(*v3 + 48LL))(v3);
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
      if ((unsigned int)GameRoutine_1a09d30(v10, v11) == 0) {
        v12 = (*(__int64 (**)(_QWORD*))(*v3 + 56LL))(v3);
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2);
        if ((unsigned int)GameRoutine_1a09d30(v12, v13) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

__int64 GameHr_1c0ee0(__int64 a1, __int64 a2, __int64 a3, char a4, char a5,
                      char a6)
{
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64 result;
  _QWORD* v17;
  __int64 v18;

  v12 = ((__int64 (*)(__int64))*GameData_212bff8)(64);
  GameRoutine_25f460();
  GameRoutine_1bcc50(v12 + 24);
  v18 = v12;
  *(_QWORD*)(v12 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(v12 + 56) = 0;
  GameRoutine_25fa90(v12, a2);
  GameRoutine_1bd280(v12 + 24, a3);
  *(_BYTE*)(v12 + 61) = a4;
  *(_BYTE*)(v12 + 62) = a5;
  *(_BYTE*)(v12 + 63) = a6;
  if ((GameRoutine_1bd970(a3) & 1) == 0) {
    if ((GameRoutine_1bd9c0(a3) & 1) != 0) {
      v13 = 8;
      goto LABEL_8;
    }
  }
  else if ((*(_BYTE*)(*(_QWORD*)(a3 + 8) + 48LL) & 8) == 0) {
    v13 = 4 * GameRoutine_1bd8e0(a3);
    if ((*(_BYTE*)(a3 + 16) & 4) == 0) {
      GameRoutine_1bd6a0(v12 + 24, 1);
    }
  LABEL_8:
    v14 = GameRoutine_1bdf20(a3);
    v15 = *(_DWORD*)(a1 + 40);
    if ((v15 & (v14 - 1)) != 0) {
      v15 = v15 + v14 - (v15 & (v14 - 1));
      *(_DWORD*)(a1 + 40) = v15;
    }
    *(_DWORD*)(v12 + 48) = v15;
    *(_DWORD*)(a1 + 40) += v13;
    GameRoutine_1c1060(a1 + 128, &v18);
    if (GameRoutine_1d23e0(*(_QWORD*)(a1 + 72), *(_QWORD*)(v18 + 32)) != 0) {
      GameRoutine_1c1430();
    }
    result = v18;
    v17 = *(_QWORD**)(v18 + 32);
    if (v17 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
          *v17 + 352LL))((void*)v17, *(_QWORD*)(v18 + 32));
      return v18;
    }
    return result;
  }
  v13 = GameRoutine_1bde80(a3);
  goto LABEL_8;
}

__int64 GameHr_1c4180(__int64 a1)
{
  int v2;
  __int64 result;
  unsigned int v4;
  void (**v5)(__int64);
  char v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  void (**v12)(__int64);
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 i;
  __int64 v17;

  GameRoutine_261510(a1 + 13800);
  v2 = *(_DWORD*)(a1 + 10312);
  result = GameRoutine_261540(a1 + 13800);
  if (v2 != 0) {
    v4 = 0;
    v5 = (void (**)(__int64))GameData_2134d10;
    v6 = (*(_DWORD*)(a1 + 10264) == 0) | *(_BYTE*)(a1 + 13948);
    do {
      GameRoutine_261510(a1 + 13800);
      v8 = *(_QWORD*)(*(_QWORD*)(a1 + 10304) + 8LL * v4);
      GameRoutine_261540(a1 + 13800);
      if ((GameRoutine_1db800(v8, v6 & 1) & 1) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 376LL))(v8);
        (*v5)(v8);
        --v4;
      }
      GameRoutine_261510(a1 + 13800);
      v7 = *(_DWORD*)(a1 + 10312);
      result = GameRoutine_261540(a1 + 13800);
      ++v4;
    } while (v4 < v7);
  }
  if (*(_DWORD*)(a1 + 1808) != 0) {
    v9 = 0;
    do {
      v10 = *(_QWORD*)(*(_QWORD*)(a1 + 1800) + 8 * v9);
      if (v10 != 0) {
        result = GameRoutine_1b3770(v10 + 108);
        if ((_DWORD)result == 1) {
          result = GameRoutine_1c43e0(a1, v10);
        }
      }
      ++v9;
    } while (v9 < *(unsigned int*)(a1 + 1808));
  }
  if (*(_DWORD*)(a1 + 10312) + *(_DWORD*)(a1 + 10264) == 0) {
    GameRoutine_261510(a1 + 13800);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 336LL))(a1);
    (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 344LL))(a1, "AS");
    (*(void (**)(__int64, const char*))(*(_QWORD*)a1 + 328LL))(a1, "AS");
    if (*(_DWORD*)(a1 + 13448) != 0) {
      v11 = 0;
      v12 = (void (**)(__int64))GameData_2134d10;
      do {
        v13 = *(_QWORD*)(*(_QWORD*)(a1 + 13440) + 8 * v11);
        GameRoutine_25f810(v13);
        (*v12)(v13);
        ++v11;
      } while (v11 < *(unsigned int*)(a1 + 13448));
    }
    v14 = *(_QWORD*)(a1 + 13472);
    *(_DWORD*)(a1 + 13448) = 0;
    GameRoutine_1d63f0(a1 + 13472, v14);
    *(_QWORD*)(a1 + 13472) = 0;
    GameRoutine_1bf860(a1 + 16);
    v15 = *(unsigned int*)(a1 + 1776);
    if ((_DWORD)v15 != 0) {
      for (i = 0; i < v15; ++i) {
        v17 = *(_QWORD*)(*(_QWORD*)(a1 + 1768) + 8 * i);
        if (v17 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 360LL))(v17);
          v15 = *(unsigned int*)(a1 + 1776);
        }
      }
    }
    *(_DWORD*)(a1 + 1776) = 0;
    return GameRoutine_261540(a1 + 13800);
  }
  return result;
}

__int64 GameHr_1cf840(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v7;
  int v8;
  int v10;
  _QWORD* v11;
  __int64 (*v12)(__int64);
  _QWORD* v13;
  __int64 v14;
  _BYTE v15[56];
  __int64 v16;
  __int64 v17;

  if (a2 == 0) {
    return 0;
  }
  if (a3 == 0) {
    return 0;
  }
  v5 = *(_DWORD*)(a3 + 388);
  if (v5 == 0) {
    return 0;
  }
  v16 = v3;
  v17 = v4;
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1928) + 8LL * v5) + 344LL);
  v8 = *(_DWORD*)(v7 + 12);
  if (v8 == 6 || v8 == 8) {
    v10 = *(_DWORD*)(v7 + 8);
    v11 = (_QWORD*)(a2 + *(int*)(v7 + 68));
    if (*(_BYTE*)(v7 + 72) == 1) {
      v12 = *(__int64 (**)(__int64))v7;
      v13 = (_QWORD*)(*v11 + (v10 >> 1));
      if ((v10 & 1) == 0) {
        return v12((__int64)v13);
      }
    }
    else {
      v12 = *(__int64 (**)(__int64))v7;
      v13 = (_QWORD*)((char*)v11 + (v10 >> 1));
      if ((v10 & 1) == 0) {
        return v12((__int64)v13);
      }
    }
    return (*(__int64 (**)(void))((char*)v12 + *v13))();
  }
  if (v8 != 14) {
    return (*(__int64 (**)(__int64))v7)(a2);
  }
  GameRoutine_1be200(v15, a1);
  (*(void (**)(_BYTE*))v7)(v15);
  v14 = *(_QWORD*)GameRoutine_1bf0c0(v15);
  GameRoutine_1be220(v15);
  return v14;
}

__int64 GameHr_1d9120(__int64 a1, unsigned int a2, _DWORD* a3, _QWORD* a4,
                      _QWORD* a5)
{
  unsigned int v10;
  __int64 v11;

  if (a3 != nullptr) {
    *a3 = 0;
  }
  if (a4 != nullptr) {
    *a4 = 0;
  }
  if (a5 != nullptr) {
    *a5 = 0;
  }
  GameRoutine_2615d0(a1 + 296);
  v10 = *(_DWORD*)(a1 + 32);
  if (a2 >= v10) {
    if (a2 >= *(_DWORD*)(a1 + 64) + v10) {
      GameRoutine_2615e0(a1 + 296);
      return 4294967291LL;
    }
    v11 = *(_QWORD*)(a1 + 56) + 24LL * (a2 - v10);
    if (a3 != nullptr) {
      goto LABEL_9;
    }
  }
  else {
    v11 = *(_QWORD*)(a1 + 24) + 24LL * a2;
    if (a3 != nullptr) {
    LABEL_9:
      *a3 = *(_DWORD*)(v11 + 16);
    }
  }
  if (a4 != nullptr) {
    *a4 = *(_QWORD*)v11;
  }
  if (a5 != nullptr) {
    *a5 = *(_QWORD*)(v11 + 8);
  }
  GameRoutine_2615e0(a1 + 296);
  GameRoutine_1d9240(a1, 5, 1);
  GameRoutine_1d9480(a1);
  return 0;
}

__int64 GameHr_1dc8e0(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _BYTE v17[72];
  __int64 v18;
  _QWORD v19[4];
  unsigned int v20;
  __int64 v21;
  _BYTE v22[536];

  GameRoutine_1dfba0(v22, a1[4], a1);
  v4 = a1[4];
  v22[8] = 1;
  GameRoutine_259550(v17, v4, a1, 0xFFFFFFFFLL);
  if ((GameRoutine_1ef440(v22, 0, a2, v17, 0, 0, 0, a1[11], 0, 0) &
       0x80000000) == 0) {
    v5 = v21;
    v6 = a1[11];
    v7 = **(_QWORD**)(a1[4] + 13408LL);
    v8 = GameRoutine_2606c0(v21, &GameData_1a9f09e);
    if (v5 == v7) {
      v5 = v6;
    }
  LABEL_4:
    if (v5 == 0) {
      goto LABEL_25;
    }
    do {
      v9 = GameRoutine_1ccb60(a1 + 16, v5, &v18);
      if (*(_DWORD*)(v9 + 8) == 0) {
        v13 = 0;
        if ((v8 & 1) == 0) {
          goto LABEL_23;
        }
        goto LABEL_21;
      }
      v10 = v9;
      v11 = 0;
      v12 = 0;
      do {
        while (1) {
          v13 = *(_QWORD*)(a1[30] +
                           8LL * *(unsigned int*)(*(_QWORD*)v10 + 4 * v11));
          if (*(_QWORD*)(v13 + 256) == 0 &&
              (GameRoutine_1bdc30(v19, v13 + 96) & 1) != 0 &&
              v20 == *(_DWORD*)(v13 + 128)) {
            break;
          }
        LABEL_17:
          v13 = v12;
          if (++v11 >= *(unsigned int*)(v10 + 8)) {
            goto LABEL_18;
          }
        }
        if (v20 != 0) {
          v14 = 0;
          v15 = 0;
          while (
              (GameRoutine_1bdbc0(v19[3] + v14, *(_QWORD*)(v13 + 120) + v14) &
               1) == 0) {
            ++v15;
            v14 += 24;
            if (v15 >= v20) {
              goto LABEL_7;
            }
          }
          goto LABEL_17;
        }
      LABEL_7:
        if (v12 != 0) {
          goto LABEL_25;
        }
        ++v11;
        v12 = v13;
      } while (v11 < *(unsigned int*)(v10 + 8));
    LABEL_18:
      if (v13 != 0 || (v8 & 1) == 0) {
      LABEL_23:
        v5 = 0;
        if (v13 != 0) {
          goto LABEL_26;
        }
        goto LABEL_4;
      }
    LABEL_21:
      v5 = GameRoutine_1cb640(a1[4], v5);
    } while (v5 != 0);
  }
LABEL_25:
  v13 = 0;
LABEL_26:
  GameRoutine_259940(v17);
  GameRoutine_1dfc40(v22);
  return v13;
}

_DWORD* GameHr_1ed230(__int64 a1)
{
  _DWORD* result;

  result = *(_DWORD**)(a1 + 16);
  if (result[3478] != 0) {
    ++*(_DWORD*)(a1 + 4);
    if ((*(_BYTE*)(a1 + 8) & 1) == 0) {
      return (_DWORD*)(*(__int64 (**)(void*))(*(_QWORD*)result + 56LL))(
          (void*)result);
    }
  }
  return result;
}

__int64 GameHr_2088e0(__int64* a1, __int64 a2)
{
  unsigned int v2;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v2 = *((_DWORD*)a1 + 2);
  if (v2 != *((_DWORD*)a1 + 3)) {
    goto LABEL_6;
  }
  v4 = a2;
  if (v2 != 0) {
    result = GameRoutine_1d6760(a1, 2 * v2, 1);
    v2 = *((_DWORD*)a1 + 2);
    a2 = v4;
    if (v2 == *((_DWORD*)a1 + 3)) {
      return result;
    }
  LABEL_6:
    v6 = *a1;
    *((_DWORD*)a1 + 2) = v2 + 1;
    return GameRoutine_25fa90(v6 + 24LL * v2, a2);
  }
  result = GameRoutine_1d6760(a1, 1, 0);
  v2 = *((_DWORD*)a1 + 2);
  a2 = v4;
  if (v2 != *((_DWORD*)a1 + 3)) {
    goto LABEL_6;
  }
  return result;
}

__int64 GameHr_21ece0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  char v6;

  v2 = *(_QWORD*)(a1 + 120);
  if (v2 == 0 || (*(_WORD*)(a2 + 24) & 0xA) != 8) {
    return 1;
  }
  v3 = GameRoutine_263940(v2, (unsigned int)*(__int16*)(a2 + 26));
  if (v3 != 0) {
    if ((*(_BYTE*)(v3 + 52) & 1) != 0) {
      return 1;
    }
    v5 = v3;
    if ((GameRoutine_1bd970(v3 + 24) & 1) == 0) {
      v6 = GameRoutine_1bd9c0(v5 + 24);
      result = 1;
      if ((v6 & 1) == 0) {
        *(_BYTE*)(v5 + 52) = 1;
        return 0;
      }
      return result;
    }
  }
  return 1;
}

bool GameHr_2606c0(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_DWORD*)a1;
  v5 = *(_QWORD*)(a1 + 8);
  v3 = a1 + 8;
  v4 = v5;
  if (v2 >= 0xC) {
    v3 = v4;
  }
  return (unsigned int)GameRoutine_1a09d30(v3, a2) == 0;
}

bool GameHr_2606f0(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_DWORD*)a1;
  v5 = *(_QWORD*)(a1 + 8);
  v3 = a1 + 8;
  v4 = v5;
  if (v2 >= 0xC) {
    v3 = v4;
  }
  return (unsigned int)GameRoutine_1a09d30(v3, a2) != 0;
}

bool GameHr_260720(unsigned int* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  unsigned int* v7;
  unsigned int* v8;

  v2 = *a1;
  if ((_DWORD)v2 != *(_DWORD*)a2) {
    return false;
  }
  v5 = *(_QWORD*)(a2 + 8);
  v3 = a2 + 8;
  v4 = v5;
  if ((unsigned int)v2 >= 0xC) {
    v3 = v4;
  }
  v8 = *((unsigned int**)a1 + 1);
  v6 = a1 + 2;
  v7 = v8;
  if ((unsigned int)v2 >= 0xC) {
    v6 = v7;
  }
  return (unsigned int)GameRoutine_1a09cf0(v6, v3, v2) == 0;
}

bool GameHr_260770(unsigned int* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  unsigned int* v7;
  unsigned int* v8;

  v2 = *a1;
  if ((_DWORD)v2 != *(_DWORD*)a2) {
    return true;
  }
  v5 = *(_QWORD*)(a2 + 8);
  v3 = a2 + 8;
  v4 = v5;
  if ((unsigned int)v2 >= 0xC) {
    v3 = v4;
  }
  v8 = *((unsigned int**)a1 + 1);
  v6 = a1 + 2;
  v7 = v8;
  if ((unsigned int)v2 >= 0xC) {
    v6 = v7;
  }
  return (unsigned int)GameRoutine_1a09cf0(v6, v3, v2) != 0;
}

void GameHr_261420()
{
  __int64 v0;

  if (GameData_219c9b0 != 0) {
    v0 = GameData_219c9b0 + 8;
    GameRoutine_1a09b70(GameData_219c9b0 + 8);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a0b9c0(v0 + 32);
    GameRoutine_1a09b80(v0);
  }
}

__int64 GameHr_2615f0(__int64 a1)
{
  *(_QWORD*)a1 = (char*)GameData_2134fa0 + 16;
  GameRoutine_261780(a1 + 88);
  GameRoutine_1a09b90(*(unsigned int*)(a1 + 84));
  return GameRoutine_2617f0(a1 + 8);
}

__int64 GameHr_2617a0(__int64 a1)
{
  *(_WORD*)a1 = 0;
  *(_QWORD*)(a1 + 4) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 24) = 0;
  GameRoutine_1a0a040(a1, 0, 0);
  return GameRoutine_1a0b9b0(a1 + 32, 10, 10);
}

__int64 GameHr_2617f0(__int64 a1)
{
  GameRoutine_1a0b9f0(a1 + 32);
  return GameRoutine_1a09f60(a1);
}

_QWORD* GameHr_261820(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 (**v9)(__int64);
  unsigned __int64 v10;
  char** v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  bool v23;
  __int64* v24;
  char v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v6 = a1 + 8;
  result = (_QWORD*)GameRoutine_1a0ba50(a1, 0, 2056, a4, a5, a6);
  v8 = 0;
  v9 = (__int64 (**)(__int64))GameData_212bff8;
  do {
    v11 = &(&GameData_1f7d770)[3 * v8];
    v12 = (unsigned __int8)**v11;
    v13 = *(__int64**)(v6 + 8 * v12);
    if (v13 != nullptr) {
      v14 = *v13;
      if (*v13 == 0) {
        goto LABEL_2;
      }
    }
    else {
      result = (_QWORD*)(*v9)(256);
      *(_QWORD*)(v6 + 8 * v12) = result;
      *result = 0;
      result[1] = 0;
      result[2] = 0;
      result[3] = 0;
      result[4] = 0;
      result[5] = 0;
      result[6] = 0;
      result[7] = 0;
      result[8] = 0;
      result[9] = 0;
      result[10] = 0;
      result[11] = 0;
      result[12] = 0;
      result[13] = 0;
      result[14] = 0;
      result[15] = 0;
      result[16] = 0;
      result[17] = 0;
      result[18] = 0;
      result[19] = 0;
      result[20] = 0;
      result[21] = 0;
      result[22] = 0;
      result[23] = 0;
      result[24] = 0;
      result[25] = 0;
      result[26] = 0;
      result[27] = 0;
      result[28] = 0;
      result[29] = 0;
      result[30] = 0;
      result[31] = 0;
      v13 = *(__int64**)(v6 + 8 * v12);
      v14 = *v13;
      if (*v13 == 0) {
      LABEL_2:
        LODWORD(v10) = 0;
      LABEL_3:
        v10 = (unsigned int)v10;
        goto LABEL_4;
      }
    }
    v15 = v11[1];
    v16 = 1;
    LODWORD(v17) = 0;
    LODWORD(v10) = 0;
    do {
      v18 = *(_QWORD*)(v14 + 8);
      v17 = (unsigned int)(v17 + 1);
      v19 = v10;
      v20 = v16++;
      v14 = v13[(unsigned int)v17];
      if (v18 < (unsigned __int64)v15) {
        v10 = (unsigned int)v10;
      }
      else {
        v10 = (unsigned int)(v10 + 1);
      }
    } while (v14 != 0);
    if ((unsigned int)v17 <= (unsigned int)v10) {
      goto LABEL_3;
    }
    v21 = ((_BYTE)v17 - (_BYTE)v10) & 7;
    v22 = v17;
    if (v21 != 0) {
      v23 = v18 >= (unsigned __int64)v15;
      v24 = &v13[v20];
      if (v23) {
        v25 = v19 + 1;
      }
      else {
        v25 = v19;
      }
      v26 = &v13[v20];
      v27 = ((_BYTE)v20 - v25) & 7;
      v22 = v17 - v21;
      do {
        v28 = *--v26;
        --v27;
        *v24 = v28;
        v24 = v26;
      } while (v27 != 0);
    }
    if (v10 - v17 <= 0xFFFFFFFFFFFFFFF8LL) {
      v29 = &v13[v22 - 4];
      do {
        v30 = v29[3];
        v22 -= 8LL;
        v29[3] = v29[2];
        v29[4] = v30;
        v31 = v29[1];
        v29[1] = *v29;
        v29[2] = v31;
        v32 = *(v29 - 1);
        *(v29 - 1) = *(v29 - 2);
        *v29 = v32;
        v33 = *(v29 - 3);
        *(v29 - 3) = *(v29 - 4);
        *(v29 - 2) = v33;
        v29 -= 8;
      } while (v22 > v10);
    }
  LABEL_4:
    ++v8;
    v13[v10] = (__int64)v11;
  } while (v8 != 113);
  return result;
}

char* GameHr_261a40(unsigned int a1)
{
  unsigned __int64 v2;
  char** v3;
  char** v4;
  char** v5;
  char** v6;

  if (a1 < 0xE) {
    return (char*)GameData_1b0c148 + GameData_1b0c148[a1];
  }
  v2 = 0x1FFFFFFFFFFFFEB0uLL;
  v3 = &GameData_1f7ccf0;
  if (GameData_1f7d780 == a1) {
    return v3[336];
  }
  while (1) {
    if (v2 == 0) {
      return nullptr;
    }
    v4 = &(&GameData_1f7d770)[v2];
    if (LODWORD((&GameData_1f7d770)[v2 + 341]) == a1) {
      return v4[339];
    }
    if (*((_DWORD*)v4 + 688) == a1) {
      return (&GameData_1f7d770)[v2 + 342];
    }
    v5 = &(&GameData_1f7d770)[v2];
    if (LODWORD((&GameData_1f7d770)[v2 + 347]) == a1) {
      return v5[345];
    }
    if (*((_DWORD*)v5 + 700) == a1) {
      return (&GameData_1f7d770)[v2 + 348];
    }
    v6 = &(&GameData_1f7d770)[v2];
    if (LODWORD((&GameData_1f7d770)[v2 + 353]) == a1) {
      return v6[351];
    }
    if (*((_DWORD*)v6 + 712) == a1) {
      return (&GameData_1f7d770)[v2 + 354];
    }
    if (LODWORD((&GameData_1f7d770)[v2 + 359]) == a1) {
      break;
    }
    v2 += 24LL;
    v3 = &(&GameData_1f7d770)[v2];
    if (LODWORD((&GameData_1f7d770)[v2 + 338]) == a1) {
      return v3[336];
    }
  }
  return (&GameData_1f7d770)[v2 + 357];
}

__int64 GameHr_262630(__int64 a1)
{
  __int64 result;

  if ((unsigned int)GameRoutine_1b3770(a1 + 120) == 0) {
    return 1;
  }
  result = GameRoutine_1b37b0(a1 + 120);
  if ((_DWORD)result == 0) {
    if ((unsigned int)GameRoutine_1b3770(a1 + 124) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)a1 + 336LL))(a1);
      ((void (*)(__int64))*GameData_2134d10)(a1);
    }
    return 0;
  }
  return result;
}

__int64 GameHr_2626e0(__int64 a1)
{
  __int64 result;

  if ((unsigned int)GameRoutine_1b3770(a1 + 124) == 0) {
    return 1;
  }
  result = GameRoutine_1b37b0(a1 + 124);
  if ((_DWORD)result == 0) {
    if ((unsigned int)GameRoutine_1b3770(a1 + 120) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)a1 + 336LL))(a1);
      ((void (*)(__int64))*GameData_2134d10)(a1);
    }
    return 0;
  }
  return result;
}

#pragma GCC visibility pop
