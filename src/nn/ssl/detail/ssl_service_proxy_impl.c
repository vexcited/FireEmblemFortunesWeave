#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_5cbd20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_5cc220(_QWORD, _QWORD);
__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 cmif_client_buffer_message_5ce3a0(_QWORD, _QWORD);
__int64 ssl_service_proxy_5cbc00(__int64 a1, __int64* a2, unsigned int a3,
                                 __int64 a4);
__int64 ssl_service_proxy_5cc050(__int64 a1, __int64* a2);

__int64 ssl_service_proxy_5cbc00(__int64 a1, __int64* a2, unsigned int a3,
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
  cmif_client_buffer_message_5ce3a0(&v12, 0);
  if (v13 == nullptr) {
    v9 = 5642;
    v10 = v14;
    if (v14 == 0) {
      return v9;
    }
    goto LABEL_3;
  }
  v12 = *a2;
  v9 = SdkRoutine_5cbd20(a1 + 8, &v12, a3, a4, 100, &v14);
  v10 = v14;
  if (v14 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  return v9;
}

__int64 ssl_service_proxy_5cc050(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  __int64* v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 48);
  v10 = 0;
  v8 = v2;
  v9 = &v10;
  SdkRoutine_5cc220(&v8, 0);
  if (v9 == nullptr) {
    v5 = 5642;
    v6 = v10;
    if (v10 == 0) {
      return v5;
    }
    goto LABEL_3;
  }
  v8 = *a2;
  v5 = SdkRoutine_e3b70(a1 + 8, &v8, 2, &v10);
  v6 = v10;
  if (v10 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  return v5;
}

#pragma GCC visibility pop
