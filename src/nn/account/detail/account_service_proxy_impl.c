#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_1b77e0(_QWORD* result);
_QWORD* SdkRoutine_1b7d20_alt1(_QWORD* result) __asm__("SdkRoutine_1b7d20");
__int64 SdkRoutine_1adad0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1b6ce0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1b7890(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_1b7a80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1b7d20(_QWORD);
__int64 SdkRoutine_1b8140(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1b9830(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1b9ef0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1ba840(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1bac70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_1bcfd0(_QWORD);
__int64 SdkRoutine_1bd900(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_1bef00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1bf880(_QWORD);
__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 account_service_proxy_1bd1f0(_QWORD);
__int64 account_service_proxy_1be6b0(_QWORD);
__int64 nn_sf_cmif_client_1beab0(_QWORD);
__int64 nn_sf_cmif_client_1bf160(_QWORD);
__int64 nn_sf_cmif_client_1bf230(_QWORD);
__int64 nn_sf_cmif_client_1bf2e0(_QWORD);
__int64 account_service_proxy_1b7620(__int64 a1, __int64 a2, _QWORD* a3);
__int64 account_service_proxy_1b7660(__int64 a1, __int64 a2, __int64 a3,
                                     _QWORD* a4);
__int64 account_service_proxy_1b7680(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, unsigned int a5);
__int64 account_service_proxy_1b8770(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4);
__int64 account_service_proxy_1b8e10(__int64 a1, __int64 a2, __int64 a3,
                                     _QWORD* a4);
__int64 account_service_proxy_1b8ec0(__int64 a1, __int64 a2, __int64* a3,
                                     unsigned int a4);
__int64 account_service_proxy_1b9020(__int64 a1, __int64 a2, __int64* a3,
                                     unsigned int a4);
__int64 account_service_proxy_1b90d0(__int64 a1, __int64 a2, __int64 a3,
                                     _QWORD* a4);
__int64 account_service_proxy_1b9190(__int64 a1, __int64 a2, __int64* a3,
                                     unsigned int a4);
__int64 account_service_proxy_1b9250(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, __int64 a5, unsigned int a6);
__int64 account_service_proxy_1ba3d0(__int64 a1, __int64* a2, __int64* a3);
__int64 account_service_proxy_1bbd60(__int64 a1, __int64* a2, __int64 a3,
                                     unsigned int a4);
__int64 account_service_proxy_1bbe10(__int64 a1, __int64* a2, __int64 a3,
                                     unsigned int a4);
__int64 account_service_proxy_1bbec0(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, unsigned int a5);
__int64 account_service_proxy_1bbf80(__int64 a1, __int64* a2, __int64 a3,
                                     unsigned int a4);
__int64 account_service_proxy_1bc030(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, unsigned int a5);
__int64 account_service_proxy_1bc0f0(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, unsigned int a5);
__int64 account_service_proxy_1bc370(__int64 a1, __int64* a2, __int64 a3);
__int64 account_service_proxy_1bc410(__int64 a1, __int64* a2, __int64 a3);
__int64 account_service_proxy_1bc4b0(__int64 a1, __int64* a2, __int64 a3);
__int64 account_service_proxy_1bc550(__int64 a1, __int64* a2, __int64 a3);
__int64 account_service_proxy_1bc7d0(__int64 a1, __int64* a2, __int64 a3,
                                     unsigned int a4);
__int64 account_service_proxy_1bd3c0(__int64 a1, __int64* a2, __int64* a3);
__int64 account_service_proxy_1bddb0(__int64 a1, __int64 a2, __int64* a3,
                                     unsigned int a4);
__int64 account_service_proxy_1bdf00(__int64 a1, __int64* a2);
__int64 account_service_proxy_1bdf90(__int64 a1, __int64* a2, __int64 a3);
__int64 account_service_proxy_1be030(__int64 a1, __int64* a2);
__int64 account_service_proxy_1be0c0(__int64 a1, __int64* a2, __int64 a3);
__int64 account_service_proxy_1be160(__int64 a1, __int64* a2);
__int64 account_service_proxy_1be1f0(__int64 a1, __int64* a2, __int64 a3);
__int64 account_service_proxy_1be290(__int64 a1, __int64* a2, __int64 a3);
__int64 account_service_proxy_1be550(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, __int64* a5);

__int64 account_service_proxy_1b7620(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_1b6ce0(a1 + 8, a2, *a3, a3[1], 3);
}

__int64 account_service_proxy_1b7660(__int64 a1, __int64 a2, __int64 a3,
                                     _QWORD* a4)
{
  return SdkRoutine_1b7890(a1 + 8, a2, a3, 104, *a4, a4[1], 130);
}

__int64 account_service_proxy_1b7680(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, unsigned int a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = 0;
  v14 = &v15;
  SdkRoutine_1b7d20(&v13);
  if (v14 == nullptr) {
    v10 = 5642;
    v11 = v15;
    if (v15 == 0) {
      return v10;
    }
    goto LABEL_3;
  }
  v13 = *a2;
  v10 = ((__int64 (*)(__int64, __int64*, __int64, __int64, __int64, _QWORD,
                      __int64, __int64*))SdkRoutine_1b7a80)(
      a1 + 8, &v13, a3, 512, a4, a5, 150, &v15);
  v11 = v15;
  if (v15 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v10;
}

__int64 account_service_proxy_1b8770(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1b77e0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_1bac70(a1 + 8, &v11, a3, 16, a4, 105, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1b8e10(__int64 a1, __int64 a2, __int64 a3,
                                     _QWORD* a4)
{
  return SdkRoutine_1b7890(a1 + 8, a2, a3, 592, *a4, a4[1], 130);
}

__int64 account_service_proxy_1b8ec0(__int64 a1, __int64 a2, __int64* a3,
                                     unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1b77e0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a3;
  v8 = SdkRoutine_1b9830(a1 + 8, a2, &v11, a4, 132, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1b9020(__int64 a1, __int64 a2, __int64* a3,
                                     unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1b77e0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a3;
  v8 = SdkRoutine_1b9830(a1 + 8, a2, &v11, a4, 135, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1b90d0(__int64 a1, __int64 a2, __int64 a3,
                                     _QWORD* a4)
{
  return SdkRoutine_1b7890(a1 + 8, a2, a3, 624, *a4, a4[1], 136);
}

__int64 account_service_proxy_1b9190(__int64 a1, __int64 a2, __int64* a3,
                                     unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1b77e0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a3;
  v8 = SdkRoutine_1b9830(a1 + 8, a2, &v11, a4, 142, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1b9250(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, __int64 a5, unsigned int a6)
{
  unsigned int v12;
  __int64 v13;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = 0;
  v16 = &v17;
  SdkRoutine_1b7d20_alt1(&v15);
  if (v16 == nullptr) {
    v12 = 5642;
    v13 = v17;
    if (v17 == 0) {
      return v12;
    }
    goto LABEL_3;
  }
  v15 = *a2;
  v12 = ((__int64 (*)(__int64, __int64*, __int64, __int64, __int64, __int64,
                      __int64, _QWORD, int, __int64*))SdkRoutine_1b9ef0)(
      a1 + 8, &v15, a3, 264, a4, 512, a5, a6, 150, &v17);
  v13 = v17;
  if (v17 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v12;
}

__int64 account_service_proxy_1ba3d0(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1b77e0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v6 = *a3;
  v7 = a3[1];
  v11 = *a2;
  v8 = SdkRoutine_1ba840(a1 + 8, &v11, v6, v7, 3, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1bbd60(__int64 a1, __int64* a2, __int64 a3,
                                     unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1bcfd0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_1b8140(a1 + 8, &v11, a3, a4, 210, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1bbe10(__int64 a1, __int64* a2, __int64 a3,
                                     unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  account_service_proxy_1bd1f0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_1b8140(a1 + 8, &v11, a3, a4, 211, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1bbec0(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, unsigned int a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = 0;
  v14 = &v15;
  account_service_proxy_1bd1f0(&v13);
  if (v14 == nullptr) {
    v10 = 5642;
    v11 = v15;
    if (v15 == 0) {
      return v10;
    }
    goto LABEL_3;
  }
  v13 = *a2;
  v10 = SdkRoutine_1bd900(a1 + 8, &v13, a3, a4, a5, 212, &v15);
  v11 = v15;
  if (v15 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v10;
}

__int64 account_service_proxy_1bbf80(__int64 a1, __int64* a2, __int64 a3,
                                     unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  account_service_proxy_1bd1f0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_1b8140(a1 + 8, &v11, a3, a4, 213, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1bc030(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, unsigned int a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = 0;
  v14 = &v15;
  account_service_proxy_1bd1f0(&v13);
  if (v14 == nullptr) {
    v10 = 5642;
    v11 = v15;
    if (v15 == 0) {
      return v10;
    }
    goto LABEL_3;
  }
  v13 = *a2;
  v10 = SdkRoutine_1bd900(a1 + 8, &v13, a3, a4, a5, 214, &v15);
  v11 = v15;
  if (v15 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v10;
}

__int64 account_service_proxy_1bc0f0(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, unsigned int a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = 0;
  v14 = &v15;
  account_service_proxy_1bd1f0(&v13);
  if (v14 == nullptr) {
    v10 = 5642;
    v11 = v15;
    if (v15 == 0) {
      return v10;
    }
    goto LABEL_3;
  }
  v13 = *a2;
  v10 = SdkRoutine_1bd900(a1 + 8, &v13, a3, a4, a5, 215, &v15);
  v11 = v15;
  if (v15 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v10;
}

__int64 account_service_proxy_1bc370(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  nn_sf_cmif_client_1bf160(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1adad0(a1 + 8, &v9, a3, 290, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 account_service_proxy_1bc410(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  nn_sf_cmif_client_1bf160(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1adad0(a1 + 8, &v9, a3, 291, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 account_service_proxy_1bc4b0(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  nn_sf_cmif_client_1bf230(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1adad0(a1 + 8, &v9, a3, 292, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 account_service_proxy_1bc550(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  nn_sf_cmif_client_1bf2e0(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1adad0(a1 + 8, &v9, a3, 293, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 account_service_proxy_1bc7d0(__int64 a1, __int64* a2, __int64 a3,
                                     unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1bf880(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_1b8140(a1 + 8, &v11, a3, a4, 352, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1bd3c0(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1b77e0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v6 = *a3;
  v7 = a3[1];
  v11 = *a2;
  v8 = SdkRoutine_1ba840(a1 + 8, &v11, v6, v7, 200, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1bddb0(__int64 a1, __int64 a2, __int64* a3,
                                     unsigned int a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_1b77e0(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a3;
  v8 = SdkRoutine_1b9830(a1 + 8, a2, &v11, a4, 222, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 account_service_proxy_1bdf00(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  account_service_proxy_1be6b0(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 251, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 account_service_proxy_1bdf90(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  account_service_proxy_1be6b0(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1adad0(a1 + 8, &v9, a3, 252, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 account_service_proxy_1be030(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_sf_cmif_client_1beab0(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 255, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 account_service_proxy_1be0c0(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  nn_sf_cmif_client_1beab0(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1adad0(a1 + 8, &v9, a3, 256, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 account_service_proxy_1be160(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_sf_cmif_client_1beab0(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 260, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 account_service_proxy_1be1f0(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  nn_sf_cmif_client_1beab0(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1adad0(a1 + 8, &v9, a3, 261, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 account_service_proxy_1be290(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  nn_sf_cmif_client_1beab0(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_1adad0(a1 + 8, &v9, a3, 280, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 account_service_proxy_1be550(__int64 a1, __int64* a2, __int64 a3,
                                     __int64 a4, __int64* a5)
{
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = 0;
  v16 = &v17;
  SdkRoutine_1b77e0(&v15);
  if (v16 == nullptr) {
    v12 = 5642;
    v13 = v17;
    if (v17 == 0) {
      return v12;
    }
    goto LABEL_3;
  }
  v10 = *a5;
  v11 = a5[1];
  v15 = *a2;
  v12 = ((__int64 (*)(__int64, __int64*, __int64, __int64, __int64, __int64,
                      __int64, __int64*))SdkRoutine_1bef00)(
      a1 + 8, &v15, a3, a4, v10, v11, 901, &v17);
  v13 = v17;
  if (v17 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v12;
}

#pragma GCC visibility pop
