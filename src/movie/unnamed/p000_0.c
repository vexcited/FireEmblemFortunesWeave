#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern unsigned __int8 MovieData_a2220[16];
extern unsigned __int8 MovieData_a2230[16];
extern unsigned __int8 MovieData_a2250[16];
extern _DWORD MovieData_a2290[30];
extern _UNKNOWN MovieData_a2308;
extern _DWORD MovieData_a5d60[3];
extern unsigned __int8 MovieData_a5d6c[24];
extern _UNKNOWN MovieData_a5d9a;
extern _UNKNOWN MovieData_a5e05;
extern _UNKNOWN MovieData_a5ea0;
extern _UNKNOWN MovieData_a605d;
extern _UNKNOWN MovieData_a606c;
extern _UNKNOWN MovieData_a607c;
extern _UNKNOWN MovieData_a60b6;
extern _UNKNOWN MovieData_a60de;
extern _UNKNOWN MovieData_a60fa;
extern _UNKNOWN MovieData_a6122;
extern _UNKNOWN MovieData_a614a;
extern _DWORD MovieData_a61e0[6];
extern __int16 MovieData_a61f8[12];
extern _DWORD MovieData_a6210[6];
extern _QWORD MovieData_a735c[4];
extern __int16 MovieData_a780e[27];
extern _UNKNOWN MovieData_a9460;
extern _QWORD MovieData_a9508[33];
extern int MovieData_b1990[1];
extern _UNKNOWN MovieData_b1994;
extern _UNKNOWN MovieData_b1998;
extern _UNKNOWN MovieData_b2990;
extern _UNKNOWN MovieData_b2998;
extern _UNKNOWN* MovieData_bf000;
extern _UNKNOWN* MovieData_c0358;
extern _UNKNOWN MovieData_c03d0;
extern __int64 MovieData_c08e0;
extern __int64 MovieData_c0950;
extern __int64 MovieData_c0958;
extern __int64 MovieData_c0960;
extern __int64 MovieData_c0968;
extern __int64 MovieData_c0970;
extern _UNKNOWN* MovieData_c09c8;
extern _UNKNOWN* MovieData_c09e0;
extern _UNKNOWN* MovieData_c0a00;
extern _UNKNOWN* MovieData_c0a08;
extern _UNKNOWN* MovieData_c0a10;
extern _UNKNOWN* MovieData_c0a18;
extern _UNKNOWN* MovieData_c0a20;
extern _UNKNOWN* MovieData_c0a28;
extern _UNKNOWN* MovieData_c0a30;
extern _UNKNOWN* MovieData_c0a38;
extern _UNKNOWN* MovieData_c0a40;
extern _UNKNOWN* MovieData_c0ab8;
extern _UNKNOWN* MovieData_c0ac0;
extern _UNKNOWN* MovieData_c0ac8;
extern _UNKNOWN* MovieData_c0ad0;
extern _UNKNOWN* MovieData_c0ad8;
extern _UNKNOWN* MovieData_c0ae0;
extern _UNKNOWN* MovieData_c0ae8;
extern _UNKNOWN* MovieData_c0b08;
extern _UNKNOWN* MovieData_c0b10;
extern _UNKNOWN* MovieData_c0b18;
extern __int64 (*MovieData_c0bc8[2])();
extern __int64 (*MovieData_c0bd0)();
extern __int64 MovieData_d0010;
void __attribute__((noreturn)) MovieRoutine_14f0(_QWORD);
__int64 MovieRoutine_1b520(_QWORD, _QWORD);
__int64 MovieRoutine_23220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_23500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_23ce0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_340(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_360c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_37780(_QWORD, _QWORD);
__int64 MovieRoutine_37840(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_37900(_QWORD, _QWORD);
__int64 MovieRoutine_37b60(_QWORD, _QWORD);
__int64 MovieRoutine_37f20(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_38200(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_38320(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_39880(_QWORD);
__int64 MovieRoutine_39a30(_QWORD);
__int64 MovieRoutine_39b40(_QWORD);
__int64 MovieRoutine_39bf0(_QWORD);
__int64 MovieRoutine_3b1c0(__int16*, __int64, __int64, int, unsigned int);
__int64 MovieRoutine_437c0(_QWORD);
__int64 MovieRoutine_4bb60(_QWORD);
__int64 MovieRoutine_4be00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_4e0c0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_4e4e0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_4ea80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_4eef0(__int64, _DWORD*);
__int64 MovieRoutine_4f690(_QWORD);
__int64 MovieRoutine_55ea0(_QWORD);
__int64 MovieRoutine_56bc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_56f70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_58260(_QWORD, _QWORD);
__int64 MovieRoutine_590a0(_QWORD, _QWORD);
__int64 MovieRoutine_5abc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_652a0(_QWORD, _QWORD);
__int64 MovieRoutine_66130(_QWORD, _QWORD);
__int64 MovieRoutine_66220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 MovieRoutine_66b80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _DWORD);
__int64 MovieRoutine_68be0();
__int64 MovieRoutine_68dc0(__int64 result, __int64, unsigned int, int, int,
                           unsigned int, int);
__int64 MovieRoutine_694e0(int*, __int64, int, _BYTE*, int, int, __int64,
                           unsigned int, unsigned int, unsigned int,
                           unsigned int, __int64, int);
__int64 MovieRoutine_75140(int*, int, int);
__int64 MovieRoutine_751a0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_75200(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_75620(int*, __int64, int, __int64,
                           void (*)(__int64, __int64, _QWORD, char*, __int64,
                                    _QWORD, __int64),
                           int, unsigned int, int, __int64);
__int64 MovieRoutine_75b60();
__int64 MovieRoutine_75d80();
__int64 MovieRoutine_77b80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 MovieRoutine_78460(
    int*, void (*)(__int16*, __int64, __int64, _QWORD, _QWORD, __int64, _QWORD),
    __int64, unsigned int, _BYTE*, int, int, __int64, int, __int64);
__int64 MovieRoutine_796e0();
__int64 MovieRoutine_79840();
_QWORD* MovieRoutine_79fe0(_QWORD* result, __int64);
__int64 MovieRoutine_7a0b0(int*, int);
__int64 MovieRoutine_7a2e0(__int64 result, int);
__int64 MovieRoutine_7a3c0(__int64, int);
_QWORD* MovieRoutine_7ac60(_QWORD* result);
__int64 MovieRoutine_7ad00(__int64, __int64);
__int64 MovieRoutine_7c120(__int64 result);
__int64 MovieRoutine_7c180(_QWORD*, __int64, __int64);
__int64 MovieRoutine_7c480(_QWORD, _QWORD);
__int64 MovieRoutine_7de20(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_7dee0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_7e1c0(__int64 result);
__int64 MovieRoutine_7e220(__int64, __int64, __int64);
__int64 MovieRoutine_7f480(__int64 result);
__int64 MovieRoutine_7fc30(_QWORD);
__int64 MovieRoutine_7fca0(_QWORD, _QWORD);
__int64 MovieRoutine_80960(_QWORD, _QWORD);
__int64 MovieRoutine_80de0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_813e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
void* MovieRoutine_81b40(__int64, int, unsigned int, int*, __int64, int, int,
                         int);
__int64 MovieRoutine_82440(_QWORD);
__int64 MovieRoutine_82460(_QWORD, _QWORD);
__int64 MovieRoutine_82870(_QWORD, _QWORD);
__int64 MovieRoutine_82920(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_82b40(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_82bd0(const char*, ...);
__int64 MovieRoutine_82ce0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_82f40(_QWORD);
__int64 MovieRoutine_82f50(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_82f60(_QWORD);
__int64 MovieRoutine_83320(_QWORD);
__int64 MovieRoutine_83390(_QWORD);
__int64 MovieRoutine_835d0(_QWORD);
__int64 MovieRoutine_835f0(_QWORD);
__int64 MovieRoutine_83650(_QWORD);
__int64 MovieRoutine_838c0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_838f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_83c40(_QWORD);
__int64 MovieRoutine_84280(_QWORD, _QWORD);
__int64 MovieRoutine_84300(_QWORD, _QWORD);
__int64 MovieRoutine_844a0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_844b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_844c0(void);
__int64 MovieRoutine_844d0(void);
__int64 MovieRoutine_84630(_QWORD);
__int64 MovieRoutine_84650(_QWORD);
__int64 MovieRoutine_84660(_QWORD);
__int64 MovieRoutine_84690(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_846a0(_QWORD);
__int64 MovieRoutine_846c0(_QWORD, double);
__int64 MovieRoutine_84760(_QWORD, _QWORD);
void __attribute__((noreturn)) MovieRoutine_9f60(_QWORD);
void __attribute__((noreturn)) MovieRoutine_f520(_QWORD);
__int64 MovieRoutine_f540(_QWORD, _QWORD, _QWORD);

void MovieHr_1b0() { __udf(0x8003u); }

__int64 MovieHr_200()
{
  return MovieRoutine_340(&MovieData_bf000, 0, MovieData_d0010);
}

void MovieHr_270() { __udf(0x8003u); }

__int64 MovieHr_2b0() { return 0xFFFFFFFFLL; }

void MovieHr_340() { ; }

void __attribute__((noreturn)) MovieHr_14d0() { MovieRoutine_14f0("vector"); }

void __attribute__((noreturn)) MovieHr_14f0(const char* a1)
{
  MovieRoutine_82bd0(
      "length_error was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
  __udf(0);
}

void __attribute__((noreturn)) MovieHr_1510()
{
  MovieRoutine_82bd0("bad_array_new_length was thrown in -fno-exceptions mode");
  __udf(0);
}

__int64 MovieHr_2990(__int64 a1)
{
  __int64 result;

  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0x200000004LL;
  *(_DWORD*)(a1 + 16) = 3;
  MovieRoutine_82ce0(a1 + 24, 0, 1028);
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_BYTE*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_BYTE*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1256) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1328) = 0;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1352) = 0;
  *(_QWORD*)(a1 + 1360) = 0;
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1376) = 0;
  MovieRoutine_82f40(a1 + 1384);
  *(_DWORD*)(a1 + 1528) = 0;
  *(_QWORD*)(a1 + 1536) = 0;
  *(_QWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1552) = 0;
  *(_QWORD*)(a1 + 1560) = 0;
  *(_QWORD*)(a1 + 1568) = 0;
  *(_QWORD*)(a1 + 1576) = 0;
  MovieRoutine_82f40(a1 + 1584);
  *(_DWORD*)(a1 + 1728) = 0;
  *(_QWORD*)(a1 + 1736) = 0;
  *(_QWORD*)(a1 + 1744) = 0;
  *(_QWORD*)(a1 + 1752) = 0;
  *(_QWORD*)(a1 + 1760) = 0;
  *(_QWORD*)(a1 + 1768) = 0;
  *(_QWORD*)(a1 + 1776) = 0;
  MovieRoutine_82f40(a1 + 1784);
  *(_DWORD*)(a1 + 1928) = 0;
  *(_QWORD*)(a1 + 1936) = 0;
  *(_QWORD*)(a1 + 1944) = 0;
  *(_QWORD*)(a1 + 1952) = 0;
  *(_QWORD*)(a1 + 1960) = 0;
  *(_QWORD*)(a1 + 1968) = 0;
  *(_QWORD*)(a1 + 1976) = 0;
  MovieRoutine_82f40(a1 + 1984);
  *(_DWORD*)(a1 + 2128) = 0;
  *(_QWORD*)(a1 + 2136) = 0;
  *(_QWORD*)(a1 + 2144) = 0;
  *(_QWORD*)(a1 + 2152) = 0;
  *(_QWORD*)(a1 + 2160) = 0;
  *(_QWORD*)(a1 + 2168) = 0;
  *(_QWORD*)(a1 + 2176) = 0;
  MovieRoutine_82f40(a1 + 2184);
  *(_DWORD*)(a1 + 2328) = 0;
  *(_QWORD*)(a1 + 2336) = 0;
  *(_QWORD*)(a1 + 2344) = 0;
  *(_QWORD*)(a1 + 2352) = 0;
  *(_QWORD*)(a1 + 2360) = 0;
  *(_QWORD*)(a1 + 2368) = 0;
  *(_QWORD*)(a1 + 2376) = 0;
  MovieRoutine_82f40(a1 + 2384);
  *(_DWORD*)(a1 + 2528) = 0;
  *(_QWORD*)(a1 + 2536) = 0;
  *(_QWORD*)(a1 + 2544) = 0;
  *(_QWORD*)(a1 + 2552) = 0;
  *(_QWORD*)(a1 + 2560) = 0;
  *(_QWORD*)(a1 + 2568) = 0;
  *(_QWORD*)(a1 + 2576) = 0;
  MovieRoutine_82f40(a1 + 2584);
  *(_DWORD*)(a1 + 2728) = 0;
  *(_QWORD*)(a1 + 2736) = 0;
  *(_QWORD*)(a1 + 2744) = 0;
  *(_QWORD*)(a1 + 2752) = 0;
  *(_QWORD*)(a1 + 2760) = 0;
  *(_QWORD*)(a1 + 2768) = 0;
  *(_QWORD*)(a1 + 2776) = 0;
  MovieRoutine_82f40(a1 + 2784);
  *(_DWORD*)(a1 + 2928) = 0;
  *(_QWORD*)(a1 + 2936) = 0;
  *(_QWORD*)(a1 + 3008) = 0;
  *(_QWORD*)(a1 + 3016) = 0;
  *(_QWORD*)(a1 + 3024) = 0;
  *(_QWORD*)(a1 + 3096) = 0;
  *(_QWORD*)(a1 + 3104) = 0;
  *(_QWORD*)(a1 + 3120) = a1 + 3120;
  *(_QWORD*)(a1 + 3128) = a1 + 3120;
  *(_QWORD*)(a1 + 3112) = 0;
  *(_QWORD*)(a1 + 3152) = 0;
  *(_QWORD*)(a1 + 3160) = 0;
  *(_QWORD*)(a1 + 3184) = 0;
  *(_QWORD*)(a1 + 3192) = 0;
  *(_QWORD*)(a1 + 3224) = 0;
  *(_QWORD*)(a1 + 3216) = 0;
  *(_QWORD*)(a1 + 3248) = 0;
  *(_QWORD*)(a1 + 3256) = 0;
  *(_QWORD*)(a1 + 3136) = a1 + 3136;
  *(_QWORD*)(a1 + 3144) = a1 + 3136;
  *(_QWORD*)(a1 + 3280) = 0;
  *(_QWORD*)(a1 + 3288) = 0;
  *(_QWORD*)(a1 + 3312) = 0;
  *(_QWORD*)(a1 + 3320) = 0;
  *(_QWORD*)(a1 + 3352) = 0;
  *(_QWORD*)(a1 + 3344) = 0;
  *(_QWORD*)(a1 + 3376) = 0;
  *(_QWORD*)(a1 + 3384) = 0;
  *(_QWORD*)(a1 + 3392) = 0;
  *(_QWORD*)(a1 + 3168) = a1 + 3168;
  *(_QWORD*)(a1 + 3176) = a1 + 3168;
  *(_QWORD*)(a1 + 3400) = 0;
  *(_QWORD*)(a1 + 3200) = a1 + 3200;
  *(_QWORD*)(a1 + 3208) = a1 + 3200;
  *(_QWORD*)(a1 + 3232) = a1 + 3232;
  *(_QWORD*)(a1 + 3240) = a1 + 3232;
  *(_QWORD*)(a1 + 3264) = a1 + 3264;
  *(_QWORD*)(a1 + 3272) = a1 + 3264;
  *(_QWORD*)(a1 + 3296) = a1 + 3296;
  *(_QWORD*)(a1 + 3304) = a1 + 3296;
  *(_QWORD*)(a1 + 3328) = a1 + 3328;
  *(_QWORD*)(a1 + 3336) = a1 + 3328;
  *(_QWORD*)(a1 + 3360) = a1 + 3360;
  *(_QWORD*)(a1 + 3368) = a1 + 3360;
  atomic_store(0xFFFFFFFFFFFFFF00LL, (unsigned __int64*)(a1 + 3400));
  *(_QWORD*)(a1 + 3392) = 1;
  MovieRoutine_82ce0(a1 + 3408, 0, 528);
  MovieRoutine_82f50(a1 + 3416, 1, 0);
  *(_WORD*)(a1 + 3448) = 0;
  *(_QWORD*)(a1 + 3456) = 0;
  *(_QWORD*)(a1 + 3464) = 0;
  *(_QWORD*)(a1 + 3472) = 0;
  *(_QWORD*)(a1 + 3480) = 0;
  *(_QWORD*)(a1 + 3488) = 0;
  *(_QWORD*)(a1 + 3496) = 0;
  *(_QWORD*)(a1 + 3504) = 0;
  *(_BYTE*)(a1 + 3512) = 0;
  *(_QWORD*)(a1 + 3536) = 0;
  *(_QWORD*)(a1 + 3516) = 0;
  *(_QWORD*)(a1 + 3524) = 0;
  *(_QWORD*)(a1 + 3544) = 0;
  *(_QWORD*)(a1 + 3552) = 0;
  *(_QWORD*)(a1 + 3560) = 0;
  *(_QWORD*)(a1 + 3568) = 0;
  *(_QWORD*)(a1 + 3576) = 0;
  *(_QWORD*)(a1 + 3584) = 0;
  *(_QWORD*)(a1 + 3592) = 0;
  *(_QWORD*)(a1 + 3600) = 0;
  *(_QWORD*)(a1 + 3608) = 0;
  *(_QWORD*)(a1 + 3616) = 0;
  *(_QWORD*)(a1 + 3624) = 0;
  *(_DWORD*)(a1 + 3632) = 0;
  *(_QWORD*)(a1 + 3696) = 0;
  *(_QWORD*)(a1 + 3688) = 0;
  *(_QWORD*)(a1 + 3680) = 0;
  *(_QWORD*)(a1 + 3672) = 0;
  *(_QWORD*)(a1 + 3664) = 0;
  *(_QWORD*)(a1 + 3656) = 0;
  *(_QWORD*)(a1 + 3648) = 0;
  *(_QWORD*)(a1 + 3640) = 0;
  result = MovieRoutine_82f60(a1 + 3704);
  *(_BYTE*)(a1 + 3928) = 0;
  *(_QWORD*)(a1 + 3920) = 0;
  *(_QWORD*)(a1 + 3912) = 0;
  *(_QWORD*)(a1 + 3904) = 0;
  *(_QWORD*)(a1 + 3896) = 0;
  *(_QWORD*)(a1 + 3888) = 0;
  *(_QWORD*)(a1 + 3880) = 0;
  *(_QWORD*)(a1 + 3872) = 0;
  *(_QWORD*)(a1 + 3864) = 0;
  *(_QWORD*)(a1 + 3856) = 0;
  *(_QWORD*)(a1 + 3848) = 0;
  *(_QWORD*)(a1 + 3840) = 0;
  *(_QWORD*)(a1 + 3832) = 0;
  *(_QWORD*)(a1 + 3824) = 0;
  *(_QWORD*)(a1 + 3816) = 0;
  *(_QWORD*)(a1 + 3808) = 0;
  *(_QWORD*)(a1 + 3800) = 0;
  *(_QWORD*)(a1 + 3792) = 0;
  *(_QWORD*)(a1 + 3784) = 0;
  *(_QWORD*)(a1 + 3776) = 0;
  *(_QWORD*)(a1 + 3768) = 0;
  *(_QWORD*)(a1 + 3760) = 0;
  *(_QWORD*)(a1 + 3752) = 0;
  *(_QWORD*)(a1 + 3744) = 0;
  *(_QWORD*)(a1 + 3736) = 0;
  *(_QWORD*)(a1 + 3728) = 0;
  *(_QWORD*)(a1 + 3720) = 0;
  *(_QWORD*)(a1 + 3712) = 0;
  *(_BYTE*)(a1 + 3936) = 0;
  *(_QWORD*)(a1 + 3960) = 0;
  *(_QWORD*)(a1 + 3968) = 0;
  *(_DWORD*)(a1 + 3976) = 0;
  *(_QWORD*)(a1 + 3940) = 0;
  *(_QWORD*)(a1 + 3948) = 0;
  return result;
}

void __attribute__((noreturn)) MovieHr_9f40() { MovieRoutine_9f60("vector"); }

void __attribute__((noreturn)) MovieHr_9f60(const char* a1)
{
  MovieRoutine_82bd0(
      "out_of_range was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
  __udf(0);
}

__int64 MovieHr_eeb0(unsigned __int8* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  __int64 v23;

  v2 = *a1;
  v3 = *((_QWORD*)a1 + 1);
  v6 = MovieRoutine_83c40(a2);
  v7 = *(_QWORD*)a1;
  if ((v2 & 1) != 0) {
    v8 = v3;
  }
  else {
    v8 = v2 >> 1;
  }
  v9 = v8 + v6;
  v10 = 22;
  v11 = (v7 & 0xFFFFFFFFFFFFFFFELL) - 1;
  if ((v2 & 1) != 0) {
    v10 = (v7 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  if (v10 >= v9) {
    goto LABEL_28;
  }
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    MovieRoutine_f520(v6);
  }
  v12 = 22;
  if ((v7 & 1) != 0) {
    v12 = (v7 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  if (v9 <= v12) {
    if ((v7 & 1) == 0) {
      v11 = 22;
    }
    if (v11 >= v9) {
      goto LABEL_28;
    }
  }
  else {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    if (v9 >= 0x17) {
      v14 = v13;
    }
    else {
      v14 = 23;
    }
    v15 = (*(__int64 (**)(_QWORD, __int64))(**((_QWORD**)a1 + 3) + 40LL))(
        *((_QWORD*)a1 + 3), v14);
    v16 = *a1;
    v17 = v15;
    v18 = v16 & 1;
    v19 = v16 >> 1;
    if (v18 != 0) {
      v20 = *((_QWORD*)a1 + 1);
    }
    else {
      v20 = v19;
    }
    v21 = v20 + 1;
    if (v20 != -1) {
      if (v18 != 0) {
        v22 = *((unsigned __int8**)a1 + 2);
      }
      else {
        v22 = a1 + 1;
      }
      MovieRoutine_82b40(v15, v22, v21);
      v18 = *a1 & 1;
    }
    if (v18 != 0) {
      (*(void (**)(_QWORD, _QWORD, unsigned __int64))(
          **((_QWORD**)a1 + 3) + 56LL))(*((_QWORD*)a1 + 3), *((_QWORD*)a1 + 2),
                                        v21);
    }
    *((_QWORD*)a1 + 2) = v17;
    *(_QWORD*)a1 = v14 | 1;
    *((_QWORD*)a1 + 1) = v20;
    if ((v14 & 0xFFFFFFFFFFFFFFFELL) - 1 >= v9) {
    LABEL_28:
      v23 = MovieRoutine_83c40(a2);
      MovieRoutine_f540(a1, a2, v23);
      return 0;
    }
  }
  return 17;
}

__int64 MovieHr_12280(_QWORD* a1)
{
  __int64 result;

  *a1 = MovieData_c08e0 + 16;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

__int64 MovieHr_122d0(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = MovieData_c08e0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return MovieRoutine_82870(a1, 24);
}

__int64 MovieHr_157c0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  _QWORD v26[2];
  _QWORD v27[4];
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v30 = 0;
  v31 = 0;
  v28 = nullptr;
  v29 = 0;
  memset(v27, 0, sizeof(v27));
  v26[0] = 0;
  v26[1] = 0;
  MovieRoutine_835f0(a2 + 24);
  v3 = *(unsigned int*)(a2 + 592);
  *(_BYTE*)(a2 + 160) = 1;
  if ((_DWORD)v3 != -1) {
    MovieRoutine_84300(v3, 1);
  }
  v4 = *(_QWORD*)(a2 + 600);
  if (v4 != 0) {
    if (atomic_fetch_add((atomic_uint* volatile)(v4 + 16), 0xFFFFFFFF) == 1) {
      atomic_store(0xDEAD00u, (unsigned int*)(v4 + 16));
      v5 = *(_QWORD*)(v4 + 8);
      if (v5 != 0) {
        (**(void (***)(_QWORD))v5)(*(_QWORD*)(v4 + 8));
      }
      (*(void (**)(__int64))(*(_QWORD*)v4 + 176LL))(v4);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 56LL))(v5, v4);
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
    *(_QWORD*)(a2 + 600) = 0;
  }
  if (v26 != (_QWORD*)(a2 + 608)) {
    v6 = v26[0];
    v7 = v28;
    if (v26[0] != 0) {
      if (v28 != nullptr) {
        v32 = v26[0];
        (*(void (**)(void*))(*v28 + 48LL))((void*)v28);
        v6 = v26[0];
      }
      if (*(_QWORD*)(v6 + 456) != 0) {
        (*(void (**)(_QWORD))(**(_QWORD**)(v6 + 472) + 56LL))(
            *(_QWORD*)(v6 + 472));
        *(_QWORD*)(v6 + 456) = 0;
      }
      v8 = *(_QWORD*)(v6 + 472);
      *(_DWORD*)(v6 + 464) = 0;
      if (v8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
        *(_QWORD*)(v6 + 472) = 0;
      }
      v9 = v30;
      *(_BYTE*)(v6 + 468) = 0;
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v9 + 56LL))(v9, v26[0]);
      v7 = v28;
      v26[0] = 0;
    }
    v28 = nullptr;
    if (v7 == v27) {
      v10 = 32;
    }
    else {
      if (v7 == nullptr) {
      LABEL_23:
        if (v30 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
          v30 = 0;
        }
        v11 = v26[0];
        v26[0] = *(_QWORD*)(a2 + 608);
        *(_QWORD*)(a2 + 608) = v11;
        MovieRoutine_1b520(v27, a2 + 624);
        if (v30 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
        }
        v12 = *(_QWORD*)(a2 + 672);
        *(_QWORD*)(a2 + 672) = 0;
        v30 = v12;
        goto LABEL_28;
      }
      v10 = 40;
    }
    (*(void (**)(void*))(*v7 + v10))(v7);
    goto LABEL_23;
  }
LABEL_28:
  MovieRoutine_83650(a2 + 24);
  v13 = v26[0];
  if (v26[0] == 0) {
    goto LABEL_56;
  }
  if (*(_BYTE*)(v26[0] + 481LL) == 1) {
    MovieRoutine_83320(v26[0] + 8LL);
    *(_BYTE*)(v13 + 481) = 0;
    if (*(_BYTE*)(v13 + 480) != 1) {
    LABEL_31:
      v14 = v26[0];
      if (v26[0] == 0) {
        goto LABEL_32;
      }
      goto LABEL_37;
    }
  }
  else if (*(_BYTE*)(v26[0] + 480LL) != 1) {
    goto LABEL_31;
  }
  MovieRoutine_83390(v13 + 8);
  *(_BYTE*)(v13 + 480) = 0;
  v14 = v26[0];
  if (v26[0] == 0) {
  LABEL_32:
    v15 = v28;
    v28 = nullptr;
    if (v15 != v27) {
      goto LABEL_33;
    }
  LABEL_44:
    v16 = 32;
    goto LABEL_45;
  }
LABEL_37:
  if (v28 != nullptr) {
    v32 = v14;
    (*(void (**)(_QWORD*, __int64*))(*v28 + 48LL))(v28, &v32);
    v14 = v26[0];
  }
  if (*(_QWORD*)(v14 + 456) != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v14 + 472) + 56LL))(
        *(_QWORD*)(v14 + 472));
    *(_QWORD*)(v14 + 456) = 0;
  }
  v17 = *(_QWORD*)(v14 + 472);
  *(_DWORD*)(v14 + 464) = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    *(_QWORD*)(v14 + 472) = 0;
  }
  v18 = v30;
  *(_BYTE*)(v14 + 468) = 0;
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v18 + 56LL))(v18, v26[0]);
  v26[0] = 0;
  v15 = v28;
  v28 = nullptr;
  if (v15 == v27) {
    goto LABEL_44;
  }
LABEL_33:
  if (v15 != nullptr) {
    v16 = 40;
  LABEL_45:
    (*(void (**)(void*))(*v15 + v16))(v15);
  }
  if (v30 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
    v30 = 0;
  }
  v19 = v26[0];
  if (v26[0] != 0) {
    if (v28 != nullptr) {
      v32 = v26[0];
      (*(void (**)(_QWORD*, __int64*))(*v28 + 48LL))(v28, &v32);
      v19 = v26[0];
    }
    if (*(_QWORD*)(v19 + 456) != 0) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v19 + 472) + 56LL))(
          *(_QWORD*)(v19 + 472));
      *(_QWORD*)(v19 + 456) = 0;
    }
    v20 = *(_QWORD*)(v19 + 472);
    *(_DWORD*)(v19 + 464) = 0;
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      *(_QWORD*)(v19 + 472) = 0;
    }
    v21 = v30;
    *(_BYTE*)(v19 + 468) = 0;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v21 + 56LL))(v21, v26[0]);
    v26[0] = 0;
  }
LABEL_56:
  v22 = v28;
  v28 = nullptr;
  if (v22 == v27) {
    v23 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_61;
    }
    v23 = 40;
  }
  (*(void (**)(void*))(*v22 + v23))(v22);
LABEL_61:
  if (v30 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
    v30 = 0;
  }
  result = (__int64)v28;
  if (v28 == v27) {
    v25 = 32;
  }
  else {
    if (v28 == nullptr) {
      return result;
    }
    v25 = 40;
  }
  return (*(__int64 (**)(void*))(*v28 + v25))(v28);
}

__int64 MovieHr_17cd0(__int64 a1, __int64 a2, int a3, __int64* a4, __int64* a5,
                      __int64* a6, __int64* a7)
{
  unsigned int v13;
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
  __int64* v27;
  __int64* v28;
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
  _QWORD* v41;
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
  _QWORD* v55;
  __int64 v56;
  __int64 v57;

  if (a3 < 0) {
    return 20;
  }
  if (*(_DWORD*)(a2 + 56) != 4) {
    return 20;
  }
  MovieRoutine_835f0(a2 + 24);
  if ((*(_BYTE*)(a2 + 160) & 1) == 0) {
    *(_DWORD*)(a2 + 164) = a3;
    if (a4 != nullptr) {
      v15 = *a4;
      v16 = a4[1];
      v17 = a4[3];
      *(_QWORD*)(a2 + 184) = a4[2];
      *(_QWORD*)(a2 + 192) = v17;
      *(_QWORD*)(a2 + 168) = v15;
      *(_QWORD*)(a2 + 176) = v16;
      v18 = a4[4];
      v19 = a4[5];
      v20 = a4[7];
      *(_QWORD*)(a2 + 216) = a4[6];
      *(_QWORD*)(a2 + 224) = v20;
      *(_QWORD*)(a2 + 200) = v18;
      *(_QWORD*)(a2 + 208) = v19;
      v21 = a4[8];
      v22 = a4[9];
      v23 = a4[11];
      *(_QWORD*)(a2 + 248) = a4[10];
      *(_QWORD*)(a2 + 256) = v23;
      *(_QWORD*)(a2 + 232) = v21;
      *(_QWORD*)(a2 + 240) = v22;
      v24 = a4[12];
      v25 = a4[13];
      v26 = a4[15];
      *(_QWORD*)(a2 + 280) = a4[14];
      *(_QWORD*)(a2 + 288) = v26;
      *(_QWORD*)(a2 + 264) = v24;
      *(_QWORD*)(a2 + 272) = v25;
      v27 = a7;
      v28 = a6;
      if (a5 != nullptr) {
        goto LABEL_9;
      }
    }
    else {
      *(_QWORD*)(a2 + 280) = 0;
      *(_QWORD*)(a2 + 288) = 0;
      *(_QWORD*)(a2 + 264) = 0;
      *(_QWORD*)(a2 + 272) = 0;
      *(_QWORD*)(a2 + 248) = 0;
      *(_QWORD*)(a2 + 256) = 0;
      *(_QWORD*)(a2 + 232) = 0;
      *(_QWORD*)(a2 + 240) = 0;
      *(_QWORD*)(a2 + 216) = 0;
      *(_QWORD*)(a2 + 224) = 0;
      *(_QWORD*)(a2 + 200) = 0;
      *(_QWORD*)(a2 + 208) = 0;
      *(_QWORD*)(a2 + 184) = 0;
      *(_QWORD*)(a2 + 192) = 0;
      *(_QWORD*)(a2 + 168) = 0;
      *(_QWORD*)(a2 + 176) = 0;
      v27 = a7;
      v28 = a6;
      if (a5 != nullptr) {
      LABEL_9:
        v29 = *a5;
        v30 = a5[1];
        v31 = a5[3];
        *(_QWORD*)(a2 + 320) = a5[2];
        *(_QWORD*)(a2 + 328) = v31;
        *(_QWORD*)(a2 + 304) = v29;
        *(_QWORD*)(a2 + 312) = v30;
        v32 = a5[4];
        v33 = a5[5];
        v34 = a5[7];
        *(_QWORD*)(a2 + 352) = a5[6];
        *(_QWORD*)(a2 + 360) = v34;
        *(_QWORD*)(a2 + 336) = v32;
        *(_QWORD*)(a2 + 344) = v33;
        v35 = a5[8];
        v36 = a5[9];
        v37 = a5[11];
        *(_QWORD*)(a2 + 384) = a5[10];
        *(_QWORD*)(a2 + 392) = v37;
        *(_QWORD*)(a2 + 368) = v35;
        *(_QWORD*)(a2 + 376) = v36;
        v38 = a5[12];
        v39 = a5[13];
        v40 = a5[15];
        *(_QWORD*)(a2 + 416) = a5[14];
        *(_QWORD*)(a2 + 424) = v40;
        *(_QWORD*)(a2 + 400) = v38;
        *(_QWORD*)(a2 + 408) = v39;
        v41 = (_QWORD*)(a2 + 440);
        if (v28 != nullptr) {
          goto LABEL_10;
        }
        goto LABEL_14;
      }
    }
    *(_QWORD*)(a2 + 416) = 0;
    *(_QWORD*)(a2 + 424) = 0;
    *(_QWORD*)(a2 + 400) = 0;
    *(_QWORD*)(a2 + 408) = 0;
    *(_QWORD*)(a2 + 384) = 0;
    *(_QWORD*)(a2 + 392) = 0;
    *(_QWORD*)(a2 + 368) = 0;
    *(_QWORD*)(a2 + 376) = 0;
    *(_QWORD*)(a2 + 352) = 0;
    *(_QWORD*)(a2 + 360) = 0;
    *(_QWORD*)(a2 + 336) = 0;
    *(_QWORD*)(a2 + 344) = 0;
    *(_QWORD*)(a2 + 320) = 0;
    *(_QWORD*)(a2 + 328) = 0;
    *(_QWORD*)(a2 + 304) = 0;
    *(_QWORD*)(a2 + 312) = 0;
    v41 = (_QWORD*)(a2 + 440);
    if (v28 != nullptr) {
    LABEL_10:
      v42 = *v28;
      v43 = v28[1];
      v44 = v28[3];
      v41[2] = v28[2];
      v41[3] = v44;
      *v41 = v42;
      v41[1] = v43;
      v45 = v28[4];
      v46 = v28[5];
      v47 = v28[7];
      v41[6] = v28[6];
      v41[7] = v47;
      v41[4] = v45;
      v41[5] = v46;
      v48 = v28[8];
      v49 = v28[9];
      v50 = v28[11];
      v41[10] = v28[10];
      v41[11] = v50;
      v41[8] = v48;
      v41[9] = v49;
      v51 = v28[12];
      v52 = v28[13];
      v54 = v28[14];
      v53 = v28[15];
      v41[14] = v54;
      v41[15] = v53;
      v41[12] = v51;
      v41[13] = v52;
      v55 = (_QWORD*)(a2 + 576);
      if (v27 != nullptr) {
      LABEL_11:
        *(_BYTE*)(a2 + 568) = 1;
        v57 = *v27;
        v56 = v27[1];
        *v55 = v57;
        v55[1] = v56;
      LABEL_16:
        MovieRoutine_84300(*(unsigned int*)(a2 + 592), 1);
        v13 = 0;
        goto LABEL_17;
      }
    LABEL_15:
      *(_BYTE*)(a2 + 568) = 0;
      *v55 = 0;
      v55[1] = 0;
      goto LABEL_16;
    }
  LABEL_14:
    v41[14] = 0;
    v41[15] = 0;
    v41[12] = 0;
    v41[13] = 0;
    v41[10] = 0;
    v41[11] = 0;
    v41[8] = 0;
    v41[9] = 0;
    v41[6] = 0;
    v41[7] = 0;
    v41[4] = 0;
    v41[5] = 0;
    v41[2] = 0;
    v41[3] = 0;
    *v41 = 0;
    v41[1] = 0;
    v55 = (_QWORD*)(a2 + 576);
    if (v27 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_15;
  }
  v13 = 7;
LABEL_17:
  MovieRoutine_83650(a2 + 24);
  return v13;
}

__int64 MovieHr_17f00(__int64 a1, _BYTE* a2, _QWORD* a3, _QWORD* a4, _QWORD* a5,
                      __int64 a6)
{
  __int64 v6;
  __int64 v7;
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

  *a2 = 0;
  if (a3 != nullptr) {
    a3[14] = 0;
    a3[15] = 0;
    a3[12] = 0;
    a3[13] = 0;
    a3[10] = 0;
    a3[11] = 0;
    a3[8] = 0;
    a3[9] = 0;
    a3[6] = 0;
    a3[7] = 0;
    a3[4] = 0;
    a3[5] = 0;
    a3[2] = 0;
    a3[3] = 0;
    *a3 = 0;
    a3[1] = 0;
  }
  if (a4 != nullptr) {
    a4[14] = 0;
    a4[15] = 0;
    a4[12] = 0;
    a4[13] = 0;
    a4[10] = 0;
    a4[11] = 0;
    a4[8] = 0;
    a4[9] = 0;
    a4[6] = 0;
    a4[7] = 0;
    a4[4] = 0;
    a4[5] = 0;
    a4[2] = 0;
    a4[3] = 0;
    *a4 = 0;
    a4[1] = 0;
  }
  if (a5 != nullptr) {
    a5[14] = 0;
    a5[15] = 0;
    a5[12] = 0;
    a5[13] = 0;
    a5[10] = 0;
    a5[11] = 0;
    a5[8] = 0;
    a5[9] = 0;
    a5[6] = 0;
    a5[7] = 0;
    a5[4] = 0;
    a5[5] = 0;
    a5[2] = 0;
    a5[3] = 0;
    *a5 = 0;
    a5[1] = 0;
  }
  *a2 = *(_BYTE*)(a6 + 32);
  if (a3 != nullptr) {
    v6 = *(_QWORD*)(a6 + 40);
    v7 = *(_QWORD*)(a6 + 48);
    v8 = *(_QWORD*)(a6 + 64);
    a3[2] = *(_QWORD*)(a6 + 56);
    a3[3] = v8;
    *a3 = v6;
    a3[1] = v7;
    v9 = *(_QWORD*)(a6 + 72);
    v10 = *(_QWORD*)(a6 + 80);
    v11 = *(_QWORD*)(a6 + 96);
    a3[6] = *(_QWORD*)(a6 + 88);
    a3[7] = v11;
    a3[4] = v9;
    a3[5] = v10;
    v12 = *(_QWORD*)(a6 + 104);
    v13 = *(_QWORD*)(a6 + 112);
    v14 = *(_QWORD*)(a6 + 128);
    a3[10] = *(_QWORD*)(a6 + 120);
    a3[11] = v14;
    a3[8] = v12;
    a3[9] = v13;
    v15 = *(_QWORD*)(a6 + 136);
    v16 = *(_QWORD*)(a6 + 144);
    v17 = *(_QWORD*)(a6 + 160);
    a3[14] = *(_QWORD*)(a6 + 152);
    a3[15] = v17;
    a3[12] = v15;
    a3[13] = v16;
  }
  if (a4 != nullptr) {
    v18 = *(_QWORD*)(a6 + 168);
    v19 = *(_QWORD*)(a6 + 176);
    v20 = *(_QWORD*)(a6 + 192);
    a4[2] = *(_QWORD*)(a6 + 184);
    a4[3] = v20;
    *a4 = v18;
    a4[1] = v19;
    v21 = *(_QWORD*)(a6 + 200);
    v22 = *(_QWORD*)(a6 + 208);
    v23 = *(_QWORD*)(a6 + 224);
    a4[6] = *(_QWORD*)(a6 + 216);
    a4[7] = v23;
    a4[4] = v21;
    a4[5] = v22;
    v24 = *(_QWORD*)(a6 + 232);
    v25 = *(_QWORD*)(a6 + 240);
    v26 = *(_QWORD*)(a6 + 256);
    a4[10] = *(_QWORD*)(a6 + 248);
    a4[11] = v26;
    a4[8] = v24;
    a4[9] = v25;
    v27 = *(_QWORD*)(a6 + 264);
    v28 = *(_QWORD*)(a6 + 272);
    v29 = *(_QWORD*)(a6 + 288);
    a4[14] = *(_QWORD*)(a6 + 280);
    a4[15] = v29;
    a4[12] = v27;
    a4[13] = v28;
  }
  if (a5 != nullptr) {
    v30 = *(_QWORD*)(a6 + 296);
    v31 = *(_QWORD*)(a6 + 304);
    v32 = *(_QWORD*)(a6 + 320);
    a5[2] = *(_QWORD*)(a6 + 312);
    a5[3] = v32;
    *a5 = v30;
    a5[1] = v31;
    v33 = *(_QWORD*)(a6 + 328);
    v34 = *(_QWORD*)(a6 + 336);
    v35 = *(_QWORD*)(a6 + 352);
    a5[6] = *(_QWORD*)(a6 + 344);
    a5[7] = v35;
    a5[4] = v33;
    a5[5] = v34;
    v36 = *(_QWORD*)(a6 + 360);
    v37 = *(_QWORD*)(a6 + 368);
    v38 = *(_QWORD*)(a6 + 384);
    a5[10] = *(_QWORD*)(a6 + 376);
    a5[11] = v38;
    a5[8] = v36;
    a5[9] = v37;
    v39 = *(_QWORD*)(a6 + 392);
    v40 = *(_QWORD*)(a6 + 400);
    v41 = *(_QWORD*)(a6 + 416);
    a5[14] = *(_QWORD*)(a6 + 408);
    a5[15] = v41;
    a5[12] = v39;
    a5[13] = v40;
  }
  return 0;
}

__int64 MovieHr_180c0(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  MovieRoutine_835f0(a1 + 24);
  v4 = *(_QWORD**)(a1 + 560);
  if (v4 != (_QWORD*)(a1 + 552)) {
    while (v4[2] != a2) {
      v4 = (_QWORD*)v4[1];
      if (v4 == (_QWORD*)(a1 + 552)) {
        goto LABEL_12;
      }
    }
    v5 = (_QWORD*)v4[1];
    *(_QWORD*)(*v4 + 8LL) = v5;
    *v5 = *v4;
    --*(_QWORD*)(a1 + 568);
    v6 = v4[2];
    if (v6 != 0) {
      if (atomic_fetch_add((atomic_uint* volatile)(v6 + 16), 0xFFFFFFFF) == 1) {
        v7 = v4;
        atomic_store(0xDEAD00u, (unsigned int*)(v6 + 16));
        v8 = *(_QWORD*)(v6 + 8);
        if (v8 != 0) {
          (**(void (***)(_QWORD))v8)(*(_QWORD*)(v6 + 8));
        }
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 56LL))(v8, v6);
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
        v4 = v7;
      }
      v4[2] = 0;
    }
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 576) + 56LL))(*(_QWORD*)(a1 + 576));
  }
LABEL_12:
  v9 = MovieRoutine_83650(a1 + 24);
  return MovieRoutine_84280(v9, a2);
}

__int64 MovieHr_185a0(_QWORD* a1, int a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  _QWORD* v11;
  int v12;
  char* v13;
  int v14;
  __int64* v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  _QWORD v22[2];

  MovieRoutine_835f0(a1 + 3);
  if (a1[75] == 0) {
  LABEL_29:
    LODWORD(v2) = 0;
    goto LABEL_30;
  }
  v5 = a1[1];
  v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 40LL))(v5, 32);
  if (v6 != 0) {
    *(_QWORD*)v6 = MovieData_c08e0 + 16;
    *(_QWORD*)(v6 + 8) = v5;
    (**(void (***)(__int64))v5)(v5);
    *(_QWORD*)(v6 + 16) = 0;
    v7 = MovieData_c0950;
    *(_DWORD*)(v6 + 24) = a2;
    *(_QWORD*)v6 = v7 + 16;
    atomic_fetch_add((atomic_uint* volatile)(v6 + 16), 1u);
  }
  v8 = *((unsigned int*)a1 + 150);
  v9 = 8 * v8;
  v10 = (char*)v22 - ((8 * v8 + 15) & 0xFFFFFFFF0LL);
  MovieRoutine_82ce0(v10, 0, 8 * v8);
  if (v6 == 0) {
    v18 = 0;
    LODWORD(v2) = 17;
    if (v8 == 0) {
      goto LABEL_26;
    }
    goto LABEL_22;
  }
  v11 = (_QWORD*)a1[74];
  v22[1] = v22;
  if (v11 == a1 + 73) {
  LABEL_15:
    MovieRoutine_83650(a1 + 3);
    if (v8 != 0) {
      v2 = v8;
      v16 = (_QWORD*)((char*)v22 - ((8 * v8 + 15) & 0xFFFFFFFF0LL));
      do {
        v17 = *v16++;
        (*(void (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
        --v2;
      } while (v2 != 0);
    }
    MovieRoutine_835f0(a1 + 3);
    v18 = 1;
  }
  else {
    v12 = 0;
    while (1) {
      v13 = &v10[8 * v12];
      v2 = v11[2];
      if (*(_QWORD*)v13 != 0) {
        (*(void (**)(_QWORD))(**(_QWORD**)v13 + 8LL))(*(_QWORD*)v13);
        *(_QWORD*)v13 = 0;
      }
      v14 = (*(__int64 (**)(__int64, char*, _QWORD))(*(_QWORD*)v2 + 64LL))(
          v2, &v10[8 * v12], a1[1]);
      if (v14 != 5 && v14 != 0) {
        break;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)v13 + 32LL))(*(_QWORD*)v13,
                                                              v6);
      v11 = (_QWORD*)v11[1];
      ++v12;
      if (v11 == a1 + 73) {
        goto LABEL_15;
      }
    }
    LODWORD(v2) = v14;
    v18 = 0;
  }
  if (v8 != 0) {
  LABEL_22:
    v19 = v10 - 8;
    do {
      v20 = *(_QWORD*)&v19[v9];
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
        *(_QWORD*)&v19[v9] = 0;
      }
      v9 -= 8;
    } while (v9 != 0);
  }
LABEL_26:
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  if (v18 != 0) {
    goto LABEL_29;
  }
LABEL_30:
  MovieRoutine_83650(a1 + 3);
  return (unsigned int)v2;
}

__int64 MovieHr_18c20(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
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
  int v23;
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
  int v36;
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
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  unsigned int v56;
  __int64 v57;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 40LL))(v2, 448);
  if (v4 == 0) {
    return 17;
  }
  v5 = v4;
  MovieRoutine_844a0(v4, v2, a2);
  atomic_fetch_add((atomic_uint* volatile)(v5 + 16), 1u);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 80) + 32LL))(
      *(_QWORD*)(a2 + 80), v5);
  v6 = (_QWORD*)(v5 + 40);
  while (1) {
    MovieRoutine_835f0(a2 + 24);
    if (*(_BYTE*)(a2 + 160) == 1) {
      break;
    }
    v7 = *(_QWORD*)(a2 + 168);
    v8 = *(_QWORD*)(a2 + 176);
    v9 = *(_QWORD*)(a2 + 192);
    v10 = *(_DWORD*)(a2 + 164);
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a2 + 184);
    *(_QWORD*)(v5 + 64) = v9;
    *v6 = v7;
    *(_QWORD*)(v5 + 48) = v8;
    v11 = *(_QWORD*)(a2 + 200);
    v12 = *(_QWORD*)(a2 + 208);
    v13 = *(_QWORD*)(a2 + 224);
    *(_QWORD*)(v5 + 88) = *(_QWORD*)(a2 + 216);
    *(_QWORD*)(v5 + 96) = v13;
    *(_QWORD*)(v5 + 72) = v11;
    *(_QWORD*)(v5 + 80) = v12;
    v14 = *(_QWORD*)(a2 + 232);
    v15 = *(_QWORD*)(a2 + 240);
    v16 = *(_QWORD*)(a2 + 256);
    *(_QWORD*)(v5 + 120) = *(_QWORD*)(a2 + 248);
    *(_QWORD*)(v5 + 128) = v16;
    *(_QWORD*)(v5 + 104) = v14;
    *(_QWORD*)(v5 + 112) = v15;
    v17 = *(_QWORD*)(a2 + 264);
    v18 = *(_QWORD*)(a2 + 272);
    v19 = *(_QWORD*)(a2 + 288);
    *(_QWORD*)(v5 + 152) = *(_QWORD*)(a2 + 280);
    *(_QWORD*)(v5 + 160) = v19;
    *(_QWORD*)(v5 + 136) = v17;
    *(_QWORD*)(v5 + 144) = v18;
    v20 = *(_QWORD*)(a2 + 304);
    v21 = *(_QWORD*)(a2 + 312);
    v22 = *(_QWORD*)(a2 + 328);
    v23 = *(unsigned __int8*)(a2 + 296);
    *(_QWORD*)(v5 + 184) = *(_QWORD*)(a2 + 320);
    *(_QWORD*)(v5 + 192) = v22;
    *(_QWORD*)(v5 + 168) = v20;
    *(_QWORD*)(v5 + 176) = v21;
    v24 = *(_QWORD*)(a2 + 336);
    v25 = *(_QWORD*)(a2 + 344);
    v26 = *(_QWORD*)(a2 + 360);
    *(_QWORD*)(v5 + 216) = *(_QWORD*)(a2 + 352);
    *(_QWORD*)(v5 + 224) = v26;
    *(_QWORD*)(v5 + 200) = v24;
    *(_QWORD*)(v5 + 208) = v25;
    v27 = *(_QWORD*)(a2 + 368);
    v28 = *(_QWORD*)(a2 + 376);
    v29 = *(_QWORD*)(a2 + 392);
    *(_QWORD*)(v5 + 248) = *(_QWORD*)(a2 + 384);
    *(_QWORD*)(v5 + 256) = v29;
    *(_QWORD*)(v5 + 232) = v27;
    *(_QWORD*)(v5 + 240) = v28;
    v30 = *(_QWORD*)(a2 + 400);
    v31 = *(_QWORD*)(a2 + 408);
    v32 = *(_QWORD*)(a2 + 424);
    *(_QWORD*)(v5 + 280) = *(_QWORD*)(a2 + 416);
    *(_QWORD*)(v5 + 288) = v32;
    *(_QWORD*)(v5 + 264) = v30;
    *(_QWORD*)(v5 + 272) = v31;
    v33 = *(_QWORD*)(a2 + 440);
    v34 = *(_QWORD*)(a2 + 448);
    v35 = *(_QWORD*)(a2 + 464);
    v36 = *(unsigned __int8*)(a2 + 432);
    *(_QWORD*)(v5 + 312) = *(_QWORD*)(a2 + 456);
    *(_QWORD*)(v5 + 320) = v35;
    *(_QWORD*)(v5 + 296) = v33;
    *(_QWORD*)(v5 + 304) = v34;
    v37 = *(_QWORD*)(a2 + 472);
    v38 = *(_QWORD*)(a2 + 480);
    v39 = *(_QWORD*)(a2 + 496);
    *(_QWORD*)(v5 + 344) = *(_QWORD*)(a2 + 488);
    *(_QWORD*)(v5 + 352) = v39;
    *(_QWORD*)(v5 + 328) = v37;
    *(_QWORD*)(v5 + 336) = v38;
    v40 = *(_QWORD*)(a2 + 504);
    v41 = *(_QWORD*)(a2 + 512);
    v42 = *(_QWORD*)(a2 + 528);
    *(_QWORD*)(v5 + 376) = *(_QWORD*)(a2 + 520);
    *(_QWORD*)(v5 + 384) = v42;
    *(_QWORD*)(v5 + 360) = v40;
    *(_QWORD*)(v5 + 368) = v41;
    v43 = *(_QWORD*)(a2 + 536);
    v44 = *(_QWORD*)(a2 + 544);
    v45 = *(_QWORD*)(a2 + 560);
    *(_QWORD*)(v5 + 408) = *(_QWORD*)(a2 + 552);
    *(_QWORD*)(v5 + 416) = v45;
    *(_QWORD*)(v5 + 392) = v43;
    *(_QWORD*)(v5 + 400) = v44;
    *(_BYTE*)(v5 + 424) = *(_BYTE*)(a2 + 568);
    v46 = *(_QWORD*)(a2 + 576);
    v47 = *(_QWORD*)(a2 + 584);
    *(_BYTE*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 432) = v46;
    *(_QWORD*)(v5 + 440) = v47;
    MovieRoutine_83650(a2 + 24);
    v48 = *(int*)(a2 + 592);
    if (v10 <= (int)v48 + 1) {
      v49 = (unsigned int)(v48 + 1);
    }
    else {
      v49 = (unsigned int)v10;
    }
    v50 = 1LL << v48;
    v51 = (v48 >> 3) & 0x1FFFFFFFFFFFFFF8LL;
    if (v23 != 0) {
      v52 = v5 + 168;
    }
    else {
      v52 = 0;
    }
    if (v36 != 0) {
      v53 = v5 + 296;
    }
    else {
      v53 = 0;
    }
    *(_QWORD*)((char*)v6 + v51) |= v50;
    if (*(_BYTE*)(v5 + 424) != 0) {
      v54 = v5 + 432;
    }
    else {
      v54 = 0;
    }
    v55 = MovieRoutine_844b0(v49, v5 + 40, v52, v53, v54);
    if (v55 == 0) {
      *(_BYTE*)(v5 + 32) = 1;
      goto LABEL_23;
    }
    if (v55 == -1) {
      if ((unsigned int)MovieRoutine_844c0() != 11) {
        v56 = 1;
        goto LABEL_31;
      }
    }
    else {
    LABEL_23:
      if (((v6[(unsigned __int64)*(int*)(a2 + 592) >> 6] >>
            *(_DWORD*)(a2 + 592)) &
           1) != 0) {
        MovieRoutine_844d0();
        if (v55 != 1 && *(_BYTE*)(a2 + 160) == 0) {
          *(_QWORD*)((char*)v6 + (((unsigned __int64)*(int*)(a2 + 592) >> 3) &
                                  0x1FFFFFFFFFFFFFF8LL)) &=
              ~(1LL << *(_DWORD*)(a2 + 592));
          goto LABEL_4;
        }
        if ((*(_BYTE*)(a2 + 160) & 1) != 0) {
          goto LABEL_29;
        }
      }
      else {
      LABEL_4:
        (*(void (**)(_QWORD))(**(_QWORD**)(a2 + 80) + 56LL))(
            *(_QWORD*)(a2 + 80));
      }
    }
  }
  MovieRoutine_83650(a2 + 24);
LABEL_29:
  v56 = 0;
LABEL_31:
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a2 + 80) + 32LL))(
      *(_QWORD*)(a2 + 80), 0);
  if (atomic_fetch_add((atomic_uint* volatile)(v5 + 16), 0xFFFFFFFF) == 1) {
    atomic_store(0xDEAD00u, (unsigned int*)(v5 + 16));
    v57 = *(_QWORD*)(v5 + 8);
    if (v57 != 0) {
      (**(void (***)(_QWORD))v57)(*(_QWORD*)(v5 + 8));
    }
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v57 + 56LL))(v57, v5);
    (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
  }
  return v56;
}

__int64 MovieHr_195e0(__int64 a1, void (***a2)(_QWORD), __int64 a3, _QWORD* a4)
{
  __int64 v7;
  __int64 result;
  __int64 v9;

  *(_QWORD*)a1 = MovieData_c08e0 + 16;
  *(_QWORD*)(a1 + 8) = a2;
  if (a2 != nullptr) {
    (**a2)(a2);
  }
  *(_DWORD*)(a1 + 16) = 0;
  v7 = MovieData_c0958;
  *(_QWORD*)(a1 + 24) = a3;
  *(_BYTE*)(a1 + 32) = 0;
  *(_QWORD*)a1 = v7 + 16;
  result = MovieRoutine_82ce0(a1 + 40, 0, 384);
  v9 = a4[1];
  *(_QWORD*)(a1 + 432) = *a4;
  *(_QWORD*)(a1 + 440) = v9;
  return result;
}

__int64 MovieHr_199d0(__int64 a1, void (***a2)(_QWORD), int a3, __int64* a4,
                      __int64* a5, __int64* a6, _QWORD* a7, __int64 a8,
                      void (***a9)(_QWORD))
{
  __int64 v16;
  __int64 result;
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
  _QWORD* v42;
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

  *(_QWORD*)a1 = MovieData_c0960 + 16;
  *(_QWORD*)(a1 + 8) = a2;
  if (a2 != nullptr) {
    (**a2)(a2);
  }
  *(_DWORD*)(a1 + 16) = 0;
  v16 = MovieData_c0968;
  *(_WORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 28) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v16 + 16;
  MovieRoutine_82f50(a1 + 24, 0, 0);
  *(_QWORD*)(a1 + 64) = a8;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = a9;
  *(_DWORD*)(a1 + 56) = 4;
  if (a9 != nullptr) {
    (**a9)(a9);
  }
  *(_WORD*)(a1 + 152) = 0;
  result = MovieRoutine_82ce0(a1 + 160, 0, 528);
  *(_DWORD*)(a1 + 164) = a3;
  *(_BYTE*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_BYTE*)(a1 + 568) = a7 != nullptr;
  *(_DWORD*)(a1 + 592) = -1;
  if (a4 != nullptr) {
    v18 = *a4;
    v19 = a4[1];
    v20 = a4[3];
    *(_QWORD*)(a1 + 184) = a4[2];
    *(_QWORD*)(a1 + 192) = v20;
    *(_QWORD*)(a1 + 168) = v18;
    *(_QWORD*)(a1 + 176) = v19;
    v21 = a4[4];
    v22 = a4[5];
    v23 = a4[7];
    *(_QWORD*)(a1 + 216) = a4[6];
    *(_QWORD*)(a1 + 224) = v23;
    *(_QWORD*)(a1 + 200) = v21;
    *(_QWORD*)(a1 + 208) = v22;
    v24 = a4[8];
    v25 = a4[9];
    v26 = a4[11];
    *(_QWORD*)(a1 + 248) = a4[10];
    *(_QWORD*)(a1 + 256) = v26;
    *(_QWORD*)(a1 + 232) = v24;
    *(_QWORD*)(a1 + 240) = v25;
    v27 = a4[12];
    v28 = a4[13];
    v29 = a4[15];
    *(_QWORD*)(a1 + 280) = a4[14];
    *(_QWORD*)(a1 + 288) = v29;
    *(_QWORD*)(a1 + 264) = v27;
    *(_QWORD*)(a1 + 272) = v28;
    if (a5 != nullptr) {
      goto LABEL_7;
    }
  }
  else {
    *(_QWORD*)(a1 + 280) = 0;
    *(_QWORD*)(a1 + 288) = 0;
    *(_QWORD*)(a1 + 264) = 0;
    *(_QWORD*)(a1 + 272) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    *(_QWORD*)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 232) = 0;
    *(_QWORD*)(a1 + 240) = 0;
    *(_QWORD*)(a1 + 216) = 0;
    *(_QWORD*)(a1 + 224) = 0;
    *(_QWORD*)(a1 + 200) = 0;
    *(_QWORD*)(a1 + 208) = 0;
    *(_QWORD*)(a1 + 184) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    *(_QWORD*)(a1 + 168) = 0;
    *(_QWORD*)(a1 + 176) = 0;
    if (a5 != nullptr) {
    LABEL_7:
      *(_BYTE*)(a1 + 296) = 1;
      v30 = *a5;
      v31 = a5[1];
      v32 = a5[3];
      *(_QWORD*)(a1 + 320) = a5[2];
      *(_QWORD*)(a1 + 328) = v32;
      *(_QWORD*)(a1 + 304) = v30;
      *(_QWORD*)(a1 + 312) = v31;
      v33 = a5[4];
      v34 = a5[5];
      v35 = a5[7];
      *(_QWORD*)(a1 + 352) = a5[6];
      *(_QWORD*)(a1 + 360) = v35;
      *(_QWORD*)(a1 + 336) = v33;
      *(_QWORD*)(a1 + 344) = v34;
      v36 = a5[8];
      v37 = a5[9];
      v38 = a5[11];
      *(_QWORD*)(a1 + 384) = a5[10];
      *(_QWORD*)(a1 + 392) = v38;
      *(_QWORD*)(a1 + 368) = v36;
      *(_QWORD*)(a1 + 376) = v37;
      v39 = a5[12];
      v40 = a5[13];
      v41 = a5[15];
      *(_QWORD*)(a1 + 416) = a5[14];
      *(_QWORD*)(a1 + 424) = v41;
      *(_QWORD*)(a1 + 400) = v39;
      *(_QWORD*)(a1 + 408) = v40;
      v42 = (_QWORD*)(a1 + 440);
      if (a6 != nullptr) {
        goto LABEL_8;
      }
      goto LABEL_13;
    }
  }
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  v42 = (_QWORD*)(a1 + 440);
  if (a6 != nullptr) {
  LABEL_8:
    *(_BYTE*)(a1 + 432) = 1;
    v43 = *a6;
    v44 = a6[1];
    v45 = a6[3];
    v42[2] = a6[2];
    v42[3] = v45;
    *v42 = v43;
    v42[1] = v44;
    v46 = a6[4];
    v47 = a6[5];
    v48 = a6[7];
    v42[6] = a6[6];
    v42[7] = v48;
    v42[4] = v46;
    v42[5] = v47;
    v49 = a6[8];
    v50 = a6[9];
    v51 = a6[11];
    v42[10] = a6[10];
    v42[11] = v51;
    v42[8] = v49;
    v42[9] = v50;
    v52 = a6[12];
    v53 = a6[13];
    v54 = a6[15];
    v42[14] = a6[14];
    v42[15] = v54;
    v42[12] = v52;
    v42[13] = v53;
    if (a7 == nullptr) {
      return result;
    }
    goto LABEL_9;
  }
LABEL_13:
  v42[14] = 0;
  v42[15] = 0;
  v42[12] = 0;
  v42[13] = 0;
  v42[10] = 0;
  v42[11] = 0;
  v42[8] = 0;
  v42[9] = 0;
  v42[6] = 0;
  v42[7] = 0;
  v42[4] = 0;
  v42[5] = 0;
  v42[2] = 0;
  v42[3] = 0;
  *v42 = 0;
  v42[1] = 0;
  if (a7 == nullptr) {
    return result;
  }
LABEL_9:
  v55 = a7[1];
  *(_QWORD*)(a1 + 576) = *a7;
  *(_QWORD*)(a1 + 584) = v55;
  return result;
}

__int64 MovieHr_1ad50(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = MovieData_c08e0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return MovieRoutine_82870(a1, 448);
}

__int64 MovieHr_1b670(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = MovieData_c08e0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return MovieRoutine_82870(a1, 32);
}

__int64 MovieHr_1b850(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = MovieData_c0960 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return MovieRoutine_82870(a1, 24);
}

__int64 MovieHr_1b8b0(_QWORD* a1)
{
  __int64 result;

  *a1 = MovieData_c0970 + 16;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

__int64 MovieHr_1bb80(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 48);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *(_QWORD*)(a1 + 48) = 0;
  }
  v3 = *(_QWORD*)(a1 + 40);
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    *(_QWORD*)(a1 + 40) = 0;
  }
  return MovieRoutine_835d0(a1 + 8);
}

__int64 MovieHr_1f5a0(__int64 a1, __int64 a2, int* a3, __int64 a4, int a5,
                      int a6, int a7, int a8, int a9)
{
  __int64 v9;
  int v11;
  int v14;
  int v15;
  int v16;
  int v18;
  __int64 v19;
  int v20;
  int* v21;
  __int16* v22;
  char* v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  char v30;
  unsigned int v31;
  bool v32;
  char v33;
  int v34;
  int v35;
  int v36;
  __int64 v38;

  v9 = *(_QWORD*)(a1 + 24);
  v11 = a9;
  v14 = *(_DWORD*)(a1 + 40) * a7;
  v15 = v14 / a8;
  if (a7 * *(__int16*)(v9 + 2LL * a6) < v14 / a8) {
    v15 = a7 * *(__int16*)(v9 + 2LL * a6);
  }
  if (a8 == 1) {
    v16 = a7 * *(__int16*)(v9 + 2LL * a6);
  }
  else {
    v16 = v15;
  }
  if (a9 != 0) {
    a5 = 0;
  }
  if (a9 != 0) {
    v18 = 0;
  }
  else {
    v18 = a6;
  }
  v19 = a5;
  v20 = a7 * *(__int16*)(v9 + 2LL * a5);
  v21 = a3;
  if (v20 >= 1) {
    v38 = a2;
    MovieRoutine_82ce0(a3, 0, 4LL * (unsigned int)v20);
    a2 = v38;
    v11 = a9;
    v21 = &a3[v20 - 1 + 1];
  }
  if ((int)v19 < v18) {
    v22 = (__int16*)(a2 + 2LL * v20);
    v23 = (char*)MovieData_c09c8;
    do {
      v24 = a7 * *(__int16*)(v9 + 2 * v19);
      v25 = v19 + 1;
      v26 = *(__int16*)(a4 + 2 * v19) + (v23[v19] << 6);
      v27 = a7 * *(__int16*)(v9 + 2 * (v19 + 1));
      if (v26 < 0x8000) {
        v28 = v26 >> 10;
        if (v26 < -32768 || v28 < -15) {
          v30 = 0;
          v31 = 0;
          goto LABEL_34;
        }
      }
      else {
        LOWORD(v26) = 0x7FFF;
        v28 = 31;
      }
      v31 =
          ((((((326528 * (v26 & 0x3FFu)) >> 16) + 14819) * 32 * (v26 & 0x3FF) +
             1494482944) >>
            16) *
               32 * (v26 & 0x3FF) +
           1073676288) >>
          16;
      if (v28 > 16) {
        v32 = v28 == 17;
        if (v28 == 17) {
          v33 = 1;
        }
        else {
          v33 = 2;
        }
        if (!v32) {
          v31 = 0x4000;
        }
        do {
          v34 = *v22++;
          ++v24;
          *v21++ = (v31 * v34) << v33;
        } while (v24 < v27);
        goto LABEL_16;
      }
      v30 = 16 - v28;
      do {
      LABEL_34:
        v35 = *v22++;
        ++v24;
        *v21++ = (int)(v31 * v35) >> v30;
      } while (v24 < v27);
    LABEL_16:
      ++v19;
    } while (v25 != v18);
  }
  if (v11 != 0) {
    v36 = 0;
  }
  else {
    v36 = v16;
  }
  return MovieRoutine_82ce0(&a3[v36], 0, 4LL * (v14 - v36));
}

__int64 MovieHr_20220(__int64 result, int a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
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
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int16* v36;
  __int64 v37;
  __int64 v38;
  __int16* v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;

  if ((int)a3 >= 1) {
    v44 = a2 >> 1;
    if (a2 >> 1 >= 1) {
      v3 = 2 * a3;
      v4 = a3;
      v5 = 16LL * a3;
      v6 = 2LL * a3;
      v7 = 4LL * a3;
      v8 = 0;
      v9 = 0;
      v10 = result;
      v42 = v6;
      v43 = v4;
      v11 = 2LL * (unsigned int)v3;
      v12 = 8LL * (unsigned int)v3;
      v13 = 4LL * (unsigned int)v3;
      v14 = v5 - v6;
      v15 = v11;
      v16 = 2 * (v7 + v4);
      v17 = 2 * (v11 + v3);
      v18 = 2 * (v6 + v4);
      do {
        if (v44 >= 4) {
          v19 = 0;
          v20 = v8;
          v21 = v6;
          v22 = v18;
          v23 = v15;
          v24 = v16;
          v25 = v13;
          v26 = v14;
          v27 = v17;
          do {
            v19 += 4;
            v28 = 23170 * *(__int16*)(result + v21);
            v29 = 23170 * *(__int16*)(result + v20) + 0x4000;
            *(_WORD*)(result + v20) = (unsigned int)(v29 + v28) >> 15;
            *(_WORD*)(result + v21) = (unsigned int)(v29 - v28) >> 15;
            v21 += v5;
            v20 += v12;
            v30 = 23170 * *(__int16*)(result + v22);
            v31 = 23170 * *(__int16*)(result + v23) + 0x4000;
            *(_WORD*)(result + v23) = (unsigned int)(v31 + v30) >> 15;
            *(_WORD*)(result + v22) = (unsigned int)(v31 - v30) >> 15;
            v23 += v12;
            v22 += v5;
            v32 = 23170 * *(__int16*)(result + v24);
            v33 = 23170 * *(__int16*)(result + v25) + 0x4000;
            *(_WORD*)(result + v25) = (unsigned int)(v33 + v32) >> 15;
            *(_WORD*)(result + v24) = (unsigned int)(v33 - v32) >> 15;
            v25 += v12;
            v24 += v5;
            v34 = 23170 * *(__int16*)(result + v26);
            v35 = 23170 * *(__int16*)(result + v27) + 0x4000;
            *(_WORD*)(result + v27) = (unsigned int)(v35 + v34) >> 15;
            *(_WORD*)(result + v26) = (unsigned int)(v35 - v34) >> 15;
            v27 += v12;
            v26 += v5;
          } while ((v44 & 0x7FFFFFFC) != v19);
        }
        else {
          v19 = 0;
        }
        if ((v44 & 3) != 0) {
          v36 = (__int16*)(v10 + v11 * v19);
          v37 = (2 * v19) | 1;
          v38 = v44 & 3;
          v39 = (__int16*)(v10 + v42 * v37);
          do {
            --v38;
            v40 = 23170 * *v39;
            v41 = 23170 * *v36 + 0x4000;
            *v36 = (unsigned int)(v41 + v40) >> 15;
            *v39 = (unsigned int)(v41 - v40) >> 15;
            v39 = (__int16*)((char*)v39 + v7);
            v36 = (__int16*)((char*)v36 + v11);
          } while (v38 != 0);
        }
        ++v9;
        v17 += 2;
        v14 += 2;
        v13 += 2;
        v16 += 2;
        v15 += 2;
        v18 += 2;
        v6 += 2;
        v8 += 2;
        v10 += 2;
      } while (v9 != v43);
    }
  }
  return result;
}

__int64 MovieHr_21840(int* a1, __int16* a2, int a3, unsigned int a4, int a5,
                      __int64 a6, __int64 a7, _WORD* a8, __int64 a9,
                      __int64 a10, int a11)
{
  int v11;
  int* v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  _WORD* v17;
  int* v18;
  __int16 v19;
  int v20;
  int v22;
  __int64 v23;
  int v24;
  __int64 i;
  int v26;
  char v27;
  __int64 v28;
  __int16* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  int v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int16* v85;
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
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  __int16* v112;
  __int16* v113;
  __int64 v114;
  int v115;
  int v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  __int64 v147;
  __int16* v148;
  __int16* v149;
  int v150;
  int v151;
  int v152;
  int v153;
  unsigned int v154;
  unsigned int v155;
  __int64 v156;
  int v157;
  __int64 v158;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int16* v165;
  __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  __int64 v192;
  __int16* v193;
  __int16* v194;
  int v195;
  int v196;
  _WORD* v197;
  int* v198;
  int v199;
  _WORD* v201;
  int v202;
  __int64 v203;
  __int64 v204;
  unsigned int v205;
  __int64 v206;
  __int16* v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  int v212;
  int v213;
  __int64 v214;
  __int64 v215;
  int v216;
  __int64 v217;
  __int64 v218;
  int v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  int v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  int v228;
  int v229;
  __int16 v230;
  __int64 v231;
  __int64 v232;
  bool v233;
  _BOOL4 v234;
  _WORD* v235;
  __int16* v236;
  __int64 v237;
  int v238;
  _WORD* v239;
  __int16* v240;
  int v241;
  int v243;
  _WORD* v244;
  _BOOL4 v245;
  int v248;
  int v249;
  int v250;
  __int64 v251;
  int v252;
  char v253;
  int v254;
  __int64 v255;
  int v256;
  int v257;
  unsigned int v258;
  unsigned int v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  unsigned int v264;
  __int64 v265;
  __int64 v266;
  int v267;
  int v268;

  v11 = *a1;
  v13 = a1;
  if (a3 == 1) {
    v14 = *((_QWORD*)a1 + 4);
    v15 = v13[10];
    if (v11 != 0) {
      if (v15 < 8) {
        v19 = 0x4000;
      }
      else {
        v16 = (unsigned __int16)*a2;
        v17 = a8;
        v18 = v13;
        MovieRoutine_38320(v14, v16 >> 15, 1);
        v13 = v18;
        a8 = v17;
        v18[10] -= 8;
        v19 = v16 & 0x8000 | 0x4000;
      }
    }
    else {
      v19 = 0x4000;
      if (v15 >= 8) {
        v197 = a8;
        v198 = v13;
        v199 = MovieRoutine_37b60(v14, 1);
        v13 = v198;
        a8 = v197;
        if (v199 != 0) {
          v19 = -16384;
        }
        else {
          v19 = 0x4000;
        }
        v198[10] -= 8;
      }
    }
    if (v13[1] != 0) {
      *a2 = v19;
    }
    if (a8 != nullptr) {
      *a8 = (unsigned int)*a2 >> 4;
    }
    return 1;
  }
  v20 = a3 / (unsigned int)a5;
  v245 = a5 == 1;
  v22 = a3;
  v244 = a8;
  v251 = (unsigned int)a1[7];
  v248 = v251 & ~((int)v251 >> 31);
  if (a6 != 0) {
    v23 = a10;
    if (a10 != 0) {
      if ((int)v251 <= 0) {
        v233 = (v20 & 1) != 0 || (_DWORD)v251 == 0;
        v234 = !v233;
        if (a5 <= 1 && !v234) {
          v243 = 0;
          goto LABEL_41;
        }
      }
      v24 = a5;
      MovieRoutine_82920(a10, a6, 2LL * a3);
      a5 = v24;
      if ((int)v251 < 1) {
        goto LABEL_9;
      }
    LABEL_11:
      for (i = 0; i != v251; ++i) {
        if (v11 != 0 && i != 31) {
          v26 = v22 >> i >> 1;
          if (v26 >= 1) {
            v27 = i + 1;
            v28 = 0;
            do {
              v29 = &a2[v28];
              if ((unsigned int)v26 >= 4) {
                v31 = 7;
                v30 = 0;
                do {
                  v32 = v30 << v27;
                  v33 = 2 * ((v31 - 6) << i);
                  v34 = 23170 * v29[v32] + 0x4000;
                  v35 = 23170 * *(__int16*)((char*)v29 + v33);
                  v29[v32] = (unsigned int)(v34 + v35) >> 15;
                  *(__int16*)((char*)v29 + v33) =
                      (unsigned int)(v34 - v35) >> 15;
                  v36 = (v30 + 1) << v27;
                  v37 = (v31 - 4) << i;
                  LODWORD(v33) = 23170 * v29[v36] + 0x4000;
                  v38 = 23170 * v29[v37];
                  v29[v36] = (unsigned int)(v33 + v38) >> 15;
                  v29[v37] = (unsigned int)(v33 - v38) >> 15;
                  v39 = 2 * ((v30 + 2) << v27);
                  v40 = 2 * ((v31 - 2) << i);
                  v41 = 23170 * *(__int16*)((char*)v29 + v40);
                  LODWORD(v33) = 23170 * *(__int16*)((char*)v29 + v39) + 0x4000;
                  *(__int16*)((char*)v29 + v39) =
                      (unsigned int)(v33 + v41) >> 15;
                  LODWORD(v39) = v33 - v41;
                  v42 = v31 << i;
                  v31 += 8;
                  v42 *= 2;
                  *(__int16*)((char*)v29 + v40) = (unsigned int)v39 >> 15;
                  v43 = v30 + 3;
                  v30 += 4;
                  v44 = v43 << v27;
                  v45 = 23170 * *(__int16*)((char*)v29 + v42);
                  LODWORD(v40) = 23170 * v29[v44] + 0x4000;
                  v29[v44] = (unsigned int)(v40 + v45) >> 15;
                  *(__int16*)((char*)v29 + v42) =
                      (unsigned int)(v40 - v45) >> 15;
                } while (v30 != (v26 & 0x7FFFFFFC));
              }
              else {
                v30 = 0;
              }
              if ((v26 & 3) != 0) {
                v46 = (2 * v30) | 1;
                v47 = v26 & 3;
                do {
                  v48 = v30 << v27;
                  v49 = v46 << i;
                  ++v30;
                  v46 += 2;
                  --v47;
                  v48 *= 2;
                  v49 *= 2;
                  v50 = 23170 * *(__int16*)((char*)v29 + v49);
                  v51 = 23170 * *(__int16*)((char*)v29 + v48) + 0x4000;
                  *(__int16*)((char*)v29 + v48) =
                      (unsigned int)(v51 + v50) >> 15;
                  *(__int16*)((char*)v29 + v49) =
                      (unsigned int)(v51 - v50) >> 15;
                } while (v47 != 0);
              }
              ++v28;
            } while (v28 != 1 << i);
          }
        }
        if (v23 != 0 && i != 31) {
          v52 = v22 >> i >> 1;
          if (v52 >= 1) {
            v53 = i + 1;
            v54 = 0;
            do {
              v55 = v23 + 2 * v54;
              if ((unsigned int)v52 >= 4) {
                v57 = 7;
                v56 = 0;
                do {
                  v58 = 2 * (v56 << v53);
                  v59 = 2 * ((v57 - 6) << i);
                  v60 = 23170 * *(__int16*)(v55 + v58) + 0x4000;
                  v61 = 23170 * *(__int16*)(v55 + v59);
                  *(_WORD*)(v55 + v58) = (unsigned int)(v60 + v61) >> 15;
                  *(_WORD*)(v55 + v59) = (unsigned int)(v60 - v61) >> 15;
                  v62 = 2 * ((v56 + 1) << v53);
                  v63 = 2 * ((v57 - 4) << i);
                  LODWORD(v59) = 23170 * *(__int16*)(v55 + v62) + 0x4000;
                  v64 = 23170 * *(__int16*)(v55 + v63);
                  *(_WORD*)(v55 + v62) = (unsigned int)(v59 + v64) >> 15;
                  *(_WORD*)(v55 + v63) = (unsigned int)(v59 - v64) >> 15;
                  v65 = 2 * ((v56 + 2) << v53);
                  v66 = 2 * ((v57 - 2) << i);
                  v67 = 23170 * *(__int16*)(v55 + v66);
                  LODWORD(v59) = 23170 * *(__int16*)(v55 + v65) + 0x4000;
                  *(_WORD*)(v55 + v65) = (unsigned int)(v59 + v67) >> 15;
                  LODWORD(v65) = v59 - v67;
                  v68 = v57 << i;
                  v57 += 8;
                  v68 *= 2;
                  *(_WORD*)(v55 + v66) = (unsigned int)v65 >> 15;
                  v69 = v56 + 3;
                  v56 += 4;
                  v70 = 2 * (v69 << v53);
                  v71 = 23170 * *(__int16*)(v55 + v68);
                  LODWORD(v66) = 23170 * *(__int16*)(v55 + v70) + 0x4000;
                  *(_WORD*)(v55 + v70) = (unsigned int)(v66 + v71) >> 15;
                  *(_WORD*)(v55 + v68) = (unsigned int)(v66 - v71) >> 15;
                } while (v56 != (v52 & 0x7FFFFFFC));
              }
              else {
                v56 = 0;
              }
              if ((v52 & 3) != 0) {
                v72 = (2 * v56) | 1;
                v73 = v52 & 3;
                do {
                  v74 = v56 << v53;
                  v75 = v72 << i;
                  ++v56;
                  v72 += 2;
                  --v73;
                  v74 *= 2;
                  v75 *= 2;
                  v76 = 23170 * *(__int16*)(v55 + v75);
                  v77 = 23170 * *(__int16*)(v55 + v74) + 0x4000;
                  *(_WORD*)(v55 + v74) = (unsigned int)(v77 + v76) >> 15;
                  *(_WORD*)(v55 + v75) = (unsigned int)(v77 - v76) >> 15;
                } while (v73 != 0);
              }
              ++v54;
            } while (v54 != 1 << i);
          }
        }
        a11 = MovieData_a2250[a11 & 0xF] | (4 * MovieData_a2250[a11 >> 4]);
      }
      v243 = 1;
      goto LABEL_40;
    }
  }
  v23 = a6;
  if ((int)v251 >= 1) {
    goto LABEL_11;
  }
LABEL_9:
  v243 = 0;
LABEL_40:
  a6 = v23;
LABEL_41:
  v257 = 0;
  v78 = a5 >> v248;
  v79 = v20 << v248;
  v250 = v22;
  if (((v20 << v248) & 1) == 0) {
    v80 = v251;
    if ((v251 & 0x80000000) != 0) {
      v257 = 0;
      v249 = v11;
      while (1) {
        v252 = v80;
        v253 = v79;
        v81 = v79 >> 1;
        v254 = a11;
        v258 = v78;
        v255 = (unsigned int)(2 * v78);
        v267 = v79 >> 1;
        if (v11 != 0 && v78 >= 1 && v81 >= 1) {
          v82 = v81 & 0x7FFFFFFC;
          v83 = 0;
          v84 = 0;
          v85 = a2;
          v86 = 2LL * (unsigned int)v255;
          v262 = v81 & 3;
          v87 = 2LL * (unsigned int)v78;
          v88 = 16LL * (unsigned int)v78;
          v89 = 8LL * (unsigned int)(2 * v78);
          v90 = v88 - v87;
          v91 = 4LL * (unsigned int)v255;
          v92 = v86;
          v93 = 2 * (v86 + v255);
          v94 = 10LL * v258;
          v95 = 6LL * v258;
          do {
            v265 = v83;
            v96 = 0;
            if ((unsigned int)v81 >= 4) {
              v97 = v87;
              v98 = v95;
              v99 = v92;
              v100 = v94;
              v101 = v91;
              v102 = v90;
              v103 = v93;
              do {
                v96 += 4;
                v104 = 23170 * *(__int16*)((char*)a2 + v97);
                v105 = 23170 * *(__int16*)((char*)a2 + v83) + 0x4000;
                *(__int16*)((char*)a2 + v83) =
                    (unsigned int)(v105 + v104) >> 15;
                *(__int16*)((char*)a2 + v97) =
                    (unsigned int)(v105 - v104) >> 15;
                v97 += v88;
                v83 += v89;
                v106 = 23170 * *(__int16*)((char*)a2 + v98);
                v107 = 23170 * *(__int16*)((char*)a2 + v99) + 0x4000;
                *(__int16*)((char*)a2 + v99) =
                    (unsigned int)(v107 + v106) >> 15;
                *(__int16*)((char*)a2 + v98) =
                    (unsigned int)(v107 - v106) >> 15;
                v99 += v89;
                v98 += v88;
                v108 = 23170 * *(__int16*)((char*)a2 + v100);
                v109 = 23170 * *(__int16*)((char*)a2 + v101) + 0x4000;
                *(__int16*)((char*)a2 + v101) =
                    (unsigned int)(v109 + v108) >> 15;
                *(__int16*)((char*)a2 + v100) =
                    (unsigned int)(v109 - v108) >> 15;
                v101 += v89;
                v100 += v88;
                v110 = 23170 * *(__int16*)((char*)a2 + v102);
                v111 = 23170 * *(__int16*)((char*)a2 + v103) + 0x4000;
                *(__int16*)((char*)a2 + v103) =
                    (unsigned int)(v111 + v110) >> 15;
                *(__int16*)((char*)a2 + v102) =
                    (unsigned int)(v111 - v110) >> 15;
                v103 += v89;
                v102 += v88;
              } while (v82 != v96);
            }
            if (v262 != 0) {
              v112 = (__int16*)((char*)v85 + 2LL * v258 * ((2 * v96) | 1));
              v113 = (__int16*)((char*)v85 + v86 * v96);
              v114 = v262;
              do {
                --v114;
                v115 = 23170 * *v112;
                v116 = 23170 * *v113 + 0x4000;
                *v113 = (unsigned int)(v116 + v115) >> 15;
                *v112 = (unsigned int)(v116 - v115) >> 15;
                v112 += 2 * v258;
                v113 = (__int16*)((char*)v113 + v86);
              } while (v114 != 0);
            }
            v81 = v267;
            ++v84;
            v93 += 2;
            v90 += 2;
            v91 += 2;
            v94 += 2;
            v92 += 2;
            v95 += 2;
            v87 += 2;
            ++v85;
            v83 = v265 + 2;
          } while (v84 != v258);
        }
        if (a6 != 0 && (int)v258 >= 1 && v81 >= 1) {
          v117 = v81 & 0x7FFFFFFC;
          v118 = 0;
          v119 = 0;
          v120 = a6;
          v121 = 2LL * (unsigned int)v255;
          v263 = v81 & 3;
          v122 = 8LL * (unsigned int)v255;
          v123 = 4LL * (unsigned int)v255;
          v124 = 2 * (v121 + v255);
          v125 = 16LL * v258;
          v126 = 2LL * v258;
          v127 = v125 - v126;
          v128 = 10LL * v258;
          v129 = 6LL * v258;
          v130 = v121;
          do {
            v266 = v118;
            v131 = 0;
            if ((unsigned int)v81 >= 4) {
              v132 = v126;
              v133 = v129;
              v134 = v130;
              v135 = v128;
              v136 = v123;
              v137 = v127;
              v138 = v124;
              do {
                v131 += 4;
                v139 = 23170 * *(__int16*)(a6 + v132);
                v140 = 23170 * *(__int16*)(a6 + v118) + 0x4000;
                *(_WORD*)(a6 + v118) = (unsigned int)(v140 + v139) >> 15;
                v118 += v122;
                *(_WORD*)(a6 + v132) = (unsigned int)(v140 - v139) >> 15;
                v132 += v125;
                v141 = 23170 * *(__int16*)(a6 + v133);
                v142 = 23170 * *(__int16*)(a6 + v134) + 0x4000;
                *(_WORD*)(a6 + v134) = (unsigned int)(v142 + v141) >> 15;
                *(_WORD*)(a6 + v133) = (unsigned int)(v142 - v141) >> 15;
                v134 += v122;
                v133 += v125;
                v143 = 23170 * *(__int16*)(a6 + v135);
                v144 = 23170 * *(__int16*)(a6 + v136) + 0x4000;
                *(_WORD*)(a6 + v136) = (unsigned int)(v144 + v143) >> 15;
                *(_WORD*)(a6 + v135) = (unsigned int)(v144 - v143) >> 15;
                v136 += v122;
                v135 += v125;
                v145 = 23170 * *(__int16*)(a6 + v137);
                v146 = 23170 * *(__int16*)(a6 + v138) + 0x4000;
                *(_WORD*)(a6 + v138) = (unsigned int)(v146 + v145) >> 15;
                *(_WORD*)(a6 + v137) = (unsigned int)(v146 - v145) >> 15;
                v138 += v122;
                v137 += v125;
              } while (v117 != v131);
            }
            if (v263 != 0) {
              v147 = v263;
              v148 = (__int16*)(v120 + 2LL * v258 * ((2 * v131) | 1));
              v149 = (__int16*)(v120 + v121 * v131);
              do {
                --v147;
                v150 = 23170 * *v148;
                v151 = 23170 * *v149 + 0x4000;
                *v149 = (unsigned int)(v151 + v150) >> 15;
                *v148 = (unsigned int)(v151 - v150) >> 15;
                v148 += 2 * v258;
                v149 = (__int16*)((char*)v149 + v121);
              } while (v147 != 0);
            }
            v81 = v267;
            ++v119;
            v124 += 2;
            v127 += 2;
            v123 += 2;
            v128 += 2;
            v130 += 2;
            v129 += 2;
            v126 += 2;
            v120 += 2;
            v118 = v266 + 2;
          } while (v119 != v258);
        }
        v22 = v250;
        a11 = (v254 << v258) | v254;
        ++v257;
        if ((v253 & 2) != 0) {
          break;
        }
        v152 = v255;
        v11 = v249;
        v79 = v81;
        v78 = v255;
        v80 = v252 + 1;
        if (v252 >= -1) {
          v153 = v255;
          if ((int)v255 < 2) {
            goto LABEL_78;
          }
          goto LABEL_71;
        }
      }
      v11 = v249;
      v152 = v255;
      v153 = v255;
      if ((int)v255 >= 2) {
        goto LABEL_71;
      }
    LABEL_78:
      v259 = MovieRoutine_23500(a1, a2, (unsigned int)v22, a4);
      if (a1[1] != 0) {
      LABEL_79:
        if (v257 != 0) {
          v157 = 0;
          do {
            v158 = (unsigned int)(v153 >> 1);
            v256 = v157;
            v268 = v81;
            v264 = (2 * v81) >> 1;
            if ((int)v158 >= 1 && (2 * v81) >> 1 >= 1) {
              v160 = 2LL * (unsigned int)(v153 >> 1);
              v161 = 4LL * (unsigned int)(v153 >> 1);
              v162 = 16LL * (unsigned int)(v153 >> 1);
              v163 = 0;
              v164 = 0;
              v165 = a2;
              v166 = v162 - v160;
              v260 = v160;
              v261 = (unsigned int)(v153 >> 1);
              v167 = 2 * (v161 + v158);
              v168 = (unsigned __int64)(unsigned int)v153 >> 1;
              v169 = 16 * v168;
              v170 = 8 * v168;
              v171 = 4 * v168;
              v172 = 12 * v168;
              v173 = 2 * (v160 + v158);
              v174 = 4 * v168;
              do {
                if (v264 >= 4) {
                  v175 = 0;
                  v176 = v163;
                  v177 = v160;
                  v178 = v173;
                  v179 = v174;
                  v180 = v167;
                  v181 = v170;
                  v182 = v166;
                  v183 = v172;
                  do {
                    v175 += 4;
                    v184 = 23170 * *(__int16*)((char*)a2 + v177);
                    v185 = 23170 * *(__int16*)((char*)a2 + v176) + 0x4000;
                    *(__int16*)((char*)a2 + v176) =
                        (unsigned int)(v185 + v184) >> 15;
                    *(__int16*)((char*)a2 + v177) =
                        (unsigned int)(v185 - v184) >> 15;
                    v177 += v162;
                    v176 += v169;
                    v186 = 23170 * *(__int16*)((char*)a2 + v178);
                    v187 = 23170 * *(__int16*)((char*)a2 + v179) + 0x4000;
                    *(__int16*)((char*)a2 + v179) =
                        (unsigned int)(v187 + v186) >> 15;
                    *(__int16*)((char*)a2 + v178) =
                        (unsigned int)(v187 - v186) >> 15;
                    v179 += v169;
                    v178 += v162;
                    v188 = 23170 * *(__int16*)((char*)a2 + v180);
                    v189 = 23170 * *(__int16*)((char*)a2 + v181) + 0x4000;
                    *(__int16*)((char*)a2 + v181) =
                        (unsigned int)(v189 + v188) >> 15;
                    *(__int16*)((char*)a2 + v180) =
                        (unsigned int)(v189 - v188) >> 15;
                    v181 += v169;
                    v180 += v162;
                    v190 = 23170 * *(__int16*)((char*)a2 + v182);
                    v191 = 23170 * *(__int16*)((char*)a2 + v183) + 0x4000;
                    *(__int16*)((char*)a2 + v183) =
                        (unsigned int)(v191 + v190) >> 15;
                    *(__int16*)((char*)a2 + v182) =
                        (unsigned int)(v191 - v190) >> 15;
                    v183 += v169;
                    v182 += v162;
                  } while ((v264 & 0x7FFFFFFC) != v175);
                }
                else {
                  v175 = 0;
                }
                if ((v264 & 3) != 0) {
                  v192 = v264 & 3;
                  v193 = (__int16*)((char*)v165 + v171 * v175);
                  v194 = (__int16*)((char*)v165 + v260 * ((2 * v175) | 1));
                  do {
                    --v192;
                    v195 = 23170 * *v194;
                    v196 = 23170 * *v193 + 0x4000;
                    *v193 = (unsigned int)(v196 + v195) >> 15;
                    *v194 = (unsigned int)(v196 - v195) >> 15;
                    v194 = (__int16*)((char*)v194 + v161);
                    v193 = (__int16*)((char*)v193 + v171);
                  } while (v192 != 0);
                }
                LODWORD(v158) = v261;
                ++v164;
                v172 += 2;
                v166 += 2;
                v170 += 2;
                v167 += 2;
                v174 += 2;
                v173 += 2;
                v160 += 2;
                v163 += 2;
                ++v165;
              } while (v164 != v261);
            }
            v153 = v158;
            v81 = 2 * v268;
            v259 |= v259 >> v158;
            v157 = v256 + 1;
          } while (v256 + 1 != v257);
        }
        else {
          LODWORD(v158) = v153;
        }
        if (v243 != 0) {
          v201 = v244;
          v202 = v250;
          v203 = 0;
          do {
            v259 = MovieData_a2220[v259];
            if (v203 == 31 || (int)(v205 = v250 >> v203 >> 1) <= 0) {
              v204 = v203 + 1;
            }
            else {
              v204 = v203 + 1;
              v206 = 0;
              do {
                v207 = &a2[v206];
                if (v205 >= 4) {
                  v209 = 7;
                  v208 = 0;
                  do {
                    v210 = v208 << v204;
                    v211 = 2 * ((v209 - 6) << v203);
                    v212 = 23170 * v207[v210] + 0x4000;
                    v213 = 23170 * *(__int16*)((char*)v207 + v211);
                    v207[v210] = (unsigned int)(v212 + v213) >> 15;
                    *(__int16*)((char*)v207 + v211) =
                        (unsigned int)(v212 - v213) >> 15;
                    v214 = (v208 + 1) << v204;
                    v215 = (v209 - 4) << v203;
                    LODWORD(v211) = 23170 * v207[v214] + 0x4000;
                    v216 = 23170 * v207[v215];
                    v207[v214] = (unsigned int)(v211 + v216) >> 15;
                    v207[v215] = (unsigned int)(v211 - v216) >> 15;
                    v217 = 2 * ((v208 + 2) << v204);
                    v218 = 2 * ((v209 - 2) << v203);
                    v219 = 23170 * *(__int16*)((char*)v207 + v218);
                    LODWORD(v211) =
                        23170 * *(__int16*)((char*)v207 + v217) + 0x4000;
                    *(__int16*)((char*)v207 + v217) =
                        (unsigned int)(v211 + v219) >> 15;
                    LODWORD(v217) = v211 - v219;
                    v220 = v209 << v203;
                    v209 += 8;
                    v220 *= 2;
                    *(__int16*)((char*)v207 + v218) = (unsigned int)v217 >> 15;
                    v221 = v208 + 3;
                    v208 += 4;
                    v222 = v221 << v204;
                    v223 = 23170 * *(__int16*)((char*)v207 + v220);
                    LODWORD(v218) = 23170 * v207[v222] + 0x4000;
                    v207[v222] = (unsigned int)(v218 + v223) >> 15;
                    *(__int16*)((char*)v207 + v220) =
                        (unsigned int)(v218 - v223) >> 15;
                  } while (v208 != (v205 & 0x7FFFFFFC));
                }
                else {
                  v208 = 0;
                }
                if ((v205 & 3) != 0) {
                  v224 = (2 * v208) | 1;
                  v225 = v205 & 3;
                  do {
                    v226 = v208 << v204;
                    v227 = v224 << v203;
                    ++v208;
                    v224 += 2;
                    --v225;
                    v226 *= 2;
                    v227 *= 2;
                    v228 = 23170 * *(__int16*)((char*)v207 + v227);
                    v229 = 23170 * *(__int16*)((char*)v207 + v226) + 0x4000;
                    *(__int16*)((char*)v207 + v226) =
                        (unsigned int)(v229 + v228) >> 15;
                    *(__int16*)((char*)v207 + v227) =
                        (unsigned int)(v229 - v228) >> 15;
                  } while (v225 != 0);
                }
                ++v206;
              } while (v206 != 1 << v203);
            }
            v203 = v204;
          } while (v204 != v251);
        }
        else {
          v201 = v244;
          v202 = v250;
        }
        if (v201 == nullptr) {
          return v259 & ~(-1 << ((_DWORD)v158 << v248));
        }
        v230 = MovieRoutine_39b40((unsigned int)(v202 << 22));
        if (v202 < 1) {
          return v259 & ~(-1 << ((_DWORD)v158 << v248));
        }
        v231 = v202 & 7;
        if ((unsigned int)v202 >= 8) {
          v235 = v201 + 4;
          v236 = a2 + 4;
          v237 = 0;
          do {
            v237 -= 8;
            *(v235 - 4) = (unsigned int)(v230 * *(v236 - 4)) >> 15;
            *(v235 - 3) = (unsigned int)(v230 * *(v236 - 3)) >> 15;
            *(v235 - 2) = (unsigned int)(v230 * *(v236 - 2)) >> 15;
            *(v235 - 1) = (unsigned int)(v230 * *(v236 - 1)) >> 15;
            *v235 = (unsigned int)(v230 * *v236) >> 15;
            v235[1] = (unsigned int)(v230 * v236[1]) >> 15;
            v235[2] = (unsigned int)(v230 * v236[2]) >> 15;
            v238 = v236[3];
            v236 += 8;
            v235[3] = (unsigned int)(v230 * v238) >> 15;
            v235 += 8;
          } while (-(__int64)(v202 & 0x7FFFFFF8) != v237);
          v232 = -v237;
          if ((v202 & 7) == 0) {
            return v259 & ~(-1 << ((_DWORD)v158 << v248));
          }
        }
        else {
          v232 = 0;
          if ((v202 & 7) == 0) {
            return v259 & ~(-1 << ((_DWORD)v158 << v248));
          }
        }
        v239 = &v201[v232];
        v240 = &a2[v232];
        do {
          v241 = *v240++;
          --v231;
          *v239++ = (unsigned int)(v230 * v241) >> 15;
        } while (v231 != 0);
        return v259 & ~(-1 << ((_DWORD)v158 << v248));
      }
      return v259;
    }
  }
  v152 = a5 >> v248;
  v81 = v20 << v248;
  v153 = v78;
  if (v78 < 2) {
    goto LABEL_78;
  }
LABEL_71:
  v154 = v81 >> v248;
  v155 = v152 << v248;
  if (v11 != 0) {
    v156 = a6;
    MovieRoutine_23220(a2, v154, v155, v245);
    a6 = v156;
  }
  if (a6 != 0) {
    MovieRoutine_23220(a6, v154, v155, v245);
  }
  v259 = MovieRoutine_23500(a1, a2, (unsigned int)v22, a4);
  if (a1[1] != 0) {
    MovieRoutine_23ce0(a2, v154, v155, v245);
    goto LABEL_79;
  }
  return v259;
}

__int64 MovieHr_23ce0(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _WORD* v14;
  __int64 v15;
  _WORD* v16;
  _WORD* v17;
  _WORD* v18;
  _WORD* v19;
  _WORD* v20;
  _WORD* v21;
  _WORD* v22;
  __int16 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int16* v27;
  __int16 v28;
  _WORD* v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _WORD* v37;
  _WORD* v38;
  _WORD* v39;
  _WORD* v40;
  _WORD* v41;
  _WORD* v42;
  _WORD* v43;
  _WORD* v44;
  __int16 v45;
  __int64 v46;
  __int16* v47;
  __int64 v48;
  __int16 v49;
  _QWORD vars0[2];

  v8 = 2LL * a3 * a2;
  MovieRoutine_82ce0((char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0, v8);
  if (a4 == 0) {
    if (a3 < 1 || a2 < 1) {
      return MovieRoutine_82920(
          a1, (char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL), v8);
    }
    v29 = (_WORD*)(a1 + 8);
    v30 = 0;
    v31 = a1;
    v32 = (char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    v33 = 2LL * (unsigned int)a2;
    v34 = 2LL * (unsigned int)a3;
    while ((unsigned int)a2 < 8) {
      v35 = 0;
      if ((a2 & 7) != 0) {
        goto LABEL_25;
      }
    LABEL_18:
      ++v30;
      v32 += 2;
      v29 = (_WORD*)((char*)v29 + v33);
      v31 += v33;
      if (v30 == a3) {
        return MovieRoutine_82920(
            a1, (char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL), v8);
      }
    }
    v36 = 0;
    v37 = v29;
    v38 = v32;
    do {
      v39 = &v38[a3];
      v36 -= 8;
      *v38 = *(v37 - 4);
      v38 += 8 * (unsigned int)a3;
      *v39 = *(v37 - 3);
      v40 = &v39[(unsigned __int64)v34 / 2];
      *v40 = *(v37 - 2);
      v41 = &v40[(unsigned __int64)v34 / 2];
      *v41 = *(v37 - 1);
      v42 = &v41[(unsigned __int64)v34 / 2];
      *v42 = *v37;
      v43 = &v42[(unsigned __int64)v34 / 2];
      *v43 = v37[1];
      v44 = &v43[(unsigned __int64)v34 / 2];
      *v44 = v37[2];
      v45 = v37[3];
      v37 += 8;
      v44[a3] = v45;
    } while (-(__int64)(a2 & 0x7FFFFFF8) != v36);
    v35 = -v36;
    if ((a2 & 7) == 0) {
      goto LABEL_18;
    }
  LABEL_25:
    v46 = v34 * v35;
    v47 = (__int16*)(v31 + 2 * v35);
    v48 = a2 & 7;
    do {
      v49 = *v47++;
      --v48;
      *(_WORD*)&v32[v46] = v49;
      v46 += v34;
    } while (v48 != 0);
    goto LABEL_18;
  }
  if (a3 >= 1 && a2 >= 1) {
    v9 = 0;
    v10 = (char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = 2LL * a3;
    while (1) {
      v12 = MovieData_a2290[a3 - 2 + v9] * a2;
      if ((unsigned int)a2 >= 8) {
        break;
      }
      v13 = 0;
      if ((a2 & 7) != 0) {
        goto LABEL_12;
      }
    LABEL_5:
      ++v9;
      v10 += 2;
      if (v9 == a3) {
        return MovieRoutine_82920(
            a1, (char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL), v8);
      }
    }
    v14 = (_WORD*)(a1 + 8 + 2 * v12);
    v15 = 0;
    v16 = v10;
    do {
      v17 = &v16[a3];
      v15 -= 8;
      *v16 = *(v14 - 4);
      v16 += 8 * a3;
      *v17 = *(v14 - 3);
      v18 = &v17[(unsigned __int64)v11 / 2];
      *v18 = *(v14 - 2);
      v19 = &v18[(unsigned __int64)v11 / 2];
      *v19 = *(v14 - 1);
      v20 = &v19[(unsigned __int64)v11 / 2];
      *v20 = *v14;
      v21 = &v20[(unsigned __int64)v11 / 2];
      *v21 = v14[1];
      v22 = &v21[(unsigned __int64)v11 / 2];
      *v22 = v14[2];
      v23 = v14[3];
      v14 += 8;
      v22[a3] = v23;
    } while (-(__int64)(a2 & 0x7FFFFFF8) != v15);
    v13 = -v15;
    if ((a2 & 7) == 0) {
      goto LABEL_5;
    }
  LABEL_12:
    v24 = v11 * v13;
    v25 = 2 * v13 + 2 * v12;
    v26 = a2 & 7;
    v27 = (__int16*)(a1 + v25);
    do {
      v28 = *v27++;
      --v26;
      *(_WORD*)&v10[v24] = v28;
      v24 += v11;
    } while (v26 != 0);
    goto LABEL_5;
  }
  return MovieRoutine_82920(
      a1, (char*)vars0 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL), v8);
}

__int64 MovieHr_24de0(__int64 result, __int64 a2, int a3, int a4, int a5,
                      unsigned __int16 a6, unsigned __int16 a7, int a8, int a9,
                      __int16* a10, unsigned int a11)
{
  unsigned int v11;
  __int16* v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  int v25;
  __int64 v28;
  __int16* v29;
  int v30;
  int v32;
  int* v33;
  __int64 v34;
  int* v35;
  int* v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  int v57;
  __int64 v58;
  int v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _DWORD* v67;
  int* v68;
  int* v69;
  int v70;
  int v71;
  int v72;
  unsigned __int64 v73;
  int v74;
  int v75;
  int v76;
  __int64 v77;
  int v78;
  int v79;
  unsigned int v80;

  if ((a7 | a6) == 0) {
    if (a2 == result) {
      return result;
    }
    v64 = 4LL * a5;
    return MovieRoutine_82b40(result, a2, v64);
  }
  if (a3 <= 15) {
    v11 = 15;
  }
  else {
    v11 = a3;
  }
  v12 = (__int16*)((char*)&MovieData_a2308 + 6 * a9);
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  if (a4 <= 15) {
    v16 = 15;
  }
  else {
    v16 = (unsigned int)a4;
  }
  v17 = ~(_DWORD)v16;
  v18 = v13 * (__int16)a7 + 0x4000;
  v19 = v14 * (__int16)a7 + 0x4000;
  v20 = -v16;
  v21 = v18 >> 15;
  v22 = (unsigned int)(v15 * (__int16)a7 + 0x4000) >> 15;
  v23 = v19 >> 15;
  v24 = 1 - v16;
  v25 = -2 - v16;
  if (a8 == a9 && a6 == a7 && v11 == (_DWORD)v16) {
    v28 = 0;
  }
  else {
    v28 = a11;
  }
  v79 = v28;
  if ((int)v28 < 1) {
    v54 = 0;
    if (a7 != 0) {
      goto LABEL_25;
    }
    goto LABEL_31;
  }
  v29 = (__int16*)((char*)&MovieData_a2308 + 6 * a8);
  v30 = (__int16)a6;
  v32 = *(_DWORD*)(a2 - 4 * v16);
  v33 = (int*)(a2 - 4LL * v11);
  v34 = a2 + 8;
  v80 = v19 >> 15;
  v35 = (int*)result;
  v36 = v33;
  v37 = v30 * v29[2];
  v38 = v30 * v29[1];
  v39 = 2 * v30 * *v29;
  v40 = *(_DWORD*)(a2 + 4LL * v25);
  v41 = *(_DWORD*)(a2 + 4LL * v17);
  v42 = *(_DWORD*)(a2 + 4 * v24);
  v43 = (v39 + 0x8000) >> 16;
  v44 = (2 * v38 + 0x8000) >> 16;
  v45 = (2 * v37 + 0x8000) >> 16;
  do {
    v46 = *a10++;
    v47 = *(_DWORD*)(v34 - 4LL * (unsigned int)v16);
    v48 = *(_DWORD*)(v34 - 8);
    v34 += 4;
    v49 = (__int16)((v46 * v46) >> 15);
    v50 = (int)((2 * v46 * v46) & 0xFFFF0000 ^ 0x7FFF0000) >> 16;
    v51 = v36[1];
    ++v36;
    v52 = v48 +
          ((unsigned __int64)((__int16)((unsigned int)(v49 * (__int16)v21) >>
                                        15) *
                              (__int64)v32) >>
           15) +
          ((unsigned __int64)((__int16)((unsigned int)(v49 * (__int16)v23) >>
                                        15) *
                              (__int64)(v41 + v42)) >>
           15) +
          ((unsigned __int64)((__int16)((unsigned int)(v49 * (__int16)v22) >>
                                        15) *
                              (__int64)(v47 + v40)) >>
           15) +
          ((unsigned __int64)((__int16)((unsigned int)(v50 * v43) >> 15) *
                              (__int64)*v33) >>
           15);
    v40 = v41;
    v41 = v32;
    v32 = v42;
    v42 = v47;
    v53 = v52 +
          ((unsigned __int64)((__int16)((unsigned int)(v50 * v44) >> 15) *
                              (*(v33 - 1) + v51)) >>
           15) +
          ((unsigned __int64)((__int16)((unsigned int)(v50 * v45) >> 15) *
                              (*(v33 - 2) + (__int64)v33[2])) >>
           15);
    v33 = v36;
    if (v53 <= -300000000) {
      v53 = -300000000;
    }
    if (v53 >= 300000000) {
      v53 = 300000000;
    }
    --v28;
    *v35++ = v53;
  } while (v28 != 0);
  v54 = a11;
  v24 = 1 - v16;
  LOWORD(v23) = v80;
  v20 = -v16;
  v17 = ~(_DWORD)v16;
  v25 = -2 - v16;
  if (a7 == 0) {
  LABEL_31:
    if (a2 == result) {
      return result;
    }
    v65 = 4LL * v79;
    v64 = 4LL * (a5 - v79);
    result += v65;
    a2 += v65;
    return MovieRoutine_82b40(result, a2, v64);
  }
LABEL_25:
  v55 = a5 - v54;
  if ((int)(a5 - v54) < 1) {
    return result;
  }
  v56 = 4LL * v54;
  v57 = (__int16)v21;
  v58 = a2 + v56;
  v59 = *(_DWORD*)(a2 + v56 + 4 * v24);
  v60 = *(_DWORD*)(a2 + v56 + 4 * v20);
  v61 = *(_DWORD*)(a2 + v56 + 4LL * v17);
  v62 = *(_DWORD*)(a2 + v56 + 4LL * v25);
  if (v55 == 1) {
    v63 = 0;
  LABEL_45:
    v77 = result + v56;
    result = v58 + 8;
    v78 =
        *(_DWORD*)(v58 + 4 * v63) +
        ((unsigned __int64)(v57 * (__int64)v60) >> 15) +
        ((unsigned __int64)((__int16)v23 * (__int64)(v59 + v61)) >> 15) +
        ((unsigned __int64)((__int16)v22 * (*(int*)(v58 + 8 + 4 * (v63 - v16)) +
                                            (__int64)v62)) >>
         15);
    if (v78 <= -300000000) {
      v78 = -300000000;
    }
    if (v78 >= 300000000) {
      v78 = 300000000;
    }
    *(_DWORD*)(v77 + 4 * v63) = v78;
    return result;
  }
  v66 = 0;
  v67 = (_DWORD*)(a2 + v56);
  v68 = (int*)(4LL * v54 - 4 * v16 + a2 + 12);
  v69 = (int*)(result + 4LL * v54 + 4);
  do {
    v70 = v60;
    v60 = *(v68 - 1);
    v71 = v59;
    v66 -= 2;
    v72 = *v67 + ((unsigned __int64)(v57 * (__int64)v70) >> 15) +
          ((unsigned __int64)((__int16)v23 * (__int64)(v59 + v61)) >> 15) +
          ((unsigned __int64)((__int16)v22 * (__int64)(v60 + v62)) >> 15);
    v73 = (unsigned __int64)(v57 * (__int64)v59) >> 15;
    if (v72 <= -300000000) {
      v72 = -300000000;
    }
    if (v72 >= 300000000) {
      v72 = 300000000;
    }
    *(v69 - 1) = v72;
    v74 = *v68;
    v68 += 2;
    v59 = v74;
    v75 = v67[1];
    v67 += 2;
    v76 = v75 + v73 +
          ((unsigned __int64)((__int16)v23 * (__int64)(v60 + v70)) >> 15) +
          ((unsigned __int64)((__int16)v22 * (__int64)(v74 + v61)) >> 15);
    v61 = v71;
    if (v76 <= -300000000) {
      v76 = -300000000;
    }
    if (v76 >= 300000000) {
      v76 = 300000000;
    }
    *v69 = v76;
    v69 += 2;
    v62 = v70;
  } while (-(__int64)(v55 & 0x7FFFFFFE) != v66);
  v63 = -v66;
  v62 = v70;
  v61 = v71;
  if ((v55 & 1) != 0) {
    goto LABEL_45;
  }
  return result;
}

__int16* MovieHr_2b1e0(__int16* result, _DWORD* a2, int a3, int a4, int a5,
                       __int16* a6, int* a7, int a8)
{
  int v8;
  int v9;
  __int64 v13;
  __int64 v14;
  int v15;
  __int16* v16;
  _DWORD* v17;
  int* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int16* v24;
  int* v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  _DWORD* v34;
  __int16* v35;
  int v36;
  __int16* v37;
  _DWORD* v38;
  _DWORD* v39;
  __int16* v40;
  int v41;
  __int16* v42;
  int v43;
  _DWORD* v44;
  __int16* v45;
  int v46;
  _DWORD* v47;
  __int16* v48;
  int v49;
  _DWORD* v50;
  __int16* v51;
  int v52;
  _DWORD* v53;
  __int16* v54;
  int v55;
  _DWORD* v56;
  _DWORD* v57;
  __int16* v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int* v62;
  __int64 v63;
  int v64;
  int v65;
  int v66;
  int v67;
  _DWORD* v68;
  int v69;

  v8 = *a6;
  v9 = *a7;
  if (a8 != 0 || a5 != 1 || a6[1] != 0) {
    v15 = a3 / a5;
    if (a5 != 1) {
      v16 = result;
      v17 = a2;
      v18 = a7;
      MovieRoutine_82ce0(a2, 0, 4LL * a3);
      result = v16;
      a2 = v17;
      a7 = v18;
    }
    if (v15 >= 1) {
      v19 = v15 & 7;
      v20 = a5;
      v21 = a4;
      if ((unsigned int)v15 >= 8) {
        v22 = 0;
        v37 = result;
        v38 = a2;
        do {
          v39 = &v38[a5];
          v22 += 8;
          *v38 = *v37;
          v40 = &v37[a4];
          v38 += 8 * a5;
          v37 += 8 * a4;
          v41 = *v40;
          v42 = &v40[v21];
          *v39 = v41;
          v43 = *v42;
          v44 = &v39[v20];
          v45 = &v42[v21];
          *v44 = v43;
          v46 = *v45;
          v47 = &v44[v20];
          v48 = &v45[v21];
          *v47 = v46;
          v49 = *v48;
          v50 = &v47[v20];
          v51 = &v48[v21];
          *v50 = v49;
          v52 = *v51;
          v53 = &v50[v20];
          v54 = &v51[v21];
          *v53 = v52;
          v55 = *v54;
          LODWORD(v54) = v54[a4];
          v56 = &v53[v20];
          *v56 = v55;
          v56[a5] = (_DWORD)v54;
        } while ((v15 & 0x7FFFFFF8) != v22);
      }
      else {
        v22 = 0;
      }
      if ((v15 & 7) != 0) {
        v57 = &a2[v22 * a5];
        v58 = &result[v22 * a4];
        do {
          v59 = *v58;
          v58 = (__int16*)((char*)v58 + v21 * 2);
          --v19;
          *v57 = v59;
          v57 = (_DWORD*)((char*)v57 + v20 * 4);
        } while (v19 != 0);
      }
    }
    if (a3 >= 1) {
      v60 = a3 & 3;
      if ((unsigned int)a3 >= 4) {
        v62 = a2 + 2;
        v63 = 0;
        do {
          v64 = *(v62 - 1);
          v63 -= 4;
          v65 = (__int16)*(v62 - 2);
          *(v62 - 2) = (v65 << 12) - v9;
          *(v62 - 1) = ((__int16)v64 << 12) - ((v65 * v8) >> 3);
          v66 = *v62;
          v67 = v62[1];
          *v62 = ((__int16)*v62 << 12) - (((__int16)v64 * v8) >> 3);
          v62[1] = ((__int16)v67 << 12) - (((__int16)v66 * v8) >> 3);
          v62 += 4;
          v9 = ((__int16)v67 * v8) >> 3;
        } while (-(__int64)(a3 & 0x7FFFFFFC) != v63);
        v61 = -v63;
        if ((a3 & 3) == 0) {
          goto LABEL_33;
        }
      }
      else {
        v61 = 0;
        if ((a3 & 3) == 0) {
          goto LABEL_33;
        }
      }
      v68 = &a2[v61];
      do {
        --v60;
        v69 = (__int16)*v68;
        *v68++ = (v69 << 12) - v9;
        v9 = (v69 * v8) >> 3;
      } while (v60 != 0);
    }
  }
  else {
    if (a3 < 1) {
      goto LABEL_33;
    }
    v13 = a3 & 3;
    if ((unsigned int)a3 < 4) {
      v14 = 0;
      if ((a3 & 3) == 0) {
        goto LABEL_33;
      }
      goto LABEL_16;
    }
    v23 = 0;
    v24 = result;
    v25 = a2 + 2;
    do {
      v26 = *v24;
      v27 = v24[a4];
      v28 = v24[2 * a4];
      v23 -= 4;
      v29 = v26 << 12;
      v30 = (v27 << 12) - ((v26 * v8) >> 3);
      v31 = (v28 << 12) - ((v27 * v8) >> 3);
      *(v25 - 2) = v29 - v9;
      *(v25 - 1) = v30;
      v32 = v28 * v8;
      v33 = v24[3 * a4];
      v24 += 4 * a4;
      *v25 = v31;
      v25[1] = (v33 << 12) - (v32 >> 3);
      v25 += 4;
      v9 = (v33 * v8) >> 3;
    } while (-(__int64)(a3 & 0x7FFFFFFC) != v23);
    v14 = -v23;
    if (v13 != 0) {
    LABEL_16:
      v34 = &a2[v14];
      v35 = &result[v14 * a4];
      do {
        v36 = *v35;
        v35 += a4;
        --v13;
        *v34++ = (v36 << 12) - v9;
        v9 = (v36 * v8) >> 3;
      } while (v13 != 0);
    }
  }
LABEL_33:
  *a7 = v9;
  return result;
}

__int64 MovieHr_35cc0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v7;
  __int64 v8;
  char* v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _WORD* v17;
  __int16* v18;
  __int16 v19;
  __int64 v20;
  char* v21;
  __int16* v22;
  __int16 v23;
  __int64 v24;
  __int16* v25;
  _WORD* v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int16* v37;
  int v38;
  int v39;
  int v40;
  int v41;
  char* v42;
  __int64 v43;
  int v44;
  int v45;
  int i;
  __int64 v47;
  __int64 v48;
  _WORD* v49;
  _WORD* v50;
  __int16 v51;
  int v52;
  int v53;
  int v54;
  int v55;

  v7 = 2LL * a5;
  v8 = a5;
  v12 = (char*)&v52 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  result = MovieRoutine_82ce0(v12, 0, v7);
  if (a5 >= 1) {
    v14 = a5 & 7;
    if ((unsigned int)a5 >= 8) {
      v16 = a2 + 2 * v8;
      v17 = v12 + 8;
      v15 = 0;
      v18 = (__int16*)(v16 - 2);
      do {
        v19 = *v18;
        v18 -= 8;
        *(v17 - 4) = v19;
        *(v17 - 3) = *(_WORD*)(v16 + 2 * (v15 ^ 0x7FFFFFFFFFFFFFFELL));
        *(v17 - 2) = *(_WORD*)(v16 + 2 * (v15 ^ 0xFFFFFFFFFFFFFFFDLL));
        *(v17 - 1) = *(_WORD*)(v16 + 2 * (v15 ^ 0x7FFFFFFFFFFFFFFCLL));
        *v17 = *(_WORD*)(v16 + 2 * (v15 ^ 0xFFFFFFFFFFFFFFFBLL));
        v17[1] = *(_WORD*)(v16 + 2 * (v15 ^ 0x7FFFFFFFFFFFFFFALL));
        v17[2] = *(_WORD*)(v16 + 2 * (v15 ^ 0xFFFFFFFFFFFFFFF9LL));
        v20 = v15 ^ 0x7FFFFFFFFFFFFFF8LL;
        v15 += 8;
        v17[3] = *(_WORD*)(v16 + 2 * v20);
        v17 += 8;
      } while ((a5 & 0x7FFFFFF8) != v15);
    }
    else {
      v15 = 0;
    }
    if ((a5 & 7) != 0) {
      v21 = &v12[2 * v15];
      v22 = (__int16*)(a2 - 2 * v15 + 2 * v8 - 2);
      do {
        v23 = *v22--;
        --v14;
        *(_WORD*)v21 = v23;
        v21 += 2;
      } while (v14 != 0);
    }
  }
  if (a4 < 4) {
    v27 = 0;
    v32 = -a4;
    if (a4 <= 0) {
      return result;
    }
  }
  else {
    v24 = a1 - 2 * v8;
    v25 = (__int16*)(a1 + 4);
    v26 = (_WORD*)(a3 + 4);
    v27 = 0;
    do {
      v28 = *(v25 - 1) << 12;
      v52 = *(v25 - 2) << 12;
      v53 = v28;
      v29 = v25[1] << 12;
      v54 = *v25 << 12;
      v55 = v29;
      result = MovieRoutine_360c0(v12, v24, &v52, (unsigned int)a5);
      v24 += 8;
      v27 += 4;
      v25 += 4;
      v30 = (unsigned int)(v53 + 2048) >> 12;
      *(v26 - 2) = (unsigned int)(v52 + 2048) >> 12;
      *(v26 - 1) = v30;
      v31 = v55;
      *v26 = (unsigned int)(v54 + 2048) >> 12;
      v26[1] = (unsigned int)(v31 + 2048) >> 12;
      v26 += 4;
    } while (a4 - 3 > v27);
    v32 = v27 - a4;
    if (v27 >= a4) {
      return result;
    }
  }
  v33 = (unsigned int)v27;
  if (a5 <= 0) {
    for (i = ((_BYTE)a4 - (_BYTE)v27) & 7; i != 0;
         *(_WORD*)(a3 + v47) = *(_WORD*)(a1 + v47)) {
      v47 = 2 * v33++;
      --i;
    }
    if (v32 <= 0xFFFFFFF8) {
      v48 = 2 * v33 + 8;
      v49 = (_WORD*)(a3 + v48);
      v50 = (_WORD*)(a1 + v48);
      do {
        LODWORD(v33) = v33 + 8;
        *(v49 - 4) = *(v50 - 4);
        *(v49 - 3) = *(v50 - 3);
        *(v49 - 2) = *(v50 - 2);
        *(v49 - 1) = *(v50 - 1);
        *v49 = *v50;
        v49[1] = v50[1];
        v49[2] = v50[2];
        v51 = v50[3];
        v50 += 8;
        v49[3] = v51;
        v49 += 8;
      } while (a4 > (int)v33);
    }
  }
  else {
    v34 = v27 - a5;
    do {
      v35 = *(__int16*)(a1 + 2 * v33) << 12;
      if ((unsigned int)a5 >= 8) {
        v36 = 0;
        v37 = (__int16*)(v12 + 8);
        do {
          v38 = v34 + v36;
          v36 += 8;
          v39 = v35 + *(__int16*)(a1 + 2LL * v38) * *(v37 - 4) +
                *(__int16*)(a1 + 2LL * (v38 + 1)) * *(v37 - 3) +
                *(__int16*)(a1 + 2LL * (v38 + 2)) * *(v37 - 2) +
                *(__int16*)(a1 + 2LL * (v38 + 3)) * *(v37 - 1) +
                *(__int16*)(a1 + 2LL * (v38 + 4)) * *v37 +
                *(__int16*)(a1 + 2LL * (v38 + 5)) * v37[1] +
                *(__int16*)(a1 + 2LL * (v38 + 6)) * v37[2];
          v40 = v37[3];
          v37 += 8;
          v35 = v39 + *(__int16*)(a1 + 2LL * (v38 + 7)) * v40;
        } while ((a5 & 0x7FFFFFF8) != v36);
      }
      else {
        v36 = 0;
      }
      if ((a5 & 7) != 0) {
        v41 = v34 + v36;
        v42 = &v12[2 * v36];
        v43 = a5 & 7;
        do {
          v44 = *(__int16*)(a1 + 2LL * v41);
          v45 = *(__int16*)v42;
          v42 += 2;
          ++v41;
          --v43;
          v35 += v44 * v45;
        } while (v43 != 0);
      }
      ++v34;
      *(_WORD*)(a3 + 2 * v33++) = (unsigned int)(v35 + 2048) >> 12;
    } while (a4 > (int)v33);
  }
  return result;
}

__int64 MovieHr_37120(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4;
  int v5;
  unsigned int v6;
  int v7;
  char v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  __int64 v26;
  int* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  unsigned int v37;
  int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  __int64 v44;
  unsigned int v45;

  v4 = a2 - 1LL;
  v5 = *(_DWORD*)(a1 + 4LL * a2 - 4);
  v6 = (unsigned int)v5 >> 31;
  if (v5 >= 0) {
    v7 = *(_DWORD*)(a1 + 4LL * a2 - 4);
  }
  else {
    v7 = -v5;
  }
  if (v4 >= 1) {
    v8 = 1;
  }
  else {
    v8 = a2 - 1;
  }
  if ((((_BYTE)a2 - v8) & 1) != 0 &&
      ((v4 = a2 - 2LL, v7 >= 2) ? (v9 = 2) : (v9 = v7),
       v7 <= 2 ? (v10 = 2) : (v10 = v7),
       (v6 += *((_DWORD*)*(&MovieData_c0358 + v9) + v10),
        (v11 = *(_DWORD*)(a1 + 4 * v4)) >= 0)
           ? (v12 = *(_DWORD*)(a1 + 4 * v4))
           : (v12 = -v11),
       v7 += v12, v11 < 0)) {
    if ((unsigned int)v7 < 2) {
      v20 = v7 + 1;
    }
    else {
      v20 = 2;
    }
    v21 = (__int64)*(&MovieData_c0358 + v20);
    if (v7 + 1 > 2) {
      v22 = v7 + 1;
    }
    else {
      v22 = 2;
    }
    v6 += *(_DWORD*)(v21 + 4LL * v22);
    if (a2 < 3) {
      goto LABEL_19;
    }
  }
  else if (a2 < 3) {
    goto LABEL_19;
  }
  v23 = v4 + 2;
  v24 = a2 - v4 + 1;
  v25 = a2 - v4 + 2;
  v26 = a1 + 4 * v4 - 4;
  v27 = (int*)v26;
  do {
    if (v24 >= v7) {
      v28 = v7;
    }
    else {
      v28 = v24;
    }
    if (v24 <= v7) {
      v29 = v7;
    }
    else {
      v29 = v24;
    }
    v30 = *((_DWORD*)*(&MovieData_c0358 + v28) + v29) + v6;
    v32 = *v27;
    v27 -= 2;
    v31 = v32;
    if (v32 >= 0) {
      v33 = v31;
    }
    else {
      v33 = -v31;
    }
    v34 = v33 + v7;
    if (v31 < 0) {
      if (v25 - 1 > (unsigned int)v34) {
        v35 = v34 + 1;
      }
      else {
        v35 = v24;
      }
      v36 = (__int64)*(&MovieData_c0358 + v35);
      if (v24 <= v34 + 1) {
        v37 = v34 + 1;
      }
      else {
        v37 = v24;
      }
      v30 += *(_DWORD*)(v36 + 4LL * v37);
    }
    v38 = v24 + 1;
    v39 = *(_DWORD*)(v26 - 4);
    if (v24 + 1 < v34) {
      v40 = v24 + 1;
    }
    else {
      v40 = v34;
    }
    if (v38 > v34) {
      v41 = v24 + 1;
    }
    else {
      v41 = v34;
    }
    v6 = *((_DWORD*)*(&MovieData_c0358 + v40) + v41) + v30;
    if (v39 >= 0) {
      v42 = v39;
    }
    else {
      v42 = -v39;
    }
    v7 = v42 + v34;
    if (v39 < 0) {
      if (v25 > (unsigned int)v7) {
        v43 = v7 + 1;
      }
      else {
        v43 = v24 + 1;
      }
      v44 = (__int64)*(&MovieData_c0358 + v43);
      if (v38 <= v7 + 1) {
        v45 = v7 + 1;
      }
      else {
        v45 = v24 + 1;
      }
      v6 += *(_DWORD*)(v44 + 4LL * v45);
    }
    v23 -= 2;
    v24 += 2;
    v25 += 2LL;
    v26 = (__int64)v27;
  } while (v23 > 2);
LABEL_19:
  if (a2 >= a3) {
    v13 = a3;
  }
  else {
    v13 = a2;
  }
  if (a2 <= a3) {
    v14 = a3;
  }
  else {
    v14 = a2;
  }
  v15 = *((_DWORD*)*(&MovieData_c0358 + v13) + v14);
  if (a2 >= a3 + 1) {
    v16 = a3 + 1;
  }
  else {
    v16 = a2;
  }
  v17 = (__int64)*(&MovieData_c0358 + v16);
  if (a2 <= a3 + 1) {
    v18 = a3 + 1;
  }
  else {
    v18 = a2;
  }
  return MovieRoutine_38200(a4, v6,
                            (unsigned int)(*(_DWORD*)(v17 + 4LL * v18) + v15));
}

__int64 MovieHr_372e0(_DWORD* a1, int a2, int a3, __int64 a4)
{
  unsigned int v5;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64* v17;
  __int64 v18;
  _DWORD* v19;
  __int64* v20;
  unsigned int v21;
  unsigned int v22;
  bool v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  _UNKNOWN** v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  __int16 v42;
  __int16 v43;
  int v44;

  v5 = a3;
  if (a2 >= a3) {
    v7 = a3;
  }
  else {
    v7 = a2;
  }
  if (a2 <= a3) {
    v8 = a3;
  }
  else {
    v8 = a2;
  }
  v9 = *((_DWORD*)*(&MovieData_c0358 + v7) + v8);
  if (a2 >= a3 + 1) {
    v10 = a3 + 1;
  }
  else {
    v10 = a2;
  }
  if (a2 <= a3 + 1) {
    v11 = a3 + 1;
  }
  else {
    v11 = a2;
  }
  v12 = MovieRoutine_37900(
      a4, (unsigned int)(*((_DWORD*)*(&MovieData_c0358 + v10) + v11) + v9));
  if (a2 < 3) {
    v13 = 0;
  }
  else {
    v13 = 0;
    v14 = (unsigned int)a2;
    do {
      if (v14 <= (int)v5) {
        v31 = (__int64)*(&MovieData_c0358 + v14);
        v32 = *(_DWORD*)(v31 + 4LL * v5 + 4);
        if (v12 >= v32) {
          v33 = *(_DWORD*)(v31 + 4LL * v5 + 4);
        }
        else {
          v33 = 0;
        }
        v34 = v12 - v33;
        if (*(_DWORD*)(v31 + 4 * v14) <= v34) {
          v35 = (int)v5 + 1LL;
          v38 = v5;
          do {
            v37 = *(_DWORD*)(v31 + 4 * v38);
            v38 = v35 - 2;
            --v35;
          } while (v37 > v34);
        }
        else {
          v35 = v14;
          do {
            v36 = &MovieData_c0358 + v35--;
            v37 = *((_DWORD*)*(v36 - 1) + v14);
          } while (v37 > v34);
        }
        v23 = v12 >= v32;
        v15 = v5 - v35;
        v12 = v34 - v37;
        v5 = v35;
        if (v23) {
          v15 = -v15;
        }
        v15 = (__int16)v15;
        *a1 = (__int16)v15;
        v13 += v15 * v15;
      }
      else {
        v17 = (__int64*)(&MovieData_c0358 + (int)v5);
        v18 = *v17;
        v19 = (_DWORD*)v17[1];
        v20 = v17 - 1;
        v21 = *(_DWORD*)(v18 + 4 * v14);
        v22 = v19[v14];
        v23 = v12 < v21 || v12 >= v22;
        if (v23) {
          v24 = 0;
          if (v12 >= v22) {
            v25 = v22;
          }
          else {
            v25 = 0;
          }
          v26 = v12 - v25;
          do {
            v27 = *v20--;
            ++v24;
            v28 = *(_DWORD*)(v27 + 4 * v14);
            v23 = v26 >= v28;
            v29 = v26 - v28;
          } while (!v23);
          v23 = v12 >= v22;
          v5 -= v24;
          v12 = v29;
          if (v23) {
            v30 = -v24;
          }
          else {
            LOWORD(v30) = v24;
          }
          v30 = (__int16)v30;
          v13 += v30 * v30;
          *a1 = (__int16)v30;
        }
        else {
          *a1 = 0;
          v12 -= v21;
        }
      }
      ++a1;
    } while (v14-- > 3);
  }
  if (v12 > 2 * v5) {
    v39 = ~(2 * v5);
  }
  else {
    v39 = 0;
  }
  v40 = v39 + v12;
  v41 = (v40 + 1) >> 1;
  v42 = v5 - v41;
  if (v12 > 2 * v5) {
    v42 = v41 - v5;
  }
  if (v40 + 1 >= 2) {
    v43 = ((v40 + 1) & 0xFFFE) - 1;
  }
  else {
    v43 = 0;
  }
  v44 = (__int16)((v41 - (v40 - v43)) ^ (v43 - v40));
  *a1 = v42;
  a1[1] = v44;
  return (unsigned int)(v13 + v42 * v42 + v44 * v44);
}

void* MovieHr_3a9f0(int a1, int a2, int* a3)
{
  void* result;
  int v4;

  if (a1 == 48000 && (a2 == 960 || (a2 & 0x7FFFFFFF) == 0x1E0 ||
                      (a2 & 0x3FFFFFFF) == 0xF0 || (a2 & 0x1FFFFFFF) == 0x78)) {
    result = &MovieData_c03d0;
    if (a3 == nullptr) {
      return result;
    }
    v4 = 0;
  }
  else {
    result = nullptr;
    if (a3 == nullptr) {
      return result;
    }
    v4 = -1;
  }
  *a3 = v4;
  return result;
}

__int64 MovieHr_3b1c0(__int16* a1, __int64 a2, __int64 a3, int a4,
                      unsigned int a5)
{
  unsigned int v6;
  __int64 result;
  unsigned __int64 v8;
  int* v9;
  int v10;
  int v11;
  __int16* v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16* v16;
  int v17;
  int v18;
  int v19;
  int v20;
  __int16* v21;
  __int16* v22;
  __int16 v23;
  int v24;
  unsigned int v25;
  __int16* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int16* v106;
  __int64 v107;
  int v108;
  __int64 v109;
  __int16* v110;
  __int16* v111;
  int v112;
  int v113;
  int v114;
  __int16* v115;
  __int16* v116;
  __int64 v117;
  int v118;
  int v119;
  int v120;
  unsigned int v121;
  __int64 v123;
  __int64 v124;
  __int64 v125;

  if ((int)a5 >= 4) {
    v6 = a4 - 4;
    LODWORD(result) = 1;
    v8 = 0;
    while (1) {
      v12 = (__int16*)(a2 + 2 * v8);
      v13 = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12 + 3;
      if (a4 < 4) {
        v20 = 0;
        v19 = 0;
        v18 = 0;
        v17 = 0;
        v23 = 0;
        v24 = 0;
        v21 = a1;
        goto LABEL_23;
      }
      if (v6 < 4) {
        break;
      }
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      v25 = (((unsigned int)(a4 - 4) >> 2) + 1) & 0x7FFFFFFE;
      v26 = a1;
      do {
        v27 = *v26;
        v28 = *v16;
        v29 = v16[3];
        v25 -= 2;
        v30 = v20 + v27 * v13;
        v31 = v14;
        v32 = v15;
        v33 = v17 + v28 * v27;
        v34 = v16[1];
        v35 = v16[4];
        v36 = v16[5];
        v37 = v16[6];
        v38 = v26[7];
        v39 = v16[7];
        v40 = v19 + v27 * v31;
        v41 = v18 + v27 * v32;
        v42 = v26[1];
        v43 = v30 + v42 * v31;
        v44 = v40 + v42 * v32;
        v45 = v41 + v42 * v28;
        v46 = v33 + v34 * v42;
        v47 = v26[2];
        v48 = v16[2];
        v49 = v43 + v47 * v32;
        v50 = v44 + v47 * v28;
        v51 = v45 + v47 * v34;
        v52 = v46 + v48 * v47;
        v53 = v26[3];
        v54 = v49 + v53 * v28;
        v55 = v50 + v53 * v34;
        v56 = v51 + v53 * v48;
        v57 = v52 + v29 * v53;
        v58 = v26[4];
        v22 = v16 + 8;
        v16 += 8;
        v59 = v54 + v58 * v34;
        v60 = v55 + v58 * v48;
        v61 = v56 + v58 * v29;
        v62 = v57 + v35 * v58;
        v63 = v26[5];
        v13 = v36;
        v15 = v39;
        v64 = v59 + v63 * v48;
        v65 = v60 + v63 * v29;
        v66 = v61 + v63 * v35;
        v67 = v62 + v36 * v63;
        v68 = v26[6];
        v14 = v37;
        v69 = v64 + v68 * v29;
        v70 = v65 + v68 * v35;
        v71 = v66 + v68 * v36;
        v72 = v67 + v37 * v68;
        v21 = v26 + 8;
        v20 = v69 + v38 * v35;
        v19 = v70 + v38 * v36;
        v18 = v71 + v38 * v37;
        v26 += 8;
        v17 = v72 + v39 * v38;
      } while (v25 != 0);
      v23 = v35;
      v16 = v22;
      v24 = a4 & 0x7FFFFFFC;
      if ((v6 & 4) == 0) {
        goto LABEL_22;
      }
    LABEL_23:
      v93 = v14;
      v94 = v15;
      if (v24 < a4) {
        v97 = *v21++;
        v96 = v97;
        v98 = *v16++;
        v20 += v96 * v13;
        v19 += v96 * v93;
        v18 += v96 * v94;
        v17 += v98 * v96;
        v95 = (__int16)v98;
        if ((v24 | 1) >= a4) {
        LABEL_25:
          if ((v24 | 2) < a4) {
            goto LABEL_29;
          }
          goto LABEL_3;
        }
      }
      else {
        v95 = v23;
        if ((v24 | 1) >= a4) {
          goto LABEL_25;
        }
      }
      v100 = *v21++;
      v99 = v100;
      v101 = *v16++;
      v20 += v99 * v93;
      v19 += v99 * v94;
      v18 += v99 * v95;
      v17 += v101 * v99;
      v13 = v101;
      if ((v24 | 2) < a4) {
      LABEL_29:
        v102 = *v21;
        v20 += v102 * v94;
        v19 += v102 * v95;
        v18 += v102 * v13;
        v17 += *v16 * v102;
      }
    LABEL_3:
      v9 = (int*)(a3 + 4 * v8);
      v8 += 4LL;
      *v9 = v20;
      v9[1] = v19;
      v9[2] = v18;
      v9[3] = v17;
      if (v20 <= v19) {
        v10 = v19;
      }
      else {
        v10 = v20;
      }
      if (v18 <= v17) {
        v11 = v17;
      }
      else {
        v11 = v18;
      }
      if (v10 <= v11) {
        v10 = v11;
      }
      if ((int)result <= v10) {
        result = (unsigned int)v10;
      }
      else {
        result = (unsigned int)result;
      }
      if (v8 >= a5 - 3) {
        goto LABEL_31;
      }
    }
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = a1;
    v22 = v16;
  LABEL_22:
    v73 = *v21;
    v74 = *v22;
    v75 = v22[1];
    v76 = v20 + v73 * v13;
    v77 = v19 + v73 * v14;
    v78 = v18 + v73 * v15;
    v79 = v17 + v74 * v73;
    v80 = v21[1];
    v81 = v22[2];
    v82 = v21[3];
    v23 = *v22;
    v13 = v22[1];
    v83 = v76 + v80 * v14;
    v84 = v77 + v80 * v15;
    v85 = v78 + v80 * v74;
    v86 = v79 + v75 * v80;
    v87 = v21[2];
    v14 = v22[2];
    v21 += 4;
    v88 = v83 + v87 * v15;
    v89 = v84 + v87 * v74;
    v90 = v85 + v87 * v75;
    v91 = v86 + v81 * v87;
    v16 = v22 + 4;
    v92 = v22[3];
    v20 = v88 + v82 * v74;
    v19 = v89 + v82 * v75;
    v24 = a4 & 0x7FFFFFFC;
    v15 = v92;
    v18 = v90 + v82 * v81;
    v17 = v91 + v92 * v82;
    goto LABEL_23;
  }
  result = 1;
  LODWORD(v8) = 0;
LABEL_31:
  if ((int)v8 < (int)a5) {
    v103 = (unsigned int)v8;
    if (a4 > 0) {
      v104 = a2 + 2LL * (unsigned int)v8;
      v105 = a5;
      v106 = (__int16*)(v104 + 8);
      while ((unsigned int)a4 >= 8) {
        v109 = 0;
        v108 = 0;
        v110 = a1 + 4;
        v111 = v106;
        do {
          v109 -= 8;
          v112 = v108 + *(v111 - 4) * *(v110 - 4) + *(v111 - 3) * *(v110 - 3) +
                 *(v111 - 2) * *(v110 - 2) + *(v111 - 1) * *(v110 - 1) +
                 *v111 * *v110 + v111[1] * v110[1] + v111[2] * v110[2];
          v113 = v110[3];
          v114 = v111[3];
          v111 += 8;
          v110 += 8;
          v108 = v112 + v114 * v113;
        } while (-(__int64)(a4 & 0x7FFFFFF8) != v109);
        v107 = -v109;
        if ((a4 & 7) != 0) {
          goto LABEL_44;
        }
      LABEL_34:
        *(_DWORD*)(a3 + 4 * v103++) = v108;
        ++v106;
        v104 += 2;
        if ((int)result <= v108) {
          result = (unsigned int)v108;
        }
        else {
          result = (unsigned int)result;
        }
        if (v103 == v105) {
          return result;
        }
      }
      v107 = 0;
      v108 = 0;
      if ((a4 & 7) == 0) {
        goto LABEL_34;
      }
    LABEL_44:
      v115 = (__int16*)(v104 + 2 * v107);
      v116 = &a1[v107];
      v117 = a4 & 7;
      do {
        v119 = *v116++;
        v118 = v119;
        v120 = *v115++;
        --v117;
        v108 += v120 * v118;
      } while (v117 != 0);
      goto LABEL_34;
    }
    v121 = result;
    MovieRoutine_82ce0(a3 + 4LL * (unsigned int)v8, 0,
                       4LL * (a5 + ~(_DWORD)v8) + 4);
    v123 = (a5 - (unsigned int)v103) & 7LL;
    if (v123 != 0) {
      v124 = v103;
      LODWORD(result) = v121;
      do {
        result = (unsigned int)result & ~((int)result >> 31);
        ++v124;
        --v123;
      } while (v123 != 0);
      if (v103 - (unsigned __int64)a5 > 0xFFFFFFFFFFFFFFF8LL) {
        return result;
      }
    }
    else {
      v124 = v103;
      result = v121;
      if (v103 - (unsigned __int64)a5 > 0xFFFFFFFFFFFFFFF8LL) {
        return result;
      }
    }
    v125 = a5 - v124;
    do {
      result = (unsigned int)result & ~((int)result >> 31);
      v125 -= 8;
    } while (v125 != 0);
  }
  return result;
}

__int64 MovieHr_3e6a0(__int64 result, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  __int16 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  char v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  _WORD* v41;
  unsigned int v42;
  _WORD* v43;
  unsigned int v44;
  _WORD* v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int16* v61;
  int v62;
  int v63;
  int v64;
  __int16* v65;
  unsigned int v66;
  int v67;
  int v68;
  int v69;
  unsigned int v70;
  __int16* v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  unsigned int v102;
  __int16* v103;
  int v104;
  __int16* v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  _WORD* v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int16* v126;
  int v127;
  int v128;
  int v129;
  int v130;
  unsigned int v131;
  unsigned int v132;
  __int16* v133;
  int v134;
  __int16* v135;
  __int16* v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  unsigned int v153;
  int v154;
  unsigned int v155;
  __int64 v156;
  __int64 v157;
  __int16* v158;
  int v159;
  __int16* v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  _WORD* v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  __int16* v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  __int64 v191;
  int v192;
  __int16* v193;
  __int16* v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  _WORD* v211;
  unsigned int v212;
  _WORD* v213;
  unsigned int v214;
  _WORD* v215;
  int v216;
  int v217;
  int v218;
  int v219;
  int v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  __int16* v231;
  int v232;
  int v233;
  int v234;
  __int16* v235;
  unsigned int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  __int16* v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  int v272;
  int v273;
  unsigned int v274;
  int v275;
  unsigned int v276;
  __int64 v277;
  _WORD* v278;
  unsigned int v279;
  _WORD* v280;
  unsigned int v281;
  _WORD* v282;
  int v283;
  int v284;
  int v285;
  int v286;
  int v287;
  int v288;
  int v289;
  int v290;
  int v291;
  int v292;
  int v293;
  int v294;
  int v295;
  int v296;
  int v297;
  __int16* v298;
  int v299;
  int v300;
  int v301;
  __int16* v302;
  unsigned int v303;
  int v304;
  int v305;
  int v306;
  unsigned int v307;
  __int16* v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  int v316;
  int v317;
  int v318;
  int v319;
  int v320;
  int v321;
  int v322;
  int v323;
  int v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  int v336;
  int v337;
  int v338;
  unsigned int v339;

  if (a2 > 2 * a5 && a6 != 0) {
    v9 = result;
    v10 = (a2 << 16 >> 1) - (__int16)a2;
    v11 = a2 + MovieData_a5d60[a6 - 1] * a5;
    v12 = (v10 >> 16) * ((unsigned int)MovieRoutine_39a30(v11) >> 16);
    v13 = (((unsigned int)(unsigned __int16)MovieRoutine_39a30(v11) *
            (v10 >> 16)) >>
           15) +
          2 * v12;
    v14 = (__int16)(v13 + ((((int)MovieRoutine_39a30(v11) >> 16) *
                            (unsigned int)(unsigned __int16)v10) >>
                           15));
    v15 = (unsigned int)(v14 * v14) >> 16;
    v16 = MovieRoutine_39bf0(v15);
    result = MovieRoutine_39bf0(v15 ^ 0x7FFF);
    if (a2 >= 8 * a4) {
      v17 = 0;
      v18 = a4;
      do {
        v19 = v17 + 2;
        ++v17;
        v20 = (a4 >> 2) + v18 * v19;
        v18 += a4;
      } while (v20 < a2);
    }
    else {
      v17 = 0;
    }
    if (a4 >= 1) {
      v21 = a2 / (unsigned int)a4;
      v22 = v16;
      v23 = (__int16)result;
      v24 = v17;
      v25 = 2 * v17;
      v26 = (unsigned int)a4;
      v27 = (__int16)-v16;
      v28 = (__int16)-(__int16)result;
      v29 = (unsigned int)(v21 - 3);
      v30 = v21 - 2;
      v31 = v21 - v17;
      v32 = (unsigned int)(v21 + ~(2 * v17));
      v33 = v21;
      v34 = 2LL * v21;
      v35 = v21 - 1;
      v36 = 2 * v29;
      if ((a3 & 0x80000000) == 0) {
        if (v17 != 0) {
          v37 = v9 + v36;
          result = 0;
          v38 = v17 - v21;
          v39 = v24;
          v40 = v37 + 2;
          while (1) {
            v41 = (_WORD*)(v9 + 2 * result * v21);
            if (v21 >= 2) {
              LOWORD(v42) = *v41;
              if (v30 >= 7) {
                v44 = v35 & 0xFFFFFFF8;
                v45 = (_WORD*)(v9 + 2 * result * v21);
                v43 = v45;
                do {
                  v46 = (__int16)v45[1];
                  v44 -= 8;
                  v47 = (__int16)((v46 * v22 + (__int16)v42 * v28 + 0x4000) >>
                                  15);
                  *v45 =
                      (unsigned int)(v46 * v23 + (__int16)v42 * v22 + 0x4000) >>
                      15;
                  v48 = (__int16)v45[2];
                  v49 = (__int16)((v48 * v22 + v47 * v28 + 0x4000) >> 15);
                  v45[1] = (unsigned int)(v48 * v23 + v47 * v22 + 0x4000) >> 15;
                  v50 = (__int16)v45[3];
                  v51 = (__int16)((v50 * v22 + v49 * v28 + 0x4000) >> 15);
                  v45[2] = (unsigned int)(v50 * v23 + v49 * v22 + 0x4000) >> 15;
                  v52 = (__int16)v45[4];
                  v53 = (__int16)((v52 * v22 + v51 * v28 + 0x4000) >> 15);
                  v45[3] = (unsigned int)(v52 * v23 + v51 * v22 + 0x4000) >> 15;
                  v54 = (__int16)v45[5];
                  v55 = (__int16)((v54 * v22 + v53 * v28 + 0x4000) >> 15);
                  v45[4] = (unsigned int)(v54 * v23 + v53 * v22 + 0x4000) >> 15;
                  v56 = (__int16)v45[6];
                  v57 = (__int16)((v56 * v22 + v55 * v28 + 0x4000) >> 15);
                  v45[5] = (unsigned int)(v56 * v23 + v55 * v22 + 0x4000) >> 15;
                  v58 = (__int16)v45[7];
                  v59 = (__int16)v43[8];
                  v43 += 8;
                  v60 = (__int16)((v58 * v22 + v57 * v28 + 0x4000) >> 15);
                  v45[6] = (unsigned int)(v58 * v23 + v57 * v22 + 0x4000) >> 15;
                  v42 = (unsigned int)(v59 * v22 + v60 * v28 + 0x4000) >> 15;
                  *v43 = v42;
                  v45[7] = (unsigned int)(v59 * v23 + v60 * v22 + 0x4000) >> 15;
                  v45 = v43;
                } while (v44 != 0);
              }
              else {
                v43 = (_WORD*)(v9 + 2 * result * v21);
              }
              if ((v35 & 7) != 0) {
                v61 = v43 + 1;
                v62 = v35 & 7;
                do {
                  v63 = *v61;
                  v64 = (__int16)v42;
                  --v62;
                  v42 =
                      (unsigned int)(v63 * v22 + (__int16)v42 * v28 + 0x4000) >>
                      15;
                  *v61 = v42;
                  *(v61++ - 1) =
                      (unsigned int)(v63 * v23 + v64 * v22 + 0x4000) >> 15;
                } while (v62 != 0);
              }
            }
            if ((v29 & 0x80000000) == 0) {
              v65 = &v41[v29];
              LOWORD(v66) = *(_WORD*)(v40 + v34 * result);
              if ((v30 & 7) == 0) {
                v68 = v21 - 3;
                v71 = &v41[v29];
                if ((unsigned int)v29 < 7) {
                  goto LABEL_29;
                }
              LABEL_27:
                v72 = v68 + 1;
                do {
                  v73 = *v71;
                  v72 -= 8;
                  v74 = (__int16)v66 * v22 + v73 * v28;
                  v75 = (__int16)v66 * v23 + v73 * v22;
                  v76 = *(v71 - 1);
                  v77 = (__int16)((v75 + 0x4000) >> 15);
                  v71[1] = (unsigned int)(v74 + 0x4000) >> 15;
                  v78 = v77 * v22 + v76 * v28;
                  v79 = v77 * v23 + v76 * v22;
                  v80 = *(v71 - 2);
                  v81 = (__int16)((v79 + 0x4000) >> 15);
                  *v71 = (unsigned int)(v78 + 0x4000) >> 15;
                  v82 = v81 * v22 + v80 * v28;
                  v83 = v81 * v23 + v80 * v22;
                  v84 = *(v71 - 3);
                  v85 = (__int16)((v83 + 0x4000) >> 15);
                  *(v71 - 1) = (unsigned int)(v82 + 0x4000) >> 15;
                  v86 = v85 * v22 + v84 * v28;
                  v87 = v85 * v23 + v84 * v22;
                  v88 = *(v71 - 4);
                  v89 = (__int16)((v87 + 0x4000) >> 15);
                  *(v71 - 2) = (unsigned int)(v86 + 0x4000) >> 15;
                  v90 = v89 * v22 + v88 * v28;
                  v91 = v89 * v23 + v88 * v22;
                  v92 = *(v71 - 5);
                  v93 = (__int16)((v91 + 0x4000) >> 15);
                  *(v71 - 3) = (unsigned int)(v90 + 0x4000) >> 15;
                  v94 = v93 * v22 + v92 * v28;
                  v95 = v93 * v23 + v92 * v22;
                  v96 = *(v71 - 6);
                  v97 = (__int16)((v95 + 0x4000) >> 15);
                  *(v71 - 4) = (unsigned int)(v94 + 0x4000) >> 15;
                  v98 = v97 * v22 + v96 * v28;
                  v99 = v97 * v23 + v96 * v22;
                  v100 = *(v71 - 7);
                  v101 = (__int16)((v99 + 0x4000) >> 15);
                  *(v71 - 5) = (unsigned int)(v98 + 0x4000) >> 15;
                  v102 = (unsigned int)(v101 * v22 + v100 * v28 + 0x4000) >> 15;
                  v66 = (unsigned int)(v101 * v23 + v100 * v22 + 0x4000) >> 15;
                  *(v71 - 6) = v102;
                  *(v71 - 7) = v66;
                  v71 -= 8;
                } while (v72 != 0);
                goto LABEL_29;
              }
              v67 = v30 & 7;
              v68 = v29;
              do {
                v69 = *v65;
                --v68;
                --v67;
                v70 = (unsigned int)((__int16)v66 * v22 + v69 * v28 + 0x4000) >>
                      15;
                v66 = (unsigned int)((__int16)v66 * v23 + v69 * v22 + 0x4000) >>
                      15;
                v71 = v65 - 1;
                v65[1] = v70;
                *v65-- = v66;
              } while (v67 != 0);
              if ((unsigned int)v29 >= 7) {
                goto LABEL_27;
              }
            }
          LABEL_29:
            if (v31 >= 1) {
              if (v38 <= 0xFFFFFFF8) {
                v104 = v31 & 0x7FFFFFF8;
                v105 = (__int16*)(v9 + 2 * result * v21);
                do {
                  v106 = v105[v39];
                  v107 = *v105;
                  v104 -= 8;
                  v105[v39] =
                      (unsigned int)(v106 * v23 + v107 * v27 + 0x4000) >> 15;
                  *v105 =
                      (unsigned int)(v106 * v22 + v107 * v23 + 0x4000) >> 15;
                  v108 = v105[1];
                  v109 = v105[v39 + 1];
                  v105[v39 + 1] =
                      (unsigned int)(v109 * v23 + v108 * v27 + 0x4000) >> 15;
                  v105[1] =
                      (unsigned int)(v109 * v22 + v108 * v23 + 0x4000) >> 15;
                  v110 = v105[2];
                  v111 = v105[v39 + 2];
                  v105[v39 + 2] =
                      (unsigned int)(v111 * v23 + v110 * v27 + 0x4000) >> 15;
                  v105[2] =
                      (unsigned int)(v111 * v22 + v110 * v23 + 0x4000) >> 15;
                  v112 = v105[3];
                  v113 = v105[v39 + 3];
                  v105[v39 + 3] =
                      (unsigned int)(v113 * v23 + v112 * v27 + 0x4000) >> 15;
                  v105[3] =
                      (unsigned int)(v113 * v22 + v112 * v23 + 0x4000) >> 15;
                  v114 = v105[4];
                  v115 = v105[v39 + 4];
                  v105[v39 + 4] =
                      (unsigned int)(v115 * v23 + v114 * v27 + 0x4000) >> 15;
                  v105[4] =
                      (unsigned int)(v115 * v22 + v114 * v23 + 0x4000) >> 15;
                  v116 = v105[5];
                  v117 = v105[v39 + 5];
                  v105[v39 + 5] =
                      (unsigned int)(v117 * v23 + v116 * v27 + 0x4000) >> 15;
                  v105[5] =
                      (unsigned int)(v117 * v22 + v116 * v23 + 0x4000) >> 15;
                  v118 = v105[6];
                  v119 = v105[v39 + 6];
                  v105[v39 + 6] =
                      (unsigned int)(v119 * v23 + v118 * v27 + 0x4000) >> 15;
                  v105[6] =
                      (unsigned int)(v119 * v22 + v118 * v23 + 0x4000) >> 15;
                  v121 = v105[7];
                  v120 = v105 + 7;
                  v122 = (__int16)v120[v39];
                  v103 = v120 + 1;
                  v120[v39] =
                      (unsigned int)(v122 * v23 + v121 * v27 + 0x4000) >> 15;
                  *v120 =
                      (unsigned int)(v122 * v22 + v121 * v23 + 0x4000) >> 15;
                  v105 = v120 + 1;
                } while (v104 != 0);
              }
              else {
                v103 = (__int16*)(v9 + 2 * result * v21);
              }
              if ((v31 & 7) != 0) {
                v123 = v31 & 7;
                do {
                  v124 = v103[v39];
                  v125 = *v103;
                  --v123;
                  v103[v39] =
                      (unsigned int)(v124 * v23 + v125 * v27 + 0x4000) >> 15;
                  *v103++ =
                      (unsigned int)(v124 * v22 + v125 * v23 + 0x4000) >> 15;
                } while (v123 != 0);
              }
            }
            if ((v32 & 0x80000000) != 0) {
              goto LABEL_11;
            }
            v126 = &v41[v32];
            if ((((_BYTE)v21 - v25) & 7) != 0) {
              v127 = ((_BYTE)v21 - v25) & 7;
              v128 = v32;
              do {
                v129 = v126[v39];
                v130 = *v126;
                --v128;
                --v127;
                v131 = (unsigned int)(v129 * v23 + v130 * v27 + 0x4000) >> 15;
                v132 = (unsigned int)(v129 * v22 + v130 * v23 + 0x4000) >> 15;
                v133 = v126 - 1;
                v126[v39] = v131;
                *v126-- = v132;
              } while (v127 != 0);
              if ((unsigned int)v32 < 7) {
                goto LABEL_11;
              }
            LABEL_44:
              v134 = v128 + 1;
              v135 = v133 - 3;
              do {
                v136 = &v135[v39];
                v137 = v135[3];
                v134 -= 8;
                v138 = v135[v39 + 3];
                v135[3] =
                    (unsigned int)(v138 * v22 + v137 * v23 + 0x4000) >> 15;
                v136[3] =
                    (unsigned int)(v138 * v23 + v137 * v27 + 0x4000) >> 15;
                v139 = v135[v39 + 2];
                v140 = v135[2];
                v135[2] =
                    (unsigned int)(v139 * v22 + v140 * v23 + 0x4000) >> 15;
                v136[2] =
                    (unsigned int)(v139 * v23 + v140 * v27 + 0x4000) >> 15;
                v141 = v135[v39 + 1];
                v142 = v135[1];
                v135[1] =
                    (unsigned int)(v141 * v22 + v142 * v23 + 0x4000) >> 15;
                v136[1] =
                    (unsigned int)(v141 * v23 + v142 * v27 + 0x4000) >> 15;
                v143 = v135[v39];
                v144 = *v135;
                *v135 = (unsigned int)(v143 * v22 + v144 * v23 + 0x4000) >> 15;
                *v136 = (unsigned int)(v143 * v23 + v144 * v27 + 0x4000) >> 15;
                v145 = v135[v39 - 1];
                v146 = *(v135 - 1);
                *(v135 - 1) =
                    (unsigned int)(v145 * v22 + v146 * v23 + 0x4000) >> 15;
                *(v136 - 1) =
                    (unsigned int)(v145 * v23 + v146 * v27 + 0x4000) >> 15;
                v147 = v135[v39 - 2];
                v148 = *(v135 - 2);
                *(v135 - 2) =
                    (unsigned int)(v147 * v22 + v148 * v23 + 0x4000) >> 15;
                *(v136 - 2) =
                    (unsigned int)(v147 * v23 + v148 * v27 + 0x4000) >> 15;
                v149 = v135[v39 - 3];
                v150 = *(v135 - 3);
                *(v135 - 3) =
                    (unsigned int)(v149 * v22 + v150 * v23 + 0x4000) >> 15;
                *(v136 - 3) =
                    (unsigned int)(v149 * v23 + v150 * v27 + 0x4000) >> 15;
                v151 = v135[v39 - 4];
                v152 = *(v135 - 4);
                *(v136 - 4) =
                    (unsigned int)(v151 * v23 + v152 * v27 + 0x4000) >> 15;
                *(v135 - 4) =
                    (unsigned int)(v151 * v22 + v152 * v23 + 0x4000) >> 15;
                v135 -= 8;
              } while (v134 != 0);
              goto LABEL_11;
            }
            v128 = v32;
            v133 = v126;
            if ((unsigned int)v32 >= 7) {
              goto LABEL_44;
            }
          LABEL_11:
            if (++result == v26) {
              return result;
            }
          }
        }
        v275 = v35 & 7;
        v276 = v35 & 0xFFFFFFF8;
        v277 = 0;
        result = v9 + v36 + 2;
        while (1) {
          v278 = (_WORD*)(v9 + 2 * v277 * v33);
          if ((int)v33 >= 2) {
            LOWORD(v279) = *v278;
            if (v30 >= 7) {
              v281 = v276;
              v282 = (_WORD*)(v9 + 2 * v277 * v33);
              v280 = v282;
              do {
                v283 = (__int16)v282[1];
                v281 -= 8;
                v284 = (__int16)((v283 * v16 + (__int16)v279 * v28 + 0x4000) >>
                                 15);
                *v282 =
                    (unsigned int)(v283 * v23 + (__int16)v279 * v16 + 0x4000) >>
                    15;
                v285 = (__int16)v282[2];
                v286 = (__int16)((v285 * v16 + v284 * v28 + 0x4000) >> 15);
                v282[1] =
                    (unsigned int)(v285 * v23 + v284 * v16 + 0x4000) >> 15;
                v287 = (__int16)v282[3];
                v288 = (__int16)((v287 * v16 + v286 * v28 + 0x4000) >> 15);
                v282[2] =
                    (unsigned int)(v287 * v23 + v286 * v16 + 0x4000) >> 15;
                v289 = (__int16)v282[4];
                v290 = (__int16)((v289 * v16 + v288 * v28 + 0x4000) >> 15);
                v282[3] =
                    (unsigned int)(v289 * v23 + v288 * v16 + 0x4000) >> 15;
                v291 = (__int16)v282[5];
                v292 = (__int16)((v291 * v16 + v290 * v28 + 0x4000) >> 15);
                v282[4] =
                    (unsigned int)(v291 * v23 + v290 * v16 + 0x4000) >> 15;
                v293 = (__int16)v282[6];
                v294 = (__int16)((v293 * v16 + v292 * v28 + 0x4000) >> 15);
                v282[5] =
                    (unsigned int)(v293 * v23 + v292 * v16 + 0x4000) >> 15;
                v295 = (__int16)v282[7];
                v296 = (__int16)v280[8];
                v280 += 8;
                v297 = (__int16)((v295 * v16 + v294 * v28 + 0x4000) >> 15);
                v282[6] =
                    (unsigned int)(v295 * v23 + v294 * v16 + 0x4000) >> 15;
                v279 = (unsigned int)(v296 * v16 + v297 * v28 + 0x4000) >> 15;
                *v280 = v279;
                v282[7] =
                    (unsigned int)(v296 * v23 + v297 * v16 + 0x4000) >> 15;
                v282 = v280;
              } while (v281 != 0);
            }
            else {
              v280 = (_WORD*)(v9 + 2 * v277 * v33);
            }
            if (v275 != 0) {
              v298 = v280 + 1;
              v299 = v275;
              do {
                v300 = *v298;
                v301 = (__int16)v279;
                --v299;
                v279 =
                    (unsigned int)(v300 * v16 + (__int16)v279 * v28 + 0x4000) >>
                    15;
                *v298 = v279;
                *(v298++ - 1) =
                    (unsigned int)(v300 * v23 + v301 * v16 + 0x4000) >> 15;
              } while (v299 != 0);
            }
          }
          if ((v29 & 0x80000000) == 0) {
            v302 = &v278[v29];
            LOWORD(v303) = *(_WORD*)(result + v34 * v277);
            if ((v30 & 7) != 0) {
              break;
            }
            v305 = v29;
            v308 = &v278[v29];
            if ((unsigned int)v29 >= 7) {
              goto LABEL_102;
            }
          }
        LABEL_86:
          if (++v277 == v26) {
            return result;
          }
        }
        v304 = v30 & 7;
        v305 = v29;
        do {
          v306 = *v302;
          --v305;
          --v304;
          v307 =
              (unsigned int)((__int16)v303 * v16 + v306 * v28 + 0x4000) >> 15;
          v303 =
              (unsigned int)((__int16)v303 * v23 + v306 * v16 + 0x4000) >> 15;
          v308 = v302 - 1;
          v302[1] = v307;
          *v302-- = v303;
        } while (v304 != 0);
        if ((unsigned int)v29 < 7) {
          goto LABEL_86;
        }
      LABEL_102:
        v309 = v305 + 1;
        do {
          v310 = *v308;
          v309 -= 8;
          v311 = (__int16)v303 * v16 + v310 * v28;
          v312 = (__int16)v303 * v23 + v310 * v16;
          v313 = *(v308 - 1);
          v314 = (__int16)((v312 + 0x4000) >> 15);
          v308[1] = (unsigned int)(v311 + 0x4000) >> 15;
          v315 = v314 * v16 + v313 * v28;
          v316 = v314 * v23 + v313 * v16;
          v317 = *(v308 - 2);
          v318 = (__int16)((v316 + 0x4000) >> 15);
          *v308 = (unsigned int)(v315 + 0x4000) >> 15;
          v319 = v318 * v16 + v317 * v28;
          v320 = v318 * v23 + v317 * v16;
          v321 = *(v308 - 3);
          v322 = (__int16)((v320 + 0x4000) >> 15);
          *(v308 - 1) = (unsigned int)(v319 + 0x4000) >> 15;
          v323 = v322 * v16 + v321 * v28;
          v324 = v322 * v23 + v321 * v16;
          v325 = *(v308 - 4);
          v326 = (__int16)((v324 + 0x4000) >> 15);
          *(v308 - 2) = (unsigned int)(v323 + 0x4000) >> 15;
          v327 = v326 * v16 + v325 * v28;
          v328 = v326 * v23 + v325 * v16;
          v329 = *(v308 - 5);
          v330 = (__int16)((v328 + 0x4000) >> 15);
          *(v308 - 3) = (unsigned int)(v327 + 0x4000) >> 15;
          v331 = v330 * v16 + v329 * v28;
          v332 = v330 * v23 + v329 * v16;
          v333 = *(v308 - 6);
          v334 = (__int16)((v332 + 0x4000) >> 15);
          *(v308 - 4) = (unsigned int)(v331 + 0x4000) >> 15;
          v335 = v334 * v16 + v333 * v28;
          v336 = v334 * v23 + v333 * v16;
          v337 = *(v308 - 7);
          v338 = (__int16)((v336 + 0x4000) >> 15);
          *(v308 - 5) = (unsigned int)(v335 + 0x4000) >> 15;
          v339 = (unsigned int)(v338 * v16 + v337 * v28 + 0x4000) >> 15;
          v303 = (unsigned int)(v338 * v23 + v337 * v16 + 0x4000) >> 15;
          *(v308 - 6) = v339;
          *(v308 - 7) = v303;
          v308 -= 8;
        } while (v309 != 0);
        goto LABEL_86;
      }
      v153 = v35 - v17;
      result = 0;
      v154 = v35 & 7;
      v155 = v35 & 0xFFFFFFF8;
      v156 = v17;
      do {
        v157 = result * v33;
        if (v17 != 0) {
          if (v31 >= 1) {
            if (v153 >= 7) {
              v159 = v31 & 0x7FFFFFF8;
              v160 = (__int16*)(v9 + 2 * v157);
              do {
                v161 = v160[v17];
                v162 = *v160;
                v159 -= 8;
                v160[v17] =
                    (unsigned int)(v161 * v23 + v162 * v22 + 0x4000) >> 15;
                *v160 = (unsigned int)(v161 * v27 + v162 * v23 + 0x4000) >> 15;
                v163 = v160[1];
                v164 = v160[v17 + 1];
                v160[v17 + 1] =
                    (unsigned int)(v164 * v23 + v163 * v22 + 0x4000) >> 15;
                v165 = v164 * v27 + v163 * v23;
                v166 = v160[2];
                v160[1] = (unsigned int)(v165 + 0x4000) >> 15;
                v167 = v160[v17 + 2];
                v160[v17 + 2] =
                    (unsigned int)(v167 * v23 + v166 * v22 + 0x4000) >> 15;
                v160[2] =
                    (unsigned int)(v167 * v27 + v166 * v23 + 0x4000) >> 15;
                v168 = v160[3];
                v169 = v160[v17 + 3];
                v160[v17 + 3] =
                    (unsigned int)(v169 * v23 + v168 * v22 + 0x4000) >> 15;
                v160[3] =
                    (unsigned int)(v169 * v27 + v168 * v23 + 0x4000) >> 15;
                v170 = v160[4];
                v171 = v160[v17 + 4];
                v160[v17 + 4] =
                    (unsigned int)(v171 * v23 + v170 * v22 + 0x4000) >> 15;
                v160[4] =
                    (unsigned int)(v171 * v27 + v170 * v23 + 0x4000) >> 15;
                v172 = v160[5];
                v173 = v160[v17 + 5];
                v160[v17 + 5] =
                    (unsigned int)(v173 * v23 + v172 * v22 + 0x4000) >> 15;
                v160[5] =
                    (unsigned int)(v173 * v27 + v172 * v23 + 0x4000) >> 15;
                v174 = v160[6];
                v175 = v160[v17 + 6];
                v160[v17 + 6] =
                    (unsigned int)(v175 * v23 + v174 * v22 + 0x4000) >> 15;
                v160[6] =
                    (unsigned int)(v175 * v27 + v174 * v23 + 0x4000) >> 15;
                v177 = v160[7];
                v176 = v160 + 7;
                v178 = (__int16)v176[v17];
                v179 = v178 * v23;
                v180 = v178 * v27 + v177 * v23;
                v158 = v176 + 1;
                v176[v17] = (unsigned int)(v179 + v177 * v22 + 0x4000) >> 15;
                *v176 = (unsigned int)(v180 + 0x4000) >> 15;
                v160 = v176 + 1;
              } while (v159 != 0);
            }
            else {
              v158 = (__int16*)(v9 + 2 * v157);
            }
            if ((v31 & 7) != 0) {
              v181 = v31 & 7;
              do {
                v182 = v158[v17];
                v183 = *v158;
                --v181;
                v158[v17] =
                    (unsigned int)(v182 * v23 + v183 * v22 + 0x4000) >> 15;
                *v158++ =
                    (unsigned int)(v182 * v27 + v183 * v23 + 0x4000) >> 15;
              } while (v181 != 0);
            }
          }
          if ((v32 & 0x80000000) == 0) {
            v184 = (__int16*)(v9 + 2 * v157 + 2 * v32);
            if ((((_BYTE)v33 - v25) & 7) != 0) {
              v185 = ((_BYTE)v33 - v25) & 7;
              v186 = v32;
              do {
                v187 = v184[v17];
                v188 = *v184;
                --v186;
                --v185;
                v189 = v187 * v23 + v188 * v22;
                v190 = v187 * v27 + v188 * v23;
                v191 = (__int64)(v184 - 1);
                v184[v17] = (unsigned int)(v189 + 0x4000) >> 15;
                *v184-- = (unsigned int)(v190 + 0x4000) >> 15;
              } while (v185 != 0);
              if ((unsigned int)v32 < 7) {
                goto LABEL_67;
              }
            LABEL_65:
              v192 = v186 + 1;
              v193 = (__int16*)(v191 - 6);
              do {
                v194 = &v193[v156];
                v195 = v193[3];
                v192 -= 8;
                v196 = v193[v156 + 3];
                v193[3] =
                    (unsigned int)(v196 * v27 + v195 * v23 + 0x4000) >> 15;
                v194[3] =
                    (unsigned int)(v196 * v23 + v195 * v22 + 0x4000) >> 15;
                v197 = v193[v156 + 2];
                v198 = v193[2];
                v193[2] =
                    (unsigned int)(v197 * v27 + v198 * v23 + 0x4000) >> 15;
                v194[2] =
                    (unsigned int)(v197 * v23 + v198 * v22 + 0x4000) >> 15;
                v199 = v193[v156 + 1];
                v200 = v193[1];
                v193[1] =
                    (unsigned int)(v199 * v27 + v200 * v23 + 0x4000) >> 15;
                v194[1] =
                    (unsigned int)(v199 * v23 + v200 * v22 + 0x4000) >> 15;
                v201 = v193[v17];
                v202 = *v193;
                *v193 = (unsigned int)(v201 * v27 + v202 * v23 + 0x4000) >> 15;
                *v194 = (unsigned int)(v201 * v23 + v202 * v22 + 0x4000) >> 15;
                v203 = v193[v156 - 1];
                v204 = *(v193 - 1);
                *(v193 - 1) =
                    (unsigned int)(v203 * v27 + v204 * v23 + 0x4000) >> 15;
                *(v194 - 1) =
                    (unsigned int)(v203 * v23 + v204 * v22 + 0x4000) >> 15;
                v205 = v193[v156 - 2];
                v206 = *(v193 - 2);
                *(v193 - 2) =
                    (unsigned int)(v205 * v27 + v206 * v23 + 0x4000) >> 15;
                *(v194 - 2) =
                    (unsigned int)(v205 * v23 + v206 * v22 + 0x4000) >> 15;
                v207 = v193[v156 - 3];
                v208 = *(v193 - 3);
                *(v193 - 3) =
                    (unsigned int)(v207 * v27 + v208 * v23 + 0x4000) >> 15;
                *(v194 - 3) =
                    (unsigned int)(v207 * v23 + v208 * v22 + 0x4000) >> 15;
                v209 = v193[v156 - 4];
                v210 = *(v193 - 4);
                *(v194 - 4) =
                    (unsigned int)(v209 * v23 + v210 * v22 + 0x4000) >> 15;
                *(v193 - 4) =
                    (unsigned int)(v209 * v27 + v210 * v23 + 0x4000) >> 15;
                v193 -= 8;
              } while (v192 != 0);
              goto LABEL_67;
            }
            v186 = v32;
            v191 = v9 + 2 * v157 + 2 * v32;
            if ((unsigned int)v32 >= 7) {
              goto LABEL_65;
            }
          }
        }
      LABEL_67:
        v211 = (_WORD*)(v9 + 2 * v157);
        if ((int)v33 >= 2) {
          LOWORD(v212) = *v211;
          if (v30 >= 7) {
            v214 = v155;
            v215 = v211;
            v213 = v211;
            do {
              v216 = (__int16)v215[1];
              v214 -= 8;
              v217 =
                  (__int16)((v216 * v22 + (__int16)v212 * v23 + 0x4000) >> 15);
              *v215 =
                  (unsigned int)(v216 * v28 + (__int16)v212 * v22 + 0x4000) >>
                  15;
              v218 = (__int16)v215[2];
              v219 = (__int16)((v218 * v22 + v217 * v23 + 0x4000) >> 15);
              v215[1] = (unsigned int)(v218 * v28 + v217 * v22 + 0x4000) >> 15;
              v220 = (__int16)v215[3];
              v221 = (__int16)((v220 * v22 + v219 * v23 + 0x4000) >> 15);
              v215[2] = (unsigned int)(v220 * v28 + v219 * v22 + 0x4000) >> 15;
              v222 = (__int16)v215[4];
              v223 = (__int16)((v222 * v22 + v221 * v23 + 0x4000) >> 15);
              v215[3] = (unsigned int)(v222 * v28 + v221 * v22 + 0x4000) >> 15;
              v224 = (__int16)v215[5];
              v225 = (__int16)((v224 * v22 + v223 * v23 + 0x4000) >> 15);
              v215[4] = (unsigned int)(v224 * v28 + v223 * v22 + 0x4000) >> 15;
              v226 = (__int16)v215[6];
              v227 = (__int16)((v226 * v22 + v225 * v23 + 0x4000) >> 15);
              v215[5] = (unsigned int)(v226 * v28 + v225 * v22 + 0x4000) >> 15;
              v228 = (__int16)v215[7];
              v229 = (__int16)((v228 * v22 + v227 * v23 + 0x4000) >> 15);
              v215[6] = (unsigned int)(v228 * v28 + v227 * v22 + 0x4000) >> 15;
              v230 = (__int16)v213[8];
              v213 += 8;
              v212 = (unsigned int)(v230 * v22 + v229 * v23 + 0x4000) >> 15;
              *v213 = v212;
              v215[7] = (unsigned int)(v230 * v28 + v229 * v22 + 0x4000) >> 15;
              v215 = v213;
            } while (v214 != 0);
          }
          else {
            v213 = v211;
          }
          if (v154 != 0) {
            v231 = v213 + 1;
            v232 = v154;
            do {
              v233 = *v231;
              v234 = (__int16)v212;
              --v232;
              v212 =
                  (unsigned int)(v233 * v22 + (__int16)v212 * v23 + 0x4000) >>
                  15;
              *v231 = v212;
              *(v231++ - 1) =
                  (unsigned int)(v233 * v28 + v234 * v22 + 0x4000) >> 15;
            } while (v232 != 0);
          }
        }
        if ((v29 & 0x80000000) != 0) {
          goto LABEL_48;
        }
        v235 = &v211[v29];
        LOWORD(v236) = *(_WORD*)(v9 + v36 + 2 + v34 * result);
        if ((v30 & 7) != 0) {
          v237 = v30 & 7;
          v238 = v29;
          do {
            v239 = *v235;
            v240 = (__int16)v236;
            --v238;
            --v237;
            v241 = (__int16)v236 * v22 + v239 * v23;
            v242 = v240 * v28 + v239 * v22;
            v243 = v235 - 1;
            v235[1] = (unsigned int)(v241 + 0x4000) >> 15;
            v236 = (unsigned int)(v242 + 0x4000) >> 15;
            *v235-- = v236;
          } while (v237 != 0);
          if ((unsigned int)v29 < 7) {
            goto LABEL_48;
          }
        LABEL_82:
          v244 = v238 + 1;
          do {
            v245 = *v243;
            v244 -= 8;
            v246 = (__int16)v236 * v22 + v245 * v23;
            v247 = (__int16)v236 * v28 + v245 * v22;
            v248 = *(v243 - 1);
            v249 = (__int16)((v247 + 0x4000) >> 15);
            v243[1] = (unsigned int)(v246 + 0x4000) >> 15;
            v250 = v249 * v22 + v248 * v23;
            v251 = v249 * v28 + v248 * v22;
            v252 = *(v243 - 2);
            v253 = (__int16)((v251 + 0x4000) >> 15);
            *v243 = (unsigned int)(v250 + 0x4000) >> 15;
            v254 = v253 * v22 + v252 * v23;
            v255 = v253 * v28 + v252 * v22;
            v256 = *(v243 - 3);
            v257 = (__int16)((v255 + 0x4000) >> 15);
            *(v243 - 1) = (unsigned int)(v254 + 0x4000) >> 15;
            v258 = v257 * v22 + v256 * v23;
            v259 = v257 * v28 + v256 * v22;
            v260 = *(v243 - 4);
            v261 = (__int16)((v259 + 0x4000) >> 15);
            *(v243 - 2) = (unsigned int)(v258 + 0x4000) >> 15;
            v262 = v261 * v22 + v260 * v23;
            v263 = v261 * v28 + v260 * v22;
            v264 = *(v243 - 5);
            v265 = (__int16)((v263 + 0x4000) >> 15);
            *(v243 - 3) = (unsigned int)(v262 + 0x4000) >> 15;
            v266 = v265 * v22 + v264 * v23;
            v267 = v265 * v28 + v264 * v22;
            v268 = *(v243 - 6);
            v269 = (__int16)((v267 + 0x4000) >> 15);
            *(v243 - 4) = (unsigned int)(v266 + 0x4000) >> 15;
            v270 = v269 * v22 + v268 * v23;
            v271 = v269 * v28 + v268 * v22;
            v272 = *(v243 - 7);
            v273 = (__int16)((v271 + 0x4000) >> 15);
            *(v243 - 5) = (unsigned int)(v270 + 0x4000) >> 15;
            v274 = (unsigned int)(v273 * v22 + v272 * v23 + 0x4000) >> 15;
            v236 = (unsigned int)(v273 * v28 + v272 * v22 + 0x4000) >> 15;
            *(v243 - 6) = v274;
            *(v243 - 7) = v236;
            v243 -= 8;
          } while (v244 != 0);
          goto LABEL_48;
        }
        v238 = v29;
        v243 = &v211[v29];
        if ((unsigned int)v29 >= 7) {
          goto LABEL_82;
        }
      LABEL_48:
        ++result;
      } while (result != v26);
    }
  }
  return result;
}

__int64 MovieHr_40c20(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int16* v11;
  __int16* v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int16* v30;
  __int16* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  __int16* v36;
  __int64 v37;
  int v38;
  int v39;
  __int16* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int16* v45;
  __int64 v46;
  int v47;
  int v48;
  __int16* v49;
  int v50;
  __int16 v51;
  __int16 v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  char v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;

  if (a3 == 0) {
    if (a4 < 1) {
      goto LABEL_10;
    }
    v8 = a4 & 7;
    if ((unsigned int)a4 >= 8) {
      v36 = (__int16*)(a1 + 8);
      v37 = 0;
      v10 = 0;
      do {
        v37 -= 8;
        v38 = v10 + *(v36 - 4) * *(v36 - 4) + *(v36 - 3) * *(v36 - 3) +
              *(v36 - 2) * *(v36 - 2) + *(v36 - 1) * *(v36 - 1) + *v36 * *v36 +
              v36[1] * v36[1] + v36[2] * v36[2];
        v39 = v36[3];
        v36 += 8;
        v10 = v38 + v39 * v39;
      } while (-(__int64)(a4 & 0x7FFFFFF8) != v37);
      v9 = -v37;
      if ((a4 & 7) == 0) {
      LABEL_22:
        if ((unsigned int)a4 >= 8) {
          v45 = (__int16*)(a2 + 8);
          v46 = 0;
          v44 = 0;
          do {
            v46 -= 8;
            v47 = v44 + *(v45 - 4) * *(v45 - 4) + *(v45 - 3) * *(v45 - 3) +
                  *(v45 - 2) * *(v45 - 2) + *(v45 - 1) * *(v45 - 1) +
                  *v45 * *v45 + v45[1] * v45[1] + v45[2] * v45[2];
            v48 = v45[3];
            v45 += 8;
            v44 = v47 + v48 * v48;
          } while (-(__int64)(a4 & 0x7FFFFFF8) != v46);
          v43 = -v46;
          if ((a4 & 7) == 0) {
            goto LABEL_30;
          }
        }
        else {
          v43 = 0;
          v44 = 0;
          if ((a4 & 7) == 0) {
          LABEL_30:
            v7 = v10 + 1;
            v6 = v44 + 1;
            goto LABEL_31;
          }
        }
        v49 = (__int16*)(a2 + 2 * v43);
        do {
          v50 = *v49++;
          --v8;
          v44 += v50 * v50;
        } while (v8 != 0);
        goto LABEL_30;
      }
    }
    else {
      v9 = 0;
      v10 = 0;
      if ((a4 & 7) == 0) {
        goto LABEL_22;
      }
    }
    v40 = (__int16*)(a1 + 2 * v9);
    v41 = a4 & 7;
    do {
      v42 = *v40++;
      --v41;
      v10 += v42 * v42;
    } while (v41 != 0);
    goto LABEL_22;
  }
  if (a4 < 1) {
  LABEL_10:
    v7 = 1;
    v6 = 1;
    goto LABEL_31;
  }
  v4 = a4 & 3;
  if ((unsigned int)a4 < 4) {
    v5 = 0;
    v6 = 1;
    v7 = 1;
    if ((a4 & 3) == 0) {
      goto LABEL_31;
    }
    goto LABEL_14;
  }
  v11 = (__int16*)(a1 + 4);
  v12 = (__int16*)(a2 + 4);
  v6 = 1;
  v13 = 0;
  v7 = 1;
  do {
    v13 -= 4;
    v14 = *(v11 - 2) >> 1;
    v15 = *(v12 - 2) >> 1;
    v16 = v15 + v14;
    v17 = v14 - v15;
    v18 = v7 + v16 * v16;
    v19 = *(v11 - 1) >> 1;
    v20 = *(v12 - 1) >> 1;
    v21 = v6 + v17 * v17 + (v19 - v20) * (v19 - v20);
    v22 = v18 + (v20 + v19) * (v20 + v19);
    v23 = *v12 >> 1;
    v24 = *v11 >> 1;
    v25 = v23 + v24;
    v26 = v24 - v23;
    v27 = v12[1];
    v12 += 4;
    v28 = v21 + v26 * v26;
    v29 = v11[1];
    v11 += 4;
    v27 >>= 1;
    v29 >>= 1;
    v7 = v22 + v25 * v25 + (v27 + v29) * (v27 + v29);
    v6 = v28 + (v29 - v27) * (v29 - v27);
  } while (-(__int64)(a4 & 0x7FFFFFFC) != v13);
  v5 = -v13;
  if ((a4 & 3) != 0) {
  LABEL_14:
    v30 = (__int16*)(a2 + 2 * v5);
    v31 = (__int16*)(a1 + 2 * v5);
    do {
      v33 = *v31++;
      v32 = v33;
      v34 = *v30++;
      --v4;
      v32 >>= 1;
      v35 = v34 >> 1;
      v7 += (v35 + v32) * (v35 + v32);
      v6 += (v32 - v35) * (v32 - v35);
    } while (v4 != 0);
  }
LABEL_31:
  v51 = MovieRoutine_39b40(v7);
  v52 = MovieRoutine_39b40(v6);
  v53 = v52;
  if (v52 >= v51) {
    v61 = v51 >> 1;
    v62 = v61 * ((int)MovieRoutine_39a30((unsigned int)v52) >> 16);
    v63 = (((unsigned __int16)MovieRoutine_39a30(v53) * v61) >> 15) + 2 * v62;
    v64 = v63 +
          ((((int)MovieRoutine_39a30(v53) >> 16) * ((v51 & 1) << 15)) >> 15);
    if (v64 >= 0x7FFF) {
      LOWORD(v64) = 0x7FFF;
    }
    v60 = 25736 - ((__int16)((((((((9872 * (__int16)v64 - 782663680) >> 16) *
                                      2 * (__int16)v64 -
                                  1343488) >>
                                 16) *
                                    2 * (__int16)v64 +
                                2147450880) >>
                               16) *
                                  (__int16)v64 +
                              0x4000) >>
                             15) >>
                   1);
  }
  else {
    v54 = v51;
    v55 = v52 >> 1;
    v56 = v52;
    v57 = v55 * ((int)MovieRoutine_39a30(v54) >> 16);
    v58 = (((unsigned __int16)MovieRoutine_39a30(v54) * v55) >> 15) + 2 * v57;
    v59 = v58 +
          ((((int)MovieRoutine_39a30(v54) >> 16) * ((v56 & 1) << 15)) >> 15);
    if (v59 >= 0x7FFF) {
      LOWORD(v59) = 0x7FFF;
    }
    v60 =
        (__int16)((unsigned int)(((((((9872 * (__int16)v59 - 782663680) >> 16) *
                                         2 * (__int16)v59 -
                                     1343488) >>
                                    16) *
                                       2 * (__int16)v59 +
                                   2147450880) >>
                                  16) *
                                     (__int16)v59 +
                                 0x4000) >>
                  15) >>
        1;
  }
  return (unsigned int)((20861 * (__int16)v60) >> 15);
}

__int64 MovieHr_41040(char* a1, unsigned int a2, unsigned int a3, char* a4,
                      __int64 a5, int a6, int* a7, _DWORD* a8, int a9,
                      unsigned int* a10, __int64 a11, __int64 a12, __int64 a13,
                      int a14, int a15, __int64 a16, int a17, int a18, int a19)
{
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  int v23;
  int v24;
  int v25;
  signed int v26;
  int v27;
  unsigned __int64 v28;
  char* v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  int v37;
  char v38;
  __int16 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int16* v49;
  int v50;
  int v51;
  int v52;
  int* v53;
  char* v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  __int64 v74;
  char* v75;
  int v76;
  __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  int v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  char* v88;
  char* v89;
  __int64 v90;
  __int64 v91;
  int v92;
  char* v93;
  __int64 v94;
  __int16* v95;
  __int64 v96;
  __int64 v97;
  __int16 v98;
  _WORD* v99;
  __int16 v100;
  __int64 v101;
  char* v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  char* v112;
  int v113;
  int v114;
  char* v115;
  __int64 v116;
  int v117;
  int v118;
  int v119;
  int v120;
  unsigned int v121;
  __int64 v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  bool v129;
  unsigned int v130;
  __int64 v131;
  int v132;
  int v133;
  bool v134;
  int v135;
  int v136;
  unsigned int v137;
  __int64 v138;
  int v139;
  int v140;
  int v141;
  int v142;
  __int64 v143;
  int v144;
  int v145;
  bool v146;
  int v147;
  int v148;
  unsigned int v149;
  unsigned int v150;
  __int64 v151;
  unsigned int v152;
  int v153;
  int v154;
  char v155;
  unsigned int v156;
  __int64 v157;
  int v158;
  int v159;
  int v160;
  __int64 v161;
  int v162;
  __int64 v163;
  int v164;
  int v165;
  __int64 v166;
  int v167;
  int v168;
  unsigned int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  __int64 v179;
  __int64 v180;
  int* v181;
  __int64 v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  char v195;
  __int64 v196;
  int v197;
  __int64 v198;
  int v199;
  unsigned int v200;
  __int64 v201;
  unsigned int v202;
  int v203;
  char v204;
  int v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64 v208;
  _DWORD* v209;
  __int64 v210;
  int v211;
  _DWORD* v212;
  int v213;
  int v214;
  __int64 v215;
  int v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  int v220;
  _DWORD* v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  __int64 v230;
  int v231;
  unsigned int v232;
  char v233;
  __int64 v234;
  int v235;
  unsigned int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  _BOOL4 v243;
  int v244;
  unsigned int v245;
  unsigned int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  _DWORD* v260;
  int* v261;
  int* v262;
  int v263;
  __int64 v265;
  int v266;
  _BOOL4 v267;
  unsigned __int64 v268;
  unsigned int* v269;
  __int64 v270;
  __int64 v271;
  _DWORD* v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  int v276;
  int* v277;
  int v278;
  __int64 v279;
  char* v280;
  char* v281;
  int v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  char* v287;
  int v288;

  v19 = *((int*)a1 + 2);
  v20 = a3;
  v21 = a2;
  v22 = a1;
  v277 = a7;
  LODWORD(v285) = a6;
  v272 = a8;
  v273 = a5;
  v280 = a4;
  if (a9 >= 8) {
    v24 = 8;
  }
  else {
    v24 = 0;
  }
  v23 = a9 & ~(a9 >> 31);
  v25 = v23 - v24;
  v266 = v24;
  if (a14 == 2) {
    v26 = MovieData_a5d6c[a3 - a2];
    if (v25 - v26 >= 8) {
      v27 = 8;
    }
    else {
      v27 = 0;
    }
    if (v25 >= v26) {
      v25 = v25 - v26 - v27;
    }
    else {
      v26 = 0;
      v27 = 0;
    }
    v268 = __PAIR64__(v27, v26);
    v288 = v25;
  }
  else {
    v288 = v23 - v24;
    v268 = 0;
  }
  v283 = a16;
  v270 = a13;
  v271 = a12;
  v286 = a11;
  v269 = a10;
  v28 = (4 * v19 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  v279 = (__int64)&v265 - v28;
  MovieRoutine_82ce0((char*)&v265 - v28, 0, 4 * v19);
  v281 = (char*)&v265 - v28;
  MovieRoutine_82ce0((char*)&v265 - v28, 0, 4 * v19);
  v287 = (char*)&v265 - v28;
  MovieRoutine_82ce0((char*)&v265 - v28, 0, 4 * v19);
  v29 = (char*)&v265 - v28;
  MovieRoutine_82ce0((char*)&v265 - v28, 0, 4 * v19);
  v30 = 8 * a14;
  v31 = v21;
  if ((int)v21 >= (int)v20) {
    v41 = v286;
    v33 = v288;
    v36 = v280;
    v35 = (int)v20;
    v34 = (int)v31;
    goto LABEL_36;
  }
  v32 = *((_QWORD*)v22 + 3);
  v33 = v288;
  v34 = (int)v31;
  v35 = (int)v20;
  v36 = v280;
  v37 = v285 - a15 - 5;
  v38 = a15 + 3;
  if ((((_DWORD)v20 - (_DWORD)v31) & 1) == 0) {
    v39 = *(_WORD*)(v32 + 2LL * (int)v31);
    v40 = (int)v31;
    v41 = v286;
    if ((int)v20 - 1LL == (int)v31) {
      goto LABEL_36;
    }
    goto LABEL_24;
  }
  v40 = (int)v31 + 1LL;
  v42 = *(__int16*)(v32 + 2 * v40) - *(__int16*)(v32 + 2LL * (int)v31);
  v39 = *(_WORD*)(v32 + 2 * v40);
  v43 = (8 * ((3 * v42) << a15)) >> 4;
  if (v30 > v43) {
    v43 = 8 * a14;
  }
  *(_DWORD*)&v287[4 * (int)v31] = v43;
  v44 = (v37 * a14 * ((_DWORD)v20 + ~(_DWORD)v31) * v42) << v38;
  if (v42 << a15 == 1) {
    v45 = 8 * a14;
  }
  else {
    v45 = 0;
  }
  *(_DWORD*)&v29[4 * (int)v31] = (v44 >> 6) - v45;
  v41 = v286;
  if ((int)v20 - 1LL != (int)v31) {
  LABEL_24:
    v46 = a14 * v37;
    v47 = (int)v20 - v40;
    v48 = 4 * v40 + 4;
    v49 = (__int16*)(v32 + 2 * v40 + 4);
    v50 = a14 * v37 * (v20 - v40 - 1);
    v51 = v46 * (v20 - v40 - 2);
    v52 = 2 * v46;
    v53 = (int*)&v287[v48];
    v54 = &v29[v48];
    do {
      v55 = *(v49 - 1);
      v56 = *v49;
      v47 -= 2;
      v49 += 2;
      v57 = v55 - v39;
      v58 = 3 * v57;
      v59 = v50 * v57;
      v60 = v57 << a15;
      v50 -= v52;
      v61 = (8 * (v58 << a15)) >> 4;
      v62 = v59 << v38 >> 6;
      if (v30 > v61) {
        v61 = 8 * a14;
      }
      if (v60 == 1) {
        v63 = 8 * a14;
      }
      else {
        v63 = 0;
      }
      v64 = v62 - v63;
      v65 = v51 * (v56 - v55);
      v66 = (v56 - v55) << a15;
      v51 -= v52;
      v67 = (8 * ((3 * (v56 - v55)) << a15)) >> 4;
      v68 = v65 << v38 >> 6;
      if (v30 > v67) {
        v67 = 8 * a14;
      }
      if (v66 == 1) {
        v69 = 8 * a14;
      }
      else {
        v69 = 0;
      }
      *(v53 - 1) = v61;
      *v53 = v67;
      v53 += 2;
      v70 = v68 - v69;
      v39 = v56;
      *((_DWORD*)v54 - 1) = v64;
      *(_DWORD*)v54 = v70;
      v54 += 8;
    } while (v47 != 0);
  }
LABEL_36:
  v71 = *((_DWORD*)v22 + 11);
  v72 = 1;
  v73 = v71 - 1;
  v278 = a18;
  v74 = v273 - 4;
  v274 = v20;
  v284 = v31;
  v285 = v35;
  v282 = a17;
  v75 = v287 - 4;
  do {
    while (1) {
      v76 = (v72 + v73) >> 1;
      if ((int)v31 < (int)v20) {
        break;
      }
      if (v33 >= 0) {
        v72 = v76 + 1;
      }
      else {
        v73 = v76 - 1;
      }
      if (v72 > v73) {
        v111 = 0;
        v103 = v31;
        goto LABEL_174;
      }
    }
    v77 = *((_QWORD*)v22 + 3);
    v78 = 0;
    v79 = 0;
    v80 = v35;
    LOWORD(v81) = *(_WORD*)(v77 + 2 * v35);
    v82 = v77 - 2;
    do {
      while (1) {
        v84 = (__int16)v81;
        v81 = *(__int16*)(v82 + 2 * v80);
        v85 = ((v84 - v81) * a14 *
               *(unsigned __int8*)(*((_QWORD*)v22 + 6) +
                                   (int)v19 * (__int64)v76 - 1 + v80))
                  << a15 >>
              2;
        if (v85 >= 1) {
          v85 = (*(_DWORD*)&v29[4 * v80 - 4] + v85) &
                ~((*(_DWORD*)&v29[4 * v80 - 4] + v85) >> 31);
        }
        v83 = *(_DWORD*)&v36[4 * v80 - 4] + v85;
        if (v79 != 0 || v83 >= *(_DWORD*)&v75[4 * v80]) {
          break;
        }
        v79 = 0;
        if (v83 >= v30) {
          v86 = 8 * a14;
        }
        else {
          v86 = 0;
        }
        --v80;
        v78 += v86;
        if (v80 <= v34) {
          goto LABEL_54;
        }
      }
      if (v83 >= *(_DWORD*)(v74 + 4 * v80)) {
        v83 = *(_DWORD*)(v74 + 4 * v80);
      }
      v79 = 1;
      --v80;
      v78 += v83;
    } while (v80 > v34);
  LABEL_54:
    if (v78 <= v33) {
      v72 = v76 + 1;
    }
    else {
      v73 = v76 - 1;
    }
  } while (v72 <= v73);
  v87 = v72 * v19;
  v88 = &v29[4 * v34];
  v89 = &v36[4 * v34];
  v90 = v34 - v35;
  v91 = 0;
  v92 = (v72 - 1) * v19;
  v93 = (char*)v279;
  v94 = *((_QWORD*)v22 + 6) + v34;
  v95 = (__int16*)(*((_QWORD*)v22 + 3) + 2 * v34);
  v96 = v94 + v87;
  v97 = v94 + v92;
  v100 = *v95;
  v99 = v95 + 1;
  v98 = v100;
  v101 = v273 + 4 * v34;
  v102 = &v281[4 * v34];
  v103 = v31;
  do {
    v108 = ((__int16)v99[v91] - v98) * a14;
    if (v72 >= v71) {
      v109 = *(_DWORD*)(v101 + 4 * v91);
      v110 = (v108 * *(unsigned __int8*)(v97 + v91)) << a15 >> 2;
      if (v110 < 1) {
        goto LABEL_70;
      }
    LABEL_69:
      v110 = (*(_DWORD*)&v88[4 * v91] + v110) &
             ~((*(_DWORD*)&v88[4 * v91] + v110) >> 31);
      goto LABEL_70;
    }
    v109 = (v108 * *(unsigned __int8*)(v96 + v91)) << a15 >> 2;
    v110 = (v108 * *(unsigned __int8*)(v97 + v91)) << a15 >> 2;
    if (v110 >= 1) {
      goto LABEL_69;
    }
  LABEL_70:
    if (v109 >= 1) {
      v109 = (*(_DWORD*)&v88[4 * v91] + v109) &
             ~((*(_DWORD*)&v88[4 * v91] + v109) >> 31);
    }
    v98 = v99[v91];
    v104 = *(_DWORD*)&v89[4 * v91];
    if (v72 <= 1) {
      v105 = 0;
    }
    else {
      v105 = *(_DWORD*)&v89[4 * v91];
    }
    v106 = v110 + v105;
    v107 = v109 - v106;
    if (v104 > 0) {
      v103 = v34 + v91;
    }
    *(_DWORD*)&v93[4 * v34 + 4 * v91] = v106;
    *(_DWORD*)&v102[4 * v91++] = (v107 + v104) & ~((v107 + v104) >> 31);
  } while (v90 + v91 != 0);
  v35 = v285;
  v112 = v93 - 4;
  v113 = 0;
  v114 = 0;
  v115 = v281 - 4;
  v116 = v285;
  do {
    while (1) {
      v117 = *(_DWORD*)&v112[4 * v116] + (*(int*)&v115[4 * v116] >> 1);
      if (v114 != 0 || v117 >= *(_DWORD*)&v75[4 * v116]) {
        break;
      }
      v114 = 0;
      if (v117 >= v30) {
        v118 = 8 * a14;
      }
      else {
        v118 = 0;
      }
      --v116;
      v113 += v118;
      if (v116 <= v34) {
        goto LABEL_83;
      }
    }
    if (v117 >= *(_DWORD*)(v74 + 4 * v116)) {
      v117 = *(_DWORD*)(v74 + 4 * v116);
    }
    v114 = 1;
    --v116;
    v113 += v117;
  } while (v116 > v34);
LABEL_83:
  v119 = 0;
  v120 = 0;
  if (v113 <= v33) {
    v121 = 48;
  }
  else {
    v121 = 16;
  }
  v122 = v285;
  do {
    while (1) {
      v123 = *(_DWORD*)&v112[4 * v122] +
             ((int)(*(_DWORD*)&v115[4 * v122] * v121) >> 6);
      if (v120 != 0 || v123 >= *(_DWORD*)&v75[4 * v122]) {
        break;
      }
      v120 = 0;
      if (v123 >= v30) {
        v124 = 8 * a14;
      }
      else {
        v124 = 0;
      }
      --v122;
      v119 += v124;
      if (v122 <= v34) {
        goto LABEL_96;
      }
    }
    if (v123 >= *(_DWORD*)(v74 + 4 * v122)) {
      v123 = *(_DWORD*)(v74 + 4 * v122);
    }
    v120 = 1;
    --v122;
    v119 += v123;
  } while (v122 > v34);
LABEL_96:
  LODWORD(v31) = v284;
  v125 = 0;
  v126 = 0;
  if (v113 <= v33) {
    v127 = 32;
  }
  else {
    v127 = 0;
  }
  if (v113 <= v33) {
    v128 = 64;
  }
  else {
    v128 = 32;
  }
  v129 = v119 <= v33;
  if (v119 <= v33) {
    v130 = v121;
  }
  else {
    v130 = v127;
  }
  if (v129) {
    v121 = v128;
  }
  v131 = v285;
  do {
    while (1) {
      v132 = *(_DWORD*)&v112[4 * v131] +
             ((int)(*(_DWORD*)&v115[4 * v131] * ((v121 + v130) >> 1)) >> 6);
      if (v126 != 0 || v132 >= *(_DWORD*)&v75[4 * v131]) {
        break;
      }
      v126 = 0;
      if (v132 >= v30) {
        v133 = 8 * a14;
      }
      else {
        v133 = 0;
      }
      --v131;
      v125 += v133;
      if (v131 <= v34) {
        goto LABEL_118;
      }
    }
    if (v132 >= *(_DWORD*)(v74 + 4 * v131)) {
      v132 = *(_DWORD*)(v74 + 4 * v131);
    }
    v126 = 1;
    --v131;
    v125 += v132;
  } while (v131 > v34);
LABEL_118:
  v134 = v125 <= v33;
  v135 = 0;
  v136 = 0;
  if (v125 <= v33) {
    v137 = (v121 + v130) >> 1;
  }
  else {
    v137 = v130;
  }
  if (!v134) {
    v121 = (v121 + v130) >> 1;
  }
  v138 = v285;
  do {
    while (1) {
      v139 = *(_DWORD*)&v112[4 * v138] +
             ((int)(*(_DWORD*)&v115[4 * v138] * ((v121 + v137) >> 1)) >> 6);
      if (v136 != 0 || v139 >= *(_DWORD*)&v75[4 * v138]) {
        break;
      }
      v136 = 0;
      if (v139 >= v30) {
        v140 = 8 * a14;
      }
      else {
        v140 = 0;
      }
      --v138;
      v135 += v140;
      if (v138 <= v34) {
        goto LABEL_133;
      }
    }
    if (v139 >= *(_DWORD*)(v74 + 4 * v138)) {
      v139 = *(_DWORD*)(v74 + 4 * v138);
    }
    v136 = 1;
    --v138;
    v135 += v139;
  } while (v138 > v34);
LABEL_133:
  v141 = 0;
  v142 = 0;
  if (v135 > v33) {
    v121 = (v121 + v137) >> 1;
  }
  else {
    v137 = (v121 + v137) >> 1;
  }
  v143 = v285;
  do {
    while (1) {
      v144 = *(_DWORD*)&v112[4 * v143] +
             ((int)(*(_DWORD*)&v115[4 * v143] * ((v121 + v137) >> 1)) >> 6);
      if (v142 != 0 || v144 >= *(_DWORD*)&v75[4 * v143]) {
        break;
      }
      v142 = 0;
      if (v144 >= v30) {
        v145 = 8 * a14;
      }
      else {
        v145 = 0;
      }
      --v143;
      v141 += v145;
      if (v143 <= v34) {
        goto LABEL_146;
      }
    }
    if (v144 >= *(_DWORD*)(v74 + 4 * v143)) {
      v144 = *(_DWORD*)(v74 + 4 * v143);
    }
    v142 = 1;
    --v143;
    v141 += v144;
  } while (v143 > v34);
LABEL_146:
  v146 = v141 <= v33;
  v147 = 0;
  v148 = 0;
  if (v141 <= v33) {
    v149 = (v121 + v137) >> 1;
  }
  else {
    v149 = v137;
  }
  if (v146) {
    v150 = v121;
  }
  else {
    v150 = (v121 + v137) >> 1;
  }
  v151 = v285;
  v152 = (v150 + v149) >> 1;
  do {
    while (1) {
      v153 = *(_DWORD*)&v112[4 * v151] +
             ((int)(*(_DWORD*)&v115[4 * v151] * v152) >> 6);
      if (v148 != 0 || v153 >= *(_DWORD*)&v75[4 * v151]) {
        break;
      }
      v148 = 0;
      if (v153 >= v30) {
        v154 = 8 * a14;
      }
      else {
        v154 = 0;
      }
      --v151;
      v147 += v154;
      if (v151 <= v34) {
        goto LABEL_162;
      }
    }
    if (v153 >= *(_DWORD*)(v74 + 4 * v151)) {
      v153 = *(_DWORD*)(v74 + 4 * v151);
    }
    v148 = 1;
    --v151;
    v147 += v153;
  } while (v151 > v34);
LABEL_162:
  v111 = 0;
  v155 = 0;
  if (v147 <= v33) {
    v156 = v152;
  }
  else {
    v156 = v149;
  }
  v157 = v285;
  do {
    v158 = *(_DWORD*)&v112[4 * v157] +
           ((int)(*(_DWORD*)&v115[4 * v157] * v156) >> 6);
    v155 |= v158 >= *(_DWORD*)&v75[4 * v157];
    if (v158 >= v30) {
      v159 = 8 * a14;
    }
    else {
      v159 = 0;
    }
    if ((v155 & 1) == 0) {
      v158 = v159;
    }
    if (v158 >= *(_DWORD*)(v74 + 4 * v157)) {
      v158 = *(_DWORD*)(v74 + 4 * v157);
    }
    *(_DWORD*)(v41 - 4 + 4 * v157--) = v158;
    v111 += v158;
  } while (v157 > v34);
LABEL_174:
  v160 = v268;
  v281 = v22;
  v267 = a14 > 1;
  if ((int)v274 - 1 <= v103) {
    v162 = v274;
    v178 = v268;
  LABEL_199:
    v288 += v266;
    v180 = v270;
    v179 = v271;
    if (v178 > 0) {
      goto LABEL_200;
    }
  LABEL_217:
    v185 = 0;
    *v277 = 0;
    if ((int)v31 < 0) {
      v186 = 0;
    }
    else {
      v186 = HIDWORD(v268);
    }
    if (HIDWORD(v268) != 0) {
      goto LABEL_221;
    }
    goto LABEL_229;
  }
  v161 = (int)v274 - 1;
  v162 = v274;
  v275 = a19;
  v163 = v103;
  v276 = v31 + 2;
  v279 = v103;
  v280 = (char*)&MovieData_a5d6c[-v34];
  while (1) {
    v166 = *((_QWORD*)v22 + 3);
    v167 = *(__int16*)(v166 + 2LL * v162);
    v168 = *(__int16*)(v166 + 2 * v34);
    LODWORD(v166) = *(__int16*)(v166 + 2 * v161);
    v169 = (v288 - v111) / (unsigned int)(v167 - v168);
    v170 = (v288 - v111 + v168 - v166 + (v168 - v167) * v169) &
           ~((int)(v288 - v111 + v168 - v166 + (v168 - v167) * v169) >> 31);
    v171 = v167 - v166;
    v172 = *(_DWORD*)(v41 + 4 * v161);
    v173 = v172 + v171 * v169 + v170;
    v174 = *(_DWORD*)&v287[4 * v161];
    if (v174 <= v30 + 8) {
      v174 = v30 + 8;
    }
    if (v173 >= v174) {
      break;
    }
  LABEL_193:
    if (v160 != 0) {
      v178 = (unsigned __int8)v280[v161];
      if (v173 < v30) {
        goto LABEL_197;
      }
    }
    else {
      v178 = 0;
      if (v173 < v30) {
      LABEL_197:
        v164 = 0;
        goto LABEL_177;
      }
    }
    v164 = 8 * a14;
  LABEL_177:
    v165 = v111 - v160;
    *(_DWORD*)(v41 + 4 * v161--) = v164;
    --v162;
    v160 = v178;
    v111 = v165 - v172 + v164 + v178;
    if (v161 <= v163) {
      goto LABEL_199;
    }
  }
  if (v282 == 0) {
    v177 = v162;
    v175 = v160;
    if ((unsigned int)MovieRoutine_37780(v283, 1) == 0) {
      goto LABEL_192;
    }
    v35 = v285;
    v41 = v286;
    v180 = v270;
    v179 = v271;
    v162 = v177;
    LODWORD(v31) = v284;
    v22 = v281;
    if (v175 <= 0) {
      goto LABEL_217;
    }
    goto LABEL_211;
  }
  v175 = v160;
  if (v162 > v276) {
    if (v162 <= v278) {
      v176 = 7;
    }
    else {
      v176 = 9;
    }
    if (v162 <= 17) {
      v176 = 0;
    }
    if (v161 > v275 || v173 <= (8 * ((v171 * v176) << a15)) >> 4) {
      v177 = v162;
      MovieRoutine_37f20(v283, 0, 1);
    LABEL_192:
      v35 = v285;
      v41 = v286;
      LODWORD(v31) = v284;
      v162 = v177;
      v111 += 8;
      v173 -= 8;
      v160 = v175;
      v22 = v281;
      v163 = v279;
      v172 = *(_DWORD*)(v286 + 4 * v161);
      goto LABEL_193;
    }
  }
  v187 = v162;
  MovieRoutine_37f20(v283, 1, 1);
  v35 = v285;
  v41 = v286;
  LODWORD(v31) = v284;
  v162 = v187;
  v180 = v270;
  v179 = v271;
  if (v175 <= 0) {
    goto LABEL_217;
  }
LABEL_200:
  if (v282 == 0) {
  LABEL_211:
    v188 = v162;
    v189 = MovieRoutine_37900(v283, (unsigned int)(v162 - v31 + 1));
    LODWORD(v31) = v284;
    v190 = v189 + v284;
    *v277 = v189 + v284;
    if (v190 > (int)v31) {
      v186 = 0;
    }
    else {
      v186 = HIDWORD(v268);
    }
    if (HIDWORD(v268) == 0) {
      v35 = v285;
      v41 = v286;
      v162 = v188;
      v22 = v281;
      goto LABEL_229;
    }
    v35 = v285;
    v41 = v286;
    v162 = v188;
    v22 = v281;
    if (v190 > (int)v31) {
      goto LABEL_225;
    }
  LABEL_229:
    *v272 = 0;
    if ((int)v31 < v162) {
      goto LABEL_230;
    }
    goto LABEL_226;
  }
  v181 = v277;
  v182 = v283;
  v183 = v162;
  v184 = *v277;
  if (*v277 >= v162) {
    v184 = v162;
  }
  *v277 = v184;
  MovieRoutine_38200(v182, (unsigned int)(v184 - v31),
                     (unsigned int)(v162 - v31 + 1));
  v162 = v183;
  v22 = v281;
  LODWORD(v31) = v284;
  v35 = v285;
  v41 = v286;
  v185 = *v181;
  if (*v181 > (int)v284) {
    v186 = 0;
  }
  else {
    v186 = HIDWORD(v268);
  }
  if (HIDWORD(v268) == 0) {
    goto LABEL_229;
  }
LABEL_221:
  if (v185 <= (int)v31) {
    goto LABEL_229;
  }
  if (v282 == 0) {
  LABEL_225:
    v192 = v162;
    v193 = MovieRoutine_37780(v283, 1);
    v162 = v192;
    v22 = v281;
    LODWORD(v31) = v284;
    v35 = v285;
    v41 = v286;
    *v272 = v193;
    if ((int)v31 < v162) {
      goto LABEL_230;
    }
    goto LABEL_226;
  }
  v191 = v162;
  MovieRoutine_37f20(v283, (unsigned int)*v272, 1);
  v162 = v191;
  v22 = v281;
  LODWORD(v31) = v284;
  v35 = v285;
  v41 = v286;
  if ((int)v284 < v162) {
  LABEL_230:
    v196 = *((_QWORD*)v22 + 3);
    v197 = v162;
    v198 = v34;
    v199 = *(__int16*)(v196 + 2LL * v162);
    LODWORD(v196) = *(__int16*)(v196 + 2 * v34);
    v200 = v288 - v111 + v186;
    v201 = v162;
    v202 = v199 - v196;
    v203 = v196 - v199;
    v204 = v162 - v34;
    v205 = v200 / v202;
    v206 = ((_BYTE)v162 - (_BYTE)v34) & 3;
    v207 = ~v34 + v201;
    if ((v204 & 3) != 0) {
      v208 = v34;
      do {
        v198 = v208 + 1;
        --v206;
        *(_DWORD*)(v41 + 4 * v208) +=
            (*(__int16*)(*((_QWORD*)v22 + 3) + 2 * v208 + 2) -
             *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v208)) *
            v205;
        ++v208;
      } while (v206 != 0);
    }
    v209 = v272;
    v210 = v273;
    v211 = v200 + v203 * v205;
    if (v207 >= 3) {
      v212 = (_DWORD*)(v41 + 4 * v198 + 8);
      do {
        v213 = *(v212 - 1);
        *(v212 - 2) += (*(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 2) -
                        *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198)) *
                       v205;
        *(v212 - 1) = v213 + (*(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 4) -
                              *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 2)) *
                                 v205;
        v214 = v212[1];
        *v212 += (*(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 6) -
                  *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v198 + 4)) *
                 v205;
        v215 = *((_QWORD*)v22 + 3) + 2 * v198;
        v198 += 4;
        v212[1] = v214 + (*(__int16*)(v215 + 8) - *(__int16*)(v215 + 6)) * v205;
        v212 += 4;
      } while (v201 != v198);
    }
    v216 = v274;
    v195 = v267;
    v217 = v204 & 3;
    if ((v204 & 3) != 0) {
      v218 = v34;
      do {
        v219 = v218 + 1;
        v220 = *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v218 + 2) -
               *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v218);
        if (v211 < v220) {
          v220 = v211;
        }
        --v217;
        v211 -= v220;
        *(_DWORD*)(v41 + 4 * v218++) += v220;
      } while (v217 != 0);
      if (v207 < 3) {
      LABEL_254:
        v232 = 0;
        if (a14 <= 1) {
          v233 = 3;
        }
        else {
          v233 = 4;
        }
        v234 = 2 * v34 + 2;
        while (1) {
          while (1) {
            v240 = (*(__int16*)(*((_QWORD*)v22 + 3) + v234) -
                    *(__int16*)(*((_QWORD*)v22 + 3) + v234 - 2))
                   << a15;
            v241 = *(_DWORD*)(v41 + 4 * v34) + v232;
            if (v240 >= 2) {
              break;
            }
            v245 = (v241 - v30) & ~((v241 - v30) >> 31);
            if (v241 >= v30) {
              v241 = 8 * a14;
            }
            *(_DWORD*)(v41 + 4 * v34) = v241;
            *(_DWORD*)(v179 + 4 * v34) = 0;
            *(_DWORD*)(v180 + 4 * v34) = 1;
            if (v245 == 0) {
              goto LABEL_285;
            }
          LABEL_258:
            v235 = *(_DWORD*)(v179 + 4 * v34);
            v236 = v245 >> v233;
            v237 = v245 - v232;
            if ((int)(v245 >> v233) >= 8 - v235) {
              v236 = 8 - v235;
            }
            v238 = v236 + v235;
            v239 = v236 * v30;
            *(_DWORD*)(v179 + 4 * v34) = v238;
            *(_DWORD*)(v180 + 4 * v34) = v239 >= v237;
            v232 = v245 - v239;
            ++v34;
            v234 += 2;
            if (v201 == v34) {
            LABEL_286:
              v35 = v285;
              v162 = v197;
              LODWORD(v31) = v197;
              *v269 = v232;
              if (v197 >= v216) {
                return (unsigned int)v162;
              }
            LABEL_287:
              if ((((_BYTE)v35 - (_BYTE)v31) & 3) != 0) {
                v256 = 4LL * (((_BYTE)v35 - (_BYTE)v31) & 3);
                v257 = (int)v31;
                do {
                  *(_DWORD*)(v179 + 4 * v257) =
                      *(int*)(v41 + 4 * v257) >> v195 >> 3;
                  *(_DWORD*)(v41 + 4 * v257) = 0;
                  v256 -= 4;
                  *(_DWORD*)(v180 + 4 * v257) = *(_DWORD*)(v179 + 4 * v257) < 1;
                  ++v257;
                } while (v256 != 0);
                if ((unsigned __int64)((int)v31 - v35) > 0xFFFFFFFFFFFFFFFCLL) {
                  return (unsigned int)v162;
                }
              }
              else {
                v257 = (int)v31;
                if ((unsigned __int64)((int)v31 - v35) > 0xFFFFFFFFFFFFFFFCLL) {
                  return (unsigned int)v162;
                }
              }
              v258 = v35 - v257;
              v259 = 4 * v257 + 8;
              v260 = (_DWORD*)(v180 + v259);
              v261 = (int*)(v179 + v259);
              v262 = (int*)(v41 + v259);
              do {
                *(v261 - 2) = *(v262 - 2) >> v195 >> 3;
                *(v262 - 2) = 0;
                *(v260 - 2) = *(v261 - 2) < 1;
                *(v261 - 1) = *(v262 - 1) >> v195 >> 3;
                *(v262 - 1) = 0;
                *(v260 - 1) = *(v261 - 1) < 1;
                *v261 = *v262 >> v195 >> 3;
                *v262 = 0;
                *v260 = *v261 < 1;
                v261[1] = v262[1] >> v195 >> 3;
                v262[1] = 0;
                v262 += 4;
                v263 = v261[1];
                v261 += 4;
                v258 -= 4;
                v260[1] = v263 < 1;
                v260 += 4;
              } while (v258 != 0);
              return (unsigned int)v162;
            }
          }
          v242 = *(_DWORD*)(v210 + 4 * v34);
          v243 = false;
          v244 = v241 - v242;
          if (v241 >= v242) {
            v241 = *(_DWORD*)(v210 + 4 * v34);
          }
          *(_DWORD*)(v41 + 4 * v34) = v241;
          if (a14 == 2 && v240 != 2) {
            v243 = *v209 == 0 && v34 < *v277;
          }
          v245 = v244 & ~(v244 >> 31);
          v246 = v243 + v240 * a14;
          if (v240 == 2) {
            v247 = (int)(8 * v246) >> 2;
          }
          else {
            v247 = 0;
          }
          v248 = (8 * a15 + *(__int16*)(*((_QWORD*)v22 + 7) + 2 * v34)) * v246;
          v249 = v247 - 21 * v246 + (v248 >> 1);
          v250 = v249 + v241;
          v251 = v241 + 4 * v246;
          v252 = v249 + (v248 >> 3);
          if (v250 >= (int)(24 * v246)) {
            v252 = v249;
          }
          v253 = v249 + (v248 >> 2);
          if (v250 >= (int)(16 * v246)) {
            v253 = v252;
          }
          v254 =
              (((v251 + v253) & (unsigned int)~((v251 + v253) >> 31)) / v246) >>
              3;
          *(_DWORD*)(v179 + 4 * v34) = v254;
          v255 = *(_DWORD*)(v41 + 4 * v34);
          if (v254 * a14 > v255 >> 3) {
            v254 = v255 >> v195 >> 3;
          }
          if (v254 >= 8) {
            v254 = 8;
          }
          *(_DWORD*)(v179 + 4 * v34) = v254;
          *(_DWORD*)(v180 + 4 * v34) =
              (int)(v254 * 8 * v246) >= *(_DWORD*)(v41 + 4 * v34) + v253;
          *(_DWORD*)(v41 + 4 * v34) -= *(_DWORD*)(v179 + 4 * v34) * v30;
          if (v245 != 0) {
            goto LABEL_258;
          }
        LABEL_285:
          v232 = 0;
          ++v34;
          v234 += 2;
          if (v201 == v34) {
            goto LABEL_286;
          }
        }
      }
    }
    else {
      v219 = v34;
      if (v207 < 3) {
        goto LABEL_254;
      }
    }
    v221 = (_DWORD*)(v41 + 4 * v219 + 8);
    do {
      v222 = *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 2) -
             *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219);
      v223 = *(v221 - 1);
      if (v211 < v222) {
        v222 = v211;
      }
      v224 = v211 - v222;
      *(v221 - 2) += v222;
      v225 = *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 4) -
             *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 2);
      if (v224 < v225) {
        v225 = v224;
      }
      v226 = v224 - v225;
      *(v221 - 1) = v225 + v223;
      v227 = *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 6) -
             *(__int16*)(*((_QWORD*)v22 + 3) + 2 * v219 + 4);
      v228 = v221[1];
      if (v226 < v227) {
        v227 = v226;
      }
      v229 = v226 - v227;
      *v221 += v227;
      v230 = *((_QWORD*)v22 + 3) + 2 * v219;
      v219 += 4;
      v231 = *(__int16*)(v230 + 8) - *(__int16*)(v230 + 6);
      if (v229 < v231) {
        v231 = v229;
      }
      v211 = v229 - v231;
      v221[1] = v231 + v228;
      v221 += 4;
    } while (v201 != v219);
    goto LABEL_254;
  }
LABEL_226:
  v194 = v274;
  v195 = v267;
  *v269 = 0;
  if ((int)v31 < v194) {
    goto LABEL_287;
  }
  return (unsigned int)v162;
}

__int64 MovieHr_445e0(__int64 result, __int64 a2, int a3, int a4,
                      unsigned int a5)
{
  int v5;
  __int64 v6;
  __int64 v7;
  int v10;
  int v11;
  unsigned int* v12;
  char v13;
  __int64 v14;
  unsigned int v15;
  unsigned int* v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  unsigned int v30;
  int v31;
  __int64 i;
  int v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int* v40;
  _WORD* v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  int v46;
  _WORD* v47;
  int* v48;
  int v49;
  int* v50;
  _WORD* v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  _WORD* v64;
  int* v65;
  int v66;
  int v67;
  __int64 v68;
  _WORD* v69;
  _DWORD* v70;
  __int64 v71;
  unsigned int v72;
  _WORD* v73;
  unsigned int* v74;
  unsigned int v75;
  _WORD* v76;
  int* v77;
  __int64 v78;
  int v79;
  _WORD* v80;
  int* v81;
  int v82;
  __int64 v84;

  if ((int)a5 < 1) {
    return result;
  }
  v5 = a4 - a3;
  v6 = a5 & 7;
  v7 = a5 & 0x7FFFFFF8;
  v10 = 0;
  v11 = 0;
  v84 = result;
  v12 = (unsigned int*)(a2 + 16);
  v13 = a4 - a3 - 1;
  do {
    if (a5 >= 8) {
      v14 = 0;
      v15 = 0;
      v16 = v12;
      do {
        v17 = *(v16 - 4);
        v18 = *(v16 - 3);
        if (v17 < 0) {
          v17 = -v17;
        }
        if (v17 <= v15) {
          v19 = v10;
        }
        else {
          v19 = v14;
        }
        if (v17 > v15) {
          v15 = v17;
        }
        if (v18 >= 0) {
          v20 = *(v16 - 3);
        }
        else {
          v20 = -v18;
        }
        if (v20 > v15) {
          v21 = v14 + 1;
        }
        else {
          v21 = v19;
        }
        if (v20 > v15) {
          v15 = v20;
        }
        v22 = *(v16 - 2);
        v23 = *(v16 - 1);
        if (v22 < 0) {
          v22 = -v22;
        }
        if (v22 > v15) {
          v21 = v14 + 2;
          v15 = v22;
        }
        if (v23 >= 0) {
          v24 = *(v16 - 1);
        }
        else {
          v24 = -v23;
        }
        if (v24 > v15) {
          v21 = v14 + 3;
          v15 = v24;
        }
        v25 = *v16;
        v26 = v16[1];
        if ((*v16 & 0x80000000) != 0) {
          v25 = -v25;
        }
        if (v25 > v15) {
          v21 = v14 + 4;
          v15 = v25;
        }
        if (v26 >= 0) {
          v27 = v16[1];
        }
        else {
          v27 = -v26;
        }
        if (v27 > v15) {
          v21 = v14 + 5;
          v15 = v27;
        }
        v28 = v16[2];
        v29 = v16[3];
        v16 += 8;
        if (v28 < 0) {
          v28 = -v28;
        }
        if (v28 > v15) {
          v21 = v14 + 6;
          v15 = v28;
        }
        if (v29 >= 0) {
          v30 = v29;
        }
        else {
          v30 = -v29;
        }
        v31 = v14 + 7;
        v14 += 8;
        if (v30 <= v15) {
          v10 = v21;
        }
        else {
          v10 = v31;
        }
        if (v30 > v15) {
          v15 = v30;
        }
      } while (v14 != v7);
    }
    else {
      v14 = 0;
      v15 = 0;
    }
    if (v6 != 0) {
      for (i = v6; i != 0; --i) {
        v33 = *(_DWORD*)(a2 + 4 * v14);
        if (v33 < 0) {
          v33 = -v33;
        }
        if (v33 > v15) {
          v10 = v14;
          v15 = v33;
        }
        ++v14;
      }
    }
    v34 = (v15 & 1) + (v15 >> 1);
    if (v5 != 1) {
      v34 = ((v15 >> v13) + 1) >> 1;
    }
    if (v34 < 0x8000) {
      v38 = a5 & 7;
      if (v5 == 1) {
        if (a5 >= 8) {
          v69 = (_WORD*)(v84 + 8);
          v70 = (_DWORD*)(a2 + 16);
          v71 = 0;
          do {
            v71 -= 8;
            *(v69 - 4) = (*(v70 - 4) & 1) + (*(v70 - 4) >> 1);
            *(v69 - 3) = (*(v70 - 3) & 1) + (*(v70 - 3) >> 1);
            *(v69 - 2) = (*(v70 - 2) & 1) + (*(v70 - 2) >> 1);
            *(v69 - 1) = (*(v70 - 1) & 1) + (*(v70 - 1) >> 1);
            *v69 = (*v70 & 1) + (*v70 >> 1);
            v69[1] = (v70[1] & 1) + (v70[1] >> 1);
            v69[2] = (v70[2] & 1) + (v70[2] >> 1);
            v72 = v70[3];
            v70 += 8;
            v69[3] = (v72 & 1) + (v72 >> 1);
            v69 += 8;
          } while (-(__int64)(a5 & 0x7FFFFFF8) != v71);
          v39 = -v71;
        }
        else {
          v39 = 0;
        }
        if ((a5 & 7) != 0) {
          v73 = (_WORD*)(v84 + 2 * v39);
          v74 = (unsigned int*)(a2 + 4 * v39);
          do {
            v75 = *v74++;
            --v38;
            *v73++ = (v75 & 1) + (v75 >> 1);
          } while (v38 != 0);
        }
      }
      else {
        if (a5 >= 8) {
          v76 = (_WORD*)(v84 + 8);
          v77 = (int*)(a2 + 16);
          v78 = 0;
          do {
            v78 -= 8;
            *(v76 - 4) = (unsigned int)((*(v77 - 4) >> v13) + 1) >> 1;
            *(v76 - 3) = (unsigned int)((*(v77 - 3) >> v13) + 1) >> 1;
            *(v76 - 2) = (unsigned int)((*(v77 - 2) >> v13) + 1) >> 1;
            *(v76 - 1) = (unsigned int)((*(v77 - 1) >> v13) + 1) >> 1;
            *v76 = (unsigned int)((*v77 >> v13) + 1) >> 1;
            v76[1] = (unsigned int)((v77[1] >> v13) + 1) >> 1;
            v76[2] = (unsigned int)((v77[2] >> v13) + 1) >> 1;
            v79 = v77[3];
            v77 += 8;
            v76[3] = (unsigned int)((v79 >> v13) + 1) >> 1;
            v76 += 8;
          } while (-(__int64)(a5 & 0x7FFFFFF8) != v78);
          v68 = -v78;
        }
        else {
          v68 = 0;
        }
        if ((a5 & 7) != 0) {
          v80 = (_WORD*)(v84 + 2 * v68);
          v81 = (int*)(a2 + 4 * v68);
          do {
            v82 = *v81++;
            --v38;
            *v80++ = (unsigned int)((v82 >> v13) + 1) >> 1;
          } while (v38 != 0);
        }
      }
      return result;
    }
    if (v34 >= 0x27FFE) {
      v34 = 163838;
    }
    result = MovieRoutine_4e4e0(
        a2, a5, 65470 - ((v34 << 14) - 536854528) / ((v34 + v34 * v10) >> 2));
    ++v11;
  } while (v11 != 10);
  v35 = a5 & 3;
  if (v5 != 1) {
    result = v84;
    if (a5 >= 4) {
      v50 = (int*)(a2 + 8);
      v51 = (_WORD*)(v84 + 4);
      v52 = 0;
      do {
        v54 = *(v50 - 2) >> v13;
        v55 = (v54 + 1) >> 1;
        if (v54 < -65537) {
          v55 = -32768;
        }
        if (v54 <= 65534) {
          v56 = v55;
        }
        else {
          v56 = 0x7FFF;
        }
        *(v51 - 2) = v56;
        *(v50 - 2) = v56 << v5;
        v57 = *(v50 - 1) >> v13;
        v58 = (v57 + 1) >> 1;
        if (v57 < -65537) {
          v58 = -32768;
        }
        if (v57 <= 65534) {
          v59 = v58;
        }
        else {
          v59 = 0x7FFF;
        }
        *(v51 - 1) = v59;
        *(v50 - 1) = v59 << v5;
        v60 = *v50 >> v13;
        v61 = (v60 + 1) >> 1;
        if (v60 < -65537) {
          v61 = -32768;
        }
        if (v60 <= 65534) {
          v62 = v61;
        }
        else {
          v62 = 0x7FFF;
        }
        *v51 = v62;
        *v50 = v62 << v5;
        v63 = v50[1] >> v13;
        if (v63 > 65534) {
          v53 = 0x7FFF;
        }
        else if (v63 >= -65537) {
          v53 = (v63 + 1) >> 1;
        }
        else {
          v53 = -32768;
        }
        v51[1] = v53;
        v52 -= 4;
        v51 += 4;
        v50[1] = v53 << v5;
        v50 += 4;
      } while (-(__int64)(a5 & 0x7FFFFFFC) != v52);
      v37 = -v52;
      if ((a5 & 3) == 0) {
        return result;
      }
    }
    else {
      v37 = 0;
      if ((a5 & 3) == 0) {
        return result;
      }
    }
    v64 = (_WORD*)(v84 + 2 * v37);
    v65 = (int*)(a2 + 4 * v37);
    do {
      v67 = *v65 >> v13;
      if (v67 > 65534) {
        v66 = 0x7FFF;
      }
      else if (v67 >= -65537) {
        v66 = (v67 + 1) >> 1;
      }
      else {
        v66 = -32768;
      }
      *v64++ = v66;
      --v35;
      *v65++ = v66 << v5;
    } while (v35 != 0);
    return result;
  }
  if (a5 >= 4) {
    v40 = (int*)(a2 + 8);
    v41 = (_WORD*)(v84 + 4);
    v42 = 0;
    do {
      v42 -= 4;
      v43 = (*(v40 - 2) & 1) + (*(v40 - 2) >> 1);
      if (v43 <= -32768) {
        v43 = -32768;
      }
      if (v43 >= 0x7FFF) {
        v43 = 0x7FFF;
      }
      *(v41 - 2) = v43;
      *(v40 - 2) = 2 * v43;
      v44 = (*(v40 - 1) & 1) + (*(v40 - 1) >> 1);
      if (v44 <= -32768) {
        v44 = -32768;
      }
      if (v44 >= 0x7FFF) {
        v44 = 0x7FFF;
      }
      *(v41 - 1) = v44;
      *(v40 - 1) = 2 * v44;
      v45 = (*v40 & 1) + (*v40 >> 1);
      if (v45 <= -32768) {
        v45 = -32768;
      }
      if (v45 >= 0x7FFF) {
        v45 = 0x7FFF;
      }
      *v41 = v45;
      *v40 = 2 * v45;
      v46 = (v40[1] & 1) + (v40[1] >> 1);
      if (v46 <= -32768) {
        v46 = -32768;
      }
      if (v46 >= 0x7FFF) {
        v46 = 0x7FFF;
      }
      v41[1] = v46;
      v41 += 4;
      v40[1] = 2 * v46;
      v40 += 4;
    } while (-(__int64)(a5 & 0x7FFFFFFC) != v42);
    v36 = -v42;
    if ((a5 & 3) != 0) {
      goto LABEL_96;
    }
  }
  else {
    v36 = 0;
    if ((a5 & 3) == 0) {
      return result;
    }
  LABEL_96:
    v47 = (_WORD*)(v84 + 2 * v36);
    v48 = (int*)(a2 + 4 * v36);
    do {
      v49 = (*v48 & 1) + (*v48 >> 1);
      if (v49 <= -32768) {
        v49 = -32768;
      }
      if (v49 >= 0x7FFF) {
        v49 = 0x7FFF;
      }
      --v35;
      *v47++ = v49;
      *v48++ = 2 * v49;
    } while (v35 != 0);
  }
  return result;
}

__int64 MovieHr_45170(__int64 result, __int64 a2)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  int* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;

  v2 = *(_DWORD*)(result + 12);
  if (v2 == 0) {
    return result;
  }
  v3 = *(_DWORD*)(result + 8);
  v25 = 0;
  v23 = 0;
  v24 = 0;
  v4 = (0x40000 - (v3 << 10)) >> 16;
  if (v4 > 3) {
    v24 = 0xAA4FADA0552B622LL;
    v25 = 89306658;
    v14 = 0x36BDF0A021DA4EDLL;
  }
  else {
    v5 = (unsigned __int16)(-1024 * v3);
    if (-1024 * (_WORD)v3 != 0) {
      v6 = (int*)((char*)MovieData_c09e0 + 12 * v4);
      v7 = v6[1];
      if ((unsigned int)v5 >= 0x8000) {
        v17 = v6[2];
        v18 = v6[3] +
              ((unsigned __int64)((__int16)v5 * (v6[3] - (__int64)*v6)) >> 16);
        v20 = v6[4];
        v19 = v6[5];
        LODWORD(v24) = v18;
        HIDWORD(v24) =
            v20 + ((unsigned __int64)((__int16)v5 * (v20 - v7)) >> 16);
        v25 = v19 + ((unsigned __int64)((__int16)v5 * (v19 - v17)) >> 16);
        v21 = (int*)&MovieData_a735c[v4];
        v12 =
            v21[2] +
            ((unsigned __int64)((__int16)v5 * (v21[2] - (__int64)*v21)) >> 16);
        v13 = v21[3] +
              ((unsigned __int64)((__int16)v5 * (v21[3] - (__int64)v21[1])) >>
               16);
      }
      else {
        v8 = *v6 + ((unsigned __int64)((v6[3] - (__int64)*v6) * v5) >> 16);
        v9 = v6[4];
        v10 = v6[2] + ((unsigned __int64)((v6[5] - (__int64)v6[2]) * v5) >> 16);
        LODWORD(v24) = v8;
        HIDWORD(v24) = v7 + ((unsigned __int64)((v9 - v7) * v5) >> 16);
        v25 = v10;
        v11 = (int*)&MovieData_a735c[v4];
        v12 = *v11 + ((unsigned __int64)((v11[2] - (__int64)*v11) * v5) >> 16);
        v13 = v11[1] +
              ((unsigned __int64)((v11[3] - (__int64)v11[1]) * v5) >> 16);
      }
      v23 = __PAIR64__(v13, v12);
      goto LABEL_11;
    }
    v15 = (char*)MovieData_c09e0 + 12 * v4;
    v16 = *(_QWORD*)v15;
    LODWORD(v15) = *((_DWORD*)v15 + 2);
    v24 = v16;
    v25 = (int)v15;
    v14 = MovieData_a735c[v4];
  }
  v23 = v14;
LABEL_11:
  v22 = (v3 + v2) & ~((v3 + v2) >> 31);
  if (v22 >= 256) {
    v22 = 256;
  }
  *(_DWORD*)(result + 8) = v22;
  return MovieRoutine_4e0c0(a2, &v24, &v23);
}

__int64 MovieHr_45cc0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      int a5, int a6)
{
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int16* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int16* v19;
  __int16* v20;
  __int64 v21;
  int v22;
  __int16 v23;
  int v24;
  __int16 v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  __int16* v34;
  __int16* v35;
  __int64 v36;
  int v37;
  __int16 v38;
  int v39;
  __int16 v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int16* v49;
  __int16* v50;
  int v51;
  int v52;
  int v53;
  __int16 v54;
  int v55;
  int v56;
  bool v57;

  if (a5 >= 1) {
    if (a6 <= 1) {
      return MovieRoutine_82ce0(result, 0, 4LL * (unsigned int)a5);
    }
    else {
      v6 = (unsigned int)a6;
      v7 = 2LL * (unsigned int)a6;
      v8 = a5;
      if (a5 == 1) {
        v9 = 0;
      }
      else {
        v10 = a6;
        v11 = a5 & 0x7FFFFFFE;
        v9 = 0;
        v12 = 2LL * a6;
        v13 = (__int16*)(a4 + v7 - 4);
        v14 = 4 * v10;
        v15 = a3 + v10;
        v16 = v12 + 2 * v6 + a4 - 2;
        do {
          v17 = 0;
          v18 = 0;
          v19 = (__int16*)(a2 + v7 - 4);
          v20 = v13;
          v21 = v6 - 2;
          do {
            v22 = (__int16)(v19[1] - (*(unsigned __int8*)(a3 + v21 + 1) << 7)) *
                  v20[1];
            v23 = *v19;
            v19 -= 2;
            v24 = v22 - (v17 >> 1);
            v25 = v23 - (*(unsigned __int8*)(a3 + v21) << 7);
            if (v24 < 0) {
              v24 = -v24;
            }
            v26 = v24 + v18;
            v27 = *v20;
            v20 -= 2;
            v17 = v25 * v27;
            v28 = v17 - (v22 >> 1);
            if (v28 < 0) {
              v28 = -v28;
            }
            v18 = v26 + v28;
            v29 = v21 + 2;
            v21 -= 2;
          } while (v29 > 3);
          v30 = a3 + v10;
          v31 = a4 + 2 * v10;
          v32 = 0;
          v33 = 0;
          *(_DWORD*)(result + 4 * v9) = v18;
          v34 = (__int16*)v16;
          v35 = (__int16*)(a2 + v7 - 4);
          v36 = v6 - 2;
          do {
            v37 =
                (__int16)(v35[1] - (*(unsigned __int8*)(v15 + v36 + 1) << 7)) *
                *v34;
            v38 = *v35;
            v35 -= 2;
            v39 = v37 - (v32 >> 1);
            v40 = v38 - (*(unsigned __int8*)(v15 + v36) << 7);
            if (v39 < 0) {
              v39 = -v39;
            }
            v41 = v39 + v33;
            v42 = *(v34 - 1);
            v34 -= 2;
            v32 = v40 * v42;
            v43 = v32 - (v37 >> 1);
            if (v43 < 0) {
              v43 = -v43;
            }
            v33 = v41 + v43;
            v44 = v36 + 2;
            v36 -= 2;
          } while (v44 > 3);
          *(_DWORD*)(result + 4 + 4 * v9) = v33;
          a3 = v30 + v10;
          a4 = v31 + 2 * v10;
          v9 += 2;
          v13 = (__int16*)((char*)v13 + v14);
          v15 += v12;
          v16 += v14;
        } while (v9 != v11);
      }
      if ((v8 & 1) != 0) {
        v45 = v7 - 4;
        v46 = a3 - 2;
        v47 = 0;
        v48 = 0;
        v49 = (__int16*)(a2 + v7 - 4);
        v50 = (__int16*)(a4 + v45);
        do {
          v51 = (__int16)(v49[1] - (*(unsigned __int8*)(v46 + v6 + 1) << 7)) *
                v50[1];
          v52 = v51 - (v47 >> 1);
          if (v52 < 0) {
            v52 = -v52;
          }
          v53 = v52 + v48;
          v54 = *v49;
          v49 -= 2;
          v55 = *v50;
          v50 -= 2;
          v47 = (__int16)(v54 - (*(unsigned __int8*)(v46 + v6) << 7)) * v55;
          v56 = v47 - (v51 >> 1);
          if (v56 < 0) {
            v56 = -v56;
          }
          v48 = v53 + v56;
          v57 = v6 <= 3;
          v6 -= 2;
        } while (!v57);
        *(_DWORD*)(result + 4 * v9) = v48;
      }
    }
  }
  return result;
}

__int64 MovieHr_47020(__int16* a1, __int16* a2, int a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  int v10;
  __int16* v11;
  __int16* v12;
  __int16* v13;
  __int16* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 result;
  int v19;
  __int64 v20;
  __int64 v21;
  __int16* v22;
  __int16* v23;
  int v24;
  int v25;
  bool v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int16* v50;
  int v51;
  int v52;
  int v53;
  __int16* v54;
  int v55;
  int v56;
  __int64 v57;
  unsigned __int64 v58;
  __int16* v59;
  int v60;
  int v61;
  __int64 v62;
  __int16* v63;
  int v64;
  __int16* v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  __int16 v73;
  int v74;
  unsigned int v75;
  int v76;
  __int64 v77;
  __int64 v78;
  int v79;
  unsigned __int64 v80;
  __int16* v81;
  __int16* v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  __int16* v90;
  __int16* v91;
  int v92;
  int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int16* v97;
  __int16* v98;
  __int64 v99;
  __int16* v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;

  v4 = a3;
  v5 = (unsigned int)a3 - 1LL;
  v6 = a3;
  v7 = (unsigned int)a3 - 2LL;
  v10 = 0;
  v11 = a2 + 4;
  v12 = a2 + 8;
  v13 = a1 + 8;
  v14 = &a1[v4];
  v15 = ((_BYTE)a3 - 1) & 7;
  v16 = (__int64)&a2[v4 - 3];
  do {
    v17 = *a2;
    LODWORD(result) = *a1 - v17;
    if (a3 < 2) {
      v19 = 0;
      goto LABEL_37;
    }
    if (v7 < 7) {
      v19 = 0;
      v20 = 1;
      if (v15 == 0) {
        goto LABEL_37;
      }
    LABEL_33:
      v43 = v5 & 7;
      do {
        if (a1[v20] - (a1[v20 - 1] + a2[v20]) < (int)result) {
          v19 = v20;
          LODWORD(result) = a1[v20] - (a1[v20 - 1] + a2[v20]);
        }
        ++v20;
        --v43;
      } while (v43 != 0);
      goto LABEL_37;
    }
    v19 = 0;
    v21 = 0;
    v22 = v13;
    v23 = v12;
    do {
      v24 = *(v22 - 7);
      v25 = v24 - (*(v22 - 8) + *(v23 - 7));
      v26 = v25 < (int)result;
      if (v25 < (int)result) {
        LODWORD(result) = v24 - (*(v22 - 8) + *(v23 - 7));
      }
      v27 = *(v22 - 6);
      if (v26) {
        v19 = v21 + 1;
      }
      v28 = v27 - (v24 + *(v23 - 6));
      if (v28 < (int)result) {
        v19 = v21 + 2;
        LODWORD(result) = v28;
      }
      v29 = *(v22 - 5);
      v30 = v29 - (v27 + *(v23 - 5));
      if (v30 < (int)result) {
        v19 = v21 + 3;
        LODWORD(result) = v30;
      }
      v31 = *(v22 - 4);
      v32 = v31 - (v29 + *(v23 - 4));
      if (v32 < (int)result) {
        v19 = v21 + 4;
        LODWORD(result) = v32;
      }
      v33 = *(v22 - 3);
      v34 = v33 - (v31 + *(v23 - 3));
      if (v34 < (int)result) {
        v19 = v21 + 5;
        LODWORD(result) = v34;
      }
      v35 = *(v22 - 2);
      v36 = v35 - (v33 + *(v23 - 2));
      if (v36 < (int)result) {
        v19 = v21 + 6;
        LODWORD(result) = v36;
      }
      v37 = *(v22 - 1);
      v38 = v21 + 7;
      v21 += 8;
      v39 = v37 - (v35 + *(v23 - 1));
      if (v39 < (int)result) {
        v19 = v38;
      }
      v40 = *v23;
      if (v39 < (int)result) {
        LODWORD(result) = v39;
      }
      v41 = *v22;
      v23 += 8;
      v22 += 8;
      v42 = v41 - (v37 + v40);
      if (v42 < (int)result) {
        v19 = v21;
        LODWORD(result) = v42;
      }
    } while (v21 != (v5 & 0xFFFFFFFFFFFFFFF8LL));
    v20 = v21 + 1;
    if (v15 != 0) {
      goto LABEL_33;
    }
  LABEL_37:
    v44 = a2[v6];
    v45 = 0x8000 - (*(v14 - 1) + v44);
    if (v45 >= (int)result) {
      result = (unsigned int)result;
    }
    else {
      v19 = a3;
      result = (unsigned int)v45;
    }
    if ((result & 0x80000000) == 0) {
      return result;
    }
    if (v19 == 0) {
      *a1 = v17;
      goto LABEL_3;
    }
    if (v19 == a3) {
      *(v14 - 1) = 0x8000 - v44;
      goto LABEL_3;
    }
    if (v19 < 1) {
      v47 = 0;
    }
    else {
      if ((unsigned int)v19 >= 8) {
        v49 = 0;
        v47 = 0;
        v50 = v11;
        do {
          v49 -= 8;
          v51 = v50[3];
          v52 = v47 + *(v50 - 4) + *(v50 - 3) + *(v50 - 2) + *(v50 - 1) + *v50 +
                v50[1];
          v53 = v50[2];
          v50 += 8;
          v47 = v52 + v53 + v51;
        } while (-(__int64)(v19 & 0x7FFFFFF8) != v49);
        v46 = -v49;
        v48 = v19 & 7;
        if ((v19 & 7) == 0) {
          goto LABEL_54;
        }
      LABEL_52:
        v54 = &a2[v46];
        do {
          v55 = *v54++;
          --v48;
          v47 += v55;
        } while (v48 != 0);
        goto LABEL_54;
      }
      v46 = 0;
      v47 = 0;
      v48 = v19 & 7;
      if ((v19 & 7) != 0) {
        goto LABEL_52;
      }
    }
  LABEL_54:
    if (a3 <= v19) {
      v56 = 0x8000;
    }
    else {
      if ((unsigned __int64)(v19 - v6) <= 0xFFFFFFFFFFFFFFF8LL) {
        v58 = (v6 - v19) & 0xFFFFFFFFFFFFFFF8LL;
        v56 = 0x8000;
        v59 = (__int16*)v16;
        v57 = v6;
        do {
          v57 -= 8;
          v58 -= 8LL;
          v60 = v59[3] + v59[2] + v59[1] + *v59 + *(v59 - 1) + *(v59 - 2) +
                *(v59 - 3);
          v61 = *(v59 - 4);
          v59 -= 8;
          v56 = v56 - v61 - v60;
        } while (v58 != 0);
      }
      else {
        v56 = 0x8000;
        v57 = v6;
      }
      v62 = ((_BYTE)v6 - (_BYTE)v19) & 7;
      if ((((_BYTE)v6 - (_BYTE)v19) & 7) != 0) {
        v63 = &a2[v57];
        do {
          v64 = *v63--;
          --v62;
          v56 -= v64;
        } while (v62 != 0);
      }
    }
    v65 = &a1[v19];
    v66 = v19;
    v67 = a2[v66] >> 1;
    v68 = *v65 + *(v65 - 1);
    v69 = v47 + v67;
    v70 = v56 - v67;
    v71 = (v68 & 1) + (v68 >> 1);
    if (v69 <= v70) {
      v72 = v70;
    }
    else {
      v72 = v69;
    }
    if (v69 >= v70) {
      v69 = v70;
    }
    if (v71 > v69) {
      LOWORD(v69) = v71;
    }
    if (v71 > v72) {
      LOWORD(v69) = v72;
    }
    v73 = v69 - v67;
    *(v65 - 1) = v73;
    *v65 = v73 + a2[v66];
  LABEL_3:
    ++v10;
  } while (v10 != 20);
  result = MovieRoutine_590a0(a1, (unsigned int)a3);
  v74 = *a1;
  if (v74 <= *a2) {
    LOWORD(v74) = *a2;
  }
  *a1 = v74;
  v75 = a3 - 2;
  if (a3 < 2) {
    v79 = *(v14 - 1);
    if (v79 >= 0x8000 - a2[v6]) {
      LOWORD(v79) = 0x8000 - a2[v6];
    }
    *(v14 - 1) = v79;
  }
  else {
    LOWORD(v76) = *a1;
    v77 = v5 & 3;
    if (v7 >= 3) {
      v80 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      v81 = a2 + 4;
      v82 = a1 + 4;
      v78 = 1;
      do {
        v78 += 4;
        v83 = *(v81 - 3) + (__int16)v76;
        if (v83 >= 0x7FFF) {
          v83 = 0x7FFF;
        }
        if (v83 <= *(v82 - 3)) {
          v83 = *(v82 - 3);
        }
        v84 = *(v82 - 2);
        if (v83 <= -32768) {
          v83 = -32768;
        }
        *(v82 - 3) = v83;
        v85 = *(v81 - 2) + v83;
        if (v85 >= 0x7FFF) {
          v85 = 0x7FFF;
        }
        if (v85 <= v84) {
          v85 = v84;
        }
        v86 = *(v82 - 1);
        if (v85 <= -32768) {
          v85 = -32768;
        }
        *(v82 - 2) = v85;
        v87 = *(v81 - 1) + v85;
        if (v87 >= 0x7FFF) {
          v87 = 0x7FFF;
        }
        if (v87 <= v86) {
          v87 = v86;
        }
        v88 = *v82;
        if (v87 <= -32768) {
          v87 = -32768;
        }
        *(v82 - 1) = v87;
        v89 = *v81;
        v81 += 4;
        v76 = v89 + v87;
        if (v76 >= 0x7FFF) {
          v76 = 0x7FFF;
        }
        if (v76 <= v88) {
          v76 = v88;
        }
        if (v76 <= -32768) {
          LOWORD(v76) = 0x8000;
        }
        v80 -= 4LL;
        *v82 = v76;
        v82 += 4;
      } while (v80 != 0);
    }
    else {
      v78 = 1;
    }
    if ((v5 & 3) != 0) {
      v90 = &a2[v78];
      v91 = &a1[v78];
      do {
        v92 = *v90++;
        v76 = v92 + (__int16)v76;
        if (v76 >= 0x7FFF) {
          v76 = 0x7FFF;
        }
        if (v76 <= *v91) {
          v76 = *v91;
        }
        if (v76 <= -32768) {
          LOWORD(v76) = 0x8000;
        }
        --v77;
        *v91++ = v76;
      } while (v77 != 0);
    }
    v93 = *(v14 - 1);
    if (v93 >= 0x8000 - a2[v6]) {
      LOWORD(v93) = 0x8000 - a2[v6];
    }
    *(v14 - 1) = v93;
    LOWORD(v93) = a1[v75 + 1];
    if ((~(_BYTE)v75 & 3) != 0) {
      v94 = (unsigned int)(a3 - 2);
      v95 = ((_BYTE)a3 - 1) & 3;
      do {
        v96 = v94--;
        v93 = (__int16)v93 - a2[v96 + 1];
        if (a1[v96] < v93) {
          LOWORD(v93) = a1[v96];
        }
        --v95;
        a1[v96] = v93;
      } while (v95 != 0);
    }
    else {
      v94 = (unsigned int)(a3 - 2);
    }
    if (v75 >= 3) {
      v97 = &a1[v94];
      v98 = &a2[v94];
      v99 = v94 + 1;
      v100 = v97 - 1;
      do {
        v101 = (__int16)v93 - v98[1];
        if (v100[1] < v101) {
          LOWORD(v101) = v100[1];
        }
        v102 = *v100;
        v100[1] = v101;
        v103 = (__int16)v101 - *v98;
        if (v102 < v103) {
          LOWORD(v103) = v102;
        }
        v104 = *(v100 - 1);
        *v100 = v103;
        v105 = (__int16)v103 - *(v98 - 1);
        if (v104 < v105) {
          LOWORD(v105) = v104;
        }
        v106 = *(v100 - 2);
        *(v100 - 1) = v105;
        v107 = *(v98 - 2);
        v98 -= 4;
        v93 = (__int16)v105 - v107;
        if (v106 < v93) {
          LOWORD(v93) = v106;
        }
        v99 -= 4;
        *(v100 - 2) = v93;
        v100 -= 4;
      } while (v99 != 0);
    }
  }
  return result;
}

__int64 MovieHr_4a340(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5,
                      __int64 a6, __int64 a7, __int64 a8, __int16* a9,
                      __int16* a10, __int16* a11, int a12, int a13, __int16 a14,
                      int a15, int a16, unsigned int a17, int a18, int a19,
                      int a20, int a21, int a22, __int16 a23, unsigned int a24,
                      int* a25, unsigned int a26)
{
  __int64 v26;
  __int64 result;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  __int16* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int* v48;
  __int64 v49;
  bool v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  bool v60;
  bool v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  _DWORD* v75;
  int* v76;
  int v77;
  int v78;
  int v79;
  __int64 v80;
  int v81;
  int v82;
  __int64 v83;
  unsigned __int64 v84;
  __int16* v85;
  int* v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  unsigned __int64 v115;
  int v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int16* v121;
  __int64 v122;
  int* v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  char* v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  unsigned int v141;
  unsigned int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  unsigned int v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  int v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  char* v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  char* v165;
  int v166;
  bool v167;
  int v168;
  bool v169;
  int v170;
  bool v171;
  int v172;
  bool v173;
  int v174;
  bool v175;
  int v176;
  bool v177;
  int v178;
  bool v179;
  int v180;
  __int64 v181;
  __int64 v182;
  char* v183;
  int v184;
  int v185;
  char* v186;
  _DWORD* v187;
  __int64 i;
  int v189;
  int v190;
  unsigned int v191;
  unsigned int v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  char* v201;
  char* v202;
  __int64 v203;
  __int64 v204;
  _DWORD* v205;
  __int64 v206;
  __int64 v207;
  int v208;
  __int64 v209;
  int v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  int* v215;
  int v216;
  _DWORD* v217;
  int v218;
  _DWORD* v219;
  int v220;
  int v221;
  int v222;
  int v223;
  int v224;
  int v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  int v231;
  int v232;
  int v233;
  int v234;
  int v235;
  int v236;
  int v237;
  int v238;
  int v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  char* v243;
  __int64 v244;
  __int64 v245;
  int v246;
  _DWORD* v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  char* v254;
  int v255;
  bool v256;
  int v257;
  bool v258;
  int v259;
  bool v260;
  int v261;
  bool v262;
  int v263;
  bool v264;
  int v265;
  bool v266;
  int v267;
  bool v268;
  int v269;
  bool v270;
  int v271;
  bool v272;
  int v273;
  bool v274;
  int v275;
  bool v276;
  int v277;
  bool v278;
  int v279;
  bool v280;
  int v281;
  bool v282;
  int v283;
  __int64 v284;
  bool v285;
  int v286;
  __int64 v287;
  char* v288;
  int v289;
  bool v290;
  int v291;
  int v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  _QWORD* v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  _QWORD* v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  _QWORD* v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  _QWORD* v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  __int64* v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  _QWORD* v353;
  __int64 v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  char* v361;
  char* v362;
  char* v363;
  char* v364;
  __int16* v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  int* v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  char* v375;
  char* v376;
  unsigned __int64 v377;
  __int64 v378;
  __int64 v379;
  unsigned __int64 v380;
  __int64 v381;
  __int64 v382;
  int v383;
  int* v384;
  int v385;
  int v386;
  int v387;
  __int64 v388;
  unsigned __int64 v389;
  __int64 v390;
  __int64 v391;
  int* v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  __int64 v396;
  int v397;
  __int64 v398;
  __int64 v399;
  __int16* v400;
  unsigned __int64 v401;
  int v402;
  int v403;
  int v404;
  int v405;
  int v406;
  unsigned __int64 v407;
  int v408;
  int v409;
  int v410;
  int v411;
  __int64 v412;
  int v413;
  int v414;
  __int64 v415;
  int v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  int v420;
  __int64 v421;
  __int64 v422;
  __int16* v423;
  char* v424;
  __int64 v425;
  int v426;

  v26 = (unsigned int)a19;
  v396 = a1;
  v369 = a7;
  v368 = a6;
  v367 = a5;
  v387 = a3;
  v424 = (char*)&v360 - ((56LL * (int)a24 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  result = MovieRoutine_82ce0(v424, 0, 56LL * (int)a24);
  v31 = (int)a24;
  if (a19 >= 1) {
    v378 = -(__int64)(a24 & 0xFFFFFFF8);
    v32 = *(_DWORD*)(v396 + 4332);
    v395 = a26;
    v421 = a24;
    v422 = (unsigned int)a21;
    v425 = 0;
    v426 = a18;
    v385 = a16 >> 6;
    v33 = *(_DWORD*)(v396 + 4336);
    v386 = a12;
    v406 = a18 + 944;
    v374 = (__int16)a13;
    v373 = (__int64)a13 >> 16;
    v392 = (int*)(v396 + 1280 + 4LL * (v33 - a12 + 1));
    v420 = a17;
    v419 = a14;
    v417 = (__int64)a15 >> 16;
    v418 = (__int16)a15;
    v402 = 512 - (a17 >> 1);
    v416 = a22;
    v404 = (__int16)(944 - a18) * (__int16)a17;
    v405 = (__int16)(a18 + 944) * (__int16)a17;
    v415 = a21 - 1LL;
    v407 = a21 - 3LL;
    v34 = (v407 >> 1) + 1;
    v366 = v396 + 1280;
    v409 = (a17 >> 1) - 512;
    v384 = (int*)(v369 + 4LL * (v32 - a12) + 8);
    v412 = v34 & 3;
    v401 = v34 & 0xFFFFFFFFFFFFFFFCLL;
    v383 = a20;
    v35 = a11;
    v365 = a10;
    v423 = a11;
    v413 = a21 >> 1;
    v414 = a22 >> 1;
    v403 = a18 - 944;
    v410 = (__int16)a17;
    v411 = a18 * (__int16)a17;
    v397 = a18 + 80;
    v408 = a18 - 80;
    result = 5200LL * ((a24 >> 2) & 0x1FFFFFFF);
    v391 = (int)a26;
    v379 = a2 + 384;
    v36 = a24 - 1LL;
    v380 = a24 - 2LL;
    v37 = v36 & 0xFFFFFFFFFFFFFFF8LL;
    v394 = v36 & 7;
    v377 = v36;
    v393 = a24 & 7;
    v371 = (int*)(a2 + 1220);
    v400 = a11 + 4;
    v370 = a2 + 1188;
    v375 = v424 + 228;
    v363 = v424 + 4;
    v376 = v424 + 32;
    v361 = v424 + 256;
    v362 = v424 + 112;
    v372 = a24 & 3;
    v38 = 1300 * v372;
    v39 = a2;
    v399 = a2 + 64;
    v364 = v424 + 12;
    v390 = result;
    v389 = v36 & 0xFFFFFFFFFFFFFFF8LL;
    v388 = v38;
    do {
      v398 = v39;
      if (v387 == 2) {
        v40 = 2 * (((((*v384 * (__int64)*v365) << 16) +
                     ((unsigned __int64)(*(v384 - 1) * (__int64)v365[1]) >>
                      16 << 32) +
                     ((unsigned __int64)(*(v384 - 2) * (__int64)v365[2]) >>
                      16 << 32) +
                     (((*(v384 - 3) * (__int64)v365[3]) << 16) &
                      0x7FFFFFFF00000000LL) +
                     0x200000000LL) >>
                    32) +
                   ((unsigned __int64)(v365[4] * (__int64)*(v384 - 4)) >> 16));
        ++v384;
        if (v386 >= 1) {
          goto LABEL_9;
        }
      }
      else {
        v40 = 0;
        if (v386 >= 1) {
        LABEL_9:
          v44 = *(v392 - 1);
          v43 = *v392;
          v45 = *(v392 - 2);
          ++v392;
          v41 =
              v40 - 4 * (((unsigned __int64)(v374 * (v45 + v43)) >> 16) +
                         ((unsigned __int64)(v44 * (__int64)(int)v373) >> 16));
          if ((int)v31 <= 0) {
          LABEL_7:
            LODWORD(v42) = *a25;
            goto LABEL_65;
          }
          goto LABEL_10;
        }
      }
      v41 = 0;
      if ((int)v31 <= 0) {
        goto LABEL_7;
      }
    LABEL_10:
      v46 = 0;
      v47 = v370;
      v48 = v371;
      v49 = v425 + 15;
      do {
        v75 = (_DWORD*)(a2 + 1300 * v46);
        v76 = &v75[v49];
        v75[322] = 196314165 * v75[322] + 907633515;
        v77 = v414 + ((unsigned __int64)(*a9 * (__int64)*v76) >> 16) +
              ((unsigned __int64)(a9[1] * (__int64)*(v76 - 1)) >> 16) +
              ((unsigned __int64)(a9[2] * (__int64)*(v76 - 2)) >> 16) +
              ((unsigned __int64)(a9[3] * (__int64)*(v76 - 3)) >> 16) +
              ((unsigned __int64)(a9[4] * (__int64)*(v76 - 4)) >> 16) +
              ((unsigned __int64)(a9[5] * (__int64)*(v76 - 5)) >> 16) +
              ((unsigned __int64)(a9[6] * (__int64)*(v76 - 6)) >> 16) +
              ((unsigned __int64)(a9[7] * (__int64)*(v76 - 7)) >> 16) +
              ((unsigned __int64)(a9[8] * (__int64)*(v76 - 8)) >> 16) +
              ((unsigned __int64)(a9[9] * (__int64)*(v76 - 9)) >> 16);
        if (v416 == 16) {
          v77 += ((unsigned __int64)(a9[10] * (__int64)*(v76 - 10)) >> 16) +
                 ((unsigned __int64)(a9[11] * (__int64)*(v76 - 11)) >> 16) +
                 ((unsigned __int64)(a9[12] * (__int64)*(v76 - 12)) >> 16) +
                 ((unsigned __int64)(a9[13] * (__int64)*(v76 - 13)) >> 16) +
                 ((unsigned __int64)(a9[14] * (__int64)*(v76 - 14)) >> 16) +
                 ((unsigned __int64)(a9[15] * (__int64)*(v76 - 15)) >> 16);
        }
        v78 = v75[296];
        v79 = v75[321] + ((unsigned __int64)(a23 * (__int64)v78) >> 16);
        v80 = (int)v75[297];
        v75[296] = v79;
        v81 = v78 + ((unsigned __int64)(a23 * (v80 - v79)) >> 16);
        v82 = v413 + ((unsigned __int64)(*v35 * (__int64)v79) >> 16);
        if ((int)v422 >= 3) {
          if (v407 >= 6) {
            v85 = v400;
            v84 = v401;
            v83 = 2;
            v86 = v48;
            do {
              v87 = *(v86 - 8);
              v88 = *(v86 - 7);
              *(v86 - 8) = v81;
              v83 += 8;
              v84 -= 4LL;
              v89 =
                  v87 + ((unsigned __int64)(a23 * (__int64)(v88 - v81)) >> 16);
              v90 = *(v85 - 3);
              *(v86 - 7) = v89;
              v91 = v82 + ((unsigned __int64)(v90 * (__int64)v81) >> 16);
              v92 = *(v86 - 6);
              v93 = *(v86 - 5);
              v94 =
                  v88 + ((unsigned __int64)(a23 * (__int64)(v92 - v89)) >> 16);
              v95 = *(v85 - 2);
              *(v86 - 6) = v94;
              v96 = v91 + ((unsigned __int64)(v95 * (__int64)v89) >> 16);
              v97 =
                  v92 + ((unsigned __int64)(a23 * (__int64)(v93 - v94)) >> 16);
              v98 = *(v85 - 1);
              *(v86 - 5) = v97;
              v99 = v96 + ((unsigned __int64)(v98 * (__int64)v94) >> 16);
              v100 = *(v86 - 4);
              v101 = *(v86 - 3);
              v102 =
                  v93 + ((unsigned __int64)(a23 * (__int64)(v100 - v97)) >> 16);
              v103 = *v85;
              *(v86 - 4) = v102;
              v104 = v99 + ((unsigned __int64)(v103 * (__int64)v97) >> 16);
              v105 = v100 +
                     ((unsigned __int64)(a23 * (__int64)(v101 - v102)) >> 16);
              v106 = v85[1];
              *(v86 - 3) = v105;
              v107 = v104 + ((unsigned __int64)(v106 * (__int64)v102) >> 16);
              v108 = *(v86 - 2);
              v109 = *(v86 - 1);
              v110 = v101 +
                     ((unsigned __int64)(a23 * (__int64)(v108 - v105)) >> 16);
              v111 = v85[2];
              *(v86 - 2) = v110;
              v112 = v107 + ((unsigned __int64)(v111 * (__int64)v105) >> 16);
              v113 = v108 +
                     ((unsigned __int64)(a23 * (__int64)(v109 - v110)) >> 16);
              v114 = v85[3];
              *(v86 - 1) = v113;
              v115 = v114 * (__int64)v110;
              v116 = v85[4];
              v85 += 8;
              LODWORD(v115) = v112 + (v115 >> 16);
              v117 = *v86;
              v86 += 8;
              v118 = v117 - v113;
              v82 = v115 + ((unsigned __int64)(v116 * (__int64)v113) >> 16);
              v81 = v109 + ((unsigned __int64)(a23 * v118) >> 16);
            } while (v84 != 0);
          }
          else {
            v83 = 2;
          }
          if (v412 != 0) {
            v119 = v412;
            v120 = 4 * v83;
            v121 = &v35[v83];
            v122 = v47;
            do {
              v123 = (int*)(v122 + v120);
              --v119;
              v122 += 8;
              v124 = *(v123 - 2);
              v125 = *(v123 - 1);
              *(v123 - 2) = v81;
              v126 = v124 +
                     ((unsigned __int64)(a23 * (__int64)(v125 - v81)) >> 16);
              v127 = *(v121 - 1);
              *(v123 - 1) = v126;
              v128 = v82 + ((unsigned __int64)(v127 * (__int64)v81) >> 16);
              v129 = *v123;
              LODWORD(v123) = *v121;
              v121 += 2;
              v82 =
                  v128 + ((unsigned __int64)((int)v123 * (__int64)v126) >> 16);
              v81 = v125 + ((unsigned __int64)(a23 * (v129 - v126)) >> 16);
            } while (v119 != 0);
          }
        }
        v130 = v415;
        v131 = 16 * v77;
        v132 = v420;
        v133 = &v424[56 * v46];
        v75[v415 + 296] = v81;
        v134 = v75[320];
        v135 = (((unsigned __int64)((int)v419 * (__int64)v134) >> 14) &
                0xFFFFFFFC) +
               8 * (v82 + ((unsigned __int64)(v35[v130] * (__int64)v81) >> 16));
        v42 = *a25;
        v136 = 4 *
               (((unsigned __int64)((int)v418 * (__int64)(int)v75[v42 + 256]) >>
                 16) +
                ((unsigned __int64)(v134 * (__int64)(int)v417) >> 16));
        v137 = *(_DWORD*)(a4 + 4 * v425);
        v138 = v137 - ((((v131 + v41 - (v135 + v136)) >> 3) + 1) >> 1);
        v139 = v75[322];
        if (v139 < 0) {
          v138 = ((((v131 + v41 - (v135 + v136)) >> 3) + 1) >> 1) - v137;
        }
        if (v138 <= -31744) {
          v138 = -31744;
        }
        if (v138 >= 30720) {
          v138 = 30720;
        }
        v140 = v138 - v426;
        if (v132 < 2049) {
          goto LABEL_61;
        }
        v141 = v140 - v409;
        if (v140 > v409) {
          v142 = v141 >> 10;
          if (v141 >> 10 == 0) {
            goto LABEL_56;
          }
        LABEL_62:
          v54 = v408 + (v142 << 10);
          v143 = v410;
          v53 = v54 + 1024;
          v144 = (__int16)v54;
          v145 = (__int16)(v54 + 1024);
          goto LABEL_63;
        }
        if (v140 < v402) {
          v140 += v409;
        LABEL_61:
          v142 = v140 >> 10;
          if (v140 >> 10 >= 1) {
            goto LABEL_62;
          }
        LABEL_56:
          v51 = v411;
          v52 = v405;
          v53 = v406;
          v54 = v426;
          if (v142 == 0) {
            goto LABEL_23;
          }
          v54 = v403;
          v51 = v404;
          v52 = v411;
          v53 = v426;
          if (v142 == -1) {
            goto LABEL_23;
          }
          v54 = v397 + (v142 << 10);
          v143 = v410;
          v53 = v54 + 1024;
          v144 = (__int16)-(__int16)v54;
          v145 = (__int16)(-1024 - v54);
        LABEL_63:
          v51 = v144 * v143;
          v52 = v145 * v143;
          goto LABEL_23;
        }
        v50 = v140 >= 0;
        if (v140 >= 0) {
          v51 = v411;
        }
        else {
          v51 = v404;
        }
        if (v140 >= 0) {
          v52 = v405;
        }
        else {
          v52 = v411;
        }
        v53 = v426;
        v54 = v403;
        if (v50) {
          v54 = v426;
        }
        if (v50) {
          v53 = v406;
        }
      LABEL_23:
        v55 = v75[324];
        ++v46;
        v48 += 325;
        v47 += 1300;
        v56 = (v51 + (__int16)(v138 - v54) * (__int16)(v138 - v54)) >> 10;
        v57 = (v52 + (__int16)(v138 - v53) * (__int16)(v138 - v53)) >> 10;
        if (v56 >= v57) {
          v58 = v53;
        }
        else {
          v58 = v54;
        }
        if (v56 >= v57) {
          v59 = v57;
        }
        else {
          v54 = v53;
          v59 = v56;
        }
        if (v56 >= v57) {
          v57 = v56;
        }
        v60 = v139 < 0;
        v61 = v139 < 0;
        v62 = 16 * v58;
        v63 = v55 + v59;
        v64 = v55 + v57;
        if (v60) {
          v62 = -16 * v58;
        }
        *(_DWORD*)v133 = v58;
        *((_DWORD*)v133 + 1) = v63;
        if (v61) {
          v65 = -16 * v54;
        }
        else {
          v65 = 16 * v54;
        }
        v35 = v423;
        v66 = v62 + v40;
        *((_DWORD*)v133 + 6) = v66;
        *((_DWORD*)v133 + 7) = v54;
        v67 = v65 + v40;
        v68 = v66 + v131;
        v69 = v65 + v40 + v131;
        v70 = v68 - 16 * v137;
        *((_DWORD*)v133 + 8) = v64;
        *((_DWORD*)v133 + 9) = v69;
        v71 = v421;
        v72 = v69 - 16 * v137;
        v73 = v70 - v135;
        v74 = v72 - v135;
        *((_DWORD*)v133 + 2) = v68;
        *((_DWORD*)v133 + 3) = v73;
        *((_DWORD*)v133 + 10) = v74;
        *((_DWORD*)v133 + 11) = v72;
        *((_DWORD*)v133 + 4) = v70;
        *((_DWORD*)v133 + 5) = v73 - v136;
        *((_DWORD*)v133 + 12) = v74 - v136;
        *((_DWORD*)v133 + 13) = v67;
      } while (v46 != v71);
      result = v390;
      v37 = v389;
      v38 = v388;
    LABEL_65:
      v146 = ((int)v42 - 1) % 40 + (((int)v42 - 1) % 40 < 0 ? 0x28 : 0);
      v147 = v395;
      *a25 = v146;
      v148 = (v146 + v147) % 40;
      v149 = *((_DWORD*)v424 + 1);
      if ((int)v31 <= 1) {
        v152 = v148;
        if ((int)v31 < 1) {
          v194 = 0;
          v195 = 0;
          v153 = a2;
          if (*((_DWORD*)v424 + 8) < v149) {
            goto LABEL_139;
          }
          goto LABEL_140;
        }
        v153 = a2;
        v154 = v378;
        v155 = *(_DWORD*)(v379 + 4LL * v148);
        if (v377 < 7) {
          goto LABEL_130;
        }
      LABEL_70:
        v156 = 4 * v152;
        v157 = 0;
        v158 = a2;
        v159 = v375;
        while (2) {
          v160 = v158 + v156;
          if (*(_DWORD*)(v158 + v156 + 384) == v155) {
            if (*(_DWORD*)(v160 + 1684) == v155) {
              goto LABEL_74;
            }
          LABEL_82:
            *((_DWORD*)v159 - 42) += 0x7FFFFFF;
            *((_DWORD*)v159 - 35) += 0x7FFFFFF;
            v161 = v158 + v156;
            if (*(_DWORD*)(v158 + v156 + 2984) != v155) {
              goto LABEL_83;
            }
          LABEL_75:
            if (*(_DWORD*)(v161 + 4284) == v155) {
              goto LABEL_76;
            }
          LABEL_84:
            *((_DWORD*)v159 - 14) += 0x7FFFFFF;
            *((_DWORD*)v159 - 7) += 0x7FFFFFF;
            v162 = v158 + v156;
            if (*(_DWORD*)(v158 + v156 + 5584) != v155) {
              goto LABEL_85;
            }
          LABEL_77:
            if (*(_DWORD*)(v162 + 6884) == v155) {
              goto LABEL_78;
            }
          LABEL_86:
            *((_DWORD*)v159 + 14) += 0x7FFFFFF;
            *((_DWORD*)v159 + 21) += 0x7FFFFFF;
            v163 = v158 + v156;
            if (*(_DWORD*)(v158 + v156 + 8184) != v155) {
              goto LABEL_87;
            }
          LABEL_79:
            if (*(_DWORD*)(v163 + 9484) != v155) {
              goto LABEL_88;
            }
          }
          else {
            *((_DWORD*)v159 - 56) += 0x7FFFFFF;
            *((_DWORD*)v159 - 49) += 0x7FFFFFF;
            if (*(_DWORD*)(v160 + 1684) != v155) {
              goto LABEL_82;
            }
          LABEL_74:
            v161 = v158 + v156;
            if (*(_DWORD*)(v158 + v156 + 2984) == v155) {
              goto LABEL_75;
            }
          LABEL_83:
            *((_DWORD*)v159 - 28) += 0x7FFFFFF;
            *((_DWORD*)v159 - 21) += 0x7FFFFFF;
            if (*(_DWORD*)(v161 + 4284) != v155) {
              goto LABEL_84;
            }
          LABEL_76:
            v162 = v158 + v156;
            if (*(_DWORD*)(v158 + v156 + 5584) == v155) {
              goto LABEL_77;
            }
          LABEL_85:
            *(_DWORD*)v159 += 0x7FFFFFF;
            *((_DWORD*)v159 + 7) += 0x7FFFFFF;
            if (*(_DWORD*)(v162 + 6884) != v155) {
              goto LABEL_86;
            }
          LABEL_78:
            v163 = v158 + v156;
            if (*(_DWORD*)(v158 + v156 + 8184) == v155) {
              goto LABEL_79;
            }
          LABEL_87:
            *((_DWORD*)v159 + 28) += 0x7FFFFFF;
            *((_DWORD*)v159 + 35) += 0x7FFFFFF;
            if (*(_DWORD*)(v163 + 9484) != v155) {
            LABEL_88:
              *((_DWORD*)v159 + 42) += 0x7FFFFFF;
              *((_DWORD*)v159 + 49) += 0x7FFFFFF;
            }
          }
          v158 += 10400;
          v157 -= 8;
          v159 += 448;
          if (v154 == v157) {
            v164 = -v157;
            if (v393 == 0) {
              goto LABEL_135;
            }
            goto LABEL_131;
          }
          continue;
        }
      }
      if (v380 >= 7) {
        v150 = 0;
        v165 = v375;
        v151 = 1;
        do {
          v166 = *((_DWORD*)v165 - 42);
          v167 = v166 < v149;
          if (v166 < v149) {
            v149 = *((_DWORD*)v165 - 42);
          }
          v168 = *((_DWORD*)v165 - 28);
          if (v167) {
            v150 = v151;
          }
          v169 = v168 < v149;
          if (v168 < v149) {
            v149 = *((_DWORD*)v165 - 28);
          }
          v170 = *((_DWORD*)v165 - 14);
          if (v169) {
            v150 = v151 + 1;
          }
          v171 = v170 < v149;
          if (v170 < v149) {
            v149 = *((_DWORD*)v165 - 14);
          }
          v172 = *(_DWORD*)v165;
          if (v171) {
            v150 = v151 + 2;
          }
          v173 = v172 < v149;
          if (v172 < v149) {
            v149 = *(_DWORD*)v165;
          }
          v174 = *((_DWORD*)v165 + 14);
          if (v173) {
            v150 = v151 + 3;
          }
          v175 = v174 < v149;
          if (v174 < v149) {
            v149 = *((_DWORD*)v165 + 14);
          }
          v176 = *((_DWORD*)v165 + 28);
          if (v175) {
            v150 = v151 + 4;
          }
          v177 = v176 < v149;
          if (v176 < v149) {
            v149 = *((_DWORD*)v165 + 28);
          }
          v178 = *((_DWORD*)v165 + 42);
          if (v177) {
            v150 = v151 + 5;
          }
          v179 = v178 < v149;
          if (v178 < v149) {
            v149 = *((_DWORD*)v165 + 42);
          }
          v180 = *((_DWORD*)v165 + 56);
          if (v179) {
            v150 = v151 + 6;
          }
          v181 = v151 + 7;
          v151 += 8;
          v165 += 448;
          if (v180 < v149) {
            v150 = v181;
            v149 = v180;
          }
        } while (v181 != v37);
      }
      else {
        v150 = 0;
        v151 = 1;
      }
      v154 = v378;
      if (v394 != 0) {
        v182 = v394;
        v183 = &v363[56 * v151];
        do {
          v185 = *(_DWORD*)v183;
          v183 += 56;
          v184 = v185;
          if (v185 < v149) {
            v150 = v151;
            v149 = v184;
          }
          LODWORD(v151) = v151 + 1;
          --v182;
        } while (v182 != 0);
      }
      v152 = v148;
      v153 = a2 + 1300LL * v150;
      v155 = *(_DWORD*)(v153 + 4LL * v148 + 384);
      if (v377 >= 7) {
        goto LABEL_70;
      }
    LABEL_130:
      v164 = 0;
      if (v393 != 0) {
      LABEL_131:
        v186 = &v376[56 * v164];
        v187 = (_DWORD*)(v379 + 1300 * v164 + 4 * v152);
        for (i = v393; i != 0; --i) {
          if (*v187 != v155) {
            *((_DWORD*)v186 - 7) += 0x7FFFFFF;
            *(_DWORD*)v186 += 0x7FFFFFF;
          }
          v187 += 325;
          v186 += 56;
        }
      }
    LABEL_135:
      v189 = *((_DWORD*)v424 + 1);
      v190 = *((_DWORD*)v424 + 8);
      if ((int)v31 < 2) {
        v194 = 0;
        v195 = 0;
        if (v190 < v189) {
          goto LABEL_139;
        }
      }
      else {
        if (v380 >= 7) {
          v191 = 0;
          v192 = 0;
          v254 = v361;
          v193 = 1;
          do {
            v255 = *((_DWORD*)v254 - 49);
            v256 = v255 <= v189;
            if (v255 > v189) {
              v189 = *((_DWORD*)v254 - 49);
            }
            v257 = *((_DWORD*)v254 - 42);
            if (!v256) {
              v191 = v193;
            }
            v258 = v257 < v190;
            if (v257 < v190) {
              v190 = *((_DWORD*)v254 - 42);
            }
            v259 = *((_DWORD*)v254 - 35);
            if (v258) {
              v192 = v193;
            }
            v260 = v259 <= v189;
            if (v259 > v189) {
              v189 = *((_DWORD*)v254 - 35);
            }
            v261 = *((_DWORD*)v254 - 28);
            if (!v260) {
              v191 = v193 + 1;
            }
            v262 = v261 < v190;
            if (v261 < v190) {
              v190 = *((_DWORD*)v254 - 28);
            }
            v263 = *((_DWORD*)v254 - 21);
            if (v262) {
              v192 = v193 + 1;
            }
            v264 = v263 <= v189;
            if (v263 > v189) {
              v189 = *((_DWORD*)v254 - 21);
            }
            v265 = *((_DWORD*)v254 - 14);
            if (!v264) {
              v191 = v193 + 2;
            }
            v266 = v265 < v190;
            if (v265 < v190) {
              v190 = *((_DWORD*)v254 - 14);
            }
            v267 = *((_DWORD*)v254 - 7);
            if (v266) {
              v192 = v193 + 2;
            }
            v268 = v267 <= v189;
            if (v267 > v189) {
              v189 = *((_DWORD*)v254 - 7);
            }
            v269 = *(_DWORD*)v254;
            if (!v268) {
              v191 = v193 + 3;
            }
            v270 = v269 < v190;
            if (v269 < v190) {
              v190 = *(_DWORD*)v254;
            }
            v271 = *((_DWORD*)v254 + 7);
            if (v270) {
              v192 = v193 + 3;
            }
            v272 = v271 <= v189;
            if (v271 > v189) {
              v189 = *((_DWORD*)v254 + 7);
            }
            v273 = *((_DWORD*)v254 + 14);
            if (!v272) {
              v191 = v193 + 4;
            }
            v274 = v273 < v190;
            if (v273 < v190) {
              v190 = *((_DWORD*)v254 + 14);
            }
            v275 = *((_DWORD*)v254 + 21);
            if (v274) {
              v192 = v193 + 4;
            }
            v276 = v275 <= v189;
            if (v275 > v189) {
              v189 = *((_DWORD*)v254 + 21);
            }
            v277 = *((_DWORD*)v254 + 28);
            if (!v276) {
              v191 = v193 + 5;
            }
            v278 = v277 < v190;
            if (v277 < v190) {
              v190 = *((_DWORD*)v254 + 28);
            }
            v279 = *((_DWORD*)v254 + 35);
            if (v278) {
              v192 = v193 + 5;
            }
            v280 = v279 <= v189;
            if (v279 > v189) {
              v189 = *((_DWORD*)v254 + 35);
            }
            v281 = *((_DWORD*)v254 + 42);
            if (!v280) {
              v191 = v193 + 6;
            }
            v282 = v281 < v190;
            if (v281 < v190) {
              v190 = *((_DWORD*)v254 + 42);
            }
            v283 = *((_DWORD*)v254 + 49);
            if (v282) {
              v192 = v193 + 6;
            }
            v284 = v193 + 7;
            v193 += 8;
            v285 = v283 <= v189;
            if (v283 > v189) {
              v189 = *((_DWORD*)v254 + 49);
            }
            v286 = *((_DWORD*)v254 + 56);
            if (!v285) {
              v191 = v284;
            }
            v254 += 448;
            if (v286 < v190) {
              v192 = v284;
              v190 = v286;
            }
          } while (v284 != v37);
        }
        else {
          v191 = 0;
          v192 = 0;
          v193 = 1;
        }
        if (v394 != 0) {
          v287 = v394;
          v288 = &v376[56 * v193];
          do {
            v289 = *((_DWORD*)v288 - 7);
            v290 = v289 <= v189;
            if (v289 > v189) {
              v189 = *((_DWORD*)v288 - 7);
            }
            v292 = *(_DWORD*)v288;
            v288 += 56;
            v291 = v292;
            if (!v290) {
              v191 = v193;
            }
            if (v291 < v190) {
              v192 = v193;
              v190 = v291;
            }
            LODWORD(v193) = v193 + 1;
            --v287;
          } while (v287 != 0);
        }
        v195 = v191;
        v194 = v192;
        if (v190 < v189) {
        LABEL_139:
          v196 = a4;
          v197 = v26;
          v198 = a8;
          v199 = v31;
          v200 = v152;
          v382 = v195;
          v381 = v194;
          MovieRoutine_82920(a2 + 1300LL * (unsigned int)v195 + 4 * v425,
                             a2 + 1300LL * (unsigned int)v194 + 4 * v425,
                             1300 - 4 * v425);
          v35 = v423;
          v152 = v200;
          v31 = v199;
          a8 = v198;
          v26 = v197;
          a4 = v196;
          v38 = v388;
          v37 = v389;
          result = v390;
          v201 = &v424[56 * (unsigned int)v382];
          v202 = &v424[56 * (unsigned int)v381];
          v203 = *(_QWORD*)(v202 + 36);
          *(_QWORD*)v201 = *(_QWORD*)(v202 + 28);
          *((_QWORD*)v201 + 1) = v203;
          v204 = *(_QWORD*)(v202 + 44);
          LODWORD(v202) = *((_DWORD*)v202 + 13);
          *((_QWORD*)v201 + 2) = v204;
          *((_DWORD*)v201 + 6) = (_DWORD)v202;
        }
      }
    LABEL_140:
      if (v383 > 0 || v425 >= v391) {
        v205 = (_DWORD*)(v153 + 4 * v152);
        v206 = v425 - v391;
        *(_BYTE*)(v367 + v425 - v391) =
            (unsigned int)((v205[136] >> 9) + 1) >> 1;
        v207 = v366;
        v208 = (((int)((unsigned __int64)(*(int*)(a8 + 4 * v152) *
                                          (__int64)(int)v205[176]) >>
                       16) >>
                 7) +
                1) >>
               1;
        if (v208 <= -32768) {
          v208 = -32768;
        }
        if (v208 >= 0x7FFF) {
          LOWORD(v208) = 0x7FFF;
        }
        *(_WORD*)(v368 + 2 * v206) = v208;
        v210 = v395;
        v209 = v396;
        *(_DWORD*)(v207 + 4LL * (*(_DWORD*)(v396 + 4336) - (int)v395)) =
            v205[256];
        *(_DWORD*)(v369 + 4LL * (*(_DWORD*)(v209 + 4332) - v210)) = v205[216];
      }
      v211 = v396;
      ++*(_DWORD*)(v396 + 4336);
      ++*(_DWORD*)(v211 + 4332);
      if ((int)v31 >= 1) {
        if ((unsigned int)v31 >= 4) {
          v213 = v398;
          v214 = 0;
          v212 = 0;
          v215 = (int*)v362;
          do {
            v216 = *(v215 - 26);
            v217 = (_DWORD*)(a2 + v214);
            v212 += 4;
            v217[320] = *(v215 - 25);
            v218 = *(v215 - 23);
            v217[321] = *(v215 - 24);
            v219 = (_DWORD*)(v213 + v214);
            v219[16] = v216;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 704) = v216;
            v220 = *(v215 - 28);
            v221 = *(v215 - 27);
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 544) = v220;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 864) = 2 * *(v215 - 22);
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 1024) = v218;
            v222 = *(_DWORD*)(a2 + v214 + 1288) + (((v220 >> 9) + 1) >> 1);
            v217[322] = v222;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 384) = v222;
            v224 = *(v215 - 12);
            v223 = *(v215 - 11);
            v217[324] = v221;
            v217[645] = v223;
            v225 = *(v215 - 9);
            v217[646] = *(v215 - 10);
            v219[341] = v224;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 2004) = v224;
            v226 = *(v215 - 14);
            v227 = *(v215 - 13);
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 1844) = v226;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 2164) = 2 * *(v215 - 8);
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 2324) = v225;
            v228 = *(_DWORD*)(a2 + v214 + 2588) + (((v226 >> 9) + 1) >> 1);
            v217[647] = v228;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 1684) = v228;
            v230 = v215[2];
            v229 = v215[3];
            v217[649] = v227;
            v217[970] = v229;
            v231 = v215[5];
            v217[971] = v215[4];
            v219[666] = v230;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 3304) = v230;
            v232 = *v215;
            v233 = v215[1];
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 3144) = *v215;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 3464) = 2 * v215[6];
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 3624) = v231;
            v234 = *(_DWORD*)(a2 + v214 + 3888) + (((v232 >> 9) + 1) >> 1);
            v217[972] = v234;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 2984) = v234;
            v217[974] = v233;
            v235 = v215[16];
            v236 = v215[18];
            v237 = v215[19];
            v217[1295] = v215[17];
            v217[1296] = v236;
            v219[991] = v235;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 4604) = v235;
            v238 = v215[14];
            v239 = v215[15];
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 4444) = v238;
            LODWORD(v219) = v215[20];
            v215 += 56;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 4764) = 2 * (_DWORD)v219;
            *(_DWORD*)(a2 + v214 + 4LL * *a25 + 4924) = v237;
            LODWORD(v219) =
                *(_DWORD*)(a2 + v214 + 5188) + (((v238 >> 9) + 1) >> 1);
            v217[1297] = (_DWORD)v219;
            v240 = v214 + 4LL * *a25;
            v214 += 5200;
            *(_DWORD*)(a2 + v240 + 4284) = (_DWORD)v219;
            v217[1299] = v239;
          } while (result != v214);
        }
        else {
          v212 = 0;
        }
        if (v372 != 0) {
          v241 = 0;
          v242 = 1300 * v212;
          v243 = &v364[56 * v212];
          v244 = v399 + v242;
          v245 = a2 + v242;
          do {
            v246 = *((_DWORD*)v243 + 1);
            v247 = (_DWORD*)(v245 + v241);
            v247[320] = *(_DWORD*)v243;
            v249 = *((_DWORD*)v243 - 2);
            v248 = *((_DWORD*)v243 - 1);
            v247[321] = v246;
            *(_DWORD*)(v244 + v241) = v248;
            v241 += 1300;
            v247[*a25 + 176] = v248;
            v250 = *((_DWORD*)v243 - 3);
            v247[*a25 + 136] = v250;
            v252 = *((_DWORD*)v243 + 2);
            v251 = *((_DWORD*)v243 + 3);
            v243 += 56;
            v247[*a25 + 216] = 2 * v251;
            v247[*a25 + 256] = v252;
            v253 = v247[322] + (((v250 >> 9) + 1) >> 1);
            v247[322] = v253;
            v247[*a25 + 96] = v253;
            v247[324] = v249;
          } while (v38 != v241);
        }
      }
      *(_DWORD*)(a8 + 4LL * *a25) = v385;
      v39 = v398 + 4;
      v399 += 4;
      ++v425;
    } while (v425 != v26);
  }
  if ((int)v31 >= 1) {
    v293 = v31 & 7;
    if ((unsigned int)v31 >= 8) {
      v295 = 0;
      v294 = 0;
      v296 = a2 + 4LL * (int)v26;
      v297 = a2 + 6500 + 4LL * (int)v26;
      do {
        v298 = (_QWORD*)(a2 + v295);
        v294 += 8;
        v299 = *(_QWORD*)(v296 + v295);
        v300 = *(_QWORD*)(v296 + v295 + 8);
        v301 = *(_QWORD*)(v296 + v295 + 24);
        v298[2] = *(_QWORD*)(v296 + v295 + 16);
        v298[3] = v301;
        *v298 = v299;
        v298[1] = v300;
        v302 = *(_QWORD*)(v296 + v295 + 32);
        v303 = *(_QWORD*)(v296 + v295 + 40);
        v304 = *(_QWORD*)(v296 + v295 + 56);
        v298[6] = *(_QWORD*)(v296 + v295 + 48);
        v298[7] = v304;
        v298[4] = v302;
        v298[5] = v303;
        v305 = (_QWORD*)(a2 + v295 + 1300);
        v306 = *(_QWORD*)(v296 + v295 + 1356);
        v308 = *(_QWORD*)(v296 + v295 + 1332);
        v307 = *(_QWORD*)(v296 + v295 + 1340);
        v305[6] = *(_QWORD*)(v296 + v295 + 1348);
        v305[7] = v306;
        v305[4] = v308;
        v305[5] = v307;
        v309 = *(_QWORD*)(v296 + v295 + 1300);
        v310 = *(_QWORD*)(v296 + v295 + 1308);
        v311 = *(_QWORD*)(v296 + v295 + 1324);
        v305[2] = *(_QWORD*)(v296 + v295 + 1316);
        v305[3] = v311;
        *v305 = v309;
        v305[1] = v310;
        v312 = *(_QWORD*)(v296 + v295 + 2600);
        v313 = *(_QWORD*)(v296 + v295 + 2608);
        v314 = *(_QWORD*)(v296 + v295 + 2616);
        v298[328] = *(_QWORD*)(v296 + v295 + 2624);
        v298[327] = v314;
        v298[326] = v313;
        v298[325] = v312;
        v315 = *(_QWORD*)(v296 + v295 + 2632);
        v316 = *(_QWORD*)(v296 + v295 + 2640);
        v317 = *(_QWORD*)(v296 + v295 + 2648);
        v298[332] = *(_QWORD*)(v296 + v295 + 2656);
        v298[331] = v317;
        v298[330] = v316;
        v298[329] = v315;
        v318 = (_QWORD*)(a2 + v295 + 3900);
        v319 = *(_QWORD*)(v296 + v295 + 3900);
        v320 = *(_QWORD*)(v296 + v295 + 3908);
        v321 = *(_QWORD*)(v296 + v295 + 3924);
        v318[2] = *(_QWORD*)(v296 + v295 + 3916);
        v318[3] = v321;
        *v318 = v319;
        v318[1] = v320;
        v322 = *(_QWORD*)(v296 + v295 + 3932);
        v323 = *(_QWORD*)(v296 + v295 + 3940);
        v324 = *(_QWORD*)(v296 + v295 + 3956);
        v318[6] = *(_QWORD*)(v296 + v295 + 3948);
        v318[7] = v324;
        v318[4] = v322;
        v318[5] = v323;
        v325 = *(_QWORD*)(v296 + v295 + 5200);
        v326 = *(_QWORD*)(v296 + v295 + 5208);
        v327 = *(_QWORD*)(v296 + v295 + 5216);
        v298[653] = *(_QWORD*)(v296 + v295 + 5224);
        v298[652] = v327;
        v298[651] = v326;
        v298[650] = v325;
        v328 = *(_QWORD*)(v296 + v295 + 5232);
        v329 = *(_QWORD*)(v296 + v295 + 5240);
        v330 = *(_QWORD*)(v296 + v295 + 5248);
        v298[657] = *(_QWORD*)(v296 + v295 + 5256);
        v298[656] = v330;
        v298[655] = v329;
        v298[654] = v328;
        v331 = (_QWORD*)(a2 + 6500 + v295);
        v332 = *(_QWORD*)(v297 + v295);
        v333 = *(_QWORD*)(v297 + v295 + 8);
        v334 = *(_QWORD*)(v297 + v295 + 24);
        v331[2] = *(_QWORD*)(v297 + v295 + 16);
        v331[3] = v334;
        *v331 = v332;
        v331[1] = v333;
        v335 = *(_QWORD*)(v297 + v295 + 32);
        v336 = *(_QWORD*)(v297 + v295 + 40);
        v337 = *(_QWORD*)(v297 + v295 + 56);
        v331[6] = *(_QWORD*)(v297 + v295 + 48);
        v331[7] = v337;
        v331[4] = v335;
        v331[5] = v336;
        v338 = *(_QWORD*)(v296 + v295 + 7800);
        v339 = *(_QWORD*)(v296 + v295 + 7808);
        v340 = *(_QWORD*)(v296 + v295 + 7816);
        v298[978] = *(_QWORD*)(v296 + v295 + 7824);
        v298[977] = v340;
        v298[976] = v339;
        v298[975] = v338;
        v341 = *(_QWORD*)(v296 + v295 + 7832);
        v342 = *(_QWORD*)(v296 + v295 + 7840);
        v343 = *(_QWORD*)(v296 + v295 + 7848);
        v298[982] = *(_QWORD*)(v296 + v295 + 7856);
        v298[981] = v343;
        v298[980] = v342;
        v298[979] = v341;
        v344 = (__int64*)(a2 + 9100 + 4LL * (int)v26 + v295);
        result = a2 + 9100 + v295;
        v295 += 10400;
        v345 = *v344;
        v346 = v344[1];
        v347 = v344[3];
        *(_QWORD*)(result + 16) = v344[2];
        *(_QWORD*)(result + 24) = v347;
        *(_QWORD*)result = v345;
        *(_QWORD*)(result + 8) = v346;
        v348 = v344[4];
        v349 = v344[5];
        v351 = v344[6];
        v350 = v344[7];
        *(_QWORD*)(result + 48) = v351;
        *(_QWORD*)(result + 56) = v350;
        *(_QWORD*)(result + 32) = v348;
        *(_QWORD*)(result + 40) = v349;
      } while (10400LL * (((unsigned int)v31 >> 3) & 0xFFFFFFF) != v295);
    }
    else {
      v294 = 0;
    }
    if ((v31 & 7) != 0) {
      v352 = 4LL * (int)v26;
      v353 = (_QWORD*)(a2 + 1300 * v294);
      do {
        --v293;
        v354 = *(_QWORD*)((char*)v353 + 4 * (int)v26);
        v355 = *(_QWORD*)((char*)v353 + v352 + 8);
        v356 = *(_QWORD*)((char*)v353 + v352 + 24);
        v353[2] = *(_QWORD*)((char*)v353 + v352 + 16);
        v353[3] = v356;
        *v353 = v354;
        v353[1] = v355;
        v357 = *(_QWORD*)((char*)v353 + v352 + 32);
        v358 = *(_QWORD*)((char*)v353 + v352 + 40);
        v359 = *(_QWORD*)((char*)v353 + v352 + 56);
        v353[6] = *(_QWORD*)((char*)v353 + v352 + 48);
        v353[7] = v359;
        v353[4] = v357;
        v353[5] = v358;
        v353 = (_QWORD*)((char*)v353 + 1300);
      } while (v293 != 0);
    }
  }
  return result;
}

__int64 MovieHr_4bba0(__int64 a1, __int64 a2, __int64 a3, int a4,
                      unsigned int a5)
{
  int v5;
  int v7;
  __int64 result;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int16* v21;
  int v22;
  __int64* v23;
  __int64 v24;
  bool v25;
  unsigned int v26;
  __int64 v28;

  v5 = *(_DWORD*)(a1 + 2316);
  if (v5 != *(_DWORD*)(a1 + 4276)) {
    v7 = *(_DWORD*)(a1 + 2328);
    *(_DWORD*)(a1 + 4276) = v5;
    *(_DWORD*)(a1 + 4196) = v7 << 7;
    *(_QWORD*)(a1 + 4268) = 0x1000000010000LL;
    *(_QWORD*)(a1 + 4280) = 0x1400000002LL;
  }
  if (a4 != 0) {
    result = MovieRoutine_4be00(a1, a2, a3, a5);
    ++*(_DWORD*)(a1 + 4184);
    return result;
  }
  v9 = *(char*)(a1 + 2789);
  *(_DWORD*)(a1 + 4188) = v9;
  if (v9 == 2) {
    v10 = *(_DWORD*)(a1 + 2332);
    v11 = *(int*)(a1 + 2324);
    if ((_DWORD)v11 != 0 && (v12 = *(_DWORD*)(a2 + 4 * (v11 - 1))) > 0) {
      v13 = 0;
      v14 = v10;
      v15 = a2 + 96;
      v16 = (_QWORD*)(a1 + 4200);
      v17 = 1LL - (unsigned int)v11;
      v18 = v11 - 1;
      v19 = ((_DWORD)v11 << 16) - 0x10000;
      v20 = 5 * v11 - 5;
      do {
        v21 = (__int16*)(v15 + 2LL * v20);
        v22 = v21[1] + *v21 + v21[2] + v21[3] + v21[4];
        if (v22 > v13) {
          v23 = (__int64*)(v15 + 10LL * (v19 >> 16));
          v24 = *v23;
          *(_WORD*)(a1 + 4208) = *((_WORD*)v23 + 4);
          *v16 = v24;
          *(_DWORD*)(a1 + 4196) = *(_DWORD*)(a2 + 4LL * v18) << 8;
          v13 = v22;
          v12 = *(_DWORD*)(a2 + 4 * (v11 - 1));
        }
        if (v17 == 0) {
          break;
        }
        ++v17;
        --v18;
        v19 -= 0x10000;
        v20 -= 5;
        v25 = v14 < v12;
        v14 += v10;
      } while (v25);
      *(_WORD*)(a1 + 4208) = 0;
      *v16 = 0;
      *(_WORD*)(a1 + 4204) = v13;
      if (v13 > 11468) {
        if ((unsigned int)v13 >= 0x3CCE) {
          *(_WORD*)(a1 + 4204) = (0xF334000u / v13 * (__int16)v13) >> 14;
        }
        goto LABEL_22;
      }
    }
    else {
      v13 = 0;
      *(_DWORD*)(a1 + 4200) = 0;
    }
    *(_DWORD*)(a1 + 4200) = 0;
    if (v13 <= 1) {
      v26 = 1;
    }
    else {
      v26 = v13;
    }
    *(_WORD*)(a1 + 4204) =
        (unsigned int)((__int16)(0xB33400 / v26) * (__int16)v13) >> 10;
    *(_DWORD*)(a1 + 4206) = 0;
    goto LABEL_22;
  }
  LODWORD(v11) = *(_DWORD*)(a1 + 2324);
  v10 = *(_DWORD*)(a1 + 2332);
  *(_QWORD*)(a1 + 4200) = 0;
  *(_WORD*)(a1 + 4208) = 0;
  *(_DWORD*)(a1 + 4196) = 4608 * (__int16)v5;
LABEL_22:
  result = MovieRoutine_82920(a1 + 4210, a2 + 64, 2LL * *(int*)(a1 + 2340));
  *(_WORD*)(a1 + 4264) = *(_DWORD*)(a2 + 136);
  v28 = *(_QWORD*)(a2 + 4LL * (int)v11 + 8);
  *(_DWORD*)(a1 + 4284) = v10;
  *(_DWORD*)(a1 + 4280) = v11;
  *(_QWORD*)(a1 + 4268) = v28;
  return result;
}

__int64 MovieHr_4cbc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, int* a6, int a7, int a8)
{
  __int64 v16;
  char* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _WORD* v22;
  __int64 v23;
  int* v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char* v32;
  int* v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int* v41;
  char* v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  char* v50;
  int* v51;
  int v52;
  int v53;
  __int64 vars0;

  v16 = 4LL * a7;
  v17 = (char*)&vars0 - ((v16 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  MovieRoutine_82ce0(v17, 0, v16);
  if (a7 < 1) {
    goto LABEL_58;
  }
  v18 = *a6;
  v19 = (a8 - 2) * a7;
  v20 = a7 & 3;
  if ((unsigned int)a7 < 4) {
    v21 = 0;
    if ((a7 & 3) == 0) {
      goto LABEL_30;
    }
    goto LABEL_24;
  }
  v22 = v17 + 4;
  v23 = 0;
  v24 = (int*)(a5 + 4 * v19 + 8);
  do {
    v25 = *(v24 - 1);
    v23 -= 4;
    v26 = (int)((unsigned __int64)(v18 * (__int64)*(v24 - 2)) >> 16) >> 8;
    if (v26 <= -32768) {
      v26 = -32768;
    }
    if (v26 >= 0x7FFF) {
      LOWORD(v26) = 0x7FFF;
    }
    *(v22 - 2) = v26;
    v27 = (int)((unsigned __int64)(v18 * (__int64)v25) >> 16) >> 8;
    if (v27 <= -32768) {
      v27 = -32768;
    }
    if (v27 >= 0x7FFF) {
      LOWORD(v27) = 0x7FFF;
    }
    *(v22 - 1) = v27;
    v29 = *v24;
    v28 = v24[1];
    v24 += 4;
    v30 = (int)((unsigned __int64)(v18 * (__int64)v29) >> 16) >> 8;
    if (v30 <= -32768) {
      v30 = -32768;
    }
    if (v30 >= 0x7FFF) {
      LOWORD(v30) = 0x7FFF;
    }
    *v22 = v30;
    v31 = (int)((unsigned __int64)(v18 * (__int64)v28) >> 16) >> 8;
    if (v31 <= -32768) {
      v31 = -32768;
    }
    if (v31 >= 0x7FFF) {
      LOWORD(v31) = 0x7FFF;
    }
    v22[1] = v31;
    v22 += 4;
  } while (-(__int64)(a7 & 0x7FFFFFFC) != v23);
  v21 = -v23;
  if ((a7 & 3) != 0) {
  LABEL_24:
    v32 = &v17[2 * v21];
    v33 = (int*)(a5 + 4 * v21 + 4 * v19);
    do {
      v34 = *v33++;
      v35 = (int)((unsigned __int64)(v18 * (__int64)v34) >> 16) >> 8;
      if (v35 <= -32768) {
        v35 = -32768;
      }
      if (v35 >= 0x7FFF) {
        LOWORD(v35) = 0x7FFF;
      }
      --v20;
      *(_WORD*)v32 = v35;
      v32 += 2;
    } while (v20 != 0);
  }
LABEL_30:
  v36 = a6[1];
  v37 = (a8 - 1) * a7;
  v38 = a7 & 3;
  if ((unsigned int)a7 < 4) {
    v39 = 0;
    if ((a7 & 3) == 0) {
      goto LABEL_58;
    }
    goto LABEL_52;
  }
  v40 = 0;
  v41 = (int*)(a5 + 4 * v37 + 8);
  v42 = &v17[2 * a7 + 4];
  do {
    v43 = *(v41 - 1);
    v40 -= 4;
    v44 = (int)((unsigned __int64)(v36 * (__int64)*(v41 - 2)) >> 16) >> 8;
    if (v44 <= -32768) {
      v44 = -32768;
    }
    if (v44 >= 0x7FFF) {
      LOWORD(v44) = 0x7FFF;
    }
    *((_WORD*)v42 - 2) = v44;
    v45 = (int)((unsigned __int64)(v36 * (__int64)v43) >> 16) >> 8;
    if (v45 <= -32768) {
      v45 = -32768;
    }
    if (v45 >= 0x7FFF) {
      LOWORD(v45) = 0x7FFF;
    }
    *((_WORD*)v42 - 1) = v45;
    v46 = *v41;
    v47 = v41[1];
    v41 += 4;
    v48 = (int)((unsigned __int64)(v36 * (__int64)v46) >> 16) >> 8;
    if (v48 <= -32768) {
      v48 = -32768;
    }
    if (v48 >= 0x7FFF) {
      LOWORD(v48) = 0x7FFF;
    }
    *(_WORD*)v42 = v48;
    v49 = (int)((unsigned __int64)(v36 * (__int64)v47) >> 16) >> 8;
    if (v49 <= -32768) {
      v49 = -32768;
    }
    if (v49 >= 0x7FFF) {
      LOWORD(v49) = 0x7FFF;
    }
    *((_WORD*)v42 + 1) = v49;
    v42 += 8;
  } while (-(__int64)(a7 & 0x7FFFFFFC) != v40);
  v39 = -v40;
  if ((a7 & 3) != 0) {
  LABEL_52:
    v50 = &v17[2 * v39 + 2 * a7];
    v51 = (int*)(a5 + 4 * v39 + 4 * v37);
    do {
      v52 = *v51++;
      v53 = (int)((unsigned __int64)(v36 * (__int64)v52) >> 16) >> 8;
      if (v53 <= -32768) {
        v53 = -32768;
      }
      if (v53 >= 0x7FFF) {
        LOWORD(v53) = 0x7FFF;
      }
      --v38;
      *(_WORD*)v50 = v53;
      v50 += 2;
    } while (v38 != 0);
  }
LABEL_58:
  MovieRoutine_5abc0(a1, a2, v17, (unsigned int)a7);
  return MovieRoutine_5abc0(a3, a4, &v17[2 * a7], (unsigned int)a7);
}

__int64 MovieHr_4cf00(_QWORD* a1)
{
  a1[2] = 0;
  a1[3] = 0;
  *a1 = 0;
  a1[1] = 0;
  a1[12] = 0x1000000019LL;
  a1[13] = 0xF0000000CLL;
  a1[8] = 0x640000009C4LL;
  a1[9] = 0x68DB8000004B0LL;
  a1[10] = 0x147AE1000D1B71LL;
  a1[11] = 0x32001B4E81LL;
  a1[4] = 0;
  a1[5] = 0x640000006400LL;
  a1[6] = 0x640000006400LL;
  a1[7] = 0x138800000000LL;
  return 0;
}

__int64 MovieHr_4e380(__int64 result, int a2, int a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int16* v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int16* v13;

  v3 = a2 - 1;
  if (a2 >= 2) {
    v4 = a3 - 0x10000;
    v5 = v3 & 3;
    if ((unsigned int)(a2 - 2) < 3) {
      v6 = 0;
      if ((v3 & 3) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v7 = (__int16*)(result + 4);
    v8 = 0;
    do {
      v9 = *(v7 - 1);
      v8 -= 4;
      *(v7 - 2) = (((unsigned int)(a3 * *(v7 - 2)) >> 15) + 1) >> 1;
      v10 = a3 + ((((a3 * v4) >> 15) + 1) >> 1);
      *(v7 - 1) = (((unsigned int)(v10 * v9) >> 15) + 1) >> 1;
      v11 = v10 + ((((v10 * v4) >> 15) + 1) >> 1);
      *v7 = (((unsigned int)(v11 * *v7) >> 15) + 1) >> 1;
      v12 = v11 + ((((v11 * v4) >> 15) + 1) >> 1);
      v7[1] = (((unsigned int)(v12 * v7[1]) >> 15) + 1) >> 1;
      v7 += 4;
      a3 = v12 + ((((v12 * v4) >> 15) + 1) >> 1);
    } while (-(__int64)(v3 & 0x7FFFFFFC) != v8);
    v6 = -v8;
    if ((v3 & 3) != 0) {
    LABEL_8:
      v13 = (__int16*)(result + 2 * v6);
      do {
        --v5;
        *v13 = (((unsigned int)(a3 * *v13) >> 15) + 1) >> 1;
        ++v13;
        a3 += (((a3 * v4) >> 15) + 1) >> 1;
      } while (v5 != 0);
    }
  }
LABEL_10:
  *(_WORD*)(result + 2LL * v3) =
      (((unsigned int)(a3 * *(__int16*)(result + 2LL * v3)) >> 15) + 1) >> 1;
  return result;
}

__int64 MovieHr_4e4e0(__int64 result, int a2, int a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int* v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  int v11;
  unsigned __int64 v12;
  int v13;
  unsigned __int64 v14;
  int* v15;

  v3 = a2 - 1;
  if (a2 >= 2) {
    v4 = a3 - 0x10000;
    v5 = v3 & 3;
    if ((unsigned int)(a2 - 2) < 3) {
      v6 = 0;
      if ((v3 & 3) == 0) {
        goto LABEL_10;
      }
      goto LABEL_8;
    }
    v7 = (int*)(result + 8);
    v8 = 0;
    do {
      v8 -= 4;
      v9 = a3 + ((((a3 * v4) >> 15) + 1) >> 1);
      v10 = (unsigned __int64)(*(v7 - 1) * (__int64)v9) >> 16;
      *(v7 - 2) = (unsigned __int64)(*(v7 - 2) * (__int64)a3) >> 16;
      *(v7 - 1) = v10;
      v11 = v9 + ((((v9 * v4) >> 15) + 1) >> 1);
      v12 = *v7 * (__int64)v11;
      v13 = v11 + ((((v11 * v4) >> 15) + 1) >> 1);
      v14 = (unsigned __int64)(v7[1] * (__int64)v13) >> 16;
      *v7 = v12 >> 16;
      v7[1] = v14;
      v7 += 4;
      a3 = v13 + ((((v13 * v4) >> 15) + 1) >> 1);
    } while (-(__int64)(v3 & 0x7FFFFFFC) != v8);
    v6 = -v8;
    if ((v3 & 3) != 0) {
    LABEL_8:
      v15 = (int*)(result + 4 * v6);
      do {
        --v5;
        *v15 = (unsigned __int64)(*v15 * (__int64)a3) >> 16;
        ++v15;
        a3 += (((a3 * v4) >> 15) + 1) >> 1;
      } while (v5 != 0);
    }
  }
LABEL_10:
  *(_DWORD*)(result + 4LL * v3) =
      (unsigned __int64)(*(int*)(result + 4LL * v3) * (__int64)a3) >> 16;
  return result;
}

__int64 MovieHr_4ee30(_DWORD* a1, int a2)
{
  int v2;
  int v3;
  unsigned __int8* v4;
  int v5;
  unsigned __int8* v6;
  int v7;
  bool v8;
  unsigned int v9;
  unsigned int v11;

  v2 = a1[1144];
  v3 = a1[1145];
  v4 = (unsigned __int8*)&MovieData_a5ea0;
  a1[1152] = a2;
  if (v3 == 2) {
    v5 = a2 - v2 / 16 - 2000;
  }
  else {
    v5 = a2;
  }
  v6 = (unsigned __int8*)&MovieData_a5d9a;
  if (v2 == 12) {
    v7 = 154;
  }
  else {
    v7 = 190;
  }
  if (v2 == 12) {
    v4 = (unsigned __int8*)&MovieData_a5e05;
  }
  v8 = v2 == 8;
  if (v2 == 8) {
    v9 = 106;
  }
  else {
    v9 = v7;
  }
  if (!v8) {
    v6 = v4;
  }
  if (v5 >= 4200) {
    v11 = (v5 + 200) / 0x190u - 10;
    if (v11 >= v9) {
      v11 = v9;
    }
    a1[1183] = 21 * v6[v11];
    return 0;
  }
  else {
    a1[1183] = 0;
    return 0;
  }
}

__int64 MovieHr_4f080(__int64 a1, _DWORD* a2, int a3, int a4, int a5)
{
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  int v20;
  int v21;
  void* v22;
  __int64 result;
  int v24;
  int v25;
  void* v26;
  void* v27;
  int v28;
  int v29;
  void* v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;

  *(_DWORD*)(a1 + 6096) = a2[12];
  *(_DWORD*)(a1 + 4676) = a2[13];
  v8 = a2[2];
  *(_DWORD*)(a1 + 4556) = v8;
  *(_DWORD*)(a1 + 4564) = a2[3];
  *(_DWORD*)(a1 + 4568) = a2[4];
  *(_DWORD*)(a1 + 4572) = a2[5];
  *(_DWORD*)(a1 + 6108) = a2[10];
  *(_DWORD*)(a1 + 5768) = *a2;
  v9 = a2[1];
  *(_DWORD*)(a1 + 4536) = a3;
  *(_DWORD*)(a1 + 5776) = a4;
  *(_DWORD*)(a1 + 5772) = v9;
  if (*(_DWORD*)(a1 + 4668) != 0 && *(_DWORD*)(a1 + 4680) == 0) {
    if (v8 == *(_DWORD*)(a1 + 4560) || *(int*)(a1 + 4576) < 1) {
      return 0;
    }
    else {
      return MovieRoutine_4f690(a1);
    }
  }
  v10 = MovieRoutine_4eef0(a1, a2);
  if (a5 == 0) {
    a5 = v10;
  }
  v11 = MovieRoutine_4f690(a1);
  v12 = a2[6];
  v13 = v11;
  if (v12 != *(_DWORD*)(a1 + 4612)) {
    if ((unsigned int)v12 <= 0x3C &&
        ((1LL << v12) & 0x1000010000100400LL) != 0) {
      v14 = 0;
      v19 = v12 == 10;
      if (v12 <= 10) {
      LABEL_14:
        *(_DWORD*)(a1 + 5760) = 1;
        if (v19) {
          v20 = 2;
        }
        else {
          v20 = 1;
        }
        *(_DWORD*)(a1 + 4580) = v20;
        *(_DWORD*)(a1 + 4584) = (__int16)v12 * (__int16)a5;
        *(_DWORD*)(a1 + 4548) = 14 * (__int16)a5;
        v21 = *(_DWORD*)(a1 + 4576);
        if (v21 != 8) {
          *(_QWORD*)(a1 + 4696) = MovieData_c0a08;
          *(_DWORD*)(a1 + 4612) = v12;
          *(_DWORD*)(a1 + 4608) = 0;
          if (v21 != a5) {
            goto LABEL_35;
          }
          goto LABEL_7;
        }
        v22 = MovieData_c0a00;
      LABEL_32:
        *(_QWORD*)(a1 + 4696) = v22;
        *(_DWORD*)(a1 + 4612) = v12;
        *(_DWORD*)(a1 + 4608) = 0;
        if (a5 != 8) {
          goto LABEL_35;
        }
      LABEL_7:
        v15 = a2[9];
        if (v15 > 0) {
          goto LABEL_8;
        }
      LABEL_54:
        *(_DWORD*)(a1 + 4644) = 0;
        *(_DWORD*)(a1 + 4652) = 52429;
        *(_QWORD*)(a1 + 4628) = 1;
        *(_DWORD*)(a1 + 4636) = 12;
        v17 = 3 * a5;
        *(_DWORD*)(a1 + 4660) = 2;
        goto LABEL_55;
      }
    }
    else {
      v14 = -103;
      v19 = v12 == 10;
      if (v12 <= 10) {
        goto LABEL_14;
      }
    }
    *(_DWORD*)(a1 + 5760) = v12 / 0x14u;
    *(_DWORD*)(a1 + 4580) = 4;
    *(_DWORD*)(a1 + 4548) = 24 * (__int16)a5;
    v24 = *(_DWORD*)(a1 + 4576);
    *(_DWORD*)(a1 + 4584) = 20 * (__int16)a5;
    if (v24 != 8) {
      *(_QWORD*)(a1 + 4696) = MovieData_c0a18;
      *(_DWORD*)(a1 + 4612) = v12;
      *(_DWORD*)(a1 + 4608) = 0;
      if (v24 != a5) {
        goto LABEL_35;
      }
      goto LABEL_7;
    }
    v22 = MovieData_c0a10;
    goto LABEL_32;
  }
  v14 = 0;
  if (*(_DWORD*)(a1 + 4576) == a5) {
    goto LABEL_7;
  }
LABEL_35:
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 5756) = 0;
  *(_DWORD*)(a1 + 5764) = 0;
  *(_DWORD*)(a1 + 4608) = 0;
  *(_QWORD*)(a1 + 7200) = 0;
  *(_QWORD*)(a1 + 7192) = 0;
  MovieRoutine_82ce0(a1 + 148, 0, 4384);
  *(_BYTE*)(a1 + 4541) = 0;
  *(_DWORD*)(a1 + 4576) = a5;
  *(_DWORD*)(a1 + 4544) = 100;
  *(_DWORD*)(a1 + 4476) = 100;
  *(_DWORD*)(a1 + 4664) = 1;
  *(_BYTE*)(a1 + 7192) = 10;
  *(_DWORD*)(a1 + 4492) = 0x10000;
  v25 = *(_DWORD*)(a1 + 4580);
  if (a5 == 8) {
    v26 = MovieData_c0a00;
    v27 = MovieData_c0a20;
    if (v25 == 4) {
      v26 = MovieData_c0a10;
    }
    v28 = 10;
  }
  else {
    v26 = MovieData_c0a08;
    if (v25 == 4) {
      v26 = MovieData_c0a18;
    }
    if (a5 == 12) {
      v28 = 10;
    }
    else {
      v28 = 16;
    }
    v27 = MovieData_c0a28;
    if (a5 == 12) {
      v27 = MovieData_c0a20;
    }
  }
  *(_QWORD*)(a1 + 4696) = v26;
  *(_DWORD*)(a1 + 4640) = v28;
  *(_QWORD*)(a1 + 4704) = v27;
  *(_DWORD*)(a1 + 4588) = 5 * a5;
  *(_DWORD*)(a1 + 4584) = (__int16)v25 * (__int16)(5 * a5);
  *(_DWORD*)(a1 + 4592) = 20 * (__int16)a5;
  *(_DWORD*)(a1 + 4596) = 2 * (__int16)a5;
  *(_DWORD*)(a1 + 4552) = 18 * (__int16)a5;
  if (v25 == 4) {
    v29 = 24;
  }
  else {
    v29 = 14;
  }
  *(_DWORD*)(a1 + 4548) = v29 * (__int16)a5;
  v30 = MovieData_c0a38;
  if (a5 == 12) {
    v30 = MovieData_c0a30;
  }
  if (a5 == 16) {
    v30 = MovieData_c0a40;
  }
  *(_QWORD*)(a1 + 4688) = v30;
  v15 = a2[9];
  if (v15 <= 0) {
    goto LABEL_54;
  }
LABEL_8:
  if (v15 != 1) {
    if ((unsigned int)v15 > 2) {
      if (v15 != 3) {
        if ((unsigned int)v15 > 5) {
          v17 = 5 * a5;
          *(_DWORD*)(a1 + 4600) = 5 * a5;
          if ((unsigned int)v15 > 7) {
            *(_QWORD*)(a1 + 4644) = 0x1000000002LL;
            *(_DWORD*)(a1 + 4652) = 45875;
            *(_DWORD*)(a1 + 4636) = 24;
            *(_QWORD*)(a1 + 4628) = 0x100000004LL;
            v18 = 16;
            *(_DWORD*)(a1 + 4660) = 16;
          }
          else {
            *(_QWORD*)(a1 + 4644) = 0xC00000001LL;
            *(_DWORD*)(a1 + 4652) = 47186;
            *(_DWORD*)(a1 + 4636) = 20;
            *(_QWORD*)(a1 + 4628) = 0x100000003LL;
            *(_DWORD*)(a1 + 4660) = 8;
            v18 = 12;
          }
          *(_DWORD*)(a1 + 4672) = 983 * a5;
        }
        else {
          *(_QWORD*)(a1 + 4644) = 0xA00000001LL;
          *(_QWORD*)(a1 + 4628) = 0x100000002LL;
          *(_DWORD*)(a1 + 4652) = 48497;
          *(_DWORD*)(a1 + 4660) = 6;
          *(_DWORD*)(a1 + 4636) = 16;
          v17 = 5 * a5;
          *(_DWORD*)(a1 + 4600) = 5 * a5;
          *(_DWORD*)(a1 + 4672) = 983 * a5;
          v18 = 10;
        }
        goto LABEL_57;
      }
      *(_QWORD*)(a1 + 4644) = 0x800000001LL;
      *(_DWORD*)(a1 + 4652) = 49807;
      *(_QWORD*)(a1 + 4628) = 2;
      v16 = 4;
      goto LABEL_10;
    }
    *(_QWORD*)(a1 + 4644) = 0x600000000LL;
    *(_DWORD*)(a1 + 4660) = 2;
    *(_DWORD*)(a1 + 4652) = 52429;
    *(_QWORD*)(a1 + 4628) = 2;
    *(_DWORD*)(a1 + 4636) = 12;
    v17 = 3 * a5;
  LABEL_55:
    *(_DWORD*)(a1 + 4600) = v17;
    v18 = 6;
    goto LABEL_56;
  }
  *(_DWORD*)(a1 + 4652) = 49807;
  *(_DWORD*)(a1 + 4644) = 1;
  *(_QWORD*)(a1 + 4628) = 1;
  v16 = 3;
LABEL_10:
  *(_DWORD*)(a1 + 4636) = 14;
  v17 = 5 * a5;
  *(_DWORD*)(a1 + 4600) = 5 * a5;
  *(_DWORD*)(a1 + 4660) = v16;
  v18 = 8;
LABEL_56:
  *(_DWORD*)(a1 + 4672) = 0;
LABEL_57:
  v31 = *(_DWORD*)(a1 + 4640);
  *(_DWORD*)(a1 + 4624) = v15;
  result = (unsigned int)(v14 + v13);
  if (v18 >= v31) {
    v18 = v31;
  }
  *(_DWORD*)(a1 + 4648) = v18;
  v32 = *(_DWORD*)(a1 + 6112);
  *(_DWORD*)(a1 + 4604) = 5 * a5 + 2 * v17;
  v33 = a2[8];
  *(_DWORD*)(a1 + 4616) = v33;
  v34 = a2[11];
  *(_DWORD*)(a1 + 6112) = v34;
  if (v34 != 0) {
    v35 = 7;
    if (v32 != 0) {
      v35 = 7 - ((unsigned __int64)(26214LL * v33) >> 16);
      if (v35 <= 2) {
        v35 = 2;
      }
    }
    *(_DWORD*)(a1 + 6116) = v35;
  }
  *(_DWORD*)(a1 + 4668) = 1;
  return result;
}

__int64 MovieHr_4f690(unsigned int* a1, int a2)
{
  unsigned int v2;
  __int16 v3;
  __int64 result;
  int v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _BYTE* v12;
  int v13;
  int v14;
  _BYTE v15[304];

  v2 = a1[1144];
  v3 = a2;
  if (v2 == a2 && a1[1140] == a1[1139]) {
    result = 0;
  }
  else if (v2 != 0) {
    v6 = 10 * a1[1145] + 5;
    v7 = v6 * v2;
    MovieRoutine_82ce0(v15, 0, 304);
    v8 = MovieRoutine_56bc0(v15, (unsigned int)(1000 * (__int16)v2), a1[1139],
                            0);
    v9 = (274877907LL * (int)a1[1139]) >> 38;
    v10 = (v9 + ((unsigned int)v9 >> 31)) * v6;
    v11 = 2LL * (int)v10;
    v12 = &v15[-((v11 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
    MovieRoutine_82ce0(v12, 0, v11);
    v13 = MovieRoutine_56f70(v15, v12, a1 + 1802, v7);
    v14 = v13 + v8 +
          MovieRoutine_56bc0(a1 + 1448, a1[1139], (unsigned int)(1000 * v3), 1);
    result =
        v14 + (unsigned int)MovieRoutine_56f70(a1 + 1448, a1 + 1802, v12, v10);
  }
  else {
    result =
        MovieRoutine_56bc0(a1 + 1448, a1[1139], (unsigned int)(1000 * a2), 1);
  }
  a1[1140] = a1[1139];
  return result;
}

__int64 MovieHr_4f820(__int64 a1)
{
  __int64 result;

  ((void (*)(void))MovieRoutine_55ea0)();
  result = MovieRoutine_55ea0(a1 + 4288);
  *(_QWORD*)(a1 + 8576) = 0;
  *(_DWORD*)(a1 + 8584) = 0;
  *(_DWORD*)(a1 + 8596) = 0;
  return result;
}

__int64 MovieHr_51e80(__int64 result, char a2, __int64 a3, int a4,
                      unsigned int a5)
{
  char* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  char* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int* v33;
  char* v34;
  int v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  int* v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int* v54;
  char* v55;
  int v56;
  int v57;
  int v58;
  int v59;

  if ((int)a5 < 1) {
    return result;
  }
  v5 = (char*)MovieData_c0ab8;
  v6 = 11;
  v7 = 34;
  v8 = 2 * (__int16)a4;
  v9 = v8 + (__int16)result;
  result = a5;
  v10 = 18 * (__int16)a4;
  if (a5 == 4) {
    v5 = (char*)MovieData_c0ac0;
  }
  v11 = (char*)MovieData_c0ad0;
  if (a5 == 4) {
    v11 = (char*)MovieData_c0ac8;
  }
  else {
    v6 = 3;
    v7 = 12;
  }
  if (a4 == 8) {
    v12 = v5;
  }
  else {
    v12 = v11;
  }
  if (a4 == 8) {
    v13 = v6;
  }
  else {
    v13 = v7;
  }
  v14 = a5 & 3;
  v15 = &v12[a2];
  if (v8 <= v10) {
    if (a5 >= 4) {
      v39 = 0;
      v40 = (int*)(a3 + 8);
      result = -(__int64)(a5 & 0x7FFFFFFC);
      do {
        v39 -= 4;
        v41 = v9 + *v15;
        if (v41 <= v8) {
          v42 = v8;
        }
        else {
          v42 = v9 + *v15;
        }
        if (v41 <= v10) {
          v43 = v42;
        }
        else {
          v43 = v10;
        }
        *(v40 - 2) = v43;
        v44 = v9 + v15[v13];
        if (v44 <= v8) {
          v45 = v8;
        }
        else {
          v45 = v9 + v15[v13];
        }
        if (v44 <= v10) {
          v46 = v45;
        }
        else {
          v46 = v10;
        }
        *(v40 - 1) = v46;
        v47 = v9 + v15[2 * v13];
        if (v47 <= v8) {
          v48 = v8;
        }
        else {
          v48 = v9 + v15[2 * v13];
        }
        if (v47 <= v10) {
          v49 = v48;
        }
        else {
          v49 = v10;
        }
        *v40 = v49;
        v50 = v15[3 * v13];
        v15 += 4 * v13;
        v51 = v9 + v50;
        if (v51 <= v8) {
          v52 = v8;
        }
        else {
          v52 = v51;
        }
        if (v51 <= v10) {
          v53 = v52;
        }
        else {
          v53 = v10;
        }
        v40[1] = v53;
        v40 += 4;
      } while (result != v39);
      v17 = -v39;
      if (v14 == 0) {
        return result;
      }
    }
    else {
      v17 = 0;
      if ((a5 & 3) == 0) {
        return result;
      }
    }
    v54 = (int*)(a3 + 4 * v17);
    v55 = &v12[a2 + v13 * v17];
    do {
      v56 = *v55;
      v55 += v13;
      v57 = v9 + v56;
      if (v57 <= v8) {
        v58 = v8;
      }
      else {
        v58 = v57;
      }
      if (v57 <= v10) {
        v59 = v58;
      }
      else {
        v59 = v10;
      }
      --v14;
      *v54++ = v59;
    } while (v14 != 0);
    return result;
  }
  if (a5 < 4) {
    v16 = 0;
    if ((a5 & 3) == 0) {
      return result;
    }
    goto LABEL_47;
  }
  v18 = 0;
  v19 = (int*)(a3 + 8);
  result = -(__int64)(a5 & 0x7FFFFFFC);
  do {
    v18 -= 4;
    v20 = v9 + *v15;
    if (v20 <= v10) {
      v21 = v10;
    }
    else {
      v21 = v9 + *v15;
    }
    if (v20 <= v8) {
      v22 = v21;
    }
    else {
      v22 = v8;
    }
    *(v19 - 2) = v22;
    v23 = v9 + v15[v13];
    if (v23 <= v10) {
      v24 = v10;
    }
    else {
      v24 = v9 + v15[v13];
    }
    if (v23 <= v8) {
      v25 = v24;
    }
    else {
      v25 = v8;
    }
    *(v19 - 1) = v25;
    v26 = v9 + v15[2 * v13];
    if (v26 <= v10) {
      v27 = v10;
    }
    else {
      v27 = v9 + v15[2 * v13];
    }
    if (v26 <= v8) {
      v28 = v27;
    }
    else {
      v28 = v8;
    }
    *v19 = v28;
    v29 = v15[3 * v13];
    v15 += 4 * v13;
    v30 = v9 + v29;
    if (v30 <= v10) {
      v31 = v10;
    }
    else {
      v31 = v30;
    }
    if (v30 <= v8) {
      v32 = v31;
    }
    else {
      v32 = v8;
    }
    v19[1] = v32;
    v19 += 4;
  } while (result != v18);
  v16 = -v18;
  if (v14 != 0) {
  LABEL_47:
    v33 = (int*)(a3 + 4 * v16);
    v34 = &v12[a2 + v13 * v16];
    do {
      v35 = *v34;
      v34 += v13;
      v36 = v9 + v35;
      if (v36 <= v10) {
        v37 = v10;
      }
      else {
        v37 = v36;
      }
      if (v36 <= v8) {
        v38 = v37;
      }
      else {
        v38 = v8;
      }
      --v14;
      *v33++ = v38;
    } while (v14 != 0);
  }
  return result;
}

__int64 MovieHr_52100(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      int a5)
{
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  int v14;
  int v15;
  char* v17;
  int* v18;
  int v19;
  __int64 i;
  int v21;
  _QWORD* v22;
  __int64 v23;
  void* v24;
  int v25;
  int v26;
  unsigned __int16* v27;
  int v28;
  int v29;
  int j;
  int v31;
  int k;
  int v33;
  int m;
  int v35;
  int n;
  int v37;
  int ii;
  int v39;
  int jj;
  int v41;
  int kk;
  int v43;
  int mm;
  int v45;
  int nn;
  int v47;
  int i1;
  int v49;
  int i2;
  int v51;
  int i3;
  int v53;
  int i4;
  int v55;
  int i5;
  int v57;
  int i6;
  int v59;
  unsigned int v62;
  _QWORD v64[10];
  _QWORD v65[11];

  memset(v65, 0, 80);
  v8 = MovieRoutine_37840(
      a1, (char*)MovieData_c0ad8 + 8 * ((int)a3 >> 1) + ((__int64)(int)a3 >> 1),
      8);
  v9 = a5 >> 4;
  v62 = a5;
  if ((a5 & 0xF) != 0) {
    v10 = v9 + 1;
  }
  else {
    v10 = v9;
  }
  if ((int)v10 >= 1) {
    v11 = 0;
    v12 = (char*)MovieData_c0ae0;
    v13 = (char*)MovieData_c0ae0 + 18 * v8;
    memset(v64, 0, sizeof(v64));
    do {
      *((_DWORD*)v64 + v11) = 0;
      v14 = MovieRoutine_37840(a1, v13, 8);
      if (v14 == 17) {
        v15 = 0;
        do {
          if (v15++ == 9) {
            v17 = v12 + 1;
          }
          else {
            v17 = v12;
          }
          v14 = MovieRoutine_37840(a1, v17 + 162, 8);
        } while (v14 == 17);
        *((_DWORD*)v64 + v11) = v15;
      }
      *((_DWORD*)v65 + v11++) = v14;
    } while (v11 != v10);
    v18 = (int*)v65;
    v19 = 0;
    for (i = v10; i != 0; --i) {
      while (1) {
        v21 = *v18++;
        v22 = (_QWORD*)(a2 + 2LL * (v19 >> 12));
        if (v21 < 1) {
          break;
        }
        MovieRoutine_58260(v22, a1);
        v19 += 0x10000;
        if (--i == 0) {
          goto LABEL_18;
        }
      }
      v22[2] = 0;
      v22[3] = 0;
      *v22 = 0;
      v22[1] = 0;
      v19 += 0x10000;
    }
  LABEL_18:
    v23 = 0;
    v24 = MovieData_c0ae8;
    do {
      v25 = *((_DWORD*)v64 + v23);
      if (v25 >= 1) {
        v26 = *((_DWORD*)v64 + v23);
        v27 = (unsigned __int16*)(a2 + 32LL * (__int16)v23);
        v28 = *v27;
        do {
          v28 = MovieRoutine_37840(a1, v24, 8) + 2 * v28;
          --v26;
        } while (v26 != 0);
        *v27 = v28;
        v29 = v27[1];
        for (j = v25; j != 0; --j) {
          v29 = MovieRoutine_37840(a1, v24, 8) + 2 * v29;
        }
        v27[1] = v29;
        v31 = v27[2];
        for (k = v25; k != 0; --k) {
          v31 = MovieRoutine_37840(a1, v24, 8) + 2 * v31;
        }
        v27[2] = v31;
        v33 = v27[3];
        for (m = v25; m != 0; --m) {
          v33 = MovieRoutine_37840(a1, v24, 8) + 2 * v33;
        }
        v27[3] = v33;
        v35 = v27[4];
        for (n = v25; n != 0; --n) {
          v35 = MovieRoutine_37840(a1, v24, 8) + 2 * v35;
        }
        v27[4] = v35;
        v37 = v27[5];
        for (ii = v25; ii != 0; --ii) {
          v37 = MovieRoutine_37840(a1, v24, 8) + 2 * v37;
        }
        v27[5] = v37;
        v39 = v27[6];
        for (jj = v25; jj != 0; --jj) {
          v39 = MovieRoutine_37840(a1, v24, 8) + 2 * v39;
        }
        v27[6] = v39;
        v41 = v27[7];
        for (kk = v25; kk != 0; --kk) {
          v41 = MovieRoutine_37840(a1, v24, 8) + 2 * v41;
        }
        v27[7] = v41;
        v43 = v27[8];
        for (mm = v25; mm != 0; --mm) {
          v43 = MovieRoutine_37840(a1, v24, 8) + 2 * v43;
        }
        v27[8] = v43;
        v45 = v27[9];
        for (nn = v25; nn != 0; --nn) {
          v45 = MovieRoutine_37840(a1, v24, 8) + 2 * v45;
        }
        v27[9] = v45;
        v47 = v27[10];
        for (i1 = v25; i1 != 0; --i1) {
          v47 = MovieRoutine_37840(a1, v24, 8) + 2 * v47;
        }
        v27[10] = v47;
        v49 = v27[11];
        for (i2 = v25; i2 != 0; --i2) {
          v49 = MovieRoutine_37840(a1, v24, 8) + 2 * v49;
        }
        v27[11] = v49;
        v51 = v27[12];
        for (i3 = v25; i3 != 0; --i3) {
          v51 = MovieRoutine_37840(a1, v24, 8) + 2 * v51;
        }
        v27[12] = v51;
        v53 = v27[13];
        for (i4 = v25; i4 != 0; --i4) {
          v53 = MovieRoutine_37840(a1, v24, 8) + 2 * v53;
        }
        v27[13] = v53;
        v55 = v27[14];
        for (i5 = v25; i5 != 0; --i5) {
          v55 = MovieRoutine_37840(a1, v24, 8) + 2 * v55;
        }
        v27[14] = v55;
        v57 = v27[15];
        for (i6 = v25; i6 != 0; --i6) {
          v57 = MovieRoutine_37840(a1, v24, 8) + 2 * v57;
        }
        v59 = *((_DWORD*)v65 + v23);
        v27[15] = v57;
        *((_DWORD*)v65 + v23) = v59 | (32 * v25);
      }
      ++v23;
    } while (v23 != v10);
  }
  return MovieRoutine_4ea80(a1, a2, v62, a3, a4, v65);
}

__int64 MovieHr_52610(__int64 a1, int a2, unsigned int a3)
{
  int v3;
  int v7;
  __int64 result;
  int v9;
  char v10;
  int v11;
  bool v12;
  void* v13;
  void* v14;
  void* v15;
  void* v16;
  int v17;
  void* v18;
  unsigned int v19;

  v3 = (__int16)a2;
  *(_DWORD*)(a1 + 2332) = 5 * (__int16)a2;
  v7 = *(__int16*)(a1 + 2324) * (__int16)(5 * a2);
  if (*(_DWORD*)(a1 + 2316) == a2 && *(_DWORD*)(a1 + 2320) == a3) {
    result = 0;
  }
  else {
    result = MovieRoutine_56bc0(a1 + 2448, (unsigned int)(1000 * (__int16)a2),
                                a3, 0);
    v9 = *(_DWORD*)(a1 + 2316);
    v10 = 0;
    *(_DWORD*)(a1 + 2320) = a3;
    if (v9 != a2) {
      goto LABEL_7;
    }
  }
  if (v7 == *(_DWORD*)(a1 + 2328)) {
    return result;
  }
  v10 = 1;
LABEL_7:
  v11 = *(_DWORD*)(a1 + 2324);
  v12 = v11 == 4;
  if (v11 == 4) {
    v13 = MovieData_c0a10;
  }
  else {
    v13 = MovieData_c0a00;
  }
  v14 = MovieData_c0a08;
  if (v12) {
    v14 = MovieData_c0a18;
  }
  if (a2 != 8) {
    v13 = v14;
  }
  *(_QWORD*)(a1 + 2392) = v13;
  if ((v10 & 1) != 0) {
    goto LABEL_28;
  }
  v15 = MovieData_c0a20;
  *(_DWORD*)(a1 + 2336) = 20 * v3;
  v16 = MovieData_c0a28;
  if ((a2 | 4) == 0xC) {
    v17 = 10;
  }
  else {
    v17 = 16;
  }
  *(_DWORD*)(a1 + 2340) = v17;
  if ((a2 | 4) != 0xC) {
    v15 = v16;
  }
  *(_QWORD*)(a1 + 2752) = v15;
  switch (a2) {
  case 16:
    v18 = MovieData_c0a40;
    goto LABEL_26;
  case 12:
    v18 = MovieData_c0a30;
  LABEL_26:
    *(_QWORD*)(a1 + 2384) = v18;
    break;
  case 8:
    v18 = MovieData_c0a38;
    goto LABEL_26;
  default:
    break;
  }
  v19 = result;
  *(_DWORD*)(a1 + 4188) = 0;
  *(_DWORD*)(a1 + 2376) = 1;
  *(_DWORD*)(a1 + 2308) = 100;
  *(_BYTE*)(a1 + 2312) = 10;
  MovieRoutine_82ce0(a1 + 1284, 0, 1024);
  result = v19;
LABEL_28:
  *(_DWORD*)(a1 + 2316) = a2;
  *(_DWORD*)(a1 + 2328) = v7;
  return result;
}

__int64 MovieHr_55ea0(_DWORD* a1)
{
  MovieRoutine_82ce0(a1, 0, 4288);
  a1[594] = 1;
  *a1 = 0x10000;
  MovieRoutine_437c0(a1);
  MovieRoutine_4bb60(a1);
  return 0;
}

__int64 MovieHr_55f60(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int16* v8;
  __int16* v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int16* v18;
  __int16* v19;
  int v20;
  int v21;
  int v22;

  if (a4 >= 1) {
    v4 = a4 & 7;
    if ((unsigned int)a4 >= 8) {
      v8 = (__int16*)(a2 + 8);
      v9 = (__int16*)(a1 + 8);
      v10 = 0;
      v6 = 0;
      do {
        v10 -= 8;
        v11 = ((*(v8 - 2) * *(v9 - 2)) >> a3) +
              ((*(v8 - 3) * *(v9 - 3)) >> a3) +
              ((*(v8 - 4) * *(v9 - 4)) >> a3) + v6;
        v12 = v8[3];
        v13 = ((v8[1] * v9[1]) >> a3) + ((*v8 * *v9) >> a3) +
              ((*(v8 - 1) * *(v9 - 1)) >> a3);
        v14 = v8[2];
        v8 += 8;
        v15 = v13 + v11;
        v16 = v14 * v9[2];
        v17 = v9[3];
        v9 += 8;
        v6 = ((v12 * v17) >> a3) + (v16 >> a3) + v15;
      } while (-(__int64)(a4 & 0x7FFFFFF8) != v10);
      v5 = -v10;
      if ((a4 & 7) == 0) {
        return v6;
      }
    }
    else {
      v5 = 0;
      v6 = 0;
      if ((a4 & 7) == 0) {
        return v6;
      }
    }
    v18 = (__int16*)(a2 + 2 * v5);
    v19 = (__int16*)(a1 + 2 * v5);
    do {
      v21 = *v19++;
      v20 = v21;
      v22 = *v18++;
      --v4;
      v6 += (v22 * v20) >> a3;
    } while (v4 != 0);
    return v6;
  }
  return 0;
}

__int64 MovieHr_560c0(__int64 result, __int64 a2, __int64 a3, __int16 a4,
                      int a5)
{
  __int64 v5;
  __int64 v6;
  _WORD* v7;
  _WORD* v8;
  _WORD* v9;
  __int64 v10;
  __int16 v11;
  __int16 v12;
  _WORD* v13;
  __int16* v14;
  __int16* v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;

  if (a5 >= 1) {
    v5 = a5 & 3;
    if ((unsigned int)a5 < 4) {
      v6 = 0;
      if ((a5 & 3) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v7 = (_WORD*)(result + 4);
    v8 = (_WORD*)(a2 + 4);
    v9 = (_WORD*)(a3 + 4);
    v10 = 0;
    do {
      v10 -= 4;
      *(v7 - 2) = *(v8 - 2) +
                  ((unsigned int)(a4 * (__int16)(*(v9 - 2) - *(v8 - 2))) >> 2);
      *(v7 - 1) = *(v8 - 1) +
                  ((unsigned int)(a4 * (__int16)(*(v9 - 1) - *(v8 - 1))) >> 2);
      *v7 = *v8 + ((unsigned int)(a4 * (__int16)(*v9 - *v8)) >> 2);
      v11 = v8[1];
      v12 = v9[1];
      v8 += 4;
      v9 += 4;
      v7[1] = v11 + ((unsigned int)(a4 * (__int16)(v12 - v11)) >> 2);
      v7 += 4;
    } while (-(__int64)(a5 & 0x7FFFFFFC) != v10);
    v6 = -v10;
    if ((a5 & 3) != 0) {
    LABEL_8:
      v13 = (_WORD*)(result + 2 * v6);
      v14 = (__int16*)(a3 + 2 * v6);
      v15 = (__int16*)(a2 + 2 * v6);
      do {
        v17 = *v15++;
        v16 = v17;
        v18 = *v14++;
        --v5;
        *v13++ = v16 + ((unsigned int)(a4 * (__int16)(v18 - v16)) >> 2);
      } while (v5 != 0);
    }
  }
  return result;
}

__int64 MovieHr_56bc0(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 result;
  char* v9;
  unsigned int v10;
  char v11;
  char v12;
  int v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;

  MovieRoutine_82ce0(a1, 0, 304);
  if (a4 != 0) {
    result = 0xFFFFFFFFLL;
    if ((int)a2 <= 15999) {
      if (a2 != 8000 && a2 != 12000) {
        return result;
      }
    }
    else if (a2 != 16000 && a2 != 48000 && a2 != 24000) {
      return result;
    }
    if (a3 != 8000 && a3 != 16000 && a3 != 12000) {
      return result;
    }
    v9 = (char*)&MovieData_a605d +
         3 * (((a2 >> 12) - (a2 > 0x3E80)) >> (a2 > 0x5DC0)) + (a3 >> 12) - 4;
  }
  else {
    if (a2 != 8000 && a2 != 16000 && a2 != 12000) {
      return 0xFFFFFFFFLL;
    }
    result = 0xFFFFFFFFLL;
    if ((int)a3 <= 15999) {
      if (a3 != 8000 && a3 != 12000) {
        return result;
      }
    }
    else if (a3 != 16000 && a3 != 48000 && a3 != 24000) {
      return result;
    }
    v9 = (char*)&MovieData_a606c + 5 * (a2 >> 12) +
         (((a3 >> 12) - (a3 > 0x3E80)) >> (a3 > 0x5DC0)) - 6;
  }
  *(_DWORD*)(a1 + 292) = *v9;
  v10 = (unsigned __int16)a2 / 0x3E8u;
  *(_DWORD*)(a1 + 284) = v10;
  *(_DWORD*)(a1 + 288) = (unsigned __int16)a3 / 0x3E8u;
  *(_DWORD*)(a1 + 268) = 10 * v10;
  if (a3 <= a2) {
    if (a3 >= a2) {
      v11 = 0;
      *(_DWORD*)(a1 + 264) = 0;
    }
    else {
      *(_DWORD*)(a1 + 264) = 3;
      if (4 * a3 == 3 * a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x300000012LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a607c;
      }
      else if (3 * a3 == 2 * a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x200000012LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a60b6;
      }
      else if (a2 == 2 * a3) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000018LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a60de;
      }
      else if (3 * a3 == a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a60fa;
      }
      else if (4 * a3 == a2) {
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a6122;
      }
      else {
        if (6 * a3 != a2) {
          return result;
        }
        v11 = 0;
        *(_QWORD*)(a1 + 276) = 0x100000024LL;
        *(_QWORD*)(a1 + 296) = &MovieData_a614a;
      }
    }
  }
  else if (a3 == 2 * a2) {
    v11 = 0;
    *(_DWORD*)(a1 + 264) = 1;
  }
  else {
    *(_DWORD*)(a1 + 264) = 2;
    v11 = 1;
  }
  v12 = v11 | 0xE;
  v13 = a2 << v11;
  v14 = 4 * ((a2 << v12) / a3);
  do {
    v15 = v14;
    v16 = (v14 * (unsigned __int64)a3) >> 16;
    ++v14;
  } while (v13 > (int)v16);
  *(_DWORD*)(a1 + 272) = v15;
  return 0;
}

int* MovieHr_570e0(int* result, __int64 a2, __int64 a3, int a4)
{
  int v4;
  __int64 v5;
  __int16* v6;
  _WORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  __int16* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  unsigned __int64 v27;
  int v28;

  v4 = a4 >> 1;
  if (a4 >> 1 < 1) {
    return result;
  }
  if (v4 == 1) {
    v5 = 0;
  LABEL_15:
    v21 = (__int16*)(a3 + 4 * v5);
    v22 = result[1];
    v23 = (__int64)*v21 << 10;
    v24 = v23 - *result;
    v25 = v23 + ((unsigned __int64)(0xFFFFFFFF9B81LL * v24) >> 16);
    *result = v25 + v24;
    v26 = (__int64)v21[1] << 10;
    v27 = (unsigned __int64)(9872 * (v26 - v22)) >> 16;
    result[1] = v26 + v27;
    v28 = (((v25 + (int)v22 + (int)v27) >> 10) + 1) >> 1;
    if (v28 <= -32768) {
      v28 = -32768;
    }
    if (v28 >= 0x7FFF) {
      LOWORD(v28) = 0x7FFF;
    }
    *(_WORD*)(a2 + 2 * v5) = v28;
    return result;
  }
  v6 = (__int16*)(a3 + 4);
  v7 = (_WORD*)(a2 + 2);
  v8 = 0;
  do {
    v9 = result[1];
    v8 -= 2;
    v10 = (__int64)*(v6 - 2) << 10;
    v11 = v10 - *result;
    LODWORD(v10) = v10 + ((unsigned __int64)(0xFFFFFFFF9B81LL * v11) >> 16);
    *result = v10 + v11;
    v12 = (__int64)*(v6 - 1) << 10;
    v13 = (unsigned __int64)(9872 * (v12 - v9)) >> 16;
    result[1] = v12 + v13;
    v14 = ((((int)v10 + (int)v9 + (int)v13) >> 10) + 1) >> 1;
    if (v14 <= -32768) {
      v14 = -32768;
    }
    if (v14 >= 0x7FFF) {
      LOWORD(v14) = 0x7FFF;
    }
    *(v7 - 1) = v14;
    v15 = result[1];
    v16 = (__int64)*v6 << 10;
    v17 = v16 - *result;
    LODWORD(v16) = v16 + ((unsigned __int64)(0xFFFFFFFF9B81LL * v17) >> 16);
    *result = v16 + v17;
    v18 = v6[1];
    v6 += 4;
    v18 <<= 10;
    v19 = (unsigned __int64)(9872 * (v18 - v15)) >> 16;
    result[1] = v18 + v19;
    v20 = ((((int)v16 + (int)v15 + (int)v19) >> 10) + 1) >> 1;
    if (v20 <= -32768) {
      v20 = -32768;
    }
    if (v20 >= 0x7FFF) {
      LOWORD(v20) = 0x7FFF;
    }
    *v7 = v20;
    v7 += 2;
  } while (-(__int64)(v4 & 0x7FFFFFFE) != v8);
  v5 = -v8;
  if ((v4 & 1) != 0) {
    goto LABEL_15;
  }
  return result;
}

int* MovieHr_574a0(int* result, __int64 a2, __int64 a3, __int16* a4, int a5)
{
  int v5;
  __int64 v6;
  __int16* v7;
  _DWORD* v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;

  if (a5 >= 1) {
    v5 = *result;
    if (a5 == 1) {
      v6 = 0;
    }
    else {
      v7 = (__int16*)(a3 + 2);
      v8 = (_DWORD*)(a2 + 4);
      v6 = 0;
      do {
        v6 += 2;
        v9 = v5 + (*(v7 - 1) << 8);
        *(v8 - 1) = v9;
        v9 *= 4;
        v10 = result[1] + ((unsigned __int64)(*a4 * (__int64)v9) >> 16);
        *result = v10;
        result[1] = (unsigned __int64)(a4[1] * (__int64)v9) >> 16;
        v11 = *v7;
        v7 += 2;
        v12 = v10 + (v11 << 8);
        *v8 = v12;
        v8 += 2;
        v13 = 4 * v12;
        v5 = result[1] + ((unsigned __int64)(*a4 * (__int64)(4 * v12)) >> 16);
        *result = v5;
        result[1] = (unsigned __int64)(a4[1] * (__int64)v13) >> 16;
      } while ((a5 & 0x7FFFFFFE) != v6);
    }
    if ((a5 & 1) != 0) {
      v14 = v5 + (*(__int16*)(a3 + 2 * v6) << 8);
      *(_DWORD*)(a2 + 4 * v6) = v14;
      v14 *= 4;
      *result = result[1] + ((unsigned __int64)(*a4 * (__int64)v14) >> 16);
      result[1] = (unsigned __int64)(a4[1] * (__int64)v14) >> 16;
    }
  }
  return result;
}

__int64 MovieHr_58660(unsigned int a1)
{
  if ((a1 & 0x80000000) != 0) {
    if (a1 >= 0xFFFFFF41) {
      return MovieData_a61e0[-a1 >> 5] -
             MovieData_a61f8[2 * (-a1 >> 5)] * (-a1 & 0x1F);
    }
    else {
      return 0;
    }
  }
  else if (a1 <= 0xBF) {
    return MovieData_a6210[a1 >> 5] +
           MovieData_a61f8[2 * (a1 >> 5)] * (a1 & 0x1F);
  }
  else {
    return 0x7FFF;
  }
}

__int64 MovieHr_586e0(__int64 result, _DWORD* a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int* v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  int* v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int* v22;
  int v23;
  int v24;
  int v25;
  int v26;
  _DWORD* v27;
  _DWORD* v28;
  _DWORD* v29;
  __int64 v30;
  _DWORD* v31;
  __int64 v32;
  int v33;
  int v34;
  _DWORD* v35;
  _DWORD* v36;
  __int64 v37;
  int v38;
  int v39;
  _DWORD* v40;
  _DWORD* v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  _DWORD* v50;
  _DWORD* v51;
  int v52;
  int v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  _DWORD* v57;
  _DWORD* v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  _DWORD* v63;
  _DWORD* v64;
  int v65;
  int v66;
  __int64 v67;
  _DWORD* v68;
  _DWORD* v69;
  int v70;
  int v71;

  if (a4 < 1) {
    if (a4 >= a3) {
      return result;
    }
    v4 = a4;
    v7 = (int*)(result + 4LL * a4 - 4);
    goto LABEL_21;
  }
  v4 = (unsigned int)a4;
  v5 = a4 & 7;
  if ((unsigned int)a4 >= 8) {
    v8 = a2 + 4;
    v6 = 0;
    do {
      *(v8 - 4) = v6;
      *(v8 - 3) = v6 + 1;
      *(v8 - 2) = v6 + 2;
      *(v8 - 1) = v6 + 3;
      *v8 = v6 + 4;
      v8[1] = v6 + 5;
      v9 = v6 + 6;
      v10 = v6 + 7;
      v6 += 8;
      v8[2] = v9;
      v8[3] = v10;
      v8 += 8;
    } while (v6 != (a4 & 0x7FFFFFF8));
  }
  else {
    v6 = 0;
  }
  if ((a4 & 7) != 0) {
    do {
      a2[v6] = v6;
      ++v6;
      --v5;
    } while (v5 != 0);
  }
  if (a4 != 1) {
    if (a4 == 2) {
      v11 = 1;
    }
    else {
      v27 = a2 + 1;
      v28 = (_DWORD*)(result + 4);
      v29 = a2 + 2;
      v30 = 0;
      v31 = (_DWORD*)(result + 8);
      v11 = 1;
      v32 = 3;
      do {
        v34 = *(_DWORD*)(result + 4 * v11);
        v35 = v28;
        v36 = v27;
        v37 = v11;
        while (1) {
          v38 = *(v35 - 1);
          if (v34 >= v38) {
            break;
          }
          *v35-- = v38;
          --v37;
          *v36 = *(v36 - 1);
          --v36;
          if (v37 + 1 <= 1) {
            LODWORD(v37) = 0;
            break;
          }
        }
        *(_DWORD*)(result + 4LL * (int)v37) = v34;
        a2[(int)v37] = v11;
        v39 = v11 + 1;
        v40 = v31;
        v41 = v29;
        v42 = v32;
        v43 = *(_DWORD*)(result + 4 * (v11 + 1));
        do {
          v44 = *(v40 - 1);
          if (v43 >= v44) {
            v33 = v42 - 1;
            goto LABEL_40;
          }
          *v40-- = v44;
          --v42;
          *v41 = *(v41 - 1);
          --v41;
        } while (v42 > 1);
        v33 = 0;
      LABEL_40:
        v11 += 2;
        v30 += 2;
        v27 += 2;
        v28 += 2;
        *(_DWORD*)(result + 4LL * v33) = v43;
        a2[v33] = v39;
        v32 += 2;
        v29 += 2;
        v31 += 2;
      } while (v30 != (((unsigned int)a4 - 1LL) & 0xFFFFFFFFFFFFFFFELL));
    }
    if ((((_BYTE)a4 - 1) & 1) != 0) {
      v12 = (int*)(result + 4 * v11);
      v13 = &a2[v11];
      v14 = v11;
      v15 = *v12;
      while (1) {
        v16 = *(v12 - 1);
        if (v15 >= v16) {
          break;
        }
        *v12-- = v16;
        --v14;
        *v13 = *(v13 - 1);
        --v13;
        if (v14 + 1 <= 1) {
          LODWORD(v14) = 0;
          break;
        }
      }
      *(_DWORD*)(result + 4LL * (int)v14) = v15;
      a2[(int)v14] = v11;
    }
  }
  if (a4 >= a3) {
    return result;
  }
  v17 = a4 - 1;
  v7 = (int*)(result + 4LL * (unsigned int)a4 - 4);
  if (a4 != 1) {
    v45 = a4 - 2;
    v46 = a3;
    if (((a3 - a4) & 1) != 0) {
      v48 = *(_DWORD*)(result + 4LL * (unsigned int)a4);
      if (v48 < *v7) {
        v49 = (unsigned int)(a4 - 1);
        v50 = &a2[v49];
        v51 = (_DWORD*)(result + v49 * 4);
        v52 = a4 - 2;
        while (1) {
          v53 = *(_DWORD*)(result + 4LL * (unsigned int)v52);
          if (v48 >= v53) {
            break;
          }
          *v51-- = v53;
          *v50-- = a2[v52];
          v54 = v52-- <= 0;
          if (v54) {
            v52 = -1;
            break;
          }
        }
        v55 = 4LL * v52 + 4;
        *(_DWORD*)(result + v55) = v48;
        *(_DWORD*)((char*)a2 + v55) = a4;
      }
      v47 = (unsigned int)a4 + 1LL;
      if (a3 - 1LL == a4) {
        return result;
      }
    }
    else {
      v47 = (unsigned int)a4;
      if (a3 - 1LL == a4) {
        return result;
      }
    }
    v56 = (unsigned int)(a4 - 1);
    v57 = &a2[v56];
    v58 = (_DWORD*)(result + v56 * 4);
    while (1) {
      v60 = *(_DWORD*)(result + 4 * v47);
      if (v60 < *v7) {
        break;
      }
      v61 = v47 + 1;
      v62 = *(_DWORD*)(result + 4 * (v47 + 1));
      if (v62 < *v7) {
        goto LABEL_72;
      }
    LABEL_63:
      v47 += 2;
      if (v47 == v46) {
        return result;
      }
    }
    v63 = v58;
    v64 = v57;
    v65 = v17;
    while (1) {
      v66 = *(_DWORD*)(result + 4LL * (unsigned int)--v65);
      if (v60 >= v66) {
        break;
      }
      *v63-- = v66;
      *v64-- = a2[v65];
      if (v65 <= 0) {
        v65 = -1;
        break;
      }
    }
    v67 = 4LL * v65 + 4;
    *(_DWORD*)(result + v67) = v60;
    *(_DWORD*)((char*)a2 + v67) = v47;
    v61 = v47 + 1;
    v62 = *(_DWORD*)(result + 4 * (v47 + 1));
    if (v62 >= *v7) {
      goto LABEL_63;
    }
  LABEL_72:
    v68 = v58;
    v69 = v57;
    v70 = v45;
    while (1) {
      v71 = *(_DWORD*)(result + 4LL * (unsigned int)v70);
      if (v62 >= v71) {
        break;
      }
      *v68-- = v71;
      *v69-- = a2[v70];
      v54 = v70-- <= 0;
      if (v54) {
        v70 = -1;
        break;
      }
    }
    v59 = 4LL * v70 + 4;
    *(_DWORD*)(result + v59) = v62;
    *(_DWORD*)((char*)a2 + v59) = v61;
    goto LABEL_63;
  }
LABEL_21:
  v18 = a4 - 1LL;
  v19 = ((_BYTE)a3 - (_BYTE)v4) & 3;
  v20 = v4;
  if ((((_BYTE)a3 - (_BYTE)v4) & 3) != 0) {
    v20 = v4;
    do {
      v21 = *(_DWORD*)(result + 4 * v20);
      if (v21 < *v7) {
        *(_DWORD*)(result + 4 * v18) = v21;
        a2[v18] = v20;
      }
      ++v20;
      --v19;
    } while (v19 != 0);
  }
  if ((unsigned __int64)(v4 - a3) <= 0xFFFFFFFFFFFFFFFCLL) {
    v22 = (int*)(result + 4 * v20 + 8);
    do {
      v23 = *(v22 - 2);
      if (v23 < *v7) {
        *(_DWORD*)(result + 4 * v18) = v23;
        a2[v18] = v20;
        v24 = *(v22 - 1);
        if (v24 >= *v7) {
        LABEL_31:
          v25 = *v22;
          if (*v22 >= *v7) {
            goto LABEL_32;
          }
          goto LABEL_36;
        }
      }
      else {
        v24 = *(v22 - 1);
        if (v24 >= *v7) {
          goto LABEL_31;
        }
      }
      *(_DWORD*)(result + 4 * v18) = v24;
      a2[v18] = v20 + 1;
      v25 = *v22;
      if (*v22 >= *v7) {
      LABEL_32:
        v26 = v22[1];
        if (v26 < *v7) {
          goto LABEL_37;
        }
        goto LABEL_28;
      }
    LABEL_36:
      *(_DWORD*)(result + 4 * v18) = v25;
      a2[v18] = v20 + 2;
      v26 = v22[1];
      if (v26 < *v7) {
      LABEL_37:
        *(_DWORD*)(result + 4 * v18) = v26;
        a2[v18] = v20 + 3;
      }
    LABEL_28:
      v22 += 4;
      v20 += 4;
    } while (a3 != v20);
  }
  return result;
}

__int16* MovieHr_58bc0(__int16* result, _DWORD* a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int16* v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  __int16* v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int16* i;
  int v23;
  int v24;
  int v25;
  int v26;
  _DWORD* v27;
  _DWORD* v28;
  _WORD* v29;
  __int64 v30;
  __int16* v31;
  __int64 v32;
  int v33;
  int v34;
  _DWORD* v35;
  __int16* v36;
  __int64 v37;
  __int16* v38;
  __int16 v39;
  int v40;
  int v41;
  _WORD* v42;
  _DWORD* v43;
  __int64 v44;
  int v45;
  int v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  _DWORD* v51;
  __int16* v52;
  unsigned int v53;
  int v54;
  bool v55;
  signed int v56;
  signed int v57;
  int v58;
  int v59;
  int v60;
  __int16* v61;
  _DWORD* v62;
  int v63;
  int v64;
  int v65;
  __int16* v66;
  _DWORD* v67;
  unsigned int v68;
  int v69;

  if (a4 < 1) {
    if (a4 >= a3) {
      return result;
    }
    v4 = a4;
    v7 = &result[a4 - 1];
  LABEL_21:
    v18 = a4 - 1LL;
    v19 = ((_BYTE)a3 - (_BYTE)v4) & 3;
    v20 = v4;
    if ((((_BYTE)a3 - (_BYTE)v4) & 3) != 0) {
      v20 = v4;
      do {
        v21 = result[v20];
        if (v21 > *v7) {
          result[v18] = v21;
          a2[v18] = v20;
        }
        ++v20;
        --v19;
      } while (v19 != 0);
    }
    if ((unsigned __int64)(v4 - a3) <= 0xFFFFFFFFFFFFFFFCLL) {
      for (i = &result[v20 + 2];; i += 4) {
        v23 = *(i - 2);
        if (v23 > *v7) {
          result[v18] = v23;
          a2[v18] = v20;
          v24 = *(i - 1);
          if (v24 <= *v7) {
          LABEL_31:
            v25 = *i;
            if (v25 <= *v7) {
              goto LABEL_32;
            }
            goto LABEL_36;
          }
        }
        else {
          v24 = *(i - 1);
          if (v24 <= *v7) {
            goto LABEL_31;
          }
        }
        result[v18] = v24;
        a2[v18] = v20 + 1;
        v25 = *i;
        if (v25 <= *v7) {
        LABEL_32:
          v26 = i[1];
          if (v26 > *v7) {
            goto LABEL_37;
          }
          goto LABEL_28;
        }
      LABEL_36:
        result[v18] = v25;
        a2[v18] = v20 + 2;
        v26 = i[1];
        if (v26 > *v7) {
        LABEL_37:
          result[v18] = v26;
          a2[v18] = v20 + 3;
        }
      LABEL_28:
        v20 += 4;
        if (a3 == v20) {
          return result;
        }
      }
    }
    return result;
  }
  v4 = (unsigned int)a4;
  v5 = a4 & 7;
  if ((unsigned int)a4 >= 8) {
    v8 = a2 + 4;
    v6 = 0;
    do {
      *(v8 - 4) = v6;
      *(v8 - 3) = v6 + 1;
      *(v8 - 2) = v6 + 2;
      *(v8 - 1) = v6 + 3;
      *v8 = v6 + 4;
      v8[1] = v6 + 5;
      v9 = v6 + 6;
      v10 = v6 + 7;
      v6 += 8;
      v8[2] = v9;
      v8[3] = v10;
      v8 += 8;
    } while (v6 != (a4 & 0x7FFFFFF8));
  }
  else {
    v6 = 0;
  }
  if ((a4 & 7) != 0) {
    do {
      a2[v6] = v6;
      ++v6;
      --v5;
    } while (v5 != 0);
  }
  if (a4 != 1) {
    if (a4 == 2) {
      v11 = 1;
    }
    else {
      v27 = a2 + 1;
      v28 = a2 + 2;
      v29 = result + 2;
      v30 = 0;
      v31 = result;
      v11 = 1;
      v32 = 3;
      do {
        v34 = result[v11];
        v35 = v27;
        v36 = v31;
        v37 = v11;
        v38 = v31;
        while (1) {
          v40 = *v38--;
          v39 = v40;
          if (v34 <= v40) {
            break;
          }
          v36[1] = v39;
          --v37;
          *v35 = *(v35 - 1);
          --v35;
          v36 = v38;
          if (v37 + 1 <= 1) {
            LODWORD(v37) = 0;
            break;
          }
        }
        result[(int)v37] = v34;
        a2[(int)v37] = v11;
        v41 = v11 + 1;
        v42 = v29;
        v43 = v28;
        v44 = v32;
        v45 = result[v11 + 1];
        do {
          v46 = (__int16)*(v42 - 1);
          if (v45 <= v46) {
            v33 = v44 - 1;
            goto LABEL_40;
          }
          *v42-- = v46;
          --v44;
          *v43 = *(v43 - 1);
          --v43;
        } while (v44 > 1);
        v33 = 0;
      LABEL_40:
        v11 += 2;
        v30 += 2;
        v31 += 2;
        v27 += 2;
        v32 += 2;
        v28 += 2;
        v29 += 2;
        result[v33] = v45;
        a2[v33] = v41;
      } while (v30 != (((unsigned int)a4 - 1LL) & 0xFFFFFFFFFFFFFFFELL));
    }
    if ((((_BYTE)a4 - 1) & 1) != 0) {
      v12 = &result[v11];
      v13 = &a2[v11];
      v14 = v11;
      v15 = *v12;
      while (1) {
        v16 = *(v12 - 1);
        if (v15 <= v16) {
          break;
        }
        *v12-- = v16;
        --v14;
        *v13 = *(v13 - 1);
        --v13;
        if (v14 + 1 <= 1) {
          LODWORD(v14) = 0;
          break;
        }
      }
      result[(int)v14] = v15;
      a2[(int)v14] = v11;
    }
  }
  if (a4 >= a3) {
    return result;
  }
  v17 = a4 - 1;
  v7 = &result[a4 - 1];
  if (a4 == 1) {
    goto LABEL_21;
  }
  v47 = a4 - 2;
  v48 = a3;
  if (((a3 - a4) & 1) == 0) {
    v49 = (unsigned int)a4;
    if (a3 - 1LL != a4) {
      goto LABEL_64;
    }
    return result;
  }
  v50 = result[a4];
  if (v50 > *v7) {
    v51 = &a2[v17];
    v52 = &result[v17];
    v53 = a4 - 2;
    while (1) {
      v54 = result[v53];
      if (v50 <= v54) {
        break;
      }
      *v52-- = v54;
      *v51-- = a2[v53];
      v55 = (int)v53-- <= 0;
      if (v55) {
        v53 = -1;
        break;
      }
    }
    v56 = v53 + 1;
    result[v56] = v50;
    a2[v56] = a4;
  }
  v49 = (unsigned int)a4 + 1LL;
  if (a3 - 1LL != a4) {
  LABEL_64:
    while (1) {
      v58 = result[v49];
      if (v58 > *v7) {
        break;
      }
      v59 = v49 + 1;
      v60 = result[v49 + 1];
      if (v60 > *v7) {
        goto LABEL_72;
      }
    LABEL_63:
      v49 += 2;
      if (v49 == v48) {
        return result;
      }
    }
    v61 = &result[v17];
    v62 = &a2[v17];
    v63 = v17;
    while (1) {
      v64 = result[--v63];
      if (v58 <= v64) {
        break;
      }
      *v61-- = v64;
      *v62-- = a2[v63];
      if (v63 <= 0) {
        v63 = -1;
        break;
      }
    }
    v65 = v63 + 1;
    result[v65] = v58;
    a2[v65] = v49;
    v59 = v49 + 1;
    v60 = result[v49 + 1];
    if (v60 <= *v7) {
      goto LABEL_63;
    }
  LABEL_72:
    v66 = &result[v17];
    v67 = &a2[v17];
    v68 = v47;
    while (1) {
      v69 = result[v68];
      if (v60 <= v69) {
        break;
      }
      *v66-- = v69;
      *v67-- = a2[v68];
      v55 = (int)v68-- <= 0;
      if (v55) {
        v68 = -1;
        break;
      }
    }
    v57 = v68 + 1;
    result[v57] = v60;
    a2[v57] = v59;
    goto LABEL_63;
  }
  return result;
}

__int16* MovieHr_590a0(__int16* result, int a2)
{
  __int64 v2;
  __int16* v3;
  __int64 v4;
  int v5;
  __int16* v6;
  __int64 v7;
  __int16* v8;
  __int16 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int16* v13;
  int v14;
  int v15;
  __int16* v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  __int16* v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  __int16* v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int16* v32;
  int v33;

  if (a2 >= 2) {
    if ((unsigned int)(a2 - 2) >= 3) {
      v2 = 1;
      v11 = 2;
      v12 = 0;
      v13 = result;
      do {
        v15 = result[v2];
        v16 = v13;
        v17 = v11;
        while (1) {
          v18 = *v16;
          if (v15 >= v18) {
            break;
          }
          v16[1] = v18;
          --v17;
          --v16;
          if (v17 <= 1) {
            v19 = 0;
            goto LABEL_20;
          }
        }
        v19 = v17 - 1;
      LABEL_20:
        v20 = 0;
        result[v19] = v15;
        v21 = result[v2 + 1];
        while (1) {
          v22 = &v13[v20];
          v23 = v22[1];
          if (v21 >= v23) {
            break;
          }
          --v20;
          v22[2] = v23;
          if (v11 + v20 + 1 <= 1) {
            v24 = 0;
            goto LABEL_25;
          }
        }
        v24 = v11 + v20;
      LABEL_25:
        v25 = 0;
        result[v24] = v21;
        v26 = result[v2 + 2];
        while (1) {
          v27 = &v13[v25];
          v28 = v27[2];
          if (v26 >= v28) {
            break;
          }
          --v25;
          v27[3] = v28;
          if (v12 + v25 + 4 <= 1) {
            v29 = 0;
            goto LABEL_30;
          }
        }
        v29 = v12 + v25 + 3;
      LABEL_30:
        v30 = 0;
        result[v29] = v26;
        v31 = result[v2 + 3];
        do {
          v32 = &v13[v30];
          v33 = v32[3];
          if (v31 >= v33) {
            v14 = v12 + v30 + 4;
            goto LABEL_14;
          }
          --v30;
          v32[4] = v33;
        } while (v12 + v30 + 5 > 1);
        v14 = 0;
      LABEL_14:
        v2 += 4;
        v12 += 4;
        v11 += 4;
        v13 += 4;
        result[v14] = v31;
      } while (v12 != (((unsigned int)a2 - 1LL) & 0xFFFFFFFFFFFFFFFCLL));
    }
    else {
      v2 = 1;
    }
    if ((((_BYTE)a2 - 1) & 3) != 0) {
      v3 = &result[v2];
      v4 = 0;
      do {
        v5 = result[v2];
        v6 = v3;
        v7 = v2;
        v8 = v3;
        while (1) {
          v10 = *--v8;
          v9 = v10;
          if (v5 >= v10) {
            break;
          }
          --v7;
          *v6 = v9;
          v6 = v8;
          if (v7 + 1 <= 1) {
            LODWORD(v7) = 0;
            break;
          }
        }
        ++v2;
        ++v4;
        ++v3;
        result[(int)v7] = v5;
      } while (v4 != (((_BYTE)a2 - 1) & 3));
    }
  }
  return result;
}

__int64 MovieHr_5ace0(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, int a6, int a7, int a8)
{
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int16* v13;
  int v14;
  int v15;
  int v16;
  __int16* v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int16* v22;
  _WORD* v23;
  __int16* v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int16* v35;
  int v36;
  int v37;
  int v38;

  if (a7 >= 1) {
    v8 = a8 + a6;
    if (a8 + a6 >= 1) {
      v9 = 0;
      v10 = (unsigned int)a7;
      v11 = 2LL * (int)v8;
      v12 = 2LL * a6;
      while (1) {
        v13 = (__int16*)(a3 + 10 * v9);
        v14 = v13[1];
        v15 = v13[2];
        v16 = v13[3];
        v17 = (__int16*)(a2 - 2LL * *(int*)(a4 + 4 * v9));
        v18 = *v13;
        v19 = v13[4];
        if (v8 >= 4) {
          break;
        }
        v20 = 0;
        if ((v8 & 3) != 0) {
          goto LABEL_27;
        }
      LABEL_4:
        a2 += v12;
        ++v9;
        result += v11;
        if (v9 == v10) {
          return result;
        }
      }
      v21 = 0;
      v20 = 0;
      do {
        v22 = (__int16*)(a2 + v21);
        v23 = (_WORD*)(result + v21);
        v24 = &v17[v21 / 2];
        v20 += 4;
        v25 = *(__int16*)(a2 + v21);
        v21 += 8LL;
        *v23 = v25;
        v26 = v25 - ((((v24[2] * v18 + v24[1] * v14 + *v24 * v15 +
                        *(v24 - 1) * v16 + *(v24 - 2) * v19) >>
                       13) +
                      1) >>
                     1);
        if (v26 <= -32768) {
          v26 = -32768;
        }
        if (v26 >= 0x7FFF) {
          v26 = 0x7FFF;
        }
        *v23 = v26;
        *v23 = (unsigned int)(v26 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
        v27 = v22[1];
        v23[1] = v27;
        v28 = v27 - ((((v24[3] * v18 + v24[2] * v14 + v24[1] * v15 +
                        *v24 * v16 + *(v24 - 1) * v19) >>
                       13) +
                      1) >>
                     1);
        if (v28 <= -32768) {
          v28 = -32768;
        }
        if (v28 >= 0x7FFF) {
          v28 = 0x7FFF;
        }
        v23[1] = v28;
        v23[1] = (unsigned int)(v28 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
        v29 = v22[2];
        v23[2] = v29;
        v30 = v29 - ((((v24[4] * v18 + v24[3] * v14 + v24[2] * v15 +
                        v24[1] * v16 + *v24 * v19) >>
                       13) +
                      1) >>
                     1);
        if (v30 <= -32768) {
          v30 = -32768;
        }
        if (v30 >= 0x7FFF) {
          v30 = 0x7FFF;
        }
        v23[2] = v30;
        v23[2] = (unsigned int)(v30 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
        v31 = v22[3];
        v23[3] = v31;
        v32 = v31 - ((((v24[5] * v18 + v24[4] * v14 + v24[3] * v15 +
                        v24[2] * v16 + v24[1] * v19) >>
                       13) +
                      1) >>
                     1);
        if (v32 <= -32768) {
          v32 = -32768;
        }
        if (v32 >= 0x7FFF) {
          v32 = 0x7FFF;
        }
        v23[3] = v32;
        v23[3] = (unsigned int)(v32 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
      } while ((v11 & 0xFFFFFFF8) != v21);
      v17 = (__int16*)((char*)v17 + v21);
      if ((v8 & 3) == 0) {
        goto LABEL_4;
      }
    LABEL_27:
      v33 = 2 * v20;
      v34 = v8 & 3;
      v35 = v17;
      do {
        v36 = *(__int16*)(a2 + v33);
        *(_WORD*)(result + v33) = *(_WORD*)(a2 + v33);
        v37 = v35[1];
        ++v35;
        v38 = v36 - ((((v17[2] * v18 + v37 * v14 + *v17 * v15 +
                        *(v17 - 1) * v16 + *(v17 - 2) * v19) >>
                       13) +
                      1) >>
                     1);
        if (v38 <= -32768) {
          v38 = -32768;
        }
        if (v38 >= 0x7FFF) {
          v38 = 0x7FFF;
        }
        --v34;
        *(_WORD*)(result + v33) = v38;
        *(_WORD*)(result + v33) =
            (unsigned int)(v38 * *(_DWORD*)(a5 + 4 * v9)) >> 16;
        v33 += 2;
        v17 = v35;
      } while (v34 != 0);
      goto LABEL_4;
    }
  }
  return result;
}

__int64 MovieHr_5b060(__int64 result, __int64 a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  __int16* v8;
  _WORD* v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v13;

  v4 = MovieData_a780e[(a4 >> 2) - 4];
  v5 = v4 * (__int16)-(__int16)v4;
  v6 = v4 + (a4 >> 3);
  if (a3 == 1) {
    v7 = 0;
  }
  else {
    v7 = 0x10000;
  }
  if (a3 != 1) {
    v6 = (a4 >> 4) + (v5 >> 17) + 0x10000;
  }
  if (a4 >= 1) {
    v8 = (__int16*)(a2 + 4);
    v9 = (_WORD*)(result + 4);
    v10 = 0;
    v11 = SHIWORD(v5);
    do {
      v10 += 4LL;
      *(v9 - 2) = (unsigned int)(((v6 + v7) >> 1) * *(v8 - 2)) >> 16;
      *(v9 - 1) = (unsigned int)(v6 * *(v8 - 1)) >> 16;
      v12 = ((unsigned __int64)(v11 * (__int64)v6) >> 16) - v7 + 2 * v6;
      if (v12 >= 0xFFFF) {
        v12 = 0xFFFF;
      }
      v7 = v12 + 1;
      *v9 = (unsigned int)(((v7 + v6) >> 1) * *v8) >> 16;
      v13 = v8[1];
      v8 += 4;
      v9[1] = (unsigned int)(v7 * v13) >> 16;
      v9 += 4;
      v6 = ((unsigned __int64)(v11 * (__int64)v7) >> 16) - v6 + 2 * v7;
      if (v6 >= 0x10000) {
        v6 = 0x10000;
      }
    } while (v10 < (unsigned int)a4);
  }
  return result;
}

__int64 MovieHr_5cf80(__int64 result, __int64 a2, int a3, int a4, _DWORD* a5,
                      int a6)
{
  _DWORD* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int16* v14;
  __int16* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 i;

  v6 = a5;
  v8 = result + 2LL * a4 - 2;
  if (a6 <= 0) {
    if (a4 >= 1) {
      for (i = (unsigned int)a4; i != 0; --i) {
        result = MovieRoutine_652a0(v8, a2);
        *v6++ = result;
        v8 -= 2;
      }
    }
  }
  else if (a4 >= 1) {
    if (a3 > 0) {
      v9 = 0;
      v10 = result + 2LL * a4 + 6;
      while ((unsigned int)a3 < 8) {
        v11 = 0;
        v12 = 0;
        if ((a3 & 7) != 0) {
          goto LABEL_12;
        }
      LABEL_5:
        a5[v9] = v12;
        v8 -= 2;
        ++v9;
        v10 -= 2;
        if (v9 == a4) {
          return result;
        }
      }
      v13 = 0;
      v12 = 0;
      v14 = (__int16*)v10;
      v15 = (__int16*)(a2 + 8);
      do {
        v13 -= 8;
        v16 = ((*(v15 - 2) * *(v14 - 2)) >> a6) +
              ((*(v15 - 3) * *(v14 - 3)) >> a6) +
              ((*(v15 - 4) * *(v14 - 4)) >> a6) + v12;
        v17 = v15[3];
        v18 = ((v15[1] * v14[1]) >> a6) + ((*v15 * *v14) >> a6) +
              ((*(v15 - 1) * *(v14 - 1)) >> a6);
        v19 = v15[2];
        v15 += 8;
        v20 = v18 + v16;
        v21 = v19 * v14[2];
        v22 = v14[3];
        v14 += 8;
        result = (unsigned int)((v17 * v22) >> a6);
        v12 = result + (v21 >> a6) + v20;
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v13);
      v11 = -v13;
      if ((a3 & 7) == 0) {
        goto LABEL_5;
      }
    LABEL_12:
      v23 = 2 * v11;
      v24 = a3 & 7;
      do {
        v25 = *(__int16*)(v8 + v23);
        v26 = *(__int16*)(a2 + v23);
        v23 += 2;
        --v24;
        v12 += (v26 * v25) >> a6;
      } while (v24 != 0);
      goto LABEL_5;
    }
    return MovieRoutine_82ce0(a5, 0, 4LL * (unsigned int)a4);
  }
  return result;
}

__int64 MovieHr_5d1c0(__int64 a1, __int64 a2, unsigned int a3, unsigned int* a4,
                      unsigned int* a5, int* a6)
{
  __int64 v6;
  unsigned int v10;
  __int64 result;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int16* v21;
  unsigned int v22;
  int v23;
  __int16* v24;
  int v25;
  unsigned int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  int v32;
  __int64 v33;
  __int16* v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  __int16* v42;
  unsigned int v43;
  int v44;
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
  int v56;
  __int64 v57;
  __int64 v58;
  int v59;
  __int64 v60;
  __int16* v61;
  __int64 v62;
  __int16* v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  int v74;
  unsigned int* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  int v80;
  int v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  char* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  unsigned int* v102;
  int v103;
  int v104;
  unsigned int* v105;
  int v106;
  int v107;
  unsigned int* v108;
  int v109;
  unsigned int* v110;
  int v111;
  unsigned int* v112;
  unsigned int* v113;
  __int64 v114;
  __int64 v115;
  int* v116;
  __int64 v117;
  __int64 v118;
  int v119;
  __int64 v120;
  int v121;
  int v122;
  int v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  int v133;
  __int64 v134;
  __int64 v135;
  unsigned int* v136;
  __int64 v137;
  unsigned __int64 v138;
  int v139;
  int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  int v145;
  __int64 v146;
  int v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int16* v152;
  int v153;
  int v154;
  int v155;
  int v156;
  unsigned int* v157;
  int v158;
  unsigned int* v159;
  int v160;
  unsigned int* v161;
  int v162;
  unsigned int* v163;
  unsigned int* v164;
  unsigned int* v165;
  __int64 v166;
  __int64 v167;
  int v168;
  int* v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  int v173;
  int v174;
  int v175;
  int v176;
  unsigned int* v177;
  unsigned int* v178;
  __int64 v179;
  unsigned int* v180;
  unsigned int* v181;
  __int64 v182;
  __int64 v183;
  unsigned int* v184;
  unsigned int* v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned int* v190;
  __int64 v191;
  unsigned int v192;
  unsigned int* v193;
  __int64 v194;
  char v195;
  __int64 v196;
  unsigned int* v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  int v205;
  int v206;
  __int64 v207;
  char v208;
  int v209;
  int v210;
  __int64 v211;
  int v212;
  int v213;
  int v214;
  char i;
  int v216;
  __int64 v217;
  __int64 v218;
  _DWORD* v219;
  int v220;
  int v221;
  int v222;
  __int64 v223;
  __int64 v224;
  char* v225;
  char v226;
  char* v227;
  __int64 v228;
  char* v229;
  _DWORD* v230;
  char* v231;
  __int64 v232;
  __int64 v233;

  v6 = a3 - 1;
  v10 = a3;
  result = MovieRoutine_5abc0(a5, a6, a1, (unsigned int)(v6 + a2));
  v14 = *a5;
  v15 = v10 - 2;
  if ((int)v10 < 2) {
    *a4 = v14;
    return result;
  }
  v16 = *a6;
  v17 = v6 & 7;
  v18 = v6;
  v19 = 0;
  if (v15 < 7) {
    v20 = a2;
    if ((v6 & 7) == 0) {
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v21 = (__int16*)(a1 + 8);
  v20 = a2;
  do {
    v19 -= 8;
    v22 = ((unsigned int)(*(v21 - 4) * *(v21 - 4)) >> v16) +
          ((unsigned int)(*(v21 - 3) * *(v21 - 3)) >> v16) +
          ((unsigned int)(*(v21 - 2) * *(v21 - 2)) >> v16) +
          ((unsigned int)(*(v21 - 1) * *(v21 - 1)) >> v16) +
          ((unsigned int)(*v21 * *v21) >> v16) +
          ((unsigned int)(v21[1] * v21[1]) >> v16) +
          ((unsigned int)(v21[2] * v21[2]) >> v16);
    v23 = v21[3];
    v21 += 8;
    v14 = v14 - ((unsigned int)(v23 * v23) >> v16) - v22;
  } while (-(v6 & 0x7FFFFFF8) != v19);
  v19 = -v19;
  if ((v6 & 7) != 0) {
  LABEL_10:
    v24 = (__int16*)(a1 + 2 * v19);
    do {
      v25 = *v24++;
      --v17;
      v14 -= (unsigned int)(v25 * v25) >> v16;
    } while (v17 != 0);
  }
LABEL_12:
  v26 = v10 + 1;
  v194 = v10;
  v27 = 4 * v10;
  *a4 = v14;
  v28 = 2 * v10;
  v29 = ((_BYTE)v10 - 1) & 3;
  if (v15 >= 3) {
    v31 = (v10 - 1LL) & 0xFFFFFFFFFFFFFFFCLL;
    v32 = 0;
    v33 = (int)v20;
    v34 = (__int16*)(a1 + 2 * v6 - 4);
    v30 = 1;
    do {
      v30 += 4;
      v31 -= 4LL;
      v35 = ((unsigned int)(v34[1] * v34[1]) >> *a6) + v14 -
            ((unsigned int)(v34[v33 + 1] * v34[v33 + 1]) >> *a6);
      a4[v26 + v32] = v35;
      v36 = ((unsigned int)(*v34 * *v34) >> *a6) + v35 -
            ((unsigned int)(v34[(int)v20] * v34[(int)v20]) >> *a6);
      a4[v28 + 2 + v32] = v36;
      v37 = ((unsigned int)(*(v34 - 1) * *(v34 - 1)) >> *a6) + v36 -
            ((unsigned int)(v34[v33 - 1] * v34[v33 - 1]) >> *a6);
      v38 = 3 * v10 + 3 + v32;
      v32 += v27 + 4;
      a4[v38] = v37;
      v39 = v37 - ((unsigned int)(v34[v33 - 2] * v34[v33 - 2]) >> *a6);
      v40 = *(v34 - 2);
      v34 -= 4;
      v14 = ((unsigned int)(v40 * v40) >> *a6) + v39;
      a4[v32] = v14;
    } while (v31 != 0);
  }
  else {
    v30 = 1;
  }
  if ((((_BYTE)v10 - 1) & 3) != 0) {
    v41 = v26 * v30;
    v42 = (__int16*)(a1 - 2 * v30 + 2 * v6);
    do {
      --v29;
      v43 = v14 - ((unsigned int)(v42[(int)v20] * v42[(int)v20]) >> *a6);
      v44 = *v42--;
      v14 = ((unsigned int)(v44 * v44) >> *a6) + v43;
      a4[v41] = v14;
      v41 += v26;
    } while (v29 != 0);
  }
  result = a1 + 2LL * (unsigned int)v6;
  v193 = a4;
  v192 = v10;
  v191 = v20;
  v45 = a1 + 2LL * v10 - 4;
  v204 = result;
  v188 = a1;
  if (*a6 > 0) {
    v46 = v10;
    v47 = 1;
    v48 = 0;
    v209 = 4 * v10;
    v49 = -(v20 & 0x7FFFFFF8);
    v189 = v49;
    v200 = v10 - 1LL;
    v202 = v20 & 7;
    v50 = 2LL * v10 - 6;
    v182 = 2 * v6;
    v233 = 4LL * v10 + 4;
    v186 = a1 + 2 * v6;
    v212 = 3 * v10;
    v51 = 16LL * v10 + 16;
    v180 = &a4[4 * v10];
    v181 = &a4[2 * v10];
    v210 = 5 * v10;
    v52 = 2LL * (int)v20;
    v53 = v52 + 2LL * v10;
    v178 = &a4[3 * v10];
    v179 = v52 + 2 * v6;
    v177 = &a4[v10];
    v217 = v53 + a1 - 4;
    v219 = a4 + 1;
    v54 = a1 + v179;
    v55 = a1 + 2LL * v10 + 4;
    v183 = v54;
    v213 = 1;
    for (i = v10 + 2;; i += 3) {
      if ((int)v20 < 1) {
        v57 = v50;
        v60 = v20;
        v59 = 0;
      }
      else {
        v56 = *a6;
        if ((unsigned int)v20 >= 8) {
          v61 = (__int16*)(v186 + 8);
          v62 = 0;
          v59 = 0;
          v63 = (__int16*)v55;
          do {
            v62 -= 8;
            v64 = ((*(v63 - 2) * *(v61 - 2)) >> v56) +
                  ((*(v63 - 3) * *(v61 - 3)) >> v56) +
                  ((*(v63 - 4) * *(v61 - 4)) >> v56) + v59;
            v65 = v63[3];
            v66 = ((v63[1] * v61[1]) >> v56) + ((*v63 * *v61) >> v56) +
                  ((*(v63 - 1) * *(v61 - 1)) >> v56);
            v67 = v63[2];
            v63 += 8;
            v68 = v66 + v64;
            v69 = v67 * v61[2];
            v70 = v61[3];
            v61 += 8;
            v59 = ((v65 * v70) >> v56) + (v69 >> v56) + v68;
          } while (v49 != v62);
          v58 = -v62;
          v57 = v50;
          v60 = v20;
          if (v202 == 0) {
            goto LABEL_32;
          }
        LABEL_30:
          v71 = v202;
          v72 = 2 * v58;
          do {
            v73 = *(__int16*)(result + v72);
            v74 = *(__int16*)(v45 + v72);
            v72 += 2;
            --v71;
            v59 += (v74 * v73) >> v56;
          } while (v71 != 0);
          goto LABEL_32;
        }
        v57 = v50;
        v58 = 0;
        v59 = 0;
        v60 = v20;
        if (v202 != 0) {
          goto LABEL_30;
        }
      }
    LABEL_32:
      v207 = v47;
      a4[v47 * v46] = v59;
      a4[v47] = v59;
      if (v47 < v200) {
        v223 = v45;
        v205 = v18;
        v221 = v28;
        v198 = v48;
        v195 = v18 - 1;
        if ((unsigned int)(v18 - 2) >= 3) {
          v79 = ((unsigned int)v18 - 1LL) & 0xFFFFFFFFFFFFFFFCLL;
          v80 = v28;
          v82 = v209;
          v81 = v210;
          v83 = 8;
          v84 = 16;
          v85 = 20;
          v76 = 1;
          v86 = v212;
          v87 = 0;
          v77 = v53;
          v75 = v193;
          v78 = v57;
          v231 = (char*)v181 + v48;
          v229 = (char*)v180 + v48;
          v227 = (char*)v178 + v48;
          v88 = (char*)v177 + v48;
          v89 = 12;
          v225 = v88;
          v90 = v188;
          do {
            v91 = v90 + v179;
            v92 = v90 + v77;
            v93 = v90 + v182;
            v94 = v90 + v78;
            v95 = *a6;
            v96 = *(__int16*)(v90 + v179 - 2);
            v97 = *(__int16*)(v90 + v77 - 6);
            v98 = *(__int16*)(v90 + v182 - 2);
            v99 = *(__int16*)(v90 + v78);
            v76 += 4;
            v79 -= 4LL;
            v90 -= 8;
            v100 = v97 * v96;
            v101 = v99 * v98;
            v102 = &v193[v87];
            v87 += 4;
            v103 = v100 >> v95;
            v104 = v101 >> v95;
            v105 = &v102[v80];
            v80 += v27;
            v106 = v104 + v59 - v103;
            v105[1] = v106;
            *(_DWORD*)&v225[v83] = v106;
            v83 += v51;
            LOBYTE(v103) = *a6;
            LODWORD(v105) =
                (*(__int16*)(v92 - 8) * *(__int16*)(v91 - 4)) >> v103;
            v107 = (*(__int16*)(v94 - 2) * *(__int16*)(v93 - 4)) >> v103;
            v108 = &v102[v86];
            v86 += v27;
            v109 = v107 + v106 - (_DWORD)v105;
            v108[2] = v109;
            *(_DWORD*)&v231[v89] = v109;
            v89 += v51;
            v110 = &v102[v82];
            v82 += v27;
            v111 = ((*(__int16*)(v94 - 4) * *(__int16*)(v93 - 6)) >> *a6) +
                   v109 -
                   ((*(__int16*)(v92 - 10) * *(__int16*)(v91 - 6)) >> *a6);
            v110[3] = v111;
            *(_DWORD*)&v227[v84] = v111;
            v84 += v51;
            v59 = ((*(__int16*)(v94 - 6) * *(__int16*)(v93 - 8)) >> *a6) +
                  v111 -
                  ((*(__int16*)(v92 - 12) * *(__int16*)(v91 - 8)) >> *a6);
            v112 = &v102[v81];
            v81 += v27;
            v112[4] = v59;
            *(_DWORD*)&v229[v85] = v59;
            v85 += v51;
          } while (v79 != 0);
        }
        else {
          v75 = v193;
          v76 = 1;
          v77 = v53;
          v78 = v57;
        }
        v46 = v194;
        v10 = v192;
        v57 = v78;
        v53 = v77;
        a4 = v75;
        v49 = v189;
        v60 = v191;
        result = v204;
        LODWORD(v18) = v205;
        v28 = v221;
        v45 = v223;
        v48 = v198;
        if ((v195 & 3) != 0) {
          v113 = &v75[v76];
          v114 = v223 - 2 * v76;
          v115 = 0;
          v116 = (_DWORD*)((char*)v219 + v233 * v76);
          v117 = v186 - 2 * v76;
          v118 = v217 - 2 * v76;
          v119 = v192 * (v213 + v76);
          v120 = v183 - 2 * v76;
          do {
            v121 = *(__int16*)(v117 + v115);
            v122 = *(__int16*)(v118 + v115) * *(__int16*)(v120 + v115);
            v123 = *(__int16*)(v114 + v115);
            v115 -= 2;
            v59 = ((v123 * v121) >> *a6) + v59 - (v122 >> *a6);
            v113[v119] = v59;
            *v116 = v59;
            ++v113;
            v119 += v192;
            v116 = (int*)((char*)v116 + v233);
          } while (2LL * (i & 3) + v115 != 0);
        }
      }
      v45 -= 2;
      LODWORD(v18) = v18 - 1;
      v55 -= 2;
      v48 += 4;
      v20 = v60;
      v53 -= 2;
      v50 = v57 - 2;
      v28 += v10;
      v47 = v207 + 1;
      v212 += v10;
      v210 += v10;
      v209 += v10;
      v217 -= 2;
      ++v219;
      ++v213;
      if (v207 + 1 == v46) {
        return result;
      }
    }
  }
  v124 = 5 * v10;
  v125 = 1;
  v218 = 0;
  v214 = 4 * v10;
  v211 = v10 - 1LL;
  v216 = 3 * v10;
  v126 = 16LL * v10 + 16;
  v196 = 2 * v6;
  v197 = &a4[2 * v10];
  v190 = &a4[4 * v10];
  v127 = 2LL * (int)v20;
  v128 = 2LL * v10 - 6;
  v129 = v127 + 2LL * v10;
  v184 = &a4[v10];
  v230 = a4 + 1;
  v185 = &a4[3 * v10];
  v187 = v127 + 2 * v18;
  v201 = a1 + 2 * v18;
  v203 = 4LL * v10 + 4;
  v228 = v129 + a1 - 4;
  v130 = a1 + v187;
  v131 = v10;
  v199 = v130;
  v226 = v10 + 2;
  v220 = 1;
  do {
    v232 = v125;
    v224 = v45;
    v132 = v20;
    v222 = v28;
    v133 = MovieRoutine_652a0(result, v45);
    v134 = v232;
    v135 = v224;
    v20 = v132;
    a4[v232 * v131] = v133;
    a4[v232] = v133;
    if (v232 < v211) {
      v206 = v18;
      v208 = v18 - 1;
      if ((unsigned int)(v18 - 2) >= 3) {
        v138 = ((unsigned int)v18 - 1LL) & 0xFFFFFFFFFFFFFFFCLL;
        v139 = v222;
        v140 = v124;
        v141 = 8;
        v142 = 16;
        v143 = 20;
        v144 = 12;
        v145 = v214;
        v146 = 0;
        v147 = v216;
        v136 = v193;
        v148 = v188;
        v137 = 1;
        do {
          v149 = v148 + v187;
          v150 = v148 + v129;
          v151 = v148 + v196;
          v152 = (__int16*)(v148 + v128);
          v153 = *(__int16*)(v148 + v187 - 2);
          v154 = *(__int16*)(v148 + v129 - 6);
          v155 = *(__int16*)(v148 + v196 - 2);
          v137 += 4;
          v138 -= 4LL;
          v148 -= 8;
          v156 = v133 - v154 * v153;
          v157 = &v193[v146];
          v146 += 4;
          v158 = v156 + *v152 * v155;
          v159 = &v157[v139];
          v139 += v27;
          v159[1] = v158;
          *(unsigned int*)((char*)&v184[v218] + v141) = v158;
          v141 += v126;
          v160 = v158 - *(__int16*)(v150 - 8) * *(__int16*)(v149 - 4) +
                 *(v152 - 1) * *(__int16*)(v151 - 4);
          v161 = &v157[v147];
          v147 += v27;
          v161[2] = v160;
          *(unsigned int*)((char*)&v197[v218] + v144) = v160;
          v144 += v126;
          v162 = v160 - *(__int16*)(v150 - 10) * *(__int16*)(v149 - 6) +
                 *(v152 - 2) * *(__int16*)(v151 - 6);
          v163 = &v157[v145];
          v145 += v27;
          v163[3] = v162;
          *(unsigned int*)((char*)&v185[v218] + v142) = v162;
          v142 += v126;
          v133 = v162 - *(__int16*)(v150 - 12) * *(__int16*)(v149 - 8) +
                 *(v152 - 3) * *(__int16*)(v151 - 8);
          v164 = &v157[v140];
          v140 += v27;
          v164[4] = v133;
          *(unsigned int*)((char*)&v190[v218] + v143) = v133;
          v143 += v126;
        } while (v138 != 0);
      }
      else {
        v136 = v193;
        v137 = 1;
      }
      LODWORD(v18) = v206;
      a4 = v136;
      v10 = v192;
      v20 = v191;
      v131 = v194;
      v135 = v224;
      v134 = v232;
      if ((v208 & 3) != 0) {
        v165 = &a4[v137];
        v166 = v224 - 2 * v137;
        v167 = 0;
        v168 = v220 + v137;
        v169 = (_DWORD*)((char*)v230 + v203 * v137);
        v170 = v201 - 2 * v137;
        v171 = v228 - 2 * v137;
        v172 = v199 - 2 * v137;
        v173 = v192 * v168;
        do {
          v174 = v133 - *(__int16*)(v171 + v167) * *(__int16*)(v172 + v167);
          v175 = *(__int16*)(v170 + v167);
          v176 = *(__int16*)(v166 + v167);
          v167 -= 2;
          v133 = v174 + v176 * v175;
          v165[v173] = v133;
          *v169 = v133;
          v169 = (int*)((char*)v169 + v203);
          ++v165;
          v173 += v192;
        } while (2LL * (v226 & 3) + v167 != 0);
      }
    }
    result = v204;
    v45 = v135 - 2;
    v125 = v134 + 1;
    LODWORD(v18) = v18 - 1;
    v124 += v10;
    v129 -= 2;
    v128 -= 2;
    v28 = v222 + v10;
    v216 += v10;
    v214 += v10;
    ++v218;
    ++v220;
    v228 -= 2;
    ++v230;
    v226 += 3;
  } while (v125 != v131);
  return result;
}

__int64 MovieHr_60180(__int64 result, __int64 a2, int a3)
{
  int* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  int* v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int* v31;
  int v32;
  unsigned __int64 v33;

  if (a3 >= 1) {
    v3 = (int*)(result - 4);
    v4 = 1;
    v5 = 0;
    v6 = (unsigned int)a3;
    do {
      if (v4 >> 1 <= 1) {
        v7 = 1;
      }
      else {
        v7 = v4 >> 1;
      }
      v8 = v5 + 1;
      if ((v5 + 1) >> 1 <= 1) {
        LOBYTE(v9) = 1;
      }
      else {
        v9 = (v5 + 1) >> 1;
      }
      v10 = *(_DWORD*)(a2 + 4 * v5);
      if (v5 != 0) {
        if (v5 >= 0xF) {
          v12 = result + 4 * v5;
          v11 = 0;
          v13 = (int*)(result + 16);
          v14 = v3;
          do {
            v15 = *v14;
            v16 = *(v13 - 4);
            *(v13 - 4) = v16 + ((unsigned __int64)(*v14 * (__int64)v10) >> 16);
            *v14 = v15 + ((unsigned __int64)(v16 * (__int64)v10) >> 16);
            v14 -= 8;
            v17 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFELL));
            v18 = *(v13 - 3);
            *(v13 - 3) = v18 + ((unsigned __int64)(v17 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFELL)) =
                v17 + ((unsigned __int64)(v18 * (__int64)v10) >> 16);
            v19 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFDLL));
            v20 = *(v13 - 2);
            *(v13 - 2) = v20 + ((unsigned __int64)(v19 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFDLL)) =
                v19 + ((unsigned __int64)(v20 * (__int64)v10) >> 16);
            v21 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFCLL));
            v22 = *(v13 - 1);
            *(v13 - 1) = v22 + ((unsigned __int64)(v21 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFCLL)) =
                v21 + ((unsigned __int64)(v22 * (__int64)v10) >> 16);
            v23 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFBLL));
            v24 = *v13 * (__int64)v10;
            *v13 += (unsigned __int64)(v23 * (__int64)v10) >> 16;
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFBLL)) =
                v23 + (v24 >> 16);
            LODWORD(v24) = v13[1];
            v25 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFALL));
            v13[1] = v24 + ((unsigned __int64)(v25 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFALL)) =
                v25 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
            v26 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFF9LL));
            LODWORD(v24) = v13[2];
            v13[2] = v24 + ((unsigned __int64)(v26 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFF9LL)) =
                v26 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
            v27 = v11 ^ 0x3FFFFFFFFFFFFFF8LL;
            v11 += 8;
            v28 = *(_DWORD*)(v12 + 4 * v27);
            LODWORD(v24) = v13[3];
            v13[3] = v24 + ((unsigned __int64)(v28 * (__int64)v10) >> 16);
            v13 += 8;
            *(_DWORD*)(v12 + 4 * v27) =
                v28 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
          } while ((v7 & 0x7FFFFFFFFFFFFFF8LL) != v11);
        }
        else {
          v11 = 0;
        }
        if ((v9 & 7) != 0) {
          v29 = v7 & 7;
          v30 = -1 * v11;
          v31 = (int*)(result + 4 * v11);
          do {
            v32 = v3[v30];
            --v29;
            v33 = *v31 * (__int64)v10;
            *v31++ += (unsigned __int64)(v32 * (__int64)v10) >> 16;
            v3[v30--] = v32 + (v33 >> 16);
          } while (v29 != 0);
        }
      }
      ++v4;
      ++v3;
      *(_DWORD*)(result + 4 * v5++) = -256 * v10;
    } while (v8 != v6);
  }
  return result;
}

_DWORD* MovieHr_63520(_DWORD* result, __int64 a2, int a3, __int64 a4, int a5,
                      int a6, int a7)
{
  char* v7;
  int v8;
  __int64 v9;
  __int16* v10;
  char* v11;
  unsigned int v12;
  __int64 v13;
  char* v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  _DWORD* v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  _DWORD* v36;
  char* v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  char* v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  char* v62;
  _DWORD* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 i;
  char* v70;
  int v71;
  int v72;
  unsigned int v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  _DWORD* v85;
  unsigned int v86;
  int v87;
  _QWORD v88[14];
  _BYTE v89[80];
  _BYTE* v90;
  _DWORD* v91;
  _DWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  char* v98;
  int v99;
  __int64 v100;
  unsigned int v101;

  v99 = a7;
  v100 = a4;
  v92 = result;
  if (a5 == 4) {
    v98 = (char*)MovieData_c0b10 + 8 * a6;
    v7 = (char*)MovieData_c0ac8;
    v8 = *((char*)MovieData_c0b18 + a6);
    v9 = 34;
  }
  else {
    v8 = 12;
    v7 = (char*)MovieData_c0ad0;
    v98 = (char*)MovieData_c0b08;
    v9 = 12;
  }
  v93 = v9;
  v88[13] = 0;
  memset(v89, 0, 72);
  v88[12] = 0;
  memset(v88, 0, 88);
  if (a5 >= 1) {
    v10 = (__int16*)(a2 + 8LL * (_DWORD)v100);
    v95 = (int)v100;
    v96 = -(__int64)a3;
    v94 = (unsigned int)a5;
    if (v8 > 0) {
      v11 = v7 + 3;
      v12 = 0;
      v13 = 0;
      v97 = v8 & 7;
      v90 = v89;
      v91 = v92 + 20;
      while (1) {
        v101 = v12;
        v14 = &v98[2 * v13];
        v15 = *v14;
        v16 = v14[1];
        result = (_DWORD*)MovieRoutine_3b1c0(v10, (__int64)&v10[v96 - v14[1]],
                                             (__int64)v88, v100, v16 - v15 + 1);
        v17 = v16 - v15;
        if (v16 >= v15) {
          v18 = v17 + 1;
          if (v17 >= 7) {
            result = v90;
            v22 = 0;
            do {
              v23 = *((_DWORD*)v88 + v17 + (unsigned int)v22 - 1);
              *(result - 4) = *((_DWORD*)v88 + v17 + (unsigned int)v22);
              *(result - 3) = v23;
              v24 = *((_DWORD*)&v88[-1] + v17 + (unsigned int)v22 - 1);
              v25 = *((_DWORD*)&v88[-2] + v17 + (unsigned int)v22);
              *(result - 2) = *((_DWORD*)&v88[-1] + v17 + (unsigned int)v22);
              *(result - 1) = v24;
              v26 = *((_DWORD*)&v88[-2] + v17 + (unsigned int)v22 - 1);
              *result = v25;
              result[1] = v26;
              v27 = v17 - 6 + v22;
              v28 = v17 - 7 + v22;
              v22 -= 8;
              v29 = *((_DWORD*)v88 + v28);
              result[2] = *((_DWORD*)v88 + v27);
              result[3] = v29;
              result += 8;
            } while (-(__int64)(v18 & 0xFFFFFFF8) != v22);
            v19 = -v22;
            v20 = v15 - v22;
            v21 = v18 & 7;
            if (v21 == 0) {
              goto LABEL_17;
            }
          LABEL_15:
            v30 = (_DWORD*)&v88[12] + v19;
            v31 = v16 - v20;
            do {
              v32 = *((_DWORD*)v88 + v31--);
              --v21;
              *v30++ = v32;
            } while (v21 != 0);
            goto LABEL_17;
          }
          v19 = 0;
          v20 = v15;
          v21 = v18 & 7;
          if (v21 != 0) {
            goto LABEL_15;
          }
        }
      LABEL_17:
        v33 = v101;
        v34 = 0;
        if ((unsigned int)v8 >= 8) {
          v35 = 0;
          v36 = &v91[5 * v101];
          v37 = v11;
          do {
            v35 -= 8;
            v38 = (char*)&v88[12] + 4 * (*(v37 - 3) - (__int64)v15);
            v39 = *(_QWORD*)v38;
            v40 = *((_QWORD*)v38 + 1);
            LODWORD(v38) = *((_DWORD*)v38 + 4);
            *((_QWORD*)v36 - 10) = v39;
            *((_QWORD*)v36 - 9) = v40;
            *(v36 - 16) = (_DWORD)v38;
            v41 = (char*)&v88[12] + 4 * (*(v37 - 2) - (__int64)v15);
            v42 = *(_QWORD*)v41;
            v43 = *((_QWORD*)v41 + 1);
            LODWORD(v41) = *((_DWORD*)v41 + 4);
            *(_QWORD*)(v36 - 15) = v42;
            *(_QWORD*)(v36 - 13) = v43;
            *(v36 - 11) = (_DWORD)v41;
            v44 = (char*)&v88[12] + 4 * (*(v37 - 1) - (__int64)v15);
            *(v36 - 6) = *((_DWORD*)v44 + 4);
            v45 = *((_QWORD*)v44 + 1);
            *((_QWORD*)v36 - 5) = *(_QWORD*)v44;
            *((_QWORD*)v36 - 4) = v45;
            v46 = (char*)&v88[12] + 4 * (*v37 - (__int64)v15);
            *(v36 - 1) = *((_DWORD*)v46 + 4);
            v48 = v46;
            v47 = *(_QWORD*)v46;
            *(_QWORD*)(v36 - 3) = *((_QWORD*)v48 + 1);
            *(_QWORD*)(v36 - 5) = v47;
            v49 = (char*)&v88[12] + 4 * (v37[1] - (__int64)v15);
            v36[4] = *((_DWORD*)v49 + 4);
            v50 = *((_QWORD*)v49 + 1);
            *(_QWORD*)v36 = *(_QWORD*)v49;
            *((_QWORD*)v36 + 1) = v50;
            v51 = (char*)&v88[12] + 4 * (v37[2] - (__int64)v15);
            v52 = *(_QWORD*)v51;
            v53 = *((_QWORD*)v51 + 1);
            LODWORD(v51) = *((_DWORD*)v51 + 4);
            *(_QWORD*)(v36 + 5) = v52;
            *(_QWORD*)(v36 + 7) = v53;
            v36[9] = (_DWORD)v51;
            v54 = (char*)&v88[12] + 4 * (v37[3] - (__int64)v15);
            v55 = *(_QWORD*)v54;
            v56 = *((_QWORD*)v54 + 1);
            v36[14] = *((_DWORD*)v54 + 4);
            *((_QWORD*)v36 + 5) = v55;
            *((_QWORD*)v36 + 6) = v56;
            v57 = v37[4];
            v37 += 8;
            v58 = (char*)&v88[12] + 4 * (v57 - v15);
            v59 = *(_QWORD*)v58;
            v60 = *((_QWORD*)v58 + 1);
            v36[19] = *((_DWORD*)v58 + 4);
            *(_QWORD*)(v36 + 17) = v60;
            *(_QWORD*)(v36 + 15) = v59;
            v36 += 40;
          } while (-(__int64)(v8 & 0x7FFFFFF8) != v35);
          v34 = -v35;
        }
        v61 = v33;
        if (v97 != 0) {
          v62 = &v7[v34];
          v63 = &v92[5 * v34 + 5 * v33];
          v64 = v97;
          do {
            v65 = *v62++;
            --v64;
            v66 = (char*)&v88[12] + 4 * (v65 - v15);
            v67 = *(_QWORD*)v66;
            v68 = *((_QWORD*)v66 + 1);
            LODWORD(v66) = *((_DWORD*)v66 + 4);
            *(_QWORD*)v63 = v67;
            *((_QWORD*)v63 + 1) = v68;
            v63[4] = (_DWORD)v66;
            v63 += 5;
          } while (v64 != 0);
        }
        ++v13;
        v12 = v61 + v8;
        v10 += v95;
        v11 += v93;
        v7 += v93;
        if (v13 == v94) {
          return result;
        }
      }
    }
    for (i = 0; i != v94; ++i) {
      v70 = &v98[2 * i];
      v71 = *v70;
      v72 = v70[1];
      result = (_DWORD*)MovieRoutine_3b1c0(v10, (__int64)&v10[v96 - v70[1]],
                                           (__int64)v88, v100, v72 - v71 + 1);
      v73 = v72 - v71;
      if (v72 >= v71) {
        v74 = v73 + 1;
        if (v73 >= 7) {
          v77 = 0;
          result = v89;
          do {
            v78 = *((_DWORD*)v88 + v73 + (unsigned int)v77 - 1);
            *(result - 4) = *((_DWORD*)v88 + v73 + (unsigned int)v77);
            *(result - 3) = v78;
            v79 = *((_DWORD*)&v88[-1] + v73 + (unsigned int)v77 - 1);
            v80 = *((_DWORD*)&v88[-2] + v73 + (unsigned int)v77);
            *(result - 2) = *((_DWORD*)&v88[-1] + v73 + (unsigned int)v77);
            *(result - 1) = v79;
            v81 = *((_DWORD*)&v88[-2] + v73 + (unsigned int)v77 - 1);
            *result = v80;
            result[1] = v81;
            v82 = v73 - 6 + v77;
            v83 = v73 - 7 + v77;
            v77 -= 8;
            v84 = *((_DWORD*)v88 + v83);
            result[2] = *((_DWORD*)v88 + v82);
            result[3] = v84;
            result += 8;
          } while (-(__int64)(v74 & 0xFFFFFFF8) != v77);
          v75 = -v77;
          v71 -= v77;
          v76 = v74 & 7;
          if (v76 == 0) {
            goto LABEL_26;
          }
        LABEL_34:
          v85 = (_DWORD*)&v88[12] + v75;
          v86 = v72 - v71;
          do {
            v87 = *((_DWORD*)v88 + v86--);
            --v76;
            *v85++ = v87;
          } while (v76 != 0);
          goto LABEL_26;
        }
        v75 = 0;
        v76 = v74 & 7;
        if (v76 != 0) {
          goto LABEL_34;
        }
      }
    LABEL_26:
      v10 += v95;
    }
  }
  return result;
}

__int64 MovieHr_651a0(__int64 result, __int64 a2, int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  _WORD* v6;
  __int16* v7;
  __int64 v8;
  int v9;
  _WORD* v10;
  __int16* v11;
  int v12;

  if (a4 >= 1) {
    v4 = a4 & 7;
    if ((unsigned int)a4 < 8) {
      v5 = 0;
      if ((a4 & 7) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v6 = (_WORD*)(result + 8);
    v7 = (__int16*)(a2 + 8);
    v8 = 0;
    do {
      v8 -= 8;
      *(v6 - 4) = (unsigned int)(a3 * *(v7 - 4)) >> 16;
      *(v6 - 3) = (unsigned int)(a3 * *(v7 - 3)) >> 16;
      *(v6 - 2) = (unsigned int)(a3 * *(v7 - 2)) >> 16;
      *(v6 - 1) = (unsigned int)(a3 * *(v7 - 1)) >> 16;
      *v6 = (unsigned int)(a3 * *v7) >> 16;
      v6[1] = (unsigned int)(a3 * v7[1]) >> 16;
      v6[2] = (unsigned int)(a3 * v7[2]) >> 16;
      v9 = v7[3];
      v7 += 8;
      v6[3] = (unsigned int)(a3 * v9) >> 16;
      v6 += 8;
    } while (-(__int64)(a4 & 0x7FFFFFF8) != v8);
    v5 = -v8;
    if ((a4 & 7) != 0) {
    LABEL_8:
      v10 = (_WORD*)(result + 2 * v5);
      v11 = (__int16*)(a2 + 2 * v5);
      do {
        v12 = *v11++;
        --v4;
        *v10++ = (unsigned int)(a3 * v12) >> 16;
      } while (v4 != 0);
    }
  }
  return result;
}

__int64 MovieHr_652a0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int16* v7;
  __int16* v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int16* v13;
  __int16* v14;
  int v15;
  int v16;
  int v17;

  if (a3 >= 1) {
    v3 = a3 & 7;
    if ((unsigned int)a3 >= 8) {
      v7 = (__int16*)(a2 + 8);
      v8 = (__int16*)(a1 + 8);
      v9 = 0;
      v5 = 0;
      do {
        v9 -= 8;
        v10 = v5 + *(v7 - 4) * *(v8 - 4) + *(v7 - 3) * *(v8 - 3) +
              *(v7 - 2) * *(v8 - 2) + *(v7 - 1) * *(v8 - 1) + *v7 * *v8 +
              v7[1] * v8[1] + v7[2] * v8[2];
        v11 = v8[3];
        v12 = v7[3];
        v7 += 8;
        v8 += 8;
        v5 = v10 + v12 * v11;
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v9);
      v4 = -v9;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    else {
      v4 = 0;
      v5 = 0;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    v13 = (__int16*)(a2 + 2 * v4);
    v14 = (__int16*)(a1 + 2 * v4);
    do {
      v16 = *v14++;
      v15 = v16;
      v17 = *v13++;
      --v3;
      v5 += v17 * v15;
    } while (v3 != 0);
    return v5;
  }
  return 0;
}

__int64 MovieHr_653a0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int16* v7;
  __int16* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int16* v13;
  __int16* v14;
  int v15;
  int v16;
  int v17;

  if (a3 >= 1) {
    v3 = a3 & 7;
    if ((unsigned int)a3 >= 8) {
      v7 = (__int16*)(a2 + 8);
      v8 = (__int16*)(a1 + 8);
      v9 = 0;
      v5 = 0;
      do {
        v9 -= 8;
        v10 = v5 + *(v7 - 4) * (__int64)*(v8 - 4) +
              *(v7 - 3) * (__int64)*(v8 - 3) + *(v7 - 2) * (__int64)*(v8 - 2) +
              *(v7 - 1) * (__int64)*(v8 - 1) + *v7 * (__int64)*v8 +
              v7[1] * (__int64)v8[1] + v7[2] * (__int64)v8[2];
        v11 = v8[3];
        v12 = v7[3];
        v7 += 8;
        v8 += 8;
        v5 = v10 + v12 * (__int64)v11;
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v9);
      v4 = -v9;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    else {
      v4 = 0;
      v5 = 0;
      if ((a3 & 7) == 0) {
        return v5;
      }
    }
    v13 = (__int16*)(a2 + 2 * v4);
    v14 = (__int16*)(a1 + 2 * v4);
    do {
      v16 = *v14++;
      v15 = v16;
      v17 = *v13++;
      --v3;
      v5 += v17 * (__int64)v15;
    } while (v3 != 0);
    return v5;
  }
  return 0;
}

__int64 MovieHr_68420(__int64 result, __int64 a2, __int64 a3, int a4,
                      unsigned int a5, __int16* a6, int a7)
{
  __int64 v7;
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
  __int16* v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int16* v33;
  int v34;
  __int64 v35;
  __int64 v38;

  if ((int)a5 >= 1 && a4 >= 1) {
    v7 = 2LL * a5;
    v8 = 8LL * a5;
    v9 = 0;
    v10 = 0;
    v11 = a2;
    v12 = result;
    v13 = a3;
    v14 = a4 & 0x7FFFFFFC;
    v38 = a4 & 3;
    v35 = a5;
    v15 = a3 + 6LL * a5;
    v16 = result + 6LL * a5;
    v17 = a2 + 6LL * a5;
    v18 = 48000 / a7;
    v19 = 2 * v18;
    v20 = 4LL * a5;
    v21 = a3 + v20;
    v22 = result + v20;
    v23 = a2 + v20;
    do {
      v24 = 0;
      if ((unsigned int)a4 >= 4) {
        v25 = a6;
        v26 = v9;
        do {
          v24 += 4;
          v27 = *v25 * *v25;
          *(_WORD*)(a3 + v26) =
              (unsigned int)((__int16)(v27 >> 15) * *(__int16*)(a2 + v26) +
                             ((int)((2 * v27) & 0xFFFF0000 ^ 0x7FFF0000) >>
                              16) *
                                 *(__int16*)(result + v26)) >>
              15;
          v28 = v25[v18] * v25[v18];
          *(_WORD*)(a3 + v7 + v26) =
              (unsigned int)((__int16)(v28 >> 15) * *(__int16*)(a2 + v7 + v26) +
                             ((int)((2 * v28) & 0xFFFF0000 ^ 0x7FFF0000) >>
                              16) *
                                 *(__int16*)(result + v7 + v26)) >>
              15;
          v29 = v25[2 * v18] * v25[2 * v18];
          *(_WORD*)(v21 + v26) =
              (unsigned int)((__int16)(v29 >> 15) * *(__int16*)(v23 + v26) +
                             ((int)((2 * v29) & 0xFFFF0000 ^ 0x7FFF0000) >>
                              16) *
                                 *(__int16*)(v22 + v26)) >>
              15;
          v30 = v25[3 * v18];
          v25 += 4 * v18;
          *(_WORD*)(v15 + v26) =
              (unsigned int)((__int16)((v30 * v30) >> 15) *
                                 *(__int16*)(v17 + v26) +
                             ((int)((2 * v30 * v30) & 0xFFFF0000 ^
                                    0x7FFF0000) >>
                              16) *
                                 *(__int16*)(v16 + v26)) >>
              15;
          v26 += v8;
        } while (v14 != v24);
      }
      if (v38 != 0) {
        v31 = v38;
        v32 = v7 * v24;
        v33 = (__int16*)((char*)a6 + v19 * v24);
        do {
          v34 = *v33;
          v33 = (__int16*)((char*)v33 + v19);
          --v31;
          *(_WORD*)(v13 + v32) =
              (unsigned int)((__int16)((v34 * v34) >> 15) *
                                 *(__int16*)(v11 + v32) +
                             ((int)((2 * v34 * v34) & 0xFFFF0000 ^
                                    0x7FFF0000) >>
                              16) *
                                 *(__int16*)(v12 + v32)) >>
              15;
          v32 += v7;
        } while (v31 != 0);
      }
      ++v10;
      v13 += 2;
      v12 += 2;
      v11 += 2;
      v9 += 2;
    } while (v10 != v35);
  }
  return result;
}

__int64 MovieHr_68dc0(__int64 result, __int64 a2, unsigned int a3, int a4,
                      int a5, unsigned int a6, int a7)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  __int16* v13;
  __int16* v14;
  int v15;
  __int16* v16;
  int v17;
  __int16* v18;
  int v19;
  __int16* v20;
  int v21;
  __int16* v22;
  int v23;
  __int16* v24;
  _DWORD* v25;
  __int16* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  int* v40;
  __int16* v41;
  int v42;
  __int16* v43;
  int v44;
  __int16* v45;
  int v46;
  int v47;
  __int16* v48;
  int v49;
  __int16* v50;
  int v51;
  int v52;
  int v53;
  int v54;
  __int16* v55;
  int v56;
  __int16* v57;
  int v58;
  int v59;
  int v60;
  _DWORD* v61;
  __int64 v62;
  int v63;
  int* v64;
  __int64 v65;
  __int64 v66;
  __int16* v67;
  int v68;
  __int16* v69;
  int v70;
  __int16* v71;
  int v72;
  int v73;
  __int16* v74;
  int v75;
  __int16* v76;
  int v77;
  int v78;
  int v79;
  int v80;
  __int16* v81;
  int v82;
  __int16* v83;
  int v84;
  int v85;
  int v86;
  _DWORD* v87;
  __int16* v88;
  int v89;

  if ((int)a3 < 1) {
    return result;
  }
  v7 = a5;
  v8 = a3 & 7;
  v9 = a7;
  if (a3 < 8) {
    v10 = 0;
    if ((a3 & 7) == 0) {
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  v11 = (_DWORD*)(a2 + 16);
  v12 = 0;
  v13 = (__int16*)(result + 2 * a7 * (__int64)a4 + 2LL * a5);
  do {
    v12 -= 8;
    *(v11 - 4) = *v13;
    v14 = &v13[a7];
    v13 += 8 * a7;
    v15 = *v14;
    v16 = &v14[v9];
    *(v11 - 3) = v15;
    v17 = *v16;
    v18 = &v16[v9];
    *(v11 - 2) = v17;
    v19 = *v18;
    v20 = &v18[v9];
    *(v11 - 1) = v19;
    v21 = *v20;
    v22 = &v20[v9];
    *v11 = v21;
    v23 = *v22;
    v24 = &v22[v9];
    v11[1] = v23;
    v11[2] = *v24;
    v11[3] = v24[a7];
    v11 += 8;
  } while (-(__int64)(a3 & 0x7FFFFFF8) != v12);
  v10 = -v12;
  if ((a3 & 7) != 0) {
  LABEL_8:
    v25 = (_DWORD*)(a2 + 4 * v10);
    v26 = (__int16*)(result + 2 * (v10 + a4) * a7 + 2 * v7);
    do {
      v27 = *v26;
      v26 = (__int16*)((char*)v26 + v9 * 2);
      --v8;
      *v25++ = v27;
    } while (v8 != 0);
  }
LABEL_10:
  if ((a6 & 0x80000000) != 0) {
    if (a6 != -2 || a7 < 2) {
      return result;
    }
    v32 = a4;
    v33 = (unsigned int)a7;
    v34 = (__int16*)(result + 2);
    v35 = 16LL * (unsigned int)a7;
    v36 = 2LL * (unsigned int)a7;
    v37 = 1;
    v38 = result + 2 + 2 * a4 * (unsigned __int64)(unsigned int)a7;
    while (a3 < 8) {
      result = 0;
      if ((a3 & 7) != 0) {
        goto LABEL_24;
      }
    LABEL_17:
      ++v37;
      v38 += 2LL;
      ++v34;
      if (v37 == v33) {
        return result;
      }
    }
    v39 = 0;
    v40 = (int*)(a2 + 16);
    v41 = (__int16*)v38;
    do {
      v42 = *(v40 - 3);
      v39 -= 8;
      *(v40 - 4) += *v41;
      v43 = &v41[v33];
      v41 = (__int16*)((char*)v41 + v35);
      v44 = *v43;
      v45 = &v43[(unsigned __int64)v36 / 2];
      *(v40 - 3) = v42 + v44;
      v46 = *(v40 - 1);
      v47 = *v45;
      v48 = &v45[(unsigned __int64)v36 / 2];
      *(v40 - 2) += v47;
      v49 = *v48;
      v50 = &v48[(unsigned __int64)v36 / 2];
      v51 = v46 + v49;
      v52 = *v40;
      v53 = v40[1];
      *(v40 - 1) = v51;
      v54 = *v50;
      v55 = &v50[(unsigned __int64)v36 / 2];
      *v40 = v52 + v54;
      v56 = *v55;
      v57 = &v55[(unsigned __int64)v36 / 2];
      v58 = v53 + v56;
      v59 = v40[2];
      v60 = v40[3];
      v40[1] = v58;
      v40[2] = v59 + *v57;
      v40[3] = v60 + v57[(unsigned __int64)v36 / 2];
      v40 += 8;
    } while (-(__int64)(a3 & 0x7FFFFFF8) != v39);
    result = -v39;
    if ((a3 & 7) == 0) {
      goto LABEL_17;
    }
  LABEL_24:
    v61 = (_DWORD*)(a2 + 4 * result);
    v62 = a3 & 7;
    result = (__int64)v34 + v36 * (v32 + result);
    do {
      v63 = *(__int16*)result;
      result += v36;
      --v62;
      *v61++ += v63;
    } while (v62 != 0);
    goto LABEL_17;
  }
  v28 = a4;
  v29 = a3 & 7;
  v30 = a7;
  if (a3 < 8) {
    v31 = 0;
    if ((a3 & 7) == 0) {
      return result;
    }
    goto LABEL_30;
  }
  v64 = (int*)(a2 + 16);
  v65 = 0;
  v66 = -(__int64)(a3 & 0x7FFFFFF8);
  v67 = (__int16*)(result + 2 * a7 * (__int64)a4 + 2LL * a6);
  do {
    v68 = *(v64 - 3);
    v65 -= 8;
    *(v64 - 4) += *v67;
    v69 = &v67[a7];
    v67 += 8 * a7;
    v70 = *v69;
    v71 = &v69[v30];
    *(v64 - 3) = v68 + v70;
    v72 = *(v64 - 1);
    v73 = *v71;
    v74 = &v71[v30];
    *(v64 - 2) += v73;
    v75 = *v74;
    v76 = &v74[v30];
    v77 = v72 + v75;
    v78 = *v64;
    v79 = v64[1];
    *(v64 - 1) = v77;
    v80 = *v76;
    v81 = &v76[v30];
    *v64 = v78 + v80;
    v82 = *v81;
    v83 = &v81[v30];
    v84 = v79 + v82;
    v85 = v64[2];
    v86 = v64[3];
    v64[1] = v84;
    v64[2] = v85 + *v83;
    v64[3] = v86 + v83[a7];
    v64 += 8;
  } while (v66 != v65);
  v31 = -v65;
  if (v29 != 0) {
  LABEL_30:
    v87 = (_DWORD*)(a2 + 4 * v31);
    v88 = (__int16*)(result + 2 * (v31 + v28) * a7 + 2LL * a6);
    do {
      v89 = *v88;
      v88 = (__int16*)((char*)v88 + v30 * 2);
      --v29;
      *v87++ += v89;
    } while (v29 != 0);
  }
  return result;
}

__int64 MovieHr_6cc20(__int64 result, __int64 a2, __int16 a3, __int16 a4,
                      int a5, int a6, int a7, __int16* a8, int a9)
{
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int16* v16;
  _WORD* v17;
  __int64 v18;
  __int16* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  _WORD* v25;
  __int16* v26;
  __int64 v27;
  __int16* v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 i;
  __int64 v49;
  __int64 v50;
  __int16* v51;
  _WORD* v52;
  int v53;
  __int16* v54;
  _WORD* v55;
  int v56;
  __int16* v57;
  _WORD* v58;
  int v59;
  __int16* v60;
  _WORD* v61;
  int v62;
  __int16* v63;
  _WORD* v64;
  int v65;
  __int16* v66;
  _WORD* v67;
  int v68;
  __int16* v69;
  _WORD* v70;

  v9 = 48000 / a9;
  v10 = a4;
  v11 = a5 / (48000 / a9);
  if (a7 != 1) {
    if (v11 < 1) {
      goto LABEL_17;
    }
    v14 = a3;
    if (v11 == 1) {
      v15 = 0;
    }
    else {
      v25 = (_WORD*)(a2 + 4);
      v26 = (__int16*)(result + 4);
      v27 = 0;
      v28 = a8;
      do {
        v27 -= 2;
        v29 = *v28 * *v28;
        v30 = (__int16)(((__int16)(v29 >> 15) * a4 +
                         ((int)((2 * v29) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                             v14) >>
                        15);
        *(v25 - 2) = (unsigned int)(v30 * *(v26 - 2)) >> 15;
        *(v25 - 1) = (unsigned int)(v30 * *(v26 - 1)) >> 15;
        v31 = v28[v9];
        v28 += 2 * v9;
        v32 = (__int16)(((__int16)((v31 * v31) >> 15) * a4 +
                         ((int)((2 * v31 * v31) & 0xFFFF0000 ^ 0x7FFF0000) >>
                          16) *
                             v14) >>
                        15);
        *v25 = (unsigned int)(v32 * *v26) >> 15;
        v33 = v26[1];
        v26 += 4;
        v25[1] = (unsigned int)(v32 * v33) >> 15;
        v25 += 4;
      } while (-(__int64)(v11 & 0x7FFFFFFE) != v27);
      v15 = -v27;
      if ((v11 & 1) == 0) {
        goto LABEL_17;
      }
    }
    v34 = a8[v15 * v9];
    v24 = (__int16)(((__int16)((v34 * v34) >> 15) * a4 +
                     ((int)((2 * v34 * v34) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                         v14) >>
                    15);
    *(_WORD*)(a2 + 4 * v15) =
        (unsigned int)(v24 * *(__int16*)(result + 4 * v15)) >> 15;
    v13 = (2 * v15) | 1;
    goto LABEL_16;
  }
  if (v11 < 1) {
    goto LABEL_17;
  }
  v12 = a3;
  if (v11 == 1) {
    v13 = 0;
  LABEL_11:
    v23 = a8[v13 * v9];
    v24 = (__int16)(((__int16)((v23 * v23) >> 15) * a4 +
                     ((int)((2 * v23 * v23) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                         v12) >>
                    15);
  LABEL_16:
    *(_WORD*)(a2 + 2 * v13) =
        (unsigned int)(v24 * *(__int16*)(result + 2 * v13)) >> 15;
    goto LABEL_17;
  }
  v16 = (__int16*)(result + 2);
  v17 = (_WORD*)(a2 + 2);
  v18 = 0;
  v19 = a8;
  do {
    v18 -= 2;
    v20 = *v19 * *v19;
    *(v17 - 1) =
        (unsigned int)((__int16)(((__int16)(v20 >> 15) * a4 +
                                  ((int)((2 * v20) & 0xFFFF0000 ^ 0x7FFF0000) >>
                                   16) *
                                      v12) >>
                                 15) *
                       *(v16 - 1)) >>
        15;
    v21 = v19[v9];
    v19 += 2 * v9;
    v22 = *v16;
    v16 += 2;
    *v17 = (unsigned int)((__int16)(((__int16)((v21 * v21) >> 15) * a4 +
                                     ((int)((2 * v21 * v21) & 0xFFFF0000 ^
                                            0x7FFF0000) >>
                                      16) *
                                         v12) >>
                                    15) *
                          v22) >>
           15;
    v17 += 2;
  } while (-(__int64)(v11 & 0x7FFFFFFE) != v18);
  v13 = -v18;
  if ((v11 & 1) != 0) {
    goto LABEL_11;
  }
LABEL_17:
  if (v11 < a6) {
    v35 = v11;
    v36 = v11 * (__int64)a7;
    v37 = 0;
    v38 = ((_BYTE)a6 - (_BYTE)v11) & 7;
    if (a7 <= 1) {
      v39 = 1;
    }
    else {
      v39 = (unsigned int)a7;
    }
    v40 = v11 - (__int64)a6;
    v41 = a2 + 2 * v36;
    v42 = (v35 + v38) * a7;
    v43 = a6 - (v35 + v38);
    v44 = a7;
    v45 = result + 2 * v36;
    v46 = result + 2 * v42;
    result = a2 + 2 * v42;
    do {
      if (v38 != 0) {
        v47 = 0;
        for (i = v38; i != 0; --i) {
          *(_WORD*)(v41 + v47) =
              (unsigned int)(*(__int16*)(v45 + v47) * v10) >> 15;
          v47 += v44 * 2;
        }
      }
      if (v40 <= 0xFFFFFFFFFFFFFFF8LL) {
        v49 = 0;
        v50 = v43;
        do {
          v51 = (__int16*)(v46 + v49);
          v52 = (_WORD*)(result + v49);
          v50 -= 8;
          v49 += 16LL * a7;
          v53 = *v51;
          v54 = &v51[v44];
          *v52 = (unsigned int)(v53 * v10) >> 15;
          v55 = &v52[v44];
          v56 = *v54;
          v57 = &v54[v44];
          *v55 = (unsigned int)(v56 * v10) >> 15;
          v58 = &v55[v44];
          v59 = *v57;
          v60 = &v57[v44];
          *v58 = (unsigned int)(v59 * v10) >> 15;
          v61 = &v58[v44];
          v62 = *v60;
          v63 = &v60[v44];
          *v61 = (unsigned int)(v62 * v10) >> 15;
          v64 = &v61[v44];
          v65 = *v63;
          v66 = &v63[v44];
          *v64 = (unsigned int)(v65 * v10) >> 15;
          v67 = &v64[v44];
          v68 = *v66;
          v69 = &v66[v44];
          *v67 = (unsigned int)(v68 * v10) >> 15;
          v70 = &v67[v44];
          *v70 = (unsigned int)(*v69 * v10) >> 15;
          v70[a7] = (unsigned int)(v69[a7] * v10) >> 15;
        } while (v50 != 0);
      }
      ++v37;
      v41 += 2;
      v45 += 2;
      v46 += 2;
      result += 2;
    } while (v37 != v39);
  }
  return result;
}

__int16* MovieHr_6d020(__int16* result, __int16* a2, __int16 a3, __int16 a4,
                       int a5, unsigned int a6, int a7, __int16* a8, int a9)
{
  int v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  __int16 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  __int64 v19;
  __int16* v20;
  __int16* v21;
  __int64 v22;
  int v23;
  unsigned int v24;
  int v25;
  __int16* v26;
  unsigned int v27;
  _WORD* v28;
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  _WORD* v35;
  __int64 v36;
  __int16* v37;
  __int16* v38;
  int v39;
  unsigned int v40;
  __int16 v41;
  int v42;
  __int16* v43;
  unsigned int v44;
  _WORD* v45;
  int v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int16 v50;
  __int64 v51;
  __int64 v52;
  _WORD* v53;
  __int16* v54;
  __int64 v55;
  int v56;
  int v57;
  unsigned int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  _WORD* v63;
  __int16* v64;
  int v65;
  int v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int16* v70;
  unsigned int v71;
  __int16* v72;
  unsigned int v73;
  __int16* v74;
  int v75;
  int v76;
  __int16* v77;
  unsigned int v78;
  __int16* v79;
  unsigned int v80;
  __int16* v81;
  __int64 v82;
  __int64 v83;
  __int16* v84;
  unsigned int v85;
  __int16* v86;
  unsigned int v87;
  __int16 v88;
  int v89;
  int v90;
  unsigned int v91;
  __int16 v92;
  unsigned int v93;
  __int16 v94;

  v9 = 48000 / a9;
  v10 = a4 ^ 0x7FFF;
  v11 = a5 / (48000 / a9);
  if ((int)v11 < 1) {
    v11 = 0;
    goto LABEL_19;
  }
  v12 = v9;
  v13 = a3 ^ 0x7FFF;
  if (a7 != 1 || v9 != 1) {
    if (v11 == 1) {
      v16 = 0;
    }
    else {
      v17 = a7;
      v18 = a2 + 1;
      v19 = 0;
      v20 = result;
      v21 = a8;
      v22 = 4LL * a7;
      do {
        v19 -= 2;
        v23 = *v21 * *v21;
        v24 = ((__int16)(((__int16)(v23 >> 15) * v10 +
                          ((int)((2 * v23) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                              v13) >>
                         15) *
               ((unsigned int)(*v20 - v20[1]) >> 1)) >>
              15;
        *(v18 - 1) -= v24;
        *v18 += v24;
        v25 = v21[v12];
        v21 += 2 * v12;
        v26 = &v20[v17];
        v20 = (__int16*)((char*)v20 + v22);
        v27 = (__int16)(((__int16)((v25 * v25) >> 15) * v10 +
                         ((int)((2 * v25 * v25) & 0xFFFF0000 ^ 0x7FFF0000) >>
                          16) *
                             v13) >>
                        15) *
              ((unsigned int)(*v26 - v26[1]) >> 1);
        v28 = &v18[v17];
        v18 = (_WORD*)((char*)v18 + v22);
        v27 >>= 15;
        *(v28 - 1) -= v27;
        *v28 += v27;
      } while (-(__int64)(v11 & 0x7FFFFFFE) != v19);
      v16 = -v19;
      if ((v11 & 1) == 0) {
        goto LABEL_18;
      }
    }
    v29 = a8[v16 * v12];
    v30 = (__int16)((v29 * v29) >> 15) * v10 +
          ((int)((2 * v29 * v29) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) * v13;
    v31 = v16 * a7;
    v32 = v31;
    v33 = v31 + 1;
    v34 = ((__int16)(v30 >> 15) *
           ((unsigned int)(result[v32] - result[v33]) >> 1)) >>
          15;
    a2[v32] -= v34;
  LABEL_17:
    a2[v33] += v34;
    goto LABEL_18;
  }
  v14 = *a2;
  if (v11 == 1) {
    v15 = 0;
  LABEL_16:
    v46 = a8[v15 * v12];
    v47 = (__int16)((v46 * v46) >> 15) * v10 +
          ((int)((2 * v46 * v46) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) * v13;
    v48 = v15;
    v49 = v15;
    v33 = v48 + 1;
    v34 = ((__int16)(v47 >> 15) *
           ((unsigned int)(result[v49] - result[v33]) >> 1)) >>
          15;
    a2[v49] = v14 - v34;
    goto LABEL_17;
  }
  v35 = a2 + 1;
  v36 = 0;
  v37 = result;
  v38 = a8;
  do {
    v36 -= 2;
    v39 = *v38 * *v38;
    v40 =
        ((__int16)(((__int16)(v39 >> 15) * v10 +
                    ((int)((2 * v39) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) * v13) >>
                   15) *
         ((unsigned int)(*v37 - v37[1]) >> 1)) >>
        15;
    *(v35 - 1) = v14 - v40;
    v41 = *v35 + v40;
    *v35 = v41;
    v42 = v38[v12];
    v38 += 2 * v12;
    v43 = v37 + 1;
    v37 += 2;
    v44 = (__int16)(((__int16)((v42 * v42) >> 15) * v10 +
                     ((int)((2 * v42 * v42) & 0xFFFF0000 ^ 0x7FFF0000) >> 16) *
                         v13) >>
                    15) *
          ((unsigned int)(*v43 - v43[1]) >> 1);
    v45 = v35 + 1;
    v35 += 2;
    v44 >>= 15;
    *(v45 - 1) = v41 - v44;
    v14 = *v45 + v44;
    *v45 = v14;
  } while (-(__int64)(v11 & 0x7FFFFFFE) != v36);
  v15 = -v36;
  if ((v11 & 1) != 0) {
    goto LABEL_16;
  }
LABEL_18:
  if (v11 >= a6) {
    return result;
  }
LABEL_19:
  if (a7 == 1) {
    v50 = a2[v11];
    v51 = ((_BYTE)a6 - (_BYTE)v11) & 3;
    if ((((_BYTE)a6 - (_BYTE)v11) & 3) != 0) {
      v52 = 2LL * v11 + 2;
      v53 = (__int16*)((char*)a2 + v52);
      v54 = (__int16*)((char*)result + v52);
      v55 = v11;
      do {
        v56 = *(v54 - 1);
        v57 = *v54;
        ++v55;
        --v51;
        ++v54;
        v58 = (((unsigned int)(v56 - v57) >> 1) * v10) >> 15;
        *(v53 - 1) = v50 - v58;
        v50 = *v53 + v58;
        *v53++ = v50;
      } while (v51 != 0);
      if (v11 - (unsigned __int64)a6 > 0xFFFFFFFFFFFFFFFCLL) {
        return result;
      }
    }
    else {
      v55 = v11;
      if (v11 - (unsigned __int64)a6 > 0xFFFFFFFFFFFFFFFCLL) {
        return result;
      }
    }
    v82 = a6 - v55;
    v83 = v55;
    do {
      v82 -= 4;
      v84 = &result[v83 + 1];
      v85 = result[v83] - *v84;
      v86 = &a2[v83];
      v83 += 4;
      v87 = ((v85 >> 1) * v10) >> 15;
      *v86 = v50 - v87;
      v88 = v86[1] + v87;
      v86[1] = v88;
      ++v86;
      v89 = *v84;
      v90 = v84[1];
      ++v84;
      v91 = (((unsigned int)(v89 - v90) >> 1) * v10) >> 15;
      *v86 = v88 - v91;
      v92 = v86[1] + v91;
      v86[1] = v92;
      ++v86;
      v93 = (((unsigned int)(*v84 - v84[1]) >> 1) * v10) >> 15;
      *v86 = v92 - v93;
      v94 = v86[1] + v93;
      v86[1] = v94;
      LODWORD(v84) = (((unsigned int)(v84[1] - v84[2]) >> 1) * v10) >> 15;
      v86[1] = v94 - (_WORD)v84;
      v50 = v86[2] + (_WORD)v84;
      v86[2] = v50;
    } while (v82 != 0);
    return result;
  }
  v59 = v11;
  v60 = ((_BYTE)a6 - (_BYTE)v11) & 3;
  v61 = a7;
  if ((((_BYTE)a6 - (_BYTE)v11) & 3) != 0) {
    v62 = 2 * a7 * (unsigned __int64)v11 + 2;
    v63 = (__int16*)((char*)a2 + v62);
    v64 = (__int16*)((char*)result + v62);
    v59 = v11 + v60;
    do {
      v65 = *(v64 - 1);
      v66 = *v64;
      --v60;
      v64 = (__int16*)((char*)v64 + v61 * 2);
      v67 = (((unsigned int)(v65 - v66) >> 1) * v10) >> 15;
      *(v63 - 1) -= v67;
      *v63 += v67;
      v63 = (_WORD*)((char*)v63 + v61 * 2);
    } while (v60 != 0);
  }
  if (v11 - (unsigned __int64)a6 <= 0xFFFFFFFFFFFFFFFCLL) {
    v68 = a6 - v59;
    v69 = v59 * a7;
    do {
      v68 -= 4;
      v70 = &result[v69 + v61];
      v71 = result[v69] - result[v69 + 1];
      v72 = &a2[v69];
      v69 += 4LL * a7;
      v73 = ((v71 >> 1) * v10) >> 15;
      *v72 -= v73;
      v72[1] += v73;
      v74 = &v72[v61];
      v75 = *v70;
      v76 = v70[1];
      v77 = &v70[v61];
      v78 = (((unsigned int)(v75 - v76) >> 1) * v10) >> 15;
      *v74 -= v78;
      v74[1] += v78;
      v79 = &v74[v61];
      v80 = (((unsigned int)(*v77 - v77[1]) >> 1) * v10) >> 15;
      *v79 -= v80;
      v79[1] += v80;
      v81 = &v79[v61];
      LODWORD(v77) = (((unsigned int)(v77[a7] - v77[a7 + 1]) >> 1) * v10) >> 15;
      *v81 = v79[a7] - (_WORD)v77;
      v81[1] = v79[v61 + 1] + (_WORD)v77;
    } while (v68 != 0);
  }
  return result;
}

__int64 MovieHr_6d9a0(int* a1, __int64 a2, signed int a3, _BYTE* a4, int a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 result;
  unsigned int v12;
  int v15;
  char v18;
  bool v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  bool v24;
  int v25;
  int v26;
  char v31;
  unsigned int v32;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  _QWORD v40[5];

  v10 = a1[36];
  if (a3 < v10 / 400) {
    return 0xFFFFFFFFLL;
  }
  v40[0] = v9;
  v40[1] = v8;
  v40[2] = v7;
  v40[3] = v5;
  v40[4] = v6;
  v12 = a1[39];
  v15 = a3;
  if (v12 != 5000) {
    v18 = v12 + 119;
    if (v12 - 5001 > 8) {
      return 0xFFFFFFFFLL;
    }
    v19 = v12 >> 1 > 0x9C6;
    v20 = (1374389535LL * (int)((v12 - 5003) * v10)) >> 36;
    v21 = v20 + ((unsigned int)v20 >> 31);
    v15 = v19 ? v21 : (v10 / 400) << v18;
    if (v15 > a3) {
      return 0xFFFFFFFFLL;
    }
  }
  if (400 * v15 == v10 || 200 * v15 == v10 || 100 * v15 == v10) {
    if (v15 < 1) {
      return 0xFFFFFFFFLL;
    }
  }
  else {
    v22 = 4 * v10;
    result = 0xFFFFFFFFLL;
    v23 = 50 * v15;
    v24 = 50 * v15 == v10 || 25 * v15 == v10;
    v25 = 3 * v10;
    v26 = 5 * v10;
    v31 = !v24 && v23 != v25 && v23 != v22 && v23 != v26 && v23 != 2 * v25;
    if (v15 < 1 || (v31 & 1) != 0) {
      return result;
    }
  }
  v32 = a1[28];
  v36 = 2LL * (int)(v32 * v15);
  v37 = (char*)v40 - ((v36 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v38 = MovieRoutine_82ce0(v37, 0, v36);
  if ((int)(v32 * v15) >= 1) {
    v39 = 0;
    do {
      v38 = MovieRoutine_846c0(
          v38,
          fminf(fmaxf(*(float*)(a2 + 4 * v39) * 32768.0, -32768.0), 32767.0));
      v32 = a1[28];
      *(_WORD*)&v37[2 * v39++] = v38;
    } while (v39 < (int)(v32 * v15));
  }
  return MovieRoutine_694e0(a1, (__int64)v37, v15, a4, a5, 16, a2, a3, 0,
                            0xFFFFFFFE, v32, (__int64)MovieRoutine_68be0, 1);
}

__int64 MovieHr_6dbf0(int* a1, __int64 a2, int a3, _BYTE* a4, int a5)
{
  int v5;
  signed int v6;
  unsigned int v7;
  bool v8;
  int v9;
  bool v10;
  bool v11;
  bool v12;
  bool v13;
  bool v14;
  bool v15;
  int v18;
  bool v19;
  __int64 v20;
  int v21;

  v5 = a1[36];
  v6 = a3;
  if (a3 < v5 / 400) {
    goto LABEL_2;
  }
  v7 = a1[39];
  if (v7 != 5000) {
    if (v7 - 5001 > 8) {
      goto LABEL_2;
    }
    v18 = (v5 / 400) << (v7 + 119);
    v19 = v7 >> 1 > 0x9C6;
    v20 = (1374389535LL * (int)((v7 - 5003) * v5)) >> 36;
    v21 = v20 + ((unsigned int)v20 >> 31);
    a3 = v19 ? v21 : v18;
    if (a3 > v6) {
      goto LABEL_2;
    }
  }
  v8 = 400 * a3 == v5 || 200 * a3 == v5;
  v9 = 50 * a3;
  v10 = v8 || 100 * a3 == v5;
  v11 = v10 || v9 == v5;
  v12 = v11 || 25 * a3 == v5;
  v13 = v12 || v9 == 3 * v5;
  v14 = v13 || v9 == 4 * v5;
  v15 = v14 || v9 == 5 * v5;
  if (!v15 && v9 != 6 * v5) {
  LABEL_2:
    a3 = -1;
  }
  return MovieRoutine_694e0(a1, a2, a3, a4, a5, 16, a2, v6, 0, 0xFFFFFFFE,
                            a1[28], (__int64)MovieRoutine_68dc0, 0);
}

__int64 MovieHr_6eea0(char* a1, unsigned int a2, int a3, _BYTE* a4, int a5,
                      int a6, int a7)
{
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  __int16* v11;
  int v12;
  char v13;
  int v14;
  int v15;
  _BYTE* v16;
  int v17;
  int v18;
  unsigned int v19;
  int v20;
  char* v21;
  _BYTE* v22;
  int v23;
  int v24;
  _BYTE* v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  char v30;
  char v31;
  char v32;
  bool v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int16* v38;
  __int64 v39;
  int v40;
  bool v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  char* v67;
  int v68;
  int v69;
  int v70;
  int v71;
  _BYTE* v72;
  _BYTE* v73;
  int v74;
  int v75;
  __int64 v76;
  char v77;
  __int64 v78;
  char* v79;
  int v80;
  _BYTE* v81;
  __int16* v82;
  unsigned int v83;
  _BYTE* v84;
  int v85;
  char* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  char* v93;
  _BYTE* v94;
  _BYTE* v95;
  _BYTE* v96;
  _BYTE* v97;
  _BYTE* v98;
  _BYTE* v99;
  _BYTE* v100;
  __int64 v101;
  char* v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  char* v108;
  int v109;
  char* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;

  v7 = -1;
  if ((a2 & 0x80000000) != 0) {
    return v7;
  }
  v8 = a3 - a2;
  if (a3 <= (int)a2) {
    return v7;
  }
  if (a3 > *((_DWORD*)a1 + 1)) {
    return (unsigned int)-1;
  }
  v10 = a2;
  v11 = (__int16*)&a1[2 * a2 + 392];
  if (a6 == 0) {
    v12 = 0;
    if ((_DWORD)v8 != 2) {
      goto LABEL_10;
    }
  LABEL_14:
    v14 = (unsigned __int16)*v11;
    v15 = *(unsigned __int16*)&a1[2 * a2 + 394];
    if (v15 != v14) {
      v20 = v12 + (__int16)v15 + (__int16)v14;
      if ((__int16)v14 > 251) {
        ++v20;
      }
      if (v20 + 2 > a5) {
        return (unsigned int)-2;
      }
      v21 = a1;
      v12 = v20 + 2;
      v22 = a4;
      v23 = a7;
      v24 = a6;
      *a4 = *a1 & 0xFC | 2;
      v25 = a4 + 1;
      v26 = MovieRoutine_66130((unsigned int)*v11, a4 + 1);
      a6 = v24;
      a7 = v23;
      a4 = v22;
      v27 = v26;
      a1 = v21;
      v16 = &v25[v27];
      if (v23 == 0) {
        goto LABEL_91;
      }
      goto LABEL_20;
    }
    v12 += 2 * (__int16)v14 + 1;
    if (v12 > a5) {
      return (unsigned int)-2;
    }
    v13 = *a1 & 0xFC | 1;
    goto LABEL_17;
  }
  if (v11[(int)v8 - 1] <= 251) {
    v12 = 1;
  }
  else {
    v12 = 2;
  }
  if ((_DWORD)v8 == 2) {
    goto LABEL_14;
  }
LABEL_10:
  if ((_DWORD)v8 == 1) {
    v12 += *v11 + 1;
    if (v12 > a5) {
      return (unsigned int)-2;
    }
    v13 = *a1 & 0xFC;
  LABEL_17:
    *a4 = v13;
    v16 = a4 + 1;
    goto LABEL_19;
  }
  v16 = a4;
  if ((int)v8 > 2) {
    goto LABEL_21;
  }
LABEL_19:
  if (a7 == 0) {
    goto LABEL_91;
  }
LABEL_20:
  if (v12 < a5) {
  LABEL_21:
    if (a6 != 0) {
      if (v11[(int)v8 - 1] <= 251) {
        v17 = 3;
      }
      else {
        v17 = 4;
      }
      v18 = *v11;
      v19 = v8 - 2;
      if ((int)v8 < 2) {
      LABEL_36:
        v12 = v17 + v8 * v18;
        if (v12 <= a5) {
          v30 = *a1;
          v31 = 1;
          a4[1] = v8;
          *a4 = v30 | 3;
          v32 = v8;
          v16 = a4 + 2;
          v34 = a5 - v12;
          v33 = a5 == v12;
          if (a7 == 0) {
          LABEL_84:
            if ((int)v8 < 2) {
              v77 = 1;
            }
            else {
              v77 = v31;
            }
            if ((v77 & 1) == 0) {
              v112 = v10;
              v78 = (unsigned int)(v8 - 1);
              v109 = a6;
              v79 = a1;
              v80 = a7;
              v81 = a4;
              v82 = v11;
              do {
                v83 = *v82++;
                v16 += (int)MovieRoutine_66130(v83, v16);
                --v78;
              } while (v78 != 0);
              a6 = v109;
              v10 = v112;
              a4 = v81;
              a7 = v80;
              a1 = v79;
            }
            goto LABEL_91;
          }
        LABEL_77:
          if (!v33) {
            a4[1] = v32 | 0x40;
            v71 = (v34 - 1) / 255;
            if (v34 >= 256) {
              v108 = a1;
              v111 = v10;
              v72 = v16;
              v73 = a4;
              v74 = a7;
              v75 = a6;
              if (v71 <= 1) {
                v76 = 1;
              }
              else {
                v76 = (unsigned int)v71;
              }
              MovieRoutine_82ce0(v72, 255, v76);
              a6 = v75;
              a1 = v108;
              v10 = v111;
              a4 = v73;
              a7 = v74;
              v16 = &v73[v76 + 2];
            }
            v12 = a5;
            *v16++ = v71 + v34 - 1;
          }
          goto LABEL_84;
        }
        return (unsigned int)-2;
      }
    }
    else {
      v17 = 2;
      v18 = *v11;
      v19 = v8 - 2;
      if ((int)v8 < 2) {
        goto LABEL_36;
      }
    }
    v28 = v8 - 1;
    v29 = 2 * v10 + 394;
    while (*(unsigned __int16*)&a1[v29] == (unsigned __int16)v18) {
      --v28;
      v29 += 2;
      if (v28 == 0) {
        goto LABEL_36;
      }
    }
    v35 = v8 - 1;
    v36 = ((int)v8 - 1) & 7LL;
    if (v19 >= 7) {
      v38 = v11 + 7;
      v39 = 0;
      do {
        v40 = *(v38 - 7);
        v39 -= 8;
        v41 = v40 <= 251;
        v42 = v17 + v40;
        v43 = *(v38 - 6);
        if (v41) {
          v44 = 1;
        }
        else {
          v44 = 2;
        }
        v41 = v43 <= 251;
        v45 = v42 + v43;
        v46 = *(v38 - 5);
        if (v41) {
          v47 = 1;
        }
        else {
          v47 = 2;
        }
        v41 = v46 <= 251;
        v48 = v45 + v44 + v47 + v46;
        v49 = *(v38 - 4);
        if (v41) {
          v50 = 1;
        }
        else {
          v50 = 2;
        }
        v41 = v49 <= 251;
        v51 = v50 + v49;
        if (v41) {
          v52 = 1;
        }
        else {
          v52 = 2;
        }
        v53 = v48 + v51 + v52;
        v54 = *(v38 - 3);
        if (v54 <= 251) {
          v55 = 1;
        }
        else {
          v55 = 2;
        }
        v56 = v54 + v55;
        v57 = *(v38 - 2);
        v58 = v56 + v57;
        if (v57 <= 251) {
          v59 = 1;
        }
        else {
          v59 = 2;
        }
        v60 = v53 + v58 + v59;
        v61 = *(v38 - 1);
        if (v61 <= 251) {
          v62 = 1;
        }
        else {
          v62 = 2;
        }
        v63 = v61 + v62;
        v64 = *v38;
        v38 += 8;
        v65 = v63 + v64;
        if (v64 <= 251) {
          v66 = 1;
        }
        else {
          v66 = 2;
        }
        v17 = v60 + v65 + v66;
      } while (-(__int64)(v35 & 0xFFFFFFF8) != v39);
      v37 = -v39;
    }
    else {
      v37 = 0;
    }
    if (v36 != 0) {
      v67 = &a1[2 * v37 + 392 + 2 * v10];
      do {
        v68 = *(__int16*)v67;
        v67 += 2;
        v69 = v17 + v68;
        if (v68 <= 251) {
          v70 = 1;
        }
        else {
          v70 = 2;
        }
        --v36;
        v17 = v69 + v70;
      } while (v36 != 0);
    }
    v12 = v17 + v11[v35];
    if (v12 <= a5) {
      v31 = 0;
      *a4 = *a1 | 3;
      v32 = v8 | 0x80;
      a4[1] = v8 | 0x80;
      v16 = a4 + 2;
      v34 = a5 - v12;
      v33 = a5 == v12;
      if (a7 == 0) {
        goto LABEL_84;
      }
      goto LABEL_77;
    }
    return (unsigned int)-2;
  }
LABEL_91:
  v84 = a4;
  v85 = a7;
  if (a6 != 0) {
    v86 = a1;
    v16 += (int)MovieRoutine_66130((unsigned int)v11[(int)v8 - 1], v16);
    a1 = v86;
  }
  if ((int)v8 >= 1) {
    v87 = v8 & 7;
    if ((unsigned int)v8 >= 8) {
      v89 = v10;
      v90 = 0;
      v110 = a1;
      v113 = v10;
      v91 = -(v8 & 0x7FFFFFF8);
      v92 = &a1[2 * v89 + 406];
      v93 = &a1[8 * v89 + 32];
      do {
        MovieRoutine_82b40(v16, *((_QWORD*)v93 - 3), *((__int16*)v92 - 7));
        v94 = &v16[*((__int16*)v92 - 7)];
        MovieRoutine_82b40(v94, *((_QWORD*)v93 - 2), *((__int16*)v92 - 6));
        v95 = &v94[*((__int16*)v92 - 6)];
        MovieRoutine_82b40(v95, *((_QWORD*)v93 - 1), *((__int16*)v92 - 5));
        v96 = &v95[*((__int16*)v92 - 5)];
        MovieRoutine_82b40(v96, *(_QWORD*)v93, *((__int16*)v92 - 4));
        v97 = &v96[*((__int16*)v92 - 4)];
        MovieRoutine_82b40(v97, *((_QWORD*)v93 + 1), *((__int16*)v92 - 3));
        v98 = &v97[*((__int16*)v92 - 3)];
        MovieRoutine_82b40(v98, *((_QWORD*)v93 + 2), *((__int16*)v92 - 2));
        v99 = &v98[*((__int16*)v92 - 2)];
        MovieRoutine_82b40(v99, *((_QWORD*)v93 + 3), *((__int16*)v92 - 1));
        v100 = &v99[*((__int16*)v92 - 1)];
        MovieRoutine_82b40(v100, *((_QWORD*)v93 + 4), *(__int16*)v92);
        v101 = *(__int16*)v92;
        v90 -= 8;
        v92 += 16;
        v93 += 64;
        v16 = &v100[v101];
      } while (v91 != v90);
      a1 = v110;
      v10 = v113;
      v88 = -v90;
    }
    else {
      v88 = 0;
    }
    if (v87 != 0) {
      v102 = &a1[2 * v88 + 392 + 2 * v10];
      v103 = (__int64*)&a1[8 * v88 + 8 + 8 * v10];
      do {
        v104 = *v103++;
        MovieRoutine_82b40(v16, v104, *(__int16*)v102);
        v105 = *(__int16*)v102;
        v102 += 2;
        --v87;
        v16 += v105;
      } while (v87 != 0);
    }
  }
  if (v85 != 0) {
    v106 = (unsigned __int64)&v84[a5];
    if ((unsigned __int64)v16 < v106) {
      MovieRoutine_82ce0(v16, 0, v106 - (_QWORD)v16);
    }
  }
  return (unsigned int)v12;
}

__int64 MovieHr_6fab0(_DWORD* a1, int a2)
{
  *a1 = 0;
  a1[2] = a2;
  return MovieRoutine_82ce0(a1 + 3, 0, 13992);
}

unsigned __int64 MovieHr_73380(void (*a1)(__int64, char*, _QWORD, _QWORD,
                                          _QWORD, _QWORD, _QWORD),
                               __int64 a2, int* a3, _DWORD* a4, int a5,
                               unsigned int a6, unsigned int a7, int a8,
                               unsigned int a9, int a10)
{
  unsigned int v12;
  int v13;
  unsigned __int64 result;
  __int64 v19;
  char* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char* v30;
  __int64 v31;
  int* v32;
  unsigned __int64 v33;
  int v34;
  int v35;
  unsigned __int64 v36;
  int v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  int v41;
  unsigned __int64 v42;
  unsigned int v43;
  char* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  int* v49;
  int* v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  char* v60;
  char* v61;
  int v62;
  __int64 v63;
  int* v64;
  int* v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  int v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  int v73;
  int v74;
  int v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  char* v78;
  int v79;
  int v80;
  unsigned __int64 v81;
  int v82;
  unsigned __int64 v83;
  __int64 v84;
  int v85;

  if (a5 == 0) {
    return 0;
  }
  v12 = a6;
  v13 = a5;
  v85 = a10;
  if (a10 == 48000) {
    v13 = 2 * a5;
    v12 = 2 * a6;
  }
  else if (a10 == 16000) {
    v13 = 2 * a5 / 3;
    v12 = (int)(2 * a6) / 3;
  }
  v19 = 4LL * v13;
  v20 = (char*)&v84 - ((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v84 = v19;
  MovieRoutine_82ce0(v20, 0, v19);
  a1(a2, v20, (unsigned int)v13, v12, a7, (unsigned int)a8, a9);
  if (a8 == -2) {
    v21 = 4096 / (int)a9;
    if (v13 < 1) {
      goto LABEL_22;
    }
  }
  else {
    if (a8 <= -1) {
      v21 = 4096;
    }
    else {
      v21 = 2048;
    }
    if (v13 < 1) {
      goto LABEL_22;
    }
  }
  v22 = v13 & 7;
  if ((unsigned int)v13 < 8) {
    v23 = 0;
    if ((v13 & 7) == 0) {
      goto LABEL_22;
    }
    goto LABEL_20;
  }
  v24 = v20 + 16;
  v25 = 0;
  do {
    v25 -= 8;
    v26 = *(v24 - 3) * v21;
    *(v24 - 4) *= v21;
    *(v24 - 3) = v26;
    v27 = *(v24 - 1) * v21;
    *(v24 - 2) *= v21;
    *(v24 - 1) = v27;
    v28 = v24[1] * v21;
    *v24 *= v21;
    v24[1] = v28;
    v29 = v24[3] * v21;
    v24[2] *= v21;
    v24[3] = v29;
    v24 += 8;
  } while (-(__int64)(v13 & 0x7FFFFFF8) != v25);
  v23 = -v25;
  if ((v13 & 7) != 0) {
  LABEL_20:
    v30 = &v20[4 * v23];
    do {
      --v22;
      *(_DWORD*)v30 *= v21;
      v30 += 4;
    } while (v22 != 0);
  }
LABEL_22:
  if (v85 == 48000) {
    if (v13 >= 2) {
      v31 = (unsigned int)v13 >> 1;
      v32 = (int*)(v20 + 4);
      v33 = 0;
      do {
        v34 = *(v32 - 1);
        v35 = a4[1];
        --v31;
        v36 = (unsigned __int64)(19904LL * (v34 - *a4)) >> 15;
        v37 = *a4 + v36;
        v38 = *v32;
        v32 += 2;
        v39 = (unsigned __int64)(4936LL * (v38 - v35)) >> 15;
        *a4 = v34 + v36;
        a4[1] = v38 + v39;
        v40 = a4[2];
        v41 = v37 + v35 + v39;
        v42 = (unsigned __int64)(4936LL * -(v38 + v40)) >> 15;
        v33 += (v37 + v40 + (int)v42) * (__int64)(v37 + v40 + (int)v42);
        a4[2] = v42 - v38;
        *a3++ = v41 >> 1;
      } while (v31 != 0);
      return HIDWORD(v33);
    }
    return 0;
  }
  if (v85 != 16000) {
    if (v85 == 24000) {
      MovieRoutine_82920(a3, v20, v84);
    }
    return 0;
  }
  v43 = 3 * v13;
  v44 = v20;
  v45 = 12LL * v13;
  v46 = (char*)&v84 - ((v45 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  MovieRoutine_82ce0(v46, 0, v45);
  if (v13 < 1) {
    return 0;
  }
  v47 = v13 & 7;
  if ((unsigned int)v13 >= 8) {
    v49 = (int*)(v46 + 48);
    v50 = (int*)(v44 + 16);
    v51 = 0;
    do {
      v52 = *(v50 - 4);
      v53 = *(v50 - 3);
      v51 -= 8;
      *(v49 - 12) = v52;
      *(v49 - 11) = v52;
      *(v49 - 10) = v52;
      *(v49 - 9) = v53;
      *(v49 - 8) = v53;
      *(v49 - 7) = v53;
      v54 = *(v50 - 2);
      v55 = *(v50 - 1);
      *(v49 - 6) = v54;
      *(v49 - 5) = v54;
      *(v49 - 4) = v54;
      *(v49 - 3) = v55;
      *(v49 - 2) = v55;
      *(v49 - 1) = v55;
      v56 = *v50;
      v57 = v50[1];
      *v49 = *v50;
      v49[1] = v56;
      v49[2] = v56;
      v49[3] = v57;
      v49[4] = v57;
      v49[5] = v57;
      v58 = v50[2];
      v59 = v50[3];
      v50 += 8;
      v49[6] = v58;
      v49[7] = v58;
      v49[8] = v58;
      v49[9] = v59;
      v49[10] = v59;
      v49[11] = v59;
      v49 += 24;
    } while (-(__int64)(v13 & 0x7FFFFFF8) != v51);
    v48 = -v51;
  }
  else {
    v48 = 0;
  }
  if ((v13 & 7) != 0) {
    v60 = &v44[4 * v48];
    v61 = &v46[12 * v48 + 4];
    do {
      v62 = *(_DWORD*)v60;
      v60 += 4;
      --v47;
      *((_DWORD*)v61 - 1) = v62;
      *(_DWORD*)v61 = v62;
      *((_DWORD*)v61 + 1) = v62;
      v61 += 12;
    } while (v47 != 0);
  }
  if (v43 >> 1 == 1) {
    v63 = 0;
  }
  else {
    v64 = (int*)(v46 + 8);
    v65 = a3 + 1;
    v66 = 0;
    do {
      v67 = *(v64 - 2);
      v68 = *(v64 - 1);
      v69 = a4[1];
      v66 -= 2;
      v70 = v69 + *a4;
      v71 = (unsigned __int64)(19904LL * (v67 - *a4)) >> 15;
      v72 = (unsigned __int64)(4936LL * (v68 - v69)) >> 15;
      *a4 = v67 + v71;
      a4[1] = v68 + v72;
      a4[2] = ((unsigned __int64)(4936LL * -(v68 + a4[2])) >> 15) - v68;
      *(v65 - 1) = (v70 + (int)v71 + (int)v72) >> 1;
      v73 = *v64;
      v74 = v64[1];
      v64 += 4;
      LODWORD(v72) = a4[1];
      v75 = v72 + *a4;
      v76 = (unsigned __int64)(19904LL * (v73 - *a4)) >> 15;
      v77 = (unsigned __int64)(4936LL * (v74 - (int)v72)) >> 15;
      *a4 = v73 + v76;
      a4[1] = v74 + v77;
      a4[2] = ((unsigned __int64)(4936LL * -(v74 + a4[2])) >> 15) - v74;
      *v65 = (v75 + (int)v76 + (int)v77) >> 1;
      v65 += 2;
    } while (-(__int64)((v43 >> 1) & 0x7FFFFFFE) != v66);
    v63 = -v66;
  }
  result = 0;
  if ((v43 & 2) != 0) {
    v78 = &v46[8 * v63];
    v79 = a4[1];
    v80 = *(_DWORD*)v78;
    LODWORD(v78) = *((_DWORD*)v78 + 1);
    v81 = (unsigned __int64)(19904LL * (v80 - *a4)) >> 15;
    v82 = v79 + *a4 + v81;
    v83 = (unsigned __int64)(4936LL * ((int)v78 - v79)) >> 15;
    *a4 = v80 + v81;
    a4[1] = (_DWORD)v78 + v83;
    a4[2] =
        ((unsigned __int64)(4936LL * (-a4[2] - (int)v78)) >> 15) - (_DWORD)v78;
    a3[v63] = (v82 + (int)v83) >> 1;
  }
  return result;
}

__int64 MovieHr_75140(int* a1, int a2, int a3)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  unsigned __int8* v7;
  int v8;

  v4 = *a1;
  if (a3 <= -1) {
    LODWORD(result) = -1;
  }
  else {
    LODWORD(result) = a3;
  }
  v6 = (int)result + 1LL;
  v7 = (unsigned __int8*)a1 + (int)result + 13;
  while (v6 < v4) {
    v8 = *v7++;
    result = (unsigned int)(result + 1);
    ++v6;
    if (2 * a2 == v8) {
      return result;
    }
  }
  return 0xFFFFFFFFLL;
}

__int64 MovieHr_75500(unsigned int a1, unsigned int a2, int a3, unsigned int a4,
                      __int64 a5, _DWORD* a6)
{
  unsigned int v8;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;

  if (a2 - 256 < 0xFFFFFF01 || (a4 & 0x80000000) != 0 || a3 < 1 ||
      (v8 = a3 - a4, a3 < (int)a4) || a3 > (int)(255 - a4)) {
    if (a6 != nullptr) {
      *a6 = -1;
      return 0;
    }
  }
  else {
    v14 = MovieRoutine_84630(2);
    v15 = MovieRoutine_84630(1);
    v16 = MovieRoutine_84650((int)(((v15 + 7) & 0xFFFFFFF8) * v8 +
                                   ((v14 + 7) & 0xFFFFFFF8) * a4 + 272));
    if (v16 != 0) {
      v17 = v16;
      v18 = MovieRoutine_838f0(v16, a1, a2, (unsigned int)a3, a4, a5);
      if (a6 != nullptr) {
        *a6 = v18;
      }
      if (v18 == 0) {
        return v17;
      }
      MovieRoutine_84660(v17);
    }
    else if (a6 != nullptr) {
      *a6 = -7;
      return 0;
    }
  }
  return 0;
}

__int64 MovieHr_75620(int* a1, __int64 a2, int a3, __int64 a4,
                      void (*a5)(__int64, __int64, _QWORD, char*, __int64,
                                 _QWORD, __int64),
                      int a6, unsigned int a7, int a8, __int64 a9)
{
  __int64 v9;
  __int64 v10;
  unsigned int v14;
  __int64 result;
  __int64 v19;
  char* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  int v27;
  int* v28;
  int v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  int* v33;
  __int64 v34;
  unsigned int i;
  unsigned int j;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  unsigned int v52;
  _DWORD v53[25];
  _BYTE v54[4];
  __int64 v55;
  __int64 v56;

  if (a6 < 1) {
    return 0xFFFFFFFFLL;
  }
  v55 = v9;
  v56 = v10;
  v50 = a2;
  v14 = a6;
  v51 = 0;
  if ((unsigned int)MovieRoutine_838c0(a1, 4029, &v51) != 0) {
    return 4294967293LL;
  }
  if ((int)v14 >= 3 * (v51 / 25)) {
    v14 = 3 * (v51 / 25);
  }
  v19 = 2LL * (int)(2 * v14);
  v20 = (char*)&v43 - ((v19 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  MovieRoutine_82ce0(v20, 0, v19);
  v47 = MovieRoutine_84630(2);
  v46 = MovieRoutine_84630(1);
  if (a3 < 0) {
    return 0xFFFFFFFFLL;
  }
  v21 = v50;
  if (a3 == 0) {
  LABEL_21:
    v27 = a1[1];
    if (v27 >= 1) {
      v28 = a1 + 68;
      HIDWORD(v43) = a8;
      v44 = a7;
      v29 = a3;
      v30 = 0;
      v45 = v29;
      do {
        v31 = v46;
        if ((int)v30 < a1[2]) {
          v31 = v47;
        }
        if (v45 != 0 && v29 < 1) {
          return 4294967293LL;
        }
        v49 = v31;
        v53[0] = 0;
        v50 = v21;
        v14 = MovieRoutine_66b80(v28, v21, (unsigned int)v29, v20, v14, v44,
                                 v30 != v27 - 1, v53, a8);
        if ((int)v14 < 1) {
          return v14;
        }
        v32 = 0xFFFFFFFFLL;
        v33 = a1;
        v34 = v30;
        v48 = v53[0];
        if ((int)v30 >= a1[2]) {
          while (1) {
            v37 = MovieRoutine_75200(v33, v34, v32);
            if (v37 == -1) {
              break;
            }
            a5(a4, (unsigned int)*a1, v37, v20, 1, v14, a9);
            v33 = a1;
            v34 = v30;
            v32 = v37;
          }
        }
        else {
          for (i = MovieRoutine_75140(a1, v30, -1); i != -1;
               i = MovieRoutine_75140(a1, v30, i)) {
            a5(a4, (unsigned int)*a1, i, v20, 2, v14, a9);
          }
          for (j = MovieRoutine_751a0(a1, v30, 0xFFFFFFFFLL); j != -1;
               j = MovieRoutine_751a0(a1, v30, j)) {
            a5(a4, (unsigned int)*a1, j, v20 + 2, 2, v14, a9);
          }
        }
        a8 = HIDWORD(v43);
        ++v30;
        v28 = (int*)((char*)v28 + (int)((v49 + 7) & 0xFFFFFFF8));
        v21 = v50 + v48;
        v29 -= v48;
        v27 = a1[1];
      } while ((int)v30 < v27);
    }
    v38 = (unsigned int)*a1;
    if ((int)v38 >= 1) {
      v39 = 0;
      do {
        if (*((unsigned __int8*)a1 + v39 + 12) == 255) {
          a5(a4, v38, (unsigned int)v39, nullptr, 0, v14, a9);
          v38 = (unsigned int)*a1;
        }
        ++v39;
      } while (v39 < (int)v38);
    }
    return v14;
  }
  v22 = a1[1];
  if (a3 < 2 * v22 - 1) {
    return 4294967292LL;
  }
  if (v22 <= 0) {
    LODWORD(result) = 0;
  LABEL_19:
    if ((int)result > (int)v14) {
      return 4294967294LL;
    }
    goto LABEL_21;
  }
  v23 = v50;
  v24 = (unsigned int)a3;
  v25 = v51;
  HIDWORD(v43) = a8;
  v26 = v22 - 1;
  v54[0] = 0;
  memset(v53, 0, 96);
  v52 = 0;
  v45 = v24;
  result = MovieRoutine_66220(v50, v24, v22 != 1, v54, 0, v53, 0, &v52);
  if ((result & 0x80000000) == 0) {
    v44 = a7;
    result = MovieRoutine_84690(v23, v52, v25);
    v21 = v23;
    if (v22 != 1) {
      v40 = v45 - v52;
      v41 = v23 + (int)v52;
      while (v40 >= 1) {
        v42 = result;
        result = MovieRoutine_66220(v41, (unsigned int)v40, v26 != 1, v54, 0,
                                    v53, 0, &v52);
        if ((result & 0x80000000) != 0) {
          return result;
        }
        if (v42 != (unsigned int)MovieRoutine_84690(v41, v52, v25)) {
          break;
        }
        v21 = v50;
        --v26;
        result = v42;
        v41 += (int)v52;
        v40 -= v52;
        if (v26 == 0) {
          goto LABEL_16;
        }
      }
      return 4294967292LL;
    }
  LABEL_16:
    a8 = HIDWORD(v43);
    a7 = v44;
    a3 = v45;
    if ((result & 0x80000000) == 0) {
      goto LABEL_19;
    }
  }
  return result;
}

__int64 MovieHr_75b20(int* a1, __int64 a2, int a3, __int64 a4, int a5,
                      unsigned int a6)
{
  return MovieRoutine_75620(a1, a2, a3, a4,
                            (void (*)(__int64, __int64, _QWORD, char*, __int64,
                                      _QWORD, __int64))MovieRoutine_75b60,
                            a5, a6, 0, 0);
}

__int64 MovieHr_75d40(int* a1, __int64 a2, int a3, __int64 a4, int a5,
                      unsigned int a6)
{
  return MovieRoutine_75620(a1, a2, a3, a4,
                            (void (*)(__int64, __int64, _QWORD, char*, __int64,
                                      _QWORD, __int64))MovieRoutine_75d80,
                            a5, a6, 0, 0);
}

__int64 MovieHr_77a00(int a1, int a2)
{
  int* v3;
  __int64 result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  if (a2 != 0) {
    if (a2 == 1 && (unsigned int)(a1 - 1) <= 7) {
      v3 = (int*)((char*)&MovieData_a9460 + 16 * (unsigned int)(a1 - 1));
      v5 = *v3;
      LODWORD(result) = v3[1];
      v6 = 0;
      if (v5 < 1) {
        goto LABEL_17;
      }
    LABEL_15:
      v7 = v5 - result;
      if (v5 >= (unsigned int)result) {
        v8 = result;
        v9 = MovieRoutine_846a0(2);
        v6 = ((MovieRoutine_846a0(1) + 7) & 0xFFFFFFF8) * v7 +
             ((v9 + 7) & 0xFFFFFFF8) * v8 + 296;
      }
      goto LABEL_17;
    }
    result = 0;
    if (a2 != 255) {
      if (a2 != 2) {
        return result;
      }
      if ((unsigned int)(a1 - 228) < 0xFFFFFF1D) {
        return 0;
      }
      v11 = MovieRoutine_39880((unsigned int)a1);
      v5 = v11 * v11;
      if (a1 != v11 * v11 && a1 - v11 * v11 != 2) {
        return 0;
      }
      LODWORD(result) = a1 != v5;
      if (a1 != v5) {
        ++v5;
      }
      v6 = 0;
      if (v5 >= 1) {
        goto LABEL_15;
      }
      goto LABEL_17;
    }
  }
  else {
    result = 0;
    if (a1 != 1) {
      if (a1 != 2) {
        return result;
      }
      v5 = 1;
      LODWORD(result) = 1;
      v6 = 0;
      goto LABEL_15;
    }
  }
  v5 = a1;
  v6 = 0;
  if (a1 >= 1) {
    goto LABEL_15;
  }
LABEL_17:
  v10 = 484 * a1;
  if (a1 <= 2) {
    v10 = 0;
  }
  return (unsigned int)(v6 + v10);
}

__int64 MovieHr_77f00(__int64 a1, __int64 a2, __int64 a3, int a4, int* a5,
                      _DWORD* a6, _WORD* a7, unsigned int a8)
{
  unsigned int v8;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  _WORD* v14;
  _DWORD* v15;
  int* v16;
  int* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  unsigned int v22;
  int* v23;
  _WORD* v24;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  int v35;
  __int64 v36;
  __int64 v37;
  int v38;

  v8 = -1;
  if ((unsigned int)(a3 - 256) < 0xFFFFFF01) {
    return v8;
  }
  *(_DWORD*)(a1 + 272) = -1;
  if (a4 != 0) {
    if ((unsigned int)a3 <= 8 && a4 == 1) {
      v10 = a2;
      v11 = a1;
      v12 = a3;
      v13 = a8;
      v14 = a7;
      v15 = a6;
      v16 = a5;
      v17 = (int*)((char*)&MovieData_a9460 + 16 * (unsigned int)(a3 - 1));
      *a5 = *v17;
      *a6 = v17[1];
      MovieRoutine_82920(a7, v17 + 2, (unsigned int)a3);
      a4 = 1;
      a1 = v11;
      a5 = v16;
      a2 = v10;
      a6 = v15;
      a3 = v12;
      a7 = v14;
      a8 = v13;
      if (v12 >= 6) {
        *(_DWORD*)(v11 + 272) = *v16 - 1;
      }
      goto LABEL_26;
    }
    if (a4 == 2) {
      if ((unsigned int)(a3 - 228) >= 0xFFFFFF1D) {
        v20 = a1;
        v21 = a5;
        v22 = a2;
        v23 = a6;
        v24 = a7;
        v25 = a8;
        v26 = a3;
        v27 = MovieRoutine_39880((unsigned int)a3);
        v28 = v27 * v27;
        a3 = v26;
        if (v26 == v27 * v27 || v26 - v27 * v27 == 2) {
          a5 = v21;
          a4 = 2;
          if (v21 != nullptr) {
            if (v26 == v28) {
              v35 = v27 * v27;
            }
            else {
              v35 = v28 + 1;
            }
            *v21 = v35;
          }
          a8 = v25;
          a7 = v24;
          a6 = v23;
          a2 = v22;
          a1 = v20;
          if (v23 != nullptr) {
            LODWORD(v36) = v26 != v28;
            *v23 = v36;
            if (*v21 > (int)v36) {
              v37 = 0;
              do {
                *((_BYTE*)v24 + v37) = v37 + 2 * v36;
                ++v37;
                v36 = *v23;
              } while (v37 < *v21 - v36);
            }
            if ((int)v36 >= 1) {
              v38 = 0;
              do {
                *((_BYTE*)v24 + v38 + *v21 - (int)v36) = v38;
                ++v38;
                LODWORD(v36) = *v23;
              } while (v38 < 2 * *v23);
            }
          }
          goto LABEL_26;
        }
      }
      return (unsigned int)-1;
    }
    if (a4 == 255) {
      v18 = a3 & 7;
      *a5 = a3;
      *a6 = 0;
      if ((unsigned int)(a3 - 1) >= 7) {
        v29 = 7;
        do {
          v30 = (char*)a7 + v29;
          *(v30 - 7) = v29 - 7;
          *(v30 - 6) = v29 - 6;
          *(v30 - 5) = v29 - 5;
          *(v30 - 4) = v29 - 4;
          *(v30 - 3) = v29 - 3;
          *(v30 - 2) = v29 - 2;
          *(v30 - 1) = v29 - 1;
          *v30 = v29;
          v31 = v29 + 8;
          v32 = v29 + 1;
          v29 += 8;
        } while (v32 != (a3 & 0xF8));
        v19 = v31 - 7;
      }
      else {
        v19 = 0;
      }
      if ((a3 & 7) != 0) {
        do {
          *((_BYTE*)a7 + v19) = v19;
          ++v19;
          --v18;
        } while (v18 != 0);
      }
      goto LABEL_26;
    }
    return (unsigned int)-5;
  }
  if ((unsigned __int8)a3 == 2) {
    *a5 = 1;
    *a6 = 1;
    *a7 = 256;
  }
  else {
    if ((_DWORD)a3 != 1) {
      return (unsigned int)-5;
    }
    *a5 = 1;
    *a6 = 0;
    *(_BYTE*)a7 = 0;
  }
LABEL_26:
  if (a4 == 2) {
    v33 = 2;
  }
  else {
    v33 = 0;
  }
  if (a4 == 1 && (unsigned int)a3 > 2) {
    v33 = 1;
  }
  return MovieRoutine_77b80(a1, a2, a3, (unsigned int)*a5, (unsigned int)*a6,
                            a7, a8, v33);
}

__int64 MovieHr_78220(unsigned int a1, unsigned int a2, int a3, unsigned int a4,
                      __int64 a5, unsigned int a6, int* a7)
{
  __int64 result;
  int v8;
  unsigned int v10;
  int* v16;
  int v17;
  int v18;
  __int64 v19;

  if (a2 - 256 < 0xFFFFFF01 || (a4 & 0x80000000) != 0 || a3 < 1 ||
      (v10 = a3 - a4, a3 < (int)a4) || a3 > (int)(255 - a4)) {
    result = 0;
    if (a7 == nullptr) {
      return result;
    }
    v8 = -1;
    goto LABEL_4;
  }
  v16 = a7;
  v17 = MovieRoutine_846a0(2);
  v18 = MovieRoutine_846a0(1);
  result = MovieRoutine_84650((int)(((v18 + 7) & 0xFFFFFFF8) * v10 +
                                    ((v17 + 7) & 0xFFFFFFF8) * a4 + 296));
  if (result == 0) {
    if (v16 == nullptr) {
      return result;
    }
    a7 = v16;
    v8 = -7;
    goto LABEL_4;
  }
  v19 = result;
  v8 = MovieRoutine_77b80(result, a1, a2, (unsigned int)a3, a4, a5, a6, 0);
  if (v8 == 0) {
    result = v19;
    a7 = v16;
    if (v16 == nullptr) {
      return result;
    }
    goto LABEL_4;
  }
  MovieRoutine_84660(v19);
  result = 0;
  a7 = v16;
  if (v16 != nullptr) {
  LABEL_4:
    *a7 = v8;
  }
  return result;
}

__int64 MovieHr_79520(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v27;

  v2 = MovieRoutine_846a0(2);
  v3 = MovieRoutine_846a0(1);
  v4 = *(_DWORD*)(a1 + 4);
  v5 = a1 + 296;
  if (v4 >= 1) {
    v6 = *(_DWORD*)(a1 + 8);
    v7 = *(_DWORD*)(a1 + 4) & 7;
    if ((unsigned int)v4 >= 8) {
      v9 = v4 & 0x7FFFFFF8;
      v8 = 0;
      do {
        if (v8 >= v6) {
          v10 = v3;
        }
        else {
          v10 = v2;
        }
        v11 = v5 + (int)((v10 + 7) & 0xFFFFFFF8);
        if (v8 + 1 >= v6) {
          v12 = v3;
        }
        else {
          v12 = v2;
        }
        v13 = v11 + (int)((v12 + 7) & 0xFFFFFFF8);
        if (v8 + 2 >= v6) {
          v14 = v3;
        }
        else {
          v14 = v2;
        }
        v15 = v13 + (int)((v14 + 7) & 0xFFFFFFF8);
        if (v8 + 3 >= v6) {
          v16 = v3;
        }
        else {
          v16 = v2;
        }
        v17 = v15 + (int)((v16 + 7) & 0xFFFFFFF8);
        if (v8 + 4 >= v6) {
          v18 = v3;
        }
        else {
          v18 = v2;
        }
        v19 = v17 + (int)((v18 + 7) & 0xFFFFFFF8);
        if (v8 + 5 >= v6) {
          v20 = v3;
        }
        else {
          v20 = v2;
        }
        v21 = v19 + (int)((v20 + 7) & 0xFFFFFFF8);
        if (v8 + 6 >= v6) {
          v22 = v3;
        }
        else {
          v22 = v2;
        }
        v23 = v21 + (int)((v22 + 7) & 0xFFFFFFF8);
        v24 = v8 + 7;
        v8 += 8;
        if (v24 >= v6) {
          v25 = v3;
        }
        else {
          v25 = v2;
        }
        v5 = v23 + (int)((v25 + 7) & 0xFFFFFFF8);
      } while (v8 != v9);
    }
    else {
      v8 = 0;
    }
    for (; v7 != 0; v5 += (int)((v27 + 7) & 0xFFFFFFF8)) {
      if (v8++ < v6) {
        v27 = v2;
      }
      else {
        v27 = v3;
      }
      --v7;
    }
  }
  return v5;
}

__int64 MovieHr_79680(int* a1, __int64 a2, unsigned int a3, _BYTE* a4, int a5)
{
  return MovieRoutine_78460(
      a1,
      (void (*)(__int16*, __int64, __int64, _QWORD, _QWORD, __int64,
                _QWORD))MovieRoutine_796e0,
      a2, a3, a4, a5, 16, (__int64)MovieData_c0bd0, 0, 0);
}

__int64 MovieHr_797f0(int* a1, __int64 a2, unsigned int a3, _BYTE* a4, int a5)
{
  return MovieRoutine_78460(
      a1,
      (void (*)(__int16*, __int64, __int64, _QWORD, _QWORD, __int64,
                _QWORD))MovieRoutine_79840,
      a2, a3, a4, a5, 16, (__int64)MovieData_c0bc8[0], 1, 0);
}

_QWORD* MovieHr_79fe0(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = a2;
  result[4] = a2;
  result[5] = 0;
  if (a2 != 0 && *(_QWORD*)(a2 + 16) != 0) {
    result[1] = **(_QWORD**)a2 + *(_QWORD*)(a2 + 8);
    v2 = *(_QWORD*)(a2 + 16);
    result[2] = v2;
    if (v2 > 0) {
      return result;
    }
  }
  else {
    v2 = 0;
    result[1] = 0;
    result[2] = 0;
  }
  v3 = 0;
  while (1) {
    result[2] = v2;
    *(_DWORD*)result = 0;
    if (a2 == 0 || *(_QWORD*)(a2 + 24) == 0) {
      break;
    }
    v3 += *(_QWORD*)(a2 + 16);
    result[5] = v3;
    a2 = *(_QWORD*)(a2 + 24);
    result[3] = a2;
    v4 = *(_QWORD*)(a2 + 16) + v2;
    if (v4 >= 1) {
      result[1] = **(_QWORD**)a2 + *(_QWORD*)(a2 + 8) - v2;
      v2 += *(_QWORD*)(a2 + 16);
      result[2] = v2;
      if (v2 >= 1) {
        return result;
      }
    }
    else {
      v2 += *(_QWORD*)(a2 + 16);
      result[2] = v4;
    }
  }
  if (v2 < 0) {
    result[2] = -1;
  }
  return result;
}

__int64 MovieHr_7a0b0(int* a1, int a2)
{
  unsigned __int8* v2;
  int v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  int v7;
  __int64 result;
  __int64 v10;
  int v11;
  unsigned __int8* v12;
  int v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  int v16;
  int v17;

  v2 = *((unsigned __int8**)a1 + 1);
  if (v2 != nullptr) {
    v3 = *a1;
    v4 = *((_QWORD*)a1 + 2);
    v5 = *a1 + a2;
    if (v5 < 8 * v4) {
      v6 = *v2 >> v3;
      if (v5 < 9) {
        return v6 & MovieData_a9508[a2];
      }
      v6 |= v2[1] << (8 - v3);
      if ((unsigned int)v5 < 0x11) {
        return v6 & MovieData_a9508[a2];
      }
      v6 |= v2[2] << (16 - v3);
      if ((unsigned int)v5 < 0x19) {
        return v6 & MovieData_a9508[a2];
      }
      v6 |= v2[3] << (24 - v3);
      if (v3 == 0 || (unsigned int)v5 < 0x21) {
        return v6 & MovieData_a9508[a2];
      }
      v7 = v2[4];
      goto LABEL_9;
    }
    if ((v4 & 0x80000000) == 0) {
      result = 0;
      if ((_DWORD)v4 != 0) {
        v10 = *((_QWORD*)a1 + 3);
        if (v10 != 0) {
          if (v5 == 0) {
            v6 = 0;
            return v6 & MovieData_a9508[a2];
          }
          v6 = *v2 >> v3;
          if (v5 < 9) {
            return v6 & MovieData_a9508[a2];
          }
          v11 = v4 - 1;
          if (v11 != 0) {
            v12 = v2 + 1;
          LABEL_23:
            v6 |= *v12 << (8 - v3);
            if (v5 < 17) {
              return v6 & MovieData_a9508[a2];
            }
            v13 = v11 - 1;
            if (v11 == 1) {
              while (1) {
                v10 = *(_QWORD*)(v10 + 24);
                if (v10 == 0) {
                  break;
                }
                v13 = *(_DWORD*)(v10 + 16);
                if (v13 != 0) {
                  v14 =
                      (unsigned __int8*)(**(_QWORD**)v10 + *(_QWORD*)(v10 + 8));
                  goto LABEL_30;
                }
              }
            }
            else {
              v14 = v12 + 1;
            LABEL_30:
              v16 = *v14;
              v15 = v14 + 1;
              v6 |= v16 << (16 - v3);
              if (v5 < 25) {
                return v6 & MovieData_a9508[a2];
              }
              v17 = v13 - 1;
              if (v17 != 0) {
              LABEL_37:
                v6 |= *v15 << (24 - v3);
                if (v3 == 0 || v5 < 33) {
                  return v6 & MovieData_a9508[a2];
                }
                if (v17 != 1) {
                  v7 = v15[1];
                LABEL_9:
                  v6 |= v7 << -(char)v3;
                  return v6 & MovieData_a9508[a2];
                }
                while (1) {
                  v10 = *(_QWORD*)(v10 + 24);
                  if (v10 == 0) {
                    break;
                  }
                  if (*(_DWORD*)(v10 + 16) != 0) {
                    v7 = *(unsigned __int8*)(**(_QWORD**)v10 +
                                             *(_QWORD*)(v10 + 8));
                    goto LABEL_9;
                  }
                }
              }
              else {
                while (1) {
                  v10 = *(_QWORD*)(v10 + 24);
                  if (v10 == 0) {
                    break;
                  }
                  v17 = *(_DWORD*)(v10 + 16);
                  if (v17 != 0) {
                    v15 = (unsigned __int8*)(**(_QWORD**)v10 +
                                             *(_QWORD*)(v10 + 8));
                    goto LABEL_37;
                  }
                }
              }
            }
          }
          else {
            while (1) {
              v10 = *(_QWORD*)(v10 + 24);
              if (v10 == 0) {
                break;
              }
              v11 = *(_DWORD*)(v10 + 16);
              if (v11 != 0) {
                v12 = (unsigned __int8*)(**(_QWORD**)v10 + *(_QWORD*)(v10 + 8));
                goto LABEL_23;
              }
            }
          }
          return -1;
        }
      }
      return result;
    }
  }
  return 0;
}

__int64 MovieHr_7a2e0(__int64 result, int a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_DWORD*)result + a2;
  v3 = v2 & 7;
  v4 = (__int64)v2 >> 3;
  v6 = *(_QWORD*)(result + 8);
  v5 = *(_QWORD*)(result + 16);
  *(_DWORD*)result = v3;
  v7 = v5 <= v4;
  v8 = v5 - v4;
  *(_QWORD*)(result + 8) = v6 + v4;
  *(_QWORD*)(result + 16) = v8;
  if (v7) {
    v9 = *(_QWORD*)(result + 24);
    while (1) {
      *(_QWORD*)(result + 16) = v8;
      *(_DWORD*)result = v3;
      if (v9 == 0 || *(_QWORD*)(v9 + 24) == 0) {
        break;
      }
      *(_QWORD*)(result + 40) += *(_QWORD*)(v9 + 16);
      v9 = *(_QWORD*)(v9 + 24);
      *(_QWORD*)(result + 24) = v9;
      v10 = *(_QWORD*)(v9 + 16) + v8;
      if (v10 >= 1) {
        *(_QWORD*)(result + 8) = **(_QWORD**)v9 + *(_QWORD*)(v9 + 8) - v8;
        v8 += *(_QWORD*)(v9 + 16);
        *(_QWORD*)(result + 16) = v8;
        if (v8 >= 1) {
          return result;
        }
      }
      else {
        v8 += *(_QWORD*)(v9 + 16);
        *(_QWORD*)(result + 16) = v10;
      }
    }
    if (v3 > 8 * v8) {
      *(_QWORD*)(result + 16) = -1;
    }
  }
  return result;
}

__int64 MovieHr_7a3c0(__int64 a1, int a2)
{
  __int64 result;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = MovieRoutine_7a0b0((int*)a1, a2);
  v5 = *(_DWORD*)a1 + a2;
  v6 = v5 & 7;
  v7 = (__int64)v5 >> 3;
  v9 = *(_QWORD*)(a1 + 8);
  v8 = *(_QWORD*)(a1 + 16);
  *(_DWORD*)a1 = v6;
  v10 = v8 <= v7;
  v11 = v8 - v7;
  *(_QWORD*)(a1 + 8) = v9 + v7;
  *(_QWORD*)(a1 + 16) = v11;
  if (v10) {
    v12 = *(_QWORD*)(a1 + 24);
    while (1) {
      *(_QWORD*)(a1 + 16) = v11;
      *(_DWORD*)a1 = v6;
      if (v12 == 0 || *(_QWORD*)(v12 + 24) == 0) {
        break;
      }
      *(_QWORD*)(a1 + 40) += *(_QWORD*)(v12 + 16);
      v12 = *(_QWORD*)(v12 + 24);
      *(_QWORD*)(a1 + 24) = v12;
      v13 = *(_QWORD*)(v12 + 16) + v11;
      if (v13 >= 1) {
        *(_QWORD*)(a1 + 8) = **(_QWORD**)v12 + *(_QWORD*)(v12 + 8) - v11;
        v11 += *(_QWORD*)(v12 + 16);
        *(_QWORD*)(a1 + 16) = v11;
        if (v11 >= 1) {
          return result;
        }
      }
      else {
        v11 += *(_QWORD*)(v12 + 16);
        *(_QWORD*)(a1 + 16) = v13;
      }
    }
    if (v6 > 8 * v11) {
      *(_QWORD*)(a1 + 16) = -1;
    }
  }
  return result;
}

__int64 MovieHr_7a4c0(_QWORD* a1)
{
  if (a1 == nullptr || *a1 == 0 || *(_QWORD*)(*a1 + 48LL) == 0) {
    return 0xFFFFFFFFLL;
  }
  a1[9] = -1;
  a1[12] = -1;
  a1[13] = -1;
  a1[14] = -1;
  return 0;
}

__int64 MovieHr_7a500(__int64* a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;

  v2 = *(_QWORD*)(a2 + 48);
  *a1 = a2;
  a1[7] = MovieRoutine_84650(8LL * *(int*)(a2 + 4));
  a1[8] = MovieRoutine_84650(8LL * *(int*)(a2 + 4));
  if (*(int*)(a2 + 4) >= 1) {
    v5 = 0;
    do {
      *(_QWORD*)(a1[7] + 8 * v5) = MovieRoutine_84760(
          1, (2LL * *(_QWORD*)(v2 + 8)) & 0xFFFFFFFFFFFFFFFCLL);
      *(_QWORD*)(a1[8] + 8 * v5++) =
          MovieRoutine_84760(1, *(_QWORD*)(v2 + 8) & 0xFFFFFFFFFFFFFFFCLL);
    } while (v5 < *(int*)(a2 + 4));
  }
  v6 = *a1;
  a1[10] = 0;
  a1[11] = 0;
  if (v6 != 0 && *(_QWORD*)(v6 + 48) != 0) {
    a1[9] = -1;
    a1[12] = -1;
    a1[13] = -1;
    a1[14] = -1;
  }
  return 0;
}

_QWORD* MovieHr_7a5e0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 i;
  __int64 v6;
  int v7;
  __int64 j;
  __int64 v9;

  if (result != nullptr) {
    v1 = result;
    v2 = *result;
    v3 = result[7];
    if (v3 != 0) {
      v4 = *(_DWORD*)(v2 + 4);
      if (v4 >= 1) {
        for (i = 0; i < v4; ++i) {
          v6 = *(_QWORD*)(v1[7] + 8 * i);
          if (v6 != 0) {
            MovieRoutine_84660(v6);
            v4 = *(_DWORD*)(v2 + 4);
          }
        }
        v3 = v1[7];
      }
      MovieRoutine_84660(v3);
    }
    result = (_QWORD*)v1[8];
    if (result != nullptr) {
      v7 = *(_DWORD*)(v2 + 4);
      if (v7 >= 1) {
        for (j = 0; j < v7; ++j) {
          v9 = *(_QWORD*)(v1[8] + 8 * j);
          if (v9 != 0) {
            MovieRoutine_84660(v9);
            v7 = *(_DWORD*)(v2 + 4);
          }
        }
        result = (_QWORD*)v1[8];
      }
      return (_QWORD*)MovieRoutine_84660(result);
    }
  }
  return result;
}

__int64 MovieHr_7a6c0(__int64* a1, __int64 a2, int a3)
{
  int v3;
  int v4;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;

  v3 = *((_DWORD*)a1 + 18);
  if (v3 < 0) {
    return 0;
  }
  v4 = *((_DWORD*)a1 + 19);
  v6 = v4 - v3;
  if (v4 <= v3) {
    return 0;
  }
  else {
    v7 = a2;
    if (a2 != 0) {
      v8 = *a1;
      if ((int)v6 >= a3) {
        v6 = a3;
      }
      if (*(int*)(v8 + 4) >= 1) {
        v9 = *(_QWORD**)(v8 + 48);
        v10 = 0;
        do {
          MovieRoutine_7dee0(*v9, v9[1], *((unsigned int*)a1 + 20),
                             *((unsigned int*)a1 + 22));
          ++v10;
          v7 += 2;
        } while (v10 < *(int*)(v8 + 4));
      }
    }
  }
  return v6;
}

__int64 MovieHr_7a920(__int64* a1, __int64* a2, int a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v8;
  __int64 result;
  unsigned int v10;
  int v11;
  unsigned int v12;
  bool v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;

  v3 = (__int64)(a1 + 1);
  v4 = *a1;
  v8 = *(_QWORD*)(*a1 + 48);
  MovieRoutine_79fe0(a1 + 1, *a2);
  if (MovieRoutine_7a3c0(v3, 1) != 0) {
    return 4294967161LL;
  }
  v10 = *(_DWORD*)(v8 + 16);
  if (v10 >= 2) {
    v12 = v10 - 1;
    v11 = 0;
    do {
      ++v11;
      v13 = v12 > 1;
      v12 >>= 1;
    } while (v13);
  }
  else {
    v11 = 0;
  }
  v14 = MovieRoutine_7a3c0(v3, v11);
  if (v14 != -1 && *(_DWORD*)(v8 + 16) > v14) {
    v15 = v14;
    a1[10] = a1[11];
    v16 = *(unsigned __int8*)(*(_QWORD*)(v8 + 40) + 2LL * v14);
    a1[11] = v16;
    if (*(int*)(v4 + 4) >= 1) {
      v17 = 0;
      do {
        MovieRoutine_7de20(*(_QWORD*)(v8 + 8 * a1[10]),
                           *(_QWORD*)(a1[7] + 8 * v17),
                           *(_QWORD*)(a1[8] + 8 * v17));
        ++v17;
      } while (v17 < *(int*)(v4 + 4));
      v16 = a1[11];
    }
    if (v16 == 0 || (MovieRoutine_7a3c0(v3, 1),
                     (unsigned int)MovieRoutine_7a3c0(v3, 1) != -1)) {
      if (a3 != 0) {
        MovieRoutine_7c480(
            a1,
            *(_QWORD*)(v8 + 48) +
                40LL * *(unsigned __int8*)(*(_QWORD*)(v8 + 40) + 2 * v15 + 1));
        v18 = *((_DWORD*)a1 + 18);
        *((_DWORD*)a1 + 18) = 0;
        if (v18 == -1) {
          v19 = 0;
        }
        else {
          v19 = *(_QWORD*)(v8 + 8 * a1[11]) / 4LL +
                *(_QWORD*)(v8 + 8 * a1[10]) / 4LL;
        }
        *((_DWORD*)a1 + 19) = v19;
      }
      v20 = a1[13];
      if (v20 == -1 || (v21 = a2[5], v20 != v21 - 4)) {
        v23 = 0;
        a1[12] = -1;
        a1[14] = -1;
        a1[13] = a2[5] - 3;
        a1[14] = 0;
        v24 = a1[12];
        if (v24 == -1) {
          goto LABEL_26;
        }
      }
      else {
        v22 = a1[14];
        a1[13] = v21 - 3;
        if (v22 == -1) {
          v23 = 0;
          v24 = a1[12];
          a1[14] = 0;
          if (v24 == -1) {
            goto LABEL_26;
          }
        }
        else {
          v23 = v22 + *(_QWORD*)(v8 + 8 * a1[10]) / 4LL +
                *(_QWORD*)(v8 + 8 * a1[11]) / 4LL;
          v24 = a1[12];
          a1[14] = v23;
          if (v24 == -1) {
          LABEL_26:
            v25 = a2[4];
            if (v25 == -1) {
              return 0;
            }
            a1[12] = v25;
            if (v23 <= v25) {
              return 0;
            }
            if (a2[3] != 0) {
              *((_DWORD*)a1 + 19) += v25 - v23;
              return 0;
            }
            else {
              result = 0;
              v28 = *((_DWORD*)a1 + 18) + v23 - v25;
              if (v28 >= *((_DWORD*)a1 + 19)) {
                v28 = *((_DWORD*)a1 + 19);
              }
              *((_DWORD*)a1 + 18) = v28;
            }
            return result;
          }
        }
      }
      result = 0;
      v26 = v24 + *(_QWORD*)(v8 + 8 * a1[10]) / 4LL +
            *(_QWORD*)(v8 + 8 * a1[11]) / 4LL;
      a1[12] = v26;
      v27 = a2[4];
      if (v27 != -1 && v27 != v26) {
        if (v27 < v26 && a2[3] != 0) {
          *((_DWORD*)a1 + 19) += v27 - v26;
          v27 = a2[4];
        }
        a1[12] = v27;
        return 0;
      }
      return result;
    }
  }
  return 4294967160LL;
}

_QWORD* MovieHr_7ac60(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (result != nullptr) {
    v1 = result;
    v2 = *result;
    if (v2 != 0) {
      MovieRoutine_84660(v2);
    }
    v3 = v1[1];
    if (v3 != 0) {
      MovieRoutine_84660(v3);
    }
    v4 = v1[2];
    if (v4 != 0) {
      MovieRoutine_84660(v4);
    }
    v5 = v1[3];
    if (v5 != 0) {
      MovieRoutine_84660(v5);
    }
    v6 = v1[4];
    if (v6 != 0) {
      MovieRoutine_84660(v6);
    }
    v7 = v1[5];
    if (v7 != 0) {
      MovieRoutine_84660(v7);
    }
    v1[6] = 0;
    v1[7] = 0;
    v1[4] = 0;
    v1[5] = 0;
    v1[2] = 0;
    v1[3] = 0;
    *v1 = 0;
    v1[1] = 0;
    return (_QWORD*)MovieRoutine_84660(v1);
  }
  return result;
}

__int64 MovieHr_7b4c0(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  signed int v13;
  int v14;
  signed int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  unsigned __int16 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  unsigned __int64 v36;
  __int64 v37;
  _BYTE* v38;
  __int64 v39;
  unsigned __int16 v40;
  char v41;
  __int64 v42;
  __int64 i;
  __int64 v44;
  _BYTE* v45;
  _BYTE* v46;
  char v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  _BYTE* v51;
  __int64 v52;
  char v53;

  v4 = a3;
  v7 = MovieRoutine_84650(a3);
  v8 = v7;
  if (a3 >= 2u) {
    v9 = 1;
    v10 = a1;
    while (1) {
      v7 = v10;
      v10 = v8;
      v11 = 2 * v9;
      v12 = v7 + 3;
      v13 = 0;
      v14 = 0;
      v15 = v9;
      do {
        LODWORD(v16) = v13 + v11;
        LODWORD(v17) = v15;
        if (v13 + v11 >= (unsigned int)a3) {
          v16 = a3;
        }
        else {
          v16 = (unsigned int)v16;
        }
        if (v13 < (unsigned int)v15 && v15 < (unsigned int)v16) {
          do {
            v18 = *(unsigned __int8*)(v7 + (unsigned int)v13);
            v19 = *(unsigned __int8*)(v7 + (int)v17);
            if (*(unsigned __int16*)(a2 + 2 * v18) >=
                (unsigned int)*(unsigned __int16*)(a2 + 2 * v19)) {
              LODWORD(v17) = v17 + 1;
              *(_BYTE*)(v10 + (unsigned __int16)v14) = v19;
              v14 = (unsigned __int16)v14 + 1;
              if (v13 >= v15) {
                break;
              }
            }
            else {
              ++v13;
              *(_BYTE*)(v10 + (unsigned __int16)v14) = v18;
              v14 = (unsigned __int16)v14 + 1;
              if (v13 >= v15) {
                break;
              }
            }
          } while ((int)v17 < (int)v16);
        }
        if (v13 >= v15) {
          v26 = v14;
          goto LABEL_27;
        }
        v20 = v13;
        v21 = ((_BYTE)v15 - (_BYTE)v13) & 7;
        if (v21 == 0) {
          v24 = v20;
          v25 = v15;
          v26 = v14;
          if ((unsigned __int64)(v20 - v25) > 0xFFFFFFFFFFFFFFF8LL) {
            goto LABEL_27;
          }
        LABEL_25:
          v27 = v25 - v24;
          v28 = (_BYTE*)(v12 + v24);
          v26 = v14;
          do {
            v27 -= 8;
            *(_BYTE*)(v10 + (unsigned __int16)v26) = *(v28 - 3);
            *(_BYTE*)(v10 + (unsigned __int16)(v26 + 1)) = *(v28 - 2);
            *(_BYTE*)(v10 + (unsigned __int16)(v26 + 2)) = *(v28 - 1);
            *(_BYTE*)(v10 + (unsigned __int16)(v26 + 3)) = *v28;
            *(_BYTE*)(v10 + (unsigned __int16)(v26 + 4)) = v28[1];
            v29 = (unsigned __int16)(v26 + 6);
            *(_BYTE*)(v10 + (unsigned __int16)(v26 + 5)) = v28[2];
            v30 = v26 + 7;
            v26 += 8;
            *(_BYTE*)(v10 + v29) = v28[3];
            v31 = v28[4];
            v28 += 8;
            *(_BYTE*)(v10 + v30) = v31;
          } while (v27 != 0);
          goto LABEL_27;
        }
        v22 = v20;
        v23 = v14;
        do {
          v24 = v22 + 1;
          v14 = v23 + 1;
          --v21;
          *(_BYTE*)(v10 + (unsigned __int16)v23++) = *(_BYTE*)(v7 + v22++);
        } while (v21 != 0);
        v25 = v15;
        v26 = v14;
        if ((unsigned __int64)(v20 - v25) <= 0xFFFFFFFFFFFFFFF8LL) {
          goto LABEL_25;
        }
      LABEL_27:
        if ((int)v17 >= (int)v16) {
          v14 = v26;
          goto LABEL_6;
        }
        v32 = (int)v17;
        v33 = ((int)v16 - (int)v17) & 7LL;
        if (v33 == 0) {
          v17 = (int)v17;
          v14 = v26;
          if ((unsigned __int64)((int)v17 - v16) > 0xFFFFFFFFFFFFFFF8LL) {
            goto LABEL_6;
          }
        LABEL_34:
          v37 = v16 - v17;
          v38 = (_BYTE*)(v12 + v17);
          v14 = v26;
          do {
            v37 -= 8;
            *(_BYTE*)(v10 + (unsigned __int16)v14) = *(v38 - 3);
            *(_BYTE*)(v10 + (unsigned __int16)(v14 + 1)) = *(v38 - 2);
            *(_BYTE*)(v10 + (unsigned __int16)(v14 + 2)) = *(v38 - 1);
            *(_BYTE*)(v10 + (unsigned __int16)(v14 + 3)) = *v38;
            *(_BYTE*)(v10 + (unsigned __int16)(v14 + 4)) = v38[1];
            v39 = (unsigned __int16)(v14 + 6);
            *(_BYTE*)(v10 + (unsigned __int16)(v14 + 5)) = v38[2];
            v40 = v14 + 7;
            v14 += 8;
            *(_BYTE*)(v10 + v39) = v38[3];
            v41 = v38[4];
            v38 += 8;
            *(_BYTE*)(v10 + v40) = v41;
          } while (v37 != 0);
          goto LABEL_6;
        }
        v34 = (int)v17;
        v35 = v26;
        do {
          v17 = v34 + 1;
          v26 = v35 + 1;
          --v33;
          *(_BYTE*)(v10 + (unsigned __int16)v35++) = *(_BYTE*)(v7 + v34++);
        } while (v33 != 0);
        v36 = v32 - v16;
        v14 = v26;
        if (v36 <= 0xFFFFFFFFFFFFFFF8LL) {
          goto LABEL_34;
        }
      LABEL_6:
        v13 = (unsigned __int16)v14;
        v15 = v9 + (unsigned __int16)v14;
      } while (v15 < (unsigned int)a3);
      if ((unsigned __int16)v14 < (unsigned int)a3) {
        v42 = ((_BYTE)v4 - (_BYTE)v14) & 7;
        for (i = (unsigned __int16)v14; v42 != 0; ++i) {
          --v42;
          *(_BYTE*)(v10 + i) = *(_BYTE*)(v7 + i);
        }
        if ((unsigned __int64)(unsigned __int16)v14 - v4 <=
            0xFFFFFFFFFFFFFFF8LL) {
          v44 = v4 - i;
          v45 = (_BYTE*)(v10 + i + 3);
          v46 = (_BYTE*)(v7 + i + 3);
          do {
            v44 -= 8;
            *(v45 - 3) = *(v46 - 3);
            *(v45 - 2) = *(v46 - 2);
            *(v45 - 1) = *(v46 - 1);
            *v45 = *v46;
            v45[1] = v46[1];
            v45[2] = v46[2];
            v45[3] = v46[3];
            v47 = v46[4];
            v46 += 8;
            v45[4] = v47;
            v45 += 8;
          } while (v44 != 0);
        }
      }
      v9 = v11 & 0xFFFE;
      v8 = v7;
      if (v9 >= a3) {
        goto LABEL_45;
      }
    }
  }
  v10 = a1;
LABEL_45:
  if (v7 != a1) {
    return MovieRoutine_84660(v7);
  }
  if (a3 != 0) {
    v48 = v4 & 7;
    if (a3 >= 8u) {
      v50 = (_BYTE*)(v7 + 3);
      v51 = (_BYTE*)(v10 + 3);
      v52 = 0;
      do {
        v52 -= 8;
        *(v50 - 3) = *(v51 - 3);
        *(v50 - 2) = *(v51 - 2);
        *(v50 - 1) = *(v51 - 1);
        *v50 = *v51;
        v50[1] = v51[1];
        v50[2] = v51[2];
        v50[3] = v51[3];
        v53 = v51[4];
        v51 += 8;
        v50[4] = v53;
        v50 += 8;
      } while (-(__int64)((unsigned __int16)v4 & 0xFFF8) != v52);
      v49 = -v52;
      if ((v4 & 7) == 0) {
        return MovieRoutine_84660(v10);
      }
    }
    else {
      v49 = 0;
      if ((v4 & 7) == 0) {
        return MovieRoutine_84660(v10);
      }
    }
    do {
      --v48;
      *(_BYTE*)(v7 + v49) = *(_BYTE*)(v10 + v49);
      ++v49;
    } while (v48 != 0);
  }
  return MovieRoutine_84660(v10);
}

__int64 MovieHr_7c120(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  if (result != 0) {
    v1 = (_QWORD*)result;
    v2 = *(_QWORD*)(result + 8);
    if (v2 != 0) {
      MovieRoutine_84660(v2);
    }
    v3 = v1[2];
    if (v3 != 0) {
      MovieRoutine_84660(v3);
    }
    result = v1[4];
    if (result != 0) {
      result = MovieRoutine_84660(result);
    }
    v1[3] = 0;
    v1[4] = 0;
    v1[1] = 0;
    v1[2] = 0;
    *v1 = 0;
  }
  return result;
}

__int64 MovieHr_7c180(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  unsigned __int8 v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned __int8 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;

  v3 = *(_QWORD*)(a2 + 48);
  a1[3] = 0;
  a1[4] = 0;
  a1[1] = 0;
  a1[2] = 0;
  v7 = 1;
  *a1 = 0;
  if (MovieRoutine_7a3c0(a3, 1) != 0) {
    v7 = MovieRoutine_7a3c0(a3, 4) + 1;
  }
  *(_DWORD*)a1 = v7;
  if (MovieRoutine_7a3c0(a3, 1) != 0) {
    v8 = MovieRoutine_7a3c0(a3, 8);
    *((_DWORD*)a1 + 6) = v8 + 1;
    v9 = MovieRoutine_84650(2LL * (v8 + 1));
    v10 = *((_DWORD*)a1 + 6);
    a1[4] = v9;
    if (v10 >= 1) {
      v11 = *(_DWORD*)(a2 + 4);
      v12 = 0;
      do {
        if ((unsigned int)v11 >= 2) {
          v14 = v11 - 1;
          v13 = 0;
          do {
            ++v13;
            v21 = v14 > 1;
            v14 >>= 1;
          } while (v21);
        }
        else {
          v13 = 0;
        }
        v15 = MovieRoutine_7a3c0(a3, v13);
        *(_BYTE*)(a1[4] + 2 * v12) = v15;
        v16 = *(_DWORD*)(a2 + 4);
        if (v16 >= 2) {
          v18 = v16 - 1;
          v17 = 0;
          do {
            ++v17;
            v21 = v18 > 1;
            v18 >>= 1;
          } while (v21);
        }
        else {
          v17 = 0;
        }
        v19 = v15;
        v20 = MovieRoutine_7a3c0(a3, v17);
        *(_BYTE*)(a1[4] + 2 * v12 + 1) = v20;
        if (v19 == v20) {
          goto LABEL_22;
        }
        v11 = *(_DWORD*)(a2 + 4);
        v21 = v19 < v11 && v20 < v11;
        if (!v21) {
          goto LABEL_22;
        }
      } while (++v12 < *((int*)a1 + 6));
    }
  }
  if (MovieRoutine_7a3c0(a3, 2) <= 0) {
    v26 = *(_DWORD*)a1;
    if (*(int*)a1 <= 1) {
    LABEL_34:
      v28 = MovieRoutine_84650(2LL * v26);
      v29 = *(_DWORD*)a1;
      a1[2] = v28;
      if (v29 < 1) {
        return 0;
      }
    }
    else {
      a1[1] = MovieRoutine_84650(*(int*)(a2 + 4));
      if (*(int*)(a2 + 4) >= 1) {
        v27 = 0;
        while (1) {
          *(_BYTE*)(a1[1] + v27) = MovieRoutine_7a3c0(a3, 4);
          v26 = *(_DWORD*)a1;
          if (*(_DWORD*)a1 <= (int)*(unsigned __int8*)(a1[1] + v27)) {
            goto LABEL_22;
          }
          if (++v27 >= *(int*)(a2 + 4)) {
            goto LABEL_34;
          }
        }
      }
      v32 = MovieRoutine_84650(2LL * *(int*)a1);
      v33 = *(_DWORD*)a1;
      a1[2] = v32;
      if (v33 < 1) {
        return 0;
      }
    }
    v30 = 0;
    v31 = 0;
    while (1) {
      MovieRoutine_7a3c0(a3, 8);
      *(_BYTE*)(a1[2] + v30) = MovieRoutine_7a3c0(a3, 8);
      if (*(_DWORD*)(v3 + 24) <= (int)*(unsigned __int8*)(a1[2] + v30)) {
        break;
      }
      *(_BYTE*)(a1[2] + v30 + 1) = MovieRoutine_7a3c0(a3, 8);
      if (*(_DWORD*)(v3 + 28) <= (int)*(unsigned __int8*)(a1[2] + v30 + 1)) {
        break;
      }
      ++v31;
      v30 += 2;
      if (v31 >= *(int*)a1) {
        return 0;
      }
    }
  }
LABEL_22:
  v22 = a1[1];
  if (v22 != 0) {
    MovieRoutine_84660(v22);
  }
  v23 = a1[2];
  if (v23 != 0) {
    MovieRoutine_84660(v23);
  }
  v24 = a1[4];
  if (v24 != 0) {
    MovieRoutine_84660(v24);
  }
  a1[3] = 0;
  a1[4] = 0;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  return 0xFFFFFFFFLL;
}

unsigned __int64 MovieHr_7d020(int a1, int* a2)
{
  int v2;
  char v3;
  __int64 v4;
  int v5;
  int* v6;
  __int64 v7;
  int* v8;
  int* v9;
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 v14;
  int* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  int* v22;
  int v23;
  __int64 v24;
  int* v25;
  int v26;
  int* v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int* v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int* v39;
  int* v40;
  int* v41;
  int* v42;
  __int64 v43;
  int* v44;
  int* v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int* v58;
  int v59;
  int* v60;
  int* v61;
  int* v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  unsigned __int64 v76;
  _DWORD* v77;
  __int64 v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  unsigned __int64 v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  int v109;
  int v110;
  int v111;
  int v112;
  unsigned __int64 v113;
  int v114;
  int v115;
  int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  unsigned __int64 v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  int v214;
  unsigned int v215;
  int* v216;
  bool v217;
  int* v218;
  int v219;
  int v220;
  __int64 v221;
  int* v222;
  int* v223;
  char* v224;
  char* v225;
  int v226;
  int v227;
  int v228;
  int v229;
  int v230;
  char* v231;
  int v232;
  int v233;
  int v234;
  int v235;
  char* v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  __int64 v244;
  int v245;
  int v246;
  unsigned __int64 result;
  int v248;
  int v249;
  int v250;
  int v251;
  int* v252;
  int* v253;
  int v254;
  int v255;
  __int64 v256;
  int v257;
  int v258;
  __int64 v259;
  __int64 v260;
  unsigned __int64 v261;
  int v262;
  int v263;
  __int64 v264;
  __int64 v265;
  int v266;
  __int64 v267;
  int v268;
  int v269;
  int v270;
  int v271;
  __int64 v272;
  int v273;
  int* v274;
  int* v275;
  int v276;
  int v277;
  int v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  unsigned __int64 v282;
  unsigned __int64 v283;
  int v284;
  __int64 v285;
  int v286;
  int v287;
  __int64 v288;
  __int64 v289;
  char* v290;
  int* v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  int v295;
  __int64 v296;
  int v297;
  __int64 v298;
  int* v299;
  unsigned __int64 v300;
  int v301;
  int v302;
  int v303;
  int v304;
  int v305;
  int v306;
  int v307;
  int v308;
  int v309;
  __int64 v310;

  v2 = -10;
  do {
    v3 = v2++ + 14;
  } while ((((unsigned int)a1 >> v3) & 1) == 0);
  v4 = (__int64)a1 >> 1;
  v297 = -v2;
  v5 = v2 + 7;
  v6 = &a2[a1 >> 1];
  v7 = 2 << -(char)v2;
  v8 = (int*)&MovieData_b1994;
  v9 = v6 - 3;
  do {
    v10 = *(v8 - 1);
    v11 = *v8;
    v8 += v7;
    v12 = v9[2];
    v13 = (((unsigned __int64)(v10 * (__int64)v12) >> 31) & 0xFFFFFFFE) -
          (((unsigned __int64)(v11 * (__int64)*v9) >> 31) & 0xFFFFFFFE);
    *v9 = (((unsigned __int64)(v11 * (__int64)v12) >> 31) & 0xFFFFFFFE) +
          (((unsigned __int64)(v10 * (__int64)*v9) >> 31) & 0xFFFFFFFE);
    v9[2] = v13;
    v9 -= 4;
  } while (v9 >= &a2[a1 >> 2]);
  v14 = 0;
  do {
    v15 = &v9[v14];
    v17 = *(v8 - 1);
    v16 = *v8;
    v8 -= v7;
    v14 -= 4;
    v18 = *v15;
    v19 = v15[2];
    *v15 = (((unsigned __int64)(v17 * (__int64)v19) >> 31) & 0xFFFFFFFE) +
           (((unsigned __int64)(v16 * (__int64)*v15) >> 31) & 0xFFFFFFFE);
    v15[2] = (((unsigned __int64)(v16 * (__int64)v19) >> 31) & 0xFFFFFFFE) -
             (((unsigned __int64)(v17 * (__int64)v18) >> 31) & 0xFFFFFFFE);
  } while (v15 - 4 >= a2);
  v20 = 4 * v7;
  v21 = 0;
  v298 = 2 << -(char)v2;
  v300 = v4;
  v22 = a2;
  v23 = 0x7FFFFFFF;
  v24 = 4 * v4 - 16;
  v25 = &MovieData_b1990[v7 + 1];
  do {
    v26 = v22[2];
    v27 = (int*)((char*)a2 + v24);
    v24 -= 16;
    v28 = *v27;
    v29 = v27[2];
    v30 = (((unsigned __int64)(v26 * (__int64)v23) >> 31) & 0xFFFFFFFE) -
          (((unsigned __int64)(*v22 * (__int64)v21) >> 31) & 0xFFFFFFFE);
    v31 = (((unsigned __int64)(v26 * (__int64)v21) >> 31) & 0xFFFFFFFE) +
          (((unsigned __int64)(*v22 * (__int64)v23) >> 31) & 0xFFFFFFFE);
    *v27 = v30;
    v27[2] = v31;
    v21 = *(v25 - 1);
    v23 = *v25;
    v25 = (int*)((char*)v25 + v20);
    *v22 = (((unsigned __int64)(v21 * (__int64)v29) >> 31) & 0xFFFFFFFE) -
           (((unsigned __int64)(v23 * (__int64)v28) >> 31) & 0xFFFFFFFE);
    v22[2] = (((unsigned __int64)(v23 * (__int64)v29) >> 31) & 0xFFFFFFFE) +
             (((unsigned __int64)(v21 * (__int64)v28) >> 31) & 0xFFFFFFFE);
    v22 += 4;
  } while (v27 - 4 >= v22);
  v296 = v20;
  v299 = v6;
  if ((unsigned int)(v2 + 13) >= 7) {
    v32 = a2 - 2;
    v33 = -v2;
    v34 = 0;
    do {
      if (v34 != 31) {
        v35 = 0;
        v36 = 4LL * ((int)v4 >> v34);
        v37 = (int)v4 >> v34 >> 1;
        v38 = (int)v4 >> v34 >> 2;
        v39 = &v32[(unsigned __int64)v36 / 4];
        v40 = &v32[v37];
        v41 = &a2[v38 - 4];
        v42 = &v32[v38 + v37];
        do {
          v43 = 0;
          v44 = v39;
          v45 = v40;
          do {
            v46 = *(v44 - 2);
            v47 = *(v44 - 1);
            v48 = v44[1];
            v49 = v47 + v46;
            v50 = *v44 + v48;
            v51 = v46 - v47;
            v52 = v48 - *v44;
            *(v44 - 2) = v49;
            *v44 = v50;
            v54 = *(v45 - 2);
            v53 = *(v45 - 1);
            v55 = v53 - v54;
            *(v44 - 1) = v54 + v53;
            v56 = v45[1];
            v57 = v56 - *v45;
            v44[1] = *v45 + v56;
            v58 = &MovieData_b1990[v43];
            v43 += 4 << (v33 + v34);
            v44 -= 4;
            v59 = *v58;
            LODWORD(v58) = v58[1];
            *(v45 - 2) =
                (((unsigned __int64)((int)v58 * (__int64)v51) >> 31) &
                 0xFFFFFFFE) +
                (((unsigned __int64)(v59 * (__int64)v52) >> 31) & 0xFFFFFFFE);
            *(v45 - 1) =
                (((unsigned __int64)((int)v58 * (__int64)v57) >> 31) &
                 0xFFFFFFFE) +
                (((unsigned __int64)(v59 * (__int64)v55) >> 31) & 0xFFFFFFFE);
            *v45 =
                (((unsigned __int64)(v59 * (__int64)v51) >> 31) & 0xFFFFFFFE) -
                (((unsigned __int64)((int)v58 * (__int64)v52) >> 31) &
                 0xFFFFFFFE);
            v45[1] =
                (((unsigned __int64)(v59 * (__int64)v57) >> 31) & 0xFFFFFFFE) -
                (((unsigned __int64)((int)v58 * (__int64)v55) >> 31) &
                 0xFFFFFFFE);
            v45 -= 4;
          } while (v43 < 1024);
          v60 = v42;
          v61 = v41;
          v62 = (int*)&MovieData_b2990;
          do {
            v63 = *(v60 - 2);
            v64 = *(v60 - 1);
            v65 = v60[1];
            v66 = v64 + v63;
            v67 = v65 + *v60;
            v68 = v63 - v64;
            v69 = *v60 - v65;
            *(v60 - 2) = v66;
            *v60 = v67;
            v70 = v61[1];
            v71 = *v61 - v70;
            *(v60 - 1) = v70 + *v61;
            v73 = v61[2];
            v72 = v61[3];
            v60[1] = v73 + v72;
            v60 -= 4;
            v74 = *v62;
            v75 = v62[1];
            v62 -= 4 << (v33 + v34);
            *v61 =
                (((unsigned __int64)(v74 * (__int64)v68) >> 31) & 0xFFFFFFFE) -
                (((unsigned __int64)(v75 * (__int64)v69) >> 31) & 0xFFFFFFFE);
            v61[1] =
                (((unsigned __int64)(v74 * (__int64)(v72 - v73)) >> 31) &
                 0xFFFFFFFE) -
                (((unsigned __int64)(v75 * (__int64)v71) >> 31) & 0xFFFFFFFE);
            v61[2] =
                (((unsigned __int64)(v75 * (__int64)v68) >> 31) & 0xFFFFFFFE) +
                (((unsigned __int64)(v74 * (__int64)v69) >> 31) & 0xFFFFFFFE);
            v61[3] =
                (((unsigned __int64)(v75 * (__int64)(v72 - v73)) >> 31) &
                 0xFFFFFFFE) +
                (((unsigned __int64)(v74 * (__int64)v71) >> 31) & 0xFFFFFFFE);
            v61 -= 4;
          } while (v62 > MovieData_b1990);
          ++v35;
          v40 = (int*)((char*)v40 + v36);
          v39 = (int*)((char*)v39 + v36);
          v41 = (int*)((char*)v41 + v36);
          v42 = (int*)((char*)v42 + v36);
        } while (v35 != 1 << v34);
      }
      ++v34;
    } while (v5 != v34);
  }
  v76 = v4;
  if ((int)v4 >= 1) {
    v77 = a2 + 16;
    v78 = 0;
    do {
      v79 = v77[1];
      v310 = v78;
      v81 = *(v77 - 12);
      v80 = *(v77 - 11);
      v82 = *v77 - v79;
      v309 = v79 + *v77;
      v83 = v77[2];
      v84 = v77[3];
      v85 = v83 - v84;
      v308 = v84 + v83;
      v87 = *(v77 - 16);
      v86 = *(v77 - 15);
      v88 = v86 - v87;
      v307 = v87 + v86;
      v90 = *(v77 - 14);
      v89 = *(v77 - 13);
      v91 = ((unsigned __int64)(821806413LL * v88) >> 31) & 0xFFFFFFFE;
      v92 = v89 - v90;
      v306 = v90 + v89;
      v93 = 821806413LL * (v89 - v90);
      v94 = v77[4];
      v95 = v77[5];
      v96 = ((unsigned __int64)(1984016189LL * v92) >> 31) & 0xFFFFFFFE;
      v97 = v94 - v95;
      v98 = ((v93 >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)(1984016189LL * v88) >> 31) & 0xFFFFFFFE);
      v305 = v95 + v94;
      v99 = v77[6];
      v100 = v77[7];
      v101 = v99 - v100;
      v304 = v100 + v99;
      v102 = (((unsigned __int64)(821806413LL * v82) >> 31) & 0xFFFFFFFE) -
             (((unsigned __int64)(1984016189LL * v85) >> 31) & 0xFFFFFFFE);
      v103 = (((unsigned __int64)(821806413LL * v85) >> 31) & 0xFFFFFFFE) +
             (((unsigned __int64)(1984016189LL * v82) >> 31) & 0xFFFFFFFE);
      v104 = v80 - v81;
      v105 = v96 - v91;
      v303 = v81 + v80;
      LODWORD(v93) = *(v77 - 10);
      v106 = *(v77 - 9);
      v107 = v106 - v93;
      v108 = v93 + v106;
      LODWORD(v93) = v101 + v97;
      v302 = v108;
      v109 = v97 - v101;
      v110 = v77[8];
      v111 = v77[9];
      v112 = v107 + v104;
      v301 = v109;
      v113 = (unsigned __int64)(1518500250LL * (v107 - v104)) >> 31;
      v114 = v110 - v111;
      v115 = v111 + v110;
      v116 = v77[10];
      v117 = v77[11];
      LODWORD(v113) = v113 & 0xFFFFFFFE;
      v118 = v116 - v117;
      v119 = v117 + v116;
      v121 = *(v77 - 8);
      v120 = *(v77 - 7);
      v122 = v120 - v121;
      v123 = v121 + v120;
      v125 = *(v77 - 6);
      v124 = *(v77 - 5);
      v126 = v124 - v125;
      v127 = v125 + v124;
      v128 = (((unsigned __int64)(1984016189LL * v114) >> 31) & 0xFFFFFFFE) -
             (((unsigned __int64)(821806413LL * v118) >> 31) & 0xFFFFFFFE);
      v129 = (((unsigned __int64)(1984016189LL * v118) >> 31) & 0xFFFFFFFE) +
             (((unsigned __int64)(821806413LL * v114) >> 31) & 0xFFFFFFFE);
      v130 = (((unsigned __int64)(1984016189LL * v126) >> 31) & 0xFFFFFFFE) +
             (((unsigned __int64)(821806413LL * v122) >> 31) & 0xFFFFFFFE);
      v131 = (((unsigned __int64)(821806413LL * v126) >> 31) & 0xFFFFFFFE) -
             (((unsigned __int64)(1984016189LL * v122) >> 31) & 0xFFFFFFFE);
      v132 = v77[12];
      v133 = v77[13];
      v134 = v129 - v131;
      v135 = v132 - v133;
      v136 = v133 + v132;
      v137 = v77[14];
      v138 = v77[15];
      v139 = v137 - v138;
      v140 = v138 + v137;
      v141 = *(v77 - 4);
      v142 = *(v77 - 3);
      v143 = v141 - v142;
      v144 = v142 + v141;
      v145 = *(v77 - 2);
      v146 = *(v77 - 1);
      v147 = v146 - v145;
      v148 = v145 + v146;
      v149 = v128 - v130;
      v150 = v130 + v128;
      v151 = v131 + v129;
      v152 = v98 - v102;
      v153 = v98 + v102;
      v154 = v105 - v103;
      v155 = v105 + v103;
      v156 = v135 - v147;
      v157 = v147 + v135;
      v158 = v149 - v134;
      v159 = v134 + v149;
      v160 = v154 + v152;
      v161 = v154 - v152;
      v162 = v139 - v143;
      v163 = v143 + v139;
      v164 = ((unsigned __int64)(1518500250LL * v112) >> 31) & 0xFFFFFFFE;
      v165 = ((unsigned __int64)(1518500250LL * v158) >> 31) & 0xFFFFFFFE;
      v166 = ((unsigned __int64)(1518500250LL * v160) >> 31) & 0xFFFFFFFE;
      v167 = ((unsigned __int64)(1518500250LL * v159) >> 31) & 0xFFFFFFFE;
      v168 = ((unsigned __int64)(1518500250LL * v161) >> 31) & 0xFFFFFFFE;
      v169 = ((unsigned __int64)(1518500250LL * v301) >> 31) & 0xFFFFFFFE;
      v170 = v169 - v164;
      v171 = v164 + v169;
      v172 = ((unsigned __int64)(1518500250LL * (int)v93) >> 31) & 0xFFFFFFFE;
      LODWORD(v93) = v113 - v172;
      v173 = v113 + v172;
      LODWORD(v113) = v165 + v166;
      v174 = v165 - v166;
      v175 = v167 + v168;
      v176 = v167 - v168;
      v177 = v156 + v93;
      v178 = v156 - v93;
      LODWORD(v93) = v162 + v170;
      v179 = v162 - v170;
      v180 = v176 + v178;
      v181 = v178 - v176;
      v182 = v157 + v171;
      v183 = v157 - v171;
      *(v77 - 14) = v181;
      *(v77 - 13) = v174 + v179;
      *(v77 - 16) = v180;
      *(v77 - 15) = v179 - v174;
      *(v77 - 12) = v177 - v113;
      *(v77 - 11) = v93 - v175;
      *(v77 - 10) = v113 + v177;
      *(v77 - 9) = v175 + v93;
      v184 = v150 + v153;
      v185 = v150 - v153;
      v186 = v151 + v155;
      v187 = v151 - v155;
      v188 = v163 + v173;
      v189 = v163 - v173;
      v190 = v183 + v187;
      v191 = v183 - v187;
      v192 = v115 - v123;
      *(v77 - 6) = v191;
      *(v77 - 5) = v189 + v185;
      *(v77 - 8) = v190;
      *(v77 - 7) = v189 - v185;
      *(v77 - 4) = v182 - v184;
      *(v77 - 3) = v188 - v186;
      *(v77 - 2) = v182 + v184;
      *(v77 - 1) = v188 + v186;
      v193 = v123 + v115;
      v194 = v127 + v119;
      v195 = v140 - v148 - (v305 - v303);
      v196 = v192 - (v119 - v127);
      v197 = 1518500250LL * (v119 - v127 + v192);
      v198 = v136 - v144 - (v302 - v304);
      v199 = ((unsigned __int64)(1518500250LL * v196) >> 31) & 0xFFFFFFFE;
      LODWORD(v197) = (v197 >> 31) & 0xFFFFFFFE;
      v200 = ((unsigned __int64)(1518500250LL * (v306 - v308 + v307 - v309)) >>
              31) &
             0xFFFFFFFE;
      v201 =
          ((unsigned __int64)(1518500250LL * (v306 - v308 - (v307 - v309))) >>
           31) &
          0xFFFFFFFE;
      LODWORD(v93) = v199 - v200;
      v202 = v197 - v201;
      v203 = v199 + v200;
      LODWORD(v197) = v197 + v201;
      v77[2] = v198 - v202;
      v77[3] = v195 + v93;
      v204 = v136 - v144 + v302 - v304;
      v205 = v140 - v148 + v305 - v303;
      *v77 = v198 + v202;
      v77[1] = v195 - v93;
      v206 = v204 - v203;
      v207 = v205 - v197;
      v208 = v204 + v203;
      v209 = v148 + v140 - (v302 + v304);
      v77[6] = v208;
      v77[7] = v205 + v197;
      LODWORD(v197) = v193 - (v307 + v309);
      v210 = v194 - (v306 + v308);
      v211 = v193 + v307 + v309;
      v212 = v194 + v306 + v308;
      v77[4] = v206;
      v77[5] = v207;
      v76 = v300;
      v77[10] = v144 + v136 - (v303 + v305) - v210;
      v77[11] = v209 + v197;
      v213 = v144 + v136 + v303 + v305;
      v214 = v148 + v140 + v302 + v304;
      v77[8] = v144 + v136 - (v303 + v305) + v210;
      v77[9] = v209 - v197;
      v77[14] = v213 + v211;
      v77[15] = v214 + v212;
      v77[12] = v213 - v211;
      v77[13] = v214 - v212;
      v77 += 32;
      v78 = v310 + 32;
    } while (v310 + 32 < v300);
  }
  v215 = 0;
  v216 = &a2[v76 - 2];
  do {
    v218 =
        &a2[(unsigned int)(MovieData_a2230[(unsigned __int64)v215 >> 8] |
                           (16 * MovieData_a2230[(unsigned __int8)v215 >> 4]) |
                           (MovieData_a2230[v215 & 0xF] << 8)) >>
            v297];
    if (v216 > v218) {
      v219 = *v218;
      *v218 = *v216;
      *v216 = v219;
      v220 = v218[1];
      v218[1] = v216[1];
      v216[1] = v220;
    }
    ++v215;
    v217 = v216 > a2;
    v216 -= 2;
  } while (v217);
  v221 = 0;
  v222 = v299;
  v223 = a2;
  v224 = (char*)&MovieData_b1990[(int)v298 >> 1];
  if ((int)v298 <= 3) {
    v224 = (char*)&MovieData_b2998;
  }
  do {
    v225 = &v224[v221 + 4];
    v227 = *(v222 - 2);
    v226 = *(v222 - 1);
    v222 -= 2;
    v228 = v223[1];
    v221 += v296;
    v229 = v227 + *v223;
    v231 = v225 - 4;
    LODWORD(v225) = *((_DWORD*)v225 - 1);
    v230 = *((_DWORD*)v231 + 1);
    v232 = v226 - v228;
    v233 = (v228 + v226) >> 1;
    v234 = (*v223 - v227) >> 1;
    v235 = ((unsigned __int64)((int)v225 * (__int64)v232) >> 32) +
           ((unsigned __int64)(v230 * (__int64)v229) >> 32);
    LODWORD(v225) = ((unsigned __int64)(v230 * (__int64)v232) >> 32) -
                    ((unsigned __int64)((int)v225 * (__int64)v229) >> 32);
    *v223 = v235 + v233;
    v223[1] = (_DWORD)v225 + v234;
    v223 += 2;
    *v222 = v233 - v235;
    v222[1] = (_DWORD)v225 - v234;
  } while (v221 < 4096);
  v236 = &v224[v221 - v296 + 4];
  do {
    v237 = *(v222 - 2);
    v238 = *(v222 - 1);
    v222 -= 2;
    v239 = v223[1];
    v240 = v237 + *v223;
    v241 = *((_DWORD*)v236 - 1);
    v242 = *(_DWORD*)v236;
    v243 = v238 - v239;
    v236 -= 4 * v298;
    v244 = v242 * (__int64)(v238 - v239);
    v245 = (v239 + v238) >> 1;
    v246 = (*v223 - v237) >> 1;
    result = (unsigned __int64)(v241 * (__int64)v243) >> 32;
    v248 = HIDWORD(v244) + ((unsigned __int64)(v241 * (__int64)v240) >> 32);
    v249 = result - ((unsigned __int64)(v242 * (__int64)v240) >> 32);
    *v223 = v248 + v245;
    v223[1] = v249 + v246;
    v223 += 2;
    *v222 = v245 - v248;
    v222[1] = v249 - v246;
  } while (v223 < v222);
  v250 = (int)v298 >> 2;
  if ((int)v298 >> 2 == 1) {
    v273 = 0x3FFFFFFF;
    v274 = (int*)&MovieData_b1998;
    v275 = (int*)&MovieData_b2998;
    v276 = 0;
    do {
      v277 = *v275;
      v278 = v275[1];
      v275 += 2;
      v279 = a2[1];
      v277 >>= 1;
      v278 >>= 1;
      v280 = v277 + v276;
      v281 = v278 + v273;
      v282 = *a2 * v281;
      v283 = -(v279 * v281);
      LODWORD(v282) = (((unsigned __int64)-(v279 * v280) >> 31) & 0xFFFFFFFE) -
                      ((v282 >> 31) & 0xFFFFFFFE);
      v284 = a2[2];
      v285 = a2[3];
      *a2 = ((v283 >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)(*a2 * v280) >> 31) & 0xFFFFFFFE);
      a2[1] = v282;
      v286 = *v274;
      LODWORD(v282) = v274[1];
      v274 += 2;
      v276 = v286 >> 1;
      v273 = (int)v282 >> 1;
      v287 = v273 + v278;
      v288 = v276 + v277;
      a2[2] = (((unsigned __int64)-(v285 * v287) >> 31) & 0xFFFFFFFE) +
              (((unsigned __int64)(v284 * v288) >> 31) & 0xFFFFFFFE);
      a2[3] = (((unsigned __int64)-(v285 * v288) >> 31) & 0xFFFFFFFE) -
              (((unsigned __int64)(v284 * (__int64)v287) >> 31) & 0xFFFFFFFE);
      a2 += 4;
    } while (a2 < v299);
  }
  else if (v250 != 0) {
    v217 = v250 <= 3;
    v289 = 4LL * v250;
    v290 = (char*)&MovieData_b1990[(int)v298 >> 3];
    if (v217) {
      v290 = (char*)&MovieData_b2998;
    }
    v291 = (int*)(v290 + 4);
    do {
      v292 = a2[1];
      v293 = *(v291 - 1);
      v294 = *v291;
      v291 = (int*)((char*)v291 + v289);
      v295 =
          (((unsigned __int64)-(v292 * v293) >> 31) & 0xFFFFFFFE) -
          (((unsigned __int64)((int)v294 * (__int64)*a2) >> 31) & 0xFFFFFFFE);
      *a2 = (((unsigned __int64)-(v292 * v294) >> 31) & 0xFFFFFFFE) +
            (((unsigned __int64)((int)v293 * (__int64)*a2) >> 31) & 0xFFFFFFFE);
      a2[1] = v295;
      a2 += 2;
    } while (a2 < v299);
  }
  else {
    v251 = 0x7FFFFFFF;
    v252 = (int*)&MovieData_b1998;
    v253 = (int*)&MovieData_b2998;
    do {
      v255 = *v253;
      v254 = v253[1];
      v253 += 2;
      v256 = a2[1];
      v257 = (v255 - v250) >> 2;
      v258 = (v254 - v251) >> 2;
      v259 = v257 + v250;
      v260 = v258 + v251;
      v261 = *a2 * v260;
      result = ((unsigned __int64)-(v256 * v260) >> 31) & 0xFFFFFFFE;
      *a2 = result + (((unsigned __int64)(*a2 * v259) >> 31) & 0xFFFFFFFE);
      a2[1] = (((unsigned __int64)-(v256 * v259) >> 31) & 0xFFFFFFFE) -
              ((v261 >> 31) & 0xFFFFFFFE);
      v262 = v255 - v257;
      LODWORD(v261) = v254 - v258;
      v263 = a2[2];
      v264 = a2[3];
      v265 = v262;
      v266 = (((unsigned __int64)-(v264 * (int)v261) >> 31) & 0xFFFFFFFE) +
             (((unsigned __int64)(v263 * (__int64)v262) >> 31) & 0xFFFFFFFE);
      LODWORD(v261) =
          (((unsigned __int64)-(v264 * v265) >> 31) & 0xFFFFFFFE) -
          (((unsigned __int64)(v263 * (__int64)(int)v261) >> 31) & 0xFFFFFFFE);
      LODWORD(v265) = a2[4];
      v267 = a2[5];
      a2[2] = v266;
      a2[3] = v261;
      v250 = *v252;
      v251 = v252[1];
      v252 += 2;
      LODWORD(v264) = (v251 - v254) >> 2;
      v268 = (v250 - v255) >> 2;
      v269 = (((unsigned __int64)-(v267 * ((int)v264 + v254)) >> 31) &
              0xFFFFFFFE) +
             (((unsigned __int64)((int)v265 * (__int64)(v268 + v255)) >> 31) &
              0xFFFFFFFE);
      v270 = v250 - v268;
      v271 = v251 - v264;
      LODWORD(v264) = a2[6];
      v272 = a2[7];
      a2[4] = v269;
      a2[5] =
          (((unsigned __int64)-(v272 * v271) >> 31) & 0xFFFFFFFE) +
          (((unsigned __int64)((int)v264 * (__int64)v270) >> 31) & 0xFFFFFFFE);
      a2[6] =
          (((unsigned __int64)-(v272 * v270) >> 31) & 0xFFFFFFFE) -
          (((unsigned __int64)((int)v264 * (__int64)v271) >> 31) & 0xFFFFFFFE);
      a2 += 8;
    } while (a2 < v299);
  }
  return result;
}

__int64 MovieHr_7de20(__int64 result, __int64 a2, __int64 a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _DWORD* v11;
  int* v12;
  int v13;

  v3 = (int)result >> 2;
  if ((int)result >> 2 >= 1) {
    v4 = v3 & 7;
    if (v3 < 8) {
      v5 = 0;
      if (v4 == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v6 = (_DWORD*)(a3 + 16);
    v7 = (_DWORD*)(a2 + 36);
    v8 = 0;
    v9 = -(__int64)(v3 & 0x7FFFFFF8);
    do {
      v8 -= 8;
      *(v6 - 4) = *(v7 - 8);
      *(v6 - 3) = *(v7 - 6);
      *(v6 - 2) = *(v7 - 4);
      *(v6 - 1) = *(v7 - 2);
      *v6 = *v7;
      v6[1] = v7[2];
      v6[2] = v7[4];
      v10 = v7[6];
      v7 += 16;
      v6[3] = v10;
      v6 += 8;
    } while (v9 != v8);
    v5 = -v8;
    if (v4 != 0) {
    LABEL_8:
      v11 = (_DWORD*)(a3 + 4 * v5);
      v12 = (int*)(a2 + 8 * v5 + 4);
      do {
        v13 = *v12;
        v12 += 2;
        --v4;
        *v11++ = v13;
      } while (v4 != 0);
    }
  }
  return result;
}

__int64 MovieHr_7dee0(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6,
                      __int64 a7, __int64 a8, _WORD* a9, int a10, int a11,
                      int a12)
{
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v18;
  _BOOL4 v19;
  int v20;
  _BOOL4 v21;
  int v22;
  bool v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  unsigned __int64 v33;
  int v34;
  int v35;
  int v36;
  __int16 v37;
  __int16 v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  unsigned __int64 v54;
  int v55;
  __int16 v56;
  __int16 v57;
  int v58;
  __int64 result;
  int* v60;
  unsigned __int64 v61;
  int* v62;
  int* v63;
  int* v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  __int16 v73;
  __int16 v74;
  int v75;
  int v76;
  int v77;
  int* v78;
  int* v79;
  int v80;
  int v81;
  __int16 v82;
  __int16 v83;

  v12 = a2 >> 1;
  v13 = a2 >> 2;
  v14 = a1 >> 2;
  v15 = a12;
  v16 = a11;
  v18 = a1 >> 1;
  v19 = a4 != 0;
  v20 = v13 - (a1 >> 2);
  v21 = a3 != 0;
  if (a3 != 0) {
    v22 = v13;
  }
  else {
    v22 = a1 >> 2;
  }
  v23 = !v21 || !v19;
  v24 = a6 + 4LL * v22;
  if (v21 && v19) {
    v25 = v12;
  }
  else {
    v25 = v18;
  }
  v26 = a5 + 4LL * v25;
  v27 = a8 + 4LL * v12;
  v28 = a7 + 4LL * v18;
  if (v23) {
    v29 = a7;
  }
  else {
    v29 = a8;
  }
  if (v23) {
    v30 = v14;
  }
  else {
    v28 = v27;
    v30 = v13;
  }
  if (a3 == 0 && v19) {
    v31 = v20;
  }
  else {
    v31 = 0;
  }
  if (a3 != 0 && v13 != v14 && a4 == 0) {
    if (a12 >= v20) {
      v32 = v20;
    }
    else {
      v32 = a12;
    }
    if (a11 < v20) {
      v20 = a11;
    }
    v15 = a12 - v32;
    v33 = v24 - 4LL * v20;
    v34 = a11 - v20;
    if (a11 < v32) {
      do {
        v35 = *(_DWORD*)(v33 - 4);
        v33 -= 4LL;
        v36 = v35 >> 9;
        if (v35 >> 9 < 0x8000) {
          v37 = 0x7FFF;
        }
        else {
          v37 = v36;
        }
        if (v36 >= -32768) {
          v38 = 0x8000;
        }
        else {
          v38 = v36;
        }
        *a9 = v36 + ~(v37 + v38);
        a9 += a10;
      } while (v33 > v24 - 4LL * v32);
    }
    v24 = v33;
    v16 = v34;
  }
  if (v15 >= v30) {
    v39 = v30;
  }
  else {
    v39 = v15;
  }
  if (v16 >= v30) {
    v40 = v30;
  }
  else {
    v40 = v16;
  }
  v41 = v15 - v39;
  v42 = 4LL * v40;
  v43 = v26 - 8LL * v40;
  v44 = v24 - v42;
  v45 = v16 - v40;
  v46 = v28 - v42;
  v47 = v29 + v42;
  if (v16 < v39) {
    v48 = v24 - 4LL * v39;
    v49 = 0;
    v50 = 0;
    do {
      v51 = v44 + v49;
      v52 = v46 + v49;
      v53 = *(_DWORD*)(v43 - 8);
      v43 -= 8;
      v49 -= 4;
      v54 = *(int*)(v52 - 4) * (__int64)*(int*)(v51 - 4);
      LODWORD(v52) = *(_DWORD*)(v47 + v50);
      v50 += 4;
      v55 = (int)((((unsigned __int64)((int)v52 * (__int64)v53) >> 31) &
                   0xFFFFFFFE) +
                  (v54 >> 31)) >>
            9;
      if (v55 < 0x8000) {
        v56 = 0x7FFF;
      }
      else {
        v56 = v55;
      }
      if (v55 >= -32768) {
        v57 = 0x8000;
      }
      else {
        v57 = v55;
      }
      *a9 = v55 + ~(v56 + v57);
      a9 += a10;
    } while (v44 + v49 > v48);
    v47 -= v49;
    v46 += v49;
    v44 += v49;
  }
  if (v41 >= v30) {
    v58 = v30;
  }
  else {
    v58 = v41;
  }
  if (v45 >= v30) {
    result = (unsigned int)v30;
  }
  else {
    result = (unsigned int)v45;
  }
  v60 = (int*)(v43 + 8LL * (int)result);
  if (v45 < v58) {
    v61 = v44 + 4LL * v58;
    v62 = (int*)(v44 + 4LL * (int)result);
    v63 = (int*)(v47 + 4LL * (int)result);
    v64 = (int*)(v46 - 4LL * (int)result - 4);
    do {
      v66 = *v62++;
      v65 = v66;
      v68 = *v64--;
      v67 = v68;
      v70 = *v63++;
      v69 = v70;
      v71 = *v60;
      v60 += 2;
      v72 = (int)(((unsigned __int64)(v67 * (__int64)v65) >> 31) -
                  (((unsigned __int64)(v69 * (__int64)v71) >> 31) &
                   0xFFFFFFFE)) >>
            9;
      if (v72 < 0x8000) {
        v73 = 0x7FFF;
      }
      else {
        v73 = v72;
      }
      if (v72 >= -32768) {
        v74 = 0x8000;
      }
      else {
        v74 = v72;
      }
      *a9 = v72 + ~(v73 + v74);
      a9 += a10;
    } while ((unsigned __int64)v62 < v61);
  }
  if (v31 != 0) {
    v75 = v45 - result;
    v76 = v41 - v58;
    if (v41 - v58 >= v31) {
      v76 = v31;
    }
    if (v75 < v31) {
      v31 = v75;
    }
    v77 = 2 * v31;
    if (2 * v31 < 2 * v76) {
      v78 = &v60[2 * v76];
      v79 = &v60[v77];
      do {
        v80 = *v79;
        v79 += 2;
        v81 = -v80 >> 9;
        if (v81 < 0x8000) {
          v82 = 0x7FFF;
        }
        else {
          v82 = v81;
        }
        if (v81 >= -32768) {
          v83 = 0x8000;
        }
        else {
          v83 = v81;
        }
        *a9 = v81 + ~(v82 + v83);
        a9 += a10;
      } while (v79 < v78);
    }
  }
  return result;
}

__int64 MovieHr_7e1c0(__int64 result)
{
  _QWORD* v1;
  __int64 v2;

  if (result != 0) {
    v1 = (_QWORD*)result;
    v2 = *(_QWORD*)(result + 8);
    if (v2 != 0) {
      MovieRoutine_84660(v2);
    }
    result = v1[2];
    if (result != 0) {
      result = MovieRoutine_84660(result);
    }
    v1[4] = 0;
    v1[5] = 0;
    v1[2] = 0;
    v1[3] = 0;
    *v1 = 0;
    v1[1] = 0;
  }
  return result;
}

__int64 MovieHr_7f430(_QWORD* a1)
{
  __int64 result;

  a1[5] = 0;
  a1[6] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  result = MovieRoutine_84760(1, 88);
  a1[6] = result;
  return result;
}

__int64 MovieHr_7f480(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = *(_QWORD*)(result + 48);
  v2 = (_QWORD*)result;
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 40);
    if (v3 != 0) {
      MovieRoutine_84660(v3);
    }
    v4 = *(_QWORD*)(v1 + 48);
    if (v4 != 0) {
      if (*(int*)(v1 + 20) >= 1) {
        v5 = 0;
        v6 = 0;
        do {
          MovieRoutine_7c120(*(_QWORD*)(v1 + 48) + v5);
          ++v6;
          v5 += 40;
        } while (v6 < *(int*)(v1 + 20));
        v4 = *(_QWORD*)(v1 + 48);
      }
      MovieRoutine_84660(v4);
    }
    v7 = *(_QWORD*)(v1 + 64);
    if (v7 != 0) {
      if (*(int*)(v1 + 24) >= 1) {
        v8 = 0;
        do {
          while (1) {
            v9 = *(_QWORD**)(*(_QWORD*)(v1 + 64) + 8 * v8);
            if (*(_BYTE*)(*(_QWORD*)(v1 + 56) + v8) != 0) {
              break;
            }
            MovieRoutine_82440(v9);
            if (++v8 >= *(int*)(v1 + 24)) {
              goto LABEL_16;
            }
          }
          MovieRoutine_7ac60(v9);
          ++v8;
        } while (v8 < *(int*)(v1 + 24));
      LABEL_16:
        v7 = *(_QWORD*)(v1 + 64);
      }
      MovieRoutine_84660(v7);
      MovieRoutine_84660(*(_QWORD*)(v1 + 56));
    }
    v10 = *(_QWORD*)(v1 + 72);
    if (v10 != 0) {
      if (*(int*)(v1 + 28) >= 1) {
        v11 = 0;
        v12 = 0;
        do {
          MovieRoutine_7e1c0(*(_QWORD*)(v1 + 72) + v11);
          ++v12;
          v11 += 48;
        } while (v12 < *(int*)(v1 + 28));
        v10 = *(_QWORD*)(v1 + 72);
      }
      MovieRoutine_84660(v10);
    }
    v13 = *(_QWORD*)(v1 + 80);
    if (v13 != 0) {
      if (*(int*)(v1 + 32) >= 1) {
        v14 = 0;
        v15 = 0;
        do {
          MovieRoutine_7fc30(*(_QWORD*)(v1 + 80) + v14);
          ++v15;
          v14 += 104;
        } while (v15 < *(int*)(v1 + 32));
        v13 = *(_QWORD*)(v1 + 80);
      }
      MovieRoutine_84660(v13);
    }
    result = MovieRoutine_84660(v1);
  }
  v2[5] = 0;
  v2[6] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v2 = 0;
  return result;
}

__int64 MovieHr_7f620(__int64 a1, __int64 a2)
{
  __int64* v2;
  int v5;
  int v7;
  __int64 v8;
  __int64 v9;
  bool v11;

  v2 = *(__int64**)(a1 + 48);
  if (v2 == nullptr) {
    return 4294967167LL;
  }
  v5 = MovieRoutine_7a3c0(a2, 32);
  *(_DWORD*)a1 = v5;
  if (v5 != 0) {
    return 4294967162LL;
  }
  *(_DWORD*)(a1 + 4) = MovieRoutine_7a3c0(a2, 8);
  *(_QWORD*)(a1 + 8) = MovieRoutine_7a3c0(a2, 32);
  *(_QWORD*)(a1 + 16) = MovieRoutine_7a3c0(a2, 32);
  *(_QWORD*)(a1 + 24) = MovieRoutine_7a3c0(a2, 32);
  *(_QWORD*)(a1 + 32) = MovieRoutine_7a3c0(a2, 32);
  *v2 = 1 << MovieRoutine_7a3c0(a2, 4);
  v7 = 1 << MovieRoutine_7a3c0(a2, 4);
  v8 = v7;
  v2[1] = v7;
  v9 = *(_QWORD*)(a1 + 8);
  v11 = v9 < 64000 && v7 > 4096;
  if (v9 >= 1 && !v11 && *(int*)(a1 + 4) >= 1 && *v2 >= 64 &&
      (int)v8 <= 0x2000 && *v2 <= v8 && MovieRoutine_7a3c0(a2, 1) == 1) {
    return 0;
  }
  MovieRoutine_7f480(a1);
  return 4294967163LL;
}

__int64 MovieHr_7f7a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v2 = *(_QWORD*)(a1 + 48);
  if (v2 == 0) {
    return 4294967167LL;
  }
  v5 = MovieRoutine_7a3c0(a2, 8);
  *(_DWORD*)(v2 + 32) = v5 + 1;
  v6 = MovieRoutine_84760(v5 + 1, 104);
  *(_QWORD*)(v2 + 80) = v6;
  if (v6 != 0) {
    if (*(int*)(v2 + 32) < 1) {
    LABEL_7:
      v9 = MovieRoutine_7a3c0(a2, 6);
      if (v9 < 0) {
      LABEL_11:
        v11 = MovieRoutine_7a3c0(a2, 6);
        *(_DWORD*)(v2 + 24) = v11 + 1;
        *(_QWORD*)(v2 + 64) = MovieRoutine_84760(v11 + 1, 8);
        v12 = MovieRoutine_84760(*(int*)(v2 + 24), 1);
        v13 = *(_QWORD*)(v2 + 64);
        *(_QWORD*)(v2 + 56) = v12;
        if (v13 != 0 && v12 != 0) {
          if (*(int*)(v2 + 24) < 1) {
          LABEL_21:
            v15 = MovieRoutine_7a3c0(a2, 6);
            *(_DWORD*)(v2 + 28) = v15 + 1;
            v16 = MovieRoutine_84760(v15 + 1, 48);
            *(_QWORD*)(v2 + 72) = v16;
            if (v16 != 0) {
              if (*(int*)(v2 + 28) < 1) {
              LABEL_26:
                v19 = MovieRoutine_7a3c0(a2, 6);
                *(_DWORD*)(v2 + 20) = v19 + 1;
                v20 = MovieRoutine_84760(v19 + 1, 40);
                *(_QWORD*)(v2 + 48) = v20;
                if (v20 != 0) {
                  if (*(int*)(v2 + 20) < 1) {
                  LABEL_32:
                    v23 = MovieRoutine_7a3c0(a2, 6);
                    *(_DWORD*)(v2 + 16) = v23 + 1;
                    v24 = MovieRoutine_84760(v23 + 1, 2);
                    *(_QWORD*)(v2 + 40) = v24;
                    if (v24 != 0) {
                      if (*(int*)(v2 + 16) < 1) {
                      LABEL_39:
                        if (MovieRoutine_7a3c0(a2, 1) == 1) {
                          return 0;
                        }
                      }
                      else {
                        v25 = 0;
                        v26 = 0;
                        while (1) {
                          *(_BYTE*)(*(_QWORD*)(v2 + 40) + v25) =
                              MovieRoutine_7a3c0(a2, 1);
                          if (MovieRoutine_7a3c0(a2, 16) != 0) {
                            break;
                          }
                          if (MovieRoutine_7a3c0(a2, 16) != 0) {
                            break;
                          }
                          *(_BYTE*)(*(_QWORD*)(v2 + 40) + v25 + 1) =
                              MovieRoutine_7a3c0(a2, 8);
                          if (*(_DWORD*)(v2 + 20) <=
                              (int)*(unsigned __int8*)(*(_QWORD*)(v2 + 40) +
                                                       v25 + 1)) {
                            break;
                          }
                          ++v26;
                          v25 += 2;
                          if (v26 >= *(int*)(v2 + 16)) {
                            goto LABEL_39;
                          }
                        }
                      }
                    }
                    else {
                      *(_DWORD*)(v2 + 16) = 0;
                    }
                  }
                  else {
                    v21 = 0;
                    v22 = 0;
                    while (MovieRoutine_7a3c0(a2, 16) == 0 &&
                           (unsigned int)MovieRoutine_7c180(
                               (_QWORD*)(*(_QWORD*)(v2 + 48) + v21), a1, a2) ==
                               0) {
                      ++v22;
                      v21 += 40;
                      if (v22 >= *(int*)(v2 + 20)) {
                        goto LABEL_32;
                      }
                    }
                  }
                }
                else {
                  *(_DWORD*)(v2 + 20) = 0;
                }
              }
              else {
                v17 = 0;
                v18 = 0;
                while ((unsigned int)MovieRoutine_7e220(
                           *(_QWORD*)(v2 + 72) + v17, a1, a2) == 0) {
                  ++v18;
                  v17 += 48;
                  if (v18 >= *(int*)(v2 + 28)) {
                    goto LABEL_26;
                  }
                }
              }
            }
            else {
              *(_DWORD*)(v2 + 28) = 0;
            }
          }
          else {
            v14 = 0;
            while (1) {
              *(_BYTE*)(*(_QWORD*)(v2 + 56) + v14) = MovieRoutine_7a3c0(a2, 16);
              if (*(unsigned __int8*)(*(_QWORD*)(v2 + 56) + v14) > 1u) {
                break;
              }
              if (*(_BYTE*)(*(_QWORD*)(v2 + 56) + v14) != 0) {
                *(_QWORD*)(*(_QWORD*)(v2 + 64) + 8 * v14) =
                    MovieRoutine_7ad00(a1, a2);
                if (*(_QWORD*)(*(_QWORD*)(v2 + 64) + 8 * v14) == 0) {
                  break;
                }
              }
              else {
                *(_QWORD*)(*(_QWORD*)(v2 + 64) + 8 * v14) =
                    MovieRoutine_82460(a1, a2);
                if (*(_QWORD*)(*(_QWORD*)(v2 + 64) + 8 * v14) == 0) {
                  break;
                }
              }
              if (++v14 >= *(int*)(v2 + 24)) {
                goto LABEL_21;
              }
            }
          }
        }
        else {
          *(_DWORD*)(v2 + 24) = 0;
        }
      }
      else {
        v10 = v9 + 1;
        while (MovieRoutine_7a3c0(a2, 16) == 0) {
          if (--v10 < 1) {
            goto LABEL_11;
          }
        }
      }
    }
    else {
      v7 = 0;
      v8 = 0;
      while ((unsigned int)MovieRoutine_7fca0(a2, *(_QWORD*)(v2 + 80) + v7) ==
             0) {
        ++v8;
        v7 += 104;
        if (v8 >= *(int*)(v2 + 32)) {
          goto LABEL_7;
        }
      }
    }
  }
  else {
    *(_DWORD*)(v2 + 32) = 0;
  }
  MovieRoutine_7f480(a1);
  return 4294967163LL;
}

__int64 MovieHr_7fc30(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = a1[8];
  if (v2 != 0) {
    MovieRoutine_84660(v2);
  }
  v3 = a1[1];
  if (v3 != 0) {
    MovieRoutine_84660(v3);
  }
  result = a1[10];
  if (result != 0) {
    result = MovieRoutine_84660(result);
  }
  a1[11] = 0;
  a1[12] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  return result;
}

__int64 MovieHr_80560(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int a5)
{
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;

  if (a2 == 0) {
    return 1;
  }
  if (*(_DWORD*)(a1 + 88) != 4) {
    if (*(__int64*)(a1 + 72) > 0xFFFFFFF) {
      return 1;
    }
    v11 = 1;
    v12 = MovieRoutine_84760((2LL * *(_QWORD*)(a1 + 96)) | 1, 4);
    if (v12 == 0) {
      return v11;
    }
    v13 = v12;
    if ((unsigned int)MovieRoutine_813e0(a2, *(_QWORD*)(a1 + 96), v12, a3, a1,
                                         a4, a5) != 0 ||
        (v14 = *(_QWORD*)(a1 + 72), v15 = *(int*)(a1 + 92) + 1LL,
         v14 > 0x7FFFFFFF / (int)v15) ||
        (v16 = *(int*)(a1 + 88), v17 = v14 * v15, (_DWORD)v16 != 0) &&
            v17 > 0x7FFFFFFF / (int)v16 ||
        (v18 = MovieRoutine_84650((v17 - 2) * v16), *(_QWORD*)(a1 + 8) = v18,
         v18 == 0)) {
      MovieRoutine_84660(v13);
      return 1;
    }
    if (*(_DWORD*)(a1 + 92) == 1) {
      v19 = *(_DWORD*)(a1 + 88);
      if (v19 == 1) {
        if (*(__int64*)(a1 + 72) >= 2) {
          v41 = 0;
          do {
            *(_BYTE*)(*(_QWORD*)(a1 + 8) + v41) =
                *(_DWORD*)(v13 + 4 * v41) | ((*(int*)(v13 + 4 * v41) < 0) << 7);
            ++v41;
          } while (2LL * *(_QWORD*)(a1 + 72) - 2 > v41);
        }
      }
      else if (v19 == 2 && *(__int64*)(a1 + 72) >= 2) {
        v20 = 0;
        do {
          *(_WORD*)(*(_QWORD*)(a1 + 8) + 2 * v20) =
              *(_DWORD*)(v13 + 4 * v20) |
              (*(_DWORD*)(v13 + 4 * v20) >> 31 << 15);
          ++v20;
        } while (2LL * *(_QWORD*)(a1 + 72) - 2 > v20);
      }
      goto LABEL_48;
    }
    v22 = *(_QWORD*)(a1 + 72);
    v23 = 3 * v22 - 2;
    v24 = (unsigned int)(2 * v22 - 4);
    if (*(_DWORD*)(a1 + 88) == 1) {
      if ((v24 & 0x80000000) == 0) {
        v25 = v24 + 2;
        v26 = v13 + 4LL * (unsigned int)v24 + 4;
        do {
          v27 = *(unsigned int*)(v26 - 4);
          v28 = *(_DWORD*)v26;
          if ((v27 & 0x80000000) != 0) {
            v31 = ((unsigned int)v27 >> 8) | 0xFFFFFF80;
            if (v28 < 0) {
              v30 = v18 + v23;
              v23 -= 4;
              *(_BYTE*)(v18 + v23) = v31;
              *(_BYTE*)(v30 - 3) = *(_BYTE*)(v26 + 1) | 0x80;
              v29 = *(_DWORD*)(v26 - 4);
              goto LABEL_33;
            }
            v32 = v18 + v23;
            v23 -= 3;
            *(_BYTE*)(v18 + v23) = v31;
            *(_BYTE*)(v32 - 2) =
                *(_DWORD*)(v13 + 4LL * (unsigned int)(2 * *(_DWORD*)v26));
            *(_BYTE*)(v32 - 1) = *(_DWORD*)(v26 - 4);
          }
          else {
            v29 = *(_DWORD*)(v13 + 8 * v27);
            if (v28 < 0) {
              v30 = v18 + v23;
              v23 -= 3;
              *(_BYTE*)(v18 + v23) = v29;
              LOBYTE(v29) = *(_BYTE*)(v26 + 1) | 0x80;
            LABEL_33:
              *(_BYTE*)(v30 - 2) = v29;
              *(_BYTE*)(v30 - 1) = *(_DWORD*)v26;
              goto LABEL_26;
            }
            *(_BYTE*)(v18 + v23 - 2) = v29;
            *(_BYTE*)(v18 - 1 + v23) =
                *(_DWORD*)(v13 + 4LL * (unsigned int)(2 * *(_DWORD*)v26));
            v23 -= 2;
          }
        LABEL_26:
          *(_DWORD*)(v26 - 4) = v23;
          v25 -= 2;
          v26 -= 8;
        } while (v25 > 1);
      }
    LABEL_48:
      MovieRoutine_84660(v13);
      return 0;
    }
    if ((v24 & 0x80000000) != 0) {
      goto LABEL_48;
    }
    v33 = v24 + 2;
    v34 = v13 + 4LL * (unsigned int)v24 + 4;
    while (1) {
      v35 = *(unsigned int*)(v34 - 4);
      v36 = *(_DWORD*)v34;
      if ((v35 & 0x80000000) != 0) {
        v39 = WORD1(v35);
        if (v36 < 0) {
          v38 = v18 + 2 * v23;
          v23 -= 4;
          *(_WORD*)(v18 + 2 * v23) = v39;
          *(_WORD*)(v38 - 6) = *(_WORD*)(v34 + 2) | 0x8000;
          v37 = *(_DWORD*)(v34 - 4);
          goto LABEL_44;
        }
        v40 = v18 + 2 * v23;
        v23 -= 3;
        *(_WORD*)(v18 + 2 * v23) = v39;
        *(_WORD*)(v40 - 4) =
            *(_DWORD*)(v13 + 4LL * (unsigned int)(2 * *(_DWORD*)v34));
        *(_WORD*)(v40 - 2) = *(_DWORD*)(v34 - 4);
      }
      else {
        v37 = *(_DWORD*)(v13 + 8 * v35);
        if (v36 < 0) {
          v38 = v18 + 2 * v23;
          v23 -= 3;
          *(_WORD*)(v18 + 2 * v23) = v37;
          LOWORD(v37) = *(_WORD*)(v34 + 2) | 0x8000;
        LABEL_44:
          *(_WORD*)(v38 - 4) = v37;
          *(_WORD*)(v38 - 2) = *(_DWORD*)v34;
          goto LABEL_37;
        }
        *(_WORD*)(v18 + 2 * (v23 - 2)) = v37;
        *(_WORD*)(v18 - 2 + 2 * v23) =
            *(_DWORD*)(v13 + 4LL * (unsigned int)(2 * *(_DWORD*)v34));
        v23 -= 2;
      }
    LABEL_37:
      *(_DWORD*)(v34 - 4) = v23;
      v33 -= 2;
      v34 -= 8;
      if (v33 <= 1) {
        goto LABEL_48;
      }
    }
  }
  v10 = MovieRoutine_84650((8LL * *(_QWORD*)(a1 + 96)) | 4);
  *(_QWORD*)(a1 + 8) = v10;
  if (v10 == 0) {
    return 1;
  }
  return (unsigned int)MovieRoutine_813e0(a2, *(_QWORD*)(a1 + 96), v10, a3, a1,
                                          a4, a5) != 0;
}

__int64 MovieHr_80920(__int64 a1, __int64 a2)
{
  if (*(_DWORD*)(a1 + 20) != 0) {
    return -1;
  }
  else {
    return (unsigned int)MovieRoutine_80960(a1, a2);
  }
}

__int64 MovieHr_80960(__int64 a1, int* a2)
{
  int v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  int v7;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int16 v31;
  __int64 v32;
  unsigned int v33;

  v2 = *(_DWORD*)a1;
  v5 = MovieRoutine_7a0b0(a2, *(_DWORD*)a1);
  v6 = v5 >> 63;
  if ((v5 & 0x8000000000000000LL) == 0) {
    v7 = v2;
    goto LABEL_10;
  }
  if (v2 < 2) {
    v7 = v2;
  }
  else {
    do {
      v7 = v2 - 1;
      v5 = MovieRoutine_7a0b0(a2, v2 - 1);
      v6 = v5 >> 63;
      if ((v5 & 0x8000000000000000LL) == 0) {
        break;
      }
    } while ((unsigned int)v2-- > 2);
  }
  if ((v6 & 1) == 0) {
  LABEL_10:
    v11 = *(_DWORD*)(a1 + 16);
    if (v11 <= 1) {
      if (v11 != 0) {
        if (v11 != 1) {
          goto LABEL_49;
        }
        if (v7 >= 1) {
          v15 = *(_QWORD*)(a1 + 8);
          v16 = 0;
          v14 = 0;
          while (1) {
            v17 = (v5 >> v14) & 1;
            v18 = v17 + v16;
            if (*(char*)(v15 + v18) < 0) {
              break;
            }
            ++v14;
            v16 = *(unsigned __int8*)(v15 + v18);
            if (v7 == v14) {
              goto LABEL_64;
            }
          }
          v31 = *(unsigned __int8*)(v15 + v18) << 8;
          v32 = (unsigned int)(v18 + 1);
          if ((_DWORD)v17 != 0) {
            v33 = *(unsigned __int8*)(v15 + v16) >> 7;
          }
          else {
            v33 = 1;
          }
          v9 = v31 & 0x7FFF | *(unsigned __int8*)(v15 + v32 + v33);
          if (v14 >= v7) {
            goto LABEL_64;
          }
          goto LABEL_61;
        }
        LODWORD(v14) = 0;
        v9 = 0;
        if (v7 > 0LL) {
          goto LABEL_61;
        }
        goto LABEL_64;
      }
      v12 = v7;
      if (v7 >= 1) {
        v25 = *(_QWORD*)(a1 + 8);
        v26 = 0;
        v14 = 0;
        while (1) {
          v27 = *(char*)(v25 + ((v5 >> v14) & 1) + 2LL * v26);
          v26 = *(unsigned __int8*)(v25 + ((v5 >> v14) & 1) + 2LL * v26);
          if (v27 < 0) {
            break;
          }
          if (v7 == ++v14) {
            v14 = v7;
            break;
          }
        }
        v9 = v26 & 0x7F;
        if (v14 >= v7) {
          goto LABEL_64;
        }
        goto LABEL_61;
      }
    }
    else {
      if (v11 != 2) {
        if (v11 != 3) {
          if (v11 == 4) {
            v12 = v7;
            if (v7 >= 1) {
              v13 = 0;
              v14 = 0;
              while (1) {
                v13 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 4 * ((v5 >> v14) & 1) +
                                 4LL * (unsigned int)(2 * v13));
                if (v13 < 0) {
                  break;
                }
                if (v7 == ++v14) {
                  v14 = v7;
                  break;
                }
              }
              v9 = v13 & 0x7FFFFFFF;
              if (v14 >= v7) {
                goto LABEL_64;
              }
            LABEL_61:
              v10 = v14 + 1;
              goto LABEL_65;
            }
            goto LABEL_47;
          }
        LABEL_49:
          LODWORD(v14) = 0;
          v9 = 0;
          if (v7 > 0LL) {
            goto LABEL_61;
          }
          goto LABEL_64;
        }
        if (v7 >= 1) {
          v22 = *(_QWORD*)(a1 + 8);
          v23 = 0;
          v14 = 0;
          while (1) {
            v24 = (v5 >> v14) & 1;
            if (*(__int16*)(v22 + 2LL * ((unsigned int)v24 + v23)) < 0) {
              break;
            }
            ++v14;
            v23 = *(unsigned __int16*)(v22 + 2LL * ((unsigned int)v24 + v23));
            if (v7 == v14) {
              goto LABEL_64;
            }
          }
          v28 = *(unsigned __int16*)(v22 + 2LL * ((unsigned int)v24 + v23))
                << 16;
          v29 = v24 + v23 + 1;
          if ((_DWORD)v24 != 0) {
            v30 = *(unsigned __int16*)(v22 + 2LL * v23) >> 15;
          }
          else {
            v30 = 1;
          }
          v9 = v28 & 0x7FFFFFFF |
               *(unsigned __int16*)(v22 + 2LL * (unsigned int)(v29 + v30));
          if (v14 >= v7) {
            goto LABEL_64;
          }
          goto LABEL_61;
        }
        LODWORD(v14) = 0;
        v9 = 0;
        if (v7 > 0LL) {
          goto LABEL_61;
        }
      LABEL_64:
        v10 = v7 + 1;
        v9 = -1;
        goto LABEL_65;
      }
      v12 = v7;
      if (v7 >= 1) {
        v19 = *(_QWORD*)(a1 + 8);
        v20 = 0;
        v14 = 0;
        while (1) {
          v21 = *(__int16*)(v19 + 2 * ((v5 >> v14) & 1) +
                            2LL * (unsigned int)(2 * v20));
          v20 = *(unsigned __int16*)(v19 + 2 * ((v5 >> v14) & 1) +
                                     2LL * (unsigned int)(2 * v20));
          if (v21 < 0) {
            break;
          }
          if (v7 == ++v14) {
            v14 = v7;
            break;
          }
        }
        v9 = v20 & 0x7FFF;
        if (v14 >= v7) {
          goto LABEL_64;
        }
        goto LABEL_61;
      }
    }
  LABEL_47:
    LODWORD(v14) = 0;
    v9 = 0;
    if (v12 > 0) {
      goto LABEL_61;
    }
    goto LABEL_64;
  }
  v9 = -1;
  v10 = 1;
LABEL_65:
  MovieRoutine_7a2e0((__int64)a2, v10);
  return v9;
}

__int64 MovieHr_80ce0(__int64* a1, _DWORD* a2, __int64 a3, int a4,
                      unsigned int a5)
{
  __int64 v5;
  __int64 v7;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  int v14;

  if (a1[9] < 1) {
    return 0;
  }
  v5 = a1[10];
  if (v5 == 0) {
    return -1;
  }
  if ((int)(a4 / a1[4]) >= 1) {
    v7 = (a4 / a1[4]) & 0x7FFFFFFF;
    v11 = 0;
    while ((unsigned int)MovieRoutine_80de0(a1, a3, v5, a5) == 0) {
      if (a1[4] >= 1) {
        v12 = 0;
        v13 = a2;
        do {
          v14 = *(_DWORD*)(v5 + 4 * v12++);
          *v13 += v14;
          v13 += v7;
        } while (a1[4] > v12);
      }
      ++v11;
      ++a2;
      if (v11 == v7) {
        return 0;
      }
    }
    return -1;
  }
  return 0;
}

__int64 MovieHr_82720(_QWORD* a1, int* a2, int* a3, __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*a1 + 48LL);
  if (a3 != nullptr) {
    MovieRoutine_81b40(a4, *(_QWORD*)(v4 + 8LL * a1[11]) / 2LL, a2[4], a3, *a2,
                       a3[*a2], a2[7], *((_QWORD*)a2 + 1) >> 1);
    return 1;
  }
  else {
    MovieRoutine_82ce0(
        a4, 0, 2 * (*(_QWORD*)(v4 + 8LL * a1[11]) & 0x3FFFFFFFFFFFFFFFLL));
    return 0;
  }
}

#pragma GCC visibility pop
