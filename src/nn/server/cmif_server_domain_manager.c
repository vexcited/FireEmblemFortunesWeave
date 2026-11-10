#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64
nn_sf_cmif_server_CmifServerDomainManager_Domain_Destroy_Domain_plt(void);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_Domain_plt(_QWORD,
                                                                    _QWORD);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_UnregisterObject_plt(
    _QWORD, _QWORD);
__int64
    nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_EntryAllocator_plt(
        _QWORD);
extern __int64 SdkData_e86fe0;
extern __int64 SdkData_e86fe8;
__int64 nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_EntryAllocator(
    __int64 result, __int64 a2, unsigned int a3);
__int64
nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_Destroy_EntryAllocator(
    __int64 result);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_Domain(__int64 result,
                                                                __int64 a2);
void nn_sf_cmif_server_CmifServerDomainManager_Domain_Destroy_Domain(
    void* this_);
__int64
nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_DeallocateEntry(
    __int64 a1, __int64 a2);
__int64
nn_sf_cmif_server_CmifServerDomainManager_Domain_DisposeImpl(void* this_);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_ReserveEntry_1790a0(
    __int64 a1, _DWORD* a2, int a3);
__int64 nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_AllocateEntry(
    void* this_);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_ReserveEntry_1791c0(
    __int64 a1, _DWORD* a2, int a3);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_UnReserveEntry_179280(
    __int64 result, int* a2, int a3);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_UnReserveEntry_179340(
    __int64 result, int* a2, int a3);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_RegisterObject_1793f0(
    __int64 a1, int a2, __int64* a3);
__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_RegisterObject_1794b0(
    __int64 a1, int a2, __int64* a3);
__attribute__((swiftcall)) void
nn_sf_cmif_server_CmifServerDomainManager_Domain_UnregisterObject_179580(
    PSEUDO_X8 x8_, __int64 result, int a2);
__int64
nn_sf_cmif_server_CmifServerDomainManager_Domain_UnregisterObject_179690(
    __int64 a1, unsigned int a2);
__attribute__((swiftcall)) void
nn_sf_cmif_server_CmifServerDomainManager_Domain_GetObject_1796a0(
    PSEUDO_X8 x8_, __int64 result, int a2);
__attribute__((swiftcall)) void
nn_sf_cmif_server_CmifServerDomainManager_Domain_GetObject_179760(
    PSEUDO_X8 x8_, __int64 result, int a2);
__int64
nn_sf_cmif_server_CmifServerDomainManager_CmifServerDomainManager(__int64 a1);
__int64 nn_sf_cmif_server_CmifServerDomainManager_CreateDomain(void* this_);

__int64 nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_EntryAllocator(
    __int64 result, __int64 a2, unsigned int a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;

  *(_DWORD*)result = a3;
  *(_DWORD*)(result + 16) = 0;
  if ((int)a3 < 1) {
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(result + 24) = 0;
  }
  else {
    v3 = a3;
    v4 = a3 & 7;
    v5 = nullptr;
    if (v4 != 0) {
      v6 = (_QWORD*)(a2 + 48LL * a3 - 48);
      do {
        --v3;
        *v6 = v6;
        v6[1] = v6;
        v6[2] = v5;
        v6[3] = 0;
        v5 = v6;
        --v4;
        v6[4] = 0;
        v6[5] = 0;
        v6 -= 6;
      } while (v4 != 0);
      v5 = v6 + 6;
    }
    if (a3 >= 8) {
      v7 = a2 + 48 * v3;
      v8 = v3 + 1;
      v9 = (_QWORD*)(v7 - 192);
      do {
        v9[20] = v5;
        v9[21] = 0;
        v9[22] = 0;
        v9[23] = 0;
        v8 -= 8LL;
        v9[16] = 0;
        v9[17] = 0;
        v9[10] = 0;
        v9[11] = 0;
        *v9 = v9;
        v9[1] = v9;
        v9[4] = 0;
        v9[5] = 0;
        *(v9 - 2) = 0;
        *(v9 - 1) = 0;
        *(v9 - 4) = v9;
        *(v9 - 3) = 0;
        v9[18] = v9 + 18;
        v9[19] = v9 + 18;
        v9[12] = v9 + 12;
        v9[13] = v9 + 12;
        v9[14] = v9 + 18;
        v9[15] = 0;
        v9[8] = v9 + 12;
        v9[9] = 0;
        *(v9 - 8) = 0;
        *(v9 - 7) = 0;
        *(v9 - 18) = v9 - 18;
        *(v9 - 17) = v9 - 18;
        *(v9 - 14) = 0;
        *(v9 - 13) = 0;
        *(v9 - 20) = 0;
        *(v9 - 19) = 0;
        *(v9 - 22) = v9 - 18;
        *(v9 - 21) = 0;
        v9[6] = v9 + 6;
        v9[7] = v9 + 6;
        v9[2] = v9 + 6;
        v9[3] = 0;
        *(v9 - 6) = v9 - 6;
        *(v9 - 5) = v9 - 6;
        *(v9 - 10) = v9 - 6;
        *(v9 - 9) = 0;
        v5 = v9 - 24;
        *(v9 - 12) = v9 - 12;
        *(v9 - 11) = v9 - 12;
        *(v9 - 16) = v9 - 12;
        *(v9 - 15) = 0;
        *(v9 - 24) = v9 - 24;
        *(v9 - 23) = v9 - 24;
        v9 -= 48;
      } while (v8 > 1);
      v5 = v9 + 24;
    }
    *(_QWORD*)(result + 8) = v5;
    *(_QWORD*)(result + 24) = v5;
  }
  return result;
}

__int64

nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_Destroy_EntryAllocator(
    __int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_DWORD*)result;
  if (*(int*)result >= 1) {
    v2 = 32;
    v3 = result;
    v4 = 0;
    do {
      result = *(_QWORD*)(*(_QWORD*)(v3 + 8) + v2);
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
        v1 = *(_DWORD*)v3;
      }
      ++v4;
      v2 += 48;
    } while (v4 < v1);
  }
  return result;
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_Domain(__int64 result,
                                                                __int64 a2)
{
  __int64 v2;

  *(_DWORD*)(result + 16) = 1;
  v2 = SdkData_e86fe0 + 104;
  *(_QWORD*)result = SdkData_e86fe0 + 16;
  *(_QWORD*)(result + 8) = v2;
  *(_QWORD*)(result + 24) = a2;
  *(_QWORD*)(result + 32) = result + 32;
  *(_QWORD*)(result + 40) = result + 32;
  return result;
}

void nn_sf_cmif_server_CmifServerDomainManager_Domain_Destroy_Domain(
    void* this_)
{
  char* v1;
  char* i;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *((char**)this_ + 5);
  for (i = (char*)this_ + 32; v1 != i; v1 = *((char**)this_ + 5)) {
    v8 = *((_QWORD*)this_ + 3);
    nn_os_SdkMutexType_Lock_plt(v8 + 8);
    *((_QWORD*)v1 + 3) = 0;
    nn_os_SdkMutexType_Unlock_plt(v8 + 8);
    v9 = *((_QWORD*)v1 + 4);
    *((_QWORD*)v1 + 4) = 0;
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    }
    *((_QWORD*)v1 + 5) = 0;
    v4 = *((__int64**)this_ + 5);
    v5 = (__int64*)v4[1];
    v6 = *v5;
    *(_QWORD*)(*v4 + 8) = v5;
    *v5 = *v4;
    *(_QWORD*)(v6 + 8) = v4;
    *v4 = v6;
    v7 = *((_QWORD*)this_ + 3);
    nn_os_SdkMutexType_Lock_plt(v7 + 32);
    *((_QWORD*)v1 + 2) = *(_QWORD*)(v7 + 40);
    *(_QWORD*)(v7 + 40) = v1;
    nn_os_SdkMutexType_Unlock_plt(v7 + 32);
  }
}

__int64

nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_DeallocateEntry(
    __int64 a1, __int64 a2)
{
  nn_os_SdkMutexType_Lock_plt(a1 + 16);
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = a2;
  return nn_os_SdkMutexType_Unlock_plt(a1 + 16);
}

__int64

nn_sf_cmif_server_CmifServerDomainManager_Domain_DisposeImpl(void* this_)
{
  __int64 v1;

  v1 = *((_QWORD*)this_ + 3);
  nn_sf_cmif_server_CmifServerDomainManager_Domain_Destroy_Domain_plt();
  return (*(__int64 (**)(__int64, void*))(*(_QWORD*)v1 + 8LL))(v1, this_);
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_ReserveEntry_1790a0(
    __int64 a1, _DWORD* a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (a3 < 1) {
    return 0;
  }
  v5 = (unsigned int)a3;
  while (1) {
    v6 = *(_QWORD*)(a1 + 24);
    nn_os_SdkMutexType_Lock_plt(v6 + 32);
    v7 = *(_QWORD*)(v6 + 40);
    if (v7 == 0) {
      break;
    }
    *(_QWORD*)(v6 + 40) = *(_QWORD*)(v7 + 16);
    nn_os_SdkMutexType_Unlock_plt(v6 + 32);
    --v5;
    *a2++ =
        1 -
        1431655765 *
            ((unsigned __int64)(v7 - *(_QWORD*)(*(_QWORD*)(a1 + 24) + 24LL)) >>
             4);
    if (v5 == 0) {
      return 0;
    }
  }
  nn_os_SdkMutexType_Unlock_plt(v6 + 32);
  return 154122;
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_AllocateEntry(
    void* this_)
{
  __int64 v2;

  nn_os_SdkMutexType_Lock_plt((char*)this_ + 16);
  v2 = *((_QWORD*)this_ + 3);
  if (v2 != 0) {
    *((_QWORD*)this_ + 3) = *(_QWORD*)(v2 + 16);
  }
  nn_os_SdkMutexType_Unlock_plt((char*)this_ + 16);
  return v2;
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_ReserveEntry_1791c0(
    __int64 a1, _DWORD* a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (a3 < 1) {
    return 0;
  }
  v5 = (unsigned int)a3;
  while (1) {
    v6 = *(_QWORD*)(a1 + 16);
    nn_os_SdkMutexType_Lock_plt(v6 + 32);
    v7 = *(_QWORD*)(v6 + 40);
    if (v7 == 0) {
      break;
    }
    *(_QWORD*)(v6 + 40) = *(_QWORD*)(v7 + 16);
    nn_os_SdkMutexType_Unlock_plt(v6 + 32);
    --v5;
    *a2++ =
        1 -
        1431655765 *
            ((unsigned __int64)(v7 - *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL)) >>
             4);
    if (v5 == 0) {
      return 0;
    }
  }
  nn_os_SdkMutexType_Unlock_plt(v6 + 32);
  return 154122;
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_UnReserveEntry_179280(
    __int64 result, int* a2, int a3)
{
  __int64 v4;
  __int64 i;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;

  if (a3 >= 1) {
    v4 = result;
    for (i = (unsigned int)a3; i != 0; --i) {
      v8 = *(_QWORD*)(v4 + 24);
      v10 = *a2++;
      v9 = v10;
      if (v10 != 0) {
        v6 = v9 - 1;
        if (v6 >= *(_DWORD*)(v8 + 16)) {
          v7 = 0;
        }
        else {
          v7 = *(_QWORD*)(v8 + 24) + 48LL * v6;
        }
      }
      else {
        v7 = 0;
      }
      nn_os_SdkMutexType_Lock_plt(v8 + 32);
      *(_QWORD*)(v7 + 16) = *(_QWORD*)(v8 + 40);
      *(_QWORD*)(v8 + 40) = v7;
      result = nn_os_SdkMutexType_Unlock_plt(v8 + 32);
    }
  }
  return result;
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_UnReserveEntry_179340(
    __int64 result, int* a2, int a3)
{
  __int64 v4;
  __int64 i;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;

  if (a3 >= 1) {
    v4 = result;
    for (i = (unsigned int)a3; i != 0; --i) {
      v8 = *(_QWORD*)(v4 + 16);
      v10 = *a2++;
      v9 = v10;
      if (v10 != 0) {
        v6 = v9 - 1;
        if (v6 >= *(_DWORD*)(v8 + 16)) {
          v7 = 0;
        }
        else {
          v7 = *(_QWORD*)(v8 + 24) + 48LL * v6;
        }
      }
      else {
        v7 = 0;
      }
      nn_os_SdkMutexType_Lock_plt(v8 + 32);
      *(_QWORD*)(v7 + 16) = *(_QWORD*)(v8 + 40);
      *(_QWORD*)(v8 + 40) = v7;
      result = nn_os_SdkMutexType_Unlock_plt(v8 + 32);
    }
  }
  return result;
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_RegisterObject_1793f0(
    __int64 a1, int a2, __int64* a3)
{
  __int64 v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 24);
  if (a2 != 0) {
    if ((unsigned int)(a2 - 1) >= *(_DWORD*)(v3 + 16)) {
      v6 = nullptr;
    }
    else {
      v6 = (__int64*)(*(_QWORD*)(v3 + 24) + 48LL * (unsigned int)(a2 - 1));
    }
  }
  else {
    v6 = nullptr;
  }
  nn_os_SdkMutexType_Lock_plt(v3 + 8);
  v6[3] = a1;
  v7 = *v6;
  v9 = *(_QWORD*)(a1 + 32);
  v8 = a1 + 32;
  *v6 = v9;
  *(_QWORD*)(v7 + 8) = v8;
  *(_QWORD*)(*(_QWORD*)v8 + 8LL) = v6;
  *(_QWORD*)v8 = v7;
  nn_os_SdkMutexType_Unlock_plt(v3 + 8);
  v10 = *a3;
  v11 = a3[1];
  *a3 = 0;
  result = v6[4];
  v6[4] = v10;
  v6[5] = v11;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_Domain_RegisterObject_1794b0(
    __int64 a1, int a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = a1 - 8;
  if (a2 != 0) {
    if ((unsigned int)(a2 - 1) >= *(_DWORD*)(v3 + 16)) {
      v7 = nullptr;
    }
    else {
      v7 = (__int64*)(*(_QWORD*)(v3 + 24) + 48LL * (unsigned int)(a2 - 1));
    }
  }
  else {
    v7 = nullptr;
  }
  nn_os_SdkMutexType_Lock_plt(v3 + 8);
  v7[3] = v4;
  v8 = *v7;
  v10 = *(_QWORD*)(a1 + 24);
  v9 = a1 + 24;
  *v7 = v10;
  *(_QWORD*)(v8 + 8) = v9;
  *(_QWORD*)(*(_QWORD*)v9 + 8LL) = v7;
  *(_QWORD*)v9 = v8;
  nn_os_SdkMutexType_Unlock_plt(v3 + 8);
  v11 = *a3;
  v12 = a3[1];
  *a3 = 0;
  result = v7[4];
  v7[4] = v11;
  v7[5] = v12;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__attribute__((swiftcall)) void

nn_sf_cmif_server_CmifServerDomainManager_Domain_UnregisterObject_179580(
    PSEUDO_X8 x8_, __int64 result, int a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;

  if (a2 == 0 ||
      ((v3 = *(_QWORD*)(result + 24), v4 = result, v5 = *(_QWORD*)(v3 + 24),
        (unsigned int)(a2 - 1) < *(_DWORD*)(v3 + 16))
           ? (v6 = v5 == 0)
           : (v6 = true),
       v6)) {
    *a3 = 0;
    a3[1] = 0;
  }
  else {
    v8 = (__int64*)(v5 + 48LL * (unsigned int)(a2 - 1));
    nn_os_SdkMutexType_Lock_plt(v3 + 8);
    if (v4 == v8[3]) {
      v9 = v8[4];
      v10 = v8[5];
      v8[3] = 0;
      v8[4] = 0;
      if (v8 != (__int64*)(v4 + 32)) {
        v11 = (__int64*)v8[1];
        v12 = *v11;
        *(_QWORD*)(*v8 + 8) = v11;
        *v11 = *v8;
        *(_QWORD*)(v12 + 8) = v8;
        *v8 = v12;
      }
      nn_os_SdkMutexType_Unlock_plt(v3 + 8);
      v13 = *(_QWORD*)(v4 + 24);
      nn_os_SdkMutexType_Lock_plt(v13 + 32);
      v8[2] = *(_QWORD*)(v13 + 40);
      *(_QWORD*)(v13 + 40) = v8;
      result = nn_os_SdkMutexType_Unlock_plt(v13 + 32);
      *a3 = v9;
      a3[1] = v10;
    }
    else {
      *a3 = 0;
      a3[1] = 0;
      {
        nn_os_SdkMutexType_Unlock_plt(v3 + 8);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64

nn_sf_cmif_server_CmifServerDomainManager_Domain_UnregisterObject_179690(
    __int64 a1, unsigned int a2)
{
  return nn_sf_cmif_server_CmifServerDomainManager_Domain_UnregisterObject_plt(
      a1 - 8, a2);
}

__attribute__((swiftcall)) void

nn_sf_cmif_server_CmifServerDomainManager_Domain_GetObject_1796a0(
    PSEUDO_X8 x8_, __int64 result, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  _QWORD* v8;

  if (a2 == 0 || ((v4 = *(_QWORD*)(result + 24), v5 = *(_QWORD*)(v4 + 24),
                   (unsigned int)(a2 - 1) < *(_DWORD*)(v4 + 16))
                      ? (v6 = v5 == 0)
                      : (v6 = true),
                  v6)) {
    *a3 = 0;
    a3[1] = 0;
  }
  else {
    v7 = result;
    v8 = (_QWORD*)(v5 + 48LL * (unsigned int)(a2 - 1));
    nn_os_SdkMutexType_Lock_plt(v4 + 8);
    if (v7 == v8[3]) {
      nn_os_SdkMutexType_Unlock_plt(v4 + 8);
      result = v8[4];
      *a3 = result;
      if (result != 0) {
        result = (**(__int64 (***)(__int64))result)(result);
      }
      a3[1] = v8[5];
    }
    else {
      *a3 = 0;
      a3[1] = 0;
      {
        nn_os_SdkMutexType_Unlock_plt(v4 + 8);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

nn_sf_cmif_server_CmifServerDomainManager_Domain_GetObject_179760(
    PSEUDO_X8 x8_, __int64 result, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  _QWORD* v8;

  if (a2 == 0 || ((v4 = *(_QWORD*)(result + 16), v5 = *(_QWORD*)(v4 + 24),
                   (unsigned int)(a2 - 1) < *(_DWORD*)(v4 + 16))
                      ? (v6 = v5 == 0)
                      : (v6 = true),
                  v6)) {
    *a3 = 0;
    a3[1] = 0;
  }
  else {
    v7 = result - 8;
    v8 = (_QWORD*)(v5 + 48LL * (unsigned int)(a2 - 1));
    nn_os_SdkMutexType_Lock_plt(v4 + 8);
    if (v7 == v8[3]) {
      nn_os_SdkMutexType_Unlock_plt(v4 + 8);
      result = v8[4];
      *a3 = result;
      if (result != 0) {
        result = (**(__int64 (***)(__int64))result)(result);
      }
      a3[1] = v8[5];
    }
    else {
      *a3 = 0;
      a3[1] = 0;
      {
        nn_os_SdkMutexType_Unlock_plt(v4 + 8);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64

nn_sf_cmif_server_CmifServerDomainManager_CmifServerDomainManager(__int64 a1)
{
  __int64 v1;

  v1 = SdkData_e86fe8;
  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)a1 = v1 + 16;
  return nn_sf_cmif_server_CmifServerDomainManager_EntryAllocator_EntryAllocator_plt(
      a1 + 16);
}

__int64 nn_sf_cmif_server_CmifServerDomainManager_CreateDomain(void* this_)
{
  __int64 result;
  __int64 v3;

  result = (**(__int64 (***)(void*))this_)(this_);
  if (result != 0) {
    v3 = result;
    nn_sf_cmif_server_CmifServerDomainManager_Domain_Domain_plt(result, this_);
    return v3;
  }
  return result;
}

#pragma GCC visibility pop
