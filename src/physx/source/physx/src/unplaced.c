#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2d8750(_QWORD, _QWORD);
__int64 PxGetFoundation(_QWORD);
void GameRoutine_2f3390();
__int64 physx_source_physx_src_2dc9d0(__int64 a1, _DWORD* a2);
__int64 physx_source_physx_src_2ec130(__int64 a1);
__int64 physx_source_physx_src_2f32e0(__int64 a1, __int64 a2, __int64 a3,
                                      long double a4);
__attribute__((swiftcall)) void
physx_source_physx_src_2f3780(__attribute__((swift_indirect_result)) void* x8_,
                              __int64 a1);

__int64 physx_source_physx_src_2dc9d0(__int64 a1, _DWORD* a2)
{
  __int64 v4;
  int v5;

  if ((*(_BYTE*)(a1 + 1002) & 1) != 0) {
    GameRoutine_2d8750(2208, "PxScene::getActiveActors() not allowed while "
                             "simulation is running. Call will be ignored.");
    *a2 = 0;
    return 0;
  }
  else {
    v4 = a1 + 1120;
    v5 = *(_DWORD*)(v4 + 1144);
    *a2 = v5;
    if (v5 != 0) {
      return *(_QWORD*)(v4 + 1136);
    }
    else {
      return 0;
    }
  }
}

__int64 physx_source_physx_src_2ec130(__int64 a1)
{
  __int64 v1;

  v1 = PxGetFoundation(a1);
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v1 + 88LL))(
      v1, 2, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpShape.cpp", 566,
      "PxShape::getMaterialFromInternalFaceIndex received 0xFFFFffff as input "
      "- returning NULL.");
}

__int64 physx_source_physx_src_2f32e0(__int64 a1, __int64 a2, __int64 a3,
                                      long double a4)
{
  __int64 v4;
  __int64 v5;
  float v7;
  bool v8;
  const char* v9;
  __int64 v10;
  const char* v11;
  unsigned int v12;
  __int64 v13;

  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v4 + 1002) == 1) {
    v5 = PxGetFoundation(a1);
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v5 + 88LL))(
        v5, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpDirectGPUAPI.cpp",
        63,
        "PxDirectGPUAPI::getRigidDynamicData(): not allowed while simulation "
        "is running. Call will be ignored.");
  }
  if ((*(_BYTE*)(v4 + 6009) & 1) == 0) {
    v9 = "PxDirectGPUAPI::getRigidDynamicData(): it is illegal to call this "
         "function if the scene is not configured for d"
         "irect-GPU access or the direct-GPU API has not been initialized yet.";
    v10 = 66;
  LABEL_11:
    v11 = v9;
    v12 = v10;
    v13 = PxGetFoundation(v10);
    return (*(__int64 (**)(__int64, __int64, const char*, _QWORD, const char*))(
        *(_QWORD*)v13 + 88LL))(
        v13, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpDirectGPUAPI.cpp",
        v12, v11);
  }
  if (a2 == 0 || a3 == 0) {
    v9 = "PxDirectGPUAPI::getRigidDynamicData(): data and/or gpuIndices has to "
         "be valid pointer.";
    v10 = 69;
    goto LABEL_11;
  }
  v7 = *(float*)(v4 + 648);
  v8 = v7 == 0.0;
  *(float*)&a4 = 1.0 / v7;
  if (v8) {
    *(float*)&a4 = 0.0;
  }
  return (*(__int64 (**)(_QWORD, long double))(
      **(_QWORD**)(v4 + 1488) + 336LL))(*(_QWORD*)(v4 + 1488), a4);
}

__attribute__((swiftcall)) void

physx_source_physx_src_2f3780(__attribute__((swift_indirect_result)) void* x8_,
                              __int64 a1)
{
  _QWORD* a2 = (_QWORD*)(unsigned __int64)x8_;
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v2 + 6009) & 1) != 0) {
    (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 1488) + 392LL))(
        *(_QWORD*)(v2 + 1488));
    return;
  }
  result = ((__int64 (*)(__int64, const char*))GameRoutine_2f3390)(
      166, "PxDirectGPUAPI::getArticulationGPUAPIMaxCounts(): it is illegal to "
           "call this function if the scene is not c"
           "onfigured for direct-GPU access or the direct-GPU API has not been "
           "initialized yet.");
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
