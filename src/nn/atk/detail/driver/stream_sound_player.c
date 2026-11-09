#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicSoundPlayer_Unknown2(__int64 result, __int64, __int64);
__int64 GameRoutine_296940(__int64);
__int64 GameRoutine_299e80(void);
__int64 GameRoutine_29b770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29b9e0(void);
__int64 GameRoutine_29ba90(void);
__int64 GameRoutine_29bb30(_QWORD);
__int64 GameRoutine_29bb80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29bd80(_QWORD);
__int64 GameRoutine_29df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29e5b0(_QWORD);
__int64 GameRoutine_29e740(_QWORD);
__int64 GameRoutine_29e780(_QWORD);
__int64 GameRoutine_29e7a0(_QWORD);
__int64 GameRoutine_29e7f0(_QWORD, _QWORD);
__int64 GameRoutine_29e900(_QWORD);
__int64 GameRoutine_29e920(_QWORD);
__int64 GameRoutine_29e940(_QWORD);
__int64 GameRoutine_29e960(_QWORD, _QWORD);
__int64 GameRoutine_29e9c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29ea40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0600(_QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 GameRoutine_2a7620(void);
__int64 GameRoutine_2a76b0(_QWORD);
__int64 GameRoutine_2a76e0(void);
__int64 GameRoutine_2a7880(_QWORD);
__int64 GameRoutine_2a80e0(_QWORD, _QWORD);
__int64 GameRoutine_2a8180(_QWORD, _QWORD);
__int64 GameRoutine_2a8b00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a9de0(void);
__int64 GameRoutine_2a9f20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2aa100(_QWORD);
__int64 GameRoutine_2aa3e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SoundThread_2a1fa0(_QWORD, _QWORD);
__int64 SoundThread_2a1fd0(_QWORD, _QWORD);
__int64 StreamSoundPlayer_Unknown3(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_FinalizeEvent(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 strncpy(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_21353e8)();
extern __int64* GameData_2135250;
extern __int64* GameData_21353d8;
extern char GameData_2140b6c;
extern char GameData_219d029;
__int64 StreamSoundPlayer_Destructor(_QWORD* a1);
__int64 StreamSoundPlayer_Unknown2(__int64 a1, __int64 a2, __int64 a3);
__int64 StreamSoundPlayer_2981e0(__int64 result);
__int64 StreamSoundPlayer_2983c0(__int64 a1, __int64 a2);
__int64 StreamSoundPlayer_2985e0(__int64 result, __int64 a2);
__int64 StreamSoundPlayer_2987b0(__int64 a1, __int64 a2);
__int64 StreamSoundPlayer_298a80(__int64 a1, __int64 a2);
__int64 StreamSoundPlayer_298b80(__int64 a1, __int64 a2);
__int64 StreamSoundPlayer_298d20(__int64 a1);
__int64 StreamSoundPlayer_298e60(__int64 a1, __int64 a2);
__int64 StreamSoundPlayer_Unknown4(__int64 result);
__int64 StreamSoundPlayer_Unknown5(__int64 a1);
__int64 StreamSoundPlayer_Unknown6(__int64 result, char a2);
__int64 StreamSoundPlayer_299550(__int64 a1, __int64 a2);
__int64 StreamSoundPlayer_299a60(__int64 a1, char a2, unsigned int* a3,
                                 unsigned __int16 a4, char a5, unsigned int a6,
                                 __int64 a7);
__int64 StreamSoundPlayer_29a0e0(__int64 result);
__int64 StreamSoundPlayer_Unknown7(__int64 result, char a2);
__int64 StreamSoundPlayer_29b320(__int64 result, unsigned int a2, float a3);
__int64 StreamSoundPlayer_29b380(__int64 result, unsigned int a2, char a3);
__int64 StreamSoundPlayer_29b3e0(__int64 result, unsigned int a2, int a3);
__int64 StreamSoundPlayer_29b440(__int64 result, unsigned int a2);
__int64 StreamSoundPlayer_29b4a0(__int64 result, unsigned int a2, float a3);
__int64 StreamSoundPlayer_29b500(__int64 result, unsigned int a2,
                                 unsigned int a3, _DWORD* a4);
__int64 StreamSoundPlayer_29b580(__int64 result, unsigned int a2, float a3);
__int64 StreamSoundPlayer_29b5e0(__int64 result, unsigned int a2, float a3);
__int64 StreamSoundPlayer_29b640(__int64 result, unsigned int a2, float a3);
__int64 StreamSoundPlayer_29b6a0(__int64 result, unsigned int a2, int a3,
                                 float a4);
__int64 StreamSoundPlayer_Unknown9(__int64 result);

__int64 StreamSoundPlayer_Destructor(_QWORD* a1)
{
  __int64* v2;

  v2 = GameData_21353d8 + 15;
  *a1 = GameData_21353d8 + 2;
  a1[25] = v2;
  StreamSoundPlayer_Unknown3();
  nn_os_FinalizeMutex(a1 + 9027);
  *a1 = GameData_2135250 + 2;
  return nn_os_FinalizeEvent(a1 + 1);
}

__int64 StreamSoundPlayer_Unknown2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;

  v6 = a1 + 68736;
  v7 = a1 + 72216;
  nn_os_LockMutex(a1 + 72216);
  BasicSoundPlayer_Unknown2(a1, a2, a3);
  v8 = *(_QWORD*)(a1 + 256);
  *(_BYTE*)(v6 + 2544) = 0;
  *(_BYTE*)(v6 + 3288) = 0;
  *(_QWORD*)(a1 + 236) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_BYTE*)(a1 + 1128) = 0;
  *(_DWORD*)(a1 + 1132) = 0;
  *(_DWORD*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 234) = 0;
  *(_DWORD*)(a1 + 224) = 0;
  *(_DWORD*)(a1 + 227) = 0;
  *(_QWORD*)(a1 + 72200) = 0;
  *(_QWORD*)(a1 + 72208) = 0;
  if (v8 != 0) {
    goto LABEL_2;
  }
  v13 = *(_QWORD*)(a1 + 248);
  if (v13 != 0) {
    v14 = (__int64*)(v13 + 40);
    v15 = *(__int64**)(v13 + 48);
    if (v15 != v14) {
      v16 = (__int64*)v15[1];
      v17 = *v16;
      *(_QWORD*)(*v15 + 8) = v16;
      *v16 = *v15;
      *(_QWORD*)(v17 + 8) = v15;
      *v15 = v17;
      *(_QWORD*)(a1 + 256) = v15 - 1738;
    LABEL_2:
      GameRoutine_29b9e0();
    }
  }
  *(_QWORD*)(a1 + 568) = 0;
  *(_DWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 560) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 72200) = -1;
  *(_QWORD*)(a1 + 72208) = -1;
  *(_QWORD*)(a1 + 68836) = 0;
  *(_QWORD*)(a1 + 68844) = 0;
  *(_QWORD*)(a1 + 68852) = 0;
  *(_QWORD*)(v6 + 36) = -3229614080LL;
  *(_QWORD*)(v6 + 164) = -3229614080LL;
  *(_QWORD*)(v6 + 44) = 1065353216;
  *(_QWORD*)(v6 + 172) = 1065353216;
  *(_BYTE*)v6 = 0;
  *(_BYTE*)(v6 + 128) = 0;
  *(_BYTE*)(v6 + 256) = 0;
  *(_BYTE*)(v6 + 384) = 0;
  *(_BYTE*)(v6 + 512) = 0;
  *(_BYTE*)(v6 + 640) = 0;
  *(_BYTE*)(v6 + 768) = 0;
  *(_BYTE*)(v6 + 896) = 0;
  *(_QWORD*)(a1 + 68972) = 0;
  *(_QWORD*)(a1 + 68980) = 0;
  *(_QWORD*)(a1 + 68964) = 0;
  *(_QWORD*)(v6 + 292) = -3229614080LL;
  *(_QWORD*)(v6 + 300) = 1065353216;
  *(_QWORD*)(a1 + 69092) = 0;
  *(_QWORD*)(a1 + 69100) = 0;
  *(_QWORD*)(a1 + 69108) = 0;
  *(_QWORD*)(v6 + 420) = -3229614080LL;
  *(_QWORD*)(v6 + 428) = 1065353216;
  *(_QWORD*)(a1 + 69220) = 0;
  *(_QWORD*)(a1 + 69228) = 0;
  *(_QWORD*)(a1 + 69236) = 0;
  *(_QWORD*)(v6 + 548) = -3229614080LL;
  *(_QWORD*)(v6 + 556) = 1065353216;
  *(_QWORD*)(a1 + 69348) = 0;
  *(_QWORD*)(a1 + 69356) = 0;
  *(_QWORD*)(a1 + 69364) = 0;
  *(_QWORD*)(v6 + 676) = -3229614080LL;
  *(_QWORD*)(v6 + 684) = 1065353216;
  *(_QWORD*)(a1 + 69484) = 0;
  *(_QWORD*)(a1 + 69492) = 0;
  *(_QWORD*)(a1 + 69476) = 0;
  *(_QWORD*)(v6 + 804) = -3229614080LL;
  *(_QWORD*)(v6 + 812) = 1065353216;
  *(_QWORD*)(a1 + 69612) = 0;
  *(_QWORD*)(a1 + 69620) = 0;
  *(_QWORD*)(a1 + 69604) = 0;
  *(_QWORD*)(v6 + 932) = -3229614080LL;
  v9 = a1;
  *(_QWORD*)(v6 + 940) = 1065353216;
  v10 = 16;
  *(_QWORD*)(a1 + 69732) = 0;
  *(_QWORD*)(a1 + 69740) = 0;
  *(_QWORD*)(a1 + 69748) = 0;
  do {
    *(_DWORD*)(v9 + 3204) = 0;
    *(_QWORD*)(v9 + 3208) = 0;
    --v10;
    *(_QWORD*)(v9 + 1152) = 0;
    *(_QWORD*)(v9 + 1160) = 0;
    *(_QWORD*)(v9 + 1168) = 0;
    *(_QWORD*)(v9 + 1176) = 0;
    *(_QWORD*)(v9 + 1184) = 0;
    *(_QWORD*)(v9 + 1192) = 0;
    *(_QWORD*)(v9 + 1200) = 0;
    *(_QWORD*)(v9 + 1208) = 0;
    *(_QWORD*)(v9 + 1220) = 0;
    *(_QWORD*)(v9 + 1228) = 0;
    *(_QWORD*)(v9 + 1236) = 0;
    *(_QWORD*)(v9 + 1244) = 0;
    *(_QWORD*)(v9 + 1252) = 0;
    *(_QWORD*)(v9 + 1260) = 0;
    *(_QWORD*)(v9 + 1268) = 0;
    *(_QWORD*)(v9 + 1273) = 0;
    *(_BYTE*)(v9 + 1216) = 0;
    *(_QWORD*)(v9 + 1337) = 0;
    *(_QWORD*)(v9 + 1324) = 0;
    *(_QWORD*)(v9 + 1332) = 0;
    *(_QWORD*)(v9 + 1308) = 0;
    *(_QWORD*)(v9 + 1316) = 0;
    *(_QWORD*)(v9 + 1292) = 0;
    *(_QWORD*)(v9 + 1300) = 0;
    *(_QWORD*)(v9 + 1284) = 0;
    *(_QWORD*)(v9 + 1348) = 0;
    *(_QWORD*)(v9 + 1356) = 0;
    *(_QWORD*)(v9 + 1364) = 0;
    *(_QWORD*)(v9 + 1372) = 0;
    *(_QWORD*)(v9 + 1380) = 0;
    *(_QWORD*)(v9 + 1388) = 0;
    *(_QWORD*)(v9 + 1396) = 0;
    *(_QWORD*)(v9 + 1401) = 0;
    *(_QWORD*)(v9 + 1412) = 0;
    *(_QWORD*)(v9 + 1420) = 0;
    *(_QWORD*)(v9 + 1428) = 0;
    *(_QWORD*)(v9 + 1436) = 0;
    *(_QWORD*)(v9 + 1444) = 0;
    *(_QWORD*)(v9 + 1452) = 0;
    *(_QWORD*)(v9 + 1460) = 0;
    *(_QWORD*)(v9 + 1465) = 0;
    *(_QWORD*)(v9 + 1529) = 0;
    *(_QWORD*)(v9 + 1516) = 0;
    *(_QWORD*)(v9 + 1524) = 0;
    *(_QWORD*)(v9 + 1500) = 0;
    *(_QWORD*)(v9 + 1508) = 0;
    *(_QWORD*)(v9 + 1484) = 0;
    *(_QWORD*)(v9 + 1492) = 0;
    *(_QWORD*)(v9 + 1476) = 0;
    *(_QWORD*)(v9 + 1593) = 0;
    *(_QWORD*)(v9 + 1580) = 0;
    *(_QWORD*)(v9 + 1588) = 0;
    *(_QWORD*)(v9 + 1564) = 0;
    *(_QWORD*)(v9 + 1572) = 0;
    *(_QWORD*)(v9 + 1548) = 0;
    *(_QWORD*)(v9 + 1556) = 0;
    *(_QWORD*)(v9 + 1540) = 0;
    *(_QWORD*)(v9 + 1657) = 0;
    *(_QWORD*)(v9 + 1644) = 0;
    *(_QWORD*)(v9 + 1652) = 0;
    *(_QWORD*)(v9 + 1628) = 0;
    *(_QWORD*)(v9 + 1636) = 0;
    *(_QWORD*)(v9 + 1612) = 0;
    *(_QWORD*)(v9 + 1620) = 0;
    *(_QWORD*)(v9 + 1604) = 0;
    *(_QWORD*)(v9 + 1721) = 0;
    *(_QWORD*)(v9 + 1708) = 0;
    *(_QWORD*)(v9 + 1716) = 0;
    *(_QWORD*)(v9 + 1692) = 0;
    *(_QWORD*)(v9 + 1700) = 0;
    *(_QWORD*)(v9 + 1676) = 0;
    *(_QWORD*)(v9 + 1684) = 0;
    *(_QWORD*)(v9 + 1668) = 0;
    *(_QWORD*)(v9 + 1785) = 0;
    *(_QWORD*)(v9 + 1772) = 0;
    *(_QWORD*)(v9 + 1780) = 0;
    *(_QWORD*)(v9 + 1756) = 0;
    *(_QWORD*)(v9 + 1764) = 0;
    *(_QWORD*)(v9 + 1740) = 0;
    *(_QWORD*)(v9 + 1748) = 0;
    *(_QWORD*)(v9 + 1732) = 0;
    *(_QWORD*)(v9 + 1849) = 0;
    *(_QWORD*)(v9 + 1836) = 0;
    *(_QWORD*)(v9 + 1844) = 0;
    *(_QWORD*)(v9 + 1820) = 0;
    *(_QWORD*)(v9 + 1828) = 0;
    *(_QWORD*)(v9 + 1804) = 0;
    *(_QWORD*)(v9 + 1812) = 0;
    *(_QWORD*)(v9 + 1796) = 0;
    *(_QWORD*)(v9 + 1913) = 0;
    *(_QWORD*)(v9 + 1900) = 0;
    *(_QWORD*)(v9 + 1908) = 0;
    *(_QWORD*)(v9 + 1884) = 0;
    *(_QWORD*)(v9 + 1892) = 0;
    *(_QWORD*)(v9 + 1868) = 0;
    *(_QWORD*)(v9 + 1876) = 0;
    *(_QWORD*)(v9 + 1860) = 0;
    *(_QWORD*)(v9 + 1977) = 0;
    *(_QWORD*)(v9 + 1964) = 0;
    *(_QWORD*)(v9 + 1972) = 0;
    *(_QWORD*)(v9 + 1948) = 0;
    *(_QWORD*)(v9 + 1956) = 0;
    *(_QWORD*)(v9 + 1932) = 0;
    *(_QWORD*)(v9 + 1940) = 0;
    *(_QWORD*)(v9 + 1924) = 0;
    *(_QWORD*)(v9 + 2041) = 0;
    *(_QWORD*)(v9 + 2028) = 0;
    *(_QWORD*)(v9 + 2036) = 0;
    *(_QWORD*)(v9 + 2012) = 0;
    *(_QWORD*)(v9 + 2020) = 0;
    *(_QWORD*)(v9 + 1996) = 0;
    *(_QWORD*)(v9 + 2004) = 0;
    *(_QWORD*)(v9 + 1988) = 0;
    *(_QWORD*)(v9 + 2105) = 0;
    *(_QWORD*)(v9 + 2092) = 0;
    *(_QWORD*)(v9 + 2100) = 0;
    *(_QWORD*)(v9 + 2076) = 0;
    *(_QWORD*)(v9 + 2084) = 0;
    *(_QWORD*)(v9 + 2060) = 0;
    *(_QWORD*)(v9 + 2068) = 0;
    *(_QWORD*)(v9 + 2052) = 0;
    *(_QWORD*)(v9 + 2169) = 0;
    *(_QWORD*)(v9 + 2156) = 0;
    *(_QWORD*)(v9 + 2164) = 0;
    *(_QWORD*)(v9 + 2140) = 0;
    *(_QWORD*)(v9 + 2148) = 0;
    *(_QWORD*)(v9 + 2124) = 0;
    *(_QWORD*)(v9 + 2132) = 0;
    *(_QWORD*)(v9 + 2116) = 0;
    *(_QWORD*)(v9 + 2233) = 0;
    *(_QWORD*)(v9 + 2220) = 0;
    *(_QWORD*)(v9 + 2228) = 0;
    *(_QWORD*)(v9 + 2204) = 0;
    *(_QWORD*)(v9 + 2212) = 0;
    *(_QWORD*)(v9 + 2188) = 0;
    *(_QWORD*)(v9 + 2196) = 0;
    *(_QWORD*)(v9 + 2180) = 0;
    *(_QWORD*)(v9 + 2297) = 0;
    *(_QWORD*)(v9 + 2284) = 0;
    *(_QWORD*)(v9 + 2292) = 0;
    *(_QWORD*)(v9 + 2268) = 0;
    *(_QWORD*)(v9 + 2276) = 0;
    *(_QWORD*)(v9 + 2252) = 0;
    *(_QWORD*)(v9 + 2260) = 0;
    *(_QWORD*)(v9 + 2244) = 0;
    *(_QWORD*)(v9 + 2361) = 0;
    *(_QWORD*)(v9 + 2348) = 0;
    *(_QWORD*)(v9 + 2356) = 0;
    *(_QWORD*)(v9 + 2332) = 0;
    *(_QWORD*)(v9 + 2340) = 0;
    *(_QWORD*)(v9 + 2316) = 0;
    *(_QWORD*)(v9 + 2324) = 0;
    *(_QWORD*)(v9 + 2308) = 0;
    *(_QWORD*)(v9 + 2425) = 0;
    *(_QWORD*)(v9 + 2412) = 0;
    *(_QWORD*)(v9 + 2420) = 0;
    *(_QWORD*)(v9 + 2396) = 0;
    *(_QWORD*)(v9 + 2404) = 0;
    *(_QWORD*)(v9 + 2380) = 0;
    *(_QWORD*)(v9 + 2388) = 0;
    *(_QWORD*)(v9 + 2372) = 0;
    *(_QWORD*)(v9 + 2489) = 0;
    *(_QWORD*)(v9 + 2476) = 0;
    *(_QWORD*)(v9 + 2484) = 0;
    *(_QWORD*)(v9 + 2460) = 0;
    *(_QWORD*)(v9 + 2468) = 0;
    *(_QWORD*)(v9 + 2444) = 0;
    *(_QWORD*)(v9 + 2452) = 0;
    *(_QWORD*)(v9 + 2436) = 0;
    *(_QWORD*)(v9 + 2553) = 0;
    *(_QWORD*)(v9 + 2540) = 0;
    *(_QWORD*)(v9 + 2548) = 0;
    *(_QWORD*)(v9 + 2524) = 0;
    *(_QWORD*)(v9 + 2532) = 0;
    *(_QWORD*)(v9 + 2508) = 0;
    *(_QWORD*)(v9 + 2516) = 0;
    *(_QWORD*)(v9 + 2500) = 0;
    *(_QWORD*)(v9 + 2617) = 0;
    *(_QWORD*)(v9 + 2604) = 0;
    *(_QWORD*)(v9 + 2612) = 0;
    *(_QWORD*)(v9 + 2588) = 0;
    *(_QWORD*)(v9 + 2596) = 0;
    *(_QWORD*)(v9 + 2572) = 0;
    *(_QWORD*)(v9 + 2580) = 0;
    *(_QWORD*)(v9 + 2564) = 0;
    *(_QWORD*)(v9 + 2681) = 0;
    *(_QWORD*)(v9 + 2668) = 0;
    *(_QWORD*)(v9 + 2676) = 0;
    *(_QWORD*)(v9 + 2652) = 0;
    *(_QWORD*)(v9 + 2660) = 0;
    *(_QWORD*)(v9 + 2636) = 0;
    *(_QWORD*)(v9 + 2644) = 0;
    *(_QWORD*)(v9 + 2628) = 0;
    *(_QWORD*)(v9 + 2745) = 0;
    *(_QWORD*)(v9 + 2732) = 0;
    *(_QWORD*)(v9 + 2740) = 0;
    *(_QWORD*)(v9 + 2716) = 0;
    *(_QWORD*)(v9 + 2724) = 0;
    *(_QWORD*)(v9 + 2700) = 0;
    *(_QWORD*)(v9 + 2708) = 0;
    *(_QWORD*)(v9 + 2692) = 0;
    *(_QWORD*)(v9 + 2809) = 0;
    *(_QWORD*)(v9 + 2796) = 0;
    *(_QWORD*)(v9 + 2804) = 0;
    *(_QWORD*)(v9 + 2780) = 0;
    *(_QWORD*)(v9 + 2788) = 0;
    *(_QWORD*)(v9 + 2764) = 0;
    *(_QWORD*)(v9 + 2772) = 0;
    *(_QWORD*)(v9 + 2756) = 0;
    *(_QWORD*)(v9 + 2873) = 0;
    *(_QWORD*)(v9 + 2860) = 0;
    *(_QWORD*)(v9 + 2868) = 0;
    *(_QWORD*)(v9 + 2844) = 0;
    *(_QWORD*)(v9 + 2852) = 0;
    *(_QWORD*)(v9 + 2828) = 0;
    *(_QWORD*)(v9 + 2836) = 0;
    *(_QWORD*)(v9 + 2820) = 0;
    *(_QWORD*)(v9 + 2937) = 0;
    *(_QWORD*)(v9 + 2924) = 0;
    *(_QWORD*)(v9 + 2932) = 0;
    *(_QWORD*)(v9 + 2908) = 0;
    *(_QWORD*)(v9 + 2916) = 0;
    *(_QWORD*)(v9 + 2892) = 0;
    *(_QWORD*)(v9 + 2900) = 0;
    *(_QWORD*)(v9 + 2884) = 0;
    *(_QWORD*)(v9 + 3001) = 0;
    *(_QWORD*)(v9 + 2988) = 0;
    *(_QWORD*)(v9 + 2996) = 0;
    *(_QWORD*)(v9 + 2972) = 0;
    *(_QWORD*)(v9 + 2980) = 0;
    *(_QWORD*)(v9 + 2956) = 0;
    *(_QWORD*)(v9 + 2964) = 0;
    *(_QWORD*)(v9 + 2948) = 0;
    *(_QWORD*)(v9 + 3065) = 0;
    *(_QWORD*)(v9 + 3052) = 0;
    *(_QWORD*)(v9 + 3060) = 0;
    *(_QWORD*)(v9 + 3036) = 0;
    *(_QWORD*)(v9 + 3044) = 0;
    *(_QWORD*)(v9 + 3020) = 0;
    *(_QWORD*)(v9 + 3028) = 0;
    *(_QWORD*)(v9 + 3012) = 0;
    *(_QWORD*)(v9 + 3129) = 0;
    *(_QWORD*)(v9 + 3116) = 0;
    *(_QWORD*)(v9 + 3124) = 0;
    *(_QWORD*)(v9 + 3100) = 0;
    *(_QWORD*)(v9 + 3108) = 0;
    *(_QWORD*)(v9 + 3084) = 0;
    *(_QWORD*)(v9 + 3092) = 0;
    *(_QWORD*)(v9 + 3076) = 0;
    v11 = (_QWORD*)(v9 + 3140);
    v9 += 4224;
    *(_QWORD*)((char*)v11 + 53) = 0;
    v11[5] = 0;
    v11[6] = 0;
    v11[3] = 0;
    v11[4] = 0;
    v11[1] = 0;
    v11[2] = 0;
    *v11 = 0;
  } while (v10 != 0);
  *(_DWORD*)(a1 + 69784) = 0;
  *(_QWORD*)(a1 + 69768) = 0;
  *(_QWORD*)(a1 + 69776) = 0;
  *(_QWORD*)(a1 + 69792) = 0;
  *(_QWORD*)(a1 + 69800) = 0;
  *(_DWORD*)(a1 + 69808) = 0;
  *(_QWORD*)(a1 + 69816) = 0;
  *(_QWORD*)(a1 + 69824) = 0;
  *(_DWORD*)(a1 + 69832) = 0;
  *(_QWORD*)(a1 + 69840) = 0;
  *(_QWORD*)(a1 + 69848) = 0;
  *(_DWORD*)(a1 + 69856) = 0;
  *(_QWORD*)(a1 + 69864) = 0;
  *(_QWORD*)(a1 + 69872) = 0;
  *(_DWORD*)(a1 + 69880) = 0;
  *(_DWORD*)(a1 + 69904) = 0;
  *(_QWORD*)(a1 + 69888) = 0;
  *(_QWORD*)(a1 + 69896) = 0;
  *(_DWORD*)(a1 + 69928) = 0;
  *(_QWORD*)(a1 + 69912) = 0;
  *(_QWORD*)(a1 + 69920) = 0;
  *(_DWORD*)(a1 + 69952) = 0;
  *(_QWORD*)(a1 + 69936) = 0;
  *(_QWORD*)(a1 + 69944) = 0;
  *(_DWORD*)(a1 + 69976) = 0;
  *(_QWORD*)(a1 + 69960) = 0;
  *(_QWORD*)(a1 + 69968) = 0;
  *(_DWORD*)(a1 + 70000) = 0;
  *(_QWORD*)(a1 + 69984) = 0;
  *(_QWORD*)(a1 + 69992) = 0;
  *(_DWORD*)(a1 + 70024) = 0;
  *(_QWORD*)(a1 + 70008) = 0;
  *(_QWORD*)(a1 + 70016) = 0;
  *(_QWORD*)(a1 + 70032) = 0;
  *(_QWORD*)(a1 + 70040) = 0;
  *(_DWORD*)(a1 + 70048) = 0;
  *(_DWORD*)(a1 + 70072) = 0;
  *(_QWORD*)(a1 + 70056) = 0;
  *(_QWORD*)(a1 + 70064) = 0;
  *(_DWORD*)(a1 + 70096) = 0;
  *(_QWORD*)(a1 + 70080) = 0;
  *(_QWORD*)(a1 + 70088) = 0;
  *(_DWORD*)(a1 + 70120) = 0;
  *(_QWORD*)(a1 + 70104) = 0;
  *(_QWORD*)(a1 + 70112) = 0;
  *(_DWORD*)(a1 + 70144) = 0;
  *(_QWORD*)(a1 + 70128) = 0;
  *(_QWORD*)(a1 + 70136) = 0;
  *(_DWORD*)(a1 + 70168) = 0;
  *(_QWORD*)(a1 + 70152) = 0;
  *(_QWORD*)(a1 + 70160) = 0;
  *(_DWORD*)(a1 + 70192) = 0;
  *(_QWORD*)(a1 + 70176) = 0;
  *(_QWORD*)(a1 + 70184) = 0;
  *(_DWORD*)(a1 + 70216) = 0;
  *(_QWORD*)(a1 + 70200) = 0;
  *(_QWORD*)(a1 + 70208) = 0;
  *(_DWORD*)(a1 + 70240) = 0;
  *(_QWORD*)(a1 + 70224) = 0;
  *(_QWORD*)(a1 + 70232) = 0;
  *(_DWORD*)(a1 + 70264) = 0;
  *(_QWORD*)(a1 + 70248) = 0;
  *(_QWORD*)(a1 + 70256) = 0;
  *(_DWORD*)(a1 + 70288) = 0;
  *(_QWORD*)(a1 + 70272) = 0;
  *(_QWORD*)(a1 + 70280) = 0;
  *(_DWORD*)(a1 + 70312) = 0;
  *(_QWORD*)(a1 + 70296) = 0;
  *(_QWORD*)(a1 + 70304) = 0;
  *(_DWORD*)(a1 + 70336) = 0;
  *(_QWORD*)(a1 + 70320) = 0;
  *(_QWORD*)(a1 + 70328) = 0;
  *(_DWORD*)(a1 + 70360) = 0;
  *(_QWORD*)(a1 + 70344) = 0;
  *(_QWORD*)(a1 + 70352) = 0;
  *(_DWORD*)(a1 + 70384) = 0;
  *(_QWORD*)(a1 + 70368) = 0;
  *(_QWORD*)(a1 + 70376) = 0;
  *(_DWORD*)(a1 + 70408) = 0;
  *(_QWORD*)(a1 + 70392) = 0;
  *(_QWORD*)(a1 + 70400) = 0;
  *(_DWORD*)(a1 + 70432) = 0;
  *(_QWORD*)(a1 + 70416) = 0;
  *(_QWORD*)(a1 + 70424) = 0;
  *(_DWORD*)(a1 + 70456) = 0;
  *(_QWORD*)(a1 + 70440) = 0;
  *(_QWORD*)(a1 + 70448) = 0;
  *(_DWORD*)(a1 + 70480) = 0;
  *(_QWORD*)(a1 + 70464) = 0;
  *(_QWORD*)(a1 + 70472) = 0;
  *(_DWORD*)(a1 + 70504) = 0;
  *(_QWORD*)(a1 + 70488) = 0;
  *(_QWORD*)(a1 + 70496) = 0;
  *(_DWORD*)(a1 + 70528) = 0;
  *(_QWORD*)(a1 + 70512) = 0;
  *(_QWORD*)(a1 + 70520) = 0;
  return nn_os_UnlockMutex(v7);
}

__int64 StreamSoundPlayer_2981e0(__int64 result)
{
  int v1;
  _QWORD* v2;
  __int64 v3;
  __int64 i;

  v1 = *(_DWORD*)(result + 1136);
  if (v1 >= 1) {
    v2 = (_QWORD*)(result + 1152);
    v3 = result;
    for (i = 0; i < v1; ++i) {
      if (*v2 != 0) {
        result = GameRoutine_29e740(*(_QWORD*)(v3 + 264));
        *v2 = 0;
        v1 = *(_DWORD*)(v3 + 1136);
      }
      v2 += 528;
    }
  }
  return result;
}

__int64 StreamSoundPlayer_2983c0(__int64 a1, __int64 a2)
{
  unsigned int v2;
  _QWORD* v3;
  _BYTE* v4;
  unsigned __int64 v5;
  bool v6;
  _BYTE* v7;
  _BYTE* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(unsigned __int16*)(a2 + 12);
  if (*(_WORD*)(a2 + 12) == 0) {
    *(_DWORD*)(a1 + 1140) = 0;
    goto LABEL_38;
  }
  v3 = (_QWORD*)(a1 + 72200);
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    if ((*(_BYTE*)(a1 + 225) & 1) != 0) {
      if ((v2 & 1) != 0) {
        *(_BYTE*)(a1 + 68736) = 1;
      }
      if (v2 != 1) {
        v4 = (_BYTE*)(a1 + 68864);
        v5 = 1;
        while (1) {
          if ((v2 & 2) != 0) {
            if (v5 > 7) {
              goto LABEL_33;
            }
            *v4 = 1;
          }
          ++v5;
          v4 += 128;
          v6 = v2 >= 4;
          v2 >>= 1;
          if (!v6) {
            goto LABEL_33;
          }
        }
      }
    }
    else {
      if ((v2 & 1) != 0) {
        *v3 = 0;
        *(_QWORD*)(a1 + 72208) = 0;
        *(_BYTE*)(a1 + 68736) = 1;
      }
      if (v2 != 1) {
        v8 = (_BYTE*)(a1 + 68864);
        v5 = 1;
        while (1) {
          if ((v2 & 2) != 0) {
            if (v5 > 7) {
              goto LABEL_33;
            }
            *v8 = 1;
          }
          ++v5;
          v8 += 128;
          v6 = v2 >= 4;
          v2 >>= 1;
          if (!v6) {
            goto LABEL_33;
          }
        }
      }
    }
    goto LABEL_26;
  }
  if ((v2 & 1) != 0) {
    *(_BYTE*)(a1 + 68736) = 1;
    *v3 = -1;
    *(_QWORD*)(a1 + 72208) = -1;
  }
  if (v2 == 1) {
  LABEL_26:
    *(_DWORD*)(a1 + 1140) = 1;
    goto LABEL_37;
  }
  v7 = (_BYTE*)(a1 + 68864);
  v5 = 1;
  while ((v2 & 2) == 0) {
  LABEL_18:
    ++v5;
    v7 += 128;
    v6 = v2 >= 4;
    v2 >>= 1;
    if (!v6) {
      goto LABEL_33;
    }
  }
  if (v5 <= 7) {
    *v7 = 1;
    goto LABEL_18;
  }

LABEL_33:
  if ((unsigned int)v5 >= 8) {
    v9 = 8;
  }
  else {
    v9 = v5;
  }
  *(_DWORD*)(a1 + 1140) = v9;
  if ((_DWORD)v5 != 0) {
  LABEL_37:
    v10 = *(_QWORD*)(a2 + 17);
    *(_QWORD*)(a1 + 430) = *(_QWORD*)(a2 + 23);
    *(_QWORD*)(a1 + 424) = v10;
    v11 = *(_QWORD*)(a2 + 31);
    *(_QWORD*)(a1 + 444) = *(_QWORD*)(a2 + 37);
    *(_QWORD*)(a1 + 438) = v11;
    v12 = *(_QWORD*)(a2 + 45);
    *(_QWORD*)(a1 + 458) = *(_QWORD*)(a2 + 51);
    *(_QWORD*)(a1 + 452) = v12;
    v13 = *(_QWORD*)(a2 + 59);
    *(_QWORD*)(a1 + 472) = *(_QWORD*)(a2 + 65);
    *(_QWORD*)(a1 + 466) = v13;
    v14 = *(_QWORD*)(a2 + 73);
    *(_QWORD*)(a1 + 486) = *(_QWORD*)(a2 + 79);
    *(_QWORD*)(a1 + 480) = v14;
    v15 = *(_QWORD*)(a2 + 87);
    *(_QWORD*)(a1 + 500) = *(_QWORD*)(a2 + 93);
    *(_QWORD*)(a1 + 494) = v15;
    v16 = *(_QWORD*)(a2 + 101);
    *(_QWORD*)(a1 + 514) = *(_QWORD*)(a2 + 107);
    *(_QWORD*)(a1 + 508) = v16;
    v17 = *(_QWORD*)(a2 + 115);
    *(_QWORD*)(a1 + 528) = *(_QWORD*)(a2 + 121);
    *(_QWORD*)(a1 + 522) = v17;
    return 1;
  }

LABEL_38:
  (*(void (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  return 0;
}

__int64 StreamSoundPlayer_2985e0(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  signed int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int16 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = result;
  if ((*(_BYTE*)(result + 233) & 1) == 0) {
    v4 = GameRoutine_2a1b90(result);
    result = SoundThread_2a1fa0(v4, v3 + 200);
    *(_BYTE*)(v3 + 233) = 1;
  }
  v5 = *(_QWORD*)(v3 + 256);
  if (v5 != 0) {
    if (*(_BYTE*)(v3 + 224) == 1) {
      if ((*(_BYTE*)(v3 + 227) & 1) == 0) {
        v6 = *(_DWORD*)(a2 + 20);
        if (v6 == 0) {
          v6 = *(_DWORD*)(a2 + 16) / 5u;
        }
        *(_DWORD*)(v3 + 304) = v6;
        *(_BYTE*)(v3 + 234) = v6 > 0;
        *(_DWORD*)(v3 + 288) = *(_DWORD*)a2;
        *(_QWORD*)(v3 + 296) = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(v3 + 69760) = *(_DWORD*)(a2 + 24);
        v7 = *(_QWORD*)(a2 + 40);
        *(_QWORD*)(v5 + 904) = *(_QWORD*)(a2 + 32);
        *(_QWORD*)(v5 + 912) = v7;
        *(_QWORD*)(*(_QWORD*)(v3 + 256) + 32LL) = v3;
        *(_QWORD*)(*(_QWORD*)(v3 + 256) + 48LL) = v3 + 320;
        *(_DWORD*)(*(_QWORD*)(v3 + 256) + 56LL) = *(unsigned __int8*)(v3 + 310);
        *(_DWORD*)(*(_QWORD*)(v3 + 256) + 60LL) = *(_DWORD*)(v3 + 312);
        *(_BYTE*)(*(_QWORD*)(v3 + 256) + 89LL) = *(_BYTE*)(v3 + 311);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 56LL))(v3, 1);
        v5 = *(_QWORD*)(v3 + 256);
      }
      v8 = *(_QWORD*)(v3 + 544);
      v9 = *(_QWORD*)(v3 + 552);
      *(_WORD*)(v3 + 231) = 0;
      *(_BYTE*)(v3 + 71280) = 1;
      v10 = *(_WORD*)(v3 + 316);
      *(_QWORD*)(v5 + 96) = v8;
      *(_QWORD*)(v5 + 104) = v9;
      *(_WORD*)(v5 + 86) = v10;
      strncpy(*(_QWORD*)(v3 + 256) + 112LL, a2 + 48, 639);
      v11 = *(_QWORD*)(v3 + 256);
      v12 = *(_QWORD*)(a2 + 720);
      *(_QWORD*)(v11 + 64) = *(_QWORD*)(a2 + 712);
      *(_QWORD*)(v11 + 72) = v12;
      v13 = *(_QWORD*)(v3 + 256);
      v14 = *(_QWORD*)(a2 + 696);
      *(_QWORD*)(v13 + 752) = *(_QWORD*)(a2 + 688);
      *(_QWORD*)(v13 + 760) = v14;
      *(_QWORD*)(*(_QWORD*)(v3 + 256) + 768LL) = *(_QWORD*)(a2 + 704);
      v15 = *(_QWORD*)(v3 + 256);
      v16 = *(_QWORD*)(a2 + 736);
      *(_QWORD*)(v15 + 776) = *(_QWORD*)(a2 + 728);
      *(_QWORD*)(v15 + 784) = v16;
      v17 = *(_QWORD*)(v3 + 256);
      LOBYTE(v15) = GameData_2140b6c;
      *(_QWORD*)(v17 + 40) = 0;
      *(_BYTE*)(v17 + 88) = v15;
      return GameRoutine_29bb30(*(_QWORD*)(v3 + 256));
    }
  }
  else {
    result = memcpy(v3 + 70536, a2, 744);
    *(_BYTE*)(v3 + 71280) = 0;
  }
  return result;
}

__int64 StreamSoundPlayer_2987b0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  signed int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (*v15)();
  __int64 v16;
  _QWORD* v17;
  _QWORD v19[5];

  v3 = a1 + 69632;
  nn_os_LockMutex(a1 + 72216);
  if (*(_QWORD*)(a1 + 256) != 0) {
    if (*(_BYTE*)(a1 + 224) == 1) {
      v5 = *(_QWORD*)(a2 + 728);
      memset(v19, 0, sizeof(v19));
      *(_QWORD*)(a1 + 584) = v5;
      GameRoutine_29e780(v19);
      GameRoutine_29e7f0(v19, *(_QWORD*)(a1 + 584));
      if ((StreamSoundPlayer_298a80(a1, v19) & 1) != 0) {
        v6 = *(_DWORD*)(a2 + 20);
        if (v6 == 0) {
          v6 = *(_DWORD*)(a2 + 16) / 5u;
        }
        *(_DWORD*)(a1 + 304) = v6;
        *(_BYTE*)(a1 + 234) = v6 > 0;
        *(_DWORD*)(a1 + 288) = *(_DWORD*)a2;
        *(_QWORD*)(a1 + 296) = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(v3 + 128) = *(_DWORD*)(a2 + 24);
        v7 = *(_QWORD*)(a1 + 256);
        v8 = *(_QWORD*)(a2 + 40);
        *(_QWORD*)(v7 + 904) = *(_QWORD*)(a2 + 32);
        *(_QWORD*)(v7 + 912) = v8;
        *(_QWORD*)(*(_QWORD*)(a1 + 256) + 32LL) = a1;
        *(_QWORD*)(*(_QWORD*)(a1 + 256) + 48LL) = a1 + 320;
        *(_DWORD*)(*(_QWORD*)(a1 + 256) + 56LL) = *(unsigned __int8*)(a1 + 310);
        *(_DWORD*)(*(_QWORD*)(a1 + 256) + 60LL) = *(_DWORD*)(a1 + 312);
        *(_BYTE*)(*(_QWORD*)(a1 + 256) + 89LL) = *(_BYTE*)(a1 + 311);
        (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 56LL))(a1, 1);
        if ((GameRoutine_29e900(v19) & 1) == 0) {
        LABEL_10:
          v10 = StreamSoundPlayer_298b80(a1, a1 + 320);
          if ((v10 & 1) != 0) {
            v11 = *(_QWORD*)(a1 + 384);
            if (v11 <= 0x2000) {
              v12 = *(_QWORD*)(*(_QWORD*)(a1 + 264) + 16LL) / (v11 + 2304);
              *(_DWORD*)(a1 + 272) = v12;
              if ((int)v12 >= 2) {
                if ((unsigned int)v12 >= 0x21) {
                  *(_DWORD*)(a1 + 272) = 32;
                }
                *(_DWORD*)(a1 + 284) = 0;
                *(_QWORD*)(a1 + 276) = 0;
                if (*(int*)(a1 + 1136) < 1) {
                LABEL_19:
                  *(_BYTE*)(a1 + 227) = 1;
                  StreamSoundPlayer_298e60(a1, v19);
                }
                else {
                  v13 = a1 + 1152;
                  v14 = 0;
                  v15 = GameData_21353e8;
                  while (1) {
                    v16 = GameRoutine_2aa100(v10);
                    v10 = GameRoutine_2aa3e0(v16, 1, 255, v15, v13);
                    if (v10 == 0) {
                      break;
                    }
                    *(_QWORD*)(v13 + 8) = v10;
                    ++v14;
                    v13 += 4224;
                    if (v14 >= *(int*)(a1 + 1136)) {
                      goto LABEL_19;
                    }
                  }
                  if (v14 != 0) {
                    v17 = (_QWORD*)(a1 + 1160);
                    do {
                      if (*v17 != 0) {
                        GameRoutine_2a7620();
                        *v17 = 0;
                      }
                      --v14;
                      v17 += 528;
                    } while (v14 != 0);
                  }
                  StreamSoundPlayer_2981e0(a1);
                }
              }
            }
          }
          goto LABEL_28;
        }
        *(_BYTE*)(a1 + 369) = GameRoutine_29e940(v19) & 1;
        v9 = *(_QWORD*)(a1 + 256);
        if (v9 != 0 && (GameRoutine_29df20(v9 + 896, v19, a1 + 320) & 1) != 0) {
          if ((GameRoutine_29e5b0(*(_QWORD*)(a1 + 256) + 896LL) & 1) != 0) {
            goto LABEL_10;
          }
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 56LL))(a1, 0);
        }
      }
    LABEL_28:
      GameRoutine_29e7a0(v19);
    }
  }
  else {
    memcpy(a1 + 71288, a2, 736);
    *(_BYTE*)(v3 + 2392) = 1;
  }
  return nn_os_UnlockMutex(a1 + 72216);
}

__int64 StreamSoundPlayer_298a80(__int64 a1, __int64 a2)
{
  char v4;
  int v5;
  __int64 v6;
  char v7;
  char v8;
  int v9;
  int v10;
  _QWORD v12[9];
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v14 = 0;
  v15 = 0;
  v4 = GameRoutine_29ea40(a2, &v14, 0);
  if ((v4 & 1) != 0) {
    v5 = HIDWORD(v14);
    v13 = 0;
    memset(v12, 0, sizeof(v12));
    *(_DWORD*)(a1 + 1104) = v14;
    v6 = v15;
    *(_DWORD*)(a1 + 1108) = v5;
    *(_QWORD*)(a1 + 1112) = v6;
    GameRoutine_29e960(a2, v12);
    *(_DWORD*)(a1 + 416) = *(_DWORD*)GameRoutine_296940(*(_QWORD*)(a2 + 16));
    v7 = GameRoutine_29e920(a2);
    GameRoutine_29b770(a1 + 320, v12, v7 & 1);
    v8 = GameRoutine_29e920(a2);
    v9 = HIDWORD(v13);
    *(_BYTE*)(a1 + 1128) = v8 & 1;
    if ((v8 & 1) == 0) {
      v9 = 0;
    }
    *(_DWORD*)(a1 + 1132) = v9;
    v10 = *(_DWORD*)(a1 + 416);
    if (v10 >= 16) {
      v10 = 16;
    }
    *(_DWORD*)(a1 + 1136) = v10;
  }
  return v4 & 1;
}

__int64 StreamSoundPlayer_298b80(__int64 a1, __int64 a2)
{
  int v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  int v12;
  unsigned __int64 v13;

  if ((*(_BYTE*)(a2 + 8) & 1) == 0) {
    v2 = *(_DWORD*)(a1 + 288);
    if (v2 == 1) {
      v3 = *(_QWORD*)(a1 + 296) * *(int*)(a2 + 4) / 0x3E8uLL;
      if (v3 >= 0xFFFFFFFF) {
        v3 = 0xFFFFFFFFLL;
      }
      if (v3 >= *(_QWORD*)(a2 + 24)) {
        goto LABEL_18;
      }
    }
    else if (v2 != 0) {
      if (*(_QWORD*)(a2 + 24) == 0) {
      LABEL_18:
        *(_BYTE*)(a1 + 67) = 1;
        (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
        return 0;
      }
    }
    else if (*(_QWORD*)(a1 + 296) >= *(_QWORD*)(a2 + 24)) {
      goto LABEL_18;
    }
  }
  v4 = *(unsigned int*)(a1 + 1140);
  if ((int)v4 >= 1) {
    v5 = a1 + 1152;
    v6 = 0;
    v7 = a2 + 116;
    v8 = a1 + 68736;
    v9 = a1 + 68744;
    do {
      v10 = (_BYTE*)(a2 + 104 + 14 * v6);
      v11 = (_BYTE*)(v8 + (v6 << 7));
      v11[25] = *v10;
      v11[26] = v10[1];
      v11[27] = v10[2];
      v11[28] = v10[4];
      v11[29] = v10[5];
      v11[30] = v10[6];
      v11[31] = v10[7];
      v11[32] = v10[8];
      v11[33] = v10[9];
      v11[34] = v10[10];
      v11[35] = v10[3];
      v12 = (unsigned __int8)v10[11];
      v11[24] = v12;
      if (v12 != 0) {
        v13 = 0;
        do {
          *(_QWORD*)(v9 + 8 * v13) =
              v5 + 4224LL * *(unsigned __int8*)(v7 + v13);
          ++v13;
        } while (v13 < (unsigned __int8)v10[11]);
      }
      ++v6;
      v9 += 128;
      v7 += 14;
    } while (v6 != v4);
  }
  return 1;
}

__int64 StreamSoundPlayer_298d20(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _QWORD* v4;

  v1 = *(_QWORD*)(a1 + 384);
  if (v1 > 0x2000) {
    return 0;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 264) + 16LL) / (v1 + 2304);
  *(_DWORD*)(a1 + 272) = v2;
  if ((int)v2 < 2) {
    return 0;
  }
  if ((unsigned int)v2 >= 0x21) {
    *(_DWORD*)(a1 + 272) = 32;
  }
  v4 = (_QWORD*)(a1 + 276);
  *(_DWORD*)(a1 + 284) = 0;
  *v4 = 0;
  return 1;
}

__int64 StreamSoundPlayer_298e60(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  unsigned int v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  unsigned int v34;
  int v35;
  unsigned __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  __int64 v40;
  int v41;
  unsigned __int64 v42;
  unsigned int v43;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD v50[13];
  __int64 v51;
  __int64 v52;
  _DWORD v53[2];
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD v57[3];

  v2 = 1;
  if (*(int*)(a1 + 272) >= 1) {
    v3 = *(_QWORD*)(a1 + 336);
    v4 = *(_QWORD*)(a1 + 376);
    v6 = 0;
    v7 = 0;
    v8 = v3 / v4;
    v9 = (*(_QWORD*)(a1 + 344) - 1LL) / v4;
    v42 = v3 % v4;
    v10 = v9 - v3 / v4 + 1;
    v38 = (_QWORD*)(a1 + 1160);
    v39 = (_QWORD*)(a1 + 592);
    v43 = v10;
    v41 = v3 / v4 - 1;
    v40 = (unsigned int)(v3 / v4) + 1;
    v37 = v3 / v4;
    while (1) {
      v51 = 0;
      v52 = 0;
      v49 = 0;
      memset(v50, 0, sizeof(v50));
      v48 = 0;
      v45 = 0;
      v46 = 0;
      v47 = v7;
      if (v6 <= (unsigned int)v9) {
        v11 = 0;
        v12 = false;
        if ((_DWORD)v9 == 0) {
          goto LABEL_18;
        }
      }
      else {
        v11 = (v6 - (unsigned int)v9) % v10;
        v12 = v11 == 0;
        if ((_DWORD)v9 == 0) {
          goto LABEL_18;
        }
      }
      if (v6 == (_DWORD)v9 || v12) {
      LABEL_18:
        v21 = *(_QWORD*)(a1 + 392);
        v14 = *(_QWORD*)(a1 + 400);
        HIDWORD(v51) = v9;
        v52 = v21;
        LOBYTE(v21) = *(_BYTE*)(a1 + 328);
        v46 = v14;
        if ((v21 & 1) != 0) {
          v22 = *(_QWORD*)(a1 + 336);
          HIDWORD(v50[12]) = 1;
        LABEL_29:
          *(_QWORD*)(a1 + 1120) = v22;
          goto LABEL_30;
        }
        LOBYTE(v51) = 1;
        *(_QWORD*)(a1 + 1120) = 0;
        goto LABEL_30;
      }
      if (v6 > (unsigned int)v9 && (*(_BYTE*)(a1 + 328) & 1) != 0) {
        v14 = *(_QWORD*)(a1 + 376);
        v13 = *(_QWORD*)(a1 + 384);
        v46 = v14;
        v52 = v13;
        if (v11 != 1) {
          HIDWORD(v51) = v41 + v11;
          v22 = *(_QWORD*)(a1 + 1120) + v14;
          goto LABEL_29;
        }
        HIDWORD(v51) = v8;
        v47 = v42;
        *(_QWORD*)(a1 + 1120) = v14 * v40;
        if (*(_DWORD*)(a1 + 320) == 2) {
          if (*(int*)(a1 + 416) >= 1) {
            v15 = (char*)v50 + 6;
            v16 = v38;
            v17 = v39;
            v18 = 0;
            do {
              v56 = 0;
              memset(v57, 0, 14);
              v54 = 0;
              v55 = 0;
              memset(v53, 0, 6);
              if ((GameRoutine_29e9c0(a2, &v54, v53, (unsigned int)v18) & 1) ==
                  0) {
                return 0;
              }
              v19 = v55;
              *v17 = v54;
              v17[1] = v19;
              v20 = v57[0];
              v17[2] = v56;
              v17[3] = v20;
              GameRoutine_2a9f20(*v16, 0, v17);
              ++v18;
              v17 += 4;
              v16 += 528;
              *((_WORD*)v15 - 2) = v53[0];
              *(_DWORD*)(v15 - 2) = *(_DWORD*)((char*)v53 + 2);
              v15 += 6;
            } while (v18 < *(int*)(a1 + 416));
          }
          v10 = v43;
          v7 = 0;
          LOBYTE(v50[0]) = 1;
        }
        else {
          v7 = 0;
        }
      }
      else {
        v14 = *(_QWORD*)(a1 + 376);
        v23 = *(_QWORD*)(a1 + 384);
        HIDWORD(v51) = v6;
        v52 = v23;
        v24 = *(_QWORD*)(a1 + 1120);
        v46 = v14;
        *(_QWORD*)(a1 + 1120) = v24 + v14;
        if (v6 == 0 && *(_DWORD*)(a1 + 320) == 2) {
          if (*(int*)(a1 + 416) >= 1) {
            v25 = (char*)v50 + 6;
            v26 = v38;
            v27 = v39;
            v28 = 0;
            do {
              v56 = 0;
              memset(v57, 0, 14);
              v54 = 0;
              v55 = 0;
              memset(v53, 0, 6);
              if ((GameRoutine_29e9c0(a2, &v54, v53, (unsigned int)v28) & 1) ==
                  0) {
                return 0;
              }
              v29 = v55;
              *v27 = v54;
              v27[1] = v29;
              v30 = v57[0];
              v27[2] = v56;
              v27[3] = v30;
              GameRoutine_2a9f20(*v26, 0, v27);
              ++v28;
              v27 += 4;
              v26 += 528;
              *((_WORD*)v25 - 2) = v57[1];
              *(_DWORD*)(v25 - 2) = *(_DWORD*)((char*)&v57[1] + 2);
              v25 += 6;
            } while (v28 < *(int*)(a1 + 416));
          }
          LODWORD(v8) = v37;
          v10 = v43;
          LOBYTE(v50[0]) = 1;
        }
      }
    LABEL_30:
      v31 = *(_DWORD*)(a1 + 276);
      v32 = *(unsigned __int16*)(a1 + 308);
      v48 = 0;
      LODWORD(v45) = v31;
      StreamSoundPlayer_299a60(a1, 1, &v45, v32, 1, HIDWORD(v51), v52);
      v33 = *(_DWORD*)(a1 + 276);
      v34 = *(_DWORD*)(a1 + 272);
      if (v33 + 1 < v34) {
        v35 = v33 + 1;
      }
      else {
        v35 = 0;
      }
      *(_DWORD*)(a1 + 276) = v35;
      if ((v51 & 1) == 0) {
        v7 += v14;
        if ((int)++v6 < (int)v34) {
          continue;
        }
      }
      return 1;
    }
  }
  return v2;
}

__int64 StreamSoundPlayer_Unknown4(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  unsigned __int8 v6;
  unsigned __int64 i;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64* v12;
  __int64 j;

  if ((*(_BYTE*)(result + 234) & 1) == 0 && (*(_BYTE*)(result + 65) & 1) == 0) {
    v1 = *(_DWORD*)(result + 1140);
    v2 = result;
    if (v1 >= 1) {
      v3 = 0;
      v4 = result + 68744;
      do {
        v5 = (_BYTE*)(v2 + 68736 + (v3 << 7));
        if (*v5 == 1) {
          v6 = v5[24];
          if (v6 != 0) {
            for (i = 0; i < v6; ++i) {
              v8 = *(_QWORD*)(v4 + 8 * i);
              if (v8 != 0) {
                v9 = *(_QWORD*)(v8 + 8);
                if (v9 != 0) {
                  GameRoutine_2a80e0(*(_QWORD*)(v8 + 8),
                                     *(unsigned int*)(v2 + 320));
                  GameRoutine_2a8180(v9, *(unsigned int*)(v2 + 324));
                  *(_DWORD*)(v9 + 376) = *(_DWORD*)(v2 + 69760);
                  GameRoutine_2a8b00(v9, *(_QWORD*)(v2 + 48),
                                     *(_QWORD*)(v2 + 56));
                  result = GameRoutine_2a76b0(v9);
                  v6 = v5[24];
                }
              }
            }
            v1 = *(_DWORD*)(v2 + 1140);
          }
        }
        ++v3;
        v4 += 128;
      } while (v3 < v1);
    }
    v10 = *(unsigned __int8*)(v2 + 229) | *(unsigned __int8*)(v2 + 66);
    if (*(unsigned __int8*)(v2 + 228) != v10) {
      v11 = *(_DWORD*)(v2 + 1136);
      if (v11 >= 1) {
        v12 = (__int64*)(v2 + 1160);
        for (j = 0; j < v11; ++j) {
          result = *v12;
          if (*v12 != 0) {
            result = GameRoutine_2a7880(result);
            v11 = *(_DWORD*)(v2 + 1136);
          }
          v12 += 528;
        }
      }
      *(_BYTE*)(v2 + 228) = v10;
    }
    *(_BYTE*)(v2 + 65) = 1;
  }
  return result;
}

__int64 StreamSoundPlayer_Unknown5(__int64 a1)
{
  __int64 result;
  int v3;
  __int64* v4;
  __int64 i;
  __int64 v6;

  result = *(_QWORD*)(a1 + 256);
  if (result != 0) {
    result = GameRoutine_29ba90();
  }
  v3 = *(_DWORD*)(a1 + 1136);
  if (v3 >= 1) {
    v4 = (__int64*)(a1 + 1160);
    for (i = 0; i < v3; ++i) {
      result = *v4;
      if (*v4 != 0) {
        result = GameRoutine_2a76e0();
        v3 = *(_DWORD*)(a1 + 1136);
      }
      v4 += 528;
    }
  }
  if ((*(_BYTE*)(a1 + 233) & 1) == 0) {
    if (*(_BYTE*)(a1 + 65) != 1) {
      return result;
    }
  LABEL_12:
    *(_BYTE*)(a1 + 65) = 0;
    return result;
  }
  v6 = GameRoutine_2a1b90(result);
  result = SoundThread_2a1fd0(v6, a1 + 200);
  *(_BYTE*)(a1 + 233) = 0;
  if (*(_BYTE*)(a1 + 65) == 1) {
    goto LABEL_12;
  }
  return result;
}

__int64 StreamSoundPlayer_Unknown6(__int64 result, char a2)
{
  __int64 v2;
  int v3;
  int v4;
  __int64* v5;
  __int64 i;

  v2 = result;
  *(_BYTE*)(result + 66) = a2;
  if ((a2 & 1) != 0) {
    *(_BYTE*)(result + 229) = 1;
    LOBYTE(v3) = 1;
    if (*(_BYTE*)(result + 228) == 1) {
      return result;
    }
  }
  else {
    v3 = *(unsigned __int8*)(result + 229);
    if (*(unsigned __int8*)(result + 228) == v3) {
      return result;
    }
  }
  v4 = *(_DWORD*)(result + 1136);
  if (v4 >= 1) {
    v5 = (__int64*)(result + 1160);
    for (i = 0; i < v4; ++i) {
      result = *v5;
      if (*v5 != 0) {
        result = GameRoutine_2a7880(result);
        v4 = *(_DWORD*)(v2 + 1136);
      }
      v5 += 528;
    }
  }
  *(_BYTE*)(v2 + 228) = v3;
  return result;
}

__int64 StreamSoundPlayer_299550(__int64 a1, __int64 a2)
{
  char v4;
  int v5;

  nn_os_LockMutex(a1 + 72216);
  v4 = *(_BYTE*)(a1 + 225) | *(_BYTE*)(a1 + 227);
  if ((v4 & 1) != 0) {
    *(_BYTE*)a2 = *(_BYTE*)(a1 + 328);
    *(_DWORD*)(a2 + 4) = *(_DWORD*)(a1 + 324);
    *(_QWORD*)(a2 + 8) = *(_QWORD*)(a1 + 352);
    *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 360);
    *(_QWORD*)(a2 + 24) = *(_QWORD*)(a1 + 336);
    *(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 344);
    v5 = *(_DWORD*)(a1 + 416);
    if (v5 >= 16) {
      v5 = 16;
    }
    *(_DWORD*)(a2 + 40) = v5;
  }
  nn_os_UnlockMutex(a1 + 72216);
  return v4 & 1;
}

__int64 StreamSoundPlayer_299a60(__int64 a1, char a2, unsigned int* a3,
                                 unsigned __int16 a4, char a5, unsigned int a6,
                                 __int64 a7)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int* v15;
  int v16;
  int v17;
  __int64 result;
  int v19;
  _QWORD* v20;
  __int64 i;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  char v49;

  if (*(_BYTE*)(a1 + 224) != 1) {
    return 0;
  }
  if ((a2 & 1) == 0) {
    *(_BYTE*)(a1 + 67) = 1;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  }
  else if (*(unsigned __int16*)(a1 + 308) == a4) {
    if ((*(_BYTE*)(a1 + 229) & 1) == 0 && (*(_BYTE*)(a1 + 225) & 1) != 0) {
      v11 = *(unsigned int*)(a1 + 272);
      if ((int)v11 >= 1) {
        v12 = -v11;
        v13 = 0;
        v14 = 0;
        while (2) {
          v15 = (int*)(a1 + 1220 + (v13++ << 6));
          while (1) {
            v17 = *v15;
            v15 += 16;
            v16 = v17;
            if (v17 != 0) {
              break;
            }
            ++v13;
            if (v12 + v13 == 1) {
              if ((v14 & 1) == 0) {
                goto LABEL_27;
              }
              goto LABEL_20;
            }
          }
          if (v16 != 3) {
            goto LABEL_27;
          }
          v14 = 1;
          if (v12 + v13 != 0) {
            continue;
          }
          break;
        }
      LABEL_20:
        *(_WORD*)(a1 + 231) = 257;
        *(_BYTE*)(a1 + 229) = 1;
        if ((*(_BYTE*)(a1 + 228) & 1) == 0) {
          v19 = *(_DWORD*)(a1 + 1136);
          if (v19 >= 1) {
            v20 = (_QWORD*)(a1 + 1160);
            for (i = 0; i < v19; ++i) {
              if (*v20 != 0) {
                v22 = a6;
                GameRoutine_2a7880(*v20);
                v19 = *(_DWORD*)(a1 + 1136);
                a6 = v22;
              }
              v20 += 528;
            }
          }
          *(_BYTE*)(a1 + 228) = 1;
        }
      }
    }
  LABEL_27:
    if (*((_QWORD*)a3 + 1) != 0) {
      LODWORD(v23) = *(_DWORD*)(a1 + 1136);
      if ((int)v23 >= 1) {
        if ((a5 & 1) != 0) {
          v24 = a1 + 3264;
          v25 = 42;
          v26 = 0;
          v27 = 0;
          v28 = a6;
          do {
            v33 = *(_QWORD*)(a1 + 1112);
            v34 = *(_QWORD*)(a1 + 384);
            v35 = v24 + ((unsigned __int64)*a3 << 6);
            if (*((_BYTE*)a3 + 40) == 1) {
              v29 = *(unsigned int*)((char*)a3 + v25);
              *(_WORD*)(v35 + 4) = *(_WORD*)((char*)a3 + v25 + 4);
              *(_DWORD*)v35 = v29;
              v30 = v35;
            }
            else {
              v30 = 0;
            }
            v31 = v33 + (int)v23 * v28 * v34;
            *(_DWORD*)(v35 - 2044) = 0;
            *(_QWORD*)(v35 - 2040) = 0;
            v32 = v35 - 2080;
            *(_QWORD*)(v35 - 2096) = v31 + v26;
            *(_QWORD*)v32 = 0;
            *(_QWORD*)(v32 + 8) = 0;
            *(_QWORD*)(v32 + 16) = 0;
            *(_QWORD*)(v32 + 24) = 0;
            *(_BYTE*)(v32 + 32) = 0;
            *(_QWORD*)(v35 - 2088) = v34;
            *(_QWORD*)v32 = *((_QWORD*)a3 + 1);
            *(_QWORD*)(v35 - 2072) = *((_QWORD*)a3 + 3);
            *(_QWORD*)(v35 - 2064) = v30;
            GameRoutine_2a0600(v24 - 2112, v35 - 2096);
            v23 = *(int*)(a1 + 1136);
            ++v27;
            v24 += 4224;
            v25 += 6;
            v26 += a7;
          } while (v27 < v23);
        }
        else {
          v36 = a1 + 3264;
          v37 = 42;
          v38 = 0;
          do {
            v44 = *a3;
            v45 = *(_QWORD*)(a1 + 384);
            v46 = v36 + (v44 << 6);
            if (*((_BYTE*)a3 + 40) == 1) {
              v39 = *(unsigned int*)((char*)a3 + v37);
              *(_WORD*)(v46 + 4) = *(_WORD*)((char*)a3 + v37 + 4);
              *(_DWORD*)v46 = v39;
              v40 = v36 + (v44 << 6);
            }
            else {
              v40 = 0;
            }
            v41 = v46 - 2096;
            v42 = *(_QWORD*)(v36 - 2112);
            *(_QWORD*)(v41 + 16) = 0;
            *(_QWORD*)(v41 + 24) = 0;
            *(_QWORD*)(v41 + 32) = 0;
            *(_QWORD*)(v41 + 40) = 0;
            *(_BYTE*)(v41 + 48) = 0;
            *(_DWORD*)(v46 - 2044) = 0;
            *(_QWORD*)(v46 - 2040) = 0;
            *(_QWORD*)v41 = v42 + (v45 + 2304) * v44;
            *(_QWORD*)(v41 + 8) = 0;
            *(_QWORD*)(v46 - 2088) = *((_QWORD*)a3 + 4);
            *(_QWORD*)(v46 - 2080) = *((_QWORD*)a3 + 1);
            v43 = *((_QWORD*)a3 + 3);
            *(_QWORD*)(v46 - 2064) = v40;
            *(_QWORD*)(v46 - 2072) = v43;
            GameRoutine_2a0600(v36 - 2112, v46 - 2096);
            ++v38;
            v36 += 4224;
            v37 += 6;
          } while (v38 < *(int*)(a1 + 1136));
        }
      }
      v47 = a1 + 24LL * *a3 + 69632;
      *(_QWORD*)(v47 + 136) = *((_QWORD*)a3 + 2);
      v47 += 136;
      *(_QWORD*)(v47 + 8) = *((_QWORD*)a3 + 1);
      *(_DWORD*)(v47 + 16) = a3[35];
    }
    if (*((_BYTE*)a3 + 144) == 1) {
      *(_BYTE*)(a1 + 230) = 1;
    }
    result = 1;
    if ((a5 & 1) == 0 && (*(_BYTE*)(a1 + 225) & 1) == 0) {
      v48 = *(_DWORD*)(a1 + 244) - 1;
      *(_DWORD*)(a1 + 244) = v48;
      if (v48 == 0 || (*(_BYTE*)(a1 + 230) & 1) != 0) {
        v49 = *(_BYTE*)(a1 + 64);
        *(_BYTE*)(a1 + 225) = 1;
        if ((v49 & 1) == 0 || (*(_BYTE*)(a1 + 68736) & 1) == 0) {
          *(_QWORD*)(a1 + 72200) = -1;
          *(_QWORD*)(a1 + 72208) = -1;
        }
      }
    }
    return result;
  }
  return 0;
}

__int64 StreamSoundPlayer_29a0e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64 i;
  unsigned int v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64* v49;
  __int64 v50;
  int v51;
  int* v52;
  __int64 v53;
  int* v54;
  int v55;
  int v56;
  __int64* v57;
  __int64 j;
  __int64 v59;
  __int64 v60;
  int* v61;
  int v62;
  unsigned int v63;
  bool v64;
  bool v66;
  int v67;
  __int64 v68;
  int v69;
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
  _QWORD v80[2];
  __int64 v81;
  __int64 v82;
  _QWORD v83[2];
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

  if (*(_BYTE*)(result + 65) != 1) {
    return result;
  }
  v94 = v1;
  v95 = v2;
  v3 = result;
  if (*(_BYTE*)(result + 68736) != 1 ||
      *(_BYTE*)(result + 227) == 1 && (*(_BYTE*)(result + 225) & 1) == 0) {
    return result;
  }
  v78 = result + 68736;
  if (GameData_219d029 == 1) {
    *(_BYTE*)(result + 229) = GameData_219d029;
    if ((*(_BYTE*)(result + 228) & 1) == 0) {
      v4 = *(_DWORD*)(result + 1136);
      if (v4 >= 1) {
        v5 = (__int64*)(result + 1160);
        for (i = 0; i < v4; ++i) {
          result = *v5;
          if (*v5 != 0) {
            result = GameRoutine_2a7880(result);
            v4 = *(_DWORD*)(v3 + 1136);
          }
          v5 += 528;
        }
      }
      *(_BYTE*)(v3 + 228) = 1;
    }
  }
  v7 = *(_DWORD*)(v3 + 280);
  v79 = v3 + 69784;
  while (1) {
    v18 = *(unsigned int*)(v3 + 1136);
    if ((int)v18 >= 1) {
      break;
    }
    v92 = 0;
    v93 = 0;
    v90 = 0;
    v91 = 0;
    v23 = 24LL * v7;
    v24 = *(_DWORD*)(v3 + 236);
    v88 = 0;
    v89 = 0;
    v86 = 0;
    v87 = 0;
    LODWORD(v23) = *(_DWORD*)(v79 + v23);
    v84 = 0;
    v85 = 0;
    v83[0] = 0;
    v83[1] = 0;
    v81 = 0;
    v82 = 0;
    v80[0] = 0;
    v80[1] = 0;
    *(_DWORD*)(v3 + 236) = v24 + v23;
  LABEL_44:
    v51 = *(_DWORD*)(v3 + 288);
    if (v51 != 0) {
      if (v51 == 1) {
        if (*(_QWORD*)(v3 + 296) * *(int*)(v3 + 324) / 0x3E8uLL >= 0xFFFFFFFF) {
          v8 = 0xFFFFFFFFLL;
        }
        else {
          v8 = *(_QWORD*)(v3 + 296) * *(int*)(v3 + 324) / 0x3E8uLL;
        }
      }
      else {
        v8 = 0;
      }
    }
    else {
      v8 = *(_QWORD*)(v3 + 296);
    }
    v9 = *(_QWORD*)(v3 + 1120);
    v10 = *(_QWORD*)(v3 + 256);
    v11 = *(_BYTE*)(v3 + 65) == 0;
    v12 = *(unsigned int*)(v3 + 276);
    *(_QWORD*)(v3 + 296) = 0;
    *(_QWORD*)(v3 + 1120) = 0;
    if (v11) {
      v13 = 1;
    }
    else {
      v13 = 2;
    }
    result = GameRoutine_29bb80(v10, v80, v12, v8, v9, v13);
    v14 = *(_DWORD*)(v3 + 276);
    v15 = *(_DWORD*)(v3 + 272);
    if (v14 + 1 < v15) {
      v16 = v14 + 1;
    }
    else {
      v16 = 0;
    }
    *(_DWORD*)(v3 + 276) = v16;
    v17 = *(_DWORD*)(v3 + 280);
    *(_DWORD*)(v3 + 284) = v17;
    if (v17 + 1 < v15) {
      v7 = v17 + 1;
    }
    else {
      v7 = 0;
    }
    *(_DWORD*)(v3 + 280) = v7;
  }
  v19 = (unsigned __int64)v7 << 6;
  v20 = *(unsigned int*)(v3 + 1136);
  v21 = (_DWORD*)(v3 + 1220 + v19);
  while (*v21 == 3) {
    v21 += 1056;
    if (--v20 == 0) {
      if ((unsigned int)v18 >= 8) {
        v25 = 0;
        v22 = 0;
        do {
          v26 = v3 + v19 + v25;
          v27 = (_DWORD*)(v3 + 18116 + v19 + v25);
          v22 += 8;
          v25 += 33792;
          *(_DWORD*)(v26 + 1220) = 0;
          *(_QWORD*)(v26 + 1224) = 0;
          *(_QWORD*)(v26 + 1168) = 0;
          *(_QWORD*)(v26 + 1176) = 0;
          *(_QWORD*)(v26 + 1184) = 0;
          *(_QWORD*)(v26 + 1192) = 0;
          *(_QWORD*)(v26 + 1200) = 0;
          *(_QWORD*)(v26 + 1208) = 0;
          *(_BYTE*)(v26 + 1216) = 0;
          *(_DWORD*)(v26 + 5444) = 0;
          *(_QWORD*)(v26 + 5448) = 0;
          *(_QWORD*)(v26 + 5392) = 0;
          *(_QWORD*)(v26 + 5400) = 0;
          *(_QWORD*)(v26 + 5408) = 0;
          *(_QWORD*)(v26 + 5416) = 0;
          *(_QWORD*)(v26 + 5424) = 0;
          *(_QWORD*)(v26 + 5432) = 0;
          *(_DWORD*)(v26 + 9668) = 0;
          *(_QWORD*)(v26 + 9672) = 0;
          *(_BYTE*)(v26 + 5440) = 0;
          *(_QWORD*)(v26 + 9616) = 0;
          *(_QWORD*)(v26 + 9624) = 0;
          *(_QWORD*)(v26 + 9632) = 0;
          *(_QWORD*)(v26 + 9640) = 0;
          *(_QWORD*)(v26 + 9648) = 0;
          *(_QWORD*)(v26 + 9656) = 0;
          *(_DWORD*)(v26 + 13892) = 0;
          *(_QWORD*)(v26 + 13896) = 0;
          *(_QWORD*)(v26 + 13840) = 0;
          *(_QWORD*)(v26 + 13848) = 0;
          *(_BYTE*)(v26 + 9664) = 0;
          *(_QWORD*)(v26 + 13856) = 0;
          *(_QWORD*)(v26 + 13864) = 0;
          *(_QWORD*)(v26 + 13872) = 0;
          *(_QWORD*)(v26 + 13880) = 0;
          *v27 = 0;
          *(_QWORD*)(v26 + 18120) = 0;
          *(_QWORD*)(v26 + 18104) = 0;
          *(_QWORD*)(v26 + 18096) = 0;
          *(_QWORD*)(v26 + 18088) = 0;
          *(_QWORD*)(v26 + 18080) = 0;
          *(_BYTE*)(v26 + 13888) = 0;
          *(_QWORD*)(v26 + 18072) = 0;
          *(_QWORD*)(v26 + 18064) = 0;
          v27[1056] = 0;
          *(_QWORD*)(v26 + 22344) = 0;
          *(_QWORD*)(v26 + 22328) = 0;
          *(_QWORD*)(v26 + 22320) = 0;
          *(_QWORD*)(v26 + 22312) = 0;
          *(_QWORD*)(v26 + 22304) = 0;
          *(_QWORD*)(v26 + 22296) = 0;
          *(_QWORD*)(v26 + 22288) = 0;
          *(_BYTE*)(v26 + 18112) = 0;
          v27[2112] = 0;
          *(_QWORD*)(v26 + 26568) = 0;
          *(_QWORD*)(v26 + 26552) = 0;
          *(_QWORD*)(v26 + 26544) = 0;
          *(_QWORD*)(v26 + 26536) = 0;
          *(_QWORD*)(v26 + 26528) = 0;
          *(_QWORD*)(v26 + 26520) = 0;
          *(_QWORD*)(v26 + 26512) = 0;
          v27[3168] = 0;
          *(_QWORD*)(v26 + 30792) = 0;
          *(_BYTE*)(v26 + 22336) = 0;
          *(_QWORD*)(v26 + 30776) = 0;
          *(_QWORD*)(v26 + 30768) = 0;
          *(_QWORD*)(v26 + 30760) = 0;
          *(_QWORD*)(v26 + 30752) = 0;
          *(_QWORD*)(v26 + 30744) = 0;
          *(_QWORD*)(v26 + 30736) = 0;
          *(_BYTE*)(v26 + 26560) = 0;
          *(_BYTE*)(v26 + 30784) = 0;
        } while (33792 * ((v18 >> 3) & 0xFFFFFFF) != v25);
      }
      else {
        v22 = 0;
      }
      v28 = v18 & 7;
      if ((v18 & 7) != 0) {
        v29 = (_QWORD*)(v3 + 1224 + v19 + 4224 * v22);
        v30 = v18 & 7;
        do {
          *((_DWORD*)v29 - 1) = 0;
          *v29 = 0;
          --v30;
          *(v29 - 7) = 0;
          *(v29 - 6) = 0;
          *(v29 - 5) = 0;
          *(v29 - 4) = 0;
          *(v29 - 3) = 0;
          *(v29 - 2) = 0;
          *((_BYTE*)v29 - 8) = 0;
          v29 += 528;
        } while (v30 != 0);
      }
      v31 = 0;
      v92 = 0;
      v93 = 0;
      v90 = 0;
      v91 = 0;
      v32 = *(_DWORD*)(v3 + 236);
      v88 = 0;
      v89 = 0;
      v86 = 0;
      v87 = 0;
      v33 = *(_DWORD*)(v79 + 24LL * v7);
      v84 = 0;
      v85 = 0;
      v83[0] = 0;
      v83[1] = 0;
      v81 = 0;
      v82 = 0;
      v80[0] = 0;
      v80[1] = 0;
      v34 = v32 + v33;
      v35 = *(unsigned int*)(v3 + 276);
      *(_DWORD*)(v3 + 236) = v34;
      v36 = (*(_QWORD*)(v3 + 384) + 2304LL) * v35;
      if ((unsigned int)v18 >= 8) {
        v37 = v83;
        v38 = 0;
        v39 = 0;
        do {
          v40 = (_QWORD*)(v3 + v38);
          v39 -= 8;
          v38 += 33792;
          v41 = v40[1200];
          v42 = v40[1728];
          v43 = v40[672] + v36;
          *(v37 - 4) = v40[144] + v36;
          *(v37 - 3) = v43;
          v44 = v40[2256];
          *(v37 - 2) = v41 + v36;
          *(v37 - 1) = v42 + v36;
          v45 = v40[2784] + v36;
          *v37 = v44 + v36;
          v37[1] = v45;
          v46 = v40[3312] + v36;
          v47 = v40[3840] + v36;
          v37[2] = v46;
          v37[3] = v47;
          v37 += 8;
        } while (-(__int64)(v18 & 0x7FFFFFF8) != v39);
        v31 = -v39;
      }
      if ((v18 & 7) != 0) {
        v48 = &v80[v31];
        v49 = (__int64*)(v3 + 1152 + 4224 * v31);
        do {
          v50 = *v49;
          v49 += 528;
          --v28;
          *v48++ = v50 + v36;
        } while (v28 != 0);
      }
      goto LABEL_44;
    }
  }
  v52 = (int*)(v3 + 1220);
  if ((*(_BYTE*)(v3 + 229) & 1) == 0) {
    if (*(_BYTE*)(v3 + 225) == 1) {
      result = GameRoutine_29bd80(*(_QWORD*)(v3 + 256));
      if ((result & 1) != 0) {
        v53 = *(unsigned int*)(v3 + 272);
        if ((int)v53 < 1) {
        LABEL_59:
          *(_WORD*)(v3 + 231) = 257;
          *(_BYTE*)(v3 + 229) = 1;
          if ((*(_BYTE*)(v3 + 228) & 1) == 0) {
            v56 = *(_DWORD*)(v3 + 1136);
            if (v56 >= 1) {
              v57 = (__int64*)(v3 + 1160);
              for (j = 0; j < v56; ++j) {
                result = *v57;
                if (*v57 != 0) {
                  result = GameRoutine_2a7880(result);
                  v56 = *(_DWORD*)(v3 + 1136);
                }
                v57 += 528;
              }
            }
            *(_BYTE*)(v3 + 228) = 1;
          }
          goto LABEL_66;
        }
        v54 = (int*)(v3 + 1220);
        while (1) {
          v55 = *v54;
          v54 += 16;
          if ((unsigned int)(v55 - 3) >= 0xFFFFFFFE) {
            break;
          }
          if (--v53 == 0) {
            goto LABEL_59;
          }
        }
      }
    }
    if (*(_BYTE*)(v3 + 232) != 1) {
      goto LABEL_66;
    }
    goto LABEL_59;
  }

LABEL_66:
  v59 = *(unsigned int*)(v3 + 272);
  if ((int)v59 < 1) {
    v67 = *(_BYTE*)(v3 + 230) & 1;
    if (*(_BYTE*)(v3 + 232) == 1) {
      goto LABEL_74;
    }
  }
  else {
    v60 = v59 - 1;
    v61 = (int*)(v3 + 1220);
    do {
      v62 = *v61;
      v61 += 16;
      v63 = v62 - 3;
      v64 = (unsigned int)(v62 - 3) < 0xFFFFFFFE;
      v66 = v60-- != 0;
    } while (v63 <= 0xFFFFFFFD && v66);
    v67 = v64 & *(_BYTE*)(v3 + 230);
    if (*(_BYTE*)(v3 + 232) == 1) {
    LABEL_74:
      if (*(_BYTE*)(v3 + 225) == 1) {
        result = GameRoutine_29bd80(*(_QWORD*)(v3 + 256));
        if ((result & 1) != 0) {
          LODWORD(v59) = *(_DWORD*)(v3 + 272);
          if ((int)v59 < 1) {
            goto LABEL_85;
          }
          v68 = *(unsigned int*)(v3 + 272);
          while (1) {
            v69 = *v52;
            v52 += 16;
            if ((unsigned int)(v69 - 3) >= 0xFFFFFFFE) {
              break;
            }
            if (--v68 == 0) {
              goto LABEL_85;
            }
          }
        }
      }
      if (v67 != 0) {
        LODWORD(v59) = *(_DWORD*)(v3 + 272);
        goto LABEL_85;
      }
      goto LABEL_89;
    }
  }
  if (v67 != 0) {
  LABEL_85:
    v70 = v78;
    if (*(int*)(v3 + 280) >= 1) {
      LODWORD(v59) = *(_DWORD*)(v3 + 280);
    }
    v71 = *(_QWORD*)(v3 + 24LL * (int)v59 + 69752) +
          *(_QWORD*)(v3 + 24LL * (int)v59 + 69744);
    if (*(_BYTE*)(v3 + 328) != 1) {
      goto LABEL_95;
    }
    goto LABEL_92;
  }

LABEL_89:
  result = *(_QWORD*)(v3 + 1160);
  if (result != 0) {
    result = GameRoutine_2a9de0();
  }
  v70 = v78;
  v71 = *(_QWORD*)(v3 + 24LL * *(unsigned int*)(v3 + 280) + 69768) + result;
  if (*(_BYTE*)(v3 + 328) != 1) {
  LABEL_95:
    v77 = v71;
    *(_DWORD*)(v3 + 240) = 0;
    if ((*(_BYTE*)(v3 + 64) & 1) == 0) {
      goto LABEL_102;
    }
    goto LABEL_99;
  }

LABEL_92:
  v72 = *(_QWORD*)(v3 + 360);
  v73 = v71 - v72;
  if (v71 <= v72) {
    goto LABEL_95;
  }
  v74 = *(_QWORD*)(v3 + 352);
  v75 = v72 - v74;
  if (v72 - v74 > 1151) {
    LODWORD(v76) = 1;
  }
  else {
    v76 = (v71 - v74) / v75;
    v73 = (v71 - v74) % v75;
  }
  v77 = v73 + v74;
  *(_DWORD*)(v3 + 240) = v76;
  if ((*(_BYTE*)(v3 + 64) & 1) == 0) {
    goto LABEL_102;
  }

LABEL_99:
  if ((*(_BYTE*)v70 & 1) == 0) {
  LABEL_102:
    *(_QWORD*)(v3 + 72200) = -1;
    *(_QWORD*)(v3 + 72208) = -1;
    return result;
  }
  if ((*(_BYTE*)(v3 + 225) & 1) != 0) {
    *(_QWORD*)(v70 + 3472) = v77;
    *(_QWORD*)(v70 + 3464) = v71;
  }
  else {
    *(_QWORD*)(v3 + 72200) = 0;
    *(_QWORD*)(v3 + 72208) = 0;
  }
  return result;
}

__int64 StreamSoundPlayer_Unknown7(__int64 result, char a2)
{
  _QWORD* v2;

  *(_BYTE*)(result + 64) = a2;
  v2 = (_QWORD*)(result + 72200);
  if ((a2 & 1) != 0 && (*(_BYTE*)(result + 68736) & 1) != 0) {
    if ((*(_BYTE*)(result + 225) & 1) == 0) {
      *v2 = 0;
      *(_QWORD*)(result + 72208) = 0;
    }
  }
  else {
    *v2 = -1;
    *(_QWORD*)(result + 72208) = -1;
  }
  return result;
}

__int64 StreamSoundPlayer_29b320(__int64 result, unsigned int a2, float a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  float* v6;
  bool v7;

  v3 = *(unsigned int*)(result + 1140);
  if ((int)v3 >= 1 && a2 != 0) {
    v5 = 1;
    v6 = (float*)(result + 68772);
    do {
      if ((a2 & 1) != 0) {
        *v6 = a3;
      }
      if (v5 >= v3) {
        break;
      }
      v6 += 32;
      ++v5;
      v7 = a2 > 1;
      a2 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 StreamSoundPlayer_29b380(__int64 result, unsigned int a2, char a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  _BYTE* v6;
  bool v7;

  v3 = *(unsigned int*)(result + 1140);
  if ((int)v3 >= 1 && a2 != 0) {
    v5 = 1;
    v6 = (_BYTE*)(result + 68761);
    do {
      if ((a2 & 1) != 0) {
        *v6 = a3;
      }
      if (v5 >= v3) {
        break;
      }
      v6 += 128;
      ++v5;
      v7 = a2 > 1;
      a2 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 StreamSoundPlayer_29b3e0(__int64 result, unsigned int a2, int a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  _DWORD* v6;
  bool v7;

  v3 = *(unsigned int*)(result + 1140);
  if ((int)v3 >= 1 && a2 != 0) {
    v5 = 1;
    v6 = (_DWORD*)(result + 68776);
    do {
      if ((a2 & 1) != 0) {
        *v6 = a3;
      }
      if (v5 >= v3) {
        break;
      }
      v6 += 32;
      ++v5;
      v7 = a2 > 1;
      a2 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 StreamSoundPlayer_29b440(__int64 result, unsigned int a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  _DWORD* v5;
  bool v6;

  v2 = *(unsigned int*)(result + 1140);
  if ((int)v2 >= 1 && a2 != 0) {
    v4 = 1;
    v5 = (_DWORD*)(result + 68776);
    do {
      if ((a2 & 1) != 0) {
        *v5 = -1;
      }
      if (v4 >= v2) {
        break;
      }
      v5 += 32;
      ++v4;
      v6 = a2 > 1;
      a2 >>= 1;
    } while (v6);
  }
  return result;
}

__int64 StreamSoundPlayer_29b4a0(__int64 result, unsigned int a2, float a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  float* v6;
  bool v7;

  v3 = *(unsigned int*)(result + 1140);
  if ((int)v3 >= 1 && a2 != 0) {
    v5 = 1;
    v6 = (float*)(result + 68780);
    do {
      if ((a2 & 1) != 0) {
        *v6 = a3;
      }
      if (v5 >= v3) {
        break;
      }
      v6 += 32;
      ++v5;
      v7 = a2 > 1;
      a2 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 StreamSoundPlayer_29b500(__int64 result, unsigned int a2,
                                 unsigned int a3, _DWORD* a4)
{
  unsigned __int64 v4;
  unsigned __int64 v6;
  _DWORD* v7;
  bool v8;

  v4 = *(unsigned int*)(result + 1140);
  if ((int)v4 >= 1 && a2 != 0) {
    v6 = 1;
    v7 = (_DWORD*)(result + 24LL * a3 + 68800);
    do {
      if ((a2 & 1) != 0) {
        *(v7 - 3) = *a4;
        *(v7 - 2) = a4[1];
        *(v7 - 1) = a4[2];
        *v7 = a4[3];
        v7[1] = a4[4];
        v7[2] = a4[5];
      }
      if (v6 >= v4) {
        break;
      }
      ++v6;
      v7 += 32;
      v8 = a2 > 1;
      a2 >>= 1;
    } while (v8);
  }
  return result;
}

__int64 StreamSoundPlayer_29b580(__int64 result, unsigned int a2, float a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  float* v6;
  bool v7;

  v3 = *(unsigned int*)(result + 1140);
  if ((int)v3 >= 1 && a2 != 0) {
    v5 = 1;
    v6 = (float*)(result + 68836);
    do {
      if ((a2 & 1) != 0) {
        *v6 = a3;
      }
      if (v5 >= v3) {
        break;
      }
      v6 += 32;
      ++v5;
      v7 = a2 > 1;
      a2 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 StreamSoundPlayer_29b5e0(__int64 result, unsigned int a2, float a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  float* v6;
  bool v7;

  v3 = *(unsigned int*)(result + 1140);
  if ((int)v3 >= 1 && a2 != 0) {
    v5 = 1;
    v6 = (float*)(result + 68840);
    do {
      if ((a2 & 1) != 0) {
        *v6 = a3;
      }
      if (v5 >= v3) {
        break;
      }
      v6 += 32;
      ++v5;
      v7 = a2 > 1;
      a2 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 StreamSoundPlayer_29b640(__int64 result, unsigned int a2, float a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  float* v6;
  bool v7;

  v3 = *(unsigned int*)(result + 1140);
  if ((int)v3 >= 1 && a2 != 0) {
    v5 = 1;
    v6 = (float*)(result + 68844);
    do {
      if ((a2 & 1) != 0) {
        *v6 = a3;
      }
      if (v5 >= v3) {
        break;
      }
      v6 += 32;
      ++v5;
      v7 = a2 > 1;
      a2 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 StreamSoundPlayer_29b6a0(__int64 result, unsigned int a2, int a3,
                                 float a4)
{
  int v4;
  __int64 v6;
  float* v7;
  bool v8;

  v4 = *(_DWORD*)(result + 1140);
  if (v4 >= 1 && a2 != 0) {
    v6 = 1;
    v7 = (float*)(result + 4LL * (a3 + 1) + 68844);
    do {
      if ((a2 & 1) != 0) {
        *v7 = a4;
        v4 = *(_DWORD*)(result + 1140);
      }
      if (v6 >= v4) {
        break;
      }
      v7 += 32;
      ++v6;
      v8 = a2 > 1;
      a2 >>= 1;
    } while (v8);
  }
  return result;
}

__int64 StreamSoundPlayer_Unknown9(__int64 result)
{
  if (*(_DWORD*)(result + 69760) == 0) {
    return GameRoutine_299e80();
  }
  return result;
}

#pragma GCC visibility pop
