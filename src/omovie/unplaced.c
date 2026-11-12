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
__int64 GameHr_18cde80(__int64, unsigned int);
__int64 GameHr_18cdf40(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 movie_VideoDecoder_ReleaseVideoFrame_alt1(__int64, __int64) __asm__(
    "movie_VideoDecoder_ReleaseVideoFrame");
__int64
movie_VideoFrame_GetBuffer_alt1(__int64, __int64,
                                __int64) __asm__("movie_VideoFrame_GetBuffer");
__int64 movie_VideoFrame_GetEndOfStreamState_alt1(__int64, __int64) __asm__(
    "movie_VideoFrame_GetEndOfStreamState");
__int64 movie_VideoFrame_GetNativeImageHandle_alt1(__int64, __int64) __asm__(
    "movie_VideoFrame_GetNativeImageHandle");
__int64 movie_VideoFrame_GetTimeStamp_alt1(__int64, __int64) __asm__(
    "movie_VideoFrame_GetTimeStamp");
__int64 movie_VideoFrame_SetEndOfStreamState_alt1(__int64, bool) __asm__(
    "movie_VideoFrame_SetEndOfStreamState");
__int64 nn_oe_GetProgramTotalActiveTime_alt1() __asm__(
    "nn_oe_GetProgramTotalActiveTime");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_SignalEvent_alt1(__int64) __asm__("nn_os_SignalEvent");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void __attribute__((noreturn))
GameRoutine_18cda20_alt1() __asm__("GameRoutine_18cda20");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 omovie_18cd4a0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  unsigned int TimeStampEPN2nn8TimeSpanE;
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
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  unsigned int v52;
  char v54[4];
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;

  nn_os_LockMutex_alt1(a1 + 728);
  v4 = *(__int64**)(a1 + 704);
  if (v4 != *(__int64**)(a1 + 712)) {
    do {
      while (1) {
        v6 = *v4;
        v5 = v4[1];
        if (v5 == 0 || (unsigned int)GameData_21a4eb0(v5, 0) == 0) {
          break;
        }
        v4 += 2;
        if (v4 == *(__int64**)(a1 + 712)) {
          goto LABEL_11;
        }
      }
      movie_VideoFrame_SetEndOfStreamState_alt1(v6, false);
      movie_VideoDecoder_ReleaseVideoFrame_alt1(*(_QWORD*)(a1 + 560), v6);
      v7 = *(__int64**)(a1 + 712);
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
  TimeStampEPN2nn8TimeSpanE = 0;
  if ((*(_BYTE*)(a1 + 760) & 1) == 0 && (*(_BYTE*)(a1 + 763) & 1) != 0) {
    v12 = *(__int64**)(a1 + 680);
    if (v12 == *(__int64**)(a1 + 688)) {
    LABEL_63:
      TimeStampEPN2nn8TimeSpanE = 0;
    }
    else {
      *(_DWORD*)(a1 + 808) = 0;
      while (1) {
        v13 = *v12;
        v58 = 0;
        v57 = 0;
        v56 = 0;
        TimeStampEPN2nn8TimeSpanE =
            movie_VideoFrame_GetTimeStamp_alt1(v13, (__int64)&v56);
        if (TimeStampEPN2nn8TimeSpanE != 0) {
          break;
        }
        if (*(_BYTE*)(a1 + 596) == 1) {
          v14 = v56;
          v15 = *(_QWORD*)(a1 + 616);
          *(_BYTE*)(a1 + 596) = 0;
          v16 = v14 / 1000;
          v17 = nn_oe_GetProgramTotalActiveTime_alt1() / 1000;
          nn_os_LockMutex_alt1(v15);
          *(_QWORD*)(v15 + 32) = v16;
          *(_QWORD*)(v15 + 40) = v17;
          nn_os_UnlockMutex_alt1(v15);
        }
        v18 = *(_QWORD*)(a1 + 616);
        v19 = v56 / 1000;
        nn_os_LockMutex_alt1(v18);
        v20 = (__int64)((double)(v19 - *(_QWORD*)(v18 + 32)) /
                            *(double*)(v18 + 48) +
                        (double)*(__int64*)(v18 + 40));
        nn_os_UnlockMutex_alt1(v18);
        if (nn_oe_GetProgramTotalActiveTime_alt1() / -1000 + v20 > 3999) {
          goto LABEL_63;
        }
        TimeStampEPN2nn8TimeSpanE =
            movie_VideoFrame_GetEndOfStreamState_alt1(v13, a1 + 760);
        if (TimeStampEPN2nn8TimeSpanE != 0) {
          break;
        }
        v21 = *(_QWORD*)(a1 + 616);
        v22 = v56 / 1000;
        v23 = *(unsigned __int8*)(a1 + 596);
        *(_QWORD*)(a1 + 600) = v56 / 1000;
        if (v23 == 1) {
          *(_BYTE*)(a1 + 596) = 0;
          v24 = nn_oe_GetProgramTotalActiveTime_alt1() / 1000;
          nn_os_LockMutex_alt1(v21);
          *(_QWORD*)(v21 + 32) = v22;
          *(_QWORD*)(v21 + 40) = v24;
          nn_os_UnlockMutex_alt1(v21);
          v22 = *(_QWORD*)(a1 + 600);
        }
        nn_os_LockMutex_alt1(v21);
        v25 = (__int64)((double)(v22 - *(_QWORD*)(v21 + 32)) /
                            *(double*)(v21 + 48) +
                        (double)*(__int64*)(v21 + 40));
        nn_os_UnlockMutex_alt1(v21);
        v26 = v25 - nn_oe_GetProgramTotalActiveTime_alt1() / 1000;
        if (v26 >= 0) {
          if (v26 != 0) {
            nn_os_SleepThread(1000 * v26);
          }
        LABEL_32:
          v30 = *(_DWORD*)(a1 + 796);
          v55 = 0;
          if (v30 == 2) {
            TimeStampEPN2nn8TimeSpanE =
                movie_VideoFrame_GetNativeImageHandle_alt1(v13, (__int64)&v55);
            if (TimeStampEPN2nn8TimeSpanE != 0) {
              break;
            }
            GameHr_18cde80(*(_QWORD*)(a1 + 568), v55);
            v57 = 4;
          }
          else if (v30 == 1) {
            TimeStampEPN2nn8TimeSpanE = movie_VideoFrame_GetBuffer_alt1(
                v13, (__int64)&v58, (__int64)&v57);
            if (TimeStampEPN2nn8TimeSpanE != 0) {
              break;
            }
            GameHr_18cdf40(*(_QWORD*)(a1 + 568), v58);
          }
          v31 = *(_QWORD*)(a1 + 680);
          v32 = *(_QWORD*)(a1 + 688);
          v33 = v32 - (v31 + 8);
          if (v32 != v31 + 8) {
            memmove_alt1(*(_QWORD*)(a1 + 680), v31 + 8, v32 - (v31 + 8));
          }
          v54[0] = 0;
          *(_QWORD*)(a1 + 688) = v31 + v33;
          TimeStampEPN2nn8TimeSpanE =
              movie_VideoFrame_GetEndOfStreamState_alt1(v13, (__int64)v54);
          if (TimeStampEPN2nn8TimeSpanE != 0) {
            break;
          }
          TimeStampEPN2nn8TimeSpanE =
              movie_VideoFrame_SetEndOfStreamState_alt1(v13, false);
          if (TimeStampEPN2nn8TimeSpanE != 0) {
            break;
          }
          if (v57 != 0 && (v54[0] & 1) == 0) {
            v34 = *(_QWORD*)(a1 + 568);
            ((void (*)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                       __int64))GameRoutine_18ce260)(
                v34, *(unsigned int*)(v34 + 16), *(unsigned int*)(v34 + 24), 0,
                *(unsigned int*)(v34 + 16),
                (unsigned int)(*(_DWORD*)(v34 + 24) * *(_DWORD*)(v34 + 16)),
                a2);
          }
          v35 = *(__int64**)(a1 + 712);
          v36 = *(_QWORD*)(*(_QWORD*)(a1 + 568) + 144LL);
          v37 = *(_QWORD*)(a1 + 720);
          if ((unsigned __int64)v35 >= v37) {
            v39 = *(_QWORD*)(a1 + 704);
            v40 = (unsigned __int64)v35 - v39;
            v41 = ((__int64)v35 - v39) >> 4;
            v42 = v41 + 1;
            if ((unsigned __int64)(v41 + 1) >> 60 != 0) {
              GameRoutine_18cda20_alt1();
            }
            v43 = v37 - v39;
            v44 = fw_memory_g_heap_manager_ptr;
            if (v43 >> 3 > v42) {
              v42 = v43 >> 3;
            }
            if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF0LL) {
              v45 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v45 = v42;
            }
            if (v45 != 0) {
              if (v45 >> 60 != 0) {
                GameRoutine_60a210_alt1();
              }
              v46 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v45, 16, 0);
            }
            else {
              v46 = 0;
            }
            v47 = (__int64*)(v46 + v40);
            v48 = v46 + 16 * v45;
            *v47 = v13;
            v47[1] = v36;
            v49 = v46 + v40 - 16 * v41;
            v38 = v46 + v40 + 16;
            memcpy_alt1(v49, v39, v40);
            *(_QWORD*)(a1 + 704) = v49;
            *(_QWORD*)(a1 + 712) = v38;
            *(_QWORD*)(a1 + 720) = v48;
            if (v39 != 0) {
              v50 = 128;
              if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) == 0) {
                v50 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v44 + v50, v39);
            }
          }
          else {
            *v35 = v13;
            v35[1] = v36;
            v38 = (__int64)(v35 + 2);
          }
          v51 = *(unsigned __int8*)(a1 + 760);
          *(_QWORD*)(a1 + 712) = v38;
          if (v51 == 1) {
          LABEL_62:
            nn_os_SignalEvent_alt1(*(_QWORD*)(a1 + 632));
            goto LABEL_63;
          }
          goto LABEL_63;
        }
        if ((unsigned __int64)v26 > 0xFFFFFFFFFFFF63BFLL) {
          goto LABEL_32;
        }
        ++*(_DWORD*)(a1 + 608);
        if (*(_BYTE*)(a1 + 760) == 1) {
          goto LABEL_62;
        }
        if (*(_QWORD*)(a1 + 688) - *(_QWORD*)(a1 + 680) == 8) {
          goto LABEL_32;
        }
        movie_VideoFrame_SetEndOfStreamState_alt1(v13, false);
        movie_VideoDecoder_ReleaseVideoFrame_alt1(*(_QWORD*)(a1 + 560), v13);
        v27 = *(_QWORD*)(a1 + 680);
        v28 = *(_QWORD*)(a1 + 688);
        v29 = v28 - (v27 + 8);
        if (v28 != v27 + 8) {
          memmove_alt1(*(_QWORD*)(a1 + 680), v27 + 8, v28 - (v27 + 8));
        }
        v12 = *(__int64**)(a1 + 680);
        *(_QWORD*)(a1 + 688) = v27 + v29;
        if (v12 == (__int64*)(v27 + v29)) {
          goto LABEL_63;
        }
      }
    }
  }
  v52 = TimeStampEPN2nn8TimeSpanE;
  nn_os_UnlockMutex_alt1(a1 + 728);
  return v52;
}

#pragma GCC visibility pop
