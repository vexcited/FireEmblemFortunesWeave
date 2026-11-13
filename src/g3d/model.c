#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_5e39c0(_QWORD, _QWORD);
__int64 GameRoutine_a67640(_QWORD, _QWORD);
__int64 GameRoutine_a677e0(_QWORD, _QWORD);
__int64 GameRoutine_a67980(_QWORD, _QWORD);
__int64 GameRoutine_a69c80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b3cae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gxc_GpuMemory_Destroy_GpuMemory(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc0208[])();
extern __int64 (*g3d_Model_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_a67330(void);
void __attribute__((noreturn)) GameRoutine_a67b90(_QWORD);
__int64 Model_Destructor_alt1(__int64 a1,
                              long double a2) __asm__("Model_Destructor");
__int64 Model_Unknown3(__int64 result, char a2);
__int64 Model_Unknown15(__int64 a1, int a2);
__int64 Model_a65960_alt1(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6) __asm__("Model_a65960");
__int64 Model_a66080(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7);
__int64 Model_a661a0(__int64 a1, int a2, __int64 a3, int a4);
__int64* Model_a66700(__int64* result, int a2);
__int64* Model_a66d00(__int64* result, int a2);
__int64 G3DPrimitive_5e90c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5deb0(_QWORD, _QWORD);
__int64 GameRoutine_a6bec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a6bfc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_53bd0(_QWORD);
__int64 Model_a619c0(__int64 a1, __int64 a2, __int64 a3);
__int64 Model_a636e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 g3d_Model_CollectElements_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_a67be0(void);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn)) GameRoutine_a67bb0(_QWORD);
__int64 Model_a66980(__int64 a1, __int64 a2, int a3);
_QWORD* GameRoutine_a67360(_QWORD* result, unsigned __int64);
__int64 ElementRenderer_a74470(__int64 result, __int64, __int64*);
__int64 GameRoutine_5d610(_QWORD, _QWORD);
__int64 GameRoutine_5e3aa0(_QWORD, _QWORD);
__int64 GameRoutine_605c70(_QWORD);
__int64 GameRoutine_a6b760(_QWORD);
__int64 GameRoutine_a6bda0(_QWORD, _QWORD);
__int64 Model_5e2fe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Model_5e3580(_QWORD, _QWORD);
__int64 Model_5e36a0(_QWORD, _QWORD);
__int64 Model_5e37e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Model_a636e0_alt1(_QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("Model_a636e0");
__int64 Model_a64b80_alt1(_QWORD) __asm__("Model_a64b80");
__int64 Model_a66080_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("Model_a66080");
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 gxc_GpuMemory_GpuMemory_5d4d0(_QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 nn_g3d_5e2c00(_QWORD);
__int64 nn_g3d_5e3ab0(_QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
extern __int64 (*GameData_1fc0258[])();
extern __int64 (*GameData_1fc0360[])();
extern __int64 (*GameData_1fc03f0[])();
extern __int64 (*GameData_212e3a8)();
extern __int64 (*g3d_Model_WorldCallback_vtable[])();
extern char GameData_1a8d697[10];
extern char GameData_1ae5cc1[15];
float32x4_t GameRoutine_5ecf20(_QWORD*, __int64, int, float32x4_t result);
float32x4_t nn_g3d_5ed500(_QWORD*, __int64, int);
void __attribute__((noreturn)) GameRoutine_a675d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_a675f0(_QWORD);
void __attribute__((noreturn)) GameRoutine_a67610(_QWORD);
void __attribute__((noreturn)) GameRoutine_a67b70(_QWORD);
void __attribute__((noreturn)) String_60a230(_QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
__int64 Model_a61a80(__int64 a1, _QWORD* a2);
__int64 Model_a64140(__int64 result, long double a2);
void Model_a64b80(__int64 a1, long double a2);
__int64 g3d_Model_CollectElements(__int64 result, __int64 a2, __int64 a3,
                                  _QWORD* a4);
__attribute__((swiftcall)) void
Model_a66f60_alt1(PSEUDO_X8 x8_, __int64 result, __int64 a2, __int64 a3,
                  long double a5) __asm__("Model_a66f60");
__int64 GameRoutine_a6b310(__int64*, __int64*);
__int64* Model_a6aa00(__int64* result, __int64* a2, __int64* a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7);
__int64 GameRoutine_5e3ac0(_QWORD, _QWORD);
__int64 GameRoutine_5e3bc0(_QWORD, _QWORD);
__int64 Material_add560(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 Model_Unknown2(__int64 a1);
_QWORD* GameRoutine_5d610_alt1(_QWORD* result,
                               _QWORD*) __asm__("GameRoutine_5d610");
_QWORD* GameRoutine_605c70_alt1(_QWORD* result) __asm__("GameRoutine_605c70");
_QWORD* gxc_GpuMemory_Destroy_GpuMemory_alt1(_QWORD* result) __asm__(
    "gxc_GpuMemory_Destroy_GpuMemory");
_QWORD* gxc_GpuMemory_GpuMemory_5d4d0_alt1(_QWORD* result) __asm__(
    "gxc_GpuMemory_GpuMemory_5d4d0");
__int64 GameRoutine_a6b760_alt1(__int64) __asm__("GameRoutine_a6b760");
__int64 GameRoutine_a6bda0_alt1(__int64 result,
                                _QWORD*) __asm__("GameRoutine_a6bda0");
__int64 Model_5e36a0_alt1(__int64, __int64) __asm__("Model_5e36a0");
__int64 Model_5e37e0_alt1(__int64, __int64, __int64, __int64,
                          unsigned __int64) __asm__("Model_5e37e0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcmp_alt1(_QWORD, _QWORD, _QWORD) __asm__("memcmp");
__int64 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
__int64 nn_g3d_5e2c00_alt1(__int64 result) __asm__("nn_g3d_5e2c00");
bool Model_5e2fe0_alt1(__int64, __int64*, __int64,
                       unsigned __int64) __asm__("Model_5e2fe0");
unsigned __int64 Model_5e3580_alt1(__int64, __int64) __asm__("Model_5e3580");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_a675d0_alt1() __asm__("GameRoutine_a675d0");
void __attribute__((noreturn))
GameRoutine_a675f0_alt1() __asm__("GameRoutine_a675f0");
void __attribute__((noreturn))
GameRoutine_a67610_alt1() __asm__("GameRoutine_a67610");
void __attribute__((noreturn))
GameRoutine_a67b70_alt1() __asm__("GameRoutine_a67b70");
void __attribute__((noreturn)) String_60a230_alt1() __asm__("String_60a230");
__attribute__((swiftcall)) void
GameRoutine_53bd0_alt1(PSEUDO_X8, __int64) __asm__("GameRoutine_53bd0");
__int64 GameRoutine_5deb0_alt1(_QWORD*, __int64) __asm__("GameRoutine_5deb0");
__int64 Model_5e39c0(__int64, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt2(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void __attribute__((noreturn))
GameRoutine_a67330_alt1() __asm__("GameRoutine_a67330");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Model_Destructor(__int64 a1);
void Model_a65960(__int64 a1, __int64* a2);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
bool GameHr_5e2fe0(__int64, __int64*, __int64, unsigned __int64);
int memcmp_alt2(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_a6b760(__int64);
void __attribute__((noreturn)) fs_60a230();
__attribute__((swiftcall)) void Model_a66f60(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2, unsigned __int64 a3);

__int64 Model_a619c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  int v15;

  v3 = *(int*)(a1 + 644);
  v4 = *(_QWORD*)(a1 + 656);
  v8 = v4 + (v3 << 6);
  result = *(_QWORD*)(v8 + 48);
  if (result != 0) {
    v15 = *(_DWORD*)(v8 + 8);
    result = (*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)result + 48LL))(
        result, &v15, a3);
    LODWORD(v3) = *(_DWORD*)(a1 + 644);
    v4 = *(_QWORD*)(a1 + 656);
  }
  v10 = *(_QWORD*)(a1 + 664);
  v11 = (int)v3;
  v12 = (int)v3 + 1LL;
  *(_DWORD*)(a1 + 644) = v12;
  if (v12 >= (v10 - v4) >> 6) {
    v14 = 0xFFFF;
  }
  else {
    v13 = *(_DWORD*)(v4 + (v11 << 6) + 8);
    v14 = *(_DWORD*)(v4 + (v12 << 6) + 8);
    if (v14 == v13) {
      return Model_a619c0(a1, a2, a3);
    }
  }
  *(_DWORD*)(a2 + 8) = v14;
  return result;
}

__int64 Model_a61a80(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 (*v5)();
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int8* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  int v17;
  unsigned __int8* v18;
  int v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 i;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  __int64* v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64* v94;
  unsigned __int64 v95;
  _QWORD* v96;
  __int64 v97;
  signed __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64* v108;
  unsigned __int64 v109;
  _QWORD* v110;
  __int64 v111;
  signed __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64* v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  const char* v122;
  const char* v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  char* v144;
  char* v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  char* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  char* v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64* v179;
  __int64 v180;
  __int64 v181;
  __int64* v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64* v189;
  unsigned __int64 v190;
  __int64 v191;
  char* v192;
  __int64 v193;
  unsigned __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  unsigned __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  __int64 v225;
  __int64 v226;
  unsigned __int64 v227;
  __int64 j;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  int v234;
  __int64 v235;
  bool v236;
  __int64 v237;
  __int64 v238;
  int v239;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  unsigned __int64 v247;
  __int64 v248;
  unsigned __int64 v249;
  unsigned __int64 v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  int* v254;
  int v255;
  unsigned __int64 v256;
  __int64 v257;
  __int64 v258;
  unsigned __int64 v259;
  unsigned __int64 v260;
  unsigned __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  unsigned __int64 v266;
  __int64 v267;
  unsigned __int64 v268;
  unsigned __int64 v269;
  unsigned __int64 v270;
  __int64 v271;
  unsigned __int64 v272;
  __int64 v273;
  unsigned __int64 v274;
  __int64 v275;
  __int64* v276;
  unsigned int v277;
  __int64 k;
  _DWORD* v279;
  unsigned int v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  int v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  int v295;
  _QWORD* v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  _QWORD* v303;
  __int64 v304;
  __int64 result;
  __int64 v306;
  __int64 v307;
  unsigned __int64 v308;
  unsigned __int64 v309;
  unsigned __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  unsigned __int64 v314;
  __int64 v315;
  _QWORD* v316;
  _QWORD v317[3];
  struct {
    __int64 v318;
    __int64 v319;
    __int64 v320;
    __int64 v321;
    __int64 v322;
    __int64 v323;
    char v324;
    char gap121_[7];
    unsigned __int64 v325;
    __int64 v326;
    __int64 v327;
    __int64 v328;
    __int64 v329;
    __int64 v330;
    __int64 v331;
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
    __int64 v344;
    __int64 v345;
    __int64 v346;
    __int64 v347;
    __int64 v348;
    __int64 v349;
    __int64 v350;
    __int64 v351;
    __int64 v352;
    __int64 v353;
    __int64 v354;
    __int64 v355;
    __int64 v356;
    __int64 v357;
    __int64 v358;
    __int64 v359;
    __int64 v360;
    __int64 v361;
    __int64 v362;
  } v318_;
  __int64 v363;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 36) = 0;
  v2 = (_QWORD*)a1;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 32) = 1;
  *(_QWORD*)a1 = g3d_Model_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 112) = *a2;
  *(_QWORD*)(a1 + 120) = a2[1];
  v3 = a2[2];
  *(_QWORD*)(a1 + 136) = 0;
  v4 = a1 + 136;
  *(_DWORD*)(a1 + 252) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 128) = v3;
  gxc_GpuMemory_GpuMemory_5d4d0_alt1((_QWORD*)(a1 + 256));
  *(_QWORD*)(v4 + 360) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 152) = 0;
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_QWORD*)(v4 + 176) = 0;
  *(_QWORD*)(v4 + 184) = 0;
  *(_QWORD*)(v4 + 192) = 0;
  *(_QWORD*)(v4 + 200) = 0;
  *(_QWORD*)(v4 + 208) = 0;
  *(_QWORD*)(v4 + 216) = 0;
  *(_QWORD*)(v4 + 224) = 0;
  *(_QWORD*)(v4 + 232) = 0;
  *(_QWORD*)(v4 + 240) = 0;
  *(_QWORD*)(v4 + 248) = 0;
  *(_QWORD*)(v4 + 372) = 0x200000000LL;
  *(_QWORD*)(v4 + 256) = 0;
  *(_QWORD*)(v4 + 264) = 0;
  *(_QWORD*)(v4 + 272) = 0;
  *(_QWORD*)(v4 + 280) = 0;
  *(_QWORD*)(v4 + 288) = 0;
  *(_WORD*)(v4 + 368) = 1;
  *(_BYTE*)(v4 + 370) = 1;
  *(_BYTE*)(v4 + 380) = 1;
  *(_QWORD*)(v4 + 424) = 0;
  *(_QWORD*)(v4 + 440) = 0;
  *(_QWORD*)(v4 + 448) = 0;
  *(_QWORD*)(v4 + 456) = 0;
  *(_QWORD*)(v4 + 464) = 0;
  *(_DWORD*)(v4 + 472) = 2;
  *(_QWORD*)(v4 + 552) = 0;
  *(_QWORD*)(v4 + 560) = 0;
  *(_QWORD*)(v4 + 568) = 0;
  *(_QWORD*)(v4 + 480) = 0;
  *(_QWORD*)(v4 + 488) = 0;
  *(_QWORD*)(v4 + 496) = 0;
  *(_QWORD*)(v4 + 504) = 0;
  *(_QWORD*)(v4 + 512) = 0;
  *(_QWORD*)(v4 + 520) = 0;
  *(_QWORD*)(v4 + 528) = 0;
  *(_QWORD*)(v4 + 536) = 0;
  *(_DWORD*)(v4 + 544) = 0;
  *(_QWORD*)(v4 + 584) = GameData_1fc0258;
  v5 = GameData_212e3a8;
  *(_QWORD*)(v4 + 600) = 0;
  *(_QWORD*)(v4 + 616) = v4 + 584;
  v6 = v2[14];
  *(_QWORD*)(v4 + 664) = 0;
  *(_QWORD*)(v4 + 592) = v5;
  v7 = game_g_frame_clock_ptr[0];
  v8 = *game_g_frame_clock_ptr[0];
  v318_.v331 = 0;
  v318_.v332 = 8;
  v318_.v333 = 0;
  v318_.v334 = -1;
  v318_.v335 = 0;
  v318_.v336 = 8;
  v318_.v337 = 0;
  v318_.v338 = -1;
  v318_.v339 = 0;
  v318_.v340 = 8;
  v318_.v341 = 0;
  v318_.v342 = -1;
  v318_.v343 = 0;
  v318_.v344 = 8;
  v318_.v345 = 0;
  v318_.v346 = -1;
  v318_.v347 = 0;
  v318_.v348 = 8;
  v318_.v349 = 0;
  v318_.v350 = -1;
  v318_.v351 = 0;
  v318_.v352 = 8;
  v318_.v353 = 0;
  v318_.v354 = -1;
  v318_.v355 = 0;
  v318_.v356 = 8;
  v318_.v357 = 0;
  v318_.v358 = -1;
  v318_.v359 = 0;
  v318_.v360 = 8;
  v318_.v361 = 0;
  v318_.v362 = -1;
  v318_.v329 = 0;
  v318_.v330 = -1;
  v9 = *(unsigned __int16*)(v6 + 106);
  v318_.v318 = v6;
  v318_.v319 = 0;
  v318_.v320 = 0x100000001LL;
  v318_.v321 = 0x100000001LL;
  LODWORD(v318_.v322) = 1;
  v318_.v323 = 0;
  v318_.v324 = 0;
  v318_.v327 = 0;
  v318_.v328 = 8;
  v318_.v325 = 0;
  v318_.v326 = 0;
  if (v9 == 0) {
    goto LABEL_28;
  }
  v10 = *(unsigned __int8**)(v6 + 40);
  v11 = v9 & 7;
  if (v9 < 8) {
    v12 = 0;
    v13 = 1;
    if (v11 == 0) {
      goto LABEL_28;
    }
    goto LABEL_24;
  }
  v14 = 0;
  v15 = v10;
  v16 = -(__int64)((unsigned __int16)v9 & 0xFFF8);
  v13 = 1;
  do {
    v14 -= 8;
    if (v13 <= v15[91]) {
      v13 = v15[91];
    }
    LODWORD(v318_.v322) = v13;
    if (v13 <= v15[187]) {
      v13 = v15[187];
    }
    LODWORD(v318_.v322) = v13;
    if (v13 <= v15[283]) {
      v13 = v15[283];
    }
    LODWORD(v318_.v322) = v13;
    if (v13 <= v15[379]) {
      v13 = v15[379];
    }
    LODWORD(v318_.v322) = v13;
    if (v13 <= v15[475]) {
      v13 = v15[475];
    }
    LODWORD(v318_.v322) = v13;
    if (v13 <= v15[571]) {
      v13 = v15[571];
    }
    LODWORD(v318_.v322) = v13;
    if (v13 <= v15[667]) {
      v13 = v15[667];
    }
    LODWORD(v318_.v322) = v13;
    v17 = v15[763];
    v15 += 768;
    if (v13 <= v17) {
      v13 = v17;
    }
    LODWORD(v318_.v322) = v13;
  } while (v16 != v14);
  v12 = -v14;
  if (v11 != 0) {
  LABEL_24:
    v18 = &v10[96 * v12 + 91];
    do {
      v20 = *v18;
      v18 += 96;
      v19 = v20;
      if (v13 <= v20) {
        v13 = v19;
      }
      --v11;
      LODWORD(v318_.v322) = v13;
    } while (v11 != 0);
  }
LABEL_28:
  v318_.v324 = 1;
  v318_.v320 = 0x200000003LL;
  v318_.v321 = 0x100000002LL;
  v318_.v323 = 192;
  nn_g3d_5e2c00_alt1((__int64)&v318_.v318);
  v21 = *v7;
  v22 = v318_.v325;
  v363 = 16;
  v23 = *(_QWORD*)(v21 + 32);
  v317[0] = v318_.v325;
  if (v23 == 0) {
    GameRoutine_60a310_alt1();
  }
  v24 = (*(__int64 (**)(__int64, _QWORD*, __int64*))(*(_QWORD*)v23 + 48LL))(
      v23, v317, &v363);
  GameHr_5e2fe0(v4, &v318_.v318, v24, v22);
  *((_BYTE*)v2 + 248) = 1;
  v25 = Model_5e36a0_alt1(v4, v8 + 568);
  if (v25 != 0) {
    v26 = v25;
    v27 = Model_5e3580_alt1(v4, v8 + 568);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, unsigned __int64,
                                            unsigned __int64))(
        **(_QWORD**)(*v7 + 312) + 48LL))((void*)(v317), *(_QWORD*)(*v7 + 312),
                                         v26, v27);
    GameRoutine_5d610_alt1((_QWORD*)(v4 + 120), v317);
    gxc_GpuMemory_Destroy_GpuMemory_alt1(v317);
    Model_5e37e0_alt1(v4, v8 + 568, *v7 + 12880, v2[34], v26);
  }
  v28 = v2[36];
  v29 = *(unsigned __int16*)(v2[14] + 106LL);
  v313 = 16 * v29;
  v315 = v4;
  v30 = fw_memory_g_heap_manager_ptr;
  v309 = v29;
  if (v29 > (v2[38] - v28) >> 4) {
    v31 = v2[37] - v28;
    v32 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v313, 16, 0);
    v33 = v32 + v31;
    v34 = v31;
    v29 = v309;
    v35 = v32;
    v36 = v32 + 16 * v309;
    memcpy_alt1(v32, v28, v34);
    v2[36] = v35;
    v2[37] = v33;
    v2[38] = v36;
    if (v28 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v30 + v37, v28);
    }
  }
  v316 = v2;
  if ((_DWORD)v29 != 0) {
    v38 = 0;
    v39 = 112 * v29;
    while (1) {
      v41 = v2[22];
      v42 = v2[23];
      v43 = (unsigned __int64)*(unsigned __int16*)(*(_QWORD*)(v41 + v38) + 82LL)
            << 7;
      v44 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
      v44[1] = 0;
      v44[2] = 0;
      *v44 = GameData_1fc03f0;
      v45 = v44;
      v44[4] = v41 + v38;
      v44[5] = v42 + v43;
      v2 = v316;
      v44[3] = v315;
      v46 = (__int64)(v44 + 3);
      v44[6] = *(_QWORD*)(v41 + v38);
      v44[7] = *(_QWORD*)(v42 + v43);
      GameRoutine_605c70_alt1(v44 + 8);
      *((_WORD*)v45 + 56) = 0;
      v45[12] = 0;
      v45[13] = 0;
      *((_DWORD*)v45 + 30) = 0;
      GameHr_a6b760(v46);
      v48 = (__int64*)v316[37];
      v47 = v316[38];
      if ((unsigned __int64)v48 < v47) {
        *v48 = v46;
        v48[1] = (__int64)v45;
        v40 = (__int64)(v48 + 2);
      }
      else {
        v49 = v316[36];
        v50 = (unsigned __int64)v48 - v49;
        v51 = ((__int64)v48 - v49) >> 4;
        v52 = v51 + 1;
        if ((unsigned __int64)(v51 + 1) >> 60 != 0) {
          GameRoutine_a675d0_alt1();
        }
        v53 = v47 - v49;
        if (v53 >> 3 > v52) {
          v52 = v53 >> 3;
        }
        if ((unsigned __int64)v53 >= 0x7FFFFFFFFFFFFFF0LL) {
          v54 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v54 = v52;
        }
        if (v54 != 0) {
          if (v54 >> 60 != 0) {
            goto LABEL_372;
          }
          v55 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v54, 16, 0);
        }
        else {
          v55 = 0;
        }
        v56 = (__int64*)(v55 + v50);
        v57 = v55 + 16 * v54;
        *v56 = v46;
        v56[1] = (__int64)v45;
        v58 = v55 + v50 - 16 * v51;
        v40 = v55 + v50 + 16;
        memcpy_alt1(v58, v49, v50);
        v2 = v316;
        v316[36] = v58;
        v316[37] = v40;
        v316[38] = v57;
        if (v49 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v49);
        }
      }
      v38 += 112;
      v2[37] = v40;
      if (v39 == v38) {
        goto LABEL_56;
      }
    }
  }
  v40 = v2[37];
LABEL_56:
  v60 = v2[36];
  v61 = v40 - v60;
  if (v2[38] - v60 > (unsigned __int64)(v40 - v60)) {
    v62 = v61 >> 4;
    if (v40 == v60) {
      v63 = 0;
    }
    else {
      if (v62 >> 60 != 0) {
        goto LABEL_372;
      }
      v63 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v40 - v60, 16, 0);
    }
    v64 = v63 + v61;
    v65 = v63 + v61 - 16 * v62;
    memcpy_alt1(v65, v60, v40 - v60);
    v2[36] = v65;
    v2[37] = v64;
    v2[38] = v64;
    if (v60 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v60);
    }
  }
  v67 = v2[39];
  v68 = *(unsigned __int16*)(v2[14] + 108LL);
  v69 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v68 > (v2[41] - v67) >> 4) {
    v70 = v2[40] - v67;
    v71 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v68, 16, 0);
    memcpy_alt1(v71, v67, v70);
    v2[39] = v71;
    v2[40] = v71 + v70;
    v2[41] = v71 + 16 * v68;
    if (v67 != 0) {
      v72 = 128;
      if (*(_QWORD*)(*v69 + 200) == 0) {
        v72 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v69 + v72, v67);
    }
  }
  v73 = v2[42];
  if (v68 > (v2[44] - v73) >> 4) {
    v74 = v2[43] - v73;
    v75 = fw_memory_HeapManager_Allocate_alt1(*v69, 16 * v68, 16, 0);
    memcpy_alt1(v75, v73, v74);
    v2[42] = v75;
    v2[43] = v75 + v74;
    v2[44] = v75 + 16 * v68;
    if (v73 != 0) {
      v76 = 128;
      if (*(_QWORD*)(*v69 + 200) == 0) {
        v76 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v69 + v76, v73);
    }
  }
  v310 = v68;
  if ((_DWORD)v68 != 0) {
    for (i = 0; i != v310; ++i) {
      v78 = v2[15];
      v79 = v2[23] + (i << 7);
      if (v78 == 0) {
        goto LABEL_111;
      }
      v80 = *(_QWORD*)(v78 + 8);
      if (v80 == 0 || *(_QWORD*)(v78 + 24) == 0) {
        v78 = 0;
        goto LABEL_111;
      }
      v82 = *(_QWORD*)(*(_QWORD*)v79 + 8LL);
      v83 = strlen_alt1((const char*)(v82 + 2));
      v84 = std___1___hash_memory_alt1(v82 + 2, v83);
      v85 = v80 - 1;
      v86 = v84;
      if ((v80 & (v80 - 1)) != 0) {
        v87 = v84;
        if (v84 >= v80) {
          v87 = v84 % v80;
        }
      }
      else {
        v87 = v84 & v85;
      }
      v88 = *(__int64**)(*(_QWORD*)v78 + 8 * v87);
      if (v88 == nullptr) {
      LABEL_108:
        v78 = 0;
      LABEL_109:
        v2 = v316;
      LABEL_110:
        v69 = (__int64*)fw_memory_g_heap_manager_ptr;
      LABEL_111:
        Model_a66080(&v318_.v318, v79, v78, (__int64)"Base", 4,
                     (__int64)"Fallback", 8);
        v92 = v318_.v318;
        v93 = v318_.v319;
        goto LABEL_112;
      }
      v78 = *v88;
      if (*v88 == 0) {
        goto LABEL_109;
      }
      while (1) {
        v89 = *(_QWORD*)(v78 + 8);
        if (v86 == v89) {
          break;
        }
        if ((v80 & v85) != 0) {
          if (v89 >= v80) {
            v89 %= v80;
          }
        }
        else {
          v89 &= v85;
        }
        if (v89 != v87) {
          goto LABEL_108;
        }
      LABEL_94:
        v78 = *(_QWORD*)v78;
        if (v78 == 0) {
          goto LABEL_109;
        }
      }
      v90 = *(_BYTE*)(v78 + 16) >> 1;
      if ((*(_BYTE*)(v78 + 16) & 1) != 0) {
        v90 = *(_QWORD*)(v78 + 24);
      }
      if (v83 != v90) {
        goto LABEL_94;
      }
      if (v83 == -1) {
        fs_60a230();
      }
      v91 = (*(_BYTE*)(v78 + 16) & 1) != 0 ? *(_QWORD*)(v78 + 32) : v78 + 17;
      if (memcmp_alt2(v91, v82 + 2, v83) != 0) {
        goto LABEL_94;
      }
      v123 = *(const char**)(v78 + 40);
      v78 += 40;
      v122 = v123;
      if (*v123 == 0) {
        goto LABEL_109;
      }
      v2 = v316;
      if (v122[16] == 0) {
        goto LABEL_110;
      }
      v124 = strlen_alt1(v122);
      v125 = strlen_alt1(v122 + 16);
      Model_a66080(&v318_.v318, v79, v78, (__int64)v122, v124,
                   (__int64)(v122 + 16), v125);
      v92 = v318_.v318;
      v93 = v318_.v319;
      if (v318_.v318 != 0) {
        v69 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
      else {
        Model_a66080(&v318_.v318, v79, v78, (__int64)"Base", 4,
                     (__int64)"Fallback", 8);
        v92 = v318_.v318;
        v126 = v318_.v319;
        v318_.v318 = 0;
        v318_.v319 = 0;
        v69 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v93 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93);
          std___1___shared_weak_count___release_weak_alt1(v93);
        }
        v127 = v318_.v319;
        if (v318_.v319 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v318_.v319 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v127 + 16LL))(v127);
          std___1___shared_weak_count___release_weak_alt1(v127);
        }
        v93 = v126;
      }
    LABEL_112:
      v94 = (__int64*)v2[40];
      v95 = v2[41];
      if ((unsigned __int64)v94 < v95) {
        *v94 = v92;
        v94[1] = v93;
        if (v93 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 8), 1u,
                                    memory_order_relaxed);
        }
        v96 = v94 + 2;
        goto LABEL_129;
      }
      v97 = v2[39];
      v98 = (signed __int64)v94 - v97;
      v99 = ((__int64)v94 - v97) >> 4;
      v100 = v99 + 1;
      if ((unsigned __int64)(v99 + 1) >> 60 != 0) {
        GameRoutine_a675f0_alt1();
      }
      v101 = v95 - v97;
      if (v101 >> 3 > v100) {
        v100 = v101 >> 3;
      }
      if ((unsigned __int64)v101 >= 0x7FFFFFFFFFFFFFF0LL) {
        v102 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v102 = v100;
      }
      if (v102 >> 60 != 0) {
        goto LABEL_372;
      }
      v103 = fw_memory_HeapManager_Allocate_alt1(*v69, 16 * v102, 16, 0);
      v104 = (__int64*)(v103 + v98);
      *v104 = v92;
      v104[1] = v93;
      if (v93 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 8), 1u,
                                  memory_order_relaxed);
        v97 = v2[39];
        v98 = v2[40] - v97;
        v99 = v98 >> 4;
      }
      v105 = (__int64)&v104[-2 * v99];
      v106 = v103 + 16 * v102;
      v96 = v104 + 2;
      memcpy_alt1(v105, v97, v98);
      v2[39] = v105;
      v2[40] = v96;
      v2[41] = v106;
      v69 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v97 != 0) {
        v107 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v107 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v107, v97);
      }
    LABEL_129:
      v108 = (__int64*)v2[43];
      v109 = v2[44];
      v2[40] = v96;
      if ((unsigned __int64)v108 < v109) {
        *v108 = v92;
        v108[1] = v93;
        if (v93 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 8), 1u,
                                    memory_order_relaxed);
        }
        v110 = v108 + 2;
        goto LABEL_146;
      }
      v111 = v2[42];
      v112 = (signed __int64)v108 - v111;
      v113 = ((__int64)v108 - v111) >> 4;
      v114 = v113 + 1;
      if ((unsigned __int64)(v113 + 1) >> 60 != 0) {
        GameRoutine_a67610_alt1();
      }
      v115 = v109 - v111;
      if (v115 >> 3 > v114) {
        v114 = v115 >> 3;
      }
      v116 = (unsigned __int64)v115 >= 0x7FFFFFFFFFFFFFF0LL
                 ? 0xFFFFFFFFFFFFFFFLL
                 : v114;
      if (v116 >> 60 != 0) {
        goto LABEL_372;
      }
      v117 = fw_memory_HeapManager_Allocate_alt1(*v69, 16 * v116, 16, 0);
      v118 = (__int64*)(v117 + v112);
      *v118 = v92;
      v118[1] = v93;
      if (v93 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 8), 1u,
                                  memory_order_relaxed);
        v111 = v2[42];
        v112 = v2[43] - v111;
        v113 = v112 >> 4;
      }
      v119 = (__int64)&v118[-2 * v113];
      v120 = v117 + 16 * v116;
      v110 = v118 + 2;
      memcpy_alt1(v119, v111, v112);
      v2[42] = v119;
      v2[43] = v110;
      v2[44] = v120;
      v69 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v111 != 0) {
        v121 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v121 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v121, v111);
      }
    LABEL_146:
      v2[43] = v110;
      if (v93 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93);
        std___1___shared_weak_count___release_weak_alt1(v93);
      }
    }
  }
  v128 = v2[40];
  v129 = v2[39];
  v130 = v128 - v129;
  if (v2[41] - v129 > (unsigned __int64)(v128 - v129)) {
    v131 = v130 >> 4;
    if (v128 == v129) {
      v132 = 0;
    }
    else {
      if (v131 >> 60 != 0) {
        goto LABEL_372;
      }
      v132 = fw_memory_HeapManager_Allocate_alt1(*v69, v130, 16, 0);
    }
    v133 = v132 + v130;
    v134 = v132 + v130 - 16 * v131;
    memcpy_alt1(v134, v129, v130);
    v2[39] = v134;
    v2[40] = v133;
    v2[41] = v133;
    if (v129 != 0) {
      v135 = 128;
      if (*(_QWORD*)(*v69 + 200) == 0) {
        v135 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v69 + v135, v129);
    }
  }
  v136 = v2[43];
  v137 = v2[42];
  v138 = v136 - v137;
  if (v2[44] - v137 > (unsigned __int64)(v136 - v137)) {
    v139 = v138 >> 4;
    if (v136 == v137) {
      v140 = 0;
    }
    else {
      if (v139 >> 60 != 0) {
        goto LABEL_372;
      }
      v140 = fw_memory_HeapManager_Allocate_alt1(*v69, v138, 16, 0);
    }
    v141 = v140 + v138;
    v142 = v140 + v138 - 16 * v139;
    memcpy_alt1(v142, v137, v138);
    v2[42] = v142;
    v2[43] = v141;
    v2[44] = v141;
    if (v137 != 0) {
      v143 = 128;
      if (*(_QWORD*)(*v69 + 200) == 0) {
        v143 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v69 + v143, v137);
    }
  }
  v145 = (char*)v2[51];
  v144 = (char*)v2[52];
  v146 = 0x6DB6DB6DB6DB6DB7LL * ((v144 - v145) >> 3);
  v147 = v309 - v146;
  if (v309 <= v146) {
    if (v309 < v146) {
      v167 = &v145[56 * (unsigned int)v309];
      while (v144 != v167) {
        v168 = *((_QWORD*)v144 - 6);
        *((_QWORD*)v144 - 6) = 0;
        if (v168 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v168 + 8LL))(v168);
        }
        v170 = *((_QWORD*)v144 - 7);
        v144 -= 56;
        v169 = v170;
        *(_QWORD*)v144 = 0;
        if (v170 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v169 + 8LL))(v169);
        }
      }
      v2[52] = v167;
    }
  }
  else {
    v148 = v2[53];
    if (0x6DB6DB6DB6DB6DB7LL * ((v148 - (__int64)v144) >> 3) >= v147) {
      memset_alt2(v2[52], 0,
                  56LL * (unsigned int)v147 - (56 * (int)v147 - 56) % 0x38u);
      v2[52] = &v144[56LL * (unsigned int)v147 - (56 * (int)v147 - 56) % 0x38u];
    }
    else {
      v149 = 0x6DB6DB6DB6DB6DB7LL * ((v148 - (__int64)v145) >> 3);
      v150 = 2 * v149;
      if (2 * v149 <= v309) {
        v150 = v309;
      }
      if (v149 >= 0x249249249249249LL) {
        v151 = 0x492492492492492LL;
      }
      else {
        v151 = v150;
      }
      if (v151 > 0x492492492492492LL) {
      LABEL_372:
        GameRoutine_60a210_alt1();
      }
      v152 = 56 * v151;
      v153 = fw_memory_HeapManager_Allocate_alt1(*v69, 56 * v151, 16, 0);
      v154 = v153 + v144 - v145;
      v155 = v153 + v152;
      v156 = v153;
      memset_alt2(v154, 0,
                  56LL * (unsigned int)v147 - (56 * (int)v147 - 56) % 0x38u);
      if (v145 != v144) {
        v157 = v145;
        v158 = v156;
        do {
          v159 = *(_QWORD*)v157;
          *(_QWORD*)v157 = 0;
          *(_QWORD*)v158 = v159;
          v160 = *((_QWORD*)v157 + 1);
          *((_QWORD*)v157 + 1) = 0;
          *(_QWORD*)(v158 + 8) = v160;
          *(_DWORD*)(v158 + 16) = *((_DWORD*)v157 + 4);
          v161 = *((_QWORD*)v157 + 3);
          v162 = *((_QWORD*)v157 + 4);
          v163 = *((_QWORD*)v157 + 5);
          v164 = *((_QWORD*)v157 + 6);
          v157 += 56;
          *(_QWORD*)(v158 + 40) = v163;
          *(_QWORD*)(v158 + 48) = v164;
          *(_QWORD*)(v158 + 24) = v161;
          *(_QWORD*)(v158 + 32) = v162;
          v158 += 56;
        } while (v157 != v144);
        do {
          v165 = *((_QWORD*)v145 + 1);
          *((_QWORD*)v145 + 1) = 0;
          if (v165 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v165 + 8LL))(v165);
          }
          v166 = *(_QWORD*)v145;
          *(_QWORD*)v145 = 0;
          if (v166 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v166 + 8LL))(v166);
          }
          v145 += 56;
        } while (v145 != v144);
        v145 = (char*)v2[51];
      }
      v2[51] = v156;
      v2[52] = v154 + 56LL * (unsigned int)v147 - (56 * (int)v147 - 56) % 0x38u;
      v2[53] = v155;
      if (v145 != nullptr) {
        v171 = 128;
        if (*(_QWORD*)(*v69 + 200) == 0) {
          v171 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v69 + v171, (__int64)v145);
      }
    }
  }
  v172 = v2[72];
  if (v309 > (v2[74] - v172) >> 3) {
    v173 = v2[73] - v172;
    v174 = fw_memory_HeapManager_Allocate_alt1(*v69, 8 * v309, 16, 0);
    memcpy_alt1(v174, v172, v173);
    v2[72] = v174;
    v2[73] = v174 + v173;
    v2[74] = v174 + 8 * v309;
    if (v172 != 0) {
      v175 = 128;
      if (*(_QWORD*)(*v69 + 200) == 0) {
        v175 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v69 + v175, v172);
    }
  }
  v308 = 8 * v309;
  if ((_DWORD)v309 != 0) {
    v176 = 0;
    v177 = 0;
    v178 = 0;
    do {
      v179 = (__int64*)(v2[36] + v178);
      v180 = *v179;
      v181 = v179[1];
      if (v181 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v181 + 8), 1u,
                                  memory_order_relaxed);
      }
      v318_.v318 = v180;
      v318_.v319 = v181;
      v182 = (__int64*)(v2[42] +
                        16LL * *(unsigned __int16*)(*(_QWORD*)(v2[22] + v176) +
                                                    82LL));
      v183 = *v182;
      v184 = v182[1];
      if (v184 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v184 + 8), 1u,
                                  memory_order_relaxed);
      }
      v185 = v2[21];
      v318_.v320 = v183;
      v318_.v321 = v184;
      v186 = v2[51] + v177;
      v318_.v322 = v185;
      v187 = *v69;
      if ((*(unsigned __int16*)(*(_QWORD*)v185 + 60LL) |
           *(unsigned __int16*)(*(_QWORD*)v185 + 58LL)) == 0) {
        v186 = 0;
      }
      v318_.v323 = v186;
      v188 = fw_memory_HeapManager_Allocate_alt1(v187, 80, 16, 0);
      GameRoutine_a6bda0_alt1(v188, &v318_.v318);
      v189 = (__int64*)v2[73];
      v190 = v2[74];
      if ((unsigned __int64)v189 >= v190) {
        v311 = v176;
        v191 = *(_QWORD*)(v315 + 440);
        v192 = (char*)v189 - v191;
        v193 = ((__int64)v189 - v191) >> 3;
        v194 = v193 + 1;
        if ((unsigned __int64)(v193 + 1) >> 61 != 0) {
          GameRoutine_a67b70_alt1();
        }
        v195 = v190 - v191;
        if (v195 >> 2 > v194) {
          v194 = v195 >> 2;
        }
        if ((unsigned __int64)v195 >= 0x7FFFFFFFFFFFFFF8LL) {
          v196 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v196 = v194;
        }
        if (v196 != 0) {
          if (v196 >> 61 != 0) {
            goto LABEL_372;
          }
          v197 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v196, 16, 0);
        }
        else {
          v197 = 0;
        }
        v198 = v197 + 8 * v196;
        v199 = (unsigned __int64)v189 - v191;
        v200 = (__int64)&v192[v197 + -8 * v193];
        *(_QWORD*)&v192[v197] = v188;
        v201 = (__int64)&v192[v197 + 8];
        memcpy_alt1(v200, v191, v199);
        v316[72] = v200;
        v316[73] = v201;
        v316[74] = v198;
        v2 = v316;
        v69 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v191 != 0) {
          v202 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v202 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v202, v191);
        }
        v176 = v311;
        v316[73] = v201;
        if (v184 == 0) {
        LABEL_243:
          if (v181 != 0) {
            goto LABEL_244;
          }
          goto LABEL_217;
        }
      }
      else {
        *v189 = v188;
        v2[73] = v189 + 1;
        if (v184 == 0) {
          goto LABEL_243;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v184 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_243;
      }
      (*(void (**)(__int64))(*(_QWORD*)v184 + 16LL))(v184);
      std___1___shared_weak_count___release_weak_alt1(v184);
      if (v181 != 0) {
      LABEL_244:
        if (atomic_fetch_add((atomic_ullong* volatile)(v181 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v181 + 16LL))(v181);
          std___1___shared_weak_count___release_weak_alt1(v181);
        }
      }
    LABEL_217:
      v178 += 16;
      v177 += 56;
      v176 += 112;
    } while (v313 != v178);
  }
  v203 = v2[72];
  v204 = v2[73];
  v205 = v204 - v203;
  if (v2[74] - v203 > (unsigned __int64)(v204 - v203)) {
    v206 = v205 >> 3;
    if (v204 == v203) {
      v207 = 0;
    }
    else {
      if (v206 >> 61 != 0) {
        goto LABEL_372;
      }
      v207 = fw_memory_HeapManager_Allocate_alt1(*v69, v205, 16, 0);
    }
    v208 = v207 + v205;
    v209 = v207 + v205 - 8 * v206;
    memcpy_alt1(v209, v203, v205);
    v2[72] = v209;
    v2[73] = v208;
    v2[74] = v208;
    if (v203 != 0) {
      v210 = 128;
      if (*(_QWORD*)(*v69 + 200) == 0) {
        v210 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v69 + v210, v203);
    }
  }
  v211 = v2[45];
  v212 = v2[46];
  v213 = v212 - v211;
  v214 = (v212 - v211) >> 2;
  v215 = v309 - v214;
  if (v309 <= v214) {
    if (v309 >= v214) {
      goto LABEL_273;
    }
    v226 = v211 + 4 * v309;
    goto LABEL_272;
  }
  v216 = v2[47];
  if (v215 <= (v216 - v212) >> 2) {
    memset_alt2(v2[46], 0, ((4 * v309 - v213 - 4) & 0xFFFFFFFFFFFFFFFCLL) + 4);
    v226 = v212 + 4 * v215;
  LABEL_272:
    v2[46] = v226;
    goto LABEL_273;
  }
  v217 = v216 - v211;
  v218 = v217 >> 1;
  if (v217 >> 1 <= v309) {
    v218 = v309;
  }
  if ((unsigned __int64)v217 >= 0x7FFFFFFFFFFFFFFCLL) {
    v219 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v219 = v218;
  }
  if (v219 >> 62 != 0) {
    goto LABEL_372;
  }
  v220 = fw_memory_HeapManager_Allocate_alt1(*v69, 4 * v219, 16, 0);
  v221 = v2[45];
  v222 = v220 + v213;
  v223 = v220;
  v224 = v212 - v221;
  memset_alt2(v220 + v213, 0,
              ((4 * v309 - v213 - 4) & 0xFFFFFFFFFFFFFFFCLL) + 4);
  memcpy_alt1(v222 - v224, v221, v224);
  v2[45] = v222 - v224;
  v2[46] = v222 + 4 * v215;
  v2[47] = v223 + 4 * v219;
  if (v221 != 0) {
    v225 = 128;
    if (*(_QWORD*)(*v69 + 200) == 0) {
      v225 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v69 + v225, v221);
  }
LABEL_273:
  v227 = v309;
  if ((_DWORD)v309 != 0) {
    for (j = 0; j != v227; ++j) {
      v229 = *(_QWORD*)(v2[21] + 16LL) +
             96LL * *(unsigned __int16*)(*(_QWORD*)(v2[22] + 112 * j) + 84LL);
      v230 = *(_QWORD*)(v229 + 16);
      if (v230 != 0) {
        v231 = v230 + 8;
        v232 = *(unsigned __int16*)(v230 + 12);
        v233 = v230 + 8 + 16 * v232;
        v234 = *(_DWORD*)v233;
        if ((signed __int32)*(_DWORD*)(v230 + 8) <
            (signed __int32)*(_DWORD*)v233) {
          do {
            if ((unsigned int)(v234 >> 3) <= 8) {
              v235 = ((unsigned __int8)GameData_1a8d697[~(v234 >> 3) + 9] >>
                      (v234 & 7)) &
                     1;
            }
            else {
              v235 = 0;
            }
            v232 = *(unsigned __int16*)(v230 + 12 + 16 * v232 + 2 * v235);
            v236 = v234 < (signed __int32)*(_DWORD*)(v231 + 16 * v232);
            v234 = *(_DWORD*)(v231 + 16 * v232);
          } while (v236);
          v233 = v231 + 16 * v232;
        }
        v237 = *(_QWORD*)(v233 + 8);
        if (*(_WORD*)v237 == 9) {
          v238 = *(_QWORD*)(v237 + 2);
          v239 = *(unsigned __int8*)(v237 + 10);
          if (v238 == 0x6172446F4E646F4CLL && v239 == 119) {
            v241 = v233 - v230 - 24;
            if ((~v241 & 0xFFFFFFFF0LL) != 0) {
              v242 = *(_QWORD*)(v229 + 8);
              if (v242 != 0) {
                v243 = v2[48];
                v244 = v2[49];
                if (v243 == v244) {
                  v245 = v2[50] - v243;
                  if (v227 <= v245 >> 3) {
                    memset_alt2(v2[49], 0, v308);
                    v2[49] = v244 + v308;
                  }
                  else {
                    v246 = v245 >> 2;
                    if (v245 >> 2 <= v227) {
                      v246 = v227;
                    }
                    if ((unsigned __int64)v245 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v247 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v247 = v246;
                    }
                    if (v247 >> 61 != 0) {
                      goto LABEL_372;
                    }
                    v2 = v316;
                    v248 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v247, 16,
                        0);
                    v312 = v316[48];
                    memset_alt2(v248, 0, v308);
                    v249 = v248 + 8 * v247;
                    v250 = v248 + v308;
                    v251 = v248 - (v243 - v312);
                    v314 = v250;
                    memcpy_alt1(v251, v312, v243 - v312);
                    v316[50] = v249;
                    v316[48] = v251;
                    v316[49] = v314;
                    v227 = v309;
                    if (v312 != 0) {
                      v252 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v252 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v252, v312);
                    }
                  }
                }
                v253 = v242 + ((__int64)(int)(v241 >> 4) << 6);
                v255 = *(_DWORD*)(v253 + 16);
                v254 = (int*)(v253 + 16);
                if (v255 >= 1) {
                  *(_QWORD*)(v2[48] + 8 * j) |= 1uLL;
                  if (*v254 >= 2) {
                    *(_QWORD*)(v2[48] + 8 * j) |= 2uLL;
                    if (*v254 > 2) {
                      *(_QWORD*)(v2[48] + 8 * j) |= 4uLL;
                      if (*v254 >= 4) {
                        *(_QWORD*)(v2[48] + 8 * j) |= 8uLL;
                        if (*v254 >= 5) {
                          *(_QWORD*)(v2[48] + 8 * j) |= 0x10uLL;
                          if (*v254 >= 6) {
                            *(_QWORD*)(v2[48] + 8 * j) |= 0x20uLL;
                            if (*v254 >= 7) {
                              *(_QWORD*)(v2[48] + 8 * j) |= 0x40uLL;
                              if (*v254 >= 8) {
                                *(_QWORD*)(v2[48] + 8 * j) |= 0x80uLL;
                                if (*v254 >= 9) {
                                  *(_QWORD*)(v2[48] + 8 * j) |= 0x100uLL;
                                  if (*v254 >= 10) {
                                    *(_QWORD*)(v2[48] + 8 * j) |= 0x200uLL;
                                    if (*v254 >= 11) {
                                      *(_QWORD*)(v2[48] + 8 * j) |= 0x400uLL;
                                      if (*v254 >= 12) {
                                        *(_QWORD*)(v2[48] + 8 * j) |= 0x800uLL;
                                        if (*v254 >= 13) {
                                          *(_QWORD*)(v2[48] + 8 * j) |=
                                              0x1000uLL;
                                          if (*v254 >= 14) {
                                            *(_QWORD*)(v2[48] + 8 * j) |=
                                                0x2000uLL;
                                            if (*v254 >= 15) {
                                              *(_QWORD*)(v2[48] + 8 * j) |=
                                                  0x4000uLL;
                                              if (*v254 >= 16) {
                                                *(_QWORD*)(v2[48] + 8 * j) |=
                                                    0x8000uLL;
                                                if (*v254 > 16) {
                                                  String_60a250_alt1(
                                                      "bitset set argument out "
                                                      "of range");
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v256 = v227;
  v257 = v2[78];
  v258 = v2[77];
  v259 = v257 - v258;
  v260 = (v257 - v258) >> 3;
  v261 = v256 - v260;
  if (v256 <= v260) {
    v263 = fw_memory_g_heap_manager_ptr;
    v272 = v309;
    if (v256 >= v260) {
      goto LABEL_339;
    }
    v274 = v258 + 8 * v309;
    goto LABEL_338;
  }
  v262 = v2[79];
  v263 = fw_memory_g_heap_manager_ptr;
  if (v261 <= (v262 - v257) >> 3) {
    memset_alt2(v2[78], 0, 8 * v261);
    v274 = v257 + 8 * v261;
    v272 = v309;
  LABEL_338:
    v2[78] = v274;
    goto LABEL_339;
  }
  v264 = v262 - v258;
  v265 = v264 >> 2;
  if (v264 >> 2 <= v309) {
    v265 = v309;
  }
  if ((unsigned __int64)v264 >= 0x7FFFFFFFFFFFFFF8LL) {
    v266 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v266 = v265;
  }
  if (v266 >> 61 != 0) {
    goto LABEL_372;
  }
  v267 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v266, 16, 0);
  v268 = v267 + v259;
  v269 = v267 + 8 * v266;
  memset_alt2(v267 + v259, 0, 8 * v261);
  v270 = v268 + 8 * v261;
  v271 = v268 - 8 * v260;
  memcpy_alt1(v271, v258, v259);
  v2[78] = v270;
  v272 = v309;
  v2[77] = v271;
  v2[79] = v269;
  if (v258 != 0) {
    v273 = 128;
    if (*(_QWORD*)(*(_QWORD*)v263 + 200LL) == 0) {
      v273 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v263 + v273, v258);
  }
LABEL_339:
  v275 = v2[21];
  v276 = game_g_frame_clock_ptr[0];
  if ((_DWORD)v272 != 0) {
    v277 = *(unsigned __int16*)(v275 + 80);
    for (k = 0; k != v272; ++k) {
      v279 = (_DWORD*)(v2[77] + 8 * k);
      v279[1] = 0;
      v280 = *(unsigned __int16*)(*(_QWORD*)(v2[22] + 112 * k) + 84LL);
      if (v280 >= v277) {
      LABEL_362:
        v295 = 0;
      }
      else {
        while (1) {
          v281 = *(_QWORD*)(v2[21] + 16LL) + 96LL * v280;
          v282 = *(_QWORD*)(v281 + 16);
          if (v282 != 0) {
            v283 = v282 + 8;
            v284 = *(unsigned __int16*)(v282 + 12);
            v285 = v282 + 8 + 16 * v284;
            v286 = *(_DWORD*)v285;
            if ((signed __int32)*(_DWORD*)(v282 + 8) <
                (signed __int32)*(_DWORD*)v285) {
              do {
                if ((unsigned int)(v286 >> 3) <= 0xD) {
                  v287 =
                      ((unsigned __int8)GameData_1ae5cc1[~(v286 >> 3) + 14] >>
                       (v286 & 7)) &
                      1;
                }
                else {
                  v287 = 0;
                }
                v284 = *(unsigned __int16*)(v282 + 12 + 16 * v284 + 2 * v287);
                v236 = v286 < (signed __int32)*(_DWORD*)(v283 + 16 * v284);
                v286 = *(_DWORD*)(v283 + 16 * v284);
              } while (v236);
              v285 = v283 + 16 * v284;
            }
            v288 = *(_QWORD*)(v285 + 8);
            if (*(_WORD*)v288 == 14) {
              v289 = *(_QWORD*)(v288 + 2);
              v290 = *(_QWORD*)(v288 + 8);
              if (v289 == 0x6143776F64616853LL &&
                  v290 == 0x67616C4674736143LL) {
                v292 = v285 - v282 - 24;
                if ((~v292 & 0xFFFFFFFF0LL) != 0) {
                  v293 = *(_QWORD*)(v281 + 8);
                  if (v293 != 0) {
                    v294 = v293 + ((__int64)(int)(v292 >> 4) << 6);
                    if (*(_BYTE*)(v294 + 20) == 0) {
                      break;
                    }
                  }
                }
              }
            }
          }
          v280 = *(unsigned __int16*)(v281 + 42);
          if (v280 >= v277) {
            goto LABEL_362;
          }
        }
        v295 = **(_DWORD**)(v294 + 8);
        v279[1] = v295;
      }
      *v279 = v295;
    }
    v275 = v2[21];
  }
  v296 = GameData_212c2a0;
  v297 = *(_QWORD*)v263;
  v2[35] = v275;
  v298 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v296 + 8);
  *(_QWORD*)(v315 + 328) = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v296);
  *(_QWORD*)(v315 + 336) = v298;
  v299 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v296);
  *(_QWORD*)(v315 + 344) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v296);
  *(_QWORD*)(v315 + 352) = v299;
  v300 = v296[1];
  *(_QWORD*)(v315 + 296) = *v296;
  *(_QWORD*)(v315 + 304) = v300;
  v302 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v296);
  v301 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v296 + 8);
  *(_QWORD*)(v315 + 312) = v302;
  *(_QWORD*)(v315 + 320) = v301;
  v303 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v297, 16, 16, 0);
  *v303 = g3d_Model_WorldCallback_vtable;
  v303[1] = v2;
  v304 = v2[81];
  v2[81] = v303;
  if (v304 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v304 + 8LL))(v304);
  }
  GameRoutine_5e3aa0(v315, GameData_212c2a0);
  nn_g3d_5e3ab0(v315, 0);
  nn_g3d_5e3ab0(v315, 1);
  result = nn_g3d_5e3ab0(v315, 2);
  if ((*(unsigned __int16*)(**(_QWORD**)(v315 + 144) + 60LL) |
       *(unsigned __int16*)(**(_QWORD**)(v315 + 144) + 58LL)) != 0 &&
      *(_WORD*)(v2[14] + 106LL) != 0) {
    v306 = 0;
    v307 = 56LL * *(unsigned __int16*)(v2[14] + 106LL);
    do {
      result = Model_a636e0((__int64*)(v2[51] + v306), *(_QWORD*)(*v276 + 312),
                            *(_QWORD*)(*(_QWORD*)(*v276 + 552) + 16LL),
                            *(_QWORD*)(v2[35] + 72LL));
      v306 += 56;
    } while (v307 != v306);
  }
  return result;
}

__int64 Model_a636e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
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
  struct {
    int v17;
    char gap4_[4];
    __int64 v18;
    __int64 v19;
  } v17_;
  __int64 v20;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17_.v18 = a4;
  v17_.v19 = a2;
  v17_.v17 = 4;
  GameRoutine_53bd0_alt1((void*)(&v20), (__int64)&v17_.v17),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = v20;
  v7 = *a1;
  v20 = 0;
  *a1 = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v20;
    v20 = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  GameRoutine_53bd0_alt1((void*)(&v20), (__int64)&v17_.v17),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = v20;
  v10 = a1[1];
  v20 = 0;
  a1[1] = v9;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v11 = v20;
    v20 = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 96LL))(a3),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[4] = v13;
  v14 = *a1;
  a1[3] = v12;
  GameRoutine_5deb0_alt1(a1 + 3, v14),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[5] = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 96LL))(a3),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[6] = v15;
  return GameRoutine_5deb0_alt1(a1 + 5, a1[1]);
}

void Model_Destructor(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 v16;
  __int64 j;
  __int64 v18;
  __int64 v19;
  __int64 k;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
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

  v1 = *(_QWORD**)(a1 + 584);
  v2 = *(_QWORD**)(a1 + 576);
  *(_QWORD*)a1 = g3d_Model_vtable;
  *(_QWORD*)(a1 + 624) = *(_QWORD*)(a1 + 616);
  *(_QWORD*)(a1 + 368) = *(_QWORD*)(a1 + 360);
  *(_QWORD*)(a1 + 392) = *(_QWORD*)(a1 + 384);
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != v1) {
    while (1) {
      v7 = (_QWORD*)*--v1;
      v6 = v7;
      *v1 = 0;
      if (v7 != nullptr) {
        break;
      }
    LABEL_7:
      if (v1 == v2) {
        goto LABEL_21;
      }
    }
    v8 = v6[7];
    if (v8 != 0) {
      v9 = *(_QWORD*)v4;
      v6[8] = v8;
      if (*(_QWORD*)(v9 + 200) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v9 + v10, v8);
    }
    v11 = v6[3];
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak_alt1(v11);
      v12 = v6[1];
      if (v12 != 0) {
      LABEL_17:
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
      }
    }
    else {
      v12 = v6[1];
      if (v12 != 0) {
        goto LABEL_17;
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
      v5 = 128;
    }
    else {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v5, (__int64)v6);
    goto LABEL_7;
  }
LABEL_21:
  *(_QWORD*)(a1 + 584) = v2;
  v13 = *(_QWORD*)(a1 + 312);
  for (i = *(_QWORD*)(a1 + 320); i != v13; i -= 16) {
    v15 = *(_QWORD*)(i - 8);
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v15);
    }
  }
  *(_QWORD*)(a1 + 320) = v13;
  v16 = *(_QWORD*)(a1 + 336);
  for (j = *(_QWORD*)(a1 + 344); j != v16; j -= 16) {
    v18 = *(_QWORD*)(j - 8);
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt1(v18);
    }
  }
  *(_QWORD*)(a1 + 344) = v16;
  v19 = *(_QWORD*)(a1 + 288);
  for (k = *(_QWORD*)(a1 + 296); k != v19; k -= 16) {
    v21 = *(_QWORD*)(k - 8);
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
  }
  *(_QWORD*)(a1 + 296) = v19;
  v22 = game_g_frame_clock_ptr[0];
  if ((*(_WORD*)(a1 + 162) & 1) != 0) {
    Model_5e39c0(a1 + 136, *game_g_frame_clock_ptr[0] + 568);
  }
  v23 = *(_QWORD*)(*v22 + 80);
  v91 = *(_QWORD*)(a1 + 208);
  if (v23 == 0) {
    GameRoutine_60a310_alt1();
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v23 + 48LL))(v23, &v91);
  v24 = *(_QWORD**)(a1 + 800);
  if (v24 == (_QWORD*)(a1 + 768)) {
    v25 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_47;
    }
    v25 = 40;
  }
  (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
LABEL_47:
  v26 = *(_QWORD**)(a1 + 752);
  if (v26 == (_QWORD*)(a1 + 720)) {
    v27 = 32;
    goto LABEL_51;
  }
  if (v26 != nullptr) {
    v27 = 40;
  LABEL_51:
    (*(void (**)(__int64))(*v26 + v27))((__int64)v26);
  }
  v28 = *(_QWORD*)(a1 + 688);
  if (v28 == 0) {
    goto LABEL_65;
  }
  v29 = *(_QWORD*)(a1 + 696);
  if (v28 == v29) {
  LABEL_62:
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v33, v28);
    goto LABEL_65;
  }
  do {
    v31 = *(_QWORD**)(v29 - 16);
    if ((_QWORD*)(v29 - 48) == v31) {
      v30 = 32;
    LABEL_56:
      (*(void (**)(__int64))(*v31 + v30))((__int64)v31);
      goto LABEL_57;
    }
    if (v31 != nullptr) {
      v30 = 40;
      goto LABEL_56;
    }
  LABEL_57:
    v29 -= 64;
  } while (v29 != v28);
  v32 = *(_QWORD*)(a1 + 688);
  *(_QWORD*)(a1 + 696) = v28;
  v28 = v32;
  if (v32 != 0) {
    goto LABEL_62;
  }
LABEL_65:
  v34 = *(_QWORD*)(a1 + 656);
  if (v34 == 0) {
    goto LABEL_78;
  }
  v35 = *(_QWORD*)(a1 + 664);
  if (v34 == v35) {
  LABEL_75:
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v39, v34);
    goto LABEL_78;
  }
  while (2) {
    v37 = *(_QWORD**)(v35 - 16);
    if ((_QWORD*)(v35 - 48) == v37) {
      v36 = 32;
      goto LABEL_69;
    }
    if (v37 != nullptr) {
      v36 = 40;
    LABEL_69:
      (*(void (**)(__int64))(*v37 + v36))((__int64)v37);
    }
    v35 -= 64;
    if (v35 != v34) {
      continue;
    }
    break;
  }
  v38 = *(_QWORD*)(a1 + 656);
  *(_QWORD*)(a1 + 664) = v34;
  v34 = v38;
  if (v38 != 0) {
    goto LABEL_75;
  }
LABEL_78:
  v40 = *(_QWORD*)(a1 + 648);
  *(_QWORD*)(a1 + 648) = 0;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
  }
  v41 = *(_QWORD*)(a1 + 616);
  if (v41 != 0) {
    v42 = *(_QWORD*)v4;
    *(_QWORD*)(a1 + 624) = v41;
    v43 = 128;
    if (*(_QWORD*)(v42 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v42 + v43, v41);
  }
  v44 = *(_QWORD*)(a1 + 576);
  if (v44 == 0) {
    goto LABEL_109;
  }
  v45 = *(_QWORD**)(a1 + 584);
  if ((_QWORD*)v44 == v45) {
    goto LABEL_106;
  }
  while (2) {
    v48 = (_QWORD*)*--v45;
    v47 = v48;
    *v45 = 0;
    if (v48 != nullptr) {
      v49 = v47[7];
      if (v49 != 0) {
        v50 = *(_QWORD*)v4;
        v47[8] = v49;
        if (*(_QWORD*)(v50 + 200) != 0) {
          v51 = 128;
        }
        else {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(v50 + v51, v49);
      }
      v52 = v47[3];
      if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
        std___1___shared_weak_count___release_weak_alt1(v52);
        v53 = v47[1];
        if (v53 != 0) {
          goto LABEL_101;
        }
      }
      else {
        v53 = v47[1];
        if (v53 != 0) {
        LABEL_101:
          if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
            std___1___shared_weak_count___release_weak_alt1(v53);
          }
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v46 = 128;
      }
      else {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v46, (__int64)v47);
    }
    if (v45 != (_QWORD*)v44) {
      continue;
    }
    break;
  }
  v54 = *(_QWORD*)(a1 + 576);
  *(_QWORD*)(a1 + 584) = v44;
  v44 = v54;
  if (v54 != 0) {
  LABEL_106:
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v55, v44);
  }
LABEL_109:
  v56 = *(_QWORD**)(a1 + 560);
  if (v56 == (_QWORD*)(a1 + 528)) {
    v57 = 32;
  LABEL_113:
    (*(void (**)(__int64))(*v56 + v57))((__int64)v56);
  }
  else if (v56 != nullptr) {
    v57 = 40;
    goto LABEL_113;
  }
  v58 = *(_QWORD*)(a1 + 408);
  if (v58 != 0) {
    v59 = *(_QWORD**)(a1 + 416);
    if ((_QWORD*)v58 == v59) {
      goto LABEL_123;
    }
    do {
      v60 = *(v59 - 6);
      *(v59 - 6) = 0;
      if (v60 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v60 + 8LL))(v60);
      }
      v62 = *(v59 - 7);
      v59 -= 7;
      v61 = v62;
      *v59 = 0;
      if (v62 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v61 + 8LL))(v61);
      }
    } while (v59 != (_QWORD*)v58);
    v63 = *(_QWORD*)(a1 + 408);
    *(_QWORD*)(a1 + 416) = v58;
    v58 = v63;
    if (v63 != 0) {
    LABEL_123:
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v64, v58);
    }
  }
  v65 = *(_QWORD*)(a1 + 384);
  if (v65 != 0) {
    v66 = *(_QWORD*)v4;
    *(_QWORD*)(a1 + 392) = v65;
    v67 = 128;
    if (*(_QWORD*)(v66 + 200) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v66 + v67, v65);
  }
  v68 = *(_QWORD*)(a1 + 360);
  if (v68 != 0) {
    v69 = *(_QWORD*)v4;
    *(_QWORD*)(a1 + 368) = v68;
    v70 = 128;
    if (*(_QWORD*)(v69 + 200) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v69 + v70, v68);
  }
  v71 = *(_QWORD*)(a1 + 336);
  if (v71 != 0) {
    v72 = *(_QWORD*)(a1 + 344);
    if (v71 == v72) {
      goto LABEL_142;
    }
    do {
      v73 = *(_QWORD*)(v72 - 8);
      if (v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
        std___1___shared_weak_count___release_weak_alt1(v73);
      }
      v72 -= 16;
    } while (v72 != v71);
    v74 = *(_QWORD*)(a1 + 336);
    *(_QWORD*)(a1 + 344) = v71;
    v71 = v74;
    if (v74 != 0) {
    LABEL_142:
      v75 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v75 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v75, v71);
    }
  }
  v76 = *(_QWORD*)(a1 + 312);
  if (v76 != 0) {
    v77 = *(_QWORD*)(a1 + 320);
    if (v76 == v77) {
      goto LABEL_153;
    }
    do {
      v78 = *(_QWORD*)(v77 - 8);
      if (v78 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
        std___1___shared_weak_count___release_weak_alt1(v78);
      }
      v77 -= 16;
    } while (v77 != v76);
    v79 = *(_QWORD*)(a1 + 312);
    *(_QWORD*)(a1 + 320) = v76;
    v76 = v79;
    if (v79 != 0) {
    LABEL_153:
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v80, v76);
    }
  }
  v81 = *(_QWORD*)(a1 + 288);
  if (v81 != 0) {
    v82 = *(_QWORD*)(a1 + 296);
    if (v81 == v82) {
      goto LABEL_164;
    }
    do {
      v83 = *(_QWORD*)(v82 - 8);
      if (v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
        std___1___shared_weak_count___release_weak_alt1(v83);
      }
      v82 -= 16;
    } while (v82 != v81);
    v84 = *(_QWORD*)(a1 + 288);
    *(_QWORD*)(a1 + 296) = v81;
    v81 = v84;
    if (v84 != 0) {
    LABEL_164:
      v85 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v85 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v85, v81);
    }
  }
  gxc_GpuMemory_Destroy_GpuMemory_alt1((_QWORD*)(a1 + 256));
  v86 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v86 != 0) {
    v87 = *(_QWORD*)v4;
    *(_QWORD*)(a1 + 88) = v86;
    v88 = 128;
    if (*(_QWORD*)(v87 + 200) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v87 + v88, v86);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v89 = *(_QWORD*)(a1 + 24);
    if (v89 != 0) {
      v90 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v90 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v90, v89);
    }
  }
}

__int64 Model_a64140(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  int32x4_t* v18;
  int32x4_t* v19;
  int32x4_t v20;
  int32x4_t v21;
  int32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  __int64 v26;
  int32x4_t* v27;
  int32x4_t* v28;
  int32x4_t v29;
  int32x4_t v30;
  int32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  _QWORD* v35;
  int32x4_t* v36;
  int32x4_t* v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  int32x4_t v42;
  int32x4_t v43;
  __int64 v44;
  int32x4_t v45;
  __int64 v46;
  __int64 i;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  int32x4_t v57;
  int32x4_t v58;
  int32x4_t v59;
  int32x4_t* v60;
  __int64 v61;
  __int64 v62;
  int32x4_t* v63;
  int8x16_t v64;
  float32x4_t v65;
  int8x16_t v66;
  int32x4_t v67;
  int32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  int32x4_t v78;
  int8x16_t v79;
  int8x16_t v80;
  int8x16_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  unsigned __int64 v85;
  int8x16_t v86;
  float32x4_t v87;
  float32x4_t v88;
  int8x16_t v89;
  int32x4_t v90;
  int32x4_t v91;
  int32x4_t v92;
  int32x4_t v93;
  int32x4_t v94;
  int32x4_t v95;
  int32x4_t v96;
  int32x4_t v97;
  int32x4_t v98;
  int32x4_t v99;
  int32x4_t v100;
  int32x4_t v101;
  int32x4_t v102;
  int32x4_t v103;
  __int64 v104;
  _QWORD* v105;
  int32x4_t* v106;
  int32x4_t* v107;
  int32x4_t v108;
  int32x4_t v109;
  int32x4_t v110;
  int32x4_t v111;
  int32x4_t v112;
  int32x4_t v113;
  __int64 v114;
  __int64 v115;
  int32x4_t* v116;
  int32x4_t v117;
  int32x4_t v118;
  int32x4_t v119;
  int32x4_t v120;
  int32x4_t v121;
  int32x4_t v122;
  _QWORD* v123;
  __int64 v124;
  int32x4_t* v125;
  int32x4_t v126;
  int32x4_t v127;
  int32x4_t v128;
  int32x4_t v129;
  int32x4_t v130;
  int32x4_t v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  int32x4_t v138;
  int32x4_t v139;
  int32x4_t v140;
  int32x4_t v141;
  int32x4_t v142;
  int32x4_t v143;
  int32x4_t v144;
  int32x4_t v145;
  int32x4_t* v146;
  __int64 v147;
  __int64 v148;
  int32x4_t* v149;
  int8x16_t v150;
  int32x4_t v151;
  int8x16_t v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  int32x4_t v162;
  int32x4_t v163;
  int32x4_t v164;
  int8x16_t v165;
  int8x16_t v166;
  int8x16_t v167;
  float32x4_t v168;
  float32x4_t v169;
  unsigned __int64 v170;
  int8x16_t v171;
  float32x4_t v172;
  int8x16_t v173;
  int32x4_t v174;
  int32x4_t v175;
  int32x4_t v176;
  int32x4_t v177;
  int32x4_t v178;
  int32x4_t v179;
  int32x4_t v180;
  int32x4_t v181;
  int32x4_t v182;
  int32x4_t v183;
  int32x4_t v184;
  int32x4_t v185;
  int32x4_t v186;
  int32x4_t v187;
  int32x4_t v188;
  __int64 v189;
  int v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  _QWORD* v194;
  int32x4_t* v195;
  int32x4_t* v196;
  int32x4_t v197;
  int32x4_t v198;
  int32x4_t v199;
  int32x4_t v200;
  int32x4_t v201;
  int32x4_t v202;
  __int64 v203;
  __int64 v204;
  int32x4_t* v205;
  int32x4_t v206;
  int32x4_t v207;
  int32x4_t v208;
  int32x4_t v209;
  int32x4_t v210;
  int32x4_t v211;
  _QWORD* v212;
  __int64 v213;
  int32x4_t* v214;
  int32x4_t v215;
  int32x4_t v216;
  int32x4_t v217;
  int32x4_t v218;
  int32x4_t v219;
  int32x4_t v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  int32x4_t v227;
  int32x4_t v228;
  int32x4_t v229;
  int32x4_t v230;
  int32x4_t v231;
  int32x4_t v232;
  int32x4_t v233;
  int32x4_t v234;
  int32x4_t* v235;
  __int64 v236;
  __int64 v237;
  int32x4_t* v238;
  int8x16_t v239;
  int32x4_t v240;
  int8x16_t v241;
  float32x4_t v242;
  float32x4_t v243;
  float32x4_t v244;
  float32x4_t v245;
  float32x4_t v246;
  float32x4_t v247;
  float32x4_t v248;
  float32x4_t v249;
  float32x4_t v250;
  int32x4_t v251;
  int32x4_t v252;
  int32x4_t v253;
  int8x16_t v254;
  int8x16_t v255;
  int8x16_t v256;
  float32x4_t v257;
  float32x4_t v258;
  unsigned __int64 v259;
  int8x16_t v260;
  float32x4_t v261;
  int8x16_t v262;
  int32x4_t v263;
  int32x4_t v264;
  int32x4_t v265;
  int32x4_t v266;
  int32x4_t v267;
  int32x4_t v268;
  int32x4_t v269;
  int32x4_t v270;
  int32x4_t v271;
  int32x4_t v272;
  int32x4_t v273;
  int32x4_t v274;
  int32x4_t v275;
  int32x4_t v276;
  int32x4_t v277;
  __int64 v278;

  v2 = *(_QWORD*)(result + 664);
  v3 = *(_QWORD*)(result + 656);
  v4 = result;
  *(_DWORD*)(result + 644) = 0;
  if (v2 != v3) {
    v5 = *(_QWORD*)(result + 280);
    v6 = *(_DWORD*)(v3 + 8);
    if (v6 >= *(unsigned __int16*)(v5 + 80) || (int)v6 <= -1) {
      LOWORD(v6) = -1;
    }
    *(_WORD*)(v5 + 82) = v6;
  }
  if (*(int*)(result + 500) <= 0 && (*(_BYTE*)(result + 504) & 1) == 0) {
    if (*(_BYTE*)(result + 505) == 1) {
      v8 = *(_QWORD*)(result + 112);
      v9 = *(unsigned __int16*)(v8 + 106);
      if (*(_WORD*)(v8 + 106) != 0) {
        v10 = *(_QWORD*)(*(_QWORD*)(result + 280) + 32LL);
        if (v9 == 1) {
          v11 = 0;
        }
        else {
          v104 = 0;
          v11 = 0;
          do {
            v11 += 2;
            v105 = (_QWORD*)(*(_QWORD*)(result + 176) + v104);
            v106 = (int32x4_t*)v105[10];
            v107 = (int32x4_t*)(v10 + ((unsigned __int64)*(
                                           unsigned __int16*)(*v105 + 84LL)
                                       << 6));
            v108 = v107[1];
            v109 = v107[2];
            v110 = v107[3];
            v111 = vzip1q_s32(*v107, v109);
            v112 = vzip2q_s32(*v107, v109);
            v113 = vzip1q_s32(v108, v110);
            *v106 = vzip1q_s32(v111, v113);
            v106[1] = vzip2q_s32(v111, v113);
            v106[2] = vzip1q_s32(v112, vzip2q_s32(v108, v110));
            v114 = *(_QWORD*)(result + 176) + v104;
            v104 += 224;
            v115 = *(_QWORD*)(v114 + 192);
            v116 = (int32x4_t*)(v10 +
                                ((unsigned __int64)*(
                                     unsigned __int16*)(*(_QWORD*)(v114 + 112) +
                                                        84LL)
                                 << 6));
            v117 = v116[1];
            v118 = v116[2];
            v119 = v116[3];
            v120 = vzip1q_s32(*v116, v118);
            v121 = vzip2q_s32(*v116, v118);
            v122 = vzip1q_s32(v117, v119);
            a2 = COERCE_LONG_DOUBLE(vzip1q_s32(v121, vzip2q_s32(v117, v119)));
            *(int32x4_t*)v115 = vzip1q_s32(v120, v122);
            *(int32x4_t*)(v115 + 16) = vzip2q_s32(v120, v122);
            *(long double*)(v115 + 32) = a2;
          } while ((v9 & 0xFFFE) != v11);
        }
        if ((v9 & 1) != 0) {
          v123 = (_QWORD*)(*(_QWORD*)(result + 176) + 112 * v11);
          v124 = v123[10];
          v125 =
              (int32x4_t*)(v10 +
                           ((unsigned __int64)*(unsigned __int16*)(*v123 + 84LL)
                            << 6));
          v126 = v125[1];
          v127 = v125[2];
          v128 = v125[3];
          v129 = vzip1q_s32(*v125, v127);
          v130 = vzip2q_s32(*v125, v127);
          v131 = vzip1q_s32(v126, v128);
          a2 = COERCE_LONG_DOUBLE(vzip1q_s32(v130, vzip2q_s32(v126, v128)));
          *(int32x4_t*)v124 = vzip1q_s32(v129, v131);
          *(int32x4_t*)(v124 + 16) = vzip2q_s32(v129, v131);
          *(long double*)(v124 + 32) = a2;
        }
        v132 = *(_QWORD*)(result + 112);
        v133 = *(unsigned __int16*)(v132 + 106);
        if (*(_WORD*)(v132 + 106) != 0) {
          v134 = 0;
          v135 = 0;
          v136 = 112 * v133;
          *(_QWORD*)&a2 = 0xB0A090807060504LL;
          v137 = *(_QWORD*)(*(_QWORD*)(result + 280) + 32LL);
          do {
            v147 = *(_QWORD*)(result + 176);
            v148 = *(_QWORD*)(v147 + v135);
            if (*(_BYTE*)(v148 + 90) == 0) {
              v149 = (int32x4_t*)(v137 + ((unsigned __int64)*(
                                              unsigned __int16*)(v148 + 84)
                                          << 6));
              v151 = *v149;
              v150 = v149[1];
              v152 = v149[2];
              if ((*(_BYTE*)(*(_QWORD*)(result + 360) + v134) & 0x40) != 0) {
                LANES128(v153).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v150, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v153).n128_i8[8] =
                    vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v154).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v152, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v154).n128_i8[8] =
                    vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v155 = vmulq_f32(vmulq_f32(v151, v153), v154);
                LANES128(v154).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v150, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v154).n128_i8[8] =
                    vqtbl1_s8(v150, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                LANES128(v156).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v152, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v156).n128_i8[8] =
                    vqtbl1_s8(v152, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v157 = vsubq_f32(v155, vmulq_f32(vmulq_f32(v151, v154), v156));
                LANES128(v157).n128_u64[0] =
                    LANES128_OF(vpaddq_f32(v157, v157)).n128_u64[0];
                v158 = vaddq_f32(
                    vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v157).n128_u64[0]), 0),
                    vdupq_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v157).n128_u64[0]), 1));
                v159 = vrecpeq_f32(v158);
                v160 = vmulq_f32(v159, vrecpsq_f32(v159, v158));
                v161 = vmulq_f32(v160, vrecpsq_f32(v160, v158));
                v162 = vzip1q_s32(v151, v152);
                v163 = vzip2q_s32(v151, v152);
                v164 = vzip1q_s32(v150, COERCE_AS(int32x4_t, 0LL));
                v165 = vzip2q_s32(v162, v164);
                v166 = vzip1q_s32(v163,
                                  vzip2q_s32(v150, COERCE_AS(int32x4_t, 0LL)));
                v167 = vzip1q_s32(v162, v164);
                LANES128(v168).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v165, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v163).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v166, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v169).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v166, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v162).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v167, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v168).n128_i8[8] =
                    vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v170 =
                    LANES64_OF(vqtbl1_s8(v166, COERCE_AS(int8x8_t,
                                                         0xF0E0D0C07060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v169).n128_i8[8] =
                    vqtbl1_s8(v166, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v166).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v165, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v163).n128_u64[1] = v170;
                *(int8x8_t*)&LANES128(v166).n128_i8[8] =
                    vqtbl1_s8(v165, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v171 = vmulq_f32(v161,
                                 vmlsq_f32(vmulq_f32(v168, v163), v166, v169));
                *(int8x8_t*)&LANES128(v162).n128_i8[8] =
                    vqtbl1_s8(v167, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v172 = vmulq_f32(v169, v162);
                LANES128(v169).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v167, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v169).n128_i8[8] =
                    vqtbl1_s8(v167, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v173 = vceqzq_f32(v158);
                v174 = vbicq_s8(v171, v173);
                v175 = vbicq_s8(vmulq_f32(v161, vmlsq_f32(v172, v163, v169)),
                                v173);
                v176 = vbicq_s8(vmulq_f32(v161, vmlsq_f32(vmulq_f32(v166, v169),
                                                          v162, v168)),
                                v173);
                v177 = vzip1q_s32(v175, COERCE_AS(int32x4_t, 0LL));
                v178 = vzip2q_s32(v175, COERCE_AS(int32x4_t, 0LL));
                v179 = vzip1q_s32(v174, v176);
                v180 = vzip2q_s32(v174, v176);
                v181 = vzip1q_s32(v179, v177);
                v182 = vzip2q_s32(v179, v177);
                v183 = vzip1q_s32(v180, v178);
                v184 = vzip2q_s32(v180, v178);
                v185 = vzip1q_s32(v181, v183);
                v186 = vuzp1q_s32(v176, *(int32x4_t*)&a2);
                v187 = vzip1q_s32(v182, v184);
                v188 = vzip2q_s32(v182, v184);
                v143 = vzip1q_s32(v185, v187);
                v144 = vzip2q_s32(v185, v187);
                v145 = vzip1q_s32(v186, v188);
              }
              else {
                v138 = v149[3];
                v139 = vzip1q_s32(v151, v152);
                v140 = vzip2q_s32(v151, v152);
                v141 = vzip1q_s32(v150, v138);
                v142 = vzip2q_s32(v150, v138);
                v143 = vzip1q_s32(v139, v141);
                v144 = vzip2q_s32(v139, v141);
                v145 = vzip1q_s32(v140, v142);
              }
              v146 = *(int32x4_t**)(v147 + v135 + 80);
              v146[3] = v143;
              v146[4] = v144;
              v146[5] = v145;
            }
            v135 += 112;
            v134 += 4;
          } while (v136 != v135);
        }
      }
      *(_BYTE*)(result + 505) = 0;
    }
    goto LABEL_48;
  }
  v12 = *(_QWORD*)(result + 112);
  v13 = *(unsigned __int16*)(v12 + 106);
  if (*(_WORD*)(v12 + 106) != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(result + 280) + 32LL);
    if (v13 == 1) {
      v15 = 0;
    }
    else {
      v16 = 0;
      v15 = 0;
      do {
        v15 += 2;
        v17 = (_QWORD*)(*(_QWORD*)(result + 176) + v16);
        v18 = (int32x4_t*)v17[10];
        v19 = (int32x4_t*)(v14 +
                           ((unsigned __int64)*(unsigned __int16*)(*v17 + 84LL)
                            << 6));
        v20 = v19[1];
        v21 = v19[2];
        v22 = v19[3];
        v23 = vzip1q_s32(*v19, v21);
        v24 = vzip2q_s32(*v19, v21);
        v25 = vzip1q_s32(v20, v22);
        *v18 = vzip1q_s32(v23, v25);
        v18[1] = vzip2q_s32(v23, v25);
        v18[2] = vzip1q_s32(v24, vzip2q_s32(v20, v22));
        v26 = *(_QWORD*)(result + 176) + v16;
        v16 += 224;
        v27 = *(int32x4_t**)(v26 + 192);
        v28 = (int32x4_t*)(v14 +
                           ((unsigned __int64)*(
                                unsigned __int16*)(*(_QWORD*)(v26 + 112) + 84LL)
                            << 6));
        v29 = v28[1];
        v30 = v28[2];
        v31 = v28[3];
        v32 = vzip1q_s32(*v28, v30);
        v33 = vzip2q_s32(*v28, v30);
        v34 = vzip1q_s32(v29, v31);
        *v27 = vzip1q_s32(v32, v34);
        v27[1] = vzip2q_s32(v32, v34);
        v27[2] = vzip1q_s32(v33, vzip2q_s32(v29, v31));
      } while ((v13 & 0xFFFE) != v15);
    }
    if ((v13 & 1) != 0) {
      v35 = (_QWORD*)(*(_QWORD*)(result + 176) + 112 * v15);
      v36 = (int32x4_t*)v35[10];
      v37 = (int32x4_t*)(v14 +
                         ((unsigned __int64)*(unsigned __int16*)(*v35 + 84LL)
                          << 6));
      v38 = v37[1];
      v39 = v37[2];
      v40 = v37[3];
      v41 = vzip1q_s32(*v37, v39);
      v42 = vzip2q_s32(*v37, v39);
      v43 = vzip1q_s32(v38, v40);
      *v36 = vzip1q_s32(v41, v43);
      v36[1] = vzip2q_s32(v41, v43);
      v36[2] = vzip1q_s32(v42, vzip2q_s32(v38, v40));
    }
  }
  v44 = *(_QWORD*)(result + 752);
  v278 = v4 + 136;
  if (v44 == 0) {
  LABEL_66:
    GameRoutine_60a310(v44);
  }
  (*(void (**)(__int64, __int64*, __int64))(*(_QWORD*)v44 + 48LL))(v44, &v278,
                                                                   v4 + 432);
  v46 = *(_QWORD*)(v4 + 696);
  for (i = *(_QWORD*)(v4 + 688); i != v46; i += 64) {
    v44 = *(_QWORD*)(i + 48);
    if (v44 == 0) {
      goto LABEL_66;
    }
    (*(void (**)(__int64))(*(_QWORD*)v44 + 48LL))(v44);
  }
  v48 = *(_QWORD*)(v4 + 112);
  v49 = *(unsigned __int16*)(v48 + 106);
  if (*(_WORD*)(v48 + 106) != 0) {
    v50 = 0;
    v51 = 0;
    v52 = 112 * v49;
    LANES128(v45).n128_u64[0] = 0xB0A090807060504LL;
    v53 = *(_QWORD*)(*(_QWORD*)(v4 + 280) + 32LL);
    do {
      v61 = *(_QWORD*)(v4 + 176);
      v62 = *(_QWORD*)(v61 + v51);
      if (*(_BYTE*)(v62 + 90) == 0) {
        v63 =
            (int32x4_t*)(v53 + ((unsigned __int64)*(unsigned __int16*)(v62 + 84)
                                << 6));
        v65 = *v63;
        v64 = v63[1];
        v66 = v63[2];
        v67 = vzip1q_s32(*v63, v66);
        v68 = vzip2q_s32(*v63, v66);
        if ((*(_BYTE*)(*(_QWORD*)(v4 + 360) + v50) & 0x40) != 0) {
          LANES128(v69).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v69).n128_i8[8] =
              vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v70).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v70).n128_i8[8] =
              vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          v71 = vmulq_f32(vmulq_f32(v65, v69), v70);
          LANES128(v70).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v70).n128_i8[8] =
              vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          v72 = vmulq_f32(v65, v70);
          LANES128(v70).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v70).n128_i8[8] =
              vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v73 = vsubq_f32(v71, vmulq_f32(v72, v70));
          LANES128(v73).n128_u64[0] =
              LANES128_OF(vpaddq_f32(v73, v73)).n128_u64[0];
          v74 = vaddq_f32(
              vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]),
                             0),
              vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]),
                             1));
          v75 = vrecpeq_f32(v74);
          v76 = vmulq_f32(v75, vrecpsq_f32(v75, v74));
          v77 = vmulq_f32(v76, vrecpsq_f32(v76, v74));
          v78 = vzip1q_s32(v64, COERCE_AS(int32x4_t, 0LL));
          v79 = vzip2q_s32(v67, v78);
          v80 = vzip1q_s32(v68, vzip2q_s32(v64, COERCE_AS(int32x4_t, 0LL)));
          v81 = vzip1q_s32(v67, v78);
          LANES128(v82).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v83).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v84).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v78).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v82).n128_i8[8] =
              vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v85 = LANES64_OF(
                    vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                    .n64_u64[0];
          *(int8x8_t*)&LANES128(v84).n128_i8[8] =
              vqtbl1_s8(v80, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v80).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v83).n128_u64[1] = v85;
          *(int8x8_t*)&LANES128(v80).n128_i8[8] =
              vqtbl1_s8(v79, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          v86 = vmulq_f32(v77, vmlsq_f32(vmulq_f32(v82, v83), v80, v84));
          *(int8x8_t*)&LANES128(v78).n128_i8[8] =
              vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          v87 = vmulq_f32(v84, v78);
          LANES128(v84).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v84).n128_i8[8] =
              vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v88 = vmlsq_f32(v87, v83, v84);
          v89 = vceqzq_f32(v74);
          v90 = vbicq_s8(v86, v89);
          v91 = vbicq_s8(vmulq_f32(v77, v88), v89);
          v92 = vbicq_s8(
              vmulq_f32(v77, vmlsq_f32(vmulq_f32(v80, v84), v78, v82)), v89);
          v93 = vzip1q_s32(v91, COERCE_AS(int32x4_t, 0LL));
          v94 = vzip2q_s32(v91, COERCE_AS(int32x4_t, 0LL));
          v95 = vzip1q_s32(v90, v92);
          v96 = vzip2q_s32(v90, v92);
          v97 = vzip1q_s32(v95, v93);
          v98 = vzip2q_s32(v95, v93);
          v99 = vzip1q_s32(v96, v94);
          v100 = vzip2q_s32(v96, v94);
          v101 = vzip1q_s32(v97, v99);
          v102 = vzip1q_s32(v98, v100);
          v103 = vzip2q_s32(v98, v100);
          v57 = vzip1q_s32(v101, v102);
          v58 = vzip2q_s32(v101, v102);
          v59 = vzip1q_s32(vuzp1q_s32(v92, v45), v103);
        }
        else {
          v54 = v63[3];
          v55 = vzip1q_s32(v64, v54);
          v56 = vzip2q_s32(v64, v54);
          v57 = vzip1q_s32(v67, v55);
          v58 = vzip2q_s32(v67, v55);
          v59 = vzip1q_s32(v68, v56);
        }
        v60 = *(int32x4_t**)(v61 + v51 + 80);
        v60[3] = v57;
        v60[4] = v58;
        v60[5] = v59;
      }
      v51 += 112;
      v50 += 4;
    } while (v52 != v51);
  }
  result = Model_a64b80_alt1(v4);
  *(_WORD*)(v4 + 504) = 256;
LABEL_48:
  if (*(_BYTE*)(v4 + 506) == 1) {
    v189 = *(_QWORD*)(v4 + 112);
    v190 = *(unsigned __int16*)(v189 + 106);
    if (*(_WORD*)(v189 + 106) != 0) {
      v191 = *(_QWORD*)(*(_QWORD*)(v4 + 280) + 32LL);
      if (v190 == 1) {
        v192 = 0;
      }
      else {
        v193 = 0;
        v192 = 0;
        do {
          v192 += 2;
          v194 = (_QWORD*)(*(_QWORD*)(v4 + 176) + v193);
          v195 = (int32x4_t*)v194[10];
          v196 =
              (int32x4_t*)(v191 +
                           ((unsigned __int64)*(unsigned __int16*)(*v194 + 84LL)
                            << 6));
          v197 = v196[1];
          v198 = v196[2];
          v199 = v196[3];
          v200 = vzip1q_s32(*v196, v198);
          v201 = vzip2q_s32(*v196, v198);
          v202 = vzip1q_s32(v197, v199);
          *v195 = vzip1q_s32(v200, v202);
          v195[1] = vzip2q_s32(v200, v202);
          v195[2] = vzip1q_s32(v201, vzip2q_s32(v197, v199));
          v203 = *(_QWORD*)(v4 + 176) + v193;
          v193 += 224;
          v204 = *(_QWORD*)(v203 + 192);
          v205 = (int32x4_t*)(v191 +
                              ((unsigned __int64)*(
                                   unsigned __int16*)(*(_QWORD*)(v203 + 112) +
                                                      84LL)
                               << 6));
          v206 = v205[1];
          v207 = v205[2];
          v208 = v205[3];
          v209 = vzip1q_s32(*v205, v207);
          v210 = vzip2q_s32(*v205, v207);
          v211 = vzip1q_s32(v206, v208);
          a2 = COERCE_LONG_DOUBLE(vzip1q_s32(v210, vzip2q_s32(v206, v208)));
          *(int32x4_t*)v204 = vzip1q_s32(v209, v211);
          *(int32x4_t*)(v204 + 16) = vzip2q_s32(v209, v211);
          *(long double*)(v204 + 32) = a2;
        } while ((v190 & 0xFFFE) != v192);
      }
      if ((v190 & 1) != 0) {
        v212 = (_QWORD*)(*(_QWORD*)(v4 + 176) + 112 * v192);
        v213 = v212[10];
        v214 =
            (int32x4_t*)(v191 +
                         ((unsigned __int64)*(unsigned __int16*)(*v212 + 84LL)
                          << 6));
        v215 = v214[1];
        v216 = v214[2];
        v217 = v214[3];
        v218 = vzip1q_s32(*v214, v216);
        v219 = vzip2q_s32(*v214, v216);
        v220 = vzip1q_s32(v215, v217);
        a2 = COERCE_LONG_DOUBLE(vzip1q_s32(v219, vzip2q_s32(v215, v217)));
        *(int32x4_t*)v213 = vzip1q_s32(v218, v220);
        *(int32x4_t*)(v213 + 16) = vzip2q_s32(v218, v220);
        *(long double*)(v213 + 32) = a2;
      }
      v221 = *(_QWORD*)(v4 + 112);
      v222 = *(unsigned __int16*)(v221 + 106);
      if (*(_WORD*)(v221 + 106) != 0) {
        v223 = 0;
        v224 = 0;
        v225 = 112 * v222;
        *(_QWORD*)&a2 = 0xB0A090807060504LL;
        v226 = *(_QWORD*)(*(_QWORD*)(v4 + 280) + 32LL);
        do {
          v236 = *(_QWORD*)(v4 + 176);
          v237 = *(_QWORD*)(v236 + v224);
          if (*(_BYTE*)(v237 + 90) == 0) {
            v238 =
                (int32x4_t*)(v226 +
                             ((unsigned __int64)*(unsigned __int16*)(v237 + 84)
                              << 6));
            v240 = *v238;
            v239 = v238[1];
            v241 = v238[2];
            if ((*(_BYTE*)(*(_QWORD*)(v4 + 360) + v223) & 0x40) != 0) {
              LANES128(v242).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v239, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v242).n128_i8[8] =
                  vqtbl1_s8(v239, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v243).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v241, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v243).n128_i8[8] =
                  vqtbl1_s8(v241, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v244 = vmulq_f32(vmulq_f32(v240, v242), v243);
              LANES128(v243).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v239, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v243).n128_i8[8] =
                  vqtbl1_s8(v239, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              LANES128(v245).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v241, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v245).n128_i8[8] =
                  vqtbl1_s8(v241, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v246 = vsubq_f32(v244, vmulq_f32(vmulq_f32(v240, v243), v245));
              LANES128(v246).n128_u64[0] =
                  LANES128_OF(vpaddq_f32(v246, v246)).n128_u64[0];
              v247 = vaddq_f32(
                  vdupq_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v246).n128_u64[0]), 0),
                  vdupq_lane_s32(
                      COERCE_AS(int32x2_t, LANES128(v246).n128_u64[0]), 1));
              v248 = vrecpeq_f32(v247);
              v249 = vmulq_f32(v248, vrecpsq_f32(v248, v247));
              v250 = vmulq_f32(v249, vrecpsq_f32(v249, v247));
              v251 = vzip1q_s32(v240, v241);
              v252 = vzip2q_s32(v240, v241);
              v253 = vzip1q_s32(v239, COERCE_AS(int32x4_t, 0LL));
              v254 = vzip2q_s32(v251, v253);
              v255 =
                  vzip1q_s32(v252, vzip2q_s32(v239, COERCE_AS(int32x4_t, 0LL)));
              v256 = vzip1q_s32(v251, v253);
              LANES128(v257).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v254, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v252).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v255, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v258).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v255, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v251).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v256, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v257).n128_i8[8] =
                  vqtbl1_s8(v254, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v259 = LANES64_OF(vqtbl1_s8(v255, COERCE_AS(int8x8_t,
                                                          0xF0E0D0C07060504LL)))
                         .n64_u64[0];
              *(int8x8_t*)&LANES128(v258).n128_i8[8] =
                  vqtbl1_s8(v255, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v255).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v254, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v252).n128_u64[1] = v259;
              *(int8x8_t*)&LANES128(v255).n128_i8[8] =
                  vqtbl1_s8(v254, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v260 =
                  vmulq_f32(v250, vmlsq_f32(vmulq_f32(v257, v252), v255, v258));
              *(int8x8_t*)&LANES128(v251).n128_i8[8] =
                  vqtbl1_s8(v256, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v261 = vmulq_f32(v258, v251);
              LANES128(v258).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v256, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v258).n128_i8[8] =
                  vqtbl1_s8(v256, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v262 = vceqzq_f32(v247);
              v263 = vbicq_s8(v260, v262);
              v264 =
                  vbicq_s8(vmulq_f32(v250, vmlsq_f32(v261, v252, v258)), v262);
              v265 = vbicq_s8(
                  vmulq_f32(v250, vmlsq_f32(vmulq_f32(v255, v258), v251, v257)),
                  v262);
              v266 = vzip1q_s32(v264, COERCE_AS(int32x4_t, 0LL));
              v267 = vzip2q_s32(v264, COERCE_AS(int32x4_t, 0LL));
              v268 = vzip1q_s32(v263, v265);
              v269 = vzip2q_s32(v263, v265);
              v270 = vzip1q_s32(v268, v266);
              v271 = vzip2q_s32(v268, v266);
              v272 = vzip1q_s32(v269, v267);
              v273 = vzip2q_s32(v269, v267);
              v274 = vzip1q_s32(v270, v272);
              v275 = vuzp1q_s32(v265, *(int32x4_t*)&a2);
              v276 = vzip1q_s32(v271, v273);
              v277 = vzip2q_s32(v271, v273);
              v232 = vzip1q_s32(v274, v276);
              v233 = vzip2q_s32(v274, v276);
              v234 = vzip1q_s32(v275, v277);
            }
            else {
              v227 = v238[3];
              v228 = vzip1q_s32(v240, v241);
              v229 = vzip2q_s32(v240, v241);
              v230 = vzip1q_s32(v239, v227);
              v231 = vzip2q_s32(v239, v227);
              v232 = vzip1q_s32(v228, v230);
              v233 = vzip2q_s32(v228, v230);
              v234 = vzip1q_s32(v229, v231);
            }
            v235 = *(int32x4_t**)(v236 + v224 + 80);
            v235[3] = v232;
            v235[4] = v233;
            v235[5] = v234;
          }
          v224 += 112;
          v223 += 4;
        } while (v225 != v224);
      }
    }
    *(_BYTE*)(v4 + 506) = 0;
  }
  return result;
}

void Model_a64b80(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  __int128 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  __int64 v13;
  float32x4_t* v14;
  float32x4_t v15;
  unsigned __int64 v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  float32x4_t* v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  __int64 v35;
  float32x4_t* v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  __int64 v41;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v3 = *(_QWORD*)(a1 + 800);
  if (v3 != 0) {
    v41 = a1 + 136;
    v4 = ((long double (*)(__int64, __int64*)) *
          (_QWORD*)(*(_QWORD*)v3 + 48LL))(v3, &v41),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v5 = *(_QWORD*)(a1 + 80);
    v6 = *(_QWORD*)(a1 + 88);
    *(long double*)(a1 + 48) = v4;
    *(_OWORD*)(a1 + 64) = v7;
    if (v6 != v5) {
      *(_QWORD*)(a1 + 88) = v5;
    }
    return;
  }
  v8 = *(_QWORD*)(a1 + 80);
  v9 = *(unsigned __int16*)(a1 + 164);
  v10 = (*(_QWORD*)(a1 + 88) - v8) >> 5;
  if (v9 <= v10) {
    if (v9 < v10) {
      *(_QWORD*)(a1 + 88) = v8 + 32 * v9;
    }
  }
  else {
    GameRoutine_a67360((_QWORD*)(a1 + 80), v9 - v10),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  if ((_DWORD)v9 != 0) {
    v11 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v12 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    v13 = 0;
    while (1) {
      v22 = *(_QWORD*)(a1 + 280);
      v39 = v12;
      v40 = v11;
      v23 = (_QWORD*)(*(_QWORD*)(a1 + 176) + 112 * v13);
      if (*(_BYTE*)(*v23 + 90LL) != 0) {
        GameRoutine_5ecf20(v23, v22, 0, *(float32x4_t*)&a2),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v14 = (float32x4_t*)v23[7];
        v15 = *v14;
        v16 = LANES128(v14[1]).n128_u32[0];
        LANES128(v17).n128_u64[0] = v16 | (v16 << 32);
        LANES128(v17).n128_u64[1] = v16;
        a2 = COERCE_LONG_DOUBLE(vsubq_f32(v15, v17));
        v18 = vaddq_f32(v15, v17);
      }
      else {
        nn_g3d_5ed500(v23, v22, 0),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v24 = v23[8];
        a2 = *(long double*)v24;
        v18 = *(float32x4_t*)(v24 + 16);
        v25 = *(unsigned __int16*)(*(_QWORD*)(*v23 + 24LL) + 52LL);
        v26 = v25 - 2;
        if ((unsigned int)v25 >= 2) {
          v20 = v39;
          v19 = v40;
          v27 = v25 - 1;
          if (v26 >= 7) {
            v29 = v27 & 0xFFFFFFFFFFFFFFF8LL;
            v30 = (float32x4_t*)(v24 + 144);
            v28 = 1;
            do {
              v28 += 8;
              v29 -= 8LL;
              v31 = vminq_f32(
                  vminq_f32(
                      vminq_f32(
                          vminq_f32(
                              vminq_f32(vminq_f32(vminq_f32(*(float32x4_t*)&a2,
                                                            v30[-7]),
                                                  v30[-5]),
                                        v30[-3]),
                              v30[-1]),
                          v30[1]),
                      v30[3]),
                  v30[5]);
              v32 = vmaxq_f32(
                  vmaxq_f32(
                      vmaxq_f32(
                          vmaxq_f32(vmaxq_f32(vmaxq_f32(vmaxq_f32(v18, v30[-6]),
                                                        v30[-4]),
                                              v30[-2]),
                                    *v30),
                          v30[2]),
                      v30[4]),
                  v30[6]);
              v33 = v30[7];
              v34 = v30[8];
              v30 += 16;
              a2 = COERCE_LONG_DOUBLE(vminq_f32(v31, v33));
              v18 = vmaxq_f32(v32, v34);
            } while (v29 != 0);
          }
          else {
            v28 = 1;
          }
          v35 = v27 & 7;
          if (v35 != 0) {
            v36 = (float32x4_t*)(v24 + 32 * v28 + 16);
            do {
              v37 = v36[-1];
              v38 = *v36;
              v36 += 2;
              --v35;
              a2 = COERCE_LONG_DOUBLE(vminq_f32(*(float32x4_t*)&a2, v37));
              v18 = vmaxq_f32(v18, v38);
            } while (v35 != 0);
          }
          goto LABEL_12;
        }
      }
      v20 = v39;
      v19 = v40;
    LABEL_12:
      v11 = vminq_f32(v19, *(float32x4_t*)&a2);
      v12 = vmaxq_f32(v20, v18);
      v21 = *(_QWORD*)(a1 + 80) + 32 * v13++;
      *(long double*)v21 = a2;
      *(float32x4_t*)(v21 + 16) = v18;
      if (v13 == v9) {
        goto LABEL_24;
      }
    }
  }
  v11 = COERCE_AS(float32x4_t, GameData_1a82f20);
  v12 = COERCE_AS(float32x4_t, GameData_1a82ea0);
LABEL_24:
  *(float32x4_t*)(a1 + 48) = v11;
  *(float32x4_t*)(a1 + 64) = v12;
}

__int64 Model_Unknown2(__int64 a1)
{
  int v1;
  bool v3;
  int v4;
  __int64 v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int v10;
  __int64 result;
  int v12;
  char v13;
  __int64* v14;
  __int64* i;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  int v19;
  __int64 v20;

  v1 = *(_DWORD*)(a1 + 496);
  v3 = v1 < -1;
  v4 = ((_BYTE)v1 + 1) & 1;
  if (v3) {
    v4 = -v4;
  }
  *(_DWORD*)(a1 + 496) = v4;
  v5 = (unsigned int)((*(_DWORD*)(a1 + 600) + 1) % 3);
  v6 = *(_DWORD*)(a1 + 608);
  *(_DWORD*)(a1 + 600) = v5;
  v7 = __OFSUB__(v6, 1);
  v8 = v6 - 1;
  if (v8 < 0 != v7) {
    if ((int)v5 >= 1) {
      v10 = -1;
    }
    else {
      v10 = 2;
    }
    v9 = v10 + v5;
  }
  else {
    *(_DWORD*)(a1 + 608) = v8;
    v9 = v5;
  }
  *(_DWORD*)(a1 + 604) = v9;
  nn_g3d_5e3ab0(a1 + 136, v5);
  result = GameRoutine_5e3bc0(a1 + 136, *(unsigned int*)(a1 + 496));
  if ((*(_BYTE*)(a1 + 104) & 4) != 0) {
    if (*(_BYTE*)(a1 + 516) == 1) {
      result = GameRoutine_5e3ac0(a1 + 136, *(unsigned int*)(a1 + 496));
      if ((*(_BYTE*)(a1 + 516) & 1) == 0) {
        GameRoutine_8123d0(result);
      }
      v12 = *(_DWORD*)(a1 + 512);
      v7 = __OFSUB__(v12--, 1);
      *(_DWORD*)(a1 + 512) = v12;
      if ((v12 < 0) ^ v7 | (v12 == 0)) {
        v13 = 0;
      }
      else {
        v13 = 1;
      }
      *(_BYTE*)(a1 + 516) = v13;
    }
  }
  else {
    result = GameRoutine_5e3ac0(a1 + 136, *(unsigned int*)(a1 + 496));
  }
  v14 = *(__int64**)(a1 + 312);
  for (i = *(__int64**)(a1 + 320); v14 != i; result = Material_add560(v16)) {
    v16 = *v14;
    v14 += 2;
  }
  v17 = *(__int64**)(a1 + 288);
  v18 = *(__int64**)(a1 + 296);
  if (v17 != v18) {
    v19 = *(_DWORD*)(a1 + 496);
    do {
      v20 = *v17;
      v17 += 2;
      *(_DWORD*)(v20 + 96) = v19;
    } while (v17 != v18);
  }
  return result;
}

__int64 Model_Unknown3(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((a2 & 1) != 0) {
    v2 = result;
    v3 = *(unsigned __int16*)(*(_QWORD*)(result + 112) + 106LL);
    if ((*(unsigned __int16*)(**(_QWORD**)(result + 280) + 60LL) |
         *(unsigned __int16*)(**(_QWORD**)(result + 280) + 58LL)) != 0 &&
        (_DWORD)v3 != 0) {
      v5 = 0;
      v6 = 56 * v3;
      do {
        v7 = *(int*)(v2 + 496);
        if ((int)v7 >= -1) {
          v8 = (v7 + 1) & 1;
        }
        else {
          v8 = -((v7 + 1) & 1);
        }
        v9 = *(_QWORD*)(*(_QWORD*)(v2 + 408) + 8 * v7 + v5);
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
        v11 = *(_QWORD*)(*(_QWORD*)(v2 + 408) + 8LL * v8 + v5);
        v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
        memcpy(v10, v12, *(_QWORD*)(*(_QWORD*)(v2 + 280) + 72LL));
        (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
        v5 += 56;
      } while (v6 != v5);
    }
  }
  return result;
}

__int64 g3d_Model_CollectElements(__int64 result, __int64 a2, __int64 a3,
                                  _QWORD* a4)
{
  __int64* v4;
  float32x4_t* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  bool v27;
  int** v28;
  int v29;
  int* v30;
  int* v31;
  _BOOL4 v32;
  __int64* v33;
  __int64* v34;
  float v35;
  char v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned __int64 v44;
  __int64 v45;
  int v46;
  unsigned __int64 v47;
  __int64 v48;
  int v49;
  unsigned __int64 v50;
  float32x4_t* v51;
  float32x4_t v52;
  float32x4_t v53;
  __int64 v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  __int64 v59;
  unsigned __int32 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int32 v68;
  int v69;
  int v70;
  struct {
    _QWORD v71[2];
    int v72;
    int v73;
    int v74;
    int v75;
    _QWORD* v76;
    char gap120_[20];
    int v77;
  } v71_;

  v4 = (__int64*)a4[1];
  v7 = (float32x4_t*)result;
  if (v4[1] != v4[2] || *(_DWORD*)(v8 = *v4) != -2 || *(_DWORD*)(v8 + 8) == 3) {
    v9 = *(__int64**)(result + 312);
    v10 = *(__int64**)(result + 320);
    if (v9 != v10) {
      v11 = *(_QWORD*)a3 & 0x3FLL;
      while (1) {
        v12 = *v9;
        v9 += 2;
        if ((*(_QWORD*)(v12 + 312) & v11) != 0) {
          break;
        }
        if (v9 == v10) {
          return result;
        }
      }
      v13 = *(unsigned __int16*)(result + 164);
      if (*(_WORD*)(result + 164) != 0) {
        v14 = 0xFFFFFFFFLL;
        v15 = 0;
        v16 = 0;
        v62 = *(unsigned __int16*)(result + 164);
        v63 = a4;
        v61 = *(_QWORD*)a3 & 0x3FLL;
        v17 = *(_DWORD*)(result + 252) - 1;
        while (1) {
          if (v11 == 8) {
            v18 = *(_DWORD*)(LANES128(v7[38]).n128_u64[1] + 8 * v15);
            if ((*(_BYTE*)(a3 + 8) & 1) != 0) {
              if ((v18 & 0x8000) != 0) {
                goto LABEL_12;
              }
            }
            else if ((v18 & 1) == 0) {
              goto LABEL_12;
            }
          }
          v19 = LANES128(v7[11]).n128_u64[0] + 112 * v15;
          v20 = *(unsigned __int16*)(*(_QWORD*)v19 + 82LL);
          if (((*(unsigned int*)(LANES128(v7[9]).n128_u64[1] +
                                 4 * (v20 >> 5)) >>
                (v20 & 0x1F)) &
               1) == 0) {
            goto LABEL_12;
          }
          if (((*(_DWORD*)(LANES128(v7[9]).n128_u64[0] +
                           4 * ((unsigned __int64)*(
                                    unsigned __int16*)(*(_QWORD*)v19 + 84LL) >>
                                5)) >>
                *(_WORD*)(*(_QWORD*)v19 + 84LL)) &
               1) == 0) {
            goto LABEL_12;
          }
          v21 = *(_QWORD*)(*a4 + 8LL);
          if (v21 != *(_QWORD*)(*a4 + 16LL) && *(_BYTE*)(v21 + (int)v15) != 0) {
            goto LABEL_12;
          }
          v22 = LANES128(v7[19]).n128_u64[1];
          if (v14 != v20) {
            v14 = *(unsigned __int16*)(*(_QWORD*)v19 + 82LL);
            v16 = *(_QWORD*)(v22 + 16 * v20);
          }
          v23 = *(_QWORD*)(v22 + 16 * v14);
          v24 = *(_DWORD*)(v23 + 400);
          v25 = *(unsigned __int8*)(v23 + 410);
          if ((unsigned int)(v24 - 1) >= 3) {
            v26 = *(_DWORD*)(LANES128(v7[22]).n128_u64[1] + 4 * v15);
          }
          else {
            v26 = *(_DWORD*)(LANES128(v7[22]).n128_u64[1] + 4 * v15) | 4;
          }
          v27 = v25 == 0;
          v28 = (int**)a4[1];
          if (v27) {
            v29 = v26 | 0x20;
          }
          else {
            v29 = v26;
          }
          v71_.v77 = v29;
          v30 = v28[1];
          if (v30 != v28[2]) {
            v28 = (int**)&v30[2 * (int)v15];
          }
          v31 = *v28;
          if ((v29 & 0x20) != 0) {
            break;
          }
          v32 = v31[2] == 3;
          if (v31[2] != 3) {
            goto LABEL_36;
          }
        LABEL_37:
          v33 = *(__int64**)(v16 + 288);
          v34 = *(__int64**)(v16 + 296);
          v64 = v14;
          v65 = v16;
          if (v33 != v34) {
            v35 = 0x0.0p+0f;
            v36 = 1;
            v66 = v19;
            do {
              v38 = *v33;
              v39 = *v33 >> 32;
              if (v39 >= 6) {
                String_60a250_alt1("bitset test argument out of range");
              }
              if (((*(_QWORD*)a3 >> v39) & 1) == 0) {
                goto LABEL_42;
              }
              if (SHIDWORD(v38) > 3) {
                if (HIDWORD(v38) == 4) {
                  if ((*(_BYTE*)(LANES128(v7[38]).n128_u64[1] + 8 * v15) & 2) ==
                      0) {
                    goto LABEL_42;
                  }
                }
                else if (HIDWORD(v38) == 5 &&
                         (*(_BYTE*)(LANES128(v7[38]).n128_u64[1] + 8 * v15) &
                          4) == 0) {
                  goto LABEL_42;
                }
              }
              else if ((unsigned int)(HIDWORD(v38) - 1) >= 2) {
                if (HIDWORD(v38) == 3) {
                  v40 = *(_DWORD*)(LANES128(v7[38]).n128_u64[1] + 8 * v15);
                  if ((*(_BYTE*)(a3 + 8) & 1) != 0) {
                    if ((v40 & 0x8000) != 0) {
                      goto LABEL_42;
                    }
                  }
                  else if ((v40 & 1) == 0) {
                    goto LABEL_42;
                  }
                }
              }
              else if ((*(_BYTE*)(LANES128(v7[38]).n128_u64[1] + 8 * v15 + 1) &
                        0x80) != 0) {
                goto LABEL_42;
              }
              if (*v31 >= v17) {
                v41 = v17;
              }
              else {
                v41 = *v31;
              }
              v42 = v41;
              if (v32) {
                v42 = v31[1];
                if (v42 >= v17) {
                  v42 = v17;
                }
              }
              if ((unsigned int)(HIDWORD(v38) - 3) <= 2 &&
                  (*(_DWORD*)(LANES128(v7[38]).n128_u64[1] + 8 * v15) &
                   0xC000) == 0x8000) {
                v43 = *(unsigned __int8*)(*(_QWORD*)v19 + 91LL) - 1;
                if (v43 < v41) {
                  v41 = *(unsigned __int8*)(*(_QWORD*)v19 + 91LL) - 1;
                }
                if (v43 < v42) {
                  v42 = *(unsigned __int8*)(*(_QWORD*)v19 + 91LL) - 1;
                }
              }
              if (v41 < 0 ||
                  ((v44 = LANES128(v7[24]).n128_u64[0]) ==
                           LANES128(v7[24]).n128_u64[1]
                       ? (LOBYTE(v45) = 0)
                       : (v45 = (*(_QWORD*)(v44 + 8 * v15) >> v41) & 1LL),
                   (v46 = -2,
                    v41 < (unsigned int)*(unsigned __int8*)(*(_QWORD*)v19 +
                                                            91LL)) &&
                       (v45 & 1) == 0)) {
                v46 = v41;
              }
              if (v42 < 0 ||
                  ((v47 = LANES128(v7[24]).n128_u64[0]) ==
                           LANES128(v7[24]).n128_u64[1]
                       ? (LOBYTE(v48) = 0)
                       : (v48 = (*(_QWORD*)(v47 + 8 * v15) >> v42) & 1LL),
                   (v49 = -2,
                    v42 < (unsigned int)*(unsigned __int8*)(*(_QWORD*)v19 +
                                                            91LL)) &&
                       (v48 & 1) == 0)) {
                v49 = v42;
              }
              if (v46 == -2 && v49 == -2) {
                goto LABEL_42;
              }
              if ((v36 & 1) != 0) {
                v50 = LANES128(v7[5]).n128_u64[0];
                if ((int)((LANES128(v7[5]).n128_u64[1] - v50) >> 5) < 1) {
                  v52 = v7[3];
                  v53 = v7[4];
                }
                else {
                  v51 = (float32x4_t*)(v50 + 32 * v15);
                  v52 = *v51;
                  v53 = v51[1];
                }
                v54 = *(_QWORD*)a2;
                v55 = vaddq_f32(v52, v53);
                if (*(_QWORD*)(*(_QWORD*)a2 + 80LL) != 0) {
                  LANES128(v56).n128_u64[0] = 0x3F0000003F000000LL;
                  LANES128(v56).n128_u64[1] = 0x3F0000003F000000LL;
                  v57 = vmulq_f32(v55, v56);
                  LANES128(v56).n128_u64[0] = *(_QWORD*)(v54 + 88);
                  LANES128(v56).n128_u64[1] = *(unsigned int*)(v54 + 96);
                  v58 = vmulq_f32(v57, v56);
                  LANES128(v58).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v58, v58, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v58).n128_u64[0])))
                          .n64_u64[0];
                  v35 = *(float*)(v54 + 108) +
                        (float)((float)(LANES64_OF(
                                            vpadd_f32(
                                                COERCE_AS(
                                                    float32x2_t,
                                                    LANES128(v58).n128_u64[0]),
                                                COERCE_AS(
                                                    float32x2_t,
                                                    LANES128(v58).n128_u64[0])))
                                            .n64_f32[0] +
                                        *(float*)(v54 + 100)) *
                                *(float*)(v54 + 104));
                }
                else {
                  v35 = 0x0.0p+0f;
                }
              }
              v71_.v72 = v15;
              v71_.v73 = v38;
              v71_.v74 = v46;
              v71_.v75 = v49;
              v59 = a2;
              v71_.v71[0] = GameData_1fc0360;
              v71_.v71[1] = v7;
              v60 = LANES128(v7[2]).n128_u32[1];
              v71_.v76 = v71_.v71;
              v67 = __PAIR64__(LODWORD(v35), v60);
              v68 = LANES128(v7[31]).n128_u32[3];
              v69 = v38;
              v70 = v71_.v77;
              ElementRenderer_a74470(a2, (__int64)v71_.v71, (__int64*)&v67);
              result = (__int64)v71_.v76;
              if (v71_.v76 == v71_.v71) {
                v37 = 32;
              }
              else {
                if (v71_.v76 == nullptr) {
                  goto LABEL_41;
                }
                v37 = 40;
              }
              result = (*(__int64 (**)(__int64))(*v71_.v76 + v37))(
                  (__int64)v71_.v76);
            LABEL_41:
              v19 = v66;
              v36 = 0;
              a2 = v59;
            LABEL_42:
              ++v33;
            } while (v33 != v34);
          }
          v13 = v62;
          a4 = v63;
          v14 = v64;
          v16 = v65;
          v11 = v61;
        LABEL_12:
          if (++v15 == v13) {
            return result;
          }
        }
        v32 = false;
      LABEL_36:
        if (*v31 == -2) {
          goto LABEL_12;
        }
        goto LABEL_37;
      }
    }
  }
  return result;
}

__int64 Model_Unknown15(__int64 a1, int a2)
{
  int v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v2 = *(unsigned __int16*)(a1 + 164);
  if (*(_WORD*)(a1 + 164) == 0) {
    return 0;
  }
  v3 = *(_QWORD**)(a1 + 176);
  v4 = *(_QWORD*)(a1 + 384);
  v5 = *(_DWORD*)(a1 + 252) - 1;
  if (v5 >= a2) {
    v5 = a2;
  }
  if (a2 >= 0) {
    v6 = v5;
  }
  else {
    v6 = 0;
  }
  v7 = v6;
  if (v4 != *(_QWORD*)(a1 + 392)) {
    v8 = 1LL << v6;
    if (v2 == 1) {
      v9 = 0;
      result = 0;
    }
    else {
      v17 = (_QWORD*)(v4 + 8);
      v9 = 0;
      result = 0;
      v18 = v3;
      do {
        if (v7 < *(unsigned __int8*)(*v18 + 91LL) && (*(v17 - 1) & v8) == 0) {
          v20 = *(_QWORD*)(*v18 + 24LL);
          if (v20 != 0) {
            v21 = v20 + 56LL * v7;
            if (*(_DWORD*)(v21 + 36) == 3) {
              result = *(_DWORD*)(v21 + 44) / 3u + (unsigned int)result;
            }
          }
        }
        v22 = v18[14];
        if (v7 < *(unsigned __int8*)(v22 + 91) && (*v17 & v8) == 0) {
          v24 = *(_QWORD*)(v22 + 24);
          if (v24 != 0) {
            v25 = v24 + 56LL * v7;
            if (*(_DWORD*)(v25 + 36) == 3) {
              result = *(_DWORD*)(v25 + 44) / 3u + (unsigned int)result;
            }
          }
        }
        v9 += 2;
        v18 += 28;
        v17 += 2;
      } while ((v2 & 0xFFFE) != v9);
    }
    if ((v2 & 1) == 0) {
      return result;
    }
    v11 = v3[14 * v9];
    v12 = *(_QWORD*)(v4 + 8 * v9) & v8;
    if (v7 >= *(unsigned __int8*)(v11 + 91) || v12 != 0) {
      return result;
    }
  LABEL_21:
    v15 = *(_QWORD*)(v11 + 24);
    if (v15 != 0) {
      v16 = v15 + 56LL * v7;
      if (*(_DWORD*)(v16 + 36) == 3) {
        return *(_DWORD*)(v16 + 44) / 3u + (unsigned int)result;
      }
    }
    return result;
  }
  if (v2 == 1) {
    v14 = 0;
    result = 0;
  }
  else {
    v14 = 0;
    result = 0;
    v26 = v3;
    do {
      if (v6 < *(unsigned __int8*)(*v26 + 91LL)) {
        v27 = *(_QWORD*)(*v26 + 24LL);
        if (v27 != 0) {
          v28 = v27 + 56LL * v6;
          if (*(_DWORD*)(v28 + 36) == 3) {
            result = *(_DWORD*)(v28 + 44) / 3u + (unsigned int)result;
          }
        }
      }
      v29 = v26[14];
      if (v6 < *(unsigned __int8*)(v29 + 91)) {
        v30 = *(_QWORD*)(v29 + 24);
        if (v30 != 0) {
          v31 = v30 + 56LL * v6;
          if (*(_DWORD*)(v31 + 36) == 3) {
            result = *(_DWORD*)(v31 + 44) / 3u + (unsigned int)result;
          }
        }
      }
      v14 += 2;
      v26 += 28;
    } while ((v2 & 0xFFFE) != v14);
  }
  if ((v2 & 1) != 0) {
    v11 = v3[14 * v14];
    if (v6 < *(unsigned __int8*)(v11 + 91)) {
      goto LABEL_21;
    }
  }
  return result;
}

void Model_a65960(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  signed __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  char v30;
  bool v31;
  bool v32;
  char v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  int v64;
  char v65;
  bool v66;
  bool v67;
  char v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int16 v73;
  int v74;
  __int16 v75;

  v2 = *a2;
  v3 = a2[1];
  v6 = v3 - *a2;
  v7 = *(int*)(a1 + 252);
  v8 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
  v9 = v7 - v8;
  if (v7 <= v8) {
    if (v7 >= v8) {
      goto LABEL_18;
    }
    v21 = v2 + 24LL * (int)v7;
    goto LABEL_17;
  }
  v10 = a2[2];
  if (0xAAAAAAAAAAAAAAABLL * ((v10 - v3) >> 3) >= v9) {
    memset_alt2(a2[1], 0, 24 * ((24 * v9 - 24) / 0x18) + 24);
    v21 = v3 + 24 * ((24 * v9 - 24) / 0x18) + 24;
  LABEL_17:
    a2[1] = v21;
    goto LABEL_18;
  }
  if ((v7 & 0x80000000) != 0) {
    GameRoutine_a67330_alt1();
  }
  v11 = 0xAAAAAAAAAAAAAAABLL * ((v10 - v2) >> 3);
  v12 = 2 * v11;
  if (2 * v11 <= v7) {
    v12 = *(int*)(a1 + 252);
  }
  if (v11 >= 0x555555555555555LL) {
    v13 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v13 = v12;
  }
  if (v13 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_60a210_alt1();
  }
  v14 = 3 * v13;
  v15 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v13, 16, 0);
  v16 = v15 + v6;
  v17 = v15;
  v18 = v15 + 8 * v14;
  v19 = 24 * ((24 * v9 - 24) / 0x18) + 24;
  memset_alt2(v15 + v6, 0, v19);
  memcpy_alt1(v17, v2, v6);
  *a2 = v17;
  a2[1] = v16 + v19;
  a2[2] = v18;
  if (v2 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v2);
  }
LABEL_18:
  v22 = *(unsigned __int16*)(a1 + 164);
  v75 = 0;
  v74 = 0;
  if ((_DWORD)v22 != 0) {
    if ((int)v7 > 0) {
      v23 = v7 & 0x7FFFFFFE;
      v24 = -1;
      v25 = 0;
      v26 = 0;
      while (1) {
        v27 = *(_QWORD*)(a1 + 176) + 112 * v25;
        if (v24 != *(unsigned __int16*)(*(_QWORD*)v27 + 82LL)) {
          v26 = *(_QWORD*)(*(_QWORD*)(a1 + 312) +
                           16LL * *(unsigned __int16*)(*(_QWORD*)v27 + 82LL));
          v24 = *(unsigned __int16*)(*(_QWORD*)v27 + 82LL);
        }
        v28 = *(_QWORD*)(a1 + 616);
        LOBYTE(v74) = 1;
        v72 = 0;
        LODWORD(v28) = *(_DWORD*)(v28 + 8 * v25);
        v73 = 0;
        v29 = (v28 & 0x8000) == 0;
        v30 = v28 & 1;
        v31 = (v28 & 2) != 0;
        v32 = (v28 & 4) != 0;
        v33 = v29;
        HIBYTE(v75) = v32;
        HIBYTE(v74) = v30;
        LOBYTE(v75) = v31;
        BYTE1(v74) = v33;
        BYTE2(v74) = v33;
        v34 = *(__int64**)(v26 + 288);
        v35 = *(__int64**)(v26 + 296);
        if (v34 == v35) {
          goto LABEL_22;
        }
        do {
          v37 = *v34 >> 32;
          if ((*((_BYTE*)&v72 + v37) & 1) == 0 && *((_BYTE*)&v74 + v37) == 1) {
            if ((unsigned int)(HIDWORD(*v34) - 3) < 3 &&
                (*(_DWORD*)(*(_QWORD*)(a1 + 616) + 8 * v25) & 0xC000) ==
                    0x8000) {
              v38 = 0;
              if (v7 != 1) {
                v39 = 4 * v37;
                while (1) {
                  v41 = *(_QWORD*)(a1 + 384);
                  v42 = *(unsigned __int8*)(*(_QWORD*)v27 + 91LL) - 1;
                  if (v42 >= (int)v38) {
                    v42 = v38;
                  }
                  if (v41 == *(_QWORD*)(a1 + 392) ||
                      ((*(_QWORD*)(v41 + 8 * v25) >> v42) & 1) == 0) {
                    break;
                  }
                LABEL_53:
                  v44 = *(unsigned __int8*)(*(_QWORD*)v27 + 91LL) - 1;
                  v45 = *(_QWORD*)(a1 + 384);
                  if (v44 >= (int)v38 + 1) {
                    v44 = v38 + 1;
                  }
                  if (v45 == *(_QWORD*)(a1 + 392) ||
                      ((*(_QWORD*)(v45 + 8 * v25) >> v44) & 1) == 0) {
                    if (v44 != -2) {
                      v40 = *(_QWORD*)(*(_QWORD*)v27 + 24LL);
                      if (v40 == 0) {
                        goto LABEL_41;
                      }
                      v40 += 56LL * v44;
                      if (*(_DWORD*)(v40 + 36) == 3) {
                        LODWORD(v40) = *(_DWORD*)(v40 + 44) / 3u;
                        goto LABEL_41;
                      }
                    }
                    LODWORD(v40) = 0;
                  LABEL_41:
                    *(_DWORD*)(*a2 + v39 + 24) += v40;
                  }
                  v38 += 2LL;
                  v39 += 48;
                  if (v23 == v38) {
                    goto LABEL_88;
                  }
                }
                if (v42 != -2) {
                  v43 = *(_QWORD*)(*(_QWORD*)v27 + 24LL);
                  if (v43 == 0) {
                  LABEL_52:
                    *(_DWORD*)(*a2 + v39) += v43;
                    goto LABEL_53;
                  }
                  v43 += 56LL * v42;
                  if (*(_DWORD*)(v43 + 36) == 3) {
                    LODWORD(v43) = *(_DWORD*)(v43 + 44) / 3u;
                    goto LABEL_52;
                  }
                }
                LODWORD(v43) = 0;
                goto LABEL_52;
              }
            LABEL_88:
              if ((v7 & 1) == 0) {
                goto LABEL_32;
              }
              v56 = *(_QWORD*)(a1 + 384);
              v57 = *(unsigned __int8*)(*(_QWORD*)v27 + 91LL) - 1;
              if (v57 >= (int)v38) {
                v57 = v38;
              }
              if (v56 != *(_QWORD*)(a1 + 392) &&
                  ((*(_QWORD*)(v56 + 8 * v25) >> v57) & 1) != 0) {
                goto LABEL_32;
              }
              if (v57 != -2) {
                v36 = *(_QWORD*)(*(_QWORD*)v27 + 24LL);
                if (v36 != 0) {
                  v36 += 56LL * v57;
                  goto LABEL_101;
                }
              LABEL_31:
                *(_DWORD*)(*a2 + 24 * v38 + 4 * v37) += v36;
              LABEL_32:
                *((_BYTE*)&v72 + v37) = 1;
                goto LABEL_33;
              }
            }
            else {
              if (v7 == 1) {
                v38 = 0;
              }
              else {
                v46 = 4 * v37;
                v47 = 0;
                v38 = 0;
                do {
                  v49 = *(_QWORD*)(a1 + 384);
                  if (v49 == *(_QWORD*)(a1 + 392)) {
                    LOBYTE(v50) = 0;
                  }
                  else {
                    v50 = (*(_QWORD*)(v49 + 8 * v25) >> v38) & 1LL;
                  }
                  if (v38 < *(unsigned __int8*)(*(_QWORD*)v27 + 91LL) &&
                      (v50 & 1) == 0) {
                    v51 = *(_QWORD*)(*(_QWORD*)v27 + 24LL);
                    if (v51 != 0) {
                      v51 += v47;
                      if (*(_DWORD*)(v51 + 36) == 3) {
                        LODWORD(v51) = *(_DWORD*)(v51 + 44) / 3u;
                      }
                      else {
                        LODWORD(v51) = 0;
                      }
                    }
                    *(_DWORD*)(*a2 + v46) += v51;
                  }
                  v52 = *(_QWORD*)(a1 + 384);
                  v53 = v52 != *(_QWORD*)(a1 + 392) &&
                        ((*(_QWORD*)(v52 + 8 * v25) >> v38) & 2LL) != 0;
                  if (v38 + 1 < *(unsigned __int8*)(*(_QWORD*)v27 + 91LL) &&
                      !v53) {
                    v48 = *(_QWORD*)(*(_QWORD*)v27 + 24LL);
                    if (v48 != 0) {
                      v48 += v47;
                      if (*(_DWORD*)(v48 + 92) == 3) {
                        LODWORD(v48) = *(_DWORD*)(v48 + 100) / 3u;
                      }
                      else {
                        LODWORD(v48) = 0;
                      }
                    }
                    *(_DWORD*)(*a2 + v46 + 24) += v48;
                  }
                  v38 += 2LL;
                  v47 += 112;
                  v46 += 48;
                } while (v23 != v38);
              }
              if ((v7 & 1) == 0) {
                goto LABEL_32;
              }
              v54 = *(_QWORD*)(a1 + 384);
              if (v54 == *(_QWORD*)(a1 + 392)) {
                LOBYTE(v55) = 0;
              }
              else {
                v55 = (*(_QWORD*)(v54 + 8 * v25) >> v38) & 1LL;
              }
              if (v38 >= *(unsigned __int8*)(*(_QWORD*)v27 + 91LL) ||
                  (v55 & 1) != 0) {
                goto LABEL_32;
              }
              v36 = *(_QWORD*)(*(_QWORD*)v27 + 24LL);
              if (v36 == 0) {
                goto LABEL_31;
              }
              v36 += 56 * v38;
            LABEL_101:
              if (*(_DWORD*)(v36 + 36) == 3) {
                LODWORD(v36) = *(_DWORD*)(v36 + 44) / 3u;
                goto LABEL_31;
              }
            }
            LODWORD(v36) = 0;
            goto LABEL_31;
          }
        LABEL_33:
          ++v34;
        } while (v34 != v35);
        LODWORD(v22) = *(unsigned __int16*)(a1 + 164);
      LABEL_22:
        if (++v25 >= (unsigned __int64)(unsigned int)v22) {
          return;
        }
      }
    }
    v58 = *(_QWORD*)(a1 + 176);
    v59 = *(_QWORD*)(a1 + 312);
    v60 = *(_QWORD*)(a1 + 616);
    v61 = -1;
    v62 = 0;
    v63 = 0;
    do {
      if (v61 != *(unsigned __int16*)(*(_QWORD*)(v58 + 112 * v62) + 82LL)) {
        v61 = *(unsigned __int16*)(*(_QWORD*)(v58 + 112 * v62) + 82LL);
        v63 =
            *(_QWORD*)(v59 +
                       16LL * *(unsigned __int16*)(*(_QWORD*)(v58 + 112 * v62) +
                                                   82LL));
      }
      LOBYTE(v74) = 1;
      v72 = 0;
      v64 = *(_DWORD*)(v60 + 8 * v62);
      v73 = 0;
      v29 = (v64 & 0x8000) == 0;
      v65 = v64 & 1;
      v66 = (v64 & 2) != 0;
      v67 = (v64 & 4) != 0;
      v68 = v29;
      HIBYTE(v75) = v67;
      HIBYTE(v74) = v65;
      LOBYTE(v75) = v66;
      BYTE1(v74) = v68;
      BYTE2(v74) = v68;
      v70 = *(_QWORD*)(v63 + 288);
      v69 = *(_QWORD*)(v63 + 296);
      while (v70 != v69) {
        v71 = *(int*)(v70 + 4);
        if ((*((_BYTE*)&v72 + v71) & 1) == 0 && *((_BYTE*)&v74 + v71) == 1) {
          *((_BYTE*)&v72 + v71) = 1;
        }
        v70 += 8;
      }
      ++v62;
    } while (v62 != v22);
  }
}

__int64 Model_a66080(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7)
{
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[2];

  v24 = a6;
  v25 = a7;
  v26[0] = a4;
  v26[1] = a5;
  v12 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13416);
  result = GameRoutine_a67640(v12, v26);
  if (result != 0 &&
      (v14 = result, (result = GameRoutine_a677e0(result + 40, &v24)) != 0)) {
    v15 = result + 40;
    v16 = GameRoutine_a67980(v14 + 80, *(_QWORD*)(result + 40) + 32LL);
    v17 = v12 + 64;
    if (v16 != 0) {
      v18 = v16 + 40;
    }
    else {
      v18 = 0;
    }
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 472,
                                                  16, 0);
    v20 = v24;
    v21 = v25;
    v22 = v19 + 3;
    v23 = v19;
    v19[1] = 0;
    v19[2] = 0;
    *v19 = GameData_1fc0208;
    result =
        GameRoutine_b3cae0(v19 + 3, a2, v18, a3, a4, a5, v20, v21, v15, v17);
    *a1 = v22;
    a1[1] = v23;
  }
  else {
    *a1 = 0;
    a1[1] = 0;
  }
  return result;
}

__int64 Model_a661a0(__int64 a1, int a2, __int64 a3, int a4)
{
  _BYTE* v5;
  _BYTE* v6;
  __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  _BYTE* v24;
  __int64* v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64** v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  bool v42;
  long double v43;
  __int64 v44;
  _BYTE* v45;
  __int64 v46;
  __int64 v48;
  _BYTE v50[32];
  _BYTE* v51;
  _BYTE v52[32];
  _BYTE* v53;
  _QWORD v54[4];

  if (*(_QWORD*)(a1 + 664) == *(_QWORD*)(a1 + 656)) {
    *(_QWORD*)(*(_QWORD*)(a1 + 280) + 88LL) = *(_QWORD*)(a1 + 648);
  }
  v5 = *(_BYTE**)(a3 + 32);
  v51 = nullptr;
  HIDWORD(v48) = a4;
  if (v5 == nullptr) {
    v6 = nullptr;
  LABEL_10:
    v53 = v5;
    v51 = v6;
    goto LABEL_11;
  }
  if (v5 == (_BYTE*)a3) {
    v53 = v52;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v52);
    v6 = v53;
    v5 = v51;
  }
  else {
    v6 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5);
    v5 = nullptr;
    v53 = v6;
  }
  if (v6 != v52) {
    if (v5 == v50) {
      (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v52);
      (*(void (**)(_BYTE*))(*(_QWORD*)v51 + 32LL))(v51);
      v8 = v53;
      v53 = v52;
      v5 = v52;
      v51 = v8;
      goto LABEL_17;
    }
    goto LABEL_10;
  }
  if (v5 == v50) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*, _QWORD*))(
        *(_QWORD*)v6 + 24LL))((void*)v6, v6, v54);
    (*(void (**)(_BYTE*))(*(_QWORD*)v53 + 32LL))(v53);
    v53 = nullptr;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v51 + 24LL))(v51, v52);
    (*(void (**)(_BYTE*))(*(_QWORD*)v51 + 32LL))(v51);
    v51 = nullptr;
    v53 = v52;
    (*(void (**)(_QWORD*, _BYTE*))(v54[0] + 24LL))(v54, v50);
    (*(void (**)(_QWORD*))(v54[0] + 32LL))(v54);
    v5 = v53;
    v51 = v50;
  }
  else {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*, _BYTE*))(
        *(_QWORD*)v6 + 24LL))((void*)v6, v6, v50);
    (*(void (**)(_BYTE*))(*(_QWORD*)v53 + 32LL))(v53);
    v5 = v51;
    v51 = v50;
    v53 = v5;
  }

LABEL_11:
  if (v5 == v52) {
  LABEL_17:
    v7 = 32;
    goto LABEL_18;
  }
  if (v5 != nullptr) {
    v7 = 40;
  LABEL_18:
    v5 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + v7))(v5);
  }
  v9 = *(_QWORD*)(a1 + 664);
  LODWORD(v48) = *(_DWORD*)(a1 + 640);
  v10 = *(_QWORD*)(a1 + 672);
  if (v9 < v10) {
    *(_DWORD*)(v9 + 8) = a2;
    *(_QWORD*)v9 = v48;
    if (v51 != nullptr) {
      if (v51 == v50) {
        *(_QWORD*)(v9 + 48) = v9 + 16;
        (*(void (**)(_BYTE*))(*(_QWORD*)v51 + 24LL))(v51);
      }
      else {
        *(_QWORD*)(v9 + 48) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v51 + 16LL))((__int64)v51);
      }
      v11 = v9 + 64;
    }
    else {
      *(_QWORD*)(v9 + 48) = 0;
      v11 = v9 + 64;
    }
    goto LABEL_56;
  }
  v12 = *(_QWORD*)(a1 + 656);
  v13 = v9 - v12;
  v14 = ((__int64)(v9 - v12) >> 6) + 1;
  if (v14 >> 58 != 0) {
    GameRoutine_a67b90(v5);
  }
  v15 = v10 - v12;
  v16 = v15 >> 5;
  if (v15 >> 5 <= v14) {
    v16 = v14;
  }
  v17 = (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFC0LL;
  v18 = 0x3FFFFFFFFFFFFFFLL;
  if (!v17) {
    v18 = v16;
  }
  if (v18 >> 58 != 0) {
    GameRoutine_60a210(v5);
  }
  v19 = v18 << 6;
  v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v18 << 6, 16, 0);
  v22 = v20 + v13;
  v23 = v20;
  v24 = v51;
  *(_QWORD*)v22 = v48;
  *(_DWORD*)(v22 + 8) = a2;
  if (v24 != nullptr) {
    if (v24 == v50) {
      *(_QWORD*)(v22 + 48) = v22 + 16;
      (*(void (**)(_BYTE*))(*(_QWORD*)v24 + 24LL))(v24);
    }
    else {
      *(_QWORD*)(v22 + 48) =
          (*(__int64 (**)(_BYTE*))(*(_QWORD*)v24 + 16LL))(v24);
    }
  }
  else {
    *(_QWORD*)(v22 + 48) = 0;
  }
  v25 = *(__int64**)(a1 + 664);
  v26 = *(__int64**)(a1 + 656);
  v27 = v23 + v19;
  v11 = v22 + 64;
  v28 = v22 - ((char*)v25 - (char*)v26);
  if (v25 != v26) {
    v29 = v13 - (((char*)v25 - (char*)v26) >> 6 << 6);
    v30 = *(__int64**)(a1 + 656);
    v31 = (__int64**)(v29 + v23 + 48);
    do {
      v32 = (__int64*)*v30;
      *((_DWORD*)v31 - 10) = *((_DWORD*)v30 + 2);
      *(v31 - 6) = v32;
      v33 = (__int64*)v30[6];
      if (v33 != nullptr) {
        if (v30 + 2 == v33) {
          *v31 = (__int64*)(v31 - 4);
          (*(void (**)(__int64))(*(_QWORD*)v30[6] + 24LL))(v30[6]);
        }
        else {
          *v31 = v33;
          v30[6] = 0;
        }
      }
      else {
        *v31 = nullptr;
      }
      v30 += 8;
      v31 += 8;
    } while (v30 != v25);
    while (1) {
      v35 = (__int64*)v26[6];
      if (v26 + 2 == v35) {
        v34 = 32;
      }
      else {
        if (v35 == nullptr) {
          goto LABEL_47;
        }
        v34 = 40;
      }
      (*(void (**)(__int64))(*v35 + v34))((__int64)v35);
    LABEL_47:
      v26 += 8;
      if (v26 == v25) {
        v26 = *(__int64**)(a1 + 656);
        break;
      }
    }
  }
  *(_QWORD*)(a1 + 656) = v28;
  *(_QWORD*)(a1 + 664) = v11;
  *(_QWORD*)(a1 + 672) = v27;
  if (v26 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, (__int64)v26);
  }

LABEL_56:
  v37 = *(_QWORD*)(a1 + 656);
  *(_QWORD*)(a1 + 664) = v11;
  if ((__int64)(v11 - v37) >> 6 < 1) {
    v41 = 0;
  LABEL_62:
    GameRoutine_a69c80(v37, v11, (__int64)(v11 - v37) >> 6, 0, v41);
  }
  else {
    v38 = (__int64)(v11 - v37) >> 6;
    v39 = GameData_212c060;
    while (1) {
      v40 = GameRoutine_1a09d20(v38 << 6, v39);
      if (v40 != 0) {
        break;
      }
      v41 = v38 >> 1;
      v42 = v38 > 1;
      v38 >>= 1;
      if (!v42) {
        goto LABEL_62;
      }
    }
    GameRoutine_a69c80(v37, v11, (__int64)(v11 - v37) >> 6, v40, v38);
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    ((__int64 (*)(__int64, __int64))nn_mem_StandardAllocator_Free)(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v40);
  }
  v45 = v51;
  *(_BYTE*)(a1 + 504) = 1;
  ++*(_DWORD*)(a1 + 640);
  if (v45 == v50) {
    v46 = 32;
    goto LABEL_70;
  }
  if (v45 != nullptr) {
    v46 = 40;
  LABEL_70:
    (*(void (**)(__int64))(*(_QWORD*)v45 + v46))((__int64)v45);
  }
  return (unsigned int)v48;
}

__int64* Model_a66700(__int64* result, int a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;

  v2 = (__int64*)result[82];
  v3 = (__int64*)result[83];
  v5 = result;
  v6 = v2;
  if (v2 != v3) {
    v6 = (__int64*)result[82];
    while (*(_DWORD*)v6 != a2) {
      v6 += 8;
      if (v6 == v3) {
      LABEL_27:
        if (v3 == v2) {
          goto LABEL_28;
        }
        goto LABEL_29;
      }
    }
  }
  v7 = v6 + 8;
  if (v6 == v3 || v7 == v3) {
    if (v6 == v3) {
      goto LABEL_27;
    }
    goto LABEL_30;
  }
  do {
    if (*(_DWORD*)v7 == a2) {
      goto LABEL_15;
    }
    v9 = *v7;
    v10 = *((_DWORD*)v7 + 2);
    result = (__int64*)v6[6];
    v6[6] = 0;
    *((_DWORD*)v6 + 2) = v10;
    *v6 = v9;
    if (result == v6 + 2) {
      v11 = 32;
      goto LABEL_21;
    }
    if (result != nullptr) {
      v11 = 40;
    LABEL_21:
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v11))((__int64)result);
    }
    v12 = (__int64*)v7[6];
    if (v12 != nullptr) {
      if (v7 + 2 == v12) {
        v6[6] = (__int64)(v6 + 2);
        result = (__int64*)(*(__int64 (**)(__int64, __int64*))(
            *(_QWORD*)v7[6] + 24LL))(v7[6], v6 + 2);
      }
      else {
        v6[6] = (__int64)v12;
        v7[6] = 0;
      }
    }
    else {
      v6[6] = 0;
    }
    v6 += 8;
  LABEL_15:
    v7 += 8;
  } while (v7 != v3);
  v3 = (__int64*)v5[83];
  v2 = (__int64*)v5[82];
  if (v6 == v3) {
    goto LABEL_27;
  }
LABEL_30:
  while (v3 != v6) {
    result = (__int64*)*(v3 - 2);
    if (v3 - 6 == result) {
      v14 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_35;
      }
      v14 = 40;
    }
    result =
        (__int64*)(*(__int64 (**)(__int64))(*result + v14))((__int64)result);
  LABEL_35:
    v3 -= 8;
  }
  v13 = (__int64*)v5[82];
  v5[83] = (__int64)v6;
  if (v6 == v13) {
  LABEL_28:
    *(_QWORD*)(v5[35] + 88) = 0;
  }
LABEL_29:
  *((_BYTE*)v5 + 504) = 1;
  return result;
}

__int64 Model_a66980(__int64 a1, __int64 a2, int a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  _BYTE* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  _BYTE* v36;
  __int64 v37;
  __int64 v39;
  _BYTE v40[32];
  _BYTE* v41;
  _BYTE v42[32];
  _BYTE* v43;

  v4 = *(_QWORD*)(a2 + 32);
  v41 = nullptr;
  if (v4 != 0) {
    if (v4 == a2) {
      v43 = v42;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v42);
    }
    else {
      v43 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    }
  }
  else {
    v43 = nullptr;
  }
  GameRoutine_654050(v42, v40);
  v6 = (__int64)v43;
  if (v43 == v42) {
    v7 = 32;
  }
  else {
    if (v43 == nullptr) {
      goto LABEL_11;
    }
    v7 = 40;
  }
  v6 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v43 + v7))(v43);
LABEL_11:
  LODWORD(v39) = *(_DWORD*)(a1 + 680);
  HIDWORD(v39) = a3;
  v8 = *(_QWORD**)(a1 + 696);
  v9 = *(_QWORD*)(a1 + 704);
  if ((unsigned __int64)v8 < v9) {
    *v8 = v39;
    if (v41 != nullptr) {
      if (v41 == v40) {
        v8[6] = v8 + 2;
        (*(void (**)(_BYTE*))(*(_QWORD*)v41 + 24LL))(v41);
      }
      else {
        v8[6] = (*(__int64 (**)(void*))(*(_QWORD*)v41 + 16))((void*)v41);
      }
      v10 = v8 + 8;
    }
    else {
      v8[6] = 0;
      v10 = v8 + 8;
    }
    goto LABEL_48;
  }
  v11 = *(_QWORD*)(a1 + 688);
  v12 = (char*)v8 - v11;
  v13 = (((__int64)v8 - v11) >> 6) + 1;
  if (v13 >> 58 != 0) {
    GameRoutine_a67bb0(v6);
  }
  v14 = v9 - v11;
  v15 = v14 >> 5;
  if (v14 >> 5 <= v13) {
    v15 = v13;
  }
  v16 = (unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFC0LL;
  v17 = 0x3FFFFFFFFFFFFFFLL;
  if (!v16) {
    v17 = v15;
  }
  if (v17 >> 58 != 0) {
    GameRoutine_60a210(v6);
  }
  v18 = v17 << 6;
  v19 = fw_memory_g_heap_manager_ptr;
  v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v17 << 6, 16, 0);
  v21 = &v12[v20];
  v22 = v41;
  *(_QWORD*)&v12[v20] = v39;
  v23 = (__int64)&v12[v20 + 16];
  if (v22 != nullptr) {
    if (v22 == v40) {
      *((_QWORD*)v21 + 6) = v23;
      (*(void (**)(_BYTE*))(*(_QWORD*)v22 + 24LL))(v22);
    }
    else {
      *((_QWORD*)v21 + 6) =
          (*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v22 + 16LL))(v22, v23);
    }
  }
  else {
    *((_QWORD*)v21 + 6) = 0;
  }
  v24 = v20 + v18;
  v25 = *(_QWORD*)(a1 + 696);
  v26 = *(_QWORD*)(a1 + 688);
  v10 = v21 + 64;
  v27 = &v21[v26 - v25];
  if (v25 != v26) {
    v28 = 0;
    do {
      v29 = v26 + v28;
      v30 = &v27[v28];
      *(_QWORD*)&v27[v28] = *(_QWORD*)(v26 + v28);
      v31 = *(_QWORD*)(v26 + v28 + 48);
      if (v31 != 0) {
        if (v29 + 16 == v31) {
          *((_QWORD*)v30 + 6) = &v27[v28 + 16];
          (*(void (**)(_QWORD))(**(_QWORD**)(v29 + 48) + 24LL))(
              *(_QWORD*)(v29 + 48));
        }
        else {
          *((_QWORD*)v30 + 6) = v31;
          *(_QWORD*)(v29 + 48) = 0;
        }
      }
      else {
        *((_QWORD*)v30 + 6) = 0;
      }
      v28 += 64;
    } while (v26 + v28 != v25);
    while (1) {
      v33 = *(_QWORD**)(v26 + 48);
      if ((_QWORD*)(v26 + 16) == v33) {
        v32 = 32;
      }
      else {
        if (v33 == nullptr) {
          goto LABEL_39;
        }
        v32 = 40;
      }
      (*(void (**)(void*))(*v33 + v32))(v33);
    LABEL_39:
      v26 += 64;
      if (v26 == v25) {
        v26 = *(_QWORD*)(a1 + 688);
        break;
      }
    }
  }
  *(_QWORD*)(a1 + 688) = v27;
  *(_QWORD*)(a1 + 696) = v10;
  *(_QWORD*)(a1 + 704) = v24;
  if (v26 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v34, v26);
  }
LABEL_48:
  v35 = *(_QWORD**)(a1 + 688);
  *(_QWORD*)(a1 + 696) = v10;
  if (v35 != v10) {
    GameRoutine_a67be0();
  }
  v36 = v41;
  ++*(_DWORD*)(a1 + 680);
  *(_BYTE*)(a1 + 504) = 1;
  if (v36 == v40) {
    v37 = 32;
    goto LABEL_54;
  }
  if (v36 != nullptr) {
    v37 = 40;
  LABEL_54:
    (*(void (**)(void*))(*(_QWORD*)v36 + v37))((void*)v36);
  }
  return (unsigned int)v39;
}

__int64* Model_a66d00(__int64* result, int a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = result[87];
  v4 = result;
  v5 = result[86];
  if (v5 != v2) {
    v5 = result[86];
    while (*(_DWORD*)v5 != a2) {
      v5 += 64;
      if (v5 == v2) {
        goto LABEL_29;
      }
    }
  }
  v6 = v5 + 64;
  if (v5 == v2 || v6 == v2) {
    if (v5 != v2) {
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  do {
    if (*(_DWORD*)v6 == a2) {
      goto LABEL_15;
    }
    v8 = *(_QWORD*)v6;
    result = *(__int64**)(v5 + 48);
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)v5 = v8;
    if (result == (__int64*)(v5 + 16)) {
      v9 = 32;
      goto LABEL_21;
    }
    if (result != nullptr) {
      v9 = 40;
    LABEL_21:
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v9))((__int64)result);
    }
    v10 = *(_QWORD*)(v6 + 48);
    if (v10 != 0) {
      if (v6 + 16 == v10) {
        *(_QWORD*)(v5 + 48) = v5 + 16;
        result = (__int64*)(*(__int64 (**)(_QWORD, __int64))(
            **(_QWORD**)(v6 + 48) + 24LL))(*(_QWORD*)(v6 + 48), v5 + 16);
      }
      else {
        *(_QWORD*)(v5 + 48) = v10;
        *(_QWORD*)(v6 + 48) = 0;
      }
    }
    else {
      *(_QWORD*)(v5 + 48) = 0;
    }
    v5 += 64;
  LABEL_15:
    v6 += 64;
  } while (v6 != v2);
  v2 = v4[87];
  if (v5 != v2) {
  LABEL_27:
    if (v5 == v2) {
    LABEL_28:
      v4[87] = v5;
      goto LABEL_29;
    }
    while (2) {
      result = *(__int64**)(v2 - 16);
      if ((__int64*)(v2 - 48) != result) {
        if (result != nullptr) {
          v11 = 40;
        LABEL_31:
          result = (__int64*)(*(__int64 (**)(__int64))(*result + v11))(
              (__int64)result);
        }
        v2 -= 64;
        if (v2 == v5) {
          goto LABEL_28;
        }
        continue;
      }
      break;
    }
    v11 = 32;
    goto LABEL_31;
  }
LABEL_29:
  *((_BYTE*)v4 + 504) = 1;
  return result;
}

__attribute__((swiftcall)) void Model_a66f60(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2, unsigned __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  char v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  bool v18;
  __int64 v19;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    char* v22;
  } v20_;

  v4 = *(_QWORD**)(a1 + 312);
  v5 = *(_QWORD**)(a1 + 320);
  while (v4 != v5) {
    v9 = (_QWORD*)*v4;
    v10 = v4[1];
    *a4 = *v4;
    a4[1] = v10;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    if ((v9[47] & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(&v20_.v20, v9[49], v9[48]);
    }
    else {
      v11 = v9[47];
      v12 = v9[48];
      v13 = (char*)v9[49];
      v20_.v20 = v11;
      v20_.v21 = v12;
      v20_.v22 = v13;
    }
    v14 = v20_.v20;
    v15 = v20_.v21;
    v16 = (__int64)v20_.v22;
    if ((v20_.v20 & 1) == 0) {
      v15 = (unsigned __int64)(unsigned __int8)v20_.v20 >> 1;
    }
    if (a3 == v15) {
      if ((v20_.v20 & 1) != 0) {
        v17 = v20_.v22;
      }
      else {
        v17 = (char*)&v20_.v20 + 1;
      }
      v18 = memcmp_alt2(a2, (__int64)v17, a3) == 0;
      if ((v14 & 1) != 0) {
      LABEL_18:
        if (v16 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v16);
        }
      }
    }
    else {
      v18 = false;
      if ((v20_.v20 & 1) != 0) {
        goto LABEL_18;
      }
    }
    if (v18) {
      return;
    }
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
    v4 += 2;
  }
  *a4 = 0;
  a4[1] = 0;
}

__int64 g3d_Model_CollectElements_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  unsigned int v6;
  __int64 result;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v2 + 560);
  if (v5 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 48LL))(v5, a2);
  }
  if (*(int*)(a1 + 24) >= 0) {
    v6 = *(_DWORD*)(a1 + 24);
  }
  else {
    v6 = *(_DWORD*)(a1 + 28);
  }
  GameRoutine_a6bec0(*(_QWORD*)(*(_QWORD*)(v2 + 576) + 8LL * *(int*)(a1 + 16)),
                     a2, v6, *(unsigned int*)(a1 + 20));
  result = GameRoutine_a6bfc0(
      *(_QWORD*)(*(_QWORD*)(v2 + 576) + 8LL * *(int*)(a1 + 16)), a2, v6,
      *(unsigned int*)(v2 + 600), *(unsigned int*)(v2 + 604),
      *(unsigned int*)(a1 + 20));
  v9 = *(_DWORD*)(a1 + 24);
  v8 = *(_DWORD*)(a1 + 28);
  if (v9 == v8) {
    v10 = 0;
    v8 = *(_DWORD*)(a1 + 24);
  LABEL_12:
    v12 = *(_QWORD*)(**(_QWORD**)(**(_QWORD**)(*(_QWORD*)(v2 + 576) +
                                               8LL * *(int*)(a1 + 16)) +
                                  8LL) +
                     24LL) +
          56LL * v8;
    return G3DPrimitive_5e90c0(v12, *(_QWORD*)(a2 + 16), 0,
                               *(unsigned __int16*)(v12 + 52), 1, v10);
  }
  if (v9 != -2) {
    v11 = *(_QWORD*)(**(_QWORD**)(**(_QWORD**)(*(_QWORD*)(v2 + 576) +
                                               8LL * *(int*)(a1 + 16)) +
                                  8LL) +
                     24LL) +
          56LL * v9;
    result = G3DPrimitive_5e90c0(v11, *(_QWORD*)(a2 + 16), 0,
                                 *(unsigned __int16*)(v11 + 52), 1, 0x10000);
    v8 = *(_DWORD*)(a1 + 28);
  }
  if (v8 != -2) {
    v10 = 0x20000;
    goto LABEL_12;
  }
  return result;
}

__int64* Model_a6aa00(__int64* result, __int64* a2, __int64* a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7)
{
  int v11;
  __int64 v12;
  __int64 i;
  __int64* v14;
  int v15;
  bool v16;
  bool v17;
  bool v18;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  int v23;
  __int64* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  int v28;
  int v29;
  __int64* v30;
  _BOOL4 v31;
  _BOOL4 v32;
  __int64 v33;
  int v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  int v38;
  int v39;
  __int64* v40;
  _BOOL4 v41;
  _BOOL4 v42;
  __int64* j;
  __int64* v44;
  __int64* v45;
  _BOOL4 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64** v63;
  __int64 v64;
  __int64* v65;
  int v66;
  int v67;
  __int64* v68;
  _BOOL4 v69;
  __int64** v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64** v80;
  __int64 v81;
  int v82;
  int v83;
  __int64** v84;
  __int64* v85;
  _BOOL4 v86;
  _BOOL4 v87;
  __int64* v88;
  int v89;
  __int64 v90;
  __int64* v91;
  int v92;
  __int64 v93;
  __int64* v94;
  __int64* v95;
  __int64 v96;
  __int64* v97;
  int v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  int v103;
  __int64 v104;
  __int64* v105;
  __int64** v106;
  __int64 v107;
  __int64* v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64 v113;

  if (a5 == 0) {
    return result;
  }
  while (a4 > a7 && a5 > a7) {
    if (a4 == 0) {
      return result;
    }
    v11 = *((_DWORD*)a2 + 2);
    v12 = -a4;
    for (i = 0;; i += 8) {
      v14 = &result[i];
      v15 = result[i + 1];
      v16 = *((_DWORD*)a2 + 1) < SHIDWORD(result[i]);
      v17 = v11 == v15;
      v18 = v11 < v15;
      if (!v17) {
        v16 = v18;
      }
      if (v16) {
        break;
      }
      if (__CFADD__(v12++, 1)) {
        return result;
      }
    }
    v20 = -v12;
    v113 = a6;
    v112 = a3;
    if (-v12 >= a5) {
      if (v12 == -1) {
        return (__int64*)GameRoutine_a6b310(&result[i], a2);
      }
      v33 = v20 / 2;
      v24 = &result[8 * (v20 / 2) + i];
      if (a3 == a2) {
        v22 = a3;
      }
      else {
        v34 = *((_DWORD*)v24 + 2);
        v35 = ((char*)a3 - (char*)a2) >> 6;
        v22 = a2;
        do {
          v36 = v35 >> 1;
          v37 = &v22[8 * (v35 >> 1)];
          v38 = *((_DWORD*)v37 + 1);
          v39 = *((_DWORD*)v37 + 2);
          v40 = v37 + 8;
          v41 = v38 < *((_DWORD*)v24 + 1);
          v17 = v39 == v34;
          v42 = v39 < v34;
          if (!v17) {
            v41 = v42;
          }
          v35 += ~v36;
          if (v41) {
            v22 = v40;
          }
          else {
            v35 = v36;
          }
        } while (v35 != 0);
      }
      v21 = ((char*)v22 - (char*)a2) >> 6;
    }
    else {
      v21 = a5 / 2;
      v22 = &a2[8 * (a5 / 2)];
      if (v14 == a2) {
        v24 = a2;
      }
      else {
        v23 = *((_DWORD*)v22 + 2);
        v24 = &result[i];
        v25 = ((char*)a2 - (char*)result - i * 8) >> 6;
        do {
          v26 = v25 >> 1;
          v27 = &v24[8 * (v25 >> 1)];
          v28 = *((_DWORD*)v27 + 1);
          v29 = *((_DWORD*)v27 + 2);
          v30 = v27 + 8;
          v31 = *((_DWORD*)v22 + 1) < v28;
          v17 = v23 == v29;
          v32 = v23 < v29;
          if (!v17) {
            v31 = v32;
          }
          v25 += ~v26;
          if (v31) {
            v25 = v26;
          }
          else {
            v24 = v30;
          }
        } while (v25 != 0);
      }
      v33 = ((char*)v24 - (char*)result - i * 8) >> 6;
    }
    a3 = v22;
    if (v24 != a2) {
      a3 = v24;
      if (a2 != v22) {
        v110 = a7;
        v111 = a5;
        GameRoutine_a6b310(v24, a2);
        a3 = v24 + 8;
        for (j = a2 + 8; j != v22; j += 8) {
          if (a3 == a2) {
            a2 = j;
          }
          GameRoutine_a6b310(a3, j);
          a3 += 8;
        }
        if (a3 != a2) {
          v44 = a3;
          v45 = a2;
          while (1) {
            GameRoutine_a6b310(v44, v45);
            v45 += 8;
            v46 = v44 + 8 == a2;
            if (v45 == v22) {
              if (v44 + 8 == a2) {
                break;
              }
              v45 = a2 + 8;
              v44 += 16;
              while (1) {
                GameRoutine_a6b310(v44 - 8, a2);
                v46 = v44 == a2;
                if (v45 != v22) {
                  break;
                }
                v17 = v44 == a2;
                v44 += 8;
                if (v17) {
                  goto LABEL_54;
                }
              }
            }
            else {
              v44 += 8;
            }
            if (v46) {
              a2 = v45;
            }
          }
        }
      LABEL_54:
        a7 = v110;
        a5 = v111;
      }
    }
    v47 = a5 - v21;
    a4 = -(v33 + v12);
    if (v33 + v21 >= a5 - (v33 + v21) - v12) {
      v50 = -(v33 + v12);
      v49 = a7;
      Model_a6aa00(a3, v22, v112, v50, a5 - v21, v113, a7);
      v22 = v24;
      v47 = v21;
      a6 = v113;
      a4 = v33;
    }
    else {
      v48 = v21;
      a6 = v113;
      v49 = a7;
      Model_a6aa00(v14, v24, a3, v33, v48, v113, a7);
      v14 = a3;
      a3 = v112;
    }
    a5 = v47;
    result = v14;
    a2 = v22;
    a7 = v49;
    if (v47 == 0) {
      return result;
    }
  }
  v51 = result;
  if (a4 <= a5) {
    if (result == a2) {
      return result;
    }
    v58 = 0;
    v53 = 0;
    do {
      v59 = &result[v58];
      v60 = a6 + v58 * 8;
      v61 = result[v58];
      *(_DWORD*)(v60 + 8) = result[v58 + 1];
      *(_QWORD*)v60 = v61;
      v62 = result[v58 + 6];
      if (v62 != 0) {
        if (v59 + 2 == (__int64*)v62) {
          *(_QWORD*)(v60 + 48) = v60 + 16;
          (*(void (**)(__int64))(*(_QWORD*)v59[6] + 24LL))(v59[6]);
          result = v51;
        }
        else {
          *(_QWORD*)(v60 + 48) = v62;
          v59[6] = 0;
        }
      }
      else {
        *(_QWORD*)(v60 + 48) = 0;
      }
      v58 += 8;
      ++v53;
    } while (&result[v58] != a2);
    v79 = a6 + v58 * 8;
    v80 = (__int64**)(result + 6);
    v81 = a6;
    while (a2 != a3) {
      v82 = *((_DWORD*)a2 + 2);
      v83 = *(_DWORD*)(v81 + 8);
      v84 = v80 - 6;
      v85 = (__int64*)(v80 - 4);
      v86 = *((_DWORD*)a2 + 1) < *(_DWORD*)(v81 + 4);
      v17 = v82 == v83;
      v87 = v82 < v83;
      if (!v17) {
        v86 = v87;
      }
      if (!v86) {
        v91 = *(__int64**)v81;
        v92 = *(_DWORD*)(v81 + 8);
        result = *v80;
        *v80 = nullptr;
        *((_DWORD*)v80 - 10) = v92;
        *v84 = v91;
        if (v85 == result) {
          v93 = 32;
        LABEL_125:
          result = (__int64*)(*(__int64 (**)(__int64))(*result + v93))(
              (__int64)result);
        }
        else if (result != nullptr) {
          v93 = 40;
          goto LABEL_125;
        }
        v95 = *(__int64**)(v81 + 48);
        if (v95 != nullptr) {
          if (v95 == (__int64*)(v81 + 16)) {
            *v80 = v85;
            result = (__int64*)(*(__int64 (**)(_QWORD, __int64**))(
                **(_QWORD**)(v81 + 48) + 24LL))(*(_QWORD*)(v81 + 48), v80 - 4);
          }
          else {
            *v80 = v95;
            *(_QWORD*)(v81 + 48) = 0;
          }
        }
        else {
          *v80 = nullptr;
        }
        v81 += 64;
        goto LABEL_107;
      }
      v88 = (__int64*)*a2;
      v89 = *((_DWORD*)a2 + 2);
      result = *v80;
      *v80 = nullptr;
      *((_DWORD*)v80 - 10) = v89;
      *v84 = v88;
      if (v85 == result) {
        v90 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_120;
        }
        v90 = 40;
      }
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v90))((__int64)result);
    LABEL_120:
      v94 = (__int64*)a2[6];
      if (v94 != nullptr) {
        if (v94 == a2 + 2) {
          *v80 = v85;
          result = (__int64*)(*(__int64 (**)(__int64, __int64**))(
              *(_QWORD*)a2[6] + 24LL))(a2[6], v80 - 4);
        }
        else {
          *v80 = v94;
          a2[6] = 0;
        }
        a2 += 8;
      }
      else {
        *v80 = nullptr;
        a2 += 8;
      }
    LABEL_107:
      v80 += 8;
      if (v79 == v81) {
        goto LABEL_158;
      }
    }
    v101 = v81 - 64;
    while (1) {
      v102 = *(__int64**)(v101 + 64);
      v103 = *(_DWORD*)(v101 + 72);
      result = *v80;
      *v80 = nullptr;
      *((_DWORD*)v80 - 10) = v103;
      *(v80 - 6) = v102;
      if (v80 - 4 == (__int64**)result) {
        break;
      }
      if (result != nullptr) {
        v104 = 40;
      LABEL_153:
        result = (__int64*)(*(__int64 (**)(__int64))(*result + v104))(
            (__int64)result);
      }
      v105 = *(__int64**)(v101 + 112);
      if (v105 != nullptr) {
        if ((__int64*)(v101 + 80) == v105) {
          *v80 = (__int64*)(v80 - 4);
          result = (__int64*)(*(__int64 (**)(_QWORD, __int64**))(
              **(_QWORD**)(v101 + 112) + 24LL))(*(_QWORD*)(v101 + 112),
                                                v80 - 4);
        }
        else {
          *v80 = v105;
          *(_QWORD*)(v101 + 112) = 0;
        }
      }
      else {
        *v80 = nullptr;
      }
      v101 += 64;
      v80 += 8;
      if (v79 - 64 == v101) {
        goto LABEL_158;
      }
    }
    v104 = 32;
    goto LABEL_153;
  }
  if (a2 == a3) {
    return result;
  }
  v52 = 0;
  v53 = 0;
  do {
    v54 = &a2[v52];
    v55 = a6 + v52 * 8;
    v56 = a2[v52];
    *(_DWORD*)(v55 + 8) = a2[v52 + 1];
    *(_QWORD*)v55 = v56;
    v57 = a2[v52 + 6];
    if (v57 != 0) {
      if (v54 + 2 == (__int64*)v57) {
        *(_QWORD*)(v55 + 48) = v55 + 16;
        (*(void (**)(__int64))(*(_QWORD*)v54[6] + 24LL))(v54[6]);
        result = v51;
      }
      else {
        *(_QWORD*)(v55 + 48) = v57;
        v54[6] = 0;
      }
    }
    else {
      *(_QWORD*)(v55 + 48) = 0;
    }
    v52 += 8;
    ++v53;
  } while (&a2[v52] != a3);
  v63 = (__int64**)(a3 - 2);
  v64 = a6 + v52 * 8;
  while (a2 != result) {
    v66 = *((_DWORD*)a2 - 14);
    v67 = *(_DWORD*)(v64 - 56);
    v68 = (__int64*)(v63 - 4);
    v17 = v67 == v66;
    v69 = v67 < v66;
    if (v17) {
      v69 = *(_DWORD*)(v64 - 60) < *((_DWORD*)a2 - 15);
    }
    v70 = v63 - 6;
    if (!v69) {
      v74 = *(__int64**)(v64 - 64);
      *((_DWORD*)v63 - 10) = *(_DWORD*)(v64 - 56);
      *v70 = v74;
      v75 = *v63;
      *v63 = nullptr;
      if (v68 == v75) {
        v76 = 32;
      LABEL_97:
        (*(void (**)(__int64*))(*v75 + v76))(v75);
        result = v51;
      }
      else if (v75 != nullptr) {
        v76 = 40;
        goto LABEL_97;
      }
      v78 = *(__int64**)(v64 - 16);
      if (v78 != nullptr) {
        if (v78 == (__int64*)(v64 - 48)) {
          *v63 = v68;
          (*(void (**)(_QWORD, __int64**))(**(_QWORD**)(v64 - 16) + 24LL))(
              *(_QWORD*)(v64 - 16), v63 - 4);
          result = v51;
        }
        else {
          *v63 = v78;
          *(_QWORD*)(v64 - 16) = 0;
        }
      }
      else {
        *v63 = nullptr;
      }
      v65 = a2;
      v64 -= 64;
      goto LABEL_80;
    }
    v65 = a2 - 8;
    v71 = (__int64*)*(a2 - 8);
    *((_DWORD*)v63 - 10) = *((_DWORD*)a2 - 14);
    *v70 = v71;
    v72 = *v63;
    *v63 = nullptr;
    if (v68 == v72) {
      v73 = 32;
    }
    else {
      if (v72 == nullptr) {
        goto LABEL_93;
      }
      v73 = 40;
    }
    (*(void (**)(__int64*))(*v72 + v73))(v72);
    result = v51;
  LABEL_93:
    v77 = (__int64*)*(a2 - 2);
    if (v77 != nullptr) {
      if (v77 == a2 - 6) {
        *v63 = v68;
        (*(void (**)(_QWORD, __int64**))(*(_QWORD*)*(a2 - 2) + 24LL))(*(a2 - 2),
                                                                      v63 - 4);
        result = v51;
      }
      else {
        *v63 = v77;
        *(a2 - 2) = 0;
      }
    }
    else {
      *v63 = nullptr;
    }
  LABEL_80:
    v63 -= 8;
    a2 = v65;
    if (v64 == a6) {
      goto LABEL_158;
    }
  }
  if (a6 != v64) {
    v96 = v64;
    while (1) {
      v97 = *(__int64**)(v96 - 64);
      v96 -= 64;
      result = *v63;
      v98 = *(_DWORD*)(v96 + 8);
      *v63 = nullptr;
      *(v63 - 6) = v97;
      *((_DWORD*)v63 - 10) = v98;
      if (v63 - 4 == (__int64**)result) {
        break;
      }
      if (result != nullptr) {
        v99 = 40;
      LABEL_141:
        result = (__int64*)(*(__int64 (**)(__int64))(*result + v99))(
            (__int64)result);
      }
      v100 = *(__int64**)(v64 - 16);
      if (v100 != nullptr) {
        if ((__int64*)(v96 + 16) == v100) {
          *v63 = (__int64*)(v63 - 4);
          result = (__int64*)(*(__int64 (**)(_QWORD, __int64**))(
              **(_QWORD**)(v64 - 16) + 24LL))(*(_QWORD*)(v64 - 16), v63 - 4);
        }
        else {
          *v63 = v100;
          *(_QWORD*)(v64 - 16) = 0;
        }
      }
      else {
        *v63 = nullptr;
      }
      v63 -= 8;
      v64 = v96;
      if (v96 == a6) {
        goto LABEL_158;
      }
    }
    v99 = 32;
    goto LABEL_141;
  }
LABEL_158:
  if (a6 != 0 && v53 != 0) {
    v106 = (__int64**)(a6 + 48);
    do {
      v108 = (__int64*)(v106 - 4);
      v109 = *v106;
      v106 += 8;
      result = v109;
      if (v108 == v109) {
        v107 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_163;
        }
        v107 = 40;
      }
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v107))((__int64)result);
    LABEL_163:
      --v53;
    } while (v53 != 0);
  }
  return result;
}

#pragma GCC visibility pop
