#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void hipc_server_session_base_17b580(PSEUDO_X8,
                                                                __int64 result);
__int64 SdkRoutine_85e360(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85e410(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 memset_plt_alt1(void* this_, void*, int) __asm__("memset_plt");
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_ClearEvent_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_GetMultiWaitHolderUserData_plt(_QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_MoveAllMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_sf_17ec50(_QWORD);
__int64 nn_sf_cmif_server_CmifServerDomainManager_CreateDomain_plt(_QWORD);
__int64 nn_sf_hipc_AttachWaitHolderForReceive_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_CreateSession_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_GetMessageBufferOnTls_plt(_QWORD);
__int64 nn_sf_hipc_detail_HandleHipcErrorOnServer_plt(_QWORD);
__int64 nn_sf_hipc_server_GetCurrentClientInfo_plt(void);
__int64 nn_sf_hipc_server_v1_HipcServerSessionBase_ReplyAndReceiveStatic_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
        _QWORD, _QWORD);
__int64
    nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAsPort_plt(
        _QWORD, _QWORD);
extern __int64 SdkData_e87020;
__int64 nn_sf_v1_17d7d0(__int64 a1, unsigned int a2, __int64 a3);
__int64 nn_sf_v1_17d880(__int64 a1, unsigned __int16* a2);
__int64 nn_sf_v1_17db60(__int64 a1, _QWORD* a2);
__int64 nn_sf_v1_17db80(__int64 a1, __int64 a2, __int64 a3,
                        unsigned __int64 a4);
__int64 nn_sf_v1_17de40(__int64 a1, __int64 a2);
__int64 nn_sf_v1_17df80(__int64 a1, unsigned __int64* a2);
__int64 nn_sf_v1_17e0e0(__int64 result, __int64 a2);
__int64 nn_sf_v1_17e1e0(__int64 result, _QWORD* a2);
__int64 nn_sf_v1_17e2e0(__int64 result, __int64 a2);
__int64 nn_sf_v1_17e3e0(__int64 a1, unsigned __int64* a2, unsigned __int64 a3,
                        unsigned int a4);
__int64 nn_sf_v1_17e4c0(__int64 a1, unsigned int* a2);
__int64 nn_sf_v1_17e5d0(__int64 a1, __int64 a2);
__int64 nn_sf_v1_17e5e0(__int64 a1, _WORD* a2);
__int64 nn_sf_v1_17e600(__int64 a1, __int64 a2, unsigned int a3);
__int64 nn_sf_v1_17e660(__int64* a1, __int64 (***a2)(_QWORD, __int64*));

__int64 nn_sf_v1_17d7d0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v9;

  v3 = *(_QWORD*)(a1 + 8);
  v9 = nn_sf_hipc_server_GetCurrentClientInfo_plt();
  v6 = (*(__int64 (**)(__int64, __int64, __int64*))(*(_QWORD*)v3 + 8LL))(v3, a3,
                                                                         &v9);
  if (v6 == 0) {
    return 52235;
  }
  v7 = v6;
  nn_sf_hipc_AttachWaitHolderForReceive_plt(v6, a2);
  *(_BYTE*)(v7 + 68) = 0;
  *(_DWORD*)(v7 + 72) = a2;
  *(_DWORD*)(v7 + 64) = 1;
  nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_DoRegisterServerSessionToWait_plt(
      v3, v7);
  return 0;
}

__int64 nn_sf_v1_17d880(__int64 a1, unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  int v6;
  int v7;
  char v8;
  char v9;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  int v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  int v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int16 v41;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = (*a2 + 17) & 0x1FFFE;
  *(_QWORD*)(a1 + 128) = v3 + *(_QWORD*)v2 + 4LL * *(unsigned __int8*)(v2 + 33);
  v4 = *((unsigned __int8*)a2 + 8);
  if (*((_BYTE*)a2 + 8) == 0) {
    v7 = 0;
    v6 = 0;
    if (*((_BYTE*)a2 + 5) == 0) {
      goto LABEL_34;
    }
  LABEL_8:
    v10 = a1 + 140;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    while (1) {
      v17 = *((_BYTE*)a2 + v11 + 10);
      if ((v17 & 4) != 0) {
        *(_DWORD*)(v10 + ((v11 >> 3) & 0x1FFFFFFFFFFFFFFCLL)) |= 1 << v11;
        if ((v17 & 1) != 0) {
          ++v12;
        }
        else {
          if ((v17 & 2) == 0) {
            return 523;
          }
          ++v13;
        }
        goto LABEL_10;
      }
      if ((*((_BYTE*)a2 + v11 + 10) & 8) == 0) {
        break;
      }
      *(_DWORD*)(v10 + ((v11 >> 3) & 0x1FFFFFFFFFFFFFFCLL)) &= ~(1 << v11);
      if ((v17 & 1) == 0) {
        if ((v17 & 2) == 0) {
          return 523;
        }
      LABEL_31:
        ++v15;
        v16 += (v17 & 0x10) == 0;
        goto LABEL_10;
      }
      ++v14;
    LABEL_10:
      if (++v11 >= *((unsigned __int8*)a2 + 5)) {
        v37 = 2LL * v16;
        if (*(unsigned __int8*)(v2 + 8) == *((unsigned __int8*)a2 + 4)) {
          goto LABEL_37;
        }
        return 215051;
      }
    }
    if ((*((_BYTE*)a2 + v11 + 10) & 0x20) == 0) {
      return 523;
    }
    if ((*((_BYTE*)a2 + v11 + 10) & 1) != 0) {
      v27 = *(_QWORD*)v2 + 4LL * (3 * v12 + *(unsigned __int8*)(v2 + 30));
      v29 = *(unsigned int*)(v27 + 4);
      v28 = *(unsigned int*)(v27 + 8);
      v30 = (v28 >> 2) & 7;
      v31 = v29 | (v28 >> 28);
      v32 = 1 << v11;
      v33 = v31 | v30;
      v34 = (unsigned int)v11 >> 5;
      if (v33 != 0) {
        v35 = *(_DWORD*)(v10 + 4LL * v34) | v32;
      }
      else {
        v35 = *(_DWORD*)(v10 + 4LL * v34) & ~v32;
      }
      *(_DWORD*)(v10 + 4LL * v34) = v35;
      ++v12;
      ++v14;
      goto LABEL_10;
    }
    if ((*((_BYTE*)a2 + v11 + 10) & 2) == 0) {
      return 523;
    }
    v18 = *(_QWORD*)v2 + 4LL * (3 * v13 + *(unsigned __int8*)(v2 + 31));
    v20 = *(unsigned int*)(v18 + 4);
    v19 = *(unsigned int*)(v18 + 8);
    v21 = (v19 >> 2) & 7;
    v22 = v20 | (v19 >> 28);
    v23 = 1 << v11;
    v24 = v22 | v21;
    v25 = (unsigned int)v11 >> 5;
    if (v24 != 0) {
      v26 = *(_DWORD*)(v10 + 4LL * v25) | v23;
    }
    else {
      v26 = *(_DWORD*)(v10 + 4LL * v25) & ~v23;
    }
    ++v13;
    *(_DWORD*)(v10 + 4LL * v25) = v26;
    goto LABEL_31;
  }
  v5 = (char*)(a2 + 9);
  v6 = 0;
  v7 = 0;
  do {
    while (1) {
      v9 = *v5++;
      v8 = v9;
      if ((v9 & 1) == 0) {
        break;
      }
      ++v6;
      if (--v4 == 0) {
        goto LABEL_7;
      }
    }
    if ((v8 & 2) == 0) {
      return 523;
    }
    ++v7;
    --v4;
  } while (v4 != 0);
LABEL_7:
  if (*((_BYTE*)a2 + 5) != 0) {
    goto LABEL_8;
  }
LABEL_34:
  v37 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  v12 = 0;
  if (*(unsigned __int8*)(v2 + 8) != *((unsigned __int8*)a2 + 4)) {
    return 215051;
  }
LABEL_37:
  if (v6 != *(unsigned __int8*)(v2 + 9) || v7 != *(unsigned __int8*)(v2 + 10) ||
      v12 != *(unsigned __int8*)(v2 + 12) ||
      v13 != *(unsigned __int8*)(v2 + 13) ||
      v14 != *(unsigned __int8*)(v2 + 11) || *(_BYTE*)(v2 + 14) != 0 ||
      ((v3 + v37 + 3) & 0xFFFFFFFFFFFFFFFCLL) > *(unsigned __int16*)(v2 + 16)) {
    return 215051;
  }
  *(_QWORD*)(a1 + 72) = *(_QWORD*)a2;
  v38 = *((_QWORD*)a2 + 1);
  v39 = *((_QWORD*)a2 + 2);
  v40 = *((_QWORD*)a2 + 3);
  v41 = a2[16];
  *(_DWORD*)(a1 + 136) = v15;
  *(_WORD*)(a1 + 104) = v41;
  *(_QWORD*)(a1 + 88) = v39;
  *(_QWORD*)(a1 + 96) = v40;
  *(_QWORD*)(a1 + 80) = v38;
  return 0;
}

__int64 nn_sf_v1_17db60(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 16);
  *a2 = *(_QWORD*)(*(_QWORD*)v2 + 4LL * *(unsigned __int8*)(v2 + 26));
  return 0;
}

__int64 nn_sf_v1_17db80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64* v6;
  char v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  void* v13;
  char v14;
  __int64 v15;
  int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 result;

  v4 = *(_QWORD*)(a1 + 112);
  v5 = *(_QWORD*)(a1 + 120) + v4;
  if (*(_BYTE*)(a1 + 77) == 0) {
    v13 = (void*)(*(_QWORD*)(a1 + 120) + v4);
    if (v4 > v5) {
      return 72203;
    }
  LABEL_35:
    memset_plt(v13, nullptr, v5 - (_DWORD)v13, a4);
    return 0;
  }
  v6 = (unsigned __int64*)(a2 + 8);
  v7 = 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = (void*)(*(_QWORD*)(a1 + 120) + v4);
  a4 = 0xFFFF;
  v14 = 1;
  do {
    v21 = *(unsigned __int8*)(a1 + 82 + v8);
    if (((*(_DWORD*)(a1 + 140 + 4 * (v8 >> 5)) >> v8) & 1) != 0) {
      if ((v21 & 1) != 0) {
        v31 = 3 * v9++;
        v24 = (char)v21 <= -1;
        v32 = **(_QWORD**)(a1 + 16) +
              4LL * (v31 + *(unsigned __int8*)(*(_QWORD*)(a1 + 16) + 30LL));
        v33 = *(_QWORD*)v32;
        v34 = *(unsigned int*)(v32 + 8);
        v27 = v34 & 3;
        *(v6 - 1) = (16 * v34) & 0xF00000000LL |
                    ((unsigned __int64)(((unsigned int)v34 >> 2) & 7) << 36) |
                    HIDWORD(v33);
        *v6 = (unsigned int)v33 | ((unsigned __int64)(BYTE3(v34) & 0xF) << 32);
        v11 += (v21 & 0x20) != 0;
      }
      else {
        if ((v21 & 2) == 0) {
          goto LABEL_8;
        }
        v22 = 3 * v10++;
        v23 = **(_QWORD**)(a1 + 16) +
              4LL * (v22 + *(unsigned __int8*)(*(_QWORD*)(a1 + 16) + 31LL));
        v24 = (char)v21 <= -1;
        v25 = *(unsigned int*)(v23 + 8);
        v26 = *(_QWORD*)v23;
        v27 = v25 & 3;
        *(v6 - 1) = (16 * v25) & 0xF00000000LL |
                    ((unsigned __int64)(((unsigned int)v25 >> 2) & 7) << 36) |
                    HIDWORD(v26);
        *v6 = (unsigned int)v26 | ((unsigned __int64)(BYTE3(v25) & 0xF) << 32);
        v12 += (unsigned __int8)(v21 >> 5) &
               (unsigned __int8)~(unsigned __int8)(v21 >> 4) & 1;
      }
      if (v24) {
        v35 = 3;
      }
      else {
        v35 = 0;
      }
      if ((v21 & 0x40) != 0) {
        v36 = 1;
      }
      else {
        v36 = v35;
      }
      v7 &= v27 == v36;
    }
    else {
      if ((v21 & 1) == 0) {
        if ((v21 & 2) == 0) {
          goto LABEL_8;
        }
        if ((v21 & 0x10) != 0) {
          v30 = (unsigned __int64)v13 - *v6;
          if ((unsigned __int64)v13 < *v6) {
            goto LABEL_28;
          }
        }
        else {
          v28 = *(unsigned __int16*)(*(_QWORD*)(a1 + 128) + 2LL * v12++);
          *v6 = v28;
          v29 = (unsigned __int64)v13 >= v28;
          v30 = (unsigned __int64)v13 - v28;
          if (!v29) {
          LABEL_28:
            v14 = 0;
            goto LABEL_29;
          }
        }
        v13 = (void*)(v30 & 0xFFFFFFFFFFFFFFF0LL);
        *(v6 - 1) = v30 & 0xFFFFFFFFFFFFFFF0LL;
      LABEL_29:
        v10 += (v21 & 0x20) != 0;
        goto LABEL_8;
      }
      v15 = *(_QWORD*)(a1 + 16);
      v9 += (v21 & 0x20) != 0;
      v16 = *(unsigned __int8*)(v15 + 29) + 2 * v11++;
      v17 = *(_QWORD*)(*(_QWORD*)v15 + 4LL * v16);
      v18 = HIDWORD(v17) |
            ((unsigned __int64)((unsigned __int16)v17 >> 12) << 32) &
                0xFFFFFFFFFLL |
            (((v17 >> 6) & 7) << 36);
      v19 = v18 + WORD1(v17);
      if (v4 > v19) {
        v19 = v4;
      }
      v20 = WORD1(v17);
      if (v20 != 0) {
        v4 = v19;
      }
      *(v6 - 1) = v18;
      *v6 = v20;
    }
  LABEL_8:
    ++v8;
    v6 += 2;
  } while (v8 < *(unsigned __int8*)(a1 + 77));
  if ((v7 & 1) != 0) {
    result = 72203;
  }
  else {
    result = 215051;
  }
  if ((v7 & 1 & (unsigned __int8)v14) != 0) {
    if (v4 <= (unsigned __int64)v13) {
      goto LABEL_35;
    }
    return 72203;
  }
  return result;
}

__int64 nn_sf_v1_17de40(__int64 a1, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v4;
  unsigned __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;

  if (*(_BYTE*)(a1 + 80) != 0) {
    v2 = a1 + 90;
    v3 = (_BYTE*)(a2 + 4);
    v4 = a1;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do {
      while ((*(_BYTE*)(v2 + v5) & 1) == 0) {
        if ((*(_BYTE*)(v2 + v5) & 2) == 0) {
          nn_diag_detail_AbortImpl_plt_856170(a1);
          __udf(0);
        }
        a1 = *((unsigned int*)v3 - 1);
        *((_DWORD*)v3 - 1) =
            *(_DWORD*)(**(_QWORD**)(v4 + 16) +
                       4LL * (v7 +
                              *(unsigned __int8*)(*(_QWORD*)(v4 + 16) + 28LL)));
        v8 = (unsigned __int8)*v3;
        *v3 = 1;
        if (v8 == 1) {
          a1 = nn_os_CloseNativeHandle_plt(a1);
        }
        ++v7;
        ++v5;
        v3 += 8;
        if (v5 >= *(unsigned __int8*)(v4 + 80)) {
          return 0;
        }
      }
      a1 = *((unsigned int*)v3 - 1);
      *((_DWORD*)v3 - 1) =
          *(_DWORD*)(**(_QWORD**)(v4 + 16) +
                     4LL * (v6 +
                            *(unsigned __int8*)(*(_QWORD*)(v4 + 16) + 27LL)));
      v9 = (unsigned __int8)*v3;
      *v3 = 1;
      if (v9 == 1) {
        a1 = nn_os_CloseNativeHandle_plt(a1);
      }
      ++v6;
      ++v5;
      v3 += 8;
    } while (v5 < *(unsigned __int8*)(v4 + 80));
  }
  return 0;
}

__int64 nn_sf_v1_17df80(__int64 a1, unsigned __int64* a2)
{
  __int64 v2;
  char* v5;
  char v6;
  char v7;
  char v8;
  char v9;
  char v10;
  __int64 v11;
  _DWORD* v13;
  __int64 result;
  __int64 v15;
  _DWORD v16[7];
  struct {
    __int64 v17;
    int v18;
  } v17_;

  v2 = *(unsigned __int8*)(a1 + 81);
  if (*(_BYTE*)(a1 + 81) != 0) {
    v5 = (char*)(a1 + 98);
    v6 = 0;
    v7 = 0;
    do {
      while (1) {
        v9 = *v5++;
        v8 = v9;
        if ((v9 & 1) == 0) {
          break;
        }
        ++v6;
        if (--v2 == 0) {
          goto LABEL_9;
        }
      }
      if ((v8 & 2) == 0) {
        nn_diag_detail_AbortImpl_plt_856170(a1);
      }
      ++v7;
      --v2;
    } while (v2 != 0);
  }
  else {
    v7 = 0;
    v6 = 0;
  }
LABEL_9:
  v17_.v17 = 0;
  BYTE1(v17_.v17) = v6;
  v10 = *(_BYTE*)(a1 + 79);
  v17_.v18 = 0;
  *(_DWORD*)((char*)&v17_.v17 + 2) = (unsigned __int8)(v10 + v7);
  BYTE3(v17_.v17) = *(_DWORD*)(a1 + 136);
  LOWORD(v17_.v18) = ((*(_WORD*)(a1 + 74) + 3) & 0xFFFC) + 16;
  v11 = X8CALL_X0(__int64, hipc_server_session_base_17b580(
                               (void*)((__int64)v16), (__int64)&v17_.v17));
  qmemcpy((void*)(a1 + 24), v16, 28);
  if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v13 = *(_DWORD**)(a1 + 56);
  result = memset_plt_alt1((void*)&v13[*(unsigned __int8*)(a1 + 47)], nullptr,
                           (unsigned __int16)v17_.v18);
  v15 = *(_QWORD*)(a1 + 28);
  *v13 = v15 & 0xFFFF0000;
  v13[1] = HIDWORD(v15);
  if (*(_BYTE*)(a1 + 25) == 1) {
    v13[2] = *(_DWORD*)(a1 + 36);
  }
  *a2 = ((unsigned __int64)&v13[*(unsigned __int8*)(a1 + 47) + 3] + 3) &
        0xFFFFFFFFFFFFFFF0LL;
  a2[1] = *(unsigned __int16*)(a1 + 74);
  return result;
}

__int64 nn_sf_v1_17e0e0(__int64 result, __int64 a2)
{
  __int64 v2;
  _DWORD* v3;
  unsigned __int64 v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  int v8;
  int v9;

  if (*(_BYTE*)(result + 77) != 0) {
    v2 = *(_QWORD*)(result + 56);
    v3 = (_DWORD*)(a2 + 8);
    v4 = 0;
    v5 = 0;
    do {
      v9 = *(unsigned __int8*)(result + 82 + v4);
      if ((v9 & 8) != 0) {
        if ((v9 & 2) == 0) {
          goto LABEL_5;
        }
        v7 = *((_QWORD*)v3 - 1);
        v6 =
            (v7 >> 20) & 0xF000 | v5 & 0xE3F | (v7 >> 30) & 0x1C0 | (*v3 << 16);
      }
      else {
        if ((~v9 & 0x22) != 0) {
          goto LABEL_5;
        }
        if (((*(_DWORD*)(result + 140 + 4 * (v4 >> 5)) >> v4) & 1) != 0) {
          v6 = v5 & 0xE3F;
          LODWORD(v7) = 0;
        }
        else {
          v7 = *((_QWORD*)v3 - 1);
          v6 = (v7 >> 20) & 0xF000 | v5 & 0xE3F | (v7 >> 30) & 0x1C0 |
               (*v3 << 16);
        }
      }
      *(_DWORD*)(v2 + 4LL * (*(unsigned __int8*)(result + 43) + 2 * v5)) = v6;
      v8 = *(unsigned __int8*)(result + 43) + 2 * v5++;
      *(_DWORD*)(v2 + 4LL * (v8 + 1)) = v7;
    LABEL_5:
      ++v4;
      v3 += 4;
    } while (v4 < *(unsigned __int8*)(result + 77));
  }
  return result;
}

__int64 nn_sf_v1_17e1e0(__int64 result, _QWORD* a2)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned int v8;

  if (*(_BYTE*)(result + 79) != 0) {
    v3 = result;
    v4 = 0;
    while (1) {
      while (1) {
        v5 = *(_QWORD*)(v3 + 56);
        if (*a2 != 0) {
          break;
        }
        *(_DWORD*)(v5 + 4LL * *(unsigned __int8*)(v3 + 42) + 4 * v4++) = 0;
        a2 += 2;
        if (v4 >= *(unsigned __int8*)(v3 + 79)) {
          return result;
        }
      }
      v8 = 0;
      v7 = 0;
      v6 = nn_sf_hipc_CreateSession_plt(&v8, &v7);
      if (v6 != 0) {
        goto LABEL_10;
      }
      result = (***(__int64 (****)(_QWORD, _QWORD, _QWORD*))(v3 + 8))(
          *(_QWORD*)(v3 + 8), v8, a2);
      v6 = result;
      if ((_DWORD)result != 0) {
        break;
      }
      *(_DWORD*)(v5 + 4LL * *(unsigned __int8*)(v3 + 42) + 4 * v4++) = v7;
      a2 += 2;
      if (v4 >= *(unsigned __int8*)(v3 + 79)) {
        return result;
      }
    }
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
  LABEL_10:
    nn_diag_detail_AbortImpl_plt_858db0(&v6);
    __udf(0);
  }
  return result;
}

__int64 nn_sf_v1_17e2e0(__int64 result, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  unsigned __int64 v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  if (*(_BYTE*)(result + 81) != 0) {
    v2 = *(_QWORD*)(result + 56);
    v3 = (_BYTE*)(a2 + 4);
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do {
      while (1) {
        v8 = *((_DWORD*)v3 - 1);
        if ((*(_BYTE*)(result + 98 + v4) & 1) == 0) {
          break;
        }
        if (*v3 == 1) {
          *(_DWORD*)(result + 148 + 4LL * (int)(*(_DWORD*)(result + 144))++) =
              v8;
        }
        v7 = v5 + *(unsigned __int8*)(result + 41);
        ++v5;
        *(_DWORD*)(v2 + 4LL * v7) = v8;
        *v3 = 0;
        *((_DWORD*)v3 - 1) = 0;
        ++v4;
        v3 += 8;
        if (v4 >= *(unsigned __int8*)(result + 81)) {
          return result;
        }
      }
      if ((*(_BYTE*)(result + 98 + v4) & 2) == 0) {
        result = nn_diag_detail_AbortImpl_plt_856170(result);
      LABEL_13:
        nn_diag_detail_AbortImpl_plt_856170(result);
        __udf(0);
      }
      if ((*v3 & 1) == 0) {
        goto LABEL_13;
      }
      v9 = v6 + *(unsigned __int8*)(result + 79);
      ++v6;
      *(_DWORD*)(v2 + 4LL * (v9 + *(unsigned __int8*)(result + 42))) = v8;
      *v3 = 0;
      *((_DWORD*)v3 - 1) = 0;
      ++v4;
      v3 += 8;
    } while (v4 < *(unsigned __int8*)(result + 81));
  }
  return result;
}

__int64 nn_sf_v1_17e3e0(__int64 a1, unsigned __int64* a2, unsigned __int64 a3,
                        unsigned int a4)
{
  __int64 v7;
  _DWORD* v9;
  __int64 result;
  __int64 v11;
  _DWORD v12[7];
  struct {
    __int64 v13;
    int v14;
  } v13_;

  nn_sf_hipc_detail_HandleHipcErrorOnServer_plt(a4);
  v13_.v13 = 0;
  v13_.v14 = (unsigned __int16)(((a3 + 3) & 0xFFFC) + 16);
  v7 = X8CALL_X0(__int64, hipc_server_session_base_17b580((void*)((__int64)v12),
                                                          (__int64)&v13_.v13));
  qmemcpy((void*)(a1 + 24), v12, 28);
  if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v7);
  }
  v9 = *(_DWORD**)(a1 + 56);
  result = memset_plt_alt1((void*)&v9[*(unsigned __int8*)(a1 + 47)], nullptr,
                           (unsigned __int16)v13_.v14);
  v11 = *(_QWORD*)(a1 + 28);
  *v9 = v11 & 0xFFFF0000;
  v9[1] = HIDWORD(v11);
  if (*(_BYTE*)(a1 + 25) == 1) {
    v9[2] = *(_DWORD*)(a1 + 36);
  }
  *a2 = ((unsigned __int64)&v9[*(unsigned __int8*)(a1 + 47) + 3] + 3) &
        0xFFFFFFFFFFFFFFF0LL;
  a2[1] = a3;
  return result;
}

__int64 nn_sf_v1_17e4c0(__int64 a1, unsigned int* a2)
{
  __int64 v4;
  __int64 (**v5)(__int64, unsigned int*, __int64);
  __int64 v6;
  _QWORD* v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;

  v4 = nn_sf_cmif_server_CmifServerDomainManager_CreateDomain_plt(
      *(_QWORD*)(a1 + 8) + 16LL);
  if (v4 == 0) {
    return 102411;
  }
  v6 = v4 + 8;
  v5 = *(__int64 (***)(__int64, unsigned int*, __int64))(v4 + 8);
  v7 = (_QWORD*)v4;
  v14 = 0;
  v8 = (*v5)(v4 + 8, &v14, 1);
  if (v8 != 0) {
    v9 = v8;
    (*(void (**)(_QWORD*))(*v7 + 8LL))(v7);
    return v9;
  }
  else {
    (*(void (**)(__int64, _QWORD, __int64))(v7[1] + 16LL))(
        v6, v14, *(_QWORD*)(a1 + 16) + 112LL);
    v11 = *(_QWORD*)(a1 + 16);
    v12 = *(_QWORD*)(v11 + 112);
    v13 = SdkData_e87020;
    *(_QWORD*)(v11 + 112) = v7;
    *(_QWORD*)(v11 + 120) = v13;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
    *a2 = v14;
    return 0;
  }
}

__int64 nn_sf_v1_17e5d0(__int64 a1, __int64 a2)
{
  return SdkRoutine_85e360(a1 + 8, a2, *(_QWORD*)(a1 + 8));
}

__int64 nn_sf_v1_17e5e0(__int64 a1, _WORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 16);
  *a2 = *(_QWORD*)(v2 + 88);
  return 0;
}

__int64 nn_sf_v1_17e600(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3;
  __int64 v5;

  v3 = a1 + 8;
  v5 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 40LL))(
      *(_QWORD*)(a1 + 8), a3);
  if (v5 != 0) {
    return SdkRoutine_85e360(v3, a2, v5);
  }
  else {
    return 522;
  }
}

__int64 nn_sf_v1_17e660(__int64* a1, __int64 (***a2)(_QWORD, __int64*))
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  unsigned int v13;
  __int64 v14;
  unsigned int v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE v29[4];
  __int64* v30;
  _QWORD v31[2];
  __int64 v32;
  __int64 v33;

  v4 = nn_sf_hipc_GetMessageBufferOnTls_plt(a1);
  v5 = a1[2];
  v33 = 0;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5);
  v7 = nullptr;
  v31[1] = a1;
  v31[0] = &v33;
  v32 = 1;
  while (1) {
    nn_os_ClearEvent_plt(a1[2] + 216);
    v8 = a1[2];
    nn_os_SdkMutexType_Lock_plt(v8 + 344);
    nn_os_MoveAllMultiWaitHolder_plt(a1 + 3, v8 + 352);
    nn_os_SdkMutexType_Unlock_plt(v8 + 344);
    if ((a1[30] & 1) == 0) {
      nn_os_LinkMultiWaitHolder_plt(a1 + 3, a1 + 9);
      nn_os_LinkMultiWaitHolder_plt(a1 + 3, a1 + 22);
      *((_BYTE*)a1 + 240) = 1;
    }
    if (v6 != 0 && v7 == nullptr && v33 == 0) {
      v33 = (*(__int64 (**)(__int64))(*(_QWORD*)a1[2] + 72LL))(a1[2]);
    }
    v9 = a1[2];
    v30 = nullptr;
    nn_os_SdkMutexType_Lock_plt(v9 + 400);
    v10 = a1[2];
    v11 = *a1;
    *a1 = v10 + 408;
    v12 = *(_QWORD**)(v10 + 416);
    *(_QWORD*)(v11 + 8) = v12;
    *v12 = v11;
    *(_QWORD*)(v10 + 416) = a1;
    nn_os_SdkMutexType_Unlock_plt(v9 + 400);
    v13 = nn_sf_hipc_server_v1_HipcServerSessionBase_ReplyAndReceiveStatic_plt(
        &v30, a1 + 3, v7, v4, 256, v33, v6);
    v14 = a1[2];
    v15 = v13;
    nn_os_SdkMutexType_Lock_plt(v14 + 400);
    if (a1 != (__int64*)(a1[2] + 408)) {
      v16 = (__int64*)a1[1];
      v17 = *v16;
      *(_QWORD*)(*a1 + 8) = v16;
      *v16 = *a1;
      *(_QWORD*)(v17 + 8) = a1;
      *a1 = v17;
    }
    nn_os_SdkMutexType_Unlock_plt(v14 + 400);
    if (v15 != 0) {
      break;
    }
    v18 = v30;
    if (v30 != nullptr) {
      if (v30 == a1 + 9) {
        break;
      }
      if (v30 == a1 + 22) {
        nn_os_ClearEvent_plt(a1 + 17);
        v7 = nullptr;
      }
      else {
        v19 = nn_os_GetMultiWaitHolderUserData_plt(v30);
        nn_os_UnlinkMultiWaitHolder_plt(v18);
        if (v19 == 2) {
          nn_sf_hipc_server_v1_detail_HipcAllInOneServerManagerBase_ProcessAsPort_plt(
              a1[2], v18);
          v7 = nullptr;
        }
        else if (v19 == 1) {
          if (*((_BYTE*)a1 + 240) == 1) {
            nn_os_UnlinkMultiWaitHolder_plt(a1 + 22);
            nn_os_UnlinkMultiWaitHolder_plt(a1 + 9);
            *((_BYTE*)a1 + 240) = 0;
          }
          v20 = a1[2];
          nn_os_SdkMutexType_Lock_plt(v20 + 344);
          nn_os_MoveAllMultiWaitHolder_plt(v20 + 352, a1 + 3);
          nn_os_SignalEvent_plt(v20 + 216);
          nn_os_SdkMutexType_Lock_plt(v20 + 400);
          v21 = *(_QWORD*)(v20 + 416);
          if (v21 != v20 + 408) {
            nn_os_SignalEvent_plt(v21 + 136);
          }
          nn_os_SdkMutexType_Unlock_plt(v20 + 400);
          nn_os_SdkMutexType_Unlock_plt(v20 + 344);
          if (v18[10] != 0) {
            v22 = a1[2];
            v18[10] = 0;
            (*(void (**)(__int64))(*(_QWORD*)v22 + 80LL))(v22);
          }
          v23 = v33;
          v33 = 0;
          v29[0] = 0;
          v18[10] = v23;
          v24 = SdkRoutine_85e410(a1[2], v29, v18, v4, 256, 1);
          if ((_DWORD)v24 != 0) {
            v15 = v24;
            if ((v24 & 0x1FF) == 0xA &&
                (((unsigned int)v24 >> 9) & 0x1FFC) - 800 < 0x64) {
              nn_diag_detail_AbortImpl_plt_856170(v24);
              __udf(0);
            }
            break;
          }
          if (v29[0] == 1) {
            nn_os_LinkMultiWaitHolder_plt(a1 + 3, v18);
            v7 = v18;
            if (*((_DWORD*)v18 + 16) != 3) {
              v7 = nullptr;
            }
            v25 = v18[10];
            v18[10] = 0;
            v33 = v25;
          }
          else {
            v7 = nullptr;
          }
        }
        else {
          if (*((_BYTE*)a1 + 240) == 1) {
            nn_os_UnlinkMultiWaitHolder_plt(a1 + 22);
            nn_os_UnlinkMultiWaitHolder_plt(a1 + 9);
            *((_BYTE*)a1 + 240) = 0;
          }
          v26 = a1[2];
          nn_os_SdkMutexType_Lock_plt(v26 + 344);
          nn_os_MoveAllMultiWaitHolder_plt(v26 + 352, a1 + 3);
          nn_os_SignalEvent_plt(v26 + 216);
          nn_os_SdkMutexType_Lock_plt(v26 + 400);
          v27 = *(_QWORD*)(v26 + 416);
          if (v27 != v26 + 408) {
            nn_os_SignalEvent_plt(v27 + 136);
          }
          nn_os_SdkMutexType_Unlock_plt(v26 + 400);
          nn_os_SdkMutexType_Unlock_plt(v26 + 344);
          if (((**a2)(a2, v18) & 1) != 0) {
            nn_os_LinkMultiWaitHolder_plt(a1 + 3, v18);
          }
          v7 = nullptr;
        }
      }
    }
    else {
      *((_DWORD*)v7 + 16) = 1;
    }
  }
  if ((unsigned __int8)v32 == 1) {
    nn_sf_17ec50(v31);
  }
  return v15;
}

#pragma GCC visibility pop
