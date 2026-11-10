#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 memchr_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_CloseClientSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_SendSyncRequest_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
__int64 nn_socket_GetLastError_plt(void);
__int64 nn_socket_SetLastError_plt(_QWORD);
__int64 nn_socket_detail_194840(__int64*, void*);
__int64 nn_socket_detail_CloseNativeSocket(_QWORD);
__int64 nn_socket_detail_InetPton4(unsigned __int8*, _DWORD*);
__int64 nn_socket_detail_TrackCall_plt(void);
extern _UNKNOWN SdkData_eb8cb8;
extern _UNKNOWN SdkData_eb8ec8;
extern _UNKNOWN SdkData_eb8ef0;
extern __int64 SdkData_e86d80;
extern __int64 SdkData_eb8ec0;
__int64 nn_socket_detail_193a10();
__int64 nn_socket_detail_193a30(unsigned __int16 a1);
__attribute__((swiftcall)) void
nn_socket_detail_CreateClientMonitorByHipc(PSEUDO_X8 x8_, void* this_);
__int64 nn_socket_detail_194c90(__int64 a1, __int64 a2);
__int64 nn_socket_detail_194eb0(__int64 a1);
__int64 nn_socket_detail_19de60();
__int64 nn_socket_detail_socketPton_19e640(char a1, unsigned __int8* a2,
                                           _DWORD* a3);

__int64 nn_socket_detail_193a10()
{
  nn_socket_detail_TrackCall_plt();
  return 95;
}

__int64 nn_socket_detail_193a30(unsigned __int16 a1)
{
  nn_socket_detail_TrackCall_plt();
  if ((nn_socket_detail_CloseNativeSocket(a1) & 0x80000000) != 0) {
    return nn_socket_GetLastError_plt();
  }
  else {
    return 0;
  }
}

__attribute__((swiftcall)) void

nn_socket_detail_CreateClientMonitorByHipc(PSEUDO_X8 x8_, void* this_)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v5;

  result = nn_socket_detail_194840(&v5, this_);
  *a2 = v5;
  {
    result;
    return;
  }
}

__int64 nn_socket_detail_194c90(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  __int64 v6;

  v4 = SdkData_e86d80;
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = v4 + 16;
  *(_QWORD*)(a1 + 16) = a1 + 72;
  result = nn_os_SdkConditionVariableType_Initialize_plt(a1 + 28);
  v6 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = v6;
  *(_QWORD*)(a1 + 48) = a2;
  *(_QWORD*)(v6 + 8) = v6 + 16;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL) = *(_QWORD*)(a1 + 16) + 32LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 40LL) = *(_QWORD*)(a1 + 16) + 48LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 56LL) = *(_QWORD*)(a1 + 16) + 64LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 72LL) = *(_QWORD*)(a1 + 16) + 80LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 88LL) = *(_QWORD*)(a1 + 16) + 96LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 104LL) = *(_QWORD*)(a1 + 16) + 112LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 120LL) = *(_QWORD*)(a1 + 16) + 128LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 136LL) = *(_QWORD*)(a1 + 16) + 144LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 152LL) = *(_QWORD*)(a1 + 16) + 160LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 168LL) = *(_QWORD*)(a1 + 16) + 176LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 184LL) = *(_QWORD*)(a1 + 16) + 192LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 200LL) = *(_QWORD*)(a1 + 16) + 208LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 216LL) = *(_QWORD*)(a1 + 16) + 224LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 232LL) = *(_QWORD*)(a1 + 16) + 240LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 248LL) = *(_QWORD*)(a1 + 16) + 256LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 264LL) = *(_QWORD*)(a1 + 16) + 272LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 280LL) = *(_QWORD*)(a1 + 16) + 288LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 296LL) = *(_QWORD*)(a1 + 16) + 304LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 312LL) = *(_QWORD*)(a1 + 16) + 320LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 328LL) = *(_QWORD*)(a1 + 16) + 336LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 344LL) = *(_QWORD*)(a1 + 16) + 352LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 360LL) = *(_QWORD*)(a1 + 16) + 368LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 376LL) = *(_QWORD*)(a1 + 16) + 384LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 392LL) = *(_QWORD*)(a1 + 16) + 400LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 408LL) = *(_QWORD*)(a1 + 16) + 416LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 424LL) = *(_QWORD*)(a1 + 16) + 432LL;
  *(_QWORD*)(*(_QWORD*)(a1 + 16) + 440LL) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_DWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 184) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 248) = 0;
  *(_DWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 280) = 0;
  *(_DWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 328) = 0;
  *(_DWORD*)(a1 + 344) = 0;
  *(_DWORD*)(a1 + 360) = 0;
  *(_DWORD*)(a1 + 376) = 0;
  *(_DWORD*)(a1 + 392) = 0;
  *(_DWORD*)(a1 + 408) = 0;
  *(_DWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 440) = 0;
  *(_DWORD*)(a1 + 456) = 0;
  *(_DWORD*)(a1 + 472) = 0;
  *(_DWORD*)(a1 + 488) = 0;
  *(_DWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 56) = 28;
  return result;
}

__int64 nn_socket_detail_194eb0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)nn_sf_hipc_GetMessageBufferOnTls_plt(result);
      *v4 = 2;
      nn_sf_hipc_SendSyncRequest_plt(v3, v4, 256);
      nn_sf_hipc_CloseClientSessionHandle_plt(v3);
    }
    nn_os_LockMutex_plt(&SdkData_eb8ec8);
    nn_lmem_FreeToExpHeap_plt(SdkData_eb8ec0, a1);
    return nn_os_UnlockMutex_plt(&SdkData_eb8ec8);
  }
  return result;
}

__int64 nn_socket_detail_19de60()
{
  nn_socket_detail_194c90((__int64)&SdkData_eb8cb8, (__int64)&SdkData_eb8cb8);
  fw_rtld_RegisterCrtDestructor();
  SdkData_eb8ec0 = nn_lmem_CreateExpHeap_plt(&SdkData_eb8ef0, 4096, 0);
  return nn_os_InitializeMutex_plt(&SdkData_eb8ec8, 0, 0);
}

__int64 nn_socket_detail_socketPton_19e640(char a1, unsigned __int8* a2,
                                           _DWORD* a3)
{
  unsigned __int8* v4;
  unsigned int v6;
  unsigned __int8* v7;
  char* v8;
  unsigned int v9;
  int v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  const char* v15;
  unsigned int v16;
  __int16 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _BYTE* v23;
  char* v24;
  char* v25;
  char* v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;

  if (a1 != 2 && a1 != 28) {
    goto LABEL_11;
  }
  v4 = a2;
  if (a2 == nullptr || a3 == nullptr) {
    nn_socket_SetLastError_plt(97);
    return 0;
  }
  if (a1 != 28) {
    if (a1 == 2) {
      return nn_socket_detail_InetPton4(a2, a3);
    }
  LABEL_11:
    nn_socket_SetLastError_plt(97);
    return (unsigned int)-1;
  }
  v6 = *a2;
  v30_.v30 = 0;
  v30_.v31 = 0;
  if (v6 == 0) {
    return v6;
  }
  if (v6 == 58) {
    v4 = a2 + 1;
    if (a2[1] != 58) {
      return 0;
    }
  }
  v7 = v4 + 1;
  v8 = (char*)&v30_.v30;
  v29 = a3;
  v9 = 0;
  v10 = 0;
  v11 = nullptr;
  v12 = 0;
  while (1) {
    v13 = v11;
    v14 = memchr_plt("0123456789abcdef", v6, 17);
    if (v14 != 0) {
      v15 = "0123456789abcdef";
      if (v10 > 3) {
        return 0;
      }
    LABEL_24:
      ++v10;
      v9 = (v14 - (_DWORD)v15) | (16 * v9);
      goto LABEL_25;
    }
    v14 = memchr_plt("0123456789ABCDEF", v6, 17);
    if (v14 != 0) {
      v15 = "0123456789ABCDEF";
      if (v10 > 3) {
        return 0;
      }
      goto LABEL_24;
    }
    if (v6 != 58) {
      break;
    }
    if (v10 == 0) {
      v6 = 0;
      v11 = v8;
      v4 = v7;
      if (v13 != nullptr) {
        return v6;
      }
      goto LABEL_26;
    }
    if (v12 > 14) {
      return 0;
    }
    v17 = bswap32(v9) >> 16;
    v12 += 2;
    v10 = 0;
    v4 = v7;
    v9 = 0;
    *(_WORD*)v8 = v17;
  LABEL_25:
    v11 = v13;
  LABEL_26:
    v16 = *v7++;
    v6 = v16;
    v8 = (char*)&v30_.v30 + v12;
    if (v16 == 0) {
      if (v10 != 0) {
        if (v12 > 14) {
          return 0;
        }
        v8[1] = v9;
        *((_BYTE*)&v30_.v30 + v12) = BYTE1(v9);
        v12 += 2;
      }
      v13 = v11;
      if (v11 == nullptr) {
        goto LABEL_46;
      }
      goto LABEL_38;
    }
  }
  if (v6 == 46 && v12 <= 12 &&
      (unsigned int)nn_socket_detail_InetPton4(v4, v8) != 0) {
    v12 += 4;
    if (v13 == nullptr) {
    LABEL_46:
      if (v12 != 16) {
        return 0;
      }
      goto LABEL_53;
    }
  LABEL_38:
    if (v12 == 16) {
      return 0;
    }
    v18 = (char*)&v30_.v30 + v12;
    if ((char*)&v30_.v30 + v12 != v13) {
      v19 = v18 - v13;
      v20 = (v18 - v13) & 7;
      if ((unsigned __int64)(&v13[-v12] - (char*)&v30_.v30) <=
          0xFFFFFFFFFFFFFFF8LL) {
        v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = (char*)&v30_.v31 + 7;
        v24 = (char*)&v30_.v30 + v12 - 4;
        v21 = v22 | 1;
        do {
          v22 -= 8LL;
          *v23 = v24[3];
          v24[3] = 0;
          *(v23 - 1) = v24[2];
          v24[2] = 0;
          *(v23 - 2) = v24[1];
          v24[1] = 0;
          *(v23 - 3) = *v24;
          *v24 = 0;
          *(v23 - 4) = *(v24 - 1);
          *(v24 - 1) = 0;
          *(v23 - 5) = *(v24 - 2);
          *(v24 - 2) = 0;
          *(v23 - 6) = *(v24 - 3);
          *(v24 - 3) = 0;
          *(v23 - 7) = *(v24 - 4);
          *(v24 - 4) = 0;
          v23 -= 8;
          v24 -= 8;
        } while (v22 != 0);
      }
      else {
        v21 = 1;
      }
      if (v20 != 0) {
        v25 = (char*)&v30_.v30 - v21 + 16;
        v26 = (char*)&v30_.v30 + v12 - v21;
        do {
          --v20;
          *v25-- = *v26;
          *v26-- = 0;
        } while (v20 != 0);
      }
    }
  LABEL_53:
    v27 = v30_.v31;
    v28 = v29;
    v6 = 1;
    *v29 = v30_.v30;
    v28[1] = v27;
    return v6;
  }
  return 0;
}

#pragma GCC visibility pop
