#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

extern _DWORD GameData_1a82ec0[4];

extern _UNKNOWN GameData_1a89034;

extern char GameData_1a9f09e;

extern _UNKNOWN GameData_1ad653b;

extern _UNKNOWN GameData_1af4ee7;

extern _DWORD GameData_1b36664[7];

extern _DWORD GameData_1b36680[5];

extern _DWORD GameData_1b36694[7];

extern _DWORD GameData_1b373e4[17];

extern _DWORD GameData_1b3f044[14];

extern unsigned __int8 GameData_1b41aa9[22];

extern _UNKNOWN GameData_1c22b58;

extern _UNKNOWN GameData_1c22b60;

extern _UNKNOWN* GameData_1f50948;

extern __int64 (*GameData_1f8ef70[])();

extern __int64 (*GameData_1f8fef0[])();

extern __int64 (*GameData_1f8ff70[])();

extern __int64 (*GameData_1f8fff0[])();

extern __int64 (*GameData_1f90070[])();

extern __int64 (*GameData_1f90100[])();

extern __int64 (*GameData_1f915e8[])();

extern __int64 (*GameData_1f91f68[])();

extern __int64 (*GameData_1f91ff8[])();

extern __int64 (*GameData_1f92f08[])();

extern __int64 (*GameData_1f92f88[])();

extern __int64 (*GameData_1f93088[])();

extern __int64 (*GameData_1f933d8[])();

extern __int64 (*GameData_1f93458[])();

extern __int64 (*GameData_1f934e8[])();

extern __int64 (*GameData_1f93e00[])();

extern __int64 (*GameData_1f93e80[])();

extern __int64 (*GameData_1f93f00[])();

extern __int64 (*GameData_1f94100[])();

extern __int64 (*GameData_1f94190[])();

extern __int64 (*GameData_1f94290[])();

extern __int64 (*GameData_1f94310[])();

extern __int64 (*GameData_1f94c58[])();

extern __int64 (*GameData_1f94cd8[])();

extern __int64 (*GameData_1f94f00[])();

extern __int64 (*GameData_1f95488[])();

extern __int64 (*GameData_1f959d8[])();

extern __int64 (*GameData_1f97200[])();

extern __int64 (*GameData_1f97a90[])();

extern __int64 (*GameData_1f97f90[])();

extern __int64 (*GameData_1f98010[])();

extern __int64 (*GameData_1f98090[])();

extern _UNKNOWN* GameData_1f9cb48;

extern __int64 (*GameData_1f9fd40[])();

extern __int64 (*GameData_1fb2478[])();

extern __int64 (*GameData_202d0c8[])();

extern __int64 (*GameData_212bf08)();

extern __int64 GameData_212bf68;

extern __int64* GameData_212c018[2];

extern _UNKNOWN* GameData_212c028;

extern __int64 GameData_212c060;

extern __int64 (**GameData_212c3c8)();

extern _UNKNOWN** GameData_212c428[9];

extern __int64 GameData_212c470;

extern _UNKNOWN* GameData_212c540;

extern _UNKNOWN* GameData_212c730;

extern __int64* GameData_212c790;

extern __int64* GameData_212c878[6];

extern __int64* GameData_212c880[5];

extern _UNKNOWN* GameData_212c8a8;

extern __int64* GameData_212c930;

extern __int64* GameData_212ce30;

extern _UNKNOWN* GameData_212ce38;

extern __int64* GameData_212ce40;

extern __int64* GameData_212ce88[4];

extern __int64* GameData_212ce90[3];

extern __int64* GameData_212ce98[2];

extern __int64* GameData_212cea0;

extern __int16* GameData_212cf08[9];

extern _UNKNOWN* GameData_212cf50;

extern __int64 GameData_212cf60;

extern __int64* GameData_212cfb8[11];

extern __int64* GameData_212cfc0[10];

extern __int64* GameData_212cfc8[9];

extern __int64* GameData_212cfd0[8];

extern __int64* GameData_212cff0[4];

extern __int64* GameData_212cff8[3];

extern __int64 GameData_212d020[5];

extern __int64* GameData_212d1f8[2];

extern _UNKNOWN* GameData_212d208;

extern __int64 GameData_212d8b0[3];

extern __int64 (*GameData_212e730)();

extern __int64* GameData_21309c8[5];

extern _UNKNOWN GameData_2166898;

extern int GameData_21762a8;

extern __int64 GameData_21a3a28;

extern __int128 GameData_21a6120;

extern _UNKNOWN GameData_21a6130;

extern __int64 GameData_21c9608;

extern __int64 GameData_21c96e8;

extern __int64 GameData_21c9700;

extern __int64 GameData_21c9988;

extern __int64 GameData_21c99b0;

extern __int64 GameData_21c99b8;

extern __int64 GameData_21c99c8;

extern __int64 GameData_21ca0c8;

extern __int64 GameData_21ca0d0;

extern __int64 GameData_21ca0d8;

extern __int64 GameData_21ca0e8;

extern __int64 GameData_21ca0f0;

extern __int64 GameData_21ca100;

extern __int64 GameData_21ca108;

extern __int64 GameData_21ca110;

extern __int64 GameData_21ca118;

extern __int64 GameData_21ca120;

extern __int64 GameData_21ca128;

extern __int64 GameData_21ca130;

extern __int64 GameData_21ca138;

extern __int64 GameData_21ca140;

extern __int64 GameData_21ca148;

extern __int64 GameData_21ca150;

extern __int64 GameData_21ca158;

extern __int64 GameData_21ca160;

extern __int64 GameData_21ca168;

extern __int64 GameData_21ca170;

extern __int64 GameData_21ca178;

extern __int64 GameData_21ca240;

extern __int64 GameData_21ca248;

extern __int64 GameData_21ca270;

extern __int64 GameData_21ca278;

extern _UNKNOWN GameData_21ca280;

extern __int64 GameData_21ca2f0;

extern __int64 GameData_21ca2f8;

extern __int64 GameData_21ca300;

extern __int64 GameData_21ca308;

extern __int64 GameData_21ca310;

extern __int64 GameData_21ca318;

extern __int64 GameData_21ca320;

extern __int64 GameData_21ca328;

extern __int64 GameData_21ca330;

extern __int64 GameData_21ca340;

extern __int64 GameData_21ca348;

extern _UNKNOWN GameData_21ca350;

extern __int64 GameData_21ca358;

extern __int64 GameData_21ca360;

extern __int64 GameData_21ca368;

extern __int64 GameData_21ca370;

extern __int64 GameData_21ca378;

extern __int64 GameData_21ca380;

extern __int64 GameData_21ca388;

extern __int64 GameData_21ca390;

extern __int64 GameData_21ca398;

extern __int64 GameData_21ca3a0;

extern __int64 GameData_21ca3a8;

extern __int64 GameData_21ca3b0;

extern __int64 GameData_21ca3c0;

extern __int64 GameData_21caab0;

extern __int64 GameData_21cd0c8;

extern __int64 GameData_21cd0e0;

extern __int64 GameData_21cd0e8;

extern __int64 GameData_21cd108;

extern __int64 GameData_21cd120;

extern __int64 GameData_21cd128;

extern __int64 GameData_21cd130;

extern __int64 GameData_21cd140;

extern __int64 GameData_21cf830;

extern __int64 GameData_21d1e40;

extern __int64 GameData_21d1e50;

extern __int64 GameData_21d1e60;

extern __int64 GameData_21d3f58;

extern _UNKNOWN GameData_21d40b8;

extern _UNKNOWN GameData_21d41b0;

extern int GameData_21d8810;

extern __int64 GameData_21d8818;

extern __int64 GameData_21d8820;

extern int GameData_21d9860;

extern __int64 GameData_21ec550;

extern __int64 GameData_21ee240;

extern __int64 GameData_21ee260;

extern __int64 GameData_21eea58;

extern __int64 GameData_21f1780;

extern __int64 GameData_21f1e08;

extern __int64 GameData_21f4280;

extern __int64 GameData_21f42d0;

extern __int64 GameData_21f49b8;

extern __int64 GameData_2203088;

extern __int64 GameData_22030a0;

extern __int64 GameData_22030a8;

extern __int64 GameData_22030b8;

extern __int64 GameData_22030c0;

extern __int64 GameData_22030d0;

extern __int64 GameData_22030d8;

extern _UNKNOWN GameData_22030f0;

extern __int64 GameData_2241428;

extern __int64 GameData_2258178;

extern __int64 GameData_2265ee0;

extern char GameData_22736e0;

__n128 GameRoutine_10c830(_QWORD, float);

__int64 GameRoutine_10cff0(_QWORD);

__int64 GameRoutine_127be60(_QWORD);

__int64 GameRoutine_1329500(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_13305c0(_QWORD);

__int64 GameRoutine_13460a0(_QWORD);

struct PseudoSret GameRoutine_134b980(_QWORD);

__int64 GameRoutine_1647b80(_QWORD, _QWORD);

__int64 GameRoutine_1738620(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_17d4db0(_QWORD, _QWORD);

__int64 GameRoutine_17d4e60(_QWORD, _QWORD);

__int64 GameRoutine_17d59a0(_QWORD, _QWORD);

__int64 GameRoutine_17d5f20(_QWORD, _QWORD);

__int64 GameRoutine_17d62a0(_QWORD, _QWORD);

__int64 GameRoutine_18aff60(_QWORD, _QWORD);

__int64 GameRoutine_18df280(_QWORD, _QWORD);

__n128 GameRoutine_1971f0(_QWORD, _QWORD);

__int64 GameRoutine_1976c0(_QWORD);

__int64 GameRoutine_19f3aa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_19f5240(_QWORD);

__int64 GameRoutine_1a09b70(_QWORD);

__int64 GameRoutine_1a09b80(_QWORD);

__int64 GameRoutine_1a09c00(_QWORD);

__int64 GameRoutine_1a09c10(_QWORD);

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);

__int64 GameRoutine_1a09d00(_QWORD);

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);

__int64 GameRoutine_1a09fd0(_QWORD);

__int64 GameRoutine_1a09fe0(_QWORD);

__int64 GameRoutine_1a0a180(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);

float GameRoutine_1a0a6a0(float, float);

__int64 GameRoutine_1a0a6f0(_QWORD);

__int64 GameRoutine_1a0a700(_QWORD);

__int64 GameRoutine_1a0b8f0(_QWORD);

__int64 GameRoutine_1a0b900(_QWORD);

__int64 GameRoutine_1a0b910(_QWORD);

__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);

struct PseudoSret GameRoutine_53c20(_QWORD);

__int64 GameRoutine_5b3d10(__int64, int, __int64);

struct PseudoSret GameRoutine_5b3d60(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_5cc140(__int64, int);

__int64 GameRoutine_60a020(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);

void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);

__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);

float GameRoutine_619100(__int64, long double, float);

unsigned __int64 GameRoutine_61c30(__int64, __int64, __int64, unsigned __int64,
                                   __int64, __int64);

__int64 GameRoutine_632cd0(_QWORD, _QWORD);

_QWORD* GameRoutine_633840(_QWORD*);

__int64 GameRoutine_634d80(_QWORD, _QWORD);

__int64 GameRoutine_637b00(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_637c90(void);

__int64 GameRoutine_6478c0(__int64);

__int64 GameRoutine_64ac70(_QWORD, _QWORD);

__int64 GameRoutine_64adb0(_QWORD, _QWORD);

__int64 GameRoutine_64aef0(_QWORD, _QWORD);

__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_654050(_QWORD, _QWORD);

__int64 GameRoutine_6544c0(__int64, __int64);

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_657a50(_QWORD, _QWORD);

__int64 GameRoutine_658d60(_QWORD);

__int64 GameRoutine_65c580(_QWORD, _QWORD);

__int64 GameRoutine_65cf40(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_65d2d0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_66bfc0(_QWORD);

__int64 GameRoutine_682780(_QWORD);

__int64 GameRoutine_689100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_689280(_QWORD, _QWORD);

__int64 GameRoutine_6b3720(_QWORD);

__int64 GameRoutine_6b38a0(void);

__int64 GameRoutine_6b4ef0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6b50a0(_QWORD);

__int64 GameRoutine_6b51e0(_QWORD);

void __attribute__((noreturn)) GameRoutine_6b5390(_QWORD);

__int64 GameRoutine_6b55a0(__int64 result, unsigned __int8);

__int64 GameRoutine_6b63a0(_QWORD, _QWORD);

__int64 GameRoutine_6b6600(_QWORD, _QWORD);

__int64 GameRoutine_6b6860(_QWORD);

__int64 GameRoutine_6b6a60(_QWORD);

__int64 GameRoutine_6b6c80(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6b6ee0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6b71e0(_QWORD);

__int64 GameRoutine_6b7f00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6b81a0(_QWORD, _QWORD);

__int64 GameRoutine_6b83e0(_QWORD, _QWORD);

__int64 GameRoutine_6b8990(_QWORD, _QWORD);

__int64 GameRoutine_6b8da0(_QWORD, _QWORD);

__int64 GameRoutine_6c1d00(_QWORD);

void __attribute__((noreturn)) GameRoutine_6c1f60(void);

__int64 GameRoutine_6c1f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6c2b50(_QWORD);

__int64 GameRoutine_6c8830(_QWORD);

__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_6cbca0(void);

__int64 GameRoutine_6d8f40(_QWORD, _QWORD);

__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);

__int64 GameRoutine_6e9fa0(void);

void GameRoutine_6ea140();

__int64 GameRoutine_6ea8c0(_QWORD, long double);

__int64 GameRoutine_6ea9d0(_QWORD);

__int64 GameRoutine_6ead60(_QWORD, _QWORD);

__int64 GameRoutine_6ec7a0(_QWORD, _QWORD);

__int64 GameRoutine_6eca40(_QWORD, _QWORD);

__int64 GameRoutine_6ed500();

__int64 GameRoutine_6eeca0(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_6f0df0(_QWORD);

void __attribute__((noreturn)) GameRoutine_6f1320(_QWORD);

__int64 GameRoutine_6f1340(void);

__int64 GameRoutine_6f2440(_QWORD, _QWORD);

void __attribute__((noreturn)) GameRoutine_6f26d0(_QWORD);

__int64 GameRoutine_6f57e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_710540(_QWORD, _QWORD);

__int64 GameRoutine_715600(__int64);

__int64 GameRoutine_715780(void);

__int64 GameRoutine_715ca0(_QWORD);

__int64 GameRoutine_7160c0(void);

__int64 GameRoutine_716d80(_QWORD, _QWORD);

__int64 GameRoutine_71f220(_QWORD);

__int64 GameRoutine_72a260(_QWORD);

__int64 GameRoutine_72b4a0(_QWORD);

__int64 GameRoutine_72b6c0(_QWORD);

void GameRoutine_730cb0(__int64, char*);

void GameRoutine_730e40(__int64, __int64);

float* GameRoutine_731180(float* result);

void GameRoutine_7317c0(__int64);

__int64 GameRoutine_73bd40(_QWORD, _QWORD);

__int64 GameRoutine_742cc0(void);

__int64 GameRoutine_744480(_QWORD);

__int64 GameRoutine_747a00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_74d660(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_752040(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_752b40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);

__int64 GameRoutine_753570(_QWORD, _QWORD);

__int64 GameRoutine_756d50(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_756f00(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_757f60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

float GameRoutine_764490(void);

__int64 GameRoutine_765b20(void);

__int64 GameRoutine_76b550(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_772f60(_QWORD, _QWORD);

__int64 GameRoutine_773420(__int64, __int64, long double);

__int64 GameRoutine_775580(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_776720(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_778500(_QWORD);

__int64 GameRoutine_7797e0(_QWORD, _QWORD);

__int64 GameRoutine_77a740(__int64, unsigned int, long double);

__int64 GameRoutine_78d280(_QWORD, _QWORD);

__int64 GameRoutine_78e3c0(_QWORD, _QWORD);

__int64 GameRoutine_78e5d0(__int64, long double);

__int64 GameRoutine_78f220(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_78f500(_QWORD);

__int64 GameRoutine_799290(_QWORD);

__int64 GameRoutine_7a0e10(_QWORD, _QWORD);

__int64 GameRoutine_7a7dc0(const char*, ...);

__int64 GameRoutine_7a86e0(_QWORD);

__int64 GameRoutine_7c16d0(_QWORD, _QWORD);

__int64 GameRoutine_7d6200(_QWORD, _QWORD);

__int64 GameRoutine_7f8610(_QWORD);

__int64 GameRoutine_7f8cc0(_QWORD, _QWORD);

__int64 GameRoutine_7f8fd0(_QWORD, _QWORD);

__int64 GameRoutine_80cb30(_QWORD);

__int64 GameRoutine_80cc80(_QWORD);

__int64 GameRoutine_80e090(void);

__int64 GameRoutine_81aee0(_QWORD, float);

__int64 GameRoutine_827530(_QWORD);

__int64 GameRoutine_829ca0(_QWORD);

__int64 GameRoutine_82ce80(_QWORD, _QWORD);

__int64 GameRoutine_844950(_QWORD, _QWORD);

__int64 GameRoutine_8450e0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_845bc0(_QWORD, _QWORD);

__int64 GameRoutine_84cb50(_QWORD, _QWORD);

__int64 GameRoutine_84edc0(_QWORD, _QWORD);

__int64 GameRoutine_86c160(_QWORD);

__int64 GameRoutine_890160(_QWORD);

__int64 GameRoutine_89b540(_QWORD);

__int64 GameRoutine_8b6940(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_8c5700(_QWORD, _QWORD);

__int64 GameRoutine_8c5c60(_QWORD, _QWORD);

__int64 GameRoutine_90d5a0(void);

__int64 GameRoutine_93bb80(_QWORD);

__int64 GameRoutine_9728b0(_QWORD);

__int64 GameRoutine_97b680(_QWORD);

__int64 GameRoutine_9903e0(_QWORD);

__int64 GameRoutine_9a28e0(_QWORD);

__int64 GameRoutine_9b3b00(_QWORD);

__int64 GameRoutine_9bce00(_QWORD, _QWORD);

__int64 GameRoutine_9bd140(_QWORD, _QWORD);

__int64 GameRoutine_9bd480(void);

__int64 GameRoutine_a14660(_QWORD, _QWORD);

__int64 GameRoutine_a15480(_QWORD);

__int64 GameRoutine_a17d20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_a93ea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_db7ba0(_QWORD);

struct PseudoSret GameRoutine_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD, double, float);

unsigned __int64 GameHr_5cd420(__int64* a1)
{
  unsigned __int64 v1;
  __int64 v4;
  float v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float* v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  int v25;
  __int64 v26;
  __int64 v27;
  float* v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float* v38;
  float v39;
  float v40;
  _DWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  int v49;

  if (*(_BYTE*)(*(_QWORD*)(*a1 + 160) + 1874LL) != 0) {
    goto LABEL_2;
  }
  v4 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(*a1 + 2088) +
                                                   16LL))(*a1 + 2088, 64, 128);
  if (v4 == 0) {
    goto LABEL_2;
  }
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = 0;
  *(_QWORD*)v4 = 0;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(*a1 + 1048) = v4;
  v5 = *(float*)(*(_QWORD*)(*a1 + 160) + 2048LL);
  v6 = *(_QWORD*)(*(_QWORD*)(*a1 + 568) + 696LL);
  if (v6 != 0) {
    v7 = *(_DWORD*)(v6 + 4);
    if (v7 >= 1) {
      v8 = v7 & 7;
      if ((unsigned int)v7 < 8) {
        v9 = 0;
      LABEL_29:
        if (v8 != 0) {
          v20 = (float*)(v6 + 16 * v9 + 12);
          do {
            v21 = *v20;
            v20 += 4;
            v22 = v21;
            if (v5 < v21) {
              v5 = v22;
            }
            --v8;
          } while (v8 != 0);
        }
        goto LABEL_34;
      }
      v10 = (float*)(v6 + 76);
      v11 = 0;
      v12 = -(__int64)(v7 & 0x7FFFFFF8);
      while (1) {
        v13 = *(v10 - 16);
        if (v5 >= v13) {
          v13 = v5;
          v14 = *(v10 - 12);
          if (v13 < v14) {
          LABEL_13:
            v15 = *(v10 - 8);
            if (v14 < v15) {
              goto LABEL_14;
            }
            goto LABEL_22;
          }
        }
        else {
          v14 = *(v10 - 12);
          if (v13 < v14) {
            goto LABEL_13;
          }
        }
        v14 = v13;
        v15 = *(v10 - 8);
        if (v14 < v15) {
        LABEL_14:
          v16 = *(v10 - 4);
          if (v15 < v16) {
            goto LABEL_15;
          }
          goto LABEL_23;
        }
      LABEL_22:
        v15 = v14;
        v16 = *(v10 - 4);
        if (v15 < v16) {
        LABEL_15:
          v17 = *v10;
          if (v16 < *v10) {
            goto LABEL_16;
          }
          goto LABEL_24;
        }
      LABEL_23:
        v16 = v15;
        v17 = *v10;
        if (v16 < *v10) {
        LABEL_16:
          v18 = v10[4];
          if (v17 < v18) {
            goto LABEL_17;
          }
          goto LABEL_25;
        }
      LABEL_24:
        v17 = v16;
        v18 = v10[4];
        if (v17 < v18) {
        LABEL_17:
          v19 = v10[8];
          if (v18 < v19) {
            goto LABEL_18;
          }
          goto LABEL_26;
        }
      LABEL_25:
        v18 = v17;
        v19 = v10[8];
        if (v18 < v19) {
        LABEL_18:
          v5 = v10[12];
          if (v19 >= v5) {
            goto LABEL_27;
          }
          goto LABEL_10;
        }
      LABEL_26:
        v19 = v18;
        v5 = v10[12];
        if (v19 >= v5) {
        LABEL_27:
          v5 = v19;
        }
      LABEL_10:
        v11 -= 8;
        v10 += 32;
        if (v12 == v11) {
          v9 = -v11;
          goto LABEL_29;
        }
      }
    }
  }
LABEL_34:
  *(_DWORD*)(v4 + 48) = vcvtps_u32_f32(v5);
  v23 = *(_QWORD*)(*(_QWORD*)(*a1 + 568) + 704LL);
  v24 = (float)*(int*)(*(_QWORD*)(*a1 + 160) + 2232LL);
  if (v23 == 0) {
    goto LABEL_63;
  }
  v25 = *(_DWORD*)(v23 + 4);
  if (v25 < 1) {
    goto LABEL_63;
  }
  v26 = v25 & 7;
  if ((unsigned int)v25 >= 8) {
    v28 = (float*)(v23 + 76);
    v29 = 0;
    v30 = -(__int64)(v25 & 0x7FFFFFF8);
    while (1) {
      v31 = *(v28 - 16);
      if (v24 >= v31) {
        v31 = v24;
        v32 = *(v28 - 12);
        if (v31 < v32) {
        LABEL_42:
          v33 = *(v28 - 8);
          if (v32 < v33) {
            goto LABEL_43;
          }
          goto LABEL_51;
        }
      }
      else {
        v32 = *(v28 - 12);
        if (v31 < v32) {
          goto LABEL_42;
        }
      }
      v32 = v31;
      v33 = *(v28 - 8);
      if (v32 < v33) {
      LABEL_43:
        v34 = *(v28 - 4);
        if (v33 < v34) {
          goto LABEL_44;
        }
        goto LABEL_52;
      }
    LABEL_51:
      v33 = v32;
      v34 = *(v28 - 4);
      if (v33 < v34) {
      LABEL_44:
        v35 = *v28;
        if (v34 < *v28) {
          goto LABEL_45;
        }
        goto LABEL_53;
      }
    LABEL_52:
      v34 = v33;
      v35 = *v28;
      if (v34 < *v28) {
      LABEL_45:
        v36 = v28[4];
        if (v35 < v36) {
          goto LABEL_46;
        }
        goto LABEL_54;
      }
    LABEL_53:
      v35 = v34;
      v36 = v28[4];
      if (v35 < v36) {
      LABEL_46:
        v37 = v28[8];
        if (v36 < v37) {
          goto LABEL_47;
        }
        goto LABEL_55;
      }
    LABEL_54:
      v36 = v35;
      v37 = v28[8];
      if (v36 < v37) {
      LABEL_47:
        v24 = v28[12];
        if (v37 >= v24) {
          goto LABEL_56;
        }
        goto LABEL_39;
      }
    LABEL_55:
      v37 = v36;
      v24 = v28[12];
      if (v37 >= v24) {
      LABEL_56:
        v24 = v37;
      }
    LABEL_39:
      v29 -= 8;
      v28 += 32;
      if (v30 == v29) {
        v27 = -v29;
        goto LABEL_58;
      }
    }
  }
  v27 = 0;
LABEL_58:
  if (v26 != 0) {
    v38 = (float*)(v23 + 16 * v27 + 12);
    do {
      v39 = *v38;
      v38 += 4;
      v40 = v39;
      if (v24 < v39) {
        v24 = v40;
      }
      --v26;
    } while (v26 != 0);
  }
LABEL_63:
  *(_DWORD*)(v4 + 52) = (int)v24;
  v41 = *(_DWORD**)(*(_QWORD*)(*a1 + 568) + 824LL);
  *(_DWORD*)v4 = v41[8];
  *(_DWORD*)(v4 + 4) = v41[9];
  *(_DWORD*)(v4 + 8) = v41[23];
  *(_DWORD*)(v4 + 12) = v41[24];
  if ((GameRoutine_5b3d10(*a1, 4, 96) & 1) == 0) {
  LABEL_2:
    LOBYTE(v1) = 0;
    return v1 & 1;
  }
  v42 = *a1;
  v43 = GameData_21a3a28;
  v44 = *(_QWORD*)(v42 + 1048);
  v45 = *(_QWORD*)(*(_QWORD*)(v42 + 568) + 824LL);
  v46 = (int)*(float*)(v45 + 24);
  v47 = *(_DWORD*)(v42 + 560) + GameRoutine_5cc140(v42, v46);
  *(_DWORD*)(v44 + 40) = v47;
  v48 = 2 * (v46 + *(_DWORD*)(v45 + 40) * (v46 - 1));
  *(_DWORD*)(v44 + 32) = v48;
  v1 = (unsigned int)(v48 * v47);
  v49 = *(_DWORD*)(v43 + 24);
  *(_BYTE*)(v44 + 16) = 0;
  *(_DWORD*)(v44 + 36) = v1 * v49;
  if ((_DWORD)v1 != 0) {
    if (((unsigned __int8)(*(struct PseudoSret*)((_QWORD*)v1) =
                               GameRoutine_5b3d60(v42,
                                                  *(unsigned int*)(v43 + 24),
                                                  80LL * (int)v1),
                           (void*)((_QWORD*)v1)) &
         1) != 0) {
      LOBYTE(v1) = 1;
      *(_BYTE*)(v44 + 16) = 1;
    }
    else {
      LOBYTE(v1) = *(_BYTE*)(v44 + 16);
    }
  }
  return v1 & 1;
}

float GameHr_619bc0(__int64 a1, float a2, float a3)
{
  float v4;
  float v5;
  float v7;
  float v8;
  unsigned int v9;
  int v10;
  float v11;
  int v12;
  unsigned int i;
  __int64 v14;
  float v15;
  float v16;
  unsigned int v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  __int64 v23;
  __int64 v24;
  float v25;
  long double v26;
  __int64 v27;

  v4 = 0.0;
  if (a3 > 0.0) {
    v5 = 0.0;
    if (a2 > a3) {
      v7 = a3;
    }
    else {
      v7 = a2;
    }
    if (a2 >= 0.0) {
      v8 = v7;
    }
    else {
      v8 = 0.0;
    }
    v9 = ((__int64 (*)(void))GameRoutine_1976c0)();
    v10 = GameRoutine_1976c0(a1);
    v11 = 0.0;
    if (v10 != 0) {
      v12 = v10;
      for (i = 0; i != v12; ++i) {
        v14 = ((__int64 (*)(__int64, _QWORD))GameRoutine_1971f0)(a1, i);
        v11 = v11 + *(float*)(v14 + 20);
      }
    }
    v15 = v8 / a3;
    v16 = 0.0;
    v17 = 0;
    if (v9 != 0) {
      v5 = 0.0;
      while (1) {
        v20 = ((__int64 (*)(__int64, _QWORD))GameRoutine_1971f0)(a1, v17);
        v21 = *(float*)(v20 + 20);
        v22 = v5 + v21;
        if ((float)((float)(v5 + v21) / v11) >= v15) {
          goto LABEL_22;
        }
        v23 = v20;
        v24 = *(_QWORD*)(v20 + 24);
        v18 = v21;
        if (v24 != 0) {
          if ((unsigned int)GameRoutine_1976c0(v24) > 1) {
            v25 = *(float*)((__int64 (*)(_QWORD, __int64))GameRoutine_1971f0)(
                *(_QWORD*)(v23 + 24), 1);
            v19 = (float)(v25 - *(float*)((__int64 (*)(
                                    _QWORD, _QWORD))GameRoutine_1971f0)(
                                    *(_QWORD*)(v23 + 24), 0)) /
                  *(float*)(v23 + 20);
            goto LABEL_15;
          }
          v18 = *(float*)(v23 + 20);
        }
        v19 = 1.0 / v18;
      LABEL_15:
        v16 = v16 + (float)(v19 * v21);
        v5 = v22;
        if (v9 == ++v17) {
          v5 = v22;
          v17 = v9;
          goto LABEL_22;
        }
      }
    }
    v21 = 0.0;
  LABEL_22:
    *(__n128*)&v26 = GameRoutine_1971f0(a1, v17);
    *(float*)&v26 = -(float)(v5 - (float)(v11 * v15));
    return (float)(v16 + (float)(GameRoutine_619100(v27, v26, v21) * v21)) /
           v11;
  }
  return v4;
}

_QWORD* GameHr_633840(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* result;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;

  v1 = a1[4];
  a1[4] = 0;
  if (v1 != 0) {
    v3 = a1[10];
    v14 = v1;
    if (v3 == 0) {
    LABEL_26:
      GameRoutine_60a310(v3);
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v14);
  }
  result = (_QWORD*)a1[10];
  if (result == a1 + 6) {
    v5 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v5 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
  }
  v6 = (_QWORD*)*a1;
  if (*a1 == 0) {
    return result;
  }
  v7 = (_QWORD*)a1[1];
  if (v6 == v7) {
    goto LABEL_22;
  }
  v8 = (_QWORD*)a1[1];
  do {
    v11 = *(v8 - 10);
    v8 -= 10;
    v10 = v11;
    *v8 = 0;
    if (v11 != 0) {
      v14 = v10;
      v3 = *(v7 - 4);
      if (v3 == 0) {
        goto LABEL_26;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, &v14);
    }
    result = (_QWORD*)*(v7 - 4);
    if (v7 - 8 == result) {
      v9 = 32;
    LABEL_13:
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v9))((__int64)result);
      goto LABEL_14;
    }
    if (result != nullptr) {
      v9 = 40;
      goto LABEL_13;
    }
  LABEL_14:
    v7 = v8;
  } while (v8 != v6);
  v12 = (_QWORD*)*a1;
  a1[1] = v6;
  v6 = v12;
  if (v12 != nullptr) {
  LABEL_22:
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13, v6);
  }
  return result;
}

_QWORD* GameHr_633980(_QWORD* result, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;

  v2 = result;
  if (*a2 == a2[1]) {
    v3 = 0;
  }
  else {
    v3 = *(_QWORD*)(*a2 + 64);
  }
  result[72] = v3;
  if (*a2 != a2[1] && *(_QWORD*)(*a2 + 64) != 0) {
    GameRoutine_1a09c00(result + 87);
    v5 = *((_DWORD*)v2 + 164);
    GameRoutine_1a09c10(v2 + 87);
    if ((v5 & 0x80) != 0) {
      return (_QWORD*)GameRoutine_17d62a0(v2, a2);
    }
    if (*a2 == a2[1]) {
      v6 = a2 + 4;
    }
    else {
      v6 = (__int64*)*a2;
    }
    v7 = *v6;
    *v6 = 0;
    v8 = v2[74];
    v2[74] = v7;
    if (v8 != 0) {
      v9 = v2[80];
      v12 = v8;
      if (v9 == 0) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v9 + 48LL))(v9, &v12);
    }
    result = (_QWORD*)v2[80];
    v2[80] = 0;
    if (result == v2 + 76) {
      v10 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_19;
      }
      v10 = 40;
    }
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
  LABEL_19:
    v11 = (__int64*)v6[6];
    if (v11 != nullptr) {
      if (v11 == v6 + 2) {
        v2[80] = v2 + 76;
        return (_QWORD*)(*(__int64 (**)(__int64, _QWORD*))(
            *(_QWORD*)v6[6] + 24LL))(v6[6], v2 + 76);
      }
      else {
        v2[80] = v11;
        v6[6] = 0;
      }
    }
    else {
      v2[80] = 0;
    }
  }
  return result;
}

__int64 GameHr_634a10(__int64 a1, __int64 a2, char a3)
{
  _QWORD* v3;
  _QWORD* v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v3 = *(_QWORD**)a2;
  v7 = *(_QWORD**)(*(_QWORD*)a2 + 112LL);
  GameRoutine_1a09c00(v7 + 87);
  v8 = *((_DWORD*)v7 + 164);
  GameRoutine_1a09c10(v7 + 87);
  if ((v8 & 0x10) == 0) {
    if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3[1] - *v3) >> 4) < 2) {
      GameRoutine_17d5f20(v3, a3 & 1);
    }
    else {
      GameRoutine_17d59a0(v3, 0);
    }
    if (v3[26] < v3[25]) {
      return GameRoutine_17d4e60(a1 + 3640, a2);
    }
    GameRoutine_1a09c00(v7 + 87);
    v15 = *((_DWORD*)v7 + 164);
    GameRoutine_1a09c10(v7 + 87);
    if ((v15 & 0x10) == 0) {
      if (((*(__int64 (**)(_QWORD*))(*v7 + 32LL))(v7) & 1) != 0) {
        if (((*(__int64 (**)(_QWORD*))(*v7 + 48LL))(v7) & 1) == 0 ||
            (*(_BYTE*)(a1 + 4745) & 1) != 0) {
          GameRoutine_1a09b70(a1 + 3792);
          if ((*(_BYTE*)(a1 + 3832) & 1) == 0) {
            v16 = *(_QWORD*)(a1 + 3760);
            v17 = *(_QWORD*)(a1 + 3752);
            v18 = ((v16 - v17) << 6) - 1;
            if (v16 == v17) {
              v18 = 0;
            }
            v19 = *(_QWORD*)(a1 + 3784) + *(_QWORD*)(a1 + 3776);
            if (v18 == v19) {
              GameRoutine_9b3b00(a1 + 3744);
              v17 = *(_QWORD*)(a1 + 3752);
              v19 = *(_QWORD*)(a1 + 3784) + *(_QWORD*)(a1 + 3776);
            }
            *(_QWORD*)(*(_QWORD*)(v17 + 8 * (v19 >> 9)) + 8 * (v19 & 0x1FF)) =
                v7;
            ++*(_QWORD*)(a1 + 3784);
          }
          GameRoutine_1a09b80(a1 + 3792);
          goto LABEL_33;
        }
        GameRoutine_17d4db0(a1 + 3840, v7);
      LABEL_36:
        v23 = *(_QWORD**)a2;
        *(_QWORD*)a2 = 0;
        if (v23 == nullptr) {
        LABEL_48:
          v21 = GameData_2265ee0;
          goto LABEL_49;
        }
        v24 = v23[16];
        v23[16] = 0;
        if (v24 == 0) {
        LABEL_40:
          v25 = (_QWORD*)v23[22];
          if (v25 == v23 + 18) {
            v26 = 32;
          }
          else {
            if (v25 == nullptr) {
            LABEL_45:
              GameRoutine_633840(v23);
              v27 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v27 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v27, v23);
              goto LABEL_48;
            }
            v26 = 40;
          }
          (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
          goto LABEL_45;
        }
        v11 = v23[22];
        v29 = v24;
        if (v11 != 0) {
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(v11, &v29);
          goto LABEL_40;
        }
      LABEL_53:
        GameRoutine_60a310(v11);
      }
      if (v7[97] != v7[96]) {
        GameRoutine_17d4db0(a1 + 3944, v7);
      LABEL_33:
        v22 = atomic_load((unsigned __int64*)(a1 + 4248));
        if (v22 != 0) {
          GameRoutine_1a0a180(a1 + 4184);
        }
        goto LABEL_36;
      }
    }
    GameRoutine_632cd0(a1, v7);
    goto LABEL_36;
  }
  GameRoutine_632cd0(a1, v7);
  v9 = *(_QWORD**)a2;
  *(_QWORD*)a2 = 0;
  if (v9 != nullptr) {
    v10 = v9[16];
    v9[16] = 0;
    if (v10 != 0) {
      v11 = v9[22];
      v29 = v10;
      if (v11 == 0) {
        goto LABEL_53;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(v11, &v29);
    }
    v12 = (_QWORD*)v9[22];
    if (v12 == v9 + 18) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_27:
        GameRoutine_633840(v9);
        v20 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v20 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v20, v9);
        goto LABEL_30;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
    goto LABEL_27;
  }
LABEL_30:
  v21 = GameData_2265ee0;
LABEL_49:
  v28 = 128;
  if (*(_QWORD*)(v21 + 200) == 0) {
    v28 = 56;
  }
  return GameRoutine_1a0a4e0(v21 + v28, a2);
}

__int64 GameHr_637cc0(__int64* a1, __int64* a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;

  v3 = *a1;
  v4 = a1[1] - *a1;
  v5 = 1 - 0x3333333333333333LL * (v4 >> 4);
  if (v5 > 0x333333333333333LL) {
    GameRoutine_637c90();
  }
  v6 = a1[2];
  v31 = a1 + 2;
  v10 = GameData_212bf68;
  v11 = 0xCCCCCCCCCCCCCCCDLL * ((v6 - v3) >> 4);
  if (2 * v11 > v5) {
    v5 = 2 * v11;
  }
  if (v11 >= 0x199999999999999LL) {
    v12 = 0x333333333333333LL;
  }
  else {
    v12 = v5;
  }
  if (v12 != 0) {
    if (v12 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v13 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80 * v12, 16, 0);
  }
  else {
    v13 = 0;
  }
  v14 = (_QWORD*)(v13 + v4);
  v15 = v13 + 80 * v12;
  v27 = v13;
  v28 = v14;
  v16 = (__int64*)a2[6];
  v30 = v15;
  v17 = *a2;
  *a2 = 0;
  *v14 = v17;
  if (v16 != nullptr) {
    if (v16 == a2 + 2) {
      v14[6] = v14 + 2;
      (*(void (**)(__int64*))(*v16 + 24))(v16);
    }
    else {
      v14[6] = v16;
      a2[6] = 0;
    }
  }
  else {
    v14[6] = 0;
  }
  v14[8] = *a3;
  v29 = v14 + 10;
  GameRoutine_637b00(a1, &v27);
  v18 = a1[1];
  v19 = v28;
  while (1) {
    v21 = v29;
    if (v19 == v29) {
      break;
    }
    v29 -= 10;
    v22 = *(v21 - 10);
    *(v21 - 10) = 0;
    if (v22 != 0) {
      v32 = v22;
      v23 = *(v21 - 4);
      if (v23 == 0) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v23 + 48LL))(v23, &v32);
    }
    v24 = (_QWORD*)*(v21 - 4);
    if (v24 == v21 - 8) {
      v20 = 32;
      goto LABEL_18;
    }
    if (v24 != nullptr) {
      v20 = 40;
    LABEL_18:
      (*(void (**)(__int64))(*v24 + v20))((__int64)v24);
    }
  }
  if (v27 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v25 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v10 + v25, v27);
  }
  return v18;
}

_DWORD* GameHr_649ee0(_DWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BOOL4 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 j;
  __int64 v17;
  __int64 k;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  int v38;
  _QWORD* v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  _QWORD* v46;
  __int64 v47;
  _QWORD* v48;
  int v49;
  int v50;
  _QWORD v51[2];
  _BYTE v52[12];
  int v53;
  __int64 v54;
  __int64 v55;
  char v56;
  _QWORD* v57;

  v1 = (__int64)result;
  v2 = (unsigned int)result[3310];
  v3 = (unsigned int)result[3311];
  v7 = result[3328] != result[3332] || result[3329] != result[3333] ||
       result[3326] != result[3330] || result[3327] != result[3331];
  if ((unsigned int)v2 > 6) {
    v8 = 0;
    if ((unsigned int)v3 > 6) {
    LABEL_15:
      v9 = 0;
      if ((unsigned int)v2 > 6) {
        goto LABEL_16;
      }
    LABEL_20:
      v10 = GameData_1b36694[v2];
      if ((unsigned int)v3 > 6) {
        goto LABEL_17;
      }
      goto LABEL_21;
    }
  }
  else {
    v8 = GameData_1b36664[v2];
    if ((unsigned int)v3 > 6) {
      goto LABEL_15;
    }
  }
  v9 = GameData_1b36664[v3];
  if ((unsigned int)v2 <= 6) {
    goto LABEL_20;
  }
LABEL_16:
  v10 = 0;
  if ((unsigned int)v3 > 6) {
  LABEL_17:
    v11 = 0;
    goto LABEL_22;
  }
LABEL_21:
  v11 = GameData_1b36694[v3];
LABEL_22:
  v49 = v11;
  v50 = v10;
  if (v7) {
    v12 = 1;
  }
  else {
    v12 = *((_BYTE*)result + 16696);
    if (v8 == v9 && v10 == v11 && (result[4174] & 1) == 0) {
      v12 = 0;
      if ((_DWORD)v2 == (_DWORD)v3) {
        goto LABEL_73;
      }
    LABEL_32:
      if (v8 == v9) {
        v20 = *(_DWORD*)(v1 + 13244);
        *(_DWORD*)(v1 + 13240) = v20;
      }
      else {
        v19 = *(_QWORD*)(v1 + 400);
        *(_QWORD*)(v1 + 392) = 0;
        *(_QWORD*)(v1 + 400) = 0;
        if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          GameRoutine_1a09c50(v19);
        }
        *(_DWORD*)(v1 + 13240) = *(_DWORD*)(v1 + 13244);
        GameRoutine_6478c0(v1);
        v20 = *(_DWORD*)(v1 + 13240);
      }
      if ((unsigned int)(v20 - 3) > 3) {
        v21 = *(_QWORD*)(v1 + 13232);
        LOBYTE(v51[0]) = 20;
        strcpy((char*)v51 + 1, "co_o_rbwcg");
        v57 = v51;
        *(_DWORD*)(GameRoutine_a93ea0(v21, v51, GameData_212c028, &v57, &v56) +
                   40) = 0;
        if ((v51[0] & 1) != 0) {
          goto LABEL_59;
        }
      }
      else {
        v21 = *(_QWORD*)(v1 + 13232);
        LOBYTE(v51[0]) = 20;
        strcpy((char*)v51 + 1, "co_o_rbwcg");
        v57 = v51;
        if ((unsigned int)(v20 - 5) > 1) {
          v22 = GameRoutine_a93ea0(v21, v51, GameData_212c028, &v57, &v56);
          v23 = 1;
        }
        else {
          v22 = GameRoutine_a93ea0(v21, v51, GameData_212c028, &v57, &v56);
          v23 = 2;
        }
        *(_DWORD*)(v22 + 40) = v23;
        if ((v51[0] & 1) != 0) {
        LABEL_59:
          if (*(_QWORD*)v52 != 0) {
            v24 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v24 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24,
                                *(_QWORD*)v52);
          }
        }
      }
      *(_BYTE*)(v21 + 40) = 1;
      v25 = *(_DWORD*)(v1 + 13240) - 2;
      if (v25 > 4) {
        v26 = 0;
      }
      else {
        v26 = GameData_1b36680[v25];
      }
      v27 = *(_QWORD*)(v1 + 13232);
      LOBYTE(v51[0]) = 20;
      strcpy((char*)v51 + 1, "co_o_omihd");
      v57 = v51;
      v28 = GameRoutine_a93ea0(v27, v51, GameData_212c028, &v57, &v56);
      v29 = v51[0];
      *(_DWORD*)(v28 + 40) = v26;
      if ((v29 & 1) != 0 && *(_QWORD*)v52 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v30 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v30, *(_QWORD*)v52);
      }
      *(_BYTE*)(v27 + 40) = 1;
      result = *(_DWORD**)(v1 + 13280);
      if (result != nullptr) {
        result = (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 48LL))(
            result);
      }
      goto LABEL_73;
    }
  }
  result = (_DWORD*)(*(__int64 (**)(__int64))GameData_212c428[0])(
      *((_QWORD*)result + 34) + 8LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0) {
    result = (_DWORD*)GameRoutine_1a09fd0(&GameData_22030f0);
    if ((_DWORD)result != 0) {
      GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
      result = (_DWORD*)GameRoutine_1a09fe0(&GameData_22030f0);
    }
  }
  v13 = GameData_22030a0;
  for (i = GameData_22030a8; i != v13; i -= 48) {
    result = *(_DWORD**)(i - 40);
    *(_QWORD*)(i - 40) = 0;
    if (result != nullptr) {
      result =
          (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 8LL))(result);
    }
  }
  GameData_22030a8 = v13;
  v15 = GameData_22030b8;
  for (j = GameData_22030c0; j != v15; j -= 48) {
    result = *(_DWORD**)(j - 40);
    *(_QWORD*)(j - 40) = 0;
    if (result != nullptr) {
      result =
          (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 8LL))(result);
    }
  }
  GameData_22030c0 = v15;
  v17 = GameData_22030d0;
  for (k = GameData_22030d8; k != v17; k -= 24) {
    result = *(_DWORD**)(k - 16);
    *(_QWORD*)(k - 16) = 0;
    if (result != nullptr) {
      result =
          (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 8LL))(result);
    }
  }
  GameData_22030d8 = v17;
  if (v7) {
    result = *(_DWORD**)(v1 + 13376);
    *(_DWORD*)(v1 + 13304) = *(_DWORD*)(v1 + 13320);
    *(_QWORD*)(v1 + 13308) = *(_QWORD*)(v1 + 13324);
    *(_DWORD*)(v1 + 13316) = *(_DWORD*)(v1 + 13332);
    if (result != nullptr) {
      result =
          (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 48LL))(result);
    }
  }
  if ((_DWORD)v2 != (_DWORD)v3) {
    goto LABEL_32;
  }
LABEL_73:
  if ((v12 & 1) != 0) {
    result = *(_DWORD**)(v1 + 16672);
    if (result != nullptr) {
      v31 = result[532];
      v32 = *(_DWORD*)(v1 + 13316);
      v33 = *(_QWORD*)(v1 + 256) + 8LL;
      *(_DWORD*)&v52[8] = *(_DWORD*)(v1 + 13312);
      v34 = *(_QWORD*)(v1 + 13304);
      v53 = v32;
      LODWORD(v54) = v31;
      *(_QWORD*)v52 = v34;
      v35 = *(_QWORD*)(*(_QWORD*)(v1 + 552) + 16LL);
      BYTE4(v54) = 0;
      v51[0] = v33;
      v51[1] = v35;
      if (*(_BYTE*)(v1 + 16696) == 1) {
        v36 = *(_BYTE*)(v1 + 16692);
        LODWORD(v54) = *(_DWORD*)(v1 + 16688);
        BYTE4(v54) = v36;
        *(_DWORD*)(v1 + 16680) = v54;
        *(_BYTE*)(v1 + 16684) = v36;
      }
      result = (_DWORD*)GameRoutine_18df280(result, v51);
      if (*(_BYTE*)(v1 + 16696) == 1) {
        *(_BYTE*)(v1 + 16696) = 0;
      }
    }
  }
  if (v7) {
    v37 = *(_QWORD*)(v1 + 464);
    *(_QWORD*)(v1 + 464) = 0;
    if (v37 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
    }
    v38 = *(_DWORD*)(v1 + 13316);
    v51[1] = 0x100000001LL;
    *(_DWORD*)v52 = 0;
    *(_DWORD*)&v52[7] = 0;
    *(_DWORD*)&v52[4] = 4;
    LODWORD(v51[0]) = *(_DWORD*)(v1 + 13312);
    HIDWORD(v51[0]) = v38;
    v52[8] = 1;
    v54 = *(_QWORD*)(v1 + 360);
    v55 = *(_QWORD*)(*(_QWORD*)(v1 + 552) + 16LL);
    *(struct PseudoSret*)(&v57) = GameRoutine_53c20(v51);
    v39 = v57;
    v40 = *(_QWORD*)(v1 + 464);
    v57 = nullptr;
    *(_QWORD*)(v1 + 464) = v39;
    if (v40 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
      v41 = v57;
      v57 = nullptr;
      if (v41 != nullptr) {
        (*(void (**)(_QWORD*))(*v41 + 8LL))(v41);
      }
    }
    (*(void (**)(_QWORD, const char*, __int64))(**(_QWORD**)(v1 + 464) + 24LL))(
        *(_QWORD*)(v1 + 464), "LayerDebug", 10);
  }
  else if (v50 == v49) {
    return result;
  }
  v42 = *(_QWORD*)(v1 + 456);
  *(_QWORD*)(v1 + 456) = 0;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  v43 = 0;
  v51[1] = 0x100000001LL;
  *(_QWORD*)v52 = 0;
  v44 = *(unsigned int*)(v1 + 13240);
  *(_DWORD*)&v52[7] = 0;
  if ((unsigned int)v44 <= 6) {
    v43 = GameData_1b36694[v44];
  }
  *(_DWORD*)&v52[4] = v43;
  v45 = *(_DWORD*)(v1 + 13316);
  LODWORD(v51[0]) = *(_DWORD*)(v1 + 13312);
  HIDWORD(v51[0]) = v45;
  v52[8] = 1;
  v54 = *(_QWORD*)(v1 + 360);
  v55 = *(_QWORD*)(*(_QWORD*)(v1 + 552) + 16LL);
  *(struct PseudoSret*)(&v57) = GameRoutine_53c20(v51);
  v46 = v57;
  v47 = *(_QWORD*)(v1 + 456);
  v57 = nullptr;
  *(_QWORD*)(v1 + 456) = v46;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
    v48 = v57;
    v57 = nullptr;
    if (v48 != nullptr) {
      (*(void (**)(_QWORD*))(*v48 + 8LL))(v48);
    }
  }
  return (_DWORD*)(*(__int64 (**)(_QWORD, const char*, __int64))(
      **(_QWORD**)(v1 + 456) + 24LL))(*(_QWORD*)(v1 + 456), "Layer2D", 7);
}

__int64 GameHr_650100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      v14 = v13;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 24LL))(v4, v13);
    }
    else {
      v14 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    }
  }
  else {
    v14 = nullptr;
  }
  GameRoutine_64ac70(v13, a1);
  if (v14 == v13) {
    v6 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v14 + v6))((__int64)v14);
LABEL_11:
  v7 = *(_QWORD*)(a3 + 32);
  if (v7 != 0) {
    if (v7 == a3) {
      v14 = v13;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 24LL))(v7, v13);
    }
    else {
      v14 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v14 = nullptr;
  }
  GameRoutine_64adb0(v13, a1 + 48);
  if (v14 == v13) {
    v8 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_21;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v14 + v8))((__int64)v14);
LABEL_21:
  v14 = v13;
  v13[0] = GameData_1f8ef70;
  v13[1] = GameData_212bf08;
  GameRoutine_64aef0(v13, a1 + 96);
  if (v14 == v13) {
    v9 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_26;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v14 + v9))((__int64)v14);
LABEL_26:
  v10 = *(_QWORD*)(a1 + 32);
  v13[0] = 49152;
  v15 = 4096;
  if (v10 == 0) {
    GameRoutine_60a310(0);
  }
  v11 = (*(__int64 (**)(__int64, _QWORD*, __int64*))(*(_QWORD*)v10 + 48LL))(
      v10, v13, &v15);
  *(_QWORD*)(a1 + 904) = v11;
  GameRoutine_1a0b8f0(v11);
  GameRoutine_1a0b900(&GameData_1c22b58);
  return GameRoutine_1a0b910(&GameData_1c22b60);
}

__int64 GameHr_6604e0(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
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
  int v47;
  unsigned int v48;
  unsigned int v49;

  result = GameRoutine_65d2d0(a2, &v49, &v48, &v47);
  if ((result & 1) == 0) {
    return result;
  }
  v5 = v49;
  if (v49 == 0) {
    return result;
  }
  v6 = v47;
  if ((v47 & 3) != 1) {
    v17 = *(unsigned int*)(a2 + 20);
    if ((int)v17 < 1) {
      return result;
    }
    v18 = *(_QWORD*)(a2 + 8);
    v19 = *(_QWORD*)(a1 + 8);
    if (v19 == v18) {
      goto LABEL_33;
    }
    if (*(_DWORD*)(a1 + 16) >= (int)v17) {
    LABEL_32:
      result = GameRoutine_1a0b950(v19, v18, v17);
    LABEL_33:
      *(_DWORD*)(a1 + 20) = v17;
      return result;
    }
    *(_QWORD*)(a1 + 8) = 0;
    if (v19 != 0) {
      v20 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v20 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v20, v19);
      v21 = *(_QWORD*)(a1 + 8);
    }
    else {
      v21 = 0;
    }
    v26 = GameData_2265ee0;
    *(_QWORD*)(a1 + 16) = 0;
    v27 = GameRoutine_651b90(v26, v17, 16, 0);
    GameRoutine_1a0ba50(v27, 0, v17, v28, v29, v30);
    *(_QWORD*)(a1 + 8) = v27;
    if (v21 != 0) {
      v34 = 128;
      if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
        v34 = 56;
      }
      GameRoutine_1a0a4e0(GameData_2265ee0 + v34, v21);
      v27 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 16) = v17;
      if (v27 == 0) {
        v19 = 0;
      LABEL_31:
        *(_DWORD*)(a1 + 20) = 0;
        goto LABEL_32;
      }
    }
    else {
      *(_DWORD*)(a1 + 16) = v17;
    }
    if ((unsigned int)v17 >= 0x20) {
      v35 = 32;
    }
    else {
      v35 = (unsigned int)v17;
    }
    GameRoutine_1a0ba50(v27, 0, v35, v31, v32, v33);
    v19 = *(_QWORD*)(a1 + 8);
    goto LABEL_31;
  }
  v7 = *(int*)(a2 + 16);
  v8 = GameData_212bf68;
  v9 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v7, 16, 0);
  GameRoutine_1a0ba50(v9, 0, v7, v10, v11, v12);
  v14 = GameRoutine_61c30(v9, v7, *(_QWORD*)(a2 + 8) + 32LL, v5, 1, v13);
  if (v14 < v5) {
    v15 = v14;
    GameRoutine_1a0b950(*(_QWORD*)(a1 + 8) + 32LL, v9, v14);
    GameRoutine_65cf40(a1, v15, v48, v6 | 2u);
    LODWORD(v16) = v15 + 32;
  LABEL_48:
    *(_DWORD*)(a1 + 20) = v16;
    goto LABEL_49;
  }
  v16 = *(unsigned int*)(a2 + 20);
  if ((int)v16 >= 1) {
    v22 = *(_QWORD*)(a2 + 8);
    v23 = *(_QWORD*)(a1 + 8);
    if (v23 == v22) {
      goto LABEL_48;
    }
    if (*(_DWORD*)(a1 + 16) >= (int)v16) {
    LABEL_47:
      GameRoutine_1a0b950(v23, v22, v16);
      goto LABEL_48;
    }
    *(_QWORD*)(a1 + 8) = 0;
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v24 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v8 + v24, v23);
      v25 = *(_QWORD*)(a1 + 8);
    }
    else {
      v25 = 0;
    }
    v36 = *(_QWORD*)v8;
    *(_QWORD*)(a1 + 16) = 0;
    v37 = GameRoutine_651b90(v36, v16, 16, 0);
    GameRoutine_1a0ba50(v37, 0, v16, v38, v39, v40);
    *(_QWORD*)(a1 + 8) = v37;
    if (v25 != 0) {
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v44 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v8 + v44, v25);
      v37 = *(_QWORD*)(a1 + 8);
      *(_DWORD*)(a1 + 16) = v16;
      if (v37 == 0) {
        v23 = 0;
      LABEL_46:
        *(_DWORD*)(a1 + 20) = 0;
        goto LABEL_47;
      }
    }
    else {
      *(_DWORD*)(a1 + 16) = v16;
    }
    if ((unsigned int)v16 >= 0x20) {
      v45 = 32;
    }
    else {
      v45 = (unsigned int)v16;
    }
    GameRoutine_1a0ba50(v37, 0, v45, v41, v42, v43);
    v23 = *(_QWORD*)(a1 + 8);
    goto LABEL_46;
  }
LABEL_49:
  v46 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v46 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v8 + v46, v9);
}

__int64 GameHr_6640c0(__int64 result, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;

  if (result == 0) {
    return result;
  }
  v3 = result;
  result = GameRoutine_9bd480();
  if (result == 0) {
    return result;
  }
  v4 = result;
  v9[0] = GameData_1f8fef0;
  v10 = v9;
  GameRoutine_9bce00(result, v9);
  if (v10 == v9) {
    v5 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_8;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v10 + v5))((__int64)v10);
LABEL_8:
  v9[0] = GameData_1f8ff70;
  v10 = v9;
  GameRoutine_9bd140(v4, v9);
  if (v10 == v9) {
    v6 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_13;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v10 + v6))((__int64)v10);
LABEL_13:
  v9[0] = GameData_1f8fff0;
  v9[1] = v3;
  v10 = v9;
  GameRoutine_9bce00(v4, v9);
  if (v10 == v9) {
    v7 = 32;
    goto LABEL_17;
  }
  if (v10 != nullptr) {
    v7 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v10 + v7))((__int64)v10);
  }
  LODWORD(v9[1]) = a2;
  v9[0] = GameData_1f90070;
  v10 = v9;
  GameRoutine_9bce00(v4, v9);
  result = (__int64)v10;
  if (v10 == v9) {
    v8 = 32;
  }
  else {
    if (v10 == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (*(__int64 (**)(__int64))(*v10 + v8))((__int64)v10);
}

__int64 GameHr_664ce0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)(_QWORD);
  __int64 v13;
  _QWORD* v14;
  int v15;
  unsigned __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 i;
  __int64 v21;
  unsigned __int64 v22;
  __int64 j;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  unsigned int v32;
  char v33;
  char v34;
  int v35;
  __int64 v36;

  result = GameData_21caab0;
  if (GameData_21caab0 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(GameData_21caab0 + 24);
  if (v3 == 0) {
    return result;
  }
  if ((unsigned int)*(unsigned __int8*)(v3 + 33) - 63 > 1) {
    if (GameData_21eea58 != 0 && *(_BYTE*)GameData_21eea58 == 7 &&
        (v15 = *(_DWORD*)(GameData_21caab0 + 2708) + 1,
         *(_DWORD*)(GameData_21caab0 + 2708) = v15,
         *(_DWORD*)(result + 2704) = v15, result = GameData_21caab0,
         GameData_21caab0 == 0)) {
      v17 = 19;
      v18 = GameData_21eea58;
      if (GameData_21eea58 == 0) {
        goto LABEL_26;
      }
    }
    else {
      v16 = *(unsigned __int8*)(result + 56);
      if (v16 > 0x10 || ((0x1F9F5u >> v16) & 1) == 0) {
        goto LABEL_66;
      }
      v17 = GameData_1b373e4[v16];
      v18 = GameData_21eea58;
      if (GameData_21eea58 == 0) {
      LABEL_26:
        v19 = GameRoutine_682780(9);
        if (v19 == 0) {
          goto LABEL_57;
        }
        for (i = v19; i != 0; i = *(_QWORD*)(i + 624)) {
          v21 = i;
        }
      LABEL_48:
        if (*(_BYTE*)(v21 + 441) == 3) {
          v24 = *(_QWORD*)(v19 + 624);
          if (v24 == 0) {
            v24 = v19;
          }
          v36 = v24;
          v35 = 241;
          v25 = GameRoutine_6ead60(&v36, &v35);
          if (v25 != 0) {
            v26 = (__int64*)(v25 + 2104);
          LABEL_58:
            GameRoutine_97b680(v26);
            if (GameData_21eea58 != 0) {
              v28 = *(_QWORD*)(GameData_21eea58 + 80);
              if (v28 != 0) {
                v36 = a1;
                (*(void (**)(__int64, __int64*))(*(_QWORD*)v28 + 48LL))(v28,
                                                                        &v36);
                v29 = GameData_21eea58;
                v30 = *(_QWORD**)(GameData_21eea58 + 80);
                *(_QWORD*)(GameData_21eea58 + 80) = 0;
                if (v30 == (_QWORD*)(v29 + 48)) {
                  v31 = 32;
                }
                else {
                  if (v30 == nullptr) {
                    goto LABEL_65;
                  }
                  v31 = 40;
                }
                (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
              }
            }
          LABEL_65:
            result = GameData_21caab0;
            *(_DWORD*)(a1 + 152) = v17;
            if (result == 0) {
              return result;
            }
            goto LABEL_66;
          }
          v27 = *(_QWORD*)(GameData_21caab0 + 176);
          if (*(_BYTE*)(v27 + 144) != 0) {
            v26 = (__int64*)(v27 + 112);
            goto LABEL_58;
          }
        }
      LABEL_57:
        v26 = &GameData_21f49b8;
        goto LABEL_58;
      }
    }
    *(_BYTE*)(v18 + 32) = 1;
    goto LABEL_26;
  }
  v4 = *(_QWORD**)(v3 + 24);
  v6 = (__int64*)v4[38];
  v5 = (__int64*)v4[39];
  if (v5 == v6) {
    goto LABEL_32;
  }
  v7 = 0;
  do {
    v8 = *v6;
    v9 = v6[1];
    if (v9 == *v6) {
    LABEL_6:
      ++v7;
    }
    else {
      while (1) {
        if (*(_QWORD*)v8 != 0) {
          v10 = GameData_21caab0;
          if (GameData_21caab0 != 0) {
            v11 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v8);
            if (v11 != 0) {
              v12 = *(__int64 (**)(_QWORD))(v11 + 72);
              v13 = *(_QWORD*)(v11 + 80);
              v14 = (_QWORD*)(v11 + (v13 >> 1));
              if ((v13 & 1) != 0) {
                v12 = *(__int64 (**)(_QWORD))((char*)v12 + *v14);
              }
              LOBYTE(result) = v12(v14);
            }
            else {
              LOBYTE(result) = 1;
            }
          }
          if (*(_BYTE*)(v8 + 16) != ((v10 == 0) | result & 1)) {
            break;
          }
        }
        v8 += 24;
        if (v8 == v9) {
          goto LABEL_6;
        }
      }
    }
    v6 += 6;
  } while (v6 != v5);
  if (v7 != 0) {
    v4 = *(_QWORD**)(v3 + 24);
    result = GameData_21caab0;
  LABEL_32:
    if (v4[3] != 0) {
      if (result != 0 && (GameRoutine_715780(), GameData_21caab0 != 0)) {
        *(_BYTE*)(GameData_21caab0 + 312) = 0;
        v17 = 16;
      }
      else {
        v17 = 16;
      }
      goto LABEL_65;
    }
    goto LABEL_38;
  }
  result = GameData_21caab0;
LABEL_38:
  if (result == 0) {
    v17 = 19;
    goto LABEL_43;
  }
  v22 = *(unsigned __int8*)(result + 56);
  if (v22 <= 0x10 && ((0x1F9F5u >> v22) & 1) != 0) {
    v17 = GameData_1b373e4[v22];
  LABEL_43:
    if (GameData_21eea58 != 0) {
      *(_BYTE*)(GameData_21eea58 + 32) = 1;
    }
    v19 = GameRoutine_682780(9);
    if (v19 == 0) {
      goto LABEL_57;
    }
    for (j = v19; j != 0; j = *(_QWORD*)(j + 624)) {
      v21 = j;
    }
    goto LABEL_48;
  }
LABEL_66:
  v32 = *(unsigned __int8*)(result + 14);
  if (v32 >= *(unsigned __int8*)(result + 13)) {
    v33 = *(_BYTE*)(result + 13);
  }
  else {
    v33 = *(_BYTE*)(result + 14);
  }
  if (v32 == 3) {
    v34 = *(_BYTE*)(result + 13);
  }
  else {
    v34 = v33;
  }
  *(_BYTE*)(result + 14) = v34;
  return result;
}

__int64 GameHr_667400(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int16 v11;
  __int16 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int16 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int16 v23;
  int v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;

  if (GameData_21eea58 != 0) {
    *(_BYTE*)(GameData_21eea58 + 32) = 0;
  }
  result = GameData_21caab0;
  if (GameData_21caab0 != 0) {
    v3 = *(_DWORD*)(GameData_21caab0 + 92);
    if ((v3 & 8) != 0) {
      v9 = 38;
    }
    else {
      v4 = *(unsigned __int8*)(GameData_21caab0 + 57);
      if (*(_BYTE*)(GameData_21caab0 + 57) != 0 &&
          (*(_QWORD*)(GameData_21caab0 + 16) = 0, *(_BYTE*)(result + 57) = 0,
           v3 &= 0xFFFFFC77, *(_DWORD*)(result + 92) = v3,
           *(_DWORD*)(a1 + 152) == 0)) {
        if (v4 == 4) {
          goto LABEL_50;
        }
        if (v4 == 6) {
          v9 = 6;
          goto LABEL_20;
        }
        if (v4 != 5) {
        LABEL_50:
          v9 = 4;
        }
        else {
          v9 = 5;
        }
      }
      else {
        if ((v3 & 4) == 0) {
          goto LABEL_8;
        }
        if (GameData_21ee260 != 0) {
          v10 = GameData_21ee260 + 8;
        }
        else {
          v10 = GameData_212cf60;
        }
        v23 = *(_WORD*)v10;
        v24 = *(_DWORD*)(v10 + 2);
        v25 = *(_WORD*)(v10 + 6);
        v11 = *(_WORD*)(v10 + 8);
        v12 = *(_WORD*)(v10 + 10);
        v26 = v11;
        v27 = v12;
        result = GameRoutine_7160c0();
        if ((result & 1) == 0) {
          return result;
        }
        v13 = GameData_21caab0;
        if (GameData_21caab0 != 0) {
          v14 = *(_DWORD*)(GameData_21caab0 + 92);
          v15 = *(_QWORD*)(GameData_21caab0 + 24);
          *(_QWORD*)(GameData_21caab0 + 16) = 0;
          *(_DWORD*)(v13 + 92) = v14 & 0xFFFFF863;
        }
        else {
          v15 = 0;
        }
        result = GameRoutine_8b6940(a1, &v23, v15);
        v9 = 16;
      }
    }
  LABEL_20:
    *(_DWORD*)(a1 + 152) = v9;
    return result;
  }
LABEL_8:
  v5 = *(_DWORD*)(a1 + 152);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 192);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
      v5 = *(_DWORD*)(a1 + 152);
    }
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      while (1) {
        if (*(_BYTE*)v7 == 2) {
          if (*(_DWORD*)(v7 + 32) == v5) {
            v16 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v7;
            *(_WORD*)(a1 + 136) = v16 & 0xFF7F;
            v8 = *(_DWORD*)(a1 + 156);
            if (v8 == 0) {
              goto LABEL_45;
            }
            goto LABEL_29;
          }
        }
        else if (*(_BYTE*)v7 == 0) {
          break;
        }
        v7 += 64;
      }
    }
    v8 = *(_DWORD*)(a1 + 156);
    if (v8 != 0) {
    LABEL_29:
      v17 = *(_QWORD*)(a1 + 96);
      v18 = *(_QWORD*)(a1 + 104);
      v19 = ((v18 - v17) << 6) - 1;
      if (v18 == v17) {
        v19 = 0;
      }
      v20 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
      if (v19 == v20) {
        GameRoutine_658d60(a1 + 88);
        v17 = *(_QWORD*)(a1 + 96);
        v20 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
      }
      *(_QWORD*)(*(_QWORD*)(v17 + 8 * (v20 >> 9)) + 8 * (v20 & 0x1FF)) =
          *(_QWORD*)(a1 + 16);
      ++*(_QWORD*)(a1 + 128);
      v21 = *(_QWORD*)(a1 + 8);
      if (v21 != 0) {
        while (1) {
          if (*(_BYTE*)v21 == 2) {
            if (*(_DWORD*)(v21 + 32) == v8) {
              *(_QWORD*)(a1 + 16) = v21;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v21 == 0) {
            break;
          }
          v21 += 64;
        }
      }
    }
  LABEL_45:
    result = *(_QWORD*)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (result == a1 + 160) {
      v22 = 32;
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + v22))(
          (__int64)result);
    }
    if (result != 0) {
      v22 = 40;
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + v22))(
          (__int64)result);
    }
  }
  return result;
}

__int64 GameHr_667ea0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  if (a1 == 0) {
    return 0;
  }
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1504, 16, 0);
  GameRoutine_1647b80(v4, a2);
  GameRoutine_657850(v4, GameData_212c730, &GameData_1a89034, 1, a1);
  v8[0] = GameData_1f90100;
  v9 = v8;
  v11 = v10;
  v10[0] = GameData_1f90100;
  GameRoutine_654050(v10, v4 + 1200);
  if (v11 == v10) {
    v5 = 32;
    goto LABEL_7;
  }
  if (v11 != nullptr) {
    v5 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v11 + v5))((__int64)v11);
  }
  if (v9 == v8) {
    v6 = 32;
    goto LABEL_12;
  }
  if (v9 != nullptr) {
    v6 = 40;
  LABEL_12:
    (*(void (**)(__int64))(*v9 + v6))((__int64)v9);
  }
  return v4;
}

__int64 GameHr_682cd0(__int64 a1, const char* a2, __int64 a3)
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
  _BYTE v18[32];
  _BYTE* v19;

  GameRoutine_60a020(a1 + 16, a2);
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 32);
  }
  else {
    v6 = a1 + 17;
  }
  *(_QWORD*)a1 = GameRoutine_7a86e0(v6);
  *(_QWORD*)(a1 + 8) = v6;
  v7 = GameRoutine_7a7dc0("%s_%d", a2, 0);
  GameRoutine_60a020(a1 + 56, v7);
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 72);
  }
  else {
    v8 = a1 + 57;
  }
  *(_QWORD*)(a1 + 40) = GameRoutine_7a86e0(v8);
  *(_QWORD*)(a1 + 48) = v8;
  v9 = GameRoutine_7a7dc0("%s_%d", a2, 1);
  GameRoutine_60a020(a1 + 96, v9);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 112);
  }
  else {
    v10 = a1 + 97;
  }
  *(_QWORD*)(a1 + 80) = GameRoutine_7a86e0(v10);
  *(_QWORD*)(a1 + 88) = v10;
  v11 = GameRoutine_7a7dc0("%s_%d", a2, 2);
  GameRoutine_60a020(a1 + 136, v11);
  if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 152);
  }
  else {
    v12 = a1 + 137;
  }
  *(_QWORD*)(a1 + 120) = GameRoutine_7a86e0(v12);
  *(_QWORD*)(a1 + 128) = v12;
  v13 = GameRoutine_7a7dc0("%s_%d", a2, 3);
  GameRoutine_60a020(a1 + 176, v13);
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 192);
  }
  else {
    v14 = a1 + 177;
  }
  *(_QWORD*)(a1 + 160) = GameRoutine_7a86e0(v14);
  *(_QWORD*)(a1 + 168) = v14;
  v15 = *(_QWORD*)(a3 + 32);
  if (v15 != 0) {
    if (v15 == a3) {
      v19 = v18;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v15 + 24LL))(v15, v18);
    }
    else {
      v19 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    }
  }
  else {
    v19 = nullptr;
  }
  GameRoutine_654050(v18, a1 + 208);
  if (v19 == v18) {
    v16 = 32;
    goto LABEL_25;
  }
  if (v19 != nullptr) {
    v16 = 40;
  LABEL_25:
    (*(void (**)(__int64))(*(_QWORD*)v19 + v16))((__int64)v19);
  }
  return a1;
}

__int64 GameHr_6886c0(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  char v61;
  char v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned int v83;
  unsigned int v84;
  __int64* v85;
  bool v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  bool v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(a2 - 1);
            v78 = *(unsigned __int8*)(v76 + 48);
            v79 = *(unsigned __int8*)(v77 + 48);
            if (v78 < *(unsigned __int8*)(*v8 + 48)) {
              if (v79 >= v78) {
                *v8 = v76;
                v8[1] = v75;
                v127 = *(a2 - 1);
                if (*(unsigned __int8*)(v127 + 48) <
                    (unsigned int)*(unsigned __int8*)(v75 + 48)) {
                  v8[1] = v127;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v77;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 >= v78) {
              return result;
            }
            v8[1] = v77;
            *(a2 - 1) = v76;
            v124 = v8[1];
          LABEL_182:
            v130 = *v8;
            if (*(unsigned __int8*)(v124 + 48) <
                (unsigned int)*(unsigned __int8*)(*v8 + 48)) {
              *v8 = v124;
              v8[1] = v130;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return GameRoutine_689100(v8, v8 + 1, v8 + 2, v8 + 3, a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = v8[2];
          v83 = *(unsigned __int8*)(v80 + 48);
          v84 = *(unsigned __int8*)(v82 + 48);
          if (v83 >= *(unsigned __int8*)(*v8 + 48)) {
            if (v84 < v83) {
              v8[1] = v82;
              v8[2] = v80;
              if (*(unsigned __int8*)(v82 + 48) <
                  (unsigned int)*(unsigned __int8*)(v81 + 48)) {
                *v8 = v82;
                v8[1] = v81;
              }
              goto LABEL_179;
            }
          }
          else {
            if (v84 < v83) {
              *v8 = v82;
            LABEL_177:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_179;
            }
            *v8 = v80;
            v8[1] = v81;
            if (*(unsigned __int8*)(v82 + 48) <
                (unsigned int)*(unsigned __int8*)(v81 + 48)) {
              v8[1] = v82;
              goto LABEL_177;
            }
          }
          v80 = v82;
        LABEL_179:
          v128 = *(a2 - 1);
          if (*(unsigned __int8*)(v128 + 48) >=
              (unsigned int)*(unsigned __int8*)(v80 + 48)) {
            return result;
          }
          v8[2] = v128;
          *(a2 - 1) = v80;
          v129 = v8[1];
          v124 = v8[2];
          if (*(unsigned __int8*)(v124 + 48) >=
              (unsigned int)*(unsigned __int8*)(v129 + 48)) {
            return result;
          }
          v8[1] = v124;
          v8[2] = v129;
          goto LABEL_182;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if (*(unsigned __int8*)(v73 + 48) <
              (unsigned int)*(unsigned __int8*)(*v8 + 48)) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 8;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if (*(unsigned __int8*)(v91 + 48) <
                    (unsigned int)*(unsigned __int8*)(v92 + 48)) {
                  v93 = v88;
                  do {
                    v94 = v93 - 8;
                    *(__int64*)((char*)v8 + v93) = v92;
                    if (v93 == 8) {
                      v90 = v8;
                      goto LABEL_124;
                    }
                    v95 = (char*)v8 + v93;
                    v93 -= 8;
                    v92 = *((_QWORD*)v95 - 2);
                  } while (*(unsigned __int8*)(v91 + 48) <
                           (unsigned int)*(unsigned __int8*)(v92 + 48));
                  v90 = (__int64*)((char*)v8 + v94);
                LABEL_124:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v126 = *v7;
              v125 = v7[1];
              v7 = v85;
              if (*(unsigned __int8*)(v125 + 48) <
                  (unsigned int)*(unsigned __int8*)(v126 + 48)) {
                do {
                  *v85 = v126;
                  v126 = *(v85 - 2);
                  --v85;
                } while (*(unsigned __int8*)(v125 + 48) <
                         (unsigned int)*(unsigned __int8*)(v126 + 48));
                *v85 = v125;
              }
              v85 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v96 = (unsigned __int64)(v9 - 2) >> 1;
            v97 = v96;
            do {
              if (v96 >= v97) {
                v99 = (2 * (v97 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v100 = &v8[v99];
                v101 = *v100;
                if ((__int64)(2 * v97 + 2) < v9 &&
                    *(unsigned __int8*)(v101 + 48) <
                        (unsigned int)*(unsigned __int8*)(v100[1] + 48)) {
                  v101 = v100[1];
                  ++v100;
                  v99 = 2 * v97 + 2;
                }
                v102 = &v8[v97];
                v103 = *v102;
                if (*(unsigned __int8*)(v101 + 48) >=
                    (unsigned int)*(unsigned __int8*)(*v102 + 48)) {
                  do {
                    v104 = v100;
                    *v102 = v101;
                    if ((__int64)v96 < v99) {
                      break;
                    }
                    v105 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v106 = 2 * v99 + 2;
                    v100 = &v8[v105];
                    v101 = *v100;
                    if (v106 < v9 &&
                        *(unsigned __int8*)(v101 + 48) <
                            (unsigned int)*(unsigned __int8*)(v100[1] + 48)) {
                      v101 = v100[1];
                      ++v100;
                      v105 = v106;
                    }
                    result = *(unsigned __int8*)(v103 + 48);
                    v102 = v104;
                    v99 = v105;
                  } while (*(unsigned __int8*)(v101 + 48) >=
                           (unsigned int)result);
                  *v104 = v103;
                }
              }
              v98 = (__int64)v97-- <= 0;
            } while (!v98);
            do {
              v107 = *v8;
              v108 = 0;
              v109 = v8;
              do {
                v115 = &v109[v108];
                v114 = v115 + 1;
                v113 = v115[1];
                v116 = (2 * v108) | 1;
                v108 = 2 * v108 + 2;
                if (v108 < v9) {
                  v112 = v115[2];
                  v110 = v115 + 2;
                  v111 = v112;
                  result = *(unsigned __int8*)(v112 + 48);
                  if (*(unsigned __int8*)(v113 + 48) >= (unsigned int)result) {
                    v108 = v116;
                  }
                  else {
                    v113 = v111;
                    v114 = v110;
                  }
                }
                else {
                  v108 = v116;
                }
                *v109 = v113;
                v109 = v114;
              } while (v108 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v114 == --a2) {
                *v114 = v107;
              }
              else {
                *v114 = *a2;
                *a2 = v107;
                v117 = ((char*)v114 - (char*)v8 + 8) >> 3;
                v98 = v117 < 2;
                v118 = v117 - 2;
                if (!v98) {
                  v119 = v118 >> 1;
                  v120 = *v114;
                  v121 = &v8[v119];
                  v122 = *v121;
                  if (*(unsigned __int8*)(*v121 + 48) <
                      (unsigned int)*(unsigned __int8*)(*v114 + 48)) {
                    do {
                      v123 = v121;
                      *v114 = v122;
                      if (v119 == 0) {
                        break;
                      }
                      v119 = (v119 - 1) >> 1;
                      v114 = v121;
                      v121 = &v8[v119];
                      v122 = *v121;
                    } while (*(unsigned __int8*)(*v121 + 48) <
                             (unsigned int)*(unsigned __int8*)(v120 + 48));
                    *v123 = v120;
                  }
                }
              }
              v98 = v9-- <= 2;
            } while (!v98);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(unsigned __int8*)(v10 + 48);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(unsigned __int8*)(*v11 + 48);
          if (v15 >= *(unsigned __int8*)(*v8 + 48)) {
            if (v12 < v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if (*(unsigned __int8*)(*v11 + 48) <
                  (unsigned int)*(unsigned __int8*)(*v8 + 48)) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 >= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if (*(unsigned __int8*)(v21 + 48) >=
                  (unsigned int)*(unsigned __int8*)(v14 + 48)) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(a2 - 2);
          v25 = *(unsigned __int8*)(v22 + 48);
          v26 = *(unsigned __int8*)(v24 + 48);
          if (v25 >= *(unsigned __int8*)(v23 + 48)) {
            if (v26 < v25) {
              *(v11 - 1) = v24;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if (*(unsigned __int8*)(v27 + 48) <
                  (unsigned int)*(unsigned __int8*)(v28 + 48)) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 >= v25) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if (*(unsigned __int8*)(v30 + 48) >=
                  (unsigned int)*(unsigned __int8*)(v23 + 48)) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v24;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(a2 - 3);
          v34 = *(unsigned __int8*)(v31 + 48);
          v35 = *(unsigned __int8*)(v33 + 48);
          if (v34 >= *(unsigned __int8*)(v32 + 48)) {
            if (v35 < v34) {
              v11[1] = v33;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if (*(unsigned __int8*)(v36 + 48) <
                  (unsigned int)*(unsigned __int8*)(v37 + 48)) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 >= v34) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if (*(unsigned __int8*)(v38 + 48) >=
                  (unsigned int)*(unsigned __int8*)(v32 + 48)) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v33;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = v11[1];
          v42 = *(unsigned __int8*)(*v11 + 48);
          v43 = *(unsigned __int8*)(v41 + 48);
          if (v42 >= *(unsigned __int8*)(v39 + 48)) {
            if (v43 >= v42) {
              goto LABEL_55;
            }
            *v11 = v41;
            v11[1] = v40;
            if (*(unsigned __int8*)(v41 + 48) <
                (unsigned int)*(unsigned __int8*)(v39 + 48)) {
              *(v11 - 1) = v41;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 < v42) {
              *(v11 - 1) = v41;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if (*(unsigned __int8*)(v41 + 48) >=
                (unsigned int)*(unsigned __int8*)(v39 + 48)) {
              goto LABEL_59;
            }
            *v11 = v41;
            v11[1] = v39;
          }
          v39 = v41;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = *(unsigned __int8*)(*v8 + 48);
        if (v18 >= *(unsigned __int8*)(*v11 + 48)) {
          if (v12 < v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if (*(unsigned __int8*)(*v8 + 48) <
                (unsigned int)*(unsigned __int8*)(*v11 + 48)) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 >= v18) {
            *v11 = v16;
            *v8 = v17;
            v29 = *(a2 - 1);
            if (*(unsigned __int8*)(v29 + 48) >=
                (unsigned int)*(unsigned __int8*)(v17 + 48)) {
              goto LABEL_60;
            }
            *v8 = v29;
          }
          else {
            *v11 = v10;
          }
          *(a2 - 1) = v17;
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v46 = *(unsigned __int8*)(v45 + 48);
        if (*(unsigned __int8*)(*(v8 - 1) + 48) < v46) {
          goto LABEL_63;
        }
        if (v46 >= *(unsigned __int8*)(*(a2 - 1) + 48)) {
          v64 = v8 + 1;
          do {
            v8 = v64;
            if (v64 >= a2) {
              break;
            }
            ++v64;
          } while (v46 >= *(unsigned __int8*)(*v8 + 48));
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 >= *(unsigned __int8*)(v63 + 48));
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 < *(unsigned __int8*)(v66 + 48));
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *(unsigned __int8*)(v45 + 48);
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 >= *(unsigned __int8*)(v70 + 48));
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 < *(unsigned __int8*)(v71 + 48));
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v46 = *(unsigned __int8*)(v45 + 48);
    LABEL_63:
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while (*(unsigned __int8*)(v49 + 48) < v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while (*(unsigned __int8*)(v53 + 48) >= v46);
      }
      else {
        do {
          v52 = *--v51;
        } while (*(unsigned __int8*)(v52 + 48) >= v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v60;
        goto LABEL_81;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *(unsigned __int8*)(v45 + 48);
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while (*(unsigned __int8*)(v58 + 48) < v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while (*(unsigned __int8*)(v59 + 48) >= v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_84;
      }
      v61 = GameRoutine_689280(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = GameRoutine_689280(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v62 & 1) == 0) {
      LABEL_84:
        result = GameHr_6886c0(v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if ((v62 & 1) == 0) {
      continue;
    }
    return result;
  }
}

bool GameHr_6b3be0(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  unsigned int v15;
  __int64 v16;
  __int64** v17;
  __int64 (**v18)();
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  unsigned int* v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
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
  _QWORD* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int16 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int16 v125;
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
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64* v146;
  __int64* v147;
  __int64 v148;
  __int64 v149;
  char* v150;
  char* v151;
  int v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64* v157;
  __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned int v162;
  bool v163;
  int v164;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  __int64 v171;
  unsigned int v172;
  int v173;
  __int64 v175;
  char* v176;
  unsigned __int64 v177;
  __int64 v178;
  __int64* v180;
  __int64* v181;
  __int64 v182;
  __int64 v183;
  char* v184;
  char* v185;
  int v186;
  unsigned __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  _QWORD v193[7];
  _QWORD v194[2];
  char* v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64* v200;
  __int64 v201;
  __int64 (**v202)();
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int16 v207;
  int v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  _QWORD v214[2];
  __int64 v215;
  __int64 v216;
  char* v217;
  __int64* v218;

  GameRoutine_6b38a0();
  if (*GameData_212ce40 == 0) {
    return false;
  }
  if (a1 == 0) {
    v15 = 0;
    LOWORD(v211) = 0;
    goto LABEL_24;
  }
  v5 = GameRoutine_1a09c70(a1);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v5, v6, v7, v8, v9, v10, v11, v12);
  }
  v13 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v5 | 7) + 1;
    }
    v14 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v16, 16, 0);
    v194[1] = v13;
    v195 = v14;
    v194[0] = v16 | 1;
    goto LABEL_12;
  }
  LOBYTE(v194[0]) = 2 * v5;
  v14 = (char*)v194 + 1;
  if (v5 != 0) {
  LABEL_12:
    GameRoutine_1a0b950(v14, a1, v13);
  }
  v14[v13] = 0;
  v17 = (__int64**)GameRoutine_1a0a680(v194, 0, "GameData/Terrains/", 18);
  v19 = v17[1];
  v18 = (__int64 (**)())v17[2];
  v200 = *v17;
  v201 = (__int64)v19;
  v202 = v18;
  v17[1] = nullptr;
  v17[2] = nullptr;
  *v17 = nullptr;
  v20 = (__int64*)GameRoutine_1a09ce0(&v200, ".txt", 4);
  v22 = v20[1];
  v21 = v20[2];
  v211 = *v20;
  v212 = v22;
  v213 = v21;
  v20[1] = 0;
  v20[2] = 0;
  *v20 = 0;
  if (((unsigned __int8)v200 & 1) != 0 && v202 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v23 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v23, v202);
  }
  if ((v194[0] & 1) != 0 && v195 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v24 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v24, v195);
  }
  v15 = (unsigned __int8)v211;
  v4 = v212;
LABEL_24:
  v25 = v15 & 1;
  v26 = v15 >> 1;
  if (v25 != 0) {
    v27 = v4;
  }
  else {
    v27 = v26;
  }
  if (v27 != 0) {
    v28 = *GameData_212c018[0];
    if (v25 != 0) {
      v29 = (__int64*)v213;
    }
    else {
      v29 = (__int64*)((char*)&v211 + 1);
    }
    v30 = GameRoutine_1a09c70(v29);
    v200 = v29;
    v201 = v30;
    LODWORD(v203) = 0;
    v202 = GameData_212c3c8;
    v31 = GameRoutine_6544c0(v28, (__int64)&v200);
    v32 = *(_QWORD*)(v31 + 592);
    v33 = v31;
    if (v32 == 0) {
    LABEL_263:
      GameRoutine_634d80(*(_QWORD*)(v33 + 8), v33);
      v25 = v211 & 1;
      goto LABEL_264;
    }
    v191 = v27;
    v192 = a2;
    v207 = 257;
    v34 = *(_QWORD*)(v31 + 576);
    v202 = nullptr;
    v203 = 0;
    v190 = v31;
    v209 = v32;
    v210 = v34;
    v205 = 0;
    v206 = 0;
    v208 = 0;
    v204 = -1;
    memset(&v193[4], 0, 24);
    v200 = GameData_212ce30 + 2;
    v201 = 0;
    v193[0] = 0x2000;
    v193[1] = 256;
    v193[2] = 2048;
    v193[3] = 16;
    GameRoutine_6b4ef0(v194, &v200, v193);
    if (*(_QWORD*)(*(_QWORD*)(v196 +
                              8 * ((unsigned __int64)(v199 + v198 - 1) >> 9)) +
                   8 * ((v199 + v198 - 1) & 0x1FF)) == 0) {
      goto LABEL_141;
    }
    strcpy((char*)&v215, "\nwidth");
    v218 = &GameData_21ca0c8;
    GameRoutine_6b81a0(v194, &v215);
    if ((v215 & 1) != 0 && v217 != nullptr) {
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v35 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v35, v217);
    }
    v218 = (__int64*)((char*)&GameData_21ca0c8 + 4);
    v215 = 0x7468676965680CLL;
    GameRoutine_6b81a0(v194, &v215);
    if ((v215 & 1) != 0 && v217 != nullptr) {
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v36 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36, v217);
    }
    v215 = 0x737265646E750CLL;
    v218 = &GameData_21ca0d0;
    GameRoutine_6b83e0(v194, &v215);
    if ((v215 & 1) != 0 && v217 != nullptr) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v37 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v37, v217);
    }
    v215 = 0x7372657070750CLL;
    v218 = &GameData_21ca0e8;
    v38 = (unsigned int*)GameRoutine_6b83e0(v194, &v215);
    if ((v215 & 1) != 0 && v217 != nullptr) {
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v42 = 56;
      }
      v38 = (unsigned int*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v42,
                                               v217);
    }
    v43 =
        *(_QWORD*)(*(_QWORD*)(v196 +
                              8 * ((unsigned __int64)(v199 + v198 - 1) >> 9)) +
                   8 * ((v199 + v198 - 1) & 0x1FF));
    if (v43 == 0) {
    LABEL_141:
      if (GameData_21ca0f0 - GameData_21ca0e8 == 24576 &&
          GameData_21ca0d8 - GameData_21ca0d0 == 24576) {
        v101 = 0;
        GameData_21ca120 = GameData_21ca118;
        GameData_21ca108 = GameData_21ca100;
        GameData_21ca138 = GameData_21ca130;
        v102 = (_QWORD*)GameData_212bf68;
        do {
          if ((*(_BYTE*)(GameData_21ca0e8 + v101) & 1) != 0) {
            v104 = *(_QWORD*)(GameData_21ca0e8 + v101 + 16);
          }
          else {
            v104 = GameData_21ca0e8 + v101 + 1;
          }
          v38 = (unsigned int*)GameRoutine_6b3720(v104);
          v105 = GameData_21ca120;
          if (GameData_21ca120 >= (unsigned __int64)GameData_21ca128) {
            v107 = GameData_21ca118;
            v108 = GameData_21ca120 - GameData_21ca118;
            v109 = (GameData_21ca120 - GameData_21ca118) >> 1;
            if (v109 <= -2) {
              goto LABEL_291;
            }
            if (GameData_21ca128 - GameData_21ca118 <=
                (unsigned __int64)(v109 + 1)) {
              v110 = v109 + 1;
            }
            else {
              v110 = GameData_21ca128 - GameData_21ca118;
            }
            if ((unsigned __int64)(GameData_21ca128 - GameData_21ca118) >=
                0x7FFFFFFFFFFFFFFELL) {
              v111 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else {
              v111 = v110;
            }
            if (v111 != 0) {
              if (v111 < 0) {
                goto LABEL_292;
              }
              v112 = (__int16)v38;
              v113 = GameRoutine_651b90(*v102, 2 * v111, 16, 0);
              LOWORD(v38) = v112;
            }
            else {
              v113 = 0;
            }
            v114 = v113 + 2 * v111;
            v115 = v113 + v108 - 2 * v109;
            *(_WORD*)(v113 + v108) = (_WORD)v38;
            v106 = v113 + v108 + 2;
            GameRoutine_1a0b950(v115, v107, v108);
            GameData_21ca118 = v115;
            GameData_21ca120 = v106;
            GameData_21ca128 = v114;
            if (v107 != 0) {
              v116 = 128;
              if (*(_QWORD*)(*v102 + 200LL) == 0) {
                v116 = 56;
              }
              GameRoutine_1a0a4e0(*v102 + v116, v107);
            }
          }
          else {
            *(_WORD*)GameData_21ca120 = (_WORD)v38;
            v106 = v105 + 2;
          }
          GameData_21ca120 = v106;
          if ((*(_BYTE*)(GameData_21ca0d0 + v101) & 1) != 0) {
            v117 = *(_QWORD*)(GameData_21ca0d0 + v101 + 16);
          }
          else {
            v117 = GameData_21ca0d0 + v101 + 1;
          }
          v38 = (unsigned int*)GameRoutine_6b3720(v117);
          v118 = GameData_21ca108;
          if (GameData_21ca108 >= (unsigned __int64)GameData_21ca110) {
            v120 = GameData_21ca100;
            v121 = GameData_21ca108 - GameData_21ca100;
            v122 = (GameData_21ca108 - GameData_21ca100) >> 1;
            if (v122 <= -2) {
              goto LABEL_291;
            }
            if (GameData_21ca110 - GameData_21ca100 <=
                (unsigned __int64)(v122 + 1)) {
              v123 = v122 + 1;
            }
            else {
              v123 = GameData_21ca110 - GameData_21ca100;
            }
            if ((unsigned __int64)(GameData_21ca110 - GameData_21ca100) >=
                0x7FFFFFFFFFFFFFFELL) {
              v124 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else {
              v124 = v123;
            }
            if (v124 != 0) {
              if (v124 < 0) {
                goto LABEL_292;
              }
              v125 = (__int16)v38;
              v126 = GameRoutine_651b90(*v102, 2 * v124, 16, 0);
              LOWORD(v38) = v125;
            }
            else {
              v126 = 0;
            }
            v127 = v126 + 2 * v124;
            v128 = v126 + v121 - 2 * v122;
            *(_WORD*)(v126 + v121) = (_WORD)v38;
            v119 = v126 + v121 + 2;
            v38 = (unsigned int*)GameRoutine_1a0b950(v128, v120, v121);
            GameData_21ca100 = v128;
            GameData_21ca108 = v119;
            GameData_21ca110 = v127;
            if (v120 != 0) {
              v129 = 128;
              if (*(_QWORD*)(*v102 + 200LL) == 0) {
                v129 = 56;
              }
              v38 = (unsigned int*)GameRoutine_1a0a4e0(*v102 + v129, v120);
            }
          }
          else {
            *(_WORD*)GameData_21ca108 = (_WORD)v38;
            v119 = v118 + 2;
          }
          GameData_21ca108 = v119;
          v130 = GameData_21ca138;
          if (GameData_21ca138 < (unsigned __int64)GameData_21ca140) {
            *(_WORD*)GameData_21ca138 = 0;
            v103 = v130 + 2;
          }
          else {
            v131 = GameData_21ca130;
            v132 = GameData_21ca138 - GameData_21ca130;
            v133 = (GameData_21ca138 - GameData_21ca130) >> 1;
            if (v133 <= -2) {
            LABEL_291:
              GameRoutine_6b5390(v38);
            }
            if (GameData_21ca140 - GameData_21ca130 <=
                (unsigned __int64)(v133 + 1)) {
              v134 = v133 + 1;
            }
            else {
              v134 = GameData_21ca140 - GameData_21ca130;
            }
            if ((unsigned __int64)(GameData_21ca140 - GameData_21ca130) >=
                0x7FFFFFFFFFFFFFFELL) {
              v135 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else {
              v135 = v134;
            }
            if (v135 != 0) {
              if (v135 < 0) {
                goto LABEL_292;
              }
              v136 = GameRoutine_651b90(*v102, 2 * v135, 16, 0);
            }
            else {
              v136 = 0;
            }
            v137 = v136 + 2 * v135;
            v138 = v136 + v132 - 2 * v133;
            *(_WORD*)(v136 + v132) = 0;
            v103 = v136 + v132 + 2;
            GameRoutine_1a0b950(v138, v131, v132);
            GameData_21ca130 = v138;
            GameData_21ca138 = v103;
            GameData_21ca140 = v137;
            if (v131 != 0) {
              v139 = 128;
              if (*(_QWORD*)(*v102 + 200LL) == 0) {
                v139 = 56;
              }
              GameRoutine_1a0a4e0(*v102 + v139, v131);
            }
          }
          v101 += 24;
          GameData_21ca138 = v103;
        } while (v101 != 24576);
      }
      if (v192 == 0 ||
          (v140 = GameData_21ca148, GameData_21ca150 == GameData_21ca148)) {
      LABEL_232:
        GameData_21ca160 = 0;
      }
      else {
        v141 =
            0x2E8BA2E8BA2E8BA3LL * ((GameData_21ca150 - GameData_21ca148) >> 3);
        v142 = GameRoutine_1a09c70(v192);
        v143 = v142;
        while (1) {
          v144 = *(_BYTE*)v140 >> 1;
          if ((*(_BYTE*)v140 & 1) != 0) {
            v144 = *(_QWORD*)(v140 + 8);
          }
          if (v143 == v144) {
            if (v143 == -1) {
              GameRoutine_60a230(v142);
            }
            v145 = (*(_BYTE*)v140 & 1) != 0 ? *(_QWORD*)(v140 + 16) : v140 + 1;
            v142 = GameRoutine_1a09cf0(v145, v192);
            if ((_DWORD)v142 == 0) {
              break;
            }
          }
          --v141;
          v140 += 88;
          if (v141 == 0) {
            goto LABEL_232;
          }
        }
        GameData_21ca160 = v140;
        v146 = *(__int64**)(v140 + 40);
        v147 = *(__int64**)(v140 + 48);
        if (v146 != v147) {
          v148 = GameData_212bf68;
          do {
            if ((*(_BYTE*)v146 & 1) != 0) {
              GameRoutine_60a270(&v215, v146[2], v146[1]);
            }
            else {
              v149 = *v146;
              v150 = (char*)v146[2];
              v216 = v146[1];
              v217 = v150;
              v215 = v149;
            }
            v218 = (__int64*)v146[3];
            if ((v215 & 1) != 0) {
              v151 = v217;
            }
            else {
              v151 = (char*)&v215 + 1;
            }
            v152 = GameRoutine_6b3720(v151);
            if (v152 != 0) {
              v153 = (int)v218 + 32LL * SHIDWORD(v218);
              if (v153 < (GameData_21ca108 - GameData_21ca100) >> 1) {
                *(_WORD*)(GameData_21ca100 + 2 * v153) = v152;
              }
            }
            if ((v215 & 1) != 0 && v217 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v148 + 200LL) != 0) {
                v154 = 128;
              }
              else {
                v154 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)v148 + v154, v217);
            }
            v146 += 4;
          } while (v146 != v147);
          v140 = GameData_21ca160;
        }
        v180 = *(__int64**)(v140 + 64);
        v181 = *(__int64**)(v140 + 72);
        if (v180 != v181) {
          v182 = GameData_212bf68;
          do {
            if ((*(_BYTE*)v180 & 1) != 0) {
              GameRoutine_60a270(&v215, v180[2], v180[1]);
            }
            else {
              v183 = *v180;
              v184 = (char*)v180[2];
              v216 = v180[1];
              v217 = v184;
              v215 = v183;
            }
            v218 = (__int64*)v180[3];
            if ((v215 & 1) != 0) {
              v185 = v217;
            }
            else {
              v185 = (char*)&v215 + 1;
            }
            v186 = GameRoutine_6b3720(v185);
            if (v186 != 0) {
              v187 = (int)v218 + 32LL * SHIDWORD(v218);
              if (v187 < (GameData_21ca120 - GameData_21ca118) >> 1) {
                *(_WORD*)(GameData_21ca118 + 2 * v187) = v186;
              }
            }
            if ((v215 & 1) != 0 && v217 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)v182 + 200LL) != 0) {
                v188 = 128;
              }
              else {
                v188 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)v182 + v188, v217);
            }
            v180 += 4;
          } while (v180 != v181);
        }
      }
      v156 = GameData_21ca100;
      v155 = GameData_21ca108;
      v157 = GameData_212c930;
      if (GameData_21ca108 != GameData_21ca100) {
        v158 = *GameData_212c930;
        v159 = 0;
        do {
          v160 = *(unsigned __int16*)(v156 + 2 * v159);
          v161 = *(_QWORD*)(*(_QWORD*)(v158 + 64) + 8 * v160);
          if (v161 != 0) {
            v162 = GameData_1b41aa9[*(unsigned __int8*)(v161 + 57)];
            v163 = v162 > 6;
            v164 = (1 << v162) & 0x68;
            if (!v163 && v164 != 0) {
              *(_WORD*)(GameData_21ca130 + 2 * v159) = v160;
              v158 = *v157;
              v156 = GameData_21ca100;
              v155 = GameData_21ca108;
            }
          }
          ++v159;
        } while (v159 < (v155 - v156) >> 1);
      }
      v167 = GameData_21ca118;
      v166 = GameData_21ca120;
      if (GameData_21ca120 != GameData_21ca118) {
        v168 = *v157;
        v169 = 0;
        do {
          v170 = *(unsigned __int16*)(v167 + 2 * v169);
          v171 = *(_QWORD*)(*(_QWORD*)(v168 + 64) + 8 * v170);
          if (v171 != 0) {
            v172 = GameData_1b41aa9[*(unsigned __int8*)(v171 + 57)];
            v163 = v172 > 0x10;
            v173 = (1 << v172) & 0x10096;
            if (!v163 && v173 != 0) {
              v175 = 2 * v169;
              *(_WORD*)(GameData_21ca130 + v175) = v170;
              *(_WORD*)(GameData_21ca118 + v175) = 0;
              v168 = *v157;
              v167 = GameData_21ca118;
              v166 = GameData_21ca120;
            }
          }
          ++v169;
        } while (v169 < (v166 - v167) >> 1);
      }
      if ((GameData_21ca168 & 1) != 0) {
        if ((v211 & 1) != 0) {
          v176 = (char*)v213;
        }
        else {
          v176 = (char*)&v211 + 1;
        }
        if ((v211 & 1) != 0) {
          v177 = v212;
        }
        else {
          v177 = (unsigned __int64)(unsigned __int8)v211 >> 1;
        }
        GameRoutine_64dde0(&GameData_21ca168, v176, v177);
        v33 = v190;
        v27 = v191;
      }
      else {
        v33 = v190;
        v27 = v191;
        if ((v211 & 1) != 0) {
          GameRoutine_64df20(&GameData_21ca168, v213, v212);
        }
        else {
          GameData_21ca168 = v211;
          GameData_21ca170 = v212;
          GameData_21ca178 = v213;
        }
      }
      GameRoutine_6b50a0(v194);
      ((void (*)(__int64**))v200[3])(&v200);
      goto LABEL_263;
    }
    v215 = 0x7370616D6275730ELL;
    v216 = 0;
    if ((*(_BYTE*)v43 & 0x7F) == 8 &&
        (v44 = GameRoutine_1a09c70((char*)&v215 + 1), v45 = *(_QWORD*)(v43 + 1),
         v214[0] = (char*)&v215 + 1, v214[1] = v44,
         v38 = (unsigned int*)GameRoutine_6b7f00(
             v45, 0, v45, *(unsigned int*)(v45 + 4), v214),
         v46 != *(_DWORD*)(v45 + 4))) {
      v48 = *v38;
      if (v46 >= v48) {
        v50 = v46 - v48;
        v51 = __clz(v50 + 16);
        v49 = *(_QWORD*)(*((_QWORD*)v38 + 2) + 8 * (27 - v51) + 8) +
              32LL *
                  (unsigned int)(v50 - *((_DWORD*)GameData_212ce38 + 28 - v51));
      }
      else {
        v49 = *((_QWORD*)v38 + 1) + 32 * v46;
      }
      v47 = v49 + 16;
      if ((v215 & 1) == 0) {
        goto LABEL_66;
      }
    }
    else {
      v47 = 0;
      if ((v215 & 1) == 0) {
        goto LABEL_66;
      }
    }
    if (v217 != nullptr) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v52 = 56;
      }
      v38 = (unsigned int*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v52,
                                               v217);
    }
  LABEL_66:
    if (v47 != 0 && (*(_BYTE*)v47 & 0x7F) == 7) {
      v53 = *(unsigned int**)(v47 + 1);
      v55 = GameData_21ca148;
      v54 = GameData_21ca150;
      v56 = v53[1];
      v57 = GameData_21ca150 - GameData_21ca148;
      v58 = 0x2E8BA2E8BA2E8BA3LL * ((GameData_21ca150 - GameData_21ca148) >> 3);
      v59 = v56 - v58;
      if (v56 <= v58) {
        if (v56 < v58) {
          v72 = GameData_21ca148 + 88LL * (unsigned int)v56;
          if (v72 != GameData_21ca150) {
            do {
              v54 -= 88;
              GameRoutine_6b51e0(v54);
            } while (v54 != v72);
          }
          GameData_21ca150 = v72;
        }
      }
      else if (0x2E8BA2E8BA2E8BA3LL *
                   ((GameData_21ca158 - GameData_21ca150) >> 3) >=
               v59) {
        GameRoutine_1a0ba50(
            GameData_21ca150, 0,
            88 * ((88 * (unsigned __int64)(unsigned int)v59 - 88) / 0x58) + 88,
            v39, v40, v41);
        GameData_21ca150 =
            v54 +
            88 * ((88 * (unsigned __int64)(unsigned int)v59 - 88) / 0x58) + 88;
      }
      else {
        if (0x5D1745D1745D1746LL *
                ((GameData_21ca158 - GameData_21ca148) >> 3) >
            v56) {
          v56 = 0x5D1745D1745D1746LL *
                ((GameData_21ca158 - GameData_21ca148) >> 3);
        }
        if ((unsigned __int64)(0x2E8BA2E8BA2E8BA3LL *
                               ((GameData_21ca158 - GameData_21ca148) >> 3)) >=
            0x1745D1745D1745DLL) {
          v56 = 0x2E8BA2E8BA2E8BALL;
        }
        if (v56 > 0x2E8BA2E8BA2E8BALL) {
        LABEL_292:
          GameRoutine_60a210(v38);
        }
        v60 = 88 * v56;
        v61 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 88 * v56, 16, 0);
        v62 = v61 + v57;
        v63 = v61;
        v189 = v61 + v60;
        GameRoutine_1a0ba50(
            v62, 0,
            88 * ((88 * (unsigned __int64)(unsigned int)v59 - 88) / 0x58) + 88,
            v64, v65, v66);
        if (v55 != v54) {
          v67 = (__int64*)v55;
          v68 = (_QWORD*)v63;
          do {
            v69 = *v67;
            v70 = v67[2];
            v68[1] = v67[1];
            v68[2] = v70;
            *v68 = v69;
            v67[1] = 0;
            v67[2] = 0;
            *v67 = 0;
            v71 = v67[4];
            v68[3] = v67[3];
            v68[4] = v71;
            v68[5] = v67[5];
            v68[6] = v67[6];
            v68[7] = v67[7];
            v67[6] = 0;
            v67[7] = 0;
            v67[5] = 0;
            v68[8] = v67[8];
            v68[9] = v67[9];
            v68[10] = v67[10];
            v67[9] = 0;
            v67[10] = 0;
            v67[8] = 0;
            v67 += 11;
            v68 += 11;
          } while (v67 != (__int64*)v54);
          do {
            GameRoutine_6b51e0(v55);
            v55 += 88;
          } while (v55 != v54);
          v55 = GameData_21ca148;
        }
        GameData_21ca148 = v63;
        GameData_21ca150 =
            v62 +
            88 * ((88 * (unsigned __int64)(unsigned int)v59 - 88) / 0x58) + 88;
        GameData_21ca158 = v189;
        if (v55 != 0) {
          v73 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v73 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v73, v55);
        }
      }
      v74 = v53[1];
      if (v74 != 0) {
        v75 = 0;
        v76 = 0;
        v77 = 0;
        v78 = 88LL * v74;
        do {
          v79 = *v53;
          if (v77 >= v79) {
            v81 = v77 - v79;
            v82 = __clz(v81 + 16);
            v80 = *(_QWORD*)(*((_QWORD*)v53 + 2) + 8 * (27 - v82) + 8) +
                  16LL * (unsigned int)(v81 - *((_DWORD*)GameData_212ce38 + 28 -
                                                v82));
          }
          else {
            v80 = *((_QWORD*)v53 + 1) + v76;
          }
          v83 = v196;
          v84 = ((v197 - v196) << 6) - 1;
          if (v197 == v196) {
            v84 = 0;
          }
          v85 = v199 + v198;
          if (v84 == v199 + v198) {
            GameRoutine_6b71e0(&v195);
            v83 = v196;
            v85 = v199 + v198;
          }
          *(_QWORD*)(*(_QWORD*)(v83 + 8 * (v85 >> 9)) + 8 * (v85 & 0x1FF)) =
              v80;
          v86 = v198;
          v87 = v196;
          v88 = v199 + 1;
          v89 = v198 + v199++;
          if (*(_QWORD*)(*(_QWORD*)(v196 + 8 * (v89 >> 9)) +
                         8 * (v89 & 0x1FF)) != 0) {
            BYTE5(v215) = 0;
            v90 = GameData_21ca148;
            LOBYTE(v215) = 8;
            *(_DWORD*)((char*)&v215 + 1) = 1701667182;
            v218 = (__int64*)(GameData_21ca148 + v75);
            GameRoutine_6b8990(v194, &v215);
            if ((v215 & 1) != 0 && v217 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
                v91 = 128;
              }
              else {
                v91 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v91, v217);
            }
            v218 = (__int64*)(v90 + v75 + 24);
            v215 = 0x5874657366666F0ELL;
            v216 = 0;
            GameRoutine_6b81a0(v194, &v215);
            if ((v215 & 1) != 0 && v217 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
                v92 = 128;
              }
              else {
                v92 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v92, v217);
            }
            v218 = (__int64*)(v90 + v75 + 28);
            v215 = 0x5A74657366666F0ELL;
            v216 = 0;
            GameRoutine_6b81a0(v194, &v215);
            if ((v215 & 1) != 0 && v217 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
                v93 = 128;
              }
              else {
                v93 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v93, v217);
            }
            v218 = (__int64*)(v90 + v75 + 32);
            v215 = 0x58657A69730ALL;
            GameRoutine_6b81a0(v194, &v215);
            if ((v215 & 1) != 0 && v217 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
                v94 = 128;
              }
              else {
                v94 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v94, v217);
            }
            v218 = (__int64*)(v90 + v75 + 36);
            v215 = 0x5A657A69730ALL;
            GameRoutine_6b81a0(v194, &v215);
            if ((v215 & 1) != 0 && v217 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
                v95 = 128;
              }
              else {
                v95 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v95, v217);
            }
            v96 = v90 + v75;
            v218 = (__int64*)(v96 + 40);
            v215 = 0x737265646E750CLL;
            GameRoutine_6b8da0(v194, &v215);
            v218 = (__int64*)(v96 + 64);
            v215 = 0x7372657070750CLL;
            GameRoutine_6b8da0(v194, &v215);
            v86 = v198;
            v88 = v199;
            v87 = v196;
          }
          v97 = v197;
          if (v197 == v87) {
            v98 = 0;
          }
          else {
            v98 = ((v197 - v87) << 6) - 1;
          }
          v199 = v88 - 1;
          if ((unsigned __int64)(v98 - (v86 + v88) + 1) >= 0x400) {
            v99 = *(_QWORD*)(v197 - 8);
            if (v99 != 0) {
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) != 0) {
                v100 = 128;
              }
              else {
                v100 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v100, v99);
              v97 = v197;
            }
            v197 = v97 - 8;
          }
          ++v77;
          v76 += 16;
          v75 += 88;
        } while (v78 != v75);
      }
    }
    goto LABEL_141;
  }
LABEL_264:
  if (v25 != 0 && v213 != 0) {
    v178 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v178 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v178, v213);
  }
  return v27 != 0;
}

__int64 GameHr_6b55a0(__int64 result, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _DWORD* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned int** v19;
  int v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  unsigned int v32;
  unsigned __int64* v33;
  unsigned __int64 v34;
  unsigned int v35;
  unsigned __int64 v36;
  unsigned int v37;
  unsigned __int64* v38;
  unsigned __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  bool v42;
  unsigned int v43;
  unsigned int v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned int** v61;
  int v62;
  __int64 v63;
  unsigned int* v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64* v68;
  unsigned __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  int v73;
  unsigned int v74;
  unsigned __int64* v75;
  unsigned __int64 v76;
  unsigned int v77;
  unsigned __int64 v78;
  unsigned int v79;
  unsigned __int64* v80;
  unsigned __int64 v81;
  unsigned int v82;
  unsigned __int64 v83;
  unsigned int v84;
  unsigned int v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64* v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64* v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64* v107;
  unsigned __int64* v108;
  __int64 v109;
  __int64 v110;
  __int64* v111;
  unsigned __int64* v112;
  __int64 v113;
  _QWORD v114[3];

  v2 = result;
  if (a2 == 6 || (unsigned int)a2 - 9 <= 1) {
    v3 = *(_QWORD*)(result + 8);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v4 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, v3);
    }
    *(_QWORD*)(v2 + 8) = 0;
    *(_DWORD*)(v2 + 4) = 0;
    return result;
  }
  v112 = nullptr;
  v108 = nullptr;
  v110 = 32;
  v111 = &v113;
  v106 = 32;
  v107 = &v109;
  if (a2 == 7) {
    result = GameRoutine_6b63a0(&v110, result + 1);
  }
  else {
    result = GameRoutine_6b6600(&v106, result + 1);
  }
  v5 = HIDWORD(v110);
  v6 = HIDWORD(v106);
  *(_BYTE*)v2 = 0;
  if ((v5 | v6) == 0) {
    goto LABEL_13;
  }
  v13 = (_QWORD*)GameData_212bf68;
  v14 = GameData_212ce38;
  while (2) {
    if (v5 == 0) {
      if (v6 != 0) {
        goto LABEL_115;
      }
      break;
    }
    do {
      v18 = v5 - 1LL;
      if (v18 >= (unsigned int)v110) {
        v20 = v18 - v110;
        v21 = __clz(v20 + 16);
        v19 = (unsigned int**)(v112[27 - v21 + 1] +
                               8LL * (unsigned int)(v20 - v14[28 - v21]));
      }
      else {
        v19 = (unsigned int**)&v111[v18];
      }
      v22 = *v19;
      HIDWORD(v110) = v5 - 1;
      v23 = v22[1];
      if ((_DWORD)v23 != 0) {
        v24 = 0;
        while (1) {
          v27 = *v22;
          if (v24 >= v27) {
            v29 = v24 - v27;
            v30 = __clz(v29 + 16);
            v28 = *(_QWORD*)(*((_QWORD*)v22 + 2) + 8 * (27 - v30) + 8) +
                  16LL * (unsigned int)(v29 - v14[28 - v30]);
          }
          else {
            v28 = *((_QWORD*)v22 + 1) + 16 * v24;
          }
          v31 = *(_BYTE*)v28 & 0x7F;
          if (v31 == 8) {
            v37 = HIDWORD(v106);
            v38 = v108;
            if (v108 == nullptr) {
              v40 = v106;
              if (HIDWORD(v106) >= (unsigned int)v106) {
                v41 = 1;
                v38 = (unsigned __int64*)GameRoutine_651b90(*v13, 232, 16, 0);
                v39 = 0;
                *v38 = 0;
                v38[1] = 0;
                v38[2] = 0;
                v38[3] = 0;
                v38[4] = 0;
                v38[5] = 0;
                v38[6] = 0;
                v38[7] = 0;
                v38[8] = 0;
                v38[9] = 0;
                v38[10] = 0;
                v38[11] = 0;
                v38[12] = 0;
                v38[13] = 0;
                v38[14] = 0;
                v38[15] = 0;
                v38[16] = 0;
                v38[17] = 0;
                v38[18] = 0;
                v38[19] = 0;
                v38[20] = 0;
                v38[21] = 0;
                v38[22] = 0;
                v38[23] = 0;
                v38[24] = 0;
                v38[25] = 0;
                v38[26] = 0;
                v38[27] = 0;
                v38[28] = 0;
                v108 = v38;
                goto LABEL_74;
              }
            LABEL_78:
              v42 = v37 >= v40;
              v44 = v37 - v40;
              if (v42) {
                v46 = __clz(v44 + 16);
                v45 = (__int64*)(v108[27 - v46 + 1] +
                                 8LL * (v44 - v14[28 - v46]));
              }
              else {
                v45 = &v107[v37];
              }
              *v45 = *(_QWORD*)(v28 + 1);
              ++HIDWORD(v106);
              goto LABEL_41;
            }
            v39 = *v108;
            v40 = v106;
            if (*v108 != 0) {
              v41 = v39 + 1;
              if ((unsigned int)v14[v39 + 1] +
                      (unsigned __int64)(unsigned int)v106 >
                  HIDWORD(v106)) {
                goto LABEL_78;
              }
              if (v41 <= 0x1C) {
                if (v39 != -1) {
                  goto LABEL_74;
                }
                v41 = 0;
              LABEL_77:
                *v38 = v41;
                v40 = v106;
                v37 = HIDWORD(v106);
                v14 = GameData_212ce38;
                goto LABEL_78;
              }
            }
            else {
              if (HIDWORD(v106) < (unsigned int)v106) {
                goto LABEL_78;
              }
              v39 = 0;
              v41 = 1;
            LABEL_74:
              while ((unsigned __int64)((16LL << v39) - 0x2000000000000000LL) >
                     0xE000000000000000LL) {
                v38[v39 + 1] = GameRoutine_651b90(*v13, 128LL << v39, 16, 0);
                if (v41 == ++v39) {
                  v38 = v108;
                  goto LABEL_77;
                }
              }
              for (; v39 > *v108; --v39) {
                v51 = v38[v39];
                if (v51 != 0) {
                  v52 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v52 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v52, v51);
                }
                v38[v39] = 0;
              }
            }
            v50 = *(_QWORD*)(v28 + 1);
            LOBYTE(v114[0]) = 8;
            v114[1] = 0;
            *(_QWORD*)((char*)v114 + 1) = v50;
            GameRoutine_6b6a60(v114);
          }
          else {
            if (v31 != 7) {
              goto LABEL_42;
            }
            v32 = HIDWORD(v110);
            v33 = v112;
            if (v112 == nullptr) {
              v35 = v110;
              if (HIDWORD(v110) >= (unsigned int)v110) {
                v36 = 1;
                v33 = (unsigned __int64*)GameRoutine_651b90(*v13, 232, 16, 0);
                v34 = 0;
                *v33 = 0;
                v33[1] = 0;
                v33[2] = 0;
                v33[3] = 0;
                v33[4] = 0;
                v33[5] = 0;
                v33[6] = 0;
                v33[7] = 0;
                v33[8] = 0;
                v33[9] = 0;
                v33[10] = 0;
                v33[11] = 0;
                v33[12] = 0;
                v33[13] = 0;
                v33[14] = 0;
                v33[15] = 0;
                v33[16] = 0;
                v33[17] = 0;
                v33[18] = 0;
                v33[19] = 0;
                v33[20] = 0;
                v33[21] = 0;
                v33[22] = 0;
                v33[23] = 0;
                v33[24] = 0;
                v33[25] = 0;
                v33[26] = 0;
                v33[27] = 0;
                v33[28] = 0;
                v112 = v33;
                goto LABEL_66;
              }
            LABEL_70:
              v42 = v32 >= v35;
              v43 = v32 - v35;
              if (v42) {
                v25 = __clz(v43 + 16);
                v26 = (__int64*)(v112[27 - v25 + 1] +
                                 8LL * (v43 - v14[28 - v25]));
              }
              else {
                v26 = &v111[v32];
              }
              *v26 = *(_QWORD*)(v28 + 1);
              ++HIDWORD(v110);
              goto LABEL_41;
            }
            v34 = *v112;
            v35 = v110;
            if (*v112 != 0) {
              v36 = v34 + 1;
              if ((unsigned int)v14[v34 + 1] +
                      (unsigned __int64)(unsigned int)v110 >
                  HIDWORD(v110)) {
                goto LABEL_70;
              }
              if (v36 <= 0x1C) {
                if (v34 != -1) {
                  goto LABEL_66;
                }
                v36 = 0;
              LABEL_69:
                *v33 = v36;
                v32 = HIDWORD(v110);
                v35 = v110;
                v14 = GameData_212ce38;
                goto LABEL_70;
              }
            }
            else {
              if (HIDWORD(v110) < (unsigned int)v110) {
                goto LABEL_70;
              }
              v34 = 0;
              v36 = 1;
            LABEL_66:
              while ((unsigned __int64)((16LL << v34) - 0x2000000000000000LL) >
                     0xE000000000000000LL) {
                v33[v34 + 1] = GameRoutine_651b90(*v13, 128LL << v34, 16, 0);
                if (v36 == ++v34) {
                  v33 = v112;
                  goto LABEL_69;
                }
              }
              for (; v34 > *v112; --v34) {
                v48 = v33[v34];
                if (v48 != 0) {
                  v49 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v49 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v49, v48);
                }
                v33[v34] = 0;
              }
            }
            v47 = *(_QWORD*)(v28 + 1);
            LOBYTE(v114[0]) = 7;
            v114[1] = 0;
            *(_QWORD*)((char*)v114 + 1) = v47;
            GameRoutine_6b6860(v114);
          }
          v14 = GameData_212ce38;
        LABEL_41:
          *(_BYTE*)v28 = 0;
          v23 = v22[1];
        LABEL_42:
          if (++v24 == v23) {
            goto LABEL_98;
          }
        }
      }
      v24 = 0;
    LABEL_98:
      GameRoutine_6b6c80(v22, 0, v22, v24);
      v15 = *((__int64**)v22 + 2);
      if (v15 != nullptr) {
        v53 = *v15;
        if (*v15 == 0) {
          goto LABEL_28;
        }
        do {
          v54 = *((_QWORD*)v22 + 2);
          v55 = *(_QWORD*)(v54 + 8 * v53);
          if (v55 != 0) {
            v56 = 128;
            if (*(_QWORD*)(*v13 + 200LL) == 0) {
              v56 = 56;
            }
            GameRoutine_1a0a4e0(*v13 + v56, v55);
            v54 = *((_QWORD*)v22 + 2);
          }
          *(_QWORD*)(v54 + 8 * v53--) = 0;
        } while (v53 != 0);
        v15 = *((__int64**)v22 + 2);
        if (v15 != nullptr) {
        LABEL_28:
          v16 = 128;
          if (*(_QWORD*)(*v13 + 200LL) == 0) {
            v16 = 56;
          }
          GameRoutine_1a0a4e0(*v13 + v16, v15);
        }
      }
      v17 = 128;
      if (*(_QWORD*)(*v13 + 200LL) == 0) {
        v17 = 56;
      }
      result = GameRoutine_1a0a4e0(*v13 + v17, v22);
      v5 = HIDWORD(v110);
      v14 = GameData_212ce38;
    } while (HIDWORD(v110) != 0);
    v6 = HIDWORD(v106);
    if (HIDWORD(v106) == 0) {
      break;
    }
  LABEL_115:
    while (2) {
      v60 = v6 - 1LL;
      if (v60 >= (unsigned int)v106) {
        v62 = v60 - v106;
        v63 = __clz(v62 + 16);
        v61 = (unsigned int**)(v108[27 - v63 + 1] +
                               8LL * (unsigned int)(v62 - v14[28 - v63]));
      }
      else {
        v61 = (unsigned int**)&v107[v60];
      }
      v64 = *v61;
      HIDWORD(v106) = v6 - 1;
      v65 = v64[1];
      if ((_DWORD)v65 != 0) {
        v66 = 0;
        while (1) {
          v69 = *v64;
          if (v66 >= v69) {
            v71 = v66 - v69;
            v72 = __clz(v71 + 16);
            v70 = *(_QWORD*)(*((_QWORD*)v64 + 2) + 8 * (27 - v72) + 8) +
                  32LL * (unsigned int)(v71 - v14[28 - v72]);
          }
          else {
            v70 = *((_QWORD*)v64 + 1) + 32 * v66;
          }
          v73 = *(_BYTE*)(v70 + 16) & 0x7F;
          if (v73 == 8) {
            v79 = HIDWORD(v106);
            v80 = v108;
            if (v108 == nullptr) {
              v82 = v106;
              if (HIDWORD(v106) >= (unsigned int)v106) {
                v83 = 1;
                v80 = (unsigned __int64*)GameRoutine_651b90(*v13, 232, 16, 0);
                v81 = 0;
                *v80 = 0;
                v80[1] = 0;
                v80[2] = 0;
                v80[3] = 0;
                v80[4] = 0;
                v80[5] = 0;
                v80[6] = 0;
                v80[7] = 0;
                v80[8] = 0;
                v80[9] = 0;
                v80[10] = 0;
                v80[11] = 0;
                v80[12] = 0;
                v80[13] = 0;
                v80[14] = 0;
                v80[15] = 0;
                v80[16] = 0;
                v80[17] = 0;
                v80[18] = 0;
                v80[19] = 0;
                v80[20] = 0;
                v80[21] = 0;
                v80[22] = 0;
                v80[23] = 0;
                v80[24] = 0;
                v80[25] = 0;
                v80[26] = 0;
                v80[27] = 0;
                v80[28] = 0;
                v108 = v80;
                goto LABEL_155;
              }
            LABEL_159:
              v42 = v79 >= v82;
              v85 = v79 - v82;
              if (v42) {
                v87 = __clz(v85 + 16);
                v86 = (__int64*)(v108[27 - v87 + 1] +
                                 8LL * (v85 - v14[28 - v87]));
              }
              else {
                v86 = &v107[v79];
              }
              *v86 = *(_QWORD*)(v70 + 17);
              ++HIDWORD(v106);
              goto LABEL_122;
            }
            v81 = *v108;
            v82 = v106;
            if (*v108 != 0) {
              v83 = v81 + 1;
              if ((unsigned int)v14[v81 + 1] +
                      (unsigned __int64)(unsigned int)v106 >
                  HIDWORD(v106)) {
                goto LABEL_159;
              }
              if (v83 <= 0x1C) {
                if (v81 != -1) {
                  goto LABEL_155;
                }
                v83 = 0;
              LABEL_158:
                *v80 = v83;
                v82 = v106;
                v79 = HIDWORD(v106);
                v14 = GameData_212ce38;
                goto LABEL_159;
              }
            }
            else {
              if (HIDWORD(v106) < (unsigned int)v106) {
                goto LABEL_159;
              }
              v81 = 0;
              v83 = 1;
            LABEL_155:
              while ((unsigned __int64)((16LL << v81) - 0x2000000000000000LL) >
                     0xE000000000000000LL) {
                v80[v81 + 1] = GameRoutine_651b90(*v13, 128LL << v81, 16, 0);
                if (v83 == ++v81) {
                  v80 = v108;
                  goto LABEL_158;
                }
              }
              for (; v81 > *v108; --v81) {
                v92 = v80[v81];
                if (v92 != 0) {
                  v93 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v93 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v93, v92);
                }
                v80[v81] = 0;
              }
            }
            v91 = *(_QWORD*)(v70 + 17);
            LOBYTE(v114[0]) = 8;
            v114[1] = 0;
            *(_QWORD*)((char*)v114 + 1) = v91;
            GameRoutine_6b6a60(v114);
          }
          else {
            if (v73 != 7) {
              goto LABEL_123;
            }
            v74 = HIDWORD(v110);
            v75 = v112;
            if (v112 == nullptr) {
              v77 = v110;
              if (HIDWORD(v110) >= (unsigned int)v110) {
                v78 = 1;
                v75 = (unsigned __int64*)GameRoutine_651b90(*v13, 232, 16, 0);
                v76 = 0;
                *v75 = 0;
                v75[1] = 0;
                v75[2] = 0;
                v75[3] = 0;
                v75[4] = 0;
                v75[5] = 0;
                v75[6] = 0;
                v75[7] = 0;
                v75[8] = 0;
                v75[9] = 0;
                v75[10] = 0;
                v75[11] = 0;
                v75[12] = 0;
                v75[13] = 0;
                v75[14] = 0;
                v75[15] = 0;
                v75[16] = 0;
                v75[17] = 0;
                v75[18] = 0;
                v75[19] = 0;
                v75[20] = 0;
                v75[21] = 0;
                v75[22] = 0;
                v75[23] = 0;
                v75[24] = 0;
                v75[25] = 0;
                v75[26] = 0;
                v75[27] = 0;
                v75[28] = 0;
                v112 = v75;
                goto LABEL_147;
              }
            LABEL_151:
              v42 = v74 >= v77;
              v84 = v74 - v77;
              if (v42) {
                v67 = __clz(v84 + 16);
                v68 = (__int64*)(v112[27 - v67 + 1] +
                                 8LL * (v84 - v14[28 - v67]));
              }
              else {
                v68 = &v111[v74];
              }
              *v68 = *(_QWORD*)(v70 + 17);
              ++HIDWORD(v110);
              goto LABEL_122;
            }
            v76 = *v112;
            v77 = v110;
            if (*v112 != 0) {
              v78 = v76 + 1;
              if ((unsigned int)v14[v76 + 1] +
                      (unsigned __int64)(unsigned int)v110 >
                  HIDWORD(v110)) {
                goto LABEL_151;
              }
              if (v78 <= 0x1C) {
                if (v76 != -1) {
                  goto LABEL_147;
                }
                v78 = 0;
              LABEL_150:
                *v75 = v78;
                v74 = HIDWORD(v110);
                v77 = v110;
                v14 = GameData_212ce38;
                goto LABEL_151;
              }
            }
            else {
              if (HIDWORD(v110) < (unsigned int)v110) {
                goto LABEL_151;
              }
              v76 = 0;
              v78 = 1;
            LABEL_147:
              while ((unsigned __int64)((16LL << v76) - 0x2000000000000000LL) >
                     0xE000000000000000LL) {
                v75[v76 + 1] = GameRoutine_651b90(*v13, 128LL << v76, 16, 0);
                if (v78 == ++v76) {
                  v75 = v112;
                  goto LABEL_150;
                }
              }
              for (; v76 > *v112; --v76) {
                v89 = v75[v76];
                if (v89 != 0) {
                  v90 = 128;
                  if (*(_QWORD*)(*v13 + 200LL) == 0) {
                    v90 = 56;
                  }
                  GameRoutine_1a0a4e0(*v13 + v90, v89);
                }
                v75[v76] = 0;
              }
            }
            v88 = *(_QWORD*)(v70 + 17);
            LOBYTE(v114[0]) = 7;
            v114[1] = 0;
            *(_QWORD*)((char*)v114 + 1) = v88;
            GameRoutine_6b6860(v114);
          }
          v14 = GameData_212ce38;
        LABEL_122:
          *(_BYTE*)(v70 + 16) = 0;
          v65 = v64[1];
        LABEL_123:
          if (++v66 == v65) {
            goto LABEL_179;
          }
        }
      }
      v66 = 0;
    LABEL_179:
      GameRoutine_6b6ee0(v64, 0, v64, v66);
      v57 = *((__int64**)v64 + 2);
      if (v57 != nullptr) {
        v94 = *v57;
        if (*v57 == 0) {
          goto LABEL_109;
        }
        do {
          v95 = *((_QWORD*)v64 + 2);
          v96 = *(_QWORD*)(v95 + 8 * v94);
          if (v96 != 0) {
            v97 = 128;
            if (*(_QWORD*)(*v13 + 200LL) == 0) {
              v97 = 56;
            }
            GameRoutine_1a0a4e0(*v13 + v97, v96);
            v95 = *((_QWORD*)v64 + 2);
          }
          *(_QWORD*)(v95 + 8 * v94--) = 0;
        } while (v94 != 0);
        v57 = *((__int64**)v64 + 2);
        if (v57 != nullptr) {
        LABEL_109:
          v58 = 128;
          if (*(_QWORD*)(*v13 + 200LL) == 0) {
            v58 = 56;
          }
          GameRoutine_1a0a4e0(*v13 + v58, v57);
        }
      }
      v59 = 128;
      if (*(_QWORD*)(*v13 + 200LL) == 0) {
        v59 = 56;
      }
      result = GameRoutine_1a0a4e0(*v13 + v59, v64);
      v6 = HIDWORD(v106);
      v14 = GameData_212ce38;
      if (HIDWORD(v106) != 0) {
        continue;
      }
      break;
    }
    v5 = HIDWORD(v110);
    if (HIDWORD(v110) != 0) {
      continue;
    }
    break;
  }
LABEL_13:
  v7 = v108;
  if (v108 != nullptr) {
    v8 = *v108;
    if (*v108 == 0) {
      goto LABEL_188;
    }
    v9 = GameData_212bf68;
    do {
      v10 = v108;
      v11 = v108[v8];
      if (v11 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v9 + v12, v11);
        v10 = v108;
      }
      v10[v8--] = 0;
    } while (v8 != 0);
    v7 = v108;
    if (v108 != nullptr) {
    LABEL_188:
      v98 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v98 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v98, v7);
    }
  }
  v99 = v112;
  if (v112 != nullptr) {
    v100 = *v112;
    if (*v112 == 0) {
      goto LABEL_201;
    }
    v101 = GameData_212bf68;
    do {
      v102 = v112;
      v103 = v112[v100];
      if (v103 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v101 + 200LL) != 0) {
          v104 = 128;
        }
        else {
          v104 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v101 + v104, v103);
        v102 = v112;
      }
      v102[v100--] = 0;
    } while (v100 != 0);
    v99 = v112;
    if (v112 != nullptr) {
    LABEL_201:
      v105 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v105 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v105, v99);
    }
  }
  return result;
}

_QWORD* GameHr_6b63a0(unsigned int* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  unsigned __int64* v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  bool v9;
  int v10;
  _QWORD* result;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;

  v2 = a1[1];
  v3 = *((unsigned __int64**)a1 + 2);
  if (v3 == nullptr) {
    LODWORD(v6) = *a1;
    if ((unsigned int)v2 < *a1) {
      goto LABEL_16;
    }
    v15 = a2;
    v3 = (unsigned __int64*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 232,
                                               16, 0);
    v5 = 0;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v7 = 1;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[9] = 0;
    v3[10] = 0;
    v3[11] = 0;
    v3[12] = 0;
    v3[13] = 0;
    v3[14] = 0;
    v3[15] = 0;
    v3[16] = 0;
    v3[17] = 0;
    v3[18] = 0;
    v3[19] = 0;
    v3[20] = 0;
    v3[21] = 0;
    v3[22] = 0;
    v3[23] = 0;
    v3[24] = 0;
    v3[25] = 0;
    v3[26] = 0;
    v3[27] = 0;
    v3[28] = 0;
    *((_QWORD*)a1 + 2) = v3;
  LABEL_11:
    v8 = (_QWORD*)GameData_212bf68;
    while ((unsigned __int64)((16LL << v5) - 0x2000000000000000LL) >
           0xE000000000000000LL) {
      v3[v5 + 1] = GameRoutine_651b90(*v8, 128LL << v5, 16, 0);
      if (v7 == ++v5) {
        v3 = *((unsigned __int64**)a1 + 2);
        a2 = v15;
        goto LABEL_15;
      }
    }
    for (; v5 > **((_QWORD**)a1 + 2); --v5) {
      v13 = v3[v5];
      if (v13 != 0) {
        if (*(_QWORD*)(*v8 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        GameRoutine_1a0a4e0(*v8 + v14, v13);
      }
      v3[v5] = 0;
    }
    return nullptr;
  }
  v5 = *v3;
  v6 = *a1;
  if (*v3 == 0) {
    if ((unsigned int)v2 < (unsigned int)v6) {
      goto LABEL_16;
    }
    v15 = a2;
    v5 = 0;
    v7 = 1;
    goto LABEL_11;
  }
  v7 = v5 + 1;
  if ((unsigned __int64)*((unsigned int*)GameData_212ce38 + v5 + 1) + v6 <=
      v2) {
    if (v7 > 0x1C) {
      return nullptr;
    }
    if (v5 != -1) {
      v15 = a2;
      goto LABEL_11;
    }
    v7 = 0;
  LABEL_15:
    *v3 = v7;
    LODWORD(v6) = *a1;
    LODWORD(v2) = a1[1];
  }
LABEL_16:
  v9 = (unsigned int)v2 >= (unsigned int)v6;
  v10 = v2 - v6;
  if (v9) {
    v12 = __clz(v10 + 16);
    result = (_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * (27 - v12) + 8) +
                       8LL * (unsigned int)(v10 - *((_DWORD*)GameData_212ce38 +
                                                    28 - v12)));
  }
  else {
    result = (_QWORD*)(*((_QWORD*)a1 + 1) + 8LL * (unsigned int)v2);
  }
  *result = *a2;
  ++a1[1];
  return result;
}

_QWORD* GameHr_6b6600(unsigned int* a1, _QWORD* a2)
{
  unsigned __int64 v2;
  unsigned __int64* v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  bool v9;
  int v10;
  _QWORD* result;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;

  v2 = a1[1];
  v3 = *((unsigned __int64**)a1 + 2);
  if (v3 == nullptr) {
    LODWORD(v6) = *a1;
    if ((unsigned int)v2 < *a1) {
      goto LABEL_16;
    }
    v15 = a2;
    v3 = (unsigned __int64*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 232,
                                               16, 0);
    v5 = 0;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v7 = 1;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[9] = 0;
    v3[10] = 0;
    v3[11] = 0;
    v3[12] = 0;
    v3[13] = 0;
    v3[14] = 0;
    v3[15] = 0;
    v3[16] = 0;
    v3[17] = 0;
    v3[18] = 0;
    v3[19] = 0;
    v3[20] = 0;
    v3[21] = 0;
    v3[22] = 0;
    v3[23] = 0;
    v3[24] = 0;
    v3[25] = 0;
    v3[26] = 0;
    v3[27] = 0;
    v3[28] = 0;
    *((_QWORD*)a1 + 2) = v3;
  LABEL_11:
    v8 = (_QWORD*)GameData_212bf68;
    while ((unsigned __int64)((16LL << v5) - 0x2000000000000000LL) >
           0xE000000000000000LL) {
      v3[v5 + 1] = GameRoutine_651b90(*v8, 128LL << v5, 16, 0);
      if (v7 == ++v5) {
        v3 = *((unsigned __int64**)a1 + 2);
        a2 = v15;
        goto LABEL_15;
      }
    }
    for (; v5 > **((_QWORD**)a1 + 2); --v5) {
      v13 = v3[v5];
      if (v13 != 0) {
        if (*(_QWORD*)(*v8 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        GameRoutine_1a0a4e0(*v8 + v14, v13);
      }
      v3[v5] = 0;
    }
    return nullptr;
  }
  v5 = *v3;
  v6 = *a1;
  if (*v3 == 0) {
    if ((unsigned int)v2 < (unsigned int)v6) {
      goto LABEL_16;
    }
    v15 = a2;
    v5 = 0;
    v7 = 1;
    goto LABEL_11;
  }
  v7 = v5 + 1;
  if ((unsigned __int64)*((unsigned int*)GameData_212ce38 + v5 + 1) + v6 <=
      v2) {
    if (v7 > 0x1C) {
      return nullptr;
    }
    if (v5 != -1) {
      v15 = a2;
      goto LABEL_11;
    }
    v7 = 0;
  LABEL_15:
    *v3 = v7;
    LODWORD(v6) = *a1;
    LODWORD(v2) = a1[1];
  }
LABEL_16:
  v9 = (unsigned int)v2 >= (unsigned int)v6;
  v10 = v2 - v6;
  if (v9) {
    v12 = __clz(v10 + 16);
    result = (_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * (27 - v12) + 8) +
                       8LL * (unsigned int)(v10 - *((_DWORD*)GameData_212ce38 +
                                                    28 - v12)));
  }
  else {
    result = (_QWORD*)(*((_QWORD*)a1 + 1) + 8LL * (unsigned int)v2);
  }
  *result = *a2;
  ++a1[1];
  return result;
}

__int64 GameHr_6b6860(__int64 a1)
{
  unsigned int* v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  _BYTE* v10;
  int v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v1 = *(unsigned int**)(a1 + 1);
  v2 = v1[1];
  if ((_DWORD)v2 != 0) {
    v3 = 0;
    v4 = 0;
    v5 = GameData_212ce38;
    while (1) {
      v9 = *v1;
      if (v4 >= v9) {
        v11 = v4 - v9;
        v12 = __clz(v11 + 16);
        v10 = (_BYTE*)(*(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v12) + 8) +
                       16LL * (unsigned int)(v11 - v5[28 - v12]));
      }
      else {
        v10 = (_BYTE*)(*((_QWORD*)v1 + 1) + v3);
      }
      v13 = *v10 & 0x7F;
      if (v13 == 8) {
        GameRoutine_6b6a60(v10);
        v14 = *v1;
        if (v4 < v14) {
          v8 = (_BYTE*)(*((_QWORD*)v1 + 1) + v3);
          goto LABEL_4;
        }
      }
      else {
        if (v13 != 7) {
          goto LABEL_5;
        }
        GameHr_6b6860(v10);
        v14 = *v1;
        if (v4 < v14) {
          v8 = (_BYTE*)(*((_QWORD*)v1 + 1) + 16 * v4);
          goto LABEL_4;
        }
      }
      v6 = v4 - v14;
      v7 = __clz(v6 + 16);
      v8 = (_BYTE*)(*(_QWORD*)(*((_QWORD*)v1 + 2) + 8 * (27 - v7) + 8) +
                    16LL * (unsigned int)(v6 - v5[28 - v7]));
    LABEL_4:
      *v8 = 0;
      v2 = v1[1];
    LABEL_5:
      ++v4;
      v3 += 16;
      if (v4 == v2) {
        goto LABEL_16;
      }
    }
  }
  v4 = 0;
LABEL_16:
  GameRoutine_6b6c80(v1, 0, v1, v4);
  v15 = *((__int64**)v1 + 2);
  v16 = GameData_212bf68;
  if (v15 != nullptr) {
    v17 = *v15;
    if (*v15 == 0) {
      goto LABEL_26;
    }
    do {
      v18 = *((_QWORD*)v1 + 2);
      v19 = *(_QWORD*)(v18 + 8 * v17);
      if (v19 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v16 + v20, v19);
        v18 = *((_QWORD*)v1 + 2);
      }
      *(_QWORD*)(v18 + 8 * v17--) = 0;
    } while (v17 != 0);
    v15 = *((__int64**)v1 + 2);
    if (v15 != nullptr) {
    LABEL_26:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v21 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v16 + v21, v15);
    }
  }
  v22 = 128;
  if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
    v22 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)v16 + v22, v1);
}

unsigned int* GameHr_6b6c80(unsigned int* result, unsigned __int64 a2,
                            unsigned int* a3, __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned int* v7;
  _DWORD* v8;
  __int64 v9;
  unsigned __int8* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;

  if (a2 == a4) {
    return result;
  }
  v4 = *result;
  v6 = a2;
  v7 = result;
  v8 = GameData_212ce38;
  if (a2 >= v4) {
    v11 = __clz(a2 - v4 + 16);
    v9 = 28 - v11;
    v10 = (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)result + 2) +
                                        8 * (27 - v11) + 8) +
                             16LL * (unsigned int)(a2 - v4 -
                                                   *((_DWORD*)GameData_212ce38 +
                                                     28 - v11)));
  }
  else {
    v9 = 0;
    v10 = (unsigned __int8*)(*((_QWORD*)result + 1) + 16 * a2);
  }
  v12 = *a3;
  v13 = a4 - 1;
  if (a4 - 1 >= v12) {
    v16 = __clz(v13 - v12 + 16);
    v14 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v16) + 8) +
          16LL * (unsigned int)(v13 - v12 -
                                *((_DWORD*)GameData_212ce38 + 28 - v16));
    if (v9 != 28 - v16) {
      goto LABEL_7;
    }
  }
  else {
    v14 = *((_QWORD*)a3 + 1) + 16 * v13;
    if (v9 != 0) {
    LABEL_7:
      if (v9 != 0) {
        v4 = 8LL << v9;
        v15 = *(_QWORD*)(*((_QWORD*)result + 2) + 8 * v9);
      }
      else {
        v15 = *((_QWORD*)result + 1);
      }
      v17 = v15 + 16 * v4;
      goto LABEL_13;
    }
  }
  v17 = v14 + 16;
LABEL_13:
  while (1) {
    if (v10 == (unsigned __int8*)v17) {
      v18 = *a3;
      if (v13 >= v18) {
        v21 = v13 - v18;
        v22 = __clz(v13 - v18 + 16);
        v19 = 28 - v22;
        v20 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v22) + 8) +
              16LL * (unsigned int)(v21 - v8[28 - v22]);
      }
      else {
        v19 = 0;
        v20 = *((_QWORD*)a3 + 1) + 16 * v13;
      }
      v23 = *v7;
      v24 = 28LL - __clz(v6 - v23 + 16);
      if (v6 < v23) {
        v24 = 0;
      }
      if (v24 == v19) {
        break;
      }
      v6 = (unsigned int)v8[v24 + 1] + v23;
      v25 = v8[v24 + 1];
      v26 = __clz(v25 + 16);
      v27 = *(_QWORD*)(*((_QWORD*)v7 + 2) + 8 * (27 - v26) + 8);
      if (28 - v26 == v19) {
        v17 = v20 + 16;
      }
      else {
        v17 = (_DWORD)v26 == 28
                  ? *((_QWORD*)v7 + 1) + 16 * v23
                  : v27 + 16 * (16LL << (27 - (unsigned __int8)v26));
      }
      v10 = (unsigned __int8*)(v27 + 16LL * (unsigned int)(v25 - v8[28 - v26]));
      if ((unsigned __int8*)v17 == v10) {
        break;
      }
    }
    while (v10 != (unsigned __int8*)v17) {
      v28 = *v10;
      if ((unsigned int)(v28 - 6) <= 4) {
        result = (unsigned int*)GameRoutine_6b55a0((__int64)v10, v28);
      }
      v10 += 16;
    }
  }
  return result;
}

unsigned int* GameHr_6b6ee0(unsigned int* result, unsigned __int64 a2,
                            unsigned int* a3, __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned int* v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;

  if (a2 == a4) {
    return result;
  }
  v4 = *result;
  v6 = a2;
  v7 = result;
  v8 = GameData_212ce38;
  if (a2 >= v4) {
    v11 = __clz(a2 - v4 + 16);
    v9 = 28 - v11;
    v10 = *(_QWORD*)(*((_QWORD*)result + 2) + 8 * (27 - v11) + 8) +
          32LL *
              (unsigned int)(a2 - v4 - *((_DWORD*)GameData_212ce38 + 28 - v11));
  }
  else {
    v9 = 0;
    v10 = *((_QWORD*)result + 1) + 32 * a2;
  }
  v12 = *a3;
  v13 = a4 - 1;
  if (a4 - 1 >= v12) {
    v17 = __clz(v13 - v12 + 16);
    v14 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v17) + 8) +
          32LL * (unsigned int)(v13 - v12 -
                                *((_DWORD*)GameData_212ce38 + 28 - v17));
    if (v9 != 28 - v17) {
      goto LABEL_7;
    }
  }
  else {
    v14 = *((_QWORD*)a3 + 1) + 32 * v13;
    if (v9 != 0) {
    LABEL_7:
      if (v9 != 0) {
        v4 = 8LL << v9;
        v15 = *(_QWORD*)(*((_QWORD*)result + 2) + 8 * v9);
      }
      else {
        v15 = *((_QWORD*)result + 1);
      }
      v16 = v15 + 32 * v4;
      goto LABEL_14;
    }
  }
  v16 = v14 + 32;
LABEL_14:
  while (1) {
    if (v10 == v16) {
      v23 = *a3;
      if (v13 >= v23) {
        v26 = v13 - v23;
        v27 = __clz(v13 - v23 + 16);
        v24 = 28 - v27;
        v25 = *(_QWORD*)(*((_QWORD*)a3 + 2) + 8 * (27 - v27) + 8) +
              32LL * (unsigned int)(v26 - v8[28 - v27]);
      }
      else {
        v24 = 0;
        v25 = *((_QWORD*)a3 + 1) + 32 * v13;
      }
      v28 = *v7;
      v29 = 28LL - __clz(v6 - v28 + 16);
      if (v6 < v28) {
        v29 = 0;
      }
      if (v29 == v24) {
        break;
      }
      v6 = (unsigned int)v8[v29 + 1] + v28;
      v30 = v8[v29 + 1];
      v31 = __clz(v30 + 16);
      v32 = *(_QWORD*)(*((_QWORD*)v7 + 2) + 8 * (27 - v31) + 8);
      if (28 - v31 == v24) {
        v16 = v25 + 32;
      }
      else {
        v16 = (_DWORD)v31 == 28
                  ? *((_QWORD*)v7 + 1) + 32 * v28
                  : v32 + 32 * (16LL << (27 - (unsigned __int8)v31));
      }
      v10 = v32 + 32LL * (unsigned int)(v30 - v8[28 - v31]);
      if (v16 == v10) {
        break;
      }
    }
    if (v10 != v16) {
      v18 = (unsigned __int8*)(v10 + 16);
      do {
        v21 = *v18;
        if ((unsigned int)(v21 - 6) <= 4) {
          result = (unsigned int*)GameRoutine_6b55a0((__int64)v18, v21);
        }
        v22 = *(v18 - 16);
        if ((unsigned int)(v22 - 6) <= 4) {
          result = (unsigned int*)GameRoutine_6b55a0((__int64)(v18 - 16), v22);
        }
        v19 = v18 + 32;
        v20 = v18 + 16;
        v18 += 32;
      } while (v20 != (unsigned __int8*)v16);
      v10 = (__int64)(v19 - 16);
    }
  }
  return result;
}

__int64 GameHr_6b9520(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = a1[14];
  if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
    result = a1[17];
    if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
      result = a1[20];
      if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
        result = a1[23];
        if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
          result = a1[26];
          if (result == 0 || *(unsigned __int8*)(result + 72) >= 8u) {
            v3 = a1[5];
            if (v3 == 0 || *(_WORD*)(v3 + 16) == 0) {
              return 0;
            }
            result = *(_QWORD*)(v3 + 64);
            if (result != 0) {
              goto LABEL_14;
            }
            v7 = *(_QWORD*)(v3 + 304);
            if (v7 != 0) {
              v8 = *(_QWORD*)(v3 + 304);
              result = GameRoutine_127be60(&v8);
              if (result != 0) {
                goto LABEL_14;
              }
              v7 = *(_QWORD*)(v3 + 64);
            }
            result = v7 != 0 ? v7 : GameData_21c9988;
            if (result != 0) {
            LABEL_14:
              v4 = *(unsigned __int16*)(result + 128);
              if (*(_WORD*)(result + 128) != 0) {
                v5 = (__int64*)(*(_QWORD*)(result + 136) + 8LL);
                do {
                  v6 = *v5;
                  v5 += 2;
                  result = v6;
                  if (*(unsigned __int8*)(v6 + 72) <= 7u) {
                    break;
                  }
                  --v4;
                  result = 0;
                } while (v4 != 0);
                return result;
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_6c1760(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  bool v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE v38[32];
  _BYTE* v39;

  v2 = a1;
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                  24LL * *(unsigned __int8*)(a1 + 16) + 556000);
  if (v3 != 0) {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      while (1) {
        v7 = v3;
        v3 = *(_QWORD*)(v3 + 432);
        if ((unsigned __int64)v5 >= v6) {
          break;
        }
        *(_QWORD*)v5 = v7;
        v5 += 8;
        if (v3 == 0) {
          goto LABEL_22;
        }
      }
      v8 = (char*)(v5 - v4);
      v9 = (v5 - v4) >> 3;
      v10 = v9 + 1;
      if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
        GameRoutine_6c1f60();
      }
      if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
        v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
      }
      if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
        v11 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v11 = v10;
      }
      if (v11 != 0) {
        if (v11 >> 61 != 0) {
          GameRoutine_60a210(a1);
        }
        v12 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v11, 16, 0);
      }
      else {
        v12 = 0;
      }
      v6 = v12 + 8 * v11;
      v13 = (char*)(v5 - v4);
      v14 = (__int64)&v8[v12 + -8 * v9];
      *(_QWORD*)&v8[v12] = v7;
      v5 = &v8[v12 + 8];
      a1 = GameRoutine_1a0b950(v14, v4, v13);
      if (v4 != nullptr) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v15 = 56;
        }
        a1 = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v4);
      }
      v4 = (char*)v14;
    } while (v3 != 0);
  }
  else {
    v5 = nullptr;
    v4 = nullptr;
  }
LABEL_22:
  v16 = *(_QWORD*)(a2 + 32);
  if (v16 != 0) {
    if (v16 == a2) {
      v39 = v38;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v16 + 24LL))(v16, v38);
    }
    else {
      v39 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    }
  }
  else {
    v39 = nullptr;
  }
  if ((v5 - v4) >> 3 < 129) {
    v20 = 0;
  LABEL_33:
    GameRoutine_6c1f80(v4, v5, v38, (v5 - v4) >> 3, 0, v20);
  }
  else {
    v17 = (v5 - v4) >> 3;
    v18 = GameData_212c060;
    while (1) {
      v19 = GameRoutine_1a09d20(8 * v17, v18);
      if (v19 != 0) {
        break;
      }
      v20 = v17 >> 1;
      v21 = v17 > 1;
      v17 >>= 1;
      if (!v21) {
        goto LABEL_33;
      }
    }
    v22 = v19;
    GameRoutine_6c1f80(v4, v5, v38, (v5 - v4) >> 3, v19, v17);
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v23 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v23, v22);
  }
  result = (__int64)v39;
  if (v39 == v38) {
    v25 = 32;
  }
  else {
    if (v39 == nullptr) {
      goto LABEL_42;
    }
    v25 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + v25))((__int64)v39);
LABEL_42:
  if (v4 != v5) {
    v26 = v4;
    while (1) {
      v27 = *(_QWORD*)v26;
      v28 = *(_QWORD*)(*(_QWORD*)v26 + 424LL);
      v29 = *(_QWORD*)(*(_QWORD*)v26 + 432LL);
      if (v29 != 0) {
        *(_QWORD*)(v29 + 424) = v28;
        if (v28 == 0) {
          goto LABEL_51;
        }
      }
      else {
        *(_QWORD*)(v2 + 8) = v28;
        if (v28 == 0 ||
            (*(_QWORD*)(v28 + 432) = 0, (v28 = *(_QWORD*)(v27 + 424)) == 0)) {
        LABEL_51:
          v30 = *(_QWORD*)(v27 + 432);
          *(_QWORD*)v2 = v30;
          if (v30 != 0) {
            *(_QWORD*)(v30 + 424) = 0;
          }
          goto LABEL_45;
        }
      }
      *(_QWORD*)(v28 + 432) = *(_QWORD*)(v27 + 432);
    LABEL_45:
      v26 += 8;
      *(_QWORD*)(v27 + 424) = 0;
      *(_QWORD*)(v27 + 432) = 0;
      if (v26 == v5) {
        v31 = v4;
        v32 = GameData_21ca310;
        do {
          v33 = *(_QWORD*)v31;
          if (*(unsigned __int8*)(v2 + 16) >= 0xAu) {
            v34 = 0;
          }
          else {
            v34 = *(_QWORD*)(v32 + 56) + 24LL * *(unsigned __int8*)(v2 + 16) +
                  556000;
          }
          *(_QWORD*)(v33 + 440) = v34;
          v35 = *(_QWORD*)(v2 + 8);
          if (v35 != 0) {
            *(_QWORD*)(v35 + 432) = v33;
            *(_QWORD*)(v33 + 424) = v35;
          }
          else {
            *(_QWORD*)v2 = v33;
          }
          v31 += 8;
          *(_QWORD*)(v2 + 8) = v33;
        } while (v31 != v5);
        break;
      }
    }
  }
  if (v4 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v36 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v36, v4);
  }
  return result;
}

void GameHr_6c7cb0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  int v5;
  int v6;
  long double v7;
  long double v8;
  int v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  long double v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  _QWORD v19[4];
  _QWORD* v20;
  char v21;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca280,
                            memory_order_acquire) &
       1) == 0) {
    v18 = a3;
    v16 = a2;
    v17 = GameRoutine_1a09fd0(&GameData_21ca280);
    a3 = v18;
    a2 = v16;
    if (v17 != 0) {
      GameData_21ca278 = (__int64)&GameData_1af4ee7;
      GameData_21ca270 = GameRoutine_7a86e0(&GameData_1af4ee7);
      GameRoutine_1a09fe0(&GameData_21ca280);
      a3 = v18;
      a2 = v16;
    }
  }
  if (GameData_21ca2f8 == 0) {
    return;
  }
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) == 0 ||
      (*(_BYTE*)(GameData_21ca2f8 + *(unsigned __int8*)(GameData_21ca2f8 + 24) +
                 16) != 1
           ? (v4 = 0)
           : (v4 = *(unsigned __int8*)(GameData_21ca2f8 + 24)),
       (v5 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL)) == (_DWORD)v4)) {
  LABEL_11:
    v6 = *(_DWORD*)(a1 + 416);
    if ((v6 & 0x1000) == 0) {
      return;
    }
  LABEL_12:
    *(_DWORD*)(a1 + 416) = v6 & 0xFFFFEFFF;
    *(float*)&v7 = GameRoutine_764490();
    if (*(float*)&v7 <= 0.0) {
      return;
    }
    v9 = *(unsigned __int8*)(a1 + 176);
    v10 = *(float*)&v7;
    LODWORD(v19[0]) = 0;
    if (v9 == 1) {
      v11 = *(_QWORD*)(a1 + 152);
      *(_QWORD*)&v7 = 0;
    }
    else {
      if (*(float*)(a1 + 160) <= 0.0) {
        if (((*(__int64 (**)(__int64, _QWORD*, __int64))(
                 *(_QWORD*)(a1 + 152) + 8LL))(a1 + 152, v19, a1 + 184) &
             1) != 0) {
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
          LODWORD(v14) = v19[0];
          (*(void (**)(__int64, long double, long double))(
              *(_QWORD*)(a1 + 152) + 24LL))(a1 + 152, v15, v14);
        LABEL_18:
          *(_QWORD*)(a1 + 160) = 0;
          *(_WORD*)(a1 + 176) = 256;
          *(_WORD*)(a1 + 20) |= 8u;
        }
        GameRoutine_81aee0(a1, v10);
        return;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 152) + 16LL))(a1 + 152);
      v11 = *(_QWORD*)(a1 + 152);
    }
    *(_QWORD*)&v8 = 0;
    (*(void (**)(__int64, long double, long double))(v11 + 24))(a1 + 152, v7,
                                                                v8);
    goto LABEL_18;
  }
  if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
    if (v5 == 3 && (_DWORD)v4 == 0) {
      goto LABEL_11;
    }
  }
  else if ((_DWORD)v4 == 3) {
    goto LABEL_11;
  }
  v21 = 0;
  v20 = v19;
  v12 = *(_QWORD*)(*GameData_212ce98[0] + 160) + (v4 << 7);
  v19[0] = GameData_1f94310;
  v19[1] = v12 + 8;
  v19[2] = &v21;
  GameRoutine_6c8a80(a1, a2, a3, v19);
  if (v20 == v19) {
    v13 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_29;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v20 + v13))((__int64)v20);
LABEL_29:
  v6 = *(_DWORD*)(a1 + 416);
  if (v21 == 1) {
    if ((v6 & 0x1000) != 0) {
      goto LABEL_12;
    }
  }
  else if ((v6 & 0x1000) == 0) {
    *(_DWORD*)(a1 + 416) = v6 | 0x1000;
  }
}

__int64 GameHr_6c9cf0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  char v16;

  if (a2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a2 + 440);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v4 + 16);
  }
  else {
    v5 = 9;
  }
  v7 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL);
  if ((_DWORD)v7 == v5) {
    return 1;
  }
  if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
    if (v5 == 0 && (_DWORD)v7 == 3) {
      return 1;
    }
  }
  else if (v5 == 3) {
    return 1;
  }
  if (*GameData_212ce90[0] == 0 ||
      (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
    return 1;
  }
  v14 = v2;
  v15 = v3;
  v8 = (unsigned int)*(char*)(a2 + 585);
  v16 = 0;
  v13 = v12;
  v9 = *(_QWORD*)(*GameData_212ce98[0] + 160) + (v7 << 7) + 8;
  v10 = *(char*)(a2 + 584);
  v12[0] = GameData_1f94310;
  v12[1] = v9;
  v12[2] = &v16;
  GameRoutine_6c8a80(a2, v10, v8, v12);
  if (v13 == v12) {
    v11 = 32;
    goto LABEL_19;
  }
  if (v13 != nullptr) {
    v11 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v13 + v11))((__int64)v13);
  }
  return v16 & 1;
}

__int64 GameHr_6cbdc0(_QWORD* a1, _DWORD* a2, unsigned __int16* a3, int a4)
{
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 v18;
  char v19;
  bool v20;
  bool v22;
  __int64 v24;
  int v25;
  bool v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD v32[4];
  _QWORD* v33;
  unsigned int v34;
  _QWORD v35[4];
  _QWORD* v36;
  _QWORD v37[4];
  _QWORD* v38;

  v34 = 0;
  v8 = GameRoutine_6cbca0();
  v9 = *a2 & 0xFFFLL;
  if ((*a2 & 0xFFF) != 0) {
    v10 = *(char*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v9) +
                   276LL);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v9) +
                  276LL) != 0) {
      v11 = a1[218];
      v12 = ((unsigned __int64)(unsigned int)GameData_21d9860 >> 5) & 0x7F;
      if (v12 + 1 <= (a1[219] - v11) >> 2 &&
          ((*(_DWORD*)(v11 + 4LL * (unsigned int)v12) >> GameData_21d9860) &
           1) != 0) {
        v10 = 0;
      }
      else {
        v13 = a1[55];
        if (v13 != 0) {
          v14 = *(_BYTE*)(v13 + 16);
        }
        else {
          v14 = 9;
        }
        if (((1 << v14) & 6) != 0) {
          v10 = 0;
        }
      }
    }
    v34 = v10;
  }
  else {
    v10 = 0;
  }
  if (a4 >= 1) {
    v10 += v8 * a4 *
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8LL * *a3) +
                               90LL);
    v34 = v10;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (unsigned int)v9);
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v15 + 104)) & 1) ==
      0) {
    goto LABEL_22;
  }
  v16 = *(unsigned __int8*)(v15 + 106);
  if (*(_BYTE*)(v15 + 106) == 0 || v16 == 6) {
    v18 = *(_QWORD*)(v15 + 576);
    if (v18 != 0) {
      goto LABEL_25;
    }
  LABEL_22:
    v19 = 0;
    v20 = false;
    goto LABEL_38;
  }
  if (v16 != 1) {
    v18 = *(_QWORD*)(v15 + 576);
    v22 = false;
    v19 = 0;
    v20 = false;
    if (v18 == 0) {
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  v18 = *(_QWORD*)(v15 + 576);
  if (v18 == 0) {
    v20 = false;
    v19 = 1;
    goto LABEL_38;
  }
LABEL_25:
  v22 = *(unsigned __int8*)(v18 + 72) < 8u && *(_BYTE*)(v18 + 73) == 1;
LABEL_32:
  v19 = v22;
  v20 = *(unsigned __int8*)(v18 + 72) < 8u && *(_BYTE*)(v18 + 73) == 7;
LABEL_38:
  v24 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a3);
  v25 = *(unsigned __int8*)(v24 + 73);
  v26 = *(unsigned __int8*)(v24 + 72) < 8u;
  v27 = v25 == 1 && *(unsigned __int8*)(v24 + 72) < 8u;
  if (v25 != 7) {
    v26 = false;
  }
  if (v26 || (v19 & 1) != 0 || v20 || v27) {
    v32[1] = v8;
    v32[2] = &v34;
    v32[0] = GameData_1f915e8;
    v33 = v32;
    v35[0] = GameData_1f93088;
    v35[1] = v32;
    v36 = v35;
    v37[2] = v35;
    v38 = v37;
    v37[0] = GameData_1f92f88;
    v37[1] = 13;
    GameRoutine_710540((char*)a1 + 828, v37);
    if (v38 == v37) {
      v28 = 32;
    }
    else {
      if (v38 == nullptr) {
        goto LABEL_52;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v38 + v28))((__int64)v38);
  LABEL_52:
    if (v36 == v35) {
      v29 = 32;
    }
    else {
      if (v36 == nullptr) {
        goto LABEL_57;
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*v36 + v29))((__int64)v36);
  LABEL_57:
    if (v33 == v32) {
      v30 = 32;
    }
    else {
      if (v33 == nullptr) {
        return v34;
      }
      v30 = 40;
    }
    (*(void (**)(__int64))(*v33 + v30))((__int64)v33);
    return v34;
  }
  return v10;
}

__int64 GameHr_6e0bc0(__int64 a1, char a2)
{
  int v4;
  char v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 result;
  _QWORD v20[4];
  _QWORD* v21;

  LOBYTE(v20[0]) = 0;
  v4 = GameRoutine_6dd190(a1, v20, 1);
  v5 = *(_BYTE*)(a1 + 498);
  v6 = v4;
  *(_BYTE*)(a1 + 498) = a2;
  v7 = GameRoutine_9a28e0(47);
  if (GameData_21caab0 != 0 &&
      (v8 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), v7)) != 0 &&
      *(_DWORD*)(v8 + 32) != 0) {
    v20[0] = GameData_1f91f68;
    v20[1] = a1;
    v21 = v20;
    GameRoutine_8c5700(a1, v20);
  }
  else {
    v20[0] = GameData_1f91ff8;
    v20[1] = a1;
    v21 = v20;
    GameRoutine_8c5c60(a1, v20);
  }
  if (v21 == v20) {
    v9 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_11;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v21 + v9))((__int64)v21);
LABEL_11:
  *(_BYTE*)(a1 + 498) = v5;
  LOBYTE(v20[0]) = 0;
  v10 = GameRoutine_6dd190(a1, v20, 1);
  if (v10 > v6) {
    v11 = *(__int16*)(a1 + 492);
    LOBYTE(v20[0]) = 0;
    v12 = v10 - v6 + v11;
    v13 = GameRoutine_6dd190(a1, v20, 1);
    if (*(_WORD*)(a1 + 494) != 0 && v12 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v13 >= v12) {
      v14 = v12;
    }
    else {
      v14 = v13;
    }
    if (v12 < 0) {
      v14 = 0;
    }
    if (v14 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v14;
    }
  }
  v15 = *(_DWORD*)(a1 + 448);
  GameRoutine_1a09b70(&GameData_2166898);
  v16 = v15 ^ (v15 >> 30);
  v17 =
      1812433253 * ((1812433253 * ((1812433253 * v16) ^
                                   ((unsigned int)(1812433253 * v16) >> 30)) +
                     1) ^
                    ((1812433253 * ((1812433253 * v16) ^
                                    ((unsigned int)(1812433253 * v16) >> 30)) +
                      1) >>
                     30)) +
      2;
  v18 = 1812433253 * (v17 ^ (v17 >> 30)) + 3;
  GameRoutine_1a09b80(&GameData_2166898);
  GameRoutine_1a09b70(&GameData_2166898);
  result = GameRoutine_1a09b80(&GameData_2166898);
  *(_DWORD*)(a1 + 448) =
      ((((1011558400 * v16) ^ (unsigned int)(1812433253 * v16)) >> 8) ^
       (v18 >> 19) ^ (1011558400 * v16) ^ (1812433253 * v16) ^ v18) &
      0x7FFFFFFF;
  return result;
}

__int64 GameHr_6e9a40(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 primeEm;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  char* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  signed __int64 v47;
  bool v48;
  signed __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  signed __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  char* v63;
  char* v64;
  char* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;

  v2 = (_QWORD*)GameData_212bf68;
  v3 = 556000;
  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 556336, 16, 0);
  GameRoutine_1a0ba50(v4, 0, 556336, v5, v6, v7);
  v8 = v4;
  do {
    GameRoutine_6c2b50(v8);
    v3 -= 2224;
    v8 += 2224;
  } while (v3 != 0);
  *(_QWORD*)(v4 + 556256) = 0;
  *(_QWORD*)(v4 + 556264) = 0;
  *(_QWORD*)(v4 + 556240) = 0;
  *(_QWORD*)(v4 + 556248) = 0;
  *(_DWORD*)(v4 + 556272) = 1065353216;
  primeEm = GameRoutine_1a09d00(250);
  v10 = *(_QWORD*)(v4 + 556248);
  v11 = primeEm;
  if (primeEm > v10) {
    goto LABEL_4;
  }
  if (primeEm < v10) {
    v12 = vcvtps_u32_f32((float)*(unsigned __int64*)(v4 + 556264) /
                         *(float*)(v4 + 556272));
    if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
      v12 = GameRoutine_1a09d00(v12);
    }
    else {
      v13 = 1LL << -(char)__clz(v12 - 1);
      if (v12 >= 2) {
        v12 = v13;
      }
    }
    if (v11 <= v12) {
      v11 = v12;
    }
    if (v11 < v10) {
    LABEL_4:
      GameRoutine_6ec7a0(v4 + 556240, v11);
    }
  }
  v14 = *v2;
  *(_QWORD*)(v4 + 556296) = 0;
  *(_QWORD*)(v4 + 556304) = 0;
  *(_QWORD*)(v4 + 556280) = 0;
  *(_QWORD*)(v4 + 556288) = 0;
  v15 = GameRoutine_651b90(v14, 2000, 16, 0);
  v16 = v15 + 2000;
  *(_QWORD*)(v4 + 556312) = v15;
  *(_QWORD*)(v4 + 556328) = v15 + 2000;
  v20 = GameRoutine_1a0ba50(v15, 0, 2000, v17, v18, v19);
  v21 = (char*)a1[2];
  v22 = (__int64*)a1[3];
  *(_QWORD*)(v4 + 556320) = v16;
  v23 = (char*)v22 - v21;
  if (v22 == (__int64*)v21) {
    v24 = 0;
  }
  else {
    v24 = (((char*)v22 - v21) << 6) - 1;
  }
  v25 = a1[5];
  if (v24 == a1[6] + v25) {
    v26 = v25 >= 0x200;
    v27 = v25 - 512;
    if (v26) {
      a1[5] = v27;
      v28 = *(_QWORD*)v21;
      a1[2] = v21 + 8;
    LABEL_22:
      GameRoutine_6eca40(a1 + 1, v28);
      goto LABEL_44;
    }
    v29 = (char*)a1[1];
    v30 = (char*)a1[4];
    if (v23 < (unsigned __int64)(v30 - v29)) {
      v20 = GameRoutine_651b90(*v2, 4096, 16, 0);
      if (v30 != (char*)v22) {
        *v22 = v20;
        a1[3] += 8LL;
        goto LABEL_44;
      }
      if (v21 != v29) {
        v35 = v21;
      LABEL_75:
        *((_QWORD*)v35 - 1) = v20;
        v68 = a1[2];
        a1[2] = v68 - 8;
        v28 = *(_QWORD*)(v68 - 8);
        a1[2] = v68;
        goto LABEL_22;
      }
      if (v22 == (__int64*)v21) {
        v58 = 1;
      }
      else {
        v58 = (v30 - v21) >> 2;
      }
      if (v58 >> 61 == 0) {
        v59 = v20;
        v60 = GameRoutine_651b90(*v2, 8 * v58, 16, 0);
        v61 = v60 + 8 * v58;
        v62 = v60;
        v35 = (char*)(v60 + ((2 * v58 + 6) & 0xFFFFFFFFFFFFFFF8LL));
        v20 = v59;
        v63 = v35;
        if (v22 != (__int64*)v21) {
          v63 = &v35[v23];
          v64 = v35;
          v65 = v21;
          do {
            v66 = *(_QWORD*)v65;
            v65 += 8;
            v23 -= 8;
            *(_QWORD*)v64 = v66;
            v64 += 8;
          } while (v23 != 0);
        }
        a1[1] = v62;
        a1[2] = v35;
        a1[3] = v63;
        a1[4] = v61;
        if (v21 != nullptr) {
          v67 = 128;
          if (*(_QWORD*)(*v2 + 200LL) == 0) {
            v67 = 56;
          }
          GameRoutine_1a0a4e0(*v2 + v67, v29);
          v35 = (char*)a1[2];
          v20 = v59;
        }
        goto LABEL_75;
      }
    LABEL_76:
      GameRoutine_60a210(v20);
    }
    if (v30 == v29) {
      v31 = 1;
    }
    else {
      v31 = (v30 - v29) >> 2;
    }
    if (v31 >> 61 != 0) {
      goto LABEL_76;
    }
    v32 = GameRoutine_651b90(*v2, 8 * v31, 16, 0);
    v33 = (__int64*)(v32 + v23);
    v34 = (__int64*)(v32 + 8 * v31);
    v20 = GameRoutine_651b90(*v2, 4096, 16, 0);
    if (v23 == 8 * v31) {
      if (v22 == (__int64*)v21) {
        v36 = v20;
        v33 = (__int64*)GameRoutine_651b90(*v2, 8, 16, 0);
        v34 = v33 + 1;
        v37 = 128;
        if (*(_QWORD*)(*v2 + 200LL) == 0) {
          v37 = 56;
        }
        GameRoutine_1a0a4e0(*v2 + v37, v32);
        v20 = v36;
        v21 = (char*)a1[2];
        v22 = (__int64*)a1[3];
        v32 = (__int64)v33;
      }
      else {
        v33 -=
            ((v23 >> 3) + 1 + ((unsigned __int64)((v23 >> 3) + 1) >> 63)) >> 1;
      }
    }
    *v33 = v20;
    v38 = v33 + 1;
    if (v22 != (__int64*)v21) {
      while (1) {
        if (v33 == (__int64*)v32) {
          if (v38 >= v34) {
            if (v34 == v33) {
              v50 = 1;
            }
            else {
              v50 = ((char*)v34 - (char*)v33) >> 2;
            }
            if (v50 >> 61 != 0) {
              goto LABEL_76;
            }
            v51 = GameRoutine_651b90(*v2, 8 * v50, 16, 0);
            v52 = v51;
            v45 = (__int64*)(v51 + ((2 * v50 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v53 = (char*)v38 - (char*)v33;
            v48 = v38 == v33;
            v38 = v45;
            if (!v48) {
              v38 = (__int64*)((char*)v45 + v53);
              v54 = (_QWORD*)(v51 + ((2 * v50 + 6) & 0xFFFFFFFFFFFFFFF8LL));
              do {
                v55 = *v33++;
                v53 -= 8LL;
                *v54++ = v55;
              } while (v53 != 0);
            }
            v34 = (__int64*)(v51 + 8 * v50);
            v56 = 128;
            if (*(_QWORD*)(*v2 + 200LL) == 0) {
              v56 = 56;
            }
            v20 = GameRoutine_1a0a4e0(*v2 + v56, v32);
            v32 = v52;
          }
          else {
            v47 = (char*)v38 - (char*)v33;
            v49 = (char*)v38 - (char*)v33;
            v48 = v38 == v33;
            v38 +=
                (v34 - v38 + 1 + ((unsigned __int64)(v34 - v38 + 1) >> 63)) >>
                1;
            v45 = (__int64*)((char*)v38 - v47);
            if (!v48) {
              v20 = GameRoutine_1a0b940((char*)v38 - v47, v33, v49);
            }
          }
        }
        else {
          v45 = v33;
        }
        v46 = *--v22;
        *(v45 - 1) = v46;
        v39 = v45 - 1;
        v33 = v39;
        if (v22 == (__int64*)a1[2]) {
          goto LABEL_40;
        }
      }
    }
    v39 = v33;
  LABEL_40:
    v40 = a1[1];
    a1[1] = v32;
    a1[2] = v39;
    a1[3] = v38;
    a1[4] = v34;
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v41 = 56;
      }
      GameRoutine_1a0a4e0(*v2 + v41, v40);
    }
  }
LABEL_44:
  v42 = a1[6] + a1[5];
  *(_QWORD*)(*(_QWORD*)(a1[2] + 8 * (v42 >> 9)) + 8 * (v42 & 0x1FF)) = v4;
  v43 = a1[6];
  a1[6] = v43 + 1;
  if (v43 == -1) {
    v44 = 0;
  }
  else {
    v44 = *(_QWORD*)(*(_QWORD*)(a1[2] +
                                8 * ((unsigned __int64)(a1[5] + v43) >> 9)) +
                     8 * ((a1[5] + v43) & 0x1FF));
  }
  a1[7] = v44;
  return GameRoutine_6e9fa0();
}

unsigned __int64 GameHr_6ec020(unsigned __int64 result)
{
  unsigned __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64* v35;
  int v36;
  int v37;
  unsigned __int64* v38;
  __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  unsigned __int64 v44;
  __int64 v45;
  __int64*** v46;
  __int64** v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  unsigned __int64* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  float v56;
  float v57;
  float v58;
  _BOOL8 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;

  v1 = result + 552960;
  v2 = (_QWORD*)result;
  v3 = GameData_212bf68;
  if (*(_QWORD*)(result + 556264) != 0) {
    v4 = *(_QWORD**)(result + 556256);
    if (v4 != nullptr) {
      do {
        v5 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)v3 + v6, v4);
        v4 = v5;
      } while (v5 != nullptr);
    }
    v7 = *(_QWORD*)(v1 + 3288);
    *(_QWORD*)(v1 + 3296) = 0;
    if (v7 != 0) {
      v8 = v7 & 7;
      if (v7 >= 8) {
        v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(v2[69530] + 8 * v9) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 8) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 16) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 24) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 32) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 40) = 0;
          *(_QWORD*)(v2[69530] + 8 * v9 + 48) = 0;
          v11 = v2[69530] + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(v2[69530] + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    *(_QWORD*)(v1 + 3304) = 0;
  }
  v13 = *(unsigned __int64**)(v1 + 3352);
  v14 = 250;
  v15 = (unsigned __int64)v2;
  v16 = v2 + 69535;
  v2[69537] = 0;
  v2[69538] = 0;
  v2[69535] = 0;
  v2[69536] = 0;
  *(_QWORD*)(v1 + 3360) = v13;
  do {
    if (*(_QWORD*)(v15 + 392) != 0) {
      v17 = *(unsigned __int8*)(v15 + 2088);
      if (*(_BYTE*)(v15 + 2088) != 0) {
        v18 = v17 >> 5;
        v19 = *((_DWORD*)v16 + (v17 >> 5));
        v20 = 1 << v17;
        if ((v19 & v20) == 0) {
          *((_DWORD*)v16 + v18) = v19 | v20;
        }
        goto LABEL_18;
      }
      v28 = *(_QWORD*)(v1 + 3368);
      if ((unsigned __int64)v13 < v28) {
      LABEL_17:
        *v13++ = v15;
        *(_QWORD*)(v1 + 3360) = v13;
        goto LABEL_18;
      }
      v22 = *(_QWORD*)(v1 + 3352);
      v23 = (char*)v13 - v22;
      v24 = ((__int64)v13 - v22) >> 3;
      v29 = v24 + 1;
      if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      LABEL_146:
        GameRoutine_6c1f60();
      }
      v30 = v28 - v22;
      if (v30 >> 2 > v29) {
        v29 = v30 >> 2;
      }
      if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
        v27 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v27 = v29;
      }
      if (v27 == 0) {
      LABEL_43:
        v31 = 0;
        goto LABEL_44;
      }
      if (v27 >> 61 != 0) {
      LABEL_147:
        GameRoutine_60a210(result);
      }
    }
    else {
      v21 = *(_QWORD*)(v1 + 3368);
      if ((unsigned __int64)v13 < v21) {
        goto LABEL_17;
      }
      v22 = *(_QWORD*)(v1 + 3352);
      v23 = (char*)v13 - v22;
      v24 = ((__int64)v13 - v22) >> 3;
      v25 = v24 + 1;
      if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
        goto LABEL_146;
      }
      v26 = v21 - v22;
      if (v26 >> 2 > v25) {
        v25 = v26 >> 2;
      }
      if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
        v27 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v27 = v25;
      }
      if (v27 == 0) {
        goto LABEL_43;
      }
      if (v27 >> 61 != 0) {
        goto LABEL_147;
      }
    }
    v31 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v27, 16, 0);
  LABEL_44:
    v32 = v31 + 8 * v27;
    v33 = (__int64)&v23[v31 + -8 * v24];
    *(_QWORD*)&v23[v31] = v15;
    v13 = (unsigned __int64*)&v23[v31 + 8];
    result = GameRoutine_1a0b950(v33, v22, v23);
    *(_QWORD*)(v1 + 3352) = v33;
    *(_QWORD*)(v1 + 3360) = v13;
    *(_QWORD*)(v1 + 3368) = v32;
    if (v22 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v34 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v34, v22);
    }
    *(_QWORD*)(v1 + 3360) = v13;
  LABEL_18:
    --v14;
    v15 += 2224LL;
  } while (v14 != 0);
  v35 = *(unsigned __int64**)(v1 + 3352);
  if (v35 != v13) {
    v36 = 1;
    do {
      if (v36 <= 255) {
        v37 = v36;
        while (((1 << v37) & *((_DWORD*)v16 + (v37 >> 5))) != 0) {
          if (++v37 == 256) {
            goto LABEL_51;
          }
        }
        if (v37 != 0) {
          *(_BYTE*)(*v35 + 2088) = v37;
          *((_DWORD*)v16 + ((__int64)v37 >> 5)) |= 1 << v37;
          v36 = v37;
        }
      }
    LABEL_51:
      ++v35;
    } while (v35 != v13);
  }
  v38 = (unsigned __int64*)(v1 + 3296);
  v39 = 0;
  while (2) {
    v40 = *(_QWORD*)(v1 + 3288);
    v41 = &v2[278 * v39];
    v42 = *((unsigned __int8*)v41 + 2088);
    if (v40 == 0 || *(_QWORD*)(v1 + 3304) == 0) {
    LABEL_65:
      if (v40 != 0) {
        goto LABEL_82;
      }
    }
    else {
      v44 = v40 - 1;
      if ((v40 & (v40 - 1)) != 0) {
        v45 = *((unsigned __int8*)v41 + 2088);
        if (v40 <= v42) {
          v45 = (unsigned int)v42 % (unsigned int)v40;
        }
      }
      else {
        v45 = ((_DWORD)v40 - 1) & (unsigned int)v42;
      }
      v46 = *(__int64****)(v2[69530] + 8 * v45);
      if (v46 != nullptr) {
        v47 = *v46;
        if (v47 != nullptr) {
          if ((v40 & v44) == 0) {
            while (1) {
              v50 = v47[1];
              if (v50 == (__int64*)v42) {
                if (*((unsigned __int8*)v47 + 16) == (_DWORD)v42) {
                  goto LABEL_144;
                }
              }
              else if (((unsigned __int64)v50 & v44) != v45) {
                goto LABEL_65;
              }
              v47 = (__int64**)*v47;
              if (v47 == nullptr) {
                goto LABEL_65;
              }
            }
          }
          while (1) {
            v48 = (unsigned __int64)v47[1];
            if (v48 == v42) {
              if (*((unsigned __int8*)v47 + 16) == (_DWORD)v42) {
                goto LABEL_144;
              }
            }
            else {
              if (v48 >= v40) {
                v48 %= v40;
              }
              if (v48 != v45) {
                goto LABEL_65;
              }
            }
            v47 = (__int64**)*v47;
            if (v47 == nullptr) {
              goto LABEL_65;
            }
          }
        }
      }
    LABEL_82:
      v49 = v40 - 1;
      if ((v40 & (v40 - 1)) != 0) {
        v15 = *((unsigned __int8*)v41 + 2088);
        if (v40 <= v42) {
          v15 = (unsigned int)v42 % (unsigned int)v40;
        }
      }
      else {
        v15 = ((_DWORD)v40 - 1) & (unsigned int)v42;
      }
      v51 = *(unsigned __int64**)(v2[69530] + 8 * v15);
      if (v51 != nullptr) {
        v52 = *v51;
        if (*v51 != 0) {
          if ((v40 & v49) == 0) {
            while (1) {
              v54 = *(_QWORD*)(v52 + 8);
              if (v54 == v42) {
                if (*(unsigned __int8*)(v52 + 16) == (_DWORD)v42) {
                  goto LABEL_143;
                }
              }
              else if ((v54 & v49) != v15) {
                goto LABEL_106;
              }
              v52 = *(_QWORD*)v52;
              if (v52 == 0) {
                goto LABEL_106;
              }
            }
          }
          do {
            v53 = *(_QWORD*)(v52 + 8);
            if (v53 == v42) {
              if (*(unsigned __int8*)(v52 + 16) == (_DWORD)v42) {
                goto LABEL_143;
              }
            }
            else {
              if (v53 >= v40) {
                v53 %= v40;
              }
              if (v53 != v15) {
                break;
              }
            }
            v52 = *(_QWORD*)v52;
          } while (v52 != 0);
        }
      }
    }
  LABEL_106:
    result = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v55 = *(_QWORD*)(v1 + 3304);
    v56 = *(float*)(v1 + 3312);
    v52 = result;
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = v42;
    *(_BYTE*)(result + 16) = v42;
    *(_QWORD*)(result + 24) = 0;
    v57 = (float)(unsigned __int64)(v55 + 1);
    if (v40 == 0 || (float)(v56 * (float)v40) < v57) {
      v58 = v57 / v56;
      v59 = (v40 & (v40 - 1)) != 0;
      if (v40 < 3) {
        v59 = true;
      }
      v60 = v59 | (2 * v40);
      v61 = vcvtps_u32_f32(v58);
      if (v60 <= v61) {
        v62 = v61;
      }
      else {
        v62 = v60;
      }
      if (v62 == 1) {
        v62 = 2;
      }
      else if ((v62 & (v62 - 1)) != 0) {
        result = GameRoutine_1a09d00(v62);
        v40 = *(_QWORD*)(v1 + 3288);
        v62 = result;
      }
      if (v62 > v40) {
        goto LABEL_118;
      }
      if (v62 < v40) {
        result = vcvtps_u32_f32((float)*(unsigned __int64*)(v1 + 3304) /
                                *(float*)(v1 + 3312));
        if (v40 < 3 || (v40 & (v40 - 1)) != 0) {
          result = GameRoutine_1a09d00(result);
        }
        else {
          v63 = 1LL << -(char)__clz(result - 1);
          if (result >= 2) {
            result = v63;
          }
        }
        if (v62 <= result) {
          v62 = result;
        }
        if (v62 < v40) {
        LABEL_118:
          result = GameRoutine_6ec7a0(v2 + 69530, v62);
        }
      }
      v40 = *(_QWORD*)(v1 + 3288);
      if ((v40 & (v40 - 1)) != 0) {
        if (v40 <= v42) {
          v15 = v42 % v40;
        }
        else {
          v15 = v42;
        }
      }
      else {
        v15 = ((_DWORD)v40 - 1) & (unsigned int)v42;
      }
    }
    v64 = v2[69530];
    v65 = *(unsigned __int64**)(v64 + 8 * v15);
    if (v65 != nullptr) {
      *(_QWORD*)v52 = *v65;
      *v65 = v52;
    }
    else {
      v66 = *v38;
      *v38 = v52;
      *(_QWORD*)v52 = v66;
      *(_QWORD*)(v64 + 8 * v15) = v38;
      if (*(_QWORD*)v52 != 0) {
        v67 = *(_QWORD*)(*(_QWORD*)v52 + 8LL);
        if ((v40 & (v40 - 1)) != 0) {
          if (v67 >= v40) {
            v67 %= v40;
          }
        }
        else {
          v67 &= v40 - 1;
        }
        *(_QWORD*)(v2[69530] + 8 * v67) = v52;
      }
    }
    ++*(_QWORD*)(v1 + 3304);
  LABEL_143:
    *(_QWORD*)(v52 + 24) = v41;
  LABEL_144:
    if (++v39 != 250) {
      continue;
    }
    return result;
  }
}

unsigned __int64 GameHr_6ed9a0(_QWORD* a1)
{
  unsigned __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 result;
  __int64 i;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  int v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  _QWORD* v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  __int64 v115;
  _QWORD* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  int v131;
  __int64 v132;
  _QWORD* v133;
  _QWORD* v134;
  _QWORD* v135;
  __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int64* v143;
  unsigned int** v144;
  __int64 v145;
  __int64 v146;
  _QWORD* v147;
  _QWORD* v148;
  __int64 v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v155;
  unsigned int** v156;
  __int64 v157;
  _QWORD* v158;
  unsigned __int64* v159;
  unsigned int* v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64** v164;
  __int64* v165;
  unsigned __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  unsigned __int64 v169;
  float v170;
  float v171;
  float v172;
  _BOOL8 v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  unsigned __int64* v179;
  unsigned __int64 v180;
  _QWORD* v181;
  unsigned __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  _QWORD* v187;
  __int64* v188;
  __int64* v189;
  _QWORD* v190;
  __int64* v191;
  _QWORD* v192;
  __int64 v193;
  __int64 v194;
  _QWORD* v196;
  _QWORD* v197;
  _QWORD* v198;
  __int64 v199;
  unsigned __int64 v200;
  unsigned __int64 v201;
  __int64 v202;
  __int64 v203;
  int v204;
  _QWORD* v205;
  __int64 v206;
  __int64* v207;
  int v208;

  GameData_21ca360 = GameData_21ca358;
  GameData_21ca378 = GameData_21ca370;
  v2 = GameData_21ca388;
  GameData_21ca390 = GameData_21ca388;
  GameData_21ca3a8 = GameData_21ca3a0;
  v3 = *(_QWORD**)(*GameData_212c878[0] + 72);
  v4 = (_QWORD*)GameData_212bf68;
  v5 = *(_QWORD**)(*GameData_212c878[0] + 64);
  if (v5 != v3) {
    v197 = *(_QWORD**)(*GameData_212c878[0] + 72);
    while (1) {
      v6 = *v5;
      v196 = v5;
      result = GameRoutine_6eeca0(*v5, *v5);
      v199 = v6;
      if (v6 != 0) {
        for (i = v6; i != 0; i = *(_QWORD*)(i + 296)) {
          v9 = *(_QWORD*)(i + 24);
          if (v9 == 0) {
            break;
          }
          if (*(_QWORD*)(v9 + 600) != 0) {
            break;
          }
          *(_QWORD*)(v9 + 600) = v6;
        }
        v10 = *(_QWORD**)(v6 + 24);
        if (v10 != nullptr) {
          v11 = v10[67];
          v12 = v10[66];
          if (v12 != v11) {
            v1 = v10[67];
            do {
              v14 = *(_QWORD*)(v1 - 56);
              v1 -= 56LL;
              v13 = v14;
              if (v14 != 0) {
                *(_QWORD*)(v11 - 48) = v13;
                if (*(_QWORD*)(*v4 + 200LL) != 0) {
                  v15 = 128;
                }
                else {
                  v15 = 56;
                }
                result = GameRoutine_1a0a4e0(*v4 + v15, v13);
              }
              v11 = v1;
            } while (v1 != v12);
          }
          v10[67] = v12;
          if (*(_QWORD*)(v6 + 296) != 0) {
            v208 = 0;
            v200 = 0;
            v16 = 0;
            v17 = 0;
            v18 = v6;
            v205 = v10;
            v207 = (__int64*)(v6 + 296);
            do {
              v19 = *(_QWORD*)(v18 + 312);
              if (v19 != 0) {
                v20 = *(_DWORD*)(v18 + 320);
                if (v17 == v16) {
                LABEL_27:
                  if (v16 >= v200) {
                    v22 = v16 - v17;
                    v23 = (__int64)(v16 - v17) >> 4;
                    v24 = v23 + 1;
                    if ((unsigned __int64)(v23 + 1) >> 60 != 0) {
                      goto LABEL_319;
                    }
                    if ((__int64)(v200 - v17) >> 3 > v24) {
                      v24 = (__int64)(v200 - v17) >> 3;
                    }
                    if (v200 - v17 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v25 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v25 = v24;
                    }
                    if (v25 != 0) {
                      if (v25 >> 60 != 0) {
                        goto LABEL_320;
                      }
                      v26 = GameRoutine_651b90(*v4, 16 * v25, 16, 0);
                    }
                    else {
                      v26 = 0;
                    }
                    v27 = v26 + v22;
                    v28 = v26 + v22 - 16 * v23;
                    v200 = v26 + 16 * v25;
                    *(_QWORD*)v27 = v19;
                    *(_DWORD*)(v27 + 8) = v20;
                    *(_DWORD*)(v27 + 12) = 0;
                    v16 = v26 + v22 + 16;
                    result = GameRoutine_1a0b950(v28, v17, v22);
                    if (v17 != 0) {
                      if (*(_QWORD*)(*v4 + 200LL) != 0) {
                        v29 = 128;
                      }
                      else {
                        v29 = 56;
                      }
                      result = GameRoutine_1a0a4e0(*v4 + v29, v17);
                    }
                    v17 = v28;
                  }
                  else {
                    *(_QWORD*)v16 = v19;
                    *(_DWORD*)(v16 + 8) = v20;
                    *(_DWORD*)(v16 + 12) = 0;
                    v16 += 16LL;
                  }
                }
                else {
                  v21 = v17;
                  while (*(_QWORD*)v21 != v19) {
                    v21 += 16;
                    if (v21 == v16) {
                      goto LABEL_27;
                    }
                  }
                  *(_DWORD*)(v21 + 8) += v20;
                }
              }
              v30 = v205;
              v31 = *(_DWORD*)(v18 + 324);
              v32 = v16 - v17;
              v206 = v17;
              if (v16 == v17) {
                v34 = 0;
                v35 = 0;
              }
              else {
                if ((v32 & 0x8000000000000000LL) != 0) {
                  goto LABEL_319;
                }
                v33 = GameRoutine_651b90(*v4, v16 - v17, 16, 0);
                v34 = v33 + v32;
                v35 = v33;
                result = GameRoutine_1a0b950(v33, v17, v16 - v17);
              }
              v36 = *(_QWORD*)(v18 + 312);
              v37 = *(_DWORD*)(v18 + 320);
              v38 = *(_QWORD*)(v18 + 328);
              v39 = v205[67];
              v208 += v31;
              v40 = *v207;
              v41 = v205[68];
              if (v39 >= v41) {
                v46 = (_QWORD*)v205[66];
                v203 = v36;
                v204 = v37;
                v47 = v39 - (_QWORD)v46;
                v48 = (__int64)(v39 - (_QWORD)v46) >> 3;
                v49 = 0x6DB6DB6DB6DB6DB7LL * v48 + 1;
                if (v49 > 0x492492492492492LL) {
                  GameRoutine_6f1320(result);
                }
                v4 = (_QWORD*)GameData_212bf68;
                v50 =
                    0x6DB6DB6DB6DB6DB7LL * ((__int64)(v41 - (_QWORD)v46) >> 3);
                if (2 * v50 > v49) {
                  v49 = 2 * v50;
                }
                if (v50 >= 0x249249249249249LL) {
                  v49 = 0x492492492492492LL;
                }
                v201 = v49;
                v202 = v38;
                if (v49 != 0) {
                  if (v49 > 0x492492492492492LL) {
                    goto LABEL_320;
                  }
                  result = GameRoutine_651b90(*(_QWORD*)GameData_212bf68,
                                              56 * v49, 16, 0);
                }
                else {
                  result = 0;
                }
                v51 = result + v47;
                v52 = v34 - v35;
                *(_QWORD*)(v51 + 8) = 0;
                *(_QWORD*)(v51 + 16) = 0;
                *(_QWORD*)v51 = 0;
                if (v52 != 0) {
                  if ((v52 & 0x8000000000000000LL) != 0) {
                  LABEL_319:
                    GameRoutine_6f0df0(result);
                  }
                  v53 = result;
                  v54 = GameRoutine_651b90(*v4, v52, 16, 0);
                  v55 = v54 + v52;
                  *(_QWORD*)v51 = v54;
                  *(_QWORD*)(v51 + 16) = v54 + v52;
                  GameRoutine_1a0b950(v54, v35, v52);
                  *(_QWORD*)(v51 + 8) = v55;
                  result = v53;
                  v47 = v39 - (_QWORD)v46;
                  v48 = (__int64)(v39 - (_QWORD)v46) >> 3;
                  v4 = (_QWORD*)GameData_212bf68;
                }
                *(_QWORD*)(v51 + 24) = v40;
                *(_QWORD*)(v51 + 32) = v203;
                *(_DWORD*)(v51 + 40) = v204;
                *(_DWORD*)(v51 + 44) = v208;
                *(_QWORD*)(v51 + 48) = v202;
                if (v46 == (_QWORD*)v39) {
                  v65 = v205;
                }
                else {
                  v56 = result;
                  v57 = v46;
                  v58 = (_QWORD*)(result + v39 - 8 * v48 - (_QWORD)v46 + 16);
                  do {
                    *(v58 - 1) = 0;
                    *v58 = 0;
                    *(v58 - 2) = *v57;
                    *(v58 - 1) = v57[1];
                    *v58 = v57[2];
                    v57[1] = 0;
                    v57[2] = 0;
                    *v57 = 0;
                    v59 = v57[3];
                    v60 = v57[4];
                    v61 = v57[5];
                    v62 = v57[6];
                    v57 += 7;
                    v58[3] = v61;
                    v58[4] = v62;
                    v58[1] = v59;
                    v58[2] = v60;
                    v58 += 7;
                  } while (v57 != (_QWORD*)v39);
                  do {
                    v63 = *v46;
                    if (*v46 != 0) {
                      v46[1] = v63;
                      if (*(_QWORD*)(*v4 + 200LL) != 0) {
                        v64 = 128;
                      }
                      else {
                        v64 = 56;
                      }
                      GameRoutine_1a0a4e0(*v4 + v64, v63);
                    }
                    v46 += 7;
                  } while (v46 != (_QWORD*)v39);
                  v65 = v205;
                  result = v56;
                  v46 = (_QWORD*)v205[66];
                }
                v17 = v206;
                v66 = v51 - v47;
                v1 = v51 + 56;
                v30 = v65;
                v65[66] = v66;
                v65[67] = v51 + 56;
                v65[68] = result + 56 * v201;
                if (v46 != nullptr) {
                  if (*(_QWORD*)(*v4 + 200LL) != 0) {
                    v67 = 128;
                  }
                  else {
                    v67 = 56;
                  }
                  result = GameRoutine_1a0a4e0(*v4 + v67, v46);
                }
              }
              else {
                v42 = v34 - v35;
                *(_QWORD*)(v39 + 8) = 0;
                *(_QWORD*)(v39 + 16) = 0;
                *(_QWORD*)v39 = 0;
                if (v34 != v35) {
                  if ((v42 & 0x8000000000000000LL) != 0) {
                    goto LABEL_319;
                  }
                  v43 = v40;
                  v44 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v42, 16,
                                           0);
                  v45 = v44 + v42;
                  *(_QWORD*)v39 = v44;
                  *(_QWORD*)(v39 + 8) = v44;
                  *(_QWORD*)(v39 + 16) = v44 + v42;
                  result = GameRoutine_1a0b950(v44, v35, v42);
                  *(_QWORD*)(v39 + 8) = v45;
                  v40 = v43;
                }
                *(_QWORD*)(v39 + 24) = v40;
                *(_QWORD*)(v39 + 32) = v36;
                *(_QWORD*)(v39 + 48) = v38;
                v1 = v39 + 56;
                *(_DWORD*)(v39 + 40) = v37;
                *(_DWORD*)(v39 + 44) = v208;
                v17 = v206;
                v4 = (_QWORD*)GameData_212bf68;
              }
              v30[67] = v1;
              v18 = *v207;
              if (v35 != 0) {
                if (*(_QWORD*)(*v4 + 200LL) != 0) {
                  v68 = 128;
                }
                else {
                  v68 = 56;
                }
                result = GameRoutine_1a0a4e0(*v4 + v68, v35);
              }
              v207 = (__int64*)(v18 + 296);
            } while (*(_QWORD*)(v18 + 296) != 0);
            v6 = v199;
            if (v17 != 0) {
              if (*(_QWORD*)(*v4 + 200LL) != 0) {
                v69 = 128;
              }
              else {
                v69 = 56;
              }
              result = GameRoutine_1a0a4e0(*v4 + v69, v17);
            }
          }
        }
      }
      v70 = v197;
      if (*(_WORD*)(v6 + 16) == 0) {
        goto LABEL_126;
      }
      if ((((0x10000000000LL << *(_BYTE*)(v6 + 72)) |
            (1LL << *(_BYTE*)(v6 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        break;
      }
      v73 = GameData_21ca378;
      if (GameData_21ca378 >= (unsigned __int64)GameData_21ca380) {
        v81 = GameData_21ca370;
        v82 = GameData_21ca378 - GameData_21ca370;
        v1 = (GameData_21ca378 - GameData_21ca370) >> 3;
        v83 = v1 + 1;
        if ((v1 + 1) >> 61 != 0) {
          goto LABEL_322;
        }
        v84 = GameData_21ca380 - GameData_21ca370;
        if ((GameData_21ca380 - GameData_21ca370) >> 2 > v83) {
          v83 = v84 >> 2;
        }
        if ((unsigned __int64)v84 >= 0x7FFFFFFFFFFFFFF8LL) {
          v85 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v85 = v83;
        }
        if (v85 != 0) {
          if (v85 >> 61 != 0) {
            goto LABEL_320;
          }
          v86 = GameRoutine_651b90(*v4, 8 * v85, 16, 0);
        }
        else {
          v86 = 0;
        }
        v111 = v86 + 8 * v85;
        v112 = v86 + v82 - 8 * v1;
        *(_QWORD*)(v86 + v82) = v199;
        v74 = v86 + v82 + 8;
        result = GameRoutine_1a0b950(v112, v81, v82);
        GameData_21ca370 = v112;
        GameData_21ca378 = v74;
        GameData_21ca380 = v111;
        if (v81 != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v113 = 128;
          }
          else {
            v113 = 56;
          }
          result = GameRoutine_1a0a4e0(*v4 + v113, v81);
        }
        v70 = v197;
        v6 = v199;
      }
      else {
        *(_QWORD*)GameData_21ca378 = v6;
        v74 = v73 + 8;
      }
      GameData_21ca378 = v74;
      if (*(_BYTE*)(v6 + 73) == 0) {
        goto LABEL_146;
      }
    LABEL_127:
      v90 = GameData_21ca3a8;
      if (GameData_21ca3a8 >= (unsigned __int64)GameData_21ca3b0) {
        v92 = GameData_21ca3a0;
        v93 = GameData_21ca3a8 - GameData_21ca3a0;
        v1 = (GameData_21ca3a8 - GameData_21ca3a0) >> 3;
        v94 = v1 + 1;
        if ((v1 + 1) >> 61 != 0) {
          goto LABEL_322;
        }
        v95 = GameData_21ca3b0 - GameData_21ca3a0;
        if ((GameData_21ca3b0 - GameData_21ca3a0) >> 2 > v94) {
          v94 = v95 >> 2;
        }
        if ((unsigned __int64)v95 >= 0x7FFFFFFFFFFFFFF8LL) {
          v96 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v96 = v94;
        }
        if (v96 != 0) {
          if (v96 >> 61 != 0) {
            goto LABEL_320;
          }
          v97 = GameRoutine_651b90(*v4, 8 * v96, 16, 0);
        }
        else {
          v97 = 0;
        }
        v98 = v97 + 8 * v96;
        v99 = v97 + v93 - 8 * v1;
        *(_QWORD*)(v97 + v93) = v199;
        v91 = v97 + v93 + 8;
        result = GameRoutine_1a0b950(v99, v92, v93);
        GameData_21ca3a0 = v99;
        GameData_21ca3a8 = v91;
        GameData_21ca3b0 = v98;
        if (v92 != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v100 = 128;
          }
          else {
            v100 = 56;
          }
          result = GameRoutine_1a0a4e0(*v4 + v100, v92);
        }
        v70 = v197;
        v6 = v199;
      }
      else {
        *(_QWORD*)GameData_21ca3a8 = v6;
        v91 = v90 + 8;
      }
      GameData_21ca3a8 = v91;
    LABEL_146:
      v101 = GameData_21ca390;
      if (GameData_21ca390 < (unsigned __int64)GameData_21ca398) {
        *(_QWORD*)GameData_21ca390 = v6;
        v2 = v101 + 8;
      }
      else {
        v102 = GameData_21ca388;
        v103 = GameData_21ca390 - GameData_21ca388;
        v104 = (GameData_21ca390 - GameData_21ca388) >> 3;
        v105 = v104 + 1;
        if ((unsigned __int64)(v104 + 1) >> 61 != 0) {
        LABEL_322:
          GameRoutine_6e5c60(result);
        }
        v106 = GameData_21ca398 - GameData_21ca388;
        if ((GameData_21ca398 - GameData_21ca388) >> 2 > v105) {
          v105 = v106 >> 2;
        }
        if ((unsigned __int64)v106 >= 0x7FFFFFFFFFFFFFF8LL) {
          v107 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v107 = v105;
        }
        if (v107 != 0) {
          if (v107 >> 61 != 0) {
          LABEL_320:
            GameRoutine_60a210(result);
          }
          v108 = GameRoutine_651b90(*v4, 8 * v107, 16, 0);
        }
        else {
          v108 = 0;
        }
        v1 = v108 + 8 * v107;
        v109 = v108 + v103 - 8 * v104;
        *(_QWORD*)(v108 + v103) = v199;
        v2 = v108 + v103 + 8;
        GameRoutine_1a0b950(v109, v102, v103);
        GameData_21ca388 = v109;
        GameData_21ca390 = v2;
        GameData_21ca398 = v1;
        if (v102 != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v110 = 128;
          }
          else {
            v110 = 56;
          }
          GameRoutine_1a0a4e0(*v4 + v110, v102);
        }
        v70 = v197;
      }
      GameData_21ca390 = v2;
      v5 = v196 + 1;
      if (v196 + 1 == v70) {
        v3 = *(_QWORD**)(*GameData_212c878[0] + 72);
        v5 = *(_QWORD**)(*GameData_212c878[0] + 64);
        goto LABEL_173;
      }
    }
    v71 = GameData_21ca360;
    if (GameData_21ca360 >= (unsigned __int64)GameData_21ca368) {
      v75 = GameData_21ca358;
      v76 = GameData_21ca360 - GameData_21ca358;
      v1 = (GameData_21ca360 - GameData_21ca358) >> 3;
      v77 = v1 + 1;
      if ((v1 + 1) >> 61 != 0) {
        goto LABEL_322;
      }
      v78 = GameData_21ca368 - GameData_21ca358;
      if ((GameData_21ca368 - GameData_21ca358) >> 2 > v77) {
        v77 = v78 >> 2;
      }
      if ((unsigned __int64)v78 >= 0x7FFFFFFFFFFFFFF8LL) {
        v79 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v79 = v77;
      }
      if (v79 != 0) {
        if (v79 >> 61 != 0) {
          goto LABEL_320;
        }
        v80 = GameRoutine_651b90(*v4, 8 * v79, 16, 0);
      }
      else {
        v80 = 0;
      }
      v87 = v80 + 8 * v79;
      v88 = v80 + v76 - 8 * v1;
      *(_QWORD*)(v80 + v76) = v199;
      v72 = v80 + v76 + 8;
      result = GameRoutine_1a0b950(v88, v75, v76);
      GameData_21ca358 = v88;
      GameData_21ca360 = v72;
      GameData_21ca368 = v87;
      if (v75 != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v89 = 128;
        }
        else {
          v89 = 56;
        }
        result = GameRoutine_1a0a4e0(*v4 + v89, v75);
      }
      v70 = v197;
      v6 = v199;
    }
    else {
      *(_QWORD*)GameData_21ca360 = v6;
      v72 = v71 + 8;
    }
    GameData_21ca360 = v72;
  LABEL_126:
    if (*(_BYTE*)(v6 + 73) == 0) {
      goto LABEL_146;
    }
    goto LABEL_127;
  }
LABEL_173:
  if (v5 != v3) {
    v1 = (unsigned __int64)&GameData_21ca350;
    do {
      v115 = *v5;
      v116 = v5;
      if (*v5 != 0) {
        v117 = *(_QWORD*)(v115 + 24);
        v118 =
            0x6DB6DB6DB6DB6DB7LL *
            ((__int64)(*(_QWORD*)(v117 + 536) - *(_QWORD*)(v117 + 528)) >> 3);
        if ((_DWORD)v118 == 0) {
          goto LABEL_196;
        }
        v119 = *(_QWORD*)(v117 + 600);
        if ((int)v118 < 1 || v119 != v115) {
          goto LABEL_196;
        }
        v121 = v118 & 0x7FFFFFFF;
        v122 = 0;
        v123 = 0;
        do {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca350,
                                    memory_order_acquire) &
               1) == 0) {
            v198 = v3;
            v131 = GameRoutine_1a09fd0(&GameData_21ca350);
            v3 = v198;
            if (v131 != 0) {
              GameData_21ca340 = 0;
              GameData_21ca348 = 0;
              *(_OWORD*)&GameData_21ca330 = 0u;
              GameData_21ca320 = 0;
              GameData_21ca328 = 0;
              GameData_21ca318 = 0;
              GameRoutine_2b0(GameRoutine_6ed500, &GameData_21ca318,
                              &GameData_1f50948);
              GameRoutine_1a09fe0(&GameData_21ca350);
              v3 = v198;
            }
          }
          v124 = *(_QWORD*)(v119 + 24);
          v125 = *(_QWORD*)(v124 + 536);
          v126 = *(_QWORD*)(v124 + 528);
          v127 = v125 - v126;
          v128 = (__int64*)(v126 + v122);
          if (v123 >= (int)(-1227133513 * (v127 >> 3))) {
            v128 = &GameData_21ca318;
          }
          v129 = v128[3];
          if (v129 != 0) {
            v130 = *(_QWORD*)(v129 + 24);
            if (v130 != 0) {
              *(_DWORD*)(v130 + 552) = v123 + 1;
            }
          }
          ++v123;
          v122 += 56;
        } while (v121 != v123);
        v117 = *(_QWORD*)(v115 + 24);
        if (v117 != 0) {
        LABEL_196:
          if (*(_WORD*)(v115 + 16) != 0) {
            v132 = *(_QWORD*)(v117 + 600);
            if (v132 != 0) {
              v114 = (*(unsigned __int8*)(v132 + 400) << 24) |
                     (*(unsigned __int8*)(v132 + 401) << 16) |
                     *(_DWORD*)(v117 + 552) |
                     (*(unsigned __int16*)(v132 + 16) << 8);
            }
            else {
              v114 = (*(unsigned __int16*)(v115 + 16) << 8) |
                     (*(unsigned __int8*)(v115 + 400) << 24) |
                     (*(unsigned __int8*)(v115 + 401) << 16);
            }
          }
          else {
            v114 = 0x40000000;
          }
          *(_DWORD*)(v117 + 608) = v114;
        }
      }
      v5 = v116 + 1;
    } while (v116 + 1 != v3);
    v2 = GameData_21ca390;
    v4 = (_QWORD*)GameData_212bf68;
  }
  result = GameData_21ca388;
  if (GameData_21ca388 != v2) {
    result = GameRoutine_6f1340();
  }
  v133 = a1;
  if (a1[19] != 0) {
    v134 = (_QWORD*)a1[18];
    if (v134 != nullptr) {
      v1 = 56;
      do {
        v135 = (_QWORD*)*v134;
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v136 = 128;
        }
        else {
          v136 = 56;
        }
        result = GameRoutine_1a0a4e0(*v4 + v136, v134);
        v134 = v135;
      } while (v135 != nullptr);
    }
    v133 = a1;
    v137 = a1[17];
    a1[18] = 0;
    if (v137 != 0) {
      v138 = v137 & 7;
      if (v137 >= 8) {
        v140 = v137 & 0xFFFFFFFFFFFFFFF8LL;
        v139 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v139) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 48) = 0;
          v141 = a1[16] + 8 * v139;
          v139 += 8;
          *(_QWORD*)(v141 + 56) = 0;
        } while (v140 != v139);
      }
      else {
        v139 = 0;
      }
      if (v138 != 0) {
        v142 = 8 * v139;
        do {
          --v138;
          *(_QWORD*)(a1[16] + v142) = 0;
          v142 += 8;
        } while (v138 != 0);
      }
    }
    a1[19] = 0;
  }
  v143 = (unsigned __int64*)v133[8];
  v144 = (unsigned int**)v133[9];
  while (v143 != (unsigned __int64*)v144) {
    v1 = *v143;
    v145 = *(unsigned int*)*v143;
    if ((_DWORD)v145 != 0) {
      GameRoutine_6f57e0(a1 + 1, v145, *v143);
    }
    result = GameRoutine_66bfc0(v1);
    if ((_DWORD)result != 0) {
      result = GameRoutine_6f57e0(a1 + 1, (unsigned int)result, v1);
    }
    ++v143;
  }
  v146 = GameData_21ca3c0;
  *(_QWORD*)(GameData_21ca3c0 + 8) = *(_QWORD*)GameData_21ca3c0;
  if (*(_QWORD*)(v146 + 48) != 0) {
    v147 = *(_QWORD**)(v146 + 40);
    if (v147 != nullptr) {
      v1 = 56;
      do {
        v148 = (_QWORD*)*v147;
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v149 = 128;
        }
        else {
          v149 = 56;
        }
        result = GameRoutine_1a0a4e0(*v4 + v149, v147);
        v147 = v148;
      } while (v148 != nullptr);
    }
    v150 = *(_QWORD*)(v146 + 32);
    *(_QWORD*)(v146 + 40) = 0;
    if (v150 != 0) {
      v151 = v150 & 7;
      if (v150 >= 8) {
        v153 = v150 & 0xFFFFFFFFFFFFFFF8LL;
        v152 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 48) = 0;
          v154 = *(_QWORD*)(v146 + 24) + 8 * v152;
          v152 += 8;
          *(_QWORD*)(v154 + 56) = 0;
        } while (v153 != v152);
      }
      else {
        v152 = 0;
      }
      if (v151 != 0) {
        v155 = 8 * v152;
        do {
          --v151;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + v155) = 0;
          v155 += 8;
        } while (v151 != 0);
      }
    }
    *(_QWORD*)(v146 + 48) = 0;
  }
  v156 = (unsigned int**)GameData_21ca370;
  v157 = GameData_21ca378;
  if (GameData_21ca370 != GameData_21ca378) {
    v158 = *(_QWORD**)(v146 + 8);
    v159 = (unsigned __int64*)(v146 + 40);
    do {
      v160 = *v156;
      v161 = *(_QWORD*)(v146 + 32);
      v162 = **v156;
      if (v161 != 0) {
        v163 = v161 - 1;
        if ((v161 & (v161 - 1)) != 0) {
          v1 = **v156;
          if (v161 <= v162) {
            v1 = (unsigned int)v162 % (unsigned int)v161;
          }
        }
        else {
          v1 = ((_DWORD)v161 - 1) & (unsigned int)v162;
        }
        v164 = *(__int64***)(*(_QWORD*)(v146 + 24) + 8 * v1);
        if (v164 != nullptr) {
          v165 = *v164;
          if (v165 != nullptr) {
            if ((v161 & v163) == 0) {
              while (1) {
                v167 = v165[1];
                if (v167 == v162) {
                  if (*((_DWORD*)v165 + 4) == (_DWORD)v162) {
                    goto LABEL_303;
                  }
                }
                else if ((v167 & v163) != v1) {
                  goto LABEL_266;
                }
                v165 = (__int64*)*v165;
                if (v165 == nullptr) {
                  goto LABEL_266;
                }
              }
            }
            do {
              v166 = v165[1];
              if (v166 == v162) {
                if (*((_DWORD*)v165 + 4) == (_DWORD)v162) {
                  goto LABEL_303;
                }
              }
              else {
                if (v166 >= v161) {
                  v166 %= v161;
                }
                if (v166 != v1) {
                  break;
                }
              }
              v165 = (__int64*)*v165;
            } while (v165 != nullptr);
          }
        }
      }
    LABEL_266:
      v168 = ((unsigned __int64)v158 - *(_QWORD*)v146) >> 3;
      result = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24, 16, 0);
      *(_QWORD*)result = 0;
      *(_QWORD*)(result + 8) = v162;
      *(_DWORD*)(result + 16) = v162;
      v169 = result;
      *(_WORD*)(result + 20) = v168;
      v170 = *(float*)(v146 + 56);
      v171 = (float)(unsigned __int64)(*(_QWORD*)(v146 + 48) + 1LL);
      if (v161 == 0 || (float)(v170 * (float)v161) < v171) {
        v172 = v171 / v170;
        v173 = (v161 & (v161 - 1)) != 0;
        if (v161 < 3) {
          v173 = true;
        }
        v174 = v173 | (2 * v161);
        v175 = vcvtps_u32_f32(v172);
        if (v174 <= v175) {
          v176 = v175;
        }
        else {
          v176 = v174;
        }
        if (v176 == 1) {
          v176 = 2;
        }
        else if ((v176 & (v176 - 1)) != 0) {
          result = GameRoutine_1a09d00(v176);
          v161 = *(_QWORD*)(v146 + 32);
          v176 = result;
        }
        if (v176 > v161) {
          goto LABEL_278;
        }
        if (v176 < v161) {
          result = vcvtps_u32_f32((float)*(unsigned __int64*)(v146 + 48) /
                                  *(float*)(v146 + 56));
          if (v161 < 3 || (v161 & (v161 - 1)) != 0) {
            result = GameRoutine_1a09d00(result);
          }
          else {
            v177 = 1LL << -(char)__clz(result - 1);
            if (result >= 2) {
              result = v177;
            }
          }
          if (v176 <= result) {
            v176 = result;
          }
          if (v176 < v161) {
          LABEL_278:
            result = GameRoutine_6f2440(v146 + 24, v176);
          }
        }
        v161 = *(_QWORD*)(v146 + 32);
        if ((v161 & (v161 - 1)) != 0) {
          if (v161 <= v162) {
            v1 = v162 % v161;
          }
          else {
            v1 = v162;
          }
        }
        else {
          v1 = ((_DWORD)v161 - 1) & (unsigned int)v162;
        }
      }
      v178 = *(_QWORD*)(v146 + 24);
      v179 = *(unsigned __int64**)(v178 + 8 * v1);
      if (v179 != nullptr) {
        *(_QWORD*)v169 = *v179;
        *v179 = v169;
      }
      else {
        *(_QWORD*)v169 = *v159;
        *v159 = v169;
        *(_QWORD*)(v178 + 8 * v1) = v159;
        if (*(_QWORD*)v169 != 0) {
          v180 = *(_QWORD*)(*(_QWORD*)v169 + 8LL);
          if ((v161 & (v161 - 1)) != 0) {
            if (v180 >= v161) {
              v180 %= v161;
            }
          }
          else {
            v180 &= v161 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v180) = v169;
        }
      }
      v158 = *(_QWORD**)(v146 + 8);
      ++*(_QWORD*)(v146 + 48);
    LABEL_303:
      v181 = *((_QWORD**)v160 + 3);
      v182 = *(_QWORD*)(v146 + 16);
      if ((unsigned __int64)v158 < v182) {
        *v158 = 0;
        *v158++ = *v181;
      }
      else {
        v183 = (__int64)v158 - *(_QWORD*)v146;
        v184 = (v183 >> 3) + 1;
        if (v184 >> 61 != 0) {
          GameRoutine_6f26d0(result);
        }
        v185 = v182 - *(_QWORD*)v146;
        v186 = v185 >> 2;
        if (v185 >> 2 <= v184) {
          v186 = (v183 >> 3) + 1;
        }
        if ((unsigned __int64)v185 >= 0x7FFFFFFFFFFFFFF8LL) {
          v1 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v1 = v186;
        }
        if (v1 >> 61 != 0) {
          goto LABEL_320;
        }
        result = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v1, 16, 0);
        v187 = (_QWORD*)(result + v183);
        *v187 = *v181;
        v158 = (_QWORD*)(result + v183 + 8);
        v188 = *(__int64**)v146;
        v189 = *(__int64**)(v146 + 8);
        v190 = (_QWORD*)((char*)v187 + *(_QWORD*)v146 - (_QWORD)v189);
        if (*(__int64**)v146 != v189) {
          v191 = *(__int64**)v146;
          v192 = v190;
          do {
            v193 = *v191++;
            *v192++ = v193;
          } while (v191 != v189);
        }
        *(_QWORD*)v146 = v190;
        *(_QWORD*)(v146 + 8) = v158;
        *(_QWORD*)(v146 + 16) = result + 8 * v1;
        if (v188 != nullptr) {
          v194 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v194 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v194, v188);
        }
      }
      ++v156;
      *(_QWORD*)(v146 + 8) = v158;
    } while (v156 != (unsigned int**)v157);
  }
  return result;
}

_QWORD* GameHr_703310(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;

  result = (_QWORD*)a1[4];
  if (result == a1) {
    v3 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v3))((__int64)result);
}

void* GameHr_70fee0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void* result;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  _QWORD v14[4];
  _QWORD* v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;

  v13 = v12;
  v12[0] = GameData_1f92f08;
  v12[1] = &v18;
  v17 = v16;
  v14[0] = GameData_1f93088;
  v14[1] = v12;
  v15 = v14;
  v16[2] = v14;
  v18 = *GameData_212cea0;
  v16[0] = GameData_1f92f88;
  v16[1] = 13;
  GameRoutine_710540(a1, v16);
  if (v17 == v16) {
    v1 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v17 + v1))((__int64)v17);
LABEL_6:
  if (v15 == v14) {
    v2 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v15 + v2))((__int64)v15);
LABEL_11:
  if (v13 == v12) {
    v3 = 32;
    goto LABEL_15;
  }
  if (v13 != nullptr) {
    v3 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v13 + v3))((__int64)v13);
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * (unsigned __int16)v18) +
                  24LL);
  if ((*(_WORD*)(v4 + 88) & 0x100) == 0) {
    return GameData_212c8a8;
  }
  v7 = v4 + 40;
  v5 = *(_QWORD*)(v4 + 40);
  v6 = *(_QWORD*)(v7 + 8);
  if (v6 == v5) {
    return GameData_212c8a8;
  }
  v8 = (v6 - v5) >> 2;
  v9 = 0;
  result = GameData_212c8a8;
  while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (*(_DWORD*)(v5 + 4 * v9) & 0xFFF)) +
                   104LL) != 8) {
    if (v8 == ++v9) {
      return result;
    }
  }
  v11 = v5 + 4LL * (unsigned int)v9;
  if (v9 >= 0) {
    return (void*)v11;
  }
  else {
    return GameData_212c8a8;
  }
}

__int64 GameHr_715600(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;

  v2 = GameRoutine_7a86e0(*(&GameData_1f9cb48 + *(unsigned __int8*)(a1 + 15)));
  if (v2 == 0) {
    goto LABEL_25;
  }
  v3 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_25;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v6);
  if (v7 == nullptr || (v8 = (_QWORD*)*v7) == nullptr) {
  LABEL_25:
    v10 = 0;
    goto LABEL_26;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v11 = v8[1];
      if (v11 == v2) {
        if (v8[2] == v2) {
          goto LABEL_32;
        }
      }
      else if ((v11 & v5) != v6) {
        goto LABEL_25;
      }
      v8 = (_QWORD*)*v8;
      v10 = 0;
      if (v8 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_25;
    }
  LABEL_15:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v8[2] != v2) {
    goto LABEL_15;
  }
LABEL_32:
  v10 = v8[3];
LABEL_26:
  *(_QWORD*)(a1 + 96) = v10;
  v14[0] = GameData_1f933d8;
  v14[1] = a1;
  v15 = v14;
  GameRoutine_7f8610(v14);
  if (v15 == v14) {
    v12 = 32;
  LABEL_30:
    (*(void (**)(__int64))(*v15 + v12))((__int64)v15);
  }
  else if (v15 != nullptr) {
    v12 = 40;
    goto LABEL_30;
  }
  return GameRoutine_71f220(a1);
}

__int64 GameHr_717e30(char a1)
{
  __int64 result;
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
  _QWORD v15[4];
  _QWORD* v16;

  result = GameRoutine_890160(&GameData_1ad653b);
  if (result != 0) {
    v3 = **(_QWORD**)(result + 24);
    if (v3 != 0) {
      v5 = **(_QWORD**)(v3 + 40);
      v4 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 8LL);
      if ((int)((unsigned __int64)(v4 - v5) >> 3) >= 1) {
        v6 = *(_QWORD*)(v4 - 8);
        if (v6 != 0) {
          v7 = GameData_21caab0;
          v16 = v15;
          *(_DWORD*)(GameData_21caab0 + 60) = 2;
          v15[0] = GameData_1f93458;
          v15[1] = v7;
          GameRoutine_7f8cc0(2, v15);
          if (v16 == v15) {
            v8 = 32;
          }
          else {
            if (v16 == nullptr) {
              goto LABEL_10;
            }
            v8 = 40;
          }
          (*(void (**)(__int64))(*v16 + v8))((__int64)v16);
        LABEL_10:
          GameRoutine_71f220(v7);
          v9 = GameData_21caab0;
          *(_BYTE*)(GameData_21caab0 + 15) = a1;
          GameRoutine_715600(v9);
          v10 = GameData_21caab0;
          v11 = (unsigned int)*(char*)(v6 + 89);
          v16 = v15;
          *(_DWORD*)(GameData_21caab0 + 64) = v11;
          v15[0] = GameData_1f934e8;
          v15[1] = v10;
          GameRoutine_7f8fd0(v11, v15);
          if (v16 == v15) {
            v12 = 32;
          }
          else {
            if (v16 == nullptr) {
            LABEL_15:
              GameRoutine_71f220(v10);
              v13 = GameData_21caab0;
              v14 = *(_QWORD*)(v6 + 24) + 96LL;
              *(_BYTE*)(*(_QWORD*)(GameData_21caab0 + 48) + 3932768LL) |= 8u;
              result = GameRoutine_82ce80(*(_QWORD*)(v13 + 48), v14);
              *(_BYTE*)(*(_QWORD*)(v13 + 48) + 3932768LL) &= ~8u;
              return result;
            }
            v12 = 40;
          }
          (*(void (**)(__int64))(*v16 + v12))((__int64)v16);
          goto LABEL_15;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_718440()
{
  __int64 v0;
  __int64 i;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 j;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* k;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 ProgramTotalActiveTimeEv;
  __int64 result;
  _QWORD v30[4];
  _QWORD* v31;

  GameRoutine_6ea140();
  if (GameData_21caab0 != 0) {
    *(_DWORD*)(GameData_21caab0 + 72) = 0;
  }
  GameRoutine_715ca0(0);
  if (GameData_21caab0 != 0) {
    *(_DWORD*)(GameData_21caab0 + 84) = 0;
  }
  GameRoutine_89b540(*(_QWORD*)(GameData_21f1780 + 8));
  GameRoutine_93bb80(*(_QWORD*)(GameData_21f42d0 + 8));
  v0 = *(_QWORD*)(GameData_21f4280 + 8);
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v0 + 48) + i + 2544) = 0;
    v2 = *(_QWORD*)(v0 + 48) + i;
    *(_QWORD*)(v2 + 2552) = 0;
  }
  if (*(_QWORD*)(v0 + 32) != 0) {
    v3 = *(_QWORD**)(v0 + 24);
    if (v3 != nullptr) {
      v4 = GameData_212bf68;
      do {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)v4 + v6, v3);
        v3 = v5;
      } while (v5 != nullptr);
    }
    v7 = *(_QWORD*)(v0 + 16);
    *(_QWORD*)(v0 + 24) = 0;
    if (v7 != 0) {
      v8 = v7 & 7;
      if (v7 >= 8) {
        v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + 8 * v9 + 48) = 0;
          v11 = *(_QWORD*)(v0 + 8) + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(*(_QWORD*)(v0 + 8) + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    *(_QWORD*)(v0 + 32) = 0;
  }
  *(_DWORD*)(v0 + 72) = 0;
  v13 = GameData_21caab0;
  v31 = v30;
  v30[0] = GameData_1f9fd40;
  v30[1] = GameData_21caab0 + 40;
  GameRoutine_827530(v30);
  if (v31 == v30) {
    v14 = 32;
  }
  else {
    if (v31 == nullptr) {
      goto LABEL_28;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v31 + v14))((__int64)v31);
LABEL_28:
  GameRoutine_829ca0(*(_QWORD*)(v13 + 48));
  v15 = *(_QWORD*)(GameData_21caab0 + 160);
  v16 = *(_QWORD*)(v15 + 8);
  for (j = *(_QWORD*)(v15 + 16); v16 != j; v16 += 32) {
    *(_DWORD*)(v16 + 4) = 0;
    *(_BYTE*)(v16 + 8) = 0;
  }
  v18 = GameRoutine_90d5a0();
  if (GameData_21c9700 != 0) {
    v19 = *(_QWORD*)(GameData_21c9700 + 8);
    v20 = *(__int64**)(v19 + 48);
    for (k = *(__int64**)(v19 + 56); v20 != k; *(_BYTE*)(v22 + 116) = 0) {
      v22 = *v20;
      if (*(_BYTE*)(*v20 + 176) != 1) {
        *(_BYTE*)(v22 + 176) = 1;
      }
      v23 = *(_QWORD*)(v22 + 120);
      *(_BYTE*)(v22 + 178) = 0;
      if (v23 != 0) {
        GameRoutine_1329500(v30, v22, 0, 1);
      }
      v18 = *(_QWORD*)(v22 + 280);
      if (v18 != 0) {
        v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
        *(_QWORD*)(v22 + 280) = 0;
      }
      ++v20;
    }
  }
  if (GameData_2241428 != 0) {
    *(_QWORD*)(GameData_2241428 + 16) = *(_QWORD*)(GameData_2241428 + 8);
  }
  if (GameData_21c96e8 != 0) {
    v30[0] = GameData_202d0c8;
    v31 = v30;
    GameRoutine_13460a0(v30);
    v18 = (__int64)v31;
    if (v31 == v30) {
      v24 = 32;
    }
    else {
      if (v31 == nullptr) {
        goto LABEL_48;
      }
      v24 = 40;
    }
    v18 = (*(__int64 (**)(__int64))(*v31 + v24))((__int64)v31);
  }
LABEL_48:
  GameRoutine_9728b0(v18);
  v25 = GameData_21c96e8;
  if (GameData_21c96e8 != 0) {
    v26 = *(_QWORD*)(GameData_21c96e8 + 8);
    *(_DWORD*)(v26 + 56) = -1;
    *(_QWORD*)(v26 + 40) = *(_QWORD*)(v26 + 32);
  }
  (*(void (**)(_QWORD))(**(_QWORD**)(v25 + 8) + 40LL))(*(_QWORD*)(v25 + 8));
  v27 = GameRoutine_db7ba0(GameData_21c9608);
  if (GameData_21caab0 != 0) {
    *(_BYTE*)(GameData_21caab0 + 14) = *(_BYTE*)(GameData_21caab0 + 13);
  }
  ProgramTotalActiveTimeEv = GameRoutine_1a0a6f0(v27);
  GameData_21d8818 = GameRoutine_1a0a700(ProgramTotalActiveTimeEv);
  GameData_21d8820 = 0;
  GameData_21d8810 = 0;
  result = GameRoutine_1a0a700(0);
  GameData_21d8820 = result;
  return result;
}

__int64 GameHr_71e5c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  int v13;
  _BOOL4 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v19[4];
  _QWORD* v20;
  int v21;

  v2 = *(unsigned int*)(a1 + 60);
  v19[0] = GameData_1f93458;
  v19[1] = a1;
  v20 = v19;
  GameRoutine_7f8cc0(v2, v19);
  if (v20 == v19) {
    v3 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v20 + v3))((__int64)v20);
LABEL_6:
  GameRoutine_71f220(a1);
  GameRoutine_715600(a1);
  v4 = *(unsigned int*)(a1 + 64);
  v19[0] = GameData_1f934e8;
  v19[1] = a1;
  v20 = v19;
  GameRoutine_7f8fd0(v4, v19);
  if (v20 == v19) {
    v5 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v20 + v5))((__int64)v20);
LABEL_11:
  GameRoutine_71f220(a1);
  v6 = GameRoutine_682780(9);
  if (v6 == 0) {
    goto LABEL_21;
  }
  for (i = v6; i != 0; i = *(_QWORD*)(i + 624)) {
    v8 = i;
  }
  if (*(_BYTE*)(v8 + 441) != 3) {
    goto LABEL_21;
  }
  v9 = *(_QWORD*)(v6 + 624);
  if (v9 == 0) {
    v9 = v6;
  }
  v19[0] = v9;
  v21 = 241;
  v10 = GameRoutine_6ead60(v19, &v21);
  if (v10 != 0) {
    v11 = (__int64*)(v10 + 2104);
    goto LABEL_22;
  }
  v12 = *(_QWORD*)(GameData_21caab0 + 176);
  if (*(_BYTE*)(v12 + 144) != 0) {
    v11 = (__int64*)(v12 + 112);
  }
  else {
  LABEL_21:
    v11 = &GameData_21f49b8;
  }
LABEL_22:
  v13 = *((unsigned __int8*)v11 + 32);
  v14 = v13 == 1;
  v15 = v13 != 1 && v13 == 2;
  v16 = GameRoutine_9a28e0(7);
  GameRoutine_716d80(v16, v14);
  v17 = GameRoutine_9a28e0(8);
  return GameRoutine_716d80(v17, v15);
}

__int64 GameHr_724ec0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int16 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = result;
  if (GameData_21eea58 != 0 && (*(_BYTE*)(GameData_21eea58 + 32) & 1) != 0) {
    return result;
  }
  result = GameData_21ca2f8;
  if (GameData_21ca2f8 == 0) {
    return result;
  }
  result = GameRoutine_765b20();
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e50);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    if (GameData_21caab0 == 0) {
      return result;
    }
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e50);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      goto LABEL_29;
    }
    if (GameData_21caab0 == 0) {
      return result;
    }
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e40);
    if (result == 0 || *(_DWORD*)(result + 32) == 0) {
      goto LABEL_29;
    }
    if (GameData_21caab0 == 0) {
      return result;
    }
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e60);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      v2 = GameData_21cd0c8;
      if (GameData_21cd0c8 == 0) {
        goto LABEL_35;
      }
      v3 = 15;
    }
    else {
    LABEL_29:
      if (GameData_21caab0 == 0) {
        return result;
      }
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  &GameData_21d1e50);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        return result;
      }
      if (GameData_21caab0 == 0) {
        return result;
      }
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  &GameData_21d1e40);
      if (result == 0 || *(_DWORD*)(result + 32) == 0) {
        return result;
      }
      v2 = GameData_21cd0c8;
      if (GameData_21cd0c8 == 0) {
        goto LABEL_35;
      }
      v3 = 11;
    }
    goto LABEL_34;
  }
  if (GameData_21caab0 == 0) {
    v2 = GameData_21cd0c8;
    if (GameData_21cd0c8 == 0) {
      goto LABEL_35;
    }
    v3 = 12;
    goto LABEL_34;
  }
  v2 = GameData_21cd0c8;
  if ((*(_DWORD*)(GameData_21caab0 + 92) & 0x100) != 0) {
    v3 = 16;
  }
  else {
    v3 = 12;
  }
  if (GameData_21cd0c8 != 0) {
  LABEL_34:
    *(_DWORD*)(v2 + 152) = v3;
  }
LABEL_35:
  v4 = *(_DWORD*)(v1 + 152);
  if (v4 != 0) {
    v5 = *(_QWORD*)(v1 + 192);
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
      v4 = *(_DWORD*)(v1 + 152);
    }
    v6 = *(_QWORD*)(v1 + 8);
    if (v6 != 0) {
      while (1) {
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == v4) {
            v7 = *(_WORD*)(v1 + 136);
            *(_QWORD*)(v1 + 16) = v6;
            *(_WORD*)(v1 + 136) = v7 & 0xFF7F;
            break;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          break;
        }
        v6 += 64;
      }
    }
  }
  v8 = *(_DWORD*)(v1 + 156);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v1 + 96);
    v10 = *(_QWORD*)(v1 + 104);
    v11 = ((v10 - v9) << 6) - 1;
    if (v10 == v9) {
      v11 = 0;
    }
    v12 = *(_QWORD*)(v1 + 128) + *(_QWORD*)(v1 + 120);
    if (v11 == v12) {
      GameRoutine_658d60(v1 + 88);
      v9 = *(_QWORD*)(v1 + 96);
      v12 = *(_QWORD*)(v1 + 128) + *(_QWORD*)(v1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v12 >> 9)) + 8 * (v12 & 0x1FF)) =
        *(_QWORD*)(v1 + 16);
    ++*(_QWORD*)(v1 + 128);
    v13 = *(_QWORD*)(v1 + 8);
    if (v13 != 0) {
      while (1) {
        if (*(_BYTE*)v13 == 2) {
          if (*(_DWORD*)(v13 + 32) == v8) {
            *(_QWORD*)(v1 + 16) = v13;
            *(_WORD*)(v1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v13 == 0) {
          break;
        }
        v13 += 64;
      }
    }
  }
  result = *(_QWORD*)(v1 + 192);
  *(_QWORD*)(v1 + 152) = 0;
  *(_QWORD*)(v1 + 192) = 0;
  if (result == v1 + 160) {
    v14 = 32;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v14))((__int64)result);
  }
  if (result != 0) {
    v14 = 40;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v14))((__int64)result);
  }
  return result;
}

_QWORD* GameHr_725800(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  int v10;

  v2 = GameData_212ce90[0];
  v3 = *GameData_212ce90[0];
  v4 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  if (*(_BYTE*)(*GameData_212ce90[0] + v4 + 16) != 0) {
    if (*(_BYTE*)(*GameData_212ce90[0] + v4 + 16) == 1) {
      goto LABEL_3;
    }
    v10 = 1 << v4;
    if ((unsigned int)GameRoutine_6c1d00(&v10) != 0) {
      v3 = *v2;
      v6 = *(unsigned __int8*)(*v2 + *(unsigned __int8*)(*v2 + 24) + 16);
      if (v6 == 2) {
        v5 = 5;
        goto LABEL_10;
      }
      if (v6 == 1) {
      LABEL_3:
        if (*(_BYTE*)(v3 + 25) != 0) {
          v5 = 5;
        }
        else {
          v5 = 4;
        }
      LABEL_10:
        result = *(_QWORD**)(a1 + 192);
        *(_QWORD*)(a1 + 152) = 0;
        *(_QWORD*)(a1 + 192) = 0;
        if (result == (_QWORD*)(a1 + 160)) {
          v8 = 32;
        }
        else {
          if (result == nullptr) {
            goto LABEL_15;
          }
          v8 = 40;
        }
        result =
            (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
      LABEL_15:
        v9 = *(_QWORD*)(a1 + 8);
        if (v9 != 0) {
          while (1) {
            if (*(_BYTE*)v9 == 2) {
              if (*(_DWORD*)(v9 + 32) == v5) {
                *(_QWORD*)(a1 + 16) = v9;
                *(_WORD*)(a1 + 136) &= ~0x80u;
                return result;
              }
            }
            else if (*(_BYTE*)v9 == 0) {
              return result;
            }
            v9 += 64;
          }
        }
        return result;
      }
    }
  }
  v5 = 9;
  goto LABEL_10;
}

__int64 GameHr_725dc0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int16 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  result = *GameData_212ce90[0];
  if (*GameData_212ce90[0] == 0) {
    return result;
  }
  result = GameRoutine_765b20();
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e50);
  if (result != 0 && *(_DWORD*)(result + 32) != 0) {
    if (GameData_21caab0 != 0) {
      v3 = GameData_21cd0c8;
      if ((*(_DWORD*)(GameData_21caab0 + 92) & 0x100) != 0) {
        v4 = 16;
      }
      else {
        v4 = 12;
      }
      if (GameData_21cd0c8 == 0) {
        goto LABEL_33;
      }
    }
    else {
      v3 = GameData_21cd0c8;
      if (GameData_21cd0c8 == 0) {
        goto LABEL_33;
      }
      v4 = 12;
    }
  LABEL_32:
    *(_DWORD*)(v3 + 152) = v4;
    goto LABEL_33;
  }
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e50);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    if (GameData_21caab0 == 0) {
      return result;
    }
    result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                &GameData_21d1e40);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      if (GameData_21caab0 == 0) {
        return result;
      }
      result = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  &GameData_21d1e60);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        v3 = GameData_21cd0c8;
        if (GameData_21cd0c8 == 0) {
          goto LABEL_33;
        }
        v4 = 15;
        goto LABEL_32;
      }
    }
  }
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e50);
  if (result != 0 && *(_DWORD*)(result + 32) != 0) {
    return result;
  }
  if (GameData_21caab0 == 0) {
    return result;
  }
  result =
      GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48), &GameData_21d1e40);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    return result;
  }
  v3 = GameData_21cd0c8;
  if (GameData_21cd0c8 != 0) {
    v4 = 11;
    goto LABEL_32;
  }
LABEL_33:
  v5 = *(_DWORD*)(a1 + 152);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 192);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
      v5 = *(_DWORD*)(a1 + 152);
    }
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      while (1) {
        if (*(_BYTE*)v7 == 2) {
          if (*(_DWORD*)(v7 + 32) == v5) {
            v8 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v7;
            *(_WORD*)(a1 + 136) = v8 & 0xFF7F;
            break;
          }
        }
        else if (*(_BYTE*)v7 == 0) {
          break;
        }
        v7 += 64;
      }
    }
  }
  v9 = *(_DWORD*)(a1 + 156);
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 96);
    v11 = *(_QWORD*)(a1 + 104);
    v12 = ((v11 - v10) << 6) - 1;
    if (v11 == v10) {
      v12 = 0;
    }
    v13 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    if (v12 == v13) {
      GameRoutine_658d60(a1 + 88);
      v10 = *(_QWORD*)(a1 + 96);
      v13 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
    }
    *(_QWORD*)(*(_QWORD*)(v10 + 8 * (v13 >> 9)) + 8 * (v13 & 0x1FF)) =
        *(_QWORD*)(a1 + 16);
    ++*(_QWORD*)(a1 + 128);
    v14 = *(_QWORD*)(a1 + 8);
    if (v14 != 0) {
      while (1) {
        if (*(_BYTE*)v14 == 2) {
          if (*(_DWORD*)(v14 + 32) == v9) {
            *(_QWORD*)(a1 + 16) = v14;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v14 == 0) {
          break;
        }
        v14 += 64;
      }
    }
  }
  result = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == a1 + 160) {
    v15 = 32;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v15))((__int64)result);
  }
  if (result != 0) {
    v15 = 40;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v15))((__int64)result);
  }
  return result;
}

__int64 GameHr_726c50(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _BYTE v4[200];

  GameRoutine_1738620(a1, 0, 0);
  GameRoutine_10c830(v4, 0.0f);
  *(struct PseudoSret*)(&v3) =
      GameRoutine_ff2d0("SE_SYS_Telop_Tettai", "SE_SYS_Telop_Tettai", v4, 0,
                        65537, 0, 0.0f, 1.0f);
  v1 = GameRoutine_10cff0(v4);
  return GameRoutine_80cc80(v1);
}

__int64 GameHr_726fc0(__int64 result)
{
  __int64 v1;
  _BYTE v2[200];

  if ((*(_BYTE*)(result + 234) & 1) == 0) {
    v1 = result;
    GameRoutine_10c830(v2, -1.0f);
    GameRoutine_80cb30(v2);
    result = GameRoutine_10cff0(v2);
    *(_BYTE*)(v1 + 234) = 1;
  }
  return result;
}

_QWORD* GameHr_72c060(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                      __int64 a5)
{
  unsigned int v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  _QWORD* result;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 (**v18)();
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 (***v26)();
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 (**v30)();
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 (**v34)();
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 i;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  _QWORD v50[4];
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  _BYTE v54[4];
  unsigned int v55;
  unsigned int v56;
  __int64 v57;
  _QWORD v58[2];
  char* v59;
  _QWORD* v60;
  char v61;

  v57 = a2;
  v55 = a4;
  v56 = a3;
  v6 = a4;
  v7 = a3;
  v50[0] = GameData_1f94190;
  v50[1] = a5;
  v51 = v50;
  v8 = GameData_212ce98[0];
  if (*GameData_212ce90[0] == 0) {
    result = v50;
  LABEL_54:
    v39 = 32;
    goto LABEL_55;
  }
  v9 = a2;
  v54[0] = *(_BYTE*)(*GameData_212ce90[0] + 24);
  if (a2 != 0) {
    v10 = *(_QWORD*)(a2 + 440);
    if (v10 != 0) {
      v11 = *(_BYTE*)(v10 + 16);
    }
    else {
      v11 = 9;
    }
    v54[0] = v11;
  }
  v53 = *(_QWORD*)(*GameData_212ce98[0] + 160) + 8LL;
  LODWORD(v58[0]) = 15;
  v13 = GameRoutine_6ea9d0(v58);
  v52 = v13;
  v14 = v6;
  v15 = v7;
  if (v13 != 0) {
    v16 = *(_QWORD*)(v13 + 432);
    if (v16 == 0) {
      v16 = *(_QWORD*)(v13 + 440);
      if (v16 != 0) {
        v17 = *(unsigned __int8*)(v16 + 16);
        if (v17 <= 8) {
          v46 = 24LL * *(unsigned __int8*)(v16 + 16) + 556024;
          while (1) {
            if (v17 <= 2) {
              v16 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v46);
              if (v16 != 0) {
                break;
              }
            }
            ++v17;
            v46 += 24;
            if (v17 == 9) {
              goto LABEL_12;
            }
          }
        }
        else {
        LABEL_12:
          v16 = 0;
        }
      }
    }
    v47 = v9;
    v48 = v7;
    v49 = v6;
    v18 = GameData_1f94310;
    v19 = (_QWORD*)GameData_212bf68;
    v20 = GameData_212c880[0];
    while (1) {
    LABEL_15:
      v21 = v16;
      v22 = (unsigned int)*(char*)(v13 + 584);
      v23 = (unsigned int)*(char*)(v13 + 585);
      v61 = 0;
      v59 = &v61;
      v60 = v58;
      v58[0] = v18;
      v58[1] = v53;
      GameRoutine_6c8a80(v13, v22, v23, v58);
      if (v60 == v58) {
        v24 = 32;
      }
      else {
        if (v60 == nullptr) {
          goto LABEL_20;
        }
        v24 = 40;
      }
      (*(void (**)(__int64))(*v60 + v24))((__int64)v60);
    LABEL_20:
      if (v61 == 1) {
        v25 = v52;
        v26 = (__int64 (***)())GameRoutine_651b90(*v19, 56, 16, 0);
        v26[2] = (__int64 (**)())v54;
        *v26 = GameData_1f93e00;
        v26[1] = (__int64 (**)())&v52;
        v26[3] = (__int64 (**)())&v56;
        v26[4] = (__int64 (**)())&v55;
        v26[5] = (__int64 (**)())&v53;
        v26[6] = (__int64 (**)())v50;
        if ((*(_BYTE*)(v25 + 1829) & 0x40) != 0 &&
            (v27 = *(_QWORD*)(v25 + 1784), v28 = *(_QWORD*)(v25 + 1776),
             (int)((unsigned __int64)(v27 - v28) >> 2) >= 1)) {
          v29 = *v20;
          v30 = v18;
          v31 = v19;
          v32 = 0;
          v33 = 0;
          do {
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                     8LL * (*(_DWORD*)(v28 + v32) & 0xFFF)) +
                          115LL) == 14) {
              ((void (*)(__int64 (***)(), __int64))(*v26)[6])(v26, v28 + v32);
              v29 = *v20;
              v27 = *(_QWORD*)(v25 + 1784);
              v28 = *(_QWORD*)(v25 + 1776);
            }
            ++v33;
            v32 += 4;
          } while (v33 < (int)((unsigned __int64)(v27 - v28) >> 2));
          v34 = *v26;
          v19 = v31;
          v18 = v30;
        }
        else {
          v34 = GameData_1f93e00;
        }
        ((void (*)(__int64 (***)()))v34[5])(v26);
      }
      v52 = v21;
      if (v21 == 0) {
        v14 = v55;
        v15 = v56;
        v7 = v48;
        v6 = v49;
        v8 = GameData_212ce98[0];
        v9 = v47;
        break;
      }
      v16 = *(_QWORD*)(v21 + 432);
      v13 = v21;
      if (v16 == 0) {
        v35 = *(_QWORD*)(v21 + 440);
        v13 = v21;
        if (v35 != 0) {
          v36 = *(unsigned __int8*)(v35 + 16);
          v16 = 0;
          v13 = v21;
          if (v36 <= 8) {
            v37 = 24LL * (unsigned int)v36 + 556024;
            while (1) {
              if (v36 <= 2) {
                v16 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v37);
                if (v16 != 0) {
                  break;
                }
              }
              ++v36;
              v37 += 24;
              if (v36 == 9) {
                v16 = 0;
                v13 = v21;
                goto LABEL_15;
              }
            }
            v13 = v21;
          }
        }
      }
    }
  }
  if (*(unsigned __int8*)(*v8 + 18) >
          (unsigned int)(unsigned __int8)(v15 - *(_BYTE*)(*v8 + 16)) &&
      *(unsigned __int8*)(*v8 + 19) >
          (unsigned int)(unsigned __int8)(v14 - *(_BYTE*)(*v8 + 17)) &&
      ((*(_DWORD*)(v53 + 4LL * ((int)(v15 + 32 * v14) >> 5)) >> v15) & 1) !=
          0) {
    if (v9 != 0) {
      v58[0] = GameData_1f93e80;
      v58[1] = &v57;
      v60 = v58;
      v59 = (char*)v50;
      GameRoutine_756f00(v9, v15, v14, v58);
    }
    else {
      v58[0] = GameData_1f93f00;
      v58[1] = v54;
      v60 = v58;
      v59 = (char*)v50;
      GameRoutine_756d50((unsigned int)v15, v14, v58);
    }
    if (v60 == v58) {
      v38 = 32;
    }
    else {
      if (v60 == nullptr) {
        goto LABEL_51;
      }
      v38 = 40;
    }
    (*(void (**)(__int64))(*v60 + v38))((__int64)v60);
  }
LABEL_51:
  result = v51;
  if (v51 == v50) {
    goto LABEL_54;
  }
  if (v51 != nullptr) {
    v39 = 40;
  LABEL_55:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v39))((__int64)result);
  }
  v40 = v7 + 32 * v6;
  if (v40 >= 0x400) {
    v40 = 0;
  }
  v41 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*v8 + 72) + 2LL * v40 +
                                              8));
  if (v41 != 0) {
    v42 = *(_QWORD*)(v41 + 24);
    v43 = *(_QWORD*)(v42 + 128);
    for (i = *(_QWORD*)(v42 + 136); v43 != i; v43 += 4) {
      v45 = *(_QWORD*)(a5 + 32);
      if (v45 == 0) {
        GameRoutine_60a310(0);
      }
      result = (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v45 +
                                                           48LL))(v45, v43);
    }
  }
  return result;
}

__int64 GameHr_72dfc0(__int64 a1, _DWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 i;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  _QWORD v40[4];
  _QWORD* v41;
  char v42;

  result = GameRoutine_84cb50(**(_QWORD**)(a1 + 8) + 1744LL, a2);
  if ((result & 1) == 0) {
    return result;
  }
  v5 = *(_QWORD*)(GameData_21c99b0 + 64);
  v6 = *(_QWORD*)(v5 + 8LL * (*a2 & 0xFFF));
  v7 = *(_QWORD*)(v6 + 24);
  if ((*(_BYTE*)(v7 + 1123) & 1) != 0) {
    return result;
  }
  v8 = *(unsigned __int8*)(v6 + 278);
  v9 = *(unsigned __int8*)(v6 + 279);
  if ((*a2 & 0xFFF) != 0) {
    v10 = GameRoutine_84edc0(**(_QWORD**)(a1 + 8) + 1744LL, v7 + 224);
    v11 = *a2 & 0xFFF;
    v5 = *(_QWORD*)(*GameData_212c880[0] + 64);
  }
  else {
    v11 = 0;
    v10 = 0;
  }
  v12 = *(_QWORD*)(v5 + 8 * v11);
  if (v12 == 0) {
    goto LABEL_14;
  }
  v13 = *(unsigned __int8*)(v12 + 106);
  v14 = **(_QWORD**)(a1 + 8);
  if (v13 == 1) {
    v17 = *(_QWORD*)(v14 + 440);
    if (v17 == 0) {
      goto LABEL_17;
    }
    v17 = *(unsigned __int8*)(v17 + 16);
    if (v17 <= 3) {
      LODWORD(v17) = GameData_1a82ec0[v17];
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  if (v13 != 2) {
  LABEL_14:
    LODWORD(v17) = 0;
    goto LABEL_17;
  }
  v15 = *(_QWORD*)(v14 + 440);
  if (v15 != 0) {
    v16 = *(_BYTE*)(v15 + 16);
  }
  else {
    v16 = 9;
  }
  LODWORD(v17) = 1 << v16;
LABEL_17:
  v39 = v17;
  result = GameRoutine_6ea9d0(&v39);
  if (result != 0) {
    v18 = *(_QWORD*)(result + 432);
    v19 = result;
    if (v18 == 0) {
      v18 = *(_QWORD*)(result + 440);
      if (v18 != 0) {
        v20 = *(unsigned __int8*)(v18 + 16);
        if (v20 <= 8) {
          while (1) {
            v38 = v20 + 1;
            if (((v39 >> v20) & 2) != 0) {
              v18 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                               24LL * (unsigned __int8)(v20 + 1) + 556000);
              if (v18 != 0) {
                break;
              }
            }
            v20 = v38;
            if (v38 == 9) {
              goto LABEL_21;
            }
          }
        }
        else {
        LABEL_21:
          v18 = 0;
        }
      }
    }
    v21 = v10 + v9;
    while (1) {
    LABEL_24:
      v22 = v18;
      v23 = **(_QWORD**)(a1 + 8);
      if (v23 == 0) {
        goto LABEL_39;
      }
      v24 = *(char*)(v19 + 584);
      v25 = *(char*)(v19 + 585);
      result = GameRoutine_752b40(
          (unsigned int)*(char*)(v23 + 584), (unsigned int)*(char*)(v23 + 585),
          *(unsigned int*)(v23 + 592), *(unsigned int*)(v23 + 592), v24, v25,
          *(unsigned int*)(v19 + 592), *(unsigned int*)(v19 + 592));
      if ((unsigned int)result < v8 || (int)result > v21) {
        goto LABEL_39;
      }
      v27 = *(__int64**)(a1 + 16);
      v42 = 0;
      v28 = *v27;
      v41 = v40;
      v40[0] = GameData_1f94310;
      v40[1] = v28;
      v40[2] = &v42;
      GameRoutine_6c8a80(v19, v24, v25, v40);
      result = (__int64)v41;
      if (v41 == v40) {
        break;
      }
      if (v41 != nullptr) {
        v29 = 40;
      LABEL_34:
        result = (*(__int64 (**)(__int64))(*v41 + v29))((__int64)v41);
      }
      if (v42 == 1) {
        v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*a2 & 0xFFF)) +
                         24LL);
        v31 = *(_QWORD*)(v30 + 448);
        for (i = *(_QWORD*)(v30 + 456); v31 != i; v31 += 4) {
          v33 = *(_QWORD*)(a1 + 24);
          v40[0] = v19;
          v34 = *(_QWORD*)(v33 + 32);
          if (v34 == 0) {
            GameRoutine_60a310(0);
          }
          result = (*(__int64 (**)(__int64, _QWORD*, __int64))(
              *(_QWORD*)v34 + 48LL))(v34, v40, v31);
        }
      }
    LABEL_39:
      if (v22 == 0) {
        return result;
      }
      v18 = *(_QWORD*)(v22 + 432);
      v19 = v22;
      if (v18 == 0) {
        v35 = *(_QWORD*)(v22 + 440);
        v19 = v22;
        if (v35 != 0) {
          v36 = *(unsigned __int8*)(v35 + 16);
          v18 = 0;
          v19 = v22;
          if (v36 <= 8) {
            while (1) {
              v37 = v36 + 1;
              if (((v39 >> v36) & 2) != 0) {
                v18 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v36 + 1) + 556000);
                if (v18 != 0) {
                  break;
                }
              }
              ++v36;
              if (v37 == 9) {
                v18 = 0;
                v19 = v22;
                goto LABEL_24;
              }
            }
            v19 = v22;
          }
        }
      }
    }
    v29 = 32;
    goto LABEL_34;
  }
  return result;
}

_QWORD* GameHr_72fa00(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 i;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  unsigned int v35;
  _DWORD* v36;
  __int64 v37;
  _QWORD v38[4];
  _QWORD* v39;
  unsigned int v40;
  _QWORD v41[4];
  _QWORD* v42;
  char v43;

  v2 = *(_QWORD*)(a1 + 8);
  result = v38;
  v38[0] = GameData_1f94100;
  v39 = v38;
  if (v2 == 0) {
  LABEL_49:
    v34 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v34))((__int64)result);
  }
  v5 = *(_QWORD*)(*GameData_212ce98[0] + 160);
  v6 = GameData_212c880[0];
  v7 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v8 = *(_QWORD*)(v7 + 8LL * (*a2 & 0xFFF));
  v9 = *(unsigned __int8*)(v8 + 278);
  v10 = *(unsigned __int8*)(v8 + 279);
  if ((*a2 & 0xFFF) != 0) {
    v11 = GameRoutine_84edc0(v2 + 1744, *(_QWORD*)(v8 + 24) + 224LL);
    v7 = *(_QWORD*)(*v6 + 64);
    v12 = *a2 & 0xFFF;
  }
  else {
    v12 = 0;
    v11 = 0;
  }
  v13 = *(_QWORD*)(v7 + 8 * v12);
  v36 = a2;
  if (v13 != 0) {
    v14 = *(unsigned __int8*)(v13 + 106);
    if (v14 == 1) {
      v13 = *(_QWORD*)(v2 + 440);
      if (v13 == 0) {
        goto LABEL_16;
      }
      v13 = *(unsigned __int8*)(v13 + 16);
      if (v13 <= 3) {
        LODWORD(v13) = GameData_1a82ec0[v13];
        goto LABEL_16;
      }
    }
    else if (v14 == 2) {
      v15 = *(_QWORD*)(v2 + 440);
      if (v15 != 0) {
        v16 = *(_BYTE*)(v15 + 16);
      }
      else {
        v16 = 9;
      }
      LODWORD(v13) = 1 << v16;
      goto LABEL_16;
    }
    LODWORD(v13) = 0;
  }
LABEL_16:
  v40 = v13;
  v17 = GameRoutine_6ea9d0(&v40);
  if (v17 != 0) {
    v18 = v17;
    v37 = v5 + 8;
    v19 = *(_QWORD*)(v17 + 432);
    if (v19 == 0) {
      v19 = *(_QWORD*)(v17 + 440);
      if (v19 != 0) {
        v20 = *(unsigned __int8*)(v19 + 16);
        if (v20 <= 8) {
          while (1) {
            v35 = v20 + 1;
            if (((v40 >> v20) & 2) != 0) {
              v19 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                               24LL * (unsigned __int8)(v20 + 1) + 556000);
              if (v19 != 0) {
                break;
              }
            }
            v20 = v35;
            if (v35 == 9) {
              goto LABEL_20;
            }
          }
        }
        else {
        LABEL_20:
          v19 = 0;
        }
      }
    }
    v21 = v11 + v10;
    while (1) {
    LABEL_23:
      v22 = v19;
      v23 = *(char*)(v18 + 584);
      v24 = *(char*)(v18 + 585);
      v25 = GameRoutine_752b40(
          (unsigned int)*(char*)(v2 + 584), (unsigned int)*(char*)(v2 + 585),
          *(unsigned int*)(v2 + 592), *(unsigned int*)(v2 + 592), v23, v24,
          *(unsigned int*)(v18 + 592), *(unsigned int*)(v18 + 592));
      if (v25 < v9 || (int)v25 > v21) {
        goto LABEL_37;
      }
      v43 = 0;
      v42 = v41;
      v41[0] = GameData_1f94310;
      v41[1] = v37;
      v41[2] = &v43;
      GameRoutine_6c8a80(v18, v23, v24, v41);
      if (v42 == v41) {
        break;
      }
      if (v42 != nullptr) {
        v27 = 40;
      LABEL_32:
        (*(void (**)(__int64))(*v42 + v27))((__int64)v42);
      }
      if (v43 == 1) {
        v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*v36 & 0xFFF)) +
                         24LL);
        v29 = *(_QWORD*)(v28 + 448);
        for (i = *(_QWORD*)(v28 + 456); v29 != i; v29 += 4) {
          v41[0] = v18;
          if (v39 == nullptr) {
            GameRoutine_60a310(0);
          }
          (*(void (**)(_QWORD*, _QWORD*, __int64))(*v39 + 48LL))(v39, v41, v29);
        }
      }
    LABEL_37:
      if (v22 == 0) {
        goto LABEL_46;
      }
      v19 = *(_QWORD*)(v22 + 432);
      v18 = v22;
      if (v19 == 0) {
        v31 = *(_QWORD*)(v22 + 440);
        v18 = v22;
        if (v31 != 0) {
          v32 = *(unsigned __int8*)(v31 + 16);
          v19 = 0;
          v18 = v22;
          if (v32 <= 8) {
            while (1) {
              v33 = v32 + 1;
              if (((v40 >> v32) & 2) != 0) {
                v19 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v32 + 1) + 556000);
                if (v19 != 0) {
                  break;
                }
              }
              ++v32;
              if (v33 == 9) {
                v19 = 0;
                v18 = v22;
                goto LABEL_23;
              }
            }
            v18 = v22;
          }
        }
      }
    }
    v27 = 32;
    goto LABEL_32;
  }
LABEL_46:
  result = v39;
  if (v39 == v38) {
    goto LABEL_49;
  }
  if (v39 == nullptr) {
    return result;
  }
  v34 = 40;
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v34))((__int64)result);
}

float* GameHr_739120()
{
  __int64 v1;
  _BYTE v2[200];

  GameRoutine_10c830(v2, 0.0f);
  *(struct PseudoSret*)(&v1) = GameRoutine_ff2d0(
      "SE_SYS_Decide_Unit", "SE_SYS_Decide_Unit", v2, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v2);
  return GameRoutine_731180(*(float**)(GameData_21cd130 + 48));
}

void GameHr_7392c0()
{
  __int64 v0;
  _BYTE v1[200];

  GameRoutine_10c830(v1, 0.0f);
  *(struct PseudoSret*)(&v0) = GameRoutine_ff2d0(
      "SE_SYS_Cancel_Unit", "SE_SYS_Cancel_Unit", v1, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v1);
  GameRoutine_7317c0(*(_QWORD*)(GameData_21cd130 + 48));
}

__int64 GameHr_739690(__int64 a1)
{
  __int64 v3;
  _BYTE v4[200];

  GameRoutine_10c830(v4, 0.0f);
  *(struct PseudoSret*)(&v3) = GameRoutine_ff2d0(
      "SE_SYS_Menu_Open", "SE_SYS_Menu_Open", v4, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v4);
  return GameRoutine_86c160(a1);
}

__int64 GameHr_7397a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  _BYTE v9[200];

  v2 = *GameData_212ce98[0];
  v3 = *(_QWORD*)(*GameData_212ce98[0] + 96);
  GameRoutine_72b4a0(v3);
  GameRoutine_72b6c0(v3);
  GameRoutine_72a260(*(_QWORD*)(v2 + 152));
  v4 = (_QWORD*)GameData_21cd120;
  v5 = *(_QWORD*)(GameData_21cd120 + 128);
  if (*(_BYTE*)(v5 + 56) == 1) {
    *(_BYTE*)(v5 + 56) = 0;
  }
  if (v4[12] != 0) {
    v6 = v4[13];
    v4[12] = 0;
    v4[13] = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      GameRoutine_1a09c50(v6);
    }
    ++v4[22];
  }
  GameRoutine_10c830(v9, 0.0f);
  *(struct PseudoSret*)(&v8) = GameRoutine_ff2d0(
      "SE_SYS_Attention", "SE_SYS_Attention", v9, 0, 65537, 0, 0.0f, 1.0f);
  GameRoutine_10cff0(v9);
  return GameRoutine_19f5240(a1);
}

_BYTE* GameHr_7398c0(__int64 a1, long double a2)
{
  __int64* v3;
  _BYTE* result;
  _BYTE* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  char* v23;
  char* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  int v31;
  int v32;

  v3 = GameData_212cfd0[0];
  result = (_BYTE*)(*GameData_212cfd0[0] + 8);
  if (*result != 0) {
    result = (_BYTE*)GameRoutine_6ea8c0(result, a2);
    if (result != nullptr) {
      v5 = result;
      if ((GameRoutine_744480(*v3) & 1) != 0) {
        GameData_21762a8 = -1;
        GameData_22736e0 = 0;
      LABEL_18:
        v9 = v29;
        v10 = (unsigned int)(char)v5[584];
        v11 = (unsigned int)(char)v5[585];
        v12 = *GameData_212ce88[0];
        v13 = *(unsigned int*)(*v3 + 52);
        LODWORD(v29[0]) = 3215362;
        GameRoutine_748f80(v12, v5, v10, v11, v13, v29);
        v14 = *((_DWORD*)v5 + 148);
        v15 = *GameData_212cfc0[0];
        v16 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
        *(_DWORD*)(v16 + 184) = v14;
        *(_DWORD*)(v16 + 188) = v14;
        *(_BYTE*)(v15 + 24) = 1;
        v17 = GameData_212ce98[0];
        v18 = *GameData_212ce98[0];
        v19 = *(_QWORD*)(*GameData_212ce98[0] + 96);
        GameRoutine_72b4a0(v19);
        GameRoutine_72b6c0(v19);
        GameRoutine_72a260(*(_QWORD*)(v18 + 152));
        v20 = *v17;
        v21 = (char)v5[584];
        v22 = (char)v5[585];
        v29[2] = v5;
        v23 = *((char**)v5 + 75);
        v24 = *((char**)v5 + 76);
        v30 = v29;
        v25 = *(_QWORD*)(v20 + 96);
        v29[0] = GameData_1f94290;
        v29[1] = v25;
        if (v23 == v24) {
          goto LABEL_24;
        }
        do {
          v26 = *v23 + v21;
          v31 = v23[1] + v22;
          v32 = v26;
          if (v30 == nullptr) {
            GameRoutine_60a310(0);
          }
          result = (_BYTE*)(*(__int64 (**)(_QWORD*, int*, int*))(*v30 + 48LL))(
              v30, &v32, &v31);
          v23 += 4;
        } while (v23 != v24);
        v9 = v30;
        if (v30 == v29) {
        LABEL_24:
          v27 = 32;
        }
        else {
          if (v30 == nullptr) {
            goto LABEL_26;
          }
          v27 = 40;
        }
        result = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v9 + v27))(v9);
      LABEL_26:
        v28 = *GameData_21309c8[0];
        if (*GameData_21309c8[0] != 0) {
          *(_DWORD*)(v28 + 872) = 0;
          *(_QWORD*)(v28 + 880) = 0;
          *(_QWORD*)(v28 + 896) = 0;
          *(_QWORD*)(v28 + 912) = 0;
          *(_QWORD*)(v28 + 928) = 0;
          *(_DWORD*)(v28 + 864) = -16777216;
          *(_BYTE*)(v28 + 868) = -1;
          *(_QWORD*)(v28 + 888) = &GameData_1a9f09e;
          *(_QWORD*)(v28 + 904) = &GameData_1a9f09e;
          *(_QWORD*)(v28 + 920) = &GameData_1a9f09e;
          *(_QWORD*)(v28 + 936) = &GameData_1a9f09e;
        }
        return result;
      }
      v6 = *(_QWORD**)(a1 + 192);
      *(_QWORD*)(a1 + 152) = 0;
      *(_QWORD*)(a1 + 192) = 0;
      if (v6 == (_QWORD*)(a1 + 160)) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_10;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_10:
      v8 = *(_QWORD*)(a1 + 8);
      if (v8 == 0) {
        goto LABEL_18;
      }
      while (1) {
        if (*(_BYTE*)v8 == 2) {
          if (*(_DWORD*)(v8 + 32) == 12) {
            *(_QWORD*)(a1 + 16) = v8;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            goto LABEL_18;
          }
        }
        else if (*(_BYTE*)v8 == 0) {
          goto LABEL_18;
        }
        v8 += 64;
      }
    }
  }
  return result;
}

__int64 GameHr_73c0e0(_DWORD* a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  char* v24;
  int v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  unsigned int v31;
  unsigned int v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  unsigned int v39;
  _QWORD v42[4];
  _QWORD* v43;
  int v44;
  char* v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD v50[2];
  int v51;
  int v52;

  v50[0] = 0;
  v50[1] = 0;
  v49 = v50;
  LODWORD(v42[0]) = 17;
  v2 = GameRoutine_6ea9d0(v42);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 432);
    v4 = v2;
    if (v3 == 0) {
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v39 = v5 - 3;
          while (1) {
            if (v39 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v39 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = 1;
    while (1) {
    LABEL_8:
      v7 = *(_DWORD*)(v4 + 592);
      v8 = v3;
      if ((GameRoutine_6c8830(v4) & 1) != 0) {
        v9 = *(_QWORD*)(v4 + 400);
        v10 = *(_QWORD*)(v9 + 88);
        if ((*(_BYTE*)(v4 + 418) & 4) == 0) {
          v9 = *(_QWORD*)(v9 + 88);
        }
        if (v10 != 0 && v9 != 0) {
          v12 = *(unsigned __int8*)(v9 + 417);
          if (v7 <= v12) {
            v7 = v12;
          }
        }
      }
      if (v6 <= v7) {
        v6 = v7;
      }
      if (v8 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v8 + 432);
      v4 = v8;
      if (v3 == 0) {
        v13 = *(_QWORD*)(v8 + 440);
        v4 = v8;
        if (v13 != 0) {
          v14 = *(unsigned __int8*)(v13 + 16);
          v3 = 0;
          v4 = v8;
          if (v14 <= 8) {
            v15 = v14 - 3;
            while (1) {
              if (v15 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v15 == 6) {
                v3 = 0;
                v4 = v8;
                goto LABEL_8;
              }
            }
            v4 = v8;
          }
        }
      }
    }
  }
  else {
    v6 = 1;
  }
  v16 = (__int64*)GameData_21ca240;
  v17 = GameData_21ca248;
  if (GameData_21ca240 != GameData_21ca248) {
    while (1) {
      v18 = *v16;
      v44 = 0;
      v45 = nullptr;
      v46 = nullptr;
      v19 = *(unsigned __int8*)(v18 + 56);
      v20 = (unsigned int)*(char*)(v18 + 54);
      v21 = (unsigned int)*(char*)(v18 + 55);
      v48 = v18;
      v47 = 0;
      v22 = v6 >= v19 ? (unsigned int)v19 : (unsigned int)v6;
      GameRoutine_74d660(&v44, v22, v20, v21);
      v23 = v45;
      v24 = v46;
      v42[0] = GameData_1f94c58;
      v42[1] = &v49;
      v42[2] = &v48;
      v43 = v42;
      if (v45 == v46) {
        break;
      }
      do {
        v25 = *v23;
        v51 = v23[1];
        v52 = v25;
        if (v43 == nullptr) {
          GameRoutine_60a310(0);
        }
        (*(void (**)(_QWORD*, int*, int*))(*v43 + 48LL))(v43, &v52, &v51);
        v23 += 4;
      } while (v23 != v24);
      v26 = v43;
      if (v43 == v42) {
        goto LABEL_42;
      }
      if (v43 != nullptr) {
        v27 = 40;
        goto LABEL_43;
      }
    LABEL_44:
      if (v45 != nullptr) {
        v46 = v45;
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v28 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v28, v45);
      }
      if (++v16 == (__int64*)v17) {
        goto LABEL_48;
      }
    }
    v26 = v42;
  LABEL_42:
    v27 = 32;
  LABEL_43:
    (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
    goto LABEL_44;
  }
LABEL_48:
  if (v50[0] != 0) {
    v29 = v50[0];
    v30 = v50;
    v31 = *a1 + (*a2 << 8);
    do {
      v32 = *(_DWORD*)(v29 + 28);
      v33 = (_QWORD*)v29;
      v34 = v30;
      v35 = v32 < v31;
      if (v32 >= v31) {
        v30 = v33;
      }
      v29 = v33[v35];
    } while (v29 != 0);
    if (v30 != v50) {
      v36 = v32 >= v31 ? v33 : v34;
      if (v31 >= *((_DWORD*)v36 + 7)) {
        if (v32 >= v31) {
          v37 = v33;
        }
        else {
          v37 = v34;
        }
        *a1 = *((char*)v37 + 32);
        *a2 = *((char*)v37 + 33);
      }
    }
  }
  return GameRoutine_742cc0();
}

__int64 GameHr_73c610(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _BYTE v14[32];
  _BYTE* v15;
  char v16[32];
  _QWORD* v17;

  if (result == 0) {
    return result;
  }
  v2 = *(_QWORD*)(result + 440);
  v3 = result;
  if (v2 == 0 || *(_BYTE*)(v2 + 16) != 4) {
    return result;
  }
  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      v15 = v14;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v14);
      v6 = v3;
      v5 = v15;
      goto LABEL_10;
    }
    v5 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    v15 = v5;
  }
  else {
    v5 = nullptr;
    v15 = nullptr;
  }
  v6 = v3;
LABEL_10:
  v7 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 80, 16, 0);
  v8 = v7;
  v7[2] = v6;
  *v7 = GameData_1f94cd8;
  if (v5 != nullptr) {
    if (v5 == v14) {
      v7[8] = v7 + 4;
      (*(void (**)(_BYTE*))(*(_QWORD*)v5 + 24LL))(v5);
    }
    else {
      v7[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  else {
    v7[8] = 0;
  }
  v9 = *(_DWORD*)(v3 + 592);
  v17 = v8;
  if ((GameRoutine_6c8830(v3) & 1) != 0) {
    v10 = *(_QWORD*)(v3 + 400);
    v11 = *(_QWORD*)(v10 + 88);
    if ((*(_BYTE*)(v3 + 418) & 4) == 0) {
      v10 = *(_QWORD*)(v10 + 88);
    }
    if (v11 != 0 && v10 != 0) {
      v12 = *(unsigned __int8*)(v10 + 417);
      if ((int)v9 <= v12) {
        v9 = v12;
      }
    }
  }
  GameRoutine_73bd40(v9, v16);
  (*(void (**)(_QWORD*))(*v8 + 40LL))(v8);
  result = (__int64)v15;
  if (v15 == v14) {
    v13 = 32;
  }
  else {
    if (v15 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v15 + v13))((__int64)v15);
}

__int64 GameHr_73ca80(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned int v14;
  unsigned __int64 v15;
  int v16;
  int v17;
  unsigned __int64 v18;
  __int64** v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 primeEm;
  unsigned __int64 v24;
  float v25;
  unsigned __int64 v26;
  float v27;
  float v28;
  _BOOL8 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64* v52;
  _QWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 i;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  int v61;
  bool v62;
  int v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64** v66;
  __int64* v67;
  unsigned __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  __int64 (***v75)(_QWORD);
  __int64 (***v76)(_QWORD);
  __int64 (***v77)(_QWORD);
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  _QWORD* v90;
  unsigned __int64 v91;
  float v92;
  _BYTE v93[4];

  v2 = GameData_21caab0;
  if (GameData_21caab0 == 0) {
    return result;
  }
  if ((~*(_DWORD*)(GameData_21caab0 + 92) & 0x110) == 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
    if (v3 != 0) {
      do {
        v1 = *(_QWORD*)(v3 + 432);
        LOBYTE(v88) = 0;
        result = GameRoutine_6dd190(v3, &v88, 1);
        if (*(unsigned __int16*)(v3 + 494) >= 2u) {
          *(_WORD*)(v3 + 494) = 0;
        }
        if ((int)result >= 1) {
          v4 = 1;
        }
        else {
          v4 = result;
        }
        if (v4 != *(__int16*)(v3 + 492)) {
          *(_WORD*)(v3 + 492) = v4;
        }
        v3 = v1;
      } while (v1 != 0);
      v2 = GameData_21caab0;
      if (GameData_21caab0 == 0) {
        return result;
      }
    }
  }
  if ((*(_BYTE*)(v2 + 92) & 2) == 0) {
    return result;
  }
  v5 = *(_QWORD*)(*GameData_212c790 + 8);
  v6 = *(_DWORD*)(v5 + 56);
  v7 = *(__int64***)(v5 + 8);
  v8 = *(__int64***)(v5 + 16);
  if ((v6 & 0x80000000) == 0) {
    while (v7 != v8) {
      v10 = *v7++;
      v9 = v10;
      if (*((_DWORD*)v10 + 21) == v6) {
        goto LABEL_26;
      }
    }
  LABEL_21:
    result = GameRoutine_13305c0(result);
    if (result == 0) {
      return result;
    }
    goto LABEL_27;
  }
  if (v7 == v8) {
    goto LABEL_21;
  }
  while (1) {
    v9 = *v7;
    if ((*v7)[12] == 0 && v9[69] == 0) {
      break;
    }
    if (++v7 == v8) {
      goto LABEL_21;
    }
  }
LABEL_26:
  result = *v9;
  if (*v9 == 0) {
    return result;
  }
LABEL_27:
  v90 = nullptr;
  v91 = 0;
  v88 = 0;
  v89 = 0;
  v85 = result;
  v92 = 1.0f;
  v11 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556024LL);
  v12 = (_QWORD*)GameData_212bf68;
  while (v11 != 0) {
    v13 = v11;
    v14 = *(unsigned __int8*)(v11 + 501);
    v11 = *(_QWORD*)(v11 + 432);
    v15 = v89;
    v16 = v14 & 0x1F | (v14 >> 5 << 8);
    if ((*(_BYTE*)(v13 + 418) & 0x20) != 0) {
      v17 = v16;
    }
    else {
      v17 = -1;
    }
    if (v89 != 0) {
      v18 = v89 - 1;
      if ((v89 & (v89 - 1)) != 0) {
        v1 = v17;
        if (v89 <= v17) {
          v1 = v17 % v89;
        }
      }
      else {
        v1 = v18 & v17;
      }
      v19 = *(__int64***)(v88 + 8 * v1);
      if (v19 != nullptr) {
        v20 = *v19;
        if (v20 != nullptr) {
          if ((v89 & v18) == 0) {
            while (1) {
              v22 = v20[1];
              if (v22 == v17) {
                if (*((_DWORD*)v20 + 4) == v17) {
                  goto LABEL_126;
                }
              }
              else if ((v22 & v18) != v1) {
                goto LABEL_51;
              }
              v20 = (__int64*)*v20;
              if (v20 == nullptr) {
                goto LABEL_51;
              }
            }
          }
          do {
            v21 = v20[1];
            if (v21 == v17) {
              if (*((_DWORD*)v20 + 4) == v17) {
                goto LABEL_126;
              }
            }
            else {
              if (v21 >= v89) {
                v21 %= v89;
              }
              if (v21 != v1) {
                break;
              }
            }
            v20 = (__int64*)*v20;
          } while (v20 != nullptr);
        }
      }
    }
  LABEL_51:
    primeEm = GameRoutine_651b90(*v12, 32, 16, 0);
    v24 = v91;
    v25 = v92;
    v26 = primeEm;
    *(_QWORD*)primeEm = 0;
    *(_QWORD*)(primeEm + 8) = v17;
    *(_DWORD*)(primeEm + 16) = v17;
    *(_QWORD*)(primeEm + 24) = v13;
    v27 = (float)(v24 + 1);
    if (v15 != 0 && (float)(v25 * (float)v15) >= v27) {
      goto LABEL_117;
    }
    v28 = v27 / v25;
    v29 = (v15 & (v15 - 1)) != 0;
    if (v15 < 3) {
      v29 = true;
    }
    v30 = v29 | (2 * v15);
    v31 = vcvtps_u32_f32(v28);
    if (v30 <= v31) {
      v32 = v31;
    }
    else {
      v32 = v30;
    }
    if (v32 == 1) {
      v32 = 2;
    }
    else if ((v32 & (v32 - 1)) != 0) {
      primeEm = GameRoutine_1a09d00(v32);
      v15 = v89;
      v32 = primeEm;
    }
    if (v32 <= v15) {
      if (v32 >= v15) {
        goto LABEL_112;
      }
      primeEm = vcvtps_u32_f32((float)v91 / v92);
      if (v15 < 3 || (v15 & (v15 - 1)) != 0) {
        primeEm = GameRoutine_1a09d00(primeEm);
      }
      else {
        v37 = 1LL << -(char)__clz(primeEm - 1);
        if (primeEm >= 2) {
          primeEm = v37;
        }
      }
      if (v32 <= primeEm) {
        v32 = primeEm;
      }
      if (v32 >= v15) {
        goto LABEL_112;
      }
      if (v32 == 0) {
        v49 = v88;
        v88 = 0;
        if (v49 != 0) {
          v50 = 128;
          if (*(_QWORD*)(*v12 + 200LL) == 0) {
            v50 = 56;
          }
          GameRoutine_1a0a4e0(*v12 + v50, v49);
        }
        v89 = 0;
        goto LABEL_112;
      }
    }
    if (v32 >> 61 != 0) {
      GameRoutine_60a210(primeEm);
    }
    v33 = GameRoutine_651b90(*v12, 8 * v32, 16, 0);
    v34 = v88;
    v88 = v33;
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v12 + 200LL) == 0) {
        v35 = 56;
      }
      GameRoutine_1a0a4e0(*v12 + v35, v34);
    }
    v89 = v32;
    if (v32 >= 8) {
      v36 = 0;
      do {
        *(_QWORD*)(v88 + 8 * v36) = 0;
        *(_QWORD*)(v88 + 8 * v36 + 8) = 0;
        *(_QWORD*)(v88 + 8 * v36 + 16) = 0;
        *(_QWORD*)(v88 + 8 * v36 + 24) = 0;
        *(_QWORD*)(v88 + 8 * v36 + 32) = 0;
        *(_QWORD*)(v88 + 8 * v36 + 40) = 0;
        *(_QWORD*)(v88 + 8 * v36 + 48) = 0;
        v38 = v88 + 8 * v36;
        v36 += 8;
        *(_QWORD*)(v38 + 56) = 0;
      } while ((v32 & 0x1FFFFFFFFFFFFFF8LL) != v36);
    }
    else {
      v36 = 0;
    }
    v39 = v32 & 7;
    if ((v32 & 7) != 0) {
      v40 = 8 * v36;
      do {
        --v39;
        *(_QWORD*)(v88 + v40) = 0;
        v40 += 8;
      } while (v39 != 0);
    }
    v41 = v90;
    if (v90 != nullptr) {
      v42 = v90[1];
      v43 = v32 - 1;
      if ((v32 & (v32 - 1)) != 0) {
        if (v42 >= v32) {
          v42 %= v32;
        }
        *(_QWORD*)(v88 + 8 * v42) = &v90;
        v44 = (_QWORD*)*v41;
        if (*v41 == 0) {
          goto LABEL_112;
        }
        while (2) {
          v45 = v44[1];
          if (v45 >= v32) {
            v45 %= v32;
          }
          if (v45 != v42) {
            if (*(_QWORD*)(v88 + 8 * v45) == 0) {
              *(_QWORD*)(v88 + 8 * v45) = v41;
            LABEL_89:
              v41 = v44;
              v44 = (_QWORD*)*v44;
              v42 = v45;
              if (v44 == nullptr) {
                goto LABEL_112;
              }
              continue;
            }
            *v41 = *v44;
            *v44 = **(_QWORD**)(v88 + 8 * v45);
            **(_QWORD**)(v88 + 8 * v45) = v44;
            v44 = v41;
          }
          break;
        }
        v45 = v42;
        goto LABEL_89;
      }
      v46 = v42 & v43;
      *(_QWORD*)(v88 + 8 * v46) = &v90;
      while (1) {
        v47 = (_QWORD*)*v41;
        if (*v41 == 0) {
          break;
        }
        v48 = v47[1] & v43;
        if (v48 == v46) {
          v41 = (_QWORD*)*v41;
        }
        else if (*(_QWORD*)(v88 + 8 * v48) != 0) {
          *v41 = *v47;
          *v47 = **(_QWORD**)(v88 + 8 * v48);
          **(_QWORD**)(v88 + 8 * v48) = v47;
        }
        else {
          *(_QWORD*)(v88 + 8 * v48) = v41;
          v41 = v47;
          v46 = v48;
        }
      }
    }
  LABEL_112:
    v15 = v89;
    if ((v89 & (v89 - 1)) != 0) {
      if (v89 <= v17) {
        v1 = v17 % v89;
      }
      else {
        v1 = v17;
      }
    }
    else {
      v1 = (v89 - 1) & v17;
    }
  LABEL_117:
    v51 = v88;
    v52 = *(unsigned __int64**)(v88 + 8 * v1);
    if (v52 != nullptr) {
      *(_QWORD*)v26 = *v52;
      *v52 = v26;
    }
    else {
      v53 = v90;
      v90 = (_QWORD*)v26;
      *(_QWORD*)v26 = v53;
      *(_QWORD*)(v51 + 8 * v1) = &v90;
      if (*(_QWORD*)v26 != 0) {
        v54 = *(_QWORD*)(*(_QWORD*)v26 + 8LL);
        if ((v15 & (v15 - 1)) != 0) {
          if (v54 >= v15) {
            v54 %= v15;
          }
        }
        else {
          v54 &= v15 - 1;
        }
        *(_QWORD*)(v88 + 8 * v54) = v26;
      }
    }
    ++v91;
  LABEL_126:;
  }
  result = (__int64)(*(struct PseudoSret*)(&v86) = GameRoutine_134b980(v85),
                     (void*)(&v86));
  v55 = v86;
  if (v87 != v86) {
    for (i = 0; i < (v57 - v55) >> 3; ++i) {
      v58 = *(_QWORD**)(v55 + 8 * i);
      v59 = v58[71];
      v60 = v58[72];
      if (v59 == v60) {
        goto LABEL_176;
      }
      do {
        v61 = *(_BYTE*)(v59 + 501) & 0x1F;
        if ((*(_BYTE*)(v59 + 418) & 0x20) == 0) {
          v61 = -1;
        }
        v62 = v89 == 0 || v91 == 0;
        if (v62) {
          goto LABEL_156;
        }
        v63 = v61 | ((_DWORD)i << 8);
        v64 = v89 - 1;
        if ((v89 & (v89 - 1)) != 0) {
          v65 = v63;
          if (v89 <= v63) {
            v65 = v63 % v89;
          }
        }
        else {
          v65 = v64 & v63;
        }
        v66 = *(__int64***)(v88 + 8 * v65);
        if (v66 == nullptr || (v67 = *v66) == nullptr) {
        LABEL_156:
          v93[0] = 0;
          result = GameRoutine_6dd190(v59, v93, 1);
          if (*(_WORD*)(v59 + 494) != 0) {
            *(_WORD*)(v59 + 494) = 0;
          }
          v70 = result & ((int)result >> 31);
          if (v70 != *(__int16*)(v59 + 492)) {
            *(_WORD*)(v59 + 492) = v70;
          }
          *(_DWORD*)(v59 + 416) |= 0x28u;
          goto LABEL_161;
        }
        if ((v89 & v64) == 0) {
          while (1) {
            v69 = v67[1];
            if (v69 == v63) {
              if (*((_DWORD*)v67 + 4) == v63) {
                goto LABEL_163;
              }
            }
            else if ((v69 & v64) != v65) {
              goto LABEL_156;
            }
            v67 = (__int64*)*v67;
            if (v67 == nullptr) {
              goto LABEL_156;
            }
          }
        }
        while (1) {
          v68 = v67[1];
          if (v68 == v63) {
            break;
          }
          if (v68 >= v89) {
            v68 %= v89;
          }
          if (v68 != v65) {
            goto LABEL_156;
          }
        LABEL_146:
          v67 = (__int64*)*v67;
          if (v67 == nullptr) {
            goto LABEL_156;
          }
        }
        if (*((_DWORD*)v67 + 4) != v63) {
          goto LABEL_146;
        }
      LABEL_163:
        v71 = v67[3];
        v93[0] = 0;
        v72 = *(unsigned __int16*)(v71 + 492);
        result = GameRoutine_6dd190(v59, v93, 1);
        if (*(_WORD*)(v59 + 494) != 0 &&
            v72 != *(unsigned __int16*)(v59 + 494)) {
          *(_WORD*)(v59 + 494) = 0;
        }
        if ((int)result >= (__int16)v72) {
          v73 = (__int16)v72;
        }
        else {
          v73 = result;
        }
        if ((v72 & 0x8000u) == 0) {
          v74 = v73;
        }
        else {
          v74 = 0;
        }
        if (v74 != *(__int16*)(v59 + 492)) {
          *(_WORD*)(v59 + 492) = v74;
        }
        if ((*(_BYTE*)(v59 + 418) & 0x20) != 0) {
          *(_BYTE*)(v59 + 501) &= 0x1Fu;
        }
      LABEL_161:
        v59 += 2224;
      } while (v59 != v60);
      v55 = v86;
      v58 = *(_QWORD**)(v86 + 8 * i);
    LABEL_176:
      v75 = (__int64 (***)(_QWORD))v58[77];
      v76 = (__int64 (***)(_QWORD))v58[76];
      if (v76 != v75) {
        v77 = v75 - 278;
        do {
          result = (**v77)(v77);
          v62 = v77 == v76;
          v77 -= 278;
        } while (!v62);
        v55 = v86;
      }
      v57 = v87;
      v58[77] = v76;
    }
  }
  if (v55 != 0) {
    v78 = *v12;
    v87 = v55;
    v79 = 128;
    if (*(_QWORD*)(v78 + 200) == 0) {
      v79 = 56;
    }
    result = GameRoutine_1a0a4e0(v78 + v79, v55);
  }
  v80 = v90;
  if (v90 != nullptr) {
    do {
      v81 = (_QWORD*)*v80;
      if (*(_QWORD*)(*v12 + 200LL) != 0) {
        v82 = 128;
      }
      else {
        v82 = 56;
      }
      result = GameRoutine_1a0a4e0(*v12 + v82, v80);
      v80 = v81;
    } while (v81 != nullptr);
  }
  v83 = v88;
  v88 = 0;
  if (v83 != 0) {
    v84 = 128;
    if (*(_QWORD*)(*v12 + 200LL) == 0) {
      v84 = 56;
    }
    return GameRoutine_1a0a4e0(*v12 + v84, v83);
  }
  return result;
}

__int64 GameHr_742510()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) != 0 &&
      *(_DWORD*)(*(_QWORD*)(GameData_21ca300 + 160) + 528LL) == 0) {
    v6 = v0;
    v7 = v1;
    v4[0] = GameData_1fb2478;
    v5 = v4;
    GameRoutine_9903e0(v4);
    result = (__int64)v5;
    if (v5 == v4) {
      v3 = 32;
    }
    else {
      if (v5 == nullptr) {
        return result;
      }
      v3 = 40;
    }
    return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
  }
  return result;
}

__int64 GameHr_745b40(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[4];
  _QWORD* v27;
  __int64* v28;
  char v29;
  _QWORD v30[2];
  int v31;
  __int64 v32;
  unsigned __int64 v33;
  char v34;

  v1 = result;
  if (*(_BYTE*)(result + 20) != 4) {
    goto LABEL_15;
  }
  v2 = (unsigned __int16)GameData_21ca308;
  if (*(_WORD*)(result + 44) != 0) {
    v2 = *(unsigned __int16*)(result + 44);
  }
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v2) +
                 73LL) &
       0xFE) == 8) {
    v3 = *(_QWORD*)(result + 12648);
    *(_DWORD*)(result + 12620) = 0;
    if (v3 != 0) {
      v4 = *(_QWORD**)(result + 12640);
      if (v4 != nullptr) {
        v5 = GameData_212bf68;
        do {
          v6 = (_QWORD*)*v4;
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)v5 + v7, v4);
          v4 = v6;
        } while (v6 != nullptr);
      }
      v8 = *(_QWORD*)(v1 + 12632);
      *(_QWORD*)(v1 + 12640) = 0;
      if (v8 != 0) {
        v9 = v8 & 7;
        if (v8 >= 8) {
          v23 = v8 & 0xFFFFFFFFFFFFFFF8LL;
          v10 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v10 + 48) = 0;
            v24 = *(_QWORD*)(v1 + 12624) + 8 * v10;
            v10 += 8;
            *(_QWORD*)(v24 + 56) = 0;
          } while (v23 != v10);
        }
        else {
          v10 = 0;
        }
        if (v9 != 0) {
          v25 = 8 * v10;
          do {
            --v9;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + v25) = 0;
            v25 += 8;
          } while (v9 != 0);
        }
      }
      *(_QWORD*)(v1 + 12648) = 0;
    }
    *(_DWORD*)(v1 + 12664) = 0;
  }
  else {
  LABEL_15:
    v29 = 0;
    v34 = 0;
    v30[0] = 0;
    *(_QWORD*)((char*)v30 + 5) = 0;
    v28 = GameData_212d1f8[0] + 2;
    v31 = -1;
    v32 = 0;
    v33 = 0xFFFFFFFF00000000LL;
    GameRoutine_772f60(&v28, result);
    v11 = *(_QWORD*)(v1 + 12648);
    *(_DWORD*)(v1 + 12620) = 0;
    if (v11 != 0) {
      v12 = *(_QWORD**)(v1 + 12640);
      if (v12 != nullptr) {
        v13 = GameData_212bf68;
        do {
          v14 = (_QWORD*)*v12;
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)v13 + v15, v12);
          v12 = v14;
        } while (v14 != nullptr);
      }
      v16 = *(_QWORD*)(v1 + 12632);
      *(_QWORD*)(v1 + 12640) = 0;
      if (v16 != 0) {
        v17 = v16 & 7;
        if (v16 >= 8) {
          v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
          v18 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + 8 * v18 + 48) = 0;
            v20 = *(_QWORD*)(v1 + 12624) + 8 * v18;
            v18 += 8;
            *(_QWORD*)(v20 + 56) = 0;
          } while (v19 != v18);
        }
        else {
          v18 = 0;
        }
        if (v17 != 0) {
          v21 = 8 * v18;
          do {
            --v17;
            *(_QWORD*)(*(_QWORD*)(v1 + 12624) + v21) = 0;
            v21 += 8;
          } while (v17 != 0);
        }
      }
      *(_QWORD*)(v1 + 12648) = 0;
    }
    *(_DWORD*)(v1 + 12664) = 0;
    v26[0] = GameData_1f94f00;
    v26[1] = v1;
    v27 = v26;
    GameRoutine_775580(&v28, v1 + 312, v26);
    result = (__int64)v27;
    if (v27 == v26) {
      v22 = 32;
    }
    else {
      if (v27 == nullptr) {
        return result;
      }
      v22 = 40;
    }
    return (*(__int64 (**)(__int64))(*v27 + v22))((__int64)v27);
  }
  return result;
}

bool GameHr_748d40(__int64 a1, int a2, int a3)
{
  int* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  _BOOL8 result;
  int v20;
  int v21;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  unsigned int v26;
  char* v27;
  bool v30;
  _QWORD v31[4];
  _QWORD* v32;
  char v33;

  v3 = *(int**)(a1 + 8);
  v4 = *v3;
  if ((*v3 & 0xC2) == 0) {
    goto LABEL_24;
  }
  LODWORD(v5) = a2 + 32 * a3;
  v5 = (unsigned int)v5 >= 0x400 ? 0LL : (unsigned int)v5;
  v6 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v5;
  if (*(_BYTE*)(v6 + 8) == 0) {
    goto LABEL_24;
  }
  v7 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * *(unsigned __int8*)(v6 + 8);
  v8 = *(unsigned __int8*)(v6 + 8) > 0xFAu || v7 == 2224;
  if (v8 || *(_QWORD*)(v7 - 1832) == 0) {
    goto LABEL_24;
  }
  v9 = *(_QWORD*)(a1 + 8);
  if ((v4 & 0x10000) == 0) {
    goto LABEL_19;
  }
  v10 = a2;
  v11 = a3;
  v13 = (unsigned int)*(char*)(v7 - 1640);
  v14 = (unsigned int)*(char*)(v7 - 1639);
  v15 = *(_QWORD*)(*GameData_212ce98[0] + 160) +
        ((unsigned __int64)*((unsigned __int8*)v3 + 4) << 7) + 8;
  v33 = 0;
  v32 = v31;
  v31[0] = GameData_1f94310;
  v31[1] = v15;
  v31[2] = &v33;
  GameRoutine_6c8a80(v7 - 2224, v13, v14, v31);
  if (v32 == v31) {
    v16 = 32;
    goto LABEL_16;
  }
  a3 = v11;
  a2 = v10;
  if (v32 != nullptr) {
    v16 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v32 + v16))((__int64)v32);
    a3 = v11;
    a2 = v10;
  }
  if (v33 != 1) {
    goto LABEL_23;
  }
  v9 = *(_QWORD*)(a1 + 8);
LABEL_19:
  v17 = *(unsigned __int8*)(v9 + 4);
  v18 = *(unsigned __int8*)(*(_QWORD*)(v7 - 1784) + 16LL);
  if (v18 == v17) {
    goto LABEL_23;
  }
  if (*(_BYTE*)(*(_QWORD*)(v7 - 1784) + 16LL) != 0) {
    if (*(_BYTE*)(v9 + 4) == 0 && v18 == 3) {
      goto LABEL_23;
    }
    goto LABEL_45;
  }
  if (v17 == 3) {
  LABEL_23:
    v4 = *v3;
    goto LABEL_24;
  }
LABEL_45:
  v4 = *v3;
  if ((*v3 & 2) != 0 ||
      (v4 & 0x4000) == 0 &&
          (v18 != *(unsigned __int8*)(GameData_21ca2f8 + 24) ||
           (v4 & 0x40) != 0 && (*(_BYTE*)(v7 - 1808) & 1) != 0 ||
           (v4 & 0x80) != 0 && (*(_BYTE*)(v7 - 246) & 2) != 0)) {
    return false;
  }
LABEL_24:
  if ((v4 & 0x20) == 0) {
    return true;
  }
  v20 = *(_DWORD*)(GameData_21cd0e0 + 172);
  v21 = *(_DWORD*)(GameData_21cd0e0 + 176);
  if (a2 == v20 && a3 == v21) {
    return false;
  }
  v23 = *(unsigned int*)(GameData_21cd0e0 + 160);
  if ((int)v23 < 1) {
    return true;
  }
  v24 = (unsigned __int8*)(GameData_21cd0e0 + 32);
  v25 = v23 - 1;
  do {
    v26 = *v24++;
    v27 = (char*)GameData_212cf50 + v26;
    v20 += *v27;
    v21 += v27[256];
    result = a2 != v20 || a3 != v21;
    v30 = v25-- != 0;
  } while (result && v30);
  return result;
}

__int64 GameHr_7515a0(__int64 a1, unsigned int* a2, unsigned int* a3,
                      __int64 a4)
{
  int v5;
  _QWORD* v9;
  int v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  int v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  char* v22;
  char* v23;
  unsigned int v25;
  unsigned int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  unsigned __int8* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned __int8* v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  __int64 v44;
  unsigned __int8* v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  __int64 v50;
  int v51;
  __int64 v52;
  unsigned __int8* v53;
  int v54;
  __int64 v55;
  __int64 v57;
  _QWORD v58[4];
  _QWORD* v59;
  int v60;
  int v61;

  *a3 = -1;
  *a2 = -1;
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 2) == 0) {
    return 0;
  }
  v5 = *(_DWORD*)(a1 + 148);
  v58[2] = a2;
  v58[3] = a3;
  v58[0] = GameData_1f95488;
  v58[1] = a1;
  v9 = v58;
  v59 = v58;
  if ((v5 & 0x80000000) == 0) {
    v10 = *(_DWORD*)(a1 + 152);
    v60 = v10;
    v61 = v5;
    GameRoutine_752040(v58, &v61, &v60);
    if (*(int*)(a1 + 136) >= 1) {
      v11 = 0;
      v12 = (char*)GameData_212cf50;
      do {
        v13 = &v12[*(unsigned __int8*)(a1 + 8 + v11)];
        v5 += *v13;
        v10 += v13[256];
        v60 = v10;
        v61 = v5;
        if (v59 == nullptr) {
          GameRoutine_60a310(0);
        }
        (*(void (**)(_QWORD*, int*, int*))(*v59 + 48LL))(v59, &v61, &v60);
        ++v11;
      } while (v11 < *(int*)(a1 + 136));
    }
    v9 = v59;
    if (v59 != v58) {
      if (v59 != nullptr) {
        v14 = 40;
      LABEL_11:
        (*(void (**)(__int64))(*v9 + v14))((__int64)v9);
      }
      v15 = *a2;
      if ((*a2 & 0x80000000) == 0) {
        v16 = *a3;
        v17 = *(_DWORD*)(a1 + 148);
        v18 = *(_DWORD*)(a1 + 152);
        if (v15 == v17 && v16 == v18) {
          return 1;
        }
        v20 = *(unsigned int*)(a1 + 136);
        if ((int)v20 >= 1) {
          v21 = 0;
          v22 = (char*)GameData_212cf50;
          while (1) {
            v23 = (char*)GameData_212cf50 + *(unsigned __int8*)(a1 + 8 + v21);
            v17 += *v23;
            v18 += v23[256];
            if (v15 == v17 && v16 == v18) {
              break;
            }
            if (v20 == ++v21) {
              return 0;
            }
          }
          v25 = v21 + 1;
          v57 = a1 + 8;
          while (1) {
            v26 = *(_DWORD*)(a1 + 148);
            v27 = v25 - 1;
            if ((v26 & 0x80000000) == 0) {
              v28 = *(_DWORD*)(a1 + 136);
              v29 = v28 >= v27 ? v25 - 1 : *(_DWORD*)(a1 + 136);
              if (v29 >= 1) {
                if ((unsigned int)v29 >= 8) {
                  v31 = (unsigned __int8*)(a1 + 15);
                  v32 = 0;
                  if (v28 >= (int)v21) {
                    v33 = v21;
                  }
                  else {
                    v33 = *(_DWORD*)(a1 + 136);
                  }
                  v34 = -(__int64)(v33 & 0x7FFFFFF8);
                  do {
                    v32 -= 8;
                    v35 = v26 + v22[*(v31 - 7)] + v22[*(v31 - 6)] +
                          v22[*(v31 - 5)] + v22[*(v31 - 4)] + v22[*(v31 - 3)] +
                          v22[*(v31 - 2)];
                    v36 = *(v31 - 1);
                    v37 = *v31;
                    v31 += 8;
                    v26 = v35 + v22[v36] + v22[v37];
                  } while (v34 != v32);
                  v30 = -v32;
                  if ((v29 & 7) == 0) {
                    goto LABEL_43;
                  }
                }
                else {
                  v30 = 0;
                  if ((v29 & 7) == 0) {
                    goto LABEL_43;
                  }
                }
                if (v28 >= (int)v21) {
                  LOBYTE(v28) = v21;
                }
                v38 = v28 & 7;
                v39 = (unsigned __int8*)(v57 + v30);
                do {
                  v40 = *v39++;
                  --v38;
                  v26 += v22[v40];
                } while (v38 != 0);
              }
            }
          LABEL_43:
            v41 = *(_DWORD*)(a1 + 152);
            if ((v41 & 0x80000000) == 0) {
              v42 = *(_DWORD*)(a1 + 136);
              v43 = v42 >= v27 ? v25 - 1 : *(_DWORD*)(a1 + 136);
              if (v43 >= 1) {
                if ((unsigned int)v43 >= 8) {
                  v45 = (unsigned __int8*)(a1 + 15);
                  v46 = 0;
                  if (v42 >= (int)v21) {
                    v47 = v21;
                  }
                  else {
                    v47 = *(_DWORD*)(a1 + 136);
                  }
                  v48 = -(__int64)(v47 & 0x7FFFFFF8);
                  do {
                    v46 -= 8;
                    v49 = v41 + v22[*(v45 - 7) + 256] + v22[*(v45 - 6) + 256] +
                          v22[*(v45 - 5) + 256] + v22[*(v45 - 4) + 256] +
                          v22[*(v45 - 3) + 256] + v22[*(v45 - 2) + 256];
                    v50 = *(v45 - 1);
                    v51 = *v45;
                    v45 += 8;
                    v41 = v49 + v22[v50 + 256] + v22[v51 + 256];
                  } while (v48 != v46);
                  v44 = -v46;
                  if ((v43 & 7) == 0) {
                    goto LABEL_61;
                  }
                }
                else {
                  v44 = 0;
                  if ((v43 & 7) == 0) {
                    goto LABEL_61;
                  }
                }
                if (v42 >= (int)v21) {
                  LOBYTE(v42) = v21;
                }
                v52 = v42 & 7;
                v53 = (unsigned __int8*)(v57 + v44);
                do {
                  v54 = *v53++;
                  --v52;
                  v41 += v22[v54 + 256];
                } while (v52 != 0);
              }
            }
          LABEL_61:
            v55 = *(_QWORD*)(a1 + 184);
            if (v55 == 0) {
              v55 = GameData_21ca2f0;
              *(_QWORD*)(a1 + 184) = GameData_21ca2f0;
            }
            if ((GameRoutine_747a00(*(_QWORD*)(v55 + 8), v26, v41, a4, 0) &
                 1) != 0) {
              return 1;
            }
            LODWORD(v21) = v21 - 1;
            result = 1;
            *a2 = v26;
            *a3 = v41;
            if (v25-- <= 1) {
              return result;
            }
          }
        }
      }
      return 0;
    }
  }
  v14 = 32;
  goto LABEL_11;
}

bool GameHr_757ed0(_BOOL8 result, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;
  int v7;

  v7 = 0;
  if (result) {
    v5[0] = GameData_1f959d8;
    v5[1] = &v7;
    v6 = v5;
    GameRoutine_757f60(result, a2, a3, a4, v5);
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return v7 > 0;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v6 + v4))((__int64)v6);
    return v7 > 0;
  }
  return result;
}

__int64 GameHr_769d60(__int64 a1, __int64 a2, _DWORD* a3, __n128 a4,
                      long double a5)
{
  const char* v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int128 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  long double v16;
  long double v17;
  int v18;

  if (a2 == 0) {
    return 0;
  }
  v6 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*a3 & 0xFFF)) +
                       776LL);
  if (GameData_21ee240 == 0 || *(_BYTE*)(GameData_21ee240 + 152) != 3 ||
      (((v7 = *(_DWORD*)(GameData_21ee240 + 156)) & 8) != 0 ? (v8 = 2)
                                                            : (v8 = 3),
       (v8 & v7) != 0)) {
    if (GameData_21ec550 == 0 ||
        (*(float*)((v9 = GameData_21ec550 +
                         ((unsigned __int64)*(
                              unsigned __int8*)(GameData_21ec550 + 480)
                          << 6)) +
                   172) != *(float*)(v9 + 168)
             ? (v11 = *(_OWORD*)(v9 + 208))
             : (v10 = a1,
                (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(
                    v9 + 160),
                a1 = v10),
         *((float*)&v11 + 3) != 1.0 ||
             (v12 = a1,
              a4 = ((__n128 (*)(unsigned __int64, float)) *
                    (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                  v9 + 160, *((float*)&v11 + 3)),
              a1 = v12, ((float*)&a4)[3] != 1.0))) {
      v14 = "Bmap_Warp_Hit";
      if (v6 != nullptr && *v6 != 0) {
        v14 = v6;
      }
      return GameRoutine_76b550(a1, a2, v14, 0);
    }
  }
  v18 = 1065353216;
  if (*(_BYTE*)(a2 + 176) == 1) {
    v13 = *(_QWORD*)(a2 + 152);
    ((uint32_t*)&a4)[0] = 1.0;
  }
  else {
    if (*(float*)(a2 + 160) <= 0.0) {
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(a2 + 152) + 8LL))(a2 + 152, &v18, a2 + 184) &
           1) == 0) {
        return 0;
      }
      (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152);
      LODWORD(v16) = v18;
      (*(void (**)(__int64, long double, long double))(
          *(_QWORD*)(a2 + 152) + 24LL))(a2 + 152, v17, v16);
    LABEL_23:
      *(_QWORD*)(a2 + 160) = 0;
      *(_WORD*)(a2 + 176) = 256;
      *(_WORD*)(a2 + 20) |= 8u;
      return 0;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152);
    v13 = *(_QWORD*)(a2 + 152);
  }
  LODWORD(a5) = 1.0;
  (*(void (**)(__int64, long double, long double))(v13 + 24))(
      a2 + 152, *(long double*)&a4, a5);
  goto LABEL_23;
}

__int64 GameHr_775510(__int64 a1, long double a2)
{
  char v2;
  __int64 v3;
  _QWORD v5[4];
  _QWORD* v6;

  v5[0] = GameData_1f97a90;
  v6 = v5;
  v2 = GameRoutine_773420(a1, (__int64)v5, a2);
  if (v6 == v5) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v6 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v6 + v3))((__int64)v6);
  }
  return v2 & 1;
}

__int64 GameHr_778860(__int64 a1, long double a2)
{
  char v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;

  v11[0] = GameData_1f97f90;
  v11[1] = a1;
  v12 = v11;
  v3 = GameRoutine_773420(a1, (__int64)v11, a2);
  if (v12 == v11) {
    v4 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v12 + v4))((__int64)v12);
LABEL_6:
  if ((v3 & 1) != 0) {
    v5 = *(unsigned __int16*)(a1 + 32);
    if (*(_WORD*)(a1 + 32) == 0) {
      v5 = *(unsigned __int16*)GameData_212cea0;
    }
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v5) +
                   336LL) &
         0x40) != 0 &&
        (*(_DWORD*)(a1 + 28) & 0x80000000) == 0) {
      v6 = *(unsigned int*)(a1 + 12348);
      if ((_DWORD)v6 != 0) {
        v7 = a1 + 60;
        do {
          v8 = *(_DWORD*)(v7 + 8);
          if (((v8 >> *(_DWORD*)(a1 + 28)) & 1) != 0) {
            *(_DWORD*)(a1 + 37080) |= v8;
            v9 = GameRoutine_8450e0(a1 + 24744, (unsigned int)*(char*)(v7 + 1),
                                    (unsigned int)*(char*)(v7 + 2));
            GameRoutine_844950(v9, v7);
          }
          --v6;
          v7 += 12;
        } while (v6 != 0);
      }
    }
  }
  return v3 & 1;
}

__int64 GameHr_77a0c0(__int64 a1, unsigned int a2, char a3, char a4)
{
  unsigned int v4;
  int v5;
  char v7;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  signed int v17;
  __int64 v18;
  int v19;
  int v20;
  signed int v21;
  __int64 v22;
  _QWORD v24[3];
  char v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;

  v4 = a2;
  if ((a2 & 0x80000000) != 0) {
    return v4;
  }
  v5 = *(_DWORD*)(a1 + 12348);
  if (v5 < 1) {
    return v4;
  }
  v7 = a4 & 1;
  v9 = *(_DWORD*)(a1 + 12348);
  v28 = 0;
  v29 = 0;
  v27 = 0;
  LODWORD(v24[0]) = 0;
  do {
    GameRoutine_7d6200(&v27, v24);
    ++LODWORD(v24[0]);
  } while (SLODWORD(v24[0]) < v5);
  v12 = v27;
  if (GameData_21cd140 != 0) {
    v24[2] = GameData_21cd140;
    v25 = v7;
    v24[0] = GameData_1f98010;
    v24[1] = a1;
    v26 = v24;
    v30 = v24;
    if (v27 == v28) {
      v13 = v24;
    }
    else {
      GameRoutine_a17d20(v27, v28, &v30, (2 * __clz((v28 - v27) >> 2)) ^ 0x7E,
                         1);
      v13 = v26;
      if (v26 != v24) {
        if (v26 != nullptr) {
          v14 = 40;
        LABEL_12:
          (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v13 + v14))(
              v13, v12, v10, v11);
        }
        v12 = v27;
        if (v28 != v27) {
          v15 = 0;
          while (*(_DWORD*)(v27 + 4 * v15) != v4) {
            if ((v28 - v27) >> 2 == ++v15) {
              goto LABEL_19;
            }
          }
          v4 = v15;
        }
        goto LABEL_19;
      }
    }
    v14 = 32;
    goto LABEL_12;
  }
LABEL_19:
  v16 = *(_DWORD*)(a1 + 28);
  v17 = *(_DWORD*)(a1 + 12348);
  v18 = a1 + 68;
  v19 = v4;
  if ((a3 & 1) != 0) {
    v20 = v5 - 1;
  }
  else {
    v20 = v5 + 1;
  }
  while (1) {
    v19 = (v20 + v19) % v5;
    v21 = *(_DWORD*)(v12 + 4LL * v19);
    if (v21 < v17 &&
        (v16 < 0 || (*(_DWORD*)(v18 + 12LL * v21) & (1 << v16)) != 0)) {
      break;
    }
    if (--v9 == 0) {
      v21 = v4;
      break;
    }
  }
  v28 = v12;
  v22 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v22 = 56;
  }
  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v22, v12);
  return (unsigned int)v21;
}

__int64 GameHr_77a3e0(__int64 a1, unsigned int a2, char a3, char a4)
{
  unsigned int v4;
  int v6;
  char v7;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v28[3];
  char v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;

  v4 = a2;
  if ((a2 & 0x80000000) != 0) {
    return v4;
  }
  v6 = *(_DWORD*)(a1 + 24692);
  if (v6 < 1) {
    return v4;
  }
  v7 = a4 & 1;
  v9 = *(_DWORD*)(a1 + 24692);
  v32 = 0;
  v33 = 0;
  v31 = 0;
  LODWORD(v28[0]) = 0;
  do {
    GameRoutine_7d6200(&v31, v28);
    ++LODWORD(v28[0]);
  } while (SLODWORD(v28[0]) < v6);
  if (GameData_21cd140 != 0) {
    v12 = v32;
    v29 = v7;
    v28[2] = GameData_21cd140;
    v28[0] = GameData_1f98090;
    v28[1] = a1;
    v30 = v28;
    v34 = v28;
    if (v31 == v32) {
      v13 = v28;
    }
    else {
      GameRoutine_a17d20(v31, v32, &v34, (2 * __clz((v32 - v31) >> 2)) ^ 0x7E,
                         1);
      v13 = v30;
      if (v30 != v28) {
        if (v30 != nullptr) {
          v14 = 40;
        LABEL_12:
          (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v13 + v14))(
              v13, v12, v10, v11);
        }
        if (v32 != v31) {
          v15 = 0;
          while (*(_DWORD*)(v31 + 4 * v15) != v4) {
            if ((v32 - v31) >> 2 == ++v15) {
              goto LABEL_19;
            }
          }
          v4 = v15;
        }
        goto LABEL_19;
      }
    }
    v14 = 32;
    goto LABEL_12;
  }
LABEL_19:
  v16 = v4;
  v17 = GameData_212cfb8[0];
  if ((a3 & 1) != 0) {
    v18 = v6 - 1;
  }
  else {
    v18 = v6 + 1;
  }
  v19 = a1 + 12404;
  do {
    v16 = (v18 + v16) % v6;
    v20 = v19 + 12LL * *(int*)(v31 + 4LL * v16);
    if ((GameRoutine_753570((unsigned int)*(char*)(v20 + 1),
                            (unsigned int)*(char*)(v20 + 2)) &
         1) != 0) {
      if (*(_BYTE*)(v20 + 5) != 0 &&
              (v22 = GameRoutine_6ea8c0(v20 + 5, v21)) != 0 &&
              *(_QWORD*)(v22 + 392) != 0 ||
          (*(__int16*)(v20 + 6) & 0x8000000000000000LL) == 0 &&
              (v23 = *(_QWORD*)(*(_QWORD*)(*v17 + 16) + 8LL)) != 0 &&
              ((v24 = v23 + 144LL * *(__int16*)(v20 + 6),
                ((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 272LL))(v24) & 1) !=
                    0) ||
               ((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 288LL))(v24) & 1) !=
                   0)) {
        v25 = v31;
        v4 = *(_DWORD*)(v31 + 4LL * v16);
        goto LABEL_34;
      }
    }
    --v9;
  } while (v9 != 0);
  v25 = v31;
  if (v31 == 0) {
    return v4;
  }
LABEL_34:
  v32 = v25;
  v26 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v26 = 56;
  }
  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v26, v25);
  return v4;
}

__int64 GameHr_77bc00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  char v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  char v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  bool v33;
  __int64 result;
  __int64 v35;
  _QWORD v36[4];
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  int v40;

  v7 = (unsigned int)*(char*)(a2 + 1);
  v8 = (unsigned int)*(char*)(a2 + 2);
  v9 = *(_DWORD*)(a1 + 12);
  v10 = *(_DWORD*)(a1 + 16);
  v11 = *(_DWORD*)(a1 + 20);
  if (v11 < 2) {
    v15 = *(_DWORD*)(a1 + 16);
    v16 = *(_DWORD*)(a1 + 12);
  }
  else {
    v12 = v11 + v10;
    v13 = v11 + v9;
    v14 = 10000;
    v15 = 0;
    v16 = 0;
    do {
      v17 = v8 - v10;
      v18 = v7 - v9;
      v19 = *(_DWORD*)(a1 + 12);
      if ((int)v8 - v10 < 0) {
        v17 = v10 - v8;
      }
      do {
        if (v18 >= 0) {
          v20 = v18;
        }
        else {
          v20 = -v18;
        }
        --v18;
        v21 = v20 + v17;
        if (v21 < v14) {
          v15 = v10;
          v16 = v19;
          v14 = v21;
        }
        ++v19;
      } while (v19 < v13);
      ++v10;
    } while (v10 < v12);
  }
  v38 = v3;
  v39 = v4;
  v22 = v7 - v16;
  v23 = v8 - v15;
  if (v23 <= 0) {
    v24 = ((unsigned int)v22 >> 30) & 2 | (v23 < 0);
  }
  else {
    v24 = ((unsigned int)v22 >> 30) & 2 | (v23 < 0) | 4;
  }
  if (v22 <= 0) {
    v25 = v24;
  }
  else {
    v25 = v24 | 8;
  }
  v26 = v25 - 1;
  if ((v26 & 0xF8) != 0) {
    v27 = 0xFFFFFFFFLL;
  }
  else {
    v27 = (unsigned int)(0x3FFFFFF02FF0100uLL >> (8 * v26));
  }
  v28 = *(_DWORD*)(a1 + 40) & 0xFFFLL;
  if ((_DWORD)v28 != 0) {
    v29 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v28);
    if (v29 == 0) {
      goto LABEL_35;
    }
    goto LABEL_25;
  }
  v30 = *(unsigned __int16*)(a1 + 32);
  if (*(_WORD*)(a1 + 32) == 0) {
    v30 = *(unsigned __int16*)GameData_212cea0;
  }
  v31 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v30);
  v29 = *(_QWORD*)(v31 + 192);
  v32 = *(unsigned __int8*)(v31 + 72);
  v33 = v29 == 0 || v32 > 7;
  if (!v33 && *(_BYTE*)(v29 + 105) != 0 && *(_BYTE*)(v29 + 104) != 2) {
  LABEL_25:
    LODWORD(v29) = *(_WORD*)(v29 + 16) & 0xFFF;
    goto LABEL_35;
  }
  LODWORD(v29) = 0;
LABEL_35:
  v40 = v29;
  v36[0] = GameData_1f97200;
  v36[1] = a3;
  v37 = v36;
  GameRoutine_776720(a1, v7, v8, v27, &v40, v36);
  result = (__int64)v37;
  if (v37 == v36) {
    v35 = 32;
  }
  else {
    if (v37 == nullptr) {
      return result;
    }
    v35 = 40;
  }
  return (*(__int64 (**)(__int64))(*v37 + v35))((__int64)v37);
}

_QWORD* GameHr_788c60(__int64 a1, long double a2)
{
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int128 v10;
  __int64 v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  _BOOL4 v23;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  _QWORD* result;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;

  v3 = GameData_212cfc0[0];
  v4 = *GameData_212cfc0[0];
  v5 = GameData_212cfd0[0];
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v6 = GameRoutine_6ea8c0(*GameData_212cfd0[0] + 8, a2);
  }
  else {
    v6 = 0;
  }
  GameRoutine_730e40(*(_QWORD*)(v4 + 48), v6);
  v7 = *v3;
  *(_QWORD*)(*(_QWORD*)(*v3 + 48) + 184LL) = 0x100000001LL;
  v8 = *(_QWORD*)(v7 + 48);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_21a6130) != 0) {
    v37 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v37;
    GameRoutine_1a09fe0(&GameData_21a6130);
  }
  *(_DWORD*)(v8 + 168) = 0;
  v9 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v8 + 144) = GameData_21a6120;
  v10 = *(_OWORD*)(v8 + 144);
  *((_QWORD*)&v10 + 1) = v9;
  *(_OWORD*)(v8 + 144) = v10;
  v11 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  v38 = 1065353216;
  if (*(_BYTE*)(v11 + 120) == 1) {
    (*(void (**)(__int64, float, float))(*(_QWORD*)(v11 + 96) + 24LL))(
        v11 + 96, 1.0, 1.0);
    *(_DWORD*)(v11 + 104) = 0;
  }
  else {
    if (*(float*)(v11 + 104) <= 0.75) {
      if (((*(__int64 (**)(__int64, int*, __int64))(
               *(_QWORD*)(v11 + 96) + 8LL))(v11 + 96, &v38, v11 + 128) &
           1) == 0) {
        goto LABEL_13;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v11 + 96) + 16LL))(v11 + 96);
      v13 = *(_QWORD*)(v11 + 96);
      v14 = v11 + 96;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v11 + 96) + 16LL))(v11 + 96);
      v13 = *(_QWORD*)(v11 + 96);
      v14 = v11 + 96;
    }
    (*(void (**)(__int64))(v13 + 24))(v14);
    *(_DWORD*)(v11 + 104) = 1061158912;
  }
  *(_DWORD*)(v11 + 108) = 0;
  *(_WORD*)(v11 + 120) = 256;
LABEL_13:
  v15 = GameData_212cff0[0];
  v16 = (__int64*)(*GameData_212cff0[0] + 40);
  v17 = GameData_212cea0;
  v18 = GameData_212c878[0];
  if (*(_WORD*)v16 == 0) {
    v16 = GameData_212cea0;
  }
  v19 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                   8LL * *(unsigned __int16*)v16);
  v20 = *(unsigned __int8*)(v19 + 72);
  v21 = *(unsigned __int8*)(v19 + 73);
  v23 = v21 == 1 || v21 == 7;
  if (v20 > 7 || !v23) {
    GameRoutine_a15480(a1 + 23096);
  }
  else {
    if (*(_BYTE*)(*v5 + 8) != 0) {
      v25 = GameRoutine_6ea8c0(*v5 + 8, v12);
    }
    else {
      v25 = 0;
    }
    GameRoutine_a14660(a1 + 23096, v25);
  }
  *(_QWORD*)(a1 + 23040) = a1 + 23096;
  if ((*(_DWORD*)(*v15 + 48) & 0xFFF) != 0) {
    v26 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(*v15 + 48) & 0xFFF));
    if (v26 == 0) {
      goto LABEL_44;
    }
    v27 = *(unsigned __int8*)(v26 + 105);
  }
  else {
    v29 = *(unsigned __int16*)(*v15 + 40);
    if (*(_WORD*)(*v15 + 40) == 0) {
      v29 = *(unsigned __int16*)v17;
    }
    v30 = *(_QWORD*)(*(_QWORD*)(*v18 + 64) + 8LL * v29);
    v31 = *(_QWORD*)(v30 + 192);
    v32 = *(unsigned __int8*)(v30 + 72);
    if (v31 == 0 || v32 > 7) {
      goto LABEL_44;
    }
    v27 = *(unsigned __int8*)(v31 + 105);
    if (*(_BYTE*)(v31 + 105) == 0 || *(_BYTE*)(v31 + 104) == 2) {
      goto LABEL_44;
    }
  }
  if ((unsigned int)(v27 - 2) <= 2) {
    v28 = (unsigned __int8)(v27 - 1);
    goto LABEL_45;
  }
LABEL_44:
  v28 = 4;
LABEL_45:
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v35 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_50;
    }
    v35 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v35))((__int64)result);
LABEL_50:
  v36 = *(_QWORD*)(a1 + 8);
  if (v36 != 0) {
    while (1) {
      if (*(_BYTE*)v36 == 2) {
        if (*(_DWORD*)(v36 + 32) == v28) {
          *(_QWORD*)(a1 + 16) = v36;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v36 == 0) {
        return result;
      }
      v36 += 64;
    }
  }
  return result;
}

__int64 GameHr_789670(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;
  const char* v14;
  int v15;
  __int64* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  int v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  long double v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  void* v33;
  long double v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  void* v39;
  _QWORD v40[2];
  _QWORD v41[25];

  v1 = result;
  v2 = (__int64*)GameData_212c470;
  v3 = *(_QWORD*)GameData_212c470;
  v4 = *(_DWORD*)(*(_QWORD*)GameData_212c470 + 952LL);
  if ((v4 & 1) != 0) {
    if ((GameRoutine_845bc0(*GameData_212cff0[0] + 12408,
                            *GameData_212cff0[0] + 8) &
         1) == 0) {
      GameRoutine_10c830(v41, 0.0);
      v14 = "SE_SYS_NG";
    LABEL_32:
      *(struct PseudoSret*)(v40) =
          GameRoutine_ff2d0(v14, v14, v41, 0, 65537, 0, 0.0, 1.0);
      return GameRoutine_10cff0(v41);
    }
    GameRoutine_10c830(v41, 0.0);
    *(struct PseudoSret*)(v40) = GameRoutine_ff2d0(
        "SE_SYS_Decide_M", "SE_SYS_Decide_M", v41, 0, 65537, 0, 0.0, 1.0);
    result = GameRoutine_10cff0(v41);
    v8 = 4;
    goto LABEL_25;
  }
  if ((v4 & 2) != 0) {
    v8 = 7;
  LABEL_25:
    *(_DWORD*)(v1 + 152) = v8;
    v9 = *(unsigned __int8**)(v1 + 16);
    if (v9 != nullptr) {
      v10 = *v9;
      v11 = v10 > 0x10;
      v12 = (1 << v10) & 0x1CE00;
      if (!v11 && v12 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    return result;
  }
  if ((v4 & 0x40) != 0 &&
      (*(_QWORD*)GameData_212d8b0[0] == 0 ||
       (*(_BYTE*)(*(_QWORD*)GameData_212d8b0[0] + 256LL) & 1) == 0) &&
      (*GameData_212cff8[0] == 0 ||
       *(_QWORD*)(*GameData_212cff8[0] + 96) ==
           *(_QWORD*)(*GameData_212cff8[0] + 88))) {
    v41[0] = 0;
    v41[1] = 0;
    result = GameRoutine_18aff60(result, v41);
    if ((result & 1) != 0) {
      return result;
    }
    v3 = *v2;
  }
  if (*(_BYTE*)(v3 + 807) == 1 &&
          ((*(_BYTE*)(v3 + 804) & 1) != 0 ||
           *(_BYTE*)(v3 + 940) == 1 && (*(_BYTE*)(v3 + 805) & 1) != 0 &&
               (*(_BYTE*)(v3 + 806) & 1) != 0) ||
      *(_BYTE*)(v3 + 903) == 1 &&
          ((*(_BYTE*)(v3 + 900) & 1) != 0 ||
           *(_BYTE*)(v3 + 940) == 1 && (*(_BYTE*)(v3 + 901) & 1) != 0 &&
               *(_BYTE*)(v3 + 902) == 1)) {
    if (GameData_2258178 == 0) {
      return result;
    }
    v5 = *(_DWORD*)(GameData_2258178 + 588);
    if (v5 > 2) {
      if (v5 == 4) {
        v6 = v1;
        v7 = 8;
      }
      else {
        if (v5 != 3) {
          return result;
        }
        v7 = 2;
        v6 = v1;
      }
    LABEL_57:
      result = GameRoutine_78e3c0(v6, v7);
      if ((result & 1) == 0) {
        return result;
      }
      return GameRoutine_80e090();
    }
    if (v5 == 1) {
    LABEL_56:
      v6 = v1;
      v7 = 1;
      goto LABEL_57;
    }
    if (v5 != 2) {
      return result;
    }
  LABEL_21:
    v6 = v1;
    v7 = 4;
    goto LABEL_57;
  }
  v15 = *(_DWORD*)(v3 + 948);
  if ((v15 & 0x220000) == 0) {
    if ((v15 & 0x440000) != 0) {
      v24 = GameData_212cff0[0];
      v25 = *GameData_212cff0[0];
      if (*GameData_212cfc8[0] != 0) {
        v26 = (unsigned int)GameRoutine_7c16d0(*GameData_212cfc8[0], 8);
      }
      else {
        v26 = 8;
      }
      result = GameRoutine_7797e0(v25 + 8, v26);
      if ((result & 0x80000000) != 0 ||
          (_DWORD)result == *(_DWORD*)(v1 + 272)) {
        return result;
      }
      v35 = *v24;
      *(_DWORD*)(v1 + 272) = result;
      GameRoutine_77a740(v35 + 8, result, v34);
      v36 = *(_DWORD*)(v1 + 276);
      if ((v36 & 0x80000000) != 0 ||
          (v37 = *v24, *(char*)(*v24 + 12LL * v36 + 12413) < 0) ||
          *(char*)(*v24 + 12LL * v36 + 12414) < 0) {
        v36 = *(_DWORD*)(v1 + 272);
        if ((v36 & 0x80000000) != 0) {
          v39 = GameData_212d208;
          goto LABEL_87;
        }
        v37 = *v24;
        v38 = 64;
      }
      else {
        v38 = 12408;
      }
      v39 = (void*)(v37 + v38 + 12LL * v36 + 4);
    LABEL_87:
      GameRoutine_78d280(v1, v39);
      return GameRoutine_80e090();
    }
    if ((v15 & 0x88000) != 0) {
      goto LABEL_56;
    }
    if ((v15 & 0x110000) == 0) {
      return result;
    }
    goto LABEL_21;
  }
  v16 = GameData_212cff0[0];
  v17 = *GameData_212cff0[0];
  if (*GameData_212cfc8[0] == 0) {
    goto LABEL_60;
  }
  v18 = *(_QWORD**)(*GameData_212cfc8[0] + 432);
  v19 = v18[2];
  v18 += 2;
  v20 = (*(float (**)(_QWORD*))(v19 + 16))(v18);
  v21 = (*(float (**)(_QWORD*))(*v18 + 16LL))(v18);
  v22 = GameRoutine_1a0a6a0(v21, 360.0);
  if (v20 < 0.0) {
    v22 = v22 + 360.0;
  }
  if (v22 < 45.0) {
  LABEL_45:
    v23 = 1;
    goto LABEL_51;
  }
  if (v22 >= 135.0) {
    if (v22 >= 225.0) {
      if (v22 < 315.0) {
        v27 = 4;
        goto LABEL_61;
      }
      goto LABEL_45;
    }
  LABEL_60:
    v27 = 2;
    goto LABEL_61;
  }
  v23 = 0;
LABEL_51:
  if (v23 != 0) {
    v27 = 8;
  }
  else {
    v27 = 1;
  }
LABEL_61:
  result = GameRoutine_7797e0(v17 + 8, v27);
  if ((result & 0x80000000) == 0 && (_DWORD)result != *(_DWORD*)(v1 + 272)) {
    v29 = *v16;
    *(_DWORD*)(v1 + 272) = result;
    GameRoutine_77a740(v29 + 8, result, v28);
    v30 = *(_DWORD*)(v1 + 276);
    if ((v30 & 0x80000000) != 0 ||
        (v31 = *v16, *(char*)(*v16 + 12LL * v30 + 12413) < 0) ||
        *(char*)(*v16 + 12LL * v30 + 12414) < 0) {
      v30 = *(_DWORD*)(v1 + 272);
      if ((v30 & 0x80000000) != 0) {
        v33 = GameData_212d208;
        goto LABEL_80;
      }
      v31 = *v16;
      v32 = 64;
    }
    else {
      v32 = 12408;
    }
    v33 = (void*)(v31 + v32 + 12LL * v30 + 4);
  LABEL_80:
    GameRoutine_78d280(v1, v33);
    GameRoutine_10c830(v41, 0.0);
    v14 = "SE_SYS_Cursor_Target";
    goto LABEL_32;
  }
  return result;
}

__int64 GameHr_78c950(__int64 result)
{
  __int64 v1;
  int v2;
  unsigned int v3;
  const char* v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;
  const char* v10;
  float v11;
  const char* v12;
  __int64 v13;
  _QWORD v14[2];
  _QWORD v15[25];

  v1 = result;
  v2 = *(_DWORD*)(*(_QWORD*)GameData_212c470 + 952LL);
  if ((v2 & 1) != 0) {
    if ((GameRoutine_78f500(result) & 1) == 0) {
      GameRoutine_10c830(v15, 0.0f);
      v10 = "SE_SYS_NG";
      v11 = 1.0f;
      v12 = "SE_SYS_NG";
    LABEL_27:
      *(struct PseudoSret*)(v14) =
          GameRoutine_ff2d0(v10, v12, v15, 0, 65537, 0, 0.0f, v11);
      return GameRoutine_10cff0(v15);
    }
    if (*(_DWORD*)(v1 + 152) == 8) {
      v3 = *(unsigned __int8*)(GameData_21cd0e8 + 32) - 3;
      if (v3 <= 6 && ((0x6Fu >> v3) & 1) != 0) {
        v4 = "SE_SYS_Decide_Battle";
      LABEL_26:
        GameRoutine_10c830(v15, 0.0f);
        v11 = 1.0f;
        v10 = v4;
        v12 = v4;
        goto LABEL_27;
      }
      if ((*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF) != 0) {
        v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                         8LL * (*(_DWORD*)(GameData_21cd108 + 56) & 0xFFF));
        if (v13 != 0 && *(_BYTE*)(v13 + 104) == 9) {
          v4 = "SE_SYS_Decide_H";
          goto LABEL_26;
        }
      }
    }
    v4 = "SE_SYS_Decide_M";
    goto LABEL_26;
  }
  if ((v2 & 2) != 0) {
    GameRoutine_10c830(v15, 0.0f);
    *(struct PseudoSret*)(v14) = GameRoutine_ff2d0(
        "SE_SYS_Cancel_M", "SE_SYS_Cancel_M", v15, 0, 65537, 0, 0.0f, 1.0f);
    result = GameRoutine_10cff0(v15);
    *(_DWORD*)(v1 + 152) = 4;
    v5 = *(unsigned __int8**)(v1 + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
  }
  else if ((v2 & 0x40) != 0 &&
           (GameData_21f1e08 == 0 ||
            (*(_BYTE*)(GameData_21f1e08 + 256) & 1) == 0) &&
           (GameData_21cd128 == 0 || *(_QWORD*)(GameData_21cd128 + 96) ==
                                         *(_QWORD*)(GameData_21cd128 + 88))) {
    v15[0] = 0;
    v15[1] = 0;
    return GameRoutine_18aff60(result, v15);
  }
  return result;
}

__int64 GameHr_78cb60(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  long double v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  long double v25;
  __int64 v26;
  __int16 v27;
  int v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64* v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  __int128 v41;
  __int64 v42;
  __int64 result;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _DWORD v47[50];

  v2 = GameData_212cfc8[0];
  v3 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  v47[0] = 1065353216;
  if (*(_BYTE*)(v3 + 160) == 1) {
    (*(void (**)(__int64, float, float))(*(_QWORD*)(v3 + 136) + 24LL))(
        v3 + 136, 1.0, 1.0);
    *(_DWORD*)(v3 + 144) = 0;
  }
  else {
    if (*(float*)(v3 + 144) <= 0.75) {
      if (((*(__int64 (**)(__int64, _DWORD*, __int64))(
               *(_QWORD*)(v3 + 136) + 8LL))(v3 + 136, v47, v3 + 168) &
           1) == 0) {
        goto LABEL_9;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 136) + 16LL))(v3 + 136);
      v4 = *(_QWORD*)(v3 + 136);
      v5 = v3 + 136;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 136) + 16LL))(v3 + 136);
      v4 = *(_QWORD*)(v3 + 136);
      v5 = v3 + 136;
    }
    (*(void (**)(__int64))(v4 + 24))(v5);
    *(_DWORD*)(v3 + 144) = 1061158912;
  }
  *(_DWORD*)(v3 + 148) = 0;
  *(_WORD*)(v3 + 160) = 256;
LABEL_9:
  v6 = *(_QWORD*)GameData_212d020[0];
  v7 = *(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4372LL);
  if (v7 <= 1) {
    v7 = 1;
  }
  *(_DWORD*)(v6 + 4372) = v7;
  if (*(_QWORD*)(v6 + 80) != 0) {
    v8 = *(_QWORD*)(v6 + 88);
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      GameRoutine_1a09c50(v8);
    }
    ++*(_QWORD*)(v6 + 184);
  }
  v9 = GameData_212cff0[0];
  if (*(_BYTE*)(*GameData_212cff0[0] + 37100) == 1) {
    v10 = *(_QWORD*)(v6 + 128);
    if (*(_BYTE*)(v10 + 56) == 1) {
      *(_BYTE*)(v10 + 56) = 0;
    }
    if (*(_QWORD*)(v6 + 96) != 0) {
      v11 = *(_QWORD*)(v6 + 104);
      *(_QWORD*)(v6 + 96) = 0;
      *(_QWORD*)(v6 + 104) = 0;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        GameRoutine_1a09c50(v11);
      }
      ++*(_QWORD*)(v6 + 176);
    }
  }
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v12 = 5;
  }
  else {
    v28 = *(unsigned __int8*)(a1 + 224);
    if (*(_DWORD*)(a1 + 228) != 0) {
      v29 = v28 - 3;
      if (v29 >= 0xE || ((0x206Fu >> v29) & 1) == 0) {
        goto LABEL_51;
      }
      v12 = GameData_1b3f044[(unsigned __int8)v29];
    }
    else {
      switch (v28) {
      case 5:
        v12 = 14;
        break;
      case 16:
        v12 = 16;
        break;
      case 6:
        v44 = *(_QWORD*)(a1 + 240);
        v12 = 15;
        if (v44 != 0) {
          if ((unsigned int)*(unsigned __int8*)(v44 + 250) - 33 >= 2) {
            v12 = 15;
          }
          else {
            v12 = 12;
          }
        }
        break;
      default:
        v12 = 12;
        break;
      }
    }
  }
  GameRoutine_6d8f40(*(_QWORD*)(a1 + 216), *(unsigned int*)(a1 + 232));
  v13 = *(_QWORD*)(a1 + 216);
  if (v13 != 0) {
    v14 = *(_DWORD*)(a1 + 256);
    v15 = GameData_212ce98[0];
    *(_BYTE*)(v13 + 584) = *(_DWORD*)(a1 + 252);
    *(_BYTE*)(v13 + 585) = v14;
    v16 = *v15;
    v17 = *(_QWORD*)(*v15 + 96);
    GameRoutine_72b4a0(v17);
    GameRoutine_72b6c0(v17);
    GameRoutine_72a260(*(_QWORD*)(v16 + 152));
  }
  GameRoutine_778500(*v9 + 8);
  v19 = *v9;
  v20 = *(_QWORD*)(a1 + 216);
  if (v20 == 0) {
    *(_BYTE*)(v19 + 16) = 0;
    *(_BYTE*)(v19 + 32) = *(_BYTE*)(a1 + 224);
    v30 = *(_DWORD*)(a1 + 232);
    *(_DWORD*)(v19 + 36) = v30;
    if ((v30 & 0x80000000) == 0) {
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  v21 = *(unsigned __int8*)(v20 + 2088);
  *(_BYTE*)(v19 + 16) = v21;
  *(_DWORD*)(v19 + 28) = *(_DWORD*)(v20 + 592);
  v22 = *(char*)(v20 + 584);
  v23 = *(char*)(v20 + 585);
  *(_DWORD*)(v19 + 20) = v22;
  *(_DWORD*)(v19 + 24) = v23;
  *(_BYTE*)(v19 + 32) = *(_BYTE*)(a1 + 224);
  v24 = *(unsigned int*)(a1 + 232);
  *(_DWORD*)(v19 + 36) = v24;
  if ((v24 & 0x80000000) != 0) {
  LABEL_38:
    *(_QWORD*)(v19 + 40) = 0;
    goto LABEL_39;
  }
  if (v21 != 0 && GameRoutine_6ea8c0(v19 + 16, v18) != 0) {
    v26 = GameRoutine_6ea8c0(v19 + 16, v25) + 8 * v24;
    v27 = *(_WORD*)(v26 + 828);
    *(_BYTE*)(v19 + 42) = *(_BYTE*)(v26 + 830);
    *(_WORD*)(v19 + 40) = v27;
    *(_BYTE*)(v19 + 43) = *(_BYTE*)(v26 + 831);
    *(_DWORD*)(v19 + 44) = *(_DWORD*)(v26 + 832);
  }
LABEL_39:
  v31 = *v9;
  v32 = *(_QWORD*)(a1 + 240);
  if (v32 != 0) {
    v33 = *(_DWORD*)(v31 + 48) & 0xFFFFF000 | *(_WORD*)(v32 + 16) & 0xFFF;
  }
  else {
    v33 = *(_DWORD*)(v31 + 48) & 0xFFFFF000;
  }
  *(_DWORD*)(v31 + 48) = v33;
  *(_BYTE*)(v31 + 37100) = *(_BYTE*)(a1 + 248);
  (*(void (**)(__int64))(*(_QWORD*)(v31 + 8) + 24LL))(v31 + 8);
  v34 = GameData_212cfc0[0];
  GameRoutine_730cb0(*GameData_212cfc0[0], (char*)(a1 + 260));
  v35 = *v34;
  v36 = *(char*)(a1 + 265);
  v37 = *(_QWORD*)(*v34 + 48);
  *(_DWORD*)(v37 + 184) = *(char*)(a1 + 264);
  *(_DWORD*)(v37 + 188) = v36;
  v38 = *(_QWORD*)(v35 + 48);
  *(_BYTE*)(v35 + 24) = *(_BYTE*)(a1 + 268);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)GameRoutine_1a09fd0(&GameData_21a6130) != 0) {
    v45 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v45;
    GameRoutine_1a09fe0(&GameData_21a6130);
  }
  *(_DWORD*)(v38 + 168) = 0;
  v47[0] = 0;
  v39 = DWORD2(GameData_21a6120);
  v40 = *v34;
  *(_QWORD*)(v38 + 144) = GameData_21a6120;
  v41 = *(_OWORD*)(v38 + 144);
  *((_QWORD*)&v41 + 1) = v39;
  *(_OWORD*)(v38 + 144) = v41;
  *(_BYTE*)(*(_QWORD*)(v40 + 48) + 240LL) = 1;
  v42 = *(_QWORD*)(*v2 + 432);
  if (*(_BYTE*)(v42 + 120) == 1) {
    (*(void (**)(__int64, double, double))(*(_QWORD*)(v42 + 96) + 24LL))(
        v42 + 96, 0.0, 0.0);
    *(_DWORD*)(v42 + 104) = 0;
  LABEL_48:
    *(_DWORD*)(v42 + 108) = 0;
    *(_WORD*)(v42 + 120) = 256;
    goto LABEL_49;
  }
  if (*(float*)(v42 + 104) > 0.75 ||
      ((*(__int64 (**)(__int64, _DWORD*, __int64))(*(_QWORD*)(v42 + 96) + 8LL))(
           v42 + 96, v47, v42 + 128) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v42 + 96) + 16LL))(v42 + 96);
    (*(void (**)(__int64))(*(_QWORD*)(v42 + 96) + 24LL))(v42 + 96);
    *(_DWORD*)(v42 + 104) = 1061158912;
    goto LABEL_48;
  }
LABEL_49:
  GameRoutine_10c830(v47, 0.0);
  *(struct PseudoSret*)(&v46) = GameRoutine_ff2d0(
      "SE_SYS_Cancel_M", "SE_SYS_Cancel_M", v47, 0, 65537, 0, 0.0, 1.0);
  GameRoutine_10cff0(v47);
  if (GameData_21cf830 != 0) {
    *(_DWORD*)(GameData_21cf830 + 152) = v12;
  }
LABEL_51:
  result = *(_QWORD*)(a1 + 22912);
  if (result != 0) {
    if ((*(_WORD*)(result + 136) & 1) == 0) {
      result = GameRoutine_657a50(result, 1);
    }
    *(_QWORD*)(a1 + 22912) = 0;
  }
  return result;
}

__int64 GameHr_78ece0(__int64 a1, long double a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  void* v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  _BYTE v18[200];

  v3 = GameData_212cff0[0];
  v4 = *GameData_212cff0[0];
  if (*(_DWORD*)(*GameData_212cff0[0] + 36) == -1) {
  LABEL_13:
    *(_BYTE*)(a1 + 23272) =
        *(_QWORD*)(a1 + 22936) - *(_QWORD*)(a1 + 22928) < 0x11u;
    GameRoutine_78e5d0(a1, a2);
    GameRoutine_10c830(v18, 0.0);
    *(struct PseudoSret*)(&v17) =
        GameRoutine_ff2d0("SE_SYS_Cursor_Target", "SE_SYS_Cursor_Target", v18,
                          0, 65537, 0, 0.0, 1.0);
    GameRoutine_10cff0(v18);
    return 1;
  }
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v5 = GameRoutine_6ea8c0(*GameData_212cfd0[0] + 8, a2);
    v4 = *v3;
    v6 = v5;
  }
  else {
    v6 = 0;
  }
  v7 = *(_DWORD*)(a1 + 272);
  v8 = GameData_212d208;
  v9 = v4 + 12LL * (unsigned int)v7 + 68;
  if (v7 <= -1) {
    v10 = GameData_212d208;
  }
  else {
    v10 = (void*)v9;
  }
  GameRoutine_19f3aa0(a1 + 22920, v6, v10, 0, 0);
  v11 = *(_QWORD*)(a1 + 23000);
  if (v11 != 0) {
    v12 = *(_DWORD*)(a1 + 272);
    v13 = *(_QWORD*)(a1 + 23008);
    if (v12 <= -1) {
      v14 = (__int64)v8;
    }
    else {
      v14 = *v3 + 12LL * (unsigned int)v12 + 68;
    }
    GameRoutine_78f220(a1, v14, *(_QWORD*)(a1 + 23000), *(_QWORD*)(a1 + 23008));
    v15 = GameData_21d3f58;
    *(_QWORD*)(GameData_21d3f58 + 176) = v11;
    *(_QWORD*)(v15 + 184) = v13;
    *(_BYTE*)(v15 + 192) = 0;
    goto LABEL_13;
  }
  return 0;
}

_QWORD* GameHr_7a0b00(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int16 v3;
  __int16 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  _WORD* v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  __int16 v31;
  __int16 v32;
  _QWORD* v33;
  __int64 v34;
  __int16 v35;
  __int16 v36;
  __int16 v37;
  _WORD v38[7];
  __int16 v39;
  __int16 v40;

  v1 = result[3];
  if (v1 != 0) {
    v2 = result[89];
    v33 = result;
    if (v2 == result[90]) {
      v11 = 0;
      v10 = 0;
      v9 = 0;
      v8 = 0;
      v7 = 0;
      v6 = 0;
      v5 = 0;
      v4 = 0;
      v3 = 0;
    }
    else {
      v3 = 0;
      v4 = 0;
      v5 = 0;
      v6 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v34 = result[90];
      do {
        v2 += 8;
        v35 = v5;
        v36 = v4;
        v37 = v3;
        v12 = v6;
        v13 = v8;
        v14 = v9;
        v15 = v11;
        v16 = v10;
        result = (_QWORD*)GameRoutine_7a0e10(v38, v1);
        v17 = (__int16)(v38[0] + v15);
        if (v17 <= -100) {
          v17 = -100;
        }
        if (v17 >= 100) {
          v11 = 100;
        }
        else {
          v11 = v17;
        }
        v18 = (__int16)(v38[1] + v16);
        if (v18 <= -100) {
          v18 = -100;
        }
        if (v18 >= 100) {
          v10 = 100;
        }
        else {
          v10 = v18;
        }
        v19 = (__int16)(v38[2] + v14);
        if (v19 <= -100) {
          v19 = -100;
        }
        if (v19 >= 100) {
          v9 = 100;
        }
        else {
          v9 = v19;
        }
        v20 = (__int16)(v38[3] + v13);
        if (v20 <= -100) {
          v20 = -100;
        }
        if (v20 >= 100) {
          v8 = 100;
        }
        else {
          v8 = v20;
        }
        v21 = (__int16)(v38[4] + v7);
        if (v21 <= -100) {
          v21 = -100;
        }
        if (v21 >= 100) {
          v7 = 100;
        }
        else {
          v7 = v21;
        }
        v22 = (__int16)(v38[5] + v12);
        if (v22 <= -100) {
          v22 = -100;
        }
        if (v22 >= 100) {
          v6 = 100;
        }
        else {
          v6 = v22;
        }
        v23 = (__int16)(v38[6] + v35);
        if ((__int16)v23 <= -100) {
          v23 = -100;
        }
        if (v23 >= 100) {
          v5 = 100;
        }
        else {
          v5 = v23;
        }
        if ((__int16)(v39 + v36) <= -100) {
          v24 = -100;
        }
        else {
          v24 = (__int16)(v39 + v36);
        }
        if (v24 >= 100) {
          v4 = 100;
        }
        else {
          v4 = v24;
        }
        v25 = (__int16)(v40 + v37);
        if (v25 <= -100) {
          v25 = -100;
        }
        if (v25 >= 100) {
          v3 = 100;
        }
        else {
          v3 = v25;
        }
      } while (v2 != v34);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d41b0,
                              memory_order_acquire) &
         1) == 0) {
      v28 = v6;
      v29 = v8;
      v30 = v9;
      v31 = v11;
      v32 = v10;
      result = (_QWORD*)GameRoutine_1a09fd0(&GameData_21d41b0);
      v10 = v32;
      v11 = v31;
      v9 = v30;
      v8 = v29;
      v6 = v28;
      if ((_DWORD)result != 0) {
        GameRoutine_799290(&GameData_21d40b8);
        result = (_QWORD*)GameRoutine_1a09fe0(&GameData_21d41b0);
        v10 = v32;
        v11 = v31;
        v9 = v30;
        v8 = v29;
        v6 = v28;
      }
    }
    v26 = v33[21];
    if (v26 != 0) {
      v27 = (_WORD*)(*(_QWORD*)(v33[17] +
                                8 * ((unsigned __int64)(v26 + v33[20] - 1) >>
                                     4)) +
                     244LL * (((_DWORD)v26 + *((_DWORD*)v33 + 40) - 1) & 0xF));
    }
    else {
      v27 = &GameData_21d40b8;
    }
    if (((unsigned __int16)(v10 | v11 | v9 | v8 | v7 | v6 | v5) |
         (unsigned __int16)(v4 | v3)) != 0) {
      v27[104] = v11;
      v27[105] = v10;
      v27[106] = v7;
      v27[107] = v5;
      v27[110] = v4;
      v27[108] = v3;
      v27[111] = v9;
      v27[112] = v8;
      v27[109] = v6;
    }
    else {
      v27[112] = 0;
      *((_QWORD*)v27 + 26) = 0;
      *((_QWORD*)v27 + 27) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
