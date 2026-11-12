#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    movie_detail_TaskQueue_GetNextTaskToInvoke_plt(PSEUDO_X8, _QWORD);
__int64 MovieRoutine_1b520(_QWORD, _QWORD);
__int64 MovieRoutine_82870(_QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 movie_detail_TaskQueue_NotifyOfThreadEvent_plt(_QWORD, _QWORD);
__int64 movie_detail_TaskQueue_ProcessEventRegistration_plt(_QWORD, _QWORD);
__int64 movie_detail_TaskQueue_ProcessEventUnregistration_plt(_QWORD, _QWORD);
__int64 movie_detail_TaskQueue_ProcessEvents_plt(_QWORD);
__int64 movie_detail_TaskQueue_ShutdownSocketEventHandler_plt(_QWORD, _QWORD);
__int64 movie_detail_TaskQueue_SocketEventResult_SocketEventResult_plt(_QWORD,
                                                                       _QWORD,
                                                                       _QWORD);
__int64 nn_os_AcquireSemaphore_plt(_QWORD);
__int64 nn_os_ClearEvent_plt(_QWORD);
__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_DestroyThread_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LinkMultiWaitHolder_plt(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_ReleaseSemaphore_plt_84270(_QWORD, _QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_TryAcquireSemaphore_plt(_QWORD);
__int64 nn_os_TryWaitEvent_plt(_QWORD);
__int64 nn_os_TryWaitSystemEvent_plt(_QWORD);
__int64 nn_os_TryWaitTimerEvent_plt(_QWORD);
__int64 nn_os_UnlinkMultiWaitHolder_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_os_WaitAny_plt(_QWORD);
__int64 nn_os_WaitThread_plt(_QWORD);
__int64 nn_os_YieldThread_plt(_QWORD);
__int64 nn_socket_EventFdRead_plt(void);
__int64 nn_socket_EventFdWrite_plt(_QWORD, _QWORD);
__int64 nn_socket_GetLastError_plt(void);
__int64 nn_socket_Select_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 MovieData_c08e0;
extern __int64 MovieData_c0950;
extern __int64 MovieData_c0958;
extern __int64 MovieData_c0960;
extern __int64 MovieData_c0968;
void __attribute__((noreturn)) nn_detail_UnexpectedDefaultImpl_plt(_QWORD);
__int64 movie_detail_TaskQueue_WorkerThread_DestroyThread(__int64 this_);
__int64 movie_detail_TaskQueue_ShutdownSocketEventHandler(__int64 a1,
                                                          __int64 a2);
__int64 movie_detail_TaskQueue_UpdateSocketEventHandler(__int64 a1, __int64 a2,
                                                        int a3, __int64* a4,
                                                        __int64* a5,
                                                        __int64* a6,
                                                        __int64* a7);
__int64 movie_detail_TaskQueue_GetSocketEventResult(__int64 a1, _BYTE* a2,
                                                    _QWORD* a3, _QWORD* a4,
                                                    _QWORD* a5, __int64 a6);
__int64 movie_detail_TaskQueue_UnregisterSocketEventHandler(__int64 a1,
                                                            __int64 a2);
__int64 movie_detail_TaskQueue_TaskQueueWorkerThreadBody(void* this_);
__int64 movie_detail_TaskQueue_NotifyOfThreadEvent(_QWORD* a1, int a2);
__int64 movie_detail_TaskQueue_ProcessEvents(void* this_);
__int64 movie_detail_TaskQueue_TaskQueueSocketHandlerThreadBody(__int64 a1,
                                                                __int64 a2);
__int64 movie_detail_TaskQueue_ProcessEventRegistration(__int64 this_,
                                                        bool* a2);
__int64 movie_detail_TaskQueue_ProcessEventUnregistration(__int64 this_,
                                                          bool* a2);
__int64 movie_detail_TaskQueue_SocketEventResult_SocketEventResult(
    __int64 a1, void (***a2)(_QWORD), __int64 a3, _QWORD* a4);
__int64 movie_detail_TaskQueue_EventHandler_EventHandler(
    __int64 a1, void (***a2)(_QWORD), int a3, __int64* a4, __int64* a5,
    __int64* a6, _QWORD* a7, __int64 a8, void (***a9)(_QWORD));
__int64 movie_task_queue_1b670(_QWORD* a1);

__int64 movie_detail_TaskQueue_WorkerThread_DestroyThread(__int64 this_)
{
  __int64 v1;

  v1 = this_;
  if (*(_BYTE*)(this_ + 481) != 1) {
    if (*(_BYTE*)(this_ + 480) != 1) {
      return this_;
    }
  LABEL_5:
    this_ = nn_os_DestroyThread_plt(v1 + 8);
    *(_BYTE*)(v1 + 480) = 0;
    return this_;
  }
  this_ = nn_os_WaitThread_plt(this_ + 8);
  *(_BYTE*)(v1 + 481) = 0;
  if (*(_BYTE*)(v1 + 480) == 1) {
    goto LABEL_5;
  }
  return this_;
}

__int64 movie_detail_TaskQueue_ShutdownSocketEventHandler(__int64 a1,
                                                          __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  _QWORD v26[2];
  _QWORD v27[4];
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v30 = 0;
  v31 = 0;
  v28 = nullptr;
  v29 = 0;
  memset(v27, 0, sizeof(v27));
  v26[0] = 0;
  v26[1] = 0;
  nn_os_LockMutex_plt(a2 + 24);
  v3 = *(unsigned int*)(a2 + 592);
  *(_BYTE*)(a2 + 160) = 1;
  if ((_DWORD)v3 != -1) {
    nn_socket_EventFdWrite_plt(v3, 1);
  }
  v4 = *(_QWORD*)(a2 + 600);
  if (v4 != 0) {
    if (atomic_fetch_add((atomic_uint* volatile)(v4 + 16), 0xFFFFFFFF) == 1) {
      atomic_store(0xDEAD00u, (unsigned int*)(v4 + 16));
      v5 = *(_QWORD*)(v4 + 8);
      if (v5 != 0) {
        (**(void (***)(_QWORD))v5)(*(_QWORD*)(v4 + 8));
      }
      (*(void (**)(__int64))(*(_QWORD*)v4 + 176LL))(v4);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 56LL))(v5, v4);
      (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    }
    *(_QWORD*)(a2 + 600) = 0;
  }
  if (v26 != (_QWORD*)(a2 + 608)) {
    v6 = v26[0];
    v7 = v28;
    if (v26[0] != 0) {
      if (v28 != nullptr) {
        v32 = v26[0];
        (*(void (**)(void*))(*v28 + 48LL))((void*)v28);
        v6 = v26[0];
      }
      if (*(_QWORD*)(v6 + 456) != 0) {
        (*(void (**)(_QWORD))(**(_QWORD**)(v6 + 472) + 56LL))(
            *(_QWORD*)(v6 + 472));
        *(_QWORD*)(v6 + 456) = 0;
      }
      v8 = *(_QWORD*)(v6 + 472);
      *(_DWORD*)(v6 + 464) = 0;
      if (v8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
        *(_QWORD*)(v6 + 472) = 0;
      }
      v9 = v30;
      *(_BYTE*)(v6 + 468) = 0;
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v9 + 56LL))(v9, v26[0]);
      v7 = v28;
      v26[0] = 0;
    }
    v28 = nullptr;
    if (v7 == v27) {
      v10 = 32;
    }
    else {
      if (v7 == nullptr) {
      LABEL_23:
        if (v30 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
          v30 = 0;
        }
        v11 = v26[0];
        v26[0] = *(_QWORD*)(a2 + 608);
        *(_QWORD*)(a2 + 608) = v11;
        MovieRoutine_1b520(v27, a2 + 624);
        if (v30 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
        }
        v12 = *(_QWORD*)(a2 + 672);
        *(_QWORD*)(a2 + 672) = 0;
        v30 = v12;
        goto LABEL_28;
      }
      v10 = 40;
    }
    (*(void (**)(void*))(*v7 + v10))(v7);
    goto LABEL_23;
  }
LABEL_28:
  nn_os_UnlockMutex_plt(a2 + 24);
  v13 = v26[0];
  if (v26[0] == 0) {
    goto LABEL_56;
  }
  if (*(_BYTE*)(v26[0] + 481LL) == 1) {
    nn_os_WaitThread_plt(v26[0] + 8LL);
    *(_BYTE*)(v13 + 481) = 0;
    if (*(_BYTE*)(v13 + 480) != 1) {
    LABEL_31:
      v14 = v26[0];
      if (v26[0] == 0) {
        goto LABEL_32;
      }
      goto LABEL_37;
    }
  }
  else if (*(_BYTE*)(v26[0] + 480LL) != 1) {
    goto LABEL_31;
  }
  nn_os_DestroyThread_plt(v13 + 8);
  *(_BYTE*)(v13 + 480) = 0;
  v14 = v26[0];
  if (v26[0] == 0) {
  LABEL_32:
    v15 = v28;
    v28 = nullptr;
    if (v15 != v27) {
      goto LABEL_33;
    }
  LABEL_44:
    v16 = 32;
    goto LABEL_45;
  }
LABEL_37:
  if (v28 != nullptr) {
    v32 = v14;
    (*(void (**)(_QWORD*, __int64*))(*v28 + 48LL))(v28, &v32);
    v14 = v26[0];
  }
  if (*(_QWORD*)(v14 + 456) != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v14 + 472) + 56LL))(
        *(_QWORD*)(v14 + 472));
    *(_QWORD*)(v14 + 456) = 0;
  }
  v17 = *(_QWORD*)(v14 + 472);
  *(_DWORD*)(v14 + 464) = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    *(_QWORD*)(v14 + 472) = 0;
  }
  v18 = v30;
  *(_BYTE*)(v14 + 468) = 0;
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v18 + 56LL))(v18, v26[0]);
  v26[0] = 0;
  v15 = v28;
  v28 = nullptr;
  if (v15 == v27) {
    goto LABEL_44;
  }
LABEL_33:
  if (v15 != nullptr) {
    v16 = 40;
  LABEL_45:
    (*(void (**)(void*))(*v15 + v16))(v15);
  }
  if (v30 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
    v30 = 0;
  }
  v19 = v26[0];
  if (v26[0] != 0) {
    if (v28 != nullptr) {
      v32 = v26[0];
      (*(void (**)(_QWORD*, __int64*))(*v28 + 48LL))(v28, &v32);
      v19 = v26[0];
    }
    if (*(_QWORD*)(v19 + 456) != 0) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v19 + 472) + 56LL))(
          *(_QWORD*)(v19 + 472));
      *(_QWORD*)(v19 + 456) = 0;
    }
    v20 = *(_QWORD*)(v19 + 472);
    *(_DWORD*)(v19 + 464) = 0;
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      *(_QWORD*)(v19 + 472) = 0;
    }
    v21 = v30;
    *(_BYTE*)(v19 + 468) = 0;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v21 + 56LL))(v21, v26[0]);
    v26[0] = 0;
  }
LABEL_56:
  v22 = v28;
  v28 = nullptr;
  if (v22 == v27) {
    v23 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_61;
    }
    v23 = 40;
  }
  (*(void (**)(void*))(*v22 + v23))(v22);
LABEL_61:
  if (v30 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
    v30 = 0;
  }
  result = (__int64)v28;
  if (v28 == v27) {
    v25 = 32;
  }
  else {
    if (v28 == nullptr) {
      return result;
    }
    v25 = 40;
  }
  return (*(__int64 (**)(void*))(*v28 + v25))(v28);
}

__int64 movie_detail_TaskQueue_UpdateSocketEventHandler(__int64 a1, __int64 a2,
                                                        int a3, __int64* a4,
                                                        __int64* a5,
                                                        __int64* a6,
                                                        __int64* a7)
{
  unsigned int v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;

  if (a3 < 0) {
    return 20;
  }
  if (*(_DWORD*)(a2 + 56) != 4) {
    return 20;
  }
  nn_os_LockMutex_plt(a2 + 24);
  if ((*(_BYTE*)(a2 + 160) & 1) == 0) {
    *(_DWORD*)(a2 + 164) = a3;
    if (a4 != nullptr) {
      v15 = *a4;
      v16 = a4[1];
      v17 = a4[3];
      *(_QWORD*)(a2 + 184) = a4[2];
      *(_QWORD*)(a2 + 192) = v17;
      *(_QWORD*)(a2 + 168) = v15;
      *(_QWORD*)(a2 + 176) = v16;
      v18 = a4[4];
      v19 = a4[5];
      v20 = a4[7];
      *(_QWORD*)(a2 + 216) = a4[6];
      *(_QWORD*)(a2 + 224) = v20;
      *(_QWORD*)(a2 + 200) = v18;
      *(_QWORD*)(a2 + 208) = v19;
      v21 = a4[8];
      v22 = a4[9];
      v23 = a4[11];
      *(_QWORD*)(a2 + 248) = a4[10];
      *(_QWORD*)(a2 + 256) = v23;
      *(_QWORD*)(a2 + 232) = v21;
      *(_QWORD*)(a2 + 240) = v22;
      v24 = a4[12];
      v25 = a4[13];
      v26 = a4[15];
      *(_QWORD*)(a2 + 280) = a4[14];
      *(_QWORD*)(a2 + 288) = v26;
      *(_QWORD*)(a2 + 264) = v24;
      *(_QWORD*)(a2 + 272) = v25;
      v27 = a7;
      v28 = a6;
      if (a5 != nullptr) {
        goto LABEL_9;
      }
    }
    else {
      *(_QWORD*)(a2 + 280) = 0;
      *(_QWORD*)(a2 + 288) = 0;
      *(_QWORD*)(a2 + 264) = 0;
      *(_QWORD*)(a2 + 272) = 0;
      *(_QWORD*)(a2 + 248) = 0;
      *(_QWORD*)(a2 + 256) = 0;
      *(_QWORD*)(a2 + 232) = 0;
      *(_QWORD*)(a2 + 240) = 0;
      *(_QWORD*)(a2 + 216) = 0;
      *(_QWORD*)(a2 + 224) = 0;
      *(_QWORD*)(a2 + 200) = 0;
      *(_QWORD*)(a2 + 208) = 0;
      *(_QWORD*)(a2 + 184) = 0;
      *(_QWORD*)(a2 + 192) = 0;
      *(_QWORD*)(a2 + 168) = 0;
      *(_QWORD*)(a2 + 176) = 0;
      v27 = a7;
      v28 = a6;
      if (a5 != nullptr) {
      LABEL_9:
        v29 = *a5;
        v30 = a5[1];
        v31 = a5[3];
        *(_QWORD*)(a2 + 320) = a5[2];
        *(_QWORD*)(a2 + 328) = v31;
        *(_QWORD*)(a2 + 304) = v29;
        *(_QWORD*)(a2 + 312) = v30;
        v32 = a5[4];
        v33 = a5[5];
        v34 = a5[7];
        *(_QWORD*)(a2 + 352) = a5[6];
        *(_QWORD*)(a2 + 360) = v34;
        *(_QWORD*)(a2 + 336) = v32;
        *(_QWORD*)(a2 + 344) = v33;
        v35 = a5[8];
        v36 = a5[9];
        v37 = a5[11];
        *(_QWORD*)(a2 + 384) = a5[10];
        *(_QWORD*)(a2 + 392) = v37;
        *(_QWORD*)(a2 + 368) = v35;
        *(_QWORD*)(a2 + 376) = v36;
        v38 = a5[12];
        v39 = a5[13];
        v40 = a5[15];
        *(_QWORD*)(a2 + 416) = a5[14];
        *(_QWORD*)(a2 + 424) = v40;
        *(_QWORD*)(a2 + 400) = v38;
        *(_QWORD*)(a2 + 408) = v39;
        v41 = (_QWORD*)(a2 + 440);
        if (v28 != nullptr) {
          goto LABEL_10;
        }
        goto LABEL_14;
      }
    }
    *(_QWORD*)(a2 + 416) = 0;
    *(_QWORD*)(a2 + 424) = 0;
    *(_QWORD*)(a2 + 400) = 0;
    *(_QWORD*)(a2 + 408) = 0;
    *(_QWORD*)(a2 + 384) = 0;
    *(_QWORD*)(a2 + 392) = 0;
    *(_QWORD*)(a2 + 368) = 0;
    *(_QWORD*)(a2 + 376) = 0;
    *(_QWORD*)(a2 + 352) = 0;
    *(_QWORD*)(a2 + 360) = 0;
    *(_QWORD*)(a2 + 336) = 0;
    *(_QWORD*)(a2 + 344) = 0;
    *(_QWORD*)(a2 + 320) = 0;
    *(_QWORD*)(a2 + 328) = 0;
    *(_QWORD*)(a2 + 304) = 0;
    *(_QWORD*)(a2 + 312) = 0;
    v41 = (_QWORD*)(a2 + 440);
    if (v28 != nullptr) {
    LABEL_10:
      v42 = *v28;
      v43 = v28[1];
      v44 = v28[3];
      v41[2] = v28[2];
      v41[3] = v44;
      *v41 = v42;
      v41[1] = v43;
      v45 = v28[4];
      v46 = v28[5];
      v47 = v28[7];
      v41[6] = v28[6];
      v41[7] = v47;
      v41[4] = v45;
      v41[5] = v46;
      v48 = v28[8];
      v49 = v28[9];
      v50 = v28[11];
      v41[10] = v28[10];
      v41[11] = v50;
      v41[8] = v48;
      v41[9] = v49;
      v51 = v28[12];
      v52 = v28[13];
      v54 = v28[14];
      v53 = v28[15];
      v41[14] = v54;
      v41[15] = v53;
      v41[12] = v51;
      v41[13] = v52;
      v55 = (_QWORD*)(a2 + 576);
      if (v27 != nullptr) {
      LABEL_11:
        *(_BYTE*)(a2 + 568) = 1;
        v57 = *v27;
        v56 = v27[1];
        *v55 = v57;
        v55[1] = v56;
      LABEL_16:
        nn_socket_EventFdWrite_plt(*(unsigned int*)(a2 + 592), 1);
        v13 = 0;
        goto LABEL_17;
      }
    LABEL_15:
      *(_BYTE*)(a2 + 568) = 0;
      *v55 = 0;
      v55[1] = 0;
      goto LABEL_16;
    }
  LABEL_14:
    v41[14] = 0;
    v41[15] = 0;
    v41[12] = 0;
    v41[13] = 0;
    v41[10] = 0;
    v41[11] = 0;
    v41[8] = 0;
    v41[9] = 0;
    v41[6] = 0;
    v41[7] = 0;
    v41[4] = 0;
    v41[5] = 0;
    v41[2] = 0;
    v41[3] = 0;
    *v41 = 0;
    v41[1] = 0;
    v55 = (_QWORD*)(a2 + 576);
    if (v27 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_15;
  }
  v13 = 7;
LABEL_17:
  nn_os_UnlockMutex_plt(a2 + 24);
  return v13;
}

__int64 movie_detail_TaskQueue_GetSocketEventResult(__int64 a1, _BYTE* a2,
                                                    _QWORD* a3, _QWORD* a4,
                                                    _QWORD* a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  *a2 = 0;
  if (a3 != nullptr) {
    a3[14] = 0;
    a3[15] = 0;
    a3[12] = 0;
    a3[13] = 0;
    a3[10] = 0;
    a3[11] = 0;
    a3[8] = 0;
    a3[9] = 0;
    a3[6] = 0;
    a3[7] = 0;
    a3[4] = 0;
    a3[5] = 0;
    a3[2] = 0;
    a3[3] = 0;
    *a3 = 0;
    a3[1] = 0;
  }
  if (a4 != nullptr) {
    a4[14] = 0;
    a4[15] = 0;
    a4[12] = 0;
    a4[13] = 0;
    a4[10] = 0;
    a4[11] = 0;
    a4[8] = 0;
    a4[9] = 0;
    a4[6] = 0;
    a4[7] = 0;
    a4[4] = 0;
    a4[5] = 0;
    a4[2] = 0;
    a4[3] = 0;
    *a4 = 0;
    a4[1] = 0;
  }
  if (a5 != nullptr) {
    a5[14] = 0;
    a5[15] = 0;
    a5[12] = 0;
    a5[13] = 0;
    a5[10] = 0;
    a5[11] = 0;
    a5[8] = 0;
    a5[9] = 0;
    a5[6] = 0;
    a5[7] = 0;
    a5[4] = 0;
    a5[5] = 0;
    a5[2] = 0;
    a5[3] = 0;
    *a5 = 0;
    a5[1] = 0;
  }
  *a2 = *(_BYTE*)(a6 + 32);
  if (a3 != nullptr) {
    v6 = *(_QWORD*)(a6 + 40);
    v7 = *(_QWORD*)(a6 + 48);
    v8 = *(_QWORD*)(a6 + 64);
    a3[2] = *(_QWORD*)(a6 + 56);
    a3[3] = v8;
    *a3 = v6;
    a3[1] = v7;
    v9 = *(_QWORD*)(a6 + 72);
    v10 = *(_QWORD*)(a6 + 80);
    v11 = *(_QWORD*)(a6 + 96);
    a3[6] = *(_QWORD*)(a6 + 88);
    a3[7] = v11;
    a3[4] = v9;
    a3[5] = v10;
    v12 = *(_QWORD*)(a6 + 104);
    v13 = *(_QWORD*)(a6 + 112);
    v14 = *(_QWORD*)(a6 + 128);
    a3[10] = *(_QWORD*)(a6 + 120);
    a3[11] = v14;
    a3[8] = v12;
    a3[9] = v13;
    v15 = *(_QWORD*)(a6 + 136);
    v16 = *(_QWORD*)(a6 + 144);
    v17 = *(_QWORD*)(a6 + 160);
    a3[14] = *(_QWORD*)(a6 + 152);
    a3[15] = v17;
    a3[12] = v15;
    a3[13] = v16;
  }
  if (a4 != nullptr) {
    v18 = *(_QWORD*)(a6 + 168);
    v19 = *(_QWORD*)(a6 + 176);
    v20 = *(_QWORD*)(a6 + 192);
    a4[2] = *(_QWORD*)(a6 + 184);
    a4[3] = v20;
    *a4 = v18;
    a4[1] = v19;
    v21 = *(_QWORD*)(a6 + 200);
    v22 = *(_QWORD*)(a6 + 208);
    v23 = *(_QWORD*)(a6 + 224);
    a4[6] = *(_QWORD*)(a6 + 216);
    a4[7] = v23;
    a4[4] = v21;
    a4[5] = v22;
    v24 = *(_QWORD*)(a6 + 232);
    v25 = *(_QWORD*)(a6 + 240);
    v26 = *(_QWORD*)(a6 + 256);
    a4[10] = *(_QWORD*)(a6 + 248);
    a4[11] = v26;
    a4[8] = v24;
    a4[9] = v25;
    v27 = *(_QWORD*)(a6 + 264);
    v28 = *(_QWORD*)(a6 + 272);
    v29 = *(_QWORD*)(a6 + 288);
    a4[14] = *(_QWORD*)(a6 + 280);
    a4[15] = v29;
    a4[12] = v27;
    a4[13] = v28;
  }
  if (a5 != nullptr) {
    v30 = *(_QWORD*)(a6 + 296);
    v31 = *(_QWORD*)(a6 + 304);
    v32 = *(_QWORD*)(a6 + 320);
    a5[2] = *(_QWORD*)(a6 + 312);
    a5[3] = v32;
    *a5 = v30;
    a5[1] = v31;
    v33 = *(_QWORD*)(a6 + 328);
    v34 = *(_QWORD*)(a6 + 336);
    v35 = *(_QWORD*)(a6 + 352);
    a5[6] = *(_QWORD*)(a6 + 344);
    a5[7] = v35;
    a5[4] = v33;
    a5[5] = v34;
    v36 = *(_QWORD*)(a6 + 360);
    v37 = *(_QWORD*)(a6 + 368);
    v38 = *(_QWORD*)(a6 + 384);
    a5[10] = *(_QWORD*)(a6 + 376);
    a5[11] = v38;
    a5[8] = v36;
    a5[9] = v37;
    v39 = *(_QWORD*)(a6 + 392);
    v40 = *(_QWORD*)(a6 + 400);
    v41 = *(_QWORD*)(a6 + 416);
    a5[14] = *(_QWORD*)(a6 + 408);
    a5[15] = v41;
    a5[12] = v39;
    a5[13] = v40;
  }
  return 0;
}

__int64 movie_detail_TaskQueue_UnregisterSocketEventHandler(__int64 a1,
                                                            __int64 a2)
{
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  nn_os_LockMutex_plt(a1 + 24);
  v4 = *(_QWORD**)(a1 + 560);
  if (v4 != (_QWORD*)(a1 + 552)) {
    while (v4[2] != a2) {
      v4 = (_QWORD*)v4[1];
      if (v4 == (_QWORD*)(a1 + 552)) {
        goto LABEL_12;
      }
    }
    v5 = (_QWORD*)v4[1];
    *(_QWORD*)(*v4 + 8LL) = v5;
    *v5 = *v4;
    --*(_QWORD*)(a1 + 568);
    v6 = v4[2];
    if (v6 != 0) {
      if (atomic_fetch_add((atomic_uint* volatile)(v6 + 16), 0xFFFFFFFF) == 1) {
        v7 = v4;
        atomic_store(0xDEAD00u, (unsigned int*)(v6 + 16));
        v8 = *(_QWORD*)(v6 + 8);
        if (v8 != 0) {
          (**(void (***)(_QWORD))v8)(*(_QWORD*)(v6 + 8));
        }
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 56LL))(v8, v6);
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
        v4 = v7;
      }
      v4[2] = 0;
    }
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 576) + 56LL))(*(_QWORD*)(a1 + 576));
  }
LABEL_12:
  v9 = nn_os_UnlockMutex_plt(a1 + 24);
  return movie_detail_TaskQueue_ShutdownSocketEventHandler_plt(v9, a2);
}

__int64 movie_detail_TaskQueue_TaskQueueWorkerThreadBody(void* this_)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v15;
    char gap8_[8];
    __int64 v16;
    __int64 v17;
  } v15_;

  v2 = movie_detail_TaskQueue_NotifyOfThreadEvent_plt(this_, 1);
  while (1) {
    v4 = nn_os_GetSystemTick_plt(v2);
    nn_os_ConvertToTimeSpan_plt(v4);
    nn_os_LockMutex_plt((char*)this_ + 24);
    if ((*((_BYTE*)this_ + 65) & 1) != 0) {
      break;
    }
    movie_detail_TaskQueue_GetNextTaskToInvoke_plt((void*)(&v15_.v15), this_);
    v5 = v15_.v16;
    v6 = *((_BYTE*)this_ + 240);
    if (v15_.v16 == 0 && (*((_BYTE*)this_ + 240) & 1) == 0) {
      *((_BYTE*)this_ + 240) = 1;
    }
    v7 = v15_.v17;
    if (v15_.v17 != 0) {
      atomic_fetch_add((atomic_uint* volatile)(v15_.v17 + 16), 1u);
    }
    nn_os_UnlockMutex_plt((char*)this_ + 24);
    if (v5 == 0) {
      if ((v6 & 1) != 0) {
        v2 = nn_os_AcquireSemaphore_plt((char*)this_ + 72);
      LABEL_25:
        v3 = 0;
        if (v7 == 0) {
          goto LABEL_4;
        }
      }
      else {
        nn_os_WaitAny_plt((char*)this_ + 192);
        nn_os_LockMutex_plt((char*)this_ + 24);
        v11 = *((unsigned __int8*)this_ + 65);
        *((_BYTE*)this_ + 240) = 0;
        if (v11 != 1) {
          movie_detail_TaskQueue_ProcessEvents_plt(this_);
          v2 = nn_os_UnlockMutex_plt((char*)this_ + 24);
          goto LABEL_25;
        }
        v2 = nn_os_UnlockMutex_plt((char*)this_ + 24);
        v3 = 2;
        if (v7 == 0) {
          goto LABEL_4;
        }
      }
      if (atomic_fetch_add((atomic_uint* volatile)(v7 + 16), 0xFFFFFFFF) == 1) {
        atomic_store(0xDEAD00u, (unsigned int*)(v7 + 16));
        v12 = *(_QWORD*)(v7 + 8);
        if (v12 != 0) {
          (**(void (***)(_QWORD))v12)(*(_QWORD*)(v7 + 8));
        }
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v12 + 56LL))(v12, v7);
        v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
        v10 = (unsigned int*)(v7 + 16);
        if (atomic_fetch_add((atomic_uint* volatile)(v7 + 16), 0xFFFFFFFF) !=
            1) {
        LABEL_28:
          if (v5 == 0) {
            goto LABEL_4;
          }
          goto LABEL_3;
        }
      }
      else {
        v10 = (unsigned int*)(v7 + 16);
        if (atomic_fetch_add((atomic_uint* volatile)(v7 + 16), 0xFFFFFFFF) !=
            1) {
          goto LABEL_28;
        }
      }
    LABEL_33:
      atomic_store(0xDEAD00u, v10);
      v13 = *(_QWORD*)(v7 + 8);
      if (v13 != 0) {
        (**(void (***)(_QWORD))v13)(*(_QWORD*)(v7 + 8));
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 56LL))(v13, v7);
      v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
      if (v5 == 0) {
        goto LABEL_4;
      }
      goto LABEL_3;
    }
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    if (v7 != 0) {
      nn_os_LockMutex_plt((char*)this_ + 24);
      *(_BYTE*)(v7 + 153) = 0;
      if (atomic_fetch_add((atomic_uint* volatile)(v7 + 16), 0xFFFFFFFF) == 1) {
        atomic_store(0xDEAD00u, (unsigned int*)(v7 + 16));
        v8 = *(_QWORD*)(v7 + 8);
        if (v8 != 0) {
          (**(void (***)(_QWORD))v8)(*(_QWORD*)(v7 + 8));
        }
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 56LL))(v8, v7);
        (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
      }
      v9 = nn_os_UnlockMutex_plt((char*)this_ + 24);
      v2 = nn_os_YieldThread_plt(v9);
      v3 = 3;
      v10 = (unsigned int*)(v7 + 16);
      if (atomic_fetch_add((atomic_uint* volatile)(v7 + 16), 0xFFFFFFFF) != 1) {
        goto LABEL_28;
      }
      goto LABEL_33;
    }
    ((void (*)(void))nn_os_YieldThread_plt)();
    v3 = 3;
  LABEL_3:
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  LABEL_4:
    if (v3 == 2) {
      goto LABEL_38;
    }
  }
  nn_os_UnlockMutex_plt((char*)this_ + 24);
LABEL_38:
  movie_detail_TaskQueue_NotifyOfThreadEvent_plt(this_, 2);
  return 0;
}

__int64 movie_detail_TaskQueue_NotifyOfThreadEvent(_QWORD* a1, int a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  _QWORD* v11;
  int v12;
  char* v13;
  int v14;
  __int64* v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  _QWORD v22[2];

  nn_os_LockMutex_plt(a1 + 3);
  if (a1[75] == 0) {
  LABEL_29:
    LODWORD(v2) = 0;
    goto LABEL_30;
  }
  v5 = a1[1];
  v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 40LL))(v5, 32);
  if (v6 != 0) {
    *(_QWORD*)v6 = MovieData_c08e0 + 16;
    *(_QWORD*)(v6 + 8) = v5;
    (**(void (***)(__int64))v5)(v5);
    *(_QWORD*)(v6 + 16) = 0;
    v7 = MovieData_c0950;
    *(_DWORD*)(v6 + 24) = a2;
    *(_QWORD*)v6 = v7 + 16;
    atomic_fetch_add((atomic_uint* volatile)(v6 + 16), 1u);
  }
  v8 = *((unsigned int*)a1 + 150);
  v9 = 8 * v8;
  v10 = (char*)v22 - ((8 * v8 + 15) & 0xFFFFFFFF0LL);
  memset_plt(v10, 0, 8 * v8);
  if (v6 == 0) {
    v18 = 0;
    LODWORD(v2) = 17;
    if (v8 == 0) {
      goto LABEL_26;
    }
    goto LABEL_22;
  }
  v11 = (_QWORD*)a1[74];
  v22[1] = v22;
  if (v11 == a1 + 73) {
  LABEL_15:
    nn_os_UnlockMutex_plt(a1 + 3);
    if (v8 != 0) {
      v2 = v8;
      v16 = (_QWORD*)((char*)v22 - ((8 * v8 + 15) & 0xFFFFFFFF0LL));
      do {
        v17 = *v16++;
        (*(void (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17);
        --v2;
      } while (v2 != 0);
    }
    nn_os_LockMutex_plt(a1 + 3);
    v18 = 1;
  }
  else {
    v12 = 0;
    while (1) {
      v13 = &v10[8 * v12];
      v2 = v11[2];
      if (*(_QWORD*)v13 != 0) {
        (*(void (**)(_QWORD))(**(_QWORD**)v13 + 8LL))(*(_QWORD*)v13);
        *(_QWORD*)v13 = 0;
      }
      v14 = (*(__int64 (**)(__int64, char*, _QWORD))(*(_QWORD*)v2 + 64LL))(
          v2, &v10[8 * v12], a1[1]);
      if (v14 != 5 && v14 != 0) {
        break;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)v13 + 32LL))(*(_QWORD*)v13,
                                                              v6);
      v11 = (_QWORD*)v11[1];
      ++v12;
      if (v11 == a1 + 73) {
        goto LABEL_15;
      }
    }
    LODWORD(v2) = v14;
    v18 = 0;
  }
  if (v8 != 0) {
  LABEL_22:
    v19 = v10 - 8;
    do {
      v20 = *(_QWORD*)&v19[v9];
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
        *(_QWORD*)&v19[v9] = 0;
      }
      v9 -= 8;
    } while (v9 != 0);
  }
LABEL_26:
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  if (v18 != 0) {
    goto LABEL_29;
  }
LABEL_30:
  nn_os_UnlockMutex_plt(a1 + 3);
  return (unsigned int)v2;
}

__int64 movie_detail_TaskQueue_ProcessEvents(void* this_)
{
  __int64 result;
  void* v3;
  void* v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  void (***v9)(_QWORD);
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  void* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BYTE v21[4];

  nn_os_ClearEvent_plt((char*)this_ + 112);
  v21[0] = 0;
  movie_detail_TaskQueue_ProcessEventRegistration_plt(this_, v21);
  result = movie_detail_TaskQueue_ProcessEventUnregistration_plt(this_, v21);
  if (v21[0] == 1) {
    result = nn_os_SignalEvent_plt((char*)this_ + 152);
  }
  v3 = *((void**)this_ + 58);
  v4 = (void*)((char*)this_ + 456);
  if (v3 != (void*)((char*)this_ + 456)) {
    v5 = 0;
    while (1) {
      while (1) {
        v6 = *((_QWORD*)v3 + 2);
        if ((*(_BYTE*)(v6 + 153) & 1) != 0) {
          goto LABEL_6;
        }
        v7 = *(_DWORD*)(v6 + 56);
        if (v7 <= 2) {
          break;
        }
        if (v7 == 3) {
          result = nn_os_TryAcquireSemaphore_plt(*(_QWORD*)(v6 + 160));
          if ((result & 1) == 0) {
            goto LABEL_6;
          }
          goto LABEL_20;
        }
        if (v7 != 5) {
          goto LABEL_40;
        }
        result = nn_os_TryWaitSystemEvent_plt(*(_QWORD*)(v6 + 160));
        if ((result & 1) != 0) {
          goto LABEL_20;
        }
      LABEL_6:
        v3 = *((void**)v3 + 1);
        if (v3 == v4) {
          goto LABEL_37;
        }
      }
      if ((unsigned int)(v7 - 1) >= 2) {
        if (v7 != 0) {
        LABEL_40:
          nn_detail_UnexpectedDefaultImpl_plt(result);
        }
        result = nn_os_TryWaitEvent_plt(*(_QWORD*)(v6 + 160));
        if ((result & 1) != 0) {
          goto LABEL_20;
        }
        goto LABEL_6;
      }
      result = nn_os_TryWaitTimerEvent_plt(v6 + 160);
      if ((result & 1) == 0) {
        goto LABEL_6;
      }
    LABEL_20:
      v8 = *(_DWORD*)(v6 + 56);
      *(_BYTE*)(v6 + 153) = 1;
      v9 = *(void (****)(_QWORD))(v6 + 72);
      v20 = *(_QWORD*)(v6 + 64);
      if (v8 == 1) {
        v10 = 0;
      }
      else {
        v10 = v6;
      }
      v11 = nn_os_GetSystemTick_plt(result);
      v12 = nn_os_ConvertToTimeSpan_plt(v11);
      if (v9 != nullptr) {
        (**v9)(v9);
      }
      if (v10 != 0) {
        atomic_fetch_add((atomic_uint* volatile)(v10 + 16), 1u);
      }
      v13 = *((_QWORD*)this_ + 56);
      (**(void (***)(__int64))v13)(v13);
      (**(void (***)(__int64))v13)(v13);
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
      v14 = (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v13 + 40LL))(
          v13, 48);
      *v14 = 0;
      v14[1] = 0;
      v14[4] = v9;
      v14[5] = v10;
      v15 = v14;
      v14[2] = v12;
      v14[3] = v20;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
      ++v5;
      v15[1] = (char*)this_ + 424;
      v16 = *((_QWORD*)this_ + 53);
      *v15 = v16;
      *(_QWORD*)(v16 + 8) = v15;
      *((_QWORD*)this_ + 53) = v15;
      ++*((_QWORD*)this_ + 55);
      if (v8 != 1) {
        v4 = (void*)((char*)this_ + 456);
        goto LABEL_6;
      }
      if (*(_BYTE*)(v6 + 152) == 1) {
        nn_os_UnlinkMultiWaitHolder_plt(v6 + 88);
        *(_BYTE*)(v6 + 152) = 0;
      }
      v17 = *((void**)v3 + 1);
      *(_QWORD*)(*(_QWORD*)v3 + 8LL) = v17;
      *(_QWORD*)v17 = *(_QWORD*)v3;
      --*((_QWORD*)this_ + 59);
      v18 = *((_QWORD*)v3 + 2);
      if (v18 != 0) {
        if (atomic_fetch_add((atomic_uint* volatile)(v18 + 16), 0xFFFFFFFF) ==
            1) {
          atomic_store(0xDEAD00u, (unsigned int*)(v18 + 16));
          v19 = *(_QWORD*)(v18 + 8);
          if (v19 != 0) {
            (**(void (***)(_QWORD))v19)(*(_QWORD*)(v18 + 8));
          }
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 56LL))(v19, v18);
          (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
        }
        *((_QWORD*)v3 + 2) = 0;
      }
      result = (*(__int64 (**)(_QWORD, void*))(
          **((_QWORD**)this_ + 60) + 56LL))(*((_QWORD*)this_ + 60), v3);
      v4 = (void*)((char*)this_ + 456);
      v3 = v17;
      if (v17 == (void*)((char*)this_ + 456)) {
      LABEL_37:
        if (v5 > 1) {
          return nn_os_ReleaseSemaphore_plt_84270((char*)this_ + 72,
                                                  (unsigned int)(v5 - 1));
        }
        return result;
      }
    }
  }
  return result;
}

__int64 movie_detail_TaskQueue_TaskQueueSocketHandlerThreadBody(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  unsigned int v56;
  __int64 v57;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 40LL))(v2, 448);
  if (v4 == 0) {
    return 17;
  }
  v5 = v4;
  movie_detail_TaskQueue_SocketEventResult_SocketEventResult_plt(v4, v2, a2);
  atomic_fetch_add((atomic_uint* volatile)(v5 + 16), 1u);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a2 + 80) + 32LL))(
      *(_QWORD*)(a2 + 80), v5);
  v6 = (_QWORD*)(v5 + 40);
  while (1) {
    nn_os_LockMutex_plt(a2 + 24);
    if (*(_BYTE*)(a2 + 160) == 1) {
      break;
    }
    v7 = *(_QWORD*)(a2 + 168);
    v8 = *(_QWORD*)(a2 + 176);
    v9 = *(_QWORD*)(a2 + 192);
    v10 = *(_DWORD*)(a2 + 164);
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a2 + 184);
    *(_QWORD*)(v5 + 64) = v9;
    *v6 = v7;
    *(_QWORD*)(v5 + 48) = v8;
    v11 = *(_QWORD*)(a2 + 200);
    v12 = *(_QWORD*)(a2 + 208);
    v13 = *(_QWORD*)(a2 + 224);
    *(_QWORD*)(v5 + 88) = *(_QWORD*)(a2 + 216);
    *(_QWORD*)(v5 + 96) = v13;
    *(_QWORD*)(v5 + 72) = v11;
    *(_QWORD*)(v5 + 80) = v12;
    v14 = *(_QWORD*)(a2 + 232);
    v15 = *(_QWORD*)(a2 + 240);
    v16 = *(_QWORD*)(a2 + 256);
    *(_QWORD*)(v5 + 120) = *(_QWORD*)(a2 + 248);
    *(_QWORD*)(v5 + 128) = v16;
    *(_QWORD*)(v5 + 104) = v14;
    *(_QWORD*)(v5 + 112) = v15;
    v17 = *(_QWORD*)(a2 + 264);
    v18 = *(_QWORD*)(a2 + 272);
    v19 = *(_QWORD*)(a2 + 288);
    *(_QWORD*)(v5 + 152) = *(_QWORD*)(a2 + 280);
    *(_QWORD*)(v5 + 160) = v19;
    *(_QWORD*)(v5 + 136) = v17;
    *(_QWORD*)(v5 + 144) = v18;
    v20 = *(_QWORD*)(a2 + 304);
    v21 = *(_QWORD*)(a2 + 312);
    v22 = *(_QWORD*)(a2 + 328);
    v23 = *(unsigned __int8*)(a2 + 296);
    *(_QWORD*)(v5 + 184) = *(_QWORD*)(a2 + 320);
    *(_QWORD*)(v5 + 192) = v22;
    *(_QWORD*)(v5 + 168) = v20;
    *(_QWORD*)(v5 + 176) = v21;
    v24 = *(_QWORD*)(a2 + 336);
    v25 = *(_QWORD*)(a2 + 344);
    v26 = *(_QWORD*)(a2 + 360);
    *(_QWORD*)(v5 + 216) = *(_QWORD*)(a2 + 352);
    *(_QWORD*)(v5 + 224) = v26;
    *(_QWORD*)(v5 + 200) = v24;
    *(_QWORD*)(v5 + 208) = v25;
    v27 = *(_QWORD*)(a2 + 368);
    v28 = *(_QWORD*)(a2 + 376);
    v29 = *(_QWORD*)(a2 + 392);
    *(_QWORD*)(v5 + 248) = *(_QWORD*)(a2 + 384);
    *(_QWORD*)(v5 + 256) = v29;
    *(_QWORD*)(v5 + 232) = v27;
    *(_QWORD*)(v5 + 240) = v28;
    v30 = *(_QWORD*)(a2 + 400);
    v31 = *(_QWORD*)(a2 + 408);
    v32 = *(_QWORD*)(a2 + 424);
    *(_QWORD*)(v5 + 280) = *(_QWORD*)(a2 + 416);
    *(_QWORD*)(v5 + 288) = v32;
    *(_QWORD*)(v5 + 264) = v30;
    *(_QWORD*)(v5 + 272) = v31;
    v33 = *(_QWORD*)(a2 + 440);
    v34 = *(_QWORD*)(a2 + 448);
    v35 = *(_QWORD*)(a2 + 464);
    v36 = *(unsigned __int8*)(a2 + 432);
    *(_QWORD*)(v5 + 312) = *(_QWORD*)(a2 + 456);
    *(_QWORD*)(v5 + 320) = v35;
    *(_QWORD*)(v5 + 296) = v33;
    *(_QWORD*)(v5 + 304) = v34;
    v37 = *(_QWORD*)(a2 + 472);
    v38 = *(_QWORD*)(a2 + 480);
    v39 = *(_QWORD*)(a2 + 496);
    *(_QWORD*)(v5 + 344) = *(_QWORD*)(a2 + 488);
    *(_QWORD*)(v5 + 352) = v39;
    *(_QWORD*)(v5 + 328) = v37;
    *(_QWORD*)(v5 + 336) = v38;
    v40 = *(_QWORD*)(a2 + 504);
    v41 = *(_QWORD*)(a2 + 512);
    v42 = *(_QWORD*)(a2 + 528);
    *(_QWORD*)(v5 + 376) = *(_QWORD*)(a2 + 520);
    *(_QWORD*)(v5 + 384) = v42;
    *(_QWORD*)(v5 + 360) = v40;
    *(_QWORD*)(v5 + 368) = v41;
    v43 = *(_QWORD*)(a2 + 536);
    v44 = *(_QWORD*)(a2 + 544);
    v45 = *(_QWORD*)(a2 + 560);
    *(_QWORD*)(v5 + 408) = *(_QWORD*)(a2 + 552);
    *(_QWORD*)(v5 + 416) = v45;
    *(_QWORD*)(v5 + 392) = v43;
    *(_QWORD*)(v5 + 400) = v44;
    *(_BYTE*)(v5 + 424) = *(_BYTE*)(a2 + 568);
    v46 = *(_QWORD*)(a2 + 576);
    v47 = *(_QWORD*)(a2 + 584);
    *(_BYTE*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 432) = v46;
    *(_QWORD*)(v5 + 440) = v47;
    nn_os_UnlockMutex_plt(a2 + 24);
    v48 = *(int*)(a2 + 592);
    if (v10 <= (int)v48 + 1) {
      v49 = (unsigned int)(v48 + 1);
    }
    else {
      v49 = (unsigned int)v10;
    }
    v50 = 1LL << v48;
    v51 = (v48 >> 3) & 0x1FFFFFFFFFFFFFF8LL;
    if (v23 != 0) {
      v52 = v5 + 168;
    }
    else {
      v52 = 0;
    }
    if (v36 != 0) {
      v53 = v5 + 296;
    }
    else {
      v53 = 0;
    }
    *(_QWORD*)((char*)v6 + v51) |= v50;
    if (*(_BYTE*)(v5 + 424) != 0) {
      v54 = v5 + 432;
    }
    else {
      v54 = 0;
    }
    v55 = nn_socket_Select_plt(v49, v5 + 40, v52, v53, v54);
    if (v55 == 0) {
      *(_BYTE*)(v5 + 32) = 1;
      goto LABEL_23;
    }
    if (v55 == -1) {
      if ((unsigned int)nn_socket_GetLastError_plt() != 11) {
        v56 = 1;
        goto LABEL_31;
      }
    }
    else {
    LABEL_23:
      if (((v6[(unsigned __int64)*(int*)(a2 + 592) >> 6] >>
            *(_DWORD*)(a2 + 592)) &
           1) != 0) {
        nn_socket_EventFdRead_plt();
        if (v55 != 1 && *(_BYTE*)(a2 + 160) == 0) {
          *(_QWORD*)((char*)v6 + (((unsigned __int64)*(int*)(a2 + 592) >> 3) &
                                  0x1FFFFFFFFFFFFFF8LL)) &=
              ~(1LL << *(_DWORD*)(a2 + 592));
          goto LABEL_4;
        }
        if ((*(_BYTE*)(a2 + 160) & 1) != 0) {
          goto LABEL_29;
        }
      }
      else {
      LABEL_4:
        (*(void (**)(_QWORD))(**(_QWORD**)(a2 + 80) + 56LL))(
            *(_QWORD*)(a2 + 80));
      }
    }
  }
  nn_os_UnlockMutex_plt(a2 + 24);
LABEL_29:
  v56 = 0;
LABEL_31:
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a2 + 80) + 32LL))(
      *(_QWORD*)(a2 + 80), 0);
  if (atomic_fetch_add((atomic_uint* volatile)(v5 + 16), 0xFFFFFFFF) == 1) {
    atomic_store(0xDEAD00u, (unsigned int*)(v5 + 16));
    v57 = *(_QWORD*)(v5 + 8);
    if (v57 != 0) {
      (**(void (***)(_QWORD))v57)(*(_QWORD*)(v5 + 8));
    }
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v57 + 56LL))(v57, v5);
    (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
  }
  return v56;
}

__int64 movie_detail_TaskQueue_ProcessEventRegistration(__int64 this_, bool* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 i;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;

  v2 = *(_QWORD**)(this_ + 496);
  v3 = (_QWORD*)(this_ + 488);
  for (i = this_; v2 != v3; v2 = (_QWORD*)v2[1]) {
    v10 = v2[2];
    if ((*(_BYTE*)(v10 + 152) & 1) == 0) {
      nn_os_LinkMultiWaitHolder_plt(i + 192, v10 + 88);
      *(_BYTE*)(v10 + 152) = 1;
    }
    v6 = *(_QWORD*)(i + 480);
    (**(void (***)(__int64))v6)(v6);
    (**(void (***)(__int64))v6)(v6);
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    v7 = (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v6 + 40LL))(v6,
                                                                           24);
    *v7 = 0;
    v7[1] = 0;
    v8 = v7;
    v7[2] = v2[2];
    v2[2] = 0;
    this_ = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    v8[1] = i + 456;
    v9 = *(_QWORD*)(i + 456);
    *v8 = v9;
    *(_QWORD*)(v9 + 8) = v8;
    *(_QWORD*)(i + 456) = v8;
    ++*(_QWORD*)(i + 472);
    *a2 = true;
  }
  if (*(_QWORD*)(i + 504) != 0) {
    v11 = *(_QWORD**)(i + 496);
    v12 = *(_QWORD**)(*(_QWORD*)(i + 488) + 8LL);
    *(_QWORD*)(*v11 + 8LL) = v12;
    *v12 = *v11;
    *(_QWORD*)(i + 504) = 0;
    if (v11 != v3) {
      do {
        v14 = (_QWORD*)v11[1];
        v13 = v11[2];
        if (v13 != 0) {
          if (atomic_fetch_add((atomic_uint* volatile)(v13 + 16), 0xFFFFFFFF) ==
              1) {
            atomic_store(0xDEAD00u, (unsigned int*)(v13 + 16));
            v15 = v11;
            v16 = *(_QWORD*)(v13 + 8);
            if (v16 != 0) {
              (**(void (***)(_QWORD))v16)(*(_QWORD*)(v13 + 8));
            }
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 56LL))(v16, v13);
            (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
            v11 = v15;
          }
          v11[2] = 0;
        }
        this_ = (*(__int64 (**)(_QWORD))(**(_QWORD**)(i + 512) + 56LL))(
            *(_QWORD*)(i + 512));
        v11 = v14;
      } while (v14 != v3);
    }
  }
  return this_;
}

__int64 movie_detail_TaskQueue_ProcessEventUnregistration(__int64 this_,
                                                          bool* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 i;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;

  v2 = *(_QWORD**)(this_ + 528);
  v3 = (_QWORD*)(this_ + 520);
  for (i = this_; v2 != v3; v2 = (_QWORD*)v2[1]) {
    v6 = v2[2];
    if (*(_BYTE*)(v6 + 152) == 1) {
      this_ = nn_os_UnlinkMultiWaitHolder_plt(v6 + 88);
      *(_BYTE*)(v6 + 152) = 0;
    }
    *a2 = true;
  }
  if (*(_QWORD*)(i + 536) != 0) {
    v7 = *(_QWORD**)(i + 528);
    v8 = *(_QWORD**)(*(_QWORD*)(i + 520) + 8LL);
    *(_QWORD*)(*v7 + 8LL) = v8;
    *v8 = *v7;
    *(_QWORD*)(i + 536) = 0;
    if (v7 != v3) {
      do {
        v10 = (_QWORD*)v7[1];
        v9 = v7[2];
        if (v9 != 0) {
          if (atomic_fetch_add((atomic_uint* volatile)(v9 + 16), 0xFFFFFFFF) ==
              1) {
            atomic_store(0xDEAD00u, (unsigned int*)(v9 + 16));
            v11 = v7;
            v12 = *(_QWORD*)(v9 + 8);
            if (v12 != 0) {
              (**(void (***)(_QWORD))v12)(*(_QWORD*)(v9 + 8));
            }
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            (*(void (**)(__int64, __int64))(*(_QWORD*)v12 + 56LL))(v12, v9);
            (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
            v7 = v11;
          }
          v7[2] = 0;
        }
        this_ = (*(__int64 (**)(_QWORD))(**(_QWORD**)(i + 544) + 56LL))(
            *(_QWORD*)(i + 544));
        v7 = v10;
      } while (v10 != v3);
    }
  }
  return this_;
}

__int64 movie_detail_TaskQueue_SocketEventResult_SocketEventResult(
    __int64 a1, void (***a2)(_QWORD), __int64 a3, _QWORD* a4)
{
  __int64 v7;
  __int64 result;
  __int64 v9;

  *(_QWORD*)a1 = MovieData_c08e0 + 16;
  *(_QWORD*)(a1 + 8) = a2;
  if (a2 != nullptr) {
    (**a2)(a2);
  }
  *(_DWORD*)(a1 + 16) = 0;
  v7 = MovieData_c0958;
  *(_QWORD*)(a1 + 24) = a3;
  *(_BYTE*)(a1 + 32) = 0;
  *(_QWORD*)a1 = v7 + 16;
  result = memset_plt(a1 + 40, 0, 384);
  v9 = a4[1];
  *(_QWORD*)(a1 + 432) = *a4;
  *(_QWORD*)(a1 + 440) = v9;
  return result;
}

__int64 movie_detail_TaskQueue_EventHandler_EventHandler(
    __int64 a1, void (***a2)(_QWORD), int a3, __int64* a4, __int64* a5,
    __int64* a6, _QWORD* a7, __int64 a8, void (***a9)(_QWORD))
{
  __int64 v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;

  *(_QWORD*)a1 = MovieData_c0960 + 16;
  *(_QWORD*)(a1 + 8) = a2;
  if (a2 != nullptr) {
    (**a2)(a2);
  }
  *(_DWORD*)(a1 + 16) = 0;
  v16 = MovieData_c0968;
  *(_WORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 28) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v16 + 16;
  nn_os_InitializeMutex_plt(a1 + 24, 0, 0);
  *(_QWORD*)(a1 + 64) = a8;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = a9;
  *(_DWORD*)(a1 + 56) = 4;
  if (a9 != nullptr) {
    (**a9)(a9);
  }
  *(_WORD*)(a1 + 152) = 0;
  result = memset_plt(a1 + 160, 0, 528);
  *(_DWORD*)(a1 + 164) = a3;
  *(_BYTE*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_BYTE*)(a1 + 568) = a7 != nullptr;
  *(_DWORD*)(a1 + 592) = -1;
  if (a4 != nullptr) {
    v18 = *a4;
    v19 = a4[1];
    v20 = a4[3];
    *(_QWORD*)(a1 + 184) = a4[2];
    *(_QWORD*)(a1 + 192) = v20;
    *(_QWORD*)(a1 + 168) = v18;
    *(_QWORD*)(a1 + 176) = v19;
    v21 = a4[4];
    v22 = a4[5];
    v23 = a4[7];
    *(_QWORD*)(a1 + 216) = a4[6];
    *(_QWORD*)(a1 + 224) = v23;
    *(_QWORD*)(a1 + 200) = v21;
    *(_QWORD*)(a1 + 208) = v22;
    v24 = a4[8];
    v25 = a4[9];
    v26 = a4[11];
    *(_QWORD*)(a1 + 248) = a4[10];
    *(_QWORD*)(a1 + 256) = v26;
    *(_QWORD*)(a1 + 232) = v24;
    *(_QWORD*)(a1 + 240) = v25;
    v27 = a4[12];
    v28 = a4[13];
    v29 = a4[15];
    *(_QWORD*)(a1 + 280) = a4[14];
    *(_QWORD*)(a1 + 288) = v29;
    *(_QWORD*)(a1 + 264) = v27;
    *(_QWORD*)(a1 + 272) = v28;
    if (a5 != nullptr) {
      goto LABEL_7;
    }
  }
  else {
    *(_QWORD*)(a1 + 280) = 0;
    *(_QWORD*)(a1 + 288) = 0;
    *(_QWORD*)(a1 + 264) = 0;
    *(_QWORD*)(a1 + 272) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    *(_QWORD*)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 232) = 0;
    *(_QWORD*)(a1 + 240) = 0;
    *(_QWORD*)(a1 + 216) = 0;
    *(_QWORD*)(a1 + 224) = 0;
    *(_QWORD*)(a1 + 200) = 0;
    *(_QWORD*)(a1 + 208) = 0;
    *(_QWORD*)(a1 + 184) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    *(_QWORD*)(a1 + 168) = 0;
    *(_QWORD*)(a1 + 176) = 0;
    if (a5 != nullptr) {
    LABEL_7:
      *(_BYTE*)(a1 + 296) = 1;
      v30 = *a5;
      v31 = a5[1];
      v32 = a5[3];
      *(_QWORD*)(a1 + 320) = a5[2];
      *(_QWORD*)(a1 + 328) = v32;
      *(_QWORD*)(a1 + 304) = v30;
      *(_QWORD*)(a1 + 312) = v31;
      v33 = a5[4];
      v34 = a5[5];
      v35 = a5[7];
      *(_QWORD*)(a1 + 352) = a5[6];
      *(_QWORD*)(a1 + 360) = v35;
      *(_QWORD*)(a1 + 336) = v33;
      *(_QWORD*)(a1 + 344) = v34;
      v36 = a5[8];
      v37 = a5[9];
      v38 = a5[11];
      *(_QWORD*)(a1 + 384) = a5[10];
      *(_QWORD*)(a1 + 392) = v38;
      *(_QWORD*)(a1 + 368) = v36;
      *(_QWORD*)(a1 + 376) = v37;
      v39 = a5[12];
      v40 = a5[13];
      v41 = a5[15];
      *(_QWORD*)(a1 + 416) = a5[14];
      *(_QWORD*)(a1 + 424) = v41;
      *(_QWORD*)(a1 + 400) = v39;
      *(_QWORD*)(a1 + 408) = v40;
      v42 = (_QWORD*)(a1 + 440);
      if (a6 != nullptr) {
        goto LABEL_8;
      }
      goto LABEL_13;
    }
  }
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  v42 = (_QWORD*)(a1 + 440);
  if (a6 != nullptr) {
  LABEL_8:
    *(_BYTE*)(a1 + 432) = 1;
    v43 = *a6;
    v44 = a6[1];
    v45 = a6[3];
    v42[2] = a6[2];
    v42[3] = v45;
    *v42 = v43;
    v42[1] = v44;
    v46 = a6[4];
    v47 = a6[5];
    v48 = a6[7];
    v42[6] = a6[6];
    v42[7] = v48;
    v42[4] = v46;
    v42[5] = v47;
    v49 = a6[8];
    v50 = a6[9];
    v51 = a6[11];
    v42[10] = a6[10];
    v42[11] = v51;
    v42[8] = v49;
    v42[9] = v50;
    v52 = a6[12];
    v53 = a6[13];
    v54 = a6[15];
    v42[14] = a6[14];
    v42[15] = v54;
    v42[12] = v52;
    v42[13] = v53;
    if (a7 == nullptr) {
      return result;
    }
    goto LABEL_9;
  }
LABEL_13:
  v42[14] = 0;
  v42[15] = 0;
  v42[12] = 0;
  v42[13] = 0;
  v42[10] = 0;
  v42[11] = 0;
  v42[8] = 0;
  v42[9] = 0;
  v42[6] = 0;
  v42[7] = 0;
  v42[4] = 0;
  v42[5] = 0;
  v42[2] = 0;
  v42[3] = 0;
  *v42 = 0;
  v42[1] = 0;
  if (a7 == nullptr) {
    return result;
  }
LABEL_9:
  v55 = a7[1];
  *(_QWORD*)(a1 + 576) = *a7;
  *(_QWORD*)(a1 + 584) = v55;
  return result;
}

__int64 movie_task_queue_1b670(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;

  *a1 = MovieData_c08e0 + 16;
  v1 = (_QWORD*)a1[1];
  if (v1 != nullptr) {
    v2 = a1;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v1 + 8LL))(
        (void*)v1, a1[1]);
    a1 = v2;
  }
  return MovieRoutine_82870(a1, 32);
}

#pragma GCC visibility pop
