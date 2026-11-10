#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1c9a7c(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_1d554c(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1d7368(_QWORD, _QWORD);
__int64 SdkRoutine_1dbc8c(_QWORD, _QWORD);
__int64 SdkRoutine_1dbe98(_QWORD, _QWORD);
__int64 SdkRoutine_1dc0a4(_QWORD, _QWORD);
__int64 SdkRoutine_1dc1f8(_QWORD, _QWORD);
__int64 SdkRoutine_1dca70(_QWORD, _QWORD);
__int64 SdkRoutine_1de240(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_2b5150(_QWORD, _QWORD);
__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 cmif_proxy_factory_1d719c(__int64 a1, __int64* a2);
__int64 cmif_proxy_factory_1dbd3c(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5, __int64 a6);
__int64 cmif_proxy_factory_1dbdf4(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5);
__int64 cmif_proxy_factory_1dbf48(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5, __int64 a6);
__int64 cmif_proxy_factory_1dc000(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5);
__int64 cmif_proxy_factory_1dc154(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5);
__int64 cmif_proxy_factory_1dc9cc(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5);
__int64 cmif_proxy_factory_2b50b0(__int64 a1, __int64* a2);

__int64 cmif_proxy_factory_1d719c(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned int v9;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = a1 + 8;
  v6 = *(_QWORD*)(a1 + 48);
  v15 = v2;
  v16 = v3;
  v7 = a2;
  v8 = v5;
  v14 = 0;
  v12 = v6;
  v13 = &v14;
  SdkRoutine_1d7368(&v12, 0);
  if (v13 != nullptr) {
    v11 = *v7;
    v9 = SdkRoutine_e3b70(v8, &v11, 2, &v14);
  }
  else {
    v9 = 5642;
  }
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  return v9;
}

__int64 cmif_proxy_factory_1dbd3c(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5, __int64 a6)
{
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = a1;
  v16 = &v17;
  SdkRoutine_1dbc8c(&v15, 0);
  if (v16 != nullptr) {
    v11 = *a4;
    v14 = *a3;
    v12 = SdkRoutine_1c9a7c(a2, &v14, v11, a5, a6, 128, 110, &v17);
  }
  else {
    v12 = 5642;
  }
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  return v12;
}

__int64 cmif_proxy_factory_1dbdf4(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5)
{
  __int64 v9;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = a1;
  v14 = &v15;
  SdkRoutine_1dbe98(&v13, 0);
  if (v14 != nullptr) {
    v9 = *a4;
    v12 = *a3;
    v10 = SdkRoutine_1d554c(a2, &v12, v9, a5, 200, &v15);
  }
  else {
    v10 = 5642;
  }
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v10;
}

__int64 cmif_proxy_factory_1dbf48(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5, __int64 a6)
{
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = a1;
  v16 = &v17;
  SdkRoutine_1dbe98(&v15, 0);
  if (v16 != nullptr) {
    v11 = *a4;
    v14 = *a3;
    v12 = SdkRoutine_1c9a7c(a2, &v14, v11, a5, a6, 128, 201, &v17);
  }
  else {
    v12 = 5642;
  }
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  return v12;
}

__int64 cmif_proxy_factory_1dc000(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5)
{
  __int64 v9;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = a1;
  v14 = &v15;
  SdkRoutine_1dc0a4(&v13, 0);
  if (v14 != nullptr) {
    v9 = *a4;
    v12 = *a3;
    v10 = SdkRoutine_1d554c(a2, &v12, v9, a5, 300, &v15);
  }
  else {
    v10 = 5642;
  }
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v10;
}

__int64 cmif_proxy_factory_1dc154(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5)
{
  __int64 v9;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = a1;
  v14 = &v15;
  SdkRoutine_1dc1f8(&v13, 0);
  if (v14 != nullptr) {
    v9 = *a4;
    v12 = *a3;
    v10 = SdkRoutine_1d554c(a2, &v12, v9, a5, 310, &v15);
  }
  else {
    v10 = 5642;
  }
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v10;
}

__int64 cmif_proxy_factory_1dc9cc(__int64 a1, __int64 a2, __int64* a3,
                                  __int64* a4, __int64 a5)
{
  __int64 v9;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;

  v15 = 0;
  v13 = a1;
  v14 = &v15;
  SdkRoutine_1dca70(&v13, 0);
  if (v14 != nullptr) {
    v9 = *a4;
    v12 = *a3;
    v10 = SdkRoutine_1d554c(a2, &v12, v9, a5, 500, &v15);
  }
  else {
    v10 = 5642;
  }
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  return v10;
}

__int64 cmif_proxy_factory_2b50b0(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  __int64* v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 32);
  v10 = 0;
  v8 = v2;
  v9 = &v10;
  SdkRoutine_2b5150(&v8, 0);
  if (v9 == nullptr) {
    v5 = 5642;
    v6 = v10;
    if (v10 == 0) {
      return v5;
    }
    goto LABEL_3;
  }
  v8 = *a2;
  v5 = SdkRoutine_1de240(a1 + 8, &v8, 0, &v10);
  v6 = v10;
  if (v10 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  return v5;
}

#pragma GCC visibility pop
