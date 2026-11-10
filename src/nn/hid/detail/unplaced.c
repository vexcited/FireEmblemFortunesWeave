#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_hid_detail_SharedMemoryAccessor_Deactivate_plt(_QWORD);
__int64 nn_hid_server_CreateHidDebugServerProxy_plt(_QWORD);
__int64 nn_hid_server_CreateHidServerProxy_plt(_QWORD);
__int64 nn_hid_utility_GetAppletResourceUserId_plt(void);
__int64 nn_hid_detail_6b8c40(__int64 a1, __int64 a2);
__int64 nn_hid_detail_6b9790(__int64 a1, unsigned __int64 a2);
__int64 nn_hid_detail_6b9820(__int64 a1);
__int64 nn_hid_detail_6b9e10(__int64 a1, __int64 a2);
__int64 nn_hid_detail_6b9ea0(__int64 a1);
__int64 nn_hid_detail_6baae0(__int64 a1, __int64 a2);
__int64 nn_hid_detail_6bab70(__int64 a1);
__int64 nn_hid_detail_6bb3b0(__int64 a1, __int64 a2);
__int64 nn_hid_detail_6bb440(__int64 a1);
__int64 nn_hid_detail_6c2ad0(__int64 a1);
__int64 nn_hid_detail_6c70b0(__int64 a1, __int64 a2);

__int64 nn_hid_detail_6b8c40(__int64 a1, __int64 a2)
{
  unsigned __int64* v2;

  v2 = (unsigned __int64*)(a1 + 24);
  atomic_store(a2 + 246272, v2);
  return 0;
}

__int64 nn_hid_detail_6b9790(__int64 a1, unsigned __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;

  v8 = nullptr;
  result = nn_hid_server_CreateHidServerProxy_plt(&v8);
  if ((_DWORD)result == 0) {
    v5 = v8;
    v6 = nn_hid_utility_GetAppletResourceUserId_plt();
    result = (*(__int64 (**)(_QWORD*, __int64))(*v5 + 40LL))(v5, v6);
    if ((_DWORD)result == 0) {
      atomic_store(a2, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v8 != nullptr) {
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
        (void*)v8, v8);
    return v7;
  }
  return result;
}

__int64 nn_hid_detail_6b9820(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 32LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

__int64 nn_hid_detail_6b9e10(__int64 a1, __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;

  v8 = nullptr;
  result = nn_hid_server_CreateHidServerProxy_plt(&v8);
  if ((_DWORD)result == 0) {
    v5 = v8;
    v6 = nn_hid_utility_GetAppletResourceUserId_plt();
    result = (*(__int64 (**)(_QWORD*, __int64))(*v5 + 1248LL))(v5, v6);
    if ((_DWORD)result == 0) {
      atomic_store(a2 + 15360, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v8 != nullptr) {
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
        (void*)v8, v8);
    return v7;
  }
  return result;
}

__int64 nn_hid_detail_6b9ea0(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 1352LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

__int64 nn_hid_detail_6baae0(__int64 a1, __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;

  v8 = nullptr;
  result = nn_hid_server_CreateHidServerProxy_plt(&v8);
  if ((_DWORD)result == 0) {
    v5 = v8;
    v6 = nn_hid_utility_GetAppletResourceUserId_plt();
    result = (*(__int64 (**)(_QWORD*, __int64))(*v5 + 80LL))(v5, v6);
    if ((_DWORD)result == 0) {
      atomic_store(a2 + 14336, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v8 != nullptr) {
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
        (void*)v8, v8);
    return v7;
  }
  return result;
}

__int64 nn_hid_detail_6bab70(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 176LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

__int64 nn_hid_detail_6bb3b0(__int64 a1, __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;

  v8 = nullptr;
  result = nn_hid_server_CreateHidServerProxy_plt(&v8);
  if ((_DWORD)result == 0) {
    v5 = v8;
    v6 = nn_hid_utility_GetAppletResourceUserId_plt();
    result = (*(__int64 (**)(_QWORD*, __int64))(*v5 + 56LL))(v5, v6);
    if ((_DWORD)result == 0) {
      atomic_store(a2 + 13312, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v8 != nullptr) {
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v8 + 8LL))(
        (void*)v8, v8);
    return v7;
  }
  return result;
}

__int64 nn_hid_detail_6bb440(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  _QWORD* v4;

  v4 = nullptr;
  result = nn_hid_server_CreateHidDebugServerProxy_plt(&v4);
  if ((_DWORD)result == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v4 + 128LL))(v4);
    if ((_DWORD)result == 0) {
      atomic_store(0, (unsigned __int64*)(a1 + 24));
    }
  }
  if (v4 != nullptr) {
    v3 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 8LL))(
        (void*)v4, v4);
    return v3;
  }
  return result;
}

__int64 nn_hid_detail_6c2ad0(__int64 a1)
{
  int v1;
  int v2;
  __int64 result;
  int v5;
  _QWORD* v6;
  unsigned int v7;
  _QWORD* v8;

  v1 = *(_DWORD*)(a1 + 24);
  if (v1 == 0) {
    return 22218;
  }
  v2 = v1 - 1;
  *(_DWORD*)(a1 + 24) = v2;
  if (v2 == 0) {
    v8 = nullptr;
    result = nn_hid_server_CreateHidDebugServerProxy_plt(&v8);
    if ((_DWORD)result != 0 ||
        (_DWORD)(result = (*(__int64 (**)(_QWORD*))(*v8 + 56LL))(v8)) != 0 ||
        (_DWORD)(result = nn_hid_detail_SharedMemoryAccessor_Deactivate_plt(
                     a1)) != 0) {
      v5 = 0;
      v6 = v8;
      if (v8 == nullptr) {
        goto LABEL_6;
      }
    }
    else {
      v5 = 1;
      v6 = v8;
      if (v8 == nullptr) {
      LABEL_6:
        if (v5 == 0) {
          return result;
        }
        return 0;
      }
    }
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v6 + 8LL))(
        (void*)v6, v6);
    result = v7;
    goto LABEL_6;
  }
  return 0;
}

__int64 nn_hid_detail_6c70b0(__int64 a1, __int64 a2)
{
  unsigned __int64* v2;

  v2 = (unsigned __int64*)(a1 + 32);
  atomic_store(a2 + 1024, v2);
  return 0;
}

#pragma GCC visibility pop
