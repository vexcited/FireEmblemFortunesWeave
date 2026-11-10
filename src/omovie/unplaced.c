#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18cde80(_QWORD, _QWORD);
__int64 GameRoutine_18cdf40(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 movie_VideoDecoder_ReleaseVideoFrame(_QWORD, _QWORD);
__int64 movie_VideoFrame_GetBuffer(_QWORD, _QWORD, _QWORD);
__int64 movie_VideoFrame_GetEndOfStreamState(_QWORD, _QWORD);
__int64 movie_VideoFrame_GetNativeImageHandle(_QWORD, _QWORD);
__int64 movie_VideoFrame_GetTimeStamp(_QWORD, _QWORD);
__int64 movie_VideoFrame_SetEndOfStreamState(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_oe_GetProgramTotalActiveTime(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_SignalEvent(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 (*GameData_21a4eb0)(__int64, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_18ce260();
void __attribute__((noreturn)) GameRoutine_18cda20(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 omovie_18cd4a0(__int64 a1, __int64 a2);

__int64 omovie_18cd4a0(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 EndOfStreamStateEPb;
  __int64* v12;
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
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  char* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  unsigned int v54;
  char v56[4];
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;

  nn_os_LockMutex(a1 + 728);
  v4 = *(_QWORD**)(a1 + 704);
  if (v4 != *(_QWORD**)(a1 + 712)) {
    do {
      while (1) {
        v6 = *v4;
        v5 = v4[1];
        if (v5 == 0 || (unsigned int)GameData_21a4eb0(v5, 0) == 0) {
          break;
        }
        v4 += 2;
        if (v4 == *(_QWORD**)(a1 + 712)) {
          goto LABEL_11;
        }
      }
      movie_VideoFrame_SetEndOfStreamState(v6, 0);
      movie_VideoDecoder_ReleaseVideoFrame(*(_QWORD*)(a1 + 560), v6);
      v7 = *(_QWORD**)(a1 + 712);
      v8 = v4 + 2;
      if (v4 + 2 == v7) {
        v10 = v4;
      }
      else {
        do {
          v9 = v8[1];
          *(v8 - 2) = *v8;
          *(v8 - 1) = v9;
          v8 += 2;
        } while (v8 != v7);
        v10 = v8 - 2;
      }
      *(_QWORD*)(a1 + 712) = v10;
    } while (v4 != v10);
  }
LABEL_11:
  LODWORD(EndOfStreamStateEPb) = 0;
  if ((*(_BYTE*)(a1 + 760) & 1) == 0 && (*(_BYTE*)(a1 + 763) & 1) != 0) {
    v12 = *(__int64**)(a1 + 680);
    if (v12 == *(__int64**)(a1 + 688)) {
    LABEL_63:
      LODWORD(EndOfStreamStateEPb) = 0;
    }
    else {
      *(_DWORD*)(a1 + 808) = 0;
      while (1) {
        v13 = *v12;
        v60 = 0;
        v59 = 0;
        v58 = 0;
        LODWORD(EndOfStreamStateEPb) = movie_VideoFrame_GetTimeStamp(v13, &v58);
        if ((_DWORD)EndOfStreamStateEPb != 0) {
          break;
        }
        if (*(_BYTE*)(a1 + 596) == 1) {
          v14 = v58;
          v15 = *(_QWORD*)(a1 + 616);
          *(_BYTE*)(a1 + 596) = 0;
          v16 = v14 / 1000;
          v17 = ((__int64 (*)(void))nn_oe_GetProgramTotalActiveTime)() / 1000;
          nn_os_LockMutex(v15);
          *(_QWORD*)(v15 + 32) = v16;
          *(_QWORD*)(v15 + 40) = v17;
          nn_os_UnlockMutex(v15);
        }
        v18 = *(_QWORD*)(a1 + 616);
        v19 = v58 / 1000;
        nn_os_LockMutex(v18);
        v20 = (__int64)((double)(v19 - *(_QWORD*)(v18 + 32)) /
                            *(double*)(v18 + 48) +
                        (double)*(__int64*)(v18 + 40));
        v21 = nn_os_UnlockMutex(v18);
        if (nn_oe_GetProgramTotalActiveTime(v21) / -1000 + v20 > 3999) {
          goto LABEL_63;
        }
        EndOfStreamStateEPb =
            movie_VideoFrame_GetEndOfStreamState(v13, a1 + 760);
        if ((_DWORD)EndOfStreamStateEPb != 0) {
          break;
        }
        v22 = *(_QWORD*)(a1 + 616);
        v23 = v58 / 1000;
        v24 = *(unsigned __int8*)(a1 + 596);
        *(_QWORD*)(a1 + 600) = v58 / 1000;
        if (v24 == 1) {
          *(_BYTE*)(a1 + 596) = 0;
          v25 = nn_oe_GetProgramTotalActiveTime(EndOfStreamStateEPb) / 1000;
          nn_os_LockMutex(v22);
          *(_QWORD*)(v22 + 32) = v23;
          *(_QWORD*)(v22 + 40) = v25;
          nn_os_UnlockMutex(v22);
          v23 = *(_QWORD*)(a1 + 600);
        }
        nn_os_LockMutex(v22);
        v26 = (__int64)((double)(v23 - *(_QWORD*)(v22 + 32)) /
                            *(double*)(v22 + 48) +
                        (double)*(__int64*)(v22 + 40));
        v27 = nn_os_UnlockMutex(v22);
        v28 = v26 - nn_oe_GetProgramTotalActiveTime(v27) / 1000;
        if (v28 >= 0) {
          if (v28 != 0) {
            nn_os_SleepThread(1000 * v28);
          }
        LABEL_32:
          v32 = *(_DWORD*)(a1 + 796);
          v57 = 0;
          if (v32 == 2) {
            LODWORD(EndOfStreamStateEPb) =
                movie_VideoFrame_GetNativeImageHandle(v13, &v57);
            if ((_DWORD)EndOfStreamStateEPb != 0) {
              break;
            }
            GameRoutine_18cde80(*(_QWORD*)(a1 + 568), v57);
            v59 = 4;
          }
          else if (v32 == 1) {
            LODWORD(EndOfStreamStateEPb) =
                movie_VideoFrame_GetBuffer(v13, &v60, &v59);
            if ((_DWORD)EndOfStreamStateEPb != 0) {
              break;
            }
            GameRoutine_18cdf40(*(_QWORD*)(a1 + 568), v60);
          }
          v33 = *(_QWORD*)(a1 + 680);
          v34 = *(_QWORD*)(a1 + 688);
          v35 = v34 - (v33 + 8);
          if (v34 != v33 + 8) {
            memmove(*(_QWORD*)(a1 + 680), v33 + 8, v34 - (v33 + 8));
          }
          v56[0] = 0;
          *(_QWORD*)(a1 + 688) = v33 + v35;
          LODWORD(EndOfStreamStateEPb) =
              movie_VideoFrame_GetEndOfStreamState(v13, v56);
          if ((_DWORD)EndOfStreamStateEPb != 0) {
            break;
          }
          EndOfStreamStateEPb = movie_VideoFrame_SetEndOfStreamState(v13, 0);
          if ((_DWORD)EndOfStreamStateEPb != 0) {
            break;
          }
          if (v59 != 0 && (v56[0] & 1) == 0) {
            v36 = *(_QWORD*)(a1 + 568);
            EndOfStreamStateEPb =
                ((__int64 (*)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              __int64))GameRoutine_18ce260)(
                    v36, *(unsigned int*)(v36 + 16), *(unsigned int*)(v36 + 24),
                    0, *(unsigned int*)(v36 + 16),
                    (unsigned int)(*(_DWORD*)(v36 + 24) * *(_DWORD*)(v36 + 16)),
                    a2);
          }
          v37 = *(_QWORD**)(a1 + 712);
          v38 = *(_QWORD*)(*(_QWORD*)(a1 + 568) + 144LL);
          v39 = *(_QWORD*)(a1 + 720);
          if ((unsigned __int64)v37 >= v39) {
            v41 = *(_QWORD*)(a1 + 704);
            v42 = (char*)v37 - v41;
            v43 = ((__int64)v37 - v41) >> 4;
            v44 = v43 + 1;
            if ((unsigned __int64)(v43 + 1) >> 60 != 0) {
              GameRoutine_18cda20(EndOfStreamStateEPb);
            }
            v45 = v39 - v41;
            v46 = fw_memory_g_heap_manager_ptr;
            if (v45 >> 3 > v44) {
              v44 = v45 >> 3;
            }
            if ((unsigned __int64)v45 >= 0x7FFFFFFFFFFFFFF0LL) {
              v47 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v47 = v44;
            }
            if (v47 != 0) {
              if (v47 >> 60 != 0) {
                GameRoutine_60a210(EndOfStreamStateEPb);
              }
              v48 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v47, 16, 0);
            }
            else {
              v48 = 0;
            }
            v49 = &v42[v48];
            v50 = v48 + 16 * v47;
            *(_QWORD*)v49 = v13;
            *((_QWORD*)v49 + 1) = v38;
            v51 = (__int64)&v42[v48 + -16 * v43];
            v40 = (__int64)&v42[v48 + 16];
            memcpy(v51, v41, v42);
            *(_QWORD*)(a1 + 704) = v51;
            *(_QWORD*)(a1 + 712) = v40;
            *(_QWORD*)(a1 + 720) = v50;
            if (v41 != 0) {
              v52 = 128;
              if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) == 0) {
                v52 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v46 + v52);
            }
          }
          else {
            *v37 = v13;
            v37[1] = v38;
            v40 = (__int64)(v37 + 2);
          }
          v53 = *(unsigned __int8*)(a1 + 760);
          *(_QWORD*)(a1 + 712) = v40;
          if (v53 == 1) {
          LABEL_62:
            nn_os_SignalEvent(*(_QWORD*)(a1 + 632));
            goto LABEL_63;
          }
          goto LABEL_63;
        }
        if ((unsigned __int64)v28 > 0xFFFFFFFFFFFF63BFLL) {
          goto LABEL_32;
        }
        ++*(_DWORD*)(a1 + 608);
        if (*(_BYTE*)(a1 + 760) == 1) {
          goto LABEL_62;
        }
        if (*(_QWORD*)(a1 + 688) - *(_QWORD*)(a1 + 680) == 8) {
          goto LABEL_32;
        }
        movie_VideoFrame_SetEndOfStreamState(v13, 0);
        movie_VideoDecoder_ReleaseVideoFrame(*(_QWORD*)(a1 + 560), v13);
        v29 = *(_QWORD*)(a1 + 680);
        v30 = *(_QWORD*)(a1 + 688);
        v31 = v30 - (v29 + 8);
        if (v30 != v29 + 8) {
          memmove(*(_QWORD*)(a1 + 680), v29 + 8, v30 - (v29 + 8));
        }
        v12 = *(__int64**)(a1 + 680);
        *(_QWORD*)(a1 + 688) = v29 + v31;
        if (v12 == (__int64*)(v29 + v31)) {
          goto LABEL_63;
        }
      }
    }
  }
  v54 = EndOfStreamStateEPb;
  nn_os_UnlockMutex(a1 + 728);
  return v54;
}

#pragma GCC visibility pop
