#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetFoundation();
__int64 physx_NpScene_sceneQueriesUpdate(__int64 a1, __int64 a2, char a3);

__int64 physx_NpScene_sceneQueriesUpdate(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 vars0;
  __int64 _8;
  __int64 vars20;
  __int64 _28;

  if (*(_BYTE*)(a1 + 1040) == 1) {
    vars20 = vars0;
    _28 = _8;
    v12 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v12 + 88LL))(
        v12, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpSceneQueries.cpp",
        711, "PxScene::fetchSceneQueries was not called!");
  }
  v3 = *(_QWORD*)(a1 + 24);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
  v7 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 224LL))(v3, 0);
  v8 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 224LL))(v3, 1);
  *(_QWORD*)(a1 + 984) = v7;
  *(_QWORD*)(a1 + 992) = v8;
  *(_BYTE*)(a1 + 1040) = 1;
  if ((a3 & 1) != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 656) + 16LL))(*(_QWORD*)(a1 + 656));
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 656) + 24LL))(*(_QWORD*)(a1 + 656));
  }
  v9 = *(_QWORD*)(a1 + 656);
  v10 = a1 + 768;
  *(_DWORD*)(a1 + 800) = 1;
  *(_QWORD*)(a1 + 792) = a2;
  *(_QWORD*)(a1 + 784) = v9;
  if (a2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  }
  if (v7 != 0) {
    *(_DWORD*)(a1 + 72) = 1;
    *(_QWORD*)(a1 + 64) = v10;
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 768) + 32LL))(a1 + 768);
    *(_QWORD*)(a1 + 56) = *(_QWORD*)(a1 + 784);
  }
  if (v8 != 0) {
    *(_DWORD*)(a1 + 128) = 1;
    *(_QWORD*)(a1 + 120) = v10;
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 768) + 32LL))(a1 + 768);
    v11 = *(_QWORD*)(a1 + 784);
    *(_QWORD*)(a1 + 112) = v11;
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 144LL))(
        v11, a1 + 768);
    if (v7 == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 784) + 144LL))(
      *(_QWORD*)(a1 + 784), a1 + 768);
  if (v7 != 0) {
  LABEL_11:
    result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 56) + 144LL))(
        *(_QWORD*)(a1 + 56), a1 + 40);
  }
LABEL_12:
  if (v8 != 0) {
    return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 112) + 144LL))(
        *(_QWORD*)(a1 + 112), a1 + 96);
  }
  return result;
}

#pragma GCC visibility pop
