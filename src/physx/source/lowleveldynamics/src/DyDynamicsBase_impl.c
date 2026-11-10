#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_55b720(__int64);
__int64 GameRoutine_55b760(_QWORD);
__int64 GameRoutine_55bfe0(__int64 result);
__int64 GameRoutine_55c0e0(_QWORD);
__int64 PxGetBroadcastAllocator(_BYTE*);
extern _UNKNOWN* GameData_2135840;
extern _UNKNOWN GameData_1f85028;
__int64 physx_Dy_DynamicsContextBase_DynamicsContextBase(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, float a9, float a10, char a11, char a12, char a13);

__int64 physx_Dy_DynamicsContextBase_DynamicsContextBase(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8, float a9, float a10, char a11, char a12, char a13)
{

#pragma clang fp contract(off)
  char* v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  const char* v25;
  __int64 v26;
  __int64 result;
  _BYTE v28[4];
  _BYTE v29[4];

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v17 = (char*)GameData_2135840;
  *(_QWORD*)(a1 + 88) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = a7;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(float*)(a1 + 96) = a9;
  *(_BYTE*)(a1 + 100) = a11;
  *(_BYTE*)(a1 + 101) = a12;
  *(_DWORD*)(a1 + 120) = -1073741824;
  *(float*)(a1 + 136) = a10;
  *(_QWORD*)(a1 + 248) = a5;
  *(_DWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = a5;
  *(_DWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 312) = a13;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = a5;
  *(_DWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = a5;
  *(_DWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = a4;
  *(_QWORD*)(a1 + 408) = a8;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)a1 = v17 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  *(_DWORD*)(a1 + 140) = 32;
  v18 = (unsigned int)GameRoutine_55b760(a1);
  v19 = PxGetBroadcastAllocator(v28);
  if (v28[0] != 0) {
    v20 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxMutexImpl>::getName(bool) [T "
          "= physx::PxMutexImpl]";
  }
  else {
    v20 = "<allocation names disabled>";
  }
  v21 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v19 + 16LL))(
      v19, v18, v20,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "include\\foundation/PxMutex.h",
      112);
  *(_QWORD*)(a1 + 432) = v21;
  v22 = GameRoutine_55b720(v21);
  *(_DWORD*)(a1 + 440) = 0;
  *(_BYTE*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 452) = 0;
  *(_QWORD*)(a1 + 460) = 0;
  *(_QWORD*)(a1 + 468) = 0;
  *(_QWORD*)a1 = &GameData_1f85028;
  v23 = (unsigned int)GameRoutine_55c0e0(v22);
  v24 = PxGetBroadcastAllocator(v29);
  if (v29[0] != 0) {
    v25 = "static const char "
          "*physx::PxReflectionAllocator<physx::PxSListImpl>::getName(bool) [T "
          "= physx::PxSListImpl]";
  }
  else {
    v25 = "<allocation names disabled>";
  }
  v26 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v24 + 16LL))(
      v24, v23, v25,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "include\\foundation/PxSList.h",
      93);
  *(_QWORD*)(a1 + 480) = v26;
  result = GameRoutine_55bfe0(v26);
  *(_QWORD*)(a1 + 488) = a2;
  *(_QWORD*)(a1 + 496) = a6;
  *(_QWORD*)(a1 + 504) = a3;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_QWORD*)(a1 + 1040) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_DWORD*)(a1 + 1200) = 0;
  return result;
}

#pragma GCC visibility pop
