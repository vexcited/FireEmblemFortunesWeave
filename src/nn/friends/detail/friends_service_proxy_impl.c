#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_460950(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_460b70(_QWORD, _QWORD);
__int64 friends_service_proxy_45b900(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4);

__int64 friends_service_proxy_45b900(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4)
{
  __int64 v4;
  unsigned int v9;
  __int64 v10;
  __int64 v12;
  __int64* v13;
  __int64 v14;

  v4 = *(_QWORD*)(a1 + 48);
  v14 = 0;
  v12 = v4;
  v13 = &v14;
  SdkRoutine_460b70(&v12, 0);
  if (v13 == nullptr) {
    v9 = 5642;
    v10 = v14;
    if (v14 == 0) {
      return v9;
    }
    goto LABEL_3;
  }
  v12 = *a2;
  v9 = SdkRoutine_460950(a1 + 8, &v12, a3, a4, 31000, &v14);
  v10 = v14;
  if (v14 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  return v9;
}

#pragma GCC visibility pop
