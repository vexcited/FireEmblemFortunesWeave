#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2d8750(_QWORD, _QWORD);
__int64 GameRoutine_2d8e40(__int64, __int64, __int64);
__int64 GameRoutine_2d91a0(__int64, __int64, __int64);
__int64 GameRoutine_2e7920(__int64*, unsigned int);
__int64 GameRoutine_2e7ac0(__int64*, unsigned int);
__int64 GameRoutine_2e7ec0(__int64*, unsigned int);
__int64 GameRoutine_2e8060(__int64*, unsigned int);
__int64 GameRoutine_2e8200(__int64*, unsigned int);
__int64 GameRoutine_55b720(__int64);
__int64 GameRoutine_55b760(_QWORD);
__int64 GameRoutine_55b770(__int64*);
__int64 GameRoutine_55b9a0(_QWORD);
__int64 GameRoutine_55b9b0(__int64);
__int64 GameRoutine_55bf60();
__int64 GameRoutine_55bfb0(_QWORD);
__int64 GameRoutine_55bfc0(_QWORD, _QWORD);
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 PxGetFoundation();
__int64 physx_NpSceneQueries_NpSceneQueries(_QWORD*, __int64, __int64, __int64);
__int64 physx_NpScene_addRigidDynamic(__int64, __int64, __int64, __int64);
__int64 physx_NpScene_addRigidStatic(__int64, __int64, __int64, __int64);
__int64 physx_Sc_Scene_Scene(__int64, __int64, __int64);
extern _UNKNOWN* GameData_2135640;
extern _UNKNOWN* GameData_2135648;
extern _UNKNOWN* GameData_2135650;
extern _UNKNOWN* GameData_2135658;
extern _UNKNOWN* GameData_2135660;
extern _UNKNOWN* GameData_2135668;
extern _UNKNOWN* GameData_2135670;
extern _UNKNOWN* GameData_2135678;
__int64 physx_NpScene_NpScene(__int64 a1, __int64 a2, __int64 a3);
__int64 physx_NpScene_addActorInternal(__int64 a1, __int64 a2, __int64 a3);
__int64 physx_NpScene_unlockRead(__int64 a1);
__int64 physx_NpScene_applySoftBodyData(__int64 a1);

__int64 physx_NpScene_NpScene(__int64 a1, __int64 a2, __int64 a3)
{
  char* v6;
  char* v7;
  char* v8;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  const char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  const char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  const char* v47;
  __int64 v48;
  char* v49;
  char* v50;
  char* v51;
  char* v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 result;
  _BYTE v61[4];
  _BYTE v62[4];
  _BYTE v63[4];
  _BYTE v64[4];

  *(_QWORD*)a1 = (char*)GameData_2135640 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  physx_NpSceneQueries_NpSceneQueries((_QWORD*)(a1 + 16), a2, 0, a1);
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  v6 = (char*)GameData_2135648;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = "NpScene.sceneQueriesStaticPrunerUpdate";
  v7 = (char*)GameData_2135650;
  *(_QWORD*)(a1 + 40) = v6 + 16;
  *(_QWORD*)(a1 + 48) = a1;
  v8 = (char*)GameData_2135658;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 96) = v7 + 16;
  *(_QWORD*)(a1 + 104) = a1;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = "NpScene.sceneQueriesDynamicPrunerUpdate";
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = -3233808384LL;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 152) = v8 + 16;
  *(_QWORD*)(a1 + 160) = 0;
  GameRoutine_2e7920((__int64*)(a1 + 264), 0x40u);
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = -3233808384LL;
  *(_QWORD*)(a1 + 368) = 0;
  GameRoutine_2e7ec0((__int64*)(a1 + 320), 0x40u);
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = -3233808384LL;
  *(_QWORD*)(a1 + 424) = 0;
  GameRoutine_2e8060((__int64*)(a1 + 376), 0x40u);
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = -3233808384LL;
  *(_QWORD*)(a1 + 480) = 0;
  GameRoutine_2e8200((__int64*)(a1 + 432), 0x40u);
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = -3233808384LL;
  *(_QWORD*)(a1 + 536) = 0;
  v29 = GameRoutine_2e7ac0((__int64*)(a1 + 488), 0x40u);
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  v30 = (unsigned int)GameRoutine_55b760(v29);
  v31 = PxGetBroadcastAllocator(v61);
  if (v61[0] != 0) {
    v32 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxMutexImpl>::getName(bool) [T "
          "= physx::PxMutexImpl]";
  }
  else {
    v32 = "<allocation names disabled>";
  }
  v33 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v31 + 16LL))(
      v31, v30, v32,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "include\\foundation/PxMutex.h",
      112);
  *(_QWORD*)(a1 + 592) = v33;
  v34 = GameRoutine_55b720(v33);
  *(_QWORD*)(a1 + 600) = *(_QWORD*)(a2 + 264);
  *(_DWORD*)(a1 + 608) = *(_DWORD*)(a2 + 272);
  *(_DWORD*)(a1 + 612) = *(_DWORD*)(a2 + 276);
  *(_DWORD*)(a1 + 616) = *(_DWORD*)(a2 + 280);
  *(_DWORD*)(a1 + 620) = *(_DWORD*)(a2 + 284);
  v35 = (unsigned int)GameRoutine_55b9a0(v34);
  v36 = PxGetBroadcastAllocator(v62);
  if (v62[0] != 0) {
    v37 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxSyncImpl>::getName(bool) [T "
          "= physx::PxSyncImpl]";
  }
  else {
    v37 = "<allocation names disabled>";
  }
  v38 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v36 + 16LL))(
      v36, v35, v37,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "include\\foundation/PxSync.h",
      94);
  *(_QWORD*)(a1 + 624) = v38;
  v39 = GameRoutine_55b9b0(v38);
  v40 = (unsigned int)GameRoutine_55b9a0(v39);
  v41 = PxGetBroadcastAllocator(v63);
  if (v63[0] != 0) {
    v42 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxSyncImpl>::getName(bool) [T "
          "= physx::PxSyncImpl]";
  }
  else {
    v42 = "<allocation names disabled>";
  }
  v43 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v41 + 16LL))(
      v41, v40, v42,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "include\\foundation/PxSync.h",
      94);
  *(_QWORD*)(a1 + 632) = v43;
  v44 = GameRoutine_55b9b0(v43);
  v45 = (unsigned int)GameRoutine_55b9a0(v44);
  v46 = PxGetBroadcastAllocator(v64);
  if (v64[0] != 0) {
    v47 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxSyncImpl>::getName(bool) [T "
          "= physx::PxSyncImpl]";
  }
  else {
    v47 = "<allocation names disabled>";
  }
  v48 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v46 + 16LL))(
      v46, v45, v47,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "include\\foundation/PxSync.h",
      94);
  *(_QWORD*)(a1 + 640) = v48;
  GameRoutine_55b9b0(v48);
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_DWORD*)(a1 + 652) = 1;
  v49 = (char*)GameData_2135660;
  *(_DWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 680) = a1;
  *(_QWORD*)(a1 + 712) = a1 + 624;
  v49 += 16;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 672) = v49;
  *(_DWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 728) = a1;
  *(_QWORD*)(a1 + 720) = v49;
  *(_QWORD*)(a1 + 760) = a1 + 632;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_DWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 776) = a1;
  *(_QWORD*)(a1 + 768) = v49;
  *(_QWORD*)(a1 + 808) = a1 + 640;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_DWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 824) = a1;
  v50 = (char*)GameData_2135668 + 16;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 816) = v50;
  *(_QWORD*)(a1 + 864) = "NpScene.execution";
  *(_DWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 880) = a1;
  v51 = (char*)GameData_2135670;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 872) = v51 + 16;
  *(_QWORD*)(a1 + 920) = "NpScene.collide";
  *(_DWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 936) = a1;
  v52 = (char*)GameData_2135678;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_WORD*)(a1 + 1000) = 0;
  *(_BYTE*)(a1 + 1002) = 0;
  *(_DWORD*)(a1 + 1004) = 0;
  *(_QWORD*)(a1 + 928) = v52 + 16;
  *(_QWORD*)(a1 + 976) = "NpScene.solve";
  *(_DWORD*)(a1 + 1008) = 0;
  *(_DWORD*)(a1 + 1012) = 0;
  *(_DWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1024) = 0;
  GameRoutine_55b770((__int64*)(a1 + 1032));
  *(_DWORD*)(a1 + 1040) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  physx_Sc_Scene_Scene(a1 + 1120, a2, a1);
  v53 = *(_DWORD*)(a2 + 260);
  *(_QWORD*)(a1 + 6048) = 0;
  *(_QWORD*)(a1 + 6120) = a3;
  *(_QWORD*)(a1 + 6128) = 0;
  *(_QWORD*)(a1 + 6064) = 0x1000000;
  *(_QWORD*)(a1 + 6072) = 0x1400000080000LL;
  *(_DWORD*)(a1 + 6056) = v53;
  *(_QWORD*)(a1 + 6080) = 0x4000004000000LL;
  *(_QWORD*)(a1 + 6088) = 0x40000000400LL;
  *(_QWORD*)(a1 + 6096) = 0x100000;
  *(_QWORD*)(a1 + 6104) = 0x100000;
  *(_QWORD*)(a1 + 6112) = 0x400000000100000LL;
  v54 = *(_QWORD*)(a2 + 288);
  v55 = *(_QWORD*)(a2 + 296);
  *(_QWORD*)(a1 + 6080) = *(_QWORD*)(a2 + 304);
  *(_QWORD*)(a1 + 6072) = v55;
  *(_QWORD*)(a1 + 6064) = v54;
  v56 = *(_QWORD*)(a2 + 312);
  v57 = *(_QWORD*)(a2 + 320);
  v58 = *(_QWORD*)(a2 + 328);
  v59 = *(_QWORD*)(a2 + 336);
  *(_QWORD*)(a1 + 80) = a1;
  *(_QWORD*)(a1 + 136) = a1;
  *(_QWORD*)(a1 + 856) = a1;
  *(_QWORD*)(a1 + 912) = a1;
  *(_QWORD*)(a1 + 968) = a1;
  *(_QWORD*)(a1 + 6112) = v59;
  *(_QWORD*)(a1 + 6104) = v58;
  *(_QWORD*)(a1 + 6096) = v57;
  *(_QWORD*)(a1 + 6088) = v56;
  *(_DWORD*)(a1 + 32) = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 4);
  *(_QWORD*)(a1 + 656) = *(_QWORD*)(a1 + 5768);
  *(_QWORD*)(a1 + 664) = *(_QWORD*)(a1 + 5776);
  result = GameRoutine_55bf60();
  *(_DWORD*)(a1 + 1020) = result;
  return result;
}

__int64 physx_NpScene_addActorInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v6;
  const char* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  const char* v15;
  unsigned int v16;
  __int64 v17;
  __int64 vars0;
  __int64 _8;
  __int64 vars10;
  __int64 _18;
  __int64 vars20;
  __int64 vars20a;
  __int64 _28;
  __int64 _28a;

  if (a3 == 0 ||
      (*(unsigned int (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3) != 0 &&
          (v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 80LL))(a3)) <=
              (*(unsigned int (**)(__int64))(*(_QWORD*)a2 + 208LL))(a2)) {
    v13 = *(unsigned __int16*)(a2 + 8);
    if (v13 == 7) {
      if ((GameRoutine_2d91a0(*(_QWORD*)(a2 + 24), *(_QWORD*)(a2 + 72), 0) &
           1) != 0) {
        return physx_NpScene_addRigidDynamic(a1, a2, a3, 0);
      }
    }
    else {
      if (v13 == 17) {
        v7 = "PxScene::addActor(): Individual articulation links can not be "
             "added to the scene";
        v8 = 541;
        v10 = vars20;
        v9 = _28;
        v11 = vars0;
        v12 = _8;
        goto LABEL_14;
      }
      if (v13 == 8 &&
          (GameRoutine_2d8e40(*(_QWORD*)(a2 + 24), *(_QWORD*)(a2 + 72), 0) &
           1) != 0) {
        return physx_NpScene_addRigidStatic(a1, a2, a3, 0);
      }
    }
    return 0;
  }
  v7 = "PxRigidActor::setBVH: BVH is empty or does not match shapes in the "
       "actor.";
  v8 = 517;
  v10 = vars20;
  v9 = _28;
  v11 = vars0;
  v12 = _8;
LABEL_14:
  vars10 = v11;
  _18 = v12;
  vars20a = v10;
  _28a = v9;
  v15 = v7;
  v16 = v8;
  v17 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, const char*))(
      *(_QWORD*)v17 + 88LL))(
      v17, 4, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", v16,
      v15);
}

__int64 physx_NpScene_unlockRead(__int64 a1)
{
  int v2;
  int v3;
  __int64 result;

  v2 = GameRoutine_55bfb0(*(unsigned int*)(a1 + 1020));
  if (BYTE2(v2) == 0) {
    return GameRoutine_2d8750(
        3508, "PxScene::unlockRead() called without matching call to "
              "PxScene::lockRead(), behaviour will be undefined.");
  }
  v3 = (unsigned __int8)(BYTE2(v2) - 1);
  result = GameRoutine_55bfc0(
      *(unsigned int*)(a1 + 1020),
      v2 & 0xFF00FFFF |
          ((unsigned __int64)(unsigned __int8)(BYTE2(v2) - 1) << 16));
  if (v3 == 0) {
    atomic_fetch_add((atomic_uint* volatile)(*(_QWORD*)(a1 + 1032) + 8LL),
                     0xFFFFFFFF);
    return a1 + 1032;
  }
  return result;
}

__int64 physx_NpScene_applySoftBodyData(__int64 a1)
{
  __int64 v1;

  if (*(_BYTE*)(a1 + 1002) != 1) {
    return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 1488) + 408LL))(
        *(_QWORD*)(a1 + 1488));
  }
  v1 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v1 + 88LL))(
      v1, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpScene.cpp", 3709,
      "PxScene::applySoftBodyData() not allowed while simulation is running. "
      "Call will be ignored.");
}

#pragma GCC visibility pop
