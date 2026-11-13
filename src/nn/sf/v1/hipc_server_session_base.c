#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_b8cb0(__int64, char);
unsigned __int128 SdkRoutine_b8cb0_pair(__int64,
                                        char) __asm__("SdkRoutine_b8cb0");
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_os_GetMultiWaitHolderUserData_plt(_QWORD);
__int64 nn_sf_hipc_Receive_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_sf_hipc_ReplyAndReceive_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD);
__int64 nn_sf_hipc_Reply_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_ReceiveImpl_plt(_QWORD,
                                                                   _QWORD,
                                                                   _QWORD);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_Setup(__int64 result,
                                                         int a2);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_ReplyImpl(void* this_,
                                                             void* a2);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_Reply(void* this_, void* a2);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_EnsureReply(__int64 a1,
                                                               __int64 a2);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_ReceiveImpl(void* this_,
                                                               unsigned int* a2,
                                                               __int64 a3);
__attribute__((swiftcall)) void hipc_server_session_base_17b580(PSEUDO_X8 x8_,
                                                                __int64 result);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_SaveMessageBufferIfNeeded(
    void* this_, const void* a2, __int64 a3);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_Receive(void* this_,
                                                           void* a2,
                                                           __int64 a3);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_ReplyAndReceiveStatic(
    _QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    unsigned __int16 a7);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_MarkAsReceived(__int64 a1,
                                                                  char a2,
                                                                  __int64 a3,
                                                                  __int64 a4);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_GetReceiveResult(__int64 a1);

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_Setup(__int64 result, int a2)
{
  *(_BYTE*)(result + 68) = 0;
  *(_DWORD*)(result + 72) = a2;
  *(_DWORD*)(result + 64) = 1;
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_ReplyImpl(void* this_,
                                                             void* a2)
{
  __int64 result;

  result = nn_sf_hipc_Reply_plt(*((unsigned int*)this_ + 18), a2);
  if ((_DWORD)result == 0) {
    *((_DWORD*)this_ + 16) = 1;
  }
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_Reply(void* this_, void* a2)
{
  __int64 result;

  if (*((_DWORD*)this_ + 16) != 2) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  result = nn_sf_hipc_Reply_plt(*((unsigned int*)this_ + 18), a2);
  if ((_DWORD)result == 0) {
    *((_DWORD*)this_ + 16) = 1;
  }
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_EnsureReply(__int64 a1,
                                                               __int64 a2)
{
  int v2;
  __int64 result;

  v2 = *(_DWORD*)(a1 + 64);
  if (v2 == 1) {
    return 0;
  }
  if (v2 != 3) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  result = nn_sf_hipc_Reply_plt(*(unsigned int*)(a1 + 72), a2);
  if ((_DWORD)result == 0) {
    *(_DWORD*)(a1 + 64) = 1;
  }
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_ReceiveImpl(void* this_,
                                                               unsigned int* a2,
                                                               __int64 a3)
{
  __int64 v3;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  struct {
    __int128 v15;
    __int64 v16;
    int v17;
  } v15_;
  struct {
    __int64 v18;
    int v19;
  } v18_;

  v3 = *((_QWORD*)this_ + 10);
  if (*((_QWORD*)this_ + 11) != 0 && v3 == 0) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if (*((_DWORD*)this_ + 16) != 1) {
    nn_diag_detail_AbortImpl_plt_856170(this_);
  }
  if (v3 != 0) {
    v18_.v18 = 0;
    v15_.v17 = 0;
    v15_.v16 = 0;
    v15_.v15 = (__typeof__(v15_.v15)){0};
    v18_.v19 = 33619968;
    hipc_server_session_base_17b580((void*)((__int64)&v15_.v15),
                                    (__int64)&v18_.v18);
    v8 = HIDWORD(*(_QWORD*)((char*)&v15_.v15 + 4));
    *a2 = DWORD1(v15_.v15) & 0xFFFF0000;
    a2[1] = v8;
    if (BYTE1(v15_.v15) == 1) {
      a2[2] = DWORD3(v15_.v15);
    }
    v9 = *((_QWORD*)this_ + 10);
    v10 = (v9 & 0xFFFF00000000uLL | (*((_QWORD*)this_ + 11) << 48)) >> 32;
    v11 = &a2[(unsigned __int8)v15_.v17];
    *v11 = v9;
    v11[1] = v10;
  }
  else {
    v18_.v18 = 0;
    v15_.v17 = 0;
    v15_.v16 = 0;
    v15_.v15 = (__typeof__(v15_.v15)){0};
    v18_.v19 = 0x1000000;
    hipc_server_session_base_17b580((void*)((__int64)&v15_.v15),
                                    (__int64)&v18_.v18);
    v12 = HIDWORD(*(_QWORD*)((char*)&v15_.v15 + 4));
    *a2 = DWORD1(v15_.v15) & 0xFFFF0000;
    a2[1] = v12;
    if (BYTE1(v15_.v15) == 1) {
      a2[2] = DWORD3(v15_.v15);
    }
  }
  v13 = *((unsigned int*)this_ + 18);
  *((_BYTE*)this_ + 68) = 0;
  LOBYTE(v15_.v15) = 0;
  result = nn_sf_hipc_Receive_plt(&v15_.v15, v13, a2, a3);
  if ((_DWORD)result == 0) {
    *((_BYTE*)this_ + 68) = v15_.v15;
    *((_DWORD*)this_ + 16) = 2;
  }
  return result;
}

__attribute__((swiftcall)) void hipc_server_session_base_17b580(PSEUDO_X8 x8_,
                                                                __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v2;
  unsigned int v3;
  char v4;
  _BYTE* v6;
  char v7;
  char v8;
  int v9;
  int v10;
  int v11;
  char v12;
  int v13;
  int v14;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(unsigned __int8*)(result + 11);
  *(_DWORD*)(a2 + 24) = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)a2 = 0;
  if (v2 > 1) {
    if (v2 == 2) {
      v2 = 2048;
      v3 = *(unsigned __int16*)(result + 8);
      if ((v3 & 3) != 0) {
        result;
        return;
      }
      goto LABEL_13;
    }
    if (v2 != 3) {
      result;
      return;
    }
    if (*(_BYTE*)(result + 10) != 0) {
      v2 = (*(unsigned __int8*)(result + 10) << 10) + 2048;
    }
    else {
      v2 = 0;
    }
  }
  else if (v2 != 0) {
    v2 = 1024;
    v3 = *(unsigned __int16*)(result + 8);
    if ((v3 & 3) != 0) {
      result;
      return;
    }
  LABEL_13:
    v4 = 1;
    if ((*(_BYTE*)result & 1) == 0 && *(_BYTE*)(result + 1) == 0) {
      v4 = *(_BYTE*)(result + 2) != 0;
    }
    v6 = (_BYTE*)result;
    result = ({
      unsigned __int128 r_ = SdkRoutine_b8cb0_pair(result, v4);
      v10 = COERCE_AS(__typeof__(v10), (unsigned long long)(r_ >> 64));
      (__int64)(unsigned long long)r_;
    });
    v7 = v6[4];
    v8 = v6[5];
    v9 = (v6[3] & 0xF) << 16;
    *(_QWORD*)(a2 + 16) = result;
    *(_DWORD*)(a2 + 24) = v10;
    *(_DWORD*)(a2 + 4) = v9 & 0xFFFFF | ((v7 & 0xF) << 20) & 0xFFFFFF |
                         ((v8 & 0xF) << 24) | ((unsigned __int8)v6[6] << 28);
    v11 = v2 | (v3 >> 2) & 0x3FF;
    if ((v4 & 1) != 0) {
      v12 = v6[1];
      v13 = (unsigned __int8)v6[2];
      *(_BYTE*)(a2 + 1) = 1;
      v14 = *v6 & 0xE1 | (2 * (v12 & 0xF)) | (32 * v13);
      *(_DWORD*)(a2 + 8) = v11 | 0x80000000;
      *(_DWORD*)(a2 + 12) = v14;
    }
    else {
      *(_DWORD*)(a2 + 8) = v11;
    }
    *(_BYTE*)a2 = 1;
    {
      result;
      return;
    }
  }
  v3 = *(unsigned __int16*)(result + 8);
  if ((v3 & 3) != 0) {
    result;
    return;
  }
  goto LABEL_13;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_SaveMessageBufferIfNeeded(
    void* this_, const void* a2, __int64 a3)
{
  __int64 result;

  result = *((_QWORD*)this_ + 12);
  if (result != 0 && *((_BYTE*)this_ + 68) == 1) {
    if (*((_QWORD*)this_ + 13) != a3) {
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
    return memcpy_plt(result, a2, a3);
  }
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_Receive(void* this_,
                                                           void* a2, __int64 a3)
{
  int v3;
  __int64 result;
  __int64 v8;

  v3 = *((_DWORD*)this_ + 16);
  if (v3 == 2) {
    v8 = nn_diag_detail_NotNullImpl_plt(*((_QWORD*)this_ + 12));
    if ((v8 & 1) == 0) {
      nn_diag_detail_AbortImpl_plt_856170(v8);
    }
    if (*((_QWORD*)this_ + 13) != a3) {
      nn_diag_detail_AbortImpl_plt_856170(v8);
    }
    memcpy_plt(a2, *((_QWORD*)this_ + 12), a3);
    *((_DWORD*)this_ + 16) = 2;
    return 0;
  }
  else {
    if (v3 != 1) {
      nn_detail_UnexpectedDefaultImpl_plt_857150(this_);
    }
    result = nn_sf_hipc_server_v1_HipcServerSessionBase_ReceiveImpl_plt(this_,
                                                                        a2, a3);
    if ((_DWORD)result == 0 && *((_QWORD*)this_ + 12) != 0 &&
        *((_BYTE*)this_ + 68) == 1) {
      if (*((_QWORD*)this_ + 13) != a3) {
        nn_diag_detail_AbortImpl_plt_856170(result);
      }
      memcpy_plt(*((_QWORD*)this_ + 12), a2, a3);
      return 0;
    }
  }
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_ReplyAndReceiveStatic(
    _QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    unsigned __int16 a7)
{
  int v7;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 result;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v27;
  __int64 v28;
  _BYTE v29[4];

  v7 = *(_DWORD*)(a4 + 4);
  if (a6 == 0) {
    v29[0] = 0;
    v28 = 0;
    *(_DWORD*)(a4 + 4) = v7 & 0xFFFFC3FF;
    if (a3 == 0) {
      goto LABEL_37;
    }
    v21 = *(_DWORD*)(a3 + 64);
    if (v21 == 1) {
      goto LABEL_37;
    }
    if (v21 == 3) {
      result = nn_sf_hipc_ReplyAndReceive_plt(
          v29, &v28, *(unsigned int*)(a3 + 72), a2, a4, a5);
      if ((_DWORD)result != 0) {
        return result;
      }
      if (v29[0] != 0) {
        *(_DWORD*)(a3 + 64) = 1;
        while (nn_os_GetMultiWaitHolderUserData_plt(v28) == 1) {
          v18 = v29[0];
          if (v29[0] != 3) {
            goto LABEL_24;
          }
          v27 = *(_DWORD*)(a4 + 4);
          v29[0] = 0;
          v28 = 0;
          *(_DWORD*)(a4 + 4) = v27 & 0xFFFFC3FF;
        LABEL_37:
          result = nn_sf_hipc_ReplyAndReceive_plt(v29, &v28, 0, a2, a4, a5);
          if ((_DWORD)result != 0) {
            return result;
          }
        }
        goto LABEL_31;
      }
      goto LABEL_22;
    }
  LABEL_23:
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  v12 = a6 & 0xFFFFFFFFFFFFLL | ((unsigned __int64)a7 << 48);
  v29[0] = 0;
  v28 = 0;
  v13 = (a5 + 262136) & 0x3FFFC;
  v14 = (((_DWORD)a5 + 262136) << 18) & 0xFFF00000;
  *(_DWORD*)(a4 + 4) = v14 | v7 & 0x800FC3FF | 0x800;
  *(_QWORD*)(a4 + v13) = v12;
  if (a3 != 0) {
    v15 = *(_DWORD*)(a3 + 64);
    if (v15 != 1) {
      if (v15 == 3) {
        result = nn_sf_hipc_ReplyAndReceive_plt(
            v29, &v28, *(unsigned int*)(a3 + 72), a2, a4, a5);
        if ((_DWORD)result != 0) {
          return result;
        }
        if (v29[0] != 0) {
          *(_DWORD*)(a3 + 64) = 1;
          goto LABEL_9;
        }
      LABEL_22:
        v23 = 0;
      LABEL_32:
        result = 0;
        *a1 = v23;
        return result;
      }
      goto LABEL_23;
    }
  }
  result = nn_sf_hipc_ReplyAndReceive_plt(v29, &v28, 0, a2, a4, a5);
  if ((_DWORD)result != 0) {
    return result;
  }
LABEL_9:
  if (nn_os_GetMultiWaitHolderUserData_plt(v28) != 1) {
  LABEL_31:
    v23 = v28;
    goto LABEL_32;
  }
  v18 = v29[0];
  if (v29[0] != 3) {
  LABEL_24:
    v24 = v28;
    v25 = *(_QWORD*)(v28 + 96);
    *(_BYTE*)(v28 + 68) = v18;
    *(_DWORD*)(v24 + 64) = 2;
    if (v18 == 1 && v25 != 0) {
      if (*(_QWORD*)(v24 + 104) != a5) {
        nn_diag_detail_AbortImpl_plt_856170(v25);
      }
      memcpy_plt(v25, a4, a5);
    }
    goto LABEL_31;
  }
  v19 = v14 | 0x800;
  while (1) {
    v20 = *(_DWORD*)(a4 + 4);
    v29[0] = 0;
    v28 = 0;
    *(_DWORD*)(a4 + 4) = v20 & 0x800FC3FF | v19;
    *(_QWORD*)(a4 + v13) = v12;
    result = nn_sf_hipc_ReplyAndReceive_plt(v29, &v28, 0, a2, a4, a5);
    if ((_DWORD)result != 0) {
      return result;
    }
    if (nn_os_GetMultiWaitHolderUserData_plt(v28) != 1) {
      goto LABEL_31;
    }
    v18 = v29[0];
    if (v29[0] != 3) {
      goto LABEL_24;
    }
  }
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_MarkAsReceived(__int64 a1,
                                                                  char a2,
                                                                  __int64 a3,
                                                                  __int64 a4)
{
  __int64 result;
  __int64 v7;

  *(_BYTE*)(a1 + 68) = a2;
  *(_DWORD*)(a1 + 64) = 2;
  result = *(_QWORD*)(a1 + 96);
  if (a2 == 1 && result != 0) {
    if (*(_QWORD*)(a1 + 104) == a4) {
      return memcpy_plt(result, a3, a4);
    }
    else {
      v7 = nn_diag_detail_AbortImpl_plt_856170(result);
      if (*(_DWORD*)(v7 + 64) != 2) {
        nn_diag_detail_AbortImpl_plt_856170(v7);
        __udf(0);
      }
      return *(unsigned __int8*)(v7 + 68);
    }
  }
  return result;
}

__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_GetReceiveResult(__int64 a1)
{
  if (*(_DWORD*)(a1 + 64) != 2) {
    nn_diag_detail_AbortImpl_plt_856170(a1);
  }
  return *(unsigned __int8*)(a1 + 68);
}

#pragma GCC visibility pop
