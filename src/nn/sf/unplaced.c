#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_8584e0(_QWORD, _QWORD);
__int64 SdkRoutine_b83c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_b8cb0(__int64, char);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_os_ClearSystemEvent_plt(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_CreateSystemEvent_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_DestroySystemEvent_plt(_QWORD);
__int64 nn_os_GetReadableHandleOfSystemEvent_plt(_QWORD);
__int64 nn_os_MoveAllMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_SdkConditionVariableType_Broadcast_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Wait_plt(_QWORD, _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_SignalSystemEvent_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_sf_UnitHeapMemoryResource_Allocate(__int64);
__int64 nn_sf_hipc_CloseServerSessionHandle_plt(_QWORD);
__int64 nn_sf_hipc_CreateSession_plt(_QWORD, _QWORD);
__int64 strcmp_plt(void* this_, const char*);
extern __int64 SdkData_e86c08;
extern __int64 SdkData_e87038;
extern __int64 SdkData_e87040;
extern __int64 SdkData_e87048;
extern __int64 SdkData_e87050;
extern __int64 SdkData_e87058;
extern __int64 SdkData_eb8558;
__int64 nn_sf_b8390(__int64 a1, _QWORD* a2);
__int64 nn_sf_e3940(__int64 a1, unsigned int* a2);
__int64 nn_sf_17ec50(__int64 a1);
__int64 nn_sf_17ed00(__int64* a1, __int64* a2, unsigned int** a3);
__int64 nn_sf_17ee10(unsigned __int64* a1, __int64* a2, __int64* a3,
                     unsigned int** a4, int a5);
__int64 nn_sf_17f6d0(__int64 a1, __int64 a2);
__int64 nn_sf_17f8c0(__int64 a1, _QWORD* a2);
__int64 nn_sf_17f940(__int64 a1, _QWORD* a2);
__int64 nn_sf_17fa00(__int64 a1, _QWORD* a2, __int64 a3, unsigned int a4);
__int64 nn_sf_17fa80(__int64 a1);
bool nn_sf_1804e0(__int64 a1, int a2);
bool nn_sf_1805a0(__int64 a1, const char* a2);
__int64 nn_sf_180640(__int64 a1, _DWORD* a2, __int64 a3, const char* a4);
__int64 nn_sf_180780(__int64 a1, const char* a2);
__int64 nn_sf_180840(__int64 a1, _DWORD* a2, int a3);
__int64 nn_sf_1809c0(__int64 a1, _DWORD* a2, const char* a3);
__int64 nn_sf_180b60(__int64 a1, int a2);

__int64 nn_sf_b8390(__int64 a1, _QWORD* a2)
{
  return SdkRoutine_b83c0(a1 + 8, *a2, a2[1], 0);
}

__int64 nn_sf_e3940(__int64 a1, unsigned int* a2)
{
  unsigned int v2;
  int v3;
  int v4;
  int v5;
  char v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  char v11;
  unsigned int v12;
  __int64 result;
  int v14;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)a1 = a2;
  v2 = *a2;
  v3 = a2[1];
  if (v3 < 0) {
    v7 = a2[2];
    v6 = v7 & 1;
    v5 = (v7 >> 1) & 0xF;
    v4 = (v7 >> 5) & 0xF;
  }
  else {
    LOBYTE(v4) = 0;
    LOBYTE(v5) = 0;
    v6 = 0;
  }
  v8 = ((unsigned int)v3 >> 10) & 0xF;
  *(_BYTE*)(a1 + 8) = v6;
  v9 = a1 + 8;
  *(_BYTE*)(a1 + 9) = v5;
  *(_BYTE*)(a1 + 10) = v4;
  *(_BYTE*)(a1 + 12) = (v2 >> 20) & 0xF;
  *(_BYTE*)(a1 + 15) = 0;
  v10 = a1 + 8;
  if (v8 >= 3) {
    v11 = 3;
  }
  else {
    v11 = ((unsigned int)v3 >> 10) & 0xF;
  }
  *(_WORD*)(v9 + 12) = v2;
  *(_WORD*)(v9 + 14) = v3 < 0;
  *(_WORD*)(v9 + 16) = ((unsigned int)v3 >> 20) & 0x7FF;
  *(_BYTE*)(v9 + 3) = BYTE2(v2) & 0xF;
  v12 = 0x10000u >> (8 * v8);
  if (v8 >= 3) {
    LOBYTE(v12) = v8 - 2;
  }
  *(_BYTE*)(v9 + 5) = HIBYTE(v2) & 0xF;
  *(_BYTE*)(v9 + 11) = v11;
  *(_BYTE*)(v9 + 6) = v2 >> 28;
  *(_BYTE*)(v9 + 10) = v12;
  *(_WORD*)(v9 + 8) = 4 * (v3 & 0x3FF);
  result = SdkRoutine_b8cb0(v10, v3 < 0),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v9 + 18) = result;
  *(_DWORD*)(v9 + 26) = v14;
  return result;
}

__int64 nn_sf_17ec50(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD**)a1;
  v2 = *(_QWORD*)(a1 + 8);
  if (**(_QWORD**)a1 != 0) {
    v3 = *(_QWORD*)(v2 + 16);
    *v1 = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 80LL))(v3);
  }
  if (*(_BYTE*)(v2 + 240) == 1) {
    nn_os_UnlinkMultiWaitHolder_plt(v2 + 176);
    nn_os_UnlinkMultiWaitHolder_plt(v2 + 72);
    *(_BYTE*)(v2 + 240) = 0;
  }
  v4 = *(_QWORD*)(v2 + 16);
  nn_os_SdkMutexType_Lock_plt(v4 + 344);
  nn_os_MoveAllMultiWaitHolder_plt(v4 + 352, v2 + 24);
  nn_os_SignalEvent_plt(v4 + 216);
  nn_os_SdkMutexType_Lock_plt(v4 + 400);
  v5 = *(_QWORD*)(v4 + 416);
  if (v5 != v4 + 408) {
    nn_os_SignalEvent_plt(v5 + 136);
  }
  nn_os_SdkMutexType_Unlock_plt(v4 + 400);
  return nn_os_SdkMutexType_Unlock_plt(v4 + 344);
}

__int64 nn_sf_17ed00(__int64* a1, __int64* a2, unsigned int** a3)
{
  unsigned int* v3;
  unsigned int* v4;
  bool v5;
  unsigned int* v6;
  int v7;
  __int64 result;
  _QWORD* v10;
  unsigned int* v11[2];
  _QWORD* v12;

  v3 = *a3;
  v4 = a3[1];
  v11[0] = *a3;
  v11[1] = v4;
  v5 = (unsigned __int64)v4 >= 0x10;
  v6 = v4 - 4;
  if (!v5) {
    return 103434;
  }
  v11[0] = v3 + 4;
  v11[1] = v6;
  if (*v3 != 1229145683) {
    return 108042;
  }
  v7 = v3[2];
  v12 = nullptr;
  result = nn_sf_17ee10((unsigned __int64*)&v12, a1, a2, v11, v7);
  if ((result & 0x1FF) != 0xA ||
      (((unsigned int)result >> 9) & 0x1FFC) - 800 >= 0x64) {
    v10 = v12;
    if (v12 != nullptr) {
      *v12 = 1329808979;
      *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v10 + 4) = result;
      *(_DWORD*)((char*)((__int64*)0x4LL) + (_QWORD)v10 + 8) = -328473601;
      (*(void (**)(__int64*))(*a2 + 80))(a2);
      return 0;
    }
    else if ((_DWORD)result == 0) {
      nn_diag_detail_AbortImpl_plt_856170(result);
    }
  }
  return result;
}

__int64 nn_sf_17ee10(unsigned __int64* a1, __int64* a2, __int64* a3,
                     unsigned int** a4, int a5)
{
  __int64 result;
  unsigned __int64* v7;
  __int64* v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64* v25;
  unsigned __int64 v26;
  bool v27;
  unsigned __int64 v28;
  unsigned int* v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 (**v33)(_QWORD, _QWORD);
  unsigned int v34;
  __int64 (**v35)(_QWORD, _QWORD);
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64* v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned int* v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned int v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;

  result = 113162;
  if (a5 <= 1) {
    if (a5 == 0) {
      v7 = a1;
      v9 = a3;
      result = (*(__int64 (**)(__int64*, __int64))*a3)(a3, SdkData_e87040);
      if ((_DWORD)result != 0) {
        return result;
      }
      v16 = *a2;
      HIDWORD(v64) = 0;
      result =
          (*(__int64 (**)(__int64*, char*))(v16 + 32))(a2, (char*)&v64 + 4);
      if ((result & 0x1FF) == 0xA &&
          (((unsigned int)result >> 9) & 0x1FFC) - 800 < 0x64) {
        return result;
      }
      v11 = 103434;
      if ((_DWORD)result == 0) {
        v19 = *v9;
        v65 = 0;
        v66 = 0;
        (*(void (**)(__int64*, unsigned __int64*))(v19 + 40))(v9, &v65);
        if (v66 < 0x10) {
          return v11;
        }
        v20 = v65;
        v21 = v66 & 0xFFFFFFFFFFFFFFFCLL;
        *v7 = v65;
        if (v21 != 16) {
          v11 = 0;
          *(_DWORD*)(v20 + 16) = HIDWORD(v64);
          return v11;
        }
        return 118794;
      }
    LABEL_22:
      v17 = *v9;
      v65 = 0;
      v66 = 0;
      v18 = result;
      (*(void (**)(__int64*, unsigned __int64*, __int64, _QWORD))(v17 + 72))(
          v9, &v65, 16, (unsigned int)result);
      if (v66 >= 0x10) {
        v11 = v18;
        *v7 = v65;
      }
      return v11;
    }
    if (a5 != 1) {
      return result;
    }
    v25 = a1;
    result = (*(__int64 (**)(__int64*, __int64))*a3)(a3, SdkData_e87048);
    if ((_DWORD)result != 0) {
      return result;
    }
    v26 = (unsigned __int64)a4[1];
    v27 = v26 >= 4;
    v28 = v26 - 4;
    if (!v27) {
      return 118282;
    }
    v29 = (*a4)++;
    a4[1] = (unsigned int*)v28;
    v30 = *a2;
    v31 = *v29;
    v66 = 0;
    result = (*(__int64 (**)(__int64*, unsigned __int64*, __int64))(v30 + 40))(
        a2, &v66, v31);
    if ((result & 0x1FF) != 0xA ||
        (((unsigned int)result >> 9) & 0x1FFC) - 800 >= 0x64) {
      v32 = 103434;
      if ((_DWORD)result != 0) {
        v33 = (__int64 (**)(_QWORD, _QWORD))*a3;
        v64 = 0;
        v65 = 0;
        v34 = result;
        ((void (*)(__int64*, unsigned __int64*, __int64, _QWORD))v33[9])(
            a3, &v64, 16, (unsigned int)result);
        if (v65 >= 0x10) {
          v32 = v34;
          *v25 = v64;
        }
      }
      else {
        v35 = (__int64 (**)(_QWORD, _QWORD))*a3;
        v64 = 0;
        v65 = 0;
        ((__int64 (**)(__int64*, unsigned __int64*))v35)[5](a3, &v64);
        v36 = v65 - 16;
        if (v65 >= 0x10) {
          v37 = v64 + 16;
          *v25 = v64;
          v64 = v37;
          v65 = v36;
          (*(void (**)(__int64*, unsigned __int64*))(*a3 + 64))(a3, &v66);
          v32 = 0;
        }
      }
      result = v32;
    }
    if (BYTE4(v66) != 1) {
      return result;
    }
  LABEL_68:
    v63 = result;
    nn_os_CloseNativeHandle_plt((unsigned int)v66);
    return v63;
  }
  switch (a5) {
  case 2:
    v40 = a1;
    result = (*(__int64 (**)(__int64*, __int64))*a3)(a3, SdkData_e87050);
    if ((_DWORD)result != 0) {
      return result;
    }
    v41 = *a2;
    v66 = 0;
    result = (*(__int64 (**)(__int64*, unsigned __int64*))(v41 + 48))(a2, &v66);
    if ((result & 0x1FF) != 0xA ||
        (((unsigned int)result >> 9) & 0x1FFC) - 800 >= 0x64) {
      v42 = 103434;
      if ((_DWORD)result != 0) {
        v43 = *a3;
        v64 = 0;
        v65 = 0;
        v44 = result;
        (*(void (**)(__int64*, unsigned __int64*, __int64, _QWORD))(v43 + 72))(
            a3, &v64, 16, (unsigned int)result);
        if (v65 >= 0x10) {
          v42 = v44;
          *v40 = v64;
        }
      }
      else {
        v45 = *a3;
        v64 = 0;
        v65 = 0;
        (*(void (**)(__int64*, unsigned __int64*))(v45 + 40))(a3, &v64);
        v46 = v65 - 16;
        if (v65 >= 0x10) {
          v47 = v64 + 16;
          *v40 = v64;
          v64 = v47;
          v65 = v46;
          (*(void (**)(__int64*, unsigned __int64*))(*a3 + 64))(a3, &v66);
          v42 = 0;
        }
      }
      result = v42;
    }
    if (BYTE4(v66) != 1) {
      return result;
    }
    goto LABEL_68;
  case 3:
    v7 = a1;
    v9 = a3;
    result = (*(__int64 (**)(__int64*, __int64))*a3)(a3, SdkData_e87038);
    if ((_DWORD)result != 0) {
      return result;
    }
    v10 = *a2;
    WORD2(v64) = 0;
    result = (*(__int64 (**)(__int64*, char*))(v10 + 56))(a2, (char*)&v64 + 4);
    if ((result & 0x1FF) == 0xA &&
        (((unsigned int)result >> 9) & 0x1FFC) - 800 < 0x64) {
      return result;
    }
    v11 = 103434;
    if ((_DWORD)result == 0) {
      v12 = *v9;
      v65 = 0;
      v66 = 0;
      (*(void (**)(__int64*, unsigned __int64*))(v12 + 40))(v9, &v65);
      if (v66 < 0x10) {
        return v11;
      }
      v13 = v65;
      v14 = v66 & 0xFFFFFFFFFFFFFFFELL;
      *v7 = v65;
      if (v14 != 16) {
        v11 = 0;
        *(_WORD*)(v13 + 16) = WORD2(v64);
        return v11;
      }
      return 118794;
    }
    goto LABEL_22;
  case 4:
    v51 = a1;
    result = (*(__int64 (**)(__int64*, __int64))*a3)(a3, SdkData_e87058);
    if ((_DWORD)result == 0) {
      v52 = (unsigned __int64)a4[1];
      v27 = v52 >= 4;
      v53 = v52 - 4;
      if (!v27) {
        return 118282;
      }
      v54 = (*a4)++;
      a4[1] = (unsigned int*)v53;
      v55 = *a2;
      v56 = *v54;
      v66 = 0;
      result = (*(__int64 (**)(__int64*, unsigned __int64*, __int64))(
          v55 + 64))(a2, &v66, v56);
      if ((result & 0x1FF) != 0xA ||
          (((unsigned int)result >> 9) & 0x1FFC) - 800 >= 0x64) {
        v57 = 103434;
        if ((_DWORD)result != 0) {
          v58 = *a3;
          v64 = 0;
          v65 = 0;
          v59 = result;
          (*(void (**)(__int64*, unsigned __int64*, __int64, _QWORD))(
              v58 + 72))(a3, &v64, 16, (unsigned int)result);
          if (v65 >= 0x10) {
            v57 = v59;
            *v51 = v64;
          }
        }
        else {
          v60 = *a3;
          v64 = 0;
          v65 = 0;
          (*(void (**)(__int64*, unsigned __int64*))(v60 + 40))(a3, &v64);
          v61 = v65 - 16;
          if (v65 >= 0x10) {
            v62 = v64 + 16;
            *v51 = v64;
            v64 = v62;
            v65 = v61;
            (*(void (**)(__int64*, unsigned __int64*))(*a3 + 64))(a3, &v66);
            v57 = 0;
          }
        }
        result = v57;
      }
      if (BYTE4(v66) == 1) {
        goto LABEL_68;
      }
    }
    break;
  default:
    break;
  }
  return result;
}

__int64 nn_sf_17f6d0(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 result;
  int v5;
  __int64 v7;
  __int64 (***v8)(_QWORD, _QWORD*);
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  __int16 v12;

  v2 = *(unsigned __int8*)(a2 + 7);
  result = 120330;
  if (v2 > 8) {
    return 120842;
  }
  v5 = *(unsigned __int8*)(a2 + 6);
  if (*(_DWORD*)(a1 + 72) == v5) {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = *(__int64 (****)(_QWORD, _QWORD*))(a1 + 8);
    v11[0] = *(_QWORD*)a2;
    v11[1] = v7;
    v9 = *(_QWORD*)(a2 + 16);
    v10 = *(_QWORD*)(a2 + 24);
    HIWORD(v11[0]) = 0;
    LOWORD(v11[0]) += 4 * v5 + 16;
    v11[2] = v9;
    v11[3] = v10;
    LOWORD(v9) = *(_WORD*)(a2 + 32);
    WORD1(v11[0]) += (4 * (_BYTE)v2 + 16) & 0xFC;
    v12 = v9;
    result = (**v8)(v8, v11);
    if ((_DWORD)result == 0) {
      result = (***(__int64 (****)(_QWORD, __int64, _QWORD))(a1 + 16))(
          *(_QWORD*)(a1 + 16), a1 + 32, *(unsigned __int8*)(a2 + 7));
      if ((_DWORD)result == 0) {
        *(_DWORD*)(a1 + 76) = *(unsigned __int8*)(a2 + 7);
        *(_QWORD*)(a1 + 80) = *(unsigned __int16*)(a2 + 2);
      }
    }
  }
  return result;
}

__int64 nn_sf_17f8c0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  _QWORD v8[2];

  v3 = *(_QWORD*)(a1 + 8);
  v8[0] = 0;
  v8[1] = 0;
  result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 40LL))(v3, v8);
  v6 = v8[0];
  *(_DWORD*)v8[0] = *(_DWORD*)(a1 + 76);
  *(_QWORD*)(v6 + 4) = 0;
  *(_DWORD*)(v6 + 12) = 0;
  v6 += 16;
  v7 = *(_QWORD*)(a1 + 80);
  *a2 = v6;
  a2[1] = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 64) = v7 + v6;
  return result;
}

__int64 nn_sf_17f940(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned int* v4;
  __int64 i;
  unsigned int v7;
  __int64 v8;

  v2 = *(int*)(a1 + 76);
  if ((int)v2 > 0) {
    v4 = (unsigned int*)(a1 + 32);
    for (i = 0; i < v2; ++i) {
      while (1) {
        v8 = *(_QWORD*)(a1 + 16);
        if (*a2 == 0) {
          break;
        }
        v7 = *v4++;
        (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v8 + 16LL))(v8, v7,
                                                                      a2);
        v2 = *(int*)(a1 + 76);
        ++i;
        a2 += 2;
        if (i >= v2) {
          return memcpy_plt(*(_QWORD*)(a1 + 64), a1 + 32, 4 * v2);
        }
      }
      (*(void (**)(__int64, unsigned int*, __int64))(*(_QWORD*)v8 + 8LL))(
          v8, v4, 1);
      *v4++ = 0;
      v2 = *(int*)(a1 + 76);
      a2 += 2;
    }
  }
  return memcpy_plt(*(_QWORD*)(a1 + 64), a1 + 32, 4 * v2);
}

__int64 nn_sf_17fa00(__int64 a1, _QWORD* a2, __int64 a3, unsigned int a4)
{
  __int64 v5;
  __int64 v8;
  _QWORD v10[2];

  v5 = *(_QWORD*)(a1 + 8);
  v10[0] = 0;
  v10[1] = 0;
  (*(void (**)(__int64, _QWORD*, __int64, _QWORD))(*(_QWORD*)v5 + 72LL))(
      v5, v10, a3 + 16, a4);
  v8 = v10[0];
  *(_QWORD*)v10[0] = 0;
  *(_QWORD*)(v8 + 8) = 0;
  *a2 = v8 + 16;
  a2[1] = a3;
  return (
      *(__int64 (**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 16) + 8LL))(
      *(_QWORD*)(a1 + 16), a1 + 32, *(unsigned int*)(a1 + 76));
}

__int64 nn_sf_17fa80(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 80LL))(
      *(_QWORD*)(a1 + 8));
}

bool nn_sf_1804e0(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  _BOOL4 v7;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v4 = *(_QWORD*)(a1 + 24);
  v5 = a1 + 16;
  if (v4 == a1 + 16) {
    v4 = a1 + 16;
  LABEL_7:
    v7 = v4 != v5;
  }
  else {
    do {
      nn_os_SdkMutexType_Lock_plt(v4 + 24);
      if ((*(_BYTE*)(v4 + 40) & 1) != 0) {
        v6 = nn_os_GetReadableHandleOfSystemEvent_plt(v4 + 56);
        nn_os_SdkMutexType_Unlock_plt(v4 + 24);
        if (v6 == a2) {
          goto LABEL_7;
        }
      }
      else {
        nn_os_SdkMutexType_Unlock_plt(v4 + 24);
      }
      v4 = *(_QWORD*)(v4 + 8);
    } while (v4 != v5);
    v7 = false;
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  return v7;
}

bool nn_sf_1805a0(__int64 a1, const char* a2)
{
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v5 = *(_QWORD*)(a1 + 24);
  v6 = a1 + 16;
  if (v5 == a1 + 16) {
    v5 = a1 + 16;
  }
  else {
    while ((unsigned int)strcmp_plt(*(void**)(v5 + 16), a2) != 0) {
      v5 = *(_QWORD*)(v5 + 8);
      if (v5 == v6) {
        v7 = false;
        goto LABEL_7;
      }
    }
  }
  v7 = v5 != v6;
LABEL_7:
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  return v7;
}

__int64 nn_sf_180640(__int64 a1, _DWORD* a2, __int64 a3, const char* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v15;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v8 = *(_QWORD*)(a1 + 24);
  v9 = a1 + 16;
  if (v8 != a1 + 16) {
    while ((unsigned int)strcmp_plt(*(void**)(v8 + 16), a4) != 0) {
      v8 = *(_QWORD*)(v8 + 8);
      if (v8 == v9) {
        v10 = 0;
        goto LABEL_8;
      }
    }
  }
  if (v8 == v9) {
    v10 = 0;
  }
  else {
    v10 = v8;
  }
LABEL_8:
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  v11 = nn_diag_detail_NotNullImpl_plt(v10);
  if ((v11 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v11);
  }
  v12 = nn_os_SdkMutexType_Lock_plt(v10 + 24);
  if (*(_BYTE*)(v10 + 32) == 1) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  if (*(_BYTE*)(v10 + 40) == 1) {
    nn_diag_detail_AbortImpl_plt_856170(v12);
  }
  *(_QWORD*)(v10 + 56) = 0;
  *(_BYTE*)(v10 + 32) = 1;
  *(_BYTE*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  v15 = nn_os_CreateSystemEvent_plt(v10 + 56, 0, 1);
  if (v15 != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(&v15);
  }
  *(_BYTE*)(v10 + 40) = 1;
  *(_QWORD*)(v10 + 104) = v10 + 104;
  *(_QWORD*)(v10 + 112) = v10 + 104;
  nn_os_SdkConditionVariableType_Broadcast_plt(v10 + 28);
  v13 = nn_os_GetReadableHandleOfSystemEvent_plt(v10 + 56);
  nn_os_SdkMutexType_Unlock_plt(v10 + 24);
  *a2 = v13;
  return 0;
}

__int64 nn_sf_180780(__int64 a1, const char* a2)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v5 = *(_QWORD*)(a1 + 24);
  v6 = a1 + 16;
  if (v5 != a1 + 16) {
    while ((unsigned int)strcmp_plt(*(void**)(v5 + 16), a2) != 0) {
      v5 = *(_QWORD*)(v5 + 8);
      if (v5 == v6) {
        v7 = 0;
        goto LABEL_8;
      }
    }
  }
  if (v5 == v6) {
    v7 = 0;
  }
  else {
    v7 = v5;
  }
LABEL_8:
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  v8 = nn_diag_detail_NotNullImpl_plt(v7);
  if ((v8 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v8);
  }
  nn_os_SdkMutexType_Lock_plt(v7 + 24);
  *(_BYTE*)(v7 + 32) = 0;
  return nn_os_SdkMutexType_Unlock_plt(v7 + 24);
}

__int64 nn_sf_180840(__int64 a1, _DWORD* a2, int a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;

  v3 = a1;
  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v6 = *(_QWORD*)(v3 + 24);
  v7 = v3 + 16;
  if (v6 == v3 + 16) {
  LABEL_7:
    if (v6 == v7) {
      v9 = 0;
    }
    else {
      v9 = v6;
    }
    nn_os_SdkMutexType_Unlock_plt(v3 + 8);
    v10 = nn_diag_detail_NotNullImpl_plt(v9);
    if ((v10 & 1) != 0) {
      goto LABEL_11;
    }
  LABEL_18:
    nn_diag_detail_AbortImpl_plt_856170(v10);
  LABEL_19:
    SdkRoutine_857220(v3, 24);
    goto LABEL_20;
  }
  do {
    nn_os_SdkMutexType_Lock_plt(v6 + 24);
    if ((*(_BYTE*)(v6 + 40) & 1) != 0) {
      v8 = nn_os_GetReadableHandleOfSystemEvent_plt(v6 + 56);
      nn_os_SdkMutexType_Unlock_plt(v6 + 24);
      if (v8 == a3) {
        goto LABEL_7;
      }
    }
    else {
      nn_os_SdkMutexType_Unlock_plt(v6 + 24);
    }
    v6 = *(_QWORD*)(v6 + 8);
  } while (v6 != v7);
  v9 = 0;
  nn_os_SdkMutexType_Unlock_plt(v3 + 8);
  v10 = nn_diag_detail_NotNullImpl_plt(0);
  if ((v10 & 1) == 0) {
    goto LABEL_18;
  }
LABEL_11:
  v11 = nn_os_SdkMutexType_Lock_plt(v9 + 24);
  if ((*(_BYTE*)(v9 + 40) & 1) == 0) {
    v12 = nn_diag_detail_AbortImpl_plt_856170(v11);
  LABEL_22:
    nn_diag_detail_AbortImpl_plt_856170(v12);
    __udf(0);
  }
  v12 = nn_os_SdkMutexType_Lock_plt(v9 + 48);
  v3 = *(_QWORD*)(v9 + 112);
  if (v3 == v9 + 104) {
    goto LABEL_22;
  }
  v13 = *(__int64**)(v3 + 8);
  v14 = *v13;
  *(_QWORD*)(*(_QWORD*)v3 + 8LL) = v13;
  *v13 = *(_QWORD*)v3;
  *(_QWORD*)(v14 + 8) = v3;
  *(_QWORD*)v3 = v14;
  if (*(_QWORD*)(v9 + 112) == v9 + 104) {
    nn_os_ClearSystemEvent_plt(v9 + 56);
  }
  nn_os_SdkMutexType_Unlock_plt(v9 + 48);
  *a2 = *(_DWORD*)(v3 + 16);
  if (SdkData_eb8558 == 0) {
    goto LABEL_19;
  }
  (*(void (**)(__int64, __int64, __int64, __int64))(
      *(_QWORD*)SdkData_eb8558 + 24LL))(SdkData_eb8558, v3, 24, 16);
LABEL_20:
  nn_os_SdkMutexType_Unlock_plt(v9 + 24);
  return 0;
}

__int64 nn_sf_1809c0(__int64 a1, _DWORD* a2, const char* a3)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v7 = *(_QWORD*)(a1 + 24);
  v8 = a1 + 16;
  if (v7 != a1 + 16) {
    while ((unsigned int)strcmp_plt(*(void**)(v7 + 16), a3) != 0) {
      v7 = *(_QWORD*)(v7 + 8);
      if (v7 == v8) {
        v9 = 0;
        goto LABEL_8;
      }
    }
  }
  if (v7 == v8) {
    v9 = 0;
  }
  else {
    v9 = v7;
  }
LABEL_8:
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  v10 = nn_diag_detail_NotNullImpl_plt(v9);
  if ((v10 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v10);
  }
  nn_os_SdkMutexType_Lock_plt(v9 + 24);
  if ((*(_BYTE*)(v9 + 32) & 1) == 0) {
    do {
      nn_os_SdkConditionVariableType_Wait_plt(v9 + 28, v9 + 24);
    } while (*(_BYTE*)(v9 + 32) != 1);
  }
  v18 = 0;
  v11 = nn_sf_hipc_CreateSession_plt(&v18, (char*)&v18 + 4);
  if (v11 == 0) {
    v12 = v18;
    if (SdkData_eb8558 != 0) {
      v13 = (*(__int64 (**)(__int64, __int64, __int64))(
          *(_QWORD*)SdkData_eb8558 + 16LL))(SdkData_eb8558, 24, 16);
      if (v13 == 0) {
      LABEL_15:
        v14 = nn_diag_detail_NotNullImpl_plt(v13);
        if ((v14 & 1) == 0) {
          nn_diag_detail_AbortImpl_plt_856170(v14);
        }
        nn_os_SdkMutexType_Lock_plt(v9 + 48);
        v15 = *(_QWORD*)(v9 + 112);
        v16 = *(_QWORD*)v13;
        *(_QWORD*)v13 = *(_QWORD*)(v9 + 104);
        *(_QWORD*)(v16 + 8) = v9 + 104;
        *(_QWORD*)(*(_QWORD*)(v9 + 104) + 8LL) = v13;
        *(_QWORD*)(v9 + 104) = v16;
        if (v15 == v9 + 104) {
          nn_os_SignalSystemEvent_plt(v9 + 56);
        }
        nn_os_SdkMutexType_Unlock_plt(v9 + 48);
        *a2 = HIDWORD(v18);
        goto LABEL_19;
      }
    }
    else {
      v13 = SdkRoutine_8584e0(24, SdkData_e86c08);
      if (v13 == 0) {
        goto LABEL_15;
      }
    }
    *(_QWORD*)v13 = v13;
    *(_QWORD*)(v13 + 8) = v13;
    *(_DWORD*)(v13 + 16) = v12;
    goto LABEL_15;
  }
LABEL_19:
  nn_os_SdkMutexType_Unlock_plt(v9 + 24);
  return v11;
}

__int64 nn_sf_180b60(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v15;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v4 = *(_QWORD*)(a1 + 24);
  v5 = a1 + 16;
  if (v4 == a1 + 16) {
  LABEL_7:
    if (v4 == v5) {
      v7 = 0;
    }
    else {
      v7 = v4;
    }
    nn_os_SdkMutexType_Unlock_plt(a1 + 8);
    v8 = nn_diag_detail_NotNullImpl_plt(v7);
    if ((v8 & 1) != 0) {
      goto LABEL_11;
    }
  LABEL_21:
    v9 = nn_diag_detail_AbortImpl_plt_856170(v8);
    goto LABEL_22;
  }
  do {
    nn_os_SdkMutexType_Lock_plt(v4 + 24);
    if ((*(_BYTE*)(v4 + 40) & 1) != 0) {
      v6 = nn_os_GetReadableHandleOfSystemEvent_plt(v4 + 56);
      nn_os_SdkMutexType_Unlock_plt(v4 + 24);
      if (v6 == a2) {
        goto LABEL_7;
      }
    }
    else {
      nn_os_SdkMutexType_Unlock_plt(v4 + 24);
    }
    v4 = *(_QWORD*)(v4 + 8);
  } while (v4 != v5);
  v7 = 0;
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  v8 = nn_diag_detail_NotNullImpl_plt(0);
  if ((v8 & 1) == 0) {
    goto LABEL_21;
  }
LABEL_11:
  v9 = nn_os_SdkMutexType_Lock_plt(v7 + 24);
  if ((*(_BYTE*)(v7 + 40) & 1) == 0) {
  LABEL_22:
    v15 = nn_diag_detail_AbortImpl_plt_856170(v9);
    return nn_sf_UnitHeapMemoryResource_Allocate(v15);
  }
  v10 = *(__int64***)(v7 + 112);
  v11 = (__int64**)(v7 + 104);
  for (*(_BYTE*)(v7 + 32) = 0; v10 != v11; v10 = *(__int64***)(v7 + 112)) {
    while (1) {
      v12 = v10[1];
      v13 = (__int64*)*v12;
      (*v10)[1] = (__int64)v12;
      *v12 = (__int64)*v10;
      v13[1] = (__int64)v10;
      *v10 = v13;
      nn_sf_hipc_CloseServerSessionHandle_plt(*((unsigned int*)v10 + 4));
      if (SdkData_eb8558 != 0) {
        break;
      }
      SdkRoutine_857220(v10, 24);
      v10 = *(__int64***)(v7 + 112);
      if (v10 == v11) {
        goto LABEL_17;
      }
    }
    (*(void (**)(__int64, __int64**, __int64, __int64))(
        *(_QWORD*)SdkData_eb8558 + 24LL))(SdkData_eb8558, v10, 24, 16);
  }
LABEL_17:
  if (*(_BYTE*)(v7 + 96) != 0) {
    nn_os_DestroySystemEvent_plt(v7 + 56);
  }
  *(_BYTE*)(v7 + 40) = 0;
  return nn_os_SdkMutexType_Unlock_plt(v7 + 24);
}

#pragma GCC visibility pop
