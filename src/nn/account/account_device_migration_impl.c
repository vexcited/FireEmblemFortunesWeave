#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_85fa00(_QWORD, _QWORD);
__int64 nn_account_AsyncContext_AsyncContext_plt_85f9f0(_QWORD, _QWORD);
__int64 nn_account_AsyncContext_Destroy_AsyncContext_plt_85fa10(_QWORD);
__int64 nn_account_DeviceMigrationUserImporter_RegisterAllUsers(__int64* a1,
                                                                __int64 a2,
                                                                __int64 a3,
                                                                __int64 a4);

__int64 nn_account_DeviceMigrationUserImporter_RegisterAllUsers(__int64* a1,
                                                                __int64 a2,
                                                                __int64 a3,
                                                                __int64 a4)
{
  __int64 v4;
  unsigned int v6;
  __int64 v7;
  _QWORD v9[4];
  __int64 v10;
  __int64* v11;

  v4 = *a1;
  v9[0] = a3;
  v9[1] = a4;
  v10 = 0;
  v11 = &v10;
  v6 = (*(__int64 (**)(__int64, __int64**, _QWORD*))(*(_QWORD*)v4 + 120LL))(
      v4, &v11, v9);
  if (v6 == 0) {
    v7 = v10;
    v10 = 0;
    nn_account_AsyncContext_AsyncContext_plt_85f9f0(v9, v7);
    SdkRoutine_85fa00(a2, v9);
    nn_account_AsyncContext_Destroy_AsyncContext_plt_85fa10(v9);
  }
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  return v6;
}

#pragma GCC visibility pop
