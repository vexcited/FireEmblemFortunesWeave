#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _QWORD SdkData_10492f0[9];
extern __int64 SdkData_1051400;
extern _UNKNOWN SdkData_1051408;
extern __int64 SdkData_10567d0;
extern _UNKNOWN SdkData_10567d8;
extern _UNKNOWN SdkData_1056800;
extern _UNKNOWN SdkData_105aa10;
extern int SdkData_105aab0;
extern _UNKNOWN SdkData_105aab4;
extern char SdkData_105b400;
extern __int64 SdkData_105b408;
extern __int64 SdkData_105b410;
extern __int64 SdkData_105b418;
extern __int64 SdkData_105b420;
extern __int64 SdkData_105b428;
extern __int64 SdkData_105b430;
extern __int64 SdkData_105b438;
extern _UNKNOWN SdkData_bb06b0;
extern __int128 SdkData_bb0ef0;
extern __int128 SdkData_bb1400;
extern __int128 SdkData_bb1aa0;
extern __int128 SdkData_bb2850;
extern __int128 SdkData_bb3590;
extern __int128 SdkData_bb35a0;
extern __int128 SdkData_bb35c0;
extern __int128 SdkData_bb35d0;
extern __int128 SdkData_bb3800;
extern __int128 SdkData_bb3e40;
extern __int128 SdkData_bb4110;
extern __int128 SdkData_bb4750;
extern __int128 SdkData_bb4cb0;
extern __int128 SdkData_bb50b0;
extern char SdkData_bbbd5c;
extern __int64 (*SdkData_bd16c0)();
extern _UNKNOWN SdkData_ca72b4;
extern __int16 SdkData_ca7dde[30];
extern unsigned __int8 SdkData_ca7e1a[256];
extern unsigned __int8 SdkData_ca7f1a[3074];
extern _UNKNOWN SdkData_cad77e;
extern _UNKNOWN SdkData_cb7898;
extern unsigned int SdkData_ce2d58[74];
extern __int64 (*SdkData_e7c7c0[])();
extern __int64 (*SdkData_e7cd38[])();
extern __int64 (*SdkData_e7cea8)();
extern __int64 (*SdkData_e7cfd0[])();
extern __int64 (*SdkData_e7d010)();
extern __int64 (*SdkData_e7d1e0[])();
extern __int64 (*SdkData_e7d258)();
extern __int64 (*SdkData_e7d448[])();
extern __int64 (*SdkData_e7d5c0)();
extern __int64 (*SdkData_e7d800[])();
extern __int64 (*SdkData_e7d9b8)();
extern _UNKNOWN* SdkData_e7dba0;
extern __int64 SdkData_e86d80;
extern __int64 SdkData_e891e8;
extern __int64 SdkData_e89308;
extern __int64 SdkData_e89310;
extern __int64 SdkData_e89328;
extern __int64 SdkData_e89330;
extern __int64 SdkData_e89338;
extern __int64 SdkData_e89340;
extern __int64 SdkData_e89348;
extern __int64 SdkData_e89350;
extern __int64 SdkData_e89358;
extern __int64 SdkData_e89398;
extern __int64 SdkData_e893a0;
extern __int64 SdkData_e893a8;
extern __int64 SdkData_e893b0;
extern int SdkData_ea8f30;
extern int SdkData_ea8f34;
extern int* SdkData_ea8f38;
extern _UNKNOWN SdkData_ea91e0;
extern _UNKNOWN SdkData_ea91e8;
extern _UNKNOWN* SdkData_ea91f8;
void __attribute__((noreturn)) SdkRoutine_2b2f80(void);
__int64 SdkRoutine_2d0();
__int64 SdkRoutine_715fa0(_QWORD, _QWORD);
__attribute__((swiftcall)) void SdkRoutine_717720(PSEUDO_X8, _QWORD, _QWORD);
__int64 SdkRoutine_728fe0(void);
unsigned __int64 SdkRoutine_730ec0(unsigned __int64*, unsigned __int64,
                                   unsigned __int64, unsigned __int64);
__int64 SdkRoutine_731120(__int64 result, __int64, __int64, unsigned __int64);
__int64 SdkRoutine_73b3a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_73b5a0(_QWORD, _QWORD);
__int64 SdkRoutine_73cec0(void);
__int64 SdkRoutine_73d400(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_745d80();
__int64 SdkRoutine_7477f0();
__int64 SdkRoutine_751ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_760770(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_760940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_760d50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_761590(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_76d3c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76d580(_QWORD);
__int64 SdkRoutine_76d990(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76dac0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76de40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_76e380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_76e940(_QWORD, _QWORD);
_UNKNOWN** SdkRoutine_777680(int, char*, const char*);
__int64 SdkRoutine_778620(__int64);
__int64 SdkRoutine_778650(__int64 result);
__int64 SdkRoutine_778670(__int64 result);
__int64 SdkRoutine_778820(_QWORD, _QWORD, _QWORD);
void* SdkRoutine_779020();
__int64 SdkRoutine_779050();
__int64 SdkRoutine_77a990(__int64);
__int64 SdkRoutine_77a9a0(__int64);
__attribute__((swiftcall)) void SdkRoutine_77b320(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_77b500(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_78ead0(_QWORD);
__int64 SdkRoutine_7939e0(_QWORD, _QWORD);
__int64 SdkRoutine_7969e0(_QWORD, _QWORD);
__int64 SdkRoutine_7a0620(__int64);
__attribute__((swiftcall)) void SdkRoutine_7a89b0(PSEUDO_X8, _QWORD);
__int64 SdkRoutine_7bc8c0(void);
__int64 SdkRoutine_7bd280(void);
__int64 SdkRoutine_7bd8c0(void);
__int64 SdkRoutine_7be2c0(void);
__int64 SdkRoutine_7be960(void);
__int64 SdkRoutine_7bf000(void);
__int64 SdkRoutine_7bf680(void);
__int64 SdkRoutine_7bfcc0(void);
__int64 SdkRoutine_7c0300(void);
__int64 SdkRoutine_7c0940(void);
__int64 SdkRoutine_7c0f80(void);
__int64 SdkRoutine_7c15c0(void);
__int64 SdkRoutine_7c1c00(void);
void __attribute__((noreturn)) SdkRoutine_7cd620();
__int64 SdkRoutine_7ced40(_QWORD);
__int64 SdkRoutine_7ced70(_QWORD);
__int64 SdkRoutine_7d18c0(_QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_7d3920();
void __attribute__((noreturn)) SdkRoutine_7d3940(_QWORD);
__int64 SdkRoutine_7d39a0(_QWORD, _QWORD);
__int64 SdkRoutine_7d5890(_QWORD, _QWORD);
__int64 SdkRoutine_7d58e0(_QWORD);
__int64 SdkRoutine_7d63a0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_7d7030(_QWORD, _QWORD);
long double SdkRoutine_853920(long double, long double);
__int64 SdkRoutine_853d90(long double, long double);
__int64 SdkRoutine_853e30(long double, long double);
long double SdkRoutine_853f10(long double, long double);
long double SdkRoutine_854610(float);
__int64 SdkRoutine_8546b0(long double);
long double SdkRoutine_854850(_QWORD);
long double SdkRoutine_854fd0(long double, long double);
long double SdkRoutine_855490(long double, long double);
float SdkRoutine_855690(long double);
__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_857150(_QWORD);
__int64 SdkRoutine_8571c0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_8572f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_8578d0(_QWORD);
__int64 SdkRoutine_857cc0(_QWORD, _QWORD);
__int64 SdkRoutine_857e60(_QWORD);
void SdkRoutine_8584f0(void*, void*);
__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_858b30(_QWORD, _QWORD, const char*, ...);
__int64 SdkRoutine_858b60(_QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_858d00(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_858d40(_QWORD);
__int64 SdkRoutine_858d50(_QWORD);
__int64 SdkRoutine_858db0(_QWORD);
__int64 SdkRoutine_8595c0(_QWORD);
__int64 SdkRoutine_859a50(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_859a90(_QWORD, _QWORD);
__int64 SdkRoutine_859ab0(_QWORD);
__int64 SdkRoutine_859ac0(_QWORD);
__int64 SdkRoutine_859ad0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_859ae0(_QWORD);
__int64 SdkRoutine_859af0(_QWORD, _QWORD);
__int64 SdkRoutine_85adb0(_QWORD);
__int64 SdkRoutine_85b140(_QWORD);
__int64 SdkRoutine_85be70(_QWORD);
__int64 SdkRoutine_85c490(_QWORD);
__int64 SdkRoutine_85c4a0(_QWORD);
__int64 SdkRoutine_85c580(_QWORD);
__int64 SdkRoutine_85dfb0(_QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_86e960(_QWORD);
__int64 SdkRoutine_86fc80(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a580(_QWORD);
__int64 SdkRoutine_87a5c0(_QWORD);
__int64 SdkRoutine_87a5d0(void);
__int64 SdkRoutine_87a5e0(_QWORD, _QWORD);
__int64 SdkRoutine_87a6e0(void);
__int64 SdkRoutine_87a740(_QWORD);
__int64 SdkRoutine_87a750(_QWORD, _QWORD);
__int64 SdkRoutine_87a780(_QWORD);
__int64 SdkRoutine_87a7d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a7e0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a7f0(_QWORD, _QWORD);
__int64 SdkRoutine_87a800(_QWORD, _QWORD);
__int64 SdkRoutine_87a850(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a860(_QWORD, _QWORD);
__int64 SdkRoutine_87a8c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a8d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87a8f0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87aae0(_QWORD);
__int64 SdkRoutine_87ab20(_QWORD);
__int64 SdkRoutine_87ab40(void);
__int64 SdkRoutine_87aba0(_QWORD, _QWORD);
__int64 SdkRoutine_87abc0(_QWORD, _QWORD);
__int64 SdkRoutine_87ac50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87ac60(_QWORD);
__int64 SdkRoutine_87ac70(_QWORD);
__int64 SdkRoutine_87ac90(_QWORD, _QWORD);
__int64 SdkRoutine_87acd0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87ace0(_QWORD, _QWORD, float);
__int64 SdkRoutine_87acf0(_QWORD, _QWORD);
__int64 SdkRoutine_87ad80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87adb0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87add0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87adf0(void);
__int64 SdkRoutine_87ae20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_87aec0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87b850(void);
__int64 SdkRoutine_87b8e0(_QWORD, _QWORD);
__int64 SdkRoutine_87b940(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87b980(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87b9a0(_QWORD);
__int64 SdkRoutine_87b9b0(_QWORD);
__int64 SdkRoutine_87b9c0(_QWORD, _QWORD);
__int64 SdkRoutine_87ba10(_QWORD);
__int64 SdkRoutine_87bb20(long double);
__int64 SdkRoutine_87bbe0(void);
long double SdkRoutine_87bca0(long double, long double);
long double SdkRoutine_87bcf0(long double, long double);
long double SdkRoutine_87bda0(long double);
__int64 SdkRoutine_87c230(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87c280(_QWORD, _QWORD);
__int64 SdkRoutine_87c450(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87c6f0(long double, long double);
__int64 SdkRoutine_87c790(_QWORD);
__int64 SdkRoutine_87c7a0(void);
__int64 SdkRoutine_87c7b0(_QWORD);
__int64 SdkRoutine_87c840(_QWORD);
__int64 SdkRoutine_87c880(_QWORD);
__int64 SdkRoutine_87c8d0(_QWORD);
__int64 SdkRoutine_87c8e0(void);
__int64 SdkRoutine_87c8f0(_QWORD);
__int64 SdkRoutine_87c910(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_87c920(_QWORD);
__int64 SdkRoutine_87c930(void);
__int64 SdkRoutine_87c940(_QWORD, _QWORD);
__int64 SdkRoutine_87c950(void);
__int64 SdkRoutine_87c9d0(_QWORD);
__int64 SdkRoutine_87c9e0(_QWORD);
__int64 SdkRoutine_87cac0(_QWORD, _QWORD);
__int64 SdkRoutine_afbd0(void);
__int64 SdkRoutine_e3830(__int64 result);
__int64 SdkRoutine_f3b00(__int64, int);

float SdkHr_72ba70(__int64 a1, __int64 a2)
{
  float v2;
  float v3;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  __int64 v47;
  float v48;
  __int64 v49;
  __int64 v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  float v63;
  float v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  float v74;
  float v75;
  float v76;
  float v77;
  __int64 v78;
  __int64 v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  float v106;
  __int64 v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  _QWORD v136[9];
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;

  v2 = *(float*)(a1 + 7984);
  v3 = *(float*)(a1 + 7988);
  v6 = *(float*)(a1 + 7768) - v2;
  v7 = *(float*)(a1 + 7772);
  v8 = *(float*)(a1 + 7992);
  v9 = *(_QWORD*)(a1 + 8008);
  v10 = *(_QWORD*)(a2 + 288);
  v137 = *(_QWORD*)(a1 + 8000);
  v138 = v9;
  v139 = *(_QWORD*)(a1 + 8016);
  v11 = v7 - v3;
  v12 = *(float*)(a1 + 7776) - v8;
  v13 = *(float*)(a1 + 7780) - v2;
  v14 = *(float*)(a1 + 7784) - v3;
  v15 = *(float*)(a1 + 7788) - v8;
  v137 = *(_QWORD*)SdkRoutine_715fa0(v10, &v137);
  v138 = *(_QWORD*)SdkRoutine_715fa0(v10, &v138);
  v16 = *(_QWORD*)SdkRoutine_715fa0(v10, &v139);
  v17 = v137;
  v18 = v138;
  v19 = a2 + 144;
  *(float*)(a2 + 4 * v137) = v6;
  *(float*)(a2 + 4 * v18) = v11;
  *(float*)(a2 + 4 * v16) = v12;
  *(float*)(v19 + 4 * v17) = v13;
  *(float*)(v19 + 4 * v18) = v14;
  *(float*)(v19 + 4 * v16) = v15;
  v20 = *(float*)(a1 + 7792);
  v21 = *(float*)(a1 + 8064);
  v22 = *(float*)(a1 + 8068);
  v23 = *(float*)(a1 + 8072);
  v24 = *(_QWORD*)(a1 + 8088);
  v25 = *(_QWORD*)(a2 + 288);
  v137 = *(_QWORD*)(a1 + 8080);
  v138 = v24;
  v26 = v20 - v21;
  v27 = *(float*)(a1 + 7796);
  v139 = *(_QWORD*)(a1 + 8096);
  v28 = v27 - v22;
  v29 = *(float*)(a1 + 7800) - v23;
  v30 = *(float*)(a1 + 7804) - v21;
  v31 = *(float*)(a1 + 7808) - v22;
  v32 = *(float*)(a1 + 7812) - v23;
  v137 = *(_QWORD*)SdkRoutine_715fa0(v25, &v137);
  v138 = *(_QWORD*)SdkRoutine_715fa0(v25, &v138);
  v33 = (__int64*)SdkRoutine_715fa0(v25, &v139);
  v34 = v137;
  v35 = v138;
  v36 = *v33;
  v144 = 0;
  v145 = 0;
  v142 = 0;
  v143 = 0;
  v140 = 0;
  v141 = 0;
  v138 = 0;
  v139 = 0;
  *(float*)(a2 + 4 * v137) = v26;
  *(float*)(a2 + 4 * v35) = v28;
  *(float*)(a2 + 4 * v36) = v29;
  *(float*)(v19 + 4 * v34) = v30;
  *(float*)(v19 + 4 * v35) = v31;
  *(float*)(v19 + 4 * v36) = v32;
  v37 = *(float*)(a1 + 8104);
  v38 = *(float*)(a1 + 7852);
  v39 = *(float*)(a1 + 8108);
  v40 = *(float*)(a1 + 8112);
  v41 = *(float*)(a1 + 7816) - v37;
  v42 = *(float*)(a1 + 8116);
  v43 = *(float*)(a1 + 8120);
  v44 = *(float*)(a1 + 8124);
  v45 = *(float*)(a1 + 8128);
  v46 = *(_QWORD*)(a1 + 8200);
  v136[6] = *(_QWORD*)(a1 + 0x2000);
  v136[7] = v46;
  v47 = *(_QWORD*)(a1 + 8168);
  v48 = *(float*)(a1 + 8132);
  v49 = *(_QWORD*)(a1 + 8184);
  v50 = *(_QWORD*)(a1 + 8208);
  v51 = *(float*)(a1 + 8136);
  v52 = *(float*)(a1 + 7820) - v39;
  v53 = *(float*)(a1 + 7824) - v40;
  v54 = *(float*)(a1 + 7828) - v42;
  v55 = *(float*)(a1 + 7832) - v43;
  v56 = *(float*)(a1 + 7836) - v44;
  v57 = *(float*)(a1 + 7840) - v45;
  v58 = *(float*)(a1 + 7844) - v48;
  v59 = *(float*)(a1 + 7848) - v51;
  v60 = *(_QWORD*)(a2 + 288);
  v122 = v41;
  v136[2] = *(_QWORD*)(a1 + 8160);
  v136[3] = v47;
  v61 = *(_QWORD*)(a1 + 8176);
  v136[8] = v50;
  v137 = 0;
  v62 = *(_QWORD*)(a1 + 8152);
  v134 = v38 - v37;
  v63 = *(float*)(a1 + 7856) - v39;
  v64 = *(float*)(a1 + 7860);
  v136[4] = v61;
  v136[5] = v49;
  v136[0] = *(_QWORD*)(a1 + 8144);
  v136[1] = v62;
  v130 = v64 - v40;
  v132 = v63;
  v127 = *(float*)(a1 + 7868) - v43;
  v128 = *(float*)(a1 + 7864) - v42;
  v125 = *(float*)(a1 + 7876) - v45;
  v126 = *(float*)(a1 + 7872) - v44;
  v123 = *(float*)(a1 + 7884) - v51;
  v124 = *(float*)(a1 + 7880) - v48;
  SdkRoutine_717720((void*)&v137, v60, v136);
  v65 = v137;
  v66 = v138;
  v67 = v145;
  *(float*)(a2 + 4 * v137) = v122;
  v68 = v139;
  v69 = v140;
  v70 = v141;
  v71 = v142;
  v72 = v143;
  v73 = v144;
  *(float*)(a2 + 4 * v66) = v52;
  *(float*)(a2 + 4 * v68) = v53;
  *(float*)(a2 + 4 * v69) = v54;
  *(float*)(a2 + 4 * v70) = v55;
  *(float*)(a2 + 4 * v71) = v56;
  *(float*)(a2 + 4 * v72) = v57;
  *(float*)(a2 + 4 * v73) = v58;
  *(float*)(a2 + 4 * v67) = v59;
  *(float*)(v19 + 4 * v65) = v134;
  *(float*)(v19 + 4 * v66) = v132;
  *(float*)(v19 + 4 * v68) = v130;
  *(float*)(v19 + 4 * v69) = v128;
  *(float*)(v19 + 4 * v70) = v127;
  *(float*)(v19 + 4 * v71) = v126;
  *(float*)(v19 + 4 * v72) = v125;
  *(float*)(v19 + 4 * v73) = v124;
  *(float*)(v19 + 4 * v67) = v123;
  v74 = *(float*)(a1 + 7888);
  v75 = *(float*)(a1 + 8216);
  v76 = *(float*)(a1 + 8220);
  v77 = *(float*)(a1 + 8224);
  v78 = *(_QWORD*)(a1 + 8240);
  v79 = *(_QWORD*)(a2 + 288);
  v137 = *(_QWORD*)(a1 + 8232);
  v138 = v78;
  v80 = v74 - v75;
  v81 = *(float*)(a1 + 7892);
  v139 = *(_QWORD*)(a1 + 8248);
  v82 = v81 - v76;
  v83 = *(float*)(a1 + 7896) - v77;
  v84 = *(float*)(a1 + 7900) - v75;
  v85 = *(float*)(a1 + 7904) - v76;
  v86 = *(float*)(a1 + 7908) - v77;
  v137 = *(_QWORD*)SdkRoutine_715fa0(v79, &v137);
  v138 = *(_QWORD*)SdkRoutine_715fa0(v79, &v138);
  v87 = (__int64*)SdkRoutine_715fa0(v79, &v139);
  v88 = v137;
  v89 = v138;
  v90 = *v87;
  *(float*)(a2 + 4 * v137) = v80;
  *(float*)(a2 + 4 * v89) = v82;
  *(float*)(a2 + 4 * v90) = v83;
  *(float*)(v19 + 4 * v88) = v84;
  *(float*)(v19 + 4 * v89) = v85;
  *(float*)(v19 + 4 * v90) = v86;
  v91 = *(float*)(a1 + 8256);
  v92 = *(float*)(a1 + 8260);
  v93 = *(float*)(a1 + 8264);
  v94 = *(float*)(a1 + 8276);
  v95 = *(float*)(a1 + 7944);
  v96 = *(float*)(a1 + 7912) - v91;
  v97 = *(float*)(a1 + 8288);
  v98 = *(float*)(a1 + 7948);
  v99 = *(float*)(a1 + 7916) - v92;
  v100 = *(float*)(a1 + 7920) - v93;
  v101 = *(float*)(a1 + 7932) - v94;
  v102 = *(float*)(a1 + 8272);
  v103 = *(_QWORD*)(a1 + 8320);
  v139 = *(_QWORD*)(a1 + 8312);
  v140 = v103;
  v104 = *(_QWORD*)(a1 + 8336);
  v105 = *(_QWORD*)(a2 + 288);
  v106 = *(float*)(a1 + 7928) - v102;
  v133 = v95 - v97;
  v135 = v101;
  v141 = *(_QWORD*)(a1 + 8328);
  v142 = v104;
  v107 = *(_QWORD*)(a1 + 8304);
  v129 = v100;
  v131 = v98 - v91;
  v108 = *(float*)(a1 + 7952);
  v137 = *(_QWORD*)(a1 + 8296);
  v138 = v107;
  v109 = v108 - v92;
  v110 = *(float*)(a1 + 7956) - v93;
  v111 = *(float*)(a1 + 7964) - v102;
  v112 = *(float*)(a1 + 7968) - v94;
  v113 = *(float*)(a1 + 7980) - v97;
  v137 = *(_QWORD*)SdkRoutine_715fa0(v105, &v137);
  v138 = *(_QWORD*)SdkRoutine_715fa0(v105, &v138);
  v139 = *(_QWORD*)SdkRoutine_715fa0(v105, &v139);
  v140 = *(_QWORD*)SdkRoutine_715fa0(v105, &v140);
  v141 = *(_QWORD*)SdkRoutine_715fa0(v105, &v141);
  v114 = (__int64*)SdkRoutine_715fa0(v105, &v142);
  v115 = v137;
  v116 = v138;
  v117 = *v114;
  v118 = v141;
  *(float*)(a2 + 4 * v137) = v96;
  v119 = v139;
  v120 = v140;
  *(float*)(a2 + 4 * v116) = v99;
  *(float*)(a2 + 4 * v119) = v129;
  *(float*)(a2 + 4 * v120) = v106;
  *(float*)(a2 + 4 * v118) = v135;
  *(float*)(a2 + 4 * v117) = v133;
  *(float*)(v19 + 4 * v115) = v131;
  *(float*)(v19 + 4 * v116) = v109;
  *(float*)(v19 + 4 * v119) = v110;
  *(float*)(v19 + 4 * v120) = v111;
  *(float*)(v19 + 4 * v118) = v112;
  *(float*)(v19 + 4 * v117) = v113;
  return v131;
}

_QWORD* SdkHr_72bfd0(__int64 a1, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  int v4;

  v2 = (_QWORD*)(a1 + 8344);
  if ((*(_BYTE*)(a1 + 8384) & 1) == 0) {
    v3 = *a2;
    v4 = *((_DWORD*)a2 + 2);
    *(_QWORD*)(a1 + 8360) = 0;
    *(_QWORD*)(a1 + 8368) = 0;
    *(_QWORD*)(a1 + 8376) = 0;
    *v2 = v3;
    *(_DWORD*)(a1 + 8352) = v4;
    *(_BYTE*)(a1 + 8384) = 1;
    SdkRoutine_728fe0();
  }
  return v2;
}

unsigned __int64 SdkHr_7312c0(unsigned __int64* a1, unsigned __int64* a2,
                              __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 result;
  unsigned __int64 v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;

  result = SdkRoutine_731120((__int64)a1, a2[388], a3, a4);
  v8 = a2;
  if (*a2 == 0) {
    v8 = a2;
    do {
      v9 = v8[3];
      v8 += 3;
    } while (v9 == 0);
  }
  v10 = &a2[3 * a2[387]];
  if (*v10 == 0) {
    do {
      v11 = v10[3];
      v10 += 3;
    } while (v11 == 0);
  }
  while (v8 != v10) {
    result = SdkRoutine_730ec0(a1, v8[1], v8[2], v7);
    do {
      v12 = v8[3];
      v8 += 3;
    } while (v12 == 0);
  }
  return result;
}

unsigned __int64* SdkHr_731360(unsigned __int64* a1, unsigned __int64* a2,
                               __int64 a3, unsigned __int64 a4)
{
  unsigned __int64* v6;
  unsigned __int64 v7;
  unsigned __int64* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;

  if (a1[388] != 0) {
    v6 = a1;
    if (*a1 == 0) {
      v6 = a1;
      do {
        v7 = v6[3];
        v6 += 3;
      } while (v7 == 0);
    }
    v8 = &a1[3 * a1[387]];
    if (*v8 == 0) {
      do {
        v9 = v8[3];
        v8 += 3;
      } while (v9 == 0);
    }
    while (v6 != v8) {
      *v6 = 0;
      do {
        v10 = v6[3];
        v6 += 3;
      } while (v10 == 0);
    }
    a1[388] = 0;
  }
  SdkRoutine_731120((__int64)a1, a2[388], a3, a4);
  v12 = a2;
  if (*a2 == 0) {
    v12 = a2;
    do {
      v13 = v12[3];
      v12 += 3;
    } while (v13 == 0);
  }
  v14 = &a2[3 * a2[387]];
  if (*v14 == 0) {
    do {
      v15 = v14[3];
      v14 += 3;
    } while (v15 == 0);
  }
  while (v12 != v14) {
    SdkRoutine_730ec0(a1, v12[1], v12[2], v11);
    do {
      v16 = v12[3];
      v12 += 3;
    } while (v16 == 0);
  }
  return a1;
}

float SdkHr_7314a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  float result;
  __int64 v5;

  v2 = a2 + 16;
  for (i = 0; i != 72; i += 8) {
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * **(_QWORD**)(a1 + 32) * *(_QWORD*)(a1 + 8)) =
        *(_DWORD*)(v2 - 16);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 - 12);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 16LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 - 8);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 - 4);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)v2;
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 40LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 + 4);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 48LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 + 8);
    *(_DWORD*)(*(_QWORD*)a1 +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + i) * *(_QWORD*)(a1 + 16) +
               4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 56LL) *
                   *(_QWORD*)(a1 + 8)) = *(_DWORD*)(v2 + 12);
    result = *(float*)(v2 + 16);
    v2 += 36;
    v5 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + i);
    *(float*)(*(_QWORD*)a1 + 4 * v5 * *(_QWORD*)(a1 + 16) +
              4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 64LL) *
                  *(_QWORD*)(a1 + 8)) = result;
  }
  return result;
}

float SdkHr_732b60(_QWORD* a1, _DWORD** a2)
{
  float result;

  *(_DWORD*)(*a1 + 4LL * a1[2] * a1[1]) = **a2;
  *(_DWORD*)(*a1 + 4LL * (a1[1] + a1[1] * a1[2])) = (*a2)[1];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 2LL) * a1[1]) = (*a2)[2];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 3LL) * a1[1]) = (*a2)[3];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 4LL) * a1[1]) = (*a2)[4];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 5LL) * a1[1]) = (*a2)[5];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 6LL) * a1[1]) = (*a2)[6];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 7LL) * a1[1]) = (*a2)[7];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 8LL) * a1[1]) = (*a2)[8];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 9LL) * a1[1]) = (*a2)[9];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 10LL) * a1[1]) = (*a2)[10];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 11LL) * a1[1]) = (*a2)[11];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 12LL) * a1[1]) = (*a2)[12];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 13LL) * a1[1]) = (*a2)[13];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 14LL) * a1[1]) = (*a2)[14];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 15LL) * a1[1]) = (*a2)[15];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 16LL) * a1[1]) = (*a2)[16];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 17LL) * a1[1]) = (*a2)[17];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 18LL) * a1[1]) = (*a2)[18];
  *(_DWORD*)(*a1 + 4 * (a1[2] + 19LL) * a1[1]) = (*a2)[19];
  result = *((float*)*a2 + 20);
  *(float*)(*a1 + 4 * (a1[2] + 20LL) * a1[1]) = result;
  return result;
}

float SdkHr_733f80(_QWORD* a1, float a2)
{
  float* v2;
  float v3;
  float v4;
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
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float* v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;

  v2 = (float*)a1[1];
  v3 = 1.0 - a2;
  v4 = a2 * (float)(1.0 - a2);
  v5 = a2 * *(float*)(*a1 + 64LL);
  v6 = a2 * *(float*)(*a1 + 68LL);
  v7 = a2 * *(float*)(*a1 + 72LL);
  v8 = (float)(1.0 - a2) * v2[4];
  v9 = (float)(1.0 - a2) * v2[5];
  v10 = (float)(1.0 - a2) * v2[6];
  v11 = (float)(1.0 - a2) * v2[7];
  v65 = a2 * *(float*)(*a1 + 4LL);
  v66 = a2 * *(float*)*a1;
  v63 = a2 * *(float*)(*a1 + 12LL);
  v64 = a2 * *(float*)(*a1 + 8LL);
  v61 = a2 * *(float*)(*a1 + 20LL);
  v62 = a2 * *(float*)(*a1 + 16LL);
  v59 = a2 * *(float*)(*a1 + 28LL);
  v60 = a2 * *(float*)(*a1 + 24LL);
  v57 = a2 * *(float*)(*a1 + 36LL);
  v58 = a2 * *(float*)(*a1 + 32LL);
  v12 = v2[2];
  v13 = v2[3];
  v14 = (float)(1.0 - a2) * v2[20];
  v67 = a2 * *(float*)(*a1 + 80LL);
  v68 = a2 * *(float*)(*a1 + 76LL);
  v15 = (float)(1.0 - a2) * *v2;
  v16 = (float)(1.0 - a2) * v2[1];
  v17 = (float)(1.0 - a2) * v2[9];
  v18 = (float)(1.0 - a2) * v2[8];
  v19 =
      (float)(a2 * *(float*)(*a1 + 40LL)) + (float)((float)(1.0 - a2) * v2[10]);
  v20 =
      (float)(a2 * *(float*)(*a1 + 44LL)) + (float)((float)(1.0 - a2) * v2[11]);
  v21 =
      (float)(a2 * *(float*)(*a1 + 48LL)) + (float)((float)(1.0 - a2) * v2[12]);
  v22 = v4 / (float)((float)(a2 * *(float*)(*a1 + 52LL)) +
                     (float)((float)(1.0 - a2) * v2[13]));
  v23 =
      (float)(a2 * *(float*)(*a1 + 56LL)) + (float)((float)(1.0 - a2) * v2[14]);
  v24 =
      (float)(a2 * *(float*)(*a1 + 60LL)) + (float)((float)(1.0 - a2) * v2[15]);
  v25 = (float)(1.0 - a2) * v2[16];
  v26 = (float)(1.0 - a2) * v2[17];
  v28 = v2[18];
  v27 = v2[19];
  v29 = (float*)a1[2];
  v30 = v4 / v23;
  v31 = v4 / v24;
  v32 = v3 * v28;
  v33 = v3 * v27;
  v34 = v4 / (float)(v5 + v25);
  v35 = v4 / (float)(v66 + v15);
  v36 = v4 / (float)(v65 + v16);
  v37 = v4 / (float)(v64 + (float)(v3 * v12));
  v38 = v4 / (float)(v63 + (float)(v3 * v13));
  v39 = v4 / (float)(v62 + v8);
  v40 = v4 / (float)(v61 + v9);
  v41 = v6 + v26;
  v42 = v7 + v32;
  v43 = v4 / (float)(v59 + v11);
  v44 = v4 / (float)(v57 + v17);
  v45 = v4 / v19;
  v46 = v4 / v20;
  v47 = v4 / v21;
  v48 = v4 / v41;
  v49 = v4 / v42;
  v50 = v4 / (float)(v68 + v33);
  v51 = v67 + v14;
  v52 = v4 / (float)(v60 + v10);
  v53 = v4 / (float)(v58 + v18);
  v54 = (float)(v4 / v51) * (float)(v29[20] * v29[20]);
  v55 =
      (float)((float)((float)((float)((float)((float)((float)((float)(v35 *
                                                                      (float)(*v29 *
                                                                              *v29)) +
                                                              0.0) +
                                                      (float)(v36 *
                                                              (float)(v29[1] *
                                                                      v29[1]))) +
                                              (float)(v37 * (float)(v29[2] *
                                                                    v29[2]))) +
                                      (float)(v38 * (float)(v29[3] * v29[3]))) +
                              (float)(v39 * (float)(v29[4] * v29[4]))) +
                      (float)(v40 * (float)(v29[5] * v29[5]))) +
              (float)(v52 * (float)(v29[6] * v29[6]))) +
      (float)(v43 * (float)(v29[7] * v29[7]));
  return (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v55 +
                                                                                                         (float)(v53 *
                                                                                                                 (float)(v29[8] *
                                                                                                                         v29[8]))) +
                                                                                                 (float)(v44 *
                                                                                                         (float)(v29[9] *
                                                                                                                 v29[9]))) +
                                                                                         (float)(v45 *
                                                                                                 (float)(v29[10] *
                                                                                                         v29[10]))) +
                                                                                 (float)(v46 *
                                                                                         (float)(v29[11] *
                                                                                                 v29[11]))) +
                                                                         (float)(v47 *
                                                                                 (float)(v29[12] *
                                                                                         v29[12]))) +
                                                                 (float)(v22 *
                                                                         (float)(v29[13] *
                                                                                 v29[13]))) +
                                                         (float)(v30 *
                                                                 (float)(v29[14] *
                                                                         v29[14]))) +
                                                 (float)(v31 *
                                                         (float)(v29[15] *
                                                                 v29[15]))) +
                                         (float)(v34 *
                                                 (float)(v29[16] * v29[16]))) +
                                 (float)(v48 * (float)(v29[17] * v29[17]))) +
                         (float)(v49 * (float)(v29[18] * v29[18]))) +
                 (float)(v50 * (float)(v29[19] * v29[19]))) +
         v54;
}

unsigned __int64 SdkHr_7342e0(unsigned __int64* a1, unsigned __int64* a2,
                              __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64* v11;
  unsigned __int64 v12;

  if (a1[388] != 0) {
    v4 = a1[387];
    v5 = *a2;
    v6 = &a1[3 * ((v4 - 1) & *a2)];
    if (*v6 != 0) {
      if (v6[1] == v5) {
        goto LABEL_17;
      }
      v7 = 1;
      while (1) {
        v6 += 3;
        ++v7;
        if (v6 == &a1[3 * v4]) {
          v6 = a1;
        }
        if (*v6 < v7) {
          break;
        }
        if (v6[1] == v5) {
          if (*v6 == 0) {
            do {
              v8 = v6[3];
              v6 += 3;
            } while (v8 == 0);
          }
          goto LABEL_17;
        }
      }
    }
    v6 = &a1[3 * v4];
    if (*v6 == 0) {
      do {
        v10 = v6[3];
        v6 += 3;
      } while (v10 == 0);
    }
  }
  else {
    v4 = a1[387];
    v6 = &a1[3 * v4];
    if (*v6 == 0) {
      do {
        v9 = v6[3];
        v6 += 3;
      } while (v9 == 0);
    }
  }
LABEL_17:
  v11 = &a1[3 * v4];
  if (*v11 == 0) {
    do {
      v12 = v11[3];
      v11 += 3;
    } while (v12 == 0);
  }
  if (v6 == v11) {
    return SdkRoutine_730ec0(a1, *a2, 0, a4) + 16;
  }
  else {
    return (unsigned __int64)(v6 + 2);
  }
}

bool SdkHr_734400(unsigned __int64* a1, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;

  v2 = a1[388];
  if (v2 != 0) {
    v3 = a1[387];
    v4 = *a2;
    v5 = &a1[3 * ((v3 - 1) & *a2)];
    if (*v5 != 0) {
      if (v5[1] == v4) {
        goto LABEL_17;
      }
      v6 = 1;
      while (1) {
        v5 += 3;
        ++v6;
        if (v5 == &a1[3 * v3]) {
          v5 = a1;
        }
        if (*v5 < v6) {
          break;
        }
        if (v5[1] == v4) {
          if (*v5 == 0) {
            do {
              v7 = v5[3];
              v5 += 3;
            } while (v7 == 0);
          }
          goto LABEL_17;
        }
      }
    }
    v5 = &a1[3 * v3];
    if (*v5 == 0) {
      do {
        v9 = v5[3];
        v5 += 3;
      } while (v9 == 0);
    }
  }
  else {
    v3 = a1[387];
    v5 = &a1[3 * v3];
    if (*v5 == 0) {
      do {
        v8 = v5[3];
        v5 += 3;
      } while (v8 == 0);
    }
  }
LABEL_17:
  v10 = &a1[3 * v3];
  if (*v10 == 0) {
    do {
      v11 = v10[3];
      v10 += 3;
    } while (v11 == 0);
  }
  if (v5 != v10) {
    v12 = v5;
    a1[388] = v2 - 1;
    v13 = v5 + 3;
    v14 = v5[3];
    if (v14 >= 2) {
      v15 = v5;
      while (1) {
        if (v14 == -1) {
          v14 = *a1;
          v13 = a1;
          if (*a1 < 2) {
            break;
          }
        }
        v16 = v14 - 1;
        v12 = v13;
        *v13 = v16;
        v17 = *v15;
        v18 = v15[1];
        *v15 = v16;
        v19 = v15[2];
        v15[1] = v13[1];
        v15[2] = v13[2];
        *v13 = v17;
        v13[1] = v18;
        v13[2] = v19;
        v15 = v13;
        v20 = v13[3];
        v13 += 3;
        v14 = v20;
        if (v20 <= 1) {
          goto LABEL_26;
        }
      }
      v12 = v15;
    }
  LABEL_26:
    *v12 = 0;
  }
  return v5 != v10;
}

float SdkHr_7349c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  float result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;

  v2 = *(_QWORD*)(a1 + 32);
  if (*(_QWORD*)(v2 + 192) != 0) {
    v3 = 0;
    do {
      v4 = *(_QWORD*)(v2 + 8 * v3);
      result = *(float*)(a2 + 8 + 4 * v3++);
      *(float*)(*(_QWORD*)a1 +
                4LL * **(_QWORD**)(a1 + 24) * *(_QWORD*)(a1 + 16) +
                4 * v4 * *(_QWORD*)(a1 + 8)) = result;
      v2 = *(_QWORD*)(a1 + 32);
      v6 = *(_QWORD*)(v2 + 192);
    } while (v3 < v6);
    if (v6 != 0) {
      v7 = 0;
      do {
        v8 = *(_QWORD*)(v2 + 8 * v7);
        result = *(float*)(a2 + 104 + 4 * v7++);
        *(float*)(*(_QWORD*)a1 +
                  4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL) *
                      *(_QWORD*)(a1 + 16) +
                  4 * v8 * *(_QWORD*)(a1 + 8)) = result;
        v2 = *(_QWORD*)(a1 + 32);
        v9 = *(_QWORD*)(v2 + 192);
      } while (v7 < v9);
      if (v9 != 0) {
        v10 = 0;
        do {
          v11 = *(_QWORD*)(v2 + 8 * v10);
          result = *(float*)(a2 + 200 + 4 * v10++);
          *(float*)(*(_QWORD*)a1 +
                    4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) *
                        *(_QWORD*)(a1 + 16) +
                    4 * v11 * *(_QWORD*)(a1 + 8)) = result;
          v2 = *(_QWORD*)(a1 + 32);
          v12 = *(_QWORD*)(v2 + 192);
        } while (v10 < v12);
        if (v12 != 0) {
          v13 = 0;
          do {
            v14 = *(_QWORD*)(v2 + 8 * v13);
            result = *(float*)(a2 + 296 + 4 * v13++);
            *(float*)(*(_QWORD*)a1 +
                      4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL) *
                          *(_QWORD*)(a1 + 16) +
                      4 * v14 * *(_QWORD*)(a1 + 8)) = result;
            v2 = *(_QWORD*)(a1 + 32);
            v15 = *(_QWORD*)(v2 + 192);
          } while (v13 < v15);
          if (v15 != 0) {
            v16 = 0;
            do {
              v17 = *(_QWORD*)(v2 + 8 * v16);
              result = *(float*)(a2 + 392 + 4 * v16++);
              *(float*)(*(_QWORD*)a1 +
                        4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 32LL) *
                            *(_QWORD*)(a1 + 16) +
                        4 * v17 * *(_QWORD*)(a1 + 8)) = result;
              v2 = *(_QWORD*)(a1 + 32);
              v18 = *(_QWORD*)(v2 + 192);
            } while (v16 < v18);
            if (v18 != 0) {
              v19 = 0;
              do {
                v20 = *(_QWORD*)(v2 + 8 * v19);
                result = *(float*)(a2 + 488 + 4 * v19++);
                *(float*)(*(_QWORD*)a1 +
                          4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 40LL) *
                              *(_QWORD*)(a1 + 16) +
                          4 * v20 * *(_QWORD*)(a1 + 8)) = result;
                v2 = *(_QWORD*)(a1 + 32);
                v21 = *(_QWORD*)(v2 + 192);
              } while (v19 < v21);
              if (v21 != 0) {
                v22 = 0;
                do {
                  v23 = *(_QWORD*)(v2 + 8 * v22);
                  result = *(float*)(a2 + 584 + 4 * v22++);
                  *(float*)(*(_QWORD*)a1 +
                            4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48LL) *
                                *(_QWORD*)(a1 + 16) +
                            4 * v23 * *(_QWORD*)(a1 + 8)) = result;
                  v2 = *(_QWORD*)(a1 + 32);
                  v24 = *(_QWORD*)(v2 + 192);
                } while (v22 < v24);
                if (v24 != 0) {
                  v25 = 0;
                  do {
                    v26 = *(_QWORD*)(v2 + 8 * v25);
                    result = *(float*)(a2 + 680 + 4 * v25++);
                    *(float*)(*(_QWORD*)a1 +
                              4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 56LL) *
                                  *(_QWORD*)(a1 + 16) +
                              4 * v26 * *(_QWORD*)(a1 + 8)) = result;
                    v2 = *(_QWORD*)(a1 + 32);
                    v27 = *(_QWORD*)(v2 + 192);
                  } while (v25 < v27);
                  if (v27 != 0) {
                    v28 = 0;
                    do {
                      v29 = *(_QWORD*)(v2 + 8 * v28);
                      result = *(float*)(a2 + 776 + 4 * v28++);
                      *(float*)(*(_QWORD*)a1 +
                                4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 64LL) *
                                    *(_QWORD*)(a1 + 16) +
                                4 * v29 * *(_QWORD*)(a1 + 8)) = result;
                      v2 = *(_QWORD*)(a1 + 32);
                    } while (v28 < *(_QWORD*)(v2 + 192));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

float SdkHr_734c60(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  float result;

  v2 = *(_QWORD*)(a1 + 24);
  if (*(_QWORD*)(v2 + 192) != 0) {
    v3 = 0;
    do {
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(v2 + 8 * v3) * *(_QWORD*)(a1 + 16) +
                 4LL * **(_QWORD**)(a1 + 32) * *(_QWORD*)(a1 + 8)) =
          *(_DWORD*)(*a2 + 4 * v3 + 8);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 104);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 16LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 200);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 24LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 296);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 392);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 40LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 488);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 48LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 584);
      *(_DWORD*)(*(_QWORD*)a1 +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3) *
                     *(_QWORD*)(a1 + 16) +
                 4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 56LL) *
                     *(_QWORD*)(a1 + 8)) = *(_DWORD*)(*a2 + 4 * v3 + 680);
      v4 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v3);
      v5 = *a2 + 4 * v3++;
      result = *(float*)(v5 + 776);
      *(float*)(*(_QWORD*)a1 + 4 * v4 * *(_QWORD*)(a1 + 16) +
                4LL * *(_QWORD*)(*(_QWORD*)(a1 + 32) + 64LL) *
                    *(_QWORD*)(a1 + 8)) = result;
      v2 = *(_QWORD*)(a1 + 24);
    } while (v3 < *(_QWORD*)(v2 + 192));
  }
  return result;
}

__int64 SdkHr_73b2d0(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6)
{
  __int64 v6;
  unsigned int v13;
  __int64 v14;
  __int64 v16;
  __int64* v17;
  __int64 v18;

  v6 = *(_QWORD*)(a1 + 32);
  v18 = 0;
  v16 = v6;
  v17 = &v18;
  SdkRoutine_73b5a0(&v16, 0);
  if (v17 == nullptr) {
    v13 = 5642;
    v14 = v18;
    if (v18 == 0) {
      return v13;
    }
    goto LABEL_3;
  }
  v16 = *a2;
  v13 = SdkRoutine_73b3a0(a1 + 8, &v16, a3, a4, a5, a6, 0, &v18);
  v14 = v18;
  if (v18 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  return v13;
}

__int64 SdkHr_73ca50(__int64 a1, __int64 a2)
{
  unsigned int v4;
  __int64 result;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;

  v10 = 0;
  v4 = SdkRoutine_87a7d0(a1, &v10, 1, a2);
  result = 0;
  if (v4 != 0) {
    v6 = v4;
    v7 = SdkRoutine_87a5c0(0);
    v9 = SdkRoutine_87a5d0();
    v8 = SdkRoutine_87a5e0(v7, &v9);
    if (v8 != 0) {
      SdkRoutine_87a7e0(v8, a1, a2);
      return v6;
    }
    else {
      return 104653;
    }
  }
  return result;
}

__int64 SdkHr_73cb20(float* a1, int* a2, __int64 a3, __int64 a4)
{
  float* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v40;

  v6 = a1;
  v7 = SdkRoutine_87a5c0(a1);
  v40 = SdkRoutine_87a5d0();
  v8 = SdkRoutine_87a5e0(v7, &v40);
  if (v8 == 0) {
    return 104653;
  }
  v9 = v8;
  v10 = 82125;
  SdkRoutine_87a6e0();
  *a2 = 0;
  SdkRoutine_87a7e0(v9, v6, a4);
  if ((SdkRoutine_87a740(v9) & 1) != 0) {
    v11 = SdkRoutine_87a780(a4);
    if (v11 != 0) {
      return v11;
    }
    if (SdkRoutine_87a7f0(v9, a4) == 0) {
      return v10;
    }
    v12 = SdkRoutine_73cec0();
    *a2 = v12;
    if (v12 == 0 && (v11 = SdkRoutine_87a750(82125, a4)) != 0) {
      return v11;
    }
    else {
      v13 = SdkRoutine_87a800(v9, a4);
      if (*a2 >= 1) {
        v14 = 0;
        v15 =
            76800.0 / (float)(int)(((int)((unsigned __int64)v13 >> 16) >> 16) *
                                   (v13 >> 48));
        do {
          v16 = v6[9];
          ++v14;
          v6[6] = v15 * v6[6];
          v17 = v15 * v16;
          v18 = v6[21];
          v6[9] = v17;
          v6[12] = v15 * v6[12];
          v6[15] = v15 * v6[15];
          v6[18] = v15 * v6[18];
          v19 = v15 * v18;
          v20 = v6[33];
          v6[21] = v19;
          v6[24] = v15 * v6[24];
          v6[27] = v15 * v6[27];
          v6[30] = v15 * v6[30];
          v21 = v15 * v20;
          v22 = v6[45];
          v6[33] = v21;
          v6[36] = v15 * v6[36];
          v6[39] = v15 * v6[39];
          v6[42] = v15 * v6[42];
          v23 = v15 * v22;
          v24 = v6[57];
          v6[45] = v23;
          v6[48] = v15 * v6[48];
          v6[51] = v15 * v6[51];
          v6[54] = v15 * v6[54];
          v25 = v15 * v24;
          v26 = v6[69];
          v6[57] = v25;
          v6[60] = v15 * v6[60];
          v6[63] = v15 * v6[63];
          v6[66] = v15 * v6[66];
          v27 = v15 * v26;
          v28 = v6[81];
          v6[69] = v27;
          v6[72] = v15 * v6[72];
          v6[75] = v15 * v6[75];
          v6[78] = v15 * v6[78];
          v29 = v15 * v28;
          v30 = v6[93];
          v6[81] = v29;
          v6[84] = v15 * v6[84];
          v6[87] = v15 * v6[87];
          v6[90] = v15 * v6[90];
          v31 = v15 * v30;
          v32 = v6[105];
          v6[93] = v31;
          v6[96] = v15 * v6[96];
          v6[99] = v15 * v6[99];
          v6[102] = v15 * v6[102];
          v33 = v15 * v32;
          v34 = v6[117];
          v6[105] = v33;
          v6[108] = v15 * v6[108];
          v6[111] = v15 * v6[111];
          v6[114] = v15 * v6[114];
          v35 = v15 * v34;
          v36 = v6[129];
          v6[117] = v35;
          v6[120] = v15 * v6[120];
          v6[123] = v15 * v6[123];
          v6[126] = v15 * v6[126];
          v37 = v15 * v36;
          v38 = v6[141];
          v6[129] = v37;
          v6[132] = v15 * v6[132];
          v6[135] = v15 * v6[135];
          v6[138] = v15 * v6[138];
          v6[141] = v15 * v38;
          v6[144] = v15 * v6[144];
          v6[147] = v15 * v6[147];
          v6 += 150;
        } while (v14 < *a2);
      }
      return 0;
    }
  }
  return v10;
}

__int64 SdkHr_73d2d0(__int64 a1, _DWORD* a2, int a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int16 v15;
  __int64 v16;

  v8 = SdkRoutine_87a5c0(a1);
  v16 = SdkRoutine_87a5d0();
  v9 = SdkRoutine_87a5e0(v8, &v16);
  if (v9 == 0) {
    v15 = -26419;
    return v15 | 0x10000u;
  }
  v10 = v9;
  SdkRoutine_87a6e0();
  *a2 = 0;
  SdkRoutine_87a850(v10, a1, a4);
  if ((SdkRoutine_87a740(v10) & 1) == 0) {
    v15 = 16589;
    return v15 | 0x10000u;
  }
  result = SdkRoutine_87a780(a4);
  if ((_DWORD)result == 0) {
    v12 = SdkRoutine_87a860(v10, a4);
    result = 82125;
    if (v12 != 0) {
      if (a3 >= 5) {
        v13 = 5;
      }
      else {
        v13 = (unsigned int)a3;
      }
      v14 = SdkRoutine_73d400(v12, a1, v13, 0);
      result = 0;
      *a2 = v14;
      if (v14 == 0) {
        return SdkRoutine_87a750(82125, a4);
      }
    }
  }
  return result;
}

__int64 SdkHr_73d840(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  _BOOL4 v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 vars0;

  v8 = SdkRoutine_87a5c0(a1);
  v31 = SdkRoutine_87a5d0();
  v9 = SdkRoutine_87a5e0(v8, &v31);
  if (v9 == 0) {
    return 104653;
  }
  v10 = v9;
  v11 = 82125;
  SdkRoutine_87a6e0();
  if ((SdkRoutine_87a740(v10) & 1) == 0) {
    return v11;
  }
  v12 = SdkRoutine_87a780(a4);
  if (v12 == 0) {
    v13 = SdkRoutine_87a8c0(v10, a4, a1, a2, a3);
    if (v13 == 0) {
      return 0;
    }
    v14 = v13;
    v12 = SdkRoutine_87a750(82125, a4);
    if (v12 == 0) {
      v16 = (v14 & 0x1FF) == 0xCD && ((v14 >> 9) & 0x1FFE) - 110 < 0xA;
      if ((v14 & 0x3FFFFF) == 0xF0CD || v16) {
        SdkRoutine_87a8d0(v10, a1, a2, a3, a4);
        if ((v14 & 0x3FFECD) == 0xF0CD) {
          return 82125;
        }
        else {
          return v14;
        }
      }
      v30 = v14;
      v18 = SdkRoutine_858db0(&v30);
      v26 = &vars0;
      v27 = v19;
      v28 = a4;
      v29 = 82125;
      v20 = v18;
      v24 = 0xF0014000000000LL;
      v25 = 1769480;
      v21 = SdkRoutine_87a5c0(v18);
      v23 = SdkRoutine_87a5d0();
      v22 = SdkRoutine_87a5e0(v21, &v23);
      if (v22 != 0) {
        return SdkRoutine_87a8f0(v22, v20, &v24);
      }
      else {
        return 104653;
      }
    }
  }
  return v12;
}

__int64 SdkHr_73e140(__int64 a1, __int64 a2, int a3, __int64 a4,
                     unsigned int a5)
{
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  signed int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v26;
  unsigned __int64 v27;
  unsigned int v28;
  bool v29;
  unsigned __int64 v30;
  unsigned int v31;
  bool v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  signed int v37;
  unsigned __int64 v38;
  unsigned int v39;
  __int64 v41;
  _BYTE v44[328];

  v41 = a5 - 5LL;
  if (a3 <= 0) {
    do {
      v33 = atomic_load((unsigned __int64*)a1);
      v34 = atomic_load((unsigned __int64*)a1);
      v35 = v33 - 6;
      v36 = v41 + v34;
      v37 = atomic_load((unsigned int*)(a1 + 8));
      v38 = v34 - v37;
      if ((__int64)(v38 - (v41 + v34)) > 0) {
        v36 = v38;
      }
      if ((int)v35 - (int)v36 <= 0) {
        v35 = v36;
      }
      v39 = (v34 - v35) & ~(unsigned int)((__int64)(v34 - v35) >> 63);
      if (v39 == 0) {
        break;
      }
      v30 = atomic_load((unsigned __int64*)a1);
      v31 = atomic_load((unsigned int*)(a1 + 8));
      v32 = (__int64)(v30 - v35) >= 1 && v31 >= v39;
    } while (!v32 || (__int64)(v35 - v30 + 6) <= 0);
  }
  else {
    while (1) {
      v7 = atomic_load((unsigned __int64*)a1);
      v8 = atomic_load((unsigned __int64*)a1);
      v9 = v41 + v8;
      v10 = atomic_load((unsigned int*)(a1 + 8));
      v11 = v7 - 6;
      v12 = v8 - v10;
      if ((__int64)(v12 - (v41 + v8)) > 0) {
        v9 = v12;
      }
      v13 = (int)v11 - (int)v9 <= 0 ? v9 : v11;
      v14 = (v8 - v13) & ~((__int64)(v8 - v13) >> 63);
      if ((_DWORD)v14 == 0) {
        break;
      }
      v15 = 0;
      if ((int)v14 - 1LL >= 0) {
        v16 = (int)v14 - 1LL + v13;
        v17 = (int)v14 - 2LL;
        v18 = 320 * (v13 + (int)v14) - 304;
        do {
          v19 = v18 - 1920 * (v16 / 6);
          SdkRoutine_856130(v44, a1 + v19, 320);
          v20 = atomic_load((unsigned __int64*)a1);
          v21 = atomic_load((unsigned int*)(a1 + 8));
          v22 = v20 - v13;
          v23 = v13 + 6 - v20;
          if (v22 < 1 || v21 < (unsigned int)v14 || v23 < 1) {
            break;
          }
          v26 = *(_QWORD*)(a4 + 32);
          if (v26 == 0) {
            SdkRoutine_2b2f80();
          }
          if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v26 + 48LL))(v26,
                                                                        v44) &
               1) != 0) {
            SdkRoutine_856130(a2 + 320LL * v15++, a1 + v19, 320);
          }
          if (v17 < 0) {
            break;
          }
          --v16;
          --v17;
          v18 -= 320;
        } while (v15 < a3);
      }
      v27 = atomic_load((unsigned __int64*)a1);
      v28 = atomic_load((unsigned int*)(a1 + 8));
      v29 = (__int64)(v27 - v13) >= 1 && v28 >= (unsigned int)v14;
      if (v29 && (__int64)(v13 - v27 + 6) >= 1) {
        return (unsigned int)v15;
      }
    }
  }
  return 0;
}

_QWORD* SdkHr_73e510(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = (_QWORD*)SdkRoutine_85e050(0x20u);
  v3 = a1[1];
  v4 = a1[2];
  *result = SdkData_e7c7c0;
  result[1] = v3;
  v5 = a1[3];
  result[2] = v4;
  result[3] = v5;
  return result;
}

_QWORD* SdkHr_73e550(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = SdkData_e7c7c0;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

__int64 SdkHr_73f730(unsigned int* a1, __int64 a2)
{
  unsigned int* v2;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  atomic_uint* v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v17;
  int v18;

  v2 = a1;
  SdkRoutine_858d40(a1 + 4);
  v4 = atomic_load(v2 + 3);
  if (v4 == v2[2]) {
    v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 16LL))(v2);
    goto LABEL_27;
  }
  v5 = atomic_load(v2 + 3);
  if (v5 != 0) {
    goto LABEL_3;
  }
  v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 40LL))(v2);
  if (v6 != 0) {
    goto LABEL_27;
  }
  v7 = (*(__int64 (**)(unsigned int*, __int64))(*(_QWORD*)v2 + 64LL))(v2, a2);
  if (v7 != 0) {
    v6 = v7;
    (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 48LL))(v2);
    goto LABEL_27;
  }
  v8 = *(_QWORD*)v2;
  v17 = 0;
  v9 = (*(__int64 (**)(unsigned int*, __int64*))(v8 + 80))(v2, &v17);
  if (v9 != 0) {
    v6 = v9;
  }
  else {
    (*(void (**)(unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v2 + 96LL))(
        v2, (unsigned int)v17, BYTE4(v17));
    v10 = *(_QWORD*)v2;
    BYTE4(v17) = 0;
    LODWORD(v17) = 0;
    if (((*(__int64 (**)(unsigned int*))(v10 + 88))(v2) & 1) != 0) {
      v11 = 0;
      v6 = 0;
      v12 = 1;
      if (BYTE4(v17) != 1) {
        goto LABEL_10;
      }
      goto LABEL_9;
    }
    v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 32LL))(v2);
    (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 104LL))(v2);
  }
  v11 = 1;
  v12 = 0;
  if (BYTE4(v17) == 1) {
  LABEL_9:
    SdkRoutine_85adb0((unsigned int)v17);
  }
LABEL_10:
  if (v11 == 0) {
    if ((v12 & 1) == 0) {
      goto LABEL_27;
    }
  LABEL_3:
    v6 = 0;
    atomic_fetch_add((atomic_uint* volatile)(v2 + 3), 1u);
    goto LABEL_27;
  }
  v18 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 72LL))(v2);
  if (v18 == 0) {
    (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 48LL))(v2);
    if (v12 == 0) {
      goto LABEL_27;
    }
    goto LABEL_3;
  }
  v2 = (unsigned int*)SdkRoutine_858db0(&v18);
  SdkRoutine_858d40(v2 + 4);
  v13 = (atomic_uint*)(v2 + 3);
  v14 = atomic_load(v2 + 3);
  if (v14 != 0) {
    atomic_fetch_add(v13, 0xFFFFFFFF);
    v15 = atomic_load((unsigned int*)v13);
    if (v15 != 0) {
      v6 = 0;
    }
    else {
      (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 104LL))(v2);
      v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 72LL))(v2);
      if (v6 == 0) {
        (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 48LL))(v2);
      }
    }
  }
  else {
    v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 24LL))(v2);
  }
LABEL_27:
  SdkRoutine_858d50(v2 + 4);
  return v6;
}

__int64 SdkHr_73f9b0(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  SdkRoutine_87ab40();
  v4 = SdkData_e891e8;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v4 + 16;
  *(_QWORD*)(a1 + 56) = *a2;
  SdkRoutine_87aae0(a1 + 64);
  result = SdkRoutine_87ab20(a1 + 304);
  *(_QWORD*)(a1 + 218) = 0;
  a1 += 218;
  *(_DWORD*)(a1 + 158) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 - 82) = 0;
  *(_QWORD*)(a1 - 74) = 0;
  *(_QWORD*)(a1 - 66) = 0;
  *(_QWORD*)(a1 - 58) = 0;
  *(_QWORD*)(a1 - 50) = 0;
  *(_QWORD*)(a1 - 42) = 0;
  *(_QWORD*)(a1 - 34) = 0;
  *(_QWORD*)(a1 - 26) = 0;
  *(_QWORD*)(a1 - 18) = 0;
  *(_QWORD*)(a1 - 10) = 0;
  *(_BYTE*)(a1 - 2) = 0;
  *(_BYTE*)(a1 + 80) = 1;
  *(_QWORD*)(a1 + 72) = 0x101010101010101LL;
  *(_QWORD*)(a1 + 162) = 0;
  *(_QWORD*)(a1 + 170) = 0;
  *(_QWORD*)(a1 + 178) = 0;
  *(_QWORD*)(a1 + 186) = 0;
  *(_DWORD*)(a1 + 194) = 0;
  return result;
}

_QWORD* SdkHr_7412f0(__int64 a1, int* a2)
{
  int v2;
  int v3;
  char v4;
  unsigned __int8 v5;
  _QWORD* result;
  int v7;
  int v8;

  v2 = *a2;
  v3 = a2[1];
  v8 = 0;
  if (v2 == 1) {
    v4 = 16;
  }
  else {
    v4 = 15;
  }
  LOBYTE(v8) = v4;
  if (v3 != 0) {
    if (v3 == 1) {
      v5 = 3;
    }
    else {
      if (v3 != 2) {
      LABEL_13:
        result = (_QWORD*)SdkRoutine_857150(a1);
        *result = 0;
        return result;
      }
      v5 = 8;
    }
    HIWORD(v8) = v5;
    BYTE1(v8) = 1;
    result = (_QWORD*)SdkRoutine_87aba0(a1, &v8);
    v7 = (int)result;
    if ((_DWORD)result == 0) {
      return result;
    }
  LABEL_12:
    a1 = SdkRoutine_858db0(&v7);
    goto LABEL_13;
  }
  BYTE1(v8) = 0;
  result = (_QWORD*)SdkRoutine_87aba0(a1, &v8);
  v7 = (int)result;
  if ((_DWORD)result != 0) {
    goto LABEL_12;
  }
  return result;
}

__int64 SdkHr_742df0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  __int64 v6;
  int v8;
  _DWORD v9[2];

  SdkData_10492f0[(int)SdkRoutine_87a580(a1)] = a3;
  v6 = a2[1];
  v9[0] = *a2 / 1000000LL;
  v9[1] =
      v6 / 0xF4240uLL +
      ((unsigned __int64)((unsigned __int128)(v6 *
                                              (__int128)0x431BDE82D7B634DBLL) >>
                          64) >>
       63);
  SdkRoutine_87ac50(a3 + 1, a3 + 58, 4716, v9);
  *a3 = a3 + 1;
  v8 = 1;
  SdkRoutine_87ac60(a3 + 1);
  return SdkRoutine_87abc0(a1, &v8);
}

__int64 SdkHr_743110(__int64 a1)
{
  int v1;

  v1 = SdkRoutine_87a580(a1);
  return SdkRoutine_87ac60(*(_QWORD*)SdkData_10492f0[v1]);
}

bool SdkHr_7441e0(__int64** a1, unsigned int* a2, unsigned __int64 a3)
{
  __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char v12;
  unsigned __int64 v13;
  char v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned __int64 v18;
  char v19;
  unsigned __int64 v20;
  char v21;
  unsigned __int64 v22;
  char v23;

  v3 = *a1;
  v5 = (*a1)[1];
  v4 = (*a1)[2];
  v6 = v4 - v5;
  if (v4 - v5 >= a3) {
    if (a3 == 0) {
      v9 = 0;
    LABEL_22:
      *a2 = v9;
      return v6 >= a3;
    }
    v7 = *v3;
    v8 = a3 & 3;
    if (a3 < 4) {
      v9 = 0;
    LABEL_17:
      if ((a3 & 3) != 0) {
        do {
          while (v5 < v4) {
            v22 = v5 >> 3;
            v23 = v5++ & 7;
            LODWORD(v22) = *(unsigned __int8*)(v7 + v22);
            v3[1] = v5;
            v9 = ((unsigned int)v22 >> v23) & 1 | (2 * v9);
            if (--v8 == 0) {
              goto LABEL_22;
            }
          }
          v9 *= 2;
          --v8;
        } while (v8 != 0);
      }
      goto LABEL_22;
    }
    v10 = a3 & 0xFFFFFFFFFFFFFFFCLL;
    v9 = 0;
    while (1) {
      if (v5 >= v4) {
        v15 = 0;
      LABEL_10:
        v16 = 0;
        if (v5 >= v4) {
          goto LABEL_11;
        }
      LABEL_15:
        v20 = v5 >> 3;
        v21 = v5++ & 7;
        LODWORD(v20) = *(unsigned __int8*)(v7 + v20);
        v3[1] = v5;
        v17 = 2 * (((unsigned int)v20 >> v21) & 1);
        if (v5 < v4) {
          goto LABEL_7;
        }
      LABEL_16:
        v10 -= 4LL;
        v9 = v17 | (4 * (v16 | v15 | (4 * v9)));
        if (v10 == 0) {
          goto LABEL_17;
        }
      }
      else {
        v13 = v5 >> 3;
        v14 = v5++ & 7;
        LODWORD(v13) = *(unsigned __int8*)(v7 + v13);
        v3[1] = v5;
        v15 = 2 * (((unsigned int)v13 >> v14) & 1);
        if (v5 >= v4) {
          goto LABEL_10;
        }
        v18 = v5 >> 3;
        v19 = v5++ & 7;
        LODWORD(v18) = *(unsigned __int8*)(v7 + v18);
        v3[1] = v5;
        v16 = ((unsigned int)v18 >> v19) & 1;
        if (v5 < v4) {
          goto LABEL_15;
        }
      LABEL_11:
        v17 = 0;
        if (v5 >= v4) {
          goto LABEL_16;
        }
      LABEL_7:
        v11 = v5 >> 3;
        v12 = v5++ & 7;
        LODWORD(v11) = *(unsigned __int8*)(v7 + v11);
        v3[1] = v5;
        v10 -= 4LL;
        v9 =
            ((unsigned int)v11 >> v12) & 1 | v17 | (4 * (v16 | v15 | (4 * v9)));
        if (v10 == 0) {
          goto LABEL_17;
        }
      }
    }
  }
  return v6 >= a3;
}

bool SdkHr_744370(int* a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  char v12;

  v4 = 8 * a3;
  if (*a4 >= 8 * a3) {
    v5 = 8 * a3;
  }
  else {
    v5 = *a4;
  }
  v6 = v4 - v5;
  if (v4 - v5 >= 2) {
    if (*a4 >= v4) {
      v9 = 0;
      if (v5 >= v4) {
        goto LABEL_7;
      }
    }
    else {
      v7 = v5 >> 3;
      v8 = v5++ & 7;
      v9 = 2 * ((*(unsigned __int8*)(a2 + v7) >> v8) & 1);
      if (v5 >= v4) {
      LABEL_7:
        v10 = 0;
      LABEL_10:
        *a1 = v10 | v9;
        *a4 = v5;
        return v6 > 1;
      }
    }
    v11 = v5 >> 3;
    v12 = v5++ & 7;
    v10 = (*(unsigned __int8*)(a2 + v11) >> v12) & 1;
    goto LABEL_10;
  }
  return v6 > 1;
}

__int64 SdkHr_745d00(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                     unsigned __int64* a6)
{
  unsigned __int64 v6;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  v6 = *a6;
  v12 = a3;
  v13 = a4;
  v10 = a1;
  v11 = 0;
  if (v6 >= 8 * a5) {
    v6 = 8 * a5;
  }
  v14 = v6;
  v15 = 8 * a5;
  result =
      SdkRoutine_87acd0(&v10, &v13, &SdkData_ca72b4, SdkRoutine_745d80) & 1;
  *a2 = v11;
  *a6 = v14;
  return result;
}

__int64 SdkHr_745ef0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4,
                     float* a5)
{
  unsigned __int64 v5;
  float v6;
  char v8;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  v5 = *a4;
  v6 = *a5;
  v11 = 0;
  v12 = a2;
  if (v5 >= 8 * a3) {
    v5 = 8 * a3;
  }
  v13 = v5;
  v14 = 8 * a3;
  LODWORD(v11) = 40;
  v10[0] = a1;
  v10[1] = 0x1E00000028LL;
  v8 = SdkRoutine_87ace0(v10, &v12, 25500.0 / v6);
  if ((v8 & 1) != 0) {
    *a4 = v13;
  }
  return v8 & 1;
}

__int64 SdkHr_745fd0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;

  v4 = *a4;
  v5 = 8 * a3;
  v10 = 8 * a3;
  if (v4 < 8 * a3) {
    v5 = v4;
  }
  v8 = a2;
  v9 = v5;
  v11 = &v8;
  result = SdkRoutine_87acf0(a1, &v11) & 1;
  *a4 = v9;
  return result;
}

__int64 SdkHr_746040(unsigned int* a1, __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  char v9;
  unsigned __int64 v10;
  char v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned __int64 v15;
  char v16;
  unsigned __int64 v17;
  char v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned __int64 v25;
  char v26;
  unsigned __int64 v27;
  char v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  __int64* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64* v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  unsigned int v70;
  unsigned int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  int v81;
  unsigned __int64 v82;
  char v83;
  unsigned __int64 v84;
  char v85;
  unsigned __int64 v86;
  char v87;
  unsigned __int64 v88;
  char v89;
  unsigned __int64 v90;
  char v91;
  unsigned __int64 v92;
  char v93;
  unsigned __int64 v94;
  char v95;
  unsigned __int64 v96;
  char v97;
  unsigned __int64 v98;
  char v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned __int64 v114;
  char v115;
  unsigned int v116;
  unsigned __int64 v118;
  char v119;
  unsigned __int64 v120;
  char v121;
  unsigned __int64 v122;
  char v123;
  unsigned __int64 v124;
  char v125;
  unsigned __int64 v126;
  char v127;
  unsigned __int64 v128;
  char v129;
  unsigned int v130;

  v2 = *a2;
  v4 = (*a2)[1];
  v3 = (*a2)[2];
  if (v3 - v4 < 0x20) {
    goto LABEL_36;
  }
  v5 = *v2;
  v6 = -32;
  v7 = 0;
  do {
    while (v4 >= v3) {
      v12 = 0;
    LABEL_6:
      v13 = 0;
      if (v4 >= v3) {
        goto LABEL_7;
      }
    LABEL_11:
      v17 = v4 >> 3;
      v18 = v4++ & 7;
      LODWORD(v17) = *(unsigned __int8*)(v5 + v17);
      v2[1] = v4;
      v14 = 2 * (((unsigned int)v17 >> v18) & 1);
      if (v4 >= v3) {
        goto LABEL_12;
      }
    LABEL_3:
      v8 = v4 >> 3;
      v9 = v4++ & 7;
      LODWORD(v8) = *(unsigned __int8*)(v5 + v8);
      v2[1] = v4;
      v6 += 4;
      v7 = ((unsigned int)v8 >> v9) & 1 | v14 | (4 * (v13 | v12 | (4 * v7)));
      if (v6 == 0) {
        goto LABEL_13;
      }
    }
    v10 = v4 >> 3;
    v11 = v4++ & 7;
    LODWORD(v10) = *(unsigned __int8*)(v5 + v10);
    v2[1] = v4;
    v12 = 2 * (((unsigned int)v10 >> v11) & 1);
    if (v4 >= v3) {
      goto LABEL_6;
    }
    v15 = v4 >> 3;
    v16 = v4++ & 7;
    LODWORD(v15) = *(unsigned __int8*)(v5 + v15);
    v2[1] = v4;
    v13 = ((unsigned int)v15 >> v16) & 1;
    if (v4 < v3) {
      goto LABEL_11;
    }
  LABEL_7:
    v14 = 0;
    if (v4 < v3) {
      goto LABEL_3;
    }
  LABEL_12:
    v6 += 4;
    v7 = v14 | (4 * (v13 | v12 | (4 * v7)));
  } while (v6 != 0);
LABEL_13:
  *a1 = v7;
  v19 = *a2;
  v21 = (*a2)[1];
  v20 = (*a2)[2];
  if (v20 - v21 < 0x20) {
    goto LABEL_36;
  }
  v22 = *v19;
  v23 = -32;
  v24 = 0;
  while (2) {
    while (2) {
      if (v21 < v20) {
        v27 = v21 >> 3;
        v28 = v21++ & 7;
        LODWORD(v27) = *(unsigned __int8*)(v22 + v27);
        v19[1] = v21;
        v29 = 2 * (((unsigned int)v27 >> v28) & 1);
        if (v21 >= v20) {
          goto LABEL_18;
        }
        v32 = v21 >> 3;
        v33 = v21++ & 7;
        LODWORD(v32) = *(unsigned __int8*)(v22 + v32);
        v19[1] = v21;
        v30 = ((unsigned int)v32 >> v33) & 1;
        if (v21 < v20) {
          goto LABEL_23;
        }
      LABEL_19:
        v31 = 0;
        if (v21 >= v20) {
          break;
        }
        goto LABEL_15;
      }
      v29 = 0;
    LABEL_18:
      v30 = 0;
      if (v21 >= v20) {
        goto LABEL_19;
      }
    LABEL_23:
      v34 = v21 >> 3;
      v35 = v21++ & 7;
      LODWORD(v34) = *(unsigned __int8*)(v22 + v34);
      v19[1] = v21;
      v31 = 2 * (((unsigned int)v34 >> v35) & 1);
      if (v21 < v20) {
      LABEL_15:
        v25 = v21 >> 3;
        v26 = v21++ & 7;
        LODWORD(v25) = *(unsigned __int8*)(v22 + v25);
        v19[1] = v21;
        v23 += 4;
        v24 = ((unsigned int)v25 >> v26) & 1 | v31 |
              (4 * (v30 | v29 | (4 * v24)));
        if (v23 == 0) {
          goto LABEL_25;
        }
        continue;
      }
      break;
    }
    v23 += 4;
    v24 = v31 | (4 * (v30 | v29 | (4 * v24)));
    if (v23 != 0) {
      continue;
    }
    break;
  }
LABEL_25:
  a1[1] = v24;
  v36 = *a2;
  v37 = (*a2)[1];
  v38 = (*a2)[2];
  if (v38 - v37 < 8) {
  LABEL_36:
    v54 = 0;
    v55 = a1[2];
    if ((_DWORD)v55 == 0) {
      return v54;
    }
    goto LABEL_37;
  }
  v39 = *v36;
  if (v38 > v37) {
    v40 = v37 >> 3;
    v41 = (*a2)[1] & 7;
    ++v37;
    LODWORD(v40) = *(unsigned __int8*)(v39 + v40);
    v36[1] = v37;
    v42 = 2 * (((unsigned int)v40 >> v41) & 1);
    if (v37 >= v38) {
      goto LABEL_28;
    }
    v118 = v37 >> 3;
    v119 = v37++ & 7;
    LODWORD(v118) = *(unsigned __int8*)(v39 + v118);
    v36[1] = v37;
    v43 = ((unsigned int)v118 >> v119) & 1;
    if (v37 < v38) {
      goto LABEL_84;
    }
  LABEL_29:
    v44 = 0;
    v45 = v43 | v42;
    if (v37 >= v38) {
      goto LABEL_30;
    }
  LABEL_85:
    v122 = v37 >> 3;
    v123 = v37++ & 7;
    LODWORD(v122) = *(unsigned __int8*)(v39 + v122);
    v36[1] = v37;
    v46 = ((unsigned int)v122 >> v123) & 1;
    v47 = v44 | (4 * v45);
    if (v37 < v38) {
      goto LABEL_86;
    }
  LABEL_31:
    v48 = 0;
    v49 = v46 | v47;
    if (v37 >= v38) {
      goto LABEL_32;
    }
  LABEL_87:
    v126 = v37 >> 3;
    v127 = v37++ & 7;
    LODWORD(v126) = *(unsigned __int8*)(v39 + v126);
    v36[1] = v37;
    v50 = ((unsigned int)v126 >> v127) & 1;
    v51 = v48 | (4 * v49);
    if (v37 < v38) {
      goto LABEL_88;
    }
  LABEL_33:
    v52 = 0;
    v53 = v50 | v51;
    if (v37 >= v38) {
      goto LABEL_34;
    }
  LABEL_89:
    v130 = *(unsigned __int8*)(v39 + (v37 >> 3));
    v36[1] = v37 + 1;
    a1[2] = (v130 >> (v37 & 7)) & 1 | v52 | (4 * v53);
    v54 = 1;
    v55 = a1[2];
    if ((_DWORD)v55 == 0) {
      return v54;
    }
  LABEL_37:
    v56 = 0;
    while (2) {
      while (1) {
        if ((v54 & 1) != 0) {
          v57 = *a2;
          v58 = (*a2)[1];
          v59 = (*a2)[2];
          if (v59 - v58 >= 0x13) {
            break;
          }
        }
        v54 = 0;
        if (++v56 >= v55) {
          return v54;
        }
      }
      v60 = *v57;
      if (v59 <= v58) {
        v63 = 0;
      LABEL_43:
        v64 = 0;
        if (v58 >= v59) {
          goto LABEL_44;
        }
      LABEL_63:
        v84 = v58 >> 3;
        v85 = v58++ & 7;
        LODWORD(v84) = *(unsigned __int8*)(v60 + v84);
        v57[1] = v58;
        v65 = 2 * (((unsigned int)v84 >> v85) & 1);
        if (v58 < v59) {
          goto LABEL_64;
        }
      LABEL_45:
        v66 = 0;
        if (v58 >= v59) {
          goto LABEL_46;
        }
      LABEL_65:
        v88 = v58 >> 3;
        v89 = v58++ & 7;
        LODWORD(v88) = *(unsigned __int8*)(v60 + v88);
        v57[1] = v58;
        v67 = 2 * (((unsigned int)v88 >> v89) & 1);
        if (v58 < v59) {
          goto LABEL_66;
        }
      LABEL_47:
        v68 = 0;
        if (v58 >= v59) {
          goto LABEL_48;
        }
      LABEL_67:
        v92 = v58 >> 3;
        v93 = v58++ & 7;
        LODWORD(v92) = *(unsigned __int8*)(v60 + v92);
        v57[1] = v58;
        v69 = 2 * (((unsigned int)v92 >> v93) & 1);
        if (v58 < v59) {
          goto LABEL_68;
        }
      LABEL_49:
        v70 = 0;
        if (v58 >= v59) {
          goto LABEL_50;
        }
      LABEL_69:
        v96 = v58 >> 3;
        v97 = v58++ & 7;
        LODWORD(v96) = *(unsigned __int8*)(v60 + v96);
        v57[1] = v58;
        v71 = 2 * (((unsigned int)v96 >> v97) & 1);
        if (v58 < v59) {
          goto LABEL_70;
        }
      LABEL_51:
        v72 = 0;
        if (v58 >= v59) {
          goto LABEL_52;
        }
      LABEL_71:
        v100 = v58 >> 3;
        v101 = v58++ & 7;
        LODWORD(v100) = *(unsigned __int8*)(v60 + v100);
        v57[1] = v58;
        v73 = 2 * (((unsigned int)v100 >> v101) & 1);
        if (v58 < v59) {
          goto LABEL_72;
        }
      LABEL_53:
        v74 = 0;
        if (v58 >= v59) {
          goto LABEL_54;
        }
      LABEL_73:
        v104 = v58 >> 3;
        v105 = v58++ & 7;
        LODWORD(v104) = *(unsigned __int8*)(v60 + v104);
        v57[1] = v58;
        v75 = 2 * (((unsigned int)v104 >> v105) & 1);
        if (v58 < v59) {
          goto LABEL_74;
        }
      LABEL_55:
        v76 = 0;
        if (v58 >= v59) {
          goto LABEL_56;
        }
      LABEL_75:
        v108 = v58 >> 3;
        v109 = v58++ & 7;
        LODWORD(v108) = *(unsigned __int8*)(v60 + v108);
        v57[1] = v58;
        v77 = 2 * (((unsigned int)v108 >> v109) & 1);
        if (v58 < v59) {
          goto LABEL_76;
        }
      LABEL_57:
        v78 = 0;
        if (v58 >= v59) {
          goto LABEL_58;
        }
      LABEL_77:
        v112 = v58 >> 3;
        v113 = v58++ & 7;
        LODWORD(v112) = *(unsigned __int8*)(v60 + v112);
        v57[1] = v58;
        v79 = 2 * (((unsigned int)v112 >> v113) & 1);
        if (v58 < v59) {
          goto LABEL_78;
        }
      LABEL_59:
        v80 = 0;
        if (v58 >= v59) {
          goto LABEL_60;
        }
      LABEL_79:
        v116 = *(unsigned __int8*)(v60 + (v58 >> 3));
        v57[1] = v58 + 1;
        v81 = (v116 >> (v58 & 7)) & 1;
      }
      else {
        v61 = v58 >> 3;
        v62 = (*a2)[1] & 7;
        ++v58;
        LODWORD(v61) = *(unsigned __int8*)(v60 + v61);
        v57[1] = v58;
        v63 = 2 * (((unsigned int)v61 >> v62) & 1);
        if (v58 >= v59) {
          goto LABEL_43;
        }
        v82 = v58 >> 3;
        v83 = v58++ & 7;
        LODWORD(v82) = *(unsigned __int8*)(v60 + v82);
        v57[1] = v58;
        v64 = ((unsigned int)v82 >> v83) & 1;
        if (v58 < v59) {
          goto LABEL_63;
        }
      LABEL_44:
        v65 = 0;
        if (v58 >= v59) {
          goto LABEL_45;
        }
      LABEL_64:
        v86 = v58 >> 3;
        v87 = v58++ & 7;
        LODWORD(v86) = *(unsigned __int8*)(v60 + v86);
        v57[1] = v58;
        v66 = ((unsigned int)v86 >> v87) & 1;
        if (v58 < v59) {
          goto LABEL_65;
        }
      LABEL_46:
        v67 = 0;
        if (v58 >= v59) {
          goto LABEL_47;
        }
      LABEL_66:
        v90 = v58 >> 3;
        v91 = v58++ & 7;
        LODWORD(v90) = *(unsigned __int8*)(v60 + v90);
        v57[1] = v58;
        v68 = ((unsigned int)v90 >> v91) & 1;
        if (v58 < v59) {
          goto LABEL_67;
        }
      LABEL_48:
        v69 = 0;
        if (v58 >= v59) {
          goto LABEL_49;
        }
      LABEL_68:
        v94 = v58 >> 3;
        v95 = v58++ & 7;
        LODWORD(v94) = *(unsigned __int8*)(v60 + v94);
        v57[1] = v58;
        v70 = ((unsigned int)v94 >> v95) & 1;
        if (v58 < v59) {
          goto LABEL_69;
        }
      LABEL_50:
        v71 = 0;
        if (v58 >= v59) {
          goto LABEL_51;
        }
      LABEL_70:
        v98 = v58 >> 3;
        v99 = v58++ & 7;
        LODWORD(v98) = *(unsigned __int8*)(v60 + v98);
        v57[1] = v58;
        v72 = ((unsigned int)v98 >> v99) & 1;
        if (v58 < v59) {
          goto LABEL_71;
        }
      LABEL_52:
        v73 = 0;
        if (v58 >= v59) {
          goto LABEL_53;
        }
      LABEL_72:
        v102 = v58 >> 3;
        v103 = v58++ & 7;
        LODWORD(v102) = *(unsigned __int8*)(v60 + v102);
        v57[1] = v58;
        v74 = ((unsigned int)v102 >> v103) & 1;
        if (v58 < v59) {
          goto LABEL_73;
        }
      LABEL_54:
        v75 = 0;
        if (v58 >= v59) {
          goto LABEL_55;
        }
      LABEL_74:
        v106 = v58 >> 3;
        v107 = v58++ & 7;
        LODWORD(v106) = *(unsigned __int8*)(v60 + v106);
        v57[1] = v58;
        v76 = ((unsigned int)v106 >> v107) & 1;
        if (v58 < v59) {
          goto LABEL_75;
        }
      LABEL_56:
        v77 = 0;
        if (v58 >= v59) {
          goto LABEL_57;
        }
      LABEL_76:
        v110 = v58 >> 3;
        v111 = v58++ & 7;
        LODWORD(v110) = *(unsigned __int8*)(v60 + v110);
        v57[1] = v58;
        v78 = ((unsigned int)v110 >> v111) & 1;
        if (v58 < v59) {
          goto LABEL_77;
        }
      LABEL_58:
        v79 = 0;
        if (v58 >= v59) {
          goto LABEL_59;
        }
      LABEL_78:
        v114 = v58 >> 3;
        v115 = v58++ & 7;
        LODWORD(v114) = *(unsigned __int8*)(v60 + v114);
        v57[1] = v58;
        v80 = ((unsigned int)v114 >> v115) & 1;
        if (v58 < v59) {
          goto LABEL_79;
        }
      LABEL_60:
        v81 = 0;
      }
      a1[v56 + 3] =
          v81 |
          (2 *
           (v80 | v79 |
            (4 *
             (v78 | v77 |
              (4 *
               (v76 | v75 |
                (4 * (v74 | v73 |
                      (4 * (v72 | v71 |
                            (4 * (v70 | v69 |
                                  (4 * (v68 | v67 |
                                        (4 * (v66 | v65 |
                                              (4 * (v64 | v63))))))))))))))))));
      v54 = 1;
      v55 = a1[2];
      if (++v56 >= v55) {
        return v54;
      }
      continue;
    }
  }
  v42 = 0;
LABEL_28:
  v43 = 0;
  if (v37 >= v38) {
    goto LABEL_29;
  }
LABEL_84:
  v120 = v37 >> 3;
  v121 = v37++ & 7;
  LODWORD(v120) = *(unsigned __int8*)(v39 + v120);
  v36[1] = v37;
  v44 = 2 * (((unsigned int)v120 >> v121) & 1);
  v45 = v43 | v42;
  if (v37 < v38) {
    goto LABEL_85;
  }
LABEL_30:
  v46 = 0;
  v47 = v44 | (4 * v45);
  if (v37 >= v38) {
    goto LABEL_31;
  }
LABEL_86:
  v124 = v37 >> 3;
  v125 = v37++ & 7;
  LODWORD(v124) = *(unsigned __int8*)(v39 + v124);
  v36[1] = v37;
  v48 = 2 * (((unsigned int)v124 >> v125) & 1);
  v49 = v46 | v47;
  if (v37 < v38) {
    goto LABEL_87;
  }
LABEL_32:
  v50 = 0;
  v51 = v48 | (4 * v49);
  if (v37 >= v38) {
    goto LABEL_33;
  }
LABEL_88:
  v128 = v37 >> 3;
  v129 = v37++ & 7;
  LODWORD(v128) = *(unsigned __int8*)(v39 + v128);
  v36[1] = v37;
  v52 = 2 * (((unsigned int)v128 >> v129) & 1);
  v53 = v50 | v51;
  if (v37 < v38) {
    goto LABEL_89;
  }
LABEL_34:
  a1[2] = v52 | (4 * v53);
  v54 = 1;
  v55 = a1[2];
  if ((_DWORD)v55 != 0) {
    goto LABEL_37;
  }
  return v54;
}

bool SdkHr_746b00(int* a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  char v12;

  v4 = 8 * a3;
  if (*a4 >= 8 * a3) {
    v5 = 8 * a3;
  }
  else {
    v5 = *a4;
  }
  v6 = v4 - v5;
  if (v4 - v5 >= 2) {
    if (*a4 >= v4) {
      v9 = 0;
      if (v5 >= v4) {
        goto LABEL_7;
      }
    }
    else {
      v7 = v5 >> 3;
      v8 = v5++ & 7;
      v9 = 2 * ((*(unsigned __int8*)(a2 + v7) >> v8) & 1);
      if (v5 >= v4) {
      LABEL_7:
        v10 = 0;
      LABEL_10:
        *a1 = v10 | v9;
        *a4 = v5;
        return v6 > 1;
      }
    }
    v11 = v5 >> 3;
    v12 = v5++ & 7;
    v10 = (*(unsigned __int8*)(a2 + v11) >> v12) & 1;
    goto LABEL_10;
  }
  return v6 > 1;
}

__int64 SdkHr_746b90(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;

  v4 = *a4;
  v5 = 8 * a3;
  v10 = 8 * a3;
  if (v4 < 8 * a3) {
    v5 = v4;
  }
  v8 = a2;
  v9 = v5;
  v11 = &v8;
  result = SdkRoutine_87ac90(a1, &v11) & 1;
  *a4 = v9;
  return result;
}

__int64 SdkHr_747770(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5,
                     unsigned __int64* a6)
{
  unsigned __int64 v6;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;

  v6 = *a6;
  v12 = a3;
  v13 = a4;
  v10 = a1;
  v11 = 0;
  if (v6 >= 8 * a5) {
    v6 = 8 * a5;
  }
  v14 = v6;
  v15 = 8 * a5;
  result =
      SdkRoutine_87acd0(&v10, &v13, &SdkData_ca72b4, SdkRoutine_7477f0) & 1;
  *a2 = v11;
  *a6 = v14;
  return result;
}

__int64 SdkHr_747960(__int64 a1, __int64 a2, __int64 a3, unsigned __int64* a4,
                     float* a5)
{
  unsigned __int64 v5;
  float v6;
  char v8;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;

  v5 = *a4;
  v6 = *a5;
  v11 = 0;
  v12 = a2;
  if (v5 >= 8 * a3) {
    v5 = 8 * a3;
  }
  v13 = v5;
  v14 = 8 * a3;
  LODWORD(v11) = 40;
  v10[0] = a1;
  v10[1] = 0x1E00000028LL;
  v8 = SdkRoutine_87ace0(v10, &v12, 144000.0 / v6);
  if ((v8 & 1) != 0) {
    *a4 = v13;
  }
  return v8 & 1;
}

__int64 SdkHr_747bc0(unsigned int* a1, __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  char v9;
  unsigned __int64 v10;
  char v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned __int64 v15;
  char v16;
  unsigned __int64 v17;
  char v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  unsigned __int64 v49;
  char v50;
  unsigned __int64 v51;
  char v52;
  unsigned __int64 v53;
  char v54;
  unsigned __int64 v55;
  char v56;
  unsigned __int64 v57;
  char v58;
  unsigned __int64 v59;
  char v60;
  unsigned __int64 v61;
  char v62;
  unsigned __int64 v63;
  char v64;
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned int v71;
  __int64* v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  unsigned __int64 v78;
  char v79;
  unsigned __int64 v80;
  char v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  unsigned __int64 v85;
  char v86;
  unsigned __int64 v87;
  char v88;
  __int64* v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned int v95;
  unsigned int v96;
  unsigned int v97;
  int v98;
  unsigned int v99;
  int v100;
  unsigned int v101;
  int v102;
  unsigned int v103;
  int v104;
  unsigned int v105;
  int v106;
  unsigned int v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned __int64 v114;
  char v115;
  unsigned __int64 v116;
  char v117;
  unsigned __int64 v118;
  char v119;
  unsigned int v120;
  unsigned int* v121;
  unsigned __int64 v122;
  __int64* v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned int v129;
  unsigned int v130;
  int v131;
  unsigned __int64 v132;
  char v133;
  unsigned int v134;
  __int64* v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned int v155;
  unsigned int v156;
  unsigned int v157;
  unsigned int v158;
  int v159;
  unsigned __int64 v160;
  char v161;
  unsigned __int64 v162;
  char v163;
  unsigned __int64 v164;
  char v165;
  unsigned __int64 v166;
  char v167;
  unsigned __int64 v168;
  char v169;
  unsigned __int64 v170;
  char v171;
  unsigned __int64 v172;
  char v173;
  unsigned __int64 v174;
  char v175;
  unsigned __int64 v176;
  char v177;
  unsigned __int64 v178;
  char v179;
  unsigned __int64 v180;
  char v181;
  unsigned __int64 v182;
  char v183;
  unsigned __int64 v184;
  char v185;
  unsigned __int64 v186;
  char v187;
  unsigned __int64 v188;
  char v189;
  unsigned __int64 v190;
  char v191;
  unsigned __int64 v192;
  char v193;
  unsigned int v194;

  v2 = *a2;
  v4 = (*a2)[1];
  v3 = (*a2)[2];
  if (v3 - v4 < 0x20) {
    return 0;
  }
  v5 = *v2;
  v6 = -32;
  v7 = 0;
  do {
    while (v4 >= v3) {
      v12 = 0;
    LABEL_6:
      v13 = 0;
      if (v4 >= v3) {
        goto LABEL_7;
      }
    LABEL_11:
      v17 = v4 >> 3;
      v18 = v4++ & 7;
      LODWORD(v17) = *(unsigned __int8*)(v5 + v17);
      v2[1] = v4;
      v14 = 2 * (((unsigned int)v17 >> v18) & 1);
      if (v4 >= v3) {
        goto LABEL_12;
      }
    LABEL_3:
      v8 = v4 >> 3;
      v9 = v4++ & 7;
      LODWORD(v8) = *(unsigned __int8*)(v5 + v8);
      v2[1] = v4;
      v6 += 4;
      v7 = ((unsigned int)v8 >> v9) & 1 | v14 | (4 * (v13 | v12 | (4 * v7)));
      if (v6 == 0) {
        goto LABEL_13;
      }
    }
    v10 = v4 >> 3;
    v11 = v4++ & 7;
    LODWORD(v10) = *(unsigned __int8*)(v5 + v10);
    v2[1] = v4;
    v12 = 2 * (((unsigned int)v10 >> v11) & 1);
    if (v4 >= v3) {
      goto LABEL_6;
    }
    v15 = v4 >> 3;
    v16 = v4++ & 7;
    LODWORD(v15) = *(unsigned __int8*)(v5 + v15);
    v2[1] = v4;
    v13 = ((unsigned int)v15 >> v16) & 1;
    if (v4 < v3) {
      goto LABEL_11;
    }
  LABEL_7:
    v14 = 0;
    if (v4 < v3) {
      goto LABEL_3;
    }
  LABEL_12:
    v6 += 4;
    v7 = v14 | (4 * (v13 | v12 | (4 * v7)));
  } while (v6 != 0);
LABEL_13:
  a1[1] = v7;
  v19 = *a2;
  v20 = (*a2)[1];
  v21 = (*a2)[2];
  if (v21 - v20 < 0xD) {
    return 0;
  }
  v22 = *v19;
  if (v21 <= v20) {
    v25 = 0;
  LABEL_16:
    v26 = 0;
    if (v20 >= v21) {
      goto LABEL_17;
    }
  LABEL_32:
    v51 = v20 >> 3;
    v52 = v20++ & 7;
    LODWORD(v51) = *(unsigned __int8*)(v22 + v51);
    v19[1] = v20;
    v27 = 2 * (((unsigned int)v51 >> v52) & 1);
    v28 = v26 | v25;
    if (v20 < v21) {
      goto LABEL_33;
    }
  LABEL_18:
    v29 = 0;
    v30 = v27 | (4 * v28);
    if (v20 >= v21) {
      goto LABEL_19;
    }
  LABEL_34:
    v55 = v20 >> 3;
    v56 = v20++ & 7;
    LODWORD(v55) = *(unsigned __int8*)(v22 + v55);
    v19[1] = v20;
    v31 = 2 * (((unsigned int)v55 >> v56) & 1);
    v32 = v29 | v30;
    if (v20 < v21) {
      goto LABEL_35;
    }
  LABEL_20:
    v33 = 0;
    v34 = v31 | (4 * v32);
    if (v20 >= v21) {
      goto LABEL_21;
    }
  LABEL_36:
    v59 = v20 >> 3;
    v60 = v20++ & 7;
    LODWORD(v59) = *(unsigned __int8*)(v22 + v59);
    v19[1] = v20;
    v35 = 2 * (((unsigned int)v59 >> v60) & 1);
    v36 = v33 | v34;
    if (v20 < v21) {
      goto LABEL_37;
    }
  LABEL_22:
    v37 = 0;
    v38 = v35 | (4 * v36);
    if (v20 >= v21) {
      goto LABEL_23;
    }
  LABEL_38:
    v63 = v20 >> 3;
    v64 = v20++ & 7;
    LODWORD(v63) = *(unsigned __int8*)(v22 + v63);
    v19[1] = v20;
    v39 = 2 * (((unsigned int)v63 >> v64) & 1);
    v40 = v37 | v38;
    if (v20 < v21) {
      goto LABEL_39;
    }
  LABEL_24:
    v41 = 0;
    v42 = v39 | (4 * v40);
    if (v20 >= v21) {
      goto LABEL_25;
    }
  LABEL_40:
    v67 = v20 >> 3;
    v68 = v20++ & 7;
    LODWORD(v67) = *(unsigned __int8*)(v22 + v67);
    v19[1] = v20;
    v43 = 2 * (((unsigned int)v67 >> v68) & 1);
    v44 = v41 | v42;
    if (v20 < v21) {
      goto LABEL_41;
    }
  LABEL_26:
    v45 = v43 | (4 * v44);
    if (v20 >= v21) {
      goto LABEL_27;
    }
  LABEL_42:
    v71 = *(unsigned __int8*)(v22 + (v20 >> 3));
    v19[1] = v20 + 1;
    v46 = (v71 >> (v20 & 7)) & 1;
  }
  else {
    v23 = v20 >> 3;
    v24 = (*a2)[1] & 7;
    ++v20;
    LODWORD(v23) = *(unsigned __int8*)(v22 + v23);
    v19[1] = v20;
    v25 = 2 * (((unsigned int)v23 >> v24) & 1);
    if (v20 >= v21) {
      goto LABEL_16;
    }
    v49 = v20 >> 3;
    v50 = v20++ & 7;
    LODWORD(v49) = *(unsigned __int8*)(v22 + v49);
    v19[1] = v20;
    v26 = ((unsigned int)v49 >> v50) & 1;
    if (v20 < v21) {
      goto LABEL_32;
    }
  LABEL_17:
    v27 = 0;
    v28 = v26 | v25;
    if (v20 >= v21) {
      goto LABEL_18;
    }
  LABEL_33:
    v53 = v20 >> 3;
    v54 = v20++ & 7;
    LODWORD(v53) = *(unsigned __int8*)(v22 + v53);
    v19[1] = v20;
    v29 = ((unsigned int)v53 >> v54) & 1;
    v30 = v27 | (4 * v28);
    if (v20 < v21) {
      goto LABEL_34;
    }
  LABEL_19:
    v31 = 0;
    v32 = v29 | v30;
    if (v20 >= v21) {
      goto LABEL_20;
    }
  LABEL_35:
    v57 = v20 >> 3;
    v58 = v20++ & 7;
    LODWORD(v57) = *(unsigned __int8*)(v22 + v57);
    v19[1] = v20;
    v33 = ((unsigned int)v57 >> v58) & 1;
    v34 = v31 | (4 * v32);
    if (v20 < v21) {
      goto LABEL_36;
    }
  LABEL_21:
    v35 = 0;
    v36 = v33 | v34;
    if (v20 >= v21) {
      goto LABEL_22;
    }
  LABEL_37:
    v61 = v20 >> 3;
    v62 = v20++ & 7;
    LODWORD(v61) = *(unsigned __int8*)(v22 + v61);
    v19[1] = v20;
    v37 = ((unsigned int)v61 >> v62) & 1;
    v38 = v35 | (4 * v36);
    if (v20 < v21) {
      goto LABEL_38;
    }
  LABEL_23:
    v39 = 0;
    v40 = v37 | v38;
    if (v20 >= v21) {
      goto LABEL_24;
    }
  LABEL_39:
    v65 = v20 >> 3;
    v66 = v20++ & 7;
    LODWORD(v65) = *(unsigned __int8*)(v22 + v65);
    v19[1] = v20;
    v41 = ((unsigned int)v65 >> v66) & 1;
    v42 = v39 | (4 * v40);
    if (v20 < v21) {
      goto LABEL_40;
    }
  LABEL_25:
    v43 = 0;
    v44 = v41 | v42;
    if (v20 >= v21) {
      goto LABEL_26;
    }
  LABEL_41:
    v69 = v20 >> 3;
    v70 = v20++ & 7;
    LODWORD(v69) = *(unsigned __int8*)(v22 + v69);
    v19[1] = v20;
    v45 = ((unsigned int)v69 >> v70) & 1 | v43 | (4 * v44);
    if (v20 < v21) {
      goto LABEL_42;
    }
  LABEL_27:
    v46 = 0;
  }
  *a1 = v46 | (2 * v45);
  v72 = *a2;
  v74 = (*a2)[1];
  v73 = (*a2)[2];
  if (v73 - v74 < 0x20) {
    return 0;
  }
  v75 = *v72;
  v76 = -32;
  v77 = 0;
  while (2) {
    while (2) {
      if (v74 < v73) {
        v80 = v74 >> 3;
        v81 = v74++ & 7;
        LODWORD(v80) = *(unsigned __int8*)(v75 + v80);
        v72[1] = v74;
        v82 = 2 * (((unsigned int)v80 >> v81) & 1);
        if (v74 >= v73) {
          goto LABEL_48;
        }
        v85 = v74 >> 3;
        v86 = v74++ & 7;
        LODWORD(v85) = *(unsigned __int8*)(v75 + v85);
        v72[1] = v74;
        v83 = ((unsigned int)v85 >> v86) & 1;
        if (v74 < v73) {
          goto LABEL_53;
        }
      LABEL_49:
        v84 = 0;
        if (v74 >= v73) {
          break;
        }
        goto LABEL_45;
      }
      v82 = 0;
    LABEL_48:
      v83 = 0;
      if (v74 >= v73) {
        goto LABEL_49;
      }
    LABEL_53:
      v87 = v74 >> 3;
      v88 = v74++ & 7;
      LODWORD(v87) = *(unsigned __int8*)(v75 + v87);
      v72[1] = v74;
      v84 = 2 * (((unsigned int)v87 >> v88) & 1);
      if (v74 < v73) {
      LABEL_45:
        v78 = v74 >> 3;
        v79 = v74++ & 7;
        LODWORD(v78) = *(unsigned __int8*)(v75 + v78);
        v72[1] = v74;
        v76 += 4;
        v77 = ((unsigned int)v78 >> v79) & 1 | v84 |
              (4 * (v83 | v82 | (4 * v77)));
        if (v76 == 0) {
          goto LABEL_55;
        }
        continue;
      }
      break;
    }
    v76 += 4;
    v77 = v84 | (4 * (v83 | v82 | (4 * v77)));
    if (v76 != 0) {
      continue;
    }
    break;
  }
LABEL_55:
  a1[2] = v77;
  v89 = *a2;
  v90 = (*a2)[1];
  v91 = (*a2)[2];
  if (v91 - v90 < 8) {
    return 0;
  }
  v92 = *v89;
  if (v91 <= v90) {
    v95 = 0;
  LABEL_58:
    v96 = 0;
    if (v90 >= v91) {
      goto LABEL_59;
    }
  LABEL_68:
    v110 = v90 >> 3;
    v111 = v90++ & 7;
    LODWORD(v110) = *(unsigned __int8*)(v92 + v110);
    v89[1] = v90;
    v97 = 2 * (((unsigned int)v110 >> v111) & 1);
    v98 = v96 | v95;
    if (v90 < v91) {
      goto LABEL_69;
    }
  LABEL_60:
    v99 = 0;
    v100 = v97 | (4 * v98);
    if (v90 >= v91) {
      goto LABEL_61;
    }
  LABEL_70:
    v114 = v90 >> 3;
    v115 = v90++ & 7;
    LODWORD(v114) = *(unsigned __int8*)(v92 + v114);
    v89[1] = v90;
    v101 = 2 * (((unsigned int)v114 >> v115) & 1);
    v102 = v99 | v100;
    if (v90 < v91) {
      goto LABEL_71;
    }
  LABEL_62:
    v103 = 0;
    v104 = v101 | (4 * v102);
    if (v90 >= v91) {
      goto LABEL_63;
    }
  LABEL_72:
    v118 = v90 >> 3;
    v119 = v90++ & 7;
    LODWORD(v118) = *(unsigned __int8*)(v92 + v118);
    v89[1] = v90;
    v105 = 2 * (((unsigned int)v118 >> v119) & 1);
    v106 = v103 | v104;
    if (v90 < v91) {
      goto LABEL_73;
    }
  LABEL_64:
    v107 = v105 | (4 * v106);
    a1[3] = v107;
    if (v107 > 0x40) {
      return 0;
    }
  LABEL_74:
    if (v107 == 0) {
      return 1;
    }
    v121 = a1 + 5;
    LOBYTE(v47) = 1;
    v122 = 0;
    while (1) {
      if ((v47 & 1) == 0) {
        goto LABEL_76;
      }
      v123 = *a2;
      v124 = (*a2)[1];
      v125 = (*a2)[2];
      if (v125 - v124 < 3) {
        goto LABEL_76;
      }
      v126 = *v123;
      if (v125 <= v124) {
        break;
      }
      v127 = v124 >> 3;
      v128 = (*a2)[1] & 7;
      ++v124;
      LODWORD(v127) = *(unsigned __int8*)(v126 + v127);
      v123[1] = v124;
      v129 = 2 * (((unsigned int)v127 >> v128) & 1);
      if (v124 >= v125) {
        goto LABEL_81;
      }
      v132 = v124 >> 3;
      v133 = v124++ & 7;
      LODWORD(v132) = *(unsigned __int8*)(v126 + v132);
      v123[1] = v124;
      v130 = ((unsigned int)v132 >> v133) & 1;
      if (v124 < v125) {
      LABEL_85:
        v134 = *(unsigned __int8*)(v126 + (v124 >> 3));
        v123[1] = v124 + 1;
        v131 = (v134 >> (v124 & 7)) & 1;
        goto LABEL_86;
      }
    LABEL_82:
      v131 = 0;
    LABEL_86:
      *(v121 - 1) = v131 | (2 * (v130 | v129));
      v135 = *a2;
      v136 = (*a2)[1];
      v137 = (*a2)[2];
      if (v137 - v136 < 0x13) {
      LABEL_76:
        v47 = 0;
        ++v122;
        v121 += 2;
        if (v122 >= a1[3]) {
          return v47;
        }
      }
      else {
        v138 = *v135;
        if (v137 <= v136) {
          v141 = 0;
        LABEL_89:
          v142 = 0;
          if (v136 >= v137) {
            goto LABEL_90;
          }
          goto LABEL_109;
        }
        v139 = v136 >> 3;
        v140 = (*a2)[1] & 7;
        ++v136;
        LODWORD(v139) = *(unsigned __int8*)(v138 + v139);
        v135[1] = v136;
        v141 = 2 * (((unsigned int)v139 >> v140) & 1);
        if (v136 >= v137) {
          goto LABEL_89;
        }
        v160 = v136 >> 3;
        v161 = v136++ & 7;
        LODWORD(v160) = *(unsigned __int8*)(v138 + v160);
        v135[1] = v136;
        v142 = ((unsigned int)v160 >> v161) & 1;
        if (v136 >= v137) {
        LABEL_90:
          v143 = 0;
          if (v136 >= v137) {
            goto LABEL_91;
          }
          goto LABEL_110;
        }
      LABEL_109:
        v162 = v136 >> 3;
        v163 = v136++ & 7;
        LODWORD(v162) = *(unsigned __int8*)(v138 + v162);
        v135[1] = v136;
        v143 = 2 * (((unsigned int)v162 >> v163) & 1);
        if (v136 >= v137) {
        LABEL_91:
          v144 = 0;
          if (v136 >= v137) {
            goto LABEL_92;
          }
          goto LABEL_111;
        }
      LABEL_110:
        v164 = v136 >> 3;
        v165 = v136++ & 7;
        LODWORD(v164) = *(unsigned __int8*)(v138 + v164);
        v135[1] = v136;
        v144 = ((unsigned int)v164 >> v165) & 1;
        if (v136 >= v137) {
        LABEL_92:
          v145 = 0;
          if (v136 >= v137) {
            goto LABEL_93;
          }
          goto LABEL_112;
        }
      LABEL_111:
        v166 = v136 >> 3;
        v167 = v136++ & 7;
        LODWORD(v166) = *(unsigned __int8*)(v138 + v166);
        v135[1] = v136;
        v145 = 2 * (((unsigned int)v166 >> v167) & 1);
        if (v136 >= v137) {
        LABEL_93:
          v146 = 0;
          if (v136 >= v137) {
            goto LABEL_94;
          }
          goto LABEL_113;
        }
      LABEL_112:
        v168 = v136 >> 3;
        v169 = v136++ & 7;
        LODWORD(v168) = *(unsigned __int8*)(v138 + v168);
        v135[1] = v136;
        v146 = ((unsigned int)v168 >> v169) & 1;
        if (v136 >= v137) {
        LABEL_94:
          v147 = 0;
          if (v136 >= v137) {
            goto LABEL_95;
          }
          goto LABEL_114;
        }
      LABEL_113:
        v170 = v136 >> 3;
        v171 = v136++ & 7;
        LODWORD(v170) = *(unsigned __int8*)(v138 + v170);
        v135[1] = v136;
        v147 = 2 * (((unsigned int)v170 >> v171) & 1);
        if (v136 >= v137) {
        LABEL_95:
          v148 = 0;
          if (v136 >= v137) {
            goto LABEL_96;
          }
          goto LABEL_115;
        }
      LABEL_114:
        v172 = v136 >> 3;
        v173 = v136++ & 7;
        LODWORD(v172) = *(unsigned __int8*)(v138 + v172);
        v135[1] = v136;
        v148 = ((unsigned int)v172 >> v173) & 1;
        if (v136 >= v137) {
        LABEL_96:
          v149 = 0;
          if (v136 >= v137) {
            goto LABEL_97;
          }
          goto LABEL_116;
        }
      LABEL_115:
        v174 = v136 >> 3;
        v175 = v136++ & 7;
        LODWORD(v174) = *(unsigned __int8*)(v138 + v174);
        v135[1] = v136;
        v149 = 2 * (((unsigned int)v174 >> v175) & 1);
        if (v136 >= v137) {
        LABEL_97:
          v150 = 0;
          if (v136 >= v137) {
            goto LABEL_98;
          }
          goto LABEL_117;
        }
      LABEL_116:
        v176 = v136 >> 3;
        v177 = v136++ & 7;
        LODWORD(v176) = *(unsigned __int8*)(v138 + v176);
        v135[1] = v136;
        v150 = ((unsigned int)v176 >> v177) & 1;
        if (v136 >= v137) {
        LABEL_98:
          v151 = 0;
          if (v136 >= v137) {
            goto LABEL_99;
          }
          goto LABEL_118;
        }
      LABEL_117:
        v178 = v136 >> 3;
        v179 = v136++ & 7;
        LODWORD(v178) = *(unsigned __int8*)(v138 + v178);
        v135[1] = v136;
        v151 = 2 * (((unsigned int)v178 >> v179) & 1);
        if (v136 >= v137) {
        LABEL_99:
          v152 = 0;
          if (v136 >= v137) {
            goto LABEL_100;
          }
          goto LABEL_119;
        }
      LABEL_118:
        v180 = v136 >> 3;
        v181 = v136++ & 7;
        LODWORD(v180) = *(unsigned __int8*)(v138 + v180);
        v135[1] = v136;
        v152 = ((unsigned int)v180 >> v181) & 1;
        if (v136 >= v137) {
        LABEL_100:
          v153 = 0;
          if (v136 >= v137) {
            goto LABEL_101;
          }
          goto LABEL_120;
        }
      LABEL_119:
        v182 = v136 >> 3;
        v183 = v136++ & 7;
        LODWORD(v182) = *(unsigned __int8*)(v138 + v182);
        v135[1] = v136;
        v153 = 2 * (((unsigned int)v182 >> v183) & 1);
        if (v136 >= v137) {
        LABEL_101:
          v154 = 0;
          if (v136 >= v137) {
            goto LABEL_102;
          }
          goto LABEL_121;
        }
      LABEL_120:
        v184 = v136 >> 3;
        v185 = v136++ & 7;
        LODWORD(v184) = *(unsigned __int8*)(v138 + v184);
        v135[1] = v136;
        v154 = ((unsigned int)v184 >> v185) & 1;
        if (v136 >= v137) {
        LABEL_102:
          v155 = 0;
          if (v136 >= v137) {
            goto LABEL_103;
          }
          goto LABEL_122;
        }
      LABEL_121:
        v186 = v136 >> 3;
        v187 = v136++ & 7;
        LODWORD(v186) = *(unsigned __int8*)(v138 + v186);
        v135[1] = v136;
        v155 = 2 * (((unsigned int)v186 >> v187) & 1);
        if (v136 >= v137) {
        LABEL_103:
          v156 = 0;
          if (v136 >= v137) {
            goto LABEL_104;
          }
          goto LABEL_123;
        }
      LABEL_122:
        v188 = v136 >> 3;
        v189 = v136++ & 7;
        LODWORD(v188) = *(unsigned __int8*)(v138 + v188);
        v135[1] = v136;
        v156 = ((unsigned int)v188 >> v189) & 1;
        if (v136 >= v137) {
        LABEL_104:
          v157 = 0;
          if (v136 >= v137) {
            goto LABEL_105;
          }
          goto LABEL_124;
        }
      LABEL_123:
        v190 = v136 >> 3;
        v191 = v136++ & 7;
        LODWORD(v190) = *(unsigned __int8*)(v138 + v190);
        v135[1] = v136;
        v157 = 2 * (((unsigned int)v190 >> v191) & 1);
        if (v136 >= v137) {
        LABEL_105:
          v158 = 0;
          if (v136 < v137) {
            goto LABEL_125;
          }
          goto LABEL_106;
        }
      LABEL_124:
        v192 = v136 >> 3;
        v193 = v136++ & 7;
        LODWORD(v192) = *(unsigned __int8*)(v138 + v192);
        v135[1] = v136;
        v158 = ((unsigned int)v192 >> v193) & 1;
        if (v136 < v137) {
        LABEL_125:
          v194 = *(unsigned __int8*)(v138 + (v136 >> 3));
          v135[1] = v136 + 1;
          v159 = (v194 >> (v136 & 7)) & 1;
          goto LABEL_126;
        }
      LABEL_106:
        v159 = 0;
      LABEL_126:
        *v121 =
            v159 |
            (2 *
             (v158 | v157 |
              (4 *
               (v156 | v155 |
                (4 *
                 (v154 | v153 |
                  (4 *
                   (v152 | v151 |
                    (4 * (v150 | v149 |
                          (4 * (v148 | v147 |
                                (4 * (v146 | v145 |
                                      (4 * (v144 | v143 |
                                            (4 * (v142 | v141))))))))))))))))));
        v121 += 2;
        v47 = 1;
        if (++v122 >= a1[3]) {
          return v47;
        }
      }
    }
    v129 = 0;
  LABEL_81:
    v130 = 0;
    if (v124 < v125) {
      goto LABEL_85;
    }
    goto LABEL_82;
  }
  v93 = v90 >> 3;
  v94 = (*a2)[1] & 7;
  ++v90;
  LODWORD(v93) = *(unsigned __int8*)(v92 + v93);
  v89[1] = v90;
  v95 = 2 * (((unsigned int)v93 >> v94) & 1);
  if (v90 >= v91) {
    goto LABEL_58;
  }
  v108 = v90 >> 3;
  v109 = v90++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v92 + v108);
  v89[1] = v90;
  v96 = ((unsigned int)v108 >> v109) & 1;
  if (v90 < v91) {
    goto LABEL_68;
  }
LABEL_59:
  v97 = 0;
  v98 = v96 | v95;
  if (v90 >= v91) {
    goto LABEL_60;
  }
LABEL_69:
  v112 = v90 >> 3;
  v113 = v90++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v92 + v112);
  v89[1] = v90;
  v99 = ((unsigned int)v112 >> v113) & 1;
  v100 = v97 | (4 * v98);
  if (v90 < v91) {
    goto LABEL_70;
  }
LABEL_61:
  v101 = 0;
  v102 = v99 | v100;
  if (v90 >= v91) {
    goto LABEL_62;
  }
LABEL_71:
  v116 = v90 >> 3;
  v117 = v90++ & 7;
  LODWORD(v116) = *(unsigned __int8*)(v92 + v116);
  v89[1] = v90;
  v103 = ((unsigned int)v116 >> v117) & 1;
  v104 = v101 | (4 * v102);
  if (v90 < v91) {
    goto LABEL_72;
  }
LABEL_63:
  v105 = 0;
  v106 = v103 | v104;
  if (v90 >= v91) {
    goto LABEL_64;
  }
LABEL_73:
  v120 = *(unsigned __int8*)(v92 + (v90 >> 3));
  v89[1] = v90 + 1;
  v107 = (v120 >> (v90 & 7)) & 1 | v105 | (4 * v106);
  a1[3] = v107;
  if (v107 <= 0x40) {
    goto LABEL_74;
  }
  return 0;
}

__int64 SdkHr_748900(__int64 a1, __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  char v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  char v11;
  unsigned int v12;
  char v13;
  unsigned int v14;
  char v15;
  unsigned int v16;
  char v17;
  unsigned int v18;
  char v19;
  int v20;
  unsigned __int64 v21;
  char v22;
  unsigned __int64 v23;
  char v24;
  unsigned __int64 v25;
  char v26;
  unsigned __int64 v27;
  char v28;
  unsigned __int64 v29;
  char v30;
  unsigned __int64 v31;
  char v32;
  unsigned int v33;
  __int64* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  __int64* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  char v53;
  unsigned int v54;
  char v55;
  unsigned int v56;
  char v57;
  unsigned int v58;
  char v59;
  unsigned int v60;
  char v61;
  int v62;
  unsigned __int64 v63;
  char v64;
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned __int64 v71;
  char v72;
  unsigned __int64 v73;
  char v74;
  unsigned int v75;
  __int64* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  char v85;
  unsigned int v86;
  char v87;
  unsigned int v88;
  char v89;
  int v90;
  unsigned __int64 v91;
  char v92;
  unsigned __int64 v93;
  char v94;
  unsigned __int64 v95;
  char v96;
  unsigned __int64 v97;
  char v98;
  unsigned int v99;
  __int64* v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned int v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned __int64 v113;
  char v114;
  unsigned __int64 v115;
  char v116;
  __int64* v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  unsigned int v123;
  unsigned __int64 v125;
  char v126;
  unsigned int v127;
  unsigned __int64 v128;
  char v129;
  unsigned int v130;
  int v131;
  unsigned __int64 v132;
  char v133;
  unsigned int v134;
  int v135;
  unsigned __int64 v136;
  char v137;
  unsigned int v138;
  int v139;
  unsigned __int64 v140;
  char v141;
  unsigned int v142;
  int v143;
  unsigned __int64 v144;
  char v145;
  unsigned int v146;
  int v147;
  unsigned __int64 v148;
  char v149;
  unsigned int v150;
  int v151;
  unsigned __int64 v152;
  char v153;
  unsigned int v154;
  int v155;
  unsigned __int64 v156;
  char v157;
  unsigned int v158;
  int v159;
  unsigned __int64 v160;
  char v161;
  unsigned int v162;
  int v163;
  unsigned __int64 v164;
  char v165;
  unsigned int v166;
  int v167;
  unsigned int v168;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 8) {
    return 0;
  }
  v5 = *v2;
  if (v4 <= v3) {
    LOBYTE(v8) = 0;
  LABEL_4:
    LOBYTE(v9) = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_13;
  }
  v6 = v3 >> 3;
  v7 = v3++ & 7;
  LODWORD(v6) = *(unsigned __int8*)(v5 + v6);
  v2[1] = v3;
  v8 = 2 * ((unsigned int)v6 >> v7);
  if (v3 >= v4) {
    goto LABEL_4;
  }
  v21 = v3 >> 3;
  v22 = v3++ & 7;
  LODWORD(v21) = *(unsigned __int8*)(v5 + v21);
  v2[1] = v3;
  v9 = ((unsigned int)v21 >> v22) & 1;
  if (v3 >= v4) {
  LABEL_5:
    LOBYTE(v10) = 0;
    v11 = v9 | v8;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_14;
  }
LABEL_13:
  v23 = v3 >> 3;
  v24 = v3++ & 7;
  LODWORD(v23) = *(unsigned __int8*)(v5 + v23);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v23 >> v24) & 1);
  v11 = v9 | v8;
  if (v3 >= v4) {
  LABEL_6:
    LOBYTE(v12) = 0;
    v13 = v10 | (4 * v11);
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_15;
  }
LABEL_14:
  v25 = v3 >> 3;
  v26 = v3++ & 7;
  LODWORD(v25) = *(unsigned __int8*)(v5 + v25);
  v2[1] = v3;
  v12 = ((unsigned int)v25 >> v26) & 1;
  v13 = v10 | (4 * v11);
  if (v3 >= v4) {
  LABEL_7:
    LOBYTE(v14) = 0;
    v15 = v12 | v13;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_16;
  }
LABEL_15:
  v27 = v3 >> 3;
  v28 = v3++ & 7;
  LODWORD(v27) = *(unsigned __int8*)(v5 + v27);
  v2[1] = v3;
  v14 = 2 * (((unsigned int)v27 >> v28) & 1);
  v15 = v12 | v13;
  if (v3 >= v4) {
  LABEL_8:
    LOBYTE(v16) = 0;
    v17 = v14 | (4 * v15);
    if (v3 >= v4) {
      goto LABEL_9;
    }
  LABEL_17:
    v31 = v3 >> 3;
    v32 = v3++ & 7;
    LODWORD(v31) = *(unsigned __int8*)(v5 + v31);
    v2[1] = v3;
    v18 = 2 * (((unsigned int)v31 >> v32) & 1);
    v19 = v16 | v17;
    if (v3 >= v4) {
      goto LABEL_10;
    }
    goto LABEL_18;
  }
LABEL_16:
  v29 = v3 >> 3;
  v30 = v3++ & 7;
  LODWORD(v29) = *(unsigned __int8*)(v5 + v29);
  v2[1] = v3;
  v16 = ((unsigned int)v29 >> v30) & 1;
  v17 = v14 | (4 * v15);
  if (v3 < v4) {
    goto LABEL_17;
  }
LABEL_9:
  LOBYTE(v18) = 0;
  v19 = v16 | v17;
  if (v3 >= v4) {
  LABEL_10:
    LOBYTE(v20) = 0;
    goto LABEL_19;
  }
LABEL_18:
  v33 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  v20 = (v33 >> (v3 & 7)) & 1;
LABEL_19:
  *(_BYTE*)a1 = v20 | v18 | (4 * v19);
  v34 = *a2;
  v35 = (*a2)[1];
  v36 = (*a2)[2];
  if (v36 - v35 < 2) {
    return 0;
  }
  v37 = *v34;
  if (v36 <= v35) {
    LOBYTE(v41) = 0;
    goto LABEL_22;
  }
  v38 = v35 >> 3;
  v39 = v35 & 7;
  v40 = v35 + 1;
  LODWORD(v38) = *(unsigned __int8*)(v37 + v38);
  v34[1] = v40;
  v41 = 2 * (((unsigned int)v38 >> v39) & 1);
  if (v40 >= v36) {
  LABEL_22:
    LOBYTE(v42) = 0;
    goto LABEL_25;
  }
  v43 = *(unsigned __int8*)(v37 + (v40 >> 3));
  v34[1] = v40 + 1;
  v42 = (v43 >> (v40 & 7)) & 1;
LABEL_25:
  *(_BYTE*)(a1 + 1) = v42 | v41;
  v44 = *a2;
  v45 = (*a2)[1];
  v46 = (*a2)[2];
  if (v46 - v45 < 8) {
    return 0;
  }
  v47 = *v44;
  if (v46 <= v45) {
    LOBYTE(v50) = 0;
  LABEL_28:
    LOBYTE(v51) = 0;
    if (v45 >= v46) {
      goto LABEL_29;
    }
    goto LABEL_37;
  }
  v48 = v45 >> 3;
  v49 = v45++ & 7;
  LODWORD(v48) = *(unsigned __int8*)(v47 + v48);
  v44[1] = v45;
  v50 = 2 * ((unsigned int)v48 >> v49);
  if (v45 >= v46) {
    goto LABEL_28;
  }
  v63 = v45 >> 3;
  v64 = v45++ & 7;
  LODWORD(v63) = *(unsigned __int8*)(v47 + v63);
  v44[1] = v45;
  v51 = ((unsigned int)v63 >> v64) & 1;
  if (v45 >= v46) {
  LABEL_29:
    LOBYTE(v52) = 0;
    v53 = v51 | v50;
    if (v45 >= v46) {
      goto LABEL_30;
    }
    goto LABEL_38;
  }
LABEL_37:
  v65 = v45 >> 3;
  v66 = v45++ & 7;
  LODWORD(v65) = *(unsigned __int8*)(v47 + v65);
  v44[1] = v45;
  v52 = 2 * (((unsigned int)v65 >> v66) & 1);
  v53 = v51 | v50;
  if (v45 >= v46) {
  LABEL_30:
    LOBYTE(v54) = 0;
    v55 = v52 | (4 * v53);
    if (v45 >= v46) {
      goto LABEL_31;
    }
    goto LABEL_39;
  }
LABEL_38:
  v67 = v45 >> 3;
  v68 = v45++ & 7;
  LODWORD(v67) = *(unsigned __int8*)(v47 + v67);
  v44[1] = v45;
  v54 = ((unsigned int)v67 >> v68) & 1;
  v55 = v52 | (4 * v53);
  if (v45 >= v46) {
  LABEL_31:
    LOBYTE(v56) = 0;
    v57 = v54 | v55;
    if (v45 >= v46) {
      goto LABEL_32;
    }
    goto LABEL_40;
  }
LABEL_39:
  v69 = v45 >> 3;
  v70 = v45++ & 7;
  LODWORD(v69) = *(unsigned __int8*)(v47 + v69);
  v44[1] = v45;
  v56 = 2 * (((unsigned int)v69 >> v70) & 1);
  v57 = v54 | v55;
  if (v45 >= v46) {
  LABEL_32:
    LOBYTE(v58) = 0;
    v59 = v56 | (4 * v57);
    if (v45 >= v46) {
      goto LABEL_33;
    }
  LABEL_41:
    v73 = v45 >> 3;
    v74 = v45++ & 7;
    LODWORD(v73) = *(unsigned __int8*)(v47 + v73);
    v44[1] = v45;
    v60 = 2 * (((unsigned int)v73 >> v74) & 1);
    v61 = v58 | v59;
    if (v45 >= v46) {
      goto LABEL_34;
    }
    goto LABEL_42;
  }
LABEL_40:
  v71 = v45 >> 3;
  v72 = v45++ & 7;
  LODWORD(v71) = *(unsigned __int8*)(v47 + v71);
  v44[1] = v45;
  v58 = ((unsigned int)v71 >> v72) & 1;
  v59 = v56 | (4 * v57);
  if (v45 < v46) {
    goto LABEL_41;
  }
LABEL_33:
  LOBYTE(v60) = 0;
  v61 = v58 | v59;
  if (v45 >= v46) {
  LABEL_34:
    LOBYTE(v62) = 0;
    goto LABEL_43;
  }
LABEL_42:
  v75 = *(unsigned __int8*)(v47 + (v45 >> 3));
  v44[1] = v45 + 1;
  v62 = (v75 >> (v45 & 7)) & 1;
LABEL_43:
  *(_BYTE*)(a1 + 2) = v62 | v60 | (4 * v61);
  v76 = *a2;
  v77 = (*a2)[1];
  v78 = (*a2)[2];
  if (v78 - v77 < 6) {
    return 0;
  }
  v79 = *v76;
  if (v78 <= v77) {
    LOBYTE(v82) = 0;
  LABEL_46:
    LOBYTE(v83) = 0;
    if (v77 >= v78) {
      goto LABEL_47;
    }
    goto LABEL_53;
  }
  v80 = v77 >> 3;
  v81 = v77++ & 7;
  LODWORD(v80) = *(unsigned __int8*)(v79 + v80);
  v76[1] = v77;
  v82 = 2 * (((unsigned int)v80 >> v81) & 1);
  if (v77 >= v78) {
    goto LABEL_46;
  }
  v91 = v77 >> 3;
  v92 = v77++ & 7;
  LODWORD(v91) = *(unsigned __int8*)(v79 + v91);
  v76[1] = v77;
  v83 = ((unsigned int)v91 >> v92) & 1;
  if (v77 >= v78) {
  LABEL_47:
    LOBYTE(v84) = 0;
    v85 = v83 | v82;
    if (v77 >= v78) {
      goto LABEL_48;
    }
    goto LABEL_54;
  }
LABEL_53:
  v93 = v77 >> 3;
  v94 = v77++ & 7;
  LODWORD(v93) = *(unsigned __int8*)(v79 + v93);
  v76[1] = v77;
  v84 = 2 * (((unsigned int)v93 >> v94) & 1);
  v85 = v83 | v82;
  if (v77 >= v78) {
  LABEL_48:
    LOBYTE(v86) = 0;
    v87 = v84 | (4 * v85);
    if (v77 >= v78) {
      goto LABEL_49;
    }
  LABEL_55:
    v97 = v77 >> 3;
    v98 = v77++ & 7;
    LODWORD(v97) = *(unsigned __int8*)(v79 + v97);
    v76[1] = v77;
    v88 = 2 * (((unsigned int)v97 >> v98) & 1);
    v89 = v86 | v87;
    if (v77 >= v78) {
      goto LABEL_50;
    }
    goto LABEL_56;
  }
LABEL_54:
  v95 = v77 >> 3;
  v96 = v77++ & 7;
  LODWORD(v95) = *(unsigned __int8*)(v79 + v95);
  v76[1] = v77;
  v86 = ((unsigned int)v95 >> v96) & 1;
  v87 = v84 | (4 * v85);
  if (v77 < v78) {
    goto LABEL_55;
  }
LABEL_49:
  LOBYTE(v88) = 0;
  v89 = v86 | v87;
  if (v77 >= v78) {
  LABEL_50:
    LOBYTE(v90) = 0;
    goto LABEL_57;
  }
LABEL_56:
  v99 = *(unsigned __int8*)(v79 + (v77 >> 3));
  v76[1] = v77 + 1;
  v90 = (v99 >> (v77 & 7)) & 1;
LABEL_57:
  *(_BYTE*)(a1 + 3) = v90 | v88 | (4 * v89);
  v100 = *a2;
  v102 = (*a2)[1];
  v101 = (*a2)[2];
  if (v101 - v102 < 0x20) {
    return 0;
  }
  v103 = *v100;
  v104 = -32;
  v105 = 0;
  do {
    while (v102 >= v101) {
      v110 = 0;
    LABEL_62:
      v111 = 0;
      if (v102 >= v101) {
        goto LABEL_63;
      }
    LABEL_67:
      v115 = v102 >> 3;
      v116 = v102++ & 7;
      LODWORD(v115) = *(unsigned __int8*)(v103 + v115);
      v100[1] = v102;
      v112 = 2 * (((unsigned int)v115 >> v116) & 1);
      if (v102 >= v101) {
        goto LABEL_68;
      }
    LABEL_59:
      v106 = v102 >> 3;
      v107 = v102++ & 7;
      LODWORD(v106) = *(unsigned __int8*)(v103 + v106);
      v100[1] = v102;
      v104 += 4;
      v105 = ((unsigned int)v106 >> v107) & 1 | v112 |
             (4 * (v111 | v110 | (4 * v105)));
      if (v104 == 0) {
        goto LABEL_69;
      }
    }
    v108 = v102 >> 3;
    v109 = v102++ & 7;
    LODWORD(v108) = *(unsigned __int8*)(v103 + v108);
    v100[1] = v102;
    v110 = 2 * (((unsigned int)v108 >> v109) & 1);
    if (v102 >= v101) {
      goto LABEL_62;
    }
    v113 = v102 >> 3;
    v114 = v102++ & 7;
    LODWORD(v113) = *(unsigned __int8*)(v103 + v113);
    v100[1] = v102;
    v111 = ((unsigned int)v113 >> v114) & 1;
    if (v102 < v101) {
      goto LABEL_67;
    }
  LABEL_63:
    v112 = 0;
    if (v102 < v101) {
      goto LABEL_59;
    }
  LABEL_68:
    v104 += 4;
    v105 = v112 | (4 * (v111 | v110 | (4 * v105)));
  } while (v104 != 0);
LABEL_69:
  *(_DWORD*)(a1 + 8) = v105;
  v117 = *a2;
  v118 = (*a2)[1];
  v119 = (*a2)[2];
  if (v119 - v118 < 0xD) {
    return 0;
  }
  v120 = *v117;
  if (v119 <= v118) {
    v123 = 0;
  }
  else {
    v121 = v118 >> 3;
    v122 = (*a2)[1] & 7;
    ++v118;
    LODWORD(v121) = *(unsigned __int8*)(v120 + v121);
    v117[1] = v118;
    v123 = 2 * (((unsigned int)v121 >> v122) & 1);
  }
  if (v118 >= v119) {
    v127 = 0;
  }
  else {
    v125 = v118 >> 3;
    v126 = v118++ & 7;
    LODWORD(v125) = *(unsigned __int8*)(v120 + v125);
    v117[1] = v118;
    v127 = ((unsigned int)v125 >> v126) & 1;
  }
  if (v118 >= v119) {
    v130 = 0;
  }
  else {
    v128 = v118 >> 3;
    v129 = v118++ & 7;
    LODWORD(v128) = *(unsigned __int8*)(v120 + v128);
    v117[1] = v118;
    v130 = 2 * (((unsigned int)v128 >> v129) & 1);
  }
  v131 = v127 | v123;
  if (v118 >= v119) {
    v134 = 0;
  }
  else {
    v132 = v118 >> 3;
    v133 = v118++ & 7;
    LODWORD(v132) = *(unsigned __int8*)(v120 + v132);
    v117[1] = v118;
    v134 = ((unsigned int)v132 >> v133) & 1;
  }
  v135 = v130 | (4 * v131);
  if (v118 >= v119) {
    v138 = 0;
  }
  else {
    v136 = v118 >> 3;
    v137 = v118++ & 7;
    LODWORD(v136) = *(unsigned __int8*)(v120 + v136);
    v117[1] = v118;
    v138 = 2 * (((unsigned int)v136 >> v137) & 1);
  }
  v139 = v134 | v135;
  if (v118 >= v119) {
    v142 = 0;
  }
  else {
    v140 = v118 >> 3;
    v141 = v118++ & 7;
    LODWORD(v140) = *(unsigned __int8*)(v120 + v140);
    v117[1] = v118;
    v142 = ((unsigned int)v140 >> v141) & 1;
  }
  v143 = v138 | (4 * v139);
  if (v118 >= v119) {
    v146 = 0;
  }
  else {
    v144 = v118 >> 3;
    v145 = v118++ & 7;
    LODWORD(v144) = *(unsigned __int8*)(v120 + v144);
    v117[1] = v118;
    v146 = 2 * (((unsigned int)v144 >> v145) & 1);
  }
  v147 = v142 | v143;
  if (v118 >= v119) {
    v150 = 0;
  }
  else {
    v148 = v118 >> 3;
    v149 = v118++ & 7;
    LODWORD(v148) = *(unsigned __int8*)(v120 + v148);
    v117[1] = v118;
    v150 = ((unsigned int)v148 >> v149) & 1;
  }
  v151 = v146 | (4 * v147);
  if (v118 >= v119) {
    v154 = 0;
  }
  else {
    v152 = v118 >> 3;
    v153 = v118++ & 7;
    LODWORD(v152) = *(unsigned __int8*)(v120 + v152);
    v117[1] = v118;
    v154 = 2 * (((unsigned int)v152 >> v153) & 1);
  }
  v155 = v150 | v151;
  if (v118 >= v119) {
    v158 = 0;
  }
  else {
    v156 = v118 >> 3;
    v157 = v118++ & 7;
    LODWORD(v156) = *(unsigned __int8*)(v120 + v156);
    v117[1] = v118;
    v158 = ((unsigned int)v156 >> v157) & 1;
  }
  v159 = v154 | (4 * v155);
  if (v118 >= v119) {
    v162 = 0;
  }
  else {
    v160 = v118 >> 3;
    v161 = v118++ & 7;
    LODWORD(v160) = *(unsigned __int8*)(v120 + v160);
    v117[1] = v118;
    v162 = 2 * (((unsigned int)v160 >> v161) & 1);
  }
  v163 = v158 | v159;
  if (v118 >= v119) {
    v166 = 0;
  }
  else {
    v164 = v118 >> 3;
    v165 = v118++ & 7;
    LODWORD(v164) = *(unsigned __int8*)(v120 + v164);
    v117[1] = v118;
    v166 = ((unsigned int)v164 >> v165) & 1;
  }
  v167 = v166 | v162 | (4 * v163);
  if (v118 >= v119) {
    *(_DWORD*)(a1 + 4) = 2 * v167;
  }
  else {
    v168 = *(unsigned __int8*)(v120 + (v118 >> 3));
    v117[1] = v118 + 1;
    *(_DWORD*)(a1 + 4) = (v168 >> (v118 & 7)) & 1 | (2 * v167);
  }
  return 1;
}

__int64 SdkHr_74aec0(unsigned int* a1, __int64** a2)
{
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  int v21;
  unsigned __int64 v22;
  char v23;
  unsigned __int64 v24;
  char v25;
  unsigned __int64 v26;
  char v27;
  unsigned __int64 v28;
  char v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  unsigned int v36;
  __int64* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  int v52;
  unsigned int v53;
  int v54;
  unsigned int v55;
  unsigned __int64 v57;
  char v58;
  unsigned __int64 v59;
  char v60;
  unsigned __int64 v61;
  char v62;
  unsigned __int64 v63;
  char v64;
  unsigned __int64 v65;
  char v66;
  unsigned __int64 v67;
  char v68;
  unsigned __int64 v69;
  char v70;
  unsigned int v71;

  v2 = *a2;
  v3 = (*a2)[1];
  v4 = (*a2)[2];
  if (v4 - v3 < 9) {
    return 0;
  }
  v5 = *v2;
  if (v4 <= v3) {
    v8 = 0;
  LABEL_4:
    v9 = 0;
    if (v3 >= v4) {
      goto LABEL_5;
    }
    goto LABEL_14;
  }
  v6 = v3 >> 3;
  v7 = (*a2)[1] & 7;
  ++v3;
  LODWORD(v6) = *(unsigned __int8*)(v5 + v6);
  v2[1] = v3;
  v8 = 2 * (((unsigned int)v6 >> v7) & 1);
  if (v3 >= v4) {
    goto LABEL_4;
  }
  v22 = v3 >> 3;
  v23 = v3++ & 7;
  LODWORD(v22) = *(unsigned __int8*)(v5 + v22);
  v2[1] = v3;
  v9 = ((unsigned int)v22 >> v23) & 1;
  if (v3 >= v4) {
  LABEL_5:
    v10 = 0;
    v11 = v9 | v8;
    if (v3 >= v4) {
      goto LABEL_6;
    }
    goto LABEL_15;
  }
LABEL_14:
  v24 = v3 >> 3;
  v25 = v3++ & 7;
  LODWORD(v24) = *(unsigned __int8*)(v5 + v24);
  v2[1] = v3;
  v10 = 2 * (((unsigned int)v24 >> v25) & 1);
  v11 = v9 | v8;
  if (v3 >= v4) {
  LABEL_6:
    v12 = 0;
    v13 = v10 | (4 * v11);
    if (v3 >= v4) {
      goto LABEL_7;
    }
    goto LABEL_16;
  }
LABEL_15:
  v26 = v3 >> 3;
  v27 = v3++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v5 + v26);
  v2[1] = v3;
  v12 = ((unsigned int)v26 >> v27) & 1;
  v13 = v10 | (4 * v11);
  if (v3 >= v4) {
  LABEL_7:
    v14 = 0;
    v15 = v12 | v13;
    if (v3 >= v4) {
      goto LABEL_8;
    }
    goto LABEL_17;
  }
LABEL_16:
  v28 = v3 >> 3;
  v29 = v3++ & 7;
  LODWORD(v28) = *(unsigned __int8*)(v5 + v28);
  v2[1] = v3;
  v14 = 2 * (((unsigned int)v28 >> v29) & 1);
  v15 = v12 | v13;
  if (v3 >= v4) {
  LABEL_8:
    v16 = 0;
    v17 = v14 | (4 * v15);
    if (v3 >= v4) {
      goto LABEL_9;
    }
    goto LABEL_18;
  }
LABEL_17:
  v30 = v3 >> 3;
  v31 = v3++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v5 + v30);
  v2[1] = v3;
  v16 = ((unsigned int)v30 >> v31) & 1;
  v17 = v14 | (4 * v15);
  if (v3 >= v4) {
  LABEL_9:
    v18 = 0;
    v19 = v16 | v17;
    if (v3 >= v4) {
      goto LABEL_10;
    }
  LABEL_19:
    v34 = v3 >> 3;
    v35 = v3++ & 7;
    LODWORD(v34) = *(unsigned __int8*)(v5 + v34);
    v2[1] = v3;
    v20 = ((unsigned int)v34 >> v35) & 1 | v18 | (4 * v19);
    if (v3 >= v4) {
      goto LABEL_11;
    }
    goto LABEL_20;
  }
LABEL_18:
  v32 = v3 >> 3;
  v33 = v3++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v5 + v32);
  v2[1] = v3;
  v18 = 2 * (((unsigned int)v32 >> v33) & 1);
  v19 = v16 | v17;
  if (v3 < v4) {
    goto LABEL_19;
  }
LABEL_10:
  v20 = v18 | (4 * v19);
  if (v3 >= v4) {
  LABEL_11:
    v21 = 0;
    goto LABEL_21;
  }
LABEL_20:
  v36 = *(unsigned __int8*)(v5 + (v3 >> 3));
  v2[1] = v3 + 1;
  v21 = (v36 >> (v3 & 7)) & 1;
LABEL_21:
  *a1 = v21 | (2 * v20);
  v37 = *a2;
  v38 = (*a2)[1];
  v39 = (*a2)[2];
  if (v39 - v38 < 9) {
    return 0;
  }
  v40 = *v37;
  if (v39 <= v38) {
    v43 = 0;
  LABEL_24:
    v44 = 0;
    if (v38 >= v39) {
      goto LABEL_25;
    }
    goto LABEL_35;
  }
  v41 = v38 >> 3;
  v42 = (*a2)[1] & 7;
  ++v38;
  LODWORD(v41) = *(unsigned __int8*)(v40 + v41);
  v37[1] = v38;
  v43 = 2 * (((unsigned int)v41 >> v42) & 1);
  if (v38 >= v39) {
    goto LABEL_24;
  }
  v57 = v38 >> 3;
  v58 = v38++ & 7;
  LODWORD(v57) = *(unsigned __int8*)(v40 + v57);
  v37[1] = v38;
  v44 = ((unsigned int)v57 >> v58) & 1;
  if (v38 >= v39) {
  LABEL_25:
    v45 = 0;
    v46 = v44 | v43;
    if (v38 >= v39) {
      goto LABEL_26;
    }
    goto LABEL_36;
  }
LABEL_35:
  v59 = v38 >> 3;
  v60 = v38++ & 7;
  LODWORD(v59) = *(unsigned __int8*)(v40 + v59);
  v37[1] = v38;
  v45 = 2 * (((unsigned int)v59 >> v60) & 1);
  v46 = v44 | v43;
  if (v38 >= v39) {
  LABEL_26:
    v47 = 0;
    v48 = v45 | (4 * v46);
    if (v38 >= v39) {
      goto LABEL_27;
    }
    goto LABEL_37;
  }
LABEL_36:
  v61 = v38 >> 3;
  v62 = v38++ & 7;
  LODWORD(v61) = *(unsigned __int8*)(v40 + v61);
  v37[1] = v38;
  v47 = ((unsigned int)v61 >> v62) & 1;
  v48 = v45 | (4 * v46);
  if (v38 >= v39) {
  LABEL_27:
    v49 = 0;
    v50 = v47 | v48;
    if (v38 >= v39) {
      goto LABEL_28;
    }
    goto LABEL_38;
  }
LABEL_37:
  v63 = v38 >> 3;
  v64 = v38++ & 7;
  LODWORD(v63) = *(unsigned __int8*)(v40 + v63);
  v37[1] = v38;
  v49 = 2 * (((unsigned int)v63 >> v64) & 1);
  v50 = v47 | v48;
  if (v38 >= v39) {
  LABEL_28:
    v51 = 0;
    v52 = v49 | (4 * v50);
    if (v38 >= v39) {
      goto LABEL_29;
    }
    goto LABEL_39;
  }
LABEL_38:
  v65 = v38 >> 3;
  v66 = v38++ & 7;
  LODWORD(v65) = *(unsigned __int8*)(v40 + v65);
  v37[1] = v38;
  v51 = ((unsigned int)v65 >> v66) & 1;
  v52 = v49 | (4 * v50);
  if (v38 >= v39) {
  LABEL_29:
    v53 = 0;
    v54 = v51 | v52;
    if (v38 >= v39) {
      goto LABEL_30;
    }
    goto LABEL_40;
  }
LABEL_39:
  v67 = v38 >> 3;
  v68 = v38++ & 7;
  LODWORD(v67) = *(unsigned __int8*)(v40 + v67);
  v37[1] = v38;
  v53 = 2 * (((unsigned int)v67 >> v68) & 1);
  v54 = v51 | v52;
  if (v38 >= v39) {
  LABEL_30:
    v55 = v53 | (4 * v54);
    if (v38 >= v39) {
    LABEL_31:
      a1[1] = 2 * v55;
      return 1;
    }
    goto LABEL_41;
  }
LABEL_40:
  v69 = v38 >> 3;
  v70 = v38++ & 7;
  LODWORD(v69) = *(unsigned __int8*)(v40 + v69);
  v37[1] = v38;
  v55 = ((unsigned int)v69 >> v70) & 1 | v53 | (4 * v54);
  if (v38 >= v39) {
    goto LABEL_31;
  }
LABEL_41:
  v71 = *(unsigned __int8*)(v40 + (v38 >> 3));
  v37[1] = v38 + 1;
  a1[1] = (v71 >> (v38 & 7)) & 1 | (2 * v55);
  return 1;
}

__int64 SdkHr_74b970(_QWORD* a1, __int64 a2)
{
  return SdkRoutine_87ad80(*(_QWORD*)a2, *(unsigned int*)(a2 + 8),
                           *(unsigned int*)(a2 + 12), *(unsigned int*)(a2 + 16),
                           *a1);
}

__int64 SdkHr_74dc00(__int64 a1, __int64 a2)
{
  _BYTE v3[4];

  v3[0] = 0;
  return SdkRoutine_87adb0(a1, a2, v3) & 1;
}

__int64 SdkHr_74ead0(__int64 a1, __int64 a2)
{
  _BYTE v3[4];

  v3[0] = 0;
  return SdkRoutine_87add0(a1, a2, v3) & 1;
}

bool SdkHr_7501b0(__int64* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;

  v1 = a1[1];
  v2 = v1 + 8;
  if (v1 <= 0x1B58) {
    *(_BYTE*)(*a1 + (v1 >> 3)) |= 1 << (v1 & 7);
    v3 = *a1;
    a1[1] = v1 + 1;
    *(_BYTE*)(v3 + ((v1 + 1) >> 3)) |= 1 << ((v1 + 1) & 7);
    v4 = *a1;
    a1[1] = v1 + 2;
    *(_BYTE*)(v4 + ((v1 + 2) >> 3)) |= 1 << ((v1 + 2) & 7);
    v5 = *a1;
    a1[1] = v1 + 3;
    *(_BYTE*)(v5 + ((v1 + 3) >> 3)) |= 1 << ((v1 + 3) & 7);
    v6 = *a1;
    a1[1] = v1 + 4;
    *(_BYTE*)(v6 + ((v1 + 4) >> 3)) |= 1 << ((v1 + 4) & 7);
    v7 = *a1;
    a1[1] = v1 + 5;
    *(_BYTE*)(v7 + ((v1 + 5) >> 3)) |= 1 << ((v1 + 5) & 7);
    v8 = v1 + 6;
    v9 = v1 + 7;
    v10 = *a1;
    a1[1] = v8;
    *(_BYTE*)(v10 + (v8 >> 3)) |= 1 << (v8 & 7);
    a1[1] = v9;
    *(_BYTE*)(*a1 + (v9 >> 3)) |= 1 << (v9 & 7);
    a1[1] = v2;
  LABEL_4:
    SdkRoutine_87adf0();
    return v2 < 0x1B61;
  }
  if (v2 <= 0x1B60) {
    goto LABEL_4;
  }
  return v2 < 0x1B61;
}

double SdkHr_750320(__int64* a1, unsigned __int8** a2, unsigned int* a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 i;
  __int64 v14;
  int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 j;
  __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  char* v24;
  __int64 v25;
  unsigned __int8* v26;
  int v27;
  unsigned int v28;
  unsigned __int8 v29;
  int v30;
  int v31;
  int v32;
  char v33;
  char v34;
  int* v35;
  __int64* v36;
  unsigned __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int* v47;
  int* v48;
  __int64* v49;
  int v50;
  int v51;

  v49 = a1;
  v4 = (__int64)*a2;
  v50 = 0;
  v51 = 1;
  v47 = &v50;
  v48 = &v51;
  SdkRoutine_751ac0(&v47, v4, 0, **(unsigned __int8**)a3);
  SdkRoutine_751ac0(&v47, *a2 + 1, **a2,
                    *(unsigned __int8*)(*(_QWORD*)a3 + 1LL));
  SdkRoutine_751ac0(&v47, &(*a2)[*((unsigned int*)a2 + 4)], **a2,
                    *(unsigned __int8*)(*(_QWORD*)a3 + a3[4]));
  v7 = *((unsigned int*)a2 + 2);
  v6 = *((unsigned int*)a2 + 3);
  if ((unsigned int)v7 >= 3) {
    v8 = 0;
    do {
      v9 = &(*a2)[v8];
      v10 = 3 * v9[1] - *v9;
      v11 = (v10 + 1 + (((v10 + 1) & 0x8000) != 0)) >> 1;
      if (v11 >= 0xFF) {
        v11 = 255;
      }
      if (v10 >= -2) {
        v12 = v11;
      }
      else {
        v12 = 0;
      }
      SdkRoutine_751ac0(&v47, v9 + 2, v12,
                        *(unsigned __int8*)(*(_QWORD*)a3 + v8++ + 2));
    } while (v7 - 2 != v8);
  }
  if ((unsigned int)v6 < 3) {
    if ((_DWORD)v6 != 2 || (unsigned int)v7 <= 1) {
      return 0.0;
    }
    goto LABEL_21;
  }
  for (i = 2; i != v6; ++i) {
    v14 = *((unsigned int*)a2 + 4);
    v15 = 3 * (*a2)[(i - 1) * v14] - (*a2)[(i - 2) * v14];
    v16 = (v15 + 1 + (((v15 + 1) & 0x8000) != 0)) >> 1;
    if (v16 >= 0xFF) {
      v16 = 255;
    }
    if (v15 >= -2) {
      v17 = v16;
    }
    else {
      v17 = 0;
    }
    SdkRoutine_751ac0(&v47, &(*a2)[i * v14], v17,
                      *(unsigned __int8*)(*(_QWORD*)a3 + i * a3[4]));
  }
  if ((unsigned int)v7 >= 2) {
  LABEL_21:
    v18 = v7 - 1;
    v19 = 0;
    for (j = 1; j != v6; ++j) {
      v21 = *((unsigned int*)a2 + 4);
      v22 = (__int64)(*a2 + 1);
      v23 = (unsigned __int8*)(v22 + v19 * v21);
      v24 = (char*)(v22 + j * v21);
      v25 = v18;
      v26 = (unsigned __int8*)(*(_QWORD*)a3 + j * a3[4] + 1);
      do {
        v27 = 2 * (*v23 + (unsigned __int8)*(v24 - 1)) - *(v23 - 1);
        v28 = (unsigned __int16)(((unsigned int)(21846 * v27 + 21846) >> 16) +
                                 ((unsigned int)(21846 * v27 + 21846) >> 31));
        if (v28 >= 0xFF) {
          LOBYTE(v28) = -1;
        }
        if (v27 >= -3) {
          v29 = v28;
        }
        else {
          v29 = 0;
        }
        v30 = *v26++;
        if (v30 != 0) {
          v31 = SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[v29] +
                               256 + (unsigned __int8)*v24 - (unsigned int)v29];
          v32 = SdkData_ca7dde[5 * SdkData_ca7e1a[v29] +
                               SdkData_ca7f1a[512 * (unsigned __int64)
                                                        SdkData_ca7e1a[v29] +
                                              256 + (unsigned __int8)*v24 -
                                              (unsigned int)v29]] +
                v29;
          if ((unsigned int)v32 >= 0xFF) {
            v33 = -1;
          }
          else {
            v33 = v32;
          }
          if (v32 >= 0) {
            v34 = v33;
          }
          else {
            v34 = 0;
          }
          *v24 = v34;
          *v47 += *v48 * v31;
          *v48 *= 5;
          v35 = v48;
          if (*v48 == 125) {
            v36 = v49;
            v37 = v49[1];
            if (v37 >> 1 <= 0xDAC) {
              v38 = *v47;
              v39 = (*v47 & 0x20) != 0;
              *(_BYTE*)(*v49 + (v37 >> 3)) |= ((*v47 & 0x40) != 0) << (v37 & 7);
              v40 = *v36;
              v36[1] = v37 + 1;
              *(_BYTE*)(v40 + ((v37 + 1) >> 3)) |= v39 << ((v37 + 1) & 7);
              v41 = *v36;
              v36[1] = v37 + 2;
              *(_BYTE*)(v41 + ((v37 + 2) >> 3)) |= ((v38 & 0x10) != 0)
                                                   << ((v37 + 2) & 7);
              v42 = *v36;
              v36[1] = v37 + 3;
              *(_BYTE*)(v42 + ((v37 + 3) >> 3)) |= ((v38 & 8) != 0)
                                                   << ((v37 + 3) & 7);
              v43 = *v36;
              v36[1] = v37 + 4;
              *(_BYTE*)(v43 + ((v37 + 4) >> 3)) |= ((v38 & 4) != 0)
                                                   << ((v37 + 4) & 7);
              v44 = *v36;
              v36[1] = v37 + 5;
              *(_BYTE*)(v44 + ((v37 + 5) >> 3)) |= ((v38 & 2) != 0)
                                                   << ((v37 + 5) & 7);
              v45 = *v36;
              v36[1] = v37 + 6;
              *(_BYTE*)(v45 + ((v37 + 6) >> 3)) |= (v38 & 1) << ((v37 + 6) & 7);
              v36[1] = v37 + 7;
              v35 = v48;
            }
            *v35 = 1;
            *v47 = 0;
          }
        }
        else {
          *v24 = v29;
        }
        ++v23;
        --v25;
        ++v24;
      } while (v25 != 0);
      ++v19;
    }
  }
  return 0.0;
}

unsigned int* SdkHr_751560(unsigned int* result)
{
  int v1;
  int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  unsigned __int8* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int8* v35;
  int v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  unsigned __int64 v40;
  int v41;

  v1 = SdkData_ca7dde[**(unsigned __int8**)result];
  v2 = v1 & ~(v1 >> 31);
  if (v2 >= 255) {
    LOBYTE(v2) = -1;
  }
  **(_BYTE**)result = v2;
  v3 = **(unsigned __int8**)result;
  v4 = SdkData_ca7dde[5 * SdkData_ca7e1a[v3] +
                      *(unsigned __int8*)(*(_QWORD*)result + 1LL)];
  v5 = (v4 + v3) & ~((v4 + (int)v3) >> 31);
  if (v5 >= 255) {
    LOBYTE(v5) = -1;
  }
  *(_BYTE*)(*(_QWORD*)result + 1LL) = v5;
  v6 = result[4];
  v7 = **(unsigned __int8**)result;
  v8 = SdkData_ca7dde[5 * SdkData_ca7e1a[v7] +
                      *(unsigned __int8*)(*(_QWORD*)result + v6)];
  v9 = (v8 + v7) & ~((v8 + (int)v7) >> 31);
  if (v9 >= 255) {
    LOBYTE(v9) = -1;
  }
  *(_BYTE*)(*(_QWORD*)result + v6) = v9;
  if (result[2] >= 3) {
    v10 = 0;
    do {
      v11 = (unsigned __int8*)(*(_QWORD*)result + v10);
      v12 = 3 * v11[1] - *v11;
      v13 = (v12 + 1 + (((v12 + 1) & 0x8000) != 0)) >> 1;
      if (v13 >= 0xFF) {
        v13 = 255;
      }
      if (v12 >= -2) {
        v14 = v13;
      }
      else {
        v14 = 0;
      }
      v15 = SdkData_ca7dde[5 * SdkData_ca7e1a[v14] + v11[2]];
      v16 = (v14 + v15) & ~((int)(v14 + v15) >> 31);
      if (v16 >= 255) {
        LOBYTE(v16) = -1;
      }
      v11[2] = v16;
      v17 = v10 + 3;
      ++v10;
    } while (v17 < result[2]);
  }
  v18 = result[3];
  if ((unsigned int)v18 >= 3) {
    v19 = 2;
    do {
      v20 = result[4];
      v21 = *(_QWORD*)result;
      v22 = (v19 - 1) * v20;
      v23 = (v19 - 2) * v20;
      v24 = v19 * v20;
      ++v19;
      v25 = 3 * *(unsigned __int8*)(*(_QWORD*)result + v22) -
            *(unsigned __int8*)(*(_QWORD*)result + v23);
      v26 = (v25 + 1 + (((v25 + 1) & 0x8000) != 0)) >> 1;
      if (v26 >= 0xFF) {
        v26 = 255;
      }
      if (v25 >= -2) {
        v27 = v26;
      }
      else {
        v27 = 0;
      }
      v28 = SdkData_ca7dde[5 * SdkData_ca7e1a[v27] +
                           *(unsigned __int8*)(v21 + v24)];
      v29 = (v27 + v28) & ~((int)(v27 + v28) >> 31);
      if (v29 >= 255) {
        LOBYTE(v29) = -1;
      }
      *(_BYTE*)(v21 + v24) = v29;
      v18 = result[3];
    } while (v19 < v18);
  }
  if (v18 >= 2) {
    LODWORD(v30) = result[2];
    v31 = 1;
    v32 = 0;
    do {
      if ((unsigned int)v30 >= 2) {
        v33 = 0;
        do {
          v34 = result[4];
          v35 = (unsigned __int8*)(*(_QWORD*)result + v31 * v34 + v33);
          v36 =
              2 * (*(unsigned __int8*)(*(_QWORD*)result + v32 * v34 + v33 + 1) +
                   *v35) -
              *(unsigned __int8*)(*(_QWORD*)result + v32 * v34 + v33);
          v37 = (unsigned __int16)(((unsigned int)(21846 * v36 + 21846) >> 16) +
                                   ((unsigned int)(21846 * v36 + 21846) >> 31));
          if (v37 >= 0xFF) {
            v37 = 255;
          }
          if (v36 >= -3) {
            v38 = v37;
          }
          else {
            v38 = 0;
          }
          v39 = v38 + SdkData_ca7dde[5 * SdkData_ca7e1a[v38] + v35[1]];
          v40 = v33 + 2;
          ++v33;
          v41 = v39 & ~(v39 >> 31);
          if (v41 >= 255) {
            LOBYTE(v41) = -1;
          }
          v35[1] = v41;
          v30 = result[2];
        } while (v40 < v30);
        v18 = result[3];
      }
      ++v31;
      ++v32;
    } while (v31 < v18);
  }
  return result;
}

unsigned int* SdkHr_751800(unsigned int* result)
{
  int v1;
  int v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int8* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int8* v36;
  unsigned __int8* v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  int v41;
  unsigned __int64 v42;
  int v43;

  v1 = SdkData_ca7dde[**(unsigned __int16**)result];
  v2 = v1 & ~(v1 >> 31);
  if (v2 >= 255) {
    LOWORD(v2) = 255;
  }
  **(_WORD**)result = v2;
  v3 = **(unsigned __int16**)result;
  v4 = SdkData_ca7dde[5 * SdkData_ca7e1a[v3] +
                      *(unsigned __int16*)(*(_QWORD*)result + 2LL)];
  v5 = (v4 + v3) & ~((v4 + (int)v3) >> 31);
  if (v5 >= 255) {
    LOWORD(v5) = 255;
  }
  *(_WORD*)(*(_QWORD*)result + 2LL) = v5;
  v6 = **(unsigned __int16**)result;
  v7 = SdkData_ca7dde[5 * SdkData_ca7e1a[v6] +
                      *(unsigned __int16*)(*(_QWORD*)result + 2LL * result[4])];
  v8 = (v7 + v6) & ~((v7 + (int)v6) >> 31);
  if (v8 >= 255) {
    LOWORD(v8) = 255;
  }
  *(_WORD*)(*(_QWORD*)result + 2LL * result[4]) = v8;
  if (result[2] >= 3) {
    v9 = 0;
    do {
      v10 = (unsigned __int8*)(*(_QWORD*)result + 2 * v9);
      v11 = 3 * v10[2] - *v10;
      v12 = (v11 + 1 + (((v11 + 1) & 0x8000) != 0)) >> 1;
      if (v12 >= 0xFF) {
        v12 = 255;
      }
      if (v11 >= -2) {
        v13 = v12;
      }
      else {
        v13 = 0;
      }
      v14 = SdkData_ca7dde[5 * SdkData_ca7e1a[v13] + v10[4]];
      v15 = (v13 + v14) & ~((int)(v13 + v14) >> 31);
      if (v15 >= 255) {
        LOWORD(v15) = 255;
      }
      *((_WORD*)v10 + 2) = v15;
      v16 = v9 + 3;
      ++v9;
    } while (v16 < result[2]);
  }
  v17 = result[3];
  if ((unsigned int)v17 >= 3) {
    v18 = 2;
    do {
      v19 = result[4];
      v20 = *(_QWORD*)result;
      v21 = (v18 - 1) * v19;
      v22 = (v18 - 2) * v19;
      v23 = v18 * v19;
      ++v18;
      v24 = 2 * v23;
      v25 = 3 * *(unsigned __int8*)(*(_QWORD*)result + 2 * v21) -
            *(unsigned __int8*)(*(_QWORD*)result + 2 * v22);
      v26 = (v25 + 1 + (((v25 + 1) & 0x8000) != 0)) >> 1;
      if (v26 >= 0xFF) {
        v26 = 255;
      }
      if (v25 >= -2) {
        v27 = v26;
      }
      else {
        v27 = 0;
      }
      v28 = SdkData_ca7dde[5 * SdkData_ca7e1a[v27] +
                           *(unsigned __int8*)(v20 + v24)];
      v29 = (v27 + v28) & ~((int)(v27 + v28) >> 31);
      if (v29 >= 255) {
        LOWORD(v29) = 255;
      }
      *(_WORD*)(v20 + v24) = v29;
      v17 = result[3];
    } while (v18 < v17);
  }
  if (v17 >= 2) {
    LODWORD(v30) = result[2];
    v31 = 1;
    v32 = 2;
    v33 = 0;
    do {
      if ((unsigned int)v30 >= 2) {
        v34 = 0;
        do {
          v35 = result[4];
          v36 = (unsigned __int8*)(*(_QWORD*)result + v32 * v35 + 2 * v34);
          v37 = (unsigned __int8*)(*(_QWORD*)result + v33 * v35 + 2 * v34);
          v38 = 2 * (v37[2] + *v36) - *v37;
          v39 = (unsigned __int16)(((unsigned int)(21846 * v38 + 21846) >> 16) +
                                   ((unsigned int)(21846 * v38 + 21846) >> 31));
          if (v39 >= 0xFF) {
            v39 = 255;
          }
          if (v38 >= -3) {
            v40 = v39;
          }
          else {
            v40 = 0;
          }
          v41 = v40 + SdkData_ca7dde[5 * SdkData_ca7e1a[v40] +
                                     *((unsigned __int16*)v36 + 1)];
          v42 = v34 + 2;
          ++v34;
          v43 = v41 & ~(v41 >> 31);
          if (v43 >= 255) {
            LOWORD(v43) = 255;
          }
          *((_WORD*)v36 + 1) = v43;
          v30 = result[2];
        } while (v42 < v30);
        v17 = result[3];
      }
      ++v31;
      v33 += 2;
      v32 += 2;
    } while (v31 < v17);
  }
  return result;
}

int** SdkHr_751ac0(int** result, unsigned __int8* a2, unsigned __int8 a3,
                   char a4)
{
  int v4;
  int v5;
  __int16 v6;
  unsigned __int8 v7;
  int* v8;
  __int64* v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (a4 != 0) {
    v4 = SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a3] + 256 + *a2 -
                        (unsigned int)a3];
    v5 =
        SdkData_ca7dde[5 * SdkData_ca7e1a[a3] +
                       SdkData_ca7f1a[512 *
                                          (unsigned __int64)SdkData_ca7e1a[a3] +
                                      256 + *a2 - (unsigned int)a3]] +
        a3;
    if ((unsigned int)v5 >= 0xFF) {
      LOBYTE(v6) = -1;
    }
    else {
      v6 = SdkData_ca7dde
               [5 * SdkData_ca7e1a[a3] +
                SdkData_ca7f1a[512 * (unsigned __int64)SdkData_ca7e1a[a3] +
                               256 + *a2 - (unsigned int)a3]] +
           a3;
    }
    if (v5 >= 0) {
      v7 = v6;
    }
    else {
      v7 = 0;
    }
    *a2 = v7;
    **result += *result[1] * v4;
    *result[1] *= 5;
    v8 = result[1];
    if (*v8 == 125) {
      v9 = (__int64*)result[2];
      v10 = v9[1];
      if (v10 >> 1 <= 0xDAC) {
        v11 = **result;
        *(_BYTE*)(*v9 + (v10 >> 3)) |= ((v11 & 0x40) != 0) << (v10 & 7);
        v12 = *v9;
        v9[1] = v10 + 1;
        *(_BYTE*)(v12 + ((v10 + 1) >> 3)) |= ((v11 & 0x20) != 0)
                                             << ((v10 + 1) & 7);
        v13 = *v9;
        v9[1] = v10 + 2;
        *(_BYTE*)(v13 + ((v10 + 2) >> 3)) |= ((v11 & 0x10) != 0)
                                             << ((v10 + 2) & 7);
        v14 = *v9;
        v9[1] = v10 + 3;
        *(_BYTE*)(v14 + ((v10 + 3) >> 3)) |= ((v11 & 8) != 0)
                                             << ((v10 + 3) & 7);
        v15 = *v9;
        v9[1] = v10 + 4;
        *(_BYTE*)(v15 + ((v10 + 4) >> 3)) |= ((v11 & 4) != 0)
                                             << ((v10 + 4) & 7);
        v16 = *v9;
        v9[1] = v10 + 5;
        *(_BYTE*)(v16 + ((v10 + 5) >> 3)) |= ((v11 & 2) != 0)
                                             << ((v10 + 5) & 7);
        v17 = *v9;
        v9[1] = v10 + 6;
        *(_BYTE*)(v17 + ((v10 + 6) >> 3)) |= (v11 & 1) << ((v10 + 6) & 7);
        v9[1] = v10 + 7;
        v8 = result[1];
      }
      *v8 = 1;
      **result = 0;
    }
  }
  else {
    *a2 = a3;
  }
  return result;
}

__int64 SdkHr_751cc0(__int64* a1, __int16* a2, unsigned __int64 a3,
                     unsigned __int8* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int16 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned int v36;
  unsigned __int8* v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  int v47;
  unsigned __int16* v48;
  int v49;
  int v50;
  int v51;
  unsigned __int16* v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  int v61;
  int v62;
  __int64 v63;
  unsigned __int8* v64;
  int v65;
  int v66;
  unsigned __int8* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int8* v71;
  __int64 v72;
  char* v73;
  int v74;
  int v75;
  int v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  int v83;
  int v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  char v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  char v98;
  unsigned __int64 v99;
  char v100;
  unsigned __int64 v101;
  char v102;
  unsigned __int64 v103;
  char v104;
  unsigned __int64 v105;
  char v106;
  unsigned __int64 v107;
  char v108;
  unsigned __int64 v109;
  char v110;
  unsigned __int64 v111;
  char v112;

  v4 = a1[1];
  if (v4 > 0x956) {
    if (v4 + 9 >= 0x960) {
      return 0;
    }
  }
  else {
    *(_BYTE*)(*a1 + (v4 >> 3)) |= ((a3 & 0x200) != 0) << (v4 & 7);
    v5 = *a1;
    a1[1] = v4 + 1;
    *(_BYTE*)(v5 + ((v4 + 1) >> 3)) |= ((a3 & 0x100) != 0) << ((v4 + 1) & 7);
    v6 = *a1;
    a1[1] = v4 + 2;
    *(_BYTE*)(v6 + ((v4 + 2) >> 3)) |= ((a3 & 0x80) != 0) << ((v4 + 2) & 7);
    v7 = *a1;
    a1[1] = v4 + 3;
    *(_BYTE*)(v7 + ((v4 + 3) >> 3)) |= ((a3 & 0x40) != 0) << ((v4 + 3) & 7);
    v8 = *a1;
    a1[1] = v4 + 4;
    *(_BYTE*)(v8 + ((v4 + 4) >> 3)) |= ((a3 & 0x20) != 0) << ((v4 + 4) & 7);
    v9 = *a1;
    a1[1] = v4 + 5;
    *(_BYTE*)(v9 + ((v4 + 5) >> 3)) |= ((a3 & 0x10) != 0) << ((v4 + 5) & 7);
    v10 = *a1;
    a1[1] = v4 + 6;
    *(_BYTE*)(v10 + ((v4 + 6) >> 3)) |= ((a3 & 8) != 0) << ((v4 + 6) & 7);
    v11 = *a1;
    a1[1] = v4 + 7;
    *(_BYTE*)(v11 + ((v4 + 7) >> 3)) |= ((a3 & 4) != 0) << ((v4 + 7) & 7);
    v12 = *a1;
    a1[1] = v4 + 8;
    *(_BYTE*)(v12 + ((v4 + 8) >> 3)) |= ((a3 & 2) != 0) << (v4 & 7);
    v13 = *a1;
    a1[1] = v4 + 9;
    *(_BYTE*)(v13 + ((v4 + 9) >> 3)) |= (a3 & 1) << ((v4 + 9) & 7);
    a1[1] = v4 + 10;
    if (v4 >= 0x94D) {
      return 0;
    }
    v14 = *a2;
    *(_BYTE*)(*a1 + ((v4 + 10) >> 3)) |= ((*a2 & 0x200) != 0)
                                         << ((v4 + 10) & 7);
    v15 = *a1;
    a1[1] = v4 + 11;
    *(_BYTE*)(v15 + ((v4 + 11) >> 3)) |= ((v14 & 0x100) != 0)
                                         << ((v4 + 11) & 7);
    v16 = *a1;
    a1[1] = v4 + 12;
    *(_BYTE*)(v16 + ((v4 + 12) >> 3)) |= ((v14 & 0x80) != 0) << ((v4 + 12) & 7);
    v17 = *a1;
    a1[1] = v4 + 13;
    *(_BYTE*)(v17 + ((v4 + 13) >> 3)) |= ((v14 & 0x40) != 0) << ((v4 + 13) & 7);
    v18 = *a1;
    a1[1] = v4 + 14;
    *(_BYTE*)(v18 + ((v4 + 14) >> 3)) |= ((v14 & 0x20) != 0) << ((v4 + 14) & 7);
    v19 = *a1;
    a1[1] = v4 + 15;
    *(_BYTE*)(v19 + ((v4 + 15) >> 3)) |= ((v14 & 0x10) != 0) << ((v4 + 15) & 7);
    v20 = *a1;
    a1[1] = v4 + 16;
    *(_BYTE*)(v20 + ((v4 + 16) >> 3)) |= ((v14 & 8) != 0) << (v4 & 7);
    v21 = *a1;
    a1[1] = v4 + 17;
    *(_BYTE*)(v21 + ((v4 + 17) >> 3)) |= ((v14 & 4) != 0) << ((v4 + 17) & 7);
    v22 = *a1;
    a1[1] = v4 + 18;
    *(_BYTE*)(v22 + ((v4 + 18) >> 3)) |= ((v14 & 2) != 0) << ((v4 + 18) & 7);
    v23 = *a1;
    a1[1] = v4 + 19;
    v24 = v4 + 20;
    *(_BYTE*)(v23 + ((v4 + 19) >> 3)) |= (v14 & 1) << ((v4 + 19) & 7);
    a1[1] = v4 + 20;
    if (v4 > 0x943) {
      return 0;
    }
    v25 = a2[1];
    v26 = v24 & 7;
    *(_BYTE*)(*a1 + (v24 >> 3)) |= ((v25 & 0x100) != 0) << (v24 & 7);
    v27 = *a1;
    a1[1] = v4 + 21;
    *(_BYTE*)(v27 + ((v4 + 21) >> 3)) |= ((v25 & 0x80) != 0) << ((v4 + 21) & 7);
    v28 = *a1;
    a1[1] = v4 + 22;
    *(_BYTE*)(v28 + ((v4 + 22) >> 3)) |= ((v25 & 0x40) != 0) << ((v4 + 22) & 7);
    v29 = *a1;
    a1[1] = v4 + 23;
    *(_BYTE*)(v29 + ((v4 + 23) >> 3)) |= ((v25 & 0x20) != 0) << ((v4 + 23) & 7);
    v30 = *a1;
    a1[1] = v4 + 24;
    *(_BYTE*)(v30 + ((v4 + 24) >> 3)) |= ((v25 & 0x10) != 0) << (v4 & 7);
    v31 = *a1;
    a1[1] = v4 + 25;
    *(_BYTE*)(v31 + ((v4 + 25) >> 3)) |= ((v25 & 8) != 0) << ((v4 + 25) & 7);
    v32 = *a1;
    a1[1] = v4 + 26;
    *(_BYTE*)(v32 + ((v4 + 26) >> 3)) |= ((v25 & 4) != 0) << ((v4 + 26) & 7);
    v33 = *a1;
    a1[1] = v4 + 27;
    *(_BYTE*)(v33 + ((v4 + 27) >> 3)) |= ((v25 & 2) != 0) << ((v4 + 27) & 7);
    v34 = v4 + 28;
    v4 += 29LL;
    v35 = *a1;
    a1[1] = v34;
    *(_BYTE*)(v35 + (v34 >> 3)) |= (v25 & 1) << v26;
    a1[1] = v4;
  }
  v36 = 1;
  if (a3 == 0) {
    return v36;
  }
  v37 = a4 + 2;
  v38 = 65529;
  v39 = 0;
  v40 = 0;
  do {
    v47 = v38;
    v48 = (unsigned __int16*)&a2[2 * v39];
    v49 = v40;
    ++v39;
    v50 = *v48;
    v51 = v48[1];
    if (v39 >= a3) {
      v40 = 0;
      v38 = 0;
      if ((__int16)v47 >= 1) {
      LABEL_15:
        if ((v49 & 0x8000) != 0) {
          goto LABEL_20;
        }
        LOWORD(v54) = v47;
        LOWORD(v47) = v49;
        LOWORD(v55) = v38;
        LOWORD(v53) = v40;
        goto LABEL_21;
      }
    }
    else {
      v52 = (unsigned __int16*)&a2[2 * v39];
      v40 = *v52 - v50;
      v38 = v52[1] - v51;
      if ((__int16)v47 >= 1) {
        goto LABEL_15;
      }
    }
    if ((__int16)v49 < 1) {
      if ((v47 & 0x8000) != 0) {
        v53 = -v40;
        v55 = -v38;
        v54 = -v47;
        v47 = -v49;
        goto LABEL_21;
      }
      if ((v49 & 0x8000) != 0) {
      LABEL_20:
        v55 = -v40;
        v54 = -v49;
        LOWORD(v53) = v38;
        goto LABEL_21;
      }
      LOWORD(v54) = 0;
      LOWORD(v47) = 0;
      LOWORD(v55) = 0;
      LOWORD(v53) = 0;
    }
    else {
      v53 = -v38;
      v47 = -v47;
      LOWORD(v54) = v49;
      LOWORD(v55) = v40;
    }
  LABEL_21:
    v56 = *a4;
    v57 = 0;
    v58 = 0;
    v59 = v56;
    while (1) {
      v60 = &v37[204 * v58];
      v61 = (char)*v60;
      if ((__int16)v47 >= v61) {
        if ((__int16)v47 > v61) {
          v57 = v58;
          goto LABEL_23;
        }
        v62 = (char)v60[1];
        if ((__int16)v54 >= v62) {
          break;
        }
      }
      v59 = v58;
    LABEL_23:
      v58 = (unsigned __int64)(v59 + v57) >> 1;
      if (v57 == v58) {
        v63 = 0;
        v58 = 0;
        while (1) {
          v64 = &v37[204 * v58];
          v65 = (char)*v64;
          if (v65 <= 0) {
            if (v65 < 0) {
              v63 = v58;
              goto LABEL_32;
            }
            v66 = (char)v64[1];
            if (v66 <= 1) {
              v63 = v58;
              if (v66 == 1) {
                goto LABEL_40;
              }
              goto LABEL_32;
            }
          }
          v56 = v58;
        LABEL_32:
          v58 = (unsigned __int64)(v56 + v63) >> 1;
          if (v63 == v58) {
            v58 = -1;
            goto LABEL_40;
          }
        }
      }
    }
    v57 = v58;
    if ((__int16)v54 > v62) {
      goto LABEL_23;
    }
  LABEL_40:
    v67 = &v37[204 * v58];
    v68 = 0;
    v69 = 0;
    v70 = v67[2];
    v71 = v67 + 4;
    v72 = v70;
    while (2) {
      v73 = (char*)&v71[4 * v69];
      v74 = *v73;
      if ((__int16)v53 >= v74) {
        if ((__int16)v53 > v74) {
          goto LABEL_41;
        }
        v75 = v73[1];
        if ((__int16)v55 >= v75) {
          if ((__int16)v55 <= v75) {
            v76 = 0;
            v77 = *(unsigned __int16*)&v67[4 * v69 + 6];
            v78 = v77 >> 12;
            v79 = v4 + (v77 >> 12);
            if ((unsigned int)v77 >= 0x1000) {
              goto LABEL_59;
            }
            goto LABEL_68;
          }
        LABEL_41:
          v68 = v69;
          v69 = v72;
        }
      }
      v72 = v69;
      v69 = (unsigned __int64)(v69 + v68) >> 1;
      if (v68 != v69) {
        continue;
      }
      break;
    }
    v80 = 0;
    v81 = 0;
    while (2) {
      v82 = (char*)&v71[4 * v81];
      v83 = *v82;
      if (v83 <= 0) {
        if (v83 < 0) {
          goto LABEL_50;
        }
        v84 = v82[1];
        if (v84 <= 1) {
          if (v84 == 1) {
            goto LABEL_58;
          }
        LABEL_50:
          v80 = v81;
          v81 = v70;
        }
      }
      v70 = v81;
      v81 = (unsigned __int64)(v81 + v80) >> 1;
      if (v80 != v81) {
        continue;
      }
      break;
    }
    v81 = -1;
  LABEL_58:
    v76 = 1;
    v77 = *(unsigned __int16*)&v67[4 * v81 + 6];
    v78 = v77 >> 12;
    v79 = v4 + (v77 >> 12);
    if ((unsigned int)v77 >= 0x1000) {
    LABEL_59:
      if (v4 <= 0x95F && v79 <= 0x960) {
        v85 = v77 & 0xFFF;
        v86 = (v77 >> 12) & 7;
        if (v86 != 0) {
          v87 = v78;
          do {
            --v87;
            if (v4 <= 0x95F) {
              v88 = v4 >> 3;
              v89 = v4++ & 7;
              *(_BYTE*)(*a1 + v88) |= ((v85 >> v87) & 1) << v89;
              a1[1] = v4;
            }
            --v86;
          } while (v86 != 0);
        }
        else {
          v87 = v78;
        }
        if ((unsigned int)(v78 - 1) >= 7) {
          v96 = v87 - 8;
          do {
            if (v4 <= 0x95F) {
              v97 = v4 >> 3;
              v98 = v4++ & 7;
              *(_BYTE*)(*a1 + v97) |= ((v85 >> ((unsigned __int8)v96 + 7)) & 1)
                                      << v98;
              a1[1] = v4;
              if (v4 <= 0x95F) {
                v99 = v4 >> 3;
                v100 = v4++ & 7;
                *(_BYTE*)(*a1 + v99) |=
                    ((v85 >> ((unsigned __int8)v96 + 6)) & 1) << v100;
                a1[1] = v4;
                if (v4 <= 0x95F) {
                  v101 = v4 >> 3;
                  v102 = v4++ & 7;
                  *(_BYTE*)(*a1 + v101) |=
                      ((v85 >> ((unsigned __int8)v96 + 5)) & 1) << v102;
                  a1[1] = v4;
                  if (v4 <= 0x95F) {
                    v103 = v4 >> 3;
                    v104 = v4++ & 7;
                    *(_BYTE*)(*a1 + v103) |=
                        ((v85 >> ((unsigned __int8)v96 + 4)) & 1) << v104;
                    a1[1] = v4;
                    if (v4 <= 0x95F) {
                      v105 = v4 >> 3;
                      v106 = v4++ & 7;
                      *(_BYTE*)(*a1 + v105) |=
                          ((v85 >> ((unsigned __int8)v96 + 3)) & 1) << v106;
                      a1[1] = v4;
                      if (v4 <= 0x95F) {
                        v107 = v4 >> 3;
                        v108 = v4++ & 7;
                        *(_BYTE*)(*a1 + v107) |=
                            ((v85 >> ((unsigned __int8)v96 + 2)) & 1) << v108;
                        a1[1] = v4;
                        if (v4 <= 0x95F) {
                          v109 = v4 >> 3;
                          v110 = v4++ & 7;
                          *(_BYTE*)(*a1 + v109) |=
                              ((v85 >> ((unsigned __int8)v96 + 1)) & 1) << v110;
                          a1[1] = v4;
                          if (v4 <= 0x95F) {
                            v111 = v4 >> 3;
                            v112 = v4++ & 7;
                            *(_BYTE*)(*a1 + v111) |= ((v85 >> v96) & 1) << v112;
                            a1[1] = v4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v96 -= 8LL;
          } while (v96 != -8);
        }
      }
    }
  LABEL_68:
    if (v79 > 0x960) {
      return 0;
    }
    if (v76 == 0) {
      continue;
    }
    if (v4 <= 0x95A) {
      *(_BYTE*)(*a1 + (v4 >> 3)) |= ((v53 & 0x20) == 0) << (v4 & 7);
      v90 = *a1;
      a1[1] = v4 + 1;
      *(_BYTE*)(v90 + ((v4 + 1) >> 3)) |= ((v53 & 0x10) != 0) << ((v4 + 1) & 7);
      v91 = *a1;
      a1[1] = v4 + 2;
      *(_BYTE*)(v91 + ((v4 + 2) >> 3)) |= ((v53 & 8) != 0) << ((v4 + 2) & 7);
      v92 = *a1;
      a1[1] = v4 + 3;
      *(_BYTE*)(v92 + ((v4 + 3) >> 3)) |= ((v53 & 4) != 0) << ((v4 + 3) & 7);
      v93 = *a1;
      a1[1] = v4 + 4;
      *(_BYTE*)(v93 + ((v4 + 4) >> 3)) |= ((v53 & 2) != 0) << ((v4 + 4) & 7);
      v94 = v4 + 5;
      v4 += 6LL;
      v95 = *a1;
      a1[1] = v94;
      *(_BYTE*)(v95 + (v94 >> 3)) |= (v53 & 1) << (v94 & 7);
      a1[1] = v4;
      goto LABEL_85;
    }
    if (v4 + 6 > 0x960) {
      return 0;
    }
  LABEL_85:
    if (v4 <= 0x95A) {
      *(_BYTE*)(*a1 + (v4 >> 3)) |= ((v55 & 0x20) == 0) << (v4 & 7);
      v41 = *a1;
      a1[1] = v4 + 1;
      *(_BYTE*)(v41 + ((v4 + 1) >> 3)) |= ((v55 & 0x10) != 0) << ((v4 + 1) & 7);
      v42 = *a1;
      a1[1] = v4 + 2;
      *(_BYTE*)(v42 + ((v4 + 2) >> 3)) |= ((v55 & 8) != 0) << ((v4 + 2) & 7);
      v43 = *a1;
      a1[1] = v4 + 3;
      *(_BYTE*)(v43 + ((v4 + 3) >> 3)) |= ((v55 & 4) != 0) << ((v4 + 3) & 7);
      v44 = *a1;
      a1[1] = v4 + 4;
      *(_BYTE*)(v44 + ((v4 + 4) >> 3)) |= ((v55 & 2) != 0) << ((v4 + 4) & 7);
      v45 = v4 + 5;
      v4 += 6LL;
      v46 = *a1;
      a1[1] = v45;
      *(_BYTE*)(v46 + (v45 >> 3)) |= (v55 & 1) << (v45 & 7);
      a1[1] = v4;
    }
    else if (v4 + 6 > 0x960) {
      return 0;
    }
  } while (v39 != a3);
  return 1;
}

bool SdkHr_752960(_QWORD* a1, __int64* a2, unsigned __int8* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
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
  unsigned __int64 v25;
  unsigned __int64 v26;
  char v27;
  unsigned __int64 v28;
  char v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  unsigned __int64 v36;
  char v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  char v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v45;
  char v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  int v65;
  unsigned int v66;
  int v67;
  int v68;
  unsigned int v69;
  int v70;
  int v71;
  unsigned int v72;
  int v73;
  int v74;
  int v75;
  unsigned int v76;
  unsigned __int64 v77;
  int v78;
  int v79;
  unsigned __int64 v80;
  char v81;
  unsigned __int64 v82;
  char v83;
  unsigned __int64 v84;
  char v85;
  unsigned __int64 v86;
  char v87;
  unsigned __int64 v88;
  char v89;
  unsigned __int64 v90;
  char v91;
  unsigned __int64 v92;
  char v93;
  unsigned __int64 v94;
  char v95;
  unsigned __int64 v96;
  char v97;
  unsigned __int64 v98;
  char v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned int v114;
  _WORD* v115;
  unsigned __int8* v116;
  int v117;
  int v118;
  int v119;
  int v120;
  __int64 v121;
  int v122;
  int v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  unsigned __int8* v127;
  int v128;
  int v129;
  char v130;
  __int64 v131;
  unsigned __int8* v132;
  int v133;
  int v134;
  unsigned __int8* v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  int v139;
  unsigned __int64 v140;
  char v141;
  unsigned int v142;
  unsigned __int64 v143;
  unsigned int v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned __int8* v151;
  int v152;
  int v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  char v156;
  unsigned int v157;
  unsigned int v158;
  unsigned int v159;
  unsigned int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  int v168;
  unsigned __int64 v169;
  char v170;
  unsigned __int64 v171;
  char v172;
  unsigned __int64 v173;
  char v174;
  unsigned __int64 v175;
  char v176;
  unsigned __int64 v177;
  char v178;
  unsigned __int64 v179;
  char v180;
  unsigned __int64 v181;
  char v182;
  unsigned __int64 v183;
  char v184;
  unsigned __int64 v185;
  char v186;
  unsigned __int64 v187;
  char v188;
  unsigned int v189;
  _WORD* v190;
  unsigned __int64 v191;

  a1[1] = 0;
  v3 = a1[2];
  v4 = a2[1];
  v5 = a2[2];
  v6 = *a2;
  if (v4 >= v5) {
    v9 = 0;
  LABEL_3:
    v10 = 0;
    if (v4 >= v5) {
      goto LABEL_4;
    }
    goto LABEL_15;
  }
  v7 = v4 >> 3;
  v8 = a2[1] & 7;
  ++v4;
  LODWORD(v7) = *(unsigned __int8*)(v6 + v7);
  a2[1] = v4;
  v9 = 2 * (((unsigned int)v7 >> v8) & 1);
  if (v4 >= v5) {
    goto LABEL_3;
  }
  v26 = v4 >> 3;
  v27 = v4++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v6 + v26);
  a2[1] = v4;
  v10 = ((unsigned int)v26 >> v27) & 1;
  if (v4 >= v5) {
  LABEL_4:
    v11 = 0;
    v12 = v10 | v9;
    if (v4 >= v5) {
      goto LABEL_5;
    }
    goto LABEL_16;
  }
LABEL_15:
  v28 = v4 >> 3;
  v29 = v4++ & 7;
  LODWORD(v28) = *(unsigned __int8*)(v6 + v28);
  a2[1] = v4;
  v11 = 2 * (((unsigned int)v28 >> v29) & 1);
  v12 = v10 | v9;
  if (v4 >= v5) {
  LABEL_5:
    v13 = 0;
    v14 = v11 | (4 * v12);
    if (v4 >= v5) {
      goto LABEL_6;
    }
    goto LABEL_17;
  }
LABEL_16:
  v30 = v4 >> 3;
  v31 = v4++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v6 + v30);
  a2[1] = v4;
  v13 = ((unsigned int)v30 >> v31) & 1;
  v14 = v11 | (4 * v12);
  if (v4 >= v5) {
  LABEL_6:
    v15 = 0;
    v16 = v14 | v13;
    if (v4 >= v5) {
      goto LABEL_7;
    }
    goto LABEL_18;
  }
LABEL_17:
  v32 = v4 >> 3;
  v33 = v4++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v6 + v32);
  a2[1] = v4;
  v15 = 2 * (((unsigned int)v32 >> v33) & 1);
  v16 = v14 | v13;
  if (v4 >= v5) {
  LABEL_7:
    v17 = 0;
    v18 = v15 | (4 * v16);
    if (v4 >= v5) {
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_18:
  v34 = v4 >> 3;
  v35 = v4++ & 7;
  LODWORD(v34) = *(unsigned __int8*)(v6 + v34);
  a2[1] = v4;
  v17 = ((unsigned int)v34 >> v35) & 1;
  v18 = v15 | (4 * v16);
  if (v4 >= v5) {
  LABEL_8:
    v19 = 0;
    v20 = v18 | v17;
    if (v4 >= v5) {
      goto LABEL_9;
    }
    goto LABEL_20;
  }
LABEL_19:
  v36 = v4 >> 3;
  v37 = v4++ & 7;
  LODWORD(v36) = *(unsigned __int8*)(v6 + v36);
  a2[1] = v4;
  v19 = 2 * (((unsigned int)v36 >> v37) & 1);
  v20 = v18 | v17;
  if (v4 >= v5) {
  LABEL_9:
    v21 = 0;
    v22 = v19 | (4 * v20);
    if (v4 >= v5) {
      goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_20:
  v38 = v4 >> 3;
  v39 = v4++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v6 + v38);
  a2[1] = v4;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v4 >= v5) {
  LABEL_10:
    v23 = 0;
    v24 = v22 | v21;
    if (v4 >= v5) {
      goto LABEL_11;
    }
  LABEL_22:
    v42 = v4 >> 3;
    v43 = v4++ & 7;
    LODWORD(v42) = *(unsigned __int8*)(v6 + v42);
    a2[1] = v4;
    v25 = v23 | (4 * v24) | ((unsigned int)v42 >> v43) & 1;
    if (v3 >= v25) {
      goto LABEL_24;
    }
    return false;
  }
LABEL_21:
  v40 = v4 >> 3;
  v41 = v4++ & 7;
  LODWORD(v40) = *(unsigned __int8*)(v6 + v40);
  a2[1] = v4;
  v23 = 2 * (((unsigned int)v40 >> v41) & 1);
  v24 = v22 | v21;
  if (v4 < v5) {
    goto LABEL_22;
  }
LABEL_11:
  v25 = v23 | (4 * v24);
  if (v3 < v25) {
    return false;
  }
LABEL_24:
  if (v4 >= v5) {
    v47 = 0;
  LABEL_26:
    v48 = 0;
    if (v4 >= v5) {
      goto LABEL_27;
    }
    goto LABEL_47;
  }
  v45 = v4 >> 3;
  v46 = v4++ & 7;
  LODWORD(v45) = *(unsigned __int8*)(v6 + v45);
  a2[1] = v4;
  v47 = 2 * (((unsigned int)v45 >> v46) & 1);
  if (v4 >= v5) {
    goto LABEL_26;
  }
  v80 = v4 >> 3;
  v81 = v4++ & 7;
  LODWORD(v80) = *(unsigned __int8*)(v6 + v80);
  a2[1] = v4;
  v48 = ((unsigned int)v80 >> v81) & 1;
  if (v4 >= v5) {
  LABEL_27:
    v49 = 0;
    if (v4 >= v5) {
      goto LABEL_28;
    }
    goto LABEL_48;
  }
LABEL_47:
  v82 = v4 >> 3;
  v83 = v4++ & 7;
  LODWORD(v82) = *(unsigned __int8*)(v6 + v82);
  a2[1] = v4;
  v49 = 2 * (((unsigned int)v82 >> v83) & 1);
  if (v4 >= v5) {
  LABEL_28:
    v50 = 0;
    if (v4 >= v5) {
      goto LABEL_29;
    }
    goto LABEL_49;
  }
LABEL_48:
  v84 = v4 >> 3;
  v85 = v4++ & 7;
  LODWORD(v84) = *(unsigned __int8*)(v6 + v84);
  a2[1] = v4;
  v50 = ((unsigned int)v84 >> v85) & 1;
  if (v4 >= v5) {
  LABEL_29:
    v51 = 0;
    if (v4 >= v5) {
      goto LABEL_30;
    }
    goto LABEL_50;
  }
LABEL_49:
  v86 = v4 >> 3;
  v87 = v4++ & 7;
  LODWORD(v86) = *(unsigned __int8*)(v6 + v86);
  a2[1] = v4;
  v51 = 2 * (((unsigned int)v86 >> v87) & 1);
  if (v4 >= v5) {
  LABEL_30:
    v52 = 0;
    if (v4 >= v5) {
      goto LABEL_31;
    }
    goto LABEL_51;
  }
LABEL_50:
  v88 = v4 >> 3;
  v89 = v4++ & 7;
  LODWORD(v88) = *(unsigned __int8*)(v6 + v88);
  a2[1] = v4;
  v52 = ((unsigned int)v88 >> v89) & 1;
  if (v4 >= v5) {
  LABEL_31:
    v53 = 0;
    if (v4 >= v5) {
      goto LABEL_32;
    }
    goto LABEL_52;
  }
LABEL_51:
  v90 = v4 >> 3;
  v91 = v4++ & 7;
  LODWORD(v90) = *(unsigned __int8*)(v6 + v90);
  a2[1] = v4;
  v53 = 2 * (((unsigned int)v90 >> v91) & 1);
  if (v4 >= v5) {
  LABEL_32:
    v54 = 0;
    if (v4 >= v5) {
      goto LABEL_33;
    }
    goto LABEL_53;
  }
LABEL_52:
  v92 = v4 >> 3;
  v93 = v4++ & 7;
  LODWORD(v92) = *(unsigned __int8*)(v6 + v92);
  a2[1] = v4;
  v54 = ((unsigned int)v92 >> v93) & 1;
  if (v4 >= v5) {
  LABEL_33:
    v55 = 0;
    if (v4 >= v5) {
      goto LABEL_34;
    }
    goto LABEL_54;
  }
LABEL_53:
  v94 = v4 >> 3;
  v95 = v4++ & 7;
  LODWORD(v94) = *(unsigned __int8*)(v6 + v94);
  a2[1] = v4;
  v55 = 2 * (((unsigned int)v94 >> v95) & 1);
  if (v4 >= v5) {
  LABEL_34:
    v56 = 0;
    if (v4 >= v5) {
      goto LABEL_35;
    }
    goto LABEL_55;
  }
LABEL_54:
  v96 = v4 >> 3;
  v97 = v4++ & 7;
  LODWORD(v96) = *(unsigned __int8*)(v6 + v96);
  a2[1] = v4;
  v56 = ((unsigned int)v96 >> v97) & 1;
  if (v4 >= v5) {
  LABEL_35:
    v57 = 0;
    if (v4 >= v5) {
      goto LABEL_36;
    }
    goto LABEL_56;
  }
LABEL_55:
  v98 = v4 >> 3;
  v99 = v4++ & 7;
  LODWORD(v98) = *(unsigned __int8*)(v6 + v98);
  a2[1] = v4;
  v57 = 2 * (((unsigned int)v98 >> v99) & 1);
  if (v4 >= v5) {
  LABEL_36:
    v58 = 0;
    v59 = v48 | v47;
    if (v4 >= v5) {
      goto LABEL_37;
    }
    goto LABEL_57;
  }
LABEL_56:
  v100 = v4 >> 3;
  v101 = v4++ & 7;
  LODWORD(v100) = *(unsigned __int8*)(v6 + v100);
  a2[1] = v4;
  v58 = ((unsigned int)v100 >> v101) & 1;
  v59 = v48 | v47;
  if (v4 >= v5) {
  LABEL_37:
    v60 = 0;
    v61 = v49 | (4 * v59);
    v62 = v58 | v57;
    if (v4 >= v5) {
      goto LABEL_38;
    }
    goto LABEL_58;
  }
LABEL_57:
  v102 = v4 >> 3;
  v103 = v4++ & 7;
  LODWORD(v102) = *(unsigned __int8*)(v6 + v102);
  a2[1] = v4;
  v60 = 2 * (((unsigned int)v102 >> v103) & 1);
  v61 = v49 | (4 * v59);
  v62 = v58 | v57;
  if (v4 >= v5) {
  LABEL_38:
    v63 = 0;
    v64 = v60 | (4 * v62);
    v65 = v50 | v61;
    if (v4 >= v5) {
      goto LABEL_39;
    }
    goto LABEL_59;
  }
LABEL_58:
  v104 = v4 >> 3;
  v105 = v4++ & 7;
  LODWORD(v104) = *(unsigned __int8*)(v6 + v104);
  a2[1] = v4;
  v63 = ((unsigned int)v104 >> v105) & 1;
  v64 = v60 | (4 * v62);
  v65 = v50 | v61;
  if (v4 >= v5) {
  LABEL_39:
    v66 = 0;
    v67 = v51 | (4 * v65);
    v68 = v63 | v64;
    if (v4 >= v5) {
      goto LABEL_40;
    }
    goto LABEL_60;
  }
LABEL_59:
  v106 = v4 >> 3;
  v107 = v4++ & 7;
  LODWORD(v106) = *(unsigned __int8*)(v6 + v106);
  a2[1] = v4;
  v66 = 2 * (((unsigned int)v106 >> v107) & 1);
  v67 = v51 | (4 * v65);
  v68 = v63 | v64;
  if (v4 >= v5) {
  LABEL_40:
    v69 = 0;
    v70 = v66 | (4 * v68);
    v71 = v52 | v67;
    if (v4 >= v5) {
      goto LABEL_41;
    }
    goto LABEL_61;
  }
LABEL_60:
  v108 = v4 >> 3;
  v109 = v4++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v6 + v108);
  a2[1] = v4;
  v69 = ((unsigned int)v108 >> v109) & 1;
  v70 = v66 | (4 * v68);
  v71 = v52 | v67;
  if (v4 >= v5) {
  LABEL_41:
    v72 = 0;
    v73 = v53 | (4 * v71);
    v74 = v69 | v70;
    if (v4 >= v5) {
      goto LABEL_42;
    }
    goto LABEL_62;
  }
LABEL_61:
  v110 = v4 >> 3;
  v111 = v4++ & 7;
  LODWORD(v110) = *(unsigned __int8*)(v6 + v110);
  a2[1] = v4;
  v72 = 2 * (((unsigned int)v110 >> v111) & 1);
  v73 = v53 | (4 * v71);
  v74 = v69 | v70;
  if (v4 >= v5) {
  LABEL_42:
    v75 = v54 | v73;
    v76 = v72 | (4 * v74);
    if (v4 >= v5) {
      goto LABEL_43;
    }
    goto LABEL_63;
  }
LABEL_62:
  v112 = v4 >> 3;
  v113 = v4++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v6 + v112);
  a2[1] = v4;
  v75 = v54 | v73;
  v76 = ((unsigned int)v112 >> v113) & 1 | v72 | (4 * v74);
  if (v4 >= v5) {
  LABEL_43:
    v77 = a1[1];
    v78 = 2 * v76;
    v79 = v56 | v55 | (4 * v75);
    if (v77 >= v3) {
      goto LABEL_65;
    }
    goto LABEL_64;
  }
LABEL_63:
  v114 = *(unsigned __int8*)(v6 + (v4 >> 3));
  a2[1] = v4 + 1;
  v77 = a1[1];
  v78 = (v114 >> (v4 & 7)) & 1 | (2 * v76);
  v79 = v56 | v55 | (4 * v75);
  if (v77 < v3) {
  LABEL_64:
    v115 = (_WORD*)(*a1 + 4 * v77);
    *v115 = v79;
    v115[1] = v78;
    a1[1] = v77 + 1;
  }
LABEL_65:
  v116 = a3 + 2;
  v117 = 65529;
  v118 = 0;
  while (2) {
    if ((__int16)v117 < 1) {
      if ((__int16)v118 >= 1) {
        v119 = -v117;
        LOWORD(v120) = v118;
        goto LABEL_71;
      }
      if ((v117 & 0x8000) != 0) {
        v119 = -v118;
        v120 = -v117;
        goto LABEL_71;
      }
      if ((v118 & 0x8000) == 0) {
        LOWORD(v119) = 0;
        LOWORD(v120) = 0;
        goto LABEL_71;
      }
      goto LABEL_68;
    }
    LOWORD(v119) = v118;
    LOWORD(v120) = v117;
    if ((v118 & 0x8000) != 0) {
    LABEL_68:
      v120 = -v118;
      LOWORD(v119) = v117;
    }
  LABEL_71:
    v121 = *a3;
    v122 = (unsigned __int16)v119;
    v123 = (unsigned __int16)v120;
    v124 = 0;
    v125 = 0;
    v126 = v121;
    while (1) {
      v127 = &v116[204 * v125];
      v128 = (char)*v127;
      if (v122 >= v128) {
        if (v122 <= v128) {
          v129 = (char)v127[1];
          if (v123 < v129) {
            goto LABEL_73;
          }
          if (v123 <= v129) {
            break;
          }
        }
        v124 = v125;
        v125 = v126;
      }
    LABEL_73:
      v126 = v125;
      v125 = (unsigned __int64)(v125 + v124) >> 1;
      if (v124 == v125) {
        v131 = 0;
        v125 = 0;
        while (1) {
          v132 = &v116[204 * v125];
          v133 = (char)*v132;
          if (v133 <= 0) {
            if ((v133 & 0x80000000) == 0) {
              v134 = (char)v132[1];
              if (v134 > 1) {
                goto LABEL_81;
              }
              if (v134 == 1) {
                v130 = 0;
                goto LABEL_88;
              }
            }
            v131 = v125;
            v125 = v121;
          }
        LABEL_81:
          v121 = v125;
          v125 = (unsigned __int64)(v125 + v131) >> 1;
          if (v131 == v125) {
            v130 = *(a3 - 202);
            v125 = -1;
            goto LABEL_88;
          }
        }
      }
    }
    v130 = v128;
  LABEL_88:
    if (v122 != (unsigned __int16)v130) {
      return false;
    }
    v135 = &v116[204 * v125];
    if (v123 != (unsigned __int16)(char)v135[1]) {
      return false;
    }
    v137 = a2[1];
    v136 = a2[2];
    v138 = *a2;
    v139 = 0;
    while (2) {
      if (v137 >= v136) {
        v142 = 0;
      }
      else {
        v140 = v137 >> 3;
        v141 = v137++ & 7;
        LODWORD(v140) = *(unsigned __int8*)(v138 + v140);
        a2[1] = v137;
        v142 = ((unsigned int)v140 >> v141) & 1;
      }
      v143 = v135[2];
      v144 = v142 & 0xFFFFF001 | (2 * (v139 & 0x7FF));
      v145 = 0;
      v146 = 0;
      v147 = (v139 & 0xFFFFF000) + 4096;
      v139 = v144 | v147;
      v148 = (unsigned __int16)v147 >> 12;
    LABEL_97:
      v149 = *(unsigned __int16*)&v135[4 * v146 + 6];
      if (v148 < v149 >> 12) {
        goto LABEL_96;
      }
      if (v148 > v149 >> 12) {
        goto LABEL_95;
      }
      v150 = v149 & 0xFFF;
      if (v144 < v150) {
        goto LABEL_96;
      }
      if (v144 > v150) {
      LABEL_95:
        v145 = v146;
        v146 = v143;
      LABEL_96:
        v143 = v146;
        v146 = (v146 + v145) >> 1;
        if (v145 == v146) {
          continue;
        }
        goto LABEL_97;
      }
      break;
    }
    v151 = &v135[4 * v146];
    v152 = (char)v151[4];
    v153 = (char)v151[5];
    if (v152 == 0) {
      if (v153 == 1) {
        if (v137 >= v136) {
          v157 = 0;
        LABEL_109:
          v158 = 0;
          if (v137 >= v136) {
            goto LABEL_110;
          }
        LABEL_127:
          v171 = v137 >> 3;
          v172 = v137++ & 7;
          LODWORD(v171) = *(unsigned __int8*)(v138 + v171);
          a2[1] = v137;
          v159 = 2 * (((unsigned int)v171 >> v172) & 1);
          if (v137 < v136) {
            goto LABEL_128;
          }
        LABEL_111:
          v160 = 0;
          if (v137 >= v136) {
            goto LABEL_112;
          }
        LABEL_129:
          v175 = v137 >> 3;
          v176 = v137++ & 7;
          LODWORD(v175) = *(unsigned __int8*)(v138 + v175);
          a2[1] = v137;
          v161 = 2 * (((unsigned int)v175 >> v176) & 1);
          if (v137 < v136) {
            goto LABEL_130;
          }
        LABEL_113:
          v162 = 0;
          if (v137 >= v136) {
            goto LABEL_114;
          }
        LABEL_131:
          v179 = v137 >> 3;
          v180 = v137++ & 7;
          LODWORD(v179) = *(unsigned __int8*)(v138 + v179);
          a2[1] = v137;
          v163 = 2 * (((unsigned int)v179 >> v180) & 1);
          if (v137 < v136) {
            goto LABEL_132;
          }
        LABEL_115:
          v164 = 0;
          if (v137 >= v136) {
            goto LABEL_116;
          }
        LABEL_133:
          v183 = v137 >> 3;
          v184 = v137++ & 7;
          LODWORD(v183) = *(unsigned __int8*)(v138 + v183);
          a2[1] = v137;
          v165 = 2 * (((unsigned int)v183 >> v184) & 1);
          if (v137 < v136) {
            goto LABEL_134;
          }
        LABEL_117:
          v166 = 0;
          if (v137 >= v136) {
            goto LABEL_118;
          }
        LABEL_135:
          v187 = v137 >> 3;
          v188 = v137++ & 7;
          LODWORD(v187) = *(unsigned __int8*)(v138 + v187);
          a2[1] = v137;
          v167 = 2 * (((unsigned int)v187 >> v188) & 1);
          if (v137 < v136) {
            goto LABEL_136;
          }
        LABEL_119:
          v168 = 0;
        }
        else {
          v155 = v137 >> 3;
          v156 = v137++ & 7;
          LODWORD(v155) = *(unsigned __int8*)(v138 + v155);
          a2[1] = v137;
          v157 = 2 * (((unsigned int)v155 >> v156) & 1);
          if (v137 >= v136) {
            goto LABEL_109;
          }
          v169 = v137 >> 3;
          v170 = v137++ & 7;
          LODWORD(v169) = *(unsigned __int8*)(v138 + v169);
          a2[1] = v137;
          v158 = ((unsigned int)v169 >> v170) & 1;
          if (v137 < v136) {
            goto LABEL_127;
          }
        LABEL_110:
          v159 = 0;
          if (v137 >= v136) {
            goto LABEL_111;
          }
        LABEL_128:
          v173 = v137 >> 3;
          v174 = v137++ & 7;
          LODWORD(v173) = *(unsigned __int8*)(v138 + v173);
          a2[1] = v137;
          v160 = ((unsigned int)v173 >> v174) & 1;
          if (v137 < v136) {
            goto LABEL_129;
          }
        LABEL_112:
          v161 = 0;
          if (v137 >= v136) {
            goto LABEL_113;
          }
        LABEL_130:
          v177 = v137 >> 3;
          v178 = v137++ & 7;
          LODWORD(v177) = *(unsigned __int8*)(v138 + v177);
          a2[1] = v137;
          v162 = ((unsigned int)v177 >> v178) & 1;
          if (v137 < v136) {
            goto LABEL_131;
          }
        LABEL_114:
          v163 = 0;
          if (v137 >= v136) {
            goto LABEL_115;
          }
        LABEL_132:
          v181 = v137 >> 3;
          v182 = v137++ & 7;
          LODWORD(v181) = *(unsigned __int8*)(v138 + v181);
          a2[1] = v137;
          v164 = ((unsigned int)v181 >> v182) & 1;
          if (v137 < v136) {
            goto LABEL_133;
          }
        LABEL_116:
          v165 = 0;
          if (v137 >= v136) {
            goto LABEL_117;
          }
        LABEL_134:
          v185 = v137 >> 3;
          v186 = v137++ & 7;
          LODWORD(v185) = *(unsigned __int8*)(v138 + v185);
          a2[1] = v137;
          v166 = ((unsigned int)v185 >> v186) & 1;
          if (v137 < v136) {
            goto LABEL_135;
          }
        LABEL_118:
          v167 = 0;
          if (v137 >= v136) {
            goto LABEL_119;
          }
        LABEL_136:
          v189 = *(unsigned __int8*)(v138 + (v137 >> 3));
          a2[1] = v137 + 1;
          v168 = (v189 >> (v137 & 7)) & 1;
        }
        v152 = (v161 | (4 * (v160 | v159 | (4 * (v158 | v157))))) + v162 - 32;
        v153 = (v167 | (4 * (v166 | v165 | (4 * (v164 | v163))))) + v168 - 32;
        if ((__int16)v117 < 1) {
          goto LABEL_138;
        }
      }
      else {
        v152 = 0;
        if ((__int16)v117 < 1) {
          goto LABEL_138;
        }
      }
    LABEL_103:
      if ((v118 & 0x8000) != 0) {
        goto LABEL_143;
      }
      v118 = v152;
      v152 = v153;
      v154 = a1[1];
      if (((unsigned __int16)v118 | (unsigned __int16)v153) == 0) {
        return v25 == v154;
      }
      goto LABEL_144;
    }
    if ((__int16)v117 >= 1) {
      goto LABEL_103;
    }
  LABEL_138:
    if ((__int16)v118 < 1) {
      if ((v117 & 0x8000) == 0) {
        if ((v118 & 0x8000) == 0) {
          v154 = a1[1];
          return v25 == v154;
        }
      LABEL_143:
        v118 = -v153;
        v154 = a1[1];
        if (((unsigned __int16)-(__int16)v153 | (unsigned __int16)v152) == 0) {
          return v25 == v154;
        }
        goto LABEL_144;
      }
      v118 = -v152;
      v152 = -v153;
      v154 = a1[1];
      if (((unsigned __int16)v118 | (unsigned __int16)-(__int16)v153) == 0) {
        return v25 == v154;
      }
    LABEL_144:
      if (v154 >= v3) {
        return false;
      }
      v78 += v152;
      v79 += v118;
      v190 = (_WORD*)(*a1 + 4 * v154);
      *v190 = v79;
      v190[1] = v78;
      v191 = v154 + 1;
      a1[1] = v154 + 1;
      if (v154 >= v25) {
        return false;
      }
      v117 = v152;
      if (((unsigned __int16)v118 | (unsigned __int16)v152) == 0) {
        v154 = v191;
        return v25 == v154;
      }
      continue;
    }
    break;
  }
  v152 = -v152;
  v118 = v153;
  v154 = a1[1];
  if (((unsigned __int16)v153 | (unsigned __int16)v152) != 0) {
    goto LABEL_144;
  }
  return v25 == v154;
}

bool SdkHr_7535e0(_QWORD* a1, __int64* a2, unsigned __int8* a3,
                  __attribute__((swiftcall)) void (*a4)(PSEUDO_X8, __int16*))
{
  unsigned __int64 v4;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
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
  unsigned __int64 v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  unsigned __int64 v36;
  char v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  char v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  char v45;
  unsigned __int64 v46;
  char v47;
  unsigned __int64 v49;
  char v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  int v65;
  int v66;
  unsigned int v67;
  int v68;
  int v69;
  unsigned int v70;
  int v71;
  int v72;
  unsigned int v73;
  int v74;
  int v75;
  unsigned int v76;
  int v77;
  int v78;
  int v79;
  unsigned int v80;
  int v81;
  unsigned __int64 v82;
  char v83;
  unsigned __int64 v84;
  char v85;
  unsigned __int64 v86;
  char v87;
  unsigned __int64 v88;
  char v89;
  unsigned __int64 v90;
  char v91;
  unsigned __int64 v92;
  char v93;
  unsigned __int64 v94;
  char v95;
  unsigned __int64 v96;
  char v97;
  unsigned __int64 v98;
  char v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned __int64 v114;
  char v115;
  unsigned int v116;
  int v117;
  int v118;
  unsigned __int64 v119;
  unsigned __int8* v120;
  int v121;
  int v122;
  int v123;
  int v124;
  __int64 v125;
  int v126;
  int v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int8* v131;
  int v132;
  int v133;
  char v134;
  __int64 v135;
  unsigned __int8* v136;
  int v137;
  int v138;
  unsigned __int8* v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  int v143;
  unsigned __int64 v144;
  char v145;
  unsigned int v146;
  unsigned __int64 v147;
  unsigned int v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  unsigned int v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned __int8* v155;
  int v156;
  int v157;
  unsigned __int64 v158;
  char v159;
  unsigned int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  int v170;
  unsigned __int64 v171;
  char v172;
  unsigned __int64 v173;
  char v174;
  unsigned __int64 v175;
  char v176;
  unsigned __int64 v177;
  char v178;
  unsigned __int64 v179;
  char v180;
  unsigned __int64 v181;
  char v182;
  unsigned __int64 v183;
  char v184;
  unsigned __int64 v185;
  char v186;
  unsigned __int64 v187;
  char v188;
  unsigned __int64 v189;
  char v190;
  unsigned int v191;
  unsigned __int64 v192;
  _QWORD* v193;
  unsigned __int64 v195;
  _WORD v196[2];
  __int16 v197;
  _BYTE v198[10];

  v4 = a1[2];
  a1[1] = 0;
  v8 = *a2;
  v195 = v4;
  v9 = a2[1];
  v10 = a2[2];
  if (v9 >= v10) {
    v13 = 0;
  LABEL_3:
    v14 = 0;
    if (v9 >= v10) {
      goto LABEL_4;
    }
    goto LABEL_15;
  }
  v11 = v9 >> 3;
  v12 = a2[1] & 7;
  ++v9;
  LODWORD(v11) = *(unsigned __int8*)(v8 + v11);
  a2[1] = v9;
  v13 = 2 * (((unsigned int)v11 >> v12) & 1);
  if (v9 >= v10) {
    goto LABEL_3;
  }
  v30 = v9 >> 3;
  v31 = v9++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v8 + v30);
  a2[1] = v9;
  v14 = ((unsigned int)v30 >> v31) & 1;
  if (v9 >= v10) {
  LABEL_4:
    v15 = 0;
    v16 = v14 | v13;
    if (v9 >= v10) {
      goto LABEL_5;
    }
    goto LABEL_16;
  }
LABEL_15:
  v32 = v9 >> 3;
  v33 = v9++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v8 + v32);
  a2[1] = v9;
  v15 = 2 * (((unsigned int)v32 >> v33) & 1);
  v16 = v14 | v13;
  if (v9 >= v10) {
  LABEL_5:
    v17 = 0;
    v18 = v15 | (4 * v16);
    if (v9 >= v10) {
      goto LABEL_6;
    }
    goto LABEL_17;
  }
LABEL_16:
  v34 = v9 >> 3;
  v35 = v9++ & 7;
  LODWORD(v34) = *(unsigned __int8*)(v8 + v34);
  a2[1] = v9;
  v17 = ((unsigned int)v34 >> v35) & 1;
  v18 = v15 | (4 * v16);
  if (v9 >= v10) {
  LABEL_6:
    v19 = 0;
    v20 = v17 | v18;
    if (v9 >= v10) {
      goto LABEL_7;
    }
    goto LABEL_18;
  }
LABEL_17:
  v36 = v9 >> 3;
  v37 = v9++ & 7;
  LODWORD(v36) = *(unsigned __int8*)(v8 + v36);
  a2[1] = v9;
  v19 = 2 * (((unsigned int)v36 >> v37) & 1);
  v20 = v17 | v18;
  if (v9 >= v10) {
  LABEL_7:
    v21 = 0;
    v22 = v19 | (4 * v20);
    if (v9 >= v10) {
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_18:
  v38 = v9 >> 3;
  v39 = v9++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v8 + v38);
  a2[1] = v9;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v9 >= v10) {
  LABEL_8:
    v23 = 0;
    v24 = v21 | v22;
    if (v9 >= v10) {
      goto LABEL_9;
    }
    goto LABEL_20;
  }
LABEL_19:
  v40 = v9 >> 3;
  v41 = v9++ & 7;
  LODWORD(v40) = *(unsigned __int8*)(v8 + v40);
  a2[1] = v9;
  v23 = 2 * (((unsigned int)v40 >> v41) & 1);
  v24 = v21 | v22;
  if (v9 >= v10) {
  LABEL_9:
    v25 = 0;
    v26 = v23 | (4 * v24);
    if (v9 >= v10) {
      goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_20:
  v42 = v9 >> 3;
  v43 = v9++ & 7;
  LODWORD(v42) = *(unsigned __int8*)(v8 + v42);
  a2[1] = v9;
  v25 = ((unsigned int)v42 >> v43) & 1;
  v26 = v23 | (4 * v24);
  if (v9 >= v10) {
  LABEL_10:
    v27 = 0;
    v28 = v25 | v26;
    if (v9 >= v10) {
      goto LABEL_11;
    }
  LABEL_22:
    v46 = v9 >> 3;
    v47 = v9++ & 7;
    LODWORD(v46) = *(unsigned __int8*)(v8 + v46);
    a2[1] = v9;
    v29 = ((unsigned int)v46 >> v47) & 1 | v27 | (4 * v28);
    if (v195 >= v29) {
      goto LABEL_24;
    }
    return false;
  }
LABEL_21:
  v44 = v9 >> 3;
  v45 = v9++ & 7;
  LODWORD(v44) = *(unsigned __int8*)(v8 + v44);
  a2[1] = v9;
  v27 = 2 * (((unsigned int)v44 >> v45) & 1);
  v28 = v25 | v26;
  if (v9 < v10) {
    goto LABEL_22;
  }
LABEL_11:
  v29 = v27 | (4 * v28);
  if (v195 < v29) {
    return false;
  }
LABEL_24:
  if (v9 >= v10) {
    v51 = 0;
  LABEL_26:
    v52 = 0;
    if (v9 >= v10) {
      goto LABEL_27;
    }
    goto LABEL_46;
  }
  v49 = v9 >> 3;
  v50 = v9++ & 7;
  LODWORD(v49) = *(unsigned __int8*)(v8 + v49);
  a2[1] = v9;
  v51 = 2 * (((unsigned int)v49 >> v50) & 1);
  if (v9 >= v10) {
    goto LABEL_26;
  }
  v82 = v9 >> 3;
  v83 = v9++ & 7;
  LODWORD(v82) = *(unsigned __int8*)(v8 + v82);
  a2[1] = v9;
  v52 = ((unsigned int)v82 >> v83) & 1;
  if (v9 >= v10) {
  LABEL_27:
    v53 = 0;
    if (v9 >= v10) {
      goto LABEL_28;
    }
    goto LABEL_47;
  }
LABEL_46:
  v84 = v9 >> 3;
  v85 = v9++ & 7;
  LODWORD(v84) = *(unsigned __int8*)(v8 + v84);
  a2[1] = v9;
  v53 = 2 * (((unsigned int)v84 >> v85) & 1);
  if (v9 >= v10) {
  LABEL_28:
    v54 = 0;
    if (v9 >= v10) {
      goto LABEL_29;
    }
    goto LABEL_48;
  }
LABEL_47:
  v86 = v9 >> 3;
  v87 = v9++ & 7;
  LODWORD(v86) = *(unsigned __int8*)(v8 + v86);
  a2[1] = v9;
  v54 = ((unsigned int)v86 >> v87) & 1;
  if (v9 >= v10) {
  LABEL_29:
    v55 = 0;
    if (v9 >= v10) {
      goto LABEL_30;
    }
    goto LABEL_49;
  }
LABEL_48:
  v88 = v9 >> 3;
  v89 = v9++ & 7;
  LODWORD(v88) = *(unsigned __int8*)(v8 + v88);
  a2[1] = v9;
  v55 = 2 * (((unsigned int)v88 >> v89) & 1);
  if (v9 >= v10) {
  LABEL_30:
    v56 = 0;
    if (v9 >= v10) {
      goto LABEL_31;
    }
    goto LABEL_50;
  }
LABEL_49:
  v90 = v9 >> 3;
  v91 = v9++ & 7;
  LODWORD(v90) = *(unsigned __int8*)(v8 + v90);
  a2[1] = v9;
  v56 = ((unsigned int)v90 >> v91) & 1;
  if (v9 >= v10) {
  LABEL_31:
    v57 = 0;
    if (v9 >= v10) {
      goto LABEL_32;
    }
    goto LABEL_51;
  }
LABEL_50:
  v92 = v9 >> 3;
  v93 = v9++ & 7;
  LODWORD(v92) = *(unsigned __int8*)(v8 + v92);
  a2[1] = v9;
  v57 = 2 * (((unsigned int)v92 >> v93) & 1);
  if (v9 >= v10) {
  LABEL_32:
    v58 = 0;
    if (v9 >= v10) {
      goto LABEL_33;
    }
    goto LABEL_52;
  }
LABEL_51:
  v94 = v9 >> 3;
  v95 = v9++ & 7;
  LODWORD(v94) = *(unsigned __int8*)(v8 + v94);
  a2[1] = v9;
  v58 = ((unsigned int)v94 >> v95) & 1;
  if (v9 >= v10) {
  LABEL_33:
    v59 = 0;
    if (v9 >= v10) {
      goto LABEL_34;
    }
    goto LABEL_53;
  }
LABEL_52:
  v96 = v9 >> 3;
  v97 = v9++ & 7;
  LODWORD(v96) = *(unsigned __int8*)(v8 + v96);
  a2[1] = v9;
  v59 = 2 * (((unsigned int)v96 >> v97) & 1);
  if (v9 >= v10) {
  LABEL_34:
    v60 = 0;
    if (v9 >= v10) {
      goto LABEL_35;
    }
    goto LABEL_54;
  }
LABEL_53:
  v98 = v9 >> 3;
  v99 = v9++ & 7;
  LODWORD(v98) = *(unsigned __int8*)(v8 + v98);
  a2[1] = v9;
  v60 = ((unsigned int)v98 >> v99) & 1;
  if (v9 >= v10) {
  LABEL_35:
    v61 = 0;
    if (v9 >= v10) {
      goto LABEL_36;
    }
    goto LABEL_55;
  }
LABEL_54:
  v100 = v9 >> 3;
  v101 = v9++ & 7;
  LODWORD(v100) = *(unsigned __int8*)(v8 + v100);
  a2[1] = v9;
  v61 = 2 * (((unsigned int)v100 >> v101) & 1);
  if (v9 >= v10) {
  LABEL_36:
    v62 = 0;
    v63 = v52 | v51;
    if (v9 >= v10) {
      goto LABEL_37;
    }
    goto LABEL_56;
  }
LABEL_55:
  v102 = v9 >> 3;
  v103 = v9++ & 7;
  LODWORD(v102) = *(unsigned __int8*)(v8 + v102);
  a2[1] = v9;
  v62 = ((unsigned int)v102 >> v103) & 1;
  v63 = v52 | v51;
  if (v9 >= v10) {
  LABEL_37:
    v64 = 0;
    v65 = v53 | (4 * v63);
    v66 = v62 | v61;
    if (v9 >= v10) {
      goto LABEL_38;
    }
    goto LABEL_57;
  }
LABEL_56:
  v104 = v9 >> 3;
  v105 = v9++ & 7;
  LODWORD(v104) = *(unsigned __int8*)(v8 + v104);
  a2[1] = v9;
  v64 = 2 * (((unsigned int)v104 >> v105) & 1);
  v65 = v53 | (4 * v63);
  v66 = v62 | v61;
  if (v9 >= v10) {
  LABEL_38:
    v67 = 0;
    v68 = v64 | (4 * v66);
    v69 = v54 | v65;
    if (v9 >= v10) {
      goto LABEL_39;
    }
    goto LABEL_58;
  }
LABEL_57:
  v106 = v9 >> 3;
  v107 = v9++ & 7;
  LODWORD(v106) = *(unsigned __int8*)(v8 + v106);
  a2[1] = v9;
  v67 = ((unsigned int)v106 >> v107) & 1;
  v68 = v64 | (4 * v66);
  v69 = v54 | v65;
  if (v9 >= v10) {
  LABEL_39:
    v70 = 0;
    v71 = v55 | (4 * v69);
    v72 = v67 | v68;
    if (v9 >= v10) {
      goto LABEL_40;
    }
    goto LABEL_59;
  }
LABEL_58:
  v108 = v9 >> 3;
  v109 = v9++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v8 + v108);
  a2[1] = v9;
  v70 = 2 * (((unsigned int)v108 >> v109) & 1);
  v71 = v55 | (4 * v69);
  v72 = v67 | v68;
  if (v9 >= v10) {
  LABEL_40:
    v73 = 0;
    v74 = v70 | (4 * v72);
    v75 = v56 | v71;
    if (v9 >= v10) {
      goto LABEL_41;
    }
    goto LABEL_60;
  }
LABEL_59:
  v110 = v9 >> 3;
  v111 = v9++ & 7;
  LODWORD(v110) = *(unsigned __int8*)(v8 + v110);
  a2[1] = v9;
  v73 = ((unsigned int)v110 >> v111) & 1;
  v74 = v70 | (4 * v72);
  v75 = v56 | v71;
  if (v9 >= v10) {
  LABEL_41:
    v76 = 0;
    v77 = v57 | (4 * v75);
    v78 = v73 | v74;
    if (v9 >= v10) {
      goto LABEL_42;
    }
  LABEL_61:
    v114 = v9 >> 3;
    v115 = v9++ & 7;
    LODWORD(v114) = *(unsigned __int8*)(v8 + v114);
    a2[1] = v9;
    v79 = v58 | v77;
    v80 = ((unsigned int)v114 >> v115) & 1 | v76 | (4 * v78);
    if (v9 >= v10) {
      goto LABEL_43;
    }
  LABEL_62:
    v116 = *(unsigned __int8*)(v8 + (v9 >> 3));
    a2[1] = v9 + 1;
    v81 = (v116 >> (v9 & 7)) & 1;
    goto LABEL_63;
  }
LABEL_60:
  v112 = v9 >> 3;
  v113 = v9++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v8 + v112);
  a2[1] = v9;
  v76 = 2 * (((unsigned int)v112 >> v113) & 1);
  v77 = v57 | (4 * v75);
  v78 = v73 | v74;
  if (v9 < v10) {
    goto LABEL_61;
  }
LABEL_42:
  v79 = v58 | v77;
  v80 = v76 | (4 * v78);
  if (v9 < v10) {
    goto LABEL_62;
  }
LABEL_43:
  v81 = 0;
LABEL_63:
  v117 = v81 | (2 * v80);
  *(_WORD*)&v198[8] = 0;
  v118 = v60 | v59 | (4 * v79);
  v197 = v60 | v59 | (4 * v79);
  *(_QWORD*)v198 = (unsigned __int16)(v81 | (2 * v80));
  a4((void*)&v198[2], &v197);
  v119 = a1[1];
  if (v119 < v195) {
    *(_QWORD*)(*a1 + 8 * v119) = *(_QWORD*)&v198[2];
    a1[1] = v119 + 1;
  }
  v120 = a3 + 2;
  v121 = 65529;
  v122 = 0;
  do {
    if ((__int16)v121 < 1) {
      if ((__int16)v122 >= 1) {
        v123 = -v121;
        LOWORD(v124) = v122;
        goto LABEL_71;
      }
      if ((v121 & 0x8000) != 0) {
        v123 = -v122;
        v124 = -v121;
        goto LABEL_71;
      }
      if ((v122 & 0x8000) == 0) {
        LOWORD(v123) = 0;
        LOWORD(v124) = 0;
        goto LABEL_71;
      }
    LABEL_68:
      v124 = -v122;
      LOWORD(v123) = v121;
      goto LABEL_71;
    }
    LOWORD(v123) = v122;
    LOWORD(v124) = v121;
    if ((v122 & 0x8000) != 0) {
      goto LABEL_68;
    }
  LABEL_71:
    v125 = *a3;
    v126 = (unsigned __int16)v123;
    v127 = (unsigned __int16)v124;
    v128 = 0;
    v129 = 0;
    v130 = v125;
    while (1) {
      v131 = &v120[204 * v129];
      v132 = (char)*v131;
      if (v126 >= v132) {
        if (v126 <= v132) {
          v133 = (char)v131[1];
          if (v127 < v133) {
            goto LABEL_73;
          }
          if (v127 <= v133) {
            break;
          }
        }
        v128 = v129;
        v129 = v130;
      }
    LABEL_73:
      v130 = v129;
      v129 = (unsigned __int64)(v129 + v128) >> 1;
      if (v128 == v129) {
        v135 = 0;
        v129 = 0;
        while (1) {
          v136 = &v120[204 * v129];
          v137 = (char)*v136;
          if (v137 <= 0) {
            if ((v137 & 0x80000000) == 0) {
              v138 = (char)v136[1];
              if (v138 > 1) {
                goto LABEL_81;
              }
              if (v138 == 1) {
                v134 = 0;
                goto LABEL_88;
              }
            }
            v135 = v129;
            v129 = v125;
          }
        LABEL_81:
          v125 = v129;
          v129 = (unsigned __int64)(v129 + v135) >> 1;
          if (v135 == v129) {
            v134 = *(a3 - 202);
            v129 = -1;
            goto LABEL_88;
          }
        }
      }
    }
    v134 = v132;
  LABEL_88:
    if (v126 != (unsigned __int16)v134) {
      return false;
    }
    v139 = &v120[204 * v129];
    if (v127 != (unsigned __int16)(char)v139[1]) {
      return false;
    }
    v140 = a2[1];
    v141 = a2[2];
    v142 = *a2;
    v143 = 0;
    while (2) {
      if (v140 >= v141) {
        v146 = 0;
      }
      else {
        v144 = v140 >> 3;
        v145 = v140++ & 7;
        LODWORD(v144) = *(unsigned __int8*)(v142 + v144);
        a2[1] = v140;
        v146 = ((unsigned int)v144 >> v145) & 1;
      }
      v147 = v139[2];
      v148 = v146 & 0xFFFFF001 | (2 * (v143 & 0x7FF));
      v149 = 0;
      v150 = 0;
      v151 = (v143 & 0xFFFFF000) + 4096;
      v143 = v148 | v151;
      v152 = (unsigned __int16)v151 >> 12;
    LABEL_97:
      v153 = *(unsigned __int16*)&v139[4 * v150 + 6];
      if (v152 < v153 >> 12) {
        goto LABEL_96;
      }
      if (v152 > v153 >> 12) {
        goto LABEL_95;
      }
      v154 = v153 & 0xFFF;
      if (v148 < v154) {
        goto LABEL_96;
      }
      if (v148 > v154) {
      LABEL_95:
        v149 = v150;
        v150 = v147;
      LABEL_96:
        v147 = v150;
        v150 = (v150 + v149) >> 1;
        if (v149 == v150) {
          continue;
        }
        goto LABEL_97;
      }
      break;
    }
    v155 = &v139[4 * v150];
    v156 = (char)v155[4];
    v157 = (char)v155[5];
    if (v156 == 0) {
      if (v157 == 1) {
        if (v140 >= v141) {
          v160 = 0;
        LABEL_109:
          v161 = 0;
          if (v140 >= v141) {
            goto LABEL_110;
          }
        LABEL_127:
          v173 = v140 >> 3;
          v174 = v140++ & 7;
          LODWORD(v173) = *(unsigned __int8*)(v142 + v173);
          a2[1] = v140;
          v162 = 2 * (((unsigned int)v173 >> v174) & 1);
          if (v140 < v141) {
            goto LABEL_128;
          }
        LABEL_111:
          v163 = 0;
          if (v140 >= v141) {
            goto LABEL_112;
          }
        LABEL_129:
          v177 = v140 >> 3;
          v178 = v140++ & 7;
          LODWORD(v177) = *(unsigned __int8*)(v142 + v177);
          a2[1] = v140;
          v164 = 2 * (((unsigned int)v177 >> v178) & 1);
          if (v140 < v141) {
            goto LABEL_130;
          }
        LABEL_113:
          v165 = 0;
          if (v140 >= v141) {
            goto LABEL_114;
          }
        LABEL_131:
          v181 = v140 >> 3;
          v182 = v140++ & 7;
          LODWORD(v181) = *(unsigned __int8*)(v142 + v181);
          a2[1] = v140;
          v166 = 2 * (((unsigned int)v181 >> v182) & 1);
          if (v140 < v141) {
            goto LABEL_132;
          }
        LABEL_115:
          v147 = 0;
          if (v140 >= v141) {
            goto LABEL_116;
          }
        LABEL_133:
          v185 = v140 >> 3;
          v186 = v140++ & 7;
          LODWORD(v185) = *(unsigned __int8*)(v142 + v185);
          a2[1] = v140;
          v167 = 2 * (((unsigned int)v185 >> v186) & 1);
          if (v140 < v141) {
            goto LABEL_134;
          }
        LABEL_117:
          v168 = 0;
          if (v140 >= v141) {
            goto LABEL_118;
          }
        LABEL_135:
          v189 = v140 >> 3;
          v190 = v140++ & 7;
          LODWORD(v189) = *(unsigned __int8*)(v142 + v189);
          a2[1] = v140;
          v169 = 2 * (((unsigned int)v189 >> v190) & 1);
          if (v140 < v141) {
            goto LABEL_136;
          }
        LABEL_119:
          v170 = 0;
        }
        else {
          v158 = v140 >> 3;
          v159 = v140++ & 7;
          LODWORD(v158) = *(unsigned __int8*)(v142 + v158);
          a2[1] = v140;
          v160 = 2 * (((unsigned int)v158 >> v159) & 1);
          if (v140 >= v141) {
            goto LABEL_109;
          }
          v171 = v140 >> 3;
          v172 = v140++ & 7;
          LODWORD(v171) = *(unsigned __int8*)(v142 + v171);
          a2[1] = v140;
          v161 = ((unsigned int)v171 >> v172) & 1;
          if (v140 < v141) {
            goto LABEL_127;
          }
        LABEL_110:
          v162 = 0;
          if (v140 >= v141) {
            goto LABEL_111;
          }
        LABEL_128:
          v175 = v140 >> 3;
          v176 = v140++ & 7;
          LODWORD(v175) = *(unsigned __int8*)(v142 + v175);
          a2[1] = v140;
          v163 = ((unsigned int)v175 >> v176) & 1;
          if (v140 < v141) {
            goto LABEL_129;
          }
        LABEL_112:
          v164 = 0;
          if (v140 >= v141) {
            goto LABEL_113;
          }
        LABEL_130:
          v179 = v140 >> 3;
          v180 = v140++ & 7;
          LODWORD(v179) = *(unsigned __int8*)(v142 + v179);
          a2[1] = v140;
          v165 = ((unsigned int)v179 >> v180) & 1;
          if (v140 < v141) {
            goto LABEL_131;
          }
        LABEL_114:
          v166 = 0;
          if (v140 >= v141) {
            goto LABEL_115;
          }
        LABEL_132:
          v183 = v140 >> 3;
          v184 = v140++ & 7;
          LODWORD(v183) = *(unsigned __int8*)(v142 + v183);
          a2[1] = v140;
          v147 = ((unsigned int)v183 >> v184) & 1;
          if (v140 < v141) {
            goto LABEL_133;
          }
        LABEL_116:
          v167 = 0;
          if (v140 >= v141) {
            goto LABEL_117;
          }
        LABEL_134:
          v187 = v140 >> 3;
          v188 = v140++ & 7;
          LODWORD(v187) = *(unsigned __int8*)(v142 + v187);
          a2[1] = v140;
          v168 = ((unsigned int)v187 >> v188) & 1;
          if (v140 < v141) {
            goto LABEL_135;
          }
        LABEL_118:
          v169 = 0;
          if (v140 >= v141) {
            goto LABEL_119;
          }
        LABEL_136:
          v191 = *(unsigned __int8*)(v142 + (v140 >> 3));
          a2[1] = v140 + 1;
          v170 = (v191 >> (v140 & 7)) & 1;
        }
        v156 = (v165 | v164 | (4 * (v163 | v162 | (4 * (v161 | v160))))) - 32;
        v157 = (v170 | v169 | (4 * (v168 | v167 | (4 * (v147 | v166))))) - 32;
        if ((__int16)v121 < 1) {
          goto LABEL_138;
        }
      }
      else {
        v156 = 0;
        if ((__int16)v121 < 1) {
          goto LABEL_138;
        }
      }
    LABEL_103:
      if ((v122 & 0x8000) == 0) {
        v122 = v156;
        v156 = v157;
        if (((unsigned __int16)v122 | (unsigned __int16)v157) == 0) {
          return v29 == a1[1];
        }
        goto LABEL_144;
      }
    LABEL_143:
      v122 = -v157;
      if (((unsigned __int16)-(__int16)v157 | (unsigned __int16)v156) == 0) {
        return v29 == a1[1];
      }
      goto LABEL_144;
    }
    if ((__int16)v121 >= 1) {
      goto LABEL_103;
    }
  LABEL_138:
    if ((__int16)v122 < 1) {
      if ((v121 & 0x8000) != 0) {
        v122 = -v156;
        v156 = -v157;
        if (((unsigned __int16)v122 | (unsigned __int16)-(__int16)v157) == 0) {
          return v29 == a1[1];
        }
        goto LABEL_144;
      }
      if ((v122 & 0x8000) == 0) {
        return v29 == a1[1];
      }
      goto LABEL_143;
    }
    v156 = -v156;
    v122 = v157;
    if (((unsigned __int16)v157 | (unsigned __int16)v156) == 0) {
      return v29 == a1[1];
    }
  LABEL_144:
    if (a1[1] >= v195) {
      return false;
    }
    v117 += v156;
    v118 += v122;
    *(_QWORD*)&v198[2] = 0;
    v196[0] = v118;
    v196[1] = v117;
    ((__attribute__((swiftcall)) void (*)(
        PSEUDO_X8, _WORD*, unsigned __int64))a4)((void*)&v198[2], v196, v147);
    v192 = a1[1];
    v193 = (_QWORD*)(*a1 + 8 * v192++);
    *v193 = *(_QWORD*)&v198[2];
    a1[1] = v192;
    if (v192 > v29) {
      return false;
    }
    v121 = v156;
  } while (((unsigned __int16)v122 | (unsigned __int16)v156) != 0);
  return v29 == a1[1];
}

__int16* SdkHr_754310(__int16* result, unsigned __int16* a2, _WORD* a3,
                      _WORD* a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  v4 = result[1];
  v5 = *result;
  if (v4 >= 1) {
    if ((v5 & 0x80000000) == 0) {
      *a4 = *a2;
      a4[1] = a2[1];
      *a3 = *result;
      a3[1] = result[1];
      return result;
    }
  LABEL_8:
    v7 = -*a2;
    *a4 = a2[1];
    a4[1] = v7;
    v8 = -(unsigned __int16)*result;
    *a3 = result[1];
    a3[1] = v8;
    return result;
  }
  if (v5 >= 1) {
    v6 = -a2[1];
    a4[1] = *a2;
    *a4 = v6;
    LOWORD(v6) = *result;
    *a3 = -result[1];
    a3[1] = v6;
    return result;
  }
  if ((v4 & 0x80000000) == 0) {
    if ((v5 & 0x80000000) == 0) {
      return result;
    }
    goto LABEL_8;
  }
  v9 = -a2[1];
  *a4 = -*a2;
  a4[1] = v9;
  v10 = -(unsigned __int16)result[1];
  *a3 = -*result;
  a3[1] = v10;
  return result;
}

__int64 SdkHr_7545a0(__int64* a1, __int16* a2, unsigned __int64 a3,
                     unsigned __int8* a4)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int16 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int16 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned int v36;
  unsigned __int8* v37;
  int v38;
  unsigned __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  int v47;
  unsigned __int16* v48;
  int v49;
  int v50;
  int v51;
  unsigned __int16* v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  int v61;
  int v62;
  __int64 v63;
  unsigned __int8* v64;
  int v65;
  int v66;
  unsigned __int8* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  int v74;
  int v75;
  int v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  int v83;
  int v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  char v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  char v98;
  unsigned __int64 v99;
  char v100;
  unsigned __int64 v101;
  char v102;
  unsigned __int64 v103;
  char v104;
  unsigned __int64 v105;
  char v106;
  unsigned __int64 v107;
  char v108;
  unsigned __int64 v109;
  char v110;
  unsigned __int64 v111;
  char v112;

  v4 = a1[1];
  if (v4 > 0x956) {
    if (v4 + 9 >= 0x960) {
      return 0;
    }
  }
  else {
    *(_BYTE*)(*a1 + (v4 >> 3)) |= ((a3 & 0x200) != 0) << (v4 & 7);
    v5 = *a1;
    a1[1] = v4 + 1;
    *(_BYTE*)(v5 + ((v4 + 1) >> 3)) |= ((a3 & 0x100) != 0) << ((v4 + 1) & 7);
    v6 = *a1;
    a1[1] = v4 + 2;
    *(_BYTE*)(v6 + ((v4 + 2) >> 3)) |= ((a3 & 0x80) != 0) << ((v4 + 2) & 7);
    v7 = *a1;
    a1[1] = v4 + 3;
    *(_BYTE*)(v7 + ((v4 + 3) >> 3)) |= ((a3 & 0x40) != 0) << ((v4 + 3) & 7);
    v8 = *a1;
    a1[1] = v4 + 4;
    *(_BYTE*)(v8 + ((v4 + 4) >> 3)) |= ((a3 & 0x20) != 0) << ((v4 + 4) & 7);
    v9 = *a1;
    a1[1] = v4 + 5;
    *(_BYTE*)(v9 + ((v4 + 5) >> 3)) |= ((a3 & 0x10) != 0) << ((v4 + 5) & 7);
    v10 = *a1;
    a1[1] = v4 + 6;
    *(_BYTE*)(v10 + ((v4 + 6) >> 3)) |= ((a3 & 8) != 0) << ((v4 + 6) & 7);
    v11 = *a1;
    a1[1] = v4 + 7;
    *(_BYTE*)(v11 + ((v4 + 7) >> 3)) |= ((a3 & 4) != 0) << ((v4 + 7) & 7);
    v12 = *a1;
    a1[1] = v4 + 8;
    *(_BYTE*)(v12 + ((v4 + 8) >> 3)) |= ((a3 & 2) != 0) << (v4 & 7);
    v13 = *a1;
    a1[1] = v4 + 9;
    *(_BYTE*)(v13 + ((v4 + 9) >> 3)) |= (a3 & 1) << ((v4 + 9) & 7);
    a1[1] = v4 + 10;
    if (v4 >= 0x94D) {
      return 0;
    }
    v14 = *a2;
    *(_BYTE*)(*a1 + ((v4 + 10) >> 3)) |= ((*a2 & 0x200) != 0)
                                         << ((v4 + 10) & 7);
    v15 = *a1;
    a1[1] = v4 + 11;
    *(_BYTE*)(v15 + ((v4 + 11) >> 3)) |= ((v14 & 0x100) != 0)
                                         << ((v4 + 11) & 7);
    v16 = *a1;
    a1[1] = v4 + 12;
    *(_BYTE*)(v16 + ((v4 + 12) >> 3)) |= ((v14 & 0x80) != 0) << ((v4 + 12) & 7);
    v17 = *a1;
    a1[1] = v4 + 13;
    *(_BYTE*)(v17 + ((v4 + 13) >> 3)) |= ((v14 & 0x40) != 0) << ((v4 + 13) & 7);
    v18 = *a1;
    a1[1] = v4 + 14;
    *(_BYTE*)(v18 + ((v4 + 14) >> 3)) |= ((v14 & 0x20) != 0) << ((v4 + 14) & 7);
    v19 = *a1;
    a1[1] = v4 + 15;
    *(_BYTE*)(v19 + ((v4 + 15) >> 3)) |= ((v14 & 0x10) != 0) << ((v4 + 15) & 7);
    v20 = *a1;
    a1[1] = v4 + 16;
    *(_BYTE*)(v20 + ((v4 + 16) >> 3)) |= ((v14 & 8) != 0) << (v4 & 7);
    v21 = *a1;
    a1[1] = v4 + 17;
    *(_BYTE*)(v21 + ((v4 + 17) >> 3)) |= ((v14 & 4) != 0) << ((v4 + 17) & 7);
    v22 = *a1;
    a1[1] = v4 + 18;
    *(_BYTE*)(v22 + ((v4 + 18) >> 3)) |= ((v14 & 2) != 0) << ((v4 + 18) & 7);
    v23 = *a1;
    a1[1] = v4 + 19;
    v24 = v4 + 20;
    *(_BYTE*)(v23 + ((v4 + 19) >> 3)) |= (v14 & 1) << ((v4 + 19) & 7);
    a1[1] = v4 + 20;
    if (v4 > 0x943) {
      return 0;
    }
    v25 = a2[1];
    v26 = v24 & 7;
    *(_BYTE*)(*a1 + (v24 >> 3)) |= ((v25 & 0x100) != 0) << (v24 & 7);
    v27 = *a1;
    a1[1] = v4 + 21;
    *(_BYTE*)(v27 + ((v4 + 21) >> 3)) |= ((v25 & 0x80) != 0) << ((v4 + 21) & 7);
    v28 = *a1;
    a1[1] = v4 + 22;
    *(_BYTE*)(v28 + ((v4 + 22) >> 3)) |= ((v25 & 0x40) != 0) << ((v4 + 22) & 7);
    v29 = *a1;
    a1[1] = v4 + 23;
    *(_BYTE*)(v29 + ((v4 + 23) >> 3)) |= ((v25 & 0x20) != 0) << ((v4 + 23) & 7);
    v30 = *a1;
    a1[1] = v4 + 24;
    *(_BYTE*)(v30 + ((v4 + 24) >> 3)) |= ((v25 & 0x10) != 0) << (v4 & 7);
    v31 = *a1;
    a1[1] = v4 + 25;
    *(_BYTE*)(v31 + ((v4 + 25) >> 3)) |= ((v25 & 8) != 0) << ((v4 + 25) & 7);
    v32 = *a1;
    a1[1] = v4 + 26;
    *(_BYTE*)(v32 + ((v4 + 26) >> 3)) |= ((v25 & 4) != 0) << ((v4 + 26) & 7);
    v33 = *a1;
    a1[1] = v4 + 27;
    *(_BYTE*)(v33 + ((v4 + 27) >> 3)) |= ((v25 & 2) != 0) << ((v4 + 27) & 7);
    v34 = v4 + 28;
    v4 += 29LL;
    v35 = *a1;
    a1[1] = v34;
    *(_BYTE*)(v35 + (v34 >> 3)) |= (v25 & 1) << v26;
    a1[1] = v4;
  }
  v36 = 1;
  if (a3 == 0) {
    return v36;
  }
  v37 = a4 + 8;
  v38 = 65529;
  v39 = 0;
  v40 = 0;
  do {
    v47 = v38;
    v48 = (unsigned __int16*)&a2[2 * v39];
    v49 = v40;
    ++v39;
    v50 = *v48;
    v51 = v48[1];
    if (v39 >= a3) {
      v40 = 0;
      v38 = 0;
      if ((__int16)v47 >= 1) {
      LABEL_15:
        if ((v49 & 0x8000) != 0) {
          goto LABEL_20;
        }
        LOWORD(v54) = v47;
        LOWORD(v47) = v49;
        LOWORD(v55) = v38;
        LOWORD(v53) = v40;
        goto LABEL_21;
      }
    }
    else {
      v52 = (unsigned __int16*)&a2[2 * v39];
      v40 = *v52 - v50;
      v38 = v52[1] - v51;
      if ((__int16)v47 >= 1) {
        goto LABEL_15;
      }
    }
    if ((__int16)v49 < 1) {
      if ((v47 & 0x8000) != 0) {
        v53 = -v40;
        v55 = -v38;
        v54 = -v47;
        v47 = -v49;
        goto LABEL_21;
      }
      if ((v49 & 0x8000) != 0) {
      LABEL_20:
        v55 = -v40;
        v54 = -v49;
        LOWORD(v53) = v38;
        goto LABEL_21;
      }
      LOWORD(v54) = 0;
      LOWORD(v47) = 0;
      LOWORD(v55) = 0;
      LOWORD(v53) = 0;
    }
    else {
      v53 = -v38;
      v47 = -v47;
      LOWORD(v54) = v49;
      LOWORD(v55) = v40;
    }
  LABEL_21:
    v56 = *a4;
    v57 = 0;
    v58 = 0;
    v59 = v56;
    while (1) {
      v60 = &v37[16 * v58];
      v61 = (char)*v60;
      if ((__int16)v47 >= v61) {
        if ((__int16)v47 > v61) {
          v57 = v58;
          goto LABEL_23;
        }
        v62 = (char)v60[1];
        if ((__int16)v54 >= v62) {
          break;
        }
      }
      v59 = v58;
    LABEL_23:
      v58 = (unsigned __int64)(v59 + v57) >> 1;
      if (v57 == v58) {
        v63 = 0;
        v58 = 0;
        while (1) {
          v64 = &v37[16 * v58];
          v65 = (char)*v64;
          if (v65 <= 0) {
            if (v65 < 0) {
              v63 = v58;
              goto LABEL_32;
            }
            v66 = (char)v64[1];
            if (v66 <= 1) {
              v63 = v58;
              if (v66 == 1) {
                goto LABEL_40;
              }
              goto LABEL_32;
            }
          }
          v56 = v58;
        LABEL_32:
          v58 = (unsigned __int64)(v56 + v63) >> 1;
          if (v63 == v58) {
            v58 = -1;
            goto LABEL_40;
          }
        }
      }
    }
    v57 = v58;
    if ((__int16)v54 > v62) {
      goto LABEL_23;
    }
  LABEL_40:
    v67 = &v37[16 * v58];
    v68 = 0;
    v69 = 0;
    v70 = v67[2];
    v71 = *((_QWORD*)v67 + 1);
    v72 = v70;
    while (2) {
      v73 = (char*)(v71 + 4 * v69);
      v74 = *v73;
      if ((__int16)v53 >= v74) {
        if ((__int16)v53 > v74) {
          goto LABEL_41;
        }
        v75 = v73[1];
        if ((__int16)v55 >= v75) {
          if ((__int16)v55 <= v75) {
            v76 = 0;
            v77 = *(unsigned __int16*)(v71 + 4 * v69 + 2);
            v78 = v77 >> 12;
            v79 = v4 + (v77 >> 12);
            if ((unsigned int)v77 >= 0x1000) {
              goto LABEL_59;
            }
            goto LABEL_68;
          }
        LABEL_41:
          v68 = v69;
          v69 = v72;
        }
      }
      v72 = v69;
      v69 = (unsigned __int64)(v69 + v68) >> 1;
      if (v68 != v69) {
        continue;
      }
      break;
    }
    v80 = 0;
    v81 = 0;
    while (2) {
      v82 = (char*)(v71 + 4 * v81);
      v83 = *v82;
      if (v83 <= 0) {
        if (v83 < 0) {
          goto LABEL_50;
        }
        v84 = v82[1];
        if (v84 <= 1) {
          if (v84 == 1) {
            goto LABEL_58;
          }
        LABEL_50:
          v80 = v81;
          v81 = v70;
        }
      }
      v70 = v81;
      v81 = (unsigned __int64)(v81 + v80) >> 1;
      if (v80 != v81) {
        continue;
      }
      break;
    }
    v81 = -1;
  LABEL_58:
    v76 = 1;
    v77 = *(unsigned __int16*)(v71 + 4 * v81 + 2);
    v78 = v77 >> 12;
    v79 = v4 + (v77 >> 12);
    if ((unsigned int)v77 >= 0x1000) {
    LABEL_59:
      if (v4 <= 0x95F && v79 <= 0x960) {
        v85 = v77 & 0xFFF;
        v86 = (v77 >> 12) & 7;
        if (v86 != 0) {
          v87 = v78;
          do {
            --v87;
            if (v4 <= 0x95F) {
              v88 = v4 >> 3;
              v89 = v4++ & 7;
              *(_BYTE*)(*a1 + v88) |= ((v85 >> v87) & 1) << v89;
              a1[1] = v4;
            }
            --v86;
          } while (v86 != 0);
        }
        else {
          v87 = v78;
        }
        if ((unsigned int)(v78 - 1) >= 7) {
          v96 = v87 - 8;
          do {
            if (v4 <= 0x95F) {
              v97 = v4 >> 3;
              v98 = v4++ & 7;
              *(_BYTE*)(*a1 + v97) |= ((v85 >> ((unsigned __int8)v96 + 7)) & 1)
                                      << v98;
              a1[1] = v4;
              if (v4 <= 0x95F) {
                v99 = v4 >> 3;
                v100 = v4++ & 7;
                *(_BYTE*)(*a1 + v99) |=
                    ((v85 >> ((unsigned __int8)v96 + 6)) & 1) << v100;
                a1[1] = v4;
                if (v4 <= 0x95F) {
                  v101 = v4 >> 3;
                  v102 = v4++ & 7;
                  *(_BYTE*)(*a1 + v101) |=
                      ((v85 >> ((unsigned __int8)v96 + 5)) & 1) << v102;
                  a1[1] = v4;
                  if (v4 <= 0x95F) {
                    v103 = v4 >> 3;
                    v104 = v4++ & 7;
                    *(_BYTE*)(*a1 + v103) |=
                        ((v85 >> ((unsigned __int8)v96 + 4)) & 1) << v104;
                    a1[1] = v4;
                    if (v4 <= 0x95F) {
                      v105 = v4 >> 3;
                      v106 = v4++ & 7;
                      *(_BYTE*)(*a1 + v105) |=
                          ((v85 >> ((unsigned __int8)v96 + 3)) & 1) << v106;
                      a1[1] = v4;
                      if (v4 <= 0x95F) {
                        v107 = v4 >> 3;
                        v108 = v4++ & 7;
                        *(_BYTE*)(*a1 + v107) |=
                            ((v85 >> ((unsigned __int8)v96 + 2)) & 1) << v108;
                        a1[1] = v4;
                        if (v4 <= 0x95F) {
                          v109 = v4 >> 3;
                          v110 = v4++ & 7;
                          *(_BYTE*)(*a1 + v109) |=
                              ((v85 >> ((unsigned __int8)v96 + 1)) & 1) << v110;
                          a1[1] = v4;
                          if (v4 <= 0x95F) {
                            v111 = v4 >> 3;
                            v112 = v4++ & 7;
                            *(_BYTE*)(*a1 + v111) |= ((v85 >> v96) & 1) << v112;
                            a1[1] = v4;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v96 -= 8LL;
          } while (v96 != -8);
        }
      }
    }
  LABEL_68:
    if (v79 > 0x960) {
      return 0;
    }
    if (v76 == 0) {
      continue;
    }
    if (v4 <= 0x95A) {
      *(_BYTE*)(*a1 + (v4 >> 3)) |= ((v53 & 0x20) == 0) << (v4 & 7);
      v90 = *a1;
      a1[1] = v4 + 1;
      *(_BYTE*)(v90 + ((v4 + 1) >> 3)) |= ((v53 & 0x10) != 0) << ((v4 + 1) & 7);
      v91 = *a1;
      a1[1] = v4 + 2;
      *(_BYTE*)(v91 + ((v4 + 2) >> 3)) |= ((v53 & 8) != 0) << ((v4 + 2) & 7);
      v92 = *a1;
      a1[1] = v4 + 3;
      *(_BYTE*)(v92 + ((v4 + 3) >> 3)) |= ((v53 & 4) != 0) << ((v4 + 3) & 7);
      v93 = *a1;
      a1[1] = v4 + 4;
      *(_BYTE*)(v93 + ((v4 + 4) >> 3)) |= ((v53 & 2) != 0) << ((v4 + 4) & 7);
      v94 = v4 + 5;
      v4 += 6LL;
      v95 = *a1;
      a1[1] = v94;
      *(_BYTE*)(v95 + (v94 >> 3)) |= (v53 & 1) << (v94 & 7);
      a1[1] = v4;
      goto LABEL_85;
    }
    if (v4 + 6 > 0x960) {
      return 0;
    }
  LABEL_85:
    if (v4 <= 0x95A) {
      *(_BYTE*)(*a1 + (v4 >> 3)) |= ((v55 & 0x20) == 0) << (v4 & 7);
      v41 = *a1;
      a1[1] = v4 + 1;
      *(_BYTE*)(v41 + ((v4 + 1) >> 3)) |= ((v55 & 0x10) != 0) << ((v4 + 1) & 7);
      v42 = *a1;
      a1[1] = v4 + 2;
      *(_BYTE*)(v42 + ((v4 + 2) >> 3)) |= ((v55 & 8) != 0) << ((v4 + 2) & 7);
      v43 = *a1;
      a1[1] = v4 + 3;
      *(_BYTE*)(v43 + ((v4 + 3) >> 3)) |= ((v55 & 4) != 0) << ((v4 + 3) & 7);
      v44 = *a1;
      a1[1] = v4 + 4;
      *(_BYTE*)(v44 + ((v4 + 4) >> 3)) |= ((v55 & 2) != 0) << ((v4 + 4) & 7);
      v45 = v4 + 5;
      v4 += 6LL;
      v46 = *a1;
      a1[1] = v45;
      *(_BYTE*)(v46 + (v45 >> 3)) |= (v55 & 1) << (v45 & 7);
      a1[1] = v4;
    }
    else if (v4 + 6 > 0x960) {
      return 0;
    }
  } while (v39 != a3);
  return 1;
}

bool SdkHr_755220(_QWORD* a1, __int64* a2, unsigned __int8* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
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
  unsigned __int64 v26;
  char v27;
  unsigned __int64 v28;
  char v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  unsigned __int64 v36;
  char v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  char v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  unsigned __int64 v46;
  char v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  unsigned int v64;
  int v65;
  int v66;
  unsigned int v67;
  int v68;
  int v69;
  unsigned int v70;
  int v71;
  int v72;
  unsigned int v73;
  int v74;
  int v75;
  int v76;
  unsigned int v77;
  unsigned __int64 v78;
  int v79;
  int v80;
  unsigned __int64 v81;
  char v82;
  unsigned __int64 v83;
  char v84;
  unsigned __int64 v85;
  char v86;
  unsigned __int64 v87;
  char v88;
  unsigned __int64 v89;
  char v90;
  unsigned __int64 v91;
  char v92;
  unsigned __int64 v93;
  char v94;
  unsigned __int64 v95;
  char v96;
  unsigned __int64 v97;
  char v98;
  unsigned __int64 v99;
  char v100;
  unsigned __int64 v101;
  char v102;
  unsigned __int64 v103;
  char v104;
  unsigned __int64 v105;
  char v106;
  unsigned __int64 v107;
  char v108;
  unsigned __int64 v109;
  char v110;
  unsigned __int64 v111;
  char v112;
  unsigned __int64 v113;
  char v114;
  unsigned int v115;
  _WORD* v116;
  unsigned __int8* v117;
  int v118;
  int v119;
  int v120;
  int v121;
  __int64 v122;
  int v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int8* v128;
  int v129;
  int v130;
  char v131;
  __int64 v132;
  unsigned __int8* v133;
  int v134;
  int v135;
  unsigned __int8* v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  int v140;
  unsigned __int64 v141;
  char v142;
  unsigned int v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned int v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  char* v153;
  int v154;
  int v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  char v158;
  unsigned int v159;
  unsigned int v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  int v170;
  unsigned __int64 v171;
  char v172;
  unsigned __int64 v173;
  char v174;
  unsigned __int64 v175;
  char v176;
  unsigned __int64 v177;
  char v178;
  unsigned __int64 v179;
  char v180;
  unsigned __int64 v181;
  char v182;
  unsigned __int64 v183;
  char v184;
  unsigned __int64 v185;
  char v186;
  unsigned __int64 v187;
  char v188;
  unsigned __int64 v189;
  char v190;
  unsigned int v191;
  _WORD* v192;
  unsigned __int64 v193;

  a1[1] = 0;
  v3 = a1[2];
  v4 = a2[1];
  v5 = a2[2];
  v6 = *a2;
  if (v4 >= v5) {
    v9 = 0;
  LABEL_3:
    v10 = 0;
    if (v4 >= v5) {
      goto LABEL_4;
    }
    goto LABEL_14;
  }
  v7 = v4 >> 3;
  v8 = a2[1] & 7;
  ++v4;
  LODWORD(v7) = *(unsigned __int8*)(v6 + v7);
  a2[1] = v4;
  v9 = 2 * (((unsigned int)v7 >> v8) & 1);
  if (v4 >= v5) {
    goto LABEL_3;
  }
  v26 = v4 >> 3;
  v27 = v4++ & 7;
  LODWORD(v26) = *(unsigned __int8*)(v6 + v26);
  a2[1] = v4;
  v10 = ((unsigned int)v26 >> v27) & 1;
  if (v4 >= v5) {
  LABEL_4:
    v11 = 0;
    v12 = v10 | v9;
    if (v4 >= v5) {
      goto LABEL_5;
    }
    goto LABEL_15;
  }
LABEL_14:
  v28 = v4 >> 3;
  v29 = v4++ & 7;
  LODWORD(v28) = *(unsigned __int8*)(v6 + v28);
  a2[1] = v4;
  v11 = 2 * (((unsigned int)v28 >> v29) & 1);
  v12 = v10 | v9;
  if (v4 >= v5) {
  LABEL_5:
    v13 = 0;
    v14 = v11 | (4 * v12);
    if (v4 >= v5) {
      goto LABEL_6;
    }
    goto LABEL_16;
  }
LABEL_15:
  v30 = v4 >> 3;
  v31 = v4++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v6 + v30);
  a2[1] = v4;
  v13 = ((unsigned int)v30 >> v31) & 1;
  v14 = v11 | (4 * v12);
  if (v4 >= v5) {
  LABEL_6:
    v15 = 0;
    v16 = v14 | v13;
    if (v4 >= v5) {
      goto LABEL_7;
    }
    goto LABEL_17;
  }
LABEL_16:
  v32 = v4 >> 3;
  v33 = v4++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v6 + v32);
  a2[1] = v4;
  v15 = 2 * (((unsigned int)v32 >> v33) & 1);
  v16 = v14 | v13;
  if (v4 >= v5) {
  LABEL_7:
    v17 = 0;
    v18 = v15 | (4 * v16);
    if (v4 >= v5) {
      goto LABEL_8;
    }
    goto LABEL_18;
  }
LABEL_17:
  v34 = v4 >> 3;
  v35 = v4++ & 7;
  LODWORD(v34) = *(unsigned __int8*)(v6 + v34);
  a2[1] = v4;
  v17 = ((unsigned int)v34 >> v35) & 1;
  v18 = v15 | (4 * v16);
  if (v4 >= v5) {
  LABEL_8:
    v19 = 0;
    v20 = v18 | v17;
    if (v4 >= v5) {
      goto LABEL_9;
    }
    goto LABEL_19;
  }
LABEL_18:
  v36 = v4 >> 3;
  v37 = v4++ & 7;
  LODWORD(v36) = *(unsigned __int8*)(v6 + v36);
  a2[1] = v4;
  v19 = 2 * (((unsigned int)v36 >> v37) & 1);
  v20 = v18 | v17;
  if (v4 >= v5) {
  LABEL_9:
    v21 = 0;
    v22 = v19 | (4 * v20);
    if (v4 >= v5) {
      goto LABEL_10;
    }
  LABEL_20:
    v40 = v4 >> 3;
    v41 = v4++ & 7;
    LODWORD(v40) = *(unsigned __int8*)(v6 + v40);
    a2[1] = v4;
    v23 = 2 * (((unsigned int)v40 >> v41) & 1);
    v24 = v22 | v21;
    if (v4 >= v5) {
      goto LABEL_11;
    }
    goto LABEL_21;
  }
LABEL_19:
  v38 = v4 >> 3;
  v39 = v4++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v6 + v38);
  a2[1] = v4;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v4 < v5) {
    goto LABEL_20;
  }
LABEL_10:
  v23 = 0;
  v24 = v22 | v21;
  if (v4 >= v5) {
  LABEL_11:
    v25 = 0;
    goto LABEL_22;
  }
LABEL_21:
  v42 = v4 >> 3;
  v43 = v4++ & 7;
  LODWORD(v42) = *(unsigned __int8*)(v6 + v42);
  a2[1] = v4;
  v25 = ((unsigned int)v42 >> v43) & 1;
LABEL_22:
  v44 = v23 | (4 * v24) | v25;
  if (v3 < v44) {
    return false;
  }
  if (v4 >= v5) {
    v48 = 0;
  LABEL_26:
    v49 = 0;
    if (v4 >= v5) {
      goto LABEL_27;
    }
    goto LABEL_47;
  }
  v46 = v4 >> 3;
  v47 = v4++ & 7;
  LODWORD(v46) = *(unsigned __int8*)(v6 + v46);
  a2[1] = v4;
  v48 = 2 * (((unsigned int)v46 >> v47) & 1);
  if (v4 >= v5) {
    goto LABEL_26;
  }
  v81 = v4 >> 3;
  v82 = v4++ & 7;
  LODWORD(v81) = *(unsigned __int8*)(v6 + v81);
  a2[1] = v4;
  v49 = ((unsigned int)v81 >> v82) & 1;
  if (v4 >= v5) {
  LABEL_27:
    v50 = 0;
    if (v4 >= v5) {
      goto LABEL_28;
    }
    goto LABEL_48;
  }
LABEL_47:
  v83 = v4 >> 3;
  v84 = v4++ & 7;
  LODWORD(v83) = *(unsigned __int8*)(v6 + v83);
  a2[1] = v4;
  v50 = 2 * (((unsigned int)v83 >> v84) & 1);
  if (v4 >= v5) {
  LABEL_28:
    v51 = 0;
    if (v4 >= v5) {
      goto LABEL_29;
    }
    goto LABEL_49;
  }
LABEL_48:
  v85 = v4 >> 3;
  v86 = v4++ & 7;
  LODWORD(v85) = *(unsigned __int8*)(v6 + v85);
  a2[1] = v4;
  v51 = ((unsigned int)v85 >> v86) & 1;
  if (v4 >= v5) {
  LABEL_29:
    v52 = 0;
    if (v4 >= v5) {
      goto LABEL_30;
    }
    goto LABEL_50;
  }
LABEL_49:
  v87 = v4 >> 3;
  v88 = v4++ & 7;
  LODWORD(v87) = *(unsigned __int8*)(v6 + v87);
  a2[1] = v4;
  v52 = 2 * (((unsigned int)v87 >> v88) & 1);
  if (v4 >= v5) {
  LABEL_30:
    v53 = 0;
    if (v4 >= v5) {
      goto LABEL_31;
    }
    goto LABEL_51;
  }
LABEL_50:
  v89 = v4 >> 3;
  v90 = v4++ & 7;
  LODWORD(v89) = *(unsigned __int8*)(v6 + v89);
  a2[1] = v4;
  v53 = ((unsigned int)v89 >> v90) & 1;
  if (v4 >= v5) {
  LABEL_31:
    v54 = 0;
    if (v4 >= v5) {
      goto LABEL_32;
    }
    goto LABEL_52;
  }
LABEL_51:
  v91 = v4 >> 3;
  v92 = v4++ & 7;
  LODWORD(v91) = *(unsigned __int8*)(v6 + v91);
  a2[1] = v4;
  v54 = 2 * (((unsigned int)v91 >> v92) & 1);
  if (v4 >= v5) {
  LABEL_32:
    v55 = 0;
    if (v4 >= v5) {
      goto LABEL_33;
    }
    goto LABEL_53;
  }
LABEL_52:
  v93 = v4 >> 3;
  v94 = v4++ & 7;
  LODWORD(v93) = *(unsigned __int8*)(v6 + v93);
  a2[1] = v4;
  v55 = ((unsigned int)v93 >> v94) & 1;
  if (v4 >= v5) {
  LABEL_33:
    v56 = 0;
    if (v4 >= v5) {
      goto LABEL_34;
    }
    goto LABEL_54;
  }
LABEL_53:
  v95 = v4 >> 3;
  v96 = v4++ & 7;
  LODWORD(v95) = *(unsigned __int8*)(v6 + v95);
  a2[1] = v4;
  v56 = 2 * (((unsigned int)v95 >> v96) & 1);
  if (v4 >= v5) {
  LABEL_34:
    v57 = 0;
    if (v4 >= v5) {
      goto LABEL_35;
    }
    goto LABEL_55;
  }
LABEL_54:
  v97 = v4 >> 3;
  v98 = v4++ & 7;
  LODWORD(v97) = *(unsigned __int8*)(v6 + v97);
  a2[1] = v4;
  v57 = ((unsigned int)v97 >> v98) & 1;
  if (v4 >= v5) {
  LABEL_35:
    v58 = 0;
    if (v4 >= v5) {
      goto LABEL_36;
    }
    goto LABEL_56;
  }
LABEL_55:
  v99 = v4 >> 3;
  v100 = v4++ & 7;
  LODWORD(v99) = *(unsigned __int8*)(v6 + v99);
  a2[1] = v4;
  v58 = 2 * (((unsigned int)v99 >> v100) & 1);
  if (v4 >= v5) {
  LABEL_36:
    v59 = 0;
    v60 = v49 | v48;
    if (v4 >= v5) {
      goto LABEL_37;
    }
    goto LABEL_57;
  }
LABEL_56:
  v101 = v4 >> 3;
  v102 = v4++ & 7;
  LODWORD(v101) = *(unsigned __int8*)(v6 + v101);
  a2[1] = v4;
  v59 = ((unsigned int)v101 >> v102) & 1;
  v60 = v49 | v48;
  if (v4 >= v5) {
  LABEL_37:
    v61 = 0;
    v62 = v50 | (4 * v60);
    v63 = v59 | v58;
    if (v4 >= v5) {
      goto LABEL_38;
    }
    goto LABEL_58;
  }
LABEL_57:
  v103 = v4 >> 3;
  v104 = v4++ & 7;
  LODWORD(v103) = *(unsigned __int8*)(v6 + v103);
  a2[1] = v4;
  v61 = 2 * (((unsigned int)v103 >> v104) & 1);
  v62 = v50 | (4 * v60);
  v63 = v59 | v58;
  if (v4 >= v5) {
  LABEL_38:
    v64 = 0;
    v65 = v61 | (4 * v63);
    v66 = v51 | v62;
    if (v4 >= v5) {
      goto LABEL_39;
    }
    goto LABEL_59;
  }
LABEL_58:
  v105 = v4 >> 3;
  v106 = v4++ & 7;
  LODWORD(v105) = *(unsigned __int8*)(v6 + v105);
  a2[1] = v4;
  v64 = ((unsigned int)v105 >> v106) & 1;
  v65 = v61 | (4 * v63);
  v66 = v51 | v62;
  if (v4 >= v5) {
  LABEL_39:
    v67 = 0;
    v68 = v52 | (4 * v66);
    v69 = v64 | v65;
    if (v4 >= v5) {
      goto LABEL_40;
    }
    goto LABEL_60;
  }
LABEL_59:
  v107 = v4 >> 3;
  v108 = v4++ & 7;
  LODWORD(v107) = *(unsigned __int8*)(v6 + v107);
  a2[1] = v4;
  v67 = 2 * (((unsigned int)v107 >> v108) & 1);
  v68 = v52 | (4 * v66);
  v69 = v64 | v65;
  if (v4 >= v5) {
  LABEL_40:
    v70 = 0;
    v71 = v67 | (4 * v69);
    v72 = v53 | v68;
    if (v4 >= v5) {
      goto LABEL_41;
    }
    goto LABEL_61;
  }
LABEL_60:
  v109 = v4 >> 3;
  v110 = v4++ & 7;
  LODWORD(v109) = *(unsigned __int8*)(v6 + v109);
  a2[1] = v4;
  v70 = ((unsigned int)v109 >> v110) & 1;
  v71 = v67 | (4 * v69);
  v72 = v53 | v68;
  if (v4 >= v5) {
  LABEL_41:
    v73 = 0;
    v74 = v54 | (4 * v72);
    v75 = v70 | v71;
    if (v4 >= v5) {
      goto LABEL_42;
    }
    goto LABEL_62;
  }
LABEL_61:
  v111 = v4 >> 3;
  v112 = v4++ & 7;
  LODWORD(v111) = *(unsigned __int8*)(v6 + v111);
  a2[1] = v4;
  v73 = 2 * (((unsigned int)v111 >> v112) & 1);
  v74 = v54 | (4 * v72);
  v75 = v70 | v71;
  if (v4 >= v5) {
  LABEL_42:
    v76 = v55 | v74;
    v77 = v73 | (4 * v75);
    if (v4 >= v5) {
      goto LABEL_43;
    }
    goto LABEL_63;
  }
LABEL_62:
  v113 = v4 >> 3;
  v114 = v4++ & 7;
  LODWORD(v113) = *(unsigned __int8*)(v6 + v113);
  a2[1] = v4;
  v76 = v55 | v74;
  v77 = ((unsigned int)v113 >> v114) & 1 | v73 | (4 * v75);
  if (v4 >= v5) {
  LABEL_43:
    v78 = a1[1];
    v79 = 2 * v77;
    v80 = v57 | v56 | (4 * v76);
    if (v78 >= v3) {
      goto LABEL_65;
    }
    goto LABEL_64;
  }
LABEL_63:
  v115 = *(unsigned __int8*)(v6 + (v4 >> 3));
  a2[1] = v4 + 1;
  v78 = a1[1];
  v79 = (v115 >> (v4 & 7)) & 1 | (2 * v77);
  v80 = v57 | v56 | (4 * v76);
  if (v78 < v3) {
  LABEL_64:
    v116 = (_WORD*)(*a1 + 4 * v78);
    *v116 = v80;
    v116[1] = v79;
    a1[1] = v78 + 1;
  }
LABEL_65:
  v117 = a3 + 8;
  v118 = 65529;
  v119 = 0;
  while (2) {
    if ((__int16)v118 < 1) {
      if ((__int16)v119 >= 1) {
        v120 = -v118;
        LOWORD(v121) = v119;
        goto LABEL_71;
      }
      if ((v118 & 0x8000) != 0) {
        v120 = -v119;
        v121 = -v118;
        goto LABEL_71;
      }
      if ((v119 & 0x8000) == 0) {
        LOWORD(v120) = 0;
        LOWORD(v121) = 0;
        goto LABEL_71;
      }
      goto LABEL_68;
    }
    LOWORD(v120) = v119;
    LOWORD(v121) = v118;
    if ((v119 & 0x8000) != 0) {
    LABEL_68:
      v121 = -v119;
      LOWORD(v120) = v118;
    }
  LABEL_71:
    v122 = *a3;
    v123 = (unsigned __int16)v120;
    v124 = (unsigned __int16)v121;
    v125 = 0;
    v126 = 0;
    v127 = v122;
    while (1) {
      v128 = &v117[16 * v126];
      v129 = (char)*v128;
      if (v123 >= v129) {
        if (v123 <= v129) {
          v130 = (char)v128[1];
          if (v124 < v130) {
            goto LABEL_73;
          }
          if (v124 <= v130) {
            break;
          }
        }
        v125 = v126;
        v126 = v127;
      }
    LABEL_73:
      v127 = v126;
      v126 = (unsigned __int64)(v126 + v125) >> 1;
      if (v125 == v126) {
        v132 = 0;
        v126 = 0;
        while (1) {
          v133 = &v117[16 * v126];
          v134 = (char)*v133;
          if (v134 <= 0) {
            if ((v134 & 0x80000000) == 0) {
              v135 = (char)v133[1];
              if (v135 > 1) {
                goto LABEL_81;
              }
              if (v135 == 1) {
                v131 = 0;
                goto LABEL_88;
              }
            }
            v132 = v126;
            v126 = v122;
          }
        LABEL_81:
          v122 = v126;
          v126 = (unsigned __int64)(v126 + v132) >> 1;
          if (v132 == v126) {
            v131 = *(a3 - 8);
            v126 = -1;
            goto LABEL_88;
          }
        }
      }
    }
    v131 = v129;
  LABEL_88:
    if (v123 != (unsigned __int16)v131) {
      return false;
    }
    v136 = &v117[16 * v126];
    if (v124 != (unsigned __int16)(char)v136[1]) {
      return false;
    }
    v137 = a2[1];
    v138 = a2[2];
    v139 = *a2;
    v140 = 0;
    while (2) {
      if (v137 >= v138) {
        v143 = 0;
      }
      else {
        v141 = v137 >> 3;
        v142 = v137++ & 7;
        LODWORD(v141) = *(unsigned __int8*)(v139 + v141);
        a2[1] = v137;
        v143 = ((unsigned int)v141 >> v142) & 1;
      }
      v144 = v136[2];
      v145 = *((_QWORD*)v136 + 1);
      v146 = v143 & 0xFFFFF001 | (2 * (v140 & 0x7FF));
      v147 = 0;
      v148 = 0;
      v149 = (v140 & 0xFFFFF000) + 4096;
      v140 = v146 | v149;
      v150 = (unsigned __int16)v149 >> 12;
    LABEL_97:
      v151 = *(unsigned __int16*)(v145 + 4 * v148 + 2);
      if (v150 < v151 >> 12) {
        goto LABEL_96;
      }
      if (v150 > v151 >> 12) {
        goto LABEL_95;
      }
      v152 = v151 & 0xFFF;
      if (v146 < v152) {
        goto LABEL_96;
      }
      if (v146 > v152) {
      LABEL_95:
        v147 = v148;
        v148 = v144;
      LABEL_96:
        v144 = v148;
        v148 = (v148 + v147) >> 1;
        if (v147 == v148) {
          continue;
        }
        goto LABEL_97;
      }
      break;
    }
    v153 = (char*)(v145 + 4 * v148);
    v154 = *v153;
    v155 = v153[1];
    if (v154 == 0) {
      if (v155 == 1) {
        if (v137 >= v138) {
          v159 = 0;
        LABEL_109:
          v160 = 0;
          if (v137 >= v138) {
            goto LABEL_110;
          }
        LABEL_127:
          v173 = v137 >> 3;
          v174 = v137++ & 7;
          LODWORD(v173) = *(unsigned __int8*)(v139 + v173);
          a2[1] = v137;
          v161 = 2 * (((unsigned int)v173 >> v174) & 1);
          if (v137 < v138) {
            goto LABEL_128;
          }
        LABEL_111:
          v162 = 0;
          if (v137 >= v138) {
            goto LABEL_112;
          }
        LABEL_129:
          v177 = v137 >> 3;
          v178 = v137++ & 7;
          LODWORD(v177) = *(unsigned __int8*)(v139 + v177);
          a2[1] = v137;
          v163 = 2 * (((unsigned int)v177 >> v178) & 1);
          if (v137 < v138) {
            goto LABEL_130;
          }
        LABEL_113:
          v164 = 0;
          if (v137 >= v138) {
            goto LABEL_114;
          }
        LABEL_131:
          v181 = v137 >> 3;
          v182 = v137++ & 7;
          LODWORD(v181) = *(unsigned __int8*)(v139 + v181);
          a2[1] = v137;
          v165 = 2 * (((unsigned int)v181 >> v182) & 1);
          if (v137 < v138) {
            goto LABEL_132;
          }
        LABEL_115:
          v166 = 0;
          if (v137 >= v138) {
            goto LABEL_116;
          }
        LABEL_133:
          v185 = v137 >> 3;
          v186 = v137++ & 7;
          LODWORD(v185) = *(unsigned __int8*)(v139 + v185);
          a2[1] = v137;
          v167 = 2 * (((unsigned int)v185 >> v186) & 1);
          if (v137 < v138) {
            goto LABEL_134;
          }
        LABEL_117:
          v168 = 0;
          if (v137 >= v138) {
            goto LABEL_118;
          }
        LABEL_135:
          v189 = v137 >> 3;
          v190 = v137++ & 7;
          LODWORD(v189) = *(unsigned __int8*)(v139 + v189);
          a2[1] = v137;
          v169 = 2 * (((unsigned int)v189 >> v190) & 1);
          if (v137 < v138) {
            goto LABEL_136;
          }
        LABEL_119:
          v170 = 0;
        }
        else {
          v157 = v137 >> 3;
          v158 = v137++ & 7;
          LODWORD(v157) = *(unsigned __int8*)(v139 + v157);
          a2[1] = v137;
          v159 = 2 * (((unsigned int)v157 >> v158) & 1);
          if (v137 >= v138) {
            goto LABEL_109;
          }
          v171 = v137 >> 3;
          v172 = v137++ & 7;
          LODWORD(v171) = *(unsigned __int8*)(v139 + v171);
          a2[1] = v137;
          v160 = ((unsigned int)v171 >> v172) & 1;
          if (v137 < v138) {
            goto LABEL_127;
          }
        LABEL_110:
          v161 = 0;
          if (v137 >= v138) {
            goto LABEL_111;
          }
        LABEL_128:
          v175 = v137 >> 3;
          v176 = v137++ & 7;
          LODWORD(v175) = *(unsigned __int8*)(v139 + v175);
          a2[1] = v137;
          v162 = ((unsigned int)v175 >> v176) & 1;
          if (v137 < v138) {
            goto LABEL_129;
          }
        LABEL_112:
          v163 = 0;
          if (v137 >= v138) {
            goto LABEL_113;
          }
        LABEL_130:
          v179 = v137 >> 3;
          v180 = v137++ & 7;
          LODWORD(v179) = *(unsigned __int8*)(v139 + v179);
          a2[1] = v137;
          v164 = ((unsigned int)v179 >> v180) & 1;
          if (v137 < v138) {
            goto LABEL_131;
          }
        LABEL_114:
          v165 = 0;
          if (v137 >= v138) {
            goto LABEL_115;
          }
        LABEL_132:
          v183 = v137 >> 3;
          v184 = v137++ & 7;
          LODWORD(v183) = *(unsigned __int8*)(v139 + v183);
          a2[1] = v137;
          v166 = ((unsigned int)v183 >> v184) & 1;
          if (v137 < v138) {
            goto LABEL_133;
          }
        LABEL_116:
          v167 = 0;
          if (v137 >= v138) {
            goto LABEL_117;
          }
        LABEL_134:
          v187 = v137 >> 3;
          v188 = v137++ & 7;
          LODWORD(v187) = *(unsigned __int8*)(v139 + v187);
          a2[1] = v137;
          v168 = ((unsigned int)v187 >> v188) & 1;
          if (v137 < v138) {
            goto LABEL_135;
          }
        LABEL_118:
          v169 = 0;
          if (v137 >= v138) {
            goto LABEL_119;
          }
        LABEL_136:
          v191 = *(unsigned __int8*)(v139 + (v137 >> 3));
          a2[1] = v137 + 1;
          v170 = (v191 >> (v137 & 7)) & 1;
        }
        v154 = (v163 | (4 * (v162 | v161 | (4 * (v160 | v159))))) + v164 - 32;
        v155 = (v169 | (4 * (v168 | v167 | (4 * (v166 | v165))))) + v170 - 32;
        if ((__int16)v118 < 1) {
          goto LABEL_138;
        }
      }
      else {
        v154 = 0;
        if ((__int16)v118 < 1) {
          goto LABEL_138;
        }
      }
    LABEL_103:
      if ((v119 & 0x8000) != 0) {
        goto LABEL_143;
      }
      v119 = v154;
      v154 = v155;
      v156 = a1[1];
      if (((unsigned __int16)v119 | (unsigned __int16)v155) == 0) {
        return v44 == v156;
      }
      goto LABEL_144;
    }
    if ((__int16)v118 >= 1) {
      goto LABEL_103;
    }
  LABEL_138:
    if ((__int16)v119 < 1) {
      if ((v118 & 0x8000) == 0) {
        if ((v119 & 0x8000) == 0) {
          v156 = a1[1];
          return v44 == v156;
        }
      LABEL_143:
        v119 = -v155;
        v156 = a1[1];
        if (((unsigned __int16)-(__int16)v155 | (unsigned __int16)v154) == 0) {
          return v44 == v156;
        }
        goto LABEL_144;
      }
      v119 = -v154;
      v154 = -v155;
      v156 = a1[1];
      if (((unsigned __int16)v119 | (unsigned __int16)-(__int16)v155) == 0) {
        return v44 == v156;
      }
    LABEL_144:
      if (v156 >= v3) {
        return false;
      }
      v79 += v154;
      v80 += v119;
      v192 = (_WORD*)(*a1 + 4 * v156);
      *v192 = v80;
      v192[1] = v79;
      v193 = v156 + 1;
      a1[1] = v156 + 1;
      if (v156 >= v44) {
        return false;
      }
      v118 = v154;
      if (((unsigned __int16)v119 | (unsigned __int16)v154) == 0) {
        v156 = v193;
        return v44 == v156;
      }
      continue;
    }
    break;
  }
  v154 = -v154;
  v119 = v155;
  v156 = a1[1];
  if (((unsigned __int16)v155 | (unsigned __int16)v154) != 0) {
    goto LABEL_144;
  }
  return v44 == v156;
}

bool SdkHr_755e80(_QWORD* a1, __int64* a2, unsigned __int8* a3,
                  __attribute__((swiftcall)) void (*a4)(PSEUDO_X8, __int16*))
{
  unsigned __int64 v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
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
  unsigned __int64 v29;
  unsigned __int64 v30;
  char v31;
  unsigned __int64 v32;
  char v33;
  unsigned __int64 v34;
  char v35;
  unsigned __int64 v36;
  char v37;
  unsigned __int64 v38;
  char v39;
  unsigned __int64 v40;
  char v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  char v45;
  unsigned __int64 v46;
  char v47;
  unsigned __int64 v49;
  char v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  unsigned int v64;
  int v65;
  int v66;
  unsigned int v67;
  int v68;
  int v69;
  unsigned int v70;
  int v71;
  int v72;
  unsigned int v73;
  int v74;
  int v75;
  unsigned int v76;
  int v77;
  int v78;
  int v79;
  unsigned int v80;
  int v81;
  unsigned __int64 v82;
  char v83;
  unsigned __int64 v84;
  char v85;
  unsigned __int64 v86;
  char v87;
  unsigned __int64 v88;
  char v89;
  unsigned __int64 v90;
  char v91;
  unsigned __int64 v92;
  char v93;
  unsigned __int64 v94;
  char v95;
  unsigned __int64 v96;
  char v97;
  unsigned __int64 v98;
  char v99;
  unsigned __int64 v100;
  char v101;
  unsigned __int64 v102;
  char v103;
  unsigned __int64 v104;
  char v105;
  unsigned __int64 v106;
  char v107;
  unsigned __int64 v108;
  char v109;
  unsigned __int64 v110;
  char v111;
  unsigned __int64 v112;
  char v113;
  unsigned __int64 v114;
  char v115;
  unsigned int v116;
  int v117;
  int v118;
  unsigned __int64 v119;
  unsigned __int8* v120;
  int v121;
  int v122;
  int v123;
  int v124;
  __int64 v125;
  int v126;
  int v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int8* v131;
  int v132;
  int v133;
  char v134;
  __int64 v135;
  unsigned __int8* v136;
  int v137;
  int v138;
  unsigned __int8* v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  int v143;
  unsigned __int64 v144;
  char v145;
  unsigned int v146;
  unsigned __int64 v147;
  __int64 v148;
  unsigned int v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  unsigned int v152;
  unsigned int v153;
  unsigned int v154;
  unsigned int v155;
  char* v156;
  int v157;
  int v158;
  unsigned __int64 v159;
  char v160;
  unsigned int v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  unsigned int v165;
  unsigned int v166;
  unsigned int v167;
  unsigned int v168;
  unsigned int v169;
  unsigned int v170;
  int v171;
  unsigned __int64 v172;
  char v173;
  unsigned __int64 v174;
  char v175;
  unsigned __int64 v176;
  char v177;
  unsigned __int64 v178;
  char v179;
  unsigned __int64 v180;
  char v181;
  unsigned __int64 v182;
  char v183;
  unsigned __int64 v184;
  char v185;
  unsigned __int64 v186;
  char v187;
  unsigned __int64 v188;
  char v189;
  unsigned __int64 v190;
  char v191;
  unsigned int v192;
  unsigned __int64 v193;
  _QWORD* v194;
  _WORD v196[2];
  __int16 v197;
  _BYTE v198[10];

  a1[1] = 0;
  v4 = a1[2];
  v8 = a2[1];
  v9 = a2[2];
  v10 = *a2;
  if (v8 >= v9) {
    v13 = 0;
  LABEL_3:
    v14 = 0;
    if (v8 >= v9) {
      goto LABEL_4;
    }
    goto LABEL_15;
  }
  v11 = v8 >> 3;
  v12 = a2[1] & 7;
  ++v8;
  LODWORD(v11) = *(unsigned __int8*)(v10 + v11);
  a2[1] = v8;
  v13 = 2 * (((unsigned int)v11 >> v12) & 1);
  if (v8 >= v9) {
    goto LABEL_3;
  }
  v30 = v8 >> 3;
  v31 = v8++ & 7;
  LODWORD(v30) = *(unsigned __int8*)(v10 + v30);
  a2[1] = v8;
  v14 = ((unsigned int)v30 >> v31) & 1;
  if (v8 >= v9) {
  LABEL_4:
    v15 = 0;
    v16 = v14 | v13;
    if (v8 >= v9) {
      goto LABEL_5;
    }
    goto LABEL_16;
  }
LABEL_15:
  v32 = v8 >> 3;
  v33 = v8++ & 7;
  LODWORD(v32) = *(unsigned __int8*)(v10 + v32);
  a2[1] = v8;
  v15 = 2 * (((unsigned int)v32 >> v33) & 1);
  v16 = v14 | v13;
  if (v8 >= v9) {
  LABEL_5:
    v17 = 0;
    v18 = v15 | (4 * v16);
    if (v8 >= v9) {
      goto LABEL_6;
    }
    goto LABEL_17;
  }
LABEL_16:
  v34 = v8 >> 3;
  v35 = v8++ & 7;
  LODWORD(v34) = *(unsigned __int8*)(v10 + v34);
  a2[1] = v8;
  v17 = ((unsigned int)v34 >> v35) & 1;
  v18 = v15 | (4 * v16);
  if (v8 >= v9) {
  LABEL_6:
    v19 = 0;
    v20 = v17 | v18;
    if (v8 >= v9) {
      goto LABEL_7;
    }
    goto LABEL_18;
  }
LABEL_17:
  v36 = v8 >> 3;
  v37 = v8++ & 7;
  LODWORD(v36) = *(unsigned __int8*)(v10 + v36);
  a2[1] = v8;
  v19 = 2 * (((unsigned int)v36 >> v37) & 1);
  v20 = v17 | v18;
  if (v8 >= v9) {
  LABEL_7:
    v21 = 0;
    v22 = v19 | (4 * v20);
    if (v8 >= v9) {
      goto LABEL_8;
    }
    goto LABEL_19;
  }
LABEL_18:
  v38 = v8 >> 3;
  v39 = v8++ & 7;
  LODWORD(v38) = *(unsigned __int8*)(v10 + v38);
  a2[1] = v8;
  v21 = ((unsigned int)v38 >> v39) & 1;
  v22 = v19 | (4 * v20);
  if (v8 >= v9) {
  LABEL_8:
    v23 = 0;
    v24 = v21 | v22;
    if (v8 >= v9) {
      goto LABEL_9;
    }
    goto LABEL_20;
  }
LABEL_19:
  v40 = v8 >> 3;
  v41 = v8++ & 7;
  LODWORD(v40) = *(unsigned __int8*)(v10 + v40);
  a2[1] = v8;
  v23 = 2 * (((unsigned int)v40 >> v41) & 1);
  v24 = v21 | v22;
  if (v8 >= v9) {
  LABEL_9:
    v25 = 0;
    v26 = v23 | (4 * v24);
    if (v8 >= v9) {
      goto LABEL_10;
    }
    goto LABEL_21;
  }
LABEL_20:
  v42 = v8 >> 3;
  v43 = v8++ & 7;
  LODWORD(v42) = *(unsigned __int8*)(v10 + v42);
  a2[1] = v8;
  v25 = ((unsigned int)v42 >> v43) & 1;
  v26 = v23 | (4 * v24);
  if (v8 >= v9) {
  LABEL_10:
    v27 = 0;
    v28 = v25 | v26;
    if (v8 >= v9) {
      goto LABEL_11;
    }
  LABEL_22:
    v46 = v8 >> 3;
    v47 = v8++ & 7;
    LODWORD(v46) = *(unsigned __int8*)(v10 + v46);
    a2[1] = v8;
    v29 = ((unsigned int)v46 >> v47) & 1 | v27 | (4 * v28);
    if (v4 >= v29) {
      goto LABEL_24;
    }
    return false;
  }
LABEL_21:
  v44 = v8 >> 3;
  v45 = v8++ & 7;
  LODWORD(v44) = *(unsigned __int8*)(v10 + v44);
  a2[1] = v8;
  v27 = 2 * (((unsigned int)v44 >> v45) & 1);
  v28 = v25 | v26;
  if (v8 < v9) {
    goto LABEL_22;
  }
LABEL_11:
  v29 = v27 | (4 * v28);
  if (v4 < v29) {
    return false;
  }
LABEL_24:
  if (v8 >= v9) {
    v51 = 0;
  LABEL_26:
    v52 = 0;
    if (v8 >= v9) {
      goto LABEL_27;
    }
    goto LABEL_46;
  }
  v49 = v8 >> 3;
  v50 = v8++ & 7;
  LODWORD(v49) = *(unsigned __int8*)(v10 + v49);
  a2[1] = v8;
  v51 = 2 * (((unsigned int)v49 >> v50) & 1);
  if (v8 >= v9) {
    goto LABEL_26;
  }
  v82 = v8 >> 3;
  v83 = v8++ & 7;
  LODWORD(v82) = *(unsigned __int8*)(v10 + v82);
  a2[1] = v8;
  v52 = ((unsigned int)v82 >> v83) & 1;
  if (v8 >= v9) {
  LABEL_27:
    v53 = 0;
    if (v8 >= v9) {
      goto LABEL_28;
    }
    goto LABEL_47;
  }
LABEL_46:
  v84 = v8 >> 3;
  v85 = v8++ & 7;
  LODWORD(v84) = *(unsigned __int8*)(v10 + v84);
  a2[1] = v8;
  v53 = 2 * (((unsigned int)v84 >> v85) & 1);
  if (v8 >= v9) {
  LABEL_28:
    v54 = 0;
    if (v8 >= v9) {
      goto LABEL_29;
    }
    goto LABEL_48;
  }
LABEL_47:
  v86 = v8 >> 3;
  v87 = v8++ & 7;
  LODWORD(v86) = *(unsigned __int8*)(v10 + v86);
  a2[1] = v8;
  v54 = ((unsigned int)v86 >> v87) & 1;
  if (v8 >= v9) {
  LABEL_29:
    v55 = 0;
    if (v8 >= v9) {
      goto LABEL_30;
    }
    goto LABEL_49;
  }
LABEL_48:
  v88 = v8 >> 3;
  v89 = v8++ & 7;
  LODWORD(v88) = *(unsigned __int8*)(v10 + v88);
  a2[1] = v8;
  v55 = 2 * (((unsigned int)v88 >> v89) & 1);
  if (v8 >= v9) {
  LABEL_30:
    v56 = 0;
    if (v8 >= v9) {
      goto LABEL_31;
    }
    goto LABEL_50;
  }
LABEL_49:
  v90 = v8 >> 3;
  v91 = v8++ & 7;
  LODWORD(v90) = *(unsigned __int8*)(v10 + v90);
  a2[1] = v8;
  v56 = ((unsigned int)v90 >> v91) & 1;
  if (v8 >= v9) {
  LABEL_31:
    v57 = 0;
    if (v8 >= v9) {
      goto LABEL_32;
    }
    goto LABEL_51;
  }
LABEL_50:
  v92 = v8 >> 3;
  v93 = v8++ & 7;
  LODWORD(v92) = *(unsigned __int8*)(v10 + v92);
  a2[1] = v8;
  v57 = 2 * (((unsigned int)v92 >> v93) & 1);
  if (v8 >= v9) {
  LABEL_32:
    v58 = 0;
    if (v8 >= v9) {
      goto LABEL_33;
    }
    goto LABEL_52;
  }
LABEL_51:
  v94 = v8 >> 3;
  v95 = v8++ & 7;
  LODWORD(v94) = *(unsigned __int8*)(v10 + v94);
  a2[1] = v8;
  v58 = ((unsigned int)v94 >> v95) & 1;
  if (v8 >= v9) {
  LABEL_33:
    v59 = 0;
    if (v8 >= v9) {
      goto LABEL_34;
    }
    goto LABEL_53;
  }
LABEL_52:
  v96 = v8 >> 3;
  v97 = v8++ & 7;
  LODWORD(v96) = *(unsigned __int8*)(v10 + v96);
  a2[1] = v8;
  v59 = 2 * (((unsigned int)v96 >> v97) & 1);
  if (v8 >= v9) {
  LABEL_34:
    v60 = 0;
    if (v8 >= v9) {
      goto LABEL_35;
    }
    goto LABEL_54;
  }
LABEL_53:
  v98 = v8 >> 3;
  v99 = v8++ & 7;
  LODWORD(v98) = *(unsigned __int8*)(v10 + v98);
  a2[1] = v8;
  v60 = ((unsigned int)v98 >> v99) & 1;
  if (v8 >= v9) {
  LABEL_35:
    v61 = 0;
    if (v8 >= v9) {
      goto LABEL_36;
    }
    goto LABEL_55;
  }
LABEL_54:
  v100 = v8 >> 3;
  v101 = v8++ & 7;
  LODWORD(v100) = *(unsigned __int8*)(v10 + v100);
  a2[1] = v8;
  v61 = 2 * (((unsigned int)v100 >> v101) & 1);
  if (v8 >= v9) {
  LABEL_36:
    v62 = 0;
    v63 = v52 | v51;
    if (v8 >= v9) {
      goto LABEL_37;
    }
    goto LABEL_56;
  }
LABEL_55:
  v102 = v8 >> 3;
  v103 = v8++ & 7;
  LODWORD(v102) = *(unsigned __int8*)(v10 + v102);
  a2[1] = v8;
  v62 = ((unsigned int)v102 >> v103) & 1;
  v63 = v52 | v51;
  if (v8 >= v9) {
  LABEL_37:
    v64 = 0;
    v65 = v53 | (4 * v63);
    v66 = v62 | v61;
    if (v8 >= v9) {
      goto LABEL_38;
    }
    goto LABEL_57;
  }
LABEL_56:
  v104 = v8 >> 3;
  v105 = v8++ & 7;
  LODWORD(v104) = *(unsigned __int8*)(v10 + v104);
  a2[1] = v8;
  v64 = 2 * (((unsigned int)v104 >> v105) & 1);
  v65 = v53 | (4 * v63);
  v66 = v62 | v61;
  if (v8 >= v9) {
  LABEL_38:
    v67 = 0;
    v68 = v64 | (4 * v66);
    v69 = v54 | v65;
    if (v8 >= v9) {
      goto LABEL_39;
    }
    goto LABEL_58;
  }
LABEL_57:
  v106 = v8 >> 3;
  v107 = v8++ & 7;
  LODWORD(v106) = *(unsigned __int8*)(v10 + v106);
  a2[1] = v8;
  v67 = ((unsigned int)v106 >> v107) & 1;
  v68 = v64 | (4 * v66);
  v69 = v54 | v65;
  if (v8 >= v9) {
  LABEL_39:
    v70 = 0;
    v71 = v55 | (4 * v69);
    v72 = v67 | v68;
    if (v8 >= v9) {
      goto LABEL_40;
    }
    goto LABEL_59;
  }
LABEL_58:
  v108 = v8 >> 3;
  v109 = v8++ & 7;
  LODWORD(v108) = *(unsigned __int8*)(v10 + v108);
  a2[1] = v8;
  v70 = 2 * (((unsigned int)v108 >> v109) & 1);
  v71 = v55 | (4 * v69);
  v72 = v67 | v68;
  if (v8 >= v9) {
  LABEL_40:
    v73 = 0;
    v74 = v70 | (4 * v72);
    v75 = v56 | v71;
    if (v8 >= v9) {
      goto LABEL_41;
    }
    goto LABEL_60;
  }
LABEL_59:
  v110 = v8 >> 3;
  v111 = v8++ & 7;
  LODWORD(v110) = *(unsigned __int8*)(v10 + v110);
  a2[1] = v8;
  v73 = ((unsigned int)v110 >> v111) & 1;
  v74 = v70 | (4 * v72);
  v75 = v56 | v71;
  if (v8 >= v9) {
  LABEL_41:
    v76 = 0;
    v77 = v57 | (4 * v75);
    v78 = v73 | v74;
    if (v8 >= v9) {
      goto LABEL_42;
    }
  LABEL_61:
    v114 = v8 >> 3;
    v115 = v8++ & 7;
    LODWORD(v114) = *(unsigned __int8*)(v10 + v114);
    a2[1] = v8;
    v79 = v58 | v77;
    v80 = ((unsigned int)v114 >> v115) & 1 | v76 | (4 * v78);
    if (v8 >= v9) {
      goto LABEL_43;
    }
  LABEL_62:
    v116 = *(unsigned __int8*)(v10 + (v8 >> 3));
    a2[1] = v8 + 1;
    v81 = (v116 >> (v8 & 7)) & 1;
    goto LABEL_63;
  }
LABEL_60:
  v112 = v8 >> 3;
  v113 = v8++ & 7;
  LODWORD(v112) = *(unsigned __int8*)(v10 + v112);
  a2[1] = v8;
  v76 = 2 * (((unsigned int)v112 >> v113) & 1);
  v77 = v57 | (4 * v75);
  v78 = v73 | v74;
  if (v8 < v9) {
    goto LABEL_61;
  }
LABEL_42:
  v79 = v58 | v77;
  v80 = v76 | (4 * v78);
  if (v8 < v9) {
    goto LABEL_62;
  }
LABEL_43:
  v81 = 0;
LABEL_63:
  v117 = v81 | (2 * v80);
  *(_WORD*)&v198[8] = 0;
  v118 = v60 | v59 | (4 * v79);
  v197 = v60 | v59 | (4 * v79);
  *(_QWORD*)v198 = (unsigned __int16)(v81 | (2 * v80));
  a4((void*)&v198[2], &v197);
  v119 = a1[1];
  if (v119 < v4) {
    *(_QWORD*)(*a1 + 8 * v119) = *(_QWORD*)&v198[2];
    a1[1] = v119 + 1;
  }
  v120 = a3 + 8;
  v121 = 65529;
  v122 = 0;
  do {
    if ((__int16)v121 < 1) {
      if ((__int16)v122 >= 1) {
        v123 = -v121;
        LOWORD(v124) = v122;
        goto LABEL_71;
      }
      if ((v121 & 0x8000) != 0) {
        v123 = -v122;
        v124 = -v121;
        goto LABEL_71;
      }
      if ((v122 & 0x8000) == 0) {
        LOWORD(v123) = 0;
        LOWORD(v124) = 0;
        goto LABEL_71;
      }
    LABEL_68:
      v124 = -v122;
      LOWORD(v123) = v121;
      goto LABEL_71;
    }
    LOWORD(v123) = v122;
    LOWORD(v124) = v121;
    if ((v122 & 0x8000) != 0) {
      goto LABEL_68;
    }
  LABEL_71:
    v125 = *a3;
    v126 = (unsigned __int16)v123;
    v127 = (unsigned __int16)v124;
    v128 = 0;
    v129 = 0;
    v130 = v125;
    while (1) {
      v131 = &v120[16 * v129];
      v132 = (char)*v131;
      if (v126 >= v132) {
        if (v126 <= v132) {
          v133 = (char)v131[1];
          if (v127 < v133) {
            goto LABEL_73;
          }
          if (v127 <= v133) {
            break;
          }
        }
        v128 = v129;
        v129 = v130;
      }
    LABEL_73:
      v130 = v129;
      v129 = (unsigned __int64)(v129 + v128) >> 1;
      if (v128 == v129) {
        v135 = 0;
        v129 = 0;
        while (1) {
          v136 = &v120[16 * v129];
          v137 = (char)*v136;
          if (v137 <= 0) {
            if ((v137 & 0x80000000) == 0) {
              v138 = (char)v136[1];
              if (v138 > 1) {
                goto LABEL_81;
              }
              if (v138 == 1) {
                v134 = 0;
                goto LABEL_88;
              }
            }
            v135 = v129;
            v129 = v125;
          }
        LABEL_81:
          v125 = v129;
          v129 = (unsigned __int64)(v129 + v135) >> 1;
          if (v135 == v129) {
            v134 = *(a3 - 8);
            v129 = -1;
            goto LABEL_88;
          }
        }
      }
    }
    v134 = v132;
  LABEL_88:
    if (v126 != (unsigned __int16)v134) {
      return false;
    }
    v139 = &v120[16 * v129];
    if (v127 != (unsigned __int16)(char)v139[1]) {
      return false;
    }
    v140 = a2[1];
    v141 = a2[2];
    v142 = *a2;
    v143 = 0;
    while (2) {
      if (v140 >= v141) {
        v146 = 0;
      }
      else {
        v144 = v140 >> 3;
        v145 = v140++ & 7;
        LODWORD(v144) = *(unsigned __int8*)(v142 + v144);
        a2[1] = v140;
        v146 = ((unsigned int)v144 >> v145) & 1;
      }
      v147 = v139[2];
      v148 = *((_QWORD*)v139 + 1);
      v149 = v146 & 0xFFFFF001 | (2 * (v143 & 0x7FF));
      v150 = 0;
      v151 = 0;
      v152 = (v143 & 0xFFFFF000) + 4096;
      v143 = v149 | v152;
      v153 = (unsigned __int16)v152 >> 12;
    LABEL_97:
      v154 = *(unsigned __int16*)(v148 + 4 * v151 + 2);
      if (v153 < v154 >> 12) {
        goto LABEL_96;
      }
      if (v153 > v154 >> 12) {
        goto LABEL_95;
      }
      v155 = v154 & 0xFFF;
      if (v149 < v155) {
        goto LABEL_96;
      }
      if (v149 > v155) {
      LABEL_95:
        v150 = v151;
        v151 = v147;
      LABEL_96:
        v147 = v151;
        v151 = (v151 + v150) >> 1;
        if (v150 == v151) {
          continue;
        }
        goto LABEL_97;
      }
      break;
    }
    v156 = (char*)(v148 + 4 * v151);
    v157 = *v156;
    v158 = v156[1];
    if (v157 == 0) {
      if (v158 == 1) {
        if (v140 >= v141) {
          v161 = 0;
        LABEL_109:
          v162 = 0;
          if (v140 >= v141) {
            goto LABEL_110;
          }
        LABEL_127:
          v174 = v140 >> 3;
          v175 = v140++ & 7;
          LODWORD(v174) = *(unsigned __int8*)(v142 + v174);
          a2[1] = v140;
          v163 = 2 * (((unsigned int)v174 >> v175) & 1);
          if (v140 < v141) {
            goto LABEL_128;
          }
        LABEL_111:
          v164 = 0;
          if (v140 >= v141) {
            goto LABEL_112;
          }
        LABEL_129:
          v178 = v140 >> 3;
          v179 = v140++ & 7;
          LODWORD(v178) = *(unsigned __int8*)(v142 + v178);
          a2[1] = v140;
          v165 = 2 * (((unsigned int)v178 >> v179) & 1);
          if (v140 < v141) {
            goto LABEL_130;
          }
        LABEL_113:
          v166 = 0;
          if (v140 >= v141) {
            goto LABEL_114;
          }
        LABEL_131:
          v182 = v140 >> 3;
          v183 = v140++ & 7;
          LODWORD(v182) = *(unsigned __int8*)(v142 + v182);
          a2[1] = v140;
          v167 = 2 * (((unsigned int)v182 >> v183) & 1);
          if (v140 < v141) {
            goto LABEL_132;
          }
        LABEL_115:
          v147 = 0;
          if (v140 >= v141) {
            goto LABEL_116;
          }
        LABEL_133:
          v186 = v140 >> 3;
          v187 = v140++ & 7;
          LODWORD(v186) = *(unsigned __int8*)(v142 + v186);
          a2[1] = v140;
          v168 = 2 * (((unsigned int)v186 >> v187) & 1);
          if (v140 < v141) {
            goto LABEL_134;
          }
        LABEL_117:
          v169 = 0;
          if (v140 >= v141) {
            goto LABEL_118;
          }
        LABEL_135:
          v190 = v140 >> 3;
          v191 = v140++ & 7;
          LODWORD(v190) = *(unsigned __int8*)(v142 + v190);
          a2[1] = v140;
          v170 = 2 * (((unsigned int)v190 >> v191) & 1);
          if (v140 < v141) {
            goto LABEL_136;
          }
        LABEL_119:
          v171 = 0;
        }
        else {
          v159 = v140 >> 3;
          v160 = v140++ & 7;
          LODWORD(v159) = *(unsigned __int8*)(v142 + v159);
          a2[1] = v140;
          v161 = 2 * (((unsigned int)v159 >> v160) & 1);
          if (v140 >= v141) {
            goto LABEL_109;
          }
          v172 = v140 >> 3;
          v173 = v140++ & 7;
          LODWORD(v172) = *(unsigned __int8*)(v142 + v172);
          a2[1] = v140;
          v162 = ((unsigned int)v172 >> v173) & 1;
          if (v140 < v141) {
            goto LABEL_127;
          }
        LABEL_110:
          v163 = 0;
          if (v140 >= v141) {
            goto LABEL_111;
          }
        LABEL_128:
          v176 = v140 >> 3;
          v177 = v140++ & 7;
          LODWORD(v176) = *(unsigned __int8*)(v142 + v176);
          a2[1] = v140;
          v164 = ((unsigned int)v176 >> v177) & 1;
          if (v140 < v141) {
            goto LABEL_129;
          }
        LABEL_112:
          v165 = 0;
          if (v140 >= v141) {
            goto LABEL_113;
          }
        LABEL_130:
          v180 = v140 >> 3;
          v181 = v140++ & 7;
          LODWORD(v180) = *(unsigned __int8*)(v142 + v180);
          a2[1] = v140;
          v166 = ((unsigned int)v180 >> v181) & 1;
          if (v140 < v141) {
            goto LABEL_131;
          }
        LABEL_114:
          v167 = 0;
          if (v140 >= v141) {
            goto LABEL_115;
          }
        LABEL_132:
          v184 = v140 >> 3;
          v185 = v140++ & 7;
          LODWORD(v184) = *(unsigned __int8*)(v142 + v184);
          a2[1] = v140;
          v147 = ((unsigned int)v184 >> v185) & 1;
          if (v140 < v141) {
            goto LABEL_133;
          }
        LABEL_116:
          v168 = 0;
          if (v140 >= v141) {
            goto LABEL_117;
          }
        LABEL_134:
          v188 = v140 >> 3;
          v189 = v140++ & 7;
          LODWORD(v188) = *(unsigned __int8*)(v142 + v188);
          a2[1] = v140;
          v169 = ((unsigned int)v188 >> v189) & 1;
          if (v140 < v141) {
            goto LABEL_135;
          }
        LABEL_118:
          v170 = 0;
          if (v140 >= v141) {
            goto LABEL_119;
          }
        LABEL_136:
          v192 = *(unsigned __int8*)(v142 + (v140 >> 3));
          a2[1] = v140 + 1;
          v171 = (v192 >> (v140 & 7)) & 1;
        }
        v157 = (v166 | v165 | (4 * (v164 | v163 | (4 * (v162 | v161))))) - 32;
        v158 = (v171 | v170 | (4 * (v169 | v168 | (4 * (v147 | v167))))) - 32;
        if ((__int16)v121 < 1) {
          goto LABEL_138;
        }
      }
      else {
        v157 = 0;
        if ((__int16)v121 < 1) {
          goto LABEL_138;
        }
      }
    LABEL_103:
      if ((v122 & 0x8000) == 0) {
        v122 = v157;
        v157 = v158;
        if (((unsigned __int16)v122 | (unsigned __int16)v158) == 0) {
          return v29 == a1[1];
        }
        goto LABEL_144;
      }
    LABEL_143:
      v122 = -v158;
      if (((unsigned __int16)-(__int16)v158 | (unsigned __int16)v157) == 0) {
        return v29 == a1[1];
      }
      goto LABEL_144;
    }
    if ((__int16)v121 >= 1) {
      goto LABEL_103;
    }
  LABEL_138:
    if ((__int16)v122 < 1) {
      if ((v121 & 0x8000) != 0) {
        v122 = -v157;
        v157 = -v158;
        if (((unsigned __int16)v122 | (unsigned __int16)-(__int16)v158) == 0) {
          return v29 == a1[1];
        }
        goto LABEL_144;
      }
      if ((v122 & 0x8000) == 0) {
        return v29 == a1[1];
      }
      goto LABEL_143;
    }
    v157 = -v157;
    v122 = v158;
    if (((unsigned __int16)v158 | (unsigned __int16)v157) == 0) {
      return v29 == a1[1];
    }
  LABEL_144:
    if (a1[1] >= v4) {
      return false;
    }
    v117 += v157;
    v118 += v122;
    *(_QWORD*)&v198[2] = 0;
    v196[0] = v118;
    v196[1] = v117;
    ((__attribute__((swiftcall)) void (*)(
        PSEUDO_X8, _WORD*, unsigned __int64))a4)((void*)&v198[2], v196, v147);
    v193 = a1[1];
    v194 = (_QWORD*)(*a1 + 8 * v193++);
    *v194 = *(_QWORD*)&v198[2];
    a1[1] = v193;
    if (v193 > v29) {
      return false;
    }
    v121 = v157;
  } while (((unsigned __int16)v122 | (unsigned __int16)v157) != 0);
  return v29 == a1[1];
}

__int64 SdkHr_756b20(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
  int v5;
  int v6;
  __int64 result;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 24) = a2 + 2048;
  *(_QWORD*)(a1 + 16) = 512;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 512;
  *(_QWORD*)(a1 + 48) = a2 + 4096;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 32;
  *(_QWORD*)(a1 + 72) = a2 + 4224;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 32;
  *(_QWORD*)(a1 + 120) = a2 + 4544;
  *(_QWORD*)(a1 + 96) = a2 + 4352;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 43;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 43;
  v6 = *a4;
  v5 = a4[1];
  *(_QWORD*)(a1 + 144) = 0x409CCCCD3E9C28F6LL;
  *(_QWORD*)(a1 + 152) = 0x12C0000002BLL;
  *(_QWORD*)(a1 + 160) = 0x4000004E2LL;
  *(_DWORD*)(a1 + 200) = v6;
  *(_DWORD*)(a1 + 204) = v5;
  *(_QWORD*)(a1 + 168) = 0xA00000003LL;
  *(_QWORD*)(a1 + 176) = 0x4500000000000000LL;
  *(_QWORD*)(a1 + 184) = 0x3CF5C28F3E4CCCCDLL;
  *(_QWORD*)(a1 + 192) = 0x30000000CLL;
  SdkRoutine_87ae20(a1 + 208, a1 + 144, a1, a1 + 24, a1 + 48, a1 + 72, a1 + 96,
                    a1 + 120);
  *(_DWORD*)(a1 + 392) = 0;
  result = SdkRoutine_87ac70(a1 + 400);
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  return result;
}

__int64 SdkHr_7576a0(__int64 result, __int64 a2, unsigned int* a3)
{
  int v3;
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  float v9;
  unsigned int v10;
  float v11;
  float v12;
  float v13;
  float v14;
  _BOOL4 v16;
  unsigned int v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float v28[7];
  _BOOL4 v29;

  v3 = *(_DWORD*)result;
  v4 = *(unsigned int*)(result + 4);
  v5 = *(_DWORD*)(result + 16);
  v6 = *(_DWORD*)(result + 20);
  v9 = *(float*)(result + 24);
  v10 = *(_DWORD*)(result + 8);
  v11 = *(float*)(result + 12);
  v12 = (float)(unsigned int)(v4 - 1);
  v13 = (float)((float)(1.0 / v12) * (float)v6) -
        (float)((float)((float)(1.0 / v12) * (float)v5) *
                (float)((float)(1.0 / v12) * (float)v5));
  v14 = sqrtf(v13);
  v16 = v13 <= 0.0 || v4 < 3;
  v29 = v16;
  while (1) {
    v19 = v11;
    if ((unsigned int)v4 >= a3[2]) {
      v20 = 0.0;
      if (!v29) {
        v20 = v14;
      }
      v21 = (float)(v20 * v12) / v9;
      if (v21 < *(float*)(a2 + 52)) {
        *(_DWORD*)(a2 + 24) = v3;
        *(_DWORD*)(a2 + 28) = v4;
        *(_DWORD*)(a2 + 32) = v10;
        *(float*)(a2 + 36) = v11;
        *(_DWORD*)(a2 + 40) = v5;
        *(_DWORD*)(a2 + 44) = v6;
        *(float*)(a2 + 48) = v9;
        *(float*)(a2 + 52) = v21;
      }
    }
    v22 = *(__int64**)(a2 + 8);
    v23 = v22[1];
    if (v23 == LODWORD(v11) || v4 - LODWORD(v11) + v23 < a3[2]) {
      return result;
    }
    ++LODWORD(v11);
    if ((_DWORD)v4 == 0) {
      v17 = 0;
      v18 = 0.0;
      goto LABEL_9;
    }
    v24 = *v22;
    v25 = *(unsigned int*)(*v22 + 4LL * v10);
    v26 = *(unsigned int*)(v24 + 4LL * LODWORD(v19));
    v17 = *(_DWORD*)(**(_QWORD**)(a2 + 16) + 4 * v26) -
          *(_DWORD*)(**(_QWORD**)(a2 + 16) + 4 * v25);
    if (v17 >= *a3 && v17 <= a3[1]) {
      v18 = fmaxf(
          (float)(*(float*)(**(_QWORD**)a2 + 4 * v25) +
                  (float)((float)((float)(*(float*)(**(_QWORD**)a2 + 4 * v26) -
                                          *(float*)(**(_QWORD**)a2 + 4 * v25)) *
                                  (float)(v17 >> 1)) /
                          (float)v17)) -
              *(float*)(**(_QWORD**)a2 +
                        4 * ((unsigned __int64)(v26 + v25) >> 1)),
          0.0);
    LABEL_9:
      v28[2] = v19;
      v28[3] = v11;
      LODWORD(v28[0]) = (1 << SLOBYTE(v19)) | v3;
      LODWORD(v28[1]) = v4 + 1;
      v28[6] = v9 + v18;
      LODWORD(v28[4]) = v17 + v5;
      LODWORD(v28[5]) = v6 + v17 * v17;
      result = SdkRoutine_87aec0(v28, a2, a3);
    }
  }
}

__int64 SdkHr_75fda0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = SdkData_e86d80;
  if (*(_BYTE*)(a1 + 328) == 1) {
    *(_QWORD*)a1 = SdkData_e86d80 + 16;
    SdkRoutine_858b60(a1 + 64);
    SdkRoutine_f3b00(a1, 0);
    SdkRoutine_858b80(a1 + 64);
    *(_BYTE*)(a1 + 328) = 0;
  }
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 16) = a1 + 72;
  SdkRoutine_85b140(a1 + 28);
  v3 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = v3;
  *(_QWORD*)(a1 + 48) = a1;
  *(_QWORD*)(v3 + 8) = v3 + 16;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL) = *(_QWORD*)(a1 + 16) + 32LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 40LL) = *(_QWORD*)(a1 + 16) + 48LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 56LL) = *(_QWORD*)(a1 + 16) + 64LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 72LL) = *(_QWORD*)(a1 + 16) + 80LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) = *(_QWORD*)(a1 + 16) + 96LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 104LL) = *(_QWORD*)(a1 + 16) + 112LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) = *(_QWORD*)(a1 + 16) + 128LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 136LL) = *(_QWORD*)(a1 + 16) + 144LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 152LL) = *(_QWORD*)(a1 + 16) + 160LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 168LL) = *(_QWORD*)(a1 + 16) + 176LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 184LL) = *(_QWORD*)(a1 + 16) + 192LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 200LL) = *(_QWORD*)(a1 + 16) + 208LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 216LL) = *(_QWORD*)(a1 + 16) + 224LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 232LL) = *(_QWORD*)(a1 + 16) + 240LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 248LL) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 184) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 248) = 0;
  *(_DWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 280) = 0;
  *(_DWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 56) = 16;
  *(_BYTE*)(a1 + 328) = 1;
  return a1;
}

__int64 SdkHr_760230(__int64 a1)
{
  __int64 result;

  result = SdkRoutine_859ab0(a1 + 40);
  if ((result & 1) != 0) {
    SdkRoutine_e3830(a1 + 8);
    SdkRoutine_858d40(&SdkData_1051408);
    SdkRoutine_859af0(SdkData_1051400, a1);
    return SdkRoutine_858d50(&SdkData_1051408);
  }
  return result;
}

_QWORD* SdkHr_7603c0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_1051408);
    v2 = SdkRoutine_859a90(SdkData_1051400, 48);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_1051408);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 16) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_DWORD*)(v2 + 40) = 1;
      *(_QWORD*)v2 = SdkData_e7cd38;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 32) = &SdkData_e7cea8;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_7604c0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_760770(a1 + 8, a2, 1152, *a3, 8LL * a3[1], 101);
}

__int64 SdkHr_7604e0(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                     unsigned __int16 a5)
{
  return SdkRoutine_760940(a1 + 8, *a2, 1152LL * a2[1], a3, a4, a5, 102);
}

__int64 SdkHr_760510(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4,
                     unsigned __int16 a5)
{
  return SdkRoutine_760940(a1 + 8, *a2, 1152LL * a2[1], a3, a4, a5, 103);
}

__int64 SdkHr_760580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     _QWORD* a6)
{
  return SdkRoutine_760d50(a1 + 8, a2, a3, a4, a5, *a6, 12LL * a6[1], 203);
}

__int64 SdkHr_760690(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                     unsigned __int16 a5, unsigned int a6)
{
  return SdkRoutine_761590(a1 + 8, a2 & 0xFFFFFFFFFFFFLL, a3 & 0xFFFFFFFFFFFFLL,
                           *a4, a4[1], a5, a6, 502);
}

_QWORD* SdkHr_761b40(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_1051408);
    v2 = SdkRoutine_859a90(SdkData_1051400, 48);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_1051408);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 16) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_DWORD*)(v2 + 40) = 1;
      *(_QWORD*)v2 = SdkData_e7cfd0;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 32) = &SdkData_e7d010;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_761bf0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = SdkRoutine_859ab0(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)SdkRoutine_859ac0(result);
      *v4 = 2;
      SdkRoutine_859ad0(v3, v4, 256);
      SdkRoutine_859ae0(v3);
    }
    SdkRoutine_858d40(&SdkData_1051408);
    SdkRoutine_859af0(SdkData_1051400, a1);
    return SdkRoutine_858d50(&SdkData_1051408);
  }
  return result;
}

_QWORD* SdkHr_761d10(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_1051408);
    v2 = SdkRoutine_859a90(SdkData_1051400, 32);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_1051408);
    if (v2 != 0) {
      *(_DWORD*)(v2 + 24) = 1;
      *(_QWORD*)v2 = SdkData_e7d1e0;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 16) = &SdkData_e7d258;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

_QWORD* SdkHr_761fa0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_1051408);
    v2 = SdkRoutine_859a90(SdkData_1051400, 48);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_1051408);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 16) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_DWORD*)(v2 + 40) = 1;
      *(_QWORD*)v2 = SdkData_e7d448;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 32) = &SdkData_e7d5c0;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_76d290(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = SdkRoutine_859ab0(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)SdkRoutine_859ac0(result);
      *v4 = 2;
      SdkRoutine_859ad0(v3, v4, 256);
      SdkRoutine_859ae0(v3);
    }
    SdkRoutine_858d40(&SdkData_10567d8);
    SdkRoutine_859af0(SdkData_10567d0, a1);
    return SdkRoutine_858d50(&SdkData_10567d8);
  }
  return result;
}

__int64 SdkHr_76d320(__int64 a1, __int64* a2, unsigned int a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  SdkRoutine_76d580(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_76d3c0(a1 + 8, &v9, a3, 0, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

_QWORD* SdkHr_76d580(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_10567d8);
    v2 = SdkRoutine_859a90(SdkData_10567d0, 32);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_10567d8);
    if (v2 != 0) {
      *(_DWORD*)(v2 + 24) = 1;
      *(_QWORD*)v2 = SdkData_e7d800;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 16) = &SdkData_e7d9b8;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_76d630(__int64 a1, __int64 a2, unsigned __int8 a3,
                     unsigned __int8 a4, unsigned int a5)
{
  return SdkRoutine_76d990(a1 + 8, a2, a3, a4, a5, 1);
}

__int64 SdkHr_76d650(__int64 a1, __int64 a2, unsigned __int8 a3,
                     unsigned __int8 a4, unsigned int a5)
{
  return SdkRoutine_76dac0(a1 + 8, a2, a3, a4, a5, 2);
}

__int64 SdkHr_76d6f0(__int64 a1, __int64 a2, unsigned __int8 a3, _QWORD* a4,
                     unsigned int a5)
{
  return SdkRoutine_76de40(a1 + 8, a2, a3, *a4, a4[1], a5, 40);
}

__int64 SdkHr_76d880(__int64 a1, __int64 a2, _QWORD* a3, unsigned __int8 a4)
{
  return SdkRoutine_76e380(a1 + 8, a2, *a3, a3[1], a4, 201);
}

__int64 SdkHr_76d910(__int64 a1, unsigned int a2)
{
  return SdkRoutine_76e940(a1 + 8, a2);
}

__int64 SdkHr_76ec80()
{
  SdkData_10567d0 = SdkRoutine_859a50(&SdkData_1056800, 0x4000, 0);
  return SdkRoutine_858d00(&SdkData_10567d8, 0, 0);
}

__int64 SdkHr_76f940(__int64 result)
{
  if (*(_BYTE*)(result + 48) == 1 && *(_BYTE*)(result + 40) != 0) {
    return SdkRoutine_85be70(result);
  }
  return result;
}

__int64 SdkHr_770010()
{
  SdkRoutine_2d0();
  SdkRoutine_2d0();
  return SdkRoutine_2d0();
}

int* SdkHr_778180(unsigned int a1, int* a2, unsigned __int64 a3)
{
  int v7;
  int* v8;
  int v9;
  int* v10;
  unsigned int v11;
  _BOOL4 v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _DWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  int* v32;
  __int64 i;

  if (a3 < 8) {
    return nullptr;
  }
  SdkRoutine_77a990((__int64)&SdkData_105aab4);
  v7 = SdkData_105aab0;
  v8 = SdkData_ea8f38;
  v9 = SdkData_ea8f34 << 8;
  *(SdkData_ea8f38 - 1) =
      (SdkData_ea8f34 << 8) | (SdkData_ea8f30 << 16) | SdkData_105aab0;
  v10 = v8 - 1;
  if (a3 >= 0x20) {
    if (a3 >= 0x40) {
      if (a3 >= 0x80) {
        v12 = a3 < 0x100;
        if (a3 >= 0x100) {
          v13 = 63;
        }
        else {
          v13 = 31;
        }
      }
      else {
        v12 = false;
        v13 = 15;
      }
    }
    else {
      v12 = false;
      v13 = 7;
    }
    v14 = a1;
    if (a3 < 0x40) {
      v12 = true;
    }
    SdkData_ea8f38 = a2 + 1;
    if (v12) {
      v15 = 3;
    }
    else {
      v15 = 1;
    }
    SdkData_ea8f30 = v13;
    SdkData_ea8f34 = v15;
    SdkData_105aab0 = 0;
    if (v13 == 7) {
      v16 = 0;
    }
    else {
      v17 = a2 + 4;
      v16 = 0;
      do {
        v18 = 0x5851F42D4C957F2DLL * v14 + 1;
        v16 += 8;
        v19 = HIDWORD(v18);
        v20 = 0x5851F42D4C957F2DLL * v18 + 1;
        v21 = HIDWORD(v20);
        v22 = 0x5851F42D4C957F2DLL * v20 + 1;
        *(v17 - 3) = v19;
        *(v17 - 2) = v21;
        v23 = HIDWORD(v22);
        v24 = 0x5851F42D4C957F2DLL * v22 + 1;
        v25 = HIDWORD(v24);
        v26 = 0x5851F42D4C957F2DLL * v24 + 1;
        *(v17 - 1) = v23;
        *v17 = v25;
        v27 = HIDWORD(v26);
        v28 = 0x5851F42D4C957F2DLL * v26 + 1;
        v29 = HIDWORD(v28);
        v30 = 0x5851F42D4C957F2DLL * v28 + 1;
        v17[1] = v27;
        v17[2] = v29;
        v31 = HIDWORD(v30);
        v14 = 0x5851F42D4C957F2DLL * v30 + 1;
        v17[3] = v31;
        v17[4] = HIDWORD(v14);
        v17 += 8;
      } while (v13 - 7LL != v16);
    }
    v32 = &a2[v16];
    for (i = 1; i != 8; ++i) {
      v14 = 0x5851F42D4C957F2DLL * v14 + 1;
      v32[i] = HIDWORD(v14);
    }
    v7 = 0;
    a2[1] |= 1u;
    v11 = v13 << 16;
    v9 = v15 << 8;
  }
  else {
    a2[1] = a1;
    v11 = 0;
    SdkData_ea8f30 = 0;
    SdkData_ea8f38 = a2 + 1;
  }
  *a2 = v9 | v11 | v7;
  SdkRoutine_77a9a0((__int64)&SdkData_105aab4);
  return v10;
}

__int64 SdkHr_7789c0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD* v6;
  int v7;
  _DWORD* v8;

  *(_QWORD*)(a1 + 72) = SdkRoutine_778820;
  v6 = (_DWORD*)SdkRoutine_857cc0(a1, a2);
  v7 = *v6;
  v8 = v6;
  if ((*(_BYTE*)a1 & 0x40) == 0 &&
      (unsigned int)SdkRoutine_8595c0(*(unsigned int*)(a1 + 120)) == 0) {
    *(_BYTE*)(a1 + 129) = -1;
  }
  *v8 = v7;
  return SdkRoutine_778820(a1, a2, a3);
}

__int64 SdkHr_779060(__int64 a1)
{
  __int64* v2;
  __int64 v3;

  SdkRoutine_778670(a1);
  v2 = (__int64*)SdkRoutine_779020();
  v3 = *v2;
  *(_QWORD*)(a1 + 112) = *v2;
  if (v3 != 0) {
    *(_QWORD*)(v3 + 104) = a1;
  }
  *v2 = a1;
  SdkRoutine_779050();
  return a1;
}

__int64 SdkHr_7798e0(int* a1, char* a2, __int64 a3)
{
  _QWORD* v4;
  char* v5;
  __int64 v8;
  bool v10;
  int v11;
  __int64 v12;
  _DWORD* v13;
  int v15;
  __int64 v17;
  __int64 v18;
  int v19;

  v4 = *((_QWORD**)a1 + 18);
  v5 = *((char**)a1 + 7);
  if (a2 != v5 && SdkHr_7798e0(a1, v5, *((_QWORD*)a1 + 5) - (_QWORD)v5) == -1) {
    return -1;
  }
  v8 = v4[1];
  v10 = v8 == 0 || (int)a3 < 1 || a2 == nullptr;
  if (v10) {
    *(_DWORD*)*v4 = 0;
  }
  else {
    v11 = 0;
    v12 = a3;
    do {
      while (1) {
        v15 = *a2;
        if (v15 < 0) {
          break;
        }
        v13 = (_DWORD*)*v4;
        ++a2;
        --v12;
        *v13 = v15;
        --v8;
        *v4 = v13 + 1;
        v4[1] = v8;
        if (v8 == 0 || (int)v12 <= 0) {
          goto LABEL_22;
        }
      }
      v11 = SdkRoutine_87b940(*v4, a2, v12);
      a2 += v11;
      v12 -= v11;
      v13 = (_DWORD*)*v4;
      v8 = v4[1] - 1LL;
      v10 = v4[1] == 1;
      *v4 += 4LL;
      v4[1] = v8;
    } while (!v10 && (int)v12 > 0);
  LABEL_22:
    v13[1] = 0;
    if (v11 < 0) {
      v19 = *a1;
      *((_QWORD*)a1 + 7) = 0;
      *((_QWORD*)a1 + 4) = 0;
      *((_QWORD*)a1 + 5) = 0;
      a3 = v11;
      *a1 = v19 | 0x20;
      return a3;
    }
  }
  v17 = *((_QWORD*)a1 + 11);
  v18 = v17 + *((_QWORD*)a1 + 12);
  *((_QWORD*)a1 + 7) = v17;
  *((_QWORD*)a1 + 4) = v18;
  *((_QWORD*)a1 + 5) = v17;
  return a3;
}

void SdkHr_77ad60(__int64 a1, __int64 a2, _DWORD* a3, _QWORD* a4, _QWORD* a5,
                  _QWORD* a6)
{
  *a3 = 0;
  *a4 = 0;
  if (a5 != nullptr) {
    *a5 = 0;
  }
  *a6 = &SdkData_cad77e;
}

char* SdkHr_77ada0(const char* a1, __int64* a2, int a3, int* a4, __int64 a5,
                   int a6)
{
  char* result;
  const char* v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  int v27;
  _QWORD* v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;

  result = nullptr;
  v9 = "%m/%d/%y";
  v10 = 48;
  v11 = 131112;
  switch (a3) {
  case '%':
    v36 = 1;
    result = "%";
    goto LABEL_85;
  case 'A':
    v39 = a4[6];
    if (v39 > 6) {
      goto LABEL_47;
    }
    v19 = v39 + 131079;
    goto LABEL_81;
  case 'B':
    v32 = a4[4];
    if (v32 > 0xB) {
      goto LABEL_47;
    }
    v19 = v32 + 131098;
    goto LABEL_81;
  case 'C':
    v14 = (a4[5] + 1900LL) / 100;
    goto LABEL_61;
  case 'D':
    goto LABEL_74;
  case 'F':
    v9 = "%Y-%m-%d";
    goto LABEL_74;
  case 'G':
  case 'g':
    v12 = a4[5];
    v13 = (unsigned int)a4[7];
    v14 = v12 + 1900;
    if ((int)v13 > 2) {
      if ((unsigned int)v13 >= 0x169) {
        v20 = a6;
        v21 = a3;
        v22 = (unsigned int)X8CALL_X0(
            _QWORD*, SdkRoutine_77b320((void*)(_QWORD*)v13, a4));
        a3 = v21;
        a6 = v20;
        if (v22 == 1) {
          v14 = v12 + 1901;
        }
        else {
          v14 = v12 + 1900;
        }
      }
    }
    else {
      v15 = a6;
      v16 = a3;
      v17 = (unsigned int)X8CALL_X0(_QWORD*,
                                    SdkRoutine_77b320((void*)(_QWORD*)v13, a4));
      a3 = v16;
      a6 = v15;
      if (v17 == 1) {
        v14 = v12 + 1900;
      }
      else {
        v14 = v12 + 1899;
      }
    }
    if (a3 == 103) {
      v10 = 48;
      v14 %= 100;
    LABEL_61:
      v23 = 2;
    }
    else {
      v10 = 48;
      v23 = 4;
    }
    goto LABEL_62;
  case 'H':
    v14 = a4[2];
    goto LABEL_61;
  case 'I':
    v40 = a4[2];
    v41 = v40 - 12;
    if ((int)v40 <= 12) {
      v41 = a4[2];
    }
    if ((_DWORD)v40 != 0) {
      v14 = v41;
    }
    else {
      v14 = 12;
    }
    v23 = 2;
    v10 = 48;
    goto LABEL_62;
  case 'M':
    v14 = a4[1];
    goto LABEL_61;
  case 'R':
    v9 = "%H:%M";
    goto LABEL_74;
  case 'S':
    v14 = *a4;
    goto LABEL_61;
  case 'T':
    v9 = "%H:%M:%S";
    goto LABEL_74;
  case 'U':
    v14 = (a4[7] - a4[6] + 7) / 7u;
    goto LABEL_61;
  case 'V':
    v37 = a6;
    v38 = (unsigned int)X8CALL_X0(_QWORD*,
                                  SdkRoutine_77b320((void*)"%m/%d/%y", a4));
    a6 = v37;
    v14 = v38;
    v10 = 48;
    goto LABEL_61;
  case 'W':
    v10 = 48;
    v14 = (a4[7] + 7 * ((a4[6] + 6) / 7u) - (a4[6] + 6) + 7) / 7;
    goto LABEL_61;
  case 'X':
    v11 = 131114;
    goto LABEL_73;
  case 'Y':
    v30 = a4[5];
    v14 = v30 + 1900;
    if ((int)v30 < 8100) {
      v23 = 4;
    LABEL_62:
      if (a6 != 0) {
        v43 = a6;
      }
      else {
        v43 = v10;
      }
      if (v43 == 95) {
        v31 = SdkRoutine_858b30(a1, 100, "%*lld", v23, v14);
      }
      else if (v43 == 45) {
        v31 = SdkRoutine_858b30(a1, 100, "%lld", v14);
      }
      else {
        v31 = SdkRoutine_858b30(a1, 100, "%0*lld", v23, v14);
      }
    }
    else {
      v31 = SdkRoutine_858b30(a1, 100, "+%lld", v14);
    }
    goto LABEL_70;
  case 'Z':
    if (a4[8] < 0) {
      goto LABEL_78;
    }
    v42 = SdkRoutine_87b9a0(a4);
    goto LABEL_82;
  case 'a':
    v25 = a4[6];
    if (v25 > 6) {
      goto LABEL_47;
    }
    v19 = v25 | 0x20000;
    goto LABEL_81;
  case 'b':
  case 'h':
    v18 = a4[4];
    if (v18 > 0xB) {
    LABEL_47:
      a1 = "-";
    }
    else {
      v19 = v18 + 131086;
    LABEL_81:
      v42 = SdkRoutine_87b9c0(v19, a5);
    LABEL_82:
      a1 = (const char*)v42;
    }
    v36 = SdkRoutine_857e60(a1);
    goto LABEL_84;
  case 'c':
    goto LABEL_73;
  case 'd':
    goto LABEL_20;
  case 'e':
    v10 = 95;
  LABEL_20:
    v14 = a4[3];
    goto LABEL_61;
  case 'j':
    v44 = a4[7];
    v23 = 3;
    v14 = v44 + 1;
    goto LABEL_62;
  case 'm':
    v14 = a4[4] + 1LL;
    goto LABEL_61;
  case 'n':
    *a2 = 1;
    return "\n";
  case 'p':
    if (a4[2] <= 11) {
      v19 = 131110;
    }
    else {
      v19 = 131111;
    }
    goto LABEL_81;
  case 'r':
    v11 = 131115;
    goto LABEL_73;
  case 's':
    v27 = a6;
    v29 = X8CALL_X0(_QWORD*, SdkRoutine_7a89b0((void*)"%m/%d/%y", a4));
    a6 = v27;
    v10 = 48;
    v23 = 1;
    v14 = (__int64)v29 - *((_QWORD*)a4 + 5);
    goto LABEL_62;
  case 't':
    v36 = 1;
    result = "\t";
    goto LABEL_85;
  case 'u':
    v26 = a4[6];
    v23 = 1;
    if (v26 == 0) {
      v26 = 7;
    }
    v14 = v26;
    goto LABEL_62;
  case 'w':
    v14 = a4[6];
    v23 = 1;
    goto LABEL_62;
  case 'x':
    v11 = 131113;
  LABEL_73:
    v9 = (const char*)SdkRoutine_87b9c0(v11, a5);
  LABEL_74:
    v45 = SdkRoutine_77b500(a1, 100, v9);
    *a2 = v45;
    if (v45 != 0) {
      return (char*)a1;
    }
    else {
      return nullptr;
    }
  case 'y':
    v24 = (a4[5] + 1900LL) % 100;
    v10 = 48;
    if (v24 >= 0) {
      v14 = (a4[5] + 1900LL) % 100;
    }
    else {
      v14 = -v24;
    }
    goto LABEL_61;
  case 'z':
    if (a4[8] < 0) {
    LABEL_78:
      *a2 = 0;
      return &SdkData_bbbd5c;
    }
    else {
      v33 = *((_QWORD*)a4 + 5);
      v34 = v33 / 3600;
      v35 = SdkRoutine_87b9b0((unsigned int)(v33 % 3600));
      v31 = SdkRoutine_858b30(a1, 100, "%+.2ld%.2d", v34, v35 / 60);
    LABEL_70:
      v36 = v31;
    LABEL_84:
      result = (char*)a1;
    LABEL_85:
      *a2 = v36;
    }
    return result;
  default:
    return result;
  }
}

unsigned __int64 SdkHr_77e440(_QWORD* a1, int a2)
{
  unsigned __int8* v2;
  unsigned int v5;
  _BOOL4 v6;
  unsigned __int8* v7;
  unsigned int v8;
  unsigned __int64 result;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned __int8* v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned __int8* v19;
  unsigned __int8* v20;

  v2 = (unsigned __int8*)a1[1];
  if (v2 == (unsigned __int8*)a1[22]) {
    v5 = SdkRoutine_78ead0(a1);
    v6 = v5 == 45;
    if (v5 == 43) {
      goto LABEL_6;
    }
  }
  else {
    a1[1] = v2 + 1;
    v5 = *v2;
    v6 = v5 == 45;
    if (v5 == 43) {
      goto LABEL_6;
    }
  }
  if (v5 != 45) {
    v8 = v5 - 58;
    v6 = false;
    goto LABEL_14;
  }
LABEL_6:
  v7 = (unsigned __int8*)a1[1];
  if (v7 == (unsigned __int8*)a1[22]) {
    v5 = SdkRoutine_78ead0(a1);
    v8 = v5 - 58;
    if (a2 == 0) {
      goto LABEL_14;
    }
  }
  else {
    a1[1] = v7 + 1;
    v5 = *v7;
    v8 = v5 - 58;
    if (a2 == 0) {
      goto LABEL_14;
    }
  }
  if (v8 <= 0xFFFFFFF5) {
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      --a1[1];
    }
    goto LABEL_15;
  }
LABEL_14:
  if (v8 < 0xFFFFFFF6) {
  LABEL_15:
    result = 0x8000000000000000LL;
    if ((a1[23] & 0x8000000000000000LL) == 0) {
      --a1[1];
    }
    return result;
  }
  if (v5 - 48 > 9) {
    v15 = 0;
  }
  else {
    v10 = 0;
    do {
      v14 = (unsigned __int8*)a1[1];
      if (v14 == (unsigned __int8*)a1[22]) {
        v11 = SdkRoutine_78ead0(a1);
      }
      else {
        a1[1] = v14 + 1;
        v11 = *v14;
      }
      v12 = v5 + 10 * v10;
      v5 = v11;
      v10 = v12 - 48;
    } while (v11 - 48 <= 9 && v10 < 214748364);
    v15 = v10;
    if (v11 - 48 <= 9) {
      do {
        v19 = (unsigned __int8*)a1[1];
        if (v19 == (unsigned __int8*)a1[22]) {
          v16 = SdkRoutine_78ead0(a1);
        }
        else {
          a1[1] = v19 + 1;
          v16 = *v19;
        }
        v17 = 10 * v15 + v11;
        v11 = v16;
        v15 = v17 - 48;
      } while (v16 - 48 <= 9 && v15 < 0x147AE147AE147AELL);
      if (v16 - 48 <= 9) {
        do {
          while (1) {
            v20 = (unsigned __int8*)a1[1];
            if (v20 != (unsigned __int8*)a1[22]) {
              break;
            }
            if ((unsigned int)SdkRoutine_78ead0(a1) - 48 >= 0xA) {
              goto LABEL_44;
            }
          }
          a1[1] = v20 + 1;
        } while ((unsigned int)*v20 - 48 < 0xA);
      }
    }
  }
LABEL_44:
  if ((a1[23] & 0x8000000000000000LL) == 0) {
    --a1[1];
  }
  if (v6) {
    return -v15;
  }
  else {
    return v15;
  }
}

unsigned __int64 SdkHr_787ac0(unsigned __int64 result, __int64 a2, char a3,
                              __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  int* v12;
  _QWORD* v13;
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
  int* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned int* v30;
  __int64 v31;
  __int64* v32;
  unsigned int v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  unsigned int v37;
  _QWORD* v38;
  unsigned int* v39;
  __int64 v40;
  __int64* v41;
  unsigned int v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  unsigned int* v46;
  __int64 v47;
  __int64* v48;
  unsigned int v49;
  __int64 v50;
  __int64* v51;

  LODWORD(v6) = 0;
  if ((a3 & 8) != 0 || a6 < 0) {
    goto LABEL_56;
  }
  v7 = *(unsigned int*)(a4 + 52);
  if ((_DWORD)v7 == 0 || result == 0) {
    LODWORD(v6) = 0;
    goto LABEL_56;
  }
  v9 = *(_QWORD*)(a4 + 32);
  v10 = *(_DWORD*)(a4 + 80);
  v11 = result - 1;
  if (result - 1 >= (unsigned int)(v7 - 1)) {
    v11 = (unsigned int)(v7 - 1);
  }
  if (v11 == 0) {
    v23 = 0;
    goto LABEL_34;
  }
  v12 = (int*)(v9 + 20);
  v13 = (_QWORD*)(a2 + 16);
  v14 = 0;
  do {
    v15 = *(v12 - 5);
    v16 = a6;
    if ((_DWORD)v15 == v10) {
      v17 = *(v12 - 4);
      *(v13 - 2) = a6;
      v18 = a6;
      if ((_DWORD)v17 == v10) {
        goto LABEL_17;
      }
    }
    else {
      v16 = *(_QWORD*)(a5 + 8 * v15);
      v17 = *(v12 - 4);
      *(v13 - 2) = v16;
      v18 = a6;
      if ((_DWORD)v17 == v10) {
      LABEL_17:
        *(v13 - 1) = v18;
        if (v16 == -1) {
          goto LABEL_26;
        }
        goto LABEL_21;
      }
    }
    v18 = *(_QWORD*)(a5 + 8 * v17);
    *(v13 - 1) = v18;
    if (v16 != -1) {
    LABEL_21:
      if (v18 != -1) {
        v19 = *(v12 - 1);
        v20 = a6;
        if ((_DWORD)v19 == v10) {
          goto LABEL_23;
        }
        goto LABEL_27;
      }
    }
  LABEL_26:
    *(v13 - 2) = -1;
    *(v13 - 1) = -1;
    v19 = *(v12 - 1);
    v20 = a6;
    if ((_DWORD)v19 == v10) {
    LABEL_23:
      v21 = *v12;
      *v13 = v20;
      v22 = a6;
      if ((_DWORD)v21 == v10) {
        goto LABEL_24;
      }
      goto LABEL_28;
    }
  LABEL_27:
    v20 = *(_QWORD*)(a5 + 8 * v19);
    v21 = *v12;
    *v13 = v20;
    v22 = a6;
    if ((_DWORD)v21 == v10) {
    LABEL_24:
      v13[1] = v22;
      if (v20 == -1) {
        goto LABEL_13;
      }
      goto LABEL_29;
    }
  LABEL_28:
    v22 = *(_QWORD*)(a5 + 8 * v21);
    v13[1] = v22;
    if (v20 == -1) {
      goto LABEL_13;
    }
  LABEL_29:
    if (v22 == -1) {
    LABEL_13:
      *v13 = -1;
      v13[1] = -1;
    }
    v14 -= 2;
    v12 += 8;
    v13 += 4;
  } while (-(__int64)((v11 + 1) & 0xFFFFFFFFFFFFFFFELL) != v14);
  v23 = -v14;
  if ((v11 & 1) != 0) {
  LABEL_41:
    if (v7 >= result) {
      v29 = result;
    }
    else {
      v29 = v7;
    }
    if (v29 == 1) {
      goto LABEL_45;
    }
  LABEL_64:
    v6 = 0;
    do {
      v39 = *(unsigned int**)(v9 + 16 * v6 + 8);
      if (v39 != nullptr) {
        v40 = *v39;
        if ((v40 & 0x80000000) == 0) {
          v41 = (__int64*)(a2 + 16 * v6);
          v42 = 1;
          v43 = *v41;
          do {
            v44 = (__int64*)(a2 + 16 * v40);
            if (v43 < *v44 || v41[1] > v44[1]) {
              v43 = -1;
              *v41 = -1;
              v41[1] = -1;
            }
            v40 = v39[v42++];
          } while ((v40 & 0x80000000) == 0);
        }
      }
      v45 = (16 * v6) | 0x10;
      v46 = *(unsigned int**)(v9 + v45 + 8);
      if (v46 != nullptr) {
        v47 = *v46;
        if ((v47 & 0x80000000) == 0) {
          v48 = (__int64*)(a2 + v45);
          v49 = 1;
          v50 = *v48;
          do {
            v51 = (__int64*)(a2 + 16 * v47);
            if (v50 < *v51 || v48[1] > v51[1]) {
              v50 = -1;
              *v48 = -1;
              v48[1] = -1;
            }
            v47 = v46[v49++];
          } while ((v47 & 0x80000000) == 0);
        }
      }
      v6 += 2;
    } while (v6 != (v29 & 0xFFFFFFFE));
    goto LABEL_46;
  }
LABEL_34:
  v24 = (int*)(v9 + 16 * v23);
  v25 = a6;
  v26 = *v24;
  if ((_DWORD)v26 == v10) {
    v27 = (_QWORD*)(a2 + 16 * v23);
    v28 = v24[1];
    *v27 = a6;
    if ((_DWORD)v28 == v10) {
      goto LABEL_36;
    }
  LABEL_39:
    a6 = *(_QWORD*)(a5 + 8 * v28);
    v27[1] = a6;
    if (v25 != -1) {
      goto LABEL_40;
    }
  }
  else {
    v25 = *(_QWORD*)(a5 + 8 * v26);
    v27 = (_QWORD*)(a2 + 16 * v23);
    v28 = v24[1];
    *v27 = v25;
    if ((_DWORD)v28 != v10) {
      goto LABEL_39;
    }
  LABEL_36:
    v27[1] = a6;
    if (v25 != -1) {
    LABEL_40:
      if (a6 != -1) {
        goto LABEL_41;
      }
    }
  }
  *v27 = -1;
  v27[1] = -1;
  if (v7 >= result) {
    v29 = result;
  }
  else {
    v29 = v7;
  }
  if (v29 != 1) {
    goto LABEL_64;
  }
LABEL_45:
  v6 = 0;
LABEL_46:
  if ((v29 & 1) != 0) {
    v30 = *(unsigned int**)(v9 + 16 * v6 + 8);
    if (v30 != nullptr) {
      v31 = *v30;
      if ((v31 & 0x80000000) == 0) {
        v32 = (__int64*)(a2 + 16 * v6);
        v33 = 1;
        v34 = *v32;
        do {
          v35 = (__int64*)(a2 + 16 * v31);
          if (v34 < *v35 || v32[1] > v35[1]) {
            v34 = -1;
            *v32 = -1;
            v32[1] = -1;
          }
          v31 = v30[v33++];
        } while ((v31 & 0x80000000) == 0);
      }
    }
    LODWORD(v6) = v6 + 1;
  }
LABEL_56:
  v36 = (unsigned int)v6;
  if (result > (unsigned int)v6) {
    v37 = v6 + 1;
    do {
      v38 = (_QWORD*)(a2 + 16 * v36);
      *v38 = -1;
      v38[1] = -1;
      v36 = v37++;
    } while (result > v36);
  }
  return result;
}

unsigned __int64 SdkHr_78da80(unsigned __int64 result, unsigned __int8 a2,
                              __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  __int64 v7;
  int v8;

  if ((result & 7) != 0 && *(unsigned __int8*)result != a2) {
    v3 = result & 0xFFFFFFFFFFFFFFF8LL;
    v4 = result++;
    v5 = v3 + 8;
    if ((result & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 2;
    if (((v4 + 2) & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 3;
    if (((v4 + 3) & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 4;
    if (((v4 + 4) & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 5;
    if (((v4 + 5) & 7) == 0) {
      goto LABEL_19;
    }
    if (*(unsigned __int8*)result == a2) {
      goto LABEL_20;
    }
    result = v4 + 6;
    if (((v4 + 6) & 7) == 0) {
    LABEL_19:
      result = v5;
      goto LABEL_20;
    }
    if (*(unsigned __int8*)result != a2) {
      v6 = (unsigned __int8*)(v4 + 7);
      result = v5;
      if (((unsigned __int8)v6 & 7) != 0) {
        if (*v6 == a2) {
          result = (unsigned __int64)v6;
        }
        else {
          result = v5;
        }
      }
    }
  }
LABEL_20:
  if (a3 != 0 && *(unsigned __int8*)result != a2) {
    result -= 9LL;
    do {
      v7 = *(_QWORD*)(result + 9);
      result += 8LL;
    } while ((~((0x101010101010100LL - (v7 ^ (0x101010101010101LL * a2))) |
                v7 ^ (0x101010101010101LL * a2)) &
              0x8080808080808080LL) == 0);
    do {
      v8 = *(unsigned __int8*)++result;
    } while (v8 != a2);
  }
  return result;
}

_DWORD* SdkHr_78dbc0(_DWORD* result, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  char* v5;
  _BYTE* v6;
  _BYTE* v7;
  _BYTE* v8;
  __int64 v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int v15;
  __int16 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int* v26;
  unsigned int v27;
  unsigned __int64 v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  unsigned int* v32;
  unsigned int v33;
  unsigned __int64 v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  unsigned int* v38;
  unsigned int v39;
  unsigned __int64 v40;
  unsigned int v41;
  int v42;

  v3 = -a2;
  v4 = -a2 & 7;
  if (a3 <= v4) {
    v5 = (char*)a2;
    v6 = result;
    if (a3 == 0) {
      return result;
    }
    goto LABEL_16;
  }
  v5 = (char*)a2;
  v6 = result;
  if (v4 != 0) {
    v7 = (_BYTE*)a2;
    v8 = result;
    if ((v3 & 4) != 0) {
      v7 = (_BYTE*)(a2 + 4);
      *result = *(_DWORD*)a2;
      v8 = result + 1;
      if ((v3 & 2) == 0) {
      LABEL_5:
        if ((v3 & 1) == 0) {
        LABEL_7:
          v6 = (char*)result + v4;
          v5 = (char*)(a2 + v4);
          a3 -= v4;
          goto LABEL_8;
        }
      LABEL_6:
        *v8 = *v7;
        goto LABEL_7;
      }
    }
    else if ((v3 & 2) == 0) {
      goto LABEL_5;
    }
    v21 = *(_WORD*)v7;
    v7 += 2;
    *(_WORD*)v8 = v21;
    v8 += 2;
    if ((v3 & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_8:
  if (((unsigned __int8)v6 & 7) != 0) {
    if (a3 >= 0x20) {
      if (((unsigned __int8)v6 & 3u) > 1uLL) {
        if (((unsigned __int8)v6 & 3) == 2) {
          v25 = *(_DWORD*)v5;
          a3 -= 2LL;
          v26 = (unsigned int*)(v4 + a2 + 8);
          *(_WORD*)v6 = v25;
          v6 += 2;
          do {
            v27 = *v26;
            a3 -= 16LL;
            HIDWORD(v28) = *(v26 - 1);
            LODWORD(v28) = v25;
            v29 = v26[1];
            v25 = v26[2];
            v30 = *(_QWORD*)(v26 - 1) >> 16;
            v26 += 4;
            *(_DWORD*)v6 = v28 >> 16;
            *((_DWORD*)v6 + 1) = v30;
            *((_DWORD*)v6 + 2) = __PAIR64__(v29, v27) >> 16;
            *((_DWORD*)v6 + 3) = __PAIR64__(v25, v29) >> 16;
            v6 += 16;
          } while (a3 > 0x11);
          v5 = (char*)v26 - 6;
        }
        else {
          v37 = *(_DWORD*)v5;
          --a3;
          v38 = (unsigned int*)(v4 + a2 + 8);
          *v6++ = v37;
          do {
            v39 = *v38;
            a3 -= 16LL;
            HIDWORD(v40) = *(v38 - 1);
            LODWORD(v40) = v37;
            v41 = v38[1];
            v37 = v38[2];
            v42 = *(_QWORD*)(v38 - 1) >> 8;
            v38 += 4;
            *(_DWORD*)v6 = v40 >> 8;
            *((_DWORD*)v6 + 1) = v42;
            *((_DWORD*)v6 + 2) = __PAIR64__(v41, v39) >> 8;
            *((_DWORD*)v6 + 3) = __PAIR64__(v37, v41) >> 8;
            v6 += 16;
          } while (a3 > 0x12);
          v5 = (char*)v38 - 7;
        }
        goto LABEL_16;
      }
      if (((unsigned __int8)v6 & 3) != 0) {
        v31 = *(_DWORD*)v5;
        a3 -= 3LL;
        v32 = (unsigned int*)(v4 + a2 + 8);
        *(_WORD*)v6 = v31;
        v6[2] = BYTE2(v31);
        v6 += 3;
        do {
          v33 = *v32;
          a3 -= 16LL;
          HIDWORD(v34) = *(v32 - 1);
          LODWORD(v34) = v31;
          v35 = v32[1];
          v31 = v32[2];
          v36 = *(_QWORD*)(v32 - 1) >> 24;
          v32 += 4;
          *(_DWORD*)v6 = v34 >> 24;
          *((_DWORD*)v6 + 1) = v36;
          *((_DWORD*)v6 + 2) = __PAIR64__(v35, v33) >> 24;
          *((_DWORD*)v6 + 3) = __PAIR64__(v31, v35) >> 24;
          v6 += 16;
        } while (a3 > 0x10);
        v5 = (char*)v32 - 5;
        goto LABEL_16;
      }
      do {
        v9 = *(_QWORD*)v5;
        v10 = *((_DWORD*)v5 + 2);
        v11 = *((_DWORD*)v5 + 3);
        v5 += 16;
        a3 -= 16LL;
        *(_QWORD*)v6 = v9;
        *((_DWORD*)v6 + 2) = v10;
        *((_DWORD*)v6 + 3) = v11;
        v6 += 16;
      } while (a3 > 0xF);
    }
    if (a3 == 0) {
      return result;
    }
  LABEL_16:
    if ((a3 & 0x10) != 0) {
      *v6 = *v5;
      *(_QWORD*)(v6 + 1) = *(_QWORD*)(v5 + 1);
      *(_DWORD*)(v6 + 9) = *(_DWORD*)(v5 + 9);
      *(_WORD*)(v6 + 13) = *(_WORD*)(v5 + 13);
      v12 = v5[15];
      v5 += 16;
      v6[15] = v12;
      v6 += 16;
      if ((a3 & 8) == 0) {
        goto LABEL_35;
      }
    }
    else if ((a3 & 8) == 0) {
      goto LABEL_35;
    }
    v13 = *(_DWORD*)v5;
    v14 = *((_DWORD*)v5 + 1);
    v5 += 8;
    *(_DWORD*)v6 = v13;
    *((_DWORD*)v6 + 1) = v14;
    v6 += 8;
    if ((a3 & 4) == 0) {
      goto LABEL_36;
    }
  LABEL_21:
    v15 = *(_DWORD*)v5;
    v5 += 4;
    *(_DWORD*)v6 = v15;
    v6 += 4;
    if ((a3 & 2) == 0) {
      goto LABEL_37;
    }
  LABEL_22:
    v16 = *(_WORD*)v5;
    v5 += 2;
    *(_WORD*)v6 = v16;
    v6 += 2;
    if ((a3 & 1) == 0) {
      return result;
    }
  LABEL_39:
    *v6 = *v5;
    return result;
  }
  if (a3 >= 0x20) {
    do {
      v17 = *(_QWORD*)v5;
      v18 = *((_QWORD*)v5 + 1);
      v19 = *((_QWORD*)v5 + 2);
      v20 = *((_QWORD*)v5 + 3);
      v5 += 32;
      a3 -= 32LL;
      *(_QWORD*)v6 = v17;
      *((_QWORD*)v6 + 1) = v18;
      *((_QWORD*)v6 + 2) = v19;
      *((_QWORD*)v6 + 3) = v20;
      v6 += 32;
    } while (a3 > 0x1F);
  }
  if (a3 >= 0x10) {
    v22 = *(_QWORD*)v5;
    v23 = *((_QWORD*)v5 + 1);
    v5 += 16;
    *(_QWORD*)v6 = v22;
    *((_QWORD*)v6 + 1) = v23;
    v6 += 16;
    if ((a3 & 8) == 0) {
    LABEL_28:
      if ((a3 & 7) == 0) {
        return result;
      }
      goto LABEL_35;
    }
  }
  else if ((a3 & 8) == 0) {
    goto LABEL_28;
  }
  v24 = *(_QWORD*)v5;
  v5 += 8;
  *(_QWORD*)v6 = v24;
  v6 += 8;
  if ((a3 & 7) == 0) {
    return result;
  }
LABEL_35:
  if ((a3 & 4) != 0) {
    goto LABEL_21;
  }
LABEL_36:
  if ((a3 & 2) != 0) {
    goto LABEL_22;
  }
LABEL_37:
  if ((a3 & 1) != 0) {
    goto LABEL_39;
  }
  return result;
}

__int64 SdkHr_78de80(__int64 result, __int64* a2, unsigned __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  if (a3 < 0x10) {
    return SdkRoutine_87bbe0();
  }
  v3 = (_QWORD*)result;
  if (a3 < 0x20) {
    goto LABEL_6;
  }
  do {
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v7 = a2[3];
    a2 += 4;
    a3 -= 32LL;
    *v3 = v4;
    v3[1] = v5;
    v3[2] = v6;
    v3[3] = v7;
    v3 += 4;
  } while (a3 > 0x1F);
  if (a3 >= 0x10) {
  LABEL_6:
    v8 = *a2;
    v9 = a2[1];
    a2 += 2;
    a3 -= 16LL;
    *v3 = v8;
    v3[1] = v9;
    v3 += 2;
  }
  if (a3 != 0) {
    v10 = (__int64*)((char*)a2 + a3 - 16);
    v11 = (_QWORD*)((char*)v3 + a3 - 16);
    v12 = *v10;
    v13 = v10[1];
    *v11 = v12;
    v11[1] = v13;
  }
  return result;
}

char* SdkHr_78e0a0(char* result, char* a2, unsigned __int64 a3)
{
  char* v3;
  char v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;
  char v26;

  if (a3 <= 0xF) {
    if (a3 != 0) {
      if (result >= a2) {
        do {
          result[a3 - 1] = a2[a3 - 1];
          --a3;
        } while (a3 != 0);
      }
      else {
        v3 = result;
        do {
          v4 = *a2++;
          --a3;
          *v3++ = v4;
        } while (a3 != 0);
      }
    }
    return result;
  }
  if (result == a2) {
    return result;
  }
  if (result < a2) {
    v5 = result;
    if (a3 < 0x20) {
      goto LABEL_12;
    }
    do {
      v6 = *(_QWORD*)a2;
      v7 = *((_QWORD*)a2 + 1);
      v8 = *((_QWORD*)a2 + 2);
      v9 = *((_QWORD*)a2 + 3);
      a2 += 32;
      a3 -= 32LL;
      *v5 = v6;
      v5[1] = v7;
      v5[2] = v8;
      v5[3] = v9;
      v5 += 4;
    } while (a3 > 0x1F);
    if (a3 >= 0x10) {
    LABEL_12:
      v10 = *(_QWORD*)a2;
      v11 = *((_QWORD*)a2 + 1);
      a2 += 16;
      a3 -= 16LL;
      *v5 = v10;
      v5[1] = v11;
      v5 += 2;
    }
    for (; a3 != 0; v5 = (_QWORD*)((char*)v5 + 1)) {
      v12 = *a2++;
      --a3;
      *(_BYTE*)v5 = v12;
    }
    return result;
  }
  if (a3 < 0x20) {
    v20 = &a2[a3];
    v21 = &result[a3];
  LABEL_23:
    v22 = *((_QWORD*)v20 - 2);
    v23 = *((_QWORD*)v20 - 1);
    v20 -= 16;
    a3 -= 16LL;
    *((_QWORD*)v21 - 2) = v22;
    *((_QWORD*)v21 - 1) = v23;
    v21 -= 16;
    goto LABEL_24;
  }
  do {
    v13 = &a2[a3];
    v14 = &result[a3];
    a3 -= 32LL;
    v16 = *((_QWORD*)v13 - 2);
    v15 = *((_QWORD*)v13 - 1);
    v19 = v13 - 32;
    v17 = *((_QWORD*)v13 - 4);
    v18 = *((_QWORD*)v19 + 1);
    *((_QWORD*)v14 - 2) = v16;
    *((_QWORD*)v14 - 1) = v15;
    *((_QWORD*)v14 - 4) = v17;
    *((_QWORD*)v14 - 3) = v18;
  } while (a3 > 0x1F);
  v20 = &a2[a3];
  v21 = &result[a3];
  if (a3 >= 0x10) {
    goto LABEL_23;
  }
LABEL_24:
  if (a3 != 0) {
    v24 = v21 - 1;
    v25 = v20 - 1;
    do {
      v26 = *v25--;
      --a3;
      *v24-- = v26;
    } while (a3 != 0);
  }
  return result;
}

_QWORD* SdkHr_78eaa0(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = result[1];
  v3 = result[2];
  v4 = result[11] - v2;
  result[23] = a2;
  result[24] = v4;
  v5 = v2 + a2;
  if (v3 - v2 <= a2 || a2 == 0) {
    v5 = v3;
  }
  result[22] = v5;
  return result;
}

long double SdkHr_78ee20(long double a1, long double a2)
{
  int v2;
  long double v3;
  long double result;
  long double v7;

  v2 = SdkRoutine_87bb20(a2);
  SdkRoutine_87bca0(a1, a2);
  result = v3;
  v7 = v3;
  if (v2 == 0) {
    HIBYTE(v7) = HIBYTE(v3) ^ 0x80;
    return v7;
  }
  return result;
}

long double SdkHr_78f3d0(long double a1, long double a2)
{
  long double v2;
  long double v3;
  long double v4;
  int v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  long double v9;
  long double v10;
  long double v11;
  long double v12;
  long double v13;
  long double v14;
  long double v15;
  long double v16;
  float v17;
  long double v18;
  long double v19;
  float v20;
  long double v22;
  long double v23;
  long double v24;
  long double v25;
  long double v26;
  long double v27;
  long double v29;
  long double v30;
  long double v31;
  long double v32;
  long double v34;
  long double v35;

  v32 = ((long double (*)(void))SdkRoutine_854fd0)();
  v22 = ((long double (*)(void))SdkRoutine_855490)();
  v2 = SdkRoutine_854fd0(a2, a2);
  v23 = SdkRoutine_855490(v22, v2);
  v3 = SdkRoutine_853920(a1, a1);
  v4 = SdkRoutine_87bcf0(v3, v23);
  v24 = SdkRoutine_854fd0(v4, *(long double*)&SdkData_bb2850);
  v29 = SdkRoutine_853f10(v24, *(long double*)&SdkData_bb50b0);
  v5 = SdkRoutine_853e30(v29, *(long double*)&SdkData_bb4110);
  v6 = 16;
  if (v5 >= 0) {
    v6 = 0;
  }
  v7 = SdkRoutine_853920(v29, *(long double*)((char*)&SdkData_bb06b0 + v6));
  v8 = SdkRoutine_8546b0(v7);
  v30 = SdkRoutine_854850(v8);
  v9 = SdkRoutine_854fd0(v30, *(long double*)&SdkData_bb4cb0);
  v25 = SdkRoutine_853920(v24, v9);
  v10 = SdkRoutine_854fd0(v30, *(long double*)&SdkData_bb4750);
  v26 = SdkRoutine_853920(v25, v10);
  v11 = SdkRoutine_854fd0(v30, *(long double*)&SdkData_bb35a0);
  v31 = SdkRoutine_853920(v26, v11);
  v12 = SdkRoutine_853920(a2, *(long double*)&SdkData_bb1aa0);
  v13 = SdkRoutine_854fd0(v12, v12);
  v27 = SdkRoutine_853920(v13, v32);
  v14 = SdkRoutine_853920(a2, *(long double*)&SdkData_bb3590);
  v15 = SdkRoutine_854fd0(v14, v14);
  v16 = SdkRoutine_853920(v15, v32);
  v34 = SdkRoutine_853f10(v16, v27);
  v17 = SdkRoutine_855690(v31);
  v18 = SdkRoutine_87bda0(v34);
  v19 = SdkRoutine_854fd0(v18, *(long double*)&SdkData_bb0ef0);
  v20 = SdkRoutine_855690(v19);
  v35 = SdkRoutine_854610(v17);
  SdkRoutine_854610(v20);
  return v35;
}

__int64 SdkHr_7937a0(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  bool v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;

  v3 = *a1;
  v4 = a3;
  v5 = a2;
  v8 = *a1 & 0x3F;
  v7 = (*(_DWORD*)a1 & 0x3F) == 0;
  *a1 += a3;
  if (!v7) {
    v9 = a1 + 3;
    v10 = v3 & 0x3F;
    v11 = (unsigned int)(64 - v8);
    if (a3 < v11) {
      v12 = (_QWORD*)((char*)v9 + v10);
      return SdkRoutine_856130(v12, v5, v4);
    }
    SdkRoutine_856130((char*)v9 + v10, a2, (unsigned int)(64 - v8));
    v5 += v11;
    SdkRoutine_7939e0(a1, a1 + 3);
    v4 -= v11;
  }
  if (v4 >= 0x40) {
    do {
      SdkRoutine_7939e0(a1, v5);
      v4 -= 64LL;
      v5 += 64;
    } while (v4 > 0x3F);
  }
  v12 = a1 + 3;
  return SdkRoutine_856130(v12, v5, v4);
}

__int64 SdkHr_7965a0(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  bool v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;

  v3 = *a1;
  v4 = a3;
  v5 = a2;
  v8 = *a1 & 0x7F;
  v7 = (*(_DWORD*)a1 & 0x7F) == 0;
  *a1 += a3;
  if (!v7) {
    v9 = a1 + 9;
    v10 = v3 & 0x7F;
    v11 = (unsigned int)(128 - v8);
    if (a3 < v11) {
      v12 = (_QWORD*)((char*)v9 + v10);
      return SdkRoutine_856130(v12, v5, v4);
    }
    SdkRoutine_856130((char*)v9 + v10, a2, (unsigned int)(128 - v8));
    v5 += v11;
    SdkRoutine_7969e0(a1, a1 + 9);
    v4 -= v11;
  }
  if (v4 >= 0x80) {
    do {
      SdkRoutine_7969e0(a1, v5);
      v4 -= 128LL;
      v5 += 128;
    } while (v4 > 0x7F);
  }
  v12 = a1 + 9;
  return SdkRoutine_856130(v12, v5, v4);
}

bool SdkHr_79ac70(__int64* a1)
{
  return a1 != nullptr && a1 != (__int64*)&SdkData_cb7898 &&
         a1 != (__int64*)&SdkData_e7dba0 && a1 != &SdkData_105b408 &&
         a1 != &SdkData_105b438;
}

__int64* SdkHr_79acb0(char a1, char* a2, __int64* a3)
{
  const char* v6;
  char* v7;
  const char* v8;
  char* v9;
  const char* v10;
  char* v11;
  const char* v12;
  char* v13;
  const char* v14;
  char* v15;
  const char* v16;
  char* v17;
  _UNKNOWN** v19;
  _UNKNOWN** v20;
  _UNKNOWN** v21;
  _UNKNOWN** v22;
  const char* v23;
  const char* v24;
  const char* v25;
  const char* v26;
  const char* v27;
  const char* v28;
  _UNKNOWN** v29;
  _UNKNOWN** v30;
  _UNKNOWN** v31;
  _UNKNOWN** v32;
  _UNKNOWN** v33;
  _UNKNOWN** v34;
  _UNKNOWN** v35;

  SdkRoutine_77a990((__int64)&SdkData_105aa10);
  if (a3 == nullptr) {
    if ((a1 & 1) != 0) {
      v7 = a2;
    }
    else {
      v7 = &SdkData_bbbd5c;
    }
    v30 = SdkRoutine_777680(0, v7, v6);
    if (v30 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v9 = (a1 & 2) != 0 ? a2 : &SdkData_bbbd5c;
    v31 = SdkRoutine_777680(1, v9, v8);
    if (v31 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v11 = (a1 & 4) != 0 ? a2 : &SdkData_bbbd5c;
    v32 = SdkRoutine_777680(2, v11, v10);
    if (v32 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v13 = (a1 & 8) != 0 ? a2 : &SdkData_bbbd5c;
    v33 = SdkRoutine_777680(3, v13, v12);
    if (v33 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v15 = (a1 & 0x10) != 0 ? a2 : &SdkData_bbbd5c;
    v34 = SdkRoutine_777680(4, v15, v14);
    if (v34 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    v17 = (a1 & 0x20) != 0 ? a2 : &SdkData_bbbd5c;
    v35 = SdkRoutine_777680(5, v17, v16);
    if (v35 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
    goto LABEL_52;
  }
  if ((a1 & 1) != 0) {
    v30 = SdkRoutine_777680(0, a2, v6);
    if (v30 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v30 = (_UNKNOWN**)*a3;
    if (v30 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  if ((a1 & 2) != 0) {
    v31 = SdkRoutine_777680(1, a2, v6);
    if (v31 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v31 = (_UNKNOWN**)a3[1];
    if (v31 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  if ((a1 & 4) != 0) {
    v32 = SdkRoutine_777680(2, a2, v6);
    if (v32 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v32 = (_UNKNOWN**)a3[2];
    if (v32 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  if ((a1 & 8) != 0) {
    v33 = SdkRoutine_777680(3, a2, v6);
    if (v33 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v33 = (_UNKNOWN**)a3[3];
    if (v33 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  if ((a1 & 0x10) != 0) {
    v34 = SdkRoutine_777680(4, a2, v6);
    if (v34 != (_UNKNOWN**)-1LL) {
      goto LABEL_47;
    }
  LABEL_49:
    a3 = nullptr;
    goto LABEL_50;
  }
  v34 = (_UNKNOWN**)a3[4];
  if (v34 == (_UNKNOWN**)-1LL) {
    goto LABEL_49;
  }
LABEL_47:
  if ((a1 & 0x20) != 0) {
    v35 = SdkRoutine_777680(5, a2, v6);
    if (v35 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
  else {
    v35 = (_UNKNOWN**)a3[5];
    if (v35 == (_UNKNOWN**)-1LL) {
      goto LABEL_49;
    }
  }
LABEL_52:
  if (a3 != nullptr && a3 != &SdkData_105b438 && a3 != &SdkData_105b408 &&
      a3 != (__int64*)&SdkData_cb7898 && a3 != (__int64*)&SdkData_e7dba0) {
    goto LABEL_57;
  }
  a3 = (__int64*)&SdkData_cb7898;
  if ((unsigned int)SdkRoutine_8572f0(&v30, &SdkData_cb7898, 48) != 0) {
    a3 = (__int64*)&SdkData_e7dba0;
    if ((unsigned int)SdkRoutine_8572f0(&v30, &SdkData_e7dba0, 48) != 0) {
      if ((SdkData_105b400 & 1) == 0) {
        SdkData_105b408 = (__int64)SdkRoutine_777680(0, &SdkData_bbbd5c, v23);
        SdkData_105b410 = (__int64)SdkRoutine_777680(1, &SdkData_bbbd5c, v24);
        SdkData_105b418 = (__int64)SdkRoutine_777680(2, &SdkData_bbbd5c, v25);
        SdkData_105b420 = (__int64)SdkRoutine_777680(3, &SdkData_bbbd5c, v26);
        SdkData_105b428 = (__int64)SdkRoutine_777680(4, &SdkData_bbbd5c, v27);
        v29 = SdkRoutine_777680(5, &SdkData_bbbd5c, v28);
        SdkData_105b400 = 1;
        SdkData_105b430 = (__int64)v29;
        SdkData_105b438 = SdkData_105b408;
      }
      a3 = &SdkData_105b408;
      if ((unsigned int)SdkRoutine_8572f0(&v30, &SdkData_105b408, 48) != 0) {
        a3 = &SdkData_105b438;
        if ((unsigned int)SdkRoutine_8572f0(&v30, &SdkData_105b438, 48) != 0) {
          a3 = (__int64*)SdkRoutine_8578d0(48);
          if (a3 != nullptr) {
          LABEL_57:
            v19 = v31;
            *a3 = (__int64)v30;
            a3[1] = (__int64)v19;
            v20 = v32;
            v21 = v33;
            v22 = v35;
            a3[4] = (__int64)v34;
            a3[5] = (__int64)v22;
            a3[2] = (__int64)v20;
            a3[3] = (__int64)v21;
          }
        }
      }
    }
  }
LABEL_50:
  SdkRoutine_77a9a0((__int64)&SdkData_105aa10);
  return a3;
}

__int64 SdkHr_79f750(__int64 result, __int64 (*a2)(void), unsigned int a3)
{
  __int64 v3;

  if (result != 0) {
    if (*(_DWORD*)(result + 24) == 1) {
      return a2();
    }
    else {
      v3 = result;
      a2();
      SdkHr_79f750(*(_QWORD*)(v3 + 8), a2, a3 + 1);
      ((void (*)(__int64, __int64, _QWORD))a2)(v3, 1, a3);
      SdkHr_79f750(*(_QWORD*)(v3 + 16), a2, a3 + 1);
      return ((__int64 (*)(__int64, __int64, _QWORD))a2)(v3, 2, a3);
    }
  }
  return result;
}

__int64 SdkHr_79fb10(int* a1)
{
  int v2;
  __int64 result;
  __int64 v4;

  *((_BYTE*)a1 + 128) |= *((_BYTE*)a1 + 128) - 1;
  if (*((_QWORD*)a1 + 5) != *((_QWORD*)a1 + 7)) {
    (*((void (**)(int*, _QWORD, _QWORD))a1 + 9))(a1, 0, 0);
  }
  v2 = *a1;
  *((_QWORD*)a1 + 7) = 0;
  *((_QWORD*)a1 + 4) = 0;
  *((_QWORD*)a1 + 5) = 0;
  if ((v2 & 4) != 0) {
    *a1 = v2 | 0x20;
    return 0xFFFFFFFFLL;
  }
  else {
    result = (unsigned int)(v2 << 27 >> 31);
    v4 = *((_QWORD*)a1 + 11) + *((_QWORD*)a1 + 12);
    *((_QWORD*)a1 + 1) = v4;
    *((_QWORD*)a1 + 2) = v4;
  }
  return result;
}

__int64 SdkHr_79fba0(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  *(_BYTE*)(a1 + 128) |= *(_BYTE*)(a1 + 128) - 1;
  if ((*(_DWORD*)a1 & 8) != 0) {
    *(_DWORD*)a1 |= 0x20u;
    return 0xFFFFFFFFLL;
  }
  else {
    v1 = *(_QWORD*)(a1 + 88);
    v2 = *(_QWORD*)(a1 + 96);
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 56) = v1;
    *(_QWORD*)(a1 + 32) = v1 + v2;
    *(_QWORD*)(a1 + 40) = v1;
    return 0;
  }
}

__int64 SdkHr_7a0620(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _BYTE* v8;
  _BYTE* v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  _BYTE v20[4];
  unsigned int v21;

  v2 = (_QWORD*)SdkRoutine_87b850();
  v3 = *v2;
  v4 = v2;
  if (*(char*)(a1 + 128) > 0) {
    *v2 = *(_QWORD*)(a1 + 200);
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(_QWORD*)(a1 + 16);
    if (v5 != v6) {
      goto LABEL_3;
    }
  LABEL_8:
    v19 = 0;
    goto LABEL_9;
  }
  SdkRoutine_87b8e0(a1, 1);
  *v4 = *(_QWORD*)(a1 + 200);
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(a1 + 16);
  if (v5 == v6) {
    goto LABEL_8;
  }
LABEL_3:
  v7 = SdkRoutine_87b940(&v21, v5, v6 - v5);
  v8 = *(_BYTE**)(a1 + 8);
  if (v7 != -1) {
    v9 = &v8[v7];
    if (v7 == 0) {
      ++v9;
    }
    *(_QWORD*)(a1 + 8) = v9;
  LABEL_24:
    result = v21;
    goto LABEL_25;
  }
  v11 = *(_BYTE**)(a1 + 16);
  v19 = 0;
  if (v8 == v11) {
  LABEL_9:
    v10 = _uflow(a1);
    v20[0] = v10;
    if (v10 < 0) {
      goto LABEL_23;
    }
    goto LABEL_13;
  }
  *(_QWORD*)(a1 + 8) = v8 + 1;
  v20[0] = *v8;
LABEL_13:
  v12 = SdkRoutine_87b980(&v21, v20, 1, &v19);
  if (v12 != -1) {
    if (v12 != -2) {
      goto LABEL_24;
    }
    do {
      v14 = *(_BYTE**)(a1 + 8);
      if (v14 == *(_BYTE**)(a1 + 16)) {
        v15 = _uflow(a1);
        v20[0] = v15;
        if ((v15 & 0x80000000) != 0) {
          *(_DWORD*)a1 |= 0x20u;
          *(_DWORD*)SdkRoutine_857cc0(v15, v16) = 84;
          goto LABEL_23;
        }
      }
      else {
        *(_QWORD*)(a1 + 8) = v14 + 1;
        v20[0] = *v14;
      }
      v13 = SdkRoutine_87b980(&v21, v20, 1, &v19);
    } while (v13 == -2);
    if (v13 != -1) {
      goto LABEL_24;
    }
    v17 = v20[0];
    *(_DWORD*)a1 |= 0x20u;
    SdkRoutine_87c280(v17, a1);
  }
LABEL_23:
  result = 0xFFFFFFFFLL;
LABEL_25:
  *v4 = v3;
  return result;
}

__int64 SdkHr_7a07d0(__int64 a1)
{
  int v2;
  __int64 result;
  unsigned int v4;

  if (*(char*)(a1 + 130) < 0) {
    return SdkRoutine_7a0620(a1);
  }
  v2 = SdkRoutine_778620(a1);
  result = SdkRoutine_7a0620(a1);
  if (v2 != 0) {
    v4 = result;
    SdkRoutine_778650(a1);
    return v4;
  }
  return result;
}

__int64 SdkHr_7a1670(unsigned int* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 (*v8)(unsigned int*, __int64, __int64);
  unsigned int v9;

  if ((unsigned int)a3 < 3) {
    if ((_DWORD)a3 == 1) {
      v5 = *((_QWORD*)a1 + 2);
      if (v5 != 0) {
        a2 = a2 - v5 + *((_QWORD*)a1 + 1);
      }
    }
    if (*((_QWORD*)a1 + 5) != *((_QWORD*)a1 + 7)) {
      v6 = a2;
      v7 = a3;
      (*((void (**)(unsigned int*, _QWORD, _QWORD))a1 + 9))(a1, 0, 0);
      a2 = v6;
      a3 = v7;
      if (*((_QWORD*)a1 + 5) == 0) {
        return 0xFFFFFFFFLL;
      }
    }
    v8 = *((__int64 (**)(unsigned int*, __int64, __int64))a1 + 10);
    *((_QWORD*)a1 + 7) = 0;
    *((_QWORD*)a1 + 4) = 0;
    *((_QWORD*)a1 + 5) = 0;
    if ((v8(a1, a2, a3) & 0x8000000000000000LL) == 0) {
      v9 = *a1;
      *((_QWORD*)a1 + 1) = 0;
      *((_QWORD*)a1 + 2) = 0;
      *a1 = v9 & 0xFFFFFFEF;
      return 0;
    }
    else {
      return 0xFFFFFFFFLL;
    }
  }
  else {
    *(_DWORD*)SdkRoutine_857cc0(a1, a2) = 22;
    return 0xFFFFFFFFLL;
  }
}

unsigned __int64 SdkHr_7a3ab0(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v8;
  _BYTE* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v15;

  v4 = a1[18];
  v5 = a1[7];
  v8 = a1[5] - v5;
  v9 = *(_BYTE**)v4;
  v10 = *(_QWORD*)(v4 + 8);
  if (v10 >= v8) {
    v11 = v8;
  }
  else {
    v11 = *(_QWORD*)(v4 + 8);
  }
  if (v11 != 0) {
    SdkRoutine_856130(v9, v5, v11);
    v9 = (_BYTE*)(*(_QWORD*)v4 + v11);
    v10 = *(_QWORD*)(v4 + 8) - v11;
    *(_QWORD*)v4 = v9;
    *(_QWORD*)(v4 + 8) = v10;
  }
  if (v10 >= a3) {
    v12 = a3;
  }
  else {
    v12 = v10;
  }
  if (v12 != 0) {
    SdkRoutine_856130(v9, a2, v12);
    v9 = (_BYTE*)(*(_QWORD*)v4 + v12);
    v13 = *(_QWORD*)(v4 + 8) - v12;
    *(_QWORD*)v4 = v9;
    *(_QWORD*)(v4 + 8) = v13;
  }
  *v9 = 0;
  v15 = a1[11];
  a1[7] = v15;
  a1[5] = v15;
  return a3;
}

unsigned __int64 SdkHr_7a3c30(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v8;

  v3 = a1[18];
  v4 = a3 + 256;
  v5 = a3;
  v8 = SdkRoutine_8571c0(v3, 0, a3 + 256);
  if (v8 != 0) {
    v4 = v8 - v3;
  }
  if (v4 < v5) {
    v5 = v4;
  }
  SdkRoutine_856130(a2, v3, v5);
  a1[1] = v3 + v5;
  a1[2] = v3 + v4;
  a1[18] = v3 + v4;
  return v5;
}

__int64 SdkHr_7a3dc0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  _DWORD* v8;
  bool v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;

  v4 = *(_QWORD**)(a1 + 144);
  v5 = *(_QWORD*)(a1 + 56);
  if (a2 != v5 && SdkHr_7a3dc0(a1, v5, *(_QWORD*)(a1 + 40) - v5) == -1) {
    return -1;
  }
  v8 = (_DWORD*)*v4;
  v9 = v4[1] == 0 || a3 == 0;
  if (v9) {
  LABEL_17:
    v15 = *(_QWORD*)(a1 + 88);
    v16 = *(_QWORD*)(a1 + 96);
    *v8 = 0;
    *(_QWORD*)(a1 + 56) = v15;
    *(_QWORD*)(a1 + 32) = v15 + v16;
    *(_QWORD*)(a1 + 40) = v15;
  }
  else {
    v10 = a3;
    while (1) {
      v11 = SdkRoutine_87b940(v8, a2, v10);
      if ((v11 & 0x80000000) != 0) {
        break;
      }
      if (v11 <= 1) {
        v12 = 1;
      }
      else {
        v12 = v11;
      }
      a2 += v12;
      v10 -= v12;
      v13 = v4[1] - 1LL;
      v8 = (_DWORD*)(*v4 + 4LL);
      v9 = v4[1] == 1;
      *v4 = v8;
      v4[1] = v13;
      if (v9 || v10 == 0) {
        goto LABEL_17;
      }
    }
    v17 = (_DWORD*)*v4;
    *(_QWORD*)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 32) = 0;
    *(_QWORD*)(a1 + 40) = 0;
    a3 = (int)v11;
    *v17 = 0;
    *(_DWORD*)a1 |= 0x20u;
  }
  return a3;
}

__int64 SdkHr_7a3f60(_QWORD* a1, _BYTE* a2, __int64 a3)
{
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;

  v10 = a1[18];
  if (v10 == 0) {
    return 0;
  }
  v6 = SdkRoutine_87c230(a1[11], &v10, a1[12], 0);
  if (v6 == -1) {
    a1[1] = 0;
    a1[2] = 0;
    return 0;
  }
  else {
    v7 = (_BYTE*)a1[11];
    v8 = v6;
    result = 0;
    a1[1] = v7;
    a1[2] = &v7[v8];
    a1[18] = v10;
    if (a3 != 0 && v8 != 0) {
      result = 1;
      a1[1] = v7 + 1;
      *a2 = *v7;
    }
  }
  return result;
}

__int64 SdkHr_7a5860(_QWORD* a1, _BYTE* a2, __int64 a3)
{
  __int64 (**v3)();
  unsigned __int64 v4;
  unsigned int v5;
  _BYTE* v6;
  __int64 v7;

  if (*(_DWORD*)a1[18] != 0) {
    v3 = (__int64 (**)())a1[18];
  }
  else {
    v3 = &SdkData_bd16c0;
  }
  if (a1[12] != 0) {
    v4 = 0;
    do {
      v5 = *((_DWORD*)v3 + v4);
      if (v5 == 0) {
        break;
      }
      if (v5 >= 0x80) {
        LOBYTE(v5) = 64;
      }
      *(_BYTE*)(a1[11] + v4++) = v5;
    } while (v4 < a1[12]);
  }
  else {
    v4 = 0;
  }
  v6 = (_BYTE*)a1[11];
  v7 = 0;
  a1[18] = (char*)v3 + 4 * v4;
  a1[1] = v6;
  a1[2] = &v6[v4];
  if (a3 != 0 && v4 != 0) {
    a1[1] = v6 + 1;
    *a2 = *v6;
    return 1;
  }
  return v7;
}

__int64 SdkHr_7a76e0(_BYTE* a1, unsigned __int8* a2)
{
  int v2;
  int v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  int v7;
  unsigned int v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned int v14;
  char v15;

  v2 = (unsigned __int8)*a1;
  v3 = *a2;
  if (v2 == v3) {
    v4 = 1;
    v5 = 1;
    v6 = 0;
    LOBYTE(v7) = *a1;
    do {
      if ((_BYTE)v7 == 0) {
        return 0;
      }
      v8 = (unsigned __int8)(v7 - 48);
      if ((unsigned __int8)v7 == 48) {
        v9 = v5;
      }
      else {
        v9 = 0;
      }
      v10 = v8 >= 0xA;
      v3 = a2[v4];
      if (v10) {
        v5 = 1;
      }
      else {
        v5 = v9;
      }
      v7 = (unsigned __int8)a1[v4];
      if (v10) {
        v6 = v4;
      }
      ++v4;
    } while (v7 == v3);
    v11 = v4 - 1;
    v12 = v5 != 0;
    if ((unsigned int)(unsigned __int8)a1[v6] - 49 <= 8) {
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  v11 = 0;
  v6 = 0;
  v12 = true;
  v7 = (unsigned __int8)*a1;
  if ((unsigned int)(v2 - 49) > 8) {
    goto LABEL_23;
  }
LABEL_17:
  if ((unsigned int)a2[v6] - 49 > 8) {
  LABEL_23:
    v10 = v6 >= v11;
    v15 = !v12;
    if (v10) {
      v15 = 1;
    }
    if ((v15 & 1) == 0 &&
        ((unsigned int)(v7 - 48) < 0xA || (unsigned __int8)(v3 - 48) <= 9u)) {
      return (unsigned __int8)(v7 - 48) -
             (unsigned int)(unsigned __int8)(v3 - 48);
    }
    return (unsigned int)(v7 - v3);
  }
  if ((unsigned int)(v7 - 48) > 9) {
    if ((unsigned int)a2[v11] - 48 < 0xA) {
      return 0xFFFFFFFFLL;
    }
  }
  else {
    do {
      if ((unsigned int)a2[v11] - 48 > 9) {
        return 1;
      }
      v13 = v11 + 1;
      v14 = (unsigned __int8)a1[++v11] - 48;
    } while (v14 < 0xA);
    if ((unsigned int)a2[v13] - 48 < 0xA) {
      return 0xFFFFFFFFLL;
    }
  }
  return (unsigned int)(v7 - v3);
}

long double SdkHr_7b13b0(long double a1)
{
  long double v1;

  v1 = SdkRoutine_855490(a1, a1);
  return SdkRoutine_853f10(v1, v1);
}

long double SdkHr_7b75a0(long double a1, long double a2)
{
  long double v2;
  long double v3;
  long double v4;
  long double v5;
  long double v6;
  long double v8;
  long double v9;
  long double v10;
  long double v11;
  long double v12;
  long double v13;
  long double v14;
  long double v15;
  long double v16;
  long double v18;
  long double v20;

  v14 = SdkRoutine_854fd0(a1, *(long double*)&SdkData_bb3800);
  v2 = SdkRoutine_855490(a1, v14);
  v15 = SdkRoutine_853920(v14, v2);
  v18 = SdkRoutine_855490(a1, v15);
  v11 = SdkRoutine_854fd0(a2, *(long double*)&SdkData_bb3800);
  v3 = SdkRoutine_855490(a2, v11);
  v8 = SdkRoutine_853920(v11, v3);
  v20 = SdkRoutine_855490(a2, v8);
  v12 = SdkRoutine_854fd0(v15, v8);
  v9 = SdkRoutine_854fd0(v18, v8);
  v4 = SdkRoutine_854fd0(v15, v20);
  v10 = SdkRoutine_853920(v4, v9);
  v16 = SdkRoutine_853920(v12, v10);
  v5 = SdkRoutine_855490(v12, v16);
  v13 = SdkRoutine_853920(v10, v5);
  v6 = SdkRoutine_854fd0(v18, v20);
  SdkRoutine_853920(v6, v13);
  return v16;
}

long double SdkHr_7b76c0(long double a1, long double a2)
{
  long double v2;
  long double v3;
  long double v5;
  long double v8;
  long double v9;

  v9 = SdkRoutine_853920(a1, a2);
  v5 = SdkRoutine_855490(v9, a1);
  v2 = SdkRoutine_855490(v9, v5);
  v8 = SdkRoutine_855490(a1, v2);
  v3 = SdkRoutine_855490(a2, v5);
  SdkRoutine_853920(v3, v8);
  return v9;
}

long double SdkHr_7b7730(long double a1, long double a2)
{
  long double v2;
  long double v3;
  long double v4;
  long double result;
  long double v6;
  long double v9;
  long double v10;
  long double v11;

  v11 = SdkRoutine_853920(a1, a2);
  v6 = SdkRoutine_855490(v11, a1);
  v2 = SdkRoutine_855490(v11, v6);
  v9 = SdkRoutine_855490(a1, v2);
  v3 = SdkRoutine_855490(a2, v6);
  v10 = SdkRoutine_853920(v3, v9);
  if ((unsigned int)SdkRoutine_853d90(v10, *(long double*)&SdkData_bb4110) ==
          0 ||
      (LOBYTE(v11) & 1) != 0) {
    return v11;
  }
  v4 = SdkRoutine_854fd0(v10, *(long double*)&SdkData_bb1400);
  SdkRoutine_87c6f0(v11, v4);
  return result;
}

__int64 SdkHr_7b77e0(unsigned int a1, long double a2, long double a3)
{
  long double v4;
  long double v5;
  long double v6;
  long double v8;
  long double v11;
  long double v12;
  long double v13;

  v13 = SdkRoutine_853920(a2, a3);
  v8 = SdkRoutine_855490(v13, a2);
  v4 = SdkRoutine_855490(v13, v8);
  v11 = SdkRoutine_855490(a2, v4);
  v5 = SdkRoutine_855490(a3, v8);
  v12 = SdkRoutine_853920(v5, v11);
  if ((unsigned int)SdkRoutine_853d90(v12, *(long double*)&SdkData_bb4110) !=
          0 &&
      (((a1 + HIWORD(v13) == 0) ^ LODWORD(v13)) & 1) == 0) {
    v6 = SdkRoutine_854fd0(v12, *(long double*)&SdkData_bb1400);
    SdkRoutine_87c6f0(v13, v6);
  }
  return SdkRoutine_87ba10(a1);
}

long double SdkHr_7ba490(long double result)
{
  unsigned int v1;
  unsigned int v2;
  long double v3;
  long double v4;
  long double v5;
  __int128 v6;
  long double v7;
  long double v8;
  long double v9;
  long double v10;
  long double v11;
  long double v12;

  v1 = HIWORD(result);
  v2 = HIWORD(result) & 0x7FFF;
  if (v2 > 0x406E) {
    return result;
  }
  v12 = result;
  v9 = result;
  if (HIWORD(result) >= 0x8000u) {
    HIBYTE(v12) = HIBYTE(result) ^ 0x80;
    result = v12;
  }
  v8 = result;
  v3 = SdkRoutine_853920(result, *(long double*)&SdkData_bb3e40);
  if (v2 <= 0x3FFD) {
    return SdkRoutine_854fd0(v9, *(long double*)&SdkData_bb4110);
  }
  v4 = SdkRoutine_853920(v3, *(long double*)&SdkData_bb35d0);
  v7 = SdkRoutine_855490(v4, v8);
  if ((int)SdkRoutine_853e30(v7, *(long double*)&SdkData_bb2850) <= 0) {
    v10 = SdkRoutine_853920(v8, v7);
    if ((int)SdkRoutine_853d90(v7, *(long double*)&SdkData_bb35c0) > 0) {
      result = v10;
      v11 = v10;
      HIBYTE(v11) = HIBYTE(v10) ^ 0x80;
      if (v1 >= 0x8000) {
        return v11;
      }
      return result;
    }
    v5 = v10;
    v6 = SdkData_bb3590;
  }
  else {
    v5 = SdkRoutine_853920(v8, v7);
    v6 = SdkData_bb1aa0;
  }
  result = SdkRoutine_853920(v5, *(long double*)&v6);
  v11 = result;
  HIBYTE(v11) = HIBYTE(result) ^ 0x80;
  if (v1 >= 0x8000) {
    return v11;
  }
  return result;
}

unsigned __int64 SdkHr_7bbc80(unsigned __int64 result, char* a2,
                              unsigned __int64 a3)
{
  char* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  char v10;
  char v11;
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
  _QWORD* v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  bool v42;
  unsigned __int64 j;
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
  char* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  char* v65;
  unsigned __int64 i;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;

  v3 = &a2[a3];
  v4 = (char*)(result + a3);
  if (a3 > 0x80) {
    if (result != (_QWORD)a2) {
      if (result - (unsigned __int64)a2 < a3) {
        v52 = *((_QWORD*)v3 - 2);
        v53 = *((_QWORD*)v3 - 1);
        v54 = &v3[-((unsigned __int8)v4 & 0xF)];
        v55 = a3 - ((unsigned __int8)v4 & 0xF);
        v56 = *((_QWORD*)v54 - 2);
        v57 = *((_QWORD*)v54 - 1);
        *((_QWORD*)v4 - 2) = v52;
        *((_QWORD*)v4 - 1) = v53;
        v58 = *((_QWORD*)v54 - 4);
        v59 = *((_QWORD*)v54 - 3);
        v60 = *((_QWORD*)v54 - 6);
        v61 = *((_QWORD*)v54 - 5);
        v63 = *((_QWORD*)v54 - 8);
        v64 = *((_QWORD*)v54 - 7);
        v62 = v54 - 64;
        v65 = &v4[-((unsigned __int8)v4 & 0xF)];
        v42 = v55 > 0x80;
        for (i = v55 - 128; v42; i -= 64LL) {
          *((_QWORD*)v65 - 2) = v56;
          *((_QWORD*)v65 - 1) = v57;
          v56 = *((_QWORD*)v62 - 2);
          v57 = *((_QWORD*)v62 - 1);
          *((_QWORD*)v65 - 4) = v58;
          *((_QWORD*)v65 - 3) = v59;
          v58 = *((_QWORD*)v62 - 4);
          v59 = *((_QWORD*)v62 - 3);
          *((_QWORD*)v65 - 6) = v60;
          *((_QWORD*)v65 - 5) = v61;
          v60 = *((_QWORD*)v62 - 6);
          v61 = *((_QWORD*)v62 - 5);
          *((_QWORD*)v65 - 8) = v63;
          *((_QWORD*)v65 - 7) = v64;
          v65 -= 64;
          v63 = *((_QWORD*)v62 - 8);
          v64 = *((_QWORD*)v62 - 7);
          v62 -= 64;
          v42 = i > 0x40;
        }
        v67 = *((_QWORD*)a2 + 6);
        v68 = *((_QWORD*)a2 + 7);
        *((_QWORD*)v65 - 2) = v56;
        *((_QWORD*)v65 - 1) = v57;
        v69 = *((_QWORD*)a2 + 4);
        v70 = *((_QWORD*)a2 + 5);
        *((_QWORD*)v65 - 4) = v58;
        *((_QWORD*)v65 - 3) = v59;
        v71 = *((_QWORD*)a2 + 2);
        v72 = *((_QWORD*)a2 + 3);
        *((_QWORD*)v65 - 6) = v60;
        *((_QWORD*)v65 - 5) = v61;
        v73 = *(_QWORD*)a2;
        v74 = *((_QWORD*)a2 + 1);
        *((_QWORD*)v65 - 8) = v63;
        *((_QWORD*)v65 - 7) = v64;
        *(_QWORD*)(result + 48) = v67;
        *(_QWORD*)(result + 56) = v68;
        *(_QWORD*)(result + 32) = v69;
        *(_QWORD*)(result + 40) = v70;
        *(_QWORD*)(result + 16) = v71;
        *(_QWORD*)(result + 24) = v72;
        *(_QWORD*)result = v73;
        *(_QWORD*)(result + 8) = v74;
      }
      else {
        v28 = *(_QWORD*)a2;
        v29 = *((_QWORD*)a2 + 1);
        v30 = (_QWORD*)(result & 0xFFFFFFFFFFFFFFF0LL);
        v31 = &a2[-(result & 0xF)];
        v32 = a3 + (result & 0xF);
        v33 = *((_QWORD*)v31 + 2);
        v34 = *((_QWORD*)v31 + 3);
        *(_QWORD*)result = v28;
        *(_QWORD*)(result + 8) = v29;
        v35 = *((_QWORD*)v31 + 4);
        v36 = *((_QWORD*)v31 + 5);
        v37 = *((_QWORD*)v31 + 6);
        v38 = *((_QWORD*)v31 + 7);
        v40 = *((_QWORD*)v31 + 8);
        v41 = *((_QWORD*)v31 + 9);
        v39 = v31 + 64;
        v42 = v32 > 0x90;
        for (j = v32 - 144; v42; j -= 64LL) {
          v30[2] = v33;
          v30[3] = v34;
          v33 = v39[2];
          v34 = v39[3];
          v30[4] = v35;
          v30[5] = v36;
          v35 = v39[4];
          v36 = v39[5];
          v30[6] = v37;
          v30[7] = v38;
          v37 = v39[6];
          v38 = v39[7];
          v30[8] = v40;
          v30[9] = v41;
          v30 += 8;
          v40 = v39[8];
          v41 = v39[9];
          v39 += 8;
          v42 = j > 0x40;
        }
        v44 = *((_QWORD*)v3 - 8);
        v45 = *((_QWORD*)v3 - 7);
        v30[2] = v33;
        v30[3] = v34;
        v46 = *((_QWORD*)v3 - 6);
        v47 = *((_QWORD*)v3 - 5);
        v30[4] = v35;
        v30[5] = v36;
        v48 = *((_QWORD*)v3 - 4);
        v49 = *((_QWORD*)v3 - 3);
        v30[6] = v37;
        v30[7] = v38;
        v50 = *((_QWORD*)v3 - 2);
        v51 = *((_QWORD*)v3 - 1);
        v30[8] = v40;
        v30[9] = v41;
        *((_QWORD*)v4 - 8) = v44;
        *((_QWORD*)v4 - 7) = v45;
        *((_QWORD*)v4 - 6) = v46;
        *((_QWORD*)v4 - 5) = v47;
        *((_QWORD*)v4 - 4) = v48;
        *((_QWORD*)v4 - 3) = v49;
        *((_QWORD*)v4 - 2) = v50;
        *((_QWORD*)v4 - 1) = v51;
      }
    }
  }
  else if (a3 > 0x20) {
    v12 = *(_QWORD*)a2;
    v13 = *((_QWORD*)a2 + 1);
    v14 = *((_QWORD*)a2 + 2);
    v15 = *((_QWORD*)a2 + 3);
    v16 = *((_QWORD*)v3 - 4);
    v17 = *((_QWORD*)v3 - 3);
    v18 = *((_QWORD*)v3 - 2);
    v19 = *((_QWORD*)v3 - 1);
    if (a3 > 0x40) {
      v20 = *((_QWORD*)a2 + 4);
      v21 = *((_QWORD*)a2 + 5);
      v22 = *((_QWORD*)a2 + 6);
      v23 = *((_QWORD*)a2 + 7);
      if (a3 > 0x60) {
        v24 = *((_QWORD*)v3 - 8);
        v25 = *((_QWORD*)v3 - 7);
        v26 = *((_QWORD*)v3 - 6);
        v27 = *((_QWORD*)v3 - 5);
        *((_QWORD*)v4 - 8) = v24;
        *((_QWORD*)v4 - 7) = v25;
        *((_QWORD*)v4 - 6) = v26;
        *((_QWORD*)v4 - 5) = v27;
      }
      *(_QWORD*)result = v12;
      *(_QWORD*)(result + 8) = v13;
      *(_QWORD*)(result + 16) = v14;
      *(_QWORD*)(result + 24) = v15;
      *(_QWORD*)(result + 32) = v20;
      *(_QWORD*)(result + 40) = v21;
      *(_QWORD*)(result + 48) = v22;
      *(_QWORD*)(result + 56) = v23;
      *((_QWORD*)v4 - 4) = v16;
      *((_QWORD*)v4 - 3) = v17;
      *((_QWORD*)v4 - 2) = v18;
      *((_QWORD*)v4 - 1) = v19;
    }
    else {
      *(_QWORD*)result = v12;
      *(_QWORD*)(result + 8) = v13;
      *(_QWORD*)(result + 16) = v14;
      *(_QWORD*)(result + 24) = v15;
      *((_QWORD*)v4 - 4) = v16;
      *((_QWORD*)v4 - 3) = v17;
      *((_QWORD*)v4 - 2) = v18;
      *((_QWORD*)v4 - 1) = v19;
    }
  }
  else if (a3 < 0x10) {
    if ((a3 & 8) != 0) {
      v8 = *((_QWORD*)v3 - 1);
      *(_QWORD*)result = *(_QWORD*)a2;
      *((_QWORD*)v4 - 1) = v8;
    }
    else if ((a3 & 4) != 0) {
      v9 = *((_DWORD*)v3 - 1);
      *(_DWORD*)result = *(_DWORD*)a2;
      *((_DWORD*)v4 - 1) = v9;
    }
    else if (a3 != 0) {
      v10 = *(v3 - 1);
      v11 = a2[a3 >> 1];
      *(_BYTE*)result = *a2;
      *(_BYTE*)(result + (a3 >> 1)) = v11;
      *(v4 - 1) = v10;
    }
  }
  else {
    v5 = *((_QWORD*)a2 + 1);
    v6 = *((_QWORD*)v3 - 2);
    v7 = *((_QWORD*)v3 - 1);
    *(_QWORD*)result = *(_QWORD*)a2;
    *(_QWORD*)(result + 8) = v5;
    *((_QWORD*)v4 - 2) = v6;
    *((_QWORD*)v4 - 1) = v7;
  }
  return result;
}

long double SdkHr_7bbec0(__int64 a1, __int64 a2, unsigned __int64 a3,
                         long double result)
{
  __int64 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  int v8;
  char v9;
  char v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  long double v17;
  __int64 v18;
  _OWORD* v19;
  _OWORD* v20;
  unsigned __int64 v21;
  __int128 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  bool v26;
  unsigned __int64 j;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int64 v39;
  unsigned __int64 i;
  __int128 v41;
  __int128 v42;
  __int128 v43;

  v4 = a2 + a3;
  v5 = a1 + a3;
  if (a3 > 0x80) {
    if (a1 - a2 < a3) {
      if (a1 != a2) {
        v31 = *(_OWORD*)(v4 - 16);
        v32 = v4 & 0xF;
        v33 = v4 & 0xFFFFFFFFFFFFFFF0LL;
        v34 = a3 - v32;
        v35 = *(_OWORD*)(v33 - 32);
        v36 = *(_OWORD*)(v33 - 16);
        *(_OWORD*)(v5 - 16) = v31;
        v37 = *(_OWORD*)(v33 - 64);
        v38 = *(_OWORD*)(v33 - 48);
        v39 = v5 - v32;
        v26 = v34 > 0x80;
        for (i = v34 - 128; v26; i -= 64LL) {
          *(_OWORD*)(v39 - 16) = v36;
          *(_OWORD*)(v39 - 32) = v35;
          v35 = *(_OWORD*)(v33 - 96);
          v36 = *(_OWORD*)(v33 - 80);
          *(_OWORD*)(v39 - 48) = v38;
          *(_OWORD*)(v39 - 64) = v37;
          v39 -= 64;
          v37 = *(_OWORD*)(v33 - 128);
          v38 = *(_OWORD*)(v33 - 112);
          v33 -= 64LL;
          v26 = i > 0x40;
        }
        v41 = *(_OWORD*)(a2 + 32);
        v42 = *(_OWORD*)(a2 + 48);
        *(_OWORD*)(v39 - 32) = v35;
        *(_OWORD*)(v39 - 16) = v36;
        result = *(long double*)a2;
        v43 = *(_OWORD*)(a2 + 16);
        *(_OWORD*)(v39 - 64) = v37;
        *(_OWORD*)(v39 - 48) = v38;
        *(_OWORD*)(a1 + 32) = v41;
        *(_OWORD*)(a1 + 48) = v42;
        *(long double*)a1 = result;
        *(_OWORD*)(a1 + 16) = v43;
      }
    }
    else {
      v17 = *(long double*)a2;
      v18 = a2 & 0xF;
      v19 = (_OWORD*)(a2 & 0xFFFFFFFFFFFFFFF0LL);
      v20 = (_OWORD*)(a1 - v18);
      v21 = a3 + v18;
      v22 = v19[1];
      v23 = v19[2];
      *(long double*)a1 = v17;
      v24 = v19[3];
      v25 = v19[4];
      v26 = v21 > 0x90;
      for (j = v21 - 144; v26; j -= 64LL) {
        v20[1] = v22;
        v20[2] = v23;
        v22 = v19[5];
        v23 = v19[6];
        v20[3] = v24;
        v20[4] = v25;
        v24 = v19[7];
        v25 = v19[8];
        v19 += 4;
        v20 += 4;
        v26 = j > 0x40;
      }
      v28 = *(_OWORD*)(v4 - 64);
      v29 = *(_OWORD*)(v4 - 48);
      v20[1] = v22;
      v20[2] = v23;
      result = *(long double*)(v4 - 32);
      v30 = *(_OWORD*)(v4 - 16);
      v20[3] = v24;
      v20[4] = v25;
      *(_OWORD*)(v5 - 64) = v28;
      *(_OWORD*)(v5 - 48) = v29;
      *(long double*)(v5 - 32) = result;
      *(_OWORD*)(v5 - 16) = v30;
    }
  }
  else if (a3 > 0x20) {
    result = *(long double*)a2;
    v11 = *(_OWORD*)(a2 + 16);
    v12 = *(_OWORD*)(v4 - 32);
    v13 = *(_OWORD*)(v4 - 16);
    if (a3 > 0x40) {
      v14 = *(_OWORD*)(a2 + 32);
      v15 = *(_OWORD*)(a2 + 48);
      if (a3 > 0x60) {
        v16 = *(_OWORD*)(v4 - 48);
        *(_OWORD*)(v5 - 64) = *(_OWORD*)(v4 - 64);
        *(_OWORD*)(v5 - 48) = v16;
      }
      *(long double*)a1 = result;
      *(_OWORD*)(a1 + 16) = v11;
      *(_OWORD*)(a1 + 32) = v14;
      *(_OWORD*)(a1 + 48) = v15;
      *(_OWORD*)(v5 - 32) = v12;
      *(_OWORD*)(v5 - 16) = v13;
    }
    else {
      *(long double*)a1 = result;
      *(_OWORD*)(a1 + 16) = v11;
      *(_OWORD*)(v5 - 32) = v12;
      *(_OWORD*)(v5 - 16) = v13;
    }
  }
  else if (a3 < 0x10) {
    if ((a3 & 8) != 0) {
      v7 = *(_QWORD*)(v4 - 8);
      *(_QWORD*)a1 = *(_QWORD*)a2;
      *(_QWORD*)(v5 - 8) = v7;
    }
    else if ((a3 & 4) != 0) {
      v8 = *(_DWORD*)(v4 - 4);
      *(_DWORD*)a1 = *(_DWORD*)a2;
      *(_DWORD*)(v5 - 4) = v8;
    }
    else if (a3 != 0) {
      v9 = *(_BYTE*)(v4 - 1);
      v10 = *(_BYTE*)(a2 + (a3 >> 1));
      *(_BYTE*)a1 = *(_BYTE*)a2;
      *(_BYTE*)(a1 + (a3 >> 1)) = v10;
      *(_BYTE*)(v5 - 1) = v9;
    }
  }
  else {
    result = *(long double*)a2;
    v6 = *(_OWORD*)(v4 - 16);
    *(_OWORD*)a1 = *(_OWORD*)a2;
    *(_OWORD*)(v5 - 16) = v6;
  }
  return result;
}

__int64 SdkHr_7bc480(__int64 a1, unsigned int a2)
{
  SdkRoutine_afbd0();
  return a2;
}

__int64 SdkHr_7bc890(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bc8c0();
  }
  return result;
}

__int64 SdkHr_7bd250(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bd280();
  }
  return result;
}

__int64 SdkHr_7bd890(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bd8c0();
  }
  return result;
}

__int64 SdkHr_7be280(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7be2c0();
  }
  return result;
}

__int64 SdkHr_7be930(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7be960();
  }
  return result;
}

__int64 SdkHr_7befd0(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bf000();
  }
  return result;
}

__int64 SdkHr_7bf640(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bf680();
  }
  return result;
}

__int64 SdkHr_7bfc90(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7bfcc0();
  }
  return result;
}

__int64 SdkHr_7c02d0(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7c0300();
  }
  return result;
}

__int64 SdkHr_7c0910(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7c0940();
  }
  return result;
}

__int64 SdkHr_7c0f50(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7c0f80();
  }
  return result;
}

__int64 SdkHr_7c1590(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7c15c0();
  }
  return result;
}

__int64 SdkHr_7c1bd0(__int64 result, __int64 a2)
{
  if (result != a2) {
    return SdkRoutine_7c1c00();
  }
  return result;
}

bool SdkHr_7c3100(unsigned __int8* a1, unsigned __int8* a2)
{
  signed __int64 v2;
  unsigned int v4;
  unsigned int v5;
  unsigned __int8 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned __int8 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned __int8 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned __int8 v24;
  unsigned __int8 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned __int8 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned __int8 v35;
  unsigned int v36;
  unsigned __int8* v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned __int8 v41;
  unsigned __int8 v42;
  unsigned __int8 v43;
  unsigned __int8* v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  __int64 v49;
  unsigned int v50;
  unsigned int v51;
  unsigned __int8 v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned __int8 v57;
  unsigned int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned __int8 v62;

  v2 = a2 - a1;
  if (a2 - a1 > 2) {
    switch (v2) {
    case 3LL:
      v28 = a1[1];
      v29 = *(a2 - 1);
      if (v28 >= v29) {
        v30 = *(a2 - 1);
      }
      else {
        v30 = a1[1];
      }
      if (v28 <= v29) {
        LOBYTE(v28) = *(a2 - 1);
      }
      *(a2 - 1) = v28;
      a1[1] = v30;
      v31 = *(a2 - 1);
      v32 = *a1;
      if (v31 >= v32) {
        v33 = *a1;
      }
      else {
        v33 = *(a2 - 1);
      }
      if (v31 <= v32) {
        LOBYTE(v31) = *a1;
      }
      *(a2 - 1) = v31;
      v34 = a1[1];
      v35 = *a1;
      if (v33 >= v34) {
        v35 = a1[1];
      }
      if (v33 > v34) {
        LOBYTE(v34) = v33;
      }
      *a1 = v35;
      a1[1] = v34;
      return true;
    case 4LL:
      v50 = *a1;
      v51 = a1[2];
      if (v50 >= v51) {
        v52 = a1[2];
      }
      else {
        v52 = *a1;
      }
      if (v50 <= v51) {
        LOBYTE(v50) = a1[2];
      }
      a1[2] = v50;
      *a1 = v52;
      v53 = a1[1];
      v54 = *(a2 - 1);
      if (v53 >= v54) {
        v55 = *(a2 - 1);
      }
      else {
        v55 = a1[1];
      }
      if (v53 <= v54) {
        LOBYTE(v53) = *(a2 - 1);
      }
      *(a2 - 1) = v53;
      v56 = *a1;
      if (v56 >= v55) {
        v57 = v55;
      }
      else {
        v57 = *a1;
      }
      if (v56 <= v55) {
        LOBYTE(v56) = v55;
      }
      a1[1] = v56;
      *a1 = v57;
      v58 = a1[2];
      v59 = *(a2 - 1);
      if (v58 >= v59) {
        v60 = *(a2 - 1);
      }
      else {
        v60 = a1[2];
      }
      if (v58 <= v59) {
        LOBYTE(v58) = *(a2 - 1);
      }
      *(a2 - 1) = v58;
      v61 = a1[1];
      if (v61 >= v60) {
        v62 = v60;
      }
      else {
        v62 = a1[1];
      }
      if (v61 <= v60) {
        LOBYTE(v61) = v60;
      }
      a1[2] = v61;
      a1[1] = v62;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (v4 >= v5) {
        v6 = a1[1];
      }
      else {
        v6 = *a1;
      }
      if (v4 <= v5) {
        LOBYTE(v4) = a1[1];
      }
      a1[1] = v4;
      *a1 = v6;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 >= v8) {
        v9 = *(a2 - 1);
      }
      else {
        v9 = a1[3];
      }
      if (v7 <= v8) {
        LOBYTE(v7) = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      a1[3] = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 >= v11) {
        v12 = a1[2];
      }
      else {
        v12 = *(a2 - 1);
      }
      if (v10 <= v11) {
        LOBYTE(v10) = a1[2];
      }
      *(a2 - 1) = v10;
      v13 = a1[3];
      v14 = a1[2];
      if (v12 >= v13) {
        v14 = a1[3];
      }
      if (v12 > v13) {
        LOBYTE(v13) = v12;
      }
      a1[2] = v14;
      a1[3] = v13;
      v15 = a1[1];
      v16 = *(a2 - 1);
      if (v15 >= v16) {
        v17 = *(a2 - 1);
      }
      else {
        v17 = a1[1];
      }
      if (v15 <= v16) {
        LOBYTE(v15) = *(a2 - 1);
      }
      *(a2 - 1) = v15;
      v18 = a1[3];
      v19 = *a1;
      v20 = a1[2];
      if (v18 >= v19) {
        v21 = *a1;
      }
      else {
        v21 = a1[3];
      }
      if (v18 <= v19) {
        v18 = *a1;
      }
      if (v21 >= v20) {
        LOBYTE(v19) = a1[2];
      }
      *a1 = v19;
      if (v21 <= v20) {
        v22 = v20;
      }
      else {
        v22 = v21;
      }
      if (v18 >= v17) {
        v23 = v17;
      }
      else {
        v23 = v18;
      }
      if (v18 <= v17) {
        LOBYTE(v18) = v17;
      }
      a1[3] = v18;
      if (v23 >= v22) {
        v24 = v22;
      }
      else {
        v24 = v17;
      }
      a1[1] = v24;
      if (v23 <= v22) {
        v25 = v22;
      }
      else {
        v25 = v23;
      }
      a1[2] = v25;
      return true;
    default:
      break;
    }
    goto LABEL_71;
  }
  if ((unsigned __int64)(a2 - a1) < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_71:
    v37 = a1 + 2;
    v36 = a1[2];
    v38 = a1[1];
    if (v38 >= v36) {
      v39 = a1[2];
    }
    else {
      v39 = a1[1];
    }
    if (v38 > v36) {
      v36 = a1[1];
    }
    v40 = *a1;
    if (v36 >= v40) {
      v41 = *a1;
    }
    else {
      v41 = v36;
    }
    if (v36 <= v40) {
      LOBYTE(v36) = *a1;
    }
    *v37 = v36;
    if (v40 >= v39) {
      v42 = v39;
    }
    else {
      v42 = v40;
    }
    *a1 = v42;
    if (v40 >= v39) {
      v43 = v41;
    }
    else {
      v43 = v39;
    }
    a1[1] = v43;
    v44 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v45 = 0;
    v46 = 0;
    while (1) {
      v47 = *v44;
      v48 = *v37;
      if (v47 < v48) {
        break;
      }
    LABEL_96:
      v37 = v44++;
      ++v45;
      if (v44 == a2) {
        return true;
      }
    }
    v49 = v45;
    do {
      a1[v49 + 3] = v48;
      if (v49 == -2) {
        ++v46;
        *a1 = v47;
        if (v46 != 8) {
          goto LABEL_96;
        }
        return v44 + 1 == a2;
      }
      v48 = a1[v49-- + 1];
    } while (v47 < v48);
    ++v46;
    a1[v49 + 3] = v47;
    if (v46 != 8) {
      goto LABEL_96;
    }
    return v44 + 1 == a2;
  }
  v26 = *(a2 - 1);
  v27 = *a1;
  if (v26 >= v27) {
    return true;
  }
  *a1 = v26;
  *(a2 - 1) = v27;
  return true;
}

bool SdkHr_7c40a0(unsigned int* a1, unsigned int* a2)
{
  __int64 v2;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int* v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int* v40;
  __int64 v41;
  int v42;
  unsigned int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v26 = a1[1];
      v27 = *(a2 - 1);
      if (v26 >= v27) {
        v28 = *(a2 - 1);
      }
      else {
        v28 = a1[1];
      }
      if (v26 <= v27) {
        v26 = *(a2 - 1);
      }
      *(a2 - 1) = v26;
      a1[1] = v28;
      v29 = *(a2 - 1);
      if (v29 >= *a1) {
        v30 = *a1;
      }
      else {
        v30 = *(a2 - 1);
      }
      if (v29 <= *a1) {
        v29 = *a1;
      }
      *(a2 - 1) = v29;
      v32 = *a1;
      v31 = a1[1];
      if (v30 >= v31) {
        v32 = a1[1];
      }
      if (v30 > v31) {
        v31 = v30;
      }
      *a1 = v32;
      a1[1] = v31;
      return true;
    case 4LL:
      v49 = a1[1];
      v48 = a1[2];
      if (*a1 >= v48) {
        v50 = a1[2];
      }
      else {
        v50 = *a1;
      }
      if (*a1 > v48) {
        v48 = *a1;
      }
      a1[2] = v48;
      *a1 = v50;
      v51 = *(a2 - 1);
      if (v49 >= v51) {
        v52 = *(a2 - 1);
      }
      else {
        v52 = v49;
      }
      if (v49 > v51) {
        v51 = v49;
      }
      *(a2 - 1) = v51;
      v53 = *a1;
      if (*a1 >= v52) {
        v54 = v52;
      }
      else {
        v54 = *a1;
      }
      if (v53 <= v52) {
        v53 = v52;
      }
      *a1 = v54;
      a1[1] = v53;
      v55 = a1[2];
      v56 = *(a2 - 1);
      if (v55 >= v56) {
        v57 = *(a2 - 1);
      }
      else {
        v57 = a1[2];
      }
      if (v55 <= v56) {
        v55 = *(a2 - 1);
      }
      *(a2 - 1) = v55;
      v58 = a1[1];
      if (v58 >= v57) {
        v59 = v57;
      }
      else {
        v59 = a1[1];
      }
      if (v58 <= v57) {
        v58 = v57;
      }
      a1[1] = v59;
      a1[2] = v58;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (*a1 >= v5) {
        v6 = a1[1];
      }
      else {
        v6 = *a1;
      }
      if (v4 <= v5) {
        v4 = a1[1];
      }
      *a1 = v6;
      a1[1] = v4;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 >= v8) {
        v9 = *(a2 - 1);
      }
      else {
        v9 = a1[3];
      }
      if (v7 <= v8) {
        v7 = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      a1[3] = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 >= v11) {
        v12 = a1[2];
      }
      else {
        v12 = *(a2 - 1);
      }
      if (v10 <= v11) {
        v10 = a1[2];
      }
      *(a2 - 1) = v10;
      v14 = a1[2];
      v13 = a1[3];
      v15 = a1[1];
      if (v12 >= v13) {
        v14 = a1[3];
      }
      if (v12 > v13) {
        v13 = v12;
      }
      a1[2] = v14;
      a1[3] = v13;
      v16 = *(a2 - 1);
      if (v15 >= v16) {
        v17 = *(a2 - 1);
      }
      else {
        v17 = v15;
      }
      if (v15 > v16) {
        v16 = v15;
      }
      *(a2 - 1) = v16;
      v18 = *a1;
      v20 = a1[2];
      v19 = a1[3];
      if (v19 >= *a1) {
        v21 = *a1;
      }
      else {
        v21 = a1[3];
      }
      if (v19 <= v18) {
        v19 = *a1;
      }
      if (v21 >= v20) {
        v18 = a1[2];
      }
      if (v21 > v20) {
        v20 = v21;
      }
      if (v19 >= v17) {
        v22 = v17;
      }
      else {
        v22 = v19;
      }
      if (v19 <= v17) {
        v19 = v17;
      }
      if (v22 >= v20) {
        v17 = v20;
      }
      *a1 = v18;
      a1[1] = v17;
      if (v22 <= v20) {
        v23 = v20;
      }
      else {
        v23 = v22;
      }
      a1[2] = v23;
      a1[3] = v19;
      return true;
    default:
      break;
    }
    goto LABEL_69;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_69:
    v34 = a1 + 2;
    v33 = a1[2];
    v36 = *a1;
    v35 = a1[1];
    if (v35 >= v33) {
      v37 = a1[2];
    }
    else {
      v37 = a1[1];
    }
    if (v35 > v33) {
      v33 = a1[1];
    }
    if (v33 >= v36) {
      v38 = *a1;
    }
    else {
      v38 = v33;
    }
    if (v33 <= v36) {
      v33 = *a1;
    }
    *v34 = v33;
    if (v36 >= v37) {
      v39 = v37;
    }
    else {
      v39 = v36;
    }
    if (v36 < v37) {
      v38 = v37;
    }
    *a1 = v39;
    a1[1] = v38;
    v40 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v41 = 12;
    v42 = 0;
    while (1) {
      v43 = *v40;
      v44 = *v34;
      if (*v40 < v44) {
        break;
      }
    LABEL_93:
      v34 = v40++;
      v41 += 4;
      if (v40 == a2) {
        return true;
      }
    }
    v45 = v41;
    do {
      v46 = v45 - 4;
      *(unsigned int*)((char*)a1 + v45) = v44;
      if (v45 == 4) {
        ++v42;
        *a1 = v43;
        if (v42 != 8) {
          goto LABEL_93;
        }
        return v40 + 1 == a2;
      }
      v47 = (char*)a1 + v45;
      v45 -= 4;
      v44 = *((_DWORD*)v47 - 2);
    } while (v43 < v44);
    ++v42;
    *(unsigned int*)((char*)a1 + v46) = v43;
    if (v42 != 8) {
      goto LABEL_93;
    }
    return v40 + 1 == a2;
  }
  v24 = *(a2 - 1);
  v25 = *a1;
  if (v24 >= *a1) {
    return true;
  }
  *a1 = v24;
  *(a2 - 1) = v25;
  return true;
}

bool SdkHr_7c4f20(char* a1, char* a2)
{
  signed __int64 v2;
  int v4;
  int v5;
  char v6;
  int v7;
  int v8;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  char v24;
  char v25;
  int v26;
  int v27;
  int v28;
  int v29;
  char v30;
  int v31;
  int v32;
  int v33;
  int v34;
  char v35;
  int v36;
  char* v37;
  int v38;
  int v39;
  int v40;
  char v41;
  char v42;
  char v43;
  char* v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  int v50;
  int v51;
  char v52;
  int v53;
  int v54;
  int v55;
  int v56;
  char v57;
  int v58;
  int v59;
  int v60;
  int v61;
  char v62;

  v2 = a2 - a1;
  if (a2 - a1 > 2) {
    switch (v2) {
    case 3LL:
      v28 = a1[1];
      v29 = *(a2 - 1);
      if (v28 >= v29) {
        v30 = *(a2 - 1);
      }
      else {
        v30 = a1[1];
      }
      if (v28 <= v29) {
        LOBYTE(v28) = *(a2 - 1);
      }
      *(a2 - 1) = v28;
      a1[1] = v30;
      v31 = *(a2 - 1);
      v32 = *a1;
      if (v31 >= v32) {
        v33 = *a1;
      }
      else {
        v33 = *(a2 - 1);
      }
      if (v31 <= v32) {
        LOBYTE(v31) = *a1;
      }
      *(a2 - 1) = v31;
      v34 = a1[1];
      v35 = *a1;
      if (v33 >= v34) {
        v35 = a1[1];
      }
      if (v33 > v34) {
        LOBYTE(v34) = v33;
      }
      *a1 = v35;
      a1[1] = v34;
      return true;
    case 4LL:
      v50 = *a1;
      v51 = a1[2];
      if (v50 >= v51) {
        v52 = a1[2];
      }
      else {
        v52 = *a1;
      }
      if (v50 <= v51) {
        LOBYTE(v50) = a1[2];
      }
      a1[2] = v50;
      *a1 = v52;
      v53 = a1[1];
      v54 = *(a2 - 1);
      if (v53 >= v54) {
        v55 = *(a2 - 1);
      }
      else {
        v55 = a1[1];
      }
      if (v53 <= v54) {
        LOBYTE(v53) = *(a2 - 1);
      }
      *(a2 - 1) = v53;
      v56 = *a1;
      if (v56 >= v55) {
        v57 = v55;
      }
      else {
        v57 = *a1;
      }
      if (v56 <= v55) {
        LOBYTE(v56) = v55;
      }
      a1[1] = v56;
      *a1 = v57;
      v58 = a1[2];
      v59 = *(a2 - 1);
      if (v58 >= v59) {
        v60 = *(a2 - 1);
      }
      else {
        v60 = a1[2];
      }
      if (v58 <= v59) {
        LOBYTE(v58) = *(a2 - 1);
      }
      *(a2 - 1) = v58;
      v61 = a1[1];
      if (v61 >= v60) {
        v62 = v60;
      }
      else {
        v62 = a1[1];
      }
      if (v61 <= v60) {
        LOBYTE(v61) = v60;
      }
      a1[2] = v61;
      a1[1] = v62;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (v4 >= v5) {
        v6 = a1[1];
      }
      else {
        v6 = *a1;
      }
      if (v4 <= v5) {
        LOBYTE(v4) = a1[1];
      }
      a1[1] = v4;
      *a1 = v6;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 >= v8) {
        v9 = *(a2 - 1);
      }
      else {
        v9 = a1[3];
      }
      if (v7 <= v8) {
        LOBYTE(v7) = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      a1[3] = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 >= v11) {
        v12 = a1[2];
      }
      else {
        v12 = *(a2 - 1);
      }
      if (v10 <= v11) {
        LOBYTE(v10) = a1[2];
      }
      *(a2 - 1) = v10;
      v13 = a1[3];
      v14 = a1[2];
      if (v12 >= v13) {
        v14 = a1[3];
      }
      if (v12 > v13) {
        LOBYTE(v13) = v12;
      }
      a1[2] = v14;
      a1[3] = v13;
      v15 = a1[1];
      v16 = *(a2 - 1);
      if (v15 >= v16) {
        v17 = *(a2 - 1);
      }
      else {
        v17 = a1[1];
      }
      if (v15 <= v16) {
        LOBYTE(v15) = *(a2 - 1);
      }
      *(a2 - 1) = v15;
      v18 = a1[3];
      v19 = *a1;
      v20 = a1[2];
      if (v18 >= v19) {
        v21 = *a1;
      }
      else {
        v21 = a1[3];
      }
      if (v18 <= v19) {
        v18 = *a1;
      }
      if (v21 >= v20) {
        LOBYTE(v19) = a1[2];
      }
      *a1 = v19;
      if (v21 <= v20) {
        v22 = v20;
      }
      else {
        v22 = v21;
      }
      if (v18 >= v17) {
        v23 = v17;
      }
      else {
        v23 = v18;
      }
      if (v18 <= v17) {
        LOBYTE(v18) = v17;
      }
      a1[3] = v18;
      if (v23 >= v22) {
        v24 = v22;
      }
      else {
        v24 = v17;
      }
      a1[1] = v24;
      if (v23 <= v22) {
        v25 = v22;
      }
      else {
        v25 = v23;
      }
      a1[2] = v25;
      return true;
    default:
      break;
    }
    goto LABEL_71;
  }
  if ((unsigned __int64)(a2 - a1) < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_71:
    v37 = a1 + 2;
    v36 = a1[2];
    v38 = a1[1];
    if (v38 >= v36) {
      v39 = a1[2];
    }
    else {
      v39 = a1[1];
    }
    if (v38 > v36) {
      v36 = a1[1];
    }
    v40 = *a1;
    if (v36 >= v40) {
      v41 = *a1;
    }
    else {
      v41 = v36;
    }
    if (v36 <= v40) {
      LOBYTE(v36) = *a1;
    }
    *v37 = v36;
    if (v40 >= v39) {
      v42 = v39;
    }
    else {
      v42 = v40;
    }
    *a1 = v42;
    if (v40 >= v39) {
      v43 = v41;
    }
    else {
      v43 = v39;
    }
    a1[1] = v43;
    v44 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v45 = 0;
    v46 = 0;
    while (1) {
      v47 = *v44;
      v48 = *v37;
      if (v47 < v48) {
        break;
      }
    LABEL_96:
      v37 = v44++;
      ++v45;
      if (v44 == a2) {
        return true;
      }
    }
    v49 = v45;
    do {
      a1[v49 + 3] = v48;
      if (v49 == -2) {
        ++v46;
        *a1 = v47;
        if (v46 != 8) {
          goto LABEL_96;
        }
        return v44 + 1 == a2;
      }
      v48 = a1[v49-- + 1];
    } while (v47 < v48);
    ++v46;
    a1[v49 + 3] = v47;
    if (v46 != 8) {
      goto LABEL_96;
    }
    return v44 + 1 == a2;
  }
  v26 = *(a2 - 1);
  v27 = *a1;
  if (v26 >= v27) {
    return true;
  }
  *a1 = v26;
  *(a2 - 1) = v27;
  return true;
}

bool SdkHr_7c6e00(unsigned __int16* a1, unsigned __int16* a2)
{
  __int64 v2;
  unsigned int v4;
  unsigned int v5;
  unsigned __int16 v6;
  unsigned int v7;
  unsigned int v8;
  unsigned __int16 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned __int16 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned __int16 v24;
  unsigned __int16 v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned __int16 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned __int16 v35;
  unsigned int v36;
  unsigned __int16* v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned __int16 v41;
  unsigned __int16 v42;
  unsigned __int16 v43;
  unsigned __int16* v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  unsigned int v52;
  unsigned int v53;
  unsigned __int16 v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned __int16 v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned __int16 v64;

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v28 = a1[1];
      v29 = *(a2 - 1);
      if (v28 >= v29) {
        v30 = *(a2 - 1);
      }
      else {
        v30 = a1[1];
      }
      if (v28 <= v29) {
        LOWORD(v28) = *(a2 - 1);
      }
      *(a2 - 1) = v28;
      a1[1] = v30;
      v31 = *(a2 - 1);
      v32 = *a1;
      if (v31 >= v32) {
        v33 = *a1;
      }
      else {
        v33 = *(a2 - 1);
      }
      if (v31 <= v32) {
        LOWORD(v31) = *a1;
      }
      *(a2 - 1) = v31;
      v34 = a1[1];
      v35 = *a1;
      if (v33 >= v34) {
        v35 = a1[1];
      }
      if (v33 > v34) {
        LOWORD(v34) = v33;
      }
      *a1 = v35;
      a1[1] = v34;
      return true;
    case 4LL:
      v52 = *a1;
      v53 = a1[2];
      if (v52 >= v53) {
        v54 = a1[2];
      }
      else {
        v54 = *a1;
      }
      if (v52 <= v53) {
        LOWORD(v52) = a1[2];
      }
      a1[2] = v52;
      *a1 = v54;
      v55 = a1[1];
      v56 = *(a2 - 1);
      if (v55 >= v56) {
        v57 = *(a2 - 1);
      }
      else {
        v57 = a1[1];
      }
      if (v55 <= v56) {
        LOWORD(v55) = *(a2 - 1);
      }
      *(a2 - 1) = v55;
      v58 = *a1;
      if (v58 >= v57) {
        v59 = v57;
      }
      else {
        v59 = *a1;
      }
      if (v58 <= v57) {
        LOWORD(v58) = v57;
      }
      a1[1] = v58;
      *a1 = v59;
      v60 = a1[2];
      v61 = *(a2 - 1);
      if (v60 >= v61) {
        v62 = *(a2 - 1);
      }
      else {
        v62 = a1[2];
      }
      if (v60 <= v61) {
        LOWORD(v60) = *(a2 - 1);
      }
      *(a2 - 1) = v60;
      v63 = a1[1];
      if (v63 >= v62) {
        v64 = v62;
      }
      else {
        v64 = a1[1];
      }
      if (v63 <= v62) {
        LOWORD(v63) = v62;
      }
      a1[2] = v63;
      a1[1] = v64;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (v4 >= v5) {
        v6 = a1[1];
      }
      else {
        v6 = *a1;
      }
      if (v4 <= v5) {
        LOWORD(v4) = a1[1];
      }
      a1[1] = v4;
      *a1 = v6;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 >= v8) {
        v9 = *(a2 - 1);
      }
      else {
        v9 = a1[3];
      }
      if (v7 <= v8) {
        LOWORD(v7) = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      a1[3] = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 >= v11) {
        v12 = a1[2];
      }
      else {
        v12 = *(a2 - 1);
      }
      if (v10 <= v11) {
        LOWORD(v10) = a1[2];
      }
      *(a2 - 1) = v10;
      v13 = a1[3];
      v14 = a1[2];
      if (v12 >= v13) {
        v14 = a1[3];
      }
      if (v12 > v13) {
        LOWORD(v13) = v12;
      }
      a1[2] = v14;
      a1[3] = v13;
      v15 = a1[1];
      v16 = *(a2 - 1);
      if (v15 >= v16) {
        v17 = *(a2 - 1);
      }
      else {
        v17 = a1[1];
      }
      if (v15 <= v16) {
        LOWORD(v15) = *(a2 - 1);
      }
      *(a2 - 1) = v15;
      v18 = a1[3];
      v19 = *a1;
      v20 = a1[2];
      if (v18 >= v19) {
        v21 = *a1;
      }
      else {
        v21 = a1[3];
      }
      if (v18 <= v19) {
        v18 = *a1;
      }
      if (v21 >= v20) {
        LOWORD(v19) = a1[2];
      }
      *a1 = v19;
      if (v21 <= v20) {
        v22 = v20;
      }
      else {
        v22 = v21;
      }
      if (v18 >= v17) {
        v23 = v17;
      }
      else {
        v23 = v18;
      }
      if (v18 <= v17) {
        LOWORD(v18) = v17;
      }
      a1[3] = v18;
      if (v23 >= v22) {
        v24 = v22;
      }
      else {
        v24 = v17;
      }
      a1[1] = v24;
      if (v23 <= v22) {
        v25 = v22;
      }
      else {
        v25 = v23;
      }
      a1[2] = v25;
      return true;
    default:
      break;
    }
    goto LABEL_71;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_71:
    v37 = a1 + 2;
    v36 = a1[2];
    v38 = a1[1];
    if (v38 >= v36) {
      v39 = a1[2];
    }
    else {
      v39 = a1[1];
    }
    if (v38 > v36) {
      v36 = a1[1];
    }
    v40 = *a1;
    if (v36 >= v40) {
      v41 = *a1;
    }
    else {
      v41 = v36;
    }
    if (v36 <= v40) {
      LOWORD(v36) = *a1;
    }
    *v37 = v36;
    if (v40 >= v39) {
      v42 = v39;
    }
    else {
      v42 = v40;
    }
    *a1 = v42;
    if (v40 >= v39) {
      v43 = v41;
    }
    else {
      v43 = v39;
    }
    a1[1] = v43;
    v44 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v45 = 6;
    v46 = 0;
    while (1) {
      v47 = *v44;
      v48 = *v37;
      if (v47 < v48) {
        break;
      }
    LABEL_96:
      v37 = v44++;
      v45 += 2;
      if (v44 == a2) {
        return true;
      }
    }
    v49 = v45;
    do {
      v50 = v49 - 2;
      *(unsigned __int16*)((char*)a1 + v49) = v48;
      if (v49 == 2) {
        ++v46;
        *a1 = v47;
        if (v46 != 8) {
          goto LABEL_96;
        }
        return v44 + 1 == a2;
      }
      v51 = (char*)a1 + v49;
      v49 -= 2;
      v48 = *((unsigned __int16*)v51 - 2);
    } while (v47 < v48);
    ++v46;
    *(unsigned __int16*)((char*)a1 + v50) = v47;
    if (v46 != 8) {
      goto LABEL_96;
    }
    return v44 + 1 == a2;
  }
  v26 = *(a2 - 1);
  v27 = *a1;
  if (v26 >= v27) {
    return true;
  }
  *a1 = v26;
  *(a2 - 1) = v27;
  return true;
}

bool SdkHr_7c7c40(int* a1, int* a2)
{
  __int64 v2;
  int v4;
  int v5;
  int v6;
  int v7;
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
  int v19;
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
  int v33;
  int* v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int* v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  char* v47;
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

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v26 = a1[1];
      v27 = *(a2 - 1);
      if (v26 >= v27) {
        v28 = *(a2 - 1);
      }
      else {
        v28 = a1[1];
      }
      if (v26 <= v27) {
        v26 = *(a2 - 1);
      }
      *(a2 - 1) = v26;
      a1[1] = v28;
      v29 = *(a2 - 1);
      if (v29 >= *a1) {
        v30 = *a1;
      }
      else {
        v30 = *(a2 - 1);
      }
      if (v29 <= *a1) {
        v29 = *a1;
      }
      *(a2 - 1) = v29;
      v32 = *a1;
      v31 = a1[1];
      if (v30 >= v31) {
        v32 = a1[1];
      }
      if (v30 > v31) {
        v31 = v30;
      }
      *a1 = v32;
      a1[1] = v31;
      return true;
    case 4LL:
      v49 = a1[1];
      v48 = a1[2];
      if (*a1 >= v48) {
        v50 = a1[2];
      }
      else {
        v50 = *a1;
      }
      if (*a1 > v48) {
        v48 = *a1;
      }
      a1[2] = v48;
      *a1 = v50;
      v51 = *(a2 - 1);
      if (v49 >= v51) {
        v52 = *(a2 - 1);
      }
      else {
        v52 = v49;
      }
      if (v49 > v51) {
        v51 = v49;
      }
      *(a2 - 1) = v51;
      v53 = *a1;
      if (*a1 >= v52) {
        v54 = v52;
      }
      else {
        v54 = *a1;
      }
      if (v53 <= v52) {
        v53 = v52;
      }
      *a1 = v54;
      a1[1] = v53;
      v55 = a1[2];
      v56 = *(a2 - 1);
      if (v55 >= v56) {
        v57 = *(a2 - 1);
      }
      else {
        v57 = a1[2];
      }
      if (v55 <= v56) {
        v55 = *(a2 - 1);
      }
      *(a2 - 1) = v55;
      v58 = a1[1];
      if (v58 >= v57) {
        v59 = v57;
      }
      else {
        v59 = a1[1];
      }
      if (v58 <= v57) {
        v58 = v57;
      }
      a1[1] = v59;
      a1[2] = v58;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (*a1 >= v5) {
        v6 = a1[1];
      }
      else {
        v6 = *a1;
      }
      if (v4 <= v5) {
        v4 = a1[1];
      }
      *a1 = v6;
      a1[1] = v4;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 >= v8) {
        v9 = *(a2 - 1);
      }
      else {
        v9 = a1[3];
      }
      if (v7 <= v8) {
        v7 = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      a1[3] = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 >= v11) {
        v12 = a1[2];
      }
      else {
        v12 = *(a2 - 1);
      }
      if (v10 <= v11) {
        v10 = a1[2];
      }
      *(a2 - 1) = v10;
      v14 = a1[2];
      v13 = a1[3];
      v15 = a1[1];
      if (v12 >= v13) {
        v14 = a1[3];
      }
      if (v12 > v13) {
        v13 = v12;
      }
      a1[2] = v14;
      a1[3] = v13;
      v16 = *(a2 - 1);
      if (v15 >= v16) {
        v17 = *(a2 - 1);
      }
      else {
        v17 = v15;
      }
      if (v15 > v16) {
        v16 = v15;
      }
      *(a2 - 1) = v16;
      v18 = *a1;
      v20 = a1[2];
      v19 = a1[3];
      if (v19 >= *a1) {
        v21 = *a1;
      }
      else {
        v21 = a1[3];
      }
      if (v19 <= v18) {
        v19 = *a1;
      }
      if (v21 >= v20) {
        v18 = a1[2];
      }
      if (v21 > v20) {
        v20 = v21;
      }
      if (v19 >= v17) {
        v22 = v17;
      }
      else {
        v22 = v19;
      }
      if (v19 <= v17) {
        v19 = v17;
      }
      if (v22 >= v20) {
        v17 = v20;
      }
      *a1 = v18;
      a1[1] = v17;
      if (v22 <= v20) {
        v23 = v20;
      }
      else {
        v23 = v22;
      }
      a1[2] = v23;
      a1[3] = v19;
      return true;
    default:
      break;
    }
    goto LABEL_69;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_69:
    v34 = a1 + 2;
    v33 = a1[2];
    v36 = *a1;
    v35 = a1[1];
    if (v35 >= v33) {
      v37 = a1[2];
    }
    else {
      v37 = a1[1];
    }
    if (v35 > v33) {
      v33 = a1[1];
    }
    if (v33 >= v36) {
      v38 = *a1;
    }
    else {
      v38 = v33;
    }
    if (v33 <= v36) {
      v33 = *a1;
    }
    *v34 = v33;
    if (v36 >= v37) {
      v39 = v37;
    }
    else {
      v39 = v36;
    }
    if (v36 < v37) {
      v38 = v37;
    }
    *a1 = v39;
    a1[1] = v38;
    v40 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v41 = 12;
    v42 = 0;
    while (1) {
      v43 = *v40;
      v44 = *v34;
      if (*v40 < v44) {
        break;
      }
    LABEL_93:
      v34 = v40++;
      v41 += 4;
      if (v40 == a2) {
        return true;
      }
    }
    v45 = v41;
    do {
      v46 = v45 - 4;
      *(int*)((char*)a1 + v45) = v44;
      if (v45 == 4) {
        ++v42;
        *a1 = v43;
        if (v42 != 8) {
          goto LABEL_93;
        }
        return v40 + 1 == a2;
      }
      v47 = (char*)a1 + v45;
      v45 -= 4;
      v44 = *((_DWORD*)v47 - 2);
    } while (v43 < v44);
    ++v42;
    *(int*)((char*)a1 + v46) = v43;
    if (v42 != 8) {
      goto LABEL_93;
    }
    return v40 + 1 == a2;
  }
  v24 = *(a2 - 1);
  v25 = *a1;
  if (v24 >= *a1) {
    return true;
  }
  *a1 = v24;
  *(a2 - 1) = v25;
  return true;
}

bool SdkHr_7c8a60(__int64* a1, __int64* a2)
{
  __int64 v2;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char* v47;
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

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v26 = a1[1];
      v27 = *(a2 - 1);
      if (v26 >= v27) {
        v28 = *(a2 - 1);
      }
      else {
        v28 = a1[1];
      }
      if (v26 <= v27) {
        v26 = *(a2 - 1);
      }
      *(a2 - 1) = v26;
      a1[1] = v28;
      v29 = *(a2 - 1);
      if (v29 >= *a1) {
        v30 = *a1;
      }
      else {
        v30 = *(a2 - 1);
      }
      if (v29 <= *a1) {
        v29 = *a1;
      }
      *(a2 - 1) = v29;
      v32 = *a1;
      v31 = a1[1];
      if (v30 >= v31) {
        v32 = a1[1];
      }
      if (v30 > v31) {
        v31 = v30;
      }
      *a1 = v32;
      a1[1] = v31;
      return true;
    case 4LL:
      v49 = a1[1];
      v48 = a1[2];
      if (*a1 >= v48) {
        v50 = a1[2];
      }
      else {
        v50 = *a1;
      }
      if (*a1 > v48) {
        v48 = *a1;
      }
      a1[2] = v48;
      *a1 = v50;
      v51 = *(a2 - 1);
      if (v49 >= v51) {
        v52 = *(a2 - 1);
      }
      else {
        v52 = v49;
      }
      if (v49 > v51) {
        v51 = v49;
      }
      *(a2 - 1) = v51;
      v53 = *a1;
      if (*a1 >= v52) {
        v54 = v52;
      }
      else {
        v54 = *a1;
      }
      if (*a1 <= v52) {
        v53 = v52;
      }
      *a1 = v54;
      a1[1] = v53;
      v55 = a1[2];
      v56 = *(a2 - 1);
      if (v55 >= v56) {
        v57 = *(a2 - 1);
      }
      else {
        v57 = a1[2];
      }
      if (v55 <= v56) {
        v55 = *(a2 - 1);
      }
      *(a2 - 1) = v55;
      v58 = a1[1];
      if (v58 >= v57) {
        v59 = v57;
      }
      else {
        v59 = a1[1];
      }
      if (v58 <= v57) {
        v58 = v57;
      }
      a1[1] = v59;
      a1[2] = v58;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (*a1 >= v5) {
        v6 = a1[1];
      }
      else {
        v6 = *a1;
      }
      if (*a1 <= v5) {
        v4 = a1[1];
      }
      *a1 = v6;
      a1[1] = v4;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 >= v8) {
        v9 = *(a2 - 1);
      }
      else {
        v9 = a1[3];
      }
      if (v7 <= v8) {
        v7 = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      a1[3] = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 >= v11) {
        v12 = a1[2];
      }
      else {
        v12 = *(a2 - 1);
      }
      if (v10 <= v11) {
        v10 = a1[2];
      }
      *(a2 - 1) = v10;
      v14 = a1[2];
      v13 = a1[3];
      v15 = a1[1];
      if (v12 >= v13) {
        v14 = a1[3];
      }
      if (v12 > v13) {
        v13 = v12;
      }
      a1[2] = v14;
      a1[3] = v13;
      v16 = *(a2 - 1);
      if (v15 >= v16) {
        v17 = *(a2 - 1);
      }
      else {
        v17 = v15;
      }
      if (v15 > v16) {
        v16 = v15;
      }
      *(a2 - 1) = v16;
      v18 = *a1;
      v20 = a1[2];
      v19 = a1[3];
      if (v19 >= *a1) {
        v21 = *a1;
      }
      else {
        v21 = a1[3];
      }
      if (v19 <= *a1) {
        v19 = *a1;
      }
      if (v21 >= v20) {
        v18 = a1[2];
      }
      if (v21 > v20) {
        v20 = v21;
      }
      if (v19 >= v17) {
        v22 = v17;
      }
      else {
        v22 = v19;
      }
      if (v19 <= v17) {
        v19 = v17;
      }
      if (v22 >= v20) {
        v17 = v20;
      }
      *a1 = v18;
      a1[1] = v17;
      if (v22 <= v20) {
        v23 = v20;
      }
      else {
        v23 = v22;
      }
      a1[2] = v23;
      a1[3] = v19;
      return true;
    default:
      break;
    }
    goto LABEL_69;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_69:
    v34 = a1 + 2;
    v33 = a1[2];
    v36 = *a1;
    v35 = a1[1];
    if (v35 >= v33) {
      v37 = a1[2];
    }
    else {
      v37 = a1[1];
    }
    if (v35 > v33) {
      v33 = a1[1];
    }
    if (v33 >= v36) {
      v38 = *a1;
    }
    else {
      v38 = v33;
    }
    if (v33 <= v36) {
      v33 = *a1;
    }
    *v34 = v33;
    if (v36 >= v37) {
      v39 = v37;
    }
    else {
      v39 = v36;
    }
    if (v36 < v37) {
      v38 = v37;
    }
    *a1 = v39;
    a1[1] = v38;
    v40 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v41 = 24;
    v42 = 0;
    while (1) {
      v43 = *v40;
      v44 = *v34;
      if (*v40 < v44) {
        break;
      }
    LABEL_93:
      v34 = v40++;
      v41 += 8;
      if (v40 == a2) {
        return true;
      }
    }
    v45 = v41;
    do {
      v46 = v45 - 8;
      *(__int64*)((char*)a1 + v45) = v44;
      if (v45 == 8) {
        ++v42;
        *a1 = v43;
        if (v42 != 8) {
          goto LABEL_93;
        }
        return v40 + 1 == a2;
      }
      v47 = (char*)a1 + v45;
      v45 -= 8;
      v44 = *((_QWORD*)v47 - 2);
    } while (v43 < v44);
    ++v42;
    *(__int64*)((char*)a1 + v46) = v43;
    if (v42 != 8) {
      goto LABEL_93;
    }
    return v40 + 1 == a2;
  }
  v24 = *(a2 - 1);
  v25 = *a1;
  if (v24 >= *a1) {
    return true;
  }
  *a1 = v24;
  *(a2 - 1) = v25;
  return true;
}

bool SdkHr_7c9880(unsigned __int64* a1, unsigned __int64* a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64* v40;
  __int64 v41;
  int v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v26 = a1[1];
      v27 = *(a2 - 1);
      if (v26 >= v27) {
        v28 = *(a2 - 1);
      }
      else {
        v28 = a1[1];
      }
      if (v26 <= v27) {
        v26 = *(a2 - 1);
      }
      *(a2 - 1) = v26;
      a1[1] = v28;
      v29 = *(a2 - 1);
      if (v29 >= *a1) {
        v30 = *a1;
      }
      else {
        v30 = *(a2 - 1);
      }
      if (v29 <= *a1) {
        v29 = *a1;
      }
      *(a2 - 1) = v29;
      v32 = *a1;
      v31 = a1[1];
      if (v30 >= v31) {
        v32 = a1[1];
      }
      if (v30 > v31) {
        v31 = v30;
      }
      *a1 = v32;
      a1[1] = v31;
      return true;
    case 4LL:
      v49 = a1[1];
      v48 = a1[2];
      if (*a1 >= v48) {
        v50 = a1[2];
      }
      else {
        v50 = *a1;
      }
      if (*a1 > v48) {
        v48 = *a1;
      }
      a1[2] = v48;
      *a1 = v50;
      v51 = *(a2 - 1);
      if (v49 >= v51) {
        v52 = *(a2 - 1);
      }
      else {
        v52 = v49;
      }
      if (v49 > v51) {
        v51 = v49;
      }
      *(a2 - 1) = v51;
      v53 = *a1;
      if (*a1 >= v52) {
        v54 = v52;
      }
      else {
        v54 = *a1;
      }
      if (*a1 <= v52) {
        v53 = v52;
      }
      *a1 = v54;
      a1[1] = v53;
      v55 = a1[2];
      v56 = *(a2 - 1);
      if (v55 >= v56) {
        v57 = *(a2 - 1);
      }
      else {
        v57 = a1[2];
      }
      if (v55 <= v56) {
        v55 = *(a2 - 1);
      }
      *(a2 - 1) = v55;
      v58 = a1[1];
      if (v58 >= v57) {
        v59 = v57;
      }
      else {
        v59 = a1[1];
      }
      if (v58 <= v57) {
        v58 = v57;
      }
      a1[1] = v59;
      a1[2] = v58;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (*a1 >= v5) {
        v6 = a1[1];
      }
      else {
        v6 = *a1;
      }
      if (*a1 <= v5) {
        v4 = a1[1];
      }
      *a1 = v6;
      a1[1] = v4;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 >= v8) {
        v9 = *(a2 - 1);
      }
      else {
        v9 = a1[3];
      }
      if (v7 <= v8) {
        v7 = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      a1[3] = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 >= v11) {
        v12 = a1[2];
      }
      else {
        v12 = *(a2 - 1);
      }
      if (v10 <= v11) {
        v10 = a1[2];
      }
      *(a2 - 1) = v10;
      v14 = a1[2];
      v13 = a1[3];
      v15 = a1[1];
      if (v12 >= v13) {
        v14 = a1[3];
      }
      if (v12 > v13) {
        v13 = v12;
      }
      a1[2] = v14;
      a1[3] = v13;
      v16 = *(a2 - 1);
      if (v15 >= v16) {
        v17 = *(a2 - 1);
      }
      else {
        v17 = v15;
      }
      if (v15 > v16) {
        v16 = v15;
      }
      *(a2 - 1) = v16;
      v18 = *a1;
      v20 = a1[2];
      v19 = a1[3];
      if (v19 >= *a1) {
        v21 = *a1;
      }
      else {
        v21 = a1[3];
      }
      if (v19 <= *a1) {
        v19 = *a1;
      }
      if (v21 >= v20) {
        v18 = a1[2];
      }
      if (v21 > v20) {
        v20 = v21;
      }
      if (v19 >= v17) {
        v22 = v17;
      }
      else {
        v22 = v19;
      }
      if (v19 <= v17) {
        v19 = v17;
      }
      if (v22 >= v20) {
        v17 = v20;
      }
      *a1 = v18;
      a1[1] = v17;
      if (v22 <= v20) {
        v23 = v20;
      }
      else {
        v23 = v22;
      }
      a1[2] = v23;
      a1[3] = v19;
      return true;
    default:
      break;
    }
    goto LABEL_69;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_69:
    v34 = a1 + 2;
    v33 = a1[2];
    v36 = *a1;
    v35 = a1[1];
    if (v35 >= v33) {
      v37 = a1[2];
    }
    else {
      v37 = a1[1];
    }
    if (v35 > v33) {
      v33 = a1[1];
    }
    if (v33 >= v36) {
      v38 = *a1;
    }
    else {
      v38 = v33;
    }
    if (v33 <= v36) {
      v33 = *a1;
    }
    *v34 = v33;
    if (v36 >= v37) {
      v39 = v37;
    }
    else {
      v39 = v36;
    }
    if (v36 < v37) {
      v38 = v37;
    }
    *a1 = v39;
    a1[1] = v38;
    v40 = a1 + 3;
    if (a1 + 3 == a2) {
      return true;
    }
    v41 = 24;
    v42 = 0;
    while (1) {
      v43 = *v40;
      v44 = *v34;
      if (*v40 < v44) {
        break;
      }
    LABEL_93:
      v34 = v40++;
      v41 += 8;
      if (v40 == a2) {
        return true;
      }
    }
    v45 = v41;
    do {
      v46 = v45 - 8;
      *(unsigned __int64*)((char*)a1 + v45) = v44;
      if (v45 == 8) {
        ++v42;
        *a1 = v43;
        if (v42 != 8) {
          goto LABEL_93;
        }
        return v40 + 1 == a2;
      }
      v47 = (char*)a1 + v45;
      v45 -= 8;
      v44 = *((_QWORD*)v47 - 2);
    } while (v43 < v44);
    ++v42;
    *(unsigned __int64*)((char*)a1 + v46) = v43;
    if (v42 != 8) {
      goto LABEL_93;
    }
    return v40 + 1 == a2;
  }
  v24 = *(a2 - 1);
  v25 = *a1;
  if (v24 >= *a1) {
    return true;
  }
  *a1 = v24;
  *(a2 - 1) = v25;
  return true;
}

bool SdkHr_7cb660(float* a1, float* a2)
{
  __int64 v2;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  int v9;
  float v10;
  float v11;
  float v12;
  float v13;
  int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  int v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float* v33;
  float v34;
  float v35;
  float v36;
  float* v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  int v42;
  float v43;
  float v44;
  __int64 v45;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v26 = a1[1];
      v27 = *(a2 - 1);
      if (v26 < v27) {
        v28 = *((_DWORD*)a1 + 1);
      }
      else {
        v28 = *((_DWORD*)a2 - 1);
      }
      if (v26 < v27) {
        v26 = *(a2 - 1);
      }
      *(a2 - 1) = v26;
      *((_DWORD*)a1 + 1) = v28;
      v29 = *(a2 - 1);
      if (v29 < *a1) {
        v30 = *(a2 - 1);
      }
      else {
        v30 = *a1;
      }
      if (v29 < *a1) {
        v29 = *a1;
      }
      *(a2 - 1) = v29;
      v32 = *a1;
      v31 = a1[1];
      if (v30 >= v31) {
        v32 = a1[1];
        v31 = v30;
      }
      *a1 = v32;
      a1[1] = v31;
      return true;
    case 4LL:
      v48 = a1[1];
      v47 = a1[2];
      if (*a1 < v47) {
        v49 = *a1;
      }
      else {
        v49 = a1[2];
      }
      if (*a1 >= v47) {
        v47 = *a1;
      }
      a1[2] = v47;
      *a1 = v49;
      v50 = *(a2 - 1);
      if (v48 < v50) {
        v51 = v48;
      }
      else {
        v51 = *(a2 - 1);
      }
      if (v48 >= v50) {
        v50 = v48;
      }
      *(a2 - 1) = v50;
      v52 = *a1;
      if (*a1 < v51) {
        v53 = *a1;
      }
      else {
        v53 = v51;
      }
      if (*a1 < v51) {
        v52 = v51;
      }
      *a1 = v53;
      a1[1] = v52;
      v54 = a1[2];
      v55 = *(a2 - 1);
      if (v54 < v55) {
        v56 = a1[2];
      }
      else {
        v56 = *(a2 - 1);
      }
      if (v54 < v55) {
        v54 = *(a2 - 1);
      }
      *(a2 - 1) = v54;
      v57 = a1[1];
      if (v57 < v56) {
        v58 = a1[1];
      }
      else {
        v58 = v56;
      }
      if (v57 < v56) {
        v57 = v56;
      }
      a1[1] = v58;
      a1[2] = v57;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (*a1 < v5) {
        v6 = *a1;
      }
      else {
        v6 = a1[1];
      }
      if (*a1 < v5) {
        v4 = a1[1];
      }
      *a1 = v6;
      a1[1] = v4;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 < v8) {
        v9 = *((_DWORD*)a1 + 3);
      }
      else {
        v9 = *((_DWORD*)a2 - 1);
      }
      if (v7 < v8) {
        v7 = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      *((_DWORD*)a1 + 3) = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 < v11) {
        v12 = *(a2 - 1);
      }
      else {
        v12 = a1[2];
      }
      if (v10 < v11) {
        v10 = a1[2];
      }
      *(a2 - 1) = v10;
      v14 = *((_DWORD*)a1 + 2);
      v13 = a1[3];
      v15 = a1[1];
      if (v12 >= v13) {
        v14 = *((_DWORD*)a1 + 3);
        v13 = v12;
      }
      *((_DWORD*)a1 + 2) = v14;
      a1[3] = v13;
      v16 = *(a2 - 1);
      if (v15 < v16) {
        v17 = v15;
      }
      else {
        v17 = *(a2 - 1);
      }
      if (v15 >= v16) {
        v16 = v15;
      }
      *(a2 - 1) = v16;
      v18 = *a1;
      v20 = a1[2];
      v19 = a1[3];
      if (v19 < *a1) {
        v21 = a1[3];
      }
      else {
        v21 = *a1;
      }
      if (v19 < *a1) {
        v19 = *a1;
      }
      if (v21 >= v20) {
        v18 = a1[2];
        v20 = v21;
      }
      if (v19 < v17) {
        v22 = v19;
      }
      else {
        v22 = v17;
      }
      if (v19 < v17) {
        v19 = v17;
      }
      if (v22 >= v20) {
        v17 = v20;
      }
      *a1 = v18;
      a1[1] = v17;
      if (v22 < v20) {
        v23 = v20;
      }
      else {
        v23 = v22;
      }
      a1[2] = v23;
      a1[3] = v19;
      return true;
    default:
      break;
    }
    goto LABEL_63;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_63:
    v33 = a1 + 2;
    v34 = a1[2];
    v36 = *a1;
    v35 = a1[1];
    v37 = a1 + 3;
    if (v35 < v34) {
      v38 = a1[1];
    }
    else {
      v38 = a1[2];
    }
    if (v35 >= v34) {
      v34 = a1[1];
    }
    if (v34 < v36) {
      v39 = v34;
    }
    else {
      v39 = *a1;
    }
    if (v34 < v36) {
      v34 = *a1;
    }
    *v33 = v34;
    if (v39 < v38) {
      v40 = v36;
    }
    else {
      v40 = v38;
    }
    if (v39 < v38) {
      v39 = v38;
    }
    *a1 = v40;
    a1[1] = v39;
    if (v37 == a2) {
      return true;
    }
    v41 = 12;
    v42 = 0;
    while (1) {
      v43 = *v37;
      v44 = *v33;
      if (*v37 < *v33) {
        break;
      }
    LABEL_87:
      v33 = v37++;
      v41 += 4;
      if (v37 == a2) {
        return true;
      }
    }
    v45 = v41;
    do {
      v46 = v45 - 4;
      *(float*)((char*)a1 + v45) = v44;
      if (v45 == 4) {
        ++v42;
        *a1 = v43;
        if (v42 != 8) {
          goto LABEL_87;
        }
        return v37 + 1 == a2;
      }
      v44 = *(float*)((char*)a1 + v45 - 8);
      v45 -= 4;
    } while (v43 < v44);
    ++v42;
    *(float*)((char*)a1 + v46) = v43;
    if (v42 != 8) {
      goto LABEL_87;
    }
    return v37 + 1 == a2;
  }
  v24 = *(a2 - 1);
  v25 = *a1;
  if (v24 >= *a1) {
    return true;
  }
  *a1 = v24;
  *(a2 - 1) = v25;
  return true;
}

bool SdkHr_7cc460(double* a1, double* a2)
{
  __int64 v2;
  double v4;
  double v5;
  double v6;
  double v7;
  double v8;
  __int64 v9;
  double v10;
  double v11;
  double v12;
  double v13;
  __int64 v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  double v23;
  double v24;
  double v25;
  double v26;
  double v27;
  __int64 v28;
  double v29;
  double v30;
  double v31;
  double v32;
  double* v33;
  double v34;
  double v35;
  double v36;
  double* v37;
  double v38;
  double v39;
  double v40;
  __int64 v41;
  int v42;
  double v43;
  double v44;
  __int64 v45;
  __int64 v46;
  double v47;
  double v48;
  double v49;
  double v50;
  double v51;
  double v52;
  double v53;
  double v54;
  double v55;
  double v56;
  double v57;
  double v58;

  v2 = a2 - a1;
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      v26 = a1[1];
      v27 = *(a2 - 1);
      if (v26 < v27) {
        v28 = *((_QWORD*)a1 + 1);
      }
      else {
        v28 = *((_QWORD*)a2 - 1);
      }
      if (v26 < v27) {
        v26 = *(a2 - 1);
      }
      *(a2 - 1) = v26;
      *((_QWORD*)a1 + 1) = v28;
      v29 = *(a2 - 1);
      if (v29 < *a1) {
        v30 = *(a2 - 1);
      }
      else {
        v30 = *a1;
      }
      if (v29 < *a1) {
        v29 = *a1;
      }
      *(a2 - 1) = v29;
      v32 = *a1;
      v31 = a1[1];
      if (v30 >= v31) {
        v32 = a1[1];
        v31 = v30;
      }
      *a1 = v32;
      a1[1] = v31;
      return true;
    case 4LL:
      v48 = a1[1];
      v47 = a1[2];
      if (*a1 < v47) {
        v49 = *a1;
      }
      else {
        v49 = a1[2];
      }
      if (*a1 >= v47) {
        v47 = *a1;
      }
      a1[2] = v47;
      *a1 = v49;
      v50 = *(a2 - 1);
      if (v48 < v50) {
        v51 = v48;
      }
      else {
        v51 = *(a2 - 1);
      }
      if (v48 >= v50) {
        v50 = v48;
      }
      *(a2 - 1) = v50;
      v52 = *a1;
      if (*a1 < v51) {
        v53 = *a1;
      }
      else {
        v53 = v51;
      }
      if (*a1 < v51) {
        v52 = v51;
      }
      *a1 = v53;
      a1[1] = v52;
      v54 = a1[2];
      v55 = *(a2 - 1);
      if (v54 < v55) {
        v56 = a1[2];
      }
      else {
        v56 = *(a2 - 1);
      }
      if (v54 < v55) {
        v54 = *(a2 - 1);
      }
      *(a2 - 1) = v54;
      v57 = a1[1];
      if (v57 < v56) {
        v58 = a1[1];
      }
      else {
        v58 = v56;
      }
      if (v57 < v56) {
        v57 = v56;
      }
      a1[1] = v58;
      a1[2] = v57;
      return true;
    case 5LL:
      v4 = *a1;
      v5 = a1[1];
      if (*a1 < v5) {
        v6 = *a1;
      }
      else {
        v6 = a1[1];
      }
      if (*a1 < v5) {
        v4 = a1[1];
      }
      *a1 = v6;
      a1[1] = v4;
      v7 = a1[3];
      v8 = *(a2 - 1);
      if (v7 < v8) {
        v9 = *((_QWORD*)a1 + 3);
      }
      else {
        v9 = *((_QWORD*)a2 - 1);
      }
      if (v7 < v8) {
        v7 = *(a2 - 1);
      }
      *(a2 - 1) = v7;
      *((_QWORD*)a1 + 3) = v9;
      v10 = *(a2 - 1);
      v11 = a1[2];
      if (v10 < v11) {
        v12 = *(a2 - 1);
      }
      else {
        v12 = a1[2];
      }
      if (v10 < v11) {
        v10 = a1[2];
      }
      *(a2 - 1) = v10;
      v14 = *((_QWORD*)a1 + 2);
      v13 = a1[3];
      v15 = a1[1];
      if (v12 >= v13) {
        v14 = *((_QWORD*)a1 + 3);
        v13 = v12;
      }
      *((_QWORD*)a1 + 2) = v14;
      a1[3] = v13;
      v16 = *(a2 - 1);
      if (v15 < v16) {
        v17 = v15;
      }
      else {
        v17 = *(a2 - 1);
      }
      if (v15 >= v16) {
        v16 = v15;
      }
      *(a2 - 1) = v16;
      v18 = *a1;
      v20 = a1[2];
      v19 = a1[3];
      if (v19 < *a1) {
        v21 = a1[3];
      }
      else {
        v21 = *a1;
      }
      if (v19 < *a1) {
        v19 = *a1;
      }
      if (v21 >= v20) {
        v18 = a1[2];
        v20 = v21;
      }
      if (v19 < v17) {
        v22 = v19;
      }
      else {
        v22 = v17;
      }
      if (v19 < v17) {
        v19 = v17;
      }
      if (v22 >= v20) {
        v17 = v20;
      }
      *a1 = v18;
      a1[1] = v17;
      if (v22 < v20) {
        v23 = v20;
      }
      else {
        v23 = v22;
      }
      a1[2] = v23;
      a1[3] = v19;
      return true;
    default:
      break;
    }
    goto LABEL_63;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 != 2) {
  LABEL_63:
    v33 = a1 + 2;
    v34 = a1[2];
    v36 = *a1;
    v35 = a1[1];
    v37 = a1 + 3;
    if (v35 < v34) {
      v38 = a1[1];
    }
    else {
      v38 = a1[2];
    }
    if (v35 >= v34) {
      v34 = a1[1];
    }
    if (v34 < v36) {
      v39 = v34;
    }
    else {
      v39 = *a1;
    }
    if (v34 < v36) {
      v34 = *a1;
    }
    *v33 = v34;
    if (v39 < v38) {
      v40 = v36;
    }
    else {
      v40 = v38;
    }
    if (v39 < v38) {
      v39 = v38;
    }
    *a1 = v40;
    a1[1] = v39;
    if (v37 == a2) {
      return true;
    }
    v41 = 24;
    v42 = 0;
    while (1) {
      v43 = *v37;
      v44 = *v33;
      if (*v37 < *v33) {
        break;
      }
    LABEL_87:
      v33 = v37++;
      v41 += 8;
      if (v37 == a2) {
        return true;
      }
    }
    v45 = v41;
    do {
      v46 = v45 - 8;
      *(double*)((char*)a1 + v45) = v44;
      if (v45 == 8) {
        ++v42;
        *a1 = v43;
        if (v42 != 8) {
          goto LABEL_87;
        }
        return v37 + 1 == a2;
      }
      v44 = *(double*)((char*)a1 + v45 - 16);
      v45 -= 8;
    } while (v43 < v44);
    ++v42;
    *(double*)((char*)a1 + v46) = v43;
    if (v42 != 8) {
      goto LABEL_87;
    }
    return v37 + 1 == a2;
  }
  v24 = *(a2 - 1);
  v25 = *a1;
  if (v24 >= *a1) {
    return true;
  }
  *a1 = v24;
  *(a2 - 1) = v25;
  return true;
}

__int64 SdkHr_7cd5d0(__int64 result, char a2)
{
  _QWORD* v2;

  if ((a2 & 1) == 0) {
    v2 = (_QWORD*)result;
    SdkRoutine_85c490(&SdkData_ea91e0);
    *v2 = 0;
    SdkRoutine_85c4a0(&SdkData_ea91e0);
    return SdkRoutine_85c580(&SdkData_ea91e8);
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7cd620()
{
  __int64 v0;

  v0 = SdkRoutine_87c7a0();
  SdkRoutine_87c7b0(v0);
  __udf(0);
}

__int64 SdkHr_7cd640(__int64 a1, unsigned __int64 a2, __int64 a3,
                     unsigned __int8 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned __int64 v18;
  unsigned int v19;
  unsigned int v20;
  bool v21;
  int v22;
  bool v23;
  unsigned int v24;
  __int64 v25;

  v4 = a3 + 1;
  v5 = a3;
  if (a2 <= a3 + 1) {
    return v5;
  }
  if ((unsigned int)SdkRoutine_86e960(*(unsigned __int8*)(a1 + a3)) != a4) {
    return v5;
  }
  v8 = a1 + v4;
  if ((unsigned int)SdkRoutine_85dfb0(*(unsigned __int8*)(a1 + v4)) != 0) {
    return v5;
  }
  v10 = a2 - v4;
  if (a2 == v4) {
    return v5;
  }
  v11 = 0;
  while (1) {
    v12 = *(unsigned __int8*)(v8 + v11);
    if ((unsigned int)(v12 - 9) >= 5 && v12 != 32) {
      break;
    }
    if (v10 == ++v11) {
      v12 = *(unsigned __int8*)(a1 + a2);
      v11 = a2 - v4;
      break;
    }
  }
  v13 = 0x7FFFFFFF;
  if (v12 == 45 || v12 == 43) {
    ++v11;
    if (v12 == 43) {
      v13 = 0x7FFFFFFF;
    }
    else {
      v13 = 0x80000000;
    }
    if (v11 >= v10) {
      return v5;
    }
  }
  else if (v11 >= v10) {
    return v5;
  }
  v14 = *(unsigned __int8*)(v8 + v11);
  if ((SdkRoutine_7ced40(v14) & 1) != 0) {
    v15 = SdkRoutine_7ced70(v14);
    if (v15 > 9) {
      v17 = 0;
      v11 = 0;
    }
    else {
      v16 = 0;
      v17 = 0;
      v18 = v11 + 2;
      v25 = a1 + v5;
      while (1) {
        v19 = 10 * v16;
        if (v16 > 0xCCCCCCC) {
          v19 = v13;
        }
        v21 = v19 > v13 - v15;
        v20 = v15 + v19;
        if (v21) {
          v20 = v13;
          v21 = true;
        }
        else {
          v21 = v16 > 0xCCCCCCC;
        }
        if (v21) {
          v22 = 34;
        }
        else {
          v22 = v17;
        }
        v23 = v16 == v13;
        if (v16 == v13) {
          v16 = v13;
        }
        else {
          v16 = v20;
        }
        if (v23) {
          v17 = 34;
        }
        else {
          v17 = v22;
        }
        if (a2 - v5 == v18) {
          v11 = a2 - v4;
          goto LABEL_46;
        }
        v24 = *(unsigned __int8*)(v25 + v18);
        if ((SdkRoutine_7ced40(*(unsigned __int8*)(v25 + v18)) & 1) == 0) {
          break;
        }
        v15 = SdkRoutine_7ced70(v24);
        ++v18;
        ++v11;
        if (v15 > 9) {
          goto LABEL_46;
        }
      }
      v11 = v18 - 1;
    }
  LABEL_46:
    if (v17 == 34) {
      if (v11 == 0) {
        return v5;
      }
    }
    else if (v11 == 0) {
      return v5;
    }
    return v11 + v4;
  }
  return v5;
}

bool SdkHr_7ced40(int a1)
{
  return (unsigned int)(a1 - 65) <= 0x39 &&
             ((1LL << ((unsigned __int8)a1 - 65)) & 0x3FFFFFF03FFFFFFLL) != 0 ||
         (unsigned int)(a1 - 48) < 0xA;
}

__int64 SdkHr_7ced70(char a1)
{
  if ((unsigned __int8)(a1 - 49) > 0x49u) {
    return 0;
  }
  else {
    return SdkData_ce2d58[(unsigned __int8)(a1 - 49)];
  }
}

__int64 SdkHr_7d1420(__int64 result, int a2)
{
  unsigned int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  unsigned int v16;
  unsigned __int8* v17;
  _BYTE* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  int v35;
  _BYTE* v36;
  unsigned __int8* v37;
  unsigned int v38;
  __int64 v39;
  int v40;
  unsigned __int64 v41;
  int v42;
  __int64 v43;
  unsigned int v44;
  unsigned __int64 v45;
  unsigned int v46;
  unsigned int v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int8* v53;
  _BYTE* v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  int v62;
  _BYTE* v63;
  unsigned __int8* v64;
  unsigned int v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned int v68;

  if (a2 == 0) {
    return result;
  }
  v2 = a2;
  v3 = result;
  if (a2 > 0) {
    if ((unsigned int)a2 >= 5) {
      do {
        SdkRoutine_7d18c0(v3, 4);
        v2 -= 4;
      } while (v2 > 4);
    }
    return SdkRoutine_7d18c0(v3, v2);
  }
  result = *(unsigned int*)result;
  if ((unsigned int)a2 <= 0xFFFFFFFB) {
    v4 = *(_DWORD*)(v3 + 4);
    v5 = v3 + 9;
    v6 = result;
    while (1) {
      LODWORD(v7) = 0;
      v8 = 0;
      v9 = v2;
      do {
        while (1) {
          v10 = v7 - result;
          v11 = v7;
          if ((unsigned int)v7 >= (unsigned int)result) {
            break;
          }
          v8 = *(unsigned __int8*)(v5 + (unsigned int)v7) + 10 * v8;
          v7 = (unsigned int)(v7 + 1);
          --v6;
          if (v8 >= 0x10) {
            goto LABEL_14;
          }
        }
        v8 *= 10LL;
        v7 = (unsigned int)(v7 + 1);
        --v6;
      } while (v8 < 0x10);
    LABEL_14:
      if ((unsigned int)v7 >= (unsigned int)result) {
        v6 = 0;
        goto LABEL_33;
      }
      if (v6 - 1 < 7) {
        break;
      }
      v12 = 0;
      v14 = ~v11 + result;
      v15 = v3 + (unsigned int)v7;
      v16 = v14 & 0xFFFFFFF8;
      do {
        v17 = (unsigned __int8*)(v15 + v12);
        v18 = (_BYTE*)(v3 + v12);
        v19 = *(unsigned __int8*)(v15 + v12 + 9);
        v18[9] = v8 >> 4;
        v12 += 8;
        v20 = v19 + 10 * (v8 & 0xF);
        v21 = v17[10];
        v18[10] = v20 >> 4;
        v22 = v21 + 10 * (v20 & 0xF);
        v23 = v17[11];
        v18[11] = v22 >> 4;
        v24 = v23 + 10 * (v22 & 0xF);
        v25 = v17[12];
        v18[12] = v24 >> 4;
        v26 = v25 + 10 * (v24 & 0xF);
        v27 = v17[13];
        v18[13] = v26 >> 4;
        v28 = v27 + 10 * (v26 & 0xF);
        v29 = v17[14];
        v18[14] = v28 >> 4;
        v30 = v29 + 10 * (v28 & 0xF);
        v31 = v17[15];
        v32 = v17[16];
        v18[15] = v30 >> 4;
        v33 = v31 + 10 * (v30 & 0xF);
        v34 = v33 >> 4;
        v8 = v32 + 10 * (v33 & 0xF);
        v18[16] = v34;
      } while (v16 != (_DWORD)v12);
      v13 = v12 + (unsigned int)v7;
      if ((v6 & 7) != 0) {
        goto LABEL_22;
      }
    LABEL_24:
      if (v8 == 0) {
        if (v6 == 0) {
          goto LABEL_8;
        }
        goto LABEL_26;
      }
      do {
      LABEL_33:
        if (v6 <= 0x31F) {
          *(_BYTE*)(v5 + v6++) = v8 >> 4;
        }
        else if (v8 >= 0x10) {
          *(_BYTE*)(v3 + 8) = 1;
        }
        v41 = v8 & 0xF;
        v8 = 10 * v41;
      } while (v41 != 0);
    LABEL_26:
      v4 = v4 - v7 + 1;
      if (*(_BYTE*)(v5 + v6 - 1) == 0) {
        v39 = v6 - 2LL;
        while (--v6 != 0) {
          v40 = *(unsigned __int8*)(v5 + (unsigned int)v39--);
          if (v40 != 0) {
            goto LABEL_9;
          }
        }
      LABEL_8:
        v4 = 0;
      }
    LABEL_9:
      v2 += 4;
      result = v6;
      if (v9 >= 0xFFFFFFF8) {
        *(_DWORD*)(v3 + 4) = v4;
        goto LABEL_38;
      }
    }
    v12 = 0;
    v13 = v7;
    if ((v6 & 7) == 0) {
      goto LABEL_24;
    }
  LABEL_22:
    v35 = ~v10 & 7;
    v36 = (_BYTE*)(v5 + v12);
    v37 = (unsigned __int8*)(v5 + v13);
    do {
      v38 = *v37++;
      --v35;
      *v36++ = v8 >> 4;
      v8 = v38 + 10 * (v8 & 0xF);
    } while (v35 != 0);
    goto LABEL_24;
  }
  v6 = result;
LABEL_38:
  v42 = -v2;
  v43 = v3 + 9;
  v44 = -1;
  v45 = 0;
  v46 = v6;
  do {
    while (1) {
      v47 = ++v44 - v6;
      if (v44 >= v6) {
        break;
      }
      v45 = *(unsigned __int8*)(v43 + v44) + 10 * v45;
      --v46;
      if (v45 >> v42 != 0) {
        goto LABEL_42;
      }
    }
    v45 *= 10LL;
    --v46;
  } while (v45 >> v42 == 0);
LABEL_42:
  v48 = ~(-1LL << v42);
  v49 = *(_DWORD*)(v3 + 4) - v44;
  v50 = v44 + 1;
  *(_DWORD*)(v3 + 4) = v49;
  if ((unsigned int)v50 < v6) {
    if (v46 - 1 >= 3) {
      v52 = v3 + (unsigned int)v50;
      result = 10;
      v51 = 0;
      do {
        v53 = (unsigned __int8*)(v52 + v51);
        v54 = (_BYTE*)(v3 + v51);
        v55 = *(unsigned __int8*)(v52 + v51 + 9);
        v54[9] = v45 >> v42;
        v51 += 4;
        v56 = v55 + 10 * (v45 & v48);
        v57 = v53[10];
        v54[10] = v56 >> v42;
        v58 = v57 + 10 * (v56 & v48);
        v59 = v53[11];
        v60 = v53[12];
        v54[11] = v58 >> v42;
        v61 = v59 + 10 * (v58 & v48);
        v54[12] = v61 >> v42;
        v45 = v60 + 10 * (v61 & v48);
      } while ((v46 & 0xFFFFFFFC) != (_DWORD)v51);
      v50 = v51 + (unsigned int)v50;
      if ((v46 & 3) == 0) {
        goto LABEL_53;
      }
    }
    else {
      v51 = 0;
      if ((v46 & 3) == 0) {
      LABEL_53:
        if (v45 != 0) {
          goto LABEL_57;
        }
        *(_DWORD*)v3 = v46;
        if (v46 != 0) {
          goto LABEL_61;
        }
      LABEL_67:
        *(_DWORD*)(v3 + 4) = 0;
        return result;
      }
    }
    v62 = ~v47 & 3;
    v63 = (_BYTE*)(v51 + v3 + 9);
    v64 = (unsigned __int8*)(v50 + v3 + 9);
    do {
      v65 = *v64++;
      --v62;
      *v63++ = v45 >> v42;
      v45 = v65 + 10 * (v45 & v48);
    } while (v62 != 0);
    goto LABEL_53;
  }
  if (v45 == 0) {
    *(_DWORD*)v3 = 0;
    goto LABEL_67;
  }
  v46 = 0;
  do {
  LABEL_57:
    v67 = v45 >> v42;
    if (v46 <= 0x31F) {
      *(_BYTE*)(v43 + v46++) = v67;
    }
    else if (v67 != 0) {
      *(_BYTE*)(v3 + 8) = 1;
    }
    v66 = v45 & v48;
    v45 = 10 * (v45 & v48);
  } while (v66 != 0);
  *(_DWORD*)v3 = v46;
LABEL_61:
  v68 = v46 - 1;
  while (*(_BYTE*)(v43 + v68) == 0) {
    *(_DWORD*)v3 = v68--;
    if (v68 == -1) {
      goto LABEL_67;
    }
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7d3494(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9)
{
  SdkRoutine_87c840(&a9);
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7d34b0(_QWORD* a1)
{
  __int64 v1;

  v1 = SdkRoutine_87c880(*a1);
  SdkRoutine_87c7b0(v1);
  __udf(0);
}

__int64 SdkHr_7d3740(__int64 a1)
{
  __int64 v1;
  char v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 32);
  v2 = *(_BYTE*)(v1 + 48);
  v3 = *(_QWORD*)(v1 + 64);
  v4 = v1 + 49;
  if ((v2 & 1) != 0) {
    return v3;
  }
  else {
    return v4;
  }
}

void __attribute__((noreturn)) SdkHr_7d37f8()
{
  __int64 v0;
  __int64 v1;

  v0 = SdkRoutine_87c7a0();
  v1 = SdkRoutine_87c8d0(v0);
  SdkRoutine_87c8e0();
  SdkRoutine_87c790(v1);
  SdkRoutine_7cd620();
}

void __attribute__((noreturn)) SdkHr_7d38f0(__int64 a1)
{
  _QWORD* v1;

  if ((*(_BYTE*)v1 & 1) != 0) {
    SdkRoutine_857220(v1[2], *v1 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7d3920()
{
  SdkRoutine_7d3940("basic_string");
}

void __attribute__((noreturn)) SdkHr_7d3940(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = SdkRoutine_87c8f0(16);
  SdkRoutine_7d39a0(v2, a1);
  v3 = SdkRoutine_87c910(v2, SdkData_e89308, SdkData_e89310);
  SdkRoutine_87c920(v2);
  SdkRoutine_87c790(v3);
  __udf(0);
}

unsigned __int64* SdkHr_7d39e0(unsigned __int64* result, unsigned __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;

  if (a2 != 0) {
    v2 = *result;
    if ((*(_BYTE*)result & 1) != 0) {
      v3 = (*result & 0xFFFFFFFFFFFFFFFELL) - 1;
    }
    else {
      v3 = 22;
    }
    if ((v2 & 1) != 0) {
      v4 = result[1];
    }
    else {
      v4 = (unsigned __int8)v2 >> 1;
    }
    if (v3 - v4 >= a2) {
      v5 = v4 + a2;
      if ((v2 & 1) != 0) {
        v12 = (char*)result[2];
      }
      else {
        v12 = (char*)result + 1;
      }
      if ((*result & 1) == 0) {
        *(_BYTE*)result = 2 * v5;
      LABEL_35:
        v12[v5] = 0;
        return result;
      }
    LABEL_34:
      result[1] = v5;
      goto LABEL_35;
    }
    v5 = v4 + a2;
    if (v4 + a2 - v3 > -10LL - v3) {
      SdkRoutine_7d3920();
    }
    v6 = result;
    if ((v2 & 1) != 0) {
      v7 = (char*)result[2];
    }
    else {
      v7 = (char*)result + 1;
    }
    if (v3 > 0x7FFFFFFFFFFFFFF2LL) {
      v10 = -9;
      v11 = SdkRoutine_85e050(0xFFFFFFFFFFFFFFF7LL);
      if (v4 == 0) {
      LABEL_31:
        if (v3 != 22) {
          SdkRoutine_857220(v7, v3 + 1);
        }
        result = v6;
        v6[1] = v4;
        v6[2] = v11;
        *v6 = v10 | 1;
        v12 = (char*)v11;
        goto LABEL_34;
      }
    }
    else {
      v8 = 2 * v3;
      if (v5 > 2 * v3) {
        v8 = v4 + a2;
      }
      if ((v8 | 7) == 0x17) {
        v9 = 26;
      }
      else {
        v9 = (v8 | 7) + 1;
      }
      if (v8 >= 0x17) {
        v10 = v9;
      }
      else {
        v10 = 23;
      }
      v11 = SdkRoutine_85e050(v10);
      if (v4 == 0) {
        goto LABEL_31;
      }
    }
    SdkRoutine_858a50(v11, v7, v4);
    goto LABEL_31;
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7d3c64(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7d4f24(__int64 a1)
{
  _QWORD* v1;

  if ((*(_BYTE*)v1 & 1) != 0) {
    SdkRoutine_857220(v1[2], *v1 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_7d4f60(unsigned __int8* a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  unsigned int v10;
  char* v11;
  unsigned __int64 v12;
  unsigned int v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 result;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  int i;
  int v23;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  const char* v29;
  __int64 v30;
  _QWORD v32[2];
  char* v33;
  unsigned __int64 v34;
  unsigned __int8 v35;
  _QWORD v36[2];
  char* v37;
  unsigned __int64 v38;
  unsigned __int8 v39;

  v3 = *a1;
  v5 = *((_QWORD*)a1 + 1);
  v4 = *((unsigned __int8**)a1 + 2);
  v8 = (v3 & 1) == 0;
  v9 = v3 >> 1;
  v37 = nullptr;
  v38 = 0;
  v39 = 1;
  if (v8) {
    v4 = a1 + 1;
  }
  if (!v8) {
    v9 = v5;
  }
  v36[0] = v4;
  v36[1] = v9;
  SdkRoutine_7d58e0(v36);
  v32[0] = a2;
  v32[1] = a3;
  v33 = nullptr;
  v34 = 0;
  v35 = 1;
  SdkRoutine_7d58e0(v32);
  v10 = v39;
  if (v39 == 2) {
    v11 = v37;
    v12 = v38;
    v13 = v35;
    if (v35 != 2) {
      v14 = &SdkData_bbbd5c;
      v15 = 0;
      goto LABEL_12;
    }
  }
  else {
    v13 = v35;
    if (v35 != 2) {
      goto LABEL_34;
    }
    v11 = &SdkData_bbbd5c;
    v12 = 0;
  }
  v14 = v33;
  v15 = v34;
  v13 = 2;
LABEL_12:
  if (v15 >= v12) {
    v16 = v12;
  }
  else {
    v16 = v15;
  }
  LODWORD(result) = SdkRoutine_8572f0(v11, v14, v16);
  if (v12 < v15) {
    v18 = -1;
  }
  else {
    v18 = 1;
  }
  if (v12 == v15) {
    v18 = 0;
  }
  if ((_DWORD)result != 0) {
    result = (unsigned int)result;
  }
  else {
    result = v18;
  }
  if (v10 > 2) {
    if (v13 > 2) {
      goto LABEL_27;
    }
  LABEL_30:
    v20 = result;
    do {
      SdkRoutine_7d58e0(v32);
      v13 = v35;
    } while (v35 < 3u);
    result = v20;
    if (v20 != 0) {
      return result;
    }
    goto LABEL_33;
  }
  v19 = result;
  do {
    SdkRoutine_7d58e0(v36);
  } while (v39 < 3u);
  v13 = v35;
  result = v19;
  if (v35 <= 2u) {
    goto LABEL_30;
  }
LABEL_27:
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_33:
  v10 = v39;
LABEL_34:
  if (v10 == 3) {
    if (v13 != 3) {
      return 1;
    }
  }
  else {
    if (v13 == 3) {
      return 0xFFFFFFFFLL;
    }
    if (v10 > 3) {
      goto LABEL_41;
    }
  }
  do {
    SdkRoutine_7d58e0(v36);
  } while (v39 < 4u);
  v13 = v35;
LABEL_41:
  if (v13 <= 3) {
    do {
      SdkRoutine_7d58e0(v32);
    } while (v35 < 4u);
  }
  for (i = v39; v39 != 1 && v39 != 6; i = v39) {
    v23 = v35;
    if (v35 == 1 || v35 == 6) {
      goto LABEL_84;
    }
    if (i > 3) {
      if (i == 4) {
      LABEL_61:
        v26 = v37;
        v25 = v38;
        if (v35 > 3u) {
          goto LABEL_57;
        }
        goto LABEL_62;
      }
      v25 = 0;
      v26 = &SdkData_bbbd5c;
      if (v35 > 3u) {
        goto LABEL_57;
      }
    }
    else {
      if (i == 2) {
        goto LABEL_61;
      }
      v25 = 1;
      if (*v37 == 92) {
        v26 = "\\";
      }
      else {
        v26 = "/";
      }
      if (v35 > 3u) {
      LABEL_57:
        if (v35 != 4) {
          v27 = 0;
          result = SdkRoutine_8572f0(v26, &SdkData_bbbd5c, 0);
          if ((_DWORD)result != 0) {
            return result;
          }
          goto LABEL_77;
        }
      LABEL_63:
        v27 = v34;
        if (v34 >= v25) {
          v28 = v25;
        }
        else {
          v28 = v34;
        }
        result = SdkRoutine_8572f0(v26, v33, v28);
        if ((_DWORD)result != 0) {
          return result;
        }
        goto LABEL_77;
      }
    }
  LABEL_62:
    if (v35 == 2) {
      goto LABEL_63;
    }
    v27 = 1;
    if (*v33 == 92) {
      v29 = "\\";
    }
    else {
      v29 = "/";
    }
    if (v25 <= 1) {
      v30 = v25;
    }
    else {
      v30 = 1;
    }
    result = SdkRoutine_8572f0(v26, v29, v30);
    if ((_DWORD)result != 0) {
      return result;
    }
  LABEL_77:
    if (v25 != v27) {
      if (v25 < v27) {
        return 0xFFFFFFFFLL;
      }
      else {
        return 1;
      }
    }
    SdkRoutine_7d58e0(v36);
    SdkRoutine_7d58e0(v32);
  }
  v23 = v35;
LABEL_84:
  if (i == 6) {
    if (v23 != 6) {
      return 0xFFFFFFFFLL;
    }
  }
  else if (v23 == 6) {
    return 1;
  }
  return 0;
}

void __attribute__((noreturn)) SdkHr_7d57d0()
{
  __int64 v0;

  v0 = SdkRoutine_87c8f0(8);
  SdkRoutine_87c950();
  SdkRoutine_87c910(v0, SdkData_e89328, SdkData_e89330);
  __udf(0);
}

void __attribute__((noreturn)) SdkHr_7d5830(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = SdkRoutine_87c8f0(16);
  SdkRoutine_7d5890(v2, a1);
  v3 = SdkRoutine_87c910(v2, SdkData_e89338, SdkData_e89340);
  SdkRoutine_87c920(v2);
  SdkRoutine_87c790(v3);
  __udf(0);
}

__int64 SdkHr_7d5890(_QWORD* a1)
{
  __int64 result;

  result = SdkRoutine_87c930();
  *a1 = SdkData_e89348 + 16;
  return result;
}

__int64 SdkHr_7d58e0(__int64 result)
{
  int v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  _BYTE* v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  _BYTE* v12;
  int v13;
  __int64 v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64 v17;
  unsigned __int8* v18;

  v1 = *(unsigned __int8*)(result + 32);
  v2 = *(_QWORD*)result;
  v3 = *(_QWORD*)(result + 8);
  if ((unsigned int)(v1 - 2) >= 3) {
    if ((unsigned int)(v1 - 5) < 2) {
      goto LABEL_5;
    }
    v4 = *(_QWORD*)result;
    v5 = (unsigned __int8*)(v2 + v3);
    if (*(unsigned __int8**)result == v5) {
      goto LABEL_5;
    }
  }
  else {
    v4 = *(_QWORD*)(result + 16) + *(_QWORD*)(result + 24);
    v5 = (unsigned __int8*)(v2 + v3);
    if ((unsigned __int8*)v4 == v5) {
    LABEL_5:
      *(_QWORD*)(result + 16) = 0;
      *(_QWORD*)(result + 24) = 0;
      *(_BYTE*)(result + 32) = 6;
      return result;
    }
  }
  if ((unsigned int)(v1 - 1) < 2) {
    if (v4 != 0) {
      v6 = 1;
      if (v4 >= (unsigned __int64)v5) {
        v6 = -1;
      }
      if (*(_BYTE*)v4 == 47) {
        v7 = (unsigned __int8*)v4;
        while (1) {
          v7 += v6;
          if (v7 == v5) {
            break;
          }
          if (*v7 != 47) {
            *(_BYTE*)(result + 32) = 3;
            *(_QWORD*)(result + 16) = v4;
            *(_QWORD*)(result + 24) = &v7[-v4];
            return result;
          }
        }
        *(_BYTE*)(result + 32) = 3;
        *(_QWORD*)(result + 16) = v4;
        *(_QWORD*)(result + 24) = &v5[-v4];
      }
      else {
        v16 = (unsigned __int8*)v4;
        while (1) {
          v16 += v6;
          if (v16 == v5) {
            break;
          }
          if (*v16 == 47) {
            *(_BYTE*)(result + 32) = 4;
            *(_QWORD*)(result + 16) = v4;
            *(_QWORD*)(result + 24) = &v16[-v4];
            return result;
          }
        }
        *(_BYTE*)(result + 32) = 4;
        *(_QWORD*)(result + 16) = v4;
        *(_QWORD*)(result + 24) = &v5[-v4];
      }
    }
    else {
      *(_BYTE*)(result + 32) = 4;
      *(_QWORD*)(result + 16) = 0;
      *(_QWORD*)(result + 24) = 0;
    }
    return result;
  }
  if (v1 == 3) {
    if (v4 != 0 && *(_BYTE*)v4 != 47) {
      if (v4 < (unsigned __int64)v5) {
        v17 = 1;
      }
      else {
        v17 = -1;
      }
      v18 = (unsigned __int8*)v4;
      while (1) {
        v18 += v17;
        if (v18 == v5) {
          break;
        }
        if (*v18 == 47) {
          *(_BYTE*)(result + 32) = 4;
          *(_QWORD*)(result + 16) = v4;
          *(_QWORD*)(result + 24) = &v18[-v4];
          return result;
        }
      }
      *(_BYTE*)(result + 32) = 4;
      *(_QWORD*)(result + 16) = v4;
      *(_QWORD*)(result + 24) = &v5[-v4];
    }
    else {
      *(_BYTE*)(result + 32) = 4;
      *(_QWORD*)(result + 16) = v4;
      *(_QWORD*)(result + 24) = -(__int64)v4;
    }
    return result;
  }
  if (v4 == 0 || *(_BYTE*)v4 != 47) {
    v11 = nullptr;
  LABEL_39:
    *(_BYTE*)(result + 32) = 5;
    *(_QWORD*)(result + 16) = v4;
    *(_QWORD*)(result + 24) = &v11[-v4];
    return result;
  }
  if (v4 < (unsigned __int64)v5) {
    v8 = 1;
  }
  else {
    v8 = -1;
  }
  v9 = (_BYTE*)(v4 + v8);
  v10 = (unsigned __int8*)(v4 + v8);
  do {
    v11 = v10;
    v12 = v9;
    if (v10 == v5) {
      break;
    }
    v13 = *v10;
    v10 += v8;
    v9 += v8;
  } while (v13 == 47);
  if (v11 == v5 || *v11 == 47) {
    goto LABEL_39;
  }
  if (v11 < v5) {
    v14 = 1;
  }
  else {
    v14 = -1;
  }
  v15 = v11;
  while (1) {
    v15 += v14;
    if (v15 == v5) {
      break;
    }
    if (*v15 == 47) {
      goto LABEL_55;
    }
  }
  v15 = v5;
LABEL_55:
  *(_BYTE*)(result + 32) = 4;
  *(_QWORD*)(result + 16) = v11;
  *(_QWORD*)(result + 24) = v15 - v12;
  return result;
}

unsigned __int64* SdkHr_7d5b60(unsigned __int64* result)
{
  int v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  unsigned __int8* v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  int v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int8* v25;
  int v26;

  v1 = *((unsigned __int8*)result + 32);
  v2 = *result;
  if ((unsigned int)(v1 - 3) >= 3) {
    if ((unsigned int)(v1 - 1) < 2) {
      goto LABEL_5;
    }
    v3 = v2 + result[1];
    v4 = result[1];
    if (v4 == 0) {
      goto LABEL_5;
    }
  }
  else {
    v3 = result[2];
    v4 = v3 - v2;
    if (v3 == v2) {
    LABEL_5:
      result[2] = 0;
      result[3] = 0;
      *((_BYTE*)result + 32) = 1;
      return result;
    }
  }
  v5 = (unsigned __int8*)(v2 - 1);
  v6 = (unsigned __int8*)(v3 - 1);
  if (*((unsigned __int8*)result + 32) > 4u) {
    if (v1 == 5) {
      if (*v6 == 47) {
        *((_BYTE*)result + 32) = 4;
        result[2] = 1;
        result[3] = v3 - 1;
      }
      else {
        if (v3 < v2) {
          v18 = 1;
        }
        else {
          v18 = -1;
        }
        v19 = (unsigned __int8*)(v18 + v3 - 1);
        do {
          v20 = v19;
          if (v19 == v5) {
            break;
          }
          v21 = *v19;
          v19 += v18;
        } while (v21 != 47);
        *((_BYTE*)result + 32) = 4;
        result[2] = (unsigned __int64)(v20 + 1);
        result[3] = v3 - (_QWORD)(v20 + 1);
      }
    }
    else {
      v14 = 1;
      if (v3 >= v2) {
        v14 = -1;
      }
      if (*(_BYTE*)(v3 - 1) == 47) {
        v15 = 0;
        v16 = v14 + v3 - 1;
        while ((unsigned __int8*)(v16 + v15) != v5) {
          v17 = *(unsigned __int8*)(v16 + v15);
          v15 += v14;
          if (v17 != 47) {
            *((_BYTE*)result + 32) = 5;
            result[2] = v3 + v15;
            result[3] = -v15;
            return result;
          }
        }
        result[2] = v2;
        result[3] = v3 - v2;
        *((_BYTE*)result + 32) = 3;
      }
      else {
        v22 = v14;
        do {
          v23 = v3 + v22;
          v24 = v22;
          v25 = (unsigned __int8*)(v3 + v22 - 1);
          if (v25 == v5) {
            break;
          }
          v26 = *v25;
          v22 = v24 + v14;
        } while (v26 != 47);
        *((_BYTE*)result + 32) = 4;
        result[2] = v23;
        result[3] = -v24;
      }
    }
  }
  else if (v1 == 3) {
    result[2] = v2;
    result[3] = v4;
    *((_BYTE*)result + 32) = 2;
  }
  else {
    if (*v6 == 47) {
      v7 = v3 >= v2;
      v8 = v3 - v2;
      v9 = 1;
      if (v7) {
        v9 = -1;
      }
      do {
        v6 += v9;
        if (v6 == v5) {
          result[2] = v2;
          result[3] = v8;
          *((_BYTE*)result + 32) = 3;
          return result;
        }
      } while (*v6 == 47);
      if (v6 < v5) {
        v10 = 1;
      }
      else {
        v10 = -1;
      }
      v11 = &v6[v10];
      do {
        v12 = v11;
        if (v11 == v5) {
          break;
        }
        v13 = *v11;
        v11 += v10;
      } while (v13 != 47);
    }
    else {
      v6 = nullptr;
      v12 = nullptr;
    }
    *((_BYTE*)result + 32) = 4;
    result[2] = (unsigned __int64)(v12 + 1);
    result[3] = v6 - v12;
  }
  return result;
}

unsigned __int64* SdkHr_7d5dc0(unsigned __int64* a1, unsigned __int64 a2,
                               __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;

  v3 = *a1;
  v4 = a1[1];
  v5 = *(unsigned __int8*)a1;
  if ((v5 & 1) != 0) {
    v7 = a1[1];
  }
  else {
    v7 = v5 >> 1;
  }
  if ((v5 & 1) != 0) {
    v8 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  else {
    v8 = 22;
  }
  v9 = a3 - a2;
  if (a3 == a2) {
    return a1;
  }
  if ((v3 & 1) != 0) {
    v10 = (char*)a1[2];
  }
  else {
    v4 = (unsigned __int8)v3 >> 1;
    v10 = (char*)a1 + 1;
  }
  v11 = (unsigned __int64)&v10[v4 + 1];
  if (a2 < (unsigned __int64)v10 || a2 >= v11) {
    v13 = v7 + v9;
    if (v8 - v7 >= v9) {
      if ((v3 & 1) != 0) {
        v18 = a1[2];
      }
      else {
        v18 = (__int64)a1 + 1;
      }
    LABEL_52:
      v25 = v18 + v7;
      SdkRoutine_858a50(v25, a2, v9);
      *(_BYTE*)(v25 + v9) = 0;
      if ((*(_BYTE*)a1 & 1) != 0) {
        a1[1] = v13;
      }
      else {
        *(_BYTE*)a1 = 2 * v13;
      }
      return a1;
    }
    if (v13 - v8 > -10LL - v8) {
      goto LABEL_56;
    }
    v14 = a2;
    if (v8 > 0x7FFFFFFFFFFFFFF2LL) {
      v17 = -9;
      v18 = SdkRoutine_85e050(0xFFFFFFFFFFFFFFF7LL);
      if (v7 == 0) {
      LABEL_49:
        if (v8 != 22) {
          SdkRoutine_857220(v10, v8 + 1);
        }
        a1[1] = v7;
        a1[2] = v18;
        a2 = v14;
        *a1 = v17 | 1;
        goto LABEL_52;
      }
    }
    else {
      v15 = 2 * v8;
      if (v13 > 2 * v8) {
        v15 = v7 + v9;
      }
      if ((v15 | 7) == 0x17) {
        v16 = 26;
      }
      else {
        v16 = (v15 | 7) + 1;
      }
      if (v15 >= 0x17) {
        v17 = v16;
      }
      else {
        v17 = 23;
      }
      v18 = SdkRoutine_85e050(v17);
      if (v7 == 0) {
        goto LABEL_49;
      }
    }
    SdkRoutine_858a50(v18, v10, v7);
    goto LABEL_49;
  }
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_56:
    SdkRoutine_7d3920();
  }
  if (v9 > 0x16) {
    v20 = a2;
    if ((v9 | 7) == 0x17) {
      v21 = 26;
    }
    else {
      v21 = (v9 | 7) + 1;
    }
    v22 = SdkRoutine_85e050(v21);
    a2 = v20;
    v19 = (char*)v22;
    v28 = v9;
    v29 = (char*)v22;
    v27 = v21 | 1;
  }
  else {
    LOBYTE(v27) = 2 * v9;
    v19 = (char*)&v27 + 1;
  }
  SdkRoutine_856130(v19, a2, v9);
  v19[v9] = 0;
  if ((v27 & 1) != 0) {
    v23 = v29;
  }
  else {
    v23 = (char*)&v27 + 1;
  }
  if ((v27 & 1) != 0) {
    v24 = v28;
  }
  else {
    v24 = (unsigned __int64)(unsigned __int8)v27 >> 1;
  }
  SdkRoutine_86fc80(a1, v23, v24);
  if ((v27 & 1) != 0) {
    SdkRoutine_857220(v29, v27 & 0xFFFFFFFFFFFFFFFELL);
  }
  return a1;
}

void __attribute__((noreturn)) SdkHr_7d6004(__int64 a1, __int64 a2, __int64 a3,
                                            __int64 a4, __int64 a5, __int64 a6,
                                            __int64 a7, __int64 a8, __int64 a9,
                                            __int64 a10, __int64 a11,
                                            __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_7d6360(const void* a1, __int64 a2)
{
  char v3;

  return SdkRoutine_7d63a0(&v3, a1, a2);
}

void __attribute__((noreturn)) SdkHr_7d6fd0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = SdkRoutine_87c8f0(16);
  SdkRoutine_7d7030(v2, a1);
  v3 = SdkRoutine_87c910(v2, SdkData_e89350, SdkData_e89358);
  SdkRoutine_87c920(v2);
  SdkRoutine_87c790(v3);
  __udf(0);
}

_UNKNOWN** SdkHr_7d72e0(const void* a1)
{
  const void* v2;

  v2 = a1;
  return &SdkData_ea91f8 + (SdkRoutine_87c940(&v2, 8) & 0x1F);
}

__int64 SdkHr_7d7ef0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;

  SdkRoutine_87c9d0(a1 + 8);
  v6 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(a1 + 16) + 16LL))(
      a1 + 16, a2, a3);
  SdkRoutine_87c9e0(a1 + 8);
  return v6;
}

void __attribute__((noreturn)) SdkHr_7d7f50(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87c9e0(v1 + 8);
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_7d7f70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SdkRoutine_87c9d0(a1 + 8);
  (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)(a1 + 16) +
                                                    24LL))(a1 + 16, a2, a3, a4);
  return SdkRoutine_87c9e0(a1 + 8);
}

void __attribute__((noreturn)) SdkHr_7d7fd0(__int64 a1)
{
  __int64 v1;

  SdkRoutine_87c9e0(v1 + 8);
  SdkRoutine_87c790(a1);
  __udf(0);
}

__int64 SdkHr_7dbc60(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  *a1 = SdkData_e89398 + 16;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v4 = SdkRoutine_857e60(v3);
  v5 = SdkRoutine_85e050(v4 + 25);
  v6 = v5 + 24;
  *(_QWORD*)v5 = v4;
  *(_QWORD*)(v5 + 8) = v4;
  *(_DWORD*)(v5 + 16) = 0;
  result = SdkRoutine_856130(v5 + 24, v3, v4 + 1);
  a1[1] = v6;
  return result;
}

_QWORD* SdkHr_7dbd80(_QWORD* result, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a2 + 8);
  *result = SdkData_e89398 + 16;
  result[1] = v2;
  atomic_fetch_add((atomic_uint* volatile)(v2 - 8), 1u);
  return result;
}

__int64 SdkHr_7dbdb0(__int64 result, void* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *((_QWORD*)a2 + 1);
  v3 = *(_QWORD*)(result + 8);
  *(_QWORD*)(result + 8) = v2;
  atomic_fetch_add((atomic_uint* volatile)(v2 - 8), 1u);
  if ((int)(atomic_fetch_add((atomic_uint* volatile)(v3 - 8), 0xFFFFFFFF) - 1) <
      0) {
    v4 = result;
    SdkRoutine_8584f0((void*)(v3 - 24), a2);
    return v4;
  }
  return result;
}

__int64 SdkHr_7dbe10(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  *a1 = SdkData_e893a0 + 16;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v4 = SdkRoutine_857e60(v3);
  v5 = SdkRoutine_85e050(v4 + 25);
  v6 = v5 + 24;
  *(_QWORD*)v5 = v4;
  *(_QWORD*)(v5 + 8) = v4;
  *(_DWORD*)(v5 + 16) = 0;
  result = SdkRoutine_856130(v5 + 24, v3, v4 + 1);
  a1[1] = v6;
  return result;
}

_QWORD* SdkHr_7dbf30(_QWORD* result, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a2 + 8);
  *result = SdkData_e893a0 + 16;
  result[1] = v2;
  atomic_fetch_add((atomic_uint* volatile)(v2 - 8), 1u);
  return result;
}

__int64 SdkHr_7dbf60(__int64 result, void* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *((_QWORD*)a2 + 1);
  v3 = *(_QWORD*)(result + 8);
  *(_QWORD*)(result + 8) = v2;
  atomic_fetch_add((atomic_uint* volatile)(v2 - 8), 1u);
  if ((int)(atomic_fetch_add((atomic_uint* volatile)(v3 - 8), 0xFFFFFFFF) - 1) <
      0) {
    v4 = result;
    SdkRoutine_8584f0((void*)(v3 - 24), a2);
    return v4;
  }
  return result;
}

void __attribute__((noreturn)) SdkHr_7dbfc0(const char* a1)
{
  __int64 v2;
  __int64 v3;

  v2 = SdkRoutine_87c8f0(16);
  SdkRoutine_87cac0(v2, a1);
  v3 = SdkRoutine_87c910(v2, SdkData_e893a8, SdkData_e893b0);
  SdkRoutine_87c920(v2);
  SdkRoutine_87c790(v3);
  __udf(0);
}

_BYTE* SdkHr_7dc0c0(_BYTE* result, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64* v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;

  if (a4 >= 0x3FFFFFFFFFFFFFF6LL) {
    SdkRoutine_7d3920();
  }
  v5 = (__int64*)result;
  if (a4 <= 4) {
    *result = 2 * a3;
    v6 = result + 4;
    if (a3 == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v7 = a2;
  if ((a4 | 1) == 5) {
    v8 = 8;
  }
  else {
    v8 = (a4 | 1) + 1;
  }
  result = (_BYTE*)SdkRoutine_85e050(4 * v8);
  a2 = v7;
  v5[1] = a3;
  v5[2] = (__int64)result;
  *v5 = v8 | 1;
  v6 = result;
  if (a3 != 0) {
  LABEL_9:
    result = (_BYTE*)SdkRoutine_858a50(v6, a2, 4 * a3);
  }
LABEL_10:
  *(_DWORD*)&v6[4 * a3] = 0;
  return result;
}

char* SdkHr_7dd020(unsigned __int64* a1, char* a2, char a3)
{
  unsigned __int64 v3;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  signed __int64 v11;
  char* v12;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  char v21;

  v3 = *(unsigned __int8*)a1;
  v6 = (v3 & 1) == 0;
  v7 = v3 >> 1;
  if (v6) {
    v8 = v7;
  }
  else {
    v8 = a1[1];
  }
  v9 = 22;
  if (v6) {
    v10 = (char*)a1 + 1;
  }
  else {
    v10 = (char*)a1[2];
  }
  if (!v6) {
    v9 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  v11 = a2 - v10;
  if ((*a1 & 1) != 0) {
    v12 = (char*)a1[2];
  }
  else {
    v12 = (char*)a1 + 1;
  }
  if (v9 == v8) {
    v14 = (2 * v8) | 7;
    if (v14 == 23) {
      v15 = 26;
    }
    else {
      v15 = v14 + 1;
    }
    if (v8 < 0xC) {
      v15 = 23;
    }
    if (v8 <= 0x7FFFFFFFFFFFFFF2LL) {
      v16 = v15;
    }
    else {
      v16 = -9;
    }
    v17 = SdkRoutine_85e050(v16);
    v18 = v17;
    if (a2 != v10) {
      SdkRoutine_858a50(v17, v12, v11);
    }
    if (v8 != v11) {
      SdkRoutine_858a50(v18 + v11 + 1, &v12[v11], v8 - v11);
    }
    if (v8 != 22) {
      SdkRoutine_857220(v12, v8 + 1);
    }
    a1[1] = v8 + 1;
    a1[2] = v18;
    *a1 = v16 | 1;
    v19 = v8 + 1;
    *(_BYTE*)(v18 + v11) = a3;
    v20 = (char*)a1 + 1;
    *(_BYTE*)(v18 + v8 + 1) = 0;
    v21 = *(_BYTE*)a1;
    if ((*(_BYTE*)a1 & 1) != 0) {
    LABEL_28:
      a1[1] = v19;
      goto LABEL_33;
    }
  }
  else {
    if (v8 != v11) {
      SdkRoutine_858a50(&v12[v11 + 1], &v12[v11], v8 - v11);
    }
    v19 = v8 + 1;
    v12[v11] = a3;
    v20 = (char*)a1 + 1;
    v12[v8 + 1] = 0;
    v21 = *(_BYTE*)a1;
    if ((*(_BYTE*)a1 & 1) != 0) {
      goto LABEL_28;
    }
  }
  *(_BYTE*)a1 = 2 * v19;
LABEL_33:
  if ((v21 & 1) != 0) {
    v20 = (char*)a1[2];
  }
  return &v20[v11];
}

unsigned __int64* SdkHr_7dd760(unsigned __int64* result, unsigned __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64* v9;
  unsigned __int64 v10;
  char* v11;

  if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
    SdkRoutine_7d3920();
  }
  v2 = *result;
  v3 = result;
  v4 = *result & 0xFFFFFFFFFFFFFFFELL;
  v5 = 22;
  if ((*(_BYTE*)result & 1) != 0) {
    v5 = v4 - 1;
  }
  if (a2 > v5) {
    if ((a2 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (a2 | 7) + 1;
    }
    if (a2 >= 0x17) {
      v7 = v6;
    }
    else {
      v7 = 23;
    }
    result = (unsigned __int64*)SdkRoutine_85e050(v7);
    v8 = v3[2];
    v9 = result;
    if ((v2 & 1) != 0) {
      v10 = v3[1];
    }
    else {
      v10 = (unsigned __int8)v2 >> 1;
    }
    if (v10 != -1) {
      if ((v2 & 1) != 0) {
        v11 = (char*)v3[2];
      }
      else {
        v11 = (char*)v3 + 1;
      }
      result = (unsigned __int64*)SdkRoutine_858a50(result, v11, v10 + 1);
    }
    if ((v2 & 1) != 0) {
      result = (unsigned __int64*)SdkRoutine_857220(v8, v4);
    }
    v3[2] = (unsigned __int64)v9;
    *v3 = v7 | 1;
    v3[1] = v10;
  }
  return result;
}

__int64 SdkHr_7dd8b0(unsigned __int8* a1, unsigned __int8 a2,
                     unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v8;
  __int64 v9;

  v3 = *a1;
  v4 = *((_QWORD*)a1 + 1);
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  v5 = v4 >= a3;
  v6 = v4 - a3;
  if (!v5) {
    return -1;
  }
  if ((v3 & 1) != 0) {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = SdkRoutine_8571c0(&v8[a3], a2, v6);
  if (v9 != 0) {
    return v9 - (_QWORD)v8;
  }
  else {
    return -1;
  }
}

__int64 SdkHr_7ddcc0(unsigned __int8* a1, __int64 a2, unsigned __int64 a3,
                     __int64 a4)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  unsigned __int64 v10;

  v4 = *a1;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a1 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a1 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a1 + 1);
  }
  if (a3 >= v8) {
    return -1;
  }
  v10 = a3;
  while (SdkRoutine_8571c0(a2, v7[v10], a4) != 0) {
    if (v8 == ++v10) {
      return -1;
    }
  }
  return v10;
}

__int64 SdkHr_7ddd40(unsigned __int8* a1, __int64 a2, unsigned __int64 a3,
                     __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int8* v5;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  __int64 v12;

  v4 = *a1;
  v5 = *((unsigned __int8**)a1 + 2);
  v8 = (v4 & 1) == 0;
  v9 = v4 >> 1;
  if (v8) {
    v5 = a1 + 1;
  }
  else {
    v9 = *((_QWORD*)a1 + 1);
  }
  v10 = v5 - 1;
  if (a3 < v9) {
    v11 = a3 + 1;
  }
  else {
    v11 = v9;
  }
  while (v11 != 0) {
    v12 = SdkRoutine_8571c0(a2, v10[v11--], a4);
    if (v12 == 0) {
      return v11;
    }
  }
  return -1;
}

__int64* SdkHr_7df940(__int64* result, unsigned __int64 a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char* v10;

  if (a2 >= 0x3FFFFFFFFFFFFFF6LL) {
    SdkRoutine_7d3920();
  }
  v2 = *result;
  v3 = result;
  v4 = 4;
  if ((*(_BYTE*)result & 1) != 0) {
    v4 = (*result & 0xFFFFFFFFFFFFFFFELL) - 1;
  }
  if (a2 > v4) {
    if ((a2 | 1) == 5) {
      v5 = 8;
    }
    else {
      v5 = (a2 | 1) + 1;
    }
    if (a2 >= 5) {
      v6 = v5;
    }
    else {
      v6 = 5;
    }
    result = (__int64*)SdkRoutine_85e050(4 * v6);
    v7 = v3[2];
    v8 = result;
    if ((v2 & 1) != 0) {
      v9 = v3[1];
    }
    else {
      v9 = (unsigned __int8)v2 >> 1;
    }
    if (v9 != -1) {
      if ((v2 & 1) != 0) {
        v10 = (char*)v3[2];
      }
      else {
        v10 = (char*)v3 + 4;
      }
      result = (__int64*)SdkRoutine_858a50(result, v10, 4 * (v9 + 1));
    }
    if ((v2 & 1) != 0) {
      result = (__int64*)SdkRoutine_857220(v7, (4 * v2) & 0xFFFFFFFFFFFFFFF8LL);
    }
    v3[2] = (__int64)v8;
    *v3 = v6 | 1;
    v3[1] = v9;
  }
  return result;
}

__int64 SdkHr_7dfa90(unsigned __int8* a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v8;
  __int64 v9;

  v3 = *a1;
  v4 = *((_QWORD*)a1 + 1);
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  v5 = v4 >= a3;
  v6 = v4 - a3;
  if (!v5) {
    return -1;
  }
  if ((v3 & 1) != 0) {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v8 = a1 + 4;
  }
  v9 = SdkRoutine_87c450(&v8[4 * a3], a2, v6);
  if (v9 != 0) {
    return (v9 - (__int64)v8) >> 2;
  }
  else {
    return -1;
  }
}

#pragma GCC visibility pop
