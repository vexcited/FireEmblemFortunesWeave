#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_ConvertToTimeSpan_plt(_QWORD);
__int64 nn_os_GetSystemTick_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_os_SignalEvent_plt(_QWORD);
__int64 nn_os_TimedWaitEvent_plt(_QWORD, _QWORD);
__int64 nn_syncpt_sdk_MakeNvRmFenceFromSyncPointHandle_plt(_QWORD, _QWORD,
                                                           _QWORD);
__int64 nn_syncpt_sdk_MakeSyncPointHandleFromNvRmFence_plt(_QWORD, _QWORD);
__int64 nn_syncpt_sdk_TryWaitSyncPoint_plt(_QWORD);
__int64 nn_util_IntrusiveRbTreeImpl_RemoveColor(_QWORD);
__int64 gpu_sdk_util_detail_470e80(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5);

__int64 gpu_sdk_util_detail_470e80(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5)
{
  __int64 v9;
  __int64 result;
  _QWORD** v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  int v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  _QWORD* v37;
  _QWORD* v38;
  void (*v39)(_QWORD, _QWORD);
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD v48[2];
  void (*v49)(_QWORD, _QWORD);
  __int64 v50;

  v9 = nn_os_GetSystemTick_plt(a1);
  result = nn_os_TimedWaitEvent_plt(a3 + 8, 300000);
  if ((result & 1) == 0) {
    v11 = (_QWORD**)(a2 + 24);
    v44 = a3;
    v45 = a5;
    do {
      result = nn_syncpt_sdk_TryWaitSyncPoint_plt(a5);
      if ((result & 1) != 0) {
        return result;
      }
      v46 = nn_os_GetSystemTick_plt(result);
      if (nn_os_ConvertToTimeSpan_plt(v46 - v9) >= 1000000000) {
        LODWORD(v49) = 0;
        LODWORD(v48[0]) = 0;
        nn_syncpt_sdk_MakeNvRmFenceFromSyncPointHandle_plt(&v49, v48, a5);
        LODWORD(v49) = 0;
        LODWORD(v48[0]) = 0;
        nn_syncpt_sdk_MakeNvRmFenceFromSyncPointHandle_plt(&v49, v48, a5);
        nn_os_SdkMutexType_Lock_plt(a2);
        v12 = *(_QWORD*)(a2 + 8);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v12 + 16);
          v47 = v12 + 8;
          if (v13 != v12 + 8) {
            while (1) {
              v14 = *(_QWORD**)(v13 - 32);
              if (v14 != (_QWORD*)(v13 - 40)) {
                break;
              }
            LABEL_11:
              v13 = *(_QWORD*)(v13 + 8);
              if (v13 == v47) {
                goto LABEL_4;
              }
            }
            while (1) {
              v48[0] = 0;
              v48[1] = 0;
              v48[0] = nn_syncpt_sdk_MakeSyncPointHandleFromNvRmFence_plt(
                  *((unsigned int*)v14 - 10), *((unsigned int*)v14 - 9));
              v48[1] = v15;
              if ((nn_syncpt_sdk_TryWaitSyncPoint_plt(v48) & 1) == 0) {
                goto LABEL_11;
              }
              v16 = (_QWORD*)v14[1];
              v17 = *v16;
              *(_QWORD*)(*v14 + 8LL) = v16;
              *v16 = *v14;
              *(_QWORD*)(v17 + 8) = v14;
              *v14 = v17;
              --*(_QWORD*)(v13 - 24);
              if (*(v14 - 2) != 0) {
                break;
              }
            LABEL_64:
              v43 = *(v14 - 1);
              *(v14 - 2) = 0;
              if (v43 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(a1 + 24),
                                          0xFFFFFFFFFFFFFFFFLL,
                                          memory_order_relaxed);
                (*(void (**)(__int64, _QWORD))(a1 + 8))(v43,
                                                        *(_QWORD*)(a1 + 16));
              }
              atomic_fetch_add_explicit((atomic_ullong* volatile)(a1 + 24),
                                        0xFFFFFFFFFFFFFFFFLL,
                                        memory_order_relaxed);
              (*(void (**)(_QWORD*, _QWORD))(a1 + 8))(v14 - 5,
                                                      *(_QWORD*)(a1 + 16));
              v14 = v16;
              if (v16 == (_QWORD*)(v13 - 40)) {
                goto LABEL_11;
              }
            }
            v18 = 0;
            while (2) {
              v19 = *(_QWORD*)(*(v14 - 1) + 8 * v18);
              v20 = *(_QWORD*)(v19 + 64) & ~*(_QWORD*)(v13 - 48);
              v21 = *(_DWORD*)(v19 + 60);
              *(_QWORD*)(v19 + 64) = v20;
              if (v21 != 0 || v20 != 0) {
              LABEL_18:
                if ((unsigned __int64)++v18 >= *(v14 - 2)) {
                  goto LABEL_64;
                }
                continue;
              }
              break;
            }
            v23 = *(_QWORD**)(v19 + 16);
            v24 = (_QWORD*)(v19 + 8);
            if (*(_QWORD*)(v19 + 8) != 0) {
              if (v23 != nullptr) {
                do {
                  v25 = v23;
                  v23 = (_QWORD*)*v23;
                } while (v23 != nullptr);
                v26 = v25[1];
                v27 = (_QWORD*)v25[2];
                v28 = *((_DWORD*)v25 + 6);
                if (v26 != 0) {
                  *(_QWORD*)(v26 + 16) = v27;
                }
                if (v27 != nullptr) {
                  if ((_QWORD*)*v27 == v25) {
                    *v27 = v26;
                  }
                  else {
                    v27[1] = v26;
                  }
                }
                else {
                  *(_QWORD*)(a2 + 16) = v26;
                }
                v30 = *(_QWORD*)(v19 + 16);
                v31 = *(_QWORD*)(v19 + 24);
                v32 = *(_QWORD*)(v19 + 32);
                *v25 = *v24;
                v25[1] = v30;
                v25[2] = v31;
                v25[3] = v32;
                v33 = *(_QWORD**)(v19 + 24);
                if (v33 == nullptr) {
                  *(_QWORD*)(a2 + 16) = v25;
                  *(_QWORD*)(*(_QWORD*)(v19 + 8) + 16LL) = v25;
                  v34 = *(_QWORD*)(v19 + 16);
                  if (v34 == 0) {
                    goto LABEL_48;
                  }
                  goto LABEL_47;
                }
                if ((_QWORD*)*v33 != v24) {
                  v33[1] = v25;
                  *(_QWORD*)(*(_QWORD*)(v19 + 8) + 16LL) = v25;
                  v34 = *(_QWORD*)(v19 + 16);
                  if (v34 == 0) {
                    goto LABEL_48;
                  }
                LABEL_47:
                  *(_QWORD*)(v34 + 16) = v25;
                  goto LABEL_48;
                }
                *v33 = v25;
                *(_QWORD*)(*(_QWORD*)(v19 + 8) + 16LL) = v25;
                v34 = *(_QWORD*)(v19 + 16);
                if (v34 != 0) {
                  goto LABEL_47;
                }
              LABEL_48:
                if (v28 != 0) {
                  v35 = *v11;
                  if (*v11 != nullptr) {
                  LABEL_50:
                    v36 = nullptr;
                    v37 = (_QWORD*)(a2 + 24);
                    do {
                      while (1) {
                        v38 = (_QWORD*)v35[6];
                        if (*v35 != v19) {
                          break;
                        }
                        *v37 = v38;
                        v35[6] = v36;
                        v36 = v35;
                        v35 = v38;
                        if (v38 == nullptr) {
                          goto LABEL_54;
                        }
                      }
                      v37 = v35 + 6;
                      v35 = (_QWORD*)v35[6];
                    } while (v38 != nullptr);
                  LABEL_54:
                    v39 = *(void (**)(_QWORD, _QWORD))(v19 + 72);
                    v40 = *(_QWORD*)(v19 + 80);
                    v49 = v39;
                    v50 = v40;
                    if (v39 != nullptr) {
                    LABEL_55:
                      v39(&v50, v19);
                    }
                  LABEL_56:
                    if (v36 != nullptr) {
                      do {
                        v41 = (_QWORD*)v36[6];
                        v36[6] = 0;
                        *v36 = 0;
                        nn_os_SignalEvent_plt(v36 + 1);
                        v36 = v41;
                      } while (v41 != nullptr);
                    }
                    goto LABEL_18;
                  }
                }
                else {
                  nn_util_IntrusiveRbTreeImpl_RemoveColor(a2 + 16);
                  v35 = *v11;
                  if (*v11 != nullptr) {
                    goto LABEL_50;
                  }
                }
                v36 = nullptr;
                v39 = *(void (**)(_QWORD, _QWORD))(v19 + 72);
                v42 = *(_QWORD*)(v19 + 80);
                v49 = v39;
                v50 = v42;
                if (v39 != nullptr) {
                  goto LABEL_55;
                }
                goto LABEL_56;
              }
              v29 = *(_QWORD**)(v19 + 24);
              v28 = *(_DWORD*)(v19 + 32);
              v23 = *(_QWORD**)(v19 + 8);
            LABEL_37:
              v23[2] = v29;
              if (v29 == nullptr) {
                goto LABEL_38;
              }
            }
            else {
              v29 = *(_QWORD**)(v19 + 24);
              v28 = *(_DWORD*)(v19 + 32);
              if (v23 != nullptr) {
                goto LABEL_37;
              }
              if (v29 == nullptr) {
              LABEL_38:
                *(_QWORD*)(a2 + 16) = v23;
                goto LABEL_48;
              }
            }
            if ((_QWORD*)*v29 == v24) {
              *v29 = v23;
            }
            else {
              v29[1] = v23;
            }
            goto LABEL_48;
          }
        }
      LABEL_4:
        nn_os_SdkMutexType_Unlock_plt(a2);
        a5 = v45;
        v9 = v46;
        a3 = v44;
      }
      result = nn_os_TimedWaitEvent_plt(a3 + 8, 300000);
    } while ((result & 1) == 0);
  }
  return result;
}

#pragma GCC visibility pop
