#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* computeMassAndDiagInertia(__int64, __int64, _QWORD*, float*, float*,
                                  char, __int64, const char*);
__int64 PxGetFoundation();
__int64 computeMassAndInertia(float*, char, __int64, float*, float*,
                              unsigned int, char);
__int64 physx_Ext_InertiaTensorComputer_Destroy_InertiaTensorComputer(_QWORD);
__int64
physx_Ext_InertiaTensorComputer_InertiaTensorComputer_556f80(__int64 result,
                                                             char);
__int64 updateMassAndInertia(__int64 a1, float* a2, unsigned int a3, int* a4,
                             char a5);

__int64 updateMassAndInertia(__int64 a1, float* a2, unsigned int a3, int* a4,
                             char a5)
{

#pragma clang fp contract(off)
  __int64 v10;
  int v15;
  int v16;
  int v17;
  float v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void (*v24)(__int64, int*);
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  float v32;
  struct {
    int v33;
    int v34;
    int v35;
  } v33_;
  __int128 v36;
  _DWORD v37[3];
  struct {
    char gap88_[4];
    float v38;
    __int64 v39;
  } v38_;

  v38_.v39 = v10;
  v37[2] = 1065353216;
  v38_.v38 = 0x1.0000000000000p+0f;
  *(_QWORD*)v37 = 0x3F8000003F800000LL;
  *(_QWORD*)&v36 = 0;
  *((_QWORD*)&v36 + 1) = 0x3F80000000000000LL;
  if (a4 != nullptr) {
    v15 = *a4;
    v16 = a4[1];
    v17 = a4[2];
    v33_.v33 = *a4;
    v33_.v34 = v16;
    v33_.v35 = v17;
    if (a2 == nullptr) {
      goto LABEL_9;
    }
  }
  else {
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v33_.v33 = 0;
    v33_.v34 = 0;
    v33_.v35 = 0;
    if (a2 == nullptr) {
      goto LABEL_9;
    }
  }
  if (a3 != 0) {
    physx_Ext_InertiaTensorComputer_InertiaTensorComputer_556f80((__int64)&v26,
                                                                 1);
    if ((computeMassAndInertia((float*)&v26, 1, a1, a2, nullptr, a3, a5 & 1) &
         1) != 0) {
      if (v32 != 0x0.0p+0f) {
        computeMassAndDiagInertia((__int64)&v26, (__int64)v37, &v36, &v38_.v38,
                                  (float*)&v33_.v33, a4 != nullptr, a1,
                                  "PxRigidBodyExt::updateMassAndInertia");
        v19 = v38_.v38;
        v15 = v33_.v33;
        v16 = v33_.v34;
        v17 = v33_.v35;
        v20 = 1;
      LABEL_12:
        physx_Ext_InertiaTensorComputer_Destroy_InertiaTensorComputer(&v26);
        goto LABEL_13;
      }
    }
    else {
      v22 = PxGetFoundation();
      (*(void (**)(__int64, __int64, const char*, __int64, const char*, ...))(
          *(_QWORD*)v22 + 88LL))(v22, 4,
                                 "/Inside/Lib/PhysX/O/physx/source/"
                                 "physxextensions/src/ExtRigidBodyExt.cpp",
                                 280,
                                 "%s: Mass and inertia computation failed, "
                                 "setting mass to 1 and inertia to (1,1,1)",
                                 "PxRigidBodyExt::updateMassAndInertia");
    }
    v19 = 0x1.0000000000000p+0f;
    v20 = 0;
    goto LABEL_12;
  }
LABEL_9:
  v21 = PxGetFoundation();
  (*(void (**)(__int64, __int64, const char*, __int64, const char*, ...))(
      *(_QWORD*)v21 + 88LL))(
      v21, 4,
      "/Inside/Lib/PhysX/O/physx/source/physxextensions/src/"
      "ExtRigidBodyExt.cpp",
      288, "%s: No density specified, setting mass to 1 and inertia to (1,1,1)",
      "PxRigidBodyExt::updateMassAndInertia");
  v19 = 0x1.0000000000000p+0f;
  v20 = 0;
LABEL_13:
  (*(void (**)(__int64, float))(*(_QWORD*)a1 + 256LL))(a1, v19);
  (*(void (**)(__int64, _DWORD*))(*(_QWORD*)a1 + 280LL))(a1, v37);
  v30 = v16;
  v31 = v17;
  v27 = *(_QWORD*)((char*)&v36 + 4);
  v23 = *(_QWORD*)a1;
  v26 = v36;
  v24 = *(void (**)(__int64, int*))(v23 + 240);
  v28 = HIDWORD(v36);
  v29 = v15;
  v24(a1, &v26);
  return v20;
}

#pragma GCC visibility pop
