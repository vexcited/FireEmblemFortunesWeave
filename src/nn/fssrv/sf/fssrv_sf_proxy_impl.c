#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_e3d60(_QWORD);
__int64 SdkRoutine_e4870(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 SdkRoutine_e4ad0(_QWORD);
__int64 SdkRoutine_e6380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 SdkRoutine_e6820(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 SdkRoutine_e7150(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_e9060(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_ea1c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 SdkRoutine_eb490(_QWORD);
__int64 SdkRoutine_ec290(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 SdkRoutine_ec530(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_ec780(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_ec9f0(_QWORD);
__int64 SdkRoutine_ed700(_QWORD);
__int64 SdkRoutine_ee5e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 SdkRoutine_ee820(_QWORD);
__int64 SdkRoutine_eedb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_eeff0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 SdkRoutine_f0d50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_f1290(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 SdkRoutine_f1c50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_f1f70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_f3200(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_f3410(_QWORD);
__int64 cmif_client_object_buffer_message_e6ca0(_QWORD);
__int64 nn_sf_cmif_client_e8f90(_QWORD);
__int64 nn_sf_cmif_client_f2f80(_QWORD);
__int64 fssrv_sf_proxy_e12c0(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                             unsigned int a5);
__int64 fssrv_sf_proxy_e1420(__int64 a1, __int64* a2, __int64 a3,
                             unsigned __int8 a4, __int64 a5, unsigned int a6);
__int64 fssrv_sf_proxy_e14f0(__int64 a1, __int64* a2, __int64 a3,
                             unsigned int a4);
__int64 fssrv_sf_proxy_e1650(__int64 a1, __int64* a2, __int64 a3);
__int64 fssrv_sf_proxy_e19e0(__int64 a1, __int64* a2, __int64 a3,
                             unsigned int a4);
__int64 fssrv_sf_proxy_e1d40(__int64 a1, __int64* a2);
__int64 fssrv_sf_proxy_e1e70(__int64 a1, __int64* a2);
__int64 fssrv_sf_proxy_e2120(__int64 a1, __int64* a2, unsigned __int8 a3,
                             __int64 a4, unsigned int a5);
__int64 fssrv_sf_proxy_e23d0(__int64 a1, __int64* a2);
__int64 fssrv_sf_proxy_e2460(__int64 a1, __int64* a2, unsigned __int8 a3,
                             unsigned __int8 a4, __int64 a5, __int64 a6);
__int64 fssrv_sf_proxy_e25b0(__int64 a1, __int64* a2, unsigned __int8 a3);
__int64 fssrv_sf_proxy_e2ac0(__int64 a1, __int64* a2);
__int64 fssrv_sf_proxy_e2b50(__int64 a1, __int64* a2, unsigned __int8 a3);
__int64 fssrv_sf_proxy_e2bf0(__int64 a1, __int64* a2, unsigned __int8 a3);
__int64 fssrv_sf_proxy_e2c90(__int64 a1, __int64* a2, __int64 a3,
                             unsigned __int8 a4, unsigned int a5);
__int64 fssrv_sf_proxy_e2d50(__int64 a1, __int64* a2, __int64 a3,
                             unsigned __int8 a4);
__int64 fssrv_sf_proxy_e31a0(__int64 a1, __int64 a2, _QWORD* a3);
__int64 fssrv_sf_proxy_e3220(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             unsigned __int8 a5);
__int64 fssrv_sf_proxy_e32c0(__int64 a1, __int64 a2, __int64 a3,
                             unsigned __int8 a4);
__int64 fssrv_sf_proxy_e3340(__int64 a1, __int64 a2, __int64 a3,
                             unsigned __int8 a4);
__int64 fssrv_sf_proxy_e36d0(__int64 a1, __int64* a2);
__int64 fssrv_sf_proxy_e3760(__int64 a1, __int64* a2, __int64 a3, __int64 a4);
__int64 fssrv_sf_proxy_eb060(__int64 a1, __int64* a2, __int64* a3,
                             unsigned __int8 a4, __int64 a5);
__int64 fssrv_sf_proxy_eb120(__int64 a1, __int64* a2, __int64* a3);
__int64 fssrv_sf_proxy_eb1c0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                             unsigned __int8 a5);
__int64 fssrv_sf_proxy_eb280(__int64 a1, __int64* a2, __int64* a3);

__int64 fssrv_sf_proxy_e12c0(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                             unsigned int a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = 0;
  v14 = &v15;
  SdkRoutine_e3d60(&v13);
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
                      __int64, __int64*))SdkRoutine_e6380)(
      a1 + 8, &v13, a3, 769, a4, a5, 8, &v15);
  v11 = v15;
  if (v15 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v10;
}

__int64 fssrv_sf_proxy_e1420(__int64 a1, __int64* a2, __int64 a3,
                             unsigned __int8 a4, __int64 a5, unsigned int a6)
{
  unsigned int v12;
  __int64 v13;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = 0;
  v16 = &v17;
  SdkRoutine_e3d60(&v15);
  if (v16 == nullptr) {
    v12 = 5642;
    v13 = v17;
    if (v17 == 0) {
      return v12;
    }
    goto LABEL_3;
  }
  v15 = *a2;
  v12 = SdkRoutine_e6820(a1 + 8, &v15, a3, 769, a4, a5, a6, 10, &v17);
  v13 = v17;
  if (v17 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v12;
}

__int64 fssrv_sf_proxy_e14f0(__int64 a1, __int64* a2, __int64 a3,
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
  SdkRoutine_e3d60(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_e4870(a1 + 8, &v11, a3, 769, a4, 11, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 fssrv_sf_proxy_e1650(__int64 a1, __int64* a2, __int64 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  SdkRoutine_e3d60(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_e7150(a1 + 8, &v9, a3, 769, 17, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 fssrv_sf_proxy_e19e0(__int64 a1, __int64* a2, __int64 a3,
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
  SdkRoutine_e3d60(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_e4870(a1 + 8, &v11, a3, 769, a4, 36, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 fssrv_sf_proxy_e1d40(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_sf_cmif_client_e8f90(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 60, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 fssrv_sf_proxy_e1e70(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_sf_cmif_client_e8f90(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 62, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 fssrv_sf_proxy_e2120(__int64 a1, __int64* a2, unsigned __int8 a3,
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
  SdkRoutine_e4ad0(&v13);
  if (v14 == nullptr) {
    v10 = 5642;
    v11 = v15;
    if (v15 == 0) {
      return v10;
    }
    goto LABEL_3;
  }
  v13 = *a2;
  v10 = SdkRoutine_ea1c0(a1 + 8, &v13, a3, a4, a5, 80, &v15);
  v11 = v15;
  if (v15 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v10;
}

__int64 fssrv_sf_proxy_e23d0(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  SdkRoutine_ed700(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 85, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 fssrv_sf_proxy_e2460(__int64 a1, __int64* a2, unsigned __int8 a3,
                             unsigned __int8 a4, __int64 a5, __int64 a6)
{
  unsigned int v12;
  __int64 v13;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = 0;
  v16 = &v17;
  SdkRoutine_ee820(&v15);
  if (v16 == nullptr) {
    v12 = 5642;
    v13 = v17;
    if (v17 == 0) {
      return v12;
    }
    goto LABEL_3;
  }
  v15 = *a2;
  v12 = SdkRoutine_ee5e0(a1 + 8, &v15, a3, a4, a5, a6, 86, &v17);
  v13 = v17;
  if (v17 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v12;
}

__int64 fssrv_sf_proxy_e25b0(__int64 a1, __int64* a2, unsigned __int8 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  SdkRoutine_ed700(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_e9060(a1 + 8, &v9, a3, 88, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 fssrv_sf_proxy_e2ac0(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  cmif_client_object_buffer_message_e6ca0(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 203, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 fssrv_sf_proxy_e2b50(__int64 a1, __int64* a2, unsigned __int8 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  SdkRoutine_e3d60(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_e9060(a1 + 8, &v9, a3, 204, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 fssrv_sf_proxy_e2bf0(__int64 a1, __int64* a2, unsigned __int8 a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v11 = 0;
  v9 = 0;
  v10 = &v11;
  cmif_client_object_buffer_message_e6ca0(&v9);
  if (v10 == nullptr) {
    v6 = 5642;
    v7 = v11;
    if (v11 == 0) {
      return v6;
    }
    goto LABEL_3;
  }
  v9 = *a2;
  v6 = SdkRoutine_e9060(a1 + 8, &v9, a3, 205, &v11);
  v7 = v11;
  if (v11 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  return v6;
}

__int64 fssrv_sf_proxy_e2c90(__int64 a1, __int64* a2, __int64 a3,
                             unsigned __int8 a4, unsigned int a5)
{
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = 0;
  v14 = &v15;
  cmif_client_object_buffer_message_e6ca0(&v13);
  if (v14 == nullptr) {
    v10 = 5642;
    v11 = v15;
    if (v15 == 0) {
      return v10;
    }
    goto LABEL_3;
  }
  v13 = *a2;
  v10 = ((__int64 (*)(__int64, __int64*, __int64, __int64, _QWORD, _QWORD,
                      __int64, __int64*))SdkRoutine_eeff0)(
      a1 + 8, &v13, a3, 769, a4, a5, 206, &v15);
  v11 = v15;
  if (v15 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  return v10;
}

__int64 fssrv_sf_proxy_e2d50(__int64 a1, __int64* a2, __int64 a3,
                             unsigned __int8 a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_e3d60(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_eedb0(a1 + 8, &v11, a3, a4, 207, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 fssrv_sf_proxy_e31a0(__int64 a1, __int64 a2, _QWORD* a3)
{
  return SdkRoutine_f0d50(a1 + 8, a2, *a3, a3[1], 602);
}

__int64 fssrv_sf_proxy_e3220(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             unsigned __int8 a5)
{
  return SdkRoutine_f1290(a1 + 8, a2, a3, a4, 769, a5, 610);
}

__int64 fssrv_sf_proxy_e32c0(__int64 a1, __int64 a2, __int64 a3,
                             unsigned __int8 a4)
{
  return SdkRoutine_f1c50(a1 + 8, a2, a3, 769, a4, 618);
}

__int64 fssrv_sf_proxy_e3340(__int64 a1, __int64 a2, __int64 a3,
                             unsigned __int8 a4)
{
  return SdkRoutine_f1f70(a1 + 8, a2, a3, 769, a4, 660);
}

__int64 fssrv_sf_proxy_e36d0(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_sf_cmif_client_f2f80(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 1200, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 fssrv_sf_proxy_e3760(__int64 a1, __int64* a2, __int64 a3, __int64 a4)
{
  unsigned int v8;
  __int64 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;

  v13 = 0;
  v11 = 0;
  v12 = &v13;
  SdkRoutine_f3410(&v11);
  if (v12 == nullptr) {
    v8 = 5642;
    v9 = v13;
    if (v13 == 0) {
      return v8;
    }
    goto LABEL_3;
  }
  v11 = *a2;
  v8 = SdkRoutine_f3200(a1 + 8, &v11, a3, a4, 1300, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 fssrv_sf_proxy_eb060(__int64 a1, __int64* a2, __int64* a3,
                             unsigned __int8 a4, __int64 a5)
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
  SdkRoutine_eb490(&v15);
  if (v16 == nullptr) {
    v12 = 5642;
    v13 = v17;
    if (v17 == 0) {
      return v12;
    }
    goto LABEL_3;
  }
  v10 = *a3;
  v11 = a3[1];
  v15 = *a2;
  v12 = ((__int64 (*)(__int64, __int64*, __int64, __int64, _QWORD, __int64,
                      __int64, __int64*))SdkRoutine_ec290)(
      a1 + 8, &v15, v10, v11, a4, a5, 33, &v17);
  v13 = v17;
  if (v17 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v12;
}

__int64 fssrv_sf_proxy_eb120(__int64 a1, __int64* a2, __int64* a3)
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
  SdkRoutine_eb490(&v11);
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
  v8 = SdkRoutine_ec530(a1 + 8, &v11, v6, v7, 34, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

__int64 fssrv_sf_proxy_eb1c0(__int64 a1, __int64* a2, __int64* a3, __int64 a4,
                             unsigned __int8 a5)
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
  SdkRoutine_ec9f0(&v15);
  if (v16 == nullptr) {
    v12 = 5642;
    v13 = v17;
    if (v17 == 0) {
      return v12;
    }
    goto LABEL_3;
  }
  v10 = *a3;
  v11 = a3[1];
  v15 = *a2;
  v12 = ((__int64 (*)(__int64, __int64*, __int64, __int64, __int64, __int64,
                      _QWORD, __int64, __int64*))SdkRoutine_ec780)(
      a1 + 8, &v15, v10, v11, a4, 512, a5, 63, &v17);
  v13 = v17;
  if (v17 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v12;
}

__int64 fssrv_sf_proxy_eb280(__int64 a1, __int64* a2, __int64* a3)
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
  SdkRoutine_ec9f0(&v11);
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
  v8 = SdkRoutine_ec530(a1 + 8, &v11, v6, v7, 68, &v13);
  v9 = v13;
  if (v13 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  return v8;
}

#pragma GCC visibility pop
