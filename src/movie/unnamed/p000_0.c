#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern unsigned __int8 MovieData_a2230[16];

extern _DWORD MovieData_a2290[30];

extern _QWORD MovieData_a9508[33];

extern int MovieData_b1990[1];

extern _UNKNOWN MovieData_b1994;

extern _UNKNOWN MovieData_b1998;

extern _UNKNOWN MovieData_b2990;

extern _UNKNOWN MovieData_b2998;

extern _UNKNOWN* MovieData_bf000;

extern _UNKNOWN* MovieData_c0a00;

extern _UNKNOWN* MovieData_c0a08;

extern _UNKNOWN* MovieData_c0a10;

extern _UNKNOWN* MovieData_c0a18;

extern _UNKNOWN* MovieData_c0a20;

extern _UNKNOWN* MovieData_c0a28;

extern _UNKNOWN* MovieData_c0a30;

extern _UNKNOWN* MovieData_c0a38;

extern _UNKNOWN* MovieData_c0a40;

extern __int64 MovieData_d0010;

void __attribute__((noreturn)) MovieRoutine_14f0(_QWORD);

__int64 MovieRoutine_340(_QWORD, _QWORD, _QWORD);

__int64 MovieRoutine_4eef0(__int64, _DWORD*);

__int64 MovieRoutine_4f690(_QWORD);

__int64 MovieRoutine_5abc0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 MovieRoutine_652a0(_QWORD, _QWORD);

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

__int64 MovieRoutine_82920(_QWORD, _QWORD, _QWORD);

__int64 MovieRoutine_82bd0(const char*, ...);

__int64 MovieRoutine_82ce0(_QWORD, _QWORD, _QWORD);

__int64 MovieRoutine_82f40(_QWORD);

__int64 MovieRoutine_82f50(_QWORD, _QWORD, _QWORD);

__int64 MovieRoutine_82f60(_QWORD);

__int64 MovieRoutine_84650(_QWORD);

__int64 MovieRoutine_84660(_QWORD);

__int64 MovieRoutine_84760(_QWORD, _QWORD);

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
