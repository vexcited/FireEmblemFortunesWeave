#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* NgxRoutine_dbc20(_QWORD* result, __int64);
_QWORD* NgxRoutine_dd7b0(_QWORD* result, __int64);
_WORD* NgxRoutine_bffc0(_WORD*, unsigned int);
__attribute__((swiftcall)) void nvidia_be650(PSEUDO_X8, __int64);
__int64 NgxRoutine_2b0();
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_430(_QWORD, _QWORD);
__int64 NgxRoutine_baf00(_QWORD);
__int64 NgxRoutine_baf00_alt1() __asm__("NgxRoutine_baf00");
__int64 NgxRoutine_bee50(__int64*, __int64, unsigned __int64);
__int64 NgxRoutine_bf8a0(__int64*, __int64, unsigned __int64);
__int64 NgxRoutine_d9890(__int64, __int64);
__int64 NgxRoutine_da0e0(__int64, __int64);
__int64 NgxRoutine_da6d0(__int64, __int64);
__int64 NgxRoutine_dadf0(__int64, __int64);
__int64 NgxRoutine_daf20();
__int64 NgxRoutine_db240(__int64*);
__int64 NgxRoutine_db6d0(__int64 result, __int64, char, __int64);
__int64 NgxRoutine_dd780(__int64 result, __int64);
__int64 NgxRoutine_dfab0(__int64 result, unsigned __int64);
__int64 NgxRoutine_dfc20(__int64*);
__int64 NgxRoutine_e0c40();
__int64 NgxRoutine_e0e80(__int64);
__int64 NgxRoutine_e1fc0(unsigned __int64, unsigned int);
__int64 NgxRoutine_e21e0(unsigned __int64*, __int64, void (*)(__int64));
__int64 NgxRoutine_e22d0(__int64 result, char);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 __cxa_guard_abort_plt(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 newlocale_plt(_QWORD, _QWORD, _QWORD);
char* nvidia_e1af0_alt1(_WORD*) __asm__("nvidia_e1af0");
extern _QWORD NgxData_2b8a080[];
extern _QWORD NgxData_2b8a1a8[];
extern _QWORD NgxData_9385b0[20];
extern _UNKNOWN* NgxData_9511b8;
extern _UNKNOWN* NgxData_9511c0;
extern _UNKNOWN* NgxData_9511d0;
extern _UNKNOWN* NgxData_9511d8;
extern _UNKNOWN* NgxData_9511e0;
extern _UNKNOWN* NgxData_9511e8;
extern _UNKNOWN* NgxData_9511f0;
extern _UNKNOWN* NgxData_9512d8;
extern _UNKNOWN* NgxData_9512e0;
extern _UNKNOWN* NgxData_9512e8;
extern _UNKNOWN* NgxData_9512f0;
extern _UNKNOWN* NgxData_9512f8;
extern _UNKNOWN* NgxData_951300;
extern _UNKNOWN* NgxData_951308;
extern _UNKNOWN* NgxData_951310;
extern _UNKNOWN* NgxData_951318;
extern _UNKNOWN* NgxData_951320;
extern _UNKNOWN* NgxData_951328;
extern _UNKNOWN* NgxData_951330;
extern _UNKNOWN* NgxData_951338;
extern _UNKNOWN* NgxData_951340;
extern _UNKNOWN* NgxData_951348;
extern _UNKNOWN* NgxData_951358;
extern _UNKNOWN* NgxData_951360;
extern _UNKNOWN* NgxData_951368;
extern _UNKNOWN* NgxData_951370;
extern _UNKNOWN* NgxData_951378;
extern _UNKNOWN NgxData_2b89de8;
extern _UNKNOWN NgxData_2b89e08;
extern _UNKNOWN NgxData_2b89e90;
extern _UNKNOWN NgxData_2b89ea0;
extern _UNKNOWN NgxData_2b89eb8;
extern _UNKNOWN NgxData_2b8a0f8;
extern _UNKNOWN NgxData_2b8a168;
extern _UNKNOWN NgxData_2b8a178;
extern __int64 (*NgxData_94fbc8[])();
extern __int64* NgxData_951200[27];
extern __int64* NgxData_951208[26];
extern __int64* NgxData_951210[25];
extern __int64* NgxData_951218[24];
extern __int64* NgxData_951220[23];
extern __int64* NgxData_951228[22];
extern __int64* NgxData_951230[21];
extern __int64* NgxData_951238[20];
extern __int64* NgxData_951240[19];
extern __int64* NgxData_951248[18];
extern __int64* NgxData_951250[17];
extern __int64* NgxData_951258[16];
extern __int64* NgxData_951260[15];
extern __int64* NgxData_951268[14];
extern __int64* NgxData_951270[13];
extern __int64* NgxData_951278[12];
extern __int64* NgxData_951280[11];
extern __int64* NgxData_951288[10];
extern __int64* NgxData_951290[9];
extern __int64* NgxData_951298[8];
extern __int64* NgxData_9512a0[7];
extern __int64* NgxData_9512a8[6];
extern __int64* NgxData_9512b0[5];
extern __int64* NgxData_9512b8[4];
extern __int64* NgxData_9512c0[3];
extern __int64* NgxData_9512c8[2];
extern __int64* NgxData_9512d0;
extern __int64 NgxData_2b89de0;
extern __int64 NgxData_2b89ec0;
extern __int64 NgxData_2b89ec8;
extern __int64 NgxData_2b89ed0;
extern __int64 NgxData_2b89ed8;
extern __int64 NgxData_2b89ee0;
extern __int64 NgxData_2b89ee8;
extern __int64 NgxData_2b89ef0;
extern __int64 NgxData_2b89ef8;
extern __int64 NgxData_2b89f00;
extern __int64 NgxData_2b89f08;
extern __int64 NgxData_2b89f10;
extern __int64 NgxData_2b89f18;
extern __int64 NgxData_2b89f20;
extern __int64 NgxData_2b89f28;
extern __int64 NgxData_2b89f30;
extern __int64 NgxData_2b89f38;
extern __int64 NgxData_2b89f40;
extern __int64 NgxData_2b89f48;
extern __int64 NgxData_2b89f50;
extern __int64 NgxData_2b89f58;
extern __int64 NgxData_2b89f60;
extern __int64 NgxData_2b89f68;
extern __int64 NgxData_2b89f70;
extern __int64 NgxData_2b89f78;
extern __int64 NgxData_2b89f80;
extern __int64 NgxData_2b89f88;
extern __int64 NgxData_2b89f90;
extern __int64 NgxData_2b89f98;
extern __int64 NgxData_2b89fa0;
extern __int64 NgxData_2b89fa8;
extern __int64 NgxData_2b89fb0;
extern __int64 NgxData_2b89fb8;
extern __int64 NgxData_2b89fc0;
extern __int64 NgxData_2b89fc8;
extern __int64 NgxData_2b89fd0;
extern __int64 NgxData_2b89fd8;
extern __int64 NgxData_2b89fe0;
extern __int64 NgxData_2b89fe8;
extern __int64 NgxData_2b89ff0;
extern __int64 NgxData_2b89ff8;
extern __int64 NgxData_2b8a000;
extern __int64 NgxData_2b8a008;
extern __int64 NgxData_2b8a010;
extern __int64 NgxData_2b8a018;
extern __int64 NgxData_2b8a098;
extern __int64 NgxData_2b8a0a0;
extern __int64 NgxData_2b8a0a8;
extern __int64 NgxData_2b8a0b0;
extern __int64 NgxData_2b8a0b8;
extern __int64 NgxData_2b8a0c0;
extern __int64 NgxData_2b8a0c8;
extern __int64 NgxData_2b8a0d0;
extern __int64 NgxData_2b8a0d8;
extern __int64 NgxData_2b8a0e0;
extern __int64 NgxData_2b8a0e8;
extern __int64 NgxData_2b8a0f0;
extern __int64 NgxData_2b8a148;
extern __int64 NgxData_2b8a150;
extern __int64 NgxData_2b8a158;
extern __int64 NgxData_2b8a160;
extern __int64 NgxData_2b8a170;
extern __int64 NgxData_2b8a1d8;
extern __int64 NgxData_2b8a1e0;
extern __int64 NgxData_2b8a1e8;
extern __int64 NgxData_2b8a1f0;
extern __int64 NgxData_2b8a1f8;
extern __int64 NgxData_2b8a200;
extern __int64 NgxData_2b8a208;
extern __int64 NgxData_2b8a210;
extern __int64 NgxData_2b8a218;
extern __int64 NgxData_2b8a220;
extern __int64 NgxData_2b8a228;
extern __int64 NgxData_2b8a230;
extern __int64 NgxData_2b8a238;
extern __int64 NgxData_2b8a240;
extern __int64 NgxData_2b8a248;
extern __int64 NgxData_2b8a250;
extern __int64 NgxData_2b8a258;
extern __int64 NgxData_2b8a260;
extern __int64 NgxData_2b8a268;
extern __int64 NgxData_2b8a270;
extern __int64 NgxData_2b8a278;
extern __int64 NgxData_2b8a280;
extern __int64 NgxData_2b8a288;
extern __int64 NgxData_2b8a290;
extern __int64 NgxData_2b8a298;
extern __int64 NgxData_2b8a2a0;
extern __int64 NgxData_2b8a2a8;
extern __int64 NgxData_2b8a2b0;
extern __int64 NgxData_2b8a2b8;
extern __int64 NgxData_2b8a2c0;
extern __int64 NgxData_2b8a2c8;
extern __int64 NgxData_2b8a2d0;
extern __int64 NgxData_2b8a2d8;
extern __int64 NgxData_2b8a2e0;
extern __int64 NgxData_2b8a2e8;
extern __int64 NgxData_2b8a2f0;
extern __int64 NgxData_2b8a2f8;
extern __int64 NgxData_2b8a300;
extern __int64 NgxData_2b8a308;
extern __int64 NgxData_2b8a310;
extern __int64 NgxData_2b8a318;
extern __int64 NgxData_2b8a320;
extern __int64 NgxData_2b8a478;
extern __int64 NgxData_2b8a480;
extern __int64 NgxData_2b8a488;
extern __int64 NgxData_2b8a490;
extern __int64 NgxData_2b8a498;
extern __int64 NgxData_2b8a4a0;
extern __int64 NgxData_2b8a4a8;
extern __int64 NgxData_2b8a4b0;
extern __int64 NgxData_2b8a4b8;
extern __int64 NgxData_2b8a4c0;
extern __int64 NgxData_2b8a4c8;
extern __int64 NgxData_2b8a4d0;
extern __int64 NgxData_2b8a4d8;
extern __int64 NgxData_2b8a4e0;
extern __int64 NgxData_2b8a4e8;
extern __int64 NgxData_2b8a4f0;
extern __int64 NgxData_2b8a4f8;
extern __int64 NgxData_2b8a500;
extern __int64 NgxData_2b8a508;
extern __int64 NgxData_2b8a510;
extern __int64 NgxData_2b8a518;
extern __int64 NgxData_2b8a520;
extern __int64 NgxData_2b8a528;
extern __int64 NgxData_2b8a530;
extern __int64 NgxData_2b8a538;
extern __int64 NgxData_2b8a540;
extern __int64 NgxData_2b8a548;
extern __int64 NgxData_2b8a550;
extern __int64 NgxData_2b8a558;
extern __int64 NgxData_2b8a560;
extern __int64 NgxData_2b8a568;
extern __int64 NgxData_2b8a570;
extern __int64 NgxData_2b8a578;
extern __int64 NgxData_2b8a580;
extern __int64 NgxData_2b8a588;
extern __int64 NgxData_2b8a590;
extern __int64 NgxData_2b8a598;
extern __int64 NgxData_2b8a5a0;
extern __int64 NgxData_2b8a5a8;
extern __int64 NgxData_2b8a5b0;
extern __int64 NgxData_2b8a5b8;
extern __int64 NgxData_2b8a5c0;
extern __int64 NgxData_2b8a5c8;
extern __int64 NgxData_2b8a5d0;
extern __int64 NgxData_2b8a5d8;
extern __int64 NgxData_2b8a5e0;
extern __int64 NgxData_2b8a5e8;
extern __int64 NgxData_2b8a5f0;
extern __int64 NgxData_2b8a5f8;
extern __int64 NgxData_2b8a600;
extern __int64 NgxData_2b8a608;
extern __int64 NgxData_2b8a610;
extern __int64 NgxData_2b8a618;
extern __int64 NgxData_2b8a620;
extern __int64 NgxData_2b8a628;
extern __int64 NgxData_2b8a630;
extern __int64 NgxData_2b8a638;
extern __int64 NgxData_2b8a640;
extern __int64 NgxData_2b8a648;
extern __int64 NgxData_2b8a650;
extern __int64 NgxData_2b8a658;
extern __int64 NgxData_2b8a660;
extern __int64 NgxData_2b8a668;
extern __int64 NgxData_2b8a670;
extern __int64 NgxData_2b8a678;
extern __int64 NgxData_2b8a680;
extern __int64 NgxData_2b8a688;
extern __int64 NgxData_2b8a690;
extern __int64 NgxData_2b8a698;
extern __int64 NgxData_2b8a6a0;
extern __int64 NgxData_2b8a6a8;
extern __int64 NgxData_2b8a6b0;
extern char* NgxData_9511c8;
extern char NgxData_9384e4[201];
extern char NgxData_9390f9[705];
extern char NgxData_eacb9[3];
extern char NgxData_edc6e[9];
extern char NgxData_f20df[37];
extern char NgxData_f363d[17];
extern int NgxData_2b8a16c;
unsigned __int64 NgxRoutine_e0fa0(unsigned __int8*);
void __attribute__((noreturn)) NgxRoutine_baf40(__int64);
void __attribute__((noreturn)) NgxRoutine_be400(__int64);
void __attribute__((noreturn)) NgxRoutine_db120();
__attribute__((swiftcall)) void nvidia_d8580(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 unused_int1,
                                             __int64 unused_int2,
                                             __int64 unused_int3, __int64 a1);
__attribute__((swiftcall)) void nvidia_d85b0(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 unused_int1,
                                             __int64 unused_int2,
                                             __int64 unused_int3, __int64 a1);
__int64 nvidia_d85e0(__int64 a1, __int64 a2);
void __attribute__((noreturn)) nvidia_d8b18(__int64 a1);
__int64 nvidia_d8b80(__int64 a1, __int64 a2);
__int64 nvidia_d8cb0(__int64 a1, __int64 a2);
__int64 nvidia_d8de0(__int64 a1, __int64 a2);
__int64 nvidia_d8f10(__int64 a1, __int64 a2);
__int64 nvidia_d9040(__int64 a1, __int64 a2);
__int64 nvidia_d9170(__int64 a1, __int64 a2);
__int64 nvidia_d92a0(__int64 a1, __int64 a2);
__int64 nvidia_d93d0(__int64 a1, __int64 a2);
__int64 nvidia_d9500(__int64 a1, __int64 a2);
__int64 nvidia_d9630(__int64 a1, __int64 a2);
__int64 nvidia_d9760(__int64 a1, __int64 a2);
__int64 nvidia_d99c0(__int64 a1, __int64 a2);
__int64 nvidia_d9af0(__int64 a1, __int64 a2);
__int64 nvidia_d9c20(__int64 a1, __int64 a2);
__int64 nvidia_d9d50(__int64 a1, __int64 a2);
__int64 nvidia_d9e80(__int64 a1, __int64 a2);
__int64 nvidia_d9fb0(__int64 a1, __int64 a2);
__int64 nvidia_da210(__int64 a1, __int64 a2);
__int64 nvidia_da340(__int64 a1, __int64 a2);
__int64 nvidia_da470(__int64 a1, __int64 a2);
__int64 nvidia_da5a0(__int64 a1, __int64 a2);
__int64 nvidia_da800(__int64 a1, __int64 a2);
__int64 nvidia_da930(__int64 a1, __int64 a2);
__int64 nvidia_daa60(__int64 a1, __int64 a2);
__int64 nvidia_dab90(__int64 a1, __int64 a2);
__int64 nvidia_dacc0(__int64 a1, __int64 a2);
void __attribute__((noreturn)) nvidia_db1ec(__int64 a1);
void __attribute__((noreturn)) nvidia_dbcac(__int64 a1);
void __attribute__((noreturn)) nvidia_dc0c8(__int64 a1);
void __attribute__((noreturn)) nvidia_dc47c(__int64 a1);
void __attribute__((noreturn)) nvidia_dc868(__int64 a1);
__int64 nvidia_dc980(unsigned __int16* a1, unsigned __int64 a2,
                     unsigned __int16** a3, _BYTE* a4, __int64 a5, _QWORD* a6,
                     unsigned __int64 a7, char a8);
__attribute__((swiftcall)) void nvidia_dd940(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void nvidia_dd970(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nvidia_dd990(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nvidia_dda70(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nvidia_dda90(PSEUDO_X8 x8_);
void nvidia_ddb50();
void nvidia_de3c0();
void nvidia_df2e0();
void __attribute__((noreturn)) nvidia_df8d8(__int64 a1);
void __attribute__((noreturn)) nvidia_df9a0(__int64 a1);
void __attribute__((noreturn)) nvidia_dfa90();
__int64 nvidia_dfc50();
__int64 nvidia_e01f0();
__int64 nvidia_e0bd0();
__int64 nvidia_e0c70(__int64 a1, _BYTE* a2);
__int64 nvidia_e0e68(__int64 a1);
unsigned __int64 nvidia_e0f88(__int64 a1);
__int64 nvidia_e1920(__int64 a1, _DWORD* a2);
__int64 nvidia_e1a10(__int64 a1, __int64 a2, __int64 a3);
char* nvidia_e1adc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10);
char* nvidia_e1af0(char* a1, char* a2, unsigned __int64 a3, signed int a4);
__int64 nvidia_e1d60(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 nvidia_e1e20(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 nvidia_e1f00(__int64 a1, __int64 a2, unsigned __int64 a3);
void __attribute__((noreturn)) nvidia_e21bc(__int64 a1);
void __attribute__((noreturn)) nvidia_e22b4(__int64 a1);
__attribute__((swiftcall)) void nvidia_e2e10(PSEUDO_X8 x8_, __int64 unused_int0,
                                             int a1);

__attribute__((swiftcall)) void nvidia_d8580(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 unused_int1,
                                             __int64 unused_int2,
                                             __int64 unused_int3, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)a1 & 1) != 0) {
    NgxRoutine_bee50(a2, *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 8)),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  v2 = *(_QWORD*)(a1 + 8);
  *a2 = *(_QWORD*)a1;
  a2[1] = v2;
  a2[2] = *(_QWORD*)(a1 + 16);
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_d85b0(PSEUDO_X8 x8_, __int64 unused_int0,
                                             __int64 unused_int1,
                                             __int64 unused_int2,
                                             __int64 unused_int3, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)a1 & 1) != 0) {
    NgxRoutine_bf8a0(a2, *(_QWORD*)(a1 + 16), *(_QWORD*)(a1 + 8)),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return;
  }
  v2 = *(_QWORD*)(a1 + 8);
  *a2 = *(_QWORD*)a1;
  a2[1] = v2;
  a2[2] = *(_QWORD*)(a1 + 16);
  {
    result;
    return;
  }
}

__int64 nvidia_d85e0(__int64 a1, __int64 a2)
{
  __int64* v3;

  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)a1 = NgxData_94fbc8;
  *(_QWORD*)(a1 + 8) = a2 - 1;
  *(_QWORD*)(a1 + 16) = a1 + 40;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 1;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 290) = 0;
  *(_QWORD*)(a1 + 24) = a1 + 40;
  *(_QWORD*)(a1 + 32) = a1 + 280;
  *(_WORD*)(a1 + 288) = 17154;
  NgxData_2b89ec0 = (__int64)(NgxData_951200[0] + 2);
  NgxData_2b89ec8 = 0;
  nvidia_d8b80(a1, (__int64)&NgxData_2b89ec0);
  NgxData_2b89ed0 = (__int64)(NgxData_951208[0] + 2);
  NgxData_2b89ed8 = 0;
  nvidia_d8cb0(a1, (__int64)&NgxData_2b89ed0);
  NgxRoutine_db6d0((__int64)&NgxData_2b8a0f8, 0, 0, 1);
  nvidia_d8de0(a1, (__int64)&NgxData_2b8a0f8);
  NgxData_2b89ee0 = (__int64)(NgxData_951210[0] + 2);
  NgxData_2b89ee8 = 0;
  nvidia_d8f10(a1, (__int64)&NgxData_2b89ee0);
  NgxData_2b89ef0 = (__int64)(NgxData_951218[0] + 2);
  NgxData_2b89ef8 = 0;
  nvidia_d9040(a1, (__int64)&NgxData_2b89ef0);
  NgxRoutine_dbc20(NgxData_2b8a080, 1);
  nvidia_d9170(a1, (__int64)NgxData_2b8a080);
  NgxData_2b89f00 = (__int64)(NgxData_951220[0] + 2);
  NgxData_2b89f08 = 0;
  nvidia_d92a0(a1, (__int64)&NgxData_2b89f00);
  NgxData_2b89f10 = (__int64)(NgxData_951228[0] + 2);
  NgxData_2b89f18 = 0;
  nvidia_d93d0(a1, (__int64)&NgxData_2b89f10);
  NgxData_2b89f20 = (__int64)(NgxData_951230[0] + 2);
  NgxData_2b89f28 = 0;
  nvidia_d9500(a1, (__int64)&NgxData_2b89f20);
  NgxData_2b89f30 = (__int64)(NgxData_951238[0] + 2);
  NgxData_2b89f38 = 0;
  nvidia_d9630(a1, (__int64)&NgxData_2b89f30);
  NgxRoutine_dd780((__int64)&NgxData_2b8a178, 1);
  nvidia_d9760(a1, (__int64)&NgxData_2b8a178);
  NgxRoutine_dd7b0(NgxData_2b8a1a8, 1);
  NgxRoutine_d9890(a1, (__int64)NgxData_2b8a1a8);
  NgxData_2b89f40 = (__int64)(NgxData_951240[0] + 2);
  NgxData_2b89f48 = 0;
  nvidia_d99c0(a1, (__int64)&NgxData_2b89f40);
  NgxData_2b89f50 = (__int64)(NgxData_951248[0] + 2);
  NgxData_2b89f58 = 0;
  nvidia_d9af0(a1, (__int64)&NgxData_2b89f50);
  NgxData_2b89f60 = (__int64)(NgxData_951250[0] + 2);
  NgxData_2b89f68 = 0;
  nvidia_d9c20(a1, (__int64)&NgxData_2b89f60);
  NgxData_2b89f70 = (__int64)(NgxData_951258[0] + 2);
  NgxData_2b89f78 = 0;
  nvidia_d9d50(a1, (__int64)&NgxData_2b89f70);
  NgxData_2b89f80 = (__int64)(NgxData_951260[0] + 2);
  NgxData_2b89f88 = 0;
  nvidia_d9e80(a1, (__int64)&NgxData_2b89f80);
  NgxData_2b89f90 = (__int64)(NgxData_951268[0] + 2);
  NgxData_2b89f98 = 0;
  nvidia_d9fb0(a1, (__int64)&NgxData_2b89f90);
  NgxData_2b89fa0 = (__int64)(NgxData_951270[0] + 2);
  NgxData_2b89fa8 = 0;
  NgxRoutine_da0e0(a1, (__int64)&NgxData_2b89fa0);
  NgxData_2b89fb0 = (__int64)(NgxData_951278[0] + 2);
  NgxData_2b89fb8 = 0;
  nvidia_da210(a1, (__int64)&NgxData_2b89fb0);
  NgxData_2b89fc0 = (__int64)(NgxData_951280[0] + 2);
  NgxData_2b89fc8 = 0;
  nvidia_da340(a1, (__int64)&NgxData_2b89fc0);
  NgxData_2b89fd0 = (__int64)(NgxData_951288[0] + 2);
  NgxData_2b89fd8 = 0;
  nvidia_da470(a1, (__int64)&NgxData_2b89fd0);
  NgxData_2b89fe0 = (__int64)(NgxData_951290[0] + 2);
  NgxData_2b89fe8 = 0;
  nvidia_da5a0(a1, (__int64)&NgxData_2b89fe0);
  NgxData_2b89ff0 = (__int64)(NgxData_951298[0] + 2);
  NgxData_2b89ff8 = 0;
  NgxRoutine_da6d0(a1, (__int64)&NgxData_2b89ff0);
  NgxData_2b8a098 = (__int64)(NgxData_9512a0[0] + 2);
  NgxData_2b8a0a0 = 0;
  NgxData_2b8a0a8 = (__int64)(NgxData_9512a0[0] + 14);
  nvidia_da800(a1, (__int64)&NgxData_2b8a098);
  NgxData_2b8a0b0 = (__int64)(NgxData_9512a8[0] + 2);
  NgxData_2b8a0b8 = 0;
  NgxData_2b8a0c0 = (__int64)(NgxData_9512a8[0] + 14);
  nvidia_da930(a1, (__int64)&NgxData_2b8a0b0);
  NgxData_2b8a0d0 = 0;
  v3 = NgxData_9512b0[0];
  NgxData_2b8a0c8 = (__int64)(NgxData_9512b0[0] + 2);
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = newlocale_plt(0x7FFFFFFF, "C", 0);
    __cxa_guard_release_plt(&NgxData_2b89de8);
  }
  NgxData_2b8a0d8 = NgxData_2b89de0;
  NgxData_2b8a0c8 = (__int64)(NgxData_9512b8[0] + 2);
  nvidia_daa60(a1, (__int64)&NgxData_2b8a0c8);
  NgxData_2b8a0e8 = 0;
  NgxData_2b8a0e0 = (__int64)(v3 + 2);
  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89de8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89de8) != 0) {
    NgxData_2b89de0 = newlocale_plt(0x7FFFFFFF, "C", 0);
    __cxa_guard_release_plt(&NgxData_2b89de8);
  }
  NgxData_2b8a0f0 = NgxData_2b89de0;
  NgxData_2b8a0e0 = (__int64)(NgxData_9512c0[0] + 2);
  nvidia_dab90(a1, (__int64)&NgxData_2b8a0e0);
  NgxData_2b8a000 = (__int64)(NgxData_9512c8[0] + 2);
  NgxData_2b8a008 = 0;
  nvidia_dacc0(a1, (__int64)&NgxData_2b8a000);
  NgxData_2b8a010 = (__int64)(NgxData_9512d0 + 2);
  NgxData_2b8a018 = 0;
  return NgxRoutine_dadf0(a1, (__int64)&NgxData_2b8a010);
}

void __attribute__((noreturn)) nvidia_d8b18(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  __cxa_guard_abort_plt(v3);
  NgxRoutine_baf00(v3 + 760);
  if ((*(_BYTE*)(v1 + 288) & 1) != 0) {
    NgxRoutine_430(*(_QWORD*)(v1 + 304),
                   *(_QWORD*)(v1 + 288) & 0xFFFFFFFFFFFFFFFELL);
  }
  NgxRoutine_daf20();
  NgxRoutine_baf00(v1);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_d8b80(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9512d8;
  v10 = NgxData_9512d8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9512d8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9512d8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d8cb0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9512e0;
  v10 = NgxData_9512e0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9512e0,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9512e0, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d8de0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511b8;
  v10 = NgxData_9511b8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511b8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511b8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d8f10(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511d0;
  v10 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9040(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9512e8;
  v10 = NgxData_9512e8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9512e8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9512e8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9170(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9512f0;
  v10 = NgxData_9512f0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9512f0,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9512f0, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d92a0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9512f8;
  v10 = NgxData_9512f8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9512f8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9512f8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d93d0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951300;
  v10 = NgxData_951300;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951300,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951300, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9500(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951308;
  v10 = NgxData_951308;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951308,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951308, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9630(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951310;
  v10 = NgxData_951310;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951310,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951310, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9760(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511c0;
  v10 = NgxData_9511c0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511c0,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511c0, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d99c0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951318;
  v10 = NgxData_951318;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951318,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951318, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9af0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951320;
  v10 = NgxData_951320;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951320,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951320, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9c20(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951328;
  v10 = NgxData_951328;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951328,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951328, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9d50(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951330;
  v10 = NgxData_951330;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951330,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951330, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9e80(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511e8;
  v10 = NgxData_9511e8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511e8,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511e8, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_d9fb0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511e0;
  v10 = NgxData_9511e0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511e0,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511e0, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_da210(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_9511f0;
  v10 = NgxData_9511f0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511f0,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511f0, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_da340(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951338;
  v10 = NgxData_951338;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951338,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951338, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_da470(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951340;
  v10 = NgxData_951340;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951340,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951340, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_da5a0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951348;
  v10 = NgxData_951348;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951348,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951348, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_da800(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951358;
  v10 = NgxData_951358;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951358,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951358, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_da930(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951360;
  v10 = NgxData_951360;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951360,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951360, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_daa60(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951368;
  v10 = NgxData_951368;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951368,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951368, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_dab90(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951370;
  v10 = NgxData_951370;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951370,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951370, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

__int64 nvidia_dacc0(__int64 a1, __int64 a2)
{
  void* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 result;
  void* v10;
  void*** v11;
  void** v12;

  v4 = NgxData_951378;
  v10 = NgxData_951378;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_951378,
                           memory_order_acquire) != -1) {
    v12 = &v10;
    v11 = &v12;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_951378, (__int64)&v11,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(a1 + 16);
  v7 = (__int64*)(a1 + 16);
  v8 = (__int64)(*(_QWORD*)(a1 + 24) - v6) >> 3;
  if (v8 <= v5) {
    if (v5 + 1 <= v8) {
      if (v5 + 1 < v8) {
        *(_QWORD*)(a1 + 24) = v6 + 8 * (v5 + 1);
      }
    }
    else {
      NgxRoutine_dfab0(a1 + 16, v5 + 1 - v8);
      v6 = *v7;
    }
  }
  result = *(_QWORD*)(v6 + 8 * v5);
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  }
  *(_QWORD*)(*v7 + 8 * v5) = a2;
  return result;
}

void __attribute__((noreturn)) nvidia_db1ec(__int64 a1)
{
  __cxa_guard_abort_plt(&NgxData_2b89e08);
  NgxRoutine_baf40(a1);
}

void __attribute__((noreturn)) nvidia_dbcac(__int64 a1)
{

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  NgxRoutine_baf00_alt1();
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc0c8(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc47c(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 8));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_dc868(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 + 24));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 nvidia_dc980(unsigned __int16* a1, unsigned __int64 a2,
                     unsigned __int16** a3, _BYTE* a4, __int64 a5, _QWORD* a6,
                     unsigned __int64 a7, char a8)
{
  _BYTE* v9;
  _BYTE* v10;
  unsigned int v11;
  _BYTE* v12;
  char v13;
  _BYTE* v14;
  unsigned __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  unsigned __int16* v19;
  unsigned int v20;
  unsigned int v21;
  _BYTE* v22;
  unsigned int v23;
  char v24;
  _BYTE* v25;
  _BYTE* v26;
  char v27;
  _BYTE* v28;
  _BYTE* v29;

  *a3 = a1;
  *a6 = a4;
  if ((a8 & 2) != 0) {
    if (a5 - (__int64)a4 < 3) {
      return 1;
    }
    *a6 = a4 + 1;
    *a4 = -17;
    v9 = (_BYTE*)(*a6)++;
    *v9 = -69;
    v10 = (_BYTE*)(*a6)++;
    *v10 = -65;
    a1 = *a3;
  }
  if ((unsigned __int64)a1 >= a2) {
    return 0;
  }
  while (1) {
    v15 = *a1;
    if (a7 < v15) {
      return 2;
    }
    if ((unsigned int)v15 > 0x7F) {
      if ((unsigned int)v15 <= 0x7FF) {
        v17 = (_BYTE*)*a6;
        if (a5 - (__int64)*a6 < 2) {
          return 1;
        }
        *a6 = v17 + 1;
        *v17 = ((unsigned int)v15 >> 6) | 0xC0;
        goto LABEL_9;
      }
      if ((unsigned int)v15 >> 11 <= 0x1A) {
        v18 = (_BYTE*)*a6;
        if (a5 - (__int64)*a6 < 3) {
          return 1;
        }
        *a6 = v18 + 1;
        *v18 = ((unsigned int)v15 >> 12) | 0xE0;
        v11 = ((unsigned int)v15 >> 6) & 0x3F | 0x80;
        goto LABEL_8;
      }
      if ((unsigned int)v15 >> 10 > 0x36) {
        if ((unsigned int)v15 < 0xE000) {
          return 2;
        }
        v29 = (_BYTE*)*a6;
        if (a5 - (__int64)*a6 < 3) {
          return 1;
        }
        *a6 = v29 + 1;
        *v29 = ((unsigned int)v15 >> 12) | 0xE0;
        v11 = ((unsigned int)v15 >> 6) & 0xFFFFFFBF;
      LABEL_8:
        v12 = (_BYTE*)(*a6)++;
        *v12 = v11;
      LABEL_9:
        v13 = v15 & 0x3F | 0x80;
        v14 = (_BYTE*)(*a6)++;
        *v14 = v13;
        goto LABEL_10;
      }
      if ((__int64)(a2 - (_QWORD)a1) < 3) {
        return 1;
      }
      v21 = a1[1];
      v19 = a1 + 1;
      v20 = v21;
      if ((v21 & 0xFC00) != 0xDC00) {
        return 2;
      }
      v22 = (_BYTE*)*a6;
      if (a5 - (__int64)*a6 < 4) {
        return 1;
      }
      if ((v20 & 0x3FF | ((v15 & 0x3FF) << 10)) + 0x10000 > a7) {
        return 2;
      }
      *a3 = v19;
      v23 = (((unsigned int)v15 >> 6) & 0xF) + 1;
      *a6 = v22 + 1;
      *v22 = (v23 >> 2) | 0xF0;
      v24 = 16 * (v23 & 3);
      v25 = (_BYTE*)(*a6)++;
      *v25 = v24 & 0x70 | ((unsigned int)v15 >> 2) & 0xF | 0x80;
      v26 = (_BYTE*)(*a6)++;
      *v26 = (16 * (v15 & 3)) | (v20 >> 6) & 0xF | 0x80;
      v27 = v20 & 0x3F | 0x80;
      v28 = (_BYTE*)(*a6)++;
      *v28 = v27;
    }
    else {
      v16 = (_BYTE*)*a6;
      if (a5 - (__int64)*a6 < 1) {
        return 1;
      }
      *a6 = v16 + 1;
      *v16 = v15;
    }
  LABEL_10:
    a1 = *a3 + 1;
    *a3 = a1;
    if ((unsigned __int64)a1 >= a2) {
      return 0;
    }
  }
}

__attribute__((swiftcall)) void nvidia_dd940(PSEUDO_X8 x8_, __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(result + 24) & 1) != 0) {
    NgxRoutine_bee50(a2, *(_QWORD*)(result + 40), *(_QWORD*)(result + 32));
    return;
  }
  v2 = *(_QWORD*)(result + 32);
  v3 = *(_QWORD*)(result + 40);
  *a2 = *(_QWORD*)(result + 24);
  a2[1] = v2;
  a2[2] = v3;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void nvidia_dd970(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 8;
  strcpy(a1 + 1, "true");
}

__attribute__((swiftcall)) void nvidia_dd990(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  *(_DWORD*)(a1 + 20) = 0;
  *(_BYTE*)a1 = 8;
  *(_QWORD*)(a1 + 4) = 0x7200000074LL;
  *(_QWORD*)(a1 + 12) = 0x6500000075LL;
}

__attribute__((swiftcall)) void nvidia_dda70(PSEUDO_X8 x8_)
{
  char* a1 = (char*)PSEUDO_X8_VALUE(x8_);
  strcpy(a1, "\nfalse");
}

__attribute__((swiftcall)) void nvidia_dda90(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* result;

  result = (_QWORD*)NgxRoutine_420(32);
  *a1 = 9;
  a1[1] = 5;
  a1[2] = result;
  *result = 0x6100000066LL;
  result[1] = 0x730000006CLL;
  result[2] = 101;
  {
    result;
    return;
  }
}

void nvidia_ddb50()
{
  char* v0;
  char* v1;
  char* v2;
  char* v3;
  char* v4;
  char* v5;
  char* v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89e90,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89e90) != 0) {
    NgxRoutine_2b0();
    __cxa_guard_release_plt(&NgxData_2b89e90);
  }
  if ((NgxData_2b8a1d8 & 1) != 0) {
    NgxData_2b8a1e0 = 6;
    v0 = (char*)NgxData_2b8a1e8;
  }
  else {
    LOBYTE(NgxData_2b8a1d8) = 12;
    v0 = (char*)&NgxData_2b8a1d8 + 1;
  }
  strcpy(v0, "Sunday");
  if ((NgxData_2b8a1f0 & 1) != 0) {
    NgxData_2b8a1f8 = 6;
    v1 = (char*)NgxData_2b8a200;
  }
  else {
    LOBYTE(NgxData_2b8a1f0) = 12;
    v1 = (char*)&NgxData_2b8a1f0 + 1;
  }
  strcpy(v1, "Monday");
  if ((NgxData_2b8a208 & 1) != 0) {
    NgxData_2b8a210 = 7;
    v2 = (char*)NgxData_2b8a218;
  }
  else {
    LOBYTE(NgxData_2b8a208) = 14;
    v2 = (char*)&NgxData_2b8a208 + 1;
  }
  strcpy(v2, "Tuesday");
  if ((NgxData_2b8a220 & 1) != 0) {
    NgxData_2b8a228 = 9;
    v3 = (char*)NgxData_2b8a230;
  }
  else {
    LOBYTE(NgxData_2b8a220) = 18;
    v3 = (char*)&NgxData_2b8a220 + 1;
  }
  strcpy(v3, "Wednesday");
  if ((NgxData_2b8a238 & 1) != 0) {
    NgxData_2b8a240 = 8;
    v4 = (char*)NgxData_2b8a248;
  }
  else {
    LOBYTE(NgxData_2b8a238) = 16;
    v4 = (char*)&NgxData_2b8a238 + 1;
  }
  strcpy(v4, "Thursday");
  if ((NgxData_2b8a250 & 1) != 0) {
    NgxData_2b8a258 = 6;
    v5 = (char*)NgxData_2b8a260;
  }
  else {
    LOBYTE(NgxData_2b8a250) = 12;
    v5 = (char*)&NgxData_2b8a250 + 1;
  }
  strcpy(v5, "Friday");
  if ((NgxData_2b8a268 & 1) != 0) {
    NgxData_2b8a270 = 8;
    v6 = (char*)NgxData_2b8a278;
  }
  else {
    LOBYTE(NgxData_2b8a268) = 16;
    v6 = (char*)&NgxData_2b8a268 + 1;
  }
  strcpy(v6, "Saturday");
  if ((NgxData_2b8a280 & 1) != 0) {
    NgxData_2b8a288 = 3;
    *(_DWORD*)NgxData_2b8a290 = 7238995;
    if ((NgxData_2b8a298 & 1) != 0) {
    LABEL_25:
      NgxData_2b8a2a0 = 3;
      *(_DWORD*)NgxData_2b8a2a8 = 7237453;
      if ((NgxData_2b8a2b0 & 1) != 0) {
        goto LABEL_26;
      }
      goto LABEL_33;
    }
  }
  else {
    LOBYTE(NgxData_2b8a280) = 6;
    *(_DWORD*)((char*)&NgxData_2b8a280 + 1) = 7238995;
    if ((NgxData_2b8a298 & 1) != 0) {
      goto LABEL_25;
    }
  }
  LOBYTE(NgxData_2b8a298) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a298 + 1) = 7237453;
  if ((NgxData_2b8a2b0 & 1) != 0) {
  LABEL_26:
    NgxData_2b8a2b8 = 3;
    *(_DWORD*)NgxData_2b8a2c0 = 6649172;
    if ((NgxData_2b8a2c8 & 1) != 0) {
      goto LABEL_27;
    }
    goto LABEL_34;
  }
LABEL_33:
  LOBYTE(NgxData_2b8a2b0) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a2b0 + 1) = 6649172;
  if ((NgxData_2b8a2c8 & 1) != 0) {
  LABEL_27:
    NgxData_2b8a2d0 = 3;
    *(_DWORD*)NgxData_2b8a2d8 = 6579543;
    if ((NgxData_2b8a2e0 & 1) != 0) {
      goto LABEL_28;
    }
    goto LABEL_35;
  }
LABEL_34:
  LOBYTE(NgxData_2b8a2c8) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a2c8 + 1) = 6579543;
  if ((NgxData_2b8a2e0 & 1) != 0) {
  LABEL_28:
    NgxData_2b8a2e8 = 3;
    *(_DWORD*)NgxData_2b8a2f0 = 7694420;
    if ((NgxData_2b8a2f8 & 1) != 0) {
      goto LABEL_29;
    }
  LABEL_36:
    LOBYTE(NgxData_2b8a2f8) = 6;
    *(_DWORD*)((char*)&NgxData_2b8a2f8 + 1) = 6910534;
    if ((NgxData_2b8a310 & 1) != 0) {
      goto LABEL_30;
    }
    goto LABEL_37;
  }
LABEL_35:
  LOBYTE(NgxData_2b8a2e0) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a2e0 + 1) = 7694420;
  if ((NgxData_2b8a2f8 & 1) == 0) {
    goto LABEL_36;
  }
LABEL_29:
  NgxData_2b8a300 = 3;
  *(_DWORD*)NgxData_2b8a308 = 6910534;
  if ((NgxData_2b8a310 & 1) != 0) {
  LABEL_30:
    NgxData_2b8a318 = 3;
    *(_DWORD*)NgxData_2b8a320 = 7627091;
    return;
  }
LABEL_37:
  LOBYTE(NgxData_2b8a310) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a310 + 1) = 7627091;
}

void nvidia_de3c0()
{
  char* v0;
  char* v1;
  char* v2;
  char* v3;
  char* v4;
  char* v5;
  char* v6;
  char* v7;
  char* v8;
  char* v9;
  char* v10;

  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89ea0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89ea0) != 0) {
    NgxRoutine_2b0();
    __cxa_guard_release_plt(&NgxData_2b89ea0);
  }
  if ((NgxData_2b8a478 & 1) != 0) {
    NgxData_2b8a480 = 7;
    v0 = (char*)NgxData_2b8a488;
  }
  else {
    LOBYTE(NgxData_2b8a478) = 14;
    v0 = (char*)&NgxData_2b8a478 + 1;
  }
  strcpy(v0, "January");
  if ((NgxData_2b8a490 & 1) != 0) {
    NgxData_2b8a498 = 8;
    v1 = (char*)NgxData_2b8a4a0;
  }
  else {
    LOBYTE(NgxData_2b8a490) = 16;
    v1 = (char*)&NgxData_2b8a490 + 1;
  }
  strcpy(v1, "February");
  if ((NgxData_2b8a4a8 & 1) != 0) {
    NgxData_2b8a4b0 = 5;
    v2 = (char*)NgxData_2b8a4b8;
  }
  else {
    LOBYTE(NgxData_2b8a4a8) = 10;
    v2 = (char*)&NgxData_2b8a4a8 + 1;
  }
  strcpy(v2, "March");
  if ((NgxData_2b8a4c0 & 1) != 0) {
    NgxData_2b8a4c8 = 5;
    v3 = (char*)NgxData_2b8a4d0;
  }
  else {
    LOBYTE(NgxData_2b8a4c0) = 10;
    v3 = (char*)&NgxData_2b8a4c0 + 1;
  }
  strcpy(v3, "April");
  if ((NgxData_2b8a4d8 & 1) != 0) {
    NgxData_2b8a4e0 = 3;
    *(_DWORD*)NgxData_2b8a4e8 = 7954765;
    if ((NgxData_2b8a4f0 & 1) != 0) {
      goto LABEL_16;
    }
  }
  else {
    LOBYTE(NgxData_2b8a4d8) = 6;
    *(_DWORD*)((char*)&NgxData_2b8a4d8 + 1) = 7954765;
    if ((NgxData_2b8a4f0 & 1) != 0) {
    LABEL_16:
      NgxData_2b8a4f8 = 4;
      v4 = (char*)NgxData_2b8a500;
      goto LABEL_19;
    }
  }
  LOBYTE(NgxData_2b8a4f0) = 8;
  v4 = (char*)&NgxData_2b8a4f0 + 1;
LABEL_19:
  strcpy(v4, "June");
  if ((NgxData_2b8a508 & 1) != 0) {
    NgxData_2b8a510 = 4;
    v5 = (char*)NgxData_2b8a518;
  }
  else {
    LOBYTE(NgxData_2b8a508) = 8;
    v5 = (char*)&NgxData_2b8a508 + 1;
  }
  strcpy(v5, "July");
  if ((NgxData_2b8a520 & 1) != 0) {
    NgxData_2b8a528 = 6;
    v6 = (char*)NgxData_2b8a530;
  }
  else {
    LOBYTE(NgxData_2b8a520) = 12;
    v6 = (char*)&NgxData_2b8a520 + 1;
  }
  strcpy(v6, "August");
  if ((NgxData_2b8a538 & 1) != 0) {
    NgxData_2b8a540 = 9;
    v7 = (char*)NgxData_2b8a548;
  }
  else {
    LOBYTE(NgxData_2b8a538) = 18;
    v7 = (char*)&NgxData_2b8a538 + 1;
  }
  strcpy(v7, "September");
  if ((NgxData_2b8a550 & 1) != 0) {
    NgxData_2b8a558 = 7;
    v8 = (char*)NgxData_2b8a560;
  }
  else {
    LOBYTE(NgxData_2b8a550) = 14;
    v8 = (char*)&NgxData_2b8a550 + 1;
  }
  strcpy(v8, "October");
  if ((NgxData_2b8a568 & 1) != 0) {
    NgxData_2b8a570 = 8;
    v9 = (char*)NgxData_2b8a578;
  }
  else {
    LOBYTE(NgxData_2b8a568) = 16;
    v9 = (char*)&NgxData_2b8a568 + 1;
  }
  strcpy(v9, "November");
  if ((NgxData_2b8a580 & 1) != 0) {
    NgxData_2b8a588 = 8;
    v10 = (char*)NgxData_2b8a590;
  }
  else {
    LOBYTE(NgxData_2b8a580) = 16;
    v10 = (char*)&NgxData_2b8a580 + 1;
  }
  strcpy(v10, "December");
  if ((NgxData_2b8a598 & 1) != 0) {
    NgxData_2b8a5a0 = 3;
    *(_DWORD*)NgxData_2b8a5a8 = 7233866;
    if ((NgxData_2b8a5b0 & 1) != 0) {
    LABEL_39:
      NgxData_2b8a5b8 = 3;
      *(_DWORD*)NgxData_2b8a5c0 = 6448454;
      if ((NgxData_2b8a5c8 & 1) != 0) {
        goto LABEL_40;
      }
      goto LABEL_52;
    }
  }
  else {
    LOBYTE(NgxData_2b8a598) = 6;
    *(_DWORD*)((char*)&NgxData_2b8a598 + 1) = 7233866;
    if ((NgxData_2b8a5b0 & 1) != 0) {
      goto LABEL_39;
    }
  }
  LOBYTE(NgxData_2b8a5b0) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a5b0 + 1) = 6448454;
  if ((NgxData_2b8a5c8 & 1) != 0) {
  LABEL_40:
    NgxData_2b8a5d0 = 3;
    *(_DWORD*)NgxData_2b8a5d8 = 7496013;
    if ((NgxData_2b8a5e0 & 1) != 0) {
      goto LABEL_41;
    }
    goto LABEL_53;
  }
LABEL_52:
  LOBYTE(NgxData_2b8a5c8) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a5c8 + 1) = 7496013;
  if ((NgxData_2b8a5e0 & 1) != 0) {
  LABEL_41:
    NgxData_2b8a5e8 = 3;
    *(_DWORD*)NgxData_2b8a5f0 = 7499841;
    if ((NgxData_2b8a5f8 & 1) != 0) {
      goto LABEL_42;
    }
    goto LABEL_54;
  }
LABEL_53:
  LOBYTE(NgxData_2b8a5e0) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a5e0 + 1) = 7499841;
  if ((NgxData_2b8a5f8 & 1) != 0) {
  LABEL_42:
    NgxData_2b8a600 = 3;
    *(_DWORD*)NgxData_2b8a608 = 7954765;
    if ((NgxData_2b8a610 & 1) != 0) {
      goto LABEL_43;
    }
    goto LABEL_55;
  }
LABEL_54:
  LOBYTE(NgxData_2b8a5f8) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a5f8 + 1) = 7954765;
  if ((NgxData_2b8a610 & 1) != 0) {
  LABEL_43:
    NgxData_2b8a618 = 3;
    *(_DWORD*)NgxData_2b8a620 = 7238986;
    if ((NgxData_2b8a628 & 1) != 0) {
      goto LABEL_44;
    }
    goto LABEL_56;
  }
LABEL_55:
  LOBYTE(NgxData_2b8a610) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a610 + 1) = 7238986;
  if ((NgxData_2b8a628 & 1) != 0) {
  LABEL_44:
    NgxData_2b8a630 = 3;
    *(_DWORD*)NgxData_2b8a638 = 7107914;
    if ((NgxData_2b8a640 & 1) != 0) {
      goto LABEL_45;
    }
    goto LABEL_57;
  }
LABEL_56:
  LOBYTE(NgxData_2b8a628) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a628 + 1) = 7107914;
  if ((NgxData_2b8a640 & 1) != 0) {
  LABEL_45:
    NgxData_2b8a648 = 3;
    *(_DWORD*)NgxData_2b8a650 = 6780225;
    if ((NgxData_2b8a658 & 1) != 0) {
      goto LABEL_46;
    }
    goto LABEL_58;
  }
LABEL_57:
  LOBYTE(NgxData_2b8a640) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a640 + 1) = 6780225;
  if ((NgxData_2b8a658 & 1) != 0) {
  LABEL_46:
    NgxData_2b8a660 = 3;
    *(_DWORD*)NgxData_2b8a668 = 7365971;
    if ((NgxData_2b8a670 & 1) != 0) {
      goto LABEL_47;
    }
    goto LABEL_59;
  }
LABEL_58:
  LOBYTE(NgxData_2b8a658) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a658 + 1) = 7365971;
  if ((NgxData_2b8a670 & 1) != 0) {
  LABEL_47:
    NgxData_2b8a678 = 3;
    *(_DWORD*)NgxData_2b8a680 = 7627599;
    if ((NgxData_2b8a688 & 1) != 0) {
      goto LABEL_48;
    }
  LABEL_60:
    LOBYTE(NgxData_2b8a688) = 6;
    *(_DWORD*)((char*)&NgxData_2b8a688 + 1) = 7761742;
    if ((NgxData_2b8a6a0 & 1) != 0) {
      goto LABEL_49;
    }
    goto LABEL_61;
  }
LABEL_59:
  LOBYTE(NgxData_2b8a670) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a670 + 1) = 7627599;
  if ((NgxData_2b8a688 & 1) == 0) {
    goto LABEL_60;
  }
LABEL_48:
  NgxData_2b8a690 = 3;
  *(_DWORD*)NgxData_2b8a698 = 7761742;
  if ((NgxData_2b8a6a0 & 1) != 0) {
  LABEL_49:
    NgxData_2b8a6a8 = 3;
    *(_DWORD*)NgxData_2b8a6b0 = 6513988;
    return;
  }
LABEL_61:
  LOBYTE(NgxData_2b8a6a0) = 6;
  *(_DWORD*)((char*)&NgxData_2b8a6a0 + 1) = 6513988;
}

void nvidia_df2e0()
{
  char* v0;
  _QWORD* v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)&NgxData_2b89eb8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(&NgxData_2b89eb8) != 0) {
    NgxRoutine_2b0();
    __cxa_guard_release_plt(&NgxData_2b89eb8);
  }
  if ((NgxData_2b8a148 & 1) != 0) {
    NgxData_2b8a150 = 2;
    v0 = (char*)NgxData_2b8a158;
  }
  else {
    LOBYTE(NgxData_2b8a148) = 4;
    v0 = (char*)&NgxData_2b8a148 + 4;
  }
  *((_DWORD*)v0 + 2) = 0;
  *(_QWORD*)v0 = 0x4D00000041LL;
  if ((NgxData_2b8a160 & 1) != 0) {
    NgxData_2b8a168 = 2;
    v1 = (_QWORD*)NgxData_2b8a170;
    *(_DWORD*)(NgxData_2b8a170 + 8) = 0;
    *v1 = 0x4D00000050LL;
  }
  else {
    LOBYTE(NgxData_2b8a160) = 4;
    NgxData_2b8a16c = 0;
    *(__int64*)((char*)&NgxData_2b8a160 + 4) = 0x4D00000050LL;
  }
}

void __attribute__((noreturn)) nvidia_df8d8(__int64 a1)
{
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  NgxRoutine_baf40(a1);
}

void __attribute__((noreturn)) nvidia_df9a0(__int64 a1)
{
  __cxa_guard_abort_plt(&NgxData_2b89de8);
  NgxRoutine_baf40(a1);
}

void __attribute__((noreturn)) nvidia_dfa90()
{
  NgxRoutine_be400((__int64)"vector");
}

__int64 nvidia_dfc50()
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((NgxData_2b8a310 & 1) != 0) {
    result =
        NgxRoutine_430(NgxData_2b8a320, NgxData_2b8a310 & 0xFFFFFFFFFFFFFFFELL);
    if ((NgxData_2b8a2f8 & 1) == 0) {
    LABEL_3:
      if ((NgxData_2b8a2e0 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_18;
    }
  }
  else if ((NgxData_2b8a2f8 & 1) == 0) {
    goto LABEL_3;
  }
  result =
      NgxRoutine_430(NgxData_2b8a308, NgxData_2b8a2f8 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a2e0 & 1) == 0) {
  LABEL_4:
    if ((NgxData_2b8a2c8 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_19;
  }
LABEL_18:
  result =
      NgxRoutine_430(NgxData_2b8a2f0, NgxData_2b8a2e0 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a2c8 & 1) == 0) {
  LABEL_5:
    if ((NgxData_2b8a2b0 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_20;
  }
LABEL_19:
  result =
      NgxRoutine_430(NgxData_2b8a2d8, NgxData_2b8a2c8 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a2b0 & 1) == 0) {
  LABEL_6:
    if ((NgxData_2b8a298 & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_21;
  }
LABEL_20:
  result =
      NgxRoutine_430(NgxData_2b8a2c0, NgxData_2b8a2b0 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a298 & 1) == 0) {
  LABEL_7:
    if ((NgxData_2b8a280 & 1) == 0) {
      goto LABEL_8;
    }
    goto LABEL_22;
  }
LABEL_21:
  result =
      NgxRoutine_430(NgxData_2b8a2a8, NgxData_2b8a298 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a280 & 1) == 0) {
  LABEL_8:
    if ((NgxData_2b8a268 & 1) == 0) {
      goto LABEL_9;
    }
    goto LABEL_23;
  }
LABEL_22:
  result =
      NgxRoutine_430(NgxData_2b8a290, NgxData_2b8a280 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a268 & 1) == 0) {
  LABEL_9:
    if ((NgxData_2b8a250 & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_24;
  }
LABEL_23:
  result =
      NgxRoutine_430(NgxData_2b8a278, NgxData_2b8a268 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a250 & 1) == 0) {
  LABEL_10:
    if ((NgxData_2b8a238 & 1) == 0) {
      goto LABEL_11;
    }
    goto LABEL_25;
  }
LABEL_24:
  result =
      NgxRoutine_430(NgxData_2b8a260, NgxData_2b8a250 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a238 & 1) == 0) {
  LABEL_11:
    if ((NgxData_2b8a220 & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_26;
  }
LABEL_25:
  result =
      NgxRoutine_430(NgxData_2b8a248, NgxData_2b8a238 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a220 & 1) == 0) {
  LABEL_12:
    if ((NgxData_2b8a208 & 1) == 0) {
      goto LABEL_13;
    }
    goto LABEL_27;
  }
LABEL_26:
  result =
      NgxRoutine_430(NgxData_2b8a230, NgxData_2b8a220 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a208 & 1) == 0) {
  LABEL_13:
    if ((NgxData_2b8a1f0 & 1) == 0) {
      goto LABEL_14;
    }
    goto LABEL_28;
  }
LABEL_27:
  result =
      NgxRoutine_430(NgxData_2b8a218, NgxData_2b8a208 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a1f0 & 1) == 0) {
  LABEL_14:
    if ((NgxData_2b8a1d8 & 1) == 0) {
      return result;
    }
    return NgxRoutine_430(NgxData_2b8a1e8,
                          NgxData_2b8a1d8 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_28:
  result =
      NgxRoutine_430(NgxData_2b8a200, NgxData_2b8a1f0 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a1d8 & 1) != 0) {
    return NgxRoutine_430(NgxData_2b8a1e8,
                          NgxData_2b8a1d8 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 nvidia_e01f0()
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((NgxData_2b8a6a0 & 1) != 0) {
    result =
        NgxRoutine_430(NgxData_2b8a6b0, NgxData_2b8a6a0 & 0xFFFFFFFFFFFFFFFELL);
    if ((NgxData_2b8a688 & 1) == 0) {
    LABEL_3:
      if ((NgxData_2b8a670 & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_28;
    }
  }
  else if ((NgxData_2b8a688 & 1) == 0) {
    goto LABEL_3;
  }
  result =
      NgxRoutine_430(NgxData_2b8a698, NgxData_2b8a688 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a670 & 1) == 0) {
  LABEL_4:
    if ((NgxData_2b8a658 & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_29;
  }
LABEL_28:
  result =
      NgxRoutine_430(NgxData_2b8a680, NgxData_2b8a670 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a658 & 1) == 0) {
  LABEL_5:
    if ((NgxData_2b8a640 & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_30;
  }
LABEL_29:
  result =
      NgxRoutine_430(NgxData_2b8a668, NgxData_2b8a658 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a640 & 1) == 0) {
  LABEL_6:
    if ((NgxData_2b8a628 & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_31;
  }
LABEL_30:
  result =
      NgxRoutine_430(NgxData_2b8a650, NgxData_2b8a640 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a628 & 1) == 0) {
  LABEL_7:
    if ((NgxData_2b8a610 & 1) == 0) {
      goto LABEL_8;
    }
    goto LABEL_32;
  }
LABEL_31:
  result =
      NgxRoutine_430(NgxData_2b8a638, NgxData_2b8a628 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a610 & 1) == 0) {
  LABEL_8:
    if ((NgxData_2b8a5f8 & 1) == 0) {
      goto LABEL_9;
    }
    goto LABEL_33;
  }
LABEL_32:
  result =
      NgxRoutine_430(NgxData_2b8a620, NgxData_2b8a610 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a5f8 & 1) == 0) {
  LABEL_9:
    if ((NgxData_2b8a5e0 & 1) == 0) {
      goto LABEL_10;
    }
    goto LABEL_34;
  }
LABEL_33:
  result =
      NgxRoutine_430(NgxData_2b8a608, NgxData_2b8a5f8 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a5e0 & 1) == 0) {
  LABEL_10:
    if ((NgxData_2b8a5c8 & 1) == 0) {
      goto LABEL_11;
    }
    goto LABEL_35;
  }
LABEL_34:
  result =
      NgxRoutine_430(NgxData_2b8a5f0, NgxData_2b8a5e0 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a5c8 & 1) == 0) {
  LABEL_11:
    if ((NgxData_2b8a5b0 & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_36;
  }
LABEL_35:
  result =
      NgxRoutine_430(NgxData_2b8a5d8, NgxData_2b8a5c8 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a5b0 & 1) == 0) {
  LABEL_12:
    if ((NgxData_2b8a598 & 1) == 0) {
      goto LABEL_13;
    }
    goto LABEL_37;
  }
LABEL_36:
  result =
      NgxRoutine_430(NgxData_2b8a5c0, NgxData_2b8a5b0 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a598 & 1) == 0) {
  LABEL_13:
    if ((NgxData_2b8a580 & 1) == 0) {
      goto LABEL_14;
    }
    goto LABEL_38;
  }
LABEL_37:
  result =
      NgxRoutine_430(NgxData_2b8a5a8, NgxData_2b8a598 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a580 & 1) == 0) {
  LABEL_14:
    if ((NgxData_2b8a568 & 1) == 0) {
      goto LABEL_15;
    }
    goto LABEL_39;
  }
LABEL_38:
  result =
      NgxRoutine_430(NgxData_2b8a590, NgxData_2b8a580 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a568 & 1) == 0) {
  LABEL_15:
    if ((NgxData_2b8a550 & 1) == 0) {
      goto LABEL_16;
    }
    goto LABEL_40;
  }
LABEL_39:
  result =
      NgxRoutine_430(NgxData_2b8a578, NgxData_2b8a568 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a550 & 1) == 0) {
  LABEL_16:
    if ((NgxData_2b8a538 & 1) == 0) {
      goto LABEL_17;
    }
    goto LABEL_41;
  }
LABEL_40:
  result =
      NgxRoutine_430(NgxData_2b8a560, NgxData_2b8a550 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a538 & 1) == 0) {
  LABEL_17:
    if ((NgxData_2b8a520 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_42;
  }
LABEL_41:
  result =
      NgxRoutine_430(NgxData_2b8a548, NgxData_2b8a538 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a520 & 1) == 0) {
  LABEL_18:
    if ((NgxData_2b8a508 & 1) == 0) {
      goto LABEL_19;
    }
    goto LABEL_43;
  }
LABEL_42:
  result =
      NgxRoutine_430(NgxData_2b8a530, NgxData_2b8a520 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a508 & 1) == 0) {
  LABEL_19:
    if ((NgxData_2b8a4f0 & 1) == 0) {
      goto LABEL_20;
    }
    goto LABEL_44;
  }
LABEL_43:
  result =
      NgxRoutine_430(NgxData_2b8a518, NgxData_2b8a508 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a4f0 & 1) == 0) {
  LABEL_20:
    if ((NgxData_2b8a4d8 & 1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_45;
  }
LABEL_44:
  result =
      NgxRoutine_430(NgxData_2b8a500, NgxData_2b8a4f0 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a4d8 & 1) == 0) {
  LABEL_21:
    if ((NgxData_2b8a4c0 & 1) == 0) {
      goto LABEL_22;
    }
    goto LABEL_46;
  }
LABEL_45:
  result =
      NgxRoutine_430(NgxData_2b8a4e8, NgxData_2b8a4d8 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a4c0 & 1) == 0) {
  LABEL_22:
    if ((NgxData_2b8a4a8 & 1) == 0) {
      goto LABEL_23;
    }
    goto LABEL_47;
  }
LABEL_46:
  result =
      NgxRoutine_430(NgxData_2b8a4d0, NgxData_2b8a4c0 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a4a8 & 1) == 0) {
  LABEL_23:
    if ((NgxData_2b8a490 & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_48;
  }
LABEL_47:
  result =
      NgxRoutine_430(NgxData_2b8a4b8, NgxData_2b8a4a8 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a490 & 1) == 0) {
  LABEL_24:
    if ((NgxData_2b8a478 & 1) == 0) {
      return result;
    }
    return NgxRoutine_430(NgxData_2b8a488,
                          NgxData_2b8a478 & 0xFFFFFFFFFFFFFFFELL);
  }
LABEL_48:
  result =
      NgxRoutine_430(NgxData_2b8a4a0, NgxData_2b8a490 & 0xFFFFFFFFFFFFFFFELL);
  if ((NgxData_2b8a478 & 1) != 0) {
    return NgxRoutine_430(NgxData_2b8a488,
                          NgxData_2b8a478 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

__int64 nvidia_e0bd0()
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((NgxData_2b8a160 & 1) != 0) {
    result = NgxRoutine_430(NgxData_2b8a170,
                            (4 * NgxData_2b8a160) & 0xFFFFFFFFFFFFFFF8LL);
  }
  if ((NgxData_2b8a148 & 1) != 0) {
    return NgxRoutine_430(NgxData_2b8a158,
                          (4 * NgxData_2b8a148) & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}

__int64 nvidia_e0c70(__int64 a1, _BYTE* a2)
{
  __int64 v3;
  void* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  char v8;
  __int64 v9;
  __int64 v11;
  void* v12;
  void*** v13;
  void** v14;

  nvidia_be650((void*)(&v11), a1);
  v3 = v11;
  v4 = NgxData_9511c0;
  v12 = NgxData_9511c0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511c0,
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511c0, (__int64)&v13,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  if (v6 >= (*(_QWORD*)(v3 + 24) - v5) >> 3 ||
      (v7 = *(__int64**)(v5 + 8 * v6)) == nullptr) {
    NgxRoutine_db120();
  }
  v8 = (*(__int64 (**)(__int64*))(*v7 + 32))(v7);
  v9 = *v7;
  *a2 = v8;
  (*(void (**)(__int64*))(v9 + 40))(v7);
  return NgxRoutine_db240(&v11);
}

__int64 nvidia_e0e68(__int64 a1)
{
  __int64 v2;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v2 = _Unwind_Resume_plt(a1);
  return NgxRoutine_e0e80(v2);
}

unsigned __int64 nvidia_e0f88(__int64 a1)
{
  unsigned __int8* v2;

  __cxa_guard_abort_plt(&NgxData_2b89de8);
  v2 = (unsigned __int8*)_Unwind_Resume_plt(a1);
  return NgxRoutine_e0fa0(v2);
}

__int64 nvidia_e1920(__int64 a1, _DWORD* a2)
{
  __int64 v3;
  void* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v11;
  void* v12;
  void*** v13;
  void** v14;

  nvidia_be650((void*)(&v11), a1);
  v3 = v11;
  v4 = NgxData_9511d8;
  v12 = NgxData_9511d8;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d8,
                           memory_order_acquire) != -1) {
    v14 = &v12;
    v13 = &v14;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d8, (__int64)&v13,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) - 1LL;
  if (v6 >= (*(_QWORD*)(v3 + 24) - v5) >> 3 ||
      (v7 = *(__int64**)(v5 + 8 * v6)) == nullptr) {
    NgxRoutine_db120();
  }
  v8 = (*(__int64 (**)(__int64*))(*v7 + 32))(v7);
  v9 = *v7;
  *a2 = v8;
  (*(void (**)(__int64*))(v9 + 40))(v7);
  return NgxRoutine_db240(&v11);
}

__int64 nvidia_e1a10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  void* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v10;
  void* v11;
  void*** v12;
  void** v13;

  nvidia_be650((void*)(&v10), a2);
  v4 = v10;
  v5 = NgxData_9511d0;
  v11 = NgxData_9511d0;
  if (atomic_load_explicit((atomic_ullong* volatile)NgxData_9511d0,
                           memory_order_acquire) != -1) {
    v13 = &v11;
    v12 = &v13;
    NgxRoutine_e21e0((unsigned __int64*)NgxData_9511d0, (__int64)&v12,
                     (void (*)(__int64))NgxRoutine_e0c40);
  }
  v6 = *(_QWORD*)(v4 + 16);
  v7 = *(int*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) - 1LL;
  if (v7 >= (*(_QWORD*)(v4 + 24) - v6) >> 3 ||
      (v8 = *(_QWORD*)(v6 + 8 * v7)) == 0) {
    NgxRoutine_db120();
  }
  (*(void (**)(__int64, char*, char*, __int64))(*(_QWORD*)v8 + 96LL))(
      v8, NgxData_9511c8, NgxData_9511c8 + 26, a3);
  NgxRoutine_db240(&v10);
  return a3;
}

char* nvidia_e1adc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6, __int64 a7, __int64 a8, __int64 a9, __int64 a10)
{
  _WORD* v11;

  NgxRoutine_db240(&a10);
  v11 = (_WORD*)_Unwind_Resume_plt(a1);
  return nvidia_e1af0_alt1(v11);
}

char* nvidia_e1af0(char* a1, char* a2, unsigned __int64 a3, signed int a4)
{
  char* v4;
  int v5;
  unsigned __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  char* v13;
  __int64 v14;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  bool v20;
  unsigned __int64 v21;

  v4 = a2;
  HIDWORD(v6) = a4 - 2;
  LODWORD(v6) = a4 - 2;
  v5 = v6 >> 1;
  if (v5 != 4) {
    if (v5 == 0) {
      return (char*)nvidia_e1d60((__int64)a1, (__int64)a2, a3);
    }
    if (v5 == 3) {
      return (char*)nvidia_e1e20((__int64)a1, (__int64)a2, a3);
    }
    if (v5 != 7) {
      v13 = a1;
      v14 = a2 - a1;
      v21 = a3;
      v16 = NgxRoutine_e1fc0(a3, a4);
      if (v14 < v16) {
        return a2;
      }
      v17 = a4;
      v18 = v21;
      v4 = &v13[v16];
      v19 = v4 - 1;
      do {
        *v19-- = NgxData_f20df[(unsigned int)(v18 % v17)];
        v20 = v18 >= v17;
        v18 /= v17;
      } while (v20);
      return v4;
    }
    return (char*)nvidia_e1f00((__int64)a1, (__int64)a2, a3);
  }
  if (a2 - a1 > 19 || (v7 = (1233 * (64 - (unsigned int)__clz(a3 | 1))) >> 12,
                       a2 - a1 >= v7 - (a3 < NgxData_9385b0[v7]) + 1)) {
    if (HIDWORD(a3) != 0) {
      if (a3 > 0x2540BE3FFLL) {
        v8 = a3;
        v9 = a3 / 0x2540BE400LL;
        a1 = (char*)NgxRoutine_bffc0(a1, a3 / 0x2540BE400LL);
        a3 = v8 - 10000000000LL * v9;
      }
      *(_WORD*)a1 = *(_WORD*)&NgxData_9384e4[2 * (a3 / 0x5F5E100)];
      *((_WORD*)a1 + 1) =
          *(_WORD*)&NgxData_9384e4[2 * (a3 % 0x5F5E100 / 0xF4240)];
      v10 = a3 % 0x5F5E100 % 0xF4240;
      *((_WORD*)a1 + 2) = *(_WORD*)&NgxData_9384e4[2 * (v10 / 0x2710uLL)];
      v10 %= 0x2710u;
      *((_WORD*)a1 + 3) =
          *(_WORD*)&NgxData_9384e4[2 * ((unsigned __int16)v10 / 0x64u)];
      *((_WORD*)a1 + 4) =
          *(_WORD*)&NgxData_9384e4[2 * ((unsigned __int16)v10 % 0x64u)];
      return a1 + 10;
    }
    else {
      return (char*)NgxRoutine_bffc0(a1, a3);
    }
  }
  return v4;
}

__int64 nvidia_e1d60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  _BYTE* v9;

  v3 = 64 - __clz(a3 | 1);
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x11) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 4;
      *(_DWORD*)(v6 - 4) = *(_DWORD*)&NgxData_9390f9[4 * (a3 & 0xF)];
      v6 -= 4;
      v8 = a3 > 0x10F;
      a3 >>= 4;
    } while (v8);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = NgxData_eacb9[v7 & 1];
    v8 = v7 > 1;
    v7 >>= 1;
  } while (v8);
  return v5;
}

__int64 nvidia_e1e20(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (86 * (66 - (unsigned int)__clz(a3 | 1))) >> 8;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x41) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 6;
      v8 = *(_WORD*)&NgxData_9390f9[2 * (a3 & 0x3F) + 64];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x40);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = NgxData_edc6e[v7 & 7];
    v10 = v7 > 7;
    v7 >>= 3;
  } while (v10);
  return v5;
}

__int64 nvidia_e1f00(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  signed __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int16 v8;
  _BYTE* v9;
  bool v10;

  v3 = (67 - __clz(a3 | 1)) >> 2;
  if (a2 - a1 < v3) {
    return a2;
  }
  v5 = a1 + v3;
  if (a3 < 0x101) {
    v7 = a3;
    v6 = v5;
  }
  else {
    v6 = a1 + v3;
    do {
      v7 = a3 >> 8;
      v8 = *(_WORD*)&NgxData_9390f9[2 * (unsigned __int8)a3 + 192];
      a3 = v7;
      *(_WORD*)(v6 - 2) = v8;
      v6 -= 2;
    } while (v7 > 0x100);
  }
  v9 = (_BYTE*)(v6 - 1);
  do {
    *v9-- = NgxData_f363d[v7 & 0xF];
    v10 = v7 > 0xF;
    v7 >>= 4;
  } while (v10);
  return v5;
}

void __attribute__((noreturn)) nvidia_e21bc(__int64 a1)
{
  __int64 v1;

  NgxRoutine_dfc20((__int64*)(v1 - 40));
  _Unwind_Resume_plt(a1);
  __udf(0);
}

void __attribute__((noreturn)) nvidia_e22b4(__int64 a1)
{
  __int64 v1;

  NgxRoutine_e22d0(v1, 0);
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__attribute__((swiftcall)) void nvidia_e2e10(PSEUDO_X8 x8_, __int64 unused_int0,
                                             int a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* result;

  if (a1 <= 1) {
    if (a1 != 0) {
      if (a1 == 1) {
        result = (char*)NgxRoutine_420(80);
        *a2 = 81;
        a2[1] = 72;
        a2[2] = result;
        strcpy(result, "The future has already been retrieved from the promise "
                       "or packaged_task.");
        {
          result;
          return;
        }
      }
      goto LABEL_12;
    }
  LABEL_9:
    result = (char*)NgxRoutine_420(96);
    *a2 = 97;
    a2[1] = 88;
    a2[2] = result;
    strcpy(result, "The associated promise has been destructed prior to the "
                   "associated state becoming ready.");
    {
      result;
      return;
    }
  }
  switch (a1) {
  case 2:
    result = (char*)NgxRoutine_420(48);
    *a2 = 49;
    a2[1] = 46;
    a2[2] = result;
    strcpy(result, "The state of the promise has already been set.");
    {
      result;
      return;
    }
  case 3:
    result = (char*)NgxRoutine_420(72);
    *a2 = 73;
    a2[1] = 65;
    a2[2] = result;
    strcpy(result,
           "Operation not permitted on an object without an associated state.");
    {
      result;
      return;
    }
  case 4:
    goto LABEL_9;
  default:
    break;
  }
LABEL_12:
  result = (char*)NgxRoutine_420(32);
  *a2 = 33;
  a2[1] = 30;
  a2[2] = result;
  strcpy(result, "unspecified future_errc value\n");
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
