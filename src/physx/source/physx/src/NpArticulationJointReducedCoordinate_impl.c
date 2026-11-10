#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_3107f0(__int64, unsigned int, float);
_BYTE* GameRoutine_310860(__int64, unsigned int, float);
__attribute__((swiftcall)) void physx_NpScene_getFlags(PSEUDO_X8,
                                                       __int64 result);
__int64*
physx_NpArticulationReducedCoordinate_autoWakeInternal(__int64* result);
__int64 GameRoutine_3105f0(__int64 result, float*);
__int64 GameRoutine_3106f0(__int64 result, float*);
__int64 GameRoutine_310bf0(__int64, float);
__int64 GameRoutine_311070(_QWORD, _QWORD);
__int64 PxGetFoundation();
__int64 PxGetFoundation_alt1(_QWORD, _QWORD) __asm__("PxGetFoundation");
__int64 physx_NpArticulationLink_getArticulation(_QWORD);
float sqrtf(_QWORD);
__int64 physx_NpArticulationJointReducedCoordinate_setFrictionParams(__int64 a1,
                                                                     float a2);
_BYTE* physx_NpArticulationJointReducedCoordinate_setDriveTarget(
    __int64 a1, unsigned int a2, char a3, float a4);
_BYTE* physx_NpArticulationJointReducedCoordinate_setDriveVelocity(
    __int64 a1, unsigned int a2, char a3, float a4);
__int64 physx_NpArticulationJointReducedCoordinate_setArmature(__int64 a1,
                                                               __int64 a2,
                                                               float a3);
__attribute__((swiftcall)) void
physx_NpArticulationJointReducedCoordinate_getParentPose(PSEUDO_X8 x8_,
                                                         __int64 a1);
__int64 physx_NpArticulationJointReducedCoordinate_setParentPose(__int64 result,
                                                                 float* a2);
__attribute__((swiftcall)) void
physx_NpArticulationJointReducedCoordinate_getChildPose(PSEUDO_X8 x8_,
                                                        __int64 a1);
__int64 physx_NpArticulationJointReducedCoordinate_setChildPose(__int64 a1,
                                                                float* a2);
float physx_NpArticulationJointReducedCoordinate_getJointPosition(__int64 a1,
                                                                  __int64 a2);
float physx_NpArticulationJointReducedCoordinate_getJointVelocity(__int64 a1,
                                                                  __int64 a2);

__int64 physx_NpArticulationJointReducedCoordinate_setFrictionParams(__int64 a1,
                                                                     float a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 == 0 || *(_BYTE*)(v2 + 1002) != 1) {
    return GameRoutine_310bf0(a1 + 48, a2);
  }
  v3 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v3 + 88LL))(
      v3, 8,
      "/Inside/Lib/PhysX/O/physx/source/physx/src/"
      "NpArticulationJointReducedCoordinate.cpp",
      206,
      "PxArticulationJointReducedCoordinate::setMaxJointVelocity() not allowed "
      "while simulation is running. Call will be ignored.");
}

_BYTE* physx_NpArticulationJointReducedCoordinate_setDriveTarget(
    __int64 a1, unsigned int a2, char a3, float a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  int v13;

  v4 = *(_QWORD*)(a1 + 24);
  if (v4 != 0) {
    if (*(_BYTE*)(v4 + 1002) == 1) {
      v9 = PxGetFoundation();
      return (_BYTE*)(*(__int64 (**)(__int64, __int64, const char*, __int64,
                                     const char*))(*(_QWORD*)v9 + 88LL))(
          v9, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src/"
          "NpArticulationJointReducedCoordinate.cpp",
          300,
          "PxArticulationJointReducedCoordinate::setDriveTarget() not allowed "
          "while simulation is running. "
          "Call will be ignored.");
    }
    physx_NpScene_getFlags((void*)(&v13), *(_QWORD*)(a1 + 24));
    if ((v13 & 0x20000) != 0 && *(_BYTE*)(v4 + 6009) == 1) {
      v11 = PxGetFoundation();
      (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
          *(_QWORD*)v11 + 88LL))(
          v11, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src/"
          "NpArticulationJointReducedCoordinate.cpp",
          304,
          "PxArticulationJointReducedCoordinate::setDriveTarget(): it is "
          "illegal to call this method if PxSceneFlag::eENABL"
          "E_DIRECT_GPU_API is enabled!");
    }
  }
  if (v4 != 0 && (a3 & 1) != 0) {
    v12 = (__int64*)physx_NpArticulationLink_getArticulation(
        *(_QWORD*)(a1 + 432));
    physx_NpArticulationReducedCoordinate_autoWakeInternal(v12);
  }
  return GameRoutine_3107f0(a1 + 48, a2, a4);
}

_BYTE* physx_NpArticulationJointReducedCoordinate_setDriveVelocity(
    __int64 a1, unsigned int a2, char a3, float a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  int v13;

  v4 = *(_QWORD*)(a1 + 24);
  if (v4 != 0) {
    if (*(_BYTE*)(v4 + 1002) == 1) {
      v9 = PxGetFoundation();
      return (_BYTE*)(*(__int64 (**)(__int64, __int64, const char*, __int64,
                                     const char*))(*(_QWORD*)v9 + 88LL))(
          v9, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src/"
          "NpArticulationJointReducedCoordinate.cpp",
          328,
          "PxArticulationJointReducedCoordinate::setDriveVelocity() not "
          "allowed while simulation is running"
          ". Call will be ignored.");
    }
    physx_NpScene_getFlags((void*)(&v13), *(_QWORD*)(a1 + 24));
    if ((v13 & 0x20000) != 0 && *(_BYTE*)(v4 + 6009) == 1) {
      v11 = PxGetFoundation();
      (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
          *(_QWORD*)v11 + 88LL))(
          v11, 8,
          "/Inside/Lib/PhysX/O/physx/source/physx/src/"
          "NpArticulationJointReducedCoordinate.cpp",
          332,
          "PxArticulationJointReducedCoordinate::setDriveVelocity(): it is "
          "illegal to call this method if PxSceneFlag::eENA"
          "BLE_DIRECT_GPU_API is enabled!");
    }
  }
  if (v4 != 0 && (a3 & 1) != 0) {
    v12 = (__int64*)physx_NpArticulationLink_getArticulation(
        *(_QWORD*)(a1 + 432));
    physx_NpArticulationReducedCoordinate_autoWakeInternal(v12);
  }
  return GameRoutine_310860(a1 + 48, a2, a4);
}

__int64 physx_NpArticulationJointReducedCoordinate_setArmature(__int64 a1,
                                                               __int64 a2,
                                                               float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;

  v3 = *(_QWORD*)(a1 + 24);
  if (v3 != 0 && *(_BYTE*)(v3 + 1002) == 1) {
    v4 = PxGetFoundation_alt1(a1, a2);
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v4 + 88LL))(
        v4, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/"
        "NpArticulationJointReducedCoordinate.cpp",
        369,
        "PxArticulationJointReducedCoordinate::setArmature() not allowed while "
        "simulation is running. Call will be ignored.");
  }
  else {
    result = a1 + 48;
    v6 = result + 248;
    if (*(float*)(result + 248 + 4LL * (unsigned int)a2) != a3) {
      v7 = result;
      result = *(_QWORD*)(result + 352);
      *(float*)(v6 + 4LL * (unsigned int)a2) = a3;
      if (result != 0) {
        result = GameRoutine_311070(result, a2);
      }
      v8 = **(_BYTE***)(v7 + 360);
      if (v8 != nullptr && v8[148] == 1) {
        *(_BYTE*)(*(_QWORD*)v8 + 1268LL) = 1;
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

physx_NpArticulationJointReducedCoordinate_getParentPose(PSEUDO_X8 x8_,
                                                         __int64 a1)
{
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
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

  v2 = *(float**)(a1 + 432);
  v3 = *(float*)(a1 + 68) + *(float*)(a1 + 68);
  v4 = v2[34];
  v5 = v2[35];
  v6 = v2[32];
  v7 = v2[33];
  v8 = *(float*)(a1 + 72) + *(float*)(a1 + 72);
  v9 = *(float*)(a1 + 64) + *(float*)(a1 + 64);
  v10 = (float)(v5 * v5) + -0.5f;
  v11 = (float)((float)(v7 * v3) + (float)(v6 * v9)) + (float)(v4 * v8);
  v12 = (float)(v5 * (float)((float)(v7 * v8) - (float)(v4 * v3))) +
        (float)(v9 * v10);
  v13 = (float)((float)(v5 * (float)((float)(v4 * v9) - (float)(v6 * v8))) +
                (float)(v3 * v10)) +
        (float)(v7 * v11);
  v14 = v5 * (float)((float)(v6 * v3) - (float)(v7 * v9));
  v15 = v2[36] + (float)(v12 + (float)(v6 * v11));
  v16 = v14 + (float)(v8 * v10);
  v17 = v2[37] + v13;
  v18 = *(float*)(a1 + 48);
  v19 = *(float*)(a1 + 52);
  v20 = v16 + (float)(v4 * v11);
  v22 = *(float*)(a1 + 56);
  v21 = *(float*)(a1 + 60);
  a2[4] = v15;
  a2[5] = v17;
  v23 = (float)((float)(v4 * v21) + (float)(v5 * v22)) + (float)(v6 * v19);
  v24 = (float)((float)(v6 * v21) + (float)(v5 * v18)) + (float)(v7 * v22);
  v25 = (float)((float)((float)(v7 * v21) + (float)(v5 * v19)) +
                (float)(v4 * v18)) -
        (float)(v22 * v6);
  v26 = -(float)(v6 * v18);
  v27 = v23 - (float)(v18 * v7);
  v28 = v2[38];
  *a2 = v24 - (float)(v19 * v4);
  a2[1] = v25;
  a2[2] = v27;
  a2[3] = (float)((float)(v26 + (float)(v5 * v21)) - (float)(v7 * v19)) -
          (float)(v4 * v22);
  a2[6] = v28 + v20;
  {
    v28 + v20;
    return;
  }
}

__int64 physx_NpArticulationJointReducedCoordinate_setParentPose(__int64 result,
                                                                 float* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float* v5;
  float v6;
  float v7;
  float v8;
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
  float v24[7];

  v2 = *(_QWORD*)(result + 24);
  v3 = result;
  if (v2 != 0 && *(_BYTE*)(v2 + 1002) == 1) {
    v4 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v4 + 88LL))(
        v4, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/"
        "NpArticulationJointReducedCoordinate.cpp",
        399,
        "PxArticulationJointReducedCoordinate::setParentPose() not allowed "
        "while simulation is running. Call will be ignored.");
  }
  else {
    v5 = *(float**)(result + 432);
    if (v5 != nullptr) {
      v6 = v5[36];
      v7 = v5[37];
      v8 = v5[38];
      v11 = v5[32];
      v10 = v5[33];
      v12 = v5[34];
      v13 = v5[35];
      v14 = 0x1.0000000000000p+0f / sqrtf(result);
      v15 = (float)(v13 * v13) + -0x1.0000000000000p-1f;
      v16 = (float)(a2[6] - v8) + (float)(a2[6] - v8);
      v17 = *a2 * v14;
      v18 = v14 * a2[1];
      v19 = v14 * a2[2];
      v20 = v14 * a2[3];
      v21 = (float)(a2[5] - v7) + (float)(a2[5] - v7);
      v22 = (float)(a2[4] - v6) + (float)(a2[4] - v6);
      v23 = (float)((float)-(float)(PSEUDO_UNFUSED(v10 * v21)) -
                    (float)(v11 * v22)) -
            (float)(v12 * v16);
      v24[4] = (float)((float)(PSEUDO_UNFUSED(
                           v13 * (float)((float)(PSEUDO_UNFUSED(v12 * v21)) -
                                         (float)(v10 * v16)))) +
                       (float)(v22 * v15)) -
               (float)(v11 * v23);
      v24[5] = (float)((float)(PSEUDO_UNFUSED(
                           v13 * (float)((float)(PSEUDO_UNFUSED(v11 * v16)) -
                                         (float)(v12 * v22)))) +
                       (float)(v21 * v15)) -
               (float)(v10 * v23);
      v24[0] = (float)((float)((float)(v13 * v17) -
                               (float)(PSEUDO_UNFUSED(v11 * v20))) -
                       (float)(v10 * v19)) +
               (float)(v18 * v12);
      v24[1] = (float)((float)((float)(v13 * v18) -
                               (float)(PSEUDO_UNFUSED(v10 * v20))) -
                       (float)(v12 * v17)) +
               (float)(v19 * v11);
      v24[2] = (float)((float)((float)(v13 * v19) -
                               (float)(PSEUDO_UNFUSED(v12 * v20))) -
                       (float)(v11 * v18)) +
               (float)(v17 * v10);
      v24[3] = (float)((float)((float)(PSEUDO_UNFUSED(v11 * v17)) +
                               (float)(v13 * v20)) +
                       (float)(v10 * v18)) +
               (float)(v12 * v19);
      v24[6] = (float)((float)(PSEUDO_UNFUSED(
                           v13 * (float)((float)(PSEUDO_UNFUSED(v10 * v22)) -
                                         (float)(v11 * v21)))) +
                       (float)(v16 * v15)) -
               (float)(v12 * v23);
      return GameRoutine_3105f0(v3 + 48, v24);
    }
  }
  return result;
}

__attribute__((swiftcall)) void

physx_NpArticulationJointReducedCoordinate_getChildPose(PSEUDO_X8 x8_,
                                                        __int64 a1)
{
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
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

  v2 = *(float**)(a1 + 440);
  v3 = *(float*)(a1 + 96) + *(float*)(a1 + 96);
  v4 = v2[34];
  v5 = v2[35];
  v6 = v2[32];
  v7 = v2[33];
  v8 = *(float*)(a1 + 100) + *(float*)(a1 + 100);
  v9 = *(float*)(a1 + 92) + *(float*)(a1 + 92);
  v10 = (float)(v5 * v5) + -0x1.0000000000000p-1f;
  v11 = (float)((float)(PSEUDO_UNFUSED(v7 * v3)) + (float)(v6 * v9)) +
        (float)(v4 * v8);
  v12 =
      (float)(PSEUDO_UNFUSED(
          v5 * (float)((float)(v7 * v8) - (float)(PSEUDO_UNFUSED(v4 * v3))))) +
      (float)(v9 * v10);
  v13 = (float)((float)(PSEUDO_UNFUSED(
                    v5 * (float)((float)(v4 * v9) -
                                 (float)(PSEUDO_UNFUSED(v6 * v8))))) +
                (float)(v3 * v10)) +
        (float)(v7 * v11);
  v14 = v5 * (float)((float)(v6 * v3) - (float)(PSEUDO_UNFUSED(v7 * v9)));
  v15 = v2[36] + (float)(v12 + (float)(v6 * v11));
  v16 = v14 + (float)(v8 * v10);
  v17 = v2[37] + v13;
  v18 = *(float*)(a1 + 76);
  v19 = *(float*)(a1 + 80);
  v20 = v16 + (float)(v4 * v11);
  v22 = *(float*)(a1 + 84);
  v21 = *(float*)(a1 + 88);
  a2[4] = v15;
  a2[5] = v17;
  v23 = (float)((float)(PSEUDO_UNFUSED(v4 * v21)) + (float)(v5 * v22)) +
        (float)(v6 * v19);
  v24 = (float)((float)(PSEUDO_UNFUSED(v6 * v21)) + (float)(v5 * v18)) +
        (float)(v7 * v22);
  v25 = (float)((float)((float)(PSEUDO_UNFUSED(v7 * v21)) + (float)(v5 * v19)) +
                (float)(v4 * v18)) -
        (float)(v22 * v6);
  v26 = -(float)(v6 * v18);
  v27 = v23 - (float)(v18 * v7);
  v28 = v2[38];
  *a2 = v24 - (float)(v19 * v4);
  a2[1] = v25;
  a2[2] = v27;
  a2[3] = (float)((float)(v26 + (float)(v5 * v21)) - (float)(v7 * v19)) -
          (float)(v4 * v22);
  a2[6] = v28 + v20;
  {
    v28 + v20;
    return;
  }
}

__int64 physx_NpArticulationJointReducedCoordinate_setChildPose(__int64 a1,
                                                                float* a2)
{
  __int64 v2;
  __int64 v3;
  float* v5;
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
  float v25[7];

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0 && *(_BYTE*)(v2 + 1002) == 1) {
    v3 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v3 + 88LL))(
        v3, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/"
        "NpArticulationJointReducedCoordinate.cpp",
        430,
        "PxArticulationJointReducedCoordinate::setChildPose() not allowed "
        "while simulation is running. Call will be ignored.");
  }
  else {
    v5 = *(float**)(a1 + 440);
    v8 = v5[36];
    v9 = v5[37];
    v10 = v5[38];
    v12 = v5[32];
    v11 = v5[33];
    v13 = v5[34];
    v14 = v5[35];
    v15 = 0x1.0000000000000p+0f / sqrtf(a1);
    v16 = (float)(v14 * v14) + -0x1.0000000000000p-1f;
    v17 = (float)(a2[6] - v10) + (float)(a2[6] - v10);
    v18 = *a2 * v15;
    v19 = v15 * a2[1];
    v20 = v15 * a2[2];
    v21 = v15 * a2[3];
    v22 = (float)(a2[5] - v9) + (float)(a2[5] - v9);
    v23 = (float)(a2[4] - v8) + (float)(a2[4] - v8);
    v24 = (float)((float)-(float)(PSEUDO_UNFUSED(v11 * v22)) -
                  (float)(v12 * v23)) -
          (float)(v13 * v17);
    v25[4] = (float)((float)(PSEUDO_UNFUSED(
                         v14 * (float)((float)(PSEUDO_UNFUSED(v13 * v22)) -
                                       (float)(v11 * v17)))) +
                     (float)(v23 * v16)) -
             (float)(v12 * v24);
    v25[5] = (float)((float)(PSEUDO_UNFUSED(
                         v14 * (float)((float)(PSEUDO_UNFUSED(v12 * v17)) -
                                       (float)(v13 * v23)))) +
                     (float)(v22 * v16)) -
             (float)(v11 * v24);
    v25[0] = (float)((float)((float)(v14 * v18) -
                             (float)(PSEUDO_UNFUSED(v12 * v21))) -
                     (float)(v11 * v20)) +
             (float)(v19 * v13);
    v25[1] = (float)((float)((float)(v14 * v19) -
                             (float)(PSEUDO_UNFUSED(v11 * v21))) -
                     (float)(v13 * v18)) +
             (float)(v20 * v12);
    v25[2] = (float)((float)((float)(v14 * v20) -
                             (float)(PSEUDO_UNFUSED(v13 * v21))) -
                     (float)(v12 * v19)) +
             (float)(v18 * v11);
    v25[3] = (float)((float)((float)(PSEUDO_UNFUSED(v12 * v18)) +
                             (float)(v14 * v21)) +
                     (float)(v11 * v19)) +
             (float)(v13 * v20);
    v25[6] = (float)((float)(PSEUDO_UNFUSED(
                         v14 * (float)((float)(PSEUDO_UNFUSED(v11 * v23)) -
                                       (float)(v12 * v22)))) +
                     (float)(v17 * v16)) -
             (float)(v13 * v24);
    return GameRoutine_3106f0(a1 + 48, v25);
  }
}

float physx_NpArticulationJointReducedCoordinate_getJointPosition(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float result;
  _BYTE* v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0 && *(_BYTE*)(v2 + 1001) == 1 && (*(_BYTE*)(v2 + 6008) & 1) == 0) {
    v4 = PxGetFoundation_alt1(a1, a2);
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v4 + 88LL))(
        v4, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/"
        "NpArticulationJointReducedCoordinate.cpp",
        474,
        "PxArticulationJointReducedCoordinate::getJointPosition() not allowed "
        "while simulation is running, except in a spli"
        "t simulation during PxScene::collide() and up to PxScene::advance().");
    return 0.0f;
  }
  else {
    v3 = a1 + 48;
    result = *(float*)(v3 + 4LL * (unsigned int)a2 + 272);
    v6 = **(_BYTE***)(v3 + 360);
    if (v6 != nullptr && v6[148] == 1) {
      v7 = *(unsigned __int8*)(v3 + (unsigned int)a2 + 344);
      if (v7 != 255) {
        return *(
            float*)(*(_QWORD*)(*(_QWORD*)v6 + 256LL) +
                    4LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)v6 + 968LL) +
                                           8LL * *(unsigned int*)(v3 + 376)) +
                    4 * v7);
      }
    }
  }
  return result;
}

float physx_NpArticulationJointReducedCoordinate_getJointVelocity(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float result;
  _BYTE* v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0 && *(_BYTE*)(v2 + 1001) == 1 && (*(_BYTE*)(v2 + 6008) & 1) == 0) {
    v4 = PxGetFoundation_alt1(a1, a2);
    (*(void (**)(__int64, __int64, const char*, __int64, const char*))(
        *(_QWORD*)v4 + 88LL))(
        v4, 8,
        "/Inside/Lib/PhysX/O/physx/source/physx/src/"
        "NpArticulationJointReducedCoordinate.cpp",
        506,
        "PxArticulationJointReducedCoordinate::getJointVelocity() not allowed "
        "while simulation is running, except in a spli"
        "t simulation during PxScene::collide() and up to PxScene::advance().");
    return 0.0f;
  }
  else {
    v3 = a1 + 48;
    result = *(float*)(v3 + 4LL * (unsigned int)a2 + 296);
    v6 = **(_BYTE***)(v3 + 360);
    if (v6 != nullptr && v6[148] == 1) {
      v7 = *(unsigned __int8*)(v3 + (unsigned int)a2 + 344);
      if (v7 != 255) {
        return *(
            float*)(*(_QWORD*)(*(_QWORD*)v6 + 224LL) +
                    4LL * *(unsigned int*)(*(_QWORD*)(*(_QWORD*)v6 + 968LL) +
                                           8LL * *(unsigned int*)(v3 + 376)) +
                    4 * v7);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
