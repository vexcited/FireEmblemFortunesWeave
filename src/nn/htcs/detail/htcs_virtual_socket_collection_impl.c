#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nn_htcs_detail_virtual_socket_collection_FetchSocket_plt(PSEUDO_X8, _QWORD,
                                                             _QWORD, _QWORD);
__attribute__((swiftcall)) void
    nn_htcs_detail_virtual_socket_collection_doAccept_plt(PSEUDO_X8, _QWORD,
                                                          _QWORD, _QWORD,
                                                          _QWORD, _QWORD);
__int64 nn_htcs_FdSetZero_plt(_QWORD);
__int64 nn_htcs_detail_accept_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_htcs_detail_close_plt(_QWORD, _QWORD);
__int64 nn_htcs_detail_select_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD);
__int64 nn_htcs_detail_virtual_socket_collection_CreateSocket_plt(_QWORD,
                                                                  _QWORD,
                                                                  _QWORD);
__int64 nn_htcs_detail_virtual_socket_collection_GetSockets_plt(_QWORD, _QWORD,
                                                                _QWORD, _QWORD,
                                                                _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SleepThread_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__attribute__((swiftcall)) void
nn_htcs_detail_virtual_socket_collection_doAccept(PSEUDO_X8 x8_, __int64 a1,
                                                  _QWORD* a2, int a3,
                                                  __int64 a4, _DWORD* a5);
__int64 nn_htcs_detail_virtual_socket_collection_Accept(__int64 a1,
                                                        unsigned int a2,
                                                        __int64 a3, int* a4);
__int64 nn_htcs_detail_virtual_socket_collection_Select(__int64 a1, __int64 a2,
                                                        __int64 a3, __int64 a4,
                                                        __int64* a5, int* a6);
__attribute__((swiftcall)) void

nn_htcs_detail_virtual_socket_collection_doAccept(PSEUDO_X8 x8_, __int64 a1,
                                                  _QWORD* a2, int a3,
                                                  __int64 a4, _DWORD* a5)
{
  __int64* a6 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  void (***v13)(_QWORD);
  __int64 v14;
  __int64 v15;
  int v16;
  bool v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  struct {
    void (***v25)(_QWORD);
    __int64 v26;
  } v25_;
  void (***v27)(_QWORD);

  *a5 = 0;
  *a6 = 0;
  v27 = (void (***)(_QWORD))*a2;
  if (v27 != nullptr) {
    (**v27)(v27);
  }
  nn_htcs_detail_accept_plt(&v27, a4, a5);
  result = (__int64)v27;
  if (v27 != nullptr) {
    result = ((__int64 (*)(_QWORD))(*v27)[1])(v27);
  }
  if (*a5 == 38) {
    v13 = (void (***)(_QWORD))*a2;
    v25_.v25 = v13;
    if (v13 != nullptr) {
      (**v13)(v13);
    }
    nn_htcs_detail_accept_plt(&v25_.v25, a4, a5);
    v14 = v25_.v26;
    v15 = *a6;
    v25_.v26 = 0;
    *a6 = v14;
    if (v15 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
      if (v25_.v26 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25_.v26 + 8LL))(v25_.v26);
      }
    }
    if (v25_.v25 != nullptr) {
      (*v25_.v25)[1](v25_.v25);
    }
    nn_os_LockMutex_plt(a1 + 40);
    v16 = *(_DWORD*)(a1 + 24);
    v17 = __OFSUB__(v16, 1);
    v18 = v16 - 1;
    if (v18 < 0 != v17) {
    LABEL_19:
      *a5 = 8;
    }
    else {
      v19 = *(_QWORD*)(a1 + 16);
      v20 = 0;
      while (1) {
        v21 = (unsigned int)(v18 + v20) >> 1;
        v22 = *(_DWORD*)(v19 + (v21 << 7));
        if (v22 == a3) {
          break;
        }
        if (v22 <= a3) {
          v20 = v21 + 1;
          if ((int)v21 + 1 > v18) {
            goto LABEL_19;
          }
        }
        else {
          v18 = v21 - 1;
          if (v20 > (int)v21 - 1) {
            goto LABEL_19;
          }
        }
      }
      v23 = v19 + (v21 << 7);
      v24 = *(_QWORD*)(v23 + 8);
      *(_QWORD*)(v23 + 8) = 0;
      if (v24 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
      }
    }
    {
      nn_os_UnlockMutex_plt(a1 + 40);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 nn_htcs_detail_virtual_socket_collection_Accept(__int64 a1,
                                                        unsigned int a2,
                                                        __int64 a3, int* a4)
{
  int v8;
  bool v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  void (***v15)(_QWORD);
  int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  char v23;
  int v24;
  __int64 v25;
  void (**v26)(_QWORD);
  _QWORD* v27;
  void (***v28)(_QWORD);
  unsigned int v29;
  int v30;
  void (**v32)(_QWORD);
  void (**v33)(_QWORD);
  void (***v34)(_QWORD);
  void (***v35)(_QWORD);
  void (***v36)(_QWORD);
  void (***v37)(_QWORD);
  void (***v38)(_QWORD);

  *a4 = 0;
  nn_os_LockMutex_plt(a1 + 40);
  v8 = *(_DWORD*)(a1 + 24);
  v9 = __OFSUB__(v8, 1);
  v10 = v8 - 1;
  if (v10 < 0 != v9) {
  LABEL_7:
    *a4 = 8;
  LABEL_8:
    nn_os_UnlockMutex_plt(a1 + 40);
    if (*a4 == 8) {
      return (unsigned int)-1;
    }
    while (1) {
      nn_htcs_detail_virtual_socket_collection_FetchSocket_plt((void*)(&v38),
                                                               a1, a2, a4);
      v15 = v38;
      if (v38 != nullptr) {
        break;
      }
      nn_os_LockMutex_plt(a1 + 40);
      v16 = *(_DWORD*)(a1 + 24);
      v9 = __OFSUB__(v16, 1);
      v17 = v16 - 1;
      if (v17 < 0 != v9) {
      LABEL_28:
        *a4 = 8;
        nn_os_UnlockMutex_plt(a1 + 40);
        v30 = 27;
      LABEL_29:
        *a4 = v30;
        return (unsigned int)-1;
      }
      v18 = *(_QWORD*)(a1 + 16);
      v19 = 0;
      while (1) {
        v20 = (unsigned int)(v17 + v19) >> 1;
        v21 = *(_DWORD*)(v18 + (v20 << 7));
        if (v21 == a2) {
          break;
        }
        if (v21 <= (int)a2) {
          v19 = v20 + 1;
          if ((int)v20 + 1 > v17) {
            goto LABEL_28;
          }
        }
        else {
          v17 = v20 - 1;
          if (v19 > (int)v20 - 1) {
            goto LABEL_28;
          }
        }
      }
      v22 = v18 + (v20 << 7);
      v23 = *(_BYTE*)(v22 + 100);
      v24 = *(_DWORD*)(v22 + 88);
      nn_os_UnlockMutex_plt(a1 + 40);
      if (v24 <= 0) {
        v30 = 28;
        goto LABEL_29;
      }
      if ((v23 & 1) == 0) {
        v30 = 6;
        goto LABEL_29;
      }
      nn_os_SleepThread_plt(500000000);
    }
    if (*a4 != 0) {
      goto LABEL_24;
    }
    v32 = *v38;
    v36 = v38;
    (*v32)(v38);
    v27 = &v36;
    goto LABEL_33;
  }
  v11 = *(_QWORD*)(a1 + 16);
  v12 = 0;
  while (1) {
    v13 = (unsigned int)(v10 + v12) >> 1;
    v14 = *(_DWORD*)(v11 + (v13 << 7));
    if (v14 == a2) {
      break;
    }
    if (v14 <= (int)a2) {
      v12 = v13 + 1;
      if ((int)v13 + 1 > v10) {
        goto LABEL_7;
      }
    }
    else {
      v10 = v13 - 1;
      if (v12 > (int)v13 - 1) {
        goto LABEL_7;
      }
    }
  }
  v25 = v11 + (v13 << 7);
  v15 = *(void (****)(_QWORD))(v25 + 8);
  if (v15 == nullptr) {
    goto LABEL_8;
  }
  (**v15)(*(_QWORD*)(v25 + 8));
  nn_os_UnlockMutex_plt(a1 + 40);
  if (*a4 != 0) {
  LABEL_24:
    v28 = nullptr;
    goto LABEL_25;
  }
  v26 = *v15;
  v37 = v15;
  (*v26)(v15);
  v27 = &v37;
LABEL_33:
  nn_htcs_detail_virtual_socket_collection_doAccept_plt((void*)(&v38), a1, v27,
                                                        a2, a3, a4);
  v28 = v38;
  v38 = nullptr;
  (*v15)[1](v15);
  if (v28 != nullptr) {
    v33 = *v28;
    v35 = v28;
    (*v33)(v28);
    v29 =
        nn_htcs_detail_virtual_socket_collection_CreateSocket_plt(a1, &v35, a4);
    (*v28)[1](v28);
    if ((v29 & 0x80000000) != 0) {
      LODWORD(v38) = 0;
      v34 = v28;
      (**v28)(v28);
      nn_htcs_detail_close_plt(&v34, &v38);
      if (v34 != nullptr) {
        (*v34)[1](v34);
      }
    }
    goto LABEL_26;
  }
LABEL_25:
  v29 = -1;
LABEL_26:
  (*v15)[1](v15);
  if (v28 != nullptr) {
    (*v28)[1](v28);
  }
  return v29;
}

__int64 nn_htcs_detail_virtual_socket_collection_Select(__int64 a1, __int64 a2,
                                                        __int64 a3, __int64 a4,
                                                        __int64* a5, int* a6)
{
  __int64 v12;
  unsigned int v13;
  int v14;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  __int64* v24;
  unsigned int v25;
  __int64 v26;
  __int64 i;
  __int64 v28;
  _DWORD* v29;
  __int64 v30;
  __int64 j;
  __int64 v32;
  _DWORD* v33;
  __int64 v34;
  __int64 k;
  __int64 v36;
  _DWORD* v37;
  unsigned int v38;
  _QWORD v39[20];
  unsigned int v40;
  _DWORD v41[41];
  unsigned int v42;
  _DWORD v43[40];
  __int64 v44;
  __int64 v45;
  _BYTE v46[4];
  _DWORD v47[3];

  v44 = 0;
  v45 = 0;
  if (a5 != nullptr) {
    v12 = a5[1];
    v44 = *a5;
    v45 = v12;
  }
  memset(v43, 0, sizeof(v43));
  v13 = nn_htcs_detail_virtual_socket_collection_GetSockets_plt(a1, v43, a2,
                                                                v47, v46);
  v14 = v47[0];
  v42 = v13;
  if (v47[0] != 0) {
    goto LABEL_4;
  }
  while (1) {
    if (v46[0] == 1) {
      if (a5 != nullptr) {
        v17 = v44;
        v18 = v45;
        if (v44 <= 0 && v45 < 1) {
          return 0;
        }
        if (v44 <= 0 && v45 < 1001) {
          nn_os_SleepThread_plt(1000 * v45);
          v20 = 0;
        LABEL_35:
          v45 = v20;
          goto LABEL_7;
        }
        nn_os_SleepThread_plt(1000000);
        if (v18 < 1001) {
          v44 = v17 - 1;
          v20 = v18 + 999000;
          goto LABEL_35;
        }
      LABEL_34:
        v20 = v18 - 1000;
        goto LABEL_35;
      }
    LABEL_6:
      nn_os_SleepThread_plt(1000000);
      goto LABEL_7;
    }
    memset(v41, 0, 160);
    v21 = nn_htcs_detail_virtual_socket_collection_GetSockets_plt(a1, v41, a3,
                                                                  v47, v46);
    v14 = v47[0];
    v40 = v21;
    if (v47[0] != 0) {
      goto LABEL_4;
    }
    if (v46[0] == 1) {
      if (a5 == nullptr) {
        goto LABEL_6;
      }
      v22 = v44;
      v18 = v45;
      if (v44 <= 0 && v45 < 1) {
        return 0;
      }
      goto LABEL_28;
    }
    memset(v39, 0, sizeof(v39));
    v23 = nn_htcs_detail_virtual_socket_collection_GetSockets_plt(a1, v39, a4,
                                                                  v47, v46);
    v14 = v47[0];
    v38 = v23;
    if (v47[0] != 0) {
      goto LABEL_4;
    }
    if (v46[0] != 1) {
      break;
    }
    if (a5 == nullptr) {
      goto LABEL_6;
    }
    v22 = v44;
    v18 = v45;
    if (v44 <= 0 && v45 < 1) {
      return 0;
    }
  LABEL_28:
    if (v22 > 0 || v18 >= 1001) {
      nn_os_SleepThread_plt(1000000);
      if (v18 < 1001) {
        v44 = v22 - 1;
        v45 = v18 + 999000;
        goto LABEL_7;
      }
      goto LABEL_34;
    }
    nn_os_SleepThread_plt(1000 * v18);
    v45 = 0;
  LABEL_7:
    memset(v43, 0, sizeof(v43));
    v16 = nn_htcs_detail_virtual_socket_collection_GetSockets_plt(a1, v43, a2,
                                                                  v47, v46);
    v14 = v47[0];
    v42 = v16;
    if (v47[0] != 0) {
      goto LABEL_4;
    }
  }
  if ((int)(v42 + v23 + v40) < 1) {
    v14 = 28;
  LABEL_4:
    *a6 = v14;
    return 0xFFFFFFFFLL;
  }
  if (a5 != nullptr) {
    v24 = &v44;
  }
  else {
    v24 = nullptr;
  }
  v25 = nn_htcs_detail_select_plt(v43, &v42, v41, &v40, v39, &v38, v24, a6);
  if (a2 != 0) {
    v26 = v42;
    nn_htcs_FdSetZero_plt(a2);
    if ((int)v26 >= 1) {
      for (i = 0; i != v26; ++i) {
        nn_os_LockMutex_plt(a1 + 40);
        v28 = *(unsigned int*)(a1 + 28);
        if ((int)v28 >= 1) {
          v29 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 16LL);
          while (*v29 != v43[i]) {
            v29 += 32;
            if (--v28 == 0) {
              goto LABEL_46;
            }
          }
          *(_DWORD*)(a2 + 4 * i) = *(v29 - 4);
        }
      LABEL_46:
        nn_os_UnlockMutex_plt(a1 + 40);
      }
    }
  }
  if (a3 != 0) {
    v30 = v40;
    nn_htcs_FdSetZero_plt(a3);
    if ((int)v30 >= 1) {
      for (j = 0; j != v30; ++j) {
        nn_os_LockMutex_plt(a1 + 40);
        v32 = *(unsigned int*)(a1 + 28);
        if ((int)v32 >= 1) {
          v33 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 16LL);
          while (*v33 != v41[j]) {
            v33 += 32;
            if (--v32 == 0) {
              goto LABEL_56;
            }
          }
          *(_DWORD*)(a3 + 4 * j) = *(v33 - 4);
        }
      LABEL_56:
        nn_os_UnlockMutex_plt(a1 + 40);
      }
    }
  }
  if (a4 != 0) {
    v34 = v38;
    nn_htcs_FdSetZero_plt(a4);
    if ((int)v34 >= 1) {
      for (k = 0; k != v34; ++k) {
        nn_os_LockMutex_plt(a1 + 40);
        v36 = *(unsigned int*)(a1 + 28);
        if ((int)v36 >= 1) {
          v37 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 16LL);
          while (*v37 != *((_DWORD*)v39 + k)) {
            v37 += 32;
            if (--v36 == 0) {
              goto LABEL_66;
            }
          }
          *(_DWORD*)(a4 + 4 * k) = *(v37 - 4);
        }
      LABEL_66:
        nn_os_UnlockMutex_plt(a1 + 40);
      }
    }
  }
  return v25;
}

#pragma GCC visibility pop
