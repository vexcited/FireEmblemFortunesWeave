#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_37a680(_QWORD, _QWORD);
__int64 GameRoutine_37b080(_QWORD, _QWORD);
__int64 GameRoutine_386420(_QWORD, _QWORD);
__int64 GameRoutine_386910(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_38eea0(_QWORD, _QWORD);
__int64 GameRoutine_390980(_QWORD, _QWORD);
__int64 GameRoutine_390a80(_QWORD, _QWORD);
__int64 GameRoutine_390b80(_QWORD, _QWORD);
__int64 GameRoutine_390c80(_QWORD, _QWORD);
__int64 GameRoutine_390e20(_QWORD, _QWORD);
__int64 GameRoutine_390f20(_QWORD, _QWORD);
__int64 GameRoutine_391020(_QWORD, _QWORD);
__int64 GameRoutine_391120(_QWORD, _QWORD);
__int64 GameRoutine_391220(_QWORD, _QWORD);
__int64 GameRoutine_3913c0(_QWORD, _QWORD);
__int64 GameRoutine_3914c0(_QWORD, _QWORD);
__int64 GameRoutine_393560(_QWORD, _QWORD);
__int64 GameRoutine_393700(_QWORD, _QWORD);
__int64 GameRoutine_3938a0(_QWORD, _QWORD);
__int64 GameRoutine_3939a0(_QWORD, _QWORD);
__int64 GameRoutine_393ba0(_QWORD, _QWORD);
__int64 GameRoutine_393ca0(_QWORD, _QWORD);
__int64 GameRoutine_393de0(_QWORD, _QWORD);
__int64 GameRoutine_55b720(void);
__int64 GameRoutine_55b760(_QWORD);
__int64 PxGetBroadcastAllocator(_QWORD);
__int64 PxGetErrorCallback(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 physx_Bp_AABBManager_AABBManager(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD, _QWORD, _QWORD, _DWORD,
                                         _DWORD);
__int64 physx_Bp_BroadPhase_create(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 physx_Cm_FlushPool_FlushPool(_QWORD, _QWORD);
__int64 physx_Cm_PreallocatingRegionManager_searchForMemory(void);
__int64 physx_Dy_createDynamicsContext(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD, _QWORD, _QWORD, float, float,
                                       _QWORD, _DWORD, _DWORD, _DWORD, _DWORD);
__int64 physx_Dy_createTGSDynamicsContext(_QWORD, _QWORD, _QWORD, _QWORD,
                                          _QWORD, _QWORD, _QWORD, _QWORD, float,
                                          _QWORD, _DWORD, _DWORD, _DWORD,
                                          _DWORD);
__int64 physx_IG_SimpleIslandManager_SimpleIslandManager(_QWORD, _QWORD, _QWORD,
                                                         _QWORD);
__int64 physx_PxTaskManager_createTaskManager(_QWORD, _QWORD);
__int64 physx_PxsCCDContext_PxsCCDContext(_QWORD, _QWORD, _QWORD, _QWORD,
                                          float);
__int64 physx_PxsContext_PxsContext(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD, _QWORD);
__int64 physx_PxsContext_createTransformCache(_QWORD, _QWORD);
__int64 physx_Sc_BodyCore_getSim(_QWORD);
__int64 physx_Sc_BroadphaseManager_BroadphaseManager(_QWORD);
__int64 physx_Sc_NPhaseCore_NPhaseCore(_QWORD, _QWORD, _QWORD);
__int64 physx_Sc_RigidCore_RigidCore(_QWORD, _QWORD);
__int64 physx_Sc_Scene_setCCDContactModifyCallback(_QWORD, _QWORD);
__int64 physx_Sc_Scene_setCCDMaxPasses(_QWORD, _QWORD);
__int64 physx_Sc_SimStats_SimStats(void);
__int64 physx_Sc_SqBoundsManagerEx_SqBoundsManagerEx(void);
__int64 physx_createDefaultMemoryManager(_QWORD);
__int64 physx_createNphaseImplementationContext(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2135a28;
extern _UNKNOWN* GameData_2135a30;
extern _UNKNOWN* GameData_2135b18;
extern __int64 (*GameData_1f852e0[])();
extern __int64 (*GameData_1f85310[])();
extern __int64 (*GameData_1f863c0[])();
extern __int64 (*physx_Cm_FanoutTask_Destroy_FanoutTask_2e1850_ptr[])();
extern __int64 (*physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr[])();
extern __int64 (
    *physx_PxsSimulationController_Destroy_PxsSimulationController_ptr[])();
extern __int64* GameData_21359e0;
extern char GameData_1a9f09e;
__int64 physx_Sc_Scene_Scene(__int64 a1, __int64 a2, __int64 a3);

__int64 physx_Sc_Scene_Scene(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _WORD* v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  const char* v28;
  __int64 v29;
  const char* v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  __int64 v34;
  __int64 v35;
  const char* v36;
  __int64 v37;
  __int64 v38;
  const char* v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  const char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  int v49;
  __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  const char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  int v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  const char* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned int v68;
  int v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  const char* v74;
  __int64 v75;
  __int64 v76;
  const char* v77;
  __int64 v78;
  __int64 v79;
  const char* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  const char* v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  const char* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64* v97;
  __int64 v98;
  __int64 v99;
  _BOOL4 v100;
  __int64 v101;
  const char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  const char* v115;
  _QWORD* v116;
  __int64 v117;
  const char* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  const char* v124;
  __int64 v125;
  int v126;
  __int64 v127;
  const char* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  float v132;
  __int64 v133;
  __int64 v134;
  _QWORD* v135;
  int v136;
  int v137;
  __int64 v138;
  __int64 v139;
  const char* v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 result;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  char v156;
  bool v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  _BYTE v162[4];

  v6 = a1 + 4096;
  v7 = PxGetBroadcastAllocator(0);
  v8 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v7 + 16LL))(
      v7, 5143, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "source/lowlevel/api/include\\PxsMaterialManager.h",
      53);
  if (v8 != 0) {
    v9 = (_WORD*)((v8 + 23) & 0xFFFFFFFFFFFFFFF0LL);
    *((_QWORD*)v9 - 1) = (char*)v9 - v8;
  }
  else {
    v9 = nullptr;
  }
  v10 = 128;
  v158 = v6;
  *(_QWORD*)a1 = v9;
  *(_DWORD*)(a1 + 8) = 128;
  do {
    v9[16] = -1;
    v9[36] = -1;
    v10 -= 16;
    v9[56] = -1;
    v9[76] = -1;
    v9[96] = -1;
    v9[116] = -1;
    v9[136] = -1;
    v9[156] = -1;
    v9[176] = -1;
    v9[196] = -1;
    v9[216] = -1;
    v9[236] = -1;
    v9[256] = -1;
    v9[276] = -1;
    v9[296] = -1;
    v9[316] = -1;
    v9 += 320;
  } while (v10 != 0);
  physx_Sc_BroadphaseManager_BroadphaseManager(a1 + 16);
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 40) = a3;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 32;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 200) = 2048;
  GameRoutine_390980(a1 + 176, 64);
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 32;
  *(_QWORD*)(a1 + 256) = 0;
  *(_DWORD*)(a1 + 248) = 4096;
  GameRoutine_390a80(a1 + 224, 64);
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 32;
  *(_QWORD*)(a1 + 304) = 0;
  *(_DWORD*)(a1 + 296) = 0x2000;
  GameRoutine_390b80(a1 + 272, 64);
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_DWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 1;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = -3233808384LL;
  GameRoutine_393560(a1 + 464, 64);
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 632) = -3233808384LL;
  *(_QWORD*)(a1 + 640) = 0;
  GameRoutine_390c80(a1 + 592, 64);
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 688) = -3233808384LL;
  *(_QWORD*)(a1 + 696) = 0;
  GameRoutine_393700(a1 + 648, 64);
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 760) = -3233808384LL;
  *(_QWORD*)(a1 + 768) = 0;
  GameRoutine_37b080(a1 + 720, 64);
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 800) = 64;
  *(_DWORD*)(a1 + 808) = 0x2000;
  *(_QWORD*)(a1 + 816) = 0;
  GameRoutine_390e20(a1 + 784, 64);
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 32;
  *(_DWORD*)(a1 + 856) = 0x2000;
  *(_QWORD*)(a1 + 864) = 0;
  GameRoutine_390f20(a1 + 832, 64);
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_DWORD*)(a1 + 904) = 0x2000;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 896) = 21;
  GameRoutine_391020(a1 + 880, 64);
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_DWORD*)(a1 + 952) = 0x2000;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 944) = 16;
  GameRoutine_391120(a1 + 928, 64);
  *(_QWORD*)(a1 + 968) = 0;
  *(_DWORD*)(a1 + 1008) = *(_DWORD*)(a2 + 120);
  v11 = *(_DWORD*)(a2 + 124);
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_QWORD*)(a1 + 1040) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_QWORD*)(a1 + 1056) = -3233808384LL;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_DWORD*)(a1 + 1012) = v11;
  GameRoutine_391220(a1 + 1016, 64);
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1112) = -3233808384LL;
  *(_QWORD*)(a1 + 1120) = 0;
  GameRoutine_391220(a1 + 1072, 64);
  v12 = *(_DWORD*)(a2 + 196);
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_DWORD*)(a1 + 1216) = 0;
  *(_DWORD*)(a1 + 1220) = v12;
  *(_BYTE*)(a1 + 1130) = (v12 & 0x400) != 0;
  physx_Sc_RigidCore_RigidCore(a1 + 1248, 0);
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1352) = 32;
  *(_DWORD*)(a1 + 1360) = 4096;
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1272) = 0x3F80000000000000LL;
  GameRoutine_3913c0(a1 + 1336, 64);
  *(_QWORD*)(a1 + 1384) = 0;
  *(_QWORD*)(a1 + 1392) = 0;
  *(_DWORD*)(a1 + 1408) = 4096;
  *(_QWORD*)(a1 + 1416) = 0;
  *(_QWORD*)(a1 + 1400) = 102;
  GameRoutine_3938a0(a1 + 1384, 64);
  *(_QWORD*)(a1 + 1432) = 0;
  *(_QWORD*)(a1 + 1440) = 0;
  *(_QWORD*)(a1 + 1448) = 0;
  *(_QWORD*)(a1 + 1456) = 0;
  *(_QWORD*)(a1 + 1464) = 0;
  *(_QWORD*)(a1 + 1472) = -3233808384LL;
  *(_QWORD*)(a1 + 1480) = 0;
  GameRoutine_3939a0(a1 + 1432, 64);
  *(_QWORD*)(a1 + 1496) = 0;
  *(_QWORD*)(a1 + 1504) = 0;
  *(_DWORD*)(a1 + 1520) = 4096;
  *(_QWORD*)(a1 + 1528) = 0;
  *(_QWORD*)(a1 + 1512) = 85;
  v13 = GameRoutine_3914c0(a1 + 1496, 64);
  *(_QWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1552) = 0;
  *(_QWORD*)(a1 + 1560) = 0;
  *(_QWORD*)(a1 + 1568) = 0;
  *(_DWORD*)(a1 + 1576) = 0;
  *(_QWORD*)(a1 + 1584) = 0;
  *(_DWORD*)(a1 + 1592) = 0;
  *(_QWORD*)(a1 + 1600) = 0;
  *(_QWORD*)(a1 + 1780) = 0;
  *(_QWORD*)(a1 + 1608) = 0;
  *(_QWORD*)(a1 + 1616) = 0;
  *(_QWORD*)(a1 + 1624) = 0;
  *(_QWORD*)(a1 + 1632) = 0;
  *(_DWORD*)(a1 + 1640) = 0;
  *(_BYTE*)(a1 + 1776) = 0;
  *(_QWORD*)(a1 + 1880) = 0;
  *(_QWORD*)(a1 + 1888) = 0;
  *(_QWORD*)(a1 + 1788) = 0;
  *(_DWORD*)(a1 + 1896) = 0;
  *(_QWORD*)(a1 + 1872) = a3;
  v14 = (char*)GameData_2135a28 + 16;
  *(_QWORD*)(a1 + 1904) = a1;
  *(_QWORD*)(a1 + 1936) = 0;
  *(_QWORD*)(a1 + 1944) = 0;
  *(_QWORD*)(a1 + 1864) = v14;
  *(_QWORD*)(a1 + 1912) = "ScScene.secondPassNarrowPhase";
  *(_DWORD*)(a1 + 1952) = 0;
  *(_QWORD*)(a1 + 1928) = a3;
  v15 = (char*)GameData_2135a30 + 16;
  *(_QWORD*)(a1 + 1960) = a1;
  *(_QWORD*)(a1 + 1992) = 0;
  *(_QWORD*)(a1 + 2000) = 0;
  *(_QWORD*)(a1 + 1920) = v15;
  *(_QWORD*)(a1 + 1968) = "ScScene.postNarrowPhase";
  *(_DWORD*)(a1 + 2008) = 0;
  *(_QWORD*)(a1 + 1984) = a3;
  *(_QWORD*)(a1 + 2016) = a1;
  *(_QWORD*)(a1 + 2048) = 0;
  *(_QWORD*)(a1 + 2056) = 0;
  *(_QWORD*)(a1 + 1976) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2024) = "ScScene.finalizationPhase";
  *(_DWORD*)(a1 + 2064) = 0;
  *(_QWORD*)(a1 + 2040) = a3;
  *(_QWORD*)(a1 + 2072) = a1;
  *(_QWORD*)(a1 + 2088) = 0;
  *(_QWORD*)(a1 + 2096) = 0;
  *(_QWORD*)(a1 + 2104) = 0;
  *(_QWORD*)(a1 + 2112) = 0;
  *(_QWORD*)(a1 + 2120) = 0;
  *(_QWORD*)(a1 + 2128) = 0;
  *(_QWORD*)(a1 + 2136) = 0;
  *(_QWORD*)(a1 + 2144) = 0;
  *(_QWORD*)(a1 + 2152) = 0;
  *(_QWORD*)(a1 + 2160) = 0;
  *(_QWORD*)(a1 + 2168) = 0;
  *(_QWORD*)(a1 + 2176) = 0;
  *(_QWORD*)(a1 + 2200) = 0;
  *(_QWORD*)(a1 + 2208) = 0;
  *(_QWORD*)(a1 + 2032) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2080) = "ScScene.updateCCDMultiPass";
  *(_DWORD*)(a1 + 2216) = 0;
  *(_QWORD*)(a1 + 2192) = a3;
  *(_QWORD*)(a1 + 2224) = a1;
  *(_QWORD*)(a1 + 2256) = 0;
  *(_QWORD*)(a1 + 2264) = 0;
  *(_QWORD*)(a1 + 2184) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2232) = "ScScene.afterIntegration";
  *(_DWORD*)(a1 + 2272) = 0;
  *(_QWORD*)(a1 + 2248) = a3;
  *(_QWORD*)(a1 + 2280) = a1;
  *(_QWORD*)(a1 + 2312) = 0;
  *(_QWORD*)(a1 + 2320) = 0;
  *(_QWORD*)(a1 + 2240) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2288) = "ScScene.postSolver";
  *(_DWORD*)(a1 + 2328) = 0;
  *(_QWORD*)(a1 + 2304) = a3;
  *(_QWORD*)(a1 + 2336) = a1;
  *(_QWORD*)(a1 + 2368) = 0;
  *(_QWORD*)(a1 + 2376) = 0;
  *(_QWORD*)(a1 + 2296) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2344) = "ScScene.rigidBodySolver";
  *(_DWORD*)(a1 + 2384) = 0;
  *(_QWORD*)(a1 + 2360) = a3;
  *(_QWORD*)(a1 + 2392) = a1;
  *(_QWORD*)(a1 + 2424) = 0;
  *(_QWORD*)(a1 + 2432) = 0;
  *(_QWORD*)(a1 + 2352) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2400) = "ScScene.updateBodies";
  *(_DWORD*)(a1 + 2440) = 0;
  *(_QWORD*)(a1 + 2416) = a3;
  *(_QWORD*)(a1 + 2448) = a1;
  *(_QWORD*)(a1 + 2480) = 0;
  *(_QWORD*)(a1 + 2488) = 0;
  *(_QWORD*)(a1 + 2408) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2456) = "ScScene.updateShapes";
  *(_DWORD*)(a1 + 2496) = 0;
  *(_QWORD*)(a1 + 2472) = a3;
  *(_QWORD*)(a1 + 2504) = a1;
  *(_QWORD*)(a1 + 2536) = 0;
  *(_QWORD*)(a1 + 2544) = 0;
  *(_QWORD*)(a1 + 2464) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2512) = "ScScene.updateSimulationController";
  *(_DWORD*)(a1 + 2552) = 0;
  *(_QWORD*)(a1 + 2528) = a3;
  *(_QWORD*)(a1 + 2560) = a1;
  *(_QWORD*)(a1 + 2592) = 0;
  *(_QWORD*)(a1 + 2600) = 0;
  *(_QWORD*)(a1 + 2520) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2568) = "ScScene.updateDynamics";
  *(_DWORD*)(a1 + 2608) = 0;
  *(_QWORD*)(a1 + 2584) = a3;
  *(_QWORD*)(a1 + 2616) = a1;
  *(_QWORD*)(a1 + 2648) = 0;
  *(_QWORD*)(a1 + 2656) = 0;
  *(_QWORD*)(a1 + 2576) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2624) = "ScScene.updateDynamicsPostPartitioning";
  *(_DWORD*)(a1 + 2664) = 0;
  *(_QWORD*)(a1 + 2640) = a3;
  *(_QWORD*)(a1 + 2672) = a1;
  *(_QWORD*)(a1 + 2704) = 0;
  *(_QWORD*)(a1 + 2712) = 0;
  *(_QWORD*)(a1 + 2632) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2680) = "ScScene.processLostContact";
  *(_DWORD*)(a1 + 2720) = 0;
  *(_QWORD*)(a1 + 2696) = a3;
  *(_QWORD*)(a1 + 2728) = a1;
  *(_QWORD*)(a1 + 2760) = 0;
  *(_QWORD*)(a1 + 2768) = 0;
  *(_QWORD*)(a1 + 2688) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2736) = "ScScene.processLostContact2";
  *(_DWORD*)(a1 + 2776) = 0;
  *(_QWORD*)(a1 + 2752) = a3;
  *(_QWORD*)(a1 + 2784) = a1;
  *(_QWORD*)(a1 + 2816) = 0;
  *(_QWORD*)(a1 + 2824) = 0;
  *(_QWORD*)(a1 + 2744) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2792) = "ScScene.processLostContact3";
  *(_DWORD*)(a1 + 2832) = 0;
  *(_QWORD*)(a1 + 2808) = a3;
  *(_QWORD*)(a1 + 2840) = a1;
  *(_QWORD*)(a1 + 2872) = 0;
  *(_QWORD*)(a1 + 2880) = 0;
  *(_QWORD*)(a1 + 2800) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2848) = "ScScene.destroyManagers";
  *(_DWORD*)(a1 + 2888) = 0;
  *(_QWORD*)(a1 + 2864) = a3;
  *(_QWORD*)(a1 + 2896) = a1;
  *(_QWORD*)(a1 + 2928) = 0;
  *(_QWORD*)(a1 + 2936) = 0;
  *(_QWORD*)(a1 + 2856) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2904) = "ScScene.lostTouchReports";
  *(_DWORD*)(a1 + 2944) = 0;
  *(_QWORD*)(a1 + 2920) = a3;
  *(_QWORD*)(a1 + 2952) = a1;
  *(_QWORD*)(a1 + 2984) = 0;
  *(_QWORD*)(a1 + 2992) = 0;
  *(_QWORD*)(a1 + 2912) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 2960) = "ScScene.unregisterInteractions";
  *(_DWORD*)(a1 + 3000) = 0;
  *(_QWORD*)(a1 + 2976) = a3;
  *(_QWORD*)(a1 + 3008) = a1;
  *(_QWORD*)(a1 + 3040) = 0;
  *(_QWORD*)(a1 + 3048) = 0;
  *(_QWORD*)(a1 + 2968) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3016) = "ScScene.processNpLostTouchTask";
  *(_DWORD*)(a1 + 3056) = 0;
  *(_QWORD*)(a1 + 3032) = a3;
  *(_QWORD*)(a1 + 3064) = a1;
  *(_QWORD*)(a1 + 3096) = 0;
  *(_QWORD*)(a1 + 3104) = 0;
  *(_QWORD*)(a1 + 3024) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3072) = "ScScene.processNPLostTouchEvents";
  *(_DWORD*)(a1 + 3112) = 0;
  *(_QWORD*)(a1 + 3088) = a3;
  *(_QWORD*)(a1 + 3120) = a1;
  *(_QWORD*)(a1 + 3152) = 0;
  *(_QWORD*)(a1 + 3160) = 0;
  *(_QWORD*)(a1 + 3080) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3128) = "ScScene.postThirdPassIslandGenTask";
  *(_DWORD*)(a1 + 3168) = 0;
  *(_QWORD*)(a1 + 3144) = a3;
  *(_QWORD*)(a1 + 3176) = a1;
  *(_QWORD*)(a1 + 3208) = 0;
  *(_QWORD*)(a1 + 3216) = 0;
  *(_QWORD*)(a1 + 3136) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3184) = "ScScene.islandGen";
  *(_DWORD*)(a1 + 3224) = 0;
  *(_QWORD*)(a1 + 3200) = a3;
  *(_QWORD*)(a1 + 3232) = a1;
  *(_QWORD*)(a1 + 3264) = 0;
  *(_QWORD*)(a1 + 3272) = 0;
  *(_QWORD*)(a1 + 3192) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3240) = "ScScene.preRigidBodyNarrowPhase";
  *(_DWORD*)(a1 + 3280) = 0;
  *(_QWORD*)(a1 + 3256) = a3;
  *(_QWORD*)(a1 + 3288) = a1;
  *(_QWORD*)(a1 + 3320) = 0;
  *(_QWORD*)(a1 + 3312) = 0;
  *(_QWORD*)(a1 + 3248) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3296) = "ScScene.setEdgesConnectedTask";
  *(_QWORD*)(a1 + 3304) = physx_Cm_FanoutTask_Destroy_FanoutTask_2e1850_ptr;
  *(_DWORD*)(a1 + 3328) = 0;
  *(_QWORD*)(a1 + 3336) = "ScScene.updateBoundsAndShapesTask";
  *(_DWORD*)(a1 + 3392) = 0;
  *(_BYTE*)(a1 + 3376) = 1;
  *(_DWORD*)(a1 + 3396) = 4;
  *(_DWORD*)(a1 + 3448) = 0;
  *(_BYTE*)(a1 + 3432) = 1;
  *(_DWORD*)(a1 + 3452) = 4;
  *(_BYTE*)(a1 + 3456) = 0;
  *(_QWORD*)(a1 + 3384) = a1 + 3344;
  *(_QWORD*)(a1 + 3440) = a1 + 3400;
  v16 = (unsigned int)GameRoutine_55b760(v13);
  v17 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v18 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxMutexImpl>::getName(bool) [T "
          "= physx::PxMutexImpl]";
  }
  else {
    v18 = "<allocation names disabled>";
  }
  *(_QWORD*)(a1 + 3464) =
      (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
          *(_QWORD*)v17 + 16LL))(
          v17, v16, v18,
          "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../"
          "../include\\foundation/PxMutex.h",
          112);
  v19 = GameRoutine_55b720();
  *(_QWORD*)(a1 + 3312) = a3;
  *(_QWORD*)(a1 + 3472) = a1;
  *(_QWORD*)(a1 + 3496) = 0;
  *(_QWORD*)(a1 + 3504) = 0;
  *(_QWORD*)(a1 + 3304) = physx_Cm_FanoutTask_Destroy_FanoutTask_2e1850_ptr;
  *(_DWORD*)(a1 + 3512) = 0;
  *(_QWORD*)(a1 + 3480) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3528) = "ScScene.rigidBodyNarrowPhase";
  *(_QWORD*)(a1 + 3488) = a3;
  *(_QWORD*)(a1 + 3520) = a1;
  *(_QWORD*)(a1 + 3552) = 0;
  *(_QWORD*)(a1 + 3560) = 0;
  *(_DWORD*)(a1 + 3568) = 0;
  *(_QWORD*)(a1 + 3544) = a3;
  *(_QWORD*)(a1 + 3576) = a1;
  *(_QWORD*)(a1 + 3608) = 0;
  *(_QWORD*)(a1 + 3616) = 0;
  *(_QWORD*)(a1 + 3536) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3584) = "ScScene.unblockNarrowPhase";
  *(_DWORD*)(a1 + 3624) = 0;
  *(_QWORD*)(a1 + 3600) = a3;
  *(_QWORD*)(a1 + 3632) = a1;
  *(_QWORD*)(a1 + 3664) = 0;
  *(_QWORD*)(a1 + 3672) = 0;
  *(_QWORD*)(a1 + 3592) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3640) = "ScScene.postBroadPhase";
  *(_DWORD*)(a1 + 3680) = 0;
  *(_QWORD*)(a1 + 3656) = a3;
  *(_QWORD*)(a1 + 3688) = a1;
  *(_QWORD*)(a1 + 3720) = 0;
  *(_QWORD*)(a1 + 3728) = 0;
  *(_QWORD*)(a1 + 3648) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3696) = "ScScene.postBroadPhaseCont";
  *(_DWORD*)(a1 + 3736) = 0;
  *(_QWORD*)(a1 + 3712) = a3;
  *(_QWORD*)(a1 + 3744) = a1;
  *(_QWORD*)(a1 + 3776) = 0;
  *(_QWORD*)(a1 + 3768) = 0;
  *(_QWORD*)(a1 + 3760) = physx_Cm_FanoutTask_Destroy_FanoutTask_2e1850_ptr;
  *(_QWORD*)(a1 + 3704) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3752) = "ScScene.postBroadPhase2";
  *(_DWORD*)(a1 + 3784) = 0;
  *(_DWORD*)(a1 + 3848) = 0;
  *(_BYTE*)(a1 + 3832) = 1;
  *(_DWORD*)(a1 + 3852) = 4;
  *(_DWORD*)(a1 + 3904) = 0;
  *(_BYTE*)(a1 + 3888) = 1;
  *(_DWORD*)(a1 + 3908) = 4;
  *(_BYTE*)(a1 + 3912) = 0;
  *(_QWORD*)(a1 + 3792) = "ScScene.postBroadPhase3";
  *(_QWORD*)(a1 + 3840) = a1 + 3800;
  *(_QWORD*)(a1 + 3896) = a1 + 3856;
  v20 = (unsigned int)GameRoutine_55b760(v19);
  v21 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v22 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxMutexImpl>::getName(bool) [T "
          "= physx::PxMutexImpl]";
  }
  else {
    v22 = "<allocation names disabled>";
  }
  *(_QWORD*)(a1 + 3920) =
      (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
          *(_QWORD*)v21 + 16LL))(
          v21, v20, v22,
          "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../"
          "../include\\foundation/PxMutex.h",
          112);
  GameRoutine_55b720();
  *(_QWORD*)(a1 + 3768) = a3;
  v23 = (char*)GameData_2135b18;
  *(_QWORD*)(a1 + 3928) = a1;
  *(_QWORD*)(a1 + 3952) = 0;
  *(_QWORD*)(a1 + 3960) = 0;
  *(_QWORD*)(a1 + 3760) = v23 + 16;
  *(_DWORD*)(a1 + 3968) = 0;
  *(_QWORD*)(a1 + 3936) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 3984) = "ScScene.preallocateContactManagers";
  *(_QWORD*)(a1 + 3944) = a3;
  *(_QWORD*)(a1 + 3976) = a1;
  *(_QWORD*)(a1 + 4008) = 0;
  *(_QWORD*)(a1 + 4016) = 0;
  *(_DWORD*)(a1 + 4024) = 0;
  *(_QWORD*)(a1 + 4000) = a3;
  *(_QWORD*)(a1 + 4032) = a1;
  *(_QWORD*)(a1 + 4064) = 0;
  *(_QWORD*)(a1 + 4072) = 0;
  *(_QWORD*)(a1 + 3992) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4040) = "ScScene.islandInsertion";
  *(_DWORD*)(a1 + 4080) = 0;
  *(_QWORD*)(a1 + 4056) = a3;
  *(_QWORD*)(a1 + 4088) = a1;
  *(_QWORD*)(a1 + 4120) = 0;
  *(_QWORD*)(a1 + 4128) = 0;
  *(_QWORD*)(a1 + 4048) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4096) = "ScScene.registerContactManagers";
  *(_DWORD*)(a1 + 4136) = 0;
  *(_QWORD*)(a1 + 4112) = a3;
  *(_QWORD*)(a1 + 4144) = a1;
  *(_QWORD*)(a1 + 4176) = 0;
  *(_QWORD*)(a1 + 4184) = 0;
  *(_QWORD*)(a1 + 4104) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4152) = "ScScene.registerInteractions";
  *(_DWORD*)(a1 + 4192) = 0;
  *(_QWORD*)(a1 + 4168) = a3;
  *(_QWORD*)(a1 + 4200) = a1;
  *(_QWORD*)(a1 + 4232) = 0;
  *(_QWORD*)(a1 + 4240) = 0;
  *(_QWORD*)(a1 + 4160) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4208) = "ScScene.registerSceneInteractions";
  *(_DWORD*)(a1 + 4248) = 0;
  *(_QWORD*)(a1 + 4224) = a3;
  *(_QWORD*)(a1 + 4256) = a1;
  *(_QWORD*)(a1 + 4288) = 0;
  *(_QWORD*)(a1 + 4296) = 0;
  *(_QWORD*)(a1 + 4216) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4264) = "ScScene.broadPhase";
  *(_DWORD*)(a1 + 4304) = 0;
  *(_QWORD*)(a1 + 4280) = a3;
  *(_QWORD*)(a1 + 4312) = a1;
  *(_QWORD*)(a1 + 4344) = 0;
  *(_QWORD*)(a1 + 4352) = 0;
  *(_QWORD*)(a1 + 4272) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4320) = "ScScene.advanceStep";
  *(_DWORD*)(a1 + 4360) = 0;
  *(_QWORD*)(a1 + 4336) = a3;
  *(_QWORD*)(a1 + 4368) = a1;
  *(_QWORD*)(a1 + 4400) = 0;
  *(_QWORD*)(a1 + 4408) = 0;
  *(_QWORD*)(a1 + 4328) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4376) = "ScScene.collideStep";
  *(_DWORD*)(a1 + 4416) = 0;
  *(_QWORD*)(a1 + 4392) = a3;
  *(_QWORD*)(a1 + 4424) = a1;
  *(_QWORD*)(a1 + 4456) = 0;
  *(_QWORD*)(a1 + 4464) = 0;
  *(_QWORD*)(a1 + 4384) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4432) = "ScScene.broadPhaseFirstPass";
  *(_DWORD*)(a1 + 4472) = 0;
  *(_QWORD*)(a1 + 4448) = a3;
  *(_QWORD*)(a1 + 4480) = a1;
  *(_QWORD*)(a1 + 4512) = 0;
  *(_QWORD*)(a1 + 4520) = 0;
  *(_QWORD*)(a1 + 4440) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4488) = "ScScene.broadPhaseSecondPass";
  *(_DWORD*)(a1 + 4528) = 0;
  *(_QWORD*)(a1 + 4504) = a3;
  *(_QWORD*)(a1 + 4536) = a1;
  *(_QWORD*)(a1 + 4568) = 0;
  *(_QWORD*)(a1 + 4576) = 0;
  *(_QWORD*)(a1 + 4496) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4544) = "ScScene.updateBroadPhase";
  *(_DWORD*)(a1 + 4584) = 0;
  *(_QWORD*)(a1 + 4560) = a3;
  *(_QWORD*)(a1 + 4592) = a1;
  *(_QWORD*)(a1 + 4552) = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
  *(_QWORD*)(a1 + 4600) = "ScScene.preIntegrate";
  physx_Cm_FlushPool_FlushPool(a1 + 4608, 0x4000);
  *(_QWORD*)(a1 + 4648) = 0;
  v24 = *(_QWORD*)(a2 + 208);
  *(_DWORD*)(a1 + 4668) = 0;
  *(_QWORD*)(a1 + 4672) = 0;
  *(_QWORD*)(a1 + 4680) = 0;
  *(_QWORD*)(a1 + 4688) = 0;
  *(_QWORD*)(a1 + 4696) = 0;
  *(_QWORD*)(a1 + 4704) = 0;
  *(_QWORD*)(a1 + 4720) = 0;
  *(_DWORD*)(v6 + 568) = 0;
  *(_QWORD*)(a1 + 4656) = v24;
  *(_DWORD*)(a1 + 4712) = 1061158912;
  *(_DWORD*)(a1 + 4716) = -1;
  v25 = GameRoutine_37a680(a1 + 4672, 64);
  *(_QWORD*)(a1 + 4728) = 0;
  *(_QWORD*)(a1 + 4736) = 0;
  *(_QWORD*)(a1 + 4744) = 0;
  *(_QWORD*)(a1 + 4752) = 0;
  *(_QWORD*)(a1 + 4760) = 0;
  *(_QWORD*)(a1 + 4768) = 0;
  *(_QWORD*)(a1 + 4776) = 0;
  *(_QWORD*)(a1 + 4784) = 0;
  *(_QWORD*)(a1 + 4792) = 0;
  *(_QWORD*)(a1 + 4800) = 0;
  *(_QWORD*)(a1 + 4808) = 0;
  *(_QWORD*)(a1 + 4816) = 0;
  *(_QWORD*)(a1 + 4824) = 0;
  *(_QWORD*)(a1 + 4832) = 0;
  *(_QWORD*)(a1 + 4840) = 0;
  v26 = (unsigned int)GameRoutine_55b760(v25);
  v27 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v28 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxMutexImpl>::getName(bool) [T "
          "= physx::PxMutexImpl]";
  }
  else {
    v28 = "<allocation names disabled>";
  }
  *(_QWORD*)(a1 + 4848) =
      (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
          *(_QWORD*)v27 + 16LL))(
          v27, v26, v28,
          "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../"
          "../include\\foundation/PxMutex.h",
          112);
  GameRoutine_55b720();
  *(_QWORD*)(a1 + 4856) = 0;
  *(_DWORD*)(a1 + 4864) = 0;
  *(_QWORD*)(a1 + 4872) = 0;
  *(_DWORD*)(a1 + 4880) = 0;
  *(_WORD*)(v6 + 792) = 0;
  *(_QWORD*)(a1 + 4912) = 0;
  *(_QWORD*)(a1 + 4892) = 0;
  *(_QWORD*)(a1 + 4900) = 0;
  if ((*(_DWORD*)(a1 + 116) & 0x7FFFFFC0) != 0) {
    if ((*(_DWORD*)(a1 + 132) & 0x7FFFFFC0) != 0) {
      goto LABEL_17;
    }
  LABEL_72:
    GameRoutine_393ba0(a1 + 120, 64);
    if ((*(_DWORD*)(a1 + 148) & 0x7FFFFFC0) != 0) {
      goto LABEL_18;
    }
    goto LABEL_73;
  }
  GameRoutine_393ba0(a1 + 104, 64);
  if ((*(_DWORD*)(a1 + 132) & 0x7FFFFFC0) == 0) {
    goto LABEL_72;
  }
LABEL_17:
  if ((*(_DWORD*)(a1 + 148) & 0x7FFFFFC0) == 0) {
  LABEL_73:
    GameRoutine_393ba0(a1 + 136, 64);
  }
LABEL_18:
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  v29 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v30 = "static const char "
          "*physx::PxReflectionAllocator<physx::Sc::SimStats>::getName(bool) "
          "[T = physx::Sc::SimStats]";
  }
  else {
    v30 = "<allocation names disabled>";
  }
  v31 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v29 + 16LL))(
      v29, 304, v30,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      753);
  physx_Sc_SimStats_SimStats();
  *(_QWORD*)(a1 + 1208) = v31;
  v32 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v33 = "static const char "
          "*physx::PxReflectionAllocator<physx::Sc::ObjectIDTracker>::getName("
          "bool) [T = physx::Sc::ObjectIDTracker]";
  }
  else {
    v33 = "<allocation names disabled>";
  }
  v34 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v32 + 16LL))(
      v32, 64, v33,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      754);
  *(_DWORD*)(v34 + 8) = 0;
  *(_QWORD*)(v34 + 16) = 0;
  *(_QWORD*)(v34 + 24) = 0;
  *(_QWORD*)(v34 + 32) = 0;
  *(_DWORD*)(v34 + 40) = 0;
  *(_QWORD*)(v34 + 48) = 0;
  *(_QWORD*)(v34 + 56) = 0;
  *(_QWORD*)(a1 + 1224) = v34;
  v35 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v36 = "static const char "
          "*physx::PxReflectionAllocator<physx::Sc::ObjectIDTracker>::getName("
          "bool) [T = physx::Sc::ObjectIDTracker]";
  }
  else {
    v36 = "<allocation names disabled>";
  }
  v37 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v35 + 16LL))(
      v35, 64, v36,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      755);
  *(_DWORD*)(v37 + 8) = 0;
  *(_QWORD*)(v37 + 16) = 0;
  *(_QWORD*)(v37 + 24) = 0;
  *(_QWORD*)(v37 + 32) = 0;
  *(_DWORD*)(v37 + 40) = 0;
  *(_QWORD*)(v37 + 48) = 0;
  *(_QWORD*)(v37 + 56) = 0;
  *(_QWORD*)(a1 + 1232) = v37;
  v38 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v39 = "static const char "
          "*physx::PxReflectionAllocator<physx::Sc::ObjectIDTracker>::getName("
          "bool) [T = physx::Sc::ObjectIDTracker]";
  }
  else {
    v39 = "<allocation names disabled>";
  }
  v40 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v38 + 16LL))(
      v38, 64, v39,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      756);
  *(_DWORD*)(v40 + 8) = 0;
  *(_QWORD*)(v40 + 16) = 0;
  *(_QWORD*)(v40 + 24) = 0;
  *(_QWORD*)(v40 + 32) = 0;
  *(_DWORD*)(v40 + 40) = 0;
  *(_QWORD*)(v40 + 48) = 0;
  *(_QWORD*)(v40 + 56) = 0;
  *(_QWORD*)(a1 + 1240) = v40;
  v41 = PxGetBroadcastAllocator(0);
  v42 = (_QWORD*)(*(__int64 (**)(__int64, __int64, char*, const char*,
                                 __int64))(*(_QWORD*)v41 + 16LL))(
      v41, 16, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      758);
  *(_QWORD*)(a1 + 584) = v42;
  *v42 = 0;
  v42[1] = 0;
  v43 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v44 = "static const char "
          "*physx::PxReflectionAllocator<physx::Cm::PreallocatingPool<physx::"
          "Sc::StaticSim>>::getName(b"
          "ool) [T = physx::Cm::PreallocatingPool<physx::Sc::StaticSim>]";
  }
  else {
    v44 = "<allocation names disabled>";
  }
  v45 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v43 + 16LL))(
      v43, 48, v44,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      761);
  *(_DWORD*)(v45 + 8) = 0;
  *(_QWORD*)(v45 + 16) = 0;
  *(_QWORD*)(v45 + 24) = 0;
  *(_QWORD*)v45 = 0x7000000040LL;
  v160 = 0;
  LODWORD(v161) = 0;
  *(_BYTE*)(v45 + 32) = 1;
  *(_QWORD*)(v45 + 40) = "StaticSim";
  v46 = PxGetBroadcastAllocator(0);
  v47 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v46 + 16LL))(
      v46, 7168, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "source/common/src\\CmPreallocatingPool.h",
      52);
  v48 = *(_DWORD*)(v45 + 24);
  v49 = *(_DWORD*)(v45 + 28);
  v159 = v47;
  if ((v49 & 0x7FFFFFFFu) <= v48) {
    GameRoutine_393ca0(v45 + 16, &v159);
  }
  else {
    v50 = v161;
    v51 = (__int64*)(*(_QWORD*)(v45 + 16) + 24LL * v48);
    v52 = v159;
    v51[1] = v160;
    v51[2] = v50;
    *v51 = v52;
    ++*(_DWORD*)(v45 + 24);
  }
  *(_QWORD*)(a1 + 1312) = v45;
  v53 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v54 = "static const char "
          "*physx::PxReflectionAllocator<physx::Cm::PreallocatingPool<physx::"
          "Sc::BodySim>>::getName(boo"
          "l) [T = physx::Cm::PreallocatingPool<physx::Sc::BodySim>]";
  }
  else {
    v54 = "<allocation names disabled>";
  }
  v55 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v53 + 16LL))(
      v53, 48, v54,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      762);
  *(_DWORD*)(v55 + 8) = 0;
  *(_QWORD*)(v55 + 16) = 0;
  *(_QWORD*)(v55 + 24) = 0;
  *(_QWORD*)v55 = 0xE000000040LL;
  v160 = 0;
  LODWORD(v161) = 0;
  *(_BYTE*)(v55 + 32) = 1;
  *(_QWORD*)(v55 + 40) = "BodySim";
  v56 = PxGetBroadcastAllocator(0);
  v57 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v56 + 16LL))(
      v56, 14336, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "source/common/src\\CmPreallocatingPool.h",
      52);
  v58 = *(_DWORD*)(v55 + 24);
  v59 = *(_DWORD*)(v55 + 28);
  v159 = v57;
  if ((v59 & 0x7FFFFFFFu) <= v58) {
    GameRoutine_393ca0(v55 + 16, &v159);
  }
  else {
    v60 = v161;
    v61 = (__int64*)(*(_QWORD*)(v55 + 16) + 24LL * v58);
    v62 = v159;
    v61[1] = v160;
    v61[2] = v60;
    *v61 = v62;
    ++*(_DWORD*)(v55 + 24);
  }
  *(_QWORD*)(a1 + 1320) = v55;
  v63 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v64 = "static const char "
          "*physx::PxReflectionAllocator<physx::Cm::PreallocatingPool<physx::"
          "Sc::ShapeSim>>::getName(bo"
          "ol) [T = physx::Cm::PreallocatingPool<physx::Sc::ShapeSim>]";
  }
  else {
    v64 = "<allocation names disabled>";
  }
  v65 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v63 + 16LL))(
      v63, 48, v64,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      763);
  *(_DWORD*)(v65 + 8) = 0;
  *(_QWORD*)(v65 + 16) = 0;
  *(_QWORD*)(v65 + 24) = 0;
  *(_QWORD*)v65 = 0x2000000080LL;
  v160 = 0;
  LODWORD(v161) = 0;
  *(_BYTE*)(v65 + 32) = 1;
  *(_QWORD*)(v65 + 40) = "ShapeSim";
  v66 = PxGetBroadcastAllocator(0);
  v67 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v66 + 16LL))(
      v66, 4096, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "source/common/src\\CmPreallocatingPool.h",
      52);
  v68 = *(_DWORD*)(v65 + 24);
  v69 = *(_DWORD*)(v65 + 28);
  v159 = v67;
  if ((v69 & 0x7FFFFFFFu) <= v68) {
    GameRoutine_393ca0(v65 + 16, &v159);
  }
  else {
    v70 = v161;
    v71 = (__int64*)(*(_QWORD*)(v65 + 16) + 24LL * v68);
    v72 = v159;
    v71[1] = v160;
    v71[2] = v70;
    *v71 = v72;
    ++*(_DWORD*)(v65 + 24);
  }
  *(_QWORD*)(a1 + 1304) = v65;
  v73 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v74 = "static const char "
          "*physx::PxReflectionAllocator<physx::Sc::LLArticulationRCPool>::"
          "getName(bool) [T = physx::Sc"
          "::LLArticulationRCPool]";
  }
  else {
    v74 = "<allocation names disabled>";
  }
  v75 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v73 + 16LL))(
      v73, 48, v74,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      764);
  *(_QWORD*)(v75 + 8) = 0;
  *(_QWORD*)(v75 + 40) = 0;
  *(_QWORD*)(v75 + 16) = 0;
  *(_QWORD*)(v75 + 24) = 32;
  *(_DWORD*)(v75 + 32) = 43008;
  GameRoutine_38eea0(v75 + 8, 64);
  *(_QWORD*)(a1 + 1424) = v75;
  v76 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v77 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxPool<physx::Sc::SimStateData>"
          ">::getName(bool) [T = ph"
          "ysx::PxPool<physx::Sc::SimStateData>]";
  }
  else {
    v77 = "<allocation names disabled>";
  }
  v78 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v76 + 16LL))(
      v76, 48, v77,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      765);
  *(_QWORD*)(v78 + 8) = 0;
  *(_QWORD*)(v78 + 16) = 0;
  *(_QWORD*)(v78 + 24) = 32;
  *(_QWORD*)(v78 + 40) = 0;
  *(_DWORD*)(v78 + 32) = 2048;
  GameRoutine_393de0(v78 + 8, 64);
  *(_QWORD*)(a1 + 1536) = v78;
  v79 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v80 = "static const char "
          "*physx::PxReflectionAllocator<physx::Sc::SqBoundsManager>::getName("
          "bool) [T = physx::Sc::SqBoundsManager]";
  }
  else {
    v80 = "<allocation names disabled>";
  }
  v81 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v79 + 16LL))(
      v79, 32, v80,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      767);
  v82 = physx_Sc_SqBoundsManagerEx_SqBoundsManagerEx();
  *(_QWORD*)(a1 + 544) = v81;
  v83 = PxGetErrorCallback(v82);
  *(_QWORD*)(a1 + 4648) =
      physx_PxTaskManager_createTaskManager(v83, *(_QWORD*)(a2 + 200));
  *(_DWORD*)(a1 + 1836) = 0;
  *(_QWORD*)(a1 + 1796) = 0;
  *(_QWORD*)(a1 + 1804) = 0;
  *(_QWORD*)(a1 + 1812) = 0;
  *(_QWORD*)(a1 + 1820) = 0;
  *(_QWORD*)(a1 + 1828) = 0;
  *(_WORD*)(v158 + 569) = 0;
  v84 = PxGetBroadcastAllocator(&v159);
  if ((_BYTE)v159 != 0) {
    v85 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxsContext>::getName(bool) [T "
          "= physx::PxsContext]";
  }
  else {
    v85 = "<allocation names disabled>";
  }
  v86 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v84 + 16LL))(
      v84, 2416, v85,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      798);
  v87 = physx_PxsContext_PxsContext(v86, a2, *(_QWORD*)(a1 + 4648), a1 + 4608,
                                    *(_QWORD*)(a1 + 4656),
                                    *(unsigned int*)(a2 + 356), a3);
  *(_QWORD*)(a1 + 312) = v86;
  *(_QWORD*)(v86 + 384) = a1;
  *(_QWORD*)(a1 + 360) = physx_createDefaultMemoryManager(v87);
  v88 = *(_DWORD*)(a2 + 128);
  if (v88 == 4) {
    v89 = 2;
  }
  else {
    v89 = v88;
  }
  v90 = physx_Bp_BroadPhase_create(
      v89, *(unsigned int*)(a2 + 168), *(unsigned int*)(a2 + 172),
      *(unsigned int*)(a2 + 152), *(unsigned int*)(a2 + 156), a3);
  v91 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 360) + 16LL))(
      *(_QWORD*)(a1 + 360));
  v159 = v91;
  LODWORD(v160) = 0;
  v92 = PxGetBroadcastAllocator(v162);
  if (v162[0] != 0) {
    v93 = "static const char "
          "*physx::PxReflectionAllocator<physx::Bp::BoundsArray>::getName(bool)"
          " [T = physx::Bp::BoundsArray]";
  }
  else {
    v93 = "<allocation names disabled>";
  }
  v94 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v92 + 16LL))(
      v92, 48, v93,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      868);
  *(_QWORD*)(v94 + 24) = 0;
  *(_QWORD*)(v94 + 32) = 0;
  *(_QWORD*)v94 = GameData_1f852e0;
  v95 = v160;
  *(_QWORD*)(v94 + 8) = v159;
  *(_QWORD*)(v94 + 16) = v95;
  *(_BYTE*)(v94 + 40) = 1;
  *(_QWORD*)(a1 + 520) = v94;
  v96 = PxGetBroadcastAllocator(0);
  v97 = (__int64*)(*(__int64 (**)(__int64, __int64, char*, const char*,
                                  __int64))(*(_QWORD*)v96 + 16LL))(
      v96, 32, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      871);
  v98 = v159;
  v99 = v160;
  v97[2] = 0;
  v97[3] = 0;
  *v97 = v98;
  v97[1] = v99;
  *(_QWORD*)(a1 + 528) = v97;
  *(_BYTE*)(a1 + 536) = 0;
  v100 = (*(_DWORD*)(a1 + 1220) & 0x4000) != 0;
  v101 = PxGetBroadcastAllocator(v162);
  if (v162[0] != 0) {
    v102 = "static const char "
           "*physx::PxReflectionAllocator<physx::IG::SimpleIslandManager>::"
           "getName(bool) [T = physx::IG"
           "::SimpleIslandManager]";
  }
  else {
    v102 = "<allocation names disabled>";
  }
  v103 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v101 + 16LL))(
      v101, 2184, v102,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      876);
  physx_IG_SimpleIslandManager_SimpleIslandManager(v103, v100, 0, a3);
  v104 = *(_QWORD*)(a1 + 312);
  *(_QWORD*)(a1 + 344) = v103;
  v105 = physx_createNphaseImplementationContext(v104, v103 + 224, v91, 0);
  v106 = *(_QWORD*)(a1 + 312);
  v107 = *(_QWORD*)(a1 + 344);
  v108 = v105;
  v109 = *(_DWORD*)(a2 + 196);
  v110 = *(_QWORD*)(v106 + 800);
  v111 = *(_QWORD*)(v106 + 792);
  v156 = *(_BYTE*)(a1 + 1130);
  v157 = (v109 & 0x80000) != 0;
  if (*(_DWORD*)(a2 + 180) != 0) {
    v112 = physx_Dy_createTGSDynamicsContext(
        v106 + 48, v106 + 8, v110, v106 + 816, v111, v91, a1, v107,
        *(float*)(a2 + 368), a3, v156, v100, (v109 & 0x10000) != 0, v157);
  }
  else {
    v112 = physx_Dy_createDynamicsContext(
        v106 + 48, v106 + 8, v110, v106 + 816, v111, v91, a1, v107,
        *(float*)(a2 + 240), *(float*)(a2 + 368), a3, v156, v100,
        (*(_DWORD*)(a2 + 196) & 0x8000) != 0, v157);
  }
  v113 = *(_QWORD*)(a1 + 312);
  *(_QWORD*)(a1 + 352) = v112;
  *(_QWORD*)(v113 + 640) = v108;
  v114 = PxGetBroadcastAllocator(v162);
  if (v162[0] != 0) {
    v115 =
        "static const char *physx::PxReflectionAllocator<(anonymous "
        "namespace)::ScSimulationControllerCallback>::getNa"
        "me(bool) [T = (anonymous namespace)::ScSimulationControllerCallback]";
  }
  else {
    v115 = "<allocation names disabled>";
  }
  v116 = (_QWORD*)(*(__int64 (**)(__int64, __int64, const char*, const char*,
                                  __int64))(*(_QWORD*)v114 + 16LL))(
      v114, 16, v115,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      904);
  *v116 = GameData_1f85310;
  v116[1] = a1;
  *(_QWORD*)(a1 + 376) = v116;
  v117 = PxGetBroadcastAllocator(v162);
  if (v162[0] != 0) {
    v118 = "static const char "
           "*physx::PxReflectionAllocator<physx::Sc::SimulationController>::"
           "getName(bool) [T = physx::S"
           "c::SimulationController]";
  }
  else {
    v118 = "<allocation names disabled>";
  }
  v119 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v117 + 16LL))(
      v117, 24, v118,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      905);
  v120 = *(_QWORD*)(a1 + 376);
  *(_DWORD*)(v119 + 16) = 0;
  *(_QWORD*)v119 =
      physx_PxsSimulationController_Destroy_PxsSimulationController_ptr;
  *(_QWORD*)(v119 + 8) = v120;
  *(_QWORD*)(a1 + 368) = v119;
  v121 = *(_QWORD*)(a1 + 520);
  v122 = *(_QWORD*)(a1 + 528);
  v123 = PxGetBroadcastAllocator(v162);
  if (v162[0] != 0) {
    v124 = "static const char "
           "*physx::PxReflectionAllocator<physx::Bp::AABBManager>::getName("
           "bool) [T = physx::Bp::AABBManager]";
  }
  else {
    v124 = "<allocation names disabled>";
  }
  v125 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v123 + 16LL))(
      v123, 960, v124,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      588);
  physx_Bp_AABBManager_AABBManager(
      v125, v90, v121, v122, *(unsigned int*)(a2 + 160),
      (unsigned int)(*(_DWORD*)(a2 + 156) + *(_DWORD*)(a2 + 152)), &v159, a3,
      *(_DWORD*)(a2 + 120), *(_DWORD*)(a2 + 124));
  *(_QWORD*)(a1 + 320) = v125;
  v126 = *(_DWORD*)(a2 + 148);
  if (v126 != 0) {
    GameRoutine_386420(v125 + 88, ((2 * v126) & 0xFFFFFF00) + 256);
  }
  physx_PxsContext_createTransformCache(*(_QWORD*)(a1 + 312), v91);
  *(_QWORD*)(*(_QWORD*)(a1 + 312) + 2392LL) = *(_QWORD*)(a1 + 528);
  v127 = PxGetBroadcastAllocator(v162);
  if (v162[0] != 0) {
    v128 = "static const char "
           "*physx::PxReflectionAllocator<physx::PxsCCDContext>::getName(bool) "
           "[T = physx::PxsCCDContext]";
  }
  else {
    v128 = "<allocation names disabled>";
  }
  v129 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v127 + 16LL))(
      v127, 488, v128,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      982);
  physx_PxsCCDContext_PxsCCDContext(
      v129, *(_QWORD*)(a1 + 312), *(_QWORD*)(*(_QWORD*)(a1 + 352) + 8LL),
      *(_QWORD*)(*(_QWORD*)(a1 + 312) + 640LL), *(float*)(a2 + 252));
  *(_QWORD*)(a1 + 328) = v129;
  v130 = *(_QWORD*)(a1 + 352);
  *(_DWORD*)(v130 + 140) = *(_DWORD*)(a2 + 224);
  *(_DWORD*)(v130 + 144) = *(_DWORD*)(a2 + 228);
  *(_DWORD*)(v130 + 124) = *(_DWORD*)(a2 + 188);
  *(_DWORD*)(v130 + 128) = *(_DWORD*)(a2 + 256);
  *(_DWORD*)(v130 + 132) = *(_DWORD*)(a2 + 192);
  v131 = *(_QWORD*)(a1 + 312);
  v132 = *(float*)*GameData_21359e0;
  *(float*)(v131 + 292) = v132;
  *(float*)(v131 + 288) = v132 * 0x1.47ae140000000p-7f;
  *(float*)(v130 + 120) = -*(float*)(a2 + 184);
  v133 = *(_QWORD*)(a1 + 1312);
  v134 = *(_QWORD*)(v133 + 16) + 24LL * *(unsigned int*)(v133 + 8);
  v135 = *(_QWORD**)(v134 + 8);
  if (v135 != nullptr) {
    *(_QWORD*)(v134 + 8) = *v135;
  }
  else {
    v136 = *(_DWORD*)(v134 + 16);
    if (v136 == *(_DWORD*)v133 ||
        (v137 = *(_DWORD*)(v133 + 4), *(_DWORD*)(v134 + 16) = v136 + 1,
         (v138 = *(_QWORD*)v134) == 0)) {
      v135 = (_QWORD*)physx_Cm_PreallocatingRegionManager_searchForMemory();
      if (v135 == nullptr) {
        goto LABEL_96;
      }
    }
    else {
      v135 = (_QWORD*)(v138 + (unsigned int)(v136 * v137));
    }
  }
  GameRoutine_386910(v135, a1, a1 + 1248);
  *v135 = GameData_1f863c0;
LABEL_96:
  *(_QWORD*)(a1 + 1296) = v135;
  v139 = PxGetBroadcastAllocator(v162);
  if (v162[0] != 0) {
    v140 = "static const char "
           "*physx::PxReflectionAllocator<physx::Sc::NPhaseCore>::getName(bool)"
           " [T = physx::Sc::NPhaseCore]";
  }
  else {
    v140 = "<allocation names disabled>";
  }
  v141 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v139 + 16LL))(
      v139, 648, v140,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      1004);
  physx_Sc_NPhaseCore_NPhaseCore(v141, a1, a2);
  *(_QWORD*)(a1 + 968) = v141;
  *(_QWORD*)(a1 + 1648) = 0x300000001LL;
  *(_QWORD*)(a1 + 1656) = 0xF00000007LL;
  *(_QWORD*)(a1 + 1664) = 0x3F0000001FLL;
  *(_QWORD*)(a1 + 1672) = 0xFF0000007FLL;
  *(_QWORD*)(a1 + 1680) = 0x3FF000001FFLL;
  *(_QWORD*)(a1 + 1688) = 0xFFF000007FFLL;
  *(_QWORD*)(a1 + 1696) = 0x3FFF00001FFFLL;
  *(_QWORD*)(a1 + 1704) = 0xFFFF00007FFFLL;
  *(_QWORD*)(a1 + 1712) = 0x3FFFF0001FFFFLL;
  *(_QWORD*)(a1 + 1720) = 0xFFFFF0007FFFFLL;
  *(_QWORD*)(a1 + 1728) = 0x3FFFFF001FFFFFLL;
  *(_QWORD*)(a1 + 1736) = 0xFFFFFF007FFFFFLL;
  *(_QWORD*)(a1 + 1744) = 0x3FFFFFF01FFFFFFLL;
  *(_QWORD*)(a1 + 1752) = 0xFFFFFFF07FFFFFFLL;
  *(_QWORD*)(a1 + 1760) = 0x3FFFFFFF1FFFFFFFLL;
  *(_QWORD*)(a1 + 1768) = 0xFFFFFFFF7FFFFFFFLL;
  *(_WORD*)(a1 + 1128) = 257;
  v142 = *(_QWORD*)(a2 + 144);
  v143 = *(_QWORD*)(a2 + 152);
  v144 = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(a1 + 400) = *(_QWORD*)(a2 + 160);
  *(_QWORD*)(a1 + 408) = v144;
  *(_QWORD*)(a1 + 384) = v142;
  *(_QWORD*)(a1 + 392) = v143;
  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a2 + 136);
  *(_QWORD*)(a1 + 416) = *(_QWORD*)(a2 + 36);
  v145 = *(_QWORD*)(a1 + 312);
  *(_DWORD*)(a1 + 424) = *(_DWORD*)(a2 + 44);
  LODWORD(v143) = *(_DWORD*)(a2 + 196);
  *(_BYTE*)(v145 + 2376) = (v143 & 0x40) != 0;
  *(_BYTE*)(v145 + 2377) = (v143 & 0x100) == 0;
  v146 = *(_QWORD*)(a2 + 48);
  if (v146 != 0 && *(_QWORD*)(a1 + 1200) == 0 && *(_DWORD*)(a1 + 1068) != 0) {
    v147 = *(_QWORD*)(a1 + 1024);
    v148 = 0;
    do {
      v149 = physx_Sc_BodyCore_getSim(*(_QWORD*)(v147 + 8 * v148++));
      *(_WORD*)(v149 + 108) |= 0x40u;
    } while (v148 < *(unsigned int*)(a1 + 1068));
    v145 = *(_QWORD*)(a1 + 312);
  }
  *(_QWORD*)(a1 + 1200) = v146;
  v150 = *(_QWORD*)(v145 + 640);
  *(_QWORD*)(v145 + 632) = *(_QWORD*)(a2 + 56);
  (*(void (**)(__int64))(*(_QWORD*)v150 + 240LL))(v150);
  physx_Sc_Scene_setCCDContactModifyCallback(a1, *(_QWORD*)(a2 + 64));
  if (*(_QWORD*)(a2 + 80) != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 368) + 328LL))(
        *(_QWORD*)(a1 + 368));
  }
  if (*(_QWORD*)(a2 + 72) != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 368) + 320LL))(
        *(_QWORD*)(a1 + 368));
  }
  result = physx_Sc_Scene_setCCDMaxPasses(a1, *(unsigned int*)(a2 + 248));
  v152 = *(_QWORD*)(a2 + 88);
  if (v152 == 0) {
    goto LABEL_114;
  }
  v153 = *(unsigned int*)(a2 + 96);
  if ((_DWORD)v153 == 0) {
    LODWORD(v152) = 0;
  LABEL_114:
    *(_QWORD*)(a1 + 976) = 0;
    goto LABEL_115;
  }
  v154 = PxGetBroadcastAllocator(0);
  result = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v154 + 16LL))(
      v154, v153, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/source/simulationcontroller/src/ScScene.cpp",
      1048);
  v155 = *(unsigned int*)(a2 + 96);
  *(_QWORD*)(a1 + 976) = result;
  if ((_DWORD)v155 != 0) {
    result = memcpy(result, *(_QWORD*)(a2 + 88), v155);
    LODWORD(v152) = *(_DWORD*)(a2 + 96);
  }
  else {
    LODWORD(v152) = 0;
  }
LABEL_115:
  *(_DWORD*)(a1 + 984) = v152;
  *(_DWORD*)(a1 + 988) = v152;
  *(_QWORD*)(a1 + 992) = *(_QWORD*)(a2 + 104);
  *(_QWORD*)(a1 + 1000) = *(_QWORD*)(a2 + 112);
  return result;
}

#pragma GCC visibility pop
