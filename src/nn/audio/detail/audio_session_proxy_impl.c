#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1e58c0(_QWORD);
__int64 nn_sf_cmif_client_1e6580(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD,
                                 _QWORD);
__int64 audio_session_proxy_1e52b0(__int64 a1, __int64* a2, __int64* a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   _QWORD* a7, __int64 a8);

__int64 audio_session_proxy_1e52b0(__int64 a1, __int64* a2, __int64* a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   _QWORD* a7, __int64 a8)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v22;
  __int64* v23;
  __int64 v24;

  v24 = 0;
  v22 = 0;
  v23 = &v24;
  SdkRoutine_1e58c0(&v22);
  if (v23 == nullptr) {
    v19 = 5642;
    v20 = v24;
    if (v24 == 0) {
      return v19;
    }
    goto LABEL_3;
  }
  v17 = *a3;
  v18 = a3[1];
  v22 = *a2;
  v19 = nn_sf_cmif_client_1e6580(a1 + 8, &v22, v17, v18, a4, a5, a6, v16, *a7,
                                 a7[1], a8, 3, &v24);
  v20 = v24;
  if (v24 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  return v19;
}

#pragma GCC visibility pop
