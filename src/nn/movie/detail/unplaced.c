#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_86d370(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nandroid_U16_AT_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_diag_detail_NotNullImpl_plt(_QWORD);
__int64 nn_lmem_DestroyExpHeap_plt(void);
__int64 nn_movie_detail_AllocateMemory(_QWORD);
__int64 nn_movie_detail_FreeMemory(_QWORD, _QWORD);
__int64 nn_movie_detail_MediaExtractorImpl_ExtractorWorker_plt(_QWORD);
__int64 nn_movie_detail_Message_SetResult_plt(_QWORD, _QWORD);
__int64 nn_movie_detail_Message_SignalWaiter_plt(_QWORD);
__int64 nn_os_DestroyThread_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SetTlsValue_plt(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_Destroy___shared_weak_count_plt(void);
__int64 std___1___shared_weak_count___release_weak_plt(_QWORD);
extern _UNKNOWN SdkData_f448a8;
extern _UNKNOWN SdkData_f448b0;
extern _UNKNOWN SdkData_f44930;
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88398;
extern __int64 SdkData_e883a0;
extern __int64 SdkData_e883a8;
extern __int64 SdkData_e883b0;
extern __int64 SdkData_e883b8;
extern __int64 SdkData_e883c0;
extern __int64 SdkData_e883c8;
extern __int64 SdkData_e883d0;
extern __int64 SdkData_e883d8;
extern __int64 SdkData_e883e0;
extern __int64 SdkData_e883e8;
extern __int64 SdkData_e883f0;
extern __int64 SdkData_e883f8;
extern __int64 SdkData_e88400;
extern __int64 SdkData_e88408;
extern __int64 SdkData_e88410;
extern __int64 SdkData_f44910;
extern __int64 SdkData_f44918;
extern void (*SdkData_e88338[493])();
extern void (*SdkData_e88348[491])();
extern void (*SdkData_e88350[490])();
extern void (*SdkData_e88358[489])();
extern void (*SdkData_e88360[488])();
extern void (*SdkData_e88368[487])();
extern void (*SdkData_e88370[486])();
extern void (*SdkData_e88378[485])();
__int64 nn_movie_detail_ParseAacProfileFromCsd(void* this_,
                                               const unsigned __int8* a2);
void nn_movie_detail_4c4730();
__int64 nn_movie_detail_4c4850(__int64* a1);
__int64* nn_movie_detail_4ca840(__int64* result, __int64* a2, __int64 a3,
                                __int64* a4);
__int64 nn_movie_detail_4ca8f0(__int64 a1);
__int64 nn_movie_detail_4cd2b0();
__int64 nn_movie_detail_4cd2c0(__int64 result, _QWORD* a2);
__int64 nn_movie_detail_4cd3d0(_QWORD* a1);
__int64 nn_movie_detail_4cd430(__int64 result);
__int64 nn_movie_detail_4cd510(_QWORD* a1);
__int64 nn_movie_detail_4cd580(_QWORD* a1);
__int64 nn_movie_detail_4cd5e0(_QWORD* a1);
__int64 nn_movie_detail_4cd640(_QWORD* a1);
__int64 nn_movie_detail_4cd6a0(_QWORD* a1);
__int64 nn_movie_detail_4cd700(_QWORD* a1);
__int64 nn_movie_detail_4cd760(_QWORD* a1);
__int64 nn_movie_detail_4cd7c0(_QWORD* a1);
__int64 nn_movie_detail_4cd820(_QWORD* a1);
__int64 nn_movie_detail_4cd880(_QWORD* a1);
__int64 nn_movie_detail_4cd8e0(_QWORD* a1);
__int64 nn_movie_detail_4cd940(_QWORD* a1);
__int64 nn_movie_detail_4cd9a0(_QWORD* a1);
__int64 nn_movie_detail_4cda00(_QWORD* a1);
__int64 nn_movie_detail_4cda60(_QWORD* a1);
__int64 nn_movie_detail_4dc980(__int64 a1);
__int64 nn_movie_detail_4dc9f0(__int64 a1);
__int64 nn_movie_detail_4dca50(__int64 a1);
__int64 nn_movie_detail_4dcab0(_QWORD* a1);
__int64 nn_movie_detail_4dcb20(__int64 a1);
__int64 nn_movie_detail_4dcb80(__int64 a1);
__int64 nn_movie_detail_4dcbe0(__int64 a1);
__int64 nn_movie_detail_4dcc40(__int64 a1);
__int64 nn_movie_detail_4dccb0(__int64 a1);

__int64 nn_movie_detail_ParseAacProfileFromCsd(void* this_,
                                               const unsigned __int8* a2)
{
  __int64 result;
  unsigned int v6;
  int v7;
  unsigned __int16* v8;
  int v9;
  int v10;
  struct {
    __int16 v11[2];
    int v12;
    __int16 v13;
    char gap18_[2];
    int v14;
    __int16 v15;
    char gap26_[2];
    int v16;
    __int16 v17;
    char gap34_[2];
    int v18;
    __int16 v19;
    char gap42_[2];
    int v20;
    __int16 v21;
    char gap50_[2];
    int v22;
    __int16 v23;
    char gap58_[2];
    int v24;
    __int16 v25;
    char gap66_[2];
    int v26;
    __int16 v27;
    char gap74_[2];
    int v28;
    __int16 v29;
    char gap82_[2];
    int v30;
    __int16 v31;
    char gap90_[2];
    int v32;
  } v11_;

  result = 0xFFFFFFFFLL;
  if (this_ != nullptr && (unsigned __int64)a2 >= 2) {
    v6 = nandroid_U16_AT_plt(this_);
    v7 = (unsigned __int16)v6 >> 11;
    if (v7 == 31) {
      v7 = ((v6 >> 5) & 0x3F) + 32;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_f448a8,
                              memory_order_acquire) &
         1) == 0) {
      v9 = v7;
      v10 = __cxa_guard_acquire_plt(&SdkData_f448a8);
      v7 = v9;
      if (v10 != 0) {
        v11_.v11[0] = 1;
        v11_.v12 = 1;
        v11_.v13 = 2;
        v11_.v14 = 2;
        v11_.v15 = 3;
        v11_.v16 = 3;
        v11_.v17 = 4;
        v11_.v18 = 4;
        v11_.v19 = 5;
        v11_.v20 = 5;
        v11_.v21 = 6;
        v11_.v22 = 6;
        v11_.v23 = 17;
        v11_.v24 = 17;
        v11_.v25 = 23;
        v11_.v26 = 23;
        v11_.v27 = 29;
        v11_.v28 = 29;
        v11_.v29 = 39;
        v11_.v30 = 39;
        v11_.v31 = 42;
        v11_.v32 = 42;
        SdkRoutine_86d370(&SdkData_f448b0, v11_.v11, 11, &SdkData_f44930, 272);
        fw_rtld_RegisterCrtDestructor();
        __cxa_guard_release_plt(&SdkData_f448a8);
        v7 = v9;
      }
    }
    v8 = (unsigned __int16*)SdkData_f44910;
    if (SdkData_f44910 == SdkData_f44918) {
      return 0xFFFFFFFFLL;
    }
    else {
      while (*v8 != v7) {
        v8 += 4;
        if (v8 == (unsigned __int16*)SdkData_f44918) {
          return 0xFFFFFFFFLL;
        }
      }
      return *((unsigned int*)v8 + 1);
    }
  }
  return result;
}

void nn_movie_detail_4c4730()
{
  void(__attribute__((noreturn)) * v0)();
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v0 = SdkData_e88350[0];
  v1 = (__int64*)SdkData_e88360[0];
  v2 = *(_QWORD*)SdkData_e88358[0];
  *(_QWORD*)SdkData_e88350[0] = *(_QWORD*)SdkData_e88348[0];
  *((_QWORD*)v0 + 1) = v2;
  v3 = *(_QWORD*)SdkData_e88368[0];
  *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 4) = *v1;
  *(__int64*)((char*)((__int64*)0xCLL) + (_QWORD)v0 + 12) = v3;
  v4 = *(_QWORD*)SdkData_e88378[0];
  *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0] = *(_QWORD*)SdkData_e88370[0];
  *(_QWORD*)&(*(_BYTE(*)[4])0x20LL)[(_QWORD)v0 + 8] = v4;
}

__int64 nn_movie_detail_4c4850(__int64* a1)
{
  __int64 result;

  result = *a1;
  if (result != 0) {
    return nn_lmem_DestroyExpHeap_plt();
  }
  return result;
}

__int64* nn_movie_detail_4ca840(__int64* result, __int64* a2, __int64 a3,
                                __int64* a4)
{
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  *result = (__int64)result;
  result[1] = (__int64)result;
  result[2] = 0;
  result[3] = 0;
  result[3] = *a4;
  if (a3 != 0) {
    v5 = result;
    v6 = 56 * a3;
    do {
      result = (__int64*)nn_movie_detail_AllocateMemory(72);
      *result = 0;
      result[1] = 0;
      v6 -= 56;
      v8 = a2[5];
      v7 = a2[6];
      v9 = a2[4];
      result[5] = a2[3];
      result[6] = v9;
      result[7] = v8;
      result[8] = v7;
      v11 = a2[1];
      v10 = a2[2];
      v12 = *a2;
      a2 += 7;
      result[3] = v11;
      result[4] = v10;
      result[1] = (__int64)v5;
      result[2] = v12;
      v13 = *v5;
      *result = *v5;
      *(_QWORD*)(v13 + 8) = result;
      *v5 = (__int64)result;
      ++v5[2];
    } while (v6 != 0);
  }
  return result;
}

__int64 nn_movie_detail_4ca8f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v6)();
  int v8;

  v2 = nn_diag_detail_NotNullImpl_plt(a1);
  if ((v2 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v2);
  }
  v3 = *(_QWORD*)(a1 + 1728);
  v4 = nn_diag_detail_NotNullImpl_plt(v3);
  if ((v4 & 1) == 0) {
    nn_diag_detail_AbortImpl_plt_856170(v4);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v6 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v8 = __cxa_guard_acquire_plt(SdkData_e88330);
    v6 = SdkData_e88338[0];
    if (v8 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v6) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v6 = SdkData_e88338[0];
    }
  }
  nn_os_SetTlsValue_plt(*(unsigned int*)v6, v3);
  return nn_movie_detail_MediaExtractorImpl_ExtractorWorker_plt(a1);
}

__int64 nn_movie_detail_4cd2b0() { return 266496; }

__int64 nn_movie_detail_4cd2c0(__int64 result, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;

  if (a2 != nullptr) {
    v2 = (_QWORD*)result;
    nn_os_SdkMutexType_Lock_plt(result + 40);
    v4 = (_QWORD*)v2[2];
    if (v4 == v2 + 1) {
      return nn_os_SdkMutexType_Unlock_plt(v2 + 5);
    }
    while (v4 + 2 != a2) {
      v4 = (_QWORD*)v4[1];
      if (v4 == v2 + 1) {
        return nn_os_SdkMutexType_Unlock_plt(v2 + 5);
      }
    }
    nn_os_DestroyThread_plt(v4 + 2);
    v5 = (_QWORD*)v4[1];
    *(_QWORD*)(*v4 + 8LL) = v5;
    *v5 = *v4;
    v6 = v2[4];
    --v2[3];
    nn_movie_detail_FreeMemory(v4, v6);
    v7 = (_QWORD*)v2[45];
    if (v7 == v2 + 44) {
      return nn_os_SdkMutexType_Unlock_plt(v2 + 5);
    }
    else {
      while (1) {
        v8 = (_QWORD*)v7[1];
        if (a2 == (_QWORD*)v7[5]) {
          break;
        }
        v7 = (_QWORD*)v7[1];
        if (v8 == v2 + 44) {
          return nn_os_SdkMutexType_Unlock_plt(v2 + 5);
        }
      }
      *(_QWORD*)(*v7 + 8LL) = v8;
      *v8 = *v7;
      v9 = v2[47];
      --v2[46];
      nn_movie_detail_FreeMemory(v7, v9);
      return nn_os_SdkMutexType_Unlock_plt(v2 + 5);
    }
  }
  return result;
}

__int64 nn_movie_detail_4cd3d0(_QWORD* a1)
{
  *a1 = SdkData_e88398 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd430(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(result + 48);
  v2 = result;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak_plt(v1);
  }
  v3 = *(_QWORD*)(v2 + 72);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak_plt(v3);
    v4 = *(_QWORD*)(v2 + 48);
    if (v4 == 0) {
      return result;
    }
  }
  else {
    v4 = *(_QWORD*)(v2 + 48);
    if (v4 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak_plt(v4);
  }
  return result;
}

__int64 nn_movie_detail_4cd510(_QWORD* a1)
{
  *a1 = SdkData_e883a0 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd580(_QWORD* a1)
{
  *a1 = SdkData_e883a8 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd5e0(_QWORD* a1)
{
  *a1 = SdkData_e883b0 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd640(_QWORD* a1)
{
  *a1 = SdkData_e883b8 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd6a0(_QWORD* a1)
{
  *a1 = SdkData_e883c0 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd700(_QWORD* a1)
{
  *a1 = SdkData_e883c8 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd760(_QWORD* a1)
{
  *a1 = SdkData_e883d0 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd7c0(_QWORD* a1)
{
  *a1 = SdkData_e883d8 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd820(_QWORD* a1)
{
  *a1 = SdkData_e883e0 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd880(_QWORD* a1)
{
  *a1 = SdkData_e883e8 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd8e0(_QWORD* a1)
{
  *a1 = SdkData_e883f0 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd940(_QWORD* a1)
{
  *a1 = SdkData_e883f8 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cd9a0(_QWORD* a1)
{
  *a1 = SdkData_e88400 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cda00(_QWORD* a1)
{
  *a1 = SdkData_e88408 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4cda60(_QWORD* a1)
{
  *a1 = SdkData_e88410 + 16;
  return std___1___shared_weak_count_Destroy___shared_weak_count_plt();
}

__int64 nn_movie_detail_4dc980(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v2;
  unsigned int v4;

  v1 = *(_QWORD***)(a1 + 40);
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != nullptr) {
      v4 = (unsigned int)X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD,
                                                  _QWORD, _QWORD))(*v2 + 16LL))(
              (void*)v2, v2, *(_QWORD*)(a1 + 48), *(unsigned int*)(a1 + 56),
              *(_QWORD*)(a1 + 64)));
      nn_movie_detail_Message_SetResult_plt(a1, v4);
      nn_movie_detail_Message_SignalWaiter_plt(a1);
    }
  }
  return 0;
}

__int64 nn_movie_detail_4dc9f0(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v2;
  unsigned int v4;

  v1 = *(_QWORD***)(a1 + 40);
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != nullptr) {
      v4 = (unsigned int)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v2 + 24LL))((void*)v2, v2));
      nn_movie_detail_Message_SetResult_plt(a1, v4);
      nn_movie_detail_Message_SignalWaiter_plt(a1);
    }
  }
  return 0;
}

__int64 nn_movie_detail_4dca50(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v2;
  unsigned int v4;

  v1 = *(_QWORD***)(a1 + 40);
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != nullptr) {
      v4 = (unsigned int)X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD))(
              *v2 + 32LL))((void*)v2, v2, *(_QWORD*)(a1 + 48)));
      nn_movie_detail_Message_SetResult_plt(a1, v4);
      nn_movie_detail_Message_SignalWaiter_plt(a1);
    }
  }
  return 0;
}

__int64 nn_movie_detail_4dcab0(_QWORD* a1)
{
  __int64* v1;
  __int64 v2;
  unsigned int v4;

  v1 = (__int64*)a1[5];
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != 0) {
      v4 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v2 + 40LL))(v2, a1[7], a1[6], a1[8], a1[9]);
      nn_movie_detail_Message_SetResult_plt(a1, v4);
      nn_movie_detail_Message_SignalWaiter_plt(a1);
    }
  }
  return 0;
}

__int64 nn_movie_detail_4dcb20(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v2;
  unsigned int v4;

  v1 = *(_QWORD***)(a1 + 40);
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != nullptr) {
      v4 = (unsigned int)X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD))(
              *v2 + 48LL))((void*)v2, v2, *(_QWORD*)(a1 + 48)));
      nn_movie_detail_Message_SetResult_plt(a1, v4);
      nn_movie_detail_Message_SignalWaiter_plt(a1);
    }
  }
  return 0;
}

__int64 nn_movie_detail_4dcb80(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v2;
  unsigned int v4;

  v1 = *(_QWORD***)(a1 + 40);
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != nullptr) {
      v4 = (unsigned int)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v2 + 56LL))((void*)v2, v2));
      nn_movie_detail_Message_SetResult_plt(a1, v4);
      nn_movie_detail_Message_SignalWaiter_plt(a1);
    }
  }
  return 0;
}

__int64 nn_movie_detail_4dcbe0(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v2;
  unsigned int v4;

  v1 = *(_QWORD***)(a1 + 40);
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != nullptr) {
      v4 = (unsigned int)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v2 + 64LL))((void*)v2, v2));
      nn_movie_detail_Message_SetResult_plt(a1, v4);
      nn_movie_detail_Message_SignalWaiter_plt(a1);
    }
  }
  return 0;
}

__int64 nn_movie_detail_4dcc40(__int64 a1)
{
  _QWORD** v1;
  _QWORD* v2;
  unsigned int v4;

  v1 = *(_QWORD***)(a1 + 40);
  if (v1 != nullptr) {
    v2 = *v1;
    if (v2 != nullptr) {
      v4 = (unsigned int)X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD,
                                                  _QWORD))(*v2 + 72LL))(
              (void*)v2, v2, *(_QWORD*)(a1 + 48), *(unsigned int*)(a1 + 56)));
      nn_movie_detail_Message_SetResult_plt(a1, v4);
      nn_movie_detail_Message_SignalWaiter_plt(a1);
    }
  }
  return 0;
}

__int64 nn_movie_detail_4dccb0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 40);
  if (v1 != 0) {
    atomic_store(1u, (unsigned __int8*)(v1 + 1282));
    nn_movie_detail_Message_SetResult_plt(a1, 0);
    nn_movie_detail_Message_SignalWaiter_plt(a1);
  }
  return 0;
}

#pragma GCC visibility pop
